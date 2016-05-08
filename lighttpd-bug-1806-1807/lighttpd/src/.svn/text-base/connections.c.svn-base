#include <sys/stat.h>

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>

#include "settings.h"

#include "server.h"
#include "connections.h"
#include "fdevent.h"
#include "log.h"

#include "request.h"
#include "response.h"
#include "network.h"
#include "stat_cache.h"
#include "joblist.h"

#include "plugin.h"

#include "inet_ntop_cache.h"
#include "configfile.h"
#include "http_req.h"

#ifdef USE_OPENSSL
# include <openssl/ssl.h>
# include <openssl/err.h>
#endif

#ifdef HAVE_SYS_FILIO_H
# include <sys/filio.h>
#endif

#include "sys-socket.h"
#include "sys-files.h"

typedef struct {
	PLUGIN_DATA;
} plugin_data;

static connection *connections_get_new_connection(server *srv) {
	connections *conns = srv->conns;
	size_t i;

	if (conns->size == 0) {
		conns->size = 128;
		conns->ptr = NULL;
		conns->ptr = malloc(sizeof(*conns->ptr) * conns->size);
		for (i = 0; i < conns->size; i++) {
			conns->ptr[i] = connection_init(srv);
		}
	} else if (conns->size == conns->used) {
		conns->size += 128;
		conns->ptr = realloc(conns->ptr, sizeof(*conns->ptr) * conns->size);

		for (i = conns->used; i < conns->size; i++) {
			conns->ptr[i] = connection_init(srv);
		}
	}

	connection_reset(srv, conns->ptr[conns->used]);

	conns->ptr[conns->used]->ndx = conns->used;
	return conns->ptr[conns->used++];
}

static int connection_del(server *srv, connection *con) {
	size_t i;
	connections *conns = srv->conns;
	connection *temp;

	if (con == NULL) return -1;

	if (-1 == con->ndx) return -1;

	i = con->ndx;

	/* not last element */

	if (i != conns->used - 1) {
		temp = conns->ptr[i];
		conns->ptr[i] = conns->ptr[conns->used - 1];
		conns->ptr[conns->used - 1] = temp;

		conns->ptr[i]->ndx = i;
		conns->ptr[conns->used - 1]->ndx = -1;
	}

	conns->used--;

	con->ndx = -1;

	return 0;
}

int connection_close(server *srv, connection *con) {
#ifdef USE_OPENSSL
	/* should be in iosocket_close() */

	if (con->sock->ssl) {
		switch (SSL_shutdown(con->sock->ssl)) {
		case 1:
			/* done */
			break;
		case 0:
			/* wait for fd-event
			 *
			 * FIXME: wait for fdevent and call SSL_shutdown again
			 *
			 */

			break;
		default:
			ERROR("SSL_shutdown failed: %s", ERR_error_string(ERR_get_error(), NULL));
		}

		SSL_free(con->sock->ssl);
		con->sock->ssl = NULL;
	}
#endif

	fdevent_event_del(srv->ev, con->sock);
	fdevent_unregister(srv->ev, con->sock);

	if (closesocket(con->sock->fd)) {
		log_error_write(srv, __FILE__, __LINE__, "sds",
				"(warning) close:", con->sock->fd, strerror(errno));
	}

	connection_del(srv, con);
	connection_set_state(srv, con, CON_STATE_CONNECT);

	return 0;
}

#if 0
static void dump_packet(const unsigned char *data, size_t len) {
	size_t i, j;

	if (len == 0) return;

	for (i = 0; i < len; i++) {
		if (i % 16 == 0) fprintf(stderr, "  ");

		fprintf(stderr, "%02x ", data[i]);

		if ((i + 1) % 16 == 0) {
			fprintf(stderr, "  ");
			for (j = 0; j <= i % 16; j++) {
				unsigned char c;

				if (i-15+j >= len) break;

				c = data[i-15+j];

				fprintf(stderr, "%c", c > 32 && c < 128 ? c : '.');
			}

			fprintf(stderr, "\n");
		}
	}

	if (len % 16 != 0) {
		for (j = i % 16; j < 16; j++) {
			fprintf(stderr, "   ");
		}

		fprintf(stderr, "  ");
		for (j = i & ~0xf; j < len; j++) {
			unsigned char c;

			c = data[j];
			fprintf(stderr, "%c", c > 32 && c < 128 ? c : '.');
		}
		fprintf(stderr, "\n");
	}
}
#endif

