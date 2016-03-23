#include <sys/types.h>

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <signal.h>
#include <limits.h>

#ifndef _GNU_SOURCE
/* seems we dont need this when using _GNU_SOURCE
 *  #define __USE_GNU
 */
#define __USE_GNU
#endif
#include <fcntl.h>

#include "fdevent.h"
#include "settings.h"
#include "buffer.h"
#include "sys-process.h"
#include "log.h"

#ifdef USE_LINUX_SIGIO
static void fdevent_linux_rtsig_free(fdevents *ev) {
	free(ev->pollfds);
	if (ev->unused.ptr) free(ev->unused.ptr);

	bitset_free(ev->sigbset);
}


static int fdevent_linux_rtsig_event_del(fdevents *ev, iosocket *sock) {
	if (sock->fde_ndx < 0) return -1;

	if ((size_t)sock->fde_ndx >= ev->used) {
		TRACE("del! out of range %d %zu\n", sock->fde_ndx, ev->used);
		SEGFAULT();
	}

	if (ev->pollfds[sock->fde_ndx].fd == sock->fd) {
		size_t k = sock->fde_ndx;

		ev->pollfds[k].fd = -1;

		bitset_clear_bit(ev->sigbset, sock->fd);

		if (ev->unused.size == 0) {
			ev->unused.size = 16;
			ev->unused.ptr = malloc(sizeof(*(ev->unused.ptr)) * ev->unused.size);
		} else if (ev->unused.size == ev->unused.used) {
			ev->unused.size += 16;
			ev->unused.ptr = realloc(ev->unused.ptr, sizeof(*(ev->unused.ptr)) * ev->unused.size);
		}

		ev->unused.ptr[ev->unused.used++] = k;
	} else {
		fprintf(stderr, "%s.%d: del! %d %d\n", __FILE__, __LINE__, ev->pollfds[sock->fde_ndx].fd, sock->fd);

		SEGFAULT();
	}
	sock->fde_ndx = -1;

	return 0;
}

#if 0
static int fdevent_linux_rtsig_event_compress(fdevents *ev) {
	size_t j;

	if (ev->used == 0) return 0;
	if (ev->unused.used != 0) return 0;

	for (j = ev->used - 1; j + 1 > 0; j--) {
		if (ev->pollfds[j].fd == -1) ev->used--;
	}


	return 0;
}
#endif

static int fdevent_linux_rtsig_event_add(fdevents *ev, iosocket *sock, int events) {
	/* known index */
	if (sock->fde_ndx != -1) {
		if (ev->pollfds[sock->fde_ndx].fd == sock->fd) {
			ev->pollfds[sock->fde_ndx].events = events;

			return sock->fde_ndx;
		}
		fprintf(stderr, "%s.%d: add: (%d, %d)\n", __FILE__, __LINE__, sock->fde_ndx, ev->pollfds[sock->fde_ndx].fd);
		SEGFAULT();
	}

	if (ev->unused.used > 0) {
		int k = ev->unused.ptr[--ev->unused.used];

		ev->pollfds[k].fd = sock->fd;
		ev->pollfds[k].events = events;

		bitset_set_bit(ev->sigbset, sock->fd);

		return k;
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

		bitset_set_bit(ev->sigbset, sock->fd);

		return ev->used++;
	}
}

static int fdevent_linux_rtsig_poll(fdevents *ev, int timeout_ms) {
	struct timespec ts;
	int r;

#if 0
	fdevent_linux_rtsig_event_compress(ev);
#endif

	ev->in_sigio = 1;

	ts.tv_sec =  timeout_ms / 1000;
	ts.tv_nsec = (timeout_ms % 1000) * 1000000;
	r = sigtimedwait(&(ev->sigset), &(ev->siginfo), &(ts));

	if (r == -1) {
		if (errno == EAGAIN) return 0;
		return r;
	} else if (r == SIGIO) {
		struct sigaction act;

		/* flush the signal queue */
		memset(&act, 0, sizeof(act));
		act.sa_handler = SIG_IGN;
		sigaction(ev->signum, &act, NULL);

		/* re-enable the signal queue */
		act.sa_handler = SIG_DFL;
		sigaction(ev->signum, &act, NULL);

		ev->in_sigio = 0;
		r = poll(ev->pollfds, ev->used, timeout_ms);

		return r;
	} else if (r == ev->signum) {
#  if 0
		fprintf(stderr, "event: %d %02lx\n", ev->siginfo.si_fd, ev->siginfo.si_band);
#  endif
		return bitset_test_bit(ev->sigbset, ev->siginfo.si_fd);
	} else {
		/* ? */
		return -1;
	}
}

static int fdevent_linux_rtsig_get_revents(fdevents *ev, size_t event_count, fdevent_revents *revents) {
	UNUSED(event_count);

	if (ev->in_sigio == 1) {
		/* only one event */

		fdevent_revents_add(revents, ev->siginfo.si_fd, ev->siginfo.si_band & 0x3f);
	} else {
		size_t ndx;

		for (ndx = 0; ndx < ev->used; ndx++) {
			if (ev->pollfds[ndx].revents) {
				fdevent_revents_add(revents, ev->pollfds[ndx].fd, ev->pollfds[ndx].revents);
			}
		}
	}

	return 0;
}

static int fdevent_linux_rtsig_fcntl_set(fdevents *ev, int fd) {
	static pid_t pid = 0;

	if (pid == 0) pid = getpid();

	if (-1 == fcntl(fd, F_SETSIG, ev->signum)) return -1;

	if (-1 == fcntl(fd, F_SETOWN, (int) pid)) return -1;

	return fcntl(fd, F_SETFL, O_ASYNC | O_NONBLOCK | O_RDWR);
}


int fdevent_linux_rtsig_init(fdevents *ev) {
	ev->type = FDEVENT_HANDLER_LINUX_RTSIG;
#define SET(x) \
	ev->x = fdevent_linux_rtsig_##x;

	SET(free);
	SET(poll);

	SET(event_del);
	SET(event_add);

	SET(fcntl_set);
	SET(get_revents);

	ev->signum = SIGRTMIN + 1;

	sigemptyset(&(ev->sigset));
	sigaddset(&(ev->sigset), ev->signum);
	sigaddset(&(ev->sigset), SIGIO);
	if (-1 == sigprocmask(SIG_BLOCK, &(ev->sigset), NULL)) {
		fprintf(stderr, "%s.%d: sigprocmask failed (%s), try to set server.event-handler = \"poll\" or \"select\"\n",
			__FILE__, __LINE__, strerror(errno));

		return -1;
	}

	ev->in_sigio = 1;

	ev->sigbset = bitset_init(ev->maxfds);

	return 0;
}
#else
int fdevent_linux_rtsig_init(fdevents *ev) {
	UNUSED(ev);

	fprintf(stderr, "%s.%d: linux-rtsig not supported, try to set server.event-handler = \"poll\" or \"select\"\n",
		__FILE__, __LINE__);
	return -1;
}
#endif
