#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "plugin.h"
#include "log.h"
#include "sys-files.h"

#include "stat_cache.h"

#include "mod_sql_vhost_core.h"

#define plugin_data mod_sql_vhost_core_plugin_data
#define plugin_config mod_sql_vhost_core_plugin_config

typedef struct {
	buffer *docroot;
	time_t added_ts;

	time_t ttl;
} cached_vhost;

/* init the plugin data */
INIT_FUNC(mod_sql_vhost_core_init) {
	plugin_data *p;

	UNUSED(srv);

	p = calloc(1, sizeof(*p));

	p->docroot = buffer_init();
	p->host = buffer_init();

	return p;
}

/* cleanup the plugin data */
SERVER_FUNC(mod_sql_vhost_core_cleanup) {
	plugin_data *p = p_d;

	UNUSED(srv);

	if (!p) return HANDLER_GO_ON;

	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			if (!s) continue;

			buffer_free(s->db);
			buffer_free(s->user);
			buffer_free(s->pass);
			buffer_free(s->sock);
			buffer_free(s->backend);
			buffer_free(s->hostname);
			buffer_free(s->select_vhost);

			g_hash_table_destroy(s->vhost_table);

			free(s);
		}
		free(p->config_storage);
	}
	buffer_free(p->docroot);
	buffer_free(p->host);

	free(p);

	return HANDLER_GO_ON;
}

cached_vhost *cached_vhost_init(void) {
	cached_vhost *vhost;

	vhost = g_new0(cached_vhost, 1);

	return vhost;
}

void cached_vhost_free(cached_vhost *vhost) {
	if (!vhost) return;

	if (vhost->docroot) buffer_free(vhost->docroot);

	g_free(vhost);
}

void cached_vhost_free_hash(gpointer vhost) {
	cached_vhost_free(vhost);
}

uint buffer_hash(gconstpointer key) {
	buffer *b = (buffer *)key;

	return g_str_hash(b->ptr);
}

gboolean buffer_hash_equal(gconstpointer _a, gconstpointer _b) {
	buffer *a = (buffer *)_a;
	buffer *b = (buffer *)_b;

	return buffer_is_equal(a, b);
}

void buffer_hash_free(gpointer d) {
	buffer *b = d;

	buffer_free(b);
}

#define CONFIG_CACHE_TTL "sql-vhost.cache-ttl"
#define CONFIG_DEBUG     "sql-vhost.debug"

