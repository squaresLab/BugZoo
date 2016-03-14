#ifndef _FILE_CACHE_H_
#define _FILE_CACHE_H_

#include "base.h"

LI_EXPORT stat_cache * stat_cache_init(void);
LI_EXPORT void stat_cache_free(stat_cache *fc);

LI_EXPORT handler_t stat_cache_get_entry(server *srv, connection *con, buffer *name, stat_cache_entry **fce);
LI_EXPORT handler_t stat_cache_get_entry_async(server *srv, connection *con, buffer *name, stat_cache_entry **fce);
LI_EXPORT handler_t stat_cache_handle_fdevent(void *_srv, void *_fce, int revent);

LI_EXPORT int stat_cache_trigger_cleanup(server *srv);
#endif
