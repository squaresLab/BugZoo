#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <stdbool.h>
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef HAVE_LIBPQ_FE_H
# ifdef HAVE_LIBPQ
#  define HAVE_POSTGRESQL
# endif
#endif

#ifdef HAVE_POSTGRESQL
#include <glib.h>
#include <libpq-fe.h>
#include <time.h>
#endif

#include "plugin.h"
#include "log.h"

#include "stat_cache.h"
#include "sys-files.h"

#include "mod_sql_vhost_core.h"

#ifdef HAVE_POSTGRESQL
// Define a couple constants so the cache expires and we
// do a countdown for when to do some cleanup.

typedef struct {
	PGconn **pconn;
	PGconn *conn;

	buffer  *postgresql_pre;
	buffer  *postgresql_post;

	buffer  *conninfo;

	mod_sql_vhost_core_plugin_config *core;
} plugin_config;

/* global plugin data */
typedef struct {
	PLUGIN_DATA;

	buffer  *tmp_buf;

	plugin_config **config_storage;

	plugin_config conf;
} plugin_data;

#define CORE_PLUGIN "mod_sql_vhost_core"

SQLVHOST_BACKEND_GETVHOST(mod_postgresql_vhost_get_vhost);

/* init the plugin data */
INIT_FUNC(mod_postgresql_vhost_init) {
	plugin_data *p;
	UNUSED(srv);

	p = calloc(1, sizeof(*p));

	p->tmp_buf = buffer_init();

	return p;
}

/* cleanup the plugin data */
SERVER_FUNC(mod_postgresql_vhost_cleanup) {
	plugin_data *p = p_d;

	UNUSED(srv);

	if (!p) return HANDLER_GO_ON;

	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			if (!s) continue;

			PQfinish(s->conn);
			buffer_free(s->postgresql_pre);
			buffer_free(s->postgresql_post);
			buffer_free(s->conninfo);

			free(s);
		}
		free(p->config_storage);
	}
	buffer_free(p->tmp_buf);

	free(p);

	return HANDLER_GO_ON;
}


/* set configuration values */
SERVER_FUNC(mod_postgresql_vhost_set_defaults) {
	plugin_data *p = p_d;
	mod_sql_vhost_core_plugin_data *core_config;

	size_t i = 0;

	/* our very own plugin storage, one entry for each conditional
	 *
	 * srv->config_context->used is the number of conditionals
	 * */
	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));

	/* get the config of the core-plugin */
	core_config = plugin_get_config(srv, CORE_PLUGIN);

	/* walk through all conditionals and check for assignments */
	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s;
		buffer *sel;
		char *qmark;

		/* get the config from the core plugin for this conditional-context */
		s = calloc(1, sizeof(plugin_config));

		s->core = core_config->config_storage[i];
		s->conn = NULL;
		s->pconn = &(s->conn);

		s->postgresql_pre = buffer_init();
		s->postgresql_post = buffer_init();
		s->conninfo = buffer_init();

		p->config_storage[i] = s;

		/* check if we are the plugin for this backend */
		if (!buffer_is_equal_string(s->core->backend, CONST_STR_LEN("postgresql"))) continue;

		/* attach us to the core-plugin */
		s->core->backend_data = p;
		s->core->get_vhost = mod_postgresql_vhost_get_vhost;

		sel = buffer_init();
		buffer_copy_string_buffer(sel, s->core->select_vhost);

		if (sel->used && (qmark = index(sel->ptr, '?'))) {
			*qmark = '\0';
			buffer_copy_string(s->postgresql_pre, sel->ptr);
			buffer_copy_string(s->postgresql_post, qmark+1);
		} else {
			buffer_copy_string_buffer(s->postgresql_pre, sel);
		}
		buffer_free(sel);

		/* see if we can build our connection string based on the parts we know from the config
		 *
		 * "host=/tmp dbname=lighttpd user=lighttpd"
		 * */

		BUFFER_APPEND_STRING_CONST(s->conninfo, "host=");
		buffer_append_string_buffer(s->conninfo, s->core->hostname);

		BUFFER_APPEND_STRING_CONST(s->conninfo, " ");
		BUFFER_APPEND_STRING_CONST(s->conninfo, "dbname=");
		buffer_append_string_buffer(s->conninfo, s->core->db);

		BUFFER_APPEND_STRING_CONST(s->conninfo, " ");
		BUFFER_APPEND_STRING_CONST(s->conninfo, "user=");
		buffer_append_string_buffer(s->conninfo, s->core->user);

	}
	
	return HANDLER_GO_ON;
}


