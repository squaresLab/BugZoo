#include <stdio.h>
#include <assert.h>
#include <string.h>

#include <tap.h>

#include "http_req.h"
#include "log.h"

const char* chunkqueue_to_buffer(chunkqueue *cq, buffer *b) {
	chunk *c;

	buffer_reset(b);

	for (c = cq->first; c; c = c->next) {
		buffer_append_string(b, c->mem->ptr + c->offset);
	}

	return b->ptr;
}

int main(void) {
	http_req *req = http_request_init();
	chunkqueue *cq = chunkqueue_init();
	buffer *b, *content = buffer_init();
	const char *body;

	log_init();
	plan_tests(8);

	/* basic request header + CRLF */
	b = chunkqueue_get_append_buffer(cq);

	buffer_copy_string(b,
		"GET / HTTP/1.0\r\n"
		"Location: foobar\r\n"
		"Content-Lenght: 24\r\n"
		"\r\nABC"
	);

	ok(PARSE_SUCCESS == http_request_parse_cq(cq, req), "basic GET header");

	chunkqueue_remove_finished_chunks(cq);
	body = chunkqueue_to_buffer(cq, content);
	ok(0 == strcmp("ABC", body), "content is ABC, got %s", body);

	http_request_free(req);

	/* line-wrapping */

	chunkqueue_reset(cq);
	req = http_request_init();

	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b,
		"GET /server-status HTTP/1.0\r\n"
		"User-Agent: Wget/1.9.1\r\n"
		"Authorization: Digest username=\"jan\", realm=\"jan\", nonce=\"9a5428ccc05b086a08d918e73b01fc6f\",\r\n"
		"                uri=\"/server-status\", response=\"ea5f7d9a30b8b762f9610ccb87dea74f\"\r\n"
		"\r\n"
	);

	ok(PARSE_SUCCESS == http_request_parse_cq(cq, req), "POST request with line-wrapping");

	chunkqueue_remove_finished_chunks(cq);

	http_request_free(req);

	/* no request line */

	chunkqueue_reset(cq);
	req = http_request_init();

	b = chunkqueue_get_append_buffer(cq);

	buffer_copy_string(b,
		"Location: foobar\r\n"
		"Content-Lenght: 24\r\n"
		"\r\nABC"
	);

	ok(PARSE_ERROR == http_request_parse_cq(cq, req), "missing request-line");

	http_request_free(req);

	/* LF as line-ending */

	chunkqueue_reset(cq);
	req = http_request_init();

	b = chunkqueue_get_append_buffer(cq);

	buffer_copy_string(b,
		"GET / HTTP/1.0\n"
		"\nABC"
	);
	ok(PARSE_SUCCESS == http_request_parse_cq(cq, req), "no request key-value pairs");

	chunkqueue_remove_finished_chunks(cq);
	body = chunkqueue_to_buffer(cq, content);
	ok(0 == strcmp("ABC", body), "content is ABC, got %s", body);

	/* LF as line-ending */

	chunkqueue_reset(cq);
	req = http_request_init();

	b = chunkqueue_get_append_buffer(cq);

	buffer_copy_string(b,
		"GE");

	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b, "T ");
	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b, "/foo");
	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b, "bar HTTP/1.0\r");

	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b, "\n"
		"Locati");

	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b, "on: foobar\r\n"
		"Content-Lenght: 24\r\n"
		"\r\nABC"
	);
	ok(PARSE_SUCCESS == http_request_parse_cq(cq, req), "POST request with line-wrapping");

	chunkqueue_remove_finished_chunks(cq);
	body = chunkqueue_to_buffer(cq, content);
	ok(0 == strcmp("ABC", body), "content is ABC, got %s", body);

	http_request_free(req);
	chunkqueue_free(cq);
	buffer_free(content);
	log_free();

	return exit_status();
}
