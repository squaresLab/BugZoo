#include <stdlib.h>
#include <string.h>

#include "mod_proxy_core.h"
#include "mod_proxy_core_protocol.h"
#include "configfile.h"
#include "buffer.h"
#include "log.h"
#include "sys-strings.h"

#define CORE_PLUGIN "mod_proxy_core"

typedef struct {
	PLUGIN_DATA;

	proxy_protocol *protocol;
} protocol_plugin_data;

typedef enum {
	HTTP_CHUNK_LEN,
	HTTP_CHUNK_EXTENSION,
	HTTP_CHUNK_DATA,
	HTTP_CHUNK_END
} http_chunk_state_t;

/**
 * The protocol will use this struct for storing state variables
 * used in decoding the stream
 */
typedef struct {
	http_chunk_state_t chunk_parse_state;
	off_t chunk_len;
	off_t chunk_offset;
	buffer *buf;
} protocol_state_data;

protocol_state_data *protocol_state_data_init(void) {
	protocol_state_data *data;

	data = calloc(1, sizeof(*data));
	data->chunk_parse_state = HTTP_CHUNK_LEN;
	data->buf = buffer_init();

	return data;
}

void protocol_state_data_free(protocol_state_data *data) {
	buffer_free(data->buf);
	free(data);
}

void protocol_state_data_reset(protocol_state_data *data) {
	buffer_reset(data->buf);
	data->chunk_parse_state = HTTP_CHUNK_LEN;
}

PROXY_CONNECTION_FUNC(proxy_http_init) {

	UNUSED(srv);

	if(!proxy_con->protocol_data) {
		proxy_con->protocol_data = protocol_state_data_init();
	}
	return 1;
}

PROXY_CONNECTION_FUNC(proxy_http_cleanup) {

	UNUSED(srv);

	if(proxy_con->protocol_data) {
		protocol_state_data_free((protocol_state_data *)proxy_con->protocol_data);
		proxy_con->protocol_data = NULL;
	}
	return 1;
}

/**
 * parse the HTTP response header
 */
static handler_t proxy_http_parse_response_headers(proxy_session *sess, chunkqueue *in) {
	data_string *ds;

	http_response_reset(sess->resp);

	/* http response parser. */
	switch(http_response_parse_cq(in, sess->resp)) {
	case PARSE_ERROR:
		/* bad gateway */
		http_response_reset(sess->resp);
		sess->have_response_headers = 1;
		sess->resp->status = 502;
		return HANDLER_ERROR;
	case PARSE_NEED_MORE:
		return HANDLER_GO_ON;
	case PARSE_SUCCESS:
	default:
		break;
	}
	/* check for Transfer-Encoding header. */
	if (NULL != (ds = (data_string *)array_get_element(sess->resp->headers, CONST_STR_LEN("Transfer-Encoding")))) {
		if (strstr(ds->value->ptr, "chunked")) {
			sess->is_chunked = 1;
		}
	}
	/* finished parsing response headers. */
	sess->have_response_headers = 1;
	return HANDLER_FINISHED;
}

