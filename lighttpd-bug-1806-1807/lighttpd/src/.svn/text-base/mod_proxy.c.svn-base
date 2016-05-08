#include <sys/types.h>

#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>

#include "buffer.h"
#include "server.h"
#include "keyvalue.h"
#include "log.h"

#include "fdevent.h"
#include "connections.h"
#include "response.h"
#include "joblist.h"

#include "plugin.h"

#include "inet_ntop_cache.h"
#include "crc32.h"
#include "network.h"

#include "http_resp.h"

#include <stdio.h>

#ifdef HAVE_SYS_FILIO_H
# include <sys/filio.h>
#endif

#include "sys-socket.h"
#include "sys-files.h"
#include "sys-strings.h"

#define data_proxy data_fastcgi
#define data_proxy_init data_fastcgi_init

#define PROXY_RETRY_TIMEOUT 60

/**
 *
 * the proxy module is based on the fastcgi module
 *
 * 28.06.2004 Jan Kneschke     The first release
 * 01.07.2004 Evgeny Rodichev  Several bugfixes and cleanups
 *            - co-ordinate up- and downstream flows correctly (proxy_demux_response
 *              and proxy_handle_fdevent)
 *            - correctly transfer upstream http_response_status;
 *            - some unused structures removed.
 *
 * TODO:      - delay upstream read if write_queue is too large
 *              (to prevent memory eating, like in apache). Shoud be
 *              configurable).
 *            - persistent connection with upstream servers
 *            - HTTP/1.1
 */



typedef enum {
	PROXY_BALANCE_UNSET,
	PROXY_BALANCE_FAIR,
	PROXY_BALANCE_HASH,
	PROXY_BALANCE_RR
} proxy_balance_t;

typedef struct {
	array *extensions;
	int debug;

	proxy_balance_t balance;

	array *last_used_backends; /* "extension" : last_used_backend */
} plugin_config;

typedef struct {
	PLUGIN_DATA;

	buffer *parse_response;
	buffer *balance_buf;

	http_resp *resp;

	array *ignore_headers;

	plugin_config **config_storage;

	plugin_config conf;
} plugin_data;

typedef enum {
	PROXY_STATE_INIT,
	PROXY_STATE_CONNECT,
	PROXY_STATE_PREPARE_WRITE,
	PROXY_STATE_WRITE,
	PROXY_STATE_RESPONSE_HEADER,
	PROXY_STATE_RESPONSE_CONTENT,
	PROXY_STATE_ERROR
} proxy_connection_state_t;

enum { PROXY_STDOUT, PROXY_END_REQUEST };

typedef struct {
	proxy_connection_state_t state;
	time_t state_timestamp;

	data_proxy *host;

	chunkqueue *wb;
	chunkqueue *rb;

	iosocket *sock; /* fd to the proxy process */

	size_t path_info_offset; /* start of path_info in uri.path */

	connection *remote_conn;  /* dump pointer */
	plugin_data *plugin_data; /* dump pointer */
} handler_ctx;


/* ok, we need a prototype */
static handler_t proxy_handle_fdevent(void *s, void *ctx, int revents);

static handler_ctx * handler_ctx_init() {
	handler_ctx * hctx;


	hctx = calloc(1, sizeof(*hctx));

	hctx->state = PROXY_STATE_INIT;
	hctx->host = NULL;

	hctx->wb = chunkqueue_init();
	hctx->rb = chunkqueue_init();

	hctx->sock = iosocket_init();

	return hctx;
}

static void handler_ctx_free(handler_ctx *hctx) {
	chunkqueue_free(hctx->wb);
	chunkqueue_free(hctx->rb);

	iosocket_free(hctx->sock);

	free(hctx);
}

INIT_FUNC(mod_proxy_init) {
	plugin_data *p;
	size_t i;

	char *hop2hop_headers[] = {
		"Connection",
		"Keep-Alive",
		"Host",
		NULL
	};

	p = calloc(1, sizeof(*p));

	p->balance_buf = buffer_init();
	p->ignore_headers = array_init();
	p->resp = http_response_init();

	for (i = 0; hop2hop_headers[i]; i++) {
		data_string *ds;

		if (NULL == (ds = (data_string *)array_get_unused_element(p->ignore_headers, TYPE_STRING))) {
			ds = data_string_init();
		}

		buffer_copy_string(ds->key, hop2hop_headers[i]);
		buffer_copy_string(ds->value, hop2hop_headers[i]);
		array_insert_unique(p->ignore_headers, (data_unset *)ds);
	}

	return p;
}


