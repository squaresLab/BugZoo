#include <sys/types.h>

#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <fcntl.h>
#include <assert.h>
#include <stdio.h>

#include "fdevent.h"
#include "settings.h"
#include "buffer.h"

#include "sys-socket.h"

#ifdef HAVE_SYS_TIME_H
/* struct timeval tv needs it on IRIX + MIPS pro*/
#include <sys/time.h>
#endif

#ifdef USE_SELECT

static int fdevent_select_reset(fdevents *ev) {
	FD_ZERO(&(ev->select_set_read));
	FD_ZERO(&(ev->select_set_write));
	FD_ZERO(&(ev->select_set_error));
#ifdef _WIN32
	FD_ZERO(&(ev->select_set_all));
#endif
#ifndef _WIN32
	ev->select_max_fd = -1;
#endif

	return 0;
}

static int fdevent_select_event_del(fdevents *ev, iosocket *sock) {
	if (sock->fde_ndx < 0) return -1;

	FD_CLR(sock->fd, &(ev->select_set_read));
	FD_CLR(sock->fd, &(ev->select_set_write));
	FD_CLR(sock->fd, &(ev->select_set_error));
#ifdef _WIN32
	FD_CLR(sock->fd, &(ev->select_set_all));
#endif

	/* mark the fdevent as deleted */
	sock->fde_ndx = -1;

	return 0;
}

static int fdevent_select_event_add(fdevents *ev, iosocket *sock, int events) {
	/* we should be protected by max-fds, but you never know */
#ifndef _WIN32
	u_int i;
	assert(sock->fd < FD_SETSIZE);
#endif

	if (events & FDEVENT_IN) {
		FD_SET(sock->fd, &(ev->select_set_read));
		FD_CLR(sock->fd, &(ev->select_set_write));
	}
	if (events & FDEVENT_OUT) {
		FD_CLR(sock->fd, &(ev->select_set_read));
		FD_SET(sock->fd, &(ev->select_set_write));
	}
	FD_SET(sock->fd, &(ev->select_set_error));

	/* we need this for the poll */
#ifdef _WIN32
	FD_SET(sock->fd, &(ev->select_set_all));
#else
	if (sock->fd > ev->select_max_fd) ev->select_max_fd = sock->fd;
#endif

	/* mark fd as added */
	sock->fde_ndx = sock->fd;

	return 0;
}

static int fdevent_select_poll(fdevents *ev, int timeout_ms) {
	struct timeval tv;
#ifndef _WIN32
	int max_ev = ev->select_max_fd + 1;
#else
	// windows ignores this
	int max_ev = 0;
#endif

	tv.tv_sec =  timeout_ms / 1000;
	tv.tv_usec = (timeout_ms % 1000) * 1000;

	ev->select_read = ev->select_set_read;
	ev->select_write = ev->select_set_write;
	ev->select_error = ev->select_set_error;

	return select(max_ev, &(ev->select_read), &(ev->select_write), &(ev->select_error), &tv);
}

/**
 * scan the fdset for events
 */
static int fdevent_select_get_revents(fdevents *ev, size_t event_count, fdevent_revents *revents) {

	int ndx = 0;
#ifndef _WIN32
	int top = ev->select_max_fd;
#else
	int top = ev->select_set_all.fd_count; // FD_SETSIZE;
#endif

	UNUSED(event_count);

	for (ndx = 0; ndx < top; ndx++) {
		int events = 0;

#ifdef _WIN32
		int fdx = ev->select_set_all.fd_array[ndx];
		if ( fdx <= 0 ) continue;
#else
		int fdx = ndx;
#endif

		if (FD_ISSET(fdx, &(ev->select_read))) {
			events |= FDEVENT_IN;
		}
		if (FD_ISSET(fdx, &(ev->select_write))) {
			events |= FDEVENT_OUT;
		}
		if (FD_ISSET(fdx, &(ev->select_error))) {
			events |= FDEVENT_ERR;
		}

		if (events) {
			fdevent_revents_add(revents, fdx, events);
		}
	}

	return 0;
}

int fdevent_select_init(fdevents *ev) {
	ev->type = FDEVENT_HANDLER_SELECT;
#define SET(x) \
	ev->x = fdevent_select_##x;

	SET(reset);
	SET(poll);

	SET(event_del);
	SET(event_add);

	SET(get_revents);

	return 0;
}

#else
int fdevent_select_init(fdevents *ev) {
	UNUSED(ev);

	return -1;
}
#endif
