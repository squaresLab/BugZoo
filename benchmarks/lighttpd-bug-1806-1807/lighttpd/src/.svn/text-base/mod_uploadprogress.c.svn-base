#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "base.h"
#include "log.h"
#include "buffer.h"

#include "plugin.h"

#include "response.h"
#include "stat_cache.h"

#define CONFIG_UPLOAD_PROGRESS_URL "upload-progress.progress-url"
#define CONFIG_UPLOAD_PROGRESS_TIMEOUT "upload-progress.remove-timeout"
#define CONFIG_UPLOAD_PROGRESS_DEBUG "upload-progress.debug"

/**
 * uploadprogress for lighttpd
 *
 * no author and contact infos yet? Shamelessly adding...
 *
 * Initial: Jan Kneschke <jan@kneschke.de>
 * Timeout+Status addon: Bjoern Kalkbrenner <terminar@cyberphoria.org> [20070112]
 *
 */

typedef struct {
	buffer     *con_id;
	connection *con;
	int timeout;
	int status;
} connection_map_entry;

typedef struct {
	connection_map_entry **ptr;

	size_t used;
	size_t size;
} connection_map;

/* plugin config for all request/connections */

typedef struct {
	buffer *progress_url;
	unsigned short debug;
	unsigned short remove_timeout;
} plugin_config;

typedef struct {
	PLUGIN_DATA;

	connection_map *con_map;

	plugin_config **config_storage;

	plugin_config conf;
} plugin_data;

/**
 *
 * connection maps
 *
 */

/* init the plugin data */
connection_map *connection_map_init() {
	connection_map *cm;

	cm = calloc(1, sizeof(*cm));

	return cm;
}

void connection_map_free(connection_map *cm) {
	size_t i;
	for (i = 0; i < cm->size; i++) {
		connection_map_entry *cme = cm->ptr[i];

		if (!cme) break;

		if (cme->con_id) {
			buffer_free(cme->con_id);
		}
		free(cme);
	}

	free(cm);
}

connection_map_entry *connection_map_insert(connection_map *cm, connection *con, buffer *con_id) {
	connection_map_entry *cme;
	size_t i;

	if (cm->size == 0) {
		cm->size = 16;
		cm->ptr = malloc(cm->size * sizeof(*(cm->ptr)));
		for (i = 0; i < cm->size; i++) {
			cm->ptr[i] = NULL;
		}
	} else if (cm->used == cm->size) {
		cm->size += 16;
		cm->ptr = realloc(cm->ptr, cm->size * sizeof(*(cm->ptr)));
		for (i = cm->used; i < cm->size; i++) {
			cm->ptr[i] = NULL;
		}
	}

	if (cm->ptr[cm->used]) {
		/* is already alloced, just reuse it */
		cme = cm->ptr[cm->used];
	} else {
		cme = malloc(sizeof(*cme));
	}
	cme->timeout = 0;
	cme->status = 0;
	cme->con_id = buffer_init();
	buffer_copy_string_buffer(cme->con_id, con_id);
	cme->con = con;

	cm->ptr[cm->used++] = cme;

	return cme;
}

connection_map_entry *connection_map_get_connection_entry(connection_map *cm, buffer *con_id) {
	size_t i;

	for (i = 0; i < cm->used; i++) {
		connection_map_entry *cme = cm->ptr[i];

		if (buffer_is_equal(cme->con_id, con_id)) {
			/* found connection */
			return cme;
		}
	}
	return NULL;
}

int connection_map_remove_connection(connection_map *cm, connection_map_entry *entry) {
	size_t i;

	for (i = 0; i < cm->used; i++) {
		connection_map_entry *cme = cm->ptr[i];

		if (cme == entry) {
			/* found connection */
			buffer_reset(cme->con_id);
			cme->timeout=0;
			cme->status=0;
			cme->con = NULL;

			cm->used--;

			/* swap positions with the last entry */
			if (cm->used) {
				cm->ptr[i] = cm->ptr[cm->used];
				cm->ptr[cm->used] = cme;
			}

			return 1;
		}
	}

	return 0;
}

