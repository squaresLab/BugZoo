#ifndef _CHUNK_H_
#define _CHUNK_H_

#include "buffer.h"
#include "array.h"

typedef struct chunk {
	enum { UNUSED_CHUNK, MEM_CHUNK, FILE_CHUNK } type;

	buffer *mem; /* either the storage of the mem-chunk or the read-ahead buffer */

	struct {
		/* filechunk */
		buffer *name; /* name of the file */
		off_t  start; /* starting offset in the file */
		off_t  length; /* octets to send from the starting offset */

		int    fd;
		struct {
			char   *start; /* the start pointer of the mmap'ed area */
			size_t length; /* size of the mmap'ed area */
			off_t  offset; /* start is <n> octets away from the start of the file */
		} mmap;

		int is_temp; /* file is temporary and will be deleted on cleanup */

		struct {
			int fd;
			off_t length;
			off_t offset;
		} copy;
	} file;

	off_t  offset; /* octets sent from this chunk
			  the size of the chunk is either
			  - mem-chunk: mem->used - 1
			  - file-chunk: file.length
			*/

	struct {
		off_t written;
		int ret_val;
	} async;

	struct chunk *next;
} chunk;

typedef struct {
	chunk *first;
	chunk *last;

	chunk *unused;
	size_t unused_chunks;

	array *tempdirs;

	int is_closed;   /* the input to this CQ is closed */

	off_t  bytes_in, bytes_out;
} chunkqueue;

LI_API chunkqueue* chunkqueue_init(void);
LI_API int chunkqueue_set_tempdirs(chunkqueue *c, array *tempdirs);
LI_API int chunkqueue_append_file(chunkqueue *c, buffer *fn, off_t offset, off_t len);
LI_API int chunkqueue_append_mem(chunkqueue *c, const char *mem, size_t len);
LI_API int chunkqueue_append_buffer(chunkqueue *c, buffer *mem);
LI_API int chunkqueue_prepend_buffer(chunkqueue *c, buffer *mem);

LI_API buffer * chunkqueue_get_append_buffer(chunkqueue *c);
LI_API buffer * chunkqueue_get_prepend_buffer(chunkqueue *c);
LI_API chunk * chunkqueue_get_append_tempfile(chunkqueue *cq);
LI_API int chunkqueue_steal_tempfile(chunkqueue *cq, chunk *in);
LI_API int chunkqueue_steal_chunk(chunkqueue *cq, chunk *c);
LI_API int chunkqueue_steal_chunks_len(chunkqueue *cq, chunk *c, size_t max_len);
LI_API int chunkqueue_steal_all_chunks(chunkqueue *cq, chunkqueue *in);
LI_API int chunkqueue_skip(chunkqueue *cq, off_t skip);
LI_API void chunkqueue_remove_empty_last_chunk(chunkqueue *cq);

LI_API int chunkqueue_remove_finished_chunks(chunkqueue *cq);

LI_API off_t chunkqueue_length(chunkqueue *c);
LI_API off_t chunkqueue_written(chunkqueue *c);
LI_API void chunkqueue_free(chunkqueue *c);
LI_API void chunkqueue_reset(chunkqueue *c);

LI_API int chunkqueue_is_empty(chunkqueue *c);

LI_API void chunkqueue_print(chunkqueue *cq);

#endif