FREE_FUNC(mod_proxy_free) {
	plugin_data *p = p_d;

	UNUSED(srv);

	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			if (s) {
				array_free(s->extensions);
				array_free(s->last_used_backends);

				free(s);
			}
		}
		free(p->config_storage);
	}

	array_free(p->ignore_headers);
	buffer_free(p->balance_buf);
	http_response_free(p->resp);

	free(p);

	return HANDLER_GO_ON;
}

SETDEFAULTS_FUNC(mod_proxy_set_defaults) {
	plugin_data *p = p_d;
	data_unset *du;
	size_t i = 0;

	config_values_t cv[] = {
		{ "proxy.server",              NULL, T_CONFIG_LOCAL, T_CONFIG_SCOPE_CONNECTION },       /* 0 */
		{ "proxy.debug",               NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },       /* 1 */
		{ "proxy.balance",             NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION },      /* 2 */
		{ NULL,                        NULL, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET }
	};

	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));

	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s;
		array *ca;

		s = malloc(sizeof(plugin_config));
		s->extensions         = array_init();
		s->last_used_backends = array_init();
		s->debug         = 0;

		cv[0].destination = s->extensions;
		cv[1].destination = &(s->debug);
		cv[2].destination = p->balance_buf;

		buffer_reset(p->balance_buf);

		p->config_storage[i] = s;
		ca = ((data_config *)srv->config_context->data[i])->value;

		if (0 != config_insert_values_global(srv, ca, cv)) {
			return HANDLER_ERROR;
		}

		if (buffer_is_empty(p->balance_buf)) {
			s->balance = PROXY_BALANCE_FAIR;
		} else if (buffer_is_equal_string(p->balance_buf, CONST_STR_LEN("fair"))) {
			s->balance = PROXY_BALANCE_FAIR;
		} else if (buffer_is_equal_string(p->balance_buf, CONST_STR_LEN("round-robin"))) {
			s->balance = PROXY_BALANCE_RR;
		} else if (buffer_is_equal_string(p->balance_buf, CONST_STR_LEN("hash"))) {
			s->balance = PROXY_BALANCE_HASH;
		} else {
			log_error_write(srv, __FILE__, __LINE__, "sb",
				"proxy.balance has to be one of: fair, round-robin, hash, but not:", p->balance_buf);
			return HANDLER_ERROR;
		}

		if (NULL != (du = array_get_element(ca, "proxy.server"))) {
			size_t j;
			data_array *da = (data_array *)du;

			if (du->type != TYPE_ARRAY) {
				log_error_write(srv, __FILE__, __LINE__, "sss",
						"unexpected type for key: ", "proxy.server", "array of strings");

				return HANDLER_ERROR;
			}

			/*
			 * proxy.server = ( "<ext>" => ...,
			 *                  "<ext>" => ... )
			 */

			for (j = 0; j < da->value->used; j++) {
				data_array *da_ext = (data_array *)da->value->data[j];
				size_t n;

				if (da_ext->type != TYPE_ARRAY) {
					log_error_write(srv, __FILE__, __LINE__, "sssbs",
							"unexpected type for key: ", "proxy.server",
							"[", da->value->data[j]->key, "](string)");

					return HANDLER_ERROR;
				}

				/*
				 * proxy.server = ( "<ext>" =>
				 *                     ( "<host>" => ( ... ),
				 *                       "<host>" => ( ... )
				 *                     ),
				 *                    "<ext>" => ... )
				 */

				for (n = 0; n < da_ext->value->used; n++) {
					data_array *da_host = (data_array *)da_ext->value->data[n];

					data_proxy *df;
					data_array *dfa;

					config_values_t pcv[] = {
						{ "host",              NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION },      /* 0 */
						{ "port",              NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },       /* 1 */
						{ NULL,                NULL, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET }
					};

					if (da_host->type != TYPE_ARRAY) {
						log_error_write(srv, __FILE__, __LINE__, "ssSBS",
								"unexpected type for key:",
								"proxy.server",
								"[", da_ext->value->data[n]->key, "](string)");

						return HANDLER_ERROR;
					}

					df = data_proxy_init();

					df->port = 80;

					buffer_copy_string_buffer(df->key, da_host->key);

					pcv[0].destination = df->host;
					pcv[1].destination = &(df->port);

					if (0 != config_insert_values_internal(srv, da_host->value, pcv)) {
						return HANDLER_ERROR;
					}

					if (buffer_is_empty(df->host)) {
						log_error_write(srv, __FILE__, __LINE__, "sbbbs",
								"missing key (string):",
								da->key,
								da_ext->key,
								da_host->key,
								"host");

						return HANDLER_ERROR;
					}

					/* if extension already exists, take it */

					if (NULL == (dfa = (data_array *)array_get_element(s->extensions, da_ext->key->ptr))) {
						dfa = data_array_init();

						buffer_copy_string_buffer(dfa->key, da_ext->key);

						array_insert_unique(dfa->value, (data_unset *)df);
						array_insert_unique(s->extensions, (data_unset *)dfa);
					} else {
						array_insert_unique(dfa->value, (data_unset *)df);
					}
				}
			}
		}
	}

	return HANDLER_GO_ON;
}