int connection_map_set_timeout(plugin_data *p, connection *con) {
	size_t i;

	if(p->conf.debug) TRACE("set_timeout for connection=%p",con);
	for (i = 0; i < p->con_map->used; i++) {
		connection_map_entry *cme = p->con_map->ptr[i];

		if (cme->con == con) {
			cme->con = NULL;
			
			/* found connection */
			cme->timeout = time(NULL) + p->conf.remove_timeout;
			if(p->conf.debug) TRACE("set_timeout for connection=%p, timeout=%d",con, cme->timeout);

			return 1;
		}
	}

	return 0;
}


void connection_map_clear_timeout_connections(connection_map *cm) {
	size_t i;
	int now_t = time(NULL);

	for (i = 0; i < cm->used; i++) {
		connection_map_entry *cme = cm->ptr[i];

		if (cme->timeout != 0 && cme->timeout < now_t) {
			/* found connection */
			connection_map_remove_connection(cm,cme);
		}
	}
}

buffer *get_tracking_id(plugin_data *p, connection *con) {
	data_string *ds;
	buffer *b = NULL;
	char *qstr=NULL;
	size_t i;

	/* the request has to contain a 32byte ID */
	if (NULL == (ds = (data_string *)array_get_element(con->request.headers, CONST_STR_LEN("X-Progress-ID")))) {
		/* perhaps the POST request is using the querystring to pass the X-Progress-ID */
		if (buffer_is_empty(con->uri.query)) {
			/*
			 * con->uri.query will not be parsed out if a 413 error happens
			 */
			if (NULL != (qstr = strchr(con->request.uri->ptr, '?'))) {
				/** extract query string from request.uri */
				buffer_copy_string(con->uri.query, qstr + 1);
				b = con->uri.query;
			} else {
				return NULL;
			}
		} else {
			b = con->uri.query;
		}
	} else {
		b = ds->value;
	}

	if (b->used != 32 + 1) {
		if (p->conf.debug) ERROR("the Progress-ID has to be 32 characters long, got %d characters", b->used - 1);
		return NULL;
	}

	for (i = 0; i < b->used - 1; i++) {
		char c = b->ptr[i];

		if (!light_isxdigit(c)) {
			if (p->conf.debug) ERROR("only hex-digits are allowed (0-9 + a-f): (ascii: %d)", c);
			return NULL;
		}
	}

	return b;
}

/* init the plugin data */
INIT_FUNC(mod_uploadprogress_init) {
	plugin_data *p;

	UNUSED(srv);

	p = calloc(1, sizeof(*p));

	p->con_map = connection_map_init();

	return p;
}

/* detroy the plugin data */
FREE_FUNC(mod_uploadprogress_free) {
	plugin_data *p = p_d;

	UNUSED(srv);

	if (!p) return HANDLER_GO_ON;

	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			buffer_free(s->progress_url);
			s->remove_timeout=0;

			free(s);
		}
		free(p->config_storage);
	}

	connection_map_free(p->con_map);

	free(p);

	return HANDLER_GO_ON;
}

/* handle plugin config and check values */

SETDEFAULTS_FUNC(mod_uploadprogress_set_defaults) {
	plugin_data *p = p_d;
	size_t i = 0;

	config_values_t cv[] = {
		{ CONFIG_UPLOAD_PROGRESS_URL, NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION },       /* 0 */
		{ CONFIG_UPLOAD_PROGRESS_TIMEOUT, NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },    /* 1 */
		{ CONFIG_UPLOAD_PROGRESS_DEBUG, NULL, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION },    /* 2 */
		{ NULL,                         NULL, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET }
	};

	if (!p) return HANDLER_ERROR;

	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));

	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s;

		s = calloc(1, sizeof(plugin_config));
		s->progress_url    = buffer_init_string("/progress");
		s->remove_timeout  = 60;
		s->debug  = 0;

		cv[0].destination = s->progress_url;
		cv[1].destination = &(s->remove_timeout);
		cv[2].destination = &(s->debug);

		p->config_storage[i] = s;

		if (0 != config_insert_values_global(srv, ((data_config *)srv->config_context->data[i])->value, cv)) {
			return HANDLER_ERROR;
		}
	}

	return HANDLER_GO_ON;
}

