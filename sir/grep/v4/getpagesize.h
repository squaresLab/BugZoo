/* Emulate getpagesize on systems that lack it.  */

#ifndef HAVE_GETPAGESIZE

#ifdef VMS
# ifdef _SC_PAGESIZE
#  if __VMS_VER < 70000000
#   undef _SC_PAGESIZE
#  endif /* __VMS_VER < 70000000 */
# endif /* _SC_PAGESIZE */
# ifndef _SC_PAGESIZE
#  ifdef __ALPHA
#   define getpagesize() 8192
#  else
#   define getpagesize() 512
#  endif /* Alpha or VAX */
# endif /* _SC_PAGESIZE */
#endif /* VMS */

#ifdef HAVE_UNISTD_H
# include <unistd.h>
#endif

#ifdef _SC_PAGESIZE
# define getpagesize() sysconf(_SC_PAGESIZE)
#else
# ifndef getpagesize
#  include <sys/param.h>
#  ifdef EXEC_PAGESIZE
#   define getpagesize() EXEC_PAGESIZE
#  else
#   ifdef NBPG
#    ifndef CLSIZE
#     define CLSIZE 1
#    endif /* no CLSIZE */
#    define getpagesize() NBPG * CLSIZE
#   else /* no NBPG */
#    ifdef NBPC
#     define getpagesize() NBPC
#    endif /* NBPC */
#   endif /* no NBPG */
#  endif /* no EXEC_PAGESIZE */
# endif /* not getpagesize() */
#endif /* no _SC_PAGESIZE */

#endif /* not HAVE_GETPAGESIZE */
