# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_language_scanner.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_language_scanner.c"
# 1 "Zend/zend_language_scanner.l"
# 32 "Zend/zend_language_scanner.l"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_language_scanner_defs.h" 1
# 3 "Zend/zend_language_scanner_defs.h"

enum YYCONDTYPE {
 yycST_IN_SCRIPTING,
 yycST_LOOKING_FOR_PROPERTY,
 yycST_BACKQUOTE,
 yycST_DOUBLE_QUOTES,
 yycST_HEREDOC,
 yycST_LOOKING_FOR_VARNAME,
 yycST_VAR_OFFSET,
 yycINITIAL,
 yycST_END_HEREDOC,
 yycST_NOWDOC,
};
# 33 "Zend/zend_language_scanner.l" 2

# 1 "/usr/include/errno.h" 1 3 4
# 29 "/usr/include/errno.h" 3 4
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
# 30 "/usr/include/errno.h" 2 3 4






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

# 35 "Zend/zend_language_scanner.l" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 1
# 51 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h"
# 1 "Zend/zend_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 2423 "Zend/../main/php_config.h"
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
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
# 61 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
# 99 "/usr/include/sys/types.h" 3 4
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
# 163 "/usr/include/string.h" 2 3 4


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

# 2451 "Zend/../main/php_config.h" 2
# 2 "Zend/zend_config.h" 2
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2
# 68 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h"
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

# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2






# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 76 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2



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

# 80 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2
# 236 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_errors.h" 1
# 237 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_alloc.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_alloc.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/../TSRM/TSRM.h" 1
# 20 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/../TSRM/TSRM.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config.h" 2
# 21 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/../TSRM/TSRM.h" 2
# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/../TSRM/TSRM.h"
typedef long tsrm_intptr_t;
typedef unsigned long tsrm_uintptr_t;
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_alloc.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_alloc.h" 2
# 44 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_alloc.h"
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
# 93 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_alloc.h"
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
# 142 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) int zend_set_memory_limit(size_t memory_limit);

__attribute__ ((visibility("default"))) void start_memory_manager(void);
__attribute__ ((visibility("default"))) void shutdown_memory_manager(int silent, int full_shutdown );
__attribute__ ((visibility("default"))) int is_zend_mm(void);
# 159 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_alloc.h"
__attribute__ ((visibility("default"))) size_t zend_memory_usage(int real_usage );
__attribute__ ((visibility("default"))) size_t zend_memory_peak_usage(int real_usage );


# 191 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_alloc.h"
typedef struct _zend_mm_heap zend_mm_heap;

__attribute__ ((visibility("default"))) zend_mm_heap *zend_mm_startup(void);
__attribute__ ((visibility("default"))) void zend_mm_shutdown(zend_mm_heap *heap, int full_shutdown, int silent );
__attribute__ ((visibility("default"))) void *_zend_mm_alloc(zend_mm_heap *heap, size_t size ) __attribute__ ((__malloc__));
__attribute__ ((visibility("default"))) void _zend_mm_free(zend_mm_heap *heap, void *p );
__attribute__ ((visibility("default"))) void *_zend_mm_realloc(zend_mm_heap *heap, void *p, size_t size );
__attribute__ ((visibility("default"))) size_t _zend_mm_block_size(zend_mm_heap *heap, void *p );
# 211 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_alloc.h"
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
# 238 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_types.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_types.h"
typedef unsigned char zend_bool;
typedef unsigned char zend_uchar;
typedef unsigned int zend_uint;
typedef unsigned long zend_ulong;
typedef unsigned short zend_ushort;






typedef long long int zend_long64;
typedef unsigned long long int zend_ulong64;
# 49 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_types.h"
typedef long zend_intptr_t;
typedef unsigned long zend_uintptr_t;


typedef unsigned int zend_object_handle;
typedef struct _zend_object_handlers zend_object_handlers;

typedef struct _zend_object_value {
 zend_object_handle handle;
 const zend_object_handlers *handlers;
} zend_object_value;
# 240 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_string.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_string.h"
__attribute__ ((visibility("default"))) extern const char *(*zend_new_interned_string)(const char *str, int len, int free_src );
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_snapshot)(void);
__attribute__ ((visibility("default"))) extern void (*zend_interned_strings_restore)(void);

void zend_interned_strings_init(void);
void zend_interned_strings_dtor(void);
# 241 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2


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
# 244 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2
# 256 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h"
static const char long_min_digits[] = "2147483648";
# 271 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_hash.h" 1
# 45 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_hash.h"
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
# 214 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_hash.h"
__attribute__ ((visibility("default"))) void zend_hash_copy(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size);
__attribute__ ((visibility("default"))) void _zend_hash_merge(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, void *tmp, uint size, int overwrite );
__attribute__ ((visibility("default"))) void zend_hash_merge_ex(HashTable *target, HashTable *source, copy_ctor_func_t pCopyConstructor, uint size, merge_checker_func_t pMergeSource, void *pParam);
__attribute__ ((visibility("default"))) int zend_hash_sort(HashTable *ht, sort_func_t sort_func, compare_func_t compare_func, int renumber );
__attribute__ ((visibility("default"))) int zend_hash_compare(HashTable *ht1, HashTable *ht2, compare_func_t compar, zend_bool ordered );
__attribute__ ((visibility("default"))) int zend_hash_minmax(const HashTable *ht, compare_func_t compar, int flag, void **pData );




__attribute__ ((visibility("default"))) int zend_hash_num_elements(const HashTable *ht);

__attribute__ ((visibility("default"))) int zend_hash_rehash(HashTable *ht);
# 261 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_hash.h"
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








# 348 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_hash.h"
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
# 272 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_ts_hash.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_ts_hash.h"
typedef struct _zend_ts_hashtable {
 HashTable hash;
 zend_uint reader;




} TsHashTable;






__attribute__ ((visibility("default"))) int _zend_ts_hash_init(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent );
__attribute__ ((visibility("default"))) int _zend_ts_hash_init_ex(TsHashTable *ht, uint nSize, hash_func_t pHashFunction, dtor_func_t pDestructor, zend_bool persistent, zend_bool bApplyProtection );
__attribute__ ((visibility("default"))) void zend_ts_hash_destroy(TsHashTable *ht);
__attribute__ ((visibility("default"))) void zend_ts_hash_clean(TsHashTable *ht);
# 52 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_ts_hash.h"
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








# 273 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_llist.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_llist.h"
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







# 274 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2





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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_object_handlers.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_object_handlers.h"
union _zend_function;
struct _zend_property_info;
struct _zend_literal;






typedef zval *(*zend_object_read_property_t)(zval *object, zval *member, int type, const struct _zend_literal *key );


typedef zval *(*zend_object_read_dimension_t)(zval *object, zval *offset, int type );
# 46 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_object_handlers.h"
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

# 306 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2

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
# 378 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h"
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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_iterators.h" 1
# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_iterators.h"
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

# 417 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2

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

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_stream.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_stream.h"
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

# 528 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2
typedef struct _zend_utility_functions {
 void (*error_function)(int type, const char *error_filename, const uint error_lineno, const char *format, va_list args) __attribute__ ((format(printf, 4, 0)));
 int (*printf_function)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
 int (*write_function)(const char *str, uint str_length);
 FILE *(*fopen_function)(const char *filename, char **opened_path );
 void (*message_handler)(long message, const void *data );
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
# 591 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h"
int zend_startup(zend_utility_functions *utility_functions, char **extensions );
void zend_shutdown(void);
void zend_register_standard_ini_entries(void);
void zend_post_startup(void);
void zend_set_utility_values(zend_utility_values *utility_values);


__attribute__ ((visibility("default"))) void _zend_bailout(char *filename, uint lineno);

# 629 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h"

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

# 674 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h"

extern __attribute__ ((visibility("default"))) int (*zend_printf)(const char *format, ...) __attribute__ ((format(printf, 1, 2)));
extern __attribute__ ((visibility("default"))) zend_write_func_t zend_write;
extern __attribute__ ((visibility("default"))) FILE *(*zend_fopen)(const char *filename, char **opened_path );
extern __attribute__ ((visibility("default"))) void (*zend_block_interruptions)(void);
extern __attribute__ ((visibility("default"))) void (*zend_unblock_interruptions)(void);
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


# 712 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h"

__attribute__ ((visibility("default"))) void zend_message_dispatcher(long message, const void *data );

__attribute__ ((visibility("default"))) int zend_get_configuration_directive(const char *name, uint name_length, zval *contents);

# 825 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_gc.h" 1
# 81 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_gc.h"
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
# 129 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_gc.h"
} zend_gc_globals;
# 138 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_gc.h"
extern __attribute__ ((visibility("default"))) zend_gc_globals gc_globals;



__attribute__ ((visibility("default"))) int gc_collect_cycles(void);
__attribute__ ((visibility("default"))) void gc_zval_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_zobj_possible_root(zval *zv );
__attribute__ ((visibility("default"))) void gc_remove_zval_from_buffer(zval *zv );
__attribute__ ((visibility("default"))) void gc_globals_ctor(void);
__attribute__ ((visibility("default"))) void gc_globals_dtor(void);
__attribute__ ((visibility("default"))) void gc_init(void);
__attribute__ ((visibility("default"))) void gc_reset(void);

# 180 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_gc.h"
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
# 826 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h"
# 1 "/usr/include/errno.h" 1 3 4
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h" 2

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



# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h" 2





# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_strtod.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_strtod.h"
# 1 "Zend/zend.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_strtod.h" 2


__attribute__ ((visibility("default"))) void zend_freedtoa(char *s);
__attribute__ ((visibility("default"))) char * zend_dtoa(double _d, int mode, int ndigits, int *decpt, int *sign, char **rve);
__attribute__ ((visibility("default"))) double zend_strtod(const char *s00, const char **se);
__attribute__ ((visibility("default"))) double zend_hex_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_oct_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) double zend_bin_strtod(const char *str, const char **endptr);
__attribute__ ((visibility("default"))) int zend_startup_strtod(void);
__attribute__ ((visibility("default"))) int zend_shutdown_strtod(void);

# 34 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_multiply.h" 1
# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h" 2








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
# 105 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h"
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

# 456 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h"
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
# 488 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h"
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
# 525 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h"
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
# 585 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h"
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
# 668 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_operators.h"
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
# 827 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_variables.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_variables.h"


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
# 78 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_variables.h"
__attribute__ ((visibility("default"))) void zval_add_ref(zval **p);


# 828 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend.h" 2

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
# 36 "Zend/zend_language_scanner.l" 2

# 1 "Zend/zend_language_parser.h" 1
# 41 "Zend/zend_language_parser.h"
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
# 306 "Zend/zend_language_parser.h"
typedef int YYSTYPE;
# 38 "Zend/zend_language_scanner.l" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_compile.h" 1
# 53 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_compile.h"
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
# 210 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_compile.h"
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
# 397 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_compile.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h"
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

# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals_macros.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals_macros.h"
typedef struct _zend_compiler_globals zend_compiler_globals;
typedef struct _zend_executor_globals zend_executor_globals;
typedef struct _zend_php_scanner_globals zend_php_scanner_globals;
typedef struct _zend_ini_scanner_globals zend_ini_scanner_globals;









extern __attribute__ ((visibility("default"))) struct _zend_compiler_globals compiler_globals;
int zendparse(void);
# 48 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_executor_globals executor_globals;
# 57 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 67 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals_macros.h"
extern __attribute__ ((visibility("default"))) zend_ini_scanner_globals ini_scanner_globals;



# 29 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_stack.h"
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

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_ptr_stack.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_ptr_stack.h"
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

# 58 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_ptr_stack.h"
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
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_objects.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_objects.h"

__attribute__ ((visibility("default"))) void zend_object_std_init(zend_object *object, zend_class_entry *ce );
__attribute__ ((visibility("default"))) void zend_object_std_dtor(zend_object *object );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_new(zend_object **object, zend_class_entry *class_type );
__attribute__ ((visibility("default"))) void zend_objects_destroy_object(zend_object *object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object *zend_objects_get_address(const zval *object );
__attribute__ ((visibility("default"))) void zend_objects_clone_members(zend_object *new_object, zend_object_value new_obj_val, zend_object *old_object, zend_object_handle handle );
__attribute__ ((visibility("default"))) zend_object_value zend_objects_clone_obj(zval *object );
__attribute__ ((visibility("default"))) void zend_objects_free_object_storage(zend_object *object );

# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_objects_API.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_objects_API.h"
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

# 36 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_modules.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_modules.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_compile.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_modules.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_build.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_modules.h" 2
# 69 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_modules.h"
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
# 118 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_modules.h"
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
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_float.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_float.h"
extern __attribute__ ((visibility("default"))) void zend_init_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_shutdown_fpu(void);
extern __attribute__ ((visibility("default"))) void zend_ensure_fpu_mode(void);
# 212 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_float.h"
# 1 "/usr/include/fpu_control.h" 1 3 4
# 89 "/usr/include/fpu_control.h" 3 4
typedef unsigned int fpu_control_t __attribute__ ((__mode__ (__HI__)));
# 100 "/usr/include/fpu_control.h" 3 4
extern fpu_control_t __fpu_control;
# 213 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_float.h" 2
# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_multibyte.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_multibyte.h"
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


# 39 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h" 2
# 64 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_globals.h"
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
# 398 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_compile.h" 2



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
# 430 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_compile.h"
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



# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_vm_opcodes.h" 1
# 698 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_compile.h" 2
# 820 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_compile.h"

# 39 "Zend/zend_language_scanner.l" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_language_scanner.h" 1
# 25 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_language_scanner.h"
typedef struct _zend_lex_state {
 unsigned int yy_leng;
 unsigned char *yy_start;
 unsigned char *yy_text;
 unsigned char *yy_cursor;
 unsigned char *yy_marker;
 unsigned char *yy_limit;
 int yy_state;
 zend_stack state_stack;

 zend_file_handle *in;
 uint lineno;
 char *filename;


 unsigned char *script_org;
 size_t script_org_size;


 unsigned char *script_filtered;
 size_t script_filtered_size;


 zend_encoding_filter input_filter;
 zend_encoding_filter output_filter;
 const zend_encoding *script_encoding;
} zend_lex_state;



int zend_compare_file_handles(zend_file_handle *fh1, zend_file_handle *fh2);
__attribute__ ((visibility("default"))) void zend_save_lexical_state(zend_lex_state *lex_state );
__attribute__ ((visibility("default"))) void zend_restore_lexical_state(zend_lex_state *lex_state );
__attribute__ ((visibility("default"))) int zend_prepare_string_for_scanning(zval *str, char *filename );
__attribute__ ((visibility("default"))) void zend_multibyte_yyinput_again(zend_encoding_filter old_input_filter, const zend_encoding *old_encoding );
__attribute__ ((visibility("default"))) int zend_multibyte_set_filter(const zend_encoding *onetime_encoding );


# 40 "Zend/zend_language_scanner.l" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_highlight.h" 1
# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_highlight.h"
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
# 41 "Zend/zend_language_scanner.l" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_constants.h" 1
# 33 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_constants.h"
typedef struct _zend_constant {
 zval value;
 int flags;
 char *name;
 uint name_len;
 int module_number;
} zend_constant;
# 56 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_constants.h"

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

# 42 "Zend/zend_language_scanner.l" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_list.h" 1
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_list.h"





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
# 116 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_list.h"

# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h" 2


# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_execute.h" 1
# 30 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_execute.h"
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
# 183 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_execute.h"
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
# 410 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) zval** zend_get_compiled_variable_value(const zend_execute_data *execute_data_ptr, zend_uint var);
# 420 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_execute.h"
__attribute__ ((visibility("default"))) int zend_set_user_opcode_handler(zend_uchar opcode, user_opcode_handler_t handler);
__attribute__ ((visibility("default"))) user_opcode_handler_t zend_get_user_opcode_handler(zend_uchar opcode);


typedef struct _zend_free_op {
 zval* var;

} zend_free_op;

__attribute__ ((visibility("default"))) zval *zend_get_zval_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );
__attribute__ ((visibility("default"))) zval **zend_get_zval_ptr_ptr(int op_type, const znode_op *node, const temp_variable *Ts, zend_free_op *should_free, int type );

__attribute__ ((visibility("default"))) int zend_do_fcall(zend_execute_data *execute_data );
# 451 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_execute.h"

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h" 2




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
# 228 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h"
int zend_next_free_module(void);