static int mod_postgresql_vhost_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i;
	plugin_config *s = p->config_storage[0];

	PATCH_OPTION(postgresql_pre);
	PATCH_OPTION(postgresql_post);
	PATCH_OPTION(conn);
	PATCH_OPTION(pconn);
	PATCH_OPTION(conninfo);
	PATCH_OPTION(core);

	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];

		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;

		if (!buffer_is_equal_string(s->core->backend, CONST_STR_LEN("postgresql"))) continue;

		PATCH_OPTION(pconn);
		PATCH_OPTION(conn);
		PATCH_OPTION(conninfo);
		PATCH_OPTION(postgresql_pre);
		PATCH_OPTION(postgresql_post);
		PATCH_OPTION(core);
	}

	return 0;
}

/*
 * get the vhost info from the database
 */
SQLVHOST_BACKEND_GETVHOST(mod_postgresql_vhost_get_vhost) {
	plugin_data *p = p_d;
	int nFields;
	PGresult   *result;
	gchar *field;

	/* no host specified? */
	if (buffer_is_empty(con->uri.authority)) return HANDLER_ERROR;

	mod_postgresql_vhost_patch_connection(srv, con, p);

	if (buffer_is_empty(p->conf.conninfo)) return HANDLER_ERROR;

	/**
	 * try to connect the pg-server
	 */
	if (p->conf.conn == NULL) {
		if (p->conf.core->debug) TRACE("connecting to postgres: %s", BUF_STR(p->conf.conninfo));

		if (NULL == (p->conf.conn = PQconnectdb(BUF_STR(p->conf.conninfo)))) {
			ERROR("%s", "postgresql malloc failure");

			return HANDLER_ERROR;
		}

		/* we have to update the pointer in the conditional cache too */
		*(p->conf.pconn) = p->conf.conn;

		/* For when we move to Async requests
		* PQsetnonblocking(s->conn,1);
		*/

		if (CONNECTION_BAD == PQstatus(p->conf.conn)) {
			/* Even if bad connection. maybe next time it can be fixed
			*/
			ERROR("Bad connection for '%s': %s", BUF_STR(p->conf.conninfo), PQerrorMessage(p->conf.conn));
			
			PQfinish(p->conf.conn);

			p->conf.conn = NULL;

			return HANDLER_ERROR;
		}

		if (PQstatus(p->conf.conn) != CONNECTION_OK){
			ERROR("PQconnectdb() failed: %s", PQstatus(p->conf.conn));

			PQfinish(p->conf.conn);

			p->conf.conn = NULL;

			return HANDLER_ERROR;
		}
	}

	/**
	 *  TODO: Change to a stored proc to simiplify this 
	 * build and run SQL query
	 */
	if (PQstatus(p->conf.conn) != CONNECTION_OK) {
		PQreset(p->conf.conn);
	}

	buffer_copy_string_buffer(p->tmp_buf, p->conf.postgresql_pre);
	if (p->conf.postgresql_post->used) {
		buffer_append_string_buffer(p->tmp_buf, con->uri.authority);
		buffer_append_string_buffer(p->tmp_buf, p->conf.postgresql_post);
	}

	result = PQexec(p->conf.conn, p->tmp_buf->ptr);

	/**
	 *  For Async requests. Database will block/slow down your daemon
	 * result = PQsendQuery(p->conf.conn, p->tmp_buf->ptr);
	 */
	if (result == NULL) {
		ERROR("PQexec(%s) failed: %s", BUF_STR(p->tmp_buf), PQerrorMessage(p->conf.conn));
		return HANDLER_ERROR;
	}

	if (PQresultStatus(result) != PGRES_TUPLES_OK) {
		ERROR("PQresultStatus(%s): %s", BUF_STR(p->tmp_buf), PQerrorMessage(p->conf.conn));

		PQclear(result);

		return HANDLER_ERROR;
	}
	/**
	 * FIXME: 
	 * We checked for tupels already, but will add more sanity
	 */
	nFields = PQnfields(result);
	if (PQntuples(result) < 1 || nFields < 1 ||
		(field = PQgetvalue(result, 0, 0)) == NULL || !*field) {
		/* no such virtual host */
		PQclear(result);

		return HANDLER_ERROR;
	}

	buffer_copy_string(docroot, field);

	PQclear(result);

	return HANDLER_GO_ON;
}

/* this function is called at dlopen() time and inits the callbacks */
int mod_postgresql_vhost_plugin_init(plugin *p) {
	data_string *ds;
	p->version	= LIGHTTPD_VERSION_ID;
	p->name		= buffer_init_string("postgresql_vhost");
	p->init		= mod_postgresql_vhost_init;
	p->cleanup	= mod_postgresql_vhost_cleanup;
	p->set_defaults	= mod_postgresql_vhost_set_defaults;

	ds = data_string_init();

	buffer_copy_string(ds->value, CORE_PLUGIN);
	array_insert_unique(p->required_plugins, (data_unset *)ds);

	return 0;
}
#else
/* we don't have postgresql support, this plugin does nothing */
int mod_postgresql_vhost_plugin_init(plugin *p) {
	p->version	= LIGHTTPD_VERSION_ID;
	p->name		= buffer_init_string("postgresql_vhost");

	return 0;
}
#endif
