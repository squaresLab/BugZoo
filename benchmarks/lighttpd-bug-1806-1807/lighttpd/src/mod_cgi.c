#include <sys/types.h>

#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <ctype.h>
#include <assert.h>

#include <stdio.h>
#include <fcntl.h>

#include "server.h"
#include "keyvalue.h"
#include "log.h"
#include "connections.h"
#include "joblist.h"
#include "fdevent.h"

#include "plugin.h"
#include "http_resp.h"

#include "sys-files.h"
#include "sys-mmap.h"
#include "sys-socket.h"
#include "sys-strings.h"
#include "sys-process.h"

#include "network_backends.h"

#ifdef HAVE_SYS_FILIO_H
# include <sys/filio.h>
#endif

enum {EOL_UNSET, EOL_N, EOL_RN};

typedef struct {
	char **ptr;

	size_t size;
	size_t used;
} char_array;

#define pid_t int
typedef struct {
	pid_t *ptr;
	size_t used;
	size_t size;
} buffer_pid_t;

typedef struct {
	array *cgi;
} plugin_config;

typedef struct {
	PLUGIN_DATA;
	buffer_pid_t cgi_pid;

	buffer *tmp_buf;

	http_resp *resp;

	plugin_config **config_storage;

	plugin_config conf;
} plugin_data;

typedef enum {
	CGI_STATE_UNSET,
	CGI_STATE_CONNECTING,
	CGI_STATE_READ_RESPONSE_HEADER,
	CGI_STATE_READ_RESPONSE_CONTENT
} cgi_state_t;

typedef struct {
	pid_t pid;

	iosocket *sock;
	iosocket *wb_sock;

	chunkqueue *rb;
	chunkqueue *wb;

	cgi_state_t state;

	connection *remote_con;  /* dumb pointer */
} cgi_session;

static cgi_session * cgi_session_init() {
	cgi_session *sess = calloc(1, sizeof(*sess));
	assert(sess);

	sess->sock = iosocket_init();
	sess->wb_sock = iosocket_init();
	sess->wb = chunkqueue_init();
	sess->rb = chunkqueue_init();

	return sess;
}

static void cgi_session_free(cgi_session *sess) {
	if (!sess) return;

	iosocket_free(sess->sock);
	iosocket_free(sess->wb_sock);

	chunkqueue_free(sess->wb);
	chunkqueue_free(sess->rb);

	free(sess);
}

INIT_FUNC(mod_cgi_init) {
	plugin_data *p;

	UNUSED(srv);

	p = calloc(1, sizeof(*p));

	assert(p);

	p->tmp_buf = buffer_init();
	p->resp = http_response_init();

	return p;
}


FREE_FUNC(mod_cgi_free) {
	plugin_data *p = p_d;
	buffer_pid_t *r = &(p->cgi_pid);

	UNUSED(srv);

	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			array_free(s->cgi);

			free(s);
		}
		free(p->config_storage);
	}


	if (r->ptr) free(r->ptr);

	buffer_free(p->tmp_buf);
	http_response_free(p->resp);

	free(p);

	return HANDLER_GO_ON;
}

SETDEFAULTS_FUNC(mod_fastcgi_set_defaults) {
	plugin_data *p = p_d;
	size_t i = 0;

	config_values_t cv[] = {
		{ "cgi.assign",                  NULL, T_CONFIG_ARRAY, T_CONFIG_SCOPE_CONNECTION },       /* 0 */
		{ NULL,                          NULL, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET}
	};

	if (!p) return HANDLER_ERROR;

	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));

	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s;

		s = calloc(1, sizeof(plugin_config));
		assert(s);

		s->cgi    = array_init();

		cv[0].destination = s->cgi;

		p->config_storage[i] = s;

		if (0 != config_insert_values_global(srv, ((data_config *)srv->config_context->data[i])->value, cv)) {
			return HANDLER_ERROR;
		}
	}

	return HANDLER_GO_ON;
}


static int cgi_pid_add(server *srv, plugin_data *p, pid_t pid) {
	int m = -1;
	size_t i;
	buffer_pid_t *r = &(p->cgi_pid);

	UNUSED(srv);

	for (i = 0; i < r->used; i++) {
		if (r->ptr[i] > m) m = r->ptr[i];
	}

	if (r->size == 0) {
		r->size = 16;
		r->ptr = malloc(sizeof(*r->ptr) * r->size);
	} else if (r->used == r->size) {
		r->size += 16;
		r->ptr = realloc(r->ptr, sizeof(*r->ptr) * r->size);
	}

	r->ptr[r->used++] = pid;

	return m;
}

