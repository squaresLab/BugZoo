# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c"
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_version.h" 1
# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 1
# 51 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/include/../main/php_config.h" 1
# 2423 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/include/../main/php_config.h"
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

# 2424 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/include/../main/php_config.h" 2
# 2439 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/include/../main/php_config.h"
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

# 2440 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/include/../main/php_config.h" 2
# 2450 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/include/../main/php_config.h"
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

# 2451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/include/../main/php_config.h" 2
# 2 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_config.h" 2
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2
# 68 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h"
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

# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 76 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2



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




# 80 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2
# 236 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_errors.h" 1
# 237 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_alloc.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_alloc.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/../TSRM/TSRM.h" 1
# 20 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/../TSRM/TSRM.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/include/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_config.h" 2
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/../TSRM/TSRM.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_alloc.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_alloc.h" 2
# 44 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_alloc.h"
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
# 93 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_alloc.h"
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
# 142 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 159 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );


# 191 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 211 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_alloc.h"
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
# 238 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_types.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_types.h"
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;

typedef struct _zend_object_value {
 zend_object_handle handle;
 const zend_object_handlers *handlers;
} zend_object_value;
# 240 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_string.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_string.h"
__attribute__ ((visibility("default"))) extern const char *(*zend_new_interned_string)(const char *str, int len, int free_src );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 241 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2


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
# 244 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2
# 256 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h"
static const char long_min_digits[] = "2147483648";
# 271 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_hash.h" 1
# 45 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_hash.h"
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
# 214 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag, void **pData );




__attribute__ ((visibility("default"))) int zend_hash_num_elements(const HashTable *ht);

__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);
# 261 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_hash.h"
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








# 348 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_hash.h"
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
# 272 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_ts_hash.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_ts_hash.h"
typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






__attribute__ ((visibility("default"))) int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_ts_hash_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_ts_hash.h"
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








# 273 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_llist.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_llist.h"
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







# 274 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2





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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_object_handlers.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;
struct _zend_literal;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, const struct _zend_literal *key );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 46 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_object_handlers.h"
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

# 306 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2

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
# 378 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h"
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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_iterators.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_iterators.h"
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

# 417 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2

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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_stream.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_stream.h"
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

# 528 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2
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
# 593 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);

# 631 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h"

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

# 676 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h"

extern __attribute__ ((visibility("default"))) int (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, char **opened_path );




extern __attribute__ ((visibility("default"))) void (*zend_ticks_function)(int ticks);
extern __attribute__ ((visibility("default"))) void (*zend_error_cb)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
extern __attribute__ ((visibility("default"))) void (*zend_on_timeout)(int seconds );
extern __attribute__ ((visibility("default"))) int (*zend_stream_open_function)(const char *filename, zend_file_handle *handle );
extern int (*zend_vspprintf)(char **pbuf, size_t max_len, const char *format, va_list ap);
extern __attribute__ ((visibility("default"))) char *(*zend_getenv)(char *name, size_t name_len );
extern __attribute__ ((visibility("default"))) char *(*zend_resolve_path)(const char *filename, int filename_len );

__attribute__ ((visibility("default"))) void zend_error(int type, const char *format, ...) __attribute__ ((format(printf, 2, 3)));

void zenderror(const char *error);



extern __attribute__ ((visibility("default"))) zend_class_entry *zend_standard_class_def;
extern __attribute__ ((visibility("default"))) zend_utility_values zend_uv;
extern __attribute__ ((visibility("default"))) zval zval_used_for_init;









# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_signal.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_signal.h"
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




# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_signal.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_signal.h"
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
# 74 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_signal.h"
extern __attribute__ ((visibility("default"))) zend_signal_globals_t zend_signal_globals;






void zend_signal_handler_defer(int signo, siginfo_t *siginfo, void *context);
void zend_signal_handler_unblock();
void zend_signal_activate(void);
void zend_signal_deactivate(void);
void zend_signal_startup();
void zend_signal_shutdown(void);
__attribute__ ((visibility("default"))) int zend_signal(int signo, void (*handler)(int) );
__attribute__ ((visibility("default"))) int zend_sigaction(int signo, const struct sigaction *act, struct sigaction *oldact );
# 711 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2






__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);

# 829 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_gc.h" 1
# 81 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_gc.h"
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
# 129 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_gc.h"
} zend_gc_globals;
# 138 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_zval_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_zobj_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_remove_zval_from_buffer(zval *zv );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);

# 180 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_gc.h"
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
# 830 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h"
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
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h" 2

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



# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h" 2





# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_strtod.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_strtod.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);

# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_multiply.h" 1
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h" 2








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
# 105 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h"
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

# 456 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h"
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
# 488 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h"
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
# 525 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h"
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
# 585 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h"
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
# 668 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h"
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
# 831 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_variables.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_variables.h"


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
# 78 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval **p);


# 832 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend.h" 2

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
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_qsort.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_qsort.h"

__attribute__ ((visibility("default"))) void zend_qsort(void *base, size_t nmemb, size_t siz, compare_func_t compare );

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_compat.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_compat.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_config.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_compat.h" 2
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_modules.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_modules.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_compile.h" 1
# 53 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_compile.h"
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
# 210 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_compile.h"
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
# 397 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_compile.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h"
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

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals_macros.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;









extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 48 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;



# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_stack.h"
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

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_ptr_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_ptr_stack.h"
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

# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_ptr_stack.h"
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
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_objects.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_objects.h"

__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object *zend_objects_get_address(const zval *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_free_object_storage(zend_object *object );

# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_objects_API.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_objects_API.h"
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

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_modules.h" 1
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_float.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_float.h"
# 1 "/usr/include/fpu_control.h" 1 3 4
# 89 "/usr/include/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 100 "/usr/include/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 213 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_float.h" 2
# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_multibyte.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_multibyte.h"
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


# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 2
# 55 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_compile.h" 1
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 2
# 64 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h"
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
# 398 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_compile.h" 2



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
# 430 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_compile.h"
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



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_vm_opcodes.h" 1
# 698 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_compile.h" 2
# 820 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_compile.h"

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_modules.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_build.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_modules.h" 2
# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_modules.h"
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
# 118 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_modules.h"
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
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_list.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_list.h"





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
# 116 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_list.h"

# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_execute.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_execute.h"
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
# 183 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_execute.h"
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
# 410 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval** zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 420 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );
__attribute__ ((visibility("default"))) zval **zend_get_zval_ptr_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );
# 451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_execute.h"

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h" 2




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
# 228 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 249 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h"
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
# 293 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h"
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
# 358 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h"
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
# 393 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h"
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
# 441 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 457 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h"
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

# 731 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h"

# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 87 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"
# 1 "/usr/include/assert.h" 1 3 4
# 88 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 103 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/build-defs.h" 1
# 104 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 128 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"

__attribute__ ((visibility("default"))) size_t php_strlcpy(char *dst, const char *src, size_t siz);







__attribute__ ((visibility("default"))) size_t php_strlcat(char *dst, const char *src, size_t siz);

# 168 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"
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

# 169 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2

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

# 171 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 188 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_hash.h" 1
# 189 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_alloc.h" 1
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_stack.h" 1
# 191 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 211 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"
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



# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
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
# 213 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2




# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 218 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 240 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/snprintf.h" 1
# 73 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/snprintf.h"
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


# 127 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/snprintf.h"
typedef enum {
 LM_STD = 0,

 LM_INTMAX_T,


 LM_PTRDIFF_T,


 LM_LONG_LONG,

 LM_SIZE_T,
 LM_LONG,
 LM_LONG_DOUBLE
} length_modifier_e;
# 152 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/snprintf.h"
typedef long long int wide_int;
typedef unsigned long long int u_wide_int;

extern char * ap_php_conv_10(register wide_int num, register bool_int is_unsigned,
    register bool_int * is_negative, char *buf_end, register int *len);

extern char * ap_php_conv_p2(register u_wide_int num, register int nbits,
   char format, char *buf_end, register int *len);
# 242 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/spprintf.h" 1
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/spprintf.h"

__attribute__ ((visibility("default"))) int spprintf( char **pbuf, size_t max_len, const char *format, ...) __attribute__ ((format(printf, 3, 4)));

__attribute__ ((visibility("default"))) int vspprintf(char **pbuf, size_t max_len, const char *format, va_list ap) __attribute__ ((format(printf, 3, 0)));

# 244 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 272 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"
extern char **environ;
# 283 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"

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
# 313 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"
__attribute__ ((visibility("default"))) void php_error_docref0(const char *docref , int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 3, 0 + 4)));
__attribute__ ((visibility("default"))) void php_error_docref1(const char *docref , const char *param1, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 4, 0 + 5)));
__attribute__ ((visibility("default"))) void php_error_docref2(const char *docref , const char *param1, const char *param2, int type, const char *format, ...)
 __attribute__ ((format(printf, 0 + 5, 0 + 6)));




# 336 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"

__attribute__ ((visibility("default"))) extern int (*php_register_internal_extensions_func)(void);
__attribute__ ((visibility("default"))) int php_register_internal_extensions(void);
__attribute__ ((visibility("default"))) int php_mergesort(void *base, size_t nmemb, register size_t size, int (*cmp)(const void *, const void * ) );
__attribute__ ((visibility("default"))) void php_register_pre_request_shutdown(void (*func)(void *), void *userdata);
__attribute__ ((visibility("default"))) void php_com_initialize(void);
__attribute__ ((visibility("default"))) char *php_get_current_user(void);

# 397 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_output.h" 1
# 50 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_output.h"
typedef enum _php_output_handler_status_t {
 PHP_OUTPUT_HANDLER_FAILURE,
 PHP_OUTPUT_HANDLER_SUCCESS,
 PHP_OUTPUT_HANDLER_NO_DATA
} php_output_handler_status_t;
# 72 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_output.h"
typedef enum _php_output_handler_hook_t {
 PHP_OUTPUT_HANDLER_HOOK_GET_OPAQ,
 PHP_OUTPUT_HANDLER_HOOK_GET_FLAGS,
 PHP_OUTPUT_HANDLER_HOOK_GET_LEVEL,
 PHP_OUTPUT_HANDLER_HOOK_IMMUTABLE,
 PHP_OUTPUT_HANDLER_HOOK_DISABLE,

 PHP_OUTPUT_HANDLER_HOOK_LAST
} php_output_handler_hook_t;
# 90 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_output.h"
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
# 176 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_output.h"


extern const char php_output_default_handler_name[sizeof("default output handler")];
extern const char php_output_devnull_handler_name[sizeof("null output handler")];
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_output.h"
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
# 398 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h"
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

# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h" 2


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







# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h" 2


__attribute__ ((visibility("default"))) int php_file_le_stream(void);
__attribute__ ((visibility("default"))) int php_file_le_pstream(void);
__attribute__ ((visibility("default"))) int php_file_le_stream_filter(void);

# 98 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h"
typedef struct _php_stream php_stream;
typedef struct _php_stream_wrapper php_stream_wrapper;
typedef struct _php_stream_context php_stream_context;
typedef struct _php_stream_filter php_stream_filter;

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_context.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_context.h"
typedef void (*php_stream_notification_func)(php_stream_context *context,
  int notifycode, int severity,
  char *xmsg, int xcode,
  size_t bytes_sofar, size_t bytes_max,
  void * ptr );
# 43 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_context.h"
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

# 95 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_context.h"

__attribute__ ((visibility("default"))) void php_stream_notification_notify(php_stream_context *context, int notifycode, int severity,
  char *xmsg, int xcode, size_t bytes_sofar, size_t bytes_max, void * ptr );
__attribute__ ((visibility("default"))) php_stream_context *php_stream_context_set(php_stream *stream, php_stream_context *context);

# 104 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_filter_api.h" 1
# 41 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_filter_api.h"
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

# 144 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_filter_api.h"
typedef struct _php_stream_filter_factory {
 php_stream_filter *(*create_filter)(const char *filtername, zval *filterparams, int persistent );
} php_stream_filter_factory;


__attribute__ ((visibility("default"))) int php_stream_filter_register_factory(const char *filterpattern, php_stream_filter_factory *factory );
__attribute__ ((visibility("default"))) int php_stream_filter_unregister_factory(const char *filterpattern );
__attribute__ ((visibility("default"))) int php_stream_filter_register_factory_volatile(const char *filterpattern, php_stream_filter_factory *factory );
__attribute__ ((visibility("default"))) php_stream_filter *php_stream_filter_create(const char *filtername, zval *filterparams, int persistent );

# 105 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h" 2

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
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h"
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

# 265 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h"

__attribute__ ((visibility("default"))) php_stream *php_stream_encloses(php_stream *enclosing, php_stream *enclosed);

__attribute__ ((visibility("default"))) int _php_stream_free_enclosed(php_stream *stream_enclosed, int close_options );

__attribute__ ((visibility("default"))) int php_stream_from_persistent_id(const char *persistent_id, php_stream **stream );
# 285 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h"
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





# 417 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h"

__attribute__ ((visibility("default"))) int _php_stream_truncate_set_size(php_stream *stream, size_t newsize );


# 437 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h"

__attribute__((deprecated))
__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_stream(php_stream *src, php_stream *dest, size_t maxlen );

__attribute__ ((visibility("default"))) int _php_stream_copy_to_stream_ex(php_stream *src, php_stream *dest, size_t maxlen, size_t *len );





__attribute__ ((visibility("default"))) size_t _php_stream_copy_to_mem(php_stream *src, char **buf, size_t maxlen,
  int persistent );



__attribute__ ((visibility("default"))) size_t _php_stream_passthru(php_stream * src );



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_transport.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_transport.h"
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

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_transport.h" 2


typedef php_stream *(php_stream_transport_factory_func)(const char *proto, long protolen,
  char *resourcename, long resourcenamelen,
  const char *persistent_id, int options, int flags,
  struct timeval *timeout,
  php_stream_context *context );
typedef php_stream_transport_factory_func *php_stream_transport_factory;


__attribute__ ((visibility("default"))) int php_stream_xport_register(char *protocol, php_stream_transport_factory factory );
__attribute__ ((visibility("default"))) int php_stream_xport_unregister(char *protocol );
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_transport.h"
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

# 457 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_plain_wrapper.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_plain_wrapper.h"
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



# 458 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_glob_wrapper.h" 1
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_glob_wrapper.h"
__attribute__ ((visibility("default"))) extern php_stream_wrapper php_glob_stream_wrapper;
__attribute__ ((visibility("default"))) extern php_stream_ops php_glob_stream_ops;



__attribute__ ((visibility("default"))) char* _php_glob_stream_get_path(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) char* _php_glob_stream_get_pattern(php_stream *stream, int copy, int *plen );


__attribute__ ((visibility("default"))) int _php_glob_stream_get_count(php_stream *stream, int *pflags );



# 459 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_userspace.h" 1
# 23 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_userspace.h"
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_ops;
__attribute__ ((visibility("default"))) extern php_stream_ops php_stream_userspace_dir_ops;
# 460 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_mmap.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_mmap.h"
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
# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/streams/php_stream_mmap.h"

__attribute__ ((visibility("default"))) char *_php_stream_mmap_range(php_stream *stream, size_t offset, size_t length, php_stream_mmap_operation_t mode, size_t *mapped_len );



__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap(php_stream *stream );


__attribute__ ((visibility("default"))) int _php_stream_mmap_unmap_ex(php_stream *stream, off_t readden );


# 461 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h" 2
# 477 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h"

__attribute__ ((visibility("default"))) int _php_stream_cast(php_stream *stream, int castas, void **ret, int show_err );

# 541 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h"
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
# 568 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h"
__attribute__ ((visibility("default"))) void php_stream_wrapper_log_error(php_stream_wrapper *wrapper, int options , const char *fmt, ...) __attribute__ ((format(printf, 3, 4)));
# 579 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h"
__attribute__ ((visibility("default"))) int _php_stream_make_seekable(php_stream *origstream, php_stream **newstream, int flags );



__attribute__ ((visibility("default"))) HashTable *_php_stream_get_url_stream_wrappers_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_stream_get_url_stream_wrappers_hash_global(void);
__attribute__ ((visibility("default"))) HashTable *_php_get_stream_filters_hash(void);

__attribute__ ((visibility("default"))) HashTable *php_get_stream_filters_hash_global(void);
extern php_stream_wrapper_ops *php_stream_user_wrapper_ops;

# 401 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_memory_streams.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_memory_streams.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_streams.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_memory_streams.h" 2
# 42 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_memory_streams.h"

__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_create(int mode );
__attribute__ ((visibility("default"))) php_stream *_php_stream_memory_open(int mode, char *buf, size_t length );
__attribute__ ((visibility("default"))) char *_php_stream_memory_get_buffer(php_stream *stream, size_t *length );

__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_create(int mode, size_t max_memory_usage );
__attribute__ ((visibility("default"))) php_stream *_php_stream_temp_open(int mode, size_t max_memory_usage, char *buf, size_t length );


extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_memory_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_temp_ops;
extern __attribute__ ((visibility("default"))) php_stream_ops php_stream_rfc2397_ops;
extern __attribute__ ((visibility("default"))) php_stream_wrapper php_stream_rfc2397_wrapper;
# 402 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/fopen_wrappers.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/fopen_wrappers.h"

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_globals.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_globals.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_globals.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_globals.h" 2

typedef struct _php_core_globals php_core_globals;






extern __attribute__ ((visibility("default"))) struct _php_core_globals core_globals;
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_globals.h"
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
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/fopen_wrappers.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_ini.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_ini.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_ini.h" 1
# 63 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_ini.h"
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

# 175 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_ini.h"

