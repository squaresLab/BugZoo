#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <ctype.h>
#include <assert.h>
#include <fcntl.h>
#include "base.h"
#include "sys-strings.h"

#include "buffer.h"
#include "array.h"
#include "log.h"

#include "plugin.h"
#include "joblist.h"
#include "sys-files.h"
#include "inet_ntop_cache.h"
#include "crc32.h"
#include "configfile.h"
#include "stat_cache.h"
#include "buffer.h"
#include "array.h"
#include "log.h"
#include "status_counter.h"

#include "mod_proxy_core.h"
#include "mod_proxy_core_protocol.h"

#define PROXY_CORE "proxy-core"
#define CONFIG_PROXY_CORE_BALANCER         PROXY_CORE ".balancer"
#define CONFIG_PROXY_CORE_PROTOCOL         PROXY_CORE ".protocol"
#define CONFIG_PROXY_CORE_DEBUG            PROXY_CORE ".debug"
#define CONFIG_PROXY_CORE_MAX_KEEP_ALIVE   PROXY_CORE ".max-keep-alive-requests"
#define CONFIG_PROXY_CORE_BACKENDS         PROXY_CORE ".backends"
#define CONFIG_PROXY_CORE_REWRITE_REQUEST  PROXY_CORE ".rewrite-request"
#define CONFIG_PROXY_CORE_REWRITE_RESPONSE PROXY_CORE ".rewrite-response"
#define CONFIG_PROXY_CORE_ALLOW_X_SENDFILE PROXY_CORE ".allow-x-sendfile"
#define CONFIG_PROXY_CORE_ALLOW_X_REWRITE  PROXY_CORE ".allow-x-rewrite"
#define CONFIG_PROXY_CORE_MAX_POOL_SIZE    PROXY_CORE ".max-pool-size"
#define CONFIG_PROXY_CORE_CHECK_LOCAL      PROXY_CORE ".check-local"
#define CONFIG_PROXY_CORE_SPLIT_HOSTNAMES  PROXY_CORE ".split-hostnames"

static int mod_proxy_wakeup_connections(server *srv, plugin_data *p, plugin_config *p_conf);

int array_insert_int(array *a, const char *key, int val) {
	data_integer *di;

	if (NULL == (di = (data_integer *)array_get_unused_element(a, TYPE_INTEGER))) {
		di = data_integer_init();
	}

	buffer_copy_string(di->key, key);
	di->value = val;
	array_insert_unique(a, (data_unset *)di);

	return 0;
}

proxy_protocol *mod_proxy_core_register_protocol(const char *name) {
	proxy_protocol *protocol = proxy_protocol_init();

	protocol->name         = buffer_init_string(name);

	proxy_protocols_register(protocol);
	return protocol;
}

INIT_FUNC(mod_proxy_core_init) {
	plugin_data *p;

	UNUSED(srv);

	proxy_protocols_init();

	p = calloc(1, sizeof(*p));

	/* create some backends as long as we don't have the config-parser */

	p->possible_balancers = array_init();
	array_insert_int(p->possible_balancers, "sqf", PROXY_BALANCE_SQF);
	array_insert_int(p->possible_balancers, "carp", PROXY_BALANCE_CARP);
	array_insert_int(p->possible_balancers, "round-robin", PROXY_BALANCE_RR);
	array_insert_int(p->possible_balancers, "static", PROXY_BALANCE_STATIC);

	p->proxy_register_protocol = mod_proxy_core_register_protocol;

	/* statistics counters. */
	p->request_count = status_counter_get_counter(CONST_STR_LEN(PROXY_CORE ".requests"));

	p->balance_buf = buffer_init();
	p->protocol_buf = buffer_init();
	p->replace_buf = buffer_init();
	p->backends_arr = array_init();

	p->tmp_buf = buffer_init();

#if 0
	/**
	 * create a small pool of session objects
	 *
	 * instead of creating new one each time,
	 * cleanup old ones and put them into the pool
	 *
	 * 8 clean items should be enough at a time, destroy the other ones
	 */
	p->session_pool = proxy_session_pool_init();
#endif

	return p;
}

FREE_FUNC(mod_proxy_core_free) {
	plugin_data *p = p_d;

	if (!p) return HANDLER_GO_ON;

	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			if (!s) continue;

			proxy_backends_free(s->backends);
			proxy_backlog_free(s->backlog);

			proxy_rewrites_free(s->request_rewrites);
			proxy_rewrites_free(s->response_rewrites);

			free(s);
		}
		free(p->config_storage);
	}

	array_free(p->possible_balancers);
	array_free(p->backends_arr);

	buffer_free(p->balance_buf);
	buffer_free(p->protocol_buf);
	buffer_free(p->replace_buf);
	buffer_free(p->tmp_buf);

#if 0
	proxy_session_pool_free(p->session_pool);
#endif

	free(p);

	proxy_protocols_free();

	return HANDLER_GO_ON;
}

static handler_t mod_proxy_core_config_parse_rewrites(proxy_rewrites *dest, array *src, const char *config_key) {
	data_unset *du;
	size_t j;

	if (NULL != (du = array_get_element(src, config_key, strlen(config_key)))) {
		data_array *keys = (data_array *)du;

		if (keys->type != TYPE_ARRAY) {
			ERROR("%s = <...>",
				config_key);

			return HANDLER_ERROR;
		}

		/*
		 * proxy-core.rewrite-request = (
		 *   "_uri" => ( ... )
		 * )
		 */

		for (j = 0; j < keys->value->used; j++) {
			size_t k;
			data_array *headers = (data_array *)keys->value->data[j];

			/* keys->key should be "_uri" and the value a array of rewrite */
			if (headers->type != TYPE_ARRAY) {
				ERROR("%s = ( %s => <...> ) has to a array",
					config_key,
					BUF_STR(headers->key));

				return HANDLER_ERROR;
			}

			if (headers->value->used > 1) {
				ERROR("%s = ( %s => <...> ) has to a array with only one element",
					config_key,
					BUF_STR(headers->key));

				return HANDLER_ERROR;

			}

			for (k = 0; k < headers->value->used; k++) {
				data_string *rewrites = (data_string *)headers->value->data[k];
				proxy_rewrite *rw;

				/* keys->key should be "_uri" and the value a array of rewrite */
				if (rewrites->type != TYPE_STRING) {
					ERROR("%s = ( \"%s\" => ( \"%s\" => <value> ) ) has to a string",
						config_key,
						BUF_STR(headers->key),
						BUF_STR(rewrites->key));

					return HANDLER_ERROR;
				}

				rw = proxy_rewrite_init();

				if (0 != proxy_rewrite_set_regex(rw, rewrites->key)) {
					return HANDLER_ERROR;
				}
				buffer_copy_string_buffer(rw->replace, rewrites->value);
				buffer_copy_string_buffer(rw->match, rewrites->key);
				buffer_copy_string_buffer(rw->header, headers->key);

				proxy_rewrites_add(dest, rw);
			}
		}
	}

	return HANDLER_GO_ON;
}

static void mod_proxy_core_create_backend_stats(plugin_data *p, buffer *stat_basename, proxy_backend *backend) {
#define COUNTER_NAME(b, x) \
	buffer_copy_string_buffer(b, stat_basename); \
	buffer_append_string_len(b, CONST_STR_LEN("\"")); \
	buffer_append_string_buffer(b, backend->name); \
	buffer_append_string_len(b, CONST_STR_LEN("\"." x)); 

	/* request count stat. */
	COUNTER_NAME(p->tmp_buf, "requests");
	backend->request_count = status_counter_get_counter(CONST_BUF_LEN(p->tmp_buf));

	/* load */
	COUNTER_NAME(p->tmp_buf, "load");
	backend->load = status_counter_get_counter(CONST_BUF_LEN(p->tmp_buf));

	/* pool size */
	COUNTER_NAME(p->tmp_buf, "pool_size");
	backend->pool_size = status_counter_get_counter(CONST_BUF_LEN(p->tmp_buf));
	
	COUNTER_NAME(p->tmp_buf, "requests_failed");
	backend->requests_failed = status_counter_get_counter(CONST_BUF_LEN(p->tmp_buf));
#undef COUNTER_NAME
}