static int cgi_pid_del(server *srv, plugin_data *p, pid_t pid) {
	size_t i;
	buffer_pid_t *r = &(p->cgi_pid);

	UNUSED(srv);

	for (i = 0; i < r->used; i++) {
		if (r->ptr[i] == pid) break;
	}

	if (i != r->used) {
		/* found */

		if (i != r->used - 1) {
			r->ptr[i] = r->ptr[r->used - 1];
		}
		r->used--;
	}

	return 0;
}

/**
 * Copy decoded response content to client connection.
 */
static int cgi_copy_response(server *srv, connection *con, cgi_session *sess) {
	chunk *c;
	int we_have = 0;

	UNUSED(srv);

	chunkqueue_remove_finished_chunks(sess->rb);
	/* copy the content to the next cq */
	for (c = sess->rb->first; c; c = c->next) {
		if (c->mem->used == 0) continue;

		we_have = c->mem->used - c->offset - 1;
		sess->rb->bytes_out += we_have;
		con->send->bytes_in += we_have;
		if (c->offset == 0) {
			/* steal the buffer from the previous queue */

			chunkqueue_steal_chunk(con->send, c);
		} else {
			chunkqueue_append_mem(con->send, c->mem->ptr + c->offset, c->mem->used - c->offset);

			c->offset = c->mem->used - 1; /* mark the incoming side as read */
		}
	}
	chunkqueue_remove_finished_chunks(sess->rb);

	if(sess->rb->is_closed) {
		con->send->is_closed = 1;
	}
	return 0;
}


static int cgi_demux_response(server *srv, connection *con, plugin_data *p) {
	cgi_session *sess = con->plugin_ctx[p->id];

	switch(srv->network_backend_read(srv, con, sess->sock, sess->rb)) {
	case NETWORK_STATUS_CONNECTION_CLOSE:
		fdevent_event_del(srv->ev, sess->sock);

		/* connection closed. close the read chunkqueue. */
		sess->rb->is_closed = 1;
	case NETWORK_STATUS_SUCCESS:
		/* we got content */
		break;
	case NETWORK_STATUS_WAIT_FOR_EVENT:
		return 0;
	default:
		/* oops */
		ERROR("%s", "oops, read-pipe-read failed and I don't know why");
		return -1;
	}

	/* looks like we got some content
	*
	* split off the header from the incoming stream
	*/

	if (con->file_started == 0) {
		size_t i;
		int have_content_length = 0;

		http_response_reset(p->resp);

		/* the response header is not fully received yet,
		*
		* extract the http-response header from the rb-cq
		*/
		switch (http_response_parse_cq(sess->rb, p->resp)) {
		case PARSE_UNSET:
		case PARSE_ERROR:
			/* parsing failed */

			TRACE("%s", "response parser failed");

			con->http_status = 502; /* Bad Gateway */
			return -1;
		case PARSE_NEED_MORE:
			return 0;
		case PARSE_SUCCESS:
			con->http_status = p->resp->status;

			chunkqueue_remove_finished_chunks(sess->rb);

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
			/* if Status: ... is not set, 200 is our default status-code */
			if (con->http_status == 0) con->http_status = 200;
			sess->state = CGI_STATE_READ_RESPONSE_CONTENT;

			if (con->request.http_version == HTTP_VERSION_1_1 &&
			    !have_content_length) {
				con->response.transfer_encoding = HTTP_TRANSFER_ENCODING_CHUNKED;
		 	}

			break;
		}
	}

	/* FIXME: pass the response-header to the other plugins to
	* setup the filter-queue
	*
	* - use next-queue instead of con->write_queue
	*/

	/* copy the resopnse content */
	cgi_copy_response(srv, con, sess);

	joblist_append(srv, con);

	return 0;
}