static handler_t proxy_http_parse_chunked_stream(server *srv, proxy_session *sess, chunkqueue *in, chunkqueue *out) {
	protocol_state_data *data = (protocol_state_data *)sess->proxy_con->protocol_data;
	char *err = NULL;
	off_t we_have = 0, we_want = 0;
	off_t chunk_len = 0;
	off_t offset = 0;
	buffer *b;
	chunk *c;
	char ch = '\0';
	int finished = 0;

	UNUSED(srv);

	for (c = in->first; c && !finished;) {
		if(c->mem->used == 0) {
			c = c->next;
			continue;
		}
		switch(data->chunk_parse_state) {
		case HTTP_CHUNK_LEN:
			/* parse chunk len. */
			for(offset = c->offset; (size_t)(offset) < (c->mem->used - 1) ; offset++) {
				ch = c->mem->ptr[offset];
				if(!light_isxdigit(ch)) break;
			}
			if(offset > c->offset) {
				buffer_append_string_len(data->buf, (c->mem->ptr + c->offset), offset - c->offset);
				in->bytes_out += (offset - c->offset);
				c->offset = offset;
			}
			if (!(ch == ' ' || ch == '\r' || ch == ';')) {
				if (ch == '\0') {
					/* get next chunk from queue */
					break;
				}
				/* protocol error.  bad http-chunk len */
				return HANDLER_ERROR;
			}
			data->chunk_len = strtol(BUF_STR(data->buf), &err, 16);
			data->chunk_offset = 0;
			buffer_reset(data->buf);
			data->chunk_parse_state = HTTP_CHUNK_EXTENSION;
		case HTTP_CHUNK_EXTENSION:
			/* find CRLF.  discard chunk-extension */
			for(ch = 0; (size_t)(c->offset) < (c->mem->used - 1) && ch != '\n' ;) {
				ch = c->mem->ptr[c->offset];
				c->offset++;
				in->bytes_out++;
			}
			if(ch != '\n') {
				/* get next chunk from queue */
				break;
			}
			if(data->chunk_len > 0) {
				data->chunk_parse_state = HTTP_CHUNK_DATA;
			} else {
				data->chunk_parse_state = HTTP_CHUNK_END;
			}
		case HTTP_CHUNK_DATA:
			chunk_len = data->chunk_len - data->chunk_offset;
			/* copy chunk_len bytes from in queue to out queue. */
			we_have = c->mem->used - c->offset - 1;
			we_want = chunk_len > we_have ? we_have : chunk_len;

			if (c->offset == 0 && we_want == we_have) {
				/* we are copying the whole buffer, just steal it */
				chunkqueue_steal_chunk(out, c);
			} else {
				b = chunkqueue_get_append_buffer(out);
				buffer_copy_string_len(b, c->mem->ptr + c->offset, we_want);
				c->offset += we_want;
			}

			chunk_len -= we_want;
			out->bytes_in += we_want;
			in->bytes_out += we_want;
			data->chunk_offset += we_want;
			if(chunk_len > 0) {
				/* get next chunk from queue */
				break;
			}
			data->chunk_offset = 0;
			data->chunk_parse_state = HTTP_CHUNK_END;
		case HTTP_CHUNK_END:
			/* discard CRLF.*/
			for(ch = 0; (size_t)(c->offset) < (c->mem->used - 1) && ch != '\n' ;) {
				ch = c->mem->ptr[c->offset];
				c->offset++;
				in->bytes_out++;
			}
			if(ch != '\n') {
				/* get next chunk from queue */
				break;
			}
			/* final chunk */
			if(data->chunk_len == 0) {
				finished = 1;
			}
			/* finished http-chunk.  reset and parse next chunk. */
			protocol_state_data_reset(data);
			break;
		}
		if((size_t)(c->offset) == c->mem->used - 1) {
			c = c->next;
		}
	}
	chunkqueue_remove_finished_chunks(in);
	if (finished) {
		sess->is_request_finished = 1;
		return HANDLER_FINISHED;
	}
	/* ran out of data. */
	return HANDLER_GO_ON;
}

PROXY_STREAM_DECODER_FUNC(proxy_http_stream_decoder) {
	proxy_connection *proxy_con = sess->proxy_con;
	chunkqueue *in = proxy_con->recv;
	chunk *c;

	if (in->first == NULL) {
		if ((sess->content_length >= 0 && sess->bytes_read == sess->content_length) || in->is_closed) {
			sess->is_request_finished = 1;
			return HANDLER_FINISHED;
		}

		return HANDLER_GO_ON;
	}

	/* parse response headers. */
	if (!sess->have_response_headers) {
		handler_t rc = proxy_http_parse_response_headers(sess, in);
		if (rc != HANDLER_FINISHED) return rc;
	}

	if (sess->is_chunked) {
		return proxy_http_parse_chunked_stream(srv, sess, in, out);
	} else {
		/* no chunked encoding, ok, perhaps a content-length ? */

		chunkqueue_remove_finished_chunks(in);
		for (c = in->first; c; c = c->next) {
			buffer *b;

			if (c->mem->used == 0) continue;

			out->bytes_in += c->mem->used - c->offset - 1;
			in->bytes_out += c->mem->used - c->offset - 1;

			sess->bytes_read += c->mem->used - c->offset - 1;

			if (c->offset == 0) {
				/* we are copying the whole buffer, just steal it */

				chunkqueue_steal_chunk(out, c);
			} else {
				b = chunkqueue_get_append_buffer(out);
				buffer_copy_string_len(b, c->mem->ptr + c->offset, c->mem->used - c->offset - 1);
				c->offset = c->mem->used - 1; /* marks is read */
			}

			if (sess->bytes_read == sess->content_length) {
				break;
			}
		}

		if (in->is_closed || sess->bytes_read == sess->content_length) {
			sess->is_request_finished = 1;
			return HANDLER_FINISHED; /* finished */
		}
	}

	return HANDLER_GO_ON;
}

