#ifndef _BUFFER_H_
#define _BUFFER_H_

#include "settings.h"

#include <stdlib.h>
#include <sys/types.h>

#include "array-static.h"

typedef struct {
	char *ptr;

	size_t used;
	size_t size;
} buffer;

typedef void (*buffer_ptr_free_t)(void *p);

typedef struct {
	void **ptr;
	size_t size;
	size_t used;
	buffer_ptr_free_t free;
} buffer_ptr;

typedef struct {
	buffer **ptr;

	size_t used;
	size_t size;
} buffer_array;

typedef struct {
	char *ptr;

	size_t offset; /* input pointer */

	size_t used;   /* output pointer */
	size_t size;
} read_buffer;

LI_API buffer_ptr* buffer_ptr_init(buffer_ptr_free_t freer);
LI_API void buffer_ptr_free(buffer_ptr *b);
LI_API void buffer_ptr_clear(buffer_ptr *b);
LI_API void buffer_ptr_append(buffer_ptr *b, void *item);
LI_API void* buffer_ptr_pop(buffer_ptr *b);
LI_API void* buffer_ptr_top(buffer_ptr *b);

LI_API buffer_array* buffer_array_init(void);
LI_API void buffer_array_free(buffer_array *b);
LI_API void buffer_array_reset(buffer_array *b);
LI_API buffer* buffer_array_append_get_buffer(buffer_array *b);

LI_API buffer* buffer_init(void);
LI_API buffer* buffer_init_buffer(buffer *b);
LI_API buffer* buffer_init_string(const char *str);
LI_API void buffer_free(buffer *b);
LI_API void buffer_reset(buffer *b);

LI_API int buffer_prepare_copy(buffer *b, size_t size);
LI_API int buffer_prepare_append(buffer *b, size_t size);

LI_API int buffer_copy_string(buffer *b, const char *s);
LI_API int buffer_copy_string_len(buffer *b, const char *s, size_t s_len);
LI_API int buffer_copy_string_buffer(buffer *b, const buffer *src);
LI_API int buffer_copy_string_hex(buffer *b, const char *in, size_t in_len);

LI_API int buffer_copy_long(buffer *b, long val);

LI_API int buffer_copy_memory(buffer *b, const char *s, size_t s_len);

LI_API int buffer_append_string(buffer *b, const char *s);
LI_API int buffer_append_string_len(buffer *b, const char *s, size_t s_len);
LI_API int buffer_append_string_buffer(buffer *b, const buffer *src);
LI_API int buffer_append_string_lfill(buffer *b, const char *s, size_t maxlen);
LI_API int buffer_append_string_rfill(buffer *b, const char *s, size_t maxlen);

LI_API int buffer_append_long_hex(buffer *b, unsigned long len);
LI_API int buffer_append_long(buffer *b, long val);

#if defined(SIZEOF_LONG) && (SIZEOF_LONG == SIZEOF_OFF_T)
#define buffer_copy_off_t(x, y)		buffer_copy_long(x, y)
#define buffer_append_off_t(x, y)	buffer_append_long(x, y)
#else
LI_API int buffer_copy_off_t(buffer *b, off_t val);
LI_API int buffer_append_off_t(buffer *b, off_t val);
#endif

LI_API int buffer_append_memory(buffer *b, const char *s, size_t s_len);

LI_API char* buffer_search_string_len(buffer *b, const char *needle, size_t len);

LI_API int buffer_is_empty(buffer *b);
LI_API int buffer_is_equal(buffer *a, buffer *b);
LI_API int buffer_is_equal_right_len(buffer *a, buffer *b, size_t len);
LI_API int buffer_is_equal_string(buffer *a, const char *s, size_t b_len);
LI_API int buffer_caseless_compare(const char *a, size_t a_len, const char *b, size_t b_len);

typedef enum {
	ENCODING_UNSET,
	ENCODING_REL_URI, /* for coding a rel-uri (/with space/and%percent) nicely as part of an href */
	ENCODING_REL_URI_PART, /* same as ENC_REL_URL plus encoding "/" as "%2F" */
	ENCODING_HTML,    /* "&" becomes "&amp;" and so on */
	ENCODING_MINIMAL_XML, /* minimal encoding for xml */
	ENCODING_HEX      /* encode string as hex */
} buffer_encoding_t;

LI_API int buffer_append_string_encoded(buffer *b, const char *s, size_t s_len, buffer_encoding_t encoding);

LI_API int buffer_urldecode_path(buffer *url);
LI_API int buffer_urldecode_query(buffer *url);
LI_API int buffer_path_simplify(buffer *dest, buffer *src);

LI_API int buffer_to_lower(buffer *b);
LI_API int buffer_to_upper(buffer *b);

/** deprecated */
LI_API int ltostr(char *buf, long val);
LI_API char hex2int(unsigned char c);
LI_API char int2hex(char i);

LI_API int light_isdigit(int c);
LI_API int light_isxdigit(int c);
LI_API int light_isalpha(int c);
LI_API int light_isalnum(int c);

#define BUFFER_CTYPE_FUNC(type) int buffer_is##type(buffer *b);
BUFFER_CTYPE_FUNC(digit)
BUFFER_CTYPE_FUNC(xdigit)
BUFFER_CTYPE_FUNC(alpha)
BUFFER_CTYPE_FUNC(alnum)

#define BUF_STR(x) x->ptr
#define BUFFER_APPEND_STRING_CONST(x, y) \
	buffer_append_string_len(x, y, sizeof(y) - 1)

#define BUFFER_COPY_STRING_CONST(x, y) \
	buffer_copy_string_len(x, y, sizeof(y) - 1)

#define CONST_STR_LEN(x) x, x ? sizeof(x) - 1 : 0
#define CONST_BUF_LEN(x) BUF_STR(x), x->used ? x->used - 1 : 0


#define UNUSED(x) ( (void)(x) )

/**
 * a pool of unused buffer *
 */

ARRAY_STATIC_DEF(buffer_pool, buffer, );

buffer_pool* buffer_pool_init();
void buffer_pool_free(buffer_pool* );

buffer *buffer_pool_get(buffer_pool *bp);
void buffer_pool_append(buffer_pool *bp, buffer *);

#endif


