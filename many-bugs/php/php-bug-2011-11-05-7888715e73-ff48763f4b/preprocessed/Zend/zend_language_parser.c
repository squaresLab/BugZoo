# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_compile.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_compile.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 1
# 51 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h"
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
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2
# 68 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h"
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

# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 76 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2



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




# 80 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2
# 236 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_errors.h" 1
# 237 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_alloc.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_alloc.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/../TSRM/TSRM.h" 1
# 20 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/../TSRM/TSRM.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/TSRM/tsrm_config.h" 2
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/../TSRM/TSRM.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_alloc.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_alloc.h" 2
# 44 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_alloc.h"
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
# 93 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_alloc.h"
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
# 142 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 159 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );


# 191 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 211 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_alloc.h"
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
# 238 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_types.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_types.h"
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;

typedef struct _zend_object_value {
 zend_object_handle handle;
 const zend_object_handlers *handlers;
} zend_object_value;
# 240 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_string.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_string.h"
__attribute__ ((visibility("default"))) extern const char *(*zend_new_interned_string)(const char *str, int len, int free_src );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 241 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2


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
# 244 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2
# 256 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h"
static const char long_min_digits[] = "2147483648";
# 271 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_hash.h" 1
# 45 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_hash.h"
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
# 214 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag, void **pData );




__attribute__ ((visibility("default"))) int zend_hash_num_elements(const HashTable *ht);

__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);
# 261 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_hash.h"
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








# 348 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_hash.h"
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
# 272 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_ts_hash.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_ts_hash.h"
typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






__attribute__ ((visibility("default"))) int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_ts_hash_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_ts_hash.h"
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








# 273 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_llist.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_llist.h"
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







# 274 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2





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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_object_handlers.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;
struct _zend_literal;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, const struct _zend_literal *key );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 46 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_object_handlers.h"
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

# 306 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2

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
# 378 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h"
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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_iterators.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_iterators.h"
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

# 417 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2

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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_stream.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_stream.h"
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

# 528 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2
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
# 593 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);

# 631 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h"

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

# 676 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h"

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









# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_signal.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_signal.h"
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




# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_signal.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_signal.h"
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
# 74 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_signal.h"
extern __attribute__ ((visibility("default"))) zend_signal_globals_t zend_signal_globals;






void zend_signal_handler_defer(int signo, siginfo_t *siginfo, void *context);
void zend_signal_handler_unblock();
void zend_signal_activate(void);
void zend_signal_deactivate(void);
void zend_signal_startup();
void zend_signal_shutdown(void);
__attribute__ ((visibility("default"))) int zend_signal(int signo, void (*handler)(int) );
__attribute__ ((visibility("default"))) int zend_sigaction(int signo, const struct sigaction *act, struct sigaction *oldact );
# 711 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2






__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);

# 829 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_gc.h" 1
# 81 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_gc.h"
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
# 129 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_gc.h"
} zend_gc_globals;
# 138 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_zval_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_zobj_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_remove_zval_from_buffer(zval *zv );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);

# 180 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_gc.h"
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
# 830 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h"
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
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h" 2

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



# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h" 2





# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_strtod.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_strtod.h"
# 1 "Zend/zend.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);

# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_multiply.h" 1
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h" 2








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
# 105 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h"
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

# 456 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h"
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
# 488 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h"
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
# 525 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h"
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
# 585 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h"
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
# 668 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_operators.h"
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
# 831 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_variables.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_variables.h"


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
# 78 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval **p);


# 832 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend.h" 2

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
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_compile.h" 2
# 53 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_compile.h"
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
# 207 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_compile.h"
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
# 394 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_compile.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h"
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

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals_macros.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;









extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 48 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;



# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_stack.h"
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

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_ptr_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_ptr_stack.h"
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

# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_ptr_stack.h"
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
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_objects.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_objects.h"

__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object *zend_objects_get_address(const zval *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_free_object_storage(zend_object *object );

# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_objects_API.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_objects_API.h"
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

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_modules.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_modules.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_compile.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_modules.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_build.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_modules.h" 2
# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_modules.h"
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
# 118 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_modules.h"
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
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_float.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_float.h"
# 1 "/usr/include/fpu_control.h" 1 3 4
# 89 "/usr/include/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 100 "/usr/include/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 213 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_float.h" 2
# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_multibyte.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_multibyte.h"
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


# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h" 2
# 64 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_globals.h"
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
# 395 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_compile.h" 2



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
# 427 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_compile.h"
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



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_vm_opcodes.h" 1
# 695 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_compile.h" 2
# 817 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_compile.h"

# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_list.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_list.h"





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
# 116 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_list.h"

# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_API.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_API.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_execute.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_execute.h"
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
# 183 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_execute.h"
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
# 410 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval** zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 420 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );
__attribute__ ((visibility("default"))) zval **zend_get_zval_ptr_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );
# 451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_execute.h"

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_API.h" 2




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
# 228 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 249 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_API.h"
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
# 293 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_API.h"
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
# 358 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_API.h"
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
# 393 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_API.h"
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
# 441 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 457 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_API.h"
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

# 731 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_API.h"

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_constants.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_constants.h"

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

# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y" 2



static size_t zend_yytnamerr(char*, const char*);
# 133 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
# 158 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
   enum yytokentype {
     END = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_CONTINUE = 332,
     T_GOTO = 333,
     T_FUNCTION = 334,
     T_CONST = 335,
     T_RETURN = 336,
     T_TRY = 337,
     T_CATCH = 338,
     T_THROW = 339,
     T_USE = 340,
     T_INSTEADOF = 341,
     T_GLOBAL = 342,
     T_PUBLIC = 343,
     T_PROTECTED = 344,
     T_PRIVATE = 345,
     T_FINAL = 346,
     T_ABSTRACT = 347,
     T_STATIC = 348,
     T_VAR = 349,
     T_UNSET = 350,
     T_ISSET = 351,
     T_EMPTY = 352,
     T_HALT_COMPILER = 353,
     T_CLASS = 354,
     T_TRAIT = 355,
     T_INTERFACE = 356,
     T_EXTENDS = 357,
     T_IMPLEMENTS = 358,
     T_OBJECT_OPERATOR = 359,
     T_DOUBLE_ARROW = 360,
     T_LIST = 361,
     T_ARRAY = 362,
     T_CALLABLE = 363,
     T_CLASS_C = 364,
     T_TRAIT_C = 365,
     T_METHOD_C = 366,
     T_FUNC_C = 367,
     T_LINE = 368,
     T_FILE = 369,
     T_COMMENT = 370,
     T_DOC_COMMENT = 371,
     T_OPEN_TAG = 372,
     T_OPEN_TAG_WITH_ECHO = 373,
     T_CLOSE_TAG = 374,
     T_WHITESPACE = 375,
     T_START_HEREDOC = 376,
     T_END_HEREDOC = 377,
     T_DOLLAR_OPEN_CURLY_BRACES = 378,
     T_CURLY_OPEN = 379,
     T_PAAMAYIM_NEKUDOTAYIM = 380,
     T_NAMESPACE = 381,
     T_NS_C = 382,
     T_DIR = 383,
     T_NS_SEPARATOR = 384
   };
# 435 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
# 443 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
typedef unsigned char yytype_uint8;






typedef signed char yytype_int8;







typedef unsigned short int yytype_uint16;





typedef short int yytype_int16;
# 595 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
union yyalloc
{
  yytype_int16 yyss_alloc;
  znode yyvs_alloc;
};
# 668 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
static const yytype_uint8 yytranslate[] =
{
       0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 48, 157, 2, 154, 47, 31, 2,
     149, 150, 45, 42, 8, 43, 44, 46, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 26, 151,
      36, 13, 37, 25, 51, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 61, 2, 155, 30, 2, 156, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 152, 29, 153, 50, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 1, 2, 3, 4,
       5, 6, 7, 9, 10, 11, 12, 14, 15, 16,
      17, 18, 19, 20, 21, 22, 23, 24, 27, 28,
      32, 33, 34, 35, 38, 39, 40, 41, 49, 52,
      53, 54, 55, 56, 57, 58, 59, 60, 62, 63,
      64, 65, 66, 67, 68, 69, 70, 71, 72, 73,
      74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
      84, 85, 86, 87, 88, 89, 90, 91, 92, 93,
      94, 95, 96, 97, 98, 99, 100, 101, 102, 103,
     104, 105, 106, 107, 108, 109, 110, 111, 112, 113,
     114, 115, 116, 117, 118, 119, 120, 121, 122, 123,
     124, 125, 126, 127, 128, 129, 130, 131, 132, 133,
     134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
     144, 145, 146, 147, 148
};
# 998 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined",
  "\"require_once (T_REQUIRE_ONCE)\"", "\"require (T_REQUIRE)\"",
  "\"eval (T_EVAL)\"", "\"include_once (T_INCLUDE_ONCE)\"",
  "\"include (T_INCLUDE)\"", "','", "\"or (T_LOGICAL_OR)\"",
  "\"xor (T_LOGICAL_XOR)\"", "\"and (T_LOGICAL_AND)\"",
  "\"print (T_PRINT)\"", "'='", "\">>= (T_SR_EQUAL)\"",
  "\"<<= (T_SL_EQUAL)\"", "\"^= (T_XOR_EQUAL)\"", "\"|= (T_OR_EQUAL)\"",
  "\"&= (T_AND_EQUAL)\"", "\"%= (T_MOD_EQUAL)\"",
  "\".= (T_CONCAT_EQUAL)\"", "\"/= (T_DIV_EQUAL)\"",
  "\"*= (T_MUL_EQUAL)\"", "\"-= (T_MINUS_EQUAL)\"",
  "\"+= (T_PLUS_EQUAL)\"", "'?'", "':'", "\"|| (T_BOOLEAN_OR)\"",
  "\"&& (T_BOOLEAN_AND)\"", "'|'", "'^'", "'&'",
  "\"!== (T_IS_NOT_IDENTICAL)\"", "\"=== (T_IS_IDENTICAL)\"",
  "\"!= (T_IS_NOT_EQUAL)\"", "\"== (T_IS_EQUAL)\"", "'<'", "'>'",
  "\">= (T_IS_GREATER_OR_EQUAL)\"", "\"<= (T_IS_SMALLER_OR_EQUAL)\"",
  "\">> (T_SR)\"", "\"<< (T_SL)\"", "'+'", "'-'", "'.'", "'*'", "'/'",
  "'%'", "'!'", "\"instanceof (T_INSTANCEOF)\"", "'~'", "'@'",
  "\"(unset) (T_UNSET_CAST)\"", "\"(bool) (T_BOOL_CAST)\"",
  "\"(object) (T_OBJECT_CAST)\"", "\"(array) (T_ARRAY_CAST)\"",
  "\"(string) (T_STRING_CAST)\"", "\"(double) (T_DOUBLE_CAST)\"",
  "\"(int) (T_INT_CAST)\"", "\"-- (T_DEC)\"", "\"++ (T_INC)\"", "'['",
  "\"clone (T_CLONE)\"", "\"new (T_NEW)\"", "\"exit (T_EXIT)\"",
  "\"if (T_IF)\"", "\"elseif (T_ELSEIF)\"", "\"else (T_ELSE)\"",
  "\"endif (T_ENDIF)\"", "\"integer number (T_LNUMBER)\"",
  "\"floating-point number (T_DNUMBER)\"", "\"identifier (T_STRING)\"",
  "\"variable name (T_STRING_VARNAME)\"", "\"variable (T_VARIABLE)\"",
  "\"number (T_NUM_STRING)\"", "T_INLINE_HTML", "T_CHARACTER",
  "T_BAD_CHARACTER",
  "\"quoted-string and whitespace (T_ENCAPSED_AND_WHITESPACE)\"",
  "\"quoted-string (T_CONSTANT_ENCAPSED_STRING)\"", "\"echo (T_ECHO)\"",
  "\"do (T_DO)\"", "\"while (T_WHILE)\"", "\"endwhile (T_ENDWHILE)\"",
  "\"for (T_FOR)\"", "\"endfor (T_ENDFOR)\"", "\"foreach (T_FOREACH)\"",
  "\"endforeach (T_ENDFOREACH)\"", "\"declare (T_DECLARE)\"",
  "\"enddeclare (T_ENDDECLARE)\"", "\"as (T_AS)\"",
  "\"switch (T_SWITCH)\"", "\"endswitch (T_ENDSWITCH)\"",
  "\"case (T_CASE)\"", "\"default (T_DEFAULT)\"", "\"break (T_BREAK)\"",
  "\"continue (T_CONTINUE)\"", "\"goto (T_GOTO)\"",
  "\"function (T_FUNCTION)\"", "\"const (T_CONST)\"",
  "\"return (T_RETURN)\"", "\"try (T_TRY)\"", "\"catch (T_CATCH)\"",
  "\"throw (T_THROW)\"", "\"use (T_USE)\"", "\"insteadof (T_INSTEADOF)\"",
  "\"global (T_GLOBAL)\"", "\"public (T_PUBLIC)\"",
  "\"protected (T_PROTECTED)\"", "\"private (T_PRIVATE)\"",
  "\"final (T_FINAL)\"", "\"abstract (T_ABSTRACT)\"",
  "\"static (T_STATIC)\"", "\"var (T_VAR)\"", "\"unset (T_UNSET)\"",
  "\"isset (T_ISSET)\"", "\"empty (T_EMPTY)\"",
  "\"__halt_compiler (T_HALT_COMPILER)\"", "\"class (T_CLASS)\"",
  "\"trait (T_TRAIT)\"", "\"interface (T_INTERFACE)\"",
  "\"extends (T_EXTENDS)\"", "\"implements (T_IMPLEMENTS)\"",
  "\"-> (T_OBJECT_OPERATOR)\"", "\"=> (T_DOUBLE_ARROW)\"",
  "\"list (T_LIST)\"", "\"array (T_ARRAY)\"", "\"callable (T_CALLABLE)\"",
  "\"__CLASS__ (T_CLASS_C)\"", "\"__TRAIT__ (T_TRAIT_C)\"",
  "\"__METHOD__ (T_METHOD_C)\"", "\"__FUNCTION__ (T_FUNC_C)\"",
  "\"__LINE__ (T_LINE)\"", "\"__FILE__ (T_FILE)\"",
  "\"comment (T_COMMENT)\"", "\"doc comment (T_DOC_COMMENT)\"",
  "\"open tag (T_OPEN_TAG)\"",
  "\"open tag with echo (T_OPEN_TAG_WITH_ECHO)\"",
  "\"close tag (T_CLOSE_TAG)\"", "\"whitespace (T_WHITESPACE)\"",
  "\"heredoc start (T_START_HEREDOC)\"", "\"heredoc end (T_END_HEREDOC)\"",
  "\"${ (T_DOLLAR_OPEN_CURLY_BRACES)\"", "\"{$ (T_CURLY_OPEN)\"",
  "\":: (T_PAAMAYIM_NEKUDOTAYIM)\"", "\"namespace (T_NAMESPACE)\"",
  "\"__NAMESPACE__ (T_NS_C)\"", "\"__DIR__ (T_DIR)\"",
  "\"\\\\ (T_NS_SEPARATOR)\"", "'('", "')'", "';'", "'{'", "'}'", "'$'",
  "']'", "'`'", "'\"'", "$accept", "start", "top_statement_list", "$@1",
  "namespace_name", "top_statement", "$@2", "$@3", "use_declarations",
  "use_declaration", "constant_declaration", "inner_statement_list", "$@4",
  "inner_statement", "statement", "unticked_statement", "$@5", "$@6",
  "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15",
  "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "additional_catches", "non_empty_additional_catches",
  "additional_catch", "@27", "$@28", "unset_variables", "unset_variable",
  "function_declaration_statement", "class_declaration_statement",
  "is_reference", "unticked_function_declaration_statement", "$@29",
  "unticked_class_declaration_statement", "$@30", "$@31",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@32", "$@33", "case_separator",
  "while_statement", "elseif_list", "$@34", "new_elseif_list", "$@35",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@36", "$@37",
  "trait_use_statement", "trait_list", "trait_adaptations",
  "trait_adaptation_list", "non_empty_trait_adaptation_list",
  "trait_adaptation_statement", "trait_precedence", "trait_reference_list",
  "trait_method_reference", "trait_method_reference_fully_qualified",
  "trait_alias", "trait_modifiers", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "$@38",
  "expr_without_variable", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44",
  "$@45", "$@46", "$@47", "$@48", "$@49", "@50", "@51", "function",
  "lexical_vars", "lexical_var_list", "function_call", "$@52", "$@53",
  "$@54", "$@55", "$@56", "$@57", "$@58", "$@59", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@60", "$@61",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@62", "$@63",
  "variable_properties", "variable_property", "$@64",
  "array_method_dereference", "method", "$@65", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "array_function_dereference", "$@66",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@67", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@68", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@69",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@70", "class_constant", 0
};
# 1144 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
static const yytype_uint16 yyr1[] =
{
       0, 158, 159, 161, 160, 160, 162, 162, 163, 163,
     163, 163, 163, 164, 163, 165, 163, 163, 163, 166,
     166, 167, 167, 167, 167, 168, 168, 170, 169, 169,
     171, 171, 171, 171, 172, 172, 173, 174, 175, 173,
     176, 177, 173, 178, 179, 173, 180, 181, 173, 182,
     183, 184, 173, 185, 173, 173, 173, 173, 173, 173,
     173, 173, 173, 173, 173, 173, 173, 173, 186, 187,
     173, 188, 189, 173, 190, 173, 173, 191, 192, 193,
     194, 195, 173, 173, 173, 196, 196, 197, 197, 199,
     200, 198, 201, 201, 202, 203, 204, 205, 205, 207,
     206, 209, 208, 210, 208, 211, 211, 211, 211, 212,
     212, 213, 214, 214, 215, 215, 216, 216, 217, 217,
     218, 218, 219, 219, 220, 220, 221, 221, 222, 222,
     223, 223, 223, 223, 224, 225, 224, 226, 224, 227,
     227, 228, 228, 229, 230, 229, 231, 232, 231, 233,
     233, 234, 234, 235, 235, 236, 236, 236, 236, 236,
     236, 236, 236, 237, 237, 237, 237, 238, 238, 239,
     239, 239, 239, 239, 239, 240, 240, 241, 241, 241,
     242, 242, 242, 242, 243, 243, 245, 244, 244, 244,
     246, 244, 247, 248, 248, 249, 249, 250, 250, 251,
     251, 252, 252, 253, 254, 254, 255, 255, 256, 257,
     257, 258, 258, 259, 259, 260, 260, 261, 261, 262,
     262, 263, 263, 263, 263, 263, 263, 264, 264, 264,
     264, 265, 265, 266, 266, 267, 267, 269, 268, 268,
     271, 270, 270, 270, 272, 270, 273, 270, 270, 270,
     270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
     270, 270, 270, 270, 274, 270, 275, 270, 276, 270,
     277, 270, 270, 270, 270, 270, 270, 270, 270, 270,
     270, 270, 270, 270, 270, 270, 270, 270, 270, 270,
     270, 270, 270, 270, 270, 270, 270, 270, 278, 279,
     270, 280, 270, 270, 270, 270, 270, 270, 270, 270,
     270, 270, 281, 270, 270, 270, 270, 270, 270, 282,
     270, 283, 270, 284, 285, 285, 286, 286, 286, 286,
     288, 287, 289, 287, 290, 287, 291, 287, 292, 287,
     293, 287, 294, 287, 295, 287, 296, 296, 296, 296,
     297, 297, 297, 298, 298, 300, 301, 299, 299, 302,
     302, 303, 304, 304, 304, 305, 305, 305, 306, 306,
     307, 307, 307, 307, 307, 307, 307, 307, 307, 307,
     307, 307, 307, 308, 308, 308, 308, 308, 308, 308,
     308, 308, 309, 310, 310, 310, 310, 310, 310, 310,
     310, 311, 311, 312, 312, 313, 313, 313, 313, 314,
     314, 315, 316, 317, 319, 320, 318, 318, 321, 321,
     323, 322, 324, 324, 326, 325, 327, 327, 327, 328,
     328, 329, 329, 330, 331, 332, 331, 333, 333, 333,
     334, 334, 334, 335, 335, 335, 336, 336, 337, 337,
     338, 339, 338, 340, 340, 340, 341, 341, 342, 342,
     343, 343, 344, 345, 344, 344, 346, 346, 347, 347,
     347, 347, 347, 347, 347, 347, 348, 348, 348, 348,
     349, 350, 349, 349, 349, 349, 349, 351, 351, 351,
     352, 352, 352, 352, 352, 352, 352, 353, 354, 353,
     355, 355
};


