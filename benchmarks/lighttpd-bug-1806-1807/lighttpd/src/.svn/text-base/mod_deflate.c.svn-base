/*
 * mod_deflate - dynamic compression
 *
 * This plugin is a response filter.
 *
 */
#include <sys/types.h>
#include <sys/stat.h>

#include <fcntl.h>
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <time.h>
#include <assert.h>

#include "base.h"
#include "log.h"
#include "buffer.h"
#include "response.h"
#include "joblist.h"
#include "stat_cache.h"
#include "filter.h"

#include "plugin.h"

#include "crc32.h"
#include "etag.h"
#include "inet_ntop_cache.h"

#if defined HAVE_ZLIB_H && defined HAVE_LIBZ
# define USE_ZLIB
# include <zlib.h>
#else
# define Z_DEFAULT_COMPRESSION 1
#endif

#if defined HAVE_BZLIB_H && defined HAVE_LIBBZ2
# define USE_BZ2LIB
/* we don't need stdio interface */
# define BZ_NO_STDIO
# include <bzlib.h>
#endif

#include "sys-mmap.h"

/* request: accept-encoding */
#define HTTP_ACCEPT_ENCODING_IDENTITY BV(0)
#define HTTP_ACCEPT_ENCODING_GZIP     BV(1)
#define HTTP_ACCEPT_ENCODING_DEFLATE  BV(2)
#define HTTP_ACCEPT_ENCODING_COMPRESS BV(3)
#define HTTP_ACCEPT_ENCODING_BZIP2    BV(4)

/* encoding names */
#define ENCODING_NAME_IDENTITY   "identity"
#define ENCODING_NAME_GZIP       "gzip"
#define ENCODING_NAME_DEFLATE    "deflate"
#define ENCODING_NAME_COMPRESS   "compress"
#define ENCODING_NAME_BZIP2      "bzip2"


#define CONFIG_DEFLATE_OUTPUT_BUFFER_SIZE "deflate.output-buffer-size"
#define CONFIG_DEFLATE_MIMETYPES "deflate.mimetypes"
#define CONFIG_DEFLATE_COMPRESSION_LEVEL "deflate.compression-level"
#define CONFIG_DEFLATE_MEM_LEVEL "deflate.mem-level"
#define CONFIG_DEFLATE_WINDOW_SIZE "deflate.window-size"
#define CONFIG_DEFLATE_MIN_COMPRESS_SIZE "deflate.min-compress-size"
#define CONFIG_DEFLATE_WORK_BLOCK_SIZE "deflate.work-block-size"
#define CONFIG_DEFLATE_ENABLED "deflate.enabled"
#define CONFIG_DEFLATE_DEBUG "deflate.debug"
#define CONFIG_DEFLATE_ALLOWED_ENCODINGS "deflate.allowed_encodings"
#define CONFIG_DEFLATE_SYNC_FLUSH "deflate.sync-flush"
	
#define KByte * 1024
#define MByte * 1024 KByte
#define GByte * 1024 MByte

typedef struct {
	unsigned short	debug;
	unsigned short	enabled;
	unsigned short	sync_flush;
	unsigned short	output_buffer_size;
	unsigned short	min_compress_size;
	unsigned short	work_block_size;
	int			allowed_encodings;
	short		mem_level;
	short		compression_level;
	short		window_size;
	array		*mimetypes;
} plugin_config;

typedef struct {
	PLUGIN_DATA;
	buffer *tmp_buf;
	array  *encodings_arr;
	
	plugin_config **config_storage;
	plugin_config conf; 
} plugin_data;

typedef struct {
	int bytes_in;
	filter *fl;
	chunkqueue *in;
	chunkqueue *out;
	buffer *output;
	/* compression type & state */
	int compression_type;
	int stream_open;
#ifdef USE_ZLIB
	unsigned long crc;
	z_stream z;
	unsigned short gzip_header;
#endif
#ifdef USE_BZ2LIB
	bz_stream bz;
#endif
	plugin_data *plugin_data;
} handler_ctx;

static handler_ctx *handler_ctx_init() {
	handler_ctx *hctx;

	hctx = calloc(1, sizeof(*hctx));
	hctx->in = NULL;
	hctx->out = NULL;

	return hctx;
}

static void handler_ctx_free(handler_ctx *hctx) {
	free(hctx);
}

INIT_FUNC(mod_deflate_init) {
	plugin_data *p;

	UNUSED(srv);
	
	p = calloc(1, sizeof(*p));

	p->tmp_buf = buffer_init();
	p->encodings_arr = array_init();
	
	return p;
}

FREE_FUNC(mod_deflate_free) {
	plugin_data *p = p_d;
	
	UNUSED(srv);

	if (!p) return HANDLER_GO_ON;
	
	if (p->config_storage) {
		size_t i;
		for (i = 0; i < srv->config_context->used; i++) {
			plugin_config *s = p->config_storage[i];

			if (!s) continue;
			
			array_free(s->mimetypes);
			free(s);
		}
		free(p->config_storage);
	}

	buffer_free(p->tmp_buf);
	array_free(p->encodings_arr);
	
	free(p);
	
	return HANDLER_GO_ON;
}

