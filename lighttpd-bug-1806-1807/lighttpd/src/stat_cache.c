/*
 * make sure _GNU_SOURCE is defined
 */
#ifndef _GNU_SOURCE
#define _GNU_SOURCE
#endif

#include <sys/types.h>
#include <sys/stat.h>

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <fcntl.h>
#include <assert.h>

#include <glib.h>

#include "log.h"
#include "stat_cache.h"
#include "fdevent.h"
#include "etag.h"

#ifdef HAVE_ATTR_ATTRIBUTES_H
#include <attr/attributes.h>
#endif

#include "sys-mmap.h"
#include "sys-files.h"
#include "sys-strings.h"

#undef HAVE_FAM_H
#undef HAVE_SYS_INOTIFY_H

#if 0
/* enables debug code for testing if all nodes in the stat-cache as accessable */
#define DEBUG_STAT_CACHE
#endif

/*
 * stat-cache
 *
 * we cache the stat() calls in our own storage
 * the directories are cached in FAM
 *
 * if we get a change-event from FAM, we increment the version in the FAM->dir mapping
 *
 * if the stat()-cache is queried we check if the version id for the directory is the
 * same and return immediatly.
 *
 *
 * What we need:
 *
 * - for each stat-cache entry we need a fast indirect lookup on the directory name
 * - for each FAMRequest we have to find the version in the directory cache (index as userdata)
 *
 * stat <<-> directory <-> FAMRequest
 *
 * if file is deleted, directory is dirty, file is rechecked ...
 * if directory is deleted, directory mapping is removed
 *
 * */

/* the directory name is too long to always compare on it
 * - we need a hash
 * - the hash-key is used as sorting criteria for a tree
 * - a splay-tree is used as we can use the caching effect of it
 */

/* we want to cleanup the stat-cache every few seconds, let's say 10
 *
 * - remove entries which are outdated since 30s
 * - remove entries which are fresh but havn't been used since 60s
 * - if we don't have a stat-cache entry for a directory, release it from the monitor
 */
#ifdef USE_GTHREAD
typedef struct { 
	buffer *name;

	void *con;
} stat_job;

stat_job *stat_job_init() {
	stat_job *sj = calloc(1, sizeof(*sj));

	sj->name = buffer_init();
	
	return sj;
}

void stat_job_free(stat_job *sj) {
	if (!sj) return;

	buffer_free(sj->name);

	free(sj);
}

gpointer stat_cache_thread(gpointer _srv) {
	server *srv = (server *)_srv;
	stat_job *sj = NULL;
	
	/* take the stat-job-queue */
	GAsyncQueue * inq; 
	GAsyncQueue * outq;

	g_async_queue_ref(srv->joblist_queue);
	g_async_queue_ref(srv->stat_queue);

	inq = srv->stat_queue;
	outq = srv->joblist_queue;

	/* */
	while (!srv->is_shutdown) {
		/* let's see what we have to stat */
		struct stat st;
		GTimeVal ts;

		/* wait one second as the poll() */
		g_get_current_time(&ts);
		g_time_val_add(&ts, 500 * 1000); 

		if ((sj = g_async_queue_timed_pop(inq, &ts))) {
			/* don't care about the return code for now */
			stat(sj->name->ptr, &st);

			g_async_queue_push(outq, sj->con);
		
			stat_job_free(sj);
		}
	}

	g_async_queue_unref(srv->stat_queue);
	g_async_queue_unref(srv->joblist_queue);

	return NULL;
}
#endif
guint sc_key_hash(gconstpointer v) {
	buffer *b = (buffer *)v;

	return g_str_hash(b->ptr);
}

gboolean sc_key_equal(gconstpointer v1, gconstpointer v2) {
	buffer *b1 = (buffer *)v1;
	buffer *b2 = (buffer *)v2;

	return buffer_is_equal(b1, b2);
}

stat_cache *stat_cache_init(void) {
	stat_cache *fc = NULL;

	fc = calloc(1, sizeof(*fc));

	fc->dir_name = buffer_init();
	fc->hash_key = buffer_init();

#if defined(HAVE_SYS_INOTIFY_H)
	fc->sock = iosocket_init();
#endif

	fc->files = g_hash_table_new(sc_key_hash, sc_key_equal);

	return fc;
}

static stat_cache_entry * stat_cache_entry_init(void) {
	stat_cache_entry *sce = NULL;

	sce = calloc(1, sizeof(*sce));

	sce->name = buffer_init();
	sce->etag = buffer_init();
	sce->content_type = buffer_init();

	return sce;
}

static void stat_cache_entry_free(void *data) {
	stat_cache_entry *sce = data;
	if (!sce) return;

	buffer_free(sce->etag);
	buffer_free(sce->name);
	buffer_free(sce->content_type);

	free(sce);
}