__attribute__ ((visibility("default"))) int zend_get_parameters(int ht, int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array(int ht, int param_count, zval **argument_array );
__attribute__ ((visibility("default"))) __attribute__((deprecated)) int zend_get_parameters_ex(int param_count, ...);
__attribute__ ((visibility("default"))) int _zend_get_parameters_array_ex(int param_count, zval ***argument_array );


__attribute__ ((visibility("default"))) int zend_copy_parameters_array(int param_count, zval *argument_array );
# 249 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h"
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
# 293 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h"
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
# 358 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h"
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
# 393 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h"
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
# 441 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h"
__attribute__ ((visibility("default"))) int call_user_function(HashTable *function_table, zval **object_pp, zval *function_name, zval *retval_ptr, zend_uint param_count, zval *params[] );
__attribute__ ((visibility("default"))) int call_user_function_ex(HashTable *function_table, zval **object_pp, zval *function_name, zval **retval_ptr_ptr, zend_uint param_count, zval **params[], int no_separation, HashTable *symbol_table );

__attribute__ ((visibility("default"))) extern const zend_fcall_info empty_fcall_info;
__attribute__ ((visibility("default"))) extern const zend_fcall_info_cache empty_fcall_info_cache;
# 457 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h"
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

# 731 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_API.h"

# 45 "Zend/zend_language_scanner.l" 2

# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_exceptions.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/Zend/zend_exceptions.h"


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


# 47 "Zend/zend_language_scanner.l" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h" 1
# 26 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/TSRM.h" 1
# 27 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config_common.h" 1
# 13 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config_common.h"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config.h" 1
# 1 "Zend/../main/php_config.h" 1
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config.h" 2
# 14 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config_common.h" 2
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
# 15 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config_common.h" 2
# 37 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config_common.h"
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

# 38 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config_common.h" 2



# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/limits.h" 1 3 4
# 42 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config_common.h" 2
# 28 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h" 2


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

# 31 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h" 2
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

# 32 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h" 2


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


# 35 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h" 2
# 90 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h"
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

# 91 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h" 2
# 145 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h"
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
# 190 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h"
__attribute__ ((visibility("default"))) int virtual_utime(const char *filename, struct utimbuf *buf );

__attribute__ ((visibility("default"))) int virtual_chmod(const char *filename, mode_t mode );

__attribute__ ((visibility("default"))) int virtual_chown(const char *filename, uid_t owner, gid_t group, int link );
# 204 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_virtual_cwd.h"
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
# 48 "Zend/zend_language_scanner.l" 2
# 1 "/root/mountpoint-genprog/genprog-many-bugs/php-bug-2012-02-20-0cb26060af-eefefddc0e/php/TSRM/tsrm_config_common.h" 1
# 49 "Zend/zend_language_scanner.l" 2
# 90 "Zend/zend_language_scanner.l"
__attribute__ ((visibility("default"))) zend_php_scanner_globals language_scanner_globals;
# 121 "Zend/zend_language_scanner.l"


static size_t encoding_filter_script_to_internal(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length )
{
 const zend_encoding *internal_encoding = zend_multibyte_get_internal_encoding();
 ((internal_encoding && zend_multibyte_check_lexer_compatibility(internal_encoding)) ? (void) (0) : __assert_fail ("internal_encoding && zend_multibyte_check_lexer_compatibility(internal_encoding)", "Zend/zend_language_scanner.l", 126, __PRETTY_FUNCTION__));
 return zend_multibyte_encoding_converter(to, to_length, from, from_length, internal_encoding, (language_scanner_globals.script_encoding) );
}

static size_t encoding_filter_script_to_intermediate(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length )
{
 return zend_multibyte_encoding_converter(to, to_length, from, from_length, zend_multibyte_encoding_utf8, (language_scanner_globals.script_encoding) );
}

static size_t encoding_filter_intermediate_to_script(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length )
{
 return zend_multibyte_encoding_converter(to, to_length, from, from_length,
(language_scanner_globals.script_encoding), zend_multibyte_encoding_utf8 );
}

static size_t encoding_filter_intermediate_to_internal(unsigned char **to, size_t *to_length, const unsigned char *from, size_t from_length )
{
 const zend_encoding *internal_encoding = zend_multibyte_get_internal_encoding();
 ((internal_encoding && zend_multibyte_check_lexer_compatibility(internal_encoding)) ? (void) (0) : __assert_fail ("internal_encoding && zend_multibyte_check_lexer_compatibility(internal_encoding)", "Zend/zend_language_scanner.l", 144, __PRETTY_FUNCTION__));
 return zend_multibyte_encoding_converter(to, to_length, from, from_length,
internal_encoding, zend_multibyte_encoding_utf8 );
}


static void _yy_push_state(int new_state )
{
 zend_stack_push(&(language_scanner_globals.state_stack), (void *) &(language_scanner_globals.yy_state), sizeof(int));
 (language_scanner_globals.yy_state) = new_state;
}



static void yy_pop_state(void)
{
 int *stack_state;
 zend_stack_top(&(language_scanner_globals.state_stack), (void **) &stack_state);
 (language_scanner_globals.yy_state) = *stack_state;
 zend_stack_del_top(&(language_scanner_globals.state_stack));
}

static void yy_scan_buffer(char *str, unsigned int len )
{
 (language_scanner_globals.yy_cursor) = (unsigned char*)str;
 (language_scanner_globals.yy_limit) = (language_scanner_globals.yy_cursor) + len;
 if (!(language_scanner_globals.yy_start)) {
  (language_scanner_globals.yy_start) = (language_scanner_globals.yy_cursor);
 }
}

void startup_scanner(void)
{
 (compiler_globals.parse_error) = 0;
 (compiler_globals.heredoc) = ((void *)0);
 (compiler_globals.heredoc_len) = 0;
 (compiler_globals.doc_comment) = ((void *)0);
 (compiler_globals.doc_comment_len) = 0;
 zend_stack_init(&(language_scanner_globals.state_stack));
}

void shutdown_scanner(void)
{
 if ((compiler_globals.heredoc)) {
  _efree(((compiler_globals.heredoc)) );
  (compiler_globals.heredoc_len)=0;
 }
 (compiler_globals.parse_error) = 0;
 zend_stack_destroy(&(language_scanner_globals.state_stack));
 { if ((compiler_globals.doc_comment)) { _efree(((compiler_globals.doc_comment)) ); (compiler_globals.doc_comment) = ((void *)0); } (compiler_globals.doc_comment_len) = 0; };
}

__attribute__ ((visibility("default"))) void zend_save_lexical_state(zend_lex_state *lex_state )
{
 lex_state->yy_leng = (language_scanner_globals.yy_leng);
 lex_state->yy_start = (language_scanner_globals.yy_start);
 lex_state->yy_text = (language_scanner_globals.yy_text);
 lex_state->yy_cursor = (language_scanner_globals.yy_cursor);
 lex_state->yy_marker = (language_scanner_globals.yy_marker);
 lex_state->yy_limit = (language_scanner_globals.yy_limit);

 lex_state->state_stack = (language_scanner_globals.state_stack);
 zend_stack_init(&(language_scanner_globals.state_stack));

 lex_state->in = (language_scanner_globals.yy_in);
 lex_state->yy_state = (language_scanner_globals.yy_state);
 lex_state->filename = zend_get_compiled_filename();
 lex_state->lineno = (compiler_globals.zend_lineno);

 lex_state->script_org = (language_scanner_globals.script_org);
 lex_state->script_org_size = (language_scanner_globals.script_org_size);
 lex_state->script_filtered = (language_scanner_globals.script_filtered);
 lex_state->script_filtered_size = (language_scanner_globals.script_filtered_size);
 lex_state->input_filter = (language_scanner_globals.input_filter);
 lex_state->output_filter = (language_scanner_globals.output_filter);
 lex_state->script_encoding = (language_scanner_globals.script_encoding);
}

__attribute__ ((visibility("default"))) void zend_restore_lexical_state(zend_lex_state *lex_state )
{
 (language_scanner_globals.yy_leng) = lex_state->yy_leng;
 (language_scanner_globals.yy_start) = lex_state->yy_start;
 (language_scanner_globals.yy_text) = lex_state->yy_text;
 (language_scanner_globals.yy_cursor) = lex_state->yy_cursor;
 (language_scanner_globals.yy_marker) = lex_state->yy_marker;
 (language_scanner_globals.yy_limit) = lex_state->yy_limit;

 zend_stack_destroy(&(language_scanner_globals.state_stack));
 (language_scanner_globals.state_stack) = lex_state->state_stack;

 (language_scanner_globals.yy_in) = lex_state->in;
 (language_scanner_globals.yy_state) = lex_state->yy_state;
 (compiler_globals.zend_lineno) = lex_state->lineno;
 zend_restore_compiled_filename(lex_state->filename );

 if ((language_scanner_globals.script_filtered)) {
  _efree(((language_scanner_globals.script_filtered)) );
  (language_scanner_globals.script_filtered) = ((void *)0);
 }
 (language_scanner_globals.script_org) = lex_state->script_org;
 (language_scanner_globals.script_org_size) = lex_state->script_org_size;
 (language_scanner_globals.script_filtered) = lex_state->script_filtered;
 (language_scanner_globals.script_filtered_size) = lex_state->script_filtered_size;
 (language_scanner_globals.input_filter) = lex_state->input_filter;
 (language_scanner_globals.output_filter) = lex_state->output_filter;
 (language_scanner_globals.script_encoding) = lex_state->script_encoding;

 if ((compiler_globals.heredoc)) {
  _efree(((compiler_globals.heredoc)) );
  (compiler_globals.heredoc) = ((void *)0);
  (compiler_globals.heredoc_len) = 0;
 }
}

__attribute__ ((visibility("default"))) void zend_destroy_file_handle(zend_file_handle *file_handle )
{
 zend_llist_del_element(&(compiler_globals.open_files), file_handle, (int (*)(void *, void *)) zend_compare_file_handles);

 file_handle->opened_path = ((void *)0);
 if (file_handle->free_filename) {
  file_handle->filename = ((void *)0);
 }
}







static const zend_encoding *zend_multibyte_detect_utf_encoding(const unsigned char *script, size_t script_size )
{
 const unsigned char *p;
 int wchar_size = 2;
 int le = 0;


 p = script;
 while ((p-script) < script_size) {
  p = memchr(p, 0, script_size-(p-script)-2);
  if (!p) {
   break;
  }
  if (*(p+1) == '\0' && *(p+2) == '\0') {
   wchar_size = 4;
   break;
  }


  p += 4;
 }


 p = script;
 while ((p-script) < script_size) {
  if (*p == '\0' && *(p+wchar_size-1) != '\0') {

   le = 0;
   break;
  } else if (*p != '\0' && *(p+wchar_size-1) == '\0') {

   le = 1;
   break;
  }
  p += wchar_size;
 }

 if (wchar_size == 2) {
  return le ? zend_multibyte_encoding_utf16le : zend_multibyte_encoding_utf16be;
 } else {
  return le ? zend_multibyte_encoding_utf32le : zend_multibyte_encoding_utf32be;
 }

 return ((void *)0);
}

static const zend_encoding* zend_multibyte_detect_unicode(void)
{
 const zend_encoding *script_encoding = ((void *)0);
 int bom_size;
 unsigned char *pos1, *pos2;

 if ((language_scanner_globals.script_org_size) < sizeof("\xff\xfe\x00\x00")-1) {
  return ((void *)0);
 }


 if (!memcmp((language_scanner_globals.script_org), "\x00\x00\xfe\xff", sizeof("\x00\x00\xfe\xff")-1)) {
  script_encoding = zend_multibyte_encoding_utf32be;
  bom_size = sizeof("\x00\x00\xfe\xff")-1;
 } else if (!memcmp((language_scanner_globals.script_org), "\xff\xfe\x00\x00", sizeof("\xff\xfe\x00\x00")-1)) {
  script_encoding = zend_multibyte_encoding_utf32le;
  bom_size = sizeof("\xff\xfe\x00\x00")-1;
 } else if (!memcmp((language_scanner_globals.script_org), "\xfe\xff", sizeof("\xfe\xff")-1)) {
  script_encoding = zend_multibyte_encoding_utf16be;
  bom_size = sizeof("\xfe\xff")-1;
 } else if (!memcmp((language_scanner_globals.script_org), "\xff\xfe", sizeof("\xff\xfe")-1)) {
  script_encoding = zend_multibyte_encoding_utf16le;
  bom_size = sizeof("\xff\xfe")-1;
 } else if (!memcmp((language_scanner_globals.script_org), "\xef\xbb\xbf", sizeof("\xef\xbb\xbf")-1)) {
  script_encoding = zend_multibyte_encoding_utf8;
  bom_size = sizeof("\xef\xbb\xbf")-1;
 }

 if (script_encoding) {

  (language_scanner_globals.script_org) += bom_size;
  (language_scanner_globals.script_org_size) -= bom_size;

  return script_encoding;
 }


 if ((pos1 = memchr((language_scanner_globals.script_org), 0, (language_scanner_globals.script_org_size)))) {

  pos2 = (language_scanner_globals.script_org);

  while (pos1 - pos2 >= sizeof("__HALT_COMPILER();")-1) {
   pos2 = memchr(pos2, '_', pos1 - pos2);
   if (!pos2) break;
   pos2++;
   if (strncasecmp((char*)pos2, "_HALT_COMPILER", sizeof("_HALT_COMPILER")-1) == 0) {
    pos2 += sizeof("_HALT_COMPILER")-1;
    while (*pos2 == ' ' ||
        *pos2 == '\t' ||
        *pos2 == '\r' ||
        *pos2 == '\n') {
     pos2++;
    }
    if (*pos2 == '(') {
     pos2++;
     while (*pos2 == ' ' ||
         *pos2 == '\t' ||
         *pos2 == '\r' ||
         *pos2 == '\n') {
      pos2++;
     }
     if (*pos2 == ')') {
      pos2++;
      while (*pos2 == ' ' ||
          *pos2 == '\t' ||
          *pos2 == '\r' ||
          *pos2 == '\n') {
       pos2++;
      }
      if (*pos2 == ';') {
       return ((void *)0);
      }
     }
    }
   }
  }

  return zend_multibyte_detect_utf_encoding((language_scanner_globals.script_org), (language_scanner_globals.script_org_size) );
 }

 return ((void *)0);
}

static const zend_encoding* zend_multibyte_find_script_encoding(void)
{
 const zend_encoding *script_encoding;

 if ((compiler_globals.detect_unicode)) {

  script_encoding = zend_multibyte_detect_unicode();
  if (script_encoding != ((void *)0)) {

   return script_encoding;
  }
 }


 if (!(compiler_globals.script_encoding_list) || !(compiler_globals.script_encoding_list_size)) {
  return ((void *)0);
 }


 if ((compiler_globals.script_encoding_list_size) > 1) {
  return zend_multibyte_encoding_detector((language_scanner_globals.script_org), (language_scanner_globals.script_org_size), (compiler_globals.script_encoding_list), (compiler_globals.script_encoding_list_size) );
 }

 return (compiler_globals.script_encoding_list)[0];
}

__attribute__ ((visibility("default"))) int zend_multibyte_set_filter(const zend_encoding *onetime_encoding )
{
 const zend_encoding *internal_encoding = zend_multibyte_get_internal_encoding();
 const zend_encoding *script_encoding = onetime_encoding ? onetime_encoding: zend_multibyte_find_script_encoding();

 if (!script_encoding) {
  return -1;
 }


 (language_scanner_globals.script_encoding) = script_encoding;
 (language_scanner_globals.input_filter) = ((void *)0);
 (language_scanner_globals.output_filter) = ((void *)0);

 if (!internal_encoding || (language_scanner_globals.script_encoding) == internal_encoding) {
  if (!zend_multibyte_check_lexer_compatibility((language_scanner_globals.script_encoding))) {

   (language_scanner_globals.input_filter) = encoding_filter_script_to_intermediate;
   (language_scanner_globals.output_filter) = encoding_filter_intermediate_to_script;
  } else {
   (language_scanner_globals.input_filter) = ((void *)0);
   (language_scanner_globals.output_filter) = ((void *)0);
  }
  return 0;
 }

 if (zend_multibyte_check_lexer_compatibility(internal_encoding)) {
  (language_scanner_globals.input_filter) = encoding_filter_script_to_internal;
  (language_scanner_globals.output_filter) = ((void *)0);
 } else if (zend_multibyte_check_lexer_compatibility((language_scanner_globals.script_encoding))) {
  (language_scanner_globals.input_filter) = ((void *)0);
  (language_scanner_globals.output_filter) = encoding_filter_script_to_internal;
 } else {

  (language_scanner_globals.input_filter) = encoding_filter_script_to_intermediate;
  (language_scanner_globals.output_filter) = encoding_filter_intermediate_to_internal;
 }

 return 0;
}

__attribute__ ((visibility("default"))) int open_file_for_scanning(zend_file_handle *file_handle )
{
 const char *file_path = ((void *)0);
 char *buf;
 size_t size, offset = 0;


 if ((compiler_globals.start_lineno) == 2 && file_handle->type == ZEND_HANDLE_FP && file_handle->handle.fp) {
  if ((offset = ftell(file_handle->handle.fp)) == -1) {
   offset = 0;
  }
 }

 if (zend_stream_fixup(file_handle, &buf, &size ) == -1) {
  return -1;
 }

 zend_llist_add_element(&(compiler_globals.open_files), file_handle);
 if (file_handle->handle.stream.handle >= (void*)file_handle && file_handle->handle.stream.handle <= (void*)(file_handle+1)) {
  zend_file_handle *fh = (zend_file_handle*)zend_llist_get_last_ex(&(compiler_globals.open_files), ((void *)0));
  size_t diff = (char*)file_handle->handle.stream.handle - (char*)file_handle;
  fh->handle.stream.handle = (void*)(((char*)fh) + diff);
  file_handle->handle.stream.handle = fh->handle.stream.handle;
 }


 (language_scanner_globals.yy_in) = file_handle;
 (language_scanner_globals.yy_start) = ((void *)0);

 if (size != -1) {
  if ((compiler_globals.multibyte)) {
   (language_scanner_globals.script_org) = (unsigned char*)buf;
   (language_scanner_globals.script_org_size) = size;
   (language_scanner_globals.script_filtered) = ((void *)0);

   zend_multibyte_set_filter(((void *)0) );

   if ((language_scanner_globals.input_filter)) {
    if ((size_t)-1 == (language_scanner_globals.input_filter)(&(language_scanner_globals.script_filtered), &(language_scanner_globals.script_filtered_size), (language_scanner_globals.script_org), (language_scanner_globals.script_org_size) )) {
     zend_error_noreturn((1<<6L), "Could not convert the script from the detected "
       "encoding \"%s\" to a compatible encoding", zend_multibyte_get_encoding_name((language_scanner_globals.script_encoding)));
    }
    buf = (char*)(language_scanner_globals.script_filtered);
    size = (language_scanner_globals.script_filtered_size);
   }
  }
  (language_scanner_globals.yy_start) = (unsigned char *)buf - offset;
  yy_scan_buffer(buf, size );
 } else {
  zend_error_noreturn((1<<6L), "zend_stream_mmap() failed");
 }

 (language_scanner_globals.yy_state) = yycINITIAL;

 if (file_handle->opened_path) {
  file_path = file_handle->opened_path;
 } else {
  file_path = file_handle->filename;
 }

 zend_set_compiled_filename(file_path );

 if ((compiler_globals.start_lineno)) {
  (compiler_globals.zend_lineno) = (compiler_globals.start_lineno);
  (compiler_globals.start_lineno) = 0;
 } else {
  (compiler_globals.zend_lineno) = 1;
 }

 (compiler_globals.increment_lineno) = 0;
 return 0;
}



__attribute__ ((visibility("default"))) zend_op_array *compile_file(zend_file_handle *file_handle, int type )
{
 zend_lex_state original_lex_state;
 zend_op_array *op_array = (zend_op_array *) _emalloc((sizeof(zend_op_array)) );
 zend_op_array *original_active_op_array = (compiler_globals.active_op_array);
 zend_op_array *retval=((void *)0);
 int compiler_result;
 zend_bool compilation_successful=0;
 znode retval_znode;
 zend_bool original_in_compilation = (compiler_globals.in_compilation);

 retval_znode.op_type = (1<<0);
 retval_znode.u.constant.type = 1;
 retval_znode.u.constant.value.lval = 1;
 zval_unset_isref_p(&(retval_znode.u.constant));
 zval_set_refcount_p(&(retval_znode.u.constant), 1);

 zend_save_lexical_state(&original_lex_state );

 retval = op_array;

 if (open_file_for_scanning(file_handle )==-1) {
  if (type==(1<<3)) {
   zend_message_dispatcher(2L, file_handle->filename );
   _zend_bailout("Zend/zend_language_scanner.l", 569);
  } else {
   zend_message_dispatcher(1L, file_handle->filename );
  }
  compilation_successful=0;
 } else {
  init_op_array(op_array, 2, 64 );
  (compiler_globals.in_compilation) = 1;
  (compiler_globals.active_op_array) = op_array;
  zend_init_compiler_context();
  compiler_result = zendparse();
  zend_do_return(&retval_znode, 0 );
  (compiler_globals.in_compilation) = original_in_compilation;
  if (compiler_result==1) {
   _zend_bailout("Zend/zend_language_scanner.l", 583);
  }
  compilation_successful=1;
 }

 if (retval) {
  (compiler_globals.active_op_array) = original_active_op_array;
  if (compilation_successful) {
   pass_two(op_array );
   zend_release_labels();
  } else {
   _efree((op_array) );
   retval = ((void *)0);
  }
 }
 zend_restore_lexical_state(&original_lex_state );
 return retval;
}


zend_op_array *compile_filename(int type, zval *filename )
{
 zend_file_handle file_handle;
 zval tmp;
 zend_op_array *retval;
 char *opened_path = ((void *)0);

 if (filename->type != 6) {
  tmp = *filename;
  _zval_copy_ctor((&tmp) );
  if ((&tmp)->type != 6) { _convert_to_string((&tmp) ); };
  filename = &tmp;
 }
 file_handle.filename = filename->value.str.val;
 file_handle.free_filename = 0;
 file_handle.type = ZEND_HANDLE_FILENAME;
 file_handle.opened_path = ((void *)0);
 file_handle.handle.fp = ((void *)0);

 retval = zend_compile_file(&file_handle, type );
 if (retval && file_handle.handle.stream.handle) {
  int dummy = 1;

  if (!file_handle.opened_path) {
   file_handle.opened_path = opened_path = _estrndup((filename->value.str.val), (filename->value.str.len) );
  }

  _zend_hash_add_or_update(&(executor_globals.included_files), file_handle.opened_path, strlen(file_handle.opened_path)+1, (void *)&dummy, sizeof(int), ((void *)0), (1<<1) );

  if (opened_path) {
   _efree((opened_path) );
  }
 }
 zend_destroy_file_handle(&file_handle );

 if (filename==&tmp) {
  _zval_dtor((&tmp) );
 }
 return retval;
}

__attribute__ ((visibility("default"))) int zend_prepare_string_for_scanning(zval *str, char *filename )
{
 char *buf;
 size_t size;


 if ((((str->value.str.val) >= (compiler_globals.interned_strings_start)) && ((str->value.str.val) < (compiler_globals.interned_strings_end)))) {
  char *tmp = _safe_emalloc((1), (str->value.str.len), (32) );
  memcpy(tmp, str->value.str.val, str->value.str.len + 32);
  str->value.str.val = tmp;
 } else {
  str->value.str.val = _safe_erealloc((str->value.str.val), (1), (str->value.str.len), (32) );
 }

 memset(str->value.str.val + str->value.str.len, 0, 32);

 (language_scanner_globals.yy_in) = ((void *)0);
 (language_scanner_globals.yy_start) = ((void *)0);

 buf = str->value.str.val;
 size = str->value.str.len;

 if ((compiler_globals.multibyte)) {
  (language_scanner_globals.script_org) = (unsigned char*)buf;
  (language_scanner_globals.script_org_size) = size;
  (language_scanner_globals.script_filtered) = ((void *)0);

  zend_multibyte_set_filter(zend_multibyte_get_internal_encoding() );

  if ((language_scanner_globals.input_filter)) {
   if ((size_t)-1 == (language_scanner_globals.input_filter)(&(language_scanner_globals.script_filtered), &(language_scanner_globals.script_filtered_size), (language_scanner_globals.script_org), (language_scanner_globals.script_org_size) )) {
    zend_error_noreturn((1<<6L), "Could not convert the script from the detected "
      "encoding \"%s\" to a compatible encoding", zend_multibyte_get_encoding_name((language_scanner_globals.script_encoding)));
   }
   buf = (char*)(language_scanner_globals.script_filtered);
   size = (language_scanner_globals.script_filtered_size);
  }
 }

 yy_scan_buffer(buf, size );

 zend_set_compiled_filename(filename );
 (compiler_globals.zend_lineno) = 1;
 (compiler_globals.increment_lineno) = 0;
 return 0;
}


__attribute__ ((visibility("default"))) size_t zend_get_scanned_file_offset(void)
{
 size_t offset = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_start);
 if ((language_scanner_globals.input_filter)) {
  size_t original_offset = offset, length = 0;
  do {
   unsigned char *p = ((void *)0);
   if ((size_t)-1 == (language_scanner_globals.input_filter)(&p, &length, (language_scanner_globals.script_org), offset )) {
    return (size_t)-1;
   }
   _efree((p) );
   if (length > original_offset) {
    offset--;
   } else if (length < original_offset) {
    offset++;
   }
  } while (original_offset != length);
 }
 return offset;
}