SETDEFAULTS_FUNC(mod_proxy_core_set_defaults) {
	plugin_data *p = p_d;
	buffer *stat_basename;
	size_t i, j;
	int proxy_counter = 0;

	config_values_t cv[] = {
		{ CONFIG_PROXY_CORE_BACKENDS,       NULL, T_CONFIG_ARRAY, T_CONFIG_SCOPE_CONNECTION },       /* 0 */
		{ CONFIG_PROXY_CORE_DEBUG,          NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },       /* 1 */
		{ CONFIG_PROXY_CORE_BALANCER,       NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION },      /* 2 */
		{ CONFIG_PROXY_CORE_PROTOCOL,       NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION },      /* 3 */
		{ CONFIG_PROXY_CORE_REWRITE_REQUEST, NULL, T_CONFIG_LOCAL, T_CONFIG_SCOPE_CONNECTION },      /* 4 */
		{ CONFIG_PROXY_CORE_REWRITE_RESPONSE, NULL, T_CONFIG_LOCAL, T_CONFIG_SCOPE_CONNECTION },     /* 5 */
		{ CONFIG_PROXY_CORE_ALLOW_X_SENDFILE, NULL, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION },   /* 6 */
		{ CONFIG_PROXY_CORE_ALLOW_X_REWRITE, NULL, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION },    /* 7 */
		{ CONFIG_PROXY_CORE_MAX_POOL_SIZE, NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },        /* 8 */
		{ CONFIG_PROXY_CORE_CHECK_LOCAL, NULL, T_CONFIG_DEPRECATED, T_CONFIG_SCOPE_CONNECTION },        /* 9 */
		{ CONFIG_PROXY_CORE_MAX_KEEP_ALIVE, NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },       /* 10 */
		{ CONFIG_PROXY_CORE_SPLIT_HOSTNAMES, NULL, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION },    /* 11 */
		{ NULL,                        NULL, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET }
	};

	stat_basename = buffer_init();

	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));

	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s;
		array *ca;
		proxy_backend *backend;

		array_reset(p->backends_arr);
		buffer_reset(p->balance_buf);
		buffer_reset(p->protocol_buf);

		s = calloc(1, sizeof(plugin_config));
		s->debug     = 0;
		s->balancer  = PROXY_BALANCE_UNSET;
		s->protocol  = NULL;
		s->backends  = proxy_backends_init();
		s->backlog   = proxy_backlog_init();
		s->response_rewrites   = proxy_rewrites_init();
		s->request_rewrites   = proxy_rewrites_init();
		s->check_local = 0;
		s->split_hostnames = 1;
		s->max_keep_alive_requests = 0;

		cv[0].destination = p->backends_arr;
		cv[1].destination = &(s->debug);
		cv[2].destination = p->balance_buf;         /* parse into a constant */
		cv[3].destination = p->protocol_buf;        /* parse into a constant */
		cv[6].destination = &(s->allow_x_sendfile);
		cv[7].destination = &(s->allow_x_rewrite);
		cv[8].destination = &(s->max_pool_size);
		cv[9].destination = &(s->check_local);
		cv[10].destination = &(s->max_keep_alive_requests);
		cv[11].destination = &(s->split_hostnames);

		buffer_reset(p->balance_buf);

		p->config_storage[i] = s;
		ca = ((data_config *)srv->config_context->data[i])->value;

		if (0 != config_insert_values_global(srv, ca, cv)) {
			return HANDLER_ERROR;
		}

		if (!buffer_is_empty(p->balance_buf)) {
			data_integer *di;

			if (NULL != (di = (data_integer *)array_get_element(p->possible_balancers, CONST_BUF_LEN(p->balance_buf)))) {
				s->balancer = di->value;
			} else {
				ERROR("proxy.balance has to be on of 'round-robin', 'carp', 'sqf', 'static' got %s", BUF_STR(p->balance_buf));
				return HANDLER_ERROR;
			}
		}

		if (!buffer_is_empty(p->protocol_buf)) {
			proxy_protocol *protocol = NULL;
			if (NULL == (protocol = proxy_get_protocol(p->protocol_buf))) {
				ERROR("proxy.protocol has to be on of { %s } got %s, you might have to load 'mod_proxy_backend_%s'",
						proxy_available_protocols(),
						BUF_STR(p->protocol_buf),
						BUF_STR(p->protocol_buf)
						);
				return HANDLER_ERROR;
			}
			s->protocol = protocol;
		}

		if (p->backends_arr->used) {
			/* statistics base name. */
			buffer_copy_string_len(stat_basename, CONST_STR_LEN(PROXY_CORE "."));
			buffer_append_long(stat_basename, proxy_counter);

			/* backlog size stats */
			buffer_copy_string_buffer(p->tmp_buf, stat_basename);
			buffer_append_string_len(p->tmp_buf, CONST_STR_LEN(".backlogged"));
			s->backlog_size = status_counter_get_counter(CONST_BUF_LEN(p->tmp_buf));

			/* backends stats base name. */
			buffer_append_string_len(stat_basename, CONST_STR_LEN(".backends."));

			/* check if the backends have a valid host-name */
			for (j = 0; j < p->backends_arr->used; j++) {
				data_string *ds = (data_string *)p->backends_arr->data[j];
				backend = proxy_backend_init();

				/* save name of backend for config. */
				buffer_copy_string_buffer(backend->name, ds->value);
				/* the values should be ips or hostnames */
				if (0 != proxy_address_pool_add_string(backend->address_pool, ds->value)) {
					return HANDLER_ERROR;
				}

				if (s->max_pool_size) {
					backend->pool->max_size = s->max_pool_size;
				}

				/* append backend to list of backends */
				proxy_backends_add(s->backends, backend);

				/* if there is more then one address in the pool, split them out into seperate backends */
				if (s->split_hostnames && backend->address_pool->used > 1) {
					proxy_address_pool *pool = backend->address_pool;

					/* change current backend's name to name of the first ip address in the pool. */
					buffer_copy_string_buffer(backend->name, pool->ptr[0]->name);

					/* setup stats */
					mod_proxy_core_create_backend_stats(p, stat_basename, backend);

					/* move all addresses from the pool into new backends, except for the first one */
					while (pool->used > 1) {
						/* remove last address from pool */
						proxy_address *address = pool->ptr[--(pool->used)];

						/* create new backend for address */
						backend = proxy_backend_init();

						/* set backend name to name of address */
						buffer_copy_string_buffer(backend->name, address->name);

						/* setup stats */
						mod_proxy_core_create_backend_stats(p, stat_basename, backend);

						/* add address to pool */
						proxy_address_pool_add(backend->address_pool, address);

						if (s->max_pool_size) {
							backend->pool->max_size = s->max_pool_size;
						}
	
						/* append backend to list of backends */
						proxy_backends_add(s->backends, backend);
					}
				} else {
					/* setup stats */
					mod_proxy_core_create_backend_stats(p, stat_basename, backend);
				}
			}
			/* counter number of "proxy-core.backends" groups */
			proxy_counter++;
		}

		if (HANDLER_GO_ON != mod_proxy_core_config_parse_rewrites(s->request_rewrites, ca, CONFIG_PROXY_CORE_REWRITE_REQUEST)) {
			return HANDLER_ERROR;
		}

		if (HANDLER_GO_ON != mod_proxy_core_config_parse_rewrites(s->response_rewrites, ca, CONFIG_PROXY_CORE_REWRITE_RESPONSE)) {
			return HANDLER_ERROR;
		}
	}

	buffer_free(stat_basename);

	return HANDLER_GO_ON;
}


proxy_session *proxy_session_init(void) {
	proxy_session *sess;

	sess = calloc(1, sizeof(*sess));

	sess->state = PROXY_STATE_UNSET;
	sess->request_uri = buffer_init();
	sess->request_headers = array_init();
	sess->env_headers = array_init();

	sess->resp = http_response_init();

	sess->recv = chunkqueue_init();

	sess->is_chunked = 0;
	sess->content_length = -1;
	sess->send_response_content = 1;
	sess->do_new_session = 0;
	sess->do_x_rewrite_backend = 0;
	sess->sticky_session = NULL;

	return sess;
}

void proxy_session_reset(proxy_session *sess) {
	if (!sess) return;

	buffer_reset(sess->request_uri);
	array_reset(sess->request_headers);
	array_reset(sess->env_headers);

	http_response_reset(sess->resp);
	sess->p = NULL;

	chunkqueue_reset(sess->recv);

	sess->state = PROXY_STATE_UNSET;

	sess->is_chunked = 0;
	sess->send_response_content = 1;

	sess->bytes_read = 0;
	sess->connect_start_ts = 0;
	sess->content_length = -1;
	sess->internal_redirect_count = 0;
	sess->do_internal_redirect = 0;
	sess->is_closing = 0;
	sess->is_closed = 0;
	sess->is_request_finished = 0;
	sess->have_response_headers = 0;

	sess->do_new_session = 0;
	sess->do_x_rewrite_backend = 0;
	buffer_free(sess->sticky_session);
	sess->sticky_session = NULL;

	sess->remote_con = NULL;
	sess->proxy_con = NULL;
	sess->proxy_backend = NULL;
}

void proxy_session_free(proxy_session *sess) {
	if (!sess) return;

	buffer_free(sess->request_uri);
	array_free(sess->request_headers);
	array_free(sess->env_headers);

	http_response_free(sess->resp);
	sess->p = NULL;

	chunkqueue_free(sess->recv);

	buffer_free(sess->sticky_session);
	free(sess);
}

/**
 * Copy decoded response content to client connection.
 */
int proxy_copy_response(server *srv, connection *con, proxy_session *sess) {
	chunk *c;
	int we_have = 0;

	UNUSED(srv);

	chunkqueue_remove_finished_chunks(sess->recv);
	/* copy the content to the next cq */
	for (c = sess->recv->first; c; c = c->next) {
		if (c->mem->used == 0) continue;

		we_have = c->mem->used - c->offset - 1;
		sess->recv->bytes_out += we_have;
		if (sess->send_response_content) {
			con->send->bytes_in += we_have;
			/* X-Sendfile ignores the content-body */
			if (c->offset == 0) {
				/* steal the buffer from the previous queue */

				chunkqueue_steal_chunk(con->send, c);
			} else {
				chunkqueue_append_mem(con->send, c->mem->ptr + c->offset, c->mem->used - c->offset);

				c->offset = c->mem->used - 1; /* mark the incoming side as read */
			}
		} else {
			/* discard the data */
			c->offset = c->mem->used - 1; /* mark the incoming side as read */
		}
	}
	chunkqueue_remove_finished_chunks(sess->recv);

	if(sess->recv->is_closed && sess->send_response_content) {
		con->send->is_closed = 1;
	}
	return 0;
}

/**
 * Initialize protocol stream.
 *
 */
int proxy_stream_init(server *srv, proxy_session *sess) {
	proxy_protocol *protocol = (sess->proxy_backend) ? sess->proxy_backend->protocol : NULL;
	if(protocol && protocol->proxy_stream_init) {
		return (protocol->proxy_stream_init)(srv, sess->proxy_con);
	}
	return 1;
}

/**
 * Cleanup protocol state data.
 *
 */
int proxy_stream_cleanup(server *srv, proxy_session *sess) {
	proxy_protocol *protocol = (sess->proxy_backend) ? sess->proxy_backend->protocol : NULL;
	if(protocol && protocol->proxy_stream_cleanup) {
		return (protocol->proxy_stream_cleanup)(srv, sess->proxy_con);
	}
	return 1;
}

/**
 * decode the content for the protocol
 *
 * http might have chunk-encoding
 * fastcgi has the fastcgi wrapper code
 *
 * @param out chunkqueue for the plain content
 */

handler_t proxy_stream_decoder(server *srv, proxy_session *sess, chunkqueue *out) {
	proxy_protocol *protocol = (sess->proxy_backend) ? sess->proxy_backend->protocol : NULL;
	if(protocol && protocol->proxy_stream_decoder) {
		return (protocol->proxy_stream_decoder)(srv, sess, out);
	}
	ERROR("protocol '%s' is not supported yet", BUF_STR(protocol->name));
	return HANDLER_ERROR;
}

/**
 * encode the content for the protocol
 *
 * @param in chunkqueue with the content to (no encoding)
 */
handler_t proxy_stream_encoder(server *srv, proxy_session *sess, chunkqueue *in) {
	proxy_protocol *protocol = (sess->proxy_backend) ? sess->proxy_backend->protocol : NULL;
	if(protocol && protocol->proxy_stream_encoder) {
		return (protocol->proxy_stream_encoder)(srv, sess, in);
	}
	ERROR("protocol '%s' is not supported yet", BUF_STR(protocol->name));
	return HANDLER_ERROR;
}

/**
 * encode the request for the protocol
 *
 * @param in chunkqueue with the content to (no encoding)
 * @param out chunkqueue for the encoded, protocol specific data
 */
handler_t proxy_encode_request_headers(server *srv, proxy_session *sess, chunkqueue *in) {
	proxy_protocol *protocol = (sess->proxy_backend) ? sess->proxy_backend->protocol : NULL;
	if(protocol && protocol->proxy_encode_request_headers) {
		/* reset proxy connection queues before we encode a new request.
		 */
		chunkqueue_reset(sess->proxy_con->send);
		chunkqueue_reset(sess->proxy_con->recv);
		return (protocol->proxy_encode_request_headers)(srv, sess, in);
	}

	if (protocol == NULL) {
		ERROR("protocol is not set: %s", "");
	} else {
		ERROR("protocol '%s' is not supported yet", BUF_STR(protocol->name));
	}
	return HANDLER_ERROR;
}

