#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "base.h"
#include "log.h"
#include "buffer.h"

#include "plugin.h"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

typedef struct {
	pcre_keyvalue_buffer *rewrite;
	buffer *once;
	data_config *context; /* to which apply me */
} plugin_config;

typedef struct {
	enum { REWRITE_STATE_UNSET, REWRITE_STATE_FINISHED} state;
	int loops;
} handler_ctx;

typedef struct {
	PLUGIN_DATA;
	buffer *match_buf;

	plugin_config **config_storage;

	plugin_config conf;
} plugin_data;

static handler_ctx * handler_ctx_init() {
	handler_ctx * hctx;

	hctx = calloc(1, sizeof(*hctx));

	hctx->state = REWRITE_STATE_UNSET;
	hctx->loops = 0;

	return hctx;
}

static void handler_ctx_free(handler_ctx *hctx) {
	free(hctx);
}


INIT_FUNC(mod_rewrite_init) {
	plugin_data *p;

	UNUSED(srv);

	p = calloc(1, sizeof(*p));

	p->match_buf = buffer_init();

	return p;
}

FREE_FUNC(mod_rewrite_free) {
	plugin_data *p = p_d;

	UNUSED(srv);

	if (!p) return HANDLER_GO_ON;

	buffer_free(p->match_buf);
	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			if (!s) continue;
			
			pcre_keyvalue_buffer_free(s->rewrite);
			buffer_free(s->once);

			free(s);
		}
		free(p->config_storage);
	}

	free(p);

	return HANDLER_GO_ON;
}

static handler_t parse_config_entry(server *UNUSED_PARAM(srv), plugin_config *s, array *ca, const char *option, size_t option_len, int once) {
	data_unset *du;

	if (NULL != (du = array_get_element(ca, option, option_len))) {
		data_array *da = (data_array *)du;
		size_t j;

		if (du->type != TYPE_ARRAY) {
			ERROR("unexpected type (%d) for key %s, expected 'array of strings'", 
					du->type, option);

			return HANDLER_ERROR;
		}

		da = (data_array *)du;

		for (j = 0; j < da->value->used; j++) {
			if (da->value->data[j]->type != TYPE_STRING) {
				ERROR("unexpected type (%d) for value of %s[%s], expected 'string'", 
					da->value->data[j]->type, option, 
					BUF_STR(da->value->data[j]->key));

				return HANDLER_ERROR;
			}

			if (0 != pcre_keyvalue_buffer_append(s->rewrite,
							    ((data_string *)(da->value->data[j]))->key->ptr,
							    ((data_string *)(da->value->data[j]))->value->ptr)) {
#ifdef HAVE_PCRE_H
				ERROR("pcre-compile failed for: %s", BUF_STR(da->value->data[j]->key));
#else
				ERROR("pcre support is missing, please install libpcre and the headers%s", "");
#endif
			}

			if (once) {
				buffer_append_string_len(s->once, CONST_STR_LEN("1"));
			} else {
				buffer_append_string_len(s->once, CONST_STR_LEN("0"));
			}
		}
	}

	return HANDLER_GO_ON;
}

