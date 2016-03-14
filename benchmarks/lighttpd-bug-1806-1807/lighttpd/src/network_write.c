#include <sys/types.h>
#include <sys/stat.h>

#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#include "network.h"
#include "fdevent.h"
#include "log.h"
#include "stat_cache.h"

#include "sys-socket.h"
#include "sys-files.h"

#include "network_backends.h"

#ifdef USE_WRITE

#ifdef HAVE_SYS_FILIO_H
# include <sys/filio.h>
#endif

#ifdef HAVE_SYS_RESOURCE_H
#include <sys/resource.h>
#endif


/**
* fill the chunkqueue will all the data that we can get
*
* this might be optimized into a readv() which uses the chunks
* as vectors
*/
NETWORK_BACKEND_READ(read) {
	int toread;
	buffer *b;
	off_t r, start_bytes_in;
	off_t max_read = 256 * 1024;

	/**
	 * a EAGAIN is a successful read if we already read something to the chunkqueue
	 */
	int read_something = 0;

	UNUSED(srv);
	UNUSED(con);

	start_bytes_in = cq->bytes_in;

	/* use a chunk-size of 16k */
	do {
		toread = 16384;

		b = chunkqueue_get_append_buffer(cq);

		buffer_prepare_copy(b, toread);

		if (-1 == (r = read(sock->fd, b->ptr, toread))) {
			switch (errno) {
			case EAGAIN:
				/* remove the last chunk from the chunkqueue */
				chunkqueue_remove_empty_last_chunk(cq);
				return read_something ? NETWORK_STATUS_SUCCESS : NETWORK_STATUS_WAIT_FOR_EVENT;
			case ECONNRESET:
				return NETWORK_STATUS_CONNECTION_CLOSE;
			default:
				ERROR("oops, read from fd=%d failed: %s (%d)", sock->fd, strerror(errno), errno );

				return NETWORK_STATUS_FATAL_ERROR;
			}
		}

		if (r == 0) {
			chunkqueue_remove_empty_last_chunk(cq);
			return read_something ? NETWORK_STATUS_SUCCESS : NETWORK_STATUS_CONNECTION_CLOSE;
		}

		read_something = 1;

		b->used = r;
		b->ptr[b->used++] = '\0';
		cq->bytes_in += r;

		if (cq->bytes_in - start_bytes_in > max_read) break;
	} while (r == toread);

	return NETWORK_STATUS_SUCCESS;
}

NETWORK_BACKEND_WRITE(write) {
	chunk *c;

	for(c = cq->first; c; c = c->next) {
		int chunk_finished = 0;

		switch(c->type) {
		case MEM_CHUNK: {
			char * offset;
			size_t toSend;
			ssize_t r;

			if (c->mem->used == 0) {
				chunk_finished = 1;
				break;
			}

			offset = c->mem->ptr + c->offset;
			toSend = c->mem->used - 1 - c->offset;

			if ((r = write(sock->fd, offset, toSend)) < 0) {
				log_error_write(srv, __FILE__, __LINE__, "ssd", "write failed: ", strerror(errno), sock->fd);

				return NETWORK_STATUS_FATAL_ERROR;
			}

			c->offset += r;
			cq->bytes_out += r;

			if (c->offset == (off_t)c->mem->used - 1) {
				chunk_finished = 1;
			}

			break;
		}
		case FILE_CHUNK: {
#ifdef USE_MMAP
			char *p = NULL;
#endif
			ssize_t r;
			off_t offset;
			size_t toSend;
			stat_cache_entry *sce = NULL;
			int ifd;

			if (HANDLER_ERROR == stat_cache_get_entry(srv, con, c->file.name, &sce)) {
				log_error_write(srv, __FILE__, __LINE__, "sb",
						strerror(errno), c->file.name);
				return NETWORK_STATUS_FATAL_ERROR;
			}

			offset = c->file.start + c->offset;
			toSend = c->file.length - c->offset;

			if (offset > sce->st.st_size) {
				log_error_write(srv, __FILE__, __LINE__, "sb", "file was shrinked:", c->file.name);

				return NETWORK_STATUS_FATAL_ERROR;
			}

			if (-1 == (ifd = open(c->file.name->ptr, O_RDONLY))) {
				log_error_write(srv, __FILE__, __LINE__, "ss", "open failed: ", strerror(errno));

				return NETWORK_STATUS_FATAL_ERROR;
			}

#if defined USE_MMAP
			if (MAP_FAILED == (p = mmap(0, sce->st.st_size, PROT_READ, MAP_SHARED, ifd, 0))) {
				log_error_write(srv, __FILE__, __LINE__, "ss", "mmap failed: ", strerror(errno));

				close(ifd);

				return NETWORK_STATUS_FATAL_ERROR;
			}
			close(ifd);

			if ((r = write(sock->fd, p + offset, toSend)) <= 0) {
				log_error_write(srv, __FILE__, __LINE__, "ss", "write failed: ", strerror(errno));
				munmap(p, sce->st.st_size);
				return NETWORK_STATUS_FATAL_ERROR;
			}

			munmap(p, sce->st.st_size);
#else
			buffer_prepare_copy(srv->tmp_buf, toSend);

			lseek(ifd, offset, SEEK_SET);
			if (-1 == (toSend = read(ifd, srv->tmp_buf->ptr, toSend))) {
				log_error_write(srv, __FILE__, __LINE__, "ss", "read: ", strerror(errno));
				close(ifd);

				return NETWORK_STATUS_FATAL_ERROR;
			}
			close(ifd);

			if (-1 == (r = send(sock->fd, srv->tmp_buf->ptr, toSend, 0))) {
				log_error_write(srv, __FILE__, __LINE__, "ss", "write: ", strerror(errno));

				return NETWORK_STATUS_FATAL_ERROR;
			}
#endif
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
