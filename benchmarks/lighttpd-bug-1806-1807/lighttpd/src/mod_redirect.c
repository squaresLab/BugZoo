#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#include "base.h"
#include "log.h"
#include "buffer.h"

#include "plugin.h"
#include "response.h"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

typedef struct {
	pcre_keyvalue_buffer *redirect;
	data_config *context; /* to which apply me */

	unsigned short redirect_code;
} plugin_config;

typedef struct {
	PLUGIN_DATA;
	buffer *match_buf;
	buffer *location;

	plugin_config **config_storage;

	plugin_config conf;
} plugin_data;

INIT_FUNC(mod_redirect_init) {
	plugin_data *p;

	UNUSED(srv);

	p = calloc(1, sizeof(*p));

	p->match_buf = buffer_init();
	p->location = buffer_init();

	return p;
}

FREE_FUNC(mod_redirect_free) {
	plugin_data *p = p_d;

	if (!p) return HANDLER_GO_ON;

	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			pcre_keyvalue_buffer_free(s->redirect);

			free(s);
		}
		free(p->config_storage);
	}


	buffer_free(p->match_buf);
	buffer_free(p->location);

	free(p);

	return HANDLER_GO_ON;
}

SETDEFAULTS_FUNC(mod_redirect_set_defaults) {
	plugin_data *p = p_d;
	data_unset *du;
	size_t i = 0;

	config_values_t cv[] = {
		{ "url.redirect",               NULL, T_CONFIG_LOCAL, T_CONFIG_SCOPE_CONNECTION }, /* 0 */
		{ "url.redirect-code",          NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION }, /* 1 */
		{ NULL,                         NULL, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET }
	};

	if (!p) return HANDLER_ERROR;

	/* 0 */
	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));

	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s;
		size_t j;
		array *ca;
		data_array *da = NULL;

		s = calloc(1, sizeof(plugin_config));
		s->redirect   = pcre_keyvalue_buffer_init();

		cv[0].destination = s->redirect;
		cv[1].destination = &(s->redirect_code);

		p->config_storage[i] = s;
		ca = ((data_config *)srv->config_context->data[i])->value;

		if (0 != config_insert_values_global(srv, ca, cv)) {
			return HANDLER_ERROR;
		}

		if (NULL == (du = array_get_element(ca, CONST_STR_LEN("url.redirect")))) {
			/* no url.redirect defined */
			continue;
		}

		if (du->type != TYPE_ARRAY) {
			log_error_write(srv, __FILE__, __LINE__, "sss",
					"unexpected type for key: ", "url.redirect", "array of strings");

			return HANDLER_ERROR;
		}

		da = (data_array *)du;

		for (j = 0; j < da->value->used; j++) {
			if (da->value->data[j]->type != TYPE_STRING) {
				log_error_write(srv, __FILE__, __LINE__, "sssbs",
						"unexpected type for key: ",
						"url.redirect",
						"[", da->value->data[j]->key, "](string)");

				return HANDLER_ERROR;
			}

			if (0 != pcre_keyvalue_buffer_append(s->redirect,
							     ((data_string *)(da->value->data[j]))->key->ptr,
							     ((data_string *)(da->value->data[j]))->value->ptr)) {

				log_error_write(srv, __FILE__, __LINE__, "sb",
						"pcre-compile failed for", da->value->data[j]->key);
			}
		}
	}

	return HANDLER_GO_ON;
}
#ifdef HAVE_PCRE_H
static int mod_redirect_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i, j;
	plugin_config *s = p->config_storage[0];

	PATCH_OPTION(redirect);
	PATCH_OPTION(redirect_code);

	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];

		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;

		/* merge config */
		for (j = 0; j < dc->value->used; j++) {
			data_unset *du = dc->value->data[j];

			if (buffer_is_equal_string(du->key, CONST_STR_LEN("url.redirect"))) {
				PATCH_OPTION(redirect);
				p->conf.context = dc;
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("url.redirect-code"))) {
				PATCH_OPTION(redirect_code);
			}
		}
	}

	return 0;
}
#endif
static handler_t mod_redirect_uri_handler(server *srv, connection *con, void *p_data) {
#ifdef HAVE_PCRE_H
	plugin_data *p = p_data;
	int i;

	/*
	 * REWRITE URL
	 *
	 * e.g. redirect /base/ to /index.php?section=base
	 *
	 */

	mod_redirect_patch_connection(srv, con, p);

	buffer_copy_string_buffer(p->match_buf, con->request.uri);
	i = config_exec_pcre_keyvalue_buffer(con, p->conf.redirect, p->conf.context, p->match_buf, p->location);

	if (i >= 0) {
		response_header_insert(srv, con, CONST_STR_LEN("Location"), CONST_BUF_LEN(p->location));

		con->http_status = p->conf.redirect_code > 99 && p->conf.redirect_code < 1000 ? p->conf.redirect_code : 301;
		con->send->is_closed = 1;

		return HANDLER_FINISHED;
	}
	else if (i != PCRE_ERROR_NOMATCH) {
		log_error_write(srv, __FILE__, __LINE__, "s",
				"execution error while matching", i);
	}
#undef N

#else
	UNUSED(srv);
	UNUSED(con);
	UNUSED(p_data);
#endif

	return HANDLER_GO_ON;
}


LI_EXPORT int mod_redirect_plugin_init(plugin *p) {
	p->version     = LIGHTTPD_VERSION_ID;
	p->name        = buffer_init_string("redirect");

	p->init        = mod_redirect_init;
	p->handle_uri_clean  = mod_redirect_uri_handler;
	p->set_defaults  = mod_redirect_set_defaults;
	p->cleanup     = mod_redirect_free;

	p->data        = NULL;

	return 0;
}
