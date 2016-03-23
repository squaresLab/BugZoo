#ifndef _RESPONSE_H_
#define _RESPONSE_H_

#include <time.h>

#include "settings.h"

#include "server.h"

LI_API int http_response_parse(server *srv, connection *con);
LI_API int http_response_write_header(server *srv, connection *con, chunkqueue *cq);

LI_API int response_header_insert(server *srv, connection *con, const char *key, size_t keylen, const char *value, size_t vallen);
LI_API int response_header_overwrite(server *srv, connection *con, const char *key, size_t keylen, const char *value, size_t vallen);

LI_API handler_t handle_get_backend(server *srv, connection *con);
LI_API int http_response_redirect_to_directory(server *srv, connection *con);
LI_API int http_response_handle_cachable(server *srv, connection *con, buffer * mtime);

LI_API buffer * strftime_cache_get(server *srv, time_t last_mod);
#endif