static int connection_handle_response_header(server *srv, connection *con) {
	int no_response_body = 0;

	if (con->mode == DIRECT) {
		/* static files */
		switch(con->request.http_method) {
		case HTTP_METHOD_GET:
		case HTTP_METHOD_POST:
		case HTTP_METHOD_HEAD:
			/* webdav */
		case HTTP_METHOD_PUT:
		case HTTP_METHOD_MKCOL:
		case HTTP_METHOD_DELETE:
		case HTTP_METHOD_COPY:
		case HTTP_METHOD_MOVE:
		case HTTP_METHOD_PROPFIND:
		case HTTP_METHOD_PROPPATCH:
		case HTTP_METHOD_LOCK:
		case HTTP_METHOD_UNLOCK:
			break;
		case HTTP_METHOD_OPTIONS:
			/*
			 * 400 is coming from the request-parser BEFORE uri.path is set
			 * 403 is from the response handler when noone else catched it
			 *
			 * */
			if (con->uri.path->used &&
			    con->uri.path->ptr[0] != '*') {
				response_header_insert(srv, con, CONST_STR_LEN("Allow"), CONST_STR_LEN("OPTIONS, GET, HEAD, POST"));

				/* trash the content */
				no_response_body = 1;

				con->http_status = 200;
			}
			break;
		default:
			switch(con->http_status) {
			case 400: /* bad request */
			case 414: /* overload request header */
			case 505: /* unknown protocol */
			case 207: /* this was webdav */
				break;
			default:
				con->http_status = 501;
				break;
			}
			break;
		}
	}

	if (con->http_status == 0) {
		TRACE("%s", "no status, setting 403");
		con->http_status = 403;
	}

	switch(con->http_status) {
	case 400: /* class: header + custom body */
	case 401:
	case 403:
	case 404:
	case 408:
	case 409:
	case 410:
	case 411:
	case 416:
	case 423:
	case 500:
	case 501:
	case 502:
	case 503:
	case 504:
	case 505:
	case 509:
		if (con->mode != DIRECT) break;

		con->send->is_closed = 0;

		buffer_reset(con->physical.path);

		/* try to send static errorfile */
		if (!buffer_is_empty(con->conf.errorfile_prefix)) {
			stat_cache_entry *sce = NULL;

			buffer_copy_string_buffer(con->physical.path, con->conf.errorfile_prefix);
			buffer_append_string(con->physical.path, get_http_status_body_name(con->http_status));

			if (HANDLER_ERROR != stat_cache_get_entry(srv, con, con->physical.path, &sce)) {
				con->send->is_closed = 1;

				chunkqueue_append_file(con->send, con->physical.path, 0, sce->st.st_size);
				response_header_overwrite(srv, con, CONST_STR_LEN("Content-Type"), CONST_BUF_LEN(sce->content_type));
			}
		}

		if (!con->send->is_closed) {
			buffer *b;

			buffer_reset(con->physical.path);

			con->send->is_closed = 1;
			b = chunkqueue_get_append_buffer(con->send);

			/* build default error-page */
			buffer_copy_string(b,
					   "<?xml version=\"1.0\" encoding=\"iso-8859-1\"?>\n"
					   "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Transitional//EN\"\n"
					   "         \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd\">\n"
					   "<html xmlns=\"http://www.w3.org/1999/xhtml\" xml:lang=\"en\" lang=\"en\">\n"
					   " <head>\n"
					   "  <title>");
			buffer_append_long(b, con->http_status);
			buffer_append_string(b, " - ");
			buffer_append_string(b, get_http_status_name(con->http_status));

			buffer_append_string(b,
					     "</title>\n"
					     " </head>\n"
					     " <body>\n"
					     "  <h1>");
			buffer_append_long(b, con->http_status);
			buffer_append_string(b, " - ");
			buffer_append_string(b, get_http_status_name(con->http_status));

			buffer_append_string(b,"</h1>\n"
					     " </body>\n"
					     "</html>\n"
					     );

			con->send->bytes_in += b->used - 1;

			response_header_overwrite(srv, con, CONST_STR_LEN("Content-Type"), CONST_STR_LEN("text/html"));
		}
		/* fall through */
	case 207:
	case 200: /* class: header + body */
	case 201:
	case 301:
	case 302:
	case 303:
		break;

	case 206: /* write_queue is already prepared */
		break;
	case 205: /* class: header only */
	case 304:
	default:
		no_response_body = 1;
		break;
	}

	if (no_response_body) {
		/* disable chunked encoding again as we have no body */
		con->response.transfer_encoding &= ~HTTP_TRANSFER_ENCODING_CHUNKED;
		chunkqueue_reset(con->send);

		con->send->is_closed = 1;
	}

	return 0;
}

connection *connection_init(server *srv) {
	connection *con;

	UNUSED(srv);

	con = calloc(1, sizeof(*con));

	con->sock = iosocket_init();
	con->ndx = -1;
	con->bytes_written = 0;
	con->bytes_read = 0;
	con->bytes_header = 0;
	con->loops_per_request = 0;

#define CLEAN(x) \
	con->x = buffer_init();

	CLEAN(request.uri);
	CLEAN(request.request);
	CLEAN(request.pathinfo);
	CLEAN(request.http_host);

	CLEAN(request.orig_uri);

	CLEAN(uri.scheme);
	CLEAN(uri.authority);
	CLEAN(uri.path);
	CLEAN(uri.path_raw);
	CLEAN(uri.query);

	CLEAN(physical.doc_root);
	CLEAN(physical.path);
	CLEAN(physical.basedir);
	CLEAN(physical.rel_path);
	CLEAN(physical.etag);
	CLEAN(parse_request);

	CLEAN(authed_user);
	CLEAN(server_name);
	CLEAN(error_handler);
	CLEAN(dst_addr_buf);

#undef CLEAN
	con->send_filters = filter_chain_init();
	/* send is the chunkqueue of the first send filter */
	con->send = con->send_filters->first->cq;
	con->recv = chunkqueue_init();
	chunkqueue_set_tempdirs(con->recv, srv->srvconf.upload_tempdirs);

	con->send_raw = chunkqueue_init();
	con->recv_raw = chunkqueue_init();

	con->request.headers      = array_init();
	con->response.headers     = array_init();
	con->environment     = array_init();

	con->http_req = http_request_init();

	/* init plugin specific connection structures */

	con->plugin_ctx = calloc(1, (srv->plugins.used + 1) * sizeof(void *));

	con->cond_cache = calloc(srv->config_context->used, sizeof(cond_cache_t));
	config_setup_connection(srv, con);

	return con;
}

