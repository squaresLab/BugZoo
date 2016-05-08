#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <stdio.h>

#include "inet_ntop_cache.h"
#include "mod_proxy_core.h"
#include "mod_proxy_core_protocol.h"
#include "buffer.h"
#include "log.h"
#include "array.h"
#include "keyvalue.h"
#include "ajp13.h"

#define CORE_PLUGIN "mod_proxy_core"

typedef struct {
	http_method_t   http;
	ajp13_method_t  ajp13;
} http_method_map;

static http_method_map http_methods[] = {
	{ HTTP_METHOD_GET,             AJP13_METHOD_GET },
	{ HTTP_METHOD_POST,            AJP13_METHOD_POST },
	{ HTTP_METHOD_HEAD,            AJP13_METHOD_HEAD },
	{ HTTP_METHOD_OPTIONS,         AJP13_METHOD_OPTIONS },
	{ HTTP_METHOD_PROPFIND,        AJP13_METHOD_PROPFIND },
	{ HTTP_METHOD_MKCOL,           AJP13_METHOD_MKCOL },
	{ HTTP_METHOD_PUT,             AJP13_METHOD_PUT },
	{ HTTP_METHOD_DELETE,          AJP13_METHOD_DELETE },
	{ HTTP_METHOD_COPY,            AJP13_METHOD_COPY },
	{ HTTP_METHOD_MOVE,            AJP13_METHOD_MOVE },
	{ HTTP_METHOD_PROPPATCH,       AJP13_METHOD_PROPPATCH },
	{ HTTP_METHOD_REPORT,          AJP13_METHOD_REPORT },
	{ HTTP_METHOD_CHECKOUT,        AJP13_METHOD_CHECKOUT },
	{ HTTP_METHOD_CHECKIN,         AJP13_METHOD_CHECKIN },
	{ HTTP_METHOD_VERSION_CONTROL, AJP13_METHOD_VERSION_CONTROL },
	{ HTTP_METHOD_UNCHECKOUT,      AJP13_METHOD_UNCHECKOUT },
	{ HTTP_METHOD_MKACTIVITY,      AJP13_METHOD_MKACTIVITY },
	{ HTTP_METHOD_MERGE,           AJP13_METHOD_MERGE },
	{ HTTP_METHOD_LOCK,            AJP13_METHOD_LOCK },
	{ HTTP_METHOD_UNLOCK,          AJP13_METHOD_UNLOCK },
	{ HTTP_METHOD_LABEL,           AJP13_METHOD_LABEL },
	{ HTTP_METHOD_CONNECT,         AJP13_METHOD_UNKNOWN },
	{ HTTP_METHOD_UNSET,           AJP13_METHOD_UNKNOWN }
};

static ajp13_method_t ajp13_convert_http_method(http_method_t http_method) {
	int i;
	/* try fast lookup.  if http_methods[] is sorted, we will find it this way. */
	if(http_method != HTTP_METHOD_UNSET) {
		if(http_methods[http_method].http == http_method) {
			return http_methods[http_method].ajp13;
		}
	}
	/* walk the list to find ajp13 method. */
	for(i = 0; http_methods[i].http != HTTP_METHOD_UNSET; i++) {
		if(http_methods[i].http == http_method) return http_methods[i].http;
	}
	return AJP13_METHOD_UNKNOWN;
}

/*
 * request header keyvalue map.
 *
 * Note: The strings have to be uppercase
 */
static keyvalue request_headers[] = {
	{ AJP13_REQ_ACCEPT,            "ACCEPT" },
	{ AJP13_REQ_ACCEPT_CHARSET,    "ACCEPT-CHARSET" },
	{ AJP13_REQ_ACCEPT_ENCODING,   "ACCEPT-ENCODING" },
	{ AJP13_REQ_ACCEPT_LANGUAGE,   "ACCEPT-LANGUAGE" },
	{ AJP13_REQ_AUTHORIZATION,     "AUTHORIZATION" },
	{ AJP13_REQ_CONNECTION,        "CONNECTION" },
	{ AJP13_REQ_CONTENT_TYPE,      "CONTENT-TYPE" },
	{ AJP13_REQ_CONTENT_LENGTH,    "CONTENT-LENGTH" },
	{ AJP13_REQ_COOKIE,            "COOKIE" },
	{ AJP13_REQ_COOKIE2,           "COOKIE2" },
	{ AJP13_REQ_HOST,              "HOST" },
	{ AJP13_REQ_PRAGMA,            "PRAGMA" },
	{ AJP13_REQ_REFERER,           "REFERER" },
	{ AJP13_REQ_USER_AGENT,        "USER-AGENT" },

	{ -1, NULL }
};

