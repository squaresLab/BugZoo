#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "base.h"
#include "log.h"
#include "buffer.h"

#include "plugin.h"

#include "sys-strings.h"

#define PLUGIN_NAME "access"

#define CONFIG_URL_ACCESS_DENY "url.access-deny"
#define CONFIG_ACCESS_DENY_ALL PLUGIN_NAME ".deny-all"

typedef struct {
	array *access_deny;

	unsigned short deny_all;
} plugin_config;

typedef struct {
	PLUGIN_DATA;

	plugin_config **config_storage;

	plugin_config conf;
} plugin_data;

INIT_FUNC(mod_access_init) {
	plugin_data *p;

	UNUSED(srv);

	p = calloc(1, sizeof(*p));

	return p;
}

FREE_FUNC(mod_access_free) {
	plugin_data *p = p_d;

	UNUSED(srv);

	if (!p) return HANDLER_GO_ON;

	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			array_free(s->access_deny);

			free(s);
		}
		free(p->config_storage);
	}

	free(p);

	return HANDLER_GO_ON;
}

SETDEFAULTS_FUNC(mod_access_set_defaults) {
	plugin_data *p = p_d;
	size_t i = 0;

	config_values_t cv[] = {
		{ CONFIG_URL_ACCESS_DENY,        NULL, T_CONFIG_ARRAY, T_CONFIG_SCOPE_CONNECTION },
		{ CONFIG_ACCESS_DENY_ALL,        NULL, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION },
		{ NULL,                          NULL, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET }
	};

	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));

	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s;

		s = calloc(1, sizeof(plugin_config));
		s->access_deny    = array_init();
		s->deny_all       = 0;

		cv[0].destination = s->access_deny;
		cv[1].destination = &(s->deny_all);

		p->config_storage[i] = s;

		if (0 != config_insert_values_global(srv, ((data_config *)srv->config_context->data[i])->value, cv)) {
			return HANDLER_ERROR;
		}
	}

	return HANDLER_GO_ON;
}

static int mod_access_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i, j;
	plugin_config *s = p->config_storage[0];

	PATCH_OPTION(access_deny);
	PATCH_OPTION(deny_all);

	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];

		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;

		/* merge config */
		for (j = 0; j < dc->value->used; j++) {
			data_unset *du = dc->value->data[j];

			if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_URL_ACCESS_DENY))) {
				PATCH_OPTION(access_deny);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_ACCESS_DENY_ALL))) {
				PATCH_OPTION(deny_all);
			}
		}
	}

	return 0;
}

URIHANDLER_FUNC(mod_access_uri_handler) {
	plugin_data *p = p_d;
	int s_len;
	size_t k;

	if (con->uri.path->used == 0) return HANDLER_GO_ON;

	mod_access_patch_connection(srv, con, p);

	if (con->conf.log_request_handling) {
		TRACE("-- %s", "handling file in mod_access");
	}

	s_len = con->uri.path->used - 1;

	for (k = 0; k < p->conf.access_deny->used; k++) {
		data_string *ds = (data_string *)p->conf.access_deny->data[k];
		int ct_len = ds->value->used - 1;

		if (ct_len > s_len) continue;
		if (ds->value->used == 0) continue;

		/* if we have a case-insensitive FS we have to lower-case the URI here too */

		if (con->conf.force_lowercase_filenames) {
			if (0 == strncasecmp(con->uri.path->ptr + s_len - ct_len, ds->value->ptr, ct_len)) {
				con->http_status = 403;

				if (con->conf.log_request_handling) {
					TRACE("access denied, sending %d", con->http_status);
				}

				return HANDLER_FINISHED;
			}
		} else {
			if (0 == strncmp(con->uri.path->ptr + s_len - ct_len, ds->value->ptr, ct_len)) {
				con->http_status = 403;

				if (con->conf.log_request_handling) {
					TRACE("access denied for %s as %s matched %d chars, sending %d", 
							BUF_STR(con->uri.path),
							BUF_STR(ds->value),
							ct_len,
							con->http_status);
				}

				return HANDLER_FINISHED;
			}
		}
	}

	if (p->conf.deny_all) {
		con->http_status = 403;

		if (con->conf.log_request_handling) {
			TRACE("access.deny-all triggered, sending %d", con->http_status);
		}

		return HANDLER_FINISHED;
	}

	/* not found */
	return HANDLER_GO_ON;
}

URIHANDLER_FUNC(mod_access_path_handler) {
	plugin_data *p = p_d;

	mod_access_patch_connection(srv, con, p);

	if (con->conf.log_request_handling) {
		TRACE("-- %s", "handling file in mod_access");
	}

	if (p->conf.deny_all) {
		con->http_status = 403;

		if (con->conf.log_request_handling) {
			TRACE("access denied, sending %d", con->http_status);
		}

		return HANDLER_FINISHED;
	}

	/* not found */
	return HANDLER_GO_ON;
}

LI_EXPORT int mod_access_plugin_init(plugin *p) {
	p->version     = LIGHTTPD_VERSION_ID;
	p->name        = buffer_init_string(PLUGIN_NAME);

	p->init        = mod_access_init;
	p->set_defaults = mod_access_set_defaults;
	p->handle_uri_clean      = mod_access_uri_handler;
	p->handle_start_backend  = mod_access_path_handler;
	p->cleanup     = mod_access_free;

	p->data        = NULL;

	return 0;
}
