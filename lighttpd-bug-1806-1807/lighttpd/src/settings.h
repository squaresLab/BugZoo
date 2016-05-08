#ifndef _LIGHTTPD_SETTINGS_H_
#define _LIGHTTPD_SETTINGS_H_

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#define BV(x) (1 << x)

#define INET_NTOP_CACHE_MAX 4
#define FILE_CACHE_MAX      16

/**
 * max size of a buffer which will just be reset
 * to ->used = 0 instead of really freeing the buffer
 *
 * 64kB (no real reason, just a guess)
 */
#define BUFFER_MAX_REUSE_SIZE  (4 * 1024)

/**
 * max size of the HTTP request header
 *
 * 32k should be enough for everything (just a guess)
 *
 */
#define MAX_HTTP_REQUEST_HEADER  (32 * 1024)

#include <glib.h>

/**
 * if glib supports threads we will use it for async file-io
 */
#ifdef G_THREADS_ENABLED
# ifndef USE_GTHREAD
#  define USE_GTHREAD
# endif
#endif


/* on linux 2.4.x you get either sendfile or LFS */
#if defined HAVE_SYS_SENDFILE_H && defined HAVE_SENDFILE && (!defined _LARGEFILE_SOURCE || defined HAVE_SENDFILE64) && defined HAVE_WRITEV && defined(__linux__) && !defined HAVE_SENDFILE_BROKEN
# define USE_LINUX_SENDFILE
# include <sys/sendfile.h>
# include <sys/uio.h>
#endif

/* all the Async IO backends need GTHREAD support */
#if defined(USE_GTHREAD)
# if defined(USE_LINUX_SENDFILE)
#  if defined(HAVE_LIBAIO_H)
#    define USE_LINUX_AIO_SENDFILE
#  endif
#  define USE_GTHREAD_SENDFILE
# endif
# if defined(HAVE_AIO_H) && (!defined(__FreeBSD__))
/* FreeBSD has no SIGEV_THREAD for us */
#  define USE_POSIX_AIO
#  include <sys/types.h> /* macosx wants it */
#  include <aio.h>
# endif
# ifdef HAVE_MMAP
#  define USE_GTHREAD_AIO
# endif
#endif

#if defined HAVE_SYS_UIO_H && defined HAVE_SENDFILE && defined HAVE_WRITEV && (defined(__FreeBSD__) || defined(__DragonFly__))
# define USE_FREEBSD_SENDFILE
# include <sys/uio.h>
#endif

#if defined HAVE_SYS_SENDFILE_H && defined HAVE_SENDFILEV && defined HAVE_WRITEV && defined(__sun)
# define USE_SOLARIS_SENDFILEV
# include <sys/sendfile.h>
# include <sys/uio.h>
#endif

#if defined HAVE_SYS_UIO_H && defined HAVE_WRITEV
# define USE_WRITEV
# include <sys/uio.h>
#endif

#if defined HAVE_SYS_MMAN_H && defined HAVE_MMAP
# define USE_MMAP
# include <sys/mman.h>
/* NetBSD 1.3.x needs it */
# ifndef MAP_FAILED
#  define MAP_FAILED -1
# endif
#endif

#if defined HAVE_SYS_UIO_H && defined HAVE_WRITEV && defined HAVE_SEND_FILE && defined(__aix)
# define USE_AIX_SENDFILE
#endif

/**
 * how to mmap() a piece of memory 
 */
#if defined(__linux__)
#define HAVE_MEM_MMAP_ZERO
#endif

#if defined(__APPLE__)
#define HAVE_MEM_MMAP_ANON
#endif


/**
* unix can use read/write or recv/send on sockets
* win32 only recv/send
*/
#ifdef _WIN32

# define WIN32_LEAN_AND_MEAN
# define NOGDI
# define USE_WIN32_SEND
/* wait for async-io support
# define USE_WIN32_TRANSMITFILE
*/
#else
# define USE_WRITE
#endif


typedef enum { HANDLER_UNSET,
		HANDLER_GO_ON,
		HANDLER_FINISHED,
		HANDLER_COMEBACK,
		HANDLER_WAIT_FOR_EVENT,
		HANDLER_ERROR,
		HANDLER_WAIT_FOR_FD
} handler_t;

/* Shared library support */
#ifdef _WIN32
  #define LI_IMPORT __declspec(dllimport)
  #define LI_EXPORT __declspec(dllexport)
  #define LI_DLLLOCAL
  #define LI_DLLPUBLIC
#else
  #define LI_IMPORT
  #ifdef GCC_HASCLASSVISIBILITY
    #define LI_EXPORT __attribute__ ((visibility("default")))
    #define LI_DLLLOCAL __attribute__ ((visibility("hidden")))
    #define LI_DLLPUBLIC __attribute__ ((visibility("default")))
  #else
    #define LI_EXPORT
    #define LI_DLLLOCAL
    #define LI_DLLPUBLIC
  #endif
#endif

#ifdef LI_DLL_EXPORTS
#define LI_API LI_EXPORT
#else
#define LI_API LI_IMPORT
#endif

/* Throwable classes must always be visible on GCC in all binaries */
#ifdef _WIN32
  #define LI_EXCEPTIONAPI(api) api
#elif defined(GCC_HASCLASSVISIBILITY)
  #define LI_EXCEPTIONAPI(api) LI_EXPORT
#else
  #define LI_EXCEPTIONAPI(api)
#endif

#ifdef UNUSED_PARAM
#elif defined(__GNUC__)
# define UNUSED_PARAM(x) UNUSED_ ## x __attribute__((unused))
#elif defined(__LCLINT__)
# define UNUSED_PARAM(x) /*@unused@*/ x
#else
# define UNUSED_PARAM(x) x
#endif


#endif
