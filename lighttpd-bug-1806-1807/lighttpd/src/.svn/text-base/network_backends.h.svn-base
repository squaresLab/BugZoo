#ifndef _NETWORK_BACKENDS_H_
#define _NETWORK_BACKENDS_H_

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <sys/types.h>

#include "settings.h"
#include "base.h"
#include "network.h"

#define NETWORK_BACKEND_WRITE_CHUNK(x) \
    network_status_t network_write_chunkqueue_##x(server *srv, connection *con, iosocket *sock, chunkqueue *cq, chunk *c)

#define NETWORK_BACKEND_WRITE(x) \
    network_status_t network_write_chunkqueue_##x(server *srv, connection *con, iosocket *sock, chunkqueue *cq)
#define NETWORK_BACKEND_READ(x) \
    network_status_t network_read_chunkqueue_##x(server *srv, connection *con, iosocket *sock, chunkqueue *cq)

LI_API NETWORK_BACKEND_WRITE_CHUNK(writev_mem);

LI_API NETWORK_BACKEND_WRITE(write);
LI_API NETWORK_BACKEND_WRITE(writev);
LI_API NETWORK_BACKEND_WRITE(linuxsendfile);
LI_API NETWORK_BACKEND_WRITE(linuxaiosendfile);
LI_API NETWORK_BACKEND_WRITE(posixaio);
LI_API NETWORK_BACKEND_WRITE(gthreadaio);
LI_API NETWORK_BACKEND_WRITE(gthreadsendfile);
LI_API NETWORK_BACKEND_WRITE(freebsdsendfile);
LI_API NETWORK_BACKEND_WRITE(solarissendfilev);

LI_API NETWORK_BACKEND_WRITE(win32transmitfile);
LI_API NETWORK_BACKEND_WRITE(win32send);

LI_API NETWORK_BACKEND_READ(read);
LI_API NETWORK_BACKEND_READ(win32recv);

#ifdef USE_OPENSSL
LI_API NETWORK_BACKEND_WRITE(openssl);
LI_API NETWORK_BACKEND_READ(openssl);
#endif

#endif