static const yytype_uint8 yyr2[] =
{
       0, 2, 1, 0, 3, 0, 1, 3, 1, 1,
       1, 4, 3, 0, 6, 0, 5, 3, 2, 3,
       1, 1, 3, 2, 4, 5, 4, 0, 3, 0,
       1, 1, 1, 4, 1, 2, 3, 0, 0, 9,
       0, 0, 12, 0, 0, 7, 0, 0, 9, 0,
       0, 0, 12, 0, 6, 2, 3, 2, 3, 2,
       3, 3, 3, 3, 3, 1, 2, 5, 0, 0,
      10, 0, 0, 10, 0, 6, 1, 0, 0, 0,
       0, 0, 18, 3, 3, 1, 0, 1, 2, 0,
       0, 10, 1, 3, 1, 1, 1, 0, 1, 0,
      10, 0, 8, 0, 7, 1, 2, 1, 2, 0,
       2, 1, 0, 2, 0, 2, 1, 3, 0, 2,
       1, 2, 1, 4, 1, 4, 1, 4, 3, 5,
       3, 4, 4, 5, 0, 0, 6, 0, 5, 1,
       1, 1, 4, 0, 0, 7, 0, 0, 8, 0,
       2, 0, 3, 1, 0, 2, 3, 5, 4, 4,
       5, 7, 6, 0, 1, 1, 1, 1, 0, 1,
       1, 2, 3, 3, 4, 3, 1, 1, 2, 4,
       3, 5, 1, 3, 2, 0, 0, 4, 2, 1,
       0, 9, 3, 1, 3, 1, 3, 0, 1, 1,
       2, 2, 2, 3, 1, 3, 1, 1, 3, 4,
       3, 0, 1, 1, 3, 1, 1, 0, 1, 1,
       2, 1, 1, 1, 1, 1, 1, 3, 5, 1,
       3, 5, 4, 3, 1, 0, 1, 0, 4, 1,
       0, 7, 3, 4, 0, 7, 0, 4, 2, 3,
       3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
       2, 2, 2, 2, 0, 4, 0, 4, 0, 4,
       0, 4, 3, 3, 3, 3, 3, 3, 3, 3,
       3, 3, 3, 3, 2, 2, 2, 2, 3, 3,
       3, 3, 3, 3, 3, 3, 3, 3, 0, 0,
       7, 0, 5, 1, 2, 2, 2, 2, 2, 2,
       2, 2, 0, 3, 1, 4, 3, 3, 2, 0,
      10, 0, 11, 1, 0, 4, 3, 4, 1, 2,
       0, 5, 0, 7, 0, 6, 0, 7, 0, 7,
       0, 7, 0, 7, 0, 5, 1, 1, 3, 2,
       1, 3, 2, 1, 1, 0, 0, 6, 1, 2,
       0, 2, 0, 2, 3, 0, 1, 1, 0, 3,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 3, 2, 1, 1, 3, 2, 2, 2, 4,
       3, 1, 3, 1, 1, 1, 3, 2, 1, 3,
       3, 0, 2, 0, 1, 5, 3, 3, 1, 1,
       1, 1, 1, 1, 0, 0, 7, 1, 2, 0,
       0, 4, 4, 4, 0, 4, 1, 1, 0, 1,
       2, 3, 3, 1, 4, 0, 5, 1, 1, 1,
       1, 2, 1, 4, 4, 1, 1, 4, 0, 1,
       1, 0, 2, 4, 4, 1, 1, 3, 1, 2,
       3, 1, 1, 0, 5, 0, 0, 2, 5, 3,
       3, 1, 6, 4, 4, 2, 2, 2, 1, 2,
       1, 0, 5, 3, 3, 6, 3, 1, 1, 1,
       4, 4, 2, 2, 4, 2, 2, 1, 0, 4,
       3, 3
};




static const yytype_uint16 yydefact[] =
{
       5, 0, 3, 1, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 312, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 466, 0, 0, 362, 0,
     370, 371, 6, 393, 446, 65, 372, 0, 46, 0,
       0, 0, 74, 0, 0, 0, 0, 323, 0, 0,
      77, 0, 0, 0, 0, 0, 346, 0, 0, 0,
       0, 105, 107, 111, 0, 0, 376, 377, 378, 379,
     373, 374, 0, 0, 380, 375, 0, 0, 76, 29,
     458, 365, 0, 395, 4, 0, 8, 34, 9, 10,
      95, 96, 0, 0, 410, 97, 439, 0, 398, 314,
       0, 409, 0, 411, 0, 442, 0, 438, 417, 437,
     440, 445, 0, 303, 394, 6, 346, 0, 97, 496,
     495, 0, 493, 492, 318, 284, 285, 286, 287, 0,
     310, 309, 308, 307, 306, 305, 304, 346, 0, 0,
     347, 0, 263, 413, 0, 261, 0, 471, 0, 403,
     248, 0, 0, 347, 353, 246, 354, 0, 358, 440,
       0, 0, 311, 0, 35, 0, 234, 0, 43, 235,
       0, 0, 0, 55, 0, 57, 0, 0, 0, 59,
     410, 0, 411, 0, 0, 0, 21, 0, 20, 177,
       0, 0, 176, 108, 106, 182, 0, 97, 0, 0,
       0, 0, 240, 466, 480, 0, 382, 0, 0, 0,
     478, 0, 15, 0, 397, 0, 27, 0, 366, 0,
     367, 0, 0, 0, 330, 0, 18, 109, 103, 98,
       0, 0, 0, 268, 0, 270, 298, 264, 266, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 66,
     262, 260, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 344, 0, 448, 414, 448, 0,
     459, 441, 0, 0, 313, 0, 349, 0, 0, 475,
     412, 0, 316, 404, 467, 0, 349, 0, 368, 0,
     355, 441, 363, 0, 0, 0, 64, 0, 0, 0,
     236, 239, 410, 411, 0, 0, 56, 58, 84, 0,
      60, 61, 29, 83, 23, 0, 0, 17, 0, 178,
     411, 0, 62, 0, 0, 63, 0, 0, 92, 94,
     497, 0, 0, 0, 465, 0, 481, 0, 381, 479,
     393, 0, 0, 477, 400, 476, 396, 5, 12, 13,
     334, 297, 36, 0, 0, 317, 399, 7, 168, 0,
       0, 101, 112, 99, 319, 448, 500, 0, 431, 429,
       0, 0, 0, 272, 0, 301, 0, 0, 0, 273,
     275, 274, 289, 288, 291, 290, 292, 294, 295, 293,
     283, 282, 277, 278, 276, 279, 280, 281, 296, 0,
     242, 259, 258, 257, 256, 255, 254, 253, 252, 251,
     250, 249, 168, 501, 432, 0, 449, 0, 0, 0,
       0, 494, 348, 456, 0, 470, 0, 469, 348, 431,
     168, 247, 432, 0, 364, 37, 233, 0, 0, 49,
     237, 71, 68, 0, 0, 53, 0, 0, 401, 0,
       0, 0, 0, 384, 0, 383, 26, 391, 27, 0,
      22, 19, 0, 175, 183, 180, 321, 0, 0, 498,
     490, 491, 11, 0, 462, 0, 461, 315, 0, 483,
       0, 484, 486, 332, 3, 5, 168, 0, 28, 30,
      31, 32, 447, 0, 0, 167, 410, 411, 0, 0,
       0, 350, 110, 114, 0, 0, 0, 163, 0, 0,
     338, 336, 430, 269, 271, 0, 0, 265, 267, 0,
     243, 0, 342, 340, 434, 451, 415, 450, 455, 443,
     444, 474, 473, 0, 0, 356, 40, 0, 47, 44,
     235, 0, 0, 0, 0, 0, 0, 0, 387, 388,
     408, 0, 403, 401, 0, 0, 386, 0, 0, 24,
     179, 0, 163, 93, 67, 0, 463, 465, 0, 487,
     489, 488, 0, 0, 168, 16, 3, 0, 0, 171,
     331, 0, 25, 0, 352, 0, 0, 113, 116, 185,
     163, 164, 165, 0, 153, 0, 166, 436, 457, 168,
     168, 302, 299, 244, 345, 168, 168, 452, 428, 448,
       0, 0, 468, 369, 360, 29, 38, 0, 0, 0,
     238, 118, 0, 118, 120, 128, 0, 29, 126, 75,
     134, 134, 54, 0, 390, 404, 402, 0, 385, 392,
       0, 181, 0, 499, 465, 460, 0, 482, 0, 0,
      14, 335, 0, 0, 410, 411, 351, 115, 185, 0,
     217, 0, 324, 163, 0, 155, 0, 0, 0, 368,
       0, 0, 424, 427, 426, 419, 0, 0, 472, 357,
      27, 143, 0, 29, 141, 45, 50, 0, 0, 121,
       0, 0, 27, 134, 0, 134, 0, 407, 406, 389,
      78, 324, 0, 241, 485, 333, 33, 174, 217, 117,
       0, 0, 221, 222, 223, 226, 225, 224, 216, 104,
     184, 189, 186, 0, 215, 219, 0, 0, 0, 0,
       0, 156, 0, 339, 337, 300, 245, 343, 341, 168,
     448, 448, 416, 453, 454, 0, 359, 146, 149, 0,
      27, 235, 119, 72, 69, 129, 0, 0, 0, 0,
       0, 0, 130, 0, 0, 0, 464, 102, 0, 0,
     193, 0, 97, 220, 0, 188, 29, 0, 29, 0,
     159, 0, 158, 0, 0, 0, 0, 418, 361, 151,
       0, 0, 39, 48, 0, 0, 0, 0, 127, 0,
     132, 0, 139, 140, 137, 131, 405, 79, 29, 0,
       0, 195, 197, 192, 229, 0, 0, 0, 27, 0,
     328, 0, 27, 160, 0, 157, 425, 422, 423, 420,
       0, 0, 0, 0, 150, 142, 51, 29, 124, 73,
      70, 133, 135, 29, 0, 27, 232, 194, 6, 0,
     198, 199, 0, 0, 207, 0, 0, 0, 0, 187,
     190, 0, 100, 329, 0, 325, 320, 0, 162, 428,
       0, 29, 0, 0, 0, 27, 29, 27, 0, 322,
     196, 200, 201, 211, 0, 202, 0, 230, 227, 0,
     231, 0, 326, 161, 421, 0, 27, 42, 144, 29,
     122, 52, 0, 27, 80, 0, 210, 203, 204, 208,
       0, 163, 327, 0, 0, 27, 125, 0, 209, 0,
     228, 0, 147, 145, 0, 29, 205, 0, 29, 123,
      27, 213, 29, 191, 27, 81, 27, 86, 214, 0,
      82, 85, 87, 0, 88, 89, 0, 0, 90, 0,
      29, 27, 91
};


static const yytype_int16 yydefgoto[] =
{
      -1, 1, 2, 4, 83, 84, 495, 357, 187, 188,
      85, 216, 363, 498, 848, 87, 547, 691, 625, 757,
     308, 628, 167, 627, 550, 761, 884, 557, 553, 807,
     552, 806, 171, 183, 774, 854, 927, 947, 950, 951,
     952, 956, 959, 337, 338, 88, 89, 230, 90, 516,
      91, 513, 372, 92, 371, 93, 515, 596, 597, 698,
     633, 911, 849, 639, 454, 642, 704, 886, 853, 814,
     695, 758, 924, 799, 938, 802, 842, 603, 604, 605,
     504, 505, 191, 192, 196, 670, 730, 781, 899, 731,
     779, 823, 859, 860, 861, 862, 917, 863, 864, 865,
     915, 943, 732, 733, 734, 735, 825, 736, 165, 309,
     310, 551, 94, 344, 679, 298, 387, 388, 382, 384,
     386, 678, 525, 129, 517, 572, 118, 739, 831, 96,
     368, 584, 496, 610, 609, 616, 615, 422, 97, 606,
     155, 156, 443, 624, 689, 756, 162, 219, 441, 98,
     560, 467, 99, 561, 294, 562, 181, 101, 289, 102,
     103, 428, 618, 752, 797, 879, 683, 684, 749, 685,
     104, 105, 106, 107, 231, 108, 109, 110, 111, 427,
     536, 617, 537, 538, 112, 485, 486, 654, 148, 149,
     209, 210, 488, 582, 113, 341, 575, 114
};




static const yytype_int16 yypact[] =
{
    -716, 65, 74, -716, 1597, 3959, 3959, -101, 3959, 3959,
    3959, 3959, 3959, 3959, 3959, -716, 3959, 3959, 3959, 3959,
    3959, 3959, 3959, 0, 0, 2518, 3959, 208, -62, -51,
    -716, -716, 104, -716, -716, -716, -716, 3959, -716, 55,
      92, 100, -716, 108, 2649, 2780, 62, -716, 110, 2911,
    -716, 3959, 11, -16, 45, 150, -29, 122, 128, 131,
     133, -716, -716, -716, 137, 139, -716, -716, -716, -716,
    -716, -716, 310, -34, -716, -716, 221, 3959, -716, -716,
     148, 212, 263, -55, -716, 13, -716, -716, -716, -716,
    -716, -716, 234, 247, -716, 292, 251, 182, -716, -716,
    4520, -716, 48, 742, 183, -716, 191, 277, 217, -716,
     -27, -716, -11, -716, -716, -716, 254, 210, 292, 5201,
    5201, 3959, 5201, 5201, 5301, -716, -716, 316, -716, 3959,
    -716, -716, -716, -716, -716, -716, -716, -716, 219, 221,
      61, 248, -716, -716, 253, -716, 0, 5060, 255, 415,
    -716, 284, 221, 294, 303, -716, -716, 306, 336, -18,
     -11, 3042, -716, 3959, -716, 14, 5201, 2387, -716, 3959,
    3959, 315, 3959, -716, 4561, -716, 4604, 328, 458, -716,
     332, 5201, 358, 340, 4645, 221, 23, 15, -716, -716,
     216, 17, -716, -716, -716, 471, 18, 292, 0, 0,
       0, 338, -716, 2518, 49, 54, -716, 4090, 0, 320,
    -716, 221, -716, -72, -52, 4686, 343, 3959, 151, 333,
     330, 151, -1, 422, -716, 429, -716, 383, -716, -716,
       4, 449, -5, -716, 3959, -716, 485, -716, -716, 3959,
    3959, 3959, 3959, 3959, 3959, 3959, 3959, 3959, 3959, 3959,
    3959, 3959, 3959, 3959, 3959, 3959, 3959, 3959, 208, -716,
    -716, -716, 3173, 3959, 3959, 3959, 3959, 3959, 3959, 3959,
    3959, 3959, 3959, 3959, -716, 38, 3959, -716, 3959, 3959,
     148, -28, 364, 4729, -716, 221, 241, 154, 154, -716,
    -716, 3304, -716, 3435, -716, 221, 294, -3, 365, -3,
    -716, -12, -716, 4770, 4812, 3959, -716, 433, 3959, 367,
     508, 5201, 438, 1184, 448, 4853, -716, -716, -716, 981,
    -716, -716, -716, -716, 25, 462, 11, -716, 3959, -716,
    -716, -16, -716, 981, 472, -716, 395, 30, -716, -716,
    -716, 32, 397, 399, 179, 401, -716, 475, -716, -716,
     494, 4223, 404, -716, -716, -716, -45, -716, -716, -716,
    -716, -716, -716, 1728, 4264, -716, -716, -716, 3566, 546,
     -13, -716, 440, -716, -716, 3959, 416, 3959, 419, -12,
     424, -11, 3959, 5278, 3959, -716, 3959, 3959, 3959, 2568,
    2699, 2828, 2959, 2959, 2959, 2959, 777, 777, 777, 777,
     492, 492, 268, 268, 268, 316, 316, 316, -716, -17,
    5301, 5301, 5301, 5301, 5301, 5301, 5301, 5301, 5301, 5301,
    5301, 5301, 3566, 416, 425, 427, 5201, 408, 154, 409,
    4305, -716, 272, -716, 0, 5201, 0, 5101, 294, -716,
    3566, -716, -716, 154, -716, 555, 5201, 437, 4894, -716,
    -716, -716, -716, 569, 33, -716, 981, 981, 981, 439,
     120, 441, 221, -43, 450, -716, -716, -716, 434, 525,
    -716, -716, 4350, -716, -716, 584, -716, 0, 455, -716,
    -716, -716, -716, 459, -716, 34, -716, -716, 228, -716,
    3959, -716, -716, -716, 454, -716, 3566, 461, -716, -716,
    -716, -716, -716, 0, 463, 603, 37, 199, 981, 464,
     221, 294, -716, 497, -13, 480, 465, 298, 468, 4391,
    -716, -716, -12, 5241, 5301, 3959, 5160, 5346, 5367, 208,
    -716, 483, -716, -716, -716, -716, -716, -6, -716, -716,
    -716, -716, -716, 3697, 484, -716, -716, 2387, -716, -716,
    3959, 3959, 0, 171, 981, 564, 1860, -2, -716, -716,
     512, 482, 630, 981, 498, 221, 112, 570, 540, -716,
    -716, 981, 298, -716, -716, 0, -716, 179, 632, -716,
    -716, -716, 488, 1138, 3566, -716, 495, 499, 503, -716,
    -716, 3828, -716, 221, 294, -13, 502, 648, -716, -716,
     298, -716, -716, 509, 650, 172, -716, -716, -716, 3566,
    3566, 5324, -716, -716, -716, 3566, 3566, -716, 511, 3959,
    3959, 0, 5201, -716, -716, -716, -716, 3959, 1992, 513,
    5201, 538, 0, 538, -716, -716, 652, -716, -716, -716,
     516, 520, -716, 981, -716, 981, -716, 518, 121, -716,
     524, -716, 536, -716, 179, -716, 3959, -716, 510, 545,
    -716, -716, 548, 0, 39, 843, 294, 648, -716, -13,
     517, 550, 597, 203, 629, 691, 556, 557, 3959, 365,
     559, 560, -716, 644, 651, -716, 562, 4432, -716, 588,
     276, -716, 4936, -716, -716, -716, -716, 171, 571, -716,
     573, 981, 625, -716, 307, -716, -33, -716, 596, -716,
    -716, 597, 43, 5301, -716, -716, -716, -716, 631, -716,
     653, -13, -716, -716, -716, -716, -716, -716, -716, -716,
    -716, -716, -716, 254, 414, -716, 19, 574, 576, 575,
     197, 715, 981, -716, -716, 5324, -716, -716, -716, 3566,
    3959, 3959, 606, -716, -716, 154, -716, -716, 360, 581,
     662, 3959, -716, -716, -716, -716, 582, 337, 595, 3959,
       6, -9, -716, 981, -13, 600, -716, -716, 734, 9,
    -716, 676, 292, -716, 682, -716, -716, 222, -716, 694,
     756, 981, -716, 620, 616, 618, 154, -716, -716, 378,
     627, 2387, -716, -716, 623, 633, 2124, 2124, -716, 626,
    -716, 4479, -716, -716, -716, -716, -716, -716, -716, 981,
     -13, -716, 84, -716, 767, 28, 710, 773, 634, 716,
    -716, 44, 635, 778, 981, -716, -716, -716, -716, -716,
     641, 768, 725, 3959, -716, -716, -716, -716, -716, -716,
    -716, -716, -716, -716, 722, 645, -716, -716, 714, 654,
      84, -716, 655, 718, 700, 658, 666, 981, 739, -716,
    -716, 981, -716, -716, 224, -716, -716, 981, -716, 511,
    3959, -716, 677, 4977, 2256, 740, -716, 302, 679, -716,
    -716, -716, -716, 493, -13, -716, 759, -716, 822, 687,
    -716, 766, -716, -716, -716, 5018, 774, -716, -716, -716,
    -716, -716, 690, 322, -716, 779, 781, 837, -716, -716,
     981, 298, -716, 823, 2387, 770, -716, 701, -716, -13,
    -716, 719, -716, -716, 717, -716, -716, 305, -716, -716,
     720, -716, -716, -716, 370, -716, 723, 775, -716, 721,
    -716, 775, -716, -13, -716, -716, 799, 730, -716, 729,
    -716, 731, -716
};


static const yytype_int16 yypgoto[] =
{
    -716, -716, -337, -716, -23, -716, -716, -716, -716, 549,
    -716, -291, -716, -716, 24, -716, -716, -716, -716, -716,
    -716, -716, -716, -716, -716, -716, -716, -716, -716, -716,
    -716, -716, -716, -716, -716, -716, -716, -716, -716, -716,
     -69, -716, -716, -716, 410, 522, 523, -116, -716, -716,
    -716, -716, -716, -716, -716, -716, -716, -716, 295, 258,
     195, -716, 86, -716, -716, -716, -394, -716, -716, 83,
    -716, -716, -716, -716, -716, -716, -716, -561, -716, 223,
    -410, -716, -716, 568, -716, 227, -716, -716, -716, -716,
    -716, -716, -716, -716, 47, -716, -716, -716, -716, -716,
    -716, -716, -716, -716, -716, -715, -716, -716, -716, -535,
    -716, -716, -31, -716, -716, -716, -716, -716, -716, -716,
    -716, -716, -716, -716, -716, -716, 3, 189, -716, -716,
    -716, -716, -716, -716, -716, -716, -716, -716, 755, -362,
    -245, -716, -716, -716, -716, -716, -716, -716, 225, 12,
     514, -716, -716, 346, 369, -716, 671, 761, -420, 443,
     933, -716, -716, -716, -716, -716, -716, -716, -716, 50,
    -197, -716, 40, -716, -716, -716, -22, -24, -716, -269,
    -433, -716, -716, 153, -21, 304, 375, -716, 743, -716,
     396, 281, -716, -716, -716, -716, -716, -716
};






