# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.c"
# 23 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 1
# 51 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h"
# 1 "Zend/zend_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 2423 "Zend/../main/php_config.h"
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

# 2424 "Zend/../main/php_config.h" 2
# 2439 "Zend/../main/php_config.h"
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

# 2440 "Zend/../main/php_config.h" 2
# 2450 "Zend/../main/php_config.h"
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

# 2451 "Zend/../main/php_config.h" 2
# 2 "Zend/zend_config.h" 2
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2
# 68 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h"
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

# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 76 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2



# 1 "/usr/include/dlfcn.h" 1 3 4
# 25 "/usr/include/dlfcn.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 26 "/usr/include/dlfcn.h" 2 3 4


# 1 "/usr/include/bits/dlfcn.h" 1 3 4
# 58 "/usr/include/bits/dlfcn.h" 3 4



extern void _dl_mcount_wrapper_check (void *__selfpc) __attribute__ ((__nothrow__));


# 29 "/usr/include/dlfcn.h" 2 3 4
# 45 "/usr/include/dlfcn.h" 3 4
typedef long int Lmid_t;











extern void *dlopen (__const char *__file, int __mode) __attribute__ ((__nothrow__));



extern int dlclose (void *__handle) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void *dlsym (void *__restrict __handle,
      __const char *__restrict __name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern void *dlmopen (Lmid_t __nsid, __const char *__file, int __mode) __attribute__ ((__nothrow__));



extern void *dlvsym (void *__restrict __handle,
       __const char *__restrict __name,
       __const char *__restrict __version)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));





extern char *dlerror (void) __attribute__ ((__nothrow__));





typedef struct
{
  __const char *dli_fname;
  void *dli_fbase;
  __const char *dli_sname;
  void *dli_saddr;
} Dl_info;



extern int dladdr (__const void *__address, Dl_info *__info)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int dladdr1 (__const void *__address, Dl_info *__info,
      void **__extra_info, int __flags) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




enum
  {

    RTLD_DL_SYMENT = 1,


    RTLD_DL_LINKMAP = 2
  };







extern int dlinfo (void *__restrict __handle,
     int __request, void *__restrict __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));


enum
  {

    RTLD_DI_LMID = 1,



    RTLD_DI_LINKMAP = 2,

    RTLD_DI_CONFIGADDR = 3,






    RTLD_DI_SERINFO = 4,
    RTLD_DI_SERINFOSIZE = 5,



    RTLD_DI_ORIGIN = 6,

    RTLD_DI_PROFILENAME = 7,
    RTLD_DI_PROFILEOUT = 8,




    RTLD_DI_TLS_MODID = 9,





    RTLD_DI_TLS_DATA = 10,

    RTLD_DI_MAX = 10
  };




typedef struct
{
  char *dls_name;
  unsigned int dls_flags;
} Dl_serpath;



typedef struct
{
  size_t dls_size;
  unsigned int dls_cnt;
  Dl_serpath dls_serpath[1];
} Dl_serinfo;




# 80 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2
# 236 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_errors.h" 1
# 237 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_alloc.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_alloc.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/../TSRM/TSRM.h" 1
# 20 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/../TSRM/TSRM.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/TSRM/tsrm_config.h" 2
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/../TSRM/TSRM.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_alloc.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_alloc.h" 2
# 44 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_alloc.h"
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
# 93 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_alloc.h"
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
# 142 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 159 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );


# 191 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 211 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_alloc.h"
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
# 238 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_types.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_types.h"
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;

typedef struct _zend_object_value {
 zend_object_handle handle;
 const zend_object_handlers *handlers;
} zend_object_value;
# 240 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_string.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_string.h"
__attribute__ ((visibility("default"))) extern const char *(*zend_new_interned_string)(const char *str, int len, int free_src );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 241 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2


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
# 244 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2
# 256 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h"
static const char long_min_digits[] = "2147483648";
# 271 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_hash.h" 1
# 45 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_hash.h"
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
# 214 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag, void **pData );




__attribute__ ((visibility("default"))) int zend_hash_num_elements(const HashTable *ht);

__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);
# 261 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_hash.h"
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








# 348 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_hash.h"
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
# 272 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_ts_hash.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_ts_hash.h"
typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






__attribute__ ((visibility("default"))) int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_ts_hash_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_ts_hash.h"
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








# 273 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_llist.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_llist.h"
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







# 274 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2





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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_object_handlers.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;
struct _zend_literal;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, const struct _zend_literal *key );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 46 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_object_handlers.h"
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

# 306 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2

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
# 378 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h"
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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_iterators.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_iterators.h"
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

# 417 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2

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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_stream.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_stream.h"
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

# 528 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2
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
# 593 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);

# 631 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h"

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

# 676 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h"

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









# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_signal.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_signal.h"
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
# 76 "/usr/include/signal.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 77 "/usr/include/signal.h" 2 3 4


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

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));







extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));
# 113 "/usr/include/signal.h" 3 4





extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__));






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
# 177 "/usr/include/signal.h" 3 4
extern int sigpause (int __sig) __asm__ ("__xpg_sigpause");
# 196 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__)) __attribute__ ((__deprecated__));
# 211 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (__const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int sigisemptyset (__const sigset_t *__set) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int sigandset (sigset_t *__set, __const sigset_t *__left,
        __const sigset_t *__right) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3)));


extern int sigorset (sigset_t *__set, __const sigset_t *__left,
       __const sigset_t *__right) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3)));




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



enum
{
  REG_GS = 0,

  REG_FS,

  REG_ES,

  REG_DS,

  REG_EDI,

  REG_ESI,

  REG_EBP,

  REG_ESP,

  REG_EBX,

  REG_EDX,

  REG_ECX,

  REG_EAX,

  REG_TRAPNO,

  REG_ERR,

  REG_EIP,

  REG_CS,

  REG_EFL,

  REG_UESP,

  REG_SS

};



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







extern int sighold (int __sig) __attribute__ ((__nothrow__));


extern int sigrelse (int __sig) __attribute__ ((__nothrow__));


extern int sigignore (int __sig) __attribute__ ((__nothrow__));


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) __attribute__ ((__nothrow__));






# 1 "/usr/include/bits/sigthread.h" 1 3 4
# 31 "/usr/include/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       __const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__));



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) __attribute__ ((__nothrow__));
# 396 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__));




# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_signal.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_signal.h"
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
# 74 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_signal.h"
extern __attribute__ ((visibility("default"))) zend_signal_globals_t zend_signal_globals;






void zend_signal_handler_defer(int signo, siginfo_t *siginfo, void *context);
void zend_signal_handler_unblock();
void zend_signal_activate(void);
void zend_signal_deactivate(void);
void zend_signal_startup();
void zend_signal_shutdown(void);
__attribute__ ((visibility("default"))) int zend_signal(int signo, void (*handler)(int) );
__attribute__ ((visibility("default"))) int zend_sigaction(int signo, const struct sigaction *act, struct sigaction *oldact );
# 711 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2






__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);

# 829 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_gc.h" 1
# 81 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_gc.h"
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
# 129 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_gc.h"
} zend_gc_globals;
# 138 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_zval_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_zobj_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_remove_zval_from_buffer(zval *zv );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);

# 180 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_gc.h"
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
# 830 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h"
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
# 55 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;




# 69 "/usr/include/errno.h" 3 4
typedef int error_t;
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h" 2

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



# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h" 2





# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_strtod.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_strtod.h"
# 1 "Zend/zend.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);

# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_multiply.h" 1
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h" 2








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
# 105 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h"
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

# 456 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h"
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
# 488 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h"
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
# 525 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h"
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
# 585 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h"
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
# 668 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_operators.h"
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
# 831 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_variables.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_variables.h"


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
# 78 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval **p);


# 832 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend.h" 2

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
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_execute.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_execute.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_compile.h" 1
# 53 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_compile.h"
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
# 207 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_compile.h"
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
# 394 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_compile.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h"
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

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals_macros.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;









extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 48 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;



# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_stack.h"
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

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_ptr_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_ptr_stack.h"
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

# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_ptr_stack.h"
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
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_objects.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_objects.h"

__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object *zend_objects_get_address(const zval *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_free_object_storage(zend_object *object );

# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_objects_API.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_objects_API.h"
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

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_modules.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_modules.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_compile.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_modules.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_build.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_modules.h" 2
# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_modules.h"
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
# 118 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_modules.h"
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
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_float.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_float.h"
# 1 "/usr/include/fpu_control.h" 1 3 4
# 89 "/usr/include/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 100 "/usr/include/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 213 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_float.h" 2
# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_multibyte.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_multibyte.h"
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


# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h" 2
# 64 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_globals.h"
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
# 395 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_compile.h" 2



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
# 427 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_compile.h"
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



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_vm_opcodes.h" 1
# 695 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_compile.h" 2
# 817 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_compile.h"

# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_execute.h" 2




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
# 183 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_execute.h"
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
# 410 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval** zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 420 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );
__attribute__ ((visibility("default"))) zval **zend_get_zval_ptr_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );
# 451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_execute.h"

# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_list.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_list.h"





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
# 116 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_list.h"

# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.h" 2







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
# 228 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 249 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.h"
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
# 293 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.h"
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
# 358 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.h"
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
# 393 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.h"
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
# 441 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 457 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.h"
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

# 731 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.h"

# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.c" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_constants.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_constants.h"

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

# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_exceptions.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_exceptions.h"


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


# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_closures.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_closures.h"




void zend_register_closure_ce(void);

extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_closure;

__attribute__ ((visibility("default"))) void zend_create_closure(zval *res, zend_function *op_array, zend_class_entry *scope, zval *this_ptr );
__attribute__ ((visibility("default"))) zend_function *zend_get_closure_invoke_method(zval *obj );
__attribute__ ((visibility("default"))) const zend_function *zend_get_closure_method_def(zval *obj );
__attribute__ ((visibility("default"))) zval* zend_get_closure_this_ptr(zval *obj );


# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.c" 2






static int module_count=0;
__attribute__ ((visibility("default"))) HashTable module_registry;

static zend_module_entry **module_request_startup_handlers;
static zend_module_entry **module_request_shutdown_handlers;
static zend_module_entry **module_post_deactivate_handlers;

static zend_class_entry **class_cleanup_handlers;


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...)
{
 void **p;
 int arg_count;
 va_list ptr;
 zval **param, *param_ptr;
 ;

 p = zend_vm_stack_top() - 1;
 arg_count = (int)(zend_uintptr_t) *p;

 if (param_count>arg_count) {
  return -1;
 }

 __builtin_va_start(ptr,param_count);

 while (param_count-->0) {
  param = __builtin_va_arg(ptr,zval **);
  param_ptr = *(p-arg_count);
  if (!zval_isref_p(param_ptr) && zval_refcount_p(param_ptr) > 1) {
   zval *new_tmp;

   do { (new_tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_tmp))->u.buffered = ((void *)0); } while (0);
   *new_tmp = *param_ptr;
   _zval_copy_ctor((new_tmp) );
   (new_tmp)->refcount__gc = 1; (new_tmp)->is_ref__gc = 0;;
   param_ptr = new_tmp;
   zval_delref_p((zval *) *(p-arg_count));
   *(p-arg_count) = param_ptr;
  }
  *param = param_ptr;
  arg_count--;
 }
 __builtin_va_end(ptr);

 return 0;
}


__attribute__ ((visibility("default"))) int _zend_get_parameters_array(int ht, int param_count, zval **argument_array )
{
 void **p;
 int arg_count;
 zval *param_ptr;

 p = zend_vm_stack_top() - 1;
 arg_count = (int)(zend_uintptr_t) *p;

 if (param_count>arg_count) {
  return -1;
 }

 while (param_count-->0) {
  param_ptr = *(p-arg_count);
  if (!zval_isref_p(param_ptr) && zval_refcount_p(param_ptr) > 1) {
   zval *new_tmp;

   do { (new_tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_tmp))->u.buffered = ((void *)0); } while (0);
   *new_tmp = *param_ptr;
   _zval_copy_ctor((new_tmp) );
   (new_tmp)->refcount__gc = 1; (new_tmp)->is_ref__gc = 0;;
   param_ptr = new_tmp;
   zval_delref_p((zval *) *(p-arg_count));
   *(p-arg_count) = param_ptr;
  }
  *(argument_array++) = param_ptr;
  arg_count--;
 }

 return 0;
}




__attribute__ ((visibility("default"))) int zend_get_parameters_ex(int param_count, ...)
{
 void **p;
 int arg_count;
 va_list ptr;
 zval ***param;
 ;

 p = zend_vm_stack_top() - 1;
 arg_count = (int)(zend_uintptr_t) *p;

 if (param_count>arg_count) {
  return -1;
 }

 __builtin_va_start(ptr,param_count);
 while (param_count-->0) {
  param = __builtin_va_arg(ptr,zval ***);
  *param = (zval **) p-(arg_count--);
 }
 __builtin_va_end(ptr);

 return 0;
}


__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval ***argument_array )
{
 void **p;
 int arg_count;

 p = zend_vm_stack_top() - 1;
 arg_count = (int)(zend_uintptr_t) *p;

 if (param_count>arg_count) {
  return -1;
 }

 while (param_count-->0) {
  zval **value = (zval**)(p-arg_count);

  *(argument_array++) = value;
  arg_count--;
 }

 return 0;
}


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array )
{
 void **p;
 int arg_count;

 p = zend_vm_stack_top() - 1;
 arg_count = (int)(zend_uintptr_t) *p;

 if (param_count>arg_count) {
  return -1;
 }

 while (param_count-->0) {
  zval **param = (zval **) p-(arg_count--);
  zval_add_ref(param);
  add_next_index_zval(argument_array, *param);
 }

 return 0;
}


__attribute__ ((visibility("default"))) void zend_wrong_param_count(void)
{
 const char *space;
 const char *class_name = get_active_class_name(&space );

 zend_error((1<<1L), "Wrong parameter count for %s%s%s()", class_name, space, get_active_function_name());
}



__attribute__ ((visibility("default"))) char *zend_get_type_by_const(int type)
{
 switch(type) {
  case 3:
   return "boolean";
  case 1:
   return "integer";
  case 2:
   return "double";
  case 6:
   return "string";
  case 5:
   return "object";
  case 7:
   return "resource";
  case 0:
   return "null";
  case 10:
   return "callable";
  case 4:
   return "array";
  default:
   return "unknown";
 }
}


__attribute__ ((visibility("default"))) char *zend_zval_type_name(const zval *arg)
{
 return zend_get_type_by_const((*arg).type);
}


__attribute__ ((visibility("default"))) zend_class_entry *zend_get_class_entry(const zval *zobject )
{
 if ((*zobject).value.obj.handlers->get_class_entry) {
  return (*zobject).value.obj.handlers->get_class_entry(zobject );
 } else {
  zend_error((1<<0L), "Class entry requested for an object without PHP class");
  return ((void *)0);
 }
}



__attribute__ ((visibility("default"))) int zend_get_object_classname(const zval *object, const char **class_name, zend_uint *class_name_len )
{
 if ((*object).value.obj.handlers->get_class_name == ((void *)0) ||
  (*object).value.obj.handlers->get_class_name(object, class_name, class_name_len, 0 ) != 0) {
  zend_class_entry *ce = zend_get_class_entry(&(*object) );

  *class_name = ce->name;
  *class_name_len = ce->name_length;
  return 1;
 }
 return 0;
}


