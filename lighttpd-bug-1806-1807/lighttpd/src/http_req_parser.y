%token_prefix TK_
%token_type {buffer *}
%extra_argument {http_req_ctx_t *ctx}
%name http_req_parser

%include {
#include <assert.h>
#include <string.h>
#include "http_req.h"
#include "keyvalue.h"
#include "array.h"
#include "log.h"
}

%parse_failure {
  ctx->ok = 0;
}

%type protocol { http_version_t }
%type method { http_method_t }
%type request_hdr { http_req * }
%type headers { array * }
%type header { data_string * }
%type multiline { buffer * }
%token_destructor { buffer_free($$); }

/* GET ... HTTP/1.0 */
request_hdr ::= method(B) STRING(C) protocol(D) CRLF headers CRLF . {
    http_req *req = ctx->req;
    
    req->method = B;
    req->protocol = D;
    buffer_copy_string_buffer(req->uri_raw, C);
    buffer_pool_append(ctx->unused_buffers, C); 
}

request_hdr ::= method(B) STRING(C) protocol(D) CRLF CRLF . {
    http_req *req = ctx->req;
    
    req->method = B;
    req->protocol = D;
    buffer_copy_string_buffer(req->uri_raw, C);
    buffer_pool_append(ctx->unused_buffers, C); 
}


method(A) ::= STRING(B) . {
    A = get_http_method_key(BUF_STR(B));

    buffer_pool_append(ctx->unused_buffers, B); 
}

protocol(A) ::= STRING(B). {
    /* the protocol might be HTTP/1.0 or HTTP/1.1
    *  the version string is allowed to have leading zeros
    */
    A = HTTP_VERSION_UNSET;

    if (0 == strncmp(BUF_STR(B), "HTTP/", 5)) {
       char *err = NULL;
       /* is there a dot */
       char *major, *minor;
       
       major = BUF_STR(B) + 5;
       minor = strchr(major, '.');
       if (minor) {
         int hi, lo;
         hi = strtol(major, &err, 10);
         minor++;
         if (*err == '.' && *minor != '\0') {
            lo = strtol(minor, &err, 10);
            if (*err == '\0') {
              if (hi == 1 && lo == 1) {
                A = HTTP_VERSION_1_1;
              } else if (hi == 1 && lo == 0) {
                A = HTTP_VERSION_1_0;
              }
            }
         }
       }
    }

    buffer_pool_append(ctx->unused_buffers, B); 
}

headers ::= headers header. 
headers ::= header.

header(HDR) ::= STRING(A) COLON multiline(B). {
    http_req *req = ctx->req;

    if (NULL == (HDR = (data_string *)array_get_unused_element(req->headers, TYPE_STRING))) {
        HDR = data_string_init();
    }
   
    buffer_copy_string_buffer(HDR->key, A);
    buffer_copy_string_buffer(HDR->value, B);    
    buffer_pool_append(ctx->unused_buffers, A); 
    buffer_pool_append(ctx->unused_buffers, B); 
      
    array_insert_unique(req->headers, (data_unset *)HDR);
}

header ::= STRING COLON CRLF . 

multiline(A) ::= STRING(B) CRLF TAB multiline(C). {
   buffer_append_string_buffer(B, C);
   A = B;

   B = NULL;
   buffer_pool_append(ctx->unused_buffers, C); 
}

/* the simple form */
multiline(A) ::= STRING(B) CRLF. {
   A = B;

   B = NULL;
}


