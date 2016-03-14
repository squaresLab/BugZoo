/*
 * make sure _GNU_SOURCE is defined
 */
#include "settings.h"
#include "network_backends.h"
#if defined(USE_GTHREAD_SENDFILE)
#include <sys/types.h>
#include <sys/stat.h>
#ifdef HAVE_SYS_TIME_H
#include <sys/time.h>
#endif

#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <assert.h>

#include "network.h"
#include "fdevent.h"
#include "log.h"
#include "stat_cache.h"
#include "joblist.h"
#include "timing.h"

#include "sys-files.h"
#include "sys-socket.h"

typedef struct {
	chunk *c;

	void *con;

	int sock_fd;
} write_job;

static write_job *write_job_init() {
	write_job *wj = calloc(1, sizeof(*wj));

	return wj;
}

static void write_job_free(write_job *wj) {
	if (!wj) return;

	free(wj);
}

#define kByte * (1024)
#define MByte * (1024 kByte)

/**
 * log the time-stamps of the different stages
 */
static void timing_print(server *srv, connection *con) {
	if (!srv->srvconf.log_timing) return;

	TRACE("write-start: %d.%06d "
	      "read-queue-wait: %d ms "
	      "read-time: %d ms "
	      "write-time: %d ms ",
	       con->timestamps[TIME_SEND_WRITE_START].tv_sec,
	       con->timestamps[TIME_SEND_WRITE_START].tv_usec,

	       TIME_DIFF(TIME_SEND_ASYNC_READ_START, TIME_SEND_ASYNC_READ_QUEUED),
	       TIME_DIFF(TIME_SEND_ASYNC_READ_END, TIME_SEND_ASYNC_READ_START),
	       TIME_DIFF(TIME_SEND_WRITE_END, TIME_SEND_ASYNC_READ_END_QUEUED)
       );
}

/**
 * a backend which calls sendfile() in a thread
 */

gpointer network_gthread_sendfile_read_thread(gpointer _srv) {
        server *srv = (server *)_srv;

	GAsyncQueue * inq;
	GAsyncQueue * outq;

	g_async_queue_ref(srv->joblist_queue);
	g_async_queue_ref(srv->aio_write_queue);

	outq = srv->joblist_queue;
	inq = srv->aio_write_queue;

	/* */
	while (!srv->is_shutdown) {
		GTimeVal ts;
        	write_job *wj = NULL;

		/* wait one second as the poll() */
		g_get_current_time(&ts);
		g_time_val_add(&ts, 500 * 1000);

		if ((wj = g_async_queue_timed_pop(inq, &ts))) {
			/* let's see what we have to stat */
			ssize_t r;
			off_t offset;
			size_t toSend;
			chunk *c = wj->c;
			connection *con = wj->con;
			off_t max_toSend = 512 kByte; /** should be larger than the send buffer */

			offset = c->file.start + c->offset;

			toSend = c->file.length - c->offset > max_toSend ?
				max_toSend : c->file.length - c->offset;

			timing_log(srv, con, TIME_SEND_ASYNC_READ_START);

			if (-1 == (r = sendfile(wj->sock_fd, c->file.fd, &offset, toSend))) {
				switch (errno) {
				case EAGAIN:
				case EINTR:
					c->async.ret_val = NETWORK_STATUS_WAIT_FOR_EVENT;
					break;
				case EPIPE:
				case ECONNRESET:
					c->async.ret_val = NETWORK_STATUS_CONNECTION_CLOSE;
					break;
				case ENOSYS:
					ERROR("sendfile(%s) is not implemented, use server.network-backend = \"writev\"", 
						BUF_STR(c->file.name));
					c->async.ret_val = NETWORK_STATUS_FATAL_ERROR;
					break;
				default:
					ERROR("sendfile(%s) failed: %s (%d)", 
						BUF_STR(c->file.name),
						strerror(errno), errno);
					c->async.ret_val = NETWORK_STATUS_FATAL_ERROR;
					break;
				}
			} else if (r == 0) {
				c->async.ret_val = NETWORK_STATUS_CONNECTION_CLOSE;
			} else {
				c->async.written = r;
			}

			timing_log(srv, con, TIME_SEND_ASYNC_READ_END);
			timing_log(srv, con, TIME_SEND_ASYNC_READ_END_QUEUED);

			/* read async, write as usual */ 
			g_async_queue_push(outq, wj->con);

			write_job_free(wj);
		}
	}
	
	g_async_queue_unref(srv->aio_write_queue);
	g_async_queue_unref(srv->joblist_queue);

	return NULL;

}