static int parse_arg_object_to_string(zval **arg, char **p, int *pl, int type )
{
 if (((**arg)).value.obj.handlers->cast_object) {
  if (!zval_isref_p(*arg)) { do { if (zval_refcount_p(*((arg))) > 1) { zval *new_zv; zval_delref_p(*(arg)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(arg))->value; (*new_zv).type = (**(arg)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(arg) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); };
  if (((**arg)).value.obj.handlers->cast_object(*arg, *arg, type ) == 0) {
   *pl = (**arg).value.str.len;
   *p = (**arg).value.str.val;
   return 0;
  }
 }

 if ((**arg).value.obj.handlers == &std_object_handlers || !((**arg)).value.obj.handlers->cast_object) {
  if (!zval_isref_p(*arg)) { do { if (zval_refcount_p(*((arg))) > 1) { zval *new_zv; zval_delref_p(*(arg)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(arg))->value; (*new_zv).type = (**(arg)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(arg) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); };
  if (zend_std_cast_object_tostring(*arg, *arg, type ) == 0) {
   *pl = (**arg).value.str.len;
   *p = (**arg).value.str.val;
   return 0;
  }
 }
 if (!((**arg)).value.obj.handlers->cast_object && ((**arg)).value.obj.handlers->get) {
  int use_copy;
  zval *z = ((**arg)).value.obj.handlers->get(*arg );
  zval_addref_p(z);
  if((*z).type != 5) {
   _zval_dtor((*arg) );
   (**arg).type = 0;
   zend_make_printable_zval(z, *arg, &use_copy);
   if (!use_copy) {
    { zend_uchar is_ref = zval_isref_p(*arg); zend_uint refcount = zval_refcount_p(*arg); do { (*arg)->value = (z)->value; (**arg).type = (*z).type; } while (0); if (1) { _zval_copy_ctor((*arg) ); } if (1) { if (!1) { { (*z).type = 0; }; } _zval_ptr_dtor((&z) ); } zval_set_isref_to_p(*arg, is_ref); zval_set_refcount_p(*arg, refcount); };
   }
   *pl = (**arg).value.str.len;
   *p = (**arg).value.str.val;
   return 0;
  }
  _zval_ptr_dtor((&z) );
 }
 return -1;
}


static const char *zend_parse_arg_impl(int arg_num, zval **arg, va_list *va, const char **spec, char **error, int *severity )
{
 const char *spec_walk = *spec;
 char c = *spec_walk++;
 int return_null = 0;


 while (1) {
  if (*spec_walk == '/') {
   if (!zval_isref_p(*arg)) { do { if (zval_refcount_p(*((arg))) > 1) { zval *new_zv; zval_delref_p(*(arg)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(arg))->value; (*new_zv).type = (**(arg)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(arg) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); };
  } else if (*spec_walk == '!') {
   if ((**arg).type == 0) {
    return_null = 1;
   }
  } else {
   break;
  }
  spec_walk++;
 }

 switch (c) {
  case 'l':
  case 'L':
   {
    long *p = __builtin_va_arg(*va,long *);
    switch ((**arg).type) {
     case 6:
      {
       double d;
       int type;

       if ((type = is_numeric_string((**arg).value.str.val, (**arg).value.str.len, p, &d, -1)) == 0) {
        return "long";
       } else if (type == 2) {
        if (c == 'L') {
         if (d > 2147483647L) {
          *p = 2147483647L;
          break;
         } else if (d < (-2147483647L - 1L)) {
          *p = (-2147483647L - 1L);
          break;
         }
        }

        *p = zend_dval_to_lval(d);
       }
      }
      break;

     case 2:
      if (c == 'L') {
       if ((**arg).value.dval > 2147483647L) {
        *p = 2147483647L;
        break;
       } else if ((**arg).value.dval < (-2147483647L - 1L)) {
        *p = (-2147483647L - 1L);
        break;
       }
      }
     case 0:
     case 1:
     case 3:
      if ((**arg).type!=1) { if (!zval_isref_p(*arg)) { do { if (zval_refcount_p(*((arg))) > 1) { zval *new_zv; zval_delref_p(*(arg)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(arg))->value; (*new_zv).type = (**(arg)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(arg) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); }; convert_to_long(*arg); };
      *p = (**arg).value.lval;
      break;

     case 4:
     case 5:
     case 7:
     default:
      return "long";
    }
   }
   break;

  case 'd':
   {
    double *p = __builtin_va_arg(*va,double *);
    switch ((**arg).type) {
     case 6:
      {
       long l;
       int type;

       if ((type = is_numeric_string((**arg).value.str.val, (**arg).value.str.len, &l, p, -1)) == 0) {
        return "double";
       } else if (type == 1) {
        *p = (double) l;
       }
      }
      break;

     case 0:
     case 1:
     case 2:
     case 3:
      if ((**arg).type!=2) { if (!zval_isref_p(*arg)) { do { if (zval_refcount_p(*((arg))) > 1) { zval *new_zv; zval_delref_p(*(arg)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(arg))->value; (*new_zv).type = (**(arg)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(arg) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); }; convert_to_double(*arg); };
      *p = (**arg).value.dval;
      break;

     case 4:
     case 5:
     case 7:
     default:
      return "double";
    }
   }
   break;

  case 'p':
  case 's':
   {
    char **p = __builtin_va_arg(*va,char **);
    int *pl = __builtin_va_arg(*va,int *);
    switch ((**arg).type) {
     case 0:
      if (return_null) {
       *p = ((void *)0);
       *pl = 0;
       break;
      }


     case 6:
     case 1:
     case 2:
     case 3:
      if ((**arg).type!=6) { if (!zval_isref_p(*arg)) { do { if (zval_refcount_p(*((arg))) > 1) { zval *new_zv; zval_delref_p(*(arg)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(arg))->value; (*new_zv).type = (**(arg)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(arg) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); }; if ((*arg)->type != 6) { _convert_to_string((*arg) ); }; };
      if (__builtin_expect(zval_isref_p(*(arg)) != 0, 0)) {



       do { if (zval_refcount_p(*((arg))) > 1) { zval *new_zv; zval_delref_p(*(arg)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(arg))->value; (*new_zv).type = (**(arg)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(arg) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0);
      }
      *p = (**arg).value.str.val;
      *pl = (**arg).value.str.len;
      if (c == 'p' && ((**arg).value.str.len != strlen((**arg).value.str.val))) {
       return "a valid path";
      }
      break;

     case 5:
      if (parse_arg_object_to_string(arg, p, pl, 6 ) == 0) {
       if (c == 'p' && ((**arg).value.str.len != strlen((**arg).value.str.val))) {
        return "a valid path";
       }
       break;
      }

     case 4:
     case 7:
     default:
      return c == 's' ? "string" : "a valid path";
    }
   }
   break;

  case 'b':
   {
    zend_bool *p = __builtin_va_arg(*va,zend_bool *);
    switch ((**arg).type) {
     case 0:
     case 6:
     case 1:
     case 2:
     case 3:
      if ((**arg).type!=3) { if (!zval_isref_p(*arg)) { do { if (zval_refcount_p(*((arg))) > 1) { zval *new_zv; zval_delref_p(*(arg)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(arg))->value; (*new_zv).type = (**(arg)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(arg) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); }; convert_to_boolean(*arg); };
      *p = ((zend_bool)(**arg).value.lval);
      break;

     case 4:
     case 5:
     case 7:
     default:
      return "boolean";
    }
   }
   break;

  case 'r':
   {
    zval **p = __builtin_va_arg(*va,zval **);
    if (return_null) {
     *p = ((void *)0);
     break;
    }
    if ((**arg).type == 7) {
     *p = *arg;
    } else {
     return "resource";
    }
   }
   break;
  case 'A':
  case 'a':
   {
    zval **p = __builtin_va_arg(*va,zval **);
    if (return_null) {
     *p = ((void *)0);
     break;
    }
    if ((**arg).type == 4 || (c == 'A' && (**arg).type == 5)) {
     *p = *arg;
    } else {
     return "array";
    }
   }
   break;
  case 'H':
  case 'h':
   {
    HashTable **p = __builtin_va_arg(*va,HashTable **);
    if (return_null) {
     *p = ((void *)0);
     break;
    }
    if ((**arg).type == 4) {
     *p = (**arg).value.ht;
    } else if(c == 'H' && (**arg).type == 5) {
     *p = ((**arg).type==4 ? (**arg).value.ht : (((**arg).type==5 ? (**arg).value.obj.handlers->get_properties((*arg) ) : ((void *)0))));
     if(*p == ((void *)0)) {
      return "array";
     }
    } else {
     return "array";
    }
   }
   break;

  case 'o':
   {
    zval **p = __builtin_va_arg(*va,zval **);
    if (return_null) {
     *p = ((void *)0);
     break;
    }
    if ((**arg).type == 5) {
     *p = *arg;
    } else {
     return "object";
    }
   }
   break;

  case 'O':
   {
    zval **p = __builtin_va_arg(*va,zval **);
    zend_class_entry *ce = __builtin_va_arg(*va,zend_class_entry *);

    if (return_null) {
     *p = ((void *)0);
     break;
    }
    if ((**arg).type == 5 &&
      (!ce || instanceof_function(zend_get_class_entry(&(**arg) ), ce ))) {
     *p = *arg;
    } else {
     if (ce) {
      return ce->name;
     } else {
      return "object";
     }
    }
   }
   break;

  case 'C':
   {
    zend_class_entry **lookup, **pce = __builtin_va_arg(*va,zend_class_entry **);
    zend_class_entry *ce_base = *pce;

    if (return_null) {
     *pce = ((void *)0);
     break;
    }
    if ((**arg).type!=6) { if (!zval_isref_p(*arg)) { do { if (zval_refcount_p(*((arg))) > 1) { zval *new_zv; zval_delref_p(*(arg)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(arg))->value; (*new_zv).type = (**(arg)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(arg) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); }; if ((*arg)->type != 6) { _convert_to_string((*arg) ); }; };
    if (zend_lookup_class((**arg).value.str.val, (**arg).value.str.len, &lookup ) == -1) {
     *pce = ((void *)0);
    } else {
     *pce = *lookup;
    }
    if (ce_base) {
     if ((!*pce || !instanceof_function(*pce, ce_base ))) {
      zend_spprintf(error, 0, "to be a class name derived from %s, '%s' given",
       ce_base->name, (**arg).value.str.val);
      *pce = ((void *)0);
      return "";
     }
    }
    if (!*pce) {
     zend_spprintf(error, 0, "to be a valid class name, '%s' given",
      (**arg).value.str.val);
     return "";
    }
    break;

   }
   break;

  case 'f':
   {
    zend_fcall_info *fci = __builtin_va_arg(*va,zend_fcall_info *);
    zend_fcall_info_cache *fcc = __builtin_va_arg(*va,zend_fcall_info_cache *);
    char *is_callable_error = ((void *)0);

    if (return_null) {
     fci->size = 0;
     fcc->initialized = 0;
     break;
    }

    if (zend_fcall_info_init(*arg, 0, fci, fcc, ((void *)0), &is_callable_error ) == 0) {
     if (is_callable_error) {
      *severity = (1<<11L);
      zend_spprintf(error, 0, "to be a valid callback, %s", is_callable_error);
      _efree((is_callable_error) );
      *spec = spec_walk;
      return "";
     }
     break;
    } else {
     if (is_callable_error) {
      *severity = (1<<1L);
      zend_spprintf(error, 0, "to be a valid callback, %s", is_callable_error);
      _efree((is_callable_error) );
      return "";
     } else {
      return "valid callback";
     }
    }
   }

  case 'z':
   {
    zval **p = __builtin_va_arg(*va,zval **);
    if (return_null) {
     *p = ((void *)0);
    } else {
     *p = *arg;
    }
   }
   break;

  case 'Z':
   {
    zval ***p = __builtin_va_arg(*va,zval ***);
    if (return_null) {
     *p = ((void *)0);
    } else {
     *p = arg;
    }
   }
   break;

  default:
   return "unknown";
 }

 *spec = spec_walk;

 return ((void *)0);
}


static int zend_parse_arg(int arg_num, zval **arg, va_list *va, const char **spec, int quiet )
{
 const char *expected_type = ((void *)0);
 char *error = ((void *)0);
 int severity = (1<<1L);

 expected_type = zend_parse_arg_impl(arg_num, arg, va, spec, &error, &severity );
 if (expected_type) {
  if (!quiet && (*expected_type || error)) {
   const char *space;
   const char *class_name = get_active_class_name(&space );

   if (error) {
    zend_error(severity, "%s%s%s() expects parameter %d %s",
      class_name, space, get_active_function_name(), arg_num, error);
    _efree((error) );
   } else {
    zend_error(severity, "%s%s%s() expects parameter %d to be %s, %s given",
      class_name, space, get_active_function_name(), arg_num, expected_type,
      zend_zval_type_name(*arg));
   }
  }
  if (severity != (1<<11L)) {
   return -1;
  }
 }

 return 0;
}


static int zend_parse_va_args(int num_args, const char *type_spec, va_list *va, int flags )
{
 const char *spec_walk;
 int c, i;
 int min_num_args = -1;
 int max_num_args = 0;
 int post_varargs = 0;
 zval **arg;
 int arg_count;
 int quiet = flags & 1<<1;
 zend_bool have_varargs = 0;
 zval ****varargs = ((void *)0);
 int *n_varargs = ((void *)0);

 for (spec_walk = type_spec; *spec_walk; spec_walk++) {
  c = *spec_walk;
  switch (c) {
   case 'l': case 'd':
   case 's': case 'b':
   case 'r': case 'a':
   case 'o': case 'O':
   case 'z': case 'Z':
   case 'C': case 'h':
   case 'f': case 'A':
   case 'H': case 'p':
    max_num_args++;
    break;

   case '|':
    min_num_args = max_num_args;
    break;

   case '/':
   case '!':

    break;

   case '*':
   case '+':
    if (have_varargs) {
     if (!quiet) {
      zend_function *active_function = (executor_globals.current_execute_data)->function_state.function;
      const char *class_name = active_function->common.scope ? active_function->common.scope->name : "";
      zend_error((1<<1L), "%s%s%s(): only one varargs specifier (* or +) is permitted",
        class_name,
        class_name[0] ? "::" : "",
        active_function->common.function_name);
     }
     return -1;
    }
    have_varargs = 1;

    if (c == '+') {
     max_num_args++;
    }

    post_varargs = max_num_args;
    break;

   default:
    if (!quiet) {
     zend_function *active_function = (executor_globals.current_execute_data)->function_state.function;
     const char *class_name = active_function->common.scope ? active_function->common.scope->name : "";
     zend_error((1<<1L), "%s%s%s(): bad type specifier while parsing parameters",
       class_name,
       class_name[0] ? "::" : "",
       active_function->common.function_name);
    }
    return -1;
  }
 }

 if (min_num_args < 0) {
  min_num_args = max_num_args;
 }

 if (have_varargs) {

  post_varargs = max_num_args - post_varargs;
  max_num_args = -1;
 }

 if (num_args < min_num_args || (num_args > max_num_args && max_num_args > 0)) {
  if (!quiet) {
   zend_function *active_function = (executor_globals.current_execute_data)->function_state.function;
   const char *class_name = active_function->common.scope ? active_function->common.scope->name : "";
   zend_error((1<<1L), "%s%s%s() expects %s %d parameter%s, %d given",
     class_name,
     class_name[0] ? "::" : "",
     active_function->common.function_name,
     min_num_args == max_num_args ? "exactly" : num_args < min_num_args ? "at least" : "at most",
     num_args < min_num_args ? min_num_args : max_num_args,
     (num_args < min_num_args ? min_num_args : max_num_args) == 1 ? "" : "s",
     num_args);
  }
  return -1;
 }

 arg_count = (int)(zend_uintptr_t) *(zend_vm_stack_top() - 1);

 if (num_args > arg_count) {
  zend_error((1<<1L), "%s(): could not obtain parameters for parsing",
   get_active_function_name());
  return -1;
 }

 i = 0;
 while (num_args-- > 0) {
  if (*type_spec == '|') {
   type_spec++;
  }

  if (*type_spec == '*' || *type_spec == '+') {
   int num_varargs = num_args + 1 - post_varargs;


   varargs = __builtin_va_arg(*va,zval ****);
   n_varargs = __builtin_va_arg(*va,int *);
   type_spec++;

   if (num_varargs > 0) {
    int iv = 0;
    zval **p = (zval **) (zend_vm_stack_top() - 1 - (arg_count - i));

    *n_varargs = num_varargs;


    *varargs = _safe_emalloc((num_varargs), (sizeof(zval **)), (0) );
    while (num_varargs-- > 0) {
     (*varargs)[iv++] = p++;
    }


    num_args = num_args + 1 - iv;
    i += iv;
    continue;
   } else {
    *varargs = ((void *)0);
    *n_varargs = 0;
   }
  }

  arg = (zval **) (zend_vm_stack_top() - 1 - (arg_count-i));

  if (zend_parse_arg(i+1, arg, va, &type_spec, quiet ) == -1) {

   if (varargs && *varargs) {
    _efree((*varargs) );
    *varargs = ((void *)0);
   }
   return -1;
  }
  i++;
 }

 return 0;
}
# 869 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-10-31-c4eb5f2387-2e5d5e5ac6/php/Zend/zend_API.c"
__attribute__ ((visibility("default"))) int zend_parse_parameters_ex(int flags, int num_args , const char *type_spec, ...)
{
 va_list va;
 int retval;

 { int __num_args = (num_args); if (0 == (type_spec)[0] && 0 != __num_args && !(flags & 1<<1)) { const char *__space; const char * __class_name = get_active_class_name(&__space ); zend_error((1<<1L), "%s%s%s() expects exactly 0 parameters, %d given", __class_name, __space, get_active_function_name(), __num_args); return -1; }};

 __builtin_va_start(va,type_spec);
 retval = zend_parse_va_args(num_args, type_spec, &va, flags );
 __builtin_va_end(va);

 return retval;
}


__attribute__ ((visibility("default"))) int zend_parse_parameters(int num_args , const char *type_spec, ...)
{
 va_list va;
 int retval;

 { int __num_args = (num_args); if (0 == (type_spec)[0] && 0 != __num_args && !(0)) { const char *__space; const char * __class_name = get_active_class_name(&__space ); zend_error((1<<1L), "%s%s%s() expects exactly 0 parameters, %d given", __class_name, __space, get_active_function_name(), __num_args); return -1; }};

 __builtin_va_start(va,type_spec);
 retval = zend_parse_va_args(num_args, type_spec, &va, 0 );
 __builtin_va_end(va);

 return retval;
}


__attribute__ ((visibility("default"))) int zend_parse_method_parameters(int num_args , zval *this_ptr, const char *type_spec, ...)
{
 va_list va;
 int retval;
 const char *p = type_spec;
 zval **object;
 zend_class_entry *ce;

 if (!this_ptr) {
  { int __num_args = (num_args); if (0 == (p)[0] && 0 != __num_args && !(0)) { const char *__space; const char * __class_name = get_active_class_name(&__space ); zend_error((1<<1L), "%s%s%s() expects exactly 0 parameters, %d given", __class_name, __space, get_active_function_name(), __num_args); return -1; }};

  __builtin_va_start(va,type_spec);
  retval = zend_parse_va_args(num_args, type_spec, &va, 0 );
  __builtin_va_end(va);
 } else {
  p++;
  { int __num_args = (num_args); if (0 == (p)[0] && 0 != __num_args && !(0)) { const char *__space; const char * __class_name = get_active_class_name(&__space ); zend_error((1<<1L), "%s%s%s() expects exactly 0 parameters, %d given", __class_name, __space, get_active_function_name(), __num_args); return -1; }};

  __builtin_va_start(va,type_spec);

  object = __builtin_va_arg(va,zval **);
  ce = __builtin_va_arg(va,zend_class_entry *);
  *object = this_ptr;

  if (ce && !instanceof_function(zend_get_class_entry(&(*this_ptr) ), ce )) {
   zend_error((1<<4L), "%s::%s() must be derived from %s::%s",
    ce->name, get_active_function_name(), zend_get_class_entry(&(*this_ptr) )->name, get_active_function_name());
  }

  retval = zend_parse_va_args(num_args, p, &va, 0 );
  __builtin_va_end(va);
 }
 return retval;
}


__attribute__ ((visibility("default"))) int zend_parse_method_parameters_ex(int flags, int num_args , zval *this_ptr, const char *type_spec, ...)
{
 va_list va;
 int retval;
 const char *p = type_spec;
 zval **object;
 zend_class_entry *ce;
 int quiet = flags & 1<<1;

 if (!this_ptr) {
  { int __num_args = (num_args); if (0 == (p)[0] && 0 != __num_args && !(quiet)) { const char *__space; const char * __class_name = get_active_class_name(&__space ); zend_error((1<<1L), "%s%s%s() expects exactly 0 parameters, %d given", __class_name, __space, get_active_function_name(), __num_args); return -1; }};

  __builtin_va_start(va,type_spec);
  retval = zend_parse_va_args(num_args, type_spec, &va, flags );
  __builtin_va_end(va);
 } else {
  p++;
  { int __num_args = (num_args); if (0 == (p)[0] && 0 != __num_args && !(quiet)) { const char *__space; const char * __class_name = get_active_class_name(&__space ); zend_error((1<<1L), "%s%s%s() expects exactly 0 parameters, %d given", __class_name, __space, get_active_function_name(), __num_args); return -1; }};

  __builtin_va_start(va,type_spec);

  object = __builtin_va_arg(va,zval **);
  ce = __builtin_va_arg(va,zend_class_entry *);
  *object = this_ptr;

  if (ce && !instanceof_function(zend_get_class_entry(&(*this_ptr) ), ce )) {
   if (!quiet) {
    zend_error((1<<4L), "%s::%s() must be derived from %s::%s",
     ce->name, get_active_function_name(), zend_get_class_entry(&(*this_ptr) )->name, get_active_function_name());
   }
   __builtin_va_end(va);
   return -1;
  }

  retval = zend_parse_va_args(num_args, p, &va, flags );
  __builtin_va_end(va);
 }
 return retval;
}



__attribute__ ((visibility("default"))) int _array_init(zval *arg, uint size )
{
 ((*arg).value.ht) = (HashTable *) _emalloc((sizeof(HashTable)) );

 _zend_hash_init((*arg).value.ht, size, ((void *)0), (void (*)(void *)) _zval_ptr_dtor, 0 );
 (*arg).type = 4;
 return 0;
}


static int zend_merge_property(zval **value , int num_args, va_list args, const zend_hash_key *hash_key)
{

 if (hash_key->nKeyLength) {
  zval *obj = __builtin_va_arg(args,zval *);
  zend_object_handlers *obj_ht = __builtin_va_arg(args,zend_object_handlers *);
  zval *member;

  do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;;
  do { const char *__s=(hash_key->arKey); int __l=hash_key->nKeyLength-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
  obj_ht->write_property(obj, member, *value, 0 );
  _zval_ptr_dtor((&member) );
 }
 return 0;
}




__attribute__ ((visibility("default"))) void zend_merge_properties(zval *obj, HashTable *properties, int destroy_ht )
{
 const zend_object_handlers *obj_ht = (*obj).value.obj.handlers;
 zend_class_entry *old_scope = (executor_globals.scope);

 (executor_globals.scope) = zend_get_class_entry(&(*obj) );
 zend_hash_apply_with_arguments(properties , (apply_func_args_t)zend_merge_property, 2, obj, obj_ht);
 (executor_globals.scope) = old_scope;

 if (destroy_ht) {
  zend_hash_destroy(properties);
  _efree((properties) );
 }
}


__attribute__ ((visibility("default"))) void zend_update_class_constants(zend_class_entry *class_type )
{
 if ((class_type->ce_flags & 0x100000) == 0 || (!((class_type)->static_members_table) && class_type->default_static_members_count)) {
  zend_class_entry **scope = (executor_globals.in_execution)?&(executor_globals.scope):&(compiler_globals.active_class_entry);
  zend_class_entry *old_scope = *scope;
  int i;

  *scope = class_type;
  zend_hash_apply_with_argument(&class_type->constants_table, (apply_func_arg_t) zval_update_constant, (void*)1 );

  for (i = 0; i < class_type->default_properties_count; i++) {
   if (class_type->default_properties_table[i]) {
    zval_update_constant(&class_type->default_properties_table[i], (void**)1 );
   }
  }

  if (!((class_type)->static_members_table) && class_type->default_static_members_count) {
   zval **p;

   if (class_type->parent) {
    zend_update_class_constants(class_type->parent );
   }



   class_type->static_members_table = _emalloc((sizeof(zval*) * class_type->default_static_members_count) );

   for (i = 0; i < class_type->default_static_members_count; i++) {
    p = &class_type->default_static_members_table[i];
    if (zval_isref_p(*(p)) &&
     class_type->parent &&
     i < class_type->parent->default_static_members_count &&
     *p == class_type->parent->default_static_members_table[i] &&
     ((class_type->parent)->static_members_table)[i]
    ) {
     zval *q = ((class_type->parent)->static_members_table)[i];

     zval_addref_p(q);
     zval_set_isref_p(q);
     ((class_type)->static_members_table)[i] = q;
    } else {
     zval *r;

     do { (r) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(r))->u.buffered = ((void *)0); } while (0);
     *r = **p;
     (r)->refcount__gc = 1; (r)->is_ref__gc = 0;;
     _zval_copy_ctor((r) );
     ((class_type)->static_members_table)[i] = r;
    }
   }
  }

  for (i = 0; i < class_type->default_static_members_count; i++) {
   zval_update_constant(&((class_type)->static_members_table)[i], (void**)1 );
  }

  *scope = old_scope;
  class_type->ce_flags |= 0x100000;
 }
}


__attribute__ ((visibility("default"))) void object_properties_init(zend_object *object, zend_class_entry *class_type)
{
 int i;

 if (class_type->default_properties_count) {
  object->properties_table = _emalloc((sizeof(zval*) * class_type->default_properties_count) );
  for (i = 0; i < class_type->default_properties_count; i++) {
   object->properties_table[i] = class_type->default_properties_table[i];
   if (class_type->default_properties_table[i]) {
    zval_addref_p(object->properties_table[i]);
   }
  }
  object->properties = ((void *)0);
 }
}






__attribute__ ((visibility("default"))) int _object_and_properties_init(zval *arg, zend_class_entry *class_type, HashTable *properties )
{
 zend_object *object;

 if (class_type->ce_flags & (0x80|0x10|0x20)) {
  char *what = class_type->ce_flags & 0x80 ? "interface" : "abstract class";
  zend_error((1<<0L), "Cannot instantiate %s %s", what, class_type->name);
 }

 zend_update_class_constants(class_type );

 (*arg).type = 5;
 if (class_type->create_object == ((void *)0)) {
  (*arg).value.obj = zend_objects_new(&object, class_type );
  if (properties) {
   object->properties = properties;
   object->properties_table = ((void *)0);
  } else {
   object_properties_init(object, class_type);
  }
 } else {
  (*arg).value.obj = class_type->create_object(class_type );
 }
 return 0;
}


__attribute__ ((visibility("default"))) int _object_init_ex(zval *arg, zend_class_entry *class_type )
{
 return _object_and_properties_init(arg, class_type, 0 );
}


__attribute__ ((visibility("default"))) int _object_init(zval *arg )
{
 return _object_init_ex(arg, zend_standard_class_def );
}


__attribute__ ((visibility("default"))) int add_assoc_function(zval *arg, const char *key, void (*function_ptr)(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used ))
{
 zend_error((1<<1L), "add_assoc_function() is no longer supported");
 return -1;
}


__attribute__ ((visibility("default"))) int add_assoc_long_ex(zval *arg, const char *key, uint key_len, long n)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { zval *__z = (tmp); (*__z).value.lval = n; (*__z).type = 1; };

 return zend_symtable_update((*arg).value.ht, key, key_len, (void *) &tmp, sizeof(zval *), ((void *)0));
}


__attribute__ ((visibility("default"))) int add_assoc_null_ex(zval *arg, const char *key, uint key_len)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { (*tmp).type = 0; };

 return zend_symtable_update((*arg).value.ht, key, key_len, (void *) &tmp, sizeof(zval *), ((void *)0));
}


__attribute__ ((visibility("default"))) int add_assoc_bool_ex(zval *arg, const char *key, uint key_len, int b)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { zval *__z = (tmp); (*__z).value.lval = ((b) != 0); (*__z).type = 3; } while (0);

 return zend_symtable_update((*arg).value.ht, key, key_len, (void *) &tmp, sizeof(zval *), ((void *)0));
}


__attribute__ ((visibility("default"))) int add_assoc_resource_ex(zval *arg, const char *key, uint key_len, int r)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { zval *__z = (tmp); (*__z).value.lval = r; (*__z).type = 7; } while (0);

 return zend_symtable_update((*arg).value.ht, key, key_len, (void *) &tmp, sizeof(zval *), ((void *)0));
}


__attribute__ ((visibility("default"))) int add_assoc_double_ex(zval *arg, const char *key, uint key_len, double d)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { zval *__z = (tmp); (*__z).value.dval = d; (*__z).type = 2; };

 return zend_symtable_update((*arg).value.ht, key, key_len, (void *) &tmp, sizeof(zval *), ((void *)0));
}


__attribute__ ((visibility("default"))) int add_assoc_string_ex(zval *arg, const char *key, uint key_len, char *str, int duplicate)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); zval *__z = (tmp); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (duplicate?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);

 return zend_symtable_update((*arg).value.ht, key, key_len, (void *) &tmp, sizeof(zval *), ((void *)0));
}


__attribute__ ((visibility("default"))) int add_assoc_stringl_ex(zval *arg, const char *key, uint key_len, char *str, uint length, int duplicate)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); int __l=length; zval *__z = (tmp); (*__z).value.str.len = __l; (*__z).value.str.val = (duplicate?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 return zend_symtable_update((*arg).value.ht, key, key_len, (void *) &tmp, sizeof(zval *), ((void *)0));
}


__attribute__ ((visibility("default"))) int add_assoc_zval_ex(zval *arg, const char *key, uint key_len, zval *value)
{
 return zend_symtable_update((*arg).value.ht, key, key_len, (void *) &value, sizeof(zval *), ((void *)0));
}


__attribute__ ((visibility("default"))) int add_index_long(zval *arg, ulong index, long n)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { zval *__z = (tmp); (*__z).value.lval = n; (*__z).type = 1; };

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &tmp, sizeof(zval *), ((void *)0), (1<<0) );
}


__attribute__ ((visibility("default"))) int add_index_null(zval *arg, ulong index)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { (*tmp).type = 0; };

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &tmp, sizeof(zval *), ((void *)0), (1<<0) );
}


__attribute__ ((visibility("default"))) int add_index_bool(zval *arg, ulong index, int b)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { zval *__z = (tmp); (*__z).value.lval = ((b) != 0); (*__z).type = 3; } while (0);

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &tmp, sizeof(zval *), ((void *)0), (1<<0) );
}


__attribute__ ((visibility("default"))) int add_index_resource(zval *arg, ulong index, int r)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { zval *__z = (tmp); (*__z).value.lval = r; (*__z).type = 7; } while (0);

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &tmp, sizeof(zval *), ((void *)0), (1<<0) );
}


__attribute__ ((visibility("default"))) int add_index_double(zval *arg, ulong index, double d)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { zval *__z = (tmp); (*__z).value.dval = d; (*__z).type = 2; };

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &tmp, sizeof(zval *), ((void *)0), (1<<0) );
}