gboolean stat_cache_free_hrfunc(gpointer _key, gpointer _value, gpointer _user_data) {
	stat_cache_entry *sce = _value;
	buffer *b = _key;

	buffer_free(b);
	stat_cache_entry_free(sce);

	return TRUE;
}

void stat_cache_free(stat_cache *sc) {
	g_hash_table_foreach_remove(sc->files, stat_cache_free_hrfunc, NULL);
	g_hash_table_destroy(sc->files);

	buffer_free(sc->dir_name);
	buffer_free(sc->hash_key);

#if defined(HAVE_SYS_INOTIFY_H)
	if (sc->sock) iosocket_free(sc->sock);
#endif

	free(sc);
}

#ifdef HAVE_XATTR
static int stat_cache_attr_get(buffer *buf, char *name) {
	int attrlen;
	int ret;

	attrlen = 1024;
	buffer_prepare_copy(buf, attrlen);
	attrlen--;
	if(0 == (ret = attr_get(name, "Content-Type", buf->ptr, &attrlen, 0))) {
		buf->used = attrlen + 1;
		buf->ptr[attrlen] = '\0';
	}
	return ret;
}
#endif

handler_t stat_cache_handle_fdevent(void *_srv, void *_fce, int revent) {
	server *srv = _srv;

	switch (srv->srvconf.stat_cache_engine) {
#ifdef HAVE_SYS_INOTIFY_H
	case STAT_CACHE_ENGINE_INOTIFY:
		return stat_cache_handle_fdevent_inotify(_srv, _fce, revent);
#endif
	default:
		return HANDLER_GO_ON;
	}
}
#ifdef HAVE_LSTAT
static int stat_cache_lstat(server *srv, buffer *dname, struct stat *lst) {
	if (lstat(dname->ptr, lst) == 0) {
		return S_ISLNK(lst->st_mode) ? 0 : 1;
	} else {
		log_error_write(srv, __FILE__, __LINE__, "sbs",
				"lstat failed for:",
				dname, strerror(errno));
	}
	return -1;
}
#endif

int stat_cache_entry_is_current(server *srv, stat_cache_entry *sce) {
	return 1;
}

/***
 *
 *
 *
 * returns:
 *  - HANDLER_FINISHED on cache-miss (don't forget to reopen the file)
 *  - HANDLER_ERROR on stat() failed -> see errno for problem
 */

