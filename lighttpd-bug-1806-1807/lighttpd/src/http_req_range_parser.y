%token_prefix TK_
%token_type {buffer *}
%extra_argument {http_req_range_ctx_t *ctx}
%name http_req_range_parser

%include {
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include <sys/types.h>
#include <string.h>
#include "http_req_range.h"
#include "log.h"
#include "sys-strings.h"
}

%parse_failure {
  ctx->ok = 0;
}

%type num { off_t }
%type range { http_req_range * }
%type ranges { http_req_range * }
%token_destructor { buffer_free($$); }


range_hdr ::= BYTES EQUAL ranges(A) . {
  ctx->ranges->start = A->start;
  ctx->ranges->end  = A->end;
  ctx->ranges->next = A->next;

  A->next = NULL;
  http_request_range_free(A);
}

ranges(A) ::= ranges(B) COMMA range(C) . {
  for (A = B; A->next; A = A->next);

  A->next = C;

  A = B;
}
ranges(A) ::= range(B) . {
  A = B;
}
range(A) ::= num(B) MINUS . {
  http_req_range *r = http_request_range_init();

  r->start = B;
  r->end = -1;

  A = r;
}

range(A) ::= num(B) MINUS num(C) . {
  http_req_range *r = http_request_range_init();

  r->start = B;
  r->end = C;

  A = r;
}

range(A) ::= MINUS num(B) . {
  http_req_range *r = http_request_range_init();

  r->start = -1;
  r->end = B;

  A = r;
}

num(A) ::= NUMBER(B) . {
  A = strtoull(BUF_STR(B), NULL, 10);
	buffer_pool_append(ctx->unused_buffers, B);
}
