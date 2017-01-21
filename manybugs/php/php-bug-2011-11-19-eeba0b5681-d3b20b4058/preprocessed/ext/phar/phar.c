# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
# 23 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h"
# 1 "/usr/include/time.h" 1 3 4
# 28 "/usr/include/time.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 361 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 365 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 366 "/usr/include/sys/cdefs.h" 2 3 4
# 362 "/usr/include/features.h" 2 3 4
# 385 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 386 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/time.h" 2 3 4









# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 56 "/usr/include/time.h" 3 4
# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 57 "/usr/include/time.h" 2 3 4



typedef __clock_t clock_t;



# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };








struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;





typedef __pid_t pid_t;








extern clock_t clock (void) __attribute__ ((__nothrow__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));

# 215 "/usr/include/time.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 216 "/usr/include/time.h" 2 3 4

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__));
# 230 "/usr/include/time.h" 3 4



extern struct tm *gmtime (__const time_t *__timer) __attribute__ ((__nothrow__));



extern struct tm *localtime (__const time_t *__timer) __attribute__ ((__nothrow__));





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__));



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__));





extern char *asctime (__const struct tm *__tp) __attribute__ ((__nothrow__));


extern char *ctime (__const time_t *__timer) __attribute__ ((__nothrow__));







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__));


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__));



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) __attribute__ ((__nothrow__));
# 313 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__));


extern int dysize (int __year) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 328 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__));


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     __attribute__ ((__nothrow__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__));


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__));
# 417 "/usr/include/time.h" 3 4

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_version.h" 1
# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 1
# 51 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/include/../main/php_config.h" 1
# 2423 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/include/../main/php_config.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 323 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef long int wchar_t;
# 34 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 65 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 66 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 44 "/usr/include/stdlib.h" 2 3 4
# 68 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 277 "/usr/include/stdlib.h" 3 4

extern __inline double
__attribute__ ((__nothrow__)) atof (__const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
extern __inline int
__attribute__ ((__nothrow__)) atoi (__const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline long int
__attribute__ ((__nothrow__)) atol (__const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}




__extension__ extern __inline long long int
__attribute__ ((__nothrow__)) atoll (__const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}

# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 61 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 105 "/usr/include/sys/types.h" 3 4
typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;







# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);



# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__));


__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline unsigned long long int
__attribute__ ((__nothrow__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 271 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 36 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;


typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;




typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 272 "/usr/include/sys/types.h" 2 3 4



# 321 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 531 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 554 "/usr/include/stdlib.h" 3 4






extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 712 "/usr/include/stdlib.h" 3 4





extern int system (__const char *__command) ;

# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 771 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 808 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 948 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4

# 2424 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/include/../main/php_config.h" 2
# 2439 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/include/../main/php_config.h"
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 35 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 95 "/usr/include/string.h" 3 4
extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 126 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

# 165 "/usr/include/string.h" 3 4
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4

# 235 "/usr/include/string.h" 3 4
extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 262 "/usr/include/string.h" 3 4
extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 281 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 314 "/usr/include/string.h" 3 4
extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__))

                        __attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 536 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 559 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__));


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 634 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string.h" 1 3 4
# 635 "/usr/include/string.h" 2 3 4


# 1 "/usr/include/bits/string2.h" 1 3 4
# 394 "/usr/include/bits/string2.h" 3 4
extern void *__rawmemchr (const void *__s, int __c);
# 969 "/usr/include/bits/string2.h" 3 4
extern __inline size_t __strcspn_c1 (__const char *__s, int __reject);
extern __inline size_t
__strcspn_c1 (__const char *__s, int __reject)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline size_t __strcspn_c2 (__const char *__s, int __reject1,
         int __reject2);
extern __inline size_t
__strcspn_c2 (__const char *__s, int __reject1, int __reject2)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline size_t __strcspn_c3 (__const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline size_t
__strcspn_c3 (__const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}
# 1045 "/usr/include/bits/string2.h" 3 4
extern __inline size_t __strspn_c1 (__const char *__s, int __accept);
extern __inline size_t
__strspn_c1 (__const char *__s, int __accept)
{
  register size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline size_t __strspn_c2 (__const char *__s, int __accept1,
        int __accept2);
extern __inline size_t
__strspn_c2 (__const char *__s, int __accept1, int __accept2)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline size_t __strspn_c3 (__const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline size_t
__strspn_c3 (__const char *__s, int __accept1, int __accept2, int __accept3)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}
# 1121 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strpbrk_c2 (__const char *__s, int __accept1,
         int __accept2);
extern __inline char *
__strpbrk_c2 (__const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline char *__strpbrk_c3 (__const char *__s, int __accept1,
         int __accept2, int __accept3);
extern __inline char *
__strpbrk_c3 (__const char *__s, int __accept1, int __accept2,
       int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}
# 1172 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void *)0))
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  __result = ((void *)0);
  if (*__s != '\0')
    {
      __result = __s++;
      while (*__s != '\0')
 if (*__s++ == __sep)
   {
     __s[-1] = '\0';
     break;
   }
    }
  *__nextp = __s;
  return __result;
}
# 1204 "/usr/include/bits/string2.h" 3 4
extern char *__strsep_g (char **__stringp, __const char *__delim);
# 1222 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strsep_1c (char **__s, char __reject);
extern __inline char *
__strsep_1c (char **__s, char __reject)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void *)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}

extern __inline char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}
# 1303 "/usr/include/bits/string2.h" 3 4
extern char *__strdup (__const char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 1322 "/usr/include/bits/string2.h" 3 4
extern char *__strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 638 "/usr/include/string.h" 2 3 4
# 646 "/usr/include/string.h" 3 4

# 2440 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/include/../main/php_config.h" 2
# 2450 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/include/../main/php_config.h"
# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4




# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/inf.h" 1 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/nan.h" 1 3 4
# 44 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 36 "/usr/include/bits/mathdef.h" 3 4
typedef long double float_t;

typedef long double double_t;
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) __attribute__ ((__nothrow__)); extern double __acos (double __x) __attribute__ ((__nothrow__));

extern double asin (double __x) __attribute__ ((__nothrow__)); extern double __asin (double __x) __attribute__ ((__nothrow__));

extern double atan (double __x) __attribute__ ((__nothrow__)); extern double __atan (double __x) __attribute__ ((__nothrow__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__));


extern double cos (double __x) __attribute__ ((__nothrow__)); extern double __cos (double __x) __attribute__ ((__nothrow__));

extern double sin (double __x) __attribute__ ((__nothrow__)); extern double __sin (double __x) __attribute__ ((__nothrow__));

extern double tan (double __x) __attribute__ ((__nothrow__)); extern double __tan (double __x) __attribute__ ((__nothrow__));




extern double cosh (double __x) __attribute__ ((__nothrow__)); extern double __cosh (double __x) __attribute__ ((__nothrow__));

extern double sinh (double __x) __attribute__ ((__nothrow__)); extern double __sinh (double __x) __attribute__ ((__nothrow__));

extern double tanh (double __x) __attribute__ ((__nothrow__)); extern double __tanh (double __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern double acosh (double __x) __attribute__ ((__nothrow__)); extern double __acosh (double __x) __attribute__ ((__nothrow__));

extern double asinh (double __x) __attribute__ ((__nothrow__)); extern double __asinh (double __x) __attribute__ ((__nothrow__));

extern double atanh (double __x) __attribute__ ((__nothrow__)); extern double __atanh (double __x) __attribute__ ((__nothrow__));







extern double exp (double __x) __attribute__ ((__nothrow__)); extern double __exp (double __x) __attribute__ ((__nothrow__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__));


extern double log (double __x) __attribute__ ((__nothrow__)); extern double __log (double __x) __attribute__ ((__nothrow__));


extern double log10 (double __x) __attribute__ ((__nothrow__)); extern double __log10 (double __x) __attribute__ ((__nothrow__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern double expm1 (double __x) __attribute__ ((__nothrow__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__));


extern double log1p (double __x) __attribute__ ((__nothrow__)); extern double __log1p (double __x) __attribute__ ((__nothrow__));


extern double logb (double __x) __attribute__ ((__nothrow__)); extern double __logb (double __x) __attribute__ ((__nothrow__));






extern double exp2 (double __x) __attribute__ ((__nothrow__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__));


extern double log2 (double __x) __attribute__ ((__nothrow__)); extern double __log2 (double __x) __attribute__ ((__nothrow__));








extern double pow (double __x, double __y) __attribute__ ((__nothrow__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__));


extern double sqrt (double __x) __attribute__ ((__nothrow__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__));






extern double cbrt (double __x) __attribute__ ((__nothrow__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__));








extern double ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__));




extern int __isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__));



extern double significand (double __x) __attribute__ ((__nothrow__)); extern double __significand (double __x) __attribute__ ((__nothrow__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern double nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__)); extern double __j0 (double) __attribute__ ((__nothrow__));
extern double j1 (double) __attribute__ ((__nothrow__)); extern double __j1 (double) __attribute__ ((__nothrow__));
extern double jn (int, double) __attribute__ ((__nothrow__)); extern double __jn (int, double) __attribute__ ((__nothrow__));
extern double y0 (double) __attribute__ ((__nothrow__)); extern double __y0 (double) __attribute__ ((__nothrow__));
extern double y1 (double) __attribute__ ((__nothrow__)); extern double __y1 (double) __attribute__ ((__nothrow__));
extern double yn (int, double) __attribute__ ((__nothrow__)); extern double __yn (int, double) __attribute__ ((__nothrow__));






extern double erf (double) __attribute__ ((__nothrow__)); extern double __erf (double) __attribute__ ((__nothrow__));
extern double erfc (double) __attribute__ ((__nothrow__)); extern double __erfc (double) __attribute__ ((__nothrow__));
extern double lgamma (double) __attribute__ ((__nothrow__)); extern double __lgamma (double) __attribute__ ((__nothrow__));






extern double tgamma (double) __attribute__ ((__nothrow__)); extern double __tgamma (double) __attribute__ ((__nothrow__));





extern double gamma (double) __attribute__ ((__nothrow__)); extern double __gamma (double) __attribute__ ((__nothrow__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__));







extern double rint (double __x) __attribute__ ((__nothrow__)); extern double __rint (double __x) __attribute__ ((__nothrow__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogb (double __x) __attribute__ ((__nothrow__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__));



extern double round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrint (double __x) __attribute__ ((__nothrow__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__));
extern long long int llrint (double __x) __attribute__ ((__nothrow__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__));



extern long int lround (double __x) __attribute__ ((__nothrow__)); extern long int __lround (double __x) __attribute__ ((__nothrow__));
extern long long int llround (double __x) __attribute__ ((__nothrow__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__));








extern double scalb (double __x, double __n) __attribute__ ((__nothrow__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__));
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) __attribute__ ((__nothrow__)); extern float __acosf (float __x) __attribute__ ((__nothrow__));

extern float asinf (float __x) __attribute__ ((__nothrow__)); extern float __asinf (float __x) __attribute__ ((__nothrow__));

extern float atanf (float __x) __attribute__ ((__nothrow__)); extern float __atanf (float __x) __attribute__ ((__nothrow__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__));


extern float cosf (float __x) __attribute__ ((__nothrow__)); extern float __cosf (float __x) __attribute__ ((__nothrow__));

extern float sinf (float __x) __attribute__ ((__nothrow__)); extern float __sinf (float __x) __attribute__ ((__nothrow__));

extern float tanf (float __x) __attribute__ ((__nothrow__)); extern float __tanf (float __x) __attribute__ ((__nothrow__));




extern float coshf (float __x) __attribute__ ((__nothrow__)); extern float __coshf (float __x) __attribute__ ((__nothrow__));

extern float sinhf (float __x) __attribute__ ((__nothrow__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__));

extern float tanhf (float __x) __attribute__ ((__nothrow__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern float acoshf (float __x) __attribute__ ((__nothrow__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__));

extern float asinhf (float __x) __attribute__ ((__nothrow__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__));

extern float atanhf (float __x) __attribute__ ((__nothrow__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__));







extern float expf (float __x) __attribute__ ((__nothrow__)); extern float __expf (float __x) __attribute__ ((__nothrow__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__));


extern float logf (float __x) __attribute__ ((__nothrow__)); extern float __logf (float __x) __attribute__ ((__nothrow__));


extern float log10f (float __x) __attribute__ ((__nothrow__)); extern float __log10f (float __x) __attribute__ ((__nothrow__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern float expm1f (float __x) __attribute__ ((__nothrow__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__));


extern float log1pf (float __x) __attribute__ ((__nothrow__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__));


extern float logbf (float __x) __attribute__ ((__nothrow__)); extern float __logbf (float __x) __attribute__ ((__nothrow__));






extern float exp2f (float __x) __attribute__ ((__nothrow__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__));


extern float log2f (float __x) __attribute__ ((__nothrow__)); extern float __log2f (float __x) __attribute__ ((__nothrow__));








extern float powf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__));








extern float ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__));




extern int __isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__));



extern float significandf (float __x) __attribute__ ((__nothrow__)); extern float __significandf (float __x) __attribute__ ((__nothrow__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern float nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__)); extern float __j0f (float) __attribute__ ((__nothrow__));
extern float j1f (float) __attribute__ ((__nothrow__)); extern float __j1f (float) __attribute__ ((__nothrow__));
extern float jnf (int, float) __attribute__ ((__nothrow__)); extern float __jnf (int, float) __attribute__ ((__nothrow__));
extern float y0f (float) __attribute__ ((__nothrow__)); extern float __y0f (float) __attribute__ ((__nothrow__));
extern float y1f (float) __attribute__ ((__nothrow__)); extern float __y1f (float) __attribute__ ((__nothrow__));
extern float ynf (int, float) __attribute__ ((__nothrow__)); extern float __ynf (int, float) __attribute__ ((__nothrow__));






extern float erff (float) __attribute__ ((__nothrow__)); extern float __erff (float) __attribute__ ((__nothrow__));
extern float erfcf (float) __attribute__ ((__nothrow__)); extern float __erfcf (float) __attribute__ ((__nothrow__));
extern float lgammaf (float) __attribute__ ((__nothrow__)); extern float __lgammaf (float) __attribute__ ((__nothrow__));






extern float tgammaf (float) __attribute__ ((__nothrow__)); extern float __tgammaf (float) __attribute__ ((__nothrow__));





extern float gammaf (float) __attribute__ ((__nothrow__)); extern float __gammaf (float) __attribute__ ((__nothrow__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__));







extern float rintf (float __x) __attribute__ ((__nothrow__)); extern float __rintf (float __x) __attribute__ ((__nothrow__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__));



extern float roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__));
extern long long int llrintf (float __x) __attribute__ ((__nothrow__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__));
extern long long int llroundf (float __x) __attribute__ ((__nothrow__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__));








extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__));
# 95 "/usr/include/math.h" 2 3 4
# 141 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) __attribute__ ((__nothrow__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__));

# 87 "/usr/include/bits/mathcalls.h" 3 4


extern long double acoshl (long double __x) __attribute__ ((__nothrow__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__));







extern long double expl (long double __x) __attribute__ ((__nothrow__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__));


extern long double logl (long double __x) __attribute__ ((__nothrow__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__));

# 127 "/usr/include/bits/mathcalls.h" 3 4


extern long double expm1l (long double __x) __attribute__ ((__nothrow__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__));








extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern long double nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__)); extern long double __j0l (long double) __attribute__ ((__nothrow__));
extern long double j1l (long double) __attribute__ ((__nothrow__)); extern long double __j1l (long double) __attribute__ ((__nothrow__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__));
extern long double y0l (long double) __attribute__ ((__nothrow__)); extern long double __y0l (long double) __attribute__ ((__nothrow__));
extern long double y1l (long double) __attribute__ ((__nothrow__)); extern long double __y1l (long double) __attribute__ ((__nothrow__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__));






extern long double erfl (long double) __attribute__ ((__nothrow__)); extern long double __erfl (long double) __attribute__ ((__nothrow__));
extern long double erfcl (long double) __attribute__ ((__nothrow__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__));
extern long double lgammal (long double) __attribute__ ((__nothrow__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__));






extern long double tgammal (long double) __attribute__ ((__nothrow__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__));





extern long double gammal (long double) __attribute__ ((__nothrow__)); extern long double __gammal (long double) __attribute__ ((__nothrow__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__));
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__));
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));








extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__));
# 142 "/usr/include/math.h" 2 3 4
# 157 "/usr/include/math.h" 3 4
extern int signgam;
# 198 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };
# 291 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 316 "/usr/include/math.h" 3 4
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 416 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathinline.h" 1 3 4
# 127 "/usr/include/bits/mathinline.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) __signbitf (float __x)
{
  __extension__ union { float __f; int __i; } __u = { __f: __x };
  return __u.__i < 0;
}
extern __inline int
__attribute__ ((__nothrow__)) __signbit (double __x)
{
  __extension__ union { double __d; int __i[2]; } __u = { __d: __x };
  return __u.__i[1] < 0;
}
extern __inline int
__attribute__ ((__nothrow__)) __signbitl (long double __x)
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}
# 295 "/usr/include/bits/mathinline.h" 3 4
extern __inline double __sgn (double) __attribute__ ((__nothrow__)); extern __inline double __attribute__ ((__nothrow__)) __sgn (double __x) { return __x == 0.0 ? 0.0 : (__x > 0.0 ? 1.0 : -1.0); } extern __inline float __sgnf (float) __attribute__ ((__nothrow__)); extern __inline float __attribute__ ((__nothrow__)) __sgnf (float __x) { return __x == 0.0 ? 0.0 : (__x > 0.0 ? 1.0 : -1.0); } extern __inline long double __sgnl (long double) __attribute__ ((__nothrow__)); extern __inline long double __attribute__ ((__nothrow__)) __sgnl (long double __x) { return __x == 0.0 ? 0.0 : (__x > 0.0 ? 1.0 : -1.0); }
# 437 "/usr/include/bits/mathinline.h" 3 4
extern __inline long double __attribute__ ((__nothrow__)) __atan2l (long double __y, long double __x) { return __builtin_atan2l (__y, __x); }
# 477 "/usr/include/bits/mathinline.h" 3 4
extern __inline double __attribute__ ((__nothrow__)) fabs (double __x) { return __builtin_fabs (__x); }

extern __inline float __attribute__ ((__nothrow__)) fabsf (float __x) { return __builtin_fabsf (__x); }
extern __inline long double __attribute__ ((__nothrow__)) fabsl (long double __x) { return __builtin_fabsl (__x); }

extern __inline long double __attribute__ ((__nothrow__)) __fabsl (long double __x) { return __builtin_fabsl (__x); }
# 510 "/usr/include/bits/mathinline.h" 3 4
extern __inline long double __sgn1l (long double) __attribute__ ((__nothrow__)); extern __inline long double __attribute__ ((__nothrow__)) __sgn1l (long double __x) { __extension__ union { long double __xld; unsigned int __xi[3]; } __n = { __xld: __x }; __n.__xi[2] = (__n.__xi[2] & 0x8000) | 0x3fff; __n.__xi[1] = 0x80000000; __n.__xi[0] = 0; return __n.__xld; }
# 534 "/usr/include/bits/mathinline.h" 3 4
extern __inline double __attribute__ ((__nothrow__)) floor (double __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0400, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; } extern __inline float __attribute__ ((__nothrow__)) floorf (float __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0400, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; } extern __inline long double __attribute__ ((__nothrow__)) floorl (long double __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0400, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; }
# 552 "/usr/include/bits/mathinline.h" 3 4
extern __inline double __attribute__ ((__nothrow__)) ceil (double __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0800, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; } extern __inline float __attribute__ ((__nothrow__)) ceilf (float __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0800, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; } extern __inline long double __attribute__ ((__nothrow__)) ceill (long double __x) { register long double __value; register int __ignore; unsigned short int __cw; unsigned short int __cwtmp; __asm __volatile ("fnstcw %3\n\t" "movzwl %3, %1\n\t" "andl $0xf3ff, %1\n\t" "orl $0x0800, %1\n\t" "movw %w1, %2\n\t" "fldcw %2\n\t" "frndint\n\t" "fldcw %3" : "=t" (__value), "=&q" (__ignore), "=m" (__cwtmp), "=m" (__cw) : "0" (__x)); return __value; }
# 671 "/usr/include/bits/mathinline.h" 3 4
extern __inline long int
__attribute__ ((__nothrow__)) lrintf (float __x)
{
  long int __lrintres; __asm__ __volatile__ ("fistpl %0" : "=m" (__lrintres) : "t" (__x) : "st"); return __lrintres;
}
extern __inline long int
__attribute__ ((__nothrow__)) lrint (double __x)
{
  long int __lrintres; __asm__ __volatile__ ("fistpl %0" : "=m" (__lrintres) : "t" (__x) : "st"); return __lrintres;
}
extern __inline long int
__attribute__ ((__nothrow__)) lrintl (long double __x)
{
  long int __lrintres; __asm__ __volatile__ ("fistpl %0" : "=m" (__lrintres) : "t" (__x) : "st"); return __lrintres;
}
# 694 "/usr/include/bits/mathinline.h" 3 4
extern __inline long long int
__attribute__ ((__nothrow__)) llrintf (float __x)
{
  long long int __llrintres; __asm__ __volatile__ ("fistpll %0" : "=m" (__llrintres) : "t" (__x) : "st"); return __llrintres;
}
extern __inline long long int
__attribute__ ((__nothrow__)) llrint (double __x)
{
  long long int __llrintres; __asm__ __volatile__ ("fistpll %0" : "=m" (__llrintres) : "t" (__x) : "st"); return __llrintres;
}
extern __inline long long int
__attribute__ ((__nothrow__)) llrintl (long double __x)
{
  long long int __llrintres; __asm__ __volatile__ ("fistpll %0" : "=m" (__llrintres) : "t" (__x) : "st"); return __llrintres;
}
# 731 "/usr/include/bits/mathinline.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) __finite (double __x)
{
  return (__extension__
   (((((union { double __d; int __i[2]; }) {__d: __x}).__i[1]
      | 0x800fffffu) + 1) >> 31));
}
# 417 "/usr/include/math.h" 2 3 4
# 472 "/usr/include/math.h" 3 4

# 2451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/include/../main/php_config.h" 2
# 2 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_config.h" 2
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2
# 68 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h"
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 490 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 109 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 161 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 162 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__));








extern FILE *tmpfile (void) ;
# 208 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 226 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 251 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 265 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 294 "/usr/include/stdio.h" 3 4

# 305 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
# 318 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 416 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
# 447 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__))

                      ;
# 467 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 498 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 526 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 554 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 565 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 598 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 660 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;

# 732 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 768 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 787 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 810 "/usr/include/stdio.h" 3 4

# 819 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 849 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 868 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 908 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 929 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 36 "/usr/include/bits/stdio.h" 3 4
extern __inline int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
# 125 "/usr/include/bits/stdio.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline int
__attribute__ ((__nothrow__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 930 "/usr/include/stdio.h" 2 3 4
# 938 "/usr/include/stdio.h" 3 4

# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 76 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2



# 1 "/usr/include/dlfcn.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 26 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/bits/dlfcn.h" 1 3 4
# 29 "/usr/include/dlfcn.h" 2 3 4
# 53 "/usr/include/dlfcn.h" 3 4




extern void *dlopen (__const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      __const char *__restrict __name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 83 "/usr/include/dlfcn.h" 3 4
extern char *dlerror (void) __attribute__ ((__nothrow__));
# 189 "/usr/include/dlfcn.h" 3 4

# 80 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2
# 236 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_errors.h" 1
# 237 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_alloc.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_alloc.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/../TSRM/TSRM.h" 1
# 20 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/../TSRM/TSRM.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/include/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_config.h" 2
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/../TSRM/TSRM.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_alloc.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_alloc.h" 2
# 44 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_alloc.h"
typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 const char *filename;
 uint lineno;
 const char *orig_filename;
 uint orig_lineno;
} zend_leak_info;



__attribute__ ((visibility("default"))) char *zend_strndup(const char *s, unsigned int length) __attribute__ ((__malloc__));

__attribute__ ((visibility("default"))) void *_emalloc(size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_safe_emalloc(size_t nmemb, size_t size, size_t offset ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_safe_malloc(size_t nmemb, size_t size, size_t offset) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _efree(void *ptr );
__attribute__ ((visibility("default"))) void *_ecalloc(size_t nmemb, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void *_erealloc(void *ptr, size_t size, int allow_failure );
__attribute__ ((visibility("default"))) void *_safe_erealloc(void *ptr, size_t nmemb, size_t size, size_t offset );
__attribute__ ((visibility("default"))) void *_safe_realloc(void *ptr, size_t nmemb, size_t size, size_t offset);
__attribute__ ((visibility("default"))) char *_estrdup(const char *s ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) char *_estrndup(const char *s, unsigned int length ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) size_t _zend_mem_block_size(void *ptr );
# 93 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_alloc.h"
inline static void * __zend_malloc(size_t len)
{
 void *tmp = malloc(len);
 if (tmp) {
  return tmp;
 }
 fprintf(stderr, "Out of memory\n");
 exit(1);
}

inline static void * __zend_calloc(size_t nmemb, size_t len)
{
 void *tmp = _safe_malloc(nmemb, len, 0);
 memset(tmp, 0, nmemb * len);
 return tmp;
}

inline static void * __zend_realloc(void *p, size_t len)
{
 p = realloc(p, len);
 if (p) {
  return p;
 }
 fprintf(stderr, "Out of memory\n");
 exit(1);
}
# 142 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 159 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );


# 191 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 211 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_alloc.h"
typedef struct _zend_mm_storage zend_mm_storage;

typedef struct _zend_mm_segment {
 size_t size;
 struct _zend_mm_segment *next_segment;
} zend_mm_segment;

typedef struct _zend_mm_mem_handlers {
 const char *name;
 zend_mm_storage* (*init)(void *params);
 void (*dtor)(zend_mm_storage *storage);
 void (*compact)(zend_mm_storage *storage);
 zend_mm_segment* (*_alloc)(zend_mm_storage *storage, size_t size);
 zend_mm_segment* (*_realloc)(zend_mm_storage *storage, zend_mm_segment *ptr, size_t size);
 void (*_free)(zend_mm_storage *storage, zend_mm_segment *ptr);
} zend_mm_mem_handlers;

struct _zend_mm_storage {
 const zend_mm_mem_handlers *handlers;
 void *data;
};

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup_ex(const zend_mm_mem_handlers *handlers, size_t block_size, size_t reserve_size, int internal, void *params);
__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_set_heap(zend_mm_heap *new_heap );
__attribute__ ((visibility("default"))) zend_mm_storage *zend_mm_get_storage(zend_mm_heap *heap);

__attribute__ ((visibility("default"))) void zend_mm_set_custom_handlers(zend_mm_heap *heap,
                                          void* (*_malloc)(size_t),
                                          void (*_free)(void*),
                                          void* (*_realloc)(void*, size_t));
# 238 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_types.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_types.h"
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;

typedef struct _zend_object_value {
 zend_object_handle handle;
 const zend_object_handlers *handlers;
} zend_object_value;
# 240 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_string.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_string.h"
__attribute__ ((visibility("default"))) extern const char *(*zend_new_interned_string)(const char *str, int len, int free_src );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 241 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2


# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 11 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 122 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 145 "/usr/include/limits.h" 3 4
# 1 "/usr/include/bits/posix1_lim.h" 1 3 4
# 157 "/usr/include/bits/posix1_lim.h" 3 4
# 1 "/usr/include/bits/local_lim.h" 1 3 4
# 39 "/usr/include/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 40 "/usr/include/bits/local_lim.h" 2 3 4
# 158 "/usr/include/bits/posix1_lim.h" 2 3 4
# 146 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/bits/posix2_lim.h" 1 3 4
# 150 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 2 3 4
# 244 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2
# 256 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h"
static const char long_min_digits[] = "2147483648";
# 271 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_hash.h" 1
# 45 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_hash.h"
typedef ulong (*hash_func_t)(const char *arKey, uint nKeyLength);
typedef int (*compare_func_t)(const void *, const void * );
typedef void (*sort_func_t)(void *, size_t, register size_t, compare_func_t );
typedef void (*dtor_func_t)(void *pDest);
typedef void (*copy_ctor_func_t)(void *pElement);
typedef void (*copy_ctor_param_func_t)(void *pElement, void *pParam);

struct _hashtable;

typedef struct bucket {
 ulong h;
 uint nKeyLength;
 void *pData;
 void *pDataPtr;
 struct bucket *pListNext;
 struct bucket *pListLast;
 struct bucket *pNext;
 struct bucket *pLast;
 const char *arKey;
} Bucket;

typedef struct _hashtable {
 uint nTableSize;
 uint nTableMask;
 uint nNumOfElements;
 ulong nNextFreeElement;
 Bucket *pInternalPointer;
 Bucket *pListHead;
 Bucket *pListTail;
 Bucket **arBuckets;
 dtor_func_t pDestructor;
 zend_bool persistent;
 unsigned char nApplyCount;
 zend_bool bApplyProtection;



} HashTable;


typedef struct _zend_hash_key {
 const char *arKey;
 uint nKeyLength;
 ulong h;
} zend_hash_key;


typedef zend_bool (*merge_checker_func_t)(HashTable *target_ht, void *source_data, zend_hash_key *hash_key, void *pParam);

typedef Bucket* HashPosition;




__attribute__ ((visibility("default"))) int _zend_hash_init(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_hash_init_ex(HashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_hash_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_clean(HashTable *ht);




__attribute__ ((visibility("default"))) int _zend_hash_add_or_update(HashTable *ht, const char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_hash_quick_add_or_update(HashTable *ht, const char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_hash_index_update_or_next_insert(HashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int zend_hash_add_empty_element(HashTable *ht, const char *arKey, uint nKeyLength);






typedef int (*apply_func_t)(void *pDest );
typedef int (*apply_func_arg_t)(void *pDest, void *argument );
typedef int (*apply_func_args_t)(void *pDest , int num_args, va_list args, zend_hash_key *hash_key);

__attribute__ ((visibility("default"))) void zend_hash_graceful_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_graceful_reverse_destroy(HashTable *ht);
__attribute__ ((visibility("default"))) void zend_hash_apply(HashTable *ht, apply_func_t apply_func );
__attribute__ ((visibility("default"))) void zend_hash_apply_with_argument(HashTable *ht, apply_func_arg_t apply_func, void * );
__attribute__ ((visibility("default"))) void zend_hash_apply_with_arguments(HashTable *ht , apply_func_args_t apply_func, int, ...);







__attribute__ ((visibility("default"))) void zend_hash_reverse_apply(HashTable *ht, apply_func_t apply_func );



__attribute__ ((visibility("default"))) int zend_hash_del_key_or_index(HashTable *ht, const char *arKey, uint nKeyLength, ulong h, int flag);







__attribute__ ((visibility("default"))) ulong zend_get_hash_value(const char *arKey, uint nKeyLength);


__attribute__ ((visibility("default"))) int zend_hash_find(const HashTable *ht, const char *arKey, uint nKeyLength, void **pData);
__attribute__ ((visibility("default"))) int zend_hash_quick_find(const HashTable *ht, const char *arKey, uint nKeyLength, ulong h, void **pData);
__attribute__ ((visibility("default"))) int zend_hash_index_find(const HashTable *ht, ulong h, void **pData);


__attribute__ ((visibility("default"))) int zend_hash_exists(const HashTable *ht, const char *arKey, uint nKeyLength);
__attribute__ ((visibility("default"))) int zend_hash_quick_exists(const HashTable *ht, const char *arKey, uint nKeyLength, ulong h);
__attribute__ ((visibility("default"))) int zend_hash_index_exists(const HashTable *ht, ulong h);
__attribute__ ((visibility("default"))) ulong zend_hash_next_free_element(const HashTable *ht);





__attribute__ ((visibility("default"))) int zend_hash_move_forward_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_move_backwards_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_ex(const HashTable *ht, char **str_index, uint *str_length, ulong *num_index, zend_bool duplicate, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_key_type_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_get_current_data_ex(HashTable *ht, void **pData, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_reset_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) void zend_hash_internal_pointer_end_ex(HashTable *ht, HashPosition *pos);
__attribute__ ((visibility("default"))) int zend_hash_update_current_key_ex(HashTable *ht, int key_type, const char *str_index, uint str_length, ulong num_index, int mode, HashPosition *pos);

typedef struct _HashPointer {
 HashPosition pos;
 ulong h;
} HashPointer;

__attribute__ ((visibility("default"))) int zend_hash_get_pointer(const HashTable *ht, HashPointer *ptr);
__attribute__ ((visibility("default"))) int zend_hash_set_pointer(HashTable *ht, const HashPointer *ptr);
# 214 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag, void **pData );




__attribute__ ((visibility("default"))) int zend_hash_num_elements(const HashTable *ht);

__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);
# 261 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_hash.h"
static inline ulong zend_inline_hash_func(const char *arKey, uint nKeyLength)
{
 register ulong hash = 5381;


 for (; nKeyLength >= 8; nKeyLength -= 8) {
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
  hash = ((hash << 5) + hash) + *arKey++;
 }
 switch (nKeyLength) {
  case 7: hash = ((hash << 5) + hash) + *arKey++;
  case 6: hash = ((hash << 5) + hash) + *arKey++;
  case 5: hash = ((hash << 5) + hash) + *arKey++;
  case 4: hash = ((hash << 5) + hash) + *arKey++;
  case 3: hash = ((hash << 5) + hash) + *arKey++;
  case 2: hash = ((hash << 5) + hash) + *arKey++;
  case 1: hash = ((hash << 5) + hash) + *arKey++; break;
  case 0: break;

 }
 return hash;
}


__attribute__ ((visibility("default"))) ulong zend_hash_func(const char *arKey, uint nKeyLength);








# 348 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_hash.h"
static inline int zend_symtable_update(HashTable *ht, const char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest)
 {
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 2147483647L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 2147483647L) { break; } return _zend_hash_index_update_or_next_insert(ht, idx, pData, nDataSize, pDest, (1<<0) ); } } } while (0); } while (0);
 return _zend_hash_add_or_update(ht, arKey, nKeyLength, pData, nDataSize, pDest, (1<<0) );
}


static inline int zend_symtable_del(HashTable *ht, const char *arKey, uint nKeyLength)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 2147483647L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 2147483647L) { break; } return zend_hash_del_key_or_index(ht, ((void *)0), 0, idx, 1); } } } while (0); } while (0);
 return zend_hash_del_key_or_index(ht, arKey, nKeyLength, 0, 0);
}


static inline int zend_symtable_find(HashTable *ht, const char *arKey, uint nKeyLength, void **pData)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 2147483647L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 2147483647L) { break; } return zend_hash_index_find(ht, idx, pData); } } } while (0); } while (0);
 return zend_hash_find(ht, arKey, nKeyLength, pData);
}


static inline int zend_symtable_exists(HashTable *ht, const char *arKey, uint nKeyLength)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 2147483647L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 2147483647L) { break; } return zend_hash_index_exists(ht, idx); } } } while (0); } while (0);
 return zend_hash_exists(ht, arKey, nKeyLength);
}

static inline int zend_symtable_update_current_key_ex(HashTable *ht, const char *arKey, uint nKeyLength, int mode, HashPosition *pos)
{
 do { ulong idx; do { register const char *tmp = arKey; if (*tmp == '-') { tmp++; } if (*tmp >= '0' && *tmp <= '9') { const char *end = arKey + nKeyLength - 1; if ((*end != '\0') || (*tmp == '0' && nKeyLength > 2) || (end - tmp > 11 - 1) || (4 == 4 && end - tmp == 11 - 1 && *tmp > '2')) { break; } idx = (*tmp - '0'); while (++tmp != end && *tmp >= '0' && *tmp <= '9') { idx = (idx * 10) + (*tmp - '0'); } if (tmp == end) { if (*arKey == '-') { if (idx-1 > 2147483647L) { break; } idx = (ulong)(-(long)idx); } else if (idx > 2147483647L) { break; } return zend_hash_update_current_key_ex(ht, 2, ((void *)0), 0, idx, mode, pos); } } } while (0); } while (0);
 return zend_hash_update_current_key_ex(ht, 1, arKey, nKeyLength, 0, mode, pos);
}
# 272 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_ts_hash.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_ts_hash.h"
typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






__attribute__ ((visibility("default"))) int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_ts_hash_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_ts_hash.h"
__attribute__ ((visibility("default"))) int _zend_ts_hash_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_ts_hash_quick_add_or_update(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int _zend_ts_hash_index_update_or_next_insert(TsHashTable *ht, ulong h, void *pData, uint nDataSize, void **pDest, int flag );





__attribute__ ((visibility("default"))) int zend_ts_hash_add_empty_element(TsHashTable *ht, char *arKey, uint nKeyLength);

__attribute__ ((visibility("default"))) void zend_ts_hash_graceful_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_apply(TsHashTable *ht, apply_func_t apply_func );
__attribute__ ((visibility("default"))) void zend_ts_hash_apply_with_argument(TsHashTable *ht, apply_func_arg_t apply_func, void * );
__attribute__ ((visibility("default"))) void zend_ts_hash_apply_with_arguments(TsHashTable *ht , apply_func_args_t apply_func, int, ...);

__attribute__ ((visibility("default"))) void zend_ts_hash_reverse_apply(TsHashTable *ht, apply_func_t apply_func );



__attribute__ ((visibility("default"))) int zend_ts_hash_del_key_or_index(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, int flag);





__attribute__ ((visibility("default"))) ulong zend_ts_get_hash_value(TsHashTable *ht, char *arKey, uint nKeyLength);


__attribute__ ((visibility("default"))) int zend_ts_hash_find(TsHashTable *ht, char *arKey, uint nKeyLength, void **pData);
__attribute__ ((visibility("default"))) int zend_ts_hash_quick_find(TsHashTable *ht, char *arKey, uint nKeyLength, ulong h, void **pData);
__attribute__ ((visibility("default"))) int zend_ts_hash_index_find(TsHashTable *ht, ulong h, void **pData);


__attribute__ ((visibility("default"))) int zend_ts_hash_exists(TsHashTable *ht, char *arKey, uint nKeyLength);
__attribute__ ((visibility("default"))) int zend_ts_hash_index_exists(TsHashTable *ht, ulong h);


__attribute__ ((visibility("default"))) void zend_ts_hash_copy(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void zend_ts_hash_copy_to_hash(HashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void zend_ts_hash_merge(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite);
__attribute__ ((visibility("default"))) void zend_ts_hash_merge_ex(TsHashTable *target, TsHashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_ts_hash_sort(TsHashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_ts_hash_compare(TsHashTable *ht1, TsHashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_ts_hash_minmax(TsHashTable *ht, compare_func_t compar, int flag, void **pData );

__attribute__ ((visibility("default"))) int zend_ts_hash_num_elements(TsHashTable *ht);

__attribute__ ((visibility("default"))) int zend_ts_hash_rehash(TsHashTable *ht);

__attribute__ ((visibility("default"))) ulong zend_ts_hash_func(char *arKey, uint nKeyLength);








# 273 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_llist.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_llist.h"
typedef struct _zend_llist_element {
 struct _zend_llist_element *next;
 struct _zend_llist_element *prev;
 char data[1];
} zend_llist_element;

typedef void (*llist_dtor_func_t)(void *);
typedef int (*llist_compare_func_t)(const zend_llist_element **, const zend_llist_element ** );
typedef void (*llist_apply_with_args_func_t)(void *data, int num_args, va_list args );
typedef void (*llist_apply_with_arg_func_t)(void *data, void *arg );
typedef void (*llist_apply_func_t)(void * );

typedef struct _zend_llist {
 zend_llist_element *head;
 zend_llist_element *tail;
 size_t count;
 size_t size;
 llist_dtor_func_t dtor;
 unsigned char persistent;
 zend_llist_element *traverse_ptr;
} zend_llist;

typedef zend_llist_element* zend_llist_position;


__attribute__ ((visibility("default"))) void zend_llist_init(zend_llist *l, size_t size, llist_dtor_func_t dtor, unsigned char persistent);
__attribute__ ((visibility("default"))) void zend_llist_add_element(zend_llist *l, void *element);
__attribute__ ((visibility("default"))) void zend_llist_prepend_element(zend_llist *l, void *element);
__attribute__ ((visibility("default"))) void zend_llist_del_element(zend_llist *l, void *element, int (*compare)(void *element1, void *element2));
__attribute__ ((visibility("default"))) void zend_llist_destroy(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_clean(zend_llist *l);
__attribute__ ((visibility("default"))) void *zend_llist_remove_tail(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_copy(zend_llist *dst, zend_llist *src);
__attribute__ ((visibility("default"))) void zend_llist_apply(zend_llist *l, llist_apply_func_t func );
__attribute__ ((visibility("default"))) void zend_llist_apply_with_del(zend_llist *l, int (*func)(void *data));
__attribute__ ((visibility("default"))) void zend_llist_apply_with_argument(zend_llist *l, llist_apply_with_arg_func_t func, void *arg );
__attribute__ ((visibility("default"))) void zend_llist_apply_with_arguments(zend_llist *l, llist_apply_with_args_func_t func , int num_args, ...);
__attribute__ ((visibility("default"))) int zend_llist_count(zend_llist *l);
__attribute__ ((visibility("default"))) void zend_llist_sort(zend_llist *l, llist_compare_func_t comp_func );


__attribute__ ((visibility("default"))) void *zend_llist_get_first_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_last_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_next_ex(zend_llist *l, zend_llist_position *pos);
__attribute__ ((visibility("default"))) void *zend_llist_get_prev_ex(zend_llist *l, zend_llist_position *pos);







# 274 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2





void zend_error_noreturn(int type, const char *format, ...) __attribute__ ((noreturn));







typedef struct _zval_struct zval;
typedef struct _zend_class_entry zend_class_entry;

typedef struct _zend_guard {
 zend_bool in_get;
 zend_bool in_set;
 zend_bool in_unset;
 zend_bool in_isset;
 zend_bool dummy;
} zend_guard;

typedef struct _zend_object {
 zend_class_entry *ce;
 HashTable *properties;
 zval **properties_table;
 HashTable *guards;
} zend_object;

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_object_handlers.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;
struct _zend_literal;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, const struct _zend_literal *key );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 46 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_object_handlers.h"
typedef void (*zend_object_write_property_t)(zval *object, zval *member, zval *value, const struct _zend_literal *key );


typedef void (*zend_object_write_dimension_t)(zval *object, zval *offset, zval *value );



typedef zval **(*zend_object_get_property_ptr_ptr_t)(zval *object, zval *member, const struct _zend_literal *key );



typedef void (*zend_object_set_t)(zval **object, zval *value );




typedef zval* (*zend_object_get_t)(zval *object );







typedef int (*zend_object_has_property_t)(zval *object, zval *member, int has_set_exists, const struct _zend_literal *key );


typedef int (*zend_object_has_dimension_t)(zval *object, zval *member, int check_empty );


typedef void (*zend_object_unset_property_t)(zval *object, zval *member, const struct _zend_literal *key );


typedef void (*zend_object_unset_dimension_t)(zval *object, zval *offset );


typedef HashTable *(*zend_object_get_properties_t)(zval *object );

typedef HashTable *(*zend_object_get_debug_info_t)(zval *object, int *is_temp );





typedef int (*zend_object_call_method_t)(const char *method, int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
typedef union _zend_function *(*zend_object_get_method_t)(zval **object_ptr, char *method, int method_len, const struct _zend_literal *key );
typedef union _zend_function *(*zend_object_get_constructor_t)(zval *object );


typedef void (*zend_object_add_ref_t)(zval *object );
typedef void (*zend_object_del_ref_t)(zval *object );
typedef void (*zend_object_delete_obj_t)(zval *object );
typedef zend_object_value (*zend_object_clone_obj_t)(zval *object );

typedef zend_class_entry *(*zend_object_get_class_entry_t)(const zval *object );
typedef int (*zend_object_get_class_name_t)(const zval *object, const char **class_name, zend_uint *class_name_len, int parent );
typedef int (*zend_object_compare_t)(zval *object1, zval *object2 );



typedef int (*zend_object_cast_t)(zval *readobj, zval *retval, int type );



typedef int (*zend_object_count_elements_t)(zval *object, long *count );

typedef int (*zend_object_get_closure_t)(zval *obj, zend_class_entry **ce_ptr, union _zend_function **fptr_ptr, zval **zobj_ptr );

typedef HashTable *(*zend_object_get_gc_t)(zval *object, zval ***table, int *n );

struct _zend_object_handlers {

 zend_object_add_ref_t add_ref;
 zend_object_del_ref_t del_ref;
 zend_object_clone_obj_t clone_obj;

 zend_object_read_property_t read_property;
 zend_object_write_property_t write_property;
 zend_object_read_dimension_t read_dimension;
 zend_object_write_dimension_t write_dimension;
 zend_object_get_property_ptr_ptr_t get_property_ptr_ptr;
 zend_object_get_t get;
 zend_object_set_t set;
 zend_object_has_property_t has_property;
 zend_object_unset_property_t unset_property;
 zend_object_has_dimension_t has_dimension;
 zend_object_unset_dimension_t unset_dimension;
 zend_object_get_properties_t get_properties;
 zend_object_get_method_t get_method;
 zend_object_call_method_t call_method;
 zend_object_get_constructor_t get_constructor;
 zend_object_get_class_entry_t get_class_entry;
 zend_object_get_class_name_t get_class_name;
 zend_object_compare_t compare_objects;
 zend_object_cast_t cast_object;
 zend_object_count_elements_t count_elements;
 zend_object_get_debug_info_t get_debug_info;
 zend_object_get_closure_t get_closure;
 zend_object_get_gc_t get_gc;
};

extern __attribute__ ((visibility("default"))) zend_object_handlers std_object_handlers;


__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_static_method(zend_class_entry *ce, const char *function_name_strval, int function_name_strlen, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) zval **zend_std_get_static_property(zend_class_entry *ce, const char *property_name, int property_name_len, zend_bool silent, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) zend_bool zend_std_unset_static_property(zend_class_entry *ce, const char *property_name, int property_name_len, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_constructor(zval *object );
__attribute__ ((visibility("default"))) struct _zend_property_info *zend_get_property_info(zend_class_entry *ce, zval *member, int silent );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_properties(zval *object );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_debug_info(zval *object, int *is_temp );
__attribute__ ((visibility("default"))) int zend_std_cast_object_tostring(zval *readobj, zval *writeobj, int type );
__attribute__ ((visibility("default"))) void zend_std_write_property(zval *object, zval *member, zval *value, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) void rebuild_object_properties(zend_object *zobj);





__attribute__ ((visibility("default"))) int zend_check_private(union _zend_function *fbc, zend_class_entry *ce, char *function_name_strval, int function_name_strlen );

__attribute__ ((visibility("default"))) int zend_check_protected(zend_class_entry *ce, zend_class_entry *scope);

__attribute__ ((visibility("default"))) int zend_check_property_access(zend_object *zobj, const char *prop_info_name, int prop_info_name_len );

__attribute__ ((visibility("default"))) void zend_std_call_user_call(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

# 306 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2

typedef union _zvalue_value {
 long lval;
 double dval;
 struct {
  char *val;
  int len;
 } str;
 HashTable *ht;
 zend_object_value obj;
} zvalue_value;

struct _zval_struct {

 zvalue_value value;
 zend_uint refcount__gc;
 zend_uchar type;
 zend_uchar is_ref__gc;
};
# 378 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h"
static inline __attribute__((always_inline)) zend_uint zval_refcount_p(zval* pz) {
 return pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_uint zval_set_refcount_p(zval* pz, zend_uint rc) {
 return pz->refcount__gc = rc;
}

static inline __attribute__((always_inline)) zend_uint zval_addref_p(zval* pz) {
 return ++pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_uint zval_delref_p(zval* pz) {
 return --pz->refcount__gc;
}

static inline __attribute__((always_inline)) zend_bool zval_isref_p(zval* pz) {
 return pz->is_ref__gc;
}

static inline __attribute__((always_inline)) zend_bool zval_set_isref_p(zval* pz) {
 return pz->is_ref__gc = 1;
}

static inline __attribute__((always_inline)) zend_bool zval_unset_isref_p(zval* pz) {
 return pz->is_ref__gc = 0;
}

static inline __attribute__((always_inline)) zend_bool zval_set_isref_to_p(zval* pz, zend_bool isref) {
 return pz->is_ref__gc = isref;
}





union _zend_function;

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_iterators.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_iterators.h"
typedef struct _zend_object_iterator zend_object_iterator;

typedef struct _zend_object_iterator_funcs {

 void (*dtor)(zend_object_iterator *iter );


 int (*valid)(zend_object_iterator *iter );


 void (*get_current_data)(zend_object_iterator *iter, zval ***data );


 int (*get_current_key)(zend_object_iterator *iter, char **str_key, uint *str_key_len, ulong *int_key );


 void (*move_forward)(zend_object_iterator *iter );


 void (*rewind)(zend_object_iterator *iter );


 void (*invalidate_current)(zend_object_iterator *iter );
} zend_object_iterator_funcs;

struct _zend_object_iterator {
 void *data;
 zend_object_iterator_funcs *funcs;
 ulong index;
};

typedef struct _zend_class_iterator_funcs {
 zend_object_iterator_funcs *funcs;
 union _zend_function *zf_new_iterator;
 union _zend_function *zf_valid;
 union _zend_function *zf_current;
 union _zend_function *zf_key;
 union _zend_function *zf_next;
 union _zend_function *zf_rewind;
} zend_class_iterator_funcs;

enum zend_object_iterator_kind {
 ZEND_ITER_INVALID,
 ZEND_ITER_PLAIN_ARRAY,
 ZEND_ITER_PLAIN_OBJECT,
 ZEND_ITER_OBJECT
};



__attribute__ ((visibility("default"))) enum zend_object_iterator_kind zend_iterator_unwrap(zval *array_ptr, zend_object_iterator **iter );


__attribute__ ((visibility("default"))) zval *zend_iterator_wrap(zend_object_iterator *iter );

__attribute__ ((visibility("default"))) void zend_register_iterator_wrapper(void);

# 417 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2

struct _zend_serialize_data;
struct _zend_unserialize_data;

typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;

struct _zend_trait_method_reference {
 const char* method_name;
 unsigned int mname_len;

 zend_class_entry *ce;

 const char* class_name;
 unsigned int cname_len;
};
typedef struct _zend_trait_method_reference zend_trait_method_reference;

struct _zend_trait_precedence {
 zend_trait_method_reference *trait_method;

 zend_class_entry** exclude_from_classes;

 union _zend_function* function;
};
typedef struct _zend_trait_precedence zend_trait_precedence;

struct _zend_trait_alias {
 zend_trait_method_reference *trait_method;




 const char* alias;
 unsigned int alias_len;




 zend_uint modifiers;

 union _zend_function* function;
};
typedef struct _zend_trait_alias zend_trait_alias;

struct _zend_class_entry {
 char type;
 const char *name;
 zend_uint name_length;
 struct _zend_class_entry *parent;
 int refcount;
 zend_uint ce_flags;

 HashTable function_table;
 HashTable properties_info;
 zval **default_properties_table;
 zval **default_static_members_table;
 zval **static_members_table;
 HashTable constants_table;
 int default_properties_count;
 int default_static_members_count;

 union _zend_function *constructor;
 union _zend_function *destructor;
 union _zend_function *clone;
 union _zend_function *__get;
 union _zend_function *__set;
 union _zend_function *__unset;
 union _zend_function *__isset;
 union _zend_function *__call;
 union _zend_function *__callstatic;
 union _zend_function *__tostring;
 union _zend_function *serialize_func;
 union _zend_function *unserialize_func;

 zend_class_iterator_funcs iterator_funcs;


 zend_object_value (*create_object)(zend_class_entry *class_type );
 zend_object_iterator *(*get_iterator)(zend_class_entry *ce, zval *object, int by_ref );
 int (*interface_gets_implemented)(zend_class_entry *iface, zend_class_entry *class_type );
 union _zend_function *(*get_static_method)(zend_class_entry *ce, char* method, int method_len );


 int (*serialize)(zval *object, unsigned char **buffer, zend_uint *buf_len, zend_serialize_data *data );
 int (*unserialize)(zval **object, zend_class_entry *ce, const unsigned char *buf, zend_uint buf_len, zend_unserialize_data *data );

 zend_class_entry **interfaces;
 zend_uint num_interfaces;

 zend_class_entry **traits;
 zend_uint num_traits;
 zend_trait_alias **trait_aliases;
 zend_trait_precedence **trait_precedences;

 union {
  struct {
   const char *filename;
   zend_uint line_start;
   zend_uint line_end;
   const char *doc_comment;
   zend_uint doc_comment_len;
  } user;
  struct {
   const struct _zend_function_entry *builtin_functions;
   struct _zend_module_entry *module;
  } internal;
 } info;
};

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_stream.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_stream.h"
typedef size_t (*zend_stream_fsizer_t)(void* handle );
typedef size_t (*zend_stream_reader_t)(void* handle, char *buf, size_t len );
typedef void (*zend_stream_closer_t)(void* handle );



typedef enum {
 ZEND_HANDLE_FILENAME,
 ZEND_HANDLE_FD,
 ZEND_HANDLE_FP,
 ZEND_HANDLE_STREAM,
 ZEND_HANDLE_MAPPED
} zend_stream_type;

typedef struct _zend_mmap {
 size_t len;
 size_t pos;
 void *map;
 char *buf;
 void *old_handle;
 zend_stream_closer_t old_closer;
} zend_mmap;

typedef struct _zend_stream {
 void *handle;
 int isatty;
 zend_mmap mmap;
 zend_stream_reader_t reader;
 zend_stream_fsizer_t fsizer;
 zend_stream_closer_t closer;
} zend_stream;

typedef struct _zend_file_handle {
 zend_stream_type type;
 const char *filename;
 char *opened_path;
 union {
  int fd;
  FILE *fp;
  zend_stream stream;
 } handle;
 zend_bool free_filename;
} zend_file_handle;


__attribute__ ((visibility("default"))) int zend_stream_open(const char *filename, zend_file_handle *handle );
__attribute__ ((visibility("default"))) int zend_stream_fixup(zend_file_handle *file_handle, char **buf, size_t *len );
__attribute__ ((visibility("default"))) void zend_file_handle_dtor(zend_file_handle *fh );
__attribute__ ((visibility("default"))) int zend_compare_file_handles(zend_file_handle *fh1, zend_file_handle *fh2);

# 528 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2
typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
 int (*printf_function)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
 int (*write_function)(const char *str, uint str_length);
 FILE *(*fopen_function)(const char *filename, char **opened_path );
 void (*message_handler)(long message, const void *data );




 int (*get_configuration_directive)(const char *name, uint name_length, zval *contents);
 void (*ticks_function)(int ticks);
 void (*on_timeout)(int seconds );
 int (*stream_open_function)(const char *filename, zend_file_handle *handle );
 int (*vspprintf_function)(char **pbuf, size_t max_len, const char *format, va_list ap);
 char *(*getenv_function)(char *name, size_t name_len );
 char *(*resolve_path_function)(const char *filename, int filename_len );
} zend_utility_functions;

typedef struct _zend_utility_values {
 char *import_use_extension;
 uint import_use_extension_length;
 zend_bool html_errors;
} zend_utility_values;

typedef int (*zend_write_func_t)(const char *str, uint str_length);
# 593 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);

# 631 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h"

__attribute__ ((visibility("default"))) char *get_zend_version(void);
__attribute__ ((visibility("default"))) void zend_make_printable_zval(zval *expr, zval *expr_copy, int *use_copy);
__attribute__ ((visibility("default"))) int zend_print_zval(zval *expr, int indent);
__attribute__ ((visibility("default"))) int zend_print_zval_ex(zend_write_func_t write_func, zval *expr, int indent);
__attribute__ ((visibility("default"))) void zend_print_zval_r(zval *expr, int indent );
__attribute__ ((visibility("default"))) void zend_print_flat_zval_r(zval *expr );
__attribute__ ((visibility("default"))) void zend_print_zval_r_ex(zend_write_func_t write_func, zval *expr, int indent );
__attribute__ ((visibility("default"))) void zend_output_debug_string(zend_bool trigger_break, const char *format, ...) __attribute__ ((format(printf, 2, 3)));


void zend_activate(void);
void zend_deactivate(void);
void zend_call_destructors(void);
void zend_activate_modules(void);
void zend_deactivate_modules(void);
void zend_post_deactivate_modules(void);








__attribute__ ((visibility("default"))) void free_estring(char **str_p);

# 676 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h"

extern __attribute__ ((visibility("default"))) int (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, char **opened_path );




extern __attribute__ ((visibility("default"))) void (*zend_ticks_function)(int ticks);
extern __attribute__ ((visibility("default"))) void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
extern void (*zend_on_timeout)(int seconds );
extern __attribute__ ((visibility("default"))) int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle );
extern int (*zend_vspprintf)(char **pbuf, size_t max_len, const char *format, va_list ap);
extern __attribute__ ((visibility("default"))) char *(*zend_getenv)(char *name, size_t name_len );
extern __attribute__ ((visibility("default"))) char *(*zend_resolve_path)(const char *filename, int filename_len );

__attribute__ ((visibility("default"))) void zend_error(int type, const char *format, ...) __attribute__ ((format(printf, 2, 3)));

void zenderror(const char *error);



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_standard_class_def;
extern __attribute__ ((visibility("default"))) zend_utility_values zend_uv;
extern __attribute__ ((visibility("default"))) zval zval_used_for_init;









# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_signal.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_signal.h"
# 1 "/usr/include/signal.h" 1 3 4
# 31 "/usr/include/signal.h" 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 104 "/usr/include/bits/sigset.h" 3 4
extern int __sigismember (__const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 118 "/usr/include/bits/sigset.h" 3 4
extern __inline int __sigismember (__const __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return (__set->__val[__word] & __mask) ? 1 : 0; }
extern __inline int __sigaddset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] |= __mask), 0); }
extern __inline int __sigdelset ( __sigset_t *__set, int __sig) { unsigned long int __mask = (((unsigned long int) 1) << (((__sig) - 1) % (8 * sizeof (unsigned long int)))); unsigned long int __word = (((__sig) - 1) / (8 * sizeof (unsigned long int))); return ((__set->__val[__word] &= ~__mask), 0); }
# 34 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;

# 58 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/signum.h" 1 3 4
# 59 "/usr/include/signal.h" 2 3 4
# 79 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/siginfo.h" 1 3 4
# 25 "/usr/include/bits/siginfo.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 51 "/usr/include/bits/siginfo.h" 3 4
typedef struct siginfo
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 3)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;
      } _sifields;
  } siginfo_t;
# 129 "/usr/include/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};



enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR

};


enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};


enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 273 "/usr/include/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 3)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     void *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 80 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));
# 99 "/usr/include/signal.h" 3 4


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));
# 113 "/usr/include/signal.h" 3 4

# 126 "/usr/include/signal.h" 3 4
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__));




extern int raise (int __sig) __attribute__ ((__nothrow__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__));




extern void psignal (int __sig, __const char *__s);




extern void psiginfo (__const siginfo_t *__pinfo, __const char *__s);
# 168 "/usr/include/signal.h" 3 4
extern int __sigpause (int __sig_or_mask, int __is_sig);
# 196 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
# 216 "/usr/include/signal.h" 3 4
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (__const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 252 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigaction.h" 1 3 4
# 25 "/usr/include/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 253 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, __const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__));






extern int sigsuspend (__const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, __const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (__const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (__const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (__const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    __const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, __const union sigval __val)
     __attribute__ ((__nothrow__));
# 310 "/usr/include/signal.h" 3 4
extern __const char *__const _sys_siglist[65];
extern __const char *__const sys_siglist[65];


struct sigvec
  {
    __sighandler_t sv_handler;
    int sv_mask;

    int sv_flags;

  };
# 334 "/usr/include/signal.h" 3 4
extern int sigvec (int __sig, __const struct sigvec *__vec,
     struct sigvec *__ovec) __attribute__ ((__nothrow__));



# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 28 "/usr/include/bits/sigcontext.h" 3 4
# 1 "/usr/include/asm/sigcontext.h" 1 3 4




# 1 "/usr/include/linux/types.h" 1 3 4



# 1 "/usr/include/asm/types.h" 1 3 4





# 1 "/usr/include/asm-generic/types.h" 1 3 4






# 1 "/usr/include/asm-generic/int-ll64.h" 1 3 4
# 11 "/usr/include/asm-generic/int-ll64.h" 3 4
# 1 "/usr/include/asm/bitsperlong.h" 1 3 4
# 10 "/usr/include/asm/bitsperlong.h" 3 4
# 1 "/usr/include/asm-generic/bitsperlong.h" 1 3 4
# 11 "/usr/include/asm/bitsperlong.h" 2 3 4
# 12 "/usr/include/asm-generic/int-ll64.h" 2 3 4







typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;
# 8 "/usr/include/asm-generic/types.h" 2 3 4



typedef unsigned short umode_t;
# 7 "/usr/include/asm/types.h" 2 3 4
# 5 "/usr/include/linux/types.h" 2 3 4



# 1 "/usr/include/linux/posix_types.h" 1 3 4



# 1 "/usr/include/linux/stddef.h" 1 3 4
# 5 "/usr/include/linux/posix_types.h" 2 3 4
# 36 "/usr/include/linux/posix_types.h" 3 4
typedef struct {
 unsigned long fds_bits [(1024/(8 * sizeof(unsigned long)))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;

# 1 "/usr/include/asm/posix_types.h" 1 3 4

# 1 "/usr/include/asm/posix_types_32.h" 1 3 4
# 10 "/usr/include/asm/posix_types_32.h" 3 4
typedef unsigned long __kernel_ino_t;
typedef unsigned short __kernel_mode_t;
typedef unsigned short __kernel_nlink_t;
typedef long __kernel_off_t;
typedef int __kernel_pid_t;
typedef unsigned short __kernel_ipc_pid_t;
typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef long __kernel_time_t;
typedef long __kernel_suseconds_t;
typedef long __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef int __kernel_daddr_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;

typedef unsigned short __kernel_old_uid_t;
typedef unsigned short __kernel_old_gid_t;
typedef unsigned short __kernel_old_dev_t;


typedef long long __kernel_loff_t;


typedef struct {
 int val[2];
} __kernel_fsid_t;
# 3 "/usr/include/asm/posix_types.h" 2 3 4
# 48 "/usr/include/linux/posix_types.h" 2 3 4
# 9 "/usr/include/linux/types.h" 2 3 4
# 27 "/usr/include/linux/types.h" 3 4
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
# 6 "/usr/include/asm/sigcontext.h" 2 3 4
# 23 "/usr/include/asm/sigcontext.h" 3 4
struct _fpx_sw_bytes {
 __u32 magic1;
 __u32 extended_size;


 __u64 xstate_bv;




 __u32 xstate_size;




 __u32 padding[7];
};
# 56 "/usr/include/asm/sigcontext.h" 3 4
struct _fpreg {
 unsigned short significand[4];
 unsigned short exponent;
};

struct _fpxreg {
 unsigned short significand[4];
 unsigned short exponent;
 unsigned short padding[3];
};

struct _xmmreg {
 unsigned long element[4];
};

struct _fpstate {

 unsigned long cw;
 unsigned long sw;
 unsigned long tag;
 unsigned long ipoff;
 unsigned long cssel;
 unsigned long dataoff;
 unsigned long datasel;
 struct _fpreg _st[8];
 unsigned short status;
 unsigned short magic;


 unsigned long _fxsr_env[6];
 unsigned long mxcsr;
 unsigned long reserved;
 struct _fpxreg _fxsr_st[8];
 struct _xmmreg _xmm[8];
 unsigned long padding1[44];

 union {
  unsigned long padding2[12];
  struct _fpx_sw_bytes sw_reserved;

 };
};






struct sigcontext {
 unsigned short gs, __gsh;
 unsigned short fs, __fsh;
 unsigned short es, __esh;
 unsigned short ds, __dsh;
 unsigned long edi;
 unsigned long esi;
 unsigned long ebp;
 unsigned long esp;
 unsigned long ebx;
 unsigned long edx;
 unsigned long ecx;
 unsigned long eax;
 unsigned long trapno;
 unsigned long err;
 unsigned long eip;
 unsigned short cs, __csh;
 unsigned long eflags;
 unsigned long esp_at_signal;
 unsigned short ss, __ssh;
 struct _fpstate *fpstate;
 unsigned long oldmask;
 unsigned long cr2;
};
# 190 "/usr/include/asm/sigcontext.h" 3 4
struct _xsave_hdr {
 __u64 xstate_bv;
 __u64 reserved1[2];
 __u64 reserved2[5];
};

struct _ymmh_state {

 __u32 ymmh_space[64];
};







struct _xstate {
 struct _fpstate fpstate;
 struct _xsave_hdr xstate_hdr;
 struct _ymmh_state ymmh;

};
# 29 "/usr/include/bits/sigcontext.h" 2 3 4
# 340 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__));






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 350 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__));

# 1 "/usr/include/bits/sigstack.h" 1 3 4
# 26 "/usr/include/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 50 "/usr/include/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 357 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/sys/ucontext.h" 1 3 4
# 23 "/usr/include/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 24 "/usr/include/sys/ucontext.h" 2 3 4



# 1 "/usr/include/bits/sigcontext.h" 1 3 4
# 28 "/usr/include/sys/ucontext.h" 2 3 4



typedef int greg_t;





typedef greg_t gregset_t[19];
# 85 "/usr/include/sys/ucontext.h" 3 4
struct _libc_fpreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
};

struct _libc_fpstate
{
  unsigned long int cw;
  unsigned long int sw;
  unsigned long int tag;
  unsigned long int ipoff;
  unsigned long int cssel;
  unsigned long int dataoff;
  unsigned long int datasel;
  struct _libc_fpreg _st[8];
  unsigned long int status;
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;


    fpregset_t fpregs;
    unsigned long int oldmask;
    unsigned long int cr2;
  } mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;
# 360 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));



extern int sigaltstack (__const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__));
# 395 "/usr/include/signal.h" 3 4
# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 31 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       __const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__));
# 396 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__));




# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_signal.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_signal.h"
typedef struct _zend_signal_entry_t {
 int flags;
 void* handler;
} zend_signal_entry_t;

typedef struct _zend_signal_t {
 int signo;
 siginfo_t *siginfo;
 void* context;
} zend_signal_t;

typedef struct _zend_signal_queue_t {
 zend_signal_t zend_signal;
 struct _zend_signal_queue_t *next;
} zend_signal_queue_t;


typedef struct _zend_signal_globals_t {
 int depth;
 int blocked;
 int running;
 int active;
 int initialized;
 zend_bool check;
 zend_signal_entry_t handlers[65];
 zend_signal_queue_t pstorage[32], *phead, *ptail, *pavail;
} zend_signal_globals_t;
# 74 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_signal.h"
extern __attribute__ ((visibility("default"))) zend_signal_globals_t zend_signal_globals;






void zend_signal_handler_defer(int signo, siginfo_t *siginfo, void *context);
void zend_signal_handler_unblock();
void zend_signal_activate(void);
void zend_signal_deactivate(void);
void zend_signal_startup();
void zend_signal_shutdown(void);
__attribute__ ((visibility("default"))) int zend_signal(int signo, void (*handler)(int) );
__attribute__ ((visibility("default"))) int zend_sigaction(int signo, const struct sigaction *act, struct sigaction *oldact );
# 711 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2






__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);

# 829 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_gc.h" 1
# 81 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_gc.h"
typedef struct _gc_root_buffer {
 struct _gc_root_buffer *prev;
 struct _gc_root_buffer *next;
 zend_object_handle handle;
 union {
  zval *pz;
  const zend_object_handlers *handlers;
 } u;
} gc_root_buffer;

typedef struct _zval_gc_info {
 zval z;
 union {
  gc_root_buffer *buffered;
  struct _zval_gc_info *next;
 } u;
} zval_gc_info;

typedef struct _zend_gc_globals {
 zend_bool gc_enabled;
 zend_bool gc_active;

 gc_root_buffer *buf;
 gc_root_buffer roots;
 gc_root_buffer *unused;
 gc_root_buffer *first_unused;
 gc_root_buffer *last_unused;

 zval_gc_info *zval_to_free;
 zval_gc_info *free_list;
 zval_gc_info *next_to_free;

 zend_uint gc_runs;
 zend_uint collected;
# 129 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_gc.h"
} zend_gc_globals;
# 138 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_zval_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_zobj_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_remove_zval_from_buffer(zval *zv );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);

# 180 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_gc.h"
static inline __attribute__((always_inline)) void gc_zval_check_possible_root(zval *z )
{
 if (z->type == 4 || z->type == 5) {
  gc_zval_possible_root(z );
 }
}

static inline __attribute__((always_inline)) void gc_remove_from_buffer(gc_root_buffer *root )
{
 root->next->prev = root->prev;
 root->prev->next = root->next;
 root->prev = (gc_globals.unused);
 (gc_globals.unused) = root;
 ;
}
# 830 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h"
# 1 "/usr/include/errno.h" 1 3 4
# 32 "/usr/include/errno.h" 3 4




# 1 "/usr/include/bits/errno.h" 1 3 4
# 25 "/usr/include/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4



# 1 "/usr/include/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/asm/errno.h" 2 3 4
# 5 "/usr/include/linux/errno.h" 2 3 4
# 26 "/usr/include/bits/errno.h" 2 3 4
# 47 "/usr/include/bits/errno.h" 3 4
extern int *__errno_location (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 37 "/usr/include/errno.h" 2 3 4
# 59 "/usr/include/errno.h" 3 4

# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h" 2

# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (__const char *__assertion, __const char *__file,
      unsigned int __line, __const char *__function)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
      unsigned int __line,
      __const char *__function)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h" 2





# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_strtod.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_strtod.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);

# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_multiply.h" 1
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h" 2








__attribute__ ((visibility("default"))) int add_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int sub_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int mul_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int div_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int mod_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int boolean_xor_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int boolean_not_function(zval *result, zval *op1 );
__attribute__ ((visibility("default"))) int bitwise_not_function(zval *result, zval *op1 );
__attribute__ ((visibility("default"))) int bitwise_or_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int bitwise_and_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int bitwise_xor_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int shift_left_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int shift_right_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int concat_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) int is_equal_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_identical_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_not_identical_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_not_equal_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_smaller_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int is_smaller_or_equal_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) zend_bool instanceof_function_ex(const zend_class_entry *instance_ce, const zend_class_entry *ce, zend_bool interfaces_only );
__attribute__ ((visibility("default"))) zend_bool instanceof_function(const zend_class_entry *instance_ce, const zend_class_entry *ce );





static inline __attribute__((always_inline)) long zend_dval_to_lval(double d)
{
 if (d > 2147483647L || d < (-2147483647L - 1L)) {
  return (long)(unsigned long)(zend_long64) d;
 }
 return (long) d;
}
# 105 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h"
static inline zend_uchar is_numeric_string(const char *str, int length, long *lval, double *dval, int allow_errors)
{
 const char *ptr;
 int base = 10, digits = 0, dp_or_e = 0;
 double local_dval;
 zend_uchar type;

 if (!length) {
  return 0;
 }



 while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r' || *str == '\v' || *str == '\f') {
  str++;
  length--;
 }
 ptr = str;

 if (*ptr == '-' || *ptr == '+') {
  ptr++;
 }

 if (((*ptr) >= '0' && (*ptr) <= '9')) {


  if (length > 2 && *str == '0' && (str[1] == 'x' || str[1] == 'X')) {
   base = 16;
   ptr += 2;
  }


  while (*ptr == '0') {
   ptr++;
  }




  for (type = 1; !(digits >= 11 && (dval || allow_errors == 1)); digits++, ptr++) {
check_digits:
   if (((*ptr) >= '0' && (*ptr) <= '9') || (base == 16 && (((*ptr) >= 'A' && (*ptr) <= 'F') || ((*ptr) >= 'a' && (*ptr) <= 'f')))) {
    continue;
   } else if (base == 10) {
    if (*ptr == '.' && dp_or_e < 1) {
     goto process_double;
    } else if ((*ptr == 'e' || *ptr == 'E') && dp_or_e < 2) {
     const char *e = ptr + 1;

     if (*e == '-' || *e == '+') {
      ptr = e++;
     }
     if (((*e) >= '0' && (*e) <= '9')) {
      goto process_double;
     }
    }
   }

   break;
  }

  if (base == 10) {
   if (digits >= 11) {
    dp_or_e = -1;
    goto process_double;
   }
  } else if (!(digits < 4 * 2 || (digits == 4 * 2 && ptr[-digits] <= '7'))) {
   if (dval) {
    local_dval = zend_hex_strtod(str, &ptr);
   }
   type = 2;
  }
 } else if (*ptr == '.' && ((ptr[1]) >= '0' && (ptr[1]) <= '9')) {
process_double:
  type = 2;



  if (dval) {
   local_dval = zend_strtod(str, &ptr);
  } else if (allow_errors != 1 && dp_or_e != -1) {
   dp_or_e = (*ptr++ == '.') ? 1 : 2;
   goto check_digits;
  }
 } else {
  return 0;
 }

 if (ptr != str + length) {
  if (!allow_errors) {
   return 0;
  }
  if (allow_errors == -1) {
   zend_error((1<<3L), "A non well formed numeric value encountered");
  }
 }

 if (type == 1) {
  if (digits == 11 - 1) {
   int cmp = __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (&ptr[-digits]) && __builtin_constant_p (long_min_digits) && (__s1_len = strlen (&ptr[-digits]), __s2_len = strlen (long_min_digits), (!((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) || __s2_len >= 4)) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) && (__s1_len = strlen (&ptr[-digits]), __s1_len < 4) ? (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) (long_min_digits); register int __result = (((__const unsigned char *) (__const char *) (&ptr[-digits]))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (&ptr[-digits]))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (&ptr[-digits]))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (&ptr[-digits]))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) && (__s2_len = strlen (long_min_digits), __s2_len < 4) ? (__builtin_constant_p (&ptr[-digits]) && ((size_t)(const void *)((&ptr[-digits]) + 1) - (size_t)(const void *)(&ptr[-digits]) == 1) ? __builtin_strcmp (&ptr[-digits], long_min_digits) : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (&ptr[-digits]); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) (long_min_digits))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) (long_min_digits))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) (long_min_digits))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) (long_min_digits))[3]); } } __result; }))) : __builtin_strcmp (&ptr[-digits], long_min_digits)))); });

   if (!(cmp < 0 || (cmp == 0 && *str == '-'))) {
    if (dval) {
     *dval = zend_strtod(str, ((void *)0));
    }

    return 2;
   }
  }

  if (lval) {
   *lval = strtol(str, ((void *)0), base);
  }

  return 1;
 } else {
  if (dval) {
   *dval = local_dval;
  }

  return 2;
 }
}

static inline char *
zend_memnstr(char *haystack, char *needle, int needle_len, char *end)
{
 char *p = haystack;
 char ne = needle[needle_len-1];

 if (needle_len == 1) {
  return (char *)memchr(p, *needle, (end-p));
 }

 if (needle_len > end-haystack) {
  return ((void *)0);
 }

 end -= needle_len;

 while (p <= end) {
  if ((p = (char *)memchr(p, *needle, (end-p+1))) && ne == p[needle_len-1]) {
   if (!memcmp(needle, p, needle_len-1)) {
    return p;
   }
  }

  if (p == ((void *)0)) {
   return ((void *)0);
  }

  p++;
 }

 return ((void *)0);
}

static inline const void *zend_memrchr(const void *s, int c, size_t n)
{
 register const unsigned char *e;

 if (n <= 0) {
  return ((void *)0);
 }

 for (e = (const unsigned char *)s + n - 1; e >= (const unsigned char *)s; e--) {
  if (*e == (const unsigned char)c) {
   return (const void *)e;
  }
 }

 return ((void *)0);
}


__attribute__ ((visibility("default"))) int increment_function(zval *op1);
__attribute__ ((visibility("default"))) int decrement_function(zval *op2);

__attribute__ ((visibility("default"))) void convert_scalar_to_number(zval *op );
__attribute__ ((visibility("default"))) void _convert_to_string(zval *op );
__attribute__ ((visibility("default"))) void convert_to_long(zval *op);
__attribute__ ((visibility("default"))) void convert_to_double(zval *op);
__attribute__ ((visibility("default"))) void convert_to_long_base(zval *op, int base);
__attribute__ ((visibility("default"))) void convert_to_null(zval *op);
__attribute__ ((visibility("default"))) void convert_to_boolean(zval *op);
__attribute__ ((visibility("default"))) void convert_to_array(zval *op);
__attribute__ ((visibility("default"))) void convert_to_object(zval *op);
__attribute__ ((visibility("default"))) void multi_convert_to_long_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_double_ex(int argc, ...);
__attribute__ ((visibility("default"))) void multi_convert_to_string_ex(int argc, ...);
__attribute__ ((visibility("default"))) int add_char_to_string(zval *result, const zval *op1, const zval *op2);
__attribute__ ((visibility("default"))) int add_string_to_string(zval *result, const zval *op1, const zval *op2);


__attribute__ ((visibility("default"))) double zend_string_to_double(const char *number, zend_uint length);

__attribute__ ((visibility("default"))) int zval_is_true(zval *op);
__attribute__ ((visibility("default"))) int compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int numeric_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_compare_function_ex(zval *result, zval *op1, zval *op2, zend_bool case_insensitive );
__attribute__ ((visibility("default"))) int string_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_case_compare_function(zval *result, zval *op1, zval *op2 );

__attribute__ ((visibility("default"))) int string_locale_compare_function(zval *result, zval *op1, zval *op2 );


__attribute__ ((visibility("default"))) void zend_str_tolower(char *str, unsigned int length);
__attribute__ ((visibility("default"))) char *zend_str_tolower_copy(char *dest, const char *source, unsigned int length);
__attribute__ ((visibility("default"))) char *zend_str_tolower_dup(const char *source, unsigned int length);

__attribute__ ((visibility("default"))) int zend_binary_zval_strcmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_zval_strcasecmp(zval *s1, zval *s2);
__attribute__ ((visibility("default"))) int zend_binary_zval_strncasecmp(zval *s1, zval *s2, zval *s3);
__attribute__ ((visibility("default"))) int zend_binary_strcmp(const char *s1, uint len1, const char *s2, uint len2);
__attribute__ ((visibility("default"))) int zend_binary_strncmp(const char *s1, uint len1, const char *s2, uint len2, uint length);
__attribute__ ((visibility("default"))) int zend_binary_strcasecmp(const char *s1, uint len1, const char *s2, uint len2);
__attribute__ ((visibility("default"))) int zend_binary_strncasecmp(const char *s1, uint len1, const char *s2, uint len2, uint length);

__attribute__ ((visibility("default"))) void zendi_smart_strcmp(zval *result, zval *s1, zval *s2);
__attribute__ ((visibility("default"))) void zend_compare_symbol_tables(zval *result, HashTable *ht1, HashTable *ht2 );
__attribute__ ((visibility("default"))) void zend_compare_arrays(zval *result, zval *a1, zval *a2 );
__attribute__ ((visibility("default"))) void zend_compare_objects(zval *result, zval *o1, zval *o2 );

__attribute__ ((visibility("default"))) int zend_atoi(const char *str, int str_len);
__attribute__ ((visibility("default"))) long zend_atol(const char *str, int str_len);

__attribute__ ((visibility("default"))) void zend_locale_sprintf_double(zval *op );

# 456 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h"
static inline __attribute__((always_inline)) int fast_increment_function(zval *op1)
{
 if (__builtin_expect((*op1).type == 1, 1)) {

  __asm__(
   "incl (%0)\n\t"
   "jno  0f\n\t"
   "movl $0x0, (%0)\n\t"
   "movl $0x41e00000, 0x4(%0)\n\t"
   "movb $0x2,0xc(%0)\n"
   "0:"
   :
   : "r"(op1));
# 488 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h"
  return 0;
 }
 return increment_function(op1);
}

static inline __attribute__((always_inline)) int fast_decrement_function(zval *op1)
{
 if (__builtin_expect((*op1).type == 1, 1)) {

  __asm__(
   "decl (%0)\n\t"
   "jno  0f\n\t"
   "movl $0x00200000, (%0)\n\t"
   "movl $0xc1e00000, 0x4(%0)\n\t"
   "movb $0x2,0xc(%0)\n"
   "0:"
   :
   : "r"(op1));
# 525 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h"
  return 0;
 }
 return decrement_function(op1);
}

static inline __attribute__((always_inline)) int fast_add_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {

  __asm__(
   "movl	(%1), %%eax\n\t"
   "addl   (%2), %%eax\n\t"
   "jo     0f\n\t"
   "movl   %%eax, (%0)\n\t"
   "movb   $0x1,0xc(%0)\n\t"
   "jmp    1f\n"
   "0:\n\t"
   "fildl	(%1)\n\t"
   "fildl	(%2)\n\t"
   "faddp	%%st, %%st(1)\n\t"
   "movb   $0x2,0xc(%0)\n\t"
   "fstpl	(%0)\n"
   "1:"
   :
   : "r"(result),
     "r"(op1),
     "r"(op2)
   : "eax");
# 585 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h"
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) + (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval + (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval + ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return add_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_sub_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {

  __asm__(
   "movl	(%1), %%eax\n\t"
   "subl   (%2), %%eax\n\t"
   "jo     0f\n\t"
   "movl   %%eax, (%0)\n\t"
   "movb   $0x1,0xc(%0)\n\t"
   "jmp    1f\n"
   "0:\n\t"
   "fildl	(%2)\n\t"
   "fildl	(%1)\n\t"



   "fsubp	%%st, %%st(1)\n\t"

   "movb   $0x2,0xc(%0)\n\t"
   "fstpl	(%0)\n"
   "1:"
   :
   : "r"(result),
     "r"(op1),
     "r"(op2)
   : "eax");
# 668 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h"
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) - (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval - (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval - ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return sub_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_mul_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   long overflow;

   do { long __tmpvar; __asm__ ("imul %3,%0\n" "adc $0,%1" : "=r"(__tmpvar),"=r"(overflow) : "0"((*op1).value.lval), "r"((*op2).value.lval), "1"(0)); if (overflow) ((*result).value.dval) = (double) ((*op1).value.lval) * (double) ((*op2).value.lval); else ((*result).value.lval) = __tmpvar; } while (0);
   (*result).type = overflow ? 2 : 1;
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = ((double)(*op1).value.lval) * (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   (*result).value.dval = (*op1).value.dval * (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   (*result).value.dval = (*op1).value.dval * ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return mul_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_div_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1) && 0) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   if (__builtin_expect((*op2).value.lval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   } else if (__builtin_expect((*op2).value.lval == -1 && (*op1).value.lval == (-2147483647L - 1L), 0)) {

    (*result).value.dval = (double) (-2147483647L - 1L) / -1;
    (*result).type = 2;
   } else if (__builtin_expect((*op1).value.lval % (*op2).value.lval == 0, 1)) {

    (*result).value.lval = (*op1).value.lval / (*op2).value.lval;
    (*result).type = 1;
   } else {
    (*result).value.dval = ((double) (*op1).value.lval) / ((double)(*op2).value.lval);
    (*result).type = 2;
   }
   return 0;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   if (__builtin_expect((*op2).value.dval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   }
   (*result).value.dval = ((double)(*op1).value.lval) / (*op2).value.dval;
   (*result).type = 2;
   return 0;
  }
 } else if (__builtin_expect((*op1).type == 2, 1) && 0) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   if (__builtin_expect((*op2).value.dval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   }
   (*result).value.dval = (*op1).value.dval / (*op2).value.dval;
   (*result).type = 2;
   return 0;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   if (__builtin_expect((*op2).value.lval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   }
   (*result).value.dval = (*op1).value.dval / ((double)(*op2).value.lval);
   (*result).type = 2;
   return 0;
  }
 }
 return div_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_mod_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   if (__builtin_expect((*op2).value.lval == 0, 0)) {
    zend_error((1<<1L), "Division by zero");
    (*result).value.lval = 0;
    (*result).type = 3;
    return -1;
   } else if (__builtin_expect((*op2).value.lval == -1, 0)) {

    (*result).value.lval = 0;
    (*result).type = 1;
    return 0;
   }
   (*result).value.lval = (*op1).value.lval % (*op2).value.lval;
   (*result).type = 1;
   return 0;
  }
 }
 return mod_function(result, op1, op2 );
}

static inline __attribute__((always_inline)) int fast_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval == (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) == (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval == (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval == ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval == 0;
}

static inline __attribute__((always_inline)) int fast_not_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval != (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) != (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval != (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval != ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval != 0;
}

static inline __attribute__((always_inline)) int fast_is_smaller_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval < (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) < (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval < (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval < ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval < 0;
}

static inline __attribute__((always_inline)) int fast_is_smaller_or_equal_function(zval *result, zval *op1, zval *op2 )
{
 if (__builtin_expect((*op1).type == 1, 1)) {
  if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.lval <= (*op2).value.lval;
  } else if (__builtin_expect((*op2).type == 2, 1)) {
   return ((double)(*op1).value.lval) <= (*op2).value.dval;
  }
 } else if (__builtin_expect((*op1).type == 2, 1)) {
  if (__builtin_expect((*op2).type == 2, 1)) {
   return (*op1).value.dval <= (*op2).value.dval;
  } else if (__builtin_expect((*op2).type == 1, 1)) {
   return (*op1).value.dval <= ((double)(*op2).value.lval);
  }
 }
 compare_function(result, op1, op2 );
 return (*result).value.lval <= 0;
}
# 831 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_variables.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_variables.h"


__attribute__ ((visibility("default"))) void _zval_dtor_func(zval *zvalue );

static inline __attribute__((always_inline)) void _zval_dtor(zval *zvalue )
{
 if (zvalue->type <= 3) {
  return;
 }
 _zval_dtor_func(zvalue );
}

__attribute__ ((visibility("default"))) void _zval_copy_ctor_func(zval *zvalue );

static inline __attribute__((always_inline)) void _zval_copy_ctor(zval *zvalue )
{
 if (zvalue->type <= 3) {
  return;
 }
 _zval_copy_ctor_func(zvalue );
}

__attribute__ ((visibility("default"))) int zval_copy_static_var(zval **p , int num_args, va_list args, zend_hash_key *key);

__attribute__ ((visibility("default"))) int zend_print_variable(zval *var);
__attribute__ ((visibility("default"))) void _zval_ptr_dtor(zval **zval_ptr );
__attribute__ ((visibility("default"))) void _zval_internal_dtor(zval *zvalue );
__attribute__ ((visibility("default"))) void _zval_internal_ptr_dtor(zval **zvalue );
__attribute__ ((visibility("default"))) void _zval_dtor_wrapper(zval *zvalue);
# 78 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval **p);


# 832 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend.h" 2

typedef enum {
 EH_NORMAL = 0,
 EH_SUPPRESS,
 EH_THROW
} zend_error_handling_t;

typedef struct {
 zend_error_handling_t handling;
 zend_class_entry *exception;
 zval *user_handler;
} zend_error_handling;

__attribute__ ((visibility("default"))) void zend_save_error_handling(zend_error_handling *current );
__attribute__ ((visibility("default"))) void zend_replace_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class, zend_error_handling *current );
__attribute__ ((visibility("default"))) void zend_restore_error_handling(zend_error_handling *saved );
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_qsort.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_qsort.h"

__attribute__ ((visibility("default"))) void zend_qsort(void *base, size_t nmemb, size_t siz, compare_func_t compare );

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_compat.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_compat.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_config.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_compat.h" 2
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_modules.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_modules.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_compile.h" 1
# 53 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_compile.h"
typedef struct _zend_op_array zend_op_array;
typedef struct _zend_op zend_op;

typedef struct _zend_compiler_context {
 zend_uint opcodes_size;
 int vars_size;
 int literals_size;
 int current_brk_cont;
 int backpatch_count;
 HashTable *labels;
} zend_compiler_context;

typedef struct _zend_literal {
 zval constant;
 zend_ulong hash_value;
 zend_uint cache_slot;
} zend_literal;




typedef union _znode_op {
 zend_uint constant;
 zend_uint var;
 zend_uint num;
 zend_ulong hash;
 zend_uint opline_num;
 zend_op *jmp_addr;
 zval *zv;
 zend_literal *literal;
  void *ptr;
} znode_op;

typedef struct _znode {
 int op_type;
 union {
  znode_op op;
  zval constant;
  zend_op_array *op_array;
 } u;
 zend_uint EA;
} znode;

typedef struct _zend_execute_data zend_execute_data;




typedef int (*user_opcode_handler_t) (zend_execute_data *execute_data );
typedef int (__attribute__((fastcall)) *opcode_handler_t) (zend_execute_data *execute_data );

extern __attribute__ ((visibility("default"))) opcode_handler_t *zend_opcode_handlers;

struct _zend_op {
 opcode_handler_t handler;
 znode_op op1;
 znode_op op2;
 znode_op result;
 ulong extended_value;
 uint lineno;
 zend_uchar opcode;
 zend_uchar op1_type;
 zend_uchar op2_type;
 zend_uchar result_type;
};


typedef struct _zend_brk_cont_element {
 int start;
 int cont;
 int brk;
 int parent;
} zend_brk_cont_element;

typedef struct _zend_label {
 int brk_cont;
 zend_uint opline_num;
} zend_label;

typedef struct _zend_try_catch_element {
 zend_uint try_op;
 zend_uint catch_op;
} zend_try_catch_element;
# 210 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_compile.h"
char *zend_visibility_string(zend_uint fn_flags);


typedef struct _zend_property_info {
 zend_uint flags;
 const char *name;
 int name_length;
 ulong h;
 int offset;
 const char *doc_comment;
 int doc_comment_len;
 zend_class_entry *ce;
} zend_property_info;


typedef struct _zend_arg_info {
 const char *name;
 zend_uint name_len;
 const char *class_name;
 zend_uint class_name_len;
 zend_uchar type_hint;
 zend_bool allow_null;
 zend_bool pass_by_reference;
} zend_arg_info;





typedef struct _zend_internal_function_info {
 const char *_name;
 zend_uint _name_len;
 const char *_class_name;
 zend_uint required_num_args;
 zend_uchar _type_hint;
 zend_bool return_reference;
 zend_bool pass_rest_by_reference;
} zend_internal_function_info;

typedef struct _zend_compiled_variable {
 const char *name;
 int name_len;
 ulong hash_value;
} zend_compiled_variable;

struct _zend_op_array {

 zend_uchar type;
 const char *function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;


 zend_uint *refcount;

 zend_op *opcodes;
 zend_uint last;

 zend_compiled_variable *vars;
 int last_var;

 zend_uint T;

 zend_brk_cont_element *brk_cont_array;
 int last_brk_cont;

 zend_try_catch_element *try_catch_array;
 int last_try_catch;


 HashTable *static_variables;

 zend_uint this_var;

 const char *filename;
 zend_uint line_start;
 zend_uint line_end;
 const char *doc_comment;
 zend_uint doc_comment_len;
 zend_uint early_binding;

 zend_literal *literals;
 int last_literal;

 void **run_time_cache;
 int last_cache_slot;

 void *reserved[4];
};





typedef struct _zend_internal_function {

 zend_uchar type;
 const char * function_name;
 zend_class_entry *scope;
 zend_uint fn_flags;
 union _zend_function *prototype;
 zend_uint num_args;
 zend_uint required_num_args;
 zend_arg_info *arg_info;


 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 struct _zend_module_entry *module;
} zend_internal_function;



typedef union _zend_function {
 zend_uchar type;

 struct {
  zend_uchar type;
  const char *function_name;
  zend_class_entry *scope;
  zend_uint fn_flags;
  union _zend_function *prototype;
  zend_uint num_args;
  zend_uint required_num_args;
  zend_arg_info *arg_info;
 } common;

 zend_op_array op_array;
 zend_internal_function internal_function;
} zend_function;


typedef struct _zend_function_state {
 zend_function *function;
 void **arguments;
} zend_function_state;


typedef struct _zend_switch_entry {
 znode cond;
 int default_case;
 int control_var;
} zend_switch_entry;


typedef struct _list_llist_element {
 znode var;
 zend_llist dimensions;
 znode value;
} list_llist_element;

union _temp_variable;

struct _zend_execute_data {
 struct _zend_op *opline;
 zend_function_state function_state;
 zend_function *fbc;
 zend_class_entry *called_scope;
 zend_op_array *op_array;
 zval *object;
 union _temp_variable *Ts;
 zval ***CVs;
 HashTable *symbol_table;
 struct _zend_execute_data *prev_execute_data;
 zval *old_error_reporting;
 zend_bool nested;
 zval **original_return_value;
 zend_class_entry *current_scope;
 zend_class_entry *current_called_scope;
 zval *current_this;
 zval *current_object;
};
# 397 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_compile.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h"
# 1 "/usr/include/setjmp.h" 1 3 4
# 28 "/usr/include/setjmp.h" 3 4


# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 29 "/usr/include/bits/setjmp.h" 3 4
typedef int __jmp_buf[6];
# 31 "/usr/include/setjmp.h" 2 3 4
# 1 "/usr/include/bits/sigset.h" 1 3 4
# 32 "/usr/include/setjmp.h" 2 3 4



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));




extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));
# 78 "/usr/include/setjmp.h" 3 4




extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
# 110 "/usr/include/setjmp.h" 3 4
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 120 "/usr/include/setjmp.h" 3 4

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals_macros.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;









extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 48 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;



# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_stack.h"
typedef struct _zend_stack {
 int top, max;
 void **elements;
} zend_stack;





__attribute__ ((visibility("default"))) int zend_stack_init(zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_push(zend_stack *stack, const void *element, int size);
__attribute__ ((visibility("default"))) int zend_stack_top(const zend_stack *stack, void **element);
__attribute__ ((visibility("default"))) int zend_stack_del_top(zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_int_top(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_is_empty(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_destroy(zend_stack *stack);
__attribute__ ((visibility("default"))) void **zend_stack_base(const zend_stack *stack);
__attribute__ ((visibility("default"))) int zend_stack_count(const zend_stack *stack);
__attribute__ ((visibility("default"))) void zend_stack_apply(zend_stack *stack, int type, int (*apply_function)(void *element));
__attribute__ ((visibility("default"))) void zend_stack_apply_with_argument(zend_stack *stack, int type, int (*apply_function)(void *element, void *arg), void *arg);

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_ptr_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_ptr_stack.h"
typedef struct _zend_ptr_stack {
 int top, max;
 void **elements;
 void **top_element;
 zend_bool persistent;
} zend_ptr_stack;





__attribute__ ((visibility("default"))) void zend_ptr_stack_init(zend_ptr_stack *stack);
__attribute__ ((visibility("default"))) void zend_ptr_stack_init_ex(zend_ptr_stack *stack, zend_bool persistent);
__attribute__ ((visibility("default"))) void zend_ptr_stack_n_push(zend_ptr_stack *stack, int count, ...);
__attribute__ ((visibility("default"))) void zend_ptr_stack_n_pop(zend_ptr_stack *stack, int count, ...);
__attribute__ ((visibility("default"))) void zend_ptr_stack_destroy(zend_ptr_stack *stack);
__attribute__ ((visibility("default"))) void zend_ptr_stack_apply(zend_ptr_stack *stack, void (*func)(void *));
__attribute__ ((visibility("default"))) void zend_ptr_stack_clean(zend_ptr_stack *stack, void (*func)(void *), zend_bool free_elements);
__attribute__ ((visibility("default"))) int zend_ptr_stack_num_elements(zend_ptr_stack *stack);

# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_ptr_stack.h"
static inline __attribute__((always_inline)) void zend_ptr_stack_3_push(zend_ptr_stack *stack, void *a, void *b, void *c)
{


 if (stack->top+3 > stack->max) { do { stack->max += 64; } while (stack->top+3 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

 stack->top += 3;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;
 *(stack->top_element++) = c;


}

static inline __attribute__((always_inline)) void zend_ptr_stack_2_push(zend_ptr_stack *stack, void *a, void *b)
{


 if (stack->top+2 > stack->max) { do { stack->max += 64; } while (stack->top+2 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

 stack->top += 2;
 *(stack->top_element++) = a;
 *(stack->top_element++) = b;


}

static inline __attribute__((always_inline)) void zend_ptr_stack_3_pop(zend_ptr_stack *stack, void **a, void **b, void **c)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 *c = *(--stack->top_element);
 stack->top -= 3;
}

static inline __attribute__((always_inline)) void zend_ptr_stack_2_pop(zend_ptr_stack *stack, void **a, void **b)
{
 *a = *(--stack->top_element);
 *b = *(--stack->top_element);
 stack->top -= 2;
}

static inline __attribute__((always_inline)) void zend_ptr_stack_push(zend_ptr_stack *stack, void *ptr)
{
 if (stack->top+1 > stack->max) { do { stack->max += 64; } while (stack->top+1 > stack->max); stack->elements = (void **) ((stack->persistent)?__zend_realloc((stack->elements), ((sizeof(void *) * (stack->max)))):_erealloc(((stack->elements)), (((sizeof(void *) * (stack->max)))), 0 )); stack->top_element = stack->elements+stack->top; }

 stack->top++;
 *(stack->top_element++) = ptr;
}

static inline __attribute__((always_inline)) void *zend_ptr_stack_pop(zend_ptr_stack *stack)
{
 stack->top--;
 return *(--stack->top_element);
}
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_objects.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_objects.h"

__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object *zend_objects_get_address(const zval *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_free_object_storage(zend_object *object );

# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_objects_API.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_objects_API.h"
typedef void (*zend_objects_store_dtor_t)(void *object, zend_object_handle handle );
typedef void (*zend_objects_free_object_storage_t)(void *object );
typedef void (*zend_objects_store_clone_t)(void *object, void **object_clone );

typedef struct _zend_object_store_bucket {
 zend_bool destructor_called;
 zend_bool valid;
 union _store_bucket {
  struct _store_object {
   void *object;
   zend_objects_store_dtor_t dtor;
   zend_objects_free_object_storage_t free_storage;
   zend_objects_store_clone_t clone;
   const zend_object_handlers *handlers;
   zend_uint refcount;
   gc_root_buffer *buffered;
  } obj;
  struct {
   int next;
  } free_list;
 } bucket;
} zend_object_store_bucket;

typedef struct _zend_objects_store {
 zend_object_store_bucket *object_buckets;
 zend_uint top;
 zend_uint size;
 int free_list_head;
} zend_objects_store;



__attribute__ ((visibility("default"))) void zend_objects_store_init(zend_objects_store *objects, zend_uint init_size);
__attribute__ ((visibility("default"))) void zend_objects_store_call_destructors(zend_objects_store *objects );
__attribute__ ((visibility("default"))) void zend_objects_store_mark_destructed(zend_objects_store *objects );
__attribute__ ((visibility("default"))) void zend_objects_store_destroy(zend_objects_store *objects);


__attribute__ ((visibility("default"))) zend_object_handle zend_objects_store_put(void *object, zend_objects_store_dtor_t dtor, zend_objects_free_object_storage_t storage, zend_objects_store_clone_t clone );

__attribute__ ((visibility("default"))) void zend_objects_store_add_ref(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_store_del_ref(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_store_add_ref_by_handle(zend_object_handle handle );
__attribute__ ((visibility("default"))) void zend_objects_store_del_ref_by_handle_ex(zend_object_handle handle, const zend_object_handlers *handlers );
static inline __attribute__((always_inline)) void zend_objects_store_del_ref_by_handle(zend_object_handle handle ) {
 zend_objects_store_del_ref_by_handle_ex(handle, ((void *)0) );
}
__attribute__ ((visibility("default"))) zend_uint zend_objects_store_get_refcount(zval *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_store_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void *zend_object_store_get_object(const zval *object );
__attribute__ ((visibility("default"))) void *zend_object_store_get_object_by_handle(zend_object_handle handle );

__attribute__ ((visibility("default"))) void zend_object_store_set_object(zval *zobject, void *object );
__attribute__ ((visibility("default"))) void zend_object_store_ctor_failed(zval *zobject );

__attribute__ ((visibility("default"))) void zend_objects_store_free_object_storage(zend_objects_store *objects );



__attribute__ ((visibility("default"))) zval *zend_object_create_proxy(zval *object, zval *member );

__attribute__ ((visibility("default"))) zend_object_handlers *zend_get_std_object_handlers(void);

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_modules.h" 1
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_float.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_float.h"
# 1 "/usr/include/fpu_control.h" 1 3 4
# 89 "/usr/include/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 100 "/usr/include/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 213 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_float.h" 2
# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_multibyte.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_multibyte.h"
typedef struct _zend_encoding zend_encoding;

typedef size_t (*zend_encoding_filter)(unsigned char **str, size_t *str_length, const unsigned char *buf, size_t length );

typedef const zend_encoding* (*zend_encoding_fetcher)(const char *encoding_name );
typedef const char* (*zend_encoding_name_getter)(const zend_encoding *encoding);
typedef int (*zend_encoding_lexer_compatibility_checker)(const zend_encoding *encoding);
typedef const zend_encoding *(*zend_encoding_detector)(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size );
typedef size_t (*zend_encoding_converter)(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from );
typedef int (*zend_encoding_list_parser)(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent );
typedef const zend_encoding *(*zend_encoding_internal_encoding_getter)(void);
typedef int (*zend_encoding_internal_encoding_setter)(const zend_encoding *encoding );

typedef struct _zend_multibyte_functions {
    const char *provider_name;
    zend_encoding_fetcher encoding_fetcher;
    zend_encoding_name_getter encoding_name_getter;
    zend_encoding_lexer_compatibility_checker lexer_compatibility_checker;
    zend_encoding_detector encoding_detector;
    zend_encoding_converter encoding_converter;
    zend_encoding_list_parser encoding_list_parser;
    zend_encoding_internal_encoding_getter internal_encoding_getter;
    zend_encoding_internal_encoding_setter internal_encoding_setter;
} zend_multibyte_functions;






__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf32be;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf32le;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf16be;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf16le;
__attribute__ ((visibility("default"))) extern const zend_encoding *zend_multibyte_encoding_utf8;


__attribute__ ((visibility("default"))) int zend_multibyte_set_functions(const zend_multibyte_functions *functions );
__attribute__ ((visibility("default"))) const zend_multibyte_functions *zend_multibyte_get_functions(void);

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_fetch_encoding(const char *name );
__attribute__ ((visibility("default"))) const char *zend_multibyte_get_encoding_name(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) int zend_multibyte_check_lexer_compatibility(const zend_encoding *encoding);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_encoding_detector(const unsigned char *string, size_t length, const zend_encoding **list, size_t list_size );
__attribute__ ((visibility("default"))) size_t zend_multibyte_encoding_converter(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length, const zend_encoding *encoding_to, const zend_encoding *encoding_from );
__attribute__ ((visibility("default"))) int zend_multibyte_parse_encoding_list(const char *encoding_list, size_t encoding_list_len, const zend_encoding ***return_list, size_t *return_size, int persistent );

__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_internal_encoding(void);
__attribute__ ((visibility("default"))) const zend_encoding *zend_multibyte_get_script_encoding(void);
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding(const zend_encoding **encoding_list, size_t encoding_list_size );
__attribute__ ((visibility("default"))) int zend_multibyte_set_internal_encoding(const zend_encoding *encoding );
__attribute__ ((visibility("default"))) int zend_multibyte_set_script_encoding_by_string(const char *new_value, size_t new_value_length );


# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 2
# 55 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_compile.h" 1
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 2
# 64 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h"
typedef struct _zend_declarables {
 zval ticks;
} zend_declarables;

typedef struct _zend_vm_stack *zend_vm_stack;
typedef struct _zend_ini_entry zend_ini_entry;


struct _zend_compiler_globals {
 zend_stack bp_stack;
 zend_stack switch_cond_stack;
 zend_stack foreach_copy_stack;
 zend_stack object_stack;
 zend_stack declare_stack;

 zend_class_entry *active_class_entry;


 zend_llist list_llist;
 zend_llist dimension_llist;
 zend_stack list_stack;

 zend_stack function_call_stack;

 char *compiled_filename;

 int zend_lineno;

 char *heredoc;
 int heredoc_len;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;

 HashTable filenames_table;

 HashTable *auto_globals;

 zend_bool parse_error;
 zend_bool in_compilation;
 zend_bool short_tags;
 zend_bool asp_tags;

 zend_declarables declarables;

 zend_bool unclean_shutdown;

 zend_bool ini_parser_unbuffered_errors;

 zend_llist open_files;

 long catch_begin;

 struct _zend_ini_parser_param *ini_parser_param;

 int interactive;

 zend_uint start_lineno;
 zend_bool increment_lineno;

 znode implementing_class;

 zend_uint access_type;

 char *doc_comment;
 zend_uint doc_comment_len;

 zend_uint compiler_options;

 zval *current_namespace;
 HashTable *current_import;
 zend_bool in_namespace;
 zend_bool has_bracketed_namespaces;

 zend_compiler_context context;
 zend_stack context_stack;


 char *interned_strings_start;
 char *interned_strings_end;
 char *interned_strings_top;
 char *interned_strings_snapshot_top;

 HashTable interned_strings;

 const zend_encoding **script_encoding_list;
 size_t script_encoding_list_size;
 zend_bool multibyte;
 zend_bool detect_unicode;
 zend_bool encoding_declared;





};


struct _zend_executor_globals {
 zval **return_value_ptr_ptr;

 zval uninitialized_zval;
 zval *uninitialized_zval_ptr;

 zval error_zval;
 zval *error_zval_ptr;

 zend_ptr_stack arg_types_stack;


 HashTable *symtable_cache[32];
 HashTable **symtable_cache_limit;
 HashTable **symtable_cache_ptr;

 zend_op **opline_ptr;

 HashTable *active_symbol_table;
 HashTable symbol_table;

 HashTable included_files;

 jmp_buf *bailout;

 int error_reporting;
 int orig_error_reporting;
 int exit_status;

 zend_op_array *active_op_array;

 HashTable *function_table;
 HashTable *class_table;
 HashTable *zend_constants;

 zend_class_entry *scope;
 zend_class_entry *called_scope;

 zval *This;

 long precision;

 int ticks_count;

 zend_bool in_execution;
 HashTable *in_autoload;
 zend_function *autoload_func;
 zend_bool full_tables_cleanup;


 zend_bool no_extensions;






 HashTable regular_list;
 HashTable persistent_list;

 zend_vm_stack argument_stack;

 int user_error_handler_error_reporting;
 zval *user_error_handler;
 zval *user_exception_handler;
 zend_stack user_error_handlers_error_reporting;
 zend_ptr_stack user_error_handlers;
 zend_ptr_stack user_exception_handlers;

 zend_error_handling_t error_handling;
 zend_class_entry *exception_class;


 int timeout_seconds;

 int lambda_count;

 HashTable *ini_directives;
 HashTable *modified_ini_directives;
 zend_ini_entry *error_reporting_ini_entry;

 zend_objects_store objects_store;
 zval *exception, *prev_exception;
 zend_op *opline_before_exception;
 zend_op exception_op[3];

 struct _zend_execute_data *current_execute_data;

 struct _zend_module_entry *current_module;

 zend_property_info std_property_info;

 zend_bool active;

 zend_op *start_op;

 void *saved_fpu_cw_ptr;

 fpu_control_t saved_fpu_cw;


 void *reserved[4];
};

struct _zend_ini_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;

 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;

 char *filename;
 int lineno;


 int scanner_mode;
};

struct _zend_php_scanner_globals {
 zend_file_handle *yy_in;
 zend_file_handle *yy_out;

 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;


 unsigned char *script_org;
 size_t script_org_size;


 unsigned char *script_filtered;
 size_t script_filtered_size;


 zend_encoding_filter input_filter;
 zend_encoding_filter output_filter;
 const zend_encoding *script_encoding;
};
# 398 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_compile.h" 2



void init_compiler(void);
void shutdown_compiler(void);
void zend_init_compiler_data_structures(void);
void zend_init_compiler_context(void);

extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_file)(zend_file_handle *file_handle, int type );
extern __attribute__ ((visibility("default"))) zend_op_array *(*zend_compile_string)(zval *source_string, char *filename );

__attribute__ ((visibility("default"))) int lex_scan(zval *zendlval );
void startup_scanner(void);
void shutdown_scanner(void);

__attribute__ ((visibility("default"))) char *zend_set_compiled_filename(const char *new_compiled_filename );
__attribute__ ((visibility("default"))) void zend_restore_compiled_filename(char *original_compiled_filename );
__attribute__ ((visibility("default"))) char *zend_get_compiled_filename(void);
__attribute__ ((visibility("default"))) int zend_get_compiled_lineno(void);
__attribute__ ((visibility("default"))) size_t zend_get_scanned_file_offset(void);

void zend_resolve_non_class_name(znode *element_name, zend_bool check_namespace );
void zend_resolve_class_name(znode *class_name, ulong fetch_type, int check_ns_name );
__attribute__ ((visibility("default"))) const char* zend_get_compiled_variable_name(const zend_op_array *op_array, zend_uint var, int* name_len);
# 430 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_compile.h"
void zend_do_binary_op(zend_uchar op, znode *result, const znode *op1, const znode *op2 );
void zend_do_unary_op(zend_uchar op, znode *result, const znode *op1 );
void zend_do_binary_assign_op(zend_uchar op, znode *result, const znode *op1, const znode *op2 );
void zend_do_assign(znode *result, znode *variable, znode *value );
void zend_do_assign_ref(znode *result, const znode *lvar, const znode *rvar );
void fetch_simple_variable(znode *result, znode *varname, int bp );
void fetch_simple_variable_ex(znode *result, znode *varname, int bp, zend_uchar op );
void zend_do_indirect_references(znode *result, const znode *num_references, znode *variable );
void zend_do_fetch_static_variable(znode *varname, const znode *static_assignment, int fetch_type );
void zend_do_fetch_global_variable(znode *varname, const znode *static_assignment, int fetch_type );

void fetch_array_begin(znode *result, znode *varname, znode *first_dim );
void fetch_array_dim(znode *result, const znode *parent, const znode *dim );
void fetch_string_offset(znode *result, const znode *parent, const znode *offset );
void zend_do_fetch_static_member(znode *result, znode *class_znode );
void zend_do_print(znode *result, const znode *arg );
void zend_do_echo(const znode *arg );
typedef int (*unary_op_type)(zval *, zval * );
typedef int (*binary_op_type)(zval *, zval *, zval * );
__attribute__ ((visibility("default"))) unary_op_type get_unary_op(int opcode);
__attribute__ ((visibility("default"))) binary_op_type get_binary_op(int opcode);

void zend_do_while_cond(const znode *expr, znode *close_bracket_token );
void zend_do_while_end(const znode *while_token, const znode *close_bracket_token );
void zend_do_do_while_begin(void);
void zend_do_do_while_end(const znode *do_token, const znode *expr_open_bracket, const znode *expr );


void zend_do_if_cond(const znode *cond, znode *closing_bracket_token );
void zend_do_if_after_statement(const znode *closing_bracket_token, unsigned char initialize );
void zend_do_if_end(void);

void zend_do_for_cond(const znode *expr, znode *second_semicolon_token );
void zend_do_for_before_statement(const znode *cond_start, const znode *second_semicolon_token );
void zend_do_for_end(const znode *second_semicolon_token );

void zend_do_pre_incdec(znode *result, const znode *op1, zend_uchar op );
void zend_do_post_incdec(znode *result, const znode *op1, zend_uchar op );

void zend_do_begin_variable_parse(void);
void zend_do_end_variable_parse(znode *variable, int type, int arg_offset );

void zend_check_writable_variable(const znode *variable);

void zend_do_free(znode *op1 );

void zend_do_add_string(znode *result, const znode *op1, znode *op2 );
void zend_do_add_variable(znode *result, const znode *op1, const znode *op2 );

int zend_do_verify_access_types(const znode *current_access_type, const znode *new_modifier);
void zend_do_begin_function_declaration(znode *function_token, znode *function_name, int is_method, int return_reference, znode *fn_flags_znode );
void zend_do_end_function_declaration(const znode *function_token );
void zend_do_receive_arg(zend_uchar op, znode *varname, const znode *offset, const znode *initialization, znode *class_type, zend_bool pass_by_reference );
int zend_do_begin_function_call(znode *function_name, zend_bool check_namespace );
void zend_do_begin_method_call(znode *left_bracket );
void zend_do_clone(znode *result, const znode *expr );
void zend_do_begin_dynamic_function_call(znode *function_name, int prefix_len );
void zend_do_fetch_class(znode *result, znode *class_name );
void zend_do_build_full_name(znode *result, znode *prefix, znode *name, int is_class_member );
int zend_do_begin_class_member_function_call(znode *class_name, znode *method_name );
void zend_do_end_function_call(znode *function_name, znode *result, const znode *argument_list, int is_method, int is_dynamic_fcall );
void zend_do_return(znode *expr, int do_end_vparse );
void zend_do_handle_exception(void);

void zend_do_begin_lambda_function_declaration(znode *result, znode *function_token, int return_reference, int is_static );
void zend_do_fetch_lexical_variable(znode *varname, zend_bool is_ref );

void zend_do_try(znode *try_token );
void zend_do_begin_catch(znode *try_token, znode *catch_class, znode *catch_var, znode *first_catch );
void zend_do_end_catch(const znode *try_token );
void zend_do_throw(const znode *expr );

__attribute__ ((visibility("default"))) int do_bind_function(const zend_op_array *op_array, zend_op *opline, HashTable *function_table, zend_bool compile_time);
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_bool compile_time );
__attribute__ ((visibility("default"))) zend_class_entry *do_bind_inherited_class(const zend_op_array *op_array, const zend_op *opline, HashTable *class_table, zend_class_entry *parent_ce, zend_bool compile_time );
__attribute__ ((visibility("default"))) void zend_do_inherit_interfaces(zend_class_entry *ce, const zend_class_entry *iface );
__attribute__ ((visibility("default"))) void zend_do_implement_interface(zend_class_entry *ce, zend_class_entry *iface );
void zend_do_implements_interface(znode *interface_znode );


void zend_add_trait_precedence(znode *precedence_znode );
void zend_add_trait_alias(znode *alias_znode );


void zend_do_implements_trait(znode *interface_znode );
__attribute__ ((visibility("default"))) void zend_do_implement_trait(zend_class_entry *ce, zend_class_entry *trait );
__attribute__ ((visibility("default"))) void zend_do_bind_traits(zend_class_entry *ce );
void zend_prepare_trait_precedence(znode *result, znode *method_reference, znode *trait_list );
void zend_prepare_reference(znode *result, znode *class_name, znode *method_name );
void zend_prepare_trait_alias(znode *result, znode *method_reference, znode *modifiers, znode *alias );

void init_trait_alias_list(znode* result, const znode* trait_alias );
void add_trait_alias(znode* result, const znode* trait_alias );
void init_trait_alias(znode* result, const znode* method_name, const znode* alias, const znode* modifiers );

__attribute__ ((visibility("default"))) void zend_do_inheritance(zend_class_entry *ce, zend_class_entry *parent_ce );
void zend_do_early_binding(void);
__attribute__ ((visibility("default"))) void zend_do_delayed_early_binding(const zend_op_array *op_array );

void zend_do_pass_param(znode *param, zend_uchar op, int offset );


void zend_do_boolean_or_begin(znode *expr1, znode *op_token );
void zend_do_boolean_or_end(znode *result, const znode *expr1, const znode *expr2, znode *op_token );
void zend_do_boolean_and_begin(znode *expr1, znode *op_token );
void zend_do_boolean_and_end(znode *result, const znode *expr1, const znode *expr2, const znode *op_token );

void zend_do_brk_cont(zend_uchar op, const znode *expr );

void zend_do_switch_cond(const znode *cond );
void zend_do_switch_end(const znode *case_list );
void zend_do_case_before_statement(const znode *case_list, znode *case_token, const znode *case_expr );
void zend_do_case_after_statement(znode *result, const znode *case_token );
void zend_do_default_before_statement(const znode *case_list, znode *default_token );

void zend_do_begin_class_declaration(const znode *class_token, znode *class_name, const znode *parent_class_name );
void zend_do_end_class_declaration(const znode *class_token, const znode *parent_token );
void zend_do_declare_property(const znode *var_name, const znode *value, zend_uint access_type );
void zend_do_declare_class_constant(znode *var_name, const znode *value );

void zend_do_fetch_property(znode *result, znode *object, const znode *property );

void zend_do_halt_compiler_register(void);

void zend_do_push_object(const znode *object );
void zend_do_pop_object(znode *object );


void zend_do_begin_new_object(znode *new_token, znode *class_type );
void zend_do_end_new_object(znode *result, const znode *new_token, const znode *argument_list );

void zend_do_fetch_constant(znode *result, znode *constant_container, znode *constant_name, int mode, zend_bool check_namespace );

void zend_do_shell_exec(znode *result, const znode *cmd );

void zend_do_init_array(znode *result, const znode *expr, const znode *offset, zend_bool is_ref );
void zend_do_add_array_element(znode *result, const znode *expr, const znode *offset, zend_bool is_ref );
void zend_do_add_static_array_element(znode *result, znode *offset, const znode *expr);
void zend_do_list_init(void);
void zend_do_list_end(znode *result, znode *expr );
void zend_do_add_list_element(const znode *element );
void zend_do_new_list_begin(void);
void zend_do_new_list_end(void);


void zend_init_list(void *result, void *item );
void zend_add_to_list(void *result, void *item );


void zend_do_cast(znode *result, const znode *expr, int type );
void zend_do_include_or_eval(int type, znode *result, const znode *op1 );

void zend_do_unset(const znode *variable );
void zend_do_isset_or_isempty(int type, znode *result, znode *variable );

void zend_do_instanceof(znode *result, const znode *expr, const znode *class_znode, int type );

void zend_do_foreach_begin(znode *foreach_token, znode *open_brackets_token, znode *array, znode *as_token, int variable );
void zend_do_foreach_cont(znode *foreach_token, const znode *open_brackets_token, const znode *as_token, znode *value, znode *key );
void zend_do_foreach_end(const znode *foreach_token, const znode *as_token );

void zend_do_declare_begin(void);
void zend_do_declare_stmt(znode *var, znode *val );
void zend_do_declare_end(const znode *declare_token );

void zend_do_exit(znode *result, const znode *message );

void zend_do_begin_silence(znode *strudel_token );
void zend_do_end_silence(const znode *strudel_token );

void zend_do_jmp_set(const znode *value, znode *jmp_token, znode *colon_token );
void zend_do_jmp_set_else(znode *result, const znode *false_value, const znode *jmp_token, const znode *colon_token );

void zend_do_begin_qm_op(const znode *cond, znode *qm_token );
void zend_do_qm_true(const znode *true_value, znode *qm_token, znode *colon_token );
void zend_do_qm_false(znode *result, const znode *false_value, const znode *qm_token, const znode *colon_token );

void zend_do_extended_info(void);
void zend_do_extended_fcall_begin(void);
void zend_do_extended_fcall_end(void);

void zend_do_ticks(void);

void zend_do_abstract_method(const znode *function_name, znode *modifiers, const znode *body );

void zend_do_declare_constant(znode *name, znode *value );
void zend_do_build_namespace_name(znode *result, znode *prefix, znode *name );
void zend_do_begin_namespace(const znode *name, zend_bool with_brackets );
void zend_do_end_namespace(void);
void zend_verify_namespace(void);
void zend_do_use(znode *name, znode *new_name, int is_global );
void zend_do_end_compilation(void);

void zend_do_label(znode *label );
void zend_do_goto(const znode *label );
void zend_resolve_goto_label(zend_op_array *op_array, zend_op *opline, int pass2 );
void zend_release_labels(void);

__attribute__ ((visibility("default"))) void function_add_ref(zend_function *function);






__attribute__ ((visibility("default"))) zend_op_array *compile_file(zend_file_handle *file_handle, int type );
__attribute__ ((visibility("default"))) zend_op_array *compile_string(zval *source_string, char *filename );
__attribute__ ((visibility("default"))) zend_op_array *compile_filename(int type, zval *filename );
__attribute__ ((visibility("default"))) int zend_execute_scripts(int type , zval **retval, int file_count, ...);
__attribute__ ((visibility("default"))) int open_file_for_scanning(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) void init_op_array(zend_op_array *op_array, zend_uchar type, int initial_ops_size );
__attribute__ ((visibility("default"))) void destroy_op_array(zend_op_array *op_array );
__attribute__ ((visibility("default"))) void zend_destroy_file_handle(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) int zend_cleanup_class_data(zend_class_entry **pce );
__attribute__ ((visibility("default"))) int zend_cleanup_user_class_data(zend_class_entry **pce );
__attribute__ ((visibility("default"))) void zend_cleanup_internal_class_data(zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_cleanup_internal_classes(void);
__attribute__ ((visibility("default"))) int zend_cleanup_function_data(zend_function *function );
__attribute__ ((visibility("default"))) int zend_cleanup_function_data_full(zend_function *function );

__attribute__ ((visibility("default"))) void destroy_zend_function(zend_function *function );
__attribute__ ((visibility("default"))) void zend_function_dtor(zend_function *function);
__attribute__ ((visibility("default"))) void destroy_zend_class(zend_class_entry **pce);
void zend_class_add_ref(zend_class_entry **ce);

__attribute__ ((visibility("default"))) void zend_mangle_property_name(char **dest, int *dest_length, const char *src1, int src1_length, const char *src2, int src2_length, int internal);
__attribute__ ((visibility("default"))) int zend_unmangle_property_name(const char *mangled_property, int mangled_property_len, const char **class_name, const char **prop_name);




zend_op *get_next_op(zend_op_array *op_array );
void init_op(zend_op *op );
int get_next_op_number(zend_op_array *op_array);
int print_class(zend_class_entry *class_entry );
void print_op_array(zend_op_array *op_array, int optimizations);
__attribute__ ((visibility("default"))) int pass_two(zend_op_array *op_array );
zend_brk_cont_element *get_next_brk_cont_element(zend_op_array *op_array);
void zend_do_first_catch(znode *open_parentheses );
void zend_initialize_try_catch_element(const znode *try_token );
void zend_do_mark_last_catch(const znode *first_catch, const znode *last_additional_catch );
__attribute__ ((visibility("default"))) zend_bool zend_is_compiling(void);
__attribute__ ((visibility("default"))) char *zend_make_compiled_string_description(const char *name );
__attribute__ ((visibility("default"))) void zend_initialize_class_data(zend_class_entry *ce, zend_bool nullify_handlers );
int zend_get_class_fetch_type(const char *class_name, uint class_name_len);

typedef zend_bool (*zend_auto_global_callback)(const char *name, uint name_len );
typedef struct _zend_auto_global {
 const char *name;
 uint name_len;
 zend_auto_global_callback auto_global_callback;
 zend_bool jit;
 zend_bool armed;
} zend_auto_global;

__attribute__ ((visibility("default"))) int zend_register_auto_global(const char *name, uint name_len, zend_bool jit, zend_auto_global_callback auto_global_callback );
__attribute__ ((visibility("default"))) void zend_activate_auto_globals(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global(const char *name, uint name_len );
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global_quick(const char *name, uint name_len, ulong hashval );
__attribute__ ((visibility("default"))) size_t zend_dirname(char *path, size_t len);

int zendlex(znode *zendlval );

int zend_add_literal(zend_op_array *op_array, const zval *zv );



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_vm_opcodes.h" 1
# 698 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_compile.h" 2
# 820 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_compile.h"

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_modules.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_build.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_modules.h" 2
# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_modules.h"
struct _zend_ini_entry;
typedef struct _zend_module_entry zend_module_entry;
typedef struct _zend_module_dep zend_module_dep;

struct _zend_module_entry {
 unsigned short size;
 unsigned int zend_api;
 unsigned char zend_debug;
 unsigned char zts;
 const struct _zend_ini_entry *ini_entry;
 const struct _zend_module_dep *deps;
 const char *name;
 const struct _zend_function_entry *functions;
 int (*module_startup_func)(int type, int module_number );
 int (*module_shutdown_func)(int type, int module_number );
 int (*request_startup_func)(int type, int module_number );
 int (*request_shutdown_func)(int type, int module_number );
 void (*info_func)(zend_module_entry *zend_module );
 const char *version;
 size_t globals_size;



 void* globals_ptr;

 void (*globals_ctor)(void *global );
 void (*globals_dtor)(void *global );
 int (*post_deactivate_func)(void);
 int module_started;
 unsigned char type;
 void *handle;
 int module_number;
 const char *build_id;
};
# 118 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_modules.h"
struct _zend_module_dep {
 const char *name;
 const char *rel;
 const char *version;
 unsigned char type;
};

extern __attribute__ ((visibility("default"))) HashTable module_registry;

void module_destructor(zend_module_entry *module);
int module_registry_cleanup(zend_module_entry *module );
int module_registry_request_startup(zend_module_entry *module );
int module_registry_unload_temp(const zend_module_entry *module );
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_list.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_list.h"





typedef struct _zend_rsrc_list_entry {
 void *ptr;
 int type;
 int refcount;
} zend_rsrc_list_entry;

typedef void (*rsrc_dtor_func_t)(zend_rsrc_list_entry *rsrc );


typedef struct _zend_rsrc_list_dtors_entry {

 void (*list_dtor)(void *);
 void (*plist_dtor)(void *);


 rsrc_dtor_func_t list_dtor_ex;
 rsrc_dtor_func_t plist_dtor_ex;

 const char *type_name;

 int module_number;
 int resource_id;
 unsigned char type;
} zend_rsrc_list_dtors_entry;



__attribute__ ((visibility("default"))) int zend_register_list_destructors(void (*ld)(void *), void (*pld)(void *), int module_number);
__attribute__ ((visibility("default"))) int zend_register_list_destructors_ex(rsrc_dtor_func_t ld, rsrc_dtor_func_t pld, const char *type_name, int module_number);

void list_entry_destructor(void *ptr);
void plist_entry_destructor(void *ptr);

void zend_clean_module_rsrc_dtors(int module_number );
int zend_init_rsrc_list(void);
int zend_init_rsrc_plist(void);
void zend_destroy_rsrc_list(HashTable *ht );
int zend_init_rsrc_list_dtors(void);
void zend_destroy_rsrc_list_dtors(void);

__attribute__ ((visibility("default"))) int zend_list_insert(void *ptr, int type );
__attribute__ ((visibility("default"))) int _zend_list_addref(int id );
__attribute__ ((visibility("default"))) int _zend_list_delete(int id );
__attribute__ ((visibility("default"))) void *_zend_list_find(int id, int *type );





__attribute__ ((visibility("default"))) int zend_register_resource(zval *rsrc_result, void *rsrc_pointer, int rsrc_type );
__attribute__ ((visibility("default"))) void *zend_fetch_resource(zval **passed_id , int default_id, const char *resource_type_name, int *found_resource_type, int num_resource_types, ...);

__attribute__ ((visibility("default"))) const char *zend_rsrc_list_get_rsrc_type(int resource );
__attribute__ ((visibility("default"))) int zend_fetch_list_dtor_id(char *type_name);

extern __attribute__ ((visibility("default"))) int le_index_ptr;
# 116 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_list.h"

# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_execute.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_execute.h"
typedef union _temp_variable {
 zval tmp_var;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  zend_bool fcall_returned_reference;
 } var;
 struct {
  zval **ptr_ptr;
  zval *str;
  zend_uint offset;
 } str_offset;
 struct {
  zval **ptr_ptr;
  zval *ptr;
  HashPointer fe_pos;
 } fe;
 zend_class_entry *class_entry;
} temp_variable;



__attribute__ ((visibility("default"))) extern void (*zend_execute)(zend_op_array *op_array );
__attribute__ ((visibility("default"))) extern void (*zend_execute_internal)(zend_execute_data *execute_data_ptr, int return_value_used );

void init_executor(void);
void shutdown_executor(void);
void shutdown_destructors(void);
__attribute__ ((visibility("default"))) void execute(zend_op_array *op_array );
__attribute__ ((visibility("default"))) void execute_internal(zend_execute_data *execute_data_ptr, int return_value_used );
__attribute__ ((visibility("default"))) int zend_is_true(zval *op);

static inline __attribute__((always_inline)) void safe_free_zval_ptr_rel(zval *p )
{
 ;

 if (p!=(executor_globals.uninitialized_zval_ptr)) {
  do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)p)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(p ); }; _efree((p) ); } while (0);
 }
}
__attribute__ ((visibility("default"))) int zend_lookup_class(const char *name, int name_length, zend_class_entry ***ce );
__attribute__ ((visibility("default"))) int zend_lookup_class_ex(const char *name, int name_length, const zend_literal *key, int use_autoload, zend_class_entry ***ce );
__attribute__ ((visibility("default"))) int zend_eval_string(char *str, zval *retval_ptr, char *string_name );
__attribute__ ((visibility("default"))) int zend_eval_stringl(char *str, int str_len, zval *retval_ptr, char *string_name );
__attribute__ ((visibility("default"))) int zend_eval_string_ex(char *str, zval *retval_ptr, char *string_name, int handle_exceptions );
__attribute__ ((visibility("default"))) int zend_eval_stringl_ex(char *str, int str_len, zval *retval_ptr, char *string_name, int handle_exceptions );

__attribute__ ((visibility("default"))) char * zend_verify_arg_class_kind(const zend_arg_info *cur_arg_info, ulong fetch_type, const char **class_name, zend_class_entry **pce );
__attribute__ ((visibility("default"))) int zend_verify_arg_error(int error_type, const zend_function *zf, zend_uint arg_num, const char *need_msg, const char *need_kind, const char *given_msg, const char *given_kind );

static inline __attribute__((always_inline)) void i_zval_ptr_dtor(zval *zval_ptr )
{
 if (!zval_delref_p(zval_ptr)) {
  ;

  if (zval_ptr != &(executor_globals.uninitialized_zval)) {
   if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)zval_ptr)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(zval_ptr ); };
   _zval_dtor((zval_ptr) );
   _efree((zval_ptr) );
  }
 } else {
  ;

  if (zval_refcount_p(zval_ptr) == 1) {
   zval_unset_isref_p(zval_ptr);
  }

  gc_zval_check_possible_root((zval_ptr) );
 }
}

static inline __attribute__((always_inline)) int i_zend_is_true(zval *op)
{
 int result;

 switch ((*op).type) {
  case 0:
   result = 0;
   break;
  case 1:
  case 3:
  case 7:
   result = ((*op).value.lval?1:0);
   break;
  case 2:
   result = ((*op).value.dval ? 1 : 0);
   break;
  case 6:
   if ((*op).value.str.len == 0
    || ((*op).value.str.len==1 && (*op).value.str.val[0]=='0')) {
    result = 0;
   } else {
    result = 1;
   }
   break;
  case 4:
   result = (zend_hash_num_elements((*op).value.ht)?1:0);
   break;
  case 5:
   if(((*op).type == 5 && (((*op)).value.obj.handlers->get_class_entry != ((void *)0)))) {
    ;

    if ((*op).value.obj.handlers->cast_object) {
     zval tmp;
     if ((*op).value.obj.handlers->cast_object(op, &tmp, 3 ) == 0) {
      result = (tmp).value.lval;
      break;
     }
    } else if ((*op).value.obj.handlers->get) {
     zval *tmp = (*op).value.obj.handlers->get(op );
     if((*tmp).type != 5) {

      convert_to_boolean(tmp);
      result = (*tmp).value.lval;
      _zval_ptr_dtor((&tmp) );
      break;
     }
    }
   }
   result = 1;
   break;
  default:
   result = 0;
   break;
 }
 return result;
}

__attribute__ ((visibility("default"))) int zval_update_constant(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_inline_change(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_no_inline_change(zval **pp, void *arg );
__attribute__ ((visibility("default"))) int zval_update_constant_ex(zval **pp, void *arg, zend_class_entry *scope );




struct _zend_vm_stack {
 void **top;
 void **end;
 zend_vm_stack prev;
};
# 183 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_execute.h"
static inline __attribute__((always_inline)) zend_vm_stack zend_vm_stack_new_page(int count) {
 zend_vm_stack page = (zend_vm_stack)_emalloc(((((sizeof(*page)) + 4 - 1) & ~(4 -1)) + sizeof(void*) * count) );

 page->top = ((void**)(((char*)(page)) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1))));
 page->end = page->top + count;
 page->prev = ((void *)0);
 return page;
}

static inline __attribute__((always_inline)) void zend_vm_stack_init(void)
{
 (executor_globals.argument_stack) = zend_vm_stack_new_page(((16 * 1024) - 16));
}

static inline __attribute__((always_inline)) void zend_vm_stack_destroy(void)
{
 zend_vm_stack stack = (executor_globals.argument_stack);

 while (stack != ((void *)0)) {
  zend_vm_stack p = stack->prev;
  _efree((stack) );
  stack = p;
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_extend(int count )
{
 zend_vm_stack p = zend_vm_stack_new_page(count >= ((16 * 1024) - 16) ? count : ((16 * 1024) - 16));
 p->prev = (executor_globals.argument_stack);
 (executor_globals.argument_stack) = p;
}

static inline __attribute__((always_inline)) void **zend_vm_stack_top(void)
{
 return (executor_globals.argument_stack)->top;
}

static inline __attribute__((always_inline)) void zend_vm_stack_push(void *ptr )
{
 do { if (__builtin_expect((1) > (executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top, 0)) { zend_vm_stack_extend((1) ); } } while (0);
 *((executor_globals.argument_stack)->top++) = ptr;
}

static inline __attribute__((always_inline)) void zend_vm_stack_push_nocheck(void *ptr )
{
 *((executor_globals.argument_stack)->top++) = ptr;
}

static inline __attribute__((always_inline)) void *zend_vm_stack_pop(void)
{
 void *el = *(--(executor_globals.argument_stack)->top);

 if (__builtin_expect((executor_globals.argument_stack)->top == ((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))), 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);
  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
  }
 return el;
}

static inline __attribute__((always_inline)) void *zend_vm_stack_alloc(size_t size )
{
 void *ret;

 size = (size + (sizeof(void*) - 1)) / sizeof(void*);


 if (4 > sizeof(void*)) {
  int extra = (4 - ((zend_uintptr_t)(executor_globals.argument_stack)->top & (4 - 1))) / sizeof(void*);

  if (__builtin_expect(size + extra + (((sizeof(void*)) + 4 - 1) & ~(4 -1)) / sizeof(void*) > (zend_uintptr_t)((executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top), 0)
                                                                          ) {
   zend_vm_stack_extend(size );
  } else {
   void **old_top = (executor_globals.argument_stack)->top;

   (executor_globals.argument_stack)->top += extra;

   *(executor_globals.argument_stack)->top = (void*)old_top;
   (executor_globals.argument_stack)->top += (((sizeof(void*)) + 4 - 1) & ~(4 -1)) / sizeof(void*);
  }
 } else {
  do { if (__builtin_expect(((int)size) > (executor_globals.argument_stack)->end - (executor_globals.argument_stack)->top, 0)) { zend_vm_stack_extend(((int)size) ); } } while (0);
 }
 ret = (void*)(executor_globals.argument_stack)->top;
 (executor_globals.argument_stack)->top += size;
 return ret;
}

static inline __attribute__((always_inline)) void zend_vm_stack_free_int(void *ptr )
{
 if (__builtin_expect(((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))) == (void**)ptr, 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
 } else {
  (executor_globals.argument_stack)->top = (void**)ptr;
 }
}

static inline __attribute__((always_inline)) void zend_vm_stack_free(void *ptr )
{
 if (__builtin_expect(((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))) == (void**)ptr, 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  (executor_globals.argument_stack) = p->prev;
  _efree((p) );
 } else {

  if (4 > sizeof(void*)) {
   ptr = (void*)(((char*)ptr) - (((sizeof(void*)) + 4 - 1) & ~(4 -1)));
   (executor_globals.argument_stack)->top = *(void***)ptr;
  } else {
   (executor_globals.argument_stack)->top = (void**)ptr;
  }
 }
}

static inline __attribute__((always_inline)) void** zend_vm_stack_push_args(int count )
{

 if (__builtin_expect((executor_globals.argument_stack)->top - ((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))) < count, 0) ||
  __builtin_expect((executor_globals.argument_stack)->top == (executor_globals.argument_stack)->end, 0)) {
  zend_vm_stack p = (executor_globals.argument_stack);

  zend_vm_stack_extend(count + 1 );

  (executor_globals.argument_stack)->top += count;
  *((executor_globals.argument_stack)->top) = (void*)(zend_uintptr_t)count;
  while (count-- > 0) {
   void *data = *(--p->top);

   if (__builtin_expect(p->top == ((void**)(((char*)(p)) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))), 0)) {
    zend_vm_stack r = p;

    (executor_globals.argument_stack)->prev = p->prev;
    p = p->prev;
    _efree((r) );
   }
   *(((void**)(((char*)((executor_globals.argument_stack))) + (((sizeof(struct _zend_vm_stack)) + 4 - 1) & ~(4 -1)))) + count) = data;
  }
  return (executor_globals.argument_stack)->top++;
 }
 *((executor_globals.argument_stack)->top) = (void*)(zend_uintptr_t)count;
 return (executor_globals.argument_stack)->top++;
}

static inline __attribute__((always_inline)) void zend_vm_stack_clear_multiple(void)
{
 void **p = (executor_globals.argument_stack)->top - 1;
 int delete_count = (int)(zend_uintptr_t) *p;

 while (--delete_count>=0) {
  zval *q = *(zval **)(--p);
  *p = ((void *)0);
  i_zval_ptr_dtor(q );
 }
 zend_vm_stack_free_int(p );
}

static inline __attribute__((always_inline)) zval** zend_vm_stack_get_arg(int requested_arg )
{
 void **p = (executor_globals.current_execute_data)->prev_execute_data->function_state.arguments;
 int arg_count = (int)(zend_uintptr_t) *p;

 if (__builtin_expect(requested_arg > arg_count, 0)) {
  return ((void *)0);
 }
 return (zval**)p - arg_count + requested_arg - 1;
}

static inline __attribute__((always_inline)) void zend_arg_types_stack_2_pop(zend_ptr_stack *stack, zval **object, zend_function **fbc)
{
 void *a, *b;

 zend_ptr_stack_2_pop(stack, &a, &b);

 *object = (zval *) a;
 *fbc = (zend_function *) b;
}

static inline __attribute__((always_inline)) void zend_arg_types_stack_3_pop(zend_ptr_stack *stack, zend_class_entry **called_scope, zval **object, zend_function **fbc)
{
 void *a, *b, *c;

 zend_ptr_stack_3_pop(stack, &a, &b, &c);

 *called_scope = (zend_class_entry *) a;
 *object = (zval *) b;
 *fbc = (zend_function *) c;
}

void execute_new_code(void);



__attribute__ ((visibility("default"))) const char *get_active_class_name(const char **space );
__attribute__ ((visibility("default"))) const char *get_active_function_name(void);
__attribute__ ((visibility("default"))) const char *zend_get_executed_filename(void);
__attribute__ ((visibility("default"))) uint zend_get_executed_lineno(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_executing(void);

__attribute__ ((visibility("default"))) void zend_set_timeout(long seconds, int reset_signals);
__attribute__ ((visibility("default"))) void zend_unset_timeout(void);
__attribute__ ((visibility("default"))) void zend_timeout(int dummy);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class(const char *class_name, uint class_name_len, int fetch_type );
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class_by_name(const char *class_name, uint class_name_len, const zend_literal *key, int fetch_type );
void zend_verify_abstract_class(zend_class_entry *ce );
# 410 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval** zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 420 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );
__attribute__ ((visibility("default"))) zval **zend_get_zval_ptr_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );
# 451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_execute.h"

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h" 2




typedef struct _zend_function_entry {
 const char *fname;
 void (*handler)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 const struct _zend_arg_info *arg_info;
 zend_uint num_args;
 zend_uint flags;
} zend_function_entry;

typedef struct _zend_fcall_info {
 size_t size;
 HashTable *function_table;
 zval *function_name;
 HashTable *symbol_table;
 zval **retval_ptr_ptr;
 zend_uint param_count;
 zval ***params;
 zval *object_ptr;
 zend_bool no_separation;
} zend_fcall_info;

typedef struct _zend_fcall_info_cache {
 zend_bool initialized;
 zend_function *function_handler;
 zend_class_entry *calling_scope;
 zend_class_entry *called_scope;
 zval *object_ptr;
} zend_fcall_info_cache;
# 228 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 249 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_parse_parameters(int num_args , const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_parameters_ex(int flags, int num_args , const char *type_spec, ...);
__attribute__ ((visibility("default"))) char *zend_zval_type_name(const zval *arg);

__attribute__ ((visibility("default"))) int zend_parse_method_parameters(int num_args , zval *this_ptr, const char *type_spec, ...);
__attribute__ ((visibility("default"))) int zend_parse_method_parameters_ex(int flags, int num_args , zval *this_ptr, const char *type_spec, ...);



__attribute__ ((visibility("default"))) int zend_register_functions(zend_class_entry *scope, const zend_function_entry *functions, HashTable *function_table, int type );
__attribute__ ((visibility("default"))) void zend_unregister_functions(const zend_function_entry *functions, int count, HashTable *function_table );
__attribute__ ((visibility("default"))) int zend_startup_module(zend_module_entry *module_entry);
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_internal_module(zend_module_entry *module_entry );
__attribute__ ((visibility("default"))) zend_module_entry* zend_register_module_ex(zend_module_entry *module );
__attribute__ ((visibility("default"))) int zend_startup_module_ex(zend_module_entry *module );
__attribute__ ((visibility("default"))) int zend_startup_modules(void);
__attribute__ ((visibility("default"))) void zend_collect_module_handlers(void);
__attribute__ ((visibility("default"))) void zend_destroy_modules(void);
__attribute__ ((visibility("default"))) void zend_check_magic_method_implementation(const zend_class_entry *ce, const zend_function *fptr, int error_type );

__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class(zend_class_entry *class_entry );
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class_ex(zend_class_entry *class_entry, zend_class_entry *parent_ce, char *parent_name );
__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_interface(zend_class_entry *orig_class_entry );
__attribute__ ((visibility("default"))) void zend_class_implements(zend_class_entry *class_entry , int num_interfaces, ...);

__attribute__ ((visibility("default"))) int zend_register_class_alias_ex(const char *name, int name_len, zend_class_entry *ce );






__attribute__ ((visibility("default"))) int zend_disable_function(char *function_name, uint function_name_length );
__attribute__ ((visibility("default"))) int zend_disable_class(char *class_name, uint class_name_length );

__attribute__ ((visibility("default"))) void zend_wrong_param_count(void);
# 293 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) zend_bool zend_is_callable_ex(zval *callable, zval *object_ptr, uint check_flags, char **callable_name, int *callable_name_len, zend_fcall_info_cache *fcc, char **error );
__attribute__ ((visibility("default"))) zend_bool zend_is_callable(zval *callable, uint check_flags, char **callable_name );
__attribute__ ((visibility("default"))) zend_bool zend_make_callable(zval *callable, char **callable_name );
__attribute__ ((visibility("default"))) const char *zend_get_module_version(const char *module_name);
__attribute__ ((visibility("default"))) int zend_get_module_started(const char *module_name);
__attribute__ ((visibility("default"))) int zend_declare_property(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_ex(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type, const char *doc_comment, int doc_comment_len );
__attribute__ ((visibility("default"))) int zend_declare_property_null(zend_class_entry *ce, const char *name, int name_length, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_bool(zend_class_entry *ce, const char *name, int name_length, long value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_long(zend_class_entry *ce, const char *name, int name_length, long value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_double(zend_class_entry *ce, const char *name, int name_length, double value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_string(zend_class_entry *ce, const char *name, int name_length, const char *value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_stringl(zend_class_entry *ce, const char *name, int name_length, const char *value, int value_len, int access_type );

__attribute__ ((visibility("default"))) int zend_declare_class_constant(zend_class_entry *ce, const char *name, size_t name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_null(zend_class_entry *ce, const char *name, size_t name_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_long(zend_class_entry *ce, const char *name, size_t name_length, long value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_bool(zend_class_entry *ce, const char *name, size_t name_length, zend_bool value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_double(zend_class_entry *ce, const char *name, size_t name_length, double value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_stringl(zend_class_entry *ce, const char *name, size_t name_length, const char *value, size_t value_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_string(zend_class_entry *ce, const char *name, size_t name_length, const char *value );

__attribute__ ((visibility("default"))) void zend_update_class_constants(zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_update_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) void zend_update_property_null(zend_class_entry *scope, zval *object, const char *name, int name_length );
__attribute__ ((visibility("default"))) void zend_update_property_bool(zend_class_entry *scope, zval *object, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) void zend_update_property_long(zend_class_entry *scope, zval *object, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) void zend_update_property_double(zend_class_entry *scope, zval *object, const char *name, int name_length, double value );
__attribute__ ((visibility("default"))) void zend_update_property_string(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) void zend_update_property_stringl(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) int zend_update_static_property(zend_class_entry *scope, const char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_null(zend_class_entry *scope, const char *name, int name_length );
__attribute__ ((visibility("default"))) int zend_update_static_property_bool(zend_class_entry *scope, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) int zend_update_static_property_long(zend_class_entry *scope, const char *name, int name_length, long value );
__attribute__ ((visibility("default"))) int zend_update_static_property_double(zend_class_entry *scope, const char *name, int name_length, double value );
__attribute__ ((visibility("default"))) int zend_update_static_property_string(zend_class_entry *scope, const char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_stringl(zend_class_entry *scope, const char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) zval *zend_read_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zval *zend_read_static_property(zend_class_entry *scope, const char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zend_class_entry *zend_get_class_entry(const zval *zobject );
__attribute__ ((visibility("default"))) int zend_get_object_classname(const zval *object, const char **class_name, zend_uint *class_name_len );
__attribute__ ((visibility("default"))) char *zend_get_type_by_const(int type);
# 358 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int _array_init(zval *arg, uint size );
__attribute__ ((visibility("default"))) int _object_init(zval *arg );
__attribute__ ((visibility("default"))) int _object_init_ex(zval *arg, zend_class_entry *ce );
__attribute__ ((visibility("default"))) int _object_and_properties_init(zval *arg, zend_class_entry *ce, HashTable *properties );
__attribute__ ((visibility("default"))) void object_properties_init(zend_object *object, zend_class_entry *class_type);

__attribute__ ((visibility("default"))) void zend_merge_properties(zval *obj, HashTable *properties, int destroy_ht );


__attribute__ ((visibility("default"))) int add_assoc_function(zval *arg, const char *key, void (*function_ptr)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used ));

__attribute__ ((visibility("default"))) int add_assoc_long_ex(zval *arg, const char *key, uint key_len, long n);
__attribute__ ((visibility("default"))) int add_assoc_null_ex(zval *arg, const char *key, uint key_len);
__attribute__ ((visibility("default"))) int add_assoc_bool_ex(zval *arg, const char *key, uint key_len, int b);
__attribute__ ((visibility("default"))) int add_assoc_resource_ex(zval *arg, const char *key, uint key_len, int r);
__attribute__ ((visibility("default"))) int add_assoc_double_ex(zval *arg, const char *key, uint key_len, double d);
__attribute__ ((visibility("default"))) int add_assoc_string_ex(zval *arg, const char *key, uint key_len, char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_assoc_stringl_ex(zval *arg, const char *key, uint key_len, char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_assoc_zval_ex(zval *arg, const char *key, uint key_len, zval *value);
# 393 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int add_index_long(zval *arg, ulong idx, long n);
__attribute__ ((visibility("default"))) int add_index_null(zval *arg, ulong idx);
__attribute__ ((visibility("default"))) int add_index_bool(zval *arg, ulong idx, int b);
__attribute__ ((visibility("default"))) int add_index_resource(zval *arg, ulong idx, int r);
__attribute__ ((visibility("default"))) int add_index_double(zval *arg, ulong idx, double d);
__attribute__ ((visibility("default"))) int add_index_string(zval *arg, ulong idx, const char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_index_stringl(zval *arg, ulong idx, const char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_index_zval(zval *arg, ulong index, zval *value);

__attribute__ ((visibility("default"))) int add_next_index_long(zval *arg, long n);
__attribute__ ((visibility("default"))) int add_next_index_null(zval *arg);
__attribute__ ((visibility("default"))) int add_next_index_bool(zval *arg, int b);
__attribute__ ((visibility("default"))) int add_next_index_resource(zval *arg, int r);
__attribute__ ((visibility("default"))) int add_next_index_double(zval *arg, double d);
__attribute__ ((visibility("default"))) int add_next_index_string(zval *arg, const char *str, int duplicate);
__attribute__ ((visibility("default"))) int add_next_index_stringl(zval *arg, const char *str, uint length, int duplicate);
__attribute__ ((visibility("default"))) int add_next_index_zval(zval *arg, zval *value);

__attribute__ ((visibility("default"))) int add_get_assoc_string_ex(zval *arg, const char *key, uint key_len, const char *str, void **dest, int duplicate);
__attribute__ ((visibility("default"))) int add_get_assoc_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length, void **dest, int duplicate);




__attribute__ ((visibility("default"))) int add_get_index_long(zval *arg, ulong idx, long l, void **dest);
__attribute__ ((visibility("default"))) int add_get_index_double(zval *arg, ulong idx, double d, void **dest);
__attribute__ ((visibility("default"))) int add_get_index_string(zval *arg, ulong idx, const char *str, void **dest, int duplicate);
__attribute__ ((visibility("default"))) int add_get_index_stringl(zval *arg, ulong idx, const char *str, uint length, void **dest, int duplicate);

__attribute__ ((visibility("default"))) int add_property_long_ex(zval *arg, const char *key, uint key_len, long l );
__attribute__ ((visibility("default"))) int add_property_null_ex(zval *arg, const char *key, uint key_len );
__attribute__ ((visibility("default"))) int add_property_bool_ex(zval *arg, const char *key, uint key_len, int b );
__attribute__ ((visibility("default"))) int add_property_resource_ex(zval *arg, const char *key, uint key_len, long r );
__attribute__ ((visibility("default"))) int add_property_double_ex(zval *arg, const char *key, uint key_len, double d );
__attribute__ ((visibility("default"))) int add_property_string_ex(zval *arg, const char *key, uint key_len, const char *str, int duplicate );
__attribute__ ((visibility("default"))) int add_property_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length, int duplicate );
__attribute__ ((visibility("default"))) int add_property_zval_ex(zval *arg, const char *key, uint key_len, zval *value );
# 441 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 457 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int zend_fcall_info_init(zval *callable, uint check_flags, zend_fcall_info *fci, zend_fcall_info_cache *fcc, char **callable_name, char **error );




__attribute__ ((visibility("default"))) void zend_fcall_info_args_clear(zend_fcall_info *fci, int free_mem);




__attribute__ ((visibility("default"))) void zend_fcall_info_args_save(zend_fcall_info *fci, int *param_count, zval ****params);



__attribute__ ((visibility("default"))) void zend_fcall_info_args_restore(zend_fcall_info *fci, int param_count, zval ***params);




__attribute__ ((visibility("default"))) int zend_fcall_info_args(zend_fcall_info *fci, zval *args );





__attribute__ ((visibility("default"))) int zend_fcall_info_argp(zend_fcall_info *fci , int argc, zval ***argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argv(zend_fcall_info *fci , int argc, va_list *argv);





__attribute__ ((visibility("default"))) int zend_fcall_info_argn(zend_fcall_info *fci , int argc, ...);




__attribute__ ((visibility("default"))) int zend_fcall_info_call(zend_fcall_info *fci, zend_fcall_info_cache *fcc, zval **retval, zval *args );

__attribute__ ((visibility("default"))) int zend_call_function(zend_fcall_info *fci, zend_fcall_info_cache *fci_cache );

__attribute__ ((visibility("default"))) int zend_set_hash_symbol(zval *symbol, const char *name, int name_length, zend_bool is_ref, int num_symbol_tables, ...);

__attribute__ ((visibility("default"))) void zend_delete_variable(zend_execute_data *ex, HashTable *ht, const char *name, int name_len, ulong hash_value );

__attribute__ ((visibility("default"))) int zend_delete_global_variable(const char *name, int name_len );

__attribute__ ((visibility("default"))) int zend_delete_global_variable_ex(const char *name, int name_len, ulong hash_value );

__attribute__ ((visibility("default"))) void zend_reset_all_cv(HashTable *symbol_table );

__attribute__ ((visibility("default"))) void zend_rebuild_symbol_table(void);



__attribute__ ((visibility("default"))) void zif_display_disabled_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_display_disabled_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

# 731 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h"

# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 87 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"
# 1 "/usr/include/assert.h" 1 3 4
# 88 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 103 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/build-defs.h" 1
# 104 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 128 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"

__attribute__ ((visibility("default"))) size_t php_strlcpy(char *dst, const char *src, size_t siz);







__attribute__ ((visibility("default"))) size_t php_strlcat(char *dst, const char *src, size_t siz);

# 168 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"
# 1 "/usr/include/ctype.h" 1 3 4
# 30 "/usr/include/ctype.h" 3 4

# 48 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
# 96 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__));
extern int isalpha (int) __attribute__ ((__nothrow__));
extern int iscntrl (int) __attribute__ ((__nothrow__));
extern int isdigit (int) __attribute__ ((__nothrow__));
extern int islower (int) __attribute__ ((__nothrow__));
extern int isgraph (int) __attribute__ ((__nothrow__));
extern int isprint (int) __attribute__ ((__nothrow__));
extern int ispunct (int) __attribute__ ((__nothrow__));
extern int isspace (int) __attribute__ ((__nothrow__));
extern int isupper (int) __attribute__ ((__nothrow__));
extern int isxdigit (int) __attribute__ ((__nothrow__));



extern int tolower (int __c) __attribute__ ((__nothrow__));


extern int toupper (int __c) __attribute__ ((__nothrow__));








extern int isblank (int) __attribute__ ((__nothrow__));


# 142 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
# 190 "/usr/include/ctype.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) tolower (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}

extern __inline int
__attribute__ ((__nothrow__)) toupper (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_toupper_loc ())[__c] : __c;
}
# 247 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
# 323 "/usr/include/ctype.h" 3 4

# 169 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2

# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4

# 203 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 204 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 208 "/usr/include/unistd.h" 2 3 4
# 227 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 228 "/usr/include/unistd.h" 2 3 4
# 256 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 268 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 305 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;
# 331 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
# 350 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 373 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
# 414 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__)) ;
# 429 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__));
# 441 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__));






extern int usleep (__useconds_t __useconds);
# 466 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__)) ;
# 508 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__)) ;
# 522 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));
# 540 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern int execv (__const char *__path, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (__const char *__file, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 595 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 607 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__));
# 643 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
# 669 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__));
# 686 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__)) ;
# 719 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__));
# 775 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__));





extern int ttyslot (void) __attribute__ ((__nothrow__));




extern int link (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 890 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__));
# 891 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__));


extern int revoke (__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) __attribute__ ((__nothrow__));



extern char *getusershell (void) __attribute__ ((__nothrow__));
extern void endusershell (void) __attribute__ ((__nothrow__));
extern void setusershell (void) __attribute__ ((__nothrow__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__)) ;






extern int chroot (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
# 976 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__));





extern int getpagesize (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__));
# 1007 "/usr/include/unistd.h" 3 4
extern int truncate (__const char *__file, __off_t __length)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 1026 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__)) ;
# 1047 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__));
# 1068 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__));
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1122 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1151 "/usr/include/unistd.h" 3 4
extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 1160 "/usr/include/unistd.h" 3 4

# 171 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 188 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_hash.h" 1
# 189 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_alloc.h" 1
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_stack.h" 1
# 191 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 211 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"
# 1 "/usr/include/pwd.h" 1 3 4
# 28 "/usr/include/pwd.h" 3 4





# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 34 "/usr/include/pwd.h" 2 3 4
# 50 "/usr/include/pwd.h" 3 4
struct passwd
{
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
# 73 "/usr/include/pwd.h" 3 4
extern void setpwent (void);





extern void endpwent (void);





extern struct passwd *getpwent (void);
# 95 "/usr/include/pwd.h" 3 4
extern struct passwd *fgetpwent (FILE *__stream);







extern int putpwent (__const struct passwd *__restrict __p,
       FILE *__restrict __f);






extern struct passwd *getpwuid (__uid_t __uid);





extern struct passwd *getpwnam (__const char *__name);
# 140 "/usr/include/pwd.h" 3 4
extern int getpwent_r (struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result);


extern int getpwuid_r (__uid_t __uid,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result);

extern int getpwnam_r (__const char *__restrict __name,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result);
# 164 "/usr/include/pwd.h" 3 4
extern int fgetpwent_r (FILE *__restrict __stream,
   struct passwd *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct passwd **__restrict __result);
# 184 "/usr/include/pwd.h" 3 4

# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 1 "/usr/include/sys/param.h" 1 3 4
# 26 "/usr/include/sys/param.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 27 "/usr/include/sys/param.h" 2 3 4

# 1 "/usr/include/linux/param.h" 1 3 4



# 1 "/usr/include/asm/param.h" 1 3 4
# 1 "/usr/include/asm-generic/param.h" 1 3 4
# 1 "/usr/include/asm/param.h" 2 3 4
# 5 "/usr/include/linux/param.h" 2 3 4
# 29 "/usr/include/sys/param.h" 2 3 4
# 213 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2




# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 218 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 240 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/snprintf.h" 1
# 73 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/snprintf.h"
typedef int bool_int;

typedef enum {
 NO = 0, YES = 1
} boolean_e;



__attribute__ ((visibility("default"))) int ap_php_slprintf(char *buf, size_t len, const char *format,...);
__attribute__ ((visibility("default"))) int ap_php_vslprintf(char *buf, size_t len, const char *format, va_list ap);
__attribute__ ((visibility("default"))) int ap_php_snprintf(char *, size_t, const char *, ...);
__attribute__ ((visibility("default"))) int ap_php_vsnprintf(char *, size_t, const char *, va_list ap);
__attribute__ ((visibility("default"))) int ap_php_vasprintf(char **buf, const char *format, va_list ap);
__attribute__ ((visibility("default"))) int ap_php_asprintf(char **buf, const char *format, ...);
__attribute__ ((visibility("default"))) int php_sprintf (char* s, const char* format, ...) __attribute__ ((format(printf, 2, 3)));
__attribute__ ((visibility("default"))) char * php_gcvt(double value, int ndigit, char dec_point, char exponent, char *buf);
__attribute__ ((visibility("default"))) char * php_conv_fp(register char format, register double num,
   boolean_e add_dp, int precision, char dec_point, bool_int * is_negative, char *buf, int *len);


# 127 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/snprintf.h"
typedef enum {
 LM_STD = 0,

 LM_INTMAX_T,


 LM_PTRDIFF_T,


 LM_LONG_LONG,

 LM_SIZE_T,
 LM_LONG,
 LM_LONG_DOUBLE
} length_modifier_e;
# 152 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/snprintf.h"
typedef long long int wide_int;
typedef unsigned long long int u_wide_int;

extern char * ap_php_conv_10(register wide_int num, register bool_int is_unsigned,
    register bool_int * is_negative, char *buf_end, register int *len);

extern char * ap_php_conv_p2(register u_wide_int num, register int nbits,
   char format, char *buf_end, register int *len);
# 242 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/spprintf.h" 1
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/spprintf.h"

__attribute__ ((visibility("default"))) int spprintf( char **pbuf, size_t max_len, const char *format, ...) __attribute__ ((format(printf, 3, 4)));

__attribute__ ((visibility("default"))) int vspprintf(char **pbuf, size_t max_len, const char *format, va_list ap) __attribute__ ((format(printf, 3, 0)));

# 244 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 272 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"
extern char **environ;
# 283 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"

void phperror(char *error);
__attribute__ ((visibility("default"))) int php_write(void *buf, uint size );
__attribute__ ((visibility("default"))) int php_printf(const char *format, ...) __attribute__ ((format(printf, 1, 2)))
    ;
__attribute__ ((visibility("default"))) int php_get_module_initialized(void);
__attribute__ ((visibility("default"))) void php_log_err(char *log_message );
int Debug(char *format, ...) __attribute__ ((format(printf, 1, 2)));
int cfgparse(void);






static inline __attribute__((deprecated)) void php_set_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class )
{
 zend_replace_error_handling(error_handling, exception_class, ((void *)0) );
}
static inline __attribute__((deprecated)) void php_std_error_handling() {}

__attribute__ ((visibility("default"))) void php_verror(const char *docref, const char *params, int type, const char *format, va_list args ) __attribute__ ((format(printf, 4, 0)));
# 313 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"
__attribute__ ((visibility("default"))) void php_error_docref0(const char *docref , int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 3, 0 + 4)));
__attribute__ ((visibility("default"))) void php_error_docref1(const char *docref , const char *param1, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 4, 0 + 5)));
__attribute__ ((visibility("default"))) void php_error_docref2(const char *docref , const char *param1, const char *param2, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 5, 0 + 6)));




# 336 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"

__attribute__ ((visibility("default"))) extern int (*php_register_internal_extensions_func)(void);
__attribute__ ((visibility("default"))) int php_register_internal_extensions(void);
__attribute__ ((visibility("default"))) int php_mergesort(void *base, size_t nmemb, register size_t size, int (*cmp)(const void *, const void * ) );
__attribute__ ((visibility("default"))) void php_register_pre_request_shutdown(void (*func)(void *), void *userdata);
__attribute__ ((visibility("default"))) void php_com_initialize(void);
__attribute__ ((visibility("default"))) char *php_get_current_user(void);

# 397 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_output.h" 1
# 50 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_output.h"
typedef enum _php_output_handler_status_t {
 PHP_OUTPUT_HANDLER_FAILURE,
 PHP_OUTPUT_HANDLER_SUCCESS,
 PHP_OUTPUT_HANDLER_NO_DATA
} php_output_handler_status_t;
# 72 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_output.h"
typedef enum _php_output_handler_hook_t {
 PHP_OUTPUT_HANDLER_HOOK_GET_OPAQ,
 PHP_OUTPUT_HANDLER_HOOK_GET_FLAGS,
 PHP_OUTPUT_HANDLER_HOOK_GET_LEVEL,
 PHP_OUTPUT_HANDLER_HOOK_IMMUTABLE,
 PHP_OUTPUT_HANDLER_HOOK_DISABLE,

 PHP_OUTPUT_HANDLER_HOOK_LAST
} php_output_handler_hook_t;
# 90 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_output.h"
typedef struct _php_output_buffer {
 char *data;
 size_t size;
 size_t used;
 uint free:1;
 uint _res:31;
} php_output_buffer;

typedef struct _php_output_context {
 int op;
 php_output_buffer in;
 php_output_buffer out;



} php_output_context;




typedef void (*php_output_handler_func_t)(char *output, uint output_len, char **handled_output, uint *handled_output_len, int mode );

typedef int (*php_output_handler_context_func_t)(void **handler_context, php_output_context *output_context);

typedef void (*php_output_handler_context_dtor_t)(void *opaq );

typedef int (*php_output_handler_conflict_check_t)(const char *handler_name, size_t handler_name_len );

typedef struct _php_output_handler *(*php_output_handler_alias_ctor_t)(const char *handler_name, size_t handler_name_len, size_t chunk_size, int flags );

typedef struct _php_output_handler_user_func_t {
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
 zval *zoh;
} php_output_handler_user_func_t;

typedef struct _php_output_handler {
 char *name;
 size_t name_len;
 int flags;
 int level;
 size_t size;
 php_output_buffer buffer;

 void *opaq;
 void (*dtor)(void *opaq );

 union {
  php_output_handler_user_func_t *user;
  php_output_handler_context_func_t internal;
 } func;
} php_output_handler;

typedef struct _zend_output_globals {
 int flags;
 zend_stack handlers;
 php_output_handler *active;
 php_output_handler *running;
 const char *output_start_filename;
 int output_start_lineno;
} zend_output_globals;
# 176 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_output.h"


extern const char php_output_default_handler_name[sizeof("default output handler")];
extern const char php_output_devnull_handler_name[sizeof("null output handler")];
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_output.h"
__attribute__ ((visibility("default"))) void php_output_startup(void);

__attribute__ ((visibility("default"))) void php_output_shutdown(void);

__attribute__ ((visibility("default"))) void php_output_register_constants(void);


__attribute__ ((visibility("default"))) int php_output_activate(void);

__attribute__ ((visibility("default"))) void php_output_deactivate(void);

__attribute__ ((visibility("default"))) void php_output_set_status(int status );
__attribute__ ((visibility("default"))) int php_output_get_status(void);
__attribute__ ((visibility("default"))) void php_output_set_implicit_flush(int flush );
__attribute__ ((visibility("default"))) const char *php_output_get_start_filename(void);
__attribute__ ((visibility("default"))) int php_output_get_start_lineno(void);

__attribute__ ((visibility("default"))) int php_output_write_unbuffered(const char *str, size_t len );
__attribute__ ((visibility("default"))) int php_output_write(const char *str, size_t len );

__attribute__ ((visibility("default"))) int php_output_flush(void);
__attribute__ ((visibility("default"))) void php_output_flush_all(void);
__attribute__ ((visibility("default"))) int php_output_clean(void);
__attribute__ ((visibility("default"))) void php_output_clean_all(void);
__attribute__ ((visibility("default"))) int php_output_end(void);
__attribute__ ((visibility("default"))) void php_output_end_all(void);
__attribute__ ((visibility("default"))) int php_output_discard(void);
__attribute__ ((visibility("default"))) void php_output_discard_all(void);

__attribute__ ((visibility("default"))) int php_output_get_contents(zval *p );
__attribute__ ((visibility("default"))) int php_output_get_length(zval *p );
__attribute__ ((visibility("default"))) int php_output_get_level(void);

__attribute__ ((visibility("default"))) int php_output_start_default(void);
__attribute__ ((visibility("default"))) int php_output_start_devnull(void);

__attribute__ ((visibility("default"))) int php_output_start_user(zval *output_handler, size_t chunk_size, int flags );
__attribute__ ((visibility("default"))) int php_output_start_internal(const char *name, size_t name_len, php_output_handler_func_t output_handler, size_t chunk_size, int flags );

__attribute__ ((visibility("default"))) php_output_handler *php_output_handler_create_user(zval *handler, size_t chunk_size, int flags );
__attribute__ ((visibility("default"))) php_output_handler *php_output_handler_create_internal(const char *name, size_t name_len, php_output_handler_context_func_t handler, size_t chunk_size, int flags );

__attribute__ ((visibility("default"))) void php_output_handler_set_context(php_output_handler *handler, void *opaq, void (*dtor)(void* ) );
__attribute__ ((visibility("default"))) int php_output_handler_start(php_output_handler *handler );
__attribute__ ((visibility("default"))) int php_output_handler_started(const char *name, size_t name_len );
__attribute__ ((visibility("default"))) int php_output_handler_hook(php_output_handler_hook_t type, void *arg );
__attribute__ ((visibility("default"))) void php_output_handler_dtor(php_output_handler *handler );
__attribute__ ((visibility("default"))) void php_output_handler_free(php_output_handler **handler );

__attribute__ ((visibility("default"))) int php_output_handler_conflict(const char *handler_new, size_t handler_new_len, const char *handler_set, size_t handler_set_len );
__attribute__ ((visibility("default"))) int php_output_handler_conflict_register(const char *handler_name, size_t handler_name_len, php_output_handler_conflict_check_t check_func );
__attribute__ ((visibility("default"))) int php_output_handler_reverse_conflict_register(const char *handler_name, size_t handler_name_len, php_output_handler_conflict_check_t check_func );

__attribute__ ((visibility("default"))) php_output_handler_alias_ctor_t *php_output_handler_alias(const char *handler_name, size_t handler_name_len );
__attribute__ ((visibility("default"))) int php_output_handler_alias_register(const char *handler_name, size_t handler_name_len, php_output_handler_alias_ctor_t func );




void zif_ob_start(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_end_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_end_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_clean(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_contents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_length(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_level(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_get_status(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_implicit_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ob_list_handlers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_output_add_rewrite_var(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_output_reset_rewrite_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 398 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h"
# 1 "/usr/include/sys/time.h" 1 3 4
# 29 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/sys/time.h" 2 3 4
# 39 "/usr/include/sys/time.h" 3 4

# 57 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 73 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (__const struct timeval *__tv,
    __const struct timezone *__tz)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int adjtime (__const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__));




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) __attribute__ ((__nothrow__));




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__));




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, __const struct timeval __tvp[2]) __attribute__ ((__nothrow__));
# 191 "/usr/include/sys/time.h" 3 4

# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 2


# 1 "/usr/include/sys/stat.h" 1 3 4
# 105 "/usr/include/sys/stat.h" 3 4


# 1 "/usr/include/bits/stat.h" 1 3 4
# 39 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;
    unsigned short int __pad1;

    __ino_t st_ino;



    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;

    __off_t st_size;



    __blksize_t st_blksize;


    __blkcnt_t st_blocks;
# 73 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 88 "/usr/include/bits/stat.h" 3 4
    unsigned long int __unused4;
    unsigned long int __unused5;



  };
# 108 "/usr/include/sys/stat.h" 2 3 4
# 211 "/usr/include/sys/stat.h" 3 4
extern int stat (__const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 240 "/usr/include/sys/stat.h" 3 4
extern int fstatat (int __fd, __const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 265 "/usr/include/sys/stat.h" 3 4
extern int lstat (__const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 286 "/usr/include/sys/stat.h" 3 4
extern int chmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__));





extern int fchmodat (int __fd, __const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__));
# 323 "/usr/include/sys/stat.h" 3 4
extern int mkdir (__const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, __const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, __const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (__const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, __const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, __const char *__path,
        __const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, __const struct timespec __times[2]) __attribute__ ((__nothrow__));
# 401 "/usr/include/sys/stat.h" 3 4
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, __const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, __const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, __const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4)));
# 444 "/usr/include/sys/stat.h" 3 4
extern int __xmknod (int __ver, __const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, __const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 5)));




extern __inline int
__attribute__ ((__nothrow__)) stat (__const char *__path, struct stat *__statbuf)
{
  return __xstat (3, __path, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) lstat (__const char *__path, struct stat *__statbuf)
{
  return __lxstat (3, __path, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) fstat (int __fd, struct stat *__statbuf)
{
  return __fxstat (3, __fd, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) fstatat (int __fd, __const char *__filename, struct stat *__statbuf, int __flag)

{
  return __fxstatat (3, __fd, __filename, __statbuf, __flag);
}



extern __inline int
__attribute__ ((__nothrow__)) mknod (__const char *__path, __mode_t __mode, __dev_t __dev)
{
  return __xmknod (1, __path, __mode, &__dev);
}



extern __inline int
__attribute__ ((__nothrow__)) mknodat (int __fd, __const char *__path, __mode_t __mode, __dev_t __dev)

{
  return __xmknodat (1, __fd, __path, __mode, &__dev);
}
# 536 "/usr/include/sys/stat.h" 3 4

# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 2


__attribute__ ((visibility("default"))) int php_file_le_stream(void);
__attribute__ ((visibility("default"))) int php_file_le_pstream(void);
__attribute__ ((visibility("default"))) int php_file_le_stream_filter(void);

# 98 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h"
typedef struct _php_stream php_stream;
typedef struct _php_stream_wrapper php_stream_wrapper;
typedef struct _php_stream_context php_stream_context;
typedef struct _php_stream_filter php_stream_filter;

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_context.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_context.h"
typedef void (*php_stream_notification_func)(php_stream_context *context,
  int notifycode, int severity,
  char *xmsg, int xcode,
  size_t bytes_sofar, size_t bytes_max,
  void * ptr );
# 43 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_context.h"
typedef struct _php_stream_notifier php_stream_notifier;

struct _php_stream_notifier {
 php_stream_notification_func func;
 void (*dtor)(php_stream_notifier *notifier);
 void *ptr;
 int mask;
 size_t progress, progress_max;
};

struct _php_stream_context {
 php_stream_notifier *notifier;
 zval *options;
 zval *links;
 int rsrc_id;
};


__attribute__ ((visibility("default"))) void php_stream_context_free(php_stream_context *context);
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_alloc(void);
__attribute__ ((visibility("default"))) int php_stream_context_get_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval ***optionvalue);
__attribute__ ((visibility("default"))) int php_stream_context_set_option(php_stream_context *context,
  const char *wrappername, const char *optionname, zval *optionvalue);

__attribute__ ((visibility("default"))) int php_stream_context_get_link(php_stream_context *context,
  const char *hostent, php_stream **stream);
__attribute__ ((visibility("default"))) int php_stream_context_set_link(php_stream_context *context,
  const char *hostent, php_stream *stream);
__attribute__ ((visibility("default"))) int php_stream_context_del_link(php_stream_context *context,
  php_stream *stream);

__attribute__ ((visibility("default"))) php_stream_notifier *php_stream_notification_alloc(void);
__attribute__ ((visibility("default"))) void php_stream_notification_free(php_stream_notifier *notifier);

# 95 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_context.h"

__attribute__ ((visibility("default"))) void php_stream_notification_notify(php_stream_context *context, int notifycode, int severity,
  char *xmsg, int xcode, size_t bytes_sofar, size_t bytes_max, void * ptr );
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_set(php_stream *stream, php_stream_context *context);

# 104 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_filter_api.h" 1
# 41 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_bucket php_stream_bucket;
typedef struct _php_stream_bucket_brigade php_stream_bucket_brigade;

struct _php_stream_bucket {
 php_stream_bucket *next, *prev;
 php_stream_bucket_brigade *brigade;

 char *buf;
 size_t buflen;

 int own_buf;
 int is_persistent;


 int refcount;
};

struct _php_stream_bucket_brigade {
 php_stream_bucket *head, *tail;
};

typedef enum {
 PSFS_ERR_FATAL,
 PSFS_FEED_ME,
 PSFS_PASS_ON
} php_stream_filter_status_t;



__attribute__ ((visibility("default"))) php_stream_bucket *php_stream_bucket_new(php_stream *stream, char *buf, size_t buflen, int own_buf, int buf_persistent );
__attribute__ ((visibility("default"))) int php_stream_bucket_split(php_stream_bucket *in, php_stream_bucket **left, php_stream_bucket **right, size_t length );
__attribute__ ((visibility("default"))) void php_stream_bucket_delref(php_stream_bucket *bucket );

__attribute__ ((visibility("default"))) void php_stream_bucket_prepend(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket );
__attribute__ ((visibility("default"))) void php_stream_bucket_append(php_stream_bucket_brigade *brigade, php_stream_bucket *bucket );
__attribute__ ((visibility("default"))) void php_stream_bucket_unlink(php_stream_bucket *bucket );
__attribute__ ((visibility("default"))) php_stream_bucket *php_stream_bucket_make_writeable(php_stream_bucket *bucket );






typedef struct _php_stream_filter_ops {

 php_stream_filter_status_t (*filter)(
   php_stream *stream,
   php_stream_filter *thisfilter,
   php_stream_bucket_brigade *buckets_in,
   php_stream_bucket_brigade *buckets_out,
   size_t *bytes_consumed,
   int flags
   );

 void (*dtor)(php_stream_filter *thisfilter );

 const char *label;

} php_stream_filter_ops;

typedef struct _php_stream_filter_chain {
 php_stream_filter *head, *tail;


 php_stream *stream;
} php_stream_filter_chain;

struct _php_stream_filter {
 php_stream_filter_ops *fops;
 void *abstract;
 php_stream_filter *next;
 php_stream_filter *prev;
 int is_persistent;


 php_stream_filter_chain *chain;


 php_stream_bucket_brigade buffer;


 int rsrc_id;
};



__attribute__ ((visibility("default"))) void _php_stream_filter_prepend(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) int php_stream_filter_prepend_ex(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) void _php_stream_filter_append(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) int php_stream_filter_append_ex(php_stream_filter_chain *chain, php_stream_filter *filter );
__attribute__ ((visibility("default"))) int _php_stream_filter_flush(php_stream_filter *filter, int finish );
__attribute__ ((visibility("default"))) php_stream_filter *php_stream_filter_remove(php_stream_filter *filter, int call_dtor );
__attribute__ ((visibility("default"))) void php_stream_filter_free(php_stream_filter *filter );
__attribute__ ((visibility("default"))) php_stream_filter *_php_stream_filter_alloc(php_stream_filter_ops *fops, void *abstract, int persistent );

# 144 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_filter_factory {
 php_stream_filter *(*create_filter)(const char *filtername, zval *filterparams, int persistent );
} php_stream_filter_factory;


__attribute__ ((visibility("default"))) int php_stream_filter_register_factory(const char *filterpattern, php_stream_filter_factory *factory );
__attribute__ ((visibility("default"))) int php_stream_filter_unregister_factory(const char *filterpattern );
__attribute__ ((visibility("default"))) int php_stream_filter_register_factory_volatile(const char *filterpattern, php_stream_filter_factory *factory );
__attribute__ ((visibility("default"))) php_stream_filter *php_stream_filter_create(const char *filtername, zval *filterparams, int persistent );

# 105 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 2

typedef struct _php_stream_statbuf {
 struct stat sb;

} php_stream_statbuf;

typedef struct _php_stream_dirent {
 char d_name[4096];
} php_stream_dirent;


typedef struct _php_stream_ops {

 size_t (*write)(php_stream *stream, const char *buf, size_t count );
 size_t (*read)(php_stream *stream, char *buf, size_t count );
 int (*close)(php_stream *stream, int close_handle );
 int (*flush)(php_stream *stream );

 const char *label;


 int (*seek)(php_stream *stream, off_t offset, int whence, off_t *newoffset );
 int (*cast)(php_stream *stream, int castas, void **ret );
 int (*stat)(php_stream *stream, php_stream_statbuf *ssb );
 int (*set_option)(php_stream *stream, int option, int value, void *ptrparam );
} php_stream_ops;

typedef struct _php_stream_wrapper_ops {

 php_stream *(*stream_opener)(php_stream_wrapper *wrapper, char *filename, char *mode,
   int options, char **opened_path, php_stream_context *context );

 int (*stream_closer)(php_stream_wrapper *wrapper, php_stream *stream );

 int (*stream_stat)(php_stream_wrapper *wrapper, php_stream *stream, php_stream_statbuf *ssb );

 int (*url_stat)(php_stream_wrapper *wrapper, char *url, int flags, php_stream_statbuf *ssb, php_stream_context *context );

 php_stream *(*dir_opener)(php_stream_wrapper *wrapper, char *filename, char *mode,
   int options, char **opened_path, php_stream_context *context );

 const char *label;


 int (*unlink)(php_stream_wrapper *wrapper, char *url, int options, php_stream_context *context );


 int (*rename)(php_stream_wrapper *wrapper, char *url_from, char *url_to, int options, php_stream_context *context );


 int (*stream_mkdir)(php_stream_wrapper *wrapper, char *url, int mode, int options, php_stream_context *context );
 int (*stream_rmdir)(php_stream_wrapper *wrapper, char *url, int options, php_stream_context *context );

 int (*stream_metadata)(php_stream_wrapper *wrapper, char *url, int options, void *value, php_stream_context *context );
} php_stream_wrapper_ops;

struct _php_stream_wrapper {
 php_stream_wrapper_ops *wops;
 void *abstract;
 int is_url;


 int err_count;
 char **err_stack;
};
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h"
struct _php_stream {
 php_stream_ops *ops;
 void *abstract;

 php_stream_filter_chain readfilters, writefilters;

 php_stream_wrapper *wrapper;
 void *wrapperthis;
 zval *wrapperdata;

 int fgetss_state;
 int is_persistent;
 char mode[16];
 int rsrc_id;
 int in_free;


 int fclose_stdiocast;
 FILE *stdiocast;



 char *orig_path;

 php_stream_context *context;
 int flags;


 off_t position;
 unsigned char *readbuf;
 size_t readbuflen;
 off_t readpos;
 off_t writepos;


 size_t chunk_size;

 int eof;






 struct _php_stream *enclosing_stream;
};








__attribute__ ((visibility("default"))) php_stream *_php_stream_alloc(php_stream_ops *ops, void *abstract,
  const char *persistent_id, const char *mode );

# 265 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h"

__attribute__ ((visibility("default"))) php_stream *php_stream_encloses(php_stream *enclosing, php_stream *enclosed);

__attribute__ ((visibility("default"))) int _php_stream_free_enclosed(php_stream *stream_enclosed, int close_options );

__attribute__ ((visibility("default"))) int php_stream_from_persistent_id(const char *persistent_id, php_stream **stream );
# 285 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_free(php_stream *stream, int close_options );




__attribute__ ((visibility("default"))) int _php_stream_seek(php_stream *stream, off_t offset, int whence );



__attribute__ ((visibility("default"))) off_t _php_stream_tell(php_stream *stream );


__attribute__ ((visibility("default"))) size_t _php_stream_read(php_stream *stream, char *buf, size_t count );


__attribute__ ((visibility("default"))) size_t _php_stream_write(php_stream *stream, const char *buf, size_t count );






__attribute__ ((visibility("default"))) size_t _php_stream_printf(php_stream *stream , const char *fmt, ...) __attribute__ ((format(printf, 2, 3)));





__attribute__ ((visibility("default"))) int _php_stream_eof(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_getc(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_putc(php_stream *stream, int c );


__attribute__ ((visibility("default"))) int _php_stream_flush(php_stream *stream, int closing );


__attribute__ ((visibility("default"))) char *_php_stream_get_line(php_stream *stream, char *buf, size_t maxlen, size_t *returned_len );



__attribute__ ((visibility("default"))) char *php_stream_get_record(php_stream *stream, size_t maxlen, size_t *returned_len, char *delim, size_t delim_len );


__attribute__ ((visibility("default"))) int _php_stream_puts(php_stream *stream, char *buf );


__attribute__ ((visibility("default"))) int _php_stream_stat(php_stream *stream, php_stream_statbuf *ssb );


__attribute__ ((visibility("default"))) int _php_stream_stat_path(char *path, int flags, php_stream_statbuf *ssb, php_stream_context *context );



__attribute__ ((visibility("default"))) int _php_stream_mkdir(char *path, int mode, int options, php_stream_context *context );


__attribute__ ((visibility("default"))) int _php_stream_rmdir(char *path, int options, php_stream_context *context );


__attribute__ ((visibility("default"))) php_stream *_php_stream_opendir(char *path, int options, php_stream_context *context );

__attribute__ ((visibility("default"))) php_stream_dirent *_php_stream_readdir(php_stream *dirstream, php_stream_dirent *ent );




__attribute__ ((visibility("default"))) int php_stream_dirent_alphasort(const char **a, const char **b);
__attribute__ ((visibility("default"))) int php_stream_dirent_alphasortr(const char **a, const char **b);

__attribute__ ((visibility("default"))) int _php_stream_scandir(char *dirname, char **namelist[], int flags, php_stream_context *context,
   int (*compare) (const char **a, const char **b) );


__attribute__ ((visibility("default"))) int _php_stream_set_option(php_stream *stream, int option, int value, void *ptrparam );





# 417 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h"

__attribute__ ((visibility("default"))) int _php_stream_truncate_set_size(php_stream *stream, size_t newsize );


# 437 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h"

__attribute__((deprecated))
__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_stream(php_stream *src, php_stream *dest, size_t maxlen );

__attribute__ ((visibility("default"))) int _php_stream_copy_to_stream_ex(php_stream *src, php_stream *dest, size_t maxlen, size_t *len );





__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_mem(php_stream *src, char **buf, size_t maxlen,
  int persistent );



__attribute__ ((visibility("default"))) size_t _php_stream_passthru(php_stream * src );



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_transport.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_transport.h"
# 1 "/usr/include/sys/socket.h" 1 3 4
# 26 "/usr/include/sys/socket.h" 3 4


# 1 "/usr/include/sys/uio.h" 1 3 4
# 26 "/usr/include/sys/uio.h" 3 4



# 1 "/usr/include/bits/uio.h" 1 3 4
# 44 "/usr/include/bits/uio.h" 3 4
struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
# 30 "/usr/include/sys/uio.h" 2 3 4
# 40 "/usr/include/sys/uio.h" 3 4
extern ssize_t readv (int __fd, __const struct iovec *__iovec, int __count)
  ;
# 51 "/usr/include/sys/uio.h" 3 4
extern ssize_t writev (int __fd, __const struct iovec *__iovec, int __count)
  ;
# 66 "/usr/include/sys/uio.h" 3 4
extern ssize_t preadv (int __fd, __const struct iovec *__iovec, int __count,
         __off_t __offset) ;
# 78 "/usr/include/sys/uio.h" 3 4
extern ssize_t pwritev (int __fd, __const struct iovec *__iovec, int __count,
   __off_t __offset) ;
# 121 "/usr/include/sys/uio.h" 3 4

# 29 "/usr/include/sys/socket.h" 2 3 4

# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 31 "/usr/include/sys/socket.h" 2 3 4
# 40 "/usr/include/sys/socket.h" 3 4
# 1 "/usr/include/bits/socket.h" 1 3 4
# 29 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 30 "/usr/include/bits/socket.h" 2 3 4
# 40 "/usr/include/bits/socket.h" 3 4
enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 04000


};
# 171 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/include/bits/sockaddr.h" 1 3 4
# 29 "/usr/include/bits/sockaddr.h" 3 4
typedef unsigned short int sa_family_t;
# 172 "/usr/include/bits/socket.h" 2 3 4


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
# 187 "/usr/include/bits/socket.h" 3 4
struct sockaddr_storage
  {
    sa_family_t ss_family;
    unsigned long int __ss_align;
    char __ss_padding[(128 - (2 * sizeof (unsigned long int)))];
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,






    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };
# 274 "/usr/include/bits/socket.h" 3 4
struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
# 304 "/usr/include/bits/socket.h" 3 4
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) __attribute__ ((__nothrow__));




extern __inline struct cmsghdr *
__attribute__ ((__nothrow__)) __cmsg_nxthdr (struct msghdr *__mhdr, struct cmsghdr *__cmsg)
{
  if ((size_t) __cmsg->cmsg_len < sizeof (struct cmsghdr))

    return 0;

  __cmsg = (struct cmsghdr *) ((unsigned char *) __cmsg
          + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1)));
  if ((unsigned char *) (__cmsg + 1) > ((unsigned char *) __mhdr->msg_control
     + __mhdr->msg_controllen)
      || ((unsigned char *) __cmsg + (((__cmsg->cmsg_len) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1))
   > ((unsigned char *) __mhdr->msg_control + __mhdr->msg_controllen)))

    return 0;
  return __cmsg;
}




enum
  {
    SCM_RIGHTS = 0x01





  };
# 377 "/usr/include/bits/socket.h" 3 4
# 1 "/usr/include/asm/socket.h" 1 3 4
# 1 "/usr/include/asm-generic/socket.h" 1 3 4



# 1 "/usr/include/asm/sockios.h" 1 3 4
# 1 "/usr/include/asm-generic/sockios.h" 1 3 4
# 1 "/usr/include/asm/sockios.h" 2 3 4
# 5 "/usr/include/asm-generic/socket.h" 2 3 4
# 1 "/usr/include/asm/socket.h" 2 3 4
# 378 "/usr/include/bits/socket.h" 2 3 4
# 411 "/usr/include/bits/socket.h" 3 4
struct linger
  {
    int l_onoff;
    int l_linger;
  };









extern int recvmmsg (int __fd, struct mmsghdr *__vmessages,
       unsigned int __vlen, int __flags,
       __const struct timespec *__tmo);


# 41 "/usr/include/sys/socket.h" 2 3 4




struct osockaddr
  {
    unsigned short int sa_family;
    unsigned char sa_data[14];
  };




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
# 105 "/usr/include/sys/socket.h" 3 4
extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__));


extern int bind (int __fd, __const struct sockaddr * __addr, socklen_t __len)
     __attribute__ ((__nothrow__));


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__));
# 129 "/usr/include/sys/socket.h" 3 4
extern int connect (int __fd, __const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__));






extern ssize_t send (int __fd, __const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, __const void *__buf, size_t __n,
         int __flags, __const struct sockaddr * __addr,
         socklen_t __addr_len);
# 166 "/usr/include/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, __const struct msghdr *__message,
   int __flags);






extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);





extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) __attribute__ ((__nothrow__));




extern int setsockopt (int __fd, int __level, int __optname,
         __const void *__optval, socklen_t __optlen) __attribute__ ((__nothrow__));





extern int listen (int __fd, int __n) __attribute__ ((__nothrow__));
# 214 "/usr/include/sys/socket.h" 3 4
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);
# 232 "/usr/include/sys/socket.h" 3 4
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__));
# 254 "/usr/include/sys/socket.h" 3 4

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_transport.h" 2


typedef php_stream *(php_stream_transport_factory_func)(const char *proto, long protolen,
  char *resourcename, long resourcenamelen,
  const char *persistent_id, int options, int flags,
  struct timeval *timeout,
  php_stream_context *context );
typedef php_stream_transport_factory_func *php_stream_transport_factory;


__attribute__ ((visibility("default"))) int php_stream_xport_register(char *protocol, php_stream_transport_factory factory );
__attribute__ ((visibility("default"))) int php_stream_xport_unregister(char *protocol );
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_transport.h"
__attribute__ ((visibility("default"))) php_stream *_php_stream_xport_create(const char *name, long namelen, int options,
  int flags, const char *persistent_id,
  struct timeval *timeout,
  php_stream_context *context,
  char **error_string,
  int *error_code
  );





__attribute__ ((visibility("default"))) int php_stream_xport_bind(php_stream *stream,
  const char *name, long namelen,
  char **error_text
  );


__attribute__ ((visibility("default"))) int php_stream_xport_connect(php_stream *stream,
  const char *name, long namelen,
  int asynchronous,
  struct timeval *timeout,
  char **error_text,
  int *error_code
  );


__attribute__ ((visibility("default"))) int php_stream_xport_listen(php_stream *stream,
  int backlog,
  char **error_text
  );



__attribute__ ((visibility("default"))) int php_stream_xport_accept(php_stream *stream, php_stream **client,
  char **textaddr, int *textaddrlen,
  void **addr, socklen_t *addrlen,
  struct timeval *timeout,
  char **error_text
  );


__attribute__ ((visibility("default"))) int php_stream_xport_get_name(php_stream *stream, int want_peer,
  char **textaddr, int *textaddrlen,
  void **addr, socklen_t *addrlen
  );

enum php_stream_xport_send_recv_flags {
 STREAM_OOB = 1,
 STREAM_PEEK = 2
};



__attribute__ ((visibility("default"))) int php_stream_xport_recvfrom(php_stream *stream, char *buf, size_t buflen,
  long flags, void **addr, socklen_t *addrlen,
  char **textaddr, int *textaddrlen );



__attribute__ ((visibility("default"))) int php_stream_xport_sendto(php_stream *stream, const char *buf, size_t buflen,
  long flags, void *addr, socklen_t addrlen );

typedef enum {
 STREAM_SHUT_RD,
 STREAM_SHUT_WR,
 STREAM_SHUT_RDWR
} stream_shutdown_t;



__attribute__ ((visibility("default"))) int php_stream_xport_shutdown(php_stream *stream, stream_shutdown_t how );





typedef struct _php_stream_xport_param {
 enum {
  STREAM_XPORT_OP_BIND, STREAM_XPORT_OP_CONNECT,
  STREAM_XPORT_OP_LISTEN, STREAM_XPORT_OP_ACCEPT,
  STREAM_XPORT_OP_CONNECT_ASYNC,
  STREAM_XPORT_OP_GET_NAME,
  STREAM_XPORT_OP_GET_PEER_NAME,
  STREAM_XPORT_OP_RECV,
  STREAM_XPORT_OP_SEND,
  STREAM_XPORT_OP_SHUTDOWN
 } op;
 unsigned int want_addr:1;
 unsigned int want_textaddr:1;
 unsigned int want_errortext:1;
 unsigned int how:2;

 struct {
  char *name;
  long namelen;
  int backlog;
  struct timeval *timeout;
  struct sockaddr *addr;
  socklen_t addrlen;
  char *buf;
  size_t buflen;
  long flags;
 } inputs;
 struct {
  php_stream *client;
  int returncode;
  struct sockaddr *addr;
  socklen_t addrlen;
  char *textaddr;
  long textaddrlen;

  char *error_text;
  int error_code;
 } outputs;
} php_stream_xport_param;



typedef enum {
 STREAM_CRYPTO_METHOD_SSLv2_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv3_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv23_CLIENT,
 STREAM_CRYPTO_METHOD_TLS_CLIENT,
 STREAM_CRYPTO_METHOD_SSLv2_SERVER,
 STREAM_CRYPTO_METHOD_SSLv3_SERVER,
 STREAM_CRYPTO_METHOD_SSLv23_SERVER,
 STREAM_CRYPTO_METHOD_TLS_SERVER
} php_stream_xport_crypt_method_t;


__attribute__ ((visibility("default"))) int php_stream_xport_crypto_setup(php_stream *stream, php_stream_xport_crypt_method_t crypto_method, php_stream *session_stream );
__attribute__ ((visibility("default"))) int php_stream_xport_crypto_enable(php_stream *stream, int activate );


typedef struct _php_stream_xport_crypto_param {
 enum {
  STREAM_XPORT_CRYPTO_OP_SETUP,
  STREAM_XPORT_CRYPTO_OP_ENABLE
 } op;
 struct {
  int activate;
  php_stream_xport_crypt_method_t method;
  php_stream *session;
 } inputs;
 struct {
  int returncode;
 } outputs;
} php_stream_xport_crypto_param;


__attribute__ ((visibility("default"))) HashTable *php_stream_xport_get_hash(void);
__attribute__ ((visibility("default"))) php_stream_transport_factory_func php_stream_generic_socket_factory;

# 457 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_plain_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_stdio_ops;
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_plain_files_wrapper;




__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen(const char *filename, const char *mode, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_with_path(char *filename, char *mode, char *path, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_file(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_fd(int fd, const char *mode, const char *persistent_id );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_pipe(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_tmpfile(int dummy );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_temporary_file(const char *dir, const char *pfx, char **opened_path );





__attribute__ ((visibility("default"))) FILE * _php_stream_open_wrapper_as_file(char * path, char * mode, int options, char **opened_path );



# 458 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_glob_wrapper.h" 1
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_glob_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_glob_stream_wrapper;
__attribute__ ((visibility("default"))) extern php_stream_ops php_glob_stream_ops;



__attribute__ ((visibility("default"))) char* _php_glob_stream_get_path(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) char* _php_glob_stream_get_pattern(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) int _php_glob_stream_get_count(php_stream *stream, int *pflags );



# 459 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_userspace.h" 1
# 23 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_userspace.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_ops;
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_dir_ops;
# 460 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_mmap.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_mmap.h"
typedef enum {

 PHP_STREAM_MMAP_SUPPORTED,



 PHP_STREAM_MMAP_MAP_RANGE,

 PHP_STREAM_MMAP_UNMAP
} php_stream_mmap_operation_t;

typedef enum {
 PHP_STREAM_MAP_MODE_READONLY,
 PHP_STREAM_MAP_MODE_READWRITE,
 PHP_STREAM_MAP_MODE_SHARED_READONLY,
 PHP_STREAM_MAP_MODE_SHARED_READWRITE
} php_stream_mmap_access_t;

typedef struct {


 size_t offset;
 size_t length;

 php_stream_mmap_access_t mode;


 char *mapped;

} php_stream_mmap_range;
# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_mmap.h"

__attribute__ ((visibility("default"))) char *_php_stream_mmap_range(php_stream *stream, size_t offset, size_t length, php_stream_mmap_operation_t mode, size_t *mapped_len );



__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap_ex(php_stream *stream, off_t readden );


# 461 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 2
# 477 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h"

__attribute__ ((visibility("default"))) int _php_stream_cast(php_stream *stream, int castas, void **ret, int show_err );

# 541 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h"
int php_init_stream_wrappers(int module_number );
int php_shutdown_stream_wrappers(int module_number );
void php_shutdown_stream_hashes(void);
int zm_deactivate_streams(int type, int module_number );


__attribute__ ((visibility("default"))) int php_register_url_stream_wrapper(char *protocol, php_stream_wrapper *wrapper );
__attribute__ ((visibility("default"))) int php_unregister_url_stream_wrapper(char *protocol );
__attribute__ ((visibility("default"))) int php_register_url_stream_wrapper_volatile(char *protocol, php_stream_wrapper *wrapper );
__attribute__ ((visibility("default"))) int php_unregister_url_stream_wrapper_volatile(char *protocol );
__attribute__ ((visibility("default"))) php_stream *_php_stream_open_wrapper_ex(char *path, char *mode, int options, char **opened_path, php_stream_context *context );
__attribute__ ((visibility("default"))) php_stream_wrapper *php_stream_locate_url_wrapper(const char *path, char **path_for_open, int options );
__attribute__ ((visibility("default"))) char *php_stream_locate_eol(php_stream *stream, char *buf, size_t buf_len );
# 568 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h"
__attribute__ ((visibility("default"))) void php_stream_wrapper_log_error(php_stream_wrapper *wrapper, int options , const char *fmt, ...) __attribute__ ((format(printf, 3, 4)));
# 579 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_make_seekable(php_stream *origstream, php_stream **newstream, int flags );



__attribute__ ((visibility("default"))) HashTable *_php_stream_get_url_stream_wrappers_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_stream_get_url_stream_wrappers_hash_global(void);
__attribute__ ((visibility("default"))) HashTable *_php_get_stream_filters_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_get_stream_filters_hash_global(void);
extern php_stream_wrapper_ops *php_stream_user_wrapper_ops;

# 401 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_memory_streams.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_memory_streams.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_memory_streams.h" 2
# 42 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_memory_streams.h"

__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_create(int mode );
__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_open(int mode, char *buf, size_t length );
__attribute__ ((visibility("default"))) char *_php_stream_memory_get_buffer(php_stream *stream, size_t *length );

__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_create(int mode, size_t max_memory_usage );
__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_open(int mode, size_t max_memory_usage, char *buf, size_t length );


extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_memory_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_temp_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_rfc2397_ops;
extern __attribute__ ((visibility("default"))) php_stream_wrapper php_stream_rfc2397_wrapper;
# 402 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/fopen_wrappers.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/fopen_wrappers.h"

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_globals.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_globals.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_globals.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_globals.h" 2

typedef struct _php_core_globals php_core_globals;






extern __attribute__ ((visibility("default"))) struct _php_core_globals core_globals;
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_globals.h"
struct _php_tick_function_entry;

typedef struct _arg_separators {
 char *output;
 char *input;
} arg_separators;

struct _php_core_globals {
 zend_bool implicit_flush;

 long output_buffering;

 zend_bool sql_safe_mode;
 zend_bool enable_dl;

 char *output_handler;

 char *unserialize_callback_func;
 long serialize_precision;

 long memory_limit;
 long max_input_time;

 zend_bool track_errors;
 zend_bool display_errors;
 zend_bool display_startup_errors;
 zend_bool log_errors;
 long log_errors_max_len;
 zend_bool ignore_repeated_errors;
 zend_bool ignore_repeated_source;
 zend_bool report_memleaks;
 char *error_log;

 char *doc_root;
 char *user_dir;
 char *include_path;
 char *open_basedir;
 char *extension_dir;

 char *upload_tmp_dir;
 long upload_max_filesize;

 char *error_append_string;
 char *error_prepend_string;

 char *auto_prepend_file;
 char *auto_append_file;

 arg_separators arg_separator;

 char *variables_order;

 HashTable rfc1867_protected_variables;

 short connection_status;
 short ignore_user_abort;

 unsigned char header_is_being_sent;

 zend_llist tick_functions;

 zval *http_globals[6];

 zend_bool expose_php;

 zend_bool register_argc_argv;
 zend_bool auto_globals_jit;

 char *docref_root;
 char *docref_ext;

 zend_bool html_errors;
 zend_bool xmlrpc_errors;

 long xmlrpc_error_number;

 zend_bool activated_auto_globals[8];

 zend_bool modules_activated;
 zend_bool file_uploads;
 zend_bool during_request_startup;
 zend_bool allow_url_fopen;
 zend_bool enable_post_data_reading;
 zend_bool always_populate_raw_post_data;
 zend_bool report_zend_debug;

 int last_error_type;
 char *last_error_message;
 char *last_error_file;
 int last_error_lineno;

 char *disable_functions;
 char *disable_classes;
 zend_bool allow_url_include;
 zend_bool exit_on_timeout;



 long max_input_nesting_level;
 zend_bool in_user_include;

 char *user_ini_filename;
 long user_ini_cache_ttl;

 char *request_order;

 zend_bool mail_x_header;
 char *mail_log;

 zend_bool in_error_log;




};
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/fopen_wrappers.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_ini.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_ini.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_ini.h" 1
# 63 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_ini.h"
struct _zend_ini_entry {
 int module_number;
 int modifiable;
 char *name;
 uint name_length;
 int (*on_modify)(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
 void *mh_arg1;
 void *mh_arg2;
 void *mh_arg3;

 char *value;
 uint value_length;

 char *orig_value;
 uint orig_value_length;
 int orig_modifiable;
 int modified;

 void (*displayer)(zend_ini_entry *ini_entry, int type);
};


__attribute__ ((visibility("default"))) int zend_ini_startup(void);
__attribute__ ((visibility("default"))) int zend_ini_shutdown(void);
__attribute__ ((visibility("default"))) int zend_ini_global_shutdown(void);
__attribute__ ((visibility("default"))) int zend_ini_deactivate(void);

__attribute__ ((visibility("default"))) int zend_copy_ini_directives(void);

__attribute__ ((visibility("default"))) void zend_ini_sort_entries(void);

__attribute__ ((visibility("default"))) int zend_register_ini_entries(const zend_ini_entry *ini_entry, int module_number );
__attribute__ ((visibility("default"))) void zend_unregister_ini_entries(int module_number );
__attribute__ ((visibility("default"))) void zend_ini_refresh_caches(int stage );
__attribute__ ((visibility("default"))) int zend_alter_ini_entry(char *name, uint name_length, char *new_value, uint new_value_length, int modify_type, int stage);
__attribute__ ((visibility("default"))) int zend_alter_ini_entry_ex(char *name, uint name_length, char *new_value, uint new_value_length, int modify_type, int stage, int force_change );
__attribute__ ((visibility("default"))) int zend_restore_ini_entry(char *name, uint name_length, int stage);
__attribute__ ((visibility("default"))) void display_ini_entries(zend_module_entry *module);

__attribute__ ((visibility("default"))) long zend_ini_long(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) double zend_ini_double(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) char *zend_ini_string(char *name, uint name_length, int orig);
__attribute__ ((visibility("default"))) char *zend_ini_string_ex(char *name, uint name_length, int orig, zend_bool *exists);

__attribute__ ((visibility("default"))) int zend_ini_register_displayer(char *name, uint name_length, void (*displayer)(zend_ini_entry *ini_entry, int type));

__attribute__ ((visibility("default"))) void zend_ini_boolean_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__ ((visibility("default"))) void zend_ini_color_displayer_cb(zend_ini_entry *ini_entry, int type);
__attribute__ ((visibility("default"))) void display_link_numbers(zend_ini_entry *ini_entry, int type);

# 175 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_ini.h"

__attribute__ ((visibility("default"))) int OnUpdateBool(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLong(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLongGEZero(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateReal(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateString(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateStringUnempty(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );

# 195 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_ini.h"
typedef void (*zend_ini_parser_cb_t)(zval *arg1, zval *arg2, zval *arg3, int callback_type, void *arg );

__attribute__ ((visibility("default"))) int zend_parse_ini_file(zend_file_handle *fh, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );
__attribute__ ((visibility("default"))) int zend_parse_ini_string(char *str, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );







typedef struct _zend_ini_parser_param {
 zend_ini_parser_cb_t ini_parser_cb;
 void *arg;
} zend_ini_parser_param;
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_ini.h" 2


__attribute__ ((visibility("default"))) void config_zval_dtor(zval *zvalue);
int php_init_config(void);
int php_shutdown_config(void);
void php_ini_register_extensions(void);
__attribute__ ((visibility("default"))) zval *cfg_get_entry(const char *name, uint name_length);
__attribute__ ((visibility("default"))) int cfg_get_long(const char *varname, long *result);
__attribute__ ((visibility("default"))) int cfg_get_double(const char *varname, double *result);
__attribute__ ((visibility("default"))) int cfg_get_string(const char *varname, char **result);
__attribute__ ((visibility("default"))) int php_parse_user_ini_file(const char *dirname, char *ini_filename, HashTable *target_hash );
__attribute__ ((visibility("default"))) void php_ini_activate_config(HashTable *source_hash, int modify_type, int stage );
__attribute__ ((visibility("default"))) int php_ini_has_per_dir_config(void);
__attribute__ ((visibility("default"))) int php_ini_has_per_host_config(void);
__attribute__ ((visibility("default"))) void php_ini_activate_per_dir_config(char *path, uint path_len );
__attribute__ ((visibility("default"))) void php_ini_activate_per_host_config(const char *host, uint host_len );
__attribute__ ((visibility("default"))) HashTable* php_ini_get_configuration_hash(void);

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/fopen_wrappers.h" 2

__attribute__ ((visibility("default"))) int php_fopen_primary_script(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) char *expand_filepath(const char *filepath, char *real_path );
__attribute__ ((visibility("default"))) char *expand_filepath_ex(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len );
__attribute__ ((visibility("default"))) char *expand_filepath_with_mode(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len, int realpath_mode );

__attribute__ ((visibility("default"))) int php_check_open_basedir(const char *path );
__attribute__ ((visibility("default"))) int php_check_open_basedir_ex(const char *path, int warn );
__attribute__ ((visibility("default"))) int php_check_specific_open_basedir(const char *basedir, const char *path );
# 47 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/fopen_wrappers.h"
__attribute__ ((visibility("default"))) int php_check_safe_mode_include_dir(const char *path );

__attribute__ ((visibility("default"))) char *php_resolve_path(const char *filename, int filename_len, const char *path );

__attribute__ ((visibility("default"))) FILE *php_fopen_with_path(const char *filename, const char *mode, const char *path, char **opened_path );

__attribute__ ((visibility("default"))) char *php_strip_url_passwd(char *path);

__attribute__ ((visibility("default"))) int OnUpdateBaseDir(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );

# 403 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_virtual_cwd.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_virtual_cwd.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/TSRM.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_virtual_cwd.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_config_common.h" 1
# 13 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_config_common.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/include/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_config.h" 2
# 14 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_config_common.h" 2
# 41 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_config_common.h"
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 42 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_config_common.h" 2
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_virtual_cwd.h" 2






# 1 "/usr/include/utime.h" 1 3 4
# 28 "/usr/include/utime.h" 3 4

# 38 "/usr/include/utime.h" 3 4
struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (__const char *__file,
    __const struct utimbuf *__file_times)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_virtual_cwd.h" 2
# 90 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_virtual_cwd.h"
# 1 "/usr/include/dirent.h" 1 3 4
# 28 "/usr/include/dirent.h" 3 4

# 62 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/bits/dirent.h" 1 3 4
# 23 "/usr/include/bits/dirent.h" 3 4
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 63 "/usr/include/dirent.h" 2 3 4
# 98 "/usr/include/dirent.h" 3 4
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 128 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern DIR *opendir (__const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 163 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 184 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
# 209 "/usr/include/dirent.h" 3 4
extern void rewinddir (DIR *__dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 245 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 246 "/usr/include/dirent.h" 2 3 4






extern int scandir (__const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (__const struct dirent *),
      int (*__cmp) (__const struct dirent **,
      __const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
# 285 "/usr/include/dirent.h" 3 4
extern int alphasort (__const struct dirent **__e1,
        __const struct dirent **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 313 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));
# 362 "/usr/include/dirent.h" 3 4

# 91 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_virtual_cwd.h" 2
# 145 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_virtual_cwd.h"
typedef struct _cwd_state {
 char *cwd;
 int cwd_length;
} cwd_state;

typedef int (*verify_path_func)(const cwd_state *);

__attribute__ ((visibility("default"))) void virtual_cwd_startup(void);
__attribute__ ((visibility("default"))) void virtual_cwd_shutdown(void);
__attribute__ ((visibility("default"))) char *virtual_getcwd_ex(size_t *length );
__attribute__ ((visibility("default"))) char *virtual_getcwd(char *buf, size_t size );
__attribute__ ((visibility("default"))) int virtual_chdir(const char *path );
__attribute__ ((visibility("default"))) int virtual_chdir_file(const char *path, int (*p_chdir)(const char *path ) );
__attribute__ ((visibility("default"))) int virtual_filepath(const char *path, char **filepath );
__attribute__ ((visibility("default"))) int virtual_filepath_ex(const char *path, char **filepath, verify_path_func verify_path );
__attribute__ ((visibility("default"))) char *virtual_realpath(const char *path, char *real_path );
__attribute__ ((visibility("default"))) FILE *virtual_fopen(const char *path, const char *mode );
__attribute__ ((visibility("default"))) int virtual_open(const char *path , int flags, ...);
__attribute__ ((visibility("default"))) int virtual_creat(const char *path, mode_t mode );
__attribute__ ((visibility("default"))) int virtual_rename(char *oldname, char *newname );
__attribute__ ((visibility("default"))) int virtual_stat(const char *path, struct stat *buf );
__attribute__ ((visibility("default"))) int virtual_lstat(const char *path, struct stat *buf );
__attribute__ ((visibility("default"))) int virtual_unlink(const char *path );
__attribute__ ((visibility("default"))) int virtual_mkdir(const char *pathname, mode_t mode );
__attribute__ ((visibility("default"))) int virtual_rmdir(const char *pathname );
__attribute__ ((visibility("default"))) DIR *virtual_opendir(const char *pathname );
__attribute__ ((visibility("default"))) FILE *virtual_popen(const char *command, const char *type );
__attribute__ ((visibility("default"))) int virtual_access(const char *pathname, int mode );
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_utime(const char *filename, struct utimbuf *buf );

__attribute__ ((visibility("default"))) int virtual_chmod(const char *filename, mode_t mode );

__attribute__ ((visibility("default"))) int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 204 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_file_ex(cwd_state *state, const char *path, verify_path_func verify_path, int use_realpath );

__attribute__ ((visibility("default"))) char *tsrm_realpath(const char *path, char *real_path );




typedef struct _realpath_cache_bucket {
 unsigned long key;
 char *path;
 int path_len;
 char *realpath;
 int realpath_len;
 int is_dir;
 time_t expires;






 struct _realpath_cache_bucket *next;
} realpath_cache_bucket;

typedef struct _virtual_cwd_globals {
 cwd_state cwd;
 long realpath_cache_size;
 long realpath_cache_size_limit;
 long realpath_cache_ttl;
 realpath_cache_bucket *realpath_cache[1024];
} virtual_cwd_globals;





extern virtual_cwd_globals cwd_globals;



__attribute__ ((visibility("default"))) void realpath_cache_clean(void);
__attribute__ ((visibility("default"))) void realpath_cache_del(const char *path, int path_len );
__attribute__ ((visibility("default"))) realpath_cache_bucket* realpath_cache_lookup(const char *path, int path_len, time_t t );
__attribute__ ((visibility("default"))) int realpath_cache_size(void);
__attribute__ ((visibility("default"))) int realpath_cache_max_buckets(void);
__attribute__ ((visibility("default"))) realpath_cache_bucket** realpath_cache_get_buckets(void);
# 407 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_constants.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_constants.h"

void clean_module_constants(int module_number );
void free_zend_constant(zend_constant *c);
int zend_startup_constants(void);
int zend_shutdown_constants(void);
void zend_register_standard_constants(void);
void clean_non_persistent_constants(void);
__attribute__ ((visibility("default"))) int zend_get_constant(const char *name, uint name_len, zval *result );
__attribute__ ((visibility("default"))) int zend_get_constant_ex(const char *name, uint name_len, zval *result, zend_class_entry *scope, ulong flags );
__attribute__ ((visibility("default"))) void zend_register_long_constant(const char *name, uint name_len, long lval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_double_constant(const char *name, uint name_len, double dval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_string_constant(const char *name, uint name_len, char *strval, int flags, int module_number );
__attribute__ ((visibility("default"))) void zend_register_stringl_constant(const char *name, uint name_len, char *strval, uint strlen, int flags, int module_number );
__attribute__ ((visibility("default"))) int zend_register_constant(zend_constant *c );
void zend_copy_constants(HashTable *target, HashTable *sourc);
void copy_zend_constant(zend_constant *c);
zend_constant *zend_quick_get_constant(const zend_literal *key, ulong flags );

# 409 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2






# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_reentrancy.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_reentrancy.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_reentrancy.h" 2
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_reentrancy.h"

# 119 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_reentrancy.h"

# 416 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php.h" 2
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/tar.h" 1
# 40 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/tar.h"
typedef struct _old_tar_header {
 char name[100];

 char mode[8];
 char uid[8];
 char gid[8];
 char size[12];
 char mtime[12];
 char checksum[8];
 char link;



 char linkname[100];
} __attribute__((__packed__)) old_tar_header;
# 65 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/tar.h"
typedef struct _tar_header {
 char name[100];
 char mode[8];
 char uid[8];
 char gid[8];
 char size[12];
 char mtime[12];
 char checksum[8];
 char typeflag;
# 82 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/tar.h"
 char linkname[100];
 char magic[6];
 char version[2];
 char uname[32];
 char gname[32];
 char devmajor[8];
 char devminor[8];
 char prefix[155];



 char padding[12];
} __attribute__((__packed__)) tar_header;
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_ini.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_execute.h" 1
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_exceptions.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_exceptions.h"


__attribute__ ((visibility("default"))) void zend_exception_set_previous(zval *exception, zval *add_previous );
__attribute__ ((visibility("default"))) void zend_exception_save(void);
__attribute__ ((visibility("default"))) void zend_exception_restore(void);

void zend_throw_exception_internal(zval *exception );

void zend_register_default_exception(void);

__attribute__ ((visibility("default"))) zend_class_entry *zend_exception_get_default(void);
__attribute__ ((visibility("default"))) zend_class_entry *zend_get_error_exception(void);
__attribute__ ((visibility("default"))) void zend_register_default_classes(void);



__attribute__ ((visibility("default"))) zval * zend_throw_exception(zend_class_entry *exception_ce, char *message, long code );
__attribute__ ((visibility("default"))) zval * zend_throw_exception_ex(zend_class_entry *exception_ce, long code , char *format, ...);
__attribute__ ((visibility("default"))) void zend_throw_exception_object(zval *exception );
__attribute__ ((visibility("default"))) void zend_clear_exception(void);

__attribute__ ((visibility("default"))) zval * zend_throw_error_exception(zend_class_entry *exception_ce, char *message, long code, int severity );

extern __attribute__ ((visibility("default"))) void (*zend_throw_exception_hook)(zval *ex );


__attribute__ ((visibility("default"))) void zend_exception_error(zval *exception, int severity );


int zend_spprintf(char **message, int max_len, char *format, ...);


# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_interfaces.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_interfaces.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_API.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_interfaces.h" 2



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_traversable;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_aggregate;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_iterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_arrayaccess;
extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_serializable;

typedef struct _zend_user_iterator {
 zend_object_iterator it;
 zend_class_entry *ce;
 zval *value;
} zend_user_iterator;

__attribute__ ((visibility("default"))) zval* zend_call_method(zval **object_pp, zend_class_entry *obj_ce, zend_function **fn_proxy, const char *function_name, int function_name_len, zval **retval_ptr_ptr, int param_count, zval* arg1, zval* arg2 );
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_interfaces.h"
__attribute__ ((visibility("default"))) void zend_user_it_rewind(zend_object_iterator *_iter );
__attribute__ ((visibility("default"))) int zend_user_it_valid(zend_object_iterator *_iter );
__attribute__ ((visibility("default"))) int zend_user_it_get_current_key(zend_object_iterator *_iter, char **str_key, uint *str_key_len, ulong *int_key );
__attribute__ ((visibility("default"))) void zend_user_it_get_current_data(zend_object_iterator *_iter, zval ***data );
__attribute__ ((visibility("default"))) void zend_user_it_move_forward(zend_object_iterator *_iter );
__attribute__ ((visibility("default"))) void zend_user_it_invalidate_current(zend_object_iterator *_iter );

__attribute__ ((visibility("default"))) zval *zend_user_it_new_iterator(zend_class_entry *ce, zval *object );
__attribute__ ((visibility("default"))) zend_object_iterator *zend_user_it_get_new_iterator(zend_class_entry *ce, zval *object, int by_ref );

__attribute__ ((visibility("default"))) void zend_register_interfaces(void);

__attribute__ ((visibility("default"))) int zend_user_serialize(zval *object, unsigned char **buffer, zend_uint *buf_len, zend_serialize_data *data );
__attribute__ ((visibility("default"))) int zend_user_unserialize(zval **object, zend_class_entry *ce, const unsigned char *buf, zend_uint buf_len, zend_unserialize_data *data );

__attribute__ ((visibility("default"))) int zend_class_serialize_deny(zval *object, unsigned char **buffer, zend_uint *buf_len, zend_serialize_data *data );
__attribute__ ((visibility("default"))) int zend_class_unserialize_deny(zval **object, zend_class_entry *ce, const unsigned char *buf, zend_uint buf_len, zend_unserialize_data *data );


# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_operators.h" 1
# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_vm.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_vm.h"
__attribute__ ((visibility("default"))) void zend_vm_use_old_executor(void);
__attribute__ ((visibility("default"))) void zend_vm_set_opcode_handler(zend_op* opcode);
# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_streams.h" 1
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/streams/php_stream_plain_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_stdio_ops;
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_plain_files_wrapper;




__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen(const char *filename, const char *mode, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_with_path(char *filename, char *mode, char *path, char **opened_path, int options );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_file(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_fd(int fd, const char *mode, const char *persistent_id );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_from_pipe(FILE *file, const char *mode );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_tmpfile(int dummy );


__attribute__ ((visibility("default"))) php_stream *_php_stream_fopen_temporary_file(const char *dir, const char *pfx, char **opened_path );





__attribute__ ((visibility("default"))) FILE * _php_stream_open_wrapper_as_file(char * path, char * mode, int options, char **opened_path );



# 40 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/SAPI.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/SAPI.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_llist.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/SAPI.h" 2
# 51 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/SAPI.h"
typedef struct {
 char *header;
 uint header_len;
} sapi_header_struct;


typedef struct {
 zend_llist headers;
 int http_response_code;
 unsigned char send_default_content_type;
 char *mimetype;
 char *http_status_line;
} sapi_headers_struct;


typedef struct _sapi_post_entry sapi_post_entry;
typedef struct _sapi_module_struct sapi_module_struct;


extern __attribute__ ((visibility("default"))) sapi_module_struct sapi_module;








typedef struct {
 const char *request_method;
 char *query_string;
 char *post_data, *raw_post_data;
 char *cookie_data;
 long content_length;
 uint post_data_length, raw_post_data_length;

 char *path_translated;
 char *request_uri;

 const char *content_type;

 zend_bool headers_only;
 zend_bool no_headers;
 zend_bool headers_read;

 sapi_post_entry *post_entry;

 char *content_type_dup;


 char *auth_user;
 char *auth_password;
 char *auth_digest;


 char *argv0;


 char *current_user;
 int current_user_length;


 int argc;
 char **argv;
 int proto_num;
} sapi_request_info;


typedef struct _sapi_globals_struct {
 void *server_context;
 sapi_request_info request_info;
 sapi_headers_struct sapi_headers;
 int read_post_bytes;
 unsigned char headers_sent;
 struct stat global_stat;
 char *default_mimetype;
 char *default_charset;
 HashTable *rfc1867_uploaded_files;
 long post_max_size;
 int options;
 zend_bool sapi_started;
 double global_request_time;
 HashTable known_post_content_types;
 zval *callback_func;
 zend_fcall_info_cache fci_cache;
 zend_bool callback_run;
} sapi_globals_struct;








extern __attribute__ ((visibility("default"))) sapi_globals_struct sapi_globals;


__attribute__ ((visibility("default"))) void sapi_startup(sapi_module_struct *sf);
__attribute__ ((visibility("default"))) void sapi_shutdown(void);
__attribute__ ((visibility("default"))) void sapi_activate(void);
__attribute__ ((visibility("default"))) void sapi_deactivate(void);
__attribute__ ((visibility("default"))) void sapi_initialize_empty_request(void);

# 167 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/SAPI.h"
typedef struct {
 char *line;
 uint line_len;
 long response_code;
} sapi_header_line;

typedef enum {
 SAPI_HEADER_REPLACE,
 SAPI_HEADER_ADD,
 SAPI_HEADER_DELETE,
 SAPI_HEADER_DELETE_ALL,
 SAPI_HEADER_SET_STATUS
} sapi_header_op_enum;


__attribute__ ((visibility("default"))) int sapi_header_op(sapi_header_op_enum op, void *arg );


__attribute__ ((visibility("default"))) int sapi_add_header_ex(char *header_line, uint header_line_len, zend_bool duplicate, zend_bool replace );



__attribute__ ((visibility("default"))) int sapi_send_headers(void);
__attribute__ ((visibility("default"))) void sapi_free_header(sapi_header_struct *sapi_header);
__attribute__ ((visibility("default"))) void sapi_handle_post(void *arg );

__attribute__ ((visibility("default"))) int sapi_register_post_entries(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) int sapi_register_post_entry(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) void sapi_unregister_post_entry(sapi_post_entry *post_entry );
__attribute__ ((visibility("default"))) int sapi_register_default_post_reader(void (*default_post_reader)(void) );
__attribute__ ((visibility("default"))) int sapi_register_treat_data(void (*treat_data)(int arg, char *str, zval *destArray ) );
__attribute__ ((visibility("default"))) int sapi_register_input_filter(unsigned int (*input_filter)(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len ), unsigned int (*input_filter_init)(void) );

__attribute__ ((visibility("default"))) int sapi_flush(void);
__attribute__ ((visibility("default"))) struct stat *sapi_get_stat(void);
__attribute__ ((visibility("default"))) char *sapi_getenv(char *name, size_t name_len );

__attribute__ ((visibility("default"))) char *sapi_get_default_content_type(void);
__attribute__ ((visibility("default"))) void sapi_get_default_content_type_header(sapi_header_struct *default_header );
__attribute__ ((visibility("default"))) size_t sapi_apply_default_charset(char **mimetype, size_t len );
__attribute__ ((visibility("default"))) void sapi_activate_headers_only(void);

__attribute__ ((visibility("default"))) int sapi_get_fd(int *fd );
__attribute__ ((visibility("default"))) int sapi_force_http_10(void);

__attribute__ ((visibility("default"))) int sapi_get_target_uid(uid_t * );
__attribute__ ((visibility("default"))) int sapi_get_target_gid(gid_t * );
__attribute__ ((visibility("default"))) double sapi_get_request_time(void);
__attribute__ ((visibility("default"))) void sapi_terminate_process(void);


struct _sapi_module_struct {
 char *name;
 char *pretty_name;

 int (*startup)(struct _sapi_module_struct *sapi_module);
 int (*shutdown)(struct _sapi_module_struct *sapi_module);

 int (*activate)(void);
 int (*deactivate)(void);

 int (*ub_write)(const char *str, unsigned int str_length );
 void (*flush)(void *server_context);
 struct stat *(*get_stat)(void);
 char *(*getenv)(char *name, size_t name_len );

 void (*sapi_error)(int type, const char *error_msg, ...);

 int (*header_handler)(sapi_header_struct *sapi_header, sapi_header_op_enum op, sapi_headers_struct *sapi_headers );
 int (*send_headers)(sapi_headers_struct *sapi_headers );
 void (*send_header)(sapi_header_struct *sapi_header, void *server_context );

 int (*read_post)(char *buffer, uint count_bytes );
 char *(*read_cookies)(void);

 void (*register_server_variables)(zval *track_vars_array );
 void (*log_message)(char *message );
 double (*get_request_time)(void);
 void (*terminate_process)(void);

 char *php_ini_path_override;

 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);

 void (*default_post_reader)(void);
 void (*treat_data)(int arg, char *str, zval *destArray );
 char *executable_location;

 int php_ini_ignore;
 int php_ini_ignore_cwd;

 int (*get_fd)(int *fd );

 int (*force_http_10)(void);

 int (*get_target_uid)(uid_t * );
 int (*get_target_gid)(gid_t * );

 unsigned int (*input_filter)(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len );

 void (*ini_defaults)(HashTable *configuration_hash);
 int phpinfo_as_text;

 char *ini_entries;
 const zend_function_entry *additional_functions;
 unsigned int (*input_filter_init)(void);
};


struct _sapi_post_entry {
 char *content_type;
 uint content_type_len;
 void (*post_reader)(void);
 void (*post_handler)(char *content_type_dup, void *arg );
};
# 302 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/SAPI.h"

__attribute__ ((visibility("default"))) void sapi_read_standard_form_data(void);
__attribute__ ((visibility("default"))) void php_default_post_reader(void);
__attribute__ ((visibility("default"))) void php_default_treat_data(int arg, char *str, zval* destArray );
__attribute__ ((visibility("default"))) unsigned int php_default_input_filter(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len );

# 41 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_main.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_main.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/SAPI.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_main.h" 2


__attribute__ ((visibility("default"))) int php_request_startup(void);
__attribute__ ((visibility("default"))) void php_request_shutdown(void *dummy);
__attribute__ ((visibility("default"))) void php_request_shutdown_for_exec(void *dummy);
__attribute__ ((visibility("default"))) int php_module_startup(sapi_module_struct *sf, zend_module_entry *additional_modules, uint num_additional_modules);
__attribute__ ((visibility("default"))) void php_module_shutdown(void);
__attribute__ ((visibility("default"))) void php_module_shutdown_for_exec(void);
__attribute__ ((visibility("default"))) int php_module_shutdown_wrapper(sapi_module_struct *sapi_globals);
__attribute__ ((visibility("default"))) int php_request_startup_for_hook(void);
__attribute__ ((visibility("default"))) void php_request_shutdown_for_hook(void *dummy);

__attribute__ ((visibility("default"))) int php_register_extensions(zend_module_entry **ptr, int count );

__attribute__ ((visibility("default"))) int php_execute_script(zend_file_handle *primary_file );
__attribute__ ((visibility("default"))) int php_execute_simple_script(zend_file_handle *primary_file, zval **ret );
__attribute__ ((visibility("default"))) int php_handle_special_queries(void);
__attribute__ ((visibility("default"))) int php_lint_script(zend_file_handle *file );

__attribute__ ((visibility("default"))) void php_handle_aborted_connection(void);
__attribute__ ((visibility("default"))) int php_handle_auth_data(const char *auth );

__attribute__ ((visibility("default"))) void php_html_puts(const char *str, uint siz );
__attribute__ ((visibility("default"))) int php_stream_open_for_zend_ex(const char *filename, zend_file_handle *handle, int mode );

extern void php_call_shutdown_functions(void);
extern void php_free_shutdown_functions(void);


extern int php_init_environ(void);
extern int php_shutdown_environ(void);

# 42 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_open_temporary_file.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_open_temporary_file.h"

__attribute__ ((visibility("default"))) FILE *php_open_temporary_file(const char *dir, const char *pfx, char **opened_path_p );
__attribute__ ((visibility("default"))) int php_open_temporary_fd_ex(const char *dir, const char *pfx, char **opened_path_p, zend_bool open_basedir_check );
__attribute__ ((visibility("default"))) int php_open_temporary_fd(const char *dir, const char *pfx, char **opened_path_p );
__attribute__ ((visibility("default"))) const char *php_get_temporary_directory(void);
__attribute__ ((visibility("default"))) void php_shutdown_temporary_directory(void);

# 43 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/info.h" 1
# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/info.h"

void zif_phpversion(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_phpinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_phpcredits(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_logo_guid(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_real_logo_guid(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_zend_logo_guid(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_egg_logo_guid(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_sapi_name(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_uname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_ini_scanned_files(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_ini_loaded_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) char *php_info_html_esc(char *string );
__attribute__ ((visibility("default"))) void php_info_html_esc_write(char *string, int str_len );
__attribute__ ((visibility("default"))) void php_print_info_htmlhead(void);
__attribute__ ((visibility("default"))) void php_print_info(int flag );
__attribute__ ((visibility("default"))) void php_print_style(void);
__attribute__ ((visibility("default"))) void php_info_print_style(void);
__attribute__ ((visibility("default"))) void php_info_print_table_colspan_header(int num_cols, char *header);
__attribute__ ((visibility("default"))) void php_info_print_table_header(int num_cols, ...);
__attribute__ ((visibility("default"))) void php_info_print_table_row(int num_cols, ...);
__attribute__ ((visibility("default"))) void php_info_print_table_row_ex(int num_cols, const char *, ...);
__attribute__ ((visibility("default"))) void php_info_print_table_start(void);
__attribute__ ((visibility("default"))) void php_info_print_table_end(void);
__attribute__ ((visibility("default"))) void php_info_print_box_start(int bg);
__attribute__ ((visibility("default"))) void php_info_print_box_end(void);
__attribute__ ((visibility("default"))) void php_info_print_hr(void);
__attribute__ ((visibility("default"))) void php_info_print_module(zend_module_entry *module );
__attribute__ ((visibility("default"))) char *php_logo_guid(void);
__attribute__ ((visibility("default"))) char *php_get_uname(char mode);

void register_phpinfo_constants(int type, int module_number );

# 44 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/basic_functions.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/basic_functions.h"
# 1 "/usr/include/wchar.h" 1 3 4
# 42 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 43 "/usr/include/wchar.h" 2 3 4
# 52 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 352 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 53 "/usr/include/wchar.h" 2 3 4
# 104 "/usr/include/wchar.h" 3 4


typedef __mbstate_t mbstate_t;

# 129 "/usr/include/wchar.h" 3 4





struct tm;









extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   __const wchar_t *__restrict __src) __attribute__ ((__nothrow__));

extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    __const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__));


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   __const wchar_t *__restrict __src) __attribute__ ((__nothrow__));

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    __const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__));


extern int wcscmp (__const wchar_t *__s1, __const wchar_t *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__));

extern int wcsncmp (__const wchar_t *__s1, __const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__));




extern int wcscasecmp (__const wchar_t *__s1, __const wchar_t *__s2) __attribute__ ((__nothrow__));


extern int wcsncasecmp (__const wchar_t *__s1, __const wchar_t *__s2,
   size_t __n) __attribute__ ((__nothrow__));





extern int wcscasecmp_l (__const wchar_t *__s1, __const wchar_t *__s2,
    __locale_t __loc) __attribute__ ((__nothrow__));

extern int wcsncasecmp_l (__const wchar_t *__s1, __const wchar_t *__s2,
     size_t __n, __locale_t __loc) __attribute__ ((__nothrow__));





extern int wcscoll (__const wchar_t *__s1, __const wchar_t *__s2) __attribute__ ((__nothrow__));



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         __const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__));








extern int wcscoll_l (__const wchar_t *__s1, __const wchar_t *__s2,
        __locale_t __loc) __attribute__ ((__nothrow__));




extern size_t wcsxfrm_l (wchar_t *__s1, __const wchar_t *__s2,
    size_t __n, __locale_t __loc) __attribute__ ((__nothrow__));


extern wchar_t *wcsdup (__const wchar_t *__s) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));










extern wchar_t *wcschr (__const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__));
# 234 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsrchr (__const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__));


# 246 "/usr/include/wchar.h" 3 4



extern size_t wcscspn (__const wchar_t *__wcs, __const wchar_t *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__));


extern size_t wcsspn (__const wchar_t *__wcs, __const wchar_t *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__));
# 263 "/usr/include/wchar.h" 3 4
extern wchar_t *wcspbrk (__const wchar_t *__wcs, __const wchar_t *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__));
# 274 "/usr/include/wchar.h" 3 4
extern wchar_t *wcsstr (__const wchar_t *__haystack, __const wchar_t *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__));



extern wchar_t *wcstok (wchar_t *__restrict __s,
   __const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) __attribute__ ((__nothrow__));


extern size_t wcslen (__const wchar_t *__s) __attribute__ ((__nothrow__)) __attribute__ ((__pure__));

# 303 "/usr/include/wchar.h" 3 4
extern size_t wcsnlen (__const wchar_t *__s, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__));




# 317 "/usr/include/wchar.h" 3 4
extern wchar_t *wmemchr (__const wchar_t *__s, wchar_t __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__));



extern int wmemcmp (__const wchar_t *__restrict __s1,
      __const wchar_t *__restrict __s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    __const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__));



extern wchar_t *wmemmove (wchar_t *__s1, __const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__));


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) __attribute__ ((__nothrow__));

# 348 "/usr/include/wchar.h" 3 4



extern wint_t btowc (int __c) __attribute__ ((__nothrow__));



extern int wctob (wint_t __c) __attribute__ ((__nothrow__));



extern int mbsinit (__const mbstate_t *__ps) __attribute__ ((__nothrow__)) __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         __const char *__restrict __s, size_t __n,
         mbstate_t *__p) __attribute__ ((__nothrow__));


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) __attribute__ ((__nothrow__));


extern size_t __mbrlen (__const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) __attribute__ ((__nothrow__));
extern size_t mbrlen (__const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) __attribute__ ((__nothrow__));








extern wint_t __btowc_alias (int __c) __asm ("btowc");
extern __inline wint_t
__attribute__ ((__nothrow__)) btowc (int __c)
{ return (__builtin_constant_p (__c) && __c >= '\0' && __c <= '\x7f'
   ? (wint_t) __c : __btowc_alias (__c)); }

extern int __wctob_alias (wint_t __c) __asm ("wctob");
extern __inline int
__attribute__ ((__nothrow__)) wctob (wint_t __wc)
{ return (__builtin_constant_p (__wc) && __wc >= L'\0' && __wc <= L'\x7f'
   ? (int) __wc : __wctob_alias (__wc)); }

extern __inline size_t
__attribute__ ((__nothrow__)) mbrlen (__const char *__restrict __s, size_t __n, mbstate_t *__restrict __ps)

{ return (__ps != ((void *)0)
   ? mbrtowc (((void *)0), __s, __n, __ps) : __mbrlen (__s, __n, ((void *)0))); }





extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    __const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__));



extern size_t wcsrtombs (char *__restrict __dst,
    __const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__));






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     __const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) __attribute__ ((__nothrow__));



extern size_t wcsnrtombs (char *__restrict __dst,
     __const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) __attribute__ ((__nothrow__));
# 445 "/usr/include/wchar.h" 3 4



extern double wcstod (__const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) __attribute__ ((__nothrow__));





extern float wcstof (__const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__));
extern long double wcstold (__const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__));







extern long int wcstol (__const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) __attribute__ ((__nothrow__));



extern unsigned long int wcstoul (__const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__));






__extension__
extern long long int wcstoll (__const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__));



__extension__
extern unsigned long long int wcstoull (__const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) __attribute__ ((__nothrow__));

# 578 "/usr/include/wchar.h" 3 4
extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__));






extern int fwide (__FILE *__fp, int __mode) __attribute__ ((__nothrow__));






extern int fwprintf (__FILE *__restrict __stream,
       __const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (__const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       __const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__)) ;





extern int vfwprintf (__FILE *__restrict __s,
        __const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (__const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        __const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) ;






extern int fwscanf (__FILE *__restrict __stream,
      __const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (__const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (__const wchar_t *__restrict __s,
      __const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__)) ;
# 654 "/usr/include/wchar.h" 3 4
extern int fwscanf (__FILE *__restrict __stream, __const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_fwscanf")


                                                          ;
extern int wscanf (__const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_wscanf")

                                                          ;
extern int swscanf (__const wchar_t *__restrict __s, __const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_swscanf") __attribute__ ((__nothrow__))


                                                          ;
# 678 "/usr/include/wchar.h" 3 4









extern int vfwscanf (__FILE *__restrict __s,
       __const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (__const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (__const wchar_t *__restrict __s,
       __const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) ;





extern int vfwscanf (__FILE *__restrict __s, __const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfwscanf")


                                                          ;
extern int vwscanf (__const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vwscanf")

                                                          ;
extern int vswscanf (__const wchar_t *__restrict __s, __const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vswscanf") __attribute__ ((__nothrow__))


                                                          ;
# 734 "/usr/include/wchar.h" 3 4









extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (__const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);

# 849 "/usr/include/wchar.h" 3 4




extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   __const wchar_t *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));

# 889 "/usr/include/wchar.h" 3 4

# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/basic_functions.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_filestat.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_filestat.h"
int zm_activate_filestat(int type, int module_number );
int zm_deactivate_filestat(int type, int module_number );

void zif_realpath_cache_size(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_realpath_cache_get(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_clearstatcache(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileatime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filectime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filegroup(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileinode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filemtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileowner(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fileperms(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filesize(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_filetype(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_writable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_readable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_executable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_dir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_is_link(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_stat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_lstat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_disk_total_space(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_disk_free_space(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chown(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chgrp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_lchown(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_lchgrp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_chmod(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_touch(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_clearstatcache(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 89 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_filestat.h"
typedef int php_stat_len;


__attribute__ ((visibility("default"))) void php_clear_stat_cache(zend_bool clear_realpath_cache, const char *filename, int filename_len );
__attribute__ ((visibility("default"))) void php_stat(const char *filename, php_stat_len filename_length, int type, zval *return_value );
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/basic_functions.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_highlight.h" 1
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/Zend/zend_highlight.h"
typedef struct _zend_syntax_highlighter_ini {
 char *highlight_html;
 char *highlight_comment;
 char *highlight_default;
 char *highlight_string;
 char *highlight_keyword;
} zend_syntax_highlighter_ini;



__attribute__ ((visibility("default"))) void zend_highlight(zend_syntax_highlighter_ini *syntax_highlighter_ini );
__attribute__ ((visibility("default"))) void zend_strip(void);
__attribute__ ((visibility("default"))) int highlight_file(char *filename, zend_syntax_highlighter_ini *syntax_highlighter_ini );
__attribute__ ((visibility("default"))) int highlight_string(zval *str, zend_syntax_highlighter_ini *syntax_highlighter_ini, char *str_name );
__attribute__ ((visibility("default"))) void zend_html_putc(char c);
__attribute__ ((visibility("default"))) void zend_html_puts(const char *s, uint len );


extern zend_syntax_highlighter_ini syntax_highlighter_ini;
# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/basic_functions.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/url_scanner_ex.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/url_scanner_ex.h"
int zm_startup_url_scanner_ex(int type, int module_number );
int zm_shutdown_url_scanner_ex(int type, int module_number );

int zm_activate_url_scanner_ex(int type, int module_number );
int zm_deactivate_url_scanner_ex(int type, int module_number );

__attribute__ ((visibility("default"))) char *php_url_scanner_adapt_single_url(const char *url, size_t urllen, const char *name, const char *value, size_t *newlen );
__attribute__ ((visibility("default"))) int php_url_scanner_add_var(char *name, int name_len, char *value, int value_len, int urlencode );
__attribute__ ((visibility("default"))) int php_url_scanner_reset_vars(void);

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_smart_str_public.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_smart_str_public.h"
typedef struct {
 char *c;
 size_t len;
 size_t a;
} smart_str;
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/url_scanner_ex.h" 2

typedef struct {

 smart_str tag;
 smart_str arg;
 smart_str val;
 smart_str buf;


 smart_str result;


 smart_str form_app, url_app;

 int active;

 char *lookup_data;
 int state;


 HashTable *tags;
} url_adapt_state_ex_t;
# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/basic_functions.h" 2

extern zend_module_entry basic_functions_module;


int zm_startup_basic(int type, int module_number );
int zm_shutdown_basic(int type, int module_number );
int zm_activate_basic(int type, int module_number );
int zm_deactivate_basic(int type, int module_number );
void zm_info_basic(zend_module_entry *zend_module );

void zif_constant(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_usleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_time_nanosleep(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_time_sleep_until(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_flush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void php_inet_ntop(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void php_inet_pton(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_ip2long(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_long2ip(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_getenv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_putenv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_getopt(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_get_current_user(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_time_limit(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_header_register_callback(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_get_cfg_var(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_magic_quotes_runtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_magic_quotes_runtime(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_magic_quotes_gpc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_error_log(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_error_get_last(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_call_user_func(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_func_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_method(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_call_user_method_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_forward_static_call(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_forward_static_call_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_register_shutdown_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_highlight_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_highlight_string(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_php_strip_whitespace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void php_get_highlight_struct(zend_syntax_highlighter_ini *syntax_highlighter_ini);

void zif_ini_get(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_get_all(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_set(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ini_restore(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_set_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_restore_include_path(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_print_r(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vfprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_connection_aborted(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_connection_status(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ignore_user_abort(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_getservbyname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getservbyport(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getprotobyname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_getprotobynumber(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void php_if_crc32(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_register_tick_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_unregister_tick_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_sys_getloadavg(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_is_uploaded_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_move_uploaded_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_parse_ini_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_parse_ini_string(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );




void zif_str_rot13(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_get_filters(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_filter_register(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_make_writeable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_prepend(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_append(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stream_bucket_new(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
int zm_startup_user_filters(int type, int module_number );
int zm_deactivate_user_filters(int type, int module_number );
int zm_deactivate_browscap(int type, int module_number );


__attribute__ ((visibility("default"))) int _php_error_log(int opt_err, char *message, char *opt, char *headers );
__attribute__ ((visibility("default"))) int _php_error_log_ex(int opt_err, char *message, int message_len, char *opt, char *headers );
__attribute__ ((visibility("default"))) int php_prefix_varname(zval *result, zval *prefix, char *var_name, int var_name_len, zend_bool add_underscore );



typedef unsigned int php_uint32;
typedef signed int php_int32;
# 164 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/basic_functions.h"
typedef struct _php_basic_globals {
 HashTable *user_shutdown_function_names;
 HashTable putenv_ht;
 zval *strtok_zval;
 char *strtok_string;
 char *locale_string;
 char *strtok_last;
 char strtok_table[256];
 ulong strtok_len;
 char str_ebuf[40];
 zend_fcall_info array_walk_fci;
 zend_fcall_info_cache array_walk_fci_cache;
 zend_fcall_info user_compare_fci;
 zend_fcall_info_cache user_compare_fci_cache;
 zend_llist *user_tick_functions;

 zval *active_ini_file_section;


 long page_uid;
 long page_gid;
 long page_inode;
 time_t page_mtime;


 char *CurrentStatFile, *CurrentLStatFile;
 php_stream_statbuf ssb, lssb;


 php_uint32 state[(624)+1];
 php_uint32 *next;
 int left;

 unsigned int rand_seed;

 zend_bool rand_is_seeded;
 zend_bool mt_rand_is_seeded;


 char *syslog_device;


 zend_class_entry *incomplete_class;
 unsigned serialize_lock;
 struct {
  void *var_hash;
  unsigned level;
 } serialize;
 struct {
  void *var_hash;
  unsigned level;
 } unserialize;


 url_adapt_state_ex_t url_adapt_state_ex;


 void *mmap_file;
 size_t mmap_len;


 HashTable *user_filter_map;






 int umask;
} php_basic_globals;






__attribute__ ((visibility("default"))) extern php_basic_globals basic_globals;



typedef struct {
 char *putenv_string;
 char *previous_value;
 char *key;
 int key_len;
} putenv_entry;


__attribute__ ((visibility("default"))) double php_get_nan(void);
__attribute__ ((visibility("default"))) double php_get_inf(void);

typedef struct _php_shutdown_function_entry {
 zval **arguments;
 int arg_count;
} php_shutdown_function_entry;

__attribute__ ((visibility("default"))) extern zend_bool register_user_shutdown_function(char *function_name, size_t function_len, php_shutdown_function_entry *shutdown_function_entry );
__attribute__ ((visibility("default"))) extern zend_bool remove_user_shutdown_function(char *function_name, size_t function_len );
__attribute__ ((visibility("default"))) extern zend_bool append_user_shutdown_function(php_shutdown_function_entry shutdown_function_entry );
# 45 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/file.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/file.h"
int zm_startup_file(int type, int module_number );
int zm_shutdown_file(int type, int module_number );

void zif_tempnam(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_tmpfile(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_fopen(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fclose(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_popen(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_pclose(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_feof(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fread(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fgetc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fgets(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fscanf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fgetss(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fgetcsv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fputcsv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fwrite(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fflush(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_rewind(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_ftell(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fseek(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_mkdir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rmdir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_fpassthru(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_readfile(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_umask(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rename(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_unlink(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_copy(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file_get_contents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_file_put_contents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_meta_tags(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_flock(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fd_set(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_fd_isset(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_realpath(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_fnmatch(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void php_if_ftruncate(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_fstat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sys_get_temp_dir(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

int zm_startup_user_streams(int type, int module_number );

__attribute__ ((visibility("default"))) int php_le_stream_context(void);
__attribute__ ((visibility("default"))) int php_set_sock_blocking(int socketd, int block );
__attribute__ ((visibility("default"))) int php_copy_file(char *src, char *dest );
__attribute__ ((visibility("default"))) int php_copy_file_ex(char *src, char *dest, int src_chk );
__attribute__ ((visibility("default"))) int php_copy_file_ctx(char *src, char *dest, int src_chk, php_stream_context *ctx );
__attribute__ ((visibility("default"))) int php_mkdir_ex(char *dir, long mode, int options );
__attribute__ ((visibility("default"))) int php_mkdir(char *dir, long mode );
__attribute__ ((visibility("default"))) void php_fgetcsv(php_stream *stream, char delimiter, char enclosure, char escape_char, size_t buf_len, char *buf, zval *return_value );
__attribute__ ((visibility("default"))) int php_fputcsv(php_stream *stream, zval *fields, char delimiter, char enclosure, char escape_char );
# 93 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/file.h"
typedef enum _php_meta_tags_token {
 TOK_EOF = 0,
 TOK_OPENTAG,
 TOK_CLOSETAG,
 TOK_SLASH,
 TOK_EQUAL,
 TOK_SPACE,
 TOK_ID,
 TOK_STRING,
 TOK_OTHER
} php_meta_tags_token;

typedef struct _php_meta_tags_data {
 php_stream *stream;
 int ulc;
 int lc;
 char *input_buffer;
 char *token_data;
 int token_len;
 int in_meta;
} php_meta_tags_data;

php_meta_tags_token php_next_meta_token(php_meta_tags_data * );

typedef struct {
   int pclose_ret;
 size_t def_chunk_size;
 long auto_detect_line_endings;
 long default_socket_timeout;
 char *user_agent;
 char *from_address;
 char *user_stream_current_filename;
 php_stream_context *default_context;
 HashTable *stream_wrappers;
 HashTable *stream_filters;
} php_file_globals;






extern __attribute__ ((visibility("default"))) php_file_globals file_globals;
# 46 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_string.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_string.h"
void zif_strspn(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strcspn(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_ireplace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rtrim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_trim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ltrim(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_soundex(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_levenshtein(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_count_chars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_wordwrap(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_explode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_implode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtok(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtoupper(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtolower(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_basename(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_dirname(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_pathinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strstr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrpos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strripos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrchr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_quotemeta(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ucfirst(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_lcfirst(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ucwords(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strtr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strrev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hebrev(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hebrevc(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_user_sprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_user_printf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_vsprintf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_addcslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_addslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripcslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stripslashes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_ord(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_nl2br(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_setlocale(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_localeconv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_nl_langinfo(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_stristr(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_chunk_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_parse_str(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_getcsv(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_bin2hex(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hex2bin(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_similar_text(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strip_tags(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_repeat(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_replace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strnatcmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strnatcasecmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_pad(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sscanf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_shuffle(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_word_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_str_split(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_strpbrk(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_substr_compare(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

void zif_strcoll(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


void zif_money_format(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );







int zm_startup_nl_langinfo(int type, int module_number );






__attribute__ ((visibility("default"))) int strnatcmp_ex(char const *a, size_t a_len, char const *b, size_t b_len, int fold_case);


__attribute__ ((visibility("default"))) struct lconv *localeconv_r(struct lconv *out);


__attribute__ ((visibility("default"))) char *php_strtoupper(char *s, size_t len);
__attribute__ ((visibility("default"))) char *php_strtolower(char *s, size_t len);
__attribute__ ((visibility("default"))) char *php_strtr(char *str, int len, char *str_from, char *str_to, int trlen);
__attribute__ ((visibility("default"))) char *php_addslashes(char *str, int length, int *new_length, int freeit );
__attribute__ ((visibility("default"))) char *php_addcslashes(const char *str, int length, int *new_length, int freeit, char *what, int wlength );
__attribute__ ((visibility("default"))) void php_stripslashes(char *str, int *len );
__attribute__ ((visibility("default"))) void php_stripcslashes(char *str, int *len);
__attribute__ ((visibility("default"))) void php_basename(const char *s, size_t len, char *suffix, size_t sufflen, char **p_ret, size_t *p_len );
__attribute__ ((visibility("default"))) size_t php_dirname(char *str, size_t len);
__attribute__ ((visibility("default"))) char *php_stristr(char *s, char *t, size_t s_len, size_t t_len);
__attribute__ ((visibility("default"))) char *php_str_to_str_ex(char *haystack, int length, char *needle,
  int needle_len, char *str, int str_len, int *_new_length, int case_sensitivity, int *replace_count);
__attribute__ ((visibility("default"))) char *php_str_to_str(char *haystack, int length, char *needle,
  int needle_len, char *str, int str_len, int *_new_length);
__attribute__ ((visibility("default"))) char *php_trim(char *c, int len, char *what, int what_len, zval *return_value, int mode );
__attribute__ ((visibility("default"))) size_t php_strip_tags(char *rbuf, int len, int *state, char *allow, int allow_len);
__attribute__ ((visibility("default"))) size_t php_strip_tags_ex(char *rbuf, int len, int *stateptr, char *allow, int allow_len, zend_bool allow_tag_spaces);
__attribute__ ((visibility("default"))) int php_char_to_str_ex(char *str, uint len, char from, char *to, int to_len, zval *result, int case_sensitivity, int *replace_count);
__attribute__ ((visibility("default"))) int php_char_to_str(char *str, uint len, char from, char *to, int to_len, zval *result);
__attribute__ ((visibility("default"))) void php_implode(zval *delim, zval *arr, zval *return_value );
__attribute__ ((visibility("default"))) void php_explode(zval *delim, zval *str, zval *return_value, long limit);

__attribute__ ((visibility("default"))) size_t php_strspn(char *s1, char *s2, char *s1_end, char *s2_end);
__attribute__ ((visibility("default"))) size_t php_strcspn(char *s1, char *s2, char *s1_end, char *s2_end);

__attribute__ ((visibility("default"))) int string_natural_compare_function_ex(zval *result, zval *op1, zval *op2, zend_bool case_insensitive );
__attribute__ ((visibility("default"))) int string_natural_compare_function(zval *result, zval *op1, zval *op2 );
__attribute__ ((visibility("default"))) int string_natural_case_compare_function(zval *result, zval *op1, zval *op2 );
# 165 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_string.h"
void register_string_constants(int type, int module_number );
# 47 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/url.h" 1
# 23 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/url.h"
typedef struct php_url {
 char *scheme;
 char *user;
 char *pass;
 char *host;
 unsigned short port;
 char *path;
 char *query;
 char *fragment;
} php_url;

__attribute__ ((visibility("default"))) void php_url_free(php_url *theurl);
__attribute__ ((visibility("default"))) php_url *php_url_parse(char const *str);
__attribute__ ((visibility("default"))) php_url *php_url_parse_ex(char const *str, int length);
__attribute__ ((visibility("default"))) int php_url_decode(char *str, int len);
__attribute__ ((visibility("default"))) int php_raw_url_decode(char *str, int len);
__attribute__ ((visibility("default"))) char *php_url_encode(char const *s, int len, int *new_length);
__attribute__ ((visibility("default"))) char *php_raw_url_encode(char const *s, int len, int *new_length);

void zif_parse_url(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_urlencode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_urldecode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rawurlencode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_rawurldecode(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_get_headers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 48 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/crc32.h" 1
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/crc32.h"
static const unsigned int crc32tab[256] = {
 0x00000000, 0x77073096, 0xee0e612c, 0x990951ba,
 0x076dc419, 0x706af48f, 0xe963a535, 0x9e6495a3,
 0x0edb8832, 0x79dcb8a4, 0xe0d5e91e, 0x97d2d988,
 0x09b64c2b, 0x7eb17cbd, 0xe7b82d07, 0x90bf1d91,
 0x1db71064, 0x6ab020f2, 0xf3b97148, 0x84be41de,
 0x1adad47d, 0x6ddde4eb, 0xf4d4b551, 0x83d385c7,
 0x136c9856, 0x646ba8c0, 0xfd62f97a, 0x8a65c9ec,
 0x14015c4f, 0x63066cd9, 0xfa0f3d63, 0x8d080df5,
 0x3b6e20c8, 0x4c69105e, 0xd56041e4, 0xa2677172,
 0x3c03e4d1, 0x4b04d447, 0xd20d85fd, 0xa50ab56b,
 0x35b5a8fa, 0x42b2986c, 0xdbbbc9d6, 0xacbcf940,
 0x32d86ce3, 0x45df5c75, 0xdcd60dcf, 0xabd13d59,
 0x26d930ac, 0x51de003a, 0xc8d75180, 0xbfd06116,
 0x21b4f4b5, 0x56b3c423, 0xcfba9599, 0xb8bda50f,
 0x2802b89e, 0x5f058808, 0xc60cd9b2, 0xb10be924,
 0x2f6f7c87, 0x58684c11, 0xc1611dab, 0xb6662d3d,
 0x76dc4190, 0x01db7106, 0x98d220bc, 0xefd5102a,
 0x71b18589, 0x06b6b51f, 0x9fbfe4a5, 0xe8b8d433,
 0x7807c9a2, 0x0f00f934, 0x9609a88e, 0xe10e9818,
 0x7f6a0dbb, 0x086d3d2d, 0x91646c97, 0xe6635c01,
 0x6b6b51f4, 0x1c6c6162, 0x856530d8, 0xf262004e,
 0x6c0695ed, 0x1b01a57b, 0x8208f4c1, 0xf50fc457,
 0x65b0d9c6, 0x12b7e950, 0x8bbeb8ea, 0xfcb9887c,
 0x62dd1ddf, 0x15da2d49, 0x8cd37cf3, 0xfbd44c65,
 0x4db26158, 0x3ab551ce, 0xa3bc0074, 0xd4bb30e2,
 0x4adfa541, 0x3dd895d7, 0xa4d1c46d, 0xd3d6f4fb,
 0x4369e96a, 0x346ed9fc, 0xad678846, 0xda60b8d0,
 0x44042d73, 0x33031de5, 0xaa0a4c5f, 0xdd0d7cc9,
 0x5005713c, 0x270241aa, 0xbe0b1010, 0xc90c2086,
 0x5768b525, 0x206f85b3, 0xb966d409, 0xce61e49f,
 0x5edef90e, 0x29d9c998, 0xb0d09822, 0xc7d7a8b4,
 0x59b33d17, 0x2eb40d81, 0xb7bd5c3b, 0xc0ba6cad,
 0xedb88320, 0x9abfb3b6, 0x03b6e20c, 0x74b1d29a,
 0xead54739, 0x9dd277af, 0x04db2615, 0x73dc1683,
 0xe3630b12, 0x94643b84, 0x0d6d6a3e, 0x7a6a5aa8,
 0xe40ecf0b, 0x9309ff9d, 0x0a00ae27, 0x7d079eb1,
 0xf00f9344, 0x8708a3d2, 0x1e01f268, 0x6906c2fe,
 0xf762575d, 0x806567cb, 0x196c3671, 0x6e6b06e7,
 0xfed41b76, 0x89d32be0, 0x10da7a5a, 0x67dd4acc,
 0xf9b9df6f, 0x8ebeeff9, 0x17b7be43, 0x60b08ed5,
 0xd6d6a3e8, 0xa1d1937e, 0x38d8c2c4, 0x4fdff252,
 0xd1bb67f1, 0xa6bc5767, 0x3fb506dd, 0x48b2364b,
 0xd80d2bda, 0xaf0a1b4c, 0x36034af6, 0x41047a60,
 0xdf60efc3, 0xa867df55, 0x316e8eef, 0x4669be79,
 0xcb61b38c, 0xbc66831a, 0x256fd2a0, 0x5268e236,
 0xcc0c7795, 0xbb0b4703, 0x220216b9, 0x5505262f,
 0xc5ba3bbe, 0xb2bd0b28, 0x2bb45a92, 0x5cb36a04,
 0xc2d7ffa7, 0xb5d0cf31, 0x2cd99e8b, 0x5bdeae1d,
 0x9b64c2b0, 0xec63f226, 0x756aa39c, 0x026d930a,
 0x9c0906a9, 0xeb0e363f, 0x72076785, 0x05005713,
 0x95bf4a82, 0xe2b87a14, 0x7bb12bae, 0x0cb61b38,
 0x92d28e9b, 0xe5d5be0d, 0x7cdcefb7, 0x0bdbdf21,
 0x86d3d2d4, 0xf1d4e242, 0x68ddb3f8, 0x1fda836e,
 0x81be16cd, 0xf6b9265b, 0x6fb077e1, 0x18b74777,
 0x88085ae6, 0xff0f6a70, 0x66063bca, 0x11010b5c,
 0x8f659eff, 0xf862ae69, 0x616bffd3, 0x166ccf45,
 0xa00ae278, 0xd70dd2ee, 0x4e048354, 0x3903b3c2,
 0xa7672661, 0xd06016f7, 0x4969474d, 0x3e6e77db,
 0xaed16a4a, 0xd9d65adc, 0x40df0b66, 0x37d83bf0,
 0xa9bcae53, 0xdebb9ec5, 0x47b2cf7f, 0x30b5ffe9,
 0xbdbdf21c, 0xcabac28a, 0x53b39330, 0x24b4a3a6,
 0xbad03605, 0xcdd70693, 0x54de5729, 0x23d967bf,
 0xb3667a2e, 0xc4614ab8, 0x5d681b02, 0x2a6f2b94,
 0xb40bbe37, 0xc30c8ea1, 0x5a05df1b, 0x2d02ef8d,
};
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/md5.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/md5.h"
__attribute__ ((visibility("default"))) void make_digest(char *md5str, const unsigned char *digest);
__attribute__ ((visibility("default"))) void make_digest_ex(char *md5str, const unsigned char *digest, int len);

void php_if_md5(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void php_if_md5_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 44 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/md5.h"
typedef struct {
 php_uint32 lo, hi;
 php_uint32 a, b, c, d;
 unsigned char buffer[64];
 php_uint32 block[16];
} PHP_MD5_CTX;

__attribute__ ((visibility("default"))) void PHP_MD5Init(PHP_MD5_CTX *ctx);
__attribute__ ((visibility("default"))) void PHP_MD5Update(PHP_MD5_CTX *ctx, const void *data, size_t size);
__attribute__ ((visibility("default"))) void PHP_MD5Final(unsigned char *result, PHP_MD5_CTX *ctx);
# 50 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/sha1.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/sha1.h"
typedef struct {
 php_uint32 state[5];
 php_uint32 count[2];
 unsigned char buffer[64];
} PHP_SHA1_CTX;

__attribute__ ((visibility("default"))) void PHP_SHA1Init(PHP_SHA1_CTX *);
__attribute__ ((visibility("default"))) void PHP_SHA1Update(PHP_SHA1_CTX *, const unsigned char *, unsigned int);
__attribute__ ((visibility("default"))) void PHP_SHA1Final(unsigned char[20], PHP_SHA1_CTX *);
__attribute__ ((visibility("default"))) void make_sha1_digest(char *sha1str, unsigned char *digest);

void zif_sha1(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_sha1_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 51 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_var.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_var.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_smart_str_public.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_var.h" 2

void zif_var_dump(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_var_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_debug_zval_dump(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_serialize(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_unserialize(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_memory_get_usage(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_memory_get_peak_usage(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

__attribute__ ((visibility("default"))) void php_var_dump(zval **struc, int level );
__attribute__ ((visibility("default"))) void php_var_export(zval **struc, int level );
__attribute__ ((visibility("default"))) void php_var_export_ex(zval **struc, int level, smart_str *buf );

__attribute__ ((visibility("default"))) void php_debug_zval_dump(zval **struc, int level );

typedef HashTable* php_serialize_data_t;

struct php_unserialize_data {
 void *first;
 void *last;
 void *first_dtor;
 void *last_dtor;
};

typedef struct php_unserialize_data* php_unserialize_data_t;

__attribute__ ((visibility("default"))) void php_var_serialize(smart_str *buf, zval **struc, php_serialize_data_t *var_hash );
__attribute__ ((visibility("default"))) int php_var_unserialize(zval **rval, const unsigned char **p, const unsigned char *max, php_unserialize_data_t *var_hash );
# 116 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_var.h"
__attribute__ ((visibility("default"))) void var_replace(php_unserialize_data_t *var_hash, zval *ozval, zval **nzval);
__attribute__ ((visibility("default"))) void var_push_dtor(php_unserialize_data_t *var_hash, zval **val);
__attribute__ ((visibility("default"))) void var_destroy(php_unserialize_data_t *var_hash);




__attribute__ ((visibility("default"))) zend_class_entry *php_create_empty_class(char *class_name, int len);

static inline int php_varname_check(char *name, int name_len, zend_bool silent )
{
    if (name_len == sizeof("GLOBALS") - 1 && !memcmp(name, "GLOBALS", sizeof("GLOBALS") - 1)) {
  if (!silent) {
   php_error_docref0(((void *)0) , (1<<1L), "Attempted GLOBALS variable overwrite");
  }
        return -1;
    } else if (name[0] == '_' &&
            (
             (name_len == sizeof("_GET") - 1 && !memcmp(name, "_GET", sizeof("_GET") - 1)) ||
             (name_len == sizeof("_POST") - 1 && !memcmp(name, "_POST", sizeof("_POST") - 1)) ||
             (name_len == sizeof("_COOKIE") - 1 && !memcmp(name, "_COOKIE", sizeof("_COOKIE") - 1)) ||
             (name_len == sizeof("_ENV") - 1 && !memcmp(name, "_ENV", sizeof("_ENV") - 1)) ||
             (name_len == sizeof("_SERVER") - 1 && !memcmp(name, "_SERVER", sizeof("_SERVER") - 1)) ||
             (name_len == sizeof("_SESSION") - 1 && !memcmp(name, "_SESSION", sizeof("_SESSION") - 1)) ||
             (name_len == sizeof("_FILES") - 1 && !memcmp(name, "_FILES", sizeof("_FILES") - 1)) ||
             (name_len == sizeof("_REQUEST") -1 && !memcmp(name, "_REQUEST", sizeof("_REQUEST") - 1))
            )
            ) {
  if (!silent) {
   php_error_docref0(((void *)0) , (1<<1L), "Attempted super-global (%s) variable overwrite", name);
  }
        return -1;
    } else if (name[0] == 'H' &&
            (
             (name_len == sizeof("HTTP_POST_VARS") - 1 && !memcmp(name, "HTTP_POST_VARS", sizeof("HTTP_POST_VARS") - 1)) ||
             (name_len == sizeof("HTTP_GET_VARS") - 1 && !memcmp(name, "HTTP_GET_VARS", sizeof("HTTP_GET_VARS") - 1)) ||
             (name_len == sizeof("HTTP_COOKIE_VARS") - 1 && !memcmp(name, "HTTP_COOKIE_VARS", sizeof("HTTP_COOKIE_VARS") - 1)) ||
             (name_len == sizeof("HTTP_ENV_VARS") - 1 && !memcmp(name, "HTTP_ENV_VARS", sizeof("HTTP_ENV_VARS") - 1)) ||
             (name_len == sizeof("HTTP_SERVER_VARS") - 1 && !memcmp(name, "HTTP_SERVER_VARS", sizeof("HTTP_SERVER_VARS") - 1)) ||
             (name_len == sizeof("HTTP_SESSION_VARS") - 1 && !memcmp(name, "HTTP_SESSION_VARS", sizeof("HTTP_SESSION_VARS") - 1)) ||
             (name_len == sizeof("HTTP_RAW_POST_DATA") - 1 && !memcmp(name, "HTTP_RAW_POST_DATA", sizeof("HTTP_RAW_POST_DATA") - 1)) ||
             (name_len == sizeof("HTTP_POST_FILES") - 1 && !memcmp(name, "HTTP_POST_FILES", sizeof("HTTP_POST_FILES") - 1))
            )
            ) {
  if (!silent) {
   php_error_docref0(((void *)0) , (1<<1L), "Attempted long input array (%s) overwrite", name);
  }
        return -1;
    }
 return 0;
}
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_smart_str.h" 1
# 153 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_smart_str.h"
static inline char *smart_str_print_long(char *buf, long num) {
 char *r;
 do { if (num < 0) { do { char *__p = ((buf)); unsigned long __num = (-(num)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (r) = __p; } while (0); *--(r) = '-'; } else { do { char *__p = ((buf)); unsigned long __num = ((num)); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); (r) = __p; } while (0); } } while (0);
 return r;
}

static inline char *smart_str_print_unsigned(char *buf, long num) {
 char *r;
 do { char *__p = (buf); unsigned long __num = (num); *__p = '\0'; do { *--__p = (char) (__num % 10) + '0'; __num /= 10; } while (__num > 0); r = __p; } while (0);
 return r;
}
# 53 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_versioning.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/standard/php_versioning.h"
__attribute__ ((visibility("default"))) char *php_canonicalize_version(const char *);
__attribute__ ((visibility("default"))) int php_version_compare(const char *, const char *);
void zif_version_compare(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
# 54 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_strtok_r.h" 1



char *tsrm_strtok_r(char *s, const char *delim, char **last);
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/TSRM/tsrm_virtual_cwd.h" 1
# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_array.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_array.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/php_spl.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/php_spl.h"
# 1 "/usr/include/stdint.h" 1 3 4
# 28 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 49 "/usr/include/stdint.h" 3 4
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 129 "/usr/include/stdint.h" 3 4
typedef unsigned int uintptr_t;
# 138 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/php_spl.h" 2
# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/php_spl.h"
extern zend_module_entry spl_module_entry;
# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/php_spl.h"
int zm_startup_spl(int type, int module_number );
int zm_shutdown_spl(int type, int module_number );
int zm_activate_spl(int type, int module_number );
int zm_deactivate_spl(int type, int module_number );
void zm_info_spl(zend_module_entry *zend_module );


typedef struct _zend_spl_globals {
 char * autoload_extensions;
 HashTable * autoload_functions;
 int autoload_running;
 int autoload_extensions_len;
 intptr_t hash_mask_handle;
 intptr_t hash_mask_handlers;
 int hash_mask_init;
} zend_spl_globals;






extern zend_spl_globals spl_globals;


void zif_spl_classes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_class_parents(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_class_implements(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_class_uses(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

__attribute__ ((visibility("default"))) void php_spl_object_hash(zval *obj, char* md5str );
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_array.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_iterators.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_iterators.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/pcre/php_pcre.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/pcre/php_pcre.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/pcre/pcrelib/pcre.h" 1
# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/pcre/pcrelib/pcre.h"
struct real_pcre;
typedef struct real_pcre pcre;
# 227 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/pcre/pcrelib/pcre.h"
typedef struct pcre_extra {
  unsigned long int flags;
  void *study_data;
  unsigned long int match_limit;
  void *callout_data;
  const unsigned char *tables;
  unsigned long int match_limit_recursion;
  unsigned char **mark;
} pcre_extra;






typedef struct pcre_callout_block {
  int version;

  int callout_number;
  int *offset_vector;
  const char * subject;
  int subject_length;
  int start_match;
  int current_position;
  int capture_top;
  int capture_last;
  void *callout_data;

  int pattern_position;
  int next_item_length;

} pcre_callout_block;
# 267 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/pcre/pcrelib/pcre.h"
extern void *(*php_pcre_malloc)(size_t);
extern void (*php_pcre_free)(void *);
extern void *(*php_pcre_stack_malloc)(size_t);
extern void (*php_pcre_stack_free)(void *);
extern int (*php_pcre_callout)(pcre_callout_block *);
# 282 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/pcre/pcrelib/pcre.h"
extern pcre *php_pcre_compile(const char *, int, const char **, int *,
                  const unsigned char *);
extern pcre *php_pcre_compile2(const char *, int, int *, const char **,
                  int *, const unsigned char *);
extern int php_pcre_config(int, void *);
extern int php_pcre_copy_named_substring(const pcre *, const char *,
                  int *, int, const char *, char *, int);
extern int php_pcre_copy_substring(const char *, int *, int, int, char *,
                  int);
extern int pcre_dfa_exec(const pcre *, const pcre_extra *,
                  const char *, int, int, int, int *, int , int *, int);
extern int php_pcre_exec(const pcre *, const pcre_extra *, const char *,
                   int, int, int, int *, int);
extern void php_pcre_free_substring(const char *);
extern void php_pcre_free_substring_list(const char **);
extern int php_pcre_fullinfo(const pcre *, const pcre_extra *, int,
                  void *);
extern int php_pcre_get_named_substring(const pcre *, const char *,
                  int *, int, const char *, const char **);
extern int php_pcre_get_stringnumber(const pcre *, const char *);
extern int php_pcre_get_stringtable_entries(const pcre *, const char *,
                  char **, char **);
extern int php_pcre_get_substring(const char *, int *, int, int,
                  const char **);
extern int php_pcre_get_substring_list(const char *, int *, int,
                  const char ***);
extern int php_pcre_info(const pcre *, int *, int *);
extern const unsigned char *php_pcre_maketables(void);
extern int php_pcre_refcount(pcre *, int);
extern pcre_extra *php_pcre_study(const pcre *, int, const char **);
extern const char *php_pcre_version(void);
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/pcre/php_pcre.h" 2





# 1 "/usr/include/locale.h" 1 3 4
# 29 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/bits/locale.h" 1 3 4
# 27 "/usr/include/bits/locale.h" 3 4
enum
{
  __LC_CTYPE = 0,
  __LC_NUMERIC = 1,
  __LC_TIME = 2,
  __LC_COLLATE = 3,
  __LC_MONETARY = 4,
  __LC_MESSAGES = 5,
  __LC_ALL = 6,
  __LC_PAPER = 7,
  __LC_NAME = 8,
  __LC_ADDRESS = 9,
  __LC_TELEPHONE = 10,
  __LC_MEASUREMENT = 11,
  __LC_IDENTIFICATION = 12
};
# 31 "/usr/include/locale.h" 2 3 4


# 51 "/usr/include/locale.h" 3 4



struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 121 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, __const char *__locale) __attribute__ ((__nothrow__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__));


# 152 "/usr/include/locale.h" 3 4
extern __locale_t newlocale (int __category_mask, __const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__));
# 187 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__));








# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/pcre/php_pcre.h" 2


__attribute__ ((visibility("default"))) char *php_pcre_replace(char *regex, int regex_len, char *subject, int subject_len, zval *replace_val, int is_callable_replace, int *result_len, int limit, int *replace_count );
__attribute__ ((visibility("default"))) pcre* pcre_get_compiled_regex(char *regex, pcre_extra **extra, int *options );
__attribute__ ((visibility("default"))) pcre* pcre_get_compiled_regex_ex(char *regex, pcre_extra **extra, int *preg_options, int *coptions );

extern zend_module_entry pcre_module_entry;


typedef struct {
 pcre *re;
 pcre_extra *extra;
 int preg_options;

 char *locale;
 unsigned const char *tables;

 int compile_options;
 int refcount;
} pcre_cache_entry;

__attribute__ ((visibility("default"))) pcre_cache_entry* pcre_get_compiled_regex_cache(char *regex, int regex_len );

__attribute__ ((visibility("default"))) void php_pcre_match_impl( pcre_cache_entry *pce, char *subject, int subject_len, zval *return_value,
 zval *subpats, int global, int use_flags, long flags, long start_offset );

__attribute__ ((visibility("default"))) char *php_pcre_replace_impl(pcre_cache_entry *pce, char *subject, int subject_len, zval *return_value,
 int is_callable_replace, int *result_len, int limit, int *replace_count );

__attribute__ ((visibility("default"))) void php_pcre_split_impl( pcre_cache_entry *pce, char *subject, int subject_len, zval *return_value,
 long limit_val, long flags );

__attribute__ ((visibility("default"))) void php_pcre_grep_impl( pcre_cache_entry *pce, zval *input, zval *return_value,
 long flags );

typedef struct _zend_pcre_globals {
 HashTable pcre_cache;
 long backtrack_limit;
 long recursion_limit;
 int error_code;
} zend_pcre_globals;
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_iterators.h" 2
# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_iterators.h"
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveIteratorIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveTreeIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_FilterIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveFilterIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_ParentIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_SeekableIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_LimitIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_CachingIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveCachingIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_OuterIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_IteratorIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_NoRewindIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_InfiniteIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_EmptyIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_AppendIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RegexIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveRegexIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_Countable;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_CallbackFilterIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveCallbackFilterIterator;

int zm_startup_spl_iterators(int type, int module_number );

void zif_iterator_to_array(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iterator_count(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_iterator_apply(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

typedef enum {
 DIT_Default = 0,
 DIT_FilterIterator = DIT_Default,
 DIT_RecursiveFilterIterator = DIT_Default,
 DIT_ParentIterator = DIT_Default,
 DIT_LimitIterator,
 DIT_CachingIterator,
 DIT_RecursiveCachingIterator,
 DIT_IteratorIterator,
 DIT_NoRewindIterator,
 DIT_InfiniteIterator,
 DIT_AppendIterator,

 DIT_RegexIterator,
 DIT_RecursiveRegexIterator,

 DIT_CallbackFilterIterator,
 DIT_RecursiveCallbackFilterIterator,
 DIT_Unknown = ~0
} dual_it_type;

typedef enum {
 RIT_Default = 0,
 RIT_RecursiveIteratorIterator = RIT_Default,
 RIT_RecursiveTreeIterator,
 RIT_Unknow = ~0
} recursive_it_it_type;

enum {

 CIT_CALL_TOSTRING = 0x00000001,
 CIT_TOSTRING_USE_KEY = 0x00000002,
 CIT_TOSTRING_USE_CURRENT = 0x00000004,
 CIT_TOSTRING_USE_INNER = 0x00000008,
 CIT_CATCH_GET_CHILD = 0x00000010,
 CIT_FULL_CACHE = 0x00000100,
 CIT_PUBLIC = 0x0000FFFF,

 CIT_VALID = 0x00010000,
 CIT_HAS_CHILDREN = 0x00020000
};

enum {

 REGIT_USE_KEY = 0x00000001,
 REGIT_INVERTED = 0x00000002
};

typedef enum {
 REGIT_MODE_MATCH,
 REGIT_MODE_GET_MATCH,
 REGIT_MODE_ALL_MATCHES,
 REGIT_MODE_SPLIT,
 REGIT_MODE_REPLACE,
 REGIT_MODE_MAX
} regex_mode;

typedef struct _spl_cbfilter_it_intern {
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
} _spl_cbfilter_it_intern;

typedef struct _spl_dual_it_object {
 zend_object std;
 struct {
  zval *zobject;
  zend_class_entry *ce;
  zend_object *object;
  zend_object_iterator *iterator;
 } inner;
 struct {
  zval *data;
  char *str_key;
  uint str_key_len;
  ulong int_key;
  int key_type;
  int pos;
 } current;
 dual_it_type dit_type;
 union {
  struct {
   long offset;
   long count;
  } limit;
  struct {
   long flags;
   zval *zstr;
   zval *zchildren;
   zval *zcache;
  } caching;
  struct {
   zval *zarrayit;
   zend_object_iterator *iterator;
  } append;

  struct {
   int use_flags;
   long flags;
   regex_mode mode;
   long preg_flags;
   pcre_cache_entry *pce;
   char *regex;
   uint regex_len;
  } regex;

  _spl_cbfilter_it_intern *cbfilter;
 } u;
} spl_dual_it_object;

typedef int (*spl_iterator_apply_func_t)(zend_object_iterator *iter, void *puser );

__attribute__ ((visibility("default"))) int spl_iterator_apply(zval *obj, spl_iterator_apply_func_t apply_func, void *puser );
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_array.h" 2

extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_ArrayObject;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_ArrayIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveArrayIterator;

int zm_startup_spl_array(int type, int module_number );

extern void spl_array_iterator_append(zval *object, zval *append_value );
extern void spl_array_iterator_key(zval *object, zval *return_value );
# 60 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_directory.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_directory.h"
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_SplFileInfo;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_DirectoryIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_FilesystemIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RecursiveDirectoryIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_GlobIterator;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_SplFileObject;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_SplTempFileObject;

int zm_startup_spl_directory(int type, int module_number );

typedef enum {
 SPL_FS_INFO,
 SPL_FS_DIR,
 SPL_FS_FILE
} SPL_FS_OBJ_TYPE;

typedef struct _spl_filesystem_object spl_filesystem_object;

typedef void (*spl_foreign_dtor_t)(spl_filesystem_object *object );
typedef void (*spl_foreign_clone_t)(spl_filesystem_object *src, spl_filesystem_object *dst );

__attribute__ ((visibility("default"))) char* spl_filesystem_object_get_path(spl_filesystem_object *intern, int *len );

typedef struct _spl_other_handler {
 spl_foreign_dtor_t dtor;
 spl_foreign_clone_t clone;
} spl_other_handler;


typedef struct {
 zend_object_iterator intern;
 zval *current;
 spl_filesystem_object *object;
} spl_filesystem_iterator;

struct _spl_filesystem_object {
 zend_object std;
 void *oth;
 spl_other_handler *oth_handler;
 char *_path;
 int _path_len;
 char *orig_path;
 char *file_name;
 int file_name_len;
 SPL_FS_OBJ_TYPE type;
 long flags;
 zend_class_entry *file_class;
 zend_class_entry *info_class;
 union {
  struct {
   php_stream *dirp;
   php_stream_dirent entry;
   char *sub_path;
   int sub_path_len;
   int index;
   int is_recursive;
   zend_function *func_rewind;
   zend_function *func_next;
   zend_function *func_valid;
  } dir;
  struct {
   php_stream *stream;
   php_stream_context *context;
   zval *zcontext;
   char *open_mode;
   int open_mode_len;
   zval *current_zval;
   char *current_line;
   size_t current_line_len;
   size_t max_line_len;
   long current_line_num;
   zval zresource;
   zend_function *func_getCurr;
   char delimiter;
   char enclosure;
   char escape;
  } file;
 } u;
 spl_filesystem_iterator it;
};

static inline spl_filesystem_iterator* spl_filesystem_object_to_iterator(spl_filesystem_object *obj)
{
 return &obj->it;
}

static inline spl_filesystem_object* spl_filesystem_iterator_to_object(spl_filesystem_iterator *it)
{
 return (spl_filesystem_object*)((char*)it - ((long) (((char *) (&(((spl_filesystem_object*)((void *)0))->it))) - ((char *) ((void *)0)))));
}
# 61 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_engine.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_engine.h"
__attribute__ ((visibility("default"))) void spl_instantiate(zend_class_entry *pce, zval **object, int alloc );

__attribute__ ((visibility("default"))) long spl_offset_convert_to_long(zval *offset );


static inline int spl_instantiate_arg_ex1(zend_class_entry *pce, zval **retval, int alloc, zval *arg1 )
{
 spl_instantiate(pce, retval, alloc );

 zend_call_method(retval, pce, &pce->constructor, pce->constructor->common.function_name, strlen(pce->constructor->common.function_name), ((void *)0), 1, arg1, ((void *)0) );
 return 0;
}



static inline int spl_instantiate_arg_ex2(zend_class_entry *pce, zval **retval, int alloc, zval *arg1, zval *arg2 )
{
 spl_instantiate(pce, retval, alloc );

 zend_call_method(retval, pce, &pce->constructor, pce->constructor->common.function_name, strlen(pce->constructor->common.function_name), ((void *)0), 2, arg1, arg2 );
 return 0;
}
# 62 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_exceptions.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_exceptions.h"
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_LogicException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_BadFunctionCallException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_BadMethodCallException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_DomainException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_InvalidArgumentException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_LengthException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_OutOfRangeException;

extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RuntimeException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_OutOfBoundsException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_OverflowException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_RangeException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_UnderflowException;
extern __attribute__ ((visibility("default"))) zend_class_entry *spl_ce_UnexpectedValueException;

int zm_startup_spl_exceptions(int type, int module_number );
# 63 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/spl/spl_iterators.h" 1
# 64 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/php_phar.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/php_phar.h"
extern zend_module_entry phar_module_entry;
# 66 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2




# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/hash/php_hash.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/hash/php_hash.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/hash/php_hash_types.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/hash/php_hash_types.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/php_config.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/hash/php_hash_types.h" 2
# 45 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/hash/php_hash_types.h"
typedef unsigned long long php_hash_uint64;

typedef unsigned int php_hash_uint32;
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/hash/php_hash.h" 2







typedef void (*php_hash_init_func_t)(void *context);
typedef void (*php_hash_update_func_t)(void *context, const unsigned char *buf, unsigned int count);
typedef void (*php_hash_final_func_t)(unsigned char *digest, void *context);
typedef int (*php_hash_copy_func_t)(const void *ops, void *orig_context, void *dest_context);

typedef struct _php_hash_ops {
 php_hash_init_func_t hash_init;
 php_hash_update_func_t hash_update;
 php_hash_final_func_t hash_final;
 php_hash_copy_func_t hash_copy;

 int digest_size;
 int block_size;
 int context_size;
} php_hash_ops;

typedef struct _php_hash_data {
 const php_hash_ops *ops;
 void *context;

 long options;
 unsigned char *key;
} php_hash_data;

extern const php_hash_ops php_hash_md2_ops;
extern const php_hash_ops php_hash_md4_ops;
extern const php_hash_ops php_hash_md5_ops;
extern const php_hash_ops php_hash_sha1_ops;
extern const php_hash_ops php_hash_sha224_ops;
extern const php_hash_ops php_hash_sha256_ops;
extern const php_hash_ops php_hash_sha384_ops;
extern const php_hash_ops php_hash_sha512_ops;
extern const php_hash_ops php_hash_ripemd128_ops;
extern const php_hash_ops php_hash_ripemd160_ops;
extern const php_hash_ops php_hash_ripemd256_ops;
extern const php_hash_ops php_hash_ripemd320_ops;
extern const php_hash_ops php_hash_whirlpool_ops;
extern const php_hash_ops php_hash_3tiger128_ops;
extern const php_hash_ops php_hash_3tiger160_ops;
extern const php_hash_ops php_hash_3tiger192_ops;
extern const php_hash_ops php_hash_4tiger128_ops;
extern const php_hash_ops php_hash_4tiger160_ops;
extern const php_hash_ops php_hash_4tiger192_ops;
extern const php_hash_ops php_hash_snefru_ops;
extern const php_hash_ops php_hash_gost_ops;
extern const php_hash_ops php_hash_adler32_ops;
extern const php_hash_ops php_hash_crc32_ops;
extern const php_hash_ops php_hash_crc32b_ops;
extern const php_hash_ops php_hash_salsa10_ops;
extern const php_hash_ops php_hash_salsa20_ops;
extern const php_hash_ops php_hash_fnv132_ops;
extern const php_hash_ops php_hash_fnv164_ops;
extern const php_hash_ops php_hash_joaat_ops;



extern const php_hash_ops php_hash_3haval128_ops;
extern const php_hash_ops php_hash_3haval160_ops;
extern const php_hash_ops php_hash_3haval192_ops;
extern const php_hash_ops php_hash_3haval224_ops;
extern const php_hash_ops php_hash_3haval256_ops;

extern const php_hash_ops php_hash_4haval128_ops;
extern const php_hash_ops php_hash_4haval160_ops;
extern const php_hash_ops php_hash_4haval192_ops;
extern const php_hash_ops php_hash_4haval224_ops;
extern const php_hash_ops php_hash_4haval256_ops;

extern const php_hash_ops php_hash_5haval128_ops;
extern const php_hash_ops php_hash_5haval160_ops;
extern const php_hash_ops php_hash_5haval192_ops;
extern const php_hash_ops php_hash_5haval224_ops;
extern const php_hash_ops php_hash_5haval256_ops;

extern zend_module_entry hash_module_entry;
# 122 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/hash/php_hash.h"
void zif_hash(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_hmac(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_hmac_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_init(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_update(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_update_stream(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_update_file(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_final(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
void zif_hash_algos(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

__attribute__ ((visibility("default"))) const php_hash_ops *php_hash_fetch_ops(const char *algo, int algo_len);
__attribute__ ((visibility("default"))) void php_hash_register_algo(const char *algo, const php_hash_ops *ops);
__attribute__ ((visibility("default"))) int php_hash_copy(const void *ops, void *orig_context, void *dest_context);

static inline void php_hash_bin2hex(char *out, const unsigned char *in, int in_len)
{
 static const char hexits[17] = "0123456789abcdef";
 int i;

 for(i = 0; i < in_len; i++) {
  out[i * 2] = hexits[in[i] >> 4];
  out[(i * 2) + 1] = hexits[in[i] & 0x0F];
 }
}
# 71 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/hash/php_hash_sha.h" 1
# 54 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/hash/php_hash_sha.h"
typedef struct {
 php_hash_uint32 state[8];
 php_hash_uint32 count[2];
 unsigned char buffer[64];
} PHP_SHA224_CTX;

__attribute__ ((visibility("default"))) void PHP_SHA224Init(PHP_SHA224_CTX *);
__attribute__ ((visibility("default"))) void PHP_SHA224Update(PHP_SHA224_CTX *, const unsigned char *, unsigned int);
__attribute__ ((visibility("default"))) void PHP_SHA224Final(unsigned char[28], PHP_SHA224_CTX *);


typedef struct {
 php_hash_uint32 state[8];
 php_hash_uint32 count[2];
 unsigned char buffer[64];
} PHP_SHA256_CTX;

__attribute__ ((visibility("default"))) void PHP_SHA256Init(PHP_SHA256_CTX *);
__attribute__ ((visibility("default"))) void PHP_SHA256Update(PHP_SHA256_CTX *, const unsigned char *, unsigned int);
__attribute__ ((visibility("default"))) void PHP_SHA256Final(unsigned char[32], PHP_SHA256_CTX *);


typedef struct {
 php_hash_uint64 state[8];
 php_hash_uint64 count[2];
 unsigned char buffer[128];
} PHP_SHA384_CTX;

__attribute__ ((visibility("default"))) void PHP_SHA384Init(PHP_SHA384_CTX *);
__attribute__ ((visibility("default"))) void PHP_SHA384Update(PHP_SHA384_CTX *, const unsigned char *, unsigned int);
__attribute__ ((visibility("default"))) void PHP_SHA384Final(unsigned char[48], PHP_SHA384_CTX *);


typedef struct {
 php_hash_uint64 state[8];
 php_hash_uint64 count[2];
 unsigned char buffer[128];
} PHP_SHA512_CTX;

__attribute__ ((visibility("default"))) void PHP_SHA512Init(PHP_SHA512_CTX *);
__attribute__ ((visibility("default"))) void PHP_SHA512Update(PHP_SHA512_CTX *, const unsigned char *, unsigned int);
__attribute__ ((visibility("default"))) void PHP_SHA512Final(unsigned char[64], PHP_SHA512_CTX *);
# 72 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2
# 149 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h"
typedef struct _phar_entry_fp phar_entry_fp;
typedef struct _phar_archive_data phar_archive_data;

typedef struct _zend_phar_globals {


 HashTable phar_persist_map;
 HashTable phar_fname_map;

 phar_entry_fp *cached_fp;
 HashTable phar_alias_map;
 int phar_SERVER_mung_list;
 int readonly;
 char* cache_list;
 int manifest_cached;
 int persist;
 int has_zlib;
 int has_bz2;
 zend_bool readonly_orig;
 zend_bool require_hash_orig;
 zend_bool intercepted;
 int request_init;
 int require_hash;
 int request_done;
 int request_ends;
 void (*orig_fopen)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_file_get_contents)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_file)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_link)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_dir)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_opendir)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_file_exists)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_fileperms)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_fileinode)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_filesize)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_fileowner)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_filegroup)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_fileatime)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_filemtime)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_filectime)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_filetype)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_writable)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_readable)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_is_executable)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_lstat)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_readfile)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
 void (*orig_stat)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

 char* cwd;
 int cwd_len;
 int cwd_init;
 char *openssl_privatekey;
 int openssl_privatekey_len;

 char* last_phar_name;
 int last_phar_name_len;
 char* last_alias;
 int last_alias_len;
 phar_archive_data* last_phar;
 HashTable mime_types;
} zend_phar_globals;

extern zend_phar_globals phar_globals;
# 229 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/pharzip.h" 1
# 22 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/pharzip.h"
typedef struct _phar_zip_file_header {
 char signature[4];
 char zipversion[2];
 char flags[2];
 char compressed[2];
 char timestamp[2];
 char datestamp[2];
 char crc32[4];
 char compsize[4];
 char uncompsize[4];
 char filename_len[2];
 char extra_len[2];


} phar_zip_file_header;


typedef struct _phar_zip_file_datadesc {
 char signature[4];
 char crc32[4];
 char compsize[4];
 char uncompsize[4];
} phar_zip_data_desc;


typedef struct _phar_zip_file_datadesc_zip64 {
 char crc32[4];
 char compsize[4];
 char compsize2[4];
 char uncompsize[4];
 char uncompsize2[4];
} phar_zip_data_desc_zip64;

typedef struct _phar_zip_archive_extra_data_record {
 char signature[4];
 char len[4];

} phar_zip_archive_extra_data_record;
# 135 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/pharzip.h"
typedef struct _phar_zip_extra_field_header {
 char tag[2];
 char size[2];
} phar_zip_extra_field_header;

typedef struct _phar_zip_unix3 {
 char tag[2];
 char size[2];
 char crc32[4];
 char perms[2];
 char symlinksize[4];
 char uid[2];
 char gid[2];

} phar_zip_unix3;

typedef struct _phar_zip_central_dir_file {
 char signature[4];
 char madeby[2];
 char zipversion[2];
 char flags[2];
 char compressed[2];
 char timestamp[2];
 char datestamp[2];
 char crc32[4];
 char compsize[4];
 char uncompsize[4];
 char filename_len[2];
 char extra_len[2];
 char comment_len[2];
 char disknumber[2];
 char internal_atts[2];
 char external_atts[4];
 char offset[4];




} phar_zip_central_dir_file;

typedef struct _phar_zip_dir_signature {
 char signature[4];
 char size[2];
} phar_zip_dir_signature;


typedef struct _phar_zip64_dir_end {
 char signature[4];

 char size1[4];

 char size2[4];
 char madeby[2];
 char extractneeded[2];
 char disknum[4];
 char cdir_num[4];

 char entries1[4];

 char entries2[4];
 char entriestotal1[4];

 char entriestotal2[4];
 char cdirsize1[4];
 char cdirsize2[4];
 char offset1[4];


 char offset2[4];

} phar_zip64_dir_end;


typedef struct _phar_zip64_dir_locator {
 char signature[4];

 char disknum[4];


 char diroffset1[4];

 char diroffset2[4];
 char totaldisks[4];
} phar_zip64_dir_locator;

typedef struct _phar_zip_dir_end {
 char signature[4];
 char disknumber[2];
 char centraldisk[2];

 char counthere[2];

 char count[2];

 char cdir_size[4];
 char cdir_offset[4];


 char comment_len[2];

} phar_zip_dir_end;
# 230 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h" 2


typedef union _phar_archive_object phar_archive_object;
typedef union _phar_entry_object phar_entry_object;





enum phar_fp_type {

 PHAR_FP,

 PHAR_UFP,

 PHAR_MOD,


 PHAR_TMP
};


typedef struct _phar_entry_info {

 php_uint32 uncompressed_filesize;
 php_uint32 timestamp;
 php_uint32 compressed_filesize;
 php_uint32 crc32;
 php_uint32 flags;


 php_uint32 old_flags;
 zval *metadata;
 int metadata_len;
 php_uint32 filename_len;
 char *filename;
 enum phar_fp_type fp_type;

 long offset_abs;

 long offset;

 long header_offset;
 php_stream *fp;
 php_stream *cfp;
 int fp_refcount;
 char *tmp;
 phar_archive_data *phar;
 smart_str metadata_str;
 char *link;
 char tar_type;

 uint manifest_pos;

 unsigned short inode;

 unsigned int is_crc_checked:1;
 unsigned int is_modified:1;
 unsigned int is_deleted:1;
 unsigned int is_dir:1;


 unsigned int is_mounted:1;

 unsigned int is_temp_dir:1;

 unsigned int is_tar:1;

 unsigned int is_zip:1;

 unsigned int is_persistent:1;
} phar_entry_info;


struct _phar_archive_data {
 char *fname;
 int fname_len;

 char *ext;
 int ext_len;
 char *alias;
 int alias_len;
 char version[12];
 size_t internal_file_start;
 size_t halt_offset;
 HashTable manifest;

 HashTable virtual_dirs;

 HashTable mounted_dirs;
 php_uint32 flags;
 php_uint32 min_timestamp;
 php_uint32 max_timestamp;
 php_stream *fp;

 php_stream *ufp;
 int refcount;
 php_uint32 sig_flags;
 int sig_len;
 char *signature;
 zval *metadata;
 int metadata_len;
 uint phar_pos;

 unsigned int is_temporary_alias:1;
 unsigned int is_modified:1;
 unsigned int is_writeable:1;
 unsigned int is_brandnew:1;

 unsigned int donotflush:1;

 unsigned int is_zip:1;

 unsigned int is_tar:1;

 unsigned int is_data:1;

 unsigned int is_persistent:1;
};

typedef struct _phar_entry_fp_info {
 enum phar_fp_type fp_type;

 long offset;
} phar_entry_fp_info;

struct _phar_entry_fp {
 php_stream *fp;
 php_stream *ufp;
 phar_entry_fp_info *manifest;
};

static inline php_stream *phar_get_entrypfp(phar_entry_info *entry )
{
 if (!entry->is_persistent) {
  return entry->phar->fp;
 }
 return (&phar_globals)->cached_fp[entry->phar->phar_pos].fp;
}

static inline php_stream *phar_get_entrypufp(phar_entry_info *entry )
{
 if (!entry->is_persistent) {
  return entry->phar->ufp;
 }
 return (&phar_globals)->cached_fp[entry->phar->phar_pos].ufp;
}

static inline void phar_set_entrypfp(phar_entry_info *entry, php_stream *fp )
{
 if (!entry->phar->is_persistent) {
  entry->phar->fp = fp;
  return;
 }

 (&phar_globals)->cached_fp[entry->phar->phar_pos].fp = fp;
}

static inline void phar_set_entrypufp(phar_entry_info *entry, php_stream *fp )
{
 if (!entry->phar->is_persistent) {
  entry->phar->ufp = fp;
  return;
 }

 (&phar_globals)->cached_fp[entry->phar->phar_pos].ufp = fp;
}

static inline php_stream *phar_get_pharfp(phar_archive_data *phar )
{
 if (!phar->is_persistent) {
  return phar->fp;
 }
 return (&phar_globals)->cached_fp[phar->phar_pos].fp;
}

static inline php_stream *phar_get_pharufp(phar_archive_data *phar )
{
 if (!phar->is_persistent) {
  return phar->ufp;
 }
 return (&phar_globals)->cached_fp[phar->phar_pos].ufp;
}

static inline void phar_set_pharfp(phar_archive_data *phar, php_stream *fp )
{
 if (!phar->is_persistent) {
  phar->fp = fp;
  return;
 }

 (&phar_globals)->cached_fp[phar->phar_pos].fp = fp;
}

static inline void phar_set_pharufp(phar_archive_data *phar, php_stream *fp )
{
 if (!phar->is_persistent) {
  phar->ufp = fp;
  return;
 }

 (&phar_globals)->cached_fp[phar->phar_pos].ufp = fp;
}

static inline void phar_set_fp_type(phar_entry_info *entry, enum phar_fp_type type, off_t offset )
{
 phar_entry_fp_info *data;

 if (!entry->is_persistent) {
  entry->fp_type = type;
  entry->offset = offset;
  return;
 }
 data = &((&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos]);
 data->fp_type = type;
 data->offset = offset;
}

static inline enum phar_fp_type phar_get_fp_type(phar_entry_info *entry )
{
 if (!entry->is_persistent) {
  return entry->fp_type;
 }
 return (&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos].fp_type;
}

static inline off_t phar_get_fp_offset(phar_entry_info *entry )
{
 if (!entry->is_persistent) {
  return entry->offset;
 }
 if ((&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos].fp_type == PHAR_FP) {
  if (!(&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos].offset) {
   (&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos].offset = entry->offset;
  }
 }
 return (&phar_globals)->cached_fp[entry->phar->phar_pos].manifest[entry->manifest_pos].offset;
}





typedef struct _phar_mime_type {
 char *mime;
 int len;

 char type;
} phar_mime_type;


typedef struct _phar_entry_data {
 phar_archive_data *phar;
 php_stream *fp;

 off_t position;

 off_t zero;
 unsigned int for_write:1;
 unsigned int is_zip:1;
 unsigned int is_tar:1;
 phar_entry_info *internal_file;
} phar_entry_data;



union _phar_archive_object {
 zend_object std;
 spl_filesystem_object spl;
 struct {
  zend_object std;
  phar_archive_data *archive;
 } arc;
};




union _phar_entry_object {
 zend_object std;
 spl_filesystem_object spl;
 struct {
  zend_object std;
  phar_entry_info *entry;
 } ent;
};
# 582 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h"
typedef char *phar_zstr;








# 610 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar_internal.h"
static inline int phar_validate_alias(const char *alias, int alias_len)
{
 return !(memchr(alias, '/', alias_len) || memchr(alias, '\\', alias_len) || memchr(alias, ':', alias_len) ||
  memchr(alias, ';', alias_len) || memchr(alias, '\n', alias_len) || memchr(alias, '\r', alias_len));
}


static inline void phar_set_inode(phar_entry_info *entry )
{
 char tmp[4096];
 int tmp_len;

 tmp_len = entry->filename_len + entry->phar->fname_len;
 memcpy(tmp, entry->phar->fname, entry->phar->fname_len);
 memcpy(tmp + entry->phar->fname_len, entry->filename, entry->filename_len);
 entry->inode = (unsigned short)zend_get_hash_value(tmp, tmp_len);
}


void phar_request_initialize(void);

void phar_object_init(void);
void phar_destroy_phar_data(phar_archive_data *phar );

int phar_open_entry_file(phar_archive_data *phar, phar_entry_info *entry, char **error );
int phar_postprocess_file(phar_entry_data *idata, php_uint32 crc32, char **error, int process_zip );
int phar_open_from_filename(char *fname, int fname_len, char *alias, int alias_len, int options, phar_archive_data** pphar, char **error );
int phar_open_or_create_filename(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error );
int phar_create_or_parse_filename(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error );
int phar_open_executed_filename(char *alias, int alias_len, char **error );
int phar_free_alias(phar_archive_data *phar, char *alias, int alias_len );
int phar_get_archive(phar_archive_data **archive, char *fname, int fname_len, char *alias, int alias_len, char **error );
int phar_open_parsed_phar(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error );
int phar_verify_signature(php_stream *fp, size_t end_of_phar, php_uint32 sig_type, char *sig, int sig_len, char *fname, char **signature, int *signature_len, char **error );
int phar_create_signature(phar_archive_data *phar, php_stream *fp, char **signature, int *signature_length, char **error );


char *phar_create_default_stub(const char *index_php, const char *web_index, size_t *len, char **error );
char *phar_decompress_filter(phar_entry_info * entry, int return_unknown);
char *phar_compress_filter(phar_entry_info * entry, int return_unknown);

void phar_remove_virtual_dirs(phar_archive_data *phar, char *filename, int filename_len );
void phar_add_virtual_dirs(phar_archive_data *phar, char *filename, int filename_len );
int phar_mount_entry(phar_archive_data *phar, char *filename, int filename_len, char *path, int path_len );
char *phar_find_in_include_path(char *file, int file_len, phar_archive_data **pphar );
char *phar_fix_filepath(char *path, int *new_len, int use_cwd );
phar_entry_info * phar_open_jit(phar_archive_data *phar, phar_entry_info *entry, char **error );
int phar_parse_metadata(char **buffer, zval **metadata, int zip_metadata_len );
void destroy_phar_manifest_entry(void *pDest);
int phar_seek_efp(phar_entry_info *entry, off_t offset, int whence, off_t position, int follow_links );
php_stream *phar_get_efp(phar_entry_info *entry, int follow_links );
int phar_copy_entry_fp(phar_entry_info *source, phar_entry_info *dest, char **error );
int phar_open_entry_fp(phar_entry_info *entry, char **error, int follow_links );
phar_entry_info *phar_get_link_source(phar_entry_info *entry );
int phar_create_writeable_entry(phar_archive_data *phar, phar_entry_info *entry, char **error );
int phar_separate_entry_fp(phar_entry_info *entry, char **error );
int phar_open_archive_fp(phar_archive_data *phar );
int phar_copy_on_write(phar_archive_data **pphar );


int phar_is_tar(char *buf, char *fname);
int phar_parse_tarfile(php_stream* fp, char *fname, int fname_len, char *alias, int alias_len, phar_archive_data** pphar, int is_data, php_uint32 compression, char **error );
int phar_open_or_create_tar(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error );
int phar_tar_flush(phar_archive_data *phar, char *user_stub, long len, int defaultstub, char **error );


int phar_parse_zipfile(php_stream *fp, char *fname, int fname_len, char *alias, int alias_len, phar_archive_data** pphar, char **error );
int phar_open_or_create_zip(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error );
int phar_zip_flush(phar_archive_data *archive, char *user_stub, long len, int defaultstub, char **error );


static int phar_open_from_fp(php_stream* fp, char *fname, int fname_len, char *alias, int alias_len, int options, phar_archive_data** pphar, int is_data, char **error );
extern php_stream_wrapper php_stream_phar_wrapper;





int phar_archive_delref(phar_archive_data *phar );
int phar_entry_delref(phar_entry_data *idata );

phar_entry_info *phar_get_entry_info(phar_archive_data *phar, char *path, int path_len, char **error, int security );
phar_entry_info *phar_get_entry_info_dir(phar_archive_data *phar, char *path, int path_len, char dir, char **error, int security );
phar_entry_data *phar_get_or_create_entry_data(char *fname, int fname_len, char *path, int path_len, char *mode, char allow_dir, char **error, int security );
int phar_get_entry_data(phar_entry_data **ret, char *fname, int fname_len, char *path, int path_len, char *mode, char allow_dir, char **error, int security );
int phar_flush(phar_archive_data *archive, char *user_stub, long len, int convert, char **error );
int phar_detect_phar_fname_ext(const char *filename, int filename_len, const char **ext_str, int *ext_len, int executable, int for_create, int is_complete );
int phar_split_fname(char *filename, int filename_len, char **arch, int *arch_len, char **entry, int *entry_len, int executable, int for_create );

typedef enum {
 pcr_use_query,
 pcr_is_ok,
 pcr_err_double_slash,
 pcr_err_up_dir,
 pcr_err_curr_dir,
 pcr_err_back_slash,
 pcr_err_star,
 pcr_err_illegal_char,
 pcr_err_empty_entry
} phar_path_check_result;

phar_path_check_result phar_path_check(char **p, int *len, const char **error);


# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/main/SAPI.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/func_interceptors.h" 1
# 22 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/func_interceptors.h"

void phar_intercept_functions(void);
void phar_release_functions(void);
void phar_intercept_functions_init(void);
void phar_intercept_functions_shutdown(void);
void phar_save_orig_functions(void);
void phar_restore_orig_functions(void);

# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c" 2

static void destroy_phar_data(void *pDest);

zend_phar_globals phar_globals;

char *(*phar_save_resolve_path)(const char *filename, int filename_len );





static int phar_set_writeable_bit(void *pDest, void *argument )
{
 zend_bool keep = *(zend_bool *)argument;
 phar_archive_data *phar = *(phar_archive_data **)pDest;

 if (!phar->is_data) {
  phar->is_writeable = !keep;
 }

 return 0;
}



int phar_ini_modify_handler(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage )
{
 zend_bool old, ini;

 if (entry->name_length == 14) {
  old = (phar_globals.readonly_orig);
 } else {
  old = (phar_globals.require_hash_orig);
 }

 if (new_value_length == 2 && !strcasecmp("on", new_value)) {
  ini = (zend_bool) 1;
 }
 else if (new_value_length == 3 && !strcasecmp("yes", new_value)) {
  ini = (zend_bool) 1;
 }
 else if (new_value_length == 4 && !strcasecmp("true", new_value)) {
  ini = (zend_bool) 1;
 }
 else {
  ini = (zend_bool) atoi(new_value);
 }


 if (stage == (1<<0)) {
  if (entry->name_length == 14) {
   (phar_globals.readonly_orig) = ini;
  } else {
   (phar_globals.require_hash_orig) = ini;
  }
 } else if (old && !ini) {
  return -1;
 }

 if (entry->name_length == 14) {
  (phar_globals.readonly) = ini;
  if ((&phar_globals)->request_init && (&phar_globals)->phar_fname_map.arBuckets) {
   zend_hash_apply_with_argument(&((&phar_globals)->phar_fname_map), phar_set_writeable_bit, (void *)&ini );
  }
 } else {
  (phar_globals.require_hash) = ini;
 }

 return 0;
}



HashTable cached_phars;
HashTable cached_alias;

static void phar_split_cache_list(void)
{
 char *tmp;
 char *key, *lasts, *end;
 char ds[2];
 phar_archive_data *phar;
 uint i = 0;

 if (!(&phar_globals)->cache_list || !((&phar_globals)->cache_list[0])) {
  return;
 }

 ds[0] = ':';
 ds[1] = '\0';
 tmp = _estrdup(((&phar_globals)->cache_list) );


 (&phar_globals)->request_init = 1;
 if (_zend_hash_init((&(executor_globals.regular_list)), (0), (((void *)0)), (((void *)0)), (0) ) == 0) {
  (executor_globals.regular_list).nNextFreeElement=1;
 }

 (phar_globals.has_bz2) = zend_hash_exists(&module_registry, "bz2", sizeof("bz2"));
 (phar_globals.has_zlib) = zend_hash_exists(&module_registry, "zlib", sizeof("zlib"));

 _zend_hash_init((&cached_phars), (sizeof(phar_archive_data*)), (zend_get_hash_value), (destroy_phar_data), (1) );
 _zend_hash_init((&cached_alias), (sizeof(phar_archive_data*)), (zend_get_hash_value), (((void *)0)), (1) );

 _zend_hash_init((&((&phar_globals)->phar_fname_map)), (sizeof(phar_archive_data*)), (zend_get_hash_value), (destroy_phar_data), (1) );
 _zend_hash_init((&((&phar_globals)->phar_alias_map)), (sizeof(phar_archive_data*)), (zend_get_hash_value), (((void *)0)), (1) );
 (&phar_globals)->manifest_cached = 1;
 (&phar_globals)->persist = 1;

 for (key = (__extension__ (__builtin_constant_p (ds) && ((size_t)(const void *)((ds) + 1) - (size_t)(const void *)(ds) == 1) && ((__const char *) (ds))[0] != '\0' && ((__const char *) (ds))[1] == '\0' ? __strtok_r_1c (tmp, ((__const char *) (ds))[0], &lasts) : __strtok_r (tmp, ds, &lasts)));
   key;
   key = (__extension__ (__builtin_constant_p (ds) && ((size_t)(const void *)((ds) + 1) - (size_t)(const void *)(ds) == 1) && ((__const char *) (ds))[0] != '\0' && ((__const char *) (ds))[1] == '\0' ? __strtok_r_1c (((void *)0), ((__const char *) (ds))[0], &lasts) : __strtok_r (((void *)0), ds, &lasts)))) {
  end = (__extension__ (__builtin_constant_p (':') && !__builtin_constant_p (key) && (':') == '\0' ? (char *) __rawmemchr (key, ':') : __builtin_strchr (key, ':')));

  if (end) {
   if (0 == phar_open_from_filename(key, end - key, ((void *)0), 0, 0, &phar, ((void *)0) )) {
finish_up:
    phar->phar_pos = i++;
    _php_stream_free((phar->fp), (1 | 2) );
    phar->fp = ((void *)0);
   } else {
finish_error:
    (&phar_globals)->persist = 0;
    (&phar_globals)->manifest_cached = 0;
    _efree((tmp) );
    zend_hash_destroy(&((phar_globals.phar_fname_map)));
    (&phar_globals)->phar_fname_map.arBuckets = 0;
    zend_hash_destroy(&((phar_globals.phar_alias_map)));
    (&phar_globals)->phar_alias_map.arBuckets = 0;
    zend_hash_destroy(&cached_phars);
    zend_hash_destroy(&cached_alias);
    zend_hash_graceful_reverse_destroy(&(executor_globals.regular_list));
    memset(&(executor_globals.regular_list), 0, sizeof(HashTable));

    (&phar_globals)->request_init = 0;
    return;
   }
  } else {
   if (0 == phar_open_from_filename(key, strlen(key), ((void *)0), 0, 0, &phar, ((void *)0) )) {
    goto finish_up;
   } else {
    goto finish_error;
   }
  }
 }

 (&phar_globals)->persist = 0;
 (&phar_globals)->request_init = 0;

 zend_hash_destroy(&cached_phars);
 zend_hash_destroy(&cached_alias);
 cached_phars = (&phar_globals)->phar_fname_map;
 cached_alias = (&phar_globals)->phar_alias_map;
 (&phar_globals)->phar_fname_map.arBuckets = 0;
 (&phar_globals)->phar_alias_map.arBuckets = 0;
 zend_hash_graceful_reverse_destroy(&(executor_globals.regular_list));
 memset(&(executor_globals.regular_list), 0, sizeof(HashTable));
 _efree((tmp) );
}


int phar_ini_cache_list(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage )
{
 (phar_globals.cache_list) = new_value;

 if (stage == (1<<0)) {
  phar_split_cache_list();
 }

 return 0;
}


static const zend_ini_entry ini_entries[] = {
 { 0, ((1<<0)|(1<<1)|(1<<2)), "phar.readonly", sizeof("phar.readonly"), phar_ini_modify_handler, (void *) ((long) (((char *) (&(((zend_phar_globals*)((void *)0))->readonly))) - ((char *) ((void *)0)))), (void *) &phar_globals, ((void *)0), "1", sizeof("1")-1, ((void *)0), 0, 0, 0, zend_ini_boolean_displayer_cb },
 { 0, ((1<<0)|(1<<1)|(1<<2)), "phar.require_hash", sizeof("phar.require_hash"), phar_ini_modify_handler, (void *) ((long) (((char *) (&(((zend_phar_globals*)((void *)0))->require_hash))) - ((char *) ((void *)0)))), (void *) &phar_globals, ((void *)0), "1", sizeof("1")-1, ((void *)0), 0, 0, 0, zend_ini_boolean_displayer_cb },
 { 0, (1<<2), "phar.cache_list", sizeof("phar.cache_list"), phar_ini_cache_list, (void *) ((long) (((char *) (&(((zend_phar_globals*)((void *)0))->cache_list))) - ((char *) ((void *)0)))), (void *) &phar_globals, ((void *)0), "", sizeof("")-1, ((void *)0), 0, 0, 0, ((void *)0) },
{ 0, 0, ((void *)0), 0, ((void *)0), ((void *)0), ((void *)0), ((void *)0), ((void *)0), 0, ((void *)0), 0, 0, 0, ((void *)0) } };





void phar_destroy_phar_data(phar_archive_data *phar )
{
 if (phar->alias && phar->alias != phar->fname) {
  ((phar->is_persistent)?free(phar->alias):_efree((phar->alias) ));
  phar->alias = ((void *)0);
 }

 if (phar->fname) {
  ((phar->is_persistent)?free(phar->fname):_efree((phar->fname) ));
  phar->fname = ((void *)0);
 }

 if (phar->signature) {
  ((phar->is_persistent)?free(phar->signature):_efree((phar->signature) ));
  phar->signature = ((void *)0);
 }

 if (phar->manifest.arBuckets) {
  zend_hash_destroy(&phar->manifest);
  phar->manifest.arBuckets = ((void *)0);
 }

 if (phar->mounted_dirs.arBuckets) {
  zend_hash_destroy(&phar->mounted_dirs);
  phar->mounted_dirs.arBuckets = ((void *)0);
 }

 if (phar->virtual_dirs.arBuckets) {
  zend_hash_destroy(&phar->virtual_dirs);
  phar->virtual_dirs.arBuckets = ((void *)0);
 }

 if (phar->metadata) {
  if (phar->is_persistent) {
   if (phar->metadata_len) {

    free(phar->metadata);
   } else {
    _zval_internal_ptr_dtor((&phar->metadata) );
   }
  } else {
   _zval_ptr_dtor((&phar->metadata) );
  }
  phar->metadata_len = 0;
  phar->metadata = 0;
 }

 if (phar->fp) {
  _php_stream_free((phar->fp), (1 | 2) );
  phar->fp = 0;
 }

 if (phar->ufp) {
  _php_stream_free((phar->ufp), (1 | 2) );
  phar->ufp = 0;
 }

 ((phar->is_persistent)?free(phar):_efree((phar) ));
}





int phar_archive_delref(phar_archive_data *phar )
{
 if (phar->is_persistent) {
  return 0;
 }

 if (--phar->refcount < 0) {
  if ((&phar_globals)->request_done
  || zend_hash_del_key_or_index(&((&phar_globals)->phar_fname_map), phar->fname, phar->fname_len, 0, 0) != 0) {
   phar_destroy_phar_data(phar );
  }
  return 1;
 } else if (!phar->refcount) {

  (phar_globals.last_phar) = ((void *)0);
  (phar_globals.last_phar_name) = (phar_globals.last_alias) = ((void *)0);

  if (phar->fp && !(phar->flags & 0x00F00000)) {




   _php_stream_free((phar->fp), (1 | 2) );
   phar->fp = ((void *)0);
  }

  if (!zend_hash_num_elements(&phar->manifest)) {


   if (zend_hash_del_key_or_index(&((&phar_globals)->phar_fname_map), phar->fname, phar->fname_len, 0, 0) != 0) {
    phar_destroy_phar_data(phar );
   }
   return 1;
  }
 }
 return 0;
}





static void destroy_phar_data_only(void *pDest)
{
 phar_archive_data *phar_data = *(phar_archive_data **) pDest;
 ;

 if ((executor_globals.exception) || --phar_data->refcount < 0) {
  phar_destroy_phar_data(phar_data );
 }
}





static int phar_unalias_apply(void *pDest, void *argument )
{
 return *(void**)pDest == argument ? 1<<0 : 0;
}





static int phar_tmpclose_apply(void *pDest )
{
 phar_entry_info *entry = (phar_entry_info *) pDest;

 if (entry->fp_type != PHAR_TMP) {
  return 0;
 }

 if (entry->fp && !entry->fp_refcount) {
  _php_stream_free((entry->fp), (1 | 2) );
  entry->fp = ((void *)0);
 }

 return 0;
}





static void destroy_phar_data(void *pDest)
{
 phar_archive_data *phar_data = *(phar_archive_data **) pDest;
 ;

 if ((&phar_globals)->request_ends) {


  zend_hash_apply(&(phar_data->manifest), phar_tmpclose_apply );
  destroy_phar_data_only(pDest);
  return;
 }

 zend_hash_apply_with_argument(&((&phar_globals)->phar_alias_map), phar_unalias_apply, phar_data );

 if (--phar_data->refcount < 0) {
  phar_destroy_phar_data(phar_data );
 }
}





void destroy_phar_manifest_entry(void *pDest)
{
 phar_entry_info *entry = (phar_entry_info *)pDest;
 ;

 if (entry->cfp) {
  _php_stream_free((entry->cfp), (1 | 2) );
  entry->cfp = 0;
 }

 if (entry->fp) {
  _php_stream_free((entry->fp), (1 | 2) );
  entry->fp = 0;
 }

 if (entry->metadata) {
  if (entry->is_persistent) {
   if (entry->metadata_len) {

    free(entry->metadata);
   } else {
    _zval_internal_ptr_dtor((&entry->metadata) );
   }
  } else {
   _zval_ptr_dtor((&entry->metadata) );
  }
  entry->metadata_len = 0;
  entry->metadata = 0;
 }

 if (entry->metadata_str.c) {
  do { smart_str *__s = (smart_str *) ((&entry->metadata_str)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void *)0); } __s->a = __s->len = 0; } while (0);
  entry->metadata_str.c = 0;
 }

 ((entry->is_persistent)?free(entry->filename):_efree((entry->filename) ));

 if (entry->link) {
  ((entry->is_persistent)?free(entry->link):_efree((entry->link) ));
  entry->link = 0;
 }

 if (entry->tmp) {
  ((entry->is_persistent)?free(entry->tmp):_efree((entry->tmp) ));
  entry->tmp = 0;
 }
}


int phar_entry_delref(phar_entry_data *idata )
{
 int ret = 0;

 if (idata->internal_file && !idata->internal_file->is_persistent) {
  if (--idata->internal_file->fp_refcount < 0) {
   idata->internal_file->fp_refcount = 0;
  }

  if (idata->fp && idata->fp != idata->phar->fp && idata->fp != idata->phar->ufp && idata->fp != idata->internal_file->fp) {
   _php_stream_free((idata->fp), (1 | 2) );
  }

  if (idata->internal_file->is_temp_dir) {
   destroy_phar_manifest_entry((void *)idata->internal_file);
   _efree((idata->internal_file) );
  }
 }

 phar_archive_delref(idata->phar );
 _efree((idata) );
 return ret;
}





void phar_entry_remove(phar_entry_data *idata, char **error )
{
 phar_archive_data *phar;

 phar = idata->phar;

 if (idata->internal_file->fp_refcount < 2) {
  if (idata->fp && idata->fp != idata->phar->fp && idata->fp != idata->phar->ufp && idata->fp != idata->internal_file->fp) {
   _php_stream_free((idata->fp), (1 | 2) );
  }
  zend_hash_del_key_or_index(&idata->phar->manifest, idata->internal_file->filename, idata->internal_file->filename_len, 0, 0);
  idata->phar->refcount--;
  _efree((idata) );
 } else {
  idata->internal_file->is_deleted = 1;
  phar_entry_delref(idata );
 }

 if (!phar->donotflush) {
  phar_flush(phar, 0, 0, 0, error );
 }
}
# 531 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
int phar_open_parsed_phar(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error )
{
 phar_archive_data *phar;




 if (error) {
  *error = ((void *)0);
 }
# 552 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
 if (0 == phar_get_archive(&phar, fname, fname_len, alias, alias_len, error )
  && ((alias && fname_len == phar->fname_len
  && !(__extension__ (__builtin_constant_p (fname_len) && ((__builtin_constant_p (fname) && strlen (fname) < ((size_t) (fname_len))) || (__builtin_constant_p (phar->fname) && strlen (phar->fname) < ((size_t) (fname_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (fname) && __builtin_constant_p (phar->fname) && (__s1_len = strlen (fname), __s2_len = strlen (phar->fname), (!((size_t)(const void *)((fname) + 1) - (size_t)(const void *)(fname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((phar->fname) + 1) - (size_t)(const void *)(phar->fname) == 1) || __s2_len >= 4)) ? __builtin_strcmp (fname, phar->fname) : (__builtin_constant_p (fname) && ((size_t)(const void *)((fname) + 1) - (size_t)(const void *)(fname) == 1) && (__s1_len = strlen (fname), __s1_len < 4) ? (__builtin_constant_p (phar->fname) && ((size_t)(const void *)((phar->fname) + 1) - (size_t)(const void *)(phar->fname) == 1) ? __builtin_strcmp (fname, phar->fname) : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) (phar->fname); register int __result = (((__const unsigned char *) (__const char *) (fname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (fname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (fname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (fname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (phar->fname) && ((size_t)(const void *)((phar->fname) + 1) - (size_t)(const void *)(phar->fname) == 1) && (__s2_len = strlen (phar->fname), __s2_len < 4) ? (__builtin_constant_p (fname) && ((size_t)(const void *)((fname) + 1) - (size_t)(const void *)(fname) == 1) ? __builtin_strcmp (fname, phar->fname) : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (fname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) (phar->fname))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) (phar->fname))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) (phar->fname))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) (phar->fname))[3]); } } __result; }))) : __builtin_strcmp (fname, phar->fname)))); }) : strncmp (fname, phar->fname, fname_len)))) || !alias)
 ) {
  phar_entry_info *stub;







  if (!is_data) {

   if (!phar->halt_offset && !phar->is_brandnew && (phar->is_tar || phar->is_zip)) {
    if ((phar_globals.readonly) && -1 == zend_hash_find(&(phar->manifest), ".phar/stub.php", sizeof(".phar/stub.php")-1, (void **)&stub)) {
     if (error) {
      spprintf(error, 0, "'%s' is not a phar archive. Use PharData::__construct() for a standard zip or tar archive", fname);
     }
     return -1;
    }
   }
  }

  if (pphar) {
   *pphar = phar;
  }

  return 0;
 } else {



  if (pphar) {
   *pphar = ((void *)0);
  }

  if (phar && error && !(options & 0x00000008)) {
   _efree((error) );
  }

  return -1;
 }
}
# 606 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
int phar_parse_metadata(char **buffer, zval **metadata, int zip_metadata_len )
{
 const unsigned char *p;
 php_uint32 buf_len;
 php_unserialize_data_t var_hash;

 if (!zip_metadata_len) {
  memcpy(&buf_len, *buffer, sizeof(buf_len)); *buffer += 4;
 } else {
  buf_len = zip_metadata_len;
 }

 if (buf_len) {
  do { (*metadata) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(*metadata))->u.buffered = ((void *)0); } while (0);
  **metadata = zval_used_for_init;;
  p = (const unsigned char*) *buffer;
  do { if ((basic_globals.serialize_lock) || !(basic_globals.unserialize).level) { (var_hash) = _ecalloc((1), (sizeof(struct php_unserialize_data)) ); if (!(basic_globals.serialize_lock)) { (basic_globals.unserialize).var_hash = (var_hash); (basic_globals.unserialize).level = 1; } } else { (var_hash) = (basic_globals.unserialize).var_hash; ++(basic_globals.unserialize).level; } } while (0);

  if (!php_var_unserialize(metadata, &p, p + buf_len, &var_hash )) {
   do { if ((basic_globals.serialize_lock) || !(basic_globals.unserialize).level) { var_destroy(&(var_hash)); _efree((var_hash) ); } else { if (!--(basic_globals.unserialize).level) { var_destroy(&(var_hash)); _efree(((var_hash)) ); (basic_globals.unserialize).var_hash = ((void *)0); } } } while (0);
   _zval_ptr_dtor((metadata) );
   *metadata = ((void *)0);
   return -1;
  }

  do { if ((basic_globals.serialize_lock) || !(basic_globals.unserialize).level) { var_destroy(&(var_hash)); _efree((var_hash) ); } else { if (!--(basic_globals.unserialize).level) { var_destroy(&(var_hash)); _efree(((var_hash)) ); (basic_globals.unserialize).var_hash = ((void *)0); } } } while (0);

  if ((phar_globals.persist)) {

   _zval_ptr_dtor((metadata) );
   *metadata = (zval *) ((1)?__zend_malloc(buf_len):_emalloc((buf_len) ));
   memcpy(*metadata, *buffer, buf_len);
   *buffer += buf_len;
   return 0;
  }
 } else {
  *metadata = ((void *)0);
 }

 if (!zip_metadata_len) {
  *buffer += buf_len;
 }

 return 0;
}
# 662 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
static int phar_parse_pharfile(php_stream *fp, char *fname, int fname_len, char *alias, int alias_len, long halt_offset, phar_archive_data** pphar, php_uint32 compression, char **error )
{
 char b32[4], *buffer, *endbuffer, *savebuf;
 phar_archive_data *mydata = ((void *)0);
 phar_entry_info entry;
 php_uint32 manifest_len, manifest_count, manifest_flags, manifest_index, tmp_len, sig_flags;
 unsigned short manifest_ver;
 long offset;
 int sig_len, register_alias = 0, temp_alias = 0;
 char *signature = ((void *)0);

 if (pphar) {
  *pphar = ((void *)0);
 }

 if (error) {
  *error = ((void *)0);
 }


 if (-1 == _php_stream_seek((fp), (halt_offset), (0) )) {
  if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "cannot seek to __HALT_COMPILER(); location in phar \"%s\"", fname); } return -1;
 }

 buffer = b32;

 if (3 != _php_stream_read((fp), (buffer), (3) )) {
  if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (truncated manifest at stub end)", fname); } return -1;
 }

 if ((*buffer == ' ' || *buffer == '\n') && *(buffer + 1) == '?' && *(buffer + 2) == '>') {
  int nextchar;
  halt_offset += 3;
  if ((-1) == (nextchar = _php_stream_getc((fp) ))) {
   if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (truncated manifest at stub end)", fname); } return -1;
  }

  if ((char) nextchar == '\r') {

   if ((-1) == (nextchar = _php_stream_getc((fp) )) || (char)nextchar != '\n') {
    if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (truncated manifest at stub end)", fname); } return -1;
   }
   ++halt_offset;
  }

  if ((char) nextchar == '\n') {
   ++halt_offset;
  }
 }


 if (-1 == _php_stream_seek((fp), (halt_offset), (0) )) {
  if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "cannot seek to __HALT_COMPILER(); location in phar \"%s\"", fname); } return -1;
 }


 buffer = b32;

 if (4 != _php_stream_read((fp), (buffer), (4) )) {
  if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (truncated manifest at manifest length)", fname); } return -1;
 }

 memcpy(&manifest_len, buffer, sizeof(manifest_len)); buffer += 4;

 if (manifest_len > 1048576 * 100) {

  if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "manifest cannot be larger than 100 MB in phar \"%s\"", fname); } return -1;
 }

 buffer = (char *)_emalloc((manifest_len) );
 savebuf = buffer;
 endbuffer = buffer + manifest_len;

 if (manifest_len < 10 || manifest_len != _php_stream_read((fp), (buffer), (manifest_len) )) {
  _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (truncated manifest header)", fname); } return -1;
 }


 memcpy(&manifest_count, buffer, sizeof(manifest_count)); buffer += 4;

 if (manifest_count == 0) {
  _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "in phar \"%s\", manifest claims to have zero entries.  Phars must have at least 1 entry", fname); } return -1;;
 }


 manifest_ver = (((unsigned char)buffer[0]) << 8)
     + ((unsigned char)buffer[1]);
 buffer += 2;

 if ((manifest_ver & 0xFFF0) < 0x1000) {
  _efree((savebuf) );
  _php_stream_free((fp), (1 | 2) );
  if (error) {
   spprintf(error, 0, "phar \"%s\" is API version %1.u.%1.u.%1.u, and cannot be processed", fname, manifest_ver >> 12, (manifest_ver >> 8) & 0xF, (manifest_ver >> 4) & 0x0F);
  }
  return -1;
 }

 memcpy(&manifest_flags, buffer, sizeof(manifest_flags)); buffer += 4;

 manifest_flags &= ~0x0000F000;
 manifest_flags &= ~0x00F00000;

 manifest_flags |= compression;



 if (manifest_flags & 0x00010000) {
  char sig_buf[8], *sig_ptr = sig_buf;
  off_t read_len;
  size_t end_of_phar;

  if (-1 == _php_stream_seek((fp), (-8), (2) )
  || (read_len = _php_stream_tell((fp) )) < 20
  || 8 != _php_stream_read((fp), (sig_buf), (8) )
  || memcmp(sig_buf+4, "GBMB", 4)) {
   _efree((savebuf) );
   _php_stream_free((fp), (1 | 2) );
   if (error) {
    spprintf(error, 0, "phar \"%s\" has a broken signature", fname);
   }
   return -1;
  }

  memcpy(&sig_flags, sig_ptr, sizeof(sig_flags)); sig_ptr += 4;

  switch(sig_flags) {
   case 0x0010: {
    php_uint32 signature_len;
    char *sig;
    off_t whence;


    if (-1 == _php_stream_seek((fp), (-12), (1) )
    || 4 != _php_stream_read((fp), (sig_buf), (4) )) {
     _efree((savebuf) );
     _php_stream_free((fp), (1 | 2) );
     if (error) {
      spprintf(error, 0, "phar \"%s\" openssl signature length could not be read", fname);
     }
     return -1;
    }

    sig_ptr = sig_buf;
    memcpy(&signature_len, sig_ptr, sizeof(signature_len)); sig_ptr += 4;
    sig = (char *) _emalloc((signature_len) );
    whence = signature_len + 4;
    whence = -whence;

    if (-1 == _php_stream_seek((fp), (whence), (1) )
    || !(end_of_phar = _php_stream_tell((fp) ))
    || signature_len != _php_stream_read((fp), (sig), (signature_len) )) {
     _efree((savebuf) );
     _efree((sig) );
     _php_stream_free((fp), (1 | 2) );
     if (error) {
      spprintf(error, 0, "phar \"%s\" openssl signature could not be read", fname);
     }
     return -1;
    }

    if (-1 == phar_verify_signature(fp, end_of_phar, 0x0010, sig, signature_len, fname, &signature, &sig_len, error )) {
     _efree((savebuf) );
     _efree((sig) );
     _php_stream_free((fp), (1 | 2) );
     if (error) {
      char *save = *error;
      spprintf(error, 0, "phar \"%s\" openssl signature could not be verified: %s", fname, *error);
      _efree((save) );
     }
     return -1;
    }
    _efree((sig) );
   }
   break;

   case 0x0004: {
    unsigned char digest[64];

    _php_stream_seek((fp), (-(8 + 64)), (2) );
    read_len = _php_stream_tell((fp) );

    if (_php_stream_read((fp), ((char*)digest), (sizeof(digest)) ) != sizeof(digest)) {
     _efree((savebuf) );
     _php_stream_free((fp), (1 | 2) );
     if (error) {
      spprintf(error, 0, "phar \"%s\" has a broken signature", fname);
     }
     return -1;
    }

    if (-1 == phar_verify_signature(fp, read_len, 0x0004, (char *)digest, 64, fname, &signature, &sig_len, error )) {
     _efree((savebuf) );
     _php_stream_free((fp), (1 | 2) );
     if (error) {
      char *save = *error;
      spprintf(error, 0, "phar \"%s\" SHA512 signature could not be verified: %s", fname, *error);
      _efree((save) );
     }
     return -1;
    }
    break;
   }
   case 0x0003: {
    unsigned char digest[32];

    _php_stream_seek((fp), (-(8 + 32)), (2) );
    read_len = _php_stream_tell((fp) );

    if (_php_stream_read((fp), ((char*)digest), (sizeof(digest)) ) != sizeof(digest)) {
     _efree((savebuf) );
     _php_stream_free((fp), (1 | 2) );
     if (error) {
      spprintf(error, 0, "phar \"%s\" has a broken signature", fname);
     }
     return -1;
    }

    if (-1 == phar_verify_signature(fp, read_len, 0x0003, (char *)digest, 32, fname, &signature, &sig_len, error )) {
     _efree((savebuf) );
     _php_stream_free((fp), (1 | 2) );
     if (error) {
      char *save = *error;
      spprintf(error, 0, "phar \"%s\" SHA256 signature could not be verified: %s", fname, *error);
      _efree((save) );
     }
     return -1;
    }
    break;
   }
# 903 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
   case 0x0002: {
    unsigned char digest[20];

    _php_stream_seek((fp), (-(8 + 20)), (2) );
    read_len = _php_stream_tell((fp) );

    if (_php_stream_read((fp), ((char*)digest), (sizeof(digest)) ) != sizeof(digest)) {
     _efree((savebuf) );
     _php_stream_free((fp), (1 | 2) );
     if (error) {
      spprintf(error, 0, "phar \"%s\" has a broken signature", fname);
     }
     return -1;
    }

    if (-1 == phar_verify_signature(fp, read_len, 0x0002, (char *)digest, 20, fname, &signature, &sig_len, error )) {
     _efree((savebuf) );
     _php_stream_free((fp), (1 | 2) );
     if (error) {
      char *save = *error;
      spprintf(error, 0, "phar \"%s\" SHA1 signature could not be verified: %s", fname, *error);
      _efree((save) );
     }
     return -1;
    }
    break;
   }
   case 0x0001: {
    unsigned char digest[16];

    _php_stream_seek((fp), (-(8 + 16)), (2) );
    read_len = _php_stream_tell((fp) );

    if (_php_stream_read((fp), ((char*)digest), (sizeof(digest)) ) != sizeof(digest)) {
     _efree((savebuf) );
     _php_stream_free((fp), (1 | 2) );
     if (error) {
      spprintf(error, 0, "phar \"%s\" has a broken signature", fname);
     }
     return -1;
    }

    if (-1 == phar_verify_signature(fp, read_len, 0x0001, (char *)digest, 16, fname, &signature, &sig_len, error )) {
     _efree((savebuf) );
     _php_stream_free((fp), (1 | 2) );
     if (error) {
      char *save = *error;
      spprintf(error, 0, "phar \"%s\" MD5 signature could not be verified: %s", fname, *error);
      _efree((save) );
     }
     return -1;
    }
    break;
   }
   default:
    _efree((savebuf) );
    _php_stream_free((fp), (1 | 2) );

    if (error) {
     spprintf(error, 0, "phar \"%s\" has a broken or unsupported signature", fname);
    }
    return -1;
  }
 } else if ((phar_globals.require_hash)) {
  _efree((savebuf) );
  _php_stream_free((fp), (1 | 2) );

  if (error) {
   spprintf(error, 0, "phar \"%s\" does not have a signature", fname);
  }
  return -1;
 } else {
  sig_flags = 0;
  sig_len = 0;
 }


 memcpy(&tmp_len, buffer, sizeof(tmp_len)); buffer += 4;

 if (buffer + tmp_len > endbuffer) {
  _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (buffer overrun)", fname); } return -1;;
 }

 if (manifest_len < 10 + tmp_len) {
  _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (truncated manifest header)", fname); } return -1;
 }


 if (tmp_len) {

  if (alias && alias_len && (alias_len != (int)tmp_len || (__extension__ (__builtin_constant_p (tmp_len) && ((__builtin_constant_p (alias) && strlen (alias) < ((size_t) (tmp_len))) || (__builtin_constant_p (buffer) && strlen (buffer) < ((size_t) (tmp_len)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (alias) && __builtin_constant_p (buffer) && (__s1_len = strlen (alias), __s2_len = strlen (buffer), (!((size_t)(const void *)((alias) + 1) - (size_t)(const void *)(alias) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((buffer) + 1) - (size_t)(const void *)(buffer) == 1) || __s2_len >= 4)) ? __builtin_strcmp (alias, buffer) : (__builtin_constant_p (alias) && ((size_t)(const void *)((alias) + 1) - (size_t)(const void *)(alias) == 1) && (__s1_len = strlen (alias), __s1_len < 4) ? (__builtin_constant_p (buffer) && ((size_t)(const void *)((buffer) + 1) - (size_t)(const void *)(buffer) == 1) ? __builtin_strcmp (alias, buffer) : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) (buffer); register int __result = (((__const unsigned char *) (__const char *) (alias))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (alias))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (alias))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (alias))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (buffer) && ((size_t)(const void *)((buffer) + 1) - (size_t)(const void *)(buffer) == 1) && (__s2_len = strlen (buffer), __s2_len < 4) ? (__builtin_constant_p (alias) && ((size_t)(const void *)((alias) + 1) - (size_t)(const void *)(alias) == 1) ? __builtin_strcmp (alias, buffer) : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (alias); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) (buffer))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) (buffer))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) (buffer))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) (buffer))[3]); } } __result; }))) : __builtin_strcmp (alias, buffer)))); }) : strncmp (alias, buffer, tmp_len)))))
  {
   buffer[tmp_len] = '\0';
   _php_stream_free((fp), (1 | 2) );

   if (signature) {
    _efree((signature) );
   }

   if (error) {
    spprintf(error, 0, "cannot load phar \"%s\" with implicit alias \"%s\" under different alias \"%s\"", fname, buffer, alias);
   }

   _efree((savebuf) );
   return -1;
  }

  alias_len = tmp_len;
  alias = buffer;
  buffer += tmp_len;
  register_alias = 1;
 } else if (!alias_len || !alias) {

  alias = ((void *)0);
  alias_len = 0;
  register_alias = 0;
 } else if (alias_len) {
  register_alias = 1;
  temp_alias = 1;
 }


 if (manifest_count > ((manifest_len - 10 - tmp_len) / (5 * 4 + 1))) {

  _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (too many manifest entries for size of manifest)", fname); } return -1;
 }

 mydata = (((phar_globals.persist))?__zend_calloc((1), (sizeof(phar_archive_data))):_ecalloc(((1)), ((sizeof(phar_archive_data))) ));
 mydata->is_persistent = (phar_globals.persist);


 if (mydata->is_persistent) {
  memcpy(&mydata->metadata_len, buffer, sizeof(mydata->metadata_len)); buffer += 4;
  if (phar_parse_metadata(&buffer, &mydata->metadata, mydata->metadata_len ) == -1) {
   _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to read phar metadata in .phar file \"%s\"", fname); } return -1;;
  }
 } else {
  if (phar_parse_metadata(&buffer, &mydata->metadata, 0 ) == -1) {
   _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to read phar metadata in .phar file \"%s\"", fname); } return -1;;
  }
 }


 _zend_hash_init((&mydata->manifest), (manifest_count), (zend_get_hash_value), (destroy_phar_manifest_entry), ((zend_bool)mydata->is_persistent) )
                                                                                     ;
 _zend_hash_init((&mydata->mounted_dirs), (5), (zend_get_hash_value), (((void *)0)), ((zend_bool)mydata->is_persistent) )
                                                              ;
 _zend_hash_init((&mydata->virtual_dirs), (manifest_count * 2), (zend_get_hash_value), (((void *)0)), ((zend_bool)mydata->is_persistent) )
                                                              ;
 mydata->fname = ((mydata->is_persistent)?zend_strndup((fname),(fname_len)):_estrndup(((fname)), ((fname_len)) ));



 mydata->fname_len = fname_len;
 offset = halt_offset + manifest_len + 4;
 memset(&entry, 0, sizeof(phar_entry_info));
 entry.phar = mydata;
 entry.fp_type = PHAR_FP;
 entry.is_persistent = mydata->is_persistent;

 for (manifest_index = 0; manifest_index < manifest_count; ++manifest_index) {
  if (buffer + 4 > endbuffer) {
   _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (truncated manifest entry)", fname); } return -1;
  }

  memcpy(&entry.filename_len, buffer, sizeof(entry.filename_len)); buffer += 4;

  if (entry.filename_len == 0) {
   _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "zero-length filename encountered in phar \"%s\"", fname); } return -1;;
  }

  if (entry.is_persistent) {
   entry.manifest_pos = manifest_index;
  }

  if (buffer + entry.filename_len + 20 > endbuffer) {
   _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (truncated manifest entry)", fname); } return -1;;
  }

  if ((manifest_ver & 0xFFF0) >= 0x1110 && buffer[entry.filename_len - 1] == '/') {
   entry.is_dir = 1;
  } else {
   entry.is_dir = 0;
  }

  phar_add_virtual_dirs(mydata, buffer, entry.filename_len );
  entry.filename = ((entry.is_persistent)?zend_strndup((buffer),(entry.filename_len)):_estrndup(((buffer)), ((entry.filename_len)) ));
  buffer += entry.filename_len;
  memcpy(&entry.uncompressed_filesize, buffer, sizeof(entry.uncompressed_filesize)); buffer += 4;
  memcpy(&entry.timestamp, buffer, sizeof(entry.timestamp)); buffer += 4;

  if (offset == halt_offset + (int)manifest_len + 4) {
   mydata->min_timestamp = entry.timestamp;
   mydata->max_timestamp = entry.timestamp;
  } else {
   if (mydata->min_timestamp > entry.timestamp) {
    mydata->min_timestamp = entry.timestamp;
   } else if (mydata->max_timestamp < entry.timestamp) {
    mydata->max_timestamp = entry.timestamp;
   }
  }

  memcpy(&entry.compressed_filesize, buffer, sizeof(entry.compressed_filesize)); buffer += 4;
  memcpy(&entry.crc32, buffer, sizeof(entry.crc32)); buffer += 4;
  memcpy(&entry.flags, buffer, sizeof(entry.flags)); buffer += 4;

  if (entry.is_dir) {
   entry.filename_len--;
   entry.flags |= 0x000001FF;
  }

  if (entry.is_persistent) {
   memcpy(&entry.metadata_len, buffer, sizeof(entry.metadata_len)); buffer += 4;
   if (!entry.metadata_len) buffer -= 4;
   if (phar_parse_metadata(&buffer, &entry.metadata, entry.metadata_len ) == -1) {
    ((entry.is_persistent)?free(entry.filename):_efree((entry.filename) ));
    _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to read file metadata in .phar file \"%s\"", fname); } return -1;;
   }
  } else {
   if (phar_parse_metadata(&buffer, &entry.metadata, 0 ) == -1) {
    ((entry.is_persistent)?free(entry.filename):_efree((entry.filename) ));
    _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to read file metadata in .phar file \"%s\"", fname); } return -1;;
   }
  }

  entry.offset = entry.offset_abs = offset;
  offset += entry.compressed_filesize;

  switch (entry.flags & 0x0000F000) {
   case 0x00001000:
    if (!(phar_globals.has_zlib)) {
     if (entry.metadata) {
      if (entry.is_persistent) {
       free(entry.metadata);
      } else {
       _zval_ptr_dtor((&entry.metadata) );
      }
     }
     ((entry.is_persistent)?free(entry.filename):_efree((entry.filename) ));
     _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "zlib extension is required for gz compressed .phar file \"%s\"", fname); } return -1;;
    }
    break;
   case 0x00002000:
    if (!(phar_globals.has_bz2)) {
     if (entry.metadata) {
      if (entry.is_persistent) {
       free(entry.metadata);
      } else {
       _zval_ptr_dtor((&entry.metadata) );
      }
     }
     ((entry.is_persistent)?free(entry.filename):_efree((entry.filename) ));
     _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "bz2 extension is required for bzip2 compressed .phar file \"%s\"", fname); } return -1;;
    }
    break;
   default:
    if (entry.uncompressed_filesize != entry.compressed_filesize) {
     if (entry.metadata) {
      if (entry.is_persistent) {
       free(entry.metadata);
      } else {
       _zval_ptr_dtor((&entry.metadata) );
      }
     }
     ((entry.is_persistent)?free(entry.filename):_efree((entry.filename) ));
     _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (compressed and uncompressed size does not match for uncompressed entry)", fname); } return -1;;
    }
    break;
  }

  manifest_flags |= (entry.flags & 0x0000F000);

  entry.is_crc_checked = (manifest_flags & 0x00010000 ? 1 : 0);
  phar_set_inode(&entry );
  _zend_hash_add_or_update(&mydata->manifest, entry.filename, entry.filename_len, (void*)&entry, sizeof(phar_entry_info), ((void *)0), (1<<1) );
 }

 ap_php_snprintf(mydata->version, sizeof(mydata->version), "%u.%u.%u", manifest_ver >> 12, (manifest_ver >> 8) & 0xF, (manifest_ver >> 4) & 0xF);
 mydata->internal_file_start = halt_offset + manifest_len + 4;
 mydata->halt_offset = halt_offset;
 mydata->flags = manifest_flags;
 endbuffer = strrchr(mydata->fname, '/');

 if (endbuffer) {
  mydata->ext = memchr(endbuffer, '.', (mydata->fname + fname_len) - endbuffer);
  if (mydata->ext == endbuffer) {
   mydata->ext = memchr(endbuffer + 1, '.', (mydata->fname + fname_len) - endbuffer - 1);
  }
  if (mydata->ext) {
   mydata->ext_len = (mydata->fname + mydata->fname_len) - mydata->ext;
  }
 }

 mydata->alias = alias ?
  ((mydata->is_persistent)?zend_strndup((alias),(alias_len)):_estrndup(((alias)), ((alias_len)) )) :
  ((mydata->is_persistent)?zend_strndup((mydata->fname),(fname_len)):_estrndup(((mydata->fname)), ((fname_len)) ));
 mydata->alias_len = alias ? alias_len : fname_len;
 mydata->sig_flags = sig_flags;
 mydata->fp = fp;
 mydata->sig_len = sig_len;
 mydata->signature = signature;
 phar_request_initialize();

 if (register_alias) {
  phar_archive_data **fd_ptr;

  mydata->is_temporary_alias = temp_alias;

  if (!phar_validate_alias(mydata->alias, mydata->alias_len)) {
   signature = ((void *)0);
   fp = ((void *)0);
   _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "Cannot open archive \"%s\", invalid alias", fname); } return -1;;
  }

  if (0 == zend_hash_find(&((&phar_globals)->phar_alias_map), alias, alias_len, (void **)&fd_ptr)) {
   if (0 != phar_free_alias(*fd_ptr, alias, alias_len )) {
    signature = ((void *)0);
    fp = ((void *)0);
    _efree((savebuf) ); if (mydata) { phar_destroy_phar_data(mydata ); } if (signature) { (((phar_globals.persist))?free(signature):_efree((signature) )); } if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "Cannot open archive \"%s\", alias is already in use by existing archive", fname); } return -1;;
   }
  }

  _zend_hash_add_or_update(&((&phar_globals)->phar_alias_map), alias, alias_len, (void*)&mydata, sizeof(phar_archive_data*), ((void *)0), (1<<1) );
 } else {
  mydata->is_temporary_alias = 1;
 }

 _zend_hash_add_or_update(&((&phar_globals)->phar_fname_map), mydata->fname, fname_len, (void*)&mydata, sizeof(phar_archive_data*), ((void *)0), (1<<1) );
 _efree((savebuf) );

 if (pphar) {
  *pphar = mydata;
 }

 return 0;
}





int phar_open_or_create_filename(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error )
{
 const char *ext_str, *z;
 char *my_error;
 int ext_len;
 phar_archive_data **test, *unused = ((void *)0);

 test = &unused;

 if (error) {
  *error = ((void *)0);
 }


 if (phar_detect_phar_fname_ext(fname, fname_len, &ext_str, &ext_len, !is_data, 0, 1 ) == 0) {
  goto check_file;
 }


 if (-1 == phar_detect_phar_fname_ext(fname, fname_len, &ext_str, &ext_len, !is_data, 1, 1 )) {
  if (error) {
   if (ext_len == -2) {
    spprintf(error, 0, "Cannot create a phar archive from a URL like \"%s\". Phar objects can only be created from local files", fname);
   } else {
    spprintf(error, 0, "Cannot create phar '%s', file extension (or combination) not recognised or the directory does not exist", fname);
   }
  }
  return -1;
 }
check_file:
 if (phar_open_parsed_phar(fname, fname_len, alias, alias_len, is_data, options, test, &my_error ) == 0) {
  if (pphar) {
   *pphar = *test;
  }

  if ((*test)->is_data && !(*test)->is_tar && !(*test)->is_zip) {
   if (error) {
    spprintf(error, 0, "Cannot open '%s' as a PharData object. Use Phar::__construct() for executable archives", fname);
   }
   return -1;
  }

  if ((phar_globals.readonly) && !(*test)->is_data && ((*test)->is_tar || (*test)->is_zip)) {
   phar_entry_info *stub;
   if (-1 == zend_hash_find(&((*test)->manifest), ".phar/stub.php", sizeof(".phar/stub.php")-1, (void **)&stub)) {
    spprintf(error, 0, "'%s' is not a phar archive. Use PharData::__construct() for a standard zip or tar archive", fname);
    return -1;
   }
  }

  if (!(phar_globals.readonly) || (*test)->is_data) {
   (*test)->is_writeable = 1;
  }
  return 0;
 } else if (my_error) {
  if (error) {
   *error = my_error;
  } else {
   _efree((my_error) );
  }
  return -1;
 }

 if (ext_len > 3 && (z = memchr(ext_str, 'z', ext_len)) && ((ext_str + ext_len) - z >= 2) && !memcmp(z + 1, "ip", 2)) {

  return phar_open_or_create_zip(fname, fname_len, alias, alias_len, is_data, options, pphar, error );
 }

 if (ext_len > 3 && (z = memchr(ext_str, 't', ext_len)) && ((ext_str + ext_len) - z >= 2) && !memcmp(z + 1, "ar", 2)) {

  return phar_open_or_create_tar(fname, fname_len, alias, alias_len, is_data, options, pphar, error );
 }

 return phar_create_or_parse_filename(fname, fname_len, alias, alias_len, is_data, options, pphar, error );
}


int phar_create_or_parse_filename(char *fname, int fname_len, char *alias, int alias_len, int is_data, int options, phar_archive_data** pphar, char **error )
{
 phar_archive_data *mydata;
 php_stream *fp;
 char *actual = ((void *)0), *p;

 if (!pphar) {
  pphar = &mydata;
 }





 if (php_check_open_basedir(fname )) {
  return -1;
 }


 fp = _php_stream_open_wrapper_ex((fname), ("rb"), (0x00000002|0x00000010|0), (&actual), ((void *)0) );

 if (actual) {
  fname = actual;
  fname_len = strlen(actual);
 }

 if (fp) {
  if (phar_open_from_fp(fp, fname, fname_len, alias, alias_len, options, pphar, is_data, error ) == 0) {
   if ((*pphar)->is_data || !(phar_globals.readonly)) {
    (*pphar)->is_writeable = 1;
   }
   if (actual) {
    _efree((actual) );
   }
   return 0;
  } else {

   if (actual) {
    _efree((actual) );
   }
   return -1;
  }
 }

 if (actual) {
  _efree((actual) );
 }

 if ((phar_globals.readonly) && !is_data) {
  if (options & 0x00000008) {
   if (error) {
    spprintf(error, 0, "creating archive \"%s\" disabled by the php.ini setting phar.readonly", fname);
   }
  }
  return -1;
 }


 mydata = _ecalloc((1), (sizeof(phar_archive_data)) );
 mydata->fname = expand_filepath(fname, ((void *)0) );
 fname_len = strlen(mydata->fname);



 p = strrchr(mydata->fname, '/');

 if (p) {
  mydata->ext = memchr(p, '.', (mydata->fname + fname_len) - p);
  if (mydata->ext == p) {
   mydata->ext = memchr(p + 1, '.', (mydata->fname + fname_len) - p - 1);
  }
  if (mydata->ext) {
   mydata->ext_len = (mydata->fname + fname_len) - mydata->ext;
  }
 }

 if (pphar) {
  *pphar = mydata;
 }

 _zend_hash_init((&mydata->manifest), (sizeof(phar_entry_info)), (zend_get_hash_value), (destroy_phar_manifest_entry), (0) )
                                                      ;
 _zend_hash_init((&mydata->mounted_dirs), (sizeof(char *)), (zend_get_hash_value), (((void *)0)), (0) )
                               ;
 _zend_hash_init((&mydata->virtual_dirs), (sizeof(char *)), (zend_get_hash_value), (((void *)0)), ((zend_bool)mydata->is_persistent) )
                                                              ;
 mydata->fname_len = fname_len;
 ap_php_snprintf(mydata->version, sizeof(mydata->version), "%s", "1.1.1");
 mydata->is_temporary_alias = alias ? 0 : 1;
 mydata->internal_file_start = -1;
 mydata->fp = ((void *)0);
 mydata->is_writeable = 1;
 mydata->is_brandnew = 1;
 phar_request_initialize();
 _zend_hash_add_or_update(&((&phar_globals)->phar_fname_map), mydata->fname, fname_len, (void*)&mydata, sizeof(phar_archive_data*), ((void *)0), (1<<1) );

 if (is_data) {
  alias = ((void *)0);
  alias_len = 0;
  mydata->is_data = 1;

  mydata->is_tar = 1;
 } else {
  phar_archive_data **fd_ptr;

  if (alias && 0 == zend_hash_find(&((&phar_globals)->phar_alias_map), alias, alias_len, (void **)&fd_ptr)) {
   if (0 != phar_free_alias(*fd_ptr, alias, alias_len )) {
    if (error) {
     spprintf(error, 4096, "phar error: phar \"%s\" cannot set alias \"%s\", already in use by another phar archive", mydata->fname, alias);
    }

    zend_hash_del_key_or_index(&((&phar_globals)->phar_fname_map), mydata->fname, fname_len, 0, 0);

    if (pphar) {
     *pphar = ((void *)0);
    }

    return -1;
   }
  }

  mydata->alias = alias ? _estrndup((alias), (alias_len) ) : _estrndup((mydata->fname), (fname_len) );
  mydata->alias_len = alias ? alias_len : fname_len;
 }

 if (alias_len && alias) {
  if (-1 == _zend_hash_add_or_update(&((&phar_globals)->phar_alias_map), alias, alias_len, (void*)&mydata, sizeof(phar_archive_data*), ((void *)0), (1<<1) )) {
   if (options & 0x00000008) {
    if (error) {
     spprintf(error, 0, "archive \"%s\" cannot be associated with alias \"%s\", already in use", fname, alias);
    }
   }

   zend_hash_del_key_or_index(&((&phar_globals)->phar_fname_map), mydata->fname, fname_len, 0, 0);

   if (pphar) {
    *pphar = ((void *)0);
   }

   return -1;
  }
 }

 return 0;
}
# 1475 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
int phar_open_from_filename(char *fname, int fname_len, char *alias, int alias_len, int options, phar_archive_data** pphar, char **error )
{
 php_stream *fp;
 char *actual;
 int ret, is_data = 0;

 if (error) {
  *error = ((void *)0);
 }

 if (!strstr(fname, ".phar")) {
  is_data = 1;
 }

 if (phar_open_parsed_phar(fname, fname_len, alias, alias_len, is_data, options, pphar, error ) == 0) {
  return 0;
 } else if (error && *error) {
  return -1;
 }





 if (php_check_open_basedir(fname )) {
  return -1;
 }

 fp = _php_stream_open_wrapper_ex((fname), ("rb"), (0x00000002|0x00000010), (&actual), ((void *)0) );

 if (!fp) {
  if (options & 0x00000008) {
   if (error) {
    spprintf(error, 0, "unable to open phar for reading \"%s\"", fname);
   }
  }
  if (actual) {
   _efree((actual) );
  }
  return -1;
 }

 if (actual) {
  fname = actual;
  fname_len = strlen(actual);
 }

 ret = phar_open_from_fp(fp, fname, fname_len, alias, alias_len, options, pphar, is_data, error );

 if (actual) {
  _efree((actual) );
 }

 return ret;
}


static inline char *phar_strnstr(const char *buf, int buf_len, const char *search, int search_len)
{
 const char *c;
 int so_far = 0;

 if (buf_len < search_len) {
  return ((void *)0);
 }

 c = buf - 1;

 do {
  if (!(c = memchr(c + 1, search[0], buf_len - search_len - so_far))) {
   return (char *) ((void *)0);
  }

  so_far = c - buf;

  if (so_far >= (buf_len - search_len)) {
   return (char *) ((void *)0);
  }

  if (!memcmp(c, search, search_len)) {
   return (char *) c;
  }
 } while (1);
}







static int phar_open_from_fp(php_stream* fp, char *fname, int fname_len, char *alias, int alias_len, int options, phar_archive_data** pphar, int is_data, char **error )
{
 const char token[] = "__HALT_COMPILER();";
 const char zip_magic[] = "PK\x03\x04";
 const char gz_magic[] = "\x1f\x8b\x08";
 const char bz_magic[] = "BZh";
 char *pos, test = '\0';
 const int window_size = 1024 + sizeof(token);
 char buffer[1024 + sizeof(token)];
 const long readsize = sizeof(buffer) - sizeof(token);
 const long tokenlen = sizeof(token) - 1;
 long halt_offset;
 size_t got;
 php_uint32 compression = 0x00000000;

 if (error) {
  *error = ((void *)0);
 }

 if (-1 == _php_stream_seek((fp), 0L, 0 )) {
  if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "cannot rewind phar \"%s\"", fname); } return -1;
 }

 buffer[sizeof(buffer)-1] = '\0';
 memset(buffer, 32, sizeof(token));
 halt_offset = 0;



 while(!_php_stream_eof((fp) )) {
  if ((got = _php_stream_read((fp), (buffer+tokenlen), (readsize) )) < (size_t) tokenlen) {
   if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (truncated entry)", fname); } return -1;
  }

  if (!test) {
   test = '\1';
   pos = buffer+tokenlen;
   if (!memcmp(pos, gz_magic, 3)) {
    char err = 0;
    php_stream_filter *filter;
    php_stream *temp;

    zval filterparams;

    if (!(phar_globals.has_zlib)) {
     if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to decompress gzipped phar archive \"%s\" to temporary file, enable zlib extension in php.ini", fname); } return -1;
    }
    _array_init((&filterparams), 0 );




    add_assoc_long_ex(&filterparams, "window", strlen("window")+1, 15 + 32);


    if (!(temp = _php_stream_fopen_tmpfile(0 ))) {
     if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to create temporary file for decompression of gzipped phar archive \"%s\"", fname); } return -1;
    }

    _php_stream_seek((fp), 0L, 0 );
    filter = php_stream_filter_create("zlib.inflate", &filterparams, (fp)->is_persistent );

    if (!filter) {
     err = 1;
     add_assoc_long_ex(&filterparams, "window", strlen("window")+1, 15);
     filter = php_stream_filter_create("zlib.inflate", &filterparams, (fp)->is_persistent );
     _zval_dtor((&filterparams) );

     if (!filter) {
      _php_stream_free((temp), (1 | 2) );
      if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to decompress gzipped phar archive \"%s\", ext/zlib is buggy in PHP versions older than 5.2.6", fname); } return -1;
     }
    } else {
     _zval_dtor((&filterparams) );
    }

    _php_stream_filter_append((&temp->writefilters), (filter) );

    if (0 != _php_stream_copy_to_stream_ex((fp), (temp), (((size_t)-1)), (((void *)0)) )) {
     if (err) {
      _php_stream_free((temp), (1 | 2) );
      if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to decompress gzipped phar archive \"%s\", ext/zlib is buggy in PHP versions older than 5.2.6", fname); } return -1;
     }
     _php_stream_free((temp), (1 | 2) );
     if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to decompress gzipped phar archive \"%s\" to temporary file", fname); } return -1;
    }

    _php_stream_filter_flush((filter), (1) );
    php_stream_filter_remove(filter, 1 );
    _php_stream_free((fp), (1 | 2) );
    fp = temp;
    _php_stream_seek((fp), 0L, 0 );
    compression = 0x00100000;


    test = '\0';
    continue;
   } else if (!memcmp(pos, bz_magic, 3)) {
    php_stream_filter *filter;
    php_stream *temp;

    if (!(phar_globals.has_bz2)) {
     if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to decompress bzipped phar archive \"%s\" to temporary file, enable bz2 extension in php.ini", fname); } return -1;
    }


    if (!(temp = _php_stream_fopen_tmpfile(0 ))) {
     if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to create temporary file for decompression of bzipped phar archive \"%s\"", fname); } return -1;
    }

    _php_stream_seek((fp), 0L, 0 );
    filter = php_stream_filter_create("bzip2.decompress", ((void *)0), (fp)->is_persistent );

    if (!filter) {
     _php_stream_free((temp), (1 | 2) );
     if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to decompress bzipped phar archive \"%s\", filter creation failed", fname); } return -1;
    }

    _php_stream_filter_append((&temp->writefilters), (filter) );

    if (0 != _php_stream_copy_to_stream_ex((fp), (temp), (((size_t)-1)), (((void *)0)) )) {
     _php_stream_free((temp), (1 | 2) );
     if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "unable to decompress bzipped phar archive \"%s\" to temporary file", fname); } return -1;
    }

    _php_stream_filter_flush((filter), (1) );
    php_stream_filter_remove(filter, 1 );
    _php_stream_free((fp), (1 | 2) );
    fp = temp;
    _php_stream_seek((fp), 0L, 0 );
    compression = 0x00200000;


    test = '\0';
    continue;
   }

   if (!memcmp(pos, zip_magic, 4)) {
    _php_stream_seek((fp), (0), (2) );
    return phar_parse_zipfile(fp, fname, fname_len, alias, alias_len, pphar, error );
   }

   if (got > 512) {
    if (phar_is_tar(pos, fname)) {
     _php_stream_seek((fp), 0L, 0 );
     return phar_parse_tarfile(fp, fname, fname_len, alias, alias_len, pphar, is_data, compression, error );
    }
   }
  }

  if (got > 0 && (pos = phar_strnstr(buffer, got + sizeof(token), token, sizeof(token)-1)) != ((void *)0)) {
   halt_offset += (pos - buffer);
   return phar_parse_pharfile(fp, fname, fname_len, alias, alias_len, halt_offset, pphar, compression, error );
  }

  halt_offset += got;
  memmove(buffer, buffer + window_size, tokenlen);
 }

 if (fp) { _php_stream_free((fp), (1 | 2) ); } if (error) { spprintf(error, 0, "internal corruption of phar \"%s\" (__HALT_COMPILER(); not found)", fname); } return -1;
}
# 1738 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
static int phar_analyze_path(const char *fname, const char *ext, int ext_len, int for_create )
{
 php_stream_statbuf ssb;
 char *realpath;
 char *filename = _estrndup((fname), ((ext - fname) + ext_len) );

 if ((realpath = expand_filepath(filename, ((void *)0) ))) {



  if (zend_hash_exists(&((&phar_globals)->phar_fname_map), realpath, strlen(realpath))) {
   _efree((realpath) );
   _efree((filename) );
   return 0;
  }

  if ((phar_globals.manifest_cached) && zend_hash_exists(&cached_phars, realpath, strlen(realpath))) {
   _efree((realpath) );
   _efree((filename) );
   return 0;
  }
  _efree((realpath) );
 }

 if (0 == _php_stream_stat_path(((char *) filename), 0, (&ssb), ((void *)0) )) {

  _efree((filename) );

  if (ssb.sb.st_mode & 0040000) {
   return -1;
  }

  if (for_create == 1) {
   return -1;
  }

  return 0;
 } else {
  char *slash;

  if (!for_create) {
   _efree((filename) );
   return -1;
  }

  slash = (char *) strrchr(filename, '/');

  if (slash) {
   *slash = '\0';
  }

  if (0 != _php_stream_stat_path(((char *) filename), 0, (&ssb), ((void *)0) )) {
   if (!slash) {
    if (!(realpath = expand_filepath(filename, ((void *)0) ))) {
     _efree((filename) );
     return -1;
    }



    slash = strstr(realpath, filename) + ((ext - fname) + ext_len);
    *slash = '\0';
    slash = strrchr(realpath, '/');

    if (slash) {
     *slash = '\0';
    } else {
     _efree((realpath) );
     _efree((filename) );
     return -1;
    }

    if (0 != _php_stream_stat_path((realpath), 0, (&ssb), ((void *)0) )) {
     _efree((realpath) );
     _efree((filename) );
     return -1;
    }

    _efree((realpath) );

    if (ssb.sb.st_mode & 0040000) {
     _efree((filename) );
     return 0;
    }
   }

   _efree((filename) );
   return -1;
  }

  _efree((filename) );

  if (ssb.sb.st_mode & 0040000) {
   return 0;
  }

  return -1;
 }
}



static int phar_check_str(const char *fname, const char *ext_str, int ext_len, int executable, int for_create )
{
 char test[51];
 const char *pos;

 if (ext_len >= 50) {
  return -1;
 }

 if (executable == 1) {

  memcpy(test, ext_str - 1, ext_len + 1);
  test[ext_len + 1] = '\0';


  pos = strstr(test, ".phar");

  if (pos && (*(pos - 1) != '/')
    && (pos += 5) && (*pos == '\0' || *pos == '/' || *pos == '.')) {
   return phar_analyze_path(fname, ext_str, ext_len, for_create );
  } else {
   return -1;
  }
 }


 if (!executable) {
  pos = strstr(ext_str, ".phar");
  if (!(pos && (*(pos - 1) != '/')
     && (pos += 5) && (*pos == '\0' || *pos == '/' || *pos == '.')) && *(ext_str + 1) != '.' && *(ext_str + 1) != '/' && *(ext_str + 1) != '\0') {
   return phar_analyze_path(fname, ext_str, ext_len, for_create );
  }
 } else {
  if (*(ext_str + 1) != '.' && *(ext_str + 1) != '/' && *(ext_str + 1) != '\0') {
   return phar_analyze_path(fname, ext_str, ext_len, for_create );
  }
 }

 return -1;
}
# 1895 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
int phar_detect_phar_fname_ext(const char *filename, int filename_len, const char **ext_str, int *ext_len, int executable, int for_create, int is_complete )
{
 const char *pos, *slash;

 *ext_str = ((void *)0);
 *ext_len = 0;

 if (!filename_len || filename_len == 1) {
  return -1;
 }

 phar_request_initialize();

 pos = memchr(filename, '/', filename_len);

 if (pos && pos != filename) {

  if (*(pos - 1) == ':' && (pos - filename) < filename_len - 1 && *(pos + 1) == '/') {
   *ext_len = -2;
   *ext_str = ((void *)0);
   return -1;
  }
  if (zend_hash_exists(&((&phar_globals)->phar_alias_map), (char *) filename, pos - filename)) {
   *ext_str = pos;
   *ext_len = -1;
   return -1;
  }

  if ((phar_globals.manifest_cached) && zend_hash_exists(&cached_alias, (char *) filename, pos - filename)) {
   *ext_str = pos;
   *ext_len = -1;
   return -1;
  }
 }

 if (zend_hash_num_elements(&((&phar_globals)->phar_fname_map)) || (phar_globals.manifest_cached)) {
  phar_archive_data **pphar;

  if (is_complete) {
   if (0 == zend_hash_find(&((&phar_globals)->phar_fname_map), (char *) filename, filename_len, (void **)&pphar)) {
    *ext_str = filename + (filename_len - (*pphar)->ext_len);
woohoo:
    *ext_len = (*pphar)->ext_len;

    if (executable == 2) {
     return 0;
    }

    if (executable == 1 && !(*pphar)->is_data) {
     return 0;
    }

    if (!executable && (*pphar)->is_data) {
     return 0;
    }

    return -1;
   }

   if ((phar_globals.manifest_cached) && 0 == zend_hash_find(&cached_phars, (char *) filename, filename_len, (void **)&pphar)) {
    *ext_str = filename + (filename_len - (*pphar)->ext_len);
    goto woohoo;
   }
  } else {
   phar_zstr key;
   char *str_key;
   uint keylen;
   ulong unused;

   zend_hash_internal_pointer_reset_ex(&((&phar_globals)->phar_fname_map), ((void *)0));

   while (-1 != (zend_hash_get_current_key_type_ex(&((&phar_globals)->phar_fname_map), ((void *)0)) == 3 ? -1 : 0)) {
    if (3 == zend_hash_get_current_key_ex(&((&phar_globals)->phar_fname_map), &key, &keylen, &unused, 0, ((void *)0))) {
     break;
    }

    str_key = key;;

    if (keylen > (uint) filename_len) {
     zend_hash_move_forward_ex(&((&phar_globals)->phar_fname_map), ((void *)0));
     ;
     continue;
    }

    if (!memcmp(filename, str_key, keylen) && ((uint)filename_len == keylen
     || filename[keylen] == '/' || filename[keylen] == '\0')) {
     ;
     if (-1 == zend_hash_get_current_data_ex(&((&phar_globals)->phar_fname_map), (void **) &pphar, ((void *)0))) {
      break;
     }
     *ext_str = filename + (keylen - (*pphar)->ext_len);
     goto woohoo;
    }

    ;
    zend_hash_move_forward_ex(&((&phar_globals)->phar_fname_map), ((void *)0));
   }

   if ((phar_globals.manifest_cached)) {
    zend_hash_internal_pointer_reset_ex(&cached_phars, ((void *)0));

    while (-1 != (zend_hash_get_current_key_type_ex(&cached_phars, ((void *)0)) == 3 ? -1 : 0)) {
     if (3 == zend_hash_get_current_key_ex(&cached_phars, &key, &keylen, &unused, 0, ((void *)0))) {
      break;
     }

     str_key = key;;

     if (keylen > (uint) filename_len) {
      zend_hash_move_forward_ex(&cached_phars, ((void *)0));
      ;
      continue;
     }

     if (!memcmp(filename, str_key, keylen) && ((uint)filename_len == keylen
      || filename[keylen] == '/' || filename[keylen] == '\0')) {
      ;
      if (-1 == zend_hash_get_current_data_ex(&cached_phars, (void **) &pphar, ((void *)0))) {
       break;
      }
      *ext_str = filename + (keylen - (*pphar)->ext_len);
      goto woohoo;
     }
     ;
     zend_hash_move_forward_ex(&cached_phars, ((void *)0));
    }
   }
  }
 }

 pos = memchr(filename + 1, '.', filename_len);
next_extension:
 if (!pos) {
  return -1;
 }

 while (pos != filename && (*(pos - 1) == '/' || *(pos - 1) == '\0')) {
  pos = memchr(pos + 1, '.', filename_len - (pos - filename) + 1);
  if (!pos) {
   return -1;
  }
 }

 slash = memchr(pos, '/', filename_len - (pos - filename));

 if (!slash) {

  *ext_str = pos;
  *ext_len = strlen(pos);


  switch (phar_check_str(filename, *ext_str, *ext_len, executable, for_create )) {
   case 0:
    return 0;
   case -1:

    return -1;
  }
 }


 *ext_str = pos;
 *ext_len = slash - pos;

 switch (phar_check_str(filename, *ext_str, *ext_len, executable, for_create )) {
  case 0:
   return 0;
  case -1:

   pos = (__extension__ (__builtin_constant_p ('.') && !__builtin_constant_p (pos + 1) && ('.') == '\0' ? (char *) __rawmemchr (pos + 1, '.') : __builtin_strchr (pos + 1, '.')));
   if (pos) {
    *ext_str = ((void *)0);
    *ext_len = 0;
   }
   goto next_extension;
 }

 return -1;
}


static int php_check_dots(const char *element, int n)
{
 for(n--; n >= 0; --n) {
  if (element[n] != '.') {
   return 1;
  }
 }
 return 0;
}
# 2146 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
char *phar_fix_filepath(char *path, int *new_len, int use_cwd )
{
 char newpath[4096];
 int newpath_len;
 char *ptr;
 char *tok;
 int ptr_length, path_length = *new_len;

 if ((phar_globals.cwd_len) && use_cwd && path_length > 2 && path[0] == '.' && path[1] == '/') {
  newpath_len = (phar_globals.cwd_len);
  memcpy(newpath, (phar_globals.cwd), newpath_len);
 } else {
  newpath[0] = '/';
  newpath_len = 1;
 }

 ptr = path;

 if (*ptr == '/') {
  ++ptr;
 }

 tok = ptr;

 do {
  ptr = memchr(ptr, '/', path_length - (ptr - path));
 } while (ptr && ptr - tok == 0 && *ptr == '/' && ++ptr && ++tok);

 if (!ptr && (path_length - (tok - path))) {
  switch (path_length - (tok - path)) {
   case 1:
    if (*tok == '.') {
     _efree((path) );
     *new_len = 1;
     return _estrndup(("/"), (1) );
    }
    break;
   case 2:
    if (tok[0] == '.' && tok[1] == '.') {
     _efree((path) );
     *new_len = 1;
     return _estrndup(("/"), (1) );
    }
  }
  return path;
 }

 while (ptr) {
  ptr_length = ptr - tok;
last_time:
  if ((ptr_length >= 2 && !php_check_dots(tok, ptr_length))) {


   while (newpath_len > 1 && !((newpath[newpath_len - 1]) == '/')) {
    newpath_len--;
   }

   if (newpath[0] != '/') {
    newpath[newpath_len] = '\0';
   } else if (newpath_len > 1) {
    --newpath_len;
   }
  } else if (!(ptr_length == 1 && tok[0] == '.')) {
   if (newpath_len > 1) {
    newpath[newpath_len++] = '/';
    memcpy(newpath + newpath_len, tok, ptr_length+1);
   } else {
    memcpy(newpath + newpath_len, tok, ptr_length+1);
   }

   newpath_len += ptr_length;
  }

  if (ptr == path + path_length) {
   break;
  }

  tok = ++ptr;

  do {
   ptr = memchr(ptr, '/', path_length - (ptr - path));
  } while (ptr && ptr - tok == 0 && *ptr == '/' && ++ptr && ++tok);

  if (!ptr && (path_length - (tok - path))) {
   ptr_length = path_length - (tok - path);
   ptr = path + path_length;
   goto last_time;
  }
 }

 _efree((path) );
 *new_len = newpath_len;
 return _estrndup((newpath), (newpath_len) );
}
# 2254 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
int phar_split_fname(char *filename, int filename_len, char **arch, int *arch_len, char **entry, int *entry_len, int executable, int for_create )
{
 const char *ext_str;



 int ext_len, free_filename = 0;

 if (!strncasecmp(filename, "phar://", 7)) {
  filename += 7;
  filename_len -= 7;
 }

 ext_len = 0;






 if (phar_detect_phar_fname_ext(filename, filename_len, &ext_str, &ext_len, executable, for_create, 0 ) == -1) {
  if (ext_len != -1) {
   if (!ext_str) {




    *arch = filename;

   }

   if (free_filename) {
    _efree((filename) );
   }

   return -1;
  }

  ext_len = 0;

 }

 *arch_len = ext_str - filename + ext_len;
 *arch = _estrndup((filename), (*arch_len) );

 if (ext_str[ext_len]) {
  *entry_len = filename_len - *arch_len;
  *entry = _estrndup((ext_str+ext_len), (*entry_len) );



  *entry = phar_fix_filepath(*entry, entry_len, 0 );
 } else {
  *entry_len = 1;
  *entry = _estrndup(("/"), (1) );
 }

 if (free_filename) {
  _efree((filename) );
 }

 return 0;
}






int phar_open_executed_filename(char *alias, int alias_len, char **error )
{
 char *fname;
 zval *halt_constant;
 php_stream *fp;
 int fname_len;
 char *actual = ((void *)0);
 int ret;

 if (error) {
  *error = ((void *)0);
 }

 fname = (char*)zend_get_executed_filename();
 fname_len = strlen(fname);

 if (phar_open_parsed_phar(fname, fname_len, alias, alias_len, 0, 0x00000008, ((void *)0), 0 ) == 0) {
  return 0;
 }

 if (!__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (fname) && __builtin_constant_p ("[no active file]") && (__s1_len = strlen (fname), __s2_len = strlen ("[no active file]"), (!((size_t)(const void *)((fname) + 1) - (size_t)(const void *)(fname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("[no active file]") + 1) - (size_t)(const void *)("[no active file]") == 1) || __s2_len >= 4)) ? __builtin_strcmp (fname, "[no active file]") : (__builtin_constant_p (fname) && ((size_t)(const void *)((fname) + 1) - (size_t)(const void *)(fname) == 1) && (__s1_len = strlen (fname), __s1_len < 4) ? (__builtin_constant_p ("[no active file]") && ((size_t)(const void *)(("[no active file]") + 1) - (size_t)(const void *)("[no active file]") == 1) ? __builtin_strcmp (fname, "[no active file]") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("[no active file]"); register int __result = (((__const unsigned char *) (__const char *) (fname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (fname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (fname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (fname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("[no active file]") && ((size_t)(const void *)(("[no active file]") + 1) - (size_t)(const void *)("[no active file]") == 1) && (__s2_len = strlen ("[no active file]"), __s2_len < 4) ? (__builtin_constant_p (fname) && ((size_t)(const void *)((fname) + 1) - (size_t)(const void *)(fname) == 1) ? __builtin_strcmp (fname, "[no active file]") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (fname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("[no active file]"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("[no active file]"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("[no active file]"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("[no active file]"))[3]); } } __result; }))) : __builtin_strcmp (fname, "[no active file]")))); })) {
  if (error) {
   spprintf(error, 0, "cannot initialize a phar outside of PHP execution");
  }
  return -1;
 }

 do { (halt_constant) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(halt_constant))->u.buffered = ((void *)0); } while (0); (halt_constant)->refcount__gc = 1; (halt_constant)->is_ref__gc = 0;;;

 if (0 == zend_get_constant("__COMPILER_HALT_OFFSET__", 24, halt_constant )) {
  do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)halt_constant)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(halt_constant ); }; _efree((halt_constant) ); } while (0);
  if (error) {
   spprintf(error, 0, "__HALT_COMPILER(); must be declared in a phar");
  }
  return -1;
 }

 do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)halt_constant)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(halt_constant ); }; _efree((halt_constant) ); } while (0);







 if (php_check_open_basedir(fname )) {
  return -1;
 }

 fp = _php_stream_open_wrapper_ex((fname), ("rb"), (0x00000002|0x00000010|0x00000008), (&actual), ((void *)0) );

 if (!fp) {
  if (error) {
   spprintf(error, 0, "unable to open phar for reading \"%s\"", fname);
  }
  if (actual) {
   _efree((actual) );
  }
  return -1;
 }

 if (actual) {
  fname = actual;
  fname_len = strlen(actual);
 }

 ret = phar_open_from_fp(fp, fname, fname_len, alias, alias_len, 0x00000008, ((void *)0), 0, error );

 if (actual) {
  _efree((actual) );
 }

 return ret;
}





int phar_postprocess_file(phar_entry_data *idata, php_uint32 crc32, char **error, int process_zip )
{
 php_uint32 crc = ~0;
 int len = idata->internal_file->uncompressed_filesize;
 php_stream *fp = idata->fp;
 phar_entry_info *entry = idata->internal_file;

 if (error) {
  *error = ((void *)0);
 }

 if (entry->is_zip && process_zip > 0) {

  phar_zip_file_header local;
  phar_zip_data_desc desc;

  if (0 != phar_open_archive_fp(idata->phar )) {
   spprintf(error, 0, "phar error: unable to open zip-based phar archive \"%s\" to verify local file header for file \"%s\"", idata->phar->fname, entry->filename);
   return -1;
  }
  _php_stream_seek((phar_get_entrypfp(idata->internal_file )), (entry->header_offset), (0) );

  if (sizeof(local) != _php_stream_read((phar_get_entrypfp(idata->internal_file )), ((char *) &local), (sizeof(local)) )) {

   spprintf(error, 0, "phar error: internal corruption of zip-based phar \"%s\" (cannot read local file header for file \"%s\")", idata->phar->fname, entry->filename);
   return -1;
  }


  if (((((unsigned short)((((unsigned short)local.flags[0]) & 0xff) | (((unsigned short)local.flags[1]) & 0xff) << 8))) & 0x8) == 0x8) {
   _php_stream_seek((phar_get_entrypfp(idata->internal_file )), (entry->header_offset + sizeof(local) + ((unsigned short)((((unsigned short)local.filename_len[0]) & 0xff) | (((unsigned short)local.filename_len[1]) & 0xff) << 8)) + ((unsigned short)((((unsigned short)local.extra_len[0]) & 0xff) | (((unsigned short)local.extra_len[1]) & 0xff) << 8)) + entry->compressed_filesize), (0) )



                                          ;
   if (sizeof(desc) != _php_stream_read((phar_get_entrypfp(idata->internal_file )), ((char *) &desc), (sizeof(desc)) )
                                        ) {
    spprintf(error, 0, "phar error: internal corruption of zip-based phar \"%s\" (cannot read local data descriptor for file \"%s\")", idata->phar->fname, entry->filename);
    return -1;
   }
   if (desc.signature[0] == 'P' && desc.signature[1] == 'K') {
    memcpy(&(local.crc32), &(desc.crc32), 12);
   } else {

    memcpy(&(local.crc32), &desc, 12);
   }
  }

  if (entry->filename_len != ((unsigned short)((((unsigned short)local.filename_len[0]) & 0xff) | (((unsigned short)local.filename_len[1]) & 0xff) << 8)) || entry->crc32 != ((php_uint32)((((php_uint32)local.crc32[0]) & 0xff) | (((php_uint32)local.crc32[1]) & 0xff) << 8 | (((php_uint32)local.crc32[2]) & 0xff) << 16 | (((php_uint32)local.crc32[3]) & 0xff) << 24)) || entry->uncompressed_filesize != ((php_uint32)((((php_uint32)local.uncompsize[0]) & 0xff) | (((php_uint32)local.uncompsize[1]) & 0xff) << 8 | (((php_uint32)local.uncompsize[2]) & 0xff) << 16 | (((php_uint32)local.uncompsize[3]) & 0xff) << 24)) || entry->compressed_filesize != ((php_uint32)((((php_uint32)local.compsize[0]) & 0xff) | (((php_uint32)local.compsize[1]) & 0xff) << 8 | (((php_uint32)local.compsize[2]) & 0xff) << 16 | (((php_uint32)local.compsize[3]) & 0xff) << 24))) {
   spprintf(error, 0, "phar error: internal corruption of zip-based phar \"%s\" (local header of file \"%s\" does not match central directory)", idata->phar->fname, entry->filename);
   return -1;
  }


  entry->offset = entry->offset_abs =
   sizeof(local) + entry->header_offset + ((unsigned short)((((unsigned short)local.filename_len[0]) & 0xff) | (((unsigned short)local.filename_len[1]) & 0xff) << 8)) + ((unsigned short)((((unsigned short)local.extra_len[0]) & 0xff) | (((unsigned short)local.extra_len[1]) & 0xff) << 8));

  if (idata->zero && idata->zero != entry->offset_abs) {
   idata->zero = entry->offset_abs;
  }
 }

 if (process_zip == 1) {
  return 0;
 }

 _php_stream_seek((fp), (idata->zero), (0) );

 while (len--) {
  (crc = (crc >> 8) ^ crc32tab[(crc ^ (_php_stream_getc((fp) ))) & 0xff]);
 }

 _php_stream_seek((fp), (idata->zero), (0) );

 if (~crc == crc32) {
  entry->is_crc_checked = 1;
  return 0;
 } else {
  spprintf(error, 0, "phar error: internal corruption of phar \"%s\" (crc32 mismatch on file \"%s\")", idata->phar->fname, entry->filename);
  return -1;
 }
}


static inline void phar_set_32(char *buffer, int var)
{






  memcpy(buffer, &var, sizeof(var));

}

static int phar_flush_clean_deleted_apply(void *data )
{
 phar_entry_info *entry = (phar_entry_info *)data;

 if (entry->fp_refcount <= 0 && entry->is_deleted) {
  return 1<<0;
 } else {
  return 0;
 }
}


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/stub.h" 1
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/stub.h"
static inline void phar_get_stub(const char *index_php, const char *web, size_t *len, char **stub, const int name_len, const int web_len )
{
 static const char newstub0[] = "<?php\n\n$web = '";
 static const char newstub1_0[] = "';\n\nif (in_array('phar', stream_get_wrappers()) && class_exists('Phar', 0)) {\nPhar::interceptFileFuncs();\nset_include_path('phar://' . __FILE__ . PATH_SEPARATOR . get_include_path());\nPhar::webPhar(null, $web);\ninclude 'phar://' . __FILE__ . '/' . Extract_Phar::START;\nreturn;\n}\n\nif (@(isset($_SERVER['REQUEST_URI']) && isset($_SERVER['REQUEST_METHOD']) && ($_SERVER['REQUEST_METHOD'] == 'GET' || $_SERVER['REQUEST_METHOD'] == 'POST'))) {\nExtract_Phar::go(true);\n$mimes = array(\n'phps' => 2,\n'c' => 'text/plain',\n'cc' => 'text/plain',\n'cpp' => 'text/plain',\n'c++' => 'text/plain',\n'dtd' => 'text/plain',\n'h' => 'text/plain',\n'log' => 'text/plain',\n'rng' => 'text/plain',\n'txt' => 'text/plain',\n'xsd' => 'text/plain',\n'php' => 1,\n'inc' => 1,\n'avi' => 'video/avi',\n'bmp' => 'image/bmp',\n'css' => 'text/css',\n'gif' => 'image/gif',\n'htm' => 'text/html',\n'html' => 'text/html',\n'htmls' => 'text/html',\n'ico' => 'image/x-ico',\n'jpe' => 'image/jpeg',\n'jpg' => 'image/jpeg',\n'jpeg' => 'image/jpeg',\n'js' => 'application/x-javascript',\n'midi' => 'audio/midi',\n'mid' => 'audio/midi',\n'mod' => 'audio/mod',\n'mov' => 'movie/quicktime',\n'mp3' => 'audio/mp3',\n'mpg' => 'video/mpeg',\n'mpeg' => 'video/mpeg',\n'pdf' => 'application/pdf',\n'png' => 'image/png',\n'swf' => 'application/shockwave-flash',\n'tif' => 'image/tiff',\n'tiff' => 'image/tiff',\n'wav' => 'audio/wav',\n'xbm' => 'image/xbm',\n'xml' => 'text/xml',\n);\n\nheader(\"Cache-Control: no-cache, must-revalidate\");\nheader(\"Pragma: no-cache\");\n\n$basename = basename(__FILE__);\nif (!strpos($_SERVER['REQUEST_URI'], $basename)) {\nchdir(Extract_Phar::$temp);\ninclude $web;\nreturn;\n}\n$pt = substr($_SERVER['REQUEST_URI'], strpos($_SERVER['REQUEST_URI'], $basename) + strlen($basename));\nif (!$pt || $pt == '/') {\n$pt = $web;\nheader('HTTP/1.1 301 Moved Permanently');\nheader('Location: ' . $_SERVER['REQUEST_URI'] . '/' . $pt);\nexit;\n}\n$a = realpath(Extract_Phar::$temp . DIRECTORY_SEPARATOR . $pt);\nif (!$a || strlen(dirname($a)) < strlen(";
 static const char newstub1_1[] = "Extract_Phar::$temp)) {\nheader('HTTP/1.0 404 Not Found');\necho \"<html>\\n <head>\\n  <title>File Not Found<title>\\n </head>\\n <body>\\n  <h1>404 - File \", $pt, \" Not Found</h1>\\n </body>\\n</html>\";\nexit;\n}\n$b = pathinfo($a);\nif (!isset($b['extension'])) {\nheader('Content-Type: text/plain');\nheader('Content-Length: ' . filesize($a));\nreadfile($a);\nexit;\n}\nif (isset($mimes[$b['extension']])) {\nif ($mimes[$b['extension']] === 1) {\ninclude $a;\nexit;\n}\nif ($mimes[$b['extension']] === 2) {\nhighlight_file($a);\nexit;\n}\nheader('Content-Type: ' .$mimes[$b['extension']]);\nheader('Content-Length: ' . filesize($a));\nreadfile($a);\nexit;\n}\n}\n\nclass Extract_Phar\n{\nstatic $temp;\nstatic $origdir;\nconst GZ = 0x1000;\nconst BZ2 = 0x2000;\nconst MASK = 0x3000;\nconst START = '";
 static const char newstub2[] = "';\nconst LEN = ";
 static const char newstub3_0[] = ";\n\nstatic function go($return = false)\n{\n$fp = fopen(__FILE__, 'rb');\nfseek($fp, self::LEN);\n$L = unpack('V', $a = (binary)fread($fp, 4));\n$m = (binary)'';\n\ndo {\n$read = 8192;\nif ($L[1] - strlen($m) < 8192) {\n$read = $L[1] - strlen($m);\n}\n$last = (binary)fread($fp, $read);\n$m .= $last;\n} while (strlen($last) && strlen($m) < $L[1]);\n\nif (strlen($m) < $L[1]) {\ndie('ERROR: manifest length read was \"' .\nstrlen($m) .'\" should be \"' .\n$L[1] . '\"');\n}\n\n$info = self::_unpack($m);\n$f = $info['c'];\n\nif ($f & self::GZ) {\nif (!function_exists('gzinflate')) {\ndie('Error: zlib extension is not enabled -' .\n' gzinflate() function needed for zlib-compressed .phars');\n}\n}\n\nif ($f & self::BZ2) {\nif (!function_exists('bzdecompress')) {\ndie('Error: bzip2 extension is not enabled -' .\n' bzdecompress() function needed for bz2-compressed .phars');\n}\n}\n\n$temp = self::tmpdir();\n\nif (!$temp || !is_writable($temp)) {\n$sessionpath = session_save_path();\nif (strpos ($sessionpath, \";\") !== false)\n$sessionpath = substr ($sessionpath, strpos ($sessionpath, \";\")+1);\nif (!file_exists($sessionpath) || !is_dir($sessionpath)) {\ndie('Could not locate temporary directory to extract phar');\n}\n$temp = $sessionpath;\n}\n\n$temp .= '/pharextract/'.basename(__FILE__, '.phar');\nself::$temp = $temp;\nself::$origdir = getcwd();\n@mkdir($temp, 0777, true);\n$temp = realpath($temp);\n\nif (!file_exists($temp . DIRECTORY_SEPARATOR . md5_file(__FILE__))) {\nself::_removeTmpFiles($temp, getcwd());\n@mkdir($temp, 0777, true);\n@file_put_contents($temp . '/' . md5_file(__FILE__), '');\n\nforeach ($info['m'] as $path => $file) {\n$a = !file_exists(dirname($temp . '/' . $path));\n@mkdir(dirname($temp . '/' . $path), 0777, true);\nclearstatcache();\n\nif ($path[strlen($path) - 1] == '/') {\n@mkdir($temp . '/' . $path, 0777);\n} else {\nfile_put_contents($temp . '/' . $path, self::extractFile($path, $file, $fp));\n@chmod($temp . '/' . $path, 0666);\n}\n}\n}\n\nchdir($temp);\n\nif (!$return) {\ninclude self::ST";
 static const char newstub3_1[] = "ART;\n}\n}\n\nstatic function tmpdir()\n{\nif (strpos(PHP_OS, 'WIN') !== false) {\nif ($var = getenv('TMP') ? getenv('TMP') : getenv('TEMP')) {\nreturn $var;\n}\nif (is_dir('/temp') || mkdir('/temp')) {\nreturn realpath('/temp');\n}\nreturn false;\n}\nif ($var = getenv('TMPDIR')) {\nreturn $var;\n}\nreturn realpath('/tmp');\n}\n\nstatic function _unpack($m)\n{\n$info = unpack('V', substr($m, 0, 4));\n $l = unpack('V', substr($m, 10, 4));\n$m = substr($m, 14 + $l[1]);\n$s = unpack('V', substr($m, 0, 4));\n$o = 0;\n$start = 4 + $s[1];\n$ret['c'] = 0;\n\nfor ($i = 0; $i < $info[1]; $i++) {\n $len = unpack('V', substr($m, $start, 4));\n$start += 4;\n $savepath = substr($m, $start, $len[1]);\n$start += $len[1];\n   $ret['m'][$savepath] = array_values(unpack('Va/Vb/Vc/Vd/Ve/Vf', substr($m, $start, 24)));\n$ret['m'][$savepath][3] = sprintf('%u', $ret['m'][$savepath][3]\n& 0xffffffff);\n$ret['m'][$savepath][7] = $o;\n$o += $ret['m'][$savepath][2];\n$start += 24 + $ret['m'][$savepath][5];\n$ret['c'] |= $ret['m'][$savepath][4] & self::MASK;\n}\nreturn $ret;\n}\n\nstatic function extractFile($path, $entry, $fp)\n{\n$data = '';\n$c = $entry[2];\n\nwhile ($c) {\nif ($c < 8192) {\n$data .= @fread($fp, $c);\n$c = 0;\n} else {\n$c -= 8192;\n$data .= @fread($fp, 8192);\n}\n}\n\nif ($entry[4] & self::GZ) {\n$data = gzinflate($data);\n} elseif ($entry[4] & self::BZ2) {\n$data = bzdecompress($data);\n}\n\nif (strlen($data) != $entry[0]) {\ndie(\"Invalid internal .phar file (size error \" . strlen($data) . \" != \" .\n$stat[7] . \")\");\n}\n\nif ($entry[3] != sprintf(\"%u\", crc32((binary)$data) & 0xffffffff)) {\ndie(\"Invalid internal .phar file (checksum error)\");\n}\n\nreturn $data;\n}\n\nstatic function _removeTmpFiles($temp, $origdir)\n{\nchdir($temp);\n\nforeach (glob('*') as $f) {\nif (file_exists($f)) {\nis_dir($f) ? @rmdir($f) : @unlink($f);\nif (file_exists($f) && is_dir($f)) {\nself::_removeTmpFiles($f, getcwd());\n}\n}\n}\n\n@rmdir($temp);\nclearstatcache();\nchdir($origdir);\n}\n}\n\nExtract_Phar::go();\n__HALT_COMPIL";
 static const char newstub3_2[] = "ER(); ?>";

 static const int newstub_len = 6665;

 *len = spprintf(stub, name_len + web_len + newstub_len, "%s%s%s%s%s%s%d%s%s%s", newstub0, web, newstub1_0, newstub1_1, index_php, newstub2, name_len + web_len + newstub_len, newstub3_0, newstub3_1, newstub3_2);
}
# 2511 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c" 2

char *phar_create_default_stub(const char *index_php, const char *web_index, size_t *len, char **error )
{
 char *stub = ((void *)0);
 int index_len, web_len;
 size_t dummy;

 if (!len) {
  len = &dummy;
 }

 if (error) {
  *error = ((void *)0);
 }

 if (!index_php) {
  index_php = "index.php";
 }

 if (!web_index) {
  web_index = "index.php";
 }

 index_len = strlen(index_php);
 web_len = strlen(web_index);

 if (index_len > 400) {

  if (error) {
   spprintf(error, 0, "Illegal filename passed in for stub creation, was %d characters long, and only 400 or less is allowed", index_len);
   return ((void *)0);
  }
 }

 if (web_len > 400) {

  if (error) {
   spprintf(error, 0, "Illegal web filename passed in for stub creation, was %d characters long, and only 400 or less is allowed", web_len);
   return ((void *)0);
  }
 }

 phar_get_stub(index_php, web_index, len, &stub, index_len+1, web_len+1 );
 return stub;
}
# 2564 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
int phar_flush(phar_archive_data *phar, char *user_stub, long len, int convert, char **error )
{
 char halt_stub[] = "__HALT_COMPILER();";
 char *newstub, *tmp;
 phar_entry_info *entry, *newentry;
 int halt_offset, restore_alias_len, global_flags = 0, closeoldfile;
 char *pos, has_dirs = 0;
 char manifest[18], entry_buffer[24];
 off_t manifest_ftell;
 long offset;
 size_t wrote;
 php_uint32 manifest_len, mytime, loc, new_manifest_count;
 php_uint32 newcrc32;
 php_stream *file, *oldfile, *newfile, *stubfile;
 php_stream_filter *filter;
 php_serialize_data_t metadata_hash;
 smart_str main_metadata_str = {0};
 int free_user_stub, free_fp = 1, free_ufp = 1;

 if (phar->is_persistent) {
  if (error) {
   spprintf(error, 0, "internal error: attempt to flush cached zip-based phar \"%s\"", phar->fname);
  }
  return (-1);
 }

 if (error) {
  *error = ((void *)0);
 }

 if (!zend_hash_num_elements(&phar->manifest) && !user_stub) {
  return (-1);
 }

 zend_hash_clean(&phar->virtual_dirs);

 if (phar->is_zip) {
  return phar_zip_flush(phar, user_stub, len, convert, error );
 }

 if (phar->is_tar) {
  return phar_tar_flush(phar, user_stub, len, convert, error );
 }

 if ((phar_globals.readonly)) {
  return (-1);
 }

 if (phar->fp && !phar->is_brandnew) {
  oldfile = phar->fp;
  closeoldfile = 0;
  _php_stream_seek((oldfile), 0L, 0 );
 } else {
  oldfile = _php_stream_open_wrapper_ex((phar->fname), ("rb"), (0), (((void *)0)), ((void *)0) );
  closeoldfile = oldfile != ((void *)0);
 }
 newfile = _php_stream_fopen_tmpfile(0 );
 if (!newfile) {
  if (error) {
   spprintf(error, 0, "unable to create temporary file");
  }
  if (closeoldfile) {
   _php_stream_free((oldfile), (1 | 2) );
  }
  return (-1);
 }

 if (user_stub) {
  if (len < 0) {

   if (!((stubfile) = (php_stream*)zend_fetch_resource(((zval **)user_stub) , -1, "stream", ((void *)0), 2, php_file_le_stream(), php_file_le_pstream()))) {
    if (closeoldfile) {
     _php_stream_free((oldfile), (1 | 2) );
    }
    _php_stream_free((newfile), (1 | 2) );
    if (error) {
     spprintf(error, 0, "unable to access resource to copy stub to new phar \"%s\"", phar->fname);
    }
    return (-1);
   }
   if (len == -1) {
    len = ((size_t)-1);
   } else {
    len = -len;
   }
   user_stub = 0;



   if (!(len = _php_stream_copy_to_mem((stubfile), (&user_stub), (len), (0) )) || !user_stub) {

    if (closeoldfile) {
     _php_stream_free((oldfile), (1 | 2) );
    }
    _php_stream_free((newfile), (1 | 2) );
    if (error) {
     spprintf(error, 0, "unable to read resource to copy stub to new phar \"%s\"", phar->fname);
    }
    return (-1);
   }
   free_user_stub = 1;
  } else {
   free_user_stub = 0;
  }
  tmp = _estrndup((user_stub), (len) );
  if ((pos = php_stristr(tmp, halt_stub, len, sizeof(halt_stub) - 1)) == ((void *)0)) {
   _efree((tmp) );
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }
   _php_stream_free((newfile), (1 | 2) );
   if (error) {
    spprintf(error, 0, "illegal stub for phar \"%s\"", phar->fname);
   }
   if (free_user_stub) {
    _efree((user_stub) );
   }
   return (-1);
  }
  pos = user_stub + (pos - tmp);
  _efree((tmp) );
  len = pos - user_stub + 18;
  if ((size_t)len != _php_stream_write(newfile, (user_stub), (len) )
  || 5 != _php_stream_write(newfile, (" ?>\r\n"), (5) )) {
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }
   _php_stream_free((newfile), (1 | 2) );
   if (error) {
    spprintf(error, 0, "unable to create stub from string in new phar \"%s\"", phar->fname);
   }
   if (free_user_stub) {
    _efree((user_stub) );
   }
   return (-1);
  }
  phar->halt_offset = len + 5;
  if (free_user_stub) {
   _efree((user_stub) );
  }
 } else {
  size_t written;

  if (!user_stub && phar->halt_offset && oldfile && !phar->is_brandnew) {
   _php_stream_copy_to_stream_ex((oldfile), (newfile), (phar->halt_offset), (&written) );
   newstub = ((void *)0);
  } else {

   newstub = phar_create_default_stub(((void *)0), ((void *)0), &(phar->halt_offset), ((void *)0) );
   written = _php_stream_write(newfile, (newstub), (phar->halt_offset) );
  }
  if (phar->halt_offset != written) {
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }
   _php_stream_free((newfile), (1 | 2) );
   if (error) {
    if (newstub) {
     spprintf(error, 0, "unable to create stub in new phar \"%s\"", phar->fname);
    } else {
     spprintf(error, 0, "unable to copy stub of old phar to new phar \"%s\"", phar->fname);
    }
   }
   if (newstub) {
    _efree((newstub) );
   }
   return (-1);
  }
  if (newstub) {
   _efree((newstub) );
  }
 }
 manifest_ftell = _php_stream_tell((newfile) );
 halt_offset = manifest_ftell;




 zend_hash_apply(&phar->manifest, phar_flush_clean_deleted_apply );


 main_metadata_str.c = 0;
 if (phar->metadata) {
  do { if ((basic_globals.serialize_lock) || !(basic_globals.serialize).level) { (metadata_hash) = (HashTable *) _emalloc((sizeof(HashTable)) ); _zend_hash_init(((metadata_hash)), (10), (((void *)0)), (((void *)0)), (0) ); if (!(basic_globals.serialize_lock)) { (basic_globals.serialize).var_hash = (metadata_hash); (basic_globals.serialize).level = 1; } } else { (metadata_hash) = (basic_globals.serialize).var_hash; ++(basic_globals.serialize).level; } } while(0);
  php_var_serialize(&main_metadata_str, &phar->metadata, &metadata_hash );
  do { if ((basic_globals.serialize_lock) || !(basic_globals.serialize).level) { zend_hash_destroy((metadata_hash)); _efree((metadata_hash) ); } else { if (!--(basic_globals.serialize).level) { zend_hash_destroy((basic_globals.serialize).var_hash); _efree(((basic_globals.serialize).var_hash) ); (basic_globals.serialize).var_hash = ((void *)0); } } } while (0);
 } else {
  main_metadata_str.len = 0;
 }
 new_manifest_count = 0;
 offset = 0;
 for (zend_hash_internal_pointer_reset_ex(&phar->manifest, ((void *)0));
  (zend_hash_get_current_key_type_ex(&phar->manifest, ((void *)0)) == 3 ? -1 : 0) == 0;
  zend_hash_move_forward_ex(&phar->manifest, ((void *)0))) {
  if (zend_hash_get_current_data_ex(&phar->manifest, (void **)&entry, ((void *)0)) == -1) {
   continue;
  }
  if (entry->cfp) {

   _php_stream_free((entry->cfp), (1 | 2) );
   entry->cfp = 0;
  }
  if (entry->is_deleted || entry->is_mounted) {

   continue;
  }
  if (!entry->is_modified && entry->fp_refcount) {

   switch (entry->fp_type) {
    case PHAR_FP:
     free_fp = 0;
     break;
    case PHAR_UFP:
     free_ufp = 0;
    default:
     break;
   }
  }

  ++new_manifest_count;
  phar_add_virtual_dirs(phar, entry->filename, entry->filename_len );

  if (entry->is_dir) {

   has_dirs = 1;
  }
  if (entry->metadata) {
   if (entry->metadata_str.c) {
    do { smart_str *__s = (smart_str *) ((&entry->metadata_str)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void *)0); } __s->a = __s->len = 0; } while (0);
   }
   entry->metadata_str.c = 0;
   entry->metadata_str.len = 0;
   do { if ((basic_globals.serialize_lock) || !(basic_globals.serialize).level) { (metadata_hash) = (HashTable *) _emalloc((sizeof(HashTable)) ); _zend_hash_init(((metadata_hash)), (10), (((void *)0)), (((void *)0)), (0) ); if (!(basic_globals.serialize_lock)) { (basic_globals.serialize).var_hash = (metadata_hash); (basic_globals.serialize).level = 1; } } else { (metadata_hash) = (basic_globals.serialize).var_hash; ++(basic_globals.serialize).level; } } while(0);
   php_var_serialize(&entry->metadata_str, &entry->metadata, &metadata_hash );
   do { if ((basic_globals.serialize_lock) || !(basic_globals.serialize).level) { zend_hash_destroy((metadata_hash)); _efree((metadata_hash) ); } else { if (!--(basic_globals.serialize).level) { zend_hash_destroy((basic_globals.serialize).var_hash); _efree(((basic_globals.serialize).var_hash) ); (basic_globals.serialize).var_hash = ((void *)0); } } } while (0);
  } else {
   if (entry->metadata_str.c) {
    do { smart_str *__s = (smart_str *) ((&entry->metadata_str)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void *)0); } __s->a = __s->len = 0; } while (0);
   }
   entry->metadata_str.c = 0;
   entry->metadata_str.len = 0;
  }


  offset += 4 + entry->filename_len + sizeof(entry_buffer) + entry->metadata_str.len + (entry->is_dir ? 1 : 0);


  if ((oldfile && !entry->is_modified) || entry->is_dir) {
   if (entry->fp_type == PHAR_UFP) {

    entry->fp_type = PHAR_FP;
   }
   continue;
  }
  if (!phar_get_efp(entry, 0 )) {

   newentry = phar_open_jit(phar, entry, error );
   if (!newentry) {

    _efree((*error) );
    *error = ((void *)0);
    continue;
   }
   entry = newentry;
  }
  file = phar_get_efp(entry, 0 );
  if (-1 == phar_seek_efp(entry, 0, 0, 0, 1 )) {
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }
   _php_stream_free((newfile), (1 | 2) );
   if (error) {
    spprintf(error, 0, "unable to seek to start of file \"%s\" while creating new phar \"%s\"", entry->filename, phar->fname);
   }
   return (-1);
  }
  newcrc32 = ~0;
  mytime = entry->uncompressed_filesize;
  for (loc = 0;loc < mytime; ++loc) {
   (newcrc32 = (newcrc32 >> 8) ^ crc32tab[(newcrc32 ^ (_php_stream_getc((file) ))) & 0xff]);
  }
  entry->crc32 = ~newcrc32;
  entry->is_crc_checked = 1;
  if (!(entry->flags & 0x0000F000)) {

   entry->compressed_filesize = entry->uncompressed_filesize;
   continue;
  }
  filter = php_stream_filter_create(phar_compress_filter(entry, 0), ((void *)0), 0 );
  if (!filter) {
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }
   _php_stream_free((newfile), (1 | 2) );
   if (entry->flags & 0x00001000) {
    if (error) {
     spprintf(error, 0, "unable to gzip compress file \"%s\" to new phar \"%s\"", entry->filename, phar->fname);
    }
   } else {
    if (error) {
     spprintf(error, 0, "unable to bzip2 compress file \"%s\" to new phar \"%s\"", entry->filename, phar->fname);
    }
   }
   return (-1);
  }




  entry->cfp = _php_stream_fopen_tmpfile(0 );
  if (!entry->cfp) {
   if (error) {
    spprintf(error, 0, "unable to create temporary file");
   }
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }
   _php_stream_free((newfile), (1 | 2) );
   return (-1);
  }
  _php_stream_flush((file), 0 );
  if (-1 == phar_seek_efp(entry, 0, 0, 0, 0 )) {
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }
   _php_stream_free((newfile), (1 | 2) );
   if (error) {
    spprintf(error, 0, "unable to seek to start of file \"%s\" while creating new phar \"%s\"", entry->filename, phar->fname);
   }
   return (-1);
  }
  _php_stream_filter_append(((&entry->cfp->writefilters)), (filter) );
  if (0 != _php_stream_copy_to_stream_ex((file), (entry->cfp), (entry->uncompressed_filesize), (((void *)0)) )) {
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }
   _php_stream_free((newfile), (1 | 2) );
   if (error) {
    spprintf(error, 0, "unable to copy compressed file contents of file \"%s\" while creating new phar \"%s\"", entry->filename, phar->fname);
   }
   return (-1);
  }
  _php_stream_filter_flush((filter), (1) );
  _php_stream_flush((entry->cfp), 0 );
  php_stream_filter_remove(filter, 1 );
  _php_stream_seek((entry->cfp), (0), (2) );
  entry->compressed_filesize = (php_uint32) _php_stream_tell((entry->cfp) );

  _php_stream_seek((entry->cfp), 0L, 0 );
  entry->old_flags = entry->flags;
  entry->is_modified = 1;
  global_flags |= (entry->flags & 0x0000F000);
 }
 global_flags |= 0x00010000;
# 2929 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
 restore_alias_len = phar->alias_len;
 if (phar->is_temporary_alias) {
  phar->alias_len = 0;
 }

 manifest_len = offset + phar->alias_len + sizeof(manifest) + main_metadata_str.len;
 phar_set_32(manifest, manifest_len);
 phar_set_32(manifest+4, new_manifest_count);
 if (has_dirs) {
  *(manifest + 8) = (unsigned char) (((0x1110) >> 8) & 0xFF);
  *(manifest + 9) = (unsigned char) (((0x1110) & 0xF0));
 } else {
  *(manifest + 8) = (unsigned char) (((0x1100) >> 8) & 0xFF);
  *(manifest + 9) = (unsigned char) (((0x1100) & 0xF0));
 }
 phar_set_32(manifest+10, global_flags);
 phar_set_32(manifest+14, phar->alias_len);


 if (sizeof(manifest) != _php_stream_write(newfile, (manifest), (sizeof(manifest)) )
 || (size_t)phar->alias_len != _php_stream_write(newfile, (phar->alias), (phar->alias_len) )) {

  if (closeoldfile) {
   _php_stream_free((oldfile), (1 | 2) );
  }

  _php_stream_free((newfile), (1 | 2) );
  phar->alias_len = restore_alias_len;

  if (error) {
   spprintf(error, 0, "unable to write manifest header of new phar \"%s\"", phar->fname);
  }

  return (-1);
 }

 phar->alias_len = restore_alias_len;

 phar_set_32(manifest, main_metadata_str.len);
 if (4 != _php_stream_write(newfile, (manifest), (4) ) || (main_metadata_str.len
 && main_metadata_str.len != _php_stream_write(newfile, (main_metadata_str.c), (main_metadata_str.len) ))) {
  do { smart_str *__s = (smart_str *) ((&main_metadata_str)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void *)0); } __s->a = __s->len = 0; } while (0);

  if (closeoldfile) {
   _php_stream_free((oldfile), (1 | 2) );
  }

  _php_stream_free((newfile), (1 | 2) );
  phar->alias_len = restore_alias_len;

  if (error) {
   spprintf(error, 0, "unable to write manifest meta-data of new phar \"%s\"", phar->fname);
  }

  return (-1);
 }
 do { smart_str *__s = (smart_str *) ((&main_metadata_str)); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void *)0); } __s->a = __s->len = 0; } while (0);


 manifest_ftell = _php_stream_tell((newfile) );


 for (zend_hash_internal_pointer_reset_ex(&phar->manifest, ((void *)0));
  (zend_hash_get_current_key_type_ex(&phar->manifest, ((void *)0)) == 3 ? -1 : 0) == 0;
  zend_hash_move_forward_ex(&phar->manifest, ((void *)0))) {

  if (zend_hash_get_current_data_ex(&phar->manifest, (void **)&entry, ((void *)0)) == -1) {
   continue;
  }

  if (entry->is_deleted || entry->is_mounted) {

   continue;
  }

  if (entry->is_dir) {

   phar_set_32(entry_buffer, entry->filename_len + 1);
  } else {
   phar_set_32(entry_buffer, entry->filename_len);
  }

  if (4 != _php_stream_write(newfile, (entry_buffer), (4) )
  || entry->filename_len != _php_stream_write(newfile, (entry->filename), (entry->filename_len) )
  || (entry->is_dir && 1 != _php_stream_write(newfile, ("/"), (1) ))) {
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }
   _php_stream_free((newfile), (1 | 2) );
   if (error) {
    if (entry->is_dir) {
     spprintf(error, 0, "unable to write filename of directory \"%s\" to manifest of new phar \"%s\"", entry->filename, phar->fname);
    } else {
     spprintf(error, 0, "unable to write filename of file \"%s\" to manifest of new phar \"%s\"", entry->filename, phar->fname);
    }
   }
   return (-1);
  }
# 3037 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
  mytime = time(((void *)0));
  phar_set_32(entry_buffer, entry->uncompressed_filesize);
  phar_set_32(entry_buffer+4, mytime);
  phar_set_32(entry_buffer+8, entry->compressed_filesize);
  phar_set_32(entry_buffer+12, entry->crc32);
  phar_set_32(entry_buffer+16, entry->flags);
  phar_set_32(entry_buffer+20, entry->metadata_str.len);

  if (sizeof(entry_buffer) != _php_stream_write(newfile, (entry_buffer), (sizeof(entry_buffer)) )
  || entry->metadata_str.len != _php_stream_write(newfile, (entry->metadata_str.c), (entry->metadata_str.len) )) {
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }

   _php_stream_free((newfile), (1 | 2) );

   if (error) {
    spprintf(error, 0, "unable to write temporary manifest of file \"%s\" to manifest of new phar \"%s\"", entry->filename, phar->fname);
   }

   return (-1);
  }
 }


 offset = _php_stream_tell((newfile) );
 for (zend_hash_internal_pointer_reset_ex(&phar->manifest, ((void *)0));
  (zend_hash_get_current_key_type_ex(&phar->manifest, ((void *)0)) == 3 ? -1 : 0) == 0;
  zend_hash_move_forward_ex(&phar->manifest, ((void *)0))) {

  if (zend_hash_get_current_data_ex(&phar->manifest, (void **)&entry, ((void *)0)) == -1) {
   continue;
  }

  if (entry->is_deleted || entry->is_dir || entry->is_mounted) {
   continue;
  }

  if (entry->cfp) {
   file = entry->cfp;
   _php_stream_seek((file), 0L, 0 );
  } else {
   file = phar_get_efp(entry, 0 );
   if (-1 == phar_seek_efp(entry, 0, 0, 0, 0 )) {
    if (closeoldfile) {
     _php_stream_free((oldfile), (1 | 2) );
    }
    _php_stream_free((newfile), (1 | 2) );
    if (error) {
     spprintf(error, 0, "unable to seek to start of file \"%s\" while creating new phar \"%s\"", entry->filename, phar->fname);
    }
    return (-1);
   }
  }

  if (!file) {
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }
   _php_stream_free((newfile), (1 | 2) );
   if (error) {
    spprintf(error, 0, "unable to seek to start of file \"%s\" while creating new phar \"%s\"", entry->filename, phar->fname);
   }
   return (-1);
  }


  entry->offset = entry->offset_abs = offset;
  offset += entry->compressed_filesize;
  if (_php_stream_copy_to_stream_ex((file), (newfile), (entry->compressed_filesize), (&wrote) ) == -1) {
   if (closeoldfile) {
    _php_stream_free((oldfile), (1 | 2) );
   }

   _php_stream_free((newfile), (1 | 2) );

   if (error) {
    spprintf(error, 0, "unable to write contents of file \"%s\" to new phar \"%s\"", entry->filename, phar->fname);
   }

   return (-1);
  }

  entry->is_modified = 0;

  if (entry->cfp) {
   _php_stream_free((entry->cfp), (1 | 2) );
   entry->cfp = ((void *)0);
  }

  if (entry->fp_type == PHAR_MOD) {

   if (entry->fp_refcount == 0 && entry->fp != phar->fp && entry->fp != phar->ufp) {
    _php_stream_free((entry->fp), (1 | 2) );
   }

   entry->fp = ((void *)0);
   entry->fp_type = PHAR_FP;
  } else if (entry->fp_type == PHAR_UFP) {
   entry->fp_type = PHAR_FP;
  }
 }


 if (global_flags & 0x00010000) {
  char sig_buf[4];

  _php_stream_seek((newfile), 0L, 0 );

  if (phar->signature) {
   _efree((phar->signature) );
   phar->signature = ((void *)0);
  }

  switch(phar->sig_flags) {
# 3164 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
   default: {
    char *digest = ((void *)0);
    int digest_len;

    if (-1 == phar_create_signature(phar, newfile, &digest, &digest_len, error )) {
     if (error) {
      char *save = *error;
      spprintf(error, 0, "phar error: unable to write signature: %s", save);
      _efree((save) );
     }
     if (digest) {
      _efree((digest) );
     }
     if (closeoldfile) {
      _php_stream_free((oldfile), (1 | 2) );
     }
     _php_stream_free((newfile), (1 | 2) );
     return (-1);
    }

    _php_stream_write(newfile, (digest), (digest_len) );
    _efree((digest) );
    if (phar->sig_flags == 0x0010) {
     phar_set_32(sig_buf, digest_len);
     _php_stream_write(newfile, (sig_buf), (4) );
    }
    break;
   }
  }
  phar_set_32(sig_buf, phar->sig_flags);
  _php_stream_write(newfile, (sig_buf), (4) );
  _php_stream_write(newfile, ("GBMB"), (4) );
 }




 if (phar->fp && free_fp) {
  _php_stream_free((phar->fp), (1 | 2) );
 }

 if (phar->ufp) {
  if (free_ufp) {
   _php_stream_free((phar->ufp), (1 | 2) );
  }
  phar->ufp = ((void *)0);
 }

 if (closeoldfile) {
  _php_stream_free((oldfile), (1 | 2) );
 }

 phar->internal_file_start = halt_offset + manifest_len + 4;
 phar->halt_offset = halt_offset;
 phar->is_brandnew = 0;

 _php_stream_seek((newfile), 0L, 0 );

 if (phar->donotflush) {

  phar->fp = newfile;
 } else {
  phar->fp = _php_stream_open_wrapper_ex((phar->fname), ("w+b"), (0x00000002|0x00000010|0x00000008), (((void *)0)), ((void *)0) );
  if (!phar->fp) {
   phar->fp = newfile;
   if (error) {
    spprintf(error, 4096, "unable to open new phar \"%s\" for writing", phar->fname);
   }
   return (-1);
  }

  if (phar->flags & 0x00100000) {

   zval filterparams;

   _array_init((&filterparams), 0 );
   add_assoc_long_ex(&filterparams, "window", strlen("window")+1, 15 +16);
   filter = php_stream_filter_create("zlib.deflate", &filterparams, (phar->fp)->is_persistent );
   _zval_dtor((&filterparams) );

   if (!filter) {
    if (error) {
     spprintf(error, 4096, "unable to compress all contents of phar \"%s\" using zlib, PHP versions older than 5.2.6 have a buggy zlib", phar->fname);
    }
    return (-1);
   }

   _php_stream_filter_append((&phar->fp->writefilters), (filter) );
   _php_stream_copy_to_stream_ex((newfile), (phar->fp), (((size_t)-1)), (((void *)0)) );
   _php_stream_filter_flush((filter), (1) );
   php_stream_filter_remove(filter, 1 );
   _php_stream_free((phar->fp), (1 | 2) );

   phar->fp = newfile;
  } else if (phar->flags & 0x00200000) {
   filter = php_stream_filter_create("bzip2.compress", ((void *)0), (phar->fp)->is_persistent );
   _php_stream_filter_append((&phar->fp->writefilters), (filter) );
   _php_stream_copy_to_stream_ex((newfile), (phar->fp), (((size_t)-1)), (((void *)0)) );
   _php_stream_filter_flush((filter), (1) );
   php_stream_filter_remove(filter, 1 );
   _php_stream_free((phar->fp), (1 | 2) );

   phar->fp = newfile;
  } else {
   _php_stream_copy_to_stream_ex((newfile), (phar->fp), (((size_t)-1)), (((void *)0)) );

   _php_stream_free((newfile), (1 | 2) );
  }
 }

 if (-1 == _php_stream_seek((phar->fp), (phar->halt_offset), (0) )) {
  if (error) {
   spprintf(error, 0, "unable to seek to __HALT_COMPILER(); in new phar \"%s\"", phar->fname);
  }
  return (-1);
 }

 return (-1);
}
# 3293 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
zend_function_entry phar_functions[] = {
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};


static size_t phar_zend_stream_reader(void *handle, char *buf, size_t len )
{
 return _php_stream_read((phar_get_pharfp((phar_archive_data*)handle )), (buf), (len) );
}



static size_t phar_zend_stream_fsizer(void *handle )
{
 return ((phar_archive_data*)handle)->halt_offset + 32;
}
# 3319 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
zend_op_array *(*phar_orig_compile_file)(zend_file_handle *file_handle, int type );


static char *phar_resolve_path(const char *filename, int filename_len )
{
 return phar_find_in_include_path((char *) filename, filename_len, ((void *)0) );
}




static zend_op_array *phar_compile_file(zend_file_handle *file_handle, int type )
{
 zend_op_array *res;
 char *name = ((void *)0);
 int failed;
 phar_archive_data *phar;

 if (!file_handle || !file_handle->filename) {
  return phar_orig_compile_file(file_handle, type );
 }
 if (strstr(file_handle->filename, ".phar") && !strstr(file_handle->filename, "://")) {
  if (0 == phar_open_from_filename((char*)file_handle->filename, strlen(file_handle->filename), ((void *)0), 0, 0, &phar, ((void *)0) )) {
   if (phar->is_zip || phar->is_tar) {
    zend_file_handle f = *file_handle;


    spprintf(&name, 4096, "phar://%s/%s", file_handle->filename, ".phar/stub.php");
    if (0 == zend_stream_open_function((const char *)name, file_handle )) {
     _efree((name) );
     name = ((void *)0);
     file_handle->filename = f.filename;
     if (file_handle->opened_path) {
      _efree((file_handle->opened_path) );
     }
     file_handle->opened_path = f.opened_path;
     file_handle->free_filename = f.free_filename;
    } else {
     *file_handle = f;
    }
   } else if (phar->flags & 0x00F00000) {


    file_handle->type = ZEND_HANDLE_STREAM;

    file_handle->handle.stream.handle = phar;
    file_handle->handle.stream.reader = phar_zend_stream_reader;
    file_handle->handle.stream.closer = ((void *)0);
    file_handle->handle.stream.fsizer = phar_zend_stream_fsizer;
    file_handle->handle.stream.isatty = 0;
    phar->is_persistent ?
     _php_stream_seek(((&phar_globals)->cached_fp[phar->phar_pos].fp), 0L, 0 ) :
     _php_stream_seek((phar->fp), 0L, 0 );
    memset(&file_handle->handle.stream.mmap, 0, sizeof(file_handle->handle.stream.mmap));
# 3385 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
   }
  }
 }

 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
  failed = 0;
  res = phar_orig_compile_file(file_handle, type );
 } } else { (executor_globals.bailout) = __orig_bailout; {
  failed = 1;
  res = ((void *)0);
 } } (executor_globals.bailout) = __orig_bailout; };

 if (name) {
  _efree((name) );
 }

 if (failed) {
  _zend_bailout("/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c", 3402);
 }

 return res;
}
# 3463 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-19-eeba0b5681-d3b20b4058/php/ext/phar/phar.c"
typedef zend_op_array* (zend_compile_t)(zend_file_handle*, int );
typedef zend_compile_t* (compile_hook)(zend_compile_t *ptr);

void zm_globals_ctor_phar(zend_phar_globals *phar_globals )
{
 phar_mime_type mime;

 memset(phar_globals, 0, sizeof(zend_phar_globals));
 phar_globals->readonly = 1;

 _zend_hash_init((&phar_globals->mime_types), (0), (((void *)0)), (((void *)0)), (1) );







 mime.mime = "text/html"; mime.len = sizeof(("text/html"))+1; mime.type = '\1'; _zend_hash_add_or_update(&phar_globals->mime_types, "phps", sizeof("phps")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/plain"; mime.len = sizeof(("text/plain"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "c", sizeof("c")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/plain"; mime.len = sizeof(("text/plain"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "cc", sizeof("cc")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/plain"; mime.len = sizeof(("text/plain"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "cpp", sizeof("cpp")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/plain"; mime.len = sizeof(("text/plain"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "c++", sizeof("c++")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/plain"; mime.len = sizeof(("text/plain"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "dtd", sizeof("dtd")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/plain"; mime.len = sizeof(("text/plain"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "h", sizeof("h")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/plain"; mime.len = sizeof(("text/plain"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "log", sizeof("log")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/plain"; mime.len = sizeof(("text/plain"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "rng", sizeof("rng")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/plain"; mime.len = sizeof(("text/plain"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "txt", sizeof("txt")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/plain"; mime.len = sizeof(("text/plain"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "xsd", sizeof("xsd")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = ""; mime.len = sizeof((""))+1; mime.type = '\0'; _zend_hash_add_or_update(&phar_globals->mime_types, "php", sizeof("php")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = ""; mime.len = sizeof((""))+1; mime.type = '\0'; _zend_hash_add_or_update(&phar_globals->mime_types, "inc", sizeof("inc")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "video/avi"; mime.len = sizeof(("video/avi"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "avi", sizeof("avi")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "image/bmp"; mime.len = sizeof(("image/bmp"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "bmp", sizeof("bmp")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/css"; mime.len = sizeof(("text/css"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "css", sizeof("css")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "image/gif"; mime.len = sizeof(("image/gif"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "gif", sizeof("gif")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/html"; mime.len = sizeof(("text/html"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "htm", sizeof("htm")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/html"; mime.len = sizeof(("text/html"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "html", sizeof("html")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/html"; mime.len = sizeof(("text/html"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "htmls", sizeof("htmls")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "image/x-ico"; mime.len = sizeof(("image/x-ico"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "ico", sizeof("ico")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "image/jpeg"; mime.len = sizeof(("image/jpeg"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "jpe", sizeof("jpe")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "image/jpeg"; mime.len = sizeof(("image/jpeg"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "jpg", sizeof("jpg")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "image/jpeg"; mime.len = sizeof(("image/jpeg"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "jpeg", sizeof("jpeg")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "application/x-javascript"; mime.len = sizeof(("application/x-javascript"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "js", sizeof("js")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "audio/midi"; mime.len = sizeof(("audio/midi"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "midi", sizeof("midi")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "audio/midi"; mime.len = sizeof(("audio/midi"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "mid", sizeof("mid")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "audio/mod"; mime.len = sizeof(("audio/mod"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "mod", sizeof("mod")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "movie/quicktime"; mime.len = sizeof(("movie/quicktime"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "mov", sizeof("mov")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "audio/mp3"; mime.len = sizeof(("audio/mp3"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "mp3", sizeof("mp3")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "video/mpeg"; mime.len = sizeof(("video/mpeg"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "mpg", sizeof("mpg")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "video/mpeg"; mime.len = sizeof(("video/mpeg"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "mpeg", sizeof("mpeg")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "application/pdf"; mime.len = sizeof(("application/pdf"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "pdf", sizeof("pdf")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "image/png"; mime.len = sizeof(("image/png"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "png", sizeof("png")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "application/shockwave-flash"; mime.len = sizeof(("application/shockwave-flash"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "swf", sizeof("swf")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "image/tiff"; mime.len = sizeof(("image/tiff"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "tif", sizeof("tif")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "image/tiff"; mime.len = sizeof(("image/tiff"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "tiff", sizeof("tiff")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "audio/wav"; mime.len = sizeof(("audio/wav"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "wav", sizeof("wav")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "image/xbm"; mime.len = sizeof(("image/xbm"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "xbm", sizeof("xbm")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );
 mime.mime = "text/xml"; mime.len = sizeof(("text/xml"))+1; mime.type = '\2'; _zend_hash_add_or_update(&phar_globals->mime_types, "xml", sizeof("xml")-1, (void *)&mime, sizeof(phar_mime_type), ((void *)0), (1<<1) );

 phar_restore_orig_functions();
}


void zm_globals_dtor_phar(zend_phar_globals *phar_globals )
{
 zend_hash_destroy(&phar_globals->mime_types);
}


int zm_startup_phar(int type, int module_number )
{
 zend_register_ini_entries(ini_entries, module_number );

 phar_orig_compile_file = zend_compile_file;
 zend_compile_file = phar_compile_file;


 phar_save_resolve_path = zend_resolve_path;
 zend_resolve_path = phar_resolve_path;





 phar_object_init();

 phar_intercept_functions_init();
 phar_save_orig_functions();

 return php_register_url_stream_wrapper("phar", &php_stream_phar_wrapper );
}


int zm_shutdown_phar(int type, int module_number )
{
 php_unregister_url_stream_wrapper("phar" );

 phar_intercept_functions_shutdown();

 if (zend_compile_file == phar_compile_file) {
  zend_compile_file = phar_orig_compile_file;
 }






 if ((phar_globals.manifest_cached)) {
  zend_hash_destroy(&(cached_phars));
  zend_hash_destroy(&(cached_alias));
 }

 return 0;
}


void phar_request_initialize(void)
{
 if (!(&phar_globals)->request_init)
 {
  (phar_globals.last_phar) = ((void *)0);
  (phar_globals.last_phar_name) = (phar_globals.last_alias) = ((void *)0);
  (phar_globals.has_bz2) = zend_hash_exists(&module_registry, "bz2", sizeof("bz2"));
  (phar_globals.has_zlib) = zend_hash_exists(&module_registry, "zlib", sizeof("zlib"));
  (&phar_globals)->request_init = 1;
  (&phar_globals)->request_ends = 0;
  (&phar_globals)->request_done = 0;
  _zend_hash_init((&((&phar_globals)->phar_fname_map)), (5), (zend_get_hash_value), (destroy_phar_data), (0) );
  _zend_hash_init((&((&phar_globals)->phar_persist_map)), (5), (zend_get_hash_value), (((void *)0)), (0) );
  _zend_hash_init((&((&phar_globals)->phar_alias_map)), (5), (zend_get_hash_value), (((void *)0)), (0) );

  if ((phar_globals.manifest_cached)) {
   phar_archive_data **pphar;
   phar_entry_fp *stuff = (phar_entry_fp *) _ecalloc((zend_hash_num_elements(&cached_phars)), (sizeof(phar_entry_fp)) );

   for (zend_hash_internal_pointer_reset_ex(&cached_phars, ((void *)0));
   zend_hash_get_current_data_ex(&cached_phars, (void **)&pphar, ((void *)0)) == 0;
   zend_hash_move_forward_ex(&cached_phars, ((void *)0))) {
    stuff[pphar[0]->phar_pos].manifest = (phar_entry_fp_info *) _ecalloc((zend_hash_num_elements(&(pphar[0]->manifest))), (sizeof(phar_entry_fp_info)) );
   }

   (&phar_globals)->cached_fp = stuff;
  }

  (&phar_globals)->phar_SERVER_mung_list = 0;
  (phar_globals.cwd) = ((void *)0);
  (phar_globals.cwd_len) = 0;
  (phar_globals.cwd_init) = 0;
 }
}


int zm_deactivate_phar(int type, int module_number )
{
 int i;

 (&phar_globals)->request_ends = 1;

 if ((&phar_globals)->request_init)
 {
  phar_release_functions();
  zend_hash_destroy(&((&phar_globals)->phar_alias_map));
  (&phar_globals)->phar_alias_map.arBuckets = ((void *)0);
  zend_hash_destroy(&((&phar_globals)->phar_fname_map));
  (&phar_globals)->phar_fname_map.arBuckets = ((void *)0);
  zend_hash_destroy(&((&phar_globals)->phar_persist_map));
  (&phar_globals)->phar_persist_map.arBuckets = ((void *)0);
  (&phar_globals)->phar_SERVER_mung_list = 0;

  if ((&phar_globals)->cached_fp) {
   for (i = 0; i < zend_hash_num_elements(&cached_phars); ++i) {
    if ((&phar_globals)->cached_fp[i].fp) {
     _php_stream_free(((&phar_globals)->cached_fp[i].fp), (1 | 2) );
    }
    if ((&phar_globals)->cached_fp[i].ufp) {
     _php_stream_free(((&phar_globals)->cached_fp[i].ufp), (1 | 2) );
    }
    _efree(((&phar_globals)->cached_fp[i].manifest) );
   }
   _efree(((&phar_globals)->cached_fp) );
   (&phar_globals)->cached_fp = 0;
  }

  (&phar_globals)->request_init = 0;

  if ((phar_globals.cwd)) {
   _efree(((phar_globals.cwd)) );
  }

  (phar_globals.cwd) = ((void *)0);
  (phar_globals.cwd_len) = 0;
  (phar_globals.cwd_init) = 0;
 }

 (&phar_globals)->request_done = 1;
 return 0;
}


void zm_info_phar(zend_module_entry *zend_module )
{
 phar_request_initialize();
 php_info_print_table_start();
 php_info_print_table_header(2, "Phar: PHP Archive support", "enabled");
 php_info_print_table_row(2, "Phar EXT version", "2.0.1");
 php_info_print_table_row(2, "Phar API version", "1.1.1");
 php_info_print_table_row(2, "SVN revision", "$Revision$");
 php_info_print_table_row(2, "Phar-based phar archives", "enabled");
 php_info_print_table_row(2, "Tar-based phar archives", "enabled");
 php_info_print_table_row(2, "ZIP-based phar archives", "enabled");

 if ((phar_globals.has_zlib)) {
  php_info_print_table_row(2, "gzip compression", "enabled");
 } else {
  php_info_print_table_row(2, "gzip compression", "disabled (install ext/zlib)");
 }

 if ((phar_globals.has_bz2)) {
  php_info_print_table_row(2, "bzip2 compression", "enabled");
 } else {
  php_info_print_table_row(2, "bzip2 compression", "disabled (install pecl/bz2)");
 }



 if (zend_hash_exists(&module_registry, "openssl", sizeof("openssl"))) {
  php_info_print_table_row(2, "OpenSSL support", "enabled");
 } else {
  php_info_print_table_row(2, "OpenSSL support", "disabled (install ext/openssl)");
 }

 php_info_print_table_end();

 php_info_print_box_start(0);
 do { const char *__str = ("Phar based on pear/PHP_Archive, original concept by Davey Shafik."); php_output_write(__str, strlen(__str) ); } while (0);
 do { const char *__str = (!sapi_module.phpinfo_as_text?"<br />":"\n"); php_output_write(__str, strlen(__str) ); } while (0);
 do { const char *__str = ("Phar fully realized by Gregory Beaver and Marcus Boerger."); php_output_write(__str, strlen(__str) ); } while (0);
 do { const char *__str = (!sapi_module.phpinfo_as_text?"<br />":"\n"); php_output_write(__str, strlen(__str) ); } while (0);
 do { const char *__str = ("Portions of tar implementation Copyright (c) 2003-2009 Tim Kientzle."); php_output_write(__str, strlen(__str) ); } while (0);
 php_info_print_box_end();

 display_ini_entries(zend_module);
}




static const zend_module_dep phar_deps[] = {
 { "apc", ((void *)0), ((void *)0), 3 },
 { "bz2", ((void *)0), ((void *)0), 3 },
 { "openssl", ((void *)0), ((void *)0), 3 },
 { "zlib", ((void *)0), ((void *)0), 3 },
 { "standard", ((void *)0), ((void *)0), 3 },




 { "spl", ((void *)0), ((void *)0), 1 },

 { ((void *)0), ((void *)0), ((void *)0), 0 }
};

zend_module_entry phar_module_entry = {
 sizeof(zend_module_entry), 20100525, 0, 0, ((void *)0),
 phar_deps,
 "Phar",
 phar_functions,
 zm_startup_phar,
 zm_shutdown_phar,
 ((void *)0),
 zm_deactivate_phar,
 zm_info_phar,
 "2.0.1",
 sizeof(zend_phar_globals), &phar_globals,
 ((void (*)(void* ))(zm_globals_ctor_phar)),
 ((void (*)(void* ))(zm_globals_dtor_phar)),
 ((void *)0),
 0, 0, ((void *)0), 0, "API" "20100525" ",NTS"
};