zend_op_array *compile_string(zval *source_string, char *filename )
{
 zend_lex_state original_lex_state;
 zend_op_array *op_array = (zend_op_array *) _emalloc((sizeof(zend_op_array)) );
 zend_op_array *original_active_op_array = (compiler_globals.active_op_array);
 zend_op_array *retval;
 zval tmp;
 int compiler_result;
 zend_bool original_in_compilation = (compiler_globals.in_compilation);

 if (source_string->value.str.len==0) {
  _efree((op_array) );
  return ((void *)0);
 }

 (compiler_globals.in_compilation) = 1;

 tmp = *source_string;
 _zval_copy_ctor((&tmp) );
 if ((&tmp)->type != 6) { _convert_to_string((&tmp) ); };
 source_string = &tmp;

 zend_save_lexical_state(&original_lex_state );
 if (zend_prepare_string_for_scanning(source_string, filename )==-1) {
  _efree((op_array) );
  retval = ((void *)0);
 } else {
  zend_bool orig_interactive = (compiler_globals.interactive);

  (compiler_globals.interactive) = 0;
  init_op_array(op_array, 4, 64 );
  (compiler_globals.interactive) = orig_interactive;
  (compiler_globals.active_op_array) = op_array;
  zend_init_compiler_context();
  (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
  compiler_result = zendparse();

  if ((language_scanner_globals.script_filtered)) {
   _efree(((language_scanner_globals.script_filtered)) );
   (language_scanner_globals.script_filtered) = ((void *)0);
  }

  if (compiler_result==1) {
   (compiler_globals.active_op_array) = original_active_op_array;
   (compiler_globals.unclean_shutdown)=1;
   destroy_op_array(op_array );
   _efree((op_array) );
   retval = ((void *)0);
  } else {
   zend_do_return(((void *)0), 0 );
   (compiler_globals.active_op_array) = original_active_op_array;
   pass_two(op_array );
   zend_release_labels();
   retval = op_array;
  }
 }
 zend_restore_lexical_state(&original_lex_state );
 _zval_dtor((&tmp) );
 (compiler_globals.in_compilation) = original_in_compilation;
 return retval;
}



int highlight_file(char *filename, zend_syntax_highlighter_ini *syntax_highlighter_ini )
{
 zend_lex_state original_lex_state;
 zend_file_handle file_handle;

 file_handle.type = ZEND_HANDLE_FILENAME;
 file_handle.filename = filename;
 file_handle.free_filename = 0;
 file_handle.opened_path = ((void *)0);
 zend_save_lexical_state(&original_lex_state );
 if (open_file_for_scanning(&file_handle )==-1) {
  zend_message_dispatcher(3L, filename );
  zend_restore_lexical_state(&original_lex_state );
  return -1;
 }
 zend_highlight(syntax_highlighter_ini );
 if ((language_scanner_globals.script_filtered)) {
  _efree(((language_scanner_globals.script_filtered)) );
  (language_scanner_globals.script_filtered) = ((void *)0);
 }
 zend_destroy_file_handle(&file_handle );
 zend_restore_lexical_state(&original_lex_state );
 return 0;
}

int highlight_string(zval *str, zend_syntax_highlighter_ini *syntax_highlighter_ini, char *str_name )
{
 zend_lex_state original_lex_state;
 zval tmp = *str;

 str = &tmp;
 _zval_copy_ctor((str) );
 zend_save_lexical_state(&original_lex_state );
 if (zend_prepare_string_for_scanning(str, str_name )==-1) {
  zend_restore_lexical_state(&original_lex_state );
  return -1;
 }
 (language_scanner_globals.yy_state) = yycINITIAL;
 zend_highlight(syntax_highlighter_ini );
 if ((language_scanner_globals.script_filtered)) {
  _efree(((language_scanner_globals.script_filtered)) );
  (language_scanner_globals.script_filtered) = ((void *)0);
 }
 zend_restore_lexical_state(&original_lex_state );
 _zval_dtor((str) );
 return 0;
}

__attribute__ ((visibility("default"))) void zend_multibyte_yyinput_again(zend_encoding_filter old_input_filter, const zend_encoding *old_encoding )
{
 size_t length;
 unsigned char *new_yy_start;


 if (!(language_scanner_globals.input_filter)) {
  if ((language_scanner_globals.script_filtered)) {
   _efree(((language_scanner_globals.script_filtered)) );
   (language_scanner_globals.script_filtered) = ((void *)0);
  }
  (language_scanner_globals.script_filtered_size) = 0;
  length = (language_scanner_globals.script_org_size);
  new_yy_start = (language_scanner_globals.script_org);
 } else {
  if ((size_t)-1 == (language_scanner_globals.input_filter)(&new_yy_start, &length, (language_scanner_globals.script_org), (language_scanner_globals.script_org_size) )) {
   zend_error_noreturn((1<<6L), "Could not convert the script from the detected "
     "encoding \"%s\" to a compatible encoding", zend_multibyte_get_encoding_name((language_scanner_globals.script_encoding)));
  }
  (language_scanner_globals.script_filtered) = new_yy_start;
  (language_scanner_globals.script_filtered_size) = length;
 }

 (language_scanner_globals.yy_cursor) = new_yy_start + ((language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_start));
 (language_scanner_globals.yy_marker) = new_yy_start + ((language_scanner_globals.yy_marker) - (language_scanner_globals.yy_start));
 (language_scanner_globals.yy_text) = new_yy_start + ((language_scanner_globals.yy_text) - (language_scanner_globals.yy_start));
 (language_scanner_globals.yy_limit) = new_yy_start + ((language_scanner_globals.yy_limit) - (language_scanner_globals.yy_start));

 (language_scanner_globals.yy_start) = new_yy_start;
}
# 868 "Zend/zend_language_scanner.l"
static void zend_scan_escape_string(zval *zendlval, char *str, int len, char quote_type )
{
 register char *s, *t;
 char *end;

 do { const char *__s=(str); int __l=len; zval *__z = (zendlval); (*__z).value.str.len = __l; (*__z).value.str.val = (1?_estrndup((__s), (__l) ):(char*)__s); (*__z).type = 6; } while (0);


 s = t = zendlval->value.str.val;
 end = s+zendlval->value.str.len;
 while (s<end) {
  if (*s=='\\') {
   s++;
   if (s >= end) {
    *t++ = '\\';
    break;
   }

   switch(*s) {
    case 'n':
     *t++ = '\n';
     zendlval->value.str.len--;
     break;
    case 'r':
     *t++ = '\r';
     zendlval->value.str.len--;
     break;
    case 't':
     *t++ = '\t';
     zendlval->value.str.len--;
     break;
    case 'f':
     *t++ = '\f';
     zendlval->value.str.len--;
     break;
    case 'v':
     *t++ = '\v';
     zendlval->value.str.len--;
     break;
    case 'e':
     *t++ = '\e';
     zendlval->value.str.len--;
     break;
    case '"':
    case '`':
     if (*s != quote_type) {
      *t++ = '\\';
      *t++ = *s;
      break;
     }
    case '\\':
    case '$':
     *t++ = *s;
     zendlval->value.str.len--;
     break;
    case 'x':
    case 'X':
     if ((((*(s+1))>='0' && (*(s+1))<='9') || ((*(s+1))>='a' && (*(s+1))<='f') || ((*(s+1))>='A' && (*(s+1))<='F'))) {
      char hex_buf[3] = { 0, 0, 0 };

      zendlval->value.str.len--;

      hex_buf[0] = *(++s);
      zendlval->value.str.len--;
      if ((((*(s+1))>='0' && (*(s+1))<='9') || ((*(s+1))>='a' && (*(s+1))<='f') || ((*(s+1))>='A' && (*(s+1))<='F'))) {
       hex_buf[1] = *(++s);
       zendlval->value.str.len--;
      }
      *t++ = (char) strtol(hex_buf, ((void *)0), 16);
     } else {
      *t++ = '\\';
      *t++ = *s;
     }
     break;
    default:

     if (((*s)>='0' && (*s)<='7')) {
      char octal_buf[4] = { 0, 0, 0, 0 };

      octal_buf[0] = *s;
      zendlval->value.str.len--;
      if (((*(s+1))>='0' && (*(s+1))<='7')) {
       octal_buf[1] = *(++s);
       zendlval->value.str.len--;
       if (((*(s+1))>='0' && (*(s+1))<='7')) {
        octal_buf[2] = *(++s);
        zendlval->value.str.len--;
       }
      }
      *t++ = (char) strtol(octal_buf, ((void *)0), 8);
     } else {
      *t++ = '\\';
      *t++ = *s;
     }
     break;
   }
  } else {
   *t++ = *s;
  }

  if (*s == '\n' || (*s == '\r' && (*(s+1) != '\n'))) {
   (compiler_globals.zend_lineno)++;
  }
  s++;
 }
 *t = 0;
 if ((language_scanner_globals.output_filter)) {
  size_t sz = 0;
  s = zendlval->value.str.val;
  (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)s, (size_t)zendlval->value.str.len );
  zendlval->value.str.len = sz;
  _efree((s) );
 }
}


int lex_scan(zval *zendlval )
{
restart:
 (language_scanner_globals.yy_text) = (language_scanner_globals.yy_cursor);

yymore_restart:
# 995 "Zend/zend_language_scanner.c"
{
 unsigned char yych;
 unsigned int yyaccept = 0;
 if ((language_scanner_globals.yy_state) < 5) {
  if ((language_scanner_globals.yy_state) < 2) {
   if ((language_scanner_globals.yy_state) < 1) {
    goto yyc_ST_IN_SCRIPTING;
   } else {
    goto yyc_ST_LOOKING_FOR_PROPERTY;
   }
  } else {
   if ((language_scanner_globals.yy_state) < 3) {
    goto yyc_ST_BACKQUOTE;
   } else {
    if ((language_scanner_globals.yy_state) < 4) {
     goto yyc_ST_DOUBLE_QUOTES;
    } else {
     goto yyc_ST_HEREDOC;
    }
   }
  }
 } else {
  if ((language_scanner_globals.yy_state) < 7) {
   if ((language_scanner_globals.yy_state) < 6) {
    goto yyc_ST_LOOKING_FOR_VARNAME;
   } else {
    goto yyc_ST_VAR_OFFSET;
   }
  } else {
   if ((language_scanner_globals.yy_state) < 8) {
    goto yyc_INITIAL;
   } else {
    if ((language_scanner_globals.yy_state) < 9) {
     goto yyc_ST_END_HEREDOC;
    } else {
     goto yyc_ST_NOWDOC;
    }
   }
  }
 }

yyc_INITIAL:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 128, 128, 0, 0, 128, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   128, 0, 0, 0, 0, 0, 0, 0,
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
  { if (((language_scanner_globals.yy_cursor) + 8) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych != '<') goto yy4;
  ;
  yyaccept = 0;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= '?') {
   if (yych == '%') goto yy7;
   if (yych >= '?') goto yy5;
  } else {
   if (yych <= 'S') {
    if (yych >= 'S') goto yy9;
   } else {
    if (yych == 's') goto yy9;
   }
  }
yy3:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1775 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return 0;
 }

inline_char_handler:

 while (1) {
  unsigned char *ptr = memchr((language_scanner_globals.yy_cursor), '<', (language_scanner_globals.yy_limit) - (language_scanner_globals.yy_cursor));

  (language_scanner_globals.yy_cursor) = ptr ? ptr + 1 : (language_scanner_globals.yy_limit);

  if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
   switch (*(language_scanner_globals.yy_cursor)) {
    case '?':
     if ((compiler_globals.short_tags) || !strncasecmp((char*)(language_scanner_globals.yy_cursor) + 1, "php", 3) || (*((language_scanner_globals.yy_cursor) + 1) == '=')) {
      break;
     }
     continue;
    case '%':
     if ((compiler_globals.asp_tags)) {
      break;
     }
     continue;
    case 's':
    case 'S':


     (language_scanner_globals.yy_cursor)--;
     goto yymore_restart;
    default:
     continue;
   }

   (language_scanner_globals.yy_cursor)--;
  }

  break;
 }

inline_html:
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 if ((language_scanner_globals.output_filter)) {
  int readsize;
  size_t sz = 0;
  readsize = (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng) );
  zendlval->value.str.len = sz;
  if (readsize < (language_scanner_globals.yy_leng)) {
   do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + readsize; (language_scanner_globals.yy_leng) = (unsigned int)readsize; } while(0);
  }
 } else {
   zendlval->value.str.val = (char *) _estrndup((((char*)(language_scanner_globals.yy_text))), ((language_scanner_globals.yy_leng)) );
   zendlval->value.str.len = (language_scanner_globals.yy_leng);
 }
 zendlval->type = 6;
 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng)); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);
 return 311;
}
# 1154 "Zend/zend_language_scanner.c"
yy4:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy3;
yy5:
  ;
  yyaccept = 1;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= 'O') {
   if (yych == '=') goto yy45;
  } else {
   if (yych <= 'P') goto yy47;
   if (yych == 'p') goto yy47;
  }
yy6:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1763 "Zend/zend_language_scanner.l"
  {
 if ((compiler_globals.short_tags)) {
  zendlval->value.str.val = ((char*)(language_scanner_globals.yy_text));
  zendlval->value.str.len = (language_scanner_globals.yy_leng);
  zendlval->type = 6;
  (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
  return 372;
 } else {
  goto inline_char_handler;
 }
}
# 1184 "Zend/zend_language_scanner.c"
yy7:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '=') goto yy43;
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1740 "Zend/zend_language_scanner.l"
  {
 if ((compiler_globals.asp_tags)) {
  zendlval->value.str.val = ((char*)(language_scanner_globals.yy_text));
  zendlval->value.str.len = (language_scanner_globals.yy_leng);
  zendlval->type = 6;
  (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
  return 372;
 } else {
  goto inline_char_handler;
 }
}
# 1203 "Zend/zend_language_scanner.c"
yy9:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy11;
  if (yych == 'c') goto yy11;
yy10:
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  if (yyaccept <= 0) {
   goto yy3;
  } else {
   goto yy6;
  }
yy11:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy12;
  if (yych != 'r') goto yy10;
yy12:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy13;
  if (yych != 'i') goto yy10;
yy13:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy14;
  if (yych != 'p') goto yy10;
yy14:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy15;
  if (yych != 't') goto yy10;
yy15:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy10;
  if (yych == 'l') goto yy10;
  goto yy17;
yy16:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 8) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy17:
  ;
  if (yybm[0+yych] & 128) {
   goto yy16;
  }
  if (yych == 'L') goto yy18;
  if (yych != 'l') goto yy10;
yy18:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy19;
  if (yych != 'a') goto yy10;
yy19:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy20;
  if (yych != 'n') goto yy10;
yy20:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'G') goto yy21;
  if (yych != 'g') goto yy10;
yy21:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy22;
  if (yych != 'u') goto yy10;
yy22:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy23;
  if (yych != 'a') goto yy10;
yy23:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'G') goto yy24;
  if (yych != 'g') goto yy10;
yy24:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy25;
  if (yych != 'e') goto yy10;
yy25:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '\r') {
   if (yych <= 0x08) goto yy10;
   if (yych <= '\n') goto yy25;
   if (yych <= '\f') goto yy10;
   goto yy25;
  } else {
   if (yych <= ' ') {
    if (yych <= 0x1F) goto yy10;
    goto yy25;
   } else {
    if (yych != '=') goto yy10;
   }
  }
yy27:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 5) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '!') {
   if (yych <= '\f') {
    if (yych <= 0x08) goto yy10;
    if (yych <= '\n') goto yy27;
    goto yy10;
   } else {
    if (yych <= '\r') goto yy27;
    if (yych == ' ') goto yy27;
    goto yy10;
   }
  } else {
   if (yych <= 'O') {
    if (yych <= '"') goto yy30;
    if (yych == '\'') goto yy31;
    goto yy10;
   } else {
    if (yych <= 'P') goto yy29;
    if (yych != 'p') goto yy10;
   }
  }
yy29:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy42;
  if (yych == 'h') goto yy42;
  goto yy10;
yy30:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy39;
  if (yych == 'p') goto yy39;
  goto yy10;
yy31:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy32;
  if (yych != 'p') goto yy10;
yy32:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy33;
  if (yych != 'h') goto yy10;
yy33:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy34;
  if (yych != 'p') goto yy10;
yy34:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '\'') goto yy10;
yy35:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '\r') {
   if (yych <= 0x08) goto yy10;
   if (yych <= '\n') goto yy35;
   if (yych <= '\f') goto yy10;
   goto yy35;
  } else {
   if (yych <= ' ') {
    if (yych <= 0x1F) goto yy10;
    goto yy35;
   } else {
    if (yych != '>') goto yy10;
   }
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1700 "Zend/zend_language_scanner.l"
  {
 unsigned char *bracket = (unsigned char*)zend_memrchr(((char*)(language_scanner_globals.yy_text)), '<', (language_scanner_globals.yy_leng) - (sizeof("script language=php>") - 1));

 if (bracket != (language_scanner_globals.yy_text)) {

  (language_scanner_globals.yy_cursor) = bracket;
  goto inline_html;
 }

 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng)); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);
 zendlval->value.str.val = ((char*)(language_scanner_globals.yy_text));
 zendlval->value.str.len = (language_scanner_globals.yy_leng);
 zendlval->type = 6;
 (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
 return 372;
}
# 1406 "Zend/zend_language_scanner.c"
yy39:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy40;
  if (yych != 'h') goto yy10;
yy40:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy41;
  if (yych != 'p') goto yy10;
yy41:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '"') goto yy35;
  goto yy10;
yy42:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy35;
  if (yych == 'p') goto yy35;
  goto yy10;
yy43:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1718 "Zend/zend_language_scanner.l"
  {
 if ((compiler_globals.asp_tags)) {
  zendlval->value.str.val = ((char*)(language_scanner_globals.yy_text));
  zendlval->value.str.len = (language_scanner_globals.yy_leng);
  zendlval->type = 6;
  (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
  return 373;
 } else {
  goto inline_char_handler;
 }
}
# 1445 "Zend/zend_language_scanner.c"
yy45:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1731 "Zend/zend_language_scanner.l"
  {
 zendlval->value.str.val = ((char*)(language_scanner_globals.yy_text));
 zendlval->value.str.len = (language_scanner_globals.yy_leng);
 zendlval->type = 6;
 (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
 return 373;
}
# 1459 "Zend/zend_language_scanner.c"
yy47:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy48;
  if (yych != 'h') goto yy10;
yy48:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy49;
  if (yych != 'p') goto yy10;
yy49:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '\f') {
   if (yych <= 0x08) goto yy10;
   if (yych >= '\v') goto yy10;
  } else {
   if (yych <= '\r') goto yy52;
   if (yych != ' ') goto yy10;
  }
yy50:
  ;
  ++(language_scanner_globals.yy_cursor);
yy51:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1753 "Zend/zend_language_scanner.l"
  {
 zendlval->value.str.val = ((char*)(language_scanner_globals.yy_text));
 zendlval->value.str.len = (language_scanner_globals.yy_leng);
 zendlval->type = 6;
 { if (((char*)(language_scanner_globals.yy_text))[(language_scanner_globals.yy_leng)-1] == '\n' || ((char*)(language_scanner_globals.yy_text))[(language_scanner_globals.yy_leng)-1] == '\r') { (compiler_globals.zend_lineno)++; } };
 (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
 return 372;
}
# 1495 "Zend/zend_language_scanner.c"
yy52:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '\n') goto yy50;
  goto yy51;
 }

yyc_ST_BACKQUOTE:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 0, 0, 0, 0, 0, 0,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych != '$') goto yy60;
  } else {
   if (yych <= '`') goto yy58;
   if (yych == '{') goto yy57;
   goto yy60;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '_') {
   if (yych <= '@') goto yy56;
   if (yych <= 'Z') goto yy63;
   if (yych >= '_') goto yy63;
  } else {
   if (yych <= 'z') {
    if (yych >= 'a') goto yy63;
   } else {
    if (yych <= '{') goto yy66;
    if (yych >= 0x7F) goto yy63;
   }
  }
yy56:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2226 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return 0;
 }
 if (((char*)(language_scanner_globals.yy_text))[0] == '\\' && (language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  (language_scanner_globals.yy_cursor)++;
 }

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '`':
    break;
   case '$':
    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) || *(language_scanner_globals.yy_cursor) == '{') {
     break;
    }
    continue;
   case '{':
    if (*(language_scanner_globals.yy_cursor) == '$') {
     break;
    }
    continue;
   case '\\':
    if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
     (language_scanner_globals.yy_cursor)++;
    }

   default:
    continue;
  }

  (language_scanner_globals.yy_cursor)--;
  break;
 }

 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 zend_scan_escape_string(zendlval, ((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), '`' );
 return 314;
}
# 1607 "Zend/zend_language_scanner.c"
yy57:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '$') goto yy61;
  goto yy56;
yy58:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2170 "Zend/zend_language_scanner.l"
  {
 (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
 return '`';
}
# 1623 "Zend/zend_language_scanner.c"
yy60:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy56;
yy61:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2157 "Zend/zend_language_scanner.l"
  {
 zendlval->value.lval = (long) '{';
 _yy_push_state(yycST_IN_SCRIPTING );
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 1; (language_scanner_globals.yy_leng) = (unsigned int)1; } while(0);
 return 379;
}
# 1640 "Zend/zend_language_scanner.c"
yy63:
  ;
  yyaccept = 0;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 128) {
   goto yy63;
  }
  if (yych == '-') goto yy68;
  if (yych == '[') goto yy70;
yy65:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1857 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup(((((char*)(language_scanner_globals.yy_text))+1)), (((language_scanner_globals.yy_leng)-1)) ); zendlval->value.str.len = ((language_scanner_globals.yy_leng)-1); };
 zendlval->type = 6;
 return 309;
}
# 1662 "Zend/zend_language_scanner.c"
yy66:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1442 "Zend/zend_language_scanner.l"
  {
 _yy_push_state(yycST_LOOKING_FOR_VARNAME );
 return 378;
}
# 1673 "Zend/zend_language_scanner.c"
yy68:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '>') goto yy72;
yy69:
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  goto yy65;
yy70:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1849 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 1; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 1; } while(0);
 _yy_push_state(yycST_VAR_OFFSET );
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup(((((char*)(language_scanner_globals.yy_text))+1)), (((language_scanner_globals.yy_leng)-1)) ); zendlval->value.str.len = ((language_scanner_globals.yy_leng)-1); };
 zendlval->type = 6;
 return 309;
}
# 1695 "Zend/zend_language_scanner.c"
yy72:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych <= '@') goto yy69;
   if (yych <= 'Z') goto yy73;
   if (yych <= '^') goto yy69;
  } else {
   if (yych <= '`') goto yy69;
   if (yych <= 'z') goto yy73;
   if (yych <= '~') goto yy69;
  }
yy73:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1839 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 3; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 3; } while(0);
 _yy_push_state(yycST_LOOKING_FOR_PROPERTY );
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup(((((char*)(language_scanner_globals.yy_text))+1)), (((language_scanner_globals.yy_leng)-1)) ); zendlval->value.str.len = ((language_scanner_globals.yy_leng)-1); };
 zendlval->type = 6;
 return 309;
}
# 1721 "Zend/zend_language_scanner.c"
 }

yyc_ST_DOUBLE_QUOTES:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 0, 0, 0, 0, 0, 0,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych <= '#') {
   if (yych == '"') goto yy80;
   goto yy82;
  } else {
   if (yych <= '$') goto yy77;
   if (yych == '{') goto yy79;
   goto yy82;
  }