__attribute__ ((visibility("default"))) int add_index_string(zval *arg, ulong index, const char *str, int duplicate)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); zval *__z = (tmp); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (duplicate?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &tmp, sizeof(zval *), ((void *)0), (1<<0) );
}


__attribute__ ((visibility("default"))) int add_index_stringl(zval *arg, ulong index, const char *str, uint length, int duplicate)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); int __l=length; zval *__z = (tmp); (*__z).value.str.len = __l; (*__z).value.str.val = (duplicate?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &tmp, sizeof(zval *), ((void *)0), (1<<0) );
}


__attribute__ ((visibility("default"))) int add_index_zval(zval *arg, ulong index, zval *value)
{
 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &value, sizeof(zval *), ((void *)0), (1<<0) );
}


__attribute__ ((visibility("default"))) int add_next_index_long(zval *arg, long n)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { zval *__z = (tmp); (*__z).value.lval = n; (*__z).type = 1; };

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, 0, &tmp, sizeof(zval *), ((void *)0), (1<<2) );
}


__attribute__ ((visibility("default"))) int add_next_index_null(zval *arg)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { (*tmp).type = 0; };

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, 0, &tmp, sizeof(zval *), ((void *)0), (1<<2) );
}


__attribute__ ((visibility("default"))) int add_next_index_bool(zval *arg, int b)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { zval *__z = (tmp); (*__z).value.lval = ((b) != 0); (*__z).type = 3; } while (0);

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, 0, &tmp, sizeof(zval *), ((void *)0), (1<<2) );
}


__attribute__ ((visibility("default"))) int add_next_index_resource(zval *arg, int r)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { zval *__z = (tmp); (*__z).value.lval = r; (*__z).type = 7; } while (0);

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, 0, &tmp, sizeof(zval *), ((void *)0), (1<<2) );
}


__attribute__ ((visibility("default"))) int add_next_index_double(zval *arg, double d)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { zval *__z = (tmp); (*__z).value.dval = d; (*__z).type = 2; };

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, 0, &tmp, sizeof(zval *), ((void *)0), (1<<2) );
}


__attribute__ ((visibility("default"))) int add_next_index_string(zval *arg, const char *str, int duplicate)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); zval *__z = (tmp); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (duplicate?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, 0, &tmp, sizeof(zval *), ((void *)0), (1<<2) );
}


__attribute__ ((visibility("default"))) int add_next_index_stringl(zval *arg, const char *str, uint length, int duplicate)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); int __l=length; zval *__z = (tmp); (*__z).value.str.len = __l; (*__z).value.str.val = (duplicate?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, 0, &tmp, sizeof(zval *), ((void *)0), (1<<2) );
}


__attribute__ ((visibility("default"))) int add_next_index_zval(zval *arg, zval *value)
{
 return _zend_hash_index_update_or_next_insert((*arg).value.ht, 0, &value, sizeof(zval *), ((void *)0), (1<<2) );
}


__attribute__ ((visibility("default"))) int add_get_assoc_string_ex(zval *arg, const char *key, uint key_len, const char *str, void **dest, int duplicate)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); zval *__z = (tmp); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (duplicate?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);

 return zend_symtable_update((*arg).value.ht, key, key_len, (void *) &tmp, sizeof(zval *), dest);
}


__attribute__ ((visibility("default"))) int add_get_assoc_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length, void **dest, int duplicate)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); int __l=length; zval *__z = (tmp); (*__z).value.str.len = __l; (*__z).value.str.val = (duplicate?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 return zend_symtable_update((*arg).value.ht, key, key_len, (void *) &tmp, sizeof(zval *), dest);
}


__attribute__ ((visibility("default"))) int add_get_index_long(zval *arg, ulong index, long l, void **dest)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { zval *__z = (tmp); (*__z).value.lval = l; (*__z).type = 1; };

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &tmp, sizeof(zval *), dest, (1<<0) );
}


__attribute__ ((visibility("default"))) int add_get_index_double(zval *arg, ulong index, double d, void **dest)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { zval *__z = (tmp); (*__z).value.dval = d; (*__z).type = 2; };

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &tmp, sizeof(zval *), dest, (1<<0) );
}


__attribute__ ((visibility("default"))) int add_get_index_string(zval *arg, ulong index, const char *str, void **dest, int duplicate)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); zval *__z = (tmp); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (duplicate?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &tmp, sizeof(zval *), dest, (1<<0) );
}


__attribute__ ((visibility("default"))) int add_get_index_stringl(zval *arg, ulong index, const char *str, uint length, void **dest, int duplicate)
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); int __l=length; zval *__z = (tmp); (*__z).value.str.len = __l; (*__z).value.str.val = (duplicate?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 return _zend_hash_index_update_or_next_insert((*arg).value.ht, index, (void *) &tmp, sizeof(zval *), dest, (1<<0) );
}


__attribute__ ((visibility("default"))) int add_property_long_ex(zval *arg, const char *key, uint key_len, long n )
{
 zval *tmp;
 zval *z_key;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { zval *__z = (tmp); (*__z).value.lval = n; (*__z).type = 1; };

 do { (z_key) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(z_key))->u.buffered = ((void *)0); } while (0); (z_key)->refcount__gc = 1; (z_key)->is_ref__gc = 0;;;
 do { const char *__s=(key); int __l=key_len-1; zval *__z = (z_key); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 ((*arg)).value.obj.handlers->write_property(arg, z_key, tmp, 0 );
 _zval_ptr_dtor((&tmp) );
 _zval_ptr_dtor((&z_key) );
 return 0;
}


__attribute__ ((visibility("default"))) int add_property_bool_ex(zval *arg, const char *key, uint key_len, int b )
{
 zval *tmp;
 zval *z_key;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { zval *__z = (tmp); (*__z).value.lval = ((b) != 0); (*__z).type = 3; } while (0);

 do { (z_key) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(z_key))->u.buffered = ((void *)0); } while (0); (z_key)->refcount__gc = 1; (z_key)->is_ref__gc = 0;;;
 do { const char *__s=(key); int __l=key_len-1; zval *__z = (z_key); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 ((*arg)).value.obj.handlers->write_property(arg, z_key, tmp, 0 );
 _zval_ptr_dtor((&tmp) );
 _zval_ptr_dtor((&z_key) );
 return 0;
}