static int mod_uploadprogress_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i, j;
	plugin_config *s = p->config_storage[0];

	PATCH_OPTION(progress_url);
	PATCH_OPTION(remove_timeout);
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

			if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_UPLOAD_PROGRESS_URL))) {
				PATCH_OPTION(progress_url);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_UPLOAD_PROGRESS_TIMEOUT))) {
				PATCH_OPTION(remove_timeout);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_UPLOAD_PROGRESS_DEBUG))) {
				PATCH_OPTION(debug);
			}
		}
	}

	return 0;
}

/**
 *
 * the idea:
 *
 * for the first request we check if it is a post-request
 *
 * if no, move out, don't care about them
 *
 * if yes, take the connection structure and register it locally
 * in the progress-struct together with an session-id (md5 ... )
 *
 * if the connections closes, cleanup the entry in the progress-struct
 *
 * a second request can now get the info about the size of the upload,
 * the received bytes
 *
 */

URIHANDLER_FUNC(mod_uploadprogress_uri_handler) {
	plugin_data *p = p_d;
	buffer *tracking_id;
	buffer *b;
	connection_map_entry *post_con_entry = NULL;
	connection_map_entry *map_con_entry = NULL;

	UNUSED(srv);

	if (con->uri.path->used == 0) return HANDLER_GO_ON;

	mod_uploadprogress_patch_connection(srv, con, p);

	switch(con->request.http_method) {
	case HTTP_METHOD_POST:
		/* get the tracker id */
		if (NULL == (tracking_id = get_tracking_id(p, con))) {
			return HANDLER_GO_ON;
		}

		if (NULL == (map_con_entry = connection_map_get_connection_entry(p->con_map,tracking_id))) {
			connection_map_insert(p->con_map, con, tracking_id);
		} else {
			map_con_entry->timeout = 0;
			map_con_entry->status = 0;
			map_con_entry->con = con;
			buffer_copy_string_buffer(map_con_entry->con_id,tracking_id);
		}

		return HANDLER_GO_ON;
	case HTTP_METHOD_GET:
		if (!buffer_is_equal(con->uri.path, p->conf.progress_url)) {
			return HANDLER_GO_ON;
		}

		/* get the tracker id */
		if (NULL == (tracking_id = get_tracking_id(p, con))) {
			return HANDLER_GO_ON;
		}

		buffer_reset(con->physical.path);

		con->file_started = 1;
		con->http_status = 200;
		con->send->is_closed = 1;

		/* send JSON content */

		response_header_overwrite(srv, con, CONST_STR_LEN("Content-Type"), CONST_STR_LEN("text/javascript"));

		/* just an attempt the force the IE/proxies to NOT cache the request */
		response_header_overwrite(srv, con, CONST_STR_LEN("Pragma"), CONST_STR_LEN("no-cache"));
		response_header_overwrite(srv, con, CONST_STR_LEN("Expires"), CONST_STR_LEN("Thu, 19 Nov 1981 08:52:00 GMT"));
		response_header_overwrite(srv, con, CONST_STR_LEN("Cache-Control"),
				CONST_STR_LEN("no-store, no-cache, must-revalidate, post-check=0, pre-check=0"));

		b = chunkqueue_get_append_buffer(con->send);

		/* get the connection */
		if (NULL == (post_con_entry = connection_map_get_connection_entry(p->con_map, tracking_id))) {
			BUFFER_APPEND_STRING_CONST(b, "new Object({ 'state' : 'starting' })\r\n");
			
			return HANDLER_FINISHED;
		} else {
			if(p->conf.debug) TRACE("connection found: con=%p id=%s",post_con_entry->con,tracking_id->ptr);
		}

		/* prepare XML */
		BUFFER_COPY_STRING_CONST(b, "new Object({ 'state' : ");
		
		if (post_con_entry->status == 413) {
			BUFFER_APPEND_STRING_CONST(b, "'error', 'status' : 413");
		} else if (post_con_entry->timeout > 0) {
			buffer_append_string(b, "'done'");
		} else {
			buffer_append_string(b, post_con_entry->con->recv->is_closed ? "'done'" : "'uploading'");
			BUFFER_APPEND_STRING_CONST(b, ", 'size' : ");
			buffer_append_off_t(b, post_con_entry->con->request.content_length == -1 ? 0 : post_con_entry->con->request.content_length);
			BUFFER_APPEND_STRING_CONST(b, ", 'received' : ");
			buffer_append_off_t(b, post_con_entry->con->recv->bytes_in);
		}
		BUFFER_APPEND_STRING_CONST(b, "})\r\n");

		return HANDLER_FINISHED;
	default:
		break;
	}

	return HANDLER_GO_ON;
}