static handler_t cgi_connection_close(server *srv, connection *con, plugin_data *p) {
	cgi_session *sess = con->plugin_ctx[p->id];
	int status;
	pid_t pid;

	if (NULL == sess) return HANDLER_GO_ON;
	if (con->mode != p->id) return HANDLER_GO_ON;

#ifndef _WIN32

	/* the connection to the browser went away, but we still have a connection
	 * to the CGI script
	 *
	 * close cgi-connection
	 */

	if (sess->sock->fd != -1) {
		/* close connection to the cgi-script */
		fdevent_event_del(srv->ev, sess->sock);
		fdevent_unregister(srv->ev, sess->sock);
	}

	if (sess->wb_sock->fd != -1) {
		close(sess->wb_sock->fd);
		sess->wb_sock->fd = -1;
	}

	pid = sess->pid;

	con->plugin_ctx[p->id] = NULL;

	/* is this a good idea ? */
	cgi_session_free(sess);
	sess = NULL;

	/* if waitpid hasn't been called by response.c yet, do it here */
	if (pid) {
		/* check if the CGI-script is already gone */
#ifndef _WIN32
		switch(waitpid(pid, &status, WNOHANG)) {
		case 0:
			/* not finished yet */
#if 0
			log_error_write(srv, __FILE__, __LINE__, "sd", "(debug) child isn't done yet, pid:", pid);
#endif
			break;
		case -1:
			/* */
			if (errno == EINTR) break;

			/*
			 * errno == ECHILD happens if _subrequest catches the process-status before
			 * we have read the response of the cgi process
			 *
			 * -> catch status
			 * -> WAIT_FOR_EVENT
			 * -> read response
			 * -> we get here with waitpid == ECHILD
			 *
			 */
			if (errno == ECHILD) return HANDLER_GO_ON;

			log_error_write(srv, __FILE__, __LINE__, "ss", "waitpid failed: ", strerror(errno));
			return HANDLER_ERROR;
		default:
			/* Send an error if we haven't sent any data yet */
			if (0 == con->file_started) {
				if (con->http_status == 0) con->http_status = 500;
				con->mode = DIRECT;
			}

			if (WIFEXITED(status)) {
#if 0
				log_error_write(srv, __FILE__, __LINE__, "sd", "(debug) cgi exited fine, pid:", pid);
#endif
				pid = 0;

				return HANDLER_GO_ON;
			} else {
				log_error_write(srv, __FILE__, __LINE__, "sd", "cgi died, pid:", pid);
				pid = 0;
				return HANDLER_GO_ON;
			}
		}


		kill(pid, SIGTERM);
#endif
		/* cgi-script is still alive, queue the PID for removal */
		cgi_pid_add(srv, p, pid);
	}
#endif
	return HANDLER_GO_ON;
}

static handler_t cgi_connection_close_callback(server *srv, connection *con, void *p_d) {
	plugin_data *p = p_d;

	return cgi_connection_close(srv, con, p);
}

static handler_t cgi_handle_fdevent(void *s, void *ctx, int revents) {
	server      *srv  = (server *)s;
	cgi_session *sess = ctx;
	connection  *con  = sess->remote_con;

	if (revents & FDEVENT_IN) {
		switch (sess->state) {
		case CGI_STATE_READ_RESPONSE_HEADER:
			/* parse the header and set file-started, the demuxer will care about it */
			joblist_append(srv, con);

			break;
		case CGI_STATE_READ_RESPONSE_CONTENT:
			/* just forward the content to the out-going queue */

			chunkqueue_remove_finished_chunks(sess->rb);

			switch (srv->network_backend_read(srv, con, sess->sock, sess->rb)) {
			case NETWORK_STATUS_CONNECTION_CLOSE:
				fdevent_event_del(srv->ev, sess->sock);

				/* connection closed. close the read chunkqueue. */
				sess->rb->is_closed = 1;
			case NETWORK_STATUS_SUCCESS:
				/* read even more, do we have all the content */

				/* how much do we want to read ? */

				/* copy the resopnse content */
				cgi_copy_response(srv, con, sess);

				break;
			default:
				ERROR("%s", "oops, we failed to read");
				break;
			}

			joblist_append(srv, con);
			break;
		default:
			TRACE("unexpected state for a FDEVENT_IN: %d", sess->state);
			break;
		}
	}

	if (revents & FDEVENT_OUT) {
		/* nothing to do */
	}

	/* perhaps this issue is already handled */
	if (revents & FDEVENT_HUP) {
		con->send->is_closed = 1;

		fdevent_event_del(srv->ev, sess->sock);

		joblist_append(srv, con);
	} else if (revents & FDEVENT_ERR) {
		con->send->is_closed = 1;

		/* kill all connections to the cgi process */
		fdevent_event_del(srv->ev, sess->sock);
	}

	return HANDLER_FINISHED;
}


