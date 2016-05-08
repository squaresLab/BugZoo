#ifndef _MOD_PROXY_CORE_PROTOCOL_H_
#define _MOD_PROXY_CORE_PROTOCOL_H_

#include "base.h"
#include "array-static.h"
#include "buffer.h"

#define PROXY_CONNECTION_FUNC(x) \
		static int x(server *srv, proxy_connection *proxy_con)

#define PROXY_STREAM_DECODER_FUNC(x) \
		static handler_t x(server *srv, proxy_session *sess, chunkqueue *out)

#define PROXY_STREAM_ENCODER_FUNC(x) \
		static handler_t x(server *srv, proxy_session *sess, chunkqueue *in)

typedef struct proxy_protocol {
	buffer *name;

	int (*proxy_stream_init)             (server *srv, proxy_connection *proxy_con);
	int (*proxy_stream_cleanup)          (server *srv, proxy_connection *proxy_con);
	handler_t (*proxy_stream_decoder)          (server *srv, proxy_session *sess, chunkqueue *out);
	handler_t (*proxy_stream_encoder)          (server *srv, proxy_session *sess, chunkqueue *in);
	handler_t (*proxy_encode_request_headers)  (server *srv, proxy_session *sess, chunkqueue *in);

} proxy_protocol;

ARRAY_STATIC_DEF(proxy_protocols, proxy_protocol, );

proxy_protocol *proxy_protocol_init(void);
void proxy_protocol_free(proxy_protocol *protocol);

void proxy_protocols_init(void);
void proxy_protocols_free(void);
void proxy_protocols_register(proxy_protocol *protocol);
proxy_protocol *proxy_get_protocol(buffer *name);
const char *proxy_available_protocols(void);

#endif

