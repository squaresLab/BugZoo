#include <sys/types.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <fcntl.h>

#include "fdevent.h"
#include "settings.h"
#include "buffer.h"
#include "log.h"

#ifdef USE_POLL
static void fdevent_poll_free(fdevents *ev) {
	free(ev->pollfds);
	if (ev->unused.ptr) free(ev->unused.ptr);
}

static int fdevent_poll_event_del(fdevents *ev, iosocket *sock) {
	if (sock->fde_ndx < 0) return -1;

	if ((size_t)sock->fde_ndx >= ev->used) {
		ERROR("(fdevent-poll-del) out of range %d %zd\n", sock->fde_ndx, ev->used);
		SEGFAULT();
	}

	if (ev->pollfds[sock->fde_ndx].fd == sock->fd) {
		size_t k = sock->fde_ndx;

		ev->pollfds[k].fd = -1;
		/* ev->pollfds[k].events = 0; */
		/* ev->pollfds[k].revents = 0; */

		if (ev->unused.size == 0) {
			ev->unused.size = 16;
			ev->unused.ptr = malloc(sizeof(*(ev->unused.ptr)) * ev->unused.size);
		} else if (ev->unused.size == ev->unused.used) {
			ev->unused.size += 16;
			ev->unused.ptr = realloc(ev->unused.ptr, sizeof(*(ev->unused.ptr)) * ev->unused.size);
		}

		ev->unused.ptr[ev->unused.used++] = k;
	} else {
		TRACE("(fdevent-poll-del) sock->fde_ndx: %d, sock->fd: %d -> stored fd: %d", sock->fde_ndx, sock->fd, ev->pollfds[sock->fde_ndx].fd);
		SEGFAULT();
	}

	sock->fde_ndx = -1;

	return 0;
}

#if 0
static int fdevent_poll_event_compress(fdevents *ev) {
	size_t j;

	if (ev->used == 0) return 0;
	if (ev->unused.used != 0) return 0;

	for (j = ev->used - 1; j + 1 > 0 && ev->pollfds[j].fd == -1; j--) ev->used--;

	return 0;
}
#endif

static int fdevent_poll_event_add(fdevents *ev, iosocket *sock, int events) {
	if (sock->fde_ndx != -1) {
		/* this fd was already added, just change the requested events */

		if (ev->pollfds[sock->fde_ndx].fd == sock->fd) {
			ev->pollfds[sock->fde_ndx].events = events;

			return sock->fde_ndx;
		}
		ERROR("(fdevent-poll-add) (%d, %d)", sock->fde_ndx, ev->pollfds[sock->fde_ndx].fd);
		SEGFAULT();
	}

	if (ev->unused.used > 0) {
		int k = ev->unused.ptr[--ev->unused.used];

		ev->pollfds[k].fd = sock->fd;
		ev->pollfds[k].events = events;

		sock->fde_ndx = k;

	} else {
		if (ev->size == 0) {
			ev->size = 16;
			ev->pollfds = malloc(sizeof(*ev->pollfds) * ev->size);
		} else if (ev->size == ev->used) {
			ev->size += 16;
			ev->pollfds = realloc(ev->pollfds, sizeof(*ev->pollfds) * ev->size);
		}

		ev->pollfds[ev->used].fd = sock->fd;
		ev->pollfds[ev->used].events = events;

		sock->fde_ndx = ev->used++;
	}
	return 0;
}

static int fdevent_poll_poll(fdevents *ev, int timeout_ms) {
#if 0
	fdevent_poll_event_compress(ev);
#endif
	return poll(ev->pollfds, ev->used, timeout_ms);
}

static int fdevent_poll_get_revents(fdevents *ev, size_t event_count, fdevent_revents *revents) {
	size_t ndx;

	UNUSED(event_count);

	for (ndx = 0; ndx < ev->used; ndx++) {
		if (ev->pollfds[ndx].revents) {
			if (ev->pollfds[ndx].revents & POLLNVAL) {
				/* should never happen */
				SEGFAULT();
			}

			fdevent_revents_add(revents, ev->pollfds[ndx].fd, ev->pollfds[ndx].revents);
		}
	}

	return 0;
}

int fdevent_poll_init(fdevents *ev) {
	ev->type = FDEVENT_HANDLER_POLL;
#define SET(x) \
	ev->x = fdevent_poll_##x;

	SET(free);
	SET(poll);

	SET(event_del);
	SET(event_add);

	SET(get_revents);

	return 0;
}

#else
int fdevent_poll_init(fdevents *ev) {
	UNUSED(ev);

	ERROR("event-handler 'poll' is not supported, try to set server.event-handler = \"%s\"", "select");

	return -1;
}
#endif
