/*
 * make sure _GNU_SOURCE is defined
 */
#include "settings.h"
#include "network_backends.h"
#ifdef USE_GTHREAD_AIO
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

gpointer network_gthread_aio_read_thread(gpointer _srv) {
        server *srv = (server *)_srv;

	GAsyncQueue * inq;
	GAsyncQueue * outq;

	int fadvise_is_enosys = 0;

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
			int mmap_fd;
			connection *con = wj->con;
			off_t max_toSend = 64 kByte; /** should be larger than the send buffer */

			int fadvise_fd = 0;
			off_t fadvise_offset = 0;
			off_t fadvise_len = 0;

#if 0
			/* try to be adaptive */
			int snd_buf_size = 0;
			socklen_t snd_buf_size_size = sizeof(snd_buf_size);

			if (0 == getsockopt(con->sock->fd, SOL_SOCKET, SO_SNDBUF, &snd_buf_size, &snd_buf_size_size)) {
				/* adjust the read-data to the send-buffer */
				if (snd_buf_size * 4 > max_toSend) {
					max_toSend = snd_buf_size * 4;
				}
			}
#endif
			
			offset = c->file.start + c->offset;

			toSend = c->file.length - c->offset > max_toSend ?
				max_toSend : c->file.length - c->offset;

			c->file.copy.offset = 0;
			c->file.copy.length = 0;

			/* open a file in /dev/shm to write to */
			if (c->file.mmap.start == MAP_FAILED) {
#if defined(HAVE_MEM_MMAP_ZERO)
				if (-1 == (mmap_fd = open("/dev/zero", O_RDWR))) {
					if (errno != EMFILE) {
						TRACE("open(/dev/zero) returned: %d (%s)",
							errno, strerror(errno));
						c->async.ret_val = NETWORK_STATUS_FATAL_ERROR;
					} else {
						c->async.ret_val = NETWORK_STATUS_WAIT_FOR_FD;
					}
				} else {
					c->file.mmap.offset = 0;
					c->file.mmap.length = toSend;
	
					c->file.mmap.start = mmap(0, c->file.mmap.length,
							PROT_READ | PROT_WRITE, MAP_SHARED, mmap_fd, 0);
					if (c->file.mmap.start == MAP_FAILED) {
						TRACE("mmap(/dev/zero) returned: %d (%s)",
							errno, strerror(errno));
						c->async.ret_val = NETWORK_STATUS_FATAL_ERROR;
					}
	
					close(mmap_fd);
					mmap_fd = -1;
				}
#elif defined(HAVE_MEM_MMAP_ANON)
				c->file.mmap.offset = 0;
				c->file.mmap.length = toSend; /* align to page-size */
				c->file.mmap.start = mmap(0, c->file.mmap.length,
					PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANON, -1, 0);
						
				if (c->file.mmap.start == MAP_FAILED) {
					TRACE("mmap(MAP_ANON) returned: %d (%s)",
							errno, strerror(errno));
					c->async.ret_val = NETWORK_STATUS_FATAL_ERROR;
				}
#else
#error hmm, does your system support mmap(/dev/zero) or mmap(MAP_ANON)
#endif
			}
			if (c->file.mmap.start != MAP_FAILED) {
				timing_log(srv, con, TIME_SEND_ASYNC_READ_START);

				if (-1 == (r = pread(c->file.fd, c->file.mmap.start, toSend, c->file.start + c->offset))) {
					switch(errno) {
					default:
						ERROR("reading file failed: %d (%s)", errno, strerror(errno));

						c->async.ret_val = NETWORK_STATUS_FATAL_ERROR;
					}
				} else if (r == 0) {
					ERROR("pread(%s) returned 0 ... not good", BUF_STR(c->file.name));
	
					c->async.ret_val = NETWORK_STATUS_FATAL_ERROR;
				} else {
					timing_log(srv, con, TIME_SEND_ASYNC_READ_END);
					c->file.copy.length = r;
				}
			}

			if (c->file.copy.length && !fadvise_is_enosys) {
				fadvise_fd     = c->file.fd;
				fadvise_offset = c->file.start  + c->offset + c->file.copy.length;
				fadvise_len    = c->file.length - c->offset - c->file.copy.length;
			       
				if (fadvise_len > max_toSend) {
					fadvise_len = max_toSend;
				}
			}
			timing_log(srv, con, TIME_SEND_ASYNC_READ_END_QUEUED);
			/* read async, write as usual */ 
			g_async_queue_push(outq, wj->con);

#if defined(HAVE_POSIX_FADVISE) && defined(POSIX_FADV_WILLNEED)
			/* read ahead */
			if (c->file.copy.length && !fadvise_is_enosys && fadvise_len) {
				/* let's hope that the fd is still valid when we try to read ahead */
				if (-1 == posix_fadvise(fadvise_fd, fadvise_offset, fadvise_len, POSIX_FADV_WILLNEED)) {
					if (ENOSYS != errno) {
						ERROR("posix_fadvise(%d) failed: %s (%d)", fadvise_fd, strerror(errno), errno);
					} else {
						/* don't try again as we don't support it */
						fadvise_is_enosys = 1;
					}
				}
			}
#endif
			write_job_free(wj);
		}
	}
	
	g_async_queue_unref(srv->aio_write_queue);
	g_async_queue_unref(srv->joblist_queue);

	return NULL;

}


