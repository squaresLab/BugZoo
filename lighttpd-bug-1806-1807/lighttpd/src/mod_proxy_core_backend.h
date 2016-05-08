#ifndef _MOD_PROXY_CORE_BACKEND_H_
#define _MOD_PROXY_CORE_BACKEND_H_

#include "array-static.h"
#include "array.h"
#include "buffer.h"
#include "mod_proxy_core_address.h"
#include "mod_proxy_core_pool.h"
#include "sys-socket.h"

/**
 * a single DNS name might explode to several IP addresses
 *
 * url:
 * - http://foo.bar/suburl/
 * - https://foo.bar/suburl/
 * - unix:/tmp/socket
 * - tcp://foobar:1025/
 *
 * backend:
 * - scgi
 * - http
 * - fastcgi
 * - ajp13
 *
 * request-url-rewrite
 * response-url-rewrite
 */
typedef enum {
	PROXY_BALANCE_UNSET,
	PROXY_BALANCE_SQF,
	PROXY_BALANCE_CARP,
	PROXY_BALANCE_RR,
	PROXY_BALANCE_STATIC
} proxy_balance_t;

typedef enum {
	PROXY_BACKEND_STATE_UNSET,
	PROXY_BACKEND_STATE_ACTIVE,
	PROXY_BACKEND_STATE_FULL,
	PROXY_BACKEND_STATE_DISABLED,
} proxy_backend_state_t;

typedef struct {
	buffer *name;

	proxy_connection_pool *pool;  /* pool of active connections */
	int use_keepalive;

	proxy_address_pool *address_pool; /* possible destination-addresses, disabling is done here */
	unsigned int disabled_addresses; /* track how many addresses are disabled. */
	proxy_balance_t balancer; /* how to choose a address from the address-pool */
	struct proxy_protocol *protocol; /* protocol handler */

	proxy_backend_state_t state;

	/* statistics counters. */
	data_integer *request_count;
	data_integer *load;
	data_integer *pool_size;
	data_integer *requests_failed;
} proxy_backend;

ARRAY_STATIC_DEF(proxy_backends, proxy_backend, );

proxy_backend *proxy_backend_init(void);
void proxy_backend_free(proxy_backend *backend);

proxy_backends *proxy_backends_init(void);
void proxy_backends_free(proxy_backends *backends);
void proxy_backends_add(proxy_backends *backends, proxy_backend *backend);

#endif

