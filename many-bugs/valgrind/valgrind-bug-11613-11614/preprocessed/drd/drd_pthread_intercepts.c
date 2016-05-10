# 1 "drd_pthread_intercepts.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/valgrind-bug-11613-11614/valgrind/drd//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "drd_pthread_intercepts.c"
# 51 "drd_pthread_intercepts.c"
# 1 "/usr/include/assert.h" 1 3 4
# 37 "/usr/include/assert.h" 3 4
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
# 38 "/usr/include/assert.h" 2 3 4
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



# 52 "drd_pthread_intercepts.c" 2
# 1 "/usr/include/pthread.h" 1 3 4
# 24 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 25 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 27 "/usr/include/sched.h" 3 4
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
# 28 "/usr/include/sched.h" 2 3 4


# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
# 31 "/usr/include/sched.h" 2 3 4



# 1 "/usr/include/time.h" 1 3 4
# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 35 "/usr/include/sched.h" 2 3 4


typedef __pid_t pid_t;





# 1 "/usr/include/bits/sched.h" 1 3 4
# 74 "/usr/include/bits/sched.h" 3 4
struct sched_param
  {
    int __sched_priority;
  };





extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) __attribute__ ((__nothrow__));


extern int unshare (int __flags) __attribute__ ((__nothrow__));


extern int sched_getcpu (void) __attribute__ ((__nothrow__));










struct __sched_param
  {
    int __sched_priority;
  };
# 116 "/usr/include/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 199 "/usr/include/bits/sched.h" 3 4


extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  __attribute__ ((__nothrow__));
extern cpu_set_t *__sched_cpualloc (size_t __count) __attribute__ ((__nothrow__)) ;
extern void __sched_cpufree (cpu_set_t *__set) __attribute__ ((__nothrow__));


# 44 "/usr/include/sched.h" 2 3 4







extern int sched_setparam (__pid_t __pid, __const struct sched_param *__param)
     __attribute__ ((__nothrow__));


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) __attribute__ ((__nothrow__));


extern int sched_setscheduler (__pid_t __pid, int __policy,
          __const struct sched_param *__param) __attribute__ ((__nothrow__));


extern int sched_getscheduler (__pid_t __pid) __attribute__ ((__nothrow__));


extern int sched_yield (void) __attribute__ ((__nothrow__));


extern int sched_get_priority_max (int __algorithm) __attribute__ ((__nothrow__));


extern int sched_get_priority_min (int __algorithm) __attribute__ ((__nothrow__));


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) __attribute__ ((__nothrow__));
# 118 "/usr/include/sched.h" 3 4
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         __const cpu_set_t *__cpuset) __attribute__ ((__nothrow__));


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) __attribute__ ((__nothrow__));



# 26 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4








# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
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



# 27 "/usr/include/pthread.h" 2 3 4

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
# 29 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/bits/setjmp.h" 1 3 4
# 29 "/usr/include/bits/setjmp.h" 3 4
typedef int __jmp_buf[6];
# 30 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 31 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 115 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 147 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 182 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 220 "/usr/include/pthread.h" 3 4





extern int pthread_create (pthread_t *__restrict __newthread,
      __const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) __attribute__ ((__nothrow__));







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     __const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) __attribute__ ((__nothrow__));



extern pthread_t pthread_self (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2) __attribute__ ((__nothrow__));