static const yytype_int16 yytable[] =
{
     140, 140, 282, 159, 153, 158, 160, 95, 512, 429,
     545, 652, 531, 408, 541, 629, 542, 820, 180, 783,
     494, 225, 305, 326, 640, 331, 334, 784, 86, 186,
     544, 468, 812, 278, 278, 378, 868, 115, 477, 671,
     479, 555, 577, 278, 195, -169, 529, -172, 121, 278,
     213, 577, 874, 214, 115, 619, 34, 189, 115, 197,
     769, 770, 34, 144, 144, 3, 376, 157, 34, 47,
      34, 115, 204, 34, -2, 373, 223, 353, 424, 358,
     359, 336, 115, 589, 769, 770, 587, 161, 281, -347,
     378, 424, -349, 223, 224, 137, 223, 360, 163, -348,
     439, -347, 442, 223, 493, 223, 518, 260, 261, 423,
     346, 34, 137, 325, 211, 469, 286, -433, 212, 197,
     772, -430, -429, 140, 279, 279, -433, 204, 138, 296,
     164, 139, 509, 177, 279, 510, 301, 80, 190, 312,
     279, 207, 208, 280, 815, 138, 620, 377, 139, 80,
     641, 80, 598, 374, 80, 858, 366, 813, 586, 185,
     821, 822, 324, 193, 226, 306, 327, 140, 332, 335,
     785, 223, 347, 223, 659, 140, 140, 140, 916, 869,
     478, 178, 480, 556, 578, 140, 144, -169, 356, -172,
     377, 307, 80, 776, 875, 348, 207, 208, 564, 676,
     677, 688, 632, 674, 168, 680, 681, -170, 379, 223,
     224, 381, 262, 263, 264, 265, 266, 267, 268, 269,
     270, 271, 272, 273, 204, 433, 805, 34, 789, 509,
     144, 535, 510, 598, 159, 153, 158, 160, 144, 144,
     144, 169, 115, 717, 34, 675, 535, 706, 144, 170,
     115, 379, 34, 829, 381, 901, -349, 172, -413, -413,
     223, 206, 432, 379, 379, -348, 381, 381, 194, 223,
     790, 198, 438, 379, 115, 379, 381, 199, 381, 115,
     200, 34, 201, 137, 613, 204, 202, 115, 203, 34,
     218, 137, 115, 207, 208, 830, 463, 902, 157, 579,
     217, 580, 581, 186, 483, 227, 377, 719, 80, 767,
     463, 771, -435, 255, 256, 257, 138, 258, 228, 139,
     137, 140, 798, 229, 138, 80, 232, 139, 137, 601,
     602, 465, 274, 80, 690, 275, 204, 506, 276, 793,
     277, 221, -41, -41, -41, 465, 702, 511, 509, -170,
     686, 510, 47, 151, 207, 208, 152, 522, 211, 780,
     931, 138, 80, 839, 139, 258, 95, 285, 328, 115,
      80, 262, 263, 264, 265, 266, 267, 268, 269, 270,
     271, 272, 273, 204, 144, 380, 140, 499, 205, 223,
     360, 506, 287, 204, -138, -138, -138, 288, 353, 768,
     769, 770, 760, 204, 379, 207, 208, 381, 353, 506,
     292, 140, 817, 140, -136, -136, -136, -413, -413, 379,
     223, 493, 381, 293, 601, 602, 800, 801, 425, 809,
     769, 770, 295, 463, 463, 463, -148, -148, -148, 566,
     380, 425, 223, 509, 840, 841, 510, 297, -154, 144,
     299, 206, 207, 208, 140, -138, 941, 942, 857, 300,
     866, 354, 207, 208, 314, 506, 142, 145, 465, 465,
     465, 319, 207, 208, 144, -136, 144, 220, 222, 318,
     140, 794, 795, 320, 333, 463, 349, 594, 343, 365,
     355, 511, 322, 367, 511, 828, 362, 832, 866, 349,
     369, 355, 349, 355, 370, 159, 153, 158, 160, 321,
     375, 385, -218, 374, 440, 447, 450, 144, 449, 453,
     465, 722, 723, 724, 725, 726, 727, 855, 451, 140,
     140, 463, 918, 470, 252, 253, 254, 255, 256, 257,
     463, 258, 648, 144, 476, 475, 489, 481, 463, 511,
     482, 487, 140, 506, 140, 490, 885, 492, 535, 508,
     664, 514, 887, 534, 539, -456, 465, 936, 520, 157,
     666, 626, 511, 521, 532, 465, 533, 511, 506, 506,
     638, 546, 554, 465, 506, 506, 548, 568, 563, 565,
     906, 955, 144, 144, 567, 913, 569, 571, 140, 535,
     722, 723, 724, 725, 726, 727, 574, 585, 576, 140,
     588, 591, 593, 590, 600, 144, 720, 144, 925, 595,
     463, 721, 463, 607, 722, 723, 724, 725, 726, 727,
     728, 140, 599, 614, 623, 636, 643, 644, 645, 348,
     140, 649, 650, 657, 940, 656, 511, 944, 660, 661,
     511, 946, 694, 662, 668, 465, 669, 465, 673, 672,
     682, 144, 697, 714, 696, 701, 826, 703, 709, 961,
     729, 705, 144, 710, 140, 100, 119, 120, 463, 122,
     123, 124, 125, 126, 127, 128, 711, 130, 131, 132,
     133, 134, 135, 136, 144, 715, 147, 150, 511, 716,
     737, 738, 741, 144, 742, 750, 743, 744, 166, 747,
     748, 755, 751, 465, 766, 174, 176, 753, 506, 463,
     773, 763, 184, 764, 778, 787, 786, 788, 791, 796,
     720, 379, 803, 808, 381, 721, 782, 144, 722, 723,
     724, 725, 726, 727, 728, 804, 810, 819, 215, 824,
     463, 511, 818, 827, 465, 262, 263, 264, 265, 266,
     267, 268, 269, 270, 271, 272, 273, 833, 463, 834,
     836, 837, 379, 838, 845, 381, 843, 851, 141, 141,
     867, 870, 154, 846, 777, 465, 871, 872, 876, 873,
     880, 877, 283, 882, 881, 888, 463, 511, 889, 511,
     284, -413, -413, 465, -206, 894, 892, 890, 893, 895,
     896, 463, 898, -457, -457, -457, -457, 250, 251, 252,
     253, 254, 255, 256, 257, 844, 258, 912, 907, 914,
     919, 465, 303, 466, 304, 920, 921, 511, 100, 922,
     311, 926, -152, 315, 463, 929, 465, 474, 463, 932,
     928, -173, -212, 935, 463, 934, 262, 263, 264, 265,
     266, 267, 268, 269, 270, 271, 272, 273, 939, 937,
     953, 511, 957, 945, 147, 471, 948, 949, 351, 465,
     958, 960, 954, 465, 962, 500, 501, 573, 364, 465,
     667, 700, 762, 850, 852, 718, 740, 463, 511, 473,
     775, 141, -413, -413, 746, 383, 511, 891, 910, 647,
     389, 390, 391, 392, 393, 394, 395, 396, 397, 398,
     399, 400, 401, 402, 403, 404, 405, 406, 407, 904,
     511, 646, 465, 410, 411, 412, 413, 414, 415, 416,
     417, 418, 419, 420, 421, 141, 345, 426, 933, 426,
     430, 329, 655, 141, 141, 141, 143, 143, 712, 0,
       0, 0, 435, 141, 437, 0, 0, 0, 0, 0,
     558, 559, 0, 0, 0, 0, 446, 0, 0, 448,
       0, 0, 182, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, -173, 0, 0, 0, 0, 0, 472,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 154, 0, 0, 0, 0, 0, 0,
       0, 0, 592, 456, 457, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 100, 0, 0, 0, 0, 0,
       0, 0, 458, 0, 0, 0, 426, 0, 519, 0,
      30, 31, 115, 523, 0, 524, 0, 526, 527, 528,
      36, 0, 0, 0, 0, 0, 0, 0, 635, 0,
       0, 0, 0, 0, 464, 0, 0, 0, 0, 290,
       0, 0, 0, 0, 0, 651, 0, 0, 464, 0,
       0, 0, 0, 137, 0, 0, 0, 0, 0, 141,
       0, 0, 0, 313, 0, 0, 0, 459, 0, 66,
      67, 68, 69, 70, 71, 0, 0, 0, 0, 0,
       0, 460, 0, 330, 0, 0, 461, 74, 75, 462,
       0, 339, 340, 342, 0, 0, 0, 0, 0, 0,
       0, 352, 0, 0, 0, 0, 0, 233, 234, 235,
       0, 0, 0, 0, 0, 0, 0, 707, 0, 708,
       0, 583, 0, 236, 141, 237, 238, 239, 240, 241,
     242, 243, 244, 245, 246, 247, 248, 249, 250, 251,
     252, 253, 254, 255, 256, 257, 0, 258, 0, 141,
       0, 141, 0, 0, 0, 0, 611, 262, 263, 264,
     265, 266, 267, 268, 269, 270, 271, 272, 273, 0,
       0, 464, 464, 464, 622, 765, 0, 0, 100, 0,
       0, 311, 630, 0, 0, 0, 0, 100, 0, 0,
       0, 0, 141, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, -413, -413, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 792, 0, 141, 0,
       0, 0, 0, 464, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 452, 0, 0, 484, 0, 0,
       0, 0, 0, 0, 154, 0, 0, 816, 0, 0,
     426, 687, 0, 658, 0, 0, 0, 0, 692, 100,
       0, 507, 0, 0, 0, 835, 0, 141, 141, 464,
       0, 0, 0, 0, 0, 0, 0, 0, 464, 0,
       0, 0, 0, 0, 0, 0, 464, 713, 0, 0,
     141, 0, 141, 856, 0, 0, 0, 0, 0, 0,
       0, 0, 530, 0, 0, 0, 0, 0, 878, 745,
       0, 0, 0, 0, 0, 507, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 290, 0, 290,
       0, 0, 0, 507, 0, 0, 141, 0, 0, 0,
       0, 897, 0, 0, 0, 900, 0, 141, 0, 0,
       0, 903, 0, 0, 0, 0, 0, 0, 464, 0,
     464, 0, 0, 0, 0, 0, 0, 0, 0, 141,
     339, 0, 0, 0, 0, 0, 0, 0, 141, 0,
       0, 426, 426, 0, 0, 0, 0, 0, 0, 507,
       0, 0, 311, 0, 930, 0, 290, 0, 0, 0,
     811, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 141, 0, 0, 0, 464, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 100, 0, 0, 0, 0, 100, 100, 0,
       0, 0, 0, 0, 0, 631, 634, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 464, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 653, 0,
     484, 0, 0, 0, 883, 0, 0, 507, 0, 0,
       0, 0, 0, 0, 665, 0, 0, 0, 464, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 507, 507, 0, 0, 464, 0, 507, 507,
       0, 905, 0, 0, 290, 100, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 699, 0, 0, 0, 0,
       0, 0, 0, 0, 464, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 484, 0, 464,
       0, 0, 0, 0, 0, 100, 290, 0, 0, 0,
       5, 6, 7, 8, 9, 0, 0, 0, 0, 10,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 464, 0, 0, 0, 464, 0, 0, 0,
     634, 0, 464, 0, 0, 0, 0, 0, 0, 11,
      12, 0, 0, 0, 0, 13, 0, 14, 15, 16,
      17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
      27, 28, 29, 0, 0, 0, 30, 31, 32, 33,
      34, 0, 35, 0, 0, 464, 36, 37, 38, 39,
       0, 40, 507, 41, 0, 42, 0, 0, 43, 0,
       0, 0, 44, 45, 46, 47, 48, 49, 50, 0,
      51, 52, 0, 53, 0, 0, 0, 54, 55, 56,
       0, 57, 58, 59, 60, 61, 62, 63, 0, 0,
       0, 0, 64, 65, 0, 66, 67, 68, 69, 70,
      71, 5, 6, 7, 8, 9, 0, 72, 0, 0,
      10, 0, 73, 74, 75, 76, 77, 0, 78, 79,
       0, 80, 0, 81, 82, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      11, 12, 0, 0, 0, 0, 13, 0, 14, 15,
      16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
      26, 27, 28, 29, 0, 0, 0, 30, 31, 32,
      33, 34, 0, 35, 0, 0, 0, 36, 37, 38,
      39, 0, 40, 0, 41, 0, 42, 0, 0, 43,
       0, 0, 0, 44, 45, 46, 47, 0, 49, 50,
       0, 51, 0, 0, 53, 0, 0, 0, 54, 55,
      56, 0, 57, 58, 59, 497, 61, 62, 63, 0,
       0, 0, 0, 64, 65, 0, 66, 67, 68, 69,
      70, 71, 0, 5, 6, 7, 8, 9, 72, 0,
       0, 0, 10, 117, 74, 75, 76, 77, 0, 78,
      79, 0, 80, 0, 81, 82, 637, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 11, 12, 0, 0, 0, 0, 13, 0,
      14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
      24, 25, 26, 27, 28, 29, 0, 0, 0, 30,
      31, 32, 33, 34, 0, 35, 0, 0, 0, 36,
      37, 38, 39, 0, 40, 0, 41, 0, 42, 0,
       0, 43, 0, 0, 0, 44, 45, 46, 47, 0,
      49, 50, 0, 51, 0, 0, 53, 0, 0, 0,
       0, 0, 56, 0, 57, 58, 59, 0, 0, 0,
       0, 0, 0, 0, 0, 64, 65, 0, 66, 67,
      68, 69, 70, 71, 0, 5, 6, 7, 8, 9,
      72, 0, 0, 0, 10, 117, 74, 75, 76, 77,
       0, 78, 79, 0, 80, 0, 81, 82, 693, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 11, 12, 0, 0, 0, 0,
      13, 0, 14, 15, 16, 17, 18, 19, 20, 21,
      22, 23, 24, 25, 26, 27, 28, 29, 0, 0,
       0, 30, 31, 32, 33, 34, 0, 35, 0, 0,
       0, 36, 37, 38, 39, 0, 40, 0, 41, 0,
      42, 0, 0, 43, 0, 0, 0, 44, 45, 46,
      47, 0, 49, 50, 0, 51, 0, 0, 53, 0,
       0, 0, 0, 0, 56, 0, 57, 58, 59, 0,
       0, 0, 0, 0, 0, 0, 0, 64, 65, 0,
      66, 67, 68, 69, 70, 71, 0, 5, 6, 7,
       8, 9, 72, 0, 0, 0, 10, 117, 74, 75,
      76, 77, 0, 78, 79, 0, 80, 0, 81, 82,
     847, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 11, 12, 0, 0,
       0, 0, 13, 0, 14, 15, 16, 17, 18, 19,
      20, 21, 22, 23, 24, 25, 26, 27, 28, 29,
       0, 0, 0, 30, 31, 32, 33, 34, 0, 35,
       0, 0, 0, 36, 37, 38, 39, 0, 40, 0,
      41, 0, 42, 0, 0, 43, 0, 0, 0, 44,
      45, 46, 47, 0, 49, 50, 0, 51, 0, 0,
      53, 0, 0, 0, 0, 0, 56, 0, 57, 58,
      59, 0, 0, 0, 0, 0, 0, 0, 0, 64,
      65, 0, 66, 67, 68, 69, 70, 71, 0, 5,
       6, 7, 8, 9, 72, 0, 0, 0, 10, 117,
      74, 75, 76, 77, 0, 78, 79, 0, 80, 0,
      81, 82, 909, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 11, 12,
       0, 0, 0, 0, 13, 0, 14, 15, 16, 17,
      18, 19, 20, 21, 22, 23, 24, 25, 26, 27,
      28, 29, 0, 0, 0, 30, 31, 32, 33, 34,
       0, 35, 0, 0, 0, 36, 37, 38, 39, 0,
      40, 0, 41, 0, 42, 0, 0, 43, 0, 0,
       0, 44, 45, 46, 47, 0, 49, 50, 0, 51,
       0, 0, 53, 0, 0, 0, 0, 0, 56, 0,
      57, 58, 59, 0, 0, 0, 0, 0, 0, 0,
       0, 64, 65, 0, 66, 67, 68, 69, 70, 71,
       5, 6, 7, 8, 9, 0, 72, 0, 0, 10,
       0, 117, 74, 75, 76, 77, 0, 78, 79, 0,
      80, 0, 81, 82, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 11,
      12, 0, 0, 0, 0, 13, 0, 14, 15, 16,
      17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
      27, 28, 29, 0, 0, 0, 30, 31, 32, 33,
      34, 0, 35, 0, 0, 0, 36, 37, 38, 39,
       0, 40, 0, 41, 0, 42, 0, 0, 43, 0,
       0, 0, 44, 45, 46, 47, 0, 49, 50, 0,
      51, 0, 0, 53, 0, 0, 0, 0, 0, 56,
       0, 57, 58, 59, 0, 0, 0, 0, 0, 0,
       0, 0, 64, 65, 0, 66, 67, 68, 69, 70,
      71, 5, 6, 7, 8, 9, 0, 72, 0, 0,
      10, 0, 117, 74, 75, 76, 77, 0, 78, 79,
       0, 80, 0, 81, 82, 0, 0, 0, 0, 146,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      11, 12, 0, 0, 0, 0, 13, 0, 14, 15,
      16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
      26, 27, 28, 0, 0, 0, 0, 30, 31, 115,
      33, 34, 0, 0, 0, 0, 0, 36, 240, 241,
     242, 243, 244, 245, 246, 247, 248, 249, 250, 251,
     252, 253, 254, 255, 256, 257, 47, 258, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     116, 0, 0, 58, 59, 0, 0, 0, 0, 0,
       0, 0, 0, 64, 65, 0, 66, 67, 68, 69,
      70, 71, 5, 6, 7, 8, 9, 0, 72, 0,
       0, 10, 0, 117, 74, 75, 76, 77, 0, 0,
       0, 0, 80, 0, 81, 82, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 11, 12, 0, 0, 0, 0, 13, 0, 14,
      15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
      25, 26, 27, 28, 0, 0, 0, 0, 30, 31,
     115, 33, 34, 0, 0, 0, 0, 0, 36, 0,
     241, 242, 243, 244, 245, 246, 247, 248, 249, 250,
     251, 252, 253, 254, 255, 256, 257, 47, 258, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 116, 0, 0, 58, 59, 0, 0, 0, 0,
       0, 0, 0, 0, 64, 65, 0, 66, 67, 68,
      69, 70, 71, 5, 6, 7, 8, 9, 0, 72,
       0, 0, 10, 0, 117, 74, 75, 76, 77, 0,
     173, 0, 0, 80, 0, 81, 82, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 11, 12, 0, 0, 0, 0, 13, 0,
      14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
      24, 25, 26, 27, 28, 0, 0, 0, 0, 30,
      31, 115, 33, 34, 0, 0, 0, 0, 0, 36,
     242, 243, 244, 245, 246, 247, 248, 249, 250, 251,
     252, 253, 254, 255, 256, 257, 0, 258, 47, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 116, 0, 0, 58, 59, 0, 0, 0,
       0, 0, 0, 0, 0, 64, 65, 0, 66, 67,
      68, 69, 70, 71, 5, 6, 7, 8, 9, 0,
      72, 0, 0, 10, 0, 117, 74, 75, 76, 77,
       0, 175, 0, 0, 80, 0, 81, 82, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 11, 12, 0, 0, 0, 0, 13,
       0, 14, 15, 16, 17, 18, 19, 20, 21, 22,
      23, 24, 25, 26, 27, 28, 0, 0, 0, 0,
      30, 31, 115, 33, 34, 0, 0, 0, 0, 0,
      36, -457, -457, -457, -457, 246, 247, 248, 249, 250,
     251, 252, 253, 254, 255, 256, 257, 0, 258, 47,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 116, 0, 0, 58, 59, 0, 0,
       0, 0, 0, 0, 0, 0, 64, 65, 0, 66,
      67, 68, 69, 70, 71, 5, 6, 7, 8, 9,
       0, 72, 0, 0, 10, 0, 117, 74, 75, 76,
      77, 0, 179, 0, 0, 80, 0, 81, 82, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 11, 12, 0, 0, 0, 0,
      13, 0, 14, 15, 16, 17, 18, 19, 20, 21,
      22, 23, 24, 25, 26, 27, 28, 0, 0, 0,
       0, 30, 31, 115, 33, 34, 0, 0, 0, 0,
       0, 36, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 116, 0, 0, 58, 59, 0,
       0, 0, 0, 0, 0, 0, 0, 64, 65, 0,
      66, 67, 68, 69, 70, 71, 5, 6, 7, 8,
       9, 0, 72, 0, 0, 10, 0, 117, 74, 75,
      76, 77, 302, 0, 0, 0, 80, 0, 81, 82,
       0, 0, 0, 0, 409, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 11, 12, 0, 0, 0,
       0, 13, 0, 14, 15, 16, 17, 18, 19, 20,
      21, 22, 23, 24, 25, 26, 27, 28, 0, 0,
       0, 0, 30, 31, 115, 33, 34, 0, 0, 0,
       0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 116, 0, 0, 58, 59,
       0, 0, 0, 0, 0, 0, 0, 0, 64, 65,
       0, 66, 67, 68, 69, 70, 71, 5, 6, 7,
       8, 9, 0, 72, 0, 0, 10, 0, 117, 74,
      75, 76, 77, 0, 0, 0, 0, 80, 0, 81,
      82, 0, 0, 0, 0, 434, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 11, 12, 0, 0,
       0, 0, 13, 0, 14, 15, 16, 17, 18, 19,
      20, 21, 22, 23, 24, 25, 26, 27, 28, 0,
       0, 0, 0, 30, 31, 115, 33, 34, 0, 0,
       0, 0, 0, 36, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 116, 0, 0, 58,
      59, 0, 0, 0, 0, 0, 0, 0, 0, 64,
      65, 0, 66, 67, 68, 69, 70, 71, 5, 6,
       7, 8, 9, 0, 72, 0, 0, 10, 0, 117,
      74, 75, 76, 77, 0, 0, 0, 0, 80, 0,
      81, 82, 0, 0, 0, 0, 436, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 11, 12, 0,
       0, 0, 0, 13, 0, 14, 15, 16, 17, 18,
      19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
       0, 0, 0, 0, 30, 31, 115, 33, 34, 0,
       0, 0, 0, 0, 36, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 116, 0, 0,
      58, 59, 0, 0, 0, 0, 0, 0, 0, 0,
      64, 65, 0, 66, 67, 68, 69, 70, 71, 5,
       6, 7, 8, 9, 0, 72, 0, 0, 10, 0,
     117, 74, 75, 76, 77, 0, 0, 0, 0, 80,
       0, 81, 82, 0, 0, 0, 0, 503, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 11, 12,
       0, 0, 0, 0, 13, 0, 14, 15, 16, 17,
      18, 19, 20, 21, 22, 23, 24, 25, 26, 27,
      28, 0, 0, 0, 0, 30, 31, 115, 33, 34,
       0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
       0, 58, 59, 0, 0, 0, 0, 0, 0, 0,
       0, 64, 65, 0, 66, 67, 68, 69, 70, 71,
       5, 6, 7, 8, 9, 0, 72, 0, 0, 10,
       0, 117, 74, 75, 76, 77, 0, 0, 0, 0,
      80, 0, 81, 82, 0, 0, 0, 0, 621, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 11,
      12, 0, 0, 0, 0, 13, 0, 14, 15, 16,
      17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
      27, 28, 0, 0, 0, 0, 30, 31, 115, 33,
      34, 0, 0, 0, 0, 0, 36, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 47, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 116,
       0, 0, 58, 59, 0, 0, 0, 0, 0, 0,
       0, 0, 64, 65, 0, 66, 67, 68, 69, 70,
      71, 5, 6, 7, 8, 9, 0, 72, 0, 0,
      10, 0, 117, 74, 75, 76, 77, 0, 0, 0,
       0, 80, 0, 81, 82, 0, 0, 0, 0, 663,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
      11, 12, 0, 0, 0, 0, 13, 0, 14, 15,
      16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
      26, 27, 28, 0, 0, 0, 0, 30, 31, 115,
      33, 34, 0, 0, 0, 0, 0, 36, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 47, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     116, 0, 0, 58, 59, 0, 0, 0, 0, 0,
       0, 0, 0, 64, 65, 0, 66, 67, 68, 69,
      70, 71, 5, 6, 7, 8, 9, 0, 72, 0,
       0, 10, 0, 117, 74, 75, 76, 77, 0, 0,
       0, 0, 80, 0, 81, 82, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 11, 12, 0, 0, 0, 0, 13, 0, 14,
      15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
      25, 26, 27, 28, 0, 0, 0, 0, 30, 31,
     115, 33, 34, 0, 0, 0, 0, 0, 36, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 116, 0, 0, 58, 59, 0, 0, 0, 0,
       0, 0, 0, 0, 64, 65, 0, 66, 67, 68,
      69, 70, 71, 5, 6, 7, 8, 9, 0, 72,
       0, 0, 10, 0, 117, 74, 75, 76, 77, 0,
       0, 0, 0, 80, 0, 81, 82, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 11, 12, 0, 0, 0, 0, 13, 0,
      14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
      24, 25, 26, 27, 28, 0, 0, 0, 0, 30,
      31, 115, 350, 34, 0, 0, 0, 0, 0, 36,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 47, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 116, 0, 0, 58, 59, 0, 0, 0,
       0, 0, 0, 0, 0, 64, 65, 0, 66, 67,
      68, 69, 70, 71, 0, 0, 0, 0, 0, 0,
      72, 0, 233, 234, 235, 117, 74, 75, 76, 77,
       0, 0, 0, 0, 80, 0, 81, 82, 236, 0,
     237, 238, 239, 240, 241, 242, 243, 244, 245, 246,
     247, 248, 249, 250, 251, 252, 253, 254, 255, 256,
     257, 0, 258, 233, 234, 235, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
       0, 237, 238, 239, 240, 241, 242, 243, 244, 245,
     246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
     256, 257, 0, 258, 233, 234, 235, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     236, 0, 237, 238, 239, 240, 241, 242, 243, 244,
     245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
     255, 256, 257, 0, 258, 0, 0, 0, 0, 233,
     234, 235, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 236, 491, 237, 238, 239,
     240, 241, 242, 243, 244, 245, 246, 247, 248, 249,
     250, 251, 252, 253, 254, 255, 256, 257, 0, 258,
     233, 234, 235, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 236, 502, 237, 238,
     239, 240, 241, 242, 243, 244, 245, 246, 247, 248,
     249, 250, 251, 252, 253, 254, 255, 256, 257, 0,
     258, 233, 234, 235, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 236, 540, 237,
     238, 239, 240, 241, 242, 243, 244, 245, 246, 247,
     248, 249, 250, 251, 252, 253, 254, 255, 256, 257,
       0, 258, 0, 0, 0, 0, 0, 0, 233, 234,
     235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 570, 236, 812, 237, 238, 239, 240,
     241, 242, 243, 244, 245, 246, 247, 248, 249, 250,
     251, 252, 253, 254, 255, 256, 257, 0, 258, 233,
     234, 235, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 608, 236, 0, 237, 238, 239,
     240, 241, 242, 243, 244, 245, 246, 247, 248, 249,
     250, 251, 252, 253, 254, 255, 256, 257, 0, 258,
     233, 234, 235, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 754, 236, 0, 237, 238,
     239, 240, 241, 242, 243, 244, 245, 246, 247, 248,
     249, 250, 251, 252, 253, 254, 255, 256, 257, 0,
     258, 0, 0, 233, 234, 235, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
     813, 237, 238, 239, 240, 241, 242, 243, 244, 245,
     246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
     256, 257, 0, 258, 233, 234, 235, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     236, 259, 237, 238, 239, 240, 241, 242, 243, 244,
     245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
     255, 256, 257, 0, 258, 233, 234, 235, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 236, 316, 237, 238, 239, 240, 241, 242, 243,
     244, 245, 246, 247, 248, 249, 250, 251, 252, 253,
     254, 255, 256, 257, 0, 258, 0, 0, 233, 234,
     235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 236, 317, 237, 238, 239, 240,
     241, 242, 243, 244, 245, 246, 247, 248, 249, 250,
     251, 252, 253, 254, 255, 256, 257, 0, 258, 233,
     234, 235, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 236, 323, 237, 238, 239,
     240, 241, 242, 243, 244, 245, 246, 247, 248, 249,
     250, 251, 252, 253, 254, 255, 256, 257, 0, 258,
       0, 233, 234, 235, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 361, 236, 0, 237,
     238, 239, 240, 241, 242, 243, 244, 245, 246, 247,
     248, 249, 250, 251, 252, 253, 254, 255, 256, 257,
       0, 258, 233, 234, 235, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 236, 431,
     237, 238, 239, 240, 241, 242, 243, 244, 245, 246,
     247, 248, 249, 250, 251, 252, 253, 254, 255, 256,
     257, 0, 258, 233, 234, 235, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
     444, 237, 238, 239, 240, 241, 242, 243, 244, 245,
     246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
     256, 257, 0, 258, 0, 233, 234, 235, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 236, 445, 237, 238, 239, 240, 241, 242, 243,
     244, 245, 246, 247, 248, 249, 250, 251, 252, 253,
     254, 255, 256, 257, 0, 258, 233, 234, 235, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 236, 455, 237, 238, 239, 240, 241, 242,
     243, 244, 245, 246, 247, 248, 249, 250, 251, 252,
     253, 254, 255, 256, 257, 0, 258, 233, 234, 235,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 236, 549, 237, 238, 239, 240, 241,
     242, 243, 244, 245, 246, 247, 248, 249, 250, 251,
     252, 253, 254, 255, 256, 257, 0, 258, 0, 233,
     234, 235, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 236, 759, 237, 238, 239,
     240, 241, 242, 243, 244, 245, 246, 247, 248, 249,
     250, 251, 252, 253, 254, 255, 256, 257, 0, 258,
     233, 234, 235, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 236, 908, 237, 238,
     239, 240, 241, 242, 243, 244, 245, 246, 247, 248,
     249, 250, 251, 252, 253, 254, 255, 256, 257, 0,
     258, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 923, 233,
     234, 235, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 291, 236, 612, 237, 238, 239,
     240, 241, 242, 243, 244, 245, 246, 247, 248, 249,
     250, 251, 252, 253, 254, 255, 256, 257, 0, 258,
     233, 234, 235, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 543, 236, 0, 237, 238,
     239, 240, 241, 242, 243, 244, 245, 246, 247, 248,
     249, 250, 251, 252, 253, 254, 255, 256, 257, 0,
     258, 234, 235, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 236, 0, 237, 238,
     239, 240, 241, 242, 243, 244, 245, 246, 247, 248,
     249, 250, 251, 252, 253, 254, 255, 256, 257, 235,
     258, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 236, 0, 237, 238, 239, 240, 241,
     242, 243, 244, 245, 246, 247, 248, 249, 250, 251,
     252, 253, 254, 255, 256, 257, 236, 258, 237, 238,
     239, 240, 241, 242, 243, 244, 245, 246, 247, 248,
     249, 250, 251, 252, 253, 254, 255, 256, 257, 0,
     258, 237, 238, 239, 240, 241, 242, 243, 244, 245,
     246, 247, 248, 249, 250, 251, 252, 253, 254, 255,
     256, 257, 0, 258, 238, 239, 240, 241, 242, 243,
     244, 245, 246, 247, 248, 249, 250, 251, 252, 253,
     254, 255, 256, 257, 0, 258, 239, 240, 241, 242,
     243, 244, 245, 246, 247, 248, 249, 250, 251, 252,
     253, 254, 255, 256, 257, 0, 258
};