void connections_free(server *srv) {
	connections *conns = srv->conns;
	size_t i;

	for (i = 0; i < conns->size; i++) {
		connection *con = conns->ptr[i];

		connection_reset(srv, con);
		iosocket_free(con->sock);

		filter_chain_free(con->send_filters);
		con->send = NULL;
		chunkqueue_free(con->recv);
		chunkqueue_free(con->send_raw);
		chunkqueue_free(con->recv_raw);
		array_free(con->request.headers);
		array_free(con->response.headers);
		array_free(con->environment);

#define CLEAN(x) \
	buffer_free(con->x);

		CLEAN(request.uri);
		CLEAN(request.request);
		CLEAN(request.pathinfo);
		CLEAN(request.http_host);

		CLEAN(request.orig_uri);

		CLEAN(uri.scheme);
		CLEAN(uri.authority);
		CLEAN(uri.path);
		CLEAN(uri.path_raw);
		CLEAN(uri.query);

		CLEAN(physical.doc_root);
		CLEAN(physical.path);
		CLEAN(physical.basedir);
		CLEAN(physical.etag);
		CLEAN(physical.rel_path);
		CLEAN(parse_request);

		CLEAN(authed_user);
		CLEAN(server_name);
		CLEAN(error_handler);
		CLEAN(dst_addr_buf);
#undef CLEAN
		free(con->plugin_ctx);
		free(con->cond_cache);

		http_request_free(con->http_req);

		free(con);
	}

	free(conns->ptr);
}


int connection_reset(server *srv, connection *con) {
	size_t i;

	plugins_call_connection_reset(srv, con);

	con->is_readable = 1;
	con->is_writable = 1;
	con->http_status = 0;
	con->file_started = 0;
	con->got_response = 0;

	con->bytes_written = 0;
	con->bytes_written_cur_second = 0;
	con->bytes_read = 0;
	con->bytes_header = 0;
	con->loops_per_request = 0;

	con->request.http_method = HTTP_METHOD_UNSET;
	con->request.http_version = HTTP_VERSION_UNSET;
	con->request.content_length = -1;

	con->response.keep_alive = 0;
	con->response.content_length = -1;
	con->response.transfer_encoding = 0;

	con->mode = DIRECT;

#define CLEAN(x) \
	if (con->x) buffer_reset(con->x);

	CLEAN(request.uri);
	CLEAN(request.pathinfo);
	CLEAN(request.request);
	CLEAN(request.http_host);

	CLEAN(request.orig_uri);

	CLEAN(uri.scheme);
	CLEAN(uri.authority);
	CLEAN(uri.path);
	CLEAN(uri.path_raw);
	CLEAN(uri.query);

	CLEAN(physical.doc_root);
	CLEAN(physical.path);
	CLEAN(physical.basedir);
	CLEAN(physical.rel_path);
	CLEAN(physical.etag);

	CLEAN(parse_request);

	CLEAN(authed_user);
	CLEAN(server_name);
	CLEAN(error_handler);
#undef CLEAN

#define CLEAN(x) \
	if (con->x) con->x->used = 0;

#undef CLEAN

	array_reset(con->request.headers);
	array_reset(con->response.headers);
	array_reset(con->environment);

	filter_chain_reset(con->send_filters);
	con->send = con->send_filters->first->cq;
	chunkqueue_reset(con->recv);
	chunkqueue_reset(con->send_raw);

	http_request_reset(con->http_req);

	/* the plugins should cleanup themself */
	for (i = 0; i < srv->plugins.used; i++) {
		plugin *p = ((plugin **)(srv->plugins.ptr))[i];
		plugin_data *pd = p->data;

		if (!pd) continue;

		if (con->plugin_ctx[pd->id] != NULL) {
			log_error_write(srv, __FILE__, __LINE__, "sb", "missing cleanup in", p->name);
		}

		con->plugin_ctx[pd->id] = NULL;
	}

	config_cond_cache_reset(srv, con);

	con->header_len = 0;
	con->in_error_handler = 0;

	config_setup_connection(srv, con);

	return 0;
}

/**
 * handle all header and content read
 *
 * we get called by the state-engine and by the fdevent-handler
 */
handler_t connection_handle_read_request_header(server *srv, connection *con)  {
	/* let's see if we need more data later */
	fdevent_event_del(srv->ev, con->sock);

	con->read_idle_ts = srv->cur_ts;  /* start a read-call() */

	/* read from the network */
	switch (network_read(srv, con, con->sock, con->recv_raw)) {
	case NETWORK_STATUS_SUCCESS:
		/* we read everything from the socket, do we have a full header ? */
		break;
	case NETWORK_STATUS_WAIT_FOR_EVENT:
		fdevent_event_add(srv->ev, con->sock, FDEVENT_IN);
		return HANDLER_WAIT_FOR_EVENT;
	case NETWORK_STATUS_CONNECTION_CLOSE:
		/* the connection went away before we got something back */
		connection_set_state(srv, con, CON_STATE_CLOSE);

		return HANDLER_GO_ON;
	default:
		ERROR("++ %s", "oops, something went wrong while reading");
		return HANDLER_ERROR;
	}

	switch (http_request_parse_cq(con->recv_raw, con->http_req)) {
	case PARSE_ERROR:
		con->http_status = 400; /* the header is broken */
		con->send->is_closed = 1; /* we have nothing to send */

		chunkqueue_remove_finished_chunks(con->recv_raw);

		return HANDLER_FINISHED;
	case PARSE_NEED_MORE:
		/* we need more */
		fdevent_event_add(srv->ev, con->sock, FDEVENT_IN);

		return HANDLER_WAIT_FOR_EVENT;
	case PARSE_SUCCESS:
		chunkqueue_remove_finished_chunks(con->recv_raw);
		break;
	default:
		chunkqueue_remove_finished_chunks(con->recv_raw);
		TRACE("%s", "(error)");
		return HANDLER_ERROR;
	}

	return HANDLER_GO_ON;
}

/* decode the HTTP/1.1 chunk encoding */

