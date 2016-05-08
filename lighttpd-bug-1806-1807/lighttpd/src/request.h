#ifndef _REQUEST_H_
#define _REQUEST_H_

#include "base.h"
#include "http_req.h"

LI_EXPORT int http_request_parse(server *srv, connection *con, http_req *req);

#endif
