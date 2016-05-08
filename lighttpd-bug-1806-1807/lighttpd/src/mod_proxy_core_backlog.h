#ifndef _MOD_PROXY_CORE_BACKLOG_H_
#define _MOD_PROXY_CORE_BACKLOG_H_

#include <sys/types.h>
#ifndef _WIN32
#include <sys/time.h>
#else
#include <time.h>
#endif

typedef struct _proxy_request {
	void *con; /* a pointer to the client-connection, (type: connection) */

	time_t added_ts; /* when was the entry added (for timeout handling) */

	struct _proxy_request *next;
} proxy_request;

/**
 * a we can't get a connection from the pool, queue the request in the
 * request queue (FIFO)
 *
 * - the queue is infinite
 * - entries are removed after a timeout (status 504)
 */
typedef struct {
	proxy_request *first; /* pull() does q->first = q->first->next */
	proxy_request *last; /* push() does q->last = r */

	size_t length;
} proxy_backlog;

proxy_backlog *proxy_backlog_init(void);
void proxy_backlog_free(proxy_backlog *backlog);

/**
 * append a request to the end
 *
 * @return 0 in success, -1 if full
 */
int proxy_backlog_push(proxy_backlog *backlog, proxy_request *req);

/**
 * remove the first request from the backlog
 *
 * @return NULL if backlog is empty, the request otherwise
 */
proxy_request *proxy_backlog_shift(proxy_backlog *backlog);
/**
 * remove the request with the connection 'con' from the backlog
 *
 * @return -1 if not found, 0 otherwise
 */
int proxy_backlog_remove_connection(proxy_backlog *backlog, void *con);

proxy_request *proxy_request_init(void);
void proxy_request_free(proxy_request *req);

#endif