handler_t proxy_handle_response_headers(server *srv, connection *con, plugin_data *p,
	                                         proxy_session *sess, chunkqueue *out) {
	int have_content_length = 0;
	int do_x_rewrite = 0;
	size_t i;

	/* finished parsing http response headers from backend, now prepare http response headers
	 * for client response.
	 */
	sess->content_length = -1;
	con->http_status = sess->resp->status;

	/* copy the http-headers */
	for (i = 0; i < sess->resp->headers->used; i++) {
		const char *ign[] = { "Status", NULL };
		size_t j, k;
		data_string *ds;

		data_string *header = (data_string *)sess->resp->headers->data[i];

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

			sess->content_length = strtol(header->value->ptr, NULL, 10);

			if (sess->content_length < 0) {
				return HANDLER_ERROR;
			}
			con->response.content_length = sess->content_length;
			/* don't save this header, other modules might change the content length. */
			continue;
		} else if (0 == buffer_caseless_compare(CONST_BUF_LEN(header->key), CONST_STR_LEN("X-Sendfile")) ||
			   0 == buffer_caseless_compare(CONST_BUF_LEN(header->key), CONST_STR_LEN("X-LIGHTTPD-send-file"))) {
			if (p->conf.allow_x_sendfile) {
				sess->send_response_content = 0;
				sess->do_internal_redirect = 1;

				/* don't try to rewrite this request through mod_proxy_core again */
				sess->internal_redirect_count = MAX_INTERNAL_REDIRECTS;

				buffer_copy_string_buffer(con->physical.path, header->value);

				/* as we want to support ETag and friends we set the physical path for the file
				 * and hope mod_staticfile catches up */
			}

			continue;
		} else if (0 == buffer_caseless_compare(CONST_BUF_LEN(header->key), CONST_STR_LEN("X-LIGHTTPD-send-tempfile"))) {
			if (p->conf.allow_x_sendfile && !buffer_is_empty(header->value)) {
				stat_cache_entry *sce = NULL;

				if (HANDLER_ERROR != stat_cache_get_entry(srv, con, header->value, &sce)) {
					chunk *c;
					sess->send_response_content = 0;

					if(sce->st.st_size > 0) {
						chunkqueue_append_file(con->send, header->value, 0, sce->st.st_size);
						con->send->bytes_in += sce->st.st_size;
						c = con->send->last;
						c->file.is_temp = 1;
					} else {
						if(unlink(BUF_STR(header->value)) < 0) {
							ERROR("Failed to delete empty tempfile: file=%s, error: %s", BUF_STR(header->value), strerror(errno));
						}
					}
					con->response.content_length = sce->st.st_size;
					have_content_length = 1;
					con->send->is_closed = 1;
				} else {
					ERROR("Failed to send tempfile: file=%s, error: %s", BUF_STR(header->value), strerror(errno));
				}
			}

			continue;
		} else if (0 == buffer_caseless_compare(CONST_BUF_LEN(header->key), CONST_STR_LEN("X-Rewrite-URI"))) {
			if (p->conf.allow_x_rewrite) {
				do_x_rewrite = 1;
				buffer_copy_string_buffer(con->request.uri, header->value);
			}

			continue;
		} else if (0 == buffer_caseless_compare(CONST_BUF_LEN(header->key), CONST_STR_LEN("X-Rewrite-Host"))) {
			if (p->conf.allow_x_rewrite) {
				do_x_rewrite = 1;
				buffer_copy_string_buffer(con->request.http_host, header->value);
				/* replace Host request header */
				if (NULL != (ds = (data_string *)array_get_element(con->request.headers, CONST_STR_LEN("Host")))) {
					buffer_copy_string_buffer(ds->value, header->value);
				} else {
					/* insert Host request header */
					if (NULL == (ds = (data_string *)array_get_unused_element(con->request.headers, TYPE_STRING))) {
						ds = data_response_init();
					}
					buffer_copy_string(ds->key, "Host");
					buffer_copy_string_buffer(ds->value, header->value);
					array_insert_unique(con->request.headers, (data_unset *)ds);
				}
			}

			continue;
		} else if (0 == buffer_caseless_compare(CONST_BUF_LEN(header->key), CONST_STR_LEN("X-Rewrite-Backend"))) {
			if (p->conf.allow_x_rewrite) {
				do_x_rewrite = 1;
				if (!sess->sticky_session) sess->sticky_session = buffer_init();
				buffer_copy_string_buffer(sess->sticky_session, header->value);
				sess->do_x_rewrite_backend = 1;
			}

			continue;
		} else if (0 == buffer_caseless_compare(CONST_BUF_LEN(header->key), CONST_STR_LEN("Transfer-Encoding"))) {
			if (strstr(header->value->ptr, "chunked")) {
				sess->is_chunked = 1;
			}
			/* ignore the header */
			continue;
		} else if (0 == buffer_caseless_compare(CONST_BUF_LEN(header->key), CONST_STR_LEN("Connection"))) {
			if (strstr(header->value->ptr, "close")) {
				sess->is_closing = 1;
			}
			/* ignore the header */
			continue;

		}

		if (NULL == (ds = (data_string *)array_get_unused_element(con->response.headers, TYPE_STRING))) {
			ds = data_response_init();
		}


		buffer_copy_string_buffer(ds->key, header->key);

#ifdef HAVE_PCRE_H
		for (k = 0; k < p->conf.response_rewrites->used; k++) {
			proxy_rewrite *rw = p->conf.response_rewrites->ptr[k];

			if (buffer_is_equal(rw->header, header->key)) {
				int ret;

				if ((ret = pcre_replace(rw->regex, rw->replace, header->value, p->replace_buf)) < 0) {
					switch (ret) {
					case PCRE_ERROR_NOMATCH:
						/* hmm, ok. no problem */
						buffer_append_string_buffer(ds->value, header->value);
						break;
					default:
						TRACE("oops, pcre_replace failed with: %d", ret);
						break;
					}
				} else {
					buffer_append_string_buffer(ds->value, p->replace_buf);
				}

				break;
			}
		}

		if (k == p->conf.response_rewrites->used) {
			buffer_copy_string_buffer(ds->value, header->value);
		}
#else
		buffer_copy_string_buffer(ds->value, header->value);
#endif

		array_insert_unique(con->response.headers, (data_unset *)ds);
	}

	if (do_x_rewrite) {
		sess->send_response_content = 0;
		sess->do_internal_redirect = 1;
		sess->do_new_session = 1;

		/* we are restarting the whole request, reset all the response headers */
		array_reset(con->response.headers);
		
		buffer_reset(con->physical.path);

		config_cond_cache_reset(srv, con);
	}

	/* we are finished decoding the response headers. */
	if(!out->is_closed) {
		/* We don't have all the response content try to enable chunked encoding. */
		/* does the client allow us to send chunked encoding ? */
		if (con->request.http_version == HTTP_VERSION_1_1 &&
		    !have_content_length) {
			con->response.transfer_encoding = HTTP_TRANSFER_ENCODING_CHUNKED;
		}
	}

	/* we might have part of the response content too */
	proxy_copy_response(srv, con, sess);

	return HANDLER_FINISHED; /* we have a full header */
}

/*
 * if there is data in the send queue enable FDEVENT_OUT & FDEVENT_IN.
 * else just enable FDEVENT_IN.
 */
static int proxy_connection_enable_events(server *srv, proxy_connection *proxy_con) {
	int events = FDEVENT_IN;
	if (proxy_con->send->bytes_out < proxy_con->send->bytes_in) events |= FDEVENT_OUT;
	return fdevent_event_add(srv->ev, proxy_con->sock, events);
}

/**
 * encode/decode stream data from backend connection.
 *
 */
handler_t proxy_stream_encode_decode(server *srv, proxy_session *sess) {
	//proxy_connection *proxy_con = sess->proxy_con;
	connection  *con  = sess->remote_con;

	if (!sess->recv->is_closed) {
		/* call stream-decoder (HTTP-chunked, FastCGI, ... ) */
		switch (proxy_stream_decoder(srv, sess, sess->recv)) {
		case HANDLER_FINISHED:
			/* finished decoding reponse. */
			/* we are done, close the response content queue */
			sess->recv->is_closed = 1;
			break;
		case HANDLER_GO_ON:
			break;
		case HANDLER_ERROR:
			ERROR("%s", "stream decoder failed.");
			/* error */
			return HANDLER_ERROR;
		default:
			TRACE("stream-decoder: %s", "foo");
			break;
		}
	}

	/* encode request content. */
	switch(proxy_stream_encoder(srv, sess, con->recv)) {
	case HANDLER_FINISHED:
		/* finished encoding request content. */
		break;
	case HANDLER_GO_ON:
		break;
	case HANDLER_ERROR:
		ERROR("%s", "stream encoder failed.");
		/* error */
		return HANDLER_ERROR;
	default:
		TRACE("stream-encoder: %s", "foo");
		break;
	}
	chunkqueue_remove_finished_chunks(con->recv);

	if (!sess->is_closed) {
		/* enable FDEVENT_OUT if there is data to send. */
		proxy_connection_enable_events(srv, sess->proxy_con);
	}

	return HANDLER_GO_ON;
}

handler_t proxy_connection_connect(proxy_connection *con) {
	int fd;
#ifdef _WIN32
	int io_ctl = 1;
	int win_err = 0;
#endif

	if (-1 == (fd = socket(con->address->addr.plain.sa_family, SOCK_STREAM, 0))) {
		switch (errno) {
		case EMFILE:
			return HANDLER_WAIT_FOR_FD;
		default:
			ERROR("socket failed: %s (%d)", strerror(errno), errno);
			return HANDLER_ERROR;
		}
	}

#ifdef O_NONBLOCK
	fcntl(fd, F_SETFL, O_NONBLOCK | O_RDWR);
#elif defined _WIN32
	ioctlsocket(fd, FIONBIO, &io_ctl);
#endif

	con->sock->fd = fd;
	con->sock->fde_ndx = -1;
	con->sock->type = IOSOCKET_TYPE_SOCKET;

	if (-1 == connect(fd, &(con->address->addr.plain), con->address->addrlen)) {
		switch(light_sock_errno()) {
		case EINPROGRESS:
		case EALREADY:
		case EINTR:
#ifdef _WIN32
		case EWOULDBLOCK:
#endif
			return HANDLER_WAIT_FOR_EVENT;
		default:
			closesocket(fd);
			con->sock->fd = -1;

			ERROR("connect(%s) failed: %s (%d)", 
				BUF_STR(con->address->name),
				strerror(errno), errno);
			return HANDLER_ERROR;
		}
	}

	return HANDLER_GO_ON;
}