/* set configuration values */
SERVER_FUNC(mod_sql_vhost_core_set_defaults) {
	plugin_data *p = p_d;

	size_t i = 0;

	config_values_t cv[] = {
		{ "sql-vhost.db",	NULL, T_CONFIG_STRING, 	T_CONFIG_SCOPE_SERVER }, /* 0 * e.g. vhost */
		{ "sql-vhost.user",	NULL, T_CONFIG_STRING, 	T_CONFIG_SCOPE_SERVER }, /* 1 * lighty */
		{ "sql-vhost.pass",	NULL, T_CONFIG_STRING, 	T_CONFIG_SCOPE_SERVER }, /* 2 * secrect */
		{ "sql-vhost.sock",	NULL, T_CONFIG_STRING, 	T_CONFIG_SCOPE_SERVER }, /* 3 * /tmp/mysql.sock */
		{ "sql-vhost.select-vhost", NULL, T_CONFIG_STRING, 	T_CONFIG_SCOPE_SERVER }, /* 4 * SELECT ... FROM hosts WHERE hostname = ? */
		{ "sql-vhost.hostname", NULL, T_CONFIG_STRING,  T_CONFIG_SCOPE_SERVER }, /* 5 * 127.0.0.1 */
		{ "sql-vhost.port",     NULL, T_CONFIG_SHORT,   T_CONFIG_SCOPE_SERVER }, /* 6 * 3306 */
		{ "sql-vhost.backend",  NULL, T_CONFIG_STRING,  T_CONFIG_SCOPE_SERVER }, /* 7 * mysql */

		/* backward compat */
		{ "mysql-vhost.db",	NULL, T_CONFIG_STRING, 	T_CONFIG_SCOPE_SERVER }, /* 8 == 0 */
		{ "mysql-vhost.user",	NULL, T_CONFIG_STRING, 	T_CONFIG_SCOPE_SERVER }, /* 9 == 1 */
		{ "mysql-vhost.pass",	NULL, T_CONFIG_STRING, 	T_CONFIG_SCOPE_SERVER }, /* 10 == 2 */
		{ "mysql-vhost.sock",	NULL, T_CONFIG_STRING, 	T_CONFIG_SCOPE_SERVER }, /* 11 == 3 */
		{ "mysql-vhost.sql",	NULL, T_CONFIG_STRING, 	T_CONFIG_SCOPE_SERVER }, /* 12 == 4 */
		{ "mysql-vhost.hostname", NULL, T_CONFIG_STRING,T_CONFIG_SCOPE_SERVER }, /* 13 == 5 */
		{ "mysql-vhost.port",   NULL, T_CONFIG_SHORT,   T_CONFIG_SCOPE_SERVER }, /* 14 == 6 */

		{ CONFIG_CACHE_TTL,     NULL, T_CONFIG_SHORT,   T_CONFIG_SCOPE_SERVER }, /* 15 * 60 */
		{ CONFIG_DEBUG,         NULL, T_CONFIG_SHORT,   T_CONFIG_SCOPE_SERVER }, /* 15 * 60 */

		{ NULL,			NULL, T_CONFIG_UNSET,	T_CONFIG_SCOPE_UNSET }
	};

	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));

	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s;

		s = calloc(1, sizeof(plugin_config));
		s->db = buffer_init();
		s->user = buffer_init();
		s->pass = buffer_init();
		s->sock = buffer_init();
		s->hostname = buffer_init();
		s->backend = buffer_init();
		s->port   = 0;               /* default port for mysql */
		s->select_vhost = buffer_init();
		s->backend_data = NULL;
		s->vhost_table = g_hash_table_new_full(buffer_hash, buffer_hash_equal, buffer_hash_free, cached_vhost_free_hash);
		s->cache_ttl = 60;
		s->debug = 0;

		cv[0].destination = s->db;
		cv[1].destination = s->user;
		cv[2].destination = s->pass;
		cv[3].destination = s->sock;
		cv[4].destination = s->select_vhost;
		cv[5].destination = s->hostname;
		cv[6].destination = &(s->port);
		cv[7].destination = s->backend;

		/* backend compat */
		cv[8].destination = cv[0].destination;
		cv[9].destination = cv[1].destination;
		cv[10].destination = cv[2].destination;
		cv[11].destination = cv[3].destination;
		cv[12].destination = cv[4].destination;
		cv[13].destination = cv[5].destination;
		cv[14].destination = cv[6].destination;
		
		cv[15].destination = &(s->cache_ttl);
		cv[16].destination = &(s->debug);

		p->config_storage[i] = s;

		if (config_insert_values_global(srv,
			((data_config *)srv->config_context->data[i])->value,
			cv)) return HANDLER_ERROR;

		/* we only parse the config, the backend plugin will patch itself into the plugin-struct */
	}

	return HANDLER_GO_ON;
}

static int mod_sql_vhost_core_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i, j;
	plugin_config *s = p->config_storage[0];

	PATCH_OPTION(backend_data);
	PATCH_OPTION(get_vhost);
	PATCH_OPTION(vhost_table);
	PATCH_OPTION(cache_ttl);
	PATCH_OPTION(debug);

	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];

		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;

		if (s->backend_data) {
			PATCH_OPTION(backend_data);
			PATCH_OPTION(get_vhost);
			PATCH_OPTION(vhost_table);
		}

		for (j = 0; j < dc->value->used; j++) {
			data_unset *du = dc->value->data[j];

			if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_CACHE_TTL))) {
				PATCH_OPTION(cache_ttl);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEBUG))) {
				PATCH_OPTION(debug);
			}
		}
	}

	return 0;
}