/*
 * response header keyvalue map
 *
 * Note: The strings don't have to be all uppercase here
 */
static keyvalue response_headers[] = {
	{ AJP13_RESP_CONTENT_TYPE,     "Content-Type" },
	{ AJP13_RESP_CONTENT_LANGUAGE, "Content-Language" },
	{ AJP13_RESP_CONTENT_LENGTH,   "Content-Length" },
	{ AJP13_RESP_DATE,             "Date" },
	{ AJP13_RESP_LAST_MODIFIED,    "Last-Modified" },
	{ AJP13_RESP_LOCATION,         "Location" },
	{ AJP13_RESP_SET_COOKIE,       "Set-Cookie" },
	{ AJP13_RESP_SET_COOKIE2,      "Set-Cookie2" },
	{ AJP13_RESP_SERVLET_ENGINE,   "Servlet-Engine" },
	{ AJP13_RESP_STATUS,           "Status" },
	{ AJP13_RESP_WWW_AUTHENTICATE, "WWW-Authenticate" },
	{ -1, NULL }
};


typedef struct {
	PLUGIN_DATA;

	proxy_protocol *protocol;
} protocol_plugin_data;

typedef struct {
	size_t   len;
	off_t    offset;
	int      type;
} ajp13_packet;

typedef struct {
	unsigned char magicB0;
	unsigned char magicB1;
	unsigned char lengthB0;
	unsigned char lengthB1;
	unsigned char type;
} AJP13_Header;

/**
 * init the AJP13_header
 */
static int ajp13_header(char *ptr, int length) {
	AJP13_Header * header = (AJP13_Header *)ptr;
	header->magicB0 = (AJP13_SERVER_MAGIC >> 8) & 0xff;
	header->magicB1 = (AJP13_SERVER_MAGIC     ) & 0xff;
	header->lengthB0 = (length >> 8) & 0xff;
	header->lengthB1 = (length     ) & 0xff;
	return AJP13_HEADER_LEN;
}

/**
 * The ajp13 protocol decoder will use this struct for storing state variables
 * used in decoding the stream
 */
typedef struct {
	buffer        *buf;      /* holds raw header bytes or used to buffer STDERR */
	off_t         offset;    /* parse offset into buffer. */
	ajp13_packet  packet;    /* parsed info about current packet. */
	size_t        chunk_len; /* chunk length */
	size_t	requested_bytes; /* backend requested we send this many bytes of the request content. */
} ajp13_state_data;

ajp13_state_data *ajp13_state_data_init(void) {
	ajp13_state_data *data;

	data = calloc(1, sizeof(*data));
	data->buf = buffer_init();

	return data;
}

void ajp13_state_data_free(ajp13_state_data *data) {
	buffer_free(data->buf);
	free(data);
}

void ajp13_state_data_reset(ajp13_state_data *data) {
	buffer_reset(data->buf);
	data->packet.len = 0;
	data->packet.offset = 0;
	data->packet.type = 0;
	data->offset = 0;
	data->chunk_len = 0;
}

/**
 * encode ajp13 byte/boolean
 */
static int ajp13_encode_byte(buffer *buf, int val) {

	/* format : 2 bytes integer */
	buffer_prepare_append(buf, 1);

	buf->ptr[buf->used++] = val;

	return 1;
}

/**
 * encode ajp13 integer (2 bytes)
 */
