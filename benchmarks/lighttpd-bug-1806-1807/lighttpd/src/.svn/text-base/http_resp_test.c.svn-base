#include <stdio.h>
#include <string.h>
#include <tap.h>

#include "http_resp.h"
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
	http_resp *resp = http_response_init();
	chunkqueue *cq = chunkqueue_init();
	buffer *b, *content = buffer_init();
	const char *body;

	log_init();
	plan_tests(9);

	/* basic response header + CRLF */
	b = chunkqueue_get_append_buffer(cq);

	buffer_copy_string(b,
		"HTTP/1.0 304 Not Modified\r\n"
		"Location: foobar\r\n"
		"Content-Lenght: 24\r\n"
		"\r\nABC"
	);

	ok(PARSE_SUCCESS == http_response_parse_cq(cq, resp), "good 304 response with CRLF");

	chunkqueue_remove_finished_chunks(cq);
	body = chunkqueue_to_buffer(cq, content);
	ok(0 == strcmp("ABC", body), "content is ABC, got %s", body);

	http_response_free(resp);

	/* line-wrapping */

	chunkqueue_reset(cq);
	resp = http_response_init();

	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b,
		"HTTP/1.0 304 Not Modified\n"
		"Location: foobar\n"
		"Content-Lenght: 24\n"
		"\nABC"
	);

	ok(PARSE_SUCCESS == http_response_parse_cq(cq, resp), "good response with LF");

	chunkqueue_remove_finished_chunks(cq);
	body = chunkqueue_to_buffer(cq, content);
	ok(0 == strcmp("ABC", body), "content is ABC, got %s", body);

	http_response_free(resp);

	/* no request line */

	chunkqueue_reset(cq);
	resp = http_response_init();

	b = chunkqueue_get_append_buffer(cq);

	buffer_copy_string(b,
		"Status: 200 Foobar\r\n"
		"Location: foobar\r\n"
		"Content-Lenght: 24\r\n"
		"\r\nABC"
	);

	ok(PARSE_SUCCESS == http_response_parse_cq(cq, resp), "Status: 200 ...");

	http_response_free(resp);

	/* LF as line-ending */

	chunkqueue_reset(cq);
	resp = http_response_init();

	b = chunkqueue_get_append_buffer(cq);

	buffer_copy_string(b,
		"Location: foobar\n"
		"\nABC"
	);
	ok(PARSE_SUCCESS == http_response_parse_cq(cq, resp), "no Status at all");

	chunkqueue_remove_finished_chunks(cq);
	body = chunkqueue_to_buffer(cq, content);
	ok(0 == strcmp("ABC", body), "content is ABC, got %s", body);

	/* LF as line-ending */

	chunkqueue_reset(cq);
	resp = http_response_init();

	b = chunkqueue_get_append_buffer(cq);

	buffer_copy_string(b,
		"HTTP");

	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b, "/1.0 ");
	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b, "30");
	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b, "4 Not Modified\r");

	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b, "\n"
		"Locati");

	b = chunkqueue_get_append_buffer(cq);
	buffer_copy_string(b, "on: foobar\r\n"
		"Content-Lenght: 24\r\n"
		"\r\nABC"
	);
	ok(PARSE_SUCCESS == http_response_parse_cq(cq, resp), "chunked response");

	chunkqueue_remove_finished_chunks(cq);
	body = chunkqueue_to_buffer(cq, content);
	ok(0 == strcmp("ABC", body), "content is ABC, got %s", body);

	http_response_free(resp);
	chunkqueue_free(cq);
	buffer_free(content);
	log_free();

	return exit_status();
}