extern int pthread_attr_init (pthread_attr_t *__attr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (__const pthread_attr_t *__attr,
     int *__detachstate)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (__const pthread_attr_t *__attr,
          size_t *__guardsize)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (__const pthread_attr_t *__restrict
           __attr,
           struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           __const struct sched_param *__restrict
           __param) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (__const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (__const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (__const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (__const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (__const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (__const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     __const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_attr_getaffinity_np (__const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));





extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      __const struct sched_param *__param)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     __attribute__ ((__nothrow__));




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int pthread_setname_np (pthread_t __target_thread, __const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





extern int pthread_getconcurrency (void) __attribute__ ((__nothrow__));


extern int pthread_setconcurrency (int __level) __attribute__ ((__nothrow__));







extern int pthread_yield (void) __attribute__ ((__nothrow__));




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       __const cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3)));
# 478 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 490 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 524 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};
# 664 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__regparm__ (1)));
# 676 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel (__pthread_unwind_buf_t *__buf)
  __attribute__ ((__regparm__ (1)));
# 699 "/usr/include/pthread.h" 3 4
extern void __pthread_register_cancel_defer (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__regparm__ (1)));
# 712 "/usr/include/pthread.h" 3 4
extern void __pthread_unregister_cancel_restore (__pthread_unwind_buf_t *__buf)
  __attribute__ ((__regparm__ (1)));



extern void __pthread_unwind_next (__pthread_unwind_buf_t *__buf)
     __attribute__ ((__regparm__ (1))) __attribute__ ((__noreturn__))

     __attribute__ ((__weak__))

     ;



struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) __attribute__ ((__nothrow__));





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          __const pthread_mutexattr_t *__mutexattr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        __const struct timespec *__restrict
        __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (__const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 790 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (__const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (__const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (__const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (__const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (__const pthread_mutexattr_t *__attr,
     int *__robustness)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int pthread_mutexattr_getrobust_np (__const pthread_mutexattr_t *__attr,
        int *__robustness)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));

extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 872 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    __const pthread_rwlockattr_t *__restrict
    __attr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           __const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           __const struct timespec *__restrict
           __abstime) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (__const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (__const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         __const pthread_condattr_t *__restrict
         __cond_attr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 984 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       __const struct timespec *__restrict
       __abstime) __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (__const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (__const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 1028 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     __const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (__const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 1095 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) __attribute__ ((__nothrow__));


extern void *pthread_getspecific (pthread_key_t __key) __attribute__ ((__nothrow__));


extern int pthread_setspecific (pthread_key_t __key,
    __const void *__pointer) __attribute__ ((__nothrow__)) ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));
# 1129 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) __attribute__ ((__nothrow__));




extern __inline int
__attribute__ ((__nothrow__)) pthread_equal (pthread_t __thread1, pthread_t __thread2)
{
  return __thread1 == __thread2;
}



# 53 "drd_pthread_intercepts.c" 2
# 1 "/usr/include/semaphore.h" 1 3 4
# 23 "/usr/include/semaphore.h" 3 4
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






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;
# 105 "/usr/include/sys/types.h" 3 4
typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 137 "/usr/include/sys/types.h" 3 4
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
# 274 "/usr/include/sys/types.h" 3 4

# 24 "/usr/include/semaphore.h" 2 3 4






# 1 "/usr/include/bits/semaphore.h" 1 3 4
# 32 "/usr/include/bits/semaphore.h" 3 4
typedef union
{
  char __size[16];
  long int __align;
} sem_t;
# 31 "/usr/include/semaphore.h" 2 3 4






extern int sem_init (sem_t *__sem, int __pshared, unsigned int __value)
     __attribute__ ((__nothrow__));

extern int sem_destroy (sem_t *__sem) __attribute__ ((__nothrow__));


extern sem_t *sem_open (__const char *__name, int __oflag, ...) __attribute__ ((__nothrow__));


extern int sem_close (sem_t *__sem) __attribute__ ((__nothrow__));


extern int sem_unlink (__const char *__name) __attribute__ ((__nothrow__));





extern int sem_wait (sem_t *__sem);






extern int sem_timedwait (sem_t *__restrict __sem,
     __const struct timespec *__restrict __abstime);



extern int sem_trywait (sem_t *__sem) __attribute__ ((__nothrow__));


extern int sem_post (sem_t *__sem) __attribute__ ((__nothrow__));


extern int sem_getvalue (sem_t *__restrict __sem, int *__restrict __sval)
     __attribute__ ((__nothrow__));



# 54 "drd_pthread_intercepts.c" 2
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
# 55 "drd_pthread_intercepts.c" 2
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

# 56 "drd_pthread_intercepts.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 323 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef long int wchar_t;
# 34 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 67 "/usr/include/bits/waitstatus.h" 3 4
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

# 240 "/usr/include/stdlib.h" 3 4
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
# 327 "/usr/include/stdlib.h" 3 4
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

# 57 "drd_pthread_intercepts.c" 2
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
# 275 "/usr/include/unistd.h" 3 4
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

# 58 "drd_pthread_intercepts.c" 2
# 1 "../config.h" 1
# 59 "drd_pthread_intercepts.c" 2
# 1 "drd_basics.h" 1
# 33 "drd_basics.h"
# 1 "../include/pub_tool_basics.h" 1
# 47 "../include/pub_tool_basics.h"
# 1 "../VEX/pub/libvex_basictypes.h" 1
# 44 "../VEX/pub/libvex_basictypes.h"
typedef unsigned char UChar;
typedef signed char Char;
typedef char HChar;




typedef unsigned short UShort;
typedef signed short Short;


typedef unsigned int UInt;
typedef signed int Int;


typedef unsigned long long int ULong;
typedef signed long long int Long;


typedef UInt U128[4];


typedef
   union {
      UChar w8[16];
      UShort w16[8];
      UInt w32[4];
      ULong w64[2];
   }
   V128;


typedef float Float;
typedef double Double;


typedef unsigned char Bool;






static inline Bool toBool ( Int x ) {
   Int r = (x == 0) ? ((Bool)0) : ((Bool)1);
   return (Bool)r;
}
static inline UChar toUChar ( Int x ) {
   x &= 0xFF;
   return (UChar)x;
}
static inline HChar toHChar ( Int x ) {
   x &= 0xFF;
   return (HChar)x;
}
static inline UShort toUShort ( Int x ) {
   x &= 0xFFFF;
   return (UShort)x;
}
static inline Short toShort ( Int x ) {
   x &= 0xFFFF;
   return (Short)x;
}
static inline UInt toUInt ( Long x ) {
   x &= 0xFFFFFFFFLL;
   return (UInt)x;
}


typedef UInt Addr32;
typedef ULong Addr64;





typedef unsigned long HWord;
# 170 "../VEX/pub/libvex_basictypes.h"
   static inline ULong Ptr_to_ULong ( void* p ) {
      UInt w = (UInt)p;
      return (ULong)w;
   }
   static inline void* ULong_to_Ptr ( ULong n ) {
      UInt w = (UInt)n;
      return (void*)w;
   }
# 48 "../include/pub_tool_basics.h" 2


# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 51 "../include/pub_tool_basics.h" 2
# 86 "../include/pub_tool_basics.h"
typedef unsigned long UWord;
typedef signed long Word;





typedef UWord Addr;
typedef UWord AddrH;




typedef UWord SizeT;
typedef Word SSizeT;





typedef Word PtrdiffT;
# 115 "../include/pub_tool_basics.h"
typedef Word OffT;





typedef Long Off64T;






typedef struct { UWord uw1; UWord uw2; } UWordPair;
# 139 "../include/pub_tool_basics.h"
typedef UInt ThreadId;
# 177 "../include/pub_tool_basics.h"
typedef
   struct {
      UWord _val;
      Bool _isError;
   }
   SysRes;
# 216 "../include/pub_tool_basics.h"
static inline Bool sr_isError ( SysRes sr ) {
   return sr._isError;
}
static inline UWord sr_Res ( SysRes sr ) {
   return sr._isError ? 0 : sr._val;
}
static inline UWord sr_ResHI ( SysRes sr ) {
   return 0;
}
static inline UWord sr_Err ( SysRes sr ) {
   return sr._isError ? sr._val : 0;
}
static inline Bool sr_EQ ( SysRes sr1, SysRes sr2 ) {
   return sr1._val == sr2._val
          && ((sr1._isError && sr2._isError)
              || (!sr1._isError && !sr2._isError));
}
# 34 "drd_basics.h" 2





typedef UInt DrdThreadId;
# 60 "drd_pthread_intercepts.c" 2
# 1 "drd_clientreq.h" 1
# 36 "drd_clientreq.h"
# 1 "drd.h" 1
# 65 "drd.h"
# 1 "../include/valgrind.h" 1
# 214 "../include/valgrind.h"
typedef
   struct {
      unsigned int nraddr;
   }
   OrigFn;
# 4827 "../include/valgrind.h"
typedef
   enum { VG_USERREQ__RUNNING_ON_VALGRIND = 0x1001,
          VG_USERREQ__DISCARD_TRANSLATIONS = 0x1002,






          VG_USERREQ__CLIENT_CALL0 = 0x1101,
          VG_USERREQ__CLIENT_CALL1 = 0x1102,
          VG_USERREQ__CLIENT_CALL2 = 0x1103,
          VG_USERREQ__CLIENT_CALL3 = 0x1104,




          VG_USERREQ__COUNT_ERRORS = 0x1201,



          VG_USERREQ__MALLOCLIKE_BLOCK = 0x1301,
          VG_USERREQ__FREELIKE_BLOCK = 0x1302,

          VG_USERREQ__CREATE_MEMPOOL = 0x1303,
          VG_USERREQ__DESTROY_MEMPOOL = 0x1304,
          VG_USERREQ__MEMPOOL_ALLOC = 0x1305,
          VG_USERREQ__MEMPOOL_FREE = 0x1306,
          VG_USERREQ__MEMPOOL_TRIM = 0x1307,
          VG_USERREQ__MOVE_MEMPOOL = 0x1308,
          VG_USERREQ__MEMPOOL_CHANGE = 0x1309,
          VG_USERREQ__MEMPOOL_EXISTS = 0x130a,
# 4867 "../include/valgrind.h"
          VG_USERREQ__PRINTF = 0x1401,
          VG_USERREQ__PRINTF_BACKTRACE = 0x1402,

          VG_USERREQ__PRINTF_VALIST_BY_REF = 0x1403,
          VG_USERREQ__PRINTF_BACKTRACE_VALIST_BY_REF = 0x1404,


          VG_USERREQ__STACK_REGISTER = 0x1501,
          VG_USERREQ__STACK_DEREGISTER = 0x1502,
          VG_USERREQ__STACK_CHANGE = 0x1503,


          VG_USERREQ__LOAD_PDB_DEBUGINFO = 0x1601,


          VG_USERREQ__MAP_IP_TO_SRCLOC = 0x1701
   } Vg_ClientRequest;
# 4972 "../include/valgrind.h"
static int VALGRIND_PRINTF(const char *format, ...)
   __attribute__((format(__printf__, 1, 2), __unused__));

static int



VALGRIND_PRINTF(const char *format, ...)
{



   unsigned long _qzz_res;
   va_list vargs;
   __builtin_va_start(vargs,format);







   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRINTF_VALIST_BY_REF); _zzq_args[1] = (unsigned int)((unsigned long)format); _zzq_args[2] = (unsigned int)((unsigned long)&vargs); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); _qzz_res = _zzq_result; }



                                      ;

   __builtin_va_end(vargs);
   return (int)_qzz_res;

}


static int VALGRIND_PRINTF_BACKTRACE(const char *format, ...)
   __attribute__((format(__printf__, 1, 2), __unused__));

static int



VALGRIND_PRINTF_BACKTRACE(const char *format, ...)
{



   unsigned long _qzz_res;
   va_list vargs;
   __builtin_va_start(vargs,format);







   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRINTF_BACKTRACE_VALIST_BY_REF); _zzq_args[1] = (unsigned int)((unsigned long)format); _zzq_args[2] = (unsigned int)((unsigned long)&vargs); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); _qzz_res = _zzq_result; }



                                      ;

   __builtin_va_end(vargs);
   return (int)_qzz_res;

}
# 66 "drd.h" 2
# 359 "drd.h"
enum {



