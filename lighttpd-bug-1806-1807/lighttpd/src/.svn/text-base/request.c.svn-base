#include <sys/stat.h>

#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <errno.h>

#include "request.h"
#include "keyvalue.h"
#include "log.h"
#include "http_req.h"

#include "sys-strings.h"

static int request_check_hostname(buffer *host) {
	enum { DOMAINLABEL, TOPLABEL } stage = TOPLABEL;
	size_t i;
	int label_len = 0;
	size_t host_len;
	char *colon;
	int is_ip = -1; /* -1 don't know yet, 0 no, 1 yes */
	int level = 0;

	/*
	 *       hostport      = host [ ":" port ]
	 *       host          = hostname | IPv4address | IPv6address
	 *       hostname      = *( domainlabel "." ) toplabel [ "." ]
	 *       domainlabel   = alphanum | alphanum *( alphanum | "-" ) alphanum
	 *       toplabel      = alpha | alpha *( alphanum | "-" ) alphanum
	 *       IPv4address   = 1*digit "." 1*digit "." 1*digit "." 1*digit
	 *       IPv6address   = "[" ... "]"
	 *       port          = *digit
	 */

	/* no Host: */
	if (buffer_is_empty(host)) return 0;
	if (host->used < 1) return 0;

	host_len = host->used - 1;

	/* IPv6 adress */
	if (host->ptr[0] == '[') {
		char *c = host->ptr + 1;
		int colon_cnt = 0;

		/* check portnumber */
		for (; *c && *c != ']'; c++) {
			if (*c == ':') {
				if (++colon_cnt > 7) {
					return -1;
				}
			} else if (!light_isxdigit(*c)) {
				return -1;
			}
		}

		/* missing ] */
		if (!*c) {
			return -1;
		}

		/* check port */
		if (*(c+1) == ':') {
			for (c += 2; *c; c++) {
				if (!light_isdigit(*c)) {
					return -1;
				}
			}
		}
		return 0;
	}

	if (NULL != (colon = memchr(host->ptr, ':', host_len))) {
		char *c = colon + 1;

		/* check portnumber */
		for (; *c; c++) {
			if (!light_isdigit(*c)) return -1;
		}

		/* remove the port from the host-len */
		host_len = colon - host->ptr;
	}

	/* Host is empty */
	if (host_len == 0) return -1;

	/* scan from the right and skip the \0 */
	for (i = host_len - 1; i + 1 > 0; i--) {
		const char c = host->ptr[i];

		switch (stage) {
		case TOPLABEL:
			if (c == '.') {
				/* only switch stage, if this is not the last character */
				if (i != host_len - 1) {
					if (label_len == 0) {
						return -1;
					}

					/* check the first character at right of the dot */
					if (is_ip == 0) {
						if (!light_isalpha(host->ptr[i+1])) {
							return -1;
						}
					} else if (!light_isdigit(host->ptr[i+1])) {
						is_ip = 0;
					} else if ('-' == host->ptr[i+1]) {
						return -1;
					} else {
						/* just digits */
						is_ip = 1;
					}

					stage = DOMAINLABEL;

					label_len = 0;
					level++;
				} else if (i == 0) {
					/* just a dot and nothing else is evil */
					return -1;
				}
			} else if (i == 0) {
				/* the first character of the hostname */
				if (!light_isalpha(c)) {
					return -1;
				}
				label_len++;
			} else {
				if (c != '-' && !light_isalnum(c)) {
					return -1;
				}
				if (is_ip == -1) {
					if (!light_isdigit(c)) is_ip = 0;
				}
				label_len++;
			}

			break;
		case DOMAINLABEL:
			if (is_ip == 1) {
				if (c == '.') {
					if (label_len == 0) {
						return -1;
					}

					label_len = 0;
					level++;
				} else if (!light_isdigit(c)) {
					return -1;
				} else {
					label_len++;
				}
			} else {
				if (c == '.') {
					if (label_len == 0) {
						return -1;
					}

					/* c is either - or alphanum here */
					if ('-' == host->ptr[i+1]) {
						return -1;
					}

					label_len = 0;
					level++;
				} else if (i == 0) {
					if (!light_isalnum(c)) {
						return -1;
					}
					label_len++;
				} else {
					if (c != '-' && !light_isalnum(c)) {
						return -1;
					}
					label_len++;
				}
			}

			break;
		}
	}

	/* a IP has to consist of 4 parts */
	if (is_ip == 1 && level != 3) {
		return -1;
	}

	if (label_len == 0) {
		return -1;
	}

	return 0;
}