static const yytype_int16 yycheck[] =
{
      23, 24, 118, 27, 27, 27, 27, 4, 370, 278,
     443, 572, 422, 258, 434, 550, 436, 8, 49, 734,
     357, 8, 8, 8, 26, 8, 8, 8, 4, 52,
     440, 322, 26, 61, 61, 232, 8, 71, 8, 600,
       8, 8, 8, 61, 73, 8, 63, 8, 149, 61,
      73, 8, 8, 76, 71, 61, 73, 73, 71, 56,
      93, 94, 73, 23, 24, 0, 71, 27, 73, 98,
      73, 71, 73, 73, 0, 71, 148, 78, 275, 151,
     152, 197, 71, 503, 93, 94, 496, 149, 112, 144,
     287, 288, 144, 148, 149, 112, 148, 149, 149, 144,
     297, 144, 299, 148, 149, 148, 375, 59, 60, 71,
      61, 73, 112, 90, 148, 90, 139, 144, 152, 116,
     153, 149, 149, 146, 152, 152, 144, 73, 145, 152,
      26, 148, 145, 71, 152, 148, 160, 154, 154, 170,
     152, 142, 143, 154, 153, 145, 152, 152, 148, 154,
     152, 154, 514, 149, 154, 71, 157, 151, 495, 148,
     151, 152, 185, 118, 151, 151, 151, 190, 151, 151,
     151, 148, 123, 148, 584, 198, 199, 200, 893, 151,
     150, 71, 150, 150, 150, 208, 146, 150, 211, 150,
     152, 167, 154, 150, 150, 141, 142, 143, 78, 609,
     610, 621, 31, 31, 149, 615, 616, 8, 232, 148,
     149, 232, 13, 14, 15, 16, 17, 18, 19, 20,
      21, 22, 23, 24, 73, 71, 761, 73, 31, 145,
     190, 428, 148, 595, 258, 258, 258, 258, 198, 199,
     200, 149, 71, 663, 73, 73, 443, 641, 208, 149,
      71, 275, 73, 31, 275, 31, 144, 149, 59, 60,
     148, 141, 285, 287, 288, 144, 287, 288, 118, 148,
      73, 149, 295, 297, 71, 299, 297, 149, 299, 71,
     149, 73, 149, 112, 529, 73, 149, 71, 149, 73,
      78, 112, 71, 142, 143, 73, 319, 73, 258, 71,
     152, 73, 74, 326, 125, 71, 152, 669, 154, 703,
     333, 705, 61, 45, 46, 47, 145, 49, 71, 148,
     112, 344, 755, 31, 145, 154, 144, 148, 112, 126,
     127, 319, 149, 154, 625, 144, 73, 368, 61, 749,
     123, 78, 66, 67, 68, 333, 637, 370, 145, 150,
     619, 148, 98, 145, 142, 143, 148, 381, 148, 721,
     921, 145, 154, 796, 148, 49, 363, 148, 152, 71,
     154, 13, 14, 15, 16, 17, 18, 19, 20, 21,
      22, 23, 24, 73, 344, 232, 409, 363, 78, 148,
     149, 422, 144, 73, 92, 93, 94, 144, 78, 92,
      93, 94, 693, 73, 428, 142, 143, 428, 78, 440,
     155, 434, 774, 436, 92, 93, 94, 59, 60, 443,
     148, 149, 443, 8, 126, 127, 66, 67, 275, 92,
      93, 94, 148, 456, 457, 458, 66, 67, 68, 462,
     287, 288, 148, 145, 66, 67, 148, 144, 150, 409,
     144, 141, 142, 143, 477, 153, 151, 152, 820, 123,
     822, 141, 142, 143, 149, 496, 23, 24, 456, 457,
     458, 13, 142, 143, 434, 153, 436, 81, 82, 151,
     503, 750, 751, 151, 13, 508, 205, 510, 150, 156,
     209, 514, 152, 71, 517, 786, 153, 788, 860, 218,
      71, 220, 221, 222, 121, 529, 529, 529, 529, 151,
      61, 26, 98, 149, 149, 82, 8, 477, 151, 71,
     508, 107, 108, 109, 110, 111, 112, 818, 90, 552,
     553, 554, 894, 71, 42, 43, 44, 45, 46, 47,
     563, 49, 565, 503, 149, 73, 71, 150, 571, 572,
     151, 150, 575, 584, 577, 61, 847, 153, 755, 13,
     591, 121, 853, 155, 155, 149, 554, 929, 149, 529,
     593, 547, 595, 149, 149, 563, 149, 600, 609, 610,
     556, 26, 13, 571, 615, 616, 149, 153, 149, 148,
     881, 953, 552, 553, 144, 886, 71, 13, 621, 796,
     107, 108, 109, 110, 111, 112, 151, 153, 149, 632,
     149, 8, 148, 150, 149, 575, 99, 577, 909, 122,
     643, 104, 645, 155, 107, 108, 109, 110, 111, 112,
     113, 654, 152, 150, 150, 71, 124, 155, 8, 141,
     663, 71, 102, 155, 935, 13, 669, 938, 153, 150,
     673, 942, 628, 150, 152, 643, 8, 645, 8, 150,
     149, 621, 124, 153, 151, 13, 782, 151, 150, 960,
     153, 151, 632, 149, 697, 4, 5, 6, 701, 8,
       9, 10, 11, 12, 13, 14, 150, 16, 17, 18,
      19, 20, 21, 22, 654, 150, 25, 26, 721, 151,
     150, 104, 73, 663, 13, 61, 150, 150, 37, 150,
     150, 123, 61, 701, 89, 44, 45, 155, 749, 742,
     124, 150, 51, 150, 71, 149, 152, 152, 13, 123,
      99, 755, 151, 151, 755, 104, 733, 697, 107, 108,
     109, 110, 111, 112, 113, 83, 151, 13, 77, 73,
     773, 774, 152, 71, 742, 13, 14, 15, 16, 17,
      18, 19, 20, 21, 22, 23, 24, 73, 791, 13,
     150, 155, 796, 155, 151, 796, 149, 151, 23, 24,
      13, 71, 27, 150, 153, 773, 13, 153, 153, 73,
     149, 13, 121, 68, 26, 73, 819, 820, 153, 822,
     129, 59, 60, 791, 90, 105, 151, 153, 90, 151,
     144, 834, 73, 36, 37, 38, 39, 40, 41, 42,
      43, 44, 45, 46, 47, 801, 49, 87, 151, 150,
      71, 819, 161, 319, 163, 13, 149, 860, 167, 73,
     169, 151, 68, 172, 867, 8, 834, 333, 871, 26,
      71, 8, 71, 152, 877, 85, 13, 14, 15, 16,
      17, 18, 19, 20, 21, 22, 23, 24, 151, 150,
     149, 894, 73, 153, 203, 326, 153, 102, 207, 867,
     150, 152, 951, 871, 153, 363, 363, 477, 217, 877,
     595, 633, 697, 807, 811, 668, 673, 920, 921, 331,
     711, 146, 59, 60, 679, 234, 929, 860, 884, 563,
     239, 240, 241, 242, 243, 244, 245, 246, 247, 248,
     249, 250, 251, 252, 253, 254, 255, 256, 257, 879,
     953, 562, 920, 262, 263, 264, 265, 266, 267, 268,
     269, 270, 271, 272, 273, 190, 203, 276, 924, 278,
     279, 190, 577, 198, 199, 200, 23, 24, 654, -1,
      -1, -1, 291, 208, 293, -1, -1, -1, -1, -1,
     456, 457, -1, -1, -1, -1, 305, -1, -1, 308,
      -1, -1, 49, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 150, -1, -1, -1, -1, -1, 328,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 258, -1, -1, -1, -1, -1, -1,
      -1, -1, 508, 42, 43, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 363, -1, -1, -1, -1, -1,
      -1, -1, 61, -1, -1, -1, 375, -1, 377, -1,
      69, 70, 71, 382, -1, 384, -1, 386, 387, 388,
      79, -1, -1, -1, -1, -1, -1, -1, 554, -1,
      -1, -1, -1, -1, 319, -1, -1, -1, -1, 146,
      -1, -1, -1, -1, -1, 571, -1, -1, 333, -1,
      -1, -1, -1, 112, -1, -1, -1, -1, -1, 344,
      -1, -1, -1, 170, -1, -1, -1, 126, -1, 128,
     129, 130, 131, 132, 133, -1, -1, -1, -1, -1,
      -1, 140, -1, 190, -1, -1, 145, 146, 147, 148,
      -1, 198, 199, 200, -1, -1, -1, -1, -1, -1,
      -1, 208, -1, -1, -1, -1, -1, 9, 10, 11,
      -1, -1, -1, -1, -1, -1, -1, 643, -1, 645,
      -1, 490, -1, 25, 409, 27, 28, 29, 30, 31,
      32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
      42, 43, 44, 45, 46, 47, -1, 49, -1, 434,
      -1, 436, -1, -1, -1, -1, 525, 13, 14, 15,
      16, 17, 18, 19, 20, 21, 22, 23, 24, -1,
      -1, 456, 457, 458, 543, 701, -1, -1, 547, -1,
      -1, 550, 551, -1, -1, -1, -1, 556, -1, -1,
      -1, -1, 477, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 59, 60, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 742, -1, 503, -1,
      -1, -1, -1, 508, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 90, -1, -1, 344, -1, -1,
      -1, -1, -1, -1, 529, -1, -1, 773, -1, -1,
     619, 620, -1, 155, -1, -1, -1, -1, 627, 628,
      -1, 368, -1, -1, -1, 791, -1, 552, 553, 554,
      -1, -1, -1, -1, -1, -1, -1, -1, 563, -1,
      -1, -1, -1, -1, -1, -1, 571, 656, -1, -1,
     575, -1, 577, 819, -1, -1, -1, -1, -1, -1,
      -1, -1, 409, -1, -1, -1, -1, -1, 834, 678,
      -1, -1, -1, -1, -1, 422, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 434, -1, 436,
      -1, -1, -1, 440, -1, -1, 621, -1, -1, -1,
      -1, 867, -1, -1, -1, 871, -1, 632, -1, -1,
      -1, 877, -1, -1, -1, -1, -1, -1, 643, -1,
     645, -1, -1, -1, -1, -1, -1, -1, -1, 654,
     477, -1, -1, -1, -1, -1, -1, -1, 663, -1,
      -1, 750, 751, -1, -1, -1, -1, -1, -1, 496,
      -1, -1, 761, -1, 920, -1, 503, -1, -1, -1,
     769, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 697, -1, -1, -1, 701, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 801, -1, -1, -1, -1, 806, 807, -1,
      -1, -1, -1, -1, -1, 552, 553, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 742, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 575, -1,
     577, -1, -1, -1, 843, -1, -1, 584, -1, -1,
      -1, -1, -1, -1, 591, -1, -1, -1, 773, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 609, 610, -1, -1, 791, -1, 615, 616,
      -1, 880, -1, -1, 621, 884, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 632, -1, -1, -1, -1,
      -1, -1, -1, -1, 819, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 654, -1, 834,
      -1, -1, -1, -1, -1, 924, 663, -1, -1, -1,
       3, 4, 5, 6, 7, -1, -1, -1, -1, 12,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 867, -1, -1, -1, 871, -1, -1, -1,
     697, -1, 877, -1, -1, -1, -1, -1, -1, 42,
      43, -1, -1, -1, -1, 48, -1, 50, 51, 52,
      53, 54, 55, 56, 57, 58, 59, 60, 61, 62,
      63, 64, 65, -1, -1, -1, 69, 70, 71, 72,
      73, -1, 75, -1, -1, 920, 79, 80, 81, 82,
      -1, 84, 749, 86, -1, 88, -1, -1, 91, -1,
      -1, -1, 95, 96, 97, 98, 99, 100, 101, -1,
     103, 104, -1, 106, -1, -1, -1, 110, 111, 112,
      -1, 114, 115, 116, 117, 118, 119, 120, -1, -1,
      -1, -1, 125, 126, -1, 128, 129, 130, 131, 132,
     133, 3, 4, 5, 6, 7, -1, 140, -1, -1,
      12, -1, 145, 146, 147, 148, 149, -1, 151, 152,
      -1, 154, -1, 156, 157, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      42, 43, -1, -1, -1, -1, 48, -1, 50, 51,
      52, 53, 54, 55, 56, 57, 58, 59, 60, 61,
      62, 63, 64, 65, -1, -1, -1, 69, 70, 71,
      72, 73, -1, 75, -1, -1, -1, 79, 80, 81,
      82, -1, 84, -1, 86, -1, 88, -1, -1, 91,
      -1, -1, -1, 95, 96, 97, 98, -1, 100, 101,
      -1, 103, -1, -1, 106, -1, -1, -1, 110, 111,
     112, -1, 114, 115, 116, 117, 118, 119, 120, -1,
      -1, -1, -1, 125, 126, -1, 128, 129, 130, 131,
     132, 133, -1, 3, 4, 5, 6, 7, 140, -1,
      -1, -1, 12, 145, 146, 147, 148, 149, -1, 151,
     152, -1, 154, -1, 156, 157, 26, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 42, 43, -1, -1, -1, -1, 48, -1,
      50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
      60, 61, 62, 63, 64, 65, -1, -1, -1, 69,
      70, 71, 72, 73, -1, 75, -1, -1, -1, 79,
      80, 81, 82, -1, 84, -1, 86, -1, 88, -1,
      -1, 91, -1, -1, -1, 95, 96, 97, 98, -1,
     100, 101, -1, 103, -1, -1, 106, -1, -1, -1,
      -1, -1, 112, -1, 114, 115, 116, -1, -1, -1,
      -1, -1, -1, -1, -1, 125, 126, -1, 128, 129,
     130, 131, 132, 133, -1, 3, 4, 5, 6, 7,
     140, -1, -1, -1, 12, 145, 146, 147, 148, 149,
      -1, 151, 152, -1, 154, -1, 156, 157, 26, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 42, 43, -1, -1, -1, -1,
      48, -1, 50, 51, 52, 53, 54, 55, 56, 57,
      58, 59, 60, 61, 62, 63, 64, 65, -1, -1,
      -1, 69, 70, 71, 72, 73, -1, 75, -1, -1,
      -1, 79, 80, 81, 82, -1, 84, -1, 86, -1,
      88, -1, -1, 91, -1, -1, -1, 95, 96, 97,
      98, -1, 100, 101, -1, 103, -1, -1, 106, -1,
      -1, -1, -1, -1, 112, -1, 114, 115, 116, -1,
      -1, -1, -1, -1, -1, -1, -1, 125, 126, -1,
     128, 129, 130, 131, 132, 133, -1, 3, 4, 5,
       6, 7, 140, -1, -1, -1, 12, 145, 146, 147,
     148, 149, -1, 151, 152, -1, 154, -1, 156, 157,
      26, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 42, 43, -1, -1,
      -1, -1, 48, -1, 50, 51, 52, 53, 54, 55,
      56, 57, 58, 59, 60, 61, 62, 63, 64, 65,
      -1, -1, -1, 69, 70, 71, 72, 73, -1, 75,
      -1, -1, -1, 79, 80, 81, 82, -1, 84, -1,
      86, -1, 88, -1, -1, 91, -1, -1, -1, 95,
      96, 97, 98, -1, 100, 101, -1, 103, -1, -1,
     106, -1, -1, -1, -1, -1, 112, -1, 114, 115,
     116, -1, -1, -1, -1, -1, -1, -1, -1, 125,
     126, -1, 128, 129, 130, 131, 132, 133, -1, 3,
       4, 5, 6, 7, 140, -1, -1, -1, 12, 145,
     146, 147, 148, 149, -1, 151, 152, -1, 154, -1,
     156, 157, 26, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 42, 43,
      -1, -1, -1, -1, 48, -1, 50, 51, 52, 53,
      54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
      64, 65, -1, -1, -1, 69, 70, 71, 72, 73,
      -1, 75, -1, -1, -1, 79, 80, 81, 82, -1,
      84, -1, 86, -1, 88, -1, -1, 91, -1, -1,
      -1, 95, 96, 97, 98, -1, 100, 101, -1, 103,
      -1, -1, 106, -1, -1, -1, -1, -1, 112, -1,
     114, 115, 116, -1, -1, -1, -1, -1, -1, -1,
      -1, 125, 126, -1, 128, 129, 130, 131, 132, 133,
       3, 4, 5, 6, 7, -1, 140, -1, -1, 12,
      -1, 145, 146, 147, 148, 149, -1, 151, 152, -1,
     154, -1, 156, 157, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 42,
      43, -1, -1, -1, -1, 48, -1, 50, 51, 52,
      53, 54, 55, 56, 57, 58, 59, 60, 61, 62,
      63, 64, 65, -1, -1, -1, 69, 70, 71, 72,
      73, -1, 75, -1, -1, -1, 79, 80, 81, 82,
      -1, 84, -1, 86, -1, 88, -1, -1, 91, -1,
      -1, -1, 95, 96, 97, 98, -1, 100, 101, -1,
     103, -1, -1, 106, -1, -1, -1, -1, -1, 112,
      -1, 114, 115, 116, -1, -1, -1, -1, -1, -1,
      -1, -1, 125, 126, -1, 128, 129, 130, 131, 132,
     133, 3, 4, 5, 6, 7, -1, 140, -1, -1,
      12, -1, 145, 146, 147, 148, 149, -1, 151, 152,
      -1, 154, -1, 156, 157, -1, -1, -1, -1, 31,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      42, 43, -1, -1, -1, -1, 48, -1, 50, 51,
      52, 53, 54, 55, 56, 57, 58, 59, 60, 61,
      62, 63, 64, -1, -1, -1, -1, 69, 70, 71,
      72, 73, -1, -1, -1, -1, -1, 79, 30, 31,
      32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
      42, 43, 44, 45, 46, 47, 98, 49, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     112, -1, -1, 115, 116, -1, -1, -1, -1, -1,
      -1, -1, -1, 125, 126, -1, 128, 129, 130, 131,
     132, 133, 3, 4, 5, 6, 7, -1, 140, -1,
      -1, 12, -1, 145, 146, 147, 148, 149, -1, -1,
      -1, -1, 154, -1, 156, 157, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 42, 43, -1, -1, -1, -1, 48, -1, 50,
      51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
      61, 62, 63, 64, -1, -1, -1, -1, 69, 70,
      71, 72, 73, -1, -1, -1, -1, -1, 79, -1,
      31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
      41, 42, 43, 44, 45, 46, 47, 98, 49, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 112, -1, -1, 115, 116, -1, -1, -1, -1,
      -1, -1, -1, -1, 125, 126, -1, 128, 129, 130,
     131, 132, 133, 3, 4, 5, 6, 7, -1, 140,
      -1, -1, 12, -1, 145, 146, 147, 148, 149, -1,
     151, -1, -1, 154, -1, 156, 157, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 42, 43, -1, -1, -1, -1, 48, -1,
      50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
      60, 61, 62, 63, 64, -1, -1, -1, -1, 69,
      70, 71, 72, 73, -1, -1, -1, -1, -1, 79,
      32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
      42, 43, 44, 45, 46, 47, -1, 49, 98, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 112, -1, -1, 115, 116, -1, -1, -1,
      -1, -1, -1, -1, -1, 125, 126, -1, 128, 129,
     130, 131, 132, 133, 3, 4, 5, 6, 7, -1,
     140, -1, -1, 12, -1, 145, 146, 147, 148, 149,
      -1, 151, -1, -1, 154, -1, 156, 157, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 42, 43, -1, -1, -1, -1, 48,
      -1, 50, 51, 52, 53, 54, 55, 56, 57, 58,
      59, 60, 61, 62, 63, 64, -1, -1, -1, -1,
      69, 70, 71, 72, 73, -1, -1, -1, -1, -1,
      79, 32, 33, 34, 35, 36, 37, 38, 39, 40,
      41, 42, 43, 44, 45, 46, 47, -1, 49, 98,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 112, -1, -1, 115, 116, -1, -1,
      -1, -1, -1, -1, -1, -1, 125, 126, -1, 128,
     129, 130, 131, 132, 133, 3, 4, 5, 6, 7,
      -1, 140, -1, -1, 12, -1, 145, 146, 147, 148,
     149, -1, 151, -1, -1, 154, -1, 156, 157, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 42, 43, -1, -1, -1, -1,
      48, -1, 50, 51, 52, 53, 54, 55, 56, 57,
      58, 59, 60, 61, 62, 63, 64, -1, -1, -1,
      -1, 69, 70, 71, 72, 73, -1, -1, -1, -1,
      -1, 79, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      98, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 112, -1, -1, 115, 116, -1,
      -1, -1, -1, -1, -1, -1, -1, 125, 126, -1,
     128, 129, 130, 131, 132, 133, 3, 4, 5, 6,
       7, -1, 140, -1, -1, 12, -1, 145, 146, 147,
     148, 149, 150, -1, -1, -1, 154, -1, 156, 157,
      -1, -1, -1, -1, 31, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 42, 43, -1, -1, -1,
      -1, 48, -1, 50, 51, 52, 53, 54, 55, 56,
      57, 58, 59, 60, 61, 62, 63, 64, -1, -1,
      -1, -1, 69, 70, 71, 72, 73, -1, -1, -1,
      -1, -1, 79, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 98, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 112, -1, -1, 115, 116,
      -1, -1, -1, -1, -1, -1, -1, -1, 125, 126,
      -1, 128, 129, 130, 131, 132, 133, 3, 4, 5,
       6, 7, -1, 140, -1, -1, 12, -1, 145, 146,
     147, 148, 149, -1, -1, -1, -1, 154, -1, 156,
     157, -1, -1, -1, -1, 31, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 42, 43, -1, -1,
      -1, -1, 48, -1, 50, 51, 52, 53, 54, 55,
      56, 57, 58, 59, 60, 61, 62, 63, 64, -1,
      -1, -1, -1, 69, 70, 71, 72, 73, -1, -1,
      -1, -1, -1, 79, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 98, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 112, -1, -1, 115,
     116, -1, -1, -1, -1, -1, -1, -1, -1, 125,
     126, -1, 128, 129, 130, 131, 132, 133, 3, 4,
       5, 6, 7, -1, 140, -1, -1, 12, -1, 145,
     146, 147, 148, 149, -1, -1, -1, -1, 154, -1,
     156, 157, -1, -1, -1, -1, 31, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 42, 43, -1,
      -1, -1, -1, 48, -1, 50, 51, 52, 53, 54,
      55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
      -1, -1, -1, -1, 69, 70, 71, 72, 73, -1,
      -1, -1, -1, -1, 79, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 98, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 112, -1, -1,
     115, 116, -1, -1, -1, -1, -1, -1, -1, -1,
     125, 126, -1, 128, 129, 130, 131, 132, 133, 3,
       4, 5, 6, 7, -1, 140, -1, -1, 12, -1,
     145, 146, 147, 148, 149, -1, -1, -1, -1, 154,
      -1, 156, 157, -1, -1, -1, -1, 31, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 42, 43,
      -1, -1, -1, -1, 48, -1, 50, 51, 52, 53,
      54, 55, 56, 57, 58, 59, 60, 61, 62, 63,
      64, -1, -1, -1, -1, 69, 70, 71, 72, 73,
      -1, -1, -1, -1, -1, 79, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 98, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 112, -1,
      -1, 115, 116, -1, -1, -1, -1, -1, -1, -1,
      -1, 125, 126, -1, 128, 129, 130, 131, 132, 133,
       3, 4, 5, 6, 7, -1, 140, -1, -1, 12,
      -1, 145, 146, 147, 148, 149, -1, -1, -1, -1,
     154, -1, 156, 157, -1, -1, -1, -1, 31, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 42,
      43, -1, -1, -1, -1, 48, -1, 50, 51, 52,
      53, 54, 55, 56, 57, 58, 59, 60, 61, 62,
      63, 64, -1, -1, -1, -1, 69, 70, 71, 72,
      73, -1, -1, -1, -1, -1, 79, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 98, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 112,
      -1, -1, 115, 116, -1, -1, -1, -1, -1, -1,
      -1, -1, 125, 126, -1, 128, 129, 130, 131, 132,
     133, 3, 4, 5, 6, 7, -1, 140, -1, -1,
      12, -1, 145, 146, 147, 148, 149, -1, -1, -1,
      -1, 154, -1, 156, 157, -1, -1, -1, -1, 31,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      42, 43, -1, -1, -1, -1, 48, -1, 50, 51,
      52, 53, 54, 55, 56, 57, 58, 59, 60, 61,
      62, 63, 64, -1, -1, -1, -1, 69, 70, 71,
      72, 73, -1, -1, -1, -1, -1, 79, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 98, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
     112, -1, -1, 115, 116, -1, -1, -1, -1, -1,
      -1, -1, -1, 125, 126, -1, 128, 129, 130, 131,
     132, 133, 3, 4, 5, 6, 7, -1, 140, -1,
      -1, 12, -1, 145, 146, 147, 148, 149, -1, -1,
      -1, -1, 154, -1, 156, 157, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 42, 43, -1, -1, -1, -1, 48, -1, 50,
      51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
      61, 62, 63, 64, -1, -1, -1, -1, 69, 70,
      71, 72, 73, -1, -1, -1, -1, -1, 79, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 98, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 112, -1, -1, 115, 116, -1, -1, -1, -1,
      -1, -1, -1, -1, 125, 126, -1, 128, 129, 130,
     131, 132, 133, 3, 4, 5, 6, 7, -1, 140,
      -1, -1, 12, -1, 145, 146, 147, 148, 149, -1,
      -1, -1, -1, 154, -1, 156, 157, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 42, 43, -1, -1, -1, -1, 48, -1,
      50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
      60, 61, 62, 63, 64, -1, -1, -1, -1, 69,
      70, 71, 72, 73, -1, -1, -1, -1, -1, 79,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 98, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 112, -1, -1, 115, 116, -1, -1, -1,
      -1, -1, -1, -1, -1, 125, 126, -1, 128, 129,
     130, 131, 132, 133, -1, -1, -1, -1, -1, -1,
     140, -1, 9, 10, 11, 145, 146, 147, 148, 149,
      -1, -1, -1, -1, 154, -1, 156, 157, 25, -1,
      27, 28, 29, 30, 31, 32, 33, 34, 35, 36,
      37, 38, 39, 40, 41, 42, 43, 44, 45, 46,
      47, -1, 49, 9, 10, 11, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 25,
      -1, 27, 28, 29, 30, 31, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 41, 42, 43, 44, 45,
      46, 47, -1, 49, 9, 10, 11, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      25, -1, 27, 28, 29, 30, 31, 32, 33, 34,
      35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
      45, 46, 47, -1, 49, -1, -1, -1, -1, 9,
      10, 11, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 25, 153, 27, 28, 29,
      30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
      40, 41, 42, 43, 44, 45, 46, 47, -1, 49,
       9, 10, 11, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 25, 153, 27, 28,
      29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 41, 42, 43, 44, 45, 46, 47, -1,
      49, 9, 10, 11, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, 25, 153, 27,
      28, 29, 30, 31, 32, 33, 34, 35, 36, 37,
      38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
      -1, 49, -1, -1, -1, -1, -1, -1, 9, 10,
      11, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 153, 25, 26, 27, 28, 29, 30,
      31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
      41, 42, 43, 44, 45, 46, 47, -1, 49, 9,
      10, 11, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 153, 25, -1, 27, 28, 29,
      30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
      40, 41, 42, 43, 44, 45, 46, 47, -1, 49,
       9, 10, 11, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 153, 25, -1, 27, 28,
      29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 41, 42, 43, 44, 45, 46, 47, -1,
      49, -1, -1, 9, 10, 11, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 25,
     151, 27, 28, 29, 30, 31, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 41, 42, 43, 44, 45,
      46, 47, -1, 49, 9, 10, 11, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      25, 151, 27, 28, 29, 30, 31, 32, 33, 34,
      35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
      45, 46, 47, -1, 49, 9, 10, 11, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 25, 151, 27, 28, 29, 30, 31, 32, 33,
      34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
      44, 45, 46, 47, -1, 49, -1, -1, 9, 10,
      11, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 25, 151, 27, 28, 29, 30,
      31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
      41, 42, 43, 44, 45, 46, 47, -1, 49, 9,
      10, 11, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 25, 151, 27, 28, 29,
      30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
      40, 41, 42, 43, 44, 45, 46, 47, -1, 49,
      -1, 9, 10, 11, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 150, 25, -1, 27,
      28, 29, 30, 31, 32, 33, 34, 35, 36, 37,
      38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
      -1, 49, 9, 10, 11, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 25, 150,
      27, 28, 29, 30, 31, 32, 33, 34, 35, 36,
      37, 38, 39, 40, 41, 42, 43, 44, 45, 46,
      47, -1, 49, 9, 10, 11, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 25,
     150, 27, 28, 29, 30, 31, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 41, 42, 43, 44, 45,
      46, 47, -1, 49, -1, 9, 10, 11, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, 25, 150, 27, 28, 29, 30, 31, 32, 33,
      34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
      44, 45, 46, 47, -1, 49, 9, 10, 11, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, 25, 150, 27, 28, 29, 30, 31, 32,
      33, 34, 35, 36, 37, 38, 39, 40, 41, 42,
      43, 44, 45, 46, 47, -1, 49, 9, 10, 11,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 25, 150, 27, 28, 29, 30, 31,
      32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
      42, 43, 44, 45, 46, 47, -1, 49, -1, 9,
      10, 11, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 25, 150, 27, 28, 29,
      30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
      40, 41, 42, 43, 44, 45, 46, 47, -1, 49,
       9, 10, 11, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 25, 150, 27, 28,
      29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 41, 42, 43, 44, 45, 46, 47, -1,
      49, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 150, 9,
      10, 11, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 124, 25, 26, 27, 28, 29,
      30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
      40, 41, 42, 43, 44, 45, 46, 47, -1, 49,
       9, 10, 11, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 124, 25, -1, 27, 28,
      29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 41, 42, 43, 44, 45, 46, 47, -1,
      49, 10, 11, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, 25, -1, 27, 28,
      29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 41, 42, 43, 44, 45, 46, 47, 11,
      49, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 25, -1, 27, 28, 29, 30, 31,
      32, 33, 34, 35, 36, 37, 38, 39, 40, 41,
      42, 43, 44, 45, 46, 47, 25, 49, 27, 28,
      29, 30, 31, 32, 33, 34, 35, 36, 37, 38,
      39, 40, 41, 42, 43, 44, 45, 46, 47, -1,
      49, 27, 28, 29, 30, 31, 32, 33, 34, 35,
      36, 37, 38, 39, 40, 41, 42, 43, 44, 45,
      46, 47, -1, 49, 28, 29, 30, 31, 32, 33,
      34, 35, 36, 37, 38, 39, 40, 41, 42, 43,
      44, 45, 46, 47, -1, 49, 29, 30, 31, 32,
      33, 34, 35, 36, 37, 38, 39, 40, 41, 42,
      43, 44, 45, 46, 47, -1, 49
};