handler_t connection_handle_read_request_content(server *srv, connection *con)  {
	/* read data from the socket and push it to the backend */

	chunkqueue *in = con->recv_raw;
	chunkqueue *out = con->recv; /* the pure content */
	chunk *c;

	/* let's see if we need more data later */
	fdevent_event_del(srv->ev, con->sock);

	con->read_idle_ts = srv->cur_ts;  /* start a read-call() */

	if (con->request.content_length == -1) return HANDLER_GO_ON;

	/* if the content was short enough, it might be read already */
	if (in->first &&
	    chunkqueue_length(in) - in->first->offset > 0) {

		/*
		 * looks like the request-header also had some content for us
		 */

	} else {
		/* read from the network */
		switch (network_read(srv, con, con->sock, in)) {
		case NETWORK_STATUS_SUCCESS:
			/* we have data */
			break;
		case NETWORK_STATUS_WAIT_FOR_EVENT:
			fdevent_event_add(srv->ev, con->sock, FDEVENT_IN);
			return HANDLER_WAIT_FOR_EVENT;
		case NETWORK_STATUS_CONNECTION_CLOSE:
			/* the connection went away before we got something back */
			connection_set_state(srv, con, CON_STATE_CLOSE);

			return HANDLER_GO_ON;
		default:
			ERROR("++ %s", "oops, something went wrong while reading");
			return HANDLER_ERROR;
		}
	}

	/* how much data do we want to extract ? */
	for (c = in->first; c && (out->bytes_in != con->request.content_length); c = c->next) {
		off_t weWant, weHave, toRead;

		weWant = con->request.content_length - out->bytes_in;

		if (c->mem->used == 0) continue;

		weHave = c->mem->used - c->offset - 1;

		toRead = weHave > weWant ? weWant : weHave;

		/* the new way, copy everything into a chunkqueue whcih might use tempfiles */
		if (con->request.content_length > 64 * 1024) {
			chunk *dst_c = NULL;
			/* copy everything to max 1Mb sized tempfiles */

			/*
			 * if the last chunk is
			 * - smaller than 1Mb (size < 1Mb)
			 * - not read yet (offset == 0)
			 * -> append to it
			 * otherwise
			 * -> create a new chunk
			 *
			 * */

			if (out->last &&
			    out->last->type == FILE_CHUNK &&
			    out->last->file.is_temp &&
			    out->last->offset == 0) {
				/* ok, take the last chunk for our job */

		 		if (out->last->file.length < 1 * 1024 * 1024) {
					dst_c = out->last;

					if (dst_c->file.fd == -1) {
						/* this should not happen as we cache the fd, but you never know */
						dst_c->file.fd = open(dst_c->file.name->ptr, O_WRONLY | O_APPEND);
					}
				} else {
					/* the chunk is too large now, close it */
					dst_c = out->last;

					if (dst_c->file.fd != -1) {
						close(dst_c->file.fd);
						dst_c->file.fd = -1;
					}
					dst_c = chunkqueue_get_append_tempfile(out);
				}
			} else {
				dst_c = chunkqueue_get_append_tempfile(out);
			}

			/* we have a chunk, let's write to it */

			if (dst_c->file.fd == -1) {
				/* we don't have file to write to,
				 * EACCES might be one reason.
				 *
				 * Instead of sending 500 we send 413 and say the request is too large
				 *  */

				log_error_write(srv, __FILE__, __LINE__, "sbs",
						"denying upload as opening to temp-file for upload failed:",
						dst_c->file.name, strerror(errno));

				con->http_status = 413; /* Request-Entity too large */
				con->keep_alive = 0;
				return HANDLER_FINISHED;
			}

			if (toRead != write(dst_c->file.fd, c->mem->ptr + c->offset, toRead)) {
				/* write failed for some reason ... disk full ? */
				log_error_write(srv, __FILE__, __LINE__, "sbs",
						"denying upload as writing to file failed:",
						dst_c->file.name, strerror(errno));

				con->http_status = 413; /* Request-Entity too large */
				con->keep_alive = 0;

				close(dst_c->file.fd);
				dst_c->file.fd = -1;

				return HANDLER_FINISHED;
			}

			dst_c->file.length += toRead;

			if (out->bytes_in + toRead == con->request.content_length) {
				/* we read everything, close the chunk */
				close(dst_c->file.fd);
				dst_c->file.fd = -1;
			}
		} else {
			buffer *b;

			b = chunkqueue_get_append_buffer(out);
			buffer_copy_string_len(b, c->mem->ptr + c->offset, toRead);
		}

		c->offset += toRead;

		out->bytes_in += toRead;
		in->bytes_out += toRead;
	}

	if (out->bytes_in < con->request.content_length) {
		/* we have to read more content */
		fdevent_event_add(srv->ev, con->sock, FDEVENT_IN);
	}

	return HANDLER_GO_ON;
}

handler_t connection_handle_fdevent(void *s, void *context, int revents) {
	server     *srv = (server *)s;
	connection *con = context;

	if (revents & FDEVENT_IN) {
		switch (con->state) {
		case CON_STATE_READ_REQUEST_HEADER:
		case CON_STATE_READ_REQUEST_CONTENT:
			joblist_append(srv, con);
			break;
		case CON_STATE_CLOSE: /* ignore the even, we will clean-up soon */
			break;
		case CON_STATE_ERROR:
			ERROR("we are in (CON_STATE_ERROR), but still get a FDEVENT_IN, removing event from fd = %d, %04x for (%s)",
					con->sock->fd,
					revents,
					BUF_STR(con->uri.path));

			fdevent_event_del(srv->ev, con->sock);

			joblist_append(srv, con);
			break;
		default:
			ERROR("I thought only READ_REQUEST_* need fdevent-in: %d, fd = %d, %04x for (%s)",
					con->state,
					con->sock->fd,
					revents,
					BUF_STR(con->uri.path));
			break;
		}
	}

	if (revents & FDEVENT_OUT) {
		switch (con->state) {
		case CON_STATE_WRITE_RESPONSE_HEADER:
		case CON_STATE_WRITE_RESPONSE_CONTENT:
			joblist_append(srv, con);
			break;
		default:
			ERROR("%s", "I thought only WRITE_RESPONSE_* need fdevent-out");
			break;
		}
	}

	if (revents & ~(FDEVENT_IN | FDEVENT_OUT)) {
		/* looks like an error */

		connection_set_state(srv, con, CON_STATE_ERROR);
		joblist_append(srv, con);
	}


	return HANDLER_FINISHED;
}


