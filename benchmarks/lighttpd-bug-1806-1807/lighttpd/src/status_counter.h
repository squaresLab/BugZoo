#ifndef _STATUS_COUNTER_H_
#define _STATUS_COUNTER_H_

#include <sys/types.h>

#include "array.h"

LI_EXPORT void status_counter_init(void);
LI_EXPORT void status_counter_free(void);
LI_EXPORT array * status_counter_get_array(void);
LI_EXPORT data_integer * status_counter_get_counter(const char *s, size_t len);
LI_EXPORT int status_counter_inc(const char *s, size_t len);
LI_EXPORT int status_counter_dec(const char *s, size_t len);
LI_EXPORT int status_counter_set(const char *s, size_t len, int val);

#define COUNTER_INC(di) if (di) di->value++;
#define COUNTER_DEC(di) if (di && di->value > 0) di->value--;
#define COUNTER_SET(di, val) if (di) di->value = val;

#endif