static int cgi_env_add(char_array *env, const char *key, size_t key_len, const char *val, size_t val_len) {
	char *dst;

	if (!key || !val) return -1;

	dst = malloc(key_len + val_len + 3);
	memcpy(dst, key, key_len);
	dst[key_len] = '=';
	/* add the \0 from the value */
	memcpy(dst + key_len + 1, val, val_len + 1);

	if (env->size == 0) {
		env->size = 16;
		env->ptr = malloc(env->size * sizeof(*env->ptr));
	} else if (env->size == env->used) {
		env->size += 16;
		env->ptr = realloc(env->ptr, env->size * sizeof(*env->ptr));
	}

	env->ptr[env->used++] = dst;

	return 0;
}

static int cgi_create_env(server *srv, connection *con, plugin_data *p, buffer *cgi_handler) {
	pid_t pid;

#ifdef HAVE_IPV6
	char b2[INET6_ADDRSTRLEN + 1];
#endif

	int to_cgi_fds[2];
	int from_cgi_fds[2];
	struct stat st;

#ifndef _WIN32

	if (cgi_handler->used > 1) {
		/* stat the exec file */
		if (-1 == (stat(cgi_handler->ptr, &st))) {
			log_error_write(srv, __FILE__, __LINE__, "sbss",
					"stat for cgi-handler", cgi_handler,
					"failed:", strerror(errno));
			return -1;
		}
	}

	if (pipe(to_cgi_fds)) {
		log_error_write(srv, __FILE__, __LINE__, "ss", "pipe failed:", strerror(errno));
		return -1;
	}

	if (pipe(from_cgi_fds)) {
		log_error_write(srv, __FILE__, __LINE__, "ss", "pipe failed:", strerror(errno));
		return -1;
	}

	/* fork, execve */
	switch (pid = fork()) {
	case 0: {
		/* child */
		char **args;
		int argc;
		int i = 0;
		char buf[32];
		size_t n;
		char_array env;
		char *c;
		const char *s;
		server_socket *srv_sock = con->srv_socket;

		/* move stdout to from_cgi_fd[1] */
		close(STDOUT_FILENO);
		dup2(from_cgi_fds[1], STDOUT_FILENO);
		close(from_cgi_fds[1]);
		/* not needed */
		close(from_cgi_fds[0]);

		/* move the stdin to to_cgi_fd[0] */
		close(STDIN_FILENO);
		dup2(to_cgi_fds[0], STDIN_FILENO);
		close(to_cgi_fds[0]);
		/* not needed */
		close(to_cgi_fds[1]);

		/**
		 * FIXME: add a event-handler for STDERR_FILENO and let it LOG()
		 */

		close(STDERR_FILENO);

		/* create environment */
		env.ptr = NULL;
		env.size = 0;
		env.used = 0;

		cgi_env_add(&env, CONST_STR_LEN("SERVER_SOFTWARE"), CONST_STR_LEN(PACKAGE_NAME"/"PACKAGE_VERSION));

		if (!buffer_is_empty(con->server_name)) {
			cgi_env_add(&env, CONST_STR_LEN("SERVER_NAME"), CONST_BUF_LEN(con->server_name));
		} else {
#ifdef HAVE_IPV6
			s = inet_ntop(srv_sock->addr.plain.sa_family,
				      srv_sock->addr.plain.sa_family == AF_INET6 ?
				      (const void *) &(srv_sock->addr.ipv6.sin6_addr) :
				      (const void *) &(srv_sock->addr.ipv4.sin_addr),
				      b2, sizeof(b2)-1);
#else
			s = inet_ntoa(srv_sock->addr.ipv4.sin_addr);
#endif
			cgi_env_add(&env, CONST_STR_LEN("SERVER_NAME"), s, strlen(s));
		}
		cgi_env_add(&env, CONST_STR_LEN("GATEWAY_INTERFACE"), CONST_STR_LEN("CGI/1.1"));

		s = get_http_version_name(con->request.http_version);

		cgi_env_add(&env, CONST_STR_LEN("SERVER_PROTOCOL"), s, strlen(s));

		ltostr(buf,
#ifdef HAVE_IPV6
			ntohs(srv_sock->addr.plain.sa_family == AF_INET6 ? srv_sock->addr.ipv6.sin6_port : srv_sock->addr.ipv4.sin_port)
#else
			ntohs(srv_sock->addr.ipv4.sin_port)
#endif
			);
		cgi_env_add(&env, CONST_STR_LEN("SERVER_PORT"), buf, strlen(buf));

#ifdef HAVE_IPV6
		s = inet_ntop(srv_sock->addr.plain.sa_family,
			      srv_sock->addr.plain.sa_family == AF_INET6 ?
			      (const void *) &(srv_sock->addr.ipv6.sin6_addr) :
			      (const void *) &(srv_sock->addr.ipv4.sin_addr),
			      b2, sizeof(b2)-1);
#else
		s = inet_ntoa(srv_sock->addr.ipv4.sin_addr);
#endif
		cgi_env_add(&env, CONST_STR_LEN("SERVER_ADDR"), s, strlen(s));

		s = get_http_method_name(con->request.http_method);
		cgi_env_add(&env, CONST_STR_LEN("REQUEST_METHOD"), s, strlen(s));

		if (!buffer_is_empty(con->request.pathinfo)) {
			cgi_env_add(&env, CONST_STR_LEN("PATH_INFO"), CONST_BUF_LEN(con->request.pathinfo));
		}
		cgi_env_add(&env, CONST_STR_LEN("REDIRECT_STATUS"), CONST_STR_LEN("200"));
		if (!buffer_is_empty(con->uri.query)) {
			cgi_env_add(&env, CONST_STR_LEN("QUERY_STRING"), CONST_BUF_LEN(con->uri.query));
		} else {
			/* set a empty QUERY_STRING */
			cgi_env_add(&env, CONST_STR_LEN("QUERY_STRING"), CONST_STR_LEN(""));
		}
		if (!buffer_is_empty(con->request.orig_uri)) {
			cgi_env_add(&env, CONST_STR_LEN("REQUEST_URI"), CONST_BUF_LEN(con->request.orig_uri));
		}


#ifdef HAVE_IPV6
		s = inet_ntop(con->dst_addr.plain.sa_family,
			      con->dst_addr.plain.sa_family == AF_INET6 ?
			      (const void *) &(con->dst_addr.ipv6.sin6_addr) :
			      (const void *) &(con->dst_addr.ipv4.sin_addr),
			      b2, sizeof(b2)-1);
#else
		s = inet_ntoa(con->dst_addr.ipv4.sin_addr);
#endif
		cgi_env_add(&env, CONST_STR_LEN("REMOTE_ADDR"), s, strlen(s));

		ltostr(buf,
#ifdef HAVE_IPV6
			ntohs(con->dst_addr.plain.sa_family == AF_INET6 ? con->dst_addr.ipv6.sin6_port : con->dst_addr.ipv4.sin_port)
#else
			ntohs(con->dst_addr.ipv4.sin_port)
#endif
			);
		cgi_env_add(&env, CONST_STR_LEN("REMOTE_PORT"), buf, strlen(buf));

		if (!buffer_is_empty(con->authed_user)) {
			cgi_env_add(&env, CONST_STR_LEN("REMOTE_USER"),
				    CONST_BUF_LEN(con->authed_user));
		}

#ifdef USE_OPENSSL
       if (srv_sock->is_ssl) {
               cgi_env_add(&env, CONST_STR_LEN("HTTPS"), CONST_STR_LEN("on"));
       }
#endif

		/* request.content_length < SSIZE_MAX, see request.c */
		ltostr(buf, con->request.content_length);
		cgi_env_add(&env, CONST_STR_LEN("CONTENT_LENGTH"), buf, strlen(buf));
		cgi_env_add(&env, CONST_STR_LEN("SCRIPT_FILENAME"), CONST_BUF_LEN(con->physical.path));
		cgi_env_add(&env, CONST_STR_LEN("SCRIPT_NAME"), CONST_BUF_LEN(con->uri.path));
		cgi_env_add(&env, CONST_STR_LEN("DOCUMENT_ROOT"), CONST_BUF_LEN(con->physical.doc_root));

		/* for valgrind */
		if (NULL != (s = getenv("LD_PRELOAD"))) {
			cgi_env_add(&env, CONST_STR_LEN("LD_PRELOAD"), s, strlen(s));
		}

		if (NULL != (s = getenv("LD_LIBRARY_PATH"))) {
			cgi_env_add(&env, CONST_STR_LEN("LD_LIBRARY_PATH"), s, strlen(s));
		}
#ifdef __CYGWIN__
		/* CYGWIN needs SYSTEMROOT */
		if (NULL != (s = getenv("SYSTEMROOT"))) {
			cgi_env_add(&env, CONST_STR_LEN("SYSTEMROOT"), s, strlen(s));
		}
#endif

		for (n = 0; n < con->request.headers->used; n++) {
			data_string *ds;

			ds = (data_string *)con->request.headers->data[n];

			if (ds->value->used && ds->key->used) {
				size_t j;

				buffer_reset(p->tmp_buf);

				if (0 != strcasecmp(ds->key->ptr, "CONTENT-TYPE")) {
					buffer_copy_string(p->tmp_buf, "HTTP_");
					p->tmp_buf->used--; /* strip \0 after HTTP_ */
				}

				buffer_prepare_append(p->tmp_buf, ds->key->used + 2);

				for (j = 0; j < ds->key->used - 1; j++) {
					char cr = '_';
					if (light_isalpha(ds->key->ptr[j])) {
						/* upper-case */
						cr = ds->key->ptr[j] & ~32;
					} else if (light_isdigit(ds->key->ptr[j])) {
						/* copy */
						cr = ds->key->ptr[j];
					}
					p->tmp_buf->ptr[p->tmp_buf->used++] = cr;
				}
				p->tmp_buf->ptr[p->tmp_buf->used++] = '\0';

				cgi_env_add(&env, CONST_BUF_LEN(p->tmp_buf), CONST_BUF_LEN(ds->value));
			}
		}

		for (n = 0; n < con->environment->used; n++) {
			data_string *ds;

			ds = (data_string *)con->environment->data[n];

			if (ds->value->used && ds->key->used) {
				size_t j;

				buffer_reset(p->tmp_buf);

				buffer_prepare_append(p->tmp_buf, ds->key->used + 2);

				for (j = 0; j < ds->key->used - 1; j++) {
					p->tmp_buf->ptr[p->tmp_buf->used++] =
						isalpha((unsigned char)ds->key->ptr[j]) ?
						toupper((unsigned char)ds->key->ptr[j]) : '_';
				}
				p->tmp_buf->ptr[p->tmp_buf->used++] = '\0';

				cgi_env_add(&env, CONST_BUF_LEN(p->tmp_buf), CONST_BUF_LEN(ds->value));
			}
		}

		if (env.size == env.used) {
			env.size += 16;
			env.ptr = realloc(env.ptr, env.size * sizeof(*env.ptr));
		}

		env.ptr[env.used] = NULL;

		/* set up args */
		argc = 3;
		args = malloc(sizeof(*args) * argc);
		i = 0;

		if (cgi_handler->used > 1) {
			args[i++] = cgi_handler->ptr;
		}
		args[i++] = con->physical.path->ptr;
		args[i++] = NULL;

		/* search for the last / */
		if (NULL != (c = strrchr(con->physical.path->ptr, '/'))) {
			*c = '\0';

			/* change to the physical directory */
			if (-1 == chdir(con->physical.path->ptr)) {
				log_error_write(srv, __FILE__, __LINE__, "ssb", "chdir failed:", strerror(errno), con->physical.path);
			}
			*c = '/';
		}

		/* we don't need the client socket */
		for (i = 3; i < 256; i++) {
			close(i);
		}

		/* exec the cgi */
		execve(args[0], args, env.ptr);

		log_error_write(srv, __FILE__, __LINE__, "sss", "CGI failed:", strerror(errno), args[0]);

		/* */
		SEGFAULT();
		break;
	}
	case -1:
		/* error */
		log_error_write(srv, __FILE__, __LINE__, "ss", "fork failed:", strerror(errno));
		break;
	default: {
		cgi_session *sess;
		/* father */

		close(from_cgi_fds[1]);
		close(to_cgi_fds[0]);

		/* register PID and wait for them asyncronously */
		con->mode = p->id;
		buffer_reset(con->physical.path);

		sess = cgi_session_init();

		sess->remote_con = con;
		sess->pid = pid;

		assert(sess->sock);

		sess->sock->fd = from_cgi_fds[0];
		sess->sock->type = IOSOCKET_TYPE_PIPE;
		sess->wb_sock->fd = to_cgi_fds[1];
		sess->wb_sock->type = IOSOCKET_TYPE_PIPE;

		if (-1 == fdevent_fcntl_set(srv->ev, sess->sock)) {
			log_error_write(srv, __FILE__, __LINE__, "ss", "fcntl failed: ", strerror(errno));

			cgi_session_free(sess);

			return -1;
		}

		con->plugin_ctx[p->id] = sess;

		fdevent_register(srv->ev, sess->sock, cgi_handle_fdevent, sess);
		fdevent_event_add(srv->ev, sess->sock, FDEVENT_IN);

		sess->state = CGI_STATE_READ_RESPONSE_HEADER;

		break;
	}
	}

	return 0;
#else
	return -1;
#endif
}