/**
 * event-handler for idling connections
 *
 * unused (idling) keep-alive connections are not bound to a session
 * and need their own event-handler
 *
 * if the connection closes (we get a FDEVENT_IN), close our side too and
 * let the trigger-func handle the cleanup
 *
 * @see proxy_trigger
 */


static handler_t proxy_handle_fdevent_idle(void *s, void *ctx, int revents) {
	server      *srv  = (server *)s;
	proxy_connection *proxy_con = ctx;
	char buf[4096];

	if (revents & FDEVENT_IN) {
		switch (proxy_con->state) {
		case PROXY_CONNECTION_STATE_IDLE:
			proxy_con->state = PROXY_CONNECTION_STATE_CLOSED;

			/* close + unregister have to be in the same call,
			 * otherwise we get a events for a re-opened fd */

			sockread(proxy_con->sock->fd, buf, sizeof(buf));

			fdevent_event_del(srv->ev, proxy_con->sock);

			/* we have to notify the pool, that this connection is free now */

			break;
		case PROXY_CONNECTION_STATE_CLOSED:
			/* poll() is state-driven, we will get events as long as it isn't disabled
			 * the close() above should disable the events too */
			ERROR("%s", "hurry up buddy, I got another event for a closed idle-connection");
			break;
		default:
			ERROR("invalid connection state: %d, should be idle", proxy_con->state);
			break;
		}
	}

	return HANDLER_GO_ON;
}


/* don't call any proxy functions directly */
static handler_t proxy_handle_fdevent(void *s, void *ctx, int revents) {
	server      *srv  = (server *)s;
	proxy_session *sess = ctx;
	proxy_connection *proxy_con;
	connection  *con;
	int call_append = 1;

	/**
	 * we might receive a event for a connection that should be closed already 
	 */

	if (sess == NULL) {
		/**
		 * race
		 * the other fd of the connection might have been closed already
		 * mod_proxy_connection_close_callback() frees the 
		 */

		ERROR("the session ctx is NULL: %p, expect a crash", sess);
	}

	proxy_con = sess->proxy_con;
	con       = sess->remote_con;

	if (revents & FDEVENT_IN) {
		chunkqueue_remove_finished_chunks(proxy_con->recv);
		switch (srv->network_backend_read(srv, con, proxy_con->sock, proxy_con->recv)) {
		case NETWORK_STATUS_CONNECTION_CLOSE:
			/* a close here mean we can't read/write anymore data. */
			sess->is_closed = 1;
			proxy_con->send->is_closed = 1;
			proxy_con->recv->is_closed = 1;
			break;
		case NETWORK_STATUS_SUCCESS:
		case NETWORK_STATUS_WAIT_FOR_EVENT:
			break;
		default:
			ERROR("%s", "oops, we failed to read");
			break;
		}
	}

	if (revents & FDEVENT_OUT) {
		fdevent_event_add(srv->ev, proxy_con->sock, FDEVENT_IN);

		switch (srv->network_backend_write(srv, con, proxy_con->sock, proxy_con->send)) {
		case NETWORK_STATUS_SUCCESS:
			break;
		case NETWORK_STATUS_WAIT_FOR_AIO_EVENT:
			call_append = 0; /* let the joblist-queue-handler call the connection again */
			break;
		case NETWORK_STATUS_WAIT_FOR_EVENT:
			fdevent_event_add(srv->ev, proxy_con->sock, FDEVENT_IN | FDEVENT_OUT);
			break;
		case NETWORK_STATUS_CONNECTION_CLOSE:
			/* done mark the connection closed here only the send queue,
			 * since there might be more data to read.
			 */
			proxy_con->send->is_closed = 1;
			break;
		default:
			ERROR("%s", "oops, we failed to write");
			break;
		}
		chunkqueue_remove_finished_chunks(proxy_con->send);
	}

	if (revents & FDEVENT_HUP) {
		if (!(revents & FDEVENT_IN)) {
			/* if we only received the FDEVENT_HUP event, then there is no more data to read. */
			sess->is_closed = 1;
			proxy_con->recv->is_closed = 1;
		}
		/* can't write on a closed socket, so close the send queue. */
		proxy_con->send->is_closed = 1;
	}

	if (sess->is_closed) {
		fdevent_event_del(srv->ev, sess->proxy_con->sock);
	}

	/**
	 * on NETWORK_STATUS_WAIT_FOR_AIO_EVENT we are no allowed to call the state-engine 
	 * the connection has to sleep until our disk-read is finished 
	 *
	 * the joblist_append() will be called by the joblist_append_queue_handler in server.c
	 */
	if (call_append) joblist_append(srv, con);

	return HANDLER_GO_ON;
}

/**
 * Cleanup backend proxy connection.
 */
int proxy_remove_backend_connection(server *srv, proxy_session *sess) {

	if(!sess->proxy_con) return -1;

	/* cleanup protocol stream */
	proxy_stream_cleanup(srv, sess);

	/* remove closed connection from pool. */
	proxy_connection_pool_remove_connection(sess->proxy_backend->pool, sess->proxy_con);

	/* update stats. */
	COUNTER_SET(sess->proxy_backend->pool_size, sess->proxy_backend->pool->used);
	COUNTER_DEC(sess->proxy_backend->load);

	/* the backend might have been disabled by a full connection pool, re-enable
	 * if there is atleast one active address.
	 */
	if (sess->proxy_backend->disabled_addresses <= sess->proxy_backend->address_pool->used) {
		sess->proxy_backend->state = PROXY_BACKEND_STATE_ACTIVE;
	}

	if (sess->proxy_con->sock->fd != -1) {
		/* if we fail in connect() might not have a FD yet */
		fdevent_event_del(srv->ev, sess->proxy_con->sock);
		fdevent_unregister(srv->ev, sess->proxy_con->sock);
	}

	proxy_connection_free(sess->proxy_con);
	sess->proxy_con = NULL;

	return 0;
}

/**
 * Recycle packend proxy connection.
 * 
 * 1. close the connection if keep-alive is disable
 * 2. or set the connection idling and wake up a backlogged request.
 *
 */
int proxy_recycle_backend_connection(server *srv, plugin_data *p, proxy_session *sess) {
	proxy_request *req;
	int reuse = 1;

	if (!sess) return HANDLER_GO_ON;

	if (sess->proxy_con) {
		COUNTER_INC(p->request_count);
		COUNTER_INC(sess->proxy_backend->request_count);
		COUNTER_DEC(sess->proxy_backend->load);
		switch (sess->proxy_con->state) {
		case PROXY_CONNECTION_STATE_CONNECTED:
			/*
			 * Set the connection to idling if:
			 *
			 * 1. keep-alive was not disabled (sess->is_closing)
			 * 2. backend connection is already closed (sess->is_closed)
			 * 3. backend protocol finished parsing all data for this request.  (sess->recv->is_closed)
			 * 4. keep-alive request count hasn't reached max-keep-alive-requests
			 */
			if (sess->is_closing || sess->is_closed) {
				reuse = 0;
			}

			sess->proxy_con->request_count++;
			if (p->conf.debug) TRACE("request_count=%d", sess->proxy_con->request_count);
			if (sess->proxy_con->request_count >= p->conf.max_keep_alive_requests) {
				reuse = 0;
			}
			if (reuse && sess->recv->is_closed) {
				sess->proxy_con->state = PROXY_CONNECTION_STATE_IDLE;

				/* make sure backend is active since we have a free connection. */
				sess->proxy_backend->state = PROXY_BACKEND_STATE_ACTIVE;

				/* don't ignore events as the FD is idle
				 * we might get a HUP as the remote connection might close */
				fdevent_event_del(srv->ev, sess->proxy_con->sock);
				fdevent_unregister(srv->ev, sess->proxy_con->sock);

				fdevent_register(srv->ev, sess->proxy_con->sock, proxy_handle_fdevent_idle, sess->proxy_con);
				fdevent_event_add(srv->ev, sess->proxy_con->sock, FDEVENT_IN);

				break;
			}

			/* fall-through for non-keep-alive or response parsing didn't finish */

		case PROXY_CONNECTION_STATE_CLOSED:
			proxy_remove_backend_connection(srv, sess);
		case PROXY_CONNECTION_STATE_IDLE:
		default:
			break;
		}
		sess->proxy_con = NULL;
	}

	/* wake up a connection from the backlog */
	if ((req = proxy_backlog_shift(p->conf.backlog))) {
		connection *next_con = req->con;

		if (p->conf.debug) TRACE("wakeup a connection from backlog: con=%d", next_con->sock->fd);
		joblist_append(srv, next_con);

		COUNTER_DEC(p->conf.backlog_size);
		proxy_request_free(req);
	}

	return HANDLER_GO_ON;
}

/**
 * push the session into the backlog
 *
 * @returns HANDLER_ERROR in case we reach the max-connect-retry limit
 */
handler_t mod_proxy_core_backlog_connection(server *srv, connection *con, plugin_data *p, proxy_session *sess) {
	proxy_request *req;

	/* connection pool is full, queue the request for now */
	req = proxy_request_init();
	req->added_ts = srv->cur_ts;
	req->con = con;

	proxy_backlog_push(p->conf.backlog, req);

	COUNTER_INC(p->conf.backlog_size);
	sess->sent_to_backlog++;

	if (sess->sent_to_backlog > 4) {
		return HANDLER_ERROR;
	}

	return HANDLER_GO_ON;
}

/**
 * build the request-header array and call the backend specific request formater
 * to fill the chunkqueue
 */
