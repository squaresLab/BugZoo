#include <sys/types.h>
#include <sys/stat.h>

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

#include "settings.h"
#include "plugin.h"
#include "http_auth.h"
#include "log.h"
#include "response.h"

#include "sys-strings.h"
#include "sys-files.h"

handler_t auth_ldap_init(server *srv, mod_auth_plugin_config *s);


/**
 * the basic and digest auth framework
 *
 * - config handling
 * - protocol handling
 *
 * http_auth.c
 * http_auth_digest.c
 *
 * do the real work
 */

INIT_FUNC(mod_auth_init) {
	mod_auth_plugin_data *p;

	UNUSED(srv);

	p = calloc(1, sizeof(*p));

	p->tmp_buf = buffer_init();

	p->auth_user = buffer_init();
#ifdef USE_LDAP
	p->ldap_filter = buffer_init();
#endif

	return p;
}

FREE_FUNC(mod_auth_free) {
	mod_auth_plugin_data *p = p_d;

	UNUSED(srv);

	if (!p) return HANDLER_GO_ON;

	buffer_free(p->tmp_buf);
	buffer_free(p->auth_user);
#ifdef USE_LDAP
	buffer_free(p->ldap_filter);
#endif

	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			mod_auth_plugin_config *s = p->config_storage[i];

			if (!s) continue;

			array_free(s->auth_require);
			buffer_free(s->auth_plain_groupfile);
			buffer_free(s->auth_plain_userfile);
			buffer_free(s->auth_htdigest_userfile);
			buffer_free(s->auth_htpasswd_userfile);
			buffer_free(s->auth_backend_conf);

			buffer_free(s->auth_ldap_hostname);
			buffer_free(s->auth_ldap_basedn);
			buffer_free(s->auth_ldap_binddn);
			buffer_free(s->auth_ldap_bindpw);
			buffer_free(s->auth_ldap_filter);
			buffer_free(s->auth_ldap_cafile);
			buffer_free(s->auth_ldap_cert);
			buffer_free(s->auth_ldap_key);

#ifdef USE_LDAP
			buffer_free(s->ldap_filter_pre);
			buffer_free(s->ldap_filter_post);

			if (s->ldap) ldap_unbind_s(s->ldap);
#endif

			free(s);
		}
		free(p->config_storage);
	}

	free(p);

	return HANDLER_GO_ON;
}

static int mod_auth_patch_connection(server *srv, connection *con, mod_auth_plugin_data *p) {
	size_t i, j;
	mod_auth_plugin_config *s = p->config_storage[0];

	PATCH_OPTION(auth_backend);
	PATCH_OPTION(auth_plain_groupfile);
	PATCH_OPTION(auth_plain_userfile);
	PATCH_OPTION(auth_htdigest_userfile);
	PATCH_OPTION(auth_htpasswd_userfile);
	PATCH_OPTION(auth_require);
	PATCH_OPTION(auth_debug);
	PATCH_OPTION(auth_ldap_hostname);
	PATCH_OPTION(auth_ldap_basedn);
	PATCH_OPTION(auth_ldap_binddn);
	PATCH_OPTION(auth_ldap_bindpw);
	PATCH_OPTION(auth_ldap_filter);
	PATCH_OPTION(auth_ldap_cafile);
	PATCH_OPTION(auth_ldap_cert);
	PATCH_OPTION(auth_ldap_key);
	PATCH_OPTION(auth_ldap_starttls);
	PATCH_OPTION(auth_ldap_allow_empty_pw);
#ifdef USE_LDAP
	PATCH_OPTION(ldap);
	PATCH_OPTION(ldap_filter_pre);
	PATCH_OPTION(ldap_filter_post);
#endif

	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];

		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;

		/* merge config */
		for (j = 0; j < dc->value->used; j++) {
			data_unset *du = dc->value->data[j];

			if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend"))) {
				PATCH_OPTION(auth_backend);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.plain.groupfile"))) {
				PATCH_OPTION(auth_plain_groupfile);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.plain.userfile"))) {
				PATCH_OPTION(auth_plain_userfile);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.htdigest.userfile"))) {
				PATCH_OPTION(auth_htdigest_userfile);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.htpasswd.userfile"))) {
				PATCH_OPTION(auth_htpasswd_userfile);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.require"))) {
				PATCH_OPTION(auth_require);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.debug"))) {
				PATCH_OPTION(auth_debug);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.ldap.hostname"))) {
				PATCH_OPTION(auth_ldap_hostname);
#ifdef USE_LDAP
				PATCH_OPTION(ldap);
				PATCH_OPTION(ldap_filter_pre);
				PATCH_OPTION(ldap_filter_post);
#endif
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.ldap.base-dn"))) {
				PATCH_OPTION(auth_ldap_basedn);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.ldap.filter"))) {
				PATCH_OPTION(auth_ldap_filter);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.ldap.ca-file"))) {
				PATCH_OPTION(auth_ldap_cafile);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.ldap.cert"))) {
				PATCH_OPTION(auth_ldap_cert);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.ldap.key"))) {
				PATCH_OPTION(auth_ldap_key);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.ldap.starttls"))) {
				PATCH_OPTION(auth_ldap_starttls);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN("auth.backend.ldap.allow-empty-pw"))) {
				PATCH_OPTION(auth_ldap_allow_empty_pw);
			}
		}
	}

	return 0;
}