   VG_USERREQ__DRD_CLEAN_MEMORY = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)),



   VG_USERREQ__DRD_GET_VALGRIND_THREAD_ID = ((unsigned int)((('D')&0xff) << 24 | (('R')&0xff) << 16)),


   VG_USERREQ__DRD_GET_DRD_THREAD_ID,




   VG_USERREQ__DRD_START_SUPPRESSION,



   VG_USERREQ__DRD_FINISH_SUPPRESSION,



   VG_USERREQ__DRD_START_TRACE_ADDR,


   VG_USERREQ__DRD_STOP_TRACE_ADDR,



   VG_USERREQ__DRD_RECORD_LOADS,


   VG_USERREQ__DRD_RECORD_STORES,



   VG_USERREQ__DRD_SET_THREAD_NAME,



   VG_USERREQ__DRD_ANNOTATION_UNIMP,




   VG_USERREQ__DRD_ANNOTATE_RWLOCK_CREATE
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 14,



   VG_USERREQ__DRD_ANNOTATE_RWLOCK_DESTROY
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 15,



   VG_USERREQ__DRD_ANNOTATE_RWLOCK_ACQUIRED
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 17,



   VG_USERREQ__DRD_ANNOTATE_RWLOCK_RELEASED
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 18,



   VG_USERREQ__HELGRIND_ANNOTATION_UNIMP
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 32,



   VG_USERREQ__DRD_ANNOTATE_HAPPENS_BEFORE
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 33,


   VG_USERREQ__DRD_ANNOTATE_HAPPENS_AFTER
      = ((unsigned int)((('H')&0xff) << 24 | (('G')&0xff) << 16)) + 256 + 34,


};
# 37 "drd_clientreq.h" 2
# 47 "drd_clientreq.h"
enum {



   VG_USERREQ__SET_PTHREAD_COND_INITIALIZER = ((unsigned int)((('D')&0xff) << 24 | (('r')&0xff) << 16)),



   VG_USERREQ__DRD_START_NEW_SEGMENT,



   VG_USERREQ__SET_PTHREADID,




   VG_USERREQ__SET_JOINABLE,



   VG_USERREQ__ENTERING_PTHREAD_CREATE,


   VG_USERREQ__LEFT_PTHREAD_CREATE,




   VG_USERREQ__POST_THREAD_JOIN,



   VG_USERREQ__PRE_THREAD_CANCEL,


   VG_USERREQ__POST_THREAD_CANCEL,



   VG_USERREQ__PRE_MUTEX_INIT,


   VG_USERREQ__POST_MUTEX_INIT,


   VG_USERREQ__PRE_MUTEX_DESTROY,


   VG_USERREQ__POST_MUTEX_DESTROY,


   VG_USERREQ__PRE_MUTEX_LOCK,


   VG_USERREQ__POST_MUTEX_LOCK,


   VG_USERREQ__PRE_MUTEX_UNLOCK,


   VG_USERREQ__POST_MUTEX_UNLOCK,


   VG_USERREQ__PRE_SPIN_INIT_OR_UNLOCK,


   VG_USERREQ__POST_SPIN_INIT_OR_UNLOCK,




   VG_USERREQ__PRE_COND_INIT,


   VG_USERREQ__POST_COND_INIT,


   VG_USERREQ__PRE_COND_DESTROY,


   VG_USERREQ__POST_COND_DESTROY,

   VG_USERREQ__PRE_COND_WAIT,

   VG_USERREQ__POST_COND_WAIT,

   VG_USERREQ__PRE_COND_SIGNAL,

   VG_USERREQ__POST_COND_SIGNAL,

   VG_USERREQ__PRE_COND_BROADCAST,

   VG_USERREQ__POST_COND_BROADCAST,



   VG_USERREQ__PRE_SEM_INIT,


   VG_USERREQ__POST_SEM_INIT,


   VG_USERREQ__PRE_SEM_DESTROY,


   VG_USERREQ__POST_SEM_DESTROY,


   VG_USERREQ__PRE_SEM_OPEN,


   VG_USERREQ__POST_SEM_OPEN,


   VG_USERREQ__PRE_SEM_CLOSE,


   VG_USERREQ__POST_SEM_CLOSE,


   VG_USERREQ__PRE_SEM_WAIT,


   VG_USERREQ__POST_SEM_WAIT,


   VG_USERREQ__PRE_SEM_POST,


   VG_USERREQ__POST_SEM_POST,



   VG_USERREQ__PRE_BARRIER_INIT,


   VG_USERREQ__POST_BARRIER_INIT,


   VG_USERREQ__PRE_BARRIER_DESTROY,


   VG_USERREQ__POST_BARRIER_DESTROY,


   VG_USERREQ__PRE_BARRIER_WAIT,


   VG_USERREQ__POST_BARRIER_WAIT,



   VG_USERREQ__PRE_RWLOCK_INIT,


   VG_USERREQ__POST_RWLOCK_DESTROY,


   VG_USERREQ__PRE_RWLOCK_RDLOCK,


   VG_USERREQ__POST_RWLOCK_RDLOCK,


   VG_USERREQ__PRE_RWLOCK_WRLOCK,


   VG_USERREQ__POST_RWLOCK_WRLOCK,


   VG_USERREQ__PRE_RWLOCK_UNLOCK,


   VG_USERREQ__POST_RWLOCK_UNLOCK


};






typedef enum {
   mutex_type_unknown = -1,
   mutex_type_invalid_mutex = 0,
   mutex_type_recursive_mutex = 1,
   mutex_type_errorcheck_mutex = 2,
   mutex_type_default_mutex = 3,
   mutex_type_spinlock = 4,
} MutexT;






typedef enum {
   pthread_rwlock = 1,
   user_rwlock = 2,
} RwLockT;






typedef enum {
   pthread_barrier = 1,
   gomp_barrier = 2,
} BarrierT;


void vgDrd_clientreq_init(void);
# 61 "drd_pthread_intercepts.c" 2
# 1 "../include/pub_tool_redir.h" 1
# 62 "drd_pthread_intercepts.c" 2
# 132 "drd_pthread_intercepts.c"
typedef struct
{
   void* (*start)(void*);
   void* arg;
   int detachstate;
   int wrapper_started;
} DrdPosixThreadArgs;




static void vgDrd_init(void) __attribute__((constructor));
static void vgDrd_check_threading_library(void);
static void vgDrd_set_main_thread_state(void);
# 160 "drd_pthread_intercepts.c"
static void vgDrd_init(void)
{
   vgDrd_check_threading_library();
   vgDrd_set_main_thread_state();
}
# 173 "drd_pthread_intercepts.c"
static MutexT vgDrd_pthread_to_drd_mutex_type(const int kind)
{
   if (kind == PTHREAD_MUTEX_RECURSIVE)
      return mutex_type_recursive_mutex;
   else if (kind == PTHREAD_MUTEX_ERRORCHECK)
      return mutex_type_errorcheck_mutex;
   else if (kind == PTHREAD_MUTEX_NORMAL)
      return mutex_type_default_mutex;
   else if (kind == PTHREAD_MUTEX_DEFAULT)
      return mutex_type_default_mutex;

   else if (kind == PTHREAD_MUTEX_ADAPTIVE_NP)
      return mutex_type_default_mutex;

   else
   {
      return mutex_type_invalid_mutex;
   }
}
# 208 "drd_pthread_intercepts.c"
static __inline__ __attribute__((always_inline)) MutexT vgDrd_mutex_type(pthread_mutex_t* mutex)
{
# 219 "drd_pthread_intercepts.c"
   if ((((uintptr_t)(&mutex->__data.__kind) & (sizeof(*(&mutex->__data.__kind)) - 1)) == 0))
   {
      const int kind = mutex->__data.__kind & 3;
      return vgDrd_pthread_to_drd_mutex_type(kind);
   }






   return mutex_type_unknown;
}




static void vgDrd_set_joinable(const pthread_t tid, const int joinable)
{
   int res;
   ((joinable == 0 || joinable == 1) ? (void) (0) : __assert_fail ("joinable == 0 || joinable == 1", "drd_pthread_intercepts.c", 239, __PRETTY_FUNCTION__));
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__SET_JOINABLE); _zzq_args[1] = (unsigned int)(tid); _zzq_args[2] = (unsigned int)(joinable); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); res = _zzq_result; }
                                                     ;
}