int proxy_get_request_header(server *srv, connection *con, plugin_data *p, proxy_session *sess) {
	/* request line */
	const char *remote_ip;
	size_t i;

	remote_ip = inet_ntop_cache_get_ip(srv, &(con->dst_addr));
	array_append_key_value(sess->request_headers, CONST_STR_LEN("X-Forwarded-For"), remote_ip, strlen(remote_ip));

	/* http_host is NOT is just a pointer to a buffer
	 * which is NULL if it is not set */
	if (con->request.http_host &&
	    !buffer_is_empty(con->request.http_host)) {
		array_set_key_value(sess->request_headers, CONST_STR_LEN("X-Host"), CONST_BUF_LEN(con->request.http_host));
	}
	if (con->conf.is_ssl) {
		array_set_key_value(sess->request_headers, CONST_STR_LEN("X-Forwarded-Proto"), CONST_STR_LEN("https"));
	} else {
		array_set_key_value(sess->request_headers, CONST_STR_LEN("X-Forwarded-Proto"), CONST_STR_LEN("http"));
	}

	/* request header */
	for (i = 0; i < con->request.headers->used; i++) {
		data_string *ds;
		size_t k;

		ds = (data_string *)con->request.headers->data[i];

		if (buffer_is_empty(ds->value) || buffer_is_empty(ds->key)) continue;

		if (buffer_is_equal_string(ds->key, CONST_STR_LEN("Connection"))) continue;
		if (buffer_is_equal_string(ds->key, CONST_STR_LEN("Keep-Alive"))) continue;
		if (buffer_is_equal_string(ds->key, CONST_STR_LEN("Expect"))) continue;
#ifdef HAVE_PCRE_H
		for (k = 0; k < p->conf.request_rewrites->used; k++) {
			proxy_rewrite *rw = p->conf.request_rewrites->ptr[k];

			if (buffer_is_equal(rw->header, ds->key)) {
				int ret;

				if ((ret = pcre_replace(rw->regex, rw->replace, ds->value, p->replace_buf)) < 0) {
					switch (ret) {
					case PCRE_ERROR_NOMATCH:
						/* hmm, ok. no problem */
						array_set_key_value(sess->request_headers, CONST_BUF_LEN(ds->key), CONST_BUF_LEN(ds->value));
						break;
					default:
						TRACE("oops, pcre_replace failed with: %d", ret);
						break;
					}
				} else {
					array_set_key_value(sess->request_headers, CONST_BUF_LEN(ds->key), CONST_BUF_LEN(p->replace_buf));
				}

				break;
			}
		}

		if (k == p->conf.request_rewrites->used) {
			array_set_key_value(sess->request_headers, CONST_BUF_LEN(ds->key), CONST_BUF_LEN(ds->value));
		}
#else
		array_set_key_value(sess->request_headers, CONST_BUF_LEN(ds->key), CONST_BUF_LEN(ds->value));
#endif
	}

	/* check if we want to rewrite the uri */
#ifdef HAVE_PCRE_H
	for (i = 0; i < p->conf.request_rewrites->used; i++) {
		proxy_rewrite *rw = p->conf.request_rewrites->ptr[i];

		if (buffer_is_equal_string(rw->header, CONST_STR_LEN("_uri"))) {
			int ret;

			if ((ret = pcre_replace(rw->regex, rw->replace, con->request.uri, p->replace_buf)) < 0) {
				switch (ret) {
				case PCRE_ERROR_NOMATCH:
					/* hmm, ok. no problem */
					buffer_copy_string_buffer(sess->request_uri, con->request.uri);
					break;
				default:
					TRACE("oops, pcre_replace failed with: %d", ret);
					break;
				}
			} else {
				buffer_copy_string_buffer(sess->request_uri, p->replace_buf);
			}

			break;
		} else if (buffer_is_equal_string(rw->header, CONST_STR_LEN("_docroot"))) {
			int ret;

			if ((ret = pcre_replace(rw->regex, rw->replace, con->physical.doc_root, p->replace_buf)) < 0) {
				switch (ret) {
				case PCRE_ERROR_NOMATCH:
					/* hmm, ok. no problem */
					break;
				default:
					TRACE("oops, pcre_replace failed with: %d", ret);
					break;
				}
			} else {
				/* adjust DOCUMENT_ROOT */
				buffer_copy_string_buffer(con->physical.doc_root, p->replace_buf);

				/* adjust SCRIPT_FILENAME */
				buffer_copy_string_buffer(con->physical.path, p->replace_buf);
				buffer_append_string_buffer(con->physical.path, con->physical.rel_path);
			}
		}
	}

	if (i == p->conf.request_rewrites->used) {
		buffer_copy_string_buffer(sess->request_uri, con->request.uri);
	}
#else
	buffer_copy_string_buffer(sess->request_uri, con->request.uri);
#endif

	proxy_encode_request_headers(srv, sess, con->recv);

	return 0;
}

/* we are event-driven
 *
 * the first entry is connect() call, if the doesn't need a event
 *
 * a bit boring
 * - connect (+ delayed connect)
 * - write header + content
 * - read header + content
 *
 * as soon as have read the response header we switch con->file_started and return HANDLER_GO_ON to
 * tell the core we are ready to stream out the content.
 *  */
handler_t proxy_state_engine(server *srv, connection *con, plugin_data *p, proxy_session *sess) {
	/* do we have a connection ? */

	if (p->conf.debug > 0)
		TRACE("proxy_state_engine: state=%d", sess->state);

	switch (sess->state) {
	case PROXY_STATE_UNSET:
		/* we are not started yet */
		sess->connect_start_ts = srv->cur_ts;
		switch(proxy_connection_connect(sess->proxy_con)) {
		case HANDLER_WAIT_FOR_EVENT:
			/* waiting on the connect call */

			fdevent_register(srv->ev, sess->proxy_con->sock, proxy_handle_fdevent, sess);
			fdevent_event_add(srv->ev, sess->proxy_con->sock, FDEVENT_OUT);

			sess->state = PROXY_STATE_CONNECTING;
			sess->proxy_con->state = PROXY_CONNECTION_STATE_CONNECTING;
			/**
			 * if we are in 
			 *
			 * connect(...) = -1 EINPROGRESS
			 *
			 * it might take ages until we get a response
			 */
			sess->proxy_con->state_ts = srv->cur_ts;
			sess->proxy_con->proxy_sess = sess;

			/* if the client connection closes its end get notified */
			fdevent_event_add(srv->ev, con->sock, FDEVENT_HUP);

			return HANDLER_WAIT_FOR_EVENT;
		case HANDLER_GO_ON:
			/* we are connected */
			sess->state = PROXY_STATE_CONNECTED;
			sess->proxy_con->state = PROXY_CONNECTION_STATE_CONNECTED;

			/* initialize stream. */
			proxy_stream_init(srv, sess);

			fdevent_register(srv->ev, sess->proxy_con->sock, proxy_handle_fdevent, sess);

			break;
		case HANDLER_WAIT_FOR_FD:
			/* we have to come back later when we have a fd */
			return HANDLER_WAIT_FOR_FD;
		case HANDLER_ERROR:
			/* there is no-one on the other side */
			sess->proxy_con->address->disabled_until = srv->cur_ts + 60;

			TRACE("connecting to address %s (%p) failed, disabling for 60 sec", 
					BUF_STR(sess->proxy_con->address->name),
					sess->proxy_con->address);
			COUNTER_INC(sess->proxy_backend->requests_failed);

			sess->proxy_con->address->state = PROXY_ADDRESS_STATE_DISABLED;
			sess->proxy_backend->disabled_addresses++;
			/* if all addresses in address_pool are disabled, then disable this backend. */

			if (sess->proxy_backend->disabled_addresses == sess->proxy_backend->address_pool->used) {
				sess->proxy_backend->state = PROXY_BACKEND_STATE_DISABLED;
			}
			/* try another backend instead */
			return HANDLER_COMEBACK;
		default:
			/* not good, something failed */
			return HANDLER_ERROR;

		}

		/* fall through */
	case PROXY_STATE_CONNECTING:
		/* skip if already connected */
		if (sess->state == PROXY_STATE_CONNECTING) {
			int socket_error;
			socklen_t socket_error_len = sizeof(socket_error);

			fdevent_event_del(srv->ev, sess->proxy_con->sock);

			switch (sess->proxy_con->state) {
			case PROXY_CONNECTION_STATE_CONNECTING:
				if (0 != getsockopt(sess->proxy_con->sock->fd, SOL_SOCKET, SO_ERROR, &socket_error, &socket_error_len)) {
					ERROR("getsockopt failed:", strerror(errno));
	
					return HANDLER_ERROR;
				}
				if (socket_error != 0) {
					switch (socket_error) {
					case ECONNREFUSED:
						/* there is no-one on the other side */
						sess->proxy_con->address->disabled_until = srv->cur_ts + 2;
	
						TRACE("address %s refused us, disabling for 2 sec", sess->proxy_con->address->name->ptr);
						COUNTER_INC(sess->proxy_backend->requests_failed);
	
						break;
					case EHOSTUNREACH:
						/* there is no-one on the other side */
						sess->proxy_con->address->disabled_until = srv->cur_ts + 60;
	
						TRACE("host %s is unreachable, disabling for 60 sec", sess->proxy_con->address->name->ptr);
						break;
					default:
						sess->proxy_con->address->disabled_until = srv->cur_ts + 60;
	
						TRACE("connected finally failed: %s (%d)", strerror(socket_error), socket_error);
	
						TRACE("connect to address %s failed and I don't know why, disabling for 10 sec", sess->proxy_con->address->name->ptr);
	
						break;
					}
	
					sess->proxy_con->address->state = PROXY_ADDRESS_STATE_DISABLED;
					sess->proxy_backend->disabled_addresses++;
					/* if all addresses in address_pool are disabled, then disable this backend. */
					if (sess->proxy_backend->disabled_addresses == sess->proxy_backend->address_pool->used) {
						sess->proxy_backend->state = PROXY_BACKEND_STATE_DISABLED;
					}
					return HANDLER_COMEBACK;
				}
	
				sess->state = PROXY_STATE_CONNECTED;
				sess->proxy_con->state = PROXY_CONNECTION_STATE_CONNECTED;
	
				/* initialize stream. */
				proxy_stream_init(srv, sess);

				break;
			case PROXY_CONNECTION_STATE_CLOSED:
				/* looks like the connect() timed out */
				sess->proxy_con->address->disabled_until = srv->cur_ts + 2;
				sess->proxy_con->address->state = PROXY_ADDRESS_STATE_DISABLED;

				/* the connection */
				sess->proxy_con->state = PROXY_CONNECTION_STATE_CLOSED;

				/* if all addresses in address_pool are disabled, then disable this backend. */
				sess->proxy_backend->disabled_addresses++;

				if (sess->proxy_backend->disabled_addresses == sess->proxy_backend->address_pool->used) {
					sess->proxy_backend->state = PROXY_BACKEND_STATE_DISABLED;
				}
				TRACE("connect(%s) to failed: trying another backed", 
						BUF_STR(sess->proxy_con->address->name));
				return HANDLER_COMEBACK;
			default:
				ERROR("invalid connection-state: %d", sess->proxy_con->state);
				break;
			}
		}

		/* fall through */
	case PROXY_STATE_CONNECTED:

		sess->state = PROXY_STATE_WRITE_REQUEST_HEADER;

		/* fall through */
	case PROXY_STATE_WRITE_REQUEST_HEADER:
		/* build the header */
		proxy_get_request_header(srv, con, p, sess);

		/* send the header together with the body */
		sess->state = PROXY_STATE_WRITE_REQUEST_BODY;

		/* fall through */
	case PROXY_STATE_WRITE_REQUEST_BODY:
		/* do we have a content-body to send up to the backend ? */

		switch (proxy_stream_encode_decode(srv, sess)) {
		case HANDLER_FINISHED:
		case HANDLER_GO_ON:
			/* some backends will send a response before all the request content has been written. */
			if (sess->is_closed || sess->have_response_headers) {
				chunk *c;
				if (sess->is_closed && !sess->have_response_headers) {
					if (sess->p->conf.debug) TRACE("%s", "connection to backend closed when sending request headers/content.");
				}
				if (con->recv->bytes_out < con->recv->bytes_in) {
					/* we have to consume all the request content data. */
					for (c = con->recv->first; c; c = c->next) {
						switch(c->type) {
						case MEM_CHUNK:
							c->offset = c->mem->used - 1;
							break;
						case FILE_CHUNK:
							c->offset = c->file.length;
							break;
						default:
							break;
						}
					}
					con->recv->bytes_out = con->recv->bytes_in;
					con->recv->is_closed = 1;
				}
				break;
			}
			return HANDLER_WAIT_FOR_EVENT;
		case HANDLER_ERROR:
			/* error */
			return HANDLER_ERROR;
		default:
			TRACE("stream-decoder: %s", "foo");
			break;
		}

		sess->state = PROXY_STATE_READ_RESPONSE_HEADER;
		/* fall through */
	case PROXY_STATE_READ_RESPONSE_HEADER:

		/* decode/encode stream. */
		switch (proxy_stream_encode_decode(srv, sess)) {
		case HANDLER_FINISHED:
		case HANDLER_GO_ON:
			if (!sess->proxy_con->recv->is_closed && !sess->have_response_headers) {
				return HANDLER_WAIT_FOR_EVENT;
			}
			break;
		case HANDLER_ERROR:
			/* error */
			return HANDLER_ERROR;
		default:
			TRACE("stream-decoder: %s", "foo");
			return HANDLER_ERROR;
		}

		if (sess->have_response_headers) {
			/* handle the parsed response headers. */
			switch (proxy_handle_response_headers(srv, con, p, sess, sess->recv)) {
			case HANDLER_FINISHED:
			case HANDLER_GO_ON:
				break;
			case HANDLER_ERROR:
				/* bad gateway */
				con->http_status = 502;
				return HANDLER_FINISHED;
			default:
				ERROR("%s", "++ oops, something went wrong while parsing response headers");
				con->http_status = 500; /* Internal Server Error */
				return HANDLER_ERROR;
			}
		}

		if (!sess->is_closed && !sess->have_response_headers) {
			if (sess->proxy_con->recv->bytes_in == 0) {
				/* the connection went away before we got something back */
				if (p->conf.debug) TRACE("%s", "connection closed while reading the response headers");

				if (con->request.content_length <= 0) {
					/**
					 * we might run into a 'race-condition'
					 *
					 * 1. proxy-con is keep-alive, idling and just being closed (FDEVENT_IN) [fd=27]
					 * 2. new connection comes in, we use the idling connection [fd=14]
					 * 3. we write(), successful [to fd=27]
					 * 3. we read() ... and finally receive the close-event for the connection
					 */
	
					return HANDLER_COMEBACK;
				} else {
					ERROR("%s", "request content length > 0 can't restart request.");
				}
			} else {
				ERROR("%s", "connection closed after reading part of the response headers.");
			}

			con->http_status = 500; /* Internal Server Error */
			return HANDLER_ERROR;
		} else if (sess->do_internal_redirect) {
			/* no more response data to process.  do redirect now. */
			if (sess->recv->is_closed) {
				sess->state = PROXY_STATE_FINISHED;
				/* now it becomes tricky
				 *
				 * mod_staticfile should handle this file for us
				 * con->mode = DIRECT is taking us out of the loop */
				con->mode = DIRECT;
				con->http_status = 0;

				return HANDLER_COMEBACK;
			} else {
				/* finish processing response data, so we can re-use backend connection. */
				sess->state = PROXY_STATE_READ_RESPONSE_BODY;
			}
		} else {
			con->file_started = 1;
			/* if Status: ... is not set, 200 is our default status-code */
			if (con->http_status == 0) con->http_status = 200;

			/* check if all the response content has been read/decoded. */
			if (sess->bytes_read == sess->content_length) {
				sess->is_request_finished = 1;
				/* close response content chunkqueue */
				sess->recv->is_closed = 1;
			}
			/* copy any response content we might have. */
			proxy_copy_response(srv, con, sess);

			sess->state = PROXY_STATE_READ_RESPONSE_BODY;

			/**
			 * set the event to pass the content through to the server
			 *
			 * this triggers the event-handler
			 * @see proxy_handle_fdevent
			 */

			return HANDLER_GO_ON; /* tell http_response_prepare that we are done with the header */
		}

		if (sess->state != PROXY_STATE_READ_RESPONSE_BODY) break;
	case PROXY_STATE_READ_RESPONSE_BODY:

		switch (proxy_stream_encode_decode(srv, sess)) {
		case HANDLER_FINISHED:
		case HANDLER_GO_ON:
			break;
		case HANDLER_ERROR:
			/* error */
			return HANDLER_ERROR;
		default:
			TRACE("stream-decoder: %s", "foo");
			break;
		}

		proxy_copy_response(srv, con, sess);

		if (!sess->proxy_con->recv->is_closed && !sess->is_request_finished) {
			return HANDLER_WAIT_FOR_EVENT;
		}

		if(sess->is_request_finished) {
			sess->recv->is_closed = 1;
			con->send->is_closed = 1;
			/* recycle proxy connection. */
			proxy_recycle_backend_connection(srv, p, sess);

			sess->state = PROXY_STATE_FINISHED;

			if (sess->do_internal_redirect) {
				/* now it becomes tricky
				 *
				 * mod_staticfile should handle this file for us
				 * con->mode = DIRECT is taking us out of the loop */
				con->mode = DIRECT;
				con->http_status = 0;

				return HANDLER_COMEBACK;
			}
		}

		/* we wrote something into the the send-buffers,
		 * call the connection-handler to push it to the client */
		joblist_append(srv, con);

		break;
	default:
		break;
	}

	return HANDLER_GO_ON;
}

