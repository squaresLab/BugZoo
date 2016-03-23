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

#include "sys-files.h"

#ifdef USE_LINUX_EPOLL
static void fdevent_linux_sysepoll_free(fdevents *ev) {
	close(ev->epoll_fd);
	free(ev->epoll_events);
}

static int fdevent_linux_sysepoll_event_del(fdevents *ev, iosocket *sock) {
	struct epoll_event ep;

	if (sock->fde_ndx < 0) return -1;

	memset(&ep, 0, sizeof(ep));

	ep.data.fd = sock->fd;
	ep.data.ptr = NULL;

	if (0 != epoll_ctl(ev->epoll_fd, EPOLL_CTL_DEL, sock->fd, &ep)) {
		ERROR("epoll_ctl (del) failed on fd=%d: %s", sock->fd, strerror(errno));

		SEGFAULT();

		return 0;
	}

	sock->fde_ndx = -1;

	return 0;
}

static int fdevent_linux_sysepoll_event_add(fdevents *ev, iosocket *sock, int events) {
	struct epoll_event ep;
	int add = 0;

	/* a new fd */
	if (sock->fde_ndx == -1) add = 1;

	memset(&ep, 0, sizeof(ep));

	ep.events = 0;

	if (events & FDEVENT_IN)  ep.events |= EPOLLIN;
	if (events & FDEVENT_OUT) ep.events |= EPOLLOUT;

	/**
	 *
	 * with EPOLLET we don't get a FDEVENT_HUP
	 * if the close is delay after everything has
	 * sent.
	 *
	 */

	ep.events |= EPOLLERR | EPOLLHUP /* | EPOLLET */;

	ep.data.ptr = NULL;
	ep.data.fd = sock->fd;

	if (0 != epoll_ctl(ev->epoll_fd, add ? EPOLL_CTL_ADD : EPOLL_CTL_MOD, sock->fd, &ep)) {
		ERROR("epoll_ctl (add/mod) failed on fd=%d: %s", sock->fd, strerror(errno));

		SEGFAULT();

		return 0;
	}

	sock->fde_ndx = sock->fd;

	return 0;
}

static int fdevent_linux_sysepoll_poll(fdevents *ev, int timeout_ms) {
	return epoll_wait(ev->epoll_fd, ev->epoll_events, ev->maxfds, timeout_ms);
}

static int fdevent_linux_sysepoll_get_revents(fdevents *ev, size_t event_count, fdevent_revents *revents) {
	size_t ndx;

	for (ndx = 0; ndx < event_count; ndx++) {
		int events = 0, e;

		e = ev->epoll_events[ndx].events;
		if (e & EPOLLIN) events |= FDEVENT_IN;
		if (e & EPOLLOUT) events |= FDEVENT_OUT;
		if (e & EPOLLERR) events |= FDEVENT_ERR;
		if (e & EPOLLHUP) events |= FDEVENT_HUP;
		if (e & EPOLLPRI) events |= FDEVENT_PRI;

		fdevent_revents_add(revents, ev->epoll_events[ndx].data.fd, e);
	}

	return 0;
}

int fdevent_linux_sysepoll_init(fdevents *ev) {
	ev->type = FDEVENT_HANDLER_LINUX_SYSEPOLL;
#define SET(x) \
	ev->x = fdevent_linux_sysepoll_##x;

	SET(free);
	SET(poll);

	SET(event_del);
	SET(event_add);

	SET(get_revents);

	if (-1 == (ev->epoll_fd = epoll_create(ev->maxfds))) {
		ERROR("epoll_create failed (%s), try to set server.event-handler = \"poll\" or \"select\"",
			strerror(errno));

		return -1;
	}

	if (-1 == fcntl(ev->epoll_fd, F_SETFD, FD_CLOEXEC)) {
		ERROR("fcntl after epoll_create failed (%s), try to set server.event-handler = \"poll\" or \"select\"",
			strerror(errno));

		close(ev->epoll_fd);

		return -1;
	}

	ev->epoll_events = malloc(ev->maxfds * sizeof(*ev->epoll_events));

	return 0;
}

#else
int fdevent_linux_sysepoll_init(fdevents *ev) {
	UNUSED(ev);

	ERROR("event-handler 'linux-sysepoll' is not supported, try to set server.event-handler = \"%s\" or \"%s\"", "select", "poll");

	return -1;
}
#endif