connection *connection_accept(server *srv, server_socket *srv_socket) {
	/* accept everything */

	/* search an empty place */
	int cnt;
	sock_addr cnt_addr;
	socklen_t cnt_len;
	/* accept it and register the fd */

	cnt_len = sizeof(cnt_addr);

	if (-1 == (cnt = accept(srv_socket->sock->fd, (struct sockaddr *) &cnt_addr, &cnt_len))) {
#ifdef _WIN32
		errno = WSAGetLastError();
#endif
		switch (errno) {
		case EAGAIN:
#if EWOULDBLOCK != EAGAIN
		case EWOULDBLOCK:
#endif
		case EINTR:
			/* we were stopped _before_ we had a connection */
		case ECONNABORTED: /* this is a FreeBSD thingy */
			/* we were stopped _after_ we had a connection */
			break;

		case EMFILE: /* we are out of FDs */
			server_out_of_fds(srv, NULL);
			break;
		default:
			ERROR("accept failed on fd=%d with error: (%d) %s", srv_socket->sock->fd, errno, strerror(errno));
			break;
		}
		return NULL;
	} else {
		connection *con;

		/* ok, we have the connection, register it */
#if 0
		log_error_write(srv, __FILE__, __LINE__, "sd",
				"appected()", cnt);
#endif
		srv->con_opened++;

		con = connections_get_new_connection(srv);
		con->sock->fd = cnt;
		con->sock->fde_ndx = -1;
#if 0
		gettimeofday(&(con->start_tv), NULL);
#endif
		fdevent_register(srv->ev, con->sock, connection_handle_fdevent, con);

		connection_set_state(srv, con, CON_STATE_REQUEST_START);

		con->connection_start = srv->cur_ts;
		con->dst_addr = cnt_addr;
		buffer_copy_string(con->dst_addr_buf, inet_ntop_cache_get_ip(srv, &(con->dst_addr)));
		con->srv_socket = srv_socket;

		if (-1 == (fdevent_fcntl_set(srv->ev, con->sock))) {
			log_error_write(srv, __FILE__, __LINE__, "ss", "fcntl failed: ", strerror(errno));
			connection_close(srv, con);
			return NULL;
		}

#ifdef USE_OPENSSL
		/* connect FD to SSL */
		if (srv_socket->is_ssl) {
			if (NULL == (con->sock->ssl = SSL_new(srv_socket->ssl_ctx))) {
				log_error_write(srv, __FILE__, __LINE__, "ss", "SSL:",
						ERR_error_string(ERR_get_error(), NULL));
				connection_close(srv, con);
				return NULL;
			}

			SSL_set_accept_state(con->sock->ssl);
			con->conf.is_ssl=1;

			if (1 != (SSL_set_fd(con->sock->ssl, cnt))) {
				log_error_write(srv, __FILE__, __LINE__, "ss", "SSL:",
						ERR_error_string(ERR_get_error(), NULL));
				connection_close(srv, con);
				return NULL;
			}
		}
#endif
		return con;
	}
}