proxy_backend *proxy_find_backend(server *srv, connection *con, plugin_data *p, buffer *name) {
	size_t i;

	UNUSED(srv);
	UNUSED(con);

	for (i = 0; i < p->conf.backends->used; i++) {
		proxy_backend *backend = p->conf.backends->ptr[i];

		if (buffer_is_equal(backend->name, name)) {
			return backend;
		}
	}

	return NULL;
}

/**
 * choose an available backend
 *
 */
proxy_backend *proxy_backend_balancer(server *srv, connection *con, proxy_session *sess) {
	size_t i;
	plugin_data *p = sess->p;
	proxy_backends *backends = p->conf.backends;
	unsigned long last_max; /* for the HASH balancer */
	proxy_backend *backend = NULL, *cur_backend = NULL;
	int active_backends = 0, rand_ndx;
	size_t min_used;

	UNUSED(srv);

	/* if we only have one backend just return it. */
	if (backends->used == 1) {
		backend = backends->ptr[0];

		return backend->state == PROXY_BACKEND_STATE_ACTIVE ? backend : NULL;
	}

	/* frist try to select backend based on sticky session. */
	if (sess->sticky_session) {
		/* find backend */
		backend = proxy_find_backend(srv, con, p, sess->sticky_session);
		if (NULL != backend) return backend;
	}

	/* apply balancer algorithm to select backend. */
	switch(p->conf.balancer) {
	case PROXY_BALANCE_CARP:
		/* hash balancing */

		for (i = 0, last_max = ULONG_MAX; i < backends->used; i++) {
			unsigned long cur_max;

			cur_backend = backends->ptr[i];

			if (cur_backend->state != PROXY_BACKEND_STATE_ACTIVE) continue;

			cur_max = generate_crc32c(CONST_BUF_LEN(con->uri.path)) +
				generate_crc32c(CONST_BUF_LEN(cur_backend->name)) + /* we can cache this */
				generate_crc32c(CONST_BUF_LEN(con->uri.authority));
#if 0
			TRACE("hash-election: %s - %s - %s: %ld",
					con->uri.path->ptr,
					cur_backend->name->ptr,
					con->uri.authority->ptr,
					cur_max);
#endif
			if (backend == NULL || (cur_max > last_max)) {
				last_max = cur_max;

				backend = cur_backend;
			}
		}

		break;
	case PROXY_BALANCE_STATIC:
		/* static (only fail-over) */

		for (i = 0; i < backends->used; i++) {
			cur_backend = backends->ptr[i];

			if (cur_backend->state != PROXY_BACKEND_STATE_ACTIVE) continue;

			backend = cur_backend;
			break;
		}

		break;
	case PROXY_BALANCE_SQF:
		/* shortest-queue-first balancing */

		for (i = 0, min_used = SIZE_MAX; i < backends->used; i++) {
			cur_backend = backends->ptr[i];

			if (cur_backend->state != PROXY_BACKEND_STATE_ACTIVE) continue;

			/* the backend is up, use it */
			if (cur_backend->pool->used < min_used ) {
				backend = cur_backend;
				min_used = cur_backend->pool->used;
			}
		}

		break;
	case PROXY_BALANCE_UNSET: /* if not set, use round-robin as default */
	case PROXY_BALANCE_RR:
		/* round robin */

		/**
		 * instead of real RoundRobin we just do a RandomSelect
		 *
		 * it is state-less and has the same distribution
		 */

		active_backends = 0;

		for (i = 0; i < backends->used; i++) {
			cur_backend = backends->ptr[i];

			if (cur_backend->state != PROXY_BACKEND_STATE_ACTIVE) continue;

			active_backends++;
		}

		rand_ndx = (int) (1.0 * active_backends * rand()/(RAND_MAX));

		active_backends = 0;
		for (i = 0; i < backends->used; i++) {
			cur_backend = backends->ptr[i];

			if (cur_backend->state != PROXY_BACKEND_STATE_ACTIVE) continue;

			backend = cur_backend;

			if (rand_ndx == active_backends++) break;
		}

		break;
	}

	return backend;
}

/**
 * choose an available address from the address-pool
 *
 * the backend has different balancers
 */