yy77:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '_') {
   if (yych <= '@') goto yy78;
   if (yych <= 'Z') goto yy85;
   if (yych >= '_') goto yy85;
  } else {
   if (yych <= 'z') {
    if (yych >= 'a') goto yy85;
   } else {
    if (yych <= '{') goto yy88;
    if (yych >= 0x7F) goto yy85;
   }
  }
yy78:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2176 "Zend/zend_language_scanner.l"
  {
 if ((compiler_globals.doc_comment_len)) {
  (language_scanner_globals.yy_cursor) += (compiler_globals.doc_comment_len) - 1;
  (compiler_globals.doc_comment_len) = (0);

  goto double_quotes_scan_done;
 }

 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return 0;
 }
 if (((char*)(language_scanner_globals.yy_text))[0] == '\\' && (language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  (language_scanner_globals.yy_cursor)++;
 }

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '"':
    break;
   case '$':
    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) || *(language_scanner_globals.yy_cursor) == '{') {
     break;
    }
    continue;
   case '{':
    if (*(language_scanner_globals.yy_cursor) == '$') {
     break;
    }
    continue;
   case '\\':
    if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
     (language_scanner_globals.yy_cursor)++;
    }

   default:
    continue;
  }

  (language_scanner_globals.yy_cursor)--;
  break;
 }

double_quotes_scan_done:
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 zend_scan_escape_string(zendlval, ((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng), '"' );
 return 314;
}
# 1838 "Zend/zend_language_scanner.c"
yy79:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '$') goto yy83;
  goto yy78;
yy80:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2165 "Zend/zend_language_scanner.l"
  {
 (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
 return '"';
}
# 1854 "Zend/zend_language_scanner.c"
yy82:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy78;
yy83:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2157 "Zend/zend_language_scanner.l"
  {
 zendlval->value.lval = (long) '{';
 _yy_push_state(yycST_IN_SCRIPTING );
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 1; (language_scanner_globals.yy_leng) = (unsigned int)1; } while(0);
 return 379;
}
# 1871 "Zend/zend_language_scanner.c"
yy85:
  ;
  yyaccept = 0;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 128) {
   goto yy85;
  }
  if (yych == '-') goto yy90;
  if (yych == '[') goto yy92;
yy87:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1857 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup(((((char*)(language_scanner_globals.yy_text))+1)), (((language_scanner_globals.yy_leng)-1)) ); zendlval->value.str.len = ((language_scanner_globals.yy_leng)-1); };
 zendlval->type = 6;
 return 309;
}
# 1893 "Zend/zend_language_scanner.c"
yy88:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1442 "Zend/zend_language_scanner.l"
  {
 _yy_push_state(yycST_LOOKING_FOR_VARNAME );
 return 378;
}
# 1904 "Zend/zend_language_scanner.c"
yy90:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '>') goto yy94;
yy91:
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  goto yy87;
yy92:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1849 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 1; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 1; } while(0);
 _yy_push_state(yycST_VAR_OFFSET );
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup(((((char*)(language_scanner_globals.yy_text))+1)), (((language_scanner_globals.yy_leng)-1)) ); zendlval->value.str.len = ((language_scanner_globals.yy_leng)-1); };
 zendlval->type = 6;
 return 309;
}
# 1926 "Zend/zend_language_scanner.c"
yy94:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych <= '@') goto yy91;
   if (yych <= 'Z') goto yy95;
   if (yych <= '^') goto yy91;
  } else {
   if (yych <= '`') goto yy91;
   if (yych <= 'z') goto yy95;
   if (yych <= '~') goto yy91;
  }
yy95:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1839 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 3; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 3; } while(0);
 _yy_push_state(yycST_LOOKING_FOR_PROPERTY );
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup(((((char*)(language_scanner_globals.yy_text))+1)), (((language_scanner_globals.yy_leng)-1)) ); zendlval->value.str.len = ((language_scanner_globals.yy_leng)-1); };
 zendlval->type = 6;
 return 309;
}
# 1952 "Zend/zend_language_scanner.c"
 }

yyc_ST_END_HEREDOC:
 ;
 { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
 yych = *(language_scanner_globals.yy_cursor);
 ;
 ++(language_scanner_globals.yy_cursor);
 ;
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2144 "Zend/zend_language_scanner.l"
 {
 (language_scanner_globals.yy_cursor) += (compiler_globals.heredoc_len) - 1;
 (language_scanner_globals.yy_leng) = (compiler_globals.heredoc_len);

 (*zendlval).value.str.val = (compiler_globals.heredoc);
 (*zendlval).value.str.len = (compiler_globals.heredoc_len);
 (compiler_globals.heredoc) = ((void *)0);
 (compiler_globals.heredoc_len) = 0;
 (language_scanner_globals.yy_state) = yycST_IN_SCRIPTING;
 return 377;
}
# 1975 "Zend/zend_language_scanner.c"

yyc_ST_HEREDOC:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 0, 0, 0, 0, 0, 0,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych == '$') goto yy103;
  if (yych == '{') goto yy105;
  goto yy106;
yy103:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '_') {
   if (yych <= '@') goto yy104;
   if (yych <= 'Z') goto yy109;
   if (yych >= '_') goto yy109;
  } else {
   if (yych <= 'z') {
    if (yych >= 'a') goto yy109;
   } else {
    if (yych <= '{') goto yy112;
    if (yych >= 0x7F) goto yy109;
   }
  }
yy104:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2268 "Zend/zend_language_scanner.l"
  {
 int newline = 0;

 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return 0;
 }

 (language_scanner_globals.yy_cursor)--;

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '\r':
    if (*(language_scanner_globals.yy_cursor) == '\n') {
     (language_scanner_globals.yy_cursor)++;
    }

   case '\n':

    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) && (compiler_globals.heredoc_len) < (language_scanner_globals.yy_limit) - (language_scanner_globals.yy_cursor) && !memcmp((language_scanner_globals.yy_cursor), (compiler_globals.heredoc), (compiler_globals.heredoc_len))) {
     unsigned char *end = (language_scanner_globals.yy_cursor) + (compiler_globals.heredoc_len);

     if (*end == ';') {
      end++;
     }

     if (*end == '\n' || *end == '\r') {


      if ((language_scanner_globals.yy_cursor)[-2] == '\r' && (language_scanner_globals.yy_cursor)[-1] == '\n') {
       newline = 2;
      } else {
       newline = 1;
      }

      (compiler_globals.increment_lineno) = 1;
      (language_scanner_globals.yy_state) = yycST_END_HEREDOC;

      goto heredoc_scan_done;
     }
    }
    continue;
   case '$':
    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) || *(language_scanner_globals.yy_cursor) == '{') {
     break;
    }
    continue;
   case '{':
    if (*(language_scanner_globals.yy_cursor) == '$') {
     break;
    }
    continue;
   case '\\':
    if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit) && *(language_scanner_globals.yy_cursor) != '\n' && *(language_scanner_globals.yy_cursor) != '\r') {
     (language_scanner_globals.yy_cursor)++;
    }

   default:
    continue;
  }

  (language_scanner_globals.yy_cursor)--;
  break;
 }

heredoc_scan_done:
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 zend_scan_escape_string(zendlval, ((char*)(language_scanner_globals.yy_text)), (language_scanner_globals.yy_leng) - newline, 0 );
 return 314;
}
# 2108 "Zend/zend_language_scanner.c"
yy105:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '$') goto yy107;
  goto yy104;
yy106:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy104;
yy107:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2157 "Zend/zend_language_scanner.l"
  {
 zendlval->value.lval = (long) '{';
 _yy_push_state(yycST_IN_SCRIPTING );
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 1; (language_scanner_globals.yy_leng) = (unsigned int)1; } while(0);
 return 379;
}
# 2130 "Zend/zend_language_scanner.c"
yy109:
  ;
  yyaccept = 0;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 128) {
   goto yy109;
  }
  if (yych == '-') goto yy114;
  if (yych == '[') goto yy116;
yy111:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1857 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup(((((char*)(language_scanner_globals.yy_text))+1)), (((language_scanner_globals.yy_leng)-1)) ); zendlval->value.str.len = ((language_scanner_globals.yy_leng)-1); };
 zendlval->type = 6;
 return 309;
}
# 2152 "Zend/zend_language_scanner.c"
yy112:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1442 "Zend/zend_language_scanner.l"
  {
 _yy_push_state(yycST_LOOKING_FOR_VARNAME );
 return 378;
}
# 2163 "Zend/zend_language_scanner.c"
yy114:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '>') goto yy118;
yy115:
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  goto yy111;
yy116:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1849 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 1; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 1; } while(0);
 _yy_push_state(yycST_VAR_OFFSET );
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup(((((char*)(language_scanner_globals.yy_text))+1)), (((language_scanner_globals.yy_leng)-1)) ); zendlval->value.str.len = ((language_scanner_globals.yy_leng)-1); };
 zendlval->type = 6;
 return 309;
}
# 2185 "Zend/zend_language_scanner.c"
yy118:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych <= '@') goto yy115;
   if (yych <= 'Z') goto yy119;
   if (yych <= '^') goto yy115;
  } else {
   if (yych <= '`') goto yy115;
   if (yych <= 'z') goto yy119;
   if (yych <= '~') goto yy115;
  }
yy119:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1839 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + (language_scanner_globals.yy_leng) - 3; (language_scanner_globals.yy_leng) = (unsigned int)(language_scanner_globals.yy_leng) - 3; } while(0);
 _yy_push_state(yycST_LOOKING_FOR_PROPERTY );
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup(((((char*)(language_scanner_globals.yy_text))+1)), (((language_scanner_globals.yy_leng)-1)) ); zendlval->value.str.len = ((language_scanner_globals.yy_leng)-1); };
 zendlval->type = 6;
 return 309;
}
# 2211 "Zend/zend_language_scanner.c"
 }

yyc_ST_IN_SCRIPTING:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 192, 64, 0, 0, 64, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   192, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
    60, 60, 44, 44, 44, 44, 44, 44,
    44, 44, 0, 0, 0, 0, 0, 0,
     0, 36, 36, 36, 36, 36, 36, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 0, 0, 0, 0, 4,
     0, 36, 36, 36, 36, 36, 36, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 0, 0, 0, 0, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
     4, 4, 4, 4, 4, 4, 4, 4,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 16) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  switch (yych) {
  case 0x00:
  case 0x01:
  case 0x02:
  case 0x03:
  case 0x04:
  case 0x05:
  case 0x06:
  case 0x07:
  case 0x08:
  case '\v':
  case '\f':
  case 0x0E:
  case 0x0F:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1A:
  case 0x1B:
  case 0x1C:
  case 0x1D:
  case 0x1E:
  case 0x1F: goto yy183;
  case '\t':
  case '\n':
  case '\r':
  case ' ': goto yy139;
  case '!': goto yy152;
  case '"': goto yy179;
  case '#': goto yy175;
  case '$': goto yy164;
  case '%': goto yy158;
  case '&': goto yy159;
  case '\'': goto yy177;
  case '(': goto yy146;
  case ')':
  case ',':
  case ';':
  case '@':
  case '[':
  case ']':
  case '~': goto yy165;
  case '*': goto yy155;
  case '+': goto yy151;
  case '-': goto yy137;
  case '.': goto yy157;
  case '/': goto yy156;
  case '0': goto yy171;
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9': goto yy173;
  case ':': goto yy141;
  case '<': goto yy153;
  case '=': goto yy149;
  case '>': goto yy154;
  case '?': goto yy166;
  case 'A':
  case 'a': goto yy132;
  case 'B':
  case 'b': goto yy134;
  case 'C':
  case 'c': goto yy127;
  case 'D':
  case 'd': goto yy125;
  case 'E':
  case 'e': goto yy123;
  case 'F':
  case 'f': goto yy126;
  case 'G':
  case 'g': goto yy135;
  case 'I':
  case 'i': goto yy130;
  case 'L':
  case 'l': goto yy150;
  case 'N':
  case 'n': goto yy144;
  case 'O':
  case 'o': goto yy162;
  case 'P':
  case 'p': goto yy136;
  case 'R':
  case 'r': goto yy128;
  case 'S':
  case 's': goto yy133;
  case 'T':
  case 't': goto yy129;
  case 'U':
  case 'u': goto yy147;
  case 'V':
  case 'v': goto yy145;
  case 'W':
  case 'w': goto yy131;
  case 'X':
  case 'x': goto yy163;
  case '\\': goto yy142;
  case '^': goto yy161;
  case '_': goto yy148;
  case '`': goto yy181;
  case '{': goto yy167;
  case '|': goto yy160;
  case '}': goto yy169;
  default: goto yy174;
  }
yy123:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  switch ((yych = *(language_scanner_globals.yy_cursor))) {
  case 'C':
  case 'c': goto yy726;
  case 'L':
  case 'l': goto yy727;
  case 'M':
  case 'm': goto yy728;
  case 'N':
  case 'n': goto yy729;
  case 'V':
  case 'v': goto yy730;
  case 'X':
  case 'x': goto yy731;
  default: goto yy186;
  }
yy124:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1880 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup((((char*)(language_scanner_globals.yy_text))), ((language_scanner_globals.yy_leng)) ); zendlval->value.str.len = (language_scanner_globals.yy_leng); };
 zendlval->type = 6;
 return 307;
}
# 2398 "Zend/zend_language_scanner.c"
yy125:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych <= 'H') {
    if (yych == 'E') goto yy708;
    goto yy186;
   } else {
    if (yych <= 'I') goto yy709;
    if (yych <= 'N') goto yy186;
    goto yy710;
   }
  } else {
   if (yych <= 'h') {
    if (yych == 'e') goto yy708;
    goto yy186;
   } else {
    if (yych <= 'i') goto yy709;
    if (yych == 'o') goto yy710;
    goto yy186;
   }
  }
yy126:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'U') {
   if (yych <= 'N') {
    if (yych == 'I') goto yy687;
    goto yy186;
   } else {
    if (yych <= 'O') goto yy688;
    if (yych <= 'T') goto yy186;
    goto yy689;
   }
  } else {
   if (yych <= 'n') {
    if (yych == 'i') goto yy687;
    goto yy186;
   } else {
    if (yych <= 'o') goto yy688;
    if (yych == 'u') goto yy689;
    goto yy186;
   }
  }
yy127:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych <= 'K') {
    if (yych == 'A') goto yy652;
    goto yy186;
   } else {
    if (yych <= 'L') goto yy653;
    if (yych <= 'N') goto yy186;
    goto yy654;
   }
  } else {
   if (yych <= 'k') {
    if (yych == 'a') goto yy652;
    goto yy186;
   } else {
    if (yych <= 'l') goto yy653;
    if (yych == 'o') goto yy654;
    goto yy186;
   }
  }
yy128:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy634;
  if (yych == 'e') goto yy634;
  goto yy186;
yy129:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'R') {
   if (yych == 'H') goto yy622;
   if (yych <= 'Q') goto yy186;
   goto yy623;
  } else {
   if (yych <= 'h') {
    if (yych <= 'g') goto yy186;
    goto yy622;
   } else {
    if (yych == 'r') goto yy623;
    goto yy186;
   }
  }
yy130:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'S') {
   if (yych <= 'L') {
    if (yych == 'F') goto yy569;
    goto yy186;
   } else {
    if (yych <= 'M') goto yy571;
    if (yych <= 'N') goto yy572;
    if (yych <= 'R') goto yy186;
    goto yy573;
   }
  } else {
   if (yych <= 'm') {
    if (yych == 'f') goto yy569;
    if (yych <= 'l') goto yy186;
    goto yy571;
   } else {
    if (yych <= 'n') goto yy572;
    if (yych == 's') goto yy573;
    goto yy186;
   }
  }
yy131:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy564;
  if (yych == 'h') goto yy564;
  goto yy186;
yy132:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'S') {
   if (yych <= 'M') {
    if (yych == 'B') goto yy546;
    goto yy186;
   } else {
    if (yych <= 'N') goto yy547;
    if (yych <= 'Q') goto yy186;
    if (yych <= 'R') goto yy548;
    goto yy549;
   }
  } else {
   if (yych <= 'n') {
    if (yych == 'b') goto yy546;
    if (yych <= 'm') goto yy186;
    goto yy547;
   } else {
    if (yych <= 'q') goto yy186;
    if (yych <= 'r') goto yy548;
    if (yych <= 's') goto yy549;
    goto yy186;
   }
  }
yy133:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'W') {
   if (yych == 'T') goto yy534;
   if (yych <= 'V') goto yy186;
   goto yy535;
  } else {
   if (yych <= 't') {
    if (yych <= 's') goto yy186;
    goto yy534;
   } else {
    if (yych == 'w') goto yy535;
    goto yy186;
   }
  }
yy134:
  ;
  yyaccept = 0;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= ';') {
   if (yych <= '"') {
    if (yych <= '!') goto yy186;
    goto yy526;
   } else {
    if (yych == '\'') goto yy527;
    goto yy186;
   }
  } else {
   if (yych <= 'R') {
    if (yych <= '<') goto yy525;
    if (yych <= 'Q') goto yy186;
    goto yy528;
   } else {
    if (yych == 'r') goto yy528;
    goto yy186;
   }
  }
yy135:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych == 'L') goto yy515;
   if (yych <= 'N') goto yy186;
   goto yy516;
  } else {
   if (yych <= 'l') {
    if (yych <= 'k') goto yy186;
    goto yy515;
   } else {
    if (yych == 'o') goto yy516;
    goto yy186;
   }
  }
yy136:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'U') {
   if (yych == 'R') goto yy491;
   if (yych <= 'T') goto yy186;
   goto yy492;
  } else {
   if (yych <= 'r') {
    if (yych <= 'q') goto yy186;
    goto yy491;
   } else {
    if (yych == 'u') goto yy492;
    goto yy186;
   }
  }
yy137:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '<') {
   if (yych == '-') goto yy487;
  } else {
   if (yych <= '=') goto yy485;
   if (yych <= '>') goto yy489;
  }
yy138:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1431 "Zend/zend_language_scanner.l"
  {
 return ((char*)(language_scanner_globals.yy_text))[0];
}
# 2628 "Zend/zend_language_scanner.c"
yy139:
  ;
  ++(language_scanner_globals.yy_cursor);
  yych = *(language_scanner_globals.yy_cursor);
  goto yy484;
yy140:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1162 "Zend/zend_language_scanner.l"
  {
 zendlval->value.str.val = ((char*)(language_scanner_globals.yy_text));
 zendlval->value.str.len = (language_scanner_globals.yy_leng);
 zendlval->type = 6;
 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng)); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);
 return 375;
}
# 2645 "Zend/zend_language_scanner.c"
yy141:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == ':') goto yy481;
  goto yy138;
yy142:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1191 "Zend/zend_language_scanner.l"
  {
 return 384;
}
# 2660 "Zend/zend_language_scanner.c"
yy144:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'E') {
   if (yych == 'A') goto yy469;
   if (yych <= 'D') goto yy186;
   goto yy470;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy186;
    goto yy469;
   } else {
    if (yych == 'e') goto yy470;
    goto yy186;
   }
  }
yy145:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy466;
  if (yych == 'a') goto yy466;
  goto yy186;
yy146:
  ;
  yyaccept = 1;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= 'S') {
   if (yych <= 'D') {
    if (yych <= ' ') {
     if (yych == '\t') goto yy391;
     if (yych <= 0x1F) goto yy138;
     goto yy391;
    } else {
     if (yych <= '@') goto yy138;
     if (yych == 'C') goto yy138;
     goto yy391;
    }
   } else {
    if (yych <= 'I') {
     if (yych == 'F') goto yy391;
     if (yych <= 'H') goto yy138;
     goto yy391;
    } else {
     if (yych == 'O') goto yy391;
     if (yych <= 'Q') goto yy138;
     goto yy391;
    }
   }
  } else {
   if (yych <= 'f') {
    if (yych <= 'b') {
     if (yych == 'U') goto yy391;
     if (yych <= '`') goto yy138;
     goto yy391;
    } else {
     if (yych == 'd') goto yy391;
     if (yych <= 'e') goto yy138;
     goto yy391;
    }
   } else {
    if (yych <= 'o') {
     if (yych == 'i') goto yy391;
     if (yych <= 'n') goto yy138;
     goto yy391;
    } else {
     if (yych <= 's') {
      if (yych <= 'q') goto yy138;
      goto yy391;
     } else {
      if (yych == 'u') goto yy391;
      goto yy138;
     }
    }
   }
  }
yy147:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'S') {
   if (yych == 'N') goto yy382;
   if (yych <= 'R') goto yy186;
   goto yy383;
  } else {
   if (yych <= 'n') {
    if (yych <= 'm') goto yy186;
    goto yy382;
   } else {
    if (yych == 's') goto yy383;
    goto yy186;
   }
  }
yy148:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '_') goto yy300;
  goto yy186;
yy149:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '<') goto yy138;
  if (yych <= '=') goto yy294;
  if (yych <= '>') goto yy296;
  goto yy138;
yy150:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy290;
  if (yych == 'i') goto yy290;
  goto yy186;
yy151:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '+') goto yy288;
  if (yych == '=') goto yy286;
  goto yy138;
yy152:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '=') goto yy283;
  goto yy138;
yy153:
  ;
  yyaccept = 1;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= ';') {
   if (yych == '/') goto yy255;
   goto yy138;
  } else {
   if (yych <= '<') goto yy253;
   if (yych <= '=') goto yy256;
   if (yych <= '>') goto yy258;
   goto yy138;
  }
yy154:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '<') goto yy138;
  if (yych <= '=') goto yy249;
  if (yych <= '>') goto yy247;
  goto yy138;
yy155:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '=') goto yy245;
  goto yy138;