SETDEFAULTS_FUNC(mod_rewrite_set_defaults) {
	plugin_data *p = p_d;
	size_t i = 0;

	config_values_t cv[] = {
		{ "url.rewrite-repeat",        NULL, T_CONFIG_LOCAL, T_CONFIG_SCOPE_CONNECTION }, /* 0 */
		{ "url.rewrite-once",          NULL, T_CONFIG_LOCAL, T_CONFIG_SCOPE_CONNECTION }, /* 1 */

		/* old names, still supported
		 *
		 * url.rewrite remapped to url.rewrite-once
		 * url.rewrite-final    is url.rewrite-once
		 *
		 */
		{ "url.rewrite",               NULL, T_CONFIG_LOCAL, T_CONFIG_SCOPE_CONNECTION }, /* 2 */
		{ "url.rewrite-final",         NULL, T_CONFIG_LOCAL, T_CONFIG_SCOPE_CONNECTION }, /* 3 */
		{ NULL,                        NULL, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET }
	};

	if (!p) return HANDLER_ERROR;

	/* 0 */
	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));

	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s;
		array *ca;

		s = calloc(1, sizeof(plugin_config));
		s->rewrite   = pcre_keyvalue_buffer_init();
		s->once      = buffer_init();

		p->config_storage[i] = s;
		ca = ((data_config *)srv->config_context->data[i])->value;

		if (0 != config_insert_values_global(srv, ca, cv)) {
			return HANDLER_ERROR;
		}

		if (HANDLER_GO_ON != parse_config_entry(srv, s, ca, CONST_STR_LEN("url.rewrite-once"),   1)) return HANDLER_ERROR;
		if (HANDLER_GO_ON != parse_config_entry(srv, s, ca, CONST_STR_LEN("url.rewrite-final"),  1)) return HANDLER_ERROR;
		if (HANDLER_GO_ON != parse_config_entry(srv, s, ca, CONST_STR_LEN("url.rewrite"),        1)) return HANDLER_ERROR;
		if (HANDLER_GO_ON != parse_config_entry(srv, s, ca, CONST_STR_LEN("url.rewrite-repeat"), 0)) return HANDLER_ERROR;
	}

	return HANDLER_GO_ON;
}
#ifdef HAVE_PCRE_H
static int mod_rewrite_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i, j;
	plugin_config *s = p->config_storage[0];
	p->conf.rewrite = s->rewrite;
	p->conf.once    = s->once;

	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];

		if (COMP_HTTP_URL == dc->comp) continue;

		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;

		/* merge config */
		for (j = 0; j < dc->value->used; j++) {
			data_unset *du = dc->value->data[j];

			if (buffer_is_equal_string(du->key, CONST_STR_LEN("url.rewrite"))) {
				p->conf.rewrite = s->rewrite;
				p->conf.once    = s->once;
				p->conf.context = dc;
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("url.rewrite-once"))) {
				p->conf.rewrite = s->rewrite;
				p->conf.once    = s->once;
				p->conf.context = dc;
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("url.rewrite-repeat"))) {
				p->conf.rewrite = s->rewrite;
				p->conf.once    = s->once;
				p->conf.context = dc;
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("url.rewrite-final"))) {
				p->conf.rewrite = s->rewrite;
				p->conf.once    = s->once;
				p->conf.context = dc;
			}
		}
	}

	return 0;
}
#endif
URIHANDLER_FUNC(mod_rewrite_con_reset) {
	plugin_data *p = p_d;

	UNUSED(srv);

	if (con->plugin_ctx[p->id]) {
		handler_ctx_free(con->plugin_ctx[p->id]);
		con->plugin_ctx[p->id] = NULL;
	}

	return HANDLER_GO_ON;
}

URIHANDLER_FUNC(mod_rewrite_uri_handler) {
#ifdef HAVE_PCRE_H
	plugin_data *p = p_d;
	int i;
	handler_ctx *hctx = NULL;

	/*
	 * REWRITE URL
	 *
	 * e.g. rewrite /base/ to /index.php?section=base
	 *
	 */

	if (con->plugin_ctx[p->id]) {
		hctx = con->plugin_ctx[p->id];

		if (hctx->loops++ > 100) {
			ERROR("ENDLESS LOOP IN rewrite-rule DETECTED ... aborting request after %d loops at %s", 
					hctx->loops, BUF_STR(con->request.uri));

			con->http_status = 500;

			return HANDLER_FINISHED;
		}

		if (hctx->state == REWRITE_STATE_FINISHED) return HANDLER_GO_ON;
	}

	mod_rewrite_patch_connection(srv, con, p);

	if (!p->conf.rewrite) return HANDLER_GO_ON;

	buffer_copy_string_buffer(p->match_buf, con->request.uri);
	i = config_exec_pcre_keyvalue_buffer(con, p->conf.rewrite, p->conf.context, p->match_buf, con->request.uri);

	if (i >= 0) {
		if (!hctx) {
			hctx = handler_ctx_init();

			con->plugin_ctx[p->id] = hctx;
		}

		if (p->conf.once->ptr[i] == '1')
			hctx->state = REWRITE_STATE_FINISHED;

		/* looks like we finished the rewrite 
		 *
		 * start the uri-splitting again
		 * */

		if (con->request.uri->used == 0 ||
		    con->request.uri->ptr[0] != '/') {
			con->http_status = 500;

			ERROR("url.rewrite contains a regex for '%s' which leads to a URI without a leading slash: %s", 
					BUF_STR(p->match_buf), BUF_STR(con->request.uri));

			return HANDLER_FINISHED;
		}

		return HANDLER_COMEBACK;
	} else if (i != PCRE_ERROR_NOMATCH) {
		ERROR("execution error while matching '%s' against '%s': %d", 
				BUF_STR(p->match_buf), BUF_STR(con->request.uri), i);
		con->http_status = 500;

		return HANDLER_FINISHED;
	}
#undef N

#else
	UNUSED(srv);
	UNUSED(con);
	UNUSED(p_d);
#endif

	return HANDLER_GO_ON;
}

LI_EXPORT int mod_rewrite_plugin_init(plugin *p) {
	p->version     = LIGHTTPD_VERSION_ID;
	p->name        = buffer_init_string("rewrite");

	p->init        = mod_rewrite_init;
	/* it has to stay _raw as we are matching on uri + querystring
	 */

	p->handle_uri_raw = mod_rewrite_uri_handler;
	p->set_defaults = mod_rewrite_set_defaults;
	p->cleanup     = mod_rewrite_free;
	p->connection_reset = mod_rewrite_con_reset;

	p->data        = NULL;

	return 0;
}