proxy_address *proxy_address_balancer(server *srv, connection *con, proxy_session *sess) {
	size_t i;
	proxy_backend *backend = sess->proxy_backend;
	proxy_address_pool *address_pool = backend->address_pool;
	unsigned long last_max; /* for the HASH balancer */
	proxy_address *address = NULL, *cur_address = NULL;
	int active_addresses = 0, rand_ndx;
	size_t min_used;

	UNUSED(srv);

	/* if we only have one address just return it. */
	if (address_pool->used == 1) {
		address = address_pool->ptr[0];

		return address->state == PROXY_ADDRESS_STATE_ACTIVE ? address : NULL;
	}

	/* apply balancer algorithm to select address. */
	switch(backend->balancer) {
	case PROXY_BALANCE_CARP:
		/* hash balancing */

		for (i = 0, last_max = ULONG_MAX; i < address_pool->used; i++) {
			unsigned long cur_max;

			cur_address = address_pool->ptr[i];

			if (cur_address->state != PROXY_ADDRESS_STATE_ACTIVE) continue;

			cur_max = generate_crc32c(CONST_BUF_LEN(con->uri.path)) +
				generate_crc32c(CONST_BUF_LEN(cur_address->name)) + /* we can cache this */
				generate_crc32c(CONST_BUF_LEN(con->uri.authority));
#if 0
			TRACE("hash-election: %s - %s - %s: %ld",
					con->uri.path->ptr,
					cur_address->name->ptr,
					con->uri.authority->ptr,
					cur_max);
#endif
			if (address == NULL || (cur_max > last_max)) {
				last_max = cur_max;

				address = cur_address;
			}
		}

		break;
	case PROXY_BALANCE_STATIC:
		/* static (only fail-over) */

		for (i = 0; i < address_pool->used; i++) {
			cur_address = address_pool->ptr[i];

			if (cur_address->state != PROXY_ADDRESS_STATE_ACTIVE) continue;

			address = cur_address;
			break;
		}

		break;
	case PROXY_BALANCE_SQF:
		/* shortest-queue-first balancing */

		for (i = 0, min_used = SIZE_MAX; i < address_pool->used; i++) {
			cur_address = address_pool->ptr[i];

			if (cur_address->state != PROXY_ADDRESS_STATE_ACTIVE) continue;

			/* the address is up, use it */
			if (cur_address->used < min_used ) {
				address = cur_address;
				min_used = cur_address->used;
			}
		}

		break;
	case PROXY_BALANCE_UNSET: /* if not set, use round-robin as default */
	case PROXY_BALANCE_RR:
		/* round robin */

		/**
		 * instead of real RoundRobin we just do a RandomSelect
		 *
		 * it is state-less and has the same distribution
		 */

		active_addresses = 0;

		for (i = 0; i < address_pool->used; i++) {
			cur_address = address_pool->ptr[i];

			if (cur_address->state != PROXY_ADDRESS_STATE_ACTIVE) continue;

			active_addresses++;
		}

		rand_ndx = (int) (1.0 * active_addresses * rand()/(RAND_MAX));

		active_addresses = 0;
		for (i = 0; i < address_pool->used; i++) {
			cur_address = address_pool->ptr[i];

			if (cur_address->state != PROXY_ADDRESS_STATE_ACTIVE) continue;

			address = cur_address;

			if (rand_ndx == active_addresses++) break;
		}

		break;
	}

	return address;
}

static int mod_proxy_core_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i, j;
	plugin_config *s = p->config_storage[0];

	/* global defaults */
	PATCH_OPTION(balancer);
	PATCH_OPTION(debug);
	PATCH_OPTION(backends);
	PATCH_OPTION(backlog);
	PATCH_OPTION(backlog_size);
	PATCH_OPTION(protocol);
	PATCH_OPTION(request_rewrites);
	PATCH_OPTION(response_rewrites);
	PATCH_OPTION(allow_x_sendfile);
	PATCH_OPTION(allow_x_rewrite);
	PATCH_OPTION(max_pool_size);
	PATCH_OPTION(check_local);
	PATCH_OPTION(split_hostnames);
	PATCH_OPTION(max_keep_alive_requests);

	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];

		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;

		/* merge config */
		for (j = 0; j < dc->value->used; j++) {
			data_unset *du = dc->value->data[j];

			if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_BACKENDS))) {
				PATCH_OPTION(backends);
				PATCH_OPTION(backlog);
				PATCH_OPTION(backlog_size);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_DEBUG))) {
				PATCH_OPTION(debug);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_BALANCER))) {
				PATCH_OPTION(balancer);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_PROTOCOL))) {
				PATCH_OPTION(protocol);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_REWRITE_REQUEST))) {
				PATCH_OPTION(request_rewrites);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_REWRITE_RESPONSE))) {
				PATCH_OPTION(response_rewrites);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_ALLOW_X_SENDFILE))) {
				PATCH_OPTION(allow_x_sendfile);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_ALLOW_X_REWRITE))) {
				PATCH_OPTION(allow_x_rewrite);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_MAX_POOL_SIZE))) {
				PATCH_OPTION(max_pool_size);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_CHECK_LOCAL))) {
				PATCH_OPTION(check_local);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_SPLIT_HOSTNAMES))) {
				PATCH_OPTION(split_hostnames);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_PROXY_CORE_MAX_KEEP_ALIVE))) {
				PATCH_OPTION(max_keep_alive_requests);
			}
		}
	}

	return 0;
}

static int mod_proxy_core_check_match(server *srv, connection *con, plugin_data *p, int file_match) {
	proxy_session *sess = con->plugin_ctx[p->id];
	buffer *path;

	if (sess && !sess->do_new_session) {
		/* if this is the second round, sess is already prepared */
		return HANDLER_GO_ON;
	}

	/* check if we have a matching conditional for this request */
	mod_proxy_core_patch_connection(srv, con, p);

	/* no proxy backends to handle this request. */
	if (p->conf.backends->used == 0) return HANDLER_GO_ON;
#if 0
	/* if check_local is enabled, then wait for file match. */
	if (file_match != p->conf.check_local) return HANDLER_GO_ON;
#endif
	path = file_match ? con->physical.path : con->uri.path;
#if 0
	if (buffer_is_empty(path)) return HANDLER_GO_ON;
#endif
	if (sess && sess->do_x_rewrite_backend) {
		proxy_backend *backend;
		buffer *sticky_session = sess->sticky_session;

		sess->sticky_session = NULL;
		/* clear old session state */
		proxy_session_reset(sess);

		/* find backend */
		backend = proxy_find_backend(srv, con, p, sticky_session);
		if (backend == NULL) {
			backend = proxy_backend_init();

			backend->balancer = p->conf.balancer;
			backend->protocol = p->conf.protocol;

			buffer_copy_string_buffer(backend->name, sticky_session);
			/* check if the new backend has a valid backend-address */
			if (0 == proxy_address_pool_add_string(backend->address_pool, backend->name)) {
				if (p->conf.max_pool_size) {
					backend->pool->max_size = p->conf.max_pool_size;
				}

				proxy_backends_add(p->conf.backends, backend);
			} else {
				proxy_backend_free(backend);
				backend = NULL;
			}
		}
		/* no backend available. */
		if (NULL == backend) {
			buffer_free(sticky_session);
			return HANDLER_GO_ON;
		}
		sess->proxy_backend = backend;
		sess->sticky_session = sticky_session;
	} else if (sess) {
		proxy_session_reset(sess);
	}

	/* make sure we have a protocol. */
	if (p->conf.protocol == NULL) {
		con->http_status = 500; /* internal error */
		con->send->is_closed = 1;

		TRACE("proxy-core.backends is set, but proxy-core.protocol is not, can't handle '%s' for host '%s'", 
				BUF_STR(con->uri.path), 
				BUF_STR(con->uri.authority));
		return HANDLER_FINISHED;
	}

	if (!sess) {
		/* a session lives for a single request */
		sess = proxy_session_init();
	}
	/* make sure the state is correct. */
	sess->state = PROXY_STATE_UNSET;

	con->plugin_ctx[p->id] = sess;
	con->mode = p->id;

	if (con->conf.log_request_handling) {
		TRACE("handling it in mod_proxy_core: %s.path=%s",
				file_match ? "physical" : "uri", BUF_STR(path));
	}
	sess->p = p;
	sess->remote_con = con;

	return HANDLER_GO_ON;
}

SUBREQUEST_FUNC(mod_proxy_core_match_url) {
	return mod_proxy_core_check_match(srv, con, p_d, 0);
}

SUBREQUEST_FUNC(mod_proxy_core_match_local_file) {
	return mod_proxy_core_check_match(srv, con, p_d, 1);
}

/**
 * end of a request
 */
REQUESTDONE_FUNC(mod_proxy_connection_close_callback) {
	plugin_data *p = p_d;
	proxy_session *sess = con->plugin_ctx[p->id];

	if (!sess) return HANDLER_GO_ON;

	/* TODO: copy p->conf into proxy_session when request starts. */
	/* re-patch p->conf */
	mod_proxy_core_patch_connection(srv, con, p);

	if (p->conf.debug) TRACE("proxy_connection_reset (%d)", con->sock->fd);

	if (sess->proxy_con) {
		proxy_recycle_backend_connection(srv, p, sess);
	} else {
		/* if we have the connection in the backlog, remove it */
		proxy_backlog_remove_connection(p->conf.backlog, con);
		COUNTER_DEC(p->conf.backlog_size);
	}

	/* cleanup proxy session */
	proxy_session_free(sess);

	con->plugin_ctx[p->id] = NULL;

	return HANDLER_GO_ON;
}