yy156:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '.') {
   if (yych == '*') goto yy237;
   goto yy138;
  } else {
   if (yych <= '/') goto yy239;
   if (yych == '=') goto yy240;
   goto yy138;
  }
yy157:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '/') goto yy138;
  if (yych <= '9') goto yy233;
  if (yych == '=') goto yy235;
  goto yy138;
yy158:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '<') goto yy138;
  if (yych <= '=') goto yy229;
  if (yych <= '>') goto yy227;
  goto yy138;
yy159:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '&') goto yy223;
  if (yych == '=') goto yy225;
  goto yy138;
yy160:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '=') goto yy221;
  if (yych == '|') goto yy219;
  goto yy138;
yy161:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '=') goto yy217;
  goto yy138;
yy162:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy215;
  if (yych == 'r') goto yy215;
  goto yy186;
yy163:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy212;
  if (yych == 'o') goto yy212;
  goto yy186;
yy164:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych <= '@') goto yy138;
   if (yych <= 'Z') goto yy209;
   if (yych <= '^') goto yy138;
   goto yy209;
  } else {
   if (yych <= '`') goto yy138;
   if (yych <= 'z') goto yy209;
   if (yych <= '~') goto yy138;
   goto yy209;
  }
yy165:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy138;
yy166:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '>') goto yy205;
  goto yy138;
yy167:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1436 "Zend/zend_language_scanner.l"
  {
 _yy_push_state(yycST_IN_SCRIPTING );
 return '{';
}
# 2893 "Zend/zend_language_scanner.c"
yy169:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1448 "Zend/zend_language_scanner.l"
  {
 { if ((compiler_globals.doc_comment)) { _efree(((compiler_globals.doc_comment)) ); (compiler_globals.doc_comment) = ((void *)0); } (compiler_globals.doc_comment_len) = 0; };
 if (!zend_stack_is_empty(&(language_scanner_globals.state_stack))) {
  yy_pop_state();
 }
 return '}';
}
# 2907 "Zend/zend_language_scanner.c"
yy171:
  ;
  yyaccept = 2;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= 'E') {
   if (yych <= '9') {
    if (yych == '.') goto yy187;
    if (yych >= '0') goto yy190;
   } else {
    if (yych == 'B') goto yy198;
    if (yych >= 'E') goto yy192;
   }
  } else {
   if (yych <= 'b') {
    if (yych == 'X') goto yy197;
    if (yych >= 'b') goto yy198;
   } else {
    if (yych <= 'e') {
     if (yych >= 'e') goto yy192;
    } else {
     if (yych == 'x') goto yy197;
    }
   }
  }
yy172:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1494 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.yy_leng) < 11 - 1) {
  zendlval->value.lval = strtol(((char*)(language_scanner_globals.yy_text)), ((void *)0), 0);
 } else {
  (*__errno_location ()) = 0;
  zendlval->value.lval = strtol(((char*)(language_scanner_globals.yy_text)), ((void *)0), 0);
  if ((*__errno_location ()) == 34) {
   if (((char*)(language_scanner_globals.yy_text))[0] == '0') {
    zendlval->value.dval = zend_oct_strtod(((char*)(language_scanner_globals.yy_text)), ((void *)0));
   } else {
    zendlval->value.dval = zend_strtod(((char*)(language_scanner_globals.yy_text)), ((void *)0));
   }
   zendlval->type = 2;
   return 306;
  }
 }

 zendlval->type = 1;
 return 305;
}
# 2956 "Zend/zend_language_scanner.c"
yy173:
  ;
  yyaccept = 2;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= '9') {
   if (yych == '.') goto yy187;
   if (yych <= '/') goto yy172;
   goto yy190;
  } else {
   if (yych <= 'E') {
    if (yych <= 'D') goto yy172;
    goto yy192;
   } else {
    if (yych == 'e') goto yy192;
    goto yy172;
   }
  }
yy174:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy186;
yy175:
  ;
  ++(language_scanner_globals.yy_cursor);
yy176:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1887 "Zend/zend_language_scanner.l"
  {
 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '\r':
    if (*(language_scanner_globals.yy_cursor) == '\n') {
     (language_scanner_globals.yy_cursor)++;
    }

   case '\n':
    (compiler_globals.zend_lineno)++;
    break;
   case '%':
    if (!(compiler_globals.asp_tags)) {
     continue;
    }

   case '?':
    if (*(language_scanner_globals.yy_cursor) == '>') {
     (language_scanner_globals.yy_cursor)--;
     break;
    }

   default:
    continue;
  }

  break;
 }

 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 return 370;
}
# 3018 "Zend/zend_language_scanner.c"
yy177:
  ;
  ++(language_scanner_globals.yy_cursor);
yy178:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1978 "Zend/zend_language_scanner.l"
  {
 register char *s, *t;
 char *end;
 int bprefix = (((char*)(language_scanner_globals.yy_text))[0] != '\'') ? 1 : 0;

 while (1) {
  if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
   if (*(language_scanner_globals.yy_cursor) == '\'') {
    (language_scanner_globals.yy_cursor)++;
    (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

    break;
   } else if (*(language_scanner_globals.yy_cursor)++ == '\\' && (language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
    (language_scanner_globals.yy_cursor)++;
   }
  } else {
   (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_limit) - (language_scanner_globals.yy_text);




   return 314;
  }
 }

 zendlval->value.str.val = _estrndup((((char*)(language_scanner_globals.yy_text))+bprefix+1), ((language_scanner_globals.yy_leng)-bprefix-2) );
 zendlval->value.str.len = (language_scanner_globals.yy_leng)-bprefix-2;
 zendlval->type = 6;


 s = t = zendlval->value.str.val;
 end = s+zendlval->value.str.len;
 while (s<end) {
  if (*s=='\\') {
   s++;

   switch(*s) {
    case '\\':
    case '\'':
     *t++ = *s;
     zendlval->value.str.len--;
     break;
    default:
     *t++ = '\\';
     *t++ = *s;
     break;
   }
  } else {
   *t++ = *s;
  }

  if (*s == '\n' || (*s == '\r' && (*(s+1) != '\n'))) {
   (compiler_globals.zend_lineno)++;
  }
  s++;
 }
 *t = 0;

 if ((language_scanner_globals.output_filter)) {
  size_t sz = 0;
  s = zendlval->value.str.val;
  (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)s, (size_t)zendlval->value.str.len );
  zendlval->value.str.len = sz;
  _efree((s) );
 }
 return 315;
}
# 3093 "Zend/zend_language_scanner.c"
yy179:
  ;
  ++(language_scanner_globals.yy_cursor);
yy180:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2047 "Zend/zend_language_scanner.l"
  {
 int bprefix = (((char*)(language_scanner_globals.yy_text))[0] != '"') ? 1 : 0;

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '"':
    (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
    zend_scan_escape_string(zendlval, ((char*)(language_scanner_globals.yy_text))+bprefix+1, (language_scanner_globals.yy_leng)-bprefix-2, '"' );
    return 315;
   case '$':
    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) || *(language_scanner_globals.yy_cursor) == '{') {
     break;
    }
    continue;
   case '{':
    if (*(language_scanner_globals.yy_cursor) == '$') {
     break;
    }
    continue;
   case '\\':
    if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
     (language_scanner_globals.yy_cursor)++;
    }

   default:
    continue;
  }

  (language_scanner_globals.yy_cursor)--;
  break;
 }


 (compiler_globals.doc_comment_len) = ((language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text) - (language_scanner_globals.yy_leng));

 (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_text) + (language_scanner_globals.yy_leng);

 (language_scanner_globals.yy_state) = yycST_DOUBLE_QUOTES;
 return '"';
}
# 3141 "Zend/zend_language_scanner.c"
yy181:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2138 "Zend/zend_language_scanner.l"
  {
 (language_scanner_globals.yy_state) = yycST_BACKQUOTE;
 return '`';
}
# 3152 "Zend/zend_language_scanner.c"
yy183:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2396 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return 0;
 }

 zend_error((1<<7L),"Unexpected character in input:  '%c' (ASCII=%d) state=%d", ((char*)(language_scanner_globals.yy_text))[0], ((char*)(language_scanner_globals.yy_text))[0], (language_scanner_globals.yy_state));
 goto restart;
}
# 3167 "Zend/zend_language_scanner.c"
yy185:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy186:
  ;
  if (yybm[0+yych] & 4) {
   goto yy185;
  }
  goto yy124;
yy187:
  ;
  yyaccept = 3;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 8) {
   goto yy187;
  }
  if (yych == 'E') goto yy192;
  if (yych == 'e') goto yy192;
yy189:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1555 "Zend/zend_language_scanner.l"
  {
 zendlval->value.dval = zend_strtod(((char*)(language_scanner_globals.yy_text)), ((void *)0));
 zendlval->type = 2;
 return 306;
}
# 3200 "Zend/zend_language_scanner.c"
yy190:
  ;
  yyaccept = 2;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '9') {
   if (yych == '.') goto yy187;
   if (yych <= '/') goto yy172;
   goto yy190;
  } else {
   if (yych <= 'E') {
    if (yych <= 'D') goto yy172;
   } else {
    if (yych != 'e') goto yy172;
   }
  }
yy192:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= ',') {
   if (yych == '+') goto yy194;
  } else {
   if (yych <= '-') goto yy194;
   if (yych <= '/') goto yy193;
   if (yych <= '9') goto yy195;
  }
yy193:
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  if (yyaccept <= 2) {
   if (yyaccept <= 1) {
    if (yyaccept <= 0) {
     goto yy124;
    } else {
     goto yy138;
    }
   } else {
    goto yy172;
   }
  } else {
   if (yyaccept <= 4) {
    if (yyaccept <= 3) {
     goto yy189;
    } else {
     goto yy238;
    }
   } else {
    goto yy254;
   }
  }
yy194:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= '/') goto yy193;
  if (yych >= ':') goto yy193;
yy195:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '/') goto yy189;
  if (yych <= '9') goto yy195;
  goto yy189;
yy197:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yybm[0+yych] & 32) {
   goto yy202;
  }
  goto yy193;
yy198:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yybm[0+yych] & 16) {
   goto yy199;
  }
  goto yy193;
yy199:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 16) {
   goto yy199;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1473 "Zend/zend_language_scanner.l"
  {
 char *bin = ((char*)(language_scanner_globals.yy_text)) + 2;
 int len = (language_scanner_globals.yy_leng) - 2;


 while (*bin == '0') {
  ++bin;
  --len;
 }

 if (len < 4 * 8) {
  zendlval->value.lval = strtol(bin, ((void *)0), 2);
  zendlval->type = 1;
  return 305;
 } else {
  zendlval->value.dval = zend_bin_strtod(bin, ((void *)0));
  zendlval->type = 2;
  return 306;
 }
}
# 3313 "Zend/zend_language_scanner.c"
yy202:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 32) {
   goto yy202;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1515 "Zend/zend_language_scanner.l"
  {
 char *hex = ((char*)(language_scanner_globals.yy_text)) + 2;
 int len = (language_scanner_globals.yy_leng) - 2;


 while (*hex == '0') {
  hex++;
  len--;
 }

 if (len < 4 * 2 || (len == 4 * 2 && *hex <= '7')) {
  zendlval->value.lval = strtol(hex, ((void *)0), 16);
  zendlval->type = 1;
  return 305;
 } else {
  zendlval->value.dval = zend_hex_strtod(hex, ((void *)0));
  zendlval->type = 2;
  return 306;
 }
}
# 3346 "Zend/zend_language_scanner.c"
yy205:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '\n') goto yy207;
  if (yych == '\r') goto yy208;
yy206:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1955 "Zend/zend_language_scanner.l"
  {
 zendlval->value.str.val = ((char*)(language_scanner_globals.yy_text));
 zendlval->value.str.len = (language_scanner_globals.yy_leng);
 zendlval->type = 6;
 (language_scanner_globals.yy_state) = yycINITIAL;
 return 374;
}
# 3363 "Zend/zend_language_scanner.c"
yy207:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy206;
yy208:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '\n') goto yy207;
  goto yy206;
yy209:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '^') {
   if (yych <= '9') {
    if (yych >= '0') goto yy209;
   } else {
    if (yych <= '@') goto yy211;
    if (yych <= 'Z') goto yy209;
   }
  } else {
   if (yych <= '`') {
    if (yych <= '_') goto yy209;
   } else {
    if (yych <= 'z') goto yy209;
    if (yych >= 0x7F) goto yy209;
   }
  }
yy211:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1857 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup(((((char*)(language_scanner_globals.yy_text))+1)), (((language_scanner_globals.yy_leng)-1)) ); zendlval->value.str.len = ((language_scanner_globals.yy_leng)-1); };
 zendlval->type = 6;
 return 309;
}
# 3403 "Zend/zend_language_scanner.c"
yy212:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy213;
  if (yych != 'r') goto yy186;
yy213:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1419 "Zend/zend_language_scanner.l"
  {
 return 264;
}
# 3421 "Zend/zend_language_scanner.c"
yy215:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1411 "Zend/zend_language_scanner.l"
  {
 return 263;
}
# 3434 "Zend/zend_language_scanner.c"
yy217:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1399 "Zend/zend_language_scanner.l"
  {
 return 269;
}
# 3444 "Zend/zend_language_scanner.c"
yy219:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1403 "Zend/zend_language_scanner.l"
  {
 return 278;
}
# 3454 "Zend/zend_language_scanner.c"
yy221:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1395 "Zend/zend_language_scanner.l"
  {
 return 270;
}
# 3464 "Zend/zend_language_scanner.c"
yy223:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1407 "Zend/zend_language_scanner.l"
  {
 return 279;
}
# 3474 "Zend/zend_language_scanner.c"
yy225:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1391 "Zend/zend_language_scanner.l"
  {
 return 271;
}
# 3484 "Zend/zend_language_scanner.c"
yy227:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '\n') goto yy231;
  if (yych == '\r') goto yy232;
yy228:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1964 "Zend/zend_language_scanner.l"
  {
 if ((compiler_globals.asp_tags)) {
  (language_scanner_globals.yy_state) = yycINITIAL;
  zendlval->value.str.len = (language_scanner_globals.yy_leng);
  zendlval->type = 6;
  zendlval->value.str.val = ((char*)(language_scanner_globals.yy_text));
  return 374;
 } else {
  do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 1; (language_scanner_globals.yy_leng) = (unsigned int)1; } while(0);
  return ((char*)(language_scanner_globals.yy_text))[0];
 }
}
# 3506 "Zend/zend_language_scanner.c"
yy229:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1379 "Zend/zend_language_scanner.l"
  {
 return 272;
}
# 3516 "Zend/zend_language_scanner.c"
yy231:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy228;
yy232:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '\n') goto yy231;
  goto yy228;
yy233:
  ;
  yyaccept = 3;
  (language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 'D') {
   if (yych <= '/') goto yy189;
   if (yych <= '9') goto yy233;
   goto yy189;
  } else {
   if (yych <= 'E') goto yy192;
   if (yych == 'e') goto yy192;
   goto yy189;
  }
yy235:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1375 "Zend/zend_language_scanner.l"
  {
 return 273;
}
# 3551 "Zend/zend_language_scanner.c"
yy237:
  ;
  yyaccept = 4;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych == '*') goto yy242;
yy238:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1921 "Zend/zend_language_scanner.l"
  {
 int doc_com;

 if ((language_scanner_globals.yy_leng) > 2) {
  doc_com = 1;
  { if ((compiler_globals.doc_comment)) { _efree(((compiler_globals.doc_comment)) ); (compiler_globals.doc_comment) = ((void *)0); } (compiler_globals.doc_comment_len) = 0; };
 } else {
  doc_com = 0;
 }

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  if (*(language_scanner_globals.yy_cursor)++ == '*' && *(language_scanner_globals.yy_cursor) == '/') {
   break;
  }
 }

 if ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  (language_scanner_globals.yy_cursor)++;
 } else {
  zend_error((1<<7L), "Unterminated comment starting line %d", (compiler_globals.zend_lineno));
 }

 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng)); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);

 if (doc_com) {
  (compiler_globals.doc_comment) = _estrndup((((char*)(language_scanner_globals.yy_text))), ((language_scanner_globals.yy_leng)) );
  (compiler_globals.doc_comment_len) = (language_scanner_globals.yy_leng);
  return 371;
 }

 return 370;
}
# 3594 "Zend/zend_language_scanner.c"
yy239:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy176;
yy240:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1371 "Zend/zend_language_scanner.l"
  {
 return 274;
}
# 3608 "Zend/zend_language_scanner.c"
yy242:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yybm[0+yych] & 64) {
   goto yy243;
  }
  goto yy193;
yy243:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 64) {
   goto yy243;
  }
  goto yy238;
yy245:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1367 "Zend/zend_language_scanner.l"
  {
 return 275;
}
# 3635 "Zend/zend_language_scanner.c"
yy247:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '=') goto yy251;
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1427 "Zend/zend_language_scanner.l"
  {
 return 286;
}
# 3646 "Zend/zend_language_scanner.c"
yy249:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1355 "Zend/zend_language_scanner.l"
  {
 return 284;
}
# 3656 "Zend/zend_language_scanner.c"
yy251:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1387 "Zend/zend_language_scanner.l"
  {
 return 267;
}
# 3666 "Zend/zend_language_scanner.c"
yy253:
  ;
  yyaccept = 5;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= ';') goto yy254;
  if (yych <= '<') goto yy269;
  if (yych <= '=') goto yy267;
yy254:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1423 "Zend/zend_language_scanner.l"
  {
 return 287;
}
# 3681 "Zend/zend_language_scanner.c"
yy255:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy260;
  if (yych == 's') goto yy260;
  goto yy193;
yy256:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1351 "Zend/zend_language_scanner.l"
  {
 return 285;
}
# 3697 "Zend/zend_language_scanner.c"
yy258:
  ;
  ++(language_scanner_globals.yy_cursor);
yy259:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1347 "Zend/zend_language_scanner.l"
  {
 return 282;
}
# 3708 "Zend/zend_language_scanner.c"
yy260:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy261;
  if (yych != 'c') goto yy193;
yy261:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy262;
  if (yych != 'r') goto yy193;
yy262:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy263;
  if (yych != 'i') goto yy193;
yy263:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy264;
  if (yych != 'p') goto yy193;
yy264:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy265;
  if (yych != 't') goto yy193;
yy265:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '\r') {
   if (yych <= 0x08) goto yy193;
   if (yych <= '\n') goto yy265;
   if (yych <= '\f') goto yy193;
   goto yy265;
  } else {
   if (yych <= ' ') {
    if (yych <= 0x1F) goto yy193;
    goto yy265;
   } else {
    if (yych == '>') goto yy205;
    goto yy193;
   }
  }
yy267:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1383 "Zend/zend_language_scanner.l"
  {
 return 268;
}
# 3763 "Zend/zend_language_scanner.c"
yy269:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 128) {
   goto yy269;
  }
  if (yych <= 'Z') {
   if (yych <= '&') {
    if (yych == '"') goto yy274;
    goto yy193;
   } else {
    if (yych <= '\'') goto yy273;
    if (yych <= '@') goto yy193;
   }
  } else {
   if (yych <= '`') {
    if (yych != '_') goto yy193;
   } else {
    if (yych <= 'z') goto yy271;
    if (yych <= '~') goto yy193;
   }
  }
yy271:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '@') {
   if (yych <= '\f') {
    if (yych == '\n') goto yy278;
    goto yy193;
   } else {
    if (yych <= '\r') goto yy280;
    if (yych <= '/') goto yy193;
    if (yych <= '9') goto yy271;
    goto yy193;
   }
  } else {
   if (yych <= '_') {
    if (yych <= 'Z') goto yy271;
    if (yych <= '^') goto yy193;
    goto yy271;
   } else {
    if (yych <= '`') goto yy193;
    if (yych <= 'z') goto yy271;
    if (yych <= '~') goto yy193;
    goto yy271;
   }
  }
yy273:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '\'') goto yy193;
  if (yych <= '/') goto yy282;
  if (yych <= '9') goto yy193;
  goto yy282;
yy274:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '"') goto yy193;
  if (yych <= '/') goto yy276;
  if (yych <= '9') goto yy193;
  goto yy276;
yy275:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy276:
  ;
  if (yych <= 'Z') {
   if (yych <= '/') {
    if (yych != '"') goto yy193;
   } else {
    if (yych <= '9') goto yy275;
    if (yych <= '@') goto yy193;
    goto yy275;
   }
  } else {
   if (yych <= '`') {
    if (yych == '_') goto yy275;
    goto yy193;
   } else {
    if (yych <= 'z') goto yy275;
    if (yych <= '~') goto yy193;
    goto yy275;
   }
  }
yy277:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '\n') goto yy278;
  if (yych == '\r') goto yy280;
  goto yy193;
yy278:
  ;
  ++(language_scanner_globals.yy_cursor);
yy279:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2089 "Zend/zend_language_scanner.l"
  {
 char *s;
 int bprefix = (((char*)(language_scanner_globals.yy_text))[0] != '<') ? 1 : 0;


 (*zendlval).value.str.val = (compiler_globals.heredoc);
 (*zendlval).value.str.len = (compiler_globals.heredoc_len);

 (compiler_globals.zend_lineno)++;
 (compiler_globals.heredoc_len) = (language_scanner_globals.yy_leng)-bprefix-3-1-(((char*)(language_scanner_globals.yy_text))[(language_scanner_globals.yy_leng)-2]=='\r'?1:0);
 s = ((char*)(language_scanner_globals.yy_text))+bprefix+3;
 while ((*s == ' ') || (*s == '\t')) {
  s++;
  (compiler_globals.heredoc_len)--;
 }

 if (*s == '\'') {
  s++;
  (compiler_globals.heredoc_len) -= 2;

  (language_scanner_globals.yy_state) = yycST_NOWDOC;
 } else {
  if (*s == '"') {
   s++;
   (compiler_globals.heredoc_len) -= 2;
  }

  (language_scanner_globals.yy_state) = yycST_HEREDOC;
 }

 (compiler_globals.heredoc) = _estrndup((s), ((compiler_globals.heredoc_len)) );


 if ((compiler_globals.heredoc_len) < (language_scanner_globals.yy_limit) - (language_scanner_globals.yy_cursor) && !memcmp((language_scanner_globals.yy_cursor), s, (compiler_globals.heredoc_len))) {
  unsigned char *end = (language_scanner_globals.yy_cursor) + (compiler_globals.heredoc_len);

  if (*end == ';') {
   end++;
  }

  if (*end == '\n' || *end == '\r') {
   (language_scanner_globals.yy_state) = yycST_END_HEREDOC;
  }
 }

 return 376;
}
# 3916 "Zend/zend_language_scanner.c"
yy280:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '\n') goto yy278;
  goto yy279;