static int mod_cgi_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i, j;
	plugin_config *s = p->config_storage[0];

	PATCH_OPTION(cgi);

	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];

		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;

		/* merge config */
		for (j = 0; j < dc->value->used; j++) {
			data_unset *du = dc->value->data[j];

			if (buffer_is_equal_string(du->key, CONST_STR_LEN("cgi.assign"))) {
				PATCH_OPTION(cgi);
			}
		}
	}

	return 0;
}

URIHANDLER_FUNC(mod_cgi_start_backend) {
	size_t k, s_len;
	plugin_data *p = p_d;
	buffer *fn = con->physical.path;

	if (fn->used == 0) return HANDLER_GO_ON;

	mod_cgi_patch_connection(srv, con, p);

	s_len = fn->used - 1;

	for (k = 0; k < p->conf.cgi->used; k++) {
		data_string *ds = (data_string *)p->conf.cgi->data[k];
		size_t ct_len = ds->key->used - 1;

		if (ds->key->used == 0) continue;
		if (s_len < ct_len) continue;

		if (0 == strncmp(fn->ptr + s_len - ct_len, ds->key->ptr, ct_len)) {
			if (cgi_create_env(srv, con, p, ds->value)) {
				con->http_status = 500;

				buffer_reset(con->physical.path);
				return HANDLER_FINISHED;
			}
			/* one handler is enough for the request */
			break;
		}
	}

	return HANDLER_GO_ON;
}

