struct _IO_FILE;
struct _IO_FILE *_coverage_fout  ;
typedef unsigned int size_t;
typedef long wchar_t;
struct __anonstruct___wait_terminated_1 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
struct __anonstruct___wait_stopped_2 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_1 __wait_terminated ;
   struct __anonstruct___wait_stopped_2 __wait_stopped ;
};
union __anonunion___WAIT_STATUS_3 {
   union wait *__uptr ;
   int *__iptr ;
};
typedef union __anonunion___WAIT_STATUS_3  __attribute__((__transparent_union__)) __WAIT_STATUS;
struct __anonstruct_div_t_4 {
   int quot ;
   int rem ;
};
typedef struct __anonstruct_div_t_4 div_t;
struct __anonstruct_ldiv_t_5 {
   long quot ;
   long rem ;
};
typedef struct __anonstruct_ldiv_t_5 ldiv_t;
struct __anonstruct_lldiv_t_6 {
   long long quot ;
   long long rem ;
};
typedef struct __anonstruct_lldiv_t_6 lldiv_t;
struct __locale_data;
struct __locale_struct {
   struct __locale_data *__locales[13] ;
   unsigned short const   *__ctype_b ;
   int const   *__ctype_tolower ;
   int const   *__ctype_toupper ;
   char const   *__names[13] ;
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;
typedef long long __quad_t;
typedef unsigned long long __u_quad_t;
typedef __u_quad_t __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef __u_quad_t __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned int __nlink_t;
typedef long __off_t;
typedef __quad_t __off64_t;
typedef int __pid_t;
struct __anonstruct___fsid_t_7 {
   int __val[2] ;
};
typedef struct __anonstruct___fsid_t_7 __fsid_t;
typedef long __clock_t;
typedef unsigned long __rlim_t;
typedef __u_quad_t __rlim64_t;
typedef unsigned int __id_t;
typedef long __time_t;
typedef unsigned int __useconds_t;
typedef long __suseconds_t;
typedef int __daddr_t;
typedef long __swblk_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void *__timer_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef __quad_t __blkcnt64_t;
typedef unsigned long __fsblkcnt_t;
typedef __u_quad_t __fsblkcnt64_t;
typedef unsigned long __fsfilcnt_t;
typedef __u_quad_t __fsfilcnt64_t;
typedef int __ssize_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef int __intptr_t;
typedef unsigned int __socklen_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino64_t ino_t;
typedef __ino64_t ino64_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off64_t off_t;
typedef __off64_t off64_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __time_t time_t;
typedef __clockid_t clockid_t;
typedef __timer_t timer_t;
typedef __useconds_t useconds_t;
typedef __suseconds_t suseconds_t;
typedef unsigned long ulong;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long u_int64_t;
typedef int register_t;
typedef int __sig_atomic_t;
struct __anonstruct___sigset_t_8 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
};
typedef struct __anonstruct___sigset_t_8 __sigset_t;
typedef __sigset_t sigset_t;
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
typedef long __fd_mask;
struct __anonstruct_fd_set_9 {
   __fd_mask fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))] ;
};
typedef struct __anonstruct_fd_set_9 fd_set;
typedef __fd_mask fd_mask;
typedef __blksize_t blksize_t;
typedef __blkcnt64_t blkcnt_t;
typedef __fsblkcnt64_t fsblkcnt_t;
typedef __fsfilcnt64_t fsfilcnt_t;
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
typedef unsigned long pthread_t;
union __anonunion_pthread_attr_t_10 {
   char __size[36] ;
   long __align ;
};
typedef union __anonunion_pthread_attr_t_10 pthread_attr_t;
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
typedef struct __pthread_internal_slist __pthread_slist_t;
union __anonunion____missing_field_name_12 {
   int __spins ;
   __pthread_slist_t __list ;
};
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_12 __annonCompField1 ;
};
union __anonunion_pthread_mutex_t_11 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
typedef union __anonunion_pthread_mutex_t_11 pthread_mutex_t;
union __anonunion_pthread_mutexattr_t_13 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_mutexattr_t_13 pthread_mutexattr_t;
struct __anonstruct___data_15 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
union __anonunion_pthread_cond_t_14 {
   struct __anonstruct___data_15 __data ;
   char __size[48] ;
   long long __align ;
};
typedef union __anonunion_pthread_cond_t_14 pthread_cond_t;
union __anonunion_pthread_condattr_t_16 {
   char __size[4] ;
   long __align ;
};
typedef union __anonunion_pthread_condattr_t_16 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
struct __anonstruct___data_18 {
   int __lock ;
   unsigned int __nr_readers ;
   unsigned int __readers_wakeup ;
   unsigned int __writer_wakeup ;
   unsigned int __nr_readers_queued ;
   unsigned int __nr_writers_queued ;
   unsigned char __flags ;
   unsigned char __shared ;
   unsigned char __pad1 ;
   unsigned char __pad2 ;
   int __writer ;
};
union __anonunion_pthread_rwlock_t_17 {
   struct __anonstruct___data_18 __data ;
   char __size[32] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlock_t_17 pthread_rwlock_t;
union __anonunion_pthread_rwlockattr_t_19 {
   char __size[8] ;
   long __align ;
};
typedef union __anonunion_pthread_rwlockattr_t_19 pthread_rwlockattr_t;
typedef int volatile   pthread_spinlock_t;
union __anonunion_pthread_barrier_t_20 {
   char __size[20] ;
   long __align ;
};
typedef union __anonunion_pthread_barrier_t_20 pthread_barrier_t;
union __anonunion_pthread_barrierattr_t_21 {
   char __size[4] ;
   int __align ;
};
typedef union __anonunion_pthread_barrierattr_t_21 pthread_barrierattr_t;
struct random_data {
   int32_t *fptr ;
   int32_t *rptr ;
   int32_t *state ;
   int rand_type ;
   int rand_deg ;
   int rand_sep ;
   int32_t *end_ptr ;
};
struct drand48_data {
   unsigned short __x[3] ;
   unsigned short __old_x[3] ;
   unsigned short __c ;
   unsigned short __init ;
   unsigned long long __a ;
};
typedef int (*__compar_fn_t)(void const   * , void const   * );
typedef int (*comparison_fn_t)(void const   * , void const   * );
typedef int (*__compar_d_fn_t)(void const   * , void const   * , void * );
typedef void *voidp;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anonunion___value_23 {
   unsigned int __wch ;
   char __wchb[4] ;
};
struct __anonstruct___mbstate_t_22 {
   int __count ;
   union __anonunion___value_23 __value ;
};
typedef struct __anonstruct___mbstate_t_22 __mbstate_t;
struct __anonstruct__G_fpos_t_24 {
   __off_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos_t_24 _G_fpos_t;
struct __anonstruct__G_fpos64_t_25 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
typedef struct __anonstruct__G_fpos64_t_25 _G_fpos64_t;
typedef short _G_int16_t;
typedef int _G_int32_t;
typedef unsigned short _G_uint16_t;
typedef unsigned int _G_uint32_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
enum __codecvt_result {
    __codecvt_ok = 0,
    __codecvt_partial = 1,
    __codecvt_error = 2,
    __codecvt_noconv = 3
} ;
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
typedef struct _IO_FILE _IO_FILE;
struct _IO_FILE_plus;
typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );
typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf ,
                                size_t __n );
typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );
typedef int __io_close_fn(void *__cookie );
typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;
struct __anonstruct__IO_cookie_io_functions_t_26 {
   __io_read_fn *read ;
   __io_write_fn *write ;
   __io_seek_fn *seek ;
   __io_close_fn *close ;
};
typedef struct __anonstruct__IO_cookie_io_functions_t_26 _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;
struct _IO_cookie_file;
typedef __gnuc_va_list va_list;
typedef _G_fpos64_t fpos_t;
typedef _G_fpos64_t fpos64_t;
struct obstack;
typedef int ptrdiff_t;
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char const   *tm_zone ;
};
struct itimerspec {
   struct timespec it_interval ;
   struct timespec it_value ;
};
struct sigevent;
struct __time_t_must_be_integral {
   unsigned int __floating_time_t_unsupported : 1 ;
};
typedef unsigned char uch;
typedef unsigned short ush;
typedef unsigned long ulg;
typedef int file_t;
struct huft;
union __anonunion_v_27 {
   ush n ;
   struct huft *t ;
};
struct huft {
   uch e ;
   uch b ;
   union __anonunion_v_27 v ;
};
extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;
__inline extern  __attribute__((__nothrow__)) double __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern  __attribute__((__nothrow__)) long long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) strtod)(char const   * __restrict  __nptr ,
                                                                                      char ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) float ( __attribute__((__nonnull__(1))) strtof)(char const   * __restrict  __nptr ,
                                                                                     char ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) long double ( __attribute__((__nonnull__(1))) strtold)(char const   * __restrict  __nptr ,
                                                                                            char ** __restrict  __endptr ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) strtol)(char const   * __restrict  __nptr ,
                                                                                    char ** __restrict  __endptr ,
                                                                                    int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1))) strtoul)(char const   * __restrict  __nptr ,
                                                                                              char ** __restrict  __endptr ,
                                                                                              int __base ) ;
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) strtoq)(char const   * __restrict  __nptr ,
                                                                                         char ** __restrict  __endptr ,
                                                                                         int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) strtouq)(char const   * __restrict  __nptr ,
                                                                                                   char ** __restrict  __endptr ,
                                                                                                   int __base ) ;
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1))) strtoll)(char const   * __restrict  __nptr ,
                                                                                          char ** __restrict  __endptr ,
                                                                                          int __base ) ;
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1))) strtoull)(char const   * __restrict  __nptr ,
                                                                                                    char ** __restrict  __endptr ,
                                                                                                    int __base ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1,4))) strtol_l)(char const   * __restrict  __nptr ,
                                                                                        char ** __restrict  __endptr ,
                                                                                        int __base ,
                                                                                        __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) unsigned long ( __attribute__((__nonnull__(1,4))) strtoul_l)(char const   * __restrict  __nptr ,
                                                                                                  char ** __restrict  __endptr ,
                                                                                                  int __base ,
                                                                                                  __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) long long ( __attribute__((__nonnull__(1,4))) strtoll_l)(char const   * __restrict  __nptr ,
                                                                                              char ** __restrict  __endptr ,
                                                                                              int __base ,
                                                                                              __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) unsigned long long ( __attribute__((__nonnull__(1,4))) strtoull_l)(char const   * __restrict  __nptr ,
                                                                                                        char ** __restrict  __endptr ,
                                                                                                        int __base ,
                                                                                                        __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1,3))) strtod_l)(char const   * __restrict  __nptr ,
                                                                                          char ** __restrict  __endptr ,
                                                                                          __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) float ( __attribute__((__nonnull__(1,3))) strtof_l)(char const   * __restrict  __nptr ,
                                                                                         char ** __restrict  __endptr ,
                                                                                         __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) long double ( __attribute__((__nonnull__(1,3))) strtold_l)(char const   * __restrict  __nptr ,
                                                                                                char ** __restrict  __endptr ,
                                                                                                __locale_t __loc ) ;
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes )  __asm__("fopen64")  ;
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
extern int fflush(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) double __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern double __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atof)(char const   *__nptr ) 
{ 
  double tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  tmp = strtod((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)));
  {
  fprintf(_coverage_fout, "2\n");
  fflush(_coverage_fout);
  }
  return ((double __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern int __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoi)(char const   *__nptr ) 
{ 
  long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "3\n");
  fflush(_coverage_fout);
  }
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  {
  fprintf(_coverage_fout, "4\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )((int )tmp));
}
}
__inline extern  __attribute__((__nothrow__)) long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atol)(char const   *__nptr ) 
{ 
  long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "5\n");
  fflush(_coverage_fout);
  }
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  {
  fprintf(_coverage_fout, "6\n");
  fflush(_coverage_fout);
  }
  return ((long __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) long long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr )  __attribute__((__pure__)) ;
__inline extern long long __attribute__((__gnu_inline__))  ( __attribute__((__nonnull__(1))) atoll)(char const   *__nptr ) 
{ 
  long long tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "7\n");
  fflush(_coverage_fout);
  }
  tmp = strtoll((char const   */* __restrict  */)__nptr,
                (char **/* __restrict  */)((char **)((void *)0)), 10);
  {
  fprintf(_coverage_fout, "8\n");
  fflush(_coverage_fout);
  }
  return ((long long __attribute__((__gnu_inline__))  )tmp);
}
}
extern  __attribute__((__nothrow__)) char *l64a(long __n ) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) a64l)(char const   *__s )  __attribute__((__pure__)) ;
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
extern int pselect(int __nfds , fd_set * __restrict  __readfds ,
                   fd_set * __restrict  __writefds ,
                   fd_set * __restrict  __exceptfds ,
                   struct timespec  const  * __restrict  __timeout ,
                   __sigset_t const   * __restrict  __sigmask ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__gnu_inline__))  gnu_dev_major(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__gnu_inline__))  gnu_dev_minor(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned long long __attribute__((__gnu_inline__))  gnu_dev_makedev(unsigned int __major ,
                                                                                                                  unsigned int __minor ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__gnu_inline__))  gnu_dev_major(unsigned long long __dev ) ;
__inline extern unsigned int __attribute__((__gnu_inline__))  gnu_dev_major(unsigned long long __dev ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "9\n");
  fflush(_coverage_fout);
  }
  return ((unsigned int __attribute__((__gnu_inline__))  )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned int __attribute__((__gnu_inline__))  gnu_dev_minor(unsigned long long __dev ) ;
__inline extern unsigned int __attribute__((__gnu_inline__))  gnu_dev_minor(unsigned long long __dev ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "10\n");
  fflush(_coverage_fout);
  }
  return ((unsigned int __attribute__((__gnu_inline__))  )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned long long __attribute__((__gnu_inline__))  gnu_dev_makedev(unsigned int __major ,
                                                                                                                  unsigned int __minor ) ;
__inline extern unsigned long long __attribute__((__gnu_inline__))  gnu_dev_makedev(unsigned int __major ,
                                                                                    unsigned int __minor ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "11\n");
  fflush(_coverage_fout);
  }
  return ((unsigned long long __attribute__((__gnu_inline__))  )(((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32)));
}
}
extern  __attribute__((__nothrow__)) long random(void) ;
extern  __attribute__((__nothrow__)) void srandom(unsigned int __seed ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2))) initstate)(unsigned int __seed ,
                                                                                        char *__statebuf ,
                                                                                        size_t __statelen ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) setstate)(char *__statebuf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) random_r)(struct random_data * __restrict  __buf ,
                                                                                       int32_t * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) srandom_r)(unsigned int __seed ,
                                                                                      struct random_data *__buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2,4))) initstate_r)(unsigned int __seed ,
                                                                                          char * __restrict  __statebuf ,
                                                                                          size_t __statelen ,
                                                                                          struct random_data * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) setstate_r)(char * __restrict  __statebuf ,
                                                                                         struct random_data * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int rand(void) ;
extern  __attribute__((__nothrow__)) void srand(unsigned int __seed ) ;
extern  __attribute__((__nothrow__)) int rand_r(unsigned int *__seed ) ;
extern  __attribute__((__nothrow__)) double drand48(void) ;
extern  __attribute__((__nothrow__)) double ( __attribute__((__nonnull__(1))) erand48)(unsigned short *__xsubi ) ;
extern  __attribute__((__nothrow__)) long lrand48(void) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) nrand48)(unsigned short *__xsubi ) ;
extern  __attribute__((__nothrow__)) long mrand48(void) ;
extern  __attribute__((__nothrow__)) long ( __attribute__((__nonnull__(1))) jrand48)(unsigned short *__xsubi ) ;
extern  __attribute__((__nothrow__)) void srand48(long __seedval ) ;
extern  __attribute__((__nothrow__)) unsigned short *( __attribute__((__nonnull__(1))) seed48)(unsigned short *__seed16v ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) lcong48)(unsigned short *__param ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) drand48_r)(struct drand48_data * __restrict  __buffer ,
                                                                                        double * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) erand48_r)(unsigned short *__xsubi ,
                                                                                        struct drand48_data * __restrict  __buffer ,
                                                                                        double * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lrand48_r)(struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) nrand48_r)(unsigned short *__xsubi ,
                                                                                        struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) mrand48_r)(struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) jrand48_r)(unsigned short *__xsubi ,
                                                                                        struct drand48_data * __restrict  __buffer ,
                                                                                        long * __restrict  __result ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) srand48_r)(long __seedval ,
                                                                                      struct drand48_data *__buffer ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) seed48_r)(unsigned short *__seed16v ,
                                                                                       struct drand48_data *__buffer ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) lcong48_r)(unsigned short *__param ,
                                                                                        struct drand48_data *__buffer ) ;
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__warn_unused_result__)) realloc)(void *__ptr ,
                                                                                              size_t __size ) ;
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
extern  __attribute__((__nothrow__)) void cfree(void *__ptr ) ;
extern  __attribute__((__nothrow__)) void *alloca(size_t __size ) ;
extern  __attribute__((__nothrow__)) void *valloc(size_t __size )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) posix_memalign)(void **__memptr ,
                                                                                           size_t __alignment ,
                                                                                           size_t __size ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) atexit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) at_quick_exit)(void (*__func)(void) ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) on_exit)(void (*__func)(int __status ,
                                                                                                   void *__arg ) ,
                                                                                    void *__arg ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
extern  __attribute__((__nothrow__,
__noreturn__)) void quick_exit(int __status ) ;
extern  __attribute__((__nothrow__, __noreturn__)) void _Exit(int __status ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) getenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) __secure_getenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) putenv)(char *__string ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) setenv)(char const   *__name ,
                                                                                   char const   *__value ,
                                                                                   int __replace ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) unsetenv)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) int clearenv(void) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) mktemp)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkstemp)(char *__template )  __asm__("mkstemp64")  ;
extern int ( __attribute__((__nonnull__(1))) mkstemp64)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkstemps)(char *__template ,
                                                       int __suffixlen )  __asm__("mkstemps64")  ;
extern int ( __attribute__((__nonnull__(1))) mkstemps64)(char *__template ,
                                                         int __suffixlen ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) mkdtemp)(char *__template ) ;
extern int ( __attribute__((__nonnull__(1))) mkostemp)(char *__template ,
                                                       int __flags )  __asm__("mkostemp64")  ;
extern int ( __attribute__((__nonnull__(1))) mkostemp64)(char *__template ,
                                                         int __flags ) ;
extern int ( __attribute__((__nonnull__(1))) mkostemps)(char *__template ,
                                                        int __suffixlen ,
                                                        int __flags )  __asm__("mkostemps64")  ;
extern int ( __attribute__((__nonnull__(1))) mkostemps64)(char *__template ,
                                                          int __suffixlen ,
                                                          int __flags ) ;
extern int system(char const   *__command ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) canonicalize_file_name)(char const   *__name ) ;
extern  __attribute__((__nothrow__)) char *realpath(char const   * __restrict  __name ,
                                                    char * __restrict  __resolved ) ;
extern void *( __attribute__((__nonnull__(1,2,5))) bsearch)(void const   *__key ,
                                                            void const   *__base ,
                                                            size_t __nmemb ,
                                                            size_t __size ,
                                                            int (*__compar)(void const   * ,
                                                                            void const   * ) ) ;
extern void ( __attribute__((__nonnull__(1,4))) qsort)(void *__base ,
                                                       size_t __nmemb ,
                                                       size_t __size ,
                                                       int (*__compar)(void const   * ,
                                                                       void const   * ) ) ;
