#ifndef _HTTP_REQ_H_
#define _HTTP_REQ_H_

#include "array.h"
#include "chunk.h"
#include "http_parser.h"

typedef struct {
	int protocol;   /* http/1.0, http/1.1 */
	int method;     /* e.g. GET */
	buffer *uri_raw; /* e.g. /foobar/ */
	array *headers;
} http_req;

typedef struct {
	int     ok;
	buffer *errmsg;

	http_req *req;
	buffer_pool *unused_buffers;
} http_req_ctx_t;

LI_API http_req * http_request_init(void);
LI_API void http_request_free(http_req *req);
LI_API void http_request_reset(http_req *req);

LI_API parse_status_t http_request_parse_cq(chunkqueue *cq, http_req *http_request);

#endif