yy281:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy282:
  ;
  if (yych <= 'Z') {
   if (yych <= '/') {
    if (yych == '\'') goto yy277;
    goto yy193;
   } else {
    if (yych <= '9') goto yy281;
    if (yych <= '@') goto yy193;
    goto yy281;
   }
  } else {
   if (yych <= '`') {
    if (yych == '_') goto yy281;
    goto yy193;
   } else {
    if (yych <= 'z') goto yy281;
    if (yych <= '~') goto yy193;
    goto yy281;
   }
  }
yy283:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '=') goto yy259;
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1339 "Zend/zend_language_scanner.l"
  {
 return 280;
}
# 3960 "Zend/zend_language_scanner.c"
yy286:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1359 "Zend/zend_language_scanner.l"
  {
 return 277;
}
# 3970 "Zend/zend_language_scanner.c"
yy288:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1327 "Zend/zend_language_scanner.l"
  {
 return 297;
}
# 3980 "Zend/zend_language_scanner.c"
yy290:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy291;
  if (yych != 's') goto yy186;
yy291:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy292;
  if (yych != 't') goto yy186;
yy292:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1315 "Zend/zend_language_scanner.l"
  {
 return 361;
}
# 4003 "Zend/zend_language_scanner.c"
yy294:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '=') goto yy298;
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1343 "Zend/zend_language_scanner.l"
  {
 return 283;
}
# 4014 "Zend/zend_language_scanner.c"
yy296:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1311 "Zend/zend_language_scanner.l"
  {
 return 360;
}
# 4024 "Zend/zend_language_scanner.c"
yy298:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1335 "Zend/zend_language_scanner.l"
  {
 return 281;
}
# 4034 "Zend/zend_language_scanner.c"
yy300:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  ;
  switch (yych) {
  case 'C':
  case 'c': goto yy302;
  case 'D':
  case 'd': goto yy307;
  case 'F':
  case 'f': goto yy304;
  case 'H':
  case 'h': goto yy301;
  case 'L':
  case 'l': goto yy306;
  case 'M':
  case 'm': goto yy305;
  case 'N':
  case 'n': goto yy308;
  case 'T':
  case 't': goto yy303;
  default: goto yy186;
  }
yy301:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy369;
  if (yych == 'a') goto yy369;
  goto yy186;
yy302:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy362;
  if (yych == 'l') goto yy362;
  goto yy186;
yy303:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy355;
  if (yych == 'r') goto yy355;
  goto yy186;
yy304:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'U') {
   if (yych == 'I') goto yy339;
   if (yych <= 'T') goto yy186;
   goto yy340;
  } else {
   if (yych <= 'i') {
    if (yych <= 'h') goto yy186;
    goto yy339;
   } else {
    if (yych == 'u') goto yy340;
    goto yy186;
   }
  }
yy305:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy331;
  if (yych == 'e') goto yy331;
  goto yy186;
yy306:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy325;
  if (yych == 'i') goto yy325;
  goto yy186;
yy307:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy320;
  if (yych == 'i') goto yy320;
  goto yy186;
yy308:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy309;
  if (yych != 'a') goto yy186;
yy309:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'M') goto yy310;
  if (yych != 'm') goto yy186;
yy310:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy311;
  if (yych != 'e') goto yy186;
yy311:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy312;
  if (yych != 's') goto yy186;
yy312:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy313;
  if (yych != 'p') goto yy186;
yy313:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy314;
  if (yych != 'a') goto yy186;
yy314:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy315;
  if (yych != 'c') goto yy186;
yy315:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy316;
  if (yych != 'e') goto yy186;
yy316:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1690 "Zend/zend_language_scanner.l"
  {
 if ((compiler_globals.current_namespace)) {
  *zendlval = *(compiler_globals.current_namespace);
  _zval_copy_ctor((zendlval) );
 } else {
  do { zval *__z = (zendlval); (*__z).value.str.len = 0; (*__z).value.str.val = _estrndup((""), (sizeof("")-1) ); (*__z).type = 6; } while (0);
 }
 return 382;
}
# 4174 "Zend/zend_language_scanner.c"
yy320:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy321;
  if (yych != 'r') goto yy186;
yy321:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1663 "Zend/zend_language_scanner.l"
  {
 char *filename = zend_get_compiled_filename();
 const size_t filename_len = strlen(filename);
 char *dirname;

 if (!filename) {
  filename = "";
 }

 dirname = _estrndup((filename), (filename_len) );
 zend_dirname(dirname, filename_len);

 if (__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (dirname) && __builtin_constant_p (".") && (__s1_len = strlen (dirname), __s2_len = strlen ("."), (!((size_t)(const void *)((dirname) + 1) - (size_t)(const void *)(dirname) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((".") + 1) - (size_t)(const void *)(".") == 1) || __s2_len >= 4)) ? __builtin_strcmp (dirname, ".") : (__builtin_constant_p (dirname) && ((size_t)(const void *)((dirname) + 1) - (size_t)(const void *)(dirname) == 1) && (__s1_len = strlen (dirname), __s1_len < 4) ? (__builtin_constant_p (".") && ((size_t)(const void *)((".") + 1) - (size_t)(const void *)(".") == 1) ? __builtin_strcmp (dirname, ".") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("."); register int __result = (((__const unsigned char *) (__const char *) (dirname))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (dirname))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (dirname))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (dirname))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (".") && ((size_t)(const void *)((".") + 1) - (size_t)(const void *)(".") == 1) && (__s2_len = strlen ("."), __s2_len < 4) ? (__builtin_constant_p (dirname) && ((size_t)(const void *)((dirname) + 1) - (size_t)(const void *)(dirname) == 1) ? __builtin_strcmp (dirname, ".") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (dirname); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("."))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("."))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("."))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("."))[3]); } } __result; }))) : __builtin_strcmp (dirname, ".")))); }) == 0) {
  dirname = _erealloc((dirname), (4096), 0 );

  getcwd(dirname, 4096);



 }

 zendlval->value.str.len = strlen(dirname);
 zendlval->value.str.val = dirname;
 zendlval->type = 6;
 return 383;
}
# 4221 "Zend/zend_language_scanner.c"
yy325:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy326;
  if (yych != 'n') goto yy186;
yy326:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy327;
  if (yych != 'e') goto yy186;
yy327:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1645 "Zend/zend_language_scanner.l"
  {
 zendlval->value.lval = (compiler_globals.zend_lineno);
 zendlval->type = 1;
 return 368;
}
# 4252 "Zend/zend_language_scanner.c"
yy331:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy332;
  if (yych != 't') goto yy186;
yy332:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy333;
  if (yych != 'h') goto yy186;
yy333:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy334;
  if (yych != 'o') goto yy186;
yy334:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy335;
  if (yych != 'd') goto yy186;
yy335:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1624 "Zend/zend_language_scanner.l"
  {
 const char *class_name = (compiler_globals.active_class_entry) ? (compiler_globals.active_class_entry)->name : ((void *)0);
 const char *func_name = (compiler_globals.active_op_array)? (compiler_globals.active_op_array)->function_name : ((void *)0);
 size_t len = 0;

 if (class_name) {
  len += strlen(class_name) + 2;
 }
 if (func_name) {
  len += strlen(func_name);
 }

 zendlval->value.str.len = zend_spprintf(&zendlval->value.str.val, 0, "%s%s%s",
  class_name ? class_name : "",
  class_name && func_name ? "::" : "",
  func_name ? func_name : ""
  );
 zendlval->type = 6;
 return 366;
}
# 4308 "Zend/zend_language_scanner.c"
yy339:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy350;
  if (yych == 'l') goto yy350;
  goto yy186;
yy340:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy341;
  if (yych != 'n') goto yy186;
yy341:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy342;
  if (yych != 'c') goto yy186;
yy342:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy343;
  if (yych != 't') goto yy186;
yy343:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy344;
  if (yych != 'i') goto yy186;
yy344:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy345;
  if (yych != 'o') goto yy186;
yy345:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy346;
  if (yych != 'n') goto yy186;
yy346:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1608 "Zend/zend_language_scanner.l"
  {
 const char *func_name = ((void *)0);

 if ((compiler_globals.active_op_array)) {
  func_name = (compiler_globals.active_op_array)->function_name;
 }

 if (!func_name) {
  func_name = "";
 }
 zendlval->value.str.len = strlen(func_name);
 zendlval->value.str.val = _estrndup((func_name), (zendlval->value.str.len) );
 zendlval->type = 6;
 return 367;
}
# 4375 "Zend/zend_language_scanner.c"
yy350:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy351;
  if (yych != 'e') goto yy186;
yy351:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1651 "Zend/zend_language_scanner.l"
  {
 char *filename = zend_get_compiled_filename();

 if (!filename) {
  filename = "";
 }
 zendlval->value.str.len = strlen(filename);
 zendlval->value.str.val = _estrndup((filename), (zendlval->value.str.len) );
 zendlval->type = 6;
 return 369;
}
# 4407 "Zend/zend_language_scanner.c"
yy355:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy356;
  if (yych != 'a') goto yy186;
yy356:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy357;
  if (yych != 'i') goto yy186;
yy357:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy358;
  if (yych != 't') goto yy186;
yy358:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1588 "Zend/zend_language_scanner.l"
  {
 const char *trait_name = ((void *)0);

 if ((compiler_globals.active_class_entry)
  && (0x120 ==
   ((compiler_globals.active_class_entry)->ce_flags & 0x120))) {
  trait_name = (compiler_globals.active_class_entry)->name;
 }

 if (!trait_name) {
  trait_name = "";
 }

 zendlval->value.str.len = strlen(trait_name);
 zendlval->value.str.val = _estrndup((trait_name), (zendlval->value.str.len) );
 zendlval->type = 6;

 return 365;
}
# 4457 "Zend/zend_language_scanner.c"
yy362:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy363;
  if (yych != 'a') goto yy186;
yy363:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy364;
  if (yych != 's') goto yy186;
yy364:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy365;
  if (yych != 's') goto yy186;
yy365:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1561 "Zend/zend_language_scanner.l"
  {
 const char *class_name = ((void *)0);

 if ((compiler_globals.active_class_entry)
  && (0x120 ==
   ((compiler_globals.active_class_entry)->ce_flags & 0x120))) {


  zendlval->value.str.len = sizeof("__CLASS__")-1;
  zendlval->value.str.val = _estrndup(("__CLASS__"), (zendlval->value.str.len) );
  zendlval->type = 8;
 } else {
  if ((compiler_globals.active_class_entry)) {
   class_name = (compiler_globals.active_class_entry)->name;
  }

  if (!class_name) {
   class_name = "";
  }

  zendlval->value.str.len = strlen(class_name);
  zendlval->value.str.val = _estrndup((class_name), (zendlval->value.str.len) );
  zendlval->type = 6;
 }
 return 364;
}
# 4514 "Zend/zend_language_scanner.c"
yy369:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy370;
  if (yych != 'l') goto yy186;
yy370:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy371;
  if (yych != 't') goto yy186;
yy371:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych != '_') goto yy186;
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy373;
  if (yych != 'c') goto yy186;
yy373:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy374;
  if (yych != 'o') goto yy186;
yy374:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'M') goto yy375;
  if (yych != 'm') goto yy186;
yy375:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy376;
  if (yych != 'p') goto yy186;
yy376:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy377;
  if (yych != 'i') goto yy186;
yy377:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy378;
  if (yych != 'l') goto yy186;
yy378:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy379;
  if (yych != 'e') goto yy186;
yy379:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy380;
  if (yych != 'r') goto yy186;
yy380:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1279 "Zend/zend_language_scanner.l"
  {
 return 353;
}
# 4580 "Zend/zend_language_scanner.c"
yy382:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy386;
  if (yych == 's') goto yy386;
  goto yy186;
yy383:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy384;
  if (yych != 'e') goto yy186;
yy384:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1259 "Zend/zend_language_scanner.l"
  {
 return 340;
}
# 4604 "Zend/zend_language_scanner.c"
yy386:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy387;
  if (yych != 'e') goto yy186;
yy387:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy388;
  if (yych != 't') goto yy186;
yy388:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1307 "Zend/zend_language_scanner.l"
  {
 return 350;
}
# 4627 "Zend/zend_language_scanner.c"
yy390:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 7) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy391:
  ;
  if (yych <= 'S') {
   if (yych <= 'D') {
    if (yych <= ' ') {
     if (yych == '\t') goto yy390;
     if (yych <= 0x1F) goto yy193;
     goto yy390;
    } else {
     if (yych <= 'A') {
      if (yych <= '@') goto yy193;
      goto yy395;
     } else {
      if (yych <= 'B') goto yy393;
      if (yych <= 'C') goto yy193;
      goto yy398;
     }
    }
   } else {
    if (yych <= 'I') {
     if (yych == 'F') goto yy399;
     if (yych <= 'H') goto yy193;
     goto yy400;
    } else {
     if (yych <= 'O') {
      if (yych <= 'N') goto yy193;
      goto yy394;
     } else {
      if (yych <= 'Q') goto yy193;
      if (yych <= 'R') goto yy397;
      goto yy396;
     }
    }
   }
  } else {
   if (yych <= 'f') {
    if (yych <= 'a') {
     if (yych == 'U') goto yy392;
     if (yych <= '`') goto yy193;
     goto yy395;
    } else {
     if (yych <= 'c') {
      if (yych <= 'b') goto yy393;
      goto yy193;
     } else {
      if (yych <= 'd') goto yy398;
      if (yych <= 'e') goto yy193;
      goto yy399;
     }
    }
   } else {
    if (yych <= 'q') {
     if (yych <= 'i') {
      if (yych <= 'h') goto yy193;
      goto yy400;
     } else {
      if (yych == 'o') goto yy394;
      goto yy193;
     }
    } else {
     if (yych <= 's') {
      if (yych <= 'r') goto yy397;
      goto yy396;
     } else {
      if (yych != 'u') goto yy193;
     }
    }
   }
  }
yy392:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy459;
  if (yych == 'n') goto yy459;
  goto yy193;
yy393:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych == 'I') goto yy446;
   if (yych <= 'N') goto yy193;
   goto yy447;
  } else {
   if (yych <= 'i') {
    if (yych <= 'h') goto yy193;
    goto yy446;
   } else {
    if (yych == 'o') goto yy447;
    goto yy193;
   }
  }
yy394:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'B') goto yy438;
  if (yych == 'b') goto yy438;
  goto yy193;
yy395:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy431;
  if (yych == 'r') goto yy431;
  goto yy193;
yy396:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy423;
  if (yych == 't') goto yy423;
  goto yy193;
yy397:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy421;
  if (yych == 'e') goto yy421;
  goto yy193;
yy398:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy417;
  if (yych == 'o') goto yy417;
  goto yy193;
yy399:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy410;
  if (yych == 'l') goto yy410;
  goto yy193;
yy400:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy401;
  if (yych != 'n') goto yy193;
yy401:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy402;
  if (yych != 't') goto yy193;
yy402:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy403;
  if (yych != 'e') goto yy405;
yy403:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'G') goto yy408;
  if (yych == 'g') goto yy408;
  goto yy193;
yy404:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy405:
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy404;
   goto yy193;
  } else {
   if (yych <= ' ') goto yy404;
   if (yych != ')') goto yy193;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1207 "Zend/zend_language_scanner.l"
  {
 return 295;
}
# 4803 "Zend/zend_language_scanner.c"
yy408:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy409;
  if (yych != 'e') goto yy193;
yy409:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy404;
  if (yych == 'r') goto yy404;
  goto yy193;
yy410:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy411;
  if (yych != 'o') goto yy193;
yy411:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy412;
  if (yych != 'a') goto yy193;
yy412:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy413;
  if (yych != 't') goto yy193;
yy413:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy413;
   goto yy193;
  } else {
   if (yych <= ' ') goto yy413;
   if (yych != ')') goto yy193;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1211 "Zend/zend_language_scanner.l"
  {
 return 294;
}
# 4851 "Zend/zend_language_scanner.c"
yy417:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy418;
  if (yych != 'u') goto yy193;
yy418:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'B') goto yy419;
  if (yych != 'b') goto yy193;
yy419:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy420;
  if (yych != 'l') goto yy193;
yy420:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy413;
  if (yych == 'e') goto yy413;
  goto yy193;
yy421:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy422;
  if (yych != 'a') goto yy193;
yy422:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy413;
  if (yych == 'l') goto yy413;
  goto yy193;
yy423:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy424;
  if (yych != 'r') goto yy193;
yy424:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy425;
  if (yych != 'i') goto yy193;
yy425:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy426;
  if (yych != 'n') goto yy193;
yy426:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'G') goto yy427;
  if (yych != 'g') goto yy193;
yy427:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy427;
   goto yy193;
  } else {
   if (yych <= ' ') goto yy427;
   if (yych != ')') goto yy193;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1215 "Zend/zend_language_scanner.l"
  {
 return 293;
}
# 4925 "Zend/zend_language_scanner.c"
yy431:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy432;
  if (yych != 'r') goto yy193;
yy432:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy433;
  if (yych != 'a') goto yy193;
yy433:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'Y') goto yy434;
  if (yych != 'y') goto yy193;
yy434:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy434;
   goto yy193;
  } else {
   if (yych <= ' ') goto yy434;
   if (yych != ')') goto yy193;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1219 "Zend/zend_language_scanner.l"
  {
 return 292;
}
# 4962 "Zend/zend_language_scanner.c"
yy438:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'J') goto yy439;
  if (yych != 'j') goto yy193;
yy439:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy440;
  if (yych != 'e') goto yy193;
yy440:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy441;
  if (yych != 'c') goto yy193;
yy441:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy442;
  if (yych != 't') goto yy193;
yy442:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy442;
   goto yy193;
  } else {
   if (yych <= ' ') goto yy442;
   if (yych != ')') goto yy193;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1223 "Zend/zend_language_scanner.l"
  {
 return 291;
}
# 5004 "Zend/zend_language_scanner.c"
yy446:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy456;
  if (yych == 'n') goto yy456;
  goto yy193;
yy447:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy448;
  if (yych != 'o') goto yy193;
yy448:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy449;
  if (yych != 'l') goto yy193;
yy449:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy454;
  if (yych == 'e') goto yy454;
  goto yy451;
yy450:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy451:
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy450;
   goto yy193;
  } else {
   if (yych <= ' ') goto yy450;
   if (yych != ')') goto yy193;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1227 "Zend/zend_language_scanner.l"
  {
 return 290;
}
# 5049 "Zend/zend_language_scanner.c"
yy454:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy455;
  if (yych != 'a') goto yy193;
yy455:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy450;
  if (yych == 'n') goto yy450;
  goto yy193;
yy456:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy457;
  if (yych != 'a') goto yy193;
yy457:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy458;
  if (yych != 'r') goto yy193;
yy458:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'Y') goto yy427;
  if (yych == 'y') goto yy427;
  goto yy193;
yy459:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy460;
  if (yych != 's') goto yy193;
yy460:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy461;
  if (yych != 'e') goto yy193;
yy461:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy462;
  if (yych != 't') goto yy193;
yy462:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= 0x1F) {
   if (yych == '\t') goto yy462;
   goto yy193;
  } else {
   if (yych <= ' ') goto yy462;
   if (yych != ')') goto yy193;
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1231 "Zend/zend_language_scanner.l"
  {
 return 289;
}
# 5113 "Zend/zend_language_scanner.c"
yy466:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy467;
  if (yych != 'r') goto yy186;
yy467:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1203 "Zend/zend_language_scanner.l"
  {
 return 349;
}
# 5131 "Zend/zend_language_scanner.c"
yy469:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'M') goto yy473;
  if (yych == 'm') goto yy473;
  goto yy186;
yy470:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'W') goto yy471;
  if (yych != 'w') goto yy186;
yy471:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1195 "Zend/zend_language_scanner.l"
  {
 return 299;
}
# 5155 "Zend/zend_language_scanner.c"
yy473:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy474;
  if (yych != 'e') goto yy186;
yy474:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy475;
  if (yych != 's') goto yy186;
yy475:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy476;
  if (yych != 'p') goto yy186;
yy476:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy477;
  if (yych != 'a') goto yy186;
yy477:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy478;
  if (yych != 'c') goto yy186;
yy478:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy479;
  if (yych != 'e') goto yy186;
yy479:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1255 "Zend/zend_language_scanner.l"
  {
 return 381;
}
# 5198 "Zend/zend_language_scanner.c"
yy481:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1187 "Zend/zend_language_scanner.l"
  {
 return 380;
}
# 5208 "Zend/zend_language_scanner.c"
yy483:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy484:
  ;
  if (yych <= '\f') {
   if (yych <= 0x08) goto yy140;
   if (yych <= '\n') goto yy483;
   goto yy140;
  } else {
   if (yych <= '\r') goto yy483;
   if (yych == ' ') goto yy483;
   goto yy140;
  }