REQUESTDONE_FUNC(mod_uploadprogress_request_done) {
	plugin_data *p = p_d;

	UNUSED(srv);

	if (con->uri.path->used == 0) return HANDLER_GO_ON;
	
	/*
	 * only need to handle the upload request.
	 */
	if (con->request.http_method != HTTP_METHOD_POST) {
		return HANDLER_GO_ON;
	}

	if(p->conf.debug) TRACE("request_done: con=%p, http_method=%d, http_status=%d",con,
			con->request.http_method, con->http_status);
	/*
	 * set timeout on the upload's connection_map_entry.
	 */
	if (!connection_map_set_timeout(p, con)) {
		if(p->conf.debug) TRACE("connection not found??? %p",con);
	}

	return HANDLER_GO_ON;
}

URIHANDLER_FUNC(mod_uploadprogress_response_header)
{
	plugin_data *p = p_d;

	buffer *tracking_id;
	connection_map_entry *map_con_entry = NULL;

	UNUSED(srv);

	/*
	 * we only want to process an 413 (Bad length) error for the upload (POST request)
	 */
	if (con->request.http_method != HTTP_METHOD_POST || con->http_status != 413) {
		return HANDLER_GO_ON;
	}

	if(p->conf.debug) TRACE("response_header: con=%p, http_method=%d, http_status=%d",con,
			con->request.http_method, con->http_status);

	/* get the tracker id */
	if (NULL == (tracking_id = get_tracking_id(p, con))) {
		return HANDLER_GO_ON;
	}

	if (NULL == (map_con_entry = connection_map_get_connection_entry(p->con_map,tracking_id))) {
		/* add entry if it doesn't exists */
		if (NULL == (map_con_entry = connection_map_insert(p->con_map, con, tracking_id))) {
			return HANDLER_GO_ON;
		}
	} else {
		map_con_entry->con = con;
		buffer_copy_string_buffer(map_con_entry->con_id,tracking_id);
	}

	//ok, found our entries, setting 413 here for status
	map_con_entry->timeout = time(NULL) + p->conf.remove_timeout;
	map_con_entry->status = 413;
	
	return HANDLER_GO_ON;
}

TRIGGER_FUNC(mod_uploadprogress_trigger)
{
	plugin_data *p = p_d;

	UNUSED(srv);

	if ((srv->cur_ts % 60) != 0) return HANDLER_GO_ON;

	connection_map_clear_timeout_connections(p->con_map);

	return HANDLER_GO_ON;
}

/* this function is called at dlopen() time and inits the callbacks */

LI_EXPORT int mod_uploadprogress_plugin_init(plugin *p) {
	p->version     = LIGHTTPD_VERSION_ID;
	p->name        = buffer_init_string("uploadprogress");

	p->init        = mod_uploadprogress_init;
	p->handle_uri_clean = mod_uploadprogress_uri_handler;
	p->handle_response_done  = mod_uploadprogress_request_done;
	p->set_defaults  = mod_uploadprogress_set_defaults;
	p->cleanup     = mod_uploadprogress_free;
	p->handle_trigger = mod_uploadprogress_trigger;
	p->handle_response_header = mod_uploadprogress_response_header;
	
	p->data        = NULL;

	return 0;
}