static __inline__ __attribute__((always_inline)) void vgDrd_entering_pthread_create(void)
{
   int res;
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__ENTERING_PTHREAD_CREATE); _zzq_args[1] = (unsigned int)(0); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); res = _zzq_result; }
                                            ;
}


static __inline__ __attribute__((always_inline)) void vgDrd_left_pthread_create(void)
{
   int res;
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__LEFT_PTHREAD_CREATE); _zzq_args[1] = (unsigned int)(0); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); res = _zzq_result; }
                                            ;
}





static void* vgDrd_thread_wrapper(void* arg)
{
   int res;
   DrdPosixThreadArgs* arg_ptr;
   DrdPosixThreadArgs arg_copy;

   arg_ptr = (DrdPosixThreadArgs*)arg;
   arg_copy = *arg_ptr;

   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__SET_PTHREADID); _zzq_args[1] = (unsigned int)(pthread_self()); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                         ;

   vgDrd_set_joinable(pthread_self(),
                      arg_copy.detachstate == PTHREAD_CREATE_JOINABLE);






   arg_ptr->wrapper_started = 1;

   return (arg_copy.start)(arg_copy.arg);
}
# 296 "drd_pthread_intercepts.c"
static int vgDrd_detected_linuxthreads(void)
{



   char buffer[256];
   unsigned len;
   len = confstr(_CS_GNU_LIBPTHREAD_VERSION, buffer, sizeof(buffer));
   ((len <= sizeof(buffer)) ? (void) (0) : __assert_fail ("len <= sizeof(buffer)", "drd_pthread_intercepts.c", 304, __PRETTY_FUNCTION__));
   return len > 0 && buffer[0] == 'l';
# 314 "drd_pthread_intercepts.c"
}





static void vgDrd_check_threading_library(void)
{
   if (vgDrd_detected_linuxthreads())
   {
      if (getenv("LD_ASSUME_KERNEL"))
      {
         fprintf(stderr,
"Detected the LinuxThreads threading library. Sorry, but DRD only supports\n"
"the newer NPTL (Native POSIX Threads Library). Please try to rerun DRD\n"
"after having unset the environment variable LD_ASSUME_KERNEL. Giving up.\n"
);
      }
      else
      {
         fprintf(stderr,
"Detected the LinuxThreads threading library. Sorry, but DRD only supports\n"
"the newer NPTL (Native POSIX Threads Library). Please try to rerun DRD\n"
"after having upgraded to a newer version of your Linux distribution.\n"
"Giving up.\n"
);
      }
      abort();
   }
}





static void vgDrd_set_main_thread_state(void)
{
   int res;


   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__SET_PTHREADID); _zzq_args[1] = (unsigned int)(pthread_self()); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                         ;
}
# 376 "drd_pthread_intercepts.c"
static __inline__ __attribute__((always_inline))
int pthread_create_intercept(pthread_t* thread, const pthread_attr_t* attr,
                             void* (*start)(void*), void* arg)
{
   int res;
   int ret;
   OrigFn fn;



   DrdPosixThreadArgs* thread_args_p;

   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };




   thread_args_p = malloc(sizeof(*thread_args_p));

   ((thread_args_p) ? (void) (0) : __assert_fail ("thread_args_p", "drd_pthread_intercepts.c", 395, __PRETTY_FUNCTION__));

   thread_args_p->start = start;
   thread_args_p->arg = arg;
   (__extension__({unsigned int _zzq_rlval; { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__DRD_START_SUPPRESSION); _zzq_args[1] = (unsigned int)(&(thread_args_p->wrapper_started)); _zzq_args[2] = (unsigned int)(sizeof(thread_args_p->wrapper_started)); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); _zzq_rlval = _zzq_result; } _zzq_rlval; }));
   thread_args_p->wrapper_started = 0;





   thread_args_p->detachstate = PTHREAD_CREATE_JOINABLE;
   if (attr)
   {
      if (pthread_attr_getdetachstate(attr, &thread_args_p->detachstate) != 0)
      {
         ((0) ? (void) (0) : __assert_fail ("0", "drd_pthread_intercepts.c", 411, __PRETTY_FUNCTION__));
      }
   }
   ((thread_args_p->detachstate == PTHREAD_CREATE_JOINABLE || thread_args_p->detachstate == PTHREAD_CREATE_DETACHED) ? (void) (0) : __assert_fail ("thread_args_p->detachstate == PTHREAD_CREATE_JOINABLE || thread_args_p->detachstate == PTHREAD_CREATE_DETACHED",
 "drd_pthread_intercepts.c"
# 414 "drd_pthread_intercepts.c"
   ,
 415
# 414 "drd_pthread_intercepts.c"
   , __PRETTY_FUNCTION__))
                                                                   ;


   vgDrd_entering_pthread_create();
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[5]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(thread); _argvec[2] = (unsigned long)(attr); _argvec[3] = (unsigned long)(vgDrd_thread_wrapper); _argvec[4] = (unsigned long)(thread_args_p); __asm__ volatile( "pushl 16(%%eax)\n\t" "pushl 12(%%eax)\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   vgDrd_left_pthread_create();

   if (ret == 0)
   {

      while (! thread_args_p->wrapper_started)
         sched_yield();
   }

   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__DRD_START_NEW_SEGMENT); _zzq_args[1] = (unsigned int)(pthread_self()); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                         ;

   return ret;
}

int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucreate
# 435 "drd_pthread_intercepts.c"
 (pthread_t *thread, const pthread_attr_t *attr, void *(*start) (void *), void *arg); int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucreate
# 435 "drd_pthread_intercepts.c"
 (pthread_t *thread, const pthread_attr_t *attr, void *(*start) (void *), void *arg) { return pthread_create_intercept (thread, attr, start, arg); }; int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucreateZAZa
# 435 "drd_pthread_intercepts.c"
 (pthread_t *thread, const pthread_attr_t *attr, void *(*start) (void *), void *arg); int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucreateZAZa
# 435 "drd_pthread_intercepts.c"
 (pthread_t *thread, const pthread_attr_t *attr, void *(*start) (void *), void *arg) { return pthread_create_intercept (thread, attr, start, arg); }; int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucreateZDZa
# 435 "drd_pthread_intercepts.c"
 (pthread_t *thread, const pthread_attr_t *attr, void *(*start) (void *), void *arg); int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucreateZDZa
# 435 "drd_pthread_intercepts.c"
 (pthread_t *thread, const pthread_attr_t *attr, void *(*start) (void *), void *arg) { return pthread_create_intercept (thread, attr, start, arg); };


                                     ;