__attribute__ ((visibility("default"))) int add_property_null_ex(zval *arg, const char *key, uint key_len )
{
 zval *tmp;
 zval *z_key;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { (*tmp).type = 0; };

 do { (z_key) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(z_key))->u.buffered = ((void *)0); } while (0); (z_key)->refcount__gc = 1; (z_key)->is_ref__gc = 0;;;
 do { const char *__s=(key); int __l=key_len-1; zval *__z = (z_key); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 ((*arg)).value.obj.handlers->write_property(arg, z_key, tmp, 0 );
 _zval_ptr_dtor((&tmp) );
 _zval_ptr_dtor((&z_key) );
 return 0;
}


__attribute__ ((visibility("default"))) int add_property_resource_ex(zval *arg, const char *key, uint key_len, long n )
{
 zval *tmp;
 zval *z_key;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { zval *__z = (tmp); (*__z).value.lval = n; (*__z).type = 7; } while (0);

 do { (z_key) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(z_key))->u.buffered = ((void *)0); } while (0); (z_key)->refcount__gc = 1; (z_key)->is_ref__gc = 0;;;
 do { const char *__s=(key); int __l=key_len-1; zval *__z = (z_key); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 ((*arg)).value.obj.handlers->write_property(arg, z_key, tmp, 0 );
 _zval_ptr_dtor((&tmp) );
 _zval_ptr_dtor((&z_key) );
 return 0;
}


__attribute__ ((visibility("default"))) int add_property_double_ex(zval *arg, const char *key, uint key_len, double d )
{
 zval *tmp;
 zval *z_key;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 { zval *__z = (tmp); (*__z).value.dval = d; (*__z).type = 2; };

 do { (z_key) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(z_key))->u.buffered = ((void *)0); } while (0); (z_key)->refcount__gc = 1; (z_key)->is_ref__gc = 0;;;
 do { const char *__s=(key); int __l=key_len-1; zval *__z = (z_key); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 ((*arg)).value.obj.handlers->write_property(arg, z_key, tmp, 0 );
 _zval_ptr_dtor((&tmp) );
 _zval_ptr_dtor((&z_key) );
 return 0;
}


__attribute__ ((visibility("default"))) int add_property_string_ex(zval *arg, const char *key, uint key_len, const char *str, int duplicate )
{
 zval *tmp;
 zval *z_key;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); zval *__z = (tmp); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (duplicate?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);

 do { (z_key) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(z_key))->u.buffered = ((void *)0); } while (0); (z_key)->refcount__gc = 1; (z_key)->is_ref__gc = 0;;;
 do { const char *__s=(key); int __l=key_len-1; zval *__z = (z_key); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 ((*arg)).value.obj.handlers->write_property(arg, z_key, tmp, 0 );
 _zval_ptr_dtor((&tmp) );
 _zval_ptr_dtor((&z_key) );
 return 0;
}


