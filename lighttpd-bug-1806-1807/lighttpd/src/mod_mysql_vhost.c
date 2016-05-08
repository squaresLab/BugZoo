#include <stdio.h>
#include <errno.h>
#include <fcntl.h>
#include <string.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef HAVE_MYSQL_H
# ifdef HAVE_LIBMYSQL
#  define HAVE_MYSQL
# endif
#endif

#ifdef HAVE_MYSQL
#include <mysql.h>
#endif

#include "plugin.h"
#include "log.h"

#include "stat_cache.h"
#include "sys-files.h"

#include "mod_sql_vhost_core.h"

#ifdef HAVE_MYSQL

#define CORE_PLUGIN "mod_sql_vhost_core"

typedef struct {
	MYSQL 	*mysql;

	buffer  *mysql_pre;
	buffer  *mysql_post;

	mod_sql_vhost_core_plugin_config *core;
} plugin_config;

/* global plugin data */
typedef struct {
	PLUGIN_DATA;

	buffer 	*tmp_buf;

	plugin_config **config_storage;

	plugin_config conf;
} plugin_data;

SQLVHOST_BACKEND_GETVHOST(mod_mysql_vhost_get_vhost);

/* init the plugin data */
INIT_FUNC(mod_mysql_vhost_init) {
	plugin_data *p;

	UNUSED(srv);

	p = calloc(1, sizeof(*p));

	p->tmp_buf = buffer_init();

	return p;
}

/* cleanup the plugin data */
SERVER_FUNC(mod_mysql_vhost_cleanup) {
	plugin_data *p = p_d;

	UNUSED(srv);

	if (!p) return HANDLER_GO_ON;

	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			if (!s) continue;

			mysql_close(s->mysql);

			buffer_free(s->mysql_pre);
			buffer_free(s->mysql_post);

			free(s);
		}
		free(p->config_storage);
	}
	buffer_free(p->tmp_buf);

	free(p);

	return HANDLER_GO_ON;
}

/* set configuration values */
SERVER_FUNC(mod_mysql_vhost_set_defaults) {
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

		s->mysql = NULL;

		s->mysql_pre = buffer_init();
		s->mysql_post = buffer_init();

		p->config_storage[i] = s;

		/* check if we are the plugin for this backend */
		if (!buffer_is_equal_string(s->core->backend, CONST_STR_LEN("mysql"))) continue;

		/* attach us to the core-plugin */
		s->core->backend_data = p;
		s->core->get_vhost = mod_mysql_vhost_get_vhost;

		sel = buffer_init();
		buffer_copy_string_buffer(sel, s->core->select_vhost);

		if (sel->used && (qmark = index(sel->ptr, '?'))) {
			*qmark = '\0';
			buffer_copy_string(s->mysql_pre, sel->ptr);
			buffer_copy_string(s->mysql_post, qmark+1);
		} else {
			buffer_copy_string_buffer(s->mysql_pre, sel);
		}
		buffer_free(sel);

		/* required:
		 * - username
		 * - database
		 *
		 * optional:
		 * - password, default: empty
		 * - socket, default: mysql default
		 * - hostname, if set overrides socket
		 * - port, default: 3306
		 */

		/* all have to be set */
		if (!(buffer_is_empty(s->core->user) ||
		      buffer_is_empty(s->core->db))) {

			int fd;

			if (NULL == (s->mysql = mysql_init(NULL))) {
				log_error_write(srv, __FILE__, __LINE__, "s", "mysql_init() failed, exiting...");

				return HANDLER_ERROR;
			}
#define FOO(x) (s->core->x->used ? s->core->x->ptr : NULL)

			s->mysql->free_me = 1;

			if (!mysql_real_connect(s->mysql, FOO(hostname), FOO(user), FOO(pass),
						FOO(db), s->core->port, FOO(sock), 0)) {
				log_error_write(srv, __FILE__, __LINE__, "s", mysql_error(s->mysql));

				return HANDLER_ERROR;
			}
#undef FOO
			/* set close_on_exec for mysql the hard way */
			/* Note: this only works as it is done during startup, */
			/* otherwise we cannot be sure that mysql is fd i-1 */
			if (-1 == (fd = open("/dev/null", 0))) {
				close(fd);
				fcntl(fd-1, F_SETFD, FD_CLOEXEC);
			}
		}
	}



        return HANDLER_GO_ON;
}

static int mod_mysql_vhost_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i;
	plugin_config *s = p->config_storage[0];

	PATCH_OPTION(mysql_pre);
	PATCH_OPTION(mysql_post);
	PATCH_OPTION(mysql);

	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];

		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;

		if (s->mysql) {
			PATCH_OPTION(mysql);
			PATCH_OPTION(mysql_pre);
			PATCH_OPTION(mysql_post);
		}
	}

	return 0;
}

/**
 * get the vhost info from the database
 */
SQLVHOST_BACKEND_GETVHOST(mod_mysql_vhost_get_vhost) {
	plugin_data *p = p_d;

	UNUSED(host);

	unsigned  cols;
	MYSQL_ROW row;
	MYSQL_RES *result = NULL;

	/* no host specified? */
	if (!con->uri.authority->used) return HANDLER_ERROR;

	mod_mysql_vhost_patch_connection(srv, con, p);

	if (!p->conf.mysql) return HANDLER_ERROR;

	/* build and run SQL query */
	buffer_copy_string_buffer(p->tmp_buf, p->conf.mysql_pre);
	if (p->conf.mysql_post->used) {
		buffer_append_string_buffer(p->tmp_buf, con->uri.authority);
		buffer_append_string_buffer(p->tmp_buf, p->conf.mysql_post);
	}
   	if (mysql_query(p->conf.mysql, BUF_STR(p->tmp_buf))) {
		ERROR("mysql_query(%s) failed: %s", BUF_STR(p->tmp_buf), mysql_error(p->conf.mysql));

		mysql_free_result(result);
		return HANDLER_ERROR;
	}
	result = mysql_store_result(p->conf.mysql);
	cols = mysql_num_fields(result);
	row = mysql_fetch_row(result);

	if (!row || cols < 1) {
		/* no such virtual host */
		mysql_free_result(result);
		return HANDLER_ERROR;
	}

	buffer_copy_string(docroot, row[0]);

	mysql_free_result(result);

	return HANDLER_GO_ON;
}

/* this function is called at dlopen() time and inits the callbacks */
int mod_mysql_vhost_plugin_init(plugin *p) {
	data_string *ds;

	p->version     = LIGHTTPD_VERSION_ID;
	p->name        			= buffer_init_string("mysql_vhost");

	p->init        			= mod_mysql_vhost_init;
	p->cleanup     			= mod_mysql_vhost_cleanup;

	p->set_defaults			= mod_mysql_vhost_set_defaults;

	ds = data_string_init();
	buffer_copy_string(ds->value, CORE_PLUGIN);
	array_insert_unique(p->required_plugins, (data_unset *)ds);

	return 0;
}
#else
/* we don't have mysql support, this plugin does nothing */
int mod_mysql_vhost_plugin_init(plugin *p) {
	p->version     = LIGHTTPD_VERSION_ID;
	p->name        			= buffer_init_string("mysql_vhost");

	return 0;
}
#endif