SETDEFAULTS_FUNC(mod_deflate_setdefaults) {
	plugin_data *p = p_d;
	size_t i = 0;
	
	config_values_t cv[] = { 
		{ CONFIG_DEFLATE_OUTPUT_BUFFER_SIZE,    NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },
		{ CONFIG_DEFLATE_MIMETYPES,             NULL, T_CONFIG_ARRAY, T_CONFIG_SCOPE_CONNECTION },
		{ CONFIG_DEFLATE_COMPRESSION_LEVEL,     NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },
		{ CONFIG_DEFLATE_MEM_LEVEL,             NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },
		{ CONFIG_DEFLATE_WINDOW_SIZE,           NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },
		{ CONFIG_DEFLATE_MIN_COMPRESS_SIZE,     NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },
		{ CONFIG_DEFLATE_WORK_BLOCK_SIZE,       NULL, T_CONFIG_SHORT, T_CONFIG_SCOPE_CONNECTION },
		{ CONFIG_DEFLATE_ENABLED,               NULL, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION },
		{ CONFIG_DEFLATE_DEBUG,                 NULL, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION },
		{ CONFIG_DEFLATE_SYNC_FLUSH,            NULL, T_CONFIG_BOOLEAN, T_CONFIG_SCOPE_CONNECTION },
		{ CONFIG_DEFLATE_ALLOWED_ENCODINGS,     NULL, T_CONFIG_ARRAY, T_CONFIG_SCOPE_CONNECTION },
		{ NULL,                                 NULL, T_CONFIG_UNSET, T_CONFIG_SCOPE_UNSET }
	};
	
	p->config_storage = calloc(1, srv->config_context->used * sizeof(specific_config *));
	
	for (i = 0; i < srv->config_context->used; i++) {
		plugin_config *s;

		array_reset(p->encodings_arr);
		
		s = calloc(1, sizeof(plugin_config));
		s->enabled = 1;
		s->sync_flush = 0;
		s->allowed_encodings = 0;
		s->debug = 0;
		s->output_buffer_size = 0;
		s->mem_level = 9;
		s->window_size = 15;
		s->min_compress_size = 0;
		s->work_block_size = 2048;
		s->compression_level = Z_DEFAULT_COMPRESSION;
		s->mimetypes = array_init();

		cv[0].destination = &(s->output_buffer_size);
		cv[1].destination = s->mimetypes;
		cv[2].destination = &(s->compression_level);
		cv[3].destination = &(s->mem_level);
		cv[4].destination = &(s->window_size);
		cv[5].destination = &(s->min_compress_size);
		cv[6].destination = &(s->work_block_size);
		cv[7].destination = &(s->enabled);
		cv[8].destination = &(s->debug);
		cv[9].destination = &(s->sync_flush);
		cv[10].destination = p->encodings_arr; /* temp array for allowed encodings list */
		
		p->config_storage[i] = s;
	
		if (0 != config_insert_values_global(srv, ((data_config *)srv->config_context->data[i])->value, cv)) {
			return HANDLER_ERROR;
		}

		if (p->encodings_arr->used) {
			size_t j = 0;
			for (j = 0; j < p->encodings_arr->used; j++) {
				data_string *ds = (data_string *)p->encodings_arr->data[j];
#ifdef USE_ZLIB
				if (NULL != strstr(BUF_STR(ds->value), ENCODING_NAME_GZIP))
					s->allowed_encodings |= HTTP_ACCEPT_ENCODING_GZIP;
				if (NULL != strstr(BUF_STR(ds->value), ENCODING_NAME_DEFLATE))
					s->allowed_encodings |= HTTP_ACCEPT_ENCODING_DEFLATE;
#endif
				/*
				if (NULL != strstr(BUF_STR(ds->value), ENCODING_NAME_COMPRESS))
					s->allowed_encodings |= HTTP_ACCEPT_ENCODING_COMPRESS;
				*/
#ifdef USE_BZ2LIB
				if (NULL != strstr(BUF_STR(ds->value), ENCODING_NAME_BZIP2))
					s->allowed_encodings |= HTTP_ACCEPT_ENCODING_BZIP2;
#endif
			}
		} else {
			/* default encodings */
			s->allowed_encodings = HTTP_ACCEPT_ENCODING_IDENTITY | HTTP_ACCEPT_ENCODING_GZIP |
				HTTP_ACCEPT_ENCODING_DEFLATE | HTTP_ACCEPT_ENCODING_COMPRESS | HTTP_ACCEPT_ENCODING_BZIP2;
		}

		if((s->compression_level < 1 || s->compression_level > 9) &&
				s->compression_level != Z_DEFAULT_COMPRESSION) {
			log_error_write(srv, __FILE__, __LINE__, "sd", 
				"compression-level must be between 1 and 9:", s->compression_level);
			return HANDLER_ERROR;
		}

		if(s->mem_level < 1 || s->mem_level > 9) {
			log_error_write(srv, __FILE__, __LINE__, "sd", 
				"mem-level must be between 1 and 9:", s->mem_level);
			return HANDLER_ERROR;
		}

		if(s->window_size < 1 || s->window_size > 15) {
			log_error_write(srv, __FILE__, __LINE__, "sd", 
				"window-size must be between 1 and 15:", s->window_size);
			return HANDLER_ERROR;
		}
		s->window_size = 0 - s->window_size;

		if(s->sync_flush) {
			s->output_buffer_size = 0;
		}
	}
	
	return HANDLER_GO_ON;
	
}

#ifdef USE_ZLIB
/* Copied gzip_header from apache 2.2's mod_deflate.c */
/* RFC 1952 Section 2.3 defines the gzip header:
 *
 * +---+---+---+---+---+---+---+---+---+---+
 * |ID1|ID2|CM |FLG|     MTIME     |XFL|OS |
 * +---+---+---+---+---+---+---+---+---+---+
 */
static const char gzip_header[10] =
{ '\037', '\213', Z_DEFLATED, 0,
  0, 0, 0, 0, /* mtime */
  0, 0x03 /* Unix OS_CODE */
};
static int stream_deflate_init(server *srv, connection *con, handler_ctx *hctx) {
	plugin_data *p = hctx->plugin_data;
	z_stream *z;

	UNUSED(srv);
	UNUSED(con);

	z = &(hctx->z);
	z->zalloc = Z_NULL;
	z->zfree = Z_NULL;
	z->opaque = Z_NULL;
	z->total_in = 0;
	z->total_out = 0;
	z->next_out = NULL;
	z->avail_out = 0;
	
	if(p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"output-buffer-size:", p->conf.output_buffer_size);
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"compression-level:", p->conf.compression_level);
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"mem-level:", p->conf.mem_level);
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"window-size:", p->conf.window_size);
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"min-compress-size:", p->conf.min_compress_size);
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"work-block-size:", p->conf.work_block_size);
	}
	if (Z_OK != deflateInit2(z, 
				 p->conf.compression_level,
				 Z_DEFLATED, 
				 p->conf.window_size,  /* supress zlib-header */
				 p->conf.mem_level,
				 Z_DEFAULT_STRATEGY)) {
		return -1;
	}
	hctx->stream_open = 1;
		
	return 0;
}

