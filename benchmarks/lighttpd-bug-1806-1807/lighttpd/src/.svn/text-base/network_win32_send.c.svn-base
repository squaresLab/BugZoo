#include <sys/types.h>
#include <sys/stat.h>

#include <errno.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

#include "network.h"
#include "fdevent.h"
#include "log.h"
#include "stat_cache.h"

#include "sys-socket.h"
#include "sys-files.h"

#include "network_backends.h"

#ifdef USE_WIN32_SEND
/**
* fill the chunkqueue will all the data that we can get
*
* this might be optimized into a readv() which uses the chunks
* as vectors
*
* - This is pretty much a copy of the generic network_read receiver.
*
*/
NETWORK_BACKEND_READ(win32recv)
{
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

		if (-1 == (r = recv(sock->fd, b->ptr, toread, 0))) {
			switch (light_sock_errno()) {
			case EAGAIN:
			case EWOULDBLOCK:
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

NETWORK_BACKEND_WRITE(win32send) 
{
	chunk *c;
	size_t chunks_written = 0;

	for(c = cq->first; c; c = c->next)
	{
		int chunk_finished = 0;

		switch(c->type)
		{
		case MEM_CHUNK:
			{
				char * offset;
				size_t toSend;
				ssize_t r;

				if (c->mem->used == 0) {
					chunk_finished = 1;
					break;
				}

				offset = c->mem->ptr + c->offset;
				toSend = c->mem->used - 1 - c->offset;

				if ((r = send(sock->fd, offset, toSend, 0)) < 0)
				{
					errno = WSAGetLastError();

					switch(errno)
					{
					case WSAEWOULDBLOCK:
						return NETWORK_STATUS_WAIT_FOR_EVENT;
					case WSAECONNABORTED:
					case WSAECONNRESET:
						return NETWORK_STATUS_CONNECTION_CLOSE;
					default:
						log_error_write(srv, __FILE__, __LINE__, "sdd", "send to socket:", errno, sock->fd);
						return NETWORK_STATUS_FATAL_ERROR;
					}

					return NETWORK_STATUS_FATAL_ERROR;
				}

				c->offset += r;
				cq->bytes_out += r;

				if (c->offset == (off_t)c->mem->used - 1) {
					chunk_finished = 1;
				}

				break;
			}
		case FILE_CHUNK:
			{
				ssize_t r;
				off_t offset;

				stat_cache_entry *sce = NULL;

				if (HANDLER_ERROR == stat_cache_get_entry(srv, con, c->file.name, &sce))
				{
					log_error_write(srv, __FILE__, __LINE__, "sb", strerror(errno), c->file.name);
					return NETWORK_STATUS_FATAL_ERROR;
				}

				offset = c->file.start + c->offset;

				if (offset > sce->st.st_size)
				{
					log_error_write(srv, __FILE__, __LINE__, "sb", "file was shrinked:", c->file.name);
					return NETWORK_STATUS_FATAL_ERROR;
				}


				if (-1 == c->file.fd)
				{
					if (-1 == (c->file.fd = open(c->file.name->ptr, O_RDONLY|O_BINARY|O_SEQUENTIAL)))
					{
						log_error_write(srv, __FILE__, __LINE__, "ss", "open failed: ", strerror(errno));

						return NETWORK_STATUS_FATAL_ERROR;
					}
				}

				if (-1 == lseek(c->file.fd, offset, SEEK_SET))
				{
					log_error_write(srv, __FILE__, __LINE__, "ss", "lseek failed: ", strerror(errno));
				}

				while(1)
				{
					off_t haveRead = 0;
					int finished = 0;
					int toSend;

					/* only send 64k blocks */
					toSend = c->file.length - c->offset > 256 * 1024 ? 256 * 1024 : c->file.length - c->offset;

					/* BMH. Not 100% sure about this */
					if ( toSend == 0 )
						break;

					buffer_prepare_copy(srv->tmp_buf, toSend);

					if (-1 == (haveRead = read(c->file.fd, srv->tmp_buf->ptr, toSend)))
					{
						log_error_write(srv, __FILE__, __LINE__, "ss", "read from file: ", strerror(errno));

						return NETWORK_STATUS_FATAL_ERROR;
					}

					if (-1 == (r = send(sock->fd, srv->tmp_buf->ptr, haveRead, 0)))
					{
						errno = WSAGetLastError();

						switch(errno) 
						{
						case WSAEWOULDBLOCK:
							return NETWORK_STATUS_WAIT_FOR_EVENT;
						case WSAECONNABORTED:
						case WSAECONNRESET:
							return NETWORK_STATUS_CONNECTION_CLOSE;
						default:
							log_error_write(srv, __FILE__, __LINE__, "sd", "send to socket:", errno);

							return NETWORK_STATUS_FATAL_ERROR;
						}
					}

					c->offset += r;
					cq->bytes_out += r;

					/* BMH: I don't understand this */
					if (r != haveRead)
					{
						break;
					}
				}

				if (c->offset == c->file.length)
				{
					chunk_finished = 1;
				}

				break;
			}
		default:

			log_error_write(srv, __FILE__, __LINE__, "ds", c, "type not known");

			return NETWORK_STATUS_FATAL_ERROR;
		}

		if (!chunk_finished)
		{
			/* not finished yet */

			return NETWORK_STATUS_WAIT_FOR_EVENT;
		}

		chunks_written++;
	}
	/* fprintf(stderr, "%s.%d: chunks_written: %d\r\n", __FILE__, __LINE__, chunks_written); */

	return NETWORK_STATUS_SUCCESS;
}

#endif