__attribute__ ((visibility("default"))) int OnUpdateBool(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLong(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateLongGEZero(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateReal(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateString(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );
__attribute__ ((visibility("default"))) int OnUpdateStringUnempty(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );

# 195 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_ini.h"
typedef void (*zend_ini_parser_cb_t)(zval *arg1, zval *arg2, zval *arg3, int callback_type, void *arg );

__attribute__ ((visibility("default"))) int zend_parse_ini_file(zend_file_handle *fh, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );
__attribute__ ((visibility("default"))) int zend_parse_ini_string(char *str, zend_bool unbuffered_errors, int scanner_mode, zend_ini_parser_cb_t ini_parser_cb, void *arg );







typedef struct _zend_ini_parser_param {
 zend_ini_parser_cb_t ini_parser_cb;
 void *arg;
} zend_ini_parser_param;
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_ini.h" 2


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

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/fopen_wrappers.h" 2

__attribute__ ((visibility("default"))) int php_fopen_primary_script(zend_file_handle *file_handle );
__attribute__ ((visibility("default"))) char *expand_filepath(const char *filepath, char *real_path );
__attribute__ ((visibility("default"))) char *expand_filepath_ex(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len );
__attribute__ ((visibility("default"))) char *expand_filepath_with_mode(const char *filepath, char *real_path, const char *relative_to, size_t relative_to_len, int realpath_mode );

__attribute__ ((visibility("default"))) int php_check_open_basedir(const char *path );
__attribute__ ((visibility("default"))) int php_check_open_basedir_ex(const char *path, int warn );
__attribute__ ((visibility("default"))) int php_check_specific_open_basedir(const char *basedir, const char *path );
# 47 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/fopen_wrappers.h"
__attribute__ ((visibility("default"))) int php_check_safe_mode_include_dir(const char *path );

__attribute__ ((visibility("default"))) char *php_resolve_path(const char *filename, int filename_len, const char *path );

__attribute__ ((visibility("default"))) FILE *php_fopen_with_path(const char *filename, const char *mode, const char *path, char **opened_path );

__attribute__ ((visibility("default"))) char *php_strip_url_passwd(char *path);

__attribute__ ((visibility("default"))) int OnUpdateBaseDir(zend_ini_entry *entry, char *new_value, uint new_value_length, void *mh_arg1, void *mh_arg2, void *mh_arg3, int stage );

# 403 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_virtual_cwd.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_virtual_cwd.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/TSRM.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_virtual_cwd.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_config_common.h" 1
# 13 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_config_common.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/include/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_config.h" 2
# 14 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_config_common.h" 2
# 41 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_config_common.h"
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 42 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_config_common.h" 2
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_virtual_cwd.h" 2






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


# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_virtual_cwd.h" 2
# 90 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_virtual_cwd.h"
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




# 91 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_virtual_cwd.h" 2
# 145 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_virtual_cwd.h"
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
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_utime(const char *filename, struct utimbuf *buf );

__attribute__ ((visibility("default"))) int virtual_chmod(const char *filename, mode_t mode );

__attribute__ ((visibility("default"))) int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 204 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/TSRM/tsrm_virtual_cwd.h"
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
# 407 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_constants.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_constants.h"

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

# 409 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2






# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_reentrancy.h" 1
# 24 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_reentrancy.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_reentrancy.h" 2





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



# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_reentrancy.h" 2
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_reentrancy.h"

# 119 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_reentrancy.h"

# 416 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php.h" 2
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/main/php_ini.h" 1
# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.h"
extern zend_module_entry reflection_module_entry;





extern __attribute__ ((visibility("default"))) zend_class_entry *reflector_ptr;
extern __attribute__ ((visibility("default"))) zend_class_entry *reflection_exception_ptr;
extern __attribute__ ((visibility("default"))) zend_class_entry *reflection_ptr;
extern __attribute__ ((visibility("default"))) zend_class_entry *reflection_function_abstract_ptr;
extern __attribute__ ((visibility("default"))) zend_class_entry *reflection_function_ptr;
extern __attribute__ ((visibility("default"))) zend_class_entry *reflection_parameter_ptr;
extern __attribute__ ((visibility("default"))) zend_class_entry *reflection_class_ptr;
extern __attribute__ ((visibility("default"))) zend_class_entry *reflection_object_ptr;
extern __attribute__ ((visibility("default"))) zend_class_entry *reflection_method_ptr;
extern __attribute__ ((visibility("default"))) zend_class_entry *reflection_property_ptr;
extern __attribute__ ((visibility("default"))) zend_class_entry *reflection_extension_ptr;
extern __attribute__ ((visibility("default"))) zend_class_entry *reflection_zend_extension_ptr;

__attribute__ ((visibility("default"))) void zend_reflection_class_factory(zend_class_entry *ce, zval *object );


# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/standard/info.h" 1
# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/standard/info.h"

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

# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c" 2



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_exceptions.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_exceptions.h"


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


# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_operators.h" 1
# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_interfaces.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_interfaces.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_API.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_interfaces.h" 2



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
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_interfaces.h"
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


# 41 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_closures.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_closures.h"




void zend_register_closure_ce(void);

extern __attribute__ ((visibility("default"))) zend_class_entry *zend_ce_closure;

__attribute__ ((visibility("default"))) void zend_create_closure(zval *res, zend_function *op_array, zend_class_entry *scope, zval *this_ptr );
__attribute__ ((visibility("default"))) zend_function *zend_get_closure_invoke_method(zval *obj );
__attribute__ ((visibility("default"))) const zend_function *zend_get_closure_method_def(zval *obj );
__attribute__ ((visibility("default"))) zval* zend_get_closure_this_ptr(zval *obj );


# 42 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_extensions.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_extensions.h"
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

# 111 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/Zend/zend_extensions.h"
__attribute__ ((visibility("default"))) extern zend_llist zend_extensions;

void zend_extension_dtor(zend_extension *extension);
void zend_append_version_info(const zend_extension *extension);
int zend_startup_extensions_mechanism(void);
int zend_startup_extensions(void);
void zend_shutdown_extensions(void);


__attribute__ ((visibility("default"))) int zend_load_extension(const char *path);
__attribute__ ((visibility("default"))) int zend_register_extension(zend_extension *new_extension, void * handle);
__attribute__ ((visibility("default"))) zend_extension *zend_get_extension(const char *extension_name);

# 43 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c" 2
# 54 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c"
__attribute__ ((visibility("default"))) zend_class_entry *reflector_ptr;
__attribute__ ((visibility("default"))) zend_class_entry *reflection_exception_ptr;
__attribute__ ((visibility("default"))) zend_class_entry *reflection_ptr;
__attribute__ ((visibility("default"))) zend_class_entry *reflection_function_abstract_ptr;
__attribute__ ((visibility("default"))) zend_class_entry *reflection_function_ptr;
__attribute__ ((visibility("default"))) zend_class_entry *reflection_parameter_ptr;
__attribute__ ((visibility("default"))) zend_class_entry *reflection_class_ptr;
__attribute__ ((visibility("default"))) zend_class_entry *reflection_object_ptr;
__attribute__ ((visibility("default"))) zend_class_entry *reflection_method_ptr;
__attribute__ ((visibility("default"))) zend_class_entry *reflection_property_ptr;
__attribute__ ((visibility("default"))) zend_class_entry *reflection_extension_ptr;
__attribute__ ((visibility("default"))) zend_class_entry *reflection_zend_extension_ptr;
# 115 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c"
typedef struct _string {
 char *string;
 int len;
 int alloced;
} string;

static void string_init(string *str)
{
 str->string = (char *) _emalloc((1024) );
 str->len = 1;
 str->alloced = 1024;
 *str->string = '\0';
}

static string *string_printf(string *str, const char *format, ...)
{
 int len;
 va_list arg;
 char *s_tmp;

 __builtin_va_start(arg,format);
 len = zend_vspprintf(&s_tmp, 0, format, arg);
 if (len) {
  register int nlen = (str->len + len + (1024 - 1)) & ~(1024 - 1);
  if (str->alloced < nlen) {
   str->alloced = nlen;
   str->string = _erealloc((str->string), (str->alloced), 0 );
  }
  memcpy(str->string + str->len - 1, s_tmp, len + 1);
  str->len += len;
 }
 _efree((s_tmp) );
 __builtin_va_end(arg);
 return str;
}

static string *string_write(string *str, char *buf, int len)
{
 register int nlen = (str->len + len + (1024 - 1)) & ~(1024 - 1);
 if (str->alloced < nlen) {
  str->alloced = nlen;
  str->string = _erealloc((str->string), (str->alloced), 0 );
 }
 memcpy(str->string + str->len - 1, buf, len);
 str->len += len;
 str->string[str->len - 1] = '\0';
 return str;
}

static string *string_append(string *str, string *append)
{
 if (append->len > 1) {
  string_write(str, append->string, append->len - 1);
 }
 return str;
}

static void string_free(string *str)
{
 _efree((str->string) );
 str->len = 0;
 str->alloced = 0;
 str->string = ((void *)0);
}





typedef struct _property_reference {
 zend_class_entry *ce;
 zend_property_info prop;
} property_reference;


typedef struct _parameter_reference {
 zend_uint offset;
 zend_uint required;
 struct _zend_arg_info *arg_info;
 zend_function *fptr;
} parameter_reference;

typedef enum {
 REF_TYPE_OTHER,
 REF_TYPE_FUNCTION,
 REF_TYPE_PARAMETER,
 REF_TYPE_PROPERTY,
 REF_TYPE_DYNAMIC_PROPERTY
} reflection_type_t;


typedef struct {
 zend_object zo;
 void *ptr;
 reflection_type_t ref_type;
 zval *obj;
 zend_class_entry *ce;
 unsigned int ignore_visibility:1;
} reflection_object;



static zend_object_handlers reflection_object_handlers;

static void _default_get_entry(zval *object, char *name, int name_len, zval *return_value )
{
 zval **value;

 if (zend_hash_find(((*object)).value.obj.handlers->get_properties(&(*object) ), name, name_len, (void **) &value) == -1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 do { do { (return_value)->value = (*(value))->value; (*return_value).type = (**(value)).type; } while (0); zval_set_refcount_p(return_value, 1); zval_unset_isref_p(return_value); } while (0); _zval_copy_ctor(((return_value)) );;
}
# 245 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c"
static void reflection_register_implement(zend_class_entry *class_entry, zend_class_entry *interface_entry )
{
 zend_uint num_interfaces = ++class_entry->num_interfaces;

 class_entry->interfaces = (zend_class_entry **) realloc(class_entry->interfaces, sizeof(zend_class_entry *) * num_interfaces);
 class_entry->interfaces[num_interfaces - 1] = interface_entry;
}


static zend_function *_copy_function(zend_function *fptr )
{
 if (fptr
  && fptr->type == 1
  && (fptr->internal_function.fn_flags & 0x200000) != 0)
 {
  zend_function *copy_fptr;
  copy_fptr = _emalloc((sizeof(zend_function)) );
  memcpy(copy_fptr, fptr, sizeof(zend_function));
  copy_fptr->internal_function.function_name = _estrdup((fptr->internal_function.function_name) );
  return copy_fptr;
 } else {

  return fptr;
 }
}


static void _free_function(zend_function *fptr )
{
 if (fptr
  && fptr->type == 1
  && (fptr->internal_function.fn_flags & 0x200000) != 0)
 {
  _efree(((char*)fptr->internal_function.function_name) );
  _efree((fptr) );
 }
}


static void reflection_free_objects_storage(void *object )
{
 reflection_object *intern = (reflection_object *) object;
 parameter_reference *reference;
 property_reference *prop_reference;

 if (intern->ptr) {
  switch (intern->ref_type) {
  case REF_TYPE_PARAMETER:
   reference = (parameter_reference*)intern->ptr;
   _free_function(reference->fptr );
   _efree((intern->ptr) );
   break;
  case REF_TYPE_FUNCTION:
   _free_function(intern->ptr );
   break;
  case REF_TYPE_PROPERTY:
   _efree((intern->ptr) );
   break;
  case REF_TYPE_DYNAMIC_PROPERTY:
   prop_reference = (property_reference*)intern->ptr;
   _efree(((char*)prop_reference->prop.name) );
   _efree((intern->ptr) );
   break;
  case REF_TYPE_OTHER:
   break;
  }
 }
 intern->ptr = ((void *)0);
 if (intern->obj) {
  _zval_ptr_dtor((&intern->obj) );
 }
 zend_objects_free_object_storage(object );
}


static zend_object_value reflection_objects_new(zend_class_entry *class_type )
{
 zend_object_value retval;
 reflection_object *intern;

 intern = _ecalloc((1), (sizeof(reflection_object)) );
 intern->zo.ce = class_type;

 zend_object_std_init(&intern->zo, class_type );
 object_properties_init(&intern->zo, class_type);
 retval.handle = zend_objects_store_put(intern, ((void *)0), reflection_free_objects_storage, ((void *)0) );
 retval.handlers = &reflection_object_handlers;
 return retval;
}


static zval * reflection_instantiate(zend_class_entry *pce, zval *object )
{
 if (!object) {
  do { (object) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(object))->u.buffered = ((void *)0); } while (0);
 }
 (*object).type = 5;
 _object_init_ex((object), (pce) );
 zval_set_refcount_p(object, 1);
 zval_set_isref_p(object);
 return object;
}


static void _const_string(string *str, char *name, zval *value, char *indent );
static void _function_string(string *str, zend_function *fptr, zend_class_entry *scope, char* indent );
static void _property_string(string *str, zend_property_info *prop, char *prop_name, char* indent );
static void _class_string(string *str, zend_class_entry *ce, zval *obj, char *indent );
static void _extension_string(string *str, zend_module_entry *module, char *indent );
static void _zend_extension_string(string *str, zend_extension *extension, char *indent );


static void _class_string(string *str, zend_class_entry *ce, zval *obj, char *indent )
{
 int count, count_static_props = 0, count_static_funcs = 0, count_shadow_props = 0;
 string sub_indent;

 string_init(&sub_indent);
 string_printf(&sub_indent, "%s    ", indent);


 if (ce->type == 2 && ce->info.user.doc_comment) {
  string_printf(str, "%s%s", indent, ce->info.user.doc_comment);
  string_write(str, "\n", 1);
 }

 if (obj) {
  string_printf(str, "%sObject of class [ ", indent);
 } else {
  char *kind = "Class";
  if (ce->ce_flags & 0x80) {
   kind = "Interface";
  } else if ((ce->ce_flags & 0x120) == 0x120) {
   kind = "Trait";
  }
  string_printf(str, "%s%s [ ", indent, kind);
 }
 string_printf(str, (ce->type == 2) ? "<user" : "<internal");
 if (ce->type == 1 && ce->info.internal.module) {
  string_printf(str, ":%s", ce->info.internal.module->name);
 }
 string_printf(str, "> ");
 if (ce->get_iterator != ((void *)0)) {
  string_printf(str, "<iterateable> ");
 }
 if (ce->ce_flags & 0x80) {
  string_printf(str, "interface ");
 } else if ((ce->ce_flags & 0x120) == 0x120) {
  string_printf(str, "trait ");
 } else {
  if (ce->ce_flags & (0x10|0x20)) {
   string_printf(str, "abstract ");
  }
  if (ce->ce_flags & 0x40) {
   string_printf(str, "final ");
  }
  string_printf(str, "class ");
 }
 string_printf(str, "%s", ce->name);
 if (ce->parent) {
  string_printf(str, " extends %s", ce->parent->name);
 }

 if (ce->num_interfaces) {
  zend_uint i;

  if (ce->ce_flags & 0x80) {
   string_printf(str, " extends %s", ce->interfaces[0]->name);
  } else {
   string_printf(str, " implements %s", ce->interfaces[0]->name);
  }
  for (i = 1; i < ce->num_interfaces; ++i) {
   string_printf(str, ", %s", ce->interfaces[i]->name);
  }
 }
 string_printf(str, " ] {\n");


 if (ce->type == 2) {
  string_printf(str, "%s  @@ %s %d-%d\n", indent, ce->info.user.filename,
      ce->info.user.line_start, ce->info.user.line_end);
 }


 if (&ce->constants_table) {
  zend_hash_apply_with_argument(&ce->constants_table, (apply_func_arg_t) zval_update_constant, (void*)1 );
  string_printf(str, "\n");
  count = zend_hash_num_elements(&ce->constants_table);
  string_printf(str, "%s  - Constants [%d] {\n", indent, count);
  if (count > 0) {
   HashPosition pos;
   zval **value;
   char *key;
   uint key_len;
   ulong num_index;

   zend_hash_internal_pointer_reset_ex(&ce->constants_table, &pos);

   while (zend_hash_get_current_data_ex(&ce->constants_table, (void **) &value, &pos) == 0) {
    zend_hash_get_current_key_ex(&ce->constants_table, &key, &key_len, &num_index, 0, &pos);

    _const_string(str, key, *value, indent );
    zend_hash_move_forward_ex(&ce->constants_table, &pos);
   }
  }
  string_printf(str, "%s  }\n", indent);
 }


 if (&ce->properties_info) {

  count = zend_hash_num_elements(&ce->properties_info);
  if (count > 0) {
   HashPosition pos;
   zend_property_info *prop;

   zend_hash_internal_pointer_reset_ex(&ce->properties_info, &pos);

   while (zend_hash_get_current_data_ex(&ce->properties_info, (void **) &prop, &pos) == 0) {
    if(prop->flags & 0x20000) {
     count_shadow_props++;
    } else if (prop->flags & 0x01) {
     count_static_props++;
    }
    zend_hash_move_forward_ex(&ce->properties_info, &pos);
   }
  }


  string_printf(str, "\n%s  - Static properties [%d] {\n", indent, count_static_props);
  if (count_static_props > 0) {
   HashPosition pos;
   zend_property_info *prop;

   zend_hash_internal_pointer_reset_ex(&ce->properties_info, &pos);

   while (zend_hash_get_current_data_ex(&ce->properties_info, (void **) &prop, &pos) == 0) {
    if ((prop->flags & 0x01) && !(prop->flags & 0x20000)) {
     _property_string(str, prop, ((void *)0), sub_indent.string );
    }

    zend_hash_move_forward_ex(&ce->properties_info, &pos);
   }
  }
  string_printf(str, "%s  }\n", indent);
 }


 if (&ce->function_table) {

  count = zend_hash_num_elements(&ce->function_table);
  if (count > 0) {
   HashPosition pos;
   zend_function *mptr;

   zend_hash_internal_pointer_reset_ex(&ce->function_table, &pos);

   while (zend_hash_get_current_data_ex(&ce->function_table, (void **) &mptr, &pos) == 0) {
    if (mptr->common.fn_flags & 0x01
     && ((mptr->common.fn_flags & 0x400) == 0 || mptr->common.scope == ce))
    {
     count_static_funcs++;
    }
    zend_hash_move_forward_ex(&ce->function_table, &pos);
   }
  }


  string_printf(str, "\n%s  - Static methods [%d] {", indent, count_static_funcs);
  if (count_static_funcs > 0) {
   HashPosition pos;
   zend_function *mptr;

   zend_hash_internal_pointer_reset_ex(&ce->function_table, &pos);

   while (zend_hash_get_current_data_ex(&ce->function_table, (void **) &mptr, &pos) == 0) {
    if (mptr->common.fn_flags & 0x01
     && ((mptr->common.fn_flags & 0x400) == 0 || mptr->common.scope == ce))
    {
     string_printf(str, "\n");
     _function_string(str, mptr, ce, sub_indent.string );
    }
    zend_hash_move_forward_ex(&ce->function_table, &pos);
   }
  } else {
   string_printf(str, "\n");
  }
  string_printf(str, "%s  }\n", indent);
 }


 if (&ce->properties_info) {
  count = zend_hash_num_elements(&ce->properties_info) - count_static_props - count_shadow_props;
  string_printf(str, "\n%s  - Properties [%d] {\n", indent, count);
  if (count > 0) {
   HashPosition pos;
   zend_property_info *prop;

   zend_hash_internal_pointer_reset_ex(&ce->properties_info, &pos);

   while (zend_hash_get_current_data_ex(&ce->properties_info, (void **) &prop, &pos) == 0) {
    if (!(prop->flags & (0x01|0x20000))) {
     _property_string(str, prop, ((void *)0), sub_indent.string );
    }
    zend_hash_move_forward_ex(&ce->properties_info, &pos);
   }
  }
  string_printf(str, "%s  }\n", indent);
 }

 if (obj && (*obj).value.obj.handlers->get_properties) {
  string dyn;
  HashTable *properties = (*obj).value.obj.handlers->get_properties(obj );
  HashPosition pos;
  zval **prop;

  string_init(&dyn);
  count = 0;

  if (properties && zend_hash_num_elements(properties)) {
   zend_hash_internal_pointer_reset_ex(properties, &pos);

   while (zend_hash_get_current_data_ex(properties, (void **) &prop, &pos) == 0) {
    char *prop_name;
    uint prop_name_size;
    ulong index;

    if (zend_hash_get_current_key_ex(properties, &prop_name, &prop_name_size, &index, 1, &pos) == 1) {
     if (prop_name_size && prop_name[0]) {
      if (!zend_hash_quick_exists(&ce->properties_info, prop_name, prop_name_size, zend_get_hash_value(prop_name, prop_name_size))) {
       count++;
       _property_string(&dyn, ((void *)0), prop_name, sub_indent.string );
      }
     }
     _efree((prop_name) );
    }
    zend_hash_move_forward_ex(properties, &pos);
   }
  }

  string_printf(str, "\n%s  - Dynamic properties [%d] {\n", indent, count);
  string_append(str, &dyn);
  string_printf(str, "%s  }\n", indent);
  string_free(&dyn);
 }


 if (&ce->function_table) {
  count = zend_hash_num_elements(&ce->function_table) - count_static_funcs;
  if (count > 0) {
   HashPosition pos;
   zend_function *mptr;
   string dyn;

   count = 0;
   string_init(&dyn);
   zend_hash_internal_pointer_reset_ex(&ce->function_table, &pos);

   while (zend_hash_get_current_data_ex(&ce->function_table, (void **) &mptr, &pos) == 0) {
    if ((mptr->common.fn_flags & 0x01) == 0
     && ((mptr->common.fn_flags & 0x400) == 0 || mptr->common.scope == ce))
    {
     char *key;
     uint key_len;
     ulong num_index;
     uint len = strlen(mptr->common.function_name);


     if ((mptr->common.fn_flags & 0x2000) == 0
      || mptr->common.scope == ce
      || zend_hash_get_current_key_ex(&ce->function_table, &key, &key_len, &num_index, 0, &pos) != 1
      || zend_binary_strcasecmp(key, key_len-1, mptr->common.function_name, len) == 0)
     {
      zend_function *closure;

      if (ce == zend_ce_closure && obj && (len == sizeof("__invoke")-1)
       && memcmp(mptr->common.function_name, "__invoke", sizeof("__invoke")-1) == 0
       && (closure = zend_get_closure_invoke_method(obj )) != ((void *)0))
      {
       mptr = closure;
      } else {
       closure = ((void *)0);
      }
      string_printf(&dyn, "\n");
      _function_string(&dyn, mptr, ce, sub_indent.string );
      count++;
      _free_function(closure );
     }
    }
    zend_hash_move_forward_ex(&ce->function_table, &pos);
   }
   string_printf(str, "\n%s  - Methods [%d] {", indent, count);
   if (!count) {
    string_printf(str, "\n");
   }
   string_append(str, &dyn);
   string_free(&dyn);
  } else {
   string_printf(str, "\n%s  - Methods [0] {\n", indent);
  }
  string_printf(str, "%s  }\n", indent);
 }

 string_printf(str, "%s}\n", indent);
 string_free(&sub_indent);
}



static void _const_string(string *str, char *name, zval *value, char *indent )
{
 char *type;
 zval value_copy;
 int use_copy;

 type = zend_zval_type_name(value);

 zend_make_printable_zval(value, &value_copy, &use_copy);
 if (use_copy) {
  value = &value_copy;
 }

 string_printf(str, "%s    Constant [ %s %s ] { %s }\n",
     indent, type, name, (*value).value.str.val);

 if (use_copy) {
  _zval_dtor((value) );
 }
}



static zend_op* _get_recv_op(zend_op_array *op_array, zend_uint offset)
{
 zend_op *op = op_array->opcodes;
 zend_op *end = op + op_array->last;

 ++offset;
 while (op < end) {
  if ((op->opcode == 63 || op->opcode == 64)
   && op->op1.num == (long)offset)
  {
   return op;
  }
  ++op;
 }
 return ((void *)0);
}



static void _parameter_string(string *str, zend_function *fptr, struct _zend_arg_info *arg_info, zend_uint offset, zend_uint required, char* indent )
{
 string_printf(str, "Parameter #%d [ ", offset);
 if (offset >= required) {
  string_printf(str, "<optional> ");
 } else {
  string_printf(str, "<required> ");
 }
 if (arg_info->class_name) {
  string_printf(str, "%s ", arg_info->class_name);
  if (arg_info->allow_null) {
   string_printf(str, "or NULL ");
  }
 } else if (arg_info->type_hint) {
  string_printf(str, "%s ", zend_get_type_by_const(arg_info->type_hint));
  if (arg_info->allow_null) {
   string_printf(str, "or NULL ");
  }
 }
 if (arg_info->pass_by_reference) {
  string_write(str, "&", sizeof("&")-1);
 }
 if (arg_info->name) {
  string_printf(str, "$%s", arg_info->name);
 } else {
  string_printf(str, "$param%d", offset);
 }
 if (fptr->type == 2 && offset >= required) {
  zend_op *precv = _get_recv_op((zend_op_array*)fptr, offset);
  if (precv && precv->opcode == 64 && precv->op2_type != (1<<3)) {
   zval *zv, zv_copy;
   int use_copy;
   string_write(str, " = ", sizeof(" = ")-1);
   do { (zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(zv))->u.buffered = ((void *)0); } while (0);
   *zv = *precv->op2.zv;
   _zval_copy_ctor((zv) );
   (zv)->refcount__gc = 1; (zv)->is_ref__gc = 0;;
   zval_update_constant_ex(&zv, (void*)1, fptr->common.scope );
   if ((*zv).type == 3) {
    if ((*zv).value.lval) {
     string_write(str, "true", sizeof("true")-1);
    } else {
     string_write(str, "false", sizeof("false")-1);
    }
   } else if ((*zv).type == 0) {
    string_write(str, "NULL", sizeof("NULL")-1);
   } else if ((*zv).type == 6) {
    string_write(str, "'", sizeof("'")-1);
    string_write(str, (*zv).value.str.val, ((((*zv).value.str.len)<(15))?((*zv).value.str.len):(15)));
    if ((*zv).value.str.len > 15) {
     string_write(str, "...", sizeof("...")-1);
    }
    string_write(str, "'", sizeof("'")-1);
   } else if ((*zv).type == 4) {
    string_write(str, "Array", sizeof("Array")-1);
   } else {
    zend_make_printable_zval(zv, &zv_copy, &use_copy);
    string_write(str, (zv_copy).value.str.val, (zv_copy).value.str.len);
    if (use_copy) {
     _zval_dtor((&zv_copy) );
    }
   }
   _zval_ptr_dtor((&zv) );
  }
 }
 string_write(str, " ]", sizeof(" ]")-1);
}



static void _function_parameter_string(string *str, zend_function *fptr, char* indent )
{
 struct _zend_arg_info *arg_info = fptr->common.arg_info;
 zend_uint i, required = fptr->common.required_num_args;

 if (!arg_info) {
  return;
 }

 string_printf(str, "\n");
 string_printf(str, "%s- Parameters [%d] {\n", indent, fptr->common.num_args);
 for (i = 0; i < fptr->common.num_args; i++) {
  string_printf(str, "%s  ", indent);
  _parameter_string(str, fptr, arg_info, i, required, indent );
  string_write(str, "\n", sizeof("\n")-1);
  arg_info++;
 }
 string_printf(str, "%s}\n", indent);
}



static void _function_closure_string(string *str, zend_function *fptr, char* indent )
{
 zend_uint i, count;
 ulong num_index;
 char *key;
 uint key_len;
 HashTable *static_variables;
 HashPosition pos;

 if (fptr->type != 2 || !fptr->op_array.static_variables) {
  return;
 }

 static_variables = fptr->op_array.static_variables;
 count = zend_hash_num_elements(static_variables);

 if (!count) {
  return;
 }

 string_printf(str, "\n");
 string_printf(str, "%s- Bound Variables [%d] {\n", indent, zend_hash_num_elements(static_variables));
 zend_hash_internal_pointer_reset_ex(static_variables, &pos);
 i = 0;
 while (i < count) {
  zend_hash_get_current_key_ex(static_variables, &key, &key_len, &num_index, 0, &pos);
  string_printf(str, "%s    Variable #%d [ $%s ]\n", indent, i++, key);
  zend_hash_move_forward_ex(static_variables, &pos);
 }
 string_printf(str, "%s}\n", indent);
}



static void _function_string(string *str, zend_function *fptr, zend_class_entry *scope, char* indent )
{
 string param_indent;
 zend_function *overwrites;
 char *lc_name;
 unsigned int lc_name_len;





 if (fptr->type == 2 && fptr->op_array.doc_comment) {
  string_printf(str, "%s%s\n", indent, fptr->op_array.doc_comment);
 }

 string_write(str, indent, strlen(indent));
 string_printf(str, fptr->common.fn_flags & 0x100000 ? "Closure [ " : (fptr->common.scope ? "Method [ " : "Function [ "));
 string_printf(str, (fptr->type == 2) ? "<user" : "<internal");
 if (fptr->common.fn_flags & 0x40000) {
  string_printf(str, ", deprecated");
 }
 if (fptr->type == 1 && ((zend_internal_function*)fptr)->module) {
  string_printf(str, ":%s", ((zend_internal_function*)fptr)->module->name);
 }

 if (scope && fptr->common.scope) {
  if (fptr->common.scope != scope) {
   string_printf(str, ", inherits %s", fptr->common.scope->name);
  } else if (fptr->common.scope->parent) {
   lc_name_len = strlen(fptr->common.function_name);
   lc_name = zend_str_tolower_dup(fptr->common.function_name, lc_name_len);
   if (zend_hash_find(&fptr->common.scope->parent->function_table, lc_name, lc_name_len + 1, (void**) &overwrites) == 0) {
    if (fptr->common.scope != overwrites->common.scope) {
     string_printf(str, ", overwrites %s", overwrites->common.scope->name);
    }
   }
   _efree((lc_name) );
  }
 }
 if (fptr->common.prototype && fptr->common.prototype->common.scope) {
  string_printf(str, ", prototype %s", fptr->common.prototype->common.scope->name);
 }
 if (fptr->common.fn_flags & 0x2000) {
  string_printf(str, ", ctor");
 }
 if (fptr->common.fn_flags & 0x4000) {
  string_printf(str, ", dtor");
 }
 string_printf(str, "> ");

 if (fptr->common.fn_flags & 0x02) {
  string_printf(str, "abstract ");
 }
 if (fptr->common.fn_flags & 0x04) {
  string_printf(str, "final ");
 }
 if (fptr->common.fn_flags & 0x01) {
  string_printf(str, "static ");
 }

 if (fptr->common.scope) {

  switch (fptr->common.fn_flags & (0x100 | 0x200 | 0x400)) {
   case 0x100:
    string_printf(str, "public ");
    break;
   case 0x400:
    string_printf(str, "private ");
    break;
   case 0x200:
    string_printf(str, "protected ");
    break;
   default:
    string_printf(str, "<visibility error> ");
    break;
  }
  string_printf(str, "method ");
 } else {
  string_printf(str, "function ");
 }

 if (fptr->op_array.fn_flags & 0x4000000) {
  string_printf(str, "&");
 }
 string_printf(str, "%s ] {\n", fptr->common.function_name);

 if (fptr->type == 2) {
  string_printf(str, "%s  @@ %s %d - %d\n", indent,
      fptr->op_array.filename,
      fptr->op_array.line_start,
      fptr->op_array.line_end);
 }
 string_init(&param_indent);
 string_printf(&param_indent, "%s  ", indent);
 if (fptr->common.fn_flags & 0x100000) {
  _function_closure_string(str, fptr, param_indent.string );
 }
 _function_parameter_string(str, fptr, param_indent.string );
 string_free(&param_indent);
 string_printf(str, "%s}\n", indent);
}



static void _property_string(string *str, zend_property_info *prop, char *prop_name, char* indent )
{
 const char *class_name;

 string_printf(str, "%sProperty [ ", indent);
 if (!prop) {
  string_printf(str, "<dynamic> public $%s", prop_name);
 } else {
  if (!(prop->flags & 0x01)) {
   if (prop->flags & 0x1000) {
    string_write(str, "<implicit> ", sizeof("<implicit> ") - 1);
   } else {
    string_write(str, "<default> ", sizeof("<default> ") - 1);
   }
  }


  switch (prop->flags & (0x100 | 0x200 | 0x400)) {
   case 0x100:
    string_printf(str, "public ");
    break;
   case 0x400:
    string_printf(str, "private ");
    break;
   case 0x200:
    string_printf(str, "protected ");
    break;
  }
  if(prop->flags & 0x01) {
   string_printf(str, "static ");
  }

  zend_unmangle_property_name(prop->name, prop->name_length, &class_name, (const char**)&prop_name);
  string_printf(str, "$%s", prop_name);
 }

 string_printf(str, " ]\n");
}


static int _extension_ini_string(zend_ini_entry *ini_entry , int num_args, va_list args, zend_hash_key *hash_key)
{
 string *str = __builtin_va_arg(args,string *);
 char *indent = __builtin_va_arg(args,char *);
 int number = __builtin_va_arg(args,int);
 char *comma = "";

 if (number == ini_entry->module_number) {
  string_printf(str, "    %sEntry [ %s <", indent, ini_entry->name);
  if (ini_entry->modifiable == ((1<<0)|(1<<1)|(1<<2))) {
   string_printf(str, "ALL");
  } else {
   if (ini_entry->modifiable & (1<<0)) {
    string_printf(str, "USER");
    comma = ",";
   }
   if (ini_entry->modifiable & (1<<1)) {
    string_printf(str, "%sPERDIR", comma);
    comma = ",";
   }
   if (ini_entry->modifiable & (1<<2)) {
    string_printf(str, "%sSYSTEM", comma);
   }
  }

  string_printf(str, "> ]\n");
  string_printf(str, "    %s  Current = '%s'\n", indent, ini_entry->value ? ini_entry->value : "");
  if (ini_entry->modified) {
   string_printf(str, "    %s  Default = '%s'\n", indent, ini_entry->orig_value ? ini_entry->orig_value : "");
  }
  string_printf(str, "    %s}\n", indent);
 }
 return 0;
}


static int _extension_class_string(zend_class_entry **pce , int num_args, va_list args, zend_hash_key *hash_key)
{
 string *str = __builtin_va_arg(args,string *);
 char *indent = __builtin_va_arg(args,char *);
 struct _zend_module_entry *module = __builtin_va_arg(args,struct _zend_module_entry*);
 int *num_classes = __builtin_va_arg(args,int*);

 if (((*pce)->type == 1) && (*pce)->info.internal.module && !strcasecmp((*pce)->info.internal.module->name, module->name)) {
  string_printf(str, "\n");
  _class_string(str, *pce, ((void *)0), indent );
  (*num_classes)++;
 }
 return 0;
}


static int _extension_const_string(zend_constant *constant , int num_args, va_list args, zend_hash_key *hash_key)
{
 string *str = __builtin_va_arg(args,string *);
 char *indent = __builtin_va_arg(args,char *);
 struct _zend_module_entry *module = __builtin_va_arg(args,struct _zend_module_entry*);
 int *num_classes = __builtin_va_arg(args,int*);

 if (constant->module_number == module->module_number) {
  _const_string(str, constant->name, &constant->value, indent );
  (*num_classes)++;
 }
 return 0;
}



static void _extension_string(string *str, zend_module_entry *module, char *indent )
{
 string_printf(str, "%sExtension [ ", indent);
 if (module->type == 1) {
  string_printf(str, "<persistent>");
 }
 if (module->type == 2) {
  string_printf(str, "<temporary>" );
 }
 string_printf(str, " extension #%d %s version %s ] {\n",
     module->module_number, module->name,
     (module->version == ((void *)0)) ? "<no_version>" : module->version);

 if (module->deps) {
  const zend_module_dep* dep = module->deps;

  string_printf(str, "\n  - Dependencies {\n");

  while(dep->name) {
   string_printf(str, "%s    Dependency [ %s (", indent, dep->name);

   switch(dep->type) {
   case 1:
    string_write(str, "Required", sizeof("Required") - 1);
    break;
   case 2:
    string_write(str, "Conflicts", sizeof("Conflicts") - 1);
    break;
   case 3:
    string_write(str, "Optional", sizeof("Optional") - 1);
    break;
   default:
    string_write(str, "Error", sizeof("Error") - 1);
    break;
   }

   if (dep->rel) {
    string_printf(str, " %s", dep->rel);
   }
   if (dep->version) {
    string_printf(str, " %s", dep->version);
   }
   string_write(str, ") ]\n", sizeof(") ]\n") - 1);
   dep++;
  }
  string_printf(str, "%s  }\n", indent);
 }

 {
  string str_ini;
  string_init(&str_ini);
  zend_hash_apply_with_arguments((executor_globals.ini_directives) , (apply_func_args_t) _extension_ini_string, 3, &str_ini, indent, module->module_number);
  if (str_ini.len > 1) {
   string_printf(str, "\n  - INI {\n");
   string_append(str, &str_ini);
   string_printf(str, "%s  }\n", indent);
  }
  string_free(&str_ini);
 }

 {
  string str_constants;
  int num_constants = 0;

  string_init(&str_constants);
  zend_hash_apply_with_arguments((executor_globals.zend_constants) , (apply_func_args_t) _extension_const_string, 4, &str_constants, indent, module, &num_constants);
  if (num_constants) {
   string_printf(str, "\n  - Constants [%d] {\n", num_constants);
   string_append(str, &str_constants);
   string_printf(str, "%s  }\n", indent);
  }
  string_free(&str_constants);
 }

 if (module->functions && module->functions->fname) {
  zend_function *fptr;
  const zend_function_entry *func = module->functions;

  string_printf(str, "\n  - Functions {\n");


  while (func->fname) {
   int fname_len = strlen(func->fname);
   char *lc_name = zend_str_tolower_dup(func->fname, fname_len);

   if (zend_hash_find((executor_globals.function_table), lc_name, fname_len + 1, (void**) &fptr) == -1) {
    php_error_docref0(((void *)0) , (1<<1L), "Internal error: Cannot find extension function %s in global function table", func->fname);
    func++;
    _efree((lc_name) );
    continue;
   }

   _function_string(str, fptr, ((void *)0), "    " );
   _efree((lc_name) );
   func++;
  }
  string_printf(str, "%s  }\n", indent);
 }

 {
  string str_classes;
  string sub_indent;
  int num_classes = 0;

  string_init(&sub_indent);
  string_printf(&sub_indent, "%s    ", indent);
  string_init(&str_classes);
  zend_hash_apply_with_arguments((executor_globals.class_table) , (apply_func_args_t) _extension_class_string, 4, &str_classes, sub_indent.string, module, &num_classes);
  if (num_classes) {
   string_printf(str, "\n  - Classes [%d] {", num_classes);
   string_append(str, &str_classes);
   string_printf(str, "%s  }\n", indent);
  }
  string_free(&str_classes);
  string_free(&sub_indent);
 }

 string_printf(str, "%s}\n", indent);
}


static void _zend_extension_string(string *str, zend_extension *extension, char *indent )
{
 string_printf(str, "%sZend Extension [ %s ", indent, extension->name);

 if (extension->version) {
  string_printf(str, "%s ", extension->version);
 }
 if (extension->copyright) {
  string_printf(str, "%s ", extension->copyright);
 }
 if (extension->author) {
  string_printf(str, "by %s ", extension->author);
 }
 if (extension->URL) {
  string_printf(str, "<%s> ", extension->URL);
 }

 string_printf(str, "]\n");
}



static void _function_check_flag(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int mask)
{
 reflection_object *intern;
 zend_function *mptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } mptr = intern->ptr;;
 { do { zval *__z = (return_value); (*__z).value.lval = ((mptr->common.fn_flags & mask) != 0); (*__z).type = 3; } while (0); return; };
}



__attribute__ ((visibility("default"))) void zend_reflection_class_factory(zend_class_entry *ce, zval *object )
{
 reflection_object *intern;
 zval *name;

 do { (name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(name))->u.buffered = ((void *)0); } while (0); (name)->refcount__gc = 1; (name)->is_ref__gc = 0;;;
 do { const char *__s=(ce->name); int __l=ce->name_length; zval *__z = (name); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 reflection_instantiate(reflection_class_ptr, object );
 intern = (reflection_object *) zend_object_store_get_object(object );
 intern->ptr = ce;
 intern->ref_type = REF_TYPE_OTHER;
 intern->ce = ce;
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, name, ((void *)0) ); zval_delref_p(name); _zval_ptr_dtor((&member) ); } while (0);
}



static void reflection_extension_factory(zval *object, const char *name_str )
{
 reflection_object *intern;
 zval *name;
 int name_len = strlen(name_str);
 char *lcname;
 struct _zend_module_entry *module;
 zend_bool use_heap;

 lcname = ((use_heap = (__builtin_expect((name_len + 1) > ((32 * 1024)), 0))) ? _emalloc((name_len + 1) ) : __builtin_alloca (name_len + 1));
 zend_str_tolower_copy(lcname, name_str, name_len);
 if (zend_hash_find(&module_registry, lcname, name_len + 1, (void **)&module) == -1) {
  do { if (__builtin_expect(use_heap, 0)) _efree((lcname) ); } while (0);
  return;
 }
 do { if (__builtin_expect(use_heap, 0)) _efree((lcname) ); } while (0);

 reflection_instantiate(reflection_extension_ptr, object );
 intern = (reflection_object *) zend_object_store_get_object(object );
 do { (name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(name))->u.buffered = ((void *)0); } while (0); (name)->refcount__gc = 1; (name)->is_ref__gc = 0;;;
 do { const char *__s=(module->name); int __l=name_len; zval *__z = (name); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 intern->ptr = module;
 intern->ref_type = REF_TYPE_OTHER;
 intern->ce = ((void *)0);
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, name, ((void *)0) ); zval_delref_p(name); _zval_ptr_dtor((&member) ); } while (0);
}



static void reflection_parameter_factory(zend_function *fptr, zval *closure_object, struct _zend_arg_info *arg_info, zend_uint offset, zend_uint required, zval *object )
{
 reflection_object *intern;
 parameter_reference *reference;
 zval *name;

 if (closure_object) {
  zval_addref_p(closure_object);
 }
 do { (name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(name))->u.buffered = ((void *)0); } while (0); (name)->refcount__gc = 1; (name)->is_ref__gc = 0;;;
 if (arg_info->name) {
  do { const char *__s=(arg_info->name); int __l=arg_info->name_len; zval *__z = (name); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 } else {
  { (*name).type = 0; };
 }
 reflection_instantiate(reflection_parameter_ptr, object );
 intern = (reflection_object *) zend_object_store_get_object(object );
 reference = (parameter_reference*) _emalloc((sizeof(parameter_reference)) );
 reference->arg_info = arg_info;
 reference->offset = offset;
 reference->required = required;
 reference->fptr = fptr;
 intern->ptr = reference;
 intern->ref_type = REF_TYPE_PARAMETER;
 intern->ce = fptr->common.scope;
 intern->obj = closure_object;
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, name, ((void *)0) ); zval_delref_p(name); _zval_ptr_dtor((&member) ); } while (0);
}