static int stream_deflate_compress(server *srv, connection *con, handler_ctx *hctx, unsigned char *start, off_t st_size) {
	plugin_data *p = hctx->plugin_data;
	z_stream *z;
	int len;
	int in = 0, out = 0;

	UNUSED(srv);
	UNUSED(con);
	
	z = &(hctx->z);

	if(z->next_out == NULL) {
		z->next_out = (unsigned char *)hctx->output->ptr;
		z->avail_out = hctx->output->size;
	}
	
	if(hctx->compression_type == HTTP_ACCEPT_ENCODING_GZIP) {
		if(hctx->gzip_header == 0) {
			hctx->gzip_header = 1;
			/* copy gzip header into output buffer */
			buffer_copy_memory(hctx->output, gzip_header, sizeof(gzip_header));
			if(p->conf.debug) {
				log_error_write(srv, __FILE__, __LINE__, "sd",
						"gzip_header len=", sizeof(gzip_header));
			}
			/* initialize crc32 */
			hctx->crc = crc32(0L, Z_NULL, 0);
			z->next_out = (unsigned char *)(hctx->output->ptr + sizeof(gzip_header));
			z->avail_out = hctx->output->size - sizeof(gzip_header);
		}
		hctx->crc = crc32(hctx->crc, start, st_size);
	}

	z->next_in = start;
	z->avail_in = st_size;
	hctx->bytes_in += st_size;
		
	/* compress data */
	in = z->avail_in;
	do {
		if (Z_OK != deflate(z, Z_NO_FLUSH)) {
			deflateEnd(z);
			hctx->stream_open = 0;
			return -1;
		}

		if(z->avail_out == 0 || z->avail_in > 0) {
			len = hctx->output->size - z->avail_out;
			out += len;
			chunkqueue_append_mem(hctx->out, hctx->output->ptr, len+1);
			hctx->out->bytes_in += len;
			z->next_out = (unsigned char *)hctx->output->ptr;
			z->avail_out = hctx->output->size;
		}
	} while (z->avail_in > 0);

	if(p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__, "sdsd",
				"compress: in=", in, ", out=", out);
	}
	return st_size;
}

static int stream_deflate_flush(server *srv, connection *con, handler_ctx *hctx, int end) {
	plugin_data *p = hctx->plugin_data;
	z_stream *z;
	int len;
	int rc = 0;
	int done;
	int flush = 1;
	int in = 0, out = 0;

	UNUSED(srv);
	UNUSED(con);

	z = &(hctx->z);

	if(z->next_out == NULL) {
		z->next_out = (unsigned char *)hctx->output->ptr;
		z->avail_out = hctx->output->size;
	}
	/* compress data */
	in = z->avail_in;
	do {
		done = 1;
		if(end) {
			rc = deflate(z, Z_FINISH);
			if (rc == Z_OK) {
				done = 0;
			} else if (rc != Z_STREAM_END) {
				deflateEnd(z);
				hctx->stream_open = 0;
				return -1;
			}
		} else {
			if(p->conf.sync_flush) {
				rc = deflate(z, Z_SYNC_FLUSH);
			} else if(z->avail_in > 0) {
				if(p->conf.output_buffer_size > 0) flush = 0;
				rc = deflate(z, Z_NO_FLUSH);
			} else {
				if(p->conf.output_buffer_size > 0) flush = 0;
				rc = Z_OK;
			}
			if (rc != Z_OK) {
				deflateEnd(z);
				hctx->stream_open = 0;
				return -1;
			}
		}

		len = hctx->output->size - z->avail_out;
		if(z->avail_out == 0 || (flush && len > 0)) {
			out += len;
			chunkqueue_append_mem(hctx->out, hctx->output->ptr, len+1);
			hctx->out->bytes_in += len;
			z->next_out = (unsigned char *)hctx->output->ptr;
			z->avail_out = hctx->output->size;
		}
	} while (z->avail_in != 0 || !done);


	if(p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__, "sdsd",
				"flush: in=", in, ", out=", out);
	}
	if(p->conf.sync_flush) {
		z->next_out = NULL;
		z->avail_out = 0;
	}
	return 0;
}

static int stream_deflate_end(server *srv, connection *con, handler_ctx *hctx) {
	plugin_data *p = hctx->plugin_data;
	z_stream *z;
	int rc;

	UNUSED(srv);
	UNUSED(con);

	z = &(hctx->z);
	if(!hctx->stream_open) return 0;
	hctx->stream_open = 0;

	if(hctx->compression_type == HTTP_ACCEPT_ENCODING_GZIP && (hctx->gzip_header)) {
		/* write gzip footer */
		unsigned char c[8];

		c[0] = (hctx->crc >>  0) & 0xff;
		c[1] = (hctx->crc >>  8) & 0xff;
		c[2] = (hctx->crc >> 16) & 0xff;
		c[3] = (hctx->crc >> 24) & 0xff;
		c[4] = (z->total_in >>  0) & 0xff;
		c[5] = (z->total_in >>  8) & 0xff;
		c[6] = (z->total_in >> 16) & 0xff;
		c[7] = (z->total_in >> 24) & 0xff;
		/* append footer to write_queue */
		chunkqueue_append_mem(hctx->out, (char *)c, 9);
		hctx->out->bytes_in += 8;
		if(p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__, "sd",
					"gzip_footer len=", 8);
		}
	}

	if ((rc = deflateEnd(z)) != Z_OK) {
		if(rc == Z_DATA_ERROR) return 0;
		if(z->msg != NULL) {
			log_error_write(srv, __FILE__, __LINE__, "sdss",
					"deflateEnd error ret=", rc, ", msg=", z->msg);
		} else {
			log_error_write(srv, __FILE__, __LINE__, "sd",
					"deflateEnd error ret=", rc);
		}
		return -1;
	}
	return 0;
}

