# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c"
# 22 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 1
# 51 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h"
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
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2
# 68 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h"
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

# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 76 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2



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




# 80 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2
# 236 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_errors.h" 1
# 237 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_alloc.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_alloc.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/../TSRM/TSRM.h" 1
# 20 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/../TSRM/TSRM.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/TSRM/tsrm_config.h" 2
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/../TSRM/TSRM.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_alloc.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_alloc.h" 2
# 44 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_alloc.h"
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
# 93 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_alloc.h"
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
# 142 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 159 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );


# 191 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 211 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_alloc.h"
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
# 238 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_types.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_types.h"
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;

typedef struct _zend_object_value {
 zend_object_handle handle;
 const zend_object_handlers *handlers;
} zend_object_value;
# 240 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_string.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_string.h"
__attribute__ ((visibility("default"))) extern const char *(*zend_new_interned_string)(const char *str, int len, int free_src );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 241 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2


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
# 244 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2
# 256 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h"
static const char long_min_digits[] = "2147483648";
# 271 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_hash.h" 1
# 45 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_hash.h"
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
# 214 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag, void **pData );




__attribute__ ((visibility("default"))) int zend_hash_num_elements(const HashTable *ht);

__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);
# 261 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_hash.h"
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








# 348 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_hash.h"
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
# 272 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_ts_hash.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_ts_hash.h"
typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






__attribute__ ((visibility("default"))) int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_ts_hash_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_ts_hash.h"
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








# 273 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_llist.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_llist.h"
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







# 274 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2





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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_object_handlers.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;
struct _zend_literal;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, const struct _zend_literal *key );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 46 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_object_handlers.h"
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

# 306 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2

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
# 378 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h"
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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_iterators.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_iterators.h"
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

# 417 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2

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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_stream.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_stream.h"
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

# 528 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2
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
# 593 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);

# 631 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h"

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

# 676 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h"

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









# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_signal.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_signal.h"
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




# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_signal.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_signal.h"
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
# 74 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_signal.h"
extern __attribute__ ((visibility("default"))) zend_signal_globals_t zend_signal_globals;






void zend_signal_handler_defer(int signo, siginfo_t *siginfo, void *context);
void zend_signal_handler_unblock();
void zend_signal_activate(void);
void zend_signal_deactivate(void);
void zend_signal_startup();
void zend_signal_shutdown(void);
__attribute__ ((visibility("default"))) int zend_signal(int signo, void (*handler)(int) );
__attribute__ ((visibility("default"))) int zend_sigaction(int signo, const struct sigaction *act, struct sigaction *oldact );
# 711 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2






__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);

# 829 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_gc.h" 1
# 81 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_gc.h"
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
# 129 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_gc.h"
} zend_gc_globals;
# 138 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_zval_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_zobj_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_remove_zval_from_buffer(zval *zv );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);

# 180 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_gc.h"
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
# 830 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h"
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
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h" 2

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



# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h" 2





# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_strtod.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_strtod.h"
# 1 "Zend/zend.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);

# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_multiply.h" 1
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h" 2








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
# 105 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h"
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

# 456 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h"
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
# 488 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h"
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
# 525 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h"
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
# 585 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h"
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
# 668 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_operators.h"
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
# 831 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_variables.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_variables.h"


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
# 78 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval **p);


# 832 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend.h" 2

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
# 23 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_modules.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_modules.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_compile.h" 1
# 53 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_compile.h"
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
# 210 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_compile.h"
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
# 397 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_compile.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h"
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

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals_macros.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;









extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 48 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;



# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_stack.h"
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

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_ptr_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_ptr_stack.h"
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

# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_ptr_stack.h"
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
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_objects.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_objects.h"

__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object *zend_objects_get_address(const zval *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_free_object_storage(zend_object *object );

# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_objects_API.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_objects_API.h"
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

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_modules.h" 1
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_float.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_float.h"
# 1 "/usr/include/fpu_control.h" 1 3 4
# 89 "/usr/include/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 100 "/usr/include/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 213 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_float.h" 2
# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_multibyte.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_multibyte.h"
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


# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h" 2
# 55 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_compile.h" 1
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h" 2
# 64 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_globals.h"
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
# 398 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_compile.h" 2



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
# 430 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_compile.h"
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



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_vm_opcodes.h" 1
# 698 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_compile.h" 2
# 820 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_compile.h"

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_modules.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_build.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_modules.h" 2
# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_modules.h"
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
# 118 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_modules.h"
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
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_list.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_list.h"





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
# 116 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_list.h"

# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_execute.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_execute.h"
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
# 183 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_execute.h"
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
# 410 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval** zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 420 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );
__attribute__ ((visibility("default"))) zval **zend_get_zval_ptr_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );
# 451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_execute.h"

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h" 2




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
# 228 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 249 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h"
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
# 293 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h"
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
# 358 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h"
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
# 393 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h"
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
# 441 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 457 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h"
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

# 731 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_API.h"

# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.h"
int zend_startup_builtin_functions(void);


__attribute__ ((visibility("default"))) void zend_fetch_debug_backtrace(zval *return_value, int skip_last, int options, int limit );

# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_constants.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_constants.h"

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

# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_ini.h" 1
# 63 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_ini.h"
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

# 175 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_ini.h"