void proxy_connection_close(server *srv, handler_ctx *hctx) {
	plugin_data *p;
	connection *con;

	if (NULL == hctx) return;

	p    = hctx->plugin_data;
	con  = hctx->remote_conn;

	if (hctx->sock->fd != -1) {
		fdevent_event_del(srv->ev, hctx->sock);
		fdevent_unregister(srv->ev, hctx->sock);

		close(hctx->sock->fd);
		srv->cur_fds--;
	}

	handler_ctx_free(hctx);
	con->plugin_ctx[p->id] = NULL;
}

static int proxy_establish_connection(server *srv, handler_ctx *hctx) {
	struct sockaddr *proxy_addr;
	struct sockaddr_in proxy_addr_in;
	socklen_t servlen;

	plugin_data *p    = hctx->plugin_data;
	data_proxy *host= hctx->host;
	int proxy_fd       = hctx->sock->fd;

	memset(&proxy_addr, 0, sizeof(proxy_addr));

	proxy_addr_in.sin_family = AF_INET;
	proxy_addr_in.sin_addr.s_addr = inet_addr(host->host->ptr);
	proxy_addr_in.sin_port = htons(host->port);
	servlen = sizeof(proxy_addr_in);

	proxy_addr = (struct sockaddr *) &proxy_addr_in;

	if (-1 == connect(proxy_fd, proxy_addr, servlen)) {
#ifdef _WIN32
	errno = WSAGetLastError();
#endif
	switch(errno) {
#ifdef _WIN32
	case WSAEWOULDBLOCK:
#endif
	case EINPROGRESS:
	case EALREADY:
			if (p->conf.debug) {
				log_error_write(srv, __FILE__, __LINE__, "sd",
						"connect delayed:", proxy_fd);
			}

			return 1;
		default:

			log_error_write(srv, __FILE__, __LINE__, "sdsd",
					"connect failed:", proxy_fd, strerror(errno), errno);

			return -1;
		}
	}
	fprintf(stderr, "%s.%d: connected fd = %d\r\n", __FILE__, __LINE__, proxy_fd);
	if (p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__, "sd",
				"connect succeeded: ", proxy_fd);
	}

	return 0;
}

void proxy_set_header(connection *con, const char *key, const char *value) {
	data_string *ds_dst;

	if (NULL == (ds_dst = (data_string *)array_get_unused_element(con->request.headers, TYPE_STRING))) {
		ds_dst = data_string_init();
	}

	buffer_copy_string(ds_dst->key, key);
	buffer_copy_string(ds_dst->value, value);
	array_insert_unique(con->request.headers, (data_unset *)ds_dst);
}

void proxy_append_header(connection *con, const char *key, const char *value) {
	data_string *ds_dst;

	if (NULL == (ds_dst = (data_string *)array_get_unused_element(con->request.headers, TYPE_STRING))) {
		ds_dst = data_string_init();
	}

	buffer_copy_string(ds_dst->key, key);
	buffer_append_string(ds_dst->value, value);
	array_insert_unique(con->request.headers, (data_unset *)ds_dst);
}


