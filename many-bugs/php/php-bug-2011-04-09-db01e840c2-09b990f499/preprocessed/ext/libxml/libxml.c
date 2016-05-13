# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c"
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_version.h" 1
# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 1
# 51 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/include/../main/php_config.h" 1
# 2396 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/include/../main/php_config.h"
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

# 2397 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/include/../main/php_config.h" 2
# 2412 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/include/../main/php_config.h"
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

# 2413 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/include/../main/php_config.h" 2
# 2423 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/include/../main/php_config.h"
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

# 2424 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/include/../main/php_config.h" 2
# 2 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_config.h" 2
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2
# 68 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h"
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

# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 76 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2



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




# 80 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2
# 236 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_errors.h" 1
# 237 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_alloc.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_alloc.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/../TSRM/TSRM.h" 1
# 20 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/../TSRM/TSRM.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/include/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_config.h" 2
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/../TSRM/TSRM.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_alloc.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_alloc.h" 2
# 44 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_alloc.h"
typedef struct _zend_leak_info {
 void *addr;
 size_t size;
 char *filename;
 uint lineno;
 char *orig_filename;
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
# 93 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_alloc.h"
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
# 142 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 159 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );


# 191 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 211 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_alloc.h"
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
# 238 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_types.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_types.h"
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;

typedef struct _zend_object_value {
 zend_object_handle handle;
 zend_object_handlers *handlers;
} zend_object_value;
# 240 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_string.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_string.h"
__attribute__ ((visibility("default"))) extern const char *(*zend_new_interned_string)(const char *str, int len, int free_src );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 241 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2


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
# 244 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2
# 256 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h"
static const char long_min_digits[] = "2147483648";
# 271 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_hash.h" 1
# 45 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_hash.h"
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
 char *arKey;
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
 char *arKey;
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
# 214 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag, void **pData );




__attribute__ ((visibility("default"))) int zend_hash_num_elements(const HashTable *ht);

__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);
# 261 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_hash.h"
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








# 348 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_hash.h"
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
# 272 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_ts_hash.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_ts_hash.h"
typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






__attribute__ ((visibility("default"))) int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_ts_hash_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_ts_hash.h"
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








# 273 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_llist.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_llist.h"
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







# 274 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2





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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_object_handlers.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;
struct _zend_literal;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, const struct _zend_literal *key );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 46 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_object_handlers.h"
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





typedef int (*zend_object_call_method_t)(char *method, int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
typedef union _zend_function *(*zend_object_get_method_t)(zval **object_ptr, char *method, int method_len, const struct _zend_literal *key );
typedef union _zend_function *(*zend_object_get_constructor_t)(zval *object );


typedef void (*zend_object_add_ref_t)(zval *object );
typedef void (*zend_object_del_ref_t)(zval *object );
typedef void (*zend_object_delete_obj_t)(zval *object );
typedef zend_object_value (*zend_object_clone_obj_t)(zval *object );

typedef zend_class_entry *(*zend_object_get_class_entry_t)(const zval *object );
typedef int (*zend_object_get_class_name_t)(const zval *object, char **class_name, zend_uint *class_name_len, int parent );
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


__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_static_method(zend_class_entry *ce, char *function_name_strval, int function_name_strlen, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) zval **zend_std_get_static_property(zend_class_entry *ce, char *property_name, int property_name_len, zend_bool silent, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) zend_bool zend_std_unset_static_property(zend_class_entry *ce, char *property_name, int property_name_len, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) union _zend_function *zend_std_get_constructor(zval *object );
__attribute__ ((visibility("default"))) struct _zend_property_info *zend_get_property_info(zend_class_entry *ce, zval *member, int silent );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_properties(zval *object );
__attribute__ ((visibility("default"))) HashTable *zend_std_get_debug_info(zval *object, int *is_temp );
__attribute__ ((visibility("default"))) int zend_std_cast_object_tostring(zval *readobj, zval *writeobj, int type );
__attribute__ ((visibility("default"))) void zend_std_write_property(zval *object, zval *member, zval *value, const struct _zend_literal *key );
__attribute__ ((visibility("default"))) void rebuild_object_properties(zend_object *zobj);





__attribute__ ((visibility("default"))) int zend_check_private(union _zend_function *fbc, zend_class_entry *ce, char *function_name_strval, int function_name_strlen );

__attribute__ ((visibility("default"))) int zend_check_protected(zend_class_entry *ce, zend_class_entry *scope);

__attribute__ ((visibility("default"))) int zend_check_property_access(zend_object *zobj, char *prop_info_name, int prop_info_name_len );

__attribute__ ((visibility("default"))) void zend_std_call_user_call(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

# 306 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2

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
# 378 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h"
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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_iterators.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_iterators.h"
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

# 417 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2

struct _zend_serialize_data;
struct _zend_unserialize_data;

typedef struct _zend_serialize_data zend_serialize_data;
typedef struct _zend_unserialize_data zend_unserialize_data;

struct _zend_trait_method_reference {
 char* method_name;
 unsigned int mname_len;

 zend_class_entry *ce;

 char* class_name;
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




 char* alias;
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
   char *filename;
   zend_uint line_start;
   zend_uint line_end;
   char *doc_comment;
   zend_uint doc_comment_len;
  } user;
  struct {
   const struct _zend_function_entry *builtin_functions;
   struct _zend_module_entry *module;
  } internal;
 } info;
};

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_stream.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_stream.h"
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
 char *filename;
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

# 528 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2
typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
 int (*printf_function)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
 int (*write_function)(const char *str, uint str_length);
 FILE *(*fopen_function)(const char *filename, char **opened_path );
 void (*message_handler)(long message, void *data );
 void (*block_interruptions)(void);
 void (*unblock_interruptions)(void);
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
# 594 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);

# 632 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h"

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

# 677 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h"

extern __attribute__ ((visibility("default"))) int (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, char **opened_path );
extern __attribute__ ((visibility("default"))) void (*zend_block_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_unblock_interruptions)(void);
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









__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);

