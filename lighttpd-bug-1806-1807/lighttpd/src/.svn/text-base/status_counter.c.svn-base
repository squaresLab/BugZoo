#include <stdlib.h>

#include "status_counter.h"
/**
 * The status array can carry all the status information you want
 * the key to the array is <module-prefix>.<name>
 * and the values are counters
 *
 * example:
 *   fastcgi.backends        = 10
 *   fastcgi.active-backends = 6
 *   fastcgi.backend.<key>.load = 24
 *   fastcgi.backend.<key>....
 *
 *   fastcgi.backend.<key>.disconnects = ...
 */

static array *counters = NULL;

void status_counter_init(void) {
	counters = array_init();
}
void status_counter_free(void) {
	array_free(counters);
}

array *status_counter_get_array(void) {
	return counters;
}

data_integer *status_counter_get_counter(const char *s, size_t len) {
	data_integer *di;
	array *status = status_counter_get_array();

	if (NULL == (di = (data_integer *)array_get_element(status, s, len))) {
		/* not found, create it */

		if (NULL == (di = (data_integer *)array_get_unused_element(status, TYPE_INTEGER))) {
			di = data_integer_init();
		}
		buffer_copy_string_len(di->key, s, len);
		di->value = 0;

		array_insert_unique(status, (data_unset *)di);
	}
	return di;
}

/* dummies of the statistic framework functions
 * they will be moved to a statistics.c later */
int status_counter_inc(const char *s, size_t len) {
	data_integer *di = status_counter_get_counter(s, len);

	di->value++;

	return 0;
}

int status_counter_dec(const char *s, size_t len) {
	data_integer *di = status_counter_get_counter(s, len);

	if (di->value > 0) di->value--;

	return 0;
}

int status_counter_set(const char *s, size_t len, int val) {
	data_integer *di = status_counter_get_counter(s, len);

	di->value = val;

	return 0;
}


