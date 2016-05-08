#ifndef _MOD_PROXY_CORE_H_
#define _MOD_PROXY_CORE_H_

#include "plugin.h"

#include "mod_proxy_core_pool.h"
#include "mod_proxy_core_backend.h"
#include "mod_proxy_core_backlog.h"
#include "mod_proxy_core_rewrites.h"

#include "buffer.h"
#include "http_resp.h"
#include "array.h"

#define MAX_INTERNAL_REDIRECTS 8

struct proxy_protocol;

typedef struct {
	proxy_backends *backends;

	proxy_backlog *backlog;
	data_integer  *backlog_size;

	proxy_rewrites *request_rewrites;
	proxy_rewrites *response_rewrites;

	unsigned short allow_x_sendfile;
	unsigned short allow_x_rewrite;
	unsigned short debug;
	unsigned short max_pool_size;
	unsigned short check_local;
	unsigned short split_hostnames;
	unsigned short max_keep_alive_requests;

	proxy_balance_t balancer;
	struct proxy_protocol *protocol;
} plugin_config;

typedef struct {
	PLUGIN_DATA;

	array *possible_balancers;
	/*array *possible_protocols; */
	struct proxy_protocol *(*proxy_register_protocol) (const char *name); /* register new protocol */

	/* statistics counters. */
	data_integer *request_count;

	/* for parsing only */
	array *backends_arr;
	buffer *protocol_buf;
	buffer *balance_buf;

	buffer *replace_buf;

	buffer *tmp_buf;     /** a temporary buffer, used by mod_proxy_backend_fastcgi */

	plugin_config **config_storage;

	plugin_config conf;
} mod_proxy_core_plugin_data;

#define plugin_data mod_proxy_core_plugin_data

typedef enum {
	PROXY_STATE_UNSET,
	PROXY_STATE_CONNECTING,
	PROXY_STATE_CONNECTED,
	PROXY_STATE_WRITE_REQUEST_HEADER,
	PROXY_STATE_WRITE_REQUEST_BODY,
	PROXY_STATE_READ_RESPONSE_HEADER,
	PROXY_STATE_READ_RESPONSE_BODY,
	PROXY_STATE_FINISHED
} proxy_state_t;

typedef struct proxy_session {
	proxy_connection *proxy_con;
	proxy_backend *proxy_backend;

	connection *remote_con;

	buffer *request_uri;
	array *request_headers;    /** the con->request.headers without the hop-to-hop headers */
	array *env_headers;        /** transformed request-headers for the backend */

	http_resp *resp;           /** response http headers from backend. */

	plugin_data *p;            /** used by proxy_xxx_get_request_chunk protocol callbacks */

	int is_chunked;            /** is the incoming content chunked (for HTTP) */
	int is_closing;            /** our connection will close when we are done */
	int is_closed;             /** our connection closed.  we might have to restart the request. */
	int have_response_headers; /** finished parsing response headers. */
	int is_request_finished;   /** encoding/decoding this request is finished. */
	int send_response_content; /** 0 if we have to ignore the content-body */
	int do_internal_redirect;  /** 1 if we do a internal redirect to the ->mode = DIRECT */
	int internal_redirect_count;  /** protection against infinite loops */
	int do_new_session;        /** 1 if we want a new proxy session can be created. */
	int do_x_rewrite_backend;  /** 1 if we want to do custom backend balancing */

	buffer *sticky_session;    /** holds name of backend for custom balancing or sticky sessions */

	/**
	 * chunkqueues
	 * - recv         is the decoded response headers and content
	 */
	chunkqueue *recv;

	off_t bytes_read;
	off_t content_length;

	proxy_state_t state;

	time_t connect_start_ts;

	int sent_to_backlog;
} proxy_session;

#endif