static void reflection_function_factory(zend_function *function, zval *closure_object, zval *object )
{
 reflection_object *intern;
 zval *name;

 if (closure_object) {
  zval_addref_p(closure_object);
 }
 do { (name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(name))->u.buffered = ((void *)0); } while (0); (name)->refcount__gc = 1; (name)->is_ref__gc = 0;;;
 do { const char *__s=(function->common.function_name); zval *__z = (name); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);

 reflection_instantiate(reflection_function_ptr, object );
 intern = (reflection_object *) zend_object_store_get_object(object );
 intern->ptr = function;
 intern->ref_type = REF_TYPE_FUNCTION;
 intern->ce = ((void *)0);
 intern->obj = closure_object;
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, name, ((void *)0) ); zval_delref_p(name); _zval_ptr_dtor((&member) ); } while (0);
}



static void reflection_method_factory(zend_class_entry *ce, zend_function *method, zval *closure_object, zval *object )
{
 reflection_object *intern;
 zval *name;
 zval *classname;

 if (closure_object) {
  zval_addref_p(closure_object);
 }
 do { (name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(name))->u.buffered = ((void *)0); } while (0); (name)->refcount__gc = 1; (name)->is_ref__gc = 0;;;
 do { (classname) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(classname))->u.buffered = ((void *)0); } while (0); (classname)->refcount__gc = 1; (classname)->is_ref__gc = 0;;;
 do { const char *__s=(method->common.function_name); zval *__z = (name); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);
 do { const char *__s=(method->common.scope->name); int __l=method->common.scope->name_length; zval *__z = (classname); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 reflection_instantiate(reflection_method_ptr, object );
 intern = (reflection_object *) zend_object_store_get_object(object );
 intern->ptr = method;
 intern->ref_type = REF_TYPE_FUNCTION;
 intern->ce = ce;
 intern->obj = closure_object;
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, name, ((void *)0) ); zval_delref_p(name); _zval_ptr_dtor((&member) ); } while (0);
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("class"); int __l=sizeof("class")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, classname, ((void *)0) ); zval_delref_p(classname); _zval_ptr_dtor((&member) ); } while (0);
}



static void reflection_property_factory(zend_class_entry *ce, zend_property_info *prop, zval *object )
{
 reflection_object *intern;
 zval *name;
 zval *classname;
 property_reference *reference;
 const char *class_name, *prop_name;

 zend_unmangle_property_name(prop->name, prop->name_length, &class_name, &prop_name);

 if (!(prop->flags & 0x400)) {

  zend_class_entry *tmp_ce = ce, *store_ce = ce;
  zend_property_info *tmp_info = ((void *)0);

  while (tmp_ce && zend_hash_find(&tmp_ce->properties_info, prop_name, strlen(prop_name) + 1, (void **) &tmp_info) != 0) {
   ce = tmp_ce;
   tmp_ce = tmp_ce->parent;
  }

  if (tmp_info && !(tmp_info->flags & 0x20000)) {
   prop = tmp_info;
  } else {
   ce = store_ce;
  }
 }

 do { (name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(name))->u.buffered = ((void *)0); } while (0); (name)->refcount__gc = 1; (name)->is_ref__gc = 0;;;
 do { (classname) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(classname))->u.buffered = ((void *)0); } while (0); (classname)->refcount__gc = 1; (classname)->is_ref__gc = 0;;;
 do { const char *__s=(prop_name); zval *__z = (name); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);
 do { const char *__s=(prop->ce->name); int __l=prop->ce->name_length; zval *__z = (classname); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 reflection_instantiate(reflection_property_ptr, object );
 intern = (reflection_object *) zend_object_store_get_object(object );
 reference = (property_reference*) _emalloc((sizeof(property_reference)) );
 reference->ce = ce;
 reference->prop = *prop;
 intern->ptr = reference;
 intern->ref_type = REF_TYPE_PROPERTY;
 intern->ce = ce;
 intern->ignore_visibility = 0;
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, name, ((void *)0) ); zval_delref_p(name); _zval_ptr_dtor((&member) ); } while (0);
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("class"); int __l=sizeof("class")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, classname, ((void *)0) ); zval_delref_p(classname); _zval_ptr_dtor((&member) ); } while (0);
}



static void _reflection_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , zend_class_entry *ce_ptr, int ctor_argc)
{
 zval *reflector_ptr;
 zval output, *output_ptr = &output;
 zval *argument_ptr, *argument2_ptr;
 zval *retval_ptr, **params[2];
 int result;
 int return_output = 0;
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
 zval fname;

 if (ctor_argc == 1) {
  if (zend_parse_parameters((ht) , "z|b", &argument_ptr, &return_output) == -1) {
   return;
  }
 } else {
  if (zend_parse_parameters((ht) , "zz|b", &argument_ptr, &argument2_ptr, &return_output) == -1) {
   return;
  }
 }

 (&output)->refcount__gc = 1; (&output)->is_ref__gc = 0;;


 do { (reflector_ptr) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(reflector_ptr))->u.buffered = ((void *)0); } while (0); (reflector_ptr)->refcount__gc = 1; (reflector_ptr)->is_ref__gc = 0;;;
 if (_object_and_properties_init((reflector_ptr), (ce_ptr), (((void *)0)) ) == -1) {
  zend_throw_exception(reflection_exception_ptr, "Could not create reflector", 0 ); return;;
 }


 params[0] = &argument_ptr;
 params[1] = &argument2_ptr;

 fci.size = sizeof(fci);
 fci.function_table = ((void *)0);
 fci.function_name = ((void *)0);
 fci.symbol_table = ((void *)0);
 fci.object_ptr = reflector_ptr;
 fci.retval_ptr_ptr = &retval_ptr;
 fci.param_count = ctor_argc;
 fci.params = params;
 fci.no_separation = 1;

 fcc.initialized = 1;
 fcc.function_handler = ce_ptr->constructor;
 fcc.calling_scope = ce_ptr;
 fcc.called_scope = zend_get_class_entry(&(*reflector_ptr) );
 fcc.object_ptr = reflector_ptr;

 result = zend_call_function(&fci, &fcc );

 if (retval_ptr) {
  _zval_ptr_dtor((&retval_ptr) );
 }

 if ((executor_globals.exception)) {
  _zval_ptr_dtor((&reflector_ptr) );
  return;
 }
 if (result == -1) {
  _zval_ptr_dtor((&reflector_ptr) );
  zend_throw_exception(reflection_exception_ptr, "Could not create reflector", 0 ); return;;
 }


 do { zval *__z = (&output); (*__z).value.lval = ((return_output) != 0); (*__z).type = 3; } while (0);
 params[0] = &reflector_ptr;
 params[1] = &output_ptr;

 do { const char *__s=("reflection::export"); int __l=sizeof("reflection::export") - 1; zval *__z = (&fname); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 fci.function_table = &reflection_ptr->function_table;
 fci.function_name = &fname;
 fci.object_ptr = ((void *)0);
 fci.retval_ptr_ptr = &retval_ptr;
 fci.param_count = 2;
 fci.params = params;
 fci.no_separation = 1;

 result = zend_call_function(&fci, ((void *)0) );

 if (result == -1 && (executor_globals.exception) == ((void *)0)) {
  _zval_ptr_dtor((&reflector_ptr) );
  _zval_ptr_dtor((&retval_ptr) );
  zend_throw_exception(reflection_exception_ptr, "Could not execute reflection::export()", 0 ); return;;
 }

 if (return_output) {
  (*return_value) = *(retval_ptr); if (zval_refcount_p(retval_ptr)>1) { _zval_copy_ctor((&(*return_value)) ); zval_delref_p((retval_ptr)); } else { do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)retval_ptr)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(retval_ptr ); }; _efree((retval_ptr) ); } while (0); } (&(*return_value))->refcount__gc = 1; (&(*return_value))->is_ref__gc = 0;;;
 } else {
  _zval_ptr_dtor((&retval_ptr) );
 }


 _zval_ptr_dtor((&reflector_ptr) );
}



void zim_reflection___clone(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{

 zend_throw_exception(reflection_exception_ptr, "Cannot clone object using __clone()", 0 ); return;;
}




void zim_reflection_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *object, fname, *retval_ptr;
 int result;
 zend_bool return_output = 0;

 if (zend_parse_parameters((ht) , "O|b", &object, reflector_ptr, &return_output) == -1) {
  return;
 }


 do { const char *__s=("__tostring"); int __l=sizeof("__tostring") - 1; zval *__z = (&fname); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 result= call_user_function_ex(((void *)0), &object, &fname, &retval_ptr, 0, ((void *)0), 0, ((void *)0) );
 _zval_dtor((&fname) );

 if (result == -1) {
  zend_throw_exception(reflection_exception_ptr, "Invocation of method __toString() failed", 0 ); return;;

 }

 if (!retval_ptr) {
  php_error_docref0(((void *)0) , (1<<1L), "%s::__toString() did not return anything", zend_get_class_entry(&(*object) )->name);
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 if (return_output) {
  (*return_value) = *(retval_ptr); if (zval_refcount_p(retval_ptr)>1) { _zval_copy_ctor((&(*return_value)) ); zval_delref_p((retval_ptr)); } else { do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)retval_ptr)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(retval_ptr ); }; _efree((retval_ptr) ); } while (0); } (&(*return_value))->refcount__gc = 1; (&(*return_value))->is_ref__gc = 0;;;
 } else {

  zend_print_zval(retval_ptr, 0);
  zend_printf("\n");
  _zval_ptr_dtor((&retval_ptr) );
 }
}




void zim_reflection_getModifierNames(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 long modifiers;

 if (zend_parse_parameters((ht) , "l", &modifiers) == -1) {
  return;
 }

 _array_init((return_value), 0 );

 if (modifiers & (0x02 | 0x20)) {
  add_next_index_stringl(return_value, "abstract", sizeof("abstract")-1, 1);
 }
 if (modifiers & (0x04 | 0x40)) {
  add_next_index_stringl(return_value, "final", sizeof("final")-1, 1);
 }
 if (modifiers & 0x1000) {
  add_next_index_stringl(return_value, "public", sizeof("public")-1, 1);
 }


 switch (modifiers & (0x100 | 0x200 | 0x400)) {
  case 0x100:
   add_next_index_stringl(return_value, "public", sizeof("public")-1, 1);
   break;
  case 0x400:
   add_next_index_stringl(return_value, "private", sizeof("private")-1, 1);
   break;
  case 0x200:
   add_next_index_stringl(return_value, "protected", sizeof("protected")-1, 1);
   break;
 }

 if (modifiers & 0x01) {
  add_next_index_stringl(return_value, "static", sizeof("static")-1, 1);
 }
}




void zim_reflection_function_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _reflection_export(ht, return_value, return_value_ptr, this_ptr, return_value_used , reflection_function_ptr, 1);
}




void zim_reflection_function___construct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *name;
 zval *object;
 zval *closure = ((void *)0);
 char *lcname;
 reflection_object *intern;
 zend_function *fptr;
 char *name_str;
 int name_len;

 object = (this_ptr);
 intern = (reflection_object *) zend_object_store_get_object(object );
 if (intern == ((void *)0)) {
  return;
 }

 if (zend_parse_parameters_ex(1<<1, (ht) , "O", &closure, zend_ce_closure) == 0) {
  fptr = (zend_function*)zend_get_closure_method_def(closure );
  zval_addref_p(closure);
 } else if (zend_parse_parameters((ht) , "s", &name_str, &name_len) == 0) {
  char *nsname;

  lcname = zend_str_tolower_dup(name_str, name_len);


  nsname = lcname;
  if (lcname[0] == '\\') {
   nsname = &lcname[1];
   name_len--;
  }

  if (zend_hash_find((executor_globals.function_table), nsname, name_len + 1, (void **)&fptr) == -1) {
   _efree((lcname) );
   zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Function %s() does not exist", name_str);
   return;
  }
  _efree((lcname) );
 } else {
  return;
 }

 do { (name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(name))->u.buffered = ((void *)0); } while (0); (name)->refcount__gc = 1; (name)->is_ref__gc = 0;;;
 do { const char *__s=(fptr->common.function_name); zval *__z = (name); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, name, ((void *)0) ); zval_delref_p(name); _zval_ptr_dtor((&member) ); } while (0);
 intern->ptr = fptr;
 intern->ref_type = REF_TYPE_FUNCTION;
 intern->obj = closure;
 intern->ce = ((void *)0);
}