# 821 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_gc.h" 1
# 81 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_gc.h"
typedef struct _gc_root_buffer {
 struct _gc_root_buffer *prev;
 struct _gc_root_buffer *next;
 zend_object_handle handle;
 union {
  zval *pz;
  zend_object_handlers *handlers;
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
# 129 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_gc.h"
} zend_gc_globals;
# 138 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_zval_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_zobj_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_remove_zval_from_buffer(zval *zv );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);

# 180 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_gc.h"
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
# 822 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_operators.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_operators.h"
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
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_operators.h" 2

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



# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_operators.h" 2





# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_strtod.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_strtod.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);

# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_operators.h" 2






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
# 102 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_operators.h"
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
__attribute__ ((visibility("default"))) int string_compare_function(zval *result, zval *op1, zval *op2 );

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

# 823 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_variables.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_variables.h"


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
# 78 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval **p);


# 824 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend.h" 2

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
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_qsort.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_qsort.h"

__attribute__ ((visibility("default"))) void zend_qsort(void *base, size_t nmemb, size_t siz, compare_func_t compare );

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_compat.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_compat.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_config.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_compat.h" 2
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_modules.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_modules.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_compile.h" 1
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_compile.h"
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
# 201 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_compile.h"
char *zend_visibility_string(zend_uint fn_flags);


typedef struct _zend_property_info {
 zend_uint flags;
 char *name;
 int name_length;
 ulong h;
 int offset;
 char *doc_comment;
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
 char *name;
 int name_len;
 ulong hash_value;
} zend_compiled_variable;

struct _zend_op_array {

 zend_uchar type;
 char *function_name;
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

 char *filename;
 zend_uint line_start;
 zend_uint line_end;
 char *doc_comment;
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
 char * function_name;
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
  char *function_name;
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
# 388 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_compile.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h"
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

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals_macros.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;









extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 48 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;



# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_stack.h"
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

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_ptr_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_ptr_stack.h"
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

# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_ptr_stack.h"
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
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_objects.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_objects.h"

__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object *zend_objects_get_address(const zval *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_free_object_storage(zend_object *object );

# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_objects_API.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_objects_API.h"
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

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_modules.h" 1
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_float.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_float.h"
# 1 "/usr/include/fpu_control.h" 1 3 4
# 89 "/usr/include/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 100 "/usr/include/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 213 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_float.h" 2
# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_multibyte.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_multibyte.h"
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


# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 2
# 55 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_compile.h" 1
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 2
# 64 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h"
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
# 389 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_compile.h" 2



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
void zend_resolve_class_name(znode *class_name, ulong *fetch_type, int check_ns_name );
__attribute__ ((visibility("default"))) char* zend_get_compiled_variable_name(const zend_op_array *op_array, zend_uint var, int* name_len);
# 421 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_compile.h"
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
__attribute__ ((visibility("default"))) int zend_unmangle_property_name(char *mangled_property, int mangled_property_len, char **class_name, char **prop_name);




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

typedef zend_bool (*zend_auto_global_callback)(char *name, uint name_len );
typedef struct _zend_auto_global {
 char *name;
 uint name_len;
 zend_auto_global_callback auto_global_callback;
 zend_bool jit;
 zend_bool armed;
} zend_auto_global;

__attribute__ ((visibility("default"))) int zend_register_auto_global(const char *name, uint name_len, zend_bool jit, zend_auto_global_callback auto_global_callback );
__attribute__ ((visibility("default"))) void zend_activate_auto_globals(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_auto_global(const char *name, uint name_len );
__attribute__ ((visibility("default"))) size_t zend_dirname(char *path, size_t len);

int zendlex(znode *zendlval );

int zend_add_literal(zend_op_array *op_array, const zval *zv );



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_vm_opcodes.h" 1
# 688 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_compile.h" 2
# 810 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_compile.h"

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_modules.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_build.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_modules.h" 2
# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_modules.h"
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
# 116 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_modules.h"
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
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_list.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_list.h"





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
# 116 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_list.h"

# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_execute.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_execute.h"
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
__attribute__ ((visibility("default"))) int zend_verify_arg_error(int error_type, const zend_function *zf, zend_uint arg_num, const char *need_msg, const char *need_kind, const char *given_msg, char *given_kind );

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
# 183 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_execute.h"
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



__attribute__ ((visibility("default"))) char *get_active_class_name(char **space );
__attribute__ ((visibility("default"))) char *get_active_function_name(void);
__attribute__ ((visibility("default"))) char *zend_get_executed_filename(void);
__attribute__ ((visibility("default"))) uint zend_get_executed_lineno(void);
__attribute__ ((visibility("default"))) zend_bool zend_is_executing(void);

__attribute__ ((visibility("default"))) void zend_set_timeout(long seconds, int reset_signals);
__attribute__ ((visibility("default"))) void zend_unset_timeout(void);
__attribute__ ((visibility("default"))) void zend_timeout(int dummy);
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class(const char *class_name, uint class_name_len, int fetch_type );
__attribute__ ((visibility("default"))) zend_class_entry *zend_fetch_class_by_name(const char *class_name, uint class_name_len, const zend_literal *key, int fetch_type );
void zend_verify_abstract_class(zend_class_entry *ce );
# 410 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval** zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 420 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );
__attribute__ ((visibility("default"))) zval **zend_get_zval_ptr_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );
# 451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_execute.h"

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h" 2




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
# 226 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 247 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h"
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
# 291 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) zend_bool zend_is_callable_ex(zval *callable, zval *object_ptr, uint check_flags, char **callable_name, int *callable_name_len, zend_fcall_info_cache *fcc, char **error );
__attribute__ ((visibility("default"))) zend_bool zend_is_callable(zval *callable, uint check_flags, char **callable_name );
__attribute__ ((visibility("default"))) zend_bool zend_make_callable(zval *callable, char **callable_name );
__attribute__ ((visibility("default"))) const char *zend_get_module_version(const char *module_name);
__attribute__ ((visibility("default"))) int zend_get_module_started(const char *module_name);
__attribute__ ((visibility("default"))) int zend_declare_property(zend_class_entry *ce, char *name, int name_length, zval *property, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_ex(zend_class_entry *ce, const char *name, int name_length, zval *property, int access_type, char *doc_comment, int doc_comment_len );
__attribute__ ((visibility("default"))) int zend_declare_property_null(zend_class_entry *ce, char *name, int name_length, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_bool(zend_class_entry *ce, char *name, int name_length, long value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_long(zend_class_entry *ce, char *name, int name_length, long value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_double(zend_class_entry *ce, char *name, int name_length, double value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_string(zend_class_entry *ce, char *name, int name_length, const char *value, int access_type );
__attribute__ ((visibility("default"))) int zend_declare_property_stringl(zend_class_entry *ce, char *name, int name_length, const char *value, int value_len, int access_type );

__attribute__ ((visibility("default"))) int zend_declare_class_constant(zend_class_entry *ce, const char *name, size_t name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_null(zend_class_entry *ce, const char *name, size_t name_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_long(zend_class_entry *ce, const char *name, size_t name_length, long value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_bool(zend_class_entry *ce, const char *name, size_t name_length, zend_bool value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_double(zend_class_entry *ce, const char *name, size_t name_length, double value );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_stringl(zend_class_entry *ce, const char *name, size_t name_length, const char *value, size_t value_length );
__attribute__ ((visibility("default"))) int zend_declare_class_constant_string(zend_class_entry *ce, const char *name, size_t name_length, const char *value );

__attribute__ ((visibility("default"))) void zend_update_class_constants(zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_update_property(zend_class_entry *scope, zval *object, char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) void zend_update_property_null(zend_class_entry *scope, zval *object, char *name, int name_length );
__attribute__ ((visibility("default"))) void zend_update_property_bool(zend_class_entry *scope, zval *object, char *name, int name_length, long value );
__attribute__ ((visibility("default"))) void zend_update_property_long(zend_class_entry *scope, zval *object, char *name, int name_length, long value );
__attribute__ ((visibility("default"))) void zend_update_property_double(zend_class_entry *scope, zval *object, char *name, int name_length, double value );
__attribute__ ((visibility("default"))) void zend_update_property_string(zend_class_entry *scope, zval *object, char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) void zend_update_property_stringl(zend_class_entry *scope, zval *object, char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) int zend_update_static_property(zend_class_entry *scope, char *name, int name_length, zval *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_null(zend_class_entry *scope, char *name, int name_length );
__attribute__ ((visibility("default"))) int zend_update_static_property_bool(zend_class_entry *scope, char *name, int name_length, long value );
__attribute__ ((visibility("default"))) int zend_update_static_property_long(zend_class_entry *scope, char *name, int name_length, long value );
__attribute__ ((visibility("default"))) int zend_update_static_property_double(zend_class_entry *scope, char *name, int name_length, double value );
__attribute__ ((visibility("default"))) int zend_update_static_property_string(zend_class_entry *scope, char *name, int name_length, const char *value );
__attribute__ ((visibility("default"))) int zend_update_static_property_stringl(zend_class_entry *scope, char *name, int name_length, const char *value, int value_length );

__attribute__ ((visibility("default"))) zval *zend_read_property(zend_class_entry *scope, zval *object, char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zval *zend_read_static_property(zend_class_entry *scope, char *name, int name_length, zend_bool silent );

__attribute__ ((visibility("default"))) zend_class_entry *zend_get_class_entry(const zval *zobject );
__attribute__ ((visibility("default"))) int zend_get_object_classname(const zval *object, const char **class_name, zend_uint *class_name_len );
__attribute__ ((visibility("default"))) char *zend_get_type_by_const(int type);
# 356 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h"
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
# 391 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h"
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
# 439 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 455 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h"
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

__attribute__ ((visibility("default"))) void zend_delete_variable(zend_execute_data *ex, HashTable *ht, char *name, int name_len, ulong hash_value );

__attribute__ ((visibility("default"))) int zend_delete_global_variable(char *name, int name_len );

__attribute__ ((visibility("default"))) int zend_delete_global_variable_ex(char *name, int name_len, ulong hash_value );

__attribute__ ((visibility("default"))) void zend_reset_all_cv(HashTable *symbol_table );

__attribute__ ((visibility("default"))) void zend_rebuild_symbol_table(void);



__attribute__ ((visibility("default"))) void zif_display_disabled_function(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
__attribute__ ((visibility("default"))) void zif_display_disabled_class(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

# 726 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_API.h"

# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 87 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"
# 1 "/usr/include/assert.h" 1 3 4
# 88 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 103 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/build-defs.h" 1
# 104 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 128 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"

__attribute__ ((visibility("default"))) size_t php_strlcpy(char *dst, const char *src, size_t siz);







__attribute__ ((visibility("default"))) size_t php_strlcat(char *dst, const char *src, size_t siz);

# 168 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"
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

# 169 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2

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
# 268 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int euidaccess (__const char *__name, int __type)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int eaccess (__const char *__name, int __type)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;
# 331 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__));
# 342 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     __attribute__ ((__nothrow__));






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 373 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
# 401 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__)) ;




extern int pipe2 (int __pipedes[2], int __flags) __attribute__ ((__nothrow__)) ;
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





extern char *get_current_dir_name (void) __attribute__ ((__nothrow__));







extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));




extern int dup3 (int __fd, int __fd2, int __flags) __attribute__ ((__nothrow__));



extern char **__environ;

extern char **environ;





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




extern int execvpe (__const char *__file, char *__const __argv[],
      char *__const __envp[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





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



extern int group_member (__gid_t __gid) __attribute__ ((__nothrow__));






extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__));





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     __attribute__ ((__nothrow__));



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     __attribute__ ((__nothrow__));



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     __attribute__ ((__nothrow__));



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     __attribute__ ((__nothrow__));






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
# 1019 "/usr/include/unistd.h" 3 4
extern int truncate64 (__const char *__file, __off64_t __length)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__)) ;
# 1036 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) __attribute__ ((__nothrow__)) ;
# 1047 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__));
# 1068 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__));
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1101 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1122 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (__const char *__key, __const char *__salt)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__block, int __edflag) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void swab (__const void *__restrict __from, void *__restrict __to,
    ssize_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));







extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 1160 "/usr/include/unistd.h" 3 4

# 171 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 188 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_hash.h" 1
# 189 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_alloc.h" 1
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_stack.h" 1
# 191 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 211 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"
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
# 181 "/usr/include/pwd.h" 3 4
extern int getpw (__uid_t __uid, char *__buffer);



# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
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
# 213 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2




# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 218 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 240 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/snprintf.h" 1
# 73 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/snprintf.h"
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


# 127 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/snprintf.h"
typedef enum {
 LM_STD = 0,

 LM_INTMAX_T,


 LM_PTRDIFF_T,


 LM_LONG_LONG,

 LM_SIZE_T,
 LM_LONG,
 LM_LONG_DOUBLE
} length_modifier_e;
# 152 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/snprintf.h"
typedef long long int wide_int;
typedef unsigned long long int u_wide_int;

extern char * ap_php_conv_10(register wide_int num, register bool_int is_unsigned,
    register bool_int * is_negative, char *buf_end, register int *len);

extern char * ap_php_conv_p2(register u_wide_int num, register int nbits,
   char format, char *buf_end, register int *len);
# 242 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/spprintf.h" 1
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/spprintf.h"

__attribute__ ((visibility("default"))) int spprintf( char **pbuf, size_t max_len, const char *format, ...) __attribute__ ((format(printf, 3, 4)));

__attribute__ ((visibility("default"))) int vspprintf(char **pbuf, size_t max_len, const char *format, va_list ap) __attribute__ ((format(printf, 3, 0)));

# 244 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 267 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"
extern char **environ;
# 278 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"

void phperror(char *error);
__attribute__ ((visibility("default"))) int php_write(void *buf, uint size );
__attribute__ ((visibility("default"))) int php_printf(const char *format, ...) __attribute__ ((format(printf, 1, 2)))
    ;
__attribute__ ((visibility("default"))) void php_log_err(char *log_message );
int Debug(char *format, ...) __attribute__ ((format(printf, 1, 2)));
int cfgparse(void);






static inline __attribute__((deprecated)) void php_set_error_handling(zend_error_handling_t error_handling, zend_class_entry *exception_class )
{
 zend_replace_error_handling(error_handling, exception_class, ((void *)0) );
}
static inline __attribute__((deprecated)) void php_std_error_handling() {}

__attribute__ ((visibility("default"))) void php_verror(const char *docref, const char *params, int type, const char *format, va_list args ) __attribute__ ((format(printf, 4, 0)));
# 307 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"
__attribute__ ((visibility("default"))) void php_error_docref0(const char *docref , int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 3, 0 + 4)));
__attribute__ ((visibility("default"))) void php_error_docref1(const char *docref , const char *param1, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 4, 0 + 5)));
__attribute__ ((visibility("default"))) void php_error_docref2(const char *docref , const char *param1, const char *param2, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 5, 0 + 6)));




# 330 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"

__attribute__ ((visibility("default"))) extern int (*php_register_internal_extensions_func)(void);
__attribute__ ((visibility("default"))) int php_register_internal_extensions(void);
__attribute__ ((visibility("default"))) int php_mergesort(void *base, size_t nmemb, register size_t size, int (*cmp)(const void *, const void * ) );
__attribute__ ((visibility("default"))) void php_register_pre_request_shutdown(void (*func)(void *), void *userdata);
__attribute__ ((visibility("default"))) void php_com_initialize(void);
__attribute__ ((visibility("default"))) char *php_get_current_user(void);

# 390 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_output.h" 1
# 50 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_output.h"
typedef enum _php_output_handler_status_t {
 PHP_OUTPUT_HANDLER_FAILURE,
 PHP_OUTPUT_HANDLER_SUCCESS,
 PHP_OUTPUT_HANDLER_NO_DATA
} php_output_handler_status_t;
# 72 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_output.h"
typedef enum _php_output_handler_hook_t {
 PHP_OUTPUT_HANDLER_HOOK_GET_OPAQ,
 PHP_OUTPUT_HANDLER_HOOK_GET_FLAGS,
 PHP_OUTPUT_HANDLER_HOOK_GET_LEVEL,
 PHP_OUTPUT_HANDLER_HOOK_IMMUTABLE,
 PHP_OUTPUT_HANDLER_HOOK_DISABLE,

 PHP_OUTPUT_HANDLER_HOOK_LAST
} php_output_handler_hook_t;
# 90 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_output.h"
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
 char *output_start_filename;
 int output_start_lineno;
} zend_output_globals;
# 176 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_output.h"


extern const char php_output_default_handler_name[sizeof("default output handler")];
extern const char php_output_devnull_handler_name[sizeof("null output handler")];
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_output.h"
__attribute__ ((visibility("default"))) void php_output_startup(void);

__attribute__ ((visibility("default"))) void php_output_shutdown(void);

__attribute__ ((visibility("default"))) void php_output_register_constants(void);


__attribute__ ((visibility("default"))) int php_output_activate(void);

__attribute__ ((visibility("default"))) void php_output_deactivate(void);

__attribute__ ((visibility("default"))) void php_output_set_status(int status );
__attribute__ ((visibility("default"))) int php_output_get_status(void);
__attribute__ ((visibility("default"))) void php_output_set_implicit_flush(int flush );
__attribute__ ((visibility("default"))) char *php_output_get_start_filename(void);
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
# 391 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h"
# 1 "/usr/include/sys/time.h" 1 3 4
# 27 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 28 "/usr/include/sys/time.h" 2 3 4

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




typedef enum __itimer_which __itimer_which_t;






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






extern int futimesat (int __fd, __const char *__file,
        __const struct timeval __tvp[2]) __attribute__ ((__nothrow__));
# 191 "/usr/include/sys/time.h" 3 4

# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h" 2


# 1 "/usr/include/sys/stat.h" 1 3 4
# 39 "/usr/include/sys/stat.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 40 "/usr/include/sys/stat.h" 2 3 4
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


struct stat64
  {
    __dev_t st_dev;
    unsigned int __pad1;

    __ino_t __st_ino;
    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned int __pad2;
    __off64_t st_size;
    __blksize_t st_blksize;

    __blkcnt64_t st_blocks;







    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 130 "/usr/include/bits/stat.h" 3 4
    __ino64_t st_ino;
  };
# 108 "/usr/include/sys/stat.h" 2 3 4
# 211 "/usr/include/sys/stat.h" 3 4
extern int stat (__const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 230 "/usr/include/sys/stat.h" 3 4
extern int stat64 (__const char *__restrict __file,
     struct stat64 *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int fstat64 (int __fd, struct stat64 *__buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));







extern int fstatat (int __fd, __const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 255 "/usr/include/sys/stat.h" 3 4
extern int fstatat64 (int __fd, __const char *__restrict __file,
        struct stat64 *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));







extern int lstat (__const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 278 "/usr/include/sys/stat.h" 3 4
extern int lstat64 (__const char *__restrict __file,
      struct stat64 *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern int chmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (__const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__));





extern int fchmodat (int __fd, __const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__));




extern __mode_t getumask (void) __attribute__ ((__nothrow__));



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
# 434 "/usr/include/sys/stat.h" 3 4
extern int __fxstat64 (int __ver, int __fildes, struct stat64 *__stat_buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat64 (int __ver, __const char *__filename,
        struct stat64 *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat64 (int __ver, __const char *__filename,
         struct stat64 *__stat_buf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat64 (int __ver, int __fildes, __const char *__filename,
    struct stat64 *__stat_buf, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4)));

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





extern __inline int
__attribute__ ((__nothrow__)) stat64 (__const char *__path, struct stat64 *__statbuf)
{
  return __xstat64 (3, __path, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) lstat64 (__const char *__path, struct stat64 *__statbuf)
{
  return __lxstat64 (3, __path, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) fstat64 (int __fd, struct stat64 *__statbuf)
{
  return __fxstat64 (3, __fd, __statbuf);
}


extern __inline int
__attribute__ ((__nothrow__)) fstatat64 (int __fd, __const char *__filename, struct stat64 *__statbuf, int __flag)

{
  return __fxstatat64 (3, __fd, __filename, __statbuf, __flag);
}







# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h" 2


__attribute__ ((visibility("default"))) int php_file_le_stream(void);
__attribute__ ((visibility("default"))) int php_file_le_pstream(void);
__attribute__ ((visibility("default"))) int php_file_le_stream_filter(void);

# 98 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h"
typedef struct _php_stream php_stream;
typedef struct _php_stream_wrapper php_stream_wrapper;
typedef struct _php_stream_context php_stream_context;
typedef struct _php_stream_filter php_stream_filter;

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_context.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_context.h"
typedef void (*php_stream_notification_func)(php_stream_context *context,
  int notifycode, int severity,
  char *xmsg, int xcode,
  size_t bytes_sofar, size_t bytes_max,
  void * ptr );
# 43 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_context.h"
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

# 95 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_context.h"

__attribute__ ((visibility("default"))) void php_stream_notification_notify(php_stream_context *context, int notifycode, int severity,
  char *xmsg, int xcode, size_t bytes_sofar, size_t bytes_max, void * ptr );
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_set(php_stream *stream, php_stream_context *context);

# 104 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_filter_api.h" 1
# 41 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_filter_api.h"
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

# 144 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_filter_factory {
 php_stream_filter *(*create_filter)(const char *filtername, zval *filterparams, int persistent );
} php_stream_filter_factory;


__attribute__ ((visibility("default"))) int php_stream_filter_register_factory(const char *filterpattern, php_stream_filter_factory *factory );
__attribute__ ((visibility("default"))) int php_stream_filter_unregister_factory(const char *filterpattern );
__attribute__ ((visibility("default"))) int php_stream_filter_register_factory_volatile(const char *filterpattern, php_stream_filter_factory *factory );
__attribute__ ((visibility("default"))) php_stream_filter *php_stream_filter_create(const char *filtername, zval *filterparams, int persistent );

# 105 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h" 2

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
} php_stream_wrapper_ops;

struct _php_stream_wrapper {
 php_stream_wrapper_ops *wops;
 void *abstract;
 int is_url;


 int err_count;
 char **err_stack;
};
# 188 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h"
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

# 263 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h"

__attribute__ ((visibility("default"))) php_stream *php_stream_encloses(php_stream *enclosing, php_stream *enclosed);

__attribute__ ((visibility("default"))) int _php_stream_free_enclosed(php_stream *stream_enclosed, int close_options );

__attribute__ ((visibility("default"))) int php_stream_from_persistent_id(const char *persistent_id, php_stream **stream );
# 283 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h"
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





# 415 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h"

__attribute__ ((visibility("default"))) int _php_stream_truncate_set_size(php_stream *stream, size_t newsize );


# 435 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h"

__attribute__((deprecated))
__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_stream(php_stream *src, php_stream *dest, size_t maxlen );

__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_stream_ex(php_stream *src, php_stream *dest, size_t maxlen, size_t *len );





__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_mem(php_stream *src, char **buf, size_t maxlen,
  int persistent );



__attribute__ ((visibility("default"))) size_t _php_stream_passthru(php_stream * src );



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_transport.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_transport.h"
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
# 104 "/usr/include/sys/uio.h" 3 4
extern ssize_t preadv64 (int __fd, __const struct iovec *__iovec, int __count,
    __off64_t __offset) ;
# 116 "/usr/include/sys/uio.h" 3 4
extern ssize_t pwritev64 (int __fd, __const struct iovec *__iovec, int __count,
     __off64_t __offset) ;




# 29 "/usr/include/sys/socket.h" 2 3 4

# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 31 "/usr/include/sys/socket.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 34 "/usr/include/sys/socket.h" 2 3 4






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



    MSG_TRYHARD = MSG_DONTROUTE,


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



struct mmsghdr
  {
    struct msghdr msg_hdr;
    unsigned int msg_len;
  };



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


    , SCM_CREDENTIALS = 0x02


  };



struct ucred
{
  pid_t pid;
  uid_t uid;
  gid_t gid;
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
# 92 "/usr/include/sys/socket.h" 3 4
typedef union { struct sockaddr *__restrict __sockaddr__; struct sockaddr_at *__restrict __sockaddr_at__; struct sockaddr_ax25 *__restrict __sockaddr_ax25__; struct sockaddr_dl *__restrict __sockaddr_dl__; struct sockaddr_eon *__restrict __sockaddr_eon__; struct sockaddr_in *__restrict __sockaddr_in__; struct sockaddr_in6 *__restrict __sockaddr_in6__; struct sockaddr_inarp *__restrict __sockaddr_inarp__; struct sockaddr_ipx *__restrict __sockaddr_ipx__; struct sockaddr_iso *__restrict __sockaddr_iso__; struct sockaddr_ns *__restrict __sockaddr_ns__; struct sockaddr_un *__restrict __sockaddr_un__; struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __SOCKADDR_ARG __attribute__ ((__transparent_union__));


typedef union { __const struct sockaddr *__restrict __sockaddr__; __const struct sockaddr_at *__restrict __sockaddr_at__; __const struct sockaddr_ax25 *__restrict __sockaddr_ax25__; __const struct sockaddr_dl *__restrict __sockaddr_dl__; __const struct sockaddr_eon *__restrict __sockaddr_eon__; __const struct sockaddr_in *__restrict __sockaddr_in__; __const struct sockaddr_in6 *__restrict __sockaddr_in6__; __const struct sockaddr_inarp *__restrict __sockaddr_inarp__; __const struct sockaddr_ipx *__restrict __sockaddr_ipx__; __const struct sockaddr_iso *__restrict __sockaddr_iso__; __const struct sockaddr_ns *__restrict __sockaddr_ns__; __const struct sockaddr_un *__restrict __sockaddr_un__; __const struct sockaddr_x25 *__restrict __sockaddr_x25__;
       } __CONST_SOCKADDR_ARG __attribute__ ((__transparent_union__));







extern int socket (int __domain, int __type, int __protocol) __attribute__ ((__nothrow__));





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) __attribute__ ((__nothrow__));


extern int bind (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len)
     __attribute__ ((__nothrow__));


extern int getsockname (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__));
# 129 "/usr/include/sys/socket.h" 3 4
extern int connect (int __fd, __CONST_SOCKADDR_ARG __addr, socklen_t __len);



extern int getpeername (int __fd, __SOCKADDR_ARG __addr,
   socklen_t *__restrict __len) __attribute__ ((__nothrow__));






extern ssize_t send (int __fd, __const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, __const void *__buf, size_t __n,
         int __flags, __CONST_SOCKADDR_ARG __addr,
         socklen_t __addr_len);
# 166 "/usr/include/sys/socket.h" 3 4
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, __SOCKADDR_ARG __addr,
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
extern int accept (int __fd, __SOCKADDR_ARG __addr,
     socklen_t *__restrict __addr_len);






extern int accept4 (int __fd, __SOCKADDR_ARG __addr,
      socklen_t *__restrict __addr_len, int __flags);
# 232 "/usr/include/sys/socket.h" 3 4
extern int shutdown (int __fd, int __how) __attribute__ ((__nothrow__));




extern int sockatmark (int __fd) __attribute__ ((__nothrow__));







extern int isfdtype (int __fd, int __fdtype) __attribute__ ((__nothrow__));
# 254 "/usr/include/sys/socket.h" 3 4

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_transport.h" 2


typedef php_stream *(php_stream_transport_factory_func)(const char *proto, long protolen,
  char *resourcename, long resourcenamelen,
  const char *persistent_id, int options, int flags,
  struct timeval *timeout,
  php_stream_context *context );
typedef php_stream_transport_factory_func *php_stream_transport_factory;


__attribute__ ((visibility("default"))) int php_stream_xport_register(char *protocol, php_stream_transport_factory factory );
__attribute__ ((visibility("default"))) int php_stream_xport_unregister(char *protocol );
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_transport.h"
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

# 455 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_plain_wrapper.h"
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



# 456 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_glob_wrapper.h" 1
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_glob_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_glob_stream_wrapper;
__attribute__ ((visibility("default"))) extern php_stream_ops php_glob_stream_ops;



__attribute__ ((visibility("default"))) char* _php_glob_stream_get_path(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) char* _php_glob_stream_get_pattern(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) int _php_glob_stream_get_count(php_stream *stream, int *pflags );



# 457 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_userspace.h" 1
# 23 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_userspace.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_ops;
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_dir_ops;
# 458 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_mmap.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_mmap.h"
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
# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/streams/php_stream_mmap.h"

__attribute__ ((visibility("default"))) char *_php_stream_mmap_range(php_stream *stream, size_t offset, size_t length, php_stream_mmap_operation_t mode, size_t *mapped_len );



__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap_ex(php_stream *stream, off_t readden );


# 459 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h" 2
# 475 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h"

__attribute__ ((visibility("default"))) int _php_stream_cast(php_stream *stream, int castas, void **ret, int show_err );

# 539 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h"
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
# 566 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h"
__attribute__ ((visibility("default"))) void php_stream_wrapper_log_error(php_stream_wrapper *wrapper, int options , const char *fmt, ...) __attribute__ ((format(printf, 3, 4)));
# 577 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_make_seekable(php_stream *origstream, php_stream **newstream, int flags );



__attribute__ ((visibility("default"))) HashTable *_php_stream_get_url_stream_wrappers_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_stream_get_url_stream_wrappers_hash_global(void);
__attribute__ ((visibility("default"))) HashTable *_php_get_stream_filters_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_get_stream_filters_hash_global(void);
extern php_stream_wrapper_ops *php_stream_user_wrapper_ops;

# 394 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_memory_streams.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_memory_streams.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_streams.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_memory_streams.h" 2
# 42 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_memory_streams.h"

__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_create(int mode );
__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_open(int mode, char *buf, size_t length );
__attribute__ ((visibility("default"))) char *_php_stream_memory_get_buffer(php_stream *stream, size_t *length );

__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_create(int mode, size_t max_memory_usage );
__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_open(int mode, size_t max_memory_usage, char *buf, size_t length );


extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_memory_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_temp_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_rfc2397_ops;
extern __attribute__ ((visibility("default"))) php_stream_wrapper php_stream_rfc2397_wrapper;
# 395 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/fopen_wrappers.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/fopen_wrappers.h"

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_globals.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_globals.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_globals.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_globals.h" 2

typedef struct _php_core_globals php_core_globals;






extern __attribute__ ((visibility("default"))) struct _php_core_globals core_globals;
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_globals.h"
struct _php_tick_function_entry;

typedef struct _arg_separators {
 char *output;
 char *input;
} arg_separators;

struct _php_core_globals {
 zend_bool magic_quotes_gpc;
 zend_bool magic_quotes_runtime;
 zend_bool magic_quotes_sybase;

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
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/fopen_wrappers.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_ini.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_ini.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_ini.h" 1
# 63 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_ini.h"
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

# 175 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_ini.h"

__attribute__ ((visibility("default"))) int OnUpdateBool(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLong(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLongGEZero(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateReal(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateString(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateStringUnempty(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );

# 195 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_ini.h"
typedef void (*zend_ini_parser_cb_t)(zval *arg1, zval *arg2, zval *arg3, int callback_type, void *arg );

__attribute__ ((visibility("default"))) int zend_parse_ini_file(zend_file_handle *fh, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );
__attribute__ ((visibility("default"))) int zend_parse_ini_string(char *str, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );







typedef struct _zend_ini_parser_param {
 zend_ini_parser_cb_t ini_parser_cb;
 void *arg;
} zend_ini_parser_param;
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_ini.h" 2


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

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/fopen_wrappers.h" 2

__attribute__ ((visibility("default"))) int php_fopen_primary_script(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) char *expand_filepath(const char *filepath, char *real_path );
__attribute__ ((visibility("default"))) char *expand_filepath_ex(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len );

__attribute__ ((visibility("default"))) int php_check_open_basedir(const char *path );
__attribute__ ((visibility("default"))) int php_check_open_basedir_ex(const char *path, int warn );
__attribute__ ((visibility("default"))) int php_check_specific_open_basedir(const char *basedir, const char *path );
# 46 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/fopen_wrappers.h"
__attribute__ ((visibility("default"))) int php_check_safe_mode_include_dir(const char *path );

__attribute__ ((visibility("default"))) char *php_resolve_path(const char *filename, int filename_len, const char *path );

__attribute__ ((visibility("default"))) FILE *php_fopen_with_path(const char *filename, const char *mode, const char *path, char **opened_path );

__attribute__ ((visibility("default"))) char *php_strip_url_passwd(char *path);

__attribute__ ((visibility("default"))) int OnUpdateBaseDir(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );

# 396 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_virtual_cwd.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_virtual_cwd.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/TSRM.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_virtual_cwd.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_config_common.h" 1
# 13 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_config_common.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/include/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_config.h" 2
# 14 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_config_common.h" 2
# 41 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_config_common.h"
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 42 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_config_common.h" 2
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_virtual_cwd.h" 2






# 1 "/usr/include/utime.h" 1 3 4
# 28 "/usr/include/utime.h" 3 4






# 1 "/usr/include/time.h" 1 3 4
# 35 "/usr/include/utime.h" 2 3 4



struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (__const char *__file,
    __const struct utimbuf *__file_times)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_virtual_cwd.h" 2
# 90 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_virtual_cwd.h"
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


struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
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
# 174 "/usr/include/dirent.h" 3 4
extern struct dirent64 *readdir64 (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 184 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));
# 201 "/usr/include/dirent.h" 3 4
extern int readdir64_r (DIR *__restrict __dirp,
   struct dirent64 *__restrict __entry,
   struct dirent64 **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3)));




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
# 275 "/usr/include/dirent.h" 3 4
extern int scandir64 (__const char *__restrict __dir,
        struct dirent64 ***__restrict __namelist,
        int (*__selector) (__const struct dirent64 *),
        int (*__cmp) (__const struct dirent64 **,
        __const struct dirent64 **))
     __attribute__ ((__nonnull__ (1, 2)));




extern int alphasort (__const struct dirent **__e1,
        __const struct dirent **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 300 "/usr/include/dirent.h" 3 4
extern int alphasort64 (__const struct dirent64 **__e1,
   __const struct dirent64 **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 313 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));
# 330 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
      size_t __nbytes,
      __off64_t *__restrict __basep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));






extern int versionsort (__const struct dirent **__e1,
   __const struct dirent **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 356 "/usr/include/dirent.h" 3 4
extern int versionsort64 (__const struct dirent64 **__e1,
     __const struct dirent64 **__e2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




# 91 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_virtual_cwd.h" 2
# 145 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_virtual_cwd.h"
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
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_utime(const char *filename, struct utimbuf *buf );

__attribute__ ((visibility("default"))) int virtual_chmod(const char *filename, mode_t mode );

__attribute__ ((visibility("default"))) int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 204 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/TSRM/tsrm_virtual_cwd.h"
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
# 400 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_constants.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_constants.h"

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

# 402 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2






# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_reentrancy.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_reentrancy.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_reentrancy.h" 2





# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


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
# 180 "/usr/include/time.h" 3 4



extern clock_t clock (void) __attribute__ ((__nothrow__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));





extern char *strptime (__const char *__restrict __s,
         __const char *__restrict __fmt, struct tm *__tp)
     __attribute__ ((__nothrow__));







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__));



extern char *strptime_l (__const char *__restrict __s,
    __const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) __attribute__ ((__nothrow__));






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
# 390 "/usr/include/time.h" 3 4
extern int getdate_err;
# 399 "/usr/include/time.h" 3 4
extern struct tm *getdate (__const char *__string);
# 413 "/usr/include/time.h" 3 4
extern int getdate_r (__const char *__restrict __string,
        struct tm *__restrict __resbufp);



# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_reentrancy.h" 2
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_reentrancy.h"

# 119 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php_reentrancy.h"

# 409 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/php.h" 2
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/SAPI.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/SAPI.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_llist.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/SAPI.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_operators.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/SAPI.h" 2
# 51 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/SAPI.h"
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

# 167 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/SAPI.h"
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
 time_t (*get_request_time)(void);
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
# 302 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/main/SAPI.h"

__attribute__ ((visibility("default"))) void sapi_read_standard_form_data(void);
__attribute__ ((visibility("default"))) void php_default_post_reader(void);
__attribute__ ((visibility("default"))) void php_default_treat_data(int arg, char *str, zval* destArray );
__attribute__ ((visibility("default"))) unsigned int php_default_input_filter(int arg, char *var, char **val, unsigned int val_len, unsigned int *new_val_len );

# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/Zend/zend_variables.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/php_string.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/php_string.h"
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
__attribute__ ((visibility("default"))) char *php_addslashes_ex(char *str, int length, int *new_length, int freeit, int ignore_sybase );
__attribute__ ((visibility("default"))) char *php_addcslashes(char *str, int length, int *new_length, int freeit, char *what, int wlength );
__attribute__ ((visibility("default"))) void php_stripslashes(char *str, int *len );
__attribute__ ((visibility("default"))) void php_stripcslashes(char *str, int *len);
__attribute__ ((visibility("default"))) void php_basename(char *s, size_t len, char *suffix, size_t sufflen, char **p_ret, size_t *p_len );
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
# 161 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/php_string.h"
void register_string_constants(int type, int module_number );
# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/info.h" 1
# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/info.h"

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

# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/file.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/file.h"
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
# 93 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/file.h"
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
# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2



# 1 "/usr/include/libxml2/libxml/parser.h" 1
# 15 "/usr/include/libxml2/libxml/parser.h"
# 1 "/usr/include/libxml2/libxml/xmlversion.h" 1
# 13 "/usr/include/libxml2/libxml/xmlversion.h"
# 1 "/usr/include/libxml2/libxml/xmlexports.h" 1
# 14 "/usr/include/libxml2/libxml/xmlversion.h" 2
# 24 "/usr/include/libxml2/libxml/xmlversion.h"
 void xmlCheckVersion(int version);
# 16 "/usr/include/libxml2/libxml/parser.h" 2
# 1 "/usr/include/libxml2/libxml/tree.h" 1
# 17 "/usr/include/libxml2/libxml/tree.h"
# 1 "/usr/include/libxml2/libxml/xmlstring.h" 1
# 28 "/usr/include/libxml2/libxml/xmlstring.h"
typedef unsigned char xmlChar;
# 40 "/usr/include/libxml2/libxml/xmlstring.h"
 xmlChar *
                xmlStrdup (const xmlChar *cur);
 xmlChar *
                xmlStrndup (const xmlChar *cur,
                                         int len);
 xmlChar *
                xmlCharStrndup (const char *cur,
                                         int len);
 xmlChar *
                xmlCharStrdup (const char *cur);
 xmlChar *
                xmlStrsub (const xmlChar *str,
                                         int start,
                                         int len);
 const xmlChar *
                xmlStrchr (const xmlChar *str,
                                         xmlChar val);
 const xmlChar *
                xmlStrstr (const xmlChar *str,
                                         const xmlChar *val);
 const xmlChar *
                xmlStrcasestr (const xmlChar *str,
                                         const xmlChar *val);
 int
                xmlStrcmp (const xmlChar *str1,
                                         const xmlChar *str2);
 int
                xmlStrncmp (const xmlChar *str1,
                                         const xmlChar *str2,
                                         int len);
 int
                xmlStrcasecmp (const xmlChar *str1,
                                         const xmlChar *str2);
 int
                xmlStrncasecmp (const xmlChar *str1,
                                         const xmlChar *str2,
                                         int len);
 int
                xmlStrEqual (const xmlChar *str1,
                                         const xmlChar *str2);
 int
                xmlStrQEqual (const xmlChar *pref,
                                         const xmlChar *name,
                                         const xmlChar *str);
 int
                xmlStrlen (const xmlChar *str);
 xmlChar *
                xmlStrcat (xmlChar *cur,
                                         const xmlChar *add);
 xmlChar *
                xmlStrncat (xmlChar *cur,
                                         const xmlChar *add,
                                         int len);
 xmlChar *
                xmlStrncatNew (const xmlChar *str1,
                                         const xmlChar *str2,
                                         int len);
 int
                xmlStrPrintf (xmlChar *buf,
                                         int len,
                                         const xmlChar *msg,
                                         ...);
 int
                xmlStrVPrintf (xmlChar *buf,
                                         int len,
                                         const xmlChar *msg,
                                         va_list ap);

 int
        xmlGetUTF8Char (const unsigned char *utf,
                                         int *len);
 int
        xmlCheckUTF8 (const unsigned char *utf);
 int
        xmlUTF8Strsize (const xmlChar *utf,
                                         int len);
 xmlChar *
        xmlUTF8Strndup (const xmlChar *utf,
                                         int len);
 const xmlChar *
        xmlUTF8Strpos (const xmlChar *utf,
                                         int pos);
 int
        xmlUTF8Strloc (const xmlChar *utf,
                                         const xmlChar *utfchar);
 xmlChar *
        xmlUTF8Strsub (const xmlChar *utf,
                                         int start,
                                         int len);
 int
        xmlUTF8Strlen (const xmlChar *utf);
 int
        xmlUTF8Size (const xmlChar *utf);
 int
        xmlUTF8Charcmp (const xmlChar *utf1,
                                         const xmlChar *utf2);
# 18 "/usr/include/libxml2/libxml/tree.h" 2
# 27 "/usr/include/libxml2/libxml/tree.h"
typedef struct _xmlParserInputBuffer xmlParserInputBuffer;
typedef xmlParserInputBuffer *xmlParserInputBufferPtr;

typedef struct _xmlOutputBuffer xmlOutputBuffer;
typedef xmlOutputBuffer *xmlOutputBufferPtr;


typedef struct _xmlParserInput xmlParserInput;
typedef xmlParserInput *xmlParserInputPtr;

typedef struct _xmlParserCtxt xmlParserCtxt;
typedef xmlParserCtxt *xmlParserCtxtPtr;

typedef struct _xmlSAXLocator xmlSAXLocator;
typedef xmlSAXLocator *xmlSAXLocatorPtr;

typedef struct _xmlSAXHandler xmlSAXHandler;
typedef xmlSAXHandler *xmlSAXHandlerPtr;


typedef struct _xmlEntity xmlEntity;
typedef xmlEntity *xmlEntityPtr;
# 73 "/usr/include/libxml2/libxml/tree.h"
typedef enum {
    XML_BUFFER_ALLOC_DOUBLEIT,
    XML_BUFFER_ALLOC_EXACT,
    XML_BUFFER_ALLOC_IMMUTABLE,
    XML_BUFFER_ALLOC_IO
} xmlBufferAllocationScheme;






typedef struct _xmlBuffer xmlBuffer;
typedef xmlBuffer *xmlBufferPtr;
struct _xmlBuffer {
    xmlChar *content;
    unsigned int use;
    unsigned int size;
    xmlBufferAllocationScheme alloc;
    xmlChar *contentIO;
};
# 120 "/usr/include/libxml2/libxml/tree.h"
typedef enum {
    XML_ELEMENT_NODE= 1,
    XML_ATTRIBUTE_NODE= 2,
    XML_TEXT_NODE= 3,
    XML_CDATA_SECTION_NODE= 4,
    XML_ENTITY_REF_NODE= 5,
    XML_ENTITY_NODE= 6,
    XML_PI_NODE= 7,
    XML_COMMENT_NODE= 8,
    XML_DOCUMENT_NODE= 9,
    XML_DOCUMENT_TYPE_NODE= 10,
    XML_DOCUMENT_FRAG_NODE= 11,
    XML_NOTATION_NODE= 12,
    XML_HTML_DOCUMENT_NODE= 13,
    XML_DTD_NODE= 14,
    XML_ELEMENT_DECL= 15,
    XML_ATTRIBUTE_DECL= 16,
    XML_ENTITY_DECL= 17,
    XML_NAMESPACE_DECL= 18,
    XML_XINCLUDE_START= 19,
    XML_XINCLUDE_END= 20

   ,XML_DOCB_DOCUMENT_NODE= 21

} xmlElementType;
# 153 "/usr/include/libxml2/libxml/tree.h"
typedef struct _xmlNotation xmlNotation;
typedef xmlNotation *xmlNotationPtr;
struct _xmlNotation {
    const xmlChar *name;
    const xmlChar *PublicID;
    const xmlChar *SystemID;
};







typedef enum {
    XML_ATTRIBUTE_CDATA = 1,
    XML_ATTRIBUTE_ID,
    XML_ATTRIBUTE_IDREF ,
    XML_ATTRIBUTE_IDREFS,
    XML_ATTRIBUTE_ENTITY,
    XML_ATTRIBUTE_ENTITIES,
    XML_ATTRIBUTE_NMTOKEN,
    XML_ATTRIBUTE_NMTOKENS,
    XML_ATTRIBUTE_ENUMERATION,
    XML_ATTRIBUTE_NOTATION
} xmlAttributeType;







typedef enum {
    XML_ATTRIBUTE_NONE = 1,
    XML_ATTRIBUTE_REQUIRED,
    XML_ATTRIBUTE_IMPLIED,
    XML_ATTRIBUTE_FIXED
} xmlAttributeDefault;







typedef struct _xmlEnumeration xmlEnumeration;
typedef xmlEnumeration *xmlEnumerationPtr;
struct _xmlEnumeration {
    struct _xmlEnumeration *next;
    const xmlChar *name;
};







typedef struct _xmlAttribute xmlAttribute;
typedef xmlAttribute *xmlAttributePtr;
struct _xmlAttribute {
    void *_private;
    xmlElementType type;
    const xmlChar *name;
    struct _xmlNode *children;
    struct _xmlNode *last;
    struct _xmlDtd *parent;
    struct _xmlNode *next;
    struct _xmlNode *prev;
    struct _xmlDoc *doc;

    struct _xmlAttribute *nexth;
    xmlAttributeType atype;
    xmlAttributeDefault def;
    const xmlChar *defaultValue;
    xmlEnumerationPtr tree;
    const xmlChar *prefix;
    const xmlChar *elem;
};






typedef enum {
    XML_ELEMENT_CONTENT_PCDATA = 1,
    XML_ELEMENT_CONTENT_ELEMENT,
    XML_ELEMENT_CONTENT_SEQ,
    XML_ELEMENT_CONTENT_OR
} xmlElementContentType;






typedef enum {
    XML_ELEMENT_CONTENT_ONCE = 1,
    XML_ELEMENT_CONTENT_OPT,
    XML_ELEMENT_CONTENT_MULT,
    XML_ELEMENT_CONTENT_PLUS
} xmlElementContentOccur;
# 265 "/usr/include/libxml2/libxml/tree.h"
typedef struct _xmlElementContent xmlElementContent;
typedef xmlElementContent *xmlElementContentPtr;
struct _xmlElementContent {
    xmlElementContentType type;
    xmlElementContentOccur ocur;
    const xmlChar *name;
    struct _xmlElementContent *c1;
    struct _xmlElementContent *c2;
    struct _xmlElementContent *parent;
    const xmlChar *prefix;
};







typedef enum {
    XML_ELEMENT_TYPE_UNDEFINED = 0,
    XML_ELEMENT_TYPE_EMPTY = 1,
    XML_ELEMENT_TYPE_ANY,
    XML_ELEMENT_TYPE_MIXED,
    XML_ELEMENT_TYPE_ELEMENT
} xmlElementTypeVal;




# 1 "/usr/include/libxml2/libxml/xmlregexp.h" 1
# 28 "/usr/include/libxml2/libxml/xmlregexp.h"
typedef struct _xmlRegexp xmlRegexp;
typedef xmlRegexp *xmlRegexpPtr;






typedef struct _xmlRegExecCtxt xmlRegExecCtxt;
typedef xmlRegExecCtxt *xmlRegExecCtxtPtr;




# 1 "/usr/include/libxml2/libxml/tree.h" 1
# 43 "/usr/include/libxml2/libxml/xmlregexp.h" 2
# 1 "/usr/include/libxml2/libxml/dict.h" 1
# 24 "/usr/include/libxml2/libxml/dict.h"
typedef struct _xmlDict xmlDict;
typedef xmlDict *xmlDictPtr;




 xmlDictPtr
   xmlDictCreate (void);
 xmlDictPtr
   xmlDictCreateSub(xmlDictPtr sub);
 int
   xmlDictReference(xmlDictPtr dict);
 void
   xmlDictFree (xmlDictPtr dict);




 const xmlChar *
   xmlDictLookup (xmlDictPtr dict,
                           const xmlChar *name,
                           int len);
 const xmlChar *
   xmlDictExists (xmlDictPtr dict,
                           const xmlChar *name,
                           int len);
 const xmlChar *
   xmlDictQLookup (xmlDictPtr dict,
                           const xmlChar *prefix,
                           const xmlChar *name);
 int
   xmlDictOwns (xmlDictPtr dict,
      const xmlChar *str);
 int
   xmlDictSize (xmlDictPtr dict);




 void
                        xmlDictCleanup (void);
# 44 "/usr/include/libxml2/libxml/xmlregexp.h" 2







 xmlRegexpPtr
      xmlRegexpCompile (const xmlChar *regexp);
 void xmlRegFreeRegexp(xmlRegexpPtr regexp);
 int
      xmlRegexpExec (xmlRegexpPtr comp,
      const xmlChar *value);
 void
      xmlRegexpPrint (FILE *output,
      xmlRegexpPtr regexp);
 int
      xmlRegexpIsDeterminist(xmlRegexpPtr comp);
# 72 "/usr/include/libxml2/libxml/xmlregexp.h"
typedef void (*xmlRegExecCallbacks) (xmlRegExecCtxtPtr exec,
                              const xmlChar *token,
         void *transdata,
         void *inputdata);




 xmlRegExecCtxtPtr
      xmlRegNewExecCtxt (xmlRegexpPtr comp,
      xmlRegExecCallbacks callback,
      void *data);
 void
      xmlRegFreeExecCtxt (xmlRegExecCtxtPtr exec);
 int
      xmlRegExecPushString(xmlRegExecCtxtPtr exec,
      const xmlChar *value,
      void *data);
 int
      xmlRegExecPushString2(xmlRegExecCtxtPtr exec,
      const xmlChar *value,
      const xmlChar *value2,
      void *data);

 int
      xmlRegExecNextValues(xmlRegExecCtxtPtr exec,
      int *nbval,
      int *nbneg,
      xmlChar **values,
      int *terminal);
 int
      xmlRegExecErrInfo (xmlRegExecCtxtPtr exec,
      const xmlChar **string,
      int *nbval,
      int *nbneg,
      xmlChar **values,
      int *terminal);







typedef struct _xmlExpCtxt xmlExpCtxt;
typedef xmlExpCtxt *xmlExpCtxtPtr;

 void
   xmlExpFreeCtxt (xmlExpCtxtPtr ctxt);
 xmlExpCtxtPtr
   xmlExpNewCtxt (int maxNodes,
      xmlDictPtr dict);

 int
   xmlExpCtxtNbNodes(xmlExpCtxtPtr ctxt);
 int
   xmlExpCtxtNbCons(xmlExpCtxtPtr ctxt);


typedef struct _xmlExpNode xmlExpNode;
typedef xmlExpNode *xmlExpNodePtr;

typedef enum {
    XML_EXP_EMPTY = 0,
    XML_EXP_FORBID = 1,
    XML_EXP_ATOM = 2,
    XML_EXP_SEQ = 3,
    XML_EXP_OR = 4,
    XML_EXP_COUNT = 5
} xmlExpNodeType;





extern xmlExpNodePtr forbiddenExp;
extern xmlExpNodePtr emptyExp;




 void
   xmlExpFree (xmlExpCtxtPtr ctxt,
      xmlExpNodePtr expr);
 void
   xmlExpRef (xmlExpNodePtr expr);




 xmlExpNodePtr
   xmlExpParse (xmlExpCtxtPtr ctxt,
      const char *expr);
 xmlExpNodePtr
   xmlExpNewAtom (xmlExpCtxtPtr ctxt,
      const xmlChar *name,
      int len);
 xmlExpNodePtr
   xmlExpNewOr (xmlExpCtxtPtr ctxt,
      xmlExpNodePtr left,
      xmlExpNodePtr right);
 xmlExpNodePtr
   xmlExpNewSeq (xmlExpCtxtPtr ctxt,
      xmlExpNodePtr left,
      xmlExpNodePtr right);
 xmlExpNodePtr
   xmlExpNewRange (xmlExpCtxtPtr ctxt,
      xmlExpNodePtr subset,
      int min,
      int max);



 int
   xmlExpIsNillable(xmlExpNodePtr expr);
 int
   xmlExpMaxToken (xmlExpNodePtr expr);
 int
   xmlExpGetLanguage(xmlExpCtxtPtr ctxt,
      xmlExpNodePtr expr,
      const xmlChar**langList,
      int len);
 int
   xmlExpGetStart (xmlExpCtxtPtr ctxt,
      xmlExpNodePtr expr,
      const xmlChar**tokList,
      int len);
 xmlExpNodePtr
   xmlExpStringDerive(xmlExpCtxtPtr ctxt,
      xmlExpNodePtr expr,
      const xmlChar *str,
      int len);
 xmlExpNodePtr
   xmlExpExpDerive (xmlExpCtxtPtr ctxt,
      xmlExpNodePtr expr,
      xmlExpNodePtr sub);
 int
   xmlExpSubsume (xmlExpCtxtPtr ctxt,
      xmlExpNodePtr expr,
      xmlExpNodePtr sub);
 void
   xmlExpDump (xmlBufferPtr buf,
      xmlExpNodePtr expr);
# 295 "/usr/include/libxml2/libxml/tree.h" 2
# 305 "/usr/include/libxml2/libxml/tree.h"
typedef struct _xmlElement xmlElement;
typedef xmlElement *xmlElementPtr;
struct _xmlElement {
    void *_private;
    xmlElementType type;
    const xmlChar *name;
    struct _xmlNode *children;
    struct _xmlNode *last;
    struct _xmlDtd *parent;
    struct _xmlNode *next;
    struct _xmlNode *prev;
    struct _xmlDoc *doc;

    xmlElementTypeVal etype;
    xmlElementContentPtr content;
    xmlAttributePtr attributes;
    const xmlChar *prefix;

    xmlRegexpPtr contModel;



};
# 336 "/usr/include/libxml2/libxml/tree.h"
typedef xmlElementType xmlNsType;
# 348 "/usr/include/libxml2/libxml/tree.h"
typedef struct _xmlNs xmlNs;
typedef xmlNs *xmlNsPtr;
struct _xmlNs {
    struct _xmlNs *next;
    xmlNsType type;
    const xmlChar *href;
    const xmlChar *prefix;
    void *_private;
    struct _xmlDoc *context;
};







typedef struct _xmlDtd xmlDtd;
typedef xmlDtd *xmlDtdPtr;
struct _xmlDtd {
    void *_private;
    xmlElementType type;
    const xmlChar *name;
    struct _xmlNode *children;
    struct _xmlNode *last;
    struct _xmlDoc *parent;
    struct _xmlNode *next;
    struct _xmlNode *prev;
    struct _xmlDoc *doc;


    void *notations;
    void *elements;
    void *attributes;
    void *entities;
    const xmlChar *ExternalID;
    const xmlChar *SystemID;
    void *pentities;
};






typedef struct _xmlAttr xmlAttr;
typedef xmlAttr *xmlAttrPtr;
struct _xmlAttr {
    void *_private;
    xmlElementType type;
    const xmlChar *name;
    struct _xmlNode *children;
    struct _xmlNode *last;
    struct _xmlNode *parent;
    struct _xmlAttr *next;
    struct _xmlAttr *prev;
    struct _xmlDoc *doc;
    xmlNs *ns;
    xmlAttributeType atype;
    void *psvi;
};







typedef struct _xmlID xmlID;
typedef xmlID *xmlIDPtr;
struct _xmlID {
    struct _xmlID *next;
    const xmlChar *value;
    xmlAttrPtr attr;
    const xmlChar *name;
    int lineno;
    struct _xmlDoc *doc;
};







typedef struct _xmlRef xmlRef;
typedef xmlRef *xmlRefPtr;
struct _xmlRef {
    struct _xmlRef *next;
    const xmlChar *value;
    xmlAttrPtr attr;
    const xmlChar *name;
    int lineno;
};






typedef struct _xmlNode xmlNode;
typedef xmlNode *xmlNodePtr;
struct _xmlNode {
    void *_private;
    xmlElementType type;
    const xmlChar *name;
    struct _xmlNode *children;
    struct _xmlNode *last;
    struct _xmlNode *parent;
    struct _xmlNode *next;
    struct _xmlNode *prev;
    struct _xmlDoc *doc;


    xmlNs *ns;
    xmlChar *content;
    struct _xmlAttr *properties;
    xmlNs *nsDef;
    void *psvi;
    unsigned short line;
    unsigned short extra;
};
# 493 "/usr/include/libxml2/libxml/tree.h"
typedef enum {
    XML_DOC_WELLFORMED = 1<<0,
    XML_DOC_NSVALID = 1<<1,
    XML_DOC_OLD10 = 1<<2,
    XML_DOC_DTDVALID = 1<<3,
    XML_DOC_XINCLUDE = 1<<4,
    XML_DOC_USERBUILT = 1<<5,

    XML_DOC_INTERNAL = 1<<6,
    XML_DOC_HTML = 1<<7
} xmlDocProperties;






typedef struct _xmlDoc xmlDoc;
typedef xmlDoc *xmlDocPtr;
struct _xmlDoc {
    void *_private;
    xmlElementType type;
    char *name;
    struct _xmlNode *children;
    struct _xmlNode *last;
    struct _xmlNode *parent;
    struct _xmlNode *next;
    struct _xmlNode *prev;
    struct _xmlDoc *doc;


    int compression;
    int standalone;





    struct _xmlDtd *intSubset;
    struct _xmlDtd *extSubset;
    struct _xmlNs *oldNs;
    const xmlChar *version;
    const xmlChar *encoding;
    void *ids;
    void *refs;
    const xmlChar *URL;
    int charset;

    struct _xmlDict *dict;
    void *psvi;
    int parseFlags;

    int properties;

};


typedef struct _xmlDOMWrapCtxt xmlDOMWrapCtxt;
typedef xmlDOMWrapCtxt *xmlDOMWrapCtxtPtr;
# 564 "/usr/include/libxml2/libxml/tree.h"
typedef xmlNsPtr (*xmlDOMWrapAcquireNsFunction) (xmlDOMWrapCtxtPtr ctxt,
       xmlNodePtr node,
       const xmlChar *nsName,
       const xmlChar *nsPrefix);






struct _xmlDOMWrapCtxt {
    void * _private;




    int type;



    void * namespaceMap;




    xmlDOMWrapAcquireNsFunction getNsForNodeFunc;
};
# 620 "/usr/include/libxml2/libxml/tree.h"
 int
  xmlValidateNCName (const xmlChar *value,
      int space);



 int
  xmlValidateQName (const xmlChar *value,
      int space);
 int
  xmlValidateName (const xmlChar *value,
      int space);
 int
  xmlValidateNMToken (const xmlChar *value,
      int space);


 xmlChar *
  xmlBuildQName (const xmlChar *ncname,
      const xmlChar *prefix,
      xmlChar *memory,
      int len);
 xmlChar *
  xmlSplitQName2 (const xmlChar *name,
      xmlChar **prefix);
 const xmlChar *
  xmlSplitQName3 (const xmlChar *name,
      int *len);





 void
  xmlSetBufferAllocationScheme(xmlBufferAllocationScheme scheme);
 xmlBufferAllocationScheme
  xmlGetBufferAllocationScheme(void);

 xmlBufferPtr
  xmlBufferCreate (void);
 xmlBufferPtr
  xmlBufferCreateSize (size_t size);
 xmlBufferPtr
  xmlBufferCreateStatic (void *mem,
      size_t size);
 int
  xmlBufferResize (xmlBufferPtr buf,
      unsigned int size);
 void
  xmlBufferFree (xmlBufferPtr buf);
 int
  xmlBufferDump (FILE *file,
      xmlBufferPtr buf);
 int
  xmlBufferAdd (xmlBufferPtr buf,
      const xmlChar *str,
      int len);
 int
  xmlBufferAddHead (xmlBufferPtr buf,
      const xmlChar *str,
      int len);
 int
  xmlBufferCat (xmlBufferPtr buf,
      const xmlChar *str);
 int
  xmlBufferCCat (xmlBufferPtr buf,
      const char *str);
 int
  xmlBufferShrink (xmlBufferPtr buf,
      unsigned int len);
 int
  xmlBufferGrow (xmlBufferPtr buf,
      unsigned int len);
 void
  xmlBufferEmpty (xmlBufferPtr buf);
 const xmlChar*
  xmlBufferContent (const xmlBufferPtr buf);
 void
  xmlBufferSetAllocationScheme(xmlBufferPtr buf,
      xmlBufferAllocationScheme scheme);
 int
  xmlBufferLength (const xmlBufferPtr buf);




 xmlDtdPtr
  xmlCreateIntSubset (xmlDocPtr doc,
      const xmlChar *name,
      const xmlChar *ExternalID,
      const xmlChar *SystemID);
 xmlDtdPtr
  xmlNewDtd (xmlDocPtr doc,
      const xmlChar *name,
      const xmlChar *ExternalID,
      const xmlChar *SystemID);
 xmlDtdPtr
  xmlGetIntSubset (xmlDocPtr doc);
 void
  xmlFreeDtd (xmlDtdPtr cur);

 xmlNsPtr
  xmlNewGlobalNs (xmlDocPtr doc,
      const xmlChar *href,
      const xmlChar *prefix);

 xmlNsPtr
  xmlNewNs (xmlNodePtr node,
      const xmlChar *href,
      const xmlChar *prefix);
 void
  xmlFreeNs (xmlNsPtr cur);
 void
  xmlFreeNsList (xmlNsPtr cur);
 xmlDocPtr
  xmlNewDoc (const xmlChar *version);
 void
  xmlFreeDoc (xmlDocPtr cur);
 xmlAttrPtr
  xmlNewDocProp (xmlDocPtr doc,
      const xmlChar *name,
      const xmlChar *value);


 xmlAttrPtr
  xmlNewProp (xmlNodePtr node,
      const xmlChar *name,
      const xmlChar *value);

 xmlAttrPtr
  xmlNewNsProp (xmlNodePtr node,
      xmlNsPtr ns,
      const xmlChar *name,
      const xmlChar *value);
 xmlAttrPtr
  xmlNewNsPropEatName (xmlNodePtr node,
      xmlNsPtr ns,
      xmlChar *name,
      const xmlChar *value);
 void
  xmlFreePropList (xmlAttrPtr cur);
 void
  xmlFreeProp (xmlAttrPtr cur);
 xmlAttrPtr
  xmlCopyProp (xmlNodePtr target,
      xmlAttrPtr cur);
 xmlAttrPtr
  xmlCopyPropList (xmlNodePtr target,
      xmlAttrPtr cur);

 xmlDtdPtr
  xmlCopyDtd (xmlDtdPtr dtd);


 xmlDocPtr
  xmlCopyDoc (xmlDocPtr doc,
      int recursive);




 xmlNodePtr
  xmlNewDocNode (xmlDocPtr doc,
      xmlNsPtr ns,
      const xmlChar *name,
      const xmlChar *content);
 xmlNodePtr
  xmlNewDocNodeEatName (xmlDocPtr doc,
      xmlNsPtr ns,
      xmlChar *name,
      const xmlChar *content);
 xmlNodePtr
  xmlNewNode (xmlNsPtr ns,
      const xmlChar *name);
 xmlNodePtr
  xmlNewNodeEatName (xmlNsPtr ns,
      xmlChar *name);

 xmlNodePtr
  xmlNewChild (xmlNodePtr parent,
      xmlNsPtr ns,
      const xmlChar *name,
      const xmlChar *content);

 xmlNodePtr
  xmlNewDocText (xmlDocPtr doc,
      const xmlChar *content);
 xmlNodePtr
  xmlNewText (const xmlChar *content);
 xmlNodePtr
  xmlNewDocPI (xmlDocPtr doc,
      const xmlChar *name,
      const xmlChar *content);
 xmlNodePtr
  xmlNewPI (const xmlChar *name,
      const xmlChar *content);
 xmlNodePtr
  xmlNewDocTextLen (xmlDocPtr doc,
      const xmlChar *content,
      int len);
 xmlNodePtr
  xmlNewTextLen (const xmlChar *content,
      int len);
 xmlNodePtr
  xmlNewDocComment (xmlDocPtr doc,
      const xmlChar *content);
 xmlNodePtr
  xmlNewComment (const xmlChar *content);
 xmlNodePtr
  xmlNewCDataBlock (xmlDocPtr doc,
      const xmlChar *content,
      int len);
 xmlNodePtr
  xmlNewCharRef (xmlDocPtr doc,
      const xmlChar *name);
 xmlNodePtr
  xmlNewReference (xmlDocPtr doc,
      const xmlChar *name);
 xmlNodePtr
  xmlCopyNode (const xmlNodePtr node,
      int recursive);
 xmlNodePtr
  xmlDocCopyNode (const xmlNodePtr node,
      xmlDocPtr doc,
      int recursive);
 xmlNodePtr
  xmlDocCopyNodeList (xmlDocPtr doc,
      const xmlNodePtr node);
 xmlNodePtr
  xmlCopyNodeList (const xmlNodePtr node);

 xmlNodePtr
  xmlNewTextChild (xmlNodePtr parent,
      xmlNsPtr ns,
      const xmlChar *name,
      const xmlChar *content);
 xmlNodePtr
  xmlNewDocRawNode (xmlDocPtr doc,
      xmlNsPtr ns,
      const xmlChar *name,
      const xmlChar *content);
 xmlNodePtr
  xmlNewDocFragment (xmlDocPtr doc);





 long
  xmlGetLineNo (xmlNodePtr node);

 xmlChar *
  xmlGetNodePath (xmlNodePtr node);

 xmlNodePtr
  xmlDocGetRootElement (xmlDocPtr doc);
 xmlNodePtr
  xmlGetLastChild (xmlNodePtr parent);
 int
  xmlNodeIsText (xmlNodePtr node);
 int
  xmlIsBlankNode (xmlNodePtr node);





 xmlNodePtr
  xmlDocSetRootElement (xmlDocPtr doc,
      xmlNodePtr root);


 void
  xmlNodeSetName (xmlNodePtr cur,
      const xmlChar *name);

 xmlNodePtr
  xmlAddChild (xmlNodePtr parent,
      xmlNodePtr cur);
 xmlNodePtr
  xmlAddChildList (xmlNodePtr parent,
      xmlNodePtr cur);

 xmlNodePtr
  xmlReplaceNode (xmlNodePtr old,
      xmlNodePtr cur);



 xmlNodePtr
  xmlAddPrevSibling (xmlNodePtr cur,
      xmlNodePtr elem);

 xmlNodePtr
  xmlAddSibling (xmlNodePtr cur,
      xmlNodePtr elem);
 xmlNodePtr
  xmlAddNextSibling (xmlNodePtr cur,
      xmlNodePtr elem);
 void
  xmlUnlinkNode (xmlNodePtr cur);
 xmlNodePtr
  xmlTextMerge (xmlNodePtr first,
      xmlNodePtr second);
 int
  xmlTextConcat (xmlNodePtr node,
      const xmlChar *content,
      int len);
 void
  xmlFreeNodeList (xmlNodePtr cur);
 void
  xmlFreeNode (xmlNodePtr cur);
 void
  xmlSetTreeDoc (xmlNodePtr tree,
      xmlDocPtr doc);
 void
  xmlSetListDoc (xmlNodePtr list,
      xmlDocPtr doc);



 xmlNsPtr
  xmlSearchNs (xmlDocPtr doc,
      xmlNodePtr node,
      const xmlChar *nameSpace);
 xmlNsPtr
  xmlSearchNsByHref (xmlDocPtr doc,
      xmlNodePtr node,
      const xmlChar *href);

 xmlNsPtr *
  xmlGetNsList (xmlDocPtr doc,
      xmlNodePtr node);


 void
  xmlSetNs (xmlNodePtr node,
      xmlNsPtr ns);
 xmlNsPtr
  xmlCopyNamespace (xmlNsPtr cur);
 xmlNsPtr
  xmlCopyNamespaceList (xmlNsPtr cur);





 xmlAttrPtr
  xmlSetProp (xmlNodePtr node,
      const xmlChar *name,
      const xmlChar *value);
 xmlAttrPtr
  xmlSetNsProp (xmlNodePtr node,
      xmlNsPtr ns,
      const xmlChar *name,
      const xmlChar *value);

 xmlChar *
  xmlGetNoNsProp (xmlNodePtr node,
      const xmlChar *name);
 xmlChar *
  xmlGetProp (xmlNodePtr node,
      const xmlChar *name);
 xmlAttrPtr
  xmlHasProp (xmlNodePtr node,
      const xmlChar *name);
 xmlAttrPtr
  xmlHasNsProp (xmlNodePtr node,
      const xmlChar *name,
      const xmlChar *nameSpace);
 xmlChar *
  xmlGetNsProp (xmlNodePtr node,
      const xmlChar *name,
      const xmlChar *nameSpace);
 xmlNodePtr
  xmlStringGetNodeList (xmlDocPtr doc,
      const xmlChar *value);
 xmlNodePtr
  xmlStringLenGetNodeList (xmlDocPtr doc,
      const xmlChar *value,
      int len);
 xmlChar *
  xmlNodeListGetString (xmlDocPtr doc,
      xmlNodePtr list,
      int inLine);

 xmlChar *
  xmlNodeListGetRawString (xmlDocPtr doc,
      xmlNodePtr list,
      int inLine);

 void
  xmlNodeSetContent (xmlNodePtr cur,
      const xmlChar *content);

 void
  xmlNodeSetContentLen (xmlNodePtr cur,
      const xmlChar *content,
      int len);

 void
  xmlNodeAddContent (xmlNodePtr cur,
      const xmlChar *content);
 void
  xmlNodeAddContentLen (xmlNodePtr cur,
      const xmlChar *content,
      int len);
 xmlChar *
  xmlNodeGetContent (xmlNodePtr cur);
 int
  xmlNodeBufGetContent (xmlBufferPtr buffer,
      xmlNodePtr cur);
 xmlChar *
  xmlNodeGetLang (xmlNodePtr cur);
 int
  xmlNodeGetSpacePreserve (xmlNodePtr cur);

 void
  xmlNodeSetLang (xmlNodePtr cur,
      const xmlChar *lang);
 void
  xmlNodeSetSpacePreserve (xmlNodePtr cur,
      int val);

 xmlChar *
  xmlNodeGetBase (xmlDocPtr doc,
      xmlNodePtr cur);

 void
  xmlNodeSetBase (xmlNodePtr cur,
      const xmlChar *uri);





 int
  xmlRemoveProp (xmlAttrPtr cur);

 int
  xmlUnsetNsProp (xmlNodePtr node,
      xmlNsPtr ns,
      const xmlChar *name);
 int
  xmlUnsetProp (xmlNodePtr node,
      const xmlChar *name);





 void
  xmlBufferWriteCHAR (xmlBufferPtr buf,
      const xmlChar *string);
 void
  xmlBufferWriteChar (xmlBufferPtr buf,
      const char *string);
 void
  xmlBufferWriteQuotedString(xmlBufferPtr buf,
      const xmlChar *string);


 void xmlAttrSerializeTxtContent(xmlBufferPtr buf,
      xmlDocPtr doc,
      xmlAttrPtr attr,
      const xmlChar *string);






 int
  xmlReconciliateNs (xmlDocPtr doc,
      xmlNodePtr tree);






 void
  xmlDocDumpFormatMemory (xmlDocPtr cur,
      xmlChar **mem,
      int *size,
      int format);
 void
  xmlDocDumpMemory (xmlDocPtr cur,
      xmlChar **mem,
      int *size);
 void
  xmlDocDumpMemoryEnc (xmlDocPtr out_doc,
      xmlChar **doc_txt_ptr,
      int * doc_txt_len,
      const char *txt_encoding);
 void
  xmlDocDumpFormatMemoryEnc(xmlDocPtr out_doc,
      xmlChar **doc_txt_ptr,
      int * doc_txt_len,
      const char *txt_encoding,
      int format);
 int
  xmlDocFormatDump (FILE *f,
      xmlDocPtr cur,
      int format);
 int
  xmlDocDump (FILE *f,
      xmlDocPtr cur);
 void
  xmlElemDump (FILE *f,
      xmlDocPtr doc,
      xmlNodePtr cur);
 int
  xmlSaveFile (const char *filename,
      xmlDocPtr cur);
 int
  xmlSaveFormatFile (const char *filename,
      xmlDocPtr cur,
      int format);
 int
  xmlNodeDump (xmlBufferPtr buf,
      xmlDocPtr doc,
      xmlNodePtr cur,
      int level,
      int format);

 int
  xmlSaveFileTo (xmlOutputBufferPtr buf,
      xmlDocPtr cur,
      const char *encoding);
 int
  xmlSaveFormatFileTo (xmlOutputBufferPtr buf,
      xmlDocPtr cur,
             const char *encoding,
             int format);
 void
  xmlNodeDumpOutput (xmlOutputBufferPtr buf,
      xmlDocPtr doc,
      xmlNodePtr cur,
      int level,
      int format,
      const char *encoding);

 int
  xmlSaveFormatFileEnc (const char *filename,
      xmlDocPtr cur,
      const char *encoding,
      int format);

 int
  xmlSaveFileEnc (const char *filename,
      xmlDocPtr cur,
      const char *encoding);





 int
  xmlIsXHTML (const xmlChar *systemID,
      const xmlChar *publicID);




 int
  xmlGetDocCompressMode (xmlDocPtr doc);
 void
  xmlSetDocCompressMode (xmlDocPtr doc,
      int mode);
 int
  xmlGetCompressMode (void);
 void
  xmlSetCompressMode (int mode);




 xmlDOMWrapCtxtPtr
  xmlDOMWrapNewCtxt (void);
 void
  xmlDOMWrapFreeCtxt (xmlDOMWrapCtxtPtr ctxt);
 int
     xmlDOMWrapReconcileNamespaces(xmlDOMWrapCtxtPtr ctxt,
      xmlNodePtr elem,
      int options);
 int
     xmlDOMWrapAdoptNode (xmlDOMWrapCtxtPtr ctxt,
      xmlDocPtr sourceDoc,
      xmlNodePtr node,
      xmlDocPtr destDoc,
      xmlNodePtr destParent,
      int options);
 int
     xmlDOMWrapRemoveNode (xmlDOMWrapCtxtPtr ctxt,
      xmlDocPtr doc,
      xmlNodePtr node,
      int options);
 int
     xmlDOMWrapCloneNode (xmlDOMWrapCtxtPtr ctxt,
      xmlDocPtr sourceDoc,
      xmlNodePtr node,
      xmlNodePtr *clonedNode,
      xmlDocPtr destDoc,
      xmlNodePtr destParent,
      int deep,
      int options);






 unsigned long
            xmlChildElementCount (xmlNodePtr parent);
 xmlNodePtr
            xmlNextElementSibling (xmlNodePtr node);
 xmlNodePtr
            xmlFirstElementChild (xmlNodePtr parent);
 xmlNodePtr
            xmlLastElementChild (xmlNodePtr parent);
 xmlNodePtr
            xmlPreviousElementSibling (xmlNodePtr node);
# 17 "/usr/include/libxml2/libxml/parser.h" 2

# 1 "/usr/include/libxml2/libxml/hash.h" 1
# 21 "/usr/include/libxml2/libxml/hash.h"
typedef struct _xmlHashTable xmlHashTable;
typedef xmlHashTable *xmlHashTablePtr;






# 1 "/usr/include/libxml2/libxml/parser.h" 1
# 30 "/usr/include/libxml2/libxml/hash.h" 2
# 69 "/usr/include/libxml2/libxml/hash.h"
typedef void (*xmlHashDeallocator)(void *payload, xmlChar *name);
# 79 "/usr/include/libxml2/libxml/hash.h"
typedef void *(*xmlHashCopier)(void *payload, xmlChar *name);
# 88 "/usr/include/libxml2/libxml/hash.h"
typedef void (*xmlHashScanner)(void *payload, void *data, xmlChar *name);
# 99 "/usr/include/libxml2/libxml/hash.h"
typedef void (*xmlHashScannerFull)(void *payload, void *data,
       const xmlChar *name, const xmlChar *name2,
       const xmlChar *name3);




 xmlHashTablePtr
   xmlHashCreate (int size);
 xmlHashTablePtr
   xmlHashCreateDict(int size,
      xmlDictPtr dict);
 void
   xmlHashFree (xmlHashTablePtr table,
      xmlHashDeallocator f);




 int
   xmlHashAddEntry (xmlHashTablePtr table,
                           const xmlChar *name,
                           void *userdata);
 int
   xmlHashUpdateEntry(xmlHashTablePtr table,
                           const xmlChar *name,
                           void *userdata,
      xmlHashDeallocator f);
 int
   xmlHashAddEntry2(xmlHashTablePtr table,
                           const xmlChar *name,
                           const xmlChar *name2,
                           void *userdata);
 int
   xmlHashUpdateEntry2(xmlHashTablePtr table,
                           const xmlChar *name,
                           const xmlChar *name2,
                           void *userdata,
      xmlHashDeallocator f);
 int
   xmlHashAddEntry3(xmlHashTablePtr table,
                           const xmlChar *name,
                           const xmlChar *name2,
                           const xmlChar *name3,
                           void *userdata);
 int
   xmlHashUpdateEntry3(xmlHashTablePtr table,
                           const xmlChar *name,
                           const xmlChar *name2,
                           const xmlChar *name3,
                           void *userdata,
      xmlHashDeallocator f);




 int
   xmlHashRemoveEntry(xmlHashTablePtr table, const xmlChar *name,
                           xmlHashDeallocator f);
 int
   xmlHashRemoveEntry2(xmlHashTablePtr table, const xmlChar *name,
                            const xmlChar *name2, xmlHashDeallocator f);
 int
   xmlHashRemoveEntry3(xmlHashTablePtr table, const xmlChar *name,
                            const xmlChar *name2, const xmlChar *name3,
                            xmlHashDeallocator f);




 void *
   xmlHashLookup (xmlHashTablePtr table,
      const xmlChar *name);
 void *
   xmlHashLookup2 (xmlHashTablePtr table,
      const xmlChar *name,
      const xmlChar *name2);
 void *
   xmlHashLookup3 (xmlHashTablePtr table,
      const xmlChar *name,
      const xmlChar *name2,
      const xmlChar *name3);
 void *
   xmlHashQLookup (xmlHashTablePtr table,
      const xmlChar *name,
      const xmlChar *prefix);
 void *
   xmlHashQLookup2 (xmlHashTablePtr table,
      const xmlChar *name,
      const xmlChar *prefix,
      const xmlChar *name2,
      const xmlChar *prefix2);
 void *
   xmlHashQLookup3 (xmlHashTablePtr table,
      const xmlChar *name,
      const xmlChar *prefix,
      const xmlChar *name2,
      const xmlChar *prefix2,
      const xmlChar *name3,
      const xmlChar *prefix3);




 xmlHashTablePtr
   xmlHashCopy (xmlHashTablePtr table,
      xmlHashCopier f);
 int
   xmlHashSize (xmlHashTablePtr table);
 void
   xmlHashScan (xmlHashTablePtr table,
      xmlHashScanner f,
      void *data);
 void
   xmlHashScan3 (xmlHashTablePtr table,
      const xmlChar *name,
      const xmlChar *name2,
      const xmlChar *name3,
      xmlHashScanner f,
      void *data);
 void
   xmlHashScanFull (xmlHashTablePtr table,
      xmlHashScannerFull f,
      void *data);
 void
   xmlHashScanFull3(xmlHashTablePtr table,
      const xmlChar *name,
      const xmlChar *name2,
      const xmlChar *name3,
      xmlHashScannerFull f,
      void *data);
# 19 "/usr/include/libxml2/libxml/parser.h" 2
# 1 "/usr/include/libxml2/libxml/valid.h" 1
# 15 "/usr/include/libxml2/libxml/valid.h"
# 1 "/usr/include/libxml2/libxml/xmlerror.h" 1
# 24 "/usr/include/libxml2/libxml/xmlerror.h"
typedef enum {
    XML_ERR_NONE = 0,
    XML_ERR_WARNING = 1,
    XML_ERR_ERROR = 2,
    XML_ERR_FATAL = 3
} xmlErrorLevel;






typedef enum {
    XML_FROM_NONE = 0,
    XML_FROM_PARSER,
    XML_FROM_TREE,
    XML_FROM_NAMESPACE,
    XML_FROM_DTD,
    XML_FROM_HTML,
    XML_FROM_MEMORY,
    XML_FROM_OUTPUT,
    XML_FROM_IO,
    XML_FROM_FTP,
    XML_FROM_HTTP,
    XML_FROM_XINCLUDE,
    XML_FROM_XPATH,
    XML_FROM_XPOINTER,
    XML_FROM_REGEXP,
    XML_FROM_DATATYPE,
    XML_FROM_SCHEMASP,
    XML_FROM_SCHEMASV,
    XML_FROM_RELAXNGP,
    XML_FROM_RELAXNGV,
    XML_FROM_CATALOG,
    XML_FROM_C14N,
    XML_FROM_XSLT,
    XML_FROM_VALID,
    XML_FROM_CHECK,
    XML_FROM_WRITER,
    XML_FROM_MODULE,
    XML_FROM_I18N,
    XML_FROM_SCHEMATRONV
} xmlErrorDomain;







typedef struct _xmlError xmlError;
typedef xmlError *xmlErrorPtr;
struct _xmlError {
    int domain;
    int code;
    char *message;
    xmlErrorLevel level;
    char *file;
    int line;
    char *str1;
    char *str2;
    char *str3;
    int int1;
    int int2;
    void *ctxt;
    void *node;
};






typedef enum {
    XML_ERR_OK = 0,
    XML_ERR_INTERNAL_ERROR,
    XML_ERR_NO_MEMORY,
    XML_ERR_DOCUMENT_START,
    XML_ERR_DOCUMENT_EMPTY,
    XML_ERR_DOCUMENT_END,
    XML_ERR_INVALID_HEX_CHARREF,
    XML_ERR_INVALID_DEC_CHARREF,
    XML_ERR_INVALID_CHARREF,
    XML_ERR_INVALID_CHAR,
    XML_ERR_CHARREF_AT_EOF,
    XML_ERR_CHARREF_IN_PROLOG,
    XML_ERR_CHARREF_IN_EPILOG,
    XML_ERR_CHARREF_IN_DTD,
    XML_ERR_ENTITYREF_AT_EOF,
    XML_ERR_ENTITYREF_IN_PROLOG,
    XML_ERR_ENTITYREF_IN_EPILOG,
    XML_ERR_ENTITYREF_IN_DTD,
    XML_ERR_PEREF_AT_EOF,
    XML_ERR_PEREF_IN_PROLOG,
    XML_ERR_PEREF_IN_EPILOG,
    XML_ERR_PEREF_IN_INT_SUBSET,
    XML_ERR_ENTITYREF_NO_NAME,
    XML_ERR_ENTITYREF_SEMICOL_MISSING,
    XML_ERR_PEREF_NO_NAME,
    XML_ERR_PEREF_SEMICOL_MISSING,
    XML_ERR_UNDECLARED_ENTITY,
    XML_WAR_UNDECLARED_ENTITY,
    XML_ERR_UNPARSED_ENTITY,
    XML_ERR_ENTITY_IS_EXTERNAL,
    XML_ERR_ENTITY_IS_PARAMETER,
    XML_ERR_UNKNOWN_ENCODING,
    XML_ERR_UNSUPPORTED_ENCODING,
    XML_ERR_STRING_NOT_STARTED,
    XML_ERR_STRING_NOT_CLOSED,
    XML_ERR_NS_DECL_ERROR,
    XML_ERR_ENTITY_NOT_STARTED,
    XML_ERR_ENTITY_NOT_FINISHED,
    XML_ERR_LT_IN_ATTRIBUTE,
    XML_ERR_ATTRIBUTE_NOT_STARTED,
    XML_ERR_ATTRIBUTE_NOT_FINISHED,
    XML_ERR_ATTRIBUTE_WITHOUT_VALUE,
    XML_ERR_ATTRIBUTE_REDEFINED,
    XML_ERR_LITERAL_NOT_STARTED,
    XML_ERR_LITERAL_NOT_FINISHED,
    XML_ERR_COMMENT_NOT_FINISHED,
    XML_ERR_PI_NOT_STARTED,
    XML_ERR_PI_NOT_FINISHED,
    XML_ERR_NOTATION_NOT_STARTED,
    XML_ERR_NOTATION_NOT_FINISHED,
    XML_ERR_ATTLIST_NOT_STARTED,
    XML_ERR_ATTLIST_NOT_FINISHED,
    XML_ERR_MIXED_NOT_STARTED,
    XML_ERR_MIXED_NOT_FINISHED,
    XML_ERR_ELEMCONTENT_NOT_STARTED,
    XML_ERR_ELEMCONTENT_NOT_FINISHED,
    XML_ERR_XMLDECL_NOT_STARTED,
    XML_ERR_XMLDECL_NOT_FINISHED,
    XML_ERR_CONDSEC_NOT_STARTED,
    XML_ERR_CONDSEC_NOT_FINISHED,
    XML_ERR_EXT_SUBSET_NOT_FINISHED,
    XML_ERR_DOCTYPE_NOT_FINISHED,
    XML_ERR_MISPLACED_CDATA_END,
    XML_ERR_CDATA_NOT_FINISHED,
    XML_ERR_RESERVED_XML_NAME,
    XML_ERR_SPACE_REQUIRED,
    XML_ERR_SEPARATOR_REQUIRED,
    XML_ERR_NMTOKEN_REQUIRED,
    XML_ERR_NAME_REQUIRED,
    XML_ERR_PCDATA_REQUIRED,
    XML_ERR_URI_REQUIRED,
    XML_ERR_PUBID_REQUIRED,
    XML_ERR_LT_REQUIRED,
    XML_ERR_GT_REQUIRED,
    XML_ERR_LTSLASH_REQUIRED,
    XML_ERR_EQUAL_REQUIRED,
    XML_ERR_TAG_NAME_MISMATCH,
    XML_ERR_TAG_NOT_FINISHED,
    XML_ERR_STANDALONE_VALUE,
    XML_ERR_ENCODING_NAME,
    XML_ERR_HYPHEN_IN_COMMENT,
    XML_ERR_INVALID_ENCODING,
    XML_ERR_EXT_ENTITY_STANDALONE,
    XML_ERR_CONDSEC_INVALID,
    XML_ERR_VALUE_REQUIRED,
    XML_ERR_NOT_WELL_BALANCED,
    XML_ERR_EXTRA_CONTENT,
    XML_ERR_ENTITY_CHAR_ERROR,
    XML_ERR_ENTITY_PE_INTERNAL,
    XML_ERR_ENTITY_LOOP,
    XML_ERR_ENTITY_BOUNDARY,
    XML_ERR_INVALID_URI,
    XML_ERR_URI_FRAGMENT,
    XML_WAR_CATALOG_PI,
    XML_ERR_NO_DTD,
    XML_ERR_CONDSEC_INVALID_KEYWORD,
    XML_ERR_VERSION_MISSING,
    XML_WAR_UNKNOWN_VERSION,
    XML_WAR_LANG_VALUE,
    XML_WAR_NS_URI,
    XML_WAR_NS_URI_RELATIVE,
    XML_ERR_MISSING_ENCODING,
    XML_WAR_SPACE_VALUE,
    XML_ERR_NOT_STANDALONE,
    XML_ERR_ENTITY_PROCESSING,
    XML_ERR_NOTATION_PROCESSING,
    XML_WAR_NS_COLUMN,
    XML_WAR_ENTITY_REDEFINED,
    XML_ERR_UNKNOWN_VERSION,
    XML_ERR_VERSION_MISMATCH,
    XML_NS_ERR_XML_NAMESPACE = 200,
    XML_NS_ERR_UNDEFINED_NAMESPACE,
    XML_NS_ERR_QNAME,
    XML_NS_ERR_ATTRIBUTE_REDEFINED,
    XML_NS_ERR_EMPTY,
    XML_NS_ERR_COLON,
    XML_DTD_ATTRIBUTE_DEFAULT = 500,
    XML_DTD_ATTRIBUTE_REDEFINED,
    XML_DTD_ATTRIBUTE_VALUE,
    XML_DTD_CONTENT_ERROR,
    XML_DTD_CONTENT_MODEL,
    XML_DTD_CONTENT_NOT_DETERMINIST,
    XML_DTD_DIFFERENT_PREFIX,
    XML_DTD_ELEM_DEFAULT_NAMESPACE,
    XML_DTD_ELEM_NAMESPACE,
    XML_DTD_ELEM_REDEFINED,
    XML_DTD_EMPTY_NOTATION,
    XML_DTD_ENTITY_TYPE,
    XML_DTD_ID_FIXED,
    XML_DTD_ID_REDEFINED,
    XML_DTD_ID_SUBSET,
    XML_DTD_INVALID_CHILD,
    XML_DTD_INVALID_DEFAULT,
    XML_DTD_LOAD_ERROR,
    XML_DTD_MISSING_ATTRIBUTE,
    XML_DTD_MIXED_CORRUPT,
    XML_DTD_MULTIPLE_ID,
    XML_DTD_NO_DOC,
    XML_DTD_NO_DTD,
    XML_DTD_NO_ELEM_NAME,
    XML_DTD_NO_PREFIX,
    XML_DTD_NO_ROOT,
    XML_DTD_NOTATION_REDEFINED,
    XML_DTD_NOTATION_VALUE,
    XML_DTD_NOT_EMPTY,
    XML_DTD_NOT_PCDATA,
    XML_DTD_NOT_STANDALONE,
    XML_DTD_ROOT_NAME,
    XML_DTD_STANDALONE_WHITE_SPACE,
    XML_DTD_UNKNOWN_ATTRIBUTE,
    XML_DTD_UNKNOWN_ELEM,
    XML_DTD_UNKNOWN_ENTITY,
    XML_DTD_UNKNOWN_ID,
    XML_DTD_UNKNOWN_NOTATION,
    XML_DTD_STANDALONE_DEFAULTED,
    XML_DTD_XMLID_VALUE,
    XML_DTD_XMLID_TYPE,
    XML_DTD_DUP_TOKEN,
    XML_HTML_STRUCURE_ERROR = 800,
    XML_HTML_UNKNOWN_TAG,
    XML_RNGP_ANYNAME_ATTR_ANCESTOR = 1000,
    XML_RNGP_ATTR_CONFLICT,
    XML_RNGP_ATTRIBUTE_CHILDREN,
    XML_RNGP_ATTRIBUTE_CONTENT,
    XML_RNGP_ATTRIBUTE_EMPTY,
    XML_RNGP_ATTRIBUTE_NOOP,
    XML_RNGP_CHOICE_CONTENT,
    XML_RNGP_CHOICE_EMPTY,
    XML_RNGP_CREATE_FAILURE,
    XML_RNGP_DATA_CONTENT,
    XML_RNGP_DEF_CHOICE_AND_INTERLEAVE,
    XML_RNGP_DEFINE_CREATE_FAILED,
    XML_RNGP_DEFINE_EMPTY,
    XML_RNGP_DEFINE_MISSING,
    XML_RNGP_DEFINE_NAME_MISSING,
    XML_RNGP_ELEM_CONTENT_EMPTY,
    XML_RNGP_ELEM_CONTENT_ERROR,
    XML_RNGP_ELEMENT_EMPTY,
    XML_RNGP_ELEMENT_CONTENT,
    XML_RNGP_ELEMENT_NAME,
    XML_RNGP_ELEMENT_NO_CONTENT,
    XML_RNGP_ELEM_TEXT_CONFLICT,
    XML_RNGP_EMPTY,
    XML_RNGP_EMPTY_CONSTRUCT,
    XML_RNGP_EMPTY_CONTENT,
    XML_RNGP_EMPTY_NOT_EMPTY,
    XML_RNGP_ERROR_TYPE_LIB,
    XML_RNGP_EXCEPT_EMPTY,
    XML_RNGP_EXCEPT_MISSING,
    XML_RNGP_EXCEPT_MULTIPLE,
    XML_RNGP_EXCEPT_NO_CONTENT,
    XML_RNGP_EXTERNALREF_EMTPY,
    XML_RNGP_EXTERNAL_REF_FAILURE,
    XML_RNGP_EXTERNALREF_RECURSE,
    XML_RNGP_FORBIDDEN_ATTRIBUTE,
    XML_RNGP_FOREIGN_ELEMENT,
    XML_RNGP_GRAMMAR_CONTENT,
    XML_RNGP_GRAMMAR_EMPTY,
    XML_RNGP_GRAMMAR_MISSING,
    XML_RNGP_GRAMMAR_NO_START,
    XML_RNGP_GROUP_ATTR_CONFLICT,
    XML_RNGP_HREF_ERROR,
    XML_RNGP_INCLUDE_EMPTY,
    XML_RNGP_INCLUDE_FAILURE,
    XML_RNGP_INCLUDE_RECURSE,
    XML_RNGP_INTERLEAVE_ADD,
    XML_RNGP_INTERLEAVE_CREATE_FAILED,
    XML_RNGP_INTERLEAVE_EMPTY,
    XML_RNGP_INTERLEAVE_NO_CONTENT,
    XML_RNGP_INVALID_DEFINE_NAME,
    XML_RNGP_INVALID_URI,
    XML_RNGP_INVALID_VALUE,
    XML_RNGP_MISSING_HREF,
    XML_RNGP_NAME_MISSING,
    XML_RNGP_NEED_COMBINE,
    XML_RNGP_NOTALLOWED_NOT_EMPTY,
    XML_RNGP_NSNAME_ATTR_ANCESTOR,
    XML_RNGP_NSNAME_NO_NS,
    XML_RNGP_PARAM_FORBIDDEN,
    XML_RNGP_PARAM_NAME_MISSING,
    XML_RNGP_PARENTREF_CREATE_FAILED,
    XML_RNGP_PARENTREF_NAME_INVALID,
    XML_RNGP_PARENTREF_NO_NAME,
    XML_RNGP_PARENTREF_NO_PARENT,
    XML_RNGP_PARENTREF_NOT_EMPTY,
    XML_RNGP_PARSE_ERROR,
    XML_RNGP_PAT_ANYNAME_EXCEPT_ANYNAME,
    XML_RNGP_PAT_ATTR_ATTR,
    XML_RNGP_PAT_ATTR_ELEM,
    XML_RNGP_PAT_DATA_EXCEPT_ATTR,
    XML_RNGP_PAT_DATA_EXCEPT_ELEM,
    XML_RNGP_PAT_DATA_EXCEPT_EMPTY,
    XML_RNGP_PAT_DATA_EXCEPT_GROUP,
    XML_RNGP_PAT_DATA_EXCEPT_INTERLEAVE,
    XML_RNGP_PAT_DATA_EXCEPT_LIST,
    XML_RNGP_PAT_DATA_EXCEPT_ONEMORE,
    XML_RNGP_PAT_DATA_EXCEPT_REF,
    XML_RNGP_PAT_DATA_EXCEPT_TEXT,
    XML_RNGP_PAT_LIST_ATTR,
    XML_RNGP_PAT_LIST_ELEM,
    XML_RNGP_PAT_LIST_INTERLEAVE,
    XML_RNGP_PAT_LIST_LIST,
    XML_RNGP_PAT_LIST_REF,
    XML_RNGP_PAT_LIST_TEXT,
    XML_RNGP_PAT_NSNAME_EXCEPT_ANYNAME,
    XML_RNGP_PAT_NSNAME_EXCEPT_NSNAME,
    XML_RNGP_PAT_ONEMORE_GROUP_ATTR,
    XML_RNGP_PAT_ONEMORE_INTERLEAVE_ATTR,
    XML_RNGP_PAT_START_ATTR,
    XML_RNGP_PAT_START_DATA,
    XML_RNGP_PAT_START_EMPTY,
    XML_RNGP_PAT_START_GROUP,
    XML_RNGP_PAT_START_INTERLEAVE,
    XML_RNGP_PAT_START_LIST,
    XML_RNGP_PAT_START_ONEMORE,
    XML_RNGP_PAT_START_TEXT,
    XML_RNGP_PAT_START_VALUE,
    XML_RNGP_PREFIX_UNDEFINED,
    XML_RNGP_REF_CREATE_FAILED,
    XML_RNGP_REF_CYCLE,
    XML_RNGP_REF_NAME_INVALID,
    XML_RNGP_REF_NO_DEF,
    XML_RNGP_REF_NO_NAME,
    XML_RNGP_REF_NOT_EMPTY,
    XML_RNGP_START_CHOICE_AND_INTERLEAVE,
    XML_RNGP_START_CONTENT,
    XML_RNGP_START_EMPTY,
    XML_RNGP_START_MISSING,
    XML_RNGP_TEXT_EXPECTED,
    XML_RNGP_TEXT_HAS_CHILD,
    XML_RNGP_TYPE_MISSING,
    XML_RNGP_TYPE_NOT_FOUND,
    XML_RNGP_TYPE_VALUE,
    XML_RNGP_UNKNOWN_ATTRIBUTE,
    XML_RNGP_UNKNOWN_COMBINE,
    XML_RNGP_UNKNOWN_CONSTRUCT,
    XML_RNGP_UNKNOWN_TYPE_LIB,
    XML_RNGP_URI_FRAGMENT,
    XML_RNGP_URI_NOT_ABSOLUTE,
    XML_RNGP_VALUE_EMPTY,
    XML_RNGP_VALUE_NO_CONTENT,
    XML_RNGP_XMLNS_NAME,
    XML_RNGP_XML_NS,
    XML_XPATH_EXPRESSION_OK = 1200,
    XML_XPATH_NUMBER_ERROR,
    XML_XPATH_UNFINISHED_LITERAL_ERROR,
    XML_XPATH_START_LITERAL_ERROR,
    XML_XPATH_VARIABLE_REF_ERROR,
    XML_XPATH_UNDEF_VARIABLE_ERROR,
    XML_XPATH_INVALID_PREDICATE_ERROR,
    XML_XPATH_EXPR_ERROR,
    XML_XPATH_UNCLOSED_ERROR,
    XML_XPATH_UNKNOWN_FUNC_ERROR,
    XML_XPATH_INVALID_OPERAND,
    XML_XPATH_INVALID_TYPE,
    XML_XPATH_INVALID_ARITY,
    XML_XPATH_INVALID_CTXT_SIZE,
    XML_XPATH_INVALID_CTXT_POSITION,
    XML_XPATH_MEMORY_ERROR,
    XML_XPTR_SYNTAX_ERROR,
    XML_XPTR_RESOURCE_ERROR,
    XML_XPTR_SUB_RESOURCE_ERROR,
    XML_XPATH_UNDEF_PREFIX_ERROR,
    XML_XPATH_ENCODING_ERROR,
    XML_XPATH_INVALID_CHAR_ERROR,
    XML_TREE_INVALID_HEX = 1300,
    XML_TREE_INVALID_DEC,
    XML_TREE_UNTERMINATED_ENTITY,
    XML_TREE_NOT_UTF8,
    XML_SAVE_NOT_UTF8 = 1400,
    XML_SAVE_CHAR_INVALID,
    XML_SAVE_NO_DOCTYPE,
    XML_SAVE_UNKNOWN_ENCODING,
    XML_REGEXP_COMPILE_ERROR = 1450,
    XML_IO_UNKNOWN = 1500,
    XML_IO_EACCES,
    XML_IO_EAGAIN,
    XML_IO_EBADF,
    XML_IO_EBADMSG,
    XML_IO_EBUSY,
    XML_IO_ECANCELED,
    XML_IO_ECHILD,
    XML_IO_EDEADLK,
    XML_IO_EDOM,
    XML_IO_EEXIST,
    XML_IO_EFAULT,
    XML_IO_EFBIG,
    XML_IO_EINPROGRESS,
    XML_IO_EINTR,
    XML_IO_EINVAL,
    XML_IO_EIO,
    XML_IO_EISDIR,
    XML_IO_EMFILE,
    XML_IO_EMLINK,
    XML_IO_EMSGSIZE,
    XML_IO_ENAMETOOLONG,
    XML_IO_ENFILE,
    XML_IO_ENODEV,
    XML_IO_ENOENT,
    XML_IO_ENOEXEC,
    XML_IO_ENOLCK,
    XML_IO_ENOMEM,
    XML_IO_ENOSPC,
    XML_IO_ENOSYS,
    XML_IO_ENOTDIR,
    XML_IO_ENOTEMPTY,
    XML_IO_ENOTSUP,
    XML_IO_ENOTTY,
    XML_IO_ENXIO,
    XML_IO_EPERM,
    XML_IO_EPIPE,
    XML_IO_ERANGE,
    XML_IO_EROFS,
    XML_IO_ESPIPE,
    XML_IO_ESRCH,
    XML_IO_ETIMEDOUT,
    XML_IO_EXDEV,
    XML_IO_NETWORK_ATTEMPT,
    XML_IO_ENCODER,
    XML_IO_FLUSH,
    XML_IO_WRITE,
    XML_IO_NO_INPUT,
    XML_IO_BUFFER_FULL,
    XML_IO_LOAD_ERROR,
    XML_IO_ENOTSOCK,
    XML_IO_EISCONN,
    XML_IO_ECONNREFUSED,
    XML_IO_ENETUNREACH,
    XML_IO_EADDRINUSE,
    XML_IO_EALREADY,
    XML_IO_EAFNOSUPPORT,
    XML_XINCLUDE_RECURSION=1600,
    XML_XINCLUDE_PARSE_VALUE,
    XML_XINCLUDE_ENTITY_DEF_MISMATCH,
    XML_XINCLUDE_NO_HREF,
    XML_XINCLUDE_NO_FALLBACK,
    XML_XINCLUDE_HREF_URI,
    XML_XINCLUDE_TEXT_FRAGMENT,
    XML_XINCLUDE_TEXT_DOCUMENT,
    XML_XINCLUDE_INVALID_CHAR,
    XML_XINCLUDE_BUILD_FAILED,
    XML_XINCLUDE_UNKNOWN_ENCODING,
    XML_XINCLUDE_MULTIPLE_ROOT,
    XML_XINCLUDE_XPTR_FAILED,
    XML_XINCLUDE_XPTR_RESULT,
    XML_XINCLUDE_INCLUDE_IN_INCLUDE,
    XML_XINCLUDE_FALLBACKS_IN_INCLUDE,
    XML_XINCLUDE_FALLBACK_NOT_IN_INCLUDE,
    XML_XINCLUDE_DEPRECATED_NS,
    XML_XINCLUDE_FRAGMENT_ID,
    XML_CATALOG_MISSING_ATTR = 1650,
    XML_CATALOG_ENTRY_BROKEN,
    XML_CATALOG_PREFER_VALUE,
    XML_CATALOG_NOT_CATALOG,
    XML_CATALOG_RECURSION,
    XML_SCHEMAP_PREFIX_UNDEFINED = 1700,
    XML_SCHEMAP_ATTRFORMDEFAULT_VALUE,
    XML_SCHEMAP_ATTRGRP_NONAME_NOREF,
    XML_SCHEMAP_ATTR_NONAME_NOREF,
    XML_SCHEMAP_COMPLEXTYPE_NONAME_NOREF,
    XML_SCHEMAP_ELEMFORMDEFAULT_VALUE,
    XML_SCHEMAP_ELEM_NONAME_NOREF,
    XML_SCHEMAP_EXTENSION_NO_BASE,
    XML_SCHEMAP_FACET_NO_VALUE,
    XML_SCHEMAP_FAILED_BUILD_IMPORT,
    XML_SCHEMAP_GROUP_NONAME_NOREF,
    XML_SCHEMAP_IMPORT_NAMESPACE_NOT_URI,
    XML_SCHEMAP_IMPORT_REDEFINE_NSNAME,
    XML_SCHEMAP_IMPORT_SCHEMA_NOT_URI,
    XML_SCHEMAP_INVALID_BOOLEAN,
    XML_SCHEMAP_INVALID_ENUM,
    XML_SCHEMAP_INVALID_FACET,
    XML_SCHEMAP_INVALID_FACET_VALUE,
    XML_SCHEMAP_INVALID_MAXOCCURS,
    XML_SCHEMAP_INVALID_MINOCCURS,
    XML_SCHEMAP_INVALID_REF_AND_SUBTYPE,
    XML_SCHEMAP_INVALID_WHITE_SPACE,
    XML_SCHEMAP_NOATTR_NOREF,
    XML_SCHEMAP_NOTATION_NO_NAME,
    XML_SCHEMAP_NOTYPE_NOREF,
    XML_SCHEMAP_REF_AND_SUBTYPE,
    XML_SCHEMAP_RESTRICTION_NONAME_NOREF,
    XML_SCHEMAP_SIMPLETYPE_NONAME,
    XML_SCHEMAP_TYPE_AND_SUBTYPE,
    XML_SCHEMAP_UNKNOWN_ALL_CHILD,
    XML_SCHEMAP_UNKNOWN_ANYATTRIBUTE_CHILD,
    XML_SCHEMAP_UNKNOWN_ATTR_CHILD,
    XML_SCHEMAP_UNKNOWN_ATTRGRP_CHILD,
    XML_SCHEMAP_UNKNOWN_ATTRIBUTE_GROUP,
    XML_SCHEMAP_UNKNOWN_BASE_TYPE,
    XML_SCHEMAP_UNKNOWN_CHOICE_CHILD,
    XML_SCHEMAP_UNKNOWN_COMPLEXCONTENT_CHILD,
    XML_SCHEMAP_UNKNOWN_COMPLEXTYPE_CHILD,
    XML_SCHEMAP_UNKNOWN_ELEM_CHILD,
    XML_SCHEMAP_UNKNOWN_EXTENSION_CHILD,
    XML_SCHEMAP_UNKNOWN_FACET_CHILD,
    XML_SCHEMAP_UNKNOWN_FACET_TYPE,
    XML_SCHEMAP_UNKNOWN_GROUP_CHILD,
    XML_SCHEMAP_UNKNOWN_IMPORT_CHILD,
    XML_SCHEMAP_UNKNOWN_LIST_CHILD,
    XML_SCHEMAP_UNKNOWN_NOTATION_CHILD,
    XML_SCHEMAP_UNKNOWN_PROCESSCONTENT_CHILD,
    XML_SCHEMAP_UNKNOWN_REF,
    XML_SCHEMAP_UNKNOWN_RESTRICTION_CHILD,
    XML_SCHEMAP_UNKNOWN_SCHEMAS_CHILD,
    XML_SCHEMAP_UNKNOWN_SEQUENCE_CHILD,
    XML_SCHEMAP_UNKNOWN_SIMPLECONTENT_CHILD,
    XML_SCHEMAP_UNKNOWN_SIMPLETYPE_CHILD,
    XML_SCHEMAP_UNKNOWN_TYPE,
    XML_SCHEMAP_UNKNOWN_UNION_CHILD,
    XML_SCHEMAP_ELEM_DEFAULT_FIXED,
    XML_SCHEMAP_REGEXP_INVALID,
    XML_SCHEMAP_FAILED_LOAD,
    XML_SCHEMAP_NOTHING_TO_PARSE,
    XML_SCHEMAP_NOROOT,
    XML_SCHEMAP_REDEFINED_GROUP,
    XML_SCHEMAP_REDEFINED_TYPE,
    XML_SCHEMAP_REDEFINED_ELEMENT,
    XML_SCHEMAP_REDEFINED_ATTRGROUP,
    XML_SCHEMAP_REDEFINED_ATTR,
    XML_SCHEMAP_REDEFINED_NOTATION,
    XML_SCHEMAP_FAILED_PARSE,
    XML_SCHEMAP_UNKNOWN_PREFIX,
    XML_SCHEMAP_DEF_AND_PREFIX,
    XML_SCHEMAP_UNKNOWN_INCLUDE_CHILD,
    XML_SCHEMAP_INCLUDE_SCHEMA_NOT_URI,
    XML_SCHEMAP_INCLUDE_SCHEMA_NO_URI,
    XML_SCHEMAP_NOT_SCHEMA,
    XML_SCHEMAP_UNKNOWN_MEMBER_TYPE,
    XML_SCHEMAP_INVALID_ATTR_USE,
    XML_SCHEMAP_RECURSIVE,
    XML_SCHEMAP_SUPERNUMEROUS_LIST_ITEM_TYPE,
    XML_SCHEMAP_INVALID_ATTR_COMBINATION,
    XML_SCHEMAP_INVALID_ATTR_INLINE_COMBINATION,
    XML_SCHEMAP_MISSING_SIMPLETYPE_CHILD,
    XML_SCHEMAP_INVALID_ATTR_NAME,
    XML_SCHEMAP_REF_AND_CONTENT,
    XML_SCHEMAP_CT_PROPS_CORRECT_1,
    XML_SCHEMAP_CT_PROPS_CORRECT_2,
    XML_SCHEMAP_CT_PROPS_CORRECT_3,
    XML_SCHEMAP_CT_PROPS_CORRECT_4,
    XML_SCHEMAP_CT_PROPS_CORRECT_5,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_1,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_1,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_2,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_2,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_3,
    XML_SCHEMAP_WILDCARD_INVALID_NS_MEMBER,
    XML_SCHEMAP_INTERSECTION_NOT_EXPRESSIBLE,
    XML_SCHEMAP_UNION_NOT_EXPRESSIBLE,
    XML_SCHEMAP_SRC_IMPORT_3_1,
    XML_SCHEMAP_SRC_IMPORT_3_2,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_1,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_2,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_4_3,
    XML_SCHEMAP_COS_CT_EXTENDS_1_3,
    XML_SCHEMAV_NOROOT = 1801,
    XML_SCHEMAV_UNDECLAREDELEM,
    XML_SCHEMAV_NOTTOPLEVEL,
    XML_SCHEMAV_MISSING,
    XML_SCHEMAV_WRONGELEM,
    XML_SCHEMAV_NOTYPE,
    XML_SCHEMAV_NOROLLBACK,
    XML_SCHEMAV_ISABSTRACT,
    XML_SCHEMAV_NOTEMPTY,
    XML_SCHEMAV_ELEMCONT,
    XML_SCHEMAV_HAVEDEFAULT,
    XML_SCHEMAV_NOTNILLABLE,
    XML_SCHEMAV_EXTRACONTENT,
    XML_SCHEMAV_INVALIDATTR,
    XML_SCHEMAV_INVALIDELEM,
    XML_SCHEMAV_NOTDETERMINIST,
    XML_SCHEMAV_CONSTRUCT,
    XML_SCHEMAV_INTERNAL,
    XML_SCHEMAV_NOTSIMPLE,
    XML_SCHEMAV_ATTRUNKNOWN,
    XML_SCHEMAV_ATTRINVALID,
    XML_SCHEMAV_VALUE,
    XML_SCHEMAV_FACET,
    XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_1,
    XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_2,
    XML_SCHEMAV_CVC_DATATYPE_VALID_1_2_3,
    XML_SCHEMAV_CVC_TYPE_3_1_1,
    XML_SCHEMAV_CVC_TYPE_3_1_2,
    XML_SCHEMAV_CVC_FACET_VALID,
    XML_SCHEMAV_CVC_LENGTH_VALID,
    XML_SCHEMAV_CVC_MINLENGTH_VALID,
    XML_SCHEMAV_CVC_MAXLENGTH_VALID,
    XML_SCHEMAV_CVC_MININCLUSIVE_VALID,
    XML_SCHEMAV_CVC_MAXINCLUSIVE_VALID,
    XML_SCHEMAV_CVC_MINEXCLUSIVE_VALID,
    XML_SCHEMAV_CVC_MAXEXCLUSIVE_VALID,
    XML_SCHEMAV_CVC_TOTALDIGITS_VALID,
    XML_SCHEMAV_CVC_FRACTIONDIGITS_VALID,
    XML_SCHEMAV_CVC_PATTERN_VALID,
    XML_SCHEMAV_CVC_ENUMERATION_VALID,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_1,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_2,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_3,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_2_4,
    XML_SCHEMAV_CVC_ELT_1,
    XML_SCHEMAV_CVC_ELT_2,
    XML_SCHEMAV_CVC_ELT_3_1,
    XML_SCHEMAV_CVC_ELT_3_2_1,
    XML_SCHEMAV_CVC_ELT_3_2_2,
    XML_SCHEMAV_CVC_ELT_4_1,
    XML_SCHEMAV_CVC_ELT_4_2,
    XML_SCHEMAV_CVC_ELT_4_3,
    XML_SCHEMAV_CVC_ELT_5_1_1,
    XML_SCHEMAV_CVC_ELT_5_1_2,
    XML_SCHEMAV_CVC_ELT_5_2_1,
    XML_SCHEMAV_CVC_ELT_5_2_2_1,
    XML_SCHEMAV_CVC_ELT_5_2_2_2_1,
    XML_SCHEMAV_CVC_ELT_5_2_2_2_2,
    XML_SCHEMAV_CVC_ELT_6,
    XML_SCHEMAV_CVC_ELT_7,
    XML_SCHEMAV_CVC_ATTRIBUTE_1,
    XML_SCHEMAV_CVC_ATTRIBUTE_2,
    XML_SCHEMAV_CVC_ATTRIBUTE_3,
    XML_SCHEMAV_CVC_ATTRIBUTE_4,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_3_1,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_3_2_1,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_3_2_2,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_4,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_5_1,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_5_2,
    XML_SCHEMAV_ELEMENT_CONTENT,
    XML_SCHEMAV_DOCUMENT_ELEMENT_MISSING,
    XML_SCHEMAV_CVC_COMPLEX_TYPE_1,
    XML_SCHEMAV_CVC_AU,
    XML_SCHEMAV_CVC_TYPE_1,
    XML_SCHEMAV_CVC_TYPE_2,
    XML_SCHEMAV_CVC_IDC,
    XML_SCHEMAV_CVC_WILDCARD,
    XML_SCHEMAV_MISC,
    XML_XPTR_UNKNOWN_SCHEME = 1900,
    XML_XPTR_CHILDSEQ_START,
    XML_XPTR_EVAL_FAILED,
    XML_XPTR_EXTRA_OBJECTS,
    XML_C14N_CREATE_CTXT = 1950,
    XML_C14N_REQUIRES_UTF8,
    XML_C14N_CREATE_STACK,
    XML_C14N_INVALID_NODE,
    XML_C14N_UNKNOW_NODE,
    XML_C14N_RELATIVE_NAMESPACE,
    XML_FTP_PASV_ANSWER = 2000,
    XML_FTP_EPSV_ANSWER,
    XML_FTP_ACCNT,
    XML_FTP_URL_SYNTAX,
    XML_HTTP_URL_SYNTAX = 2020,
    XML_HTTP_USE_IP,
    XML_HTTP_UNKNOWN_HOST,
    XML_SCHEMAP_SRC_SIMPLE_TYPE_1 = 3000,
    XML_SCHEMAP_SRC_SIMPLE_TYPE_2,
    XML_SCHEMAP_SRC_SIMPLE_TYPE_3,
    XML_SCHEMAP_SRC_SIMPLE_TYPE_4,
    XML_SCHEMAP_SRC_RESOLVE,
    XML_SCHEMAP_SRC_RESTRICTION_BASE_OR_SIMPLETYPE,
    XML_SCHEMAP_SRC_LIST_ITEMTYPE_OR_SIMPLETYPE,
    XML_SCHEMAP_SRC_UNION_MEMBERTYPES_OR_SIMPLETYPES,
    XML_SCHEMAP_ST_PROPS_CORRECT_1,
    XML_SCHEMAP_ST_PROPS_CORRECT_2,
    XML_SCHEMAP_ST_PROPS_CORRECT_3,
    XML_SCHEMAP_COS_ST_RESTRICTS_1_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_1_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_1_3_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_1_3_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_1_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_1_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_3,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_4,
    XML_SCHEMAP_COS_ST_RESTRICTS_2_3_2_5,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_1_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_2,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_1,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_3,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_4,
    XML_SCHEMAP_COS_ST_RESTRICTS_3_3_2_5,
    XML_SCHEMAP_COS_ST_DERIVED_OK_2_1,
    XML_SCHEMAP_COS_ST_DERIVED_OK_2_2,
    XML_SCHEMAP_S4S_ELEM_NOT_ALLOWED,
    XML_SCHEMAP_S4S_ELEM_MISSING,
    XML_SCHEMAP_S4S_ATTR_NOT_ALLOWED,
    XML_SCHEMAP_S4S_ATTR_MISSING,
    XML_SCHEMAP_S4S_ATTR_INVALID_VALUE,
    XML_SCHEMAP_SRC_ELEMENT_1,
    XML_SCHEMAP_SRC_ELEMENT_2_1,
    XML_SCHEMAP_SRC_ELEMENT_2_2,
    XML_SCHEMAP_SRC_ELEMENT_3,
    XML_SCHEMAP_P_PROPS_CORRECT_1,
    XML_SCHEMAP_P_PROPS_CORRECT_2_1,
    XML_SCHEMAP_P_PROPS_CORRECT_2_2,
    XML_SCHEMAP_E_PROPS_CORRECT_2,
    XML_SCHEMAP_E_PROPS_CORRECT_3,
    XML_SCHEMAP_E_PROPS_CORRECT_4,
    XML_SCHEMAP_E_PROPS_CORRECT_5,
    XML_SCHEMAP_E_PROPS_CORRECT_6,
    XML_SCHEMAP_SRC_INCLUDE,
    XML_SCHEMAP_SRC_ATTRIBUTE_1,
    XML_SCHEMAP_SRC_ATTRIBUTE_2,
    XML_SCHEMAP_SRC_ATTRIBUTE_3_1,
    XML_SCHEMAP_SRC_ATTRIBUTE_3_2,
    XML_SCHEMAP_SRC_ATTRIBUTE_4,
    XML_SCHEMAP_NO_XMLNS,
    XML_SCHEMAP_NO_XSI,
    XML_SCHEMAP_COS_VALID_DEFAULT_1,
    XML_SCHEMAP_COS_VALID_DEFAULT_2_1,
    XML_SCHEMAP_COS_VALID_DEFAULT_2_2_1,
    XML_SCHEMAP_COS_VALID_DEFAULT_2_2_2,
    XML_SCHEMAP_CVC_SIMPLE_TYPE,
    XML_SCHEMAP_COS_CT_EXTENDS_1_1,
    XML_SCHEMAP_SRC_IMPORT_1_1,
    XML_SCHEMAP_SRC_IMPORT_1_2,
    XML_SCHEMAP_SRC_IMPORT_2,
    XML_SCHEMAP_SRC_IMPORT_2_1,
    XML_SCHEMAP_SRC_IMPORT_2_2,
    XML_SCHEMAP_INTERNAL,
    XML_SCHEMAP_NOT_DETERMINISTIC,
    XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_1,
    XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_2,
    XML_SCHEMAP_SRC_ATTRIBUTE_GROUP_3,
    XML_SCHEMAP_MG_PROPS_CORRECT_1,
    XML_SCHEMAP_MG_PROPS_CORRECT_2,
    XML_SCHEMAP_SRC_CT_1,
    XML_SCHEMAP_DERIVATION_OK_RESTRICTION_2_1_3,
    XML_SCHEMAP_AU_PROPS_CORRECT_2,
    XML_SCHEMAP_A_PROPS_CORRECT_2,
    XML_SCHEMAP_C_PROPS_CORRECT,
    XML_SCHEMAP_SRC_REDEFINE,
    XML_SCHEMAP_SRC_IMPORT,
    XML_SCHEMAP_WARN_SKIP_SCHEMA,
    XML_SCHEMAP_WARN_UNLOCATED_SCHEMA,
    XML_SCHEMAP_WARN_ATTR_REDECL_PROH,
    XML_SCHEMAP_WARN_ATTR_POINTLESS_PROH,
    XML_SCHEMAP_AG_PROPS_CORRECT,
    XML_SCHEMAP_COS_CT_EXTENDS_1_2,
    XML_SCHEMAP_AU_PROPS_CORRECT,
    XML_SCHEMAP_A_PROPS_CORRECT_3,
    XML_SCHEMAP_COS_ALL_LIMITED,
    XML_SCHEMATRONV_ASSERT = 4000,
    XML_SCHEMATRONV_REPORT,
    XML_MODULE_OPEN = 4900,
    XML_MODULE_CLOSE,
    XML_CHECK_FOUND_ELEMENT = 5000,
    XML_CHECK_FOUND_ATTRIBUTE,
    XML_CHECK_FOUND_TEXT,
    XML_CHECK_FOUND_CDATA,
    XML_CHECK_FOUND_ENTITYREF,
    XML_CHECK_FOUND_ENTITY,
    XML_CHECK_FOUND_PI,
    XML_CHECK_FOUND_COMMENT,
    XML_CHECK_FOUND_DOCTYPE,
    XML_CHECK_FOUND_FRAGMENT,
    XML_CHECK_FOUND_NOTATION,
    XML_CHECK_UNKNOWN_NODE,
    XML_CHECK_ENTITY_TYPE,
    XML_CHECK_NO_PARENT,
    XML_CHECK_NO_DOC,
    XML_CHECK_NO_NAME,
    XML_CHECK_NO_ELEM,
    XML_CHECK_WRONG_DOC,
    XML_CHECK_NO_PREV,
    XML_CHECK_WRONG_PREV,
    XML_CHECK_NO_NEXT,
    XML_CHECK_WRONG_NEXT,
    XML_CHECK_NOT_DTD,
    XML_CHECK_NOT_ATTR,
    XML_CHECK_NOT_ATTR_DECL,
    XML_CHECK_NOT_ELEM_DECL,
    XML_CHECK_NOT_ENTITY_DECL,
    XML_CHECK_NOT_NS_DECL,
    XML_CHECK_NO_HREF,
    XML_CHECK_WRONG_PARENT,
    XML_CHECK_NS_SCOPE,
    XML_CHECK_NS_ANCESTOR,
    XML_CHECK_NOT_UTF8,
    XML_CHECK_NO_DICT,
    XML_CHECK_NOT_NCNAME,
    XML_CHECK_OUTSIDE_DICT,
    XML_CHECK_WRONG_NAME,
    XML_CHECK_NAME_NOT_NULL,
    XML_I18N_NO_NAME = 6000,
    XML_I18N_NO_HANDLER,
    XML_I18N_EXCESS_HANDLER,
    XML_I18N_CONV_FAILED,
    XML_I18N_NO_OUTPUT




} xmlParserErrors;
# 844 "/usr/include/libxml2/libxml/xmlerror.h"
typedef void ( *xmlGenericErrorFunc) (void *ctx,
     const char *msg,
     ...) __attribute__((__format__(__printf__,2,3)));
# 855 "/usr/include/libxml2/libxml/xmlerror.h"
typedef void ( *xmlStructuredErrorFunc) (void *userData, xmlErrorPtr error);





 void
    xmlSetGenericErrorFunc (void *ctx,
     xmlGenericErrorFunc handler);
 void
    initGenericErrorDefaultFunc (xmlGenericErrorFunc *handler);

 void
    xmlSetStructuredErrorFunc (void *ctx,
     xmlStructuredErrorFunc handler);




 void
    xmlParserError (void *ctx,
     const char *msg,
     ...) __attribute__((__format__(__printf__,2,3)));
 void
    xmlParserWarning (void *ctx,
     const char *msg,
     ...) __attribute__((__format__(__printf__,2,3)));
 void
    xmlParserValidityError (void *ctx,
     const char *msg,
     ...) __attribute__((__format__(__printf__,2,3)));
 void
    xmlParserValidityWarning (void *ctx,
     const char *msg,
     ...) __attribute__((__format__(__printf__,2,3)));
 void
    xmlParserPrintFileInfo (xmlParserInputPtr input);
 void
    xmlParserPrintFileContext (xmlParserInputPtr input);




 xmlErrorPtr
    xmlGetLastError (void);
 void
    xmlResetLastError (void);
 xmlErrorPtr
    xmlCtxtGetLastError (void *ctx);
 void
    xmlCtxtResetLastError (void *ctx);
 void
    xmlResetError (xmlErrorPtr err);
 int
    xmlCopyError (xmlErrorPtr from,
     xmlErrorPtr to);
# 16 "/usr/include/libxml2/libxml/valid.h" 2

# 1 "/usr/include/libxml2/libxml/list.h" 1
# 20 "/usr/include/libxml2/libxml/list.h"
typedef struct _xmlLink xmlLink;
typedef xmlLink *xmlLinkPtr;

typedef struct _xmlList xmlList;
typedef xmlList *xmlListPtr;







typedef void (*xmlListDeallocator) (xmlLinkPtr lk);
# 42 "/usr/include/libxml2/libxml/list.h"
typedef int (*xmlListDataCompare) (const void *data0, const void *data1);
# 52 "/usr/include/libxml2/libxml/list.h"
typedef int (*xmlListWalker) (const void *data, const void *user);


 xmlListPtr
  xmlListCreate (xmlListDeallocator deallocator,
                                  xmlListDataCompare compare);
 void
  xmlListDelete (xmlListPtr l);


 void *
  xmlListSearch (xmlListPtr l,
      void *data);
 void *
  xmlListReverseSearch (xmlListPtr l,
      void *data);
 int
  xmlListInsert (xmlListPtr l,
      void *data) ;
 int
  xmlListAppend (xmlListPtr l,
      void *data) ;
 int
  xmlListRemoveFirst (xmlListPtr l,
      void *data);
 int
  xmlListRemoveLast (xmlListPtr l,
      void *data);
 int
  xmlListRemoveAll (xmlListPtr l,
      void *data);
 void
  xmlListClear (xmlListPtr l);
 int
  xmlListEmpty (xmlListPtr l);
 xmlLinkPtr
  xmlListFront (xmlListPtr l);
 xmlLinkPtr
  xmlListEnd (xmlListPtr l);
 int
  xmlListSize (xmlListPtr l);

 void
  xmlListPopFront (xmlListPtr l);
 void
  xmlListPopBack (xmlListPtr l);
 int
  xmlListPushFront (xmlListPtr l,
      void *data);
 int
  xmlListPushBack (xmlListPtr l,
      void *data);


 void
  xmlListReverse (xmlListPtr l);
 void
  xmlListSort (xmlListPtr l);
 void
  xmlListWalk (xmlListPtr l,
      xmlListWalker walker,
      const void *user);
 void
  xmlListReverseWalk (xmlListPtr l,
      xmlListWalker walker,
      const void *user);
 void
  xmlListMerge (xmlListPtr l1,
      xmlListPtr l2);
 xmlListPtr
  xmlListDup (const xmlListPtr old);
 int
  xmlListCopy (xmlListPtr cur,
      const xmlListPtr old);

 void *
  xmlLinkGetData (xmlLinkPtr lk);
# 18 "/usr/include/libxml2/libxml/valid.h" 2
# 1 "/usr/include/libxml2/libxml/xmlautomata.h" 1
# 29 "/usr/include/libxml2/libxml/xmlautomata.h"
typedef struct _xmlAutomata xmlAutomata;
typedef xmlAutomata *xmlAutomataPtr;






typedef struct _xmlAutomataState xmlAutomataState;
typedef xmlAutomataState *xmlAutomataStatePtr;




 xmlAutomataPtr
      xmlNewAutomata (void);
 void
      xmlFreeAutomata (xmlAutomataPtr am);

 xmlAutomataStatePtr
      xmlAutomataGetInitState (xmlAutomataPtr am);
 int
      xmlAutomataSetFinalState (xmlAutomataPtr am,
       xmlAutomataStatePtr state);
 xmlAutomataStatePtr
      xmlAutomataNewState (xmlAutomataPtr am);
 xmlAutomataStatePtr
      xmlAutomataNewTransition (xmlAutomataPtr am,
       xmlAutomataStatePtr from,
       xmlAutomataStatePtr to,
       const xmlChar *token,
       void *data);
 xmlAutomataStatePtr
      xmlAutomataNewTransition2 (xmlAutomataPtr am,
       xmlAutomataStatePtr from,
       xmlAutomataStatePtr to,
       const xmlChar *token,
       const xmlChar *token2,
       void *data);
 xmlAutomataStatePtr
                    xmlAutomataNewNegTrans (xmlAutomataPtr am,
       xmlAutomataStatePtr from,
       xmlAutomataStatePtr to,
       const xmlChar *token,
       const xmlChar *token2,
       void *data);

 xmlAutomataStatePtr
      xmlAutomataNewCountTrans (xmlAutomataPtr am,
       xmlAutomataStatePtr from,
       xmlAutomataStatePtr to,
       const xmlChar *token,
       int min,
       int max,
       void *data);
 xmlAutomataStatePtr
      xmlAutomataNewCountTrans2 (xmlAutomataPtr am,
       xmlAutomataStatePtr from,
       xmlAutomataStatePtr to,
       const xmlChar *token,
       const xmlChar *token2,
       int min,
       int max,
       void *data);
 xmlAutomataStatePtr
      xmlAutomataNewOnceTrans (xmlAutomataPtr am,
       xmlAutomataStatePtr from,
       xmlAutomataStatePtr to,
       const xmlChar *token,
       int min,
       int max,
       void *data);
 xmlAutomataStatePtr
      xmlAutomataNewOnceTrans2 (xmlAutomataPtr am,
       xmlAutomataStatePtr from,
       xmlAutomataStatePtr to,
       const xmlChar *token,
       const xmlChar *token2,
       int min,
       int max,
       void *data);
 xmlAutomataStatePtr
      xmlAutomataNewAllTrans (xmlAutomataPtr am,
       xmlAutomataStatePtr from,
       xmlAutomataStatePtr to,
       int lax);
 xmlAutomataStatePtr
      xmlAutomataNewEpsilon (xmlAutomataPtr am,
       xmlAutomataStatePtr from,
       xmlAutomataStatePtr to);
 xmlAutomataStatePtr
      xmlAutomataNewCountedTrans (xmlAutomataPtr am,
       xmlAutomataStatePtr from,
       xmlAutomataStatePtr to,
       int counter);
 xmlAutomataStatePtr
      xmlAutomataNewCounterTrans (xmlAutomataPtr am,
       xmlAutomataStatePtr from,
       xmlAutomataStatePtr to,
       int counter);
 int
      xmlAutomataNewCounter (xmlAutomataPtr am,
       int min,
       int max);

 xmlRegexpPtr
      xmlAutomataCompile (xmlAutomataPtr am);
 int
      xmlAutomataIsDeterminist (xmlAutomataPtr am);
# 19 "/usr/include/libxml2/libxml/valid.h" 2
# 28 "/usr/include/libxml2/libxml/valid.h"
typedef struct _xmlValidState xmlValidState;
typedef xmlValidState *xmlValidStatePtr;
# 42 "/usr/include/libxml2/libxml/valid.h"
typedef void ( *xmlValidityErrorFunc) (void *ctx,
        const char *msg,
        ...) __attribute__((__format__(__printf__,2,3)));
# 57 "/usr/include/libxml2/libxml/valid.h"
typedef void ( *xmlValidityWarningFunc) (void *ctx,
          const char *msg,
          ...) __attribute__((__format__(__printf__,2,3)));
# 80 "/usr/include/libxml2/libxml/valid.h"
typedef struct _xmlValidCtxt xmlValidCtxt;
typedef xmlValidCtxt *xmlValidCtxtPtr;
struct _xmlValidCtxt {
    void *userData;
    xmlValidityErrorFunc error;
    xmlValidityWarningFunc warning;


    xmlNodePtr node;
    int nodeNr;
    int nodeMax;
    xmlNodePtr *nodeTab;

    unsigned int finishDtd;
    xmlDocPtr doc;
    int valid;


    xmlValidState *vstate;
    int vstateNr;
    int vstateMax;
    xmlValidState *vstateTab;


    xmlAutomataPtr am;
    xmlAutomataStatePtr state;




};






typedef struct _xmlHashTable xmlNotationTable;
typedef xmlNotationTable *xmlNotationTablePtr;






typedef struct _xmlHashTable xmlElementTable;
typedef xmlElementTable *xmlElementTablePtr;






typedef struct _xmlHashTable xmlAttributeTable;
typedef xmlAttributeTable *xmlAttributeTablePtr;






typedef struct _xmlHashTable xmlIDTable;
typedef xmlIDTable *xmlIDTablePtr;






typedef struct _xmlHashTable xmlRefTable;
typedef xmlRefTable *xmlRefTablePtr;


 xmlNotationPtr
  xmlAddNotationDecl (xmlValidCtxtPtr ctxt,
      xmlDtdPtr dtd,
      const xmlChar *name,
      const xmlChar *PublicID,
      const xmlChar *SystemID);

 xmlNotationTablePtr
  xmlCopyNotationTable (xmlNotationTablePtr table);

 void
  xmlFreeNotationTable (xmlNotationTablePtr table);

 void
  xmlDumpNotationDecl (xmlBufferPtr buf,
      xmlNotationPtr nota);
 void
  xmlDumpNotationTable (xmlBufferPtr buf,
      xmlNotationTablePtr table);




 xmlElementContentPtr
  xmlNewElementContent (const xmlChar *name,
      xmlElementContentType type);
 xmlElementContentPtr
  xmlCopyElementContent (xmlElementContentPtr content);
 void
  xmlFreeElementContent (xmlElementContentPtr cur);

 xmlElementContentPtr
  xmlNewDocElementContent (xmlDocPtr doc,
      const xmlChar *name,
      xmlElementContentType type);
 xmlElementContentPtr
  xmlCopyDocElementContent(xmlDocPtr doc,
      xmlElementContentPtr content);
 void
  xmlFreeDocElementContent(xmlDocPtr doc,
      xmlElementContentPtr cur);
 void
  xmlSnprintfElementContent(char *buf,
      int size,
                                  xmlElementContentPtr content,
      int englob);


 void
  xmlSprintfElementContent(char *buf,
                                  xmlElementContentPtr content,
      int englob);




 xmlElementPtr
  xmlAddElementDecl (xmlValidCtxtPtr ctxt,
      xmlDtdPtr dtd,
      const xmlChar *name,
      xmlElementTypeVal type,
      xmlElementContentPtr content);

 xmlElementTablePtr
  xmlCopyElementTable (xmlElementTablePtr table);

 void
  xmlFreeElementTable (xmlElementTablePtr table);

 void
  xmlDumpElementTable (xmlBufferPtr buf,
      xmlElementTablePtr table);
 void
  xmlDumpElementDecl (xmlBufferPtr buf,
      xmlElementPtr elem);



 xmlEnumerationPtr
  xmlCreateEnumeration (const xmlChar *name);
 void
  xmlFreeEnumeration (xmlEnumerationPtr cur);

 xmlEnumerationPtr
  xmlCopyEnumeration (xmlEnumerationPtr cur);



 xmlAttributePtr
  xmlAddAttributeDecl (xmlValidCtxtPtr ctxt,
      xmlDtdPtr dtd,
      const xmlChar *elem,
      const xmlChar *name,
      const xmlChar *ns,
      xmlAttributeType type,
      xmlAttributeDefault def,
      const xmlChar *defaultValue,
      xmlEnumerationPtr tree);

 xmlAttributeTablePtr
  xmlCopyAttributeTable (xmlAttributeTablePtr table);

 void
  xmlFreeAttributeTable (xmlAttributeTablePtr table);

 void
  xmlDumpAttributeTable (xmlBufferPtr buf,
     xmlAttributeTablePtr table);
 void
  xmlDumpAttributeDecl (xmlBufferPtr buf,
     xmlAttributePtr attr);



 xmlIDPtr
  xmlAddID (xmlValidCtxtPtr ctxt,
     xmlDocPtr doc,
     const xmlChar *value,
     xmlAttrPtr attr);
 void
  xmlFreeIDTable (xmlIDTablePtr table);
 xmlAttrPtr
  xmlGetID (xmlDocPtr doc,
     const xmlChar *ID);
 int
  xmlIsID (xmlDocPtr doc,
     xmlNodePtr elem,
     xmlAttrPtr attr);
 int
  xmlRemoveID (xmlDocPtr doc,
     xmlAttrPtr attr);


 xmlRefPtr
  xmlAddRef (xmlValidCtxtPtr ctxt,
     xmlDocPtr doc,
     const xmlChar *value,
     xmlAttrPtr attr);
 void
  xmlFreeRefTable (xmlRefTablePtr table);
 int
  xmlIsRef (xmlDocPtr doc,
     xmlNodePtr elem,
     xmlAttrPtr attr);
 int
  xmlRemoveRef (xmlDocPtr doc,
     xmlAttrPtr attr);
 xmlListPtr
  xmlGetRefs (xmlDocPtr doc,
     const xmlChar *ID);






 xmlValidCtxtPtr
  xmlNewValidCtxt(void);
 void
  xmlFreeValidCtxt(xmlValidCtxtPtr);

 int
  xmlValidateRoot (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc);
 int
  xmlValidateElementDecl (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
                           xmlElementPtr elem);
 xmlChar *
  xmlValidNormalizeAttributeValue(xmlDocPtr doc,
      xmlNodePtr elem,
      const xmlChar *name,
      const xmlChar *value);
 xmlChar *
  xmlValidCtxtNormalizeAttributeValue(xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
      xmlNodePtr elem,
      const xmlChar *name,
      const xmlChar *value);
 int
  xmlValidateAttributeDecl(xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
                           xmlAttributePtr attr);
 int
  xmlValidateAttributeValue(xmlAttributeType type,
      const xmlChar *value);
 int
  xmlValidateNotationDecl (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
                           xmlNotationPtr nota);
 int
  xmlValidateDtd (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
      xmlDtdPtr dtd);
 int
  xmlValidateDtdFinal (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc);
 int
  xmlValidateDocument (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc);
 int
  xmlValidateElement (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
      xmlNodePtr elem);
 int
  xmlValidateOneElement (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
                           xmlNodePtr elem);
 int
  xmlValidateOneAttribute (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
      xmlNodePtr elem,
      xmlAttrPtr attr,
      const xmlChar *value);
 int
  xmlValidateOneNamespace (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
      xmlNodePtr elem,
      const xmlChar *prefix,
      xmlNsPtr ns,
      const xmlChar *value);
 int
  xmlValidateDocumentFinal(xmlValidCtxtPtr ctxt,
      xmlDocPtr doc);



 int
  xmlValidateNotationUse (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
      const xmlChar *notationName);


 int
  xmlIsMixedElement (xmlDocPtr doc,
      const xmlChar *name);
 xmlAttributePtr
  xmlGetDtdAttrDesc (xmlDtdPtr dtd,
      const xmlChar *elem,
      const xmlChar *name);
 xmlAttributePtr
  xmlGetDtdQAttrDesc (xmlDtdPtr dtd,
      const xmlChar *elem,
      const xmlChar *name,
      const xmlChar *prefix);
 xmlNotationPtr
  xmlGetDtdNotationDesc (xmlDtdPtr dtd,
      const xmlChar *name);
 xmlElementPtr
  xmlGetDtdQElementDesc (xmlDtdPtr dtd,
      const xmlChar *name,
      const xmlChar *prefix);
 xmlElementPtr
  xmlGetDtdElementDesc (xmlDtdPtr dtd,
      const xmlChar *name);



 int
  xmlValidGetPotentialChildren(xmlElementContent *ctree,
      const xmlChar **names,
      int *len,
      int max);

 int
  xmlValidGetValidElements(xmlNode *prev,
      xmlNode *next,
      const xmlChar **names,
      int max);
 int
  xmlValidateNameValue (const xmlChar *value);
 int
  xmlValidateNamesValue (const xmlChar *value);
 int
  xmlValidateNmtokenValue (const xmlChar *value);
 int
  xmlValidateNmtokensValue(const xmlChar *value);





 int
  xmlValidBuildContentModel(xmlValidCtxtPtr ctxt,
      xmlElementPtr elem);

 int
  xmlValidatePushElement (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
      xmlNodePtr elem,
      const xmlChar *qname);
 int
  xmlValidatePushCData (xmlValidCtxtPtr ctxt,
      const xmlChar *data,
      int len);
 int
  xmlValidatePopElement (xmlValidCtxtPtr ctxt,
      xmlDocPtr doc,
      xmlNodePtr elem,
      const xmlChar *qname);
# 20 "/usr/include/libxml2/libxml/parser.h" 2
# 1 "/usr/include/libxml2/libxml/entities.h" 1
# 24 "/usr/include/libxml2/libxml/entities.h"
typedef enum {
    XML_INTERNAL_GENERAL_ENTITY = 1,
    XML_EXTERNAL_GENERAL_PARSED_ENTITY = 2,
    XML_EXTERNAL_GENERAL_UNPARSED_ENTITY = 3,
    XML_INTERNAL_PARAMETER_ENTITY = 4,
    XML_EXTERNAL_PARAMETER_ENTITY = 5,
    XML_INTERNAL_PREDEFINED_ENTITY = 6
} xmlEntityType;






struct _xmlEntity {
    void *_private;
    xmlElementType type;
    const xmlChar *name;
    struct _xmlNode *children;
    struct _xmlNode *last;
    struct _xmlDtd *parent;
    struct _xmlNode *next;
    struct _xmlNode *prev;
    struct _xmlDoc *doc;

    xmlChar *orig;
    xmlChar *content;
    int length;
    xmlEntityType etype;
    const xmlChar *ExternalID;
    const xmlChar *SystemID;

    struct _xmlEntity *nexte;
    const xmlChar *URI;
    int owner;
    int checked;


};






typedef struct _xmlHashTable xmlEntitiesTable;
typedef xmlEntitiesTable *xmlEntitiesTablePtr;






 void
  xmlInitializePredefinedEntities (void);


 xmlEntityPtr
   xmlNewEntity (xmlDocPtr doc,
       const xmlChar *name,
       int type,
       const xmlChar *ExternalID,
       const xmlChar *SystemID,
       const xmlChar *content);
 xmlEntityPtr
   xmlAddDocEntity (xmlDocPtr doc,
       const xmlChar *name,
       int type,
       const xmlChar *ExternalID,
       const xmlChar *SystemID,
       const xmlChar *content);
 xmlEntityPtr
   xmlAddDtdEntity (xmlDocPtr doc,
       const xmlChar *name,
       int type,
       const xmlChar *ExternalID,
       const xmlChar *SystemID,
       const xmlChar *content);
 xmlEntityPtr
   xmlGetPredefinedEntity (const xmlChar *name);
 xmlEntityPtr
   xmlGetDocEntity (xmlDocPtr doc,
       const xmlChar *name);
 xmlEntityPtr
   xmlGetDtdEntity (xmlDocPtr doc,
       const xmlChar *name);
 xmlEntityPtr
   xmlGetParameterEntity (xmlDocPtr doc,
       const xmlChar *name);

 const xmlChar *
   xmlEncodeEntities (xmlDocPtr doc,
       const xmlChar *input);

 xmlChar *
   xmlEncodeEntitiesReentrant(xmlDocPtr doc,
       const xmlChar *input);
 xmlChar *
   xmlEncodeSpecialChars (xmlDocPtr doc,
       const xmlChar *input);
 xmlEntitiesTablePtr
   xmlCreateEntitiesTable (void);

 xmlEntitiesTablePtr
   xmlCopyEntitiesTable (xmlEntitiesTablePtr table);

 void
   xmlFreeEntitiesTable (xmlEntitiesTablePtr table);

 void
   xmlDumpEntitiesTable (xmlBufferPtr buf,
       xmlEntitiesTablePtr table);
 void
   xmlDumpEntityDecl (xmlBufferPtr buf,
       xmlEntityPtr ent);


 void
   xmlCleanupPredefinedEntities(void);
# 21 "/usr/include/libxml2/libxml/parser.h" 2
# 1 "/usr/include/libxml2/libxml/xmlerror.h" 1
# 22 "/usr/include/libxml2/libxml/parser.h" 2
# 52 "/usr/include/libxml2/libxml/parser.h"
typedef void (* xmlParserInputDeallocate)(xmlChar *str);

struct _xmlParserInput {

    xmlParserInputBufferPtr buf;

    const char *filename;
    const char *directory;
    const xmlChar *base;
    const xmlChar *cur;
    const xmlChar *end;
    int length;
    int line;
    int col;





    unsigned long consumed;
    xmlParserInputDeallocate free;
    const xmlChar *encoding;
    const xmlChar *version;
    int standalone;
    int id;
};
# 86 "/usr/include/libxml2/libxml/parser.h"
typedef struct _xmlParserNodeInfo xmlParserNodeInfo;
typedef xmlParserNodeInfo *xmlParserNodeInfoPtr;

struct _xmlParserNodeInfo {
  const struct _xmlNode* node;

  unsigned long begin_pos;
  unsigned long begin_line;
  unsigned long end_pos;
  unsigned long end_line;
};

typedef struct _xmlParserNodeInfoSeq xmlParserNodeInfoSeq;
typedef xmlParserNodeInfoSeq *xmlParserNodeInfoSeqPtr;
struct _xmlParserNodeInfoSeq {
  unsigned long maximum;
  unsigned long length;
  xmlParserNodeInfo* buffer;
};







typedef enum {
    XML_PARSER_EOF = -1,
    XML_PARSER_START = 0,
    XML_PARSER_MISC,
    XML_PARSER_PI,
    XML_PARSER_DTD,
    XML_PARSER_PROLOG,
    XML_PARSER_COMMENT,
    XML_PARSER_START_TAG,
    XML_PARSER_CONTENT,
    XML_PARSER_CDATA_SECTION,
    XML_PARSER_END_TAG,
    XML_PARSER_ENTITY_DECL,
    XML_PARSER_ENTITY_VALUE,
    XML_PARSER_ATTRIBUTE_VALUE,
    XML_PARSER_SYSTEM_LITERAL,
    XML_PARSER_EPILOG,
    XML_PARSER_IGNORE,
    XML_PARSER_PUBLIC_LITERAL
} xmlParserInputState;
# 163 "/usr/include/libxml2/libxml/parser.h"
typedef enum {
    XML_PARSE_UNKNOWN = 0,
    XML_PARSE_DOM = 1,
    XML_PARSE_SAX = 2,
    XML_PARSE_PUSH_DOM = 3,
    XML_PARSE_PUSH_SAX = 4,
    XML_PARSE_READER = 5
} xmlParserMode;
# 184 "/usr/include/libxml2/libxml/parser.h"
struct _xmlParserCtxt {
    struct _xmlSAXHandler *sax;
    void *userData;
    xmlDocPtr myDoc;
    int wellFormed;
    int replaceEntities;
    const xmlChar *version;
    const xmlChar *encoding;
    int standalone;
    int html;





    xmlParserInputPtr input;
    int inputNr;
    int inputMax;
    xmlParserInputPtr *inputTab;


    xmlNodePtr node;
    int nodeNr;
    int nodeMax;
    xmlNodePtr *nodeTab;

    int record_info;
    xmlParserNodeInfoSeq node_seq;

    int errNo;

    int hasExternalSubset;
    int hasPErefs;
    int external;

    int valid;
    int validate;
    xmlValidCtxt vctxt;

    xmlParserInputState instate;
    int token;

    char *directory;


    const xmlChar *name;
    int nameNr;
    int nameMax;
    const xmlChar * *nameTab;

    long nbChars;
    long checkIndex;
    int keepBlanks;
    int disableSAX;
    int inSubset;
    const xmlChar * intSubName;
    xmlChar * extSubURI;
    xmlChar * extSubSystem;


    int * space;
    int spaceNr;
    int spaceMax;
    int * spaceTab;

    int depth;
    xmlParserInputPtr entity;
    int charset;

    int nodelen;
    int nodemem;
    int pedantic;
    void *_private;

    int loadsubset;
    int linenumbers;
    void *catalogs;
    int recovery;
    int progressive;
    xmlDictPtr dict;
    const xmlChar * *atts;
    int maxatts;
    int docdict;




    const xmlChar *str_xml;
    const xmlChar *str_xmlns;
    const xmlChar *str_xml_ns;




    int sax2;
    int nsNr;
    int nsMax;
    const xmlChar * *nsTab;
    int *attallocs;
    void * *pushTab;
    xmlHashTablePtr attsDefault;
    xmlHashTablePtr attsSpecial;
    int nsWellFormed;
    int options;




    int dictNames;
    int freeElemsNr;
    xmlNodePtr freeElems;
    int freeAttrsNr;
    xmlAttrPtr freeAttrs;




    xmlError lastError;
    xmlParserMode parseMode;
    unsigned long nbentities;
    unsigned long sizeentities;


    xmlParserNodeInfo *nodeInfo;
    int nodeInfoNr;
    int nodeInfoMax;
    xmlParserNodeInfo *nodeInfoTab;
};






struct _xmlSAXLocator {
    const xmlChar *(*getPublicId)(void *ctx);
    const xmlChar *(*getSystemId)(void *ctx);
    int (*getLineNumber)(void *ctx);
    int (*getColumnNumber)(void *ctx);
};
# 347 "/usr/include/libxml2/libxml/parser.h"
typedef xmlParserInputPtr (*resolveEntitySAXFunc) (void *ctx,
    const xmlChar *publicId,
    const xmlChar *systemId);
# 359 "/usr/include/libxml2/libxml/parser.h"
typedef void (*internalSubsetSAXFunc) (void *ctx,
    const xmlChar *name,
    const xmlChar *ExternalID,
    const xmlChar *SystemID);
# 372 "/usr/include/libxml2/libxml/parser.h"
typedef void (*externalSubsetSAXFunc) (void *ctx,
    const xmlChar *name,
    const xmlChar *ExternalID,
    const xmlChar *SystemID);
# 385 "/usr/include/libxml2/libxml/parser.h"
typedef xmlEntityPtr (*getEntitySAXFunc) (void *ctx,
    const xmlChar *name);
# 396 "/usr/include/libxml2/libxml/parser.h"
typedef xmlEntityPtr (*getParameterEntitySAXFunc) (void *ctx,
    const xmlChar *name);
# 409 "/usr/include/libxml2/libxml/parser.h"
typedef void (*entityDeclSAXFunc) (void *ctx,
    const xmlChar *name,
    int type,
    const xmlChar *publicId,
    const xmlChar *systemId,
    xmlChar *content);
# 424 "/usr/include/libxml2/libxml/parser.h"
typedef void (*notationDeclSAXFunc)(void *ctx,
    const xmlChar *name,
    const xmlChar *publicId,
    const xmlChar *systemId);
# 440 "/usr/include/libxml2/libxml/parser.h"
typedef void (*attributeDeclSAXFunc)(void *ctx,
    const xmlChar *elem,
    const xmlChar *fullname,
    int type,
    int def,
    const xmlChar *defaultValue,
    xmlEnumerationPtr tree);
# 456 "/usr/include/libxml2/libxml/parser.h"
typedef void (*elementDeclSAXFunc)(void *ctx,
    const xmlChar *name,
    int type,
    xmlElementContentPtr content);
# 470 "/usr/include/libxml2/libxml/parser.h"
typedef void (*unparsedEntityDeclSAXFunc)(void *ctx,
    const xmlChar *name,
    const xmlChar *publicId,
    const xmlChar *systemId,
    const xmlChar *notationName);
# 483 "/usr/include/libxml2/libxml/parser.h"
typedef void (*setDocumentLocatorSAXFunc) (void *ctx,
    xmlSAXLocatorPtr loc);






typedef void (*startDocumentSAXFunc) (void *ctx);






typedef void (*endDocumentSAXFunc) (void *ctx);
# 507 "/usr/include/libxml2/libxml/parser.h"
typedef void (*startElementSAXFunc) (void *ctx,
    const xmlChar *name,
    const xmlChar **atts);







typedef void (*endElementSAXFunc) (void *ctx,
    const xmlChar *name);
# 530 "/usr/include/libxml2/libxml/parser.h"
typedef void (*attributeSAXFunc) (void *ctx,
    const xmlChar *name,
    const xmlChar *value);







typedef void (*referenceSAXFunc) (void *ctx,
    const xmlChar *name);
# 550 "/usr/include/libxml2/libxml/parser.h"
typedef void (*charactersSAXFunc) (void *ctx,
    const xmlChar *ch,
    int len);
# 562 "/usr/include/libxml2/libxml/parser.h"
typedef void (*ignorableWhitespaceSAXFunc) (void *ctx,
    const xmlChar *ch,
    int len);
# 573 "/usr/include/libxml2/libxml/parser.h"
typedef void (*processingInstructionSAXFunc) (void *ctx,
    const xmlChar *target,
    const xmlChar *data);







typedef void (*commentSAXFunc) (void *ctx,
    const xmlChar *value);
# 593 "/usr/include/libxml2/libxml/parser.h"
typedef void (*cdataBlockSAXFunc) (
                         void *ctx,
    const xmlChar *value,
    int len);
# 605 "/usr/include/libxml2/libxml/parser.h"
typedef void ( *warningSAXFunc) (void *ctx,
    const char *msg, ...) __attribute__((__format__(__printf__,2,3)));
# 615 "/usr/include/libxml2/libxml/parser.h"
typedef void ( *errorSAXFunc) (void *ctx,
    const char *msg, ...) __attribute__((__format__(__printf__,2,3)));
# 627 "/usr/include/libxml2/libxml/parser.h"
typedef void ( *fatalErrorSAXFunc) (void *ctx,
    const char *msg, ...) __attribute__((__format__(__printf__,2,3)));
# 637 "/usr/include/libxml2/libxml/parser.h"
typedef int (*isStandaloneSAXFunc) (void *ctx);
# 646 "/usr/include/libxml2/libxml/parser.h"
typedef int (*hasInternalSubsetSAXFunc) (void *ctx);
# 656 "/usr/include/libxml2/libxml/parser.h"
typedef int (*hasExternalSubsetSAXFunc) (void *ctx);
# 689 "/usr/include/libxml2/libxml/parser.h"
typedef void (*startElementNsSAX2Func) (void *ctx,
     const xmlChar *localname,
     const xmlChar *prefix,
     const xmlChar *URI,
     int nb_namespaces,
     const xmlChar **namespaces,
     int nb_attributes,
     int nb_defaulted,
     const xmlChar **attributes);
# 710 "/usr/include/libxml2/libxml/parser.h"
typedef void (*endElementNsSAX2Func) (void *ctx,
     const xmlChar *localname,
     const xmlChar *prefix,
     const xmlChar *URI);


struct _xmlSAXHandler {
    internalSubsetSAXFunc internalSubset;
    isStandaloneSAXFunc isStandalone;
    hasInternalSubsetSAXFunc hasInternalSubset;
    hasExternalSubsetSAXFunc hasExternalSubset;
    resolveEntitySAXFunc resolveEntity;
    getEntitySAXFunc getEntity;
    entityDeclSAXFunc entityDecl;
    notationDeclSAXFunc notationDecl;
    attributeDeclSAXFunc attributeDecl;
    elementDeclSAXFunc elementDecl;
    unparsedEntityDeclSAXFunc unparsedEntityDecl;
    setDocumentLocatorSAXFunc setDocumentLocator;
    startDocumentSAXFunc startDocument;
    endDocumentSAXFunc endDocument;
    startElementSAXFunc startElement;
    endElementSAXFunc endElement;
    referenceSAXFunc reference;
    charactersSAXFunc characters;
    ignorableWhitespaceSAXFunc ignorableWhitespace;
    processingInstructionSAXFunc processingInstruction;
    commentSAXFunc comment;
    warningSAXFunc warning;
    errorSAXFunc error;
    fatalErrorSAXFunc fatalError;
    getParameterEntitySAXFunc getParameterEntity;
    cdataBlockSAXFunc cdataBlock;
    externalSubsetSAXFunc externalSubset;
    unsigned int initialized;

    void *_private;
    startElementNsSAX2Func startElementNs;
    endElementNsSAX2Func endElementNs;
    xmlStructuredErrorFunc serror;
};




typedef struct _xmlSAXHandlerV1 xmlSAXHandlerV1;
typedef xmlSAXHandlerV1 *xmlSAXHandlerV1Ptr;
struct _xmlSAXHandlerV1 {
    internalSubsetSAXFunc internalSubset;
    isStandaloneSAXFunc isStandalone;
    hasInternalSubsetSAXFunc hasInternalSubset;
    hasExternalSubsetSAXFunc hasExternalSubset;
    resolveEntitySAXFunc resolveEntity;
    getEntitySAXFunc getEntity;
    entityDeclSAXFunc entityDecl;
    notationDeclSAXFunc notationDecl;
    attributeDeclSAXFunc attributeDecl;
    elementDeclSAXFunc elementDecl;
    unparsedEntityDeclSAXFunc unparsedEntityDecl;
    setDocumentLocatorSAXFunc setDocumentLocator;
    startDocumentSAXFunc startDocument;
    endDocumentSAXFunc endDocument;
    startElementSAXFunc startElement;
    endElementSAXFunc endElement;
    referenceSAXFunc reference;
    charactersSAXFunc characters;
    ignorableWhitespaceSAXFunc ignorableWhitespace;
    processingInstructionSAXFunc processingInstruction;
    commentSAXFunc comment;
    warningSAXFunc warning;
    errorSAXFunc error;
    fatalErrorSAXFunc fatalError;
    getParameterEntitySAXFunc getParameterEntity;
    cdataBlockSAXFunc cdataBlock;
    externalSubsetSAXFunc externalSubset;
    unsigned int initialized;
};
# 799 "/usr/include/libxml2/libxml/parser.h"
typedef xmlParserInputPtr (*xmlExternalEntityLoader) (const char *URL,
      const char *ID,
      xmlParserCtxtPtr context);





# 1 "/usr/include/libxml2/libxml/encoding.h" 1
# 28 "/usr/include/libxml2/libxml/encoding.h"
# 1 "/usr/include/iconv.h" 1 3 4
# 24 "/usr/include/iconv.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 25 "/usr/include/iconv.h" 2 3 4





typedef void *iconv_t;







extern iconv_t iconv_open (__const char *__tocode, __const char *__fromcode);




extern size_t iconv (iconv_t __cd, char **__restrict __inbuf,
       size_t *__restrict __inbytesleft,
       char **__restrict __outbuf,
       size_t *__restrict __outbytesleft);





extern int iconv_close (iconv_t __cd);


# 29 "/usr/include/libxml2/libxml/encoding.h" 2
# 55 "/usr/include/libxml2/libxml/encoding.h"
typedef enum {
    XML_CHAR_ENCODING_ERROR= -1,
    XML_CHAR_ENCODING_NONE= 0,
    XML_CHAR_ENCODING_UTF8= 1,
    XML_CHAR_ENCODING_UTF16LE= 2,
    XML_CHAR_ENCODING_UTF16BE= 3,
    XML_CHAR_ENCODING_UCS4LE= 4,
    XML_CHAR_ENCODING_UCS4BE= 5,
    XML_CHAR_ENCODING_EBCDIC= 6,
    XML_CHAR_ENCODING_UCS4_2143=7,
    XML_CHAR_ENCODING_UCS4_3412=8,
    XML_CHAR_ENCODING_UCS2= 9,
    XML_CHAR_ENCODING_8859_1= 10,
    XML_CHAR_ENCODING_8859_2= 11,
    XML_CHAR_ENCODING_8859_3= 12,
    XML_CHAR_ENCODING_8859_4= 13,
    XML_CHAR_ENCODING_8859_5= 14,
    XML_CHAR_ENCODING_8859_6= 15,
    XML_CHAR_ENCODING_8859_7= 16,
    XML_CHAR_ENCODING_8859_8= 17,
    XML_CHAR_ENCODING_8859_9= 18,
    XML_CHAR_ENCODING_2022_JP= 19,
    XML_CHAR_ENCODING_SHIFT_JIS=20,
    XML_CHAR_ENCODING_EUC_JP= 21,
    XML_CHAR_ENCODING_ASCII= 22
} xmlCharEncoding;
# 98 "/usr/include/libxml2/libxml/encoding.h"
typedef int (* xmlCharEncodingInputFunc)(unsigned char *out, int *outlen,
                                         const unsigned char *in, int *inlen);
# 120 "/usr/include/libxml2/libxml/encoding.h"
typedef int (* xmlCharEncodingOutputFunc)(unsigned char *out, int *outlen,
                                          const unsigned char *in, int *inlen);







typedef struct _xmlCharEncodingHandler xmlCharEncodingHandler;
typedef xmlCharEncodingHandler *xmlCharEncodingHandlerPtr;
struct _xmlCharEncodingHandler {
    char *name;
    xmlCharEncodingInputFunc input;
    xmlCharEncodingOutputFunc output;

    iconv_t iconv_in;
    iconv_t iconv_out;

};
# 152 "/usr/include/libxml2/libxml/encoding.h"
 void
 xmlInitCharEncodingHandlers (void);
 void
 xmlCleanupCharEncodingHandlers (void);
 void
 xmlRegisterCharEncodingHandler (xmlCharEncodingHandlerPtr handler);
 xmlCharEncodingHandlerPtr
 xmlGetCharEncodingHandler (xmlCharEncoding enc);
 xmlCharEncodingHandlerPtr
 xmlFindCharEncodingHandler (const char *name);
 xmlCharEncodingHandlerPtr
 xmlNewCharEncodingHandler (const char *name,
                             xmlCharEncodingInputFunc input,
                             xmlCharEncodingOutputFunc output);




 int
 xmlAddEncodingAlias (const char *name,
      const char *alias);
 int
 xmlDelEncodingAlias (const char *alias);
 const char *
 xmlGetEncodingAlias (const char *alias);
 void
 xmlCleanupEncodingAliases (void);
 xmlCharEncoding
 xmlParseCharEncoding (const char *name);
 const char *
 xmlGetCharEncodingName (xmlCharEncoding enc);




 xmlCharEncoding
 xmlDetectCharEncoding (const unsigned char *in,
      int len);

 int
 xmlCharEncOutFunc (xmlCharEncodingHandler *handler,
      xmlBufferPtr out,
      xmlBufferPtr in);

 int
 xmlCharEncInFunc (xmlCharEncodingHandler *handler,
      xmlBufferPtr out,
      xmlBufferPtr in);
 int
 xmlCharEncFirstLine (xmlCharEncodingHandler *handler,
      xmlBufferPtr out,
      xmlBufferPtr in);
 int
 xmlCharEncCloseFunc (xmlCharEncodingHandler *handler);





 int
 UTF8Toisolat1 (unsigned char *out,
      int *outlen,
      const unsigned char *in,
      int *inlen);

 int
 isolat1ToUTF8 (unsigned char *out,
      int *outlen,
      const unsigned char *in,
      int *inlen);
# 808 "/usr/include/libxml2/libxml/parser.h" 2
# 1 "/usr/include/libxml2/libxml/xmlIO.h" 1
# 34 "/usr/include/libxml2/libxml/xmlIO.h"
typedef int ( *xmlInputMatchCallback) (char const *filename);
# 43 "/usr/include/libxml2/libxml/xmlIO.h"
typedef void * ( *xmlInputOpenCallback) (char const *filename);
# 54 "/usr/include/libxml2/libxml/xmlIO.h"
typedef int ( *xmlInputReadCallback) (void * context, char * buffer, int len);
# 63 "/usr/include/libxml2/libxml/xmlIO.h"
typedef int ( *xmlInputCloseCallback) (void * context);
# 80 "/usr/include/libxml2/libxml/xmlIO.h"
typedef int ( *xmlOutputMatchCallback) (char const *filename);
# 89 "/usr/include/libxml2/libxml/xmlIO.h"
typedef void * ( *xmlOutputOpenCallback) (char const *filename);
# 100 "/usr/include/libxml2/libxml/xmlIO.h"
typedef int ( *xmlOutputWriteCallback) (void * context, const char * buffer,
                                       int len);
# 110 "/usr/include/libxml2/libxml/xmlIO.h"
typedef int ( *xmlOutputCloseCallback) (void * context);






# 1 "/usr/include/libxml2/libxml/globals.h" 1
# 19 "/usr/include/libxml2/libxml/globals.h"
# 1 "/usr/include/libxml2/libxml/xmlerror.h" 1
# 20 "/usr/include/libxml2/libxml/globals.h" 2
# 1 "/usr/include/libxml2/libxml/SAX.h" 1
# 19 "/usr/include/libxml2/libxml/SAX.h"
# 1 "/usr/include/libxml2/libxml/xlink.h" 1
# 32 "/usr/include/libxml2/libxml/xlink.h"
typedef xmlChar *xlinkHRef;
typedef xmlChar *xlinkRole;
typedef xmlChar *xlinkTitle;

typedef enum {
    XLINK_TYPE_NONE = 0,
    XLINK_TYPE_SIMPLE,
    XLINK_TYPE_EXTENDED,
    XLINK_TYPE_EXTENDED_SET
} xlinkType;

typedef enum {
    XLINK_SHOW_NONE = 0,
    XLINK_SHOW_NEW,
    XLINK_SHOW_EMBED,
    XLINK_SHOW_REPLACE
} xlinkShow;

typedef enum {
    XLINK_ACTUATE_NONE = 0,
    XLINK_ACTUATE_AUTO,
    XLINK_ACTUATE_ONREQUEST
} xlinkActuate;
# 64 "/usr/include/libxml2/libxml/xlink.h"
typedef void (*xlinkNodeDetectFunc) (void *ctx, xmlNodePtr node);
# 81 "/usr/include/libxml2/libxml/xlink.h"
typedef void
(*xlinkSimpleLinkFunk) (void *ctx,
    xmlNodePtr node,
    const xlinkHRef href,
    const xlinkRole role,
    const xlinkTitle title);
# 106 "/usr/include/libxml2/libxml/xlink.h"
typedef void
(*xlinkExtendedLinkFunk)(void *ctx,
    xmlNodePtr node,
    int nbLocators,
    const xlinkHRef *hrefs,
    const xlinkRole *roles,
    int nbArcs,
    const xlinkRole *from,
    const xlinkRole *to,
    xlinkShow *show,
    xlinkActuate *actuate,
    int nbTitles,
    const xlinkTitle *titles,
    const xmlChar **langs);
# 134 "/usr/include/libxml2/libxml/xlink.h"
typedef void
(*xlinkExtendedLinkSetFunk) (void *ctx,
     xmlNodePtr node,
     int nbLocators,
     const xlinkHRef *hrefs,
     const xlinkRole *roles,
     int nbTitles,
     const xlinkTitle *titles,
     const xmlChar **langs);







typedef struct _xlinkHandler xlinkHandler;
typedef xlinkHandler *xlinkHandlerPtr;
struct _xlinkHandler {
    xlinkSimpleLinkFunk simple;
    xlinkExtendedLinkFunk extended;
    xlinkExtendedLinkSetFunk set;
};






 xlinkNodeDetectFunc
  xlinkGetDefaultDetect (void);
 void
  xlinkSetDefaultDetect (xlinkNodeDetectFunc func);




 xlinkHandlerPtr
  xlinkGetDefaultHandler (void);
 void
  xlinkSetDefaultHandler (xlinkHandlerPtr handler);




 xlinkType
  xlinkIsLink (xmlDocPtr doc,
      xmlNodePtr node);
# 20 "/usr/include/libxml2/libxml/SAX.h" 2






 const xmlChar *
  getPublicId (void *ctx);
 const xmlChar *
  getSystemId (void *ctx);
 void
  setDocumentLocator (void *ctx,
       xmlSAXLocatorPtr loc);

 int
  getLineNumber (void *ctx);
 int
  getColumnNumber (void *ctx);

 int
  isStandalone (void *ctx);
 int
  hasInternalSubset (void *ctx);
 int
  hasExternalSubset (void *ctx);

 void
  internalSubset (void *ctx,
       const xmlChar *name,
       const xmlChar *ExternalID,
       const xmlChar *SystemID);
 void
  externalSubset (void *ctx,
       const xmlChar *name,
       const xmlChar *ExternalID,
       const xmlChar *SystemID);
 xmlEntityPtr
  getEntity (void *ctx,
       const xmlChar *name);
 xmlEntityPtr
  getParameterEntity (void *ctx,
       const xmlChar *name);
 xmlParserInputPtr
  resolveEntity (void *ctx,
       const xmlChar *publicId,
       const xmlChar *systemId);

 void
  entityDecl (void *ctx,
       const xmlChar *name,
       int type,
       const xmlChar *publicId,
       const xmlChar *systemId,
       xmlChar *content);
 void
  attributeDecl (void *ctx,
       const xmlChar *elem,
       const xmlChar *fullname,
       int type,
       int def,
       const xmlChar *defaultValue,
       xmlEnumerationPtr tree);
 void
  elementDecl (void *ctx,
       const xmlChar *name,
       int type,
       xmlElementContentPtr content);
 void
  notationDecl (void *ctx,
       const xmlChar *name,
       const xmlChar *publicId,
       const xmlChar *systemId);
 void
  unparsedEntityDecl (void *ctx,
       const xmlChar *name,
       const xmlChar *publicId,
       const xmlChar *systemId,
       const xmlChar *notationName);

 void
  startDocument (void *ctx);
 void
  endDocument (void *ctx);
 void
  attribute (void *ctx,
       const xmlChar *fullname,
       const xmlChar *value);
 void
  startElement (void *ctx,
       const xmlChar *fullname,
       const xmlChar **atts);
 void
  endElement (void *ctx,
       const xmlChar *name);
 void
  reference (void *ctx,
       const xmlChar *name);
 void
  characters (void *ctx,
       const xmlChar *ch,
       int len);
 void
  ignorableWhitespace (void *ctx,
       const xmlChar *ch,
       int len);
 void
  processingInstruction (void *ctx,
       const xmlChar *target,
       const xmlChar *data);
 void
  globalNamespace (void *ctx,
       const xmlChar *href,
       const xmlChar *prefix);
 void
  setNamespace (void *ctx,
       const xmlChar *name);
 xmlNsPtr
  getNamespace (void *ctx);
 int
  checkNamespace (void *ctx,
       xmlChar *nameSpace);
 void
  namespaceDecl (void *ctx,
       const xmlChar *href,
       const xmlChar *prefix);
 void
  comment (void *ctx,
       const xmlChar *value);
 void
  cdataBlock (void *ctx,
       const xmlChar *value,
       int len);


 void
  initxmlDefaultSAXHandler (xmlSAXHandlerV1 *hdlr,
       int warning);

 void
  inithtmlDefaultSAXHandler (xmlSAXHandlerV1 *hdlr);


 void
  initdocbDefaultSAXHandler (xmlSAXHandlerV1 *hdlr);
# 21 "/usr/include/libxml2/libxml/globals.h" 2
# 1 "/usr/include/libxml2/libxml/SAX2.h" 1
# 24 "/usr/include/libxml2/libxml/SAX2.h"
 const xmlChar *
  xmlSAX2GetPublicId (void *ctx);
 const xmlChar *
  xmlSAX2GetSystemId (void *ctx);
 void
  xmlSAX2SetDocumentLocator (void *ctx,
       xmlSAXLocatorPtr loc);

 int
  xmlSAX2GetLineNumber (void *ctx);
 int
  xmlSAX2GetColumnNumber (void *ctx);

 int
  xmlSAX2IsStandalone (void *ctx);
 int
  xmlSAX2HasInternalSubset (void *ctx);
 int
  xmlSAX2HasExternalSubset (void *ctx);

 void
  xmlSAX2InternalSubset (void *ctx,
       const xmlChar *name,
       const xmlChar *ExternalID,
       const xmlChar *SystemID);
 void
  xmlSAX2ExternalSubset (void *ctx,
       const xmlChar *name,
       const xmlChar *ExternalID,
       const xmlChar *SystemID);
 xmlEntityPtr
  xmlSAX2GetEntity (void *ctx,
       const xmlChar *name);
 xmlEntityPtr
  xmlSAX2GetParameterEntity (void *ctx,
       const xmlChar *name);
 xmlParserInputPtr
  xmlSAX2ResolveEntity (void *ctx,
       const xmlChar *publicId,
       const xmlChar *systemId);

 void
  xmlSAX2EntityDecl (void *ctx,
       const xmlChar *name,
       int type,
       const xmlChar *publicId,
       const xmlChar *systemId,
       xmlChar *content);
 void
  xmlSAX2AttributeDecl (void *ctx,
       const xmlChar *elem,
       const xmlChar *fullname,
       int type,
       int def,
       const xmlChar *defaultValue,
       xmlEnumerationPtr tree);
 void
  xmlSAX2ElementDecl (void *ctx,
       const xmlChar *name,
       int type,
       xmlElementContentPtr content);
 void
  xmlSAX2NotationDecl (void *ctx,
       const xmlChar *name,
       const xmlChar *publicId,
       const xmlChar *systemId);
 void
  xmlSAX2UnparsedEntityDecl (void *ctx,
       const xmlChar *name,
       const xmlChar *publicId,
       const xmlChar *systemId,
       const xmlChar *notationName);

 void
  xmlSAX2StartDocument (void *ctx);
 void
  xmlSAX2EndDocument (void *ctx);

 void
  xmlSAX2StartElement (void *ctx,
       const xmlChar *fullname,
       const xmlChar **atts);
 void
  xmlSAX2EndElement (void *ctx,
       const xmlChar *name);

 void
  xmlSAX2StartElementNs (void *ctx,
       const xmlChar *localname,
       const xmlChar *prefix,
       const xmlChar *URI,
       int nb_namespaces,
       const xmlChar **namespaces,
       int nb_attributes,
       int nb_defaulted,
       const xmlChar **attributes);
 void
  xmlSAX2EndElementNs (void *ctx,
       const xmlChar *localname,
       const xmlChar *prefix,
       const xmlChar *URI);
 void
  xmlSAX2Reference (void *ctx,
       const xmlChar *name);
 void
  xmlSAX2Characters (void *ctx,
       const xmlChar *ch,
       int len);
 void
  xmlSAX2IgnorableWhitespace (void *ctx,
       const xmlChar *ch,
       int len);
 void
  xmlSAX2ProcessingInstruction (void *ctx,
       const xmlChar *target,
       const xmlChar *data);
 void
  xmlSAX2Comment (void *ctx,
       const xmlChar *value);
 void
  xmlSAX2CDataBlock (void *ctx,
       const xmlChar *value,
       int len);


 int
  xmlSAXDefaultVersion (int version);


 int
  xmlSAXVersion (xmlSAXHandler *hdlr,
       int version);
 void
  xmlSAX2InitDefaultSAXHandler (xmlSAXHandler *hdlr,
       int warning);

 void
  xmlSAX2InitHtmlDefaultSAXHandler(xmlSAXHandler *hdlr);
 void
  htmlDefaultSAXHandlerInit (void);


 void
  xmlSAX2InitDocbDefaultSAXHandler(xmlSAXHandler *hdlr);
 void
  docbDefaultSAXHandlerInit (void);

 void
  xmlDefaultSAXHandlerInit (void);
# 22 "/usr/include/libxml2/libxml/globals.h" 2
# 1 "/usr/include/libxml2/libxml/xmlmemory.h" 1
# 57 "/usr/include/libxml2/libxml/xmlmemory.h"
typedef void ( *xmlFreeFunc)(void *mem);
# 66 "/usr/include/libxml2/libxml/xmlmemory.h"
typedef void *(__attribute__((alloc_size(1))) *xmlMallocFunc)(size_t size);
# 77 "/usr/include/libxml2/libxml/xmlmemory.h"
typedef void *( *xmlReallocFunc)(void *mem, size_t size);
# 87 "/usr/include/libxml2/libxml/xmlmemory.h"
typedef char *( *xmlStrdupFunc)(const char *str);
# 103 "/usr/include/libxml2/libxml/xmlmemory.h"
 int
 xmlMemSetup (xmlFreeFunc freeFunc,
    xmlMallocFunc mallocFunc,
    xmlReallocFunc reallocFunc,
    xmlStrdupFunc strdupFunc);
 int
 xmlMemGet (xmlFreeFunc *freeFunc,
    xmlMallocFunc *mallocFunc,
    xmlReallocFunc *reallocFunc,
    xmlStrdupFunc *strdupFunc);
 int
 xmlGcMemSetup (xmlFreeFunc freeFunc,
    xmlMallocFunc mallocFunc,
    xmlMallocFunc mallocAtomicFunc,
    xmlReallocFunc reallocFunc,
    xmlStrdupFunc strdupFunc);
 int
 xmlGcMemGet (xmlFreeFunc *freeFunc,
    xmlMallocFunc *mallocFunc,
    xmlMallocFunc *mallocAtomicFunc,
    xmlReallocFunc *reallocFunc,
    xmlStrdupFunc *strdupFunc);




 int
 xmlInitMemory (void);




 void
                xmlCleanupMemory (void);



 int
 xmlMemUsed (void);
 int
 xmlMemBlocks (void);
 void
 xmlMemDisplay (FILE *fp);
 void
 xmlMemDisplayLast(FILE *fp, long nbBytes);
 void
 xmlMemShow (FILE *fp, int nr);
 void
 xmlMemoryDump (void);
 void *
 xmlMemMalloc (size_t size) __attribute__((alloc_size(1)));
 void *
 xmlMemRealloc (void *ptr,size_t size);
 void
 xmlMemFree (void *ptr);
 char *
 xmlMemoryStrdup (const char *str);
 void *
 xmlMallocLoc (size_t size, const char *file, int line) __attribute__((alloc_size(1)));
 void *
 xmlReallocLoc (void *ptr, size_t size, const char *file, int line);
 void *
 xmlMallocAtomicLoc (size_t size, const char *file, int line) __attribute__((alloc_size(1)));
 char *
 xmlMemStrdupLoc (const char *str, const char *file, int line);
# 23 "/usr/include/libxml2/libxml/globals.h" 2





 void xmlInitGlobals(void);
 void xmlCleanupGlobals(void);
# 42 "/usr/include/libxml2/libxml/globals.h"
typedef xmlParserInputBufferPtr (*xmlParserInputBufferCreateFilenameFunc) (const char *URI, xmlCharEncoding enc);
# 55 "/usr/include/libxml2/libxml/globals.h"
typedef xmlOutputBufferPtr (*xmlOutputBufferCreateFilenameFunc) (const char *URI, xmlCharEncodingHandlerPtr encoder, int compression);

 xmlParserInputBufferCreateFilenameFunc
 xmlParserInputBufferCreateFilenameDefault (xmlParserInputBufferCreateFilenameFunc func);
 xmlOutputBufferCreateFilenameFunc
 xmlOutputBufferCreateFilenameDefault (xmlOutputBufferCreateFilenameFunc func);
# 107 "/usr/include/libxml2/libxml/globals.h"
typedef void (*xmlRegisterNodeFunc) (xmlNodePtr node);






typedef void (*xmlDeregisterNodeFunc) (xmlNodePtr node);

typedef struct _xmlGlobalState xmlGlobalState;
typedef xmlGlobalState *xmlGlobalStatePtr;
struct _xmlGlobalState
{
 const char *xmlParserVersion;

 xmlSAXLocator xmlDefaultSAXLocator;
 xmlSAXHandlerV1 xmlDefaultSAXHandler;
 xmlSAXHandlerV1 docbDefaultSAXHandler;
 xmlSAXHandlerV1 htmlDefaultSAXHandler;

 xmlFreeFunc xmlFree;
 xmlMallocFunc xmlMalloc;
 xmlStrdupFunc xmlMemStrdup;
 xmlReallocFunc xmlRealloc;

 xmlGenericErrorFunc xmlGenericError;
 xmlStructuredErrorFunc xmlStructuredError;
 void *xmlGenericErrorContext;

 int oldXMLWDcompatibility;

 xmlBufferAllocationScheme xmlBufferAllocScheme;
 int xmlDefaultBufferSize;

 int xmlSubstituteEntitiesDefaultValue;
 int xmlDoValidityCheckingDefaultValue;
 int xmlGetWarningsDefaultValue;
 int xmlKeepBlanksDefaultValue;
 int xmlLineNumbersDefaultValue;
 int xmlLoadExtDtdDefaultValue;
 int xmlParserDebugEntities;
 int xmlPedanticParserDefaultValue;

 int xmlSaveNoEmptyTags;
 int xmlIndentTreeOutput;
 const char *xmlTreeIndentString;

 xmlRegisterNodeFunc xmlRegisterNodeDefaultValue;
 xmlDeregisterNodeFunc xmlDeregisterNodeDefaultValue;

 xmlMallocFunc xmlMallocAtomic;
 xmlError xmlLastError;

 xmlParserInputBufferCreateFilenameFunc xmlParserInputBufferCreateFilenameValue;
 xmlOutputBufferCreateFilenameFunc xmlOutputBufferCreateFilenameValue;

 void *xmlStructuredErrorContext;
};




# 1 "/usr/include/libxml2/libxml/threads.h" 1
# 23 "/usr/include/libxml2/libxml/threads.h"
typedef struct _xmlMutex xmlMutex;
typedef xmlMutex *xmlMutexPtr;




typedef struct _xmlRMutex xmlRMutex;
typedef xmlRMutex *xmlRMutexPtr;




# 1 "/usr/include/libxml2/libxml/globals.h" 1
# 36 "/usr/include/libxml2/libxml/threads.h" 2



 xmlMutexPtr
   xmlNewMutex (void);
 void
   xmlMutexLock (xmlMutexPtr tok);
 void
   xmlMutexUnlock (xmlMutexPtr tok);
 void
   xmlFreeMutex (xmlMutexPtr tok);

 xmlRMutexPtr
   xmlNewRMutex (void);
 void
   xmlRMutexLock (xmlRMutexPtr tok);
 void
   xmlRMutexUnlock (xmlRMutexPtr tok);
 void
   xmlFreeRMutex (xmlRMutexPtr tok);




 void
   xmlInitThreads (void);
 void
   xmlLockLibrary (void);
 void
   xmlUnlockLibrary(void);
 int
   xmlGetThreadId (void);
 int
   xmlIsMainThread (void);
 void
   xmlCleanupThreads(void);
 xmlGlobalStatePtr
   xmlGetGlobalState(void);
# 170 "/usr/include/libxml2/libxml/globals.h" 2




 void xmlInitializeGlobalState(xmlGlobalStatePtr gs);

 void xmlThrDefSetGenericErrorFunc(void *ctx, xmlGenericErrorFunc handler);

 void xmlThrDefSetStructuredErrorFunc(void *ctx, xmlStructuredErrorFunc handler);

 xmlRegisterNodeFunc xmlRegisterNodeDefault(xmlRegisterNodeFunc func);
 xmlRegisterNodeFunc xmlThrDefRegisterNodeDefault(xmlRegisterNodeFunc func);
 xmlDeregisterNodeFunc xmlDeregisterNodeDefault(xmlDeregisterNodeFunc func);
 xmlDeregisterNodeFunc xmlThrDefDeregisterNodeDefault(xmlDeregisterNodeFunc func);

 xmlOutputBufferCreateFilenameFunc
 xmlThrDefOutputBufferCreateFilenameDefault(xmlOutputBufferCreateFilenameFunc func);
 xmlParserInputBufferCreateFilenameFunc
 xmlThrDefParserInputBufferCreateFilenameDefault(xmlParserInputBufferCreateFilenameFunc func);
# 243 "/usr/include/libxml2/libxml/globals.h"
extern xmlMallocFunc xmlMalloc;
extern xmlMallocFunc xmlMallocAtomic;
extern xmlReallocFunc xmlRealloc;
extern xmlFreeFunc xmlFree;
extern xmlStrdupFunc xmlMemStrdup;



 xmlSAXHandlerV1 * __docbDefaultSAXHandler(void);
# 261 "/usr/include/libxml2/libxml/globals.h"
 xmlSAXHandlerV1 * __htmlDefaultSAXHandler(void);
# 270 "/usr/include/libxml2/libxml/globals.h"
 xmlError * __xmlLastError(void);
# 285 "/usr/include/libxml2/libxml/globals.h"
 int * __oldXMLWDcompatibility(void);







 xmlBufferAllocationScheme * __xmlBufferAllocScheme(void);






 xmlBufferAllocationScheme xmlThrDefBufferAllocScheme(xmlBufferAllocationScheme v);

 int * __xmlDefaultBufferSize(void);






 int xmlThrDefDefaultBufferSize(int v);

 xmlSAXHandlerV1 * __xmlDefaultSAXHandler(void);







 xmlSAXLocator * __xmlDefaultSAXLocator(void);







 int * __xmlDoValidityCheckingDefaultValue(void);






 int xmlThrDefDoValidityCheckingDefaultValue(int v);

 xmlGenericErrorFunc * __xmlGenericError(void);







 xmlStructuredErrorFunc * __xmlStructuredError(void);







 void * * __xmlGenericErrorContext(void);







 void * * __xmlStructuredErrorContext(void);







 int * __xmlGetWarningsDefaultValue(void);






 int xmlThrDefGetWarningsDefaultValue(int v);

 int * __xmlIndentTreeOutput(void);






 int xmlThrDefIndentTreeOutput(int v);

 const char * * __xmlTreeIndentString(void);






 const char * xmlThrDefTreeIndentString(const char * v);

 int * __xmlKeepBlanksDefaultValue(void);






 int xmlThrDefKeepBlanksDefaultValue(int v);

 int * __xmlLineNumbersDefaultValue(void);






 int xmlThrDefLineNumbersDefaultValue(int v);

 int * __xmlLoadExtDtdDefaultValue(void);






 int xmlThrDefLoadExtDtdDefaultValue(int v);

 int * __xmlParserDebugEntities(void);






 int xmlThrDefParserDebugEntities(int v);

 const char * * __xmlParserVersion(void);







 int * __xmlPedanticParserDefaultValue(void);






 int xmlThrDefPedanticParserDefaultValue(int v);

 int * __xmlSaveNoEmptyTags(void);






 int xmlThrDefSaveNoEmptyTags(int v);

 int * __xmlSubstituteEntitiesDefaultValue(void);






 int xmlThrDefSubstituteEntitiesDefaultValue(int v);

 xmlRegisterNodeFunc * __xmlRegisterNodeDefaultValue(void);







 xmlDeregisterNodeFunc * __xmlDeregisterNodeDefaultValue(void);







 xmlParserInputBufferCreateFilenameFunc * __xmlParserInputBufferCreateFilenameValue(void);







 xmlOutputBufferCreateFilenameFunc * __xmlOutputBufferCreateFilenameValue(void);
# 118 "/usr/include/libxml2/libxml/xmlIO.h" 2







struct _xmlParserInputBuffer {
    void* context;
    xmlInputReadCallback readcallback;
    xmlInputCloseCallback closecallback;

    xmlCharEncodingHandlerPtr encoder;

    xmlBufferPtr buffer;
    xmlBufferPtr raw;
    int compressed;
    int error;
    unsigned long rawconsumed;
};



struct _xmlOutputBuffer {
    void* context;
    xmlOutputWriteCallback writecallback;
    xmlOutputCloseCallback closecallback;

    xmlCharEncodingHandlerPtr encoder;

    xmlBufferPtr buffer;
    xmlBufferPtr conv;
    int written;
    int error;
};





 void
 xmlCleanupInputCallbacks (void);

 int
 xmlPopInputCallbacks (void);

 void
 xmlRegisterDefaultInputCallbacks (void);
 xmlParserInputBufferPtr
 xmlAllocParserInputBuffer (xmlCharEncoding enc);

 xmlParserInputBufferPtr
 xmlParserInputBufferCreateFilename (const char *URI,
                                                 xmlCharEncoding enc);
 xmlParserInputBufferPtr
 xmlParserInputBufferCreateFile (FILE *file,
                                                 xmlCharEncoding enc);
 xmlParserInputBufferPtr
 xmlParserInputBufferCreateFd (int fd,
                                          xmlCharEncoding enc);
 xmlParserInputBufferPtr
 xmlParserInputBufferCreateMem (const char *mem, int size,
                                          xmlCharEncoding enc);
 xmlParserInputBufferPtr
 xmlParserInputBufferCreateStatic (const char *mem, int size,
                                          xmlCharEncoding enc);
 xmlParserInputBufferPtr
 xmlParserInputBufferCreateIO (xmlInputReadCallback ioread,
       xmlInputCloseCallback ioclose,
       void *ioctx,
                                          xmlCharEncoding enc);
 int
 xmlParserInputBufferRead (xmlParserInputBufferPtr in,
       int len);
 int
 xmlParserInputBufferGrow (xmlParserInputBufferPtr in,
       int len);
 int
 xmlParserInputBufferPush (xmlParserInputBufferPtr in,
       int len,
       const char *buf);
 void
 xmlFreeParserInputBuffer (xmlParserInputBufferPtr in);
 char *
 xmlParserGetDirectory (const char *filename);

 int
 xmlRegisterInputCallbacks (xmlInputMatchCallback matchFunc,
       xmlInputOpenCallback openFunc,
       xmlInputReadCallback readFunc,
       xmlInputCloseCallback closeFunc);

xmlParserInputBufferPtr
 __xmlParserInputBufferCreateFilename(const char *URI,
          xmlCharEncoding enc);





 void
 xmlCleanupOutputCallbacks (void);
 void
 xmlRegisterDefaultOutputCallbacks(void);
 xmlOutputBufferPtr
 xmlAllocOutputBuffer (xmlCharEncodingHandlerPtr encoder);

 xmlOutputBufferPtr
 xmlOutputBufferCreateFilename (const char *URI,
      xmlCharEncodingHandlerPtr encoder,
      int compression);

 xmlOutputBufferPtr
 xmlOutputBufferCreateFile (FILE *file,
      xmlCharEncodingHandlerPtr encoder);

 xmlOutputBufferPtr
 xmlOutputBufferCreateBuffer (xmlBufferPtr buffer,
      xmlCharEncodingHandlerPtr encoder);

 xmlOutputBufferPtr
 xmlOutputBufferCreateFd (int fd,
      xmlCharEncodingHandlerPtr encoder);

 xmlOutputBufferPtr
 xmlOutputBufferCreateIO (xmlOutputWriteCallback iowrite,
      xmlOutputCloseCallback ioclose,
      void *ioctx,
      xmlCharEncodingHandlerPtr encoder);

 int
 xmlOutputBufferWrite (xmlOutputBufferPtr out,
      int len,
      const char *buf);
 int
 xmlOutputBufferWriteString (xmlOutputBufferPtr out,
      const char *str);
 int
 xmlOutputBufferWriteEscape (xmlOutputBufferPtr out,
      const xmlChar *str,
      xmlCharEncodingOutputFunc escaping);

 int
 xmlOutputBufferFlush (xmlOutputBufferPtr out);
 int
 xmlOutputBufferClose (xmlOutputBufferPtr out);

 int
 xmlRegisterOutputCallbacks (xmlOutputMatchCallback matchFunc,
      xmlOutputOpenCallback openFunc,
      xmlOutputWriteCallback writeFunc,
      xmlOutputCloseCallback closeFunc);

xmlOutputBufferPtr
 __xmlOutputBufferCreateFilename(const char *URI,
                              xmlCharEncodingHandlerPtr encoder,
                              int compression);



 void
 xmlRegisterHTTPPostCallbacks (void );




 xmlParserInputPtr
 xmlCheckHTTPInput (xmlParserCtxtPtr ctxt,
      xmlParserInputPtr ret);




 xmlParserInputPtr
 xmlNoNetExternalEntityLoader (const char *URL,
      const char *ID,
      xmlParserCtxtPtr ctxt);





 xmlChar *
 xmlNormalizeWindowsPath (const xmlChar *path);

 int
 xmlCheckFilename (const char *path);



 int
 xmlFileMatch (const char *filename);
 void *
 xmlFileOpen (const char *filename);
 int
 xmlFileRead (void * context,
      char * buffer,
      int len);
 int
 xmlFileClose (void * context);





 int
 xmlIOHTTPMatch (const char *filename);
 void *
 xmlIOHTTPOpen (const char *filename);

 void *
 xmlIOHTTPOpenW (const char * post_uri,
      int compression );

 int
 xmlIOHTTPRead (void * context,
      char * buffer,
      int len);
 int
 xmlIOHTTPClose (void * context);






 int
 xmlIOFTPMatch (const char *filename);
 void *
 xmlIOFTPOpen (const char *filename);
 int
 xmlIOFTPRead (void * context,
      char * buffer,
      int len);
 int
 xmlIOFTPClose (void * context);
# 809 "/usr/include/libxml2/libxml/parser.h" 2
# 819 "/usr/include/libxml2/libxml/parser.h"
 void
  xmlInitParser (void);
 void
  xmlCleanupParser (void);




 int
  xmlParserInputRead (xmlParserInputPtr in,
      int len);
 int
  xmlParserInputGrow (xmlParserInputPtr in,
      int len);





 xmlDocPtr
  xmlParseDoc (const xmlChar *cur);
 xmlDocPtr
  xmlParseFile (const char *filename);
 xmlDocPtr
  xmlParseMemory (const char *buffer,
      int size);

 int
  xmlSubstituteEntitiesDefault(int val);
 int
  xmlKeepBlanksDefault (int val);
 void
  xmlStopParser (xmlParserCtxtPtr ctxt);
 int
  xmlPedanticParserDefault(int val);
 int
  xmlLineNumbersDefault (int val);





 xmlDocPtr
  xmlRecoverDoc (const xmlChar *cur);
 xmlDocPtr
  xmlRecoverMemory (const char *buffer,
      int size);
 xmlDocPtr
  xmlRecoverFile (const char *filename);





 int
  xmlParseDocument (xmlParserCtxtPtr ctxt);
 int
  xmlParseExtParsedEnt (xmlParserCtxtPtr ctxt);

 int
  xmlSAXUserParseFile (xmlSAXHandlerPtr sax,
      void *user_data,
      const char *filename);
 int
  xmlSAXUserParseMemory (xmlSAXHandlerPtr sax,
      void *user_data,
      const char *buffer,
      int size);
 xmlDocPtr
  xmlSAXParseDoc (xmlSAXHandlerPtr sax,
      const xmlChar *cur,
      int recovery);
 xmlDocPtr
  xmlSAXParseMemory (xmlSAXHandlerPtr sax,
      const char *buffer,
                                     int size,
      int recovery);
 xmlDocPtr
  xmlSAXParseMemoryWithData (xmlSAXHandlerPtr sax,
      const char *buffer,
                                     int size,
      int recovery,
      void *data);
 xmlDocPtr
  xmlSAXParseFile (xmlSAXHandlerPtr sax,
      const char *filename,
      int recovery);
 xmlDocPtr
  xmlSAXParseFileWithData (xmlSAXHandlerPtr sax,
      const char *filename,
      int recovery,
      void *data);
 xmlDocPtr
  xmlSAXParseEntity (xmlSAXHandlerPtr sax,
      const char *filename);
 xmlDocPtr
  xmlParseEntity (const char *filename);



 xmlDtdPtr
  xmlSAXParseDTD (xmlSAXHandlerPtr sax,
      const xmlChar *ExternalID,
      const xmlChar *SystemID);
 xmlDtdPtr
  xmlParseDTD (const xmlChar *ExternalID,
      const xmlChar *SystemID);
 xmlDtdPtr
  xmlIOParseDTD (xmlSAXHandlerPtr sax,
      xmlParserInputBufferPtr input,
      xmlCharEncoding enc);


 int
  xmlParseBalancedChunkMemory(xmlDocPtr doc,
      xmlSAXHandlerPtr sax,
      void *user_data,
      int depth,
      const xmlChar *string,
      xmlNodePtr *lst);

 xmlParserErrors
  xmlParseInNodeContext (xmlNodePtr node,
      const char *data,
      int datalen,
      int options,
      xmlNodePtr *lst);

 int
  xmlParseBalancedChunkMemoryRecover(xmlDocPtr doc,
                     xmlSAXHandlerPtr sax,
                     void *user_data,
                     int depth,
                     const xmlChar *string,
                     xmlNodePtr *lst,
                     int recover);
 int
  xmlParseExternalEntity (xmlDocPtr doc,
      xmlSAXHandlerPtr sax,
      void *user_data,
      int depth,
      const xmlChar *URL,
      const xmlChar *ID,
      xmlNodePtr *lst);

 int
  xmlParseCtxtExternalEntity(xmlParserCtxtPtr ctx,
      const xmlChar *URL,
      const xmlChar *ID,
      xmlNodePtr *lst);




 xmlParserCtxtPtr
  xmlNewParserCtxt (void);
 int
  xmlInitParserCtxt (xmlParserCtxtPtr ctxt);
 void
  xmlClearParserCtxt (xmlParserCtxtPtr ctxt);
 void
  xmlFreeParserCtxt (xmlParserCtxtPtr ctxt);

 void
  xmlSetupParserForBuffer (xmlParserCtxtPtr ctxt,
      const xmlChar* buffer,
      const char *filename);

 xmlParserCtxtPtr
  xmlCreateDocParserCtxt (const xmlChar *cur);





 int
  xmlGetFeaturesList (int *len,
      const char **result);
 int
  xmlGetFeature (xmlParserCtxtPtr ctxt,
      const char *name,
      void *result);
 int
  xmlSetFeature (xmlParserCtxtPtr ctxt,
      const char *name,
      void *value);






 xmlParserCtxtPtr
  xmlCreatePushParserCtxt(xmlSAXHandlerPtr sax,
      void *user_data,
      const char *chunk,
      int size,
      const char *filename);
 int
  xmlParseChunk (xmlParserCtxtPtr ctxt,
      const char *chunk,
      int size,
      int terminate);






 xmlParserCtxtPtr
  xmlCreateIOParserCtxt (xmlSAXHandlerPtr sax,
      void *user_data,
      xmlInputReadCallback ioread,
      xmlInputCloseCallback ioclose,
      void *ioctx,
      xmlCharEncoding enc);

 xmlParserInputPtr
  xmlNewIOInputStream (xmlParserCtxtPtr ctxt,
      xmlParserInputBufferPtr input,
      xmlCharEncoding enc);




 const xmlParserNodeInfo*
  xmlParserFindNodeInfo (const xmlParserCtxtPtr ctxt,
             const xmlNodePtr node);
 void
  xmlInitNodeInfoSeq (xmlParserNodeInfoSeqPtr seq);
 void
  xmlClearNodeInfoSeq (xmlParserNodeInfoSeqPtr seq);
 unsigned long
  xmlParserFindNodeInfoIndex(const xmlParserNodeInfoSeqPtr seq,
                                         const xmlNodePtr node);
 void
  xmlParserAddNodeInfo (xmlParserCtxtPtr ctxt,
      const xmlParserNodeInfoPtr info);





 void
  xmlSetExternalEntityLoader(xmlExternalEntityLoader f);
 xmlExternalEntityLoader
  xmlGetExternalEntityLoader(void);
 xmlParserInputPtr
  xmlLoadExternalEntity (const char *URL,
      const char *ID,
      xmlParserCtxtPtr ctxt);




 long
  xmlByteConsumed (xmlParserCtxtPtr ctxt);
# 1086 "/usr/include/libxml2/libxml/parser.h"
typedef enum {
    XML_PARSE_RECOVER = 1<<0,
    XML_PARSE_NOENT = 1<<1,
    XML_PARSE_DTDLOAD = 1<<2,
    XML_PARSE_DTDATTR = 1<<3,
    XML_PARSE_DTDVALID = 1<<4,
    XML_PARSE_NOERROR = 1<<5,
    XML_PARSE_NOWARNING = 1<<6,
    XML_PARSE_PEDANTIC = 1<<7,
    XML_PARSE_NOBLANKS = 1<<8,
    XML_PARSE_SAX1 = 1<<9,
    XML_PARSE_XINCLUDE = 1<<10,
    XML_PARSE_NONET = 1<<11,
    XML_PARSE_NODICT = 1<<12,
    XML_PARSE_NSCLEAN = 1<<13,
    XML_PARSE_NOCDATA = 1<<14,
    XML_PARSE_NOXINCNODE= 1<<15,
    XML_PARSE_COMPACT = 1<<16,


    XML_PARSE_OLD10 = 1<<17,
    XML_PARSE_NOBASEFIX = 1<<18,
    XML_PARSE_HUGE = 1<<19,
    XML_PARSE_OLDSAX = 1<<20
} xmlParserOption;

 void
  xmlCtxtReset (xmlParserCtxtPtr ctxt);
 int
  xmlCtxtResetPush (xmlParserCtxtPtr ctxt,
      const char *chunk,
      int size,
      const char *filename,
      const char *encoding);
 int
  xmlCtxtUseOptions (xmlParserCtxtPtr ctxt,
      int options);
 xmlDocPtr
  xmlReadDoc (const xmlChar *cur,
      const char *URL,
      const char *encoding,
      int options);
 xmlDocPtr
  xmlReadFile (const char *URL,
      const char *encoding,
      int options);
 xmlDocPtr
  xmlReadMemory (const char *buffer,
      int size,
      const char *URL,
      const char *encoding,
      int options);
 xmlDocPtr
  xmlReadFd (int fd,
      const char *URL,
      const char *encoding,
      int options);
 xmlDocPtr
  xmlReadIO (xmlInputReadCallback ioread,
      xmlInputCloseCallback ioclose,
      void *ioctx,
      const char *URL,
      const char *encoding,
      int options);
 xmlDocPtr
  xmlCtxtReadDoc (xmlParserCtxtPtr ctxt,
      const xmlChar *cur,
      const char *URL,
      const char *encoding,
      int options);
 xmlDocPtr
  xmlCtxtReadFile (xmlParserCtxtPtr ctxt,
      const char *filename,
      const char *encoding,
      int options);
 xmlDocPtr
  xmlCtxtReadMemory (xmlParserCtxtPtr ctxt,
      const char *buffer,
      int size,
      const char *URL,
      const char *encoding,
      int options);
 xmlDocPtr
  xmlCtxtReadFd (xmlParserCtxtPtr ctxt,
      int fd,
      const char *URL,
      const char *encoding,
      int options);
 xmlDocPtr
  xmlCtxtReadIO (xmlParserCtxtPtr ctxt,
      xmlInputReadCallback ioread,
      xmlInputCloseCallback ioclose,
      void *ioctx,
      const char *URL,
      const char *encoding,
      int options);
# 1193 "/usr/include/libxml2/libxml/parser.h"
typedef enum {
    XML_WITH_THREAD = 1,
    XML_WITH_TREE = 2,
    XML_WITH_OUTPUT = 3,
    XML_WITH_PUSH = 4,
    XML_WITH_READER = 5,
    XML_WITH_PATTERN = 6,
    XML_WITH_WRITER = 7,
    XML_WITH_SAX1 = 8,
    XML_WITH_FTP = 9,
    XML_WITH_HTTP = 10,
    XML_WITH_VALID = 11,
    XML_WITH_HTML = 12,
    XML_WITH_LEGACY = 13,
    XML_WITH_C14N = 14,
    XML_WITH_CATALOG = 15,
    XML_WITH_XPATH = 16,
    XML_WITH_XPTR = 17,
    XML_WITH_XINCLUDE = 18,
    XML_WITH_ICONV = 19,
    XML_WITH_ISO8859X = 20,
    XML_WITH_UNICODE = 21,
    XML_WITH_REGEXP = 22,
    XML_WITH_AUTOMATA = 23,
    XML_WITH_EXPR = 24,
    XML_WITH_SCHEMAS = 25,
    XML_WITH_SCHEMATRON = 26,
    XML_WITH_MODULES = 27,
    XML_WITH_DEBUG = 28,
    XML_WITH_DEBUG_MEM = 29,
    XML_WITH_DEBUG_RUN = 30,
    XML_WITH_ZLIB = 31,
    XML_WITH_NONE = 99999
} xmlFeature;

 int
  xmlHasFeature (xmlFeature feature);
# 40 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2
# 1 "/usr/include/libxml2/libxml/parserInternals.h" 1
# 17 "/usr/include/libxml2/libxml/parserInternals.h"
# 1 "/usr/include/libxml2/libxml/HTMLparser.h" 1
# 27 "/usr/include/libxml2/libxml/HTMLparser.h"
typedef xmlParserCtxt htmlParserCtxt;
typedef xmlParserCtxtPtr htmlParserCtxtPtr;
typedef xmlParserNodeInfo htmlParserNodeInfo;
typedef xmlSAXHandler htmlSAXHandler;
typedef xmlSAXHandlerPtr htmlSAXHandlerPtr;
typedef xmlParserInput htmlParserInput;
typedef xmlParserInputPtr htmlParserInputPtr;
typedef xmlDocPtr htmlDocPtr;
typedef xmlNodePtr htmlNodePtr;





typedef struct _htmlElemDesc htmlElemDesc;
typedef htmlElemDesc *htmlElemDescPtr;
struct _htmlElemDesc {
    const char *name;
    char startTag;
    char endTag;
    char saveEndTag;
    char empty;
    char depr;
    char dtd;
    char isinline;
    const char *desc;
# 64 "/usr/include/libxml2/libxml/HTMLparser.h"
    const char** subelts;
    const char* defaultsubelt;

    const char** attrs_opt;
    const char** attrs_depr;
    const char** attrs_req;
};




typedef struct _htmlEntityDesc htmlEntityDesc;
typedef htmlEntityDesc *htmlEntityDescPtr;
struct _htmlEntityDesc {
    unsigned int value;
    const char *name;
    const char *desc;
};




 const htmlElemDesc *
   htmlTagLookup (const xmlChar *tag);
 const htmlEntityDesc *
   htmlEntityLookup(const xmlChar *name);
 const htmlEntityDesc *
   htmlEntityValueLookup(unsigned int value);

 int
   htmlIsAutoClosed(htmlDocPtr doc,
      htmlNodePtr elem);
 int
   htmlAutoCloseTag(htmlDocPtr doc,
      const xmlChar *name,
      htmlNodePtr elem);
 const htmlEntityDesc *
   htmlParseEntityRef(htmlParserCtxtPtr ctxt,
      const xmlChar **str);
 int
   htmlParseCharRef(htmlParserCtxtPtr ctxt);
 void
   htmlParseElement(htmlParserCtxtPtr ctxt);

 htmlParserCtxtPtr
   htmlNewParserCtxt(void);

 htmlParserCtxtPtr
   htmlCreateMemoryParserCtxt(const char *buffer,
         int size);

 int
   htmlParseDocument(htmlParserCtxtPtr ctxt);
 htmlDocPtr
   htmlSAXParseDoc (xmlChar *cur,
      const char *encoding,
      htmlSAXHandlerPtr sax,
      void *userData);
 htmlDocPtr
   htmlParseDoc (xmlChar *cur,
      const char *encoding);
 htmlDocPtr
   htmlSAXParseFile(const char *filename,
      const char *encoding,
      htmlSAXHandlerPtr sax,
      void *userData);
 htmlDocPtr
   htmlParseFile (const char *filename,
      const char *encoding);
 int
   UTF8ToHtml (unsigned char *out,
      int *outlen,
      const unsigned char *in,
      int *inlen);
 int
   htmlEncodeEntities(unsigned char *out,
      int *outlen,
      const unsigned char *in,
      int *inlen, int quoteChar);
 int
   htmlIsScriptAttribute(const xmlChar *name);
 int
   htmlHandleOmittedElem(int val);





 htmlParserCtxtPtr
   htmlCreatePushParserCtxt(htmlSAXHandlerPtr sax,
       void *user_data,
       const char *chunk,
       int size,
       const char *filename,
       xmlCharEncoding enc);
 int
   htmlParseChunk (htmlParserCtxtPtr ctxt,
       const char *chunk,
       int size,
       int terminate);


 void
   htmlFreeParserCtxt (htmlParserCtxtPtr ctxt);
# 178 "/usr/include/libxml2/libxml/HTMLparser.h"
typedef enum {
    HTML_PARSE_RECOVER = 1<<0,
    HTML_PARSE_NOERROR = 1<<5,
    HTML_PARSE_NOWARNING= 1<<6,
    HTML_PARSE_PEDANTIC = 1<<7,
    HTML_PARSE_NOBLANKS = 1<<8,
    HTML_PARSE_NONET = 1<<11,
    HTML_PARSE_NOIMPLIED= 1<<13,
    HTML_PARSE_COMPACT = 1<<16
} htmlParserOption;

 void
  htmlCtxtReset (htmlParserCtxtPtr ctxt);
 int
  htmlCtxtUseOptions (htmlParserCtxtPtr ctxt,
      int options);
 htmlDocPtr
  htmlReadDoc (const xmlChar *cur,
      const char *URL,
      const char *encoding,
      int options);
 htmlDocPtr
  htmlReadFile (const char *URL,
      const char *encoding,
      int options);
 htmlDocPtr
  htmlReadMemory (const char *buffer,
      int size,
      const char *URL,
      const char *encoding,
      int options);
 htmlDocPtr
  htmlReadFd (int fd,
      const char *URL,
      const char *encoding,
      int options);
 htmlDocPtr
  htmlReadIO (xmlInputReadCallback ioread,
      xmlInputCloseCallback ioclose,
      void *ioctx,
      const char *URL,
      const char *encoding,
      int options);
 htmlDocPtr
  htmlCtxtReadDoc (xmlParserCtxtPtr ctxt,
      const xmlChar *cur,
      const char *URL,
      const char *encoding,
      int options);
 htmlDocPtr
  htmlCtxtReadFile (xmlParserCtxtPtr ctxt,
      const char *filename,
      const char *encoding,
      int options);
 htmlDocPtr
  htmlCtxtReadMemory (xmlParserCtxtPtr ctxt,
      const char *buffer,
      int size,
      const char *URL,
      const char *encoding,
      int options);
 htmlDocPtr
  htmlCtxtReadFd (xmlParserCtxtPtr ctxt,
      int fd,
      const char *URL,
      const char *encoding,
      int options);
 htmlDocPtr
  htmlCtxtReadIO (xmlParserCtxtPtr ctxt,
      xmlInputReadCallback ioread,
      xmlInputCloseCallback ioclose,
      void *ioctx,
      const char *URL,
      const char *encoding,
      int options);



typedef enum {
  HTML_NA = 0 ,
  HTML_INVALID = 0x1 ,
  HTML_DEPRECATED = 0x2 ,
  HTML_VALID = 0x4 ,
  HTML_REQUIRED = 0xc
} htmlStatus ;




 htmlStatus htmlAttrAllowed(const htmlElemDesc*, const xmlChar*, int) ;
 int htmlElementAllowedHere(const htmlElemDesc*, const xmlChar*) ;
 htmlStatus htmlElementStatusHere(const htmlElemDesc*, const htmlElemDesc*) ;
 htmlStatus htmlNodeStatus(const htmlNodePtr, int) ;
# 18 "/usr/include/libxml2/libxml/parserInternals.h" 2
# 1 "/usr/include/libxml2/libxml/chvalid.h" 1
# 28 "/usr/include/libxml2/libxml/chvalid.h"
typedef struct _xmlChSRange xmlChSRange;
typedef xmlChSRange *xmlChSRangePtr;
struct _xmlChSRange {
    unsigned short low;
    unsigned short high;
};

typedef struct _xmlChLRange xmlChLRange;
typedef xmlChLRange *xmlChLRangePtr;
struct _xmlChLRange {
    unsigned int low;
    unsigned int high;
};

typedef struct _xmlChRangeGroup xmlChRangeGroup;
typedef xmlChRangeGroup *xmlChRangeGroupPtr;
struct _xmlChRangeGroup {
    int nbShortRange;
    int nbLongRange;
    const xmlChSRange *shortRange;
    const xmlChLRange *longRange;
};




 int
  xmlCharInRange(unsigned int val, const xmlChRangeGroup *group);
# 80 "/usr/include/libxml2/libxml/chvalid.h"
extern const xmlChRangeGroup xmlIsBaseCharGroup;
# 124 "/usr/include/libxml2/libxml/chvalid.h"
extern const xmlChRangeGroup xmlIsCharGroup;
# 136 "/usr/include/libxml2/libxml/chvalid.h"
extern const xmlChRangeGroup xmlIsCombiningGroup;
# 156 "/usr/include/libxml2/libxml/chvalid.h"
extern const xmlChRangeGroup xmlIsDigitGroup;
# 176 "/usr/include/libxml2/libxml/chvalid.h"
extern const xmlChRangeGroup xmlIsExtenderGroup;
# 190 "/usr/include/libxml2/libxml/chvalid.h"
extern const xmlChRangeGroup xmlIsIdeographicGroup;
extern const unsigned char xmlIsPubidChar_tab[256];
# 210 "/usr/include/libxml2/libxml/chvalid.h"
 int
  xmlIsBaseChar(unsigned int ch);
 int
  xmlIsBlank(unsigned int ch);
 int
  xmlIsChar(unsigned int ch);
 int
  xmlIsCombining(unsigned int ch);
 int
  xmlIsDigit(unsigned int ch);
 int
  xmlIsExtender(unsigned int ch);
 int
  xmlIsIdeographic(unsigned int ch);
 int
  xmlIsPubidChar(unsigned int ch);
# 19 "/usr/include/libxml2/libxml/parserInternals.h" 2
# 31 "/usr/include/libxml2/libxml/parserInternals.h"
extern unsigned int xmlParserMaxDepth;
# 279 "/usr/include/libxml2/libxml/parserInternals.h"
extern const xmlChar xmlStringText[];
extern const xmlChar xmlStringTextNoenc[];
extern const xmlChar xmlStringComment[];




 int xmlIsLetter (int c);




 xmlParserCtxtPtr
   xmlCreateFileParserCtxt (const char *filename);
 xmlParserCtxtPtr
   xmlCreateURLParserCtxt (const char *filename,
       int options);
 xmlParserCtxtPtr
   xmlCreateMemoryParserCtxt(const char *buffer,
       int size);
 xmlParserCtxtPtr
   xmlCreateEntityParserCtxt(const xmlChar *URL,
       const xmlChar *ID,
       const xmlChar *base);
 int
   xmlSwitchEncoding (xmlParserCtxtPtr ctxt,
       xmlCharEncoding enc);
 int
   xmlSwitchToEncoding (xmlParserCtxtPtr ctxt,
      xmlCharEncodingHandlerPtr handler);
 int
   xmlSwitchInputEncoding (xmlParserCtxtPtr ctxt,
       xmlParserInputPtr input,
      xmlCharEncodingHandlerPtr handler);
# 327 "/usr/include/libxml2/libxml/parserInternals.h"
 xmlParserInputPtr
   xmlNewStringInputStream (xmlParserCtxtPtr ctxt,
       const xmlChar *buffer);
 xmlParserInputPtr
   xmlNewEntityInputStream (xmlParserCtxtPtr ctxt,
       xmlEntityPtr entity);
 int
   xmlPushInput (xmlParserCtxtPtr ctxt,
       xmlParserInputPtr input);
 xmlChar
   xmlPopInput (xmlParserCtxtPtr ctxt);
 void
   xmlFreeInputStream (xmlParserInputPtr input);
 xmlParserInputPtr
   xmlNewInputFromFile (xmlParserCtxtPtr ctxt,
       const char *filename);
 xmlParserInputPtr
   xmlNewInputStream (xmlParserCtxtPtr ctxt);




 xmlChar *
   xmlSplitQName (xmlParserCtxtPtr ctxt,
       const xmlChar *name,
       xmlChar **prefix);




 const xmlChar *
   xmlParseName (xmlParserCtxtPtr ctxt);
 xmlChar *
   xmlParseNmtoken (xmlParserCtxtPtr ctxt);
 xmlChar *
   xmlParseEntityValue (xmlParserCtxtPtr ctxt,
       xmlChar **orig);
 xmlChar *
   xmlParseAttValue (xmlParserCtxtPtr ctxt);
 xmlChar *
   xmlParseSystemLiteral (xmlParserCtxtPtr ctxt);
 xmlChar *
   xmlParsePubidLiteral (xmlParserCtxtPtr ctxt);
 void
   xmlParseCharData (xmlParserCtxtPtr ctxt,
       int cdata);
 xmlChar *
   xmlParseExternalID (xmlParserCtxtPtr ctxt,
       xmlChar **publicID,
       int strict);
 void
   xmlParseComment (xmlParserCtxtPtr ctxt);
 const xmlChar *
   xmlParsePITarget (xmlParserCtxtPtr ctxt);
 void
   xmlParsePI (xmlParserCtxtPtr ctxt);
 void
   xmlParseNotationDecl (xmlParserCtxtPtr ctxt);
 void
   xmlParseEntityDecl (xmlParserCtxtPtr ctxt);
 int
   xmlParseDefaultDecl (xmlParserCtxtPtr ctxt,
       xmlChar **value);
 xmlEnumerationPtr
   xmlParseNotationType (xmlParserCtxtPtr ctxt);
 xmlEnumerationPtr
   xmlParseEnumerationType (xmlParserCtxtPtr ctxt);
 int
   xmlParseEnumeratedType (xmlParserCtxtPtr ctxt,
       xmlEnumerationPtr *tree);
 int
   xmlParseAttributeType (xmlParserCtxtPtr ctxt,
       xmlEnumerationPtr *tree);
 void
   xmlParseAttributeListDecl(xmlParserCtxtPtr ctxt);
 xmlElementContentPtr
   xmlParseElementMixedContentDecl
      (xmlParserCtxtPtr ctxt,
       int inputchk);
 xmlElementContentPtr
   xmlParseElementChildrenContentDecl
      (xmlParserCtxtPtr ctxt,
       int inputchk);
 int
   xmlParseElementContentDecl(xmlParserCtxtPtr ctxt,
       const xmlChar *name,
       xmlElementContentPtr *result);
 int
   xmlParseElementDecl (xmlParserCtxtPtr ctxt);
 void
   xmlParseMarkupDecl (xmlParserCtxtPtr ctxt);
 int
   xmlParseCharRef (xmlParserCtxtPtr ctxt);
 xmlEntityPtr
   xmlParseEntityRef (xmlParserCtxtPtr ctxt);
 void
   xmlParseReference (xmlParserCtxtPtr ctxt);
 void
   xmlParsePEReference (xmlParserCtxtPtr ctxt);
 void
   xmlParseDocTypeDecl (xmlParserCtxtPtr ctxt);

 const xmlChar *
   xmlParseAttribute (xmlParserCtxtPtr ctxt,
       xmlChar **value);
 const xmlChar *
   xmlParseStartTag (xmlParserCtxtPtr ctxt);
 void
   xmlParseEndTag (xmlParserCtxtPtr ctxt);

 void
   xmlParseCDSect (xmlParserCtxtPtr ctxt);
 void
   xmlParseContent (xmlParserCtxtPtr ctxt);
 void
   xmlParseElement (xmlParserCtxtPtr ctxt);
 xmlChar *
   xmlParseVersionNum (xmlParserCtxtPtr ctxt);
 xmlChar *
   xmlParseVersionInfo (xmlParserCtxtPtr ctxt);
 xmlChar *
   xmlParseEncName (xmlParserCtxtPtr ctxt);
 const xmlChar *
   xmlParseEncodingDecl (xmlParserCtxtPtr ctxt);
 int
   xmlParseSDDecl (xmlParserCtxtPtr ctxt);
 void
   xmlParseXMLDecl (xmlParserCtxtPtr ctxt);
 void
   xmlParseTextDecl (xmlParserCtxtPtr ctxt);
 void
   xmlParseMisc (xmlParserCtxtPtr ctxt);
 void
   xmlParseExternalSubset (xmlParserCtxtPtr ctxt,
       const xmlChar *ExternalID,
       const xmlChar *SystemID);
# 488 "/usr/include/libxml2/libxml/parserInternals.h"
 xmlChar *
  xmlStringDecodeEntities (xmlParserCtxtPtr ctxt,
       const xmlChar *str,
       int what,
       xmlChar end,
       xmlChar end2,
       xmlChar end3);
 xmlChar *
  xmlStringLenDecodeEntities (xmlParserCtxtPtr ctxt,
       const xmlChar *str,
       int len,
       int what,
       xmlChar end,
       xmlChar end2,
       xmlChar end3);




 int nodePush (xmlParserCtxtPtr ctxt,
       xmlNodePtr value);
 xmlNodePtr nodePop (xmlParserCtxtPtr ctxt);
 int inputPush (xmlParserCtxtPtr ctxt,
       xmlParserInputPtr value);
 xmlParserInputPtr inputPop (xmlParserCtxtPtr ctxt);
 const xmlChar * namePop (xmlParserCtxtPtr ctxt);
 int namePush (xmlParserCtxtPtr ctxt,
       const xmlChar *value);




 int xmlSkipBlankChars (xmlParserCtxtPtr ctxt);
 int xmlStringCurrentChar (xmlParserCtxtPtr ctxt,
       const xmlChar *cur,
       int *len);
 void xmlParserHandlePEReference(xmlParserCtxtPtr ctxt);
 int xmlCheckLanguageID (const xmlChar *lang);




 int xmlCurrentChar (xmlParserCtxtPtr ctxt,
       int *len);
 int xmlCopyCharMultiByte (xmlChar *out,
       int val);
 int xmlCopyChar (int len,
       xmlChar *out,
       int val);
 void xmlNextChar (xmlParserCtxtPtr ctxt);
 void xmlParserInputShrink (xmlParserInputPtr in);





 void htmlInitAutoClose (void);
 htmlParserCtxtPtr htmlCreateFileParserCtxt(const char *filename,
                                          const char *encoding);
# 563 "/usr/include/libxml2/libxml/parserInternals.h"
typedef void (*xmlEntityReferenceFunc) (xmlEntityPtr ent,
       xmlNodePtr firstNode,
       xmlNodePtr lastNode);

 void xmlSetEntityReferenceFunc (xmlEntityReferenceFunc func);

 xmlChar *
   xmlParseQuotedString (xmlParserCtxtPtr ctxt);
 void
                        xmlParseNamespace (xmlParserCtxtPtr ctxt);
 xmlChar *
   xmlNamespaceParseNSDef (xmlParserCtxtPtr ctxt);
 xmlChar *
   xmlScanName (xmlParserCtxtPtr ctxt);
 xmlChar *
   xmlNamespaceParseNCName (xmlParserCtxtPtr ctxt);
 void xmlParserHandleReference(xmlParserCtxtPtr ctxt);
 xmlChar *
   xmlNamespaceParseQName (xmlParserCtxtPtr ctxt,
       xmlChar **prefix);



 xmlChar *
  xmlDecodeEntities (xmlParserCtxtPtr ctxt,
       int len,
       int what,
       xmlChar end,
       xmlChar end2,
       xmlChar end3);
 void
   xmlHandleEntity (xmlParserCtxtPtr ctxt,
       xmlEntityPtr entity);
# 41 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2

# 1 "/usr/include/libxml2/libxml/uri.h" 1
# 31 "/usr/include/libxml2/libxml/uri.h"
typedef struct _xmlURI xmlURI;
typedef xmlURI *xmlURIPtr;
struct _xmlURI {
    char *scheme;
    char *opaque;
    char *authority;
    char *server;
    char *user;
    int port;
    char *path;
    char *query;
    char *fragment;
    int cleanup;
    char *query_raw;
};






 xmlURIPtr
  xmlCreateURI (void);
 xmlChar *
  xmlBuildURI (const xmlChar *URI,
      const xmlChar *base);
 xmlChar *
  xmlBuildRelativeURI (const xmlChar *URI,
      const xmlChar *base);
 xmlURIPtr
  xmlParseURI (const char *str);
 xmlURIPtr
  xmlParseURIRaw (const char *str,
      int raw);
 int
  xmlParseURIReference (xmlURIPtr uri,
      const char *str);
 xmlChar *
  xmlSaveUri (xmlURIPtr uri);
 void
  xmlPrintURI (FILE *stream,
      xmlURIPtr uri);
 xmlChar *
  xmlURIEscapeStr (const xmlChar *str,
      const xmlChar *list);
 char *
  xmlURIUnescapeString (const char *str,
      int len,
      char *target);
 int
  xmlNormalizeURIPath (char *path);
 xmlChar *
  xmlURIEscape (const xmlChar *str);
 void
  xmlFreeURI (xmlURIPtr uri);
 xmlChar*
  xmlCanonicPath (const xmlChar *path);
 xmlChar*
  xmlPathToURI (const xmlChar *path);
# 43 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2
# 1 "/usr/include/libxml2/libxml/xmlerror.h" 1
# 44 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2
# 1 "/usr/include/libxml2/libxml/xmlsave.h" 1
# 29 "/usr/include/libxml2/libxml/xmlsave.h"
typedef enum {
    XML_SAVE_FORMAT = 1<<0,
    XML_SAVE_NO_DECL = 1<<1,
    XML_SAVE_NO_EMPTY = 1<<2,
    XML_SAVE_NO_XHTML = 1<<3,
    XML_SAVE_XHTML = 1<<4,
    XML_SAVE_AS_XML = 1<<5,
    XML_SAVE_AS_HTML = 1<<6
} xmlSaveOption;


typedef struct _xmlSaveCtxt xmlSaveCtxt;
typedef xmlSaveCtxt *xmlSaveCtxtPtr;

 xmlSaveCtxtPtr
  xmlSaveToFd (int fd,
      const char *encoding,
      int options);
 xmlSaveCtxtPtr
  xmlSaveToFilename (const char *filename,
      const char *encoding,
      int options);

 xmlSaveCtxtPtr
  xmlSaveToBuffer (xmlBufferPtr buffer,
      const char *encoding,
      int options);

 xmlSaveCtxtPtr
  xmlSaveToIO (xmlOutputWriteCallback iowrite,
      xmlOutputCloseCallback ioclose,
      void *ioctx,
      const char *encoding,
      int options);

 long
  xmlSaveDoc (xmlSaveCtxtPtr ctxt,
      xmlDocPtr doc);
 long
  xmlSaveTree (xmlSaveCtxtPtr ctxt,
      xmlNodePtr node);

 int
  xmlSaveFlush (xmlSaveCtxtPtr ctxt);
 int
  xmlSaveClose (xmlSaveCtxtPtr ctxt);
 int
  xmlSaveSetEscape (xmlSaveCtxtPtr ctxt,
      xmlCharEncodingOutputFunc escape);
 int
  xmlSaveSetAttrEscape (xmlSaveCtxtPtr ctxt,
      xmlCharEncodingOutputFunc escape);
# 45 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2

# 1 "/usr/include/libxml2/libxml/relaxng.h" 1
# 23 "/usr/include/libxml2/libxml/relaxng.h"
typedef struct _xmlRelaxNG xmlRelaxNG;
typedef xmlRelaxNG *xmlRelaxNGPtr;
# 35 "/usr/include/libxml2/libxml/relaxng.h"
typedef void ( *xmlRelaxNGValidityErrorFunc) (void *ctx, const char *msg, ...) __attribute__((__format__(__printf__,2,3)));
# 45 "/usr/include/libxml2/libxml/relaxng.h"
typedef void ( *xmlRelaxNGValidityWarningFunc) (void *ctx, const char *msg, ...) __attribute__((__format__(__printf__,2,3)));




typedef struct _xmlRelaxNGParserCtxt xmlRelaxNGParserCtxt;
typedef xmlRelaxNGParserCtxt *xmlRelaxNGParserCtxtPtr;

typedef struct _xmlRelaxNGValidCtxt xmlRelaxNGValidCtxt;
typedef xmlRelaxNGValidCtxt *xmlRelaxNGValidCtxtPtr;






typedef enum {
    XML_RELAXNG_OK = 0,
    XML_RELAXNG_ERR_MEMORY,
    XML_RELAXNG_ERR_TYPE,
    XML_RELAXNG_ERR_TYPEVAL,
    XML_RELAXNG_ERR_DUPID,
    XML_RELAXNG_ERR_TYPECMP,
    XML_RELAXNG_ERR_NOSTATE,
    XML_RELAXNG_ERR_NODEFINE,
    XML_RELAXNG_ERR_LISTEXTRA,
    XML_RELAXNG_ERR_LISTEMPTY,
    XML_RELAXNG_ERR_INTERNODATA,
    XML_RELAXNG_ERR_INTERSEQ,
    XML_RELAXNG_ERR_INTEREXTRA,
    XML_RELAXNG_ERR_ELEMNAME,
    XML_RELAXNG_ERR_ATTRNAME,
    XML_RELAXNG_ERR_ELEMNONS,
    XML_RELAXNG_ERR_ATTRNONS,
    XML_RELAXNG_ERR_ELEMWRONGNS,
    XML_RELAXNG_ERR_ATTRWRONGNS,
    XML_RELAXNG_ERR_ELEMEXTRANS,
    XML_RELAXNG_ERR_ATTREXTRANS,
    XML_RELAXNG_ERR_ELEMNOTEMPTY,
    XML_RELAXNG_ERR_NOELEM,
    XML_RELAXNG_ERR_NOTELEM,
    XML_RELAXNG_ERR_ATTRVALID,
    XML_RELAXNG_ERR_CONTENTVALID,
    XML_RELAXNG_ERR_EXTRACONTENT,
    XML_RELAXNG_ERR_INVALIDATTR,
    XML_RELAXNG_ERR_DATAELEM,
    XML_RELAXNG_ERR_VALELEM,
    XML_RELAXNG_ERR_LISTELEM,
    XML_RELAXNG_ERR_DATATYPE,
    XML_RELAXNG_ERR_VALUE,
    XML_RELAXNG_ERR_LIST,
    XML_RELAXNG_ERR_NOGRAMMAR,
    XML_RELAXNG_ERR_EXTRADATA,
    XML_RELAXNG_ERR_LACKDATA,
    XML_RELAXNG_ERR_INTERNAL,
    XML_RELAXNG_ERR_ELEMWRONG,
    XML_RELAXNG_ERR_TEXTWRONG
} xmlRelaxNGValidErr;






typedef enum {
    XML_RELAXNGP_NONE = 0,
    XML_RELAXNGP_FREE_DOC = 1,
    XML_RELAXNGP_CRNG = 2
} xmlRelaxNGParserFlag;

 int
      xmlRelaxNGInitTypes (void);
 void
      xmlRelaxNGCleanupTypes (void);




 xmlRelaxNGParserCtxtPtr
      xmlRelaxNGNewParserCtxt (const char *URL);
 xmlRelaxNGParserCtxtPtr
      xmlRelaxNGNewMemParserCtxt (const char *buffer,
       int size);
 xmlRelaxNGParserCtxtPtr
      xmlRelaxNGNewDocParserCtxt (xmlDocPtr doc);

 int
      xmlRelaxParserSetFlag (xmlRelaxNGParserCtxtPtr ctxt,
       int flag);

 void
      xmlRelaxNGFreeParserCtxt (xmlRelaxNGParserCtxtPtr ctxt);
 void
      xmlRelaxNGSetParserErrors(xmlRelaxNGParserCtxtPtr ctxt,
      xmlRelaxNGValidityErrorFunc err,
      xmlRelaxNGValidityWarningFunc warn,
      void *ctx);
 int
      xmlRelaxNGGetParserErrors(xmlRelaxNGParserCtxtPtr ctxt,
      xmlRelaxNGValidityErrorFunc *err,
      xmlRelaxNGValidityWarningFunc *warn,
      void **ctx);
 void
      xmlRelaxNGSetParserStructuredErrors(
      xmlRelaxNGParserCtxtPtr ctxt,
      xmlStructuredErrorFunc serror,
      void *ctx);
 xmlRelaxNGPtr
      xmlRelaxNGParse (xmlRelaxNGParserCtxtPtr ctxt);
 void
      xmlRelaxNGFree (xmlRelaxNGPtr schema);

 void
      xmlRelaxNGDump (FILE *output,
      xmlRelaxNGPtr schema);
 void
      xmlRelaxNGDumpTree (FILE * output,
      xmlRelaxNGPtr schema);




 void
      xmlRelaxNGSetValidErrors(xmlRelaxNGValidCtxtPtr ctxt,
      xmlRelaxNGValidityErrorFunc err,
      xmlRelaxNGValidityWarningFunc warn,
      void *ctx);
 int
      xmlRelaxNGGetValidErrors(xmlRelaxNGValidCtxtPtr ctxt,
      xmlRelaxNGValidityErrorFunc *err,
      xmlRelaxNGValidityWarningFunc *warn,
      void **ctx);
 void
   xmlRelaxNGSetValidStructuredErrors(xmlRelaxNGValidCtxtPtr ctxt,
       xmlStructuredErrorFunc serror, void *ctx);
 xmlRelaxNGValidCtxtPtr
      xmlRelaxNGNewValidCtxt (xmlRelaxNGPtr schema);
 void
      xmlRelaxNGFreeValidCtxt (xmlRelaxNGValidCtxtPtr ctxt);
 int
      xmlRelaxNGValidateDoc (xmlRelaxNGValidCtxtPtr ctxt,
       xmlDocPtr doc);



 int
      xmlRelaxNGValidatePushElement (xmlRelaxNGValidCtxtPtr ctxt,
      xmlDocPtr doc,
      xmlNodePtr elem);
 int
      xmlRelaxNGValidatePushCData (xmlRelaxNGValidCtxtPtr ctxt,
      const xmlChar *data,
      int len);
 int
      xmlRelaxNGValidatePopElement (xmlRelaxNGValidCtxtPtr ctxt,
      xmlDocPtr doc,
      xmlNodePtr elem);
 int
      xmlRelaxNGValidateFullElement (xmlRelaxNGValidCtxtPtr ctxt,
      xmlDocPtr doc,
      xmlNodePtr elem);
# 47 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/php_libxml.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/php_libxml.h"
extern zend_module_entry libxml_module_entry;
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/php_libxml.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/php_smart_str.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/php_smart_str.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/php_smart_str_public.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/php_smart_str_public.h"
typedef struct {
 char *c;
 size_t len;
 size_t a;
} smart_str;
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/php_smart_str.h" 2
# 153 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/standard/php_smart_str.h"
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
# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/php_libxml.h" 2




typedef struct _zend_libxml_globals {
 zval *stream_context;
 smart_str error_buffer;
 zend_llist *error_list;
} zend_libxml_globals;

typedef struct _libxml_doc_props {
 int formatoutput;
 int validateonparse;
 int resolveexternals;
 int preservewhitespace;
 int substituteentities;
 int stricterror;
 int recover;
 HashTable *classmap;
} libxml_doc_props;

typedef struct _php_libxml_ref_obj {
 void *ptr;
 int refcount;
 libxml_doc_props *doc_props;
} php_libxml_ref_obj;

typedef struct _php_libxml_node_ptr {
 xmlNodePtr node;
 int refcount;
 void *_private;
} php_libxml_node_ptr;

typedef struct _php_libxml_node_object {
 zend_object std;
 php_libxml_node_ptr *node;
 php_libxml_ref_obj *document;
 HashTable *properties;
} php_libxml_node_object;

typedef void * (*php_libxml_export_node) (zval *object );

__attribute__ ((visibility("default"))) int php_libxml_increment_node_ptr(php_libxml_node_object *object, xmlNodePtr node, void *private_data );
__attribute__ ((visibility("default"))) int php_libxml_decrement_node_ptr(php_libxml_node_object *object );
__attribute__ ((visibility("default"))) int php_libxml_increment_doc_ref(php_libxml_node_object *object, xmlDocPtr docp );
__attribute__ ((visibility("default"))) int php_libxml_decrement_doc_ref(php_libxml_node_object *object );
__attribute__ ((visibility("default"))) xmlNodePtr php_libxml_import_node(zval *object );
__attribute__ ((visibility("default"))) int php_libxml_register_export(zend_class_entry *ce, php_libxml_export_node export_function);

__attribute__ ((visibility("default"))) void php_libxml_node_free_resource(xmlNodePtr node );

__attribute__ ((visibility("default"))) void php_libxml_node_decrement_resource(php_libxml_node_object *object );
__attribute__ ((visibility("default"))) void php_libxml_error_handler(void *ctx, const char *msg, ...);
__attribute__ ((visibility("default"))) void php_libxml_ctx_warning(void *ctx, const char *msg, ...);
__attribute__ ((visibility("default"))) void php_libxml_ctx_error(void *ctx, const char *msg, ...);
__attribute__ ((visibility("default"))) int php_libxml_xmlCheckUTF8(const unsigned char *s);
__attribute__ ((visibility("default"))) zval *php_libxml_switch_context(zval *context );
__attribute__ ((visibility("default"))) void php_libxml_issue_error(int level, const char *msg );


__attribute__ ((visibility("default"))) void php_libxml_initialize(void);
__attribute__ ((visibility("default"))) void php_libxml_shutdown(void);
# 50 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c" 2






static int _php_libxml_initialized = 0;
static int _php_libxml_per_request_initialization = 1;

typedef struct _php_libxml_func_handler {
 php_libxml_export_node export_func;
} php_libxml_func_handler;

static HashTable php_libxml_exports;

static zend_libxml_globals libxml_globals;
static void zm_globals_ctor_libxml(zend_libxml_globals *libxml_globals );

static void zif_libxml_set_streams_context(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_libxml_use_internal_errors(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_libxml_get_last_error(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_libxml_clear_errors(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_libxml_get_errors(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );
static void zif_libxml_disable_entity_loader(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used );

static zend_class_entry *libxmlerror_class_entry;
# 84 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-04-09-db01e840c2-09b990f499/php/ext/libxml/libxml.c"
static int zm_startup_libxml(int type, int module_number );
static int zm_activate_libxml(int type, int module_number );
static int zm_shutdown_libxml(int type, int module_number );
static int zm_deactivate_libxml(int type, int module_number );
static void zm_info_libxml(zend_module_entry *zend_module );




static const zend_arg_info arginfo_libxml_set_streams_context[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "context", sizeof("context")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_libxml_use_internal_errors[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "use_errors", sizeof("use_errors")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_libxml_get_last_error[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
};

static const zend_arg_info arginfo_libxml_get_errors[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
};

static const zend_arg_info arginfo_libxml_clear_errors[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
};

static const zend_arg_info arginfo_libxml_disable_entity_loader[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "disable", sizeof("disable")-1, ((void *)0), 0, 0, 0, 0},
};




static const zend_function_entry libxml_functions[] = {
 { "libxml_set_streams_context", zif_libxml_set_streams_context, arginfo_libxml_set_streams_context, (zend_uint) (sizeof(arginfo_libxml_set_streams_context)/sizeof(struct _zend_arg_info)-1), 0 },
 { "libxml_use_internal_errors", zif_libxml_use_internal_errors, arginfo_libxml_use_internal_errors, (zend_uint) (sizeof(arginfo_libxml_use_internal_errors)/sizeof(struct _zend_arg_info)-1), 0 },
 { "libxml_get_last_error", zif_libxml_get_last_error, arginfo_libxml_get_last_error, (zend_uint) (sizeof(arginfo_libxml_get_last_error)/sizeof(struct _zend_arg_info)-1), 0 },
 { "libxml_clear_errors", zif_libxml_clear_errors, arginfo_libxml_clear_errors, (zend_uint) (sizeof(arginfo_libxml_clear_errors)/sizeof(struct _zend_arg_info)-1), 0 },
 { "libxml_get_errors", zif_libxml_get_errors, arginfo_libxml_get_errors, (zend_uint) (sizeof(arginfo_libxml_get_errors)/sizeof(struct _zend_arg_info)-1), 0 },
 { "libxml_disable_entity_loader", zif_libxml_disable_entity_loader, arginfo_libxml_disable_entity_loader, (zend_uint) (sizeof(arginfo_libxml_disable_entity_loader)/sizeof(struct _zend_arg_info)-1), 0 },
 {((void *)0), ((void *)0), ((void *)0)}
};

zend_module_entry libxml_module_entry = {
 sizeof(zend_module_entry), 20100525, 0, 0, ((void *)0), ((void *)0),
 "libxml",
 libxml_functions,
 zm_startup_libxml,
 zm_shutdown_libxml,
 zm_activate_libxml,
 zm_deactivate_libxml,
 zm_info_libxml,
 ((void *)0),
 sizeof(zend_libxml_globals), &libxml_globals,
 ((void (*)(void* ))(zm_globals_ctor_libxml)),
 ((void *)0),
 ((void *)0),
 0, 0, ((void *)0), 0, "API" "20100525" ",NTS"
};




static int php_libxml_clear_object(php_libxml_node_object *object )
{
 if (object->properties) {
  object->properties = ((void *)0);
 }
 php_libxml_decrement_node_ptr(object );
 return php_libxml_decrement_doc_ref(object );
}

static int php_libxml_unregister_node(xmlNodePtr nodep )
{
 php_libxml_node_object *wrapper;

 php_libxml_node_ptr *nodeptr = nodep->_private;

 if (nodeptr != ((void *)0)) {
  wrapper = nodeptr->_private;
  if (wrapper) {
   php_libxml_clear_object(wrapper );
  } else {
   if (nodeptr->node != ((void *)0) && nodeptr->node->type != XML_DOCUMENT_NODE) {
    nodeptr->node->_private = ((void *)0);
   }
   nodeptr->node = ((void *)0);
  }
 }

 return -1;
}

static void php_libxml_node_free(xmlNodePtr node)
{
 if(node) {
  if (node->_private != ((void *)0)) {
   ((php_libxml_node_ptr *) node->_private)->node = ((void *)0);
  }
  switch (node->type) {
   case XML_ATTRIBUTE_NODE:
    xmlFreeProp((xmlAttrPtr) node);
    break;
   case XML_ENTITY_DECL:
   case XML_ELEMENT_DECL:
   case XML_ATTRIBUTE_DECL:
    break;
   case XML_NOTATION_NODE:

    if (node->name != ((void *)0)) {
     xmlFree((char *) node->name);
    }
    if (((xmlEntityPtr) node)->ExternalID != ((void *)0)) {
     xmlFree((char *) ((xmlEntityPtr) node)->ExternalID);
    }
    if (((xmlEntityPtr) node)->SystemID != ((void *)0)) {
     xmlFree((char *) ((xmlEntityPtr) node)->SystemID);
    }
    xmlFree(node);
    break;
   case XML_NAMESPACE_DECL:
    if (node->ns) {
     xmlFreeNs(node->ns);
     node->ns = ((void *)0);
    }
    node->type = XML_ELEMENT_NODE;
   default:
    xmlFreeNode(node);
  }
 }
}

static void php_libxml_node_free_list(xmlNodePtr node )
{
 xmlNodePtr curnode;

 if (node != ((void *)0)) {
  curnode = node;
  while (curnode != ((void *)0)) {
   node = curnode;
   switch (node->type) {

    case XML_NOTATION_NODE:
     break;
    case XML_ENTITY_REF_NODE:
     php_libxml_node_free_list((xmlNodePtr) node->properties );
     break;
    case XML_ATTRIBUTE_NODE:
         if ((node->doc != ((void *)0)) && (((xmlAttrPtr) node)->atype == XML_ATTRIBUTE_ID)) {
          xmlRemoveID(node->doc, (xmlAttrPtr) node);
         }
    case XML_ATTRIBUTE_DECL:
    case XML_DTD_NODE:
    case XML_DOCUMENT_TYPE_NODE:
    case XML_ENTITY_DECL:
    case XML_NAMESPACE_DECL:
    case XML_TEXT_NODE:
     php_libxml_node_free_list(node->children );
     break;
    default:
     php_libxml_node_free_list(node->children );
     php_libxml_node_free_list((xmlNodePtr) node->properties );
   }

   curnode = node->next;
   xmlUnlinkNode(node);
   if (php_libxml_unregister_node(node ) == 0) {
    node->doc = ((void *)0);
   }
   php_libxml_node_free(node);
  }
 }
}




static void zm_globals_ctor_libxml(zend_libxml_globals *libxml_globals )
{
 libxml_globals->stream_context = ((void *)0);
 libxml_globals->error_buffer.c = ((void *)0);
 libxml_globals->error_list = ((void *)0);
}




static void *php_libxml_streams_IO_open_wrapper(const char *filename, const char *mode, const int read_only)
{
 php_stream_statbuf ssbuf;
 php_stream_context *context = ((void *)0);
 php_stream_wrapper *wrapper = ((void *)0);
 char *resolved_path, *path_to_open = ((void *)0);
 void *ret_val = ((void *)0);
 int isescaped=0;
 xmlURI *uri;

 ;

 uri = xmlParseURI((xmlChar *)filename);
 if (uri && (uri->scheme == ((void *)0) || (xmlStrncmp(uri->scheme, "file", 4) == 0))) {
  resolved_path = xmlURIUnescapeString(filename, 0, ((void *)0));
  isescaped = 1;
 } else {
  resolved_path = (char *)filename;
 }

 if (uri) {
  xmlFreeURI(uri);
 }

 if (resolved_path == ((void *)0)) {
  return ((void *)0);
 }







 wrapper = php_stream_locate_url_wrapper(resolved_path, &path_to_open, 0 );
 if (wrapper && read_only && wrapper->wops->url_stat) {
  if (wrapper->wops->url_stat(wrapper, path_to_open, 2, &ssbuf, ((void *)0) ) == -1) {
   if (isescaped) {
    xmlFree(resolved_path);
   }
   return ((void *)0);
  }
 }

 if ((libxml_globals.stream_context)) {
  context = zend_fetch_resource(&(libxml_globals.stream_context) , -1, "Stream-Context", ((void *)0), 1, php_le_stream_context());
 }

 ret_val = _php_stream_open_wrapper_ex((path_to_open), ((char *)mode), (0x00000008), (((void *)0)), (context) );
 if (isescaped) {
  xmlFree(resolved_path);
 }
 return ret_val;
}

static void *php_libxml_streams_IO_open_read_wrapper(const char *filename)
{
 return php_libxml_streams_IO_open_wrapper(filename, "rb", 1);
}

static void *php_libxml_streams_IO_open_write_wrapper(const char *filename)
{
 return php_libxml_streams_IO_open_wrapper(filename, "wb", 0);
}

static int php_libxml_streams_IO_read(void *context, char *buffer, int len)
{
 ;
 return _php_stream_read(((php_stream*)context), (buffer), (len) );
}

static int php_libxml_streams_IO_write(void *context, const char *buffer, int len)
{
 ;
 return _php_stream_write((php_stream*)context, (buffer), (len) );
}

static int php_libxml_streams_IO_close(void *context)
{
 ;
 return _php_stream_free(((php_stream*)context), (1 | 2) );
}

static xmlParserInputBufferPtr
php_libxml_input_buffer_noload(const char *URI, xmlCharEncoding enc)
{
 return ((void *)0);
}

static xmlParserInputBufferPtr
php_libxml_input_buffer_create_filename(const char *URI, xmlCharEncoding enc)
{
 xmlParserInputBufferPtr ret;
 void *context = ((void *)0);

 if (URI == ((void *)0))
  return(((void *)0));

 context = php_libxml_streams_IO_open_read_wrapper(URI);

 if (context == ((void *)0)) {
  return(((void *)0));
 }


 ret = xmlAllocParserInputBuffer(enc);
 if (ret != ((void *)0)) {
  ret->context = context;
  ret->readcallback = php_libxml_streams_IO_read;
  ret->closecallback = php_libxml_streams_IO_close;
 } else
  php_libxml_streams_IO_close(context);

 return(ret);
}

static xmlOutputBufferPtr
php_libxml_output_buffer_create_filename(const char *URI,
                              xmlCharEncodingHandlerPtr encoder,
                              int compression __attribute__((unused)))
{
 xmlOutputBufferPtr ret;
 xmlURIPtr puri;
 void *context = ((void *)0);
 char *unescaped = ((void *)0);

 if (URI == ((void *)0))
  return(((void *)0));

 puri = xmlParseURI(URI);
 if (puri != ((void *)0)) {
  if (puri->scheme != ((void *)0))
   unescaped = xmlURIUnescapeString(URI, 0, ((void *)0));
  xmlFreeURI(puri);
 }

 if (unescaped != ((void *)0)) {
  context = php_libxml_streams_IO_open_write_wrapper(unescaped);
  xmlFree(unescaped);
 }


 if (context == ((void *)0)) {
  context = php_libxml_streams_IO_open_write_wrapper(URI);
 }

 if (context == ((void *)0)) {
  return(((void *)0));
 }


 ret = xmlAllocOutputBuffer(encoder);
 if (ret != ((void *)0)) {
  ret->context = context;
  ret->writecallback = php_libxml_streams_IO_write;
  ret->closecallback = php_libxml_streams_IO_close;
 }

 return(ret);
}

static int _php_libxml_free_error(xmlErrorPtr error)
{

 xmlResetError(error);
 return 1;
}

static void _php_list_set_error_structure(xmlErrorPtr error, const char *msg)
{
 xmlError error_copy;
 int ret;

 ;

 memset(&error_copy, 0, sizeof(xmlError));

 if (error) {
  ret = xmlCopyError(error, &error_copy);
 } else {
  error_copy.domain = 0;
  error_copy.code = XML_ERR_INTERNAL_ERROR;
  error_copy.level = XML_ERR_ERROR;
  error_copy.line = 0;
  error_copy.node = ((void *)0);
  error_copy.int1 = 0;
  error_copy.int2 = 0;
  error_copy.ctxt = ((void *)0);
  error_copy.message = xmlStrdup(msg);
  error_copy.file = ((void *)0);
  error_copy.str1 = ((void *)0);
  error_copy.str2 = ((void *)0);
  error_copy.str3 = ((void *)0);
  ret = 0;
 }

 if (ret == 0) {
  zend_llist_add_element((libxml_globals.error_list), &error_copy);
 }
}

static void php_libxml_ctx_error_level(int level, void *ctx, const char *msg )
{
 xmlParserCtxtPtr parser;

 parser = (xmlParserCtxtPtr) ctx;

 if (parser != ((void *)0) && parser->input != ((void *)0)) {
  if (parser->input->filename) {
   php_error_docref0(((void *)0) , level, "%s in %s, line: %d", msg, parser->input->filename, parser->input->line);
  } else {
   php_error_docref0(((void *)0) , level, "%s in Entity, line: %d", msg, parser->input->line);
  }
 }
}

void php_libxml_issue_error(int level, const char *msg )
{
 if ((libxml_globals.error_list)) {
  _php_list_set_error_structure(((void *)0), msg);
 } else {
  php_error_docref0(((void *)0) , level, "%s", msg);
 }
}

static void php_libxml_internal_error_handler(int error_type, void *ctx, const char **msg, va_list ap)
{
 char *buf;
 int len, len_iter, output = 0;

 ;

 len = vspprintf(&buf, 0, *msg, ap);
 len_iter = len;


 while (len_iter && buf[--len_iter] == '\n') {
  buf[len_iter] = '\0';
  output = 1;
 }

 do { register size_t __nl; smart_str *__dest = (smart_str *) ((&(libxml_globals.error_buffer))); do { if (!(__dest)->c) { (__dest)->len = 0; __nl = (((len))); (__dest)->a = __nl < 78 ? 78 : __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } else { __nl = (__dest)->len + (((len))); if (__nl >= (__dest)->a) { (__dest)->a = __nl + 128; (__dest)->c = (((((0))))?__zend_realloc((((__dest)->c)), (((__dest)->a + 1))):_erealloc(((((__dest)->c))), ((((__dest)->a + 1))), 0 )); } } } while (0); memcpy(__dest->c + __dest->len, ((buf)), ((len))); __dest->len = __nl; } while (0);

 _efree((buf) );

 if (output == 1) {
  if ((libxml_globals.error_list)) {
   _php_list_set_error_structure(((void *)0), (libxml_globals.error_buffer).c);
  } else {
   switch (error_type) {
    case 1:
     php_libxml_ctx_error_level((1<<1L), ctx, (libxml_globals.error_buffer).c );
     break;
    case 2:
     php_libxml_ctx_error_level((1<<3L), ctx, (libxml_globals.error_buffer).c );
     break;
    default:
     php_error_docref0(((void *)0) , (1<<1L), "%s", (libxml_globals.error_buffer).c);
   }
  }
  do { smart_str *__s = (smart_str *) ((&(libxml_globals.error_buffer))); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void *)0); } __s->a = __s->len = 0; } while (0);
 }
}

__attribute__ ((visibility("default"))) void php_libxml_ctx_error(void *ctx, const char *msg, ...)
{
 va_list args;
 __builtin_va_start(args,msg);
 php_libxml_internal_error_handler(1, ctx, &msg, args);
 __builtin_va_end(args);
}

__attribute__ ((visibility("default"))) void php_libxml_ctx_warning(void *ctx, const char *msg, ...)
{
 va_list args;
 __builtin_va_start(args,msg);
 php_libxml_internal_error_handler(2, ctx, &msg, args);
 __builtin_va_end(args);
}

__attribute__ ((visibility("default"))) void php_libxml_structured_error_handler(void *userData, xmlErrorPtr error)
{
 _php_list_set_error_structure(error, ((void *)0));

 return;
}

__attribute__ ((visibility("default"))) void php_libxml_error_handler(void *ctx, const char *msg, ...)
{
 va_list args;
 __builtin_va_start(args,msg);
 php_libxml_internal_error_handler(0, ctx, &msg, args);
 __builtin_va_end(args);
}


__attribute__ ((visibility("default"))) void php_libxml_initialize(void)
{
 if (!_php_libxml_initialized) {

  xmlInitParser();

  _zend_hash_init((&php_libxml_exports), (0), (((void *)0)), (((void *)0)), (1) );

  _php_libxml_initialized = 1;
 }
}

__attribute__ ((visibility("default"))) void php_libxml_shutdown(void)
{
 if (_php_libxml_initialized) {

  xmlRelaxNGCleanupTypes();

  xmlCleanupParser();
  zend_hash_destroy(&php_libxml_exports);
  _php_libxml_initialized = 0;
 }
}

__attribute__ ((visibility("default"))) zval *php_libxml_switch_context(zval *context )
{
 zval *oldcontext;

 oldcontext = (libxml_globals.stream_context);
 (libxml_globals.stream_context) = context;
 return oldcontext;

}

static int zm_startup_libxml(int type, int module_number )
{
 zend_class_entry ce;

 php_libxml_initialize();

 zend_register_long_constant(("LIBXML_VERSION"), sizeof("LIBXML_VERSION"), (20707), ((1<<0) | (1<<1)), module_number );
 zend_register_string_constant(("LIBXML_DOTTED_VERSION"), sizeof("LIBXML_DOTTED_VERSION"), ("2.7.7"), ((1<<0) | (1<<1)), module_number );
 zend_register_string_constant(("LIBXML_LOADED_VERSION"), sizeof("LIBXML_LOADED_VERSION"), ((char *)(*(__xmlParserVersion()))), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("LIBXML_NOENT"), sizeof("LIBXML_NOENT"), (XML_PARSE_NOENT), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_DTDLOAD"), sizeof("LIBXML_DTDLOAD"), (XML_PARSE_DTDLOAD), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_DTDATTR"), sizeof("LIBXML_DTDATTR"), (XML_PARSE_DTDATTR), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_DTDVALID"), sizeof("LIBXML_DTDVALID"), (XML_PARSE_DTDVALID), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_NOERROR"), sizeof("LIBXML_NOERROR"), (XML_PARSE_NOERROR), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_NOWARNING"), sizeof("LIBXML_NOWARNING"), (XML_PARSE_NOWARNING), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_NOBLANKS"), sizeof("LIBXML_NOBLANKS"), (XML_PARSE_NOBLANKS), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_XINCLUDE"), sizeof("LIBXML_XINCLUDE"), (XML_PARSE_XINCLUDE), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_NSCLEAN"), sizeof("LIBXML_NSCLEAN"), (XML_PARSE_NSCLEAN), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_NOCDATA"), sizeof("LIBXML_NOCDATA"), (XML_PARSE_NOCDATA), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_NONET"), sizeof("LIBXML_NONET"), (XML_PARSE_NONET), ((1<<0) | (1<<1)), module_number );

 zend_register_long_constant(("LIBXML_COMPACT"), sizeof("LIBXML_COMPACT"), (XML_PARSE_COMPACT), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_NOXMLDECL"), sizeof("LIBXML_NOXMLDECL"), (XML_SAVE_NO_DECL), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("LIBXML_PARSEHUGE"), sizeof("LIBXML_PARSEHUGE"), (XML_PARSE_HUGE), ((1<<0) | (1<<1)), module_number );

 zend_register_long_constant(("LIBXML_NOEMPTYTAG"), sizeof("LIBXML_NOEMPTYTAG"), (1<<2), ((1<<0) | (1<<1)), module_number );


 zend_register_long_constant(("LIBXML_ERR_NONE"), sizeof("LIBXML_ERR_NONE"), (XML_ERR_NONE), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_ERR_WARNING"), sizeof("LIBXML_ERR_WARNING"), (XML_ERR_WARNING), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_ERR_ERROR"), sizeof("LIBXML_ERR_ERROR"), (XML_ERR_ERROR), ((1<<0) | (1<<1)), module_number );
 zend_register_long_constant(("LIBXML_ERR_FATAL"), sizeof("LIBXML_ERR_FATAL"), (XML_ERR_FATAL), ((1<<0) | (1<<1)), module_number );

 { const char *cl_name = "LibXMLError"; int _len = sizeof("LibXMLError")-1; ce.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (ce.name == cl_name) { ce.name = zend_strndup(cl_name, _len); } ce.name_length = _len; ce.constructor = ((void *)0); ce.destructor = ((void *)0); ce.clone = ((void *)0); ce.serialize = ((void *)0); ce.unserialize = ((void *)0); ce.create_object = ((void *)0); ce.interface_gets_implemented = ((void *)0); ce.get_static_method = ((void *)0); ce.__call = ((void *)0); ce.__callstatic = ((void *)0); ce.__tostring = ((void *)0); ce.__get = ((void *)0); ce.__set = ((void *)0); ce.__unset = ((void *)0); ce.__isset = ((void *)0); ce.serialize_func = ((void *)0); ce.unserialize_func = ((void *)0); ce.serialize = ((void *)0); ce.unserialize = ((void *)0); ce.parent = ((void *)0); ce.num_interfaces = 0; ce.traits = ((void *)0); ce.num_traits = 0; ce.trait_aliases = ((void *)0); ce.trait_precedences = ((void *)0); ce.interfaces = ((void *)0); ce.get_iterator = ((void *)0); ce.iterator_funcs.funcs = ((void *)0); ce.info.internal.module = ((void *)0); ce.info.internal.builtin_functions = ((void *)0); };
 libxmlerror_class_entry = zend_register_internal_class(&ce );

 if (sapi_module.name) {
  static const char * const supported_sapis[] = {
   "cgi-fcgi",
   "fpm-fcgi",
   "litespeed",
   ((void *)0)
  };
  const char * const *sapi_name;

  for (sapi_name = supported_sapis; *sapi_name; sapi_name++) {
   if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (sapi_module.name) && __builtin_constant_p (*sapi_name) && (__s1_len = strlen (sapi_module.name), __s2_len = strlen (*sapi_name), (!((size_t)(const void *)((sapi_module.name) + 1) - (size_t)(const void *)(sapi_module.name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((*sapi_name) + 1) - (size_t)(const void *)(*sapi_name) == 1) || __s2_len >= 4)) ? __builtin_strcmp (sapi_module.name, *sapi_name) : (__builtin_constant_p (sapi_module.name) && ((size_t)(const void *)((sapi_module.name) + 1) - (size_t)(const void *)(sapi_module.name) == 1) && (__s1_len = strlen (sapi_module.name), __s1_len < 4) ? (__builtin_constant_p (*sapi_name) && ((size_t)(const void *)((*sapi_name) + 1) - (size_t)(const void *)(*sapi_name) == 1) ? __builtin_strcmp (sapi_module.name, *sapi_name) : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) (*sapi_name); register int __result = (((__const unsigned char *) (__const char *) (sapi_module.name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (sapi_module.name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (sapi_module.name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (sapi_module.name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (*sapi_name) && ((size_t)(const void *)((*sapi_name) + 1) - (size_t)(const void *)(*sapi_name) == 1) && (__s2_len = strlen (*sapi_name), __s2_len < 4) ? (__builtin_constant_p (sapi_module.name) && ((size_t)(const void *)((sapi_module.name) + 1) - (size_t)(const void *)(sapi_module.name) == 1) ? __builtin_strcmp (sapi_module.name, *sapi_name) : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (sapi_module.name); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) (*sapi_name))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) (*sapi_name))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) (*sapi_name))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) (*sapi_name))[3]); } } __result; }))) : __builtin_strcmp (sapi_module.name, *sapi_name)))); }) == 0) {
    _php_libxml_per_request_initialization = 0;
    break;
   }
  }
 }

 if (!_php_libxml_per_request_initialization) {

  xmlSetGenericErrorFunc(((void *)0), php_libxml_error_handler);
  xmlParserInputBufferCreateFilenameDefault(php_libxml_input_buffer_create_filename);
  xmlOutputBufferCreateFilenameDefault(php_libxml_output_buffer_create_filename);
 }

 return 0;
}


