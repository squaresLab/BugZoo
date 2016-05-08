#ifndef _FDEVENT_H_
#define _FDEVENT_H_

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#include "settings.h"
#include "bitset.h"

#include "iosocket.h"
#include "array-static.h"

/* select event-system */

#if defined(HAVE_EPOLL_CTL) && defined(HAVE_SYS_EPOLL_H)
# if defined HAVE_STDINT_H
#  include <stdint.h>
# endif
# define USE_LINUX_EPOLL
# include <sys/epoll.h>
#endif

/* MacOS 10.3.x has poll.h under /usr/include/, all other unixes
 * under /usr/include/sys/ */
#if defined HAVE_POLL && (defined(HAVE_SYS_POLL_H) || defined(HAVE_POLL_H))
# define USE_POLL
# ifdef HAVE_POLL_H
#  include <poll.h>
# else
#  include <sys/poll.h>
# endif
# if defined HAVE_SIGTIMEDWAIT && defined(__linux__)
#  define USE_LINUX_SIGIO
#  include <signal.h>
# endif
#endif
#ifdef _WIN32
# define HAVE_SELECT
#endif
#if defined HAVE_SELECT
# ifdef _WIN32
#  include <winsock2.h>
# endif
# define USE_SELECT
# ifdef HAVE_SYS_SELECT_H
#  include <sys/select.h>
# endif
#endif

#if defined HAVE_SYS_DEVPOLL_H && defined(__sun)
# define USE_SOLARIS_DEVPOLL
# include <sys/devpoll.h>
#endif

#if defined HAVE_SYS_EVENT_H && defined HAVE_KQUEUE
# define USE_FREEBSD_KQUEUE
# include <sys/event.h>
#endif

#if defined HAVE_SYS_PORT_H && defined HAVE_PORT_CREATE
# define USE_SOLARIS_PORT
# include <sys/port.h>
#endif


typedef handler_t (*fdevent_handler)(void *srv, void *ctx, int revents);

#define FDEVENT_IN     BV(0)
#define FDEVENT_PRI    BV(1)
#define FDEVENT_OUT    BV(2)
#define FDEVENT_ERR    BV(3)
#define FDEVENT_HUP    BV(4)
#define FDEVENT_NVAL   BV(5)

typedef enum { FD_EVENT_TYPE_UNSET = -1,
		FD_EVENT_TYPE_CONNECTION,
		FD_EVENT_TYPE_FCGI_CONNECTION,
		FD_EVENT_TYPE_DIRWATCH,
		FD_EVENT_TYPE_CGI_CONNECTION
} fd_event_t;

typedef enum { FDEVENT_HANDLER_UNSET,
		FDEVENT_HANDLER_SELECT,
		FDEVENT_HANDLER_POLL,
		FDEVENT_HANDLER_LINUX_RTSIG,
		FDEVENT_HANDLER_LINUX_SYSEPOLL,
		FDEVENT_HANDLER_SOLARIS_DEVPOLL,
		FDEVENT_HANDLER_FREEBSD_KQUEUE,
		FDEVENT_HANDLER_SOLARIS_PORT
} fdevent_handler_t;

/**
 * a mapping from fd to connection structure
 *
 */
typedef struct {
	int fd;                  /**< the fd */
	void *conn;              /**< a reference the corresponding data-structure */
	fd_event_t fd_type;      /**< type of the fd */
	int events;              /**< registered events */
	int revents;
} fd_conn;

ARRAY_STATIC_DEF(fd_conn_buffer, fd_conn, );

/**
 * revents
 */
typedef struct {
	int fd;
	int revents;

	fdevent_handler handler;
	void *context;
} fdevent_revent;

ARRAY_STATIC_DEF(fdevent_revents, fdevent_revent, );

/**
 * array of unused fd's
 *
 */

typedef struct _fdnode {
	fdevent_handler handler; /* who handles the events for this fd */
	void *ctx;               /* opaque pointer which is passed as 3rd parameter to the handler */
	int fd;                  /* fd */

	struct _fdnode *prev, *next;
} fdnode;

typedef struct {
	int *ptr;

	size_t used;
	size_t size;
} buffer_int;