/**
 * transform the content-stream into a valid HTTP-content-stream
 *
 * as we don't apply chunked-encoding here, pass it on AS IS
 */
PROXY_STREAM_ENCODER_FUNC(proxy_http_stream_encoder) {
	proxy_connection *proxy_con = sess->proxy_con;
	chunkqueue *out = proxy_con->send;
	int we_have = 0;

	UNUSED(srv);

	/* output queue closed, can't encode any more data. */
	if(out->is_closed) return HANDLER_FINISHED;

	/* encode all request content data into output queue. */
	we_have = chunkqueue_steal_all_chunks(out, in);
	in->bytes_out += we_have;
	out->bytes_in += we_have;

	if (in->bytes_in == in->bytes_out && in->is_closed) {
		out->is_closed = 1;
		return HANDLER_FINISHED;
	}

	return HANDLER_GO_ON;
}

/**
 * generate a HTTP/1.1 proxy request from the set of request-headers
 *
 */
PROXY_STREAM_ENCODER_FUNC(proxy_http_encode_request_headers) {
	proxy_connection *proxy_con = sess->proxy_con;
	chunkqueue *out = proxy_con->send;
	connection *con = sess->remote_con;
	buffer *b;
	size_t i;

	UNUSED(srv);
	UNUSED(in);

	b = chunkqueue_get_append_buffer(out);

	/* request line */
	buffer_copy_string(b, get_http_method_name(con->request.http_method));
	BUFFER_APPEND_STRING_CONST(b, " ");

	/* request uri */
	buffer_append_string_buffer(b, sess->request_uri);

	if (con->request.http_version == HTTP_VERSION_1_1) {
		BUFFER_APPEND_STRING_CONST(b, " HTTP/1.1\r\n");
	} else {
		BUFFER_APPEND_STRING_CONST(b, " HTTP/1.0\r\n");
	}

	for (i = 0; i < sess->request_headers->used; i++) {
		data_string *ds;

		ds = (data_string *)sess->request_headers->data[i];

		buffer_append_string_buffer(b, ds->key);
		BUFFER_APPEND_STRING_CONST(b, ": ");
		buffer_append_string_buffer(b, ds->value);
		BUFFER_APPEND_STRING_CONST(b, "\r\n");
	}

	BUFFER_APPEND_STRING_CONST(b, "\r\n");

	out->bytes_in += b->used - 1;

	return HANDLER_FINISHED;
}

INIT_FUNC(mod_proxy_backend_http_init) {
	mod_proxy_core_plugin_data *core_data;
	protocol_plugin_data *p;

	/* get the plugin_data of the core-plugin */
	core_data = plugin_get_config(srv, CORE_PLUGIN);
	if(!core_data) return NULL;

	p = calloc(1, sizeof(*p));

	/* define protocol handler callbacks */
	p->protocol = (core_data->proxy_register_protocol)("http");

	p->protocol->proxy_stream_init = proxy_http_init;
	p->protocol->proxy_stream_cleanup = proxy_http_cleanup;
	p->protocol->proxy_stream_decoder = proxy_http_stream_decoder;
	p->protocol->proxy_stream_encoder = proxy_http_stream_encoder;
	p->protocol->proxy_encode_request_headers = proxy_http_encode_request_headers;

	return p;
}

FREE_FUNC(mod_proxy_backend_http_free) {
	protocol_plugin_data *p = p_d;

	UNUSED(srv);

	if (!p) return HANDLER_GO_ON;

	free(p);

	return HANDLER_GO_ON;
}

LI_EXPORT int mod_proxy_backend_http_plugin_init(plugin *p) {
	data_string *ds;

	p->version      = LIGHTTPD_VERSION_ID;
	p->name         = buffer_init_string("mod_proxy_backend_http");

	p->init         = mod_proxy_backend_http_init;
	p->cleanup      = mod_proxy_backend_http_free;

	p->data         = NULL;

	ds = data_string_init();
	buffer_copy_string(ds->value, CORE_PLUGIN);
	array_insert_unique(p->required_plugins, (data_unset *)ds);

	return 0;
}


