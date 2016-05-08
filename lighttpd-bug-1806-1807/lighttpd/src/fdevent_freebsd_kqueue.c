#include <sys/types.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <fcntl.h>

#include "server.h"
#include "fdevent.h"
#include "settings.h"
#include "buffer.h"

#ifdef USE_FREEBSD_KQUEUE
#include <sys/event.h>
#include <sys/time.h>

#include "sys-files.h"
#include "log.h"

static int fdevent_freebsd_kqueue_event_add(fdevents *ev, iosocket *sock, int events);

static void fdevent_freebsd_kqueue_free(fdevents *ev) {
	close(ev->kq_fd);
	free(ev->kq_results);
	bitset_free(ev->kq_read_bevents);
	bitset_free(ev->kq_write_bevents);
}

static int fdevent_freebsd_kqueue_event_del(fdevents *ev, iosocket *sock) {
	int ret;

	if (sock->fde_ndx < 0) return -1;

	/* delete events */
	ret = fdevent_freebsd_kqueue_event_add(ev, sock, 0);
	sock->fde_ndx = -1;
	return 0;
}

static int fdevent_freebsd_kqueue_event_add(fdevents *ev, iosocket *sock, int events) {
	int ret;
	struct kevent kev[2];
	struct timespec ts;
	int nchanges = 0;
	int changed_events = 0;

	if (bitset_test_bit(ev->kq_read_bevents, sock->fd)) {
		changed_events |= FDEVENT_IN;
	}
	if (bitset_test_bit(ev->kq_write_bevents, sock->fd)) {
		changed_events |= FDEVENT_OUT;
	}
	/* use XOR on changed_events and events to see which events changed. */
	changed_events ^= events;

	if (changed_events & FDEVENT_IN) {
		/* add/delete FDEVENT_IN */
		if (events & FDEVENT_IN) {
			/* add */
			EV_SET(&(kev[nchanges]), sock->fd, EVFILT_READ, EV_ADD, 0, 0, NULL);
			nchanges++;
			bitset_set_bit(ev->kq_read_bevents, sock->fd);
		} else {
			/* delete */
			EV_SET(&(kev[nchanges]), sock->fd, EVFILT_READ, EV_DELETE, 0, 0, NULL);
			nchanges++;
			bitset_clear_bit(ev->kq_read_bevents, sock->fd);
		}
	}

	if (changed_events & FDEVENT_OUT) {
		/* add/delete FDEVENT_OUT */
		if (events & FDEVENT_OUT) {
			/* add */
			EV_SET(&(kev[nchanges]), sock->fd, EVFILT_WRITE, EV_ADD, 0, 0, NULL);
			nchanges++;
			bitset_set_bit(ev->kq_write_bevents, sock->fd);
		} else {
			/* delete */
			EV_SET(&(kev[nchanges]), sock->fd, EVFILT_WRITE, EV_DELETE, 0, 0, NULL);
			nchanges++;
			bitset_clear_bit(ev->kq_write_bevents, sock->fd);
		}
	}

	if (nchanges == 0) return 0;

	ts.tv_sec  = 0;
	ts.tv_nsec = 0;

	ret = kevent(ev->kq_fd,
		     kev, nchanges,
		     NULL, 0,
		     &ts);

	if (ret == -1) {
		ERROR("kqueue failed polling: %s\n", strerror(errno));

		return -1;
	}

	sock->fde_ndx = sock->fd;

	return 0;
}

static int fdevent_freebsd_kqueue_poll(fdevents *ev, int timeout_ms) {
	int ret;
	struct timespec ts;

	ts.tv_sec  = timeout_ms / 1000;
	ts.tv_nsec = (timeout_ms % 1000) * 1000000;

	ret = kevent(ev->kq_fd,
		     NULL, 0,
		     ev->kq_results, ev->maxfds,
		     &ts);

	if (ret == -1) {
		switch(errno) {
		case EINTR:
			/* we got interrupted, perhaps just a SIGCHLD of a CGI script */
			return 0;
		default:
			fprintf(stderr, "%s.%d: kqueue failed polling: %s\n",
				__FILE__, __LINE__, strerror(errno));
			break;
		}
	}

	return ret;
}

static int fdevent_freebsd_kqueue_get_revents(fdevents *ev, size_t event_count, fdevent_revents *revents) {
	size_t ndx;

	for (ndx = 0; ndx < event_count; ndx++) {
		int events = 0, e;

		e = ev->kq_results[ndx].filter;

		if (e == EVFILT_READ) {
			events |= FDEVENT_IN;
		} else if (e == EVFILT_WRITE) {
			events |= FDEVENT_OUT;
		}

		e = ev->kq_results[ndx].flags;

		if (e & EV_EOF) {
			events |= FDEVENT_HUP;
		}

		if (e & EV_ERROR) {
			events |= FDEVENT_ERR;
		}

		fdevent_revents_add(revents, ev->kq_results[ndx].ident, events);
	}

	return 0;
}

static int fdevent_freebsd_kqueue_reset(fdevents *ev) {
	if (-1 == (ev->kq_fd = kqueue())) {
		fprintf(stderr, "%s.%d: kqueue failed (%s), try to set server.event-handler = \"poll\" or \"select\"\n",
			__FILE__, __LINE__, strerror(errno));

		return -1;
	}

	return 0;
}


int fdevent_freebsd_kqueue_init(fdevents *ev) {
	ev->type = FDEVENT_HANDLER_FREEBSD_KQUEUE;
#define SET(x) \
	ev->x = fdevent_freebsd_kqueue_##x;

	SET(free);
	SET(poll);
	SET(reset);

	SET(event_del);
	SET(event_add);

	SET(get_revents);

	ev->kq_fd = -1;

	ev->kq_results = calloc(ev->maxfds, sizeof(*ev->kq_results));
	ev->kq_read_bevents = bitset_init(ev->maxfds);
	ev->kq_write_bevents = bitset_init(ev->maxfds);

	/* check that kqueue works */

	if (-1 == (ev->kq_fd = kqueue())) {
		fprintf(stderr, "%s.%d: kqueue failed (%s), try to set server.event-handler = \"poll\" or \"select\"\n",
			__FILE__, __LINE__, strerror(errno));

		return -1;
	}

	close(ev->kq_fd);
	ev->kq_fd = -1;

	return 0;
}
#else
int fdevent_freebsd_kqueue_init(fdevents *ev) {
	UNUSED(ev);

	fprintf(stderr, "%s.%d: kqueue not available, try to set server.event-handler = \"poll\" or \"select\"\n",
			__FILE__, __LINE__);

	return -1;
}
#endif