extern void ( __attribute__((__nonnull__(1,4))) qsort_r)(void *__base ,
                                                         size_t __nmemb ,
                                                         size_t __size ,
                                                         int (*__compar)(void const   * ,
                                                                         void const   * ,
                                                                         void * ) ,
                                                         void *__arg ) ;
extern  __attribute__((__nothrow__)) int abs(int __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long labs(long __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) long long llabs(long long __x )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) div_t div(int __numer , int __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) ldiv_t ldiv(long __numer , long __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) lldiv_t lldiv(long long __numer ,
                                                   long long __denom )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) ecvt)(double __value ,
                                                                                     int __ndigit ,
                                                                                     int * __restrict  __decpt ,
                                                                                     int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) fcvt)(double __value ,
                                                                                     int __ndigit ,
                                                                                     int * __restrict  __decpt ,
                                                                                     int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3))) gcvt)(double __value ,
                                                                                   int __ndigit ,
                                                                                   char *__buf ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) qecvt)(long double __value ,
                                                                                      int __ndigit ,
                                                                                      int * __restrict  __decpt ,
                                                                                      int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3,4))) qfcvt)(long double __value ,
                                                                                      int __ndigit ,
                                                                                      int * __restrict  __decpt ,
                                                                                      int * __restrict  __sign ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(3))) qgcvt)(long double __value ,
                                                                                    int __ndigit ,
                                                                                    char *__buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) ecvt_r)(double __value ,
                                                                                       int __ndigit ,
                                                                                       int * __restrict  __decpt ,
                                                                                       int * __restrict  __sign ,
                                                                                       char * __restrict  __buf ,
                                                                                       size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) fcvt_r)(double __value ,
                                                                                       int __ndigit ,
                                                                                       int * __restrict  __decpt ,
                                                                                       int * __restrict  __sign ,
                                                                                       char * __restrict  __buf ,
                                                                                       size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) qecvt_r)(long double __value ,
                                                                                        int __ndigit ,
                                                                                        int * __restrict  __decpt ,
                                                                                        int * __restrict  __sign ,
                                                                                        char * __restrict  __buf ,
                                                                                        size_t __len ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(3,4,5))) qfcvt_r)(long double __value ,
                                                                                        int __ndigit ,
                                                                                        int * __restrict  __decpt ,
                                                                                        int * __restrict  __sign ,
                                                                                        char * __restrict  __buf ,
                                                                                        size_t __len ) ;
extern  __attribute__((__nothrow__)) int mblen(char const   *__s , size_t __n ) ;
extern  __attribute__((__nothrow__)) int mbtowc(wchar_t * __restrict  __pwc ,
                                                char const   * __restrict  __s ,
                                                size_t __n ) ;
extern  __attribute__((__nothrow__)) int wctomb(char *__s , wchar_t __wchar ) ;
extern  __attribute__((__nothrow__)) size_t mbstowcs(wchar_t * __restrict  __pwcs ,
                                                     char const   * __restrict  __s ,
                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) size_t wcstombs(char * __restrict  __s ,
                                                     wchar_t const   * __restrict  __pwcs ,
                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) rpmatch)(char const   *__response ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,3))) getsubopt)(char ** __restrict  __optionp ,
                                                                                          char * const  * __restrict  __tokens ,
                                                                                          char ** __restrict  __valuep ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) setkey)(char const   *__key ) ;
extern int posix_openpt(int __oflag ) ;
extern  __attribute__((__nothrow__)) int grantpt(int __fd ) ;
extern  __attribute__((__nothrow__)) int unlockpt(int __fd ) ;
extern  __attribute__((__nothrow__)) char *ptsname(int __fd ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) ptsname_r)(int __fd ,
                                                                                      char *__buf ,
                                                                                      size_t __buflen ) ;
extern int getpt(void) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1))) getloadavg)(double *__loadavg ,
                                                                                       int __nelem ) ;
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
extern void _IO_cookie_init(struct _IO_cookie_file *__cfile , int __read_write ,
                            void *__cookie , _IO_cookie_io_functions_t __fns ) ;
extern int __underflow(_IO_FILE * ) ;
extern int __uflow(_IO_FILE * ) ;
extern int __overflow(_IO_FILE * , int  ) ;
extern int _IO_getc(_IO_FILE *__fp ) ;
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) int _IO_feof(_IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) int _IO_ferror(_IO_FILE *__fp ) ;
extern int _IO_peekc_locked(_IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) void _IO_flockfile(_IO_FILE * ) ;
extern  __attribute__((__nothrow__)) void _IO_funlockfile(_IO_FILE * ) ;
extern  __attribute__((__nothrow__)) int _IO_ftrylockfile(_IO_FILE * ) ;
extern int _IO_vfscanf(_IO_FILE * __restrict   , char const   * __restrict   ,
                       __gnuc_va_list  , int * __restrict   ) ;
extern int _IO_vfprintf(_IO_FILE * __restrict   , char const   * __restrict   ,
                        __gnuc_va_list  ) ;
extern __ssize_t _IO_padn(_IO_FILE * , int  , __ssize_t  ) ;
extern size_t _IO_sgetn(_IO_FILE * , void * , size_t  ) ;
extern __off64_t _IO_seekoff(_IO_FILE * , __off64_t  , int  , int  ) ;
extern __off64_t _IO_seekpos(_IO_FILE * , __off64_t  , int  ) ;
extern  __attribute__((__nothrow__)) void _IO_free_backup_area(_IO_FILE * ) ;
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern  __attribute__((__nothrow__)) int remove(char const   *__filename ) ;
extern  __attribute__((__nothrow__)) int rename(char const   *__old ,
                                                char const   *__new ) ;
extern  __attribute__((__nothrow__)) int renameat(int __oldfd ,
                                                  char const   *__old ,
                                                  int __newfd ,
                                                  char const   *__new ) ;
extern FILE *tmpfile(void)  __asm__("tmpfile64")  ;
extern FILE *tmpfile64(void) ;
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;
extern int fclose(FILE *__stream ) ;
extern int fflush_unlocked(FILE *__stream ) ;
extern int fcloseall(void) ;
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream )  __asm__("freopen64")  ;
extern FILE *fopen64(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ) ;
extern FILE *freopen64(char const   * __restrict  __filename ,
                       char const   * __restrict  __modes ,
                       FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd ,
                                                  char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *fopencookie(void * __restrict  __magic_cookie ,
                                                       char const   * __restrict  __modes ,
                                                       _IO_cookie_io_functions_t __io_funcs ) ;
extern  __attribute__((__nothrow__)) FILE *fmemopen(void *__s , size_t __len ,
                                                    char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *open_memstream(char **__bufloc ,
                                                          size_t *__sizeloc ) ;
extern  __attribute__((__nothrow__)) void setbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ,
                                                 int __modes , size_t __n ) ;
extern  __attribute__((__nothrow__)) void setbuffer(FILE * __restrict  __stream ,
                                                    char * __restrict  __buf ,
                                                    size_t __size ) ;
extern  __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
__inline extern int __attribute__((__gnu_inline__))  vprintf(char const   * __restrict  __fmt ,
                                                             __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s ,
                                                                             size_t __maxlen ,
                                                                             char const   * __restrict  __format 
                                                                             , ...) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsnprintf)(char * __restrict  __s ,
                                                                              size_t __maxlen ,
                                                                              char const   * __restrict  __format ,
                                                                              __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vasprintf)(char ** __restrict  __ptr ,
                                                                              char const   * __restrict  __f ,
                                                                              __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  __asprintf)(char ** __restrict  __ptr ,
                                                                               char const   * __restrict  __fmt 
                                                                               , ...) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  asprintf)(char ** __restrict  __ptr ,
                                                                             char const   * __restrict  __fmt 
                                                                             , ...) ;
extern int ( /* format attribute */  vdprintf)(int __fd ,
                                               char const   * __restrict  __fmt ,
                                               __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  dprintf)(int __fd ,
                                              char const   * __restrict  __fmt 
                                              , ...) ;
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...) ;
extern int scanf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...) ;
extern int ( /* format attribute */  vfscanf)(FILE * __restrict  __s ,
                                              char const   * __restrict  __format ,
                                              __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  vscanf)(char const   * __restrict  __format ,
                                             __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsscanf)(char const   * __restrict  __s ,
                                                                            char const   * __restrict  __format ,
                                                                            __gnuc_va_list __arg ) ;
extern int fgetc(FILE *__stream ) ;
extern int getc(FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  getchar(void) ;
__inline extern int __attribute__((__gnu_inline__))  getc_unlocked(FILE *__fp ) ;
__inline extern int __attribute__((__gnu_inline__))  getchar_unlocked(void) ;
__inline extern int __attribute__((__gnu_inline__))  fgetc_unlocked(FILE *__fp ) ;
extern int fputc(int __c , FILE *__stream ) ;
extern int putc(int __c , FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  putchar(int __c ) ;
__inline extern int __attribute__((__gnu_inline__))  fputc_unlocked(int __c ,
                                                                    FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  putc_unlocked(int __c ,
                                                                   FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  putchar_unlocked(int __c ) ;
extern int getw(FILE *__stream ) ;
extern int putw(int __w , FILE *__stream ) ;
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
extern char *gets(char *__s )  __attribute__((__warning__("gets is a security hole - use fgets instead"))) ;
extern char *fgets_unlocked(char * __restrict  __s , int __n ,
                            FILE * __restrict  __stream ) ;
extern __ssize_t __getdelim(char ** __restrict  __lineptr ,
                            size_t * __restrict  __n , int __delimiter ,
                            FILE * __restrict  __stream ) ;
extern __ssize_t getdelim(char ** __restrict  __lineptr ,
                          size_t * __restrict  __n , int __delimiter ,
                          FILE * __restrict  __stream ) ;
__inline extern __ssize_t __attribute__((__gnu_inline__))  getline(char ** __restrict  __lineptr ,
                                                                   size_t * __restrict  __n ,
                                                                   FILE * __restrict  __stream ) ;
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
extern int puts(char const   *__s ) ;
extern int ungetc(int __c , FILE *__stream ) ;
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
extern int fputs_unlocked(char const   * __restrict  __s ,
                          FILE * __restrict  __stream ) ;
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size ,
                             size_t __n , FILE * __restrict  __stream ) ;
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size ,
                              size_t __n , FILE * __restrict  __stream ) ;
extern int fseek(FILE *__stream , long __off , int __whence ) ;
extern long ftell(FILE *__stream )  __attribute__((__warning__("ftell cannot handle files larger than 4 GB on 32-bit platforms - use ftello function for handling of large files"))) ;
extern void rewind(FILE *__stream ) ;
extern int fseeko(FILE *__stream , __off64_t __off , int __whence )  __asm__("fseeko64")  ;
extern __off64_t ftello(FILE *__stream )  __asm__("ftello64")  ;
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos )  __asm__("fgetpos64")  ;
extern int fsetpos(FILE *__stream , fpos_t const   *__pos )  __asm__("fsetpos64")  ;
extern int fseeko64(FILE *__stream , __off64_t __off , int __whence ) ;
extern __off64_t ftello64(FILE *__stream ) ;
extern int fgetpos64(FILE * __restrict  __stream , fpos64_t * __restrict  __pos ) ;
extern int fsetpos64(FILE *__stream , fpos64_t const   *__pos ) ;
extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  feof_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ferror_unlocked(FILE *__stream ) ;
extern void perror(char const   *__s ) ;
extern int sys_nerr ;
extern char const   * const  sys_errlist[] ;
extern int _sys_nerr ;
extern char const   * const  _sys_errlist[] ;
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;
extern FILE *popen(char const   *__command , char const   *__modes ) ;
extern int pclose(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
extern char *cuserid(char *__s ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  obstack_printf)(struct obstack * __restrict  __obstack ,
                                                                                   char const   * __restrict  __format 
                                                                                   , ...) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  obstack_vprintf)(struct obstack * __restrict  __obstack ,
                                                                                    char const   * __restrict  __format ,
                                                                                    __gnuc_va_list __args ) ;
extern  __attribute__((__nothrow__)) void flockfile(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ftrylockfile(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void funlockfile(FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  vprintf(char const   * __restrict  __fmt ,
                                                             __gnuc_va_list __arg ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "12\n");
  fflush(_coverage_fout);
  }
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  {
  fprintf(_coverage_fout, "13\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  getchar(void) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "14\n");
  fflush(_coverage_fout);
  }
  tmp = _IO_getc(stdin);
  {
  fprintf(_coverage_fout, "15\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  fgetc_unlocked(FILE *__fp ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "16\n");
  fflush(_coverage_fout);
  }
  tmp___3 = __builtin_expect((long )((unsigned long )__fp->_IO_read_ptr >= (unsigned long )__fp->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "17\n");
  fflush(_coverage_fout);
  }
  if (tmp___3) {
    {
    fprintf(_coverage_fout, "18\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __uflow(__fp);
    {
    fprintf(_coverage_fout, "19\n");
    fflush(_coverage_fout);
    }
    tmp___2 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "20\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __fp->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "21\n");
    fflush(_coverage_fout);
    }
    (__fp->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "22\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  {
  fprintf(_coverage_fout, "23\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___2);
}
}
__inline extern int __attribute__((__gnu_inline__))  getc_unlocked(FILE *__fp ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "24\n");
  fflush(_coverage_fout);
  }
  tmp___3 = __builtin_expect((long )((unsigned long )__fp->_IO_read_ptr >= (unsigned long )__fp->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "25\n");
  fflush(_coverage_fout);
  }
  if (tmp___3) {
    {
    fprintf(_coverage_fout, "26\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __uflow(__fp);
    {
    fprintf(_coverage_fout, "27\n");
    fflush(_coverage_fout);
    }
    tmp___2 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "28\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __fp->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "29\n");
    fflush(_coverage_fout);
    }
    (__fp->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "30\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  {
  fprintf(_coverage_fout, "31\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___2);
}
}
__inline extern int __attribute__((__gnu_inline__))  getchar_unlocked(void) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "32\n");
  fflush(_coverage_fout);
  }
  tmp___3 = __builtin_expect((long )((unsigned long )stdin->_IO_read_ptr >= (unsigned long )stdin->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "33\n");
  fflush(_coverage_fout);
  }
  if (tmp___3) {
    {
    fprintf(_coverage_fout, "34\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __uflow(stdin);
    {
    fprintf(_coverage_fout, "35\n");
    fflush(_coverage_fout);
    }
    tmp___2 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "36\n");
    fflush(_coverage_fout);
    }
    tmp___1 = stdin->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "37\n");
    fflush(_coverage_fout);
    }
    (stdin->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "38\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  {
  fprintf(_coverage_fout, "39\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___2);
}
}
__inline extern int __attribute__((__gnu_inline__))  putchar(int __c ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "40\n");
  fflush(_coverage_fout);
  }
  tmp = _IO_putc(__c, stdout);
  {
  fprintf(_coverage_fout, "41\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern int __attribute__((__gnu_inline__))  fputc_unlocked(int __c ,
                                                                    FILE *__stream ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "42\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned long )__stream->_IO_write_ptr >= (unsigned long )__stream->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "43\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "44\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    {
    fprintf(_coverage_fout, "45\n");
    fflush(_coverage_fout);
    }
    tmp___3 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "46\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __stream->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "47\n");
    fflush(_coverage_fout);
    }
    (__stream->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "48\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (char )__c;
    {
    fprintf(_coverage_fout, "49\n");
    fflush(_coverage_fout);
    }
    *tmp___1 = tmp___2;
    {
    fprintf(_coverage_fout, "50\n");
    fflush(_coverage_fout);
    }
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  {
  fprintf(_coverage_fout, "51\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___3);
}
}
__inline extern int __attribute__((__gnu_inline__))  putc_unlocked(int __c ,
                                                                   FILE *__stream ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "52\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned long )__stream->_IO_write_ptr >= (unsigned long )__stream->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "53\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "54\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    {
    fprintf(_coverage_fout, "55\n");
    fflush(_coverage_fout);
    }
    tmp___3 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "56\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __stream->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "57\n");
    fflush(_coverage_fout);
    }
    (__stream->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "58\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (char )__c;
    {
    fprintf(_coverage_fout, "59\n");
    fflush(_coverage_fout);
    }
    *tmp___1 = tmp___2;
    {
    fprintf(_coverage_fout, "60\n");
    fflush(_coverage_fout);
    }
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  {
  fprintf(_coverage_fout, "61\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___3);
}
}
__inline extern int __attribute__((__gnu_inline__))  putchar_unlocked(int __c ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "62\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned long )stdout->_IO_write_ptr >= (unsigned long )stdout->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "63\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "64\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __overflow(stdout, (int )((unsigned char )__c));
    {
    fprintf(_coverage_fout, "65\n");
    fflush(_coverage_fout);
    }
    tmp___3 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "66\n");
    fflush(_coverage_fout);
    }
    tmp___1 = stdout->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "67\n");
    fflush(_coverage_fout);
    }
    (stdout->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "68\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (char )__c;
    {
    fprintf(_coverage_fout, "69\n");
    fflush(_coverage_fout);
    }
    *tmp___1 = tmp___2;
    {
    fprintf(_coverage_fout, "70\n");
    fflush(_coverage_fout);
    }
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  {
  fprintf(_coverage_fout, "71\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )tmp___3);
}
}
__inline extern __ssize_t __attribute__((__gnu_inline__))  getline(char ** __restrict  __lineptr ,
                                                                   size_t * __restrict  __n ,
                                                                   FILE * __restrict  __stream ) 
{ 
  __ssize_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "72\n");
  fflush(_coverage_fout);
  }
  tmp = __getdelim(__lineptr, __n, '\n', __stream);
  {
  fprintf(_coverage_fout, "73\n");
  fflush(_coverage_fout);
  }
  return ((__ssize_t __attribute__((__gnu_inline__))  )tmp);
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  feof_unlocked(FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  feof_unlocked(FILE *__stream ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "74\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )((__stream->_flags & 16) != 0));
}
}
__inline extern  __attribute__((__nothrow__)) int __attribute__((__gnu_inline__))  ferror_unlocked(FILE *__stream ) ;
__inline extern int __attribute__((__gnu_inline__))  ferror_unlocked(FILE *__stream ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "75\n");
  fflush(_coverage_fout);
  }
  return ((int __attribute__((__gnu_inline__))  )((__stream->_flags & 32) != 0));
}
}
extern int rpl_fflush(FILE *gl_stream ) ;
extern int _gl_cxxalias_dummy ;
extern int ( __attribute__((__nonnull__(1))) fpurge)(FILE *gl_stream ) ;
extern int ( __attribute__((__nonnull__(1))) rpl_fseeko)(FILE *fp ,
                                                         off_t offset ,
                                                         int whence ) ;
__inline static int ( __attribute__((__nonnull__(1))) rpl_fseek)(FILE *fp ,
                                                                 long offset ,
                                                                 int whence )  __attribute__((__warning__("fseek cannot handle files larger than 4 GB on 32-bit platforms - use fseeko function for handling of large files"))) ;