static const yytype_uint16 yystos[] =
{
       0, 159, 160, 0, 161, 3, 4, 5, 6, 7,
      12, 42, 43, 48, 50, 51, 52, 53, 54, 55,
      56, 57, 58, 59, 60, 61, 62, 63, 64, 65,
      69, 70, 71, 72, 73, 75, 79, 80, 81, 82,
      84, 86, 88, 91, 95, 96, 97, 98, 99, 100,
     101, 103, 104, 106, 110, 111, 112, 114, 115, 116,
     117, 118, 119, 120, 125, 126, 128, 129, 130, 131,
     132, 133, 140, 145, 146, 147, 148, 149, 151, 152,
     154, 156, 157, 162, 163, 168, 172, 173, 203, 204,
     206, 208, 211, 213, 270, 284, 287, 296, 307, 310,
     314, 315, 317, 318, 328, 329, 330, 331, 333, 334,
     335, 336, 342, 352, 355, 71, 112, 145, 284, 314,
     314, 149, 314, 314, 314, 314, 314, 314, 314, 281,
     314, 314, 314, 314, 314, 314, 314, 112, 145, 148,
     162, 296, 317, 318, 330, 317, 31, 314, 346, 347,
     314, 145, 148, 162, 296, 298, 299, 330, 334, 335,
     342, 149, 304, 149, 26, 266, 314, 180, 149, 149,
     149, 190, 149, 151, 314, 151, 314, 71, 71, 151,
     270, 314, 318, 191, 314, 148, 162, 166, 167, 73,
     154, 240, 241, 118, 118, 73, 242, 284, 149, 149,
     149, 149, 149, 149, 73, 78, 141, 142, 143, 348,
     349, 148, 152, 162, 162, 314, 169, 152, 78, 305,
     348, 78, 348, 148, 149, 8, 151, 71, 71, 31,
     205, 332, 144, 9, 10, 11, 25, 27, 28, 29,
      30, 31, 32, 33, 34, 35, 36, 37, 38, 39,
      40, 41, 42, 43, 44, 45, 46, 47, 49, 151,
      59, 60, 13, 14, 15, 16, 17, 18, 19, 20,
      21, 22, 23, 24, 149, 144, 61, 123, 61, 152,
     154, 335, 205, 314, 314, 148, 162, 144, 144, 316,
     318, 124, 155, 8, 312, 148, 162, 144, 273, 144,
     123, 335, 150, 314, 314, 8, 151, 172, 178, 267,
     268, 314, 270, 318, 149, 314, 151, 151, 151, 13,
     151, 151, 152, 151, 162, 90, 8, 151, 152, 315,
     318, 8, 151, 13, 8, 151, 205, 201, 202, 318,
     318, 353, 318, 150, 271, 346, 61, 123, 141, 349,
      72, 314, 318, 78, 141, 349, 162, 165, 151, 152,
     149, 150, 153, 170, 314, 156, 157, 71, 288, 71,
     121, 212, 210, 71, 149, 61, 71, 152, 328, 335,
     341, 342, 276, 314, 277, 26, 278, 274, 275, 314,
     314, 314, 314, 314, 314, 314, 314, 314, 314, 314,
     314, 314, 314, 314, 314, 314, 314, 314, 298, 31,
     314, 314, 314, 314, 314, 314, 314, 314, 314, 314,
     314, 314, 295, 71, 328, 341, 314, 337, 319, 337,
     314, 150, 162, 71, 31, 314, 31, 314, 162, 328,
     149, 306, 328, 300, 150, 150, 314, 82, 314, 151,
       8, 90, 90, 71, 222, 150, 42, 43, 61, 126,
     140, 145, 148, 162, 296, 307, 308, 309, 169, 90,
      71, 167, 314, 241, 308, 73, 149, 8, 150, 8,
     150, 150, 151, 125, 318, 343, 344, 150, 350, 71,
      61, 153, 153, 149, 160, 164, 290, 117, 171, 172,
     203, 204, 153, 31, 238, 239, 270, 318, 13, 145,
     148, 162, 297, 209, 121, 214, 207, 282, 337, 314,
     149, 149, 335, 314, 314, 280, 314, 314, 314, 63,
     318, 238, 149, 149, 155, 328, 338, 340, 341, 155,
     153, 316, 316, 124, 238, 338, 26, 174, 149, 150,
     182, 269, 188, 186, 13, 8, 150, 185, 308, 308,
     308, 311, 313, 149, 78, 148, 162, 144, 153, 71,
     153, 13, 283, 202, 151, 354, 149, 8, 150, 71,
      73, 74, 351, 314, 289, 153, 160, 238, 149, 316,
     150, 8, 308, 148, 162, 122, 215, 216, 297, 152,
     149, 126, 127, 235, 236, 237, 297, 155, 153, 292,
     291, 314, 26, 298, 150, 294, 293, 339, 320, 61,
     152, 31, 314, 150, 301, 176, 172, 181, 179, 267,
     314, 318, 31, 218, 318, 308, 71, 26, 172, 221,
      26, 152, 223, 124, 155, 8, 312, 311, 162, 71,
     102, 308, 235, 318, 345, 344, 13, 155, 155, 238,
     153, 150, 150, 31, 270, 318, 162, 216, 152, 8,
     243, 235, 150, 8, 31, 73, 238, 238, 279, 272,
     238, 238, 149, 324, 325, 327, 337, 314, 316, 302,
     169, 175, 314, 26, 172, 228, 151, 124, 217, 318,
     217, 13, 169, 151, 224, 151, 224, 308, 308, 150,
     149, 150, 343, 314, 153, 150, 151, 316, 243, 297,
      99, 104, 107, 108, 109, 110, 111, 112, 113, 153,
     244, 247, 260, 261, 262, 263, 265, 150, 104, 285,
     237, 73, 13, 150, 150, 314, 306, 150, 150, 326,
      61, 61, 321, 155, 153, 123, 303, 177, 229, 150,
     169, 183, 218, 150, 150, 308, 89, 224, 92, 93,
      94, 224, 153, 124, 192, 285, 150, 153, 71, 248,
     297, 245, 284, 263, 8, 151, 152, 149, 152, 31,
      73, 13, 308, 238, 337, 337, 123, 322, 338, 231,
      66, 67, 233, 151, 83, 267, 189, 187, 151, 92,
     151, 314, 26, 151, 227, 153, 308, 297, 152, 13,
       8, 151, 152, 249, 73, 264, 205, 71, 169, 31,
      73, 286, 169, 73, 13, 308, 150, 155, 155, 338,
      66, 67, 234, 149, 172, 151, 150, 26, 172, 220,
     220, 151, 227, 226, 193, 169, 308, 297, 71, 250,
     251, 252, 253, 255, 256, 257, 297, 13, 8, 151,
      71, 13, 153, 73, 8, 150, 153, 13, 308, 323,
     149, 26, 68, 314, 184, 169, 225, 169, 73, 153,
     153, 252, 151, 90, 105, 151, 144, 308, 73, 246,
     308, 31, 73, 308, 327, 314, 169, 151, 150, 26,
     172, 219, 87, 169, 150, 258, 263, 254, 297, 71,
      13, 149, 73, 150, 230, 169, 151, 194, 71, 8,
     308, 235, 26, 172, 85, 152, 297, 150, 232, 151,
     169, 151, 152, 259, 169, 153, 169, 195, 153, 102,
     196, 197, 198, 149, 198, 297, 199, 73, 150, 200,
     152, 169, 153
};
# 3093 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
static size_t
yysyntax_error (char *yyresult, int yystate, int zendchar)
{
  int yyn = yypact[yystate];

  if (! (-716 < yyn && yyn <= 5416))
    return 0;
  else
    {
      int yytype = ((unsigned int) (zendchar) <= 384 ? yytranslate[zendchar] : 2);
      size_t yysize0 = zend_yytnamerr (0, yytname[yytype]);
      size_t yysize = yysize0;
      size_t yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;
# 3120 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
      + sizeof yyexpecting - 1
      + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
         * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;



      int yyxbegin = yyn < 0 ? -yyn : 0;


      int yychecklim = 5416 - yyn + 1;
      int yyxend = yychecklim < 158 ? yychecklim : 158;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = __builtin_stpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
 if (yycheck[yyx + yyn] == yyx && yyx != 1)
   {
     if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
       {
  yycount = 1;
  yysize = yysize0;
  yyformat[sizeof yyunexpected - 1] = '\0';
  break;
       }
     yyarg[yycount++] = yytname[yyx];
     yysize1 = yysize + zend_yytnamerr (0, yytname[yyx]);
     yysize_overflow |= (yysize1 < yysize);
     yysize = yysize1;
     yyfmt = __builtin_stpcpy (yyfmt, yyprefix);
     yyprefix = yyor;
   }

      yyf = yyformat;
      yysize1 = yysize + strlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
 return ((size_t) -1);

      if (yyresult)
 {



   char *yyp = yyresult;
   int yyi = 0;
   while ((*yyp = *yyf) != '\0')
     {
       if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
  {
    yyp += zend_yytnamerr (yyp, yyarg[yyi++]);
    yyf += 2;
  }
       else
  {
    yyp++;
    yyf++;
  }
     }
 }
      return yysize;
    }
}
# 3203 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
static void
yydestruct (const char *yymsg, int yytype, znode *yyvaluep)