static __inline__ __attribute__((always_inline))
int pthread_join_intercept(pthread_t pt_joinee, void **thread_return)
{
   int ret;
   int res;
   OrigFn fn;

   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[3]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(pt_joinee); _argvec[2] = (unsigned long)(thread_return); __asm__ volatile( "subl $8, %%esp\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   if (ret == 0)
   {
      { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_THREAD_JOIN); _zzq_args[1] = (unsigned int)(pt_joinee); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                       ;
   }
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZujoin
# 457 "drd_pthread_intercepts.c"
 (pthread_t pt_joinee, void **thread_return); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZujoin
# 457 "drd_pthread_intercepts.c"
 (pthread_t pt_joinee, void **thread_return) { return pthread_join_intercept (pt_joinee, thread_return); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZujoinZAZa
# 457 "drd_pthread_intercepts.c"
 (pthread_t pt_joinee, void **thread_return); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZujoinZAZa
# 457 "drd_pthread_intercepts.c"
 (pthread_t pt_joinee, void **thread_return) { return pthread_join_intercept (pt_joinee, thread_return); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZujoinZDZa
# 457 "drd_pthread_intercepts.c"
 (pthread_t pt_joinee, void **thread_return); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZujoinZDZa
# 457 "drd_pthread_intercepts.c"
 (pthread_t pt_joinee, void **thread_return) { return pthread_join_intercept (pt_joinee, thread_return); };

                                     ;

static __inline__ __attribute__((always_inline))
int pthread_detach_intercept(pthread_t pt_thread)
{
   int ret;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   {
      do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(pt_thread); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
      if (ret == 0)
      {
         vgDrd_set_joinable(pt_thread, 0);
      }
   }
   return ret;
}

int
 _vgwZZ_libpthreadZdsoZd0_pthreadZudetach
# 477 "drd_pthread_intercepts.c"
 (pthread_t thread); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZudetach
# 477 "drd_pthread_intercepts.c"
 (pthread_t thread) { return pthread_detach_intercept (thread); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZudetachZAZa
# 477 "drd_pthread_intercepts.c"
 (pthread_t thread); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZudetachZAZa
# 477 "drd_pthread_intercepts.c"
 (pthread_t thread) { return pthread_detach_intercept (thread); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZudetachZDZa
# 477 "drd_pthread_intercepts.c"
 (pthread_t thread); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZudetachZDZa
# 477 "drd_pthread_intercepts.c"
 (pthread_t thread) { return pthread_detach_intercept (thread); };
                                       ;




static __inline__ __attribute__((always_inline))
int pthread_cancel_intercept(pthread_t pt_thread)
{
   int res;
   int ret;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_THREAD_CANCEL); _zzq_args[1] = (unsigned int)(pt_thread); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                    ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(pt_thread); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_THREAD_CANCEL); _zzq_args[1] = (unsigned int)(pt_thread); _zzq_args[2] = (unsigned int)(ret==0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                         ;
   return ret;
}

int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucancel
# 498 "drd_pthread_intercepts.c"
 (pthread_t thread); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucancel
# 498 "drd_pthread_intercepts.c"
 (pthread_t thread) { return pthread_cancel_intercept (thread); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucancelZAZa
# 498 "drd_pthread_intercepts.c"
 (pthread_t thread); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucancelZAZa
# 498 "drd_pthread_intercepts.c"
 (pthread_t thread) { return pthread_cancel_intercept (thread); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucancelZDZa
# 498 "drd_pthread_intercepts.c"
 (pthread_t thread); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucancelZDZa
# 498 "drd_pthread_intercepts.c"
 (pthread_t thread) { return pthread_cancel_intercept (thread); };


static __inline__ __attribute__((always_inline))
int pthread_once_intercept(pthread_once_t *once_control,
                           void (*init_routine)(void))
{
   int ret;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };





   (__extension__({unsigned int _zzq_rlval; { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__DRD_START_SUPPRESSION); _zzq_args[1] = (unsigned int)(&(*once_control)); _zzq_args[2] = (unsigned int)(sizeof(*once_control)); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); _zzq_rlval = _zzq_result; } _zzq_rlval; }));
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[3]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(once_control); _argvec[2] = (unsigned long)(init_routine); __asm__ volatile( "subl $8, %%esp\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   (__extension__({unsigned int _zzq_rlval; { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__DRD_FINISH_SUPPRESSION); _zzq_args[1] = (unsigned int)(&(*once_control)); _zzq_args[2] = (unsigned int)(sizeof(*once_control)); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); _zzq_rlval = _zzq_result; } _zzq_rlval; }));
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZuonce
# 519 "drd_pthread_intercepts.c"
 (pthread_once_t *once_control, void (*init_routine)(void)); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZuonce
# 519 "drd_pthread_intercepts.c"
 (pthread_once_t *once_control, void (*init_routine)(void)) { return pthread_once_intercept (once_control, init_routine); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZuonceZAZa
# 519 "drd_pthread_intercepts.c"
 (pthread_once_t *once_control, void (*init_routine)(void)); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZuonceZAZa
# 519 "drd_pthread_intercepts.c"
 (pthread_once_t *once_control, void (*init_routine)(void)) { return pthread_once_intercept (once_control, init_routine); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZuonceZDZa
# 519 "drd_pthread_intercepts.c"
 (pthread_once_t *once_control, void (*init_routine)(void)); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZuonceZDZa
# 519 "drd_pthread_intercepts.c"
 (pthread_once_t *once_control, void (*init_routine)(void)) { return pthread_once_intercept (once_control, init_routine); };

                                       ;

static __inline__ __attribute__((always_inline))
int pthread_mutex_init_intercept(pthread_mutex_t *mutex,
                                 const pthread_mutexattr_t* attr)
{
   int ret;
   int res;
   OrigFn fn;
   int mt;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   mt = PTHREAD_MUTEX_DEFAULT;
   if (attr)
      pthread_mutexattr_gettype(attr, &mt);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_MUTEX_INIT); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(vgDrd_pthread_to_drd_mutex_type(mt)); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }

                                      ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[3]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(mutex); _argvec[2] = (unsigned long)(attr); __asm__ volatile( "subl $8, %%esp\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_MUTEX_INIT); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuinit
# 544 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const pthread_mutexattr_t* attr); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuinit
# 544 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const pthread_mutexattr_t* attr) { return pthread_mutex_init_intercept (mutex, attr); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuinitZAZa
# 544 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const pthread_mutexattr_t* attr); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuinitZAZa
# 544 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const pthread_mutexattr_t* attr) { return pthread_mutex_init_intercept (mutex, attr); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuinitZDZa
# 544 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const pthread_mutexattr_t* attr); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuinitZDZa
# 544 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const pthread_mutexattr_t* attr) { return pthread_mutex_init_intercept (mutex, attr); };

                        ;

static __inline__ __attribute__((always_inline))
int pthread_mutex_destroy_intercept(pthread_mutex_t* mutex)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_MUTEX_DESTROY); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(mutex); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_MUTEX_DESTROY); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(vgDrd_mutex_type(mutex)); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                                      ;
   return ret;
}

int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZudestroy
# 563 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZudestroy
# 563 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_destroy_intercept (mutex); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZudestroyZAZa
# 563 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZudestroyZAZa
# 563 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_destroy_intercept (mutex); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZudestroyZDZa
# 563 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZudestroyZDZa
# 563 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_destroy_intercept (mutex); };
                                            ;

static __inline__ __attribute__((always_inline))
int pthread_mutex_lock_intercept(pthread_mutex_t* mutex)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_MUTEX_LOCK); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(vgDrd_mutex_type(mutex)); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); res = _zzq_result; }
                                                                      ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(mutex); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_MUTEX_LOCK); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); res = _zzq_result; }
                                                       ;
   return ret;
}

int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZulock
# 581 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZulock
# 581 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_lock_intercept (mutex); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZulockZAZa
# 581 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZulockZAZa
# 581 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_lock_intercept (mutex); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZulockZDZa
# 581 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZulockZDZa
# 581 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_lock_intercept (mutex); };
                                            ;

static __inline__ __attribute__((always_inline))
int pthread_mutex_trylock_intercept(pthread_mutex_t* mutex)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_MUTEX_LOCK); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(vgDrd_mutex_type(mutex)); _zzq_args[3] = (unsigned int)(1); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); res = _zzq_result; }
                                                                      ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(mutex); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_MUTEX_LOCK); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                       ;
   return ret;
}

int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutrylock
# 599 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutrylock
# 599 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_trylock_intercept (mutex); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutrylockZAZa
# 599 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutrylockZAZa
# 599 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_trylock_intercept (mutex); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutrylockZDZa
# 599 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutrylockZDZa
# 599 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_trylock_intercept (mutex); };
                                            ;

