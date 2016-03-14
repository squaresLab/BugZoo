
#include <stdlib.h>

#include "array-static.h"
#include "sys-files.h"
#include "log.h"
#include "mod_proxy_core_pool.h"

proxy_connection * proxy_connection_init(void) {
	proxy_connection *con;

	con = calloc(1, sizeof(*con));

	con->sock = iosocket_init();

	con->send = chunkqueue_init();
	con->recv = chunkqueue_init();

	return con;
}

void proxy_connection_free(proxy_connection *con) {
	if (!con) return;

	con->address->used--;

	iosocket_free(con->sock);

	chunkqueue_free(con->send);
	chunkqueue_free(con->recv);

	free(con);
}

proxy_connection_pool *proxy_connection_pool_init(void) {
	proxy_connection_pool *pool;

	pool = calloc(1, sizeof(*pool));

	/* default: max parallel connections to the backend
	 *
	 * this should match max-procs if we manage the procs ourself
	 */

	pool->max_size = 1;

	return pool;
}

void proxy_connection_pool_free(proxy_connection_pool *pool) {
	size_t i;

	if (!pool) return;

	for (i = 0; i < pool->used; i++) {
		proxy_connection_free(pool->ptr[i]);
	}

	if (pool->size) free(pool->ptr);

	free(pool);
}

void proxy_connection_pool_add_connection(proxy_connection_pool *pool, proxy_connection *c) {
	ARRAY_STATIC_PREPARE_APPEND(pool);

	pool->ptr[pool->used++] = c;
}

/**
 * remove the connection from the pool
 *
 * usually called on conn-shutdown
 */
int proxy_connection_pool_remove_connection(proxy_connection_pool *pool, proxy_connection *c) {
	size_t i;

	if (pool->used == 0) return -1; /* empty */

	for (i = 0; i < pool->used; i++) {
		if (pool->ptr[i] == c) {
			break;
		}
	}

	if (i == pool->used) return -1; /* not found */

	/**
	 * move all elements one to the left
	 *
	 * if the last element is going to be removed, skip the loop
	 */
	for (; i < pool->used - 1; i++) {
		pool->ptr[i] = pool->ptr[i + 1];
	}

	pool->used--;

	return 0;
}

proxy_connection_pool_t proxy_connection_pool_get_connection(proxy_connection_pool *pool, proxy_address *address, proxy_connection **rcon) {
	proxy_connection *proxy_con = NULL;
	size_t i;

	/* search for a idling proxy connection with the given address */
	for (i = 0; i < pool->used; i++) {
		proxy_con = pool->ptr[i];

		if (proxy_con->address == address &&
		    proxy_con->state == PROXY_CONNECTION_STATE_IDLE) {
			break;
		}
	}

	if (i == pool->used) {
		/* no idling connection found
		 *
		 * check if we can open another connection to this address
		 */

		if (pool->used == pool->max_size) return PROXY_CONNECTIONPOOL_FULL;

		proxy_con = proxy_connection_init();

		proxy_con->state = PROXY_CONNECTION_STATE_CONNECTING;
		proxy_con->address = address;

		proxy_connection_pool_add_connection(pool, proxy_con);
	} else {
		proxy_con->state = PROXY_CONNECTION_STATE_CONNECTED;
	}

	/* inc. the use-counter of the address */
	proxy_con->address->used++;

	*rcon = proxy_con;

	return PROXY_CONNECTIONPOOL_GOT_CONNECTION;
}