#endif

#ifdef USE_BZ2LIB
static int stream_bzip2_init(server *srv, connection *con, handler_ctx *hctx) {
	plugin_data *p = hctx->plugin_data;
	bz_stream *bz;

	UNUSED(srv);
	UNUSED(con);

	bz = &(hctx->bz);
	bz->bzalloc = NULL;
	bz->bzfree = NULL;
	bz->opaque = NULL;
	bz->total_in_lo32 = 0;
	bz->total_in_hi32 = 0;
	bz->total_out_lo32 = 0;
	bz->total_out_hi32 = 0;
	
	if(p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"output-buffer-size:", p->conf.output_buffer_size);
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"compression-level:", p->conf.compression_level);
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"mem-level:", p->conf.mem_level);
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"window-size:", p->conf.window_size);
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"min-compress-size:", p->conf.min_compress_size);
		log_error_write(srv, __FILE__, __LINE__, "sd", 
			"work-block-size:", p->conf.work_block_size);
	}
	if (BZ_OK != BZ2_bzCompressInit(bz, 
					p->conf.compression_level, /* blocksize = 900k */
					0, /* no output */
					30)) { /* workFactor: default */
		return -1;
	}
	hctx->stream_open = 1;
		
	return 0;
}

static int stream_bzip2_compress(server *srv, connection *con, handler_ctx *hctx, unsigned char *start, off_t st_size) {
	plugin_data *p = hctx->plugin_data;
	bz_stream *bz;
	int len;
	int rc;
	int in = 0, out = 0;

	UNUSED(srv);
	UNUSED(con);

	bz = &(hctx->bz);

	if(bz->next_out == NULL) {
		bz->next_out = hctx->output->ptr;
		bz->avail_out = hctx->output->size;
	}
	
	bz->next_in = (char *)start;
	bz->avail_in = st_size;
	hctx->bytes_in += st_size;
		
	/* compress data */
	in = bz->avail_in;
	do {
		rc = BZ2_bzCompress(bz, BZ_RUN);
		if (rc != BZ_RUN_OK) {
			BZ2_bzCompressEnd(bz);
			hctx->stream_open = 0;
			return -1;
		}

		if(bz->avail_out == 0 || bz->avail_in > 0) {
			len = hctx->output->size - bz->avail_out;
			out += len;
			chunkqueue_append_mem(hctx->out, hctx->output->ptr, len+1);
			hctx->out->bytes_in += len;
			bz->next_out = hctx->output->ptr;
			bz->avail_out = hctx->output->size;
		}
	} while (bz->avail_in > 0);
	if(p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__, "sdsd",
				"compress: in=", in, ", out=", out);
	}
	return st_size;
}

static int stream_bzip2_flush(server *srv, connection *con, handler_ctx *hctx, int end) {
	plugin_data *p = hctx->plugin_data;
	bz_stream *bz;
	int len;
	int rc;
	int done;
	int flush = 1;
	int in = 0, out = 0;

	UNUSED(srv);
	UNUSED(con);

	bz = &(hctx->bz);

	if(bz->next_out == NULL) {
		bz->next_out = hctx->output->ptr;
		bz->avail_out = hctx->output->size;
	}
	/* compress data */
	in = bz->avail_in;
	do {
		done = 1;
		if(end) {
			rc = BZ2_bzCompress(bz, BZ_FINISH);
			if (rc == BZ_FINISH_OK) {
				done = 0;
			} else if (rc != BZ_STREAM_END) {
				BZ2_bzCompressEnd(bz);
				hctx->stream_open = 0;
				return -1;
			}
		} else if(bz->avail_in > 0) {
			rc = BZ2_bzCompress(bz, BZ_RUN);
			if (rc != BZ_RUN_OK) {
				BZ2_bzCompressEnd(bz);
				hctx->stream_open = 0;
				return -1;
			}
			if(p->conf.output_buffer_size > 0) flush = 0;
		}

		len = hctx->output->size - bz->avail_out;
		if(bz->avail_out == 0 || (flush && len > 0)) {
			out += len;
			chunkqueue_append_mem(hctx->out, hctx->output->ptr, len+1);
			hctx->out->bytes_in += len;
			bz->next_out = hctx->output->ptr;
			bz->avail_out = hctx->output->size;
		}
	} while (bz->avail_in != 0 || !done);
	if(p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__, "sdsd",
				"flush: in=", in, ", out=", out);
	}
	if(p->conf.sync_flush) {
		bz->next_out = NULL;
		bz->avail_out = 0;
	}
	return 0;
}

static int stream_bzip2_end(server *srv, connection *con, handler_ctx *hctx) {
	plugin_data *p = hctx->plugin_data;
	bz_stream *bz;
	int rc;

	UNUSED(p);
	UNUSED(con);

	bz = &(hctx->bz);
	if(!hctx->stream_open) return 0;
	hctx->stream_open = 0;

	if ((rc = BZ2_bzCompressEnd(bz)) != BZ_OK) {
		if(rc == BZ_DATA_ERROR) return 0;
		log_error_write(srv, __FILE__, __LINE__, "sd",
				"BZ2_bzCompressEnd error ret=", rc);
		return -1;
	}
	return 0;
}

#endif

static int mod_deflate_compress(server *srv, connection *con, handler_ctx *hctx, unsigned char *start, off_t st_size) {
	int ret = -1;
	if(st_size == 0) return 0;
	switch(hctx->compression_type) {
#ifdef USE_ZLIB
	case HTTP_ACCEPT_ENCODING_GZIP: 
	case HTTP_ACCEPT_ENCODING_DEFLATE: 
		ret = stream_deflate_compress(srv, con, hctx, start, st_size);
		break;
#endif
#ifdef USE_BZ2LIB
	case HTTP_ACCEPT_ENCODING_BZIP2: 
		ret = stream_bzip2_compress(srv, con, hctx, start, st_size);
		break;
#endif
	default:
		ret = -1;
		break;
	}

	return ret;
}