static __inline__ __attribute__((always_inline))
int pthread_mutex_timedlock_intercept(pthread_mutex_t *mutex,
                                      const struct timespec *abs_timeout)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_MUTEX_LOCK); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(vgDrd_mutex_type(mutex)); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (0) : "cc", "memory" ); res = _zzq_result; }
                                                                      ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[3]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(mutex); _argvec[2] = (unsigned long)(abs_timeout); __asm__ volatile( "subl $8, %%esp\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_MUTEX_LOCK); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                       ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutimedlock
# 618 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const struct timespec *abs_timeout); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutimedlock
# 618 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const struct timespec *abs_timeout) { return pthread_mutex_timedlock_intercept (mutex, abs_timeout); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutimedlockZAZa
# 618 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const struct timespec *abs_timeout); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutimedlockZAZa
# 618 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const struct timespec *abs_timeout) { return pthread_mutex_timedlock_intercept (mutex, abs_timeout); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutimedlockZDZa
# 618 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const struct timespec *abs_timeout); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZutimedlockZDZa
# 618 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex, const struct timespec *abs_timeout) { return pthread_mutex_timedlock_intercept (mutex, abs_timeout); };

                               ;

static __inline__ __attribute__((always_inline))
int pthread_mutex_unlock_intercept(pthread_mutex_t *mutex)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_MUTEX_UNLOCK); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(vgDrd_mutex_type(mutex)); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }

                                                                      ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(mutex); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_MUTEX_UNLOCK); _zzq_args[1] = (unsigned int)(mutex); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }

                                                ;
   return ret;
}

int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuunlock
# 639 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuunlock
# 639 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_unlock_intercept (mutex); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuunlockZAZa
# 639 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuunlockZAZa
# 639 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_unlock_intercept (mutex); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuunlockZDZa
# 639 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZumutexZuunlockZDZa
# 639 "drd_pthread_intercepts.c"
 (pthread_mutex_t *mutex) { return pthread_mutex_unlock_intercept (mutex); };
                                            ;

static __inline__ __attribute__((always_inline))
int pthread_cond_init_intercept(pthread_cond_t* cond,
                                const pthread_condattr_t* attr)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_COND_INIT); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                               ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[3]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(cond); _argvec[2] = (unsigned long)(attr); __asm__ volatile( "subl $8, %%esp\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_COND_INIT); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                               ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuinit
# 658 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond, const pthread_condattr_t* attr); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuinit
# 658 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond, const pthread_condattr_t* attr) { return pthread_cond_init_intercept (cond, attr); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuinitZAZa
# 658 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond, const pthread_condattr_t* attr); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuinitZAZa
# 658 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond, const pthread_condattr_t* attr) { return pthread_cond_init_intercept (cond, attr); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuinitZDZa
# 658 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond, const pthread_condattr_t* attr); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuinitZDZa
# 658 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond, const pthread_condattr_t* attr) { return pthread_cond_init_intercept (cond, attr); };

                       ;

static __inline__ __attribute__((always_inline))
int pthread_cond_destroy_intercept(pthread_cond_t* cond)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_COND_DESTROY); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                               ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(cond); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_COND_DESTROY); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                               ;
   return ret;
}

int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZudestroy
# 677 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZudestroy
# 677 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond) { return pthread_cond_destroy_intercept (cond); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZudestroyZAZa
# 677 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZudestroyZAZa
# 677 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond) { return pthread_cond_destroy_intercept (cond); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZudestroyZDZa
# 677 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZudestroyZDZa
# 677 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond) { return pthread_cond_destroy_intercept (cond); };
                                         ;

static __inline__ __attribute__((always_inline))
int pthread_cond_wait_intercept(pthread_cond_t *cond, pthread_mutex_t *mutex)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_COND_WAIT); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(mutex); _zzq_args[3] = (unsigned int)(vgDrd_mutex_type(mutex)); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                                         ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[3]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(cond); _argvec[2] = (unsigned long)(mutex); __asm__ volatile( "subl $8, %%esp\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_COND_WAIT); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(mutex); _zzq_args[3] = (unsigned int)(1); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                   ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuwait
# 695 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuwait
# 695 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex) { return pthread_cond_wait_intercept (cond, mutex); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuwaitZAZa
# 695 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuwaitZAZa
# 695 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex) { return pthread_cond_wait_intercept (cond, mutex); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuwaitZDZa
# 695 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZuwaitZDZa
# 695 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex) { return pthread_cond_wait_intercept (cond, mutex); };

                        ;

static __inline__ __attribute__((always_inline))
int pthread_cond_timedwait_intercept(pthread_cond_t *cond,
                                     pthread_mutex_t *mutex,
                                     const struct timespec* abstime)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_COND_WAIT); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(mutex); _zzq_args[3] = (unsigned int)(vgDrd_mutex_type(mutex)); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                                         ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[4]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(cond); _argvec[2] = (unsigned long)(mutex); _argvec[3] = (unsigned long)(abstime); __asm__ volatile( "subl $4, %%esp\n\t" "pushl 12(%%eax)\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_COND_WAIT); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(mutex); _zzq_args[3] = (unsigned int)(1); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                   ;
   return ret;
}

int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZutimedwait
# 716 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec* abstime); int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZutimedwait
# 716 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec* abstime) { return pthread_cond_timedwait_intercept (cond, mutex, abstime); }; int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZutimedwaitZAZa
# 716 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec* abstime); int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZutimedwaitZAZa
# 716 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec* abstime) { return pthread_cond_timedwait_intercept (cond, mutex, abstime); }; int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZutimedwaitZDZa
# 716 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec* abstime); int


 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZutimedwaitZDZa
# 716 "drd_pthread_intercepts.c"
 (pthread_cond_t *cond, pthread_mutex_t *mutex, const struct timespec* abstime) { return pthread_cond_timedwait_intercept (cond, mutex, abstime); };


                                 ;







static __inline__ __attribute__((always_inline))
int pthread_cond_signal_intercept(pthread_cond_t* cond)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_COND_SIGNAL); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                               ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(cond); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_COND_SIGNAL); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                               ;
   return ret;
}

int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZusignal
# 742 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZusignal
# 742 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond) { return pthread_cond_signal_intercept (cond); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZusignalZAZa
# 742 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZusignalZAZa
# 742 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond) { return pthread_cond_signal_intercept (cond); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZusignalZDZa
# 742 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZusignalZDZa
# 742 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond) { return pthread_cond_signal_intercept (cond); };
                                         ;

static __inline__ __attribute__((always_inline))
int pthread_cond_broadcast_intercept(pthread_cond_t* cond)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_COND_BROADCAST); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                               ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(cond); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_COND_BROADCAST); _zzq_args[1] = (unsigned int)(cond); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                               ;
   return ret;
}

int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZubroadcast
# 760 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZubroadcast
# 760 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond) { return pthread_cond_broadcast_intercept (cond); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZubroadcastZAZa
# 760 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZubroadcastZAZa
# 760 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond) { return pthread_cond_broadcast_intercept (cond); }; int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZubroadcastZDZa
# 760 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond); int
 _vgwZZ_libpthreadZdsoZd0_pthreadZucondZubroadcastZDZa
# 760 "drd_pthread_intercepts.c"
 (pthread_cond_t* cond) { return pthread_cond_broadcast_intercept (cond); };
                                         ;
# 918 "drd_pthread_intercepts.c"
static __inline__ __attribute__((always_inline))
int sem_init_intercept(sem_t *sem, int pshared, unsigned int value)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_SEM_INIT); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(pshared); _zzq_args[3] = (unsigned int)(value); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                        ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[4]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(sem); _argvec[2] = (unsigned long)(pshared); _argvec[3] = (unsigned long)(value); __asm__ volatile( "subl $4, %%esp\n\t" "pushl 12(%%eax)\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_SEM_INIT); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                              ;
   return ret;
}

int
 _vgwZZ_libpthreadZdsoZd0_semZuinit
# 933 "drd_pthread_intercepts.c"
 (sem_t *sem, int pshared, unsigned int value); int
 _vgwZZ_libpthreadZdsoZd0_semZuinit
# 933 "drd_pthread_intercepts.c"
 (sem_t *sem, int pshared, unsigned int value) { return sem_init_intercept (sem, pshared, value); }; int
 _vgwZZ_libpthreadZdsoZd0_semZuinitZAZa
