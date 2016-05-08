#ifndef _NETWORK_H_
#define _NETWORK_H_

#include "settings.h"
#include "server.h"

LI_API network_status_t network_write_chunkqueue(server *srv, connection *con, chunkqueue *c);
LI_API network_status_t network_read(server *srv, connection *con, iosocket *sock, chunkqueue *c);

LI_API int network_init(server *srv);
LI_API int network_close(server *srv);

LI_API int network_register_fdevents(server *srv);
LI_API handler_t network_server_handle_fdevent(void *s, void *context, int revents);

#endif
