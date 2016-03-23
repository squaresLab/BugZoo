#include <stdlib.h>

#include "mod_proxy_core_backend.h"
#include "mod_proxy_core_pool.h"
#include "mod_proxy_core_address.h"

proxy_backend *proxy_backend_init(void) {
	proxy_backend *backend;

	backend = calloc(1, sizeof(*backend));
	backend->pool = proxy_connection_pool_init();
	backend->address_pool = proxy_address_pool_init();
	backend->balancer = PROXY_BALANCE_RR;
	backend->name = buffer_init();
	backend->state = PROXY_BACKEND_STATE_ACTIVE;

	return backend;
}

void proxy_backend_free(proxy_backend *backend) {
	if (!backend) return;

	proxy_connection_pool_free(backend->pool);
	proxy_address_pool_free(backend->address_pool);
	buffer_free(backend->name);

	free(backend);
}

proxy_backends *proxy_backends_init(void) {
	proxy_backends *backends;

	backends = calloc(1, sizeof(*backends));

	return backends;
}

void proxy_backends_free(proxy_backends *backends) {
	FOREACH(backends, proxy_backend, element, proxy_backend_free(element))

	if (backends->ptr) free(backends->ptr);

	free(backends);
}

void proxy_backends_add(proxy_backends *backends, proxy_backend *backend) {
	ARRAY_STATIC_PREPARE_APPEND(backends);

	backends->ptr[backends->used++] = backend;
}