__attribute__ ((visibility("default"))) int OnUpdateBool(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLong(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLongGEZero(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateReal(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateString(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateStringUnempty(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );

# 195 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_ini.h"
typedef void (*zend_ini_parser_cb_t)(zval *arg1, zval *arg2, zval *arg3, int callback_type, void *arg );

__attribute__ ((visibility("default"))) int zend_parse_ini_file(zend_file_handle *fh, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );
__attribute__ ((visibility("default"))) int zend_parse_ini_string(char *str, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );







typedef struct _zend_ini_parser_param {
 zend_ini_parser_cb_t ini_parser_cb;
 void *arg;
} zend_ini_parser_param;
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_exceptions.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_exceptions.h"


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


# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_extensions.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_extensions.h"
typedef struct _zend_extension_version_info {
 int zend_extension_api_no;
 char *build_id;
} zend_extension_version_info;



typedef struct _zend_extension zend_extension;


typedef int (*startup_func_t)(zend_extension *extension);
typedef void (*shutdown_func_t)(zend_extension *extension);
typedef void (*activate_func_t)(void);
typedef void (*deactivate_func_t)(void);

typedef void (*message_handler_func_t)(int message, void *arg);

typedef void (*op_array_handler_func_t)(zend_op_array *op_array);

typedef void (*statement_handler_func_t)(zend_op_array *op_array);
typedef void (*fcall_begin_handler_func_t)(zend_op_array *op_array);
typedef void (*fcall_end_handler_func_t)(zend_op_array *op_array);

typedef void (*op_array_ctor_func_t)(zend_op_array *op_array);
typedef void (*op_array_dtor_func_t)(zend_op_array *op_array);

struct _zend_extension {
 char *name;
 char *version;
 char *author;
 char *URL;
 char *copyright;

 startup_func_t startup;
 shutdown_func_t shutdown;
 activate_func_t activate;
 deactivate_func_t deactivate;

 message_handler_func_t message_handler;

 op_array_handler_func_t op_array_handler;

 statement_handler_func_t statement_handler;
 fcall_begin_handler_func_t fcall_begin_handler;
 fcall_end_handler_func_t fcall_end_handler;

 op_array_ctor_func_t op_array_ctor;
 op_array_dtor_func_t op_array_dtor;

 int (*api_no_check)(int api_no);
 int (*build_id_check)(const char* build_id);
 void *reserved3;
 void *reserved4;
 void *reserved5;
 void *reserved6;
 void *reserved7;
 void *reserved8;

 void * handle;
 int resource_number;
};


__attribute__ ((visibility("default"))) int zend_get_resource_handle(zend_extension *extension);
__attribute__ ((visibility("default"))) void zend_extension_dispatch_message(int message, void *arg);

# 111 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_extensions.h"
__attribute__ ((visibility("default"))) extern zend_llist zend_extensions;

void zend_extension_dtor(zend_extension *extension);
void zend_append_version_info(const zend_extension *extension);
int zend_startup_extensions_mechanism(void);
int zend_startup_extensions(void);
void zend_shutdown_extensions(void);


__attribute__ ((visibility("default"))) int zend_load_extension(const char *path);
__attribute__ ((visibility("default"))) int zend_register_extension(zend_extension *new_extension, void * handle);
__attribute__ ((visibility("default"))) zend_extension *zend_get_extension(const char *extension_name);

# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_closures.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_closures.h"




void zend_register_closure_ce(void);

extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_closure;

__attribute__ ((visibility("default"))) void zend_create_closure(zval *res, zend_function *op_array, zend_class_entry *scope, zval *this_ptr );
__attribute__ ((visibility("default"))) zend_function *zend_get_closure_invoke_method(zval *obj );
__attribute__ ((visibility("default"))) const zend_function *zend_get_closure_method_def(zval *obj );
__attribute__ ((visibility("default"))) zval* zend_get_closure_this_ptr(zval *obj );


# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c" 2



static void zif_zend_version(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_func_num_args(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_func_get_arg(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_func_get_args(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_strlen(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_strcmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_strncmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_strcasecmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_strncasecmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_each(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_error_reporting(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_define(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_defined(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_called_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_parent_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_method_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_property_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_class_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_interface_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_trait_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_function_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_class_alias(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );







static void zif_get_included_files(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_is_subclass_of(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_is_a(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_class_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_object_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_class_methods(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_trigger_error(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_set_error_handler(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_restore_error_handler(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_set_exception_handler(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_restore_exception_handler(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_declared_classes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_declared_traits(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_declared_interfaces(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_defined_functions(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_defined_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_create_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_resource_type(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_loaded_extensions(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_extension_loaded(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_extension_funcs(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_get_defined_constants(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_debug_backtrace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_debug_print_backtrace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );






static void zif_gc_collect_cycles(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_gc_enabled(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_gc_enable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_gc_disable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );


static const zend_arg_info arginfo_zend__void[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
};

static const zend_arg_info arginfo_func_get_arg[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "arg_num", sizeof("arg_num")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_strlen[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "str", sizeof("str")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_strcmp[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "str1", sizeof("str1")-1, ((void *)0), 0, 0, 0, 0},
 { "str2", sizeof("str2")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_strncmp[] = { { ((void *)0), 0, ((void *)0), 3, 0, 0, 0},
 { "str1", sizeof("str1")-1, ((void *)0), 0, 0, 0, 0},
 { "str2", sizeof("str2")-1, ((void *)0), 0, 0, 0, 0},
 { "len", sizeof("len")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_each[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "arr", sizeof("arr")-1, ((void *)0), 0, 0, 0, 1},
};

static const zend_arg_info arginfo_error_reporting[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "new_error_level", sizeof("new_error_level")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_define[] = { { ((void *)0), 0, ((void *)0), 3, 0, 0, 0},
 { "constant_name", sizeof("constant_name")-1, ((void *)0), 0, 0, 0, 0},
 { "value", sizeof("value")-1, ((void *)0), 0, 0, 0, 0},
 { "case_insensitive", sizeof("case_insensitive")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_defined[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "constant_name", sizeof("constant_name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_get_class[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "object", sizeof("object")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_is_subclass_of[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "object", sizeof("object")-1, ((void *)0), 0, 0, 0, 0},
 { "class_name", sizeof("class_name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_get_class_vars[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "class_name", sizeof("class_name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_get_object_vars[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "obj", sizeof("obj")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_get_class_methods[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "class", sizeof("class")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_method_exists[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "object", sizeof("object")-1, ((void *)0), 0, 0, 0, 0},
 { "method", sizeof("method")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_property_exists[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "object_or_class", sizeof("object_or_class")-1, ((void *)0), 0, 0, 0, 0},
 { "property_name", sizeof("property_name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_class_exists[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "classname", sizeof("classname")-1, ((void *)0), 0, 0, 0, 0},
 { "autoload", sizeof("autoload")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_trait_exists[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "traitname", sizeof("traitname")-1, ((void *)0), 0, 0, 0, 0},
 { "autoload", sizeof("autoload")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_function_exists[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "function_name", sizeof("function_name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_class_alias[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "user_class_name", sizeof("user_class_name")-1, ((void *)0), 0, 0, 0, 0},
 { "alias_name", sizeof("alias_name")-1, ((void *)0), 0, 0, 0, 0},
 { "autoload", sizeof("autoload")-1, ((void *)0), 0, 0, 0, 0},
};
# 197 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c"
static const zend_arg_info arginfo_trigger_error[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "message", sizeof("message")-1, ((void *)0), 0, 0, 0, 0},
 { "error_type", sizeof("error_type")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_set_error_handler[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "error_handler", sizeof("error_handler")-1, ((void *)0), 0, 0, 0, 0},
 { "error_types", sizeof("error_types")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_set_exception_handler[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "exception_handler", sizeof("exception_handler")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_create_function[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "args", sizeof("args")-1, ((void *)0), 0, 0, 0, 0},
 { "code", sizeof("code")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_get_resource_type[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "res", sizeof("res")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_get_loaded_extensions[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "zend_extensions", sizeof("zend_extensions")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_get_defined_constants[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "categorize", sizeof("categorize")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_debug_backtrace[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "options", sizeof("options")-1, ((void *)0), 0, 0, 0, 0},
 { "limit", sizeof("limit")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_debug_print_backtrace[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "options", sizeof("options")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_extension_loaded[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "extension_name", sizeof("extension_name")-1, ((void *)0), 0, 0, 0, 0},
};


static const zend_function_entry builtin_functions[] = {
 { "zend_version", zif_zend_version, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "func_num_args", zif_func_num_args, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "func_get_arg", zif_func_get_arg, arginfo_func_get_arg, (zend_uint) (sizeof(arginfo_func_get_arg)/sizeof(struct _zend_arg_info)-1), 0 },
 { "func_get_args", zif_func_get_args, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "strlen", zif_strlen, arginfo_strlen, (zend_uint) (sizeof(arginfo_strlen)/sizeof(struct _zend_arg_info)-1), 0 },
 { "strcmp", zif_strcmp, arginfo_strcmp, (zend_uint) (sizeof(arginfo_strcmp)/sizeof(struct _zend_arg_info)-1), 0 },
 { "strncmp", zif_strncmp, arginfo_strncmp, (zend_uint) (sizeof(arginfo_strncmp)/sizeof(struct _zend_arg_info)-1), 0 },
 { "strcasecmp", zif_strcasecmp, arginfo_strcmp, (zend_uint) (sizeof(arginfo_strcmp)/sizeof(struct _zend_arg_info)-1), 0 },
 { "strncasecmp", zif_strncasecmp, arginfo_strncmp, (zend_uint) (sizeof(arginfo_strncmp)/sizeof(struct _zend_arg_info)-1), 0 },
 { "each", zif_each, arginfo_each, (zend_uint) (sizeof(arginfo_each)/sizeof(struct _zend_arg_info)-1), 0 },
 { "error_reporting", zif_error_reporting, arginfo_error_reporting, (zend_uint) (sizeof(arginfo_error_reporting)/sizeof(struct _zend_arg_info)-1), 0 },
 { "define", zif_define, arginfo_define, (zend_uint) (sizeof(arginfo_define)/sizeof(struct _zend_arg_info)-1), 0 },
 { "defined", zif_defined, arginfo_defined, (zend_uint) (sizeof(arginfo_defined)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_class", zif_get_class, arginfo_get_class, (zend_uint) (sizeof(arginfo_get_class)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_called_class", zif_get_called_class, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_parent_class", zif_get_parent_class, arginfo_get_class, (zend_uint) (sizeof(arginfo_get_class)/sizeof(struct _zend_arg_info)-1), 0 },
 { "method_exists", zif_method_exists, arginfo_method_exists, (zend_uint) (sizeof(arginfo_method_exists)/sizeof(struct _zend_arg_info)-1), 0 },
 { "property_exists", zif_property_exists, arginfo_property_exists, (zend_uint) (sizeof(arginfo_property_exists)/sizeof(struct _zend_arg_info)-1), 0 },
 { "class_exists", zif_class_exists, arginfo_class_exists, (zend_uint) (sizeof(arginfo_class_exists)/sizeof(struct _zend_arg_info)-1), 0 },
 { "interface_exists", zif_interface_exists, arginfo_class_exists, (zend_uint) (sizeof(arginfo_class_exists)/sizeof(struct _zend_arg_info)-1), 0 },
 { "trait_exists", zif_trait_exists, arginfo_trait_exists, (zend_uint) (sizeof(arginfo_trait_exists)/sizeof(struct _zend_arg_info)-1), 0 },
 { "function_exists", zif_function_exists, arginfo_function_exists, (zend_uint) (sizeof(arginfo_function_exists)/sizeof(struct _zend_arg_info)-1), 0 },
 { "class_alias", zif_class_alias, arginfo_class_alias, (zend_uint) (sizeof(arginfo_class_alias)/sizeof(struct _zend_arg_info)-1), 0 },







 { "get_included_files", zif_get_included_files, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_required_files", zif_get_included_files, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "is_subclass_of", zif_is_subclass_of, arginfo_is_subclass_of, (zend_uint) (sizeof(arginfo_is_subclass_of)/sizeof(struct _zend_arg_info)-1), 0 },
 { "is_a", zif_is_a, arginfo_is_subclass_of, (zend_uint) (sizeof(arginfo_is_subclass_of)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_class_vars", zif_get_class_vars, arginfo_get_class_vars, (zend_uint) (sizeof(arginfo_get_class_vars)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_object_vars", zif_get_object_vars, arginfo_get_object_vars, (zend_uint) (sizeof(arginfo_get_object_vars)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_class_methods", zif_get_class_methods, arginfo_get_class_methods, (zend_uint) (sizeof(arginfo_get_class_methods)/sizeof(struct _zend_arg_info)-1), 0 },
 { "trigger_error", zif_trigger_error, arginfo_trigger_error, (zend_uint) (sizeof(arginfo_trigger_error)/sizeof(struct _zend_arg_info)-1), 0 },
 { "user_error", zif_trigger_error, arginfo_trigger_error, (zend_uint) (sizeof(arginfo_trigger_error)/sizeof(struct _zend_arg_info)-1), 0 },
 { "set_error_handler", zif_set_error_handler, arginfo_set_error_handler, (zend_uint) (sizeof(arginfo_set_error_handler)/sizeof(struct _zend_arg_info)-1), 0 },
 { "restore_error_handler", zif_restore_error_handler, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "set_exception_handler", zif_set_exception_handler, arginfo_set_exception_handler, (zend_uint) (sizeof(arginfo_set_exception_handler)/sizeof(struct _zend_arg_info)-1), 0 },
 { "restore_exception_handler", zif_restore_exception_handler, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_declared_classes", zif_get_declared_classes, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_declared_traits", zif_get_declared_traits, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_declared_interfaces", zif_get_declared_interfaces, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_defined_functions", zif_get_defined_functions, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_defined_vars", zif_get_defined_vars, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "create_function", zif_create_function, arginfo_create_function, (zend_uint) (sizeof(arginfo_create_function)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_resource_type", zif_get_resource_type, arginfo_get_resource_type, (zend_uint) (sizeof(arginfo_get_resource_type)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_loaded_extensions", zif_get_loaded_extensions, arginfo_get_loaded_extensions, (zend_uint) (sizeof(arginfo_get_loaded_extensions)/sizeof(struct _zend_arg_info)-1), 0 },
 { "extension_loaded", zif_extension_loaded, arginfo_extension_loaded, (zend_uint) (sizeof(arginfo_extension_loaded)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_extension_funcs", zif_get_extension_funcs, arginfo_extension_loaded, (zend_uint) (sizeof(arginfo_extension_loaded)/sizeof(struct _zend_arg_info)-1), 0 },
 { "get_defined_constants", zif_get_defined_constants, arginfo_get_defined_constants, (zend_uint) (sizeof(arginfo_get_defined_constants)/sizeof(struct _zend_arg_info)-1), 0 },
 { "debug_backtrace", zif_debug_backtrace, arginfo_debug_backtrace, (zend_uint) (sizeof(arginfo_debug_backtrace)/sizeof(struct _zend_arg_info)-1), 0 },
 { "debug_print_backtrace", zif_debug_print_backtrace, arginfo_debug_print_backtrace, (zend_uint) (sizeof(arginfo_debug_print_backtrace)/sizeof(struct _zend_arg_info)-1), 0 },






 { "gc_collect_cycles", zif_gc_collect_cycles, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "gc_enabled", zif_gc_enabled, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "gc_enable", zif_gc_enable, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "gc_disable", zif_gc_disable, arginfo_zend__void, (zend_uint) (sizeof(arginfo_zend__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};


int zm_startup_core(int type, int module_number ) {
 zend_class_entry class_entry;

 { const char *cl_name = "stdClass"; int _len = sizeof("stdClass")-1; class_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (class_entry.name == cl_name) { class_entry.name = zend_strndup(cl_name, _len); } class_entry.name_length = _len; class_entry.constructor = ((void *)0); class_entry.destructor = ((void *)0); class_entry.clone = ((void *)0); class_entry.serialize = ((void *)0); class_entry.unserialize = ((void *)0); class_entry.create_object = ((void *)0); class_entry.interface_gets_implemented = ((void *)0); class_entry.get_static_method = ((void *)0); class_entry.__call = ((void *)0); class_entry.__callstatic = ((void *)0); class_entry.__tostring = ((void *)0); class_entry.__get = ((void *)0); class_entry.__set = ((void *)0); class_entry.__unset = ((void *)0); class_entry.__isset = ((void *)0); class_entry.serialize_func = ((void *)0); class_entry.unserialize_func = ((void *)0); class_entry.serialize = ((void *)0); class_entry.unserialize = ((void *)0); class_entry.parent = ((void *)0); class_entry.num_interfaces = 0; class_entry.traits = ((void *)0); class_entry.num_traits = 0; class_entry.trait_aliases = ((void *)0); class_entry.trait_precedences = ((void *)0); class_entry.interfaces = ((void *)0); class_entry.get_iterator = ((void *)0); class_entry.iterator_funcs.funcs = ((void *)0); class_entry.info.internal.module = ((void *)0); class_entry.info.internal.builtin_functions = ((void *)0); };
 zend_standard_class_def = zend_register_internal_class(&class_entry );

 zend_register_default_classes();

 return 0;
}


zend_module_entry zend_builtin_module = {
    sizeof(zend_module_entry), 20100525, 0, 0, ((void *)0), ((void *)0),
 "Core",
 builtin_functions,
 zm_startup_core,
 ((void *)0),
 ((void *)0),
 ((void *)0),
 ((void *)0),
 "2.4.0",
 0, ((void *)0), ((void *)0), ((void *)0), ((void *)0), 0, 0, ((void *)0), 0, "API" "20100525" ",NTS"
};


int zend_startup_builtin_functions(void)
{
 zend_builtin_module.module_number = 0;
 zend_builtin_module.type = 1;
 return ((executor_globals.current_module) = zend_register_module_ex(&zend_builtin_module )) == ((void *)0) ? -1 : 0;
}




void zif_zend_version(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 { do { const char *__s=("2.4.0"); int __l=sizeof("2.4.0")-1; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}





void zif_gc_collect_cycles(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 { { zval *__z = (return_value); (*__z).value.lval = gc_collect_cycles(); (*__z).type = 1; }; return; };
}




void zif_gc_enabled(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 { do { zval *__z = (return_value); (*__z).value.lval = (((gc_globals.gc_enabled)) != 0); (*__z).type = 3; } while (0); return; };
}




void zif_gc_enable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zend_alter_ini_entry("zend.enable_gc", sizeof("zend.enable_gc"), "1", sizeof("1")-1, (1<<0), (1<<4));
}




void zif_gc_disable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zend_alter_ini_entry("zend.enable_gc", sizeof("zend.enable_gc"), "0", sizeof("0")-1, (1<<0), (1<<4));
}




void zif_func_num_args(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zend_execute_data *ex = (executor_globals.current_execute_data)->prev_execute_data;

 if (ex && ex->function_state.arguments) {
  { { zval *__z = (return_value); (*__z).value.lval = (long)(zend_uintptr_t)*(ex->function_state.arguments); (*__z).type = 1; }; return; };
 } else {
  zend_error((1<<1L), "func_num_args():  Called from the global scope - no function context");
  { { zval *__z = (return_value); (*__z).value.lval = -1; (*__z).type = 1; }; return; };
 }
}





void zif_func_get_arg(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 void **p;
 int arg_count;
 zval *arg;
 long requested_offset;
 zend_execute_data *ex = (executor_globals.current_execute_data)->prev_execute_data;

 if (zend_parse_parameters((ht) , "l", &requested_offset) == -1) {
  return;
 }

 if (requested_offset < 0) {
  zend_error((1<<1L), "func_get_arg():  The argument number should be >= 0");
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (!ex || !ex->function_state.arguments) {
  zend_error((1<<1L), "func_get_arg():  Called from the global scope - no function context");
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 p = ex->function_state.arguments;
 arg_count = (int)(zend_uintptr_t) *p;

 if (requested_offset >= arg_count) {
  zend_error((1<<1L), "func_get_arg():  Argument %ld not passed to function", requested_offset);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 arg = *(p-(arg_count-requested_offset));
 *return_value = *arg;
 _zval_copy_ctor((return_value) );
 (return_value)->refcount__gc = 1; (return_value)->is_ref__gc = 0;;
}





void zif_func_get_args(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 void **p;
 int arg_count;
 int i;
 zend_execute_data *ex = (executor_globals.current_execute_data)->prev_execute_data;

 if (!ex || !ex->function_state.arguments) {
  zend_error((1<<1L), "func_get_args():  Called from the global scope - no function context");
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 p = ex->function_state.arguments;
 arg_count = (int)(zend_uintptr_t) *p;

 _array_init((return_value), (arg_count) );
 for (i=0; i<arg_count; i++) {
  zval *element;

  do { (element) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(element))->u.buffered = ((void *)0); } while (0);
  *element = **((zval **) (p-(arg_count-i)));
  _zval_copy_ctor((element) );
  (element)->refcount__gc = 1; (element)->is_ref__gc = 0;;
  _zend_hash_index_update_or_next_insert(return_value->value.ht, 0, &element, sizeof(zval *), ((void *)0), (1<<2) );
 }
}





void zif_strlen(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *s1;
 int s1_len;

 if (zend_parse_parameters((ht) , "s", &s1, &s1_len) == -1) {
  return;
 }

 { zval *__z = (return_value); (*__z).value.lval = s1_len; (*__z).type = 1; };
}





void zif_strcmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *s1, *s2;
 int s1_len, s2_len;

 if (zend_parse_parameters((ht) , "ss", &s1, &s1_len, &s2, &s2_len) == -1) {
  return;
 }

 { { zval *__z = (return_value); (*__z).value.lval = zend_binary_strcmp(s1, s1_len, s2, s2_len); (*__z).type = 1; }; return; };
}





void zif_strncmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *s1, *s2;
 int s1_len, s2_len;
 long len;

 if (zend_parse_parameters((ht) , "ssl", &s1, &s1_len, &s2, &s2_len, &len) == -1) {
  return;
 }

 if (len < 0) {
  zend_error((1<<1L), "Length must be greater than or equal to 0");
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 { { zval *__z = (return_value); (*__z).value.lval = zend_binary_strncmp(s1, s1_len, s2, s2_len, len); (*__z).type = 1; }; return; };
}





void zif_strcasecmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *s1, *s2;
 int s1_len, s2_len;

 if (zend_parse_parameters((ht) , "ss", &s1, &s1_len, &s2, &s2_len) == -1) {
  return;
 }

 { { zval *__z = (return_value); (*__z).value.lval = zend_binary_strcasecmp(s1, s1_len, s2, s2_len); (*__z).type = 1; }; return; };
}





void zif_strncasecmp(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *s1, *s2;
 int s1_len, s2_len;
 long len;

 if (zend_parse_parameters((ht) , "ssl", &s1, &s1_len, &s2, &s2_len, &len) == -1) {
  return;
 }

 if (len < 0) {
  zend_error((1<<1L), "Length must be greater than or equal to 0");
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 { { zval *__z = (return_value); (*__z).value.lval = zend_binary_strncasecmp(s1, s1_len, s2, s2_len, len); (*__z).type = 1; }; return; };
}





void zif_each(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *array, *entry, **entry_ptr, *tmp;
 char *string_key;
 uint string_key_len;
 ulong num_key;
 zval **inserted_pointer;
 HashTable *target_hash;

 if (zend_parse_parameters((ht) , "z", &array) == -1) {
  return;
 }

 target_hash = ((*array).type==4 ? (*array).value.ht : (((*array).type==5 ? (*array).value.obj.handlers->get_properties((array) ) : ((void *)0))));
 if (!target_hash) {
  zend_error((1<<1L),"Variable passed to each() is not an array or object");
  return;
 }
 if (zend_hash_get_current_data_ex(target_hash, (void **) &entry_ptr, ((void *)0))==-1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 _array_init((return_value), 0 );
 entry = *entry_ptr;


 if (zval_isref_p(entry)) {
  do { (tmp) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(tmp))->u.buffered = ((void *)0); } while (0);
  *tmp = *entry;
  _zval_copy_ctor((tmp) );
  zval_unset_isref_p(tmp);
  zval_set_refcount_p(tmp, 0);
  entry=tmp;
 }
 _zend_hash_index_update_or_next_insert(return_value->value.ht, 1, &entry, sizeof(zval *), ((void *)0), (1<<0) );
 zval_addref_p(entry);
 _zend_hash_add_or_update(return_value->value.ht, "value", sizeof("value"), &entry, sizeof(zval *), ((void *)0), (1<<0) );
 zval_addref_p(entry);


 switch (zend_hash_get_current_key_ex(target_hash, &string_key, &string_key_len, &num_key, 1, ((void *)0))) {
  case 1:
   add_get_index_stringl(return_value, 0, string_key, string_key_len-1, (void **) &inserted_pointer, 0);
   break;
  case 2:
   add_get_index_long(return_value, 0, num_key, (void **) &inserted_pointer);
   break;
 }
 _zend_hash_add_or_update(return_value->value.ht, "key", sizeof("key"), inserted_pointer, sizeof(zval *), ((void *)0), (1<<0) );
 zval_addref_p(*(inserted_pointer));
 zend_hash_move_forward_ex(target_hash, ((void *)0));
}





void zif_error_reporting(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *err;
 int err_len;
 int old_error_reporting;

 if (zend_parse_parameters((ht) , "|s", &err, &err_len) == -1) {
  return;
 }

 old_error_reporting = (executor_globals.error_reporting);
 if((ht) != 0) {
  zend_alter_ini_entry("error_reporting", sizeof("error_reporting"), err, err_len, (1<<0), (1<<4));
 }

 { zval *__z = (return_value); (*__z).value.lval = old_error_reporting; (*__z).type = 1; };
}





void zif_define(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *name;
 int name_len;
 zval *val;
 zval *val_free = ((void *)0);
 zend_bool non_cs = 0;
 int case_sensitive = (1<<0);
 zend_constant c;

 if (zend_parse_parameters((ht) , "sz|b", &name, &name_len, &val, &non_cs) == -1) {
  return;
 }

 if(non_cs) {
  case_sensitive = 0;
 }


 if (zend_memnstr(name, "::", sizeof("::") - 1, name + name_len)) {
  zend_error((1<<1L), "Class constants cannot be defined or redefined");
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

repeat:
 switch ((*val).type) {
  case 1:
  case 2:
  case 6:
  case 3:
  case 7:
  case 0:
   break;
  case 5:
   if (!val_free) {
    if ((*val).value.obj.handlers->get) {
     val_free = val = (*val).value.obj.handlers->get(val );
     goto repeat;
    } else if ((*val).value.obj.handlers->cast_object) {
     do { (val_free) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(val_free))->u.buffered = ((void *)0); } while (0); *val_free = zval_used_for_init;;;
     if ((*val).value.obj.handlers->cast_object(val, val_free, 6 ) == 0) {
      val = val_free;
      break;
     }
    }
   }

  default:
   zend_error((1<<1L),"Constants may only evaluate to scalar values");
   if (val_free) {
    _zval_ptr_dtor((&val_free) );
   }
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 c.value = *val;
 _zval_copy_ctor((&c.value) );
 if (val_free) {
  _zval_ptr_dtor((&val_free) );
 }
 c.flags = case_sensitive;
 c.name = (((name) >= (compiler_globals.interned_strings_start)) && ((name) < (compiler_globals.interned_strings_end))) ? name : zend_strndup(name, name_len);
 c.name_len = name_len+1;
 c.module_number = 2147483647;
 if (zend_register_constant(&c ) == 0) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}





void zif_defined(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *name;
 int name_len;
 zval c;

 if (zend_parse_parameters((ht) , "s", &name, &name_len) == -1) {
  return;
 }

 if (zend_get_constant_ex(name, name_len, &c, ((void *)0), 0x0100 )) {
  _zval_dtor((&c) );
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}





void zif_get_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *obj = ((void *)0);
 const char *name = "";
 zend_uint name_len = 0;
 int dup;

 if (zend_parse_parameters((ht) , "|o!", &obj) == -1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (!obj) {
  if ((executor_globals.scope)) {
   { do { const char *__s=((executor_globals.scope)->name); int __l=(executor_globals.scope)->name_length; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
  } else {
   zend_error((1<<1L), "get_class() called without object from outside a class");
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
 }

 dup = zend_get_object_classname(obj, &name, &name_len );

 { do { const char *__s=(name); int __l=name_len; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (dup?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}





void zif_get_called_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 if ((executor_globals.called_scope)) {
  { do { const char *__s=((executor_globals.called_scope)->name); int __l=(executor_globals.called_scope)->name_length; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 } else if (!(executor_globals.scope)) {
  zend_error((1<<1L), "get_called_class() called from outside a class");
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}





void zif_get_parent_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *arg;
 zend_class_entry *ce = ((void *)0);
 const char *name;
 zend_uint name_length;

 if (zend_parse_parameters((ht) , "|z", &arg) == -1) {
  return;
 }

 if (!(ht)) {
  ce = (executor_globals.scope);
  if (ce && ce->parent) {
   { do { const char *__s=(ce->parent->name); int __l=ce->parent->name_length; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
  } else {
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
 }

 if ((*arg).type == 5) {
  if ((*arg).value.obj.handlers->get_class_name
   && (*arg).value.obj.handlers->get_class_name(arg, &name, &name_length, 1 ) == 0) {
   { do { const char *__s=(name); int __l=name_length; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
  } else {
   ce = zend_get_class_entry(arg );
  }
 } else if ((*arg).type == 6) {
  zend_class_entry **pce;

  if (zend_lookup_class((*arg).value.str.val, (*arg).value.str.len, &pce ) == 0) {
   ce = *pce;
  }
 }

 if (ce && ce->parent) {
  { do { const char *__s=(ce->parent->name); int __l=ce->parent->name_length; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}



static void is_a_impl(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , zend_bool only_subclass)
{
 zval *obj;
 char *class_name;
 int class_name_len;
 zend_class_entry *instance_ce;
 zend_class_entry **ce;
 zend_bool retval;

 if (zend_parse_parameters((ht) , "zs", &obj, &class_name, &class_name_len) == -1) {
  return;
 }

 if ((*obj).type == 6) {
  zend_class_entry **the_ce;
  if (zend_lookup_class((*obj).value.str.val, (*obj).value.str.len, &the_ce ) == -1) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
  instance_ce = *the_ce;
 } else if ((*obj).type == 5 && ((*obj).value.obj.handlers->get_class_entry != ((void *)0))) {
  instance_ce = zend_get_class_entry(&(*obj) );
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (zend_lookup_class_ex(class_name, class_name_len, ((void *)0), 0, &ce ) == -1) {
  retval = 0;
 } else {
  if (only_subclass && instance_ce == *ce) {
   retval = 0;
   } else {
   retval = instanceof_function(instance_ce, *ce );
  }
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((retval) != 0); (*__z).type = 3; } while (0); return; };
}




void zif_is_subclass_of(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 is_a_impl(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}





void zif_is_a(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 is_a_impl(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
}




static void add_class_vars(zend_class_entry *ce, int statics, zval *return_value )
{
 HashPosition pos;
 zend_property_info *prop_info;
 zval *prop, *prop_copy;
 char *key;
 uint key_len;
 ulong num_index;

 zend_hash_internal_pointer_reset_ex(&ce->properties_info, &pos);
 while (zend_hash_get_current_data_ex(&ce->properties_info, (void **) &prop_info, &pos) == 0) {
  zend_hash_get_current_key_ex(&ce->properties_info, &key, &key_len, &num_index, 0, &pos);
  zend_hash_move_forward_ex(&ce->properties_info, &pos);
  if (((prop_info->flags & 0x20000) &&
       prop_info->ce != (executor_globals.scope)) ||
      ((prop_info->flags & 0x200) &&
       !zend_check_protected(prop_info->ce, (executor_globals.scope))) ||
      ((prop_info->flags & 0x400) &&
        ce != (executor_globals.scope) &&
     prop_info->ce != (executor_globals.scope))) {
   continue;
  }
  prop = ((void *)0);
  if (prop_info->offset >= 0) {
   if (statics && (prop_info->flags & 0x01) != 0) {
    prop = ce->default_static_members_table[prop_info->offset];
   } else if (!statics && (prop_info->flags & 0x01) == 0) {
    prop = ce->default_properties_table[prop_info->offset];
    }
  }
  if (!prop) {
   continue;
  }


  do { (prop_copy) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(prop_copy))->u.buffered = ((void *)0); } while (0);
  *prop_copy = *prop;
  _zval_copy_ctor((prop_copy) );
  (prop_copy)->refcount__gc = 1; (prop_copy)->is_ref__gc = 0;;



  if ((*prop_copy).type == 9 || ((*prop_copy).type & 0x00f) == 8) {
   zval_update_constant(&prop_copy, 0 );
  }

  add_assoc_zval_ex(return_value, key, strlen(key)+1, prop_copy);
 }
}





void zif_get_class_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *class_name;
 int class_name_len;
 zend_class_entry **pce;

 if (zend_parse_parameters((ht) , "s", &class_name, &class_name_len) == -1) {
  return;
 }

 if (zend_lookup_class(class_name, class_name_len, &pce ) == -1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  _array_init((return_value), 0 );
  zend_update_class_constants(*pce );
  add_class_vars(*pce, 0, return_value );
  add_class_vars(*pce, 1, return_value );
 }
}





void zif_get_object_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *obj;
 zval **value;
 HashTable *properties;
 HashPosition pos;
 char *key;
 const char *prop_name, *class_name;
 uint key_len;
 ulong num_index;
 zend_object *zobj;

 if (zend_parse_parameters((ht) , "o", &obj) == -1) {
  return;
 }

 if ((*obj).value.obj.handlers->get_properties == ((void *)0)) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 properties = (*obj).value.obj.handlers->get_properties(obj );

 if (properties == ((void *)0)) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 zobj = zend_objects_get_address(obj );

 _array_init((return_value), 0 );

 zend_hash_internal_pointer_reset_ex(properties, &pos);

 while (zend_hash_get_current_data_ex(properties, (void **) &value, &pos) == 0) {
  if (zend_hash_get_current_key_ex(properties, &key, &key_len, &num_index, 0, &pos) == 1) {
   if (zend_check_property_access(zobj, key, key_len-1 ) == 0) {
    zend_unmangle_property_name(key, key_len-1, &class_name, &prop_name);

    zval_addref_p(*(value));
    add_assoc_zval_ex(return_value, prop_name, strlen(prop_name)+1, *value);
   }
  }
  zend_hash_move_forward_ex(properties, &pos);
 }
}





void zif_get_class_methods(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *klass;
 zval *method_name;
 zend_class_entry *ce = ((void *)0), **pce;
 HashPosition pos;
 zend_function *mptr;

 if (zend_parse_parameters((ht) , "z", &klass) == -1) {
  return;
 }

 if ((*klass).type == 5) {

  if (!((*klass).value.obj.handlers->get_class_entry != ((void *)0))) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
  ce = zend_get_class_entry(&(*klass) );
 } else if ((*klass).type == 6) {
  if (zend_lookup_class((*klass).value.str.val, (*klass).value.str.len, &pce ) == 0) {
   ce = *pce;
  }
 }

 if (!ce) {
  { { (*return_value).type = 0; }; return;};
 }

 _array_init((return_value), 0 );
 zend_hash_internal_pointer_reset_ex(&ce->function_table, &pos);

 while (zend_hash_get_current_data_ex(&ce->function_table, (void **) &mptr, &pos) == 0) {
  if ((mptr->common.fn_flags & 0x100)
   || ((executor_globals.scope) &&
       (((mptr->common.fn_flags & 0x200) &&
         zend_check_protected(mptr->common.scope, (executor_globals.scope)))
     || ((mptr->common.fn_flags & 0x400) &&
         (executor_globals.scope) == mptr->common.scope)))) {
   char *key;
   uint key_len;
   ulong num_index;
   uint len = strlen(mptr->common.function_name);


   if ((mptr->common.fn_flags & 0x2000) == 0 ||
       mptr->common.scope == ce ||
       zend_hash_get_current_key_ex(&ce->function_table, &key, &key_len, &num_index, 0, &pos) != 1 ||
       zend_binary_strcasecmp(key, key_len-1, mptr->common.function_name, len) == 0) {

    do { (method_name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(method_name))->u.buffered = ((void *)0); } while (0); (method_name)->refcount__gc = 1; (method_name)->is_ref__gc = 0;;;
    do { const char *__s=(mptr->common.function_name); int __l=len; zval *__z = (method_name); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
    _zend_hash_index_update_or_next_insert(return_value->value.ht, 0, &method_name, sizeof(zval *), ((void *)0), (1<<2) );
   }
  }
  zend_hash_move_forward_ex(&ce->function_table, &pos);
 }
}





void zif_method_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *klass;
 char *method_name;
 int method_len;
 char *lcname;
 zend_class_entry * ce, **pce;

 if (zend_parse_parameters((ht) , "zs", &klass, &method_name, &method_len) == -1) {
  return;
 }
 if ((*klass).type == 5) {
  ce = zend_get_class_entry(&(*klass) );
 } else if ((*klass).type == 6) {
  if (zend_lookup_class((*klass).value.str.val, (*klass).value.str.len, &pce ) == -1) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
  ce = *pce;
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 lcname = zend_str_tolower_dup(method_name, method_len);
 if (zend_hash_exists(&ce->function_table, lcname, method_len+1)) {
  _efree((lcname) );
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  union _zend_function *func = ((void *)0);

  if ((*klass).type == 5
  && (*klass).value.obj.handlers->get_method != ((void *)0)
  && (func = (*klass).value.obj.handlers->get_method(&klass, method_name, method_len, ((void *)0) )) != ((void *)0)
  ) {
   if (func->type == 1
   && (func->common.fn_flags & 0x200000) != 0
   ) {

    do { zval *__z = (return_value); (*__z).value.lval = (((func->common.scope == zend_ce_closure && (method_len == sizeof("__invoke")-1) && memcmp(lcname, "__invoke", sizeof("__invoke")-1) == 0) ? 1 : 0) != 0); (*__z).type = 3; } while (0)

                                                                                             ;

    _efree((lcname) );
    _efree(((char*)((zend_internal_function*)func)->function_name) );
    _efree((func) );
    return;
   }
   _efree((lcname) );
   { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
  }
 }
 _efree((lcname) );
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zif_property_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *object;
 char *property;
 int property_len;
 zend_class_entry *ce, **pce;
 zend_property_info *property_info;
 zval property_z;
 ulong h;

 if (zend_parse_parameters((ht) , "zs", &object, &property, &property_len) == -1) {
  return;
 }

 if (property_len == 0) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if ((*object).type == 6) {
  if (zend_lookup_class((*object).value.str.val, (*object).value.str.len, &pce ) == -1) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
  ce = *pce;
 } else if ((*object).type == 5) {
  ce = zend_get_class_entry(&(*object) );
 } else {
  zend_error((1<<1L), "First parameter must either be an object or the name of an existing class");
  { { (*return_value).type = 0; }; return;};
 }

 h = zend_get_hash_value(property, property_len+1);
 if (zend_hash_quick_find(&ce->properties_info, property, property_len+1, h, (void **) &property_info) == 0
  && (property_info->flags & 0x20000) == 0) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }

 do { const char *__s=(property); int __l=property_len; zval *__z = (&property_z); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 if ((*object).type == 5 &&
  ((*object)).value.obj.handlers->has_property &&
  ((*object)).value.obj.handlers->has_property(object, &property_z, 2, 0 )) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}





void zif_class_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *class_name, *lc_name;
 zend_class_entry **ce;
 int class_name_len;
 int found;
 zend_bool autoload = 1;
 zend_bool use_heap;

 if (zend_parse_parameters((ht) , "s|b", &class_name, &class_name_len, &autoload) == -1) {
  return;
 }

 if (!autoload) {
  char *name;
  int len;

  lc_name = ((use_heap = (__builtin_expect((class_name_len + 1) > ((32 * 1024)), 0))) ? _emalloc((class_name_len + 1) ) : __builtin_alloca (class_name_len + 1));
  zend_str_tolower_copy(lc_name, class_name, class_name_len);


  name = lc_name;
  len = class_name_len;
  if (lc_name[0] == '\\') {
   name = &lc_name[1];
   len--;
  }

  found = zend_hash_find((executor_globals.class_table), name, len+1, (void **) &ce);
  do { if (__builtin_expect(use_heap, 0)) _efree((lc_name) ); } while (0);
  { do { zval *__z = (return_value); (*__z).value.lval = ((found == 0 && !(((*ce)->ce_flags & (0x80 | 0x120)) > 0x20)) != 0); (*__z).type = 3; } while (0); return; };
 }

  if (zend_lookup_class(class_name, class_name_len, &ce ) == 0) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((((*ce)->ce_flags & (0x80 | (0x120 - 0x20))) == 0) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}




void zif_interface_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *iface_name, *lc_name;
 zend_class_entry **ce;
 int iface_name_len;
 int found;
 zend_bool autoload = 1;
 zend_bool use_heap;

 if (zend_parse_parameters((ht) , "s|b", &iface_name, &iface_name_len, &autoload) == -1) {
  return;
 }

 if (!autoload) {
  char *name;
  int len;

  lc_name = ((use_heap = (__builtin_expect((iface_name_len + 1) > ((32 * 1024)), 0))) ? _emalloc((iface_name_len + 1) ) : __builtin_alloca (iface_name_len + 1));
  zend_str_tolower_copy(lc_name, iface_name, iface_name_len);


  name = lc_name;
  len = iface_name_len;
  if (lc_name[0] == '\\') {
   name = &lc_name[1];
   len--;
  }

  found = zend_hash_find((executor_globals.class_table), name, len+1, (void **) &ce);
  do { if (__builtin_expect(use_heap, 0)) _efree((lc_name) ); } while (0);
  { do { zval *__z = (return_value); (*__z).value.lval = ((found == 0 && (*ce)->ce_flags & 0x80) != 0); (*__z).type = 3; } while (0); return; };
 }

  if (zend_lookup_class(iface_name, iface_name_len, &ce ) == 0) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((((*ce)->ce_flags & 0x80) > 0) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}




void zif_trait_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *trait_name, *lc_name;
 zend_class_entry **ce;
 int trait_name_len;
 int found;
 zend_bool autoload = 1;
 zend_bool use_heap;

 if (zend_parse_parameters((ht) , "s|b", &trait_name, &trait_name_len, &autoload) == -1) {
  return;
 }

 if (!autoload) {
  char *name;
  int len;

  lc_name = ((use_heap = (__builtin_expect((trait_name_len + 1) > ((32 * 1024)), 0))) ? _emalloc((trait_name_len + 1) ) : __builtin_alloca (trait_name_len + 1));
  zend_str_tolower_copy(lc_name, trait_name, trait_name_len);


  name = lc_name;
  len = trait_name_len;
  if (lc_name[0] == '\\') {
   name = &lc_name[1];
   len--;
  }

  found = zend_hash_find((executor_globals.class_table), name, len+1, (void **) &ce);
  do { if (__builtin_expect(use_heap, 0)) _efree((lc_name) ); } while (0);
  { do { zval *__z = (return_value); (*__z).value.lval = ((found == 0 && (((*ce)->ce_flags & 0x120) > 0x20)) != 0); (*__z).type = 3; } while (0); return; };
 }

  if (zend_lookup_class(trait_name, trait_name_len, &ce ) == 0) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((((*ce)->ce_flags & 0x120) > 0x20) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}





void zif_function_exists(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *name;
 int name_len;
 zend_function *func;
 char *lcname;
 zend_bool retval;

 if (zend_parse_parameters((ht) , "s", &name, &name_len) == -1) {
  return;
 }

 lcname = zend_str_tolower_dup(name, name_len);


 name = lcname;
 if (lcname[0] == '\\') {
  name = &lcname[1];
  name_len--;
 }

 retval = (zend_hash_find((executor_globals.function_table), name, name_len+1, (void **)&func) == 0);

 _efree((lcname) );





 if (retval && func->type == 1 &&
  func->internal_function.handler == zif_display_disabled_function) {
  retval = 0;
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((retval) != 0); (*__z).type = 3; } while (0); return; };
}




void zif_class_alias(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *class_name, *lc_name, *alias_name;
 zend_class_entry **ce;
 int class_name_len, alias_name_len;
 int found;
 zend_bool autoload = 1;
 zend_bool use_heap;

 if (zend_parse_parameters((ht) , "ss|b", &class_name, &class_name_len, &alias_name, &alias_name_len, &autoload) == -1) {
  return;
 }

 if (!autoload) {
  lc_name = ((use_heap = (__builtin_expect((class_name_len + 1) > ((32 * 1024)), 0))) ? _emalloc((class_name_len + 1) ) : __builtin_alloca (class_name_len + 1));
  zend_str_tolower_copy(lc_name, class_name, class_name_len);

  found = zend_hash_find((executor_globals.class_table), lc_name, class_name_len+1, (void **) &ce);
  do { if (__builtin_expect(use_heap, 0)) _efree((lc_name) ); } while (0);
 } else {
  found = zend_lookup_class(class_name, class_name_len, &ce );
 }
 if (found == 0) {
  if ((*ce)->type == 2) {
   if (zend_register_class_alias_ex(alias_name, alias_name_len, *ce ) == 0) {
    { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
   } else {
    zend_error((1<<1L), "Cannot redeclare class %s", alias_name);
    { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
   }
  } else {
   zend_error((1<<1L), "First argument of class_alias() must be a name of user defined class");
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
 } else {
  zend_error((1<<1L), "Class '%s' not found", class_name);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}
# 1451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c"
void zif_get_included_files(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *entry;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 _array_init((return_value), 0 );
 zend_hash_internal_pointer_reset_ex(&(executor_globals.included_files), ((void *)0));
 while (zend_hash_get_current_key_ex(&(executor_globals.included_files), &entry, ((void *)0), ((void *)0), 1, ((void *)0)) == 1) {
  add_next_index_string(return_value, entry, 0);
  zend_hash_move_forward_ex(&(executor_globals.included_files), ((void *)0));
 }
}





void zif_trigger_error(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 long error_type = (1<<10L);
 char *message;
 int message_len;

 if (zend_parse_parameters((ht) , "s|l", &message, &message_len, &error_type) == -1) {
  return;
 }

 switch (error_type) {
  case (1<<8L):
  case (1<<9L):
  case (1<<10L):
  case (1<<14L):
   break;
  default:
   zend_error((1<<1L), "Invalid error type specified");
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
   break;
 }

 zend_error((int)error_type, "%s", message);
 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}





void zif_set_error_handler(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *error_handler;
 zend_bool had_orig_error_handler=0;
 char *error_handler_name = ((void *)0);
 long error_type = ((1<<0L) | (1<<1L) | (1<<2L) | (1<<3L) | (1<<4L) | (1<<5L) | (1<<6L) | (1<<7L) | (1<<8L) | (1<<9L) | (1<<10L) | (1<<12L) | (1<<13L) | (1<<14L) | (1<<11L));

 if (zend_parse_parameters((ht) , "z|l", &error_handler, &error_type) == -1) {
  return;
 }

 if (!zend_is_callable(error_handler, 0, &error_handler_name )) {
  zend_error((1<<1L), "%s() expects the argument (%s) to be a valid callback",
       get_active_function_name(), error_handler_name?error_handler_name:"unknown");
  _efree((error_handler_name) );
  return;
 }
 _efree((error_handler_name) );

 if ((executor_globals.user_error_handler)) {
  had_orig_error_handler = 1;
  *return_value = *(executor_globals.user_error_handler);
  _zval_copy_ctor((return_value) );
  (return_value)->refcount__gc = 1; (return_value)->is_ref__gc = 0;;
  zend_stack_push(&(executor_globals.user_error_handlers_error_reporting), &(executor_globals.user_error_handler_error_reporting), sizeof((executor_globals.user_error_handler_error_reporting)));
  zend_ptr_stack_push(&(executor_globals.user_error_handlers), (executor_globals.user_error_handler));
 }
 do { ((executor_globals.user_error_handler)) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)((executor_globals.user_error_handler)))->u.buffered = ((void *)0); } while (0);

 if (!zend_is_true(error_handler)) {
  do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)(executor_globals.user_error_handler))->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer((executor_globals.user_error_handler) ); }; _efree(((executor_globals.user_error_handler)) ); } while (0);
  (executor_globals.user_error_handler) = ((void *)0);
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }

 (executor_globals.user_error_handler_error_reporting) = (int)error_type;
 *(executor_globals.user_error_handler) = *error_handler;
 _zval_copy_ctor(((executor_globals.user_error_handler)) );
 ((executor_globals.user_error_handler))->refcount__gc = 1; ((executor_globals.user_error_handler))->is_ref__gc = 0;;

 if (!had_orig_error_handler) {
  { { (*return_value).type = 0; }; return;};
 }
}





void zif_restore_error_handler(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if ((executor_globals.user_error_handler)) {
  zval *zeh = (executor_globals.user_error_handler);

  (executor_globals.user_error_handler) = ((void *)0);
  _zval_ptr_dtor((&zeh) );
 }

 if (zend_ptr_stack_num_elements(&(executor_globals.user_error_handlers))==0) {
  (executor_globals.user_error_handler) = ((void *)0);
 } else {
  (executor_globals.user_error_handler_error_reporting) = zend_stack_int_top(&(executor_globals.user_error_handlers_error_reporting));
  zend_stack_del_top(&(executor_globals.user_error_handlers_error_reporting));
  (executor_globals.user_error_handler) = zend_ptr_stack_pop(&(executor_globals.user_error_handlers));
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}





void zif_set_exception_handler(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *exception_handler;
 char *exception_handler_name = ((void *)0);
 zend_bool had_orig_exception_handler=0;

 if (zend_parse_parameters((ht) , "z", &exception_handler) == -1) {
  return;
 }

 if ((*exception_handler).type != 0) {
  if (!zend_is_callable(exception_handler, 0, &exception_handler_name )) {
   zend_error((1<<1L), "%s() expects the argument (%s) to be a valid callback",
        get_active_function_name(), exception_handler_name?exception_handler_name:"unknown");
   _efree((exception_handler_name) );
   return;
  }
  _efree((exception_handler_name) );
 }

 if ((executor_globals.user_exception_handler)) {
  had_orig_exception_handler = 1;
  *return_value = *(executor_globals.user_exception_handler);
  _zval_copy_ctor((return_value) );
  zend_ptr_stack_push(&(executor_globals.user_exception_handlers), (executor_globals.user_exception_handler));
 }
 do { ((executor_globals.user_exception_handler)) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)((executor_globals.user_exception_handler)))->u.buffered = ((void *)0); } while (0);

 if ((*exception_handler).type == 0) {
  do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)(executor_globals.user_exception_handler))->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer((executor_globals.user_exception_handler) ); }; _efree(((executor_globals.user_exception_handler)) ); } while (0);
  (executor_globals.user_exception_handler) = ((void *)0);
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }

 *(executor_globals.user_exception_handler) = *exception_handler;
 _zval_copy_ctor(((executor_globals.user_exception_handler)) );

 if (!had_orig_exception_handler) {
  { { (*return_value).type = 0; }; return;};
 }
}





void zif_restore_exception_handler(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if ((executor_globals.user_exception_handler)) {
  _zval_ptr_dtor((&(executor_globals.user_exception_handler)) );
 }
 if (zend_ptr_stack_num_elements(&(executor_globals.user_exception_handlers))==0) {
  (executor_globals.user_exception_handler) = ((void *)0);
 } else {
  (executor_globals.user_exception_handler) = zend_ptr_stack_pop(&(executor_globals.user_exception_handlers));
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}



static int copy_class_or_interface_name(zend_class_entry **pce , int num_args, va_list args, zend_hash_key *hash_key)
{
 zval *array = __builtin_va_arg(args,zval *);
 zend_uint mask = __builtin_va_arg(args,zend_uint);
 zend_uint comply = __builtin_va_arg(args,zend_uint);
 zend_uint comply_mask = (comply)? mask:0;
 zend_class_entry *ce = *pce;

 if ((hash_key->nKeyLength==0 || hash_key->arKey[0]!=0)
  && (comply_mask == (ce->ce_flags & mask))) {
  add_next_index_stringl(array, ce->name, ce->name_length, 1);
 }
 return 0;
}



void zif_get_declared_traits(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zend_uint mask = 0x120;
 zend_uint comply = 1;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 _array_init((return_value), 0 );
 zend_hash_apply_with_arguments((executor_globals.class_table) , (apply_func_args_t) copy_class_or_interface_name, 3, return_value, mask, comply);
}





void zif_get_declared_classes(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zend_uint mask = 0x80 | (0x120 & ~0x20);
 zend_uint comply = 0;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 _array_init((return_value), 0 );
 zend_hash_apply_with_arguments((executor_globals.class_table) , (apply_func_args_t) copy_class_or_interface_name, 3, return_value, mask, comply);
}




void zif_get_declared_interfaces(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zend_uint mask = 0x80;
 zend_uint comply = 1;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 _array_init((return_value), 0 );
 zend_hash_apply_with_arguments((executor_globals.class_table) , (apply_func_args_t) copy_class_or_interface_name, 3, return_value, mask, comply);
}



static int copy_function_name(zend_function *func , int num_args, va_list args, zend_hash_key *hash_key)
{
 zval *internal_ar = __builtin_va_arg(args,zval *),
      *user_ar = __builtin_va_arg(args,zval *);

 if (hash_key->nKeyLength == 0 || hash_key->arKey[0] == 0) {
  return 0;
 }

 if (func->type == 1) {
  add_next_index_stringl(internal_ar, hash_key->arKey, hash_key->nKeyLength-1, 1);
 } else if (func->type == 2) {
  add_next_index_stringl(user_ar, hash_key->arKey, hash_key->nKeyLength-1, 1);
 }

 return 0;
}




void zif_get_defined_functions(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *internal;
 zval *user;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 do { (internal) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(internal))->u.buffered = ((void *)0); } while (0); (internal)->refcount__gc = 1; (internal)->is_ref__gc = 0;;;
 do { (user) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(user))->u.buffered = ((void *)0); } while (0); (user)->refcount__gc = 1; (user)->is_ref__gc = 0;;;

 _array_init((internal), 0 );
 _array_init((user), 0 );
 _array_init((return_value), 0 );

 zend_hash_apply_with_arguments((executor_globals.function_table) , (apply_func_args_t) copy_function_name, 2, internal, user);

 if (_zend_hash_add_or_update((*return_value).value.ht, "internal", sizeof("internal"), (void **)&internal, sizeof(zval *), ((void *)0), (1<<1) ) == -1) {
  _zval_ptr_dtor((&internal) );
  _zval_ptr_dtor((&user) );
  _zval_dtor((return_value) );
  zend_error((1<<1L), "Cannot add internal functions to return value from get_defined_functions()");
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (_zend_hash_add_or_update((*return_value).value.ht, "user", sizeof("user"), (void **)&user, sizeof(zval *), ((void *)0), (1<<1) ) == -1) {
  _zval_ptr_dtor((&user) );
  _zval_dtor((return_value) );
  zend_error((1<<1L), "Cannot add user functions to return value from get_defined_functions()");
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}





void zif_get_defined_vars(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (!(executor_globals.active_symbol_table)) {
  zend_rebuild_symbol_table();
 }

 _array_init((return_value), (zend_hash_num_elements((executor_globals.active_symbol_table))) );

 zend_hash_copy((*return_value).value.ht, (executor_globals.active_symbol_table),
     (copy_ctor_func_t)zval_add_ref, ((void *)0), sizeof(zval *));
}






void zif_create_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *eval_code, *function_name, *function_args, *function_code;
 int eval_code_length, function_name_length, function_args_len, function_code_len;
 int retval;
 char *eval_name;

 if (zend_parse_parameters((ht) , "ss", &function_args, &function_args_len, &function_code, &function_code_len) == -1) {
  return;
 }

 eval_code = (char *) _emalloc((sizeof("function " "__lambda_func") +function_args_len +2 +2 +function_code_len) )



                      ;

 eval_code_length = sizeof("function " "__lambda_func" "(") - 1;
 memcpy(eval_code, "function " "__lambda_func" "(", eval_code_length);

 memcpy(eval_code + eval_code_length, function_args, function_args_len);
 eval_code_length += function_args_len;

 eval_code[eval_code_length++] = ')';
 eval_code[eval_code_length++] = '{';

 memcpy(eval_code + eval_code_length, function_code, function_code_len);
 eval_code_length += function_code_len;

 eval_code[eval_code_length++] = '}';
 eval_code[eval_code_length] = '\0';

 eval_name = zend_make_compiled_string_description("runtime-created function" );
 retval = zend_eval_stringl(eval_code, eval_code_length, ((void *)0), eval_name );
 _efree((eval_code) );
 _efree((eval_name) );

 if (retval==0) {
  zend_function new_function, *func;

  if (zend_hash_find((executor_globals.function_table), "__lambda_func", sizeof("__lambda_func"), (void **) &func)==-1) {
   zend_error((1<<0L), "Unexpected inconsistency in create_function()");
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
  new_function = *func;
  function_add_ref(&new_function);

  function_name = (char *) _emalloc((sizeof("0lambda_")+11) );
  function_name[0] = '\0';

  do {
   function_name_length = 1 + snprintf(function_name + 1, sizeof("lambda_")+11, "lambda_%d", ++(executor_globals.lambda_count));
  } while (_zend_hash_add_or_update((executor_globals.function_table), function_name, function_name_length+1, &new_function, sizeof(zend_function), ((void *)0), (1<<1) )==-1);
  zend_hash_del_key_or_index((executor_globals.function_table), "__lambda_func", sizeof("__lambda_func"), 0, 0);
  { do { const char *__s=(function_name); int __l=function_name_length; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 } else {
  zend_hash_del_key_or_index((executor_globals.function_table), "__lambda_func", sizeof("__lambda_func"), 0, 0);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}
# 1857 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-08-c3e56a152c-3598185a74/php/Zend/zend_builtin_functions.c"
void zif_get_resource_type(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 const char *resource_type;
 zval *z_resource_type;

 if (zend_parse_parameters((ht) , "r", &z_resource_type) == -1) {
  return;
 }

 resource_type = zend_rsrc_list_get_rsrc_type((*z_resource_type).value.lval );
 if (resource_type) {
  { do { const char *__s=(resource_type); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 } else {
  { do { const char *__s=("Unknown"); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
}



static int add_extension_info(zend_module_entry *module, void *arg )
{
 zval *name_array = (zval *)arg;
 add_next_index_string(name_array, module->name, 1);
 return 0;
}

static int add_zendext_info(zend_extension *ext, void *arg )
{
 zval *name_array = (zval *)arg;
 add_next_index_string(name_array, ext->name, 1);
 return 0;
}

static int add_constant_info(zend_constant *constant, void *arg )
{
 zval *name_array = (zval *)arg;
 zval *const_val;

 do { (const_val) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(const_val))->u.buffered = ((void *)0); } while (0); (const_val)->refcount__gc = 1; (const_val)->is_ref__gc = 0;;;
 *const_val = constant->value;
 _zval_copy_ctor((const_val) );
 (const_val)->refcount__gc = 1; (const_val)->is_ref__gc = 0;;
 add_assoc_zval_ex(name_array, constant->name, constant->name_len, const_val);
 return 0;
}




void zif_get_loaded_extensions(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zend_bool zendext = 0;

 if (zend_parse_parameters((ht) , "|b", &zendext) == -1) {
  return;
 }

 _array_init((return_value), 0 );

 if (zendext) {
  zend_llist_apply_with_argument(&zend_extensions, (llist_apply_with_arg_func_t) add_zendext_info, return_value );
 } else {
  zend_hash_apply_with_argument(&module_registry, (apply_func_arg_t) add_extension_info, return_value );
 }
}





void zif_get_defined_constants(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zend_bool categorize = 0;

 if (zend_parse_parameters((ht) , "|b", &categorize) == -1) {
  return;
 }

 _array_init((return_value), 0 );

 if (categorize) {
  HashPosition pos;
  zend_constant *val;
  int module_number;
  zval **modules;
  char **module_names;
  zend_module_entry *module;
  int i = 1;

  modules = _ecalloc((zend_hash_num_elements(&module_registry) + 2), (sizeof(zval *)) );
  module_names = _emalloc(((zend_hash_num_elements(&module_registry) + 2) * sizeof(char *)) );

  module_names[0] = "internal";
  zend_hash_internal_pointer_reset_ex(&module_registry, &pos);
  while (zend_hash_get_current_data_ex(&module_registry, (void *) &module, &pos) != -1) {
   module_names[module->module_number] = (char *)module->name;
   i++;
   zend_hash_move_forward_ex(&module_registry, &pos);
  }
  module_names[i] = "user";

  zend_hash_internal_pointer_reset_ex((executor_globals.zend_constants), &pos);
  while (zend_hash_get_current_data_ex((executor_globals.zend_constants), (void **) &val, &pos) != -1) {
   zval *const_val;

   if (val->module_number == 2147483647) {
    module_number = i;
   } else if (val->module_number > i || val->module_number < 0) {

    goto bad_module_id;
   } else {
    module_number = val->module_number;
   }

   if (!modules[module_number]) {
    do { (modules[module_number]) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(modules[module_number]))->u.buffered = ((void *)0); } while (0); (modules[module_number])->refcount__gc = 1; (modules[module_number])->is_ref__gc = 0;;;
    _array_init((modules[module_number]), 0 );
    add_assoc_zval_ex(return_value, module_names[module_number], strlen(module_names[module_number])+1, modules[module_number]);
   }

   do { (const_val) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(const_val))->u.buffered = ((void *)0); } while (0); (const_val)->refcount__gc = 1; (const_val)->is_ref__gc = 0;;;
   *const_val = val->value;
   _zval_copy_ctor((const_val) );
   (const_val)->refcount__gc = 1; (const_val)->is_ref__gc = 0;;

   add_assoc_zval_ex(modules[module_number], val->name, val->name_len, const_val);
bad_module_id:
   zend_hash_move_forward_ex((executor_globals.zend_constants), &pos);
  }
  _efree((module_names) );
  _efree((modules) );
 } else {
  zend_hash_apply_with_argument((executor_globals.zend_constants), (apply_func_arg_t) add_constant_info, return_value );
 }
}



static zval *debug_backtrace_get_args(void **curpos )
{
 void **p = curpos;
 zval *arg_array, **arg;
 int arg_count = (int)(zend_uintptr_t) *p;

 do { (arg_array) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(arg_array))->u.buffered = ((void *)0); } while (0); (arg_array)->refcount__gc = 1; (arg_array)->is_ref__gc = 0;;;
 _array_init((arg_array), (arg_count) );
 p -= arg_count;

 while (--arg_count >= 0) {
  arg = (zval **) p++;
  if (*arg) {
   if ((**arg).type != 5) {
    if (!zval_isref_p(*arg)) { do { if (zval_refcount_p(*((arg))) > 1) { zval *new_zv; zval_delref_p(*(arg)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(arg))->value; (*new_zv).type = (**(arg)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(arg) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); zval_set_isref_p(*((arg))); };
   }
   zval_addref_p(*(arg));
   add_next_index_zval(arg_array, *arg);
  } else {
   add_next_index_null(arg_array);
  }
 }

 return arg_array;
}

void debug_print_backtrace_args(zval *arg_array )
{
 zval **tmp;
 HashPosition iterator;
 int i = 0;

 zend_hash_internal_pointer_reset_ex(arg_array->value.ht, &iterator);
 while (zend_hash_get_current_data_ex(arg_array->value.ht, (void **) &tmp, &iterator) == 0) {
  if (i++) {
   zend_write((", "), strlen((", ")));
  }
  zend_print_flat_zval_r(*tmp );
  zend_hash_move_forward_ex(arg_array->value.ht, &iterator);
 }
}


void zif_debug_print_backtrace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zend_execute_data *ptr, *skip;
 int lineno, frameno = 0;
 const char *function_name;
 const char *filename;
 const char *class_name = ((void *)0);
 char *call_type;
 const char *include_filename = ((void *)0);
 zval *arg_array = ((void *)0);
 int indent = 0;
 long options = 0;
 long limit = 0;

 if (zend_parse_parameters((ht) , "|ll", &options, &limit) == -1) {
  return;
 }

 ptr = (executor_globals.current_execute_data);


 ptr = ptr->prev_execute_data;

 while (ptr && (limit == 0 || frameno < limit)) {
  const char *free_class_name = ((void *)0);

  frameno++;
  class_name = call_type = ((void *)0);
  arg_array = ((void *)0);

  skip = ptr;

  if (!skip->op_array &&
      skip->prev_execute_data &&
      skip->prev_execute_data->opline &&
      skip->prev_execute_data->opline->opcode != 60 &&
      skip->prev_execute_data->opline->opcode != 61 &&
      skip->prev_execute_data->opline->opcode != 73) {
   skip = skip->prev_execute_data;
  }

  if (skip->op_array) {
   filename = skip->op_array->filename;
   lineno = skip->opline->lineno;
  } else {
   filename = ((void *)0);
   lineno = 0;
  }

  function_name = ptr->function_state.function->common.function_name;

  if (function_name) {
   if (ptr->object) {
    if (ptr->function_state.function->common.scope) {
     class_name = ptr->function_state.function->common.scope->name;
    } else {
     zend_uint class_name_len;
     int dup;

     dup = zend_get_object_classname(ptr->object, &class_name, &class_name_len );
     if(!dup) {
      free_class_name = class_name;
     }
    }

    call_type = "->";
   } else if (ptr->function_state.function->common.scope) {
    class_name = ptr->function_state.function->common.scope->name;
    call_type = "::";
   } else {
    class_name = ((void *)0);
    call_type = ((void *)0);
   }
   if ((! ptr->opline) || ((ptr->opline->opcode == 61) || (ptr->opline->opcode == 60))) {
    if (ptr->function_state.arguments && (options & (1<<1)) == 0) {
     arg_array = debug_backtrace_get_args(ptr->function_state.arguments );
    }
   }
  } else {

   zend_bool build_filename_arg = 1;

   if (!ptr->opline || ptr->opline->opcode != 73) {

    function_name = "unknown";
    build_filename_arg = 0;
   } else
   switch (ptr->opline->extended_value) {
    case (1<<0):
     function_name = "eval";
     build_filename_arg = 0;
     break;
    case (1<<1):
     function_name = "include";
     break;
    case (1<<3):
     function_name = "require";
     break;
    case (1<<2):
     function_name = "include_once";
     break;
    case (1<<4):
     function_name = "require_once";
     break;
    default:


     function_name = "unknown";
     build_filename_arg = 0;
     break;
   }

   if (build_filename_arg && include_filename) {
    do { (arg_array) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(arg_array))->u.buffered = ((void *)0); } while (0); (arg_array)->refcount__gc = 1; (arg_array)->is_ref__gc = 0;;;
    _array_init((arg_array), 0 );
    add_next_index_string(arg_array, (char*)include_filename, 1);
   }
   call_type = ((void *)0);
  }
  zend_printf("#%-2d ", indent);
  if (class_name) {
   zend_write((class_name), strlen((class_name)));
   zend_write((call_type), strlen((call_type)));
  }
  zend_printf("%s(", function_name);
  if (arg_array) {
   debug_print_backtrace_args(arg_array );
   _zval_ptr_dtor((&arg_array) );
  }
  if (filename) {
   zend_printf(") called at [%s:%d]\n", filename, lineno);
  } else {
   zend_execute_data *prev = skip->prev_execute_data;

   while (prev) {
    if (prev->function_state.function &&
     prev->function_state.function->common.type != 2) {
     prev = ((void *)0);
     break;
    }
    if (prev->op_array) {
     zend_printf(") called at [%s:%d]\n", prev->op_array->filename, prev->opline->lineno);
     break;
    }
    prev = prev->prev_execute_data;
   }
   if (!prev) {
    zend_write((")\n"), strlen((")\n")));
   }
  }
  include_filename = filename;
  ptr = skip->prev_execute_data;
  ++indent;
  if (free_class_name) {
   _efree(((char*)free_class_name) );
  }
 }
}



__attribute__ ((visibility("default"))) void zend_fetch_debug_backtrace(zval *return_value, int skip_last, int options, int limit )
{
 zend_execute_data *ptr, *skip;
 int lineno, frameno = 0;
 const char *function_name;
 const char *filename;
 const char *class_name;
 const char *include_filename = ((void *)0);
 zval *stack_frame;

 ptr = (executor_globals.current_execute_data);


 if (ptr && (skip_last == 0) && ptr->opline && (ptr->opline->opcode == 68)) {
  ptr = ptr->prev_execute_data;
 }


 if (skip_last-- && ptr) {
  ptr = ptr->prev_execute_data;
 }

 _array_init((return_value), 0 );

 while (ptr && (limit == 0 || frameno < limit)) {
  frameno++;
  do { (stack_frame) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(stack_frame))->u.buffered = ((void *)0); } while (0); (stack_frame)->refcount__gc = 1; (stack_frame)->is_ref__gc = 0;;;
  _array_init((stack_frame), 0 );

  skip = ptr;

  if (!skip->op_array &&
      skip->prev_execute_data &&
      skip->prev_execute_data->opline &&
      skip->prev_execute_data->opline->opcode != 60 &&
      skip->prev_execute_data->opline->opcode != 61 &&
      skip->prev_execute_data->opline->opcode != 73) {
   skip = skip->prev_execute_data;
  }

  if (skip->op_array) {
   filename = skip->op_array->filename;
   lineno = skip->opline->lineno;
   add_assoc_string_ex(stack_frame, "file", sizeof("file"), (char*)filename, 1);
   add_assoc_long_ex(stack_frame, "line", sizeof("line"), lineno);




  } else {
   zend_execute_data *prev = skip->prev_execute_data;

   while (prev) {
    if (prev->function_state.function &&
     prev->function_state.function->common.type != 2 &&
     !(prev->function_state.function->common.type == 1 &&
      (prev->function_state.function->common.fn_flags & 0x200000))) {
     break;
    }
    if (prev->op_array) {
     add_assoc_string_ex(stack_frame, "file", sizeof("file"), (char*)prev->op_array->filename, 1);
     add_assoc_long_ex(stack_frame, "line", sizeof("line"), prev->opline->lineno);
     break;
    }
    prev = prev->prev_execute_data;
   }
   filename = ((void *)0);
  }

  function_name = ptr->function_state.function->common.function_name;

  if (function_name) {
   add_assoc_string_ex(stack_frame, "function", sizeof("function"), (char*)function_name, 1);

   if (ptr->object && (*ptr->object).type == 5) {
    if (ptr->function_state.function->common.scope) {
     add_assoc_string_ex(stack_frame, "class", sizeof("class"), (char*)ptr->function_state.function->common.scope->name, 1);
    } else {
     zend_uint class_name_len;
     int dup;

     dup = zend_get_object_classname(ptr->object, &class_name, &class_name_len );
     add_assoc_string_ex(stack_frame, "class", sizeof("class"), (char*)class_name, dup);

    }
    if ((options & (1<<0)) != 0) {
     add_assoc_zval_ex(stack_frame, "object", sizeof("object"), ptr->object);
     zval_addref_p(ptr->object);
    }

    add_assoc_string_ex(stack_frame, "type", sizeof("type"), "->", 1);
   } else if (ptr->function_state.function->common.scope) {
    add_assoc_string_ex(stack_frame, "class", sizeof("class"), (char*)ptr->function_state.function->common.scope->name, 1);
    add_assoc_string_ex(stack_frame, "type", sizeof("type"), "::", 1);
   }

   if ((options & (1<<1)) == 0 &&
    ((! ptr->opline) || ((ptr->opline->opcode == 61) || (ptr->opline->opcode == 60)))) {
    if (ptr->function_state.arguments) {
     add_assoc_zval_ex(stack_frame, "args", sizeof("args"), debug_backtrace_get_args(ptr->function_state.arguments ));
    }
   }
  } else {

   zend_bool build_filename_arg = 1;

   if (!ptr->opline || ptr->opline->opcode != 73) {

    function_name = "unknown";
    build_filename_arg = 0;
   } else
   switch (ptr->opline->extended_value) {
    case (1<<0):
     function_name = "eval";
     build_filename_arg = 0;
     break;
    case (1<<1):
     function_name = "include";
     break;
    case (1<<3):
     function_name = "require";
     break;
    case (1<<2):
     function_name = "include_once";
     break;
    case (1<<4):
     function_name = "require_once";
     break;
    default:


     function_name = "unknown";
     build_filename_arg = 0;
     break;
   }

   if (build_filename_arg && include_filename) {
    zval *arg_array;

    do { (arg_array) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(arg_array))->u.buffered = ((void *)0); } while (0); (arg_array)->refcount__gc = 1; (arg_array)->is_ref__gc = 0;;;
    _array_init((arg_array), 0 );





    add_next_index_string(arg_array, (char*)include_filename, 1);
    add_assoc_zval_ex(stack_frame, "args", sizeof("args"), arg_array);
   }

   add_assoc_string_ex(stack_frame, "function", sizeof("function"), (char*)function_name, 1);
  }

  add_next_index_zval(return_value, stack_frame);

  include_filename = filename;

  ptr = skip->prev_execute_data;
 }
}





void zif_debug_backtrace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 long options = (1<<0);
 long limit = 0;

 if (zend_parse_parameters((ht) , "|ll", &options, &limit) == -1) {
  return;
 }

 zend_fetch_debug_backtrace(return_value, 1, options, limit );
}




void zif_extension_loaded(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *extension_name;
 int extension_name_len;
 char *lcname;

 if (zend_parse_parameters((ht) , "s", &extension_name, &extension_name_len) == -1) {
  return;
 }

 lcname = zend_str_tolower_dup(extension_name, extension_name_len);
 if (zend_hash_exists(&module_registry, lcname, extension_name_len+1)) {
  do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0);
 } else {
  do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0);
 }
 _efree((lcname) );
}





void zif_get_extension_funcs(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 char *extension_name;
 int extension_name_len;
 zend_module_entry *module;
 const zend_function_entry *func;

 if (zend_parse_parameters((ht) , "s", &extension_name, &extension_name_len) == -1) {
  return;
 }

 if (strncasecmp(extension_name, "zend", sizeof("zend"))) {
  char *lcname = zend_str_tolower_dup(extension_name, extension_name_len);
  if (zend_hash_find(&module_registry, lcname,
   extension_name_len+1, (void**)&module) == -1) {
   _efree((lcname) );
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
  _efree((lcname) );

  if (!(func = module->functions)) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
 } else {
  func = builtin_functions;
 }

 _array_init((return_value), 0 );

 while (func->fname) {
  add_next_index_string(return_value, func->fname, 1);
  func++;
 }
}
