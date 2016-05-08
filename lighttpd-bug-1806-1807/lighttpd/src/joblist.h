#ifndef _JOB_LIST_H_
#define _JOB_LIST_H_

#include "base.h"

LI_API int joblist_append(server *srv, connection *con);
LI_API void joblist_free(server *srv, connections *joblist);

LI_API int fdwaitqueue_append(server *srv, connection *con);
LI_API void fdwaitqueue_free(server *srv, connections *fdwaitqueue);
LI_API connection* fdwaitqueue_unshift(server *srv, connections *fdwaitqueue);

#endif
