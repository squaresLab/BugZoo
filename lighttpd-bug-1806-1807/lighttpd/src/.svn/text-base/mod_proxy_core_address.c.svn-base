#include <stdlib.h>
#include <string.h>

#include "log.h"
#include "sys-socket.h"
#include "mod_proxy_core_address.h"

proxy_address *proxy_address_init(void) {
	proxy_address *address;

	address = calloc(1, sizeof(*address));

	address->name = buffer_init();
	address->used = 0;

	return address;
}

void proxy_address_free(proxy_address *address) {
	if (!address) return;

	buffer_free(address->name);

	free(address);
}


proxy_address_pool *proxy_address_pool_init(void) {
	proxy_address_pool *address_pool;

	address_pool = calloc(1, sizeof(*address_pool));

	return address_pool;
}

void proxy_address_pool_free(proxy_address_pool *address_pool) {
	if (!address_pool) return;

	FOREACH(address_pool, proxy_address, element, proxy_address_free(element));

	if (address_pool->ptr) free(address_pool->ptr);

	free(address_pool);
}

void proxy_address_pool_add(proxy_address_pool *address_pool, proxy_address *address) {
	size_t i;

	/* check if this address is already known */

	for (i = 0; i < address_pool->used; i++) {
		proxy_address *pool_address = address_pool->ptr[i];

		if (buffer_is_equal(address->name, pool_address->name)) {
			/* TRACE("%s is already in the address-pool", BUF_STR(address->name)); */

			proxy_address_free(address);

			return;
		}
	}

	TRACE("adding %s to the address-pool", BUF_STR(address->name));

	ARRAY_STATIC_PREPARE_APPEND(address_pool);

	address_pool->ptr[address_pool->used++] = address;
}

int  proxy_address_pool_add_string(proxy_address_pool *address_pool, buffer *name) {
	struct addrinfo *res = NULL, pref, *cur;
	int ret;
	buffer *hostname = NULL, *port = NULL;
	char *colon;

	pref.ai_flags = 0;
	pref.ai_family = PF_UNSPEC;
	pref.ai_socktype = SOCK_STREAM;
	pref.ai_protocol = 0;
	pref.ai_addrlen = 0;
	pref.ai_addr = NULL;
	pref.ai_canonname = NULL;
	pref.ai_next = NULL;

	/* check the address style
	 *
	 * unix:/tmp/socket
	 * www.example.org
	 * www.example.org:80
	 * 127.0.0.1
	 * 127.0.0.1:80
	 * [::1]:80
	 * [::1]
	 */

	if (buffer_is_empty(name)) return -1;

	if (0 == strncmp(BUF_STR(name), "unix:", 5)) {
		/* a unix domain socket */
#ifdef HAVE_SYS_UN_H
		proxy_address *a = proxy_address_init();

		/* setup AF_UNIX sockaddr */
		a->addr.un.sun_family = AF_UNIX;
		strcpy(a->addr.un.sun_path, BUF_STR(name) + 5);
		a->addrlen = sizeof(a->addr.un);
/*
#ifdef SUN_LEN
		a->addrlen = SUN_LEN(&(a->addr.un));
#else
		a->addrlen = (name->used - 5) + sizeof(a->addr.un.sun_family);
#endif
*/

		a->state = PROXY_ADDRESS_STATE_ACTIVE;
		buffer_copy_string_buffer(a->name, name);

		proxy_address_pool_add(address_pool, a);
		return 0;
#else
		ERROR("unix: scheme is not supported for %s", BUF_STR(name));
		return -1;
#endif
	} else if (name->ptr[0] == '[') {
		if (name->ptr[name->used - 1] == ']') {
			/* no port-number attached */

			hostname = buffer_init();
			buffer_copy_string_len(hostname, BUF_STR(name) + 1, name->used - 3);
			port = buffer_init_string("80");
		} else if (NULL != (colon = strrchr(BUF_STR(name), ':'))) {
			/* with port number */

			hostname = buffer_init();
			buffer_copy_string_len(hostname, BUF_STR(name) + 1, colon - BUF_STR(name) - 2);
			port = buffer_init();
			buffer_copy_string(port, colon + 1);

		} else {
			ERROR("this is neither [<ipv6-address>] nor [<ipv6-address>]:<port>: %s", BUF_STR(name));

			return -1;
		}
	} else if (name->ptr[name->used - 1] != ']' &&
		   NULL != (colon = strrchr(BUF_STR(name), ':'))) {

		hostname = buffer_init();
		buffer_copy_string_len(hostname, BUF_STR(name), colon - BUF_STR(name));
		port = buffer_init();
		buffer_copy_string(port, colon + 1);
	} else {
		/* no colon, just a IPv4 address or a domain name */

		hostname = buffer_init_string(BUF_STR(name));
		port = buffer_init_string("80");
	}

	TRACE("resolving %s on port %s", BUF_STR(hostname), BUF_STR(port));

	if (0 != (ret = getaddrinfo(BUF_STR(hostname), BUF_STR(port), &pref, &res))) {
		ERROR("getaddrinfo failed: %s", gai_strerror(ret));

		buffer_free(hostname);
		buffer_free(port);

		return -1;
	}

	buffer_free(hostname);
	buffer_free(port);

	for (cur = res; cur; cur = cur->ai_next) {
		proxy_address *a = proxy_address_init();

		memcpy(&(a->addr), cur->ai_addr, cur->ai_addrlen);
		a->addrlen = cur->ai_addrlen;

		a->state = PROXY_ADDRESS_STATE_ACTIVE;
		buffer_prepare_copy(a->name, 128);

		switch (cur->ai_family) {
#ifdef HAVE_IPV6
		case AF_INET6:
			a->name->ptr[0] = '[';
			inet_ntop(cur->ai_family, &(a->addr.ipv6.sin6_addr), a->name->ptr + 1, a->name->size - 2);
			a->name->used = strlen(a->name->ptr) + 1;
			buffer_append_string(a->name, "]:");
			buffer_append_long(a->name, ntohs(a->addr.ipv6.sin6_port));
			break;
#endif
		case AF_INET:
			inet_ntop(cur->ai_family, &(a->addr.ipv4.sin_addr), a->name->ptr, a->name->size - 1);
			a->name->used = strlen(a->name->ptr) + 1;

			buffer_append_string(a->name, ":");
			buffer_append_long(a->name, ntohs(a->addr.ipv4.sin_port));
			break;
		default:
			ERROR("unknown address-family: %d", cur->ai_family);
			return -1;
		}


		proxy_address_pool_add(address_pool, a);
	}

	freeaddrinfo(res);

	return 0;
}