NETWORK_BACKEND_WRITE(gthreadsendfile) {
	chunk *c, *tc;
	size_t chunks_written = 0;

	for(c = cq->first; c; c = c->next, chunks_written++) {
		int chunk_finished = 0;
		network_status_t ret;

		switch(c->type) {
		case MEM_CHUNK:
			ret = network_write_chunkqueue_writev_mem(srv, con, sock, cq, c);

			/* check which chunks are finished now */
			for (tc = c; tc; tc = tc->next) {
				/* finished the chunk */
				if (tc->offset == tc->mem->used - 1) {
					/* skip the first c->next as that will be done by the c = c->next in the other for()-loop */
					if (chunk_finished) {
						c = c->next;
					} else {
						chunk_finished = 1;
					}
				} else {
					break;
				}
			}

			if (ret != NETWORK_STATUS_SUCCESS) {
				return ret;
			}

			break;
		case FILE_CHUNK: {
			/* we might be on our way back from the async request and have a status-code */
			if (c->async.ret_val != NETWORK_STATUS_UNSET) {
				ret = c->async.ret_val;

				c->async.ret_val = NETWORK_STATUS_UNSET;

				return ret;
			}

			/* open file if not already opened */
			if (-1 == c->file.fd) {
				if (-1 == (c->file.fd = open(c->file.name->ptr, O_RDONLY /* | O_DIRECT */ | (srv->srvconf.use_noatime ? O_NOATIME : 0)))) {
					ERROR("opening '%s' failed: %s", BUF_STR(c->file.name), strerror(errno));

					return NETWORK_STATUS_FATAL_ERROR;
				}
#ifdef FD_CLOEXEC
				fcntl(c->file.fd, F_SETFD, FD_CLOEXEC);
#endif
#if defined(HAVE_POSIX_FADVISE) && defined(POSIX_FADV_SEQUENTIAL)
				/* tell the kernel that we want to stream the file */
				if (-1 == posix_fadvise(c->file.fd, c->file.start, c->file.length, POSIX_FADV_SEQUENTIAL)) {
					if (ENOSYS != errno) {
						ERROR("posix_fadvise(%s) failed: %s (%d)", c->file.name->ptr, strerror(errno), errno);
					}
				}
#endif
			}

			if (c->async.written > 0) {
				/* the backend has written something */

				c->offset += c->async.written; /* global offset in the file */
				cq->bytes_out += c->async.written;

				/* this block is sent, get a new one */
				timing_log(srv, con, TIME_SEND_WRITE_END);

				timing_print(srv, con);

				c->async.written = -1;
			}

			if (c->offset == c->file.length) {
				chunk_finished = 1;

				if (c->file.fd != -1) {
					close(c->file.fd);
					c->file.fd = -1;
				}
			} else {
				/* start this write */
				write_job *wj;

				timing_log(srv, con, TIME_SEND_WRITE_START);
				wj = write_job_init();
				wj->c = c;
				wj->con = con;
				wj->sock_fd = sock->fd;

				c->async.written = -1;
				c->async.ret_val = NETWORK_STATUS_UNSET;

				g_async_queue_push(srv->aio_write_queue, wj);

				timing_log(srv, con, TIME_SEND_ASYNC_READ_QUEUED);

				return NETWORK_STATUS_WAIT_FOR_AIO_EVENT;
			}

			break;
		}
		default:

			log_error_write(srv, __FILE__, __LINE__, "ds", c, "type not known");

			return NETWORK_STATUS_FATAL_ERROR;
		}

		if (!chunk_finished) {
			/* not finished yet */

			return NETWORK_STATUS_WAIT_FOR_EVENT;
		}
	}

	return NETWORK_STATUS_SUCCESS;
}

#endif