static int mod_deflate_stream_flush(server *srv, connection *con, handler_ctx *hctx, int end) {
	int ret = -1;
	if(hctx->bytes_in == 0) return 0;
	switch(hctx->compression_type) {
#ifdef USE_ZLIB
	case HTTP_ACCEPT_ENCODING_GZIP: 
	case HTTP_ACCEPT_ENCODING_DEFLATE: 
		ret = stream_deflate_flush(srv, con, hctx, end);
		break;
#endif
#ifdef USE_BZ2LIB
	case HTTP_ACCEPT_ENCODING_BZIP2: 
		ret = stream_bzip2_flush(srv, con, hctx, end);
		break;
#endif
	default:
		ret = -1;
		break;
	}

	return ret;
}

static int mod_deflate_stream_end(server *srv, connection *con, handler_ctx *hctx) {
	int ret = -1;
	switch(hctx->compression_type) {
#ifdef USE_ZLIB
	case HTTP_ACCEPT_ENCODING_GZIP: 
	case HTTP_ACCEPT_ENCODING_DEFLATE: 
		ret = stream_deflate_end(srv, con, hctx);
		break;
#endif
#ifdef USE_BZ2LIB
	case HTTP_ACCEPT_ENCODING_BZIP2: 
		ret = stream_bzip2_end(srv, con, hctx);
		break;
#endif
	default:
		ret = -1;
		break;
	}

	return ret;
}

static int mod_deflate_file_chunk(server *srv, connection *con, handler_ctx *hctx, chunk *c, off_t st_size) {
	plugin_data *p = hctx->plugin_data;
	off_t abs_offset;
	off_t toSend;
	stat_cache_entry *sce = NULL;
	off_t we_want_to_mmap = 2 MByte; 
	off_t we_want_to_send = st_size;
	char *start = NULL;

	if (HANDLER_ERROR == stat_cache_get_entry(srv, con, c->file.name, &sce)) {
		log_error_write(srv, __FILE__, __LINE__, "sb",
				strerror(errno), c->file.name);
		return -1;
	}

	abs_offset = c->file.start + c->offset;
	
	if (abs_offset > sce->st.st_size) {
		ERROR("file '%s' was shrinked: was %lld, is %lld (%lld, %lld)", 
				BUF_STR(c->file.name), abs_offset, sce->st.st_size,
				c->file.start, c->offset);
		
		return -1;
	}

	we_want_to_send = st_size;
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
		to_mmap = (c->file.start + c->file.length) - c->file.mmap.offset;
		if(to_mmap > we_want_to_mmap) to_mmap = we_want_to_mmap;
		/* we have more to send than we can mmap() at once */
		if(we_want_to_send > to_mmap) we_want_to_send = to_mmap;

		if (-1 == c->file.fd) {  /* open the file if not already open */
			if (-1 == (c->file.fd = open(c->file.name->ptr, O_RDONLY))) {
				log_error_write(srv, __FILE__, __LINE__, "sbs", "open failed for:", c->file.name, strerror(errno));
		
				return -1;
			}
#ifdef FD_CLOEXEC
			fcntl(c->file.fd, F_SETFD, FD_CLOEXEC);
#endif
		}

		if (MAP_FAILED == (c->file.mmap.start = mmap(0, to_mmap, PROT_READ, MAP_SHARED, c->file.fd, c->file.mmap.offset))) {
			/* close it here, otherwise we'd have to set FD_CLOEXEC */

			log_error_write(srv, __FILE__, __LINE__, "ssbd", "mmap failed:", 
					strerror(errno), c->file.name, c->file.fd);

			return -1;
		}

		c->file.mmap.length = to_mmap;
#ifdef LOCAL_BUFFERING
		buffer_copy_string_len(c->mem, c->file.mmap.start, c->file.mmap.length);
#else
#ifdef HAVE_MADVISE
		/* don't advise files < 64Kb */
		if (c->file.mmap.length > (64 KByte) && 
		    0 != madvise(c->file.mmap.start, c->file.mmap.length, MADV_WILLNEED)) {
			log_error_write(srv, __FILE__, __LINE__, "ssbd", "madvise failed:", 
					strerror(errno), c->file.name, c->file.fd);
		}
#endif
#endif

		/* chunk_reset() or chunk_free() will cleanup for us */
	}

	/* to_send = abs_mmap_end - abs_offset */
	toSend = (c->file.mmap.offset + c->file.mmap.length) - (abs_offset);
	if(toSend > we_want_to_send) toSend = we_want_to_send;

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

	if(p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__, "sdsd",
				"compress file chunk: offset=", (int)c->offset,
				", toSend=", (int)toSend);
	}
	if (mod_deflate_compress(srv, con, hctx,
				(unsigned char *)start + (abs_offset - c->file.mmap.offset), toSend) < 0) {
		log_error_write(srv, __FILE__, __LINE__, "s", 
				"compress failed.");
		return -1;
	}

	return toSend;
}

static int deflate_compress_cleanup(server *srv, connection *con, handler_ctx *hctx) {
	plugin_data *p = hctx->plugin_data;
	int rc;

	rc = mod_deflate_stream_end(srv, con, hctx);
	if(rc < 0) {
		TRACE("error closing compressed stream for '%s', compressing with %d: %d", 
			BUF_STR(con->uri.path_raw), hctx->compression_type, rc);
	}

	if(p->conf.debug && hctx->bytes_in < hctx->out->bytes_in) {
		TRACE("(debug) compressing uri '%s' increased the sent content-size from %lld to %lld",
			BUF_STR(con->uri.path_raw), hctx->bytes_in, hctx->out->bytes_in);
	}

	/* cleanup compression state */
	if(hctx->output != p->tmp_buf) {
		buffer_free(hctx->output);
	}
	handler_ctx_free(hctx);
	con->plugin_ctx[p->id] = NULL;

	return 0;
}