static int proxy_create_env(server *srv, handler_ctx *hctx) {
	size_t i;

	connection *con   = hctx->remote_conn;
	plugin_data *p    = hctx->plugin_data;
	buffer *b;

	/* build header */

	b = chunkqueue_get_append_buffer(hctx->wb);

	/* request line */
	buffer_copy_string(b, get_http_method_name(con->request.http_method));
	BUFFER_APPEND_STRING_CONST(b, " ");

	buffer_append_string_buffer(b, con->request.uri);
	BUFFER_APPEND_STRING_CONST(b, " HTTP/1.0\r\n");

	proxy_append_header(con, "X-Forwarded-For", (char *)inet_ntop_cache_get_ip(srv, &(con->dst_addr)));
	/* http_host is NOT is just a pointer to a buffer
	 * which is NULL if it is not set */
	if (con->request.http_host &&
	    !buffer_is_empty(con->request.http_host)) {
		proxy_set_header(con, "X-Host", con->request.http_host->ptr);
	}
	proxy_set_header(con, "X-Forwarded-Proto", con->conf.is_ssl ? "https" : "http");

	/* request header */
	for (i = 0; i < con->request.headers->used; i++) {
		data_string *ds;

		ds = (data_string *)con->request.headers->data[i];

		if (buffer_is_empty(ds->value) || buffer_is_empty(ds->key)) continue;

		if (buffer_is_equal_string(ds->key, CONST_STR_LEN("Connection"))) continue;
		if (buffer_is_equal_string(ds->key, CONST_STR_LEN("Keep-Alive"))) continue;

		buffer_append_string_buffer(b, ds->key);
		BUFFER_APPEND_STRING_CONST(b, ": ");
		buffer_append_string_buffer(b, ds->value);
		BUFFER_APPEND_STRING_CONST(b, "\r\n");
	}

	BUFFER_APPEND_STRING_CONST(b, "\r\n");

	hctx->wb->bytes_in += b->used - 1;
	/* body */

	if (con->request.content_length) {
		chunkqueue *req_cq = con->recv;
		chunk *req_c;
		off_t offset;

		/* something to send ? */
		for (offset = 0, req_c = req_cq->first; offset != req_cq->bytes_in; req_c = req_c->next) {
			off_t weWant = req_cq->bytes_in - offset;
			off_t weHave = 0;

			/* we announce toWrite octects
			 * now take all the request_content chunk that we need to fill this request
			 * */

			switch (req_c->type) {
			case FILE_CHUNK:
				weHave = req_c->file.length - req_c->offset;

				if (weHave > weWant) weHave = weWant;

				chunkqueue_append_file(hctx->wb, req_c->file.name, req_c->offset, weHave);

				req_c->offset += weHave;
				req_cq->bytes_out += weHave;

				hctx->wb->bytes_in += weHave;

				break;
			case MEM_CHUNK:
				/* append to the buffer */
				weHave = req_c->mem->used - 1 - req_c->offset;

				if (weHave > weWant) weHave = weWant;

				b = chunkqueue_get_append_buffer(hctx->wb);
				buffer_append_memory(b, req_c->mem->ptr + req_c->offset, weHave);
				b->used++; /* add virtual \0 */

				req_c->offset += weHave;
				req_cq->bytes_out += weHave;

				hctx->wb->bytes_in += weHave;

				break;
			default:
				break;
			}

			offset += weHave;
		}

	}

	return 0;
}

static int proxy_set_state(server *srv, handler_ctx *hctx, proxy_connection_state_t state) {
	hctx->state = state;
	hctx->state_timestamp = srv->cur_ts;

	return 0;
}


static int proxy_demux_response(server *srv, handler_ctx *hctx) {
	plugin_data *p    = hctx->plugin_data;
	connection *con   = hctx->remote_conn;
	chunkqueue *next_queue = NULL;
	chunk *c = NULL;

	switch(srv->network_backend_read(srv, con, hctx->sock, hctx->rb)) {
	case NETWORK_STATUS_SUCCESS:
		/* we got content */
		break;
	case NETWORK_STATUS_WAIT_FOR_EVENT:
		return 0;
	case NETWORK_STATUS_CONNECTION_CLOSE:
		/* we are done, get out of here */
		con->send->is_closed = 1;

		/* close the chunk-queue with a empty chunk */

		return 1;
	default:
		/* oops */
		return -1;
	}

	/* looks like we got some content
	*
	* split off the header from the incoming stream
	*/

	if (hctx->state == PROXY_STATE_RESPONSE_HEADER) {
		size_t i;
		int have_content_length = 0;

		http_response_reset(p->resp);

		/* the response header is not fully received yet,
		*
		* extract the http-response header from the rb-cq
		*/
		switch (http_response_parse_cq(hctx->rb, p->resp)) {
		case PARSE_ERROR:
			/* parsing failed */

			con->http_status = 502; /* Bad Gateway */
			return 1;
		case PARSE_NEED_MORE:
			return 0;
		case PARSE_SUCCESS:
			con->http_status = p->resp->status;

			chunkqueue_remove_finished_chunks(hctx->rb);

			/* copy the http-headers */
			for (i = 0; i < p->resp->headers->used; i++) {
				const char *ign[] = { "Status", "Connection", NULL };
				size_t j;
				data_string *ds;

				data_string *header = (data_string *)p->resp->headers->data[i];

				/* some headers are ignored by default */
				for (j = 0; ign[j]; j++) {
					if (0 == strcasecmp(ign[j], header->key->ptr)) break;
				}
				if (ign[j]) continue;

				if (0 == buffer_caseless_compare(CONST_BUF_LEN(header->key), CONST_STR_LEN("Location"))) {
					/* CGI/1.1 rev 03 - 7.2.1.2 */
					if (con->http_status == 0) con->http_status = 302;
				} else if (0 == buffer_caseless_compare(CONST_BUF_LEN(header->key), CONST_STR_LEN("Content-Length"))) {
					have_content_length = 1;
				}

				if (NULL == (ds = (data_string *)array_get_unused_element(con->response.headers, TYPE_STRING))) {
					ds = data_response_init();
				}
				buffer_copy_string_buffer(ds->key, header->key);
				buffer_copy_string_buffer(ds->value, header->value);

				array_insert_unique(con->response.headers, (data_unset *)ds);
			}

			con->file_started = 1;

			hctx->state = PROXY_STATE_RESPONSE_CONTENT;
			break;
		}
	}

	/* FIXME: pass the response-header to the other plugins to
	* setup the filter-queue
	*
	* - use next-queue instead of con->write_queue
	*/

	next_queue = con->send;

	assert(hctx->state == PROXY_STATE_RESPONSE_CONTENT);

	/* FIXME: if we have a content-length or chunked-encoding
	* handle it.
	*
	* for now we wait for EOF on the socket */

	/* copy the content to the next cq */
	for (c = hctx->rb->first; c; c = c->next) {
		chunkqueue_append_mem(con->send, c->mem->ptr + c->offset, c->mem->used - c->offset);

		c->offset = c->mem->used - 1;
	}

	chunkqueue_remove_finished_chunks(hctx->rb);
	joblist_append(srv, con);

	return 0;
}


