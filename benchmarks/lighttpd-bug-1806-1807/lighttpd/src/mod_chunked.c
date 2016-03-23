#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "base.h"
#include "log.h"
#include "buffer.h"
#include "response.h"
#include "filter.h"

#include "plugin.h"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#define CONFIG_CHUNKED_ENCODING "chunked.encoding"
#define CONFIG_CHUNKED_DEBUG "chunked.debug"

/**
 * This plugin adds HTTP/1.1 chunked encoding support
 * as a filter module.
 *
 */

/* plugin config for all request/connections */

typedef struct {
	unsigned short encoding;
	unsigned short debug;
} plugin_config;

typedef struct {
	PLUGIN_DATA;

	plugin_config **config_storage;

	plugin_config conf;
} plugin_data;

typedef struct {
	unsigned short debug;
	filter *fl;
} handler_ctx;

static handler_ctx * handler_ctx_init() {
	handler_ctx * hctx;

	hctx = calloc(1, sizeof(*hctx));
	hctx->debug = 0;
	hctx->fl = NULL;

	return hctx;
}

static void handler_ctx_free(handler_ctx *hctx) {

	free(hctx);
}

/* init the plugin data */
INIT_FUNC(mod_chunked_init) {
	plugin_data *p;

	UNUSED(srv);

	p = calloc(1, sizeof(*p));

	return p;
}

/* detroy the plugin data */
FREE_FUNC(mod_chunked_free) {
	plugin_data *p = p_d;

	UNUSED(srv);

	if (!p) return HANDLER_GO_ON;

	if (p->config_storage) {
		size_t i;

		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			if (!s) continue;

			free(s);
		}
		free(p->config_storage);
	}

	free(p);

	return HANDLER_GO_ON;
}

/* handle plugin config and check values */

SETDEFAULTS_FUNC(mod_chunked_set_defaults) {
	plugin_data *p = p_d;
	size_t i = 0;

	config_values_t cv[] = {
		{ CONFIG_CHUNKED_ENCODING,      NULL, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION },    /* 0 */
		{ CONFIG_CHUNKED_DEBUG,         NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },      /* 1 */
		{ NULL,                         NULL, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET }
	};

	if (!p) return HANDLER_ERROR;

	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));

	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s;

		s = calloc(1, sizeof(plugin_config));
		s->encoding = 1;
		s->debug = 0;

		cv[0].destination = &(s->encoding);
		cv[1].destination = &(s->debug);

		p->config_storage[i] = s;

		if (0 != config_insert_values_global(srv, ((data_config *)srv->config_context->data[i])->value, cv)) {
			return HANDLER_ERROR;
		}
	}

	return HANDLER_GO_ON;
}

REQUESTDONE_FUNC(mod_chunked_reset) {
	plugin_data *p = p_d;
	handler_ctx *hctx = con->plugin_ctx[p->id];

	UNUSED(srv);

	if (NULL == hctx) return HANDLER_GO_ON;

	handler_ctx_free(hctx);
	con->plugin_ctx[p->id] = NULL;

	return HANDLER_GO_ON;
}

static int mod_chunked_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i, j;
	plugin_config *s = p->config_storage[0];

	PATCH_OPTION(encoding);
	PATCH_OPTION(debug);

	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];

		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;

		/* merge config */
		for (j = 0; j < dc->value->used; j++) {
			data_unset *du = dc->value->data[j];

			if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_CHUNKED_ENCODING))) {
				PATCH_OPTION(encoding);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_CHUNKED_DEBUG))) {
				PATCH_OPTION(debug);
			}
		}
	}

	return 0;
}

URIHANDLER_FUNC(mod_chunked_response_header) {
	plugin_data *p = p_d;
	handler_ctx *hctx;
	filter *fl;
	chunkqueue *in;
	int use_chunked = 0;

	mod_chunked_patch_connection(srv, con, p);

	/* get filter. */
	fl = filter_chain_get_filter(con->send_filters, p->id);
	if (!fl) {
		if (p->conf.debug > 0) TRACE("%s", "add chunked filter to filter chain");
		fl = filter_chain_create_filter(con->send_filters, p->id);
	}
	/* get our input and output chunkqueues. */
	if (!fl || !fl->prev) {
		filter_chain_remove_filter(con->send_filters, fl);
		return HANDLER_GO_ON;
	}
	in = fl->prev->cq;

	/* check if response needs chunked encoding. */
	if(in->is_closed) {
		con->response.content_length = chunkqueue_length(in);
	}
	if(con->response.content_length >= 0) {
		if (p->conf.debug > 0) TRACE("response content length known, disabling chunked encoding.  len=%d", con->response.content_length);
		use_chunked = 0;
	} else if (con->request.http_method != HTTP_METHOD_HEAD) {
		/* a HEAD request never gets a chunk-encoding, but might stay with keep-alive
		 * in case the queue was closed already (above) we still have the content-length */
		
		/* we don't know the size of the content yet
		 * - either enable chunking
		 * - or disable keep-alive  */

		if (con->request.http_version == HTTP_VERSION_1_1 && p->conf.encoding) {
			use_chunked = 1;
		} else {
			if (p->conf.debug > 0)
				TRACE("%s", "content length unknown and can't use chunked encoding.  disable keep-alive");
			con->keep_alive = 0;
			use_chunked = 0;
		}
	}

	if (!use_chunked) {
		/* chunked encoding disabled.  remove filter */
		con->response.transfer_encoding &= ~HTTP_TRANSFER_ENCODING_CHUNKED;
		filter_chain_remove_filter(con->send_filters, fl);
		return HANDLER_GO_ON;
	}

	/* enable chunked encoding */
	con->response.transfer_encoding |= HTTP_TRANSFER_ENCODING_CHUNKED;
	hctx = handler_ctx_init();
	hctx->debug = p->conf.debug;
	con->plugin_ctx[p->id] = hctx;
	hctx->fl = fl;

	if (hctx->debug > 0)
		TRACE("%s", "chunked encoding enabled");

	return HANDLER_GO_ON;
}