static int zm_activate_libxml(int type, int module_number )
{
 if (_php_libxml_per_request_initialization) {

  xmlSetGenericErrorFunc(((void *)0), php_libxml_error_handler);
  xmlParserInputBufferCreateFilenameDefault(php_libxml_input_buffer_create_filename);
  xmlOutputBufferCreateFilenameDefault(php_libxml_output_buffer_create_filename);
 }
 return 0;
}


static int zm_shutdown_libxml(int type, int module_number )
{
 if (!_php_libxml_per_request_initialization) {
  xmlSetGenericErrorFunc(((void *)0), ((void *)0));
  xmlSetStructuredErrorFunc(((void *)0), ((void *)0));

  xmlParserInputBufferCreateFilenameDefault(((void *)0));
  xmlOutputBufferCreateFilenameDefault(((void *)0));
 }
 php_libxml_shutdown();

 return 0;
}


static int zm_deactivate_libxml(int type, int module_number )
{

 if (_php_libxml_per_request_initialization) {
  xmlSetGenericErrorFunc(((void *)0), ((void *)0));
  xmlSetStructuredErrorFunc(((void *)0), ((void *)0));

  xmlParserInputBufferCreateFilenameDefault(((void *)0));
  xmlOutputBufferCreateFilenameDefault(((void *)0));
 }

 if ((libxml_globals.stream_context)) {
  _zval_ptr_dtor((&(libxml_globals.stream_context)) );
  (libxml_globals.stream_context) = ((void *)0);
 }
 do { smart_str *__s = (smart_str *) ((&(libxml_globals.error_buffer))); if (__s->c) { ((0)?free(__s->c):_efree((__s->c) )); __s->c = ((void *)0); } __s->a = __s->len = 0; } while (0);
 if ((libxml_globals.error_list)) {
  zend_llist_destroy((libxml_globals.error_list));
  _efree(((libxml_globals.error_list)) );
  (libxml_globals.error_list) = ((void *)0);
 }
 xmlResetLastError();

 return 0;
}