#if 0
#define DUMP_HEADER
#endif

int http_request_split_value(array *vals, buffer *b) {
	char *s;
	size_t i;
	int state = 0;
	/*
	 * parse
	 *
	 * val1, val2, val3, val4
	 *
	 * into a array (more or less a explode() incl. striping of whitespaces
	 */

	if (b->used == 0) return 0;

	s = b->ptr;

	for (i =0; i < b->used - 1; ) {
		char *start = NULL, *end = NULL;
		data_string *ds;

		switch (state) {
		case 0: /* ws */

			/* skip ws */
			for (; (*s == ' ' || *s == '\t') && i < b->used - 1; i++, s++);


			state = 1;
			break;
		case 1: /* value */
			start = s;

			for (; *s != ',' && i < b->used - 1; i++, s++);
			end = s - 1;

			for (; (*end == ' ' || *end == '\t') && end > start; end--);

			if (NULL == (ds = (data_string *)array_get_unused_element(vals, TYPE_STRING))) {
				ds = data_string_init();
			}

			buffer_copy_string_len(ds->value, start, end-start+1);
			array_insert_unique(vals, (data_unset *)ds);

			if (*s == ',') {
				state = 0;
				i++;
				s++;
			} else {
				/* end of string */

				state = 2;
			}
			break;
		default:
			i++;
			break;
		}
	}
	return 0;
}

int request_uri_is_valid_char(unsigned char c) {
	if (c <= 32) return 0;
	if (c == 127) return 0;
	if (c == 255) return 0;

	return 1;
}