static int ajp13_encode_int(buffer *buf, int val) {

	/* format : 2 bytes integer */
	buffer_prepare_append(buf, 2);

	buf->ptr[buf->used++] = (val >> 8) & 0xff;
	buf->ptr[buf->used++] = (val >> 0) & 0xff;

	return 2;
}

/**
 * encode ajp13 string.
 */
static int ajp13_encode_string(buffer *buf, const char *str, size_t str_len) {
	size_t len = 0;

	if (!str || str_len == 0) {
		return ajp13_encode_int(buf,0xFFFF);
	}

	/* format : 2 byte string length : string : null */
	len = 2 + str_len + 1;

	buffer_prepare_append(buf, len);

	ajp13_encode_int(buf,str_len);
	/* include the NUL */
  buffer_append_memory(buf, str, str_len + 1);

	return len;
}

/**
 * add a key-value pair to the ajp13-buffer
 */
#define MAX_KEY_LEN 16
static int ajp13_env_add(buffer *buf, const char *key, size_t key_len, const char *val, size_t val_len) {
	char uppercase_key[MAX_KEY_LEN];
	size_t len = 0;
	int code = -1;
	size_t i;

	if (!key || !val) return -1;

	if(key_len < MAX_KEY_LEN) {
		/* convert key to uppercase */
		for(i=0;i <key_len;i++) {
			uppercase_key[i] = toupper(key[i]);
		}
		uppercase_key[key_len] = '\0';
		code = keyvalue_get_key(request_headers, uppercase_key);
	}
	if(code >= 0) {
		len += ajp13_encode_int(buf, AJP13_COMMON_HEADER_CODE + code);
	} else {
		len += ajp13_encode_string(buf, key, key_len);
	}
	len += ajp13_encode_string(buf, val, val_len);

	return len;
}

/**
 * decode ajp13 integer (2 bytes)
 */
static int ajp13_decode_int(ajp13_state_data *data) {
	int val = 0;

	if ((data->buf->used - data->offset) <= 2) return -1;

	val = (unsigned char)data->buf->ptr[data->offset++];
	val <<= 8;
	val |= (unsigned char)data->buf->ptr[data->offset++];

	return val;
}

/**
 * decode ajp13 string.
 */
static int ajp13_decode_string(buffer *str, ajp13_state_data *data, int is_header) {
	size_t len = 0;
	const char *p = NULL;

	if (!str) {
		return len;
	}

	/* string length */
	len = ajp13_decode_int(data);
	if ((ssize_t)len == -1) return len;

	/* if string is header, check for common header code. */
	if (is_header && (len & AJP13_COMMON_HEADER_CODE)) {
		p = keyvalue_get_value(response_headers, len);
		if(p) len = strlen(p);
	}
	/* copy string from buffer. */
	if (p == NULL) {
		if ((data->buf->used - data->offset) <= (len + 1)) return -1;
		p = data->buf->ptr + data->offset;
		data->offset += len + 1;
	}
	buffer_copy_string_len(str, p, len);

	return len;
}

/**
 * decode ajp13 response headers
 */
static int ajp13_decode_response_headers(http_resp *resp, ajp13_state_data *data) {
	buffer *key, *value;
	int key_len, value_len;
	int i,num;

	resp->protocol = HTTP_VERSION_UNSET;
	resp->status = ajp13_decode_int(data);
	if (resp->status == -1) return -1;
	if (ajp13_decode_string(resp->reason, data, 0) == -1) return -1;
	num = ajp13_decode_int(data);
	if(num > 0) {
		key = buffer_init();
		value = buffer_init();
		for(i = 0; i < num; i++) {
			key_len = ajp13_decode_string(key, data, 1);
			value_len = ajp13_decode_string(value, data, 1);
			if (key_len > 0 && value_len >= 0) {
				array_append_key_value(resp->headers, key->ptr, key_len, value->ptr, value_len);
			}
		}
		buffer_free(key);
		buffer_free(value);
	}
	return 0;
}

PROXY_CONNECTION_FUNC(proxy_ajp13_init) {
	UNUSED(srv);

	if(!proxy_con->protocol_data) {
		proxy_con->protocol_data = ajp13_state_data_init();
	}
	return 1;
}