static handler_t mod_auth_uri_handler(server *srv, connection *con, void *p_d) {
	size_t k;
	int auth_required = 0, auth_satisfied = 0;
	char *http_authorization = NULL;
	data_string *ds;
	mod_auth_plugin_data *p = p_d;
	array *req;

	/* select the right config */
	mod_auth_patch_connection(srv, con, p);

	if (p->conf.auth_require == NULL) return HANDLER_GO_ON;

	/*
	 * AUTH
	 *
	 */

	/* do we have to ask for auth ? */

	auth_required = 0;
	auth_satisfied = 0;

	/* search auth-directives for path */
	for (k = 0; k < p->conf.auth_require->used; k++) {
		buffer *auth_path = p->conf.auth_require->data[k]->key;

		if (auth_path->used == 0) continue;
		if (con->uri.path->used < auth_path->used) continue;

		/* if we have a case-insensitive FS we have to lower-case the URI here too */

		if (con->conf.force_lowercase_filenames) {
			if (0 == strncasecmp(con->uri.path->ptr, auth_path->ptr, auth_path->used - 1)) {
				auth_required = 1;
				break;
			}
		} else {
			if (0 == strncmp(con->uri.path->ptr, auth_path->ptr, auth_path->used - 1)) {
				auth_required = 1;
				break;
			}
		}
	}

	/* nothing to do for us */
	if (auth_required == 0) return HANDLER_GO_ON;

	req = ((data_array *)(p->conf.auth_require->data[k]))->value;

	/* try to get Authorization-header */

	if (NULL != (ds = (data_string *)array_get_element(con->request.headers, CONST_STR_LEN("Authorization")))) {
		http_authorization = ds->value->ptr;
	}

	if (ds && ds->value && ds->value->used) {
		char *auth_realm;
		data_string *method;

		method = (data_string *)array_get_element(req, CONST_STR_LEN("method"));

		/* parse auth-header */
		if (NULL != (auth_realm = strchr(http_authorization, ' '))) {
			int auth_type_len = auth_realm - http_authorization;

			if ((auth_type_len == 5) &&
			    (0 == strncmp(http_authorization, "Basic", auth_type_len))) {

				if (buffer_is_equal_string(method->value, CONST_STR_LEN("basic"))) {
					auth_satisfied = http_auth_basic_check(srv, con, p, req, con->uri.path, auth_realm+1);
				}
			} else if ((auth_type_len == 6) &&
				   (0 == strncmp(http_authorization, "Digest", auth_type_len))) {
				if (buffer_is_equal_string(method->value, CONST_STR_LEN("digest"))) {
					if (-1 == (auth_satisfied = http_auth_digest_check(srv, con, p, req, con->uri.path, auth_realm+1))) {
						con->http_status = 400;

						/* a field was missing */

						return HANDLER_FINISHED;
					}
				}
			} else {
				log_error_write(srv, __FILE__, __LINE__, "ss",
						"unknown authentification type:",
						http_authorization);
			}
		}
	}

	if (!auth_satisfied) {
		data_string *method, *realm;
		method = (data_string *)array_get_element(req, CONST_STR_LEN("method"));
		realm = (data_string *)array_get_element(req, CONST_STR_LEN("realm"));

		con->http_status = 401;

		if (buffer_is_equal_string(method->value, CONST_STR_LEN("basic"))) {
			buffer_copy_string(p->tmp_buf, "Basic realm=\"");
			buffer_append_string_buffer(p->tmp_buf, realm->value);
			buffer_append_string(p->tmp_buf, "\"");

			response_header_insert(srv, con, CONST_STR_LEN("WWW-Authenticate"), CONST_BUF_LEN(p->tmp_buf));
		} else if (buffer_is_equal_string(method->value, CONST_STR_LEN("digest"))) {
			char hh[33];
			http_auth_digest_generate_nonce(srv, p, srv->tmp_buf, hh);

			buffer_copy_string(p->tmp_buf, "Digest realm=\"");
			buffer_append_string_buffer(p->tmp_buf, realm->value);
			buffer_append_string(p->tmp_buf, "\", nonce=\"");
			buffer_append_string(p->tmp_buf, hh);
			buffer_append_string(p->tmp_buf, "\", qop=\"auth\"");

			response_header_insert(srv, con, CONST_STR_LEN("WWW-Authenticate"), CONST_BUF_LEN(p->tmp_buf));
		} else {
			/* evil */
		}
		return HANDLER_FINISHED;
	} else {
		/* the REMOTE_USER header */

		buffer_copy_string_buffer(con->authed_user, p->auth_user);
	}

	return HANDLER_GO_ON;
}