static handler_t deflate_compress_response(server *srv, connection *con, handler_ctx *hctx, int end) { 
	plugin_data *p = hctx->plugin_data;
	chunk *c;
	size_t chunks_written = 0;
	int chunk_finished = 0;
	int rc=-1;
	int we_want = 0, we_have = 0;
	int out = 0, max = 0;
	
	we_have = chunkqueue_length(hctx->in);
	if(p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__, "sd",
				"compress: in_queue len=", we_have);
	}
	/* calculate max bytes to compress for this call. */
	if(!end) {
		max = p->conf.work_block_size * 1024;
		if(max == 0 || max > we_have) max = we_have;
	} else {
		max = we_have;
	}

	/* Compress chunks from in queue into chunks for out queue */
	for(c = hctx->in->first; c && max > 0; c = c->next) {
		chunk_finished = 0;
		we_have = 0;
		we_want = 0;
		
		switch(c->type) {
		case MEM_CHUNK:
			if (c->mem->used == 0) continue;
			we_have = c->mem->used - c->offset - 1;
			if (we_have == 0) continue;
			we_want = we_have < max ? we_have : max;
			if (mod_deflate_compress(srv, con, hctx, (unsigned char *)(c->mem->ptr + c->offset), we_want) < 0) {
				log_error_write(srv, __FILE__, __LINE__, "s", 
						"compress failed.");
				return HANDLER_ERROR;
			}
			break;
		case FILE_CHUNK:
			if (c->file.length == 0) continue;
			we_have = c->file.length - c->offset;
			if (we_have == 0) continue;
			we_want = we_have < max ? we_have : max;
			if ((we_want = mod_deflate_file_chunk(srv, con, hctx, c, we_want)) < 0) {
				log_error_write(srv, __FILE__, __LINE__, "s", 
						"compress file chunk failed.");
				return HANDLER_ERROR;
			}
			break;
		default:
			
			log_error_write(srv, __FILE__, __LINE__, "ds", c, "type not known");
			
			return HANDLER_ERROR;
		}
		hctx->in->bytes_out += we_want;
		c->offset += we_want;
		out += we_want;
		max -= we_want;
	
		if (c->type == FILE_CHUNK && 
		    c->offset == c->file.length &&
		    c->file.mmap.start != MAP_FAILED) {
			/* we don't need the mmaping anymore */
			munmap(c->file.mmap.start, c->file.mmap.length);
			c->file.mmap.start = MAP_FAILED;
		}

		if (we_have == we_want) {
			/* chunk finished */
			chunk_finished = 1;
			chunks_written++;
		}
		/* make sure we finished compressing the chunk before going to the next chunk */
		if(!chunk_finished) break;
	}
	if(p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__, "sd",
				"compressed bytes:", out);
	}

	if(chunks_written > 0) {
		chunkqueue_remove_finished_chunks(hctx->in);
	}

	/* check if we finished compressing all the content. */
	end = (hctx->in->is_closed && hctx->in->bytes_in == hctx->in->bytes_out);

	if (p->conf.debug) {
		TRACE("end: %d - %lld - %lld", hctx->in->is_closed, hctx->in->bytes_in, hctx->in->bytes_out);
	}

	/* flush the output buffer to make room for more data. */
	rc = mod_deflate_stream_flush(srv, con, hctx, end);
	if(rc < 0) {
		log_error_write(srv, __FILE__, __LINE__, "s", "flush error");
	}
	if(end) {
		hctx->out->is_closed = 1;
		if(p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__, "sbsb",
					"finished uri:", con->uri.path_raw, ", query:", con->uri.query);
		}
	} else {
		/* We have more data to compress. */
		joblist_append(srv, con);
	}
	return HANDLER_GO_ON;
}

static int mod_deflate_patch_connection(server *srv, connection *con, plugin_data *p) {
	size_t i, j;
	plugin_config *s = p->config_storage[0];

	PATCH_OPTION(output_buffer_size);
	PATCH_OPTION(mimetypes);
	PATCH_OPTION(compression_level);
	PATCH_OPTION(mem_level);
	PATCH_OPTION(window_size);
	PATCH_OPTION(min_compress_size);
	PATCH_OPTION(work_block_size);
	PATCH_OPTION(enabled);
	PATCH_OPTION(debug);
	PATCH_OPTION(allowed_encodings);
	PATCH_OPTION(sync_flush);
	
	/* skip the first, the global context */
	for (i = 1; i < srv->config_context->used; i++) {
		data_config *dc = (data_config *)srv->config_context->data[i];
		s = p->config_storage[i];
		
		/* condition didn't match */
		if (!config_check_cond(srv, con, dc)) continue;
		
		/* merge config */
		for (j = 0; j < dc->value->used; j++) {
			data_unset *du = dc->value->data[j];
			
			if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEFLATE_OUTPUT_BUFFER_SIZE))) {
				PATCH_OPTION(output_buffer_size);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEFLATE_MIMETYPES))) {
				PATCH_OPTION(mimetypes);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEFLATE_COMPRESSION_LEVEL))) {
				PATCH_OPTION(compression_level);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEFLATE_MEM_LEVEL))) {
				PATCH_OPTION(mem_level);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEFLATE_WINDOW_SIZE))) {
				PATCH_OPTION(window_size);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEFLATE_MIN_COMPRESS_SIZE))) {
				PATCH_OPTION(min_compress_size);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEFLATE_WORK_BLOCK_SIZE))) {
				PATCH_OPTION(work_block_size);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEFLATE_ENABLED))) {
				PATCH_OPTION(enabled);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEFLATE_DEBUG))) {
				PATCH_OPTION(debug);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEFLATE_ALLOWED_ENCODINGS))) {
				PATCH_OPTION(allowed_encodings);
			} else if (buffer_is_equal_string(du->key, CONST_STR_LEN(CONFIG_DEFLATE_SYNC_FLUSH))) {
				PATCH_OPTION(sync_flush);
			}
		}
	}
	
	return 0;
}