{
  ((void) (yyvaluep));

  if (!yymsg)
    yymsg = "Deleting";
  ;

  switch (yytype)
    {

      default:
 break;
    }
}
# 3236 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
int zendparse (void);
# 3263 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
int
zendparse (void)






{

int zendchar;


znode zendlval;


    int zendnerrs;

    int yystate;

    int yyerrstatus;
# 3293 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
    yytype_int16 yyssa[200];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;


    znode yyvsa[200];
    znode *yyvs;
    znode *yyvsp;

    size_t yystacksize;

  int yyn;
  int yyresult;

  int yytoken;


  znode yyval;



  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  size_t yymsg_alloc = sizeof yymsgbuf;






  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = 200;

  ;

  yystate = 0;
  yyerrstatus = 0;
  zendnerrs = 0;
  zendchar = (-2);





  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;




 yynewstate:


  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {

      size_t yysize = yyssp - yyss + 1;
# 3387 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
      if (10000 <= yystacksize)
 goto yyexhaustedlab;
      yystacksize *= 2;
      if (10000 < yystacksize)
 yystacksize = 10000;

      {
 yytype_int16 *yyss1 = yyss;
 union yyalloc *yyptr =
   (union yyalloc *) malloc (((yystacksize) * (sizeof (yytype_int16) + sizeof (znode)) + (sizeof (union yyalloc) - 1)));
 if (! yyptr)
   goto yyexhaustedlab;
 do { size_t yynewbytes; __builtin_memcpy (&yyptr->yyss_alloc, yyss, (yysize) * sizeof (*(yyss))); yyss = &yyptr->yyss_alloc; yynewbytes = yystacksize * sizeof (*yyss) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while ((0));
 do { size_t yynewbytes; __builtin_memcpy (&yyptr->yyvs_alloc, yyvs, (yysize) * sizeof (*(yyvs))); yyvs = &yyptr->yyvs_alloc; yynewbytes = yystacksize * sizeof (*yyvs) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while ((0));

 if (yyss1 != yyssa)
   free (yyss1);
      }



      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

     
                                     ;

      if (yyss + yystacksize - 1 <= yyssp)
 goto yyabortlab;
    }

  ;

  if (yystate == 3)
    goto yyacceptlab;

  goto yybackup;




yybackup:





  yyn = yypact[yystate];
  if (yyn == -716)
    goto yydefault;




  if (zendchar == (-2))
    {
      ;
      zendchar = zendlex (&zendlval);
    }

  if (zendchar <= 0)
    {
      zendchar = yytoken = 0;
      ;
    }
  else
    {
      yytoken = ((unsigned int) (zendchar) <= 384 ? yytranslate[zendchar] : 2);
      ;
    }



  yyn += yytoken;
  if (yyn < 0 || 5416 < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == -457)
 goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }



  if (yyerrstatus)
    yyerrstatus--;


  ;


  zendchar = (-2);

  yystate = yyn;
  *++yyvsp = zendlval;

  goto yynewstate;





yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;





yyreduce:

  yylen = yyr2[yyn];
# 3514 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
  yyval = yyvsp[1-yylen];


  ;
  switch (yyn)
    {
        case 2:
# 214 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_compilation(); }
    break;

  case 3:
# 218 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_extended_info(); }
    break;

  case 4:
# 218 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { if ((compiler_globals.active_op_array)->fn_flags & 0x10) { execute_new_code(); }; }
    break;

  case 6:
# 223 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 7:
# 224 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_build_namespace_name(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 8:
# 228 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_verify_namespace(); }
    break;

  case 9:
# 229 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_verify_namespace(); zend_do_early_binding(); }
    break;

  case 10:
# 230 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_verify_namespace(); zend_do_early_binding(); }
    break;

  case 11:
# 231 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_halt_compiler_register(); goto yyacceptlab; }
    break;

  case 12:
# 232 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 0 ); }
    break;

  case 13:
# 233 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_namespace(&(yyvsp[(2) - (3)]), 1 ); }
    break;

  case 14:
# 234 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_namespace(); }
    break;

  case 15:
# 235 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_namespace(((void *)0), 1 ); }
    break;

  case 16:
# 236 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_namespace(); }
    break;

  case 17:
# 237 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_verify_namespace(); }
    break;

  case 18:
# 238 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_verify_namespace(); }
    break;

  case 21:
# 247 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (1)]), ((void *)0), 0 ); }
    break;

  case 22:
# 248 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 ); }
    break;

  case 23:
# 249 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (2)]), ((void *)0), 1 ); }
    break;

  case 24:
# 250 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_use(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1 ); }
    break;

  case 25:
# 254 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) ); }
    break;

  case 26:
# 255 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_declare_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) ); }
    break;

  case 27:
# 259 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_extended_info(); }
    break;

  case 28:
# 259 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { if ((compiler_globals.active_op_array)->fn_flags & 0x10) { execute_new_code(); }; }
    break;

  case 33:
# 268 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_error((1<<6L), "__HALT_COMPILER() can only be used from the outermost scope"); }
    break;

  case 34:
# 273 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { if (((compiler_globals.declarables).ticks).value.lval) { zend_do_ticks(); }; }
    break;

  case 35:
# 274 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_label(&(yyvsp[(1) - (2)]) ); }
    break;

  case 37:
# 279 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) ); }
    break;

  case 38:
# 279 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (6)]), 1 ); }
    break;

  case 39:
# 279 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_if_end(); }
    break;

  case 40:
# 280 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(3) - (5)]), &(yyvsp[(4) - (5)]) ); }
    break;

  case 41:
# 280 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(4) - (7)]), 1 ); }
    break;

  case 42:
# 280 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_if_end(); }
    break;

  case 43:
# 281 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (2)]).u.op.opline_num = get_next_op_number((compiler_globals.active_op_array)); }
    break;

  case 44:
# 281 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_while_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) ); }
    break;

  case 45:
# 281 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_while_end(&(yyvsp[(1) - (7)]), &(yyvsp[(5) - (7)]) ); }
    break;

  case 46:
# 282 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number((compiler_globals.active_op_array)); zend_do_do_while_begin(); }
    break;

  case 47:
# 282 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyvsp[(5) - (5)]).u.op.opline_num = get_next_op_number((compiler_globals.active_op_array)); }
    break;

  case 48:
# 282 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_do_while_end(&(yyvsp[(1) - (9)]), &(yyvsp[(5) - (9)]), &(yyvsp[(7) - (9)]) ); }
    break;

  case 49:
# 286 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(3) - (4)]) ); (yyvsp[(4) - (4)]).u.op.opline_num = get_next_op_number((compiler_globals.active_op_array)); }
    break;

  case 50:
# 288 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_extended_info(); zend_do_for_cond(&(yyvsp[(6) - (7)]), &(yyvsp[(7) - (7)]) ); }
    break;

  case 51:
# 290 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(9) - (10)]) ); zend_do_for_before_statement(&(yyvsp[(4) - (10)]), &(yyvsp[(7) - (10)]) ); }
    break;

  case 52:
# 291 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_for_end(&(yyvsp[(7) - (12)]) ); }
    break;

  case 53:
# 292 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_switch_cond(&(yyvsp[(3) - (4)]) ); }
    break;

  case 54:
# 292 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_switch_end(&(yyvsp[(6) - (6)]) ); }
    break;

  case 55:
# 293 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_brk_cont(50, ((void *)0) ); }
    break;

  case 56:
# 294 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_brk_cont(50, &(yyvsp[(2) - (3)]) ); }
    break;

  case 57:
# 295 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_brk_cont(51, ((void *)0) ); }
    break;

  case 58:
# 296 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_brk_cont(51, &(yyvsp[(2) - (3)]) ); }
    break;

  case 59:
# 297 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_return(((void *)0), 0 ); }
    break;

  case 60:
# 298 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 0 ); }
    break;

  case 61:
# 299 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_return(&(yyvsp[(2) - (3)]), 1 ); }
    break;

  case 65:
# 303 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) ); }
    break;

  case 66:
# 304 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) ); }
    break;

  case 68:
# 307 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 1 ); }
    break;

  case 69:
# 308 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) ); }
    break;

  case 70:
# 309 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) ); }
    break;

  case 71:
# 311 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_foreach_begin(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]), 0 ); }
    break;

  case 72:
# 312 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(6) - (8)])); zend_do_foreach_cont(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]), &(yyvsp[(4) - (8)]), &(yyvsp[(6) - (8)]), &(yyvsp[(7) - (8)]) ); }
    break;

  case 73:
# 313 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_foreach_end(&(yyvsp[(1) - (10)]), &(yyvsp[(4) - (10)]) ); }
    break;

  case 74:
# 314 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (1)]).u.op.opline_num = get_next_op_number((compiler_globals.active_op_array)); zend_do_declare_begin(); }
    break;

  case 75:
# 314 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_declare_end(&(yyvsp[(1) - (6)]) ); }
    break;

  case 77:
# 316 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_try(&(yyvsp[(1) - (1)]) ); }
    break;

  case 78:
# 317 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_initialize_try_catch_element(&(yyvsp[(1) - (7)]) ); }
    break;

  case 79:
# 318 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_first_catch(&(yyvsp[(7) - (9)]) ); }
    break;

  case 80:
# 319 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (12)]), &(yyvsp[(9) - (12)]), &(yyvsp[(11) - (12)]), &(yyvsp[(7) - (12)]) ); }
    break;

  case 81:
# 320 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (16)]) ); }
    break;

  case 82:
# 321 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_mark_last_catch(&(yyvsp[(7) - (18)]), &(yyvsp[(18) - (18)]) ); }
    break;

  case 83:
# 322 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_throw(&(yyvsp[(2) - (3)]) ); }
    break;

  case 84:
# 323 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_goto(&(yyvsp[(2) - (3)]) ); }
    break;

  case 85:
# 328 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 86:
# 329 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = -1; }
    break;

  case 87:
# 333 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 88:
# 334 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 89:
# 339 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = get_next_op_number((compiler_globals.active_op_array)); }
    break;

  case 90:
# 339 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_catch(&(yyvsp[(1) - (6)]), &(yyvsp[(3) - (6)]), &(yyvsp[(5) - (6)]), ((void *)0) ); }
    break;

  case 91:
# 339 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_catch(&(yyvsp[(1) - (10)]) ); }
    break;

  case 94:
# 349 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), 6, 0 ); zend_do_unset(&(yyvsp[(1) - (1)]) ); }
    break;

  case 95:
# 353 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { if (((compiler_globals.declarables).ticks).value.lval) { zend_do_ticks(); }; }
    break;

  case 96:
# 357 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { if (((compiler_globals.declarables).ticks).value.lval) { zend_do_ticks(); }; }
    break;

  case 97:
# 362 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = 0; }
    break;

  case 98:
# 363 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = 1; }
    break;

  case 99:
# 368 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0, (yyvsp[(2) - (3)]).op_type, ((void *)0) ); }
    break;

  case 100:
# 369 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) ); }
    break;

  case 101:
# 374 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 102:
# 378 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (8)]), &(yyvsp[(2) - (8)]) ); }
    break;

  case 103:
# 380 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_class_declaration(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]), ((void *)0) ); }
    break;

  case 104:
# 384 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_class_declaration(&(yyvsp[(1) - (7)]), &(yyvsp[(2) - (7)]) ); }
    break;

  case 105:
# 389 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = (compiler_globals.zend_lineno); (yyval).EA = 0; }
    break;

  case 106:
# 390 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = (compiler_globals.zend_lineno); (yyval).EA = 0x20; }
    break;

  case 107:
# 391 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = (compiler_globals.zend_lineno); (yyval).EA = 0x120; }
    break;

  case 108:
# 392 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = (compiler_globals.zend_lineno); (yyval).EA = 0x40; }
    break;

  case 109:
# 396 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<3); }
    break;

  case 110:
# 397 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(2) - (2)]) ); }
    break;

  case 111:
# 401 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = (compiler_globals.zend_lineno); (yyval).EA = 0x80; }
    break;

  case 116:
# 415 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(1) - (1)]) ); }
    break;

  case 117:
# 416 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_implements_interface(&(yyvsp[(3) - (3)]) ); }
    break;

  case 118:
# 420 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<3); }
    break;

  case 119:
# 421 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 120:
# 426 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (1)])); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 121:
# 427 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(2) - (2)])); (yyval) = (yyvsp[(2) - (2)]); (yyval).EA |= (1<<5); }
    break;

  case 128:
# 449 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 129:
# 450 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_declare_stmt(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) ); }
    break;

  case 130:
# 455 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 131:
# 456 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 132:
# 457 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (4)]); }
    break;

  case 133:
# 458 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (5)]); }
    break;

  case 134:
# 463 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<3); }
    break;

  case 135:
# 464 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_extended_info(); zend_do_case_before_statement(&(yyvsp[(1) - (4)]), &(yyvsp[(2) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 136:
# 464 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (6)]) ); (yyval).op_type = (1<<0); }
    break;

  case 137:
# 465 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_extended_info(); zend_do_default_before_statement(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]) ); }
    break;

  case 138:
# 465 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_case_after_statement(&(yyval), &(yyvsp[(2) - (5)]) ); (yyval).op_type = (1<<0); }
    break;

  case 144:
# 484 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) ); }
    break;

  case 145:
# 484 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (7)]), 0 ); }
    break;

  case 147:
# 490 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_if_cond(&(yyvsp[(4) - (6)]), &(yyvsp[(5) - (6)]) ); }
    break;

  case 148:
# 490 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_if_after_statement(&(yyvsp[(5) - (8)]), 0 ); }
    break;

  case 155:
# 513 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<3); (yyval).u.op.num=1; zend_do_receive_arg(63, &(yyvsp[(2) - (2)]), &(yyval), ((void *)0), &(yyvsp[(1) - (2)]), 0 ); }
    break;

  case 156:
# 514 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<3); (yyval).u.op.num=1; zend_do_receive_arg(63, &(yyvsp[(3) - (3)]), &(yyval), ((void *)0), &(yyvsp[(1) - (3)]), 1 ); }
    break;

  case 157:
# 515 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<3); (yyval).u.op.num=1; zend_do_receive_arg(64, &(yyvsp[(3) - (5)]), &(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(1) - (5)]), 1 ); }
    break;

  case 158:
# 516 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<3); (yyval).u.op.num=1; zend_do_receive_arg(64, &(yyvsp[(2) - (4)]), &(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 0 ); }
    break;

  case 159:
# 517 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (4)]); (yyval).u.op.num++; zend_do_receive_arg(63, &(yyvsp[(4) - (4)]), &(yyval), ((void *)0), &(yyvsp[(3) - (4)]), 0 ); }
    break;

  case 160:
# 518 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (5)]); (yyval).u.op.num++; zend_do_receive_arg(63, &(yyvsp[(5) - (5)]), &(yyval), ((void *)0), &(yyvsp[(3) - (5)]), 1 ); }
    break;

  case 161:
# 519 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (7)]); (yyval).u.op.num++; zend_do_receive_arg(64, &(yyvsp[(5) - (7)]), &(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(3) - (7)]), 1 ); }
    break;

  case 162:
# 520 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval)=(yyvsp[(1) - (6)]); (yyval).u.op.num++; zend_do_receive_arg(64, &(yyvsp[(4) - (6)]), &(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 0 ); }
    break;

  case 163:
# 525 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<3); }
    break;

  case 164:
# 526 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<0); ((yyval).u.constant).type=4; }
    break;

  case 165:
# 527 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<0); ((yyval).u.constant).type=10; }
    break;

  case 166:
# 528 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 167:
# 533 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 168:
# 534 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0; }
    break;

  case 169:
# 539 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 1; zend_do_pass_param(&(yyvsp[(1) - (1)]), 65, ((yyval).u.constant).value.lval ); }
    break;

  case 170:
# 540 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 1; zend_do_pass_param(&(yyvsp[(1) - (1)]), 66, ((yyval).u.constant).value.lval ); }
    break;

  case 171:
# 541 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 1; zend_do_pass_param(&(yyvsp[(2) - (2)]), 67, ((yyval).u.constant).value.lval ); }
    break;

  case 172:
# 542 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval=((yyvsp[(1) - (3)]).u.constant).value.lval+1; zend_do_pass_param(&(yyvsp[(3) - (3)]), 65, ((yyval).u.constant).value.lval ); }
    break;

  case 173:
# 543 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval=((yyvsp[(1) - (3)]).u.constant).value.lval+1; zend_do_pass_param(&(yyvsp[(3) - (3)]), 66, ((yyval).u.constant).value.lval ); }
    break;

  case 174:
# 544 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval=((yyvsp[(1) - (4)]).u.constant).value.lval+1; zend_do_pass_param(&(yyvsp[(4) - (4)]), 67, ((yyval).u.constant).value.lval ); }
    break;

  case 175:
# 548 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(3) - (3)]), ((void *)0), 0x40000000 ); }
    break;

  case 176:
# 549 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_global_variable(&(yyvsp[(1) - (1)]), ((void *)0), 0x40000000 ); }
    break;

  case 177:
# 554 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 178:
# 555 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 179:
# 556 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 180:
# 561 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (3)]), ((void *)0), 0x20000000 ); }
    break;

  case 181:
# 562 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), 0x20000000 ); }
    break;

  case 182:
# 563 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (1)]), ((void *)0), 0x20000000 ); }
    break;

  case 183:
# 564 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_static_variable(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0x20000000 ); }
    break;

  case 186:
# 576 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (compiler_globals.access_type) = ((yyvsp[(1) - (1)]).u.constant).value.lval; }
    break;

  case 190:
# 579 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_function_declaration(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]), 1, (yyvsp[(3) - (4)]).op_type, &(yyvsp[(1) - (4)]) ); }
    break;

  case 191:
# 580 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_abstract_method(&(yyvsp[(4) - (9)]), &(yyvsp[(1) - (9)]), &(yyvsp[(9) - (9)]) ); zend_do_end_function_declaration(&(yyvsp[(2) - (9)]) ); }
    break;

  case 193:
# 588 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_implements_trait(&(yyvsp[(1) - (1)]) ); }
    break;

  case 194:
# 589 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_implements_trait(&(yyvsp[(3) - (3)]) ); }
    break;

  case 201:
# 608 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_add_trait_precedence(&(yyvsp[(1) - (2)]) ); }
    break;

  case 202:
# 609 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_add_trait_alias(&(yyvsp[(1) - (2)]) ); }
    break;

  case 203:
# 613 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_prepare_trait_precedence(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 204:
# 617 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(1) - (1)]), 4, 1 ); zend_init_list(&(yyval).u.op.ptr, ((yyvsp[(1) - (1)]).u.constant).value.str.val ); }
    break;

  case 205:
# 618 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_resolve_class_name(&(yyvsp[(3) - (3)]), 4, 1 ); zend_add_to_list(&(yyvsp[(1) - (3)]).u.op.ptr, ((yyvsp[(3) - (3)]).u.constant).value.str.val ); (yyval) = (yyvsp[(1) - (3)]); }
    break;

  case 206:
# 622 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), ((void *)0), &(yyvsp[(1) - (1)]) ); }
    break;

  case 207:
# 623 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 208:
# 627 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_prepare_reference(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 209:
# 631 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_prepare_trait_alias(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]), &(yyvsp[(4) - (4)]) ); }
    break;

  case 210:
# 632 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_prepare_trait_alias(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), ((void *)0) ); }
    break;

  case 211:
# 636 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0x0; }
    break;

  case 212:
# 637 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 213:
# 641 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0x02; }
    break;

  case 214:
# 642 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0; }
    break;

  case 215:
# 646 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 216:
# 647 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0x100; }
    break;

  case 217:
# 651 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0x100; }
    break;

  case 218:
# 652 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); if (!(((yyval).u.constant).value.lval & (0x100 | 0x200 | 0x400))) { ((yyval).u.constant).value.lval |= 0x100; } }
    break;

  case 219:
# 656 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 220:
# 657 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = zend_do_verify_access_types(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)])); }
    break;

  case 221:
# 661 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0x100; }
    break;

  case 222:
# 662 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0x200; }
    break;

  case 223:
# 663 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0x400; }
    break;

  case 224:
# 664 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0x01; }
    break;

  case 225:
# 665 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0x02; }
    break;

  case 226:
# 666 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 0x04; }
    break;

  case 227:
# 670 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (3)]), ((void *)0), (compiler_globals.access_type) ); }
    break;

  case 228:
# 671 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]), (compiler_globals.access_type) ); }
    break;

  case 229:
# 672 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (1)]), ((void *)0), (compiler_globals.access_type) ); }
    break;

  case 230:
# 673 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_declare_property(&(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), (compiler_globals.access_type) ); }
    break;

  case 231:
# 677 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)]) ); }
    break;

  case 232:
# 678 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_declare_class_constant(&(yyvsp[(2) - (4)]), &(yyvsp[(4) - (4)]) ); }
    break;

  case 233:
# 682 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(3) - (3)]) ); }
    break;

  case 234:
# 683 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_echo(&(yyvsp[(1) - (1)]) ); }
    break;

  case 235:
# 688 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<0); ((yyval).u.constant).type = 3; ((yyval).u.constant).value.lval = 1; }
    break;

  case 236:
# 689 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 237:
# 693 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_free(&(yyvsp[(1) - (2)]) ); }
    break;

  case 238:
# 693 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(4) - (4)]); }
    break;

  case 239:
# 694 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 240:
# 698 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_list_init(); }
    break;

  case 241:
# 698 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_list_end(&(yyval), &(yyvsp[(7) - (7)]) ); }
    break;

  case 242:
# 699 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_assign(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 243:
# 700 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (4)])); zend_do_end_variable_parse(&(yyvsp[(4) - (4)]), 1, 1 ); zend_do_end_variable_parse(&(yyvsp[(1) - (4)]), 1, 0 ); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); }
    break;

  case 244:
# 701 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_error((1<<13L), "Assigning the return value of new by reference is deprecated"); zend_check_writable_variable(&(yyvsp[(1) - (5)])); zend_do_extended_fcall_begin(); zend_do_begin_new_object(&(yyvsp[(4) - (5)]), &(yyvsp[(5) - (5)]) ); }
    break;

  case 245:
# 701 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_new_object(&(yyvsp[(3) - (7)]), &(yyvsp[(4) - (7)]), &(yyvsp[(7) - (7)]) ); zend_do_extended_fcall_end(); zend_do_end_variable_parse(&(yyvsp[(1) - (7)]), 1, 0 ); (yyvsp[(3) - (7)]).EA = (1<<6); zend_do_assign_ref(&(yyval), &(yyvsp[(1) - (7)]), &(yyvsp[(3) - (7)]) ); }
    break;

  case 246:
# 702 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_extended_fcall_begin(); zend_do_begin_new_object(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); }
    break;

  case 247:
# 702 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_new_object(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]) ); zend_do_extended_fcall_end();}
    break;

  case 248:
# 703 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_clone(&(yyval), &(yyvsp[(2) - (2)]) ); }
    break;

  case 249:
# 704 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), 2, 0 ); zend_do_binary_assign_op(23, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 250:
# 705 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), 2, 0 ); zend_do_binary_assign_op(24, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 251:
# 706 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), 2, 0 ); zend_do_binary_assign_op(25, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 252:
# 707 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), 2, 0 ); zend_do_binary_assign_op(26, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 253:
# 708 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), 2, 0 ); zend_do_binary_assign_op(30, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 254:
# 709 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), 2, 0 ); zend_do_binary_assign_op(27, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 255:
# 710 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), 2, 0 ); zend_do_binary_assign_op(32, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 256:
# 711 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), 2, 0 ); zend_do_binary_assign_op(31, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 257:
# 712 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), 2, 0 ); zend_do_binary_assign_op(33, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 258:
# 713 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), 2, 0 ); zend_do_binary_assign_op(28, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 259:
# 714 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_check_writable_variable(&(yyvsp[(1) - (3)])); zend_do_end_variable_parse(&(yyvsp[(1) - (3)]), 2, 0 ); zend_do_binary_assign_op(29, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 260:
# 715 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), 36 ); }
    break;

  case 261:
# 716 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), 34 ); }
    break;

  case 262:
# 717 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_post_incdec(&(yyval), &(yyvsp[(1) - (2)]), 37 ); }
    break;

  case 263:
# 718 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_pre_incdec(&(yyval), &(yyvsp[(2) - (2)]), 35 ); }
    break;

  case 264:
# 719 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); }
    break;

  case 265:
# 719 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) ); }
    break;

  case 266:
# 720 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); }
    break;

  case 267:
# 720 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) ); }
    break;

  case 268:
# 721 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_boolean_or_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); }
    break;

  case 269:
# 721 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_boolean_or_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) ); }
    break;

  case 270:
# 722 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); }
    break;

  case 271:
# 722 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(4) - (4)]), &(yyvsp[(2) - (4)]) ); }
    break;

  case 272:
# 723 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(14, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 273:
# 724 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(9, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 274:
# 725 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(10, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 275:
# 726 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(11, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 276:
# 727 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(8, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 277:
# 728 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(1, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 278:
# 729 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(2, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 279:
# 730 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(3, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 280:
# 731 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(4, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 281:
# 732 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(5, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 282:
# 733 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(6, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 283:
# 734 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(7, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 284:
# 735 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { { zval *__z = (&(yyvsp[(1) - (2)]).u.constant); (*__z).value.lval = 0; (*__z).type = 1; }; if ((yyvsp[(2) - (2)]).op_type == (1<<0)) { add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant ); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = (1<<0); (&(yyvsp[(1) - (2)]).u.constant)->refcount__gc = 1; (&(yyvsp[(1) - (2)]).u.constant)->is_ref__gc = 0;; zend_do_binary_op(1, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); } }
    break;

  case 285:
# 736 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { { zval *__z = (&(yyvsp[(1) - (2)]).u.constant); (*__z).value.lval = 0; (*__z).type = 1; }; if ((yyvsp[(2) - (2)]).op_type == (1<<0)) { sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant ); (yyval) = (yyvsp[(2) - (2)]); } else { (yyvsp[(1) - (2)]).op_type = (1<<0); (&(yyvsp[(1) - (2)]).u.constant)->refcount__gc = 1; (&(yyvsp[(1) - (2)]).u.constant)->is_ref__gc = 0;; zend_do_binary_op(2, &(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); } }
    break;

  case 286:
# 737 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_unary_op(13, &(yyval), &(yyvsp[(2) - (2)]) ); }
    break;

  case 287:
# 738 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_unary_op(12, &(yyval), &(yyvsp[(2) - (2)]) ); }
    break;

  case 288:
# 739 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(15, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 289:
# 740 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(16, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 290:
# 741 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(17, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 291:
# 742 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(18, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 292:
# 743 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(19, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 293:
# 744 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(20, &(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 294:
# 745 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(19, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) ); }
    break;

  case 295:
# 746 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_binary_op(20, &(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]) ); }
    break;

  case 296:
# 747 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_instanceof(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), 0 ); }
    break;

  case 297:
# 748 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 298:
# 749 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_qm_op(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); }
    break;

  case 299:
# 750 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_qm_true(&(yyvsp[(4) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(5) - (5)]) ); }
    break;

  case 300:
# 751 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_qm_false(&(yyval), &(yyvsp[(7) - (7)]), &(yyvsp[(2) - (7)]), &(yyvsp[(5) - (7)]) ); }
    break;

  case 301:
# 752 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_jmp_set(&(yyvsp[(1) - (3)]), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 302:
# 753 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_jmp_set_else(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(2) - (5)]), &(yyvsp[(3) - (5)]) ); }
    break;

  case 303:
# 754 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 304:
# 755 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), 1 ); }
    break;

  case 305:
# 756 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), 2 ); }
    break;

  case 306:
# 757 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), 6 ); }
    break;

  case 307:
# 758 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), 4 ); }
    break;

  case 308:
# 759 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), 5 ); }
    break;

  case 309:
# 760 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), 3 ); }
    break;

  case 310:
# 761 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_cast(&(yyval), &(yyvsp[(2) - (2)]), 0 ); }
    break;

  case 311:
# 762 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_exit(&(yyval), &(yyvsp[(2) - (2)]) ); }
    break;

  case 312:
# 763 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_silence(&(yyvsp[(1) - (1)]) ); }
    break;

  case 313:
# 763 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_silence(&(yyvsp[(1) - (3)]) ); (yyval) = (yyvsp[(3) - (3)]); }
    break;

  case 314:
# 764 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 315:
# 765 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 316:
# 766 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 317:
# 767 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_shell_exec(&(yyval), &(yyvsp[(2) - (3)]) ); }
    break;

  case 318:
# 768 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_print(&(yyval), &(yyvsp[(2) - (2)]) ); }
    break;

  case 319:
# 769 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]).op_type, 0 ); }
    break;

  case 320:
# 770 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(1) - (10)]) ); (yyval) = (yyvsp[(4) - (10)]); }
    break;

  case 321:
# 771 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_lambda_function_declaration(&(yyval), &(yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]).op_type, 1 ); }
    break;

  case 322:
# 772 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_declaration(&(yyvsp[(2) - (11)]) ); (yyval) = (yyvsp[(5) - (11)]); }
    break;

  case 323:
# 776 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).u.op.opline_num = (compiler_globals.zend_lineno); }
    break;

  case 326:
# 785 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(3) - (3)]), 0 ); }
    break;

  case 327:
# 786 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(4) - (4)]), 1 ); }
    break;

  case 328:
# 787 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(1) - (1)]), 0 ); }
    break;

  case 329:
# 788 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_lexical_variable(&(yyvsp[(2) - (2)]), 1 ); }
    break;

  case 330:
# 792 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyvsp[(2) - (2)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (2)]), 1 ); }
    break;

  case 331:
# 794 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, (yyvsp[(2) - (5)]).u.op.opline_num ); zend_do_extended_fcall_end(); }
    break;

  case 332:
# 795 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).op_type = (1<<0); do { zval *__z = (&(yyvsp[(1) - (4)]).u.constant); (*__z).value.str.len = 0; (*__z).value.str.val = _estrndup((""), (sizeof("")-1) ); (*__z).type = 6; } while (0); zend_do_build_namespace_name(&(yyvsp[(1) - (4)]), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(1) - (4)]), 0 ); }
    break;

  case 333:
# 797 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), 0, (yyvsp[(4) - (7)]).u.op.opline_num ); zend_do_extended_fcall_end(); }
    break;

  case 334:
# 798 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyvsp[(3) - (3)]).u.op.opline_num = zend_do_begin_function_call(&(yyvsp[(2) - (3)]), 0 ); }
    break;

  case 335:
# 800 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(2) - (6)]), &(yyval), &(yyvsp[(5) - (6)]), 0, (yyvsp[(3) - (6)]).u.op.opline_num ); zend_do_extended_fcall_end(); }
    break;

  case 336:
# 801 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyvsp[(4) - (4)]).u.op.opline_num = zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 337:
# 803 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_call((yyvsp[(4) - (7)]).u.op.opline_num?((void *)0):&(yyvsp[(3) - (7)]), &(yyval), &(yyvsp[(6) - (7)]), (yyvsp[(4) - (7)]).u.op.opline_num, (yyvsp[(4) - (7)]).u.op.opline_num ); zend_do_extended_fcall_end();}
    break;

  case 338:
# 804 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), 0, 0 ); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 339:
# 806 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_call(((void *)0), &(yyval), &(yyvsp[(6) - (7)]), 1, 1 ); zend_do_extended_fcall_end();}
    break;

  case 340:
# 807 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 341:
# 809 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_call(((void *)0), &(yyval), &(yyvsp[(6) - (7)]), 1, 1 ); zend_do_extended_fcall_end();}
    break;

  case 342:
# 810 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(3) - (4)]), 0, 0 ); zend_do_begin_class_member_function_call(&(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 343:
# 812 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_call(((void *)0), &(yyval), &(yyvsp[(6) - (7)]), 1, 1 ); zend_do_extended_fcall_end();}
    break;

  case 344:
# 813 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (2)]), 0, 0 ); zend_do_begin_dynamic_function_call(&(yyvsp[(1) - (2)]), 0 ); }
    break;

  case 345:
# 815 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (5)]), &(yyval), &(yyvsp[(4) - (5)]), 0, 1 ); zend_do_extended_fcall_end();}
    break;

  case 346:
# 819 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<0); do { const char *__s=("static"); int __l=sizeof("static")-1; zval *__z = (&(yyval).u.constant); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);}
    break;

  case 347:
# 820 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 348:
# 821 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<0); do { zval *__z = (&(yyval).u.constant); (*__z).value.str.len = 0; (*__z).value.str.val = _estrndup((""), (sizeof("")-1) ); (*__z).type = 6; } while (0); zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) ); }
    break;

  case 349:
# 822 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { char *tmp = _estrndup((((yyvsp[(2) - (2)]).u.constant).value.str.val), (((yyvsp[(2) - (2)]).u.constant).value.str.len+1) ); memcpy(&(tmp[1]), ((yyvsp[(2) - (2)]).u.constant).value.str.val, ((yyvsp[(2) - (2)]).u.constant).value.str.len+1); tmp[0] = '\\'; _efree((((yyvsp[(2) - (2)]).u.constant).value.str.val) ); ((yyvsp[(2) - (2)]).u.constant).value.str.val = tmp; ++((yyvsp[(2) - (2)]).u.constant).value.str.len; (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 350:
# 826 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 351:
# 827 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<0); do { zval *__z = (&(yyval).u.constant); (*__z).value.str.len = 0; (*__z).value.str.val = _estrndup((""), (sizeof("")-1) ); (*__z).type = 6; } while (0); zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) ); }
    break;

  case 352:
# 828 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { char *tmp = _estrndup((((yyvsp[(2) - (2)]).u.constant).value.str.val), (((yyvsp[(2) - (2)]).u.constant).value.str.len+1) ); memcpy(&(tmp[1]), ((yyvsp[(2) - (2)]).u.constant).value.str.val, ((yyvsp[(2) - (2)]).u.constant).value.str.len+1); tmp[0] = '\\'; _efree((((yyvsp[(2) - (2)]).u.constant).value.str.val) ); ((yyvsp[(2) - (2)]).u.constant).value.str.val = tmp; ++((yyvsp[(2) - (2)]).u.constant).value.str.len; (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 353:
# 834 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) ); }
    break;

  case 354:
# 835 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), 0, 0 ); zend_do_fetch_class(&(yyval), &(yyvsp[(1) - (1)]) ); }
    break;

  case 355:
# 840 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) ); }
    break;

  case 356:
# 841 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) ); }
    break;

  case 357:
# 842 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) ); (yyval).EA = (1<<0); }
    break;

  case 358:
# 843 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 361:
# 854 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) ); }
    break;

  case 362:
# 858 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = (1<<3); }
    break;

  case 363:
# 859 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { memset(&(yyval), 0, sizeof(znode)); (yyval).op_type = (1<<3); }
    break;

  case 364:
# 860 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 365:
# 864 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { do { zval *__z = (&(yyval).u.constant); (*__z).value.str.len = 0; (*__z).value.str.val = _estrndup((""), (sizeof("")-1) ); (*__z).type = 6; } while (0); (&(yyval).u.constant)->refcount__gc = 1; (&(yyval).u.constant)->is_ref__gc = 0;; (yyval).op_type = (1<<0); }
    break;

  case 366:
# 865 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 367:
# 866 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 368:
# 871 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval=0; }
    break;

  case 369:
# 872 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 370:
# 877 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 371:
# 878 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 372:
# 879 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 373:
# 880 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 374:
# 881 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 375:
# 882 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 376:
# 883 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 377:
# 884 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 378:
# 885 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 379:
# 886 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 380:
# 887 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 381:
# 888 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); (compiler_globals.heredoc) = ((yyvsp[(1) - (3)]).u.constant).value.str.val; (compiler_globals.heredoc_len) = ((yyvsp[(1) - (3)]).u.constant).value.str.len; }
    break;

  case 382:
# 889 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { do { zval *__z = (&(yyval).u.constant); (*__z).value.str.len = 0; (*__z).value.str.val = _estrndup((""), (sizeof("")-1) ); (*__z).type = 6; } while (0); (&(yyval).u.constant)->refcount__gc = 1; (&(yyval).u.constant)->is_ref__gc = 0;; (yyval).op_type = (1<<0); (compiler_globals.heredoc) = ((yyvsp[(1) - (2)]).u.constant).value.str.val; (compiler_globals.heredoc_len) = ((yyvsp[(1) - (2)]).u.constant).value.str.len; }
    break;

  case 383:
# 894 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 384:
# 895 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), ((void *)0), &(yyvsp[(1) - (1)]), (1<<0), 1 ); }
    break;

  case 385:
# 896 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<0); do { zval *__z = (&(yyval).u.constant); (*__z).value.str.len = 0; (*__z).value.str.val = _estrndup((""), (sizeof("")-1) ); (*__z).type = 6; } while (0); zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) ); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), ((void *)0), &(yyvsp[(3) - (3)]), (1<<0), 0 ); }
    break;

  case 386:
# 897 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { char *tmp = _estrndup((((yyvsp[(2) - (2)]).u.constant).value.str.val), (((yyvsp[(2) - (2)]).u.constant).value.str.len+1) ); memcpy(&(tmp[1]), ((yyvsp[(2) - (2)]).u.constant).value.str.val, ((yyvsp[(2) - (2)]).u.constant).value.str.len+1); tmp[0] = '\\'; _efree((((yyvsp[(2) - (2)]).u.constant).value.str.val) ); ((yyvsp[(2) - (2)]).u.constant).value.str.val = tmp; ++((yyvsp[(2) - (2)]).u.constant).value.str.len; zend_do_fetch_constant(&(yyval), ((void *)0), &(yyvsp[(2) - (2)]), (1<<0), 0 ); }
    break;

  case 387:
# 898 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { { zval *__z = (&(yyvsp[(1) - (2)]).u.constant); (*__z).value.lval = 0; (*__z).type = 1; }; add_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant ); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 388:
# 899 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { { zval *__z = (&(yyvsp[(1) - (2)]).u.constant); (*__z).value.lval = 0; (*__z).type = 1; }; sub_function(&(yyvsp[(2) - (2)]).u.constant, &(yyvsp[(1) - (2)]).u.constant, &(yyvsp[(2) - (2)]).u.constant ); (yyval) = (yyvsp[(2) - (2)]); }
    break;

  case 389:
# 900 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); ((yyval).u.constant).type = 9; }
    break;

  case 390:
# 901 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); ((yyval).u.constant).type = 9; }
    break;

  case 391:
# 902 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 392:
# 906 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), (1<<0), 0 ); }
    break;

  case 393:
# 910 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 394:
# 911 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 395:
# 912 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), ((void *)0), &(yyvsp[(1) - (1)]), (1<<1), 1 ); }
    break;

  case 396:
# 913 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<0); do { zval *__z = (&(yyval).u.constant); (*__z).value.str.len = 0; (*__z).value.str.val = _estrndup((""), (sizeof("")-1) ); (*__z).type = 6; } while (0); zend_do_build_namespace_name(&(yyval), &(yyval), &(yyvsp[(3) - (3)]) ); (yyvsp[(3) - (3)]) = (yyval); zend_do_fetch_constant(&(yyval), ((void *)0), &(yyvsp[(3) - (3)]), (1<<1), 0 ); }
    break;

  case 397:
# 914 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { char *tmp = _estrndup((((yyvsp[(2) - (2)]).u.constant).value.str.val), (((yyvsp[(2) - (2)]).u.constant).value.str.len+1) ); memcpy(&(tmp[1]), ((yyvsp[(2) - (2)]).u.constant).value.str.val, ((yyvsp[(2) - (2)]).u.constant).value.str.len+1); tmp[0] = '\\'; _efree((((yyvsp[(2) - (2)]).u.constant).value.str.val) ); ((yyvsp[(2) - (2)]).u.constant).value.str.val = tmp; ++((yyvsp[(2) - (2)]).u.constant).value.str.len; zend_do_fetch_constant(&(yyval), ((void *)0), &(yyvsp[(2) - (2)]), (1<<1), 0 ); }
    break;

  case 398:
# 915 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 399:
# 916 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 400:
# 917 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); (compiler_globals.heredoc) = ((yyvsp[(1) - (3)]).u.constant).value.str.val; (compiler_globals.heredoc_len) = ((yyvsp[(1) - (3)]).u.constant).value.str.len; }
    break;

  case 401:
# 922 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<0); (&(yyval).u.constant)->refcount__gc = 1; (&(yyval).u.constant)->is_ref__gc = 0;; _array_init((&(yyval).u.constant), 0 ); }
    break;

  case 402:
# 923 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 405:
# 932 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), &(yyvsp[(3) - (5)]), &(yyvsp[(5) - (5)])); }
    break;

  case 406:
# 933 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_add_static_array_element(&(yyval), ((void *)0), &(yyvsp[(3) - (3)])); }
    break;

  case 407:
# 934 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<0); (&(yyval).u.constant)->refcount__gc = 1; (&(yyval).u.constant)->is_ref__gc = 0;; _array_init((&(yyval).u.constant), 0 ); zend_do_add_static_array_element(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)])); }
    break;

  case 408:
# 935 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<0); (&(yyval).u.constant)->refcount__gc = 1; (&(yyval).u.constant)->is_ref__gc = 0;; _array_init((&(yyval).u.constant), 0 ); zend_do_add_static_array_element(&(yyval), ((void *)0), &(yyvsp[(1) - (1)])); }
    break;

  case 409:
# 939 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 410:
# 940 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 411:
# 945 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), 0, 0 ); (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 412:
# 950 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), 1, 0 ); (yyval) = (yyvsp[(1) - (1)]);
      zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 413:
# 955 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), 2, 0 ); (yyval) = (yyvsp[(1) - (1)]);
      zend_check_writable_variable(&(yyvsp[(1) - (1)])); }
    break;

  case 414:
# 960 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(1) - (2)]) ); }
    break;

  case 415:
# 961 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(4) - (4)]) ); }
    break;

  case 416:
# 962 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyval) ); (yyval).EA = (yyvsp[(1) - (7)]).EA | ((yyvsp[(7) - (7)]).EA ? (yyvsp[(7) - (7)]).EA : (yyvsp[(6) - (7)]).EA); }
    break;

  case 417:
# 963 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 418:
# 967 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(2) - (2)]).EA; }
    break;

  case 419:
# 968 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).EA = 0; }
    break;

  case 420:
# 973 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_push_object(&(yyvsp[(2) - (2)]) ); }
    break;

  case 421:
# 973 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).EA = (yyvsp[(4) - (4)]).EA; }
    break;

  case 422:
# 977 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 423:
# 978 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyvsp[(1) - (4)]).EA = (1<<1); fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 424:
# 982 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_pop_object(&(yyvsp[(1) - (1)]) ); zend_do_begin_method_call(&(yyvsp[(1) - (1)]) ); }
    break;

  case 425:
# 984 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_function_call(&(yyvsp[(1) - (4)]), &(yyval), &(yyvsp[(3) - (4)]), 1, 1 ); zend_do_extended_fcall_end(); }
    break;

  case 426:
# 988 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = (1<<1); zend_do_push_object(&(yyval) ); }
    break;

  case 427:
# 989 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); zend_do_push_object(&(yyval) ); }
    break;

  case 428:
# 990 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).EA = (1<<0); }
    break;

  case 429:
# 994 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 430:
# 995 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); }
    break;

  case 431:
# 999 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) ); }
    break;

  case 432:
# 1000 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (3)]); zend_do_fetch_static_member(&(yyval), &(yyvsp[(1) - (3)]) ); }
    break;

  case 433:
# 1005 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), 0, 0 ); (yyval)=(yyvsp[(1) - (1)]);; }
    break;

  case 434:
# 1009 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 435:
# 1010 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(); (yyvsp[(1) - (1)]).EA = (1<<3); }
    break;

  case 436:
# 1011 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) ); }
    break;

  case 437:
# 1015 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 438:
# 1016 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 439:
# 1017 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(); (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = (1<<3); }
    break;

  case 440:
# 1022 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = (1<<4); }
    break;

  case 441:
# 1023 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_indirect_references(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); (yyval).EA = (1<<4); }
    break;

  case 442:
# 1024 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); (yyval).EA = (1<<2); }
    break;

  case 443:
# 1028 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 444:
# 1029 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 445:
# 1030 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 ); }
    break;

  case 446:
# 1035 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 447:
# 1036 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 448:
# 1040 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval).op_type = (1<<3); }
    break;

  case 449:
# 1041 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 450:
# 1046 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 451:
# 1047 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), 0, 0 ); }
    break;

  case 452:
# 1047 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { znode tmp_znode; zend_do_pop_object(&tmp_znode ); zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (2)]) );}
    break;

  case 453:
# 1051 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { fetch_array_dim(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 454:
# 1052 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { fetch_string_offset(&(yyval), &(yyvsp[(1) - (4)]), &(yyvsp[(3) - (4)]) ); }
    break;

  case 455:
# 1053 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { znode tmp_znode; zend_do_pop_object(&tmp_znode ); zend_do_fetch_property(&(yyval), &tmp_znode, &(yyvsp[(1) - (1)]) );}
    break;

  case 456:
# 1057 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 457:
# 1058 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 458:
# 1062 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval = 1; }
    break;

  case 459:
# 1063 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { ((yyval).u.constant).value.lval++; }
    break;

  case 462:
# 1073 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_add_list_element(&(yyvsp[(1) - (1)]) ); }
    break;

  case 463:
# 1074 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_new_list_begin(); }
    break;

  case 464:
# 1074 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_new_list_end(); }
    break;

  case 465:
# 1075 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_add_list_element(((void *)0) ); }
    break;

  case 466:
# 1080 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), ((void *)0), ((void *)0), 0 ); }
    break;

  case 467:
# 1081 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (2)]); }
    break;

  case 468:
# 1085 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(5) - (5)]), &(yyvsp[(3) - (5)]), 0 ); }
    break;

  case 469:
# 1086 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(3) - (3)]), ((void *)0), 0 ); }
    break;

  case 470:
# 1087 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(3) - (3)]), &(yyvsp[(1) - (3)]), 0 ); }
    break;

  case 471:
# 1088 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(1) - (1)]), ((void *)0), 0 ); }
    break;

  case 472:
# 1089 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(6) - (6)]), &(yyvsp[(3) - (6)]), 1 ); }
    break;

  case 473:
# 1090 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_add_array_element(&(yyval), &(yyvsp[(4) - (4)]), ((void *)0), 1 ); }
    break;

  case 474:
# 1091 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(4) - (4)]), &(yyvsp[(1) - (4)]), 1 ); }
    break;

  case 475:
# 1092 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_init_array(&(yyval), &(yyvsp[(2) - (2)]), ((void *)0), 1 ); }
    break;

  case 476:
# 1096 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), 0, 0 ); zend_do_add_variable(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); }
    break;

  case 477:
# 1097 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_add_string(&(yyval), &(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); }
    break;

  case 478:
# 1098 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_end_variable_parse(&(yyvsp[(1) - (1)]), 0, 0 ); zend_do_add_variable(&(yyval), ((void *)0), &(yyvsp[(1) - (1)]) ); }
    break;

  case 479:
# 1099 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_add_string(&(yyval), ((void *)0), &(yyvsp[(1) - (2)]) ); zend_do_end_variable_parse(&(yyvsp[(2) - (2)]), 0, 0 ); zend_do_add_variable(&(yyval), &(yyval), &(yyvsp[(2) - (2)]) ); }
    break;

  case 480:
# 1105 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(); fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 ); }
    break;

  case 481:
# 1106 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(); }
    break;

  case 482:
# 1106 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { fetch_array_begin(&(yyval), &(yyvsp[(1) - (5)]), &(yyvsp[(4) - (5)]) ); }
    break;

  case 483:
# 1107 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(); fetch_simple_variable(&(yyvsp[(2) - (3)]), &(yyvsp[(1) - (3)]), 1 ); zend_do_fetch_property(&(yyval), &(yyvsp[(2) - (3)]), &(yyvsp[(3) - (3)]) ); }
    break;

  case 484:
# 1108 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(); fetch_simple_variable(&(yyval), &(yyvsp[(2) - (3)]), 1 ); }
    break;

  case 485:
# 1109 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_begin_variable_parse(); fetch_array_begin(&(yyval), &(yyvsp[(2) - (6)]), &(yyvsp[(4) - (6)]) ); }
    break;

  case 486:
# 1110 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(2) - (3)]); }
    break;

  case 487:
# 1115 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 488:
# 1116 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(1) - (1)]); }
    break;

  case 489:
# 1117 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { fetch_simple_variable(&(yyval), &(yyvsp[(1) - (1)]), 1 ); }
    break;

  case 490:
# 1122 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { (yyval) = (yyvsp[(3) - (4)]); }
    break;

  case 491:
# 1123 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_isset_or_isempty(0x01000000, &(yyval), &(yyvsp[(3) - (4)]) ); }
    break;

  case 492:
# 1124 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_include_or_eval((1<<1), &(yyval), &(yyvsp[(2) - (2)]) ); }
    break;

  case 493:
# 1125 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_include_or_eval((1<<2), &(yyval), &(yyvsp[(2) - (2)]) ); }
    break;

  case 494:
# 1126 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_include_or_eval((1<<0), &(yyval), &(yyvsp[(3) - (4)]) ); }
    break;

  case 495:
# 1127 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_include_or_eval((1<<3), &(yyval), &(yyvsp[(2) - (2)]) ); }
    break;

  case 496:
# 1128 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_include_or_eval((1<<4), &(yyval), &(yyvsp[(2) - (2)]) ); }
    break;

  case 497:
# 1132 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_isset_or_isempty(0x02000000, &(yyval), &(yyvsp[(1) - (1)]) ); }
    break;

  case 498:
# 1133 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_boolean_and_begin(&(yyvsp[(1) - (2)]), &(yyvsp[(2) - (2)]) ); }
    break;

  case 499:
# 1133 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { znode tmp; zend_do_isset_or_isempty(0x02000000, &tmp, &(yyvsp[(4) - (4)]) ); zend_do_boolean_and_end(&(yyval), &(yyvsp[(1) - (4)]), &tmp, &(yyvsp[(2) - (4)]) ); }
    break;

  case 500:
# 1137 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), (1<<1), 0 ); }
    break;

  case 501:
# 1138 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
    { zend_do_fetch_constant(&(yyval), &(yyvsp[(1) - (3)]), &(yyvsp[(3) - (3)]), (1<<1), 0 ); }
    break;
# 6627 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.c"
      default: break;
    }
  ;

  (yyvsp -= (yylen), yyssp -= (yylen));
  yylen = 0;
  ;

  *++yyvsp = yyval;





  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - 158] + *yyssp;
  if (0 <= yystate && yystate <= 5416 && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - 158];

  goto yynewstate;