yy485:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1363 "Zend/zend_language_scanner.l"
  {
 return 276;
}
# 5234 "Zend/zend_language_scanner.c"
yy487:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1331 "Zend/zend_language_scanner.l"
  {
 return 296;
}
# 5244 "Zend/zend_language_scanner.c"
yy489:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1157 "Zend/zend_language_scanner.l"
  {
 _yy_push_state(yycST_LOOKING_FOR_PROPERTY );
 return 359;
}
# 5255 "Zend/zend_language_scanner.c"
yy491:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych == 'I') goto yy498;
   if (yych <= 'N') goto yy186;
   goto yy499;
  } else {
   if (yych <= 'i') {
    if (yych <= 'h') goto yy186;
    goto yy498;
   } else {
    if (yych == 'o') goto yy499;
    goto yy186;
   }
  }
yy492:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'B') goto yy493;
  if (yych != 'b') goto yy186;
yy493:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy494;
  if (yych != 'l') goto yy186;
yy494:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy495;
  if (yych != 'i') goto yy186;
yy495:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy496;
  if (yych != 'c') goto yy186;
yy496:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1303 "Zend/zend_language_scanner.l"
  {
 return 343;
}
# 5304 "Zend/zend_language_scanner.c"
yy498:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'V') {
   if (yych == 'N') goto yy507;
   if (yych <= 'U') goto yy186;
   goto yy508;
  } else {
   if (yych <= 'n') {
    if (yych <= 'm') goto yy186;
    goto yy507;
   } else {
    if (yych == 'v') goto yy508;
    goto yy186;
   }
  }
yy499:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy500;
  if (yych != 't') goto yy186;
yy500:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy501;
  if (yych != 'e') goto yy186;
yy501:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy502;
  if (yych != 'c') goto yy186;
yy502:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy503;
  if (yych != 't') goto yy186;
yy503:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy504;
  if (yych != 'e') goto yy186;
yy504:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy505;
  if (yych != 'd') goto yy186;
yy505:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1299 "Zend/zend_language_scanner.l"
  {
 return 344;
}
# 5363 "Zend/zend_language_scanner.c"
yy507:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy513;
  if (yych == 't') goto yy513;
  goto yy186;
yy508:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy509;
  if (yych != 'a') goto yy186;
yy509:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy510;
  if (yych != 't') goto yy186;
yy510:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy511;
  if (yych != 'e') goto yy186;
yy511:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1295 "Zend/zend_language_scanner.l"
  {
 return 345;
}
# 5397 "Zend/zend_language_scanner.c"
yy513:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1133 "Zend/zend_language_scanner.l"
  {
 return 266;
}
# 5410 "Zend/zend_language_scanner.c"
yy515:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy520;
  if (yych == 'o') goto yy520;
  goto yy186;
yy516:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy517;
  if (yych != 't') goto yy186;
yy517:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy518;
  if (yych != 'o') goto yy186;
yy518:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1125 "Zend/zend_language_scanner.l"
  {
 return 333;
}
# 5439 "Zend/zend_language_scanner.c"
yy520:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'B') goto yy521;
  if (yych != 'b') goto yy186;
yy521:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy522;
  if (yych != 'a') goto yy186;
yy522:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy523;
  if (yych != 'l') goto yy186;
yy523:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1267 "Zend/zend_language_scanner.l"
  {
 return 342;
}
# 5467 "Zend/zend_language_scanner.c"
yy525:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '<') goto yy533;
  goto yy193;
yy526:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy180;
yy527:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy178;
yy528:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy529;
  if (yych != 'e') goto yy186;
yy529:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy530;
  if (yych != 'a') goto yy186;
yy530:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'K') goto yy531;
  if (yych != 'k') goto yy186;
yy531:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1117 "Zend/zend_language_scanner.l"
  {
 return 331;
}
# 5508 "Zend/zend_language_scanner.c"
yy533:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == '<') goto yy269;
  goto yy193;
yy534:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy541;
  if (yych == 'a') goto yy541;
  goto yy186;
yy535:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy536;
  if (yych != 'i') goto yy186;
yy536:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy537;
  if (yych != 't') goto yy186;
yy537:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy538;
  if (yych != 'c') goto yy186;
yy538:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy539;
  if (yych != 'h') goto yy186;
yy539:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1101 "Zend/zend_language_scanner.l"
  {
 return 327;
}
# 5552 "Zend/zend_language_scanner.c"
yy541:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy542;
  if (yych != 't') goto yy186;
yy542:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy543;
  if (yych != 'i') goto yy186;
yy543:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy544;
  if (yych != 'c') goto yy186;
yy544:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1283 "Zend/zend_language_scanner.l"
  {
 return 348;
}
# 5580 "Zend/zend_language_scanner.c"
yy546:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy557;
  if (yych == 's') goto yy557;
  goto yy186;
yy547:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy555;
  if (yych == 'd') goto yy555;
  goto yy186;
yy548:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy551;
  if (yych == 'r') goto yy551;
  goto yy186;
yy549:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1097 "Zend/zend_language_scanner.l"
  {
 return 326;
}
# 5611 "Zend/zend_language_scanner.c"
yy551:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy552;
  if (yych != 'a') goto yy186;
yy552:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'Y') goto yy553;
  if (yych != 'y') goto yy186;
yy553:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1319 "Zend/zend_language_scanner.l"
  {
 return 362;
}
# 5634 "Zend/zend_language_scanner.c"
yy555:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1415 "Zend/zend_language_scanner.l"
  {
 return 265;
}
# 5647 "Zend/zend_language_scanner.c"
yy557:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy558;
  if (yych != 't') goto yy186;
yy558:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy559;
  if (yych != 'r') goto yy186;
yy559:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy560;
  if (yych != 'a') goto yy186;
yy560:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy561;
  if (yych != 'c') goto yy186;
yy561:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy562;
  if (yych != 't') goto yy186;
yy562:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1287 "Zend/zend_language_scanner.l"
  {
 return 347;
}
# 5685 "Zend/zend_language_scanner.c"
yy564:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy565;
  if (yych != 'i') goto yy186;
yy565:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy566;
  if (yych != 'l') goto yy186;
yy566:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy567;
  if (yych != 'e') goto yy186;
yy567:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1057 "Zend/zend_language_scanner.l"
  {
 return 318;
}
# 5713 "Zend/zend_language_scanner.c"
yy569:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1041 "Zend/zend_language_scanner.l"
  {
 return 301;
}
# 5726 "Zend/zend_language_scanner.c"
yy571:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy613;
  if (yych == 'p') goto yy613;
  goto yy186;
yy572:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'T') {
   if (yych <= 'C') {
    if (yych <= 'B') goto yy186;
    goto yy580;
   } else {
    if (yych <= 'R') goto yy186;
    if (yych <= 'S') goto yy578;
    goto yy579;
   }
  } else {
   if (yych <= 'r') {
    if (yych == 'c') goto yy580;
    goto yy186;
   } else {
    if (yych <= 's') goto yy578;
    if (yych <= 't') goto yy579;
    goto yy186;
   }
  }
yy573:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy574;
  if (yych != 's') goto yy186;
yy574:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy575;
  if (yych != 'e') goto yy186;
yy575:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy576;
  if (yych != 't') goto yy186;
yy576:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1271 "Zend/zend_language_scanner.l"
  {
 return 351;
}
# 5782 "Zend/zend_language_scanner.c"
yy578:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy599;
  if (yych == 't') goto yy599;
  goto yy186;
yy579:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy592;
  if (yych == 'e') goto yy592;
  goto yy186;
yy580:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy581;
  if (yych != 'l') goto yy186;
yy581:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy582;
  if (yych != 'u') goto yy186;
yy582:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy583;
  if (yych != 'd') goto yy186;
yy583:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy584;
  if (yych != 'e') goto yy186;
yy584:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '^') {
   if (yych <= '9') {
    if (yych >= '0') goto yy185;
   } else {
    if (yych <= '@') goto yy585;
    if (yych <= 'Z') goto yy185;
   }
  } else {
   if (yych <= '`') {
    if (yych <= '_') goto yy586;
   } else {
    if (yych <= 'z') goto yy185;
    if (yych >= 0x7F) goto yy185;
   }
  }
yy585:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1239 "Zend/zend_language_scanner.l"
  {
 return 262;
}
# 5840 "Zend/zend_language_scanner.c"
yy586:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy587;
  if (yych != 'o') goto yy186;
yy587:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy588;
  if (yych != 'n') goto yy186;
yy588:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy589;
  if (yych != 'c') goto yy186;
yy589:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy590;
  if (yych != 'e') goto yy186;
yy590:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1243 "Zend/zend_language_scanner.l"
  {
 return 261;
}
# 5873 "Zend/zend_language_scanner.c"
yy592:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy593;
  if (yych != 'r') goto yy186;
yy593:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'F') goto yy594;
  if (yych != 'f') goto yy186;
yy594:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy595;
  if (yych != 'a') goto yy186;
yy595:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy596;
  if (yych != 'c') goto yy186;
yy596:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy597;
  if (yych != 'e') goto yy186;
yy597:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1141 "Zend/zend_language_scanner.l"
  {
 return 356;
}
# 5911 "Zend/zend_language_scanner.c"
yy599:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'E') {
   if (yych == 'A') goto yy600;
   if (yych <= 'D') goto yy186;
   goto yy601;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy186;
   } else {
    if (yych == 'e') goto yy601;
    goto yy186;
   }
  }
yy600:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy607;
  if (yych == 'n') goto yy607;
  goto yy186;
yy601:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy602;
  if (yych != 'a') goto yy186;
yy602:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy603;
  if (yych != 'd') goto yy186;
yy603:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy604;
  if (yych != 'o') goto yy186;
yy604:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'F') goto yy605;
  if (yych != 'f') goto yy186;
yy605:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1263 "Zend/zend_language_scanner.l"
  {
        return 341;
}
# 5965 "Zend/zend_language_scanner.c"
yy607:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy608;
  if (yych != 'c') goto yy186;
yy608:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy609;
  if (yych != 'e') goto yy186;
yy609:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy610;
  if (yych != 'o') goto yy186;
yy610:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'F') goto yy611;
  if (yych != 'f') goto yy186;
yy611:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1093 "Zend/zend_language_scanner.l"
  {
 return 288;
}
# 5998 "Zend/zend_language_scanner.c"
yy613:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy614;
  if (yych != 'l') goto yy186;
yy614:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy615;
  if (yych != 'e') goto yy186;
yy615:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'M') goto yy616;
  if (yych != 'm') goto yy186;
yy616:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy617;
  if (yych != 'e') goto yy186;
yy617:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy618;
  if (yych != 'n') goto yy186;
yy618:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy619;
  if (yych != 't') goto yy186;
yy619:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy620;
  if (yych != 's') goto yy186;
yy620:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1153 "Zend/zend_language_scanner.l"
  {
 return 358;
}
# 6046 "Zend/zend_language_scanner.c"
yy622:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy630;
  if (yych == 'r') goto yy630;
  goto yy186;
yy623:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'Y') {
   if (yych == 'A') goto yy626;
   if (yych <= 'X') goto yy186;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy186;
    goto yy626;
   } else {
    if (yych != 'y') goto yy186;
   }
  }
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1029 "Zend/zend_language_scanner.l"
  {
 return 337;
}
# 6078 "Zend/zend_language_scanner.c"
yy626:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy627;
  if (yych != 'i') goto yy186;
yy627:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy628;
  if (yych != 't') goto yy186;
yy628:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1145 "Zend/zend_language_scanner.l"
  {
 return 355;
}
# 6101 "Zend/zend_language_scanner.c"
yy630:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy631;
  if (yych != 'o') goto yy186;
yy631:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'W') goto yy632;
  if (yych != 'w') goto yy186;
yy632:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1037 "Zend/zend_language_scanner.l"
  {
 return 339;
}
# 6124 "Zend/zend_language_scanner.c"
yy634:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'T') {
   if (yych == 'Q') goto yy636;
   if (yych <= 'S') goto yy186;
  } else {
   if (yych <= 'q') {
    if (yych <= 'p') goto yy186;
    goto yy636;
   } else {
    if (yych != 't') goto yy186;
   }
  }
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy648;
  if (yych == 'u') goto yy648;
  goto yy186;
yy636:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy637;
  if (yych != 'u') goto yy186;
yy637:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy638;
  if (yych != 'i') goto yy186;
yy638:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy639;
  if (yych != 'r') goto yy186;
yy639:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy640;
  if (yych != 'e') goto yy186;
yy640:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '^') {
   if (yych <= '9') {
    if (yych >= '0') goto yy185;
   } else {
    if (yych <= '@') goto yy641;
    if (yych <= 'Z') goto yy185;
   }
  } else {
   if (yych <= '`') {
    if (yych <= '_') goto yy642;
   } else {
    if (yych <= 'z') goto yy185;
    if (yych >= 0x7F) goto yy185;
   }
  }
yy641:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1247 "Zend/zend_language_scanner.l"
  {
 return 259;
}
# 6189 "Zend/zend_language_scanner.c"
yy642:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy643;
  if (yych != 'o') goto yy186;
yy643:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy644;
  if (yych != 'n') goto yy186;
yy644:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy645;
  if (yych != 'c') goto yy186;
yy645:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy646;
  if (yych != 'e') goto yy186;
yy646:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1251 "Zend/zend_language_scanner.l"
  {
 return 258;
}
# 6222 "Zend/zend_language_scanner.c"
yy648:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy649;
  if (yych != 'r') goto yy186;
yy649:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy650;
  if (yych != 'n') goto yy186;
yy650:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1025 "Zend/zend_language_scanner.l"
  {
 return 336;
}
# 6245 "Zend/zend_language_scanner.c"
yy652:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'T') {
   if (yych <= 'L') {
    if (yych <= 'K') goto yy186;
    goto yy675;
   } else {
    if (yych <= 'R') goto yy186;
    if (yych <= 'S') goto yy674;
    goto yy673;
   }
  } else {
   if (yych <= 'r') {
    if (yych == 'l') goto yy675;
    goto yy186;
   } else {
    if (yych <= 's') goto yy674;
    if (yych <= 't') goto yy673;
    goto yy186;
   }
  }
yy653:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'O') {
   if (yych == 'A') goto yy665;
   if (yych <= 'N') goto yy186;
   goto yy666;
  } else {
   if (yych <= 'a') {
    if (yych <= '`') goto yy186;
    goto yy665;
   } else {
    if (yych == 'o') goto yy666;
    goto yy186;
   }
  }
yy654:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy655;
  if (yych != 'n') goto yy186;
yy655:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'T') {
   if (yych <= 'R') goto yy186;
   if (yych >= 'T') goto yy657;
  } else {
   if (yych <= 'r') goto yy186;
   if (yych <= 's') goto yy656;
   if (yych <= 't') goto yy657;
   goto yy186;
  }
yy656:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy663;
  if (yych == 't') goto yy663;
  goto yy186;
yy657:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy658;
  if (yych != 'i') goto yy186;
yy658:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy659;
  if (yych != 'n') goto yy186;
yy659:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy660;
  if (yych != 'u') goto yy186;
yy660:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy661;
  if (yych != 'e') goto yy186;
yy661:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1121 "Zend/zend_language_scanner.l"
  {
 return 332;
}
# 6339 "Zend/zend_language_scanner.c"
yy663:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1021 "Zend/zend_language_scanner.l"
  {
 return 335;
}
# 6352 "Zend/zend_language_scanner.c"
yy665:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy670;
  if (yych == 's') goto yy670;
  goto yy186;
yy666:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy667;
  if (yych != 'n') goto yy186;
yy667:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy668;
  if (yych != 'e') goto yy186;
yy668:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1199 "Zend/zend_language_scanner.l"
  {
 return 298;
}
# 6381 "Zend/zend_language_scanner.c"
yy670:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy671;
  if (yych != 's') goto yy186;
yy671:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1137 "Zend/zend_language_scanner.l"
  {
 return 354;
}
# 6399 "Zend/zend_language_scanner.c"
yy673:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy684;
  if (yych == 'c') goto yy684;
  goto yy186;
yy674:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy682;
  if (yych == 'e') goto yy682;
  goto yy186;
yy675:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy676;
  if (yych != 'l') goto yy186;
yy676:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy677;
  if (yych != 'a') goto yy186;
yy677:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'B') goto yy678;
  if (yych != 'b') goto yy186;
yy678:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy679;
  if (yych != 'l') goto yy186;
yy679:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy680;
  if (yych != 'e') goto yy186;
yy680:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1323 "Zend/zend_language_scanner.l"
  {
 return 363;
}
# 6449 "Zend/zend_language_scanner.c"
yy682:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1109 "Zend/zend_language_scanner.l"
  {
 return 329;
}
# 6462 "Zend/zend_language_scanner.c"
yy684:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy685;
  if (yych != 'h') goto yy186;
yy685:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1033 "Zend/zend_language_scanner.l"
  {
 return 338;
}
# 6480 "Zend/zend_language_scanner.c"
yy687:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy704;
  if (yych == 'n') goto yy704;
  goto yy186;
yy688:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy697;
  if (yych == 'r') goto yy697;
  goto yy186;
yy689:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy690;
  if (yych != 'n') goto yy186;
yy690:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy691;
  if (yych != 'c') goto yy186;
yy691:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy692;
  if (yych != 't') goto yy186;
yy692:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy693;
  if (yych != 'i') goto yy186;
yy693:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy694;
  if (yych != 'o') goto yy186;
yy694:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy695;
  if (yych != 'n') goto yy186;
yy695:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1017 "Zend/zend_language_scanner.l"
  {
 return 334;
}
# 6535 "Zend/zend_language_scanner.c"
yy697:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '^') {
   if (yych <= '@') {
    if (yych <= '/') goto yy698;
    if (yych <= '9') goto yy185;
   } else {
    if (yych == 'E') goto yy699;
    if (yych <= 'Z') goto yy185;
   }
  } else {
   if (yych <= 'd') {
    if (yych != '`') goto yy185;
   } else {
    if (yych <= 'e') goto yy699;
    if (yych <= 'z') goto yy185;
    if (yych >= 0x7F) goto yy185;
   }
  }
yy698:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1069 "Zend/zend_language_scanner.l"
  {
 return 320;
}
# 6563 "Zend/zend_language_scanner.c"
yy699:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy700;
  if (yych != 'a') goto yy186;
yy700:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy701;
  if (yych != 'c') goto yy186;
yy701:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy702;
  if (yych != 'h') goto yy186;
yy702:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1077 "Zend/zend_language_scanner.l"
  {
 return 322;
}
# 6591 "Zend/zend_language_scanner.c"
yy704:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy705;
  if (yych != 'a') goto yy186;
yy705:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy706;
  if (yych != 'l') goto yy186;
yy706:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1291 "Zend/zend_language_scanner.l"
  {
 return 346;
}
# 6614 "Zend/zend_language_scanner.c"
yy708:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'F') {
   if (yych == 'C') goto yy714;
   if (yych <= 'E') goto yy186;
   goto yy715;
  } else {
   if (yych <= 'c') {
    if (yych <= 'b') goto yy186;
    goto yy714;
   } else {
    if (yych == 'f') goto yy715;
    goto yy186;
   }
  }
yy709:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy712;
  if (yych == 'e') goto yy712;
  goto yy186;
yy710:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1065 "Zend/zend_language_scanner.l"
  {
 return 317;
}
# 6649 "Zend/zend_language_scanner.c"
yy712:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1013 "Zend/zend_language_scanner.l"
  {
 return 300;
}
# 6662 "Zend/zend_language_scanner.c"
yy714:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy721;
  if (yych == 'l') goto yy721;
  goto yy186;
yy715:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy716;
  if (yych != 'a') goto yy186;
yy716:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'U') goto yy717;
  if (yych != 'u') goto yy186;
yy717:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy718;
  if (yych != 'l') goto yy186;
yy718:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy719;
  if (yych != 't') goto yy186;
yy719:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1113 "Zend/zend_language_scanner.l"
  {
 return 330;
}
# 6701 "Zend/zend_language_scanner.c"
yy721:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy722;
  if (yych != 'a') goto yy186;
yy722:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy723;
  if (yych != 'r') goto yy186;
yy723:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy724;
  if (yych != 'e') goto yy186;
yy724:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1085 "Zend/zend_language_scanner.l"
  {
 return 324;
}
# 6729 "Zend/zend_language_scanner.c"
yy726:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy788;
  if (yych == 'h') goto yy788;
  goto yy186;
yy727:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy782;
  if (yych == 's') goto yy782;
  goto yy186;
yy728:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'P') goto yy778;
  if (yych == 'p') goto yy778;
  goto yy186;
yy729:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy744;
  if (yych == 'd') goto yy744;
  goto yy186;
yy730:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy741;
  if (yych == 'a') goto yy741;
  goto yy186;
yy731:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych <= 'T') {
   if (yych == 'I') goto yy732;
   if (yych <= 'S') goto yy186;
   goto yy733;
  } else {
   if (yych <= 'i') {
    if (yych <= 'h') goto yy186;
   } else {
    if (yych == 't') goto yy733;
    goto yy186;
   }
  }
yy732:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy739;
  if (yych == 't') goto yy739;
  goto yy186;
yy733:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy734;
  if (yych != 'e') goto yy186;
yy734:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'N') goto yy735;
  if (yych != 'n') goto yy186;
yy735:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'D') goto yy736;
  if (yych != 'd') goto yy186;
yy736:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'S') goto yy737;
  if (yych != 's') goto yy186;
yy737:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1149 "Zend/zend_language_scanner.l"
  {
 return 357;
}
# 6813 "Zend/zend_language_scanner.c"
yy739:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1009 "Zend/zend_language_scanner.l"
  {
 return 300;
}
# 6826 "Zend/zend_language_scanner.c"
yy741:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy742;
  if (yych != 'l') goto yy186;
