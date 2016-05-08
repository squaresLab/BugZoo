#ifndef _STREAM_H_
#define _STREAM_H_

#include "buffer.h"

typedef struct {
	char *start;
	off_t size;
} stream;

LI_EXPORT int stream_open(stream *f, buffer *fn);
LI_EXPORT int stream_close(stream *f);

#endif