static handler_t proxy_write_request(server *srv, handler_ctx *hctx) {
	data_proxy *host= hctx->host;
	plugin_data *p    = hctx->plugin_data;
	connection *con   = hctx->remote_conn;

	int ret;

	if (!host ||
		(!host->host->used || !host->port)) return -1;

	switch(hctx->state) {
	case PROXY_STATE_INIT:
		if (-1 == (hctx->sock->fd = socket(AF_INET, SOCK_STREAM, 0))) {
			log_error_write(srv, __FILE__, __LINE__, "ss", "socket failed: ", strerror(errno));
			return HANDLER_ERROR;
		}
		hctx->sock->fde_ndx = -1;

		srv->cur_fds++;

		fdevent_register(srv->ev, hctx->sock, proxy_handle_fdevent, hctx);

		if (-1 == fdevent_fcntl_set(srv->ev, hctx->sock)) {
			log_error_write(srv, __FILE__, __LINE__, "ss", "fcntl failed: ", strerror(errno));

			return HANDLER_ERROR;
		}

		/* fall through */

	case PROXY_STATE_CONNECT:
		/* try to finish the connect() */
		if (hctx->state == PROXY_STATE_INIT) {
			/* first round */
			switch (proxy_establish_connection(srv, hctx)) {
			case 1:
				proxy_set_state(srv, hctx, PROXY_STATE_CONNECT);

				/* connection is in progress, wait for an event and call getsockopt() below */

				fdevent_event_add(srv->ev, hctx->sock, FDEVENT_OUT);

				return HANDLER_WAIT_FOR_EVENT;
			case -1:
				/* if ECONNREFUSED choose another connection -> FIXME */
				hctx->sock->fde_ndx = -1;

				return HANDLER_ERROR;
			default:
				/* everything is ok, go on */
				break;
			}
		} else {
			int socket_error;
			socklen_t socket_error_len = sizeof(socket_error);

			/* we don't need it anymore */
			fdevent_event_del(srv->ev, hctx->sock);

			/* try to finish the connect() */
			if (0 != getsockopt(hctx->sock->fd, SOL_SOCKET, SO_ERROR, &socket_error, &socket_error_len)) {
				log_error_write(srv, __FILE__, __LINE__, "ss",
						"getsockopt failed:", strerror(errno));

				return HANDLER_ERROR;
			}
			if (socket_error != 0) {
				log_error_write(srv, __FILE__, __LINE__, "ss",
						"establishing connection failed:", strerror(socket_error),
						"port:", hctx->host->port);

				return HANDLER_ERROR;
			}
			if (p->conf.debug) {
				log_error_write(srv, __FILE__, __LINE__,  "s", "proxy - connect - delayed success");
			}
		}

		proxy_set_state(srv, hctx, PROXY_STATE_PREPARE_WRITE);
		/* fall through */
	case PROXY_STATE_PREPARE_WRITE:
		proxy_create_env(srv, hctx);

		proxy_set_state(srv, hctx, PROXY_STATE_WRITE);

		/* fall through */
	case PROXY_STATE_WRITE:;
		ret = srv->network_backend_write(srv, con, hctx->sock, hctx->wb);

		chunkqueue_remove_finished_chunks(hctx->wb);

		switch(ret) {
		case NETWORK_STATUS_FATAL_ERROR:
			log_error_write(srv, __FILE__, __LINE__, "ssd", "write failed:", strerror(errno), errno);

			return HANDLER_ERROR;
		case NETWORK_STATUS_WAIT_FOR_EVENT:

			fdevent_event_add(srv->ev, hctx->sock, FDEVENT_OUT);

			return HANDLER_WAIT_FOR_EVENT;
		}

		if (hctx->wb->bytes_out == hctx->wb->bytes_in) {
			proxy_set_state(srv, hctx, PROXY_STATE_RESPONSE_HEADER);

			fdevent_event_del(srv->ev, hctx->sock);
			fdevent_event_add(srv->ev, hctx->sock, FDEVENT_IN);
		} else {
			fdevent_event_add(srv->ev, hctx->sock, FDEVENT_OUT);

			return HANDLER_WAIT_FOR_EVENT;
		}

		return HANDLER_WAIT_FOR_EVENT;
	case PROXY_STATE_RESPONSE_CONTENT:
	case PROXY_STATE_RESPONSE_HEADER:
		/* waiting for a response */

		return HANDLER_WAIT_FOR_EVENT;
	default:
		log_error_write(srv, __FILE__, __LINE__, "s", "(debug) unknown state");
		return HANDLER_ERROR;
	}

	return HANDLER_GO_ON;
}