int connection_state_machine(server *srv, connection *con) {
	int done = 0, r;
#ifdef USE_OPENSSL
	server_socket *srv_sock = con->srv_socket;
#endif

	if (srv->srvconf.log_state_handling) {
		log_error_write(srv, __FILE__, __LINE__, "sds",
				"state at start",
				con->sock->fd,
				connection_get_state(con->state));
	}

	while (done == 0) {
		size_t ostate = con->state;
		int b;

		switch (con->state) {
		case CON_STATE_CONNECT:
			if (srv->srvconf.log_state_handling) {
				log_error_write(srv, __FILE__, __LINE__, "sds",
						"state for fd", con->sock->fd, connection_get_state(con->state));
			}

			chunkqueue_reset(con->recv_raw); /* this is a new connection, trash the pipeline */

			con->request_count = 0;

			break;
		case CON_STATE_REQUEST_START:
			/* init the request handling */
			if (srv->srvconf.log_state_handling) {
				log_error_write(srv, __FILE__, __LINE__, "sds",
						"state for fd", con->sock->fd, connection_get_state(con->state));
			}

			con->request_start = srv->cur_ts; /* start of the request */
			con->read_idle_ts = srv->cur_ts;  /* start a read-call() */

			con->request_count++;             /* max-keepalive requests */
			con->loops_per_request = 0;       /* infinite loops */

			/* if the content was short enough, it might have a header already in the pipe */
			if (con->recv_raw->first &&
			    chunkqueue_length(con->recv_raw) - con->recv_raw->first->offset > 0) {
				/* pipelining */

				switch (http_request_parse_cq(con->recv_raw, con->http_req)) {
				case PARSE_ERROR:
					con->http_status = 400; /* the header is broken */
					con->keep_alive = 0;

					chunkqueue_remove_finished_chunks(con->recv_raw);

					connection_set_state(srv, con, CON_STATE_HANDLE_RESPONSE_HEADER);
					break;
				case PARSE_NEED_MORE:
					/* the read() call is on the way */
					connection_set_state(srv, con, CON_STATE_READ_REQUEST_HEADER);
					break;
				case PARSE_SUCCESS:
					/* pipelining worked, validate the header */
					chunkqueue_remove_finished_chunks(con->recv_raw);

					connection_set_state(srv, con, CON_STATE_VALIDATE_REQUEST_HEADER);
					break;
				default:
					chunkqueue_remove_finished_chunks(con->recv_raw);
					TRACE("%s", "(error)");
					return HANDLER_ERROR;
				}
			} else {
				connection_set_state(srv, con, CON_STATE_READ_REQUEST_HEADER);
			}

			break;
		case CON_STATE_READ_REQUEST_HEADER:
			/* read us much data as needed into the recv_raw-cq for a valid header */
			if (srv->srvconf.log_state_handling) {
				TRACE("state for fd=%d: %s", con->sock->fd, connection_get_state(con->state));
			}

			switch (connection_handle_read_request_header(srv, con)) {
			case HANDLER_GO_ON: /** we have a full header, or connection close */
				if (con->state == CON_STATE_READ_REQUEST_HEADER) {
					connection_set_state(srv, con, CON_STATE_VALIDATE_REQUEST_HEADER);
				}
				break;
			case HANDLER_FINISHED: /** parsing failed, ->http_status is set */
				connection_set_state(srv, con, CON_STATE_WRITE_RESPONSE_HEADER);
				break;
			case HANDLER_WAIT_FOR_EVENT:
				return HANDLER_WAIT_FOR_EVENT;
			case HANDLER_ERROR:
				TRACE("%s", "(error)");
				connection_set_state(srv, con, CON_STATE_ERROR);
				break;
			default:
				TRACE("%s", "(error)");
				connection_set_state(srv, con, CON_STATE_ERROR);
				break;
			}
			break;
		case CON_STATE_VALIDATE_REQUEST_HEADER:
			/* we have the full header, parse it */

			http_request_parse(srv, con, con->http_req);

			if (con->http_status != 0) {
				con->keep_alive = 0;
				con->send->is_closed = 1; /* there is no content */

				connection_set_state(srv, con, CON_STATE_HANDLE_RESPONSE_HEADER);
			} else if (array_get_element(con->request.headers, CONST_STR_LEN("Expect"))) {
				/* write */
				con->http_status = 100;
				con->send->is_closed = 1;

				connection_set_state(srv, con, CON_STATE_WRITE_RESPONSE_HEADER);
			} else {
				/* parsing the request went fine
				 * let's find a handler for this request */
				connection_set_state(srv, con, CON_STATE_HANDLE_REQUEST_HEADER);
			}

			break;
		case CON_STATE_HANDLE_REQUEST_HEADER:
			/* the request header is parsed,
			 * find someone who wants to handle this request */

			if (srv->srvconf.log_state_handling) {
				log_error_write(srv, __FILE__, __LINE__, "sds",
						"state for fd", con->sock->fd, connection_get_state(con->state));
			}

			switch (r = handle_get_backend(srv, con)) {
			case HANDLER_GO_ON:
			case HANDLER_FINISHED:
				break;
			case HANDLER_WAIT_FOR_FD:
				connection_set_state(srv, con, CON_STATE_HANDLE_REQUEST_HEADER);

				server_out_of_fds(srv, con);

				break;
			case HANDLER_COMEBACK:
				done = -1;
			case HANDLER_WAIT_FOR_EVENT:
				/* come back here */
				connection_set_state(srv, con, CON_STATE_HANDLE_REQUEST_HEADER);

				break;
			case HANDLER_ERROR:
				/* something went wrong */
				TRACE("%s", "(error)");
				connection_set_state(srv, con, CON_STATE_ERROR);
				break;
			default:
				TRACE("handle_get_backend returned %d on fd %d", r, con->sock->fd);
				break;
			}

			if (r != HANDLER_FINISHED && r != HANDLER_GO_ON) break;

			if (con->http_status == 404 ||
			    con->http_status == 403) {
				/* 404 error-handler */

				if (con->in_error_handler == 0 &&
				    (!buffer_is_empty(con->conf.error_handler) ||
				     !buffer_is_empty(con->error_handler))) {
					/* call error-handler */

					con->error_handler_saved_status = con->http_status;
					con->http_status = 0;

					if (buffer_is_empty(con->error_handler)) {
						buffer_copy_string_buffer(con->request.uri, con->conf.error_handler);
					} else {
						buffer_copy_string_buffer(con->request.uri, con->error_handler);
					}
					buffer_reset(con->physical.path);

					con->in_error_handler = 1;

					connection_set_state(srv, con, CON_STATE_HANDLE_REQUEST_HEADER);

					/* need to reset condition cache since request uri changed. */
					config_cond_cache_reset(srv, con);

					done = -1;
					break;
				} else if (con->in_error_handler) {
					/* error-handler is a 404 */

					/* continue as normal, status is the same */
					log_error_write(srv, __FILE__, __LINE__, "sb",
							"Warning: Either the error-handler returned status 404 or the error-handler itself was not found:", con->request.uri);
					log_error_write(srv, __FILE__, __LINE__, "sd",
							"returning the original status", con->error_handler_saved_status);
					log_error_write(srv, __FILE__, __LINE__, "s",
							"If this is a rails app: check your production.log");
					con->http_status = con->error_handler_saved_status;
				}
			} else if (con->in_error_handler) {
				/* error-handler is back and has generated content */
				/* if Status: was set, take it otherwise use 200 */
			}

			if (con->http_status == 0) con->http_status = 200;

			/* the backend is prepared, forward the content */
			connection_set_state(srv, con, CON_STATE_READ_REQUEST_CONTENT);

			break;
		case CON_STATE_READ_REQUEST_CONTENT:
			/* the request-handle is setup, read all the data and push it into the request-handler */

			if (con->request.content_length == -1 ||
			    con->request.content_length == 0) {
				con->recv->is_closed = 1;
			}

			if (!con->recv->is_closed &&
		 	    con->recv->bytes_in < con->request.content_length) {
				switch (connection_handle_read_request_content(srv, con)) {
				case HANDLER_GO_ON:
					break;
				case HANDLER_ERROR:
					TRACE("%s", "(error)");
					connection_set_state(srv, con, CON_STATE_ERROR);
					break;
				case HANDLER_WAIT_FOR_EVENT:
					break;
				default:
					ERROR("%s", "oops, unknown return value: ...");
				}

				if (con->recv->bytes_in == con->request.content_length) {
					/* we read everything */
					fdevent_event_del(srv->ev, con->sock);
					con->recv->is_closed = 1;
				}
				chunkqueue_remove_finished_chunks(con->recv_raw);
			}

			chunkqueue_remove_finished_chunks(con->recv);

			/*
			 * this should call the backend
			 * they might build the connection now or stream the content to the upstream server
			 * */

			switch(r = plugins_call_handle_send_request_content(srv, con)) {
			case HANDLER_GO_ON:
				/* everything was forwarded */
				break;
			case HANDLER_FINISHED:
				/* oops, we don't want this here */
				break;
			case HANDLER_COMEBACK:
				break;
			case HANDLER_WAIT_FOR_EVENT:
				return HANDLER_WAIT_FOR_EVENT;
			default:
				/* something strange happened */
				TRACE("(error) plugins_call_handle_send_request_content(): r = %d", r);
				connection_set_state(srv, con, CON_STATE_ERROR);
				break;
			}

			chunkqueue_remove_finished_chunks(con->recv);

			/* jump back, this should be proceeded by mod_staticfile */
			if (r == HANDLER_COMEBACK && con->mode == DIRECT) {
				connection_set_state(srv,con,CON_STATE_HANDLE_REQUEST_HEADER);
				break;
			}

			if (con->state == CON_STATE_ERROR) break;

			if (con->recv->is_closed &&
			    con->recv->bytes_in == con->recv->bytes_out) {
				/* everything we read is sent */
				connection_set_state(srv, con, CON_STATE_HANDLE_RESPONSE_HEADER);
			}

			break;
		case CON_STATE_HANDLE_RESPONSE_HEADER:
			/* handle the HTTP response headers, or generate error-page */
			connection_handle_response_header(srv, con);

			/* we got a response header from the backend
			 * call all plugins who want to modify the response header
			 * - mod_compress/deflate
			 * - HTTP/1.1 chunking
			 *
			 */
			switch (plugins_call_handle_response_header(srv, con)) {
			case HANDLER_GO_ON:
			case HANDLER_FINISHED:
				break;
			case HANDLER_WAIT_FOR_EVENT:
				/* need to wait for more data */
				return HANDLER_WAIT_FOR_EVENT;
			default:
				/* something strange happened */
				TRACE("%s", "(error)");
				connection_set_state(srv, con, CON_STATE_ERROR);
				break;
			}

			/* all the response-headers are set, check if we have a */

			connection_set_state(srv, con, CON_STATE_WRITE_RESPONSE_HEADER);

			break;
		case CON_STATE_WRITE_RESPONSE_HEADER:
			/* write response headers */
			http_response_write_header(srv, con, con->send_raw);

			connection_set_state(srv, con, CON_STATE_WRITE_RESPONSE_CONTENT);

			if (con->request.http_method == HTTP_METHOD_HEAD) {
				/* remove the content now */
				chunkqueue_reset(con->send);

				con->send->is_closed = 1;
			}

			break;
		case CON_STATE_WRITE_RESPONSE_CONTENT:
			fdevent_event_del(srv->ev, con->sock);

			con->write_request_ts = srv->cur_ts;

			/* looks like we shall read some content from the backend */
			switch (plugins_call_handle_read_response_content(srv, con)) {
			case HANDLER_WAIT_FOR_EVENT:
				if (!con->send->is_closed && con->send->bytes_in == con->send->bytes_out) {
					/* need to wait for more data */
					return HANDLER_WAIT_FOR_EVENT;
				}
				break;
			case HANDLER_GO_ON:
			case HANDLER_FINISHED:
				break;
			default:
				/* something strange happened */
				TRACE("%s", "(error)");
				connection_set_state(srv, con, CON_STATE_ERROR);
				break;
			}

			/* we might have new content in the con->send buffer
			 * encode it for the network
			 * - chunking
			 * - compression
			 */
			switch (plugins_call_handle_filter_response_content(srv, con)) {
			case HANDLER_GO_ON:
			case HANDLER_FINISHED:
				break;
			case HANDLER_WAIT_FOR_EVENT:
				/* need to wait for more data */
				return HANDLER_WAIT_FOR_EVENT;
			default:
				/* something strange happened */
				TRACE("%s", "(error)");
				connection_set_state(srv, con, CON_STATE_ERROR);
				break;
			}

			/* copy output from filters into send_raw. */
			r = filter_chain_copy_output(con->send_filters, con->send_raw);

			/* limit download speed. */
			if (con->traffic_limit_reached) {
				return HANDLER_WAIT_FOR_EVENT;
			}
			/* no response data available to send right now.  wait for more. */
			if (!con->send_raw->is_closed && con->send_raw->bytes_in == con->send_raw->bytes_out) {
				return HANDLER_WAIT_FOR_EVENT;
			}
			switch(network_write_chunkqueue(srv, con, con->send_raw)) {
			case NETWORK_STATUS_SUCCESS:
				/* we send everything from the chunkqueue and the chunkqueue-sender signaled it is finished */
				if (con->send_raw->is_closed) {
					if (con->http_status == 100) {
						/* send out the 100 Continue header and handle the request as normal afterwards */
						con->http_status = 0;

						/* cleanup send chunkqueue's. */
						chunkqueue_reset(con->send);
						chunkqueue_reset(con->send_raw);

						connection_set_state(srv, con, CON_STATE_HANDLE_REQUEST_HEADER);
					} else {
						connection_set_state(srv, con, CON_STATE_RESPONSE_END);
					}
				} else {
					/* still have data to send in send_raw queue */
					fdevent_event_add(srv->ev, con->sock, FDEVENT_OUT);
					return HANDLER_WAIT_FOR_EVENT;
				}
				break;
			case NETWORK_STATUS_FATAL_ERROR: /* error on our side */
				TRACE("%s", "(network-subsys sent us a fatal-error)");
				connection_set_state(srv, con, CON_STATE_ERROR);
				break;
			case NETWORK_STATUS_CONNECTION_CLOSE: /* remote close */
				connection_set_state(srv, con, CON_STATE_ERROR);
				break;
			case NETWORK_STATUS_WAIT_FOR_AIO_EVENT:
				return HANDLER_WAIT_FOR_EVENT;
			case NETWORK_STATUS_WAIT_FOR_EVENT:
				fdevent_event_add(srv->ev, con->sock, FDEVENT_OUT);

				return HANDLER_WAIT_FOR_EVENT;
			case NETWORK_STATUS_WAIT_FOR_FD:
				/* the backend received a EMFILE
				 * - e.g. for a mmap() of /dev/zero */

				server_out_of_fds(srv, con);

				return HANDLER_WAIT_FOR_FD;
			case NETWORK_STATUS_INTERRUPTED:
			case NETWORK_STATUS_UNSET:
				break;
			}


			break;
		case CON_STATE_RESPONSE_END: /* transient */
			/* log the request */

			if (srv->srvconf.log_state_handling) {
				log_error_write(srv, __FILE__, __LINE__, "sds",
						"state for fd", con->sock->fd, connection_get_state(con->state));
			}

			plugins_call_handle_response_done(srv, con);

			srv->con_written++;

			if (con->keep_alive) {
				connection_set_state(srv, con, CON_STATE_REQUEST_START);

#if 0
				con->request_start = srv->cur_ts;
				con->read_idle_ts = srv->cur_ts;
#endif
			} else {
				switch(r = plugins_call_handle_connection_close(srv, con)) {
				case HANDLER_GO_ON:
				case HANDLER_FINISHED:
					break;
				default:
					log_error_write(srv, __FILE__, __LINE__, "sd", "unhandling return value", r);
					break;
				}

				connection_close(srv, con);

				srv->con_closed++;
			}

			connection_reset(srv, con);

			break;
		case CON_STATE_CLOSE:
			if (srv->srvconf.log_state_handling) {
				log_error_write(srv, __FILE__, __LINE__, "sds",
						"state for fd", con->sock->fd, connection_get_state(con->state));
			}

			if (con->keep_alive) {
				if (ioctl(con->sock->fd, FIONREAD, &b)) {
					log_error_write(srv, __FILE__, __LINE__, "ss",
							"ioctl() failed", strerror(errno));
				}
				if (b > 0) {
					char buf[1024];
					log_error_write(srv, __FILE__, __LINE__, "sdd",
							"CLOSE-read()", con->sock->fd, b);

					/* */
					sockread(con->sock->fd, buf, sizeof(buf));
				} else {
					/* nothing to read */

					con->close_timeout_ts = 0;
				}
			} else {
				con->close_timeout_ts = 0;
			}

			if (srv->cur_ts - con->close_timeout_ts > 1) {
				connection_close(srv, con);

				if (srv->srvconf.log_state_handling) {
					log_error_write(srv, __FILE__, __LINE__, "sd",
							"connection closed for fd", con->sock->fd);
				}
			}

			break;
		case CON_STATE_ERROR: /* transient */
			/* even if the connection was drop we still have to write it to the access log */
			if (con->http_status) {
				plugins_call_handle_response_done(srv, con);
			}
#ifdef USE_OPENSSL
			if (srv_sock->is_ssl) {
				int ret;
				switch ((ret = SSL_shutdown(con->sock->ssl))) {
				case 1:
					/* ok */
					break;
				case 0:
					SSL_shutdown(con->sock->ssl);
					break;
				default:
					log_error_write(srv, __FILE__, __LINE__, "sds", "SSL:",
							SSL_get_error(con->sock->ssl, ret),
							ERR_error_string(ERR_get_error(), NULL));
					return -1;
				}
			}
#endif

			switch(con->mode) {
			case DIRECT:
#if 0
				log_error_write(srv, __FILE__, __LINE__, "sd",
						"emergency exit: direct",
						con->sock->fd);
#endif
				break;
			default:
				switch(r = plugins_call_handle_connection_close(srv, con)) {
				case HANDLER_GO_ON:
				case HANDLER_FINISHED:
					break;
				default:
					log_error_write(srv, __FILE__, __LINE__, "");
					break;
				}
				break;
			}

			connection_reset(srv, con);

			/* close the connection */
			if ((con->keep_alive == 1) &&
			    (0 == shutdown(con->sock->fd, SHUT_WR))) {
				con->close_timeout_ts = srv->cur_ts;
				connection_set_state(srv, con, CON_STATE_CLOSE);

				if (srv->srvconf.log_state_handling) {
					log_error_write(srv, __FILE__, __LINE__, "sd",
							"shutdown for fd", con->sock->fd);
				}
			} else {
				connection_close(srv, con);
			}

			con->keep_alive = 0;

			srv->con_closed++;

			break;
		default:
			log_error_write(srv, __FILE__, __LINE__, "sdd",
					"unknown state:", con->sock->fd, con->state);

			break;
		}

		if (done == -1) {
			done = 0;
		} else if (ostate == con->state) {
			done = 1;
		}
	}

	if (srv->srvconf.log_state_handling) {
		log_error_write(srv, __FILE__, __LINE__, "sds",
				"state at exit:",
				con->sock->fd,
				connection_get_state(con->state));
	}

	return 0;
}
