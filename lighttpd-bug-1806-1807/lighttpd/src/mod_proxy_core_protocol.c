#include <stdlib.h>

#include "mod_proxy_core.h"
#include "mod_proxy_core_protocol.h"

static proxy_protocols *protocols = NULL;
static buffer *protocol_names = NULL;

proxy_protocol *proxy_protocol_init(void) {
	proxy_protocol *protocol;

	protocol = calloc(1, sizeof(*protocol));

	return protocol;
}

void proxy_protocol_free(proxy_protocol *protocol) {
	if (!protocol) return;

	buffer_free(protocol->name);

	free(protocol);
}

void proxy_protocols_init(void) {
	if(protocols) return;
	protocols = calloc(1, sizeof(*protocols));
	protocol_names = buffer_init();
}

void proxy_protocols_free(void) {
	if(!protocols) return;
	ARRAY_STATIC_FREE(protocols, proxy_protocol, element, proxy_protocol_free(element));

	free(protocols);
	buffer_free(protocol_names);
}

void proxy_protocols_register(proxy_protocol *protocol) {
	if(!protocols) return;
	ARRAY_STATIC_PREPARE_APPEND(protocols);

	protocols->ptr[protocols->used++] = protocol;

	/* append protocol name to list of names. */
	if(!buffer_is_empty(protocol_names)) {
		buffer_append_string(protocol_names, ", '");
	} else {
		buffer_append_string(protocol_names, "'");
	}
	buffer_append_string(protocol_names, BUF_STR(protocol->name));
	buffer_append_string(protocol_names, "'");
}

proxy_protocol *proxy_get_protocol(buffer *name) {
	if(!protocols) return NULL;

	FOREACH(protocols, proxy_protocol, element, if(buffer_is_equal(element->name,name)) return element; );

	return NULL;
}

const char *proxy_available_protocols() {
	return BUF_STR(protocol_names);
}