__attribute__ ((visibility("default"))) int add_property_stringl_ex(zval *arg, const char *key, uint key_len, const char *str, uint length, int duplicate )
{
 zval *tmp;
 zval *z_key;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0); (tmp)->refcount__gc = 1; (tmp)->is_ref__gc = 0;;;
 do { const char *__s=(str); int __l=length; zval *__z = (tmp); (*__z).value.str.len = __l; (*__z).value.str.val = (duplicate?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 do { (z_key) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(z_key))->u.buffered = ((void *)0); } while (0); (z_key)->refcount__gc = 1; (z_key)->is_ref__gc = 0;;;
 do { const char *__s=(key); int __l=key_len-1; zval *__z = (z_key); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 ((*arg)).value.obj.handlers->write_property(arg, z_key, tmp, 0 );
 _zval_ptr_dtor((&tmp) );
 _zval_ptr_dtor((&z_key) );
 return 0;
}


__attribute__ ((visibility("default"))) int add_property_zval_ex(zval *arg, const char *key, uint key_len, zval *value )
{
 zval *z_key;

 do { (z_key) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(z_key))->u.buffered = ((void *)0); } while (0); (z_key)->refcount__gc = 1; (z_key)->is_ref__gc = 0;;;
 do { const char *__s=(key); int __l=key_len-1; zval *__z = (z_key); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 ((*arg)).value.obj.handlers->write_property(arg, z_key, value, 0 );
 _zval_ptr_dtor((&z_key) );
 return 0;
}


__attribute__ ((visibility("default"))) int zend_startup_module_ex(zend_module_entry *module )
{
 int name_len;
 char *lcname;

 if (module->module_started) {
  return 0;
 }
 module->module_started = 1;


 if (module->deps) {
  const zend_module_dep *dep = module->deps;

  while (dep->name) {
   if (dep->type == 1) {
    zend_module_entry *req_mod;

    name_len = strlen(dep->name);
    lcname = zend_str_tolower_dup(dep->name, name_len);

    if (zend_hash_find(&module_registry, lcname, name_len+1, (void**)&req_mod) == -1 || !req_mod->module_started) {
     _efree((lcname) );

     zend_error((1<<5L), "Cannot load module '%s' because required module '%s' is not loaded", module->name, dep->name);
     module->module_started = 0;
     return -1;
    }
    _efree((lcname) );
   }
   ++dep;
  }
 }


 if (module->globals_size) {



  if (module->globals_ctor) {
   module->globals_ctor(module->globals_ptr );
  }

 }
 if (module->module_startup_func) {
  (executor_globals.current_module) = module;
  if (module->module_startup_func(module->type, module->module_number )==-1) {
   zend_error((1<<4L),"Unable to start %s module", module->name);
   (executor_globals.current_module) = ((void *)0);
   return -1;
  }
  (executor_globals.current_module) = ((void *)0);
 }
 return 0;
}


static void zend_sort_modules(void *base, size_t count, size_t siz, compare_func_t compare )
{
 Bucket **b1 = base;
 Bucket **b2;
 Bucket **end = b1 + count;
 Bucket *tmp;
 zend_module_entry *m, *r;

 while (b1 < end) {
try_again:
  m = (zend_module_entry*)(*b1)->pData;
  if (!m->module_started && m->deps) {
   const zend_module_dep *dep = m->deps;
   while (dep->name) {
    if (dep->type == 1 || dep->type == 3) {
     b2 = b1 + 1;
     while (b2 < end) {
      r = (zend_module_entry*)(*b2)->pData;
      if (strcasecmp(dep->name, r->name) == 0) {
       tmp = *b1;
       *b1 = *b2;
       *b2 = tmp;
       goto try_again;
      }
      b2++;
     }
    }
    dep++;
   }
  }
  b1++;
 }
}


__attribute__ ((visibility("default"))) void zend_collect_module_handlers(void)
{
 HashPosition pos;
 zend_module_entry *module;
 int startup_count = 0;
 int shutdown_count = 0;
 int post_deactivate_count = 0;
 zend_class_entry **pce;
 int class_count = 0;


 for (zend_hash_internal_pointer_reset_ex(&module_registry, &pos);
      zend_hash_get_current_data_ex(&module_registry, (void *) &module, &pos) == 0;
      zend_hash_move_forward_ex(&module_registry, &pos)) {
  if (module->request_startup_func) {
   startup_count++;
  }
  if (module->request_shutdown_func) {
   shutdown_count++;
  }
  if (module->post_deactivate_func) {
   post_deactivate_count++;
  }
 }
 module_request_startup_handlers = (zend_module_entry**)malloc(
     sizeof(zend_module_entry*) *
  (startup_count + 1 +
   shutdown_count + 1 +
   post_deactivate_count + 1));
 module_request_startup_handlers[startup_count] = ((void *)0);
 module_request_shutdown_handlers = module_request_startup_handlers + startup_count + 1;
 module_request_shutdown_handlers[shutdown_count] = ((void *)0);
 module_post_deactivate_handlers = module_request_shutdown_handlers + shutdown_count + 1;
 module_post_deactivate_handlers[post_deactivate_count] = ((void *)0);
 startup_count = 0;

 for (zend_hash_internal_pointer_reset_ex(&module_registry, &pos);
      zend_hash_get_current_data_ex(&module_registry, (void *) &module, &pos) == 0;
      zend_hash_move_forward_ex(&module_registry, &pos)) {
  if (module->request_startup_func) {
   module_request_startup_handlers[startup_count++] = module;
  }
  if (module->request_shutdown_func) {
   module_request_shutdown_handlers[--shutdown_count] = module;
  }
  if (module->post_deactivate_func) {
   module_post_deactivate_handlers[--post_deactivate_count] = module;
  }
 }


 for (zend_hash_internal_pointer_reset_ex((compiler_globals.class_table), &pos);
      zend_hash_get_current_data_ex((compiler_globals.class_table), (void *) &pce, &pos) == 0;
      zend_hash_move_forward_ex((compiler_globals.class_table), &pos)) {
  if ((*pce)->type == 1 &&
      (*pce)->default_static_members_count > 0) {
      class_count++;
  }
 }

 class_cleanup_handlers = (zend_class_entry**)malloc(
  sizeof(zend_class_entry*) *
  (class_count + 1));
 class_cleanup_handlers[class_count] = ((void *)0);

 if (class_count) {
  for (zend_hash_internal_pointer_reset_ex((compiler_globals.class_table), &pos);
       zend_hash_get_current_data_ex((compiler_globals.class_table), (void *) &pce, &pos) == 0;
       zend_hash_move_forward_ex((compiler_globals.class_table), &pos)) {
   if ((*pce)->type == 1 &&
       (*pce)->default_static_members_count > 0) {
       class_cleanup_handlers[--class_count] = *pce;
   }
  }
 }
}


__attribute__ ((visibility("default"))) int zend_startup_modules(void)
{
 zend_hash_sort(&module_registry, zend_sort_modules, ((void *)0), 0 );
 zend_hash_apply(&module_registry, (apply_func_t)zend_startup_module_ex );
 return 0;
}


__attribute__ ((visibility("default"))) void zend_destroy_modules(void)
{
 free(class_cleanup_handlers);
 free(module_request_startup_handlers);
 zend_hash_graceful_reverse_destroy(&module_registry);
}


__attribute__ ((visibility("default"))) zend_module_entry* zend_register_module_ex(zend_module_entry *module )
{
 int name_len;
 char *lcname;
 zend_module_entry *module_ptr;

 if (!module) {
  return ((void *)0);
 }






 if (module->deps) {
  const zend_module_dep *dep = module->deps;

  while (dep->name) {
   if (dep->type == 2) {
    name_len = strlen(dep->name);
    lcname = zend_str_tolower_dup(dep->name, name_len);

    if (zend_hash_exists(&module_registry, lcname, name_len+1)) {
     _efree((lcname) );

     zend_error((1<<5L), "Cannot load module '%s' because conflicting module '%s' is already loaded", module->name, dep->name);
     return ((void *)0);
    }
    _efree((lcname) );
   }
   ++dep;
  }
 }

 name_len = strlen(module->name);
 lcname = zend_str_tolower_dup(module->name, name_len);

 if (_zend_hash_add_or_update(&module_registry, lcname, name_len+1, (void *)module, sizeof(zend_module_entry), (void**)&module_ptr, (1<<1) )==-1) {
  zend_error((1<<5L), "Module '%s' already loaded", module->name);
  _efree((lcname) );
  return ((void *)0);
 }
 _efree((lcname) );
 module = module_ptr;
 (executor_globals.current_module) = module;

 if (module->functions && zend_register_functions(((void *)0), module->functions, ((void *)0), module->type )==-1) {
  (executor_globals.current_module) = ((void *)0);
  zend_error((1<<5L),"%s: Unable to register functions, unable to load", module->name);
  return ((void *)0);
 }

 (executor_globals.current_module) = ((void *)0);
 return module;
}


__attribute__ ((visibility("default"))) zend_module_entry* zend_register_internal_module(zend_module_entry *module )
{
 module->module_number = zend_next_free_module();
 module->type = 1;
 return zend_register_module_ex(module );
}


__attribute__ ((visibility("default"))) void zend_check_magic_method_implementation(const zend_class_entry *ce, const zend_function *fptr, int error_type )
{
 char lcname[16];
 int name_len;



 name_len = strlen(fptr->common.function_name);
 zend_str_tolower_copy(lcname, fptr->common.function_name, (((name_len)<(sizeof(lcname)-1))?(name_len):(sizeof(lcname)-1)));
 lcname[sizeof(lcname)-1] = '\0';

 if (name_len == sizeof("__destruct") - 1 && !memcmp(lcname, "__destruct", sizeof("__destruct")) && fptr->common.num_args != 0) {
  zend_error(error_type, "Destructor %s::%s() cannot take arguments", ce->name, "__destruct");
 } else if (name_len == sizeof("__clone") - 1 && !memcmp(lcname, "__clone", sizeof("__clone")) && fptr->common.num_args != 0) {
  zend_error(error_type, "Method %s::%s() cannot accept any arguments", ce->name, "__clone");
 } else if (name_len == sizeof("__get") - 1 && !memcmp(lcname, "__get", sizeof("__get"))) {
  if (fptr->common.num_args != 1) {
   zend_error(error_type, "Method %s::%s() must take exactly 1 argument", ce->name, "__get");
  } else if (((fptr) && ((((zend_function*)(fptr))->common.arg_info && 1 <= ((zend_function*)(fptr))->common.num_args) ? (((zend_function *)(fptr))->common.arg_info[1 -1].pass_by_reference & (1|2)) : (((zend_function *)(fptr))->common.fn_flags & (0x1000000|0x2000000))))) {
   zend_error(error_type, "Method %s::%s() cannot take arguments by reference", ce->name, "__get");
  }
 } else if (name_len == sizeof("__set") - 1 && !memcmp(lcname, "__set", sizeof("__set"))) {
  if (fptr->common.num_args != 2) {
   zend_error(error_type, "Method %s::%s() must take exactly 2 arguments", ce->name, "__set");
  } else if (((fptr) && ((((zend_function*)(fptr))->common.arg_info && 1 <= ((zend_function*)(fptr))->common.num_args) ? (((zend_function *)(fptr))->common.arg_info[1 -1].pass_by_reference & (1|2)) : (((zend_function *)(fptr))->common.fn_flags & (0x1000000|0x2000000)))) || ((fptr) && ((((zend_function*)(fptr))->common.arg_info && 2 <= ((zend_function*)(fptr))->common.num_args) ? (((zend_function *)(fptr))->common.arg_info[2 -1].pass_by_reference & (1|2)) : (((zend_function *)(fptr))->common.fn_flags & (0x1000000|0x2000000))))) {
   zend_error(error_type, "Method %s::%s() cannot take arguments by reference", ce->name, "__set");
  }
 } else if (name_len == sizeof("__unset") - 1 && !memcmp(lcname, "__unset", sizeof("__unset"))) {
  if (fptr->common.num_args != 1) {
   zend_error(error_type, "Method %s::%s() must take exactly 1 argument", ce->name, "__unset");
  } else if (((fptr) && ((((zend_function*)(fptr))->common.arg_info && 1 <= ((zend_function*)(fptr))->common.num_args) ? (((zend_function *)(fptr))->common.arg_info[1 -1].pass_by_reference & (1|2)) : (((zend_function *)(fptr))->common.fn_flags & (0x1000000|0x2000000))))) {
   zend_error(error_type, "Method %s::%s() cannot take arguments by reference", ce->name, "__unset");
  }
 } else if (name_len == sizeof("__isset") - 1 && !memcmp(lcname, "__isset", sizeof("__isset"))) {
  if (fptr->common.num_args != 1) {
   zend_error(error_type, "Method %s::%s() must take exactly 1 argument", ce->name, "__isset");
  } else if (((fptr) && ((((zend_function*)(fptr))->common.arg_info && 1 <= ((zend_function*)(fptr))->common.num_args) ? (((zend_function *)(fptr))->common.arg_info[1 -1].pass_by_reference & (1|2)) : (((zend_function *)(fptr))->common.fn_flags & (0x1000000|0x2000000))))) {
   zend_error(error_type, "Method %s::%s() cannot take arguments by reference", ce->name, "__isset");
  }
 } else if (name_len == sizeof("__call") - 1 && !memcmp(lcname, "__call", sizeof("__call"))) {
  if (fptr->common.num_args != 2) {
   zend_error(error_type, "Method %s::%s() must take exactly 2 arguments", ce->name, "__call");
  } else if (((fptr) && ((((zend_function*)(fptr))->common.arg_info && 1 <= ((zend_function*)(fptr))->common.num_args) ? (((zend_function *)(fptr))->common.arg_info[1 -1].pass_by_reference & (1|2)) : (((zend_function *)(fptr))->common.fn_flags & (0x1000000|0x2000000)))) || ((fptr) && ((((zend_function*)(fptr))->common.arg_info && 2 <= ((zend_function*)(fptr))->common.num_args) ? (((zend_function *)(fptr))->common.arg_info[2 -1].pass_by_reference & (1|2)) : (((zend_function *)(fptr))->common.fn_flags & (0x1000000|0x2000000))))) {
   zend_error(error_type, "Method %s::%s() cannot take arguments by reference", ce->name, "__call");
  }
 } else if (name_len == sizeof("__callstatic") - 1 &&
  !memcmp(lcname, "__callstatic", sizeof("__callstatic")-1)
 ) {
  if (fptr->common.num_args != 2) {
   zend_error(error_type, "Method %s::%s() must take exactly 2 arguments", ce->name, "__callstatic");
  } else if (((fptr) && ((((zend_function*)(fptr))->common.arg_info && 1 <= ((zend_function*)(fptr))->common.num_args) ? (((zend_function *)(fptr))->common.arg_info[1 -1].pass_by_reference & (1|2)) : (((zend_function *)(fptr))->common.fn_flags & (0x1000000|0x2000000)))) || ((fptr) && ((((zend_function*)(fptr))->common.arg_info && 2 <= ((zend_function*)(fptr))->common.num_args) ? (((zend_function *)(fptr))->common.arg_info[2 -1].pass_by_reference & (1|2)) : (((zend_function *)(fptr))->common.fn_flags & (0x1000000|0x2000000))))) {
   zend_error(error_type, "Method %s::%s() cannot take arguments by reference", ce->name, "__callstatic");
  }
  } else if (name_len == sizeof("__tostring") - 1 &&
   !memcmp(lcname, "__tostring", sizeof("__tostring")-1) && fptr->common.num_args != 0
 ) {
  zend_error(error_type, "Method %s::%s() cannot take arguments", ce->name, "__tostring");
 }
}



__attribute__ ((visibility("default"))) int zend_register_functions(zend_class_entry *scope, const zend_function_entry *functions, HashTable *function_table, int type )
{
 const zend_function_entry *ptr = functions;
 zend_function function, *reg_function;
 zend_internal_function *internal_function = (zend_internal_function *)&function;
 int count=0, unload=0, result=0;
 HashTable *target_function_table = function_table;
 int error_type;
 zend_function *ctor = ((void *)0), *dtor = ((void *)0), *clone = ((void *)0), *__get = ((void *)0), *__set = ((void *)0), *__unset = ((void *)0), *__isset = ((void *)0), *__call = ((void *)0), *__callstatic = ((void *)0), *__tostring = ((void *)0);
 const char *lowercase_name;
 int fname_len;
 const char *lc_class_name = ((void *)0);
 int class_name_len = 0;

 if (type==1) {
  error_type = (1<<5L);
 } else {
  error_type = (1<<1L);
 }

 if (!target_function_table) {
  target_function_table = (compiler_globals.function_table);
 }
 internal_function->type = 1;
 internal_function->module = (executor_globals.current_module);

 if (scope) {
  class_name_len = strlen(scope->name);
  if ((lc_class_name = zend_memrchr(scope->name, '\\', class_name_len))) {
   ++lc_class_name;
   class_name_len -= (lc_class_name - scope->name);
   lc_class_name = zend_str_tolower_dup(lc_class_name, class_name_len);
  } else {
   lc_class_name = zend_str_tolower_dup(scope->name, class_name_len);
  }
 }

 while (ptr->fname) {
  internal_function->handler = ptr->handler;
  internal_function->function_name = (char*)ptr->fname;
  internal_function->scope = scope;
  internal_function->prototype = ((void *)0);
  if (ptr->flags) {
   if (!(ptr->flags & (0x100 | 0x200 | 0x400))) {
    if (ptr->flags != 0x40000 || scope) {
     zend_error(error_type, "Invalid access level for %s%s%s() - access must be exactly one of public, protected or private", scope ? scope->name : "", scope ? "::" : "", ptr->fname);
    }
    internal_function->fn_flags = 0x100 | ptr->flags;
   } else {
    internal_function->fn_flags = ptr->flags;
   }
  } else {
   internal_function->fn_flags = 0x100;
  }
  if (ptr->arg_info) {
   zend_internal_function_info *info = (zend_internal_function_info*)ptr->arg_info;

   internal_function->arg_info = (zend_arg_info*)ptr->arg_info+1;
   internal_function->num_args = ptr->num_args;

   if (info->required_num_args == -1) {
    internal_function->required_num_args = ptr->num_args;
   } else {
    internal_function->required_num_args = info->required_num_args;
   }
   if (info->pass_rest_by_reference) {
    if (info->pass_rest_by_reference == 2) {
     internal_function->fn_flags |= 0x2000000;
    } else {
     internal_function->fn_flags |= 0x1000000;
    }
   }
   if (info->return_reference) {
    internal_function->fn_flags |= 0x4000000;
   }
  } else {
   internal_function->arg_info = ((void *)0);
   internal_function->num_args = 0;
   internal_function->required_num_args = 0;
  }
  if (ptr->flags & 0x02) {
   if (scope) {

    scope->ce_flags |= 0x10;
    if (!(scope->ce_flags & 0x80)) {



     scope->ce_flags |= 0x20;
    }
   }
   if (ptr->flags & 0x01 && (!scope || !(scope->ce_flags & 0x80))) {
    zend_error(error_type, "Static function %s%s%s() cannot be abstract", scope ? scope->name : "", scope ? "::" : "", ptr->fname);
   }
  } else {
   if (scope && (scope->ce_flags & 0x80)) {
    _efree(((char*)lc_class_name) );
    zend_error(error_type, "Interface %s cannot contain non abstract method %s()", scope->name, ptr->fname);
    return -1;
   }
   if (!internal_function->handler) {
    if (scope) {
     _efree(((char*)lc_class_name) );
    }
    zend_error(error_type, "Method %s%s%s() cannot be a NULL function", scope ? scope->name : "", scope ? "::" : "", ptr->fname);
    zend_unregister_functions(functions, count, target_function_table );
    return -1;
   }
  }
  fname_len = strlen(ptr->fname);
  lowercase_name = zend_new_interned_string(zend_str_tolower_dup(ptr->fname, fname_len), fname_len + 1, 1 );
  if ((((lowercase_name) >= (compiler_globals.interned_strings_start)) && ((lowercase_name) < (compiler_globals.interned_strings_end)))) {
   result = _zend_hash_quick_add_or_update(target_function_table, lowercase_name, fname_len+1, (((Bucket*)(((char*)(lowercase_name))-sizeof(Bucket)))->h), &function, sizeof(zend_function), (void**)&reg_function, (1<<1) );
  } else {
   result = _zend_hash_add_or_update(target_function_table, lowercase_name, fname_len+1, &function, sizeof(zend_function), (void**)&reg_function, (1<<1) );
  }
  if (result == -1) {
   unload=1;
   do { if (!(((lowercase_name) >= (compiler_globals.interned_strings_start)) && ((lowercase_name) < (compiler_globals.interned_strings_end)))) { _efree(((char*)lowercase_name) ); } } while (0);
   break;
  }
  if (scope) {




   if ((fname_len == class_name_len) && !ctor && !memcmp(lowercase_name, lc_class_name, class_name_len+1)) {
    ctor = reg_function;
   } else if ((fname_len == sizeof("__construct")-1) && !memcmp(lowercase_name, "__construct", sizeof("__construct"))) {
    ctor = reg_function;
   } else if ((fname_len == sizeof("__destruct")-1) && !memcmp(lowercase_name, "__destruct", sizeof("__destruct"))) {
    dtor = reg_function;
    if (internal_function->num_args) {
     zend_error(error_type, "Destructor %s::%s() cannot take arguments", scope->name, ptr->fname);
    }
   } else if ((fname_len == sizeof("__clone")-1) && !memcmp(lowercase_name, "__clone", sizeof("__clone"))) {
    clone = reg_function;
   } else if ((fname_len == sizeof("__call")-1) && !memcmp(lowercase_name, "__call", sizeof("__call"))) {
    __call = reg_function;
   } else if ((fname_len == sizeof("__callstatic")-1) && !memcmp(lowercase_name, "__callstatic", sizeof("__callstatic"))) {
    __callstatic = reg_function;
   } else if ((fname_len == sizeof("__tostring")-1) && !memcmp(lowercase_name, "__tostring", sizeof("__tostring"))) {
    __tostring = reg_function;
   } else if ((fname_len == sizeof("__get")-1) && !memcmp(lowercase_name, "__get", sizeof("__get"))) {
    __get = reg_function;
   } else if ((fname_len == sizeof("__set")-1) && !memcmp(lowercase_name, "__set", sizeof("__set"))) {
    __set = reg_function;
   } else if ((fname_len == sizeof("__unset")-1) && !memcmp(lowercase_name, "__unset", sizeof("__unset"))) {
    __unset = reg_function;
   } else if ((fname_len == sizeof("__isset")-1) && !memcmp(lowercase_name, "__isset", sizeof("__isset"))) {
    __isset = reg_function;
   } else {
    reg_function = ((void *)0);
   }
   if (reg_function) {
    zend_check_magic_method_implementation(scope, reg_function, error_type );
   }
  }
  ptr++;
  count++;
  do { if (!(((lowercase_name) >= (compiler_globals.interned_strings_start)) && ((lowercase_name) < (compiler_globals.interned_strings_end)))) { _efree(((char*)lowercase_name) ); } } while (0);
 }
 if (unload) {
  if (scope) {
   _efree(((char*)lc_class_name) );
  }
  while (ptr->fname) {
   fname_len = strlen(ptr->fname);
   lowercase_name = zend_str_tolower_dup(ptr->fname, fname_len);
   if (zend_hash_exists(target_function_table, lowercase_name, fname_len+1)) {
    zend_error(error_type, "Function registration failed - duplicate name - %s%s%s", scope ? scope->name : "", scope ? "::" : "", ptr->fname);
   }
   _efree(((char*)lowercase_name) );
   ptr++;
  }
  zend_unregister_functions(functions, count, target_function_table );
  return -1;
 }
 if (scope) {
  scope->constructor = ctor;
  scope->destructor = dtor;
  scope->clone = clone;
  scope->__call = __call;
  scope->__callstatic = __callstatic;
  scope->__tostring = __tostring;
  scope->__get = __get;
  scope->__set = __set;
  scope->__unset = __unset;
  scope->__isset = __isset;
  if (ctor) {
   ctor->common.fn_flags |= 0x2000;
   if (ctor->common.fn_flags & 0x01) {
    zend_error(error_type, "Constructor %s::%s() cannot be static", scope->name, ctor->common.function_name);
   }
   ctor->common.fn_flags &= ~0x10000;
  }
  if (dtor) {
   dtor->common.fn_flags |= 0x4000;
   if (dtor->common.fn_flags & 0x01) {
    zend_error(error_type, "Destructor %s::%s() cannot be static", scope->name, dtor->common.function_name);
   }
   dtor->common.fn_flags &= ~0x10000;
  }
  if (clone) {
   clone->common.fn_flags |= 0x8000;
   if (clone->common.fn_flags & 0x01) {
    zend_error(error_type, "Constructor %s::%s() cannot be static", scope->name, clone->common.function_name);
   }
   clone->common.fn_flags &= ~0x10000;
  }
  if (__call) {
   if (__call->common.fn_flags & 0x01) {
    zend_error(error_type, "Method %s::%s() cannot be static", scope->name, __call->common.function_name);
   }
   __call->common.fn_flags &= ~0x10000;
  }
  if (__callstatic) {
   if (!(__callstatic->common.fn_flags & 0x01)) {
    zend_error(error_type, "Method %s::%s() must be static", scope->name, __callstatic->common.function_name);
   }
   __callstatic->common.fn_flags |= 0x01;
  }
  if (__tostring) {
   if (__tostring->common.fn_flags & 0x01) {
    zend_error(error_type, "Method %s::%s() cannot be static", scope->name, __tostring->common.function_name);
   }
   __tostring->common.fn_flags &= ~0x10000;
  }
  if (__get) {
   if (__get->common.fn_flags & 0x01) {
    zend_error(error_type, "Method %s::%s() cannot be static", scope->name, __get->common.function_name);
   }
   __get->common.fn_flags &= ~0x10000;
  }
  if (__set) {
   if (__set->common.fn_flags & 0x01) {
    zend_error(error_type, "Method %s::%s() cannot be static", scope->name, __set->common.function_name);
   }
   __set->common.fn_flags &= ~0x10000;
  }
  if (__unset) {
   if (__unset->common.fn_flags & 0x01) {
    zend_error(error_type, "Method %s::%s() cannot be static", scope->name, __unset->common.function_name);
   }
   __unset->common.fn_flags &= ~0x10000;
  }
  if (__isset) {
   if (__isset->common.fn_flags & 0x01) {
    zend_error(error_type, "Method %s::%s() cannot be static", scope->name, __isset->common.function_name);
   }
   __isset->common.fn_flags &= ~0x10000;
  }
  _efree(((char*)lc_class_name) );
 }
 return 0;
}





__attribute__ ((visibility("default"))) void zend_unregister_functions(const zend_function_entry *functions, int count, HashTable *function_table )
{
 const zend_function_entry *ptr = functions;
 int i=0;
 HashTable *target_function_table = function_table;

 if (!target_function_table) {
  target_function_table = (compiler_globals.function_table);
 }
 while (ptr->fname) {
  if (count!=-1 && i>=count) {
   break;
  }



  zend_hash_del_key_or_index(target_function_table, ptr->fname, strlen(ptr->fname)+1, 0, 0);
  ptr++;
  i++;
 }
}


__attribute__ ((visibility("default"))) int zend_startup_module(zend_module_entry *module)
{
 ;

 if ((module = zend_register_internal_module(module )) != ((void *)0) && zend_startup_module_ex(module ) == 0) {
  return 0;
 }
 return -1;
}


__attribute__ ((visibility("default"))) int zend_get_module_started(const char *module_name)
{
 zend_module_entry *module;

 return (zend_hash_find(&module_registry, module_name, strlen(module_name)+1, (void**)&module) == 0 && module->module_started) ? 0 : -1;
}


static int clean_module_class(const zend_class_entry **ce, int *module_number )
{
 if ((*ce)->type == 1 && (*ce)->info.internal.module->module_number == *module_number) {
  return 1<<0;
 } else {
  return 0;
 }
}


static void clean_module_classes(int module_number )
{
 zend_hash_apply_with_argument((executor_globals.class_table), (apply_func_arg_t) clean_module_class, (void *) &module_number );
}


void module_destructor(zend_module_entry *module)
{
 ;

 if (module->type == 2) {
  zend_clean_module_rsrc_dtors(module->module_number );
  clean_module_constants(module->module_number );
  clean_module_classes(module->module_number );
 }

 if (module->module_started && module->module_shutdown_func) {



  module->module_shutdown_func(module->type, module->module_number );
 }


 if (module->globals_size) {



  if (module->globals_dtor) {
   module->globals_dtor(module->globals_ptr );
  }

 }

 module->module_started=0;
 if (module->functions) {
  zend_unregister_functions(module->functions, -1, ((void *)0) );
 }



 if (module->handle && !getenv("ZEND_DONT_UNLOAD_MODULES")) {
  dlclose(module->handle);
 }


}


void zend_activate_modules(void)
{
 zend_module_entry **p = module_request_startup_handlers;

 while (*p) {
  zend_module_entry *module = *p;

  if (module->request_startup_func(module->type, module->module_number )==-1) {
   zend_error((1<<1L), "request_startup() for %s module failed", module->name);
   exit(1);
  }
  p++;
 }
}



int module_registry_cleanup(zend_module_entry *module )
{
 if (module->request_shutdown_func) {



  module->request_shutdown_func(module->type, module->module_number );
 }
 return 0;
}


void zend_deactivate_modules(void)
{
 (executor_globals.opline_ptr) = ((void *)0);

 { jmp_buf *__orig_bailout = (executor_globals.bailout); jmp_buf __bailout; (executor_globals.bailout) = &__bailout; if (_setjmp (__bailout)==0) { {
  if ((executor_globals.full_tables_cleanup)) {
   zend_hash_reverse_apply(&module_registry, (apply_func_t) module_registry_cleanup );
  } else {
   zend_module_entry **p = module_request_shutdown_handlers;

   while (*p) {
    zend_module_entry *module = *p;

    module->request_shutdown_func(module->type, module->module_number );
    p++;
   }
  }
 } } (executor_globals.bailout) = __orig_bailout; };
}


__attribute__ ((visibility("default"))) void zend_cleanup_internal_classes(void)
{
 zend_class_entry **p = class_cleanup_handlers;

 while (*p) {
  zend_cleanup_internal_class_data(*p );
  p++;
 }
}


int module_registry_unload_temp(const zend_module_entry *module )
{
 return (module->type == 2) ? 1<<0 : 1<<1;
}


static int exec_done_cb(zend_module_entry *module )
{
 if (module->post_deactivate_func) {
  module->post_deactivate_func();
 }
 return 0;
}


void zend_post_deactivate_modules(void)
{
 if ((executor_globals.full_tables_cleanup)) {
  zend_hash_apply(&module_registry, (apply_func_t) exec_done_cb );
  zend_hash_reverse_apply(&module_registry, (apply_func_t) module_registry_unload_temp );
 } else {
  zend_module_entry **p = module_post_deactivate_handlers;

  while (*p) {
   zend_module_entry *module = *p;

   module->post_deactivate_func();
   p++;
  }
 }
}



int zend_next_free_module(void)
{
 return ++module_count;
}


static zend_class_entry *do_register_internal_class(zend_class_entry *orig_class_entry, zend_uint ce_flags )
{
 zend_class_entry *class_entry = malloc(sizeof(zend_class_entry));
 char *lowercase_name = _emalloc((orig_class_entry->name_length + 1) );
 *class_entry = *orig_class_entry;

 class_entry->type = 1;
 zend_initialize_class_data(class_entry, 0 );
 class_entry->ce_flags = ce_flags;
 class_entry->info.internal.module = (executor_globals.current_module);

 if (class_entry->info.internal.builtin_functions) {
  zend_register_functions(class_entry, class_entry->info.internal.builtin_functions, &class_entry->function_table, 1 );
 }

 zend_str_tolower_copy(lowercase_name, orig_class_entry->name, class_entry->name_length);
 lowercase_name = (char*)zend_new_interned_string(lowercase_name, class_entry->name_length + 1, 1 );
 if ((((lowercase_name) >= (compiler_globals.interned_strings_start)) && ((lowercase_name) < (compiler_globals.interned_strings_end)))) {
  _zend_hash_quick_add_or_update((compiler_globals.class_table), lowercase_name, class_entry->name_length+1, (((Bucket*)(((char*)(lowercase_name))-sizeof(Bucket)))->h), &class_entry, sizeof(zend_class_entry *), ((void *)0), (1<<0) );
 } else {
  _zend_hash_add_or_update((compiler_globals.class_table), lowercase_name, class_entry->name_length+1, &class_entry, sizeof(zend_class_entry *), ((void *)0), (1<<0) );
 }
 do { if (!(((lowercase_name) >= (compiler_globals.interned_strings_start)) && ((lowercase_name) < (compiler_globals.interned_strings_end)))) { _efree(((char*)lowercase_name) ); } } while (0);
 return class_entry;
}







__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class_ex(zend_class_entry *class_entry, zend_class_entry *parent_ce, char *parent_name )
{
 zend_class_entry *register_class;

 if (!parent_ce && parent_name) {
  zend_class_entry **pce;
  if (zend_hash_find((compiler_globals.class_table), parent_name, strlen(parent_name)+1, (void **) &pce)==-1) {
   return ((void *)0);
  } else {
   parent_ce = *pce;
  }
 }

 register_class = zend_register_internal_class(class_entry );

 if (parent_ce) {
  zend_do_inheritance(register_class, parent_ce );
 }
 return register_class;
}


__attribute__ ((visibility("default"))) void zend_class_implements(zend_class_entry *class_entry , int num_interfaces, ...)
{
 zend_class_entry *interface_entry;
 va_list interface_list;
 __builtin_va_start(interface_list,num_interfaces);

 while (num_interfaces--) {
  interface_entry = __builtin_va_arg(interface_list,zend_class_entry *);
  zend_do_implement_interface(class_entry, interface_entry );
 }

 __builtin_va_end(interface_list);
}




__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_class(zend_class_entry *orig_class_entry )
{
 return do_register_internal_class(orig_class_entry, 0 );
}


__attribute__ ((visibility("default"))) zend_class_entry *zend_register_internal_interface(zend_class_entry *orig_class_entry )
{
 return do_register_internal_class(orig_class_entry, 0x80 );
}


__attribute__ ((visibility("default"))) int zend_register_class_alias_ex(const char *name, int name_len, zend_class_entry *ce )
{
 char *lcname = zend_str_tolower_dup(name, name_len);
 int ret;

 ret = _zend_hash_add_or_update((compiler_globals.class_table), lcname, name_len+1, &ce, sizeof(zend_class_entry *), ((void *)0), (1<<1) );
 _efree((lcname) );
 if (ret == 0) {
  ce->refcount++;
 }
 return ret;
}


__attribute__ ((visibility("default"))) int zend_set_hash_symbol(zval *symbol, const char *name, int name_length, zend_bool is_ref, int num_symbol_tables, ...)
{
 HashTable *symbol_table;
 va_list symbol_table_list;

 if (num_symbol_tables <= 0) return -1;

 zval_set_isref_to_p(symbol, is_ref);

 __builtin_va_start(symbol_table_list,num_symbol_tables);
 while (num_symbol_tables-- > 0) {
  symbol_table = __builtin_va_arg(symbol_table_list,HashTable *);
  _zend_hash_add_or_update(symbol_table, name, name_length + 1, &symbol, sizeof(zval *), ((void *)0), (1<<0) );
  zval_add_ref(&symbol);
 }
 __builtin_va_end(symbol_table_list);
 return 0;
}






__attribute__ ((visibility("default"))) void zif_display_disabled_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zend_error((1<<1L), "%s() has been disabled for security reasons", get_active_function_name());
}