static int mod_proxy_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i, j;
	plugin_config *s = p->config_storage[0];

	PATCH_OPTION(extensions);
	PATCH_OPTION(debug);
	PATCH_OPTION(balance);
	PATCH_OPTION(last_used_backends);

	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];

		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;

		/* merge config */
		for (j = 0; j < dc->value->used; j++) {
			data_unset *du = dc->value->data[j];

			if (buffer_is_equal_string(du->key, CONST_STR_LEN("proxy.server"))) {
				PATCH_OPTION(extensions);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("proxy.debug"))) {
				PATCH_OPTION(debug);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("proxy.balance"))) {
				PATCH_OPTION(balance);
				PATCH_OPTION(last_used_backends);
			}
		}
	}

	return 0;
}

SUBREQUEST_FUNC(mod_proxy_handle_subrequest) {
	plugin_data *p = p_d;

	handler_ctx *hctx = con->plugin_ctx[p->id];
	data_proxy *host;

	if (NULL == hctx) return HANDLER_GO_ON;

	mod_proxy_patch_connection(srv, con, p);

	host = hctx->host;

	/* not my job */
	if (con->mode != p->id) return HANDLER_GO_ON;

	/* ok, create the request */
	switch(proxy_write_request(srv, hctx)) {
	case HANDLER_ERROR:
		log_error_write(srv, __FILE__, __LINE__,  "sbdd", "proxy-server disabled:",
				host->host,
				host->port,
				hctx->sock->fd);

		/* disable this server */
		host->is_disabled = 1;
		host->disable_ts = srv->cur_ts;

		proxy_connection_close(srv, hctx);

		/* reset the enviroment and restart the sub-request */
		buffer_reset(con->physical.path);
		con->mode = DIRECT;

		joblist_append(srv, con);

		/* mis-using HANDLER_WAIT_FOR_FD to break out of the loop
		 * and hope that the childs will be restarted
		 *
		 */

		return HANDLER_WAIT_FOR_FD;
	case HANDLER_WAIT_FOR_EVENT:
		return HANDLER_WAIT_FOR_EVENT;
	case HANDLER_WAIT_FOR_FD:
		return HANDLER_WAIT_FOR_FD;
	default:
		break;
	}

	if (con->file_started == 1) {
		return HANDLER_FINISHED;
	} else {
		return HANDLER_WAIT_FOR_EVENT;
	}
}

