# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/parse_date.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/parse_date.c"
# 1 "ext/date/lib/parse_date.re"
# 21 "ext/date/lib/parse_date.re"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib_structs.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib_structs.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib_config.h" 1



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/main/php_config.h" 1
# 2423 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/main/php_config.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
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
# 26 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
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

# 236 "/usr/include/stdlib.h" 3 4
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
# 237 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;





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
# 31 "/usr/include/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





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





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





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
# 263 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





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
# 528 "/usr/include/stdlib.h" 3 4
extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void quick_exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







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
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (__const char *__command) ;






extern char *canonicalize_file_name (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




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





extern void setkey (__const char *__key) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__)) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4

# 2424 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/main/php_config.h" 2
# 2439 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/main/php_config.h"
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


# 109 "/usr/include/string.h" 3 4
extern void *rawmemchr (__const void *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 120 "/usr/include/string.h" 3 4
extern void *memrchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






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


# 276 "/usr/include/string.h" 3 4
extern char *strchrnul (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));






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
# 373 "/usr/include/string.h" 3 4
extern char *strcasestr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





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




extern int ffsl (long int __l) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





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




extern int strverscmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 606 "/usr/include/string.h" 3 4
extern char *basename (__const char *__filename) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
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

# 2440 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/main/php_config.h" 2
# 2450 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/main/php_config.h"
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




extern void sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__)); extern void __sincos (double __x, double *__sinx, double *__cosx) __attribute__ ((__nothrow__))
                                                           ;





extern double acosh (double __x) __attribute__ ((__nothrow__)); extern double __acosh (double __x) __attribute__ ((__nothrow__));

extern double asinh (double __x) __attribute__ ((__nothrow__)); extern double __asinh (double __x) __attribute__ ((__nothrow__));

extern double atanh (double __x) __attribute__ ((__nothrow__)); extern double __atanh (double __x) __attribute__ ((__nothrow__));







extern double exp (double __x) __attribute__ ((__nothrow__)); extern double __exp (double __x) __attribute__ ((__nothrow__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__));


extern double log (double __x) __attribute__ ((__nothrow__)); extern double __log (double __x) __attribute__ ((__nothrow__));


extern double log10 (double __x) __attribute__ ((__nothrow__)); extern double __log10 (double __x) __attribute__ ((__nothrow__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__));




extern double exp10 (double __x) __attribute__ ((__nothrow__)); extern double __exp10 (double __x) __attribute__ ((__nothrow__));

extern double pow10 (double __x) __attribute__ ((__nothrow__)); extern double __pow10 (double __x) __attribute__ ((__nothrow__));





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




extern void
 sincosf
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__)); extern void
 __sincosf
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (float __x, float *__sinx, float *__cosx) __attribute__ ((__nothrow__))
                                                           ;





extern float acoshf (float __x) __attribute__ ((__nothrow__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__));

extern float asinhf (float __x) __attribute__ ((__nothrow__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__));

extern float atanhf (float __x) __attribute__ ((__nothrow__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__));







extern float expf (float __x) __attribute__ ((__nothrow__)); extern float __expf (float __x) __attribute__ ((__nothrow__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__));


extern float logf (float __x) __attribute__ ((__nothrow__)); extern float __logf (float __x) __attribute__ ((__nothrow__));


extern float log10f (float __x) __attribute__ ((__nothrow__)); extern float __log10f (float __x) __attribute__ ((__nothrow__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__));




extern float exp10f (float __x) __attribute__ ((__nothrow__)); extern float __exp10f (float __x) __attribute__ ((__nothrow__));

extern float pow10f (float __x) __attribute__ ((__nothrow__)); extern float __pow10f (float __x) __attribute__ ((__nothrow__));





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




extern void
 sincosl
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__)); extern void
 __sincosl
# 82 "/usr/include/bits/mathcalls.h" 3 4
 (long double __x, long double *__sinx, long double *__cosx) __attribute__ ((__nothrow__))
                                                           ;





extern long double acoshl (long double __x) __attribute__ ((__nothrow__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__));







extern long double expl (long double __x) __attribute__ ((__nothrow__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__));


extern long double logl (long double __x) __attribute__ ((__nothrow__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__));




extern long double exp10l (long double __x) __attribute__ ((__nothrow__)); extern long double __exp10l (long double __x) __attribute__ ((__nothrow__));

extern long double pow10l (long double __x) __attribute__ ((__nothrow__)); extern long double __pow10l (long double __x) __attribute__ ((__nothrow__));





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

# 2451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/main/php_config.h" 2
# 5 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib_config.h" 2
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib_structs.h" 2






# 1 "/usr/include/inttypes.h" 1 3 4
# 28 "/usr/include/inttypes.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
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
# 126 "/usr/include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;
# 138 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 29 "/usr/include/inttypes.h" 2 3 4






typedef long int __gwchar_t;
# 274 "/usr/include/inttypes.h" 3 4

# 288 "/usr/include/inttypes.h" 3 4
typedef struct
  {
    long long int quot;
    long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__));


extern intmax_t wcstoimax (__const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__));


extern uintmax_t wcstoumax (__const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__));
# 379 "/usr/include/inttypes.h" 3 4
__extension__
extern long long int __strtoll_internal (__const char *__restrict __nptr,
      char **__restrict __endptr,
      int __base, int __group)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern __inline intmax_t
__attribute__ ((__nothrow__)) strtoimax (__const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtoll_internal (nptr, endptr, base, 0);
}

__extension__
extern unsigned long long int __strtoull_internal (__const char *
         __restrict __nptr,
         char **
         __restrict __endptr,
         int __base,
         int __group)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern __inline uintmax_t
__attribute__ ((__nothrow__)) strtoumax (__const char *__restrict nptr, char **__restrict endptr, int base)

{
  return __strtoull_internal (nptr, endptr, base, 0);
}

__extension__
extern long long int __wcstoll_internal (__const __gwchar_t *
      __restrict __nptr,
      __gwchar_t **__restrict __endptr,
      int __base, int __group)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern __inline intmax_t
__attribute__ ((__nothrow__)) wcstoimax (__const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstoll_internal (nptr, endptr, base, 0);
}


__extension__
extern unsigned long long int __wcstoull_internal (__const __gwchar_t *
         __restrict __nptr,
         __gwchar_t **
         __restrict __endptr,
         int __base,
         int __group)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern __inline uintmax_t
__attribute__ ((__nothrow__)) wcstoumax (__const __gwchar_t *__restrict nptr, __gwchar_t **__restrict endptr, int base)

{
  return __wcstoull_internal (nptr, endptr, base, 0);
}





# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib_structs.h" 2
# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib_structs.h"
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





typedef _G_fpos64_t fpos64_t;
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
# 204 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 226 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 251 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 261 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 294 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__)) ;




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






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
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
# 467 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
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

# 644 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
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

# 721 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
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



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




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


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 849 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 868 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







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





extern __inline __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





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

# 59 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib_structs.h" 2
# 75 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib_structs.h"
typedef unsigned long long timelib_ull;
typedef signed long long timelib_sll;



typedef struct ttinfo
{
 int32_t offset;
 int isdst;
 unsigned int abbr_idx;

 unsigned int isstdcnt;
 unsigned int isgmtcnt;
} ttinfo;

typedef struct tlinfo
{
 int32_t trans;
 int32_t offset;
} tlinfo;

typedef struct tlocinfo
{
 char country_code[3];
 double latitude;
 double longitude;
 char *comments;
} tlocinfo;

typedef struct timelib_tzinfo
{
 char *name;
 uint32_t ttisgmtcnt;
 uint32_t ttisstdcnt;
 uint32_t leapcnt;
 uint32_t timecnt;
 uint32_t typecnt;
 uint32_t charcnt;

 int32_t *trans;
 unsigned char *trans_idx;

 ttinfo *type;
 char *timezone_abbr;

 tlinfo *leap_times;
 unsigned char bc;
 tlocinfo location;
} timelib_tzinfo;

typedef struct timelib_special {
 unsigned int type;
 timelib_sll amount;
} timelib_special;

typedef struct timelib_rel_time {
 timelib_sll y, m, d;
 timelib_sll h, i, s;

 int weekday;
 int weekday_behavior;

 int first_last_day_of;
 int invert;
 timelib_sll days;

 timelib_special special;
 unsigned int have_weekday_relative, have_special_relative;
} timelib_rel_time;

typedef struct timelib_time_offset {
 int32_t offset;
 unsigned int leap_secs;
 unsigned int is_dst;
 char *abbr;
 timelib_sll transistion_time;
} timelib_time_offset;

typedef struct timelib_time {
 timelib_sll y, m, d;
 timelib_sll h, i, s;
 double f;
 int z;
 char *tz_abbr;
 timelib_tzinfo *tz_info;
 signed int dst;
 timelib_rel_time relative;

 timelib_sll sse;

 unsigned int have_time, have_date, have_zone, have_relative, have_weeknr_day;

 unsigned int sse_uptodate;
 unsigned int tim_uptodate;
 unsigned int is_localtime;
 unsigned int zone_type;


} timelib_time;

typedef struct timelib_error_message {
 int position;
 char character;
 char *message;
} timelib_error_message;

typedef struct timelib_error_container {
 int warning_count;
 struct timelib_error_message *warning_messages;
 int error_count;
 struct timelib_error_message *error_messages;
} timelib_error_container;

typedef struct _timelib_tz_lookup_table {
 char *name;
 int type;
 float gmtoffset;
 char *full_tz_name;
} timelib_tz_lookup_table;

typedef struct _timelib_tzdb_index_entry {
 char *id;
 unsigned int pos;
} timelib_tzdb_index_entry;

typedef struct _timelib_tzdb {
 char *version;
 int index_size;
 const timelib_tzdb_index_entry *index;
 const unsigned char *data;
} timelib_tzdb;
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib.h" 2

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



# 1 "/usr/include/bits/xopen_lim.h" 1 3 4
# 34 "/usr/include/bits/xopen_lim.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 35 "/usr/include/bits/xopen_lim.h" 2 3 4
# 154 "/usr/include/limits.h" 2 3 4
# 123 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 2 3 4
# 8 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/syslimits.h" 2 3 4
# 12 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 2 3 4
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib.h" 2
# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timelib.h"
typedef timelib_tzinfo* (*timelib_tz_get_wrapper)(char *tzname, const timelib_tzdb *tzdb);


timelib_sll timelib_day_of_week(timelib_sll y, timelib_sll m, timelib_sll d);
timelib_sll timelib_iso_day_of_week(timelib_sll y, timelib_sll m, timelib_sll d);
timelib_sll timelib_day_of_year(timelib_sll y, timelib_sll m, timelib_sll d);
timelib_sll timelib_daynr_from_weeknr(timelib_sll y, timelib_sll w, timelib_sll d);
timelib_sll timelib_days_in_month(timelib_sll y, timelib_sll m);
void timelib_isoweek_from_date(timelib_sll y, timelib_sll m, timelib_sll d, timelib_sll *iw, timelib_sll *iy);
int timelib_valid_time(timelib_sll h, timelib_sll i, timelib_sll s);
int timelib_valid_date(timelib_sll y, timelib_sll m, timelib_sll d);


timelib_time *timelib_strtotime(char *s, int len, timelib_error_container **errors, const timelib_tzdb *tzdb, timelib_tz_get_wrapper tz_get_wrapper);
timelib_time *timelib_parse_from_format(char *format, char *s, int len, timelib_error_container **errors, const timelib_tzdb *tzdb, timelib_tz_get_wrapper tz_get_wrapper);
void timelib_fill_holes(timelib_time *parsed, timelib_time *now, int options);
char *timelib_timezone_id_from_abbr(const char *abbr, long gmtoffset, int isdst);
const timelib_tz_lookup_table *timelib_timezone_abbreviations_list(void);


void timelib_strtointerval(char *s, int len,
                           timelib_time **begin, timelib_time **end,
         timelib_rel_time **period, int *recurrences,
         struct timelib_error_container **errors);



void timelib_update_ts(timelib_time* time, timelib_tzinfo* tzi);
void timelib_do_normalize(timelib_time *base);
void timelib_do_rel_normalize(timelib_time *base, timelib_rel_time *rt);


int timelib_apply_localtime(timelib_time *t, unsigned int localtime);
void timelib_unixtime2gmt(timelib_time* tm, timelib_sll ts);
void timelib_unixtime2local(timelib_time *tm, timelib_sll ts);
void timelib_update_from_sse(timelib_time *tm);
void timelib_set_timezone(timelib_time *t, timelib_tzinfo *tz);


int timelib_timezone_id_is_valid(char *timezone, const timelib_tzdb *tzdb);
timelib_tzinfo *timelib_parse_tzfile(char *timezone, const timelib_tzdb *tzdb);
int timelib_timestamp_is_in_dst(timelib_sll ts, timelib_tzinfo *tz);
timelib_time_offset *timelib_get_time_zone_info(timelib_sll ts, timelib_tzinfo *tz);
timelib_sll timelib_get_current_offset(timelib_time *t);
void timelib_dump_tzinfo(timelib_tzinfo *tz);
const timelib_tzdb *timelib_builtin_db(void);
const timelib_tzdb_index_entry *timelib_timezone_builtin_identifiers_list(int *count);


timelib_tzinfo* timelib_tzinfo_ctor(char *name);
void timelib_time_tz_abbr_update(timelib_time* tm, char* tz_abbr);
void timelib_time_tz_name_update(timelib_time* tm, char* tz_name);
void timelib_tzinfo_dtor(timelib_tzinfo *tz);
timelib_tzinfo* timelib_tzinfo_clone(timelib_tzinfo *tz);

timelib_rel_time* timelib_rel_time_ctor(void);
void timelib_rel_time_dtor(timelib_rel_time* t);
timelib_rel_time* timelib_rel_time_clone(timelib_rel_time *tz);

timelib_time* timelib_time_ctor(void);
void timelib_time_set_option(timelib_time* tm, int option, void* option_value);
void timelib_time_dtor(timelib_time* t);
timelib_time* timelib_time_clone(timelib_time* orig);

timelib_time_offset* timelib_time_offset_ctor(void);
void timelib_time_offset_dtor(timelib_time_offset* t);

void timelib_error_container_dtor(timelib_error_container *errors);

signed long timelib_date_to_int(timelib_time *d, int *error);
void timelib_dump_date(timelib_time *d, int options);
void timelib_dump_rel_time(timelib_rel_time *d);

void timelib_decimal_hour_to_hms(double h, int *hour, int *min, int *sec);


double timelib_ts_to_juliandate(timelib_sll ts);
int timelib_astro_rise_set_altitude(timelib_time *time, double lon, double lat, double altit, int upper_limb, double *h_rise, double *h_set, timelib_sll *ts_rise, timelib_sll *ts_set, timelib_sll *ts_transit);


timelib_rel_time *timelib_diff(timelib_time *one, timelib_time *two);
# 22 "ext/date/lib/parse_date.re" 2


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






extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__));






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

# 25 "ext/date/lib/parse_date.re" 2

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



# 27 "ext/date/lib/parse_date.re" 2
# 95 "ext/date/lib/parse_date.re"
typedef unsigned char uchar;
# 144 "ext/date/lib/parse_date.re"
typedef struct timelib_elems {
 unsigned int c;
 char **v;
} timelib_elems;

typedef struct Scanner {
 int fd;
 uchar *lim, *str, *ptr, *cur, *tok, *pos;
 unsigned int line, len;
 struct timelib_error_container *errors;

 struct timelib_time *time;
 const timelib_tzdb *tzdb;
} Scanner;

typedef struct _timelib_lookup_table {
    const char *name;
    int type;
    int value;
} timelib_lookup_table;

typedef struct _timelib_relunit {
 const char *name;
 int unit;
 int multiplier;
} timelib_relunit;




const static timelib_tz_lookup_table timelib_timezone_lookup[] = {
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/timezonemap.h" 1
 { "acst", 1, -14400, "America/Porto_Acre" },
 { "acst", 1, -14400, "America/Eirunepe" },
 { "acst", 1, -14400, "America/Rio_Branco" },
 { "acst", 1, -14400, "Brazil/Acre" },
 { "act", 0, -18000, "America/Porto_Acre" },
 { "act", 0, -18000, "America/Eirunepe" },
 { "act", 0, -18000, "America/Rio_Branco" },
 { "act", 0, -18000, "Brazil/Acre" },
 { "addt", 1, -7200, "America/Goose_Bay" },
 { "addt", 1, -7200, "America/Pangnirtung" },
 { "admt", 0, 9320, "Africa/Addis_Ababa" },
 { "admt", 0, 9320, "Africa/Asmara" },
 { "admt", 0, 9320, "Africa/Asmera" },
 { "adt", 1, -10800, "America/Halifax" },
 { "adt", 1, -10800, "America/Barbados" },
 { "adt", 1, -10800, "America/Blanc-Sablon" },
 { "adt", 1, -10800, "America/Glace_Bay" },
 { "adt", 1, -10800, "America/Goose_Bay" },
 { "adt", 1, -10800, "America/Martinique" },
 { "adt", 1, -10800, "America/Moncton" },
 { "adt", 1, -10800, "America/Pangnirtung" },
 { "adt", 1, -10800, "America/Thule" },
 { "adt", 1, -10800, "Atlantic/Bermuda" },
 { "adt", 1, -10800, "Canada/Atlantic" },
 { "adt", 1, 14400, "Asia/Baghdad" },
 { "aft", 0, 14400, "Asia/Kabul" },
 { "aft", 0, 16200, "Asia/Kabul" },
 { "ahdt", 1, -32400, "America/Anchorage" },
 { "ahst", 0, -36000, "America/Anchorage" },
 { "ahst", 0, -36000, "America/Adak" },
 { "ahst", 0, -36000, "America/Atka" },
 { "akdt", 1, -28800, "America/Anchorage" },
 { "akdt", 1, -28800, "America/Juneau" },
 { "akdt", 1, -28800, "America/Nome" },
 { "akdt", 1, -28800, "America/Yakutat" },
 { "akst", 0, -32400, "America/Anchorage" },
 { "akst", 0, -32400, "America/Juneau" },
 { "akst", 0, -32400, "America/Nome" },
 { "akst", 0, -32400, "America/Yakutat" },
 { "aktst", 1, 21600, "Asia/Aqtobe" },
 { "aktt", 0, 14400, "Asia/Aqtobe" },
 { "aktt", 0, 18000, "Asia/Aqtobe" },
 { "aktt", 0, 21600, "Asia/Aqtobe" },
 { "almst", 1, 25200, "Asia/Almaty" },
 { "almt", 0, 18000, "Asia/Almaty" },
 { "almt", 0, 21600, "Asia/Almaty" },
 { "amst", 1, 14400, "Asia/Yerevan" },
 { "amst", 1, 18000, "Asia/Yerevan" },
 { "amst", 1, -10800, "America/Boa_Vista" },
 { "amst", 1, -10800, "America/Campo_Grande" },
 { "amst", 1, -10800, "America/Cuiaba" },
 { "amst", 1, -10800, "America/Manaus" },
 { "amst", 1, -10800, "America/Porto_Velho" },
 { "amst", 1, -10800, "America/Santarem" },
 { "amst", 1, -10800, "Brazil/West" },
 { "amt", 0, 10800, "Asia/Yerevan" },
 { "amt", 0, 14400, "Asia/Yerevan" },
 { "amt", 0, -13840, "America/Asuncion" },
 { "amt", 0, -14400, "America/Boa_Vista" },
 { "amt", 0, -14400, "America/Campo_Grande" },
 { "amt", 0, -14400, "America/Cuiaba" },
 { "amt", 0, -14400, "America/Eirunepe" },
 { "amt", 0, -14400, "America/Manaus" },
 { "amt", 0, -14400, "America/Porto_Acre" },
 { "amt", 0, -14400, "America/Porto_Velho" },
 { "amt", 0, -14400, "America/Rio_Branco" },
 { "amt", 0, -14400, "America/Santarem" },
 { "amt", 0, -14400, "Brazil/Acre" },
 { "amt", 0, -14400, "Brazil/West" },
 { "amt", 0, 1172, "Europe/Amsterdam" },
 { "amt", 0, 5692, "Europe/Athens" },
 { "anast", 1, 43200, "Asia/Anadyr" },
 { "anast", 1, 46800, "Asia/Anadyr" },
 { "anast", 1, 50400, "Asia/Anadyr" },
 { "anat", 0, 39600, "Asia/Anadyr" },
 { "anat", 0, 43200, "Asia/Anadyr" },
 { "anat", 0, 46800, "Asia/Anadyr" },
 { "ant", 0, -16200, "America/Curacao" },
 { "ant", 0, -16200, "America/Aruba" },
 { "aot", 0, 3124, "Africa/Luanda" },
 { "apt", 1, -10800, "America/Halifax" },
 { "apt", 1, -10800, "America/Blanc-Sablon" },
 { "apt", 1, -10800, "America/Glace_Bay" },
 { "apt", 1, -10800, "America/Moncton" },
 { "apt", 1, -10800, "America/Pangnirtung" },
 { "apt", 1, -10800, "America/Puerto_Rico" },
 { "apt", 1, -10800, "Canada/Atlantic" },
 { "aqtst", 1, 18000, "Asia/Aqtau" },
 { "aqtst", 1, 21600, "Asia/Aqtau" },
 { "aqtst", 1, 21600, "Asia/Aqtobe" },
 { "aqtt", 0, 14400, "Asia/Aqtau" },
 { "aqtt", 0, 18000, "Asia/Aqtau" },
 { "aqtt", 0, 18000, "Asia/Aqtobe" },
 { "arst", 1, -10800, "America/Buenos_Aires" },
 { "arst", 1, -7200, "America/Buenos_Aires" },
 { "arst", 1, -10800, "America/Argentina/Buenos_Aires" },
 { "arst", 1, -10800, "America/Argentina/Catamarca" },
 { "arst", 1, -10800, "America/Argentina/ComodRivadavia" },
 { "arst", 1, -10800, "America/Argentina/Cordoba" },
 { "arst", 1, -10800, "America/Argentina/Jujuy" },
 { "arst", 1, -10800, "America/Argentina/La_Rioja" },
 { "arst", 1, -10800, "America/Argentina/Mendoza" },
 { "arst", 1, -10800, "America/Argentina/Rio_Gallegos" },
 { "arst", 1, -10800, "America/Argentina/Salta" },
 { "arst", 1, -10800, "America/Argentina/San_Juan" },
 { "arst", 1, -10800, "America/Argentina/San_Luis" },
 { "arst", 1, -10800, "America/Argentina/Tucuman" },
 { "arst", 1, -10800, "America/Argentina/Ushuaia" },
 { "arst", 1, -10800, "America/Catamarca" },
 { "arst", 1, -10800, "America/Cordoba" },
 { "arst", 1, -10800, "America/Jujuy" },
 { "arst", 1, -10800, "America/Mendoza" },
 { "arst", 1, -10800, "America/Rosario" },
 { "arst", 1, -10800, "Antarctica/Palmer" },
 { "arst", 1, -7200, "America/Argentina/Buenos_Aires" },
 { "arst", 1, -7200, "America/Argentina/Catamarca" },
 { "arst", 1, -7200, "America/Argentina/ComodRivadavia" },
 { "arst", 1, -7200, "America/Argentina/Cordoba" },
 { "arst", 1, -7200, "America/Argentina/Jujuy" },
 { "arst", 1, -7200, "America/Argentina/La_Rioja" },
 { "arst", 1, -7200, "America/Argentina/Mendoza" },
 { "arst", 1, -7200, "America/Argentina/Rio_Gallegos" },
 { "arst", 1, -7200, "America/Argentina/Salta" },
 { "arst", 1, -7200, "America/Argentina/San_Juan" },
 { "arst", 1, -7200, "America/Argentina/San_Luis" },
 { "arst", 1, -7200, "America/Argentina/Tucuman" },
 { "arst", 1, -7200, "America/Argentina/Ushuaia" },
 { "arst", 1, -7200, "America/Catamarca" },
 { "arst", 1, -7200, "America/Cordoba" },
 { "arst", 1, -7200, "America/Jujuy" },
 { "arst", 1, -7200, "America/Mendoza" },
 { "arst", 1, -7200, "America/Rosario" },
 { "arst", 1, -7200, "Antarctica/Palmer" },
 { "art", 0, -10800, "America/Buenos_Aires" },
 { "art", 0, -14400, "America/Buenos_Aires" },
 { "art", 0, -10800, "America/Argentina/Buenos_Aires" },
 { "art", 0, -10800, "America/Argentina/Catamarca" },
 { "art", 0, -10800, "America/Argentina/ComodRivadavia" },
 { "art", 0, -10800, "America/Argentina/Cordoba" },
 { "art", 0, -10800, "America/Argentina/Jujuy" },
 { "art", 0, -10800, "America/Argentina/La_Rioja" },
 { "art", 0, -10800, "America/Argentina/Mendoza" },
 { "art", 0, -10800, "America/Argentina/Rio_Gallegos" },
 { "art", 0, -10800, "America/Argentina/Salta" },
 { "art", 0, -10800, "America/Argentina/San_Juan" },
 { "art", 0, -10800, "America/Argentina/San_Luis" },
 { "art", 0, -10800, "America/Argentina/Tucuman" },
 { "art", 0, -10800, "America/Argentina/Ushuaia" },
 { "art", 0, -10800, "America/Catamarca" },
 { "art", 0, -10800, "America/Cordoba" },
 { "art", 0, -10800, "America/Jujuy" },
 { "art", 0, -10800, "America/Mendoza" },
 { "art", 0, -10800, "America/Rosario" },
 { "art", 0, -10800, "Antarctica/Palmer" },
 { "art", 0, -14400, "America/Argentina/Buenos_Aires" },
 { "art", 0, -14400, "America/Argentina/Catamarca" },
 { "art", 0, -14400, "America/Argentina/ComodRivadavia" },
 { "art", 0, -14400, "America/Argentina/Cordoba" },
 { "art", 0, -14400, "America/Argentina/Jujuy" },
 { "art", 0, -14400, "America/Argentina/La_Rioja" },
 { "art", 0, -14400, "America/Argentina/Mendoza" },
 { "art", 0, -14400, "America/Argentina/Rio_Gallegos" },
 { "art", 0, -14400, "America/Argentina/Salta" },
 { "art", 0, -14400, "America/Argentina/San_Juan" },
 { "art", 0, -14400, "America/Argentina/San_Luis" },
 { "art", 0, -14400, "America/Argentina/Tucuman" },
 { "art", 0, -14400, "America/Argentina/Ushuaia" },
 { "art", 0, -14400, "America/Catamarca" },
 { "art", 0, -14400, "America/Cordoba" },
 { "art", 0, -14400, "America/Jujuy" },
 { "art", 0, -14400, "America/Mendoza" },
 { "art", 0, -14400, "America/Rosario" },
 { "art", 0, -14400, "Antarctica/Palmer" },
 { "ashst", 1, 18000, "Asia/Ashkhabad" },
 { "ashst", 1, 21600, "Asia/Ashkhabad" },
 { "ashst", 1, 18000, "Asia/Ashgabat" },
 { "ashst", 1, 21600, "Asia/Ashgabat" },
 { "asht", 0, 14400, "Asia/Ashkhabad" },
 { "asht", 0, 18000, "Asia/Ashkhabad" },
 { "asht", 0, 14400, "Asia/Ashgabat" },
 { "asht", 0, 18000, "Asia/Ashgabat" },
 { "ast", 0, 10800, "Asia/Riyadh" },
 { "ast", 0, -14400, "America/Anguilla" },
 { "ast", 0, -14400, "America/Antigua" },
 { "ast", 0, -14400, "America/Aruba" },
 { "ast", 0, -14400, "America/Barbados" },
 { "ast", 0, -14400, "America/Blanc-Sablon" },
 { "ast", 0, -14400, "America/Curacao" },
 { "ast", 0, -14400, "America/Dominica" },
 { "ast", 0, -14400, "America/Glace_Bay" },
 { "ast", 0, -14400, "America/Goose_Bay" },
 { "ast", 0, -14400, "America/Grenada" },
 { "ast", 0, -14400, "America/Guadeloupe" },
 { "ast", 0, -14400, "America/Halifax" },
 { "ast", 0, -14400, "America/Marigot" },
 { "ast", 0, -14400, "America/Martinique" },
 { "ast", 0, -14400, "America/Miquelon" },
 { "ast", 0, -14400, "America/Moncton" },
 { "ast", 0, -14400, "America/Montserrat" },
 { "ast", 0, -14400, "America/Pangnirtung" },
 { "ast", 0, -14400, "America/Port_of_Spain" },
 { "ast", 0, -14400, "America/Puerto_Rico" },
 { "ast", 0, -14400, "America/Santo_Domingo" },
 { "ast", 0, -14400, "America/St_Barthelemy" },
 { "ast", 0, -14400, "America/St_Kitts" },
 { "ast", 0, -14400, "America/St_Lucia" },
 { "ast", 0, -14400, "America/St_Thomas" },
 { "ast", 0, -14400, "America/St_Vincent" },
 { "ast", 0, -14400, "America/Thule" },
 { "ast", 0, -14400, "America/Tortola" },
 { "ast", 0, -14400, "America/Virgin" },
 { "ast", 0, -14400, "Atlantic/Bermuda" },
 { "ast", 0, -14400, "Canada/Atlantic" },
 { "ast", 0, 10800, "Asia/Aden" },
 { "ast", 0, 10800, "Asia/Baghdad" },
 { "ast", 0, 10800, "Asia/Bahrain" },
 { "ast", 0, 10800, "Asia/Kuwait" },
 { "ast", 0, 10800, "Asia/Qatar" },
 { "awt", 1, -10800, "America/Halifax" },
 { "awt", 1, -10800, "America/Blanc-Sablon" },
 { "awt", 1, -10800, "America/Glace_Bay" },
 { "awt", 1, -10800, "America/Moncton" },
 { "awt", 1, -10800, "America/Pangnirtung" },
 { "awt", 1, -10800, "America/Puerto_Rico" },
 { "awt", 1, -10800, "Canada/Atlantic" },
 { "azomt", 1, 0, "Atlantic/Azores" },
 { "azost", 1, -3600, "Atlantic/Azores" },
 { "azost", 1, 0, "Atlantic/Azores" },
 { "azot", 0, -3600, "Atlantic/Azores" },
 { "azot", 0, -7200, "Atlantic/Azores" },
 { "azst", 1, 14400, "Asia/Baku" },
 { "azst", 1, 18000, "Asia/Baku" },
 { "azt", 0, 10800, "Asia/Baku" },
 { "azt", 0, 14400, "Asia/Baku" },
 { "bakst", 1, 14400, "Asia/Baku" },
 { "bakst", 1, 18000, "Asia/Baku" },
 { "bakt", 0, 10800, "Asia/Baku" },
 { "bakt", 0, 14400, "Asia/Baku" },
 { "bdst", 1, 7200, "Europe/London" },
 { "bdst", 1, 25200, "Asia/Dacca" },
 { "bdst", 1, 25200, "Asia/Dhaka" },
 { "bdst", 1, 7200, "Europe/Belfast" },
 { "bdst", 1, 7200, "Europe/Gibraltar" },
 { "bdst", 1, 7200, "Europe/Guernsey" },
 { "bdst", 1, 7200, "Europe/Isle_of_Man" },
 { "bdst", 1, 7200, "Europe/Jersey" },
 { "bdst", 1, 7200, "GB" },
 { "bdt", 1, -36000, "America/Adak" },
 { "bdt", 1, -36000, "America/Atka" },
 { "bdt", 1, -36000, "America/Nome" },
 { "bdt", 0, 21600, "Asia/Dacca" },
 { "bdt", 0, 21600, "Asia/Dhaka" },
 { "beat", 0, 9000, "Africa/Mogadishu" },
 { "beat", 0, 9000, "Africa/Kampala" },
 { "beat", 0, 9000, "Africa/Nairobi" },
 { "beaut", 0, 9885, "Africa/Nairobi" },
 { "beaut", 0, 9885, "Africa/Dar_es_Salaam" },
 { "beaut", 0, 9885, "Africa/Kampala" },
 { "bmt", 0, -14308, "America/Barbados" },
 { "bmt", 0, -17780, "America/Bogota" },
 { "bmt", 0, -3996, "Africa/Banjul" },
 { "bmt", 0, 10656, "Asia/Baghdad" },
 { "bmt", 0, 24124, "Asia/Bangkok" },
 { "bmt", 0, 6264, "Europe/Tiraspol" },
 { "bmt", 0, 6264, "Europe/Bucharest" },
 { "bmt", 0, 6264, "Europe/Chisinau" },
 { "bnt", 0, 27000, "Asia/Brunei" },
 { "bnt", 0, 28800, "Asia/Brunei" },
 { "bortst", 1, 30000, "Asia/Kuching" },
 { "bort", 0, 27000, "Asia/Kuching" },
 { "bort", 0, 28800, "Asia/Kuching" },
 { "bost", 1, -12756, "America/La_Paz" },
 { "bot", 0, -14400, "America/La_Paz" },
 { "brst", 1, -7200, "America/Sao_Paulo" },
 { "brst", 1, -7200, "America/Araguaina" },
 { "brst", 1, -7200, "America/Bahia" },
 { "brst", 1, -7200, "America/Belem" },
 { "brst", 1, -7200, "America/Fortaleza" },
 { "brst", 1, -7200, "America/Maceio" },
 { "brst", 1, -7200, "America/Recife" },
 { "brst", 1, -7200, "Brazil/East" },
 { "brt", 0, -10800, "America/Sao_Paulo" },
 { "brt", 0, -10800, "America/Araguaina" },
 { "brt", 0, -10800, "America/Bahia" },
 { "brt", 0, -10800, "America/Belem" },
 { "brt", 0, -10800, "America/Fortaleza" },
 { "brt", 0, -10800, "America/Maceio" },
 { "brt", 0, -10800, "America/Recife" },
 { "brt", 0, -10800, "America/Santarem" },
 { "brt", 0, -10800, "Brazil/East" },
 { "bst", 0, 3600, "Europe/London" },
 { "bst", 1, 3600, "Europe/London" },
 { "bst", 0, -39600, "America/Adak" },
 { "bst", 0, -39600, "America/Atka" },
 { "bst", 0, -39600, "America/Nome" },
 { "bst", 0, -39600, "Pacific/Midway" },
 { "bst", 0, -39600, "Pacific/Pago_Pago" },
 { "bst", 0, -39600, "Pacific/Samoa" },
 { "bst", 0, 3600, "Europe/Belfast" },
 { "bst", 0, 3600, "Europe/Guernsey" },
 { "bst", 0, 3600, "Europe/Isle_of_Man" },
 { "bst", 0, 3600, "Europe/Jersey" },
 { "bst", 0, 3600, "GB" },
 { "bst", 1, 3600, "Europe/Belfast" },
 { "bst", 1, 3600, "Europe/Dublin" },
 { "bst", 1, 3600, "Europe/Gibraltar" },
 { "bst", 1, 3600, "Europe/Guernsey" },
 { "bst", 1, 3600, "Europe/Isle_of_Man" },
 { "bst", 1, 3600, "Europe/Jersey" },
 { "bst", 1, 3600, "GB" },
 { "btt", 0, 21600, "Asia/Thimbu" },
 { "btt", 0, 21600, "Asia/Thimphu" },
 { "burt", 0, 23400, "Asia/Kolkata" },
 { "burt", 0, 23400, "Asia/Calcutta" },
 { "burt", 0, 23400, "Asia/Dacca" },
 { "burt", 0, 23400, "Asia/Dhaka" },
 { "burt", 0, 23400, "Asia/Rangoon" },
 { "cant", 0, -3600, "Atlantic/Canary" },
 { "capt", 1, -32400, "America/Anchorage" },
 { "cast", 0, 34200, "Australia/Adelaide" },
 { "cast", 1, 10800, "Africa/Gaborone" },
 { "cast", 1, 10800, "Africa/Khartoum" },
 { "cast", 0, 39600, "Antarctica/Casey" },
 { "cat", 0, -36000, "America/Anchorage" },
 { "cat", 0, 7200, "Africa/Khartoum" },
 { "cat", 0, 7200, "Africa/Blantyre" },
 { "cat", 0, 7200, "Africa/Bujumbura" },
 { "cat", 0, 7200, "Africa/Gaborone" },
 { "cat", 0, 7200, "Africa/Harare" },
 { "cat", 0, 7200, "Africa/Kigali" },
 { "cat", 0, 7200, "Africa/Lubumbashi" },
 { "cat", 0, 7200, "Africa/Lusaka" },
 { "cat", 0, 7200, "Africa/Maputo" },
 { "cat", 0, 7200, "Africa/Windhoek" },
 { "cawt", 1, -32400, "America/Anchorage" },
 { "cct", 0, 23400, "Indian/Cocos" },
 { "cddt", 1, -14400, "America/Rankin_Inlet" },
 { "cddt", 1, -14400, "America/Resolute" },
 { "cdt", 1, -18000, "America/Chicago" },
 { "cdt", 1, -14400, "America/Havana" },
 { "cdt", 0, -18000, "America/Resolute" },
 { "cdt", 1, -18000, "America/Atikokan" },
 { "cdt", 1, -18000, "America/Bahia_Banderas" },
 { "cdt", 1, -18000, "America/Belize" },
 { "cdt", 1, -18000, "America/Cambridge_Bay" },
 { "cdt", 1, -18000, "America/Cancun" },
 { "cdt", 1, -18000, "America/Chihuahua" },
 { "cdt", 1, -18000, "America/Coral_Harbour" },
 { "cdt", 1, -18000, "America/Costa_Rica" },
 { "cdt", 1, -18000, "America/El_Salvador" },
 { "cdt", 1, -18000, "America/Fort_Wayne" },
 { "cdt", 1, -18000, "America/Guatemala" },
 { "cdt", 1, -18000, "America/Indiana/Indianapolis" },
 { "cdt", 1, -18000, "America/Indiana/Knox" },
 { "cdt", 1, -18000, "America/Indiana/Marengo" },
 { "cdt", 1, -18000, "America/Indiana/Petersburg" },
 { "cdt", 1, -18000, "America/Indiana/Tell_City" },
 { "cdt", 1, -18000, "America/Indiana/Vevay" },
 { "cdt", 1, -18000, "America/Indiana/Vincennes" },
 { "cdt", 1, -18000, "America/Indiana/Winamac" },
 { "cdt", 1, -18000, "America/Indianapolis" },
 { "cdt", 1, -18000, "America/Iqaluit" },
 { "cdt", 1, -18000, "America/Kentucky/Louisville" },
 { "cdt", 1, -18000, "America/Kentucky/Monticello" },
 { "cdt", 1, -18000, "America/Knox_IN" },
 { "cdt", 1, -18000, "America/Louisville" },
 { "cdt", 1, -18000, "America/Managua" },
 { "cdt", 1, -18000, "America/Matamoros" },
 { "cdt", 1, -18000, "America/Menominee" },
 { "cdt", 1, -18000, "America/Merida" },
 { "cdt", 1, -18000, "America/Mexico_City" },
 { "cdt", 1, -18000, "America/Monterrey" },
 { "cdt", 1, -18000, "America/North_Dakota/Center" },
 { "cdt", 1, -18000, "America/North_Dakota/New_Salem" },
 { "cdt", 1, -18000, "America/Ojinaga" },
 { "cdt", 1, -18000, "America/Pangnirtung" },
 { "cdt", 1, -18000, "America/Rainy_River" },
 { "cdt", 1, -18000, "America/Rankin_Inlet" },
 { "cdt", 1, -18000, "America/Resolute" },
 { "cdt", 1, -18000, "America/Tegucigalpa" },
 { "cdt", 1, -18000, "America/Winnipeg" },
 { "cdt", 1, -18000, "Canada/Central" },
 { "cdt", 1, -18000, "Mexico/General" },
 { "cdt", 1, 32400, "Asia/Shanghai" },
 { "cdt", 1, 32400, "Asia/Chongqing" },
 { "cdt", 1, 32400, "Asia/Chungking" },
 { "cdt", 1, 32400, "Asia/Harbin" },
 { "cdt", 1, 32400, "Asia/Kashgar" },
 { "cdt", 1, 32400, "Asia/Taipei" },
 { "cdt", 1, 32400, "Asia/Urumqi" },
 { "cdt", 1, 32400, "PRC" },
 { "cdt", 1, 32400, "ROC" },
 { "cemt", 1, 10800, "Europe/Berlin" },
 { "cemt", 1, 10800, "CET" },
 { "cest", 1, 7200, "Europe/Berlin" },
 { "cest", 1, 10800, "Europe/Kaliningrad" },
 { "cest", 1, 7200, "Africa/Algiers" },
 { "cest", 1, 7200, "Africa/Ceuta" },
 { "cest", 1, 7200, "Africa/Tripoli" },
 { "cest", 1, 7200, "Africa/Tunis" },
 { "cest", 1, 7200, "Arctic/Longyearbyen" },
 { "cest", 1, 7200, "Atlantic/Jan_Mayen" },
 { "cest", 1, 7200, "CET" },
 { "cest", 1, 7200, "Europe/Amsterdam" },
 { "cest", 1, 7200, "Europe/Andorra" },
 { "cest", 1, 7200, "Europe/Athens" },
 { "cest", 1, 7200, "Europe/Belgrade" },
 { "cest", 1, 7200, "Europe/Bratislava" },
 { "cest", 1, 7200, "Europe/Brussels" },
 { "cest", 1, 7200, "Europe/Budapest" },
 { "cest", 1, 7200, "Europe/Chisinau" },
 { "cest", 1, 7200, "Europe/Copenhagen" },
 { "cest", 1, 7200, "Europe/Gibraltar" },
 { "cest", 1, 7200, "Europe/Kaliningrad" },
 { "cest", 1, 7200, "Europe/Kiev" },
 { "cest", 1, 7200, "Europe/Lisbon" },
 { "cest", 1, 7200, "Europe/Ljubljana" },
 { "cest", 1, 7200, "Europe/Luxembourg" },
 { "cest", 1, 7200, "Europe/Madrid" },
 { "cest", 1, 7200, "Europe/Malta" },
 { "cest", 1, 7200, "Europe/Minsk" },
 { "cest", 1, 7200, "Europe/Monaco" },
 { "cest", 1, 7200, "Europe/Oslo" },
 { "cest", 1, 7200, "Europe/Paris" },
 { "cest", 1, 7200, "Europe/Podgorica" },
 { "cest", 1, 7200, "Europe/Prague" },
 { "cest", 1, 7200, "Europe/Riga" },
 { "cest", 1, 7200, "Europe/Rome" },
 { "cest", 1, 7200, "Europe/San_Marino" },
 { "cest", 1, 7200, "Europe/Sarajevo" },
 { "cest", 1, 7200, "Europe/Simferopol" },
 { "cest", 1, 7200, "Europe/Skopje" },
 { "cest", 1, 7200, "Europe/Sofia" },
 { "cest", 1, 7200, "Europe/Stockholm" },
 { "cest", 1, 7200, "Europe/Tallinn" },
 { "cest", 1, 7200, "Europe/Tirane" },
 { "cest", 1, 7200, "Europe/Tiraspol" },
 { "cest", 1, 7200, "Europe/Uzhgorod" },
 { "cest", 1, 7200, "Europe/Vaduz" },
 { "cest", 1, 7200, "Europe/Vatican" },
 { "cest", 1, 7200, "Europe/Vienna" },
 { "cest", 1, 7200, "Europe/Vilnius" },
 { "cest", 1, 7200, "Europe/Warsaw" },
 { "cest", 1, 7200, "Europe/Zagreb" },
 { "cest", 1, 7200, "Europe/Zaporozhye" },
 { "cest", 1, 7200, "Europe/Zurich" },
 { "cest", 1, 7200, "WET" },
 { "cet", 0, 3600, "Europe/Berlin" },
 { "cet", 0, 3600, "Africa/Algiers" },
 { "cet", 0, 3600, "Africa/Casablanca" },
 { "cet", 0, 3600, "Africa/Ceuta" },
 { "cet", 0, 3600, "Africa/Tripoli" },
 { "cet", 0, 3600, "Africa/Tunis" },
 { "cet", 0, 3600, "Arctic/Longyearbyen" },
 { "cet", 0, 3600, "Atlantic/Jan_Mayen" },
 { "cet", 0, 3600, "CET" },
 { "cet", 0, 3600, "Europe/Amsterdam" },
 { "cet", 0, 3600, "Europe/Andorra" },
 { "cet", 0, 3600, "Europe/Athens" },
 { "cet", 0, 3600, "Europe/Belgrade" },
 { "cet", 0, 3600, "Europe/Bratislava" },
 { "cet", 0, 3600, "Europe/Brussels" },
 { "cet", 0, 3600, "Europe/Budapest" },
 { "cet", 0, 3600, "Europe/Chisinau" },
 { "cet", 0, 3600, "Europe/Copenhagen" },
 { "cet", 0, 3600, "Europe/Gibraltar" },
 { "cet", 0, 3600, "Europe/Kaliningrad" },
 { "cet", 0, 3600, "Europe/Kiev" },
 { "cet", 0, 3600, "Europe/Lisbon" },
 { "cet", 0, 3600, "Europe/Ljubljana" },
 { "cet", 0, 3600, "Europe/Luxembourg" },
 { "cet", 0, 3600, "Europe/Madrid" },
 { "cet", 0, 3600, "Europe/Malta" },
 { "cet", 0, 3600, "Europe/Minsk" },
 { "cet", 0, 3600, "Europe/Monaco" },
 { "cet", 0, 3600, "Europe/Oslo" },
 { "cet", 0, 3600, "Europe/Paris" },
 { "cet", 0, 3600, "Europe/Podgorica" },
 { "cet", 0, 3600, "Europe/Prague" },
 { "cet", 0, 3600, "Europe/Riga" },
 { "cet", 0, 3600, "Europe/Rome" },
 { "cet", 0, 3600, "Europe/San_Marino" },
 { "cet", 0, 3600, "Europe/Sarajevo" },
 { "cet", 0, 3600, "Europe/Simferopol" },
 { "cet", 0, 3600, "Europe/Skopje" },
 { "cet", 0, 3600, "Europe/Sofia" },
 { "cet", 0, 3600, "Europe/Stockholm" },
 { "cet", 0, 3600, "Europe/Tallinn" },
 { "cet", 0, 3600, "Europe/Tirane" },
 { "cet", 0, 3600, "Europe/Tiraspol" },
 { "cet", 0, 3600, "Europe/Uzhgorod" },
 { "cet", 0, 3600, "Europe/Vaduz" },
 { "cet", 0, 3600, "Europe/Vatican" },
 { "cet", 0, 3600, "Europe/Vienna" },
 { "cet", 0, 3600, "Europe/Vilnius" },
 { "cet", 0, 3600, "Europe/Warsaw" },
 { "cet", 0, 3600, "Europe/Zagreb" },
 { "cet", 0, 3600, "Europe/Zaporozhye" },
 { "cet", 0, 3600, "Europe/Zurich" },
 { "cet", 0, 3600, "WET" },
 { "cet", 0, 7200, "Europe/Kaliningrad" },
 { "cgst", 1, -3600, "America/Scoresbysund" },
 { "cgt", 0, -7200, "America/Scoresbysund" },
 { "chadt", 1, 49500, "Pacific/Chatham" },
 { "chast", 0, 45900, "Pacific/Chatham" },
 { "chat", 0, 30600, "Asia/Harbin" },
 { "chat", 0, 32400, "Asia/Harbin" },
 { "chdt", 1, -19800, "America/Belize" },
 { "chost", 1, 36000, "Asia/Choibalsan" },
 { "chot", 0, 28800, "Asia/Choibalsan" },
 { "chot", 0, 32400, "Asia/Choibalsan" },
 { "chut", 0, 36000, "Pacific/Chuuk" },
 { "chut", 0, 36000, "Pacific/Truk" },
 { "chut", 0, 36000, "Pacific/Yap" },
 { "cit", 0, 28800, "Asia/Dili" },
 { "cit", 0, 28800, "Asia/Makassar" },
 { "cit", 0, 28800, "Asia/Pontianak" },
 { "cit", 0, 28800, "Asia/Ujung_Pandang" },
 { "cjt", 0, 32400, "Asia/Sakhalin" },
 { "cjt", 0, 32400, "Asia/Tokyo" },
 { "ckhst", 1, -34200, "Pacific/Rarotonga" },
 { "ckt", 0, -36000, "Pacific/Rarotonga" },
 { "ckt", 0, -37800, "Pacific/Rarotonga" },
 { "clst", 1, -10800, "America/Santiago" },
 { "clst", 1, -14400, "America/Santiago" },
 { "clst", 1, -10800, "Antarctica/Palmer" },
 { "clst", 1, -10800, "Chile/Continental" },
 { "clst", 1, -14400, "Chile/Continental" },
 { "clt", 0, -14400, "America/Santiago" },
 { "clt", 0, -18000, "America/Santiago" },
 { "clt", 0, -14400, "Antarctica/Palmer" },
 { "clt", 0, -14400, "Chile/Continental" },
 { "clt", 0, -18000, "Chile/Continental" },
 { "cmt", 0, -14640, "America/St_Lucia" },
 { "cmt", 0, -15408, "America/Argentina/Buenos_Aires" },
 { "cmt", 0, -15408, "America/Argentina/Catamarca" },
 { "cmt", 0, -15408, "America/Argentina/ComodRivadavia" },
 { "cmt", 0, -15408, "America/Argentina/Cordoba" },
 { "cmt", 0, -15408, "America/Argentina/Jujuy" },
 { "cmt", 0, -15408, "America/Argentina/La_Rioja" },
 { "cmt", 0, -15408, "America/Argentina/Mendoza" },
 { "cmt", 0, -15408, "America/Argentina/Rio_Gallegos" },
 { "cmt", 0, -15408, "America/Argentina/Salta" },
 { "cmt", 0, -15408, "America/Argentina/San_Juan" },
 { "cmt", 0, -15408, "America/Argentina/San_Luis" },
 { "cmt", 0, -15408, "America/Argentina/Tucuman" },
 { "cmt", 0, -15408, "America/Argentina/Ushuaia" },
 { "cmt", 0, -15408, "America/Buenos_Aires" },
 { "cmt", 0, -15408, "America/Catamarca" },
 { "cmt", 0, -15408, "America/Cordoba" },
 { "cmt", 0, -15408, "America/Jujuy" },
 { "cmt", 0, -15408, "America/Mendoza" },
 { "cmt", 0, -15408, "America/Rosario" },
 { "cmt", 0, -16060, "America/Caracas" },
 { "cmt", 0, -16356, "America/La_Paz" },
 { "cmt", 0, -19176, "America/Panama" },
 { "cmt", 0, 6900, "Europe/Chisinau" },
 { "cmt", 0, 6900, "Europe/Tiraspol" },
 { "cost", 1, -14400, "America/Bogota" },
 { "cot", 0, -18000, "America/Bogota" },
 { "cpt", 1, -18000, "America/Chicago" },
 { "cpt", 1, -18000, "America/Atikokan" },
 { "cpt", 1, -18000, "America/Coral_Harbour" },
 { "cpt", 1, -18000, "America/Fort_Wayne" },
 { "cpt", 1, -18000, "America/Indiana/Indianapolis" },
 { "cpt", 1, -18000, "America/Indiana/Knox" },
 { "cpt", 1, -18000, "America/Indiana/Marengo" },
 { "cpt", 1, -18000, "America/Indiana/Petersburg" },
 { "cpt", 1, -18000, "America/Indiana/Tell_City" },
 { "cpt", 1, -18000, "America/Indiana/Vevay" },
 { "cpt", 1, -18000, "America/Indiana/Vincennes" },
 { "cpt", 1, -18000, "America/Indiana/Winamac" },
 { "cpt", 1, -18000, "America/Indianapolis" },
 { "cpt", 1, -18000, "America/Kentucky/Louisville" },
 { "cpt", 1, -18000, "America/Kentucky/Monticello" },
 { "cpt", 1, -18000, "America/Knox_IN" },
 { "cpt", 1, -18000, "America/Louisville" },
 { "cpt", 1, -18000, "America/Menominee" },
 { "cpt", 1, -18000, "America/Rainy_River" },
 { "cpt", 1, -18000, "America/Winnipeg" },
 { "cpt", 1, -18000, "Canada/Central" },
 { "cst", 0, -21600, "America/Chicago" },
 { "cst", 0, -18000, "America/Havana" },
 { "cst", 0, -21600, "America/Atikokan" },
 { "cst", 0, -21600, "America/Bahia_Banderas" },
 { "cst", 0, -21600, "America/Belize" },
 { "cst", 0, -21600, "America/Cambridge_Bay" },
 { "cst", 0, -21600, "America/Cancun" },
 { "cst", 0, -21600, "America/Chihuahua" },
 { "cst", 0, -21600, "America/Coral_Harbour" },
 { "cst", 0, -21600, "America/Costa_Rica" },
 { "cst", 0, -21600, "America/Detroit" },
 { "cst", 0, -21600, "America/El_Salvador" },
 { "cst", 0, -21600, "America/Fort_Wayne" },
 { "cst", 0, -21600, "America/Guatemala" },
 { "cst", 0, -21600, "America/Hermosillo" },
 { "cst", 0, -21600, "America/Indiana/Indianapolis" },
 { "cst", 0, -21600, "America/Indiana/Knox" },
 { "cst", 0, -21600, "America/Indiana/Marengo" },
 { "cst", 0, -21600, "America/Indiana/Petersburg" },
 { "cst", 0, -21600, "America/Indiana/Tell_City" },
 { "cst", 0, -21600, "America/Indiana/Vevay" },
 { "cst", 0, -21600, "America/Indiana/Vincennes" },
 { "cst", 0, -21600, "America/Indiana/Winamac" },
 { "cst", 0, -21600, "America/Indianapolis" },
 { "cst", 0, -21600, "America/Iqaluit" },
 { "cst", 0, -21600, "America/Kentucky/Louisville" },
 { "cst", 0, -21600, "America/Kentucky/Monticello" },
 { "cst", 0, -21600, "America/Knox_IN" },
 { "cst", 0, -21600, "America/Louisville" },
 { "cst", 0, -21600, "America/Managua" },
 { "cst", 0, -21600, "America/Matamoros" },
 { "cst", 0, -21600, "America/Mazatlan" },
 { "cst", 0, -21600, "America/Menominee" },
 { "cst", 0, -21600, "America/Merida" },
 { "cst", 0, -21600, "America/Mexico_City" },
 { "cst", 0, -21600, "America/Monterrey" },
 { "cst", 0, -21600, "America/North_Dakota/Center" },
 { "cst", 0, -21600, "America/North_Dakota/New_Salem" },
 { "cst", 0, -21600, "America/Ojinaga" },
 { "cst", 0, -21600, "America/Pangnirtung" },
 { "cst", 0, -21600, "America/Rainy_River" },
 { "cst", 0, -21600, "America/Rankin_Inlet" },
 { "cst", 0, -21600, "America/Regina" },
 { "cst", 0, -21600, "America/Resolute" },
 { "cst", 0, -21600, "America/Swift_Current" },
 { "cst", 0, -21600, "America/Tegucigalpa" },
 { "cst", 0, -21600, "America/Thunder_Bay" },
 { "cst", 0, -21600, "America/Winnipeg" },
 { "cst", 0, -21600, "Canada/Central" },
 { "cst", 0, -21600, "Canada/East-Saskatchewan" },
 { "cst", 0, -21600, "Canada/Saskatchewan" },
 { "cst", 0, -21600, "Mexico/BajaSur" },
 { "cst", 0, -21600, "Mexico/General" },
 { "cst", 0, 28800, "Asia/Chongqing" },
 { "cst", 0, 28800, "Asia/Chungking" },
 { "cst", 0, 28800, "Asia/Harbin" },
 { "cst", 0, 28800, "Asia/Kashgar" },
 { "cst", 0, 28800, "Asia/Macao" },
 { "cst", 0, 28800, "Asia/Macau" },
 { "cst", 0, 28800, "Asia/Shanghai" },
 { "cst", 0, 28800, "Asia/Taipei" },
 { "cst", 0, 28800, "Asia/Urumqi" },
 { "cst", 0, 28800, "PRC" },
 { "cst", 0, 28800, "ROC" },
 { "cst", 0, 34200, "Asia/Jayapura" },
 { "cst", 0, 34200, "Australia/Adelaide" },
 { "cst", 0, 34200, "Australia/Broken_Hill" },
 { "cst", 0, 34200, "Australia/Darwin" },
 { "cst", 0, 34200, "Australia/North" },
 { "cst", 0, 34200, "Australia/South" },
 { "cst", 0, 34200, "Australia/Yancowinna" },
 { "cst", 1, 37800, "Australia/Adelaide" },
 { "cst", 1, 37800, "Australia/Broken_Hill" },
 { "cst", 1, 37800, "Australia/Darwin" },
 { "cst", 1, 37800, "Australia/North" },
 { "cst", 1, 37800, "Australia/South" },
 { "cst", 1, 37800, "Australia/Yancowinna" },
 { "cut", 0, 8400, "Europe/Zaporozhye" },
 { "cvst", 1, -3600, "Atlantic/Cape_Verde" },
 { "cvt", 0, -3600, "Atlantic/Cape_Verde" },
 { "cvt", 0, -7200, "Atlantic/Cape_Verde" },
 { "cwst", 0, 31500, "Australia/Eucla" },
 { "cwst", 1, 35100, "Australia/Eucla" },
 { "cwt", 1, -18000, "America/Chicago" },
 { "cwt", 1, -18000, "America/Atikokan" },
 { "cwt", 1, -18000, "America/Coral_Harbour" },
 { "cwt", 1, -18000, "America/Fort_Wayne" },
 { "cwt", 1, -18000, "America/Indiana/Indianapolis" },
 { "cwt", 1, -18000, "America/Indiana/Knox" },
 { "cwt", 1, -18000, "America/Indiana/Marengo" },
 { "cwt", 1, -18000, "America/Indiana/Petersburg" },
 { "cwt", 1, -18000, "America/Indiana/Tell_City" },
 { "cwt", 1, -18000, "America/Indiana/Vevay" },
 { "cwt", 1, -18000, "America/Indiana/Vincennes" },
 { "cwt", 1, -18000, "America/Indiana/Winamac" },
 { "cwt", 1, -18000, "America/Indianapolis" },
 { "cwt", 1, -18000, "America/Kentucky/Louisville" },
 { "cwt", 1, -18000, "America/Kentucky/Monticello" },
 { "cwt", 1, -18000, "America/Knox_IN" },
 { "cwt", 1, -18000, "America/Louisville" },
 { "cwt", 1, -18000, "America/Menominee" },
 { "cwt", 1, -18000, "America/Mexico_City" },
 { "cwt", 1, -18000, "America/Rainy_River" },
 { "cwt", 1, -18000, "America/Winnipeg" },
 { "cwt", 1, -18000, "Canada/Central" },
 { "cwt", 1, -18000, "Mexico/General" },
 { "cxt", 0, 25200, "Indian/Christmas" },
 { "chst", 0, 36000, "Pacific/Guam" },
 { "chst", 0, 36000, "Pacific/Saipan" },
 { "dact", 0, 21600, "Asia/Dacca" },
 { "dact", 0, 21600, "Asia/Dhaka" },
 { "davt", 0, 18000, "Antarctica/Davis" },
 { "davt", 0, 25200, "Antarctica/Davis" },
 { "ddut", 0, 36000, "Antarctica/DumontDUrville" },
 { "dmt", 0, -1521, "Europe/Dublin" },
 { "dusst", 1, 21600, "Asia/Dushanbe" },
 { "dusst", 1, 25200, "Asia/Dushanbe" },
 { "dust", 0, 18000, "Asia/Dushanbe" },
 { "dust", 0, 21600, "Asia/Dushanbe" },
 { "easst", 1, -18000, "Chile/EasterIsland" },
 { "easst", 1, -21600, "Chile/EasterIsland" },
 { "easst", 1, -18000, "Pacific/Easter" },
 { "easst", 1, -21600, "Pacific/Easter" },
 { "east", 0, -21600, "Chile/EasterIsland" },
 { "east", 0, -25200, "Chile/EasterIsland" },
 { "east", 0, -21600, "Pacific/Easter" },
 { "east", 0, -25200, "Pacific/Easter" },
 { "east", 1, 14400, "Indian/Antananarivo" },
 { "eat", 0, 10800, "Africa/Khartoum" },
 { "eat", 0, 10800, "Africa/Addis_Ababa" },
 { "eat", 0, 10800, "Africa/Asmara" },
 { "eat", 0, 10800, "Africa/Asmera" },
 { "eat", 0, 10800, "Africa/Dar_es_Salaam" },
 { "eat", 0, 10800, "Africa/Djibouti" },
 { "eat", 0, 10800, "Africa/Kampala" },
 { "eat", 0, 10800, "Africa/Mogadishu" },
 { "eat", 0, 10800, "Africa/Nairobi" },
 { "eat", 0, 10800, "Indian/Antananarivo" },
 { "eat", 0, 10800, "Indian/Comoro" },
 { "eat", 0, 10800, "Indian/Mayotte" },
 { "ect", 0, -18000, "America/Guayaquil" },
 { "ect", 0, -18000, "Pacific/Galapagos" },
 { "eddt", 1, -10800, "America/Iqaluit" },
 { "edt", 1, -14400, "America/New_York" },
 { "edt", 1, -14400, "America/Cancun" },
 { "edt", 1, -14400, "America/Detroit" },
 { "edt", 1, -14400, "America/Fort_Wayne" },
 { "edt", 1, -14400, "America/Grand_Turk" },
 { "edt", 1, -14400, "America/Indiana/Indianapolis" },
 { "edt", 1, -14400, "America/Indiana/Marengo" },
 { "edt", 1, -14400, "America/Indiana/Petersburg" },
 { "edt", 1, -14400, "America/Indiana/Tell_City" },
 { "edt", 1, -14400, "America/Indiana/Vevay" },
 { "edt", 1, -14400, "America/Indiana/Vincennes" },
 { "edt", 1, -14400, "America/Indiana/Winamac" },
 { "edt", 1, -14400, "America/Indianapolis" },
 { "edt", 1, -14400, "America/Iqaluit" },
 { "edt", 1, -14400, "America/Jamaica" },
 { "edt", 1, -14400, "America/Kentucky/Louisville" },
 { "edt", 1, -14400, "America/Kentucky/Monticello" },
 { "edt", 1, -14400, "America/Louisville" },
 { "edt", 1, -14400, "America/Montreal" },
 { "edt", 1, -14400, "America/Nassau" },
 { "edt", 1, -14400, "America/Nipigon" },
 { "edt", 1, -14400, "America/Pangnirtung" },
 { "edt", 1, -14400, "America/Port-au-Prince" },
 { "edt", 1, -14400, "America/Santo_Domingo" },
 { "edt", 1, -14400, "America/Thunder_Bay" },
 { "edt", 1, -14400, "America/Toronto" },
 { "edt", 1, -14400, "Canada/Eastern" },
 { "edt", 1, -14400, "EST" },
 { "eest", 1, 10800, "Europe/Helsinki" },
 { "eest", 1, 10800, "Africa/Cairo" },
 { "eest", 1, 10800, "Asia/Amman" },
 { "eest", 1, 10800, "Asia/Beirut" },
 { "eest", 1, 10800, "Asia/Damascus" },
 { "eest", 1, 10800, "Asia/Gaza" },
 { "eest", 1, 10800, "Asia/Istanbul" },
 { "eest", 1, 10800, "Asia/Nicosia" },
 { "eest", 1, 10800, "EET" },
 { "eest", 1, 10800, "Europe/Athens" },
 { "eest", 1, 10800, "Europe/Bucharest" },
 { "eest", 1, 10800, "Europe/Chisinau" },
 { "eest", 1, 10800, "Europe/Istanbul" },
 { "eest", 1, 10800, "Europe/Kaliningrad" },
 { "eest", 1, 10800, "Europe/Kiev" },
 { "eest", 1, 10800, "Europe/Mariehamn" },
 { "eest", 1, 10800, "Europe/Minsk" },
 { "eest", 1, 10800, "Europe/Moscow" },
 { "eest", 1, 10800, "Europe/Nicosia" },
 { "eest", 1, 10800, "Europe/Riga" },
 { "eest", 1, 10800, "Europe/Simferopol" },
 { "eest", 1, 10800, "Europe/Sofia" },
 { "eest", 1, 10800, "Europe/Tallinn" },
 { "eest", 1, 10800, "Europe/Tiraspol" },
 { "eest", 1, 10800, "Europe/Uzhgorod" },
 { "eest", 1, 10800, "Europe/Vilnius" },
 { "eest", 1, 10800, "Europe/Warsaw" },
 { "eest", 1, 10800, "Europe/Zaporozhye" },
 { "eet", 0, 7200, "Europe/Helsinki" },
 { "eet", 1, 10800, "Asia/Gaza" },
 { "eet", 0, 7200, "Africa/Cairo" },
 { "eet", 0, 7200, "Africa/Tripoli" },
 { "eet", 0, 7200, "Asia/Amman" },
 { "eet", 0, 7200, "Asia/Beirut" },
 { "eet", 0, 7200, "Asia/Damascus" },
 { "eet", 0, 7200, "Asia/Gaza" },
 { "eet", 0, 7200, "Asia/Istanbul" },
 { "eet", 0, 7200, "Asia/Nicosia" },
 { "eet", 0, 7200, "EET" },
 { "eet", 0, 7200, "Europe/Athens" },
 { "eet", 0, 7200, "Europe/Bucharest" },
 { "eet", 0, 7200, "Europe/Chisinau" },
 { "eet", 0, 7200, "Europe/Istanbul" },
 { "eet", 0, 7200, "Europe/Kaliningrad" },
 { "eet", 0, 7200, "Europe/Kiev" },
 { "eet", 0, 7200, "Europe/Mariehamn" },
 { "eet", 0, 7200, "Europe/Minsk" },
 { "eet", 0, 7200, "Europe/Moscow" },
 { "eet", 0, 7200, "Europe/Nicosia" },
 { "eet", 0, 7200, "Europe/Riga" },
 { "eet", 0, 7200, "Europe/Simferopol" },
 { "eet", 0, 7200, "Europe/Sofia" },
 { "eet", 0, 7200, "Europe/Tallinn" },
 { "eet", 0, 7200, "Europe/Tiraspol" },
 { "eet", 0, 7200, "Europe/Uzhgorod" },
 { "eet", 0, 7200, "Europe/Vilnius" },
 { "eet", 0, 7200, "Europe/Warsaw" },
 { "eet", 0, 7200, "Europe/Zaporozhye" },
 { "egst", 1, 0, "America/Scoresbysund" },
 { "egt", 0, -3600, "America/Scoresbysund" },
 { "ehdt", 1, -16200, "America/Santo_Domingo" },
 { "eit", 0, 32400, "Asia/Jayapura" },
 { "emt", 0, -26248, "Chile/EasterIsland" },
 { "emt", 0, -26248, "Pacific/Easter" },
 { "ept", 1, -14400, "America/New_York" },
 { "ept", 1, -14400, "America/Detroit" },
 { "ept", 1, -14400, "America/Iqaluit" },
 { "ept", 1, -14400, "America/Montreal" },
 { "ept", 1, -14400, "America/Nipigon" },
 { "ept", 1, -14400, "America/Thunder_Bay" },
 { "ept", 1, -14400, "America/Toronto" },
 { "ept", 1, -14400, "Canada/Eastern" },
 { "ept", 1, -14400, "EST" },
 { "est", 0, -18000, "America/New_York" },
 { "est", 0, -18000, "America/Antigua" },
 { "est", 0, -18000, "America/Atikokan" },
 { "est", 0, -18000, "America/Cambridge_Bay" },
 { "est", 0, -18000, "America/Cancun" },
 { "est", 0, -18000, "America/Cayman" },
 { "est", 0, -18000, "America/Chicago" },
 { "est", 0, -18000, "America/Coral_Harbour" },
 { "est", 0, -18000, "America/Detroit" },
 { "est", 0, -18000, "America/Fort_Wayne" },
 { "est", 0, -18000, "America/Grand_Turk" },
 { "est", 0, -18000, "America/Indiana/Indianapolis" },
 { "est", 0, -18000, "America/Indiana/Knox" },
 { "est", 0, -18000, "America/Indiana/Marengo" },
 { "est", 0, -18000, "America/Indiana/Petersburg" },
 { "est", 0, -18000, "America/Indiana/Tell_City" },
 { "est", 0, -18000, "America/Indiana/Vevay" },
 { "est", 0, -18000, "America/Indiana/Vincennes" },
 { "est", 0, -18000, "America/Indiana/Winamac" },
 { "est", 0, -18000, "America/Indianapolis" },
 { "est", 0, -18000, "America/Iqaluit" },
 { "est", 0, -18000, "America/Jamaica" },
 { "est", 0, -18000, "America/Kentucky/Louisville" },
 { "est", 0, -18000, "America/Kentucky/Monticello" },
 { "est", 0, -18000, "America/Knox_IN" },
 { "est", 0, -18000, "America/Louisville" },
 { "est", 0, -18000, "America/Managua" },
 { "est", 0, -18000, "America/Menominee" },
 { "est", 0, -18000, "America/Merida" },
 { "est", 0, -18000, "America/Moncton" },
 { "est", 0, -18000, "America/Montreal" },
 { "est", 0, -18000, "America/Nassau" },
 { "est", 0, -18000, "America/Nipigon" },
 { "est", 0, -18000, "America/Panama" },
 { "est", 0, -18000, "America/Pangnirtung" },
 { "est", 0, -18000, "America/Port-au-Prince" },
 { "est", 0, -18000, "America/Rankin_Inlet" },
 { "est", 0, -18000, "America/Resolute" },
 { "est", 0, -18000, "America/Santo_Domingo" },
 { "est", 0, -18000, "America/Thunder_Bay" },
 { "est", 0, -18000, "America/Toronto" },
 { "est", 0, -18000, "Canada/Eastern" },
 { "est", 0, -18000, "EST" },
 { "est", 0, 36000, "Antarctica/Macquarie" },
 { "est", 0, 36000, "Australia/ACT" },
 { "est", 0, 36000, "Australia/Brisbane" },
 { "est", 0, 36000, "Australia/Canberra" },
 { "est", 0, 36000, "Australia/Currie" },
 { "est", 0, 36000, "Australia/Hobart" },
 { "est", 0, 36000, "Australia/LHI" },
 { "est", 0, 36000, "Australia/Lindeman" },
 { "est", 0, 36000, "Australia/Lord_Howe" },
 { "est", 0, 36000, "Australia/Melbourne" },
 { "est", 0, 36000, "Australia/NSW" },
 { "est", 0, 36000, "Australia/Queensland" },
 { "est", 0, 36000, "Australia/Sydney" },
 { "est", 0, 36000, "Australia/Tasmania" },
 { "est", 0, 36000, "Australia/Victoria" },
 { "est", 1, 39600, "Australia/Melbourne" },
 { "est", 1, 39600, "Antarctica/Macquarie" },
 { "est", 1, 39600, "Australia/ACT" },
 { "est", 1, 39600, "Australia/Brisbane" },
 { "est", 1, 39600, "Australia/Canberra" },
 { "est", 1, 39600, "Australia/Currie" },
 { "est", 1, 39600, "Australia/Hobart" },
 { "est", 1, 39600, "Australia/Lindeman" },
 { "est", 1, 39600, "Australia/NSW" },
 { "est", 1, 39600, "Australia/Queensland" },
 { "est", 1, 39600, "Australia/Sydney" },
 { "est", 1, 39600, "Australia/Tasmania" },
 { "est", 1, 39600, "Australia/Victoria" },
 { "ewt", 1, -14400, "America/New_York" },
 { "ewt", 1, -14400, "America/Detroit" },
 { "ewt", 1, -14400, "America/Iqaluit" },
 { "ewt", 1, -14400, "America/Montreal" },
 { "ewt", 1, -14400, "America/Nipigon" },
 { "ewt", 1, -14400, "America/Thunder_Bay" },
 { "ewt", 1, -14400, "America/Toronto" },
 { "ewt", 1, -14400, "Canada/Eastern" },
 { "ewt", 1, -14400, "EST" },
 { "ffmt", 0, -14660, "America/Martinique" },
 { "fjst", 1, 46800, "Pacific/Fiji" },
 { "fjt", 0, 43200, "Pacific/Fiji" },
 { "fkst", 1, -10800, "Atlantic/Stanley" },
 { "fkst", 1, -7200, "Atlantic/Stanley" },
 { "fkt", 0, -10800, "Atlantic/Stanley" },
 { "fkt", 0, -14400, "Atlantic/Stanley" },
 { "fmt", 0, -3180, "Africa/Freetown" },
 { "fmt", 0, -4056, "Atlantic/Madeira" },
 { "fnst", 1, -3600, "America/Noronha" },
 { "fnst", 1, -3600, "Brazil/DeNoronha" },
 { "fnt", 0, -7200, "America/Noronha" },
 { "fnt", 0, -7200, "Brazil/DeNoronha" },
 { "fort", 0, 14400, "Asia/Aqtau" },
 { "fort", 0, 18000, "Asia/Aqtau" },
 { "frust", 1, 21600, "Asia/Bishkek" },
 { "frust", 1, 25200, "Asia/Bishkek" },
 { "frut", 0, 18000, "Asia/Bishkek" },
 { "frut", 0, 21600, "Asia/Bishkek" },
 { "galt", 0, -21600, "Pacific/Galapagos" },
 { "gamt", 0, -32400, "Pacific/Gambier" },
 { "gbgt", 0, -13500, "America/Guyana" },
 { "gest", 1, 14400, "Asia/Tbilisi" },
 { "gest", 1, 18000, "Asia/Tbilisi" },
 { "get", 0, 10800, "Asia/Tbilisi" },
 { "get", 0, 14400, "Asia/Tbilisi" },
 { "gft", 0, -10800, "America/Cayenne" },
 { "gft", 0, -14400, "America/Cayenne" },
 { "ghst", 1, 1200, "Africa/Accra" },
 { "gilt", 0, 43200, "Pacific/Tarawa" },
 { "gmt", 0, 0, "Africa/Abidjan" },
 { "gmt", 0, 0, "Africa/Accra" },
 { "gmt", 0, 0, "Africa/Bamako" },
 { "gmt", 0, 0, "Africa/Banjul" },
 { "gmt", 0, 0, "Africa/Bissau" },
 { "gmt", 0, 0, "Africa/Conakry" },
 { "gmt", 0, 0, "Africa/Dakar" },
 { "gmt", 0, 0, "Africa/Freetown" },
 { "gmt", 0, 0, "Africa/Lome" },
 { "gmt", 0, 0, "Africa/Malabo" },
 { "gmt", 0, 0, "Africa/Monrovia" },
 { "gmt", 0, 0, "Africa/Niamey" },
 { "gmt", 0, 0, "Africa/Nouakchott" },
 { "gmt", 0, 0, "Africa/Ouagadougou" },
 { "gmt", 0, 0, "Africa/Porto-Novo" },
 { "gmt", 0, 0, "Africa/Sao_Tome" },
 { "gmt", 0, 0, "Africa/Timbuktu" },
 { "gmt", 0, 0, "America/Danmarkshavn" },
 { "gmt", 0, 0, "Atlantic/Reykjavik" },
 { "gmt", 0, 0, "Atlantic/St_Helena" },
 { "gmt", 0, 0, "Etc/GMT" },
 { "gmt", 0, 0, "Etc/Greenwich" },
 { "gmt", 0, 0, "Europe/Belfast" },
 { "gmt", 0, 0, "Europe/Dublin" },
 { "gmt", 0, 0, "Europe/Gibraltar" },
 { "gmt", 0, 0, "Europe/Guernsey" },
 { "gmt", 0, 0, "Europe/Isle_of_Man" },
 { "gmt", 0, 0, "Europe/Jersey" },
 { "gmt", 0, 0, "Europe/London" },
 { "gmt", 0, 0, "GB" },
 { "gst", 0, 14400, "Asia/Dubai" },
 { "gst", 0, -7200, "Atlantic/South_Georgia" },
 { "gst", 0, 14400, "Asia/Bahrain" },
 { "gst", 0, 14400, "Asia/Muscat" },
 { "gst", 0, 14400, "Asia/Qatar" },
 { "gst", 0, 36000, "Pacific/Guam" },
 { "gyt", 0, -10800, "America/Guyana" },
 { "gyt", 0, -13500, "America/Guyana" },
 { "gyt", 0, -14400, "America/Guyana" },
 { "hadt", 1, -32400, "America/Adak" },
 { "hadt", 1, -32400, "America/Atka" },
 { "hast", 0, -36000, "America/Adak" },
 { "hast", 0, -36000, "America/Atka" },
 { "hdt", 1, -34200, "Pacific/Honolulu" },
 { "hdt", 1, -34200, "HST" },
 { "hkst", 1, 32400, "Asia/Hong_Kong" },
 { "hkt", 0, 28800, "Asia/Hong_Kong" },
 { "hmt", 0, -19776, "America/Havana" },
 { "hmt", 0, -6872, "Atlantic/Azores" },
 { "hmt", 0, 21200, "Asia/Calcutta" },
 { "hmt", 0, 21200, "Asia/Dacca" },
 { "hmt", 0, 21200, "Asia/Dhaka" },
 { "hmt", 0, 21200, "Asia/Kolkata" },
 { "hmt", 0, 5992, "EET" },
 { "hmt", 0, 5992, "Europe/Helsinki" },
 { "hmt", 0, 5992, "Europe/Mariehamn" },
 { "hovst", 1, 28800, "Asia/Hovd" },
 { "hovt", 0, 21600, "Asia/Hovd" },
 { "hovt", 0, 25200, "Asia/Hovd" },
 { "hpt", 1, -34200, "Pacific/Honolulu" },
 { "hpt", 1, -34200, "HST" },
 { "hst", 0, -36000, "Pacific/Honolulu" },
 { "hst", 0, -37800, "Pacific/Honolulu" },
 { "hst", 0, -36000, "HST" },
 { "hst", 0, -36000, "Pacific/Johnston" },
 { "hst", 0, -37800, "HST" },
 { "hwt", 1, -34200, "Pacific/Honolulu" },
 { "hwt", 1, -34200, "HST" },
 { "ict", 0, 25200, "Asia/Bangkok" },
 { "ict", 0, 25200, "Asia/Ho_Chi_Minh" },
 { "ict", 0, 25200, "Asia/Phnom_Penh" },
 { "ict", 0, 25200, "Asia/Saigon" },
 { "ict", 0, 25200, "Asia/Vientiane" },
 { "ict", 0, 28800, "Asia/Ho_Chi_Minh" },
 { "ict", 0, 28800, "Asia/Phnom_Penh" },
 { "ict", 0, 28800, "Asia/Saigon" },
 { "ict", 0, 28800, "Asia/Vientiane" },
 { "iddt", 1, 14400, "Asia/Jerusalem" },
 { "iddt", 1, 14400, "Asia/Tel_Aviv" },
 { "idt", 1, 10800, "Asia/Jerusalem" },
 { "idt", 1, 10800, "Asia/Gaza" },
 { "idt", 1, 10800, "Asia/Tel_Aviv" },
 { "ihst", 1, 21600, "Asia/Colombo" },
 { "imt", 0, 25040, "Asia/Irkutsk" },
 { "imt", 0, 7016, "Asia/Istanbul" },
 { "imt", 0, 7016, "Europe/Istanbul" },
 { "iot", 0, 18000, "Indian/Chagos" },
 { "iot", 0, 21600, "Indian/Chagos" },
 { "irdt", 1, 16200, "Asia/Tehran" },
 { "irdt", 1, 18000, "Asia/Tehran" },
 { "irkst", 1, 28800, "Asia/Irkutsk" },
 { "irkst", 1, 32400, "Asia/Irkutsk" },
 { "irkt", 0, 25200, "Asia/Irkutsk" },
 { "irkt", 0, 28800, "Asia/Irkutsk" },
 { "irst", 0, 12600, "Asia/Tehran" },
 { "irst", 0, 14400, "Asia/Tehran" },
 { "isst", 1, 0, "Atlantic/Reykjavik" },
 { "ist", 0, 7200, "Asia/Jerusalem" },
 { "ist", 0, -3600, "Atlantic/Reykjavik" },
 { "ist", 0, 19800, "Asia/Calcutta" },
 { "ist", 0, 19800, "Asia/Colombo" },
 { "ist", 0, 19800, "Asia/Dacca" },
 { "ist", 0, 19800, "Asia/Dhaka" },
 { "ist", 0, 19800, "Asia/Karachi" },
 { "ist", 0, 19800, "Asia/Kathmandu" },
 { "ist", 0, 19800, "Asia/Katmandu" },
 { "ist", 0, 19800, "Asia/Kolkata" },
 { "ist", 0, 19800, "Asia/Thimbu" },
 { "ist", 0, 19800, "Asia/Thimphu" },
 { "ist", 1, 2079, "Europe/Dublin" },
 { "ist", 1, 23400, "Asia/Calcutta" },
 { "ist", 1, 23400, "Asia/Colombo" },
 { "ist", 1, 23400, "Asia/Karachi" },
 { "ist", 1, 23400, "Asia/Kolkata" },
 { "ist", 0, 3600, "Europe/Dublin" },
 { "ist", 1, 3600, "Europe/Dublin" },
 { "ist", 0, 7200, "Asia/Gaza" },
 { "ist", 0, 7200, "Asia/Tel_Aviv" },
 { "javt", 0, 26400, "Asia/Jakarta" },
 { "jdt", 1, 36000, "Asia/Tokyo" },
 { "jmt", 0, -1368, "Atlantic/St_Helena" },
 { "jmt", 0, 25632, "Asia/Jakarta" },
 { "jmt", 0, 8440, "Asia/Jerusalem" },
 { "jmt", 0, 8440, "Asia/Tel_Aviv" },
 { "jst", 0, 32400, "Asia/Tokyo" },
 { "jst", 0, 32400, "Asia/Dili" },
 { "jst", 0, 32400, "Asia/Hong_Kong" },
 { "jst", 0, 32400, "Asia/Jakarta" },
 { "jst", 0, 32400, "Asia/Kuala_Lumpur" },
 { "jst", 0, 32400, "Asia/Kuching" },
 { "jst", 0, 32400, "Asia/Makassar" },
 { "jst", 0, 32400, "Asia/Manila" },
 { "jst", 0, 32400, "Asia/Pontianak" },
 { "jst", 0, 32400, "Asia/Rangoon" },
 { "jst", 0, 32400, "Asia/Sakhalin" },
 { "jst", 0, 32400, "Asia/Singapore" },
 { "jst", 0, 32400, "Asia/Ujung_Pandang" },
 { "jst", 0, 32400, "Pacific/Nauru" },
 { "kart", 0, 18000, "Asia/Karachi" },
 { "kast", 0, 18000, "Asia/Kashgar" },
 { "kast", 0, 19800, "Asia/Kashgar" },
 { "kdt", 1, 32400, "Asia/Seoul" },
 { "kdt", 1, 36000, "Asia/Seoul" },
 { "kdt", 1, 32400, "ROK" },
 { "kdt", 1, 36000, "ROK" },
 { "kgst", 1, 21600, "Asia/Bishkek" },
 { "kgt", 0, 18000, "Asia/Bishkek" },
 { "kgt", 0, 21600, "Asia/Bishkek" },
 { "kizst", 1, 21600, "Asia/Qyzylorda" },
 { "kizt", 0, 14400, "Asia/Qyzylorda" },
 { "kizt", 0, 18000, "Asia/Qyzylorda" },
 { "kizt", 0, 21600, "Asia/Qyzylorda" },
 { "kmt", 0, 5736, "Europe/Vilnius" },
 { "kmt", 0, -14696, "America/St_Vincent" },
 { "kmt", 0, -18432, "America/Cayman" },
 { "kmt", 0, -18432, "America/Grand_Turk" },
 { "kmt", 0, -18432, "America/Jamaica" },
 { "kmt", 0, 7324, "Europe/Kiev" },
 { "kost", 0, 39600, "Pacific/Kosrae" },
 { "kost", 0, 43200, "Pacific/Kosrae" },
 { "krast", 1, 25200, "Asia/Krasnoyarsk" },
 { "krast", 1, 28800, "Asia/Krasnoyarsk" },
 { "krast", 1, 25200, "Asia/Novokuznetsk" },
 { "krast", 1, 28800, "Asia/Novokuznetsk" },
 { "krat", 0, 21600, "Asia/Krasnoyarsk" },
 { "krat", 0, 25200, "Asia/Krasnoyarsk" },
 { "krat", 0, 21600, "Asia/Novokuznetsk" },
 { "krat", 0, 25200, "Asia/Novokuznetsk" },
 { "kst", 0, 28800, "Asia/Seoul" },
 { "kst", 0, 30600, "Asia/Seoul" },
 { "kst", 0, 32400, "Asia/Seoul" },
 { "kst", 0, 28800, "Asia/Pyongyang" },
 { "kst", 0, 28800, "ROK" },
 { "kst", 0, 30600, "Asia/Pyongyang" },
 { "kst", 0, 30600, "ROK" },
 { "kst", 0, 32400, "Asia/Pyongyang" },
 { "kst", 0, 32400, "ROK" },
 { "kuyst", 1, 10800, "Europe/Samara" },
 { "kuyst", 1, 14400, "Europe/Samara" },
 { "kuyst", 1, 18000, "Europe/Samara" },
 { "kuyt", 0, 10800, "Europe/Samara" },
 { "kuyt", 0, 14400, "Europe/Samara" },
 { "kwat", 0, -43200, "Pacific/Kwajalein" },
 { "lhst", 0, 37800, "Australia/Lord_Howe" },
 { "lhst", 1, 39600, "Australia/Lord_Howe" },
 { "lhst", 1, 41400, "Australia/Lord_Howe" },
 { "lhst", 0, 37800, "Australia/LHI" },
 { "lhst", 1, 39600, "Australia/LHI" },
 { "lhst", 1, 41400, "Australia/LHI" },
 { "lint", 0, -36000, "Pacific/Kiritimati" },
 { "lint", 0, -38400, "Pacific/Kiritimati" },
 { "lint", 0, 50400, "Pacific/Kiritimati" },
 { "lkt", 0, 21600, "Asia/Colombo" },
 { "lkt", 0, 23400, "Asia/Colombo" },
 { "lmt", 0, -11188, "America/Sao_Paulo" },
 { "lmt", 0, -11188, "Brazil/East" },
 { "lmt", 0, -11568, "America/Araguaina" },
 { "lmt", 0, -11636, "America/Belem" },
 { "lmt", 0, -12416, "America/Godthab" },
 { "lmt", 0, -12560, "America/Cayenne" },
 { "lmt", 0, -13108, "America/Campo_Grande" },
 { "lmt", 0, -13128, "America/Santarem" },
 { "lmt", 0, -13240, "America/Paramaribo" },
 { "lmt", 0, -13460, "America/Cuiaba" },
 { "lmt", 0, -13480, "America/Miquelon" },
 { "lmt", 0, -13960, "America/Guyana" },
 { "lmt", 0, -14308, "America/Barbados" },
 { "lmt", 0, -14388, "America/Glace_Bay" },
 { "lmt", 0, -14404, "America/Manaus" },
 { "lmt", 0, -14404, "Brazil/West" },
 { "lmt", 0, -14560, "America/Boa_Vista" },
 { "lmt", 0, -14736, "America/Dominica" },
 { "lmt", 0, -14764, "America/Port_of_Spain" },
 { "lmt", 0, -14768, "America/Guadeloupe" },
 { "lmt", 0, -14768, "America/Marigot" },
 { "lmt", 0, -14768, "America/St_Barthelemy" },
 { "lmt", 0, -14820, "America/Grenada" },
 { "lmt", 0, -14832, "America/Antigua" },
 { "lmt", 0, -14932, "America/Montserrat" },
 { "lmt", 0, -15052, "America/St_Kitts" },
 { "lmt", 0, -15136, "America/Anguilla" },
 { "lmt", 0, -15264, "America/Halifax" },
 { "lmt", 0, -15264, "Canada/Atlantic" },
 { "lmt", 0, -15336, "America/Porto_Velho" },
 { "lmt", 0, -15508, "America/Tortola" },
 { "lmt", 0, -15544, "Atlantic/Bermuda" },
 { "lmt", 0, -15584, "America/St_Thomas" },
 { "lmt", 0, -15584, "America/Virgin" },
 { "lmt", 0, -1624, "Atlantic/Faeroe" },
 { "lmt", 0, -1624, "Atlantic/Faroe" },
 { "lmt", 0, -16272, "America/Porto_Acre" },
 { "lmt", 0, -16272, "America/Rio_Branco" },
 { "lmt", 0, -16272, "Brazil/Acre" },
 { "lmt", 0, -16508, "America/Thule" },
 { "lmt", 0, -16544, "America/Curacao" },
 { "lmt", 0, -16768, "America/Eirunepe" },
 { "lmt", 0, -16824, "America/Aruba" },
 { "lmt", 0, -1820, "Africa/Casablanca" },
 { "lmt", 0, -18516, "America/Lima" },
 { "lmt", 0, -18564, "America/Nassau" },
 { "lmt", 0, -1920, "Africa/Bamako" },
 { "lmt", 0, -1920, "Africa/Timbuktu" },
 { "lmt", 0, -19931, "America/Detroit" },
 { "lmt", 0, -20824, "America/Cancun" },
 { "lmt", 0, -20932, "America/Tegucigalpa" },
 { "lmt", 0, -21168, "America/Belize" },
 { "lmt", 0, -21408, "America/El_Salvador" },
 { "lmt", 0, -21504, "Pacific/Galapagos" },
 { "lmt", 0, -21508, "America/Merida" },
 { "lmt", 0, -21724, "America/Guatemala" },
 { "lmt", 0, -2192, "Africa/Sao_Tome" },
 { "lmt", 0, -2192, "Europe/Lisbon" },
 { "lmt", 0, -23796, "America/Mexico_City" },
 { "lmt", 0, -23796, "Mexico/General" },
 { "lmt", 0, -24000, "America/Matamoros" },
 { "lmt", 0, -24076, "America/Monterrey" },
 { "lmt", 0, -25060, "America/Ojinaga" },
 { "lmt", 0, -25116, "America/Regina" },
 { "lmt", 0, -25116, "Canada/East-Saskatchewan" },
 { "lmt", 0, -25116, "Canada/Saskatchewan" },
 { "lmt", 0, -25260, "America/Bahia_Banderas" },
 { "lmt", 0, -25460, "America/Chihuahua" },
 { "lmt", 0, -25540, "America/Mazatlan" },
 { "lmt", 0, -25540, "Mexico/BajaSur" },
 { "lmt", 0, -25880, "America/Swift_Current" },
 { "lmt", 0, -26632, "America/Hermosillo" },
 { "lmt", 0, -27232, "America/Edmonton" },
 { "lmt", 0, -27232, "Canada/Mountain" },
 { "lmt", 0, -27568, "America/Santa_Isabel" },
 { "lmt", 0, -28084, "America/Ensenada" },
 { "lmt", 0, -28084, "America/Tijuana" },
 { "lmt", 0, -28084, "Mexico/BajaNorte" },
 { "lmt", 0, -3168, "Africa/El_Aaiun" },
 { "lmt", 0, -32388, "Pacific/Gambier" },
 { "lmt", 0, -3292, "Africa/Conakry" },
 { "lmt", 0, -33480, "Pacific/Marquesas" },
 { "lmt", 0, -35896, "Pacific/Tahiti" },
 { "lmt", 0, -364, "Africa/Ouagadougou" },
 { "lmt", 0, -3696, "Atlantic/Canary" },
 { "lmt", 0, -3740, "Africa/Bissau" },
 { "lmt", 0, -3828, "Africa/Nouakchott" },
 { "lmt", 0, -3996, "Africa/Banjul" },
 { "lmt", 0, -40968, "Pacific/Pago_Pago" },
 { "lmt", 0, -40968, "Pacific/Samoa" },
 { "lmt", 0, -41216, "Pacific/Apia" },
 { "lmt", 0, -4184, "Africa/Dakar" },
 { "lmt", 0, -4480, "America/Danmarkshavn" },
 { "lmt", 0, -5272, "America/Scoresbysund" },
 { "lmt", 0, -52, "Africa/Accra" },
 { "lmt", 0, -5644, "Atlantic/Cape_Verde" },
 { "lmt", 0, -7780, "America/Noronha" },
 { "lmt", 0, -7780, "Brazil/DeNoronha" },
 { "lmt", 0, -8376, "America/Recife" },
 { "lmt", 0, -8572, "America/Maceio" },
 { "lmt", 0, -9240, "America/Fortaleza" },
 { "lmt", 0, -9244, "America/Bahia" },
 { "lmt", 0, -968, "Africa/Abidjan" },
 { "lmt", 0, 10356, "Africa/Djibouti" },
 { "lmt", 0, 10384, "Indian/Comoro" },
 { "lmt", 0, 10660, "Europe/Volgograd" },
 { "lmt", 0, 10680, "Asia/Yerevan" },
 { "lmt", 0, 10848, "Asia/Aden" },
 { "lmt", 0, 10856, "Indian/Mayotte" },
 { "lmt", 0, 11212, "Asia/Riyadh" },
 { "lmt", 0, 11404, "Indian/Antananarivo" },
 { "lmt", 0, 11516, "Asia/Kuwait" },
 { "lmt", 0, 11964, "Asia/Baku" },
 { "lmt", 0, 12036, "Europe/Samara" },
 { "lmt", 0, 12064, "Asia/Aqtau" },
 { "lmt", 0, 12140, "Asia/Bahrain" },
 { "lmt", 0, 12324, "Asia/Oral" },
 { "lmt", 0, 12344, "Asia/Tehran" },
 { "lmt", 0, 12368, "Asia/Qatar" },
 { "lmt", 0, 13272, "Asia/Dubai" },
 { "lmt", 0, 13308, "Indian/Mahe" },
 { "lmt", 0, 13312, "Indian/Reunion" },
 { "lmt", 0, 13720, "Asia/Aqtobe" },
 { "lmt", 0, 13800, "Indian/Mauritius" },
 { "lmt", 0, 14012, "Asia/Ashgabat" },
 { "lmt", 0, 14012, "Asia/Ashkhabad" },
 { "lmt", 0, 14060, "Asia/Muscat" },
 { "lmt", 0, 14544, "Asia/Yekaterinburg" },
 { "lmt", 0, 1476, "Europe/Luxembourg" },
 { "lmt", 0, 15712, "Asia/Qyzylorda" },
 { "lmt", 0, 16032, "Asia/Samarkand" },
 { "lmt", 0, 16092, "Asia/Karachi" },
 { "lmt", 0, 16512, "Asia/Dushanbe" },
 { "lmt", 0, 16632, "Asia/Tashkent" },
 { "lmt", 0, 17380, "Indian/Chagos" },
 { "lmt", 0, 17616, "Asia/Omsk" },
 { "lmt", 0, 17904, "Asia/Bishkek" },
 { "lmt", 0, 18236, "Asia/Kashgar" },
 { "lmt", 0, 18468, "Asia/Almaty" },
 { "lmt", 0, 19900, "Asia/Novosibirsk" },
 { "lmt", 0, 20476, "Asia/Kathmandu" },
 { "lmt", 0, 20476, "Asia/Katmandu" },
 { "lmt", 0, 21020, "Asia/Urumqi" },
 { "lmt", 0, 2108, "Africa/Malabo" },
 { "lmt", 0, 21516, "Asia/Thimbu" },
 { "lmt", 0, 21516, "Asia/Thimphu" },
 { "lmt", 0, 21996, "Asia/Hovd" },
 { "lmt", 0, 22280, "Asia/Krasnoyarsk" },
 { "lmt", 0, 2268, "Africa/Libreville" },
 { "lmt", 0, 2328, "Africa/Douala" },
 { "lmt", 0, 24624, "Asia/Vientiane" },
 { "lmt", 0, 25180, "Asia/Phnom_Penh" },
 { "lmt", 0, 25580, "Asia/Chongqing" },
 { "lmt", 0, 25580, "Asia/Chungking" },
 { "lmt", 0, 25600, "Asia/Ho_Chi_Minh" },
 { "lmt", 0, 25600, "Asia/Saigon" },
 { "lmt", 0, 25652, "Asia/Ulaanbaatar" },
 { "lmt", 0, 25652, "Asia/Ulan_Bator" },
 { "lmt", 0, 26240, "Asia/Pontianak" },
 { "lmt", 0, 26480, "Asia/Kuching" },
 { "lmt", 0, 27260, "Asia/Macao" },
 { "lmt", 0, 27260, "Asia/Macau" },
 { "lmt", 0, 27396, "Asia/Hong_Kong" },
 { "lmt", 0, 27480, "Asia/Choibalsan" },
 { "lmt", 0, 27580, "Asia/Brunei" },
 { "lmt", 0, 28656, "Asia/Makassar" },
 { "lmt", 0, 28656, "Asia/Ujung_Pandang" },
 { "lmt", 0, 29152, "Asia/Shanghai" },
 { "lmt", 0, 29152, "PRC" },
 { "lmt", 0, 30140, "Asia/Dili" },
 { "lmt", 0, 30404, "Asia/Harbin" },
 { "lmt", 0, 31120, "Asia/Yakutsk" },
 { "lmt", 0, 3164, "Africa/Tripoli" },
 { "lmt", 0, 31664, "Asia/Vladivostok" },
 { "lmt", 0, 33768, "Asia/Jayapura" },
 { "lmt", 0, 34248, "Asia/Sakhalin" },
 { "lmt", 0, 3612, "Africa/Ndjamena" },
 { "lmt", 0, 36192, "Asia/Magadan" },
 { "lmt", 0, 3668, "Africa/Brazzaville" },
 { "lmt", 0, 38076, "Asia/Kamchatka" },
 { "lmt", 0, 38388, "Pacific/Guadalcanal" },
 { "lmt", 0, 39948, "Pacific/Noumea" },
 { "lmt", 0, 40060, "Pacific/Nauru" },
 { "lmt", 0, 40396, "Pacific/Efate" },
 { "lmt", 0, 42596, "Asia/Anadyr" },
 { "lmt", 0, 42820, "Pacific/Fiji" },
 { "lmt", 0, 44028, "Pacific/Chatham" },
 { "lmt", 0, 4460, "Africa/Bangui" },
 { "lmt", 0, 4760, "Europe/Tirane" },
 { "lmt", 0, 508, "Africa/Niamey" },
 { "lmt", 0, 628, "Africa/Porto-Novo" },
 { "lmt", 0, 6600, "Africa/Maseru" },
 { "lmt", 0, 6788, "Africa/Lusaka" },
 { "lmt", 0, 7216, "Africa/Kigali" },
 { "lmt", 0, 7452, "Africa/Harare" },
 { "lmt", 0, 7464, "Africa/Mbabane" },
 { "lmt", 0, 7780, "Africa/Kampala" },
 { "lmt", 0, 7808, "Africa/Khartoum" },
 { "lmt", 0, 7820, "Africa/Maputo" },
 { "lmt", 0, 8008, "Asia/Nicosia" },
 { "lmt", 0, 8008, "Europe/Nicosia" },
 { "lmt", 0, 816, "Africa/Lagos" },
 { "lmt", 0, 8400, "Africa/Blantyre" },
 { "lmt", 0, 8624, "Asia/Amman" },
 { "lmt", 0, 8712, "Asia/Damascus" },
 { "lmt", 0, 8836, "Africa/Nairobi" },
 { "lmt", 0, 9428, "Africa/Dar_es_Salaam" },
 { "lont", 0, 25200, "Asia/Chongqing" },
 { "lont", 0, 25200, "Asia/Chungking" },
 { "lrt", 0, -2670, "Africa/Monrovia" },
 { "lst", 1, 9384, "Europe/Riga" },
 { "madmt", 1, 3600, "Atlantic/Madeira" },
 { "madst", 1, 0, "Atlantic/Madeira" },
 { "madt", 0, -3600, "Atlantic/Madeira" },
 { "magst", 1, 39600, "Asia/Magadan" },
 { "magst", 1, 43200, "Asia/Magadan" },
 { "magt", 0, 36000, "Asia/Magadan" },
 { "magt", 0, 39600, "Asia/Magadan" },
 { "malst", 1, 26400, "Asia/Singapore" },
 { "malst", 1, 26400, "Asia/Kuala_Lumpur" },
 { "malt", 0, 25200, "Asia/Singapore" },
 { "malt", 0, 26400, "Asia/Singapore" },
 { "malt", 0, 27000, "Asia/Singapore" },
 { "malt", 0, 25200, "Asia/Kuala_Lumpur" },
 { "malt", 0, 26400, "Asia/Kuala_Lumpur" },
 { "malt", 0, 27000, "Asia/Kuala_Lumpur" },
 { "mart", 0, -34200, "Pacific/Marquesas" },
 { "mawt", 0, 18000, "Antarctica/Mawson" },
 { "mawt", 0, 21600, "Antarctica/Mawson" },
 { "mddt", 1, -18000, "America/Cambridge_Bay" },
 { "mddt", 1, -18000, "America/Yellowknife" },
 { "mdst", 1, 16248, "Europe/Moscow" },
 { "mdt", 1, -21600, "America/Denver" },
 { "mdt", 1, -21600, "America/Bahia_Banderas" },
 { "mdt", 1, -21600, "America/Boise" },
 { "mdt", 1, -21600, "America/Cambridge_Bay" },
 { "mdt", 1, -21600, "America/Chihuahua" },
 { "mdt", 1, -21600, "America/Edmonton" },
 { "mdt", 1, -21600, "America/Hermosillo" },
 { "mdt", 1, -21600, "America/Inuvik" },
 { "mdt", 1, -21600, "America/Mazatlan" },
 { "mdt", 1, -21600, "America/North_Dakota/Center" },
 { "mdt", 1, -21600, "America/North_Dakota/New_Salem" },
 { "mdt", 1, -21600, "America/Ojinaga" },
 { "mdt", 1, -21600, "America/Phoenix" },
 { "mdt", 1, -21600, "America/Regina" },
 { "mdt", 1, -21600, "America/Shiprock" },
 { "mdt", 1, -21600, "America/Swift_Current" },
 { "mdt", 1, -21600, "America/Yellowknife" },
 { "mdt", 1, -21600, "Canada/East-Saskatchewan" },
 { "mdt", 1, -21600, "Canada/Mountain" },
 { "mdt", 1, -21600, "Canada/Saskatchewan" },
 { "mdt", 1, -21600, "Mexico/BajaSur" },
 { "mdt", 1, -21600, "MST" },
 { "mest", 1, 7200, "MET" },
 { "met", 0, 3600, "MET" },
 { "mht", 0, 39600, "Pacific/Kwajalein" },
 { "mht", 0, 43200, "Pacific/Kwajalein" },
 { "mht", 0, 39600, "Pacific/Majuro" },
 { "mht", 0, 43200, "Pacific/Majuro" },
 { "mist", 0, 39600, "Antarctica/Macquarie" },
 { "mmt", 0, 9000, "Europe/Moscow" },
 { "mmt", 0, 9048, "Europe/Moscow" },
 { "mmt", 0, -13484, "America/Montevideo" },
 { "mmt", 0, -20712, "America/Managua" },
 { "mmt", 0, -2588, "Africa/Monrovia" },
 { "mmt", 0, 17640, "Indian/Maldives" },
 { "mmt", 0, 19172, "Asia/Colombo" },
 { "mmt", 0, 23400, "Asia/Rangoon" },
 { "mmt", 0, 28656, "Asia/Makassar" },
 { "mmt", 0, 28656, "Asia/Ujung_Pandang" },
 { "mmt", 0, 6600, "Europe/Minsk" },
 { "most", 1, 32400, "Asia/Macao" },
 { "most", 1, 32400, "Asia/Macau" },
 { "mot", 0, 28800, "Asia/Macao" },
 { "mot", 0, 28800, "Asia/Macau" },
 { "mpt", 1, -21600, "America/Denver" },
 { "mpt", 1, -21600, "America/Boise" },
 { "mpt", 1, -21600, "America/Cambridge_Bay" },
 { "mpt", 1, -21600, "America/Edmonton" },
 { "mpt", 1, -21600, "America/North_Dakota/Center" },
 { "mpt", 1, -21600, "America/North_Dakota/New_Salem" },
 { "mpt", 1, -21600, "America/Regina" },
 { "mpt", 1, -21600, "America/Shiprock" },
 { "mpt", 1, -21600, "America/Swift_Current" },
 { "mpt", 1, -21600, "America/Yellowknife" },
 { "mpt", 1, -21600, "Canada/East-Saskatchewan" },
 { "mpt", 1, -21600, "Canada/Mountain" },
 { "mpt", 1, -21600, "Canada/Saskatchewan" },
 { "mpt", 1, -21600, "MST" },
 { "mpt", 0, 32400, "Pacific/Saipan" },
 { "mpt", 0, 36000, "Pacific/Saipan" },
 { "msd", 1, 14400, "Europe/Moscow" },
 { "msd", 1, 18000, "Europe/Moscow" },
 { "msd", 1, 14400, "Europe/Chisinau" },
 { "msd", 1, 14400, "Europe/Kaliningrad" },
 { "msd", 1, 14400, "Europe/Kiev" },
 { "msd", 1, 14400, "Europe/Minsk" },
 { "msd", 1, 14400, "Europe/Riga" },
 { "msd", 1, 14400, "Europe/Simferopol" },
 { "msd", 1, 14400, "Europe/Tallinn" },
 { "msd", 1, 14400, "Europe/Tiraspol" },
 { "msd", 1, 14400, "Europe/Uzhgorod" },
 { "msd", 1, 14400, "Europe/Vilnius" },
 { "msd", 1, 14400, "Europe/Zaporozhye" },
 { "msk", 0, 10800, "Europe/Moscow" },
 { "msk", 0, 10800, "Europe/Chisinau" },
 { "msk", 0, 10800, "Europe/Kaliningrad" },
 { "msk", 0, 10800, "Europe/Kiev" },
 { "msk", 0, 10800, "Europe/Minsk" },
 { "msk", 0, 10800, "Europe/Riga" },
 { "msk", 0, 10800, "Europe/Simferopol" },
 { "msk", 0, 10800, "Europe/Tallinn" },
 { "msk", 0, 10800, "Europe/Tiraspol" },
 { "msk", 0, 10800, "Europe/Uzhgorod" },
 { "msk", 0, 10800, "Europe/Vilnius" },
 { "msk", 0, 10800, "Europe/Zaporozhye" },
 { "mst", 0, -25200, "America/Denver" },
 { "mst", 0, -25200, "America/Bahia_Banderas" },
 { "mst", 0, -25200, "America/Boise" },
 { "mst", 0, -25200, "America/Cambridge_Bay" },
 { "mst", 0, -25200, "America/Chihuahua" },
 { "mst", 0, -25200, "America/Dawson_Creek" },
 { "mst", 0, -25200, "America/Edmonton" },
 { "mst", 0, -25200, "America/Ensenada" },
 { "mst", 0, -25200, "America/Hermosillo" },
 { "mst", 0, -25200, "America/Inuvik" },
 { "mst", 0, -25200, "America/Mazatlan" },
 { "mst", 0, -25200, "America/Mexico_City" },
 { "mst", 0, -25200, "America/North_Dakota/Center" },
 { "mst", 0, -25200, "America/North_Dakota/New_Salem" },
 { "mst", 0, -25200, "America/Ojinaga" },
 { "mst", 0, -25200, "America/Phoenix" },
 { "mst", 0, -25200, "America/Regina" },
 { "mst", 0, -25200, "America/Santa_Isabel" },
 { "mst", 0, -25200, "America/Shiprock" },
 { "mst", 0, -25200, "America/Swift_Current" },
 { "mst", 0, -25200, "America/Tijuana" },
 { "mst", 0, -25200, "America/Yellowknife" },
 { "mst", 0, -25200, "Canada/East-Saskatchewan" },
 { "mst", 0, -25200, "Canada/Mountain" },
 { "mst", 0, -25200, "Canada/Saskatchewan" },
 { "mst", 0, -25200, "Mexico/BajaNorte" },
 { "mst", 0, -25200, "Mexico/BajaSur" },
 { "mst", 0, -25200, "Mexico/General" },
 { "mst", 0, -25200, "MST" },
 { "mst", 1, 12648, "Europe/Moscow" },
 { "must", 1, 18000, "Indian/Mauritius" },
 { "mut", 0, 14400, "Indian/Mauritius" },
 { "mvt", 0, 18000, "Indian/Maldives" },
 { "mwt", 1, -21600, "America/Denver" },
 { "mwt", 1, -21600, "America/Boise" },
 { "mwt", 1, -21600, "America/Cambridge_Bay" },
 { "mwt", 1, -21600, "America/Edmonton" },
 { "mwt", 1, -21600, "America/North_Dakota/Center" },
 { "mwt", 1, -21600, "America/North_Dakota/New_Salem" },
 { "mwt", 1, -21600, "America/Phoenix" },
 { "mwt", 1, -21600, "America/Regina" },
 { "mwt", 1, -21600, "America/Shiprock" },
 { "mwt", 1, -21600, "America/Swift_Current" },
 { "mwt", 1, -21600, "America/Yellowknife" },
 { "mwt", 1, -21600, "Canada/East-Saskatchewan" },
 { "mwt", 1, -21600, "Canada/Mountain" },
 { "mwt", 1, -21600, "Canada/Saskatchewan" },
 { "mwt", 1, -21600, "MST" },
 { "myt", 0, 28800, "Asia/Kuala_Lumpur" },
 { "myt", 0, 28800, "Asia/Kuching" },
 { "ncst", 1, 43200, "Pacific/Noumea" },
 { "nct", 0, 39600, "Pacific/Noumea" },
 { "nddt", 1, -5400, "America/St_Johns" },
 { "nddt", 1, -5400, "Canada/Newfoundland" },
 { "ndt", 1, -9000, "America/St_Johns" },
 { "ndt", 1, -9052, "America/St_Johns" },
 { "ndt", 1, -36000, "Pacific/Midway" },
 { "ndt", 1, -9000, "America/Goose_Bay" },
 { "ndt", 1, -9000, "Canada/Newfoundland" },
 { "ndt", 1, -9052, "America/Goose_Bay" },
 { "ndt", 1, -9052, "Canada/Newfoundland" },
 { "negt", 0, -12600, "America/Paramaribo" },
 { "nest", 1, 4800, "Europe/Amsterdam" },
 { "net", 0, 1200, "Europe/Amsterdam" },
 { "nft", 0, 41400, "Pacific/Norfolk" },
 { "nmt", 0, 20928, "Asia/Novokuznetsk" },
 { "nmt", 0, 40320, "Pacific/Norfolk" },
 { "novst", 1, 25200, "Asia/Novosibirsk" },
 { "novst", 1, 28800, "Asia/Novosibirsk" },
 { "novst", 1, 25200, "Asia/Novokuznetsk" },
 { "novt", 0, 21600, "Asia/Novosibirsk" },
 { "novt", 0, 25200, "Asia/Novosibirsk" },
 { "novt", 0, 21600, "Asia/Novokuznetsk" },
 { "npt", 1, -9000, "America/St_Johns" },
 { "npt", 1, -36000, "America/Adak" },
 { "npt", 1, -36000, "America/Atka" },
 { "npt", 1, -36000, "America/Nome" },
 { "npt", 1, -9000, "America/Goose_Bay" },
 { "npt", 1, -9000, "Canada/Newfoundland" },
 { "npt", 0, 20700, "Asia/Katmandu" },
 { "npt", 0, 20700, "Asia/Kathmandu" },
 { "nrt", 0, 41400, "Pacific/Nauru" },
 { "nrt", 0, 43200, "Pacific/Nauru" },
 { "nst", 0, -12600, "America/St_Johns" },
 { "nst", 0, -12652, "America/St_Johns" },
 { "nst", 0, -12600, "America/Goose_Bay" },
 { "nst", 0, -12600, "Canada/Newfoundland" },
 { "nst", 0, -12652, "America/Goose_Bay" },
 { "nst", 0, -12652, "Canada/Newfoundland" },
 { "nst", 0, -39600, "America/Adak" },
 { "nst", 0, -39600, "America/Atka" },
 { "nst", 0, -39600, "America/Nome" },
 { "nst", 0, -39600, "Pacific/Midway" },
 { "nst", 0, -39600, "Pacific/Pago_Pago" },
 { "nst", 0, -39600, "Pacific/Samoa" },
 { "nst", 1, 4772, "Europe/Amsterdam" },
 { "nut", 0, -39600, "Pacific/Niue" },
 { "nut", 0, -40800, "Pacific/Niue" },
 { "nut", 0, -41400, "Pacific/Niue" },
 { "nwt", 1, -9000, "America/St_Johns" },
 { "nwt", 1, -36000, "America/Adak" },
 { "nwt", 1, -36000, "America/Atka" },
 { "nwt", 1, -36000, "America/Nome" },
 { "nwt", 1, -9000, "America/Goose_Bay" },
 { "nwt", 1, -9000, "Canada/Newfoundland" },
 { "nzdt", 1, 46800, "Pacific/Auckland" },
 { "nzdt", 1, 46800, "Antarctica/McMurdo" },
 { "nzdt", 1, 46800, "Antarctica/South_Pole" },
 { "nzdt", 1, 46800, "NZ" },
 { "nzmt", 0, 41400, "Pacific/Auckland" },
 { "nzmt", 0, 41400, "NZ" },
 { "nzst", 0, 43200, "Pacific/Auckland" },
 { "nzst", 1, 43200, "Pacific/Auckland" },
 { "nzst", 1, 45000, "Pacific/Auckland" },
 { "nzst", 0, 43200, "Antarctica/McMurdo" },
 { "nzst", 0, 43200, "Antarctica/South_Pole" },
 { "nzst", 0, 43200, "NZ" },
 { "nzst", 1, 43200, "NZ" },
 { "nzst", 1, 45000, "NZ" },
 { "omsst", 1, 21600, "Asia/Omsk" },
 { "omsst", 1, 25200, "Asia/Omsk" },
 { "omst", 0, 18000, "Asia/Omsk" },
 { "omst", 0, 21600, "Asia/Omsk" },
 { "orast", 1, 18000, "Asia/Oral" },
 { "orat", 0, 14400, "Asia/Oral" },
 { "orat", 0, 18000, "Asia/Oral" },
 { "pddt", 1, -21600, "America/Inuvik" },
 { "pdt", 1, -25200, "America/Los_Angeles" },
 { "pdt", 1, -25200, "America/Boise" },
 { "pdt", 1, -25200, "America/Dawson" },
 { "pdt", 1, -25200, "America/Dawson_Creek" },
 { "pdt", 1, -25200, "America/Ensenada" },
 { "pdt", 1, -25200, "America/Juneau" },
 { "pdt", 1, -25200, "America/Santa_Isabel" },
 { "pdt", 1, -25200, "America/Tijuana" },
 { "pdt", 1, -25200, "America/Vancouver" },
 { "pdt", 1, -25200, "America/Whitehorse" },
 { "pdt", 1, -25200, "Canada/Pacific" },
 { "pdt", 1, -25200, "Canada/Yukon" },
 { "pdt", 1, -25200, "Mexico/BajaNorte" },
 { "pest", 1, -14400, "America/Lima" },
 { "petst", 1, 43200, "Asia/Kamchatka" },
 { "petst", 1, 46800, "Asia/Kamchatka" },
 { "pett", 0, 39600, "Asia/Kamchatka" },
 { "pett", 0, 43200, "Asia/Kamchatka" },
 { "pet", 0, -18000, "America/Lima" },
 { "pgt", 0, 36000, "Pacific/Port_Moresby" },
 { "phot", 0, -39600, "Pacific/Enderbury" },
 { "phot", 0, -43200, "Pacific/Enderbury" },
 { "phot", 0, 46800, "Pacific/Enderbury" },
 { "phst", 1, 32400, "Asia/Manila" },
 { "pht", 0, 28800, "Asia/Manila" },
 { "pkst", 1, 21600, "Asia/Karachi" },
 { "pkt", 0, 18000, "Asia/Karachi" },
 { "pmdt", 1, -7200, "America/Miquelon" },
 { "pmst", 0, -10800, "America/Miquelon" },
 { "pmt", 0, -13236, "America/Paramaribo" },
 { "pmt", 0, -13252, "America/Paramaribo" },
 { "pmt", 0, 26240, "Asia/Pontianak" },
 { "pmt", 0, 36000, "Antarctica/DumontDUrville" },
 { "pmt", 0, 561, "Africa/Algiers" },
 { "pmt", 0, 561, "Africa/Tunis" },
 { "pmt", 0, 561, "Europe/Monaco" },
 { "pmt", 0, 561, "Europe/Paris" },
 { "pmt", 0, 561, "WET" },
 { "pnt", 0, -30600, "Pacific/Pitcairn" },
 { "pont", 0, 39600, "Pacific/Pohnpei" },
 { "pont", 0, 39600, "Pacific/Ponape" },
 { "ppmt", 0, -17340, "America/Port-au-Prince" },
 { "ppt", 1, -25200, "America/Los_Angeles" },
 { "ppt", 1, -25200, "America/Dawson_Creek" },
 { "ppt", 1, -25200, "America/Ensenada" },
 { "ppt", 1, -25200, "America/Juneau" },
 { "ppt", 1, -25200, "America/Santa_Isabel" },
 { "ppt", 1, -25200, "America/Tijuana" },
 { "ppt", 1, -25200, "America/Vancouver" },
 { "ppt", 1, -25200, "Canada/Pacific" },
 { "ppt", 1, -25200, "Mexico/BajaNorte" },
 { "pst", 0, -28800, "America/Los_Angeles" },
 { "pst", 0, -28800, "America/Bahia_Banderas" },
 { "pst", 0, -28800, "America/Boise" },
 { "pst", 0, -28800, "America/Dawson" },
 { "pst", 0, -28800, "America/Dawson_Creek" },
 { "pst", 0, -28800, "America/Ensenada" },
 { "pst", 0, -28800, "America/Hermosillo" },
 { "pst", 0, -28800, "America/Inuvik" },
 { "pst", 0, -28800, "America/Juneau" },
 { "pst", 0, -28800, "America/Mazatlan" },
 { "pst", 0, -28800, "America/Santa_Isabel" },
 { "pst", 0, -28800, "America/Tijuana" },
 { "pst", 0, -28800, "America/Vancouver" },
 { "pst", 0, -28800, "America/Whitehorse" },
 { "pst", 0, -28800, "Canada/Pacific" },
 { "pst", 0, -28800, "Canada/Yukon" },
 { "pst", 0, -28800, "Mexico/BajaNorte" },
 { "pst", 0, -28800, "Mexico/BajaSur" },
 { "pst", 0, -28800, "Pacific/Pitcairn" },
 { "pwt", 1, -25200, "America/Los_Angeles" },
 { "pwt", 1, -25200, "America/Dawson_Creek" },
 { "pwt", 1, -25200, "America/Ensenada" },
 { "pwt", 1, -25200, "America/Juneau" },
 { "pwt", 1, -25200, "America/Santa_Isabel" },
 { "pwt", 1, -25200, "America/Tijuana" },
 { "pwt", 1, -25200, "America/Vancouver" },
 { "pwt", 1, -25200, "Canada/Pacific" },
 { "pwt", 1, -25200, "Mexico/BajaNorte" },
 { "pwt", 0, 32400, "Pacific/Palau" },
 { "pyst", 1, -10800, "America/Asuncion" },
 { "pyt", 0, -10800, "America/Asuncion" },
 { "pyt", 0, -14400, "America/Asuncion" },
 { "qmt", 0, -18840, "America/Guayaquil" },
 { "qyzst", 1, 25200, "Asia/Qyzylorda" },
 { "qyzt", 0, 18000, "Asia/Qyzylorda" },
 { "qyzt", 0, 21600, "Asia/Qyzylorda" },
 { "ret", 0, 14400, "Indian/Reunion" },
 { "rmt", 0, 5784, "Europe/Riga" },
 { "rmt", 0, -5268, "Atlantic/Reykjavik" },
 { "rmt", 0, 23076, "Asia/Rangoon" },
 { "rott", 0, -10800, "Antarctica/Rothera" },
 { "sakst", 1, 39600, "Asia/Sakhalin" },
 { "sakst", 1, 43200, "Asia/Sakhalin" },
 { "sakt", 0, 36000, "Asia/Sakhalin" },
 { "sakt", 0, 39600, "Asia/Sakhalin" },
 { "samst", 1, 21600, "Asia/Samarkand" },
 { "samst", 1, 14400, "Europe/Samara" },
 { "samst", 1, 18000, "Europe/Samara" },
 { "samt", 0, 14400, "Asia/Samarkand" },
 { "samt", 0, 18000, "Asia/Samarkand" },
 { "samt", 0, -41400, "Pacific/Apia" },
 { "samt", 0, -41400, "Pacific/Pago_Pago" },
 { "samt", 0, -41400, "Pacific/Samoa" },
 { "samt", 0, 10800, "Europe/Samara" },
 { "samt", 0, 14400, "Europe/Samara" },
 { "sast", 1, 10800, "Africa/Johannesburg" },
 { "sast", 0, 5400, "Africa/Johannesburg" },
 { "sast", 0, 7200, "Africa/Johannesburg" },
 { "sast", 1, 10800, "Africa/Maseru" },
 { "sast", 1, 10800, "Africa/Windhoek" },
 { "sast", 0, 7200, "Africa/Maseru" },
 { "sast", 0, 7200, "Africa/Mbabane" },
 { "sast", 0, 7200, "Africa/Windhoek" },
 { "sbt", 0, 39600, "Pacific/Guadalcanal" },
 { "sct", 0, 14400, "Indian/Mahe" },
 { "sdmt", 0, -16800, "America/Santo_Domingo" },
 { "sgt", 0, 27000, "Asia/Singapore" },
 { "sgt", 0, 28800, "Asia/Singapore" },
 { "shest", 1, 21600, "Asia/Aqtau" },
 { "shet", 0, 18000, "Asia/Aqtau" },
 { "shet", 0, 21600, "Asia/Aqtau" },
 { "sjmt", 0, -20180, "America/Costa_Rica" },
 { "slst", 1, -1200, "Africa/Freetown" },
 { "slst", 1, 3600, "Africa/Freetown" },
 { "smt", 0, 25580, "Asia/Saigon" },
 { "smt", 0, -13884, "Atlantic/Stanley" },
 { "smt", 0, -16966, "America/Santiago" },
 { "smt", 0, -16966, "Chile/Continental" },
 { "smt", 0, 24925, "Asia/Kuala_Lumpur" },
 { "smt", 0, 24925, "Asia/Singapore" },
 { "smt", 0, 25580, "Asia/Ho_Chi_Minh" },
 { "smt", 0, 25580, "Asia/Phnom_Penh" },
 { "smt", 0, 25580, "Asia/Vientiane" },
 { "smt", 0, 8160, "Europe/Simferopol" },
 { "srt", 0, -10800, "America/Paramaribo" },
 { "srt", 0, -12600, "America/Paramaribo" },
 { "sst", 0, -39600, "Pacific/Samoa" },
 { "sst", 0, -39600, "Pacific/Midway" },
 { "sst", 0, -39600, "Pacific/Pago_Pago" },
 { "stat", 0, 10800, "Europe/Volgograd" },
 { "stat", 0, 14400, "Europe/Volgograd" },
 { "svest", 1, 18000, "Asia/Yekaterinburg" },
 { "svest", 1, 21600, "Asia/Yekaterinburg" },
 { "svet", 0, 14400, "Asia/Yekaterinburg" },
 { "svet", 0, 18000, "Asia/Yekaterinburg" },
 { "swat", 0, 5400, "Africa/Windhoek" },
 { "syot", 0, 10800, "Antarctica/Syowa" },
 { "taht", 0, -36000, "Pacific/Tahiti" },
 { "tasst", 1, 25200, "Asia/Samarkand" },
 { "tasst", 1, 21600, "Asia/Tashkent" },
 { "tasst", 1, 25200, "Asia/Tashkent" },
 { "tast", 0, 21600, "Asia/Samarkand" },
 { "tast", 0, 18000, "Asia/Tashkent" },
 { "tast", 0, 21600, "Asia/Tashkent" },
 { "tbist", 1, 14400, "Asia/Tbilisi" },
 { "tbist", 1, 18000, "Asia/Tbilisi" },
 { "tbit", 0, 10800, "Asia/Tbilisi" },
 { "tbit", 0, 14400, "Asia/Tbilisi" },
 { "tbmt", 0, 10756, "Asia/Tbilisi" },
 { "tft", 0, 18000, "Indian/Kerguelen" },
 { "tjt", 0, 18000, "Asia/Dushanbe" },
 { "tkt", 0, -36000, "Pacific/Fakaofo" },
 { "tlt", 0, 28800, "Asia/Dili" },
 { "tlt", 0, 32400, "Asia/Dili" },
 { "tmt", 0, 12344, "Asia/Tehran" },
 { "tmt", 0, 14400, "Asia/Ashgabat" },
 { "tmt", 0, 14400, "Asia/Ashkhabad" },
 { "tmt", 0, 18000, "Asia/Ashgabat" },
 { "tmt", 0, 18000, "Asia/Ashkhabad" },
 { "tmt", 0, 5940, "Europe/Tallinn" },
 { "tost", 1, 50400, "Pacific/Tongatapu" },
 { "tot", 0, 44400, "Pacific/Tongatapu" },
 { "tot", 0, 46800, "Pacific/Tongatapu" },
 { "trst", 1, 14400, "Europe/Istanbul" },
 { "trst", 1, 14400, "Asia/Istanbul" },
 { "trt", 0, 10800, "Europe/Istanbul" },
 { "trt", 0, 10800, "Asia/Istanbul" },
 { "tsat", 0, 10800, "Europe/Volgograd" },
 { "tvt", 0, 43200, "Pacific/Funafuti" },
 { "uct", 0, 0, "Etc/UCT" },
 { "uct", 0, 0, "UCT" },
 { "ulast", 1, 32400, "Asia/Ulaanbaatar" },
 { "ulast", 1, 32400, "Asia/Ulan_Bator" },
 { "ulat", 0, 25200, "Asia/Ulaanbaatar" },
 { "ulat", 0, 28800, "Asia/Ulaanbaatar" },
 { "ulat", 0, 25200, "Asia/Choibalsan" },
 { "ulat", 0, 25200, "Asia/Ulan_Bator" },
 { "ulat", 0, 28800, "Asia/Choibalsan" },
 { "ulat", 0, 28800, "Asia/Ulan_Bator" },
 { "urast", 1, 18000, "Asia/Oral" },
 { "urast", 1, 21600, "Asia/Oral" },
 { "urat", 0, 14400, "Asia/Oral" },
 { "urat", 0, 18000, "Asia/Oral" },
 { "urat", 0, 21600, "Asia/Oral" },
 { "urut", 0, 21600, "Asia/Urumqi" },
 { "utc", 0, 0, "Etc/Universal" },
 { "utc", 0, 0, "Etc/UTC" },
 { "utc", 0, 0, "Etc/Zulu" },
 { "utc", 0, 0, "GMT" },
 { "utc", 0, 0, "UTC" },
 { "utc", 0, 0, "UTC" },
 { "uyhst", 1, -10800, "America/Montevideo" },
 { "uyhst", 1, -9000, "America/Montevideo" },
 { "uyst", 1, -7200, "America/Montevideo" },
 { "uyt", 0, -10800, "America/Montevideo" },
 { "uyt", 0, -12600, "America/Montevideo" },
 { "uzst", 1, 21600, "Asia/Samarkand" },
 { "uzst", 1, 21600, "Asia/Tashkent" },
 { "uzt", 0, 18000, "Asia/Samarkand" },
 { "uzt", 0, 18000, "Asia/Tashkent" },
 { "vet", 0, -14400, "America/Caracas" },
 { "vet", 0, -16200, "America/Caracas" },
 { "vlasst", 1, 36000, "Asia/Vladivostok" },
 { "vlast", 0, 32400, "Asia/Vladivostok" },
 { "vlast", 1, 39600, "Asia/Vladivostok" },
 { "vlat", 0, 32400, "Asia/Vladivostok" },
 { "vlat", 0, 36000, "Asia/Vladivostok" },
 { "volst", 1, 14400, "Europe/Volgograd" },
 { "volst", 1, 18000, "Europe/Volgograd" },
 { "volt", 0, 10800, "Europe/Volgograd" },
 { "volt", 0, 14400, "Europe/Volgograd" },
 { "vost", 0, 21600, "Antarctica/Vostok" },
 { "vust", 1, 43200, "Pacific/Efate" },
 { "vut", 0, 39600, "Pacific/Efate" },
 { "wakt", 0, 43200, "Pacific/Wake" },
 { "warst", 1, -10800, "America/Mendoza" },
 { "warst", 1, -10800, "America/Argentina/Jujuy" },
 { "warst", 1, -10800, "America/Argentina/Mendoza" },
 { "warst", 1, -10800, "America/Argentina/San_Luis" },
 { "warst", 1, -10800, "America/Jujuy" },
 { "wart", 0, -14400, "America/Mendoza" },
 { "wart", 0, -14400, "America/Argentina/Catamarca" },
 { "wart", 0, -14400, "America/Argentina/ComodRivadavia" },
 { "wart", 0, -14400, "America/Argentina/Cordoba" },
 { "wart", 0, -14400, "America/Argentina/Jujuy" },
 { "wart", 0, -14400, "America/Argentina/La_Rioja" },
 { "wart", 0, -14400, "America/Argentina/Mendoza" },
 { "wart", 0, -14400, "America/Argentina/Rio_Gallegos" },
 { "wart", 0, -14400, "America/Argentina/Salta" },
 { "wart", 0, -14400, "America/Argentina/San_Juan" },
 { "wart", 0, -14400, "America/Argentina/San_Luis" },
 { "wart", 0, -14400, "America/Argentina/Tucuman" },
 { "wart", 0, -14400, "America/Argentina/Ushuaia" },
 { "wart", 0, -14400, "America/Catamarca" },
 { "wart", 0, -14400, "America/Cordoba" },
 { "wart", 0, -14400, "America/Jujuy" },
 { "wart", 0, -14400, "America/Rosario" },
 { "wast", 1, 7200, "Africa/Windhoek" },
 { "wast", 1, 7200, "Africa/Ndjamena" },
 { "wat", 0, -3600, "Africa/Dakar" },
 { "wat", 0, -3600, "Africa/Bamako" },
 { "wat", 0, -3600, "Africa/Banjul" },
 { "wat", 0, -3600, "Africa/Bissau" },
 { "wat", 0, -3600, "Africa/Conakry" },
 { "wat", 0, -3600, "Africa/El_Aaiun" },
 { "wat", 0, -3600, "Africa/Freetown" },
 { "wat", 0, -3600, "Africa/Niamey" },
 { "wat", 0, -3600, "Africa/Nouakchott" },
 { "wat", 0, -3600, "Africa/Timbuktu" },
 { "wat", 0, 0, "Africa/Freetown" },
 { "wat", 0, 3600, "Africa/Brazzaville" },
 { "wat", 0, 3600, "Africa/Bangui" },
 { "wat", 0, 3600, "Africa/Douala" },
 { "wat", 0, 3600, "Africa/Kinshasa" },
 { "wat", 0, 3600, "Africa/Lagos" },
 { "wat", 0, 3600, "Africa/Libreville" },
 { "wat", 0, 3600, "Africa/Luanda" },
 { "wat", 0, 3600, "Africa/Malabo" },
 { "wat", 0, 3600, "Africa/Ndjamena" },
 { "wat", 0, 3600, "Africa/Niamey" },
 { "wat", 0, 3600, "Africa/Porto-Novo" },
 { "wat", 0, 3600, "Africa/Windhoek" },
 { "wemt", 1, 7200, "Europe/Lisbon" },
 { "wemt", 1, 7200, "Europe/Madrid" },
 { "wemt", 1, 7200, "Europe/Monaco" },
 { "wemt", 1, 7200, "Europe/Paris" },
 { "wemt", 1, 7200, "WET" },
 { "west", 1, 3600, "Europe/Paris" },
 { "west", 1, 3600, "Africa/Algiers" },
 { "west", 1, 3600, "Africa/Casablanca" },
 { "west", 1, 3600, "Africa/Ceuta" },
 { "west", 1, 3600, "Atlantic/Canary" },
 { "west", 1, 3600, "Atlantic/Faeroe" },
 { "west", 1, 3600, "Atlantic/Faroe" },
 { "west", 1, 3600, "Atlantic/Madeira" },
 { "west", 1, 3600, "Europe/Brussels" },
 { "west", 1, 3600, "Europe/Lisbon" },
 { "west", 1, 3600, "Europe/Luxembourg" },
 { "west", 1, 3600, "Europe/Madrid" },
 { "west", 1, 3600, "Europe/Monaco" },
 { "west", 1, 3600, "WET" },
 { "west", 1, 7200, "Europe/Luxembourg" },
 { "wet", 0, 0, "Europe/Paris" },
 { "wet", 0, 0, "Africa/Algiers" },
 { "wet", 0, 0, "Africa/Casablanca" },
 { "wet", 0, 0, "Africa/Ceuta" },
 { "wet", 0, 0, "Africa/El_Aaiun" },
 { "wet", 0, 0, "Atlantic/Azores" },
 { "wet", 0, 0, "Atlantic/Canary" },
 { "wet", 0, 0, "Atlantic/Faeroe" },
 { "wet", 0, 0, "Atlantic/Faroe" },
 { "wet", 0, 0, "Atlantic/Madeira" },
 { "wet", 0, 0, "Europe/Andorra" },
 { "wet", 0, 0, "Europe/Brussels" },
 { "wet", 0, 0, "Europe/Lisbon" },
 { "wet", 0, 0, "Europe/Luxembourg" },
 { "wet", 0, 0, "Europe/Madrid" },
 { "wet", 0, 0, "Europe/Monaco" },
 { "wet", 0, 0, "WET" },
 { "wet", 0, 3600, "Europe/Luxembourg" },
 { "wft", 0, 43200, "Pacific/Wallis" },
 { "wgst", 1, -7200, "America/Godthab" },
 { "wgst", 1, -7200, "America/Danmarkshavn" },
 { "wgt", 0, -10800, "America/Godthab" },
 { "wgt", 0, -10800, "America/Danmarkshavn" },
 { "wit", 0, 25200, "Asia/Jakarta" },
 { "wit", 0, 27000, "Asia/Jakarta" },
 { "wit", 0, 28800, "Asia/Jakarta" },
 { "wit", 0, 25200, "Asia/Pontianak" },
 { "wit", 0, 27000, "Asia/Pontianak" },
 { "wit", 0, 28800, "Asia/Pontianak" },
 { "wmt", 0, 5040, "Europe/Vilnius" },
 { "wmt", 0, 5040, "Europe/Warsaw" },
 { "wsdt", 1, -36000, "Pacific/Apia" },
 { "wst", 0, 28800, "Australia/Perth" },
 { "wst", 1, 32400, "Australia/Perth" },
 { "wst", 0, -39600, "Pacific/Apia" },
 { "wst", 0, 28800, "Antarctica/Casey" },
 { "wst", 0, 28800, "Australia/West" },
 { "wst", 1, 32400, "Australia/West" },
 { "yakst", 1, 32400, "Asia/Yakutsk" },
 { "yakst", 1, 36000, "Asia/Yakutsk" },
 { "yakt", 0, 28800, "Asia/Yakutsk" },
 { "yakt", 0, 32400, "Asia/Yakutsk" },
 { "yddt", 1, -25200, "America/Dawson" },
 { "yddt", 1, -25200, "America/Whitehorse" },
 { "yddt", 1, -25200, "Canada/Yukon" },
 { "ydt", 1, -28800, "America/Dawson" },
 { "ydt", 1, -28800, "America/Whitehorse" },
 { "ydt", 1, -28800, "America/Yakutat" },
 { "ydt", 1, -28800, "Canada/Yukon" },
 { "yekst", 1, 21600, "Asia/Yekaterinburg" },
 { "yekt", 0, 18000, "Asia/Yekaterinburg" },
 { "yerst", 1, 14400, "Asia/Yerevan" },
 { "yerst", 1, 18000, "Asia/Yerevan" },
 { "yert", 0, 10800, "Asia/Yerevan" },
 { "yert", 0, 14400, "Asia/Yerevan" },
 { "ypt", 1, -28800, "America/Dawson" },
 { "ypt", 1, -28800, "America/Whitehorse" },
 { "ypt", 1, -28800, "America/Yakutat" },
 { "ypt", 1, -28800, "Canada/Yukon" },
 { "yst", 0, -32400, "America/Anchorage" },
 { "yst", 0, -32400, "America/Dawson" },
 { "yst", 0, -32400, "America/Juneau" },
 { "yst", 0, -32400, "America/Nome" },
 { "yst", 0, -32400, "America/Whitehorse" },
 { "yst", 0, -32400, "America/Yakutat" },
 { "yst", 0, -32400, "Canada/Yukon" },
 { "ywt", 1, -28800, "America/Dawson" },
 { "ywt", 1, -28800, "America/Whitehorse" },
 { "ywt", 1, -28800, "America/Yakutat" },
 { "ywt", 1, -28800, "Canada/Yukon" },
 { "a", 0, 3600, ((void *)0) },
 { "b", 0, 7200, ((void *)0) },
 { "c", 0, 10800, ((void *)0) },
 { "d", 0, 14400, ((void *)0) },
 { "e", 0, 18000, ((void *)0) },
 { "f", 0, 21600, ((void *)0) },
 { "g", 0, 25200, ((void *)0) },
 { "h", 0, 28800, ((void *)0) },
 { "i", 0, 32400, ((void *)0) },
 { "k", 0, 36000, ((void *)0) },
 { "l", 0, 39600, ((void *)0) },
 { "m", 0, 43200, ((void *)0) },
 { "n", 0, -3600, ((void *)0) },
 { "o", 0, -7200, ((void *)0) },
 { "p", 0, -10800, ((void *)0) },
 { "q", 0, -14400, ((void *)0) },
 { "r", 0, -18000, ((void *)0) },
 { "s", 0, -21600, ((void *)0) },
 { "t", 0, -25200, ((void *)0) },
 { "u", 0, -28800, ((void *)0) },
 { "v", 0, -32400, ((void *)0) },
 { "w", 0, -36000, ((void *)0) },
 { "x", 0, -39600, ((void *)0) },
 { "y", 0, -43200, ((void *)0) },
 { "zzz", 0, 0, "Antarctica/Davis" },
 { "zzz", 0, 0, "America/Cambridge_Bay" },
 { "zzz", 0, 0, "America/Inuvik" },
 { "zzz", 0, 0, "America/Iqaluit" },
 { "zzz", 0, 0, "America/Pangnirtung" },
 { "zzz", 0, 0, "America/Rankin_Inlet" },
 { "zzz", 0, 0, "America/Resolute" },
 { "zzz", 0, 0, "America/Yellowknife" },
 { "zzz", 0, 0, "Antarctica/Casey" },
 { "zzz", 0, 0, "Antarctica/DumontDUrville" },
 { "zzz", 0, 0, "Antarctica/Macquarie" },
 { "zzz", 0, 0, "Antarctica/Mawson" },
 { "zzz", 0, 0, "Antarctica/McMurdo" },
 { "zzz", 0, 0, "Antarctica/Palmer" },
 { "zzz", 0, 0, "Antarctica/Rothera" },
 { "zzz", 0, 0, "Antarctica/South_Pole" },
 { "zzz", 0, 0, "Antarctica/Syowa" },
 { "zzz", 0, 0, "Antarctica/Vostok" },
 { "zzz", 0, 0, "Indian/Kerguelen" },
 { "z", 0, 0, ((void *)0) },
# 176 "ext/date/lib/parse_date.re" 2
 { ((void *)0), 0, 0, ((void *)0) },
};

const static timelib_tz_lookup_table timelib_timezone_fallbackmap[] = {
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-12-06-5087b0ee42-ac631dd580/php/ext/date/lib/fallbackmap.h" 1
 { "sst", 0, -11, "Pacific/Apia" },
 { "hst", 0, -10, "Pacific/Honolulu" },
 { "akst", 0, -9, "America/Anchorage" },
 { "akdt", 1, -8, "America/Anchorage" },
 { "pst", 0, -8, "America/Los_Angeles" },
 { "pdt", 1, -7, "America/Los_Angeles" },
 { "mst", 0, -7, "America/Denver" },
 { "mdt", 1, -6, "America/Denver" },
 { "cst", 0, -6, "America/Chicago" },
 { "cdt", 1, -5, "America/Chicago" },
 { "est", 0, -5, "America/New_York" },
 { "edt", 1, -4, "America/New_York" },
 { "ast", 0, -4, "America/Halifax" },
 { "adt", 1, -3, "America/Halifax" },
 { "brt", 0, -3, "America/Sao_Paulo" },
 { "brst", 1, -2, "America/Sao_Paulo" },
 { "azost", 0, -1, "Atlantic/Azores" },
 { "azodt", 1, 0, "Atlantic/Azores" },
 { "gmt", 0, 0, "Europe/London" },
 { "bst", 1, 1, "Europe/London" },
 { "cet", 0, 1, "Europe/Paris" },
 { "cest", 1, 2, "Europe/Paris" },
 { "eet", 0, 2, "Europe/Helsinki" },
 { "eest", 1, 3, "Europe/Helsinki" },
 { "msk", 0, 3, "Europe/Moscow" },
 { "msd", 1, 4, "Europe/Moscow" },
 { "gst", 0, 4, "Asia/Dubai" },
 { "pkt", 0, 5, "Asia/Karachi" },
 { "ist", 0, 5.5, "Asia/Kolkata" },
 { "npt", 0, 5.75, "Asia/Katmandu" },
 { "yekt", 1, 6, "Asia/Yekaterinburg" },
 { "novst", 1, 7, "Asia/Novosibirsk" },
 { "krat", 0, 7, "Asia/Krasnoyarsk" },
 { "krast", 1, 8, "Asia/Krasnoyarsk" },
 { "jst", 0, 9, "Asia/Tokyo" },
 { "est", 0, 10, "Australia/Melbourne" },
 { "cst", 1, 10.5, "Australia/Adelaide" },
 { "est", 1, 11, "Australia/Melbourne" },
 { "nzst", 0, 12, "Pacific/Auckland" },
 { "nzdt", 1, 13, "Pacific/Auckland" },
# 181 "ext/date/lib/parse_date.re" 2
 { ((void *)0), 0, 0, ((void *)0) },
};

const static timelib_tz_lookup_table timelib_timezone_utc[] = {
 { "utc", 0, 0, "UTC" },
};

static timelib_relunit const timelib_relunit_lookup[] = {
 { "sec", 1, 1 },
 { "secs", 1, 1 },
 { "second", 1, 1 },
 { "seconds", 1, 1 },
 { "min", 2, 1 },
 { "mins", 2, 1 },
 { "minute", 2, 1 },
 { "minutes", 2, 1 },
 { "hour", 3, 1 },
 { "hours", 3, 1 },
 { "day", 4, 1 },
 { "days", 4, 1 },
 { "week", 4, 7 },
 { "weeks", 4, 7 },
 { "fortnight", 4, 14 },
 { "fortnights", 4, 14 },
 { "forthnight", 4, 14 },
 { "forthnights", 4, 14 },
 { "month", 5, 1 },
 { "months", 5, 1 },
 { "year", 6, 1 },
 { "years", 6, 1 },

 { "monday", 7, 1 },
 { "mon", 7, 1 },
 { "tuesday", 7, 2 },
 { "tue", 7, 2 },
 { "wednesday", 7, 3 },
 { "wed", 7, 3 },
 { "thursday", 7, 4 },
 { "thu", 7, 4 },
 { "friday", 7, 5 },
 { "fri", 7, 5 },
 { "saturday", 7, 6 },
 { "sat", 7, 6 },
 { "sunday", 7, 0 },
 { "sun", 7, 0 },

 { "weekday", 8, 0x01 },
 { "weekdays", 8, 0x01 },
 { ((void *)0), 0, 0 }
};


static timelib_lookup_table const timelib_reltext_lookup[] = {
 { "first", 0, 1 },
 { "next", 0, 1 },
 { "second", 0, 2 },
 { "third", 0, 3 },
 { "fourth", 0, 4 },
 { "fifth", 0, 5 },
 { "sixth", 0, 6 },
 { "seventh", 0, 7 },
 { "eight", 0, 8 },
 { "eighth", 0, 8 },
 { "ninth", 0, 9 },
 { "tenth", 0, 10 },
 { "eleventh", 0, 11 },
 { "twelfth", 0, 12 },
 { "last", 0, -1 },
 { "previous", 0, -1 },
 { "this", 1, 0 },
 { ((void *)0), 1, 0 }
};


static timelib_lookup_table const timelib_month_lookup[] = {
 { "jan", 0, 1 },
 { "feb", 0, 2 },
 { "mar", 0, 3 },
 { "apr", 0, 4 },
 { "may", 0, 5 },
 { "jun", 0, 6 },
 { "jul", 0, 7 },
 { "aug", 0, 8 },
 { "sep", 0, 9 },
 { "sept", 0, 9 },
 { "oct", 0, 10 },
 { "nov", 0, 11 },
 { "dec", 0, 12 },
 { "i", 0, 1 },
 { "ii", 0, 2 },
 { "iii", 0, 3 },
 { "iv", 0, 4 },
 { "v", 0, 5 },
 { "vi", 0, 6 },
 { "vii", 0, 7 },
 { "viii", 0, 8 },
 { "ix", 0, 9 },
 { "x", 0, 10 },
 { "xi", 0, 11 },
 { "xii", 0, 12 },

 { "january", 0, 1 },
 { "february", 0, 2 },
 { "march", 0, 3 },
 { "april", 0, 4 },
 { "may", 0, 5 },
 { "june", 0, 6 },
 { "july", 0, 7 },
 { "august", 0, 8 },
 { "september", 0, 9 },
 { "october", 0, 10 },
 { "november", 0, 11 },
 { "december", 0, 12 },
 { ((void *)0), 0, 0 }
};
# 341 "ext/date/lib/parse_date.re"
static void add_warning(Scanner *s, char *error)
{
 s->errors->warning_count++;
 s->errors->warning_messages = realloc(s->errors->warning_messages, s->errors->warning_count * sizeof(timelib_error_message));
 s->errors->warning_messages[s->errors->warning_count - 1].position = s->tok ? s->tok - s->str : 0;
 s->errors->warning_messages[s->errors->warning_count - 1].character = s->tok ? *s->tok : 0;
 s->errors->warning_messages[s->errors->warning_count - 1].message = (__extension__ (__builtin_constant_p (error) && ((size_t)(const void *)((error) + 1) - (size_t)(const void *)(error) == 1) ? (((__const char *) (error))[0] == '\0' ? (char *) calloc ((size_t) 1, (size_t) 1) : ({ size_t __len = strlen (error) + 1; char *__retval = (char *) malloc (__len); if (__retval != ((void *)0)) __retval = (char *) memcpy (__retval, error, __len); __retval; })) : __strdup (error)));
}

static void add_error(Scanner *s, char *error)
{
 s->errors->error_count++;
 s->errors->error_messages = realloc(s->errors->error_messages, s->errors->error_count * sizeof(timelib_error_message));
 s->errors->error_messages[s->errors->error_count - 1].position = s->tok ? s->tok - s->str : 0;
 s->errors->error_messages[s->errors->error_count - 1].character = s->tok ? *s->tok : 0;
 s->errors->error_messages[s->errors->error_count - 1].message = (__extension__ (__builtin_constant_p (error) && ((size_t)(const void *)((error) + 1) - (size_t)(const void *)(error) == 1) ? (((__const char *) (error))[0] == '\0' ? (char *) calloc ((size_t) 1, (size_t) 1) : ({ size_t __len = strlen (error) + 1; char *__retval = (char *) malloc (__len); if (__retval != ((void *)0)) __retval = (char *) memcpy (__retval, error, __len); __retval; })) : __strdup (error)));
}

static void add_pbf_warning(Scanner *s, char *error, char *sptr, char *cptr)
{
 s->errors->warning_count++;
 s->errors->warning_messages = realloc(s->errors->warning_messages, s->errors->warning_count * sizeof(timelib_error_message));
 s->errors->warning_messages[s->errors->warning_count - 1].position = cptr - sptr;
 s->errors->warning_messages[s->errors->warning_count - 1].character = *cptr;
 s->errors->warning_messages[s->errors->warning_count - 1].message = (__extension__ (__builtin_constant_p (error) && ((size_t)(const void *)((error) + 1) - (size_t)(const void *)(error) == 1) ? (((__const char *) (error))[0] == '\0' ? (char *) calloc ((size_t) 1, (size_t) 1) : ({ size_t __len = strlen (error) + 1; char *__retval = (char *) malloc (__len); if (__retval != ((void *)0)) __retval = (char *) memcpy (__retval, error, __len); __retval; })) : __strdup (error)));
}

static void add_pbf_error(Scanner *s, char *error, char *sptr, char *cptr)
{
 s->errors->error_count++;
 s->errors->error_messages = realloc(s->errors->error_messages, s->errors->error_count * sizeof(timelib_error_message));
 s->errors->error_messages[s->errors->error_count - 1].position = cptr - sptr;
 s->errors->error_messages[s->errors->error_count - 1].character = *cptr;
 s->errors->error_messages[s->errors->error_count - 1].message = (__extension__ (__builtin_constant_p (error) && ((size_t)(const void *)((error) + 1) - (size_t)(const void *)(error) == 1) ? (((__const char *) (error))[0] == '\0' ? (char *) calloc ((size_t) 1, (size_t) 1) : ({ size_t __len = strlen (error) + 1; char *__retval = (char *) malloc (__len); if (__retval != ((void *)0)) __retval = (char *) memcpy (__retval, error, __len); __retval; })) : __strdup (error)));
}

static timelib_sll timelib_meridian(char **ptr, timelib_sll h)
{
 timelib_sll retval = 0;

 while (!(__extension__ (__builtin_constant_p (**ptr) && !__builtin_constant_p ("AaPp") && (**ptr) == '\0' ? (char *) __rawmemchr ("AaPp", **ptr) : __builtin_strchr ("AaPp", **ptr)))) {
  ++*ptr;
 }
 if (**ptr == 'a' || **ptr == 'A') {
  if (h == 12) {
   retval = -12;
  }
 } else if (h != 12) {
  retval = 12;
 }
 ++*ptr;
 if (**ptr == '.') {
  *ptr += 3;
 } else {
  ++*ptr;
 }
 return retval;
}

static timelib_sll timelib_meridian_with_check(char **ptr, timelib_sll h)
{
 timelib_sll retval = 0;

 while (!(__extension__ (__builtin_constant_p (**ptr) && !__builtin_constant_p ("AaPp") && (**ptr) == '\0' ? (char *) __rawmemchr ("AaPp", **ptr) : __builtin_strchr ("AaPp", **ptr)))) {
  ++*ptr;
 }
 if (**ptr == 'a' || **ptr == 'A') {
  if (h == 12) {
   retval = -12;
  }
 } else if (h != 12) {
  retval = 12;
 }
 ++*ptr;
 if (**ptr == '.') {
  ++*ptr;
  if (**ptr != 'm' && **ptr != 'M') {
   return -99999;
  }
  ++*ptr;
  if (**ptr != '.' ) {
   return -99999;
  }
  ++*ptr;
 } else if (**ptr == 'm' || **ptr == 'M') {
  ++*ptr;
 } else {
  return -99999;
 }
 return retval;
}

static char *timelib_string(Scanner *s)
{
 char *tmp = calloc(1, s->cur - s->tok + 1);
 memcpy(tmp, s->tok, s->cur - s->tok);

 return tmp;
}

static timelib_sll timelib_get_nr_ex(char **ptr, int max_length, int *scanned_length)
{
 char *begin, *end, *str;
 timelib_sll tmp_nr = -99999;
 int len = 0;

 while ((**ptr < '0') || (**ptr > '9')) {
  if (**ptr == '\0') {
   return -99999;
  }
  ++*ptr;
 }
 begin = *ptr;
 while ((**ptr >= '0') && (**ptr <= '9') && len < max_length) {
  ++*ptr;
  ++len;
 }
 end = *ptr;
 if (scanned_length) {
  *scanned_length = end - begin;
 }
 str = calloc(1, end - begin + 1);
 memcpy(str, begin, end - begin);
 tmp_nr = strtoll(str, ((void *)0), 10);
 free(str);
 return tmp_nr;
}

static timelib_sll timelib_get_nr(char **ptr, int max_length)
{
 return timelib_get_nr_ex(ptr, max_length, ((void *)0));
}

static void timelib_skip_day_suffix(char **ptr)
{
 if (((*__ctype_b_loc ())[(int) ((**ptr))] & (unsigned short int) _ISspace)) {
  return;
 }
 if (!strncasecmp(*ptr, "nd", 2) || !strncasecmp(*ptr, "rd", 2) ||!strncasecmp(*ptr, "st", 2) || !strncasecmp(*ptr, "th", 2)) {
  *ptr += 2;
 }
}

static double timelib_get_frac_nr(char **ptr, int max_length)
{
 char *begin, *end, *str;
 double tmp_nr = -99999;
 int len = 0;

 while ((**ptr != '.') && (**ptr != ':') && ((**ptr < '0') || (**ptr > '9'))) {
  if (**ptr == '\0') {
   return -99999;
  }
  ++*ptr;
 }
 begin = *ptr;
 while (((**ptr == '.') || (**ptr == ':') || ((**ptr >= '0') && (**ptr <= '9'))) && len < max_length) {
  ++*ptr;
  ++len;
 }
 end = *ptr;
 str = calloc(1, end - begin + 1);
 memcpy(str, begin, end - begin);
 if (str[0] == ':') {
  str[0] = '.';
 }
 tmp_nr = strtod(str, ((void *)0));
 free(str);
 return tmp_nr;
}

static timelib_ull timelib_get_unsigned_nr(char **ptr, int max_length)
{
 timelib_ull dir = 1;

 while (((**ptr < '0') || (**ptr > '9')) && (**ptr != '+') && (**ptr != '-')) {
  if (**ptr == '\0') {
   return -99999;
  }
  ++*ptr;
 }

 while (**ptr == '+' || **ptr == '-')
 {
  if (**ptr == '-') {
   dir *= -1;
  }
  ++*ptr;
 }
 return dir * timelib_get_nr(ptr, max_length);
}

static long timelib_parse_tz_cor(char **ptr)
{
 char *begin = *ptr, *end;
 long tmp;

 while (((*__ctype_b_loc ())[(int) ((**ptr))] & (unsigned short int) _ISdigit) || **ptr == ':') {
  ++*ptr;
 }
 end = *ptr;
 switch (end - begin) {
  case 1:
  case 2:
   return (int)(strtol(begin, ((void *)0), 10) * 60);
   break;
  case 3:
  case 4:
   if (begin[1] == ':') {
    tmp = (int)(strtol(begin, ((void *)0), 10) * 60) + strtol(begin + 2, ((void *)0), 10);
    return tmp;
   } else if (begin[2] == ':') {
    tmp = (int)(strtol(begin, ((void *)0), 10) * 60) + strtol(begin + 3, ((void *)0), 10);
    return tmp;
   } else {
    tmp = strtol(begin, ((void *)0), 10);
    return (int)(tmp / 100 * 60) + tmp % 100;
   }
  case 5:
   tmp = (int)(strtol(begin, ((void *)0), 10) * 60) + strtol(begin + 3, ((void *)0), 10);
   return tmp;
 }
 return 0;
}

static timelib_sll timelib_lookup_relative_text(char **ptr, int *behavior)
{
 char *word;
 char *begin = *ptr, *end;
 timelib_sll value = 0;
 const timelib_lookup_table *tp;

 while ((**ptr >= 'A' && **ptr <= 'Z') || (**ptr >= 'a' && **ptr <= 'z')) {
  ++*ptr;
 }
 end = *ptr;
 word = calloc(1, end - begin + 1);
 memcpy(word, begin, end - begin);

 for (tp = timelib_reltext_lookup; tp->name; tp++) {
  if (strcasecmp(word, tp->name) == 0) {
   value = tp->value;
   *behavior = tp->type;
  }
 }

 free(word);
 return value;
}

static timelib_sll timelib_get_relative_text(char **ptr, int *behavior)
{
 while (**ptr == ' ' || **ptr == '\t' || **ptr == '-' || **ptr == '/') {
  ++*ptr;
 }
 return timelib_lookup_relative_text(ptr, behavior);
}

static long timelib_lookup_month(char **ptr)
{
 char *word;
 char *begin = *ptr, *end;
 long value = 0;
 const timelib_lookup_table *tp;

 while ((**ptr >= 'A' && **ptr <= 'Z') || (**ptr >= 'a' && **ptr <= 'z')) {
  ++*ptr;
 }
 end = *ptr;
 word = calloc(1, end - begin + 1);
 memcpy(word, begin, end - begin);

 for (tp = timelib_month_lookup; tp->name; tp++) {
  if (strcasecmp(word, tp->name) == 0) {
   value = tp->value;
  }
 }

 free(word);
 return value;
}

static long timelib_get_month(char **ptr)
{
 while (**ptr == ' ' || **ptr == '\t' || **ptr == '-' || **ptr == '.' || **ptr == '/') {
  ++*ptr;
 }
 return timelib_lookup_month(ptr);
}

static void timelib_eat_spaces(char **ptr)
{
 while (**ptr == ' ' || **ptr == '\t') {
  ++*ptr;
 }
}

static void timelib_eat_until_separator(char **ptr)
{
 ++*ptr;
 while ((__extension__ (__builtin_constant_p (**ptr) && !__builtin_constant_p (" \t.,:;/-0123456789") && (**ptr) == '\0' ? (char *) __rawmemchr (" \t.,:;/-0123456789", **ptr) : __builtin_strchr (" \t.,:;/-0123456789", **ptr))) == ((void *)0)) {
  ++*ptr;
 }
}

static const timelib_relunit* timelib_lookup_relunit(char **ptr)
{
 char *word;
 char *begin = *ptr, *end;
 const timelib_relunit *tp, *value = ((void *)0);

 while (**ptr != '\0' && **ptr != ' ' && **ptr != ',' && **ptr != '\t') {
  ++*ptr;
 }
 end = *ptr;
 word = calloc(1, end - begin + 1);
 memcpy(word, begin, end - begin);

 for (tp = timelib_relunit_lookup; tp->name; tp++) {
  if (strcasecmp(word, tp->name) == 0) {
   value = tp;
   break;
  }
 }

 free(word);
 return value;
}

static void timelib_set_relative(char **ptr, timelib_sll amount, int behavior, Scanner *s)
{
 const timelib_relunit* relunit;

 if (!(relunit = timelib_lookup_relunit(ptr))) {
  return;
 }

 switch (relunit->unit) {
  case 1: s->time->relative.s += amount * relunit->multiplier; break;
  case 2: s->time->relative.i += amount * relunit->multiplier; break;
  case 3: s->time->relative.h += amount * relunit->multiplier; break;
  case 4: s->time->relative.d += amount * relunit->multiplier; break;
  case 5: s->time->relative.m += amount * relunit->multiplier; break;
  case 6: s->time->relative.y += amount * relunit->multiplier; break;

  case 7:
   { s->time->have_relative = 1; s->time->relative.have_weekday_relative = 1; };
   { s->time->have_time = 0; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; };
   s->time->relative.d += (amount > 0 ? amount - 1 : amount) * 7;
   s->time->relative.weekday = relunit->multiplier;
   s->time->relative.weekday_behavior = behavior;
   break;

  case 8:
   { s->time->have_relative = 1; s->time->relative.have_special_relative = 1; };
   { s->time->have_time = 0; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; };
   s->time->relative.special.type = relunit->multiplier;
   s->time->relative.special.amount = amount;
 }
}

const static timelib_tz_lookup_table* zone_search(const char *word, long gmtoffset, int isdst)
{
 int first_found = 0;
 const timelib_tz_lookup_table *tp, *first_found_elem = ((void *)0);
 const timelib_tz_lookup_table *fmp;

 if (strcasecmp("utc", word) == 0 || strcasecmp("gmt", word) == 0) {
  return timelib_timezone_utc;
 }

 for (tp = timelib_timezone_lookup; tp->name; tp++) {
  if (strcasecmp(word, tp->name) == 0) {
   if (!first_found) {
    first_found = 1;
    first_found_elem = tp;
    if (gmtoffset == -1) {
     return tp;
    }
   }
   if (tp->gmtoffset == gmtoffset) {
    return tp;
   }
  }
 }
 if (first_found) {
  return first_found_elem;
 }

 for (tp = timelib_timezone_lookup; tp->name; tp++) {
  if (tp->full_tz_name && strcasecmp(word, tp->full_tz_name) == 0) {
   if (!first_found) {
    first_found = 1;
    first_found_elem = tp;
    if (gmtoffset == -1) {
     return tp;
    }
   }
   if (tp->gmtoffset == gmtoffset) {
    return tp;
   }
  }
 }
 if (first_found) {
  return first_found_elem;
 }




 for (fmp = timelib_timezone_fallbackmap; fmp->name; fmp++) {
  if ((fmp->gmtoffset * 3600) == gmtoffset && fmp->type == isdst) {
   return fmp;
  }
 }
 return ((void *)0);
}

static long timelib_lookup_zone(char **ptr, int *dst, char **tz_abbr, int *found)
{
 char *word;
 char *begin = *ptr, *end;
 long value = 0;
 const timelib_tz_lookup_table *tp;

 while (**ptr != '\0' && **ptr != ')' && **ptr != ' ') {
  ++*ptr;
 }
 end = *ptr;
 word = calloc(1, end - begin + 1);
 memcpy(word, begin, end - begin);

 if ((tp = zone_search(word, -1, 0))) {
  value = -tp->gmtoffset / 60;
  *dst = tp->type;
  value += tp->type * 60;
  *found = 1;
 } else {
  *found = 0;
 }

 *tz_abbr = word;
 return value;
}

static long timelib_get_zone(char **ptr, int *dst, timelib_time *t, int *tz_not_found, const timelib_tzdb *tzdb, timelib_tz_get_wrapper tz_wrapper)
{
 timelib_tzinfo *res;
 long retval = 0;

 *tz_not_found = 0;

 while (**ptr == ' ' || **ptr == '\t' || **ptr == '(') {
  ++*ptr;
 }
 if ((*ptr)[0] == 'G' && (*ptr)[1] == 'M' && (*ptr)[2] == 'T' && ((*ptr)[3] == '+' || (*ptr)[3] == '-')) {
  *ptr += 3;
 }
 if (**ptr == '+') {
  ++*ptr;
  t->is_localtime = 1;
  t->zone_type = 1;
  *tz_not_found = 0;
  t->dst = 0;

  retval = -1 * timelib_parse_tz_cor(ptr);
 } else if (**ptr == '-') {
  ++*ptr;
  t->is_localtime = 1;
  t->zone_type = 1;
  *tz_not_found = 0;
  t->dst = 0;

  retval = timelib_parse_tz_cor(ptr);
 } else {
  int found = 0;
  long offset;
  char *tz_abbr;

  t->is_localtime = 1;

  offset = timelib_lookup_zone(ptr, dst, &tz_abbr, &found);
  if (found) {
   t->zone_type = 2;
  }
# 834 "ext/date/lib/parse_date.re"
  if (strstr(tz_abbr, "/") || __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (tz_abbr) && __builtin_constant_p ("UTC") && (__s1_len = strlen (tz_abbr), __s2_len = strlen ("UTC"), (!((size_t)(const void *)((tz_abbr) + 1) - (size_t)(const void *)(tz_abbr) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("UTC") + 1) - (size_t)(const void *)("UTC") == 1) || __s2_len >= 4)) ? __builtin_strcmp (tz_abbr, "UTC") : (__builtin_constant_p (tz_abbr) && ((size_t)(const void *)((tz_abbr) + 1) - (size_t)(const void *)(tz_abbr) == 1) && (__s1_len = strlen (tz_abbr), __s1_len < 4) ? (__builtin_constant_p ("UTC") && ((size_t)(const void *)(("UTC") + 1) - (size_t)(const void *)("UTC") == 1) ? __builtin_strcmp (tz_abbr, "UTC") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("UTC"); register int __result = (((__const unsigned char *) (__const char *) (tz_abbr))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (tz_abbr))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (tz_abbr))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (tz_abbr))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("UTC") && ((size_t)(const void *)(("UTC") + 1) - (size_t)(const void *)("UTC") == 1) && (__s2_len = strlen ("UTC"), __s2_len < 4) ? (__builtin_constant_p (tz_abbr) && ((size_t)(const void *)((tz_abbr) + 1) - (size_t)(const void *)(tz_abbr) == 1) ? __builtin_strcmp (tz_abbr, "UTC") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (tz_abbr); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("UTC"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("UTC"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("UTC"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("UTC"))[3]); } } __result; }))) : __builtin_strcmp (tz_abbr, "UTC")))); }) == 0) {
   if ((res = tz_wrapper(tz_abbr, tzdb)) != ((void *)0)) {
    t->tz_info = res;
    t->zone_type = 3;
    found++;
   }
  }
  if (found && t->zone_type != 3) {
   timelib_time_tz_abbr_update(t, tz_abbr);
  }
  free(tz_abbr);
  *tz_not_found = (found == 0);
  retval = offset;
 }
 while (**ptr == ')') {
  ++*ptr;
 }
 return retval;
}
# 864 "ext/date/lib/parse_date.re"
static int scan(Scanner *s, timelib_tz_get_wrapper tz_get_wrapper)
{
 uchar *cursor = s->cur;
 char *str, *ptr = ((void *)0);

std:
 s->tok = cursor;
 s->len = 0;
# 997 "ext/date/lib/parse_date.re"
# 879 "ext/date/lib/parse_date.c"
{
 uchar yych;
 unsigned int yyaccept = 0;
 static const unsigned char yybm[] = {
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
  100, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 128, 64, 160, 96, 0,
    2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 0, 0, 0, 0, 0, 0,
    0, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 8, 8, 8, 8, 8,
    8, 8, 8, 0, 0, 0, 0, 0,
    0, 24, 24, 24, 88, 24, 24, 24,
   88, 24, 24, 24, 24, 24, 88, 24,
   24, 24, 88, 88, 88, 24, 24, 24,
   24, 24, 24, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
 };

 ;
 if ((s->lim - cursor) < 31) return 257;;
 yych = *cursor;
 ;
 switch (yych) {
 case 0x00:
 case '\n': goto yy52;
 case '\t':
 case ' ': goto yy49;
 case '(': goto yy46;
 case '+':
 case '-': goto yy31;
 case ',':
 case '.': goto yy51;
 case '0': goto yy26;
 case '1': goto yy27;
 case '2': goto yy28;
 case '3': goto yy29;
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy30;
 case '@': goto yy12;
 case 'A': goto yy37;
 case 'B': goto yy18;
 case 'C':
 case 'H':
 case 'K':
 case 'Q':
 case 'R':
 case 'U':
 case 'Z': goto yy47;
 case 'D': goto yy41;
 case 'E': goto yy22;
 case 'F': goto yy14;
 case 'G': goto yy45;
 case 'I': goto yy32;
 case 'J': goto yy35;
 case 'L': goto yy16;
 case 'M': goto yy8;
 case 'N': goto yy6;
 case 'O': goto yy39;
 case 'P': goto yy24;
 case 'S': goto yy20;
 case 'T': goto yy10;
 case 'V': goto yy33;
 case 'W': goto yy43;
 case 'X': goto yy34;
 case 'Y': goto yy3;
 case 'a': goto yy38;
 case 'b': goto yy19;
 case 'c':
 case 'g':
 case 'h':
 case 'i':
 case 'k':
 case 'q':
 case 'r':
 case 'u':
 case 'v':
 case 'x':
 case 'z': goto yy48;
 case 'd': goto yy42;
 case 'e': goto yy23;
 case 'f': goto yy15;
 case 'j': goto yy36;
 case 'l': goto yy17;
 case 'm': goto yy9;
 case 'n': goto yy7;
 case 'o': goto yy40;
 case 'p': goto yy25;
 case 's': goto yy21;
 case 't': goto yy11;
 case 'w': goto yy44;
 case 'y': goto yy5;
 default: goto yy54;
 }
yy2:
 ;
# 1082 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_relative = 1; };


  if (*ptr == 'l') {
   s->time->relative.first_last_day_of = 2;
  } else {
   s->time->relative.first_last_day_of = 1;
  }

  free(str);
  return 280;
 }
# 1015 "ext/date/lib/parse_date.c"
yy3:
 ;
 ++cursor;
 if ((yych = *cursor) <= 'E') {
  if (yych <= ')') {
   if (yych >= ')') goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy141;
   goto yy1523;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy141;
   if (yych >= 'a') goto yy146;
  } else {
   if (yych <= 'e') goto yy1532;
   if (yych <= 'z') goto yy146;
  }
 }
yy4:
 ;
# 1676 "ext/date/lib/parse_date.re"
 {
  int tz_not_found;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->cur = cursor; if (s->time->have_zone) { s->time->have_zone > 1 ? add_error(s, "Double timezone specification") : add_warning(s, "Double timezone specification"); free(str); s->time->have_zone++; return 999; } else { s->time->have_zone++; } };
  s->time->z = timelib_get_zone((char **) &ptr, &s->time->dst, s->time, &tz_not_found, s->tzdb, tz_get_wrapper);
  if (tz_not_found) {
   add_error(s, "The timezone could not be found in the database");
  }
  free(str);
  return 300;
 }
# 1051 "ext/date/lib/parse_date.c"
yy5:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy141;
   goto yy1523;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   goto yy141;
  } else {
   if (yych <= 'e') goto yy1523;
   if (yych <= 'z') goto yy141;
   goto yy4;
  }
 }
yy6:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych <= 'D') {
   if (yych == ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy141;
  } else {
   if (yych <= 'H') {
    if (yych <= 'E') goto yy1494;
    goto yy141;
   } else {
    if (yych <= 'I') goto yy1495;
    if (yych <= 'N') goto yy141;
    goto yy1493;
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= '`') {
    if (yych <= 'Z') goto yy141;
    goto yy4;
   } else {
    if (yych == 'e') goto yy1510;
    goto yy146;
   }
  } else {
   if (yych <= 'n') {
    if (yych <= 'i') goto yy1511;
    goto yy146;
   } else {
    if (yych <= 'o') goto yy1509;
    if (yych <= 'z') goto yy146;
    goto yy4;
   }
  }
 }
yy7:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych <= 'D') {
   if (yych == ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy141;
  } else {
   if (yych <= 'H') {
    if (yych <= 'E') goto yy1494;
    goto yy141;
   } else {
    if (yych <= 'I') goto yy1495;
    if (yych <= 'N') goto yy141;
    goto yy1493;
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= '`') {
    if (yych <= 'Z') goto yy141;
    goto yy4;
   } else {
    if (yych == 'e') goto yy1494;
    goto yy141;
   }
  } else {
   if (yych <= 'n') {
    if (yych <= 'i') goto yy1495;
    goto yy141;
   } else {
    if (yych <= 'o') goto yy1493;
    if (yych <= 'z') goto yy141;
    goto yy4;
   }
  }
 }
yy8:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych <= 'A') {
   if (yych == ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy1463;
  } else {
   if (yych == 'I') goto yy1464;
   if (yych <= 'N') goto yy141;
   goto yy1465;
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy1478;
   goto yy146;
  } else {
   if (yych <= 'n') {
    if (yych <= 'i') goto yy1479;
    goto yy146;
   } else {
    if (yych <= 'o') goto yy1480;
    if (yych <= 'z') goto yy146;
    goto yy4;
   }
  }
 }
yy9:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych <= 'A') {
   if (yych == ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy1463;
  } else {
   if (yych == 'I') goto yy1464;
   if (yych <= 'N') goto yy141;
   goto yy1465;
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy1463;
   goto yy141;
  } else {
   if (yych <= 'n') {
    if (yych <= 'i') goto yy1464;
    goto yy141;
   } else {
    if (yych <= 'o') goto yy1465;
    if (yych <= 'z') goto yy141;
    goto yy4;
   }
  }
 }
yy10:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 ;
 switch (yych) {
 case ')': goto yy140;
 case '0':
 case '1': goto yy1393;
 case '2': goto yy1394;
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy1395;
 case 'A':
 case 'B':
 case 'C':
 case 'D':
 case 'F':
 case 'G':
 case 'I':
 case 'J':
 case 'K':
 case 'L':
 case 'M':
 case 'N':
 case 'P':
 case 'Q':
 case 'R':
 case 'S':
 case 'T':
 case 'V':
 case 'X':
 case 'Y':
 case 'Z': goto yy141;
 case 'E': goto yy1388;
 case 'H': goto yy1389;
 case 'O': goto yy1390;
 case 'U': goto yy1391;
 case 'W': goto yy1392;
 case 'a':
 case 'b':
 case 'c':
 case 'd':
 case 'f':
 case 'g':
 case 'i':
 case 'j':
 case 'k':
 case 'l':
 case 'm':
 case 'n':
 case 'p':
 case 'q':
 case 'r':
 case 's':
 case 't':
 case 'v':
 case 'x':
 case 'y':
 case 'z': goto yy146;
 case 'e': goto yy1431;
 case 'h': goto yy1432;
 case 'o': goto yy1433;
 case 'u': goto yy1434;
 case 'w': goto yy1435;
 default: goto yy4;
 }
yy11:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 ;
 switch (yych) {
 case ')': goto yy140;
 case '0':
 case '1': goto yy1393;
 case '2': goto yy1394;
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy1395;
 case 'A':
 case 'B':
 case 'C':
 case 'D':
 case 'F':
 case 'G':
 case 'I':
 case 'J':
 case 'K':
 case 'L':
 case 'M':
 case 'N':
 case 'P':
 case 'Q':
 case 'R':
 case 'S':
 case 'T':
 case 'V':
 case 'X':
 case 'Y':
 case 'Z':
 case 'a':
 case 'b':
 case 'c':
 case 'd':
 case 'f':
 case 'g':
 case 'i':
 case 'j':
 case 'k':
 case 'l':
 case 'm':
 case 'n':
 case 'p':
 case 'q':
 case 'r':
 case 's':
 case 't':
 case 'v':
 case 'x':
 case 'y':
 case 'z': goto yy141;
 case 'E':
 case 'e': goto yy1388;
 case 'H':
 case 'h': goto yy1389;
 case 'O':
 case 'o': goto yy1390;
 case 'U':
 case 'u': goto yy1391;
 case 'W':
 case 'w': goto yy1392;
 default: goto yy4;
 }
yy12:
 ;
 yyaccept = 1;
 yych = *(s->ptr = ++cursor);
 if (yych == '-') goto yy1384;
 if (yych <= '/') goto yy13;
 if (yych <= '9') goto yy1385;
yy13:
 ;
# 1771 "ext/date/lib/parse_date.re"
 {
  add_error(s, "Unexpected character");
  goto std;
 }
# 1367 "ext/date/lib/parse_date.c"
yy14:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= 'E') {
   if (yych <= ')') {
    if (yych <= '(') goto yy4;
    goto yy140;
   } else {
    if (yych <= '@') goto yy4;
    if (yych <= 'D') goto yy141;
    goto yy1320;
   }
  } else {
   if (yych <= 'N') {
    if (yych == 'I') goto yy1321;
    goto yy141;
   } else {
    if (yych <= 'O') goto yy1322;
    if (yych <= 'Q') goto yy141;
    goto yy1323;
   }
  }
 } else {
  if (yych <= 'i') {
   if (yych <= 'd') {
    if (yych <= 'Z') goto yy141;
    if (yych <= '`') goto yy4;
    goto yy146;
   } else {
    if (yych <= 'e') goto yy1361;
    if (yych <= 'h') goto yy146;
    goto yy1362;
   }
  } else {
   if (yych <= 'q') {
    if (yych == 'o') goto yy1363;
    goto yy146;
   } else {
    if (yych <= 'r') goto yy1364;
    if (yych <= 'z') goto yy146;
    goto yy4;
   }
  }
 }
yy15:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= 'E') {
   if (yych <= ')') {
    if (yych <= '(') goto yy4;
    goto yy140;
   } else {
    if (yych <= '@') goto yy4;
    if (yych <= 'D') goto yy141;
    goto yy1320;
   }
  } else {
   if (yych <= 'N') {
    if (yych == 'I') goto yy1321;
    goto yy141;
   } else {
    if (yych <= 'O') goto yy1322;
    if (yych <= 'Q') goto yy141;
    goto yy1323;
   }
  }
 } else {
  if (yych <= 'i') {
   if (yych <= 'd') {
    if (yych <= 'Z') goto yy141;
    if (yych <= '`') goto yy4;
    goto yy141;
   } else {
    if (yych <= 'e') goto yy1320;
    if (yych <= 'h') goto yy141;
    goto yy1321;
   }
  } else {
   if (yych <= 'q') {
    if (yych == 'o') goto yy1322;
    goto yy141;
   } else {
    if (yych <= 'r') goto yy1323;
    if (yych <= 'z') goto yy141;
    goto yy4;
   }
  }
 }
yy16:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
  goto yy1307;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy141;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy1317;
   if (yych <= 'z') goto yy146;
   goto yy4;
  }
 }
yy17:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
  goto yy1307;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy141;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy1307;
   if (yych <= 'z') goto yy141;
   goto yy4;
  }
 }
yy18:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
  goto yy1287;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy141;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy1304;
   if (yych <= 'z') goto yy146;
   goto yy4;
  }
 }
yy19:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
  goto yy1287;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy141;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy1287;
   if (yych <= 'z') goto yy141;
   goto yy4;
  }
 }
yy20:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= 'D') {
   if (yych <= ')') {
    if (yych <= '(') goto yy4;
    goto yy140;
   } else {
    if (yych <= '@') goto yy4;
    if (yych <= 'A') goto yy1230;
    goto yy141;
   }
  } else {
   if (yych <= 'H') {
    if (yych <= 'E') goto yy1229;
    goto yy141;
   } else {
    if (yych <= 'I') goto yy1231;
    if (yych <= 'T') goto yy141;
    goto yy1232;
   }
  }
 } else {
  if (yych <= 'e') {
   if (yych <= '`') {
    if (yych <= 'Z') goto yy141;
    goto yy4;
   } else {
    if (yych <= 'a') goto yy1259;
    if (yych <= 'd') goto yy146;
    goto yy1258;
   }
  } else {
   if (yych <= 't') {
    if (yych == 'i') goto yy1260;
    goto yy146;
   } else {
    if (yych <= 'u') goto yy1261;
    if (yych <= 'z') goto yy146;
    goto yy4;
   }
  }
 }
yy21:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= 'D') {
   if (yych <= ')') {
    if (yych <= '(') goto yy4;
    goto yy140;
   } else {
    if (yych <= '@') goto yy4;
    if (yych <= 'A') goto yy1230;
    goto yy141;
   }
  } else {
   if (yych <= 'H') {
    if (yych <= 'E') goto yy1229;
    goto yy141;
   } else {
    if (yych <= 'I') goto yy1231;
    if (yych <= 'T') goto yy141;
    goto yy1232;
   }
  }
 } else {
  if (yych <= 'e') {
   if (yych <= '`') {
    if (yych <= 'Z') goto yy141;
    goto yy4;
   } else {
    if (yych <= 'a') goto yy1230;
    if (yych <= 'd') goto yy141;
    goto yy1229;
   }
  } else {
   if (yych <= 't') {
    if (yych == 'i') goto yy1231;
    goto yy141;
   } else {
    if (yych <= 'u') goto yy1232;
    if (yych <= 'z') goto yy141;
    goto yy4;
   }
  }
 }
yy22:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == 'I') goto yy1199;
   if (yych <= 'K') goto yy141;
   goto yy1200;
  }
 } else {
  if (yych <= 'i') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   if (yych <= 'h') goto yy146;
   goto yy1217;
  } else {
   if (yych == 'l') goto yy1218;
   if (yych <= 'z') goto yy146;
   goto yy4;
  }
 }
yy23:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == 'I') goto yy1199;
   if (yych <= 'K') goto yy141;
   goto yy1200;
  }
 } else {
  if (yych <= 'i') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   if (yych <= 'h') goto yy141;
   goto yy1199;
  } else {
   if (yych == 'l') goto yy1200;
   if (yych <= 'z') goto yy141;
   goto yy4;
  }
 }
yy24:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'Q') goto yy141;
   goto yy1098;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   goto yy146;
  } else {
   if (yych <= 'r') goto yy1192;
   if (yych <= 'z') goto yy146;
   goto yy4;
  }
 }
yy25:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'Q') goto yy141;
   goto yy1098;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   goto yy141;
  } else {
   if (yych <= 'r') goto yy1098;
   if (yych <= 'z') goto yy141;
   goto yy4;
  }
 }
yy26:
 ;
 yyaccept = 1;
 yych = *(s->ptr = ++cursor);
 ;
 switch (yych) {
 case '\t': goto yy1052;
 case ' ':
 case 'A':
 case 'D':
 case 'F':
 case 'H':
 case 'I':
 case 'J':
 case 'M':
 case 'N':
 case 'O':
 case 'S':
 case 'T':
 case 'V':
 case 'W':
 case 'X':
 case 'Y':
 case 'a':
 case 'd':
 case 'f':
 case 'h':
 case 'j':
 case 'm':
 case 'o':
 case 'w':
 case 'y': goto yy1054;
 case '-': goto yy473;
 case '.': goto yy1064;
 case '/': goto yy472;
 case '0': goto yy1097;
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy1096;
 case ':': goto yy1065;
 case 'n': goto yy470;
 case 'r': goto yy471;
 case 's': goto yy464;
 case 't': goto yy468;
 default: goto yy13;
 }
yy27:
 ;
 yyaccept = 1;
 yych = *(s->ptr = ++cursor);
 ;
 switch (yych) {
 case '\t': goto yy460;
 case ' ':
 case 'A':
 case 'D':
 case 'F':
 case 'H':
 case 'I':
 case 'J':
 case 'M':
 case 'N':
 case 'O':
 case 'P':
 case 'S':
 case 'T':
 case 'V':
 case 'W':
 case 'X':
 case 'Y':
 case 'a':
 case 'd':
 case 'f':
 case 'h':
 case 'j':
 case 'm':
 case 'o':
 case 'p':
 case 'w':
 case 'y': goto yy462;
 case '-': goto yy473;
 case '.': goto yy474;
 case '/': goto yy472;
 case '0':
 case '1':
 case '2': goto yy1096;
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy1063;
 case ':': goto yy483;
 case 'n': goto yy470;
 case 'r': goto yy471;
 case 's': goto yy464;
 case 't': goto yy468;
 default: goto yy13;
 }
yy28:
 ;
 yyaccept = 1;
 yych = *(s->ptr = ++cursor);
 ;
 switch (yych) {
 case '\t': goto yy460;
 case ' ':
 case 'A':
 case 'D':
 case 'F':
 case 'H':
 case 'I':
 case 'J':
 case 'M':
 case 'N':
 case 'O':
 case 'P':
 case 'S':
 case 'T':
 case 'V':
 case 'W':
 case 'X':
 case 'Y':
 case 'a':
 case 'd':
 case 'f':
 case 'h':
 case 'j':
 case 'm':
 case 'o':
 case 'p':
 case 'w':
 case 'y': goto yy462;
 case '-': goto yy473;
 case '.': goto yy474;
 case '/': goto yy472;
 case '0':
 case '1':
 case '2':
 case '3':
 case '4': goto yy1063;
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy1050;
 case ':': goto yy483;
 case 'n': goto yy470;
 case 'r': goto yy471;
 case 's': goto yy464;
 case 't': goto yy468;
 default: goto yy13;
 }
yy29:
 ;
 yyaccept = 1;
 yych = *(s->ptr = ++cursor);
 ;
 switch (yych) {
 case '\t': goto yy460;
 case ' ':
 case 'A':
 case 'D':
 case 'F':
 case 'H':
 case 'I':
 case 'J':
 case 'M':
 case 'N':
 case 'O':
 case 'P':
 case 'S':
 case 'T':
 case 'V':
 case 'W':
 case 'X':
 case 'Y':
 case 'a':
 case 'd':
 case 'f':
 case 'h':
 case 'j':
 case 'm':
 case 'o':
 case 'p':
 case 'w':
 case 'y': goto yy462;
 case '-': goto yy473;
 case '.': goto yy474;
 case '/': goto yy472;
 case '0':
 case '1': goto yy1050;
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy469;
 case ':': goto yy483;
 case 'n': goto yy470;
 case 'r': goto yy471;
 case 's': goto yy464;
 case 't': goto yy468;
 default: goto yy13;
 }
yy30:
 ;
 yyaccept = 1;
 yych = *(s->ptr = ++cursor);
 ;
 switch (yych) {
 case '\t': goto yy460;
 case ' ':
 case 'A':
 case 'D':
 case 'F':
 case 'H':
 case 'I':
 case 'J':
 case 'M':
 case 'N':
 case 'O':
 case 'P':
 case 'S':
 case 'T':
 case 'V':
 case 'W':
 case 'X':
 case 'Y':
 case 'a':
 case 'd':
 case 'f':
 case 'h':
 case 'j':
 case 'm':
 case 'o':
 case 'p':
 case 'w':
 case 'y': goto yy462;
 case '-': goto yy473;
 case '.': goto yy474;
 case '/': goto yy472;
 case '0':
 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy469;
 case ':': goto yy483;
 case 'n': goto yy470;
 case 'r': goto yy471;
 case 's': goto yy464;
 case 't': goto yy468;
 default: goto yy13;
 }
yy31:
 ;
 yyaccept = 1;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 4) {
  goto yy58;
 }
 ;
 switch (yych) {
 case '+':
 case '-': goto yy440;
 case '0':
 case '1': goto yy437;
 case '2': goto yy438;
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy439;
 default: goto yy13;
 }
yy32:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy4;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy4;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy4;
   } else {
    if (yych == '/') goto yy4;
    goto yy196;
   }
  }
 } else {
  if (yych <= 'V') {
   if (yych <= 'H') {
    if (yych <= '@') goto yy4;
    goto yy141;
   } else {
    if (yych <= 'I') goto yy436;
    if (yych <= 'U') goto yy141;
    goto yy435;
   }
  } else {
   if (yych <= 'Z') {
    if (yych == 'X') goto yy435;
    goto yy141;
   } else {
    if (yych <= '`') goto yy4;
    if (yych <= 'z') goto yy146;
    goto yy4;
   }
  }
 }
yy33:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy196;
   if (yych <= 0x1F) goto yy4;
   goto yy196;
  } else {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy196;
  }
 } else {
  if (yych <= 'H') {
   if (yych <= '/') goto yy4;
   if (yych <= '9') goto yy196;
   if (yych <= '@') goto yy4;
   goto yy141;
  } else {
   if (yych <= 'Z') {
    if (yych <= 'I') goto yy432;
    goto yy141;
   } else {
    if (yych <= '`') goto yy4;
    if (yych <= 'z') goto yy146;
    goto yy4;
   }
  }
 }
yy34:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy196;
   if (yych <= 0x1F) goto yy4;
   goto yy196;
  } else {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy196;
  }
 } else {
  if (yych <= 'H') {
   if (yych <= '/') goto yy4;
   if (yych <= '9') goto yy196;
   if (yych <= '@') goto yy4;
   goto yy141;
  } else {
   if (yych <= 'Z') {
    if (yych <= 'I') goto yy430;
    goto yy141;
   } else {
    if (yych <= '`') goto yy4;
    if (yych <= 'z') goto yy146;
    goto yy4;
   }
  }
 }
yy35:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych <= 'A') goto yy413;
   if (yych <= 'T') goto yy141;
   goto yy412;
  }
 } else {
  if (yych <= 'a') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   goto yy422;
  } else {
   if (yych == 'u') goto yy421;
   if (yych <= 'z') goto yy146;
   goto yy4;
  }
 }
yy36:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych <= 'A') goto yy413;
   if (yych <= 'T') goto yy141;
   goto yy412;
  }
 } else {
  if (yych <= 'a') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   goto yy413;
  } else {
   if (yych == 'u') goto yy412;
   if (yych <= 'z') goto yy141;
   goto yy4;
  }
 }
yy37:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= 'F') {
   if (yych == ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy141;
  } else {
   if (yych <= 'O') {
    if (yych <= 'G') goto yy391;
    goto yy141;
   } else {
    if (yych <= 'P') goto yy390;
    if (yych <= 'T') goto yy141;
    goto yy389;
   }
  }
 } else {
  if (yych <= 'o') {
   if (yych <= '`') {
    if (yych <= 'Z') goto yy141;
    goto yy4;
   } else {
    if (yych == 'g') goto yy403;
    goto yy146;
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'p') goto yy402;
    goto yy146;
   } else {
    if (yych <= 'u') goto yy401;
    if (yych <= 'z') goto yy146;
    goto yy4;
   }
  }
 }
yy38:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= 'F') {
   if (yych == ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy141;
  } else {
   if (yych <= 'O') {
    if (yych <= 'G') goto yy391;
    goto yy141;
   } else {
    if (yych <= 'P') goto yy390;
    if (yych <= 'T') goto yy141;
    goto yy389;
   }
  }
 } else {
  if (yych <= 'o') {
   if (yych <= '`') {
    if (yych <= 'Z') goto yy141;
    goto yy4;
   } else {
    if (yych == 'g') goto yy391;
    goto yy141;
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'p') goto yy390;
    goto yy141;
   } else {
    if (yych <= 'u') goto yy389;
    if (yych <= 'z') goto yy141;
    goto yy4;
   }
  }
 }
yy39:
 ;
 yych = *++cursor;
 if (yych <= 'C') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'B') goto yy141;
   goto yy379;
  }
 } else {
  if (yych <= 'b') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   goto yy146;
  } else {
   if (yych <= 'c') goto yy384;
   if (yych <= 'z') goto yy146;
   goto yy4;
  }
 }
yy40:
 ;
 yych = *++cursor;
 if (yych <= 'C') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'B') goto yy141;
   goto yy379;
  }
 } else {
  if (yych <= 'b') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   goto yy141;
  } else {
   if (yych <= 'c') goto yy379;
   if (yych <= 'z') goto yy141;
   goto yy4;
  }
 }
yy41:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy141;
   goto yy192;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   goto yy146;
  } else {
   if (yych <= 'e') goto yy370;
   if (yych <= 'z') goto yy146;
   goto yy4;
  }
 }
yy42:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy141;
   goto yy192;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   goto yy141;
  } else {
   if (yych <= 'e') goto yy192;
   if (yych <= 'z') goto yy141;
   goto yy4;
  }
 }
yy43:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy141;
   goto yy165;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   goto yy146;
  } else {
   if (yych <= 'e') goto yy179;
   if (yych <= 'z') goto yy146;
   goto yy4;
  }
 }
yy44:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy141;
   goto yy165;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy141;
   if (yych <= '`') goto yy4;
   goto yy141;
  } else {
   if (yych <= 'e') goto yy165;
   if (yych <= 'z') goto yy141;
   goto yy4;
  }
 }
yy45:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
  goto yy141;
 } else {
  if (yych <= 'Z') {
   if (yych <= 'M') goto yy157;
   goto yy141;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy146;
   goto yy4;
  }
 }
yy46:
 ;
 yych = *++cursor;
 if (yych <= '@') goto yy13;
 if (yych <= 'Z') goto yy156;
 if (yych <= '`') goto yy13;
 if (yych <= 'z') goto yy156;
 goto yy13;
yy47:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'Z') goto yy141;
  if (yych <= '`') goto yy4;
  if (yych <= 'z') goto yy146;
  goto yy4;
 }
yy48:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'Z') goto yy141;
  if (yych <= '`') goto yy4;
  if (yych <= 'z') goto yy141;
  goto yy4;
 }
yy49:
 ;
 yyaccept = 2;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 4) {
  goto yy58;
 }
 if (yych <= '/') goto yy50;
 if (yych <= '9') goto yy55;
yy50:
 ;
# 1760 "ext/date/lib/parse_date.re"
 {
  goto std;
 }
# 2428 "ext/date/lib/parse_date.c"
yy51:
 ;
 yych = *++cursor;
 goto yy50;
yy52:
 ;
 ++cursor;
 ;
# 1765 "ext/date/lib/parse_date.re"
 {
  s->pos = cursor; s->line++;
  goto std;
 }
# 2442 "ext/date/lib/parse_date.c"
yy54:
 ;
 yych = *++cursor;
 goto yy13;
yy55:
 ;
 ++cursor;
 if ((s->lim - cursor) < 11) return 257;;
 yych = *cursor;
 ;
 if (yybm[0+yych] & 2) {
  goto yy55;
 }
 if (yych <= 'W') {
  if (yych <= 'F') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy60;
    if (yych >= ' ') goto yy60;
   } else {
    if (yych == 'D') goto yy65;
    if (yych >= 'F') goto yy66;
   }
  } else {
   if (yych <= 'M') {
    if (yych == 'H') goto yy64;
    if (yych >= 'M') goto yy63;
   } else {
    if (yych <= 'S') {
     if (yych >= 'S') goto yy62;
    } else {
     if (yych <= 'T') goto yy69;
     if (yych >= 'W') goto yy68;
    }
   }
  }
 } else {
  if (yych <= 'l') {
   if (yych <= 'd') {
    if (yych == 'Y') goto yy67;
    if (yych >= 'd') goto yy65;
   } else {
    if (yych <= 'f') {
     if (yych >= 'f') goto yy66;
    } else {
     if (yych == 'h') goto yy64;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'm') goto yy63;
    if (yych <= 'r') goto yy57;
    if (yych <= 's') goto yy62;
    goto yy69;
   } else {
    if (yych <= 'w') {
     if (yych >= 'w') goto yy68;
    } else {
     if (yych == 'y') goto yy67;
    }
   }
  }
 }
yy57:
 ;
 cursor = s->ptr;
 if (yyaccept <= 16) {
  if (yyaccept <= 8) {
   if (yyaccept <= 4) {
    if (yyaccept <= 2) {
     if (yyaccept <= 1) {
      if (yyaccept <= 0) {
       goto yy4;
      } else {
       goto yy13;
      }
     } else {
      goto yy50;
     }
    } else {
     if (yyaccept <= 3) {
      goto yy73;
     } else {
      goto yy167;
     }
    }
   } else {
    if (yyaccept <= 6) {
     if (yyaccept <= 5) {
      goto yy194;
     } else {
      goto yy199;
     }
    } else {
     if (yyaccept <= 7) {
      goto yy223;
     } else {
      goto yy295;
     }
    }
   }
  } else {
   if (yyaccept <= 12) {
    if (yyaccept <= 10) {
     if (yyaccept <= 9) {
      goto yy393;
     } else {
      goto yy476;
     }
    } else {
     if (yyaccept <= 11) {
      goto yy491;
     } else {
      goto yy612;
     }
    }
   } else {
    if (yyaccept <= 14) {
     if (yyaccept <= 13) {
      goto yy657;
     } else {
      goto yy667;
     }
    } else {
     if (yyaccept <= 15) {
      goto yy764;
     } else {
      goto yy784;
     }
    }
   }
  }
 } else {
  if (yyaccept <= 25) {
   if (yyaccept <= 21) {
    if (yyaccept <= 19) {
     if (yyaccept <= 18) {
      if (yyaccept <= 17) {
       goto yy815;
      } else {
       goto yy822;
      }
     } else {
      goto yy849;
     }
    } else {
     if (yyaccept <= 20) {
      goto yy794;
     } else {
      goto yy455;
     }
    }
   } else {
    if (yyaccept <= 23) {
     if (yyaccept <= 22) {
      goto yy974;
     } else {
      goto yy843;
     }
    } else {
     if (yyaccept <= 24) {
      goto yy1068;
     } else {
      goto yy1076;
     }
    }
   }
  } else {
   if (yyaccept <= 29) {
    if (yyaccept <= 27) {
     if (yyaccept <= 26) {
      goto yy1118;
     } else {
      goto yy1142;
     }
    } else {
     if (yyaccept <= 28) {
      goto yy1295;
     } else {
      goto yy1417;
     }
    }
   } else {
    if (yyaccept <= 31) {
     if (yyaccept <= 30) {
      goto yy1420;
     } else {
      goto yy1500;
     }
    } else {
     if (yyaccept <= 32) {
      goto yy1508;
     } else {
      goto yy1531;
     }
    }
   }
  }
 }
yy58:
 ;
 ++cursor;
 if (s->lim <= cursor) return 257;;
 yych = *cursor;
 ;
 if (yybm[0+yych] & 4) {
  goto yy58;
 }
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy55;
 goto yy57;
yy60:
 ;
 ++cursor;
 if ((s->lim - cursor) < 11) return 257;;
 yych = *cursor;
yy61:
 ;
 if (yych <= 'W') {
  if (yych <= 'F') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy60;
    if (yych <= 0x1F) goto yy57;
    goto yy60;
   } else {
    if (yych == 'D') goto yy65;
    if (yych <= 'E') goto yy57;
    goto yy66;
   }
  } else {
   if (yych <= 'M') {
    if (yych == 'H') goto yy64;
    if (yych <= 'L') goto yy57;
    goto yy63;
   } else {
    if (yych <= 'S') {
     if (yych <= 'R') goto yy57;
    } else {
     if (yych <= 'T') goto yy69;
     if (yych <= 'V') goto yy57;
     goto yy68;
    }
   }
  }
 } else {
  if (yych <= 'l') {
   if (yych <= 'd') {
    if (yych == 'Y') goto yy67;
    if (yych <= 'c') goto yy57;
    goto yy65;
   } else {
    if (yych <= 'f') {
     if (yych <= 'e') goto yy57;
     goto yy66;
    } else {
     if (yych == 'h') goto yy64;
     goto yy57;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'm') goto yy63;
    if (yych <= 'r') goto yy57;
    if (yych >= 't') goto yy69;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy57;
     goto yy68;
    } else {
     if (yych == 'y') goto yy67;
     goto yy57;
    }
   }
  }
 }
yy62:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= 'D') {
   if (yych == 'A') goto yy127;
   goto yy57;
  } else {
   if (yych <= 'E') goto yy128;
   if (yych <= 'T') goto yy57;
   goto yy126;
  }
 } else {
  if (yych <= 'd') {
   if (yych == 'a') goto yy127;
   goto yy57;
  } else {
   if (yych <= 'e') goto yy128;
   if (yych == 'u') goto yy126;
   goto yy57;
  }
 }
yy63:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych == 'I') goto yy118;
  if (yych <= 'N') goto yy57;
  goto yy117;
 } else {
  if (yych <= 'i') {
   if (yych <= 'h') goto yy57;
   goto yy118;
  } else {
   if (yych == 'o') goto yy117;
   goto yy57;
  }
 }
yy64:
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy115;
 if (yych == 'o') goto yy115;
 goto yy57;
yy65:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy114;
 if (yych == 'a') goto yy114;
 goto yy57;
yy66:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych == 'O') goto yy99;
  if (yych <= 'Q') goto yy57;
  goto yy98;
 } else {
  if (yych <= 'o') {
   if (yych <= 'n') goto yy57;
   goto yy99;
  } else {
   if (yych == 'r') goto yy98;
   goto yy57;
  }
 }
yy67:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy95;
 if (yych == 'e') goto yy95;
 goto yy57;
yy68:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy83;
 if (yych == 'e') goto yy83;
 goto yy57;
yy69:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'H') goto yy70;
  if (yych <= 'T') goto yy57;
  goto yy71;
 } else {
  if (yych <= 'h') {
   if (yych <= 'g') goto yy57;
  } else {
   if (yych == 'u') goto yy71;
   goto yy57;
  }
 }
yy70:
 ;
 yych = *++cursor;
 if (yych == 'U') goto yy78;
 if (yych == 'u') goto yy78;
 goto yy57;
yy71:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy72;
 if (yych != 'e') goto yy57;
yy72:
 ;
 yyaccept = 3;
 yych = *(s->ptr = ++cursor);
 if (yych == 'S') goto yy74;
 if (yych == 's') goto yy74;
yy73:
 ;
# 1744 "ext/date/lib/parse_date.re"
 {
  timelib_ull i;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_relative = 1; };

  while(*ptr) {
   i = timelib_get_unsigned_nr((char **) &ptr, 24);
   timelib_eat_spaces((char **) &ptr);
   timelib_set_relative((char **) &ptr, i, 1, s);
  }
  free(str);
  return 310;
 }
# 2844 "ext/date/lib/parse_date.c"
yy74:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy75;
 if (yych != 'd') goto yy57;
yy75:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy76;
 if (yych != 'a') goto yy57;
yy76:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy77;
 if (yych != 'y') goto yy57;
yy77:
 ;
 yych = *++cursor;
 goto yy73;
yy78:
 ;
 yyaccept = 3;
 yych = *(s->ptr = ++cursor);
 if (yych == 'R') goto yy79;
 if (yych != 'r') goto yy73;
yy79:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy80;
 if (yych != 's') goto yy57;
yy80:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy81;
 if (yych != 'd') goto yy57;
yy81:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy82;
 if (yych != 'a') goto yy57;
yy82:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy77;
 if (yych == 'y') goto yy77;
 goto yy57;
yy83:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= 'C') goto yy57;
  if (yych <= 'D') goto yy85;
 } else {
  if (yych <= 'c') goto yy57;
  if (yych <= 'd') goto yy85;
  if (yych >= 'f') goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych == 'K') goto yy91;
 if (yych == 'k') goto yy91;
 goto yy57;
yy85:
 ;
 yyaccept = 3;
 yych = *(s->ptr = ++cursor);
 if (yych == 'N') goto yy86;
 if (yych != 'n') goto yy73;
yy86:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy87;
 if (yych != 'e') goto yy57;
yy87:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy88;
 if (yych != 's') goto yy57;
yy88:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy89;
 if (yych != 'd') goto yy57;
yy89:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy90;
 if (yych != 'a') goto yy57;
yy90:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy77;
 if (yych == 'y') goto yy77;
 goto yy57;
yy91:
 ;
 yyaccept = 3;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych == 'D') goto yy92;
  if (yych <= 'R') goto yy73;
  goto yy77;
 } else {
  if (yych <= 'd') {
   if (yych <= 'c') goto yy73;
  } else {
   if (yych == 's') goto yy77;
   goto yy73;
  }
 }
yy92:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy93;
 if (yych != 'a') goto yy57;
yy93:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy94;
 if (yych != 'y') goto yy57;
yy94:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy77;
 if (yych == 's') goto yy77;
 goto yy73;
yy95:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy96;
 if (yych != 'a') goto yy57;
yy96:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy97;
 if (yych != 'r') goto yy57;
yy97:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy77;
 if (yych == 's') goto yy77;
 goto yy73;
yy98:
 ;
 yych = *++cursor;
 if (yych == 'I') goto yy111;
 if (yych == 'i') goto yy111;
 goto yy57;
yy99:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy100;
 if (yych != 'r') goto yy57;
yy100:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy101;
 if (yych != 't') goto yy57;
yy101:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych == 'H') goto yy103;
  if (yych <= 'M') goto yy57;
 } else {
  if (yych <= 'h') {
   if (yych <= 'g') goto yy57;
   goto yy103;
  } else {
   if (yych != 'n') goto yy57;
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'I') goto yy108;
 if (yych == 'i') goto yy108;
 goto yy57;
yy103:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy104;
 if (yych != 'n') goto yy57;
yy104:
 ;
 yych = *++cursor;
 if (yych == 'I') goto yy105;
 if (yych != 'i') goto yy57;
yy105:
 ;
 yych = *++cursor;
 if (yych == 'G') goto yy106;
 if (yych != 'g') goto yy57;
yy106:
 ;
 yych = *++cursor;
 if (yych == 'H') goto yy107;
 if (yych != 'h') goto yy57;
yy107:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy97;
 if (yych == 't') goto yy97;
 goto yy57;
yy108:
 ;
 yych = *++cursor;
 if (yych == 'G') goto yy109;
 if (yych != 'g') goto yy57;
yy109:
 ;
 yych = *++cursor;
 if (yych == 'H') goto yy110;
 if (yych != 'h') goto yy57;
yy110:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy97;
 if (yych == 't') goto yy97;
 goto yy57;
yy111:
 ;
 yyaccept = 3;
 yych = *(s->ptr = ++cursor);
 if (yych == 'D') goto yy112;
 if (yych != 'd') goto yy73;
yy112:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy113;
 if (yych != 'a') goto yy57;
yy113:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy77;
 if (yych == 'y') goto yy77;
 goto yy57;
yy114:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy97;
 if (yych == 'y') goto yy97;
 goto yy57;
yy115:
 ;
 yych = *++cursor;
 if (yych == 'U') goto yy116;
 if (yych != 'u') goto yy57;
yy116:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy97;
 if (yych == 'r') goto yy97;
 goto yy57;
yy117:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy122;
 if (yych == 'n') goto yy122;
 goto yy57;
yy118:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy119;
 if (yych != 'n') goto yy57;
yy119:
 ;
 yyaccept = 3;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'U') {
  if (yych == 'S') goto yy77;
  if (yych <= 'T') goto yy73;
 } else {
  if (yych <= 's') {
   if (yych <= 'r') goto yy73;
   goto yy77;
  } else {
   if (yych != 'u') goto yy73;
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy121;
 if (yych != 't') goto yy57;
yy121:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy97;
 if (yych == 'e') goto yy97;
 goto yy57;
yy122:
 ;
 yyaccept = 3;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych == 'D') goto yy123;
  if (yych <= 'S') goto yy73;
  goto yy124;
 } else {
  if (yych <= 'd') {
   if (yych <= 'c') goto yy73;
  } else {
   if (yych == 't') goto yy124;
   goto yy73;
  }
 }
yy123:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy125;
 if (yych == 'a') goto yy125;
 goto yy57;
yy124:
 ;
 yych = *++cursor;
 if (yych == 'H') goto yy97;
 if (yych == 'h') goto yy97;
 goto yy57;
yy125:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy77;
 if (yych == 'y') goto yy77;
 goto yy57;
yy126:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy137;
 if (yych == 'n') goto yy137;
 goto yy57;
yy127:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy132;
 if (yych == 't') goto yy132;
 goto yy57;
yy128:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy129;
 if (yych != 'c') goto yy57;
yy129:
 ;
 yyaccept = 3;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych == 'O') goto yy130;
  if (yych <= 'R') goto yy73;
  goto yy77;
 } else {
  if (yych <= 'o') {
   if (yych <= 'n') goto yy73;
  } else {
   if (yych == 's') goto yy77;
   goto yy73;
  }
 }
yy130:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy131;
 if (yych != 'n') goto yy57;
yy131:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy97;
 if (yych == 'd') goto yy97;
 goto yy57;
yy132:
 ;
 yyaccept = 3;
 yych = *(s->ptr = ++cursor);
 if (yych == 'U') goto yy133;
 if (yych != 'u') goto yy73;
yy133:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy134;
 if (yych != 'r') goto yy57;
yy134:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy135;
 if (yych != 'd') goto yy57;
yy135:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy136;
 if (yych != 'a') goto yy57;
yy136:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy77;
 if (yych == 'y') goto yy77;
 goto yy57;
yy137:
 ;
 yyaccept = 3;
 yych = *(s->ptr = ++cursor);
 if (yych == 'D') goto yy138;
 if (yych != 'd') goto yy73;
yy138:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy139;
 if (yych != 'a') goto yy57;
yy139:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy77;
 if (yych == 'y') goto yy77;
 goto yy57;
yy140:
 ;
 yych = *++cursor;
 goto yy4;
yy141:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'Z') goto yy142;
  if (yych <= '`') goto yy4;
  if (yych >= '{') goto yy4;
 }
yy142:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'Z') goto yy143;
  if (yych <= '`') goto yy4;
  if (yych >= '{') goto yy4;
 }
yy143:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'Z') goto yy144;
  if (yych <= '`') goto yy4;
  if (yych >= '{') goto yy4;
 }
yy144:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'Z') goto yy145;
  if (yych <= '`') goto yy4;
  if (yych >= '{') goto yy4;
 }
yy145:
 ;
 yych = *++cursor;
 if (yych == ')') goto yy140;
 goto yy4;
yy146:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   goto yy148;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy4;
   if (yych <= 'Z') goto yy142;
   goto yy4;
  } else {
   if (yych <= '_') goto yy148;
   if (yych <= '`') goto yy4;
   if (yych >= '{') goto yy4;
  }
 }
yy147:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy4;
   if (yych <= 'Z') goto yy143;
   goto yy4;
  } else {
   if (yych <= '_') goto yy148;
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy151;
   goto yy4;
  }
 }
yy148:
 ;
 ++cursor;
 if (s->lim <= cursor) return 257;;
 yych = *cursor;
 if (yybm[0+yych] & 8) {
  goto yy149;
 }
 goto yy57;
yy149:
 ;
 yyaccept = 0;
 s->ptr = ++cursor;
 if (s->lim <= cursor) return 257;;
 yych = *cursor;
 ;
 if (yybm[0+yych] & 8) {
  goto yy149;
 }
 if (yych <= '.') {
  if (yych == '-') goto yy148;
  goto yy4;
 } else {
  if (yych <= '/') goto yy148;
  if (yych == '_') goto yy148;
  goto yy4;
 }
yy151:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   goto yy148;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy4;
   if (yych <= 'Z') goto yy144;
   goto yy4;
  } else {
   if (yych <= '_') goto yy148;
   if (yych <= '`') goto yy4;
   if (yych >= '{') goto yy4;
  }
 }
yy152:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   goto yy148;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy4;
   if (yych <= 'Z') goto yy145;
   goto yy4;
  } else {
   if (yych <= '_') goto yy148;
   if (yych <= '`') goto yy4;
   if (yych >= '{') goto yy4;
  }
 }
yy153:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= '-') {
  if (yych == ')') goto yy140;
  if (yych <= ',') goto yy4;
  goto yy148;
 } else {
  if (yych <= '/') {
   if (yych <= '.') goto yy4;
   goto yy148;
  } else {
   if (yych == '_') goto yy148;
   goto yy4;
  }
 }
yy154:
 ;
 ++cursor;
 if (s->lim <= cursor) return 257;;
 yych = *cursor;
yy155:
 ;
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= '.') {
  if (yych == '-') goto yy148;
  goto yy57;
 } else {
  if (yych <= '/') goto yy148;
  if (yych == '_') goto yy148;
  goto yy57;
 }
yy156:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'Z') goto yy141;
  if (yych <= '`') goto yy4;
  if (yych <= 'z') goto yy141;
  goto yy4;
 }
yy157:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
  goto yy142;
 } else {
  if (yych <= 'Z') {
   if (yych >= 'U') goto yy142;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych != '+') goto yy4;
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '-') goto yy159;
   if (yych <= '@') goto yy4;
   goto yy143;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy159:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '1') goto yy160;
 if (yych <= '2') goto yy161;
 if (yych <= '9') goto yy162;
 goto yy57;
yy160:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy4;
 if (yych <= '9') goto yy162;
 if (yych <= ':') goto yy163;
 goto yy4;
yy161:
 ;
 yych = *++cursor;
 if (yych <= '5') {
  if (yych <= '/') goto yy4;
  if (yych >= '5') goto yy164;
 } else {
  if (yych <= '9') goto yy140;
  if (yych <= ':') goto yy163;
  goto yy4;
 }
yy162:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy4;
 if (yych <= '5') goto yy164;
 if (yych <= '9') goto yy140;
 if (yych >= ';') goto yy4;
yy163:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy4;
 if (yych <= '5') goto yy164;
 if (yych <= '9') goto yy140;
 goto yy4;
yy164:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy4;
 if (yych <= '9') goto yy140;
 goto yy4;
yy165:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych <= 'C') goto yy142;
   if (yych >= 'E') goto yy168;
  }
 } else {
  if (yych <= 'c') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'd') goto yy166;
   if (yych <= 'e') goto yy168;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy166:
 ;
 ++cursor;
 if ((yych = *cursor) <= 'N') {
  if (yych <= ')') {
   if (yych >= ')') goto yy140;
  } else {
   if (yych <= '@') goto yy167;
   if (yych <= 'M') goto yy143;
   goto yy174;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy143;
   if (yych >= 'a') goto yy143;
  } else {
   if (yych <= 'n') goto yy174;
   if (yych <= 'z') goto yy143;
  }
 }
yy167:
 ;
# 1607 "ext/date/lib/parse_date.re"
 {
  const timelib_relunit* relunit;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_relative = 1; };
  { s->time->have_relative = 1; s->time->relative.have_weekday_relative = 1; };
  { s->time->have_time = 0; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; };
  relunit = timelib_lookup_relunit((char**) &ptr);
  s->time->relative.weekday = relunit->multiplier;
  if (s->time->relative.weekday_behavior != 2) {
   s->time->relative.weekday_behavior = 1;
  }

  free(str);
  return 7;
 }
# 3623 "ext/date/lib/parse_date.c"
yy168:
 ;
 yych = *++cursor;
 if (yych <= 'K') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'J') goto yy143;
  }
 } else {
  if (yych <= 'j') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'k') goto yy169;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy169:
 ;
 yych = *++cursor;
 if (yych <= 'D') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'C') goto yy144;
  }
 } else {
  if (yych <= 'c') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'd') goto yy170;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy170:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy145;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy171;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy171:
 ;
 yych = *++cursor;
 if (yych <= 'X') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'Y') goto yy172;
  if (yych != 'y') goto yy4;
 }
yy172:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy173;
 if (yych != 's') goto yy167;
yy173:
 ;
 yych = *++cursor;
 goto yy167;
yy174:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy144;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'e') goto yy175;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy175:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'R') goto yy145;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 's') goto yy176;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy176:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'D') goto yy177;
  if (yych != 'd') goto yy4;
 }
yy177:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy178;
 if (yych != 'a') goto yy57;
yy178:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy173;
 if (yych == 'y') goto yy173;
 goto yy57;
yy179:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych <= '/') {
    if (yych <= '.') goto yy4;
    goto yy148;
   } else {
    if (yych <= '@') goto yy4;
    if (yych <= 'C') goto yy142;
    goto yy166;
   }
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') {
    if (yych <= 'E') goto yy168;
    goto yy142;
   } else {
    if (yych == '_') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= 'd') {
    if (yych <= 'c') goto yy147;
   } else {
    if (yych <= 'e') goto yy181;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
 ;
 yyaccept = 4;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy167;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy167;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy174;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy167;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy167;
    goto yy151;
   } else {
    if (yych <= 'n') goto yy187;
    if (yych <= 'z') goto yy151;
    goto yy167;
   }
  }
 }
yy181:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'J') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'K') goto yy169;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'j') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'k') goto yy182;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy182:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'D') goto yy170;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'c') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'd') goto yy183;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy183:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'A') goto yy171;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy184;
   if (yych <= 'z') goto yy153;
   goto yy4;
  }
 }
yy184:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'X') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'Y') goto yy172;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'y') goto yy185;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy185:
 ;
 yyaccept = 4;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '.') {
   if (yych == '-') goto yy148;
   goto yy167;
  } else {
   if (yych <= '/') goto yy148;
   if (yych <= 'R') goto yy167;
   goto yy173;
  }
 } else {
  if (yych <= '`') {
   if (yych == '_') goto yy148;
   goto yy167;
  } else {
   if (yych == 's') goto yy186;
   if (yych <= 'z') goto yy154;
   goto yy167;
  }
 }
yy186:
 ;
 yyaccept = 4;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= '.') {
  if (yych == '-') goto yy148;
  goto yy167;
 } else {
  if (yych <= '/') goto yy148;
  if (yych == '_') goto yy148;
  goto yy167;
 }
yy187:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'E') goto yy175;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'e') goto yy188;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy188:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'R') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'S') goto yy176;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'r') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 's') goto yy189;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy189:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'D') goto yy177;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'd') goto yy190;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy190:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy178;
 if (yych != 'a') goto yy155;
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy173;
 if (yych == 'y') goto yy186;
 goto yy155;
yy192:
 ;
 yych = *++cursor;
 if (yych <= 'C') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'B') goto yy142;
  }
 } else {
  if (yych <= 'b') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'c') goto yy193;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy193:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych >= '\t') goto yy196;
   } else {
    if (yych == ' ') goto yy196;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
   } else {
    if (yych == 'E') goto yy202;
    goto yy143;
   }
  } else {
   if (yych <= 'd') {
    if (yych >= 'a') goto yy143;
   } else {
    if (yych <= 'e') goto yy202;
    if (yych <= 'z') goto yy143;
   }
  }
 }
yy194:
 ;
# 1666 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->m = timelib_lookup_month((char **) &ptr);
  free(str);
  return 269;
 }
# 4152 "ext/date/lib/parse_date.c"
yy195:
 ;
 ++cursor;
 if ((s->lim - cursor) < 21) return 257;;
 yych = *cursor;
yy196:
 ;
 if (yybm[0+yych] & 32) {
  goto yy195;
 }
 if (yych <= '/') goto yy57;
 if (yych <= '2') goto yy198;
 if (yych <= '3') goto yy200;
 if (yych <= '9') goto yy201;
 goto yy57;
yy197:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy196;
 if (yych <= '0') goto yy357;
 if (yych <= '2') goto yy358;
 if (yych <= '3') goto yy359;
 goto yy196;
yy198:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'm') {
  if (yych <= '1') {
   if (yych <= '/') goto yy216;
   if (yych <= '0') goto yy298;
   goto yy299;
  } else {
   if (yych <= '2') goto yy355;
   if (yych <= '9') goto yy356;
   goto yy216;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'n') goto yy212;
   if (yych <= 'q') goto yy216;
   goto yy213;
  } else {
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy199:
 ;
# 1412 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->m = timelib_get_month((char **) &ptr);
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  s->time->y = timelib_get_nr_ex((char **) &ptr, 4, &length);
  { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  free(str);
  return 269;
 }
# 4216 "ext/date/lib/parse_date.c"
yy200:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'm') {
  if (yych <= '1') {
   if (yych <= '/') goto yy216;
   if (yych <= '0') goto yy298;
   goto yy299;
  } else {
   if (yych <= '2') goto yy209;
   if (yych <= '9') goto yy210;
   goto yy216;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'n') goto yy212;
   if (yych <= 'q') goto yy216;
   goto yy213;
  } else {
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy201:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'm') {
  if (yych <= '1') {
   if (yych <= '/') goto yy216;
   if (yych <= '0') goto yy207;
   goto yy208;
  } else {
   if (yych <= '2') goto yy209;
   if (yych <= '9') goto yy210;
   goto yy216;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'n') goto yy212;
   if (yych <= 'q') goto yy216;
   goto yy213;
  } else {
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy202:
 ;
 yych = *++cursor;
 if (yych <= 'M') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'L') goto yy144;
  }
 } else {
  if (yych <= 'l') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'm') goto yy203;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy203:
 ;
 yych = *++cursor;
 if (yych <= 'B') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'A') goto yy145;
  }
 } else {
  if (yych <= 'a') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'b') goto yy204;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy204:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'E') goto yy205;
  if (yych != 'e') goto yy4;
 }
yy205:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy206;
 if (yych != 'r') goto yy57;
yy206:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= ' ') {
  if (yych == '\t') goto yy196;
  if (yych <= 0x1F) goto yy194;
  goto yy196;
 } else {
  if (yych <= '.') {
   if (yych <= ',') goto yy194;
   goto yy196;
  } else {
   if (yych <= '/') goto yy194;
   if (yych <= '9') goto yy196;
   goto yy194;
  }
 }
yy207:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy221;
  goto yy57;
 } else {
  if (yych <= '0') goto yy296;
  if (yych <= '9') goto yy297;
  if (yych <= ':') goto yy221;
  goto yy57;
 }
yy208:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy264;
  goto yy57;
 } else {
  if (yych <= '2') goto yy297;
  if (yych <= '9') goto yy296;
  if (yych <= ':') goto yy264;
  goto yy57;
 }
yy209:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy264;
  goto yy57;
 } else {
  if (yych <= '4') goto yy296;
  if (yych <= '9') goto yy293;
  if (yych <= ':') goto yy264;
  goto yy57;
 }
yy210:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy264;
  goto yy57;
 } else {
  if (yych <= '9') goto yy293;
  if (yych <= ':') goto yy264;
  goto yy57;
 }
yy211:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 goto yy216;
yy212:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 goto yy216;
yy213:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 goto yy216;
yy214:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 goto yy216;
yy215:
 ;
 yyaccept = 6;
 s->ptr = ++cursor;
 if ((s->lim - cursor) < 18) return 257;;
 yych = *cursor;
yy216:
 ;
 if (yybm[0+yych] & 64) {
  goto yy215;
 }
 if (yych <= '2') {
  if (yych <= '/') goto yy199;
  if (yych <= '0') goto yy259;
  if (yych <= '1') goto yy260;
  goto yy261;
 } else {
  if (yych <= '9') goto yy262;
  if (yych != 'T') goto yy199;
 }
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '1') goto yy218;
 if (yych <= '2') goto yy219;
 if (yych <= '9') goto yy220;
 goto yy57;
yy218:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy221;
  goto yy57;
 } else {
  if (yych <= '9') goto yy220;
  if (yych <= ':') goto yy221;
  goto yy57;
 }
yy219:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy221;
  goto yy57;
 } else {
  if (yych <= '4') goto yy220;
  if (yych == ':') goto yy221;
  goto yy57;
 }
yy220:
 ;
 yych = *++cursor;
 if (yych == '.') goto yy221;
 if (yych != ':') goto yy57;
yy221:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy222;
 if (yych <= '9') goto yy224;
 goto yy57;
yy222:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy225;
 } else {
  if (yych <= '9') goto yy224;
  if (yych <= ':') goto yy225;
 }
yy223:
 ;
# 1714 "ext/date/lib/parse_date.re"
 {
  int tz_not_found;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->m = timelib_get_month((char **) &ptr);
  s->time->d = timelib_get_nr((char **) &ptr, 2);

  { if (s->time->have_time) { add_error(s, "Double time specification"); free(str); return 999; } else { s->time->have_time = 1; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; } };
  s->time->h = timelib_get_nr((char **) &ptr, 2);
  s->time->i = timelib_get_nr((char **) &ptr, 2);
  if (*ptr == ':') {
   s->time->s = timelib_get_nr((char **) &ptr, 2);

   if (*ptr == '.') {
    s->time->f = timelib_get_frac_nr((char **) &ptr, 8);
   }
  }

  if (*ptr != '\0') {
   s->time->z = timelib_get_zone((char **) &ptr, &s->time->dst, s->time, &tz_not_found, s->tzdb, tz_get_wrapper);
   if (tz_not_found) {
    add_error(s, "The timezone could not be found in the database");
   }
  }
  free(str);
  return 276;
 }
# 4514 "ext/date/lib/parse_date.c"
yy224:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy225;
 if (yych != ':') goto yy223;
yy225:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy226;
 if (yych <= '6') goto yy227;
 if (yych <= '9') goto yy228;
 goto yy57;
yy226:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy223;
 if (yych <= '9') goto yy229;
 goto yy223;
yy227:
 ;
 yych = *++cursor;
 if (yych == '0') goto yy229;
 goto yy223;
yy228:
 ;
 yych = *++cursor;
 goto yy223;
yy229:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '*') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy231;
   goto yy223;
  } else {
   if (yych <= ' ') goto yy231;
   if (yych == '(') goto yy231;
   goto yy223;
  }
 } else {
  if (yych <= '@') {
   if (yych == ',') goto yy223;
   if (yych <= '-') goto yy231;
   goto yy223;
  } else {
   if (yych <= 'Z') goto yy231;
   if (yych <= '`') goto yy223;
   if (yych <= 'z') goto yy231;
   goto yy223;
  }
 }
yy230:
 ;
 ++cursor;
 if ((s->lim - cursor) < 9) return 257;;
 yych = *cursor;
yy231:
 ;
 if (yych <= '+') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy230;
   if (yych <= 0x1F) goto yy57;
   goto yy230;
  } else {
   if (yych == '(') goto yy234;
   if (yych <= '*') goto yy57;
   goto yy233;
  }
 } else {
  if (yych <= 'F') {
   if (yych == '-') goto yy233;
   if (yych <= '@') goto yy57;
   goto yy235;
  } else {
   if (yych <= 'Z') {
    if (yych >= 'H') goto yy235;
   } else {
    if (yych <= '`') goto yy57;
    if (yych <= 'z') goto yy236;
    goto yy57;
   }
  }
 }
yy232:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych == ')') goto yy228;
  if (yych <= '@') goto yy223;
  goto yy237;
 } else {
  if (yych <= 'Z') {
   if (yych <= 'M') goto yy257;
   goto yy237;
  } else {
   if (yych <= '`') goto yy223;
   if (yych <= 'z') goto yy242;
   goto yy223;
  }
 }
yy233:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '1') goto yy252;
 if (yych <= '2') goto yy253;
 if (yych <= '9') goto yy254;
 goto yy57;
yy234:
 ;
 yych = *++cursor;
 if (yych <= '@') goto yy57;
 if (yych <= 'Z') goto yy236;
 if (yych <= '`') goto yy57;
 if (yych <= 'z') goto yy236;
 goto yy57;
yy235:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy228;
  goto yy223;
 } else {
  if (yych <= 'Z') goto yy237;
  if (yych <= '`') goto yy223;
  if (yych <= 'z') goto yy242;
  goto yy223;
 }
yy236:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy228;
  goto yy223;
 } else {
  if (yych <= 'Z') goto yy237;
  if (yych <= '`') goto yy223;
  if (yych >= '{') goto yy223;
 }
yy237:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy228;
  goto yy223;
 } else {
  if (yych <= 'Z') goto yy238;
  if (yych <= '`') goto yy223;
  if (yych >= '{') goto yy223;
 }
yy238:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy228;
  goto yy223;
 } else {
  if (yych <= 'Z') goto yy239;
  if (yych <= '`') goto yy223;
  if (yych >= '{') goto yy223;
 }
yy239:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy228;
  goto yy223;
 } else {
  if (yych <= 'Z') goto yy240;
  if (yych <= '`') goto yy223;
  if (yych >= '{') goto yy223;
 }
yy240:
 ;
 yych = *++cursor;
 if (yych <= '@') {
  if (yych == ')') goto yy228;
  goto yy223;
 } else {
  if (yych <= 'Z') goto yy241;
  if (yych <= '`') goto yy223;
  if (yych >= '{') goto yy223;
 }
yy241:
 ;
 yych = *++cursor;
 if (yych == ')') goto yy228;
 goto yy223;
yy242:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy228;
   goto yy223;
  } else {
   if (yych == '.') goto yy223;
   goto yy244;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy223;
   if (yych <= 'Z') goto yy238;
   goto yy223;
  } else {
   if (yych <= '_') goto yy244;
   if (yych <= '`') goto yy223;
   if (yych >= '{') goto yy223;
  }
 }
yy243:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy228;
   goto yy223;
  } else {
   if (yych == '.') goto yy223;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy223;
   if (yych <= 'Z') goto yy239;
   goto yy223;
  } else {
   if (yych <= '_') goto yy244;
   if (yych <= '`') goto yy223;
   if (yych <= 'z') goto yy247;
   goto yy223;
  }
 }
yy244:
 ;
 ++cursor;
 if (s->lim <= cursor) return 257;;
 yych = *cursor;
 if (yych <= '@') goto yy57;
 if (yych <= 'Z') goto yy245;
 if (yych <= '`') goto yy57;
 if (yych >= '{') goto yy57;
yy245:
 ;
 yyaccept = 7;
 s->ptr = ++cursor;
 if (s->lim <= cursor) return 257;;
 yych = *cursor;
 ;
 if (yych <= '@') {
  if (yych <= '-') {
   if (yych <= ',') goto yy223;
   goto yy244;
  } else {
   if (yych == '/') goto yy244;
   goto yy223;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'Z') goto yy245;
   if (yych <= '^') goto yy223;
   goto yy244;
  } else {
   if (yych <= '`') goto yy223;
   if (yych <= 'z') goto yy245;
   goto yy223;
  }
 }
yy247:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy228;
   goto yy223;
  } else {
   if (yych == '.') goto yy223;
   goto yy244;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy223;
   if (yych <= 'Z') goto yy240;
   goto yy223;
  } else {
   if (yych <= '_') goto yy244;
   if (yych <= '`') goto yy223;
   if (yych >= '{') goto yy223;
  }
 }
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy228;
   goto yy223;
  } else {
   if (yych == '.') goto yy223;
   goto yy244;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy223;
   if (yych <= 'Z') goto yy241;
   goto yy223;
  } else {
   if (yych <= '_') goto yy244;
   if (yych <= '`') goto yy223;
   if (yych >= '{') goto yy223;
  }
 }
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ')') {
   if (yych <= '(') goto yy223;
   goto yy228;
  } else {
   if (yych == '-') goto yy244;
   goto yy223;
  }
 } else {
  if (yych <= '_') {
   if (yych <= '/') goto yy244;
   if (yych <= '^') goto yy223;
   goto yy244;
  } else {
   if (yych <= '`') goto yy223;
   if (yych >= '{') goto yy223;
  }
 }
yy250:
 ;
 ++cursor;
 if (s->lim <= cursor) return 257;;
 yych = *cursor;
 ;
 if (yych <= '/') {
  if (yych == '-') goto yy244;
  if (yych <= '.') goto yy57;
  goto yy244;
 } else {
  if (yych <= '_') {
   if (yych <= '^') goto yy57;
   goto yy244;
  } else {
   if (yych <= '`') goto yy57;
   if (yych <= 'z') goto yy250;
   goto yy57;
  }
 }
yy252:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy223;
 if (yych <= '9') goto yy254;
 if (yych <= ':') goto yy255;
 goto yy223;
yy253:
 ;
 yych = *++cursor;
 if (yych <= '5') {
  if (yych <= '/') goto yy223;
  if (yych >= '5') goto yy256;
 } else {
  if (yych <= '9') goto yy228;
  if (yych <= ':') goto yy255;
  goto yy223;
 }
yy254:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy223;
 if (yych <= '5') goto yy256;
 if (yych <= '9') goto yy228;
 if (yych >= ';') goto yy223;
yy255:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy223;
 if (yych <= '5') goto yy256;
 if (yych <= '9') goto yy228;
 goto yy223;
yy256:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy223;
 if (yych <= '9') goto yy228;
 goto yy223;
yy257:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych == ')') goto yy228;
  if (yych <= '@') goto yy223;
  goto yy238;
 } else {
  if (yych <= 'Z') {
   if (yych >= 'U') goto yy238;
  } else {
   if (yych <= '`') goto yy223;
   if (yych <= 'z') goto yy238;
   goto yy223;
  }
 }
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= ')') {
   if (yych <= '(') goto yy223;
   goto yy228;
  } else {
   if (yych == '+') goto yy233;
   goto yy223;
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '-') goto yy233;
   if (yych <= '@') goto yy223;
   goto yy239;
  } else {
   if (yych <= '`') goto yy223;
   if (yych <= 'z') goto yy239;
   goto yy223;
  }
 }
yy259:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy221;
  goto yy199;
 } else {
  if (yych <= '0') goto yy291;
  if (yych <= '9') goto yy292;
  if (yych <= ':') goto yy221;
  goto yy199;
 }
yy260:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy264;
  goto yy199;
 } else {
  if (yych <= '2') goto yy292;
  if (yych <= '9') goto yy291;
  if (yych <= ':') goto yy264;
  goto yy199;
 }
yy261:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy264;
  goto yy199;
 } else {
  if (yych <= '4') goto yy291;
  if (yych <= '9') goto yy263;
  if (yych <= ':') goto yy264;
  goto yy199;
 }
yy262:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy264;
  goto yy199;
 } else {
  if (yych <= '9') goto yy263;
  if (yych <= ':') goto yy264;
  goto yy199;
 }
yy263:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy199;
 if (yych <= '9') goto yy289;
 goto yy199;
yy264:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy265;
 if (yych <= '9') goto yy266;
 goto yy57;
yy265:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy267;
  goto yy223;
 } else {
  if (yych <= '9') goto yy282;
  if (yych <= ':') goto yy267;
  goto yy223;
 }
yy266:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy267;
 if (yych != ':') goto yy223;
yy267:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy268;
 if (yych <= '6') goto yy269;
 if (yych <= '9') goto yy228;
 goto yy57;
yy268:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy223;
 if (yych <= '9') goto yy270;
 goto yy223;
yy269:
 ;
 yych = *++cursor;
 if (yych != '0') goto yy223;
yy270:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '*') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy272;
   goto yy223;
  } else {
   if (yych <= ' ') goto yy272;
   if (yych == '(') goto yy272;
   goto yy223;
  }
 } else {
  if (yych <= '@') {
   if (yych == ',') goto yy223;
   if (yych <= '-') goto yy272;
   goto yy223;
  } else {
   if (yych <= 'Z') goto yy272;
   if (yych <= '`') goto yy223;
   if (yych <= 'z') goto yy272;
   goto yy223;
  }
 }
yy271:
 ;
 ++cursor;
 if ((s->lim - cursor) < 9) return 257;;
 yych = *cursor;
yy272:
 ;
 if (yych <= '@') {
  if (yych <= '\'') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy57;
    goto yy271;
   } else {
    if (yych == ' ') goto yy271;
    goto yy57;
   }
  } else {
   if (yych <= '+') {
    if (yych <= '(') goto yy234;
    if (yych <= '*') goto yy57;
    goto yy233;
   } else {
    if (yych == '-') goto yy233;
    goto yy57;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= 'G') {
    if (yych <= 'A') goto yy273;
    if (yych <= 'F') goto yy235;
    goto yy232;
   } else {
    if (yych != 'P') goto yy235;
   }
  } else {
   if (yych <= 'o') {
    if (yych <= '`') goto yy57;
    if (yych <= 'a') goto yy274;
    goto yy236;
   } else {
    if (yych <= 'p') goto yy274;
    if (yych <= 'z') goto yy236;
    goto yy57;
   }
  }
 }
yy273:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'L') {
  if (yych <= '-') {
   if (yych == ')') goto yy228;
   goto yy223;
  } else {
   if (yych <= '.') goto yy275;
   if (yych <= '@') goto yy223;
   goto yy237;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'M') goto yy276;
   if (yych <= 'Z') goto yy237;
   goto yy223;
  } else {
   if (yych == 'm') goto yy281;
   if (yych <= 'z') goto yy242;
   goto yy223;
  }
 }
yy274:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'L') {
  if (yych <= '-') {
   if (yych == ')') goto yy228;
   goto yy223;
  } else {
   if (yych <= '.') goto yy275;
   if (yych <= '@') goto yy223;
   goto yy237;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'M') goto yy276;
   if (yych <= 'Z') goto yy237;
   goto yy223;
  } else {
   if (yych == 'm') goto yy276;
   if (yych <= 'z') goto yy237;
   goto yy223;
  }
 }
yy275:
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy280;
 if (yych == 'm') goto yy280;
 goto yy57;
yy276:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= ')') {
  if (yych <= '\t') {
   if (yych <= 0x00) goto yy278;
   if (yych <= 0x08) goto yy223;
   goto yy278;
  } else {
   if (yych == ' ') goto yy278;
   if (yych <= '(') goto yy223;
   goto yy228;
  }
 } else {
  if (yych <= '@') {
   if (yych != '.') goto yy223;
  } else {
   if (yych <= 'Z') goto yy238;
   if (yych <= '`') goto yy223;
   if (yych <= 'z') goto yy238;
   goto yy223;
  }
 }
yy277:
 ;
 yych = *++cursor;
 if (yych <= '\t') {
  if (yych <= 0x00) goto yy278;
  if (yych <= 0x08) goto yy57;
 } else {
  if (yych != ' ') goto yy57;
 }
yy278:
 ;
 ++cursor;
 ;
# 1690 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->m = timelib_get_month((char **) &ptr);
  s->time->d = timelib_get_nr((char **) &ptr, 2);

  { if (s->time->have_time) { add_error(s, "Double time specification"); free(str); return 999; } else { s->time->have_time = 1; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; } };
  s->time->h = timelib_get_nr((char **) &ptr, 2);
  s->time->i = timelib_get_nr((char **) &ptr, 2);
  if (*ptr == ':' || *ptr == '.') {
   s->time->s = timelib_get_nr((char **) &ptr, 2);

   if (*ptr == '.') {
    s->time->f = timelib_get_frac_nr((char **) &ptr, 8);
   }
  }

  s->time->h += timelib_meridian((char **) &ptr, s->time->h);
  free(str);
  return 276;
 }
# 5235 "ext/date/lib/parse_date.c"
yy280:
 ;
 yych = *++cursor;
 if (yych <= 0x1F) {
  if (yych <= 0x00) goto yy278;
  if (yych == '\t') goto yy278;
  goto yy57;
 } else {
  if (yych <= ' ') goto yy278;
  if (yych == '.') goto yy277;
  goto yy57;
 }
yy281:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '-') {
  if (yych <= 0x1F) {
   if (yych <= 0x00) goto yy278;
   if (yych == '\t') goto yy278;
   goto yy223;
  } else {
   if (yych <= '(') {
    if (yych <= ' ') goto yy278;
    goto yy223;
   } else {
    if (yych <= ')') goto yy228;
    if (yych <= ',') goto yy223;
    goto yy244;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '.') goto yy277;
   if (yych <= '/') goto yy244;
   if (yych <= '@') goto yy223;
   goto yy238;
  } else {
   if (yych <= '_') {
    if (yych <= '^') goto yy223;
    goto yy244;
   } else {
    if (yych <= '`') goto yy223;
    if (yych <= 'z') goto yy243;
    goto yy223;
   }
  }
 }
yy282:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= ':') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy283;
   if (yych <= 0x1F) goto yy223;
  } else {
   if (yych == '.') goto yy267;
   if (yych <= '9') goto yy223;
   goto yy267;
  }
 } else {
  if (yych <= 'P') {
   if (yych == 'A') goto yy285;
   if (yych <= 'O') goto yy223;
   goto yy285;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy223;
    goto yy285;
   } else {
    if (yych == 'p') goto yy285;
    goto yy223;
   }
  }
 }
yy283:
 ;
 ++cursor;
 if ((s->lim - cursor) < 5) return 257;;
 yych = *cursor;
 ;
 if (yych <= 'A') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy283;
   goto yy57;
  } else {
   if (yych <= ' ') goto yy283;
   if (yych <= '@') goto yy57;
  }
 } else {
  if (yych <= '`') {
   if (yych != 'P') goto yy57;
  } else {
   if (yych <= 'a') goto yy285;
   if (yych != 'p') goto yy57;
  }
 }
yy285:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych != '.') goto yy57;
 } else {
  if (yych <= 'M') goto yy287;
  if (yych == 'm') goto yy287;
  goto yy57;
 }
yy286:
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy287;
 if (yych != 'm') goto yy57;
yy287:
 ;
 yych = *++cursor;
 if (yych <= 0x1F) {
  if (yych <= 0x00) goto yy278;
  if (yych == '\t') goto yy278;
  goto yy57;
 } else {
  if (yych <= ' ') goto yy278;
  if (yych != '.') goto yy57;
 }
yy288:
 ;
 yych = *++cursor;
 if (yych <= '\t') {
  if (yych <= 0x00) goto yy278;
  if (yych <= 0x08) goto yy57;
  goto yy278;
 } else {
  if (yych == ' ') goto yy278;
  goto yy57;
 }
yy289:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy199;
 if (yych >= ':') goto yy199;
 ;
 yych = *++cursor;
 goto yy199;
yy291:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy221;
  goto yy199;
 } else {
  if (yych <= '9') goto yy289;
  if (yych <= ':') goto yy221;
  goto yy199;
 }
yy292:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy264;
  goto yy199;
 } else {
  if (yych <= '9') goto yy289;
  if (yych <= ':') goto yy264;
  goto yy199;
 }
yy293:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
yy294:
 ;
 ++cursor;
yy295:
 ;
# 1384 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->m = timelib_get_month((char **) &ptr);
  s->time->y = timelib_get_nr_ex((char **) &ptr, 4, &length);
  s->time->d = 1;
  { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  free(str);
  return 275;
 }
# 5426 "ext/date/lib/parse_date.c"
yy296:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy221;
  goto yy57;
 } else {
  if (yych <= '9') goto yy294;
  if (yych <= ':') goto yy221;
  goto yy57;
 }
yy297:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy264;
  goto yy57;
 } else {
  if (yych <= '9') goto yy294;
  if (yych <= ':') goto yy264;
  goto yy57;
 }
yy298:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '/') {
   if (yych == '.') goto yy331;
   goto yy216;
  } else {
   if (yych <= '0') goto yy332;
   if (yych <= '1') goto yy302;
   if (yych <= '2') goto yy303;
   goto yy297;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= ':') goto yy221;
   if (yych == 'n') goto yy212;
   goto yy216;
  } else {
   if (yych <= 'r') goto yy213;
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy299:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '/') {
   if (yych != '.') goto yy216;
  } else {
   if (yych <= '0') goto yy301;
   if (yych <= '1') goto yy302;
   if (yych <= '2') goto yy303;
   goto yy297;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= ':') goto yy264;
   if (yych == 'n') goto yy212;
   goto yy216;
  } else {
   if (yych <= 'r') goto yy213;
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy300:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '1') {
  if (yych <= '/') goto yy216;
  if (yych <= '0') goto yy306;
  goto yy307;
 } else {
  if (yych <= '2') goto yy308;
  if (yych <= '5') goto yy309;
  if (yych <= '9') goto yy310;
  goto yy216;
 }
yy301:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy264;
  goto yy57;
 } else {
  if (yych <= '0') goto yy304;
  if (yych <= '9') goto yy305;
  if (yych <= ':') goto yy264;
  goto yy57;
 }
yy302:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy264;
  goto yy57;
 } else {
  if (yych <= '2') goto yy305;
  if (yych <= '9') goto yy304;
  if (yych <= ':') goto yy264;
  goto yy57;
 }
yy303:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy264;
  goto yy57;
 } else {
  if (yych <= '4') goto yy304;
  if (yych <= '9') goto yy294;
  if (yych <= ':') goto yy264;
  goto yy57;
 }
yy304:
 ;
 yyaccept = 8;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy221;
 if (yych == ':') goto yy221;
 goto yy295;
yy305:
 ;
 yyaccept = 8;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy264;
 if (yych == ':') goto yy264;
 goto yy295;
yy306:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy326;
  goto yy199;
 } else {
  if (yych <= '0') goto yy325;
  if (yych <= '9') goto yy330;
  if (yych <= ':') goto yy326;
  goto yy199;
 }
yy307:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy311;
  goto yy199;
 } else {
  if (yych <= '2') goto yy330;
  if (yych <= '9') goto yy325;
  if (yych <= ':') goto yy311;
  goto yy199;
 }
yy308:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy311;
  goto yy199;
 } else {
  if (yych <= '4') goto yy325;
  if (yych <= '9') goto yy324;
  if (yych <= ':') goto yy311;
  goto yy199;
 }
yy309:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy311;
  goto yy199;
 } else {
  if (yych <= '9') goto yy324;
  if (yych <= ':') goto yy311;
  goto yy199;
 }
yy310:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych != '.') goto yy199;
 } else {
  if (yych <= '9') goto yy263;
  if (yych >= ';') goto yy199;
 }
yy311:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy312;
 if (yych <= '6') goto yy313;
 if (yych <= '9') goto yy266;
 goto yy57;
yy312:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy267;
  goto yy223;
 } else {
  if (yych <= '9') goto yy314;
  if (yych <= ':') goto yy267;
  goto yy223;
 }
yy313:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy267;
  goto yy223;
 } else {
  if (yych <= '0') goto yy270;
  if (yych == ':') goto yy267;
  goto yy223;
 }
yy314:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy316;
   if (yych <= 0x1F) goto yy223;
   goto yy316;
  } else {
   if (yych <= '(') {
    if (yych <= '\'') goto yy223;
    goto yy316;
   } else {
    if (yych == '+') goto yy316;
    goto yy223;
   }
  }
 } else {
  if (yych <= ':') {
   if (yych <= '-') goto yy316;
   if (yych <= '.') goto yy267;
   if (yych <= '9') goto yy223;
   goto yy267;
  } else {
   if (yych <= 'Z') {
    if (yych <= '@') goto yy223;
    goto yy316;
   } else {
    if (yych <= '`') goto yy223;
    if (yych <= 'z') goto yy316;
    goto yy223;
   }
  }
 }
yy315:
 ;
 ++cursor;
 if ((s->lim - cursor) < 9) return 257;;
 yych = *cursor;
yy316:
 ;
 if (yych <= '@') {
  if (yych <= '\'') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy57;
    goto yy315;
   } else {
    if (yych == ' ') goto yy315;
    goto yy57;
   }
  } else {
   if (yych <= '+') {
    if (yych <= '(') goto yy234;
    if (yych <= '*') goto yy57;
    goto yy233;
   } else {
    if (yych == '-') goto yy233;
    goto yy57;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= 'G') {
    if (yych <= 'A') goto yy317;
    if (yych <= 'F') goto yy235;
    goto yy232;
   } else {
    if (yych != 'P') goto yy235;
   }
  } else {
   if (yych <= 'o') {
    if (yych <= '`') goto yy57;
    if (yych <= 'a') goto yy318;
    goto yy236;
   } else {
    if (yych <= 'p') goto yy318;
    if (yych <= 'z') goto yy236;
    goto yy57;
   }
  }
 }
yy317:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'L') {
  if (yych <= '-') {
   if (yych == ')') goto yy228;
   goto yy223;
  } else {
   if (yych <= '.') goto yy320;
   if (yych <= '@') goto yy223;
   goto yy237;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'M') goto yy319;
   if (yych <= 'Z') goto yy237;
   goto yy223;
  } else {
   if (yych == 'm') goto yy323;
   if (yych <= 'z') goto yy242;
   goto yy223;
  }
 }
yy318:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'L') {
  if (yych <= '-') {
   if (yych == ')') goto yy228;
   goto yy223;
  } else {
   if (yych <= '.') goto yy320;
   if (yych <= '@') goto yy223;
   goto yy237;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'M') goto yy319;
   if (yych <= 'Z') goto yy237;
   goto yy223;
  } else {
   if (yych == 'm') goto yy319;
   if (yych <= 'z') goto yy237;
   goto yy223;
  }
 }
yy319:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= ')') {
  if (yych <= '\t') {
   if (yych <= 0x00) goto yy278;
   if (yych <= 0x08) goto yy223;
   goto yy278;
  } else {
   if (yych == ' ') goto yy278;
   if (yych <= '(') goto yy223;
   goto yy228;
  }
 } else {
  if (yych <= '@') {
   if (yych == '.') goto yy322;
   goto yy223;
  } else {
   if (yych <= 'Z') goto yy238;
   if (yych <= '`') goto yy223;
   if (yych <= 'z') goto yy238;
   goto yy223;
  }
 }
yy320:
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy321;
 if (yych != 'm') goto yy57;
yy321:
 ;
 yych = *++cursor;
 if (yych <= 0x1F) {
  if (yych <= 0x00) goto yy278;
  if (yych == '\t') goto yy278;
  goto yy57;
 } else {
  if (yych <= ' ') goto yy278;
  if (yych != '.') goto yy57;
 }
yy322:
 ;
 yych = *++cursor;
 if (yych <= '\t') {
  if (yych <= 0x00) goto yy278;
  if (yych <= 0x08) goto yy57;
  goto yy278;
 } else {
  if (yych == ' ') goto yy278;
  goto yy57;
 }
yy323:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '-') {
  if (yych <= 0x1F) {
   if (yych <= 0x00) goto yy278;
   if (yych == '\t') goto yy278;
   goto yy223;
  } else {
   if (yych <= '(') {
    if (yych <= ' ') goto yy278;
    goto yy223;
   } else {
    if (yych <= ')') goto yy228;
    if (yych <= ',') goto yy223;
    goto yy244;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '.') goto yy322;
   if (yych <= '/') goto yy244;
   if (yych <= '@') goto yy223;
   goto yy238;
  } else {
   if (yych <= '_') {
    if (yych <= '^') goto yy223;
    goto yy244;
   } else {
    if (yych <= '`') goto yy223;
    if (yych <= 'z') goto yy243;
    goto yy223;
   }
  }
 }
yy324:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= ':') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy283;
   if (yych <= 0x1F) goto yy199;
   goto yy283;
  } else {
   if (yych <= '.') {
    if (yych <= '-') goto yy199;
    goto yy267;
   } else {
    if (yych <= '/') goto yy199;
    if (yych <= '9') goto yy289;
    goto yy267;
   }
  }
 } else {
  if (yych <= 'P') {
   if (yych == 'A') goto yy285;
   if (yych <= 'O') goto yy199;
   goto yy285;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy199;
    goto yy285;
   } else {
    if (yych == 'p') goto yy285;
    goto yy199;
   }
  }
 }
yy325:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= ':') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy283;
   if (yych <= 0x1F) goto yy199;
   goto yy283;
  } else {
   if (yych <= '.') {
    if (yych <= '-') goto yy199;
   } else {
    if (yych <= '/') goto yy199;
    if (yych <= '9') goto yy289;
   }
  }
 } else {
  if (yych <= 'P') {
   if (yych == 'A') goto yy285;
   if (yych <= 'O') goto yy199;
   goto yy285;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy199;
    goto yy285;
   } else {
    if (yych == 'p') goto yy285;
    goto yy199;
   }
  }
 }
yy326:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy327;
 if (yych <= '6') goto yy328;
 if (yych <= '9') goto yy224;
 goto yy57;
yy327:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy225;
  goto yy223;
 } else {
  if (yych <= '9') goto yy329;
  if (yych <= ':') goto yy225;
  goto yy223;
 }
yy328:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy225;
  goto yy223;
 } else {
  if (yych <= '0') goto yy270;
  if (yych == ':') goto yy225;
  goto yy223;
 }
yy329:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy272;
   if (yych <= 0x1F) goto yy223;
   goto yy272;
  } else {
   if (yych <= '(') {
    if (yych <= '\'') goto yy223;
    goto yy272;
   } else {
    if (yych == '+') goto yy272;
    goto yy223;
   }
  }
 } else {
  if (yych <= ':') {
   if (yych <= '-') goto yy272;
   if (yych <= '.') goto yy225;
   if (yych <= '9') goto yy223;
   goto yy225;
  } else {
   if (yych <= 'Z') {
    if (yych <= '@') goto yy223;
    goto yy272;
   } else {
    if (yych <= '`') goto yy223;
    if (yych <= 'z') goto yy272;
    goto yy223;
   }
  }
 }
yy330:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= ':') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy283;
   if (yych <= 0x1F) goto yy199;
   goto yy283;
  } else {
   if (yych <= '.') {
    if (yych <= '-') goto yy199;
    goto yy311;
   } else {
    if (yych <= '/') goto yy199;
    if (yych <= '9') goto yy289;
    goto yy311;
   }
  }
 } else {
  if (yych <= 'P') {
   if (yych == 'A') goto yy285;
   if (yych <= 'O') goto yy199;
   goto yy285;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy199;
    goto yy285;
   } else {
    if (yych == 'p') goto yy285;
    goto yy199;
   }
  }
 }
yy331:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '1') {
  if (yych <= '/') goto yy216;
  if (yych <= '0') goto yy333;
  goto yy334;
 } else {
  if (yych <= '2') goto yy335;
  if (yych <= '5') goto yy336;
  if (yych <= '9') goto yy337;
  goto yy216;
 }
yy332:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy221;
  goto yy57;
 } else {
  if (yych <= '0') goto yy304;
  if (yych <= '9') goto yy305;
  if (yych <= ':') goto yy221;
  goto yy57;
 }
yy333:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy350;
  goto yy199;
 } else {
  if (yych <= '0') goto yy349;
  if (yych <= '9') goto yy354;
  if (yych <= ':') goto yy350;
  goto yy199;
 }
yy334:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy338;
  goto yy199;
 } else {
  if (yych <= '2') goto yy354;
  if (yych <= '9') goto yy349;
  if (yych <= ':') goto yy338;
  goto yy199;
 }
yy335:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy338;
  goto yy199;
 } else {
  if (yych <= '4') goto yy349;
  if (yych <= '9') goto yy348;
  if (yych <= ':') goto yy338;
  goto yy199;
 }
yy336:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy338;
  goto yy199;
 } else {
  if (yych <= '9') goto yy348;
  if (yych <= ':') goto yy338;
  goto yy199;
 }
yy337:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych != '.') goto yy199;
 } else {
  if (yych <= '9') goto yy263;
  if (yych >= ';') goto yy199;
 }
yy338:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy339;
 if (yych <= '6') goto yy340;
 if (yych <= '9') goto yy266;
 goto yy57;
yy339:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy267;
  goto yy223;
 } else {
  if (yych <= '9') goto yy341;
  if (yych <= ':') goto yy267;
  goto yy223;
 }
yy340:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy267;
  goto yy223;
 } else {
  if (yych <= '0') goto yy229;
  if (yych == ':') goto yy267;
  goto yy223;
 }
yy341:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy343;
   if (yych <= 0x1F) goto yy223;
   goto yy343;
  } else {
   if (yych <= '(') {
    if (yych <= '\'') goto yy223;
    goto yy343;
   } else {
    if (yych == '+') goto yy343;
    goto yy223;
   }
  }
 } else {
  if (yych <= ':') {
   if (yych <= '-') goto yy343;
   if (yych <= '.') goto yy267;
   if (yych <= '9') goto yy223;
   goto yy267;
  } else {
   if (yych <= 'Z') {
    if (yych <= '@') goto yy223;
    goto yy343;
   } else {
    if (yych <= '`') goto yy223;
    if (yych <= 'z') goto yy343;
    goto yy223;
   }
  }
 }
yy342:
 ;
 ++cursor;
 if ((s->lim - cursor) < 9) return 257;;
 yych = *cursor;
yy343:
 ;
 if (yych <= '@') {
  if (yych <= '\'') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy57;
    goto yy342;
   } else {
    if (yych == ' ') goto yy342;
    goto yy57;
   }
  } else {
   if (yych <= '+') {
    if (yych <= '(') goto yy234;
    if (yych <= '*') goto yy57;
    goto yy233;
   } else {
    if (yych == '-') goto yy233;
    goto yy57;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= 'G') {
    if (yych <= 'A') goto yy344;
    if (yych <= 'F') goto yy235;
    goto yy232;
   } else {
    if (yych != 'P') goto yy235;
   }
  } else {
   if (yych <= 'o') {
    if (yych <= '`') goto yy57;
    if (yych <= 'a') goto yy345;
    goto yy236;
   } else {
    if (yych <= 'p') goto yy345;
    if (yych <= 'z') goto yy236;
    goto yy57;
   }
  }
 }
yy344:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'L') {
  if (yych <= '-') {
   if (yych == ')') goto yy228;
   goto yy223;
  } else {
   if (yych <= '.') goto yy286;
   if (yych <= '@') goto yy223;
   goto yy237;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'M') goto yy346;
   if (yych <= 'Z') goto yy237;
   goto yy223;
  } else {
   if (yych == 'm') goto yy347;
   if (yych <= 'z') goto yy242;
   goto yy223;
  }
 }
yy345:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'L') {
  if (yych <= '-') {
   if (yych == ')') goto yy228;
   goto yy223;
  } else {
   if (yych <= '.') goto yy286;
   if (yych <= '@') goto yy223;
   goto yy237;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'M') goto yy346;
   if (yych <= 'Z') goto yy237;
   goto yy223;
  } else {
   if (yych == 'm') goto yy346;
   if (yych <= 'z') goto yy237;
   goto yy223;
  }
 }
yy346:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= ')') {
  if (yych <= '\t') {
   if (yych <= 0x00) goto yy278;
   if (yych <= 0x08) goto yy223;
   goto yy278;
  } else {
   if (yych == ' ') goto yy278;
   if (yych <= '(') goto yy223;
   goto yy228;
  }
 } else {
  if (yych <= '@') {
   if (yych == '.') goto yy288;
   goto yy223;
  } else {
   if (yych <= 'Z') goto yy238;
   if (yych <= '`') goto yy223;
   if (yych <= 'z') goto yy238;
   goto yy223;
  }
 }
yy347:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '-') {
  if (yych <= 0x1F) {
   if (yych <= 0x00) goto yy278;
   if (yych == '\t') goto yy278;
   goto yy223;
  } else {
   if (yych <= '(') {
    if (yych <= ' ') goto yy278;
    goto yy223;
   } else {
    if (yych <= ')') goto yy228;
    if (yych <= ',') goto yy223;
    goto yy244;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '.') goto yy288;
   if (yych <= '/') goto yy244;
   if (yych <= '@') goto yy223;
   goto yy238;
  } else {
   if (yych <= '_') {
    if (yych <= '^') goto yy223;
    goto yy244;
   } else {
    if (yych <= '`') goto yy223;
    if (yych <= 'z') goto yy243;
    goto yy223;
   }
  }
 }
yy348:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy225;
  goto yy199;
 } else {
  if (yych <= '9') goto yy289;
  if (yych <= ':') goto yy225;
  goto yy199;
 }
yy349:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych != '.') goto yy199;
 } else {
  if (yych <= '9') goto yy289;
  if (yych >= ';') goto yy199;
 }
yy350:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy351;
 if (yych <= '6') goto yy352;
 if (yych <= '9') goto yy224;
 goto yy57;
yy351:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy225;
  goto yy223;
 } else {
  if (yych <= '9') goto yy353;
  if (yych <= ':') goto yy225;
  goto yy223;
 }
yy352:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy225;
  goto yy223;
 } else {
  if (yych <= '0') goto yy229;
  if (yych == ':') goto yy225;
  goto yy223;
 }
yy353:
 ;
 yyaccept = 7;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy231;
   if (yych <= 0x1F) goto yy223;
   goto yy231;
  } else {
   if (yych <= '(') {
    if (yych <= '\'') goto yy223;
    goto yy231;
   } else {
    if (yych == '+') goto yy231;
    goto yy223;
   }
  }
 } else {
  if (yych <= ':') {
   if (yych <= '-') goto yy231;
   if (yych <= '.') goto yy225;
   if (yych <= '9') goto yy223;
   goto yy225;
  } else {
   if (yych <= 'Z') {
    if (yych <= '@') goto yy223;
    goto yy231;
   } else {
    if (yych <= '`') goto yy223;
    if (yych <= 'z') goto yy231;
    goto yy223;
   }
  }
 }
yy354:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy338;
  goto yy199;
 } else {
  if (yych <= '9') goto yy289;
  if (yych <= ':') goto yy338;
  goto yy199;
 }
yy355:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '/') {
   if (yych == '.') goto yy300;
   goto yy216;
  } else {
   if (yych <= '0') goto yy332;
   if (yych <= '1') goto yy302;
   if (yych <= '2') goto yy303;
   goto yy297;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= ':') goto yy264;
   if (yych == 'n') goto yy212;
   goto yy216;
  } else {
   if (yych <= 'r') goto yy213;
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy356:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '/') {
   if (yych == '.') goto yy300;
   goto yy216;
  } else {
   if (yych <= '0') goto yy332;
   if (yych <= '1') goto yy302;
   if (yych <= '2') goto yy303;
   goto yy297;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= ':') goto yy264;
   if (yych == 'n') goto yy212;
   goto yy216;
  } else {
   if (yych <= 'r') goto yy213;
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy357:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'm') {
  if (yych <= '1') {
   if (yych <= '/') goto yy216;
   if (yych <= '0') goto yy360;
   goto yy361;
  } else {
   if (yych <= '2') goto yy368;
   if (yych <= '9') goto yy369;
   goto yy216;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'n') goto yy212;
   if (yych <= 'q') goto yy216;
   goto yy213;
  } else {
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy358:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'm') {
  if (yych <= '1') {
   if (yych <= '/') goto yy216;
   if (yych <= '0') goto yy360;
   goto yy361;
  } else {
   if (yych <= '2') goto yy368;
   if (yych <= '9') goto yy369;
   goto yy216;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'n') goto yy212;
   if (yych <= 'q') goto yy216;
   goto yy213;
  } else {
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy359:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'm') {
  if (yych <= '1') {
   if (yych <= '/') goto yy216;
   if (yych >= '1') goto yy361;
  } else {
   if (yych <= '2') goto yy209;
   if (yych <= '9') goto yy210;
   goto yy216;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'n') goto yy212;
   if (yych <= 'q') goto yy216;
   goto yy213;
  } else {
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy360:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '/') {
   if (yych <= ',') goto yy216;
   if (yych <= '-') goto yy362;
   if (yych <= '.') goto yy331;
   goto yy216;
  } else {
   if (yych <= '0') goto yy332;
   if (yych <= '1') goto yy302;
   if (yych <= '2') goto yy303;
   goto yy297;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= ':') goto yy221;
   if (yych == 'n') goto yy212;
   goto yy216;
  } else {
   if (yych <= 'r') goto yy213;
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy361:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '/') {
   if (yych <= ',') goto yy216;
   if (yych <= '-') goto yy362;
   if (yych <= '.') goto yy300;
   goto yy216;
  } else {
   if (yych <= '0') goto yy301;
   if (yych <= '1') goto yy302;
   if (yych <= '2') goto yy303;
   goto yy297;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= ':') goto yy264;
   if (yych == 'n') goto yy212;
   goto yy216;
  } else {
   if (yych <= 'r') goto yy213;
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy362:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 ++cursor;
 if ((yych = *cursor) <= '/') goto yy364;
 if (yych <= '9') goto yy365;
yy364:
 ;
# 1528 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->m = timelib_get_month((char **) &ptr);
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  s->time->y = timelib_get_nr_ex((char **) &ptr, 4, &length);
  { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  free(str);
  return 272;
 }
# 6659 "ext/date/lib/parse_date.c"
yy365:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy364;
 if (yych >= ':') goto yy364;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy364;
 if (yych >= ':') goto yy364;
 ;
 yych = *++cursor;
 goto yy364;
yy368:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '/') {
   if (yych <= ',') goto yy216;
   if (yych <= '-') goto yy362;
   if (yych <= '.') goto yy300;
   goto yy216;
  } else {
   if (yych <= '0') goto yy332;
   if (yych <= '1') goto yy302;
   if (yych <= '2') goto yy303;
   goto yy297;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= ':') goto yy264;
   if (yych == 'n') goto yy212;
   goto yy216;
  } else {
   if (yych <= 'r') goto yy213;
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy369:
 ;
 yyaccept = 6;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '/') {
   if (yych <= ',') goto yy216;
   if (yych <= '-') goto yy362;
   if (yych <= '.') goto yy300;
   goto yy216;
  } else {
   if (yych <= '0') goto yy332;
   if (yych <= '1') goto yy302;
   if (yych <= '2') goto yy303;
   goto yy297;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= ':') goto yy264;
   if (yych == 'n') goto yy212;
   goto yy216;
  } else {
   if (yych <= 'r') goto yy213;
   if (yych <= 's') goto yy211;
   if (yych <= 't') goto yy214;
   goto yy216;
  }
 }
yy370:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'B') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'C') goto yy193;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'b') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'c') goto yy371;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy371:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'D') {
    if (yych <= '@') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'E') goto yy202;
    if (yych <= 'Z') goto yy143;
    goto yy194;
   }
  } else {
   if (yych <= 'd') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy151;
   } else {
    if (yych <= 'e') goto yy373;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy372:
 ;
 yych = *++cursor;
 if (yybm[0+yych] & 8) {
  goto yy149;
 }
 if (yych <= '/') goto yy196;
 if (yych <= '0') goto yy357;
 if (yych <= '2') goto yy358;
 if (yych <= '3') goto yy359;
 goto yy196;
yy373:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'L') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'M') goto yy203;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'l') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'm') goto yy374;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy374:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'A') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'B') goto yy204;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'b') goto yy375;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy375:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'E') goto yy205;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'e') goto yy376;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy376:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy206;
 if (yych != 'r') goto yy155;
yy377:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= '-') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy196;
   goto yy194;
  } else {
   if (yych <= ' ') goto yy196;
   if (yych <= ',') goto yy194;
  }
 } else {
  if (yych <= '9') {
   if (yych == '/') goto yy148;
   goto yy196;
  } else {
   if (yych == '_') goto yy148;
   goto yy194;
  }
 }
yy378:
 ;
 yych = *++cursor;
 if (yybm[0+yych] & 8) {
  goto yy149;
 }
 goto yy196;
yy379:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy142;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 't') goto yy380;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy380:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy194;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
    goto yy194;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
    goto yy194;
   } else {
    if (yych != 'O') goto yy143;
   }
  } else {
   if (yych <= 'n') {
    if (yych <= '`') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'o') goto yy381;
    if (yych <= 'z') goto yy143;
    goto yy194;
   }
  }
 }
yy381:
 ;
 yych = *++cursor;
 if (yych <= 'B') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'A') goto yy144;
  }
 } else {
  if (yych <= 'a') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'b') goto yy382;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy382:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy145;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'e') goto yy383;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy383:
 ;
 yych = *++cursor;
 if (yych <= 'Q') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'R') goto yy206;
  if (yych == 'r') goto yy206;
  goto yy4;
 }
yy384:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy380;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 't') goto yy385;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy385:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
    goto yy372;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'N') {
    if (yych <= '@') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'O') goto yy381;
    if (yych <= 'Z') goto yy143;
    goto yy194;
   }
  } else {
   if (yych <= 'n') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy151;
   } else {
    if (yych <= 'o') goto yy386;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy386:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'A') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'B') goto yy382;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'b') goto yy387;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy387:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'E') goto yy383;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'e') goto yy388;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy388:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'R') goto yy206;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'r') goto yy377;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy389:
 ;
 yych = *++cursor;
 if (yych <= 'G') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'F') goto yy142;
   goto yy397;
  }
 } else {
  if (yych <= 'f') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'g') goto yy397;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy390:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'Q') goto yy142;
   goto yy394;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'r') goto yy394;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy391:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'N') goto yy142;
  }
 } else {
  if (yych <= 'n') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'o') goto yy392;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy392:
 ;
 ++cursor;
 if ((yych = *cursor) <= '@') {
  if (yych == ')') goto yy140;
 } else {
  if (yych <= 'Z') goto yy143;
  if (yych <= '`') goto yy393;
  if (yych <= 'z') goto yy143;
 }
yy393:
 ;
# 1586 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  s->time->relative.y = 0 - s->time->relative.y;
  s->time->relative.m = 0 - s->time->relative.m;
  s->time->relative.d = 0 - s->time->relative.d;
  s->time->relative.h = 0 - s->time->relative.h;
  s->time->relative.i = 0 - s->time->relative.i;
  s->time->relative.s = 0 - s->time->relative.s;
  s->time->relative.weekday = 0 - s->time->relative.weekday;
  if (s->time->relative.weekday == 0) {
   s->time->relative.weekday = -7;
  }
  if (s->time->relative.have_special_relative && s->time->relative.special.type == 0x01) {
   s->time->relative.special.amount = 0 - s->time->relative.special.amount;
  }
  free(str);
  return 301;
 }
# 7317 "ext/date/lib/parse_date.c"
yy394:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy194;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
    goto yy194;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
    goto yy194;
   } else {
    if (yych != 'I') goto yy143;
   }
  } else {
   if (yych <= 'h') {
    if (yych <= '`') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'i') goto yy395;
    if (yych <= 'z') goto yy143;
    goto yy194;
   }
  }
 }
yy395:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'K') goto yy144;
  }
 } else {
  if (yych <= 'k') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'l') goto yy396;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy396:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy196;
   goto yy194;
  } else {
   if (yych <= ' ') goto yy196;
   if (yych == ')') goto yy140;
   goto yy194;
  }
 } else {
  if (yych <= '@') {
   if (yych == '/') goto yy194;
   if (yych <= '9') goto yy196;
   goto yy194;
  } else {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy194;
   if (yych <= 'z') goto yy145;
   goto yy194;
  }
 }
yy397:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy194;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
    goto yy194;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
    goto yy194;
   } else {
    if (yych != 'U') goto yy143;
   }
  } else {
   if (yych <= 't') {
    if (yych <= '`') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'u') goto yy398;
    if (yych <= 'z') goto yy143;
    goto yy194;
   }
  }
 }
yy398:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'R') goto yy144;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 's') goto yy399;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy399:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy145;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 't') goto yy400;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy400:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '(') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy194;
   goto yy196;
  } else {
   if (yych == ' ') goto yy196;
   goto yy194;
  }
 } else {
  if (yych <= '.') {
   if (yych <= ')') goto yy140;
   if (yych <= ',') goto yy194;
   goto yy196;
  } else {
   if (yych <= '/') goto yy194;
   if (yych <= '9') goto yy196;
   goto yy194;
  }
 }
yy401:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'F') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'G') goto yy397;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'f') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'g') goto yy408;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy402:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'R') goto yy394;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'q') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'r') goto yy405;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy403:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'N') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'O') goto yy392;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'n') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'o') goto yy404;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy404:
 ;
 yyaccept = 9;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy393;
  } else {
   if (yych == '.') goto yy393;
   goto yy148;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy393;
   if (yych <= 'Z') goto yy143;
   goto yy393;
  } else {
   if (yych <= '_') goto yy148;
   if (yych <= '`') goto yy393;
   if (yych <= 'z') goto yy151;
   goto yy393;
  }
 }
yy405:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
    goto yy372;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'H') {
    if (yych <= '@') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'I') goto yy395;
    if (yych <= 'Z') goto yy143;
    goto yy194;
   }
  } else {
   if (yych <= 'h') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy151;
   } else {
    if (yych <= 'i') goto yy406;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy406:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'K') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'L') goto yy396;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'k') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'l') goto yy407;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy407:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy196;
   if (yych <= 0x1F) goto yy194;
   goto yy196;
  } else {
   if (yych <= ')') {
    if (yych <= '(') goto yy194;
    goto yy140;
   } else {
    if (yych <= ',') goto yy194;
    if (yych <= '-') goto yy378;
    goto yy196;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '/') goto yy148;
   if (yych <= '9') goto yy196;
   if (yych <= '@') goto yy194;
   goto yy145;
  } else {
   if (yych <= '_') {
    if (yych <= '^') goto yy194;
    goto yy148;
   } else {
    if (yych <= '`') goto yy194;
    if (yych <= 'z') goto yy153;
    goto yy194;
   }
  }
 }
yy408:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
    goto yy372;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'T') {
    if (yych <= '@') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'U') goto yy398;
    if (yych <= 'Z') goto yy143;
    goto yy194;
   }
  } else {
   if (yych <= 't') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy151;
   } else {
    if (yych <= 'u') goto yy409;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy409:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'R') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'S') goto yy399;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'r') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 's') goto yy410;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy410:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy400;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 't') goto yy411;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy411:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= ',') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy196;
   goto yy194;
  } else {
   if (yych <= ' ') goto yy196;
   if (yych == ')') goto yy140;
   goto yy194;
  }
 } else {
  if (yych <= '/') {
   if (yych <= '-') goto yy378;
   if (yych <= '.') goto yy196;
   goto yy148;
  } else {
   if (yych <= '9') goto yy196;
   if (yych == '_') goto yy148;
   goto yy194;
  }
 }
yy412:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == 'L') goto yy419;
   if (yych <= 'M') goto yy142;
   goto yy418;
  }
 } else {
  if (yych <= 'l') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   if (yych <= 'k') goto yy142;
   goto yy419;
  } else {
   if (yych == 'n') goto yy418;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy413:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'M') goto yy142;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'n') goto yy414;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy414:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy194;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
    goto yy194;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
    goto yy194;
   } else {
    if (yych != 'U') goto yy143;
   }
  } else {
   if (yych <= 't') {
    if (yych <= '`') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'u') goto yy415;
    if (yych <= 'z') goto yy143;
    goto yy194;
   }
  }
 }
yy415:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy144;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy416;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy416:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'Q') goto yy145;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'r') goto yy417;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy417:
 ;
 yych = *++cursor;
 if (yych <= 'X') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'Y') goto yy206;
  if (yych == 'y') goto yy206;
  goto yy4;
 }
yy418:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy194;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
    goto yy194;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
    goto yy194;
   } else {
    if (yych == 'E') goto yy420;
    goto yy143;
   }
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'e') goto yy420;
    if (yych <= 'z') goto yy143;
    goto yy194;
   }
  }
 }
yy419:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy194;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
    goto yy194;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
    goto yy194;
   } else {
    if (yych != 'Y') goto yy143;
   }
  } else {
   if (yych <= 'x') {
    if (yych <= '`') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'y') goto yy420;
    if (yych <= 'z') goto yy143;
    goto yy194;
   }
  }
 }
yy420:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy196;
   goto yy194;
  } else {
   if (yych <= ' ') goto yy196;
   if (yych == ')') goto yy140;
   goto yy194;
  }
 } else {
  if (yych <= '@') {
   if (yych == '/') goto yy194;
   if (yych <= '9') goto yy196;
   goto yy194;
  } else {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy194;
   if (yych <= 'z') goto yy144;
   goto yy194;
  }
 }
yy421:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '.') {
   if (yych <= ')') {
    if (yych <= '(') goto yy4;
    goto yy140;
   } else {
    if (yych == '-') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= '@') {
    if (yych <= '/') goto yy148;
    goto yy4;
   } else {
    if (yych == 'L') goto yy419;
    goto yy142;
   }
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') {
    if (yych <= 'N') goto yy418;
    goto yy142;
   } else {
    if (yych == '_') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= 'm') {
    if (yych == 'l') goto yy428;
    goto yy147;
   } else {
    if (yych <= 'n') goto yy427;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy422:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy414;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'n') goto yy423;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy423:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
    goto yy372;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'T') {
    if (yych <= '@') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'U') goto yy415;
    if (yych <= 'Z') goto yy143;
    goto yy194;
   }
  } else {
   if (yych <= 't') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy151;
   } else {
    if (yych <= 'u') goto yy424;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy424:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'A') goto yy416;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy425;
   if (yych <= 'z') goto yy152;
   goto yy4;
  }
 }
yy425:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'R') goto yy417;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'q') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'r') goto yy426;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy426:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'X') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'Y') goto yy206;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'y') goto yy377;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy427:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
    goto yy372;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'D') {
    if (yych <= '@') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'E') goto yy420;
    if (yych <= 'Z') goto yy143;
    goto yy194;
   }
  } else {
   if (yych <= 'd') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy151;
   } else {
    if (yych <= 'e') goto yy429;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy428:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
    goto yy372;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'X') {
    if (yych <= '@') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'Y') goto yy420;
    if (yych <= 'Z') goto yy143;
    goto yy194;
   }
  } else {
   if (yych <= 'x') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy151;
   } else {
    if (yych <= 'y') goto yy429;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy429:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy196;
   if (yych <= 0x1F) goto yy194;
   goto yy196;
  } else {
   if (yych <= ')') {
    if (yych <= '(') goto yy194;
    goto yy140;
   } else {
    if (yych <= ',') goto yy194;
    if (yych <= '-') goto yy378;
    goto yy196;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '/') goto yy148;
   if (yych <= '9') goto yy196;
   if (yych <= '@') goto yy194;
   goto yy144;
  } else {
   if (yych <= '_') {
    if (yych <= '^') goto yy194;
    goto yy148;
   } else {
    if (yych <= '`') goto yy194;
    if (yych <= 'z') goto yy152;
    goto yy194;
   }
  }
 }
yy430:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy196;
   if (yych <= 0x1F) goto yy4;
   goto yy196;
  } else {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy196;
  }
 } else {
  if (yych <= 'H') {
   if (yych <= '/') goto yy4;
   if (yych <= '9') goto yy196;
   if (yych <= '@') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'Z') {
    if (yych >= 'J') goto yy142;
   } else {
    if (yych <= '`') goto yy4;
    if (yych <= 'z') goto yy142;
    goto yy4;
   }
  }
 }
yy431:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy196;
   goto yy4;
  } else {
   if (yych <= ' ') goto yy196;
   if (yych == ')') goto yy140;
   goto yy4;
  }
 } else {
  if (yych <= '@') {
   if (yych == '/') goto yy4;
   if (yych <= '9') goto yy196;
   goto yy4;
  } else {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy432:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy196;
   if (yych <= 0x1F) goto yy4;
   goto yy196;
  } else {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy196;
  }
 } else {
  if (yych <= 'H') {
   if (yych <= '/') goto yy4;
   if (yych <= '9') goto yy196;
   if (yych <= '@') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'Z') {
    if (yych >= 'J') goto yy142;
   } else {
    if (yych <= '`') goto yy4;
    if (yych <= 'z') goto yy142;
    goto yy4;
   }
  }
 }
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy196;
   if (yych <= 0x1F) goto yy4;
   goto yy196;
  } else {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy196;
  }
 } else {
  if (yych <= 'H') {
   if (yych <= '/') goto yy4;
   if (yych <= '9') goto yy196;
   if (yych <= '@') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'Z') {
    if (yych >= 'J') goto yy143;
   } else {
    if (yych <= '`') goto yy4;
    if (yych <= 'z') goto yy143;
    goto yy4;
   }
  }
 }
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy196;
   goto yy4;
  } else {
   if (yych <= ' ') goto yy196;
   if (yych == ')') goto yy140;
   goto yy4;
  }
 } else {
  if (yych <= '@') {
   if (yych == '/') goto yy4;
   if (yych <= '9') goto yy196;
   goto yy4;
  } else {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy435:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy196;
   goto yy4;
  } else {
   if (yych <= ' ') goto yy196;
   if (yych == ')') goto yy140;
   goto yy4;
  }
 } else {
  if (yych <= '@') {
   if (yych == '/') goto yy4;
   if (yych <= '9') goto yy196;
   goto yy4;
  } else {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy436:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy196;
   if (yych <= 0x1F) goto yy4;
   goto yy196;
  } else {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy196;
  }
 } else {
  if (yych <= 'H') {
   if (yych <= '/') goto yy4;
   if (yych <= '9') goto yy196;
   if (yych <= '@') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'Z') {
    if (yych <= 'I') goto yy431;
    goto yy142;
   } else {
    if (yych <= '`') goto yy4;
    if (yych <= 'z') goto yy142;
    goto yy4;
   }
  }
 }
yy437:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy4;
    goto yy61;
   } else {
    if (yych <= '9') {
     if (yych <= '/') goto yy4;
     goto yy457;
    } else {
     if (yych <= ':') goto yy163;
     if (yych <= 'C') goto yy4;
     goto yy61;
    }
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy4;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy4;
     if (yych <= 'T') goto yy61;
     goto yy4;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy4;
    if (yych <= 'Y') goto yy61;
    goto yy4;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy4;
    } else {
     if (yych == 'g') goto yy4;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy4;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy4;
    }
   }
  }
 }
yy438:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych <= ':') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy4;
    goto yy61;
   } else {
    if (yych <= '4') {
     if (yych <= '/') goto yy4;
     goto yy457;
    } else {
     if (yych <= '5') goto yy442;
     if (yych <= '9') goto yy443;
     goto yy163;
    }
   }
  } else {
   if (yych <= 'G') {
    if (yych <= 'D') {
     if (yych <= 'C') goto yy4;
     goto yy61;
    } else {
     if (yych == 'F') goto yy61;
     goto yy4;
    }
   } else {
    if (yych <= 'L') {
     if (yych <= 'H') goto yy61;
     goto yy4;
    } else {
     if (yych <= 'M') goto yy61;
     if (yych <= 'R') goto yy4;
     goto yy61;
    }
   }
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Y') {
    if (yych == 'W') goto yy61;
    if (yych <= 'X') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'd') {
     if (yych <= 'c') goto yy4;
     goto yy61;
    } else {
     if (yych == 'f') goto yy61;
     goto yy4;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'l') {
     if (yych <= 'h') goto yy61;
     goto yy4;
    } else {
     if (yych <= 'm') goto yy61;
     if (yych <= 'r') goto yy4;
     goto yy61;
    }
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy4;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy4;
    }
   }
  }
 }
yy439:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych <= 'C') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy4;
    goto yy61;
   } else {
    if (yych <= '5') {
     if (yych <= '/') goto yy4;
     goto yy442;
    } else {
     if (yych <= '9') goto yy443;
     if (yych <= ':') goto yy163;
     goto yy4;
    }
   }
  } else {
   if (yych <= 'G') {
    if (yych == 'E') goto yy4;
    if (yych <= 'F') goto yy61;
    goto yy4;
   } else {
    if (yych <= 'L') {
     if (yych <= 'H') goto yy61;
     goto yy4;
    } else {
     if (yych <= 'M') goto yy61;
     if (yych <= 'R') goto yy4;
     goto yy61;
    }
   }
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Y') {
    if (yych == 'W') goto yy61;
    if (yych <= 'X') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'd') {
     if (yych <= 'c') goto yy4;
     goto yy61;
    } else {
     if (yych == 'f') goto yy61;
     goto yy4;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'l') {
     if (yych <= 'h') goto yy61;
     goto yy4;
    } else {
     if (yych <= 'm') goto yy61;
     if (yych <= 'r') goto yy4;
     goto yy61;
    }
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy4;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy4;
    }
   }
  }
 }
yy440:
 ;
 ++cursor;
 if (s->lim <= cursor) return 257;;
 yych = *cursor;
 ;
 if (yybm[0+yych] & 4) {
  goto yy58;
 }
 if (yych <= ',') {
  if (yych == '+') goto yy440;
  goto yy57;
 } else {
  if (yych <= '-') goto yy440;
  if (yych <= '/') goto yy57;
  if (yych <= '9') goto yy55;
  goto yy57;
 }
yy442:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy4;
    goto yy61;
   } else {
    if (yych <= '/') goto yy4;
    if (yych <= '9') goto yy456;
    if (yych <= 'C') goto yy4;
    goto yy61;
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy4;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy4;
     if (yych <= 'T') goto yy61;
     goto yy4;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy4;
    if (yych <= 'Y') goto yy61;
    goto yy4;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy4;
    } else {
     if (yych == 'g') goto yy4;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy4;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy4;
    }
   }
  }
 }
yy443:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy4;
    goto yy61;
   } else {
    if (yych <= '/') goto yy4;
    if (yych <= '9') goto yy444;
    if (yych <= 'C') goto yy4;
    goto yy61;
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy4;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy4;
     if (yych <= 'T') goto yy61;
     goto yy4;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy4;
    if (yych <= 'Y') goto yy61;
    goto yy4;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy4;
    } else {
     if (yych == 'g') goto yy4;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy4;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy4;
    }
   }
  }
 }
yy444:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych >= ':') goto yy61;
yy445:
 ;
 yych = *++cursor;
 if (yybm[0+yych] & 2) {
  goto yy55;
 }
 if (yych != '-') goto yy61;
yy446:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '0') goto yy447;
 if (yych <= '1') goto yy448;
 goto yy57;
yy447:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy449;
 goto yy57;
yy448:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '3') goto yy57;
yy449:
 ;
 yych = *++cursor;
 if (yych != '-') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '0') goto yy451;
 if (yych <= '2') goto yy452;
 if (yych <= '3') goto yy453;
 goto yy57;
yy451:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy454;
 goto yy57;
yy452:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy454;
 goto yy57;
yy453:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '2') goto yy57;
yy454:
 ;
 ++cursor;
yy455:
 ;
# 1289 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->y = timelib_get_unsigned_nr((char **) &ptr, 4);
  s->time->m = timelib_get_nr((char **) &ptr, 2);
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  free(str);
  return 267;
 }
# 9078 "ext/date/lib/parse_date.c"
yy456:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy4;
    goto yy61;
   } else {
    if (yych <= '/') goto yy4;
    if (yych <= '9') goto yy445;
    if (yych <= 'C') goto yy4;
    goto yy61;
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy4;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy4;
     if (yych <= 'T') goto yy61;
     goto yy4;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy4;
    if (yych <= 'Y') goto yy61;
    goto yy4;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy4;
    } else {
     if (yych == 'g') goto yy4;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy4;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy4;
    }
   }
  }
 }
yy457:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych <= 'C') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy4;
    goto yy61;
   } else {
    if (yych <= '5') {
     if (yych <= '/') goto yy4;
    } else {
     if (yych <= '9') goto yy456;
     if (yych <= ':') goto yy163;
     goto yy4;
    }
   }
  } else {
   if (yych <= 'G') {
    if (yych == 'E') goto yy4;
    if (yych <= 'F') goto yy61;
    goto yy4;
   } else {
    if (yych <= 'L') {
     if (yych <= 'H') goto yy61;
     goto yy4;
    } else {
     if (yych <= 'M') goto yy61;
     if (yych <= 'R') goto yy4;
     goto yy61;
    }
   }
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Y') {
    if (yych == 'W') goto yy61;
    if (yych <= 'X') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'd') {
     if (yych <= 'c') goto yy4;
     goto yy61;
    } else {
     if (yych == 'f') goto yy61;
     goto yy4;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'l') {
     if (yych <= 'h') goto yy61;
     goto yy4;
    } else {
     if (yych <= 'm') goto yy61;
     if (yych <= 'r') goto yy4;
     goto yy61;
    }
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy4;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy4;
    }
   }
  }
 }
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy4;
    goto yy61;
   } else {
    if (yych <= '/') goto yy4;
    if (yych <= '9') goto yy459;
    if (yych <= 'C') goto yy4;
    goto yy61;
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy4;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy4;
     if (yych <= 'T') goto yy61;
     goto yy4;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy4;
    if (yych <= 'Y') goto yy61;
    goto yy4;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy4;
    } else {
     if (yych == 'g') goto yy4;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy4;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy4;
    }
   }
  }
 }
yy459:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 2) {
  goto yy55;
 }
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy4;
    goto yy61;
   } else {
    if (yych == '-') goto yy446;
    if (yych <= 'C') goto yy4;
    goto yy61;
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy4;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy4;
     if (yych <= 'T') goto yy61;
     goto yy4;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy4;
    if (yych <= 'Y') goto yy61;
    goto yy4;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy4;
    } else {
     if (yych == 'g') goto yy4;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy4;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy4;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy4;
    }
   }
  }
 }
yy460:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy462;
 if (yych <= '0') goto yy736;
 if (yych <= '1') goto yy737;
 if (yych <= '9') goto yy738;
 goto yy462;
yy461:
 ;
 ++cursor;
 if ((s->lim - cursor) < 13) return 257;;
 yych = *cursor;
yy462:
 ;
 ;
 switch (yych) {
 case '\t':
 case ' ': goto yy461;
 case '-':
 case '.': goto yy577;
 case 'A':
 case 'a': goto yy480;
 case 'D':
 case 'd': goto yy466;
 case 'F':
 case 'f': goto yy467;
 case 'H':
 case 'h': goto yy64;
 case 'I': goto yy475;
 case 'J':
 case 'j': goto yy479;
 case 'M':
 case 'm': goto yy465;
 case 'N':
 case 'n': goto yy482;
 case 'O':
 case 'o': goto yy481;
 case 'P':
 case 'p': goto yy484;
 case 'S':
 case 's': goto yy463;
 case 'T':
 case 't': goto yy69;
 case 'V': goto yy477;
 case 'W':
 case 'w': goto yy68;
 case 'X': goto yy478;
 case 'Y':
 case 'y': goto yy67;
 default: goto yy57;
 }
yy463:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= 'D') {
   if (yych == 'A') goto yy127;
   goto yy57;
  } else {
   if (yych <= 'E') goto yy1049;
   if (yych <= 'T') goto yy57;
   goto yy126;
  }
 } else {
  if (yych <= 'd') {
   if (yych == 'a') goto yy127;
   goto yy57;
  } else {
   if (yych <= 'e') goto yy1049;
   if (yych == 'u') goto yy126;
   goto yy57;
  }
 }
yy464:
 ;
 yych = *++cursor;
 if (yych <= '`') {
  if (yych <= 'D') {
   if (yych == 'A') goto yy127;
   goto yy57;
  } else {
   if (yych <= 'E') goto yy1049;
   if (yych == 'U') goto yy126;
   goto yy57;
  }
 } else {
  if (yych <= 'e') {
   if (yych <= 'a') goto yy127;
   if (yych <= 'd') goto yy57;
   goto yy1049;
  } else {
   if (yych <= 's') goto yy57;
   if (yych <= 't') goto yy729;
   if (yych <= 'u') goto yy126;
   goto yy57;
  }
 }
yy465:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych <= 'H') {
   if (yych == 'A') goto yy592;
   goto yy57;
  } else {
   if (yych <= 'I') goto yy118;
   if (yych <= 'N') goto yy57;
   goto yy117;
  }
 } else {
  if (yych <= 'h') {
   if (yych == 'a') goto yy592;
   goto yy57;
  } else {
   if (yych <= 'i') goto yy118;
   if (yych == 'o') goto yy117;
   goto yy57;
  }
 }
yy466:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych == 'A') goto yy114;
  if (yych <= 'D') goto yy57;
  goto yy579;
 } else {
  if (yych <= 'a') {
   if (yych <= '`') goto yy57;
   goto yy114;
  } else {
   if (yych == 'e') goto yy579;
   goto yy57;
  }
 }
yy467:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= 'N') {
   if (yych == 'E') goto yy595;
   goto yy57;
  } else {
   if (yych <= 'O') goto yy99;
   if (yych <= 'Q') goto yy57;
   goto yy98;
  }
 } else {
  if (yych <= 'n') {
   if (yych == 'e') goto yy595;
   goto yy57;
  } else {
   if (yych <= 'o') goto yy99;
   if (yych == 'r') goto yy98;
   goto yy57;
  }
 }
yy468:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'H') goto yy70;
  if (yych <= 'T') goto yy57;
  goto yy71;
 } else {
  if (yych <= 'h') {
   if (yych <= 'g') goto yy57;
   goto yy1048;
  } else {
   if (yych == 'u') goto yy71;
   goto yy57;
  }
 }
yy469:
 ;
 yych = *++cursor;
 if (yych == '-') goto yy742;
 if (yych <= '/') goto yy61;
 if (yych <= '9') goto yy741;
 goto yy61;
yy470:
 ;
 yych = *++cursor;
 if (yych <= 'c') {
  if (yych == 'O') goto yy530;
  goto yy57;
 } else {
  if (yych <= 'd') goto yy729;
  if (yych == 'o') goto yy530;
  goto yy57;
 }
yy471:
 ;
 yych = *++cursor;
 if (yych == 'd') goto yy729;
 goto yy57;
yy472:
 ;
 yych = *++cursor;
 ;
 switch (yych) {
 case '0':
 case '1':
 case '2': goto yy666;
 case '3': goto yy668;
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy669;
 case 'A':
 case 'a': goto yy673;
 case 'D':
 case 'd': goto yy677;
 case 'F':
 case 'f': goto yy671;
 case 'J':
 case 'j': goto yy670;
 case 'M':
 case 'm': goto yy672;
 case 'N':
 case 'n': goto yy676;
 case 'O':
 case 'o': goto yy675;
 case 'S':
 case 's': goto yy674;
 default: goto yy57;
 }
yy473:
 ;
 yych = *++cursor;
 ;
 switch (yych) {
 case '0': goto yy616;
 case '1': goto yy617;
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy618;
 case 'A':
 case 'a': goto yy622;
 case 'D':
 case 'd': goto yy626;
 case 'F':
 case 'f': goto yy620;
 case 'J':
 case 'j': goto yy619;
 case 'M':
 case 'm': goto yy621;
 case 'N':
 case 'n': goto yy625;
 case 'O':
 case 'o': goto yy624;
 case 'S':
 case 's': goto yy623;
 default: goto yy578;
 }
yy474:
 ;
 yych = *++cursor;
 if (yych <= '1') {
  if (yych <= '/') goto yy578;
  if (yych <= '0') goto yy568;
  goto yy569;
 } else {
  if (yych <= '5') goto yy570;
  if (yych <= '9') goto yy571;
  goto yy578;
 }
yy475:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '.') goto yy532;
  }
 } else {
  if (yych <= 'U') {
   if (yych <= '9') goto yy534;
   if (yych == 'I') goto yy567;
  } else {
   if (yych == 'W') goto yy476;
   if (yych <= 'X') goto yy540;
  }
 }
yy476:
 ;
# 1426 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  timelib_skip_day_suffix((char **) &ptr);
  s->time->m = timelib_get_month((char **) &ptr);
  free(str);
  return 269;
 }
# 9649 "ext/date/lib/parse_date.c"
yy477:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy476;
   goto yy532;
  } else {
   if (yych == ' ') goto yy532;
   goto yy476;
  }
 } else {
  if (yych <= '9') {
   if (yych <= '.') goto yy532;
   if (yych <= '/') goto yy476;
   goto yy534;
  } else {
   if (yych == 'I') goto yy565;
   goto yy476;
  }
 }
yy478:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy476;
   goto yy532;
  } else {
   if (yych == ' ') goto yy532;
   goto yy476;
  }
 } else {
  if (yych <= '9') {
   if (yych <= '.') goto yy532;
   if (yych <= '/') goto yy476;
   goto yy534;
  } else {
   if (yych == 'I') goto yy564;
   goto yy476;
  }
 }
yy479:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'A') goto yy557;
  if (yych <= 'T') goto yy57;
  goto yy556;
 } else {
  if (yych <= 'a') {
   if (yych <= '`') goto yy57;
   goto yy557;
  } else {
   if (yych == 'u') goto yy556;
   goto yy57;
  }
 }
yy480:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= 'L') {
   if (yych == '.') goto yy485;
   goto yy57;
  } else {
   if (yych <= 'M') goto yy486;
   if (yych == 'P') goto yy550;
   goto yy57;
  }
 } else {
  if (yych <= 'o') {
   if (yych <= 'U') goto yy549;
   if (yych == 'm') goto yy486;
   goto yy57;
  } else {
   if (yych <= 'p') goto yy550;
   if (yych == 'u') goto yy549;
   goto yy57;
  }
 }
yy481:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy544;
 if (yych == 'c') goto yy544;
 goto yy57;
yy482:
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy530;
 if (yych == 'o') goto yy530;
 goto yy57;
yy483:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy490;
 if (yych <= '9') goto yy492;
 goto yy57;
yy484:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych != '.') goto yy57;
 } else {
  if (yych <= 'M') goto yy486;
  if (yych == 'm') goto yy486;
  goto yy57;
 }
yy485:
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy486;
 if (yych != 'm') goto yy57;
yy486:
 ;
 yych = *++cursor;
 if (yych <= 0x1F) {
  if (yych <= 0x00) goto yy488;
  if (yych == '\t') goto yy488;
  goto yy57;
 } else {
  if (yych <= ' ') goto yy488;
  if (yych != '.') goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych <= '\t') {
  if (yych <= 0x00) goto yy488;
  if (yych <= 0x08) goto yy57;
 } else {
  if (yych != ' ') goto yy57;
 }
yy488:
 ;
 ++cursor;
 ;
# 1144 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_time) { add_error(s, "Double time specification"); free(str); return 999; } else { s->time->have_time = 1; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; } };
  s->time->h = timelib_get_nr((char **) &ptr, 2);
  if (*ptr == ':' || *ptr == '.') {
   s->time->i = timelib_get_nr((char **) &ptr, 2);
   if (*ptr == ':' || *ptr == '.') {
    s->time->s = timelib_get_nr((char **) &ptr, 2);
   }
  }
  s->time->h += timelib_meridian((char **) &ptr, s->time->h);
  free(str);
  return 261;
 }
# 9806 "ext/date/lib/parse_date.c"
yy490:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy493;
 } else {
  if (yych <= '9') goto yy507;
  if (yych <= ':') goto yy493;
 }
yy491:
 ;
# 1181 "ext/date/lib/parse_date.re"
 {
  int tz_not_found;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_time) { add_error(s, "Double time specification"); free(str); return 999; } else { s->time->have_time = 1; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; } };
  s->time->h = timelib_get_nr((char **) &ptr, 2);
  s->time->i = timelib_get_nr((char **) &ptr, 2);
  if (*ptr == ':' || *ptr == '.') {
   s->time->s = timelib_get_nr((char **) &ptr, 2);

   if (*ptr == '.') {
    s->time->f = timelib_get_frac_nr((char **) &ptr, 8);
   }
  }

  if (*ptr != '\0') {
   s->time->z = timelib_get_zone((char **) &ptr, &s->time->dst, s->time, &tz_not_found, s->tzdb, tz_get_wrapper);
   if (tz_not_found) {
    add_error(s, "The timezone could not be found in the database");
   }
  }
  free(str);
  return 278;
 }
# 9844 "ext/date/lib/parse_date.c"
yy492:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy493;
 if (yych != ':') goto yy491;
yy493:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy494;
 if (yych <= '6') goto yy495;
 if (yych <= '9') goto yy496;
 goto yy57;
yy494:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy497;
 if (yych <= '/') goto yy491;
 if (yych <= '9') goto yy500;
 goto yy491;
yy495:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy497;
 if (yych == '0') goto yy500;
 goto yy491;
yy496:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych != '.') goto yy491;
yy497:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
yy498:
 ;
 ++cursor;
 if (s->lim <= cursor) return 257;;
 yych = *cursor;
 ;
 if (yych <= '/') goto yy491;
 if (yych <= '9') goto yy498;
 goto yy491;
yy500:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= 0x1F) {
   if (yych != '\t') goto yy491;
  } else {
   if (yych <= ' ') goto yy501;
   if (yych == '.') goto yy497;
   goto yy491;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'A') goto yy503;
   if (yych == 'P') goto yy503;
   goto yy491;
  } else {
   if (yych <= 'a') goto yy503;
   if (yych == 'p') goto yy503;
   goto yy491;
  }
 }
yy501:
 ;
 ++cursor;
 if ((s->lim - cursor) < 5) return 257;;
 yych = *cursor;
 ;
 if (yych <= 'A') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy501;
   goto yy57;
  } else {
   if (yych <= ' ') goto yy501;
   if (yych <= '@') goto yy57;
  }
 } else {
  if (yych <= '`') {
   if (yych != 'P') goto yy57;
  } else {
   if (yych <= 'a') goto yy503;
   if (yych != 'p') goto yy57;
  }
 }
yy503:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych != '.') goto yy57;
 } else {
  if (yych <= 'M') goto yy505;
  if (yych == 'm') goto yy505;
  goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy505;
 if (yych != 'm') goto yy57;
yy505:
 ;
 yych = *++cursor;
 if (yych <= 0x1F) {
  if (yych <= 0x00) goto yy488;
  if (yych == '\t') goto yy488;
  goto yy57;
 } else {
  if (yych <= ' ') goto yy488;
  if (yych != '.') goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych <= '\t') {
  if (yych <= 0x00) goto yy488;
  if (yych <= 0x08) goto yy57;
  goto yy488;
 } else {
  if (yych == ' ') goto yy488;
  goto yy57;
 }
yy507:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= ':') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy508;
   if (yych <= 0x1F) goto yy491;
  } else {
   if (yych == '.') goto yy493;
   if (yych <= '9') goto yy491;
   goto yy511;
  }
 } else {
  if (yych <= 'P') {
   if (yych == 'A') goto yy510;
   if (yych <= 'O') goto yy491;
   goto yy510;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy491;
    goto yy510;
   } else {
    if (yych == 'p') goto yy510;
    goto yy491;
   }
  }
 }
yy508:
 ;
 ++cursor;
 if ((s->lim - cursor) < 5) return 257;;
 yych = *cursor;
 ;
 if (yych <= 'A') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy508;
   goto yy57;
  } else {
   if (yych <= ' ') goto yy508;
   if (yych <= '@') goto yy57;
  }
 } else {
  if (yych <= '`') {
   if (yych != 'P') goto yy57;
  } else {
   if (yych <= 'a') goto yy510;
   if (yych != 'p') goto yy57;
  }
 }
yy510:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych == '.') goto yy527;
  goto yy57;
 } else {
  if (yych <= 'M') goto yy528;
  if (yych == 'm') goto yy528;
  goto yy57;
 }
yy511:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy512;
 if (yych <= '6') goto yy513;
 if (yych <= '9') goto yy496;
 goto yy57;
yy512:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy497;
 if (yych <= '/') goto yy491;
 if (yych <= '9') goto yy514;
 goto yy491;
yy513:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy497;
 if (yych != '0') goto yy491;
yy514:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= ':') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy501;
   if (yych <= 0x1F) goto yy491;
   goto yy501;
  } else {
   if (yych == '.') goto yy515;
   if (yych <= '9') goto yy491;
   goto yy516;
  }
 } else {
  if (yych <= 'P') {
   if (yych == 'A') goto yy503;
   if (yych <= 'O') goto yy491;
   goto yy503;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy491;
    goto yy503;
   } else {
    if (yych == 'p') goto yy503;
    goto yy491;
   }
  }
 }
yy515:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy525;
 goto yy57;
yy516:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
yy517:
 ;
 ++cursor;
 if ((s->lim - cursor) < 5) return 257;;
 yych = *cursor;
 ;
 if (yych <= 'O') {
  if (yych <= '9') {
   if (yych <= '/') goto yy57;
   goto yy517;
  } else {
   if (yych != 'A') goto yy57;
  }
 } else {
  if (yych <= 'a') {
   if (yych <= 'P') goto yy519;
   if (yych <= '`') goto yy57;
  } else {
   if (yych != 'p') goto yy57;
  }
 }
yy519:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych != '.') goto yy57;
 } else {
  if (yych <= 'M') goto yy521;
  if (yych == 'm') goto yy521;
  goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy521;
 if (yych != 'm') goto yy57;
yy521:
 ;
 yych = *++cursor;
 if (yych <= 0x1F) {
  if (yych <= 0x00) goto yy523;
  if (yych == '\t') goto yy523;
  goto yy57;
 } else {
  if (yych <= ' ') goto yy523;
  if (yych != '.') goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych <= '\t') {
  if (yych <= 0x00) goto yy523;
  if (yych <= 0x08) goto yy57;
 } else {
  if (yych != ' ') goto yy57;
 }
yy523:
 ;
 ++cursor;
 ;
# 1161 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_time) { add_error(s, "Double time specification"); free(str); return 999; } else { s->time->have_time = 1; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; } };
  s->time->h = timelib_get_nr((char **) &ptr, 2);
  s->time->i = timelib_get_nr((char **) &ptr, 2);
  if (*ptr == ':' || *ptr == '.') {
   s->time->s = timelib_get_nr((char **) &ptr, 2);

   if (*ptr == ':' || *ptr == '.') {
    s->time->f = timelib_get_frac_nr((char **) &ptr, 8);
   }
  }
  timelib_eat_spaces((char **) &ptr);
  s->time->h += timelib_meridian((char **) &ptr, s->time->h);
  free(str);
  return 278;
 }
# 10173 "ext/date/lib/parse_date.c"
yy525:
 ;
 yyaccept = 11;
 s->ptr = ++cursor;
 if ((s->lim - cursor) < 5) return 257;;
 yych = *cursor;
 ;
 if (yych <= 'O') {
  if (yych <= '9') {
   if (yych <= '/') goto yy491;
   goto yy525;
  } else {
   if (yych == 'A') goto yy519;
   goto yy491;
  }
 } else {
  if (yych <= 'a') {
   if (yych <= 'P') goto yy519;
   if (yych <= '`') goto yy491;
   goto yy519;
  } else {
   if (yych == 'p') goto yy519;
   goto yy491;
  }
 }
yy527:
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy528;
 if (yych != 'm') goto yy57;
yy528:
 ;
 yych = *++cursor;
 if (yych <= 0x1F) {
  if (yych <= 0x00) goto yy488;
  if (yych == '\t') goto yy488;
  goto yy57;
 } else {
  if (yych <= ' ') goto yy488;
  if (yych != '.') goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych <= '\t') {
  if (yych <= 0x00) goto yy488;
  if (yych <= 0x08) goto yy57;
  goto yy488;
 } else {
  if (yych == ' ') goto yy488;
  goto yy57;
 }
yy530:
 ;
 yych = *++cursor;
 if (yych == 'V') goto yy531;
 if (yych != 'v') goto yy57;
yy531:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych != '\t') goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
  }
 } else {
  if (yych <= 'D') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'E') goto yy536;
   if (yych == 'e') goto yy536;
   goto yy476;
  }
 }
yy532:
 ;
 ++cursor;
 if ((s->lim - cursor) < 4) return 257;;
 yych = *cursor;
yy533:
 ;
 if (yych <= ' ') {
  if (yych == '\t') goto yy532;
  if (yych <= 0x1F) goto yy57;
  goto yy532;
 } else {
  if (yych <= '.') {
   if (yych <= ',') goto yy57;
   goto yy532;
  } else {
   if (yych <= '/') goto yy57;
   if (yych >= ':') goto yy57;
  }
 }
yy534:
 ;
 ++cursor;
 if ((yych = *cursor) <= '/') goto yy535;
 if (yych <= '9') goto yy541;
yy535:
 ;
# 1343 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  timelib_skip_day_suffix((char **) &ptr);
  s->time->m = timelib_get_month((char **) &ptr);
  s->time->y = timelib_get_nr_ex((char **) &ptr, 4, &length);
  { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  free(str);
  return 268;
 }
# 10293 "ext/date/lib/parse_date.c"
yy536:
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy537;
 if (yych != 'm') goto yy57;
yy537:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy538;
 if (yych != 'b') goto yy57;
yy538:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy539;
 if (yych != 'e') goto yy57;
yy539:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy540;
 if (yych != 'r') goto yy57;
yy540:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= ' ') {
  if (yych == '\t') goto yy532;
  if (yych <= 0x1F) goto yy476;
  goto yy532;
 } else {
  if (yych <= '.') {
   if (yych <= ',') goto yy476;
   goto yy532;
  } else {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  }
 }
yy541:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy535;
 if (yych >= ':') goto yy535;
yy542:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy535;
 if (yych >= ':') goto yy535;
 ;
 yych = *++cursor;
 goto yy535;
yy544:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy545;
 if (yych != 't') goto yy57;
yy545:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   goto yy532;
  }
 } else {
  if (yych <= 'N') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'O') goto yy546;
   if (yych != 'o') goto yy476;
  }
 }
yy546:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy547;
 if (yych != 'b') goto yy57;
yy547:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy548;
 if (yych != 'e') goto yy57;
yy548:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy540;
 if (yych == 'r') goto yy540;
 goto yy57;
yy549:
 ;
 yych = *++cursor;
 if (yych == 'G') goto yy553;
 if (yych == 'g') goto yy553;
 goto yy57;
yy550:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy551;
 if (yych != 'r') goto yy57;
yy551:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   goto yy532;
  }
 } else {
  if (yych <= 'H') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'I') goto yy552;
   if (yych != 'i') goto yy476;
  }
 }
yy552:
 ;
 yych = *++cursor;
 if (yych == 'L') goto yy540;
 if (yych == 'l') goto yy540;
 goto yy57;
yy553:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   goto yy532;
  }
 } else {
  if (yych <= 'T') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'U') goto yy554;
   if (yych != 'u') goto yy476;
  }
 }
yy554:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy555;
 if (yych != 's') goto yy57;
yy555:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy540;
 if (yych == 't') goto yy540;
 goto yy57;
yy556:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych == 'L') goto yy563;
  if (yych <= 'M') goto yy57;
  goto yy562;
 } else {
  if (yych <= 'l') {
   if (yych <= 'k') goto yy57;
   goto yy563;
  } else {
   if (yych == 'n') goto yy562;
   goto yy57;
  }
 }
yy557:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy558;
 if (yych != 'n') goto yy57;
yy558:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   goto yy532;
  }
 } else {
  if (yych <= 'T') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'U') goto yy559;
   if (yych != 'u') goto yy476;
  }
 }
yy559:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy560;
 if (yych != 'a') goto yy57;
yy560:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy561;
 if (yych != 'r') goto yy57;
yy561:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy540;
 if (yych == 'y') goto yy540;
 goto yy57;
yy562:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   goto yy532;
  }
 } else {
  if (yych <= 'D') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'E') goto yy540;
   if (yych == 'e') goto yy540;
   goto yy476;
  }
 }
yy563:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   goto yy532;
  }
 } else {
  if (yych <= 'X') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'Y') goto yy540;
   if (yych == 'y') goto yy540;
   goto yy476;
  }
 }
yy564:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy476;
   goto yy532;
  } else {
   if (yych == ' ') goto yy532;
   goto yy476;
  }
 } else {
  if (yych <= '9') {
   if (yych <= '.') goto yy532;
   if (yych <= '/') goto yy476;
   goto yy534;
  } else {
   if (yych == 'I') goto yy540;
   goto yy476;
  }
 }
yy565:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy476;
   goto yy532;
  } else {
   if (yych == ' ') goto yy532;
   goto yy476;
  }
 } else {
  if (yych <= '9') {
   if (yych <= '.') goto yy532;
   if (yych <= '/') goto yy476;
   goto yy534;
  } else {
   if (yych != 'I') goto yy476;
  }
 }
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy476;
   goto yy532;
  } else {
   if (yych == ' ') goto yy532;
   goto yy476;
  }
 } else {
  if (yych <= '9') {
   if (yych <= '.') goto yy532;
   if (yych <= '/') goto yy476;
   goto yy534;
  } else {
   if (yych == 'I') goto yy540;
   goto yy476;
  }
 }
yy567:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy476;
   goto yy532;
  } else {
   if (yych == ' ') goto yy532;
   goto yy476;
  }
 } else {
  if (yych <= '9') {
   if (yych <= '.') goto yy532;
   if (yych <= '/') goto yy476;
   goto yy534;
  } else {
   if (yych == 'I') goto yy540;
   goto yy476;
  }
 }
yy568:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ',') goto yy491;
  if (yych <= '-') goto yy602;
  goto yy601;
 } else {
  if (yych <= '/') goto yy491;
  if (yych <= '9') goto yy615;
  if (yych <= ':') goto yy493;
  goto yy491;
 }
yy569:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') goto yy491;
  if (yych <= '-') goto yy602;
  if (yych <= '.') goto yy601;
  goto yy491;
 } else {
  if (yych <= '2') goto yy615;
  if (yych <= '9') goto yy614;
  if (yych <= ':') goto yy493;
  goto yy491;
 }
yy570:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ',') goto yy491;
  if (yych <= '-') goto yy602;
  goto yy601;
 } else {
  if (yych <= '/') goto yy491;
  if (yych <= '9') goto yy614;
  if (yych <= ':') goto yy493;
  goto yy491;
 }
yy571:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ',') goto yy491;
  if (yych <= '-') goto yy602;
  goto yy601;
 } else {
  if (yych == ':') goto yy493;
  goto yy491;
 }
yy572:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy595;
 if (yych == 'e') goto yy595;
 goto yy57;
yy573:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy592;
 if (yych == 'a') goto yy592;
 goto yy57;
yy574:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'P') goto yy550;
  if (yych <= 'T') goto yy57;
  goto yy549;
 } else {
  if (yych <= 'p') {
   if (yych <= 'o') goto yy57;
   goto yy550;
  } else {
   if (yych == 'u') goto yy549;
   goto yy57;
  }
 }
yy575:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy585;
 if (yych == 'e') goto yy585;
 goto yy57;
yy576:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy579;
 if (yych == 'e') goto yy579;
 goto yy57;
yy577:
 ;
 ++cursor;
 if ((s->lim - cursor) < 13) return 257;;
 yych = *cursor;
yy578:
 ;
 ;
 switch (yych) {
 case '\t':
 case ' ':
 case '-':
 case '.': goto yy577;
 case 'A':
 case 'a': goto yy574;
 case 'D':
 case 'd': goto yy576;
 case 'F':
 case 'f': goto yy572;
 case 'I': goto yy475;
 case 'J':
 case 'j': goto yy479;
 case 'M':
 case 'm': goto yy573;
 case 'N':
 case 'n': goto yy482;
 case 'O':
 case 'o': goto yy481;
 case 'S':
 case 's': goto yy575;
 case 'V': goto yy477;
 case 'X': goto yy478;
 default: goto yy57;
 }
yy579:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy580;
 if (yych != 'c') goto yy57;
yy580:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   goto yy532;
  }
 } else {
  if (yych <= 'D') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'E') goto yy581;
   if (yych != 'e') goto yy476;
  }
 }
yy581:
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy582;
 if (yych != 'm') goto yy57;
yy582:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy583;
 if (yych != 'b') goto yy57;
yy583:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy584;
 if (yych != 'e') goto yy57;
yy584:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy540;
 if (yych == 'r') goto yy540;
 goto yy57;
yy585:
 ;
 yych = *++cursor;
 if (yych == 'P') goto yy586;
 if (yych != 'p') goto yy57;
yy586:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   goto yy532;
  }
 } else {
  if (yych <= 'S') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'T') goto yy587;
   if (yych != 't') goto yy476;
  }
 }
yy587:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   goto yy532;
  }
 } else {
  if (yych <= 'D') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'E') goto yy588;
   if (yych != 'e') goto yy476;
  }
 }
yy588:
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy589;
 if (yych != 'm') goto yy57;
yy589:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy590;
 if (yych != 'b') goto yy57;
yy590:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy591;
 if (yych != 'e') goto yy57;
yy591:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy540;
 if (yych == 'r') goto yy540;
 goto yy57;
yy592:
 ;
 yych = *++cursor;
 if (yych <= 'Y') {
  if (yych == 'R') goto yy593;
  if (yych <= 'X') goto yy57;
  goto yy540;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy57;
  } else {
   if (yych == 'y') goto yy540;
   goto yy57;
  }
 }
yy593:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   goto yy532;
  }
 } else {
  if (yych <= 'B') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'C') goto yy594;
   if (yych != 'c') goto yy476;
  }
 }
yy594:
 ;
 yych = *++cursor;
 if (yych == 'H') goto yy540;
 if (yych == 'h') goto yy540;
 goto yy57;
yy595:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy596;
 if (yych != 'b') goto yy57;
yy596:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   goto yy532;
  }
 } else {
  if (yych <= 'Q') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'R') goto yy597;
   if (yych != 'r') goto yy476;
  }
 }
yy597:
 ;
 yych = *++cursor;
 if (yych == 'U') goto yy598;
 if (yych != 'u') goto yy57;
yy598:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy599;
 if (yych != 'a') goto yy57;
yy599:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy600;
 if (yych != 'r') goto yy57;
yy600:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy540;
 if (yych == 'y') goto yy540;
 goto yy57;
yy601:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy608;
 if (yych <= '6') goto yy609;
 if (yych <= '9') goto yy610;
 goto yy57;
yy602:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
yy604:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
yy605:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 ++cursor;
 ;
# 1358 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  s->time->m = timelib_get_nr((char **) &ptr, 2);
  s->time->y = timelib_get_nr((char **) &ptr, 4);
  free(str);
  return 277;
 }
# 11041 "ext/date/lib/parse_date.c"
yy608:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy497;
 if (yych <= '/') goto yy491;
 if (yych <= '9') goto yy613;
 goto yy491;
yy609:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy497;
  goto yy491;
 } else {
  if (yych <= '0') goto yy613;
  if (yych <= '9') goto yy611;
  goto yy491;
 }
yy610:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy497;
 if (yych <= '/') goto yy491;
 if (yych >= ':') goto yy491;
yy611:
 ;
 yyaccept = 12;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') goto yy612;
 if (yych <= '9') goto yy605;
yy612:
 ;
# 1370 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  s->time->m = timelib_get_nr((char **) &ptr, 2);
  s->time->y = timelib_get_nr_ex((char **) &ptr, 2, &length);
  { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  free(str);
  return 277;
 }
# 11090 "ext/date/lib/parse_date.c"
yy613:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy501;
   if (yych <= 0x1F) goto yy491;
   goto yy501;
  } else {
   if (yych == '.') goto yy497;
   if (yych <= '/') goto yy491;
   goto yy605;
  }
 } else {
  if (yych <= 'P') {
   if (yych == 'A') goto yy503;
   if (yych <= 'O') goto yy491;
   goto yy503;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy491;
    goto yy503;
   } else {
    if (yych == 'p') goto yy503;
    goto yy491;
   }
  }
 }
yy614:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= ':') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy508;
   if (yych <= 0x1F) goto yy491;
   goto yy508;
  } else {
   if (yych == '.') goto yy493;
   if (yych <= '9') goto yy491;
   goto yy493;
  }
 } else {
  if (yych <= 'P') {
   if (yych == 'A') goto yy510;
   if (yych <= 'O') goto yy491;
   goto yy510;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy491;
    goto yy510;
   } else {
    if (yych == 'p') goto yy510;
    goto yy491;
   }
  }
 }
yy615:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= ':') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy508;
   if (yych <= 0x1F) goto yy491;
   goto yy508;
  } else {
   if (yych <= '-') {
    if (yych <= ',') goto yy491;
    goto yy602;
   } else {
    if (yych <= '.') goto yy601;
    if (yych <= '9') goto yy491;
    goto yy493;
   }
  }
 } else {
  if (yych <= 'P') {
   if (yych == 'A') goto yy510;
   if (yych <= 'O') goto yy491;
   goto yy510;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy491;
    goto yy510;
   } else {
    if (yych == 'p') goto yy510;
    goto yy491;
   }
  }
 }
yy616:
 ;
 yych = *++cursor;
 if (yych <= '.') {
  if (yych <= ',') goto yy57;
  if (yych <= '-') goto yy655;
  goto yy602;
 } else {
  if (yych <= '/') goto yy57;
  if (yych <= '9') goto yy618;
  goto yy57;
 }
yy617:
 ;
 yych = *++cursor;
 if (yych <= '.') {
  if (yych <= ',') goto yy57;
  if (yych <= '-') goto yy655;
  goto yy602;
 } else {
  if (yych <= '/') goto yy57;
  if (yych >= '3') goto yy57;
 }
yy618:
 ;
 yych = *++cursor;
 if (yych <= ',') goto yy57;
 if (yych <= '-') goto yy655;
 if (yych <= '.') goto yy602;
 goto yy57;
yy619:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'A') goto yy651;
  if (yych <= 'T') goto yy57;
  goto yy650;
 } else {
  if (yych <= 'a') {
   if (yych <= '`') goto yy57;
   goto yy651;
  } else {
   if (yych == 'u') goto yy650;
   goto yy57;
  }
 }
yy620:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy648;
 if (yych == 'e') goto yy648;
 goto yy57;
yy621:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy645;
 if (yych == 'a') goto yy645;
 goto yy57;
yy622:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'P') goto yy642;
  if (yych <= 'T') goto yy57;
  goto yy641;
 } else {
  if (yych <= 'p') {
   if (yych <= 'o') goto yy57;
   goto yy642;
  } else {
   if (yych == 'u') goto yy641;
   goto yy57;
  }
 }
yy623:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy638;
 if (yych == 'e') goto yy638;
 goto yy57;
yy624:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy636;
 if (yych == 'c') goto yy636;
 goto yy57;
yy625:
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy634;
 if (yych == 'o') goto yy634;
 goto yy57;
yy626:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy627;
 if (yych != 'e') goto yy57;
yy627:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy628;
 if (yych != 'c') goto yy57;
yy628:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych >= '.') goto yy532;
  }
 } else {
  if (yych <= 'D') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'E') goto yy581;
   if (yych == 'e') goto yy581;
   goto yy476;
  }
 }
yy629:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy533;
 if (yych <= '0') goto yy630;
 if (yych <= '2') goto yy631;
 if (yych <= '3') goto yy632;
 goto yy533;
yy630:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy535;
 if (yych <= '9') goto yy633;
 goto yy535;
yy631:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy535;
 if (yych <= '9') goto yy633;
 goto yy535;
yy632:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy535;
 if (yych <= '1') goto yy633;
 if (yych <= '9') goto yy541;
 goto yy535;
yy633:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy535;
 if (yych <= '9') goto yy542;
 goto yy535;
yy634:
 ;
 yych = *++cursor;
 if (yych == 'V') goto yy635;
 if (yych != 'v') goto yy57;
yy635:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '-') goto yy629;
   goto yy532;
  }
 } else {
  if (yych <= 'D') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'E') goto yy536;
   if (yych == 'e') goto yy536;
   goto yy476;
  }
 }
yy636:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy637;
 if (yych != 't') goto yy57;
yy637:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '-') goto yy629;
   goto yy532;
  }
 } else {
  if (yych <= 'N') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'O') goto yy546;
   if (yych == 'o') goto yy546;
   goto yy476;
  }
 }
yy638:
 ;
 yych = *++cursor;
 if (yych == 'P') goto yy639;
 if (yych != 'p') goto yy57;
yy639:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '-') goto yy629;
   goto yy532;
  }
 } else {
  if (yych <= 'S') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'T') goto yy640;
   if (yych != 't') goto yy476;
  }
 }
yy640:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '-') goto yy629;
   goto yy532;
  }
 } else {
  if (yych <= 'D') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'E') goto yy588;
   if (yych == 'e') goto yy588;
   goto yy476;
  }
 }
yy641:
 ;
 yych = *++cursor;
 if (yych == 'G') goto yy644;
 if (yych == 'g') goto yy644;
 goto yy57;
yy642:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy643;
 if (yych != 'r') goto yy57;
yy643:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '-') goto yy629;
   goto yy532;
  }
 } else {
  if (yych <= 'H') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'I') goto yy552;
   if (yych == 'i') goto yy552;
   goto yy476;
  }
 }
yy644:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '-') goto yy629;
   goto yy532;
  }
 } else {
  if (yych <= 'T') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'U') goto yy554;
   if (yych == 'u') goto yy554;
   goto yy476;
  }
 }
yy645:
 ;
 yych = *++cursor;
 if (yych <= 'Y') {
  if (yych == 'R') goto yy646;
  if (yych <= 'X') goto yy57;
  goto yy647;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy57;
  } else {
   if (yych == 'y') goto yy647;
   goto yy57;
  }
 }
yy646:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '-') goto yy629;
   goto yy532;
  }
 } else {
  if (yych <= 'B') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'C') goto yy594;
   if (yych == 'c') goto yy594;
   goto yy476;
  }
 }
yy647:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= ',') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy476;
   goto yy532;
  } else {
   if (yych == ' ') goto yy532;
   goto yy476;
  }
 } else {
  if (yych <= '.') {
   if (yych <= '-') goto yy629;
   goto yy532;
  } else {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  }
 }
yy648:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy649;
 if (yych != 'b') goto yy57;
yy649:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '-') goto yy629;
   goto yy532;
  }
 } else {
  if (yych <= 'Q') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'R') goto yy597;
   if (yych == 'r') goto yy597;
   goto yy476;
  }
 }
yy650:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych == 'L') goto yy654;
  if (yych <= 'M') goto yy57;
  goto yy653;
 } else {
  if (yych <= 'l') {
   if (yych <= 'k') goto yy57;
   goto yy654;
  } else {
   if (yych == 'n') goto yy653;
   goto yy57;
  }
 }
yy651:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy652;
 if (yych != 'n') goto yy57;
yy652:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '-') goto yy629;
   goto yy532;
  }
 } else {
  if (yych <= 'T') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'U') goto yy559;
   if (yych == 'u') goto yy559;
   goto yy476;
  }
 }
yy653:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '-') goto yy629;
   goto yy532;
  }
 } else {
  if (yych <= 'D') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'E') goto yy540;
   if (yych == 'e') goto yy540;
   goto yy476;
  }
 }
yy654:
 ;
 yyaccept = 10;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy532;
   goto yy476;
  } else {
   if (yych <= ' ') goto yy532;
   if (yych <= ',') goto yy476;
   if (yych <= '-') goto yy629;
   goto yy532;
  }
 } else {
  if (yych <= 'X') {
   if (yych <= '/') goto yy476;
   if (yych <= '9') goto yy534;
   goto yy476;
  } else {
   if (yych <= 'Y') goto yy540;
   if (yych == 'y') goto yy540;
   goto yy476;
  }
 }
yy655:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '2') goto yy656;
 if (yych <= '3') goto yy658;
 if (yych <= '9') goto yy659;
 goto yy57;
yy656:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy657;
  if (yych <= '9') goto yy665;
  if (yych >= 'n') goto yy661;
 } else {
  if (yych <= 'r') {
   if (yych >= 'r') goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
  }
 }
yy657:
 ;
# 1329 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->y = timelib_get_nr_ex((char **) &ptr, 4, &length);
  s->time->m = timelib_get_nr((char **) &ptr, 2);
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  free(str);
  return 267;
 }
# 11744 "ext/date/lib/parse_date.c"
yy658:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '1') {
   if (yych <= '/') goto yy657;
   goto yy665;
  } else {
   if (yych <= '9') goto yy604;
   if (yych <= 'm') goto yy657;
   goto yy661;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy657;
  }
 }
yy659:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy657;
  if (yych <= '9') goto yy604;
  if (yych <= 'm') goto yy657;
  goto yy661;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy657;
  }
 }
yy660:
 ;
 yych = *++cursor;
 if (yych == 't') goto yy664;
 goto yy57;
yy661:
 ;
 yych = *++cursor;
 if (yych == 'd') goto yy664;
 goto yy57;
yy662:
 ;
 yych = *++cursor;
 if (yych == 'd') goto yy664;
 goto yy57;
yy663:
 ;
 yych = *++cursor;
 if (yych != 'h') goto yy57;
yy664:
 ;
 yych = *++cursor;
 goto yy657;
yy665:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy657;
  if (yych <= '9') goto yy605;
  if (yych <= 'm') goto yy657;
  goto yy661;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy657;
  }
 }
yy666:
 ;
 yyaccept = 14;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') {
   if (yych >= '/') goto yy723;
  } else {
   if (yych <= '9') goto yy669;
   if (yych >= 'n') goto yy720;
  }
 } else {
  if (yych <= 'r') {
   if (yych >= 'r') goto yy721;
  } else {
   if (yych <= 's') goto yy719;
   if (yych <= 't') goto yy722;
  }
 }
yy667:
 ;
# 1273 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->m = timelib_get_nr((char **) &ptr, 2);
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  if (*ptr == '/') {
   s->time->y = timelib_get_nr_ex((char **) &ptr, 4, &length);
   { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  }
  free(str);
  return 266;
 }
# 11865 "ext/date/lib/parse_date.c"
yy668:
 ;
 yyaccept = 14;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') {
   if (yych <= '.') goto yy667;
   goto yy723;
  } else {
   if (yych <= '1') goto yy669;
   if (yych <= 'm') goto yy667;
   goto yy720;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy667;
   goto yy721;
  } else {
   if (yych <= 's') goto yy719;
   if (yych <= 't') goto yy722;
   goto yy667;
  }
 }
yy669:
 ;
 yyaccept = 14;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych == '/') goto yy723;
  if (yych <= 'm') goto yy667;
  goto yy720;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy667;
   goto yy721;
  } else {
   if (yych <= 's') goto yy719;
   if (yych <= 't') goto yy722;
   goto yy667;
  }
 }
yy670:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'A') goto yy718;
  if (yych <= 'T') goto yy57;
  goto yy717;
 } else {
  if (yych <= 'a') {
   if (yych <= '`') goto yy57;
   goto yy718;
  } else {
   if (yych == 'u') goto yy717;
   goto yy57;
  }
 }
yy671:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy716;
 if (yych == 'e') goto yy716;
 goto yy57;
yy672:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy715;
 if (yych == 'a') goto yy715;
 goto yy57;
yy673:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'P') goto yy714;
  if (yych <= 'T') goto yy57;
  goto yy713;
 } else {
  if (yych <= 'p') {
   if (yych <= 'o') goto yy57;
   goto yy714;
  } else {
   if (yych == 'u') goto yy713;
   goto yy57;
  }
 }
yy674:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy711;
 if (yych == 'e') goto yy711;
 goto yy57;
yy675:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy710;
 if (yych == 'c') goto yy710;
 goto yy57;
yy676:
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy709;
 if (yych == 'o') goto yy709;
 goto yy57;
yy677:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy678;
 if (yych != 'e') goto yy57;
yy678:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy679;
 if (yych != 'c') goto yy57;
yy679:
 ;
 yych = *++cursor;
 if (yych != '/') goto yy57;
yy680:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych != ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '1') goto yy686;
 if (yych <= '2') goto yy687;
 goto yy57;
yy686:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy688;
 goto yy57;
yy687:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '5') goto yy57;
yy688:
 ;
 yych = *++cursor;
 if (yych != ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '6') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych != ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy693;
 if (yych <= '6') goto yy694;
 goto yy57;
yy693:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy695;
 goto yy57;
yy694:
 ;
 yych = *++cursor;
 if (yych != '0') goto yy57;
yy695:
 ;
 yych = *++cursor;
 if (yych == '\t') goto yy696;
 if (yych != ' ') goto yy57;
yy696:
 ;
 ++cursor;
 if ((s->lim - cursor) < 9) return 257;;
 yych = *cursor;
 ;
 if (yych <= '*') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy57;
   goto yy696;
  } else {
   if (yych == ' ') goto yy696;
   goto yy57;
  }
 } else {
  if (yych <= '-') {
   if (yych == ',') goto yy57;
   goto yy699;
  } else {
   if (yych != 'G') goto yy57;
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy707;
 goto yy57;
yy699:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '1') goto yy700;
 if (yych <= '2') goto yy702;
 if (yych <= '9') goto yy703;
 goto yy57;
yy700:
 ;
 ++cursor;
 if ((yych = *cursor) <= '/') goto yy701;
 if (yych <= '9') goto yy703;
 if (yych <= ':') goto yy704;
yy701:
 ;
# 1556 "ext/date/lib/parse_date.re"
 {
  int tz_not_found;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_time) { add_error(s, "Double time specification"); free(str); return 999; } else { s->time->have_time = 1; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; } };
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  s->time->m = timelib_get_month((char **) &ptr);
  s->time->y = timelib_get_nr((char **) &ptr, 4);
  s->time->h = timelib_get_nr((char **) &ptr, 2);
  s->time->i = timelib_get_nr((char **) &ptr, 2);
  s->time->s = timelib_get_nr((char **) &ptr, 2);
  s->time->z = timelib_get_zone((char **) &ptr, &s->time->dst, s->time, &tz_not_found, s->tzdb, tz_get_wrapper);
  if (tz_not_found) {
   add_error(s, "The timezone could not be found in the database");
  }
  free(str);
  return 274;
 }
# 12118 "ext/date/lib/parse_date.c"
yy702:
 ;
 yych = *++cursor;
 if (yych <= '5') {
  if (yych <= '/') goto yy701;
  if (yych >= '5') goto yy705;
 } else {
  if (yych <= '9') goto yy706;
  if (yych <= ':') goto yy704;
  goto yy701;
 }
yy703:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy701;
 if (yych <= '5') goto yy705;
 if (yych <= '9') goto yy706;
 if (yych >= ';') goto yy701;
yy704:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy701;
 if (yych <= '5') goto yy705;
 if (yych <= '9') goto yy706;
 goto yy701;
yy705:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy701;
 if (yych >= ':') goto yy701;
yy706:
 ;
 yych = *++cursor;
 goto yy701;
yy707:
 ;
 yych = *++cursor;
 if (yych != 'T') goto yy57;
 ;
 yych = *++cursor;
 if (yych == '+') goto yy699;
 if (yych == '-') goto yy699;
 goto yy57;
yy709:
 ;
 yych = *++cursor;
 if (yych == 'V') goto yy679;
 if (yych == 'v') goto yy679;
 goto yy57;
yy710:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy679;
 if (yych == 't') goto yy679;
 goto yy57;
yy711:
 ;
 yych = *++cursor;
 if (yych == 'P') goto yy712;
 if (yych != 'p') goto yy57;
yy712:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych == '/') goto yy680;
  goto yy57;
 } else {
  if (yych <= 'T') goto yy679;
  if (yych == 't') goto yy679;
  goto yy57;
 }
yy713:
 ;
 yych = *++cursor;
 if (yych == 'G') goto yy679;
 if (yych == 'g') goto yy679;
 goto yy57;
yy714:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy679;
 if (yych == 'r') goto yy679;
 goto yy57;
yy715:
 ;
 yych = *++cursor;
 if (yych <= 'Y') {
  if (yych == 'R') goto yy679;
  if (yych <= 'X') goto yy57;
  goto yy679;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy57;
   goto yy679;
  } else {
   if (yych == 'y') goto yy679;
   goto yy57;
  }
 }
yy716:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy679;
 if (yych == 'b') goto yy679;
 goto yy57;
yy717:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych == 'L') goto yy679;
  if (yych <= 'M') goto yy57;
  goto yy679;
 } else {
  if (yych <= 'l') {
   if (yych <= 'k') goto yy57;
   goto yy679;
  } else {
   if (yych == 'n') goto yy679;
   goto yy57;
  }
 }
yy718:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy679;
 if (yych == 'n') goto yy679;
 goto yy57;
yy719:
 ;
 yych = *++cursor;
 if (yych == 't') goto yy728;
 goto yy57;
yy720:
 ;
 yych = *++cursor;
 if (yych == 'd') goto yy728;
 goto yy57;
yy721:
 ;
 yych = *++cursor;
 if (yych == 'd') goto yy728;
 goto yy57;
yy722:
 ;
 yych = *++cursor;
 if (yych == 'h') goto yy728;
 goto yy57;
yy723:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy667;
 if (yych >= ':') goto yy667;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy667;
 if (yych >= ':') goto yy667;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy667;
 if (yych >= ':') goto yy667;
 ;
 yych = *++cursor;
 goto yy667;
yy728:
 ;
 yyaccept = 14;
 yych = *(s->ptr = ++cursor);
 if (yych == '/') goto yy723;
 goto yy667;
yy729:
 ;
 yych = *++cursor;
 if (yych <= ',') {
  if (yych == '\t') goto yy731;
  goto yy578;
 } else {
  if (yych <= '-') goto yy732;
  if (yych <= '.') goto yy731;
  if (yych >= '0') goto yy578;
 }
yy730:
 ;
 yych = *++cursor;
 ;
 switch (yych) {
 case 'A':
 case 'a': goto yy673;
 case 'D':
 case 'd': goto yy677;
 case 'F':
 case 'f': goto yy671;
 case 'J':
 case 'j': goto yy670;
 case 'M':
 case 'm': goto yy672;
 case 'N':
 case 'n': goto yy676;
 case 'O':
 case 'o': goto yy675;
 case 'S':
 case 's': goto yy674;
 default: goto yy57;
 }
yy731:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy578;
 if (yych <= '0') goto yy736;
 if (yych <= '1') goto yy737;
 if (yych <= '9') goto yy738;
 goto yy578;
yy732:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy578;
 if (yych <= '0') goto yy733;
 if (yych <= '1') goto yy734;
 if (yych <= '9') goto yy735;
 goto yy578;
yy733:
 ;
 yych = *++cursor;
 if (yych <= ',') goto yy57;
 if (yych <= '.') goto yy602;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy735;
 goto yy57;
yy734:
 ;
 yych = *++cursor;
 if (yych <= ',') goto yy57;
 if (yych <= '.') goto yy602;
 if (yych <= '/') goto yy57;
 if (yych >= '3') goto yy57;
yy735:
 ;
 yych = *++cursor;
 if (yych <= ',') goto yy57;
 if (yych <= '.') goto yy602;
 goto yy57;
yy736:
 ;
 yych = *++cursor;
 if (yych <= '.') {
  if (yych <= ',') goto yy57;
  if (yych <= '-') goto yy602;
  goto yy739;
 } else {
  if (yych <= '/') goto yy57;
  if (yych <= '9') goto yy738;
  goto yy57;
 }
yy737:
 ;
 yych = *++cursor;
 if (yych <= '.') {
  if (yych <= ',') goto yy57;
  if (yych <= '-') goto yy602;
  goto yy739;
 } else {
  if (yych <= '/') goto yy57;
  if (yych >= '3') goto yy57;
 }
yy738:
 ;
 yych = *++cursor;
 if (yych <= ',') goto yy57;
 if (yych <= '-') goto yy602;
 if (yych >= '/') goto yy57;
yy739:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy611;
 goto yy57;
yy741:
 ;
 yych = *++cursor;
 if (yych == '-') goto yy785;
 if (yych <= '/') goto yy61;
 if (yych <= '9') goto yy783;
 goto yy61;
yy742:
 ;
 yych = *++cursor;
 ;
 switch (yych) {
 case '0': goto yy751;
 case '1': goto yy752;
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy753;
 case 'A':
 case 'a': goto yy746;
 case 'D':
 case 'd': goto yy750;
 case 'F':
 case 'f': goto yy744;
 case 'J':
 case 'j': goto yy743;
 case 'M':
 case 'm': goto yy745;
 case 'N':
 case 'n': goto yy749;
 case 'O':
 case 'o': goto yy748;
 case 'S':
 case 's': goto yy747;
 default: goto yy57;
 }
yy743:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'A') goto yy782;
  if (yych <= 'T') goto yy57;
  goto yy781;
 } else {
  if (yych <= 'a') {
   if (yych <= '`') goto yy57;
   goto yy782;
  } else {
   if (yych == 'u') goto yy781;
   goto yy57;
  }
 }
yy744:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy780;
 if (yych == 'e') goto yy780;
 goto yy57;
yy745:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy779;
 if (yych == 'a') goto yy779;
 goto yy57;
yy746:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'P') goto yy778;
  if (yych <= 'T') goto yy57;
  goto yy777;
 } else {
  if (yych <= 'p') {
   if (yych <= 'o') goto yy57;
   goto yy778;
  } else {
   if (yych == 'u') goto yy777;
   goto yy57;
  }
 }
yy747:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy775;
 if (yych == 'e') goto yy775;
 goto yy57;
yy748:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy774;
 if (yych == 'c') goto yy774;
 goto yy57;
yy749:
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy773;
 if (yych == 'o') goto yy773;
 goto yy57;
yy750:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy765;
 if (yych == 'e') goto yy765;
 goto yy57;
yy751:
 ;
 yych = *++cursor;
 if (yych == '-') goto yy754;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy758;
 goto yy57;
yy752:
 ;
 yych = *++cursor;
 if (yych == '-') goto yy754;
 if (yych <= '/') goto yy57;
 if (yych <= '2') goto yy758;
 goto yy57;
yy753:
 ;
 yych = *++cursor;
 if (yych != '-') goto yy57;
yy754:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '2') goto yy755;
 if (yych <= '3') goto yy756;
 if (yych <= '9') goto yy757;
 goto yy57;
yy755:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy657;
  if (yych <= '9') goto yy757;
  if (yych <= 'm') goto yy657;
  goto yy661;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy657;
  }
 }
yy756:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy657;
  if (yych <= '1') goto yy757;
  if (yych <= 'm') goto yy657;
  goto yy661;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy657;
  }
 }
yy757:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'q') {
  if (yych == 'n') goto yy661;
  goto yy657;
 } else {
  if (yych <= 'r') goto yy662;
  if (yych <= 's') goto yy660;
  if (yych <= 't') goto yy663;
  goto yy657;
 }
yy758:
 ;
 yych = *++cursor;
 if (yych != '-') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '2') {
  if (yych <= '/') goto yy57;
  if (yych >= '1') goto yy761;
 } else {
  if (yych <= '3') goto yy762;
  if (yych <= '9') goto yy757;
  goto yy57;
 }
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy657;
  if (yych <= '9') goto yy763;
  if (yych <= 'm') goto yy657;
  goto yy661;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy657;
  }
 }
yy761:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy657;
  if (yych <= '9') goto yy763;
  if (yych <= 'm') goto yy657;
  goto yy661;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy657;
  }
 }
yy762:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy657;
  if (yych <= '1') goto yy763;
  if (yych <= 'm') goto yy657;
  goto yy661;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy657;
  }
 }
yy763:
 ;
 yyaccept = 15;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'q') {
  if (yych == 'n') goto yy661;
 } else {
  if (yych <= 'r') goto yy662;
  if (yych <= 's') goto yy660;
  if (yych <= 't') goto yy663;
 }
yy764:
 ;
# 1301 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->y = timelib_get_nr_ex((char **) &ptr, 4, &length);
  s->time->m = timelib_get_nr((char **) &ptr, 2);
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  free(str);
  return 267;
 }
# 12683 "ext/date/lib/parse_date.c"
yy765:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy766;
 if (yych != 'c') goto yy57;
yy766:
 ;
 yych = *++cursor;
 if (yych != '-') goto yy57;
yy767:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '0') goto yy768;
 if (yych <= '2') goto yy769;
 if (yych <= '3') goto yy770;
 goto yy57;
yy768:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy771;
 goto yy57;
yy769:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy771;
 goto yy57;
yy770:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '2') goto yy57;
yy771:
 ;
 ++cursor;
 ;
# 1542 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->y = timelib_get_nr_ex((char **) &ptr, 4, &length);
  s->time->m = timelib_get_month((char **) &ptr);
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  free(str);
  return 272;
 }
# 12735 "ext/date/lib/parse_date.c"
yy773:
 ;
 yych = *++cursor;
 if (yych == 'V') goto yy766;
 if (yych == 'v') goto yy766;
 goto yy57;
yy774:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy766;
 if (yych == 't') goto yy766;
 goto yy57;
yy775:
 ;
 yych = *++cursor;
 if (yych == 'P') goto yy776;
 if (yych != 'p') goto yy57;
yy776:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych == '-') goto yy767;
  goto yy57;
 } else {
  if (yych <= 'T') goto yy766;
  if (yych == 't') goto yy766;
  goto yy57;
 }
yy777:
 ;
 yych = *++cursor;
 if (yych == 'G') goto yy766;
 if (yych == 'g') goto yy766;
 goto yy57;
yy778:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy766;
 if (yych == 'r') goto yy766;
 goto yy57;
yy779:
 ;
 yych = *++cursor;
 if (yych <= 'Y') {
  if (yych == 'R') goto yy766;
  if (yych <= 'X') goto yy57;
  goto yy766;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy57;
   goto yy766;
  } else {
   if (yych == 'y') goto yy766;
   goto yy57;
  }
 }
yy780:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy766;
 if (yych == 'b') goto yy766;
 goto yy57;
yy781:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych == 'L') goto yy766;
  if (yych <= 'M') goto yy57;
  goto yy766;
 } else {
  if (yych <= 'l') {
   if (yych <= 'k') goto yy57;
   goto yy766;
  } else {
   if (yych == 'n') goto yy766;
   goto yy57;
  }
 }
yy782:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy766;
 if (yych == 'n') goto yy766;
 goto yy57;
yy783:
 ;
 yyaccept = 16;
 yych = *(s->ptr = ++cursor);
 ;
 switch (yych) {
 case '\t':
 case ' ':
 case 'A':
 case 'D':
 case 'F':
 case 'H':
 case 'I':
 case 'J':
 case 'M':
 case 'N':
 case 'O':
 case 'S':
 case 'T':
 case 'V':
 case 'X':
 case 'Y':
 case 'a':
 case 'd':
 case 'f':
 case 'h':
 case 'j':
 case 'm':
 case 'n':
 case 'o':
 case 's':
 case 't':
 case 'w':
 case 'y': goto yy791;
 case '-': goto yy788;
 case '.': goto yy792;
 case '/': goto yy789;
 case '0': goto yy805;
 case '1': goto yy806;
 case '2': goto yy808;
 case '3': goto yy809;
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy55;
 case ':': goto yy807;
 case 'W': goto yy810;
 default: goto yy784;
 }
yy784:
 ;
# 1577 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  s->time->y = timelib_get_nr((char **) &ptr, 4);
  free(str);
  return 274;
 }
# 12881 "ext/date/lib/parse_date.c"
yy785:
 ;
 yych = *++cursor;
 ;
 switch (yych) {
 case '0': goto yy786;
 case '1': goto yy787;
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy753;
 case 'A':
 case 'a': goto yy746;
 case 'D':
 case 'd': goto yy750;
 case 'F':
 case 'f': goto yy744;
 case 'J':
 case 'j': goto yy743;
 case 'M':
 case 'm': goto yy745;
 case 'N':
 case 'n': goto yy749;
 case 'O':
 case 'o': goto yy748;
 case 'S':
 case 's': goto yy747;
 default: goto yy57;
 }
yy786:
 ;
 yych = *++cursor;
 if (yych == '-') goto yy754;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy753;
 goto yy57;
yy787:
 ;
 yych = *++cursor;
 if (yych == '-') goto yy754;
 if (yych <= '/') goto yy57;
 if (yych <= '2') goto yy753;
 goto yy57;
yy788:
 ;
 yych = *++cursor;
 ;
 switch (yych) {
 case '0': goto yy973;
 case '1': goto yy975;
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy976;
 case 'A':
 case 'a': goto yy967;
 case 'D':
 case 'd': goto yy971;
 case 'F':
 case 'f': goto yy965;
 case 'J':
 case 'j': goto yy964;
 case 'M':
 case 'm': goto yy966;
 case 'N':
 case 'n': goto yy970;
 case 'O':
 case 'o': goto yy969;
 case 'S':
 case 's': goto yy968;
 case 'W': goto yy972;
 default: goto yy939;
 }
yy789:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '0') goto yy947;
 if (yych <= '1') goto yy948;
 if (yych <= '9') goto yy949;
 goto yy57;
yy790:
 ;
 ++cursor;
 if ((s->lim - cursor) < 11) return 257;;
 yych = *cursor;
yy791:
 ;
 ;
 switch (yych) {
 case '\t':
 case ' ': goto yy790;
 case '-':
 case '.': goto yy938;
 case 'A':
 case 'a': goto yy800;
 case 'D':
 case 'd': goto yy804;
 case 'F':
 case 'f': goto yy798;
 case 'H':
 case 'h': goto yy64;
 case 'I': goto yy793;
 case 'J':
 case 'j': goto yy797;
 case 'M':
 case 'm': goto yy799;
 case 'N':
 case 'n': goto yy803;
 case 'O':
 case 'o': goto yy802;
 case 'S':
 case 's': goto yy801;
 case 'T':
 case 't': goto yy69;
 case 'V': goto yy795;
 case 'W':
 case 'w': goto yy68;
 case 'X': goto yy796;
 case 'Y':
 case 'y': goto yy67;
 default: goto yy57;
 }
yy792:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy939;
 if (yych <= '0') goto yy931;
 if (yych <= '2') goto yy932;
 if (yych <= '3') goto yy933;
 goto yy939;
yy793:
 ;
 ++cursor;
 if ((yych = *cursor) <= 'U') {
  if (yych == 'I') goto yy930;
 } else {
  if (yych == 'W') goto yy794;
  if (yych <= 'X') goto yy884;
 }
yy794:
 ;
# 1398 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->y = timelib_get_nr_ex((char **) &ptr, 4, &length);
  s->time->m = timelib_get_month((char **) &ptr);
  s->time->d = 1;
  { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  free(str);
  return 275;
 }
# 13045 "ext/date/lib/parse_date.c"
yy795:
 ;
 yych = *++cursor;
 if (yych == 'I') goto yy928;
 goto yy794;
yy796:
 ;
 yych = *++cursor;
 if (yych == 'I') goto yy927;
 goto yy794;
yy797:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'A') goto yy920;
  if (yych <= 'T') goto yy57;
  goto yy919;
 } else {
  if (yych <= 'a') {
   if (yych <= '`') goto yy57;
   goto yy920;
  } else {
   if (yych == 'u') goto yy919;
   goto yy57;
  }
 }
yy798:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= 'N') {
   if (yych == 'E') goto yy913;
   goto yy57;
  } else {
   if (yych <= 'O') goto yy99;
   if (yych <= 'Q') goto yy57;
   goto yy98;
  }
 } else {
  if (yych <= 'n') {
   if (yych == 'e') goto yy913;
   goto yy57;
  } else {
   if (yych <= 'o') goto yy99;
   if (yych == 'r') goto yy98;
   goto yy57;
  }
 }
yy799:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych <= 'H') {
   if (yych == 'A') goto yy910;
   goto yy57;
  } else {
   if (yych <= 'I') goto yy118;
   if (yych <= 'N') goto yy57;
   goto yy117;
  }
 } else {
  if (yych <= 'h') {
   if (yych == 'a') goto yy910;
   goto yy57;
  } else {
   if (yych <= 'i') goto yy118;
   if (yych == 'o') goto yy117;
   goto yy57;
  }
 }
yy800:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'P') goto yy904;
  if (yych <= 'T') goto yy57;
  goto yy903;
 } else {
  if (yych <= 'p') {
   if (yych <= 'o') goto yy57;
   goto yy904;
  } else {
   if (yych == 'u') goto yy903;
   goto yy57;
  }
 }
yy801:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= 'D') {
   if (yych == 'A') goto yy127;
   goto yy57;
  } else {
   if (yych <= 'E') goto yy896;
   if (yych <= 'T') goto yy57;
   goto yy126;
  }
 } else {
  if (yych <= 'd') {
   if (yych == 'a') goto yy127;
   goto yy57;
  } else {
   if (yych <= 'e') goto yy896;
   if (yych == 'u') goto yy126;
   goto yy57;
  }
 }
yy802:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy891;
 if (yych == 'c') goto yy891;
 goto yy57;
yy803:
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy885;
 if (yych == 'o') goto yy885;
 goto yy57;
yy804:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych == 'A') goto yy114;
  if (yych <= 'D') goto yy57;
  goto yy878;
 } else {
  if (yych <= 'a') {
   if (yych <= '`') goto yy57;
   goto yy114;
  } else {
   if (yych == 'e') goto yy878;
   goto yy57;
  }
 }
yy805:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '0') goto yy875;
 if (yych <= '9') goto yy876;
 goto yy61;
yy806:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '2') goto yy844;
 if (yych <= '9') goto yy823;
 goto yy61;
yy807:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '0') goto yy824;
 if (yych <= '1') goto yy825;
 goto yy57;
yy808:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '9') goto yy823;
 goto yy61;
yy809:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '5') goto yy819;
 if (yych <= '6') goto yy820;
 if (yych <= '9') goto yy55;
 goto yy61;
yy810:
 ;
 yych = *++cursor;
 if (yych <= '5') {
  if (yych <= '/') goto yy57;
  if (yych <= '0') goto yy811;
  if (yych <= '4') goto yy812;
  goto yy813;
 } else {
  if (yych <= 'E') {
   if (yych <= 'D') goto yy57;
   goto yy83;
  } else {
   if (yych == 'e') goto yy83;
   goto yy57;
  }
 }
yy811:
 ;
 yych = *++cursor;
 if (yych <= '0') goto yy57;
 if (yych <= '9') goto yy814;
 goto yy57;
yy812:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy814;
 goto yy57;
yy813:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '4') goto yy57;
yy814:
 ;
 yyaccept = 17;
 yych = *(s->ptr = ++cursor);
 if (yych == '-') goto yy816;
 if (yych <= '/') goto yy815;
 if (yych <= '7') goto yy817;
yy815:
 ;
# 1509 "ext/date/lib/parse_date.re"
 {
  timelib_sll w, d;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  { s->time->have_relative = 1; };

  s->time->y = timelib_get_nr((char **) &ptr, 4);
  w = timelib_get_nr((char **) &ptr, 2);
  d = 1;
  s->time->m = 1;
  s->time->d = 1;
  s->time->relative.d = timelib_daynr_from_weeknr(s->time->y, w, d);

  free(str);
  return 279;
 }
# 13278 "ext/date/lib/parse_date.c"
yy816:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '8') goto yy57;
yy817:
 ;
 ++cursor;
 ;
# 1490 "ext/date/lib/parse_date.re"
 {
  timelib_sll w, d;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  { s->time->have_relative = 1; };

  s->time->y = timelib_get_nr((char **) &ptr, 4);
  w = timelib_get_nr((char **) &ptr, 2);
  d = timelib_get_nr((char **) &ptr, 1);
  s->time->m = 1;
  s->time->d = 1;
  s->time->relative.d = timelib_daynr_from_weeknr(s->time->y, w, d);

  free(str);
  return 279;
 }
# 13306 "ext/date/lib/parse_date.c"
yy819:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '9') goto yy821;
 goto yy61;
yy820:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '6') goto yy821;
 if (yych <= '9') goto yy55;
 goto yy61;
yy821:
 ;
 yyaccept = 18;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 2) {
  goto yy55;
 }
 if (yych <= 'W') {
  if (yych <= 'F') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych >= ' ') goto yy61;
   } else {
    if (yych == 'D') goto yy61;
    if (yych >= 'F') goto yy61;
   }
  } else {
   if (yych <= 'M') {
    if (yych == 'H') goto yy61;
    if (yych >= 'M') goto yy61;
   } else {
    if (yych <= 'R') goto yy822;
    if (yych <= 'T') goto yy61;
    if (yych >= 'W') goto yy61;
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'd') {
    if (yych == 'Y') goto yy61;
    if (yych >= 'd') goto yy61;
   } else {
    if (yych == 'f') goto yy61;
    if (yych >= 'h') goto yy61;
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych >= 's') goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych >= 'w') goto yy61;
    } else {
     if (yych == 'y') goto yy61;
    }
   }
  }
 }
yy822:
 ;
# 1476 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->y = timelib_get_nr_ex((char **) &ptr, 4, &length);
  s->time->d = timelib_get_nr((char **) &ptr, 3);
  s->time->m = 1;
  { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  free(str);
  return 271;
 }
# 13383 "ext/date/lib/parse_date.c"
yy823:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '9') goto yy821;
 goto yy61;
yy824:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy826;
 goto yy57;
yy825:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '3') goto yy57;
yy826:
 ;
 yych = *++cursor;
 if (yych != ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '0') goto yy828;
 if (yych <= '2') goto yy829;
 if (yych <= '3') goto yy830;
 goto yy57;
yy828:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy831;
 goto yy57;
yy829:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy831;
 goto yy57;
yy830:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '2') goto yy57;
yy831:
 ;
 yych = *++cursor;
 if (yych != ' ') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '1') goto yy833;
 if (yych <= '2') goto yy834;
 goto yy57;
yy833:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy835;
 goto yy57;
yy834:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '5') goto yy57;
yy835:
 ;
 yych = *++cursor;
 if (yych != ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '6') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych != ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy840;
 if (yych <= '6') goto yy841;
 goto yy57;
yy840:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy842;
 goto yy57;
yy841:
 ;
 yych = *++cursor;
 if (yych != '0') goto yy57;
yy842:
 ;
 ++cursor;
yy843:
 ;
# 1450 "ext/date/lib/parse_date.re"
 {
  int tz_not_found;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_time) { add_error(s, "Double time specification"); free(str); return 999; } else { s->time->have_time = 1; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; } };
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->y = timelib_get_nr((char **) &ptr, 4);
  s->time->m = timelib_get_nr((char **) &ptr, 2);
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  s->time->h = timelib_get_nr((char **) &ptr, 2);
  s->time->i = timelib_get_nr((char **) &ptr, 2);
  s->time->s = timelib_get_nr((char **) &ptr, 2);
  if (*ptr == '.') {
   s->time->f = timelib_get_frac_nr((char **) &ptr, 9);
   if (*ptr) {
    s->time->z = timelib_get_zone((char **) &ptr, &s->time->dst, s->time, &tz_not_found, s->tzdb, tz_get_wrapper);
    if (tz_not_found) {
     add_error(s, "The timezone could not be found in the database");
    }
   }
  }
  free(str);
  return 260;
 }
# 13511 "ext/date/lib/parse_date.c"
yy844:
 ;
 yych = *++cursor;
 if (yych <= '2') {
  if (yych <= '/') goto yy61;
  if (yych >= '1') goto yy846;
 } else {
  if (yych <= '3') goto yy847;
  if (yych <= '9') goto yy821;
  goto yy61;
 }
yy845:
 ;
 yyaccept = 18;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy822;
    goto yy61;
   } else {
    if (yych <= '/') goto yy822;
    if (yych <= '9') goto yy848;
    if (yych <= 'C') goto yy822;
    goto yy61;
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy822;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy822;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy822;
     if (yych <= 'T') goto yy61;
     goto yy822;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy822;
    if (yych <= 'Y') goto yy61;
    goto yy822;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy822;
    } else {
     if (yych == 'g') goto yy822;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy822;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy822;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy822;
    }
   }
  }
 }
yy846:
 ;
 yyaccept = 18;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy822;
    goto yy61;
   } else {
    if (yych <= '/') goto yy822;
    if (yych <= '9') goto yy848;
    if (yych <= 'C') goto yy822;
    goto yy61;
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy822;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy822;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy822;
     if (yych <= 'T') goto yy61;
     goto yy822;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy822;
    if (yych <= 'Y') goto yy61;
    goto yy822;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy822;
    } else {
     if (yych == 'g') goto yy822;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy822;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy822;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy822;
    }
   }
  }
 }
yy847:
 ;
 yyaccept = 18;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy822;
    goto yy61;
   } else {
    if (yych <= '1') {
     if (yych <= '/') goto yy822;
    } else {
     if (yych <= '9') goto yy55;
     if (yych <= 'C') goto yy822;
     goto yy61;
    }
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy822;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy822;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy822;
     if (yych <= 'T') goto yy61;
     goto yy822;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy822;
    if (yych <= 'Y') goto yy61;
    goto yy822;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy822;
    } else {
     if (yych == 'g') goto yy822;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy822;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy822;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy822;
    }
   }
  }
 }
yy848:
 ;
 yyaccept = 19;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 2) {
  goto yy55;
 }
 if (yych <= 'W') {
  if (yych <= 'F') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy60;
    if (yych >= ' ') goto yy60;
   } else {
    if (yych == 'D') goto yy65;
    if (yych >= 'F') goto yy66;
   }
  } else {
   if (yych <= 'M') {
    if (yych == 'H') goto yy64;
    if (yych >= 'M') goto yy63;
   } else {
    if (yych <= 'S') {
     if (yych >= 'S') goto yy62;
    } else {
     if (yych <= 'T') goto yy850;
     if (yych >= 'W') goto yy68;
    }
   }
  }
 } else {
  if (yych <= 'l') {
   if (yych <= 'd') {
    if (yych == 'Y') goto yy67;
    if (yych >= 'd') goto yy65;
   } else {
    if (yych <= 'f') {
     if (yych >= 'f') goto yy66;
    } else {
     if (yych == 'h') goto yy64;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'm') goto yy63;
    if (yych <= 'r') goto yy849;
    if (yych <= 's') goto yy62;
    goto yy851;
   } else {
    if (yych <= 'w') {
     if (yych >= 'w') goto yy68;
    } else {
     if (yych == 'y') goto yy67;
    }
   }
  }
 }
yy849:
 ;
# 1438 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->y = timelib_get_nr((char **) &ptr, 4);
  s->time->m = timelib_get_nr((char **) &ptr, 2);
  s->time->d = timelib_get_nr((char **) &ptr, 2);
  free(str);
  return 270;
 }
# 13784 "ext/date/lib/parse_date.c"
yy850:
 ;
 yych = *++cursor;
 if (yych <= 'H') {
  if (yych <= '2') {
   if (yych <= '/') goto yy57;
   if (yych <= '1') goto yy865;
   goto yy866;
  } else {
   if (yych <= '9') goto yy867;
   if (yych <= 'G') goto yy57;
   goto yy70;
  }
 } else {
  if (yych <= 'g') {
   if (yych == 'U') goto yy71;
   goto yy57;
  } else {
   if (yych <= 'h') goto yy70;
   if (yych == 'u') goto yy71;
   goto yy57;
  }
 }
yy851:
 ;
 yych = *++cursor;
 if (yych <= 'H') {
  if (yych <= '2') {
   if (yych <= '/') goto yy57;
   if (yych >= '2') goto yy853;
  } else {
   if (yych <= '9') goto yy854;
   if (yych <= 'G') goto yy57;
   goto yy70;
  }
 } else {
  if (yych <= 'g') {
   if (yych == 'U') goto yy71;
   goto yy57;
  } else {
   if (yych <= 'h') goto yy70;
   if (yych == 'u') goto yy71;
   goto yy57;
  }
 }
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy859;
 if (yych <= '9') goto yy854;
 goto yy57;
yy853:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '4') goto yy859;
 if (yych <= '5') goto yy855;
 goto yy57;
yy854:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '6') goto yy57;
yy855:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
yy856:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy857;
 if (yych <= '6') goto yy858;
 goto yy57;
yy857:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy842;
 goto yy57;
yy858:
 ;
 yych = *++cursor;
 if (yych == '0') goto yy842;
 goto yy57;
yy859:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy860;
 if (yych <= '9') goto yy856;
 goto yy57;
yy860:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy861;
 if (yych <= '6') goto yy862;
 if (yych <= '9') goto yy856;
 goto yy57;
yy861:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy863;
 if (yych <= '6') goto yy864;
 if (yych <= '9') goto yy842;
 goto yy57;
yy862:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '0') goto yy863;
 if (yych <= '5') goto yy857;
 if (yych <= '6') goto yy858;
 goto yy57;
yy863:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy843;
 if (yych <= '9') goto yy842;
 goto yy843;
yy864:
 ;
 yych = *++cursor;
 if (yych == '0') goto yy842;
 goto yy843;
yy865:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy874;
 if (yych <= '9') goto yy867;
 if (yych <= ':') goto yy868;
 goto yy57;
yy866:
 ;
 yych = *++cursor;
 if (yych <= '5') {
  if (yych <= '/') goto yy57;
  if (yych <= '4') goto yy874;
  goto yy855;
 } else {
  if (yych == ':') goto yy868;
  goto yy57;
 }
yy867:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy855;
 if (yych != ':') goto yy57;
yy868:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= '6') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych != ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy872;
 if (yych <= '6') goto yy873;
 goto yy57;
yy872:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy842;
 goto yy57;
yy873:
 ;
 yych = *++cursor;
 if (yych == '0') goto yy842;
 goto yy57;
yy874:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy860;
 if (yych <= '9') goto yy856;
 if (yych <= ':') goto yy868;
 goto yy57;
yy875:
 ;
 yych = *++cursor;
 if (yych <= '2') {
  if (yych <= '/') goto yy61;
  if (yych <= '0') goto yy877;
  goto yy846;
 } else {
  if (yych <= '3') goto yy847;
  if (yych <= '9') goto yy821;
  goto yy61;
 }
yy876:
 ;
 yych = *++cursor;
 if (yych <= '2') {
  if (yych <= '/') goto yy61;
  if (yych <= '0') goto yy845;
  goto yy846;
 } else {
  if (yych <= '3') goto yy847;
  if (yych <= '9') goto yy821;
  goto yy61;
 }
yy877:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '9') goto yy848;
 goto yy61;
yy878:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy879;
 if (yych != 'c') goto yy57;
yy879:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych == 'E') goto yy880;
 if (yych != 'e') goto yy794;
yy880:
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy881;
 if (yych != 'm') goto yy57;
yy881:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy882;
 if (yych != 'b') goto yy57;
yy882:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy883;
 if (yych != 'e') goto yy57;
yy883:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy884;
 if (yych != 'r') goto yy57;
yy884:
 ;
 yych = *++cursor;
 goto yy794;
yy885:
 ;
 yych = *++cursor;
 if (yych == 'V') goto yy886;
 if (yych != 'v') goto yy57;
yy886:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych == 'E') goto yy887;
 if (yych != 'e') goto yy794;
yy887:
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy888;
 if (yych != 'm') goto yy57;
yy888:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy889;
 if (yych != 'b') goto yy57;
yy889:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy890;
 if (yych != 'e') goto yy57;
yy890:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy884;
 if (yych == 'r') goto yy884;
 goto yy57;
yy891:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy892;
 if (yych != 't') goto yy57;
yy892:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych == 'O') goto yy893;
 if (yych != 'o') goto yy794;
yy893:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy894;
 if (yych != 'b') goto yy57;
yy894:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy895;
 if (yych != 'e') goto yy57;
yy895:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy884;
 if (yych == 'r') goto yy884;
 goto yy57;
yy896:
 ;
 yych = *++cursor;
 if (yych <= 'P') {
  if (yych == 'C') goto yy129;
  if (yych <= 'O') goto yy57;
 } else {
  if (yych <= 'c') {
   if (yych <= 'b') goto yy57;
   goto yy129;
  } else {
   if (yych != 'p') goto yy57;
  }
 }
yy897:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy898;
 if (yych != 't') goto yy794;
yy898:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych == 'E') goto yy899;
 if (yych != 'e') goto yy794;
yy899:
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy900;
 if (yych != 'm') goto yy57;
yy900:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy901;
 if (yych != 'b') goto yy57;
yy901:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy902;
 if (yych != 'e') goto yy57;
yy902:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy884;
 if (yych == 'r') goto yy884;
 goto yy57;
yy903:
 ;
 yych = *++cursor;
 if (yych == 'G') goto yy907;
 if (yych == 'g') goto yy907;
 goto yy57;
yy904:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy905;
 if (yych != 'r') goto yy57;
yy905:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych == 'I') goto yy906;
 if (yych != 'i') goto yy794;
yy906:
 ;
 yych = *++cursor;
 if (yych == 'L') goto yy884;
 if (yych == 'l') goto yy884;
 goto yy57;
yy907:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych == 'U') goto yy908;
 if (yych != 'u') goto yy794;
yy908:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy909;
 if (yych != 's') goto yy57;
yy909:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy884;
 if (yych == 't') goto yy884;
 goto yy57;
yy910:
 ;
 yych = *++cursor;
 if (yych <= 'Y') {
  if (yych == 'R') goto yy911;
  if (yych <= 'X') goto yy57;
  goto yy884;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy57;
  } else {
   if (yych == 'y') goto yy884;
   goto yy57;
  }
 }
yy911:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych == 'C') goto yy912;
 if (yych != 'c') goto yy794;
yy912:
 ;
 yych = *++cursor;
 if (yych == 'H') goto yy884;
 if (yych == 'h') goto yy884;
 goto yy57;
yy913:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy914;
 if (yych != 'b') goto yy57;
yy914:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych == 'R') goto yy915;
 if (yych != 'r') goto yy794;
yy915:
 ;
 yych = *++cursor;
 if (yych == 'U') goto yy916;
 if (yych != 'u') goto yy57;
yy916:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy917;
 if (yych != 'a') goto yy57;
yy917:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy918;
 if (yych != 'r') goto yy57;
yy918:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy884;
 if (yych == 'y') goto yy884;
 goto yy57;
yy919:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych == 'L') goto yy926;
  if (yych <= 'M') goto yy57;
  goto yy925;
 } else {
  if (yych <= 'l') {
   if (yych <= 'k') goto yy57;
   goto yy926;
  } else {
   if (yych == 'n') goto yy925;
   goto yy57;
  }
 }
yy920:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy921;
 if (yych != 'n') goto yy57;
yy921:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych == 'U') goto yy922;
 if (yych != 'u') goto yy794;
yy922:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy923;
 if (yych != 'a') goto yy57;
yy923:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy924;
 if (yych != 'r') goto yy57;
yy924:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy884;
 if (yych == 'y') goto yy884;
 goto yy57;
yy925:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy884;
 if (yych == 'e') goto yy884;
 goto yy794;
yy926:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy884;
 if (yych == 'y') goto yy884;
 goto yy794;
yy927:
 ;
 yych = *++cursor;
 if (yych == 'I') goto yy884;
 goto yy794;
yy928:
 ;
 yych = *++cursor;
 if (yych != 'I') goto yy794;
 ;
 yych = *++cursor;
 if (yych == 'I') goto yy884;
 goto yy794;
yy930:
 ;
 yych = *++cursor;
 if (yych == 'I') goto yy884;
 goto yy794;
yy931:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '0') goto yy946;
 if (yych <= '9') goto yy945;
 goto yy57;
yy932:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy944;
 goto yy57;
yy933:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy942;
 if (yych <= '6') goto yy941;
 goto yy57;
yy934:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy913;
 if (yych == 'e') goto yy913;
 goto yy57;
yy935:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy910;
 if (yych == 'a') goto yy910;
 goto yy57;
yy936:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy940;
 if (yych == 'e') goto yy940;
 goto yy57;
yy937:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy878;
 if (yych == 'e') goto yy878;
 goto yy57;
yy938:
 ;
 ++cursor;
 if ((s->lim - cursor) < 9) return 257;;
 yych = *cursor;
yy939:
 ;
 ;
 switch (yych) {
 case '\t':
 case ' ':
 case '-':
 case '.': goto yy938;
 case 'A':
 case 'a': goto yy800;
 case 'D':
 case 'd': goto yy937;
 case 'F':
 case 'f': goto yy934;
 case 'I': goto yy793;
 case 'J':
 case 'j': goto yy797;
 case 'M':
 case 'm': goto yy935;
 case 'N':
 case 'n': goto yy803;
 case 'O':
 case 'o': goto yy802;
 case 'S':
 case 's': goto yy936;
 case 'V': goto yy795;
 case 'X': goto yy796;
 default: goto yy57;
 }
yy940:
 ;
 yych = *++cursor;
 if (yych == 'P') goto yy897;
 if (yych == 'p') goto yy897;
 goto yy57;
yy941:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '6') goto yy943;
 goto yy57;
yy942:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
yy943:
 ;
 yych = *++cursor;
 goto yy822;
yy944:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy943;
 goto yy57;
yy945:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy943;
 goto yy57;
yy946:
 ;
 yych = *++cursor;
 if (yych <= '0') goto yy57;
 if (yych <= '9') goto yy943;
 goto yy57;
yy947:
 ;
 yych = *++cursor;
 if (yych <= '.') goto yy57;
 if (yych <= '/') goto yy950;
 if (yych <= '9') goto yy958;
 goto yy57;
yy948:
 ;
 yych = *++cursor;
 if (yych <= '.') goto yy57;
 if (yych <= '/') goto yy950;
 if (yych <= '2') goto yy958;
 goto yy57;
yy949:
 ;
 yych = *++cursor;
 if (yych != '/') goto yy57;
yy950:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '2') goto yy951;
 if (yych <= '3') goto yy952;
 if (yych <= '9') goto yy953;
 goto yy57;
yy951:
 ;
 yyaccept = 21;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy455;
  if (yych <= '9') goto yy953;
  if (yych <= 'm') goto yy455;
  goto yy955;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy455;
   goto yy956;
  } else {
   if (yych <= 's') goto yy954;
   if (yych <= 't') goto yy957;
   goto yy455;
  }
 }
yy952:
 ;
 yyaccept = 21;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy455;
  if (yych <= '1') goto yy953;
  if (yych <= 'm') goto yy455;
  goto yy955;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy455;
   goto yy956;
  } else {
   if (yych <= 's') goto yy954;
   if (yych <= 't') goto yy957;
   goto yy455;
  }
 }
yy953:
 ;
 yyaccept = 21;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'q') {
  if (yych == 'n') goto yy955;
  goto yy455;
 } else {
  if (yych <= 'r') goto yy956;
  if (yych <= 's') goto yy954;
  if (yych <= 't') goto yy957;
  goto yy455;
 }
yy954:
 ;
 yych = *++cursor;
 if (yych == 't') goto yy454;
 goto yy57;
yy955:
 ;
 yych = *++cursor;
 if (yych == 'd') goto yy454;
 goto yy57;
yy956:
 ;
 yych = *++cursor;
 if (yych == 'd') goto yy454;
 goto yy57;
yy957:
 ;
 yych = *++cursor;
 if (yych == 'h') goto yy454;
 goto yy57;
yy958:
 ;
 yych = *++cursor;
 if (yych != '/') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '2') {
  if (yych <= '/') goto yy57;
  if (yych >= '1') goto yy961;
 } else {
  if (yych <= '3') goto yy962;
  if (yych <= '9') goto yy953;
  goto yy57;
 }
 ;
 yyaccept = 21;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy455;
  if (yych <= '9') goto yy963;
  if (yych <= 'm') goto yy455;
  goto yy955;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy455;
   goto yy956;
  } else {
   if (yych <= 's') goto yy954;
   if (yych <= 't') goto yy957;
   goto yy455;
  }
 }
yy961:
 ;
 yyaccept = 21;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy455;
  if (yych <= '9') goto yy963;
  if (yych <= 'm') goto yy455;
  goto yy955;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy455;
   goto yy956;
  } else {
   if (yych <= 's') goto yy954;
   if (yych <= 't') goto yy957;
   goto yy455;
  }
 }
yy962:
 ;
 yyaccept = 21;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy455;
  if (yych <= '1') goto yy963;
  if (yych <= 'm') goto yy455;
  goto yy955;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy455;
   goto yy956;
  } else {
   if (yych <= 's') goto yy954;
   if (yych <= 't') goto yy957;
   goto yy455;
  }
 }
yy963:
 ;
 yyaccept = 21;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych == '/') goto yy454;
  if (yych <= 'm') goto yy455;
  goto yy955;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy455;
   goto yy956;
  } else {
   if (yych <= 's') goto yy954;
   if (yych <= 't') goto yy957;
   goto yy455;
  }
 }
yy964:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'A') goto yy1044;
  if (yych <= 'T') goto yy57;
  goto yy1043;
 } else {
  if (yych <= 'a') {
   if (yych <= '`') goto yy57;
   goto yy1044;
  } else {
   if (yych == 'u') goto yy1043;
   goto yy57;
  }
 }
yy965:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy1041;
 if (yych == 'e') goto yy1041;
 goto yy57;
yy966:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1038;
 if (yych == 'a') goto yy1038;
 goto yy57;
yy967:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'P') goto yy1035;
  if (yych <= 'T') goto yy57;
  goto yy1034;
 } else {
  if (yych <= 'p') {
   if (yych <= 'o') goto yy57;
   goto yy1035;
  } else {
   if (yych == 'u') goto yy1034;
   goto yy57;
  }
 }
yy968:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy1031;
 if (yych == 'e') goto yy1031;
 goto yy57;
yy969:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy1029;
 if (yych == 'c') goto yy1029;
 goto yy57;
yy970:
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy1027;
 if (yych == 'o') goto yy1027;
 goto yy57;
yy971:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy1025;
 if (yych == 'e') goto yy1025;
 goto yy57;
yy972:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '0') goto yy811;
 if (yych <= '4') goto yy812;
 if (yych <= '5') goto yy813;
 goto yy57;
yy973:
 ;
 yyaccept = 22;
 yych = *(s->ptr = ++cursor);
 if (yych == '-') goto yy977;
 if (yych <= '/') goto yy974;
 if (yych <= '9') goto yy996;
yy974:
 ;
# 1315 "ext/date/lib/parse_date.re"
 {
  int length = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_date) { add_error(s, "Double date specification"); free(str); return 999; } else { s->time->have_date = 1; } };
  s->time->y = timelib_get_nr_ex((char **) &ptr, 4, &length);
  s->time->m = timelib_get_nr((char **) &ptr, 2);
  s->time->d = 1;
  { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
  free(str);
  return 267;
 }
# 14717 "ext/date/lib/parse_date.c"
yy975:
 ;
 yyaccept = 22;
 yych = *(s->ptr = ++cursor);
 if (yych == '-') goto yy977;
 if (yych <= '/') goto yy974;
 if (yych <= '2') goto yy996;
 goto yy974;
yy976:
 ;
 yyaccept = 22;
 yych = *(s->ptr = ++cursor);
 if (yych != '-') goto yy974;
yy977:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '2') goto yy978;
 if (yych <= '3') goto yy979;
 if (yych <= '9') goto yy980;
 goto yy57;
yy978:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'm') {
  if (yych <= '9') {
   if (yych <= '/') goto yy657;
   goto yy980;
  } else {
   if (yych == 'T') goto yy985;
   goto yy657;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'n') goto yy982;
   if (yych <= 'q') goto yy657;
   goto yy983;
  } else {
   if (yych <= 's') goto yy981;
   if (yych <= 't') goto yy984;
   goto yy657;
  }
 }
yy979:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'm') {
  if (yych <= '1') {
   if (yych <= '/') goto yy657;
  } else {
   if (yych == 'T') goto yy985;
   goto yy657;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'n') goto yy982;
   if (yych <= 'q') goto yy657;
   goto yy983;
  } else {
   if (yych <= 's') goto yy981;
   if (yych <= 't') goto yy984;
   goto yy657;
  }
 }
yy980:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych == 'T') goto yy985;
  if (yych <= 'm') goto yy657;
  goto yy982;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy983;
  } else {
   if (yych <= 's') goto yy981;
   if (yych <= 't') goto yy984;
   goto yy657;
  }
 }
yy981:
 ;
 yych = *++cursor;
 if (yych == 't') goto yy995;
 goto yy57;
yy982:
 ;
 yych = *++cursor;
 if (yych == 'd') goto yy995;
 goto yy57;
yy983:
 ;
 yych = *++cursor;
 if (yych == 'd') goto yy995;
 goto yy57;
yy984:
 ;
 yych = *++cursor;
 if (yych == 'h') goto yy995;
 goto yy57;
yy985:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '1') goto yy986;
 if (yych <= '2') goto yy987;
 if (yych <= '9') goto yy988;
 goto yy57;
yy986:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy988;
 if (yych <= ':') goto yy989;
 goto yy57;
yy987:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '4') goto yy988;
 if (yych == ':') goto yy989;
 goto yy57;
yy988:
 ;
 yych = *++cursor;
 if (yych != ':') goto yy57;
yy989:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy990;
 if (yych <= '9') goto yy991;
 goto yy57;
yy990:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy991;
 if (yych <= ':') goto yy992;
 goto yy57;
yy991:
 ;
 yych = *++cursor;
 if (yych != ':') goto yy57;
yy992:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy993;
 if (yych <= '6') goto yy994;
 if (yych <= '9') goto yy842;
 goto yy57;
yy993:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy843;
 if (yych <= '9') goto yy842;
 goto yy843;
yy994:
 ;
 yych = *++cursor;
 if (yych == '0') goto yy842;
 goto yy843;
yy995:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych == 'T') goto yy985;
 goto yy657;
yy996:
 ;
 yyaccept = 22;
 yych = *(s->ptr = ++cursor);
 if (yych != '-') goto yy974;
 ;
 yych = *++cursor;
 if (yych <= '2') {
  if (yych <= '/') goto yy57;
  if (yych >= '1') goto yy999;
 } else {
  if (yych <= '3') goto yy1000;
  if (yych <= '9') goto yy980;
  goto yy57;
 }
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'm') {
  if (yych <= '9') {
   if (yych <= '/') goto yy657;
   goto yy1001;
  } else {
   if (yych == 'T') goto yy985;
   goto yy657;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'n') goto yy982;
   if (yych <= 'q') goto yy657;
   goto yy983;
  } else {
   if (yych <= 's') goto yy981;
   if (yych <= 't') goto yy984;
   goto yy657;
  }
 }
yy999:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'm') {
  if (yych <= '9') {
   if (yych <= '/') goto yy657;
   goto yy1001;
  } else {
   if (yych == 'T') goto yy985;
   goto yy657;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'n') goto yy982;
   if (yych <= 'q') goto yy657;
   goto yy983;
  } else {
   if (yych <= 's') goto yy981;
   if (yych <= 't') goto yy984;
   goto yy657;
  }
 }
yy1000:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'm') {
  if (yych <= '1') {
   if (yych <= '/') goto yy657;
  } else {
   if (yych == 'T') goto yy985;
   goto yy657;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'n') goto yy982;
   if (yych <= 'q') goto yy657;
   goto yy983;
  } else {
   if (yych <= 's') goto yy981;
   if (yych <= 't') goto yy984;
   goto yy657;
  }
 }
yy1001:
 ;
 yyaccept = 21;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych == 'T') goto yy1002;
  if (yych <= 'm') goto yy455;
  goto yy982;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy455;
   goto yy983;
  } else {
   if (yych <= 's') goto yy981;
   if (yych <= 't') goto yy984;
   goto yy455;
  }
 }
yy1002:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '1') goto yy1003;
 if (yych <= '2') goto yy1004;
 if (yych <= '9') goto yy988;
 goto yy57;
yy1003:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy1005;
 if (yych <= ':') goto yy989;
 goto yy57;
yy1004:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '4') goto yy1005;
 if (yych == ':') goto yy989;
 goto yy57;
yy1005:
 ;
 yych = *++cursor;
 if (yych != ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy1007;
 if (yych <= '9') goto yy991;
 goto yy57;
yy1007:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy1008;
 if (yych <= ':') goto yy992;
 goto yy57;
yy1008:
 ;
 yych = *++cursor;
 if (yych != ':') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy1010;
 if (yych <= '6') goto yy1011;
 if (yych <= '9') goto yy842;
 goto yy57;
yy1010:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy843;
 if (yych <= '9') goto yy1012;
 goto yy843;
yy1011:
 ;
 yych = *++cursor;
 if (yych != '0') goto yy843;
yy1012:
 ;
 yyaccept = 23;
 yych = *(s->ptr = ++cursor);
 if (yych != '.') goto yy843;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
yy1014:
 ;
 yyaccept = 23;
 s->ptr = ++cursor;
 if ((s->lim - cursor) < 9) return 257;;
 yych = *cursor;
 ;
 if (yych <= '-') {
  if (yych == '+') goto yy1017;
  if (yych <= ',') goto yy843;
  goto yy1017;
 } else {
  if (yych <= '9') {
   if (yych <= '/') goto yy843;
   goto yy1014;
  } else {
   if (yych != 'G') goto yy843;
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy1023;
 goto yy57;
yy1017:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '1') goto yy1018;
 if (yych <= '2') goto yy1019;
 if (yych <= '9') goto yy1020;
 goto yy57;
yy1018:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy843;
 if (yych <= '9') goto yy1020;
 if (yych <= ':') goto yy1021;
 goto yy843;
yy1019:
 ;
 yych = *++cursor;
 if (yych <= '5') {
  if (yych <= '/') goto yy843;
  if (yych >= '5') goto yy1022;
 } else {
  if (yych <= '9') goto yy842;
  if (yych <= ':') goto yy1021;
  goto yy843;
 }
yy1020:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy843;
 if (yych <= '5') goto yy1022;
 if (yych <= '9') goto yy842;
 if (yych >= ';') goto yy843;
yy1021:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy843;
 if (yych <= '5') goto yy1022;
 if (yych <= '9') goto yy842;
 goto yy843;
yy1022:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy843;
 if (yych <= '9') goto yy842;
 goto yy843;
yy1023:
 ;
 yych = *++cursor;
 if (yych != 'T') goto yy57;
 ;
 yych = *++cursor;
 if (yych == '+') goto yy1017;
 if (yych == '-') goto yy1017;
 goto yy57;
yy1025:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy1026;
 if (yych != 'c') goto yy57;
yy1026:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'E') goto yy880;
  if (yych == 'e') goto yy880;
  goto yy794;
 }
yy1027:
 ;
 yych = *++cursor;
 if (yych == 'V') goto yy1028;
 if (yych != 'v') goto yy57;
yy1028:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'E') goto yy887;
  if (yych == 'e') goto yy887;
  goto yy794;
 }
yy1029:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy1030;
 if (yych != 't') goto yy57;
yy1030:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'N') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'O') goto yy893;
  if (yych == 'o') goto yy893;
  goto yy794;
 }
yy1031:
 ;
 yych = *++cursor;
 if (yych == 'P') goto yy1032;
 if (yych != 'p') goto yy57;
yy1032:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'T') goto yy1033;
  if (yych != 't') goto yy794;
 }
yy1033:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'E') goto yy899;
  if (yych == 'e') goto yy899;
  goto yy794;
 }
yy1034:
 ;
 yych = *++cursor;
 if (yych == 'G') goto yy1037;
 if (yych == 'g') goto yy1037;
 goto yy57;
yy1035:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy1036;
 if (yych != 'r') goto yy57;
yy1036:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'H') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'I') goto yy906;
  if (yych == 'i') goto yy906;
  goto yy794;
 }
yy1037:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'U') goto yy908;
  if (yych == 'u') goto yy908;
  goto yy794;
 }
yy1038:
 ;
 yych = *++cursor;
 if (yych <= 'Y') {
  if (yych == 'R') goto yy1039;
  if (yych <= 'X') goto yy57;
  goto yy1040;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy57;
  } else {
   if (yych == 'y') goto yy1040;
   goto yy57;
  }
 }
yy1039:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'B') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'C') goto yy912;
  if (yych == 'c') goto yy912;
  goto yy794;
 }
yy1040:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych == '-') goto yy767;
 goto yy794;
yy1041:
 ;
 yych = *++cursor;
 if (yych == 'B') goto yy1042;
 if (yych != 'b') goto yy57;
yy1042:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'R') goto yy915;
  if (yych == 'r') goto yy915;
  goto yy794;
 }
yy1043:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych == 'L') goto yy1047;
  if (yych <= 'M') goto yy57;
  goto yy1046;
 } else {
  if (yych <= 'l') {
   if (yych <= 'k') goto yy57;
   goto yy1047;
  } else {
   if (yych == 'n') goto yy1046;
   goto yy57;
  }
 }
yy1044:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy1045;
 if (yych != 'n') goto yy57;
yy1045:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'U') goto yy922;
  if (yych == 'u') goto yy922;
  goto yy794;
 }
yy1046:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'E') goto yy884;
  if (yych == 'e') goto yy884;
  goto yy794;
 }
yy1047:
 ;
 yyaccept = 20;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'X') {
  if (yych == '-') goto yy767;
  goto yy794;
 } else {
  if (yych <= 'Y') goto yy884;
  if (yych == 'y') goto yy884;
  goto yy794;
 }
yy1048:
 ;
 yych = *++cursor;
 if (yych <= '.') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy578;
   goto yy731;
  } else {
   if (yych <= ',') goto yy578;
   if (yych <= '-') goto yy732;
   goto yy731;
  }
 } else {
  if (yych <= 'U') {
   if (yych <= '/') goto yy730;
   if (yych <= 'T') goto yy578;
   goto yy78;
  } else {
   if (yych == 'u') goto yy78;
   goto yy578;
  }
 }
yy1049:
 ;
 yych = *++cursor;
 if (yych <= 'P') {
  if (yych == 'C') goto yy129;
  if (yych <= 'O') goto yy57;
  goto yy586;
 } else {
  if (yych <= 'c') {
   if (yych <= 'b') goto yy57;
   goto yy129;
  } else {
   if (yych == 'p') goto yy586;
   goto yy57;
  }
 }
yy1050:
 ;
 yych = *++cursor;
 if (yych <= '9') {
  if (yych <= ',') {
   if (yych == '\t') goto yy1052;
   goto yy1054;
  } else {
   if (yych <= '-') goto yy1051;
   if (yych <= '.') goto yy731;
   if (yych <= '/') goto yy730;
   goto yy741;
  }
 } else {
  if (yych <= 'q') {
   if (yych == 'n') goto yy470;
   goto yy1054;
  } else {
   if (yych <= 'r') goto yy471;
   if (yych <= 's') goto yy464;
   if (yych <= 't') goto yy468;
   goto yy1054;
  }
 }
yy1051:
 ;
 yych = *++cursor;
 ;
 switch (yych) {
 case '0': goto yy1055;
 case '1': goto yy1056;
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9': goto yy618;
 case 'A':
 case 'a': goto yy622;
 case 'D':
 case 'd': goto yy626;
 case 'F':
 case 'f': goto yy620;
 case 'J':
 case 'j': goto yy619;
 case 'M':
 case 'm': goto yy621;
 case 'N':
 case 'n': goto yy625;
 case 'O':
 case 'o': goto yy624;
 case 'S':
 case 's': goto yy623;
 default: goto yy578;
 }
yy1052:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy1054;
 if (yych <= '0') goto yy736;
 if (yych <= '1') goto yy737;
 if (yych <= '9') goto yy738;
 goto yy1054;
yy1053:
 ;
 ++cursor;
 if ((s->lim - cursor) < 13) return 257;;
 yych = *cursor;
yy1054:
 ;
 ;
 switch (yych) {
 case '\t':
 case ' ': goto yy1053;
 case '-':
 case '.': goto yy577;
 case 'A':
 case 'a': goto yy574;
 case 'D':
 case 'd': goto yy466;
 case 'F':
 case 'f': goto yy467;
 case 'H':
 case 'h': goto yy64;
 case 'I': goto yy475;
 case 'J':
 case 'j': goto yy479;
 case 'M':
 case 'm': goto yy465;
 case 'N':
 case 'n': goto yy482;
 case 'O':
 case 'o': goto yy481;
 case 'S':
 case 's': goto yy463;
 case 'T':
 case 't': goto yy69;
 case 'V': goto yy477;
 case 'W':
 case 'w': goto yy68;
 case 'X': goto yy478;
 case 'Y':
 case 'y': goto yy67;
 default: goto yy57;
 }
yy1055:
 ;
 yych = *++cursor;
 if (yych <= '.') {
  if (yych <= ',') goto yy57;
  if (yych <= '-') goto yy655;
  goto yy602;
 } else {
  if (yych <= '/') goto yy57;
  if (yych <= '9') goto yy1057;
  goto yy57;
 }
yy1056:
 ;
 yych = *++cursor;
 if (yych <= '.') {
  if (yych <= ',') goto yy57;
  if (yych <= '-') goto yy655;
  goto yy602;
 } else {
  if (yych <= '/') goto yy57;
  if (yych >= '3') goto yy57;
 }
yy1057:
 ;
 yych = *++cursor;
 if (yych <= ',') goto yy57;
 if (yych <= '-') goto yy1058;
 if (yych <= '.') goto yy602;
 goto yy57;
yy1058:
 ;
 yych = *++cursor;
 if (yych <= '2') {
  if (yych <= '/') goto yy57;
  if (yych >= '1') goto yy1060;
 } else {
  if (yych <= '3') goto yy1061;
  if (yych <= '9') goto yy659;
  goto yy57;
 }
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy657;
  if (yych <= '9') goto yy1062;
  if (yych <= 'm') goto yy657;
  goto yy661;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy657;
  }
 }
yy1060:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy657;
  if (yych <= '9') goto yy1062;
  if (yych <= 'm') goto yy657;
  goto yy661;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy657;
  }
 }
yy1061:
 ;
 yyaccept = 13;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '1') {
   if (yych <= '/') goto yy657;
  } else {
   if (yych <= '9') goto yy604;
   if (yych <= 'm') goto yy657;
   goto yy661;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy657;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy657;
  }
 }
yy1062:
 ;
 yyaccept = 15;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'n') {
  if (yych <= '/') goto yy764;
  if (yych <= '9') goto yy605;
  if (yych <= 'm') goto yy764;
  goto yy661;
 } else {
  if (yych <= 'r') {
   if (yych <= 'q') goto yy764;
   goto yy662;
  } else {
   if (yych <= 's') goto yy660;
   if (yych <= 't') goto yy663;
   goto yy764;
  }
 }
yy1063:
 ;
 yych = *++cursor;
 if (yych <= '9') {
  if (yych <= '-') {
   if (yych == '\t') goto yy1052;
   if (yych <= ',') goto yy1054;
   goto yy1051;
  } else {
   if (yych <= '.') goto yy1064;
   if (yych <= '/') goto yy730;
   if (yych <= '5') goto yy1066;
   goto yy741;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= ':') goto yy1065;
   if (yych == 'n') goto yy470;
   goto yy1054;
  } else {
   if (yych <= 'r') goto yy471;
   if (yych <= 's') goto yy464;
   if (yych <= 't') goto yy468;
   goto yy1054;
  }
 }
yy1064:
 ;
 yych = *++cursor;
 if (yych <= '1') {
  if (yych <= '/') goto yy578;
  if (yych <= '0') goto yy1088;
  goto yy1089;
 } else {
  if (yych <= '5') goto yy1090;
  if (yych <= '9') goto yy1091;
  goto yy578;
 }
yy1065:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy1083;
 if (yych <= '9') goto yy1084;
 goto yy57;
yy1066:
 ;
 yych = *++cursor;
 if (yych == '-') goto yy785;
 if (yych <= '/') goto yy61;
 if (yych >= ':') goto yy61;
 ;
 yyaccept = 24;
 yych = *(s->ptr = ++cursor);
 ;
 switch (yych) {
 case '\t':
 case ' ':
 case 'A':
 case 'D':
 case 'F':
 case 'H':
 case 'I':
 case 'J':
 case 'M':
 case 'N':
 case 'O':
 case 'S':
 case 'T':
 case 'V':
 case 'X':
 case 'Y':
 case 'a':
 case 'd':
 case 'f':
 case 'h':
 case 'j':
 case 'm':
 case 'n':
 case 'o':
 case 's':
 case 't':
 case 'w':
 case 'y': goto yy791;
 case '-': goto yy788;
 case '.': goto yy792;
 case '/': goto yy789;
 case '0': goto yy1069;
 case '1': goto yy1070;
 case '2': goto yy1071;
 case '3': goto yy1072;
 case '4':
 case '5': goto yy1073;
 case '6': goto yy1074;
 case '7':
 case '8':
 case '9': goto yy55;
 case ':': goto yy807;
 case 'W': goto yy810;
 default: goto yy1068;
 }
yy1068:
 ;
# 1207 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  switch (s->time->have_time) {
   case 0:
    s->time->h = timelib_get_nr((char **) &ptr, 2);
    s->time->i = timelib_get_nr((char **) &ptr, 2);
    s->time->s = 0;
    break;
   case 1:
    s->time->y = timelib_get_nr((char **) &ptr, 4);
    break;
   default:
    free(str);
    add_error(s, "Double time specification");
    return 999;
  }
  s->time->have_time++;
  free(str);
  return 263;
 }
# 15748 "ext/date/lib/parse_date.c"
yy1069:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '0') goto yy1081;
 if (yych <= '9') goto yy1082;
 goto yy61;
yy1070:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '2') goto yy1080;
 if (yych <= '9') goto yy1079;
 goto yy61;
yy1071:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '9') goto yy1079;
 goto yy61;
yy1072:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '5') goto yy1077;
 if (yych <= '6') goto yy1078;
 if (yych <= '9') goto yy1075;
 goto yy61;
yy1073:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '9') goto yy1075;
 goto yy61;
yy1074:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy61;
 if (yych <= '0') goto yy1075;
 if (yych <= '9') goto yy55;
 goto yy61;
yy1075:
 ;
 yyaccept = 25;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 2) {
  goto yy55;
 }
 if (yych <= 'W') {
  if (yych <= 'F') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych >= ' ') goto yy61;
   } else {
    if (yych == 'D') goto yy61;
    if (yych >= 'F') goto yy61;
   }
  } else {
   if (yych <= 'M') {
    if (yych == 'H') goto yy61;
    if (yych >= 'M') goto yy61;
   } else {
    if (yych <= 'R') goto yy1076;
    if (yych <= 'T') goto yy61;
    if (yych >= 'W') goto yy61;
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'd') {
    if (yych == 'Y') goto yy61;
    if (yych >= 'd') goto yy61;
   } else {
    if (yych == 'f') goto yy61;
    if (yych >= 'h') goto yy61;
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych >= 's') goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych >= 'w') goto yy61;
    } else {
     if (yych == 'y') goto yy61;
    }
   }
  }
 }
yy1076:
 ;
# 1253 "ext/date/lib/parse_date.re"
 {
  int tz_not_found;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { if (s->time->have_time) { add_error(s, "Double time specification"); free(str); return 999; } else { s->time->have_time = 1; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; } };
  s->time->h = timelib_get_nr((char **) &ptr, 2);
  s->time->i = timelib_get_nr((char **) &ptr, 2);
  s->time->s = timelib_get_nr((char **) &ptr, 2);

  if (*ptr != '\0') {
   s->time->z = timelib_get_zone((char **) &ptr, &s->time->dst, s->time, &tz_not_found, s->tzdb, tz_get_wrapper);
   if (tz_not_found) {
    add_error(s, "The timezone could not be found in the database");
   }
  }
  free(str);
  return 265;
 }
# 15859 "ext/date/lib/parse_date.c"
yy1077:
 ;
 yyaccept = 25;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy1076;
    goto yy61;
   } else {
    if (yych <= '/') goto yy1076;
    if (yych <= '9') goto yy821;
    if (yych <= 'C') goto yy1076;
    goto yy61;
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy1076;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy1076;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy1076;
     if (yych <= 'T') goto yy61;
     goto yy1076;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy1076;
    if (yych <= 'Y') goto yy61;
    goto yy1076;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy1076;
    } else {
     if (yych == 'g') goto yy1076;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy1076;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy1076;
    }
   }
  }
 }
yy1078:
 ;
 yyaccept = 25;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy1076;
    goto yy61;
   } else {
    if (yych <= '6') {
     if (yych <= '/') goto yy1076;
     goto yy821;
    } else {
     if (yych <= '9') goto yy55;
     if (yych <= 'C') goto yy1076;
     goto yy61;
    }
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy1076;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy1076;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy1076;
     if (yych <= 'T') goto yy61;
     goto yy1076;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy1076;
    if (yych <= 'Y') goto yy61;
    goto yy1076;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy1076;
    } else {
     if (yych == 'g') goto yy1076;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy1076;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy1076;
    }
   }
  }
 }
yy1079:
 ;
 yyaccept = 25;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= 'D') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy1076;
    goto yy61;
   } else {
    if (yych <= '/') goto yy1076;
    if (yych <= '9') goto yy821;
    if (yych <= 'C') goto yy1076;
    goto yy61;
   }
  } else {
   if (yych <= 'H') {
    if (yych == 'F') goto yy61;
    if (yych <= 'G') goto yy1076;
    goto yy61;
   } else {
    if (yych <= 'M') {
     if (yych <= 'L') goto yy1076;
     goto yy61;
    } else {
     if (yych <= 'R') goto yy1076;
     if (yych <= 'T') goto yy61;
     goto yy1076;
    }
   }
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'c') {
    if (yych == 'X') goto yy1076;
    if (yych <= 'Y') goto yy61;
    goto yy1076;
   } else {
    if (yych <= 'e') {
     if (yych <= 'd') goto yy61;
     goto yy1076;
    } else {
     if (yych == 'g') goto yy1076;
     goto yy61;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych == 'm') goto yy61;
    if (yych <= 'r') goto yy1076;
    goto yy61;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy1076;
    }
   }
  }
 }
yy1080:
 ;
 yyaccept = 25;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych <= '9') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy1076;
    goto yy61;
   } else {
    if (yych <= '0') {
     if (yych <= '/') goto yy1076;
     goto yy845;
    } else {
     if (yych <= '2') goto yy846;
     if (yych <= '3') goto yy847;
     goto yy821;
    }
   }
  } else {
   if (yych <= 'G') {
    if (yych <= 'D') {
     if (yych <= 'C') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'F') goto yy61;
     goto yy1076;
    }
   } else {
    if (yych <= 'L') {
     if (yych <= 'H') goto yy61;
     goto yy1076;
    } else {
     if (yych <= 'M') goto yy61;
     if (yych <= 'R') goto yy1076;
     goto yy61;
    }
   }
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Y') {
    if (yych == 'W') goto yy61;
    if (yych <= 'X') goto yy1076;
    goto yy61;
   } else {
    if (yych <= 'd') {
     if (yych <= 'c') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'f') goto yy61;
     goto yy1076;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'l') {
     if (yych <= 'h') goto yy61;
     goto yy1076;
    } else {
     if (yych <= 'm') goto yy61;
     if (yych <= 'r') goto yy1076;
     goto yy61;
    }
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy1076;
    }
   }
  }
 }
yy1081:
 ;
 yyaccept = 25;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych <= '9') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy1076;
    goto yy61;
   } else {
    if (yych <= '0') {
     if (yych <= '/') goto yy1076;
     goto yy877;
    } else {
     if (yych <= '2') goto yy846;
     if (yych <= '3') goto yy847;
     goto yy821;
    }
   }
  } else {
   if (yych <= 'G') {
    if (yych <= 'D') {
     if (yych <= 'C') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'F') goto yy61;
     goto yy1076;
    }
   } else {
    if (yych <= 'L') {
     if (yych <= 'H') goto yy61;
     goto yy1076;
    } else {
     if (yych <= 'M') goto yy61;
     if (yych <= 'R') goto yy1076;
     goto yy61;
    }
   }
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Y') {
    if (yych == 'W') goto yy61;
    if (yych <= 'X') goto yy1076;
    goto yy61;
   } else {
    if (yych <= 'd') {
     if (yych <= 'c') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'f') goto yy61;
     goto yy1076;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'l') {
     if (yych <= 'h') goto yy61;
     goto yy1076;
    } else {
     if (yych <= 'm') goto yy61;
     if (yych <= 'r') goto yy1076;
     goto yy61;
    }
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy1076;
    }
   }
  }
 }
yy1082:
 ;
 yyaccept = 25;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych <= '9') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy61;
    if (yych <= 0x1F) goto yy1076;
    goto yy61;
   } else {
    if (yych <= '0') {
     if (yych <= '/') goto yy1076;
     goto yy845;
    } else {
     if (yych <= '2') goto yy846;
     if (yych <= '3') goto yy847;
     goto yy821;
    }
   }
  } else {
   if (yych <= 'G') {
    if (yych <= 'D') {
     if (yych <= 'C') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'F') goto yy61;
     goto yy1076;
    }
   } else {
    if (yych <= 'L') {
     if (yych <= 'H') goto yy61;
     goto yy1076;
    } else {
     if (yych <= 'M') goto yy61;
     if (yych <= 'R') goto yy1076;
     goto yy61;
    }
   }
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Y') {
    if (yych == 'W') goto yy61;
    if (yych <= 'X') goto yy1076;
    goto yy61;
   } else {
    if (yych <= 'd') {
     if (yych <= 'c') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'f') goto yy61;
     goto yy1076;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'l') {
     if (yych <= 'h') goto yy61;
     goto yy1076;
    } else {
     if (yych <= 'm') goto yy61;
     if (yych <= 'r') goto yy1076;
     goto yy61;
    }
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy1076;
     goto yy61;
    } else {
     if (yych == 'y') goto yy61;
     goto yy1076;
    }
   }
  }
 }
yy1083:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy1085;
  goto yy491;
 } else {
  if (yych <= '9') goto yy1084;
  if (yych <= ':') goto yy1085;
  goto yy491;
 }
yy1084:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy1085;
 if (yych != ':') goto yy491;
yy1085:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy1086;
 if (yych <= '6') goto yy1087;
 if (yych <= '9') goto yy496;
 goto yy57;
yy1086:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy497;
 if (yych <= '/') goto yy491;
 if (yych <= '9') goto yy496;
 goto yy491;
yy1087:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy497;
 if (yych == '0') goto yy496;
 goto yy491;
yy1088:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ',') goto yy491;
  if (yych <= '-') goto yy602;
  goto yy1092;
 } else {
  if (yych <= '/') goto yy491;
  if (yych <= '9') goto yy1091;
  if (yych <= ':') goto yy1085;
  goto yy491;
 }
yy1089:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') goto yy491;
  if (yych <= '-') goto yy602;
  if (yych <= '.') goto yy1092;
  goto yy491;
 } else {
  if (yych <= '2') goto yy1091;
  if (yych <= '9') goto yy1084;
  if (yych <= ':') goto yy1085;
  goto yy491;
 }
yy1090:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ',') goto yy491;
  if (yych <= '-') goto yy602;
  goto yy1092;
 } else {
  if (yych <= '/') goto yy491;
  if (yych <= '9') goto yy1084;
  if (yych <= ':') goto yy1085;
  goto yy491;
 }
yy1091:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ',') goto yy491;
  if (yych <= '-') goto yy602;
 } else {
  if (yych == ':') goto yy1085;
  goto yy491;
 }
yy1092:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '5') goto yy1093;
 if (yych <= '6') goto yy1094;
 if (yych <= '9') goto yy610;
 goto yy57;
yy1093:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy497;
 if (yych <= '/') goto yy491;
 if (yych <= '9') goto yy1095;
 goto yy491;
yy1094:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych == '.') goto yy497;
  goto yy491;
 } else {
  if (yych <= '0') goto yy1095;
  if (yych <= '9') goto yy611;
  goto yy491;
 }
yy1095:
 ;
 yyaccept = 11;
 yych = *(s->ptr = ++cursor);
 if (yych == '.') goto yy497;
 if (yych <= '/') goto yy491;
 if (yych <= '9') goto yy605;
 goto yy491;
yy1096:
 ;
 yych = *++cursor;
 if (yych <= '9') {
  if (yych <= '-') {
   if (yych == '\t') goto yy460;
   if (yych <= ',') goto yy462;
   goto yy1051;
  } else {
   if (yych <= '.') goto yy474;
   if (yych <= '/') goto yy472;
   if (yych <= '5') goto yy1066;
   goto yy741;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= ':') goto yy483;
   if (yych == 'n') goto yy470;
   goto yy462;
  } else {
   if (yych <= 'r') goto yy471;
   if (yych <= 's') goto yy464;
   if (yych <= 't') goto yy468;
   goto yy462;
  }
 }
yy1097:
 ;
 yych = *++cursor;
 if (yych <= '9') {
  if (yych <= '-') {
   if (yych == '\t') goto yy1052;
   if (yych <= ',') goto yy1054;
   goto yy1051;
  } else {
   if (yych <= '.') goto yy1064;
   if (yych <= '/') goto yy472;
   if (yych <= '5') goto yy1066;
   goto yy741;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= ':') goto yy1065;
   if (yych == 'n') goto yy470;
   goto yy1054;
  } else {
   if (yych <= 'r') goto yy471;
   if (yych <= 's') goto yy464;
   if (yych <= 't') goto yy468;
   goto yy1054;
  }
 }
yy1098:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy142;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'e') goto yy1099;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1099:
 ;
 yych = *++cursor;
 if (yych <= 'V') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'U') goto yy143;
  }
 } else {
  if (yych <= 'u') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'v') goto yy1100;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1100:
 ;
 yych = *++cursor;
 if (yych <= 'I') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'H') goto yy144;
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'i') goto yy1101;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1101:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'N') goto yy145;
  }
 } else {
  if (yych <= 'n') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'o') goto yy1102;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1102:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'U') goto yy1103;
  if (yych != 'u') goto yy4;
 }
yy1103:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy1104;
 if (yych != 's') goto yy57;
yy1104:
 ;
 yych = *++cursor;
 if (yych == '\t') goto yy1105;
 if (yych != ' ') goto yy57;
yy1105:
 ;
 ++cursor;
 if ((s->lim - cursor) < 11) return 257;;
 yych = *cursor;
yy1106:
 ;
 if (yych <= 'W') {
  if (yych <= 'F') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy1105;
    if (yych <= 0x1F) goto yy57;
    goto yy1105;
   } else {
    if (yych == 'D') goto yy1110;
    if (yych <= 'E') goto yy57;
    goto yy1111;
   }
  } else {
   if (yych <= 'M') {
    if (yych == 'H') goto yy1109;
    if (yych <= 'L') goto yy57;
    goto yy1108;
   } else {
    if (yych <= 'S') {
     if (yych <= 'R') goto yy57;
    } else {
     if (yych <= 'T') goto yy1114;
     if (yych <= 'V') goto yy57;
     goto yy1113;
    }
   }
  }
 } else {
  if (yych <= 'l') {
   if (yych <= 'd') {
    if (yych == 'Y') goto yy1112;
    if (yych <= 'c') goto yy57;
    goto yy1110;
   } else {
    if (yych <= 'f') {
     if (yych <= 'e') goto yy57;
     goto yy1111;
    } else {
     if (yych == 'h') goto yy1109;
     goto yy57;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'm') goto yy1108;
    if (yych <= 'r') goto yy57;
    if (yych >= 't') goto yy1114;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy57;
     goto yy1113;
    } else {
     if (yych == 'y') goto yy1112;
     goto yy57;
    }
   }
  }
 }
yy1107:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= 'D') {
   if (yych == 'A') goto yy1179;
   goto yy57;
  } else {
   if (yych <= 'E') goto yy1180;
   if (yych <= 'T') goto yy57;
   goto yy1178;
  }
 } else {
  if (yych <= 'd') {
   if (yych == 'a') goto yy1179;
   goto yy57;
  } else {
   if (yych <= 'e') goto yy1180;
   if (yych == 'u') goto yy1178;
   goto yy57;
  }
 }
yy1108:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych == 'I') goto yy1170;
  if (yych <= 'N') goto yy57;
  goto yy1169;
 } else {
  if (yych <= 'i') {
   if (yych <= 'h') goto yy57;
   goto yy1170;
  } else {
   if (yych == 'o') goto yy1169;
   goto yy57;
  }
 }
yy1109:
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy1167;
 if (yych == 'o') goto yy1167;
 goto yy57;
yy1110:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1166;
 if (yych == 'a') goto yy1166;
 goto yy57;
yy1111:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych == 'O') goto yy1151;
  if (yych <= 'Q') goto yy57;
  goto yy1150;
 } else {
  if (yych <= 'o') {
   if (yych <= 'n') goto yy57;
   goto yy1151;
  } else {
   if (yych == 'r') goto yy1150;
   goto yy57;
  }
 }
yy1112:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy1147;
 if (yych == 'e') goto yy1147;
 goto yy57;
yy1113:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy1133;
 if (yych == 'e') goto yy1133;
 goto yy57;
yy1114:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych == 'H') goto yy1115;
  if (yych <= 'T') goto yy57;
  goto yy1116;
 } else {
  if (yych <= 'h') {
   if (yych <= 'g') goto yy57;
  } else {
   if (yych == 'u') goto yy1116;
   goto yy57;
  }
 }
yy1115:
 ;
 yych = *++cursor;
 if (yych == 'U') goto yy1128;
 if (yych == 'u') goto yy1128;
 goto yy57;
yy1116:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy1117;
 if (yych != 'e') goto yy57;
yy1117:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych <= ' ') {
  if (yych == '\t') goto yy1119;
  if (yych >= ' ') goto yy1119;
 } else {
  if (yych <= 'S') {
   if (yych >= 'S') goto yy1121;
  } else {
   if (yych == 's') goto yy1121;
  }
 }
yy1118:
 ;
# 1649 "ext/date/lib/parse_date.re"
 {
  timelib_sll i;
  int behavior = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_relative = 1; };

  while(*ptr) {
   i = timelib_get_relative_text((char **) &ptr, &behavior);
   timelib_eat_spaces((char **) &ptr);
   timelib_set_relative((char **) &ptr, i, behavior, s);
  }
  free(str);
  return 310;
 }
# 16773 "ext/date/lib/parse_date.c"
yy1119:
 ;
 ++cursor;
 if ((s->lim - cursor) < 2) return 257;;
 yych = *cursor;
 ;
 if (yych <= ' ') {
  if (yych == '\t') goto yy1119;
  if (yych <= 0x1F) goto yy57;
  goto yy1119;
 } else {
  if (yych <= 'O') {
   if (yych <= 'N') goto yy57;
   goto yy1125;
  } else {
   if (yych == 'o') goto yy1125;
   goto yy57;
  }
 }
yy1121:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy1122;
 if (yych != 'd') goto yy57;
yy1122:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1123;
 if (yych != 'a') goto yy57;
yy1123:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1124;
 if (yych != 'y') goto yy57;
yy1124:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych == '\t') goto yy1119;
 if (yych == ' ') goto yy1119;
 goto yy1118;
yy1125:
 ;
 yych = *++cursor;
 if (yych == 'F') goto yy1126;
 if (yych != 'f') goto yy57;
yy1126:
 ;
 ++cursor;
 ;
# 1122 "ext/date/lib/parse_date.re"
 {
  timelib_sll i;
  int behavior = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_relative = 1; };
  { s->time->have_relative = 1; s->time->relative.have_special_relative = 1; };

  i = timelib_get_relative_text((char **) &ptr, &behavior);
  timelib_eat_spaces((char **) &ptr);
  if (i > 0) {
   s->time->relative.special.type = 0x02;
   timelib_set_relative((char **) &ptr, i, 1, s);
  } else {
   s->time->relative.special.type = 0x03;
   timelib_set_relative((char **) &ptr, i, behavior, s);
  }
  free(str);
  return 281;
 }
# 16845 "ext/date/lib/parse_date.c"
yy1128:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych <= ' ') {
  if (yych == '\t') goto yy1119;
  if (yych <= 0x1F) goto yy1118;
  goto yy1119;
 } else {
  if (yych <= 'R') {
   if (yych <= 'Q') goto yy1118;
  } else {
   if (yych != 'r') goto yy1118;
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy1130;
 if (yych != 's') goto yy57;
yy1130:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy1131;
 if (yych != 'd') goto yy57;
yy1131:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1132;
 if (yych != 'a') goto yy57;
yy1132:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1124;
 if (yych == 'y') goto yy1124;
 goto yy57;
yy1133:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= 'C') goto yy57;
  if (yych <= 'D') goto yy1135;
 } else {
  if (yych <= 'c') goto yy57;
  if (yych <= 'd') goto yy1135;
  if (yych >= 'f') goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych == 'K') goto yy1141;
 if (yych == 'k') goto yy1141;
 goto yy57;
yy1135:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych <= ' ') {
  if (yych == '\t') goto yy1119;
  if (yych <= 0x1F) goto yy1118;
  goto yy1119;
 } else {
  if (yych <= 'N') {
   if (yych <= 'M') goto yy1118;
  } else {
   if (yych != 'n') goto yy1118;
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy1137;
 if (yych != 'e') goto yy57;
yy1137:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy1138;
 if (yych != 's') goto yy57;
yy1138:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy1139;
 if (yych != 'd') goto yy57;
yy1139:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1140;
 if (yych != 'a') goto yy57;
yy1140:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1124;
 if (yych == 'y') goto yy1124;
 goto yy57;
yy1141:
 ;
 yyaccept = 27;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych == 'D') goto yy1144;
  if (yych >= 'S') goto yy1143;
 } else {
  if (yych <= 'd') {
   if (yych >= 'd') goto yy1144;
  } else {
   if (yych == 's') goto yy1143;
  }
 }
yy1142:
 ;
# 1625 "ext/date/lib/parse_date.re"
 {
  timelib_sll i;
  int behavior = 0;
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_relative = 1; };

  while(*ptr) {
   i = timelib_get_relative_text((char **) &ptr, &behavior);
   timelib_eat_spaces((char **) &ptr);
   timelib_set_relative((char **) &ptr, i, behavior, s);
   s->time->relative.weekday_behavior = 2;


   if (s->time->relative.have_weekday_relative == 0) {
    { s->time->have_relative = 1; s->time->relative.have_weekday_relative = 1; };
    s->time->relative.weekday = 1;
   }
  }
  free(str);
  return 310;
 }
# 16976 "ext/date/lib/parse_date.c"
yy1143:
 ;
 yych = *++cursor;
 goto yy1118;
yy1144:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1145;
 if (yych != 'a') goto yy57;
yy1145:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1146;
 if (yych != 'y') goto yy57;
yy1146:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy1143;
 if (yych == 's') goto yy1143;
 goto yy1118;
yy1147:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1148;
 if (yych != 'a') goto yy57;
yy1148:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy1149;
 if (yych != 'r') goto yy57;
yy1149:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy1143;
 if (yych == 's') goto yy1143;
 goto yy1118;
yy1150:
 ;
 yych = *++cursor;
 if (yych == 'I') goto yy1163;
 if (yych == 'i') goto yy1163;
 goto yy57;
yy1151:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy1152;
 if (yych != 'r') goto yy57;
yy1152:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy1153;
 if (yych != 't') goto yy57;
yy1153:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych == 'H') goto yy1155;
  if (yych <= 'M') goto yy57;
 } else {
  if (yych <= 'h') {
   if (yych <= 'g') goto yy57;
   goto yy1155;
  } else {
   if (yych != 'n') goto yy57;
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'I') goto yy1160;
 if (yych == 'i') goto yy1160;
 goto yy57;
yy1155:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy1156;
 if (yych != 'n') goto yy57;
yy1156:
 ;
 yych = *++cursor;
 if (yych == 'I') goto yy1157;
 if (yych != 'i') goto yy57;
yy1157:
 ;
 yych = *++cursor;
 if (yych == 'G') goto yy1158;
 if (yych != 'g') goto yy57;
yy1158:
 ;
 yych = *++cursor;
 if (yych == 'H') goto yy1159;
 if (yych != 'h') goto yy57;
yy1159:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy1149;
 if (yych == 't') goto yy1149;
 goto yy57;
yy1160:
 ;
 yych = *++cursor;
 if (yych == 'G') goto yy1161;
 if (yych != 'g') goto yy57;
yy1161:
 ;
 yych = *++cursor;
 if (yych == 'H') goto yy1162;
 if (yych != 'h') goto yy57;
yy1162:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy1149;
 if (yych == 't') goto yy1149;
 goto yy57;
yy1163:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych <= ' ') {
  if (yych == '\t') goto yy1119;
  if (yych <= 0x1F) goto yy1118;
  goto yy1119;
 } else {
  if (yych <= 'D') {
   if (yych <= 'C') goto yy1118;
  } else {
   if (yych != 'd') goto yy1118;
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1165;
 if (yych != 'a') goto yy57;
yy1165:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1124;
 if (yych == 'y') goto yy1124;
 goto yy57;
yy1166:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1149;
 if (yych == 'y') goto yy1149;
 goto yy57;
yy1167:
 ;
 yych = *++cursor;
 if (yych == 'U') goto yy1168;
 if (yych != 'u') goto yy57;
yy1168:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy1149;
 if (yych == 'r') goto yy1149;
 goto yy57;
yy1169:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy1174;
 if (yych == 'n') goto yy1174;
 goto yy57;
yy1170:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy1171;
 if (yych != 'n') goto yy57;
yy1171:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'U') {
  if (yych == 'S') goto yy1143;
  if (yych <= 'T') goto yy1118;
 } else {
  if (yych <= 's') {
   if (yych <= 'r') goto yy1118;
   goto yy1143;
  } else {
   if (yych != 'u') goto yy1118;
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy1173;
 if (yych != 't') goto yy57;
yy1173:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy1149;
 if (yych == 'e') goto yy1149;
 goto yy57;
yy1174:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy1119;
   goto yy1118;
  } else {
   if (yych <= ' ') goto yy1119;
   if (yych <= 'C') goto yy1118;
  }
 } else {
  if (yych <= 'c') {
   if (yych == 'T') goto yy1176;
   goto yy1118;
  } else {
   if (yych <= 'd') goto yy1175;
   if (yych == 't') goto yy1176;
   goto yy1118;
  }
 }
yy1175:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1177;
 if (yych == 'a') goto yy1177;
 goto yy57;
yy1176:
 ;
 yych = *++cursor;
 if (yych == 'H') goto yy1149;
 if (yych == 'h') goto yy1149;
 goto yy57;
yy1177:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1124;
 if (yych == 'y') goto yy1124;
 goto yy57;
yy1178:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy1189;
 if (yych == 'n') goto yy1189;
 goto yy57;
yy1179:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy1184;
 if (yych == 't') goto yy1184;
 goto yy57;
yy1180:
 ;
 yych = *++cursor;
 if (yych == 'C') goto yy1181;
 if (yych != 'c') goto yy57;
yy1181:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych == 'O') goto yy1182;
  if (yych <= 'R') goto yy1118;
  goto yy1143;
 } else {
  if (yych <= 'o') {
   if (yych <= 'n') goto yy1118;
  } else {
   if (yych == 's') goto yy1143;
   goto yy1118;
  }
 }
yy1182:
 ;
 yych = *++cursor;
 if (yych == 'N') goto yy1183;
 if (yych != 'n') goto yy57;
yy1183:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy1149;
 if (yych == 'd') goto yy1149;
 goto yy57;
yy1184:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych <= ' ') {
  if (yych == '\t') goto yy1119;
  if (yych <= 0x1F) goto yy1118;
  goto yy1119;
 } else {
  if (yych <= 'U') {
   if (yych <= 'T') goto yy1118;
  } else {
   if (yych != 'u') goto yy1118;
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy1186;
 if (yych != 'r') goto yy57;
yy1186:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy1187;
 if (yych != 'd') goto yy57;
yy1187:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1188;
 if (yych != 'a') goto yy57;
yy1188:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1124;
 if (yych == 'y') goto yy1124;
 goto yy57;
yy1189:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych <= ' ') {
  if (yych == '\t') goto yy1119;
  if (yych <= 0x1F) goto yy1118;
  goto yy1119;
 } else {
  if (yych <= 'D') {
   if (yych <= 'C') goto yy1118;
  } else {
   if (yych != 'd') goto yy1118;
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1191;
 if (yych != 'a') goto yy57;
yy1191:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1124;
 if (yych == 'y') goto yy1124;
 goto yy57;
yy1192:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'E') goto yy1099;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'e') goto yy1193;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1193:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'U') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'V') goto yy1100;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'u') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'v') goto yy1194;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1194:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'H') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'I') goto yy1101;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'h') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'i') goto yy1195;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1195:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'N') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'O') goto yy1102;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'n') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'o') goto yy1196;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1196:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'U') goto yy1103;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'u') goto yy1197;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1197:
 ;
 yych = *++cursor;
 if (yych == 'S') goto yy1104;
 if (yych != 's') goto yy155;
 ;
 yych = *++cursor;
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= ',') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy57;
   goto yy1105;
  } else {
   if (yych == ' ') goto yy1105;
   goto yy57;
  }
 } else {
  if (yych <= '/') {
   if (yych == '.') goto yy57;
   goto yy148;
  } else {
   if (yych == '_') goto yy148;
   goto yy57;
  }
 }
yy1199:
 ;
 yych = *++cursor;
 if (yych <= 'G') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'F') goto yy142;
   goto yy1213;
  }
 } else {
  if (yych <= 'f') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'g') goto yy1213;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1200:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy142;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'e') goto yy1201;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1201:
 ;
 yych = *++cursor;
 if (yych <= 'V') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'U') goto yy143;
  }
 } else {
  if (yych <= 'u') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'v') goto yy1202;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1202:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy144;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'e') goto yy1203;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1203:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'M') goto yy145;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'n') goto yy1204;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1204:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'T') goto yy1205;
  if (yych != 't') goto yy4;
 }
yy1205:
 ;
 yych = *++cursor;
 if (yych == 'H') goto yy1206;
 if (yych != 'h') goto yy57;
yy1206:
 ;
 yych = *++cursor;
 if (yych == '\t') goto yy1207;
 if (yych != ' ') goto yy57;
yy1207:
 ;
 ++cursor;
 if ((s->lim - cursor) < 11) return 257;;
 yych = *cursor;
yy1208:
 ;
 if (yych <= 'W') {
  if (yych <= 'F') {
   if (yych <= ' ') {
    if (yych == '\t') goto yy1207;
    if (yych <= 0x1F) goto yy57;
    goto yy1207;
   } else {
    if (yych == 'D') goto yy1110;
    if (yych <= 'E') goto yy57;
    goto yy1111;
   }
  } else {
   if (yych <= 'M') {
    if (yych == 'H') goto yy1109;
    if (yych <= 'L') goto yy57;
    goto yy1108;
   } else {
    if (yych <= 'S') {
     if (yych <= 'R') goto yy57;
     goto yy1107;
    } else {
     if (yych <= 'T') goto yy1114;
     if (yych <= 'V') goto yy57;
    }
   }
  }
 } else {
  if (yych <= 'l') {
   if (yych <= 'd') {
    if (yych == 'Y') goto yy1112;
    if (yych <= 'c') goto yy57;
    goto yy1110;
   } else {
    if (yych <= 'f') {
     if (yych <= 'e') goto yy57;
     goto yy1111;
    } else {
     if (yych == 'h') goto yy1109;
     goto yy57;
    }
   }
  } else {
   if (yych <= 't') {
    if (yych <= 'm') goto yy1108;
    if (yych <= 'r') goto yy57;
    if (yych <= 's') goto yy1107;
    goto yy1114;
   } else {
    if (yych <= 'w') {
     if (yych <= 'v') goto yy57;
    } else {
     if (yych == 'y') goto yy1112;
     goto yy57;
    }
   }
  }
 }
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy1210;
 if (yych != 'e') goto yy57;
yy1210:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= 'C') goto yy57;
  if (yych <= 'D') goto yy1135;
 } else {
  if (yych <= 'c') goto yy57;
  if (yych <= 'd') goto yy1135;
  if (yych >= 'f') goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych == 'K') goto yy1212;
 if (yych != 'k') goto yy57;
yy1212:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych == 'D') goto yy1144;
  if (yych <= 'R') goto yy57;
  goto yy1143;
 } else {
  if (yych <= 'd') {
   if (yych <= 'c') goto yy57;
   goto yy1144;
  } else {
   if (yych == 's') goto yy1143;
   goto yy57;
  }
 }
yy1213:
 ;
 yych = *++cursor;
 if (yych <= 'H') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'G') goto yy143;
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'h') goto yy1214;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1214:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy144;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 't') goto yy1215;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1215:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy1207;
   goto yy4;
  } else {
   if (yych <= ' ') goto yy1207;
   if (yych == ')') goto yy140;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych == 'H') goto yy1216;
   if (yych <= 'Z') goto yy145;
   goto yy4;
  } else {
   if (yych == 'h') goto yy1216;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1216:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 0x1F) {
  if (yych == '\t') goto yy1207;
  goto yy4;
 } else {
  if (yych <= ' ') goto yy1207;
  if (yych == ')') goto yy140;
  goto yy4;
 }
yy1217:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'F') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'G') goto yy1213;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'f') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'g') goto yy1225;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1218:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'E') goto yy1201;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'e') goto yy1219;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1219:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'U') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'V') goto yy1202;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'u') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'v') goto yy1220;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1220:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'E') goto yy1203;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'e') goto yy1221;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1221:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy1204;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'n') goto yy1222;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1222:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'T') goto yy1205;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 't') goto yy1223;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1223:
 ;
 yych = *++cursor;
 if (yych == 'H') goto yy1206;
 if (yych != 'h') goto yy155;
yy1224:
 ;
 yych = *++cursor;
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= ',') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy57;
   goto yy1207;
  } else {
   if (yych == ' ') goto yy1207;
   goto yy57;
  }
 } else {
  if (yych <= '/') {
   if (yych == '.') goto yy57;
   goto yy148;
  } else {
   if (yych == '_') goto yy148;
   goto yy57;
  }
 }
yy1225:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'H') goto yy1214;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'g') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'h') goto yy1226;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1226:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1215;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 't') goto yy1227;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1227:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy4;
    goto yy1207;
   } else {
    if (yych == ' ') goto yy1207;
    goto yy4;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy4;
   } else {
    if (yych == '.') goto yy4;
    goto yy148;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'G') {
    if (yych <= '@') goto yy4;
    goto yy145;
   } else {
    if (yych <= 'H') goto yy1216;
    if (yych <= 'Z') goto yy145;
    goto yy4;
   }
  } else {
   if (yych <= 'g') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'h') goto yy1228;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1228:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= ')') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy1207;
   goto yy4;
  } else {
   if (yych <= ' ') goto yy1207;
   if (yych <= '(') goto yy4;
   goto yy140;
  }
 } else {
  if (yych <= '.') {
   if (yych == '-') goto yy148;
   goto yy4;
  } else {
   if (yych <= '/') goto yy148;
   if (yych == '_') goto yy148;
   goto yy4;
  }
 }
yy1229:
 ;
 yych = *++cursor;
 if (yych <= 'V') {
  if (yych <= 'B') {
   if (yych == ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'O') {
    if (yych <= 'C') goto yy1245;
    goto yy142;
   } else {
    if (yych <= 'P') goto yy1247;
    if (yych <= 'U') goto yy142;
    goto yy1246;
   }
  }
 } else {
  if (yych <= 'o') {
   if (yych <= '`') {
    if (yych <= 'Z') goto yy142;
    goto yy4;
   } else {
    if (yych == 'c') goto yy1245;
    goto yy142;
   }
  } else {
   if (yych <= 'u') {
    if (yych <= 'p') goto yy1247;
    goto yy142;
   } else {
    if (yych <= 'v') goto yy1246;
    if (yych <= 'z') goto yy142;
    goto yy4;
   }
  }
 }
yy1230:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy142;
   goto yy1240;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 't') goto yy1240;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1231:
 ;
 yych = *++cursor;
 if (yych <= 'X') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'W') goto yy142;
   goto yy1237;
  }
 } else {
  if (yych <= 'w') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'x') goto yy1237;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1232:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'M') goto yy142;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'n') goto yy1233;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1233:
 ;
 yych = *++cursor;
 if (yych <= 'D') {
  if (yych <= ')') {
   if (yych <= '(') goto yy167;
   goto yy140;
  } else {
   if (yych <= '@') goto yy167;
   if (yych <= 'C') goto yy143;
  }
 } else {
  if (yych <= 'c') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy167;
   goto yy143;
  } else {
   if (yych <= 'd') goto yy1234;
   if (yych <= 'z') goto yy143;
   goto yy167;
  }
 }
yy1234:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy144;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy1235;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1235:
 ;
 yych = *++cursor;
 if (yych <= 'Y') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'X') goto yy145;
  }
 } else {
  if (yych <= 'x') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'y') goto yy1236;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1236:
 ;
 yych = *++cursor;
 if (yych == ')') goto yy140;
 goto yy167;
yy1237:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy143;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 't') goto yy1238;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1238:
 ;
 yych = *++cursor;
 if (yych <= 'H') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'G') goto yy144;
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'h') goto yy1239;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1239:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '(') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy4;
   goto yy1207;
  } else {
   if (yych == ' ') goto yy1207;
   goto yy4;
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy145;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1240:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= ')') {
   if (yych <= '(') goto yy167;
   goto yy140;
  } else {
   if (yych <= '@') goto yy167;
   if (yych <= 'T') goto yy143;
  }
 } else {
  if (yych <= 't') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy167;
   goto yy143;
  } else {
   if (yych <= 'u') goto yy1241;
   if (yych <= 'z') goto yy143;
   goto yy167;
  }
 }
yy1241:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'Q') goto yy144;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'r') goto yy1242;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1242:
 ;
 yych = *++cursor;
 if (yych <= 'D') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'C') goto yy145;
  }
 } else {
  if (yych <= 'c') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'd') goto yy1243;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1243:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'A') goto yy1244;
  if (yych != 'a') goto yy4;
 }
yy1244:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy173;
 if (yych == 'y') goto yy173;
 goto yy57;
yy1245:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'N') goto yy143;
   goto yy1256;
  }
 } else {
  if (yych <= 'n') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'o') goto yy1256;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1246:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy143;
   goto yy1253;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'e') goto yy1253;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1247:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy194;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
    goto yy194;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
    goto yy194;
   } else {
    if (yych != 'T') goto yy143;
   }
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy194;
    goto yy143;
   } else {
    if (yych <= 't') goto yy1248;
    if (yych <= 'z') goto yy143;
    goto yy194;
   }
  }
 }
yy1248:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy194;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
    goto yy194;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
    goto yy194;
   } else {
    if (yych != 'E') goto yy144;
   }
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy194;
    goto yy144;
   } else {
    if (yych <= 'e') goto yy1249;
    if (yych <= 'z') goto yy144;
    goto yy194;
   }
  }
 }
yy1249:
 ;
 yych = *++cursor;
 if (yych <= 'M') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'L') goto yy145;
  }
 } else {
  if (yych <= 'l') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'm') goto yy1250;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1250:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'B') goto yy1251;
  if (yych != 'b') goto yy4;
 }
yy1251:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy1252;
 if (yych != 'e') goto yy57;
yy1252:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy206;
 if (yych == 'r') goto yy206;
 goto yy57;
yy1253:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'M') goto yy144;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'n') goto yy1254;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1254:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy145;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 't') goto yy1255;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1255:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'H') goto yy1206;
  if (yych == 'h') goto yy1206;
  goto yy4;
 }
yy1256:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'M') goto yy144;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'n') goto yy1257;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1257:
 ;
 yych = *++cursor;
 if (yych <= 'D') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'C') goto yy145;
   goto yy1216;
  }
 } else {
  if (yych <= 'c') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'd') goto yy1216;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1258:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'U') {
  if (yych <= '/') {
   if (yych <= ',') {
    if (yych == ')') goto yy140;
    goto yy4;
   } else {
    if (yych == '.') goto yy4;
    goto yy148;
   }
  } else {
   if (yych <= 'C') {
    if (yych <= '@') goto yy4;
    if (yych <= 'B') goto yy142;
    goto yy1245;
   } else {
    if (yych == 'P') goto yy1247;
    goto yy142;
   }
  }
 } else {
  if (yych <= 'b') {
   if (yych <= '^') {
    if (yych <= 'V') goto yy1246;
    if (yych <= 'Z') goto yy142;
    goto yy4;
   } else {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy4;
    goto yy147;
   }
  } else {
   if (yych <= 'p') {
    if (yych <= 'c') goto yy1274;
    if (yych <= 'o') goto yy147;
    goto yy1276;
   } else {
    if (yych == 'v') goto yy1275;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1259:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1240;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 't') goto yy1269;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1260:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'W') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'X') goto yy1237;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'w') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'x') goto yy1266;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1261:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy1233;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'n') goto yy1262;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1262:
 ;
 yyaccept = 4;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy167;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy167;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'D') goto yy1234;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy167;
   goto yy148;
  } else {
   if (yych <= 'c') {
    if (yych <= '`') goto yy167;
    goto yy151;
   } else {
    if (yych <= 'd') goto yy1263;
    if (yych <= 'z') goto yy151;
    goto yy167;
   }
  }
 }
yy1263:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'A') goto yy1235;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy1264;
   if (yych <= 'z') goto yy152;
   goto yy4;
  }
 }
yy1264:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'X') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'Y') goto yy1236;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'x') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'y') goto yy1265;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1265:
 ;
 yyaccept = 4;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= '-') {
  if (yych == ')') goto yy140;
  if (yych <= ',') goto yy167;
  goto yy148;
 } else {
  if (yych <= '/') {
   if (yych <= '.') goto yy167;
   goto yy148;
  } else {
   if (yych == '_') goto yy148;
   goto yy167;
  }
 }
yy1266:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1238;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 't') goto yy1267;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1267:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'H') goto yy1239;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'g') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'h') goto yy1268;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1268:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '-') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy1207;
   if (yych <= 0x1F) goto yy4;
   goto yy1207;
  } else {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  }
 } else {
  if (yych <= 'Z') {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  } else {
   if (yych <= '_') {
    if (yych <= '^') goto yy4;
    goto yy148;
   } else {
    if (yych <= '`') goto yy4;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1269:
 ;
 yyaccept = 4;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy167;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy167;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'U') goto yy1241;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy167;
   goto yy148;
  } else {
   if (yych <= 't') {
    if (yych <= '`') goto yy167;
    goto yy151;
   } else {
    if (yych <= 'u') goto yy1270;
    if (yych <= 'z') goto yy151;
    goto yy167;
   }
  }
 }
yy1270:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'R') goto yy1242;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'q') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'r') goto yy1271;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1271:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'D') goto yy1243;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'c') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'd') goto yy1272;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1272:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'A') goto yy1244;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy1273;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1273:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy173;
 if (yych == 'y') goto yy186;
 goto yy155;
yy1274:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'N') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'O') goto yy1256;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'n') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'o') goto yy1285;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1275:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'E') goto yy1253;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'e') goto yy1282;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1276:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
    goto yy372;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'S') {
    if (yych <= '@') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'T') goto yy1248;
    if (yych <= 'Z') goto yy143;
    goto yy194;
   }
  } else {
   if (yych <= 's') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy151;
   } else {
    if (yych <= 't') goto yy1277;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy1277:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
    goto yy372;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'D') {
    if (yych <= '@') goto yy194;
    goto yy144;
   } else {
    if (yych <= 'E') goto yy1249;
    if (yych <= 'Z') goto yy144;
    goto yy194;
   }
  } else {
   if (yych <= 'd') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy152;
   } else {
    if (yych <= 'e') goto yy1278;
    if (yych <= 'z') goto yy152;
    goto yy194;
   }
  }
 }
yy1278:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'L') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'M') goto yy1250;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'l') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'm') goto yy1279;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1279:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'A') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'B') goto yy1251;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'b') goto yy1280;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1280:
 ;
 yych = *++cursor;
 if (yych == 'E') goto yy1252;
 if (yych != 'e') goto yy155;
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy206;
 if (yych == 'r') goto yy377;
 goto yy155;
yy1282:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy1254;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'n') goto yy1283;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1283:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1255;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 't') goto yy1284;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1284:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'H') goto yy1206;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'h') goto yy1224;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1285:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy1257;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'n') goto yy1286;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1286:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'D') goto yy1216;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'c') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'd') goto yy1228;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1287:
 ;
 yych = *++cursor;
 if (yych <= 'C') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'B') goto yy142;
  }
 } else {
  if (yych <= 'b') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'c') goto yy1288;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1288:
 ;
 yych = *++cursor;
 if (yych <= 'K') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'J') goto yy143;
  }
 } else {
  if (yych <= 'j') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'k') goto yy1289;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1289:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= ')') {
  if (yych == ' ') goto yy1290;
  if (yych <= '(') goto yy4;
  goto yy140;
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') goto yy4;
   goto yy144;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1290:
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy1291;
 if (yych != 'o') goto yy57;
yy1291:
 ;
 yych = *++cursor;
 if (yych == 'F') goto yy1292;
 if (yych != 'f') goto yy57;
yy1292:
 ;
 yych = *++cursor;
 if (yych != ' ') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '1') goto yy1294;
 if (yych <= '2') goto yy1296;
 if (yych <= '9') goto yy1297;
 goto yy57;
yy1294:
 ;
 yyaccept = 28;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') goto yy1298;
 if (yych <= '9') goto yy1297;
 goto yy1298;
yy1295:
 ;
# 1099 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_time = 0; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; };
  { if (s->time->have_time) { add_error(s, "Double time specification"); free(str); return 999; } else { s->time->have_time = 1; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; } };

  if (*ptr == 'b') {
   s->time->h = timelib_get_nr((char **) &ptr, 2);
   s->time->i = 15;
  } else {
   s->time->h = timelib_get_nr((char **) &ptr, 2) - 1;
   s->time->i = 45;
  }
  if (*ptr != '\0' ) {
   timelib_eat_spaces((char **) &ptr);
   s->time->h += timelib_meridian((char **) &ptr, s->time->h);
  }

  free(str);
  return 280;
 }
# 19675 "ext/date/lib/parse_date.c"
yy1296:
 ;
 yyaccept = 28;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') goto yy1298;
 if (yych >= '5') goto yy1298;
yy1297:
 ;
 yyaccept = 28;
 s->ptr = ++cursor;
 if ((s->lim - cursor) < 5) return 257;;
 yych = *cursor;
yy1298:
 ;
 if (yych <= 'A') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy1297;
   goto yy1295;
  } else {
   if (yych <= ' ') goto yy1297;
   if (yych <= '@') goto yy1295;
  }
 } else {
  if (yych <= '`') {
   if (yych != 'P') goto yy1295;
  } else {
   if (yych <= 'a') goto yy1299;
   if (yych != 'p') goto yy1295;
  }
 }
yy1299:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych != '.') goto yy57;
 } else {
  if (yych <= 'M') goto yy1301;
  if (yych == 'm') goto yy1301;
  goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy1301;
 if (yych != 'm') goto yy57;
yy1301:
 ;
 yych = *++cursor;
 if (yych <= 0x1F) {
  if (yych <= 0x00) goto yy1303;
  if (yych == '\t') goto yy1303;
  goto yy57;
 } else {
  if (yych <= ' ') goto yy1303;
  if (yych != '.') goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych <= '\t') {
  if (yych <= 0x00) goto yy1303;
  if (yych <= 0x08) goto yy57;
 } else {
  if (yych != ' ') goto yy57;
 }
yy1303:
 ;
 yych = *++cursor;
 goto yy1295;
yy1304:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'B') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'C') goto yy1288;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'b') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'c') goto yy1305;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1305:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'J') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'K') goto yy1289;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'j') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'k') goto yy1306;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1306:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= '(') {
   if (yych == ' ') goto yy1290;
   goto yy4;
  } else {
   if (yych <= ')') goto yy140;
   if (yych == '-') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '/') goto yy148;
   if (yych <= '@') goto yy4;
   if (yych <= 'Z') goto yy144;
   goto yy4;
  } else {
   if (yych <= '_') goto yy148;
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy152;
   goto yy4;
  }
 }
yy1307:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'R') goto yy142;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 's') goto yy1308;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1308:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy143;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 't') goto yy1309;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1309:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '(') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy4;
   goto yy1105;
  } else {
   if (yych != ' ') goto yy4;
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy144;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1310:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy1311;
 if (yych != 'd') goto yy1106;
yy1311:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1312;
 if (yych != 'a') goto yy57;
yy1312:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1313;
 if (yych != 'y') goto yy57;
yy1313:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'R') {
  if (yych != ' ') goto yy1118;
 } else {
  if (yych <= 'S') goto yy1143;
  if (yych == 's') goto yy1143;
  goto yy1118;
 }
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy1315;
 if (yych != 'o') goto yy57;
yy1315:
 ;
 yych = *++cursor;
 if (yych == 'F') goto yy1316;
 if (yych != 'f') goto yy57;
yy1316:
 ;
 yych = *++cursor;
 goto yy2;
yy1317:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'R') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'S') goto yy1308;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'r') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 's') goto yy1318;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1318:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1309;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 't') goto yy1319;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1319:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '-') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy1105;
   if (yych <= 0x1F) goto yy4;
   goto yy1310;
  } else {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  }
 } else {
  if (yych <= 'Z') {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  } else {
   if (yych <= '_') {
    if (yych <= '^') goto yy4;
    goto yy148;
   } else {
    if (yych <= '`') goto yy4;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1320:
 ;
 yych = *++cursor;
 if (yych <= 'B') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'A') goto yy142;
   goto yy1356;
  }
 } else {
  if (yych <= 'a') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'b') goto yy1356;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1321:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == 'F') goto yy1346;
   if (yych <= 'Q') goto yy142;
   goto yy1345;
  }
 } else {
  if (yych <= 'f') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   if (yych <= 'e') goto yy142;
   goto yy1346;
  } else {
   if (yych == 'r') goto yy1345;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1322:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'T') goto yy142;
   goto yy1342;
  }
 } else {
  if (yych <= 't') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'u') goto yy1342;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1323:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == 'I') goto yy1325;
   if (yych <= 'N') goto yy142;
  }
 } else {
  if (yych <= 'i') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   if (yych <= 'h') goto yy142;
   goto yy1325;
  } else {
   if (yych == 'o') goto yy1324;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1324:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'M') goto yy143;
   goto yy1328;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'n') goto yy1328;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1325:
 ;
 yych = *++cursor;
 if (yych <= 'D') {
  if (yych <= ')') {
   if (yych <= '(') goto yy167;
   goto yy140;
  } else {
   if (yych <= '@') goto yy167;
   if (yych <= 'C') goto yy143;
  }
 } else {
  if (yych <= 'c') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy167;
   goto yy143;
  } else {
   if (yych <= 'd') goto yy1326;
   if (yych <= 'z') goto yy143;
   goto yy167;
  }
 }
yy1326:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy144;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy1327;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1327:
 ;
 yych = *++cursor;
 if (yych <= 'Y') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'X') goto yy145;
   goto yy1236;
  }
 } else {
  if (yych <= 'x') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'y') goto yy1236;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1328:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy144;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 't') goto yy1329;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1329:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= ')') {
  if (yych == ' ') goto yy1330;
  if (yych <= '(') goto yy4;
  goto yy140;
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') goto yy4;
   goto yy145;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1330:
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy1331;
 if (yych != 'o') goto yy57;
yy1331:
 ;
 yych = *++cursor;
 if (yych == 'F') goto yy1332;
 if (yych != 'f') goto yy57;
yy1332:
 ;
 yych = *++cursor;
 if (yych != ' ') goto yy57;
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '1') goto yy1334;
 if (yych <= '2') goto yy1335;
 if (yych <= '9') goto yy1336;
 goto yy57;
yy1334:
 ;
 yyaccept = 28;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') goto yy1337;
 if (yych <= '9') goto yy1336;
 goto yy1337;
yy1335:
 ;
 yyaccept = 28;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') goto yy1337;
 if (yych >= '5') goto yy1337;
yy1336:
 ;
 yyaccept = 28;
 s->ptr = ++cursor;
 if ((s->lim - cursor) < 5) return 257;;
 yych = *cursor;
yy1337:
 ;
 if (yych <= 'A') {
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy1336;
   goto yy1295;
  } else {
   if (yych <= ' ') goto yy1336;
   if (yych <= '@') goto yy1295;
  }
 } else {
  if (yych <= '`') {
   if (yych != 'P') goto yy1295;
  } else {
   if (yych <= 'a') goto yy1338;
   if (yych != 'p') goto yy1295;
  }
 }
yy1338:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych != '.') goto yy57;
 } else {
  if (yych <= 'M') goto yy1340;
  if (yych == 'm') goto yy1340;
  goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych == 'M') goto yy1340;
 if (yych != 'm') goto yy57;
yy1340:
 ;
 yych = *++cursor;
 if (yych <= 0x1F) {
  if (yych <= 0x00) goto yy1303;
  if (yych == '\t') goto yy1303;
  goto yy57;
 } else {
  if (yych <= ' ') goto yy1303;
  if (yych != '.') goto yy57;
 }
 ;
 yych = *++cursor;
 if (yych <= '\t') {
  if (yych <= 0x00) goto yy1303;
  if (yych <= 0x08) goto yy57;
  goto yy1303;
 } else {
  if (yych == ' ') goto yy1303;
  goto yy57;
 }
yy1342:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'Q') goto yy143;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'r') goto yy1343;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1343:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy144;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 't') goto yy1344;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1344:
 ;
 yych = *++cursor;
 if (yych <= 'H') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'G') goto yy145;
   goto yy1216;
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'h') goto yy1216;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1345:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'R') goto yy143;
   goto yy1348;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 's') goto yy1348;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1346:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy143;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 't') goto yy1347;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1347:
 ;
 yych = *++cursor;
 if (yych <= 'H') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'G') goto yy144;
   goto yy1239;
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'h') goto yy1239;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1348:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy144;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 't') goto yy1349;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1349:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '(') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy4;
   goto yy1207;
  } else {
   if (yych != ' ') goto yy4;
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy145;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1350:
 ;
 yych = *++cursor;
 if (yych == 'D') goto yy1351;
 if (yych != 'd') goto yy1208;
yy1351:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1352;
 if (yych != 'a') goto yy57;
yy1352:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1353;
 if (yych != 'y') goto yy57;
yy1353:
 ;
 yyaccept = 26;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'R') {
  if (yych != ' ') goto yy1118;
 } else {
  if (yych <= 'S') goto yy1143;
  if (yych == 's') goto yy1143;
  goto yy1118;
 }
 ;
 yych = *++cursor;
 if (yych == 'O') goto yy1355;
 if (yych != 'o') goto yy57;
yy1355:
 ;
 yych = *++cursor;
 if (yych == 'F') goto yy1316;
 if (yych == 'f') goto yy1316;
 goto yy57;
yy1356:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy194;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
    goto yy194;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
    goto yy194;
   } else {
    if (yych != 'R') goto yy143;
   }
  } else {
   if (yych <= 'q') {
    if (yych <= '`') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'r') goto yy1357;
    if (yych <= 'z') goto yy143;
    goto yy194;
   }
  }
 }
yy1357:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'T') goto yy144;
  }
 } else {
  if (yych <= 't') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'u') goto yy1358;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1358:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy145;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy1359;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1359:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'R') goto yy1360;
  if (yych != 'r') goto yy4;
 }
yy1360:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy206;
 if (yych == 'y') goto yy206;
 goto yy57;
yy1361:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'A') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'B') goto yy1356;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'b') goto yy1379;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1362:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych <= '.') {
   if (yych <= ')') {
    if (yych <= '(') goto yy4;
    goto yy140;
   } else {
    if (yych == '-') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= '@') {
    if (yych <= '/') goto yy148;
    goto yy4;
   } else {
    if (yych == 'F') goto yy1346;
    goto yy142;
   }
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') {
    if (yych <= 'R') goto yy1345;
    goto yy142;
   } else {
    if (yych == '_') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= 'q') {
    if (yych == 'f') goto yy1375;
    goto yy147;
   } else {
    if (yych <= 'r') goto yy1374;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1363:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'U') goto yy1342;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 't') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'u') goto yy1371;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1364:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'N') {
  if (yych <= '.') {
   if (yych <= ')') {
    if (yych <= '(') goto yy4;
    goto yy140;
   } else {
    if (yych == '-') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= '@') {
    if (yych <= '/') goto yy148;
    goto yy4;
   } else {
    if (yych == 'I') goto yy1325;
    goto yy142;
   }
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') {
    if (yych <= 'O') goto yy1324;
    goto yy142;
   } else {
    if (yych == '_') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= 'n') {
    if (yych == 'i') goto yy1366;
    goto yy147;
   } else {
    if (yych <= 'o') goto yy1365;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1365:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy1328;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'n') goto yy1369;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1366:
 ;
 yyaccept = 4;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy167;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy167;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'D') goto yy1326;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy167;
   goto yy148;
  } else {
   if (yych <= 'c') {
    if (yych <= '`') goto yy167;
    goto yy151;
   } else {
    if (yych <= 'd') goto yy1367;
    if (yych <= 'z') goto yy151;
    goto yy167;
   }
  }
 }
yy1367:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'A') goto yy1327;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy1368;
   if (yych <= 'z') goto yy152;
   goto yy4;
  }
 }
yy1368:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'X') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'Y') goto yy1236;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'x') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'y') goto yy1265;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1369:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1329;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 't') goto yy1370;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1370:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= '(') {
   if (yych == ' ') goto yy1330;
   goto yy4;
  } else {
   if (yych <= ')') goto yy140;
   if (yych == '-') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '/') goto yy148;
   if (yych <= '@') goto yy4;
   if (yych <= 'Z') goto yy145;
   goto yy4;
  } else {
   if (yych <= '_') goto yy148;
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy153;
   goto yy4;
  }
 }
yy1371:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'R') goto yy1343;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'q') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'r') goto yy1372;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1372:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1344;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 't') goto yy1373;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1373:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'H') goto yy1216;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'g') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'h') goto yy1228;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1374:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'R') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'S') goto yy1348;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'r') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 's') goto yy1377;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1375:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1347;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 't') goto yy1376;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1376:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'H') goto yy1239;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'g') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'h') goto yy1268;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1377:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1349;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 't') goto yy1378;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1378:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '-') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy1207;
   if (yych <= 0x1F) goto yy4;
   goto yy1350;
  } else {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  }
 } else {
  if (yych <= 'Z') {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  } else {
   if (yych <= '_') {
    if (yych <= '^') goto yy4;
    goto yy148;
   } else {
    if (yych <= '`') goto yy4;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1379:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
    goto yy372;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'Q') {
    if (yych <= '@') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'R') goto yy1357;
    if (yych <= 'Z') goto yy143;
    goto yy194;
   }
  } else {
   if (yych <= 'q') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy151;
   } else {
    if (yych <= 'r') goto yy1380;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy1380:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'U') goto yy1358;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 't') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'u') goto yy1381;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1381:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'A') goto yy1359;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy1382;
   if (yych <= 'z') goto yy153;
   goto yy4;
  }
 }
yy1382:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'R') goto yy1360;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'r') goto yy1383;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1383:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy206;
 if (yych == 'y') goto yy377;
 goto yy155;
yy1384:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
yy1385:
 ;
 ++cursor;
 if (s->lim <= cursor) return 257;;
 yych = *cursor;
 ;
 if (yych <= '/') goto yy1387;
 if (yych <= '9') goto yy1385;
yy1387:
 ;
# 1057 "ext/date/lib/parse_date.re"
 {
  timelib_ull i;

  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_relative = 1; };
  { s->time->have_date = 0; s->time->d = 0; s->time->m = 0; s->time->y = 0; };
  { s->time->have_time = 0; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; };
  { s->cur = cursor; if (s->time->have_zone) { s->time->have_zone > 1 ? add_error(s, "Double timezone specification") : add_warning(s, "Double timezone specification"); free(str); s->time->have_zone++; return 999; } else { s->time->have_zone++; } };

  i = timelib_get_unsigned_nr((char **) &ptr, 24);
  s->time->y = 1970;
  s->time->m = 1;
  s->time->d = 1;
  s->time->h = s->time->i = s->time->s = 0;
  s->time->f = 0.0;
  s->time->relative.s += i;
  s->time->is_localtime = 1;
  s->time->zone_type = 1;
  s->time->z = 0;

  free(str);
  return 310;
 }
# 21390 "ext/date/lib/parse_date.c"
yy1388:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'M') goto yy142;
   goto yy1429;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'n') goto yy1429;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1389:
 ;
 yych = *++cursor;
 if (yych <= 'U') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == 'I') goto yy1421;
   if (yych <= 'T') goto yy142;
   goto yy1422;
  }
 } else {
  if (yych <= 'i') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   if (yych <= 'h') goto yy142;
   goto yy1421;
  } else {
   if (yych == 'u') goto yy1422;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1390:
 ;
 yych = *++cursor;
 if (yych <= 'M') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == 'D') goto yy1410;
   if (yych <= 'L') goto yy142;
   goto yy1411;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   if (yych <= 'c') goto yy142;
   goto yy1410;
  } else {
   if (yych == 'm') goto yy1411;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1391:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy142;
   goto yy1406;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'e') goto yy1406;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1392:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy142;
   goto yy1402;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'e') goto yy1402;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1393:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy1065;
  goto yy57;
 } else {
  if (yych <= '9') goto yy1396;
  if (yych <= ':') goto yy1065;
  goto yy57;
 }
yy1394:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy1065;
  goto yy57;
 } else {
  if (yych <= '4') goto yy1396;
  if (yych == ':') goto yy1065;
  goto yy57;
 }
yy1395:
 ;
 yych = *++cursor;
 if (yych == '.') goto yy1065;
 if (yych == ':') goto yy1065;
 goto yy57;
yy1396:
 ;
 yych = *++cursor;
 if (yych <= '/') {
  if (yych == '.') goto yy1065;
  goto yy57;
 } else {
  if (yych <= '5') goto yy1397;
  if (yych == ':') goto yy1065;
  goto yy57;
 }
yy1397:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych >= ':') goto yy57;
 ;
 yyaccept = 24;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') goto yy1068;
 if (yych <= '5') goto yy1399;
 if (yych <= '6') goto yy1400;
 goto yy1068;
yy1399:
 ;
 yych = *++cursor;
 if (yych <= '/') goto yy57;
 if (yych <= '9') goto yy1401;
 goto yy57;
yy1400:
 ;
 yych = *++cursor;
 if (yych != '0') goto yy57;
yy1401:
 ;
 yych = *++cursor;
 goto yy1076;
yy1402:
 ;
 yych = *++cursor;
 if (yych <= 'L') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'K') goto yy143;
  }
 } else {
  if (yych <= 'k') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'l') goto yy1403;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1403:
 ;
 yych = *++cursor;
 if (yych <= 'F') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'E') goto yy144;
  }
 } else {
  if (yych <= 'e') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'f') goto yy1404;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1404:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy145;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 't') goto yy1405;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1405:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'H') goto yy1206;
  if (yych == 'h') goto yy1206;
  goto yy4;
 }
yy1406:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych <= ')') {
   if (yych <= '(') goto yy167;
   goto yy140;
  } else {
   if (yych <= '@') goto yy167;
   if (yych <= 'R') goto yy143;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy167;
   goto yy143;
  } else {
   if (yych <= 's') goto yy1407;
   if (yych <= 'z') goto yy143;
   goto yy167;
  }
 }
yy1407:
 ;
 yych = *++cursor;
 if (yych <= 'D') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'C') goto yy144;
  }
 } else {
  if (yych <= 'c') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'd') goto yy1408;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1408:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy145;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy1409;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1409:
 ;
 yych = *++cursor;
 if (yych <= 'X') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'Y') goto yy173;
  if (yych == 'y') goto yy173;
  goto yy4;
 }
yy1410:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
  goto yy1418;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy143;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy1418;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1411:
 ;
 yych = *++cursor;
 if (yych <= 'O') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'N') goto yy143;
  }
 } else {
  if (yych <= 'n') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'o') goto yy1412;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1412:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'Q') goto yy144;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'r') goto yy1413;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1413:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'Q') goto yy145;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'r') goto yy1414;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1414:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'N') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'O') goto yy1415;
  if (yych != 'o') goto yy4;
 }
yy1415:
 ;
 yych = *++cursor;
 if (yych == 'W') goto yy1416;
 if (yych != 'w') goto yy57;
yy1416:
 ;
 ++cursor;
yy1417:
 ;
# 1045 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_relative = 1; };
  { s->time->have_time = 0; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; };

  s->time->relative.d = 1;
  free(str);
  return 310;
 }
# 21837 "ext/date/lib/parse_date.c"
yy1418:
 ;
 yych = *++cursor;
 if (yych <= 'Y') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'X') goto yy144;
  }
 } else {
  if (yych <= 'x') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'y') goto yy1419;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1419:
 ;
 ++cursor;
 if ((yych = *cursor) <= '@') {
  if (yych == ')') goto yy140;
 } else {
  if (yych <= 'Z') goto yy145;
  if (yych <= '`') goto yy1420;
  if (yych <= 'z') goto yy145;
 }
yy1420:
 ;
# 1035 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_time = 0; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; };

  free(str);
  return 310;
 }
# 21881 "ext/date/lib/parse_date.c"
yy1421:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych <= 'Q') goto yy143;
   if (yych <= 'R') goto yy1427;
   goto yy1428;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'r') goto yy1427;
   if (yych <= 's') goto yy1428;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1422:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= ')') {
   if (yych <= '(') goto yy167;
   goto yy140;
  } else {
   if (yych <= '@') goto yy167;
   if (yych <= 'Q') goto yy143;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy167;
   goto yy143;
  } else {
   if (yych <= 'r') goto yy1423;
   if (yych <= 'z') goto yy143;
   goto yy167;
  }
 }
yy1423:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'R') goto yy144;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 's') goto yy1424;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1424:
 ;
 yych = *++cursor;
 if (yych <= 'D') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'C') goto yy145;
  }
 } else {
  if (yych <= 'c') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'd') goto yy1425;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1425:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'A') goto yy1426;
  if (yych != 'a') goto yy4;
 }
yy1426:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy173;
 if (yych == 'y') goto yy173;
 goto yy57;
yy1427:
 ;
 yych = *++cursor;
 if (yych <= 'D') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'C') goto yy144;
   goto yy1239;
  }
 } else {
  if (yych <= 'c') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'd') goto yy1239;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1428:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '(') {
  if (yych <= '\t') {
   if (yych <= 0x08) goto yy4;
   goto yy1105;
  } else {
   if (yych == ' ') goto yy1105;
   goto yy4;
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy144;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1429:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy143;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 't') goto yy1430;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1430:
 ;
 yych = *++cursor;
 if (yych <= 'H') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'G') goto yy144;
   goto yy1239;
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'h') goto yy1239;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1431:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy1429;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'n') goto yy1461;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1432:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'T') {
  if (yych <= '.') {
   if (yych <= ')') {
    if (yych <= '(') goto yy4;
    goto yy140;
   } else {
    if (yych == '-') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= '@') {
    if (yych <= '/') goto yy148;
    goto yy4;
   } else {
    if (yych == 'I') goto yy1421;
    goto yy142;
   }
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') {
    if (yych <= 'U') goto yy1422;
    goto yy142;
   } else {
    if (yych == '_') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= 't') {
    if (yych == 'i') goto yy1453;
    goto yy147;
   } else {
    if (yych <= 'u') goto yy1454;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1433:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'L') {
  if (yych <= '.') {
   if (yych <= ')') {
    if (yych <= '(') goto yy4;
    goto yy140;
   } else {
    if (yych == '-') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= '@') {
    if (yych <= '/') goto yy148;
    goto yy4;
   } else {
    if (yych == 'D') goto yy1410;
    goto yy142;
   }
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') {
    if (yych <= 'M') goto yy1411;
    goto yy142;
   } else {
    if (yych == '_') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= 'l') {
    if (yych == 'd') goto yy1444;
    goto yy147;
   } else {
    if (yych <= 'm') goto yy1445;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1434:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'E') goto yy1406;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'e') goto yy1440;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1435:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'E') goto yy1402;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'e') goto yy1436;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1436:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'K') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'L') goto yy1403;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'k') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'l') goto yy1437;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1437:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'E') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'F') goto yy1404;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'e') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'f') goto yy1438;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1438:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1405;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 't') goto yy1439;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1439:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'H') goto yy1206;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'h') goto yy1224;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1440:
 ;
 yyaccept = 4;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'R') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy167;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy167;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'S') goto yy1407;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy167;
   goto yy148;
  } else {
   if (yych <= 'r') {
    if (yych <= '`') goto yy167;
    goto yy151;
   } else {
    if (yych <= 's') goto yy1441;
    if (yych <= 'z') goto yy151;
    goto yy167;
   }
  }
 }
yy1441:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'D') goto yy1408;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'c') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'd') goto yy1442;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1442:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'A') goto yy1409;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy1443;
   if (yych <= 'z') goto yy153;
   goto yy4;
  }
 }
yy1443:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'X') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'Y') goto yy173;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'y') goto yy186;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1444:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'A') goto yy1418;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy1451;
   if (yych <= 'z') goto yy151;
   goto yy4;
  }
 }
yy1445:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'N') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'O') goto yy1412;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'n') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'o') goto yy1446;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1446:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'R') goto yy1413;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'q') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'r') goto yy1447;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1447:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'R') goto yy1414;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'q') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'r') goto yy1448;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1448:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'N') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'O') goto yy1415;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'o') goto yy1449;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1449:
 ;
 yych = *++cursor;
 if (yych == 'W') goto yy1416;
 if (yych != 'w') goto yy155;
 ;
 yyaccept = 29;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= '.') {
  if (yych == '-') goto yy148;
  goto yy1417;
 } else {
  if (yych <= '/') goto yy148;
  if (yych == '_') goto yy148;
  goto yy1417;
 }
yy1451:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'X') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'Y') goto yy1419;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'x') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'y') goto yy1452;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1452:
 ;
 yyaccept = 30;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy1420;
  } else {
   if (yych == '.') goto yy1420;
   goto yy148;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy1420;
   if (yych <= 'Z') goto yy145;
   goto yy1420;
  } else {
   if (yych <= '_') goto yy148;
   if (yych <= '`') goto yy1420;
   if (yych <= 'z') goto yy153;
   goto yy1420;
  }
 }
yy1453:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'R') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych <= '/') {
    if (yych <= '.') goto yy4;
    goto yy148;
   } else {
    if (yych <= '@') goto yy4;
    if (yych <= 'Q') goto yy143;
    goto yy1427;
   }
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') {
    if (yych <= 'S') goto yy1428;
    goto yy143;
   } else {
    if (yych == '_') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= 'r') {
    if (yych <= 'q') goto yy151;
    goto yy1459;
   } else {
    if (yych <= 's') goto yy1460;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1454:
 ;
 yyaccept = 4;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy167;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy167;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'R') goto yy1423;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy167;
   goto yy148;
  } else {
   if (yych <= 'q') {
    if (yych <= '`') goto yy167;
    goto yy151;
   } else {
    if (yych <= 'r') goto yy1455;
    if (yych <= 'z') goto yy151;
    goto yy167;
   }
  }
 }
yy1455:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'R') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'S') goto yy1424;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'r') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 's') goto yy1456;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1456:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'D') goto yy1425;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'c') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'd') goto yy1457;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1457:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'A') goto yy1426;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy1458;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1458:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy173;
 if (yych == 'y') goto yy186;
 goto yy155;
yy1459:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'D') goto yy1239;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'c') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'd') goto yy1268;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1460:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '-') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy1105;
   if (yych <= 0x1F) goto yy4;
   goto yy1105;
  } else {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  }
 } else {
  if (yych <= 'Z') {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  } else {
   if (yych <= '_') {
    if (yych <= '^') goto yy4;
    goto yy148;
   } else {
    if (yych <= '`') goto yy4;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1461:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1430;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 't') goto yy1462;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1462:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'H') goto yy1239;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'g') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'h') goto yy1268;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1463:
 ;
 yych = *++cursor;
 if (yych <= 'Y') {
  if (yych <= '@') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == 'R') goto yy1475;
   if (yych <= 'X') goto yy142;
   goto yy1476;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   if (yych <= 'q') goto yy142;
   goto yy1475;
  } else {
   if (yych == 'y') goto yy1476;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1464:
 ;
 yych = *++cursor;
 if (yych <= 'D') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'C') goto yy142;
   goto yy1469;
  }
 } else {
  if (yych <= 'c') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'd') goto yy1469;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1465:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'M') goto yy142;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'n') goto yy1466;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1466:
 ;
 yych = *++cursor;
 if (yych <= 'D') {
  if (yych <= ')') {
   if (yych <= '(') goto yy167;
   goto yy140;
  } else {
   if (yych <= '@') goto yy167;
   if (yych <= 'C') goto yy143;
  }
 } else {
  if (yych <= 'c') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy167;
   goto yy143;
  } else {
   if (yych <= 'd') goto yy1467;
   if (yych <= 'z') goto yy143;
   goto yy167;
  }
 }
yy1467:
 ;
 yych = *++cursor;
 if (yych <= 'A') {
  if (yych == ')') goto yy140;
  if (yych <= '@') goto yy4;
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') goto yy144;
   goto yy4;
  } else {
   if (yych <= 'a') goto yy1468;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1468:
 ;
 yych = *++cursor;
 if (yych <= 'Y') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'X') goto yy145;
   goto yy1236;
  }
 } else {
  if (yych <= 'x') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'y') goto yy1236;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1469:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'M') goto yy143;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'n') goto yy1470;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1470:
 ;
 yych = *++cursor;
 if (yych <= 'I') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'H') goto yy144;
  }
 } else {
  if (yych <= 'h') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'i') goto yy1471;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1471:
 ;
 yych = *++cursor;
 if (yych <= 'G') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'F') goto yy145;
  }
 } else {
  if (yych <= 'f') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'g') goto yy1472;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1472:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'H') goto yy1473;
  if (yych != 'h') goto yy4;
 }
yy1473:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy1474;
 if (yych != 't') goto yy57;
yy1474:
 ;
 yych = *++cursor;
 goto yy1420;
yy1475:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy194;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
    goto yy194;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
    goto yy194;
   } else {
    if (yych == 'C') goto yy1477;
    goto yy143;
   }
  } else {
   if (yych <= 'b') {
    if (yych <= '`') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'c') goto yy1477;
    if (yych <= 'z') goto yy143;
    goto yy194;
   }
  }
 }
yy1476:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '-') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy196;
   if (yych <= 0x1F) goto yy194;
   goto yy196;
  } else {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy194;
   goto yy197;
  }
 } else {
  if (yych <= '@') {
   if (yych == '/') goto yy194;
   if (yych <= '9') goto yy196;
   goto yy194;
  } else {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy194;
   if (yych <= 'z') goto yy143;
   goto yy194;
  }
 }
yy1477:
 ;
 yych = *++cursor;
 if (yych <= 'H') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'G') goto yy144;
   goto yy396;
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'h') goto yy396;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1478:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'X') {
  if (yych <= '.') {
   if (yych <= ')') {
    if (yych <= '(') goto yy4;
    goto yy140;
   } else {
    if (yych == '-') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= '@') {
    if (yych <= '/') goto yy148;
    goto yy4;
   } else {
    if (yych == 'R') goto yy1475;
    goto yy142;
   }
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'Z') {
    if (yych <= 'Y') goto yy1476;
    goto yy142;
   } else {
    if (yych == '_') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= 'x') {
    if (yych == 'r') goto yy1490;
    goto yy147;
   } else {
    if (yych <= 'y') goto yy1491;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1479:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'D') goto yy1469;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'c') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'd') goto yy1484;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1480:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy1466;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'n') goto yy1481;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1481:
 ;
 yyaccept = 4;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy167;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy167;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'D') goto yy1467;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy167;
   goto yy148;
  } else {
   if (yych <= 'c') {
    if (yych <= '`') goto yy167;
    goto yy151;
   } else {
    if (yych <= 'd') goto yy1482;
    if (yych <= 'z') goto yy151;
    goto yy167;
   }
  }
 }
yy1482:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= '@') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'A') goto yy1468;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= '`') goto yy4;
   if (yych <= 'a') goto yy1483;
   if (yych <= 'z') goto yy152;
   goto yy4;
  }
 }
yy1483:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'X') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'Y') goto yy1236;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'x') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'y') goto yy1265;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1484:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy1470;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'n') goto yy1485;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1485:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'H') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'I') goto yy1471;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'h') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'i') goto yy1486;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1486:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'F') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'G') goto yy1472;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'f') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'g') goto yy1487;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1487:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'H') goto yy1473;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'h') goto yy1488;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1488:
 ;
 yych = *++cursor;
 if (yych == 'T') goto yy1474;
 if (yych != 't') goto yy155;
 ;
 yyaccept = 30;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= '.') {
  if (yych == '-') goto yy148;
  goto yy1420;
 } else {
  if (yych <= '/') goto yy148;
  if (yych == '_') goto yy148;
  goto yy1420;
 }
yy1490:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
    goto yy372;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'B') {
    if (yych <= '@') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'C') goto yy1477;
    if (yych <= 'Z') goto yy143;
    goto yy194;
   }
  } else {
   if (yych <= 'b') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy151;
   } else {
    if (yych <= 'c') goto yy1492;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy1491:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '.') {
  if (yych <= ' ') {
   if (yych == '\t') goto yy196;
   if (yych <= 0x1F) goto yy194;
   goto yy196;
  } else {
   if (yych <= ')') {
    if (yych <= '(') goto yy194;
    goto yy140;
   } else {
    if (yych <= ',') goto yy194;
    if (yych <= '-') goto yy372;
    goto yy196;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '/') goto yy148;
   if (yych <= '9') goto yy196;
   if (yych <= '@') goto yy194;
   goto yy143;
  } else {
   if (yych <= '_') {
    if (yych <= '^') goto yy194;
    goto yy148;
   } else {
    if (yych <= '`') goto yy194;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy1492:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'H') goto yy396;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'g') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'h') goto yy407;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1493:
 ;
 yych = *++cursor;
 if (yych <= 'W') {
  if (yych <= 'N') {
   if (yych == ')') goto yy140;
   if (yych <= '@') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'O') goto yy1501;
   if (yych <= 'U') goto yy142;
   if (yych <= 'V') goto yy1502;
   goto yy1499;
  }
 } else {
  if (yych <= 'o') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   if (yych <= 'n') goto yy142;
   goto yy1501;
  } else {
   if (yych <= 'v') {
    if (yych <= 'u') goto yy142;
    goto yy1502;
   } else {
    if (yych <= 'w') goto yy1499;
    if (yych <= 'z') goto yy142;
    goto yy4;
   }
  }
 }
yy1494:
 ;
 yych = *++cursor;
 if (yych <= 'X') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'W') goto yy142;
   goto yy1498;
  }
 } else {
  if (yych <= 'w') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'x') goto yy1498;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1495:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'M') goto yy142;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 'n') goto yy1496;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1496:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy143;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 't') goto yy1497;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1497:
 ;
 yych = *++cursor;
 if (yych <= 'H') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'G') goto yy144;
   goto yy1239;
  }
 } else {
  if (yych <= 'g') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'h') goto yy1239;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1498:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy143;
   goto yy1428;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 't') goto yy1428;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1499:
 ;
 ++cursor;
 if ((yych = *cursor) <= '@') {
  if (yych == ')') goto yy140;
 } else {
  if (yych <= 'Z') goto yy143;
  if (yych <= '`') goto yy1500;
  if (yych <= 'z') goto yy143;
 }
yy1500:
 ;
# 1014 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;

  free(str);
  return 310;
 }
# 23901 "ext/date/lib/parse_date.c"
yy1501:
 ;
 yych = *++cursor;
 if (yych <= 'N') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'M') goto yy143;
   goto yy1507;
  }
 } else {
  if (yych <= 'm') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 'n') goto yy1507;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1502:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= ',') {
    if (yych <= ')') goto yy140;
    goto yy194;
   } else {
    if (yych <= '-') goto yy197;
    if (yych <= '.') goto yy196;
    goto yy194;
   }
  }
 } else {
  if (yych <= 'Z') {
   if (yych <= '@') {
    if (yych <= '9') goto yy196;
    goto yy194;
   } else {
    if (yych != 'E') goto yy143;
   }
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'e') goto yy1503;
    if (yych <= 'z') goto yy143;
    goto yy194;
   }
  }
 }
yy1503:
 ;
 yych = *++cursor;
 if (yych <= 'M') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'L') goto yy144;
  }
 } else {
  if (yych <= 'l') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'm') goto yy1504;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1504:
 ;
 yych = *++cursor;
 if (yych <= 'B') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'A') goto yy145;
  }
 } else {
  if (yych <= 'a') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'b') goto yy1505;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1505:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'E') goto yy1506;
  if (yych != 'e') goto yy4;
 }
yy1506:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy206;
 if (yych == 'r') goto yy206;
 goto yy57;
yy1507:
 ;
 ++cursor;
 if ((yych = *cursor) <= '@') {
  if (yych == ')') goto yy140;
 } else {
  if (yych <= 'Z') goto yy144;
  if (yych <= '`') goto yy1508;
  if (yych <= 'z') goto yy144;
 }
yy1508:
 ;
# 1023 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_time = 0; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; };
  { if (s->time->have_time) { add_error(s, "Double time specification"); free(str); return 999; } else { s->time->have_time = 1; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; } };
  s->time->h = 12;

  free(str);
  return 310;
 }
# 24051 "ext/date/lib/parse_date.c"
yy1509:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'V') {
  if (yych <= '.') {
   if (yych <= ')') {
    if (yych <= '(') goto yy4;
    goto yy140;
   } else {
    if (yych == '-') goto yy148;
    goto yy4;
   }
  } else {
   if (yych <= 'N') {
    if (yych <= '/') goto yy148;
    if (yych <= '@') goto yy4;
    goto yy142;
   } else {
    if (yych <= 'O') goto yy1501;
    if (yych <= 'U') goto yy142;
    goto yy1502;
   }
  }
 } else {
  if (yych <= 'n') {
   if (yych <= '^') {
    if (yych <= 'W') goto yy1499;
    if (yych <= 'Z') goto yy142;
    goto yy4;
   } else {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy4;
    goto yy147;
   }
  } else {
   if (yych <= 'v') {
    if (yych <= 'o') goto yy1516;
    if (yych <= 'u') goto yy147;
    goto yy1517;
   } else {
    if (yych <= 'w') goto yy1515;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1510:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'W') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'X') goto yy1498;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'w') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'x') goto yy1514;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1511:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy1496;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 'n') goto yy1512;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1512:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1497;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 't') goto yy1513;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1513:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'G') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'H') goto yy1239;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'g') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'h') goto yy1268;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1514:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1428;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 't') goto yy1460;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1515:
 ;
 yyaccept = 31;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy1500;
  } else {
   if (yych == '.') goto yy1500;
   goto yy148;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy1500;
   if (yych <= 'Z') goto yy143;
   goto yy1500;
  } else {
   if (yych <= '_') goto yy148;
   if (yych <= '`') goto yy1500;
   if (yych <= 'z') goto yy151;
   goto yy1500;
  }
 }
yy1516:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'M') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'N') goto yy1507;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'm') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 'n') goto yy1522;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1517:
 ;
 yyaccept = 5;
 yych = *(s->ptr = ++cursor);
 if (yych <= '9') {
  if (yych <= '(') {
   if (yych <= '\t') {
    if (yych <= 0x08) goto yy194;
    goto yy196;
   } else {
    if (yych == ' ') goto yy196;
    goto yy194;
   }
  } else {
   if (yych <= '-') {
    if (yych <= ')') goto yy140;
    if (yych <= ',') goto yy194;
    goto yy372;
   } else {
    if (yych == '/') goto yy148;
    goto yy196;
   }
  }
 } else {
  if (yych <= '^') {
   if (yych <= 'D') {
    if (yych <= '@') goto yy194;
    goto yy143;
   } else {
    if (yych <= 'E') goto yy1503;
    if (yych <= 'Z') goto yy143;
    goto yy194;
   }
  } else {
   if (yych <= 'd') {
    if (yych <= '_') goto yy148;
    if (yych <= '`') goto yy194;
    goto yy151;
   } else {
    if (yych <= 'e') goto yy1518;
    if (yych <= 'z') goto yy151;
    goto yy194;
   }
  }
 }
yy1518:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'L') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'M') goto yy1504;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'l') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'm') goto yy1519;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1519:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'A') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'B') goto yy1505;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'b') goto yy1520;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1520:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'E') goto yy1506;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'e') goto yy1521;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1521:
 ;
 yych = *++cursor;
 if (yych == 'R') goto yy206;
 if (yych == 'r') goto yy377;
 goto yy155;
yy1522:
 ;
 yyaccept = 32;
 yych = *(s->ptr = ++cursor);
 if (yych <= '/') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy1508;
  } else {
   if (yych == '.') goto yy1508;
   goto yy148;
  }
 } else {
  if (yych <= '^') {
   if (yych <= '@') goto yy1508;
   if (yych <= 'Z') goto yy144;
   goto yy1508;
  } else {
   if (yych <= '_') goto yy148;
   if (yych <= '`') goto yy1508;
   if (yych <= 'z') goto yy152;
   goto yy1508;
  }
 }
yy1523:
 ;
 yych = *++cursor;
 if (yych <= 'S') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'R') goto yy142;
  }
 } else {
  if (yych <= 'r') {
   if (yych <= 'Z') goto yy142;
   if (yych <= '`') goto yy4;
   goto yy142;
  } else {
   if (yych <= 's') goto yy1524;
   if (yych <= 'z') goto yy142;
   goto yy4;
  }
 }
yy1524:
 ;
 yych = *++cursor;
 if (yych <= 'T') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'S') goto yy143;
  }
 } else {
  if (yych <= 's') {
   if (yych <= 'Z') goto yy143;
   if (yych <= '`') goto yy4;
   goto yy143;
  } else {
   if (yych <= 't') goto yy1525;
   if (yych <= 'z') goto yy143;
   goto yy4;
  }
 }
yy1525:
 ;
 yych = *++cursor;
 if (yych <= 'E') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'D') goto yy144;
  }
 } else {
  if (yych <= 'd') {
   if (yych <= 'Z') goto yy144;
   if (yych <= '`') goto yy4;
   goto yy144;
  } else {
   if (yych <= 'e') goto yy1526;
   if (yych <= 'z') goto yy144;
   goto yy4;
  }
 }
yy1526:
 ;
 yych = *++cursor;
 if (yych <= 'R') {
  if (yych <= ')') {
   if (yych <= '(') goto yy4;
   goto yy140;
  } else {
   if (yych <= '@') goto yy4;
   if (yych <= 'Q') goto yy145;
  }
 } else {
  if (yych <= 'q') {
   if (yych <= 'Z') goto yy145;
   if (yych <= '`') goto yy4;
   goto yy145;
  } else {
   if (yych <= 'r') goto yy1527;
   if (yych <= 'z') goto yy145;
   goto yy4;
  }
 }
yy1527:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych == ')') goto yy140;
  goto yy4;
 } else {
  if (yych <= 'D') goto yy1528;
  if (yych != 'd') goto yy4;
 }
yy1528:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1529;
 if (yych != 'a') goto yy57;
yy1529:
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1530;
 if (yych != 'y') goto yy57;
yy1530:
 ;
 ++cursor;
yy1531:
 ;
# 1002 "ext/date/lib/parse_date.re"
 {
  ;
  s->cur = cursor; str = timelib_string(s); ptr = str;
  { s->time->have_relative = 1; };
  { s->time->have_time = 0; s->time->h = 0; s->time->i = 0; s->time->s = 0; s->time->f = 0; };

  s->time->relative.d = -1;
  free(str);
  return 310;
 }
# 24595 "ext/date/lib/parse_date.c"
yy1532:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'R') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy142;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'S') goto yy1524;
   if (yych <= 'Z') goto yy142;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'r') {
    if (yych <= '`') goto yy4;
    goto yy147;
   } else {
    if (yych <= 's') goto yy1533;
    if (yych <= 'z') goto yy147;
    goto yy4;
   }
  }
 }
yy1533:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'S') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy143;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'T') goto yy1525;
   if (yych <= 'Z') goto yy143;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 's') {
    if (yych <= '`') goto yy4;
    goto yy151;
   } else {
    if (yych <= 't') goto yy1534;
    if (yych <= 'z') goto yy151;
    goto yy4;
   }
  }
 }
yy1534:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'D') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy144;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'E') goto yy1526;
   if (yych <= 'Z') goto yy144;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'd') {
    if (yych <= '`') goto yy4;
    goto yy152;
   } else {
    if (yych <= 'e') goto yy1535;
    if (yych <= 'z') goto yy152;
    goto yy4;
   }
  }
 }
yy1535:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'Q') {
  if (yych <= '-') {
   if (yych == ')') goto yy140;
   if (yych <= ',') goto yy4;
   goto yy148;
  } else {
   if (yych == '/') goto yy148;
   if (yych <= '@') goto yy4;
   goto yy145;
  }
 } else {
  if (yych <= '_') {
   if (yych <= 'R') goto yy1527;
   if (yych <= 'Z') goto yy145;
   if (yych <= '^') goto yy4;
   goto yy148;
  } else {
   if (yych <= 'q') {
    if (yych <= '`') goto yy4;
    goto yy153;
   } else {
    if (yych <= 'r') goto yy1536;
    if (yych <= 'z') goto yy153;
    goto yy4;
   }
  }
 }
yy1536:
 ;
 yyaccept = 0;
 yych = *(s->ptr = ++cursor);
 if (yych <= 'C') {
  if (yych <= ',') {
   if (yych == ')') goto yy140;
   goto yy4;
  } else {
   if (yych == '.') goto yy4;
   if (yych <= '/') goto yy148;
   goto yy4;
  }
 } else {
  if (yych <= '`') {
   if (yych <= 'D') goto yy1528;
   if (yych == '_') goto yy148;
   goto yy4;
  } else {
   if (yych == 'd') goto yy1537;
   if (yych <= 'z') goto yy154;
   goto yy4;
  }
 }
yy1537:
 ;
 yych = *++cursor;
 if (yych == 'A') goto yy1529;
 if (yych != 'a') goto yy155;
 ;
 yych = *++cursor;
 if (yych == 'Y') goto yy1530;
 if (yych != 'y') goto yy155;
 ;
 yyaccept = 33;
 yych = *(s->ptr = ++cursor);
 if (yybm[0+yych] & 16) {
  goto yy154;
 }
 if (yych <= '.') {
  if (yych == '-') goto yy148;
  goto yy1531;
 } else {
  if (yych <= '/') goto yy148;
  if (yych == '_') goto yy148;
  goto yy1531;
 }
}
# 1775 "ext/date/lib/parse_date.re"

}



timelib_time* timelib_strtotime(char *s, int len, struct timelib_error_container **errors, const timelib_tzdb *tzdb, timelib_tz_get_wrapper tz_get_wrapper)
{
 Scanner in;
 int t;
 char *e = s + len - 1;

 memset(&in, 0, sizeof(in));
 in.errors = malloc(sizeof(struct timelib_error_container));
 in.errors->warning_count = 0;
 in.errors->warning_messages = ((void *)0);
 in.errors->error_count = 0;
 in.errors->error_messages = ((void *)0);

 if (len > 0) {
  while (((*__ctype_b_loc ())[(int) ((*s))] & (unsigned short int) _ISspace) && s < e) {
   s++;
  }
  while (((*__ctype_b_loc ())[(int) ((*e))] & (unsigned short int) _ISspace) && e > s) {
   e--;
  }
 }
 if (e - s < 0) {
  in.time = timelib_time_ctor();
  add_error(&in, "Empty string");
  if (errors) {
   *errors = in.errors;
  } else {
   timelib_error_container_dtor(in.errors);
  }
  in.time->y = in.time->d = in.time->m = in.time->h = in.time->i = in.time->s = in.time->f = in.time->dst = in.time->z = -99999;
  in.time->is_localtime = in.time->zone_type = 0;
  return in.time;
 }
 e++;

 in.str = malloc((e - s) + 31);
 memset(in.str, 0, (e - s) + 31);
 memcpy(in.str, s, (e - s));
 in.lim = in.str + (e - s) + 31;
 in.cur = in.str;
 in.time = timelib_time_ctor();
 in.time->y = -99999;
 in.time->d = -99999;
 in.time->m = -99999;
 in.time->h = -99999;
 in.time->i = -99999;
 in.time->s = -99999;
 in.time->f = -99999;
 in.time->z = -99999;
 in.time->dst = -99999;
 in.tzdb = tzdb;
 in.time->is_localtime = 0;
 in.time->zone_type = 0;

 do {
  t = scan(&in, tz_get_wrapper);



 } while(t != 257);


 if (in.time->have_time && !timelib_valid_time( in.time->h, in.time->i, in.time->s)) {
  add_warning(&in, "The parsed time was invalid");
 }

 if (in.time->have_date && !timelib_valid_date( in.time->y, in.time->m, in.time->d)) {
  add_warning(&in, "The parsed date was invalid");
 }

 free(in.str);
 if (errors) {
  *errors = in.errors;
 } else {
  timelib_error_container_dtor(in.errors);
 }
 return in.time;
}







static void timelib_time_reset_fields(timelib_time *time)
{
 ((time != ((void *)0)) ? (void) (0) : __assert_fail ("time != ((void *)0)", "ext/date/lib/parse_date.re", 1867, __PRETTY_FUNCTION__));

 time->y = 1970;
 time->m = 1;
 time->d = 1;
 time->h = time->i = time->s = 0;
 time->f = 0.0;
 time->tz_info = ((void *)0);
}

static void timelib_time_reset_unset_fields(timelib_time *time)
{
 ((time != ((void *)0)) ? (void) (0) : __assert_fail ("time != ((void *)0)", "ext/date/lib/parse_date.re", 1879, __PRETTY_FUNCTION__));

 if (time->y == -99999 ) time->y = 1970;
 if (time->m == -99999 ) time->m = 1;
 if (time->d == -99999 ) time->d = 1;
 if (time->h == -99999 ) time->h = 0;
 if (time->i == -99999 ) time->i = 0;
 if (time->s == -99999 ) time->s = 0;
 if (time->f == -99999 ) time->f = 0.0;
}

timelib_time *timelib_parse_from_format(char *format, char *string, int len, timelib_error_container **errors, const timelib_tzdb *tzdb, timelib_tz_get_wrapper tz_get_wrapper)
{
 char *fptr = format;
 char *ptr = string;
 char *begin;
 timelib_sll tmp;
 Scanner in;
 Scanner *s = &in;
 int allow_extra = 0;

 memset(&in, 0, sizeof(in));
 in.errors = malloc(sizeof(struct timelib_error_container));
 in.errors->warning_count = 0;
 in.errors->warning_messages = ((void *)0);
 in.errors->error_count = 0;
 in.errors->error_messages = ((void *)0);

 in.time = timelib_time_ctor();
 in.time->y = -99999;
 in.time->d = -99999;
 in.time->m = -99999;
 in.time->h = -99999;
 in.time->i = -99999;
 in.time->s = -99999;
 in.time->f = -99999;
 in.time->z = -99999;
 in.time->dst = -99999;
 in.tzdb = tzdb;
 in.time->is_localtime = 0;
 in.time->zone_type = 0;


 while (*fptr && *ptr) {
  begin = ptr;
  switch (*fptr) {
   case 'D':
   case 'l':
    {
     const timelib_relunit* tmprel = 0;

     tmprel = timelib_lookup_relunit((char **) &ptr);
     if (!tmprel) {
      add_pbf_error(s, "A textual day could not be found", string, begin);
      break;
     } else {
      in.time->have_relative = 1;
      in.time->relative.have_weekday_relative = 1;
      in.time->relative.weekday = tmprel->multiplier;
      in.time->relative.weekday_behavior = 1;
     }
    }
    break;
   case 'd':
   case 'j':
    if ((__extension__ (__builtin_constant_p (*ptr) && !__builtin_constant_p ("0123456789") && (*ptr) == '\0' ? (char *) __rawmemchr ("0123456789", *ptr) : __builtin_strchr ("0123456789", *ptr))) == ((void *)0)) { add_pbf_error(s, "Unexpected data found.", string, begin); };
    if ((s->time->d = timelib_get_nr((char **) &ptr, 2)) == -99999) {
     add_pbf_error(s, "A two digit day could not be found", string, begin);
    }
    break;
   case 'S':
    timelib_skip_day_suffix((char **) &ptr);
    break;
   case 'z':
    if ((__extension__ (__builtin_constant_p (*ptr) && !__builtin_constant_p ("0123456789") && (*ptr) == '\0' ? (char *) __rawmemchr ("0123456789", *ptr) : __builtin_strchr ("0123456789", *ptr))) == ((void *)0)) { add_pbf_error(s, "Unexpected data found.", string, begin); };
    if ((tmp = timelib_get_nr((char **) &ptr, 3)) == -99999) {
     add_pbf_error(s, "A three digit day-of-year could not be found", string, begin);
    } else {
     s->time->m = 1;
     s->time->d = tmp + 1;
     timelib_do_normalize(s->time);
    }
    break;

   case 'm':
   case 'n':
    if ((__extension__ (__builtin_constant_p (*ptr) && !__builtin_constant_p ("0123456789") && (*ptr) == '\0' ? (char *) __rawmemchr ("0123456789", *ptr) : __builtin_strchr ("0123456789", *ptr))) == ((void *)0)) { add_pbf_error(s, "Unexpected data found.", string, begin); };
    if ((s->time->m = timelib_get_nr((char **) &ptr, 2)) == -99999) {
     add_pbf_error(s, "A two digit month could not be found", string, begin);
    }
    break;
   case 'M':
   case 'F':
    tmp = timelib_lookup_month((char **) &ptr);
    if (!tmp) {
     add_pbf_error(s, "A textual month could not be found", string, begin);
    } else {
     s->time->m = tmp;
    }
    break;
   case 'y':
    {
     int length = 0;
     if ((__extension__ (__builtin_constant_p (*ptr) && !__builtin_constant_p ("0123456789") && (*ptr) == '\0' ? (char *) __rawmemchr ("0123456789", *ptr) : __builtin_strchr ("0123456789", *ptr))) == ((void *)0)) { add_pbf_error(s, "Unexpected data found.", string, begin); };
     if ((s->time->y = timelib_get_nr_ex((char **) &ptr, 2, &length)) == -99999) {
      add_pbf_error(s, "A two digit year could not be found", string, begin);
     }
     { if (((s->time->y) == -99999) || ((length) >= 4)) { } else if ((s->time->y) < 100) { if ((s->time->y) < 70) { (s->time->y) += 2000; } else { (s->time->y) += 1900; } } };
    }
    break;
   case 'Y':
    if ((__extension__ (__builtin_constant_p (*ptr) && !__builtin_constant_p ("0123456789") && (*ptr) == '\0' ? (char *) __rawmemchr ("0123456789", *ptr) : __builtin_strchr ("0123456789", *ptr))) == ((void *)0)) { add_pbf_error(s, "Unexpected data found.", string, begin); };
    if ((s->time->y = timelib_get_nr((char **) &ptr, 4)) == -99999) {
     add_pbf_error(s, "A four digit year could not be found", string, begin);
    }
    break;
   case 'g':
   case 'h':
    if ((__extension__ (__builtin_constant_p (*ptr) && !__builtin_constant_p ("0123456789") && (*ptr) == '\0' ? (char *) __rawmemchr ("0123456789", *ptr) : __builtin_strchr ("0123456789", *ptr))) == ((void *)0)) { add_pbf_error(s, "Unexpected data found.", string, begin); };
    if ((s->time->h = timelib_get_nr((char **) &ptr, 2)) == -99999) {
     add_pbf_error(s, "A two digit hour could not be found", string, begin);
    }
    if (s->time->h > 12) {
     add_pbf_error(s, "Hour can not be higher than 12", string, begin);
    }
    break;
   case 'G':
   case 'H':
    if ((__extension__ (__builtin_constant_p (*ptr) && !__builtin_constant_p ("0123456789") && (*ptr) == '\0' ? (char *) __rawmemchr ("0123456789", *ptr) : __builtin_strchr ("0123456789", *ptr))) == ((void *)0)) { add_pbf_error(s, "Unexpected data found.", string, begin); };
    if ((s->time->h = timelib_get_nr((char **) &ptr, 2)) == -99999) {
     add_pbf_error(s, "A two digit hour could not be found", string, begin);
    }
    break;
   case 'a':
   case 'A':
    if (s->time->h == -99999) {
     add_pbf_error(s, "Meridian can only come after an hour has been found", string, begin);
    } else if ((tmp = timelib_meridian_with_check((char **) &ptr, s->time->h)) == -99999) {
     add_pbf_error(s, "A meridian could not be found", string, begin);
    } else {
     s->time->h += tmp;
    }
    break;
   case 'i':
    {
     int length;
     timelib_sll min;

     if ((__extension__ (__builtin_constant_p (*ptr) && !__builtin_constant_p ("0123456789") && (*ptr) == '\0' ? (char *) __rawmemchr ("0123456789", *ptr) : __builtin_strchr ("0123456789", *ptr))) == ((void *)0)) { add_pbf_error(s, "Unexpected data found.", string, begin); };
     min = timelib_get_nr_ex((char **) &ptr, 2, &length);
     if (min == -99999 || length != 2) {
      add_pbf_error(s, "A two digit minute could not be found", string, begin);
     } else {
      s->time->i = min;
     }
    }
    break;
   case 's':
    {
     int length;
     timelib_sll sec;

     if ((__extension__ (__builtin_constant_p (*ptr) && !__builtin_constant_p ("0123456789") && (*ptr) == '\0' ? (char *) __rawmemchr ("0123456789", *ptr) : __builtin_strchr ("0123456789", *ptr))) == ((void *)0)) { add_pbf_error(s, "Unexpected data found.", string, begin); };
     sec = timelib_get_nr_ex((char **) &ptr, 2, &length);
     if (sec == -99999 || length != 2) {
      add_pbf_error(s, "A two second minute could not be found", string, begin);
     } else {
      s->time->s = sec;
     }
    }
    break;
   case 'u':
    {
     double f;
     char *tptr;

     if ((__extension__ (__builtin_constant_p (*ptr) && !__builtin_constant_p ("0123456789") && (*ptr) == '\0' ? (char *) __rawmemchr ("0123456789", *ptr) : __builtin_strchr ("0123456789", *ptr))) == ((void *)0)) { add_pbf_error(s, "Unexpected data found.", string, begin); };
     tptr = ptr;
     if ((f = timelib_get_nr((char **) &ptr, 6)) == -99999 || (ptr - tptr < 1)) {
      add_pbf_error(s, "A six digit millisecond could not be found", string, begin);
     } else {
      s->time->f = (f / pow(10, (ptr - tptr)));
     }
    }
    break;
   case ' ':
    timelib_eat_spaces((char **) &ptr);
    break;
   case 'U':
    if ((__extension__ (__builtin_constant_p (*ptr) && !__builtin_constant_p ("0123456789") && (*ptr) == '\0' ? (char *) __rawmemchr ("0123456789", *ptr) : __builtin_strchr ("0123456789", *ptr))) == ((void *)0)) { add_pbf_error(s, "Unexpected data found.", string, begin); };
    { s->time->have_relative = 1; };
    tmp = timelib_get_unsigned_nr((char **) &ptr, 24);
    s->time->y = 1970;
    s->time->m = 1;
    s->time->d = 1;
    s->time->h = s->time->i = s->time->s = 0;
    s->time->f = 0.0;
    s->time->relative.s += tmp;
    s->time->is_localtime = 1;
    s->time->zone_type = 1;
    s->time->z = 0;
    break;

   case 'e':
   case 'P':
   case 'T':
   case 'O':
    {
     int tz_not_found;
     s->time->z = timelib_get_zone((char **) &ptr, &s->time->dst, s->time, &tz_not_found, s->tzdb, tz_get_wrapper);
     if (tz_not_found) {
      add_pbf_error(s, "The timezone could not be found in the database", string, begin);
     }
    }
    break;

   case '#':
    if (*ptr == ';' || *ptr == ':' || *ptr == '/' || *ptr == '.' || *ptr == ',' || *ptr == '-' || *ptr == '(' || *ptr == ')') {
     ++ptr;
    } else {
     add_pbf_error(s, "The separation symbol ([;:/.,-]) could not be found", string, begin);
    }
    break;

   case ';':
   case ':':
   case '/':
   case '.':
   case ',':
   case '-':
   case '(':
   case ')':
    if (*ptr == *fptr) {
     ++ptr;
    } else {
     add_pbf_error(s, "The separation symbol could not be found", string, begin);
    }
    break;

   case '!':
    timelib_time_reset_fields(s->time);
    break;

   case '|':
    timelib_time_reset_unset_fields(s->time);
    break;

   case '?':
    ++ptr;
    break;

   case '\\':
    *fptr++;
    if (*ptr == *fptr) {
     ++ptr;
    } else {
     add_pbf_error(s, "The escaped character could not be found", string, begin);
    }
    break;

   case '*':
    timelib_eat_until_separator((char **) &ptr);
    break;

   case '+':
    allow_extra = 1;
    break;

   default:
    if (*fptr != *ptr) {
     add_pbf_error(s, "The format separator does not match", string, begin);
    }
    ptr++;
  }
  fptr++;
 }
 if (*ptr) {
  if (allow_extra) {
   add_pbf_warning(s, "Trailing data", string, ptr);
  } else {
   add_pbf_error(s, "Trailing data", string, ptr);
  }
 }

 while (*fptr == '+') {
  fptr++;
 }
 if (*fptr) {

  int done = 0;
  while (*fptr && !done) {
   switch (*fptr++) {
    case '!':
     timelib_time_reset_fields(s->time);
     break;

    case '|':
     timelib_time_reset_unset_fields(s->time);
     break;

    default:
     add_pbf_error(s, "Data missing", string, ptr);
     done = 1;
   }
  }
 }


 if (s->time->h != -99999 || s->time->i != -99999 || s->time->s != -99999) {
  if (s->time->h == -99999 ) {
   s->time->h = 0;
  }
  if (s->time->i == -99999 ) {
   s->time->i = 0;
  }
  if (s->time->s == -99999 ) {
   s->time->s = 0;
  }
 }


 if (s->time->h != -99999 && s->time->i != -99999 &&
  s->time->s != -99999 &&
  !timelib_valid_time( s->time->h, s->time->i, s->time->s)) {
  add_pbf_warning(s, "The parsed time was invalid", string, ptr);
 }

 if (s->time->y != -99999 && s->time->m != -99999 &&
  s->time->d != -99999 &&
  !timelib_valid_date( s->time->y, s->time->m, s->time->d)) {
  add_pbf_warning(s, "The parsed date was invalid", string, ptr);
 }

 if (errors) {
  *errors = in.errors;
 } else {
  timelib_error_container_dtor(in.errors);
 }
 return in.time;
}

void timelib_fill_holes(timelib_time *parsed, timelib_time *now, int options)
{
 if (!(options & 0x01) && parsed->have_date && !parsed->have_time) {
  parsed->h = 0;
  parsed->i = 0;
  parsed->s = 0;
  parsed->f = 0;
 }
 if (parsed->y == -99999) parsed->y = now->y != -99999 ? now->y : 0;
 if (parsed->d == -99999) parsed->d = now->d != -99999 ? now->d : 0;
 if (parsed->m == -99999) parsed->m = now->m != -99999 ? now->m : 0;
 if (parsed->h == -99999) parsed->h = now->h != -99999 ? now->h : 0;
 if (parsed->i == -99999) parsed->i = now->i != -99999 ? now->i : 0;
 if (parsed->s == -99999) parsed->s = now->s != -99999 ? now->s : 0;
 if (parsed->f == -99999) parsed->f = now->f != -99999 ? now->f : 0;
 if (parsed->z == -99999) parsed->z = now->z != -99999 ? now->z : 0;
 if (parsed->dst == -99999) parsed->dst = now->dst != -99999 ? now->dst : 0;

 if (!parsed->tz_abbr) {
  parsed->tz_abbr = now->tz_abbr ? (__extension__ (__builtin_constant_p (now->tz_abbr) && ((size_t)(const void *)((now->tz_abbr) + 1) - (size_t)(const void *)(now->tz_abbr) == 1) ? (((__const char *) (now->tz_abbr))[0] == '\0' ? (char *) calloc ((size_t) 1, (size_t) 1) : ({ size_t __len = strlen (now->tz_abbr) + 1; char *__retval = (char *) malloc (__len); if (__retval != ((void *)0)) __retval = (char *) memcpy (__retval, now->tz_abbr, __len); __retval; })) : __strdup (now->tz_abbr))) : ((void *)0);
 }
 if (!parsed->tz_info) {
  parsed->tz_info = now->tz_info ? (!(options & 0x02) ? timelib_tzinfo_clone(now->tz_info) : now->tz_info) : ((void *)0);
 }
 if (parsed->zone_type == 0 && now->zone_type != 0) {
  parsed->zone_type = now->zone_type;


    parsed->is_localtime = 1;
 }



}

char *timelib_timezone_id_from_abbr(const char *abbr, long gmtoffset, int isdst)
{
 const timelib_tz_lookup_table *tp;

 tp = zone_search(abbr, gmtoffset, isdst);
 if (tp) {
  return (tp->full_tz_name);
 } else {
  return ((void *)0);
 }
}

const timelib_tz_lookup_table *timelib_timezone_abbreviations_list(void)
{
 return timelib_timezone_lookup;
}
