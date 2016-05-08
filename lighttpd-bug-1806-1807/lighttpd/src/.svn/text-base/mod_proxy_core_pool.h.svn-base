#ifndef _MOD_PROXY_CORE_POOL_H_
#define _MOD_PROXY_CORE_POOL_H_

#ifndef _WIN32
#include <sys/time.h>
#else
#include <time.h>
#endif

#include "iosocket.h"
#include "array-static.h"
#include "mod_proxy_core_address.h"
#include "chunk.h"

typedef enum {
	PROXY_CONNECTION_STATE_UNSET,
	PROXY_CONNECTION_STATE_CONNECTING,
	PROXY_CONNECTION_STATE_CONNECTED,
	PROXY_CONNECTION_STATE_IDLE,
	PROXY_CONNECTION_STATE_CLOSED,
} proxy_connection_state_t;

/**
 * a connection to a proxy backend
 *
 * the connection is independent of the incoming request to allow keep-alive
 */
typedef struct {
	iosocket *sock;

	unsigned short request_count; /* used for max-keep-alive-requests */
	time_t last_read; /* timeout handling for keep-alive connections */
	time_t last_write;

	proxy_address *address; /* the struct sock_addr for the sock */

	struct proxy_protocol *protocol; /* protocol handler */
	void *protocol_data;    /** protocol handler's state data for parsing response from backend. */

	chunkqueue *send; /* encoded stream data that needs to be send to backend server. */
	chunkqueue *recv; /* encoded stream data received form the backend that needs to be decoded. */

	proxy_connection_state_t state;
	time_t state_ts;

	void *proxy_sess; /** we are used by this proxy session right now */
} proxy_connection;

ARRAY_STATIC_DEF(proxy_connection_pool, proxy_connection, size_t max_size;);

typedef enum {
	PROXY_CONNECTIONPOOL_UNSET,
	PROXY_CONNECTIONPOOL_FULL,
	PROXY_CONNECTIONPOOL_GOT_CONNECTION,
} proxy_connection_pool_t;

proxy_connection_pool *proxy_connection_pool_init(void);
void proxy_connection_pool_free(proxy_connection_pool *pool);

proxy_connection_pool_t proxy_connection_pool_get_connection(proxy_connection_pool *pool, proxy_address *address, proxy_connection **rcon);
int proxy_connection_pool_remove_connection(proxy_connection_pool *pool, proxy_connection *c);

proxy_connection * proxy_connection_init(void);
void proxy_connection_free(proxy_connection *pool);

#endif