SETDEFAULTS_FUNC(mod_auth_set_defaults) {
	mod_auth_plugin_data *p = p_d;
	size_t i;

	config_values_t cv[] = {
		{ "auth.backend",                   NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 0 */
		{ "auth.backend.plain.groupfile",   NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 1 */
		{ "auth.backend.plain.userfile",    NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 2 */
		{ "auth.require",                   NULL, T_CONFIG_LOCAL, T_CONFIG_SCOPE_CONNECTION },  /* 3 */
		{ "auth.backend.ldap.hostname",     NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 4 */
		{ "auth.backend.ldap.base-dn",      NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 5 */
		{ "auth.backend.ldap.filter",       NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 6 */
		{ "auth.backend.ldap.ca-file",      NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 7 */
		{ "auth.backend.ldap.cert",         NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 8 */
		{ "auth.backend.ldap.key",          NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 9 */
		{ "auth.backend.ldap.starttls",     NULL, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION }, /* 10 */
 		{ "auth.backend.ldap.bind-dn",      NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 11 */
 		{ "auth.backend.ldap.bind-pw",      NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 12 */
		{ "auth.backend.ldap.allow-empty-pw",     NULL, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION }, /* 13 */
		{ "auth.backend.htdigest.userfile", NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 14 */
		{ "auth.backend.htpasswd.userfile", NULL, T_CONFIG_STRING, T_CONFIG_SCOPE_CONNECTION }, /* 15 */
		{ "auth.debug",                     NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },  /* 16 */
		{ NULL,                             NULL, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET }
	};

	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));

	for (i = 0; i < srv->config_context->used; i++) {
		mod_auth_plugin_config *s;
		size_t n;
		data_array *da;
		array *ca;

		s = calloc(1, sizeof(mod_auth_plugin_config));
		s->auth_plain_groupfile = buffer_init();
		s->auth_plain_userfile = buffer_init();
		s->auth_htdigest_userfile = buffer_init();
		s->auth_htpasswd_userfile = buffer_init();
		s->auth_backend_conf = buffer_init();

		s->auth_ldap_hostname = buffer_init();
		s->auth_ldap_basedn = buffer_init();
		s->auth_ldap_binddn = buffer_init();
		s->auth_ldap_bindpw = buffer_init();
		s->auth_ldap_filter = buffer_init();
		s->auth_ldap_cafile = buffer_init();
		s->auth_ldap_cert   = buffer_init();
		s->auth_ldap_key    = buffer_init();
		s->auth_ldap_starttls = 0;
		s->auth_debug = 0;

		s->auth_require = array_init();

#ifdef USE_LDAP
		s->ldap_filter_pre = buffer_init();
		s->ldap_filter_post = buffer_init();
		s->ldap = NULL;
#endif

		cv[0].destination = s->auth_backend_conf;
		cv[1].destination = s->auth_plain_groupfile;
		cv[2].destination = s->auth_plain_userfile;
		cv[3].destination = s->auth_require;
		cv[4].destination = s->auth_ldap_hostname;
		cv[5].destination = s->auth_ldap_basedn;
		cv[6].destination = s->auth_ldap_filter;
		cv[7].destination = s->auth_ldap_cafile;
		cv[8].destination = s->auth_ldap_cert;
		cv[9].destination = s->auth_ldap_key;
		cv[10].destination = &(s->auth_ldap_starttls);
		cv[11].destination = s->auth_ldap_binddn;
		cv[12].destination = s->auth_ldap_bindpw;
		cv[13].destination = &(s->auth_ldap_allow_empty_pw);
		cv[14].destination = s->auth_htdigest_userfile;
		cv[15].destination = s->auth_htpasswd_userfile;
		cv[16].destination = &(s->auth_debug);

		p->config_storage[i] = s;
		ca = ((data_config *)srv->config_context->data[i])->value;

		if (0 != config_insert_values_global(srv, ca, cv)) {
			return HANDLER_ERROR;
		}

		if (!buffer_is_empty(s->auth_backend_conf)) {
			if (buffer_is_equal_string(s->auth_backend_conf, CONST_STR_LEN("htpasswd"))) {
				s->auth_backend = AUTH_BACKEND_HTPASSWD;
			} else if (buffer_is_equal_string(s->auth_backend_conf, CONST_STR_LEN("htdigest"))) {
				s->auth_backend = AUTH_BACKEND_HTDIGEST;
			} else if (buffer_is_equal_string(s->auth_backend_conf, CONST_STR_LEN("plain"))) {
				s->auth_backend = AUTH_BACKEND_PLAIN;
			} else if (buffer_is_equal_string(s->auth_backend_conf, CONST_STR_LEN("ldap"))) {
				s->auth_backend = AUTH_BACKEND_LDAP;
			} else {
				log_error_write(srv, __FILE__, __LINE__, "sb", "auth.backend not supported:", s->auth_backend_conf);

				return HANDLER_ERROR;
			}
		}

		/* no auth.require for this section */
		if (NULL == (da = (data_array *)array_get_element(ca, CONST_STR_LEN("auth.require")))) continue;

		if (da->type != TYPE_ARRAY) continue;

		for (n = 0; n < da->value->used; n++) {
			size_t m;
			data_array *da_file = (data_array *)da->value->data[n];
			buffer *method, *realm, *require;

			if (da->value->data[n]->type != TYPE_ARRAY) {
				log_error_write(srv, __FILE__, __LINE__, "ss",
						"auth.require should contain an array as in:",
						"auth.require = ( \"...\" => ( ..., ...) )");

				return HANDLER_ERROR;
			}

			method = realm = require = NULL;

			for (m = 0; m < da_file->value->used; m++) {
				data_string *ds_auth_req = (data_string *)da_file->value->data[m];

				if (ds_auth_req->type != TYPE_STRING) {
					log_error_write(srv, __FILE__, __LINE__, "ssbs",
						"a string was expected for:",
						"auth.require = ( \"...\" => ( ..., -> \"",
						ds_auth_req->key,
						"\" <- => \"...\" ) )");

					return HANDLER_ERROR;
				}

				if (buffer_is_equal_string(ds_auth_req->key, CONST_STR_LEN("method"))) {
					method = ds_auth_req->value;
				} else if (buffer_is_equal_string(ds_auth_req->key, CONST_STR_LEN("realm"))) {
					realm = ds_auth_req->value;
				} else if (buffer_is_equal_string(ds_auth_req->key, CONST_STR_LEN("require"))) {
					require = ds_auth_req->value;
				} else {
					log_error_write(srv, __FILE__, __LINE__, "ssbs",
							"the field is unknown in:",
							"auth.require = ( \"...\" => ( ..., -> \"",
							da_file->value->data[m]->key,
							"\" <- => \"...\" ) )");

					return HANDLER_ERROR;

				}
			}

			if (method == NULL) {
				log_error_write(srv, __FILE__, __LINE__, "ss",
						"the require field is missing in:",
						"auth.require = ( \"...\" => ( ..., \"method\" => \"...\" ) )");
				return HANDLER_ERROR;
			}
			if (!buffer_is_equal_string(method, CONST_STR_LEN("basic")) &&
			    !buffer_is_equal_string(method, CONST_STR_LEN("digest"))) {
				log_error_write(srv, __FILE__, __LINE__, "ss",
						"method has to be either \"basic\" or \"digest\" in",
						"auth.require = ( \"...\" => ( ..., \"method\" => \"...\") )");
				return HANDLER_ERROR;
			}

			if (realm == NULL) {
				log_error_write(srv, __FILE__, __LINE__, "ss",
						"the require field is missing in:",
						"auth.require = ( \"...\" => ( ..., \"realm\" => \"...\" ) )");
				return HANDLER_ERROR;
			}

			if (require == NULL) {
				log_error_write(srv, __FILE__, __LINE__, "ss",
						"the require field is missing in:",
						"auth.require = ( \"...\" => ( ..., \"require\" => \"...\" ) )");
				return HANDLER_ERROR;
			}

			if (method && realm && require) {
				data_string *ds;
				data_array *a;

				a = data_array_init();
				buffer_copy_string_buffer(a->key, da_file->key);

				ds = data_string_init();

				buffer_copy_string(ds->key, "method");
				buffer_copy_string_buffer(ds->value, method);

				array_insert_unique(a->value, (data_unset *)ds);

				ds = data_string_init();

				buffer_copy_string(ds->key, "realm");
				buffer_copy_string_buffer(ds->value, realm);

				array_insert_unique(a->value, (data_unset *)ds);

				ds = data_string_init();

				buffer_copy_string(ds->key, "require");
				buffer_copy_string_buffer(ds->value, require);

				array_insert_unique(a->value, (data_unset *)ds);

				array_insert_unique(s->auth_require, (data_unset *)a);
			}
		}

		switch(s->auth_backend) {
		case AUTH_BACKEND_PLAIN:
			if (s->auth_plain_userfile->used) {
				int fd;
				/* try to read */
				if (-1 == (fd = open(s->auth_plain_userfile->ptr, O_RDONLY))) {
					log_error_write(srv, __FILE__, __LINE__, "sbss",
							"opening auth.backend.plain.userfile:", s->auth_plain_userfile,
							"failed:", strerror(errno));
					return HANDLER_ERROR;
				}
				close(fd);
			}
			break;
		case AUTH_BACKEND_HTPASSWD:
			if (s->auth_htpasswd_userfile->used) {
				int fd;
				/* try to read */
				if (-1 == (fd = open(s->auth_htpasswd_userfile->ptr, O_RDONLY))) {
					log_error_write(srv, __FILE__, __LINE__, "sbss",
							"opening auth.backend.htpasswd.userfile:", s->auth_htpasswd_userfile,
							"failed:", strerror(errno));
					return HANDLER_ERROR;
				}
				close(fd);
			}
			break;
		case AUTH_BACKEND_HTDIGEST:
			if (s->auth_htdigest_userfile->used) {
				int fd;
				/* try to read */
				if (-1 == (fd = open(s->auth_htdigest_userfile->ptr, O_RDONLY))) {
					log_error_write(srv, __FILE__, __LINE__, "sbss",
							"opening auth.backend.htdigest.userfile:", s->auth_htdigest_userfile,
							"failed:", strerror(errno));
					return HANDLER_ERROR;
				}
				close(fd);
			}
			break;
		case AUTH_BACKEND_LDAP: {
			handler_t ret = auth_ldap_init(srv, s);
			if (ret == HANDLER_ERROR)
				return (ret);
                        break;
		}
                default:
                        break;
                }
        }

        return HANDLER_GO_ON;
}

handler_t auth_ldap_init(server *srv, mod_auth_plugin_config *s) {
#ifdef USE_LDAP
			int ret;
#if 0
			if (s->auth_ldap_basedn->used == 0) {
				log_error_write(srv, __FILE__, __LINE__, "s", "ldap: auth.backend.ldap.base-dn has to be set");

				return HANDLER_ERROR;
			}
#endif

			if (s->auth_ldap_filter->used) {
				char *dollar;

				/* parse filter */

				if (NULL == (dollar = strchr(s->auth_ldap_filter->ptr, '$'))) {
					log_error_write(srv, __FILE__, __LINE__, "s", "ldap: auth.backend.ldap.filter is missing a replace-operator '$'");

					return HANDLER_ERROR;
				}

				buffer_copy_string_len(s->ldap_filter_pre, s->auth_ldap_filter->ptr, dollar - s->auth_ldap_filter->ptr);
				buffer_copy_string(s->ldap_filter_post, dollar+1);
			}

			if (s->auth_ldap_hostname->used) {
				if (NULL == (s->ldap = ldap_init(s->auth_ldap_hostname->ptr, LDAP_PORT))) {
					log_error_write(srv, __FILE__, __LINE__, "ss", "ldap ...", strerror(errno));

					return HANDLER_ERROR;
				}

				ret = LDAP_VERSION3;
				if (LDAP_OPT_SUCCESS != (ret = ldap_set_option(s->ldap, LDAP_OPT_PROTOCOL_VERSION, &ret))) {
					log_error_write(srv, __FILE__, __LINE__, "ss", "ldap:", ldap_err2string(ret));

					return HANDLER_ERROR;
				}

				if (s->auth_ldap_starttls) {
					/* if no CA file is given, it is ok, as we will use encryption
					 * if the server requires a CAfile it will tell us */
					if (!buffer_is_empty(s->auth_ldap_cafile)) {
						if (LDAP_OPT_SUCCESS != (ret = ldap_set_option(NULL, LDAP_OPT_X_TLS_CACERTFILE,
										s->auth_ldap_cafile->ptr))) {
							log_error_write(srv, __FILE__, __LINE__, "ss",
									"Loading CA certificate failed:", ldap_err2string(ret));

							return HANDLER_ERROR;
						}
					}

					if (!buffer_is_empty(s->auth_ldap_cert)) {
						if (LDAP_OPT_SUCCESS != (ret = ldap_set_option(NULL, LDAP_OPT_X_TLS_CERTFILE,
										s->auth_ldap_cert->ptr))) {
							log_error_write(srv, __FILE__, __LINE__, "ss",
									"Loading TLS certificate failed:", ldap_err2string(ret));

							return HANDLER_ERROR;
						}
					}

					if (!buffer_is_empty(s->auth_ldap_key)) {
						if (LDAP_OPT_SUCCESS != (ret = ldap_set_option(NULL, LDAP_OPT_X_TLS_KEYFILE,
										s->auth_ldap_key->ptr))) {
							log_error_write(srv, __FILE__, __LINE__, "ss",
									"Loading TLS key certificate failed:", ldap_err2string(ret));

							return HANDLER_ERROR;
						}
					}

					if (LDAP_OPT_SUCCESS != (ret = ldap_start_tls_s(s->ldap, NULL,  NULL))) {
						log_error_write(srv, __FILE__, __LINE__, "ss", "ldap startTLS failed:", ldap_err2string(ret));

						return HANDLER_ERROR;
					}
				}


				/* 1. */
				if (s->auth_ldap_binddn->used) {
					if (LDAP_SUCCESS != (ret = ldap_simple_bind_s(s->ldap, s->auth_ldap_binddn->ptr, s->auth_ldap_bindpw->ptr))) {
						log_error_write(srv, __FILE__, __LINE__, "ss", "ldap:", ldap_err2string(ret));

						return HANDLER_ERROR;
					}
				} else {
					if (LDAP_SUCCESS != (ret = ldap_simple_bind_s(s->ldap, NULL, NULL))) {
						log_error_write(srv, __FILE__, __LINE__, "ss", "ldap:", ldap_err2string(ret));

						return HANDLER_ERROR;
					}
				}
			}
#else
			UNUSED(s);
			log_error_write(srv, __FILE__, __LINE__, "s", "no ldap support available");
			return HANDLER_ERROR;
#endif
		return HANDLER_GO_ON;
}

LI_EXPORT int mod_auth_plugin_init(plugin *p) {
	p->version     = LIGHTTPD_VERSION_ID;
	p->name        = buffer_init_string("auth");
	p->init        = mod_auth_init;
	p->set_defaults = mod_auth_set_defaults;
	p->handle_uri_clean = mod_auth_uri_handler;
	p->cleanup     = mod_auth_free;

	p->data        = NULL;

	return 0;
}