PHYSICALPATH_FUNC(mod_deflate_handle_response_header) {
	plugin_data *p = p_d;
	handler_ctx *hctx;
	filter *fl;
	chunkqueue *in;
	data_string *ds;
	int accept_encoding = 0;
	char *value;
	int matched_encodings = 0;
	const char *compression_name = NULL;
	int file_len=0;
	int rc=-2;
	int end = 0;
	size_t m;
	
	/* disable compression for some http status types. */
	switch(con->http_status) {
	case 100:
	case 101:
	case 204:
	case 205:
	case 304:
		/* disable compression as we have no response entity */
		return HANDLER_GO_ON;
	default:
		break;
	}

	mod_deflate_patch_connection(srv, con, p);

	/* is compression allowed */
	if(!p->conf.enabled) {
		if(p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__, "s", "compression disabled.");
		}
		return HANDLER_GO_ON;
	}

	/* Check if response has a Content-Encoding. */
	if (NULL != (ds = (data_string *)array_get_element(con->response.headers, CONST_STR_LEN("Content-Encoding")))) {
		return HANDLER_GO_ON;
	}

	/* Check Accept-Encoding for supported encoding. */
	if (NULL == (ds = (data_string *)array_get_element(con->request.headers, CONST_STR_LEN("Accept-Encoding")))) {
		return HANDLER_GO_ON;
	}
		
	/* get client side support encodings */
	value = ds->value->ptr;
#ifdef USE_ZLIB
	if (NULL != strstr(value, ENCODING_NAME_GZIP)) accept_encoding |= HTTP_ACCEPT_ENCODING_GZIP;
	if (NULL != strstr(value, ENCODING_NAME_DEFLATE)) accept_encoding |= HTTP_ACCEPT_ENCODING_DEFLATE;
#endif
	/* if (NULL != strstr(value, ENCODING_NAME_COMPRESS)) accept_encoding |= HTTP_ACCEPT_ENCODING_COMPRESS; */
#ifdef USE_BZ2LIB
	if (NULL != strstr(value, ENCODING_NAME_BZIP2)) accept_encoding |= HTTP_ACCEPT_ENCODING_BZIP2;
#endif
	if (NULL != strstr(value, ENCODING_NAME_IDENTITY)) accept_encoding |= HTTP_ACCEPT_ENCODING_IDENTITY;
		
	/* find matching encodings */
	matched_encodings = accept_encoding & p->conf.allowed_encodings;
	if (!matched_encodings) {
		return HANDLER_GO_ON;
	}

#if 0
	/* TODO: add option to disable compression for HTTP 1.0 clients. */
	if (con->request.true_http_10_client) { 
		/*disable gzip/bzip2 when we meet HTTP 1.0 client with Accept-Encoding
		 * maybe old buggy proxy server
		 */
		/* most of buggy clients are Yahoo Slurp;) */
		if (p->conf.debug) log_error_write(srv, __FILE__, __LINE__, "ss",
				"Buggy HTTP 1.0 client sending Accept Encoding: gzip, deflate", 
				(char *) inet_ntop_cache_get_ip(srv, &(con->dst_addr)));
		return HANDLER_GO_ON;
	}
#endif

	/* get filter. */
	fl = filter_chain_get_filter(con->send_filters, p->id);
	if (!fl) {
		if(p->conf.debug) TRACE("%s", "add deflate filter to filter chain");
		fl = filter_chain_create_filter(con->send_filters, p->id);
	}
	/* get our input and output chunkqueues. */
	if (!fl || !fl->prev) {
		filter_chain_remove_filter(con->send_filters, fl);
		return HANDLER_GO_ON;
	}
	in = fl->prev->cq;

	/* check if size of response is below min-compress-size */
	if(in->is_closed && con->request.http_method != HTTP_METHOD_HEAD) {
		file_len = chunkqueue_length(in);
		if(file_len == 0) {
			filter_chain_remove_filter(con->send_filters, fl);
			return HANDLER_GO_ON;
		}
	} else {
		file_len = 0;
	}

	if(file_len > 0 && p->conf.min_compress_size > 0 && file_len < p->conf.min_compress_size) {
		if(p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__, "sd",
					"Content-Length smaller then min_compress_size: file_len=", file_len);
		}
		filter_chain_remove_filter(con->send_filters, fl);
		return HANDLER_GO_ON;
	}

	/* Check mimetype in response header "Content-Type" */
	if (NULL != (ds = (data_string *)array_get_element(con->response.headers, CONST_STR_LEN("Content-Type")))) {
		int found = 0;
		if(p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__, "sb",
					"Content-Type:", ds->value);
		}
		for (m = 0; m < p->conf.mimetypes->used; m++) {
			data_string *mimetype = (data_string *)p->conf.mimetypes->data[m];

			if(p->conf.debug) {
				log_error_write(srv, __FILE__, __LINE__, "sb",
						"mime-type:", mimetype->value);
			}
			if (strncmp(mimetype->value->ptr, ds->value->ptr, mimetype->value->used-1) == 0) {
				/* mimetype found */
				found = 1;
				break;
			}
		}
		if(!found && p->conf.mimetypes->used > 0) {
			if(p->conf.debug) {
				log_error_write(srv, __FILE__, __LINE__, "sb",
						"No compression for mimetype:", ds->value);
			}
			filter_chain_remove_filter(con->send_filters, fl);
			return HANDLER_GO_ON;
		}
#if 0
		if(strncasecmp(ds->value->ptr, "application/x-javascript", 24) == 0) {
			/*reset compress type to deflate for javascript
			 * prevent buggy IE6 SP1 doesn't work for js in IFrame
			 */
			matched_encodings = HTTP_ACCEPT_ENCODING_DEFLATE;
		}