static zend_function_entry disabled_function[] = {
 { "display_disabled_function", zif_display_disabled_function, ((void *)0), (zend_uint) (sizeof(((void *)0))/sizeof(struct _zend_arg_info)-1), 0 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};

__attribute__ ((visibility("default"))) int zend_disable_function(char *function_name, uint function_name_length )
{
 if (zend_hash_del_key_or_index((compiler_globals.function_table), function_name, function_name_length+1, 0, 0)==-1) {
  return -1;
 }
 disabled_function[0].fname = function_name;
 return zend_register_functions(((void *)0), disabled_function, (compiler_globals.function_table), 1 );
}


static zend_object_value display_disabled_class(zend_class_entry *class_type )
{
 zend_object_value retval;
 zend_object *intern;
 retval = zend_objects_new(&intern, class_type );
 zend_error((1<<1L), "%s() has been disabled for security reasons", class_type->name);
 return retval;
}


static const zend_function_entry disabled_class_new[] = {
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};

__attribute__ ((visibility("default"))) int zend_disable_class(char *class_name, uint class_name_length )
{
 zend_class_entry disabled_class;

 zend_str_tolower(class_name, class_name_length);
 if (zend_hash_del_key_or_index((compiler_globals.class_table), class_name, class_name_length+1, 0, 0)==-1) {
  return -1;
 }
 { const char *cl_name = class_name; int _len = class_name_length; disabled_class.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (disabled_class.name == cl_name) { disabled_class.name = zend_strndup(cl_name, _len); } disabled_class.name_length = _len; disabled_class.constructor = ((void *)0); disabled_class.destructor = ((void *)0); disabled_class.clone = ((void *)0); disabled_class.serialize = ((void *)0); disabled_class.unserialize = ((void *)0); disabled_class.create_object = ((void *)0); disabled_class.interface_gets_implemented = ((void *)0); disabled_class.get_static_method = ((void *)0); disabled_class.__call = ((void *)0); disabled_class.__callstatic = ((void *)0); disabled_class.__tostring = ((void *)0); disabled_class.__get = ((void *)0); disabled_class.__set = ((void *)0); disabled_class.__unset = ((void *)0); disabled_class.__isset = ((void *)0); disabled_class.serialize_func = ((void *)0); disabled_class.unserialize_func = ((void *)0); disabled_class.serialize = ((void *)0); disabled_class.unserialize = ((void *)0); disabled_class.parent = ((void *)0); disabled_class.num_interfaces = 0; disabled_class.traits = ((void *)0); disabled_class.num_traits = 0; disabled_class.trait_aliases = ((void *)0); disabled_class.trait_precedences = ((void *)0); disabled_class.interfaces = ((void *)0); disabled_class.get_iterator = ((void *)0); disabled_class.iterator_funcs.funcs = ((void *)0); disabled_class.info.internal.module = ((void *)0); disabled_class.info.internal.builtin_functions = disabled_class_new; };
 disabled_class.create_object = display_disabled_class;
 disabled_class.name_length = class_name_length;
 zend_register_internal_class(&disabled_class );
 return 0;
}


static int zend_is_callable_check_class(const char *name, int name_len, zend_fcall_info_cache *fcc, int *strict_class, char **error )
{
 int ret = 0;
 zend_class_entry **pce;
 char *lcname = zend_str_tolower_dup(name, name_len);

 *strict_class = 0;
 if (name_len == sizeof("self") - 1 &&
     !memcmp(lcname, "self", sizeof("self") - 1)) {
  if (!(executor_globals.scope)) {
   if (error) *error = _estrdup(("cannot access self:: when no class scope is active") );
  } else {
   fcc->called_scope = (executor_globals.called_scope);
   fcc->calling_scope = (executor_globals.scope);
   if (!fcc->object_ptr) {
    fcc->object_ptr = (executor_globals.This);
   }
   ret = 1;
  }
 } else if (name_len == sizeof("parent") - 1 &&
         !memcmp(lcname, "parent", sizeof("parent") - 1)) {
  if (!(executor_globals.scope)) {
   if (error) *error = _estrdup(("cannot access parent:: when no class scope is active") );
  } else if (!(executor_globals.scope)->parent) {
   if (error) *error = _estrdup(("cannot access parent:: when current class scope has no parent") );
  } else {
   fcc->called_scope = (executor_globals.called_scope);
   fcc->calling_scope = (executor_globals.scope)->parent;
   if (!fcc->object_ptr) {
    fcc->object_ptr = (executor_globals.This);
   }
   *strict_class = 1;
   ret = 1;
  }
 } else if (name_len == sizeof("static") - 1 &&
            !memcmp(lcname, "static", sizeof("static") - 1)) {
  if (!(executor_globals.called_scope)) {
   if (error) *error = _estrdup(("cannot access static:: when no class scope is active") );
  } else {
   fcc->called_scope = (executor_globals.called_scope);
   fcc->calling_scope = (executor_globals.called_scope);
   if (!fcc->object_ptr) {
    fcc->object_ptr = (executor_globals.This);
   }
   *strict_class = 1;
   ret = 1;
  }
 } else if (zend_lookup_class_ex(name, name_len, ((void *)0), 1, &pce ) == 0) {
  zend_class_entry *scope = (executor_globals.active_op_array) ? (executor_globals.active_op_array)->scope : ((void *)0);

  fcc->calling_scope = *pce;
  if (scope && !fcc->object_ptr && (executor_globals.This) &&
      instanceof_function(zend_get_class_entry(&(*(executor_globals.This)) ), scope ) &&
      instanceof_function(scope, fcc->calling_scope )) {
   fcc->object_ptr = (executor_globals.This);
   fcc->called_scope = zend_get_class_entry(&(*fcc->object_ptr) );
  } else {
   fcc->called_scope = fcc->object_ptr ? zend_get_class_entry(&(*fcc->object_ptr) ) : fcc->calling_scope;
  }
  *strict_class = 1;
  ret = 1;
 } else {
  if (error) zend_spprintf(error, 0, "class '%.*s' not found", name_len, name);
 }
 _efree((lcname) );
 return ret;
}



static int zend_is_callable_check_func(int check_flags, zval *callable, zend_fcall_info_cache *fcc, int strict_class, char **error )
{
 zend_class_entry *ce_org = fcc->calling_scope;
 int retval = 0;
 char *mname, *lmname;
 const char *colon;
 int clen, mlen;
 zend_class_entry *last_scope;
 HashTable *ftable;
 int call_via_handler = 0;

 if (error) {
  *error = ((void *)0);
 }

 fcc->calling_scope = ((void *)0);
 fcc->function_handler = ((void *)0);

 if (!ce_org) {

  if ((*callable).value.str.val[0] == '\\') {
   mlen = (*callable).value.str.len - 1;
   mname = (*callable).value.str.val + 1;
   lmname = zend_str_tolower_dup((*callable).value.str.val + 1, mlen);
  } else {
   mlen = (*callable).value.str.len;
   mname = (*callable).value.str.val;
   lmname = zend_str_tolower_dup((*callable).value.str.val, mlen);
  }


  if (zend_hash_find((executor_globals.function_table), lmname, mlen+1, (void**)&fcc->function_handler) == 0) {
   _efree((lmname) );
   return 1;
  }
  _efree((lmname) );
 }


 if ((colon = zend_memrchr((*callable).value.str.val, ':', (*callable).value.str.len)) != ((void *)0) &&
  colon > (*callable).value.str.val &&
  *(colon-1) == ':'
 ) {
  colon--;
  clen = colon - (*callable).value.str.val;
  mlen = (*callable).value.str.len - clen - 2;

  if (colon == (*callable).value.str.val) {
   if (error) zend_spprintf(error, 0, "invalid function name");
   return 0;
  }



  last_scope = (executor_globals.scope);
  if (ce_org) {
   (executor_globals.scope) = ce_org;
  }

  if (!zend_is_callable_check_class((*callable).value.str.val, clen, fcc, &strict_class, error )) {
   (executor_globals.scope) = last_scope;
   return 0;
  }
  (executor_globals.scope) = last_scope;

  ftable = &fcc->calling_scope->function_table;
  if (ce_org && !instanceof_function(ce_org, fcc->calling_scope )) {
   if (error) zend_spprintf(error, 0, "class '%s' is not a subclass of '%s'", ce_org->name, fcc->calling_scope->name);
   return 0;
  }
  mname = (*callable).value.str.val + clen + 2;
 } else if (ce_org) {

  mlen = (*callable).value.str.len;
  mname = (*callable).value.str.val;
  ftable = &ce_org->function_table;
  fcc->calling_scope = ce_org;
 } else {

  if (error && !(check_flags & (1<<3))) {
   zend_spprintf(error, 0, "function '%s' not found or invalid function name", (*callable).value.str.val);
  }
  return 0;
 }

 lmname = zend_str_tolower_dup(mname, mlen);
 if (strict_class &&
     fcc->calling_scope &&
     mlen == sizeof("__construct")-1 &&
     !memcmp(lmname, "__construct", sizeof("__construct"))) {
  fcc->function_handler = fcc->calling_scope->constructor;
  if (fcc->function_handler) {
   retval = 1;
  }
 } else if (zend_hash_find(ftable, lmname, mlen+1, (void**)&fcc->function_handler) == 0) {
  retval = 1;
  if ((fcc->function_handler->op_array.fn_flags & 0x800) &&
      (executor_globals.scope) &&
      instanceof_function(fcc->function_handler->common.scope, (executor_globals.scope) )) {
   zend_function *priv_fbc;

   if (zend_hash_find(&(executor_globals.scope)->function_table, lmname, mlen+1, (void **) &priv_fbc)==0
    && priv_fbc->common.fn_flags & 0x400
    && priv_fbc->common.scope == (executor_globals.scope)) {
    fcc->function_handler = priv_fbc;
   }
  }
  if ((check_flags & (1<<1)) == 0 &&
      (fcc->calling_scope &&
       (fcc->calling_scope->__call ||
        fcc->calling_scope->__callstatic))) {
   if (fcc->function_handler->op_array.fn_flags & 0x400) {
    if (!zend_check_private(fcc->function_handler, fcc->object_ptr ? zend_get_class_entry(&(*fcc->object_ptr) ) : (executor_globals.scope), lmname, mlen )) {
     retval = 0;
     fcc->function_handler = ((void *)0);
     goto get_function_via_handler;
    }
   } else if (fcc->function_handler->common.fn_flags & 0x200) {
    if (!zend_check_protected(fcc->function_handler->common.scope, (executor_globals.scope))) {
     retval = 0;
     fcc->function_handler = ((void *)0);
     goto get_function_via_handler;
    }
   }
  }
 } else {
get_function_via_handler:
  if (fcc->object_ptr && fcc->calling_scope == ce_org) {
   if (strict_class && ce_org->__call) {
    fcc->function_handler = _emalloc((sizeof(zend_internal_function)) );
    fcc->function_handler->internal_function.type = 1;
    fcc->function_handler->internal_function.module = (ce_org->type == 1) ? ce_org->info.internal.module : ((void *)0);
    fcc->function_handler->internal_function.handler = zend_std_call_user_call;
    fcc->function_handler->internal_function.arg_info = ((void *)0);
    fcc->function_handler->internal_function.num_args = 0;
    fcc->function_handler->internal_function.scope = ce_org;
    fcc->function_handler->internal_function.fn_flags = 0x200000;
    fcc->function_handler->internal_function.function_name = _estrndup((mname), (mlen) );
    call_via_handler = 1;
    retval = 1;
   } else if ((*fcc->object_ptr).value.obj.handlers->get_method) {
    fcc->function_handler = (*fcc->object_ptr).value.obj.handlers->get_method(&fcc->object_ptr, mname, mlen, ((void *)0) );
    if (fcc->function_handler) {
     if (strict_class &&
         (!fcc->function_handler->common.scope ||
          !instanceof_function(ce_org, fcc->function_handler->common.scope ))) {
      if ((fcc->function_handler->common.fn_flags & 0x200000) != 0) {
       if (fcc->function_handler->type != 3) {
        _efree(((char*)fcc->function_handler->common.function_name) );
       }
       _efree((fcc->function_handler) );
      }
     } else {
      retval = 1;
      call_via_handler = (fcc->function_handler->common.fn_flags & 0x200000) != 0;
     }
    }
   }
  } else if (fcc->calling_scope) {
   if (fcc->calling_scope->get_static_method) {
    fcc->function_handler = fcc->calling_scope->get_static_method(fcc->calling_scope, mname, mlen );
   } else {
    fcc->function_handler = zend_std_get_static_method(fcc->calling_scope, mname, mlen, ((void *)0) );
   }
   if (fcc->function_handler) {
    retval = 1;
    call_via_handler = (fcc->function_handler->common.fn_flags & 0x200000) != 0;
    if (call_via_handler && !fcc->object_ptr && (executor_globals.This) &&
        (*(executor_globals.This)).value.obj.handlers->get_class_entry &&
        instanceof_function(zend_get_class_entry(&(*(executor_globals.This)) ), fcc->calling_scope )) {
     fcc->object_ptr = (executor_globals.This);
    }
   }
  }
 }

 if (retval) {
  if (fcc->calling_scope && !call_via_handler) {
   if (!fcc->object_ptr && !(fcc->function_handler->common.fn_flags & 0x01)) {
    int severity;
    char *verb;
    if (fcc->function_handler->common.fn_flags & 0x10000) {
     severity = (1<<11L);
     verb = "should not";
    } else {

     severity = (1<<0L);
     verb = "cannot";
    }
    if ((check_flags & (1<<2)) != 0) {
     retval = 0;
    }
    if ((executor_globals.This) && instanceof_function(zend_get_class_entry(&(*(executor_globals.This)) ), fcc->calling_scope )) {
     fcc->object_ptr = (executor_globals.This);
     if (error) {
      zend_spprintf(error, 0, "non-static method %s::%s() %s be called statically, assuming $this from compatible context %s", fcc->calling_scope->name, fcc->function_handler->common.function_name, verb, zend_get_class_entry(&(*(executor_globals.This)) )->name);
      if (severity == (1<<0L)) {
       retval = 0;
      }
     } else if (retval) {
      zend_error(severity, "Non-static method %s::%s() %s be called statically, assuming $this from compatible context %s", fcc->calling_scope->name, fcc->function_handler->common.function_name, verb, zend_get_class_entry(&(*(executor_globals.This)) )->name);
     }
    } else {
     if (error) {
      zend_spprintf(error, 0, "non-static method %s::%s() %s be called statically", fcc->calling_scope->name, fcc->function_handler->common.function_name, verb);
      if (severity == (1<<0L)) {
       retval = 0;
      }
     } else if (retval) {
      zend_error(severity, "Non-static method %s::%s() %s be called statically", fcc->calling_scope->name, fcc->function_handler->common.function_name, verb);
     }
    }
   }
   if (retval && (check_flags & (1<<1)) == 0) {
    if (fcc->function_handler->op_array.fn_flags & 0x400) {
     if (!zend_check_private(fcc->function_handler, fcc->object_ptr ? zend_get_class_entry(&(*fcc->object_ptr) ) : (executor_globals.scope), lmname, mlen )) {
      if (error) {
       if (*error) {
        _efree((*error) );
       }
       zend_spprintf(error, 0, "cannot access private method %s::%s()", fcc->calling_scope->name, fcc->function_handler->common.function_name);
      }
      retval = 0;
     }
    } else if ((fcc->function_handler->common.fn_flags & 0x200)) {
     if (!zend_check_protected(fcc->function_handler->common.scope, (executor_globals.scope))) {
      if (error) {
       if (*error) {
        _efree((*error) );
       }
       zend_spprintf(error, 0, "cannot access protected method %s::%s()", fcc->calling_scope->name, fcc->function_handler->common.function_name);
      }
      retval = 0;
     }
    }
   }
  }
 } else if (error && !(check_flags & (1<<3))) {
  if (fcc->calling_scope) {
   if (error) zend_spprintf(error, 0, "class '%s' does not have a method '%s'", fcc->calling_scope->name, mname);
  } else {
   if (error) zend_spprintf(error, 0, "function '%s' does not exist", mname);
  }
 }
 _efree((lmname) );

 if (fcc->object_ptr) {
  fcc->called_scope = zend_get_class_entry(&(*fcc->object_ptr) );
 }
 if (retval) {
  fcc->initialized = 1;
 }
 return retval;
}


__attribute__ ((visibility("default"))) zend_bool zend_is_callable_ex(zval *callable, zval *object_ptr, uint check_flags, char **callable_name, int *callable_name_len, zend_fcall_info_cache *fcc, char **error )
{
 zend_bool ret;
 int callable_name_len_local;
 zend_fcall_info_cache fcc_local;

 if (callable_name) {
  *callable_name = ((void *)0);
 }
 if (callable_name_len == ((void *)0)) {
  callable_name_len = &callable_name_len_local;
 }
 if (fcc == ((void *)0)) {
  fcc = &fcc_local;
 }
 if (error) {
  *error = ((void *)0);
 }

 fcc->initialized = 0;
 fcc->calling_scope = ((void *)0);
 fcc->called_scope = ((void *)0);
 fcc->function_handler = ((void *)0);
 fcc->calling_scope = ((void *)0);
 fcc->object_ptr = ((void *)0);

 if (object_ptr && (*object_ptr).type != 5) {
  object_ptr = ((void *)0);
 }
 if (object_ptr &&
     (!(executor_globals.objects_store).object_buckets ||
      !(executor_globals.objects_store).object_buckets[(*object_ptr).value.obj.handle].valid)) {
  return 0;
 }

 switch ((*callable).type) {
  case 6:
   if (object_ptr) {
    fcc->object_ptr = object_ptr;
    fcc->calling_scope = zend_get_class_entry(&(*object_ptr) );
    if (callable_name) {
     char *ptr;

     *callable_name_len = fcc->calling_scope->name_length + (*callable).value.str.len + sizeof("::") - 1;
     ptr = *callable_name = _emalloc((*callable_name_len + 1) );
     memcpy(ptr, fcc->calling_scope->name, fcc->calling_scope->name_length);
     ptr += fcc->calling_scope->name_length;
     memcpy(ptr, "::", sizeof("::") - 1);
     ptr += sizeof("::") - 1;
     memcpy(ptr, (*callable).value.str.val, (*callable).value.str.len + 1);
    }
   } else if (callable_name) {
    *callable_name = _estrndup(((*callable).value.str.val), ((*callable).value.str.len) );
    *callable_name_len = (*callable).value.str.len;
   }
   if (check_flags & (1<<0)) {
    fcc->called_scope = fcc->calling_scope;
    return 1;
   }

   ret = zend_is_callable_check_func(check_flags, callable, fcc, 0, error );
   if (fcc == &fcc_local &&
       fcc->function_handler &&
    ((fcc->function_handler->type == 1 &&
         (fcc->function_handler->common.fn_flags & 0x200000)) ||
        fcc->function_handler->type == 5 ||
        fcc->function_handler->type == 3)) {
    if (fcc->function_handler->type != 3) {
     _efree(((char*)fcc->function_handler->common.function_name) );
    }
    _efree((fcc->function_handler) );
   }
   return ret;

  case 4:
   {
    zval **method = ((void *)0);
    zval **obj = ((void *)0);
    int strict_class = 0;

    if (zend_hash_num_elements((*callable).value.ht) == 2) {
     zend_hash_index_find((*callable).value.ht, 0, (void **) &obj);
     zend_hash_index_find((*callable).value.ht, 1, (void **) &method);
    }
    if (obj && method &&
     ((**obj).type == 5 ||
     (**obj).type == 6) &&
     (**method).type == 6) {

     if ((**obj).type == 6) {
      if (callable_name) {
       char *ptr;

       *callable_name_len = (**obj).value.str.len + (**method).value.str.len + sizeof("::") - 1;
       ptr = *callable_name = _emalloc((*callable_name_len + 1) );
       memcpy(ptr, (**obj).value.str.val, (**obj).value.str.len);
       ptr += (**obj).value.str.len;
       memcpy(ptr, "::", sizeof("::") - 1);
       ptr += sizeof("::") - 1;
       memcpy(ptr, (**method).value.str.val, (**method).value.str.len + 1);
      }

      if (check_flags & (1<<0)) {
       return 1;
      }

      if (!zend_is_callable_check_class((**obj).value.str.val, (**obj).value.str.len, fcc, &strict_class, error )) {
       return 0;
      }

     } else {
      if (!(executor_globals.objects_store).object_buckets ||
          !(executor_globals.objects_store).object_buckets[(**obj).value.obj.handle].valid) {
       return 0;
      }

      fcc->calling_scope = zend_get_class_entry(&(**obj) );

      fcc->object_ptr = *obj;

      if (callable_name) {
       char *ptr;

       *callable_name_len = fcc->calling_scope->name_length + (**method).value.str.len + sizeof("::") - 1;
       ptr = *callable_name = _emalloc((*callable_name_len + 1) );
       memcpy(ptr, fcc->calling_scope->name, fcc->calling_scope->name_length);
       ptr += fcc->calling_scope->name_length;
       memcpy(ptr, "::", sizeof("::") - 1);
       ptr += sizeof("::") - 1;
       memcpy(ptr, (**method).value.str.val, (**method).value.str.len + 1);
      }

      if (check_flags & (1<<0)) {
       fcc->called_scope = fcc->calling_scope;
       return 1;
      }
     }

     ret = zend_is_callable_check_func(check_flags, *method, fcc, strict_class, error );
     if (fcc == &fcc_local &&
         fcc->function_handler &&
      ((fcc->function_handler->type == 1 &&
           (fcc->function_handler->common.fn_flags & 0x200000)) ||
          fcc->function_handler->type == 5 ||
          fcc->function_handler->type == 3)) {
      if (fcc->function_handler->type != 3) {
       _efree(((char*)fcc->function_handler->common.function_name) );
      }
      _efree((fcc->function_handler) );
     }
     return ret;

    } else {
     if (zend_hash_num_elements((*callable).value.ht) == 2) {
      if (!obj || ((**obj).type != 6 && (**obj).type != 5)) {
       if (error) zend_spprintf(error, 0, "first array member is not a valid class name or object");
      } else {
       if (error) zend_spprintf(error, 0, "second array member is not a valid method");
      }
     } else {
      if (error) zend_spprintf(error, 0, "array must have exactly two members");
     }
     if (callable_name) {
      *callable_name = _estrndup(("Array"), (sizeof("Array")-1) );
      *callable_name_len = sizeof("Array") - 1;
     }
    }
   }
   return 0;

  case 5:
   if (((*callable)).value.obj.handlers->get_closure && ((*callable)).value.obj.handlers->get_closure(callable, &fcc->calling_scope, &fcc->function_handler, &fcc->object_ptr ) == 0) {
    fcc->called_scope = fcc->calling_scope;
    if (callable_name) {
     zend_class_entry *ce = zend_get_class_entry(&(*callable) );

     *callable_name_len = ce->name_length + sizeof("::__invoke") - 1;
     *callable_name = _emalloc((*callable_name_len + 1) );
     memcpy(*callable_name, ce->name, ce->name_length);
     memcpy((*callable_name) + ce->name_length, "::__invoke", sizeof("::__invoke"));
    }
    return 1;
   }


  default:
   if (callable_name) {
    zval expr_copy;
    int use_copy;

    zend_make_printable_zval(callable, &expr_copy, &use_copy);
    *callable_name = _estrndup(((expr_copy).value.str.val), ((expr_copy).value.str.len) );
    *callable_name_len = (expr_copy).value.str.len;
    _zval_dtor((&expr_copy) );
   }
   if (error) zend_spprintf(error, 0, "no array or string given");
   return 0;
 }
}


__attribute__ ((visibility("default"))) zend_bool zend_is_callable(zval *callable, uint check_flags, char **callable_name )
{
 return zend_is_callable_ex(callable, ((void *)0), check_flags, callable_name, ((void *)0), ((void *)0), ((void *)0) );
}


__attribute__ ((visibility("default"))) zend_bool zend_make_callable(zval *callable, char **callable_name )
{
 zend_fcall_info_cache fcc;

 if (zend_is_callable_ex(callable, ((void *)0), ((1<<2)), callable_name, ((void *)0), &fcc, ((void *)0) )) {
  if ((*callable).type == 6 && fcc.calling_scope) {
   _zval_dtor((callable) );
   _array_init((callable), 0 );
   add_next_index_string(callable, fcc.calling_scope->name, 1);
   add_next_index_string(callable, fcc.function_handler->common.function_name, 1);
  }
  if (fcc.function_handler &&
   ((fcc.function_handler->type == 1 &&
        (fcc.function_handler->common.fn_flags & 0x200000)) ||
       fcc.function_handler->type == 5 ||
       fcc.function_handler->type == 3)) {
   if (fcc.function_handler->type != 3) {
    _efree(((char*)fcc.function_handler->common.function_name) );
   }
   _efree((fcc.function_handler) );
  }
  return 1;
 }
 return 0;
}


__attribute__ ((visibility("default"))) int zend_fcall_info_init(zval *callable, uint check_flags, zend_fcall_info *fci, zend_fcall_info_cache *fcc, char **callable_name, char **error )
{
 if (!zend_is_callable_ex(callable, ((void *)0), check_flags, callable_name, ((void *)0), fcc, error )) {
  return -1;
 }

 fci->size = sizeof(*fci);
 fci->function_table = fcc->calling_scope ? &fcc->calling_scope->function_table : (executor_globals.function_table);
 fci->object_ptr = fcc->object_ptr;
 fci->function_name = callable;
 fci->retval_ptr_ptr = ((void *)0);
 fci->param_count = 0;
 fci->params = ((void *)0);
 fci->no_separation = 1;
 fci->symbol_table = ((void *)0);

 return 0;
}


__attribute__ ((visibility("default"))) void zend_fcall_info_args_clear(zend_fcall_info *fci, int free_mem)
{
 if (fci->params) {
  if (free_mem) {
   _efree((fci->params) );
   fci->params = ((void *)0);
  }
 }
 fci->param_count = 0;
}


__attribute__ ((visibility("default"))) void zend_fcall_info_args_save(zend_fcall_info *fci, int *param_count, zval ****params)
{
 *param_count = fci->param_count;
 *params = fci->params;
 fci->param_count = 0;
 fci->params = ((void *)0);
}


__attribute__ ((visibility("default"))) void zend_fcall_info_args_restore(zend_fcall_info *fci, int param_count, zval ***params)
{
 zend_fcall_info_args_clear(fci, 1);
 fci->param_count = param_count;
 fci->params = params;
}


__attribute__ ((visibility("default"))) int zend_fcall_info_args(zend_fcall_info *fci, zval *args )
{
 HashPosition pos;
 zval **arg, ***params;

 zend_fcall_info_args_clear(fci, !args);

 if (!args) {
  return 0;
 }

 if ((*args).type != 4) {
  return -1;
 }

 fci->param_count = zend_hash_num_elements((*args).value.ht);
 fci->params = params = (zval ***) _erealloc((fci->params), (fci->param_count * sizeof(zval **)), 0 );

 zend_hash_internal_pointer_reset_ex((*args).value.ht, &pos);
 while (zend_hash_get_current_data_ex((*args).value.ht, (void *) &arg, &pos) == 0) {
  *params++ = arg;
  zend_hash_move_forward_ex((*args).value.ht, &pos);
 }

 return 0;
}


__attribute__ ((visibility("default"))) int zend_fcall_info_argp(zend_fcall_info *fci , int argc, zval ***argv)
{
 int i;

 if (argc < 0) {
  return -1;
 }

 zend_fcall_info_args_clear(fci, !argc);

 if (argc) {
  fci->param_count = argc;
  fci->params = (zval ***) _erealloc((fci->params), (fci->param_count * sizeof(zval **)), 0 );

  for (i = 0; i < argc; ++i) {
   fci->params[i] = argv[i];
  }
 }

 return 0;
}


__attribute__ ((visibility("default"))) int zend_fcall_info_argv(zend_fcall_info *fci , int argc, va_list *argv)
{
 int i;
 zval **arg;

 if (argc < 0) {
  return -1;
 }

 zend_fcall_info_args_clear(fci, !argc);

 if (argc) {
  fci->param_count = argc;
  fci->params = (zval ***) _erealloc((fci->params), (fci->param_count * sizeof(zval **)), 0 );

  for (i = 0; i < argc; ++i) {
   arg = __builtin_va_arg(*argv,zval **);
   fci->params[i] = arg;
  }
 }

 return 0;
}


__attribute__ ((visibility("default"))) int zend_fcall_info_argn(zend_fcall_info *fci , int argc, ...)
{
 int ret;
 va_list argv;

 __builtin_va_start(argv,argc);
 ret = zend_fcall_info_argv(fci , argc, &argv);
 __builtin_va_end(argv);

 return ret;
}


__attribute__ ((visibility("default"))) int zend_fcall_info_call(zend_fcall_info *fci, zend_fcall_info_cache *fcc, zval **retval_ptr_ptr, zval *args )
{
 zval *retval, ***org_params = ((void *)0);
 int result, org_count = 0;

 fci->retval_ptr_ptr = retval_ptr_ptr ? retval_ptr_ptr : &retval;
 if (args) {
  zend_fcall_info_args_save(fci, &org_count, &org_params);
  zend_fcall_info_args(fci, args );
 }
 result = zend_call_function(fci, fcc );

 if (!retval_ptr_ptr && retval) {
  _zval_ptr_dtor((&retval) );
 }
 if (args) {
  zend_fcall_info_args_restore(fci, org_count, org_params);
 }
 return result;
}


__attribute__ ((visibility("default"))) const char *zend_get_module_version(const char *module_name)
{
 char *lname;
 int name_len = strlen(module_name);
 zend_module_entry *module;

 lname = zend_str_tolower_dup(module_name, name_len);
 if (zend_hash_find(&module_registry, lname, name_len + 1, (void**)&module) == -1) {
  _efree((lname) );
  return ((void *)0);
 }
 _efree((lname) );
 return module->version;
}


__attribute__ ((visibility("default"))) int zend_declare_property_ex(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type, const char *doc_comment, int doc_comment_len )
{
 zend_property_info property_info, *property_info_ptr;
 const char *interned_name;
 ulong h = zend_get_hash_value(name, name_length+1);

 if (!(access_type & (0x100 | 0x200 | 0x400))) {
  access_type |= 0x100;
 }
 if (access_type & 0x01) {
  if (zend_hash_quick_find(&ce->properties_info, name, name_length + 1, h, (void**)&property_info_ptr) == 0 &&
      (property_info_ptr->flags & 0x01) != 0) {
   property_info.offset = property_info_ptr->offset;
   _zval_ptr_dtor((&ce->default_static_members_table[property_info.offset]) );
   zend_hash_del_key_or_index(&ce->properties_info, name, name_length + 1, h, 2);
  } else {
   property_info.offset = ce->default_static_members_count++;
   ce->default_static_members_table = ((ce->type == 1)?__zend_realloc((ce->default_static_members_table), (sizeof(zval*) * ce->default_static_members_count)):_erealloc(((ce->default_static_members_table)), ((sizeof(zval*) * ce->default_static_members_count)), 0 ));
  }
  ce->default_static_members_table[property_info.offset] = property;
  if (ce->type == 2) {
   ce->static_members_table = ce->default_static_members_table;
  }
 } else {
  if (zend_hash_quick_find(&ce->properties_info, name, name_length + 1, h, (void**)&property_info_ptr) == 0 &&
      (property_info_ptr->flags & 0x01) == 0) {
   property_info.offset = property_info_ptr->offset;
   _zval_ptr_dtor((&ce->default_properties_table[property_info.offset]) );
   zend_hash_del_key_or_index(&ce->properties_info, name, name_length + 1, h, 2);
  } else {
   property_info.offset = ce->default_properties_count++;
   ce->default_properties_table = ((ce->type == 1)?__zend_realloc((ce->default_properties_table), (sizeof(zval*) * ce->default_properties_count)):_erealloc(((ce->default_properties_table)), ((sizeof(zval*) * ce->default_properties_count)), 0 ));
  }
  ce->default_properties_table[property_info.offset] = property;
 }
 if (ce->type & 1) {
  switch((*property).type) {
   case 4:
   case 9:
   case 5:
   case 7:
    zend_error((1<<4L), "Internal zval's can't be arrays, objects or resources");
    break;
   default:
    break;
  }
 }
 switch (access_type & (0x100 | 0x200 | 0x400)) {
  case 0x400: {
    char *priv_name;
    int priv_name_length;

    zend_mangle_property_name(&priv_name, &priv_name_length, ce->name, ce->name_length, name, name_length, ce->type & 1);
    property_info.name = priv_name;
    property_info.name_length = priv_name_length;
   }
   break;
  case 0x200: {
    char *prot_name;
    int prot_name_length;

    zend_mangle_property_name(&prot_name, &prot_name_length, "*", 1, name, name_length, ce->type & 1);
    property_info.name = prot_name;
    property_info.name_length = prot_name_length;
   }
   break;
  case 0x100:
   if ((((name) >= (compiler_globals.interned_strings_start)) && ((name) < (compiler_globals.interned_strings_end)))) {
    property_info.name = (char*)name;
   } else {
    property_info.name = ce->type & 1 ? zend_strndup(name, name_length) : _estrndup((name), (name_length) );
   }
   property_info.name_length = name_length;
   break;
 }

 interned_name = zend_new_interned_string(property_info.name, property_info.name_length+1, 0 );
 if (interned_name != property_info.name) {
  if (ce->type == 2) {
   _efree(((char*)property_info.name) );
  } else {
   free((char*)property_info.name);
  }
  property_info.name = interned_name;
 }

 property_info.flags = access_type;
 property_info.h = (access_type & 0x100) ? h : zend_get_hash_value(property_info.name, property_info.name_length+1);

 property_info.doc_comment = doc_comment;
 property_info.doc_comment_len = doc_comment_len;

 property_info.ce = ce;

 _zend_hash_quick_add_or_update(&ce->properties_info, name, name_length+1, h, &property_info, sizeof(zend_property_info), ((void *)0), (1<<0) );

 return 0;
}


__attribute__ ((visibility("default"))) int zend_declare_property(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type )
{
 return zend_declare_property_ex(ce, name, name_length, property, access_type, ((void *)0), 0 );
}


__attribute__ ((visibility("default"))) int zend_declare_property_null(zend_class_entry *ce, const char *name, int name_length, int access_type )
{
 zval *property;

 if (ce->type & 1) {
  do { (property) = (zval*)malloc(sizeof(zval_gc_info)); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
 } else {
  do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
 }
 *property = zval_used_for_init;;
 return zend_declare_property(ce, name, name_length, property, access_type );
}


__attribute__ ((visibility("default"))) int zend_declare_property_bool(zend_class_entry *ce, const char *name, int name_length, long value, int access_type )
{
 zval *property;

 if (ce->type & 1) {
  do { (property) = (zval*)malloc(sizeof(zval_gc_info)); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
 } else {
  do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
 }
 (property)->refcount__gc = 1; (property)->is_ref__gc = 0;;
 do { zval *__z = (property); (*__z).value.lval = ((value) != 0); (*__z).type = 3; } while (0);
 return zend_declare_property(ce, name, name_length, property, access_type );
}


__attribute__ ((visibility("default"))) int zend_declare_property_long(zend_class_entry *ce, const char *name, int name_length, long value, int access_type )
{
 zval *property;

 if (ce->type & 1) {
  do { (property) = (zval*)malloc(sizeof(zval_gc_info)); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
 } else {
  do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
 }
 (property)->refcount__gc = 1; (property)->is_ref__gc = 0;;
 { zval *__z = (property); (*__z).value.lval = value; (*__z).type = 1; };
 return zend_declare_property(ce, name, name_length, property, access_type );
}


__attribute__ ((visibility("default"))) int zend_declare_property_double(zend_class_entry *ce, const char *name, int name_length, double value, int access_type )
{
 zval *property;

 if (ce->type & 1) {
  do { (property) = (zval*)malloc(sizeof(zval_gc_info)); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
 } else {
  do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
 }
 (property)->refcount__gc = 1; (property)->is_ref__gc = 0;;
 { zval *__z = (property); (*__z).value.dval = value; (*__z).type = 2; };
 return zend_declare_property(ce, name, name_length, property, access_type );
}


__attribute__ ((visibility("default"))) int zend_declare_property_string(zend_class_entry *ce, const char *name, int name_length, const char *value, int access_type )
{
 zval *property;
 int len = strlen(value);

 if (ce->type & 1) {
  do { (property) = (zval*)malloc(sizeof(zval_gc_info)); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
  do { const char *__s=(zend_strndup(value, len)); int __l=len; zval *__z = (property); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 } else {
  do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
  do { const char *__s=(value); int __l=len; zval *__z = (property); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 }
 (property)->refcount__gc = 1; (property)->is_ref__gc = 0;;
 return zend_declare_property(ce, name, name_length, property, access_type );
}


__attribute__ ((visibility("default"))) int zend_declare_property_stringl(zend_class_entry *ce, const char *name, int name_length, const char *value, int value_len, int access_type )
{
 zval *property;

 if (ce->type & 1) {
  do { (property) = (zval*)malloc(sizeof(zval_gc_info)); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
  do { const char *__s=(zend_strndup(value, value_len)); int __l=value_len; zval *__z = (property); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 } else {
  do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
  do { const char *__s=(value); int __l=value_len; zval *__z = (property); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 }
 (property)->refcount__gc = 1; (property)->is_ref__gc = 0;;
 return zend_declare_property(ce, name, name_length, property, access_type );
}


__attribute__ ((visibility("default"))) int zend_declare_class_constant(zend_class_entry *ce, const char *name, size_t name_length, zval *value )
{
 return _zend_hash_add_or_update(&ce->constants_table, name, name_length+1, &value, sizeof(zval *), ((void *)0), (1<<0) );
}


__attribute__ ((visibility("default"))) int zend_declare_class_constant_null(zend_class_entry *ce, const char *name, size_t name_length )
{
 zval *constant;

 if (ce->type & 1) {
  do { (constant) = (zval*)malloc(sizeof(zval_gc_info)); ((zval_gc_info*)(constant))->u.buffered = ((void *)0); } while (0);
 } else {
  do { (constant) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(constant))->u.buffered = ((void *)0); } while (0);
 }
 { (*constant).type = 0; };
 (constant)->refcount__gc = 1; (constant)->is_ref__gc = 0;;
 return zend_declare_class_constant(ce, name, name_length, constant );
}


__attribute__ ((visibility("default"))) int zend_declare_class_constant_long(zend_class_entry *ce, const char *name, size_t name_length, long value )
{
 zval *constant;

 if (ce->type & 1) {
  do { (constant) = (zval*)malloc(sizeof(zval_gc_info)); ((zval_gc_info*)(constant))->u.buffered = ((void *)0); } while (0);
 } else {
  do { (constant) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(constant))->u.buffered = ((void *)0); } while (0);
 }
 { zval *__z = (constant); (*__z).value.lval = value; (*__z).type = 1; };
 (constant)->refcount__gc = 1; (constant)->is_ref__gc = 0;;
 return zend_declare_class_constant(ce, name, name_length, constant );
}


__attribute__ ((visibility("default"))) int zend_declare_class_constant_bool(zend_class_entry *ce, const char *name, size_t name_length, zend_bool value )
{
 zval *constant;

 if (ce->type & 1) {
  do { (constant) = (zval*)malloc(sizeof(zval_gc_info)); ((zval_gc_info*)(constant))->u.buffered = ((void *)0); } while (0);
 } else {
  do { (constant) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(constant))->u.buffered = ((void *)0); } while (0);
 }
 do { zval *__z = (constant); (*__z).value.lval = ((value) != 0); (*__z).type = 3; } while (0);
 (constant)->refcount__gc = 1; (constant)->is_ref__gc = 0;;
 return zend_declare_class_constant(ce, name, name_length, constant );
}


__attribute__ ((visibility("default"))) int zend_declare_class_constant_double(zend_class_entry *ce, const char *name, size_t name_length, double value )
{
 zval *constant;

 if (ce->type & 1) {
  do { (constant) = (zval*)malloc(sizeof(zval_gc_info)); ((zval_gc_info*)(constant))->u.buffered = ((void *)0); } while (0);
 } else {
  do { (constant) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(constant))->u.buffered = ((void *)0); } while (0);
 }
 { zval *__z = (constant); (*__z).value.dval = value; (*__z).type = 2; };
 (constant)->refcount__gc = 1; (constant)->is_ref__gc = 0;;
 return zend_declare_class_constant(ce, name, name_length, constant );
}


__attribute__ ((visibility("default"))) int zend_declare_class_constant_stringl(zend_class_entry *ce, const char *name, size_t name_length, const char *value, size_t value_length )
{
 zval *constant;

 if (ce->type & 1) {
  do { (constant) = (zval*)malloc(sizeof(zval_gc_info)); ((zval_gc_info*)(constant))->u.buffered = ((void *)0); } while (0);
  do { const char *__s=(zend_strndup(value, value_length)); int __l=value_length; zval *__z = (constant); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 } else {
  do { (constant) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(constant))->u.buffered = ((void *)0); } while (0);
  do { const char *__s=(value); int __l=value_length; zval *__z = (constant); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 }
 (constant)->refcount__gc = 1; (constant)->is_ref__gc = 0;;
 return zend_declare_class_constant(ce, name, name_length, constant );
}


__attribute__ ((visibility("default"))) int zend_declare_class_constant_string(zend_class_entry *ce, const char *name, size_t name_length, const char *value )
{
 return zend_declare_class_constant_stringl(ce, name, name_length, value, strlen(value) );
}


__attribute__ ((visibility("default"))) void zend_update_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zval *value )
{
 zval *property;
 zend_class_entry *old_scope = (executor_globals.scope);

 (executor_globals.scope) = scope;

 if (!(*object).value.obj.handlers->write_property) {
  const char *class_name;
  zend_uint class_name_len;

  zend_get_object_classname(object, &class_name, &class_name_len );

  zend_error((1<<4L), "Property %s of class %s cannot be updated", name, class_name);
 }
 do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0); (property)->refcount__gc = 1; (property)->is_ref__gc = 0;;;
 do { const char *__s=(name); int __l=name_length; zval *__z = (property); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 (*object).value.obj.handlers->write_property(object, property, value, 0 );
 _zval_ptr_dtor((&property) );

 (executor_globals.scope) = old_scope;
}


__attribute__ ((visibility("default"))) void zend_update_property_null(zend_class_entry *scope, zval *object, const char *name, int name_length )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 { (*tmp).type = 0; };
 zend_update_property(scope, object, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) void zend_update_property_bool(zend_class_entry *scope, zval *object, const char *name, int name_length, long value )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 do { zval *__z = (tmp); (*__z).value.lval = ((value) != 0); (*__z).type = 3; } while (0);
 zend_update_property(scope, object, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) void zend_update_property_long(zend_class_entry *scope, zval *object, const char *name, int name_length, long value )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 { zval *__z = (tmp); (*__z).value.lval = value; (*__z).type = 1; };
 zend_update_property(scope, object, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) void zend_update_property_double(zend_class_entry *scope, zval *object, const char *name, int name_length, double value )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 { zval *__z = (tmp); (*__z).value.dval = value; (*__z).type = 2; };
 zend_update_property(scope, object, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) void zend_update_property_string(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 do { const char *__s=(value); zval *__z = (tmp); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);
 zend_update_property(scope, object, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) void zend_update_property_stringl(zend_class_entry *scope, zval *object, const char *name, int name_length, const char *value, int value_len )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 do { const char *__s=(value); int __l=value_len; zval *__z = (tmp); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 zend_update_property(scope, object, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) int zend_update_static_property(zend_class_entry *scope, const char *name, int name_length, zval *value )
{
 zval **property;
 zend_class_entry *old_scope = (executor_globals.scope);

 (executor_globals.scope) = scope;
 property = zend_std_get_static_property(scope, name, name_length, 0, ((void *)0) );
 (executor_globals.scope) = old_scope;
 if (!property) {
  return -1;
 } else {
  if (*property != value) {
   if (zval_isref_p(*property)) {
    _zval_dtor((*property) );
    (**property).type = (*value).type;
    (*property)->value = value->value;
    if (zval_refcount_p(value) > 0) {
     _zval_copy_ctor((*property) );
    }
   } else {
    zval *garbage = *property;

    zval_addref_p(value);
    if (zval_isref_p(value)) {
     do { if (zval_refcount_p(*((&value))) > 1) { zval *new_zv; zval_delref_p(*(&value)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(&value))->value; (*new_zv).type = (**(&value)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(&value) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0);
    }
    *property = value;
    _zval_ptr_dtor((&garbage) );
   }
  }
  return 0;
 }
}


__attribute__ ((visibility("default"))) int zend_update_static_property_null(zend_class_entry *scope, const char *name, int name_length )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 { (*tmp).type = 0; };
 return zend_update_static_property(scope, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) int zend_update_static_property_bool(zend_class_entry *scope, const char *name, int name_length, long value )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 do { zval *__z = (tmp); (*__z).value.lval = ((value) != 0); (*__z).type = 3; } while (0);
 return zend_update_static_property(scope, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) int zend_update_static_property_long(zend_class_entry *scope, const char *name, int name_length, long value )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 { zval *__z = (tmp); (*__z).value.lval = value; (*__z).type = 1; };
 return zend_update_static_property(scope, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) int zend_update_static_property_double(zend_class_entry *scope, const char *name, int name_length, double value )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 { zval *__z = (tmp); (*__z).value.dval = value; (*__z).type = 2; };
 return zend_update_static_property(scope, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) int zend_update_static_property_string(zend_class_entry *scope, const char *name, int name_length, const char *value )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 do { const char *__s=(value); zval *__z = (tmp); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);
 return zend_update_static_property(scope, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) int zend_update_static_property_stringl(zend_class_entry *scope, const char *name, int name_length, const char *value, int value_len )
{
 zval *tmp;

 do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
 zval_unset_isref_p(tmp);
 zval_set_refcount_p(tmp, 0);
 do { const char *__s=(value); int __l=value_len; zval *__z = (tmp); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 return zend_update_static_property(scope, name, name_length, tmp );
}


__attribute__ ((visibility("default"))) zval *zend_read_property(zend_class_entry *scope, zval *object, const char *name, int name_length, zend_bool silent )
{
 zval *property, *value;
 zend_class_entry *old_scope = (executor_globals.scope);

 (executor_globals.scope) = scope;

 if (!(*object).value.obj.handlers->read_property) {
  const char *class_name;
  zend_uint class_name_len;

  zend_get_object_classname(object, &class_name, &class_name_len );
  zend_error((1<<4L), "Property %s of class %s cannot be read", name, class_name);
 }

 do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0); (property)->refcount__gc = 1; (property)->is_ref__gc = 0;;;
 do { const char *__s=(name); int __l=name_length; zval *__z = (property); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 value = (*object).value.obj.handlers->read_property(object, property, silent?3:0, 0 );
 _zval_ptr_dtor((&property) );

 (executor_globals.scope) = old_scope;
 return value;
}


__attribute__ ((visibility("default"))) zval *zend_read_static_property(zend_class_entry *scope, const char *name, int name_length, zend_bool silent )
{
 zval **property;
 zend_class_entry *old_scope = (executor_globals.scope);

 (executor_globals.scope) = scope;
 property = zend_std_get_static_property(scope, name, name_length, silent, ((void *)0) );
 (executor_globals.scope) = old_scope;

 return property?*property:((void *)0);
}


__attribute__ ((visibility("default"))) void zend_save_error_handling(zend_error_handling *current )
{
 current->handling = (executor_globals.error_handling);
 current->exception = (executor_globals.exception_class);
 current->user_handler = (executor_globals.user_error_handler);
 if (current->user_handler) {
  zval_addref_p(current->user_handler);
 }
}


__attribute__ ((visibility("default"))) void zend_replace_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class, zend_error_handling *current )
{
 if (current) {
  zend_save_error_handling(current );
  if (error_handling != EH_NORMAL && (executor_globals.user_error_handler)) {
   _zval_ptr_dtor((&(executor_globals.user_error_handler)) );
   (executor_globals.user_error_handler) = ((void *)0);
  }
 }
 (executor_globals.error_handling) = error_handling;
 (executor_globals.exception_class) = error_handling == EH_THROW ? exception_class : ((void *)0);
}


__attribute__ ((visibility("default"))) void zend_restore_error_handling(zend_error_handling *saved )
{
 (executor_globals.error_handling) = saved->handling;
 (executor_globals.exception_class) = saved->handling == EH_THROW ? saved->exception : ((void *)0);
 if (saved->user_handler && saved->user_handler != (executor_globals.user_error_handler)) {
  if ((executor_globals.user_error_handler)) {
   _zval_ptr_dtor((&(executor_globals.user_error_handler)) );
  }
  (executor_globals.user_error_handler) = saved->user_handler;
 } else if (saved->user_handler) {
  _zval_ptr_dtor((&saved->user_handler) );
 }
 saved->user_handler = ((void *)0);
}
