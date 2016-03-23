/*
 * make sure _GNU_SOURCE is defined
 */
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include <sys/types.h>

#include <errno.h>
#include <fcntl.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#include <stdarg.h>
#include <stdio.h>

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef _WIN32
#undef HAVE_SYSLOG_H
#endif

#ifdef HAVE_SYSLOG_H
#include <syslog.h>
#endif

#include "log.h"
#include "array.h"

#include "sys-files.h"

#ifdef _WIN32
#define STDERR_FILENO 2
#endif

#ifdef HAVE_VALGRIND_VALGRIND_H
#include <valgrind/valgrind.h>
#endif

#ifndef O_LARGEFILE
# define O_LARGEFILE 0
#endif

/**
 * open the errorlog
 *
 * we have 3 possibilities:
 * - stderr (default)
 * - syslog
 * - logfile
 *
 * if the open failed, report to the user and die
 *
 */


typedef struct {
	buffer *file;
	unsigned short use_syslog;

	/* the errorlog */
	int fd;
	enum { ERRORLOG_STDERR, ERRORLOG_FILE, ERRORLOG_SYSLOG } mode;
	buffer *buf;

	time_t cached_ts;
	buffer *cached_ts_str;
} errorlog;

errorlog *myconfig = NULL;

void log_init(void) {
	/* use syslog */
	errorlog *err;

	err = calloc(1, sizeof(*err));

	err->fd = -1;
	err->mode = ERRORLOG_STDERR;
	err->buf = buffer_init();
	err->cached_ts_str = buffer_init();

	myconfig = err;
}

void log_free(void) {
	errorlog *err = myconfig;

	if (!err) return;

	TRACE("%s", "server stopped");

	switch(err->mode) {
	case ERRORLOG_FILE:
		close(err->fd);
		break;
	case ERRORLOG_SYSLOG:
#ifdef HAVE_SYSLOG_H
		closelog();
#endif
		break;
	case ERRORLOG_STDERR:
		break;
	}

	buffer_free(err->buf);
	buffer_free(err->cached_ts_str);

	free(err);

	myconfig = NULL;
}

int log_error_open(buffer *file, int use_syslog) {
	int fd;
	int close_stderr = 1;

	errorlog *err = myconfig;

#ifdef HAVE_SYSLOG_H
	/* perhaps someone wants to use syslog() */
	openlog("lighttpd", LOG_CONS | LOG_PID, LOG_DAEMON);
#endif
	err->mode = ERRORLOG_STDERR;

	if (use_syslog) {
		err->mode = ERRORLOG_SYSLOG;
	} else if (!buffer_is_empty(file)) {
		if (-1 == (err->fd = open(file->ptr, O_APPEND | O_WRONLY | O_CREAT | O_LARGEFILE, 0644))) {
			log_error_write(NULL, __FILE__, __LINE__, "SBSS",
					"opening errorlog '", file,
					"' failed: ", strerror(errno));

			return -1;
		}
#ifdef FD_CLOEXEC
		/* close fd on exec (cgi) */
		fcntl(err->fd, F_SETFD, FD_CLOEXEC);
#endif
		err->mode = ERRORLOG_FILE;
		err->file = file;
	}

	TRACE("%s", "server started");

#ifdef HAVE_VALGRIND_VALGRIND_H
	/* don't close stderr for debugging purposes if run in valgrind */
	if (RUNNING_ON_VALGRIND) close_stderr = 0;
#endif
	if (err->mode == ERRORLOG_STDERR) close_stderr = 0;

	/* move stderr to /dev/null */
	if (close_stderr &&
	    -1 != (fd = open("/dev/null", O_WRONLY))) {
		close(STDERR_FILENO);
		dup2(fd, STDERR_FILENO);
		close(fd);
	}
	return 0;
}

/**
 * open the errorlog
 *
 * if the open failed, report to the user and die
 * if no filename is given, use syslog instead
 *
 */

int log_error_cycle(void) {
	/* only cycle if we are not in syslog-mode */

	errorlog *err = myconfig;

	if (err->mode == ERRORLOG_FILE) {
		buffer *file = err->file;
		/* already check of opening time */

		int new_fd;

		if (-1 == (new_fd = open(file->ptr, O_APPEND | O_WRONLY | O_CREAT | O_LARGEFILE, 0644))) {
			/* write to old log */
			log_error_write(NULL, __FILE__, __LINE__, "SBSSS",
					"cycling errorlog '", file,
					"' failed: ", strerror(errno),
					", falling back to syslog()");

			close(err->fd);
			err->fd = -1;
#ifdef HAVE_SYSLOG_H
			err->mode = ERRORLOG_SYSLOG;
#endif
		} else {
			/* ok, new log is open, close the old one */
			close(err->fd);
			err->fd = new_fd;
		}
	}

	TRACE("%s", "logfiles cycled");

	return 0;
}