TRIGGER_FUNC(cgi_trigger) {
	plugin_data *p = p_d;
	size_t ndx;
	/* the trigger handle only cares about lonely PID which we have to wait for */
#ifndef _WIN32

	for (ndx = 0; ndx < p->cgi_pid.used; ndx++) {
		int status;

		switch(waitpid(p->cgi_pid.ptr[ndx], &status, WNOHANG)) {
		case 0:
			/* not finished yet */
#if 0
			log_error_write(srv, __FILE__, __LINE__, "sd", "(debug) child isn't done yet, pid:", p->cgi_pid.ptr[ndx]);
#endif
			break;
		case -1:
			log_error_write(srv, __FILE__, __LINE__, "ss", "waitpid failed: ", strerror(errno));

			return HANDLER_ERROR;
		default:

			if (WIFEXITED(status)) {
#if 0
				log_error_write(srv, __FILE__, __LINE__, "sd", "(debug) cgi exited fine, pid:", p->cgi_pid.ptr[ndx]);
#endif
			} else {
				log_error_write(srv, __FILE__, __LINE__, "s", "cgi died ?");
			}

			cgi_pid_del(srv, p, p->cgi_pid.ptr[ndx]);
			/* del modified the buffer structure
			 * and copies the last entry to the current one
			 * -> recheck the current index
			 */
			ndx--;
		}
	}
#endif
	return HANDLER_GO_ON;
}