PROXY_CONNECTION_FUNC(proxy_ajp13_cleanup) {
	UNUSED(srv);

	if(proxy_con->protocol_data) {
		ajp13_state_data_free((ajp13_state_data *)proxy_con->protocol_data);
		proxy_con->protocol_data = NULL;
	}
	return 1;
}

int proxy_ajp13_forward_request(server *srv, connection *con, proxy_session *sess, buffer *packet) {
	char buf[32];
	const char *str;
	server_socket *srv_sock = con->srv_socket;
#ifdef HAVE_IPV6
	char b2[INET6_ADDRSTRLEN + 1];
#endif
	int len = 0,port = 0;
	size_t i;

	/* prefix_code */
	len += ajp13_encode_byte(packet, AJP13_TYPE_FORWARD_REQUEST);

	/* http method */
	len += ajp13_encode_byte(packet, ajp13_convert_http_method(con->request.http_method));

	/* protocol */
	str = get_http_version_name(con->request.http_version);
	len += ajp13_encode_string(packet, str, strlen(str));

	/* request uri
	 *
	 * the docs where unspecific here, but it looks like tomcat wants to get
	 * the uri without the query-string here */
	len += ajp13_encode_string(packet, CONST_BUF_LEN(con->uri.path));

	/* remote address */
	str = inet_ntop_cache_get_ip(srv, &(con->dst_addr));
	len += ajp13_encode_string(packet, str, strlen(str));

	/* remote host */
	len += ajp13_encode_string(packet, CONST_STR_LEN(""));

	/* server name */
	if (con->server_name->used) {
		len += ajp13_encode_string(packet, CONST_BUF_LEN(con->server_name));
	} else {
#ifdef HAVE_IPV6
		str = inet_ntop(srv_sock->addr.plain.sa_family,
			      srv_sock->addr.plain.sa_family == AF_INET6 ?
			      (const void *) &(srv_sock->addr.ipv6.sin6_addr) :
			      (const void *) &(srv_sock->addr.ipv4.sin_addr),
			      b2, sizeof(b2)-1);
#else
		str = inet_ntoa(srv_sock->addr.ipv4.sin_addr);
#endif
		len += ajp13_encode_string(packet, str, strlen(str));
	}

	/* server port */
#ifdef HAVE_IPV6
	port = ntohs(srv_sock->addr.plain.sa_family ? srv_sock->addr.ipv6.sin6_port : srv_sock->addr.ipv4.sin_port);
#else
	port = ntohs(srv_sock->addr.ipv4.sin_port);
#endif
	len += ajp13_encode_int(packet, port);

	/* is_ssl */
#ifdef USE_OPENSSL
	len += ajp13_encode_byte(packet, srv_sock->is_ssl);
#else
	len += ajp13_encode_byte(packet, 0);
#endif

	/* make sure we have content-length header */
	if(con->request.content_length > 0) {
		ltostr(buf, con->request.content_length);
		array_set_key_value(sess->request_headers, CONST_STR_LEN("Content-Length"), buf, strlen(buf));
	} else {
		array_set_key_value(sess->request_headers, CONST_STR_LEN("Content-Length"), CONST_STR_LEN("0"));
	}

	/* request headers count */
	len += ajp13_encode_int(packet, sess->request_headers->used);

	/* request headers */
	for (i = 0; i < sess->request_headers->used; i++) {
		data_string *ds;
		ds = (data_string *)sess->request_headers->data[i];
		len += ajp13_env_add(packet, CONST_BUF_LEN(ds->key), CONST_BUF_LEN(ds->value));
	}

	/* remote user */
	if (!buffer_is_empty(con->authed_user)) {
		len += ajp13_encode_byte(packet, AJP13_ATTRIBUTE_REMOTE_USER);
		len += ajp13_encode_string(packet, CONST_BUF_LEN(con->authed_user));
	}

	/* query string */
	if (!buffer_is_empty(con->uri.query)) {
		len += ajp13_encode_byte(packet, AJP13_ATTRIBUTE_QUERY_STRING);
		len += ajp13_encode_string(packet, CONST_BUF_LEN(con->uri.query));
	}

	/* jvm_route */
	if (!buffer_is_empty(sess->proxy_con->address->name)) {
		len += ajp13_encode_byte(packet, AJP13_ATTRIBUTE_JVM_ROUTE);
		len += ajp13_encode_string(packet, CONST_BUF_LEN(sess->proxy_con->address->name));
	}

	/* request terminator */
	len += ajp13_encode_byte(packet, AJP13_ATTRIBUTE_ARE_DONE);

	return len;
}