yy742:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1235 "Zend/zend_language_scanner.l"
  {
 return 260;
}
# 6844 "Zend/zend_language_scanner.c"
yy744:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  ;
  switch (yych) {
  case 'D':
  case 'd': goto yy745;
  case 'F':
  case 'f': goto yy746;
  case 'I':
  case 'i': goto yy747;
  case 'S':
  case 's': goto yy748;
  case 'W':
  case 'w': goto yy749;
  default: goto yy186;
  }
yy745:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy771;
  if (yych == 'e') goto yy771;
  goto yy186;
yy746:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy763;
  if (yych == 'o') goto yy763;
  goto yy186;
yy747:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'F') goto yy761;
  if (yych == 'f') goto yy761;
  goto yy186;
yy748:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'W') goto yy755;
  if (yych == 'w') goto yy755;
  goto yy186;
yy749:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy750;
  if (yych != 'h') goto yy186;
yy750:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy751;
  if (yych != 'i') goto yy186;
yy751:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy752;
  if (yych != 'l') goto yy186;
yy752:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy753;
  if (yych != 'e') goto yy186;
yy753:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1061 "Zend/zend_language_scanner.l"
  {
 return 319;
}
# 6918 "Zend/zend_language_scanner.c"
yy755:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'I') goto yy756;
  if (yych != 'i') goto yy186;
yy756:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy757;
  if (yych != 't') goto yy186;
yy757:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy758;
  if (yych != 'c') goto yy186;
yy758:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy759;
  if (yych != 'h') goto yy186;
yy759:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1105 "Zend/zend_language_scanner.l"
  {
 return 328;
}
# 6951 "Zend/zend_language_scanner.c"
yy761:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1049 "Zend/zend_language_scanner.l"
  {
 return 304;
}
# 6964 "Zend/zend_language_scanner.c"
yy763:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy764;
  if (yych != 'r') goto yy186;
yy764:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '^') {
   if (yych <= '@') {
    if (yych <= '/') goto yy765;
    if (yych <= '9') goto yy185;
   } else {
    if (yych == 'E') goto yy766;
    if (yych <= 'Z') goto yy185;
   }
  } else {
   if (yych <= 'd') {
    if (yych != '`') goto yy185;
   } else {
    if (yych <= 'e') goto yy766;
    if (yych <= 'z') goto yy185;
    if (yych >= 0x7F) goto yy185;
   }
  }
yy765:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1073 "Zend/zend_language_scanner.l"
  {
 return 321;
}
# 6997 "Zend/zend_language_scanner.c"
yy766:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy767;
  if (yych != 'a') goto yy186;
yy767:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy768;
  if (yych != 'c') goto yy186;
yy768:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'H') goto yy769;
  if (yych != 'h') goto yy186;
yy769:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1081 "Zend/zend_language_scanner.l"
  {
 return 323;
}
# 7025 "Zend/zend_language_scanner.c"
yy771:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'C') goto yy772;
  if (yych != 'c') goto yy186;
yy772:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'L') goto yy773;
  if (yych != 'l') goto yy186;
yy773:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'A') goto yy774;
  if (yych != 'a') goto yy186;
yy774:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'R') goto yy775;
  if (yych != 'r') goto yy186;
yy775:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy776;
  if (yych != 'e') goto yy186;
yy776:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1089 "Zend/zend_language_scanner.l"
  {
 return 325;
}
# 7063 "Zend/zend_language_scanner.c"
yy778:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'T') goto yy779;
  if (yych != 't') goto yy186;
yy779:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'Y') goto yy780;
  if (yych != 'y') goto yy186;
yy780:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1275 "Zend/zend_language_scanner.l"
  {
 return 352;
}
# 7086 "Zend/zend_language_scanner.c"
yy782:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'E') goto yy783;
  if (yych != 'e') goto yy186;
yy783:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '^') {
   if (yych <= '@') {
    if (yych <= '/') goto yy784;
    if (yych <= '9') goto yy185;
   } else {
    if (yych == 'I') goto yy785;
    if (yych <= 'Z') goto yy185;
   }
  } else {
   if (yych <= 'h') {
    if (yych != '`') goto yy185;
   } else {
    if (yych <= 'i') goto yy785;
    if (yych <= 'z') goto yy185;
    if (yych >= 0x7F) goto yy185;
   }
  }
yy784:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1053 "Zend/zend_language_scanner.l"
  {
 return 303;
}
# 7119 "Zend/zend_language_scanner.c"
yy785:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'F') goto yy786;
  if (yych != 'f') goto yy186;
yy786:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1045 "Zend/zend_language_scanner.l"
  {
 return 302;
}
# 7137 "Zend/zend_language_scanner.c"
yy788:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yych == 'O') goto yy789;
  if (yych != 'o') goto yy186;
yy789:
  ;
  ++(language_scanner_globals.yy_cursor);
  if (yybm[0+(yych = *(language_scanner_globals.yy_cursor))] & 4) {
   goto yy185;
  }
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1129 "Zend/zend_language_scanner.l"
  {
 return 316;
}
# 7155 "Zend/zend_language_scanner.c"
 }

yyc_ST_LOOKING_FOR_PROPERTY:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 128, 128, 0, 0, 128, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   128, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 0, 0, 0, 0, 0, 0,
     0, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 0, 0, 0, 0, 64,
     0, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 0, 0, 0, 0, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
    64, 64, 64, 64, 64, 64, 64, 64,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych <= '-') {
   if (yych <= '\r') {
    if (yych <= 0x08) goto yy799;
    if (yych <= '\n') goto yy793;
    if (yych <= '\f') goto yy799;
   } else {
    if (yych == ' ') goto yy793;
    if (yych <= ',') goto yy799;
    goto yy795;
   }
  } else {
   if (yych <= '_') {
    if (yych <= '@') goto yy799;
    if (yych <= 'Z') goto yy797;
    if (yych <= '^') goto yy799;
    goto yy797;
   } else {
    if (yych <= '`') goto yy799;
    if (yych <= 'z') goto yy797;
    if (yych <= '~') goto yy799;
    goto yy797;
   }
  }
yy793:
  ;
  ++(language_scanner_globals.yy_cursor);
  yych = *(language_scanner_globals.yy_cursor);
  goto yy805;
yy794:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1162 "Zend/zend_language_scanner.l"
  {
 zendlval->value.str.val = ((char*)(language_scanner_globals.yy_text));
 zendlval->value.str.len = (language_scanner_globals.yy_leng);
 zendlval->type = 6;
 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng)); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);
 return 375;
}
# 7236 "Zend/zend_language_scanner.c"
yy795:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) == '>') goto yy802;
yy796:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1181 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 0; (language_scanner_globals.yy_leng) = (unsigned int)0; } while(0);
 yy_pop_state();
 goto restart;
}
# 7250 "Zend/zend_language_scanner.c"
yy797:
  ;
  ++(language_scanner_globals.yy_cursor);
  yych = *(language_scanner_globals.yy_cursor);
  goto yy801;
yy798:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1174 "Zend/zend_language_scanner.l"
  {
 yy_pop_state();
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup((((char*)(language_scanner_globals.yy_text))), ((language_scanner_globals.yy_leng)) ); zendlval->value.str.len = (language_scanner_globals.yy_leng); };
 zendlval->type = 6;
 return 307;
}
# 7266 "Zend/zend_language_scanner.c"
yy799:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy796;
yy800:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy801:
  ;
  if (yybm[0+yych] & 64) {
   goto yy800;
  }
  goto yy798;
yy802:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1170 "Zend/zend_language_scanner.l"
  {
 return 359;
}
# 7291 "Zend/zend_language_scanner.c"
yy804:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy805:
  ;
  if (yybm[0+yych] & 128) {
   goto yy804;
  }
  goto yy794;
 }

yyc_ST_LOOKING_FOR_VARNAME:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 0, 0, 0, 0, 0, 0,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
     0, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 0, 0, 0, 0, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
   128, 128, 128, 128, 128, 128, 128, 128,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 2) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych <= '_') {
   if (yych <= '@') goto yy810;
   if (yych <= 'Z') goto yy808;
   if (yych <= '^') goto yy810;
  } else {
   if (yych <= '`') goto yy810;
   if (yych <= 'z') goto yy808;
   if (yych <= '~') goto yy810;
  }
yy808:
  ;
  ++(language_scanner_globals.yy_cursor);
  yych = *(language_scanner_globals.yy_cursor);
  goto yy813;
yy809:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1457 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup((((char*)(language_scanner_globals.yy_text))), ((language_scanner_globals.yy_leng)) ); zendlval->value.str.len = (language_scanner_globals.yy_leng); };
 zendlval->type = 6;
 yy_pop_state();
 _yy_push_state(yycST_IN_SCRIPTING );
 return 308;
}
# 7369 "Zend/zend_language_scanner.c"
yy810:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1466 "Zend/zend_language_scanner.l"
  {
 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 0; (language_scanner_globals.yy_leng) = (unsigned int)0; } while(0);
 yy_pop_state();
 _yy_push_state(yycST_IN_SCRIPTING );
 goto restart;
}
# 7382 "Zend/zend_language_scanner.c"
yy812:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy813:
  ;
  if (yybm[0+yych] & 128) {
   goto yy812;
  }
  goto yy809;
 }

yyc_ST_NOWDOC:
 ;
 { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
 yych = *(language_scanner_globals.yy_cursor);
 ;
 ++(language_scanner_globals.yy_cursor);
 ;
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2340 "Zend/zend_language_scanner.l"
 {
 int newline = 0;

 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return 0;
 }

 (language_scanner_globals.yy_cursor)--;

 while ((language_scanner_globals.yy_cursor) < (language_scanner_globals.yy_limit)) {
  switch (*(language_scanner_globals.yy_cursor)++) {
   case '\r':
    if (*(language_scanner_globals.yy_cursor) == '\n') {
     (language_scanner_globals.yy_cursor)++;
    }

   case '\n':

    if ((((*(language_scanner_globals.yy_cursor)) >= 'a' && (*(language_scanner_globals.yy_cursor)) <= 'z') || ((*(language_scanner_globals.yy_cursor)) >= 'A' && (*(language_scanner_globals.yy_cursor)) <= 'Z') || (*(language_scanner_globals.yy_cursor)) == '_' || (*(language_scanner_globals.yy_cursor)) >= 0x7F) && (compiler_globals.heredoc_len) < (language_scanner_globals.yy_limit) - (language_scanner_globals.yy_cursor) && !memcmp((language_scanner_globals.yy_cursor), (compiler_globals.heredoc), (compiler_globals.heredoc_len))) {
     unsigned char *end = (language_scanner_globals.yy_cursor) + (compiler_globals.heredoc_len);

     if (*end == ';') {
      end++;
     }

     if (*end == '\n' || *end == '\r') {


      if ((language_scanner_globals.yy_cursor)[-2] == '\r' && (language_scanner_globals.yy_cursor)[-1] == '\n') {
       newline = 2;
      } else {
       newline = 1;
      }

      (compiler_globals.increment_lineno) = 1;
      (language_scanner_globals.yy_state) = yycST_END_HEREDOC;

      goto nowdoc_scan_done;
     }
    }

   default:
    continue;
  }
 }

nowdoc_scan_done:
 (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);

 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng) - newline ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup((((char*)(language_scanner_globals.yy_text))), ((language_scanner_globals.yy_leng) - newline) ); zendlval->value.str.len = (language_scanner_globals.yy_leng) - newline; };
 zendlval->type = 6;
 do { char *p = (((char*)(language_scanner_globals.yy_text))), *boundary = p+((language_scanner_globals.yy_leng) - newline); while (p<boundary) { if (*p == '\n' || (*p == '\r' && (*(p+1) != '\n'))) { (compiler_globals.zend_lineno)++; } p++; } } while (0);
 return 314;
}
# 7459 "Zend/zend_language_scanner.c"

yyc_ST_VAR_OFFSET:
 {
  static const unsigned char yybm[] = {
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
     0, 0, 0, 0, 0, 0, 0, 0,
   240, 240, 112, 112, 112, 112, 112, 112,
   112, 112, 0, 0, 0, 0, 0, 0,
     0, 80, 80, 80, 80, 80, 80, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 0, 0, 0, 0, 16,
     0, 80, 80, 80, 80, 80, 80, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 0, 0, 0, 0, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
    16, 16, 16, 16, 16, 16, 16, 16,
  };
  ;
  { if (((language_scanner_globals.yy_cursor) + 3) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  if (yych <= '/') {
   if (yych <= ' ') {
    if (yych <= '\f') {
     if (yych <= 0x08) goto yy832;
     if (yych <= '\n') goto yy828;
     goto yy832;
    } else {
     if (yych <= '\r') goto yy828;
     if (yych <= 0x1F) goto yy832;
     goto yy828;
    }
   } else {
    if (yych <= '$') {
     if (yych <= '"') goto yy827;
     if (yych <= '#') goto yy828;
     goto yy823;
    } else {
     if (yych == '\'') goto yy828;
     goto yy827;
    }
   }
  } else {
   if (yych <= '\\') {
    if (yych <= '@') {
     if (yych <= '0') goto yy820;
     if (yych <= '9') goto yy822;
     goto yy827;
    } else {
     if (yych <= 'Z') goto yy830;
     if (yych <= '[') goto yy827;
     goto yy828;
    }
   } else {
    if (yych <= '_') {
     if (yych <= ']') goto yy825;
     if (yych <= '^') goto yy827;
     goto yy830;
    } else {
     if (yych <= '`') goto yy827;
     if (yych <= 'z') goto yy830;
     if (yych <= '~') goto yy827;
     goto yy830;
    }
   }
  }
yy820:
  ;
  yyaccept = 0;
  yych = *((language_scanner_globals.yy_marker) = ++(language_scanner_globals.yy_cursor));
  if (yych <= 'W') {
   if (yych <= '9') {
    if (yych >= '0') goto yy844;
   } else {
    if (yych == 'B') goto yy841;
   }
  } else {
   if (yych <= 'b') {
    if (yych <= 'X') goto yy843;
    if (yych >= 'b') goto yy841;
   } else {
    if (yych == 'x') goto yy843;
   }
  }
yy821:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1536 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.yy_leng) < 11 - 1 || ((language_scanner_globals.yy_leng) == 11 - 1 && __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (((char*)(language_scanner_globals.yy_text))) && __builtin_constant_p (long_min_digits) && (__s1_len = strlen (((char*)(language_scanner_globals.yy_text))), __s2_len = strlen (long_min_digits), (!((size_t)(const void *)((((char*)(language_scanner_globals.yy_text))) + 1) - (size_t)(const void *)(((char*)(language_scanner_globals.yy_text))) == 1) || __s1_len >= 4) && (!((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) || __s2_len >= 4)) ? __builtin_strcmp (((char*)(language_scanner_globals.yy_text)), long_min_digits) : (__builtin_constant_p (((char*)(language_scanner_globals.yy_text))) && ((size_t)(const void *)((((char*)(language_scanner_globals.yy_text))) + 1) - (size_t)(const void *)(((char*)(language_scanner_globals.yy_text))) == 1) && (__s1_len = strlen (((char*)(language_scanner_globals.yy_text))), __s1_len < 4) ? (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) ? __builtin_strcmp (((char*)(language_scanner_globals.yy_text)), long_min_digits) : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) (long_min_digits); register int __result = (((__const unsigned char *) (__const char *) (((char*)(language_scanner_globals.yy_text))))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (((char*)(language_scanner_globals.yy_text))))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (((char*)(language_scanner_globals.yy_text))))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (((char*)(language_scanner_globals.yy_text))))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p (long_min_digits) && ((size_t)(const void *)((long_min_digits) + 1) - (size_t)(const void *)(long_min_digits) == 1) && (__s2_len = strlen (long_min_digits), __s2_len < 4) ? (__builtin_constant_p (((char*)(language_scanner_globals.yy_text))) && ((size_t)(const void *)((((char*)(language_scanner_globals.yy_text))) + 1) - (size_t)(const void *)(((char*)(language_scanner_globals.yy_text))) == 1) ? __builtin_strcmp (((char*)(language_scanner_globals.yy_text)), long_min_digits) : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (((char*)(language_scanner_globals.yy_text))); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) (long_min_digits))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) (long_min_digits))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) (long_min_digits))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) (long_min_digits))[3]); } } __result; }))) : __builtin_strcmp (((char*)(language_scanner_globals.yy_text)), long_min_digits)))); }) < 0)) {
  zendlval->value.lval = strtol(((char*)(language_scanner_globals.yy_text)), ((void *)0), 10);
  zendlval->type = 1;
 } else {
  zendlval->value.str.val = (char *)_estrndup((((char*)(language_scanner_globals.yy_text))), ((language_scanner_globals.yy_leng)) );
  zendlval->value.str.len = (language_scanner_globals.yy_leng);
  zendlval->type = 6;
 }
 return 310;
}
# 7578 "Zend/zend_language_scanner.c"
yy822:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy840;
yy823:
  ;
  ++(language_scanner_globals.yy_cursor);
  if ((yych = *(language_scanner_globals.yy_cursor)) <= '_') {
   if (yych <= '@') goto yy824;
   if (yych <= 'Z') goto yy836;
   if (yych >= '_') goto yy836;
  } else {
   if (yych <= '`') goto yy824;
   if (yych <= 'z') goto yy836;
   if (yych >= 0x7F) goto yy836;
  }
yy824:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1868 "Zend/zend_language_scanner.l"
  {

 return ((char*)(language_scanner_globals.yy_text))[0];
}
# 7603 "Zend/zend_language_scanner.c"
yy825:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1863 "Zend/zend_language_scanner.l"
  {
 yy_pop_state();
 return ']';
}
# 7614 "Zend/zend_language_scanner.c"
yy827:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  goto yy824;
yy828:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1873 "Zend/zend_language_scanner.l"
  {

 do { (language_scanner_globals.yy_cursor) = (unsigned char*)((char*)(language_scanner_globals.yy_text)) + 0; (language_scanner_globals.yy_leng) = (unsigned int)0; } while(0);
 yy_pop_state();
 return 314;
}
# 7631 "Zend/zend_language_scanner.c"
yy830:
  ;
  ++(language_scanner_globals.yy_cursor);
  yych = *(language_scanner_globals.yy_cursor);
  goto yy835;
yy831:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1880 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)((char*)(language_scanner_globals.yy_text)), (size_t)(language_scanner_globals.yy_leng) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup((((char*)(language_scanner_globals.yy_text))), ((language_scanner_globals.yy_leng)) ); zendlval->value.str.len = (language_scanner_globals.yy_leng); };
 zendlval->type = 6;
 return 307;
}
# 7646 "Zend/zend_language_scanner.c"
yy832:
  ;
  ++(language_scanner_globals.yy_cursor);
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 2396 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.yy_cursor) > (language_scanner_globals.yy_limit)) {
  return 0;
 }

 zend_error((1<<7L),"Unexpected character in input:  '%c' (ASCII=%d) state=%d", ((char*)(language_scanner_globals.yy_text))[0], ((char*)(language_scanner_globals.yy_text))[0], (language_scanner_globals.yy_state));
 goto restart;
}
# 7661 "Zend/zend_language_scanner.c"
yy834:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy835:
  ;
  if (yybm[0+yych] & 16) {
   goto yy834;
  }
  goto yy831;
yy836:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '^') {
   if (yych <= '9') {
    if (yych >= '0') goto yy836;
   } else {
    if (yych <= '@') goto yy838;
    if (yych <= 'Z') goto yy836;
   }
  } else {
   if (yych <= '`') {
    if (yych <= '_') goto yy836;
   } else {
    if (yych <= 'z') goto yy836;
    if (yych >= 0x7F) goto yy836;
   }
  }
yy838:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1857 "Zend/zend_language_scanner.l"
  {
 if ((language_scanner_globals.output_filter)) { size_t sz = 0; (language_scanner_globals.output_filter)((unsigned char **)&(zendlval->value.str.val), &sz, (unsigned char *)(((char*)(language_scanner_globals.yy_text))+1), (size_t)((language_scanner_globals.yy_leng)-1) ); zendlval->value.str.len = sz; } else { zendlval->value.str.val = (char *) _estrndup(((((char*)(language_scanner_globals.yy_text))+1)), (((language_scanner_globals.yy_leng)-1)) ); zendlval->value.str.len = ((language_scanner_globals.yy_leng)-1); };
 zendlval->type = 6;
 return 309;
}
# 7703 "Zend/zend_language_scanner.c"
yy839:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
yy840:
  ;
  if (yybm[0+yych] & 32) {
   goto yy839;
  }
  goto yy821;
yy841:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yybm[0+yych] & 128) {
   goto yy849;
  }
yy842:
  ;
  (language_scanner_globals.yy_cursor) = (language_scanner_globals.yy_marker);
  goto yy821;
yy843:
  ;
  yych = *++(language_scanner_globals.yy_cursor);
  if (yybm[0+yych] & 64) {
   goto yy847;
  }
  goto yy842;
yy844:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yych <= '/') goto yy846;
  if (yych <= '9') goto yy844;
yy846:
  ;
  (language_scanner_globals.yy_leng) = (language_scanner_globals.yy_cursor) - (language_scanner_globals.yy_text);
# 1548 "Zend/zend_language_scanner.l"
  {
 zendlval->value.str.val = (char *)_estrndup((((char*)(language_scanner_globals.yy_text))), ((language_scanner_globals.yy_leng)) );
 zendlval->value.str.len = (language_scanner_globals.yy_leng);
 zendlval->type = 6;
 return 310;
}
# 7750 "Zend/zend_language_scanner.c"
yy847:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 64) {
   goto yy847;
  }
  goto yy846;
yy849:
  ;
  ++(language_scanner_globals.yy_cursor);
  { if (((language_scanner_globals.yy_cursor) + 1) >= ((language_scanner_globals.yy_limit) + 32)) { return 0; } };
  yych = *(language_scanner_globals.yy_cursor);
  ;
  if (yybm[0+yych] & 128) {
   goto yy849;
  }
  goto yy846;
 }
}
# 2405 "Zend/zend_language_scanner.l"

}