__inline static int ( __attribute__((__nonnull__(1))) rpl_fseek)(FILE *fp ,
                                                                 long offset ,
                                                                 int whence ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "76\n");
  fflush(_coverage_fout);
  }
  tmp = rpl_fseeko(fp, (off_t )offset, whence);
  {
  fprintf(_coverage_fout, "77\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
extern  __attribute__((__nothrow__)) clock_t clock(void) ;
extern  __attribute__((__nothrow__)) time_t time(time_t *__timer ) ;
extern  __attribute__((__nothrow__)) double difftime(time_t __time1 ,
                                                     time_t __time0 )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) time_t mktime(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) size_t strftime(char * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     char const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) char *strptime(char const   * __restrict  __s ,
                                                    char const   * __restrict  __fmt ,
                                                    struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) size_t strftime_l(char * __restrict  __s ,
                                                       size_t __maxsize ,
                                                       char const   * __restrict  __format ,
                                                       struct tm  const  * __restrict  __tp ,
                                                       __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) char *strptime_l(char const   * __restrict  __s ,
                                                      char const   * __restrict  __fmt ,
                                                      struct tm *__tp ,
                                                      __locale_t __loc ) ;
extern  __attribute__((__nothrow__)) struct tm *gmtime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) struct tm *gmtime_r(time_t const   * __restrict  __timer ,
                                                         struct tm * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) struct tm *localtime_r(time_t const   * __restrict  __timer ,
                                                            struct tm * __restrict  __tp ) ;
extern  __attribute__((__nothrow__)) char *asctime(struct tm  const  *__tp ) ;
extern  __attribute__((__nothrow__)) char *ctime(time_t const   *__timer ) ;
extern  __attribute__((__nothrow__)) char *asctime_r(struct tm  const  * __restrict  __tp ,
                                                     char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) char *ctime_r(time_t const   * __restrict  __timer ,
                                                   char * __restrict  __buf ) ;
extern char *__tzname[2] ;
extern int __daylight ;
extern long __timezone ;
extern char *tzname[2] ;
extern  __attribute__((__nothrow__)) void tzset(void) ;
extern int daylight ;
extern long timezone ;
extern  __attribute__((__nothrow__)) int stime(time_t const   *__when ) ;
extern  __attribute__((__nothrow__)) time_t timegm(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) time_t timelocal(struct tm *__tp ) ;
extern  __attribute__((__nothrow__)) int dysize(int __year )  __attribute__((__const__)) ;
extern int nanosleep(struct timespec  const  *__requested_time ,
                     struct timespec *__remaining ) ;
extern  __attribute__((__nothrow__)) int clock_getres(clockid_t __clock_id ,
                                                      struct timespec *__res ) ;
extern  __attribute__((__nothrow__)) int clock_gettime(clockid_t __clock_id ,
                                                       struct timespec *__tp ) ;
extern  __attribute__((__nothrow__)) int clock_settime(clockid_t __clock_id ,
                                                       struct timespec  const  *__tp ) ;
extern int clock_nanosleep(clockid_t __clock_id , int __flags ,
                           struct timespec  const  *__req ,
                           struct timespec *__rem ) ;
extern  __attribute__((__nothrow__)) int clock_getcpuclockid(pid_t __pid ,
                                                             clockid_t *__clock_id ) ;
extern  __attribute__((__nothrow__)) int timer_create(clockid_t __clock_id ,
                                                      struct sigevent * __restrict  __evp ,
                                                      timer_t * __restrict  __timerid ) ;
extern  __attribute__((__nothrow__)) int timer_delete(timer_t __timerid ) ;
extern  __attribute__((__nothrow__)) int timer_settime(timer_t __timerid ,
                                                       int __flags ,
                                                       struct itimerspec  const  * __restrict  __value ,
                                                       struct itimerspec * __restrict  __ovalue ) ;
extern  __attribute__((__nothrow__)) int timer_gettime(timer_t __timerid ,
                                                       struct itimerspec *__value ) ;
extern  __attribute__((__nothrow__)) int timer_getoverrun(timer_t __timerid ) ;
extern int getdate_err ;
extern struct tm *getdate(char const   *__string ) ;
extern int getdate_r(char const   * __restrict  __string ,
                     struct tm * __restrict  __resbufp ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memcpy)(void * __restrict  __dest ,
                                                                                       void const   * __restrict  __src ,
                                                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memmove)(void *__dest ,
                                                                                        void const   *__src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memccpy)(void * __restrict  __dest ,
                                                                                        void const   * __restrict  __src ,
                                                                                        int __c ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memset)(void *__s ,
                                                                                     int __c ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) memcmp)(void const   *__s1 ,
                                                                                     void const   *__s2 ,
                                                                                     size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memchr)(void const   *__s ,
                                                                                     int __c ,
                                                                                     size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) rawmemchr)(void const   *__s ,
                                                                                        int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memrchr)(void const   *__s ,
                                                                                      int __c ,
                                                                                      size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcpy)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strncpy)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcat)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strncat)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcmp)(char const   *__s1 ,
                                                                                     char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncmp)(char const   *__s1 ,
                                                                                      char const   *__s2 ,
                                                                                      size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcoll)(char const   *__s1 ,
                                                                                      char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(2))) strxfrm)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ,
                                                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,3))) strcoll_l)(char const   *__s1 ,
                                                                                          char const   *__s2 ,
                                                                                          __locale_t __l )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(2,4))) strxfrm_l)(char *__dest ,
                                                                                           char const   *__src ,
                                                                                           size_t __n ,
                                                                                           __locale_t __l ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strdup)(char const   *__s )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strndup)(char const   *__string ,
                                                                                      size_t __n )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strchr)(char const   *__s ,
                                                                                     int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strrchr)(char const   *__s ,
                                                                                      int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strchrnul)(char const   *__s ,
                                                                                        int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2))) strcspn)(char const   *__s ,
                                                                                         char const   *__reject )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2))) strspn)(char const   *__s ,
                                                                                        char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strpbrk)(char const   *__s ,
                                                                                        char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strstr)(char const   *__haystack ,
                                                                                       char const   *__needle )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2))) strtok)(char * __restrict  __s ,
                                                                                     char const   * __restrict  __delim ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2,3))) __strtok_r)(char * __restrict  __s ,
                                                                                           char const   * __restrict  __delim ,
                                                                                           char ** __restrict  __save_ptr ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2,3))) strtok_r)(char * __restrict  __s ,
                                                                                         char const   * __restrict  __delim ,
                                                                                         char ** __restrict  __save_ptr ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcasestr)(char const   *__haystack ,
                                                                                           char const   *__needle )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,3))) memmem)(void const   *__haystack ,
                                                                                       size_t __haystacklen ,
                                                                                       void const   *__needle ,
                                                                                       size_t __needlelen )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) __mempcpy)(void * __restrict  __dest ,
                                                                                          void const   * __restrict  __src ,
                                                                                          size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) mempcpy)(void * __restrict  __dest ,
                                                                                        void const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1))) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1))) strnlen)(char const   *__string ,
                                                                                       size_t __maxlen )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2))) strerror_r)(int __errnum ,
                                                                                         char *__buf ,
                                                                                         size_t __buflen ) ;
extern  __attribute__((__nothrow__)) char *strerror_l(int __errnum ,
                                                      __locale_t __l ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) __bzero)(void *__s ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1,2))) bcopy)(void const   *__src ,
                                                                                     void *__dest ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) bzero)(void *__s ,
                                                                                   size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) bcmp)(void const   *__s1 ,
                                                                                   void const   *__s2 ,
                                                                                   size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) index)(char const   *__s ,
                                                                                    int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) rindex)(char const   *__s ,
                                                                                     int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ffsl(long __l )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ffsll(long long __ll )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcasecmp)(char const   *__s1 ,
                                                                                         char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncasecmp)(char const   *__s1 ,
                                                                                          char const   *__s2 ,
                                                                                          size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,3))) strcasecmp_l)(char const   *__s1 ,
                                                                                             char const   *__s2 ,
                                                                                             __locale_t __loc )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2,4))) strncasecmp_l)(char const   *__s1 ,
                                                                                              char const   *__s2 ,
                                                                                              size_t __n ,
                                                                                              __locale_t __loc )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strsep)(char ** __restrict  __stringp ,
                                                                                       char const   * __restrict  __delim ) ;
extern  __attribute__((__nothrow__)) char *strsignal(int __sig ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) __stpcpy)(char * __restrict  __dest ,
                                                                                         char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) stpcpy)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) __stpncpy)(char * __restrict  __dest ,
                                                                                          char const   * __restrict  __src ,
                                                                                          size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) stpncpy)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strverscmp)(char const   *__s1 ,
                                                                                         char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strfry)(char *__string ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memfrob)(void *__s ,
                                                                                      size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) basename)(char const   *__filename ) ;