/**
 * fd-event handler for select(), poll() and rt-signals on Linux 2.4
 *
 */
typedef struct fdevents {
	fdevent_handler_t type;

	fdnode **fdarray; /* a list of fdnodes */
	size_t maxfds;

#ifdef USE_LINUX_SIGIO
	int in_sigio;
	int signum;
	sigset_t sigset;
	siginfo_t siginfo;
	bitset *sigbset;
#endif
#ifdef USE_LINUX_EPOLL
	int epoll_fd;
	struct epoll_event *epoll_events;
#endif
#ifdef USE_POLL
	struct pollfd *pollfds;

	size_t size;
	size_t used;

	buffer_int unused;
#endif
#ifdef USE_SELECT
	/* Temporary sets, cloned from permanent sets, and passed to select() */
	fd_set select_read;
	fd_set select_write;
	fd_set select_error;

	/* Permanent sets */
	fd_set select_set_read;
	fd_set select_set_write;
	fd_set select_set_error;

	/* Since windows socket IDs are as good as unpredictable, we need to keep track of each one.
	   *nix socket IDs start at zero for each process and are reused throughout the life of the process. */
#ifdef _WIN32
	/* We could simply use select_set_error, because that is currently always inclusive,
		 but better to keep it separate. */
	fd_set select_set_all;
#else
	int select_max_fd;
#endif
#endif


#ifdef USE_SOLARIS_DEVPOLL
	int devpoll_fd;
	struct pollfd *devpollfds;
#endif
#ifdef USE_FREEBSD_KQUEUE
	int kq_fd;
	struct kevent *kq_results;
	bitset *kq_read_bevents;
	bitset *kq_write_bevents;
#endif
#ifdef USE_SOLARIS_PORT
	int port_fd;
#endif
	int (*reset)(struct fdevents *ev);
	void (*free)(struct fdevents *ev);

	int (*event_add)(struct fdevents *ev, iosocket *sock, int events);
	int (*event_del)(struct fdevents *ev, iosocket *sock);
	int (*get_revents)(struct fdevents *ev, size_t event_count, fdevent_revents *revents);

	int (*poll)(struct fdevents *ev, int timeout_ms);

	int (*fcntl_set)(struct fdevents *ev, int fd);
} fdevents;

LI_API fdevents* fdevent_init(size_t maxfds, fdevent_handler_t type);
LI_API int fdevent_reset(fdevents *ev);
LI_API void fdevent_free(fdevents *ev);

/**
 * call the plugin for the number of available events
 */
LI_API int fdevent_poll(fdevents *ev, int timeout_ms);
/**
 * get all available events
 */
LI_API int fdevent_get_revents(fdevents *ev, size_t event_count, fdevent_revents *revents);

/**
 * add or remove a fd to the handled-pool
 */
LI_API int fdevent_register(fdevents *ev, iosocket *sock, fdevent_handler handler, void *ctx);
LI_API int fdevent_unregister(fdevents *ev, iosocket *sock);

/**
 * add a event to a registered fd
 */
LI_API int fdevent_event_add(fdevents *ev, iosocket *sock, int events);
LI_API int fdevent_event_del(fdevents *ev, iosocket *sock);

/**
 * set non-blocking
 */
LI_API int fdevent_fcntl_set(fdevents *ev, iosocket *sock);

LI_API fdevent_revents* fdevent_revents_init(void);
LI_API void fdevent_revents_reset(fdevent_revents *revents);
LI_API void fdevent_revents_add(fdevent_revents *revents, int fd, int events);
LI_API void fdevent_revents_free(fdevent_revents *revents);

LI_API fdevent_revent* fdevent_revent_init(void);
LI_API void fdevent_revent_free(fdevent_revent *revent);


/**
 * plugin init
 */
LI_API int fdevent_select_init(fdevents *ev);
LI_API int fdevent_poll_init(fdevents *ev);
LI_API int fdevent_linux_rtsig_init(fdevents *ev);
LI_API int fdevent_linux_sysepoll_init(fdevents *ev);
LI_API int fdevent_solaris_devpoll_init(fdevents *ev);
LI_API int fdevent_freebsd_kqueue_init(fdevents *ev);

#endif



