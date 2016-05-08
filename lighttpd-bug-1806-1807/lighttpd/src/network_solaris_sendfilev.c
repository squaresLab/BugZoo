#include "network_backends.h"

#ifdef USE_SOLARIS_SENDFILEV

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
#include <limits.h>

#include "network.h"
#include "fdevent.h"
#include "log.h"
#include "stat_cache.h"

#ifndef UIO_MAXIOV
#define UIO_MAXIOV IOV_MAX
#endif

/**
 * a very simple sendfilev() interface for solaris which can be optimised a lot more
 * as solaris sendfilev() supports 'sending everythin in one syscall()'
 *
 * If you want such an interface and need the performance, just give me an account on
 * a solaris box.
 *   - jan@kneschke.de
 */


NETWORK_BACKEND_WRITE(solarissendfilev) {
	chunk *c;
	size_t chunks_written = 0;

	for(c = cq->first; c; c = c->next, chunks_written++) {
		int chunk_finished = 0;
		network_status_t ret;

		switch(c->type) {
		case MEM_CHUNK:
			ret = network_write_chunkqueue_writev_mem(srv, con, sock, cq, &c);

			if (ret != NETWORK_STATUS_SUCCESS) {
				return ret;
			}

			chunk_finished = 1;

			break;
		case FILE_CHUNK: {
			ssize_t r;
			off_t offset;
			size_t toSend, written;
			sendfilevec_t fvec;
			stat_cache_entry *sce = NULL;
			int ifd;

			if (HANDLER_ERROR == stat_cache_get_entry(srv, con, c->file.name, &sce)) {
				log_error_write(srv, __FILE__, __LINE__, "sb",
						strerror(errno), c->file.name);
				return -1;
			}

			offset = c->file.start + c->offset;
			toSend = c->file.length - c->offset;

			if (offset > sce->st.st_size) {
				log_error_write(srv, __FILE__, __LINE__, "sb", "file was shrinked:", c->file.name);

				return -1;
			}

			if (-1 == (ifd = open(c->file.name->ptr, O_RDONLY))) {
				log_error_write(srv, __FILE__, __LINE__, "ss", "open failed: ", strerror(errno));

				return -1;
			}

			fvec.sfv_fd = ifd;
			fvec.sfv_flag = 0;
			fvec.sfv_off = offset;
			fvec.sfv_len = toSend;

			/* Solaris sendfilev() */
			if (-1 == (r = sendfilev(sock->fd, &fvec, 1, &written))) {
				if (errno != EAGAIN) {
					log_error_write(srv, __FILE__, __LINE__, "ssd", "sendfile: ", strerror(errno), errno);

					close(ifd);
					return NETWORK_STATUS_FATAL_ERROR;
				}

				r = 0;
			}

			close(ifd);
			c->offset += written;
			cq->bytes_out += written;

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

			break;
		}
	}

	return NETWORK_STATUS_SUCCESS;
}

#endif