PROXY_STREAM_ENCODER_FUNC(proxy_ajp13_encode_request_headers) {
	proxy_connection *proxy_con = sess->proxy_con;
	ajp13_state_data *data = (ajp13_state_data *)proxy_con->protocol_data;
	chunkqueue *out = proxy_con->send;
	connection *con = sess->remote_con;
	buffer *packet;
	size_t len;

	UNUSED(srv);
	UNUSED(in);

	packet = chunkqueue_get_append_buffer(out);
	buffer_prepare_copy(packet, 1024);

	/* reserve bytes for header.  Will over right header when we know packet length. */
	packet->used += AJP13_HEADER_LEN;

	/* send AJP13_TYPE_FORWARD_REQUEST */
	len = proxy_ajp13_forward_request(srv, con, sess, packet);
	packet->used++; /* this is needed because the network will only write "used - 1" bytes */
	out->bytes_in += packet->used - 1;

	/* rewrite packet header with correct length. */
	ajp13_header(packet->ptr, len);

	if(con->request.content_length > AJP13_MAX_BODY_PACKET_SIZE) {
		data->requested_bytes = AJP13_MAX_BODY_PACKET_SIZE;
	} else if(con->request.content_length > 0) {
		data->requested_bytes = con->request.content_length;
	} else {
		data->requested_bytes = 0;
	}

	return HANDLER_FINISHED;
}

/*
 * copy len bytes from chunk-chain into buffer
 */
static int proxy_ajp13_fill_buffer(ajp13_state_data *data, chunkqueue *in, size_t len) {
	off_t we_have = 0, we_need = len;
	chunk *c;

	buffer_prepare_append(data->buf, we_need);
	for (c = in->first; c && we_need > 0; c = c->next) {
		if(c->mem->used == 0) continue;

		we_have = c->mem->used - c->offset - 1;
		if (we_have == 0) continue;
		if (we_have > we_need) we_have = we_need;

		buffer_append_string_len(data->buf, c->mem->ptr + c->offset, we_have);
		data->packet.offset += we_have;
		c->offset += we_have;
		in->bytes_out += we_have;
		we_need -= we_have;
	}
	return we_need;
}