# 933 "drd_pthread_intercepts.c"
 (sem_t *sem, int pshared, unsigned int value); int
 _vgwZZ_libpthreadZdsoZd0_semZuinitZAZa
# 933 "drd_pthread_intercepts.c"
 (sem_t *sem, int pshared, unsigned int value) { return sem_init_intercept (sem, pshared, value); }; int
 _vgwZZ_libpthreadZdsoZd0_semZuinitZDZa
# 933 "drd_pthread_intercepts.c"
 (sem_t *sem, int pshared, unsigned int value); int
 _vgwZZ_libpthreadZdsoZd0_semZuinitZDZa
# 933 "drd_pthread_intercepts.c"
 (sem_t *sem, int pshared, unsigned int value) { return sem_init_intercept (sem, pshared, value); };
                                                                               ;

static __inline__ __attribute__((always_inline))
int sem_destroy_intercept(sem_t *sem)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_SEM_DESTROY); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                              ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(sem); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_SEM_DESTROY); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                              ;
   return ret;
}

int _vgwZZ_libpthreadZdsoZd0_semZudestroy (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZudestroy (sem_t *sem) { return sem_destroy_intercept (sem); }; int _vgwZZ_libpthreadZdsoZd0_semZudestroyZAZa (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZudestroyZAZa (sem_t *sem) { return sem_destroy_intercept (sem); }; int _vgwZZ_libpthreadZdsoZd0_semZudestroyZDZa (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZudestroyZDZa (sem_t *sem) { return sem_destroy_intercept (sem); };;

static __inline__ __attribute__((always_inline))
sem_t* sem_open_intercept(const char *name, int oflag, mode_t mode,
                          unsigned int value)
{
   sem_t *ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_SEM_OPEN); _zzq_args[1] = (unsigned int)(name); _zzq_args[2] = (unsigned int)(oflag); _zzq_args[3] = (unsigned int)(mode); _zzq_args[4] = (unsigned int)(value); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                          ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[5]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(name); _argvec[2] = (unsigned long)(oflag); _argvec[3] = (unsigned long)(mode); _argvec[4] = (unsigned long)(value); __asm__ volatile( "pushl 16(%%eax)\n\t" "pushl 12(%%eax)\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_SEM_OPEN); _zzq_args[1] = (unsigned int)(ret != ((sem_t *) 0) ? ret : 0); _zzq_args[2] = (unsigned int)(name); _zzq_args[3] = (unsigned int)(oflag); _zzq_args[4] = (unsigned int)(mode); _zzq_args[5] = (unsigned int)(value); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }

                                                       ;
   return ret;
}

sem_t *

 _vgwZZ_libpthreadZdsoZd0_semZuopen
# 970 "drd_pthread_intercepts.c"
 (const char *name, int oflag, mode_t mode, unsigned int value); sem_t *

 _vgwZZ_libpthreadZdsoZd0_semZuopen
# 970 "drd_pthread_intercepts.c"
 (const char *name, int oflag, mode_t mode, unsigned int value) { return sem_open_intercept (name, oflag, mode, value); }; sem_t *

 _vgwZZ_libpthreadZdsoZd0_semZuopenZAZa
# 970 "drd_pthread_intercepts.c"
 (const char *name, int oflag, mode_t mode, unsigned int value); sem_t *

 _vgwZZ_libpthreadZdsoZd0_semZuopenZAZa
# 970 "drd_pthread_intercepts.c"
 (const char *name, int oflag, mode_t mode, unsigned int value) { return sem_open_intercept (name, oflag, mode, value); }; sem_t *

 _vgwZZ_libpthreadZdsoZd0_semZuopenZDZa
# 970 "drd_pthread_intercepts.c"
 (const char *name, int oflag, mode_t mode, unsigned int value); sem_t *

 _vgwZZ_libpthreadZdsoZd0_semZuopenZDZa
# 970 "drd_pthread_intercepts.c"
 (const char *name, int oflag, mode_t mode, unsigned int value) { return sem_open_intercept (name, oflag, mode, value); };

                                     ;

static __inline__ __attribute__((always_inline)) int sem_close_intercept(sem_t *sem)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_SEM_CLOSE); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                              ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(sem); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_SEM_CLOSE); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                              ;
   return ret;
}

int _vgwZZ_libpthreadZdsoZd0_semZuclose (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZuclose (sem_t *sem) { return sem_close_intercept (sem); }; int _vgwZZ_libpthreadZdsoZd0_semZucloseZAZa (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZucloseZAZa (sem_t *sem) { return sem_close_intercept (sem); }; int _vgwZZ_libpthreadZdsoZd0_semZucloseZDZa (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZucloseZDZa (sem_t *sem) { return sem_close_intercept (sem); };;

static __inline__ __attribute__((always_inline)) int sem_wait_intercept(sem_t *sem)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_SEM_WAIT); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                              ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(sem); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_SEM_WAIT); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                     ;
   return ret;
}

int _vgwZZ_libpthreadZdsoZd0_semZuwait (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZuwait (sem_t *sem) { return sem_wait_intercept (sem); }; int _vgwZZ_libpthreadZdsoZd0_semZuwaitZAZa (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZuwaitZAZa (sem_t *sem) { return sem_wait_intercept (sem); }; int _vgwZZ_libpthreadZdsoZd0_semZuwaitZDZa (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZuwaitZDZa (sem_t *sem) { return sem_wait_intercept (sem); };;

static __inline__ __attribute__((always_inline)) int sem_trywait_intercept(sem_t *sem)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_SEM_WAIT); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                              ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(sem); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_SEM_WAIT); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                     ;
   return ret;
}

int _vgwZZ_libpthreadZdsoZd0_semZutrywait (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZutrywait (sem_t *sem) { return sem_trywait_intercept (sem); }; int _vgwZZ_libpthreadZdsoZd0_semZutrywaitZAZa (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZutrywaitZAZa (sem_t *sem) { return sem_trywait_intercept (sem); }; int _vgwZZ_libpthreadZdsoZd0_semZutrywaitZDZa (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZutrywaitZDZa (sem_t *sem) { return sem_trywait_intercept (sem); };;

static __inline__ __attribute__((always_inline))
int sem_timedwait_intercept(sem_t *sem, const struct timespec *abs_timeout)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_SEM_WAIT); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                              ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[3]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(sem); _argvec[2] = (unsigned long)(abs_timeout); __asm__ volatile( "subl $8, %%esp\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_SEM_WAIT); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                     ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_semZutimedwait
# 1037 "drd_pthread_intercepts.c"
 (sem_t *sem, const struct timespec *abs_timeout); int

 _vgwZZ_libpthreadZdsoZd0_semZutimedwait
# 1037 "drd_pthread_intercepts.c"
 (sem_t *sem, const struct timespec *abs_timeout) { return sem_timedwait_intercept (sem, abs_timeout); }; int

 _vgwZZ_libpthreadZdsoZd0_semZutimedwaitZAZa
# 1037 "drd_pthread_intercepts.c"
 (sem_t *sem, const struct timespec *abs_timeout); int

 _vgwZZ_libpthreadZdsoZd0_semZutimedwaitZAZa
# 1037 "drd_pthread_intercepts.c"
 (sem_t *sem, const struct timespec *abs_timeout) { return sem_timedwait_intercept (sem, abs_timeout); }; int

 _vgwZZ_libpthreadZdsoZd0_semZutimedwaitZDZa
# 1037 "drd_pthread_intercepts.c"
 (sem_t *sem, const struct timespec *abs_timeout); int

 _vgwZZ_libpthreadZdsoZd0_semZutimedwaitZDZa
# 1037 "drd_pthread_intercepts.c"
 (sem_t *sem, const struct timespec *abs_timeout) { return sem_timedwait_intercept (sem, abs_timeout); };

                             ;

static __inline__ __attribute__((always_inline)) int sem_post_intercept(sem_t *sem)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_SEM_POST); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                              ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(sem); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_SEM_POST); _zzq_args[1] = (unsigned int)(sem); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                     ;
   return ret;
}

