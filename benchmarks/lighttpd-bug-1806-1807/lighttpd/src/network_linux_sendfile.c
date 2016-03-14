#ifndef _GNU_SOURCE
#define _GNU_SOURCE /* we need O_DIRECT */
#endif

#include "network_backends.h"

#ifdef USE_LINUX_SENDFILE
#include <sys/types.h>
#include <sys/socket.h>
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
#include <fcntl.h>

#include "network.h"
#include "fdevent.h"
#include "log.h"
#include "stat_cache.h"
#include "sys-files.h"

/* on linux 2.4.29 + debian/ubuntu we have crashes if this is enabled */
#undef HAVE_POSIX_FADVISE

NETWORK_BACKEND_WRITE(linuxsendfile) {
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
			off_t offset;
			size_t toSend;
			stat_cache_entry *sce = NULL;

			offset = c->file.start + c->offset;
			/* limit the toSend to 2^31-1 bytes in a chunk */
			toSend = c->file.length - c->offset > ((1 << 30) - 1) ?
				((1 << 30) - 1) : c->file.length - c->offset;

			/* open file if not already opened */
			if (-1 == c->file.fd) {
				if (-1 == (c->file.fd = open(c->file.name->ptr, O_RDONLY | (srv->srvconf.use_noatime ? O_NOATIME : 0)))) {
					switch (errno) {
					case EMFILE:
						return NETWORK_STATUS_WAIT_FOR_FD;
					default:
						ERROR("opening '%s' failed: %s", BUF_STR(c->file.name), strerror(errno));

						return NETWORK_STATUS_FATAL_ERROR;
					}

					return -1;
				}
#ifdef FD_CLOEXEC
				fcntl(c->file.fd, F_SETFD, FD_CLOEXEC);
#endif
#ifdef HAVE_POSIX_FADVISE
				/* tell the kernel that we want to stream the file */
				if (-1 == posix_fadvise(c->file.fd, 0, 0, POSIX_FADV_SEQUENTIAL)) {
					if (ENOSYS != errno) {
						log_error_write(srv, __FILE__, __LINE__, "ssd",
							"posix_fadvise failed:", strerror(errno), c->file.fd);
					}
				}
#endif
			}

			if (-1 == (r = sendfile(sock->fd, c->file.fd, &offset, toSend))) {
				switch (errno) {
				case EAGAIN:
				case EINTR:
					return NETWORK_STATUS_WAIT_FOR_EVENT;
				case EPIPE:
				case ECONNRESET:
					return NETWORK_STATUS_CONNECTION_CLOSE;
				case ENOSYS:
					ERROR("sendfile(%s) is not implemented, use server.network-backend = \"writev\"", 
						BUF_STR(c->file.name));
					return NETWORK_STATUS_FATAL_ERROR;
				default:
					log_error_write(srv, __FILE__, __LINE__, "ssd",
							"sendfile failed:", strerror(errno), sock->fd);
					return NETWORK_STATUS_FATAL_ERROR;
				}
			}

			if (r == 0) {
				/* We got an event to write but we wrote nothing
				 *
				 * - the file shrinked -> error
				 * - the remote side closed inbetween -> remote-close */

				if (HANDLER_ERROR == stat_cache_get_entry(srv, con, c->file.name, &sce)) {
					/* file is gone ? */
					return NETWORK_STATUS_FATAL_ERROR;
				}

				if (offset > sce->st.st_size) {
					/* file shrinked, close the connection */
					return NETWORK_STATUS_FATAL_ERROR;
				}

				return NETWORK_STATUS_CONNECTION_CLOSE;
			}

#ifdef HAVE_POSIX_FADVISE
#if 0
#define K * 1024
#define M * 1024 K
#define READ_AHEAD 4 M
			/* check if we need a new chunk */
			if ((c->offset & ~(READ_AHEAD - 1)) != ((c->offset + r) & ~(READ_AHEAD - 1))) {
				/* tell the kernel that we want to stream the file */
				if (-1 == posix_fadvise(c->file.fd, (c->offset + r) & ~(READ_AHEAD - 1), READ_AHEAD, POSIX_FADV_NOREUSE)) {
					log_error_write(srv, __FILE__, __LINE__, "ssd",
						"posix_fadvise failed:", strerror(errno), c->file.fd);
				}
			}
#endif
#endif

			c->offset += r;
			cq->bytes_out += r;

			if (c->offset == c->file.length) {
				chunk_finished = 1;

				/* chunk_free() / chunk_reset() will cleanup for us but it is a ok to be faster :) */

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
#if 0
network_linuxsendfile_init(void) {
	p->write = network_linuxsendfile_write_chunkset;
}
#endif
