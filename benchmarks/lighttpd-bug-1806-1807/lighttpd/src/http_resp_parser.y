%token_prefix TK_
%token_type {buffer *}
%extra_argument {http_resp_ctx_t *ctx}
%name http_resp_parser

%include {
#include <assert.h>
#include <string.h>
#include "http_resp.h"
#include "keyvalue.h"
#include "array.h"
#include "log.h"
}

%parse_failure {
  ctx->ok = 0;
}

%type protocol { int }
%type response_hdr { http_resp * }
%type number { int }
%type headers { array * }
%type header { data_string * }
%destructor reason { buffer_free($$); }
%token_destructor { buffer_free($$); }

/* just headers + Status: ... */
response_hdr ::= headers CRLF . {
    http_resp *resp = ctx->resp;
    data_string *ds;
 
    resp->protocol = HTTP_VERSION_UNSET;

    buffer_copy_string(resp->reason, ""); /* no reason */

    if (NULL == (ds = (data_string *)array_get_element(resp->headers, CONST_STR_LEN("Status")))) { 
        resp->status = 0;
    } else {
        char *err;
        resp->status = strtol(ds->value->ptr, &err, 10);
   
        if (*err != '\0' && *err != ' ' && *err != '\r') {
            buffer_copy_string(ctx->errmsg, "expected a number: ");
            buffer_append_string_buffer(ctx->errmsg, ds->value);
            buffer_append_string(ctx->errmsg, err);
        
            ctx->ok = 0;
        }
    }
}

/* HTTP-Version SP Status-Code SP Reason-Phrase CRLF ... */
response_hdr ::= protocol(B) number(C) reason(D) CRLF headers CRLF . {
    http_resp *resp = ctx->resp;
    
    resp->status = C;
    resp->protocol = B;
    buffer_copy_string_buffer(resp->reason, D);
    buffer_pool_append(ctx->unused_buffers, D); 
}

/* HTTP-Version SP Status-Code CRLF ... */
response_hdr ::= protocol(B) number(C) CRLF headers CRLF . {
    http_resp *resp = ctx->resp;
    
    resp->status = C;
    resp->protocol = B;
    buffer_reset(resp->reason);
}

protocol(A) ::= STRING(B). {
    if (buffer_is_equal_string(B, CONST_STR_LEN("HTTP/1.0"))) {
        A = HTTP_VERSION_1_0;
    } else if (buffer_is_equal_string(B, CONST_STR_LEN("HTTP/1.1"))) {
        A = HTTP_VERSION_1_1;
    } else {
        buffer_copy_string(ctx->errmsg, "unknown protocol: ");
        buffer_append_string_buffer(ctx->errmsg, B);
        
        ctx->ok = 0;
    }
    buffer_pool_append(ctx->unused_buffers, B); 
}

number(A) ::= STRING(B). {
    char *err;
    A = strtol(B->ptr, &err, 10);
    
    if (*err != '\0') {
        buffer_copy_string(ctx->errmsg, "expected a number, got: ");
        buffer_append_string_buffer(ctx->errmsg, B);
        
        ctx->ok = 0;
    }
    buffer_pool_append(ctx->unused_buffers, B); 
}

reason(A) ::= STRING(B). {
    A = B;
}

reason(A) ::= reason(C) STRING(B). {
    A = C;
    
    buffer_append_string(A, " ");
    buffer_append_string_buffer(A, B);

    buffer_pool_append(ctx->unused_buffers, B); 
}

headers ::= headers header. 
headers ::= header. 

header(HDR) ::= STRING(A) COLON STRING(B) CRLF. {
    http_resp *resp = ctx->resp;

    if (NULL == (HDR = (data_string *)array_get_unused_element(resp->headers, TYPE_STRING))) {
        HDR = data_response_init();
    }
    
    buffer_copy_string_buffer(HDR->key, A);
    buffer_copy_string_buffer(HDR->value, B);    
    buffer_pool_append(ctx->unused_buffers, A); 
    buffer_pool_append(ctx->unused_buffers, B); 

    array_insert_unique(resp->headers, (data_unset *)HDR);
}

/* empty headers */
header(HDR) ::= STRING(A) COLON CRLF. {
    http_resp *resp = ctx->resp;

    if (NULL == (HDR = (data_string *)array_get_unused_element(resp->headers, TYPE_STRING))) {
        HDR = data_response_init();
    }
    
    buffer_copy_string_buffer(HDR->key, A);
    buffer_copy_string(HDR->value, ""); 
    buffer_pool_append(ctx->unused_buffers, A); 

    array_insert_unique(resp->headers, (data_unset *)HDR);
}