int _vgwZZ_libpthreadZdsoZd0_semZupost (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZupost (sem_t *sem) { return sem_post_intercept (sem); }; int _vgwZZ_libpthreadZdsoZd0_semZupostZAZa (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZupostZAZa (sem_t *sem) { return sem_post_intercept (sem); }; int _vgwZZ_libpthreadZdsoZd0_semZupostZDZa (sem_t *sem); int _vgwZZ_libpthreadZdsoZd0_semZupostZDZa (sem_t *sem) { return sem_post_intercept (sem); };;

static __inline__ __attribute__((always_inline))
int pthread_rwlock_init_intercept(pthread_rwlock_t* rwlock,
                                  const pthread_rwlockattr_t* attr)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_RWLOCK_INIT); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                 ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[3]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(rwlock); _argvec[2] = (unsigned long)(attr); __asm__ volatile( "subl $8, %%esp\n\t" "pushl 8(%%eax)\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   return ret;
}

int


 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuinit
# 1071 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock, const pthread_rwlockattr_t* attr); int


 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuinit
# 1071 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock, const pthread_rwlockattr_t* attr) { return pthread_rwlock_init_intercept (rwlock, attr); }; int


 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuinitZAZa
# 1071 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock, const pthread_rwlockattr_t* attr); int


 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuinitZAZa
# 1071 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock, const pthread_rwlockattr_t* attr) { return pthread_rwlock_init_intercept (rwlock, attr); }; int


 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuinitZDZa
# 1071 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock, const pthread_rwlockattr_t* attr); int


 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuinitZDZa
# 1071 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock, const pthread_rwlockattr_t* attr) { return pthread_rwlock_init_intercept (rwlock, attr); };


                         ;

static __inline__ __attribute__((always_inline))
int pthread_rwlock_destroy_intercept(pthread_rwlock_t* rwlock)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(rwlock); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_RWLOCK_DESTROY); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                 ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZudestroy
# 1089 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZudestroy
# 1089 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_destroy_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZudestroyZAZa
# 1089 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZudestroyZAZa
# 1089 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_destroy_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZudestroyZDZa
# 1089 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZudestroyZDZa
# 1089 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_destroy_intercept (rwlock); };

                                               ;

static __inline__ __attribute__((always_inline))
int pthread_rwlock_rdlock_intercept(pthread_rwlock_t* rwlock)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_RWLOCK_RDLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                 ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(rwlock); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_RWLOCK_RDLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                        ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZurdlock
# 1108 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZurdlock
# 1108 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_rdlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZurdlockZAZa
# 1108 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZurdlockZAZa
# 1108 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_rdlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZurdlockZDZa
# 1108 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZurdlockZDZa
# 1108 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_rdlock_intercept (rwlock); };

                                               ;

static __inline__ __attribute__((always_inline))
int pthread_rwlock_wrlock_intercept(pthread_rwlock_t* rwlock)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_RWLOCK_WRLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                 ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(rwlock); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_RWLOCK_WRLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                        ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuwrlock
# 1127 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuwrlock
# 1127 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_wrlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuwrlockZAZa
# 1127 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuwrlockZAZa
# 1127 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_wrlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuwrlockZDZa
# 1127 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuwrlockZDZa
# 1127 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_wrlock_intercept (rwlock); };

                                               ;

static __inline__ __attribute__((always_inline))
int pthread_rwlock_timedrdlock_intercept(pthread_rwlock_t* rwlock)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_RWLOCK_RDLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                 ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(rwlock); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_RWLOCK_RDLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                        ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedrdlock
# 1146 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedrdlock
# 1146 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_timedrdlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedrdlockZAZa
# 1146 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedrdlockZAZa
# 1146 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_timedrdlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedrdlockZDZa
# 1146 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedrdlockZDZa
# 1146 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_timedrdlock_intercept (rwlock); };

                                               ;

static __inline__ __attribute__((always_inline))
int pthread_rwlock_timedwrlock_intercept(pthread_rwlock_t* rwlock)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_RWLOCK_WRLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                 ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(rwlock); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_RWLOCK_WRLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                        ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedwrlock
# 1165 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedwrlock
# 1165 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_timedwrlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedwrlockZAZa
# 1165 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedwrlockZAZa
# 1165 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_timedwrlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedwrlockZDZa
# 1165 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutimedwrlockZDZa
# 1165 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_timedwrlock_intercept (rwlock); };

                                               ;

static __inline__ __attribute__((always_inline))
int pthread_rwlock_tryrdlock_intercept(pthread_rwlock_t* rwlock)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_RWLOCK_RDLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                 ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(rwlock); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_RWLOCK_RDLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                        ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutryrdlock
# 1184 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutryrdlock
# 1184 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_tryrdlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutryrdlockZAZa
# 1184 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutryrdlockZAZa
# 1184 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_tryrdlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutryrdlockZDZa
# 1184 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutryrdlockZDZa
# 1184 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_tryrdlock_intercept (rwlock); };

                                               ;

static __inline__ __attribute__((always_inline))
int pthread_rwlock_trywrlock_intercept(pthread_rwlock_t* rwlock)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_RWLOCK_WRLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                 ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(rwlock); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_RWLOCK_WRLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                        ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutrywrlock
# 1203 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutrywrlock
# 1203 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_trywrlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutrywrlockZAZa
# 1203 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutrywrlockZAZa
# 1203 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_trywrlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutrywrlockZDZa
# 1203 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZutrywrlockZDZa
# 1203 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_trywrlock_intercept (rwlock); };

                                               ;

static __inline__ __attribute__((always_inline))
int pthread_rwlock_unlock_intercept(pthread_rwlock_t* rwlock)
{
   int ret;
   int res;
   OrigFn fn;
   { volatile OrigFn* _zzq_orig = &(fn); volatile unsigned int __addr; __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ecx,%%ecx" : "=a" (__addr) : : "cc", "memory" ); _zzq_orig->nraddr = __addr; };
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__PRE_RWLOCK_UNLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                 ;
   do { volatile OrigFn _orig = (fn); volatile unsigned long _argvec[2]; volatile unsigned long _res; _argvec[0] = (unsigned long)_orig.nraddr; _argvec[1] = (unsigned long)(rwlock); __asm__ volatile( "subl $12, %%esp\n\t" "pushl 4(%%eax)\n\t" "movl (%%eax), %%eax\n\t" "roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%edx,%%edx\n\t" "addl $16, %%esp\n" : "=a" (_res) : "a" (&_argvec[0]) : "cc", "memory", "ecx", "edx" ); ret = (__typeof__(ret)) _res; } while (0);
   { volatile unsigned int _zzq_args[6]; volatile unsigned int _zzq_result; _zzq_args[0] = (unsigned int)(VG_USERREQ__POST_RWLOCK_UNLOCK); _zzq_args[1] = (unsigned int)(rwlock); _zzq_args[2] = (unsigned int)(ret == 0); _zzq_args[3] = (unsigned int)(0); _zzq_args[4] = (unsigned int)(0); _zzq_args[5] = (unsigned int)(0); __asm__ volatile("roll $3,  %%edi ; roll $13, %%edi\n\t" "roll $29, %%edi ; roll $19, %%edi\n\t" "xchgl %%ebx,%%ebx" : "=d" (_zzq_result) : "a" (&_zzq_args[0]), "0" (-1) : "cc", "memory" ); res = _zzq_result; }
                                                        ;
   return ret;
}

int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuunlock
# 1222 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuunlock
# 1222 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_unlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuunlockZAZa
# 1222 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuunlockZAZa
# 1222 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_unlock_intercept (rwlock); }; int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuunlockZDZa
# 1222 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock); int

 _vgwZZ_libpthreadZdsoZd0_pthreadZurwlockZuunlockZDZa
# 1222 "drd_pthread_intercepts.c"
 (pthread_rwlock_t* rwlock) { return pthread_rwlock_unlock_intercept (rwlock); };

                                               ;