void zim_reflection_function___toString(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;
 string str;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;
 string_init(&str);
 _function_string(&str, fptr, intern->ce, "" );
 { do { const char *__s=(str.string); int __l=str.len - 1; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_function_getName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 _default_get_entry((this_ptr), "name", sizeof("name"), return_value );
}




void zim_reflection_function_isClosure(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;
 { do { zval *__z = (return_value); (*__z).value.lval = ((fptr->common.fn_flags & 0x100000) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_function_getClosureThis(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;
 zval* closure_this;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;
 if (intern->obj) {
  closure_this = zend_get_closure_this_ptr(intern->obj );
  if (closure_this) {
   { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (closure_this)->value; (*return_value).type = (*closure_this).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (*closure_this).type = 0; }; } _zval_ptr_dtor((&closure_this) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
  }
 }
}




void zim_reflection_function_getClosureScopeClass(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;
 const zend_function *closure_func;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;
 if (intern->obj) {
  closure_func = zend_get_closure_method_def(intern->obj );
  if (closure_func && closure_func->common.scope) {
   zend_reflection_class_factory(closure_func->common.scope, return_value );
  }
 }
}




void zim_reflection_function_getClosure(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;

 zend_create_closure(return_value, fptr, ((void *)0), ((void *)0) );
}





void zim_reflection_function_isInternal(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;
 { do { zval *__z = (return_value); (*__z).value.lval = ((fptr->type == 1) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_function_isUserDefined(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;
 { do { zval *__z = (return_value); (*__z).value.lval = ((fptr->type == 2) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_function_isDisabled(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_function_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;
 { do { zval *__z = (return_value); (*__z).value.lval = ((fptr->type == 1 && fptr->internal_function.handler == zif_display_disabled_function) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_function_getFileName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;
 if (fptr->type == 2) {
  { do { const char *__s=(fptr->op_array.filename); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_function_getStartLine(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;
 if (fptr->type == 2) {
  { { zval *__z = (return_value); (*__z).value.lval = fptr->op_array.line_start; (*__z).type = 1; }; return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_function_getEndLine(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;
 if (fptr->type == 2) {
  { { zval *__z = (return_value); (*__z).value.lval = fptr->op_array.line_end; (*__z).type = 1; }; return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_function_getDocComment(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;
 if (fptr->type == 2 && fptr->op_array.doc_comment) {
  { do { const char *__s=(fptr->op_array.doc_comment); int __l=fptr->op_array.doc_comment_len; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_function_getStaticVariables(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *tmp_copy;
 reflection_object *intern;
 zend_function *fptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;


 _array_init((return_value), 0 );
 if (fptr->type == 2 && fptr->op_array.static_variables != ((void *)0)) {
  zend_hash_apply_with_argument(fptr->op_array.static_variables, (apply_func_arg_t) zval_update_constant, (void*)1 );
  zend_hash_copy((*return_value).value.ht, fptr->op_array.static_variables, (copy_ctor_func_t) zval_add_ref, (void *) &tmp_copy, sizeof(zval *));
 }
}




void zim_reflection_function_invoke(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *retval_ptr;
 zval ***params = ((void *)0);
 int result, num_args = 0;
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
 reflection_object *intern;
 zend_function *fptr;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_function_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;

 if (zend_parse_parameters((ht) , "*", &params, &num_args) == -1) {
  return;
 }

 fci.size = sizeof(fci);
 fci.function_table = ((void *)0);
 fci.function_name = ((void *)0);
 fci.symbol_table = ((void *)0);
 fci.object_ptr = ((void *)0);
 fci.retval_ptr_ptr = &retval_ptr;
 fci.param_count = num_args;
 fci.params = params;
 fci.no_separation = 1;

 fcc.initialized = 1;
 fcc.function_handler = fptr;
 fcc.calling_scope = (executor_globals.scope);
 fcc.called_scope = ((void *)0);
 fcc.object_ptr = ((void *)0);

 result = zend_call_function(&fci, &fcc );

 if (num_args) {
  _efree((params) );
 }

 if (result == -1) {
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
   "Invocation of function %s() failed", fptr->common.function_name);
  return;
 }

 if (retval_ptr) {
  (*return_value) = *(retval_ptr); if (zval_refcount_p(retval_ptr)>1) { _zval_copy_ctor((&(*return_value)) ); zval_delref_p((retval_ptr)); } else { do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)retval_ptr)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(retval_ptr ); }; _efree((retval_ptr) ); } while (0); } (&(*return_value))->refcount__gc = 1; (&(*return_value))->is_ref__gc = 0;;;
 }
}


static int _zval_array_to_c_array(zval **arg, zval ****params )
{
 *(*params)++ = arg;
 return 0;
}



void zim_reflection_function_invokeArgs(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *retval_ptr;
 zval ***params;
 int result;
 int argc;
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
 reflection_object *intern;
 zend_function *fptr;
 zval *param_array;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_function_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;

 if (zend_parse_parameters((ht) , "a", &param_array) == -1) {
  return;
 }

 argc = zend_hash_num_elements((*param_array).value.ht);

 params = _safe_emalloc((sizeof(zval **)), (argc), (0) );
 zend_hash_apply_with_argument((*param_array).value.ht, (apply_func_arg_t)_zval_array_to_c_array, &params );
 params -= argc;

 fci.size = sizeof(fci);
 fci.function_table = ((void *)0);
 fci.function_name = ((void *)0);
 fci.symbol_table = ((void *)0);
 fci.object_ptr = ((void *)0);
 fci.retval_ptr_ptr = &retval_ptr;
 fci.param_count = argc;
 fci.params = params;
 fci.no_separation = 1;

 fcc.initialized = 1;
 fcc.function_handler = fptr;
 fcc.calling_scope = (executor_globals.scope);
 fcc.called_scope = ((void *)0);
 fcc.object_ptr = ((void *)0);

 result = zend_call_function(&fci, &fcc );

 _efree((params) );

 if (result == -1) {
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
   "Invocation of function %s() failed", fptr->common.function_name);
  return;
 }

 if (retval_ptr) {
  (*return_value) = *(retval_ptr); if (zval_refcount_p(retval_ptr)>1) { _zval_copy_ctor((&(*return_value)) ); zval_delref_p((retval_ptr)); } else { do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)retval_ptr)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(retval_ptr ); }; _efree((retval_ptr) ); } while (0); } (&(*return_value))->refcount__gc = 1; (&(*return_value))->is_ref__gc = 0;;;
 }
}




void zim_reflection_function_returnsReference(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_function_abstract_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;

 { do { zval *__z = (return_value); (*__z).value.lval = (((fptr->op_array.fn_flags & 0x4000000) != 0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_function_getNumberOfParameters(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_function_abstract_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;

 { { zval *__z = (return_value); (*__z).value.lval = fptr->common.num_args; (*__z).type = 1; }; return; };
}




void zim_reflection_function_getNumberOfRequiredParameters(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_function_abstract_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;

 { { zval *__z = (return_value); (*__z).value.lval = fptr->common.required_num_args; (*__z).type = 1; }; return; };
}




void zim_reflection_function_getParameters(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;
 zend_uint i;
 struct _zend_arg_info *arg_info;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_function_abstract_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;

 arg_info= fptr->common.arg_info;

 _array_init((return_value), 0 );
 for (i = 0; i < fptr->common.num_args; i++) {
  zval *parameter;

  do { (parameter) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(parameter))->u.buffered = ((void *)0); } while (0);
  reflection_parameter_factory(_copy_function(fptr ), intern->obj, arg_info, i, fptr->common.required_num_args, parameter );
  add_next_index_zval(return_value, parameter);

  arg_info++;
 }
}




void zim_reflection_function_getExtension(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;
 zend_internal_function *internal;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_function_abstract_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;

 if (fptr->type != 1) {
  { { (*return_value).type = 0; }; return;};
 }

 internal = (zend_internal_function *)fptr;
 if (internal->module) {
  reflection_extension_factory(return_value, internal->module->name );
 } else {
  { { (*return_value).type = 0; }; return;};
 }
}




void zim_reflection_function_getExtensionName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *fptr;
 zend_internal_function *internal;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_function_abstract_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } fptr = intern->ptr;;

 if (fptr->type != 1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 internal = (zend_internal_function *)fptr;
 if (internal->module) {
  { do { const char *__s=(internal->module->name); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}




void zim_reflection_parameter_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _reflection_export(ht, return_value, return_value_ptr, this_ptr, return_value_used , reflection_parameter_ptr, 2);
}




void zim_reflection_parameter___construct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 parameter_reference *ref;
 zval *reference, **parameter;
 zval *object;
 zval *name;
 reflection_object *intern;
 zend_function *fptr;
 struct _zend_arg_info *arg_info;
 int position;
 zend_class_entry *ce = ((void *)0);
 zend_bool is_closure = 0;

 if (zend_parse_parameters((ht) , "zZ", &reference, &parameter) == -1) {
  return;
 }

 object = (this_ptr);
 intern = (reflection_object *) zend_object_store_get_object(object );
 if (intern == ((void *)0)) {
  return;
 }


 switch ((*reference).type) {
  case 6: {
    unsigned int lcname_len;
    char *lcname;

    lcname_len = (*reference).value.str.len;
    lcname = zend_str_tolower_dup((*reference).value.str.val, lcname_len);
    if (zend_hash_find((executor_globals.function_table), lcname, lcname_len + 1, (void**) &fptr) == -1) {
     _efree((lcname) );
     zend_throw_exception_ex(reflection_exception_ptr, 0 ,
      "Function %s() does not exist", (*reference).value.str.val);
     return;
    }
    _efree((lcname) );
   }
   ce = fptr->common.scope;
   break;

  case 4: {
    zval **classref;
    zval **method;
    zend_class_entry **pce;
    unsigned int lcname_len;
    char *lcname;

    if ((zend_hash_index_find((*reference).value.ht, 0, (void **) &classref) == -1)
     || (zend_hash_index_find((*reference).value.ht, 1, (void **) &method) == -1))
    {
     zend_throw_exception(reflection_exception_ptr, "Expected array($object, $method) or array($classname, $method)", 0 ); return;;

    }

    if ((**classref).type == 5) {
     ce = zend_get_class_entry(&(**classref) );
    } else {
     if ((**classref).type!=6) { if (!zval_isref_p(*classref)) { do { if (zval_refcount_p(*((classref))) > 1) { zval *new_zv; zval_delref_p(*(classref)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(classref))->value; (*new_zv).type = (**(classref)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(classref) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); }; if ((*classref)->type != 6) { _convert_to_string((*classref) ); }; };
     if (zend_lookup_class((**classref).value.str.val, (**classref).value.str.len, &pce ) == -1) {
      zend_throw_exception_ex(reflection_exception_ptr, 0 ,
        "Class %s does not exist", (**classref).value.str.val);
      return;
     }
     ce = *pce;
    }

    if ((**method).type!=6) { if (!zval_isref_p(*method)) { do { if (zval_refcount_p(*((method))) > 1) { zval *new_zv; zval_delref_p(*(method)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(method))->value; (*new_zv).type = (**(method)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(method) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); }; if ((*method)->type != 6) { _convert_to_string((*method) ); }; };
    lcname_len = (**method).value.str.len;
    lcname = zend_str_tolower_dup((**method).value.str.val, lcname_len);
    if (ce == zend_ce_closure && (**classref).type == 5
     && (lcname_len == sizeof("__invoke")-1)
     && memcmp(lcname, "__invoke", sizeof("__invoke")-1) == 0
     && (fptr = zend_get_closure_invoke_method(*classref )) != ((void *)0))
    {


    } else if (zend_hash_find(&ce->function_table, lcname, lcname_len + 1, (void **) &fptr) == -1) {
     _efree((lcname) );
     zend_throw_exception_ex(reflection_exception_ptr, 0 ,
      "Method %s::%s() does not exist", ce->name, (**method).value.str.val);
     return;
    }
    _efree((lcname) );
   }
   break;

  case 5: {
    ce = zend_get_class_entry(&(*reference) );

    if (instanceof_function(ce, zend_ce_closure )) {
     fptr = (zend_function *)zend_get_closure_method_def(reference );
     zval_addref_p(reference);
     is_closure = 1;
    } else if (zend_hash_find(&ce->function_table, "__invoke", sizeof("__invoke"), (void **)&fptr) == -1) {
     zend_throw_exception_ex(reflection_exception_ptr, 0 ,
      "Method %s::%s() does not exist", ce->name, "__invoke");
     return;
    }
   }
   break;

  default:
   zend_throw_exception(reflection_exception_ptr, "The parameter class is expected to be either a string, an array(class, method) or a callable object", 0 ); return;;

 }


 arg_info = fptr->common.arg_info;
 if ((**parameter).type == 1) {
  position= (**parameter).value.lval;
  if (position < 0 || (zend_uint)position >= fptr->common.num_args) {
   if (fptr->common.fn_flags & 0x200000) {
    if (fptr->type != 3) {
     _efree(((char*)fptr->common.function_name) );
    }
    _efree((fptr) );
   }
   if (is_closure) {
    _zval_ptr_dtor((&reference) );
   }
   zend_throw_exception(reflection_exception_ptr, "The parameter specified by its offset could not be found", 0 ); return;;

  }
 } else {
  zend_uint i;

  position= -1;
  if ((**parameter).type!=6) { if (!zval_isref_p(*parameter)) { do { if (zval_refcount_p(*((parameter))) > 1) { zval *new_zv; zval_delref_p(*(parameter)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(parameter))->value; (*new_zv).type = (**(parameter)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(parameter) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); }; if ((*parameter)->type != 6) { _convert_to_string((*parameter) ); }; };
  for (i = 0; i < fptr->common.num_args; i++) {
   if (arg_info[i].name && __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (arg_info[i].name) && __builtin_constant_p ((**parameter).value.str.val) && (__s1_len = strlen (arg_info[i].name), __s2_len = strlen ((**parameter).value.str.val), (!((size_t)(const void *)((arg_info[i].name) + 1) - (size_t)(const void *)(arg_info[i].name) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(((**parameter).value.str.val) + 1) - (size_t)(const void *)((**parameter).value.str.val) == 1) || __s2_len >= 4)) ? __builtin_strcmp (arg_info[i].name, (**parameter).value.str.val) : (__builtin_constant_p (arg_info[i].name) && ((size_t)(const void *)((arg_info[i].name) + 1) - (size_t)(const void *)(arg_info[i].name) == 1) && (__s1_len = strlen (arg_info[i].name), __s1_len < 4) ? (__builtin_constant_p ((**parameter).value.str.val) && ((size_t)(const void *)(((**parameter).value.str.val) + 1) - (size_t)(const void *)((**parameter).value.str.val) == 1) ? __builtin_strcmp (arg_info[i].name, (**parameter).value.str.val) : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ((**parameter).value.str.val); register int __result = (((__const unsigned char *) (__const char *) (arg_info[i].name))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (arg_info[i].name))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (arg_info[i].name))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (arg_info[i].name))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ((**parameter).value.str.val) && ((size_t)(const void *)(((**parameter).value.str.val) + 1) - (size_t)(const void *)((**parameter).value.str.val) == 1) && (__s2_len = strlen ((**parameter).value.str.val), __s2_len < 4) ? (__builtin_constant_p (arg_info[i].name) && ((size_t)(const void *)((arg_info[i].name) + 1) - (size_t)(const void *)(arg_info[i].name) == 1) ? __builtin_strcmp (arg_info[i].name, (**parameter).value.str.val) : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (arg_info[i].name); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ((**parameter).value.str.val))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ((**parameter).value.str.val))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ((**parameter).value.str.val))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ((**parameter).value.str.val))[3]); } } __result; }))) : __builtin_strcmp (arg_info[i].name, (**parameter).value.str.val)))); }) == 0) {
    position= i;
    break;
   }
  }
  if (position == -1) {
   if (fptr->common.fn_flags & 0x200000) {
    if (fptr->type != 3) {
     _efree(((char*)fptr->common.function_name) );
    }
    _efree((fptr) );
   }
   if (is_closure) {
    _zval_ptr_dtor((&reference) );
   }
   zend_throw_exception(reflection_exception_ptr, "The parameter specified by its name could not be found", 0 ); return;;

  }
 }

 do { (name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(name))->u.buffered = ((void *)0); } while (0); (name)->refcount__gc = 1; (name)->is_ref__gc = 0;;;
 if (arg_info[position].name) {
  do { const char *__s=(arg_info[position].name); int __l=arg_info[position].name_len; zval *__z = (name); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 } else {
  { (*name).type = 0; };
 }
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, name, ((void *)0) ); zval_delref_p(name); _zval_ptr_dtor((&member) ); } while (0);

 ref = (parameter_reference*) _emalloc((sizeof(parameter_reference)) );
 ref->arg_info = &arg_info[position];
 ref->offset = (zend_uint)position;
 ref->required = fptr->common.required_num_args;
 ref->fptr = fptr;

 intern->ptr = ref;
 intern->ref_type = REF_TYPE_PARAMETER;
 intern->ce = ce;
 if (reference && is_closure) {
  intern->obj = reference;
 }
}




void zim_reflection_parameter___toString(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;
 string str;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;
 string_init(&str);
 _parameter_string(&str, param->fptr, param->arg_info, param->offset, param->required, "" );
 { do { const char *__s=(str.string); int __l=str.len - 1; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_parameter_getName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 _default_get_entry((this_ptr), "name", sizeof("name"), return_value );
}




void zim_reflection_parameter_getDeclaringFunction(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;

 if (!param->fptr->common.scope) {
  reflection_function_factory(_copy_function(param->fptr ), intern->obj, return_value );
 } else {
  reflection_method_factory(param->fptr->common.scope, _copy_function(param->fptr ), intern->obj, return_value );
 }
}




void zim_reflection_parameter_getDeclaringClass(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;

 if (param->fptr->common.scope) {
  zend_reflection_class_factory(param->fptr->common.scope, return_value );
 }
}




void zim_reflection_parameter_getClass(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;
 zend_class_entry **pce, *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;

 if (param->arg_info->class_name) {
# 2362 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2011-11-22-ecc6c335c5-b548293b99/php/ext/reflection/php_reflection.c"
  if (0 == zend_binary_strcasecmp(param->arg_info->class_name, param->arg_info->class_name_len, "self", sizeof("self")- 1)) {
   ce = param->fptr->common.scope;
   if (!ce) {
    zend_throw_exception_ex(reflection_exception_ptr, 0 ,
     "Parameter uses 'self' as type hint but function is not a class member!");
    return;
   }
   pce= &ce;
  } else if (0 == zend_binary_strcasecmp(param->arg_info->class_name, param->arg_info->class_name_len, "parent", sizeof("parent")- 1)) {
   ce = param->fptr->common.scope;
   if (!ce) {
    zend_throw_exception_ex(reflection_exception_ptr, 0 ,
     "Parameter uses 'parent' as type hint but function is not a class member!");
    return;
   }
   if (!ce->parent) {
    zend_throw_exception_ex(reflection_exception_ptr, 0 ,
     "Parameter uses 'parent' as type hint although class does not have a parent!");
    return;
   }
   pce= &ce->parent;
  } else if (zend_lookup_class(param->arg_info->class_name, param->arg_info->class_name_len, &pce ) == -1) {
   zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Class %s does not exist", param->arg_info->class_name);
   return;
  }
  zend_reflection_class_factory(*pce, return_value );
 }
}




void zim_reflection_parameter_isArray(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;

 do { zval *__z = (return_value); (*__z).value.lval = ((param->arg_info->type_hint == 4) != 0); (*__z).type = 3; } while (0);
}




void zim_reflection_parameter_isCallable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;

 do { zval *__z = (return_value); (*__z).value.lval = ((param->arg_info->type_hint == 10) != 0); (*__z).type = 3; } while (0);
}




void zim_reflection_parameter_allowsNull(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;

 do { zval *__z = (return_value); (*__z).value.lval = ((param->arg_info->allow_null) != 0); (*__z).type = 3; } while (0);
}




void zim_reflection_parameter_isPassedByReference(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;

 do { zval *__z = (return_value); (*__z).value.lval = ((param->arg_info->pass_by_reference) != 0); (*__z).type = 3; } while (0);
}




void zim_reflection_parameter_canBePassedByValue(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;


 do { zval *__z = (return_value); (*__z).value.lval = ((param->arg_info->pass_by_reference != 1) != 0); (*__z).type = 3; } while (0);
}




void zim_reflection_parameter_getPosition(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;

 { zval *__z = (return_value); (*__z).value.lval = param->offset; (*__z).type = 1; };
}




void zim_reflection_parameter_isOptional(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;

 do { zval *__z = (return_value); (*__z).value.lval = ((param->offset >= param->required) != 0); (*__z).type = 3; } while (0);
}




void zim_reflection_parameter_isDefaultValueAvailable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;
 zend_op *precv;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;

 if (param->fptr->type != 2)
 {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 if (param->offset < param->required) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 precv = _get_recv_op((zend_op_array*)param->fptr, param->offset);
 if (!precv || precv->opcode != 64 || precv->op2_type == (1<<3)) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_parameter_getDefaultValue(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 parameter_reference *param;
 zend_op *precv;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } param = intern->ptr;;

 if (param->fptr->type != 2)
 {
  zend_throw_exception_ex(reflection_exception_ptr, 0 , "Cannot determine default value for internal functions");
  return;
 }
 if (param->offset < param->required) {
  zend_throw_exception_ex(reflection_exception_ptr, 0 , "Parameter is not optional");
  return;
 }
 precv = _get_recv_op((zend_op_array*)param->fptr, param->offset);
 if (!precv || precv->opcode != 64 || precv->op2_type == (1<<3)) {
  zend_throw_exception_ex(reflection_exception_ptr, 0 , "Internal error");
  return;
 }

 *return_value = *precv->op2.zv;
 (return_value)->refcount__gc = 1; (return_value)->is_ref__gc = 0;;
 if ((*return_value).type != 8 && (*return_value).type != 9) {
  _zval_copy_ctor((return_value) );
 }
 zval_update_constant_ex(&return_value, (void*)0, param->fptr->common.scope );
}




void zim_reflection_method_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _reflection_export(ht, return_value, return_value_ptr, this_ptr, return_value_used , reflection_method_ptr, 2);
}




void zim_reflection_method___construct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *name, *classname;
 zval *object, *orig_obj;
 reflection_object *intern;
 char *lcname;
 zend_class_entry **pce;
 zend_class_entry *ce;
 zend_function *mptr;
 char *name_str, *tmp;
 int name_len, tmp_len;
 zval ztmp;

 if (zend_parse_parameters_ex(1<<1, (ht) , "zs", &classname, &name_str, &name_len) == -1) {
  if (zend_parse_parameters((ht) , "s", &name_str, &name_len) == -1) {
   return;
  }
  if ((tmp = strstr(name_str, "::")) == ((void *)0)) {
   zend_throw_exception_ex(reflection_exception_ptr, 0 , "Invalid method name %s", name_str);
   return;
  }
  classname = &ztmp;
  tmp_len = tmp - name_str;
  do { const char *__s=(name_str); int __l=tmp_len; zval *__z = (classname); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
  name_len = name_len - (tmp_len + 2);
  name_str = tmp + 2;
  orig_obj = ((void *)0);
 } else if ((*classname).type == 5) {
  orig_obj = classname;
 } else {
  orig_obj = ((void *)0);
 }

 object = (this_ptr);
 intern = (reflection_object *) zend_object_store_get_object(object );
 if (intern == ((void *)0)) {
  return;
 }


 switch ((*classname).type) {
  case 6:
   if (zend_lookup_class((*classname).value.str.val, (*classname).value.str.len, &pce ) == -1) {
    zend_throw_exception_ex(reflection_exception_ptr, 0 ,
      "Class %s does not exist", (*classname).value.str.val);
    if (classname == &ztmp) {
     _zval_dtor((&ztmp) );
    }
    return;
   }
   ce = *pce;
   break;

  case 5:
   ce = zend_get_class_entry(&(*classname) );
   break;

  default:
   if (classname == &ztmp) {
    _zval_dtor((&ztmp) );
   }
   zend_throw_exception(reflection_exception_ptr, "The parameter class is expected to be either a string or an object", 0 ); return;;

 }

 if (classname == &ztmp) {
  _zval_dtor((&ztmp) );
 }

 lcname = zend_str_tolower_dup(name_str, name_len);

 if (ce == zend_ce_closure && orig_obj && (name_len == sizeof("__invoke")-1)
  && memcmp(lcname, "__invoke", sizeof("__invoke")-1) == 0
  && (mptr = zend_get_closure_invoke_method(orig_obj )) != ((void *)0))
 {

 } else if (zend_hash_find(&ce->function_table, lcname, name_len + 1, (void **) &mptr) == -1) {
  _efree((lcname) );
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
   "Method %s::%s() does not exist", ce->name, name_str);
  return;
 }
 _efree((lcname) );

 do { (classname) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(classname))->u.buffered = ((void *)0); } while (0); (classname)->refcount__gc = 1; (classname)->is_ref__gc = 0;;;
 do { const char *__s=(mptr->common.scope->name); int __l=mptr->common.scope->name_length; zval *__z = (classname); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);

 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("class"); int __l=sizeof("class")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, classname, ((void *)0) ); zval_delref_p(classname); _zval_ptr_dtor((&member) ); } while (0);

 do { (name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(name))->u.buffered = ((void *)0); } while (0); (name)->refcount__gc = 1; (name)->is_ref__gc = 0;;;
 do { const char *__s=(mptr->common.function_name); zval *__z = (name); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, name, ((void *)0) ); zval_delref_p(name); _zval_ptr_dtor((&member) ); } while (0);
 intern->ptr = mptr;
 intern->ref_type = REF_TYPE_FUNCTION;
 intern->ce = ce;
}




void zim_reflection_method___toString(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *mptr;
 string str;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } mptr = intern->ptr;;
 string_init(&str);
 _function_string(&str, mptr, intern->ce, "" );
 { do { const char *__s=(str.string); int __l=str.len - 1; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_method_getClosure(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zval *obj;
 zend_function *mptr;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_method_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } mptr = intern->ptr;;

 if (mptr->common.fn_flags & 0x01) {
  zend_create_closure(return_value, mptr, mptr->common.scope, ((void *)0) );
 } else {
  if (zend_parse_parameters((ht) , "o", &obj) == -1) {
   return;
  }

  if (!instanceof_function(zend_get_class_entry(&(*obj) ), mptr->common.scope )) {
   zend_throw_exception(reflection_exception_ptr, "Given object is not an instance of the class this method was declared in", 0 ); return;;

  }


  if (zend_get_class_entry(&(*obj) ) == zend_ce_closure && mptr->type == 1 &&
   (mptr->internal_function.fn_flags & 0x200000) != 0)
  {
   { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (obj)->value; (*return_value).type = (*obj).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (*obj).type = 0; }; } _zval_ptr_dtor((&obj) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
  } else {
   zend_create_closure(return_value, mptr, mptr->common.scope, obj );
  }
 }
}




void zim_reflection_method_invoke(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *retval_ptr;
 zval ***params = ((void *)0);
 zval *object_ptr;
 reflection_object *intern;
 zend_function *mptr;
 int result, num_args = 0;
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
 zend_class_entry *obj_ce;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_method_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } mptr = intern->ptr;;

 if ((!(mptr->common.fn_flags & 0x100)
   || (mptr->common.fn_flags & 0x02))
   && intern->ignore_visibility == 0)
 {
  if (mptr->common.fn_flags & 0x02) {
   zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Trying to invoke abstract method %s::%s()",
    mptr->common.scope->name, mptr->common.function_name);
  } else {
   zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Trying to invoke %s method %s::%s() from scope %s",
    mptr->common.fn_flags & 0x200 ? "protected" : "private",
    mptr->common.scope->name, mptr->common.function_name,
    zend_get_class_entry(&(*(this_ptr)) )->name);
  }
  return;
 }

 if (zend_parse_parameters((ht) , "+", &params, &num_args) == -1) {
  return;
 }







 if (mptr->common.fn_flags & 0x01) {
  object_ptr = ((void *)0);
  obj_ce = mptr->common.scope;
 } else {
  if ((**params[0]).type != 5) {
   _efree((params) );
   zend_throw_exception(reflection_exception_ptr, "Non-object passed to Invoke()", 0 ); return;;

  }

  obj_ce = zend_get_class_entry(&(**params[0]) );

  if (!instanceof_function(obj_ce, mptr->common.scope )) {
   if (params) {
    _efree((params) );
   }
   zend_throw_exception(reflection_exception_ptr, "Given object is not an instance of the class this method was declared in", 0 ); return;;

  }

  object_ptr = *params[0];
 }

 fci.size = sizeof(fci);
 fci.function_table = ((void *)0);
 fci.function_name = ((void *)0);
 fci.symbol_table = ((void *)0);
 fci.object_ptr = object_ptr;
 fci.retval_ptr_ptr = &retval_ptr;
 fci.param_count = num_args - 1;
 fci.params = params + 1;
 fci.no_separation = 1;

 fcc.initialized = 1;
 fcc.function_handler = mptr;
 fcc.calling_scope = obj_ce;
 fcc.called_scope = obj_ce;
 fcc.object_ptr = object_ptr;

 result = zend_call_function(&fci, &fcc );

 if (params) {
  _efree((params) );
 }

 if (result == -1) {
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
   "Invocation of method %s::%s() failed", mptr->common.scope->name, mptr->common.function_name);
  return;
 }

 if (retval_ptr) {
  (*return_value) = *(retval_ptr); if (zval_refcount_p(retval_ptr)>1) { _zval_copy_ctor((&(*return_value)) ); zval_delref_p((retval_ptr)); } else { do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)retval_ptr)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(retval_ptr ); }; _efree((retval_ptr) ); } while (0); } (&(*return_value))->refcount__gc = 1; (&(*return_value))->is_ref__gc = 0;;;
 }
}




void zim_reflection_method_invokeArgs(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *retval_ptr;
 zval ***params;
 zval *object;
 reflection_object *intern;
 zend_function *mptr;
 int argc;
 int result;
 zend_fcall_info fci;
 zend_fcall_info_cache fcc;
 zend_class_entry *obj_ce;
 zval *param_array;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_method_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } mptr = intern->ptr;;

 if (zend_parse_parameters((ht) , "o!a", &object, &param_array) == -1) {
  return;
 }

 if ((!(mptr->common.fn_flags & 0x100)
   || (mptr->common.fn_flags & 0x02))
   && intern->ignore_visibility == 0)
 {
  if (mptr->common.fn_flags & 0x02) {
   zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Trying to invoke abstract method %s::%s()",
    mptr->common.scope->name, mptr->common.function_name);
  } else {
   zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Trying to invoke %s method %s::%s() from scope %s",
    mptr->common.fn_flags & 0x200 ? "protected" : "private",
    mptr->common.scope->name, mptr->common.function_name,
    zend_get_class_entry(&(*(this_ptr)) )->name);
  }
  return;
 }

 argc = zend_hash_num_elements((*param_array).value.ht);

 params = _safe_emalloc((sizeof(zval **)), (argc), (0) );
 zend_hash_apply_with_argument((*param_array).value.ht, (apply_func_arg_t)_zval_array_to_c_array, &params );
 params -= argc;







 if (mptr->common.fn_flags & 0x01) {
  object = ((void *)0);
  obj_ce = mptr->common.scope;
 } else {
  if (!object) {
   _efree((params) );
   zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Trying to invoke non static method %s::%s() without an object",
    mptr->common.scope->name, mptr->common.function_name);
   return;
  }

  obj_ce = zend_get_class_entry(&(*object) );

  if (!instanceof_function(obj_ce, mptr->common.scope )) {
   _efree((params) );
   zend_throw_exception(reflection_exception_ptr, "Given object is not an instance of the class this method was declared in", 0 ); return;;

  }
 }

 fci.size = sizeof(fci);
 fci.function_table = ((void *)0);
 fci.function_name = ((void *)0);
 fci.symbol_table = ((void *)0);
 fci.object_ptr = object;
 fci.retval_ptr_ptr = &retval_ptr;
 fci.param_count = argc;
 fci.params = params;
 fci.no_separation = 1;

 fcc.initialized = 1;
 fcc.function_handler = mptr;
 fcc.calling_scope = obj_ce;
 fcc.called_scope = obj_ce;
 fcc.object_ptr = object;

 result = zend_call_function(&fci, &fcc );

 _efree((params) );

 if (result == -1) {
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
   "Invocation of method %s::%s() failed", mptr->common.scope->name, mptr->common.function_name);
  return;
 }

 if (retval_ptr) {
  (*return_value) = *(retval_ptr); if (zval_refcount_p(retval_ptr)>1) { _zval_copy_ctor((&(*return_value)) ); zval_delref_p((retval_ptr)); } else { do { if (((gc_root_buffer*)(((zend_uintptr_t)(((zval_gc_info*)retval_ptr)->u.buffered)) & ~0x03))) { gc_remove_zval_from_buffer(retval_ptr ); }; _efree((retval_ptr) ); } while (0); } (&(*return_value))->refcount__gc = 1; (&(*return_value))->is_ref__gc = 0;;;
 }
}