yyerrlab:

  if (!yyerrstatus)
    {
      ++zendnerrs;



      {
 size_t yysize = yysyntax_error (0, yystate, zendchar);
 if (yymsg_alloc < yysize && yymsg_alloc < ((size_t) -1))
   {
     size_t yyalloc = 2 * yysize;
     if (! (yysize <= yyalloc && yyalloc <= ((size_t) -1)))
       yyalloc = ((size_t) -1);
     if (yymsg != yymsgbuf)
       free (yymsg);
     yymsg = (char *) malloc (yyalloc);
     if (yymsg)
       yymsg_alloc = yyalloc;
     else
       {
  yymsg = yymsgbuf;
  yymsg_alloc = sizeof yymsgbuf;
       }
   }

 if (0 < yysize && yysize <= yymsg_alloc)
   {
     (void) yysyntax_error (yymsg, yystate, zendchar);
     zenderror (yymsg);
   }
 else
   {
     zenderror ("syntax error");
     if (yysize != 0)
       goto yyexhaustedlab;
   }
      }

    }



  if (yyerrstatus == 3)
    {



      if (zendchar <= 0)
 {

   if (zendchar == 0)
     goto yyabortlab;
 }
      else
 {
   yydestruct ("Error: discarding",
        yytoken, &zendlval);
   zendchar = (-2);
 }
    }



  goto yyerrlab1;





