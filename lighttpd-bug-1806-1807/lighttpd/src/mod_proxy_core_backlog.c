#include <stdlib.h>

#include "mod_proxy_core_backlog.h"
#include "array-static.h"

proxy_backlog *proxy_backlog_init(void) {
	STRUCT_INIT(proxy_backlog, backlog);

	return backlog;
}

void proxy_backlog_free(proxy_backlog *backlog) {
	if (!backlog) return;

	free(backlog);
}

int proxy_backlog_push(proxy_backlog *backlog, proxy_request *req) {
	/* first entry */
	if (NULL == backlog->first) {
		backlog->first = backlog->last = req;
	} else {
		backlog->last->next = req;
		backlog->last = req;
	}
	backlog->length++;

	return 0;
}

/**
 * remove the first element from the backlog
 */
proxy_request *proxy_backlog_shift(proxy_backlog *backlog) {
	proxy_request *req = NULL;

	if (!backlog->first) return req;

	backlog->length--;

	req = backlog->first;

	backlog->first = req->next;

	/* the backlog is empty */
	if (backlog->first == NULL) backlog->last = NULL;

	return req;
}

int proxy_backlog_remove_connection(proxy_backlog *backlog, void *con) {
	proxy_request *req = NULL;

	if (!backlog->first) return -1;
	if (!con) return -1;

	/* the first element is what we look for */
	if (backlog->first->con == con) {
		req = backlog->first;

		backlog->first = req->next;
		if (backlog->first == NULL) backlog->last = NULL;

		backlog->length--;

		proxy_request_free(req);

		return 0;
	}


	for (req = backlog->first; req && req->next; req = req->next) {
		proxy_request *cur;

		if (req->next->con != con) continue;

		backlog->length--;
		/* the next node is our searched connection */

		cur = req->next;
		req->next = cur->next;

		/* the next node is the last one, make the current the new last */
		if (cur == backlog->last) {
			backlog->last = req;
		}
		cur->next = NULL;

		proxy_request_free(cur);

		return 0;
	}

	return -1;
}

proxy_request *proxy_request_init(void) {
	STRUCT_INIT(proxy_request, request);

	return request;
}

void proxy_request_free(proxy_request *request) {
	if (!request) return;

	free(request);
}