void zim_reflection_method_isFinal(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _function_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x04);
}




void zim_reflection_method_isAbstract(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _function_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x02);
}




void zim_reflection_method_isPublic(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _function_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x100);
}




void zim_reflection_method_isPrivate(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _function_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x400);
}




void zim_reflection_method_isProtected(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _function_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x200);
}




void zim_reflection_method_isStatic(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _function_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x01);
}




void zim_reflection_function_isDeprecated(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _function_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x40000);
}




void zim_reflection_function_inNamespace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **name;
 const char *backslash;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 if (zend_hash_find(((*(this_ptr))).value.obj.handlers->get_properties(&(*(this_ptr)) ), "name", sizeof("name"), (void **) &name) == -1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 if ((**name).type == 6
  && (backslash = zend_memrchr((**name).value.str.val, '\\', (**name).value.str.len))
  && backslash > (**name).value.str.val)
 {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_function_getNamespaceName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **name;
 const char *backslash;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 if (zend_hash_find(((*(this_ptr))).value.obj.handlers->get_properties(&(*(this_ptr)) ), "name", sizeof("name"), (void **) &name) == -1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 if ((**name).type == 6
  && (backslash = zend_memrchr((**name).value.str.val, '\\', (**name).value.str.len))
  && backslash > (**name).value.str.val)
 {
  { do { const char *__s=((**name).value.str.val); int __l=backslash - (**name).value.str.val; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
 { do { zval *__z = (return_value); (*__z).value.str.len = 0; (*__z).value.str.val = _estrndup((""), (sizeof("")-1) ); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_function_getShortName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **name;
 const char *backslash;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 if (zend_hash_find(((*(this_ptr))).value.obj.handlers->get_properties(&(*(this_ptr)) ), "name", sizeof("name"), (void **) &name) == -1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 if ((**name).type == 6
  && (backslash = zend_memrchr((**name).value.str.val, '\\', (**name).value.str.len))
  && backslash > (**name).value.str.val)
 {
  { do { const char *__s=(backslash + 1); int __l=(**name).value.str.len - (backslash - (**name).value.str.val + 1); zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
 { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (*name)->value; (*return_value).type = (**name).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**name).type = 0; }; } _zval_ptr_dtor((&*name) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
}




void zim_reflection_method_isConstructor(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *mptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } mptr = intern->ptr;;



 { do { zval *__z = (return_value); (*__z).value.lval = ((mptr->common.fn_flags & 0x2000 && intern->ce->constructor && intern->ce->constructor->common.scope == mptr->common.scope) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_method_isDestructor(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *mptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } mptr = intern->ptr;;
 { do { zval *__z = (return_value); (*__z).value.lval = ((mptr->common.fn_flags & 0x4000) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_method_getModifiers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *mptr;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } mptr = intern->ptr;;

 { { zval *__z = (return_value); (*__z).value.lval = mptr->common.fn_flags; (*__z).type = 1; }; return; };
}




void zim_reflection_method_getDeclaringClass(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *mptr;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_method_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } mptr = intern->ptr;;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 zend_reflection_class_factory(mptr->common.scope, return_value );
}




void zim_reflection_method_getPrototype(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_function *mptr;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_method_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } mptr = intern->ptr;;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 if (!mptr->common.prototype) {
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
   "Method %s::%s does not have a prototype", intern->ce->name, mptr->common.function_name);
  return;
 }

 reflection_method_factory(mptr->common.prototype->common.scope, mptr->common.prototype, ((void *)0), return_value );
}




void zim_reflection_method_setAccessible(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_bool visible;

 if (zend_parse_parameters((ht) , "b", &visible) == -1) {
  return;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) );

 if (intern == ((void *)0)) {
  return;
 }

 intern->ignore_visibility = visible;
}




void zim_reflection_class_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _reflection_export(ht, return_value, return_value_ptr, this_ptr, return_value_used , reflection_class_ptr, 1);
}



static void reflection_class_object_ctor(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int is_object)
{
 zval *argument;
 zval *object;
 zval *classname;
 reflection_object *intern;
 zend_class_entry **ce;

 if (is_object) {
  if (zend_parse_parameters((ht) , "o", &argument) == -1) {
   return;
  }
 } else {
  if (zend_parse_parameters((ht) , "z/", &argument) == -1) {
   return;
  }
 }

 object = (this_ptr);
 intern = (reflection_object *) zend_object_store_get_object(object );
 if (intern == ((void *)0)) {
  return;
 }

 if ((*argument).type == 5) {
  do { (classname) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(classname))->u.buffered = ((void *)0); } while (0); (classname)->refcount__gc = 1; (classname)->is_ref__gc = 0;;;
  do { const char *__s=(zend_get_class_entry(&(*argument) )->name); int __l=zend_get_class_entry(&(*argument) )->name_length; zval *__z = (classname); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
  do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, classname, ((void *)0) ); zval_delref_p(classname); _zval_ptr_dtor((&member) ); } while (0);
  intern->ptr = zend_get_class_entry(&(*argument) );
  if (is_object) {
   intern->obj = argument;
   zval_add_ref(&argument);
  }
 } else {
  if ((**&argument).type!=6) { if (!zval_isref_p(*&argument)) { do { if (zval_refcount_p(*((&argument))) > 1) { zval *new_zv; zval_delref_p(*(&argument)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(&argument))->value; (*new_zv).type = (**(&argument)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(&argument) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0); }; if ((*&argument)->type != 6) { _convert_to_string((*&argument) ); }; };
  if (zend_lookup_class((*argument).value.str.val, (*argument).value.str.len, &ce ) == -1) {
   if (!(executor_globals.exception)) {
    zend_throw_exception_ex(reflection_exception_ptr, -1 , "Class %s does not exist", (*argument).value.str.val);
   }
   return;
  }

  do { (classname) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(classname))->u.buffered = ((void *)0); } while (0); (classname)->refcount__gc = 1; (classname)->is_ref__gc = 0;;;
  do { const char *__s=((*ce)->name); int __l=(*ce)->name_length; zval *__z = (classname); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
  do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, classname, ((void *)0) ); zval_delref_p(classname); _zval_ptr_dtor((&member) ); } while (0);

  intern->ptr = *ce;
 }
 intern->ref_type = REF_TYPE_OTHER;
}




void zim_reflection_class___construct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_class_object_ctor(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0);
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
       prop_info->ce != ce) ||
      ((prop_info->flags & 0x200) &&
       !zend_check_protected(prop_info->ce, ce)) ||
      ((prop_info->flags & 0x400) &&
       prop_info->ce != ce)) {
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
   zval_update_constant(&prop_copy, (void *) 1 );
  }

  add_assoc_zval_ex(return_value, key, strlen(key)+1, prop_copy);
 }
}




void zim_reflection_class_getStaticProperties(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 zend_update_class_constants(ce );

 _array_init((return_value), 0 );
 add_class_vars(ce, 1, return_value );
}




void zim_reflection_class_getStaticPropertyValue(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 char *name;
 int name_len;
 zval **prop, *def_value = ((void *)0);

 if (zend_parse_parameters((ht) , "s|z", &name, &name_len, &def_value) == -1) {
  return;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 zend_update_class_constants(ce );
 prop = zend_std_get_static_property(ce, name, name_len, 1, ((void *)0) );
 if (!prop) {
  if (def_value) {
   { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (def_value)->value; (*return_value).type = (*def_value).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (*def_value).type = 0; }; } _zval_ptr_dtor((&def_value) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
  } else {
   zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Class %s does not have a property named %s", ce->name, name);
  }
  return;
 } else {
  { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (*prop)->value; (*return_value).type = (**prop).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**prop).type = 0; }; } _zval_ptr_dtor((&*prop) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
 }
}




void zim_reflection_class_setStaticPropertyValue(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 char *name;
 int name_len;
 zval **variable_ptr, *value;
 int refcount;
 zend_uchar is_ref;

 if (zend_parse_parameters((ht) , "sz", &name, &name_len, &value) == -1) {
  return;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 zend_update_class_constants(ce );
 variable_ptr = zend_std_get_static_property(ce, name, name_len, 1, ((void *)0) );
 if (!variable_ptr) {
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Class %s does not have a property named %s", ce->name, name);
  return;
 }
 refcount = zval_refcount_p(*(variable_ptr));
 is_ref = zval_isref_p(*(variable_ptr));
 _zval_dtor((*variable_ptr) );
 **variable_ptr = *value;
 _zval_copy_ctor((*variable_ptr) );
 zval_set_refcount_p(*(variable_ptr), refcount);
 zval_set_isref_to_p(*(variable_ptr), is_ref);

}




void zim_reflection_class_getDefaultProperties(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 _array_init((return_value), 0 );
 zend_update_class_constants(ce );
 add_class_vars(ce, 1, return_value );
 add_class_vars(ce, 0, return_value );
}




void zim_reflection_class___toString(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 string str;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 string_init(&str);
 _class_string(&str, ce, intern->obj, "" );
 { do { const char *__s=(str.string); int __l=str.len - 1; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_class_getName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 _default_get_entry((this_ptr), "name", sizeof("name"), return_value );
}




void zim_reflection_class_isInternal(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 { do { zval *__z = (return_value); (*__z).value.lval = ((ce->type == 1) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_isUserDefined(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 { do { zval *__z = (return_value); (*__z).value.lval = ((ce->type == 2) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_getFileName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 if (ce->type == 2) {
  { do { const char *__s=(ce->info.user.filename); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_getStartLine(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 if (ce->type == 2) {
  { { zval *__z = (return_value); (*__z).value.lval = ce->info.user.line_start; (*__z).type = 1; }; return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_getEndLine(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 if (ce->type == 2) {
  { { zval *__z = (return_value); (*__z).value.lval = ce->info.user.line_end; (*__z).type = 1; }; return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_getDocComment(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 if (ce->type == 2 && ce->info.user.doc_comment) {
  { do { const char *__s=(ce->info.user.doc_comment); int __l=ce->info.user.doc_comment_len; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_getConstructor(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 if (ce->constructor) {
  reflection_method_factory(ce, ce->constructor, ((void *)0), return_value );
 } else {
  { { (*return_value).type = 0; }; return;};
 }
}




void zim_reflection_class_hasMethod(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 char *name, *lc_name;
 int name_len;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 if (zend_parse_parameters((ht) , "s", &name, &name_len) == -1) {
  return;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 lc_name = zend_str_tolower_dup(name, name_len);
 if ((ce == zend_ce_closure && (name_len == sizeof("__invoke")-1)
  && memcmp(lc_name, "__invoke", sizeof("__invoke")-1) == 0)
  || zend_hash_exists(&ce->function_table, lc_name, name_len + 1)) {
  _efree((lc_name) );
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  _efree((lc_name) );
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}




void zim_reflection_class_getMethod(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 zend_function *mptr;
 zval obj_tmp;
 char *name, *lc_name;
 int name_len;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 if (zend_parse_parameters((ht) , "s", &name, &name_len) == -1) {
  return;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 lc_name = zend_str_tolower_dup(name, name_len);
 if (ce == zend_ce_closure && intern->obj && (name_len == sizeof("__invoke")-1)
  && memcmp(lc_name, "__invoke", sizeof("__invoke")-1) == 0
  && (mptr = zend_get_closure_invoke_method(intern->obj )) != ((void *)0))
 {


  reflection_method_factory(ce, mptr, ((void *)0), return_value );
  _efree((lc_name) );
 } else if (ce == zend_ce_closure && !intern->obj && (name_len == sizeof("__invoke")-1)
  && memcmp(lc_name, "__invoke", sizeof("__invoke")-1) == 0
  && _object_init_ex((&obj_tmp), (ce) ) == 0 && (mptr = zend_get_closure_invoke_method(&obj_tmp )) != ((void *)0)) {


  reflection_method_factory(ce, mptr, ((void *)0), return_value );
  _zval_dtor((&obj_tmp) );
  _efree((lc_name) );
 } else if (zend_hash_find(&ce->function_table, lc_name, name_len + 1, (void**) &mptr) == 0) {
  reflection_method_factory(ce, mptr, ((void *)0), return_value );
  _efree((lc_name) );
 } else {
  _efree((lc_name) );
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Method %s does not exist", name);
  return;
 }
}



static void _addmethod(zend_function *mptr, zend_class_entry *ce, zval *retval, long filter, zval *obj )
{
 zval *method;
 uint len = strlen(mptr->common.function_name);
 zend_function *closure;

 if (mptr->common.fn_flags & filter) {
  do { (method) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(method))->u.buffered = ((void *)0); } while (0);
  if (ce == zend_ce_closure && obj && (len == sizeof("__invoke")-1)
   && memcmp(mptr->common.function_name, "__invoke", sizeof("__invoke")-1) == 0
   && (closure = zend_get_closure_invoke_method(obj )) != ((void *)0))
  {
   mptr = closure;
  }



  reflection_method_factory(ce, mptr, ((void *)0), method );
  add_next_index_zval(retval, method);
 }
}



static int _addmethod_va(zend_function *mptr , int num_args, va_list args, zend_hash_key *hash_key)
{
 zend_class_entry *ce = *__builtin_va_arg(args,zend_class_entry**);
 zval *retval = __builtin_va_arg(args,zval*);
 long filter = __builtin_va_arg(args,long);
 zval *obj = __builtin_va_arg(args,zval *);

 _addmethod(mptr, ce, retval, filter, obj );
 return 0;
}




void zim_reflection_class_getMethods(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 long filter = 0;
 int argc = (ht);

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 if (argc) {
  if (zend_parse_parameters(argc , "|l", &filter) == -1) {
   return;
  }
 } else {

  filter = (0x100 | 0x200 | 0x400) | 0x02 | 0x04 | 0x01;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 _array_init((return_value), 0 );
 zend_hash_apply_with_arguments(&ce->function_table , (apply_func_args_t) _addmethod_va, 4, &ce, return_value, filter, intern->obj);
 if (intern->obj && instanceof_function(ce, zend_ce_closure )) {
  zend_function *closure = zend_get_closure_invoke_method(intern->obj );
  if (closure) {
   _addmethod(closure, ce, return_value, filter, intern->obj );
   _free_function(closure );
  }
 }
}




void zim_reflection_class_hasProperty(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_property_info *property_info;
 zend_class_entry *ce;
 char *name;
 int name_len;
 zval *property;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 if (zend_parse_parameters((ht) , "s", &name, &name_len) == -1) {
  return;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 if (zend_hash_find(&ce->properties_info, name, name_len+1, (void **) &property_info) == 0) {
  if (property_info->flags & 0x20000) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  if (intern->obj && ((*intern->obj)).value.obj.handlers->has_property) {
   do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0); (property)->refcount__gc = 1; (property)->is_ref__gc = 0;;;
   do { const char *__s=(name); int __l=name_len; zval *__z = (property); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
   if (((*intern->obj)).value.obj.handlers->has_property(intern->obj, property, 2, 0 )) {
    _zval_ptr_dtor((&property) );
    { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
   }
   _zval_ptr_dtor((&property) );
  }
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}




void zim_reflection_class_getProperty(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce, **pce;
 zend_property_info *property_info;
 char *name, *tmp, *classname;
 int name_len, classname_len;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 if (zend_parse_parameters((ht) , "s", &name, &name_len) == -1) {
  return;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 if (zend_hash_find(&ce->properties_info, name, name_len + 1, (void**) &property_info) == 0) {
  if ((property_info->flags & 0x20000) == 0) {
   reflection_property_factory(ce, property_info, return_value );
   return;
  }
 } else if (intern->obj) {

  if (zend_hash_exists((*intern->obj).value.obj.handlers->get_properties(intern->obj ), name, name_len+1)) {
   zend_property_info property_info_tmp;
   property_info_tmp.flags = 0x1000;
   property_info_tmp.name = _estrndup((name), (name_len) );
   property_info_tmp.name_length = name_len;
   property_info_tmp.h = zend_get_hash_value(name, name_len+1);
   property_info_tmp.doc_comment = ((void *)0);
   property_info_tmp.ce = ce;

   reflection_property_factory(ce, &property_info_tmp, return_value );
   intern = (reflection_object *) zend_object_store_get_object(return_value );
   intern->ref_type = REF_TYPE_DYNAMIC_PROPERTY;
   return;
  }
 }
 if ((tmp = strstr(name, "::")) != ((void *)0)) {
  classname_len = tmp - name;
  classname = zend_str_tolower_dup(name, classname_len);
  classname[classname_len] = '\0';
  name_len = name_len - (classname_len + 2);
  name = tmp + 2;

  if (zend_lookup_class(classname, classname_len, &pce ) == -1) {
   if (!(executor_globals.exception)) {
    zend_throw_exception_ex(reflection_exception_ptr, -1 , "Class %s does not exist", classname);
   }
   _efree((classname) );
   return;
  }
  _efree((classname) );

  if (!instanceof_function(ce, *pce )) {
   zend_throw_exception_ex(reflection_exception_ptr, -1 , "Fully qualified property name %s::%s does not specify a base class of %s", (*pce)->name, name, ce->name);
   return;
  }
  ce = *pce;

  if (zend_hash_find(&ce->properties_info, name, name_len + 1, (void**) &property_info) == 0 && (property_info->flags & 0x20000) == 0) {
   reflection_property_factory(ce, property_info, return_value );
   return;
  }
 }
 zend_throw_exception_ex(reflection_exception_ptr, 0 ,
   "Property %s does not exist", name);
}



static int _addproperty(zend_property_info *pptr , int num_args, va_list args, zend_hash_key *hash_key)
{
 zval *property;
 zend_class_entry *ce = *__builtin_va_arg(args,zend_class_entry**);
 zval *retval = __builtin_va_arg(args,zval*);
 long filter = __builtin_va_arg(args,long);

 if (pptr->flags & 0x20000) {
  return 0;
 }

 if (pptr->flags & filter) {
  do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0);
  reflection_property_factory(ce, pptr, property );
  add_next_index_zval(retval, property);
 }
 return 0;
}



static int _adddynproperty(zval **pptr , int num_args, va_list args, zend_hash_key *hash_key)
{
 zval *property;
 zend_class_entry *ce = *__builtin_va_arg(args,zend_class_entry**);
 zval *retval = __builtin_va_arg(args,zval*), member;

 if (hash_key->arKey[0] == '\0') {
  return 0;
 }

 do { const char *__s=(hash_key->arKey); int __l=hash_key->nKeyLength-1; zval *__z = (&member); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 if (zend_get_property_info(ce, &member, 1 ) == &(executor_globals.std_property_info)) {
  do { (property) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(property))->u.buffered = ((void *)0); } while (0); (property)->refcount__gc = 1; (property)->is_ref__gc = 0;;;
  (executor_globals.std_property_info).flags = 0x1000;
  reflection_property_factory(ce, &(executor_globals.std_property_info), property );
  add_next_index_zval(retval, property);
 }
 return 0;
}




void zim_reflection_class_getProperties(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 long filter = 0;
 int argc = (ht);

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 if (argc) {
  if (zend_parse_parameters(argc , "|l", &filter) == -1) {
   return;
  }
 } else {

  filter = (0x100 | 0x200 | 0x400) | 0x01;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 _array_init((return_value), 0 );
 zend_hash_apply_with_arguments(&ce->properties_info , (apply_func_args_t) _addproperty, 3, &ce, return_value, filter);

 if (intern->obj && (filter & 0x100) != 0 && (*intern->obj).value.obj.handlers->get_properties) {
  HashTable *properties = (*intern->obj).value.obj.handlers->get_properties(intern->obj );
  zend_hash_apply_with_arguments(properties , (apply_func_args_t) _adddynproperty, 2, &ce, return_value);
 }
}




void zim_reflection_class_hasConstant(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 char *name;
 int name_len;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 if (zend_parse_parameters((ht) , "s", &name, &name_len) == -1) {
  return;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 if (zend_hash_exists(&ce->constants_table, name, name_len + 1)) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}




void zim_reflection_class_getConstants(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *tmp_copy;
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 _array_init((return_value), 0 );
 zend_hash_apply_with_argument(&ce->constants_table, (apply_func_arg_t)zval_update_constant_inline_change, ce );
 zend_hash_copy((*return_value).value.ht, &ce->constants_table, (copy_ctor_func_t) zval_add_ref, (void *) &tmp_copy, sizeof(zval *));
}




void zim_reflection_class_getConstant(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 zval **value;
 char *name;
 int name_len;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 if (zend_parse_parameters((ht) , "s", &name, &name_len) == -1) {
  return;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 zend_hash_apply_with_argument(&ce->constants_table, (apply_func_arg_t)zval_update_constant_inline_change, ce );
 if (zend_hash_find(&ce->constants_table, name, name_len + 1, (void **) &value) == -1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 do { do { (return_value)->value = (*(value))->value; (*return_value).type = (**(value)).type; } while (0); zval_set_refcount_p(return_value, 1); zval_unset_isref_p(return_value); } while (0); _zval_copy_ctor(((return_value)) );;
}



static void _class_check_flag(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int mask)
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 do { zval *__z = (return_value); (*__z).value.lval = ((ce->ce_flags & mask) != 0); (*__z).type = 3; } while (0);
}




void zim_reflection_class_isInstantiable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 if (ce->ce_flags & (0x80 | 0x20 | 0x10)) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }



 if (!ce->constructor) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }

 { do { zval *__z = (return_value); (*__z).value.lval = ((ce->constructor->common.fn_flags & 0x100) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_isCloneable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 zval obj;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 if (ce->ce_flags & (0x80 | 0x120 | 0x20 | 0x10)) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 if (intern->obj) {
  if (ce->clone) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((ce->clone->common.fn_flags & 0x100) != 0); (*__z).type = 3; } while (0); return; };
  } else {
   { do { zval *__z = (return_value); (*__z).value.lval = ((((*intern->obj)).value.obj.handlers->clone_obj != ((void *)0)) != 0); (*__z).type = 3; } while (0); return; };
  }
 } else {
  if (ce->clone) {
   { do { zval *__z = (return_value); (*__z).value.lval = ((ce->clone->common.fn_flags & 0x100) != 0); (*__z).type = 3; } while (0); return; };
  } else {
   _object_init_ex((&obj), (ce) );
   do { zval *__z = (return_value); (*__z).value.lval = ((((obj)).value.obj.handlers->clone_obj != ((void *)0)) != 0); (*__z).type = 3; } while (0);
   _zval_dtor((&obj) );
  }
 }
}




void zim_reflection_class_isInterface(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _class_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x80);
}




void zim_reflection_class_isTrait(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _class_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x120 & ~0x20);
}




void zim_reflection_class_isFinal(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _class_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x40);
}




void zim_reflection_class_isAbstract(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _class_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x10|0x20);
}




void zim_reflection_class_getModifiers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 { { zval *__z = (return_value); (*__z).value.lval = ce->ce_flags; (*__z).type = 1; }; return; };
}




void zim_reflection_class_isInstance(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 zval *object;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 if (zend_parse_parameters((ht) , "o", &object) == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;
 { do { zval *__z = (return_value); (*__z).value.lval = ((((*object).value.obj.handlers->get_class_entry != ((void *)0)) && instanceof_function(zend_get_class_entry(&(*object) ), ce )) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_newInstance(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *retval_ptr = ((void *)0);
 reflection_object *intern;
 zend_class_entry *ce;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;


 if (ce->constructor) {
  zval ***params = ((void *)0);
  int num_args = 0;
  zend_fcall_info fci;
  zend_fcall_info_cache fcc;

  if (!(ce->constructor->common.fn_flags & 0x100)) {
   zend_throw_exception_ex(reflection_exception_ptr, 0 , "Access to non-public constructor of class %s", ce->name);
   return;
  }

  if (zend_parse_parameters((ht) , "*", &params, &num_args) == -1) {
   if (params) {
    _efree((params) );
   }
   { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
  }

  _object_init_ex((return_value), (ce) );

  fci.size = sizeof(fci);
  fci.function_table = (executor_globals.function_table);
  fci.function_name = ((void *)0);
  fci.symbol_table = ((void *)0);
  fci.object_ptr = return_value;
  fci.retval_ptr_ptr = &retval_ptr;
  fci.param_count = num_args;
  fci.params = params;
  fci.no_separation = 1;

  fcc.initialized = 1;
  fcc.function_handler = ce->constructor;
  fcc.calling_scope = (executor_globals.scope);
  fcc.called_scope = zend_get_class_entry(&(*return_value) );
  fcc.object_ptr = return_value;

  if (zend_call_function(&fci, &fcc ) == -1) {
   if (params) {
    _efree((params) );
   }
   if (retval_ptr) {
    _zval_ptr_dtor((&retval_ptr) );
   }
   php_error_docref0(((void *)0) , (1<<1L), "Invocation of %s's constructor failed", ce->name);
   { { (*return_value).type = 0; }; return;};
  }
  if (retval_ptr) {
   _zval_ptr_dtor((&retval_ptr) );
  }
  if (params) {
   _efree((params) );
  }
 } else if (!(ht)) {
  _object_init_ex((return_value), (ce) );
 } else {
  zend_throw_exception_ex(reflection_exception_ptr, 0 , "Class %s does not have a constructor, so you cannot pass any constructor arguments", ce->name);
 }
}




void zim_reflection_class_newInstanceWithoutConstructor(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 if (ce->create_object != ((void *)0)) {
  zend_throw_exception_ex(reflection_exception_ptr, 0 , "Class %s is an internal class that cannot be instantiated without invoking its constructor", ce->name);
 }

 _object_init_ex((return_value), (ce) );
}




void zim_reflection_class_newInstanceArgs(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *retval_ptr = ((void *)0);
 reflection_object *intern;
 zend_class_entry *ce;
 int argc = 0;
 HashTable *args;


 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 if (zend_parse_parameters((ht) , "|h", &args) == -1) {
  return;
 }
 if ((ht) > 0) {
  argc = args->nNumOfElements;
 }


 if (ce->constructor) {
  zval ***params = ((void *)0);
  zend_fcall_info fci;
  zend_fcall_info_cache fcc;

  if (!(ce->constructor->common.fn_flags & 0x100)) {
   zend_throw_exception_ex(reflection_exception_ptr, 0 , "Access to non-public constructor of class %s", ce->name);
   return;
  }

  if (argc) {
   params = _safe_emalloc((sizeof(zval **)), (argc), (0) );
   zend_hash_apply_with_argument(args, (apply_func_arg_t)_zval_array_to_c_array, &params );
   params -= argc;
  }

  _object_init_ex((return_value), (ce) );

  fci.size = sizeof(fci);
  fci.function_table = (executor_globals.function_table);
  fci.function_name = ((void *)0);
  fci.symbol_table = ((void *)0);
  fci.object_ptr = return_value;
  fci.retval_ptr_ptr = &retval_ptr;
  fci.param_count = argc;
  fci.params = params;
  fci.no_separation = 1;

  fcc.initialized = 1;
  fcc.function_handler = ce->constructor;
  fcc.calling_scope = (executor_globals.scope);
  fcc.called_scope = zend_get_class_entry(&(*return_value) );
  fcc.object_ptr = return_value;

  if (zend_call_function(&fci, &fcc ) == -1) {
   if (params) {
    _efree((params) );
   }
   if (retval_ptr) {
    _zval_ptr_dtor((&retval_ptr) );
   }
   php_error_docref0(((void *)0) , (1<<1L), "Invocation of %s's constructor failed", ce->name);
   { { (*return_value).type = 0; }; return;};
  }
  if (retval_ptr) {
   _zval_ptr_dtor((&retval_ptr) );
  }
  if (params) {
   _efree((params) );
  }
 } else if (!(ht) || !argc) {
  _object_init_ex((return_value), (ce) );
 } else {
  zend_throw_exception_ex(reflection_exception_ptr, 0 , "Class %s does not have a constructor, so you cannot pass any constructor arguments", ce->name);
 }
}




void zim_reflection_class_getInterfaces(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;


 _array_init((return_value), 0 );

 if (ce->num_interfaces) {
  zend_uint i;

  for (i=0; i < ce->num_interfaces; i++) {
   zval *interface;
   do { (interface) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(interface))->u.buffered = ((void *)0); } while (0);
   zend_reflection_class_factory(ce->interfaces[i], interface );
   add_assoc_zval_ex(return_value, ce->interfaces[i]->name, ce->interfaces[i]->name_length + 1, interface);
  }
 }
}




void zim_reflection_class_getInterfaceNames(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 zend_uint i;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;


 _array_init((return_value), 0 );

 for (i=0; i < ce->num_interfaces; i++) {
  add_next_index_stringl(return_value, ce->interfaces[i]->name, ce->interfaces[i]->name_length, 1);
 }
}




void zim_reflection_class_getTraits(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 zend_uint i;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 _array_init((return_value), 0 );

 for (i=0; i < ce->num_traits; i++) {
  zval *trait;
  do { (trait) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(trait))->u.buffered = ((void *)0); } while (0);
  zend_reflection_class_factory(ce->traits[i], trait );
  add_assoc_zval_ex(return_value, ce->traits[i]->name, ce->traits[i]->name_length + 1, trait);
 }
}




void zim_reflection_class_getTraitNames(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;
 zend_uint i;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 _array_init((return_value), 0 );

 for (i=0; i < ce->num_traits; i++) {
  add_next_index_stringl(return_value, ce->traits[i]->name, ce->traits[i]->name_length, 1);
 }
}




void zim_reflection_class_getTraitAliases(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 _array_init((return_value), 0 );

 if (ce->trait_aliases) {
  zend_uint i = 0;
  while (ce->trait_aliases[i]) {
   char *method_name;
   int method_name_len;
   zend_trait_method_reference *cur_ref = ce->trait_aliases[i]->trait_method;

   method_name_len = spprintf(&method_name, 0, "%s::%s", cur_ref->class_name, cur_ref->method_name);
   add_assoc_stringl_ex(return_value, ce->trait_aliases[i]->alias, ce->trait_aliases[i]->alias_len + 1, method_name, method_name_len, 0);
   i++;
  }
 }
}




void zim_reflection_class_getParentClass(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 if (ce->parent) {
  zend_reflection_class_factory(ce->parent, return_value );
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}




void zim_reflection_class_isSubclassOf(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern, *argument;
 zend_class_entry *ce, **pce, *class_ce;
 zval *class_name;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 if (zend_parse_parameters((ht) , "z", &class_name) == -1) {
  return;
 }

 switch(class_name->type) {
  case 6:
   if (zend_lookup_class((*class_name).value.str.val, (*class_name).value.str.len, &pce ) == -1) {
    zend_throw_exception_ex(reflection_exception_ptr, 0 ,
      "Class %s does not exist", (*class_name).value.str.val);
    return;
   }
   class_ce = *pce;
   break;
  case 5:
   if (instanceof_function(zend_get_class_entry(&(*class_name) ), reflection_class_ptr )) {
    argument = (reflection_object *) zend_object_store_get_object(class_name );
    if (argument == ((void *)0) || argument->ptr == ((void *)0)) {
     php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the argument's reflection object");

    }
    class_ce = argument->ptr;
    break;
   }

  default:
   zend_throw_exception_ex(reflection_exception_ptr, 0 ,
     "Parameter one must either be a string or a ReflectionClass object");
   return;
 }

 { do { zval *__z = (return_value); (*__z).value.lval = (((ce != class_ce && instanceof_function(ce, class_ce ))) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_implementsInterface(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern, *argument;
 zend_class_entry *ce, *interface_ce, **pce;
 zval *interface;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 if (zend_parse_parameters((ht) , "z", &interface) == -1) {
  return;
 }

 switch(interface->type) {
  case 6:
   if (zend_lookup_class((*interface).value.str.val, (*interface).value.str.len, &pce ) == -1) {
    zend_throw_exception_ex(reflection_exception_ptr, 0 ,
      "Interface %s does not exist", (*interface).value.str.val);
    return;
   }
   interface_ce = *pce;
   break;
  case 5:
   if (instanceof_function(zend_get_class_entry(&(*interface) ), reflection_class_ptr )) {
    argument = (reflection_object *) zend_object_store_get_object(interface );
    if (argument == ((void *)0) || argument->ptr == ((void *)0)) {
     php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the argument's reflection object");

    }
    interface_ce = argument->ptr;
    break;
   }

  default:
   zend_throw_exception_ex(reflection_exception_ptr, 0 ,
     "Parameter one must either be a string or a ReflectionClass object");
   return;
 }

 if (!(interface_ce->ce_flags & 0x80)) {
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Interface %s is a Class", interface_ce->name);
  return;
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((instanceof_function(ce, interface_ce )) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_isIterateable(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 { do { zval *__z = (return_value); (*__z).value.lval = ((ce->get_iterator != ((void *)0)) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_getExtension(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 if ((ce->type == 1) && ce->info.internal.module) {
  reflection_extension_factory(return_value, ce->info.internal.module->name );
 }
}




void zim_reflection_class_getExtensionName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_class_entry *ce;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_class_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ce = intern->ptr;;

 if ((ce->type == 1) && ce->info.internal.module) {
  { do { const char *__s=(ce->info.internal.module->name); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 } else {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
}




void zim_reflection_class_inNamespace(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **name;
 const char *backslash;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 if (zend_hash_find(((*(this_ptr))).value.obj.handlers->get_properties(&(*(this_ptr)) ), "name", sizeof("name"), (void **) &name) == -1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 if ((**name).type == 6
  && (backslash = zend_memrchr((**name).value.str.val, '\\', (**name).value.str.len))
  && backslash > (**name).value.str.val)
 {
  { do { zval *__z = (return_value); (*__z).value.lval = ((1) != 0); (*__z).type = 3; } while (0); return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_class_getNamespaceName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **name;
 const char *backslash;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 if (zend_hash_find(((*(this_ptr))).value.obj.handlers->get_properties(&(*(this_ptr)) ), "name", sizeof("name"), (void **) &name) == -1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 if ((**name).type == 6
  && (backslash = zend_memrchr((**name).value.str.val, '\\', (**name).value.str.len))
  && backslash > (**name).value.str.val)
 {
  { do { const char *__s=((**name).value.str.val); int __l=backslash - (**name).value.str.val; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
 { do { zval *__z = (return_value); (*__z).value.str.len = 0; (*__z).value.str.val = _estrndup((""), (sizeof("")-1) ); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_class_getShortName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval **name;
 const char *backslash;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 if (zend_hash_find(((*(this_ptr))).value.obj.handlers->get_properties(&(*(this_ptr)) ), "name", sizeof("name"), (void **) &name) == -1) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }
 if ((**name).type == 6
  && (backslash = zend_memrchr((**name).value.str.val, '\\', (**name).value.str.len))
  && backslash > (**name).value.str.val)
 {
  { do { const char *__s=(backslash + 1); int __l=(**name).value.str.len - (backslash - (**name).value.str.val + 1); zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
 { { zend_uchar is_ref = zval_isref_p(return_value); zend_uint refcount = zval_refcount_p(return_value); do { (return_value)->value = (*name)->value; (*return_value).type = (**name).type; } while (0); if (1) { _zval_copy_ctor((return_value) ); } if (0) { if (!1) { { (**name).type = 0; }; } _zval_ptr_dtor((&*name) ); } zval_set_isref_to_p(return_value, is_ref); zval_set_refcount_p(return_value, refcount); }; return; };
}




void zim_reflection_object_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _reflection_export(ht, return_value, return_value_ptr, this_ptr, return_value_used , reflection_object_ptr, 1);
}




void zim_reflection_object___construct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_class_object_ctor(ht, return_value, return_value_ptr, this_ptr, return_value_used , 1);
}




void zim_reflection_property_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _reflection_export(ht, return_value, return_value_ptr, this_ptr, return_value_used , reflection_property_ptr, 2);
}




void zim_reflection_property___construct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *propname, *classname;
 char *name_str;
 const char *class_name, *prop_name;
 int name_len, dynam_prop = 0;
 zval *object;
 reflection_object *intern;
 zend_class_entry **pce;
 zend_class_entry *ce;
 zend_property_info *property_info = ((void *)0);
 property_reference *reference;

 if (zend_parse_parameters((ht) , "zs", &classname, &name_str, &name_len) == -1) {
  return;
 }

 object = (this_ptr);
 intern = (reflection_object *) zend_object_store_get_object(object );
 if (intern == ((void *)0)) {
  return;
 }


 switch ((*classname).type) {
  case 6:
   if (zend_lookup_class((*classname).value.str.val, (*classname).value.str.len, &pce ) == -1) {
    zend_throw_exception_ex(reflection_exception_ptr, 0 ,
      "Class %s does not exist", (*classname).value.str.val);
    return;
   }
   ce = *pce;
   break;

  case 5:
   ce = zend_get_class_entry(&(*classname) );
   break;

  default:
   zend_throw_exception(reflection_exception_ptr, "The parameter class is expected to be either a string or an object", 0 ); return;;

 }

 if (zend_hash_find(&ce->properties_info, name_str, name_len + 1, (void **) &property_info) == -1 || (property_info->flags & 0x20000)) {

  if (property_info == ((void *)0) && (*classname).type == 5 && (*classname).value.obj.handlers->get_properties) {
   if (zend_hash_exists((*classname).value.obj.handlers->get_properties(classname ), name_str, name_len+1)) {
    dynam_prop = 1;
   }
  }
  if (dynam_prop == 0) {
   zend_throw_exception_ex(reflection_exception_ptr, 0 , "Property %s::$%s does not exist", ce->name, name_str);
   return;
  }
 }

 if (dynam_prop == 0 && (property_info->flags & 0x400) == 0) {

  zend_class_entry *tmp_ce = ce;
  zend_property_info *tmp_info;

  while (tmp_ce && zend_hash_find(&tmp_ce->properties_info, name_str, name_len + 1, (void **) &tmp_info) != 0) {
   ce = tmp_ce;
   property_info = tmp_info;
   tmp_ce = tmp_ce->parent;
  }
 }

 do { (classname) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(classname))->u.buffered = ((void *)0); } while (0); (classname)->refcount__gc = 1; (classname)->is_ref__gc = 0;;;
 do { (propname) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(propname))->u.buffered = ((void *)0); } while (0); (propname)->refcount__gc = 1; (propname)->is_ref__gc = 0;;;

 if (dynam_prop == 0) {
  zend_unmangle_property_name(property_info->name, property_info->name_length, &class_name, &prop_name);
  do { const char *__s=(property_info->ce->name); int __l=property_info->ce->name_length; zval *__z = (classname); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
  do { const char *__s=(prop_name); zval *__z = (propname); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);
 } else {
  do { const char *__s=(ce->name); int __l=ce->name_length; zval *__z = (classname); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
  do { const char *__s=(name_str); int __l=name_len; zval *__z = (propname); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);
 }
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("class"); int __l=sizeof("class")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, classname, ((void *)0) ); zval_delref_p(classname); _zval_ptr_dtor((&member) ); } while (0);
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, propname, ((void *)0) ); zval_delref_p(propname); _zval_ptr_dtor((&member) ); } while (0);

 reference = (property_reference*) _emalloc((sizeof(property_reference)) );
 if (dynam_prop) {
  reference->prop.flags = 0x1000;
  reference->prop.name = (*propname).value.str.val;
  reference->prop.name_length = (*propname).value.str.len;
  reference->prop.h = zend_get_hash_value(name_str, name_len+1);
  reference->prop.doc_comment = ((void *)0);
  reference->prop.ce = ce;
 } else {
  reference->prop = *property_info;
 }
 reference->ce = ce;
 intern->ptr = reference;
 intern->ref_type = REF_TYPE_PROPERTY;
 intern->ce = ce;
 intern->ignore_visibility = 0;
}




void zim_reflection_property___toString(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 property_reference *ref;
 string str;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ref = intern->ptr;;
 string_init(&str);
 _property_string(&str, &ref->prop, ((void *)0), "" );
 { do { const char *__s=(str.string); int __l=str.len - 1; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_property_getName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 _default_get_entry((this_ptr), "name", sizeof("name"), return_value );
}


static void _property_check_flag(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used , int mask)
{
 reflection_object *intern;
 property_reference *ref;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ref = intern->ptr;;
 { do { zval *__z = (return_value); (*__z).value.lval = ((ref->prop.flags & mask) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_property_isPublic(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _property_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x100 | 0x1000);
}




void zim_reflection_property_isPrivate(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _property_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x400);
}




void zim_reflection_property_isProtected(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _property_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x200);
}




void zim_reflection_property_isStatic(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _property_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , 0x01);
}




void zim_reflection_property_isDefault(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _property_check_flag(ht, return_value, return_value_ptr, this_ptr, return_value_used , ~0x1000);
}




void zim_reflection_property_getModifiers(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 property_reference *ref;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ref = intern->ptr;;

 { { zval *__z = (return_value); (*__z).value.lval = ref->prop.flags; (*__z).type = 1; }; return; };
}




void zim_reflection_property_getValue(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 property_reference *ref;
 zval *object, name;
 zval *member_p = ((void *)0);

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_property_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ref = intern->ptr;;

 if (!(ref->prop.flags & (0x100 | 0x1000)) && intern->ignore_visibility == 0) {
  _default_get_entry((this_ptr), "name", sizeof("name"), &name );
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
   "Cannot access non-public member %s::%s", intern->ce->name, (name).value.str.val);
  _zval_dtor((&name) );
  return;
 }

 if ((ref->prop.flags & 0x01)) {
  zend_update_class_constants(intern->ce );
  if (!((intern->ce)->static_members_table)[ref->prop.offset]) {
   php_error_docref0(((void *)0) , (1<<0L), "Internal error: Could not find the property %s::%s", intern->ce->name, ref->prop.name);

  }
  *return_value= *((intern->ce)->static_members_table)[ref->prop.offset];
  _zval_copy_ctor((return_value) );
   (return_value)->refcount__gc = 1; (return_value)->is_ref__gc = 0;;
 } else {
  const char *class_name, *prop_name;

  if (zend_parse_parameters((ht) , "o", &object) == -1) {
   return;
  }
  zend_unmangle_property_name(ref->prop.name, ref->prop.name_length, &class_name, &prop_name);
  member_p = zend_read_property(ref->ce, object, prop_name, strlen(prop_name), 1 );
  do { do { (return_value)->value = (*(&member_p))->value; (*return_value).type = (**(&member_p)).type; } while (0); zval_set_refcount_p(return_value, 1); zval_unset_isref_p(return_value); } while (0); _zval_copy_ctor(((return_value)) );;
  if (member_p != (executor_globals.uninitialized_zval_ptr)) {
   zval_add_ref(&member_p);
   _zval_ptr_dtor((&member_p) );
  }
 }
}




void zim_reflection_property_setValue(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 property_reference *ref;
 zval **variable_ptr;
 zval *object, name;
 zval *value;
 zval *tmp;

 if (!this_ptr || !instanceof_function(zend_get_class_entry(&(*this_ptr) ), reflection_property_ptr )) { php_error_docref0(((void *)0) , (1<<0L), "%s() cannot be called statically", get_active_function_name()); return; };
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ref = intern->ptr;;

 if (!(ref->prop.flags & 0x100) && intern->ignore_visibility == 0) {
  _default_get_entry((this_ptr), "name", sizeof("name"), &name );
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
   "Cannot access non-public member %s::%s", intern->ce->name, (name).value.str.val);
  _zval_dtor((&name) );
  return;
 }

 if ((ref->prop.flags & 0x01)) {
  if (zend_parse_parameters_ex(1<<1, (ht) , "z", &value) == -1) {
   if (zend_parse_parameters((ht) , "zz", &tmp, &value) == -1) {
    return;
   }
  }
  zend_update_class_constants(intern->ce );

  if (!((intern->ce)->static_members_table)[ref->prop.offset]) {
   php_error_docref0(((void *)0) , (1<<0L), "Internal error: Could not find the property %s::%s", intern->ce->name, ref->prop.name);

  }
  variable_ptr = &((intern->ce)->static_members_table)[ref->prop.offset];
  if (*variable_ptr != value) {
   if (zval_isref_p(*variable_ptr)) {
    zval garbage = **variable_ptr;


    (**variable_ptr).type = (*value).type;
    (*variable_ptr)->value = value->value;
    if (zval_refcount_p(value) > 0) {
     _zval_copy_ctor((*variable_ptr) );
    }
    _zval_dtor((&garbage) );
   } else {
    zval *garbage = *variable_ptr;


    zval_addref_p(value);
    if (zval_isref_p(value)) {
     do { if (zval_refcount_p(*((&value))) > 1) { zval *new_zv; zval_delref_p(*(&value)); do { (new_zv) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(new_zv))->u.buffered = ((void *)0); } while (0); do { do { (new_zv)->value = (*(&value))->value; (*new_zv).type = (**(&value)).type; } while (0); zval_set_refcount_p(new_zv, 1); zval_unset_isref_p(new_zv); } while (0); *(&value) = new_zv; _zval_copy_ctor((new_zv) ); } } while (0);
    }
    *variable_ptr = value;
    _zval_ptr_dtor((&garbage) );
   }
  }
 } else {
  const char *class_name, *prop_name;

  if (zend_parse_parameters((ht) , "oz", &object, &value) == -1) {
   return;
  }
  zend_unmangle_property_name(ref->prop.name, ref->prop.name_length, &class_name, &prop_name);
  zend_update_property(ref->ce, object, prop_name, strlen(prop_name), value );
 }
}




void zim_reflection_property_getDeclaringClass(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 property_reference *ref;
 zend_class_entry *tmp_ce, *ce;
 zend_property_info *tmp_info;
 const char *prop_name, *class_name;
 int prop_name_len;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ref = intern->ptr;;

 if (zend_unmangle_property_name(ref->prop.name, ref->prop.name_length, &class_name, &prop_name) != 0) {
  { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
 }

 prop_name_len = strlen(prop_name);
 ce = tmp_ce = ref->ce;
 while (tmp_ce && zend_hash_find(&tmp_ce->properties_info, prop_name, prop_name_len + 1, (void **) &tmp_info) == 0) {
  if (tmp_info->flags & 0x400 || tmp_info->flags & 0x20000) {

   break;
  }
  ce = tmp_ce;
  if (tmp_ce == tmp_info->ce) {

   break;
  }
  tmp_ce = tmp_ce->parent;
 }

 zend_reflection_class_factory(ce, return_value );
}




void zim_reflection_property_getDocComment(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 property_reference *ref;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } ref = intern->ptr;;
 if (ref->prop.doc_comment) {
  { do { const char *__s=(ref->prop.doc_comment); int __l=ref->prop.doc_comment_len; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
 { do { zval *__z = (return_value); (*__z).value.lval = ((0) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_property_setAccessible(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_bool visible;

 if (zend_parse_parameters((ht) , "b", &visible) == -1) {
  return;
 }

 intern = (reflection_object *) zend_object_store_get_object((this_ptr) );

 if (intern == ((void *)0)) {
  return;
 }

 intern->ignore_visibility = visible;
}




void zim_reflection_extension_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _reflection_export(ht, return_value, return_value_ptr, this_ptr, return_value_used , reflection_extension_ptr, 1);
}




void zim_reflection_extension___construct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *name;
 zval *object;
 char *lcname;
 reflection_object *intern;
 zend_module_entry *module;
 char *name_str;
 int name_len;
 zend_bool use_heap;

 if (zend_parse_parameters((ht) , "s", &name_str, &name_len) == -1) {
  return;
 }

 object = (this_ptr);
 intern = (reflection_object *) zend_object_store_get_object(object );
 if (intern == ((void *)0)) {
  return;
 }
 lcname = ((use_heap = (__builtin_expect((name_len + 1) > ((32 * 1024)), 0))) ? _emalloc((name_len + 1) ) : __builtin_alloca (name_len + 1));
 zend_str_tolower_copy(lcname, name_str, name_len);
 if (zend_hash_find(&module_registry, lcname, name_len + 1, (void **)&module) == -1) {
  do { if (__builtin_expect(use_heap, 0)) _efree((lcname) ); } while (0);
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
   "Extension %s does not exist", name_str);
  return;
 }
 do { if (__builtin_expect(use_heap, 0)) _efree((lcname) ); } while (0);
 do { (name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(name))->u.buffered = ((void *)0); } while (0); (name)->refcount__gc = 1; (name)->is_ref__gc = 0;;;
 do { const char *__s=(module->name); zval *__z = (name); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, name, ((void *)0) ); zval_delref_p(name); _zval_ptr_dtor((&member) ); } while (0);
 intern->ptr = module;
 intern->ref_type = REF_TYPE_OTHER;
 intern->ce = ((void *)0);
}




void zim_reflection_extension___toString(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_module_entry *module;
 string str;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } module = intern->ptr;;
 string_init(&str);
 _extension_string(&str, module, "" );
 { do { const char *__s=(str.string); int __l=str.len - 1; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_extension_getName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 _default_get_entry((this_ptr), "name", sizeof("name"), return_value );
}




void zim_reflection_extension_getVersion(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_module_entry *module;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } module = intern->ptr;;


 if (module->version == ((void *)0)) {
  { { (*return_value).type = 0; }; return;};
 } else {
  { do { const char *__s=(module->version); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
 }
}




void zim_reflection_extension_getFunctions(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_module_entry *module;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } module = intern->ptr;;

 _array_init((return_value), 0 );
 if (module->functions) {
  zval *function;
  zend_function *fptr;
  const zend_function_entry *func = module->functions;


  while (func->fname) {
   int fname_len = strlen(func->fname);
   char *lc_name = zend_str_tolower_dup(func->fname, fname_len);

   if (zend_hash_find((executor_globals.function_table), lc_name, fname_len + 1, (void**) &fptr) == -1) {
    php_error_docref0(((void *)0) , (1<<1L), "Internal error: Cannot find extension function %s in global function table", func->fname);
    func++;
    _efree((lc_name) );
    continue;
   }

   do { (function) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(function))->u.buffered = ((void *)0); } while (0);
   reflection_function_factory(fptr, ((void *)0), function );
   add_assoc_zval_ex(return_value, func->fname, fname_len+1, function);
   func++;
   _efree((lc_name) );
  }
 }
}


static int _addconstant(zend_constant *constant , int num_args, va_list args, zend_hash_key *hash_key)
{
 zval *const_val;
 zval *retval = __builtin_va_arg(args,zval*);
 int number = __builtin_va_arg(args,int);

 if (number == constant->module_number) {
  do { (const_val) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(const_val))->u.buffered = ((void *)0); } while (0);
  *const_val = constant->value;
  _zval_copy_ctor((const_val) );
  (const_val)->refcount__gc = 1; (const_val)->is_ref__gc = 0;;
  add_assoc_zval_ex(retval, constant->name, constant->name_len, const_val);
 }
 return 0;
}




void zim_reflection_extension_getConstants(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_module_entry *module;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } module = intern->ptr;;

 _array_init((return_value), 0 );
 zend_hash_apply_with_arguments((executor_globals.zend_constants) , (apply_func_args_t) _addconstant, 2, return_value, module->module_number);
}



static int _addinientry(zend_ini_entry *ini_entry , int num_args, va_list args, zend_hash_key *hash_key)
{
 zval *retval = __builtin_va_arg(args,zval*);
 int number = __builtin_va_arg(args,int);

 if (number == ini_entry->module_number) {
  if (ini_entry->value) {
   add_assoc_stringl_ex(retval, ini_entry->name, strlen(ini_entry->name)+1, ini_entry->value, ini_entry->value_length, 1);
  } else {
   add_assoc_null_ex(retval, ini_entry->name, strlen(ini_entry->name) + 1);
  }
 }
 return 0;
}




void zim_reflection_extension_getINIEntries(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_module_entry *module;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } module = intern->ptr;;

 _array_init((return_value), 0 );
 zend_hash_apply_with_arguments((executor_globals.ini_directives) , (apply_func_args_t) _addinientry, 2, return_value, module->module_number);
}



static int add_extension_class(zend_class_entry **pce , int num_args, va_list args, zend_hash_key *hash_key)
{
 zval *class_array = __builtin_va_arg(args,zval*), *zclass;
 struct _zend_module_entry *module = __builtin_va_arg(args,struct _zend_module_entry*);
 int add_reflection_class = __builtin_va_arg(args,int);

 if (((*pce)->type == 1) && (*pce)->info.internal.module && !strcasecmp((*pce)->info.internal.module->name, module->name)) {
  if (add_reflection_class) {
   do { (zclass) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(zclass))->u.buffered = ((void *)0); } while (0);
   zend_reflection_class_factory(*pce, zclass );
   add_assoc_zval_ex(class_array, (*pce)->name, (*pce)->name_length + 1, zclass);
  } else {
   add_next_index_stringl(class_array, (*pce)->name, (*pce)->name_length, 1);
  }
 }
 return 0;
}




void zim_reflection_extension_getClasses(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_module_entry *module;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } module = intern->ptr;;

 _array_init((return_value), 0 );
 zend_hash_apply_with_arguments((executor_globals.class_table) , (apply_func_args_t) add_extension_class, 3, return_value, module, 1);
}




void zim_reflection_extension_getClassNames(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_module_entry *module;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } module = intern->ptr;;

 _array_init((return_value), 0 );
 zend_hash_apply_with_arguments((executor_globals.class_table) , (apply_func_args_t) add_extension_class, 3, return_value, module, 0);
}




void zim_reflection_extension_getDependencies(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_module_entry *module;
 const zend_module_dep *dep;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } module = intern->ptr;;

 _array_init((return_value), 0 );

 dep = module->deps;

 if (!dep)
 {
  return;
 }

 while(dep->name) {
  char *relation;
  char *rel_type;
  int len;

  switch(dep->type) {
  case 1:
   rel_type = "Required";
   break;
  case 2:
   rel_type = "Conflicts";
   break;
  case 3:
   rel_type = "Optional";
   break;
  default:
   rel_type = "Error";
   break;
  }

  len = spprintf(&relation, 0, "%s%s%s%s%s",
      rel_type,
      dep->rel ? " " : "",
      dep->rel ? dep->rel : "",
      dep->version ? " " : "",
      dep->version ? dep->version : "");
  add_assoc_stringl_ex(return_value, dep->name, strlen(dep->name)+1, relation, len, 0);
  dep++;
 }
}




void zim_reflection_extension_info(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_module_entry *module;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } module = intern->ptr;;

 php_info_print_module(module );
}




void zim_reflection_extension_isPersistent(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
    zend_module_entry *module;

    if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } module = intern->ptr;;

 { do { zval *__z = (return_value); (*__z).value.lval = ((module->type == 1) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_extension_isTemporary(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_module_entry *module;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } module = intern->ptr;;

 { do { zval *__z = (return_value); (*__z).value.lval = ((module->type == 2) != 0); (*__z).type = 3; } while (0); return; };
}




void zim_reflection_zend_extension_export(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 _reflection_export(ht, return_value, return_value_ptr, this_ptr, return_value_used , reflection_zend_extension_ptr, 1);
}




void zim_reflection_zend_extension___construct(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 zval *name;
 zval *object;
 reflection_object *intern;
 zend_extension *extension;
 char *name_str;
 int name_len;

 if (zend_parse_parameters((ht) , "s", &name_str, &name_len) == -1) {
  return;
 }

 object = (this_ptr);
 intern = (reflection_object *) zend_object_store_get_object(object );
 if (intern == ((void *)0)) {
  return;
 }

 extension = zend_get_extension(name_str);
 if (!extension) {
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
    "Zend Extension %s does not exist", name_str);
  return;
 }
 do { (name) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(name))->u.buffered = ((void *)0); } while (0); (name)->refcount__gc = 1; (name)->is_ref__gc = 0;;;
 do { const char *__s=(extension->name); zval *__z = (name); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0);
 do { zval *member; do { (member) = (zval*)_emalloc((sizeof(zval_gc_info)) ); ((zval_gc_info*)(member))->u.buffered = ((void *)0); } while (0); (member)->refcount__gc = 1; (member)->is_ref__gc = 0;;; do { const char *__s=("name"); int __l=sizeof("name")-1; zval *__z = (member); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); zend_std_write_property(object, member, name, ((void *)0) ); zval_delref_p(name); _zval_ptr_dtor((&member) ); } while (0);
 intern->ptr = extension;
 intern->ref_type = REF_TYPE_OTHER;
 intern->ce = ((void *)0);
}




void zim_reflection_zend_extension___toString(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_extension *extension;
 string str;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } extension = intern->ptr;;
 string_init(&str);
 _zend_extension_string(&str, extension, "" );
 { do { const char *__s=(str.string); int __l=str.len - 1; zval *__z = (return_value); (*__z).value.str.len = __l; (*__z).value.str.val = (0?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_zend_extension_getName(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_extension *extension;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } extension = intern->ptr;;

 { do { const char *__s=(extension->name); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_zend_extension_getVersion(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_extension *extension;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } extension = intern->ptr;;

 { do { const char *__s=(extension->version ? extension->version : ""); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_zend_extension_getAuthor(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_extension *extension;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } extension = intern->ptr;;

 { do { const char *__s=(extension->author ? extension->author : ""); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_zend_extension_getURL(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_extension *extension;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } extension = intern->ptr;;

 { do { const char *__s=(extension->URL ? extension->URL : ""); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}




void zim_reflection_zend_extension_getCopyright(int ht, zval *return_value, zval **return_value_ptr, zval *this_ptr, int return_value_used )
{
 reflection_object *intern;
 zend_extension *extension;

 if (zend_parse_parameters((ht) , "") == -1) {
  return;
 }
 intern = (reflection_object *) zend_object_store_get_object((this_ptr) ); if (intern == ((void *)0) || intern->ptr == ((void *)0)) { if ((executor_globals.exception) && zend_get_class_entry(&(*(executor_globals.exception)) ) == reflection_exception_ptr) { return; } php_error_docref0(((void *)0) , (1<<0L), "Internal error: Failed to retrieve the reflection object"); } extension = intern->ptr;;

 { do { const char *__s=(extension->copyright ? extension->copyright : ""); zval *__z = (return_value); (*__z).value.str.len = strlen(__s); (*__z).value.str.val = (1?_estrndup((__s), ((*__z).value.str.len) ):(char*)__s); (*__z).type = 6; } while (0); return; };
}



static const zend_function_entry reflection_exception_functions[] = {
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};

static const zend_arg_info arginfo_reflection__void[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
};


static const zend_arg_info arginfo_reflection_getModifierNames[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "modifiers", sizeof("modifiers")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_export[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "reflector", sizeof("reflector")-1, "Reflector", sizeof("Reflector")-1, 5, 0, 0},
 { "return", sizeof("return")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_function_entry reflection_functions[] = {
 { "getModifierNames", zim_reflection_getModifierNames, arginfo_reflection_getModifierNames, (zend_uint) (sizeof(arginfo_reflection_getModifierNames)/sizeof(struct _zend_arg_info)-1), 0x100|0x01 },
 { "export", zim_reflection_export, arginfo_reflection_export, (zend_uint) (sizeof(arginfo_reflection_export)/sizeof(struct _zend_arg_info)-1), 0x100|0x01 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};

static const zend_function_entry reflector_functions[] = {
 { "export", ((void *)0), ((void *)0), (zend_uint) (sizeof(((void *)0))/sizeof(struct _zend_arg_info)-1), 0x01|0x02|0x100 },
 { "__toString", ((void *)0), arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0x100|0x02 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};

static const zend_arg_info arginfo_reflection_function_export[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
 { "return", sizeof("return")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_function___construct[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_function_invoke[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "args", sizeof("args")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_function_invokeArgs[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "args", sizeof("args")-1, ((void *)0), 0, 4, 0, 0},
};

static const zend_function_entry reflection_function_abstract_functions[] = {
 { "__clone", zim_reflection___clone, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0x400|0x04 },
 { "__toString", ((void *)0), arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0x100|0x02 },
 { "inNamespace", zim_reflection_function_inNamespace, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isClosure", zim_reflection_function_isClosure, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isDeprecated", zim_reflection_function_isDeprecated, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isInternal", zim_reflection_function_isInternal, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isUserDefined", zim_reflection_function_isUserDefined, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getClosureThis", zim_reflection_function_getClosureThis, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getClosureScopeClass", zim_reflection_function_getClosureScopeClass, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getDocComment", zim_reflection_function_getDocComment, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getEndLine", zim_reflection_function_getEndLine, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getExtension", zim_reflection_function_getExtension, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getExtensionName", zim_reflection_function_getExtensionName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getFileName", zim_reflection_function_getFileName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getName", zim_reflection_function_getName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getNamespaceName", zim_reflection_function_getNamespaceName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getNumberOfParameters", zim_reflection_function_getNumberOfParameters, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getNumberOfRequiredParameters", zim_reflection_function_getNumberOfRequiredParameters, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getParameters", zim_reflection_function_getParameters, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getShortName", zim_reflection_function_getShortName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getStartLine", zim_reflection_function_getStartLine, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getStaticVariables", zim_reflection_function_getStaticVariables, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "returnsReference", zim_reflection_function_returnsReference, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};

static const zend_function_entry reflection_function_functions[] = {
 { "__construct", zim_reflection_function___construct, arginfo_reflection_function___construct, (zend_uint) (sizeof(arginfo_reflection_function___construct)/sizeof(struct _zend_arg_info)-1), 0 },
 { "__toString", zim_reflection_function___toString, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "export", zim_reflection_function_export, arginfo_reflection_function_export, (zend_uint) (sizeof(arginfo_reflection_function_export)/sizeof(struct _zend_arg_info)-1), 0x01|0x100 },
 { "isDisabled", zim_reflection_function_isDisabled, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "invoke", zim_reflection_function_invoke, arginfo_reflection_function_invoke, (zend_uint) (sizeof(arginfo_reflection_function_invoke)/sizeof(struct _zend_arg_info)-1), 0 },
 { "invokeArgs", zim_reflection_function_invokeArgs, arginfo_reflection_function_invokeArgs, (zend_uint) (sizeof(arginfo_reflection_function_invokeArgs)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getClosure", zim_reflection_function_getClosure, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};

static const zend_arg_info arginfo_reflection_method_export[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "class", sizeof("class")-1, ((void *)0), 0, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
 { "return", sizeof("return")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_method___construct[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "class_or_method", sizeof("class_or_method")-1, ((void *)0), 0, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_method_invoke[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "object", sizeof("object")-1, ((void *)0), 0, 0, 0, 0},
 { "args", sizeof("args")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_method_invokeArgs[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "object", sizeof("object")-1, ((void *)0), 0, 0, 0, 0},
 { "args", sizeof("args")-1, ((void *)0), 0, 4, 0, 0},
};

static const zend_arg_info arginfo_reflection_method_setAccessible[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "value", sizeof("value")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_method_getClosure[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "object", sizeof("object")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_function_entry reflection_method_functions[] = {
 { "export", zim_reflection_method_export, arginfo_reflection_method_export, (zend_uint) (sizeof(arginfo_reflection_method_export)/sizeof(struct _zend_arg_info)-1), 0x01|0x100 },
 { "__construct", zim_reflection_method___construct, arginfo_reflection_method___construct, (zend_uint) (sizeof(arginfo_reflection_method___construct)/sizeof(struct _zend_arg_info)-1), 0 },
 { "__toString", zim_reflection_method___toString, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isPublic", zim_reflection_method_isPublic, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isPrivate", zim_reflection_method_isPrivate, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isProtected", zim_reflection_method_isProtected, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isAbstract", zim_reflection_method_isAbstract, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isFinal", zim_reflection_method_isFinal, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isStatic", zim_reflection_method_isStatic, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isConstructor", zim_reflection_method_isConstructor, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isDestructor", zim_reflection_method_isDestructor, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getClosure", zim_reflection_method_getClosure, arginfo_reflection_method_getClosure, (zend_uint) (sizeof(arginfo_reflection_method_getClosure)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getModifiers", zim_reflection_method_getModifiers, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "invoke", zim_reflection_method_invoke, arginfo_reflection_method_invoke, (zend_uint) (sizeof(arginfo_reflection_method_invoke)/sizeof(struct _zend_arg_info)-1), 0 },
 { "invokeArgs", zim_reflection_method_invokeArgs, arginfo_reflection_method_invokeArgs, (zend_uint) (sizeof(arginfo_reflection_method_invokeArgs)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getDeclaringClass", zim_reflection_method_getDeclaringClass, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getPrototype", zim_reflection_method_getPrototype, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "setAccessible", zim_reflection_property_setAccessible, arginfo_reflection_method_setAccessible, (zend_uint) (sizeof(arginfo_reflection_method_setAccessible)/sizeof(struct _zend_arg_info)-1), 0 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};


static const zend_arg_info arginfo_reflection_class_export[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "argument", sizeof("argument")-1, ((void *)0), 0, 0, 0, 0},
 { "return", sizeof("return")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class___construct[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "argument", sizeof("argument")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_getStaticPropertyValue[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
 { "default", sizeof("default")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_setStaticPropertyValue[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
 { "value", sizeof("value")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_hasMethod[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_getMethod[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_getMethods[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "filter", sizeof("filter")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_hasProperty[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_getProperty[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_getProperties[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "filter", sizeof("filter")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_hasConstant[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_getConstant[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_isInstance[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "object", sizeof("object")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_newInstance[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "args", sizeof("args")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_newInstanceWithoutConstructor[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_newInstanceArgs[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "args", sizeof("args")-1, ((void *)0), 0, 4, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_isSubclassOf[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "class", sizeof("class")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_class_implementsInterface[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "interface", sizeof("interface")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_function_entry reflection_class_functions[] = {
 { "__clone", zim_reflection___clone, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0x400|0x04 },
 { "export", zim_reflection_class_export, arginfo_reflection_class_export, (zend_uint) (sizeof(arginfo_reflection_class_export)/sizeof(struct _zend_arg_info)-1), 0x01|0x100 },
 { "__construct", zim_reflection_class___construct, arginfo_reflection_class___construct, (zend_uint) (sizeof(arginfo_reflection_class___construct)/sizeof(struct _zend_arg_info)-1), 0 },
 { "__toString", zim_reflection_class___toString, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getName", zim_reflection_class_getName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isInternal", zim_reflection_class_isInternal, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isUserDefined", zim_reflection_class_isUserDefined, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isInstantiable", zim_reflection_class_isInstantiable, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isCloneable", zim_reflection_class_isCloneable, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getFileName", zim_reflection_class_getFileName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getStartLine", zim_reflection_class_getStartLine, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getEndLine", zim_reflection_class_getEndLine, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getDocComment", zim_reflection_class_getDocComment, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getConstructor", zim_reflection_class_getConstructor, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "hasMethod", zim_reflection_class_hasMethod, arginfo_reflection_class_hasMethod, (zend_uint) (sizeof(arginfo_reflection_class_hasMethod)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getMethod", zim_reflection_class_getMethod, arginfo_reflection_class_getMethod, (zend_uint) (sizeof(arginfo_reflection_class_getMethod)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getMethods", zim_reflection_class_getMethods, arginfo_reflection_class_getMethods, (zend_uint) (sizeof(arginfo_reflection_class_getMethods)/sizeof(struct _zend_arg_info)-1), 0 },
 { "hasProperty", zim_reflection_class_hasProperty, arginfo_reflection_class_hasProperty, (zend_uint) (sizeof(arginfo_reflection_class_hasProperty)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getProperty", zim_reflection_class_getProperty, arginfo_reflection_class_getProperty, (zend_uint) (sizeof(arginfo_reflection_class_getProperty)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getProperties", zim_reflection_class_getProperties, arginfo_reflection_class_getProperties, (zend_uint) (sizeof(arginfo_reflection_class_getProperties)/sizeof(struct _zend_arg_info)-1), 0 },
 { "hasConstant", zim_reflection_class_hasConstant, arginfo_reflection_class_hasConstant, (zend_uint) (sizeof(arginfo_reflection_class_hasConstant)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getConstants", zim_reflection_class_getConstants, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getConstant", zim_reflection_class_getConstant, arginfo_reflection_class_getConstant, (zend_uint) (sizeof(arginfo_reflection_class_getConstant)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getInterfaces", zim_reflection_class_getInterfaces, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getInterfaceNames", zim_reflection_class_getInterfaceNames, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isInterface", zim_reflection_class_isInterface, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getTraits", zim_reflection_class_getTraits, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getTraitNames", zim_reflection_class_getTraitNames, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getTraitAliases", zim_reflection_class_getTraitAliases, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isTrait", zim_reflection_class_isTrait, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isAbstract", zim_reflection_class_isAbstract, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isFinal", zim_reflection_class_isFinal, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getModifiers", zim_reflection_class_getModifiers, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isInstance", zim_reflection_class_isInstance, arginfo_reflection_class_isInstance, (zend_uint) (sizeof(arginfo_reflection_class_isInstance)/sizeof(struct _zend_arg_info)-1), 0 },
 { "newInstance", zim_reflection_class_newInstance, arginfo_reflection_class_newInstance, (zend_uint) (sizeof(arginfo_reflection_class_newInstance)/sizeof(struct _zend_arg_info)-1), 0 },
 { "newInstanceWithoutConstructor", zim_reflection_class_newInstanceWithoutConstructor, arginfo_reflection_class_newInstanceWithoutConstructor, (zend_uint) (sizeof(arginfo_reflection_class_newInstanceWithoutConstructor)/sizeof(struct _zend_arg_info)-1), 0 },
 { "newInstanceArgs", zim_reflection_class_newInstanceArgs, arginfo_reflection_class_newInstanceArgs, (zend_uint) (sizeof(arginfo_reflection_class_newInstanceArgs)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getParentClass", zim_reflection_class_getParentClass, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isSubclassOf", zim_reflection_class_isSubclassOf, arginfo_reflection_class_isSubclassOf, (zend_uint) (sizeof(arginfo_reflection_class_isSubclassOf)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getStaticProperties", zim_reflection_class_getStaticProperties, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getStaticPropertyValue", zim_reflection_class_getStaticPropertyValue, arginfo_reflection_class_getStaticPropertyValue, (zend_uint) (sizeof(arginfo_reflection_class_getStaticPropertyValue)/sizeof(struct _zend_arg_info)-1), 0 },
 { "setStaticPropertyValue", zim_reflection_class_setStaticPropertyValue, arginfo_reflection_class_setStaticPropertyValue, (zend_uint) (sizeof(arginfo_reflection_class_setStaticPropertyValue)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getDefaultProperties", zim_reflection_class_getDefaultProperties, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isIterateable", zim_reflection_class_isIterateable, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "implementsInterface", zim_reflection_class_implementsInterface, arginfo_reflection_class_implementsInterface, (zend_uint) (sizeof(arginfo_reflection_class_implementsInterface)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getExtension", zim_reflection_class_getExtension, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getExtensionName", zim_reflection_class_getExtensionName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "inNamespace", zim_reflection_class_inNamespace, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getNamespaceName", zim_reflection_class_getNamespaceName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getShortName", zim_reflection_class_getShortName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};


static const zend_arg_info arginfo_reflection_object_export[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "argument", sizeof("argument")-1, ((void *)0), 0, 0, 0, 0},
 { "return", sizeof("return")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_object___construct[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "argument", sizeof("argument")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_function_entry reflection_object_functions[] = {
 { "export", zim_reflection_object_export, arginfo_reflection_object_export, (zend_uint) (sizeof(arginfo_reflection_object_export)/sizeof(struct _zend_arg_info)-1), 0x01|0x100 },
 { "__construct", zim_reflection_object___construct, arginfo_reflection_object___construct, (zend_uint) (sizeof(arginfo_reflection_object___construct)/sizeof(struct _zend_arg_info)-1), 0 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};


static const zend_arg_info arginfo_reflection_property_export[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "class", sizeof("class")-1, ((void *)0), 0, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
 { "return", sizeof("return")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_property___construct[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "class", sizeof("class")-1, ((void *)0), 0, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_property_getValue[] = { { ((void *)0), 0, ((void *)0), 0, 0, 0, 0},
 { "object", sizeof("object")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_property_setValue[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "object", sizeof("object")-1, ((void *)0), 0, 0, 0, 0},
 { "value", sizeof("value")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_property_setAccessible[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "visible", sizeof("visible")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_function_entry reflection_property_functions[] = {
 { "__clone", zim_reflection___clone, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0x400|0x04 },
 { "export", zim_reflection_property_export, arginfo_reflection_property_export, (zend_uint) (sizeof(arginfo_reflection_property_export)/sizeof(struct _zend_arg_info)-1), 0x01|0x100 },
 { "__construct", zim_reflection_property___construct, arginfo_reflection_property___construct, (zend_uint) (sizeof(arginfo_reflection_property___construct)/sizeof(struct _zend_arg_info)-1), 0 },
 { "__toString", zim_reflection_property___toString, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getName", zim_reflection_property_getName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getValue", zim_reflection_property_getValue, arginfo_reflection_property_getValue, (zend_uint) (sizeof(arginfo_reflection_property_getValue)/sizeof(struct _zend_arg_info)-1), 0 },
 { "setValue", zim_reflection_property_setValue, arginfo_reflection_property_setValue, (zend_uint) (sizeof(arginfo_reflection_property_setValue)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isPublic", zim_reflection_property_isPublic, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isPrivate", zim_reflection_property_isPrivate, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isProtected", zim_reflection_property_isProtected, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isStatic", zim_reflection_property_isStatic, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isDefault", zim_reflection_property_isDefault, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getModifiers", zim_reflection_property_getModifiers, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getDeclaringClass", zim_reflection_property_getDeclaringClass, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getDocComment", zim_reflection_property_getDocComment, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "setAccessible", zim_reflection_property_setAccessible, arginfo_reflection_property_setAccessible, (zend_uint) (sizeof(arginfo_reflection_property_setAccessible)/sizeof(struct _zend_arg_info)-1), 0 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};

static const zend_arg_info arginfo_reflection_parameter_export[] = { { ((void *)0), 0, ((void *)0), 2, 0, 0, 0},
 { "function", sizeof("function")-1, ((void *)0), 0, 0, 0, 0},
 { "parameter", sizeof("parameter")-1, ((void *)0), 0, 0, 0, 0},
 { "return", sizeof("return")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_parameter___construct[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "function", sizeof("function")-1, ((void *)0), 0, 0, 0, 0},
 { "parameter", sizeof("parameter")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_function_entry reflection_parameter_functions[] = {
 { "__clone", zim_reflection___clone, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0x400|0x04 },
 { "export", zim_reflection_parameter_export, arginfo_reflection_parameter_export, (zend_uint) (sizeof(arginfo_reflection_parameter_export)/sizeof(struct _zend_arg_info)-1), 0x01|0x100 },
 { "__construct", zim_reflection_parameter___construct, arginfo_reflection_parameter___construct, (zend_uint) (sizeof(arginfo_reflection_parameter___construct)/sizeof(struct _zend_arg_info)-1), 0 },
 { "__toString", zim_reflection_parameter___toString, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getName", zim_reflection_parameter_getName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isPassedByReference", zim_reflection_parameter_isPassedByReference, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "canBePassedByValue", zim_reflection_parameter_canBePassedByValue, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getDeclaringFunction", zim_reflection_parameter_getDeclaringFunction, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getDeclaringClass", zim_reflection_parameter_getDeclaringClass, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getClass", zim_reflection_parameter_getClass, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isArray", zim_reflection_parameter_isArray, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isCallable", zim_reflection_parameter_isCallable, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "allowsNull", zim_reflection_parameter_allowsNull, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getPosition", zim_reflection_parameter_getPosition, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isOptional", zim_reflection_parameter_isOptional, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isDefaultValueAvailable", zim_reflection_parameter_isDefaultValueAvailable, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getDefaultValue", zim_reflection_parameter_getDefaultValue, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};

static const zend_arg_info arginfo_reflection_extension_export[] = { { ((void *)0), 0, ((void *)0), 1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
 { "return", sizeof("return")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_arg_info arginfo_reflection_extension___construct[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_function_entry reflection_extension_functions[] = {
 { "__clone", zim_reflection___clone, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0x400|0x04 },
 { "export", zim_reflection_extension_export, arginfo_reflection_extension_export, (zend_uint) (sizeof(arginfo_reflection_extension_export)/sizeof(struct _zend_arg_info)-1), 0x01|0x100 },
 { "__construct", zim_reflection_extension___construct, arginfo_reflection_extension___construct, (zend_uint) (sizeof(arginfo_reflection_extension___construct)/sizeof(struct _zend_arg_info)-1), 0 },
 { "__toString", zim_reflection_extension___toString, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getName", zim_reflection_extension_getName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getVersion", zim_reflection_extension_getVersion, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getFunctions", zim_reflection_extension_getFunctions, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getConstants", zim_reflection_extension_getConstants, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getINIEntries", zim_reflection_extension_getINIEntries, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getClasses", zim_reflection_extension_getClasses, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getClassNames", zim_reflection_extension_getClassNames, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getDependencies", zim_reflection_extension_getDependencies, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "info", zim_reflection_extension_info, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isPersistent", zim_reflection_extension_isPersistent, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "isTemporary", zim_reflection_extension_isTemporary, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};

static const zend_arg_info arginfo_reflection_zend_extension___construct[] = { { ((void *)0), 0, ((void *)0), -1, 0, 0, 0},
 { "name", sizeof("name")-1, ((void *)0), 0, 0, 0, 0},
};

static const zend_function_entry reflection_zend_extension_functions[] = {
 { "__clone", zim_reflection___clone, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0x400|0x04 },
 { "export", zim_reflection_zend_extension_export, arginfo_reflection_extension_export, (zend_uint) (sizeof(arginfo_reflection_extension_export)/sizeof(struct _zend_arg_info)-1), 0x01|0x100 },
 { "__construct", zim_reflection_zend_extension___construct, arginfo_reflection_extension___construct, (zend_uint) (sizeof(arginfo_reflection_extension___construct)/sizeof(struct _zend_arg_info)-1), 0 },
 { "__toString", zim_reflection_zend_extension___toString, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getName", zim_reflection_zend_extension_getName, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getVersion", zim_reflection_zend_extension_getVersion, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getAuthor", zim_reflection_zend_extension_getAuthor, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getURL", zim_reflection_zend_extension_getURL, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { "getCopyright", zim_reflection_zend_extension_getCopyright, arginfo_reflection__void, (zend_uint) (sizeof(arginfo_reflection__void)/sizeof(struct _zend_arg_info)-1), 0 },
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};


const zend_function_entry reflection_ext_functions[] = {
 { ((void *)0), ((void *)0), ((void *)0), 0, 0 }
};

static zend_object_handlers *zend_std_obj_handlers;


static void _reflection_write_property(zval *object, zval *member, zval *value, const zend_literal *key )
{
 if (((*member).type == 6)
  && zend_hash_exists(&zend_get_class_entry(&(*object) )->properties_info, (*member).value.str.val, (*member).value.str.len+1)
  && (((*member).value.str.len == sizeof("name") - 1 && !memcmp((*member).value.str.val, "name", sizeof("name")))
   || ((*member).value.str.len == sizeof("class") - 1 && !memcmp((*member).value.str.val, "class", sizeof("class")))))
 {
  zend_throw_exception_ex(reflection_exception_ptr, 0 ,
   "Cannot set read-only property %s::$%s", zend_get_class_entry(&(*object) )->name, (*member).value.str.val);
 }
 else
 {
  zend_std_obj_handlers->write_property(object, member, value, key );
 }
}


int zm_startup_reflection(int type, int module_number )
{
 zend_class_entry _reflection_entry;

 zend_std_obj_handlers = zend_get_std_object_handlers();
 memcpy(&reflection_object_handlers, zend_get_std_object_handlers(), sizeof(zend_object_handlers));
 reflection_object_handlers.clone_obj = ((void *)0);
 reflection_object_handlers.write_property = _reflection_write_property;

 { const char *cl_name = "ReflectionException"; int _len = sizeof("ReflectionException")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflection_exception_functions; };
 reflection_exception_ptr = zend_register_internal_class_ex(&_reflection_entry, zend_exception_get_default(), ((void *)0) );

 { const char *cl_name = "Reflection"; int _len = sizeof("Reflection")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflection_functions; };
 reflection_ptr = zend_register_internal_class(&_reflection_entry );

 { const char *cl_name = "Reflector"; int _len = sizeof("Reflector")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflector_functions; };
 reflector_ptr = zend_register_internal_interface(&_reflection_entry );

 { const char *cl_name = "ReflectionFunctionAbstract"; int _len = sizeof("ReflectionFunctionAbstract")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflection_function_abstract_functions; };
 _reflection_entry.create_object = reflection_objects_new;
 reflection_function_abstract_ptr = zend_register_internal_class(&_reflection_entry );
 reflection_register_implement(reflection_function_abstract_ptr, reflector_ptr );
 zend_declare_property_string(reflection_function_abstract_ptr, "name", sizeof("name")-1, "", 0x02 );

 { const char *cl_name = "ReflectionFunction"; int _len = sizeof("ReflectionFunction")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflection_function_functions; };
 _reflection_entry.create_object = reflection_objects_new;
 reflection_function_ptr = zend_register_internal_class_ex(&_reflection_entry, reflection_function_abstract_ptr, ((void *)0) );
 zend_declare_property_string(reflection_function_ptr, "name", sizeof("name")-1, "", 0x100 );

 zend_declare_class_constant_long(reflection_function_ptr, "IS_DEPRECATED", sizeof("IS_DEPRECATED")-1, (long)0x40000 );;

 { const char *cl_name = "ReflectionParameter"; int _len = sizeof("ReflectionParameter")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflection_parameter_functions; };
 _reflection_entry.create_object = reflection_objects_new;
 reflection_parameter_ptr = zend_register_internal_class(&_reflection_entry );
 reflection_register_implement(reflection_parameter_ptr, reflector_ptr );
 zend_declare_property_string(reflection_parameter_ptr, "name", sizeof("name")-1, "", 0x100 );

 { const char *cl_name = "ReflectionMethod"; int _len = sizeof("ReflectionMethod")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflection_method_functions; };
 _reflection_entry.create_object = reflection_objects_new;
 reflection_method_ptr = zend_register_internal_class_ex(&_reflection_entry, reflection_function_abstract_ptr, ((void *)0) );
 zend_declare_property_string(reflection_method_ptr, "name", sizeof("name")-1, "", 0x100 );
 zend_declare_property_string(reflection_method_ptr, "class", sizeof("class")-1, "", 0x100 );

 zend_declare_class_constant_long(reflection_method_ptr, "IS_STATIC", sizeof("IS_STATIC")-1, (long)0x01 );;
 zend_declare_class_constant_long(reflection_method_ptr, "IS_PUBLIC", sizeof("IS_PUBLIC")-1, (long)0x100 );;
 zend_declare_class_constant_long(reflection_method_ptr, "IS_PROTECTED", sizeof("IS_PROTECTED")-1, (long)0x200 );;
 zend_declare_class_constant_long(reflection_method_ptr, "IS_PRIVATE", sizeof("IS_PRIVATE")-1, (long)0x400 );;
 zend_declare_class_constant_long(reflection_method_ptr, "IS_ABSTRACT", sizeof("IS_ABSTRACT")-1, (long)0x02 );;
 zend_declare_class_constant_long(reflection_method_ptr, "IS_FINAL", sizeof("IS_FINAL")-1, (long)0x04 );;

 { const char *cl_name = "ReflectionClass"; int _len = sizeof("ReflectionClass")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflection_class_functions; };
 _reflection_entry.create_object = reflection_objects_new;
 reflection_class_ptr = zend_register_internal_class(&_reflection_entry );
 reflection_register_implement(reflection_class_ptr, reflector_ptr );
 zend_declare_property_string(reflection_class_ptr, "name", sizeof("name")-1, "", 0x100 );

 zend_declare_class_constant_long(reflection_class_ptr, "IS_IMPLICIT_ABSTRACT", sizeof("IS_IMPLICIT_ABSTRACT")-1, (long)0x10 );;
 zend_declare_class_constant_long(reflection_class_ptr, "IS_EXPLICIT_ABSTRACT", sizeof("IS_EXPLICIT_ABSTRACT")-1, (long)0x20 );;
 zend_declare_class_constant_long(reflection_class_ptr, "IS_FINAL", sizeof("IS_FINAL")-1, (long)0x40 );;

 { const char *cl_name = "ReflectionObject"; int _len = sizeof("ReflectionObject")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflection_object_functions; };
 _reflection_entry.create_object = reflection_objects_new;
 reflection_object_ptr = zend_register_internal_class_ex(&_reflection_entry, reflection_class_ptr, ((void *)0) );

 { const char *cl_name = "ReflectionProperty"; int _len = sizeof("ReflectionProperty")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflection_property_functions; };
 _reflection_entry.create_object = reflection_objects_new;
 reflection_property_ptr = zend_register_internal_class(&_reflection_entry );
 reflection_register_implement(reflection_property_ptr, reflector_ptr );
 zend_declare_property_string(reflection_property_ptr, "name", sizeof("name")-1, "", 0x100 );
 zend_declare_property_string(reflection_property_ptr, "class", sizeof("class")-1, "", 0x100 );

 zend_declare_class_constant_long(reflection_property_ptr, "IS_STATIC", sizeof("IS_STATIC")-1, (long)0x01 );;
 zend_declare_class_constant_long(reflection_property_ptr, "IS_PUBLIC", sizeof("IS_PUBLIC")-1, (long)0x100 );;
 zend_declare_class_constant_long(reflection_property_ptr, "IS_PROTECTED", sizeof("IS_PROTECTED")-1, (long)0x200 );;
 zend_declare_class_constant_long(reflection_property_ptr, "IS_PRIVATE", sizeof("IS_PRIVATE")-1, (long)0x400 );;

 { const char *cl_name = "ReflectionExtension"; int _len = sizeof("ReflectionExtension")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflection_extension_functions; };
 _reflection_entry.create_object = reflection_objects_new;
 reflection_extension_ptr = zend_register_internal_class(&_reflection_entry );
 reflection_register_implement(reflection_extension_ptr, reflector_ptr );
 zend_declare_property_string(reflection_extension_ptr, "name", sizeof("name")-1, "", 0x100 );

 { const char *cl_name = "ReflectionZendExtension"; int _len = sizeof("ReflectionZendExtension")-1; _reflection_entry.name = zend_new_interned_string(cl_name, _len+1, 0 ); if (_reflection_entry.name == cl_name) { _reflection_entry.name = zend_strndup(cl_name, _len); } _reflection_entry.name_length = _len; _reflection_entry.constructor = ((void *)0); _reflection_entry.destructor = ((void *)0); _reflection_entry.clone = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.create_object = ((void *)0); _reflection_entry.interface_gets_implemented = ((void *)0); _reflection_entry.get_static_method = ((void *)0); _reflection_entry.__call = ((void *)0); _reflection_entry.__callstatic = ((void *)0); _reflection_entry.__tostring = ((void *)0); _reflection_entry.__get = ((void *)0); _reflection_entry.__set = ((void *)0); _reflection_entry.__unset = ((void *)0); _reflection_entry.__isset = ((void *)0); _reflection_entry.serialize_func = ((void *)0); _reflection_entry.unserialize_func = ((void *)0); _reflection_entry.serialize = ((void *)0); _reflection_entry.unserialize = ((void *)0); _reflection_entry.parent = ((void *)0); _reflection_entry.num_interfaces = 0; _reflection_entry.traits = ((void *)0); _reflection_entry.num_traits = 0; _reflection_entry.trait_aliases = ((void *)0); _reflection_entry.trait_precedences = ((void *)0); _reflection_entry.interfaces = ((void *)0); _reflection_entry.get_iterator = ((void *)0); _reflection_entry.iterator_funcs.funcs = ((void *)0); _reflection_entry.info.internal.module = ((void *)0); _reflection_entry.info.internal.builtin_functions = reflection_zend_extension_functions; };
 _reflection_entry.create_object = reflection_objects_new;
 reflection_zend_extension_ptr = zend_register_internal_class(&_reflection_entry );
 reflection_register_implement(reflection_zend_extension_ptr, reflector_ptr );
 zend_declare_property_string(reflection_zend_extension_ptr, "name", sizeof("name")-1, "", 0x100 );

 return 0;
}

void zm_info_reflection(zend_module_entry *zend_module )
{
 php_info_print_table_start();
 php_info_print_table_header(2, "Reflection", "enabled");

 php_info_print_table_row(2, "Version", "$Revision$");

 php_info_print_table_end();
}

zend_module_entry reflection_module_entry = {
 sizeof(zend_module_entry), 20100525, 0, 0, ((void *)0), ((void *)0),
 "Reflection",
 reflection_ext_functions,
 zm_startup_reflection,
 ((void *)0),
 ((void *)0),
 ((void *)0),
 zm_info_reflection,
 "$Revision$",
 0, ((void *)0), ((void *)0), ((void *)0), ((void *)0), 0, 0, ((void *)0), 0, "API" "20100525" ",NTS"
};
