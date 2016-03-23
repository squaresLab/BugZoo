#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "log.h"
#include "http_resp.h"
#include "http_resp_parser.h"

/* declare prototypes for the parser */
void *http_resp_parserAlloc(void *(*mallocProc)(size_t));
void http_resp_parserFree(void *p,  void (*freeProc)(void*));
void http_resp_parserTrace(FILE *TraceFILE, char *zTracePrompt);
void http_resp_parser(void *, int, buffer *, http_resp_ctx_t *);

typedef struct {
	chunkqueue *cq;

	chunk *c; /* current chunk in the chunkqueue */
	size_t offset; /* current offset in current chunk */

	chunk *lookup_c;
	size_t lookup_offset;

	int is_key;
	int is_statusline;
} http_resp_tokenizer_t;

http_resp *http_response_init(void) {
	http_resp *resp = calloc(1, sizeof(*resp));

	resp->reason = buffer_init();
	resp->headers = array_init();
	resp->status = -1;

	return resp;
}

void http_response_reset(http_resp *resp) {
	if (!resp) return;

	buffer_reset(resp->reason);
	array_reset(resp->headers);
	resp->status = -1;

}

void http_response_free(http_resp *resp) {
	if (!resp) return;

	buffer_free(resp->reason);
	array_free(resp->headers);

	free(resp);
}

static int http_resp_get_next_char(http_resp_tokenizer_t *t, unsigned char *c) {
	if (t->offset == t->c->mem->used - 1) {
		/* end of chunk, open next chunk */

		if (!t->c->next) return -1;

		t->c = t->c->next;
		t->offset = 0;
	}

	*c = t->c->mem->ptr[t->offset++];

	t->lookup_offset = t->offset;
	t->lookup_c = t->c;

#if 0
	fprintf(stderr, "%s.%d: get: %c (%d) at offset: %d\r\n", __FILE__, __LINE__, *c > 31 ? *c : ' ', *c, t->offset - 1);
#endif

	return 0;
}

static int http_resp_lookup_next_char(http_resp_tokenizer_t *t, unsigned char *c) {
	if (t->lookup_offset == t->lookup_c->mem->used - 1) {
		/* end of chunk, open next chunk */

		if (!t->lookup_c->next) return -1;

		t->lookup_c = t->lookup_c->next;
		t->lookup_offset = 0;
	}

	*c = t->lookup_c->mem->ptr[t->lookup_offset++];
#if 0
	fprintf(stderr, "%s.%d: lookup: %c (%d) at offset: %d\r\n", __FILE__, __LINE__, *c > 31 ? *c : ' ', *c, t->lookup_offset - 1);
#endif

	return 0;
}


static int http_resp_tokenizer(
	http_resp_tokenizer_t *t,
	int *token_id,
	buffer *token
) {
	unsigned char c;
	int tid = 0;

	/* push the token to the parser */

	while (tid == 0 && 0 == http_resp_get_next_char(t, &c)) {
		switch (c) {
		case ':':
			tid = TK_COLON;

			t->is_key = 0;

			break;
		case ' ':
		case '\t':
			/* ignore WS */

			break;
		case '\r':
			if (0 != http_resp_lookup_next_char(t, &c)) return -1;

			if (c == '\n') {
				tid = TK_CRLF;

				t->c = t->lookup_c;
				t->offset = t->lookup_offset;

				t->is_statusline = 0;
				t->is_key = 1;
			} else {
				fprintf(stderr, "%s.%d: CR with out LF\r\n", __FILE__, __LINE__);
				return -1;
			}
			break;
		case '\n':
			tid = TK_CRLF;

			t->is_statusline = 0;
			t->is_key = 1;

			break;
		default:
			while (c >= 32 && c != 127 && c != 255) {
				if (t->is_statusline) {
					if (c == ':') { t->is_statusline = 0; break; } /* this is not a status line by a real header */
					if (c == 32) break; /* the space is a splitter in the statusline */
				} else {
					if (t->is_key) {
						if (c == ':') break; /* the : is the splitter between key and value */
					}
				}
				if (0 != http_resp_lookup_next_char(t, &c)) return -1;
			}

			if (t->c == t->lookup_c &&
				t->offset == t->lookup_offset + 1) {

				fprintf(stderr, "%s.%d: invalid char in string\n", __FILE__, __LINE__);
				return -1;
			}

			tid = TK_STRING;

			/* the lookup points to the first invalid char */
			t->lookup_offset--;

			/* no overlapping string */
			if (t->c == t->lookup_c) {
				buffer_copy_string_len(token, t->c->mem->ptr + t->offset - 1, t->lookup_offset - t->offset + 1);
			} else {
				/* first chunk */
				buffer_copy_string_len(token, t->c->mem->ptr + t->offset - 1, t->c->mem->used - t->offset);

				/* chunks in the middle */
				for (t->c = t->c->next; t->c != t->lookup_c; t->c = t->c->next) {
					buffer_append_string_buffer(token, t->c->mem);
					t->offset = t->c->mem->used - 1;
				}

				/* last chunk */
				buffer_append_string_len(token, t->c->mem->ptr, t->lookup_offset);
			}

			t->offset = t->lookup_offset;

			break;
		}
	}

	if (tid) {
		*token_id = tid;

		return 1;
	}

	return -1;
}

parse_status_t http_response_parse_cq(chunkqueue *cq, http_resp *resp) {
	http_resp_tokenizer_t t;
	void *pParser = NULL;
	int token_id = 0;
	buffer *token = NULL;
	http_resp_ctx_t context;
	parse_status_t ret = PARSE_UNSET;
	int last_token_id = 0;

	if(!cq->first) return PARSE_NEED_MORE;
	t.cq = cq;
	t.c = cq->first;
	t.offset = t.c->offset;
	t.is_key = 0;
	t.is_statusline = 1;

	context.ok = 1;
	context.errmsg = buffer_init();
	context.resp = resp;
	context.unused_buffers = buffer_pool_init();

	array_reset(resp->headers);

	pParser = http_resp_parserAlloc( malloc );
	token = buffer_pool_get(context.unused_buffers);
#if 0
	http_resp_parserTrace(stderr, "http-response: ");
#endif

	while((1 == http_resp_tokenizer(&t, &token_id, token)) && context.ok) {
		http_resp_parser(pParser, token_id, token, &context);

		token = buffer_pool_get(context.unused_buffers);

		/* CRLF CRLF ... the header end sequence */
		if (last_token_id == TK_CRLF &&
		    token_id == TK_CRLF) break;

		last_token_id = token_id;
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

	http_resp_parser(pParser, 0, token, &context);
	http_resp_parserFree(pParser, free);

	if (!buffer_is_empty(context.errmsg)) {
		TRACE("parsing failed: %s", BUF_STR(context.errmsg));
	}
	if (context.ok == 0) {
		/* we are missing the some tokens */

		if (!buffer_is_empty(context.errmsg)) {
			TRACE("parsing failed: %s", BUF_STR(context.errmsg));
		}

		if (ret == PARSE_UNSET) {
			ret = buffer_is_empty(context.errmsg) ? PARSE_NEED_MORE : PARSE_ERROR;
		}
	} else {
		chunk *c;

		for (c = cq->first; c != t.c; c = c->next) {
			c->offset = c->mem->used - 1;
			cq->bytes_out += c->mem->used - 1;
		}

		c->offset = t.offset;
		cq->bytes_out += t.offset;

		ret = PARSE_SUCCESS;
	}

	buffer_pool_append(context.unused_buffers, token);
	buffer_pool_free(context.unused_buffers);
	buffer_free(context.errmsg);

	return ret;
}