static void zm_info_libxml(zend_module_entry *zend_module )
{
 php_info_print_table_start();
 php_info_print_table_row(2, "libXML support", "active");
 php_info_print_table_row(2, "libXML Compiled Version", "2.7.7");
 php_info_print_table_row(2, "libXML Loaded Version", (char *)(*(__xmlParserVersion())));
 php_info_print_table_row(2, "libXML streams", "enabled");
 php_info_print_table_end();
}




static void zif_libxml_set_streams_context(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *arg;

 if (zend_parse_parameters((ht) , "z", &arg) == -1) {
  return;
 }
 if ((libxml_globals.stream_context)) {
  _zval_ptr_dtor((&(libxml_globals.stream_context)) );
  (libxml_globals.stream_context) = ((void *)0);
 }
 zval_addref_p(arg);
 (libxml_globals.stream_context) = arg;
}




static void zif_libxml_use_internal_errors(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 xmlStructuredErrorFunc current_handler;
 zend_bool use_errors=0, retval;

 if (zend_parse_parameters((ht) , "|b", &use_errors) == -1) {
  return;
 }

 current_handler = (*(__xmlStructuredError()));
 if (current_handler && current_handler == php_libxml_structured_error_handler) {
  retval = 1;
 } else {
  retval = 0;
 }

 if ((ht) == 0) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((retval) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (use_errors == 0) {
  xmlSetStructuredErrorFunc(((void *)0), ((void *)0));
  if ((libxml_globals.error_list)) {
   zend_llist_destroy((libxml_globals.error_list));
   _efree(((libxml_globals.error_list)) );
   (libxml_globals.error_list) = ((void *)0);
  }
 } else {
  xmlSetStructuredErrorFunc(((void *)0), php_libxml_structured_error_handler);
  if ((libxml_globals.error_list) == ((void *)0)) {
   (libxml_globals.error_list) = (zend_llist *) _emalloc((sizeof(zend_llist)) );
   zend_llist_init((libxml_globals.error_list), sizeof(xmlError), (llist_dtor_func_t) _php_libxml_free_error, 0);
  }
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((retval) != 0); (*__z).type = 3; } while (0); return; };
}




