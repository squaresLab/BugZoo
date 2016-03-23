#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "log.h"
#include "http_req_range.h"
#include "http_req_range_parser.h"

/* declare prototypes for the parser */
void *http_req_range_parserAlloc(void *(*mallocProc)(size_t));
void http_req_range_parserFree(void *p,  void (*freeProc)(void*));
void http_req_range_parserTrace(FILE *TraceFILE, char *zTracePrompt);
void http_req_range_parser(void *, int, buffer *, http_req_range_ctx_t *);

typedef struct {
	buffer *hdr;
	size_t ndx;

	chunk *lookup_c;
	size_t lookup_offset;
} http_req_range_tokenizer_t;

http_req_range *http_request_range_init(void) {
	http_req_range *range = calloc(1, sizeof(*range));

	range->start = -1;
	range->end = -1;

	return range;
}

void http_request_range_reset(http_req_range *range) {
	if (!range) return;

	http_request_range_free(range->next);

	range->next = NULL;

	range->start = -1;
	range->end = -1;
}

void http_request_range_free(http_req_range *range) {
	if (!range) return;

	http_request_range_free(range->next);

	free(range);
}

static int http_req_range_tokenizer(
	http_req_range_tokenizer_t *t,
	int *token_id,
	buffer *token
) {
	int tid = 0;

	/* push the token to the parser */

	while (tid == 0) {
		char c = t->hdr->ptr[t->ndx];

		switch (c) {
		case '-':
			tid = TK_MINUS;
			t->ndx++;

			break;
		case '=':
			tid = TK_EQUAL;
			t->ndx++;

			break;
		case ',':
			tid = TK_COMMA;
			t->ndx++;

			break;

		case ' ':
		case '\t':
			/* ignore WS */
			t->ndx++;
			break;
		case '\0':
			return 0;
		default:
			/* 'bytes' or a number */
			if (0 == strncmp(t->hdr->ptr + t->ndx, "bytes", 5)) {
				tid = TK_BYTES;

				t->ndx += 5;
			} else {
				size_t d;
				/* */
				for (d = t->ndx; d < t->hdr->used; d++) {
					char dc = t->hdr->ptr[d];
					if (dc < '0' || dc > '9') {
						break;
					}
				}

				if (d == t->ndx) {
					/* no digit found */

					TRACE("%s", "no digit found");

					return -1;
				}

				tid = TK_NUMBER;

				buffer_copy_string_len(token, t->hdr->ptr + t->ndx, d - t->ndx);

				t->ndx = d;
			}

			break;
		}
	}

	if (tid) {
		*token_id = tid;

		return 1;
	}

	return -1;
}

parse_status_t http_request_range_parse(buffer *hdr, http_req_range *ranges) {
	http_req_range_tokenizer_t t;
	void *pParser = NULL;
	int token_id = 0;
	buffer *token = NULL;
	http_req_range_ctx_t context;
	parse_status_t ret = PARSE_UNSET;

	t.hdr = hdr;
	t.ndx = 0;

	context.ok = 1;
	context.errmsg = buffer_init();
	context.ranges = ranges;
	context.unused_buffers = buffer_pool_init();

	pParser = http_req_range_parserAlloc( malloc );
	token = buffer_pool_get(context.unused_buffers);
#if 0
	http_req_range_parserTrace(stderr, "range: ");
#endif

	while((1 == http_req_range_tokenizer(&t, &token_id, token)) && context.ok) {
		http_req_range_parser(pParser, token_id, token, &context);

		token = buffer_pool_get(context.unused_buffers);
	}

	/* oops, the parser failed */
	if (context.ok == 0) {
		ret = PARSE_ERROR;

		if (!buffer_is_empty(context.errmsg)) {
			TRACE("parsing failed: %s", BUF_STR(context.errmsg));
		} else {
			TRACE("%s", "parsing failed ...");
		}
	}

	http_req_range_parser(pParser, 0, token, &context);
	http_req_range_parserFree(pParser, free);

	if (context.ok == 0) {
		/* we are missing the some tokens */

		if (!buffer_is_empty(context.errmsg)) {
			TRACE("parsing failed: %s", BUF_STR(context.errmsg));
		}

		if (ret == PARSE_UNSET) {
			ret = buffer_is_empty(context.errmsg) ? PARSE_NEED_MORE : PARSE_ERROR;
		}
	} else {
		ret = PARSE_SUCCESS;
	}

	buffer_pool_append(context.unused_buffers, token);
	buffer_pool_free(context.unused_buffers);
	buffer_free(context.errmsg);

	return ret;
}