SUBREQUEST_FUNC(mod_cgi_read_response_content) {
	int status;
	plugin_data *p = p_d;
	cgi_session *sess = con->plugin_ctx[p->id];

	if (con->mode != p->id) return HANDLER_GO_ON;
	if (NULL == sess) return HANDLER_GO_ON;

	switch (cgi_demux_response(srv, con, p)) {
	case 0:
		break;
	case 1:
		cgi_connection_close(srv, con, p);

		/* if we get a IN|HUP and have read everything don't exec the close twice */
		return HANDLER_FINISHED;
	case -1:
		cgi_connection_close(srv, con, p);

		if (0 == con->http_status) con->http_status = 500;
		con->mode = DIRECT;

		return HANDLER_FINISHED;
	}

#if 0
	log_error_write(srv, __FILE__, __LINE__, "sdd", "subrequest, pid =", sess, sess->pid);
#endif
	if (sess->pid == 0) return HANDLER_FINISHED;
#ifndef _WIN32
	switch(waitpid(sess->pid, &status, WNOHANG)) {
	case 0:
		/* we only have for events here if we don't have the header yet,
		 * otherwise the event-handler will send us the incoming data */

		if (!con->file_started) return HANDLER_WAIT_FOR_EVENT;
		if (con->send->is_closed) return HANDLER_FINISHED;

		return HANDLER_GO_ON;
	case -1:
		if (errno == EINTR) return HANDLER_WAIT_FOR_EVENT;

		if (errno == ECHILD && con->file_started == 0) {
			/*
			 * second round but still not response
			 */
			return HANDLER_WAIT_FOR_EVENT;
		}

		log_error_write(srv, __FILE__, __LINE__, "ss", "waitpid failed: ", strerror(errno));
		con->mode = DIRECT;
		con->http_status = 500;

		sess->pid = 0;

		fdevent_event_del(srv->ev, sess->sock);
		fdevent_unregister(srv->ev, sess->sock);

		cgi_session_free(sess);
		sess = NULL;

		con->plugin_ctx[p->id] = NULL;

		return HANDLER_FINISHED;
	default:
		con->send->is_closed = 1;

		if (WIFEXITED(status)) {
			/* nothing */
		} else {
			log_error_write(srv, __FILE__, __LINE__, "s", "cgi died ?");

			con->mode = DIRECT;
			con->http_status = 500;

		}

		sess->pid = 0;

		fdevent_event_del(srv->ev, sess->sock);
		fdevent_unregister(srv->ev, sess->sock);

		cgi_session_free(sess);
		sess = NULL;

		con->plugin_ctx[p->id] = NULL;
		return HANDLER_FINISHED;
	}
#else
	return HANDLER_ERROR;
#endif
}

