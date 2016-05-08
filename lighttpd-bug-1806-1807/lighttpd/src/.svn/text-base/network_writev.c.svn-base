#ifndef _GNU_SOURCE
#define _GNU_SOURCE /* we need O_DIRECT */
#endif

#include "network_backends.h"

#ifdef USE_WRITEV

#include <sys/types.h>
#include <sys/socket.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <netinet/in.h>
#include <netinet/tcp.h>

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <netdb.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <assert.h>

#include "network.h"
#include "fdevent.h"
#include "log.h"
#include "stat_cache.h"
#include "sys-files.h"

#ifndef UIO_MAXIOV
# if defined(__FreeBSD__) || defined(__APPLE__) || defined(__NetBSD__)
/* FreeBSD 4.7 defines it in sys/uio.h only if _KERNEL is specified */
#  define UIO_MAXIOV 1024
# elif defined(__sgi)
/* IRIX 6.5 has sysconf(_SC_IOV_MAX) which might return 512 or bigger */
#  define UIO_MAXIOV 512
# elif defined(__sun)
/* Solaris (and SunOS?) defines IOV_MAX instead */
#  ifndef IOV_MAX
#   define UIO_MAXIOV 16
#  else
#   define UIO_MAXIOV IOV_MAX
#  endif
# elif defined(IOV_MAX)
#  define UIO_MAXIOV IOV_MAX
# else
#  error UIO_MAXIOV nor IOV_MAX are defined
# endif
#endif

#if 0
#define LOCAL_BUFFERING 1
#endif

NETWORK_BACKEND_WRITE_CHUNK(writev_mem) {
	char * offset;
	size_t toSend;
	ssize_t r;

	size_t num_chunks, i;
	struct iovec chunks[UIO_MAXIOV];
	chunk *tc; /* transfer chunks */
	size_t num_bytes = 0;

	UNUSED(con);
	/* we can't send more then SSIZE_MAX bytes in one chunk */

	/* build writev list
	 *
	 * 1. limit: num_chunks < UIO_MAXIOV
	 * 2. limit: num_bytes < SSIZE_MAX
	 */
	for(num_chunks = 0, tc = c; tc && tc->type == MEM_CHUNK && num_chunks < UIO_MAXIOV; num_chunks++, tc = tc->next);

	for(tc = c, i = 0; i < num_chunks; tc = tc->next, i++) {
		if (tc->mem->used == 0) {
			chunks[i].iov_base = tc->mem->ptr;
			chunks[i].iov_len  = 0;
		} else {
			offset = tc->mem->ptr + tc->offset;
			toSend = tc->mem->used - 1 - tc->offset;

			chunks[i].iov_base = offset;

			/* protect the return value of writev() */
			if (toSend > SSIZE_MAX ||
			    num_bytes + toSend > SSIZE_MAX) {
				chunks[i].iov_len = SSIZE_MAX - num_bytes;

				num_chunks = i + 1;
				break;
			} else {
				chunks[i].iov_len = toSend;
			}

			num_bytes += toSend;
		}
	}

	if ((r = writev(sock->fd, chunks, num_chunks)) < 0) {
		switch (errno) {
		case EAGAIN:
			return NETWORK_STATUS_WAIT_FOR_EVENT;
		case EINTR:
			return NETWORK_STATUS_INTERRUPTED;
		case EPIPE:
		case ECONNRESET:
			return NETWORK_STATUS_CONNECTION_CLOSE;
		default:
			log_error_write(srv, __FILE__, __LINE__, "ssd",
					"writev failed:", strerror(errno), sock->fd);

			return NETWORK_STATUS_FATAL_ERROR;
		}
	}

	cq->bytes_out += r;

	/* check which chunks have been written */

	for(i = 0, tc = c; i < num_chunks; i++, tc = tc->next) {
		if (r >= (ssize_t)chunks[i].iov_len) {
			/* written */
			r -= chunks[i].iov_len;
			tc->offset += chunks[i].iov_len;
		} else {
			/* partially written */

			tc->offset += r;

			return NETWORK_STATUS_WAIT_FOR_EVENT;
		}
	}

	/* all chunks have been pushed out */
	return NETWORK_STATUS_SUCCESS;
}

