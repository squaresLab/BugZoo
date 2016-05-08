#ifndef __crc32cr_table_h__
#define __crc32cr_table_h__

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <sys/types.h>
#include <stdlib.h>

#if defined HAVE_STDINT_H
#include <stdint.h>
#elif defined HAVE_INTTYPES_H
#include <inttypes.h>
#endif

#ifdef _WIN32
#define uint32_t unsigned __int32
#endif

#include "settings.h"

LI_API uint32_t generate_crc32c(char *string, size_t length);

#endif