NETWORK_BACKEND_WRITE(gthreadaio) {
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
			ssize_t r;

			/* we might be on our way back from the async request and have a status-code */
			if (c->async.ret_val != NETWORK_STATUS_UNSET) {
				ret = c->async.ret_val;

				c->async.ret_val = NETWORK_STATUS_UNSET;

				ERROR("thread returned: %d", ret);

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
				/* tell the kernel that we want to stream the file
				 *
				 * - POSIX_FADV_SEQUENTIAL doubles the read-ahead on Linux
				 *
				 *  */
				if (-1 == posix_fadvise(c->file.fd, c->file.start, c->file.length, POSIX_FADV_SEQUENTIAL)) {
					if (ENOSYS != errno) {
						ERROR("posix_fadvise(%s) failed: %s (%d)", c->file.name->ptr, strerror(errno), errno);
					}
				}
#endif
			}
			/* check if we have content */
			if (c->file.copy.length == 0) {
				const off_t max_toSend = 64 kByte; /** should be larger than the send buffer */
				size_t toSend;
				off_t offset;

				/* start to write a block out the to net work */
				timing_log(srv, con, TIME_SEND_WRITE_START);

				offset = c->file.start + c->offset;

				toSend = c->file.length - c->offset > max_toSend ?
					max_toSend : c->file.length - c->offset;

				/* we small files don't take the overhead of a full async-loop */
				if (toSend < 4 * 1024) {
					int mmap_fd;
			
					c->file.copy.offset = 0;
					c->file.copy.length = toSend;
			
					/* open a file in /dev/shm to write to */
					if (c->file.mmap.start == MAP_FAILED) {
						if (-1 == (mmap_fd = open("/dev/zero", O_RDWR))) {
							if (errno != EMFILE) {
								TRACE("open(/dev/zero) returned: %d (%s), open fds: %d",
									errno, strerror(errno));
								return NETWORK_STATUS_FATAL_ERROR;
							} else {
								return NETWORK_STATUS_WAIT_FOR_FD;
							}
						} else {
							c->file.mmap.offset = 0;
							c->file.mmap.length = c->file.copy.length; /* align to page-size */
				
							c->file.mmap.start = mmap(0, c->file.mmap.length,
									PROT_READ | PROT_WRITE, MAP_SHARED, mmap_fd, 0);
							if (c->file.mmap.start == MAP_FAILED) {
								ERROR("mmap(%s) failed: %s (%d)", c->file.name->ptr, strerror(errno), errno);

								return NETWORK_STATUS_FATAL_ERROR;
							}
				
							close(mmap_fd);
							mmap_fd = -1;
						}
					}
					
					if (c->file.mmap.start != MAP_FAILED) {
						lseek(c->file.fd, c->file.start + c->offset, SEEK_SET);
			
						if (-1 == (r = read(c->file.fd, c->file.mmap.start, c->file.copy.length))) {
							switch(errno) {
							default:
								ERROR("reading file failed: %d (%s)", errno, strerror(errno));
			
								return NETWORK_STATUS_FATAL_ERROR;
							}
						} else if (r == 0) {
							ERROR("read() returned 0 ... not good: %s", "");
			
							return NETWORK_STATUS_FATAL_ERROR;
						} else if (r != c->file.copy.length) {
							ERROR("read() returned %d instead of %d", r, c->file.copy.length);
			
							return NETWORK_STATUS_FATAL_ERROR;
						}
					} else {
						return NETWORK_STATUS_FATAL_ERROR;
					}
				} else {
					write_job *wj;

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
			}

			if (-1 == (r = write(sock->fd, c->file.mmap.start + c->file.copy.offset, c->file.copy.length - c->file.copy.offset))) {
				switch (errno) {
				case EINTR:
				case EAGAIN:
					return NETWORK_STATUS_WAIT_FOR_EVENT;
				case EPIPE:
				case ECONNRESET:
					return NETWORK_STATUS_CONNECTION_CLOSE;
				default:
					ERROR("write failed: %d (%s) [%lld, %p, %lld]", 
							errno, strerror(errno), c->file.copy.length, c->file.mmap.start, c->file.copy.offset);
					return NETWORK_STATUS_FATAL_ERROR;
				}
			}

			if (r == 0) {
				return NETWORK_STATUS_CONNECTION_CLOSE;
			}

			c->file.copy.offset += r; /* offset in the copy-chunk */

			c->offset += r; /* global offset in the file */
			cq->bytes_out += r;

			if (c->file.mmap.length == c->file.copy.offset) {
				/* this block is sent, get a new one */
				timing_log(srv, con, TIME_SEND_WRITE_END);

				timing_print(srv, con);

				c->file.copy.length = 0;
			}

			if (c->offset == c->file.length) {
				chunk_finished = 1;

				munmap(c->file.mmap.start, c->file.mmap.length);
				c->file.mmap.start = MAP_FAILED;

				if (c->file.copy.fd != -1) {
					close(c->file.copy.fd);
					c->file.copy.fd = -1;
				}

				if (c->file.fd != -1) {
					close(c->file.fd);
					c->file.fd = -1;
				}
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
