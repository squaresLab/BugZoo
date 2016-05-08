#include <sys/types.h>

#include "settings.h"

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdio.h>
#include <fcntl.h>
#include <assert.h>

#include "fdevent.h"
#include "buffer.h"
#include "log.h"

#include "sys-socket.h"

fdevent_revent *fdevent_revent_init(void) {
	STRUCT_INIT(fdevent_revent, revent);

	return revent;
}

void fdevent_revent_free(fdevent_revent *revent) {
	if (!revent) return;

	free(revent);
}

fdevent_revents *fdevent_revents_init(void) {
	STRUCT_INIT(fdevent_revents, revents);

	return revents;
}

void fdevent_revents_reset(fdevent_revents *revents) {
	if (!revents) return;

	revents->used = 0;
}

void fdevent_revents_add(fdevent_revents *revents, int fd, int events) {
	fdevent_revent *revent;

	if (revents->used == revents->size) {
		/* resize the events-array */
		revents->ptr = realloc(revents->ptr, (revents->size + 1) * sizeof(*(revents->ptr)));
		revents->ptr[revents->size++] = fdevent_revent_init();
	}

	revent = revents->ptr[revents->used++];
	revent->fd = fd;
	revent->revents = events;
}

void fdevent_revents_free(fdevent_revents *revents) {
	size_t i;

	if (!revents) return;

	if (revents->size) {
		for (i = 0; i < revents->size; i++) {
			fdevent_revent_free(revents->ptr[i]);
		}

		free(revents->ptr);
	}
	free(revents);
}

fdevents *fdevent_init(size_t maxfds, fdevent_handler_t type) {
	fdevents *ev;

	ev = calloc(1, sizeof(*ev));
	ev->fdarray = calloc(maxfds, sizeof(*ev->fdarray));
	ev->maxfds = maxfds;

	switch(type) {
	case FDEVENT_HANDLER_POLL:
		if (0 != fdevent_poll_init(ev)) {
			ERROR("event-handler poll failed %s", "");

			return NULL;
		}
		break;
	case FDEVENT_HANDLER_SELECT:
		if (0 != fdevent_select_init(ev)) {
			ERROR("event-handler select failed %s", "");

			return NULL;
		}
		break;
	case FDEVENT_HANDLER_LINUX_RTSIG:
		if (0 != fdevent_linux_rtsig_init(ev)) {
			ERROR("event-handler '%s' failed, use 'poll' or 'select' instead", "linux-rtsig");

			return NULL;
		}
		break;
	case FDEVENT_HANDLER_LINUX_SYSEPOLL:
		if (0 != fdevent_linux_sysepoll_init(ev)) {
			ERROR("event-handler '%s' failed, use 'poll' or 'select' instead", "linux-sysepoll");

			return NULL;
		}
		break;
	case FDEVENT_HANDLER_SOLARIS_DEVPOLL:
		if (0 != fdevent_solaris_devpoll_init(ev)) {
			ERROR("event-handler '%s' failed, use 'poll' or 'select' instead", "solaris-devpoll");

			return NULL;
		}
		break;
	case FDEVENT_HANDLER_FREEBSD_KQUEUE:
		if (0 != fdevent_freebsd_kqueue_init(ev)) {
			ERROR("event-handler '%s' failed, use 'poll' or 'select' instead", "kqueue");

			return NULL;
		}
		break;
	default:
		ERROR("event-handler is unknown, use 'poll' or 'select' instead %s", "");

		return NULL;
	}

	return ev;
}

void fdevent_free(fdevents *ev) {
	size_t i;
	if (!ev) return;

	if (ev->free) ev->free(ev);

	for (i = 0; i < ev->maxfds; i++) {
		if (ev->fdarray[i]) free(ev->fdarray[i]);
	}

	free(ev->fdarray);
	free(ev);
}

int fdevent_reset(fdevents *ev) {
	if (ev->reset) return ev->reset(ev);

	return 0;
}

fdnode *fdnode_init() {
	fdnode *fdn;

	fdn = calloc(1, sizeof(*fdn));
	fdn->fd = -1;

	return fdn;
}