int log_error_write(void *srv, const char *filename, unsigned int line, const char *fmt, ...) {
	va_list ap;
	time_t t;

	errorlog *err = myconfig;

	UNUSED(srv);

	switch(err->mode) {
	case ERRORLOG_FILE:
	case ERRORLOG_STDERR:
		/* cache the generated timestamp */
		t = time(NULL);

		if (t != err->cached_ts) {
			buffer_prepare_copy(err->cached_ts_str, 255);
			strftime(err->cached_ts_str->ptr, err->cached_ts_str->size - 1, "%Y-%m-%d %H:%M:%S", localtime(&(t)));
			err->cached_ts_str->used = strlen(err->cached_ts_str->ptr) + 1;
			err->cached_ts = t;
		}

		buffer_copy_string_buffer(err->buf, err->cached_ts_str);
		BUFFER_APPEND_STRING_CONST(err->buf, ": (");
		break;
	case ERRORLOG_SYSLOG:
		/* syslog is generating its own timestamps */
		BUFFER_COPY_STRING_CONST(err->buf, "(");
		break;
	}

	buffer_append_string(err->buf, filename);
	BUFFER_APPEND_STRING_CONST(err->buf, ".");
	buffer_append_long(err->buf, line);
	BUFFER_APPEND_STRING_CONST(err->buf, ") ");

	for(va_start(ap, fmt); *fmt; fmt++) {
		int d;
		char *s;
		buffer *b;
		off_t o;

		switch(*fmt) {
		case 's':           /* string */
			s = va_arg(ap, char *);
			buffer_append_string(err->buf, s);
			BUFFER_APPEND_STRING_CONST(err->buf, " ");
			break;
		case 'b':           /* buffer */
			b = va_arg(ap, buffer *);
			buffer_append_string_buffer(err->buf, b);
			BUFFER_APPEND_STRING_CONST(err->buf, " ");
			break;
		case 'd':           /* int */
			d = va_arg(ap, int);
			buffer_append_long(err->buf, d);
			BUFFER_APPEND_STRING_CONST(err->buf, " ");
			break;
		case 'o':           /* off_t */
			o = va_arg(ap, off_t);
			buffer_append_off_t(err->buf, o);
			BUFFER_APPEND_STRING_CONST(err->buf, " ");
			break;
		case 'x':           /* int (hex) */
			d = va_arg(ap, int);
			BUFFER_APPEND_STRING_CONST(err->buf, "0x");
			buffer_append_long_hex(err->buf, d);
			BUFFER_APPEND_STRING_CONST(err->buf, " ");
			break;
		case 'S':           /* string */
			s = va_arg(ap, char *);
			buffer_append_string(err->buf, s);
			break;
		case 'B':           /* buffer */
			b = va_arg(ap, buffer *);
			buffer_append_string_buffer(err->buf, b);
			break;
		case 'D':           /* int */
			d = va_arg(ap, int);
			buffer_append_long(err->buf, d);
			break;
		case '(':
		case ')':
		case '<':
		case '>':
		case ',':
		case ' ':
			buffer_append_string_len(err->buf, fmt, 1);
			break;
		}
	}
	va_end(ap);

	switch(err->mode) {
	case ERRORLOG_FILE:
		BUFFER_APPEND_STRING_CONST(err->buf, "\n");
		write(err->fd, err->buf->ptr, err->buf->used - 1);
		break;
	case ERRORLOG_STDERR:
		BUFFER_APPEND_STRING_CONST(err->buf, "\n");
		write(STDERR_FILENO, err->buf->ptr, err->buf->used - 1);
		break;
#ifdef HAVE_SYSLOG_H
	case ERRORLOG_SYSLOG:
		syslog(LOG_ERR, "%s", err->buf->ptr);
		break;
#endif
	}

	return 0;
}

int log_trace(const char *fmt, ...) {
	buffer *b;
	int l;
	errorlog *err = myconfig;
	va_list ap;

	b = buffer_init();
	buffer_prepare_copy(b, 4096);

	do {
		va_start(ap, fmt);
		l = vsnprintf(b->ptr, b->size, fmt, ap);
		va_end(ap);

		if (l > -1 && l < b->size) {
			b->used = l + 1;

			break;
		}

		if (l > -1) {
			/* l is the mem-size we need */
			buffer_prepare_copy(b, l);
		} else {
			/* try to get some more bytes and try again */
			buffer_prepare_append(b, 512);
		}
	} while(1);

	/* write b */
	switch(err->mode) {
	case ERRORLOG_FILE:
		buffer_append_string(b, "\r\n");
		write(err->fd, b->ptr, b->used - 1);
		break;
	case ERRORLOG_STDERR:
		buffer_append_string(b, "\r\n");
		write(STDERR_FILENO, b->ptr, b->used - 1);
		break;
#ifdef HAVE_SYSLOG_H
	case ERRORLOG_SYSLOG:
		syslog(LOG_ERR, "%s", b->ptr);
		break;
#endif
	}

	buffer_free(b);

	return 0;
}

#if REMOVE_PATH_FROM_FILE
const char *remove_path(const char *path) {
	char *p = strrchr(path, DIR_SEPERATOR);
	if (NULL != p && *(p) != '\0') {
		return (p + 1);
	}
	return path;
}
#endif