static handler_t proxy_handle_fdevent(void *s, void *ctx, int revents) {
	server      *srv  = (server *)s;
	handler_ctx *hctx = ctx;
	connection  *con  = hctx->remote_conn;
	plugin_data *p    = hctx->plugin_data;


	if ((revents & FDEVENT_IN) &&
	    (hctx->state == PROXY_STATE_RESPONSE_HEADER ||
	     hctx->state == PROXY_STATE_RESPONSE_CONTENT)) {

		if (p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__, "sd",
					"proxy: fdevent-in", hctx->state);
		}

		switch (proxy_demux_response(srv, hctx)) {
		case 0:
			break;
		case 1:
			log_error_write(srv, __FILE__, __LINE__, "sd",
					"proxy: request done", hctx->sock->fd);
			hctx->host->usage--;

			/* we are done */
			proxy_connection_close(srv, hctx);

			joblist_append(srv, con);
			return HANDLER_FINISHED;
		case -1:
			if (con->file_started == 0) {
				/* nothing has been send out yet, send a 500 */
				con->http_status = 500;
				con->mode = DIRECT;
			} else {
				/* response might have been already started, kill the connection */
				connection_set_state(srv, con, CON_STATE_ERROR);
			}

			joblist_append(srv, con);
			return HANDLER_FINISHED;
		}
	}

	if (revents & FDEVENT_OUT) {
		if (p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__, "sd",
					"proxy: fdevent-out", hctx->state);
		}

		if (hctx->state == PROXY_STATE_CONNECT ||
		    hctx->state == PROXY_STATE_WRITE) {
			/* we are allowed to send something out
			 *
			 * 1. in a unfinished connect() call
			 * 2. in a unfinished write() call (long POST request)
			 */
			return mod_proxy_handle_subrequest(srv, con, p);
		} else {
			log_error_write(srv, __FILE__, __LINE__, "sd",
					"proxy: out", hctx->state);
		}
	}

	/* perhaps this issue is already handled */
	if (revents & FDEVENT_HUP) {
		if (p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__, "sd",
					"proxy: fdevent-hup", hctx->state);
		}

		if (hctx->state == PROXY_STATE_CONNECT) {
			/* connect() -> EINPROGRESS -> HUP */

			/**
			 * what is proxy is doing if it can't reach the next hop ?
			 *
			 */

			proxy_connection_close(srv, hctx);
			joblist_append(srv, con);

			con->http_status = 503;
			con->mode = DIRECT;

			return HANDLER_FINISHED;
		}

		con->send->is_closed = 1;

		proxy_connection_close(srv, hctx);
		joblist_append(srv, con);
	} else if (revents & FDEVENT_ERR) {
		/* kill all connections to the proxy process */

		log_error_write(srv, __FILE__, __LINE__, "sd", "proxy-FDEVENT_ERR, but no HUP", revents);

		joblist_append(srv, con);
		proxy_connection_close(srv, hctx);
	}

	return HANDLER_FINISHED;
}

static handler_t mod_proxy_check_extension(server *srv, connection *con, void *p_d) {
	plugin_data *p = p_d;
	size_t s_len;
	unsigned long last_max = ULONG_MAX;
	int max_usage = INT_MAX;
	int ndx = -1;
	size_t k;
	buffer *fn;
	data_array *extension = NULL;
	size_t path_info_offset;
	data_integer *last_used_backend;
	data_proxy *host = NULL;
	handler_ctx *hctx = NULL;

	array *backends = NULL;

	/* Possibly, we processed already this request */
	if (con->file_started == 1) return HANDLER_GO_ON;

	mod_proxy_patch_connection(srv, con, p);

	fn = con->uri.path;

	if (fn->used == 0) {
		return HANDLER_ERROR;
	}

	s_len = fn->used - 1;

	path_info_offset = 0;

	if (p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__,  "s", "proxy - start");
	}

	/* check if extension matches */
	for (k = 0; k < p->conf.extensions->used; k++) {
		size_t ct_len;

		extension = (data_array *)p->conf.extensions->data[k];

		if (extension->key->used == 0) continue;

		ct_len = extension->key->used - 1;

		if (s_len < ct_len) continue;

		/* check extension in the form "/proxy_pattern" */
		if (*(extension->key->ptr) == '/' && strncmp(fn->ptr, extension->key->ptr, ct_len) == 0) {
			if (s_len > ct_len + 1) {
				char *pi_offset;

				if (0 != (pi_offset = strchr(fn->ptr + ct_len + 1, '/'))) {
					path_info_offset = pi_offset - fn->ptr;
				}
			}
			break;
		} else if (0 == strncmp(fn->ptr + s_len - ct_len, extension->key->ptr, ct_len)) {
			/* check extension in the form ".fcg" */
			break;
		}
	}

	if (k == p->conf.extensions->used) {
		return HANDLER_GO_ON;
	}

	backends = extension->value;

	if (p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__,  "s", "proxy - ext found");
	}

	switch(p->conf.balance) {
	case PROXY_BALANCE_HASH:
		/* hash balancing */

		if (p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__,  "sd",
					"proxy - used hash balancing, hosts:", backends->used);
		}

		for (k = 0, ndx = -1, last_max = ULONG_MAX; k < backends->used; k++) {
			unsigned long cur_max;

			data_proxy *cur = (data_proxy *)backends->data[k];

			if (cur->is_disabled) continue;

			cur_max = generate_crc32c(CONST_BUF_LEN(con->uri.path)) +
				generate_crc32c(CONST_BUF_LEN(cur->host)) + /* we can cache this */
				generate_crc32c(CONST_BUF_LEN(con->uri.authority));

			if (p->conf.debug) {
				log_error_write(srv, __FILE__, __LINE__,  "sbbbd",
						"proxy - election:",
						con->uri.path,
						cur->host,
						con->uri.authority,
						cur_max);
			}

			if (host == NULL || (cur_max > last_max)) {
				last_max = cur_max;

				host = cur;
			}
		}

		break;
	case PROXY_BALANCE_FAIR:
		/* fair balancing */
		if (p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__,  "s",
					"proxy - used fair balancing");
		}

		/* try to find the host with the lowest load */
		for (k = 0, max_usage = 0; k < backends->used; k++) {
			data_proxy *cur = (data_proxy *)backends->data[k];

			if (cur->is_disabled) continue;

			if (NULL == host || cur->usage < max_usage) {
				max_usage = cur->usage;

				host = cur;
			}
		}

		break;
	case PROXY_BALANCE_RR:
		/* round robin */
		if (p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__,  "s",
					"proxy - used round-robin balancing");
		}

		/* just to be sure */
		assert(backends->used < INT_MAX);

		/* send each request to another host:
		 *
		 * e.g.:
		 *
		 * if we have three hosts it is
		 *
		 * 1 .. 2 .. 3 .. 1 .. 2 .. 3
		 *
		 **/

		/* walk through the list */
		last_used_backend = (data_integer *)array_get_element(p->conf.last_used_backends, extension->key->ptr);

		if (NULL == last_used_backend) {
			last_used_backend = data_integer_init();

			buffer_copy_string_buffer(last_used_backend->key, extension->key);
			last_used_backend->value = 0;

			array_insert_unique(p->conf.last_used_backends, (data_unset *)last_used_backend);
		}

		/* scan all but the last host to see if they are up
		 * take the first running host */
		for (k = last_used_backend->value + 1; (int)(k % backends->used) != last_used_backend->value; k++) {
			data_proxy *cur = (data_proxy *)backends->data[k % backends->used];

			if (cur->is_disabled) continue;

			host = cur;

			last_used_backend->value = k;

			break;
		}

		if (NULL == host) {
			/* we found nothing better, fallback to the last used backend
			 * and check if it is still up */
			host = (data_proxy *)backends->data[last_used_backend->value];

			if (host->is_disabled) host = NULL;
		}

		break;
	default:
		break;
	}

	/* we havn't found a host */
	if (NULL == host) {
		con->http_status = 500;

		log_error_write(srv, __FILE__, __LINE__,  "sb",
				"no proxy-handler found for:",
				fn);

		return HANDLER_FINISHED;
	}

	/* init handler-context */
	hctx = handler_ctx_init();

	hctx->path_info_offset = path_info_offset;
	hctx->remote_conn      = con;
	hctx->plugin_data      = p;
	hctx->host             = host;

	con->plugin_ctx[p->id] = hctx;

	host->usage++;

	/* we handle this request */
	con->mode = p->id;

	if (p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__,  "sbd",
				"proxy - found a host",
				host->host, host->port);
	}

	return HANDLER_GO_ON;
}