PROXY_STREAM_DECODER_FUNC(proxy_ajp13_stream_decoder_internal) {
	proxy_connection *proxy_con = sess->proxy_con;
	ajp13_state_data *data = (ajp13_state_data *)proxy_con->protocol_data;
	chunkqueue *in = proxy_con->recv;
	AJP13_Header *header;
	size_t we_parsed = 0, we_need = 0;
	handler_t rc = HANDLER_GO_ON;
	int magic = 0;
	int reuse = 0;

	UNUSED(srv);

	/* no data ? */
	if (!in->first) return HANDLER_GO_ON;

	/* parse the packet header. */
	if(data->packet.offset < AJP13_FULL_HEADER_LEN) {
		we_need = (AJP13_FULL_HEADER_LEN - data->packet.offset);
		/* copy ajp13 header to buffer */
		we_need = proxy_ajp13_fill_buffer(data, in, we_need);
		/* make sure we have the full ajp13 header. */
		if(we_need > 0) {
			/* we need more data to parse the header. */
			return HANDLER_GO_ON;
		}
		/* parse raw header. */
		header = (AJP13_Header *)(data->buf->ptr);

		data->packet.len = ((header->lengthB0 << 8) | header->lengthB1);
		data->packet.len--; /* packet type byte already parsed. */
		data->packet.type = header->type;
		magic = ((header->magicB0 << 8) | header->magicB1);
		if (magic != AJP13_CONTAINER_MAGIC) {
			ERROR("%s", "bad ajp13 magic code, invalid protocl stream");
			return HANDLER_ERROR;
		}

		/* Finished parsing raw header bytes. */
		buffer_reset(data->buf);
	}

	/* for most packet types copy the content into the data buffer */
	if (data->packet.type != AJP13_TYPE_SEND_BODY_CHUNK) {
		we_need = data->packet.len - (data->packet.offset - AJP13_FULL_HEADER_LEN);
		if(we_need > 0) {
			/* copy ajp13 packet contents to buffer */
			we_need = proxy_ajp13_fill_buffer(data, in, we_need);
			/* make sure we have the full ajp13 packet content. */
			if(we_need > 0) {
				/* we need more data to parse the content. */
				return HANDLER_GO_ON;
			}
		}
	}

	switch (data->packet.type) {
	case AJP13_TYPE_GET_BODY_CHUNK:
		data->requested_bytes = ajp13_decode_int(data);
		break;
	case AJP13_TYPE_SEND_HEADERS:
		if (ajp13_decode_response_headers(sess->resp, data) == -1) {
			ERROR("%s", "Error parsing response_headers");
			rc = HANDLER_ERROR;
		}
		sess->have_response_headers = 1;
		break;
	case AJP13_TYPE_SEND_BODY_CHUNK:
		/* parse chunk length */
		we_parsed = (data->packet.offset - AJP13_FULL_HEADER_LEN);
		if (we_parsed < 2) {
			we_need = 2 - we_parsed;
			/* copy chunk length bytes to buffer */
			we_need = proxy_ajp13_fill_buffer(data, in, we_need);
			if(we_need > 0) {
				/* we need more data to parse the chunk length. */
				return HANDLER_GO_ON;
			}
			/* parse chunk length */
			data->chunk_len = ajp13_decode_int(data);
		}
		/* parse chunk data. */
		we_parsed = (data->packet.offset - 2 - AJP13_FULL_HEADER_LEN);
		if(we_parsed < data->chunk_len) {
			we_need = data->chunk_len - we_parsed;
			/* copy chunk data */
			we_parsed = chunkqueue_steal_chunks_len(out, in->first, we_need);
			data->packet.offset += we_parsed;
			we_need -= we_parsed;
			in->bytes_out += we_parsed;
			out->bytes_in += we_parsed;
		}
		we_need = data->packet.len - (data->packet.offset - AJP13_FULL_HEADER_LEN);
		/* ignore padding */
		if(we_need > 0) {
			we_parsed = chunkqueue_skip(in, we_need);
			data->packet.offset += we_parsed;
			we_need -= we_parsed;
			in->bytes_out += we_parsed;
		}
		rc = HANDLER_GO_ON;
		break;
	case AJP13_TYPE_END_RESPONSE:
		if(data->buf->used >= 1) {
			reuse = data->buf->ptr[0];
		}
		if(reuse != 1) {
			sess->is_closing = 1;
		}
		sess->is_request_finished = 1;
		/* close the queues. no more data to decode. */
		in->is_closed = 1;
		out->is_closed = 1;
		/* make sure the send queue is closed, since we can't send any more request content. */
		proxy_con->send->is_closed = 1;
		rc = HANDLER_FINISHED;
		break;
	default:
		TRACE("unknown packet.type: %d", data->packet.type);
		rc = HANDLER_ERROR;
		break;
	}

	if(we_need == 0) {
		/* packet finished, reset state for next packet */
		ajp13_state_data_reset(data);
	}

	chunkqueue_remove_finished_chunks(in);

	return rc;
}

PROXY_STREAM_DECODER_FUNC(proxy_ajp13_stream_decoder) {
	proxy_connection *proxy_con = sess->proxy_con;
	chunkqueue *in = proxy_con->recv;
	int res;

	if(out->is_closed) return 1;
	/* decode the whole packet stream */
	do {
		/* decode the packet */
		res = proxy_ajp13_stream_decoder_internal(srv, sess, out);
	} while (in->first && res == HANDLER_GO_ON);

	return res;
}