yyerrorlab:




  if ( 0)
     goto yyerrorlab;



  (yyvsp -= (yylen), yyssp -= (yylen));
  yylen = 0;
  ;
  yystate = *yyssp;
  goto yyerrlab1;





yyerrlab1:
  yyerrstatus = 3;

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != -716)
 {
   yyn += 1;
   if (0 <= yyn && yyn <= 5416 && yycheck[yyn] == 1)
     {
       yyn = yytable[yyn];
       if (0 < yyn)
  break;
     }
 }


      if (yyssp == yyss)
 goto yyabortlab;


      yydestruct ("Error: popping",
    yystos[yystate], yyvsp);
      (yyvsp -= (1), yyssp -= (1));
      yystate = *yyssp;
      ;
    }

  *++yyvsp = zendlval;



  ;

  yystate = yyn;
  goto yynewstate;





yyacceptlab:
  yyresult = 0;
  goto yyreturn;




yyabortlab:
  yyresult = 1;
  goto yyreturn;





yyexhaustedlab:
  zenderror ("memory exhausted");
  yyresult = 2;



yyreturn:
  if (zendchar != (-2))
     yydestruct ("Cleanup: discarding lookahead",
   yytoken, &zendlval);


  (yyvsp -= (yylen), yyssp -= (yylen));
  ;
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
    yystos[*yyssp], yyvsp);
      (yyvsp -= (1), yyssp -= (1));
    }

  if (yyss != yyssa)
    free (yyss);


  if (yymsg != yymsgbuf)
    free (yymsg);


  return (yyresult);
}
# 1141 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
# 1150 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-05-7888715e73-ff48763f4b/php/Zend/zend_language_parser.y"
static size_t zend_yytnamerr(char *yyres, const char *yystr)
{
 if (!yyres) {
  return strlen(yystr);
 }
 {
  ;
  if ((compiler_globals.parse_error) == 0) {
   char buffer[120];
   const unsigned char *end, *str, *tok1 = ((void *)0), *tok2 = ((void *)0);
   unsigned int len = 0, toklen = 0, yystr_len;

   (compiler_globals.parse_error) = 1;

   if ((language_scanner_globals.yy_text)[0] == 0 &&
    (language_scanner_globals.yy_leng) == 1 &&
    memcmp(yystr, ("\"end of file\""), (sizeof("\"end of file\"")-1)) == 0) {
    __builtin_stpcpy (yyres, "end of file");
    return sizeof("end of file")-1;
   }

   str = (language_scanner_globals.yy_text);
   end = memchr(str, '\n', (language_scanner_globals.yy_leng));
   yystr_len = strlen(yystr);

   if ((tok1 = memchr(yystr, '(', yystr_len)) != ((void *)0)
    && (tok2 = zend_memrchr(yystr, ')', yystr_len)) != ((void *)0)) {
    toklen = (tok2 - tok1) + 1;
   } else {
    tok1 = tok2 = ((void *)0);
    toklen = 0;
   }

   if (end == ((void *)0)) {
    len = (language_scanner_globals.yy_leng) > 30 ? 30 : (language_scanner_globals.yy_leng);
   } else {
    len = (end - str) > 30 ? 30 : (end - str);
   }
   if (toklen) {
    snprintf(buffer, sizeof(buffer), "'%.*s' %.*s", len, str, toklen, tok1);
   } else {
    snprintf(buffer, sizeof(buffer), "'%.*s'", len, str);
   }
   __builtin_stpcpy (yyres, buffer);
   return len + (toklen ? toklen + 1 : 0) + 2;
  }
 }
 if (*yystr == '"') {
  size_t yyn = 0;
  const char *yyp = yystr;

  for (; *++yyp != '"'; ++yyn) {
   yyres[yyn] = *yyp;
  }
  yyres[yyn] = '\0';
  return yyn;
 }
 __builtin_stpcpy (yyres, yystr);
 return strlen(yystr);
}
