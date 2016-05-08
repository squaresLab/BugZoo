#ifndef _MOD_PROXY_CORE_ADDRESS_H_
#define _MOD_PROXY_CORE_ADDRESS_H_

#include <time.h>
#include "buffer.h"
#include "sys-socket.h"
#include "array-static.h"

typedef enum {
	PROXY_ADDRESS_STATE_UNSET,
	PROXY_ADDRESS_STATE_ACTIVE,
	PROXY_ADDRESS_STATE_DISABLED,
} proxy_address_state_t;

typedef struct {
	sock_addr addr;
	socklen_t addrlen;

	buffer *name; /* a inet_ntoa() prepresentation of the address */

	time_t last_used;
	time_t disabled_until;

	size_t used; /* count of connections currently using this address */

	proxy_address_state_t state;
} proxy_address;

ARRAY_STATIC_DEF(proxy_address_pool, proxy_address, );

proxy_address_pool *proxy_address_pool_init(void);
void proxy_address_pool_free(proxy_address_pool *address_pool);
void proxy_address_pool_add(proxy_address_pool *address_pool, proxy_address *address);
int proxy_address_pool_add_string(proxy_address_pool *address_pool, buffer *address);

#endif