static handler_t stat_cache_get_entry_internal(server *srv, connection *con, buffer *name, stat_cache_entry **ret_sce, int async) {
	stat_cache_entry *sce = NULL;
	stat_cache *sc;
	struct stat st;
	size_t k;
	int fd;
	struct stat lst;

	*ret_sce = NULL;

	/*
	 * check if the directory for this file has changed
	 */

	sc = srv->stat_cache;

	buffer_copy_string_buffer(sc->hash_key, name);
	buffer_append_long(sc->hash_key, con->conf.follow_symlink);

	if ((sce = (stat_cache_entry *)g_hash_table_lookup(sc->files, sc->hash_key))) {
		/* know this entry already */

		if (sce->state == STAT_CACHE_ENTRY_STAT_FINISHED && 
		    stat_cache_entry_is_current(srv, sce)) {
			/* verify that this entry is still fresh */

			*ret_sce = sce;

			return HANDLER_GO_ON;
		}
	}

	if (!sce) {
		sce = stat_cache_entry_init();

		buffer_copy_string_buffer(sce->name, name);

		g_hash_table_insert(sc->files, buffer_init_string(BUF_STR(sc->hash_key)), sce);
	}

	/*
	 * *lol*
	 * - open() + fstat() on a named-pipe results in a (intended) hang.
	 * - stat() if regular file + open() to see if we can read from it is better
	 *
	 * */

	/* pass a job to the stat-queue */
#ifdef USE_GTHREAD
	if (async &&
	    srv->srvconf.max_stat_threads > 0 &&
	    sce->state == STAT_CACHE_ENTRY_UNSET) {
		stat_job *sj = stat_job_init();

		buffer_copy_string_buffer(sj->name, name);
		sj->con = con;
		
		g_async_queue_push(srv->stat_queue, sj);

		sce->state = STAT_CACHE_ENTRY_ASYNC_STAT;

		/* the response for this will be in the stat-cache,
		 * a second call will just fetch the data from the stat-cache */

		return HANDLER_WAIT_FOR_EVENT;
	}
#endif
	/*
	 * O_NONBLOCK skips named pipes and locked files
	 * */
	if (-1 == (fd = open(name->ptr, O_NONBLOCK | O_RDONLY | (srv->srvconf.use_noatime ? O_NOATIME : 0)))) {
		return HANDLER_ERROR;
	}

	if (-1 == fstat(fd, &st)) {
		return HANDLER_ERROR;
	}

	close(fd);

	sce->st = st;
	sce->stat_ts = srv->cur_ts;
	sce->state = STAT_CACHE_ENTRY_STAT_FINISHED;

	/* catch the obvious symlinks
	 *
	 * this is not a secure check as we still have a race-condition between
	 * the stat() and the open. We can only solve this by
	 * 1. open() the file
	 * 2. fstat() the fd
	 *
	 * and keeping the file open for the rest of the time. But this can
	 * only be done at network level.
	 *
	 * per default it is not a symlink
	 * */

#ifdef HAVE_LSTAT
	sce->is_symlink = 0;

	/* we want to only check for symlinks if we should block symlinks.
	 */
	if (!con->conf.follow_symlink) {
		if (stat_cache_lstat(srv, name, &lst)  == 0) {
#ifdef DEBUG_STAT_CACHE
			TRACE("found symlink in %s", BUF_STR(name));
#endif
			sce->is_symlink = 1;
		}

		/*
		 * we assume "/" can not be symlink, so
		 * skip the symlink stuff if our path is /
		 **/
		else if ((name->used > 2)) {
			buffer *dname;
			char *s_cur;

			dname = buffer_init();
			buffer_copy_string_buffer(dname, name);

			while ((s_cur = strrchr(dname->ptr,'/'))) {
				*s_cur = '\0';
				dname->used = s_cur - dname->ptr + 1;
				if (dname->ptr == s_cur) {
#ifdef DEBUG_STAT_CACHE
					log_error_write(srv, __FILE__, __LINE__, "s", "reached /");
#endif
					break;
				}
#ifdef DEBUG_STAT_CACHE
				log_error_write(srv, __FILE__, __LINE__, "sbs",
						"checking if", dname, "is a symlink");
#endif
				if (stat_cache_lstat(srv, dname, &lst)  == 0) {
					sce->is_symlink = 1;
#ifdef DEBUG_STAT_CACHE
					log_error_write(srv, __FILE__, __LINE__, "sb",
							"found symlink", dname);
#endif
					break;
				}
			}
			buffer_free(dname);
		}
	}
#endif

	if (S_ISREG(st.st_mode)) {
		/* determine mimetype */
		buffer_reset(sce->content_type);

		for (k = 0; k < con->conf.mimetypes->used; k++) {
			data_string *ds = (data_string *)con->conf.mimetypes->data[k];
			buffer *type = ds->key;

			if (type->used == 0) continue;

			/* check if the right side is the same */
			if (type->used > name->used) continue;

			if (0 == strncasecmp(name->ptr + name->used - type->used, type->ptr, type->used - 1)) {
				buffer_copy_string_buffer(sce->content_type, ds->value);
				break;
			}
		}
		etag_create(sce->etag, &(sce->st));
#ifdef HAVE_XATTR
		if (buffer_is_empty(sce->content_type)) {
			stat_cache_attr_get(sce->content_type, name->ptr);
		}
#endif
	} else if (S_ISDIR(st.st_mode)) {
		etag_create(sce->etag, &(sce->st));
	}

	*ret_sce = sce;

	return HANDLER_GO_ON;
}


handler_t stat_cache_get_entry_async(server *srv, connection *con, buffer *name, stat_cache_entry **ret_sce) {
	return stat_cache_get_entry_internal(srv, con, name, ret_sce, 1);
}

handler_t stat_cache_get_entry(server *srv, connection *con, buffer *name, stat_cache_entry **ret_sce) {
	return stat_cache_get_entry_internal(srv, con, name, ret_sce, 0);
}

/**
 * remove stat() from cache which havn't been stat()ed for
 * more than 10 seconds
 *
 *
 * walk though the stat-cache, collect the ids which are too old
 * and remove them in a second loop
 */

gboolean stat_cache_remove_old_entry(gpointer _key, gpointer _value, gpointer user_data) {
	server *srv = user_data;
	buffer *key = _key;
	stat_cache_entry *sce = _value;

	if (sce->state == STAT_CACHE_ENTRY_STAT_FINISHED && 
	    srv->cur_ts - sce->stat_ts > 10) {
		buffer_free(key);
		stat_cache_entry_free(sce);
		
		return TRUE;
	}

	return FALSE;
}

int stat_cache_trigger_cleanup(server *srv) {
	stat_cache *sc;

	sc = srv->stat_cache;

	if (!sc->files) return 0;

	g_hash_table_foreach_remove(sc->files, stat_cache_remove_old_entry, srv);

	return 0;
}
