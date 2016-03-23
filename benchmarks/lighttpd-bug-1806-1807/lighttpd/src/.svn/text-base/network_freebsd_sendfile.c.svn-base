#include "network_backends.h"

#ifdef USE_FREEBSD_SENDFILE

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

#include "network.h"
#include "fdevent.h"
#include "log.h"
#include "stat_cache.h"


#ifndef UIO_MAXIOV
# if defined(__FreeBSD__) || defined(__DragonFly__)
/* FreeBSD 4.7, 4.9 defined it in sys/uio.h only if _KERNEL is specified */
#  define UIO_MAXIOV 1024
# endif
#endif

NETWORK_BACKEND_WRITE(freebsdsendfile) {
	chunk *c;
	size_t chunks_written = 0;

	for(c = cq->first; c; c = c->next, chunks_written++) {
		chunk *tc;
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
			off_t offset, r;
			size_t toSend;
			stat_cache_entry *sce = NULL;
			int ifd;

			if (HANDLER_ERROR == stat_cache_get_entry(srv, con, c->file.name, &sce)) {
				log_error_write(srv, __FILE__, __LINE__, "sb",
						strerror(errno), c->file.name);
				return NETWORK_STATUS_FATAL_ERROR;
			}

			offset = c->file.start + c->offset;
			/* limit the toSend to 2^31-1 bytes in a chunk */
			toSend = c->file.length - c->offset > ((1 << 30) - 1) ?
				((1 << 30) - 1) : c->file.length - c->offset;

			if (offset > sce->st.st_size) {
				log_error_write(srv, __FILE__, __LINE__, "sb", "file was shrinked:", c->file.name);

				return NETWORK_STATUS_FATAL_ERROR;
			}

			if (-1 == (ifd = open(c->file.name->ptr, O_RDONLY))) {
				log_error_write(srv, __FILE__, __LINE__, "ss", "open failed: ", strerror(errno));

				return NETWORK_STATUS_FATAL_ERROR;
			}

			r = 0;

			/* FreeBSD sendfile() */
			if (-1 == sendfile(ifd, sock->fd, offset, toSend, NULL, &r, 0)) {
				switch(errno) {
				case EAGAIN:
					break;
				case ENOTCONN:
					close(ifd);
					return NETWORK_STATUS_CONNECTION_CLOSE;
				default:
					log_error_write(srv, __FILE__, __LINE__, "ssd", "sendfile: ", strerror(errno), errno);
					close(ifd);
					return NETWORK_STATUS_FATAL_ERROR;
				}
			}
			close(ifd);

			c->offset += r;
			cq->bytes_out += r;

			if (c->offset == c->file.length) {
				chunk_finished = 1;
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