int http_request_parse(server *srv, connection *con, http_req *req) {
	size_t i;
	enum { HTTP_CONNECTION_UNSET, HTTP_CONNECTION_CLOSE, HTTP_CONNECTION_KEEPALIVE } keep_alive_set = HTTP_CONNECTION_UNSET;

	if (req->protocol == HTTP_VERSION_UNSET) {
		con->http_status = 505; /* Version not Supported */
		return 0;
	}

	if (req->method == HTTP_METHOD_UNSET) {
		con->http_status = 405; /* Method not allowed */
		return 0;
	}

	if (buffer_is_empty(req->uri_raw)) {
		con->http_status = 400;
		return 0;
	}

	/* strip absolute URLs
	 * */

	buffer_copy_string_buffer(con->request.orig_uri, req->uri_raw);
	if (req->uri_raw->ptr[0] == '/') {
		buffer_copy_string_buffer(con->request.uri, req->uri_raw);
	} else if (req->uri_raw->ptr[0] == '*') {
		if (req->method != HTTP_METHOD_OPTIONS) {
			con->http_status = 400;
			return 0;
		}
		buffer_copy_string_buffer(con->request.uri, req->uri_raw);
	} else {
		/* GET http://www.example.org/foobar */
		char *sl;

		if (0 != strncmp(BUF_STR(req->uri_raw), "http://", 7)) {
			con->http_status = 400;
			return 0;
		}

		if (NULL == (sl = strchr(BUF_STR(req->uri_raw) + 7, '/'))) {
			con->http_status = 400;
			return 0;
		}

		buffer_copy_string(con->request.uri, sl);
		buffer_copy_string_len(con->request.http_host, BUF_STR(req->uri_raw) + 7, sl - BUF_STR(req->uri_raw) - 7);

		if (request_check_hostname(con->request.http_host)) {
			if (srv->srvconf.log_request_header_on_error) {
				TRACE("Host header is invalid (Status: 400), was %s", BUF_STR(con->request.http_host));
			}
			con->http_status = 400;
			con->keep_alive = 0;

			buffer_reset(con->request.http_host);

			return 0;
		}
	}

	con->request.http_method = req->method;
	con->request.http_version = req->protocol;

	for (i = 0; i < req->headers->used; i++) {
		data_string *ds = (data_string *)req->headers->data[i];
		data_string *hdr;
		int cmp;

		/* this list is sorted */
		if (0 == (cmp = buffer_caseless_compare(CONST_BUF_LEN(ds->key), CONST_STR_LEN("Connection")))) {
			array *vals;
			size_t vi;
			/* Connection: Keep-Alive, ... */

			vals = srv->split_vals;

			array_reset(vals);
			http_request_split_value(vals, ds->value);

			for (vi = 0; vi < vals->used; vi++) {
				data_string *dsv = (data_string *)vals->data[vi];

				if (0 == buffer_caseless_compare(CONST_BUF_LEN(dsv->value), CONST_STR_LEN("keep-alive"))) {
					keep_alive_set = HTTP_CONNECTION_KEEPALIVE;

					break;
				} else if (0 == buffer_caseless_compare(CONST_BUF_LEN(dsv->value), CONST_STR_LEN("close"))) {
					keep_alive_set = HTTP_CONNECTION_CLOSE;

					break;
				}
			}
		} else if (cmp > 0 && 0 == (cmp = buffer_caseless_compare(CONST_BUF_LEN(ds->key), CONST_STR_LEN("Content-Length")))) {
			char *err;
			long long int r;

			/* ignore the header, if it is a duplicate */
			if (con->request.content_length != -1) continue;

			r = strtoll(ds->value->ptr, &err, 10);

			if (*err != '\0') {
				TRACE("content-length is not a number: %s (Status: 400)", err);

				con->http_status = 400;

				return 0;
			}

			if (r == LLONG_MIN ||
			    r == LLONG_MAX) {
				if (errno == ERANGE) {
					con->http_status = 413;

					return 0;
				}
			}

			if (r < 0) {
				con->http_status = 400;

				return 0;
			}

			/* don't handle more the SSIZE_MAX bytes in content-length */
			if (r > SSIZE_MAX) {
				con->http_status = 413;

				ERROR("request-size too long: %s (Status: 413)", BUF_STR(ds->value));

				return 0;
			}

			con->request.content_length = r;
		} else if (cmp > 0 && 0 == (cmp = buffer_caseless_compare(CONST_BUF_LEN(ds->key), CONST_STR_LEN("Expect")))) {
			/* HTTP 2616 8.2.3
			 * Expect: 100-continue
			 *
			 *   -> (10.1.1)  100 (read content, process request, send final status-code)
			 *   -> (10.4.18) 417 (close)
			 *
			 *
			 */

			if (0 != buffer_caseless_compare(CONST_BUF_LEN(ds->value), CONST_STR_LEN("100-continue"))) {
				/* we only support 100-continue */
				con->http_status = 417;
				return 0;
			}

			if (con->request.http_version != HTTP_VERSION_1_1) {
				/* only HTTP/1.1 clients can send us this header */
				con->http_status = 417;
				return 0;
			}
		} else if (cmp > 0 && 0 == (cmp = buffer_caseless_compare(CONST_BUF_LEN(ds->key), CONST_STR_LEN("Host")))) {
			if (request_check_hostname(ds->value)) {
				TRACE("Host header is invalid (Status: 400), was %s", BUF_STR(ds->value));
				con->http_status = 400;
				con->keep_alive = 0;

				return 0;
			}

			if (!buffer_is_empty(con->request.http_host) && !buffer_is_equal(con->request.http_host, ds->value)) {
				TRACE("%s", "Host header is duplicate (Status: 400)");
				con->http_status = 400;

				return 0;
			}

			buffer_copy_string_buffer(con->request.http_host, ds->value);
		} else if (cmp > 0 && 0 == (cmp = buffer_caseless_compare(CONST_BUF_LEN(ds->key), CONST_STR_LEN("If-Modified-Since")))) {
			data_string *old;

			if (NULL != (old = (data_string *)array_get_element(con->request.headers, CONST_STR_LEN("If-Modified-Since")))) {
				if (0 != buffer_caseless_compare(CONST_BUF_LEN(old->value), CONST_BUF_LEN(ds->value))) {
					/* duplicate header and different timestamps */
					con->http_status = 400;

					TRACE("%s", "If-Modified-Since is duplicate (Status: 400)");

					return 0;
				}
			}
		} else if (cmp > 0 && 0 == (cmp = buffer_caseless_compare(CONST_BUF_LEN(ds->key), CONST_STR_LEN("If-None-Match")))) {
			data_string *old;
			/* if dup, only the first one will survive */
			if (NULL != (old = (data_string *)array_get_element(con->request.headers, CONST_STR_LEN("If-None-Match")))) {
				if (0 != buffer_caseless_compare(CONST_BUF_LEN(old->value), CONST_BUF_LEN(ds->value))) {
					/* duplicate header and different timestamps */
					con->http_status = 400;

					TRACE("%s", "If-None-Match is duplicate (Status: 400)");

					return 0;
				}
			}
		} else if (cmp > 0 && 0 == (cmp = buffer_caseless_compare(CONST_BUF_LEN(ds->key), CONST_STR_LEN("Range")))) {
			if (NULL != array_get_element(con->request.headers, CONST_STR_LEN("Range"))) { 
				/* duplicate Range header */

				TRACE("%s", "Range: header is duplicate (Status: 400)");

				con->http_status = 400;
				con->keep_alive = 0;

				return 0;
			}
		}

		if (NULL == (hdr = (data_string *)array_get_unused_element(con->request.headers, TYPE_STRING))) {
			hdr = data_string_init();
		}

		buffer_copy_string_buffer(hdr->key, ds->key);
		buffer_copy_string_buffer(hdr->value, ds->value);

		array_insert_unique(con->request.headers, (data_unset *)hdr);
	}


	con->header_len = i;

	/* do some post-processing */

	if (con->request.http_version == HTTP_VERSION_1_1) {
		if (keep_alive_set != HTTP_CONNECTION_CLOSE) {
			/* no Connection-Header sent */

			/* HTTP/1.1 -> keep-alive default TRUE */
			con->keep_alive = 1;
		} else {
			con->keep_alive = 0;
		}

		/* RFC 2616, 14.23 */
		if (buffer_is_empty(con->request.http_host)) {
			con->http_status = 400;
			con->response.keep_alive = 0;
			con->keep_alive = 0;

			if (srv->srvconf.log_request_header_on_error) {
				log_error_write(srv, __FILE__, __LINE__, "s", "HTTP/1.1 but Host missing -> 400");
				log_error_write(srv, __FILE__, __LINE__, "Sb",
						"request-header:\n",
						con->request.request);
			}
			return 0;
		}
	} else {
		if (keep_alive_set == HTTP_CONNECTION_KEEPALIVE) {
			/* no Connection-Header sent */

			/* HTTP/1.0 -> keep-alive default FALSE  */
			con->keep_alive = 1;
		} else {
			con->keep_alive = 0;
		}
	}

	switch(con->request.http_method) {
	case HTTP_METHOD_GET:
	case HTTP_METHOD_HEAD:
		/* content-length is forbidden for those */
		if (con->request.content_length != -1) {
			/* content-length is missing */
			if (srv->srvconf.log_request_header_on_error) {
				ERROR("GET/HEAD with content-length: %d", 400);
			}

			con->keep_alive = 0;
			con->http_status = 400;
			return 0;
		}
		break;
	case HTTP_METHOD_POST:
		/* content-length is required for them */
		if (con->request.content_length == -1) {
			/* content-length is missing */
			if (srv->srvconf.log_request_header_on_error) {
				log_error_write(srv, __FILE__, __LINE__, "s",
						"POST-request, but content-length missing -> 411");
			}

			con->keep_alive = 0;
			con->http_status = 411;
			return 0;

		}
		break;
	default:
		/* the may have a content-length */
		break;
	}


	/* check if we have read post data */
	if (con->request.content_length != -1) {
		/* divide by 1024 as srvconf.max_request_size is in kBytes */
		if (srv->srvconf.max_request_size != 0 &&
		    (con->request.content_length >> 10) > srv->srvconf.max_request_size) {
			/* the request body itself is larger then
			 * our our max_request_size
			 */

			con->http_status = 413;
			con->keep_alive = 0;

			log_error_write(srv, __FILE__, __LINE__, "sds",
					"request-size too long:", con->request.content_length, "-> 413");
			return 0;
		}
	}

	return 0;
}