#endif
	}
	
	/* the response might change according to Accept-Encoding */
	if (NULL != (ds = (data_string *)array_get_element(con->response.headers, CONST_STR_LEN("Vary")))) {
		/* append Accept-Encoding to Vary header */
		if (NULL == strstr(ds->value->ptr, "Accept-Encoding")) {
			buffer_append_string(ds->value, ",Accept-Encoding");
			if (p->conf.debug) {
				log_error_write(srv, __FILE__, __LINE__, "sb",
						"appending ,Accept-Encoding for ", con->uri.path);
			}
		}
	} else {
		if (p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__, "sb",
					"add Vary: Accept-Encoding for ", con->uri.path);
		}
		response_header_insert(srv, con, CONST_STR_LEN("Vary"),
				CONST_STR_LEN("Accept-Encoding"));
	}

	/* enable compression */
	hctx = handler_ctx_init();
	hctx->plugin_data = p;
	hctx->fl = fl;
	hctx->in = fl->prev->cq;
	hctx->out = fl->cq;
    
	rc = -1;

	/* select best matching encoding */
	if (matched_encodings & HTTP_ACCEPT_ENCODING_BZIP2) {
#ifdef USE_BZ2LIB
		hctx->compression_type = HTTP_ACCEPT_ENCODING_BZIP2;
		compression_name = ENCODING_NAME_BZIP2;
		rc = stream_bzip2_init(srv, con, hctx);
#endif
	} else if (matched_encodings & HTTP_ACCEPT_ENCODING_GZIP) {
#ifdef USE_ZLIB
		hctx->compression_type = HTTP_ACCEPT_ENCODING_GZIP;
		compression_name = ENCODING_NAME_GZIP;
		rc = stream_deflate_init(srv, con, hctx);
	} else if (matched_encodings & HTTP_ACCEPT_ENCODING_DEFLATE) {
		hctx->compression_type = HTTP_ACCEPT_ENCODING_DEFLATE;
		compression_name = ENCODING_NAME_DEFLATE;
		rc = stream_deflate_init(srv, con, hctx);
#endif
	}
	if(rc == -1) {
		log_error_write(srv, __FILE__, __LINE__, "s",
				"Failed to initialize compression.");
	}

	if(p->conf.debug) {
		log_error_write(srv, __FILE__, __LINE__, "sbss",
				"enable compression for ", con->uri.path, ", type=", compression_name);
	}

	if(rc < 0) {
		filter_chain_remove_filter(con->send_filters, hctx->fl);
		handler_ctx_free(hctx);
		return HANDLER_GO_ON;
	}

	/* setup output buffer. */
	if(p->conf.sync_flush || p->conf.output_buffer_size == 0) {
		buffer_prepare_copy(p->tmp_buf, 32 * 1024);
		hctx->output = p->tmp_buf;
	} else {
		hctx->output = buffer_init();
		buffer_prepare_copy(hctx->output, p->conf.output_buffer_size);
	}
	con->plugin_ctx[p->id] = hctx;

	/* set Content-Encoding to show selected compression type. */
	response_header_overwrite(srv, con, CONST_STR_LEN("Content-Encoding"), compression_name, strlen(compression_name));

	/* clear old Content-Length */
	con->response.content_length = -1;

	if (hctx->in->is_closed &&
			(p->conf.work_block_size == 0 || file_len < (p->conf.work_block_size * 1024))
			&& con->request.http_method != HTTP_METHOD_HEAD) {
		end = 1;
		if(p->conf.debug) {
			log_error_write(srv, __FILE__, __LINE__, "sd",
					"Compress all content and use Content-Length header: uncompress len=", file_len);
		}
	}

	if (p->conf.debug) 
		log_error_write(srv, __FILE__, __LINE__, "sdsb", "end =", end, "for uri", con->uri.path);

	rc = deflate_compress_response(srv, con, hctx, end);
	/* check if we finished compressing all the content. */
	if (rc == HANDLER_GO_ON && hctx->out->is_closed) {
		con->response.content_length = chunkqueue_length(hctx->out);
		
		deflate_compress_cleanup(srv, con, hctx);
	}

	return rc;
}

CONNECTION_FUNC(mod_deflate_handle_filter_response_content) {
	plugin_data *p = p_d;
	handler_ctx *hctx = con->plugin_ctx[p->id];
	handler_t ret;

	if(hctx == NULL) return HANDLER_GO_ON;
	if(!hctx->stream_open) return HANDLER_GO_ON;
	if(con->request.http_method == HTTP_METHOD_HEAD) return HANDLER_GO_ON;

	ret = deflate_compress_response(srv, con, hctx, 0); 

	if (ret == HANDLER_GO_ON && hctx->out->is_closed) {
		deflate_compress_cleanup(srv, con, hctx);
	}

	return ret;
}

handler_t mod_deflate_cleanup(server *srv, connection *con, void *p_d) {
	plugin_data *p = p_d;
	handler_ctx *hctx = con->plugin_ctx[p->id];

	if(hctx == NULL) return HANDLER_GO_ON;

	if(p->conf.debug && hctx->stream_open) {
		log_error_write(srv, __FILE__, __LINE__, "sbsb",
				"stream open at cleanup. uri=", con->uri.path_raw, ", query=", con->uri.query);
	}

	deflate_compress_cleanup(srv, con, hctx);

	return HANDLER_GO_ON;
}

int mod_deflate_plugin_init(plugin *p) {
	p->version     = LIGHTTPD_VERSION_ID;
	p->name        = buffer_init_string("deflate");
	
	p->init		= mod_deflate_init;
	p->cleanup	= mod_deflate_free;
	p->set_defaults	= mod_deflate_setdefaults;
	p->connection_reset	= mod_deflate_cleanup;
	p->handle_connection_close	= mod_deflate_cleanup;
	p->handle_response_header	= mod_deflate_handle_response_header;
	p->handle_filter_response_content	= mod_deflate_handle_filter_response_content;
	
	p->data        = NULL;
	
	return 0;
}