static void zif_libxml_get_last_error(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 xmlErrorPtr error;

 error = xmlGetLastError();

 if (error) {
  _object_init_ex((return_value), (libxmlerror_class_entry) );
  add_property_long_ex(return_value, "level", strlen("level")+1, error->level );
  add_property_long_ex(return_value, "code", strlen("code")+1, error->code );
  add_property_long_ex(return_value, "column", strlen("column")+1, error->int2 );
  if (error->message) {
   add_property_string_ex(return_value, "message", strlen("message")+1, error->message, 1 );
  } else {
   add_property_stringl_ex(return_value, "message", strlen("message")+1, "", 0, 1 );
  }
  if (error->file) {
   add_property_string_ex(return_value, "file", strlen("file")+1, error->file, 1 );
  } else {
   add_property_stringl_ex(return_value, "file", strlen("file")+1, "", 0, 1 );
  }
  add_property_long_ex(return_value, "line", strlen("line")+1, error->line );
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}




static void zif_libxml_get_errors(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{

 xmlErrorPtr error;

 if (_array_init((return_value), 0 ) == -1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if ((libxml_globals.error_list)) {

  error = zend_llist_get_first_ex((libxml_globals.error_list), ((void *)0));

  while (error != ((void *)0)) {
   zval *z_error;
   do { (z_error) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(z_error))->u.buffered = ((void *)0); } while (0); (z_error)->refcount__gc = 1; (z_error)->is_ref__gc = 0;;;

   _object_init_ex((z_error), (libxmlerror_class_entry) );
   add_property_long_ex(z_error, "level", strlen("level")+1, error->level );
   add_property_long_ex(z_error, "code", strlen("code")+1, error->code );
   add_property_long_ex(z_error, "column", strlen("column")+1, error->int2 );
   if (error->message) {
    add_property_string_ex(z_error, "message", strlen("message")+1, error->message, 1 );
   } else {
    add_property_stringl_ex(z_error, "message", strlen("message")+1, "", 0, 1 );
   }
   if (error->file) {
    add_property_string_ex(z_error, "file", strlen("file")+1, error->file, 1 );
   } else {
    add_property_stringl_ex(z_error, "file", strlen("file")+1, "", 0, 1 );
   }
   add_property_long_ex(z_error, "line", strlen("line")+1, error->line );
   add_next_index_zval(return_value, z_error);

   error = zend_llist_get_next_ex((libxml_globals.error_list), ((void *)0));
  }
 }
}




static void zif_libxml_clear_errors(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 xmlResetLastError();
 if ((libxml_globals.error_list)) {
  zend_llist_clean((libxml_globals.error_list));
 }
}




static void zif_libxml_disable_entity_loader(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zend_bool disable = 1;
 xmlParserInputBufferCreateFilenameFunc old;

 if (zend_parse_parameters((ht) , "|b", &disable) == -1) {
  return;
 }

 if (disable == 0) {
  old = xmlParserInputBufferCreateFilenameDefault(php_libxml_input_buffer_create_filename);
 } else {
  old = xmlParserInputBufferCreateFilenameDefault(php_libxml_input_buffer_noload);
 }

 if (old == php_libxml_input_buffer_noload) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}



int php_libxml_xmlCheckUTF8(const unsigned char *s)
{
 int i;
 unsigned char c;

 for (i = 0; (c = s[i++]);) {
  if ((c & 0x80) == 0) {
  } else if ((c & 0xe0) == 0xc0) {
   if ((s[i++] & 0xc0) != 0x80) {
    return 0;
   }
  } else if ((c & 0xf0) == 0xe0) {
   if ((s[i++] & 0xc0) != 0x80 || (s[i++] & 0xc0) != 0x80) {
    return 0;
   }
  } else if ((c & 0xf8) == 0xf0) {
   if ((s[i++] & 0xc0) != 0x80 || (s[i++] & 0xc0) != 0x80 || (s[i++] & 0xc0) != 0x80) {
    return 0;
   }
  } else {
   return 0;
  }
 }
 return 1;
}

int php_libxml_register_export(zend_class_entry *ce, php_libxml_export_node export_function)
{
 php_libxml_func_handler export_hnd;


 php_libxml_initialize();
 export_hnd.export_func = export_function;

 return _zend_hash_add_or_update(&php_libxml_exports, ce->name, ce->name_length + 1, &export_hnd, sizeof(export_hnd), ((void *)0), (1<<1) );
}

__attribute__ ((visibility("default"))) xmlNodePtr php_libxml_import_node(zval *object )
{
 zend_class_entry *ce = ((void *)0);
 xmlNodePtr node = ((void *)0);
 php_libxml_func_handler *export_hnd;

 if (object->type == 5) {
  ce = zend_get_class_entry(&(*object) );
  while (ce->parent != ((void *)0)) {
   ce = ce->parent;
  }
  if (zend_hash_find(&php_libxml_exports, ce->name, ce->name_length + 1, (void **) &export_hnd) == 0) {
   node = export_hnd->export_func(object );
  }
 }
 return node;
}

__attribute__ ((visibility("default"))) int php_libxml_increment_node_ptr(php_libxml_node_object *object, xmlNodePtr node, void *private_data )
{
 int ret_refcount = -1;

 if (object != ((void *)0) && node != ((void *)0)) {
  if (object->node != ((void *)0)) {
   if (object->node->node == node) {
    return object->node->refcount;
   } else {
    php_libxml_decrement_node_ptr(object );
   }
  }
  if (node->_private != ((void *)0)) {
   object->node = node->_private;
   ret_refcount = ++object->node->refcount;

   if (object->node->_private == ((void *)0)) {
    object->node->_private = private_data;
   }
  } else {
   ret_refcount = 1;
   object->node = _emalloc((sizeof(php_libxml_node_ptr)) );
   object->node->node = node;
   object->node->refcount = 1;
   object->node->_private = private_data;
   node->_private = object->node;
  }
 }

 return ret_refcount;
}

__attribute__ ((visibility("default"))) int php_libxml_decrement_node_ptr(php_libxml_node_object *object )
{
 int ret_refcount = -1;
 php_libxml_node_ptr *obj_node;

 if (object != ((void *)0) && object->node != ((void *)0)) {
  obj_node = (php_libxml_node_ptr *) object->node;
  ret_refcount = --obj_node->refcount;
  if (ret_refcount == 0) {
   if (obj_node->node != ((void *)0)) {
    obj_node->node->_private = ((void *)0);
   }
   _efree((obj_node) );
  }
  object->node = ((void *)0);
 }

 return ret_refcount;
}

__attribute__ ((visibility("default"))) int php_libxml_increment_doc_ref(php_libxml_node_object *object, xmlDocPtr docp )
{
 int ret_refcount = -1;

 if (object->document != ((void *)0)) {
  object->document->refcount++;
  ret_refcount = object->document->refcount;
 } else if (docp != ((void *)0)) {
  ret_refcount = 1;
  object->document = _emalloc((sizeof(php_libxml_ref_obj)) );
  object->document->ptr = docp;
  object->document->refcount = ret_refcount;
  object->document->doc_props = ((void *)0);
 }

 return ret_refcount;
}

__attribute__ ((visibility("default"))) int php_libxml_decrement_doc_ref(php_libxml_node_object *object )
{
 int ret_refcount = -1;

 if (object != ((void *)0) && object->document != ((void *)0)) {
  ret_refcount = --object->document->refcount;
  if (ret_refcount == 0) {
   if (object->document->ptr != ((void *)0)) {
    xmlFreeDoc((xmlDoc *) object->document->ptr);
   }
   if (object->document->doc_props != ((void *)0)) {
    if (object->document->doc_props->classmap) {
     zend_hash_destroy(object->document->doc_props->classmap);
     _efree((object->document->doc_props->classmap) );
    }
    _efree((object->document->doc_props) );
   }
   _efree((object->document) );
   object->document = ((void *)0);
  }
 }

 return ret_refcount;
}

__attribute__ ((visibility("default"))) void php_libxml_node_free_resource(xmlNodePtr node )
{
 if (!node) {
  return;
 }

 switch (node->type) {
  case XML_DOCUMENT_NODE:
  case XML_HTML_DOCUMENT_NODE:
   break;
  default:
   if (node->parent == ((void *)0) || node->type == XML_NAMESPACE_DECL) {
    php_libxml_node_free_list((xmlNodePtr) node->children );
    switch (node->type) {

     case XML_ATTRIBUTE_DECL:
     case XML_DTD_NODE:
     case XML_DOCUMENT_TYPE_NODE:
     case XML_ENTITY_DECL:
     case XML_ATTRIBUTE_NODE:
     case XML_NAMESPACE_DECL:
     case XML_TEXT_NODE:
      break;
     default:
      php_libxml_node_free_list((xmlNodePtr) node->properties );
    }
    if (php_libxml_unregister_node(node ) == 0) {
     node->doc = ((void *)0);
    }
    php_libxml_node_free(node);
   } else {
    php_libxml_unregister_node(node );
   }
 }
}

__attribute__ ((visibility("default"))) void php_libxml_node_decrement_resource(php_libxml_node_object *object )
{
 int ret_refcount = -1;
 xmlNodePtr nodep;
 php_libxml_node_ptr *obj_node;

 if (object != ((void *)0) && object->node != ((void *)0)) {
  obj_node = (php_libxml_node_ptr *) object->node;
  nodep = object->node->node;
  ret_refcount = php_libxml_decrement_node_ptr(object );
  if (ret_refcount == 0) {
   php_libxml_node_free_resource(nodep );
  } else {
   if (obj_node && object == obj_node->_private) {
    obj_node->_private = ((void *)0);
   }
  }
 }
 if (object != ((void *)0) && object->document != ((void *)0)) {

  php_libxml_decrement_doc_ref(object );
 }
}