void fdnode_free(fdnode *fdn) {
	free(fdn);
}

/* Unix file descriptors begin at zero for each process, but not so win32.
The fdevent system uses the file descriptors as indexers into the fdarray, but we can't
just do that on windows. Lazily, this is O(n) on the number of file descriptors/sockets, but
with select's limit of 64 events, this is not really a bottleneck. For the sake of win32,
it would be nice if all file/socket descriptors were references to IO devices in our own
global table, instead of just using the system-provided fd directly.
*/
#ifdef _WIN32

size_t fdevent_find_free_slot(fdevents *ev, int fd) {
	size_t i;
	for ( i = 0; i < ev->maxfds; i++ )
	{
		if ( ev->fdarray[i] == NULL )
			return i;
	}
	fprintf(stderr, "no more free fdevent.fdarray slots\n");
	SEGFAULT();
	return -1;
}

size_t fdevent_find_slot(fdevents *ev, int fd) {
	size_t i;
	for ( i = 0; i < ev->maxfds; i++ )
	{
		if ( ev->fdarray[i] && ev->fdarray[i]->fd == fd ) return i;
	}
	DebugBreak();
	return -1;
}

#else

#define fdevent_find_free_slot( ev, fd )    (fd)
#define fdevent_find_slot( ev, fd )         (fd)

#endif

int fdevent_register(fdevents *ev, iosocket *sock, fdevent_handler handler, void *ctx) {
	fdnode *fdn;
	size_t fda_ndx;

	fda_ndx = fdevent_find_free_slot(ev, sock->fd);

	fdn = fdnode_init();
	fdn->handler = handler;
	fdn->fd      = sock->fd;
	fdn->ctx     = ctx;

	ev->fdarray[fda_ndx] = fdn;

	return 0;
}

int fdevent_unregister(fdevents *ev, iosocket *sock) {
	fdnode *fdn;
	size_t fda_ndx;
	if (!ev) return 0;
	fda_ndx = fdevent_find_slot(ev, sock->fd);

	fdn = ev->fdarray[fda_ndx];

	fdnode_free(fdn);

	ev->fdarray[fda_ndx] = NULL;

	return 0;
}

int fdevent_event_del(fdevents *ev, iosocket *sock) {
	if (ev->event_del) ev->event_del(ev, sock);

	return 0;
}

int fdevent_event_add(fdevents *ev, iosocket *sock, int events) {
	if (ev->event_add) ev->event_add(ev, sock, events);

	return 0;
}

int fdevent_poll(fdevents *ev, int timeout_ms) {
	if (ev->poll == NULL) SEGFAULT();
	return ev->poll(ev, timeout_ms);
}

int fdevent_get_revents(fdevents *ev, size_t event_count, fdevent_revents *revents) {
	size_t i;

	if (ev->get_revents == NULL) SEGFAULT();

	fdevent_revents_reset(revents);

	ev->get_revents(ev, event_count, revents);
	assert(revents->used == event_count);

	/* patch the event handlers */
	for (i = 0; i < event_count; i++) {
		size_t fda_ndx;
		fdevent_revent *r = revents->ptr[i];

		fda_ndx = fdevent_find_slot(ev, r->fd);

		r->handler = ev->fdarray[fda_ndx]->handler;
		r->context = ev->fdarray[fda_ndx]->ctx;
	}

	return 0;
}

int fdevent_fcntl_set(fdevents *ev, iosocket *sock) {
#ifdef _WIN32
	int i = 1;
#endif
#ifdef FD_CLOEXEC
	/* close fd on exec (cgi) */
	fcntl(sock->fd, F_SETFD, FD_CLOEXEC);
#endif
	if ((ev) && (ev->fcntl_set)) return ev->fcntl_set(ev, sock->fd);
#ifdef O_NONBLOCK
	return fcntl(sock->fd, F_SETFL, O_NONBLOCK | O_RDWR);
#elif defined _WIN32
	return ioctlsocket(sock->fd, FIONBIO, &i);
#else
	return 0;
#endif
}