/**
 * transform the content-stream into a valid FastCGI STDIN content-stream
 *
 * as we don't apply chunked-encoding here, pass it on AS IS
 */
PROXY_STREAM_ENCODER_FUNC(proxy_ajp13_stream_encoder) {
	proxy_connection *proxy_con = sess->proxy_con;
	ajp13_state_data *data = (ajp13_state_data *)proxy_con->protocol_data;
	chunkqueue *out = proxy_con->send;
	size_t we_need = 0, we_have = 0;
	buffer *b;

	UNUSED(srv);

	/* output queue closed, can't encode any more data. */
	if(out->is_closed) return HANDLER_FINISHED;

	if (data->requested_bytes == 0) {
		/* backend needs to send a request for more content before we can encode more. */
		return HANDLER_GO_ON;
	}

	/* calculate how many bytes we can encode. */
	if (in->bytes_in > in->bytes_out) {
		we_need = in->bytes_in - in->bytes_out;
		if (we_need > AJP13_MAX_BODY_PACKET_SIZE) we_need = AJP13_MAX_BODY_PACKET_SIZE;
		if (we_need > data->requested_bytes) we_need = data->requested_bytes;

		data->requested_bytes = 0;
	}
	/*
	 * write ajp13 header
	 */
	b = chunkqueue_get_append_buffer(out);
	buffer_prepare_copy(b, AJP13_HEADER_LEN);
	b->used += AJP13_HEADER_LEN;
	if (we_need > 0) {
		ajp13_header(b->ptr, we_need + 2);
		ajp13_encode_int(b, we_need);
	} else {
		/* empty body packet to mark EOF, if the backend requested data beyond
		 * the end of the request content.
		 */
		ajp13_header(b->ptr, we_need);
	}
	out->bytes_in += b->used;
	b->used++;

	we_have = chunkqueue_steal_chunks_len(out, in->first, we_need);
	in->bytes_out += we_have;
	out->bytes_in += we_have;

	if (in->bytes_in == in->bytes_out && in->is_closed) {
		/* We are finished encoding the request content,
		 * but we can't close the send queue here since the backend might
		 * try to request more request content then is available and
		 * we will have to response with a 0 length body packet.
		 */
		return HANDLER_FINISHED;
	}

	return HANDLER_GO_ON;
}

INIT_FUNC(mod_proxy_backend_ajp13_init) {
	mod_proxy_core_plugin_data *core_data;
	protocol_plugin_data *p;

	/* get the plugin_data of the core-plugin */
	core_data = plugin_get_config(srv, CORE_PLUGIN);
	if(!core_data) return NULL;

	p = calloc(1, sizeof(*p));

	/* define protocol handler callbacks */
	p->protocol = core_data->proxy_register_protocol("ajp13");

	p->protocol->proxy_stream_init = proxy_ajp13_init;
	p->protocol->proxy_stream_cleanup = proxy_ajp13_cleanup;
	p->protocol->proxy_stream_decoder = proxy_ajp13_stream_decoder;
	p->protocol->proxy_stream_encoder = proxy_ajp13_stream_encoder;
	p->protocol->proxy_encode_request_headers = proxy_ajp13_encode_request_headers;

	return p;
}

FREE_FUNC(mod_proxy_backend_ajp13_free) {
	protocol_plugin_data *p = p_d;

	UNUSED(srv);

	if (!p) return HANDLER_GO_ON;

	free(p);

	return HANDLER_GO_ON;
}

LI_EXPORT int mod_proxy_backend_ajp13_plugin_init(plugin *p) {
	data_string *ds;

	p->version      = LIGHTTPD_VERSION_ID;
	p->name         = buffer_init_string("mod_proxy_backend_ajp13");

	p->init         = mod_proxy_backend_ajp13_init;
	p->cleanup      = mod_proxy_backend_ajp13_free;

	p->data         = NULL;

	ds = data_string_init();
	buffer_copy_string(ds->value, CORE_PLUGIN);
	array_insert_unique(p->required_plugins, (data_unset *)ds);

	return 0;
}


