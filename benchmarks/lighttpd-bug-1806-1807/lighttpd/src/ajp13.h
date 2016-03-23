
#ifndef _AJP13_H
#define _AJP13_H
/**
 * AJP13 protocol definitions.
 */
#define AJP13_MAX_PACKET_SIZE (8 * 1024)
#define AJP13_MAX_BODY_PACKET_SIZE (AJP13_MAX_PACKET_SIZE - AJP13_HEADER_LEN - 2)

/**
 * two byte maigc codes
 */
#define AJP13_SERVER_MAGIC 0x1234
#define AJP13_CONTAINER_MAGIC 0x4142

/**
 * packet types.
 */
typedef enum {
	AJP13_TYPE_DATA = 0,          /* 0 */
	AJP13_TYPE_UNKNOWN,           /* 1 */
	AJP13_TYPE_FORWARD_REQUEST,   /* 2 */
	AJP13_TYPE_SEND_BODY_CHUNK,   /* 3 */
	AJP13_TYPE_SEND_HEADERS,      /* 4 */
	AJP13_TYPE_END_RESPONSE,      /* 5 */
	AJP13_TYPE_GET_BODY_CHUNK,    /* 6 */
	AJP13_TYPE_SHUTDOWN,          /* 7 */
	AJP13_TYPE_PING_REQUEST,      /* 8 */
	AJP13_TYPE_CPONG_REPLY,       /* 9 */
	AJP13_TYPE_CPING_REQUEST,     /* 10 */
} ajp13_type_t;

/*
 * http method codes
 */
typedef enum {
	AJP13_METHOD_UNKNOWN = 0,     /* 0 */
	AJP13_METHOD_OPTIONS,         /* 1 */
	AJP13_METHOD_GET,             /* 2 */
	AJP13_METHOD_HEAD,            /* 3 */
	AJP13_METHOD_POST,            /* 4 */
	AJP13_METHOD_PUT,             /* 5 */
	AJP13_METHOD_DELETE,          /* 6 */
	AJP13_METHOD_TRACE,           /* 7 */
	AJP13_METHOD_PROPFIND,        /* 8 */
	AJP13_METHOD_PROPPATCH,       /* 9 */
	AJP13_METHOD_MKCOL,           /* 10 */
	AJP13_METHOD_COPY,            /* 11 */
	AJP13_METHOD_MOVE,            /* 12 */
	AJP13_METHOD_LOCK,            /* 13 */
	AJP13_METHOD_UNLOCK,          /* 14 */
	AJP13_METHOD_ACL,             /* 15 */
	AJP13_METHOD_REPORT,          /* 16 */
	AJP13_METHOD_VERSION_CONTROL, /* 17 */
	AJP13_METHOD_CHECKIN,         /* 18 */
	AJP13_METHOD_CHECKOUT,        /* 19 */
	AJP13_METHOD_UNCHECKOUT,      /* 20 */
	AJP13_METHOD_SEARCH,          /* 21 */
	AJP13_METHOD_MKWORKSPACE,     /* 22 */
	AJP13_METHOD_UPDATE,          /* 23 */
	AJP13_METHOD_LABEL,           /* 24 */
	AJP13_METHOD_MERGE,           /* 25 */
	AJP13_METHOD_BASELINE_CONTROL,/* 26 */
	AJP13_METHOD_MKACTIVITY       /* 27 */
} ajp13_method_t;

/*
 * request headers
 */
typedef enum {
	AJP13_REQ_ACCEPT = 0x01,         /* 0x01 */
	AJP13_REQ_ACCEPT_CHARSET,        /* 0x02 */
	AJP13_REQ_ACCEPT_ENCODING,       /* 0x03 */
	AJP13_REQ_ACCEPT_LANGUAGE,       /* 0x04 */
	AJP13_REQ_AUTHORIZATION,         /* 0x05 */
	AJP13_REQ_CONNECTION,            /* 0x06 */
	AJP13_REQ_CONTENT_TYPE,          /* 0x07 */
	AJP13_REQ_CONTENT_LENGTH,        /* 0x08 */
	AJP13_REQ_COOKIE,                /* 0x09 */
	AJP13_REQ_COOKIE2,               /* 0x0A */
	AJP13_REQ_HOST,                  /* 0x0B */
	AJP13_REQ_PRAGMA,                /* 0x0C */
	AJP13_REQ_REFERER,               /* 0x0D */
	AJP13_REQ_USER_AGENT             /* 0x0E */
} ajp13_request_header_t;

/*
 * request attributes
 */
typedef enum {
	AJP13_ATTRIBUTE_CONTEXT = 1,     /* 1    */
	AJP13_ATTRIBUTE_SERVLET_PATH,    /* 2    */
	AJP13_ATTRIBUTE_REMOTE_USER,     /* 3    */
	AJP13_ATTRIBUTE_AUTH_TYPE,       /* 4    */
	AJP13_ATTRIBUTE_QUERY_STRING,    /* 5    */
	AJP13_ATTRIBUTE_JVM_ROUTE,       /* 6    */
	AJP13_ATTRIBUTE_SSL_CERT,        /* 7    */
	AJP13_ATTRIBUTE_SSL_CIPHER,      /* 8    */
	AJP13_ATTRIBUTE_SSL_SESSION,     /* 9    */
	AJP13_ATTRIBUTE_REQ_ATTRIBUTE,   /* 10   */
	AJP13_ATTRIBUTE_SSL_KEY_SIZE,    /* 11   */
	AJP13_ATTRIBUTE_SECRET,          /* 12   */
	AJP13_ATTRIBUTE_STORED_METHOD,   /* 13   */
	AJP13_ATTRIBUTE_ARE_DONE = 0xFF, /* 0xFF */
} ajp13_attributes_t;

/*
 * response headers
 */
typedef enum {
	AJP13_RESP_CONTENT_TYPE = 0x01,  /* 0x01 */
	AJP13_RESP_CONTENT_LANGUAGE,     /* 0x02 */
	AJP13_RESP_CONTENT_LENGTH,       /* 0x03 */
	AJP13_RESP_DATE,                 /* 0x04 */
	AJP13_RESP_LAST_MODIFIED,        /* 0x05 */
	AJP13_RESP_LOCATION,             /* 0x06 */
	AJP13_RESP_SET_COOKIE,           /* 0x07 */
	AJP13_RESP_SET_COOKIE2,          /* 0x08 */
	AJP13_RESP_SERVLET_ENGINE,       /* 0x09 */
	AJP13_RESP_STATUS,               /* 0x0A */
	AJP13_RESP_WWW_AUTHENTICATE,     /* 0x0B */
} ajp13_response_header_t;

/*
 *
 */
#define AJP13_COMMON_HEADER_CODE 0xA000

/*
 * fixed header lengths.
 */
#define AJP13_HEADER_LEN 				4
#define AJP13_FULL_HEADER_LEN 	5

#endif /* _AJP13_H */