static handler_t mod_proxy_connection_close_callback(server *srv, connection *con, void *p_d) {
	plugin_data *p = p_d;

	proxy_connection_close(srv, con->plugin_ctx[p->id]);

	return HANDLER_GO_ON;
}

/**
 *
 * the trigger re-enables the disabled connections after the timeout is over
 *
 * */

TRIGGER_FUNC(mod_proxy_trigger) {
	plugin_data *p = p_d;

	if (p->config_storage) {
		size_t i, n, k;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			if (!s) continue;

			/* get the extensions for all configs */

			for (k = 0; k < s->extensions->used; k++) {
				data_array *extension = (data_array *)s->extensions->data[k];

				/* get all hosts */
				for (n = 0; n < extension->value->used; n++) {
					data_proxy *host = (data_proxy *)extension->value->data[n];

					if (!host->is_disabled ||
					    srv->cur_ts - host->disable_ts < 5) continue;

					log_error_write(srv, __FILE__, __LINE__,  "sbd",
							"proxy - re-enabled:",
							host->host, host->port);

					host->is_disabled = 0;
				}
			}
		}
	}

	return HANDLER_GO_ON;
}


int mod_proxy_plugin_init(plugin *p) {
	p->version      = LIGHTTPD_VERSION_ID;
	p->name         = buffer_init_string("proxy");

	p->init         = mod_proxy_init;
	p->cleanup      = mod_proxy_free;
	p->set_defaults = mod_proxy_set_defaults;
	p->connection_reset        = mod_proxy_connection_close_callback; /* end of req-resp cycle */
	p->handle_connection_close = mod_proxy_connection_close_callback; /* end of client connection */
	p->handle_uri_clean        = mod_proxy_check_extension;
	p->handle_start_backend    = mod_proxy_handle_subrequest;
	p->handle_trigger          = mod_proxy_trigger;

	p->data         = NULL;

	return 0;
}
