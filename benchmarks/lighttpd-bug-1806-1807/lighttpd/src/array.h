#ifndef ARRAY_H
#define ARRAY_H

#include "settings.h"

#include <stdlib.h>
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#ifdef HAVE_PCRE_H
# include <pcre.h>
#endif
#include "buffer.h"

#define DATA_IS_STRING(x) (x->type == TYPE_STRING)

typedef enum { TYPE_UNSET, TYPE_STRING, TYPE_COUNT, TYPE_ARRAY, TYPE_INTEGER, TYPE_FASTCGI, TYPE_CONFIG } data_type_t;
#define DATA_UNSET \
	data_type_t type; \
	buffer *key; \
	int is_index_key; /* 1 if key is an array index (auto-generated keys) */ \
	struct data_unset *(*copy)(const struct data_unset *src); \
	void (* free)(struct data_unset *p); \
	void (* reset)(struct data_unset *p); \
	int (*insert_dup)(struct data_unset *dst, struct data_unset *src); \
	void (*print)(const struct data_unset *p, int depth)

typedef struct data_unset {
	DATA_UNSET;
} data_unset;

typedef struct {
	data_unset  **data;

	size_t *sorted;

	size_t used;
	size_t size;

	size_t unique_ndx;

	size_t next_power_of_2;
	int is_weakref; /* data is weakref, don't bother the data */
} array;

typedef struct {
	DATA_UNSET;

	int count;
} data_count;

LI_API data_count* data_count_init(void);

typedef struct {
	DATA_UNSET;

	buffer *value;
} data_string;

LI_API data_string* data_string_init(void);
LI_API data_string* data_response_init(void);

typedef struct {
	DATA_UNSET;

	array *value;
} data_array;

LI_API data_array* data_array_init(void);

/**
 * possible compare ops in the configfile parser
 */
typedef enum {
	CONFIG_COND_UNSET,
	CONFIG_COND_EQ,      /** == */
	CONFIG_COND_MATCH,   /** =~ */
	CONFIG_COND_NE,      /** != */
	CONFIG_COND_NOMATCH  /** !~ */
} config_cond_t;

/**
 * possible fields to match against
 */
typedef enum {
	COMP_UNSET,
	COMP_SERVER_SOCKET,
	COMP_HTTP_URL,
	COMP_HTTP_HOST,
	COMP_HTTP_REFERER,
	COMP_HTTP_USER_AGENT,
	COMP_HTTP_COOKIE,
	COMP_HTTP_REMOTE_IP,
	COMP_HTTP_QUERY_STRING,
	COMP_HTTP_REQUEST_METHOD,
	COMP_PHYSICAL_PATH,
	COMP_PHYSICAL_PATH_EXISTS,

	COMP_LAST_ELEMENT
} comp_key_t;

/* $HTTP["host"] ==    "incremental.home.kneschke.de" { ... }
 * for print:   comp_key      op    string
 * for compare: comp          cond  string/regex
 */

typedef struct _data_config data_config;
struct _data_config {
	DATA_UNSET;

	array *value;

	buffer *comp_key;
	comp_key_t comp;

	config_cond_t cond;
	buffer *op;

	int context_ndx; /* more or less like an id */
	array *childs;
	/* nested */
	data_config *parent;
	/* for chaining only */
	data_config *prev;
	data_config *next;

	buffer *string;
#ifdef HAVE_PCRE_H
	pcre   *regex;
	pcre_extra *regex_study;
#endif
};

LI_API data_config* data_config_init(void);

typedef struct {
	DATA_UNSET;

	int value;
} data_integer;

LI_API data_integer* data_integer_init(void);
LI_API array* array_init(void);
LI_API array* array_init_array(array *a);
LI_API void array_free(array *a);
LI_API void array_reset(array *a);
LI_API int array_insert_unique(array *a, data_unset *str);
LI_API data_unset* array_pop(array *a);
LI_API int array_print(array *a, int depth);
LI_API data_unset* array_get_unused_element(array *a, data_type_t t);
LI_API data_unset* array_get_element(array *a, const char *key, size_t key_len);
LI_API void array_set_key_value(array *hdrs, const char *key, size_t key_len, const char *value, size_t val_len);
LI_API void array_append_key_value(array *hdrs, const char *key, size_t key_len, const char *value, size_t val_len);
LI_API data_unset* array_replace(array *a, data_unset *du);
LI_API int array_strcasecmp(const char *a, size_t a_len, const char *b, size_t b_len);
LI_API void array_print_indent(int depth);
LI_API size_t array_get_max_key_length(array *a);

#endif
