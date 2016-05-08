#ifndef _SERVER_H_
#define _SERVER_H_

#include "base.h"

typedef enum { CONFIG_UNSET, CONFIG_DOCUMENT_ROOT } config_var_t;

LI_EXPORT int config_read(server *srv, const char *fn);
LI_EXPORT int config_set_defaults(server *srv);
LI_EXPORT buffer * config_get_value_buffer(server *srv, connection *con, config_var_t field);

#endif
