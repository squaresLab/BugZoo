#ifndef _LOG_H_
#define _LOG_H_

#include "buffer.h"

LI_API void log_init(void);
LI_API void log_free(void);

LI_API int log_error_open(buffer *file, int use_syslog);
LI_API int log_error_close();
LI_API int log_error_write(void *srv, const char *filename, unsigned int line, const char *fmt, ...);
LI_API int log_error_cycle();
#define REMOVE_PATH_FROM_FILE 1
#if REMOVE_PATH_FROM_FILE
LI_API const char *remove_path(const char *path);
#define REMOVE_PATH(file) remove_path(file)
#else
#define REMOVE_PATH(file) file
#endif

#define ERROR(fmt, ...) \
	log_trace("%s.%d: (error) "fmt, REMOVE_PATH(__FILE__), __LINE__, __VA_ARGS__)

#define TRACE(fmt, ...) \
	log_trace("%s.%d: (trace) "fmt, REMOVE_PATH(__FILE__), __LINE__, __VA_ARGS__)

#define SEGFAULT() do { ERROR("%s", "Ooh, Ooh, Ooh. Something is not good ... going down"); abort(); } while(0)
LI_API int log_trace(const char *fmt, ...);
#endif