static int http_chunk_append_len(chunkqueue *cq, size_t len) {
	size_t i, olen = len, j;
	buffer *b;

	b = buffer_init();

	if (len == 0) {
		buffer_copy_string(b, "0");
	} else {
		for (i = 0; i < 8 && len; i++) {
			len >>= 4;
		}

		/* i is the number of hex digits we have */
		buffer_prepare_copy(b, i + 1);

		for (j = i-1, len = olen; j+1 > 0; j--) {
			b->ptr[j] = (len & 0xf) + (((len & 0xf) <= 9) ? '0' : 'a' - 10);
			len >>= 4;
		}
		b->used = i;
		b->ptr[b->used++] = '\0';
	}

	buffer_append_string(b, "\r\n");
	chunkqueue_append_buffer(cq, b);
	len = b->used - 1;

	buffer_free(b);

	return len;
}

/**
 * apply HTTP/1.1 chunked encoding if necessary
 */
URIHANDLER_FUNC(mod_chunked_encode_response_content) {
	plugin_data *p = p_d;
	handler_ctx *hctx = con->plugin_ctx[p->id];
	chunkqueue *in;
	chunkqueue *out;
	int we_have = 0;
	chunk *c;

	UNUSED(srv);

	/* check if chunk-encoding is enabled. */
	if (!hctx) return HANDLER_GO_ON;

	/* get our input and output chunkqueues. */
	if (!hctx->fl || !hctx->fl->prev) return HANDLER_GO_ON;
	in = hctx->fl->prev->cq;
	out = hctx->fl->cq;

	/* no more data to encode. */
	if (out->is_closed) return HANDLER_GO_ON;
	/**/

	for (c = in->first; c; c = c->next) {
		switch (c->type) {
		case MEM_CHUNK:
			if (c->mem->used == 0) continue;

			we_have = c->mem->used - c->offset - 1;
			in->bytes_out += we_have;
			if(we_have == 0) continue;
			we_have += http_chunk_append_len(out, we_have);
			chunkqueue_append_buffer(out, c->mem);
			c->offset = c->mem->used - 1;
			break;
		case FILE_CHUNK:
			if (c->file.length == 0) continue;

			we_have = c->file.length;
			in->bytes_out += we_have;
			we_have += http_chunk_append_len(out, c->file.length);
			if(c->file.is_temp) {
				chunkqueue_steal_tempfile(out, c);
			} else {
				chunkqueue_append_file(out, c->file.name, c->file.start, c->file.length);
			}

			c->offset = c->file.length;
			break;
		case UNUSED_CHUNK:
			break;
		}
		chunkqueue_append_mem(out, "\r\n", 2 + 1);
		we_have += 2;
		out->bytes_in += we_have;
	}
	if (in->is_closed) {
		chunkqueue_append_mem(out, "0\r\n\r\n", 5 + 1);
		out->bytes_in += 5;
	}
	if(hctx->debug > 1) TRACE("chunk encoded: in=%lld, out=%lld", in->bytes_out, out->bytes_in);

	chunkqueue_remove_finished_chunks(in);

	if (in->is_closed) {
		/* mark the output queue as finished. */
		out->is_closed = 1;
	}
	return HANDLER_GO_ON;
}

/* this function is called at dlopen() time and inits the callbacks */

LI_EXPORT int mod_chunked_plugin_init(plugin *p) {
	p->version     = LIGHTTPD_VERSION_ID;
	p->name        = buffer_init_string("chunked");

	p->init        = mod_chunked_init;
	p->set_defaults  = mod_chunked_set_defaults;
	p->handle_response_header = mod_chunked_response_header;
	p->handle_filter_response_content = mod_chunked_encode_response_content;
	p->connection_reset        = mod_chunked_reset;
	p->cleanup     = mod_chunked_free;

	p->data        = NULL;

	return 0;
}
