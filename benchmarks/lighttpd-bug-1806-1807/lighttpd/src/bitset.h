#ifndef _BITSET_H_
#define _BITSET_H_

#include <stddef.h>

#include "settings.h"

typedef struct {
	size_t *bits;
	size_t nbits;
} bitset;

LI_API bitset* bitset_init(size_t nbits);
LI_API void bitset_reset(bitset *set);
LI_API void bitset_free(bitset *set);

LI_API void bitset_clear_bit(bitset *set, size_t pos);
LI_API void bitset_set_bit(bitset *set, size_t pos);
LI_API int bitset_test_bit(bitset *set, size_t pos);

#endif