CONNECTION_FUNC(mod_proxy_core_start_backend) {
	plugin_data *p = p_d;
	proxy_session *sess = con->plugin_ctx[p->id];

	if (p->id != con->mode) return HANDLER_GO_ON;
	if (!sess) return HANDLER_GO_ON;

	/* TODO: copy p->conf into proxy_session when request starts. */
	/* re-patch p->conf */
	mod_proxy_core_patch_connection(srv, con, p);

	/*
	 * 0. build session
	 * 1. get a proxy connection
	 * 2. create the http-request header
	 * 3. stream the content to the backend
	 * 4. wait for http-response header
	 * 5. decode the response + parse the response
	 * 6. stream the response-content to the client
	 * 7. session finished wait for request close
	 * 8. kill session
	 * */

	if (sess->do_internal_redirect) {
		if (sess->internal_redirect_count > MAX_INTERNAL_REDIRECTS) {
			/* we already handled this request and sent it to the static file handling */

			return HANDLER_GO_ON;
		}
	}

	switch (sess->state) {
	case PROXY_STATE_FINISHED:
		return HANDLER_GO_ON;
	case PROXY_STATE_CONNECTING:
		/* this connections is waited 10 seconds to connect to the backend
		 * and didn't got a successful connection yet, sending timeout */
		if (srv->cur_ts - sess->connect_start_ts > 10) {
			con->http_status = 504; /* gateway timeout */
			con->send->is_closed = 1;

			if (sess->proxy_con) {
				TRACE("connect to backend timed out: %s", BUF_STR(sess->proxy_con->address->name));
				/* if we are waiting for a proxy-connection right now, close it */
				proxy_remove_backend_connection(srv, sess);
			} else {
				TRACE("%s", "timed out when trying to connect to backend and don't have a connection.");
			}

			return HANDLER_FINISHED;
		}
	default:
		/* handle-request-timeout,  */
#if 0
		if (srv->cur_ts - con->request_start > 60) {
			TRACE("request runs longer than 60sec: current state: %d", sess->state);
		}
#endif
		break;
	}


	/* if the WRITE fails from the start, restart the connection */
	while (1) {
		if (sess->proxy_con == NULL) {
			proxy_address *address = NULL;

			/**
			 * ask the balancer for the next address and
			 * check the connection pool if we have a connection open
			 * for that address
			 */
			if (NULL == (sess->proxy_backend = proxy_backend_balancer(srv, con, sess))) {
				if (p->conf.debug) TRACE("backlog: all backends are full or down, putting %s (%d) into the backlog, retry = %d", 
						BUF_STR(con->uri.path), con->sock->fd, sess->sent_to_backlog + 1);

				/* no backends available right now. */
				if (HANDLER_ERROR == mod_proxy_core_backlog_connection(srv, con, p, sess)) {
					con->http_status = 504; /* gateway timeout */
					con->send->is_closed = 1;

					TRACE("connecting backends timed out, retry limit reached: %d", sess->sent_to_backlog);
					return HANDLER_FINISHED;
				}

				/* no, not really a event,
				 * we just want to block the outer loop from stepping forward
				 *
				 * the trigger will bring this connection back into the game
				 */
				return HANDLER_WAIT_FOR_EVENT;
			}

			sess->proxy_backend->protocol = p->conf.protocol;
			sess->proxy_backend->balancer = p->conf.balancer;
			
			if (p->conf.debug && sess->proxy_backend) {
				TRACE("selected backend: %s, state: %d", BUF_STR(sess->proxy_backend->name), sess->proxy_backend->state);
			}

			/**
			 * ask the balancer for the next address and
			 * check the connection pool if we have a connection open
			 * for that address
			 */
			if (NULL == (address = proxy_address_balancer(srv, con, sess))) {
				/* no addresses available for this backend right now. */
				sess->proxy_backend->state = PROXY_BACKEND_STATE_DISABLED; /* disable backend */
				TRACE("backlog: all addresses are down, putting %s (%d) into the backlog, retry = %d", 
						BUF_STR(con->uri.path), con->sock->fd, sess->sent_to_backlog + 1);

				if (HANDLER_ERROR == mod_proxy_core_backlog_connection(srv, con, p, sess)) {
					con->http_status = 504; /* gateway timeout */
					con->send->is_closed = 1;

					TRACE("connecting backends timed out, retry limit reached: %d", sess->sent_to_backlog);
					return HANDLER_FINISHED;
				}

				/* no, not really a event,
				 * we just want to block the outer loop from stepping forward
				 *
				 * the trigger will bring this connection back into the game
				 */

				return HANDLER_WAIT_FOR_EVENT;
			}

			if (PROXY_CONNECTIONPOOL_FULL == proxy_connection_pool_get_connection(
						sess->proxy_backend->pool, address, &(sess->proxy_con))) {
				/* all connections are busy. */
				sess->proxy_backend->state = PROXY_BACKEND_STATE_FULL;

				if (p->conf.debug) TRACE("backlog: the con-pool is full, putting %s (%d) into the backlog", BUF_STR(con->uri.path), con->sock->fd);
				if (HANDLER_ERROR == mod_proxy_core_backlog_connection(srv, con, p, sess)) {
					con->http_status = 504; /* gateway timeout */
					con->send->is_closed = 1;

					TRACE("connecting backends timed out, retry limit reached: %d", sess->sent_to_backlog);
					return HANDLER_FINISHED;
				}

				/* no, not really a event,
				 * we just want to block the outer loop from stepping forward
				 *
				 * the trigger will bring this connection back into the game
				 */
				return HANDLER_WAIT_FOR_EVENT;
			}
			COUNTER_SET(sess->proxy_backend->pool_size, sess->proxy_backend->pool->used);
			COUNTER_INC(sess->proxy_backend->load);

			/* need to reset flags. */
			sess->is_closing = 0;
			sess->is_closed = 0;
			/* a fresh connection, we need address for it */
			if (sess->proxy_con->state == PROXY_CONNECTION_STATE_CONNECTING) {
				sess->state = PROXY_STATE_UNSET;
				sess->bytes_read = 0;
			} else {
				/* we are already connected */
				sess->state = PROXY_STATE_CONNECTED;

				/* the connection was idling and using the fdevent_idle-handler
				 * switch it back to the normal proxy-event-handler */
				fdevent_event_del(srv->ev, sess->proxy_con->sock);
				fdevent_unregister(srv->ev, sess->proxy_con->sock);

				fdevent_register(srv->ev, sess->proxy_con->sock, proxy_handle_fdevent, sess);
				fdevent_event_add(srv->ev, sess->proxy_con->sock, FDEVENT_IN);
			}
		}


		switch (proxy_state_engine(srv, con, p, sess)) {
		case HANDLER_WAIT_FOR_EVENT:
			return HANDLER_WAIT_FOR_EVENT;
		case HANDLER_COMEBACK:
#if 0
			TRACE("%s", "setting PROXY_STATE_FINISHED");
			sess->state = PROXY_STATE_FINISHED;
#endif
			/* request finished do redirect. */
			if (sess->do_internal_redirect) {
				/* recycle proxy connection. */
				proxy_recycle_backend_connection(srv, p, sess);
				return HANDLER_COMEBACK;
			}
			/* restart the connection to the backend */
			if (p->conf.debug) TRACE("%s", "write failed, restarting request");
			proxy_remove_backend_connection(srv, sess);
			break;
		case HANDLER_WAIT_FOR_FD:
			return HANDLER_WAIT_FOR_FD;
		case HANDLER_GO_ON:
			return HANDLER_GO_ON;
		default:
			TRACE("state: %d (error)", sess->state);
			proxy_remove_backend_connection(srv, sess);
			return HANDLER_ERROR;
		}
	}

	/* should not be reached */
	return HANDLER_ERROR;
}

CONNECTION_FUNC(mod_proxy_send_request_content) {
	plugin_data *p = p_d;

	if (p->id != con->mode) return HANDLER_GO_ON;

	/* read all the content before we start our backend */
	if (!con->recv->is_closed) {
		return HANDLER_GO_ON;
	}

	/* copy the chunks to our queue and call the state-engine to send it out */
	return mod_proxy_core_start_backend(srv, con, p_d);
}

/**
 * cleanup dead connections once a second
 *
 * the idling event-handler can't cleanup connections itself and has to wait until the
 * trigger cleans up
 */
static int mod_proxy_wakeup_connections(server *srv, plugin_data *p, plugin_config *p_conf) {
	size_t i, j;
	proxy_request *req;
	int total_conns_available = 0, backends_available = 0;
	int woken_up;

	for (i = 0; i < p_conf->backends->used; i++) {
		proxy_backend *backend = p_conf->backends->ptr[i];
		proxy_connection_pool *pool = backend->pool;
		proxy_address_pool *address_pool = backend->address_pool;
		unsigned int conns_available = 0, addrs_disabled = 0;
		proxy_session *sess = NULL;

		conns_available = (pool->max_size - pool->used);
		for (j = 0; j < pool->used; ) {
			proxy_connection *proxy_con = pool->ptr[j];

			/* remove-con is removing the current con and moves the good connections to the left
			 * no need to increment i */
			switch (proxy_con->state) {
			case PROXY_CONNECTION_STATE_CLOSED:
				proxy_connection_pool_remove_connection(backend->pool, proxy_con);
				COUNTER_SET(backend->pool_size, backend->pool->used);

				fdevent_event_del(srv->ev, proxy_con->sock);
				fdevent_unregister(srv->ev, proxy_con->sock);

				proxy_connection_free(proxy_con);

				conns_available++;
				break;
			case PROXY_CONNECTION_STATE_CONNECTING:
				/* how long are we in this state already ?
				 * 
				 * if the connect() failed with EINPROGRESS we have to wait until we get a POLLOUT
				 * if for some reason we don't get that in 4-5 seconds we have to kill the attempt
				 *
				 *  */

				if (srv->cur_ts - proxy_con->state_ts < 5) {
					j++;
					break;
				}

				TRACE("connect(%s) timed out, closing backend connection",
						BUF_STR(proxy_con->address->name));

				/** timed out
				 *
				 * we have to tell the proxy connection to try to connect another backend
				 */

				proxy_con->state = PROXY_CONNECTION_STATE_CLOSED;

				sess = proxy_con->proxy_sess;
				joblist_append(srv, sess->remote_con);

				j++;
				break;
			case PROXY_CONNECTION_STATE_IDLE:
				conns_available++;
			default:
				j++;
			}
		}

		/* active the disabled addresses again */
		for (j = 0; j < address_pool->used; j++) {
			proxy_address *address = address_pool->ptr[j];

			if (address->state != PROXY_ADDRESS_STATE_DISABLED) continue;

			if (srv->cur_ts > address->disabled_until) {
				address->disabled_until = 0;
				address->state = PROXY_ADDRESS_STATE_ACTIVE;
			} else {
				addrs_disabled++;
			}
		}

		total_conns_available += conns_available;
		backend->disabled_addresses = addrs_disabled;
		/* update backend's state */
		if (conns_available == 0) {
			/* connection pool is full and there are no idle connections. */
			backend->state = PROXY_BACKEND_STATE_FULL;
		} else if (addrs_disabled == address_pool->used) {
			/* all addresses are disabled. */
			backend->state = PROXY_BACKEND_STATE_DISABLED;
		} else {
			backend->state = PROXY_BACKEND_STATE_ACTIVE;
			backends_available++;
		}
	}

	/* no backends available can't wake any connections. */
	if (backends_available == 0) {
		/* all backends are full or disabled. */
		return 0;
	}

	/* wake up the connections from the backlog */
	for (woken_up = 0; woken_up < total_conns_available && (req = proxy_backlog_shift(p_conf->backlog)); woken_up++) {
		connection *con = req->con;

		if (p_conf->debug) TRACE("wakeup a connection from backlog: con=%d", con->sock->fd);
		joblist_append(srv, con);

		COUNTER_DEC(p->conf.backlog_size);
		proxy_request_free(req);
	}

	return woken_up;
}

TRIGGER_FUNC(mod_proxy_trigger) {
	plugin_data *p = p_d;
	size_t i;

	/**
	 * walk through all the different address pools and check if they are still alive
	 *
	 * in case of connect() = -1 -> EINPROGRESS we might have trigger the state-engine
	 */
	for (i = 0; i < srv->config_context->used; i++) {
		mod_proxy_wakeup_connections(srv, p, p->config_storage[i]);
	}

	return HANDLER_GO_ON;
}

LI_EXPORT int mod_proxy_core_plugin_init(plugin *p) {
	p->version      = LIGHTTPD_VERSION_ID;
	p->name         = buffer_init_string("mod_proxy_core");

	p->init         = mod_proxy_core_init;
	p->cleanup      = mod_proxy_core_free;
	p->set_defaults = mod_proxy_core_set_defaults;
	p->handle_physical         = mod_proxy_core_match_url;
	p->handle_start_backend = mod_proxy_core_match_local_file;
	p->handle_send_request_content = mod_proxy_send_request_content;
	p->handle_read_response_content = mod_proxy_core_start_backend;
	p->connection_reset        = mod_proxy_connection_close_callback;
	p->handle_connection_close = mod_proxy_connection_close_callback;
	p->handle_trigger          = mod_proxy_trigger;

	p->data         = NULL;

	return 0;
}