URIHANDLER_FUNC(mod_cgi_send_request_content) {
	plugin_data *p = p_d;
	cgi_session *sess = con->plugin_ctx[p->id];

	if (p->id != con->mode) return HANDLER_GO_ON;

	if (con->request.content_length > 0 && con->recv->bytes_in > con->recv->bytes_out) {
		/* write request content. */
		switch (network_write_chunkqueue_write(srv, con, sess->wb_sock, con->recv)) {
		case NETWORK_STATUS_SUCCESS:
			/** fall through, still have data to write. */
		case NETWORK_STATUS_WAIT_FOR_EVENT:
			/** fall through */
		case NETWORK_STATUS_WAIT_FOR_AIO_EVENT:
			break;
		case NETWORK_STATUS_CONNECTION_CLOSE:
			/* the script might have written a response already. */
			break;
		default:
			TRACE("%s", "(error)");
			return HANDLER_ERROR;
		}
		chunkqueue_remove_finished_chunks(con->recv);
	}
	/* we have to close the pipe to finish the request. */
	if ((con->recv->is_closed && con->recv->bytes_in == con->recv->bytes_out) ||
			con->request.content_length <= 0) {
		close(sess->wb_sock->fd);
		sess->wb_sock->fd = -1;
	} else {
		/* there is more data to write. */
		return HANDLER_GO_ON;
	}

	return mod_cgi_read_response_content(srv, con, p_d);
}


int mod_cgi_plugin_init(plugin *p) {
	p->version     = LIGHTTPD_VERSION_ID;
	p->name        = buffer_init_string("cgi");

	p->connection_reset = cgi_connection_close_callback;
	p->handle_start_backend = mod_cgi_start_backend;
	p->handle_send_request_content = mod_cgi_send_request_content;
	p->handle_read_response_content = mod_cgi_read_response_content;

	p->handle_trigger = cgi_trigger;
	p->init           = mod_cgi_init;
	p->cleanup        = mod_cgi_free;
	p->set_defaults   = mod_fastcgi_set_defaults;

	p->data        = NULL;

	return 0;
}