NETWORK_BACKEND_WRITE(writev) {
	chunk *c, *tc;

	for(c = cq->first; c; c = c->next) {
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
			off_t abs_offset;
			off_t toSend;
			stat_cache_entry *sce = NULL;

#define KByte * 1024
#define MByte * 1024 KByte
#define GByte * 1024 MByte
			const off_t we_want_to_mmap = 512 KByte;
			char *start = NULL;

			if (HANDLER_ERROR == stat_cache_get_entry(srv, con, c->file.name, &sce)) {
				log_error_write(srv, __FILE__, __LINE__, "sb",
						strerror(errno), c->file.name);
				return NETWORK_STATUS_FATAL_ERROR;
			}

			abs_offset = c->file.start + c->offset;

			if (abs_offset > sce->st.st_size) {
				log_error_write(srv, __FILE__, __LINE__, "sb",
						"file was shrinked:", c->file.name);

				return NETWORK_STATUS_FATAL_ERROR;
			}

			/* mmap the buffer
			 * - first mmap
			 * - new mmap as the we are at the end of the last one */
			if (c->file.mmap.start == MAP_FAILED ||
			    abs_offset == (off_t)(c->file.mmap.offset + c->file.mmap.length)) {

				/* Optimizations for the future:
				 *
				 * adaptive mem-mapping
				 *   the problem:
				 *     we mmap() the whole file. If someone has alot large files and 32bit
				 *     machine the virtual address area will be unrun and we will have a failing
				 *     mmap() call.
				 *   solution:
				 *     only mmap 16M in one chunk and move the window as soon as we have finished
				 *     the first 8M
				 *
				 * read-ahead buffering
				 *   the problem:
				 *     sending out several large files in parallel trashes the read-ahead of the
				 *     kernel leading to long wait-for-seek times.
				 *   solutions: (increasing complexity)
				 *     1. use madvise
				 *     2. use a internal read-ahead buffer in the chunk-structure
				 *     3. use non-blocking IO for file-transfers
				 *   */

				/* all mmap()ed areas are 512kb expect the last which might be smaller */
				off_t we_want_to_send;
				size_t to_mmap;

				/* this is a remap, move the mmap-offset */
				if (c->file.mmap.start != MAP_FAILED) {
					munmap(c->file.mmap.start, c->file.mmap.length);
					c->file.mmap.offset += we_want_to_mmap;
				} else {
					/* in case the range-offset is after the first mmap()ed area we skip the area */
					c->file.mmap.offset = 0;

					while (c->file.mmap.offset + we_want_to_mmap < c->file.start) {
						c->file.mmap.offset += we_want_to_mmap;
					}
				}

				/* length is rel, c->offset too, assume there is no limit at the mmap-boundaries */
				we_want_to_send = c->file.length - c->offset;
				to_mmap = (c->file.start + c->file.length) - c->file.mmap.offset;

				/* we have more to send than we can mmap() at once */
				if (abs_offset + we_want_to_send > c->file.mmap.offset + we_want_to_mmap) {
					we_want_to_send = (c->file.mmap.offset + we_want_to_mmap) - abs_offset;
					to_mmap = we_want_to_mmap;
				}

				if (-1 == c->file.fd) {  /* open the file if not already open */
					if (-1 == (c->file.fd = open(c->file.name->ptr, O_RDONLY | (srv->srvconf.use_noatime ? O_NOATIME : 0) ))) {
						log_error_write(srv, __FILE__, __LINE__, "sbs", "open failed for:", c->file.name, strerror(errno));

						return NETWORK_STATUS_FATAL_ERROR;
					}
#ifdef FD_CLOEXEC
					fcntl(c->file.fd, F_SETFD, FD_CLOEXEC);
#endif
				}

				if (MAP_FAILED == (c->file.mmap.start = mmap(0, to_mmap, PROT_READ, MAP_SHARED, c->file.fd, c->file.mmap.offset))) {
					/* close it here, otherwise we'd have to set FD_CLOEXEC */

					log_error_write(srv, __FILE__, __LINE__, "ssbd", "mmap failed:",
							strerror(errno), c->file.name, c->file.fd);

					return NETWORK_STATUS_FATAL_ERROR;
				}

				c->file.mmap.length = to_mmap;
#ifdef LOCAL_BUFFERING
				buffer_copy_string_len(c->mem, c->file.mmap.start, c->file.mmap.length);
#else
#ifdef HAVE_MADVISE
				/* don't advise files < 64Kb */
				if (c->file.mmap.length > (64 KByte)) {
					/* darwin 7 is returning EINVAL all the time and I don't know how to
					 * detect this at runtime.i
					 *
					 * ignore the return value for now */
					madvise(c->file.mmap.start, c->file.mmap.length, MADV_WILLNEED);
				}
#endif
#endif

				/* chunk_reset() or chunk_free() will cleanup for us */
			}

			/* to_send = abs_mmap_end - abs_offset */
			toSend = (c->file.mmap.offset + c->file.mmap.length) - (abs_offset);

			if (toSend < 0) {
				log_error_write(srv, __FILE__, __LINE__, "soooo",
						"toSend is negative:",
						toSend,
						c->file.mmap.length,
						abs_offset,
						c->file.mmap.offset);
				assert(toSend < 0);
			}

#ifdef LOCAL_BUFFERING
			start = c->mem->ptr;
#else
			start = c->file.mmap.start;
#endif

			if ((r = write(sock->fd, start + (abs_offset - c->file.mmap.offset), toSend)) < 0) {
				switch (errno) {
				case EAGAIN:
				case EINTR:
					return NETWORK_STATUS_WAIT_FOR_EVENT;
				case EPIPE:
				case ECONNRESET:
					return NETWORK_STATUS_CONNECTION_CLOSE;
				default:
					log_error_write(srv, __FILE__, __LINE__, "ssd",
							"write failed:", strerror(errno), sock->fd);

					return NETWORK_STATUS_FATAL_ERROR;
				}
			}

			c->offset += r;
			cq->bytes_out += r;

			if (c->offset == c->file.length) {
				chunk_finished = 1;

				/* we don't need the mmaping anymore */
				if (c->file.mmap.start != MAP_FAILED) {
					munmap(c->file.mmap.start, c->file.mmap.length);
					c->file.mmap.start = MAP_FAILED;
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