extern void *__rawmemchr(void const   *__s , int __c ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c1(char const   *__s ,
                                                                     int __reject ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c1(char const   *__s ,
                                                                     int __reject ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "78\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "79\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "80\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "81\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) != (int const   )__reject) {
        {
        fprintf(_coverage_fout, "82\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "83\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "84\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "85\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "86\n");
  fflush(_coverage_fout);
  }
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c2(char const   *__s ,
                                                                     int __reject1 ,
                                                                     int __reject2 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c2(char const   *__s ,
                                                                     int __reject1 ,
                                                                     int __reject2 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "87\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "88\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "89\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "90\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        {
        fprintf(_coverage_fout, "91\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
          {
          fprintf(_coverage_fout, "92\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "93\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "94\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "95\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "96\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "97\n");
  fflush(_coverage_fout);
  }
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c3(char const   *__s ,
                                                                     int __reject1 ,
                                                                     int __reject2 ,
                                                                     int __reject3 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strcspn_c3(char const   *__s ,
                                                                     int __reject1 ,
                                                                     int __reject2 ,
                                                                     int __reject3 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "98\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "99\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "100\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "101\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        {
        fprintf(_coverage_fout, "102\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
          {
          fprintf(_coverage_fout, "103\n");
          fflush(_coverage_fout);
          }
          if ((int const   )*(__s + __result) != (int const   )__reject3) {
            {
            fprintf(_coverage_fout, "104\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "105\n");
            fflush(_coverage_fout);
            }
            break;
          }
        } else {
          {
          fprintf(_coverage_fout, "106\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "107\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "108\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "109\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "110\n");
  fflush(_coverage_fout);
  }
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c1(char const   *__s ,
                                                                    int __accept ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c1(char const   *__s ,
                                                                    int __accept ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "111\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "112\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "113\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) == (int const   )__accept) {
      {
      fprintf(_coverage_fout, "114\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "115\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "116\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "117\n");
  fflush(_coverage_fout);
  }
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c2(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c2(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "118\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "119\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "120\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) == (int const   )__accept1) {
      {
      fprintf(_coverage_fout, "121\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "122\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) == (int const   )__accept2) {
        {
        fprintf(_coverage_fout, "123\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "124\n");
        fflush(_coverage_fout);
        }
        break;
      }
    }
    {
    fprintf(_coverage_fout, "125\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "126\n");
  fflush(_coverage_fout);
  }
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c3(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ,
                                                                    int __accept3 ) ;
__inline extern size_t __attribute__((__gnu_inline__))  __strspn_c3(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ,
                                                                    int __accept3 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "127\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "128\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "129\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) == (int const   )__accept1) {
      {
      fprintf(_coverage_fout, "130\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "131\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) == (int const   )__accept2) {
        {
        fprintf(_coverage_fout, "132\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "133\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*(__s + __result) == (int const   )__accept3) {
          {
          fprintf(_coverage_fout, "134\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "135\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
    }
    {
    fprintf(_coverage_fout, "136\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "137\n");
  fflush(_coverage_fout);
  }
  return ((size_t __attribute__((__gnu_inline__))  )__result);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c2(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c2(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ) 
{ 
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "138\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "139\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*__s != 0) {
      {
      fprintf(_coverage_fout, "140\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*__s != (int const   )__accept1) {
        {
        fprintf(_coverage_fout, "141\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*__s != (int const   )__accept2) {
          {
          fprintf(_coverage_fout, "142\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "143\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "144\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "145\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "146\n");
    fflush(_coverage_fout);
    }
    __s ++;
  }
  {
  fprintf(_coverage_fout, "147\n");
  fflush(_coverage_fout);
  }
  if ((int const   )*__s == 0) {
    {
    fprintf(_coverage_fout, "148\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((void *)0);
  } else {
    {
    fprintf(_coverage_fout, "149\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((size_t )__s);
  }
  {
  fprintf(_coverage_fout, "150\n");
  fflush(_coverage_fout);
  }
  return ((char __attribute__((__gnu_inline__))  *)tmp);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c3(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ,
                                                                    int __accept3 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strpbrk_c3(char const   *__s ,
                                                                    int __accept1 ,
                                                                    int __accept2 ,
                                                                    int __accept3 ) 
{ 
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "151\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "152\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*__s != 0) {
      {
      fprintf(_coverage_fout, "153\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*__s != (int const   )__accept1) {
        {
        fprintf(_coverage_fout, "154\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*__s != (int const   )__accept2) {
          {
          fprintf(_coverage_fout, "155\n");
          fflush(_coverage_fout);
          }
          if ((int const   )*__s != (int const   )__accept3) {
            {
            fprintf(_coverage_fout, "156\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "157\n");
            fflush(_coverage_fout);
            }
            break;
          }
        } else {
          {
          fprintf(_coverage_fout, "158\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "159\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "160\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "161\n");
    fflush(_coverage_fout);
    }
    __s ++;
  }
  {
  fprintf(_coverage_fout, "162\n");
  fflush(_coverage_fout);
  }
  if ((int const   )*__s == 0) {
    {
    fprintf(_coverage_fout, "163\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((void *)0);
  } else {
    {
    fprintf(_coverage_fout, "164\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((size_t )__s);
  }
  {
  fprintf(_coverage_fout, "165\n");
  fflush(_coverage_fout);
  }
  return ((char __attribute__((__gnu_inline__))  *)tmp);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strtok_r_1c(char *__s ,
                                                                     char __sep ,
                                                                     char **__nextp ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strtok_r_1c(char *__s ,
                                                                     char __sep ,
                                                                     char **__nextp ) 
{ 
  char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "166\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )__s == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "167\n");
    fflush(_coverage_fout);
    }
    __s = *__nextp;
  } else {
    {
    fprintf(_coverage_fout, "168\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "169\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "170\n");
    fflush(_coverage_fout);
    }
    if ((int )*__s == (int )__sep) {
      {
      fprintf(_coverage_fout, "171\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "172\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "173\n");
    fflush(_coverage_fout);
    }
    __s ++;
  }
  {
  fprintf(_coverage_fout, "174\n");
  fflush(_coverage_fout);
  }
  __result = (char *)((void *)0);
  {
  fprintf(_coverage_fout, "175\n");
  fflush(_coverage_fout);
  }
  if ((int )*__s != 0) {
    {
    fprintf(_coverage_fout, "176\n");
    fflush(_coverage_fout);
    }
    tmp = __s;
    {
    fprintf(_coverage_fout, "177\n");
    fflush(_coverage_fout);
    }
    __s ++;
    {
    fprintf(_coverage_fout, "178\n");
    fflush(_coverage_fout);
    }
    __result = tmp;
    {
    fprintf(_coverage_fout, "179\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "180\n");
      fflush(_coverage_fout);
      }
      if ((int )*__s != 0) {
        {
        fprintf(_coverage_fout, "181\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "182\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "183\n");
      fflush(_coverage_fout);
      }
      tmp___0 = __s;
      {
      fprintf(_coverage_fout, "184\n");
      fflush(_coverage_fout);
      }
      __s ++;
      {
      fprintf(_coverage_fout, "185\n");
      fflush(_coverage_fout);
      }
      if ((int )*tmp___0 == (int )__sep) {
        {
        fprintf(_coverage_fout, "186\n");
        fflush(_coverage_fout);
        }
        *(__s + -1) = (char )'\000';
        {
        fprintf(_coverage_fout, "187\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "188\n");
        fflush(_coverage_fout);
        }

      }
    }
  } else {
    {
    fprintf(_coverage_fout, "189\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "190\n");
  fflush(_coverage_fout);
  }
  *__nextp = __s;
  {
  fprintf(_coverage_fout, "191\n");
  fflush(_coverage_fout);
  }
  return ((char __attribute__((__gnu_inline__))  *)__result);
}
}
extern char *__strsep_g(char **__stringp , char const   *__delim ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strsep_1c(char **__s ,
                                                                   char __reject ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strsep_1c(char **__s ,
                                                                   char __reject ) 
{ 
  register char *__retval ;
  char *tmp ;
  char *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "192\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "193\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "194\n");
    fflush(_coverage_fout);
    }
    tmp___2 = __builtin_strchr(__retval, (int )__reject);
    {
    fprintf(_coverage_fout, "195\n");
    fflush(_coverage_fout);
    }
    tmp___0 = tmp___2;
    {
    fprintf(_coverage_fout, "196\n");
    fflush(_coverage_fout);
    }
    *__s = tmp___0;
    {
    fprintf(_coverage_fout, "197\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )tmp___0 != (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "198\n");
      fflush(_coverage_fout);
      }
      tmp = *__s;
      {
      fprintf(_coverage_fout, "199\n");
      fflush(_coverage_fout);
      }
      (*__s) ++;
      {
      fprintf(_coverage_fout, "200\n");
      fflush(_coverage_fout);
      }
      *tmp = (char )'\000';
    } else {
      {
      fprintf(_coverage_fout, "201\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "202\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "203\n");
  fflush(_coverage_fout);
  }
  return ((char __attribute__((__gnu_inline__))  *)__retval);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strsep_2c(char **__s ,
                                                                   char __reject1 ,
                                                                   char __reject2 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strsep_2c(char **__s ,
                                                                   char __reject1 ,
                                                                   char __reject2 ) 
{ 
  register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "204\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "205\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "206\n");
    fflush(_coverage_fout);
    }
    __cp = __retval;
    {
    fprintf(_coverage_fout, "207\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "208\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == 0) {
        {
        fprintf(_coverage_fout, "209\n");
        fflush(_coverage_fout);
        }
        __cp = (char *)((void *)0);
        {
        fprintf(_coverage_fout, "210\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "211\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "212\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == (int )__reject1) {
        {
        fprintf(_coverage_fout, "213\n");
        fflush(_coverage_fout);
        }
        tmp = __cp;
        {
        fprintf(_coverage_fout, "214\n");
        fflush(_coverage_fout);
        }
        __cp ++;
        {
        fprintf(_coverage_fout, "215\n");
        fflush(_coverage_fout);
        }
        *tmp = (char )'\000';
        {
        fprintf(_coverage_fout, "216\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "217\n");
        fflush(_coverage_fout);
        }
        if ((int )*__cp == (int )__reject2) {
          {
          fprintf(_coverage_fout, "218\n");
          fflush(_coverage_fout);
          }
          tmp = __cp;
          {
          fprintf(_coverage_fout, "219\n");
          fflush(_coverage_fout);
          }
          __cp ++;
          {
          fprintf(_coverage_fout, "220\n");
          fflush(_coverage_fout);
          }
          *tmp = (char )'\000';
          {
          fprintf(_coverage_fout, "221\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "222\n");
          fflush(_coverage_fout);
          }

        }
      }
      {
      fprintf(_coverage_fout, "223\n");
      fflush(_coverage_fout);
      }
      __cp ++;
    }
    {
    fprintf(_coverage_fout, "224\n");
    fflush(_coverage_fout);
    }
    *__s = __cp;
  } else {
    {
    fprintf(_coverage_fout, "225\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "226\n");
  fflush(_coverage_fout);
  }
  return ((char __attribute__((__gnu_inline__))  *)__retval);
}
}
__inline extern char __attribute__((__gnu_inline__))  *__strsep_3c(char **__s ,
                                                                   char __reject1 ,
                                                                   char __reject2 ,
                                                                   char __reject3 ) ;
__inline extern char __attribute__((__gnu_inline__))  *__strsep_3c(char **__s ,
                                                                   char __reject1 ,
                                                                   char __reject2 ,
                                                                   char __reject3 ) 
{ 
  register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "227\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "228\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "229\n");
    fflush(_coverage_fout);
    }
    __cp = __retval;
    {
    fprintf(_coverage_fout, "230\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "231\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == 0) {
        {
        fprintf(_coverage_fout, "232\n");
        fflush(_coverage_fout);
        }
        __cp = (char *)((void *)0);
        {
        fprintf(_coverage_fout, "233\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "234\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "235\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == (int )__reject1) {
        {
        fprintf(_coverage_fout, "236\n");
        fflush(_coverage_fout);
        }
        tmp = __cp;
        {
        fprintf(_coverage_fout, "237\n");
        fflush(_coverage_fout);
        }
        __cp ++;
        {
        fprintf(_coverage_fout, "238\n");
        fflush(_coverage_fout);
        }
        *tmp = (char )'\000';
        {
        fprintf(_coverage_fout, "239\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "240\n");
        fflush(_coverage_fout);
        }
        if ((int )*__cp == (int )__reject2) {
          {
          fprintf(_coverage_fout, "241\n");
          fflush(_coverage_fout);
          }
          tmp = __cp;
          {
          fprintf(_coverage_fout, "242\n");
          fflush(_coverage_fout);
          }
          __cp ++;
          {
          fprintf(_coverage_fout, "243\n");
          fflush(_coverage_fout);
          }
          *tmp = (char )'\000';
          {
          fprintf(_coverage_fout, "244\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "245\n");
          fflush(_coverage_fout);
          }
          if ((int )*__cp == (int )__reject3) {
            {
            fprintf(_coverage_fout, "246\n");
            fflush(_coverage_fout);
            }
            tmp = __cp;
            {
            fprintf(_coverage_fout, "247\n");
            fflush(_coverage_fout);
            }
            __cp ++;
            {
            fprintf(_coverage_fout, "248\n");
            fflush(_coverage_fout);
            }
            *tmp = (char )'\000';
            {
            fprintf(_coverage_fout, "249\n");
            fflush(_coverage_fout);
            }
            break;
          } else {
            {
            fprintf(_coverage_fout, "250\n");
            fflush(_coverage_fout);
            }

          }
        }
      }
      {
      fprintf(_coverage_fout, "251\n");
      fflush(_coverage_fout);
      }
      __cp ++;
    }
    {
    fprintf(_coverage_fout, "252\n");
    fflush(_coverage_fout);
    }
    *__s = __cp;
  } else {
    {
    fprintf(_coverage_fout, "253\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "254\n");
  fflush(_coverage_fout);
  }
  return ((char __attribute__((__gnu_inline__))  *)__retval);
}
}
extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *__strndup(char const   *__string ,
                                                     size_t __n )  __attribute__((__malloc__)) ;
extern int method ;
extern uch inbuf[] ;
extern uch outbuf[] ;
extern ush d_buf[] ;
extern uch window[] ;
extern ush prev[] ;
extern unsigned int insize ;
extern unsigned int inptr ;
extern unsigned int outcnt ;
extern off_t bytes_in ;
extern off_t bytes_out ;
extern off_t header_bytes ;
extern int ifd ;
extern int ofd ;
extern char ifname[] ;
extern char ofname[] ;
extern char *program_name ;
extern struct timespec time_stamp ;
extern off_t ifile_size ;
extern int decrypt ;
extern int exit_code ;
extern int verbose ;
extern int quiet ;
extern int level ;
extern int test ;
extern int to_stdout ;
extern int save_orig_name ;
extern int zip(int in , int out ) ;
extern int file_read(char *buf , unsigned int size ) ;
extern int unzip(int in , int out ) ;
extern int check_zipfile(int in ) ;
extern int unpack(int in , int out ) ;
extern int unlzh(int in , int out ) ;
extern  __attribute__((__noreturn__)) void abort_gzip(void) ;
extern void lm_init(int pack_level , ush *flags ) ;
extern off_t deflate(void) ;
extern void ct_init(ush *attr , int *method ) ;
extern int ct_tally(int dist , int lc ) ;
extern off_t flush_block(char *buf , ulg stored_len , int eof ) ;
extern void bi_init(file_t zipfile ) ;
extern void send_bits(int value , int length ) ;
extern unsigned int bi_reverse(unsigned int value , int length ) ;
extern void bi_windup(void) ;
extern void copy_block(char *buf , unsigned int len , int header ) ;
extern int (*read_buf)(char *buf , unsigned int size ) ;
extern int copy(int in , int out ) ;
extern ulg updcrc(uch *s , unsigned int n ) ;
extern void clear_bufs(void) ;
extern int fill_inbuf(int eof_ok ) ;
extern void flush_outbuf(void) ;
extern void flush_window(void) ;
extern void write_buf(int fd , voidp buf , unsigned int cnt ) ;
extern int read_buffer(int fd , voidp buf , unsigned int cnt ) ;
extern char *strlwr(char *s ) ;
extern char *gzip_base_name(char *fname ) ;
extern int xunlink(char *fname ) ;
extern void make_simple_name(char *name ) ;
extern char *add_envopt(int *argcp , char ***argvp , char *env ) ;
extern void gzip_error(char *m ) ;
extern  __attribute__((__noreturn__)) void xalloc_die(void) ;
extern void warning(char *m ) ;
extern void read_error(void) ;
extern void write_error(void) ;
extern void display_ratio(off_t num , off_t den , FILE *file ) ;
extern void fprint_off(FILE * , off_t  , int  ) ;
int inflate(void) ;
extern int yesno(void) ;
int huft_build(unsigned int *b , unsigned int n , unsigned int s , ush *d ,
               ush *e , struct huft **t , int *m ) ;
int huft_free(struct huft *t ) ;
int inflate_codes(struct huft *tl , struct huft *td , int bl , int bd ) ;
int inflate_stored(void) ;
int inflate_fixed(void) ;
int inflate_dynamic(void) ;
int inflate_block(int *e ) ;
static unsigned int border[19]  = 
  {      16U,      17U,      18U,      0U, 
        8U,      7U,      9U,      6U, 
        10U,      5U,      11U,      4U, 
        12U,      3U,      13U,      2U, 
        14U,      1U,      15U};
static ush cplens[31]  = 
  {      (ush )3,      (ush )4,      (ush )5,      (ush )6, 
        (ush )7,      (ush )8,      (ush )9,      (ush )10, 
        (ush )11,      (ush )13,      (ush )15,      (ush )17, 
        (ush )19,      (ush )23,      (ush )27,      (ush )31, 
        (ush )35,      (ush )43,      (ush )51,      (ush )59, 
        (ush )67,      (ush )83,      (ush )99,      (ush )115, 
        (ush )131,      (ush )163,      (ush )195,      (ush )227, 
        (ush )258,      (ush )0,      (ush )0};
static ush cplext[31]  = 
  {      (ush )0,      (ush )0,      (ush )0,      (ush )0, 
        (ush )0,      (ush )0,      (ush )0,      (ush )0, 
        (ush )1,      (ush )1,      (ush )1,      (ush )1, 
        (ush )2,      (ush )2,      (ush )2,      (ush )2, 
        (ush )3,      (ush )3,      (ush )3,      (ush )3, 
        (ush )4,      (ush )4,      (ush )4,      (ush )4, 
        (ush )5,      (ush )5,      (ush )5,      (ush )5, 
        (ush )0,      (ush )99,      (ush )99};
static ush cpdist[30]  = 
  {      (ush )1,      (ush )2,      (ush )3,      (ush )4, 
        (ush )5,      (ush )7,      (ush )9,      (ush )13, 
        (ush )17,      (ush )25,      (ush )33,      (ush )49, 
        (ush )65,      (ush )97,      (ush )129,      (ush )193, 
        (ush )257,      (ush )385,      (ush )513,      (ush )769, 
        (ush )1025,      (ush )1537,      (ush )2049,      (ush )3073, 
        (ush )4097,      (ush )6145,      (ush )8193,      (ush )12289, 
        (ush )16385,      (ush )24577};
static ush cpdext[30]  = 
  {      (ush )0,      (ush )0,      (ush )0,      (ush )0, 
        (ush )1,      (ush )1,      (ush )2,      (ush )2, 
        (ush )3,      (ush )3,      (ush )4,      (ush )4, 
        (ush )5,      (ush )5,      (ush )6,      (ush )6, 
        (ush )7,      (ush )7,      (ush )8,      (ush )8, 
        (ush )9,      (ush )9,      (ush )10,      (ush )10, 
        (ush )11,      (ush )11,      (ush )12,      (ush )12, 
        (ush )13,      (ush )13};
ulg bb  ;
unsigned int bk  ;
ush mask_bits[17]  = 
  {      (ush )0,      (ush )1,      (ush )3,      (ush )7, 
        (ush )15,      (ush )31,      (ush )63,      (ush )127, 
        (ush )255,      (ush )511,      (ush )1023,      (ush )2047, 
        (ush )4095,      (ush )8191,      (ush )16383,      (ush )32767, 
        (ush )65535};
int lbits  =    9;
int dbits  =    6;
unsigned int hufts  ;
int huft_build(unsigned int *b , unsigned int n , unsigned int s , ush *d ,
               ush *e , struct huft **t , int *m ) 
{ 
  unsigned int a ;
  unsigned int c[17] ;
  unsigned int f ;
  int g ;
  int h ;
  register unsigned int i ;
  register unsigned int j ;
  register int k ;
  int l ;
  register unsigned int *p ;
  register struct huft *q ;
  struct huft r ;
  struct huft *u[16] ;
  unsigned int v[288] ;
  register int w ;
  unsigned int x[17] ;
  unsigned int *xp ;
  int y ;
  unsigned int z ;
  void *tmp ;
  unsigned int *tmp___0 ;
  unsigned int *tmp___1 ;
  unsigned int tmp___2 ;
  unsigned int *tmp___3 ;
  void *tmp___4 ;
  int tmp___5 ;
  unsigned int *tmp___6 ;
  unsigned int tmp___7 ;
  int tmp___8 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "255\n");
  fflush(_coverage_fout);
  }
  memset((voidp )(c), 0, (size_t )sizeof(c));
  {
  fprintf(_coverage_fout, "256\n");
  fflush(_coverage_fout);
  }
  p = b;
  {
  fprintf(_coverage_fout, "257\n");
  fflush(_coverage_fout);
  }
  i = n;
  {
  fprintf(_coverage_fout, "258\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "259\n");
    fflush(_coverage_fout);
    }
    (c[*p]) ++;
    {
    fprintf(_coverage_fout, "260\n");
    fflush(_coverage_fout);
    }
    p ++;
    {
    fprintf(_coverage_fout, "261\n");
    fflush(_coverage_fout);
    }
    i --;
    {
    fprintf(_coverage_fout, "262\n");
    fflush(_coverage_fout);
    }
    if (i) {
      {
      fprintf(_coverage_fout, "263\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "264\n");
      fflush(_coverage_fout);
      }
      break;
    }
  }
  {
  fprintf(_coverage_fout, "265\n");
  fflush(_coverage_fout);
  }
  if (c[0] == n) {
    {
    fprintf(_coverage_fout, "266\n");
    fflush(_coverage_fout);
    }
    tmp = malloc((size_t )(2UL * sizeof(*q)));
    {
    fprintf(_coverage_fout, "267\n");
    fflush(_coverage_fout);
    }
    q = (struct huft *)tmp;
    {
    fprintf(_coverage_fout, "268\n");
    fflush(_coverage_fout);
    }
    if (! q) {
      {
      fprintf(_coverage_fout, "269\n");
      fflush(_coverage_fout);
      }
      return (3);
    } else {
      {
      fprintf(_coverage_fout, "270\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "271\n");
    fflush(_coverage_fout);
    }
    hufts += 2U;
    {
    fprintf(_coverage_fout, "272\n");
    fflush(_coverage_fout);
    }
    (q + 0)->v.t = (struct huft *)((void *)0);
    {
    fprintf(_coverage_fout, "273\n");
    fflush(_coverage_fout);
    }
    (q + 1)->e = (uch )99;
    {
    fprintf(_coverage_fout, "274\n");
    fflush(_coverage_fout);
    }
    (q + 1)->b = (uch )1;
    {
    fprintf(_coverage_fout, "275\n");
    fflush(_coverage_fout);
    }
    *t = q + 1;
    {
    fprintf(_coverage_fout, "276\n");
    fflush(_coverage_fout);
    }
    *m = 1;
    {
    fprintf(_coverage_fout, "277\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "278\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "279\n");
  fflush(_coverage_fout);
  }
  l = *m;
  {
  fprintf(_coverage_fout, "280\n");
  fflush(_coverage_fout);
  }
  j = 1U;
  {
  fprintf(_coverage_fout, "281\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "282\n");
    fflush(_coverage_fout);
    }
    if (j <= 16U) {
      {
      fprintf(_coverage_fout, "283\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "284\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "285\n");
    fflush(_coverage_fout);
    }
    if (c[j]) {
      {
      fprintf(_coverage_fout, "286\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "287\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "288\n");
    fflush(_coverage_fout);
    }
    j ++;
  }
  {
  fprintf(_coverage_fout, "289\n");
  fflush(_coverage_fout);
  }
  k = (int )j;
  {
  fprintf(_coverage_fout, "290\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )l < j) {
    {
    fprintf(_coverage_fout, "291\n");
    fflush(_coverage_fout);
    }
    l = (int )j;
  } else {
    {
    fprintf(_coverage_fout, "292\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "293\n");
  fflush(_coverage_fout);
  }
  i = 16U;
  {
  fprintf(_coverage_fout, "294\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "295\n");
    fflush(_coverage_fout);
    }
    if (i) {
      {
      fprintf(_coverage_fout, "296\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "297\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "298\n");
    fflush(_coverage_fout);
    }
    if (c[i]) {
      {
      fprintf(_coverage_fout, "299\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "300\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "301\n");
    fflush(_coverage_fout);
    }
    i --;
  }
  {
  fprintf(_coverage_fout, "302\n");
  fflush(_coverage_fout);
  }
  g = (int )i;
  {
  fprintf(_coverage_fout, "303\n");
  fflush(_coverage_fout);
  }
  if ((unsigned int )l > i) {
    {
    fprintf(_coverage_fout, "304\n");
    fflush(_coverage_fout);
    }
    l = (int )i;
  } else {
    {
    fprintf(_coverage_fout, "305\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "306\n");
  fflush(_coverage_fout);
  }
  *m = l;
  {
  fprintf(_coverage_fout, "307\n");
  fflush(_coverage_fout);
  }
  y = 1 << j;
  {
  fprintf(_coverage_fout, "308\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "309\n");
    fflush(_coverage_fout);
    }
    if (j < i) {
      {
      fprintf(_coverage_fout, "310\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "311\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "312\n");
    fflush(_coverage_fout);
    }
    y = (int )((unsigned int )y - c[j]);
    {
    fprintf(_coverage_fout, "313\n");
    fflush(_coverage_fout);
    }
    if (y < 0) {
      {
      fprintf(_coverage_fout, "314\n");
      fflush(_coverage_fout);
      }
      return (2);
    } else {
      {
      fprintf(_coverage_fout, "315\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "316\n");
    fflush(_coverage_fout);
    }
    j ++;
    {
    fprintf(_coverage_fout, "317\n");
    fflush(_coverage_fout);
    }
    y <<= 1;
  }
  {
  fprintf(_coverage_fout, "318\n");
  fflush(_coverage_fout);
  }
  y = (int )((unsigned int )y - c[i]);
  {
  fprintf(_coverage_fout, "319\n");
  fflush(_coverage_fout);
  }
  if (y < 0) {
    {
    fprintf(_coverage_fout, "320\n");
    fflush(_coverage_fout);
    }
    return (2);
  } else {
    {
    fprintf(_coverage_fout, "321\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "322\n");
  fflush(_coverage_fout);
  }
  c[i] += (unsigned int )y;
  {
  fprintf(_coverage_fout, "323\n");
  fflush(_coverage_fout);
  }
  j = 0U;
  {
  fprintf(_coverage_fout, "324\n");
  fflush(_coverage_fout);
  }
  x[1] = j;
  {
  fprintf(_coverage_fout, "325\n");
  fflush(_coverage_fout);
  }
  p = c + 1;
  {
  fprintf(_coverage_fout, "326\n");
  fflush(_coverage_fout);
  }
  xp = x + 2;
  {
  fprintf(_coverage_fout, "327\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "328\n");
    fflush(_coverage_fout);
    }
    i --;
    {
    fprintf(_coverage_fout, "329\n");
    fflush(_coverage_fout);
    }
    if (i) {
      {
      fprintf(_coverage_fout, "330\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "331\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "332\n");
    fflush(_coverage_fout);
    }
    tmp___0 = xp;
    {
    fprintf(_coverage_fout, "333\n");
    fflush(_coverage_fout);
    }
    xp ++;
    {
    fprintf(_coverage_fout, "334\n");
    fflush(_coverage_fout);
    }
    tmp___1 = p;
    {
    fprintf(_coverage_fout, "335\n");
    fflush(_coverage_fout);
    }
    p ++;
    {
    fprintf(_coverage_fout, "336\n");
    fflush(_coverage_fout);
    }
    j += *tmp___1;
    {
    fprintf(_coverage_fout, "337\n");
    fflush(_coverage_fout);
    }
    *tmp___0 = j;
  }
  {
  fprintf(_coverage_fout, "338\n");
  fflush(_coverage_fout);
  }
  p = b;
  {
  fprintf(_coverage_fout, "339\n");
  fflush(_coverage_fout);
  }
  i = 0U;
  {
  fprintf(_coverage_fout, "340\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "341\n");
    fflush(_coverage_fout);
    }
    tmp___3 = p;
    {
    fprintf(_coverage_fout, "342\n");
    fflush(_coverage_fout);
    }
    p ++;
    {
    fprintf(_coverage_fout, "343\n");
    fflush(_coverage_fout);
    }
    j = *tmp___3;
    {
    fprintf(_coverage_fout, "344\n");
    fflush(_coverage_fout);
    }
    if (j != 0U) {
      {
      fprintf(_coverage_fout, "345\n");
      fflush(_coverage_fout);
      }
      tmp___2 = x[j];
      {
      fprintf(_coverage_fout, "346\n");
      fflush(_coverage_fout);
      }
      (x[j]) ++;
      {
      fprintf(_coverage_fout, "347\n");
      fflush(_coverage_fout);
      }
      v[tmp___2] = i;
    } else {
      {
      fprintf(_coverage_fout, "348\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "349\n");
    fflush(_coverage_fout);
    }
    i ++;
    {
    fprintf(_coverage_fout, "350\n");
    fflush(_coverage_fout);
    }
    if (i < n) {
      {
      fprintf(_coverage_fout, "351\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "352\n");
      fflush(_coverage_fout);
      }
      break;
    }
  }
  {
  fprintf(_coverage_fout, "353\n");
  fflush(_coverage_fout);
  }
  n = x[g];
  {
  fprintf(_coverage_fout, "354\n");
  fflush(_coverage_fout);
  }
  i = 0U;
  {
  fprintf(_coverage_fout, "355\n");
  fflush(_coverage_fout);
  }
  x[0] = i;
  {
  fprintf(_coverage_fout, "356\n");
  fflush(_coverage_fout);
  }
  p = v;
  {
  fprintf(_coverage_fout, "357\n");
  fflush(_coverage_fout);
  }
  h = -1;
  {
  fprintf(_coverage_fout, "358\n");
  fflush(_coverage_fout);
  }
  w = - l;
  {
  fprintf(_coverage_fout, "359\n");
  fflush(_coverage_fout);
  }
  u[0] = (struct huft *)((void *)0);
  {
  fprintf(_coverage_fout, "360\n");
  fflush(_coverage_fout);
  }
  q = (struct huft *)((void *)0);
  {
  fprintf(_coverage_fout, "361\n");
  fflush(_coverage_fout);
  }
  z = 0U;
  {
  fprintf(_coverage_fout, "362\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "363\n");
    fflush(_coverage_fout);
    }
    if (k <= g) {
      {
      fprintf(_coverage_fout, "364\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "365\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "366\n");
    fflush(_coverage_fout);
    }
    a = c[k];
    {
    fprintf(_coverage_fout, "367\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "368\n");
      fflush(_coverage_fout);
      }
      tmp___7 = a;
      {
      fprintf(_coverage_fout, "369\n");
      fflush(_coverage_fout);
      }
      a --;
      {
      fprintf(_coverage_fout, "370\n");
      fflush(_coverage_fout);
      }
      if (tmp___7) {
        {
        fprintf(_coverage_fout, "371\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "372\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "373\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "374\n");
        fflush(_coverage_fout);
        }
        if (k > w + l) {
          {
          fprintf(_coverage_fout, "375\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "376\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "377\n");
        fflush(_coverage_fout);
        }
        h ++;
        {
        fprintf(_coverage_fout, "378\n");
        fflush(_coverage_fout);
        }
        w += l;
        {
        fprintf(_coverage_fout, "379\n");
        fflush(_coverage_fout);
        }
        z = (unsigned int )(g - w);
        {
        fprintf(_coverage_fout, "380\n");
        fflush(_coverage_fout);
        }
        if (z > (unsigned int )l) {
          {
          fprintf(_coverage_fout, "381\n");
          fflush(_coverage_fout);
          }
          z = (unsigned int )l;
        } else {
          {
          fprintf(_coverage_fout, "382\n");
          fflush(_coverage_fout);
          }
          z = z;
        }
        {
        fprintf(_coverage_fout, "383\n");
        fflush(_coverage_fout);
        }
        j = (unsigned int )(k - w);
        {
        fprintf(_coverage_fout, "384\n");
        fflush(_coverage_fout);
        }
        f = (unsigned int )(1 << j);
        {
        fprintf(_coverage_fout, "385\n");
        fflush(_coverage_fout);
        }
        if (f > a + 1U) {
          {
          fprintf(_coverage_fout, "386\n");
          fflush(_coverage_fout);
          }
          f -= a + 1U;
          {
          fprintf(_coverage_fout, "387\n");
          fflush(_coverage_fout);
          }
          xp = c + k;
          {
          fprintf(_coverage_fout, "388\n");
          fflush(_coverage_fout);
          }
          if (j < z) {
            {
            fprintf(_coverage_fout, "389\n");
            fflush(_coverage_fout);
            }
            while (1) {
              {
              fprintf(_coverage_fout, "390\n");
              fflush(_coverage_fout);
              }
              j ++;
              {
              fprintf(_coverage_fout, "391\n");
              fflush(_coverage_fout);
              }
              if (j < z) {
                {
                fprintf(_coverage_fout, "392\n");
                fflush(_coverage_fout);
                }

              } else {
                {
                fprintf(_coverage_fout, "393\n");
                fflush(_coverage_fout);
                }
                break;
              }
              {
              fprintf(_coverage_fout, "394\n");
              fflush(_coverage_fout);
              }
              f <<= 1;
              {
              fprintf(_coverage_fout, "395\n");
              fflush(_coverage_fout);
              }
              xp ++;
              {
              fprintf(_coverage_fout, "396\n");
              fflush(_coverage_fout);
              }
              if (f <= *xp) {
                {
                fprintf(_coverage_fout, "397\n");
                fflush(_coverage_fout);
                }
                break;
              } else {
                {
                fprintf(_coverage_fout, "398\n");
                fflush(_coverage_fout);
                }

              }
              {
              fprintf(_coverage_fout, "399\n");
              fflush(_coverage_fout);
              }
              f -= *xp;
            }
          } else {
            {
            fprintf(_coverage_fout, "400\n");
            fflush(_coverage_fout);
            }

          }
        } else {
          {
          fprintf(_coverage_fout, "401\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "402\n");
        fflush(_coverage_fout);
        }
        z = (unsigned int )(1 << j);
        {
        fprintf(_coverage_fout, "403\n");
        fflush(_coverage_fout);
        }
        tmp___4 = malloc((size_t )((unsigned long )(z + 1U) * sizeof(struct huft )));
        {
        fprintf(_coverage_fout, "404\n");
        fflush(_coverage_fout);
        }
        q = (struct huft *)tmp___4;
        {
        fprintf(_coverage_fout, "405\n");
        fflush(_coverage_fout);
        }
        if ((unsigned long )q == (unsigned long )((struct huft *)((void *)0))) {
          {
          fprintf(_coverage_fout, "406\n");
          fflush(_coverage_fout);
          }
          if (h) {
            {
            fprintf(_coverage_fout, "407\n");
            fflush(_coverage_fout);
            }
            huft_free(u[0]);
          } else {
            {
            fprintf(_coverage_fout, "408\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "409\n");
          fflush(_coverage_fout);
          }
          return (3);
        } else {
          {
          fprintf(_coverage_fout, "410\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "411\n");
        fflush(_coverage_fout);
        }
        hufts += z + 1U;
        {
        fprintf(_coverage_fout, "412\n");
        fflush(_coverage_fout);
        }
        *t = q + 1;
        {
        fprintf(_coverage_fout, "413\n");
        fflush(_coverage_fout);
        }
        t = & q->v.t;
        {
        fprintf(_coverage_fout, "414\n");
        fflush(_coverage_fout);
        }
        *t = (struct huft *)((void *)0);
        {
        fprintf(_coverage_fout, "415\n");
        fflush(_coverage_fout);
        }
        q ++;
        {
        fprintf(_coverage_fout, "416\n");
        fflush(_coverage_fout);
        }
        u[h] = q;
        {
        fprintf(_coverage_fout, "417\n");
        fflush(_coverage_fout);
        }
        if (h) {
          {
          fprintf(_coverage_fout, "418\n");
          fflush(_coverage_fout);
          }
          x[h] = i;
          {
          fprintf(_coverage_fout, "419\n");
          fflush(_coverage_fout);
          }
          r.b = (uch )l;
          {
          fprintf(_coverage_fout, "420\n");
          fflush(_coverage_fout);
          }
          r.e = (uch )(16U + j);
          {
          fprintf(_coverage_fout, "421\n");
          fflush(_coverage_fout);
          }
          r.v.t = q;
          {
          fprintf(_coverage_fout, "422\n");
          fflush(_coverage_fout);
          }
          j = i >> (w - l);
          {
          fprintf(_coverage_fout, "423\n");
          fflush(_coverage_fout);
          }
          *(u[h - 1] + j) = r;
        } else {
          {
          fprintf(_coverage_fout, "424\n");
          fflush(_coverage_fout);
          }

        }
      }
      {
      fprintf(_coverage_fout, "425\n");
      fflush(_coverage_fout);
      }
      r.b = (uch )(k - w);
      {
      fprintf(_coverage_fout, "426\n");
      fflush(_coverage_fout);
      }
      if ((unsigned long )p >= (unsigned long )(v + n)) {
        {
        fprintf(_coverage_fout, "427\n");
        fflush(_coverage_fout);
        }
        r.e = (uch )99;
      } else {
        {
        fprintf(_coverage_fout, "428\n");
        fflush(_coverage_fout);
        }
        if (*p < s) {
          {
          fprintf(_coverage_fout, "429\n");
          fflush(_coverage_fout);
          }
          if (*p < 256U) {
            {
            fprintf(_coverage_fout, "430\n");
            fflush(_coverage_fout);
            }
            tmp___5 = 16;
          } else {
            {
            fprintf(_coverage_fout, "431\n");
            fflush(_coverage_fout);
            }
            tmp___5 = 15;
          }
          {
          fprintf(_coverage_fout, "432\n");
          fflush(_coverage_fout);
          }
          r.e = (uch )tmp___5;
          {
          fprintf(_coverage_fout, "433\n");
          fflush(_coverage_fout);
          }
          r.v.n = (ush )*p;
          {
          fprintf(_coverage_fout, "434\n");
          fflush(_coverage_fout);
          }
          p ++;
        } else {
          {
          fprintf(_coverage_fout, "435\n");
          fflush(_coverage_fout);
          }
          r.e = (uch )*(e + (*p - s));
          {
          fprintf(_coverage_fout, "436\n");
          fflush(_coverage_fout);
          }
          tmp___6 = p;
          {
          fprintf(_coverage_fout, "437\n");
          fflush(_coverage_fout);
          }
          p ++;
          {
          fprintf(_coverage_fout, "438\n");
          fflush(_coverage_fout);
          }
          r.v.n = *(d + (*tmp___6 - s));
        }
      }
      {
      fprintf(_coverage_fout, "439\n");
      fflush(_coverage_fout);
      }
      f = (unsigned int )(1 << (k - w));
      {
      fprintf(_coverage_fout, "440\n");
      fflush(_coverage_fout);
      }
      j = i >> w;
      {
      fprintf(_coverage_fout, "441\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "442\n");
        fflush(_coverage_fout);
        }
        if (j < z) {
          {
          fprintf(_coverage_fout, "443\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "444\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "445\n");
        fflush(_coverage_fout);
        }
        *(q + j) = r;
        {
        fprintf(_coverage_fout, "446\n");
        fflush(_coverage_fout);
        }
        j += f;
      }
      {
      fprintf(_coverage_fout, "447\n");
      fflush(_coverage_fout);
      }
      j = (unsigned int )(1 << (k - 1));
      {
      fprintf(_coverage_fout, "448\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "449\n");
        fflush(_coverage_fout);
        }
        if (i & j) {
          {
          fprintf(_coverage_fout, "450\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "451\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "452\n");
        fflush(_coverage_fout);
        }
        i ^= j;
        {
        fprintf(_coverage_fout, "453\n");
        fflush(_coverage_fout);
        }
        j >>= 1;
      }
      {
      fprintf(_coverage_fout, "454\n");
      fflush(_coverage_fout);
      }
      i ^= j;
      {
      fprintf(_coverage_fout, "455\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "456\n");
        fflush(_coverage_fout);
        }
        if ((i & (unsigned int )((1 << w) - 1)) != x[h]) {
          {
          fprintf(_coverage_fout, "457\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "458\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "459\n");
        fflush(_coverage_fout);
        }
        h --;
        {
        fprintf(_coverage_fout, "460\n");
        fflush(_coverage_fout);
        }
        w -= l;
      }
    }
    {
    fprintf(_coverage_fout, "461\n");
    fflush(_coverage_fout);
    }
    k ++;
  }
  {
  fprintf(_coverage_fout, "462\n");
  fflush(_coverage_fout);
  }
  if (y != 0) {
    {
    fprintf(_coverage_fout, "463\n");
    fflush(_coverage_fout);
    }
    if (g != 1) {
      {
      fprintf(_coverage_fout, "464\n");
      fflush(_coverage_fout);
      }
      tmp___8 = 1;
    } else {
      {
      fprintf(_coverage_fout, "465\n");
      fflush(_coverage_fout);
      }
      tmp___8 = 0;
    }
  } else {
    {
    fprintf(_coverage_fout, "466\n");
    fflush(_coverage_fout);
    }
    tmp___8 = 0;
  }
  {
  fprintf(_coverage_fout, "467\n");
  fflush(_coverage_fout);
  }
  return (tmp___8);
}
}
int huft_free(struct huft *t ) 
{ 
  register struct huft *p ;
  register struct huft *q ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "468\n");
  fflush(_coverage_fout);
  }
  p = t;
  {
  fprintf(_coverage_fout, "469\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "470\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )p != (unsigned long )((struct huft *)((void *)0))) {
      {
      fprintf(_coverage_fout, "471\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "472\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "473\n");
    fflush(_coverage_fout);
    }
    p --;
    {
    fprintf(_coverage_fout, "474\n");
    fflush(_coverage_fout);
    }
    q = p->v.t;
    {
    fprintf(_coverage_fout, "475\n");
    fflush(_coverage_fout);
    }
    free((void *)((char *)p));
    {
    fprintf(_coverage_fout, "476\n");
    fflush(_coverage_fout);
    }
    p = q;
  }
  {
  fprintf(_coverage_fout, "477\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
int inflate_codes(struct huft *tl , struct huft *td , int bl , int bd ) 
{ 
  register unsigned int e ;
  unsigned int n ;
  unsigned int d ;
  unsigned int w ;
  struct huft *t ;
  unsigned int ml ;
  unsigned int md ;
  register ulg b ;
  register unsigned int k ;
  unsigned int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  unsigned int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  unsigned int tmp___5 ;
  unsigned int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  unsigned int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  unsigned int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  unsigned int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  unsigned int tmp___18 ;
  unsigned int tmp___19 ;
  unsigned int tmp___20 ;
  unsigned int tmp___21 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "478\n");
  fflush(_coverage_fout);
  }
  b = bb;
  {
  fprintf(_coverage_fout, "479\n");
  fflush(_coverage_fout);
  }
  k = bk;
  {
  fprintf(_coverage_fout, "480\n");
  fflush(_coverage_fout);
  }
  w = outcnt;
  {
  fprintf(_coverage_fout, "481\n");
  fflush(_coverage_fout);
  }
  ml = (unsigned int )mask_bits[bl];
  {
  fprintf(_coverage_fout, "482\n");
  fflush(_coverage_fout);
  }
  md = (unsigned int )mask_bits[bd];
  {
  fprintf(_coverage_fout, "483\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "484\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "485\n");
      fflush(_coverage_fout);
      }
      if (k < (unsigned int )bl) {
        {
        fprintf(_coverage_fout, "486\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "487\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "488\n");
      fflush(_coverage_fout);
      }
      if (inptr < insize) {
        {
        fprintf(_coverage_fout, "489\n");
        fflush(_coverage_fout);
        }
        tmp = inptr;
        {
        fprintf(_coverage_fout, "490\n");
        fflush(_coverage_fout);
        }
        inptr ++;
        {
        fprintf(_coverage_fout, "491\n");
        fflush(_coverage_fout);
        }
        tmp___1 = (int )inbuf[tmp];
      } else {
        {
        fprintf(_coverage_fout, "492\n");
        fflush(_coverage_fout);
        }
        outcnt = w;
        {
        fprintf(_coverage_fout, "493\n");
        fflush(_coverage_fout);
        }
        tmp___0 = fill_inbuf(0);
        {
        fprintf(_coverage_fout, "494\n");
        fflush(_coverage_fout);
        }
        tmp___1 = tmp___0;
      }
      {
      fprintf(_coverage_fout, "495\n");
      fflush(_coverage_fout);
      }
      b |= (ulg )((uch )tmp___1) << k;
      {
      fprintf(_coverage_fout, "496\n");
      fflush(_coverage_fout);
      }
      k += 8U;
    }
    {
    fprintf(_coverage_fout, "497\n");
    fflush(_coverage_fout);
    }
    t = tl + ((unsigned int )b & ml);
    {
    fprintf(_coverage_fout, "498\n");
    fflush(_coverage_fout);
    }
    e = (unsigned int )t->e;
    {
    fprintf(_coverage_fout, "499\n");
    fflush(_coverage_fout);
    }
    if (e > 16U) {
      {
      fprintf(_coverage_fout, "500\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "501\n");
        fflush(_coverage_fout);
        }
        if (e == 99U) {
          {
          fprintf(_coverage_fout, "502\n");
          fflush(_coverage_fout);
          }
          return (1);
        } else {
          {
          fprintf(_coverage_fout, "503\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "504\n");
        fflush(_coverage_fout);
        }
        b >>= (int )t->b;
        {
        fprintf(_coverage_fout, "505\n");
        fflush(_coverage_fout);
        }
        k -= (unsigned int )t->b;
        {
        fprintf(_coverage_fout, "506\n");
        fflush(_coverage_fout);
        }
        e -= 16U;
        {
        fprintf(_coverage_fout, "507\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "508\n");
          fflush(_coverage_fout);
          }
          if (k < e) {
            {
            fprintf(_coverage_fout, "509\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "510\n");
            fflush(_coverage_fout);
            }
            break;
          }
          {
          fprintf(_coverage_fout, "511\n");
          fflush(_coverage_fout);
          }
          if (inptr < insize) {
            {
            fprintf(_coverage_fout, "512\n");
            fflush(_coverage_fout);
            }
            tmp___2 = inptr;
            {
            fprintf(_coverage_fout, "513\n");
            fflush(_coverage_fout);
            }
            inptr ++;
            {
            fprintf(_coverage_fout, "514\n");
            fflush(_coverage_fout);
            }
            tmp___4 = (int )inbuf[tmp___2];
          } else {
            {
            fprintf(_coverage_fout, "515\n");
            fflush(_coverage_fout);
            }
            outcnt = w;
            {
            fprintf(_coverage_fout, "516\n");
            fflush(_coverage_fout);
            }
            tmp___3 = fill_inbuf(0);
            {
            fprintf(_coverage_fout, "517\n");
            fflush(_coverage_fout);
            }
            tmp___4 = tmp___3;
          }
          {
          fprintf(_coverage_fout, "518\n");
          fflush(_coverage_fout);
          }
          b |= (ulg )((uch )tmp___4) << k;
          {
          fprintf(_coverage_fout, "519\n");
          fflush(_coverage_fout);
          }
          k += 8U;
        }
        {
        fprintf(_coverage_fout, "520\n");
        fflush(_coverage_fout);
        }
        t = t->v.t + ((unsigned int )b & (unsigned int )mask_bits[e]);
        {
        fprintf(_coverage_fout, "521\n");
        fflush(_coverage_fout);
        }
        e = (unsigned int )t->e;
        {
        fprintf(_coverage_fout, "522\n");
        fflush(_coverage_fout);
        }
        if (e > 16U) {
          {
          fprintf(_coverage_fout, "523\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "524\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
    } else {
      {
      fprintf(_coverage_fout, "525\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "526\n");
    fflush(_coverage_fout);
    }
    b >>= (int )t->b;
    {
    fprintf(_coverage_fout, "527\n");
    fflush(_coverage_fout);
    }
    k -= (unsigned int )t->b;
    {
    fprintf(_coverage_fout, "528\n");
    fflush(_coverage_fout);
    }
    if (e == 16U) {
      {
      fprintf(_coverage_fout, "529\n");
      fflush(_coverage_fout);
      }
      tmp___5 = w;
      {
      fprintf(_coverage_fout, "530\n");
      fflush(_coverage_fout);
      }
      w ++;
      {
      fprintf(_coverage_fout, "531\n");
      fflush(_coverage_fout);
      }
      window[tmp___5] = (uch )t->v.n;
      {
      fprintf(_coverage_fout, "532\n");
      fflush(_coverage_fout);
      }
      if (w == 32768U) {
        {
        fprintf(_coverage_fout, "533\n");
        fflush(_coverage_fout);
        }
        outcnt = w;
        {
        fprintf(_coverage_fout, "534\n");
        fflush(_coverage_fout);
        }
        flush_window();
        {
        fprintf(_coverage_fout, "535\n");
        fflush(_coverage_fout);
        }
        w = 0U;
      } else {
        {
        fprintf(_coverage_fout, "536\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "537\n");
      fflush(_coverage_fout);
      }
      if (e == 15U) {
        {
        fprintf(_coverage_fout, "538\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "539\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "540\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "541\n");
        fflush(_coverage_fout);
        }
        if (k < e) {
          {
          fprintf(_coverage_fout, "542\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "543\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "544\n");
        fflush(_coverage_fout);
        }
        if (inptr < insize) {
          {
          fprintf(_coverage_fout, "545\n");
          fflush(_coverage_fout);
          }
          tmp___6 = inptr;
          {
          fprintf(_coverage_fout, "546\n");
          fflush(_coverage_fout);
          }
          inptr ++;
          {
          fprintf(_coverage_fout, "547\n");
          fflush(_coverage_fout);
          }
          tmp___8 = (int )inbuf[tmp___6];
        } else {
          {
          fprintf(_coverage_fout, "548\n");
          fflush(_coverage_fout);
          }
          outcnt = w;
          {
          fprintf(_coverage_fout, "549\n");
          fflush(_coverage_fout);
          }
          tmp___7 = fill_inbuf(0);
          {
          fprintf(_coverage_fout, "550\n");
          fflush(_coverage_fout);
          }
          tmp___8 = tmp___7;
        }
        {
        fprintf(_coverage_fout, "551\n");
        fflush(_coverage_fout);
        }
        b |= (ulg )((uch )tmp___8) << k;
        {
        fprintf(_coverage_fout, "552\n");
        fflush(_coverage_fout);
        }
        k += 8U;
      }
      {
      fprintf(_coverage_fout, "553\n");
      fflush(_coverage_fout);
      }
      n = (unsigned int )t->v.n + ((unsigned int )b & (unsigned int )mask_bits[e]);
      {
      fprintf(_coverage_fout, "554\n");
      fflush(_coverage_fout);
      }
      b >>= e;
      {
      fprintf(_coverage_fout, "555\n");
      fflush(_coverage_fout);
      }
      k -= e;
      {
      fprintf(_coverage_fout, "556\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "557\n");
        fflush(_coverage_fout);
        }
        if (k < (unsigned int )bd) {
          {
          fprintf(_coverage_fout, "558\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "559\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "560\n");
        fflush(_coverage_fout);
        }
        if (inptr < insize) {
          {
          fprintf(_coverage_fout, "561\n");
          fflush(_coverage_fout);
          }
          tmp___9 = inptr;
          {
          fprintf(_coverage_fout, "562\n");
          fflush(_coverage_fout);
          }
          inptr ++;
          {
          fprintf(_coverage_fout, "563\n");
          fflush(_coverage_fout);
          }
          tmp___11 = (int )inbuf[tmp___9];
        } else {
          {
          fprintf(_coverage_fout, "564\n");
          fflush(_coverage_fout);
          }
          outcnt = w;
          {
          fprintf(_coverage_fout, "565\n");
          fflush(_coverage_fout);
          }
          tmp___10 = fill_inbuf(0);
          {
          fprintf(_coverage_fout, "566\n");
          fflush(_coverage_fout);
          }
          tmp___11 = tmp___10;
        }
        {
        fprintf(_coverage_fout, "567\n");
        fflush(_coverage_fout);
        }
        b |= (ulg )((uch )tmp___11) << k;
        {
        fprintf(_coverage_fout, "568\n");
        fflush(_coverage_fout);
        }
        k += 8U;
      }
      {
      fprintf(_coverage_fout, "569\n");
      fflush(_coverage_fout);
      }
      t = td + ((unsigned int )b & md);
      {
      fprintf(_coverage_fout, "570\n");
      fflush(_coverage_fout);
      }
      e = (unsigned int )t->e;
      {
      fprintf(_coverage_fout, "571\n");
      fflush(_coverage_fout);
      }
      if (e > 16U) {
        {
        fprintf(_coverage_fout, "572\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "573\n");
          fflush(_coverage_fout);
          }
          if (e == 99U) {
            {
            fprintf(_coverage_fout, "574\n");
            fflush(_coverage_fout);
            }
            return (1);
          } else {
            {
            fprintf(_coverage_fout, "575\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "576\n");
          fflush(_coverage_fout);
          }
          b >>= (int )t->b;
          {
          fprintf(_coverage_fout, "577\n");
          fflush(_coverage_fout);
          }
          k -= (unsigned int )t->b;
          {
          fprintf(_coverage_fout, "578\n");
          fflush(_coverage_fout);
          }
          e -= 16U;
          {
          fprintf(_coverage_fout, "579\n");
          fflush(_coverage_fout);
          }
          while (1) {
            {
            fprintf(_coverage_fout, "580\n");
            fflush(_coverage_fout);
            }
            if (k < e) {
              {
              fprintf(_coverage_fout, "581\n");
              fflush(_coverage_fout);
              }

            } else {
              {
              fprintf(_coverage_fout, "582\n");
              fflush(_coverage_fout);
              }
              break;
            }
            {
            fprintf(_coverage_fout, "583\n");
            fflush(_coverage_fout);
            }
            if (inptr < insize) {
              {
              fprintf(_coverage_fout, "584\n");
              fflush(_coverage_fout);
              }
              tmp___12 = inptr;
              {
              fprintf(_coverage_fout, "585\n");
              fflush(_coverage_fout);
              }
              inptr ++;
              {
              fprintf(_coverage_fout, "586\n");
              fflush(_coverage_fout);
              }
              tmp___14 = (int )inbuf[tmp___12];
            } else {
              {
              fprintf(_coverage_fout, "587\n");
              fflush(_coverage_fout);
              }
              outcnt = w;
              {
              fprintf(_coverage_fout, "588\n");
              fflush(_coverage_fout);
              }
              tmp___13 = fill_inbuf(0);
              {
              fprintf(_coverage_fout, "589\n");
              fflush(_coverage_fout);
              }
              tmp___14 = tmp___13;
            }
            {
            fprintf(_coverage_fout, "590\n");
            fflush(_coverage_fout);
            }
            b |= (ulg )((uch )tmp___14) << k;
            {
            fprintf(_coverage_fout, "591\n");
            fflush(_coverage_fout);
            }
            k += 8U;
          }
          {
          fprintf(_coverage_fout, "592\n");
          fflush(_coverage_fout);
          }
          t = t->v.t + ((unsigned int )b & (unsigned int )mask_bits[e]);
          {
          fprintf(_coverage_fout, "593\n");
          fflush(_coverage_fout);
          }
          e = (unsigned int )t->e;
          {
          fprintf(_coverage_fout, "594\n");
          fflush(_coverage_fout);
          }
          if (e > 16U) {
            {
            fprintf(_coverage_fout, "595\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "596\n");
            fflush(_coverage_fout);
            }
            break;
          }
        }
      } else {
        {
        fprintf(_coverage_fout, "597\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "598\n");
      fflush(_coverage_fout);
      }
      b >>= (int )t->b;
      {
      fprintf(_coverage_fout, "599\n");
      fflush(_coverage_fout);
      }
      k -= (unsigned int )t->b;
      {
      fprintf(_coverage_fout, "600\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "601\n");
        fflush(_coverage_fout);
        }
        if (k < e) {
          {
          fprintf(_coverage_fout, "602\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "603\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "604\n");
        fflush(_coverage_fout);
        }
        if (inptr < insize) {
          {
          fprintf(_coverage_fout, "605\n");
          fflush(_coverage_fout);
          }
          tmp___15 = inptr;
          {
          fprintf(_coverage_fout, "606\n");
          fflush(_coverage_fout);
          }
          inptr ++;
          {
          fprintf(_coverage_fout, "607\n");
          fflush(_coverage_fout);
          }
          tmp___17 = (int )inbuf[tmp___15];
        } else {
          {
          fprintf(_coverage_fout, "608\n");
          fflush(_coverage_fout);
          }
          outcnt = w;
          {
          fprintf(_coverage_fout, "609\n");
          fflush(_coverage_fout);
          }
          tmp___16 = fill_inbuf(0);
          {
          fprintf(_coverage_fout, "610\n");
          fflush(_coverage_fout);
          }
          tmp___17 = tmp___16;
        }
        {
        fprintf(_coverage_fout, "611\n");
        fflush(_coverage_fout);
        }
        b |= (ulg )((uch )tmp___17) << k;
        {
        fprintf(_coverage_fout, "612\n");
        fflush(_coverage_fout);
        }
        k += 8U;
      }
      {
      fprintf(_coverage_fout, "613\n");
      fflush(_coverage_fout);
      }
      d = (w - (unsigned int )t->v.n) - ((unsigned int )b & (unsigned int )mask_bits[e]);
      {
      fprintf(_coverage_fout, "614\n");
      fflush(_coverage_fout);
      }
      b >>= e;
      {
      fprintf(_coverage_fout, "615\n");
      fflush(_coverage_fout);
      }
      k -= e;
      {
      fprintf(_coverage_fout, "616\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "617\n");
        fflush(_coverage_fout);
        }
        d &= 32767U;
        {
        fprintf(_coverage_fout, "618\n");
        fflush(_coverage_fout);
        }
        if (d > w) {
          {
          fprintf(_coverage_fout, "619\n");
          fflush(_coverage_fout);
          }
          tmp___19 = d;
        } else {
          {
          fprintf(_coverage_fout, "620\n");
          fflush(_coverage_fout);
          }
          tmp___19 = w;
        }
        {
        fprintf(_coverage_fout, "621\n");
        fflush(_coverage_fout);
        }
        e = 32768U - tmp___19;
        {
        fprintf(_coverage_fout, "622\n");
        fflush(_coverage_fout);
        }
        if (e > n) {
          {
          fprintf(_coverage_fout, "623\n");
          fflush(_coverage_fout);
          }
          e = n;
        } else {
          {
          fprintf(_coverage_fout, "624\n");
          fflush(_coverage_fout);
          }
          e = e;
        }
        {
        fprintf(_coverage_fout, "625\n");
        fflush(_coverage_fout);
        }
        n -= e;
        {
        fprintf(_coverage_fout, "626\n");
        fflush(_coverage_fout);
        }
        if (w - d >= e) {
          {
          fprintf(_coverage_fout, "627\n");
          fflush(_coverage_fout);
          }
          memcpy((void */* __restrict  */)(window + w),
                 (void const   */* __restrict  */)(window + d), e);
          {
          fprintf(_coverage_fout, "628\n");
          fflush(_coverage_fout);
          }
          w += e;
          {
          fprintf(_coverage_fout, "629\n");
          fflush(_coverage_fout);
          }
          d += e;
        } else {
          {
          fprintf(_coverage_fout, "630\n");
          fflush(_coverage_fout);
          }
          while (1) {
            {
            fprintf(_coverage_fout, "631\n");
            fflush(_coverage_fout);
            }
            tmp___20 = w;
            {
            fprintf(_coverage_fout, "632\n");
            fflush(_coverage_fout);
            }
            w ++;
            {
            fprintf(_coverage_fout, "633\n");
            fflush(_coverage_fout);
            }
            tmp___21 = d;
            {
            fprintf(_coverage_fout, "634\n");
            fflush(_coverage_fout);
            }
            d ++;
            {
            fprintf(_coverage_fout, "635\n");
            fflush(_coverage_fout);
            }
            window[tmp___20] = window[tmp___21];
            {
            fprintf(_coverage_fout, "636\n");
            fflush(_coverage_fout);
            }
            e --;
            {
            fprintf(_coverage_fout, "637\n");
            fflush(_coverage_fout);
            }
            if (e) {
              {
              fprintf(_coverage_fout, "638\n");
              fflush(_coverage_fout);
              }

            } else {
              {
              fprintf(_coverage_fout, "639\n");
              fflush(_coverage_fout);
              }
              break;
            }
          }
        }
        {
        fprintf(_coverage_fout, "640\n");
        fflush(_coverage_fout);
        }
        if (w == 32768U) {
          {
          fprintf(_coverage_fout, "641\n");
          fflush(_coverage_fout);
          }
          outcnt = w;
          {
          fprintf(_coverage_fout, "642\n");
          fflush(_coverage_fout);
          }
          flush_window();
          {
          fprintf(_coverage_fout, "643\n");
          fflush(_coverage_fout);
          }
          w = 0U;
        } else {
          {
          fprintf(_coverage_fout, "644\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "645\n");
        fflush(_coverage_fout);
        }
        if (n) {
          {
          fprintf(_coverage_fout, "646\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "647\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
    }
  }
  {
  fprintf(_coverage_fout, "648\n");
  fflush(_coverage_fout);
  }
  outcnt = w;
  {
  fprintf(_coverage_fout, "649\n");
  fflush(_coverage_fout);
  }
  bb = b;
  {
  fprintf(_coverage_fout, "650\n");
  fflush(_coverage_fout);
  }
  bk = k;
  {
  fprintf(_coverage_fout, "651\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
int inflate_stored(void) 
{ 
  unsigned int n ;
  unsigned int w ;
  register ulg b ;
  register unsigned int k ;
  unsigned int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  unsigned int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  unsigned int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  unsigned int tmp___8 ;
  unsigned int tmp___9 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "652\n");
  fflush(_coverage_fout);
  }
  b = bb;
  {
  fprintf(_coverage_fout, "653\n");
  fflush(_coverage_fout);
  }
  k = bk;
  {
  fprintf(_coverage_fout, "654\n");
  fflush(_coverage_fout);
  }
  w = outcnt;
  {
  fprintf(_coverage_fout, "655\n");
  fflush(_coverage_fout);
  }
  n = k & 7U;
  {
  fprintf(_coverage_fout, "656\n");
  fflush(_coverage_fout);
  }
  b >>= n;
  {
  fprintf(_coverage_fout, "657\n");
  fflush(_coverage_fout);
  }
  k -= n;
  {
  fprintf(_coverage_fout, "658\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "659\n");
    fflush(_coverage_fout);
    }
    if (k < 16U) {
      {
      fprintf(_coverage_fout, "660\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "661\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "662\n");
    fflush(_coverage_fout);
    }
    if (inptr < insize) {
      {
      fprintf(_coverage_fout, "663\n");
      fflush(_coverage_fout);
      }
      tmp = inptr;
      {
      fprintf(_coverage_fout, "664\n");
      fflush(_coverage_fout);
      }
      inptr ++;
      {
      fprintf(_coverage_fout, "665\n");
      fflush(_coverage_fout);
      }
      tmp___1 = (int )inbuf[tmp];
    } else {
      {
      fprintf(_coverage_fout, "666\n");
      fflush(_coverage_fout);
      }
      outcnt = w;
      {
      fprintf(_coverage_fout, "667\n");
      fflush(_coverage_fout);
      }
      tmp___0 = fill_inbuf(0);
      {
      fprintf(_coverage_fout, "668\n");
      fflush(_coverage_fout);
      }
      tmp___1 = tmp___0;
    }
    {
    fprintf(_coverage_fout, "669\n");
    fflush(_coverage_fout);
    }
    b |= (ulg )((uch )tmp___1) << k;
    {
    fprintf(_coverage_fout, "670\n");
    fflush(_coverage_fout);
    }
    k += 8U;
  }
  {
  fprintf(_coverage_fout, "671\n");
  fflush(_coverage_fout);
  }
  n = (unsigned int )b & 65535U;
  {
  fprintf(_coverage_fout, "672\n");
  fflush(_coverage_fout);
  }
  b >>= 16;
  {
  fprintf(_coverage_fout, "673\n");
  fflush(_coverage_fout);
  }
  k -= 16U;
  {
  fprintf(_coverage_fout, "674\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "675\n");
    fflush(_coverage_fout);
    }
    if (k < 16U) {
      {
      fprintf(_coverage_fout, "676\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "677\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "678\n");
    fflush(_coverage_fout);
    }
    if (inptr < insize) {
      {
      fprintf(_coverage_fout, "679\n");
      fflush(_coverage_fout);
      }
      tmp___2 = inptr;
      {
      fprintf(_coverage_fout, "680\n");
      fflush(_coverage_fout);
      }
      inptr ++;
      {
      fprintf(_coverage_fout, "681\n");
      fflush(_coverage_fout);
      }
      tmp___4 = (int )inbuf[tmp___2];
    } else {
      {
      fprintf(_coverage_fout, "682\n");
      fflush(_coverage_fout);
      }
      outcnt = w;
      {
      fprintf(_coverage_fout, "683\n");
      fflush(_coverage_fout);
      }
      tmp___3 = fill_inbuf(0);
      {
      fprintf(_coverage_fout, "684\n");
      fflush(_coverage_fout);
      }
      tmp___4 = tmp___3;
    }
    {
    fprintf(_coverage_fout, "685\n");
    fflush(_coverage_fout);
    }
    b |= (ulg )((uch )tmp___4) << k;
    {
    fprintf(_coverage_fout, "686\n");
    fflush(_coverage_fout);
    }
    k += 8U;
  }
  {
  fprintf(_coverage_fout, "687\n");
  fflush(_coverage_fout);
  }
  if (n != (unsigned int )(~ b & 65535UL)) {
    {
    fprintf(_coverage_fout, "688\n");
    fflush(_coverage_fout);
    }
    return (1);
  } else {
    {
    fprintf(_coverage_fout, "689\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "690\n");
  fflush(_coverage_fout);
  }
  b >>= 16;
  {
  fprintf(_coverage_fout, "691\n");
  fflush(_coverage_fout);
  }
  k -= 16U;
  {
  fprintf(_coverage_fout, "692\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "693\n");
    fflush(_coverage_fout);
    }
    tmp___9 = n;
    {
    fprintf(_coverage_fout, "694\n");
    fflush(_coverage_fout);
    }
    n --;
    {
    fprintf(_coverage_fout, "695\n");
    fflush(_coverage_fout);
    }
    if (tmp___9) {
      {
      fprintf(_coverage_fout, "696\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "697\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "698\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "699\n");
      fflush(_coverage_fout);
      }
      if (k < 8U) {
        {
        fprintf(_coverage_fout, "700\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "701\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "702\n");
      fflush(_coverage_fout);
      }
      if (inptr < insize) {
        {
        fprintf(_coverage_fout, "703\n");
        fflush(_coverage_fout);
        }
        tmp___5 = inptr;
        {
        fprintf(_coverage_fout, "704\n");
        fflush(_coverage_fout);
        }
        inptr ++;
        {
        fprintf(_coverage_fout, "705\n");
        fflush(_coverage_fout);
        }
        tmp___7 = (int )inbuf[tmp___5];
      } else {
        {
        fprintf(_coverage_fout, "706\n");
        fflush(_coverage_fout);
        }
        outcnt = w;
        {
        fprintf(_coverage_fout, "707\n");
        fflush(_coverage_fout);
        }
        tmp___6 = fill_inbuf(0);
        {
        fprintf(_coverage_fout, "708\n");
        fflush(_coverage_fout);
        }
        tmp___7 = tmp___6;
      }
      {
      fprintf(_coverage_fout, "709\n");
      fflush(_coverage_fout);
      }
      b |= (ulg )((uch )tmp___7) << k;
      {
      fprintf(_coverage_fout, "710\n");
      fflush(_coverage_fout);
      }
      k += 8U;
    }
    {
    fprintf(_coverage_fout, "711\n");
    fflush(_coverage_fout);
    }
    tmp___8 = w;
    {
    fprintf(_coverage_fout, "712\n");
    fflush(_coverage_fout);
    }
    w ++;
    {
    fprintf(_coverage_fout, "713\n");
    fflush(_coverage_fout);
    }
    window[tmp___8] = (uch )b;
    {
    fprintf(_coverage_fout, "714\n");
    fflush(_coverage_fout);
    }
    if (w == 32768U) {
      {
      fprintf(_coverage_fout, "715\n");
      fflush(_coverage_fout);
      }
      outcnt = w;
      {
      fprintf(_coverage_fout, "716\n");
      fflush(_coverage_fout);
      }
      flush_window();
      {
      fprintf(_coverage_fout, "717\n");
      fflush(_coverage_fout);
      }
      w = 0U;
    } else {
      {
      fprintf(_coverage_fout, "718\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "719\n");
    fflush(_coverage_fout);
    }
    b >>= 8;
    {
    fprintf(_coverage_fout, "720\n");
    fflush(_coverage_fout);
    }
    k -= 8U;
  }
  {
  fprintf(_coverage_fout, "721\n");
  fflush(_coverage_fout);
  }
  outcnt = w;
  {
  fprintf(_coverage_fout, "722\n");
  fflush(_coverage_fout);
  }
  bb = b;
  {
  fprintf(_coverage_fout, "723\n");
  fflush(_coverage_fout);
  }
  bk = k;
  {
  fprintf(_coverage_fout, "724\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
int inflate_fixed(void) 
{ 
  int i ;
  struct huft *tl ;
  struct huft *td ;
  int bl ;
  int bd ;
  unsigned int l[288] ;
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "725\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "726\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "727\n");
    fflush(_coverage_fout);
    }
    if (i < 144) {
      {
      fprintf(_coverage_fout, "728\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "729\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "730\n");
    fflush(_coverage_fout);
    }
    l[i] = 8U;
    {
    fprintf(_coverage_fout, "731\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "732\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "733\n");
    fflush(_coverage_fout);
    }
    if (i < 256) {
      {
      fprintf(_coverage_fout, "734\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "735\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "736\n");
    fflush(_coverage_fout);
    }
    l[i] = 9U;
    {
    fprintf(_coverage_fout, "737\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "738\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "739\n");
    fflush(_coverage_fout);
    }
    if (i < 280) {
      {
      fprintf(_coverage_fout, "740\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "741\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "742\n");
    fflush(_coverage_fout);
    }
    l[i] = 7U;
    {
    fprintf(_coverage_fout, "743\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "744\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "745\n");
    fflush(_coverage_fout);
    }
    if (i < 288) {
      {
      fprintf(_coverage_fout, "746\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "747\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "748\n");
    fflush(_coverage_fout);
    }
    l[i] = 8U;
    {
    fprintf(_coverage_fout, "749\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "750\n");
  fflush(_coverage_fout);
  }
  bl = 7;
  {
  fprintf(_coverage_fout, "751\n");
  fflush(_coverage_fout);
  }
  i = huft_build(l, 288U, 257U, cplens, cplext, & tl, & bl);
  {
  fprintf(_coverage_fout, "752\n");
  fflush(_coverage_fout);
  }
  if (i != 0) {
    {
    fprintf(_coverage_fout, "753\n");
    fflush(_coverage_fout);
    }
    return (i);
  } else {
    {
    fprintf(_coverage_fout, "754\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "755\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "756\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "757\n");
    fflush(_coverage_fout);
    }
    if (i < 30) {
      {
      fprintf(_coverage_fout, "758\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "759\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "760\n");
    fflush(_coverage_fout);
    }
    l[i] = 5U;
    {
    fprintf(_coverage_fout, "761\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "762\n");
  fflush(_coverage_fout);
  }
  bd = 5;
  {
  fprintf(_coverage_fout, "763\n");
  fflush(_coverage_fout);
  }
  i = huft_build(l, 30U, 0U, cpdist, cpdext, & td, & bd);
  {
  fprintf(_coverage_fout, "764\n");
  fflush(_coverage_fout);
  }
  if (i > 1) {
    {
    fprintf(_coverage_fout, "765\n");
    fflush(_coverage_fout);
    }
    huft_free(tl);
    {
    fprintf(_coverage_fout, "766\n");
    fflush(_coverage_fout);
    }
    return (i);
  } else {
    {
    fprintf(_coverage_fout, "767\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "768\n");
  fflush(_coverage_fout);
  }
  tmp = inflate_codes(tl, td, bl, bd);
  {
  fprintf(_coverage_fout, "769\n");
  fflush(_coverage_fout);
  }
  if (tmp) {
    {
    fprintf(_coverage_fout, "770\n");
    fflush(_coverage_fout);
    }
    return (1);
  } else {
    {
    fprintf(_coverage_fout, "771\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "772\n");
  fflush(_coverage_fout);
  }
  huft_free(tl);
  {
  fprintf(_coverage_fout, "773\n");
  fflush(_coverage_fout);
  }
  huft_free(td);
  {
  fprintf(_coverage_fout, "774\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
int inflate_dynamic(void) 
{ 
  int i ;
  unsigned int j ;
  unsigned int l ;
  unsigned int m ;
  unsigned int n ;
  unsigned int w ;
  struct huft *tl ;
  struct huft *td ;
  int bl ;
  int bd ;
  unsigned int nb ;
  unsigned int nl ;
  unsigned int nd ;
  unsigned int ll[316] ;
  register ulg b ;
  register unsigned int k ;
  unsigned int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  unsigned int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  unsigned int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  unsigned int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  unsigned int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  unsigned int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  unsigned int tmp___19 ;
  unsigned int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  unsigned int tmp___24 ;
  unsigned int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  unsigned int tmp___29 ;
  int tmp___30 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "775\n");
  fflush(_coverage_fout);
  }
  b = bb;
  {
  fprintf(_coverage_fout, "776\n");
  fflush(_coverage_fout);
  }
  k = bk;
  {
  fprintf(_coverage_fout, "777\n");
  fflush(_coverage_fout);
  }
  w = outcnt;
  {
  fprintf(_coverage_fout, "778\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "779\n");
    fflush(_coverage_fout);
    }
    if (k < 5U) {
      {
      fprintf(_coverage_fout, "780\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "781\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "782\n");
    fflush(_coverage_fout);
    }
    if (inptr < insize) {
      {
      fprintf(_coverage_fout, "783\n");
      fflush(_coverage_fout);
      }
      tmp = inptr;
      {
      fprintf(_coverage_fout, "784\n");
      fflush(_coverage_fout);
      }
      inptr ++;
      {
      fprintf(_coverage_fout, "785\n");
      fflush(_coverage_fout);
      }
      tmp___1 = (int )inbuf[tmp];
    } else {
      {
      fprintf(_coverage_fout, "786\n");
      fflush(_coverage_fout);
      }
      outcnt = w;
      {
      fprintf(_coverage_fout, "787\n");
      fflush(_coverage_fout);
      }
      tmp___0 = fill_inbuf(0);
      {
      fprintf(_coverage_fout, "788\n");
      fflush(_coverage_fout);
      }
      tmp___1 = tmp___0;
    }
    {
    fprintf(_coverage_fout, "789\n");
    fflush(_coverage_fout);
    }
    b |= (ulg )((uch )tmp___1) << k;
    {
    fprintf(_coverage_fout, "790\n");
    fflush(_coverage_fout);
    }
    k += 8U;
  }
  {
  fprintf(_coverage_fout, "791\n");
  fflush(_coverage_fout);
  }
  nl = 257U + ((unsigned int )b & 31U);
  {
  fprintf(_coverage_fout, "792\n");
  fflush(_coverage_fout);
  }
  b >>= 5;
  {
  fprintf(_coverage_fout, "793\n");
  fflush(_coverage_fout);
  }
  k -= 5U;
  {
  fprintf(_coverage_fout, "794\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "795\n");
    fflush(_coverage_fout);
    }
    if (k < 5U) {
      {
      fprintf(_coverage_fout, "796\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "797\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "798\n");
    fflush(_coverage_fout);
    }
    if (inptr < insize) {
      {
      fprintf(_coverage_fout, "799\n");
      fflush(_coverage_fout);
      }
      tmp___2 = inptr;
      {
      fprintf(_coverage_fout, "800\n");
      fflush(_coverage_fout);
      }
      inptr ++;
      {
      fprintf(_coverage_fout, "801\n");
      fflush(_coverage_fout);
      }
      tmp___4 = (int )inbuf[tmp___2];
    } else {
      {
      fprintf(_coverage_fout, "802\n");
      fflush(_coverage_fout);
      }
      outcnt = w;
      {
      fprintf(_coverage_fout, "803\n");
      fflush(_coverage_fout);
      }
      tmp___3 = fill_inbuf(0);
      {
      fprintf(_coverage_fout, "804\n");
      fflush(_coverage_fout);
      }
      tmp___4 = tmp___3;
    }
    {
    fprintf(_coverage_fout, "805\n");
    fflush(_coverage_fout);
    }
    b |= (ulg )((uch )tmp___4) << k;
    {
    fprintf(_coverage_fout, "806\n");
    fflush(_coverage_fout);
    }
    k += 8U;
  }
  {
  fprintf(_coverage_fout, "807\n");
  fflush(_coverage_fout);
  }
  nd = 1U + ((unsigned int )b & 31U);
  {
  fprintf(_coverage_fout, "808\n");
  fflush(_coverage_fout);
  }
  b >>= 5;
  {
  fprintf(_coverage_fout, "809\n");
  fflush(_coverage_fout);
  }
  k -= 5U;
  {
  fprintf(_coverage_fout, "810\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "811\n");
    fflush(_coverage_fout);
    }
    if (k < 4U) {
      {
      fprintf(_coverage_fout, "812\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "813\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "814\n");
    fflush(_coverage_fout);
    }
    if (inptr < insize) {
      {
      fprintf(_coverage_fout, "815\n");
      fflush(_coverage_fout);
      }
      tmp___5 = inptr;
      {
      fprintf(_coverage_fout, "816\n");
      fflush(_coverage_fout);
      }
      inptr ++;
      {
      fprintf(_coverage_fout, "817\n");
      fflush(_coverage_fout);
      }
      tmp___7 = (int )inbuf[tmp___5];
    } else {
      {
      fprintf(_coverage_fout, "818\n");
      fflush(_coverage_fout);
      }
      outcnt = w;
      {
      fprintf(_coverage_fout, "819\n");
      fflush(_coverage_fout);
      }
      tmp___6 = fill_inbuf(0);
      {
      fprintf(_coverage_fout, "820\n");
      fflush(_coverage_fout);
      }
      tmp___7 = tmp___6;
    }
    {
    fprintf(_coverage_fout, "821\n");
    fflush(_coverage_fout);
    }
    b |= (ulg )((uch )tmp___7) << k;
    {
    fprintf(_coverage_fout, "822\n");
    fflush(_coverage_fout);
    }
    k += 8U;
  }
  {
  fprintf(_coverage_fout, "823\n");
  fflush(_coverage_fout);
  }
  nb = 4U + ((unsigned int )b & 15U);
  {
  fprintf(_coverage_fout, "824\n");
  fflush(_coverage_fout);
  }
  b >>= 4;
  {
  fprintf(_coverage_fout, "825\n");
  fflush(_coverage_fout);
  }
  k -= 4U;
  {
  fprintf(_coverage_fout, "826\n");
  fflush(_coverage_fout);
  }
  if (nl > 286U) {
    {
    fprintf(_coverage_fout, "827\n");
    fflush(_coverage_fout);
    }
    return (1);
  } else {
    {
    fprintf(_coverage_fout, "828\n");
    fflush(_coverage_fout);
    }
    if (nd > 30U) {
      {
      fprintf(_coverage_fout, "829\n");
      fflush(_coverage_fout);
      }
      return (1);
    } else {
      {
      fprintf(_coverage_fout, "830\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "831\n");
  fflush(_coverage_fout);
  }
  j = 0U;
  {
  fprintf(_coverage_fout, "832\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "833\n");
    fflush(_coverage_fout);
    }
    if (j < nb) {
      {
      fprintf(_coverage_fout, "834\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "835\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "836\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "837\n");
      fflush(_coverage_fout);
      }
      if (k < 3U) {
        {
        fprintf(_coverage_fout, "838\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "839\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "840\n");
      fflush(_coverage_fout);
      }
      if (inptr < insize) {
        {
        fprintf(_coverage_fout, "841\n");
        fflush(_coverage_fout);
        }
        tmp___8 = inptr;
        {
        fprintf(_coverage_fout, "842\n");
        fflush(_coverage_fout);
        }
        inptr ++;
        {
        fprintf(_coverage_fout, "843\n");
        fflush(_coverage_fout);
        }
        tmp___10 = (int )inbuf[tmp___8];
      } else {
        {
        fprintf(_coverage_fout, "844\n");
        fflush(_coverage_fout);
        }
        outcnt = w;
        {
        fprintf(_coverage_fout, "845\n");
        fflush(_coverage_fout);
        }
        tmp___9 = fill_inbuf(0);
        {
        fprintf(_coverage_fout, "846\n");
        fflush(_coverage_fout);
        }
        tmp___10 = tmp___9;
      }
      {
      fprintf(_coverage_fout, "847\n");
      fflush(_coverage_fout);
      }
      b |= (ulg )((uch )tmp___10) << k;
      {
      fprintf(_coverage_fout, "848\n");
      fflush(_coverage_fout);
      }
      k += 8U;
    }
    {
    fprintf(_coverage_fout, "849\n");
    fflush(_coverage_fout);
    }
    ll[border[j]] = (unsigned int )b & 7U;
    {
    fprintf(_coverage_fout, "850\n");
    fflush(_coverage_fout);
    }
    b >>= 3;
    {
    fprintf(_coverage_fout, "851\n");
    fflush(_coverage_fout);
    }
    k -= 3U;
    {
    fprintf(_coverage_fout, "852\n");
    fflush(_coverage_fout);
    }
    j ++;
  }
  {
  fprintf(_coverage_fout, "853\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "854\n");
    fflush(_coverage_fout);
    }
    if (j < 19U) {
      {
      fprintf(_coverage_fout, "855\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "856\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "857\n");
    fflush(_coverage_fout);
    }
    ll[border[j]] = 0U;
    {
    fprintf(_coverage_fout, "858\n");
    fflush(_coverage_fout);
    }
    j ++;
  }
  {
  fprintf(_coverage_fout, "859\n");
  fflush(_coverage_fout);
  }
  bl = 7;
  {
  fprintf(_coverage_fout, "860\n");
  fflush(_coverage_fout);
  }
  i = huft_build(ll, 19U, 19U, (ush *)((void *)0), (ush *)((void *)0), & tl,
                 & bl);
  {
  fprintf(_coverage_fout, "861\n");
  fflush(_coverage_fout);
  }
  if (i != 0) {
    {
    fprintf(_coverage_fout, "862\n");
    fflush(_coverage_fout);
    }
    if (i == 1) {
      {
      fprintf(_coverage_fout, "863\n");
      fflush(_coverage_fout);
      }
      huft_free(tl);
    } else {
      {
      fprintf(_coverage_fout, "864\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "865\n");
    fflush(_coverage_fout);
    }
    return (i);
  } else {
    {
    fprintf(_coverage_fout, "866\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "867\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )tl == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "868\n");
    fflush(_coverage_fout);
    }
    return (2);
  } else {
    {
    fprintf(_coverage_fout, "869\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "870\n");
  fflush(_coverage_fout);
  }
  n = nl + nd;
  {
  fprintf(_coverage_fout, "871\n");
  fflush(_coverage_fout);
  }
  m = (unsigned int )mask_bits[bl];
  {
  fprintf(_coverage_fout, "872\n");
  fflush(_coverage_fout);
  }
  l = 0U;
  {
  fprintf(_coverage_fout, "873\n");
  fflush(_coverage_fout);
  }
  i = (int )l;
  {
  fprintf(_coverage_fout, "874\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "875\n");
    fflush(_coverage_fout);
    }
    if ((unsigned int )i < n) {
      {
      fprintf(_coverage_fout, "876\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "877\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "878\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "879\n");
      fflush(_coverage_fout);
      }
      if (k < (unsigned int )bl) {
        {
        fprintf(_coverage_fout, "880\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "881\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "882\n");
      fflush(_coverage_fout);
      }
      if (inptr < insize) {
        {
        fprintf(_coverage_fout, "883\n");
        fflush(_coverage_fout);
        }
        tmp___11 = inptr;
        {
        fprintf(_coverage_fout, "884\n");
        fflush(_coverage_fout);
        }
        inptr ++;
        {
        fprintf(_coverage_fout, "885\n");
        fflush(_coverage_fout);
        }
        tmp___13 = (int )inbuf[tmp___11];
      } else {
        {
        fprintf(_coverage_fout, "886\n");
        fflush(_coverage_fout);
        }
        outcnt = w;
        {
        fprintf(_coverage_fout, "887\n");
        fflush(_coverage_fout);
        }
        tmp___12 = fill_inbuf(0);
        {
        fprintf(_coverage_fout, "888\n");
        fflush(_coverage_fout);
        }
        tmp___13 = tmp___12;
      }
      {
      fprintf(_coverage_fout, "889\n");
      fflush(_coverage_fout);
      }
      b |= (ulg )((uch )tmp___13) << k;
      {
      fprintf(_coverage_fout, "890\n");
      fflush(_coverage_fout);
      }
      k += 8U;
    }
    {
    fprintf(_coverage_fout, "891\n");
    fflush(_coverage_fout);
    }
    td = tl + ((unsigned int )b & m);
    {
    fprintf(_coverage_fout, "892\n");
    fflush(_coverage_fout);
    }
    j = (unsigned int )td->b;
    {
    fprintf(_coverage_fout, "893\n");
    fflush(_coverage_fout);
    }
    b >>= j;
    {
    fprintf(_coverage_fout, "894\n");
    fflush(_coverage_fout);
    }
    k -= j;
    {
    fprintf(_coverage_fout, "895\n");
    fflush(_coverage_fout);
    }
    j = (unsigned int )td->v.n;
    {
    fprintf(_coverage_fout, "896\n");
    fflush(_coverage_fout);
    }
    if (j < 16U) {
      {
      fprintf(_coverage_fout, "897\n");
      fflush(_coverage_fout);
      }
      tmp___14 = i;
      {
      fprintf(_coverage_fout, "898\n");
      fflush(_coverage_fout);
      }
      i ++;
      {
      fprintf(_coverage_fout, "899\n");
      fflush(_coverage_fout);
      }
      l = j;
      {
      fprintf(_coverage_fout, "900\n");
      fflush(_coverage_fout);
      }
      ll[tmp___14] = l;
    } else {
      {
      fprintf(_coverage_fout, "901\n");
      fflush(_coverage_fout);
      }
      if (j == 16U) {
        {
        fprintf(_coverage_fout, "902\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "903\n");
          fflush(_coverage_fout);
          }
          if (k < 2U) {
            {
            fprintf(_coverage_fout, "904\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "905\n");
            fflush(_coverage_fout);
            }
            break;
          }
          {
          fprintf(_coverage_fout, "906\n");
          fflush(_coverage_fout);
          }
          if (inptr < insize) {
            {
            fprintf(_coverage_fout, "907\n");
            fflush(_coverage_fout);
            }
            tmp___15 = inptr;
            {
            fprintf(_coverage_fout, "908\n");
            fflush(_coverage_fout);
            }
            inptr ++;
            {
            fprintf(_coverage_fout, "909\n");
            fflush(_coverage_fout);
            }
            tmp___17 = (int )inbuf[tmp___15];
          } else {
            {
            fprintf(_coverage_fout, "910\n");
            fflush(_coverage_fout);
            }
            outcnt = w;
            {
            fprintf(_coverage_fout, "911\n");
            fflush(_coverage_fout);
            }
            tmp___16 = fill_inbuf(0);
            {
            fprintf(_coverage_fout, "912\n");
            fflush(_coverage_fout);
            }
            tmp___17 = tmp___16;
          }
          {
          fprintf(_coverage_fout, "913\n");
          fflush(_coverage_fout);
          }
          b |= (ulg )((uch )tmp___17) << k;
          {
          fprintf(_coverage_fout, "914\n");
          fflush(_coverage_fout);
          }
          k += 8U;
        }
        {
        fprintf(_coverage_fout, "915\n");
        fflush(_coverage_fout);
        }
        j = 3U + ((unsigned int )b & 3U);
        {
        fprintf(_coverage_fout, "916\n");
        fflush(_coverage_fout);
        }
        b >>= 2;
        {
        fprintf(_coverage_fout, "917\n");
        fflush(_coverage_fout);
        }
        k -= 2U;
        {
        fprintf(_coverage_fout, "918\n");
        fflush(_coverage_fout);
        }
        if ((unsigned int )i + j > n) {
          {
          fprintf(_coverage_fout, "919\n");
          fflush(_coverage_fout);
          }
          return (1);
        } else {
          {
          fprintf(_coverage_fout, "920\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "921\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "922\n");
          fflush(_coverage_fout);
          }
          tmp___19 = j;
          {
          fprintf(_coverage_fout, "923\n");
          fflush(_coverage_fout);
          }
          j --;
          {
          fprintf(_coverage_fout, "924\n");
          fflush(_coverage_fout);
          }
          if (tmp___19) {
            {
            fprintf(_coverage_fout, "925\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "926\n");
            fflush(_coverage_fout);
            }
            break;
          }
          {
          fprintf(_coverage_fout, "927\n");
          fflush(_coverage_fout);
          }
          tmp___18 = i;
          {
          fprintf(_coverage_fout, "928\n");
          fflush(_coverage_fout);
          }
          i ++;
          {
          fprintf(_coverage_fout, "929\n");
          fflush(_coverage_fout);
          }
          ll[tmp___18] = l;
        }
      } else {
        {
        fprintf(_coverage_fout, "930\n");
        fflush(_coverage_fout);
        }
        if (j == 17U) {
          {
          fprintf(_coverage_fout, "931\n");
          fflush(_coverage_fout);
          }
          while (1) {
            {
            fprintf(_coverage_fout, "932\n");
            fflush(_coverage_fout);
            }
            if (k < 3U) {
              {
              fprintf(_coverage_fout, "933\n");
              fflush(_coverage_fout);
              }

            } else {
              {
              fprintf(_coverage_fout, "934\n");
              fflush(_coverage_fout);
              }
              break;
            }
            {
            fprintf(_coverage_fout, "935\n");
            fflush(_coverage_fout);
            }
            if (inptr < insize) {
              {
              fprintf(_coverage_fout, "936\n");
              fflush(_coverage_fout);
              }
              tmp___20 = inptr;
              {
              fprintf(_coverage_fout, "937\n");
              fflush(_coverage_fout);
              }
              inptr ++;
              {
              fprintf(_coverage_fout, "938\n");
              fflush(_coverage_fout);
              }
              tmp___22 = (int )inbuf[tmp___20];
            } else {
              {
              fprintf(_coverage_fout, "939\n");
              fflush(_coverage_fout);
              }
              outcnt = w;
              {
              fprintf(_coverage_fout, "940\n");
              fflush(_coverage_fout);
              }
              tmp___21 = fill_inbuf(0);
              {
              fprintf(_coverage_fout, "941\n");
              fflush(_coverage_fout);
              }
              tmp___22 = tmp___21;
            }
            {
            fprintf(_coverage_fout, "942\n");
            fflush(_coverage_fout);
            }
            b |= (ulg )((uch )tmp___22) << k;
            {
            fprintf(_coverage_fout, "943\n");
            fflush(_coverage_fout);
            }
            k += 8U;
          }
          {
          fprintf(_coverage_fout, "944\n");
          fflush(_coverage_fout);
          }
          j = 3U + ((unsigned int )b & 7U);
          {
          fprintf(_coverage_fout, "945\n");
          fflush(_coverage_fout);
          }
          b >>= 3;
          {
          fprintf(_coverage_fout, "946\n");
          fflush(_coverage_fout);
          }
          k -= 3U;
          {
          fprintf(_coverage_fout, "947\n");
          fflush(_coverage_fout);
          }
          if ((unsigned int )i + j > n) {
            {
            fprintf(_coverage_fout, "948\n");
            fflush(_coverage_fout);
            }
            return (1);
          } else {
            {
            fprintf(_coverage_fout, "949\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "950\n");
          fflush(_coverage_fout);
          }
          while (1) {
            {
            fprintf(_coverage_fout, "951\n");
            fflush(_coverage_fout);
            }
            tmp___24 = j;
            {
            fprintf(_coverage_fout, "952\n");
            fflush(_coverage_fout);
            }
            j --;
            {
            fprintf(_coverage_fout, "953\n");
            fflush(_coverage_fout);
            }
            if (tmp___24) {
              {
              fprintf(_coverage_fout, "954\n");
              fflush(_coverage_fout);
              }

            } else {
              {
              fprintf(_coverage_fout, "955\n");
              fflush(_coverage_fout);
              }
              break;
            }
            {
            fprintf(_coverage_fout, "956\n");
            fflush(_coverage_fout);
            }
            tmp___23 = i;
            {
            fprintf(_coverage_fout, "957\n");
            fflush(_coverage_fout);
            }
            i ++;
            {
            fprintf(_coverage_fout, "958\n");
            fflush(_coverage_fout);
            }
            ll[tmp___23] = 0U;
          }
          {
          fprintf(_coverage_fout, "959\n");
          fflush(_coverage_fout);
          }
          l = 0U;
        } else {
          {
          fprintf(_coverage_fout, "960\n");
          fflush(_coverage_fout);
          }
          while (1) {
            {
            fprintf(_coverage_fout, "961\n");
            fflush(_coverage_fout);
            }
            if (k < 7U) {
              {
              fprintf(_coverage_fout, "962\n");
              fflush(_coverage_fout);
              }

            } else {
              {
              fprintf(_coverage_fout, "963\n");
              fflush(_coverage_fout);
              }
              break;
            }
            {
            fprintf(_coverage_fout, "964\n");
            fflush(_coverage_fout);
            }
            if (inptr < insize) {
              {
              fprintf(_coverage_fout, "965\n");
              fflush(_coverage_fout);
              }
              tmp___25 = inptr;
              {
              fprintf(_coverage_fout, "966\n");
              fflush(_coverage_fout);
              }
              inptr ++;
              {
              fprintf(_coverage_fout, "967\n");
              fflush(_coverage_fout);
              }
              tmp___27 = (int )inbuf[tmp___25];
            } else {
              {
              fprintf(_coverage_fout, "968\n");
              fflush(_coverage_fout);
              }
              outcnt = w;
              {
              fprintf(_coverage_fout, "969\n");
              fflush(_coverage_fout);
              }
              tmp___26 = fill_inbuf(0);
              {
              fprintf(_coverage_fout, "970\n");
              fflush(_coverage_fout);
              }
              tmp___27 = tmp___26;
            }
            {
            fprintf(_coverage_fout, "971\n");
            fflush(_coverage_fout);
            }
            b |= (ulg )((uch )tmp___27) << k;
            {
            fprintf(_coverage_fout, "972\n");
            fflush(_coverage_fout);
            }
            k += 8U;
          }
          {
          fprintf(_coverage_fout, "973\n");
          fflush(_coverage_fout);
          }
          j = 11U + ((unsigned int )b & 127U);
          {
          fprintf(_coverage_fout, "974\n");
          fflush(_coverage_fout);
          }
          b >>= 7;
          {
          fprintf(_coverage_fout, "975\n");
          fflush(_coverage_fout);
          }
          k -= 7U;
          {
          fprintf(_coverage_fout, "976\n");
          fflush(_coverage_fout);
          }
          if ((unsigned int )i + j > n) {
            {
            fprintf(_coverage_fout, "977\n");
            fflush(_coverage_fout);
            }
            return (1);
          } else {
            {
            fprintf(_coverage_fout, "978\n");
            fflush(_coverage_fout);
            }

          }
          {
          fprintf(_coverage_fout, "979\n");
          fflush(_coverage_fout);
          }
          while (1) {
            {
            fprintf(_coverage_fout, "980\n");
            fflush(_coverage_fout);
            }
            tmp___29 = j;
            {
            fprintf(_coverage_fout, "981\n");
            fflush(_coverage_fout);
            }
            j --;
            {
            fprintf(_coverage_fout, "982\n");
            fflush(_coverage_fout);
            }
            if (tmp___29) {
              {
              fprintf(_coverage_fout, "983\n");
              fflush(_coverage_fout);
              }

            } else {
              {
              fprintf(_coverage_fout, "984\n");
              fflush(_coverage_fout);
              }
              break;
            }
            {
            fprintf(_coverage_fout, "985\n");
            fflush(_coverage_fout);
            }
            tmp___28 = i;
            {
            fprintf(_coverage_fout, "986\n");
            fflush(_coverage_fout);
            }
            i ++;
            {
            fprintf(_coverage_fout, "987\n");
            fflush(_coverage_fout);
            }
            ll[tmp___28] = 0U;
          }
          {
          fprintf(_coverage_fout, "988\n");
          fflush(_coverage_fout);
          }
          l = 0U;
        }
      }
    }
  }
  {
  fprintf(_coverage_fout, "989\n");
  fflush(_coverage_fout);
  }
  huft_free(tl);
  {
  fprintf(_coverage_fout, "990\n");
  fflush(_coverage_fout);
  }
  bb = b;
  {
  fprintf(_coverage_fout, "991\n");
  fflush(_coverage_fout);
  }
  bk = k;
  {
  fprintf(_coverage_fout, "992\n");
  fflush(_coverage_fout);
  }
  bl = lbits;
  {
  fprintf(_coverage_fout, "993\n");
  fflush(_coverage_fout);
  }
  i = huft_build(ll, nl, 257U, cplens, cplext, & tl, & bl);
  {
  fprintf(_coverage_fout, "994\n");
  fflush(_coverage_fout);
  }
  if (i != 0) {
    {
    fprintf(_coverage_fout, "995\n");
    fflush(_coverage_fout);
    }
    if (i == 1) {
      {
      fprintf(_coverage_fout, "996\n");
      fflush(_coverage_fout);
      }
      huft_free(tl);
    } else {
      {
      fprintf(_coverage_fout, "997\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "998\n");
    fflush(_coverage_fout);
    }
    return (i);
  } else {
    {
    fprintf(_coverage_fout, "999\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1000\n");
  fflush(_coverage_fout);
  }
  bd = dbits;
  {
  fprintf(_coverage_fout, "1001\n");
  fflush(_coverage_fout);
  }
  i = huft_build(ll + nl, nd, 0U, cpdist, cpdext, & td, & bd);
  {
  fprintf(_coverage_fout, "1002\n");
  fflush(_coverage_fout);
  }
  if (i != 0) {
    {
    fprintf(_coverage_fout, "1003\n");
    fflush(_coverage_fout);
    }
    if (i == 1) {
      {
      fprintf(_coverage_fout, "1004\n");
      fflush(_coverage_fout);
      }
      huft_free(td);
    } else {
      {
      fprintf(_coverage_fout, "1005\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1006\n");
    fflush(_coverage_fout);
    }
    huft_free(tl);
    {
    fprintf(_coverage_fout, "1007\n");
    fflush(_coverage_fout);
    }
    return (i);
  } else {
    {
    fprintf(_coverage_fout, "1008\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1009\n");
  fflush(_coverage_fout);
  }
  tmp___30 = inflate_codes(tl, td, bl, bd);
  {
  fprintf(_coverage_fout, "1010\n");
  fflush(_coverage_fout);
  }
  if (tmp___30) {
    {
    fprintf(_coverage_fout, "1011\n");
    fflush(_coverage_fout);
    }
    return (1);
  } else {
    {
    fprintf(_coverage_fout, "1012\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1013\n");
  fflush(_coverage_fout);
  }
  huft_free(tl);
  {
  fprintf(_coverage_fout, "1014\n");
  fflush(_coverage_fout);
  }
  huft_free(td);
  {
  fprintf(_coverage_fout, "1015\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
int inflate_block(int *e ) 
{ 
  unsigned int t ;
  unsigned int w ;
  register ulg b ;
  register unsigned int k ;
  unsigned int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  unsigned int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1016\n");
  fflush(_coverage_fout);
  }
  b = bb;
  {
  fprintf(_coverage_fout, "1017\n");
  fflush(_coverage_fout);
  }
  k = bk;
  {
  fprintf(_coverage_fout, "1018\n");
  fflush(_coverage_fout);
  }
  w = outcnt;
  {
  fprintf(_coverage_fout, "1019\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1020\n");
    fflush(_coverage_fout);
    }
    if (k < 1U) {
      {
      fprintf(_coverage_fout, "1021\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1022\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1023\n");
    fflush(_coverage_fout);
    }
    if (inptr < insize) {
      {
      fprintf(_coverage_fout, "1024\n");
      fflush(_coverage_fout);
      }
      tmp = inptr;
      {
      fprintf(_coverage_fout, "1025\n");
      fflush(_coverage_fout);
      }
      inptr ++;
      {
      fprintf(_coverage_fout, "1026\n");
      fflush(_coverage_fout);
      }
      tmp___1 = (int )inbuf[tmp];
    } else {
      {
      fprintf(_coverage_fout, "1027\n");
      fflush(_coverage_fout);
      }
      outcnt = w;
      {
      fprintf(_coverage_fout, "1028\n");
      fflush(_coverage_fout);
      }
      tmp___0 = fill_inbuf(0);
      {
      fprintf(_coverage_fout, "1029\n");
      fflush(_coverage_fout);
      }
      tmp___1 = tmp___0;
    }
    {
    fprintf(_coverage_fout, "1030\n");
    fflush(_coverage_fout);
    }
    b |= (ulg )((uch )tmp___1) << k;
    {
    fprintf(_coverage_fout, "1031\n");
    fflush(_coverage_fout);
    }
    k += 8U;
  }
  {
  fprintf(_coverage_fout, "1032\n");
  fflush(_coverage_fout);
  }
  *e = (int )b & 1;
  {
  fprintf(_coverage_fout, "1033\n");
  fflush(_coverage_fout);
  }
  b >>= 1;
  {
  fprintf(_coverage_fout, "1034\n");
  fflush(_coverage_fout);
  }
  k --;
  {
  fprintf(_coverage_fout, "1035\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1036\n");
    fflush(_coverage_fout);
    }
    if (k < 2U) {
      {
      fprintf(_coverage_fout, "1037\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1038\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1039\n");
    fflush(_coverage_fout);
    }
    if (inptr < insize) {
      {
      fprintf(_coverage_fout, "1040\n");
      fflush(_coverage_fout);
      }
      tmp___2 = inptr;
      {
      fprintf(_coverage_fout, "1041\n");
      fflush(_coverage_fout);
      }
      inptr ++;
      {
      fprintf(_coverage_fout, "1042\n");
      fflush(_coverage_fout);
      }
      tmp___4 = (int )inbuf[tmp___2];
    } else {
      {
      fprintf(_coverage_fout, "1043\n");
      fflush(_coverage_fout);
      }
      outcnt = w;
      {
      fprintf(_coverage_fout, "1044\n");
      fflush(_coverage_fout);
      }
      tmp___3 = fill_inbuf(0);
      {
      fprintf(_coverage_fout, "1045\n");
      fflush(_coverage_fout);
      }
      tmp___4 = tmp___3;
    }
    {
    fprintf(_coverage_fout, "1046\n");
    fflush(_coverage_fout);
    }
    b |= (ulg )((uch )tmp___4) << k;
    {
    fprintf(_coverage_fout, "1047\n");
    fflush(_coverage_fout);
    }
    k += 8U;
  }
  {
  fprintf(_coverage_fout, "1048\n");
  fflush(_coverage_fout);
  }
  t = (unsigned int )b & 3U;
  {
  fprintf(_coverage_fout, "1049\n");
  fflush(_coverage_fout);
  }
  b >>= 2;
  {
  fprintf(_coverage_fout, "1050\n");
  fflush(_coverage_fout);
  }
  k -= 2U;
  {
  fprintf(_coverage_fout, "1051\n");
  fflush(_coverage_fout);
  }
  bb = b;
  {
  fprintf(_coverage_fout, "1052\n");
  fflush(_coverage_fout);
  }
  bk = k;
  {
  fprintf(_coverage_fout, "1053\n");
  fflush(_coverage_fout);
  }
  if (t == 2U) {
    {
    fprintf(_coverage_fout, "1054\n");
    fflush(_coverage_fout);
    }
    tmp___5 = inflate_dynamic();
    {
    fprintf(_coverage_fout, "1055\n");
    fflush(_coverage_fout);
    }
    return (tmp___5);
  } else {
    {
    fprintf(_coverage_fout, "1056\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1057\n");
  fflush(_coverage_fout);
  }
  if (t == 0U) {
    {
    fprintf(_coverage_fout, "1058\n");
    fflush(_coverage_fout);
    }
    tmp___6 = inflate_stored();
    {
    fprintf(_coverage_fout, "1059\n");
    fflush(_coverage_fout);
    }
    return (tmp___6);
  } else {
    {
    fprintf(_coverage_fout, "1060\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1061\n");
  fflush(_coverage_fout);
  }
  if (t == 1U) {
    {
    fprintf(_coverage_fout, "1062\n");
    fflush(_coverage_fout);
    }
    tmp___7 = inflate_fixed();
    {
    fprintf(_coverage_fout, "1063\n");
    fflush(_coverage_fout);
    }
    return (tmp___7);
  } else {
    {
    fprintf(_coverage_fout, "1064\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "1065\n");
  fflush(_coverage_fout);
  }
  return (2);
}
}
int inflate(void) 
{ 
  int e ;
  int r ;
  unsigned int h ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("./coverage/cov.tmp", "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1066\n");
  fflush(_coverage_fout);
  }
  outcnt = 0U;
  {
  fprintf(_coverage_fout, "1067\n");
  fflush(_coverage_fout);
  }
  bk = 0U;
  {
  fprintf(_coverage_fout, "1068\n");
  fflush(_coverage_fout);
  }
  bb = (ulg )0;
  {
  fprintf(_coverage_fout, "1069\n");
  fflush(_coverage_fout);
  }
  h = 0U;
  {
  fprintf(_coverage_fout, "1070\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1071\n");
    fflush(_coverage_fout);
    }
    hufts = 0U;
    {
    fprintf(_coverage_fout, "1072\n");
    fflush(_coverage_fout);
    }
    r = inflate_block(& e);
    {
    fprintf(_coverage_fout, "1073\n");
    fflush(_coverage_fout);
    }
    if (r != 0) {
      {
      fprintf(_coverage_fout, "1074\n");
      fflush(_coverage_fout);
      }
      return (r);
    } else {
      {
      fprintf(_coverage_fout, "1075\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1076\n");
    fflush(_coverage_fout);
    }
    if (hufts > h) {
      {
      fprintf(_coverage_fout, "1077\n");
      fflush(_coverage_fout);
      }
      h = hufts;
    } else {
      {
      fprintf(_coverage_fout, "1078\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "1079\n");
    fflush(_coverage_fout);
    }
    if (! e) {
      {
      fprintf(_coverage_fout, "1080\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1081\n");
      fflush(_coverage_fout);
      }
      break;
    }
  }
  {
  fprintf(_coverage_fout, "1082\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "1083\n");
    fflush(_coverage_fout);
    }
    if (bk >= 8U) {
      {
      fprintf(_coverage_fout, "1084\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "1085\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "1086\n");
    fflush(_coverage_fout);
    }
    bk -= 8U;
    {
    fprintf(_coverage_fout, "1087\n");
    fflush(_coverage_fout);
    }
    inptr --;
  }
  {
  fprintf(_coverage_fout, "1088\n");
  fflush(_coverage_fout);
  }
  outcnt = outcnt;
  {
  fprintf(_coverage_fout, "1089\n");
  fflush(_coverage_fout);
  }
  flush_window();
  {
  fprintf(_coverage_fout, "1090\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
