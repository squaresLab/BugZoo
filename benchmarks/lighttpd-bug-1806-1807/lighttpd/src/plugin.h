#ifndef _PLUGIN_H_
#define _PLUGIN_H_

#include "settings.h"
#include "base.h"
#include "buffer.h"



#define SERVER_FUNC(x) \
		LI_EXPORT handler_t x(server *srv, void *p_d)

#define CONNECTION_FUNC(x) \
		LI_EXPORT handler_t x(server *srv, connection *con, void *p_d)

#define INIT_FUNC(x) \
		LI_EXPORT void * x(server *srv)
/*
 * The PATCH_OPTION() macro is used in the patch_connection() functions
 * of the modules to update the config object for the current request.
 */
#define PATCH_OPTION(x) \
		p->conf.x = s->x

#define FREE_FUNC          SERVER_FUNC
#define TRIGGER_FUNC       SERVER_FUNC
#define SETDEFAULTS_FUNC   SERVER_FUNC
#define SIGHUP_FUNC        SERVER_FUNC

#define SUBREQUEST_FUNC    CONNECTION_FUNC
#define JOBLIST_FUNC       CONNECTION_FUNC
#define PHYSICALPATH_FUNC  CONNECTION_FUNC
#define REQUESTDONE_FUNC   CONNECTION_FUNC
#define URIHANDLER_FUNC    CONNECTION_FUNC

#define PLUGIN_DATA        size_t id

/**
 * we have 4 states on the connection:
 * - read-header
 * - read-content
 * - write-header
 * - write-content
 */

typedef struct {
	size_t version;

	buffer *name; /* name of the plugin */

	void *(* init)                       (server *srv);
	handler_t (* set_defaults)           (server *srv, void *p_d);
	handler_t (* cleanup)                (server *srv, void *p_d);
	                                                                                   /* is called ... */
	handler_t (* handle_trigger)         (server *srv, void *p_d);                     /* once a second */
	handler_t (* handle_sighup)          (server *srv, void *p_d);                     /* at a signup */

	handler_t (* handle_uri_raw)         (server *srv, connection *con, void *p_d);    /* after uri_raw is set (mod_rewrite) */
	handler_t (* handle_uri_clean)       (server *srv, connection *con, void *p_d);    /* after uri is set (mod_access, mod_auth) */
	handler_t (* handle_docroot)         (server *srv, connection *con, void *p_d);    /* getting the document-root (e.g. mod_simple_vhost) */
	handler_t (* handle_physical)        (server *srv, connection *con, void *p_d);    /* mapping url to physical path (e.g. mod_alias, mod_proxy_core) */
	handler_t (* handle_start_backend)   (server *srv, connection *con, void *p_d);    /* file exists locally (e.g. mod_staticfile) */
	handler_t (* handle_send_request_content)(server *srv, connection *con, void *p_d); /* a handler for the request content */
	handler_t (* handle_response_header) (server *srv, connection *con, void *p_d);    /* a handler for the request content */
	handler_t (* handle_read_response_content)(server *srv, connection *con, void *p_d); /* read the content from the source and push it to the next queue */
	handler_t (* handle_filter_response_content)(server *srv, connection *con, void *p_d); /* apply filters to response content (compression/chunk encoding/ etc..) */
	handler_t (* handle_response_done)   (server *srv, connection *con, void *p_d);    /* after the response is sent (e.g. mod_accesslog) */
	handler_t (* connection_reset)       (server *srv, connection *con, void *p_d);    /* end of a request-response cycle (mod_acceslog, mod_proxy_core) */
	handler_t (* handle_connection_close)(server *srv, connection *con, void *p_d);    /* at the end of a connection [remove-me ?] */
	handler_t (* handle_joblist)         (server *srv, connection *con, void *p_d);    /* after all events are handled [remove-me ?] */

	void *data;

	/* dlopen handle */
	void *lib;

	array *required_plugins;
} plugin;

LI_EXPORT int plugins_load(server *srv);
LI_EXPORT void plugins_free(server *srv);

LI_EXPORT handler_t plugins_call_handle_uri_raw(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_handle_uri_clean(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_handle_docroot(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_handle_physical(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_handle_start_backend(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_handle_send_request_content(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_handle_response_header(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_handle_read_response_content(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_handle_filter_response_content(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_handle_response_done(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_handle_connection_close(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_handle_joblist(server *srv, connection *con);
LI_EXPORT handler_t plugins_call_connection_reset(server *srv, connection *con);

LI_EXPORT handler_t plugins_call_handle_trigger(server *srv);
LI_EXPORT handler_t plugins_call_handle_sighup(server *srv);

LI_EXPORT handler_t plugins_call_init(server *srv);
LI_EXPORT handler_t plugins_call_set_defaults(server *srv);
LI_EXPORT handler_t plugins_call_cleanup(server *srv);

LI_EXPORT int config_insert_values_global(server *srv, array *ca, const config_values_t *cv);
LI_EXPORT int config_insert_values_internal(server *srv, array *ca, const config_values_t *cv);
LI_EXPORT int config_setup_connection(server *srv, connection *con);
LI_EXPORT int config_patch_connection(server *srv, connection *con, comp_key_t comp);
LI_EXPORT int config_check_cond(server *srv, connection *con, data_config *dc);
LI_EXPORT int config_append_cond_match_buffer(connection *con, data_config *dc, buffer *buf, int n);
LI_EXPORT int config_exec_pcre_keyvalue_buffer(connection *con, pcre_keyvalue_buffer *kvb, data_config *context, buffer *match_buf, buffer *result);

LI_EXPORT void* plugin_get_config(server *srv, const char *name);

#endif