/* handle document root request */
CONNECTION_FUNC(mod_sql_vhost_core_handle_docroot) {
	plugin_data *p = p_d;
	stat_cache_entry *sce;
	cached_vhost *vhost = NULL;

	/* no host specified? */
	if (!con->uri.authority->used) return HANDLER_GO_ON;

	mod_sql_vhost_core_patch_connection(srv, con, p);

	/* do we have backend ? */
	if (!p->conf.get_vhost) return HANDLER_GO_ON;

	if (p->conf.cache_ttl == 0 ||                                                         /* 1. we don't cache */
	    NULL == (vhost = g_hash_table_lookup(p->conf.vhost_table, con->uri.authority)) || /* 2. check if the host is already known */
	    srv->cur_ts - vhost->added_ts >= p->conf.cache_ttl) {                             /* 3. the cache value is old */
		/* ask the backend for the data */
		if (p->conf.debug) TRACE("cache-miss for %s", BUF_STR(con->uri.authority));

		if (HANDLER_GO_ON != p->conf.get_vhost(srv, con, p->conf.backend_data, p->docroot, p->host)) {
			return HANDLER_GO_ON;
		}

		if (p->conf.cache_ttl > 0) {
			/* check if the cache-ttl is > 0, otherwise we would always trash the cache-entry */
			if (vhost) {
				if (p->conf.debug) TRACE("refreshing %s: %s", BUF_STR(con->uri.authority), BUF_STR(p->docroot));
				buffer_copy_string_buffer(vhost->docroot, p->docroot);
				vhost->added_ts = srv->cur_ts;
			} else {
				buffer *key;
	
				vhost = g_new0(cached_vhost, 1);
				vhost->docroot  = buffer_init_buffer(p->docroot);
				vhost->added_ts = srv->cur_ts;
				vhost->ttl      = p->conf.cache_ttl;
	
				key = buffer_init_buffer(con->uri.authority); 
				
				if (p->conf.debug) TRACE("adding %s: %s", BUF_STR(key), BUF_STR(vhost->docroot));
	
				g_hash_table_insert(p->conf.vhost_table, key, vhost);
	
				g_assert(g_hash_table_lookup(p->conf.vhost_table, key));
			}
		}
	} else {
		if (p->conf.debug) TRACE("cache-hit for %s: %s", BUF_STR(vhost->docroot), BUF_STR(con->uri.authority));
		
		buffer_copy_string_buffer(p->docroot, vhost->docroot);
	}

	if (HANDLER_ERROR == stat_cache_get_entry(srv, con, p->docroot, &sce)) {
		ERROR("stat_cache_get_entry(%s) failed: %s", BUF_STR(p->docroot), strerror(errno));

		return HANDLER_GO_ON;
	}
	if (!S_ISDIR(sce->st.st_mode)) {
		ERROR("%s is not a dir", BUF_STR(p->docroot));

		return HANDLER_GO_ON;
	}

	buffer_copy_string_buffer(con->server_name, p->host);
	buffer_copy_string_buffer(con->physical.doc_root, p->docroot);

	return HANDLER_GO_ON;
}

static gboolean cached_vhost_remove_expired(gpointer _key, gpointer _val, gpointer data) {
	buffer *key       = _key;
	cached_vhost *val = _val;
	server *srv       = data;

	return (srv->cur_ts - val->added_ts > val->ttl);
}

TRIGGER_FUNC(mod_sql_vhost_core_trigger) {
	plugin_data *p = p_d;
	size_t i;

	/* test once every 10 seconds */
	if (srv->cur_ts % 10 != 0) return HANDLER_GO_ON;

	/* cleanup all caches */
	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s = p->config_storage[i];

		if (s->vhost_table) {
			g_hash_table_foreach_remove(s->vhost_table, cached_vhost_remove_expired, srv);
		}
	}

	return HANDLER_GO_ON;
}

/* this function is called at dlopen() time and inits the callbacks */
int mod_sql_vhost_core_plugin_init(plugin *p) {
	p->version     = LIGHTTPD_VERSION_ID;
	p->name        			= buffer_init_string("mod_sql_vhost_core");

	p->init        			= mod_sql_vhost_core_init;
	p->cleanup     			= mod_sql_vhost_core_cleanup;

	p->set_defaults			= mod_sql_vhost_core_set_defaults;
	p->handle_docroot  		= mod_sql_vhost_core_handle_docroot;

	return 0;
}

