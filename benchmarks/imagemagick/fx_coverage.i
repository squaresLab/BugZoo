#line 5727 "magick/fx.c"
void *_coverage_fout ;
#line 43 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 105 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h"
typedef __gnuc_va_list va_list;
#line 214 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h"
typedef unsigned long size_t;
#line 34 "/usr/include/bits/types.h"
typedef unsigned char __u_char;
#line 35 "/usr/include/bits/types.h"
typedef unsigned short __u_short;
#line 36 "/usr/include/bits/types.h"
typedef unsigned int __u_int;
#line 37 "/usr/include/bits/types.h"
typedef unsigned long __u_long;
#line 40 "/usr/include/bits/types.h"
typedef signed char __int8_t;
#line 41 "/usr/include/bits/types.h"
typedef unsigned char __uint8_t;
#line 42 "/usr/include/bits/types.h"
typedef short __int16_t;
#line 43 "/usr/include/bits/types.h"
typedef unsigned short __uint16_t;
#line 44 "/usr/include/bits/types.h"
typedef int __int32_t;
#line 45 "/usr/include/bits/types.h"
typedef unsigned int __uint32_t;
#line 47 "/usr/include/bits/types.h"
typedef long __int64_t;
#line 48 "/usr/include/bits/types.h"
typedef unsigned long __uint64_t;
#line 56 "/usr/include/bits/types.h"
typedef long __quad_t;
#line 57 "/usr/include/bits/types.h"
typedef unsigned long __u_quad_t;
#line 137 "/usr/include/bits/types.h"
typedef unsigned long __dev_t;
#line 138 "/usr/include/bits/types.h"
typedef unsigned int __uid_t;
#line 139 "/usr/include/bits/types.h"
typedef unsigned int __gid_t;
#line 140 "/usr/include/bits/types.h"
typedef unsigned long __ino_t;
#line 141 "/usr/include/bits/types.h"
typedef unsigned long __ino64_t;
#line 142 "/usr/include/bits/types.h"
typedef unsigned int __mode_t;
#line 143 "/usr/include/bits/types.h"
typedef unsigned long __nlink_t;
#line 144 "/usr/include/bits/types.h"
typedef long __off_t;
#line 145 "/usr/include/bits/types.h"
typedef long __off64_t;
#line 146 "/usr/include/bits/types.h"
typedef int __pid_t;
#line 147 "/usr/include/bits/types.h"
struct __anonstruct___fsid_t_1 {
   int __val[2] ;
};
#line 147 "/usr/include/bits/types.h"
typedef struct __anonstruct___fsid_t_1 __fsid_t;
#line 148 "/usr/include/bits/types.h"
typedef long __clock_t;
#line 149 "/usr/include/bits/types.h"
typedef unsigned long __rlim_t;
#line 150 "/usr/include/bits/types.h"
typedef unsigned long __rlim64_t;
#line 151 "/usr/include/bits/types.h"
typedef unsigned int __id_t;
#line 152 "/usr/include/bits/types.h"
typedef long __time_t;
#line 153 "/usr/include/bits/types.h"
typedef unsigned int __useconds_t;
#line 154 "/usr/include/bits/types.h"
typedef long __suseconds_t;
#line 156 "/usr/include/bits/types.h"
typedef int __daddr_t;
#line 157 "/usr/include/bits/types.h"
typedef long __swblk_t;
#line 158 "/usr/include/bits/types.h"
typedef int __key_t;
#line 161 "/usr/include/bits/types.h"
typedef int __clockid_t;
#line 164 "/usr/include/bits/types.h"
typedef void *__timer_t;
#line 167 "/usr/include/bits/types.h"
typedef long __blksize_t;
#line 172 "/usr/include/bits/types.h"
typedef long __blkcnt_t;
#line 173 "/usr/include/bits/types.h"
typedef long __blkcnt64_t;
#line 176 "/usr/include/bits/types.h"
typedef unsigned long __fsblkcnt_t;
#line 177 "/usr/include/bits/types.h"
typedef unsigned long __fsblkcnt64_t;
#line 180 "/usr/include/bits/types.h"
typedef unsigned long __fsfilcnt_t;
#line 181 "/usr/include/bits/types.h"
typedef unsigned long __fsfilcnt64_t;
#line 183 "/usr/include/bits/types.h"
typedef long __ssize_t;
#line 187 "/usr/include/bits/types.h"
typedef __off64_t __loff_t;
#line 188 "/usr/include/bits/types.h"
typedef __quad_t *__qaddr_t;
#line 189 "/usr/include/bits/types.h"
typedef char *__caddr_t;
#line 192 "/usr/include/bits/types.h"
typedef long __intptr_t;
#line 195 "/usr/include/bits/types.h"
typedef unsigned int __socklen_t;
#line 46 "/usr/include/stdio.h"
struct _IO_FILE;
#line 46 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 62 "/usr/include/stdio.h"
typedef struct _IO_FILE __FILE;
#line 326 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h"
typedef int wchar_t;
#line 355 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h"
typedef unsigned int wint_t;
#line 76 "/usr/include/wchar.h"
union __anonunion___value_3 {
   wint_t __wch ;
   char __wchb[4] ;
};
#line 76 "/usr/include/wchar.h"
struct __anonstruct___mbstate_t_2 {
   int __count ;
   union __anonunion___value_3 __value ;
};
#line 76 "/usr/include/wchar.h"
typedef struct __anonstruct___mbstate_t_2 __mbstate_t;
#line 26 "/usr/include/_G_config.h"
struct __anonstruct__G_fpos_t_4 {
   __off_t __pos ;
   __mbstate_t __state ;
};
#line 26 "/usr/include/_G_config.h"
typedef struct __anonstruct__G_fpos_t_4 _G_fpos_t;
#line 31 "/usr/include/_G_config.h"
struct __anonstruct__G_fpos64_t_5 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
#line 31 "/usr/include/_G_config.h"
typedef struct __anonstruct__G_fpos64_t_5 _G_fpos64_t;
#line 37 "/usr/include/gconv.h"
enum __anonenum_6 {
    __GCONV_OK = 0,
    __GCONV_NOCONV = 1,
    __GCONV_NODB = 2,
    __GCONV_NOMEM = 3,
    __GCONV_EMPTY_INPUT = 4,
    __GCONV_FULL_OUTPUT = 5,
    __GCONV_ILLEGAL_INPUT = 6,
    __GCONV_INCOMPLETE_INPUT = 7,
    __GCONV_ILLEGAL_DESCRIPTOR = 8,
    __GCONV_INTERNAL_ERROR = 9
} ;
#line 55
enum __anonenum_7 {
    __GCONV_IS_LAST = 1,
    __GCONV_IGNORE_ERRORS = 2
} ;
#line 63
struct __gconv_step;
#line 63
struct __gconv_step;
#line 64
struct __gconv_step_data;
#line 64
struct __gconv_step_data;
#line 65
struct __gconv_loaded_object;
#line 65
struct __gconv_loaded_object;
#line 66
struct __gconv_trans_data;
#line 66
struct __gconv_trans_data;
#line 70 "/usr/include/gconv.h"
typedef int (*__gconv_fct)(struct __gconv_step * , struct __gconv_step_data * ,
                           unsigned char const   ** , unsigned char const   * ,
                           unsigned char ** , size_t * , int  , int  );
#line 75 "/usr/include/gconv.h"
typedef wint_t (*__gconv_btowc_fct)(struct __gconv_step * , unsigned char  );
#line 78 "/usr/include/gconv.h"
typedef int (*__gconv_init_fct)(struct __gconv_step * );
#line 79 "/usr/include/gconv.h"
typedef void (*__gconv_end_fct)(struct __gconv_step * );
#line 83 "/usr/include/gconv.h"
typedef int (*__gconv_trans_fct)(struct __gconv_step * ,
                                 struct __gconv_step_data * , void * ,
                                 unsigned char const   * ,
                                 unsigned char const   ** ,
                                 unsigned char const   * , unsigned char ** ,
                                 size_t * );
#line 91 "/usr/include/gconv.h"
typedef int (*__gconv_trans_context_fct)(void * , unsigned char const   * ,
                                         unsigned char const   * ,
                                         unsigned char * , unsigned char * );
#line 96 "/usr/include/gconv.h"
typedef int (*__gconv_trans_query_fct)(char const   * , char const   *** ,
                                       size_t * );
#line 100 "/usr/include/gconv.h"
typedef int (*__gconv_trans_init_fct)(void ** , char const   * );
#line 101 "/usr/include/gconv.h"
typedef void (*__gconv_trans_end_fct)(void * );
#line 103 "/usr/include/gconv.h"
struct __gconv_trans_data {
   int (*__trans_fct)(struct __gconv_step * , struct __gconv_step_data * ,
                      void * , unsigned char const   * ,
                      unsigned char const   ** , unsigned char const   * ,
                      unsigned char ** , size_t * ) ;
   int (*__trans_context_fct)(void * , unsigned char const   * ,
                              unsigned char const   * , unsigned char * ,
                              unsigned char * ) ;
   void (*__trans_end_fct)(void * ) ;
   void *__data ;
   struct __gconv_trans_data *__next ;
};
#line 115 "/usr/include/gconv.h"
struct __gconv_step {
   struct __gconv_loaded_object *__shlib_handle ;
   char const   *__modname ;
   int __counter ;
   char *__from_name ;
   char *__to_name ;
   int (*__fct)(struct __gconv_step * , struct __gconv_step_data * ,
                unsigned char const   ** , unsigned char const   * ,
                unsigned char ** , size_t * , int  , int  ) ;
   wint_t (*__btowc_fct)(struct __gconv_step * , unsigned char  ) ;
   int (*__init_fct)(struct __gconv_step * ) ;
   void (*__end_fct)(struct __gconv_step * ) ;
   int __min_needed_from ;
   int __max_needed_from ;
   int __min_needed_to ;
   int __max_needed_to ;
   int __stateful ;
   void *__data ;
};
#line 145 "/usr/include/gconv.h"
struct __gconv_step_data {
   unsigned char *__outbuf ;
   unsigned char *__outbufend ;
   int __flags ;
   int __invocation_counter ;
   int __internal_use ;
   __mbstate_t *__statep ;
   __mbstate_t __state ;
   struct __gconv_trans_data *__trans ;
};
#line 172 "/usr/include/gconv.h"
struct __gconv_info {
   size_t __nsteps ;
   struct __gconv_step *__steps ;
   struct __gconv_step_data __data[] ;
};
#line 172 "/usr/include/gconv.h"
typedef struct __gconv_info *__gconv_t;
#line 45 "/usr/include/_G_config.h"
struct __anonstruct___combined_9 {
   struct __gconv_info __cd ;
   struct __gconv_step_data __data ;
};
#line 45 "/usr/include/_G_config.h"
union __anonunion__G_iconv_t_8 {
   struct __gconv_info __cd ;
   struct __anonstruct___combined_9 __combined ;
};
#line 45 "/usr/include/_G_config.h"
typedef union __anonunion__G_iconv_t_8 _G_iconv_t;
#line 55 "/usr/include/_G_config.h"
typedef short _G_int16_t;
#line 56 "/usr/include/_G_config.h"
typedef int _G_int32_t;
#line 57 "/usr/include/_G_config.h"
typedef unsigned short _G_uint16_t;
#line 58 "/usr/include/_G_config.h"
typedef unsigned int _G_uint32_t;
#line 167 "/usr/include/libio.h"
struct _IO_jump_t;
#line 167
struct _IO_jump_t;
#line 167
struct _IO_FILE;
#line 177 "/usr/include/libio.h"
typedef void _IO_lock_t;
#line 183 "/usr/include/libio.h"
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
#line 203
enum __codecvt_result {
    __codecvt_ok = 0,
    __codecvt_partial = 1,
    __codecvt_error = 2,
    __codecvt_noconv = 3
} ;
#line 268 "/usr/include/libio.h"
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
#line 338 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE;
#line 341
struct _IO_FILE_plus;
#line 341
struct _IO_FILE_plus;
#line 361 "/usr/include/libio.h"
typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );
#line 369 "/usr/include/libio.h"
typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf ,
                                size_t __n );
#line 378 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );
#line 381 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie );
#line 386 "/usr/include/libio.h"
typedef __io_read_fn cookie_read_function_t;
#line 387 "/usr/include/libio.h"
typedef __io_write_fn cookie_write_function_t;
#line 388 "/usr/include/libio.h"
typedef __io_seek_fn cookie_seek_function_t;
#line 389 "/usr/include/libio.h"
typedef __io_close_fn cookie_close_function_t;
#line 392 "/usr/include/libio.h"
struct __anonstruct__IO_cookie_io_functions_t_10 {
   __io_read_fn *read ;
   __io_write_fn *write ;
   __io_seek_fn *seek ;
   __io_close_fn *close ;
};
#line 392 "/usr/include/libio.h"
typedef struct __anonstruct__IO_cookie_io_functions_t_10 _IO_cookie_io_functions_t;
#line 399 "/usr/include/libio.h"
typedef _IO_cookie_io_functions_t cookie_io_functions_t;
#line 401
struct _IO_cookie_file;
#line 401
struct _IO_cookie_file;
#line 90 "/usr/include/stdio.h"
typedef _G_fpos64_t fpos_t;
#line 94 "/usr/include/stdio.h"
typedef _G_fpos64_t fpos64_t;
#line 797
struct obstack;
#line 797
struct obstack;
#line 67 "/usr/include/bits/waitstatus.h"
struct __anonstruct___wait_terminated_11 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};
#line 67 "/usr/include/bits/waitstatus.h"
struct __anonstruct___wait_stopped_12 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};
#line 67 "/usr/include/bits/waitstatus.h"
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_11 __wait_terminated ;
   struct __anonstruct___wait_stopped_12 __wait_stopped ;
};
#line 68 "/usr/include/stdlib.h"
union __anonunion___WAIT_STATUS_13 {
   union wait *__uptr ;
   int *__iptr ;
};
#line 68 "/usr/include/stdlib.h"
typedef union __anonunion___WAIT_STATUS_13  __attribute__((__transparent_union__)) __WAIT_STATUS;
#line 98 "/usr/include/stdlib.h"
struct __anonstruct_div_t_14 {
   int quot ;
   int rem ;
};
#line 98 "/usr/include/stdlib.h"
typedef struct __anonstruct_div_t_14 div_t;
#line 106 "/usr/include/stdlib.h"
struct __anonstruct_ldiv_t_15 {
   long quot ;
   long rem ;
};
#line 106 "/usr/include/stdlib.h"
typedef struct __anonstruct_ldiv_t_15 ldiv_t;
#line 118 "/usr/include/stdlib.h"
struct __anonstruct_lldiv_t_16 {
   long long quot ;
   long long rem ;
};
#line 118 "/usr/include/stdlib.h"
typedef struct __anonstruct_lldiv_t_16 lldiv_t;
#line 28 "/usr/include/xlocale.h"
struct locale_data;
#line 28 "/usr/include/xlocale.h"
struct __locale_struct {
   struct locale_data *__locales[13] ;
   unsigned short const   *__ctype_b ;
   int const   *__ctype_tolower ;
   int const   *__ctype_toupper ;
   char const   *__names[13] ;
};
#line 28 "/usr/include/xlocale.h"
typedef struct __locale_struct *__locale_t;
#line 35 "/usr/include/sys/types.h"
typedef __u_char u_char;
#line 36 "/usr/include/sys/types.h"
typedef __u_short u_short;
#line 37 "/usr/include/sys/types.h"
typedef __u_int u_int;
#line 38 "/usr/include/sys/types.h"
typedef __u_long u_long;
#line 39 "/usr/include/sys/types.h"
typedef __quad_t quad_t;
#line 40 "/usr/include/sys/types.h"
typedef __u_quad_t u_quad_t;
#line 41 "/usr/include/sys/types.h"
typedef __fsid_t fsid_t;
#line 46 "/usr/include/sys/types.h"
typedef __loff_t loff_t;
#line 52 "/usr/include/sys/types.h"
typedef __ino64_t ino_t;
#line 57 "/usr/include/sys/types.h"
typedef __ino64_t ino64_t;
#line 62 "/usr/include/sys/types.h"
typedef __dev_t dev_t;
#line 67 "/usr/include/sys/types.h"
typedef __gid_t gid_t;
#line 72 "/usr/include/sys/types.h"
typedef __mode_t mode_t;
#line 77 "/usr/include/sys/types.h"
typedef __nlink_t nlink_t;
#line 82 "/usr/include/sys/types.h"
typedef __uid_t uid_t;
#line 90 "/usr/include/sys/types.h"
typedef __off64_t off_t;
#line 95 "/usr/include/sys/types.h"
typedef __off64_t off64_t;
#line 100 "/usr/include/sys/types.h"
typedef __pid_t pid_t;
#line 105 "/usr/include/sys/types.h"
typedef __id_t id_t;
#line 110 "/usr/include/sys/types.h"
typedef __ssize_t ssize_t;
#line 116 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;
#line 117 "/usr/include/sys/types.h"
typedef __caddr_t caddr_t;
#line 123 "/usr/include/sys/types.h"
typedef __key_t key_t;
#line 61 "/usr/include/time.h"
typedef __clock_t clock_t;
#line 77 "/usr/include/time.h"
typedef __time_t time_t;
#line 93 "/usr/include/time.h"
typedef __clockid_t clockid_t;
#line 105 "/usr/include/time.h"
typedef __timer_t timer_t;
#line 137 "/usr/include/sys/types.h"
typedef __useconds_t useconds_t;
#line 141 "/usr/include/sys/types.h"
typedef __suseconds_t suseconds_t;
#line 151 "/usr/include/sys/types.h"
typedef unsigned long ulong;
#line 152 "/usr/include/sys/types.h"
typedef unsigned short ushort;
#line 153 "/usr/include/sys/types.h"
typedef unsigned int uint;
#line 195 "/usr/include/sys/types.h"
typedef char int8_t;
#line 196 "/usr/include/sys/types.h"
typedef short int16_t;
#line 197 "/usr/include/sys/types.h"
typedef int int32_t;
#line 198 "/usr/include/sys/types.h"
typedef long long int64_t;
#line 201 "/usr/include/sys/types.h"
typedef unsigned char u_int8_t;
#line 202 "/usr/include/sys/types.h"
typedef unsigned short u_int16_t;
#line 203 "/usr/include/sys/types.h"
typedef unsigned int u_int32_t;
#line 204 "/usr/include/sys/types.h"
typedef unsigned long long u_int64_t;
#line 206 "/usr/include/sys/types.h"
typedef int register_t;
#line 23 "/usr/include/bits/sigset.h"
typedef int __sig_atomic_t;
#line 28 "/usr/include/bits/sigset.h"
struct __anonstruct___sigset_t_17 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
};
#line 28 "/usr/include/bits/sigset.h"
typedef struct __anonstruct___sigset_t_17 __sigset_t;
#line 38 "/usr/include/sys/select.h"
typedef __sigset_t sigset_t;
#line 121 "/usr/include/time.h"
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
#line 69 "/usr/include/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
#line 55 "/usr/include/sys/select.h"
typedef long __fd_mask;
#line 67 "/usr/include/sys/select.h"
struct __anonstruct_fd_set_18 {
   __fd_mask fds_bits[1024UL / (8UL * sizeof(__fd_mask ))] ;
};
#line 67 "/usr/include/sys/select.h"
typedef struct __anonstruct_fd_set_18 fd_set;
#line 85 "/usr/include/sys/select.h"
typedef __fd_mask fd_mask;
#line 228 "/usr/include/sys/types.h"
typedef __blksize_t blksize_t;
#line 248 "/usr/include/sys/types.h"
typedef __blkcnt64_t blkcnt_t;
#line 252 "/usr/include/sys/types.h"
typedef __fsblkcnt64_t fsblkcnt_t;
#line 256 "/usr/include/sys/types.h"
typedef __fsfilcnt64_t fsfilcnt_t;
#line 262 "/usr/include/sys/types.h"
typedef __blkcnt64_t blkcnt64_t;
#line 263 "/usr/include/sys/types.h"
typedef __fsblkcnt64_t fsblkcnt64_t;
#line 264 "/usr/include/sys/types.h"
typedef __fsfilcnt64_t fsfilcnt64_t;
#line 50 "/usr/include/bits/pthreadtypes.h"
typedef unsigned long pthread_t;
#line 53 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_attr_t_19 {
   char __size[56] ;
   long __align ;
};
#line 53 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_attr_t_19 pthread_attr_t;
#line 61 "/usr/include/bits/pthreadtypes.h"
struct __pthread_internal_list {
   struct __pthread_internal_list *__prev ;
   struct __pthread_internal_list *__next ;
};
#line 61 "/usr/include/bits/pthreadtypes.h"
typedef struct __pthread_internal_list __pthread_list_t;
#line 76 "/usr/include/bits/pthreadtypes.h"
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   unsigned int __nusers ;
   int __kind ;
   int __spins ;
   __pthread_list_t __list ;
};
#line 76 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_mutex_t_20 {
   struct __pthread_mutex_s __data ;
   char __size[40] ;
   long __align ;
};
#line 76 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutex_t_20 pthread_mutex_t;
#line 106 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_mutexattr_t_21 {
   char __size[4] ;
   int __align ;
};
#line 106 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutexattr_t_21 pthread_mutexattr_t;
#line 115 "/usr/include/bits/pthreadtypes.h"
struct __anonstruct___data_23 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
#line 115 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_cond_t_22 {
   struct __anonstruct___data_23 __data ;
   char __size[48] ;
   long long __align ;
};
#line 115 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_cond_t_22 pthread_cond_t;
#line 132 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_condattr_t_24 {
   char __size[4] ;
   int __align ;
};
#line 132 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_condattr_t_24 pthread_condattr_t;
#line 140 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;
#line 144 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t;
#line 150 "/usr/include/bits/pthreadtypes.h"
struct __anonstruct___data_26 {
   int __lock ;
   unsigned int __nr_readers ;
   unsigned int __readers_wakeup ;
   unsigned int __writer_wakeup ;
   unsigned int __nr_readers_queued ;
   unsigned int __nr_writers_queued ;
   int __writer ;
   int __pad1 ;
   unsigned long __pad2 ;
   unsigned long __pad3 ;
   unsigned int __flags ;
};
#line 150 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_rwlock_t_25 {
   struct __anonstruct___data_26 __data ;
   char __size[56] ;
   long __align ;
};
#line 150 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_rwlock_t_25 pthread_rwlock_t;
#line 188 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_rwlockattr_t_27 {
   char __size[8] ;
   long __align ;
};
#line 188 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_rwlockattr_t_27 pthread_rwlockattr_t;
#line 198 "/usr/include/bits/pthreadtypes.h"
typedef int volatile   pthread_spinlock_t;
#line 203 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_barrier_t_28 {
   char __size[32] ;
   long __align ;
};
#line 203 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_barrier_t_28 pthread_barrier_t;
#line 209 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_barrierattr_t_29 {
   char __size[4] ;
   int __align ;
};
#line 209 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_barrierattr_t_29 pthread_barrierattr_t;
#line 467 "/usr/include/stdlib.h"
struct random_data {
   int32_t *fptr ;
   int32_t *rptr ;
   int32_t *state ;
   int rand_type ;
   int rand_deg ;
   int rand_sep ;
   int32_t *end_ptr ;
};
#line 536 "/usr/include/stdlib.h"
struct drand48_data {
   unsigned short __x[3] ;
   unsigned short __old_x[3] ;
   unsigned short __c ;
   unsigned short __init ;
   unsigned long long __a ;
};
#line 764 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(void const   * , void const   * );
#line 767 "/usr/include/stdlib.h"
typedef int (*comparison_fn_t)(void const   * , void const   * );
#line 238 "/usr/include/unistd.h"
typedef __intptr_t intptr_t;
#line 245 "/usr/include/unistd.h"
typedef __socklen_t socklen_t;
#line 26 "/usr/include/bits/confname.h"
enum __anonenum_30 {
    _PC_LINK_MAX = 0,
    _PC_MAX_CANON = 1,
    _PC_MAX_INPUT = 2,
    _PC_NAME_MAX = 3,
    _PC_PATH_MAX = 4,
    _PC_PIPE_BUF = 5,
    _PC_CHOWN_RESTRICTED = 6,
    _PC_NO_TRUNC = 7,
    _PC_VDISABLE = 8,
    _PC_SYNC_IO = 9,
    _PC_ASYNC_IO = 10,
    _PC_PRIO_IO = 11,
    _PC_SOCK_MAXBUF = 12,
    _PC_FILESIZEBITS = 13,
    _PC_REC_INCR_XFER_SIZE = 14,
    _PC_REC_MAX_XFER_SIZE = 15,
    _PC_REC_MIN_XFER_SIZE = 16,
    _PC_REC_XFER_ALIGN = 17,
    _PC_ALLOC_SIZE_MIN = 18,
    _PC_SYMLINK_MAX = 19,
    _PC_2_SYMLINKS = 20
} ;
#line 73
enum __anonenum_31 {
    _SC_ARG_MAX = 0,
    _SC_CHILD_MAX = 1,
    _SC_CLK_TCK = 2,
    _SC_NGROUPS_MAX = 3,
    _SC_OPEN_MAX = 4,
    _SC_STREAM_MAX = 5,
    _SC_TZNAME_MAX = 6,
    _SC_JOB_CONTROL = 7,
    _SC_SAVED_IDS = 8,
    _SC_REALTIME_SIGNALS = 9,
    _SC_PRIORITY_SCHEDULING = 10,
    _SC_TIMERS = 11,
    _SC_ASYNCHRONOUS_IO = 12,
    _SC_PRIORITIZED_IO = 13,
    _SC_SYNCHRONIZED_IO = 14,
    _SC_FSYNC = 15,
    _SC_MAPPED_FILES = 16,
    _SC_MEMLOCK = 17,
    _SC_MEMLOCK_RANGE = 18,
    _SC_MEMORY_PROTECTION = 19,
    _SC_MESSAGE_PASSING = 20,
    _SC_SEMAPHORES = 21,
    _SC_SHARED_MEMORY_OBJECTS = 22,
    _SC_AIO_LISTIO_MAX = 23,
    _SC_AIO_MAX = 24,
    _SC_AIO_PRIO_DELTA_MAX = 25,
    _SC_DELAYTIMER_MAX = 26,
    _SC_MQ_OPEN_MAX = 27,
    _SC_MQ_PRIO_MAX = 28,
    _SC_VERSION = 29,
    _SC_PAGESIZE = 30,
    _SC_RTSIG_MAX = 31,
    _SC_SEM_NSEMS_MAX = 32,
    _SC_SEM_VALUE_MAX = 33,
    _SC_SIGQUEUE_MAX = 34,
    _SC_TIMER_MAX = 35,
    _SC_BC_BASE_MAX = 36,
    _SC_BC_DIM_MAX = 37,
    _SC_BC_SCALE_MAX = 38,
    _SC_BC_STRING_MAX = 39,
    _SC_COLL_WEIGHTS_MAX = 40,
    _SC_EQUIV_CLASS_MAX = 41,
    _SC_EXPR_NEST_MAX = 42,
    _SC_LINE_MAX = 43,
    _SC_RE_DUP_MAX = 44,
    _SC_CHARCLASS_NAME_MAX = 45,
    _SC_2_VERSION = 46,
    _SC_2_C_BIND = 47,
    _SC_2_C_DEV = 48,
    _SC_2_FORT_DEV = 49,
    _SC_2_FORT_RUN = 50,
    _SC_2_SW_DEV = 51,
    _SC_2_LOCALEDEF = 52,
    _SC_PII = 53,
    _SC_PII_XTI = 54,
    _SC_PII_SOCKET = 55,
    _SC_PII_INTERNET = 56,
    _SC_PII_OSI = 57,
    _SC_POLL = 58,
    _SC_SELECT = 59,
    _SC_UIO_MAXIOV = 60,
    _SC_IOV_MAX = 60,
    _SC_PII_INTERNET_STREAM = 61,
    _SC_PII_INTERNET_DGRAM = 62,
    _SC_PII_OSI_COTS = 63,
    _SC_PII_OSI_CLTS = 64,
    _SC_PII_OSI_M = 65,
    _SC_T_IOV_MAX = 66,
    _SC_THREADS = 67,
    _SC_THREAD_SAFE_FUNCTIONS = 68,
    _SC_GETGR_R_SIZE_MAX = 69,
    _SC_GETPW_R_SIZE_MAX = 70,
    _SC_LOGIN_NAME_MAX = 71,
    _SC_TTY_NAME_MAX = 72,
    _SC_THREAD_DESTRUCTOR_ITERATIONS = 73,
    _SC_THREAD_KEYS_MAX = 74,
    _SC_THREAD_STACK_MIN = 75,
    _SC_THREAD_THREADS_MAX = 76,
    _SC_THREAD_ATTR_STACKADDR = 77,
    _SC_THREAD_ATTR_STACKSIZE = 78,
    _SC_THREAD_PRIORITY_SCHEDULING = 79,
    _SC_THREAD_PRIO_INHERIT = 80,
    _SC_THREAD_PRIO_PROTECT = 81,
    _SC_THREAD_PROCESS_SHARED = 82,
    _SC_NPROCESSORS_CONF = 83,
    _SC_NPROCESSORS_ONLN = 84,
    _SC_PHYS_PAGES = 85,
    _SC_AVPHYS_PAGES = 86,
    _SC_ATEXIT_MAX = 87,
    _SC_PASS_MAX = 88,
    _SC_XOPEN_VERSION = 89,
    _SC_XOPEN_XCU_VERSION = 90,
    _SC_XOPEN_UNIX = 91,
    _SC_XOPEN_CRYPT = 92,
    _SC_XOPEN_ENH_I18N = 93,
    _SC_XOPEN_SHM = 94,
    _SC_2_CHAR_TERM = 95,
    _SC_2_C_VERSION = 96,
    _SC_2_UPE = 97,
    _SC_XOPEN_XPG2 = 98,
    _SC_XOPEN_XPG3 = 99,
    _SC_XOPEN_XPG4 = 100,
    _SC_CHAR_BIT = 101,
    _SC_CHAR_MAX = 102,
    _SC_CHAR_MIN = 103,
    _SC_INT_MAX = 104,
    _SC_INT_MIN = 105,
    _SC_LONG_BIT = 106,
    _SC_WORD_BIT = 107,
    _SC_MB_LEN_MAX = 108,
    _SC_NZERO = 109,
    _SC_SSIZE_MAX = 110,
    _SC_SCHAR_MAX = 111,
    _SC_SCHAR_MIN = 112,
    _SC_SHRT_MAX = 113,
    _SC_SHRT_MIN = 114,
    _SC_UCHAR_MAX = 115,
    _SC_UINT_MAX = 116,
    _SC_ULONG_MAX = 117,
    _SC_USHRT_MAX = 118,
    _SC_NL_ARGMAX = 119,
    _SC_NL_LANGMAX = 120,
    _SC_NL_MSGMAX = 121,
    _SC_NL_NMAX = 122,
    _SC_NL_SETMAX = 123,
    _SC_NL_TEXTMAX = 124,
    _SC_XBS5_ILP32_OFF32 = 125,
    _SC_XBS5_ILP32_OFFBIG = 126,
    _SC_XBS5_LP64_OFF64 = 127,
    _SC_XBS5_LPBIG_OFFBIG = 128,
    _SC_XOPEN_LEGACY = 129,
    _SC_XOPEN_REALTIME = 130,
    _SC_XOPEN_REALTIME_THREADS = 131,
    _SC_ADVISORY_INFO = 132,
    _SC_BARRIERS = 133,
    _SC_BASE = 134,
    _SC_C_LANG_SUPPORT = 135,
    _SC_C_LANG_SUPPORT_R = 136,
    _SC_CLOCK_SELECTION = 137,
    _SC_CPUTIME = 138,
    _SC_THREAD_CPUTIME = 139,
    _SC_DEVICE_IO = 140,
    _SC_DEVICE_SPECIFIC = 141,
    _SC_DEVICE_SPECIFIC_R = 142,
    _SC_FD_MGMT = 143,
    _SC_FIFO = 144,
    _SC_PIPE = 145,
    _SC_FILE_ATTRIBUTES = 146,
    _SC_FILE_LOCKING = 147,
    _SC_FILE_SYSTEM = 148,
    _SC_MONOTONIC_CLOCK = 149,
    _SC_MULTI_PROCESS = 150,
    _SC_SINGLE_PROCESS = 151,
    _SC_NETWORKING = 152,
    _SC_READER_WRITER_LOCKS = 153,
    _SC_SPIN_LOCKS = 154,
    _SC_REGEXP = 155,
    _SC_REGEX_VERSION = 156,
    _SC_SHELL = 157,
    _SC_SIGNALS = 158,
    _SC_SPAWN = 159,
    _SC_SPORADIC_SERVER = 160,
    _SC_THREAD_SPORADIC_SERVER = 161,
    _SC_SYSTEM_DATABASE = 162,
    _SC_SYSTEM_DATABASE_R = 163,
    _SC_TIMEOUTS = 164,
    _SC_TYPED_MEMORY_OBJECTS = 165,
    _SC_USER_GROUPS = 166,
    _SC_USER_GROUPS_R = 167,
    _SC_2_PBS = 168,
    _SC_2_PBS_ACCOUNTING = 169,
    _SC_2_PBS_LOCATE = 170,
    _SC_2_PBS_MESSAGE = 171,
    _SC_2_PBS_TRACK = 172,
    _SC_SYMLOOP_MAX = 173,
    _SC_STREAMS = 174,
    _SC_2_PBS_CHECKPOINT = 175,
    _SC_V6_ILP32_OFF32 = 176,
    _SC_V6_ILP32_OFFBIG = 177,
    _SC_V6_LP64_OFF64 = 178,
    _SC_V6_LPBIG_OFFBIG = 179,
    _SC_HOST_NAME_MAX = 180,
    _SC_TRACE = 181,
    _SC_TRACE_EVENT_FILTER = 182,
    _SC_TRACE_INHERIT = 183,
    _SC_TRACE_LOG = 184,
    _SC_LEVEL1_ICACHE_SIZE = 185,
    _SC_LEVEL1_ICACHE_ASSOC = 186,
    _SC_LEVEL1_ICACHE_LINESIZE = 187,
    _SC_LEVEL1_DCACHE_SIZE = 188,
    _SC_LEVEL1_DCACHE_ASSOC = 189,
    _SC_LEVEL1_DCACHE_LINESIZE = 190,
    _SC_LEVEL2_CACHE_SIZE = 191,
    _SC_LEVEL2_CACHE_ASSOC = 192,
    _SC_LEVEL2_CACHE_LINESIZE = 193,
    _SC_LEVEL3_CACHE_SIZE = 194,
    _SC_LEVEL3_CACHE_ASSOC = 195,
    _SC_LEVEL3_CACHE_LINESIZE = 196,
    _SC_LEVEL4_CACHE_SIZE = 197,
    _SC_LEVEL4_CACHE_ASSOC = 198,
    _SC_LEVEL4_CACHE_LINESIZE = 199,
    _SC_IPV6 = 235,
    _SC_RAW_SOCKETS = 236
} ;
#line 506
enum __anonenum_32 {
    _CS_PATH = 0,
    _CS_V6_WIDTH_RESTRICTED_ENVS = 1,
    _CS_GNU_LIBC_VERSION = 2,
    _CS_GNU_LIBPTHREAD_VERSION = 3,
    _CS_LFS_CFLAGS = 1000,
    _CS_LFS_LDFLAGS = 1001,
    _CS_LFS_LIBS = 1002,
    _CS_LFS_LINTFLAGS = 1003,
    _CS_LFS64_CFLAGS = 1004,
    _CS_LFS64_LDFLAGS = 1005,
    _CS_LFS64_LIBS = 1006,
    _CS_LFS64_LINTFLAGS = 1007,
    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
    _CS_XBS5_ILP32_OFF32_LDFLAGS = 1101,
    _CS_XBS5_ILP32_OFF32_LIBS = 1102,
    _CS_XBS5_ILP32_OFF32_LINTFLAGS = 1103,
    _CS_XBS5_ILP32_OFFBIG_CFLAGS = 1104,
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS = 1105,
    _CS_XBS5_ILP32_OFFBIG_LIBS = 1106,
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS = 1107,
    _CS_XBS5_LP64_OFF64_CFLAGS = 1108,
    _CS_XBS5_LP64_OFF64_LDFLAGS = 1109,
    _CS_XBS5_LP64_OFF64_LIBS = 1110,
    _CS_XBS5_LP64_OFF64_LINTFLAGS = 1111,
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS = 1112,
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS = 1113,
    _CS_XBS5_LPBIG_OFFBIG_LIBS = 1114,
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS = 1115,
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS = 1116,
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS = 1117,
    _CS_POSIX_V6_ILP32_OFF32_LIBS = 1118,
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS = 1119,
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS = 1120,
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS = 1121,
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS = 1122,
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS = 1123,
    _CS_POSIX_V6_LP64_OFF64_CFLAGS = 1124,
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS = 1125,
    _CS_POSIX_V6_LP64_OFF64_LIBS = 1126,
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS = 1127,
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS = 1128,
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS = 1129,
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS = 1130,
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS = 1131
} ;
#line 48 "/usr/include/ctype.h"
enum __anonenum_33 {
    _ISupper = 256,
    _ISlower = 512,
    _ISalpha = 1024,
    _ISdigit = 2048,
    _ISxdigit = 4096,
    _ISspace = 8192,
    _ISprint = 16384,
    _ISgraph = 32768,
    _ISblank = 1,
    _IScntrl = 2,
    _ISpunct = 4,
    _ISalnum = 8
} ;
#line 27 "/usr/include/bits/locale.h"
enum __anonenum_34 {
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
} ;
#line 52 "/usr/include/locale.h"
struct lconv {
   char *decimal_point ;
   char *thousands_sep ;
   char *grouping ;
   char *int_curr_symbol ;
   char *currency_symbol ;
   char *mon_decimal_point ;
   char *mon_thousands_sep ;
   char *mon_grouping ;
   char *positive_sign ;
   char *negative_sign ;
   char int_frac_digits ;
   char frac_digits ;
   char p_cs_precedes ;
   char p_sep_by_space ;
   char n_cs_precedes ;
   char n_sep_by_space ;
   char p_sign_posn ;
   char n_sign_posn ;
   char int_p_cs_precedes ;
   char int_p_sep_by_space ;
   char int_n_cs_precedes ;
   char int_n_sep_by_space ;
   char int_p_sign_posn ;
   char int_n_sign_posn ;
};
#line 148 "/usr/include/locale.h"
typedef __locale_t locale_t;
#line 69 "/usr/include/errno.h"
typedef int error_t;
#line 44 "/usr/include/bits/uio.h"
struct iovec {
   void *iov_base ;
   size_t iov_len ;
};
#line 155 "/usr/include/bits/fcntl.h"
struct flock {
   short l_type ;
   short l_whence ;
   __off64_t l_start ;
   __off64_t l_len ;
   __pid_t l_pid ;
};
#line 170 "/usr/include/bits/fcntl.h"
struct flock64 {
   short l_type ;
   short l_whence ;
   __off64_t l_start ;
   __off64_t l_len ;
   __pid_t l_pid ;
};
#line 43 "/usr/include/bits/stat.h"
struct stat {
   __dev_t st_dev ;
   __ino_t st_ino ;
   __nlink_t st_nlink ;
   __mode_t st_mode ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   int pad0 ;
   __dev_t st_rdev ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   long __unused[3] ;
};
#line 116 "/usr/include/bits/stat.h"
struct stat64 {
   __dev_t st_dev ;
   __ino64_t st_ino ;
   __nlink_t st_nlink ;
   __mode_t st_mode ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   int pad0 ;
   __dev_t st_rdev ;
   __off_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt64_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   long __unused[3] ;
};
#line 31 "/usr/include/bits/mathdef.h"
typedef float float_t;
#line 32 "/usr/include/bits/mathdef.h"
typedef double double_t;
#line 198 "/usr/include/math.h"
enum __anonenum_35 {
    FP_NAN = 0,
    FP_INFINITE = 1,
    FP_ZERO = 2,
    FP_SUBNORMAL = 3,
    FP_NORMAL = 4
} ;
#line 284
enum __anonenum__LIB_VERSION_TYPE_36 {
    _IEEE_ = -1,
    _SVID_ = 0,
    _XOPEN_ = 1,
    _POSIX_ = 2,
    _ISOC_ = 3
} ;
#line 284 "/usr/include/math.h"
typedef enum __anonenum__LIB_VERSION_TYPE_36 _LIB_VERSION_TYPE;
#line 309 "/usr/include/math.h"
struct exception {
   int type ;
   char *name ;
   double arg1 ;
   double arg2 ;
   double retval ;
};
#line 38 "/usr/include/bits/mathinline.h"
union __anonunion___u_37 {
   float __f ;
   int __i ;
};
#line 44 "/usr/include/bits/mathinline.h"
union __anonunion___u_38 {
   double __d ;
   int __i[2] ;
};
#line 50 "/usr/include/bits/mathinline.h"
union __anonunion___u_39 {
   long double __l ;
   int __i[3] ;
};
#line 134 "/usr/include/time.h"
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
#line 162 "/usr/include/time.h"
struct itimerspec {
   struct timespec it_interval ;
   struct timespec it_value ;
};
#line 169
struct sigevent;
#line 169
struct sigevent;
#line 41 "/usr/include/signal.h"
typedef __sig_atomic_t sig_atomic_t;
#line 75 "/usr/include/signal.h"
typedef void (*__sighandler_t)(int  );
#line 196 "/usr/include/signal.h"
typedef void (*sighandler_t)(int  );
#line 201 "/usr/include/signal.h"
typedef void (*sig_t)(int  );
#line 33 "/usr/include/bits/siginfo.h"
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
#line 33 "/usr/include/bits/siginfo.h"
typedef union sigval sigval_t;
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__kill_41 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__timer_42 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__rt_43 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigchld_44 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigfault_45 {
   void *si_addr ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigpoll_46 {
   long si_band ;
   int si_fd ;
};
#line 51 "/usr/include/bits/siginfo.h"
union __anonunion__sifields_40 {
   int _pad[128UL / sizeof(int ) - 4UL] ;
   struct __anonstruct__kill_41 _kill ;
   struct __anonstruct__timer_42 _timer ;
   struct __anonstruct__rt_43 _rt ;
   struct __anonstruct__sigchld_44 _sigchld ;
   struct __anonstruct__sigfault_45 _sigfault ;
   struct __anonstruct__sigpoll_46 _sigpoll ;
};
#line 51 "/usr/include/bits/siginfo.h"
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_40 _sifields ;
};
#line 51 "/usr/include/bits/siginfo.h"
typedef struct siginfo siginfo_t;
#line 129
enum __anonenum_47 {
    SI_ASYNCNL = -60,
    SI_TKILL = -6,
    SI_SIGIO = -5,
    SI_ASYNCIO = -4,
    SI_MESGQ = -3,
    SI_TIMER = -2,
    SI_QUEUE = -1,
    SI_USER = 0,
    SI_KERNEL = 128
} ;
#line 153
enum __anonenum_48 {
    ILL_ILLOPC = 1,
    ILL_ILLOPN = 2,
    ILL_ILLADR = 3,
    ILL_ILLTRP = 4,
    ILL_PRVOPC = 5,
    ILL_PRVREG = 6,
    ILL_COPROC = 7,
    ILL_BADSTK = 8
} ;
#line 174
enum __anonenum_49 {
    FPE_INTDIV = 1,
    FPE_INTOVF = 2,
    FPE_FLTDIV = 3,
    FPE_FLTOVF = 4,
    FPE_FLTUND = 5,
    FPE_FLTRES = 6,
    FPE_FLTINV = 7,
    FPE_FLTSUB = 8
} ;
#line 195
enum __anonenum_50 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;
#line 204
enum __anonenum_51 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;
#line 215
enum __anonenum_52 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;
#line 224
enum __anonenum_53 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;
#line 241
enum __anonenum_54 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;
#line 273 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigev_thread_56 {
   void (*_function)(sigval_t  ) ;
   void *_attribute ;
};
#line 273 "/usr/include/bits/siginfo.h"
union __anonunion__sigev_un_55 {
   int _pad[64UL / sizeof(int ) - 4UL] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_56 _sigev_thread ;
};
#line 273 "/usr/include/bits/siginfo.h"
struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_55 _sigev_un ;
};
#line 273 "/usr/include/bits/siginfo.h"
typedef struct sigevent sigevent_t;
#line 300
enum __anonenum_57 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;
#line 25 "/usr/include/bits/sigaction.h"
union __anonunion___sigaction_handler_58 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};
#line 25 "/usr/include/bits/sigaction.h"
struct sigaction {
   union __anonunion___sigaction_handler_58 __sigaction_handler ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
#line 308 "/usr/include/signal.h"
struct sigvec {
   void (*sv_handler)(int  ) ;
   int sv_mask ;
   int sv_flags ;
};
#line 28 "/usr/include/bits/sigcontext.h"
struct _fpreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
};
#line 34 "/usr/include/bits/sigcontext.h"
struct _fpxreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
   unsigned short padding[3] ;
};
#line 41 "/usr/include/bits/sigcontext.h"
struct _xmmreg {
   __uint32_t element[4] ;
};
#line 109 "/usr/include/bits/sigcontext.h"
struct _fpstate {
   __uint16_t cwd ;
   __uint16_t swd ;
   __uint16_t ftw ;
   __uint16_t fop ;
   __uint64_t rip ;
   __uint64_t rdp ;
   __uint32_t mxcsr ;
   __uint32_t mxcr_mask ;
   struct _fpxreg _st[8] ;
   struct _xmmreg _xmm[16] ;
   __uint32_t padding[24] ;
};
#line 125 "/usr/include/bits/sigcontext.h"
struct sigcontext {
   unsigned long r8 ;
   unsigned long r9 ;
   unsigned long r10 ;
   unsigned long r11 ;
   unsigned long r12 ;
   unsigned long r13 ;
   unsigned long r14 ;
   unsigned long r15 ;
   unsigned long rdi ;
   unsigned long rsi ;
   unsigned long rbp ;
   unsigned long rbx ;
   unsigned long rdx ;
   unsigned long rax ;
   unsigned long rcx ;
   unsigned long rsp ;
   unsigned long rip ;
   unsigned long eflags ;
   unsigned short cs ;
   unsigned short gs ;
   unsigned short fs ;
   unsigned short __pad0 ;
   unsigned long err ;
   unsigned long trapno ;
   unsigned long oldmask ;
   unsigned long cr2 ;
   struct _fpstate *fpstate ;
   unsigned long __reserved1[8] ;
};
#line 26 "/usr/include/bits/sigstack.h"
struct sigstack {
   void *ss_sp ;
   int ss_onstack ;
};
#line 34
enum __anonenum_59 {
    SS_ONSTACK = 1,
    SS_DISABLE = 2
} ;
#line 50 "/usr/include/bits/sigstack.h"
struct sigaltstack {
   void *ss_sp ;
   int ss_flags ;
   size_t ss_size ;
};
#line 50 "/usr/include/bits/sigstack.h"
typedef struct sigaltstack stack_t;
#line 33 "/usr/include/sys/ucontext.h"
typedef long greg_t;
#line 39 "/usr/include/sys/ucontext.h"
typedef greg_t gregset_t[23];
#line 43
enum __anonenum_60 {
    REG_R8 = 0,
    REG_R9 = 1,
    REG_R10 = 2,
    REG_R11 = 3,
    REG_R12 = 4,
    REG_R13 = 5,
    REG_R14 = 6,
    REG_R15 = 7,
    REG_RDI = 8,
    REG_RSI = 9,
    REG_RBP = 10,
    REG_RBX = 11,
    REG_RDX = 12,
    REG_RAX = 13,
    REG_RCX = 14,
    REG_RSP = 15,
    REG_RIP = 16,
    REG_EFL = 17,
    REG_CSGSFS = 18,
    REG_ERR = 19,
    REG_TRAPNO = 20,
    REG_OLDMASK = 21,
    REG_CR2 = 22
} ;
#line 94 "/usr/include/sys/ucontext.h"
struct _libc_fpxreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
   unsigned short padding[3] ;
};
#line 101 "/usr/include/sys/ucontext.h"
struct _libc_xmmreg {
   __uint32_t element[4] ;
};
#line 106 "/usr/include/sys/ucontext.h"
struct _libc_fpstate {
   __uint16_t cwd ;
   __uint16_t swd ;
   __uint16_t ftw ;
   __uint16_t fop ;
   __uint64_t rip ;
   __uint64_t rdp ;
   __uint32_t mxcsr ;
   __uint32_t mxcr_mask ;
   struct _libc_fpxreg _st[8] ;
   struct _libc_xmmreg _xmm[16] ;
   __uint32_t padding[24] ;
};
#line 123 "/usr/include/sys/ucontext.h"
typedef struct _libc_fpstate *fpregset_t;
#line 126 "/usr/include/sys/ucontext.h"
struct __anonstruct_mcontext_t_61 {
   gregset_t gregs ;
   fpregset_t fpregs ;
   unsigned long __reserved1[8] ;
};
#line 126 "/usr/include/sys/ucontext.h"
typedef struct __anonstruct_mcontext_t_61 mcontext_t;
#line 135 "/usr/include/sys/ucontext.h"
struct ucontext {
   unsigned long uc_flags ;
   struct ucontext *uc_link ;
   stack_t uc_stack ;
   mcontext_t uc_mcontext ;
   __sigset_t uc_sigmask ;
   struct _libc_fpstate __fpregs_mem ;
};
#line 135 "/usr/include/sys/ucontext.h"
typedef struct ucontext ucontext_t;
#line 65 "/usr/include/bits/sched.h"
struct sched_param {
   int __sched_priority ;
};
#line 89 "/usr/include/bits/sched.h"
struct __sched_param {
   int __sched_priority ;
};
#line 104 "/usr/include/bits/sched.h"
typedef unsigned long __cpu_mask;
#line 111 "/usr/include/bits/sched.h"
struct __anonstruct_cpu_set_t_62 {
   __cpu_mask __bits[1024UL / (8UL * sizeof(__cpu_mask ))] ;
};
#line 111 "/usr/include/bits/sched.h"
typedef struct __anonstruct_cpu_set_t_62 cpu_set_t;
#line 32 "/usr/include/bits/setjmp.h"
typedef long __jmp_buf[8];
#line 34 "/usr/include/pthread.h"
enum __anonenum_63 {
    PTHREAD_CREATE_JOINABLE = 0,
    PTHREAD_CREATE_DETACHED = 1
} ;
#line 44
enum __anonenum_64 {
    PTHREAD_MUTEX_TIMED_NP = 0,
    PTHREAD_MUTEX_RECURSIVE_NP = 1,
    PTHREAD_MUTEX_ERRORCHECK_NP = 2,
    PTHREAD_MUTEX_ADAPTIVE_NP = 3,
    PTHREAD_MUTEX_NORMAL = 0,
    PTHREAD_MUTEX_RECURSIVE = 1,
    PTHREAD_MUTEX_ERRORCHECK = 2,
    PTHREAD_MUTEX_DEFAULT = 0,
    PTHREAD_MUTEX_FAST_NP = 0
} ;
#line 66
enum __anonenum_65 {
    PTHREAD_MUTEX_STALLED_NP = 0,
    PTHREAD_MUTEX_ROBUST_NP = 1
} ;
#line 76
enum __anonenum_66 {
    PTHREAD_PRIO_NONE = 0,
    PTHREAD_PRIO_INHERIT = 1,
    PTHREAD_PRIO_PROTECT = 2
} ;
#line 113
enum __anonenum_67 {
    PTHREAD_RWLOCK_PREFER_READER_NP = 0,
    PTHREAD_RWLOCK_PREFER_WRITER_NP = 1,
    PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP = 2,
    PTHREAD_RWLOCK_DEFAULT_NP = 0
} ;
#line 143
enum __anonenum_68 {
    PTHREAD_INHERIT_SCHED = 0,
    PTHREAD_EXPLICIT_SCHED = 1
} ;
#line 153
enum __anonenum_69 {
    PTHREAD_SCOPE_SYSTEM = 0,
    PTHREAD_SCOPE_PROCESS = 1
} ;
#line 163
enum __anonenum_70 {
    PTHREAD_PROCESS_PRIVATE = 0,
    PTHREAD_PROCESS_SHARED = 1
} ;
#line 178 "/usr/include/pthread.h"
struct _pthread_cleanup_buffer {
   void (*__routine)(void * ) ;
   void *__arg ;
   int __canceltype ;
   struct _pthread_cleanup_buffer *__prev ;
};
#line 187
enum __anonenum_71 {
    PTHREAD_CANCEL_ENABLE = 0,
    PTHREAD_CANCEL_DISABLE = 1
} ;
#line 194
enum __anonenum_72 {
    PTHREAD_CANCEL_DEFERRED = 0,
    PTHREAD_CANCEL_ASYNCHRONOUS = 1
} ;
#line 491 "/usr/include/pthread.h"
struct __anonstruct___cancel_jmp_buf_74 {
   __jmp_buf __cancel_jmp_buf ;
   int __mask_was_saved ;
};
#line 491 "/usr/include/pthread.h"
struct __anonstruct___pthread_unwind_buf_t_73 {
   struct __anonstruct___cancel_jmp_buf_74 __cancel_jmp_buf[1] ;
   void *__pad[4] ;
};
#line 491 "/usr/include/pthread.h"
typedef struct __anonstruct___pthread_unwind_buf_t_73  __attribute__((__aligned__)) __pthread_unwind_buf_t;
#line 508 "/usr/include/pthread.h"
struct __pthread_cleanup_frame {
   void (*__cancel_routine)(void * ) ;
   void *__cancel_arg ;
   int __do_it ;
   int __cancel_type ;
};
#line 708
struct __jmp_buf_tag;
#line 708
struct __jmp_buf_tag;
#line 37 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/omp.h"
struct __anonstruct_omp_lock_t_75 {
   unsigned char _x[4]  __attribute__((__aligned__(4))) ;
};
#line 37 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/omp.h"
typedef struct __anonstruct_omp_lock_t_75 omp_lock_t;
#line 43 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/omp.h"
struct __anonstruct_omp_nest_lock_t_76 {
   unsigned char _x[8]  __attribute__((__aligned__(4))) ;
};
#line 43 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/omp.h"
typedef struct __anonstruct_omp_nest_lock_t_76 omp_nest_lock_t;
#line 32 "/usr/include/sys/timeb.h"
struct timeb {
   time_t time ;
   unsigned short millitm ;
   short timezone ;
   short dstflag ;
};
#line 23 "/usr/include/bits/dirent.h"
struct dirent {
   __ino64_t d_ino ;
   __off64_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
#line 38 "/usr/include/bits/dirent.h"
struct dirent64 {
   __ino64_t d_ino ;
   __off64_t d_off ;
   unsigned short d_reclen ;
   unsigned char d_type ;
   char d_name[256] ;
};
#line 98 "/usr/include/dirent.h"
enum __anonenum_77 {
    DT_UNKNOWN = 0,
    DT_FIFO = 1,
    DT_CHR = 2,
    DT_DIR = 4,
    DT_BLK = 6,
    DT_REG = 8,
    DT_LNK = 10,
    DT_SOCK = 12,
    DT_WHT = 14
} ;
#line 128
struct __dirstream;
#line 128 "/usr/include/dirent.h"
typedef struct __dirstream DIR;
#line 33 "/usr/include/bits/resource.h"
enum __rlimit_resource {
    RLIMIT_CPU = 0,
    RLIMIT_FSIZE = 1,
    RLIMIT_DATA = 2,
    RLIMIT_STACK = 3,
    RLIMIT_CORE = 4,
    __RLIMIT_RSS = 5,
    RLIMIT_NOFILE = 7,
    __RLIMIT_OFILE = 7,
    RLIMIT_AS = 9,
    __RLIMIT_NPROC = 6,
    __RLIMIT_MEMLOCK = 8,
    __RLIMIT_LOCKS = 10,
    __RLIMIT_SIGPENDING = 11,
    __RLIMIT_MSGQUEUE = 12,
    __RLIMIT_NICE = 13,
    __RLIMIT_RTPRIO = 14,
    __RLIMIT_NLIMITS = 15,
    __RLIM_NLIMITS = 15
} ;
#line 129 "/usr/include/bits/resource.h"
typedef __rlim64_t rlim_t;
#line 132 "/usr/include/bits/resource.h"
typedef __rlim64_t rlim64_t;
#line 135 "/usr/include/bits/resource.h"
struct rlimit {
   rlim_t rlim_cur ;
   rlim_t rlim_max ;
};
#line 144 "/usr/include/bits/resource.h"
struct rlimit64 {
   rlim64_t rlim_cur ;
   rlim64_t rlim_max ;
};
#line 154
enum __rusage_who {
    RUSAGE_SELF = 0,
    RUSAGE_CHILDREN = -1
} ;
#line 169 "/usr/include/bits/resource.h"
struct rusage {
   struct timeval ru_utime ;
   struct timeval ru_stime ;
   long ru_maxrss ;
   long ru_ixrss ;
   long ru_idrss ;
   long ru_isrss ;
   long ru_minflt ;
   long ru_majflt ;
   long ru_nswap ;
   long ru_inblock ;
   long ru_oublock ;
   long ru_msgsnd ;
   long ru_msgrcv ;
   long ru_nsignals ;
   long ru_nvcsw ;
   long ru_nivcsw ;
};
#line 217
enum __priority_which {
    PRIO_PROCESS = 0,
    PRIO_PGRP = 1,
    PRIO_USER = 2
} ;
#line 39 "/usr/include/sys/resource.h"
typedef enum __rlimit_resource __rlimit_resource_t;
#line 40 "/usr/include/sys/resource.h"
typedef enum __rusage_who __rusage_who_t;
#line 41 "/usr/include/sys/resource.h"
typedef enum __priority_which __priority_which_t;
#line 102 "/usr/include/sys/wait.h"
enum __anonenum_idtype_t_78 {
    P_ALL = 0,
    P_PID = 1,
    P_PGID = 2
} ;
#line 102 "/usr/include/sys/wait.h"
typedef enum __anonenum_idtype_t_78 idtype_t;
#line 162
struct rusage;
#line 176
struct rusage;
#line 50 "/usr/include/pwd.h"
struct passwd {
   char *pw_name ;
   char *pw_passwd ;
   __uid_t pw_uid ;
   __gid_t pw_gid ;
   char *pw_gecos ;
   char *pw_dir ;
   char *pw_shell ;
};
#line 61 "./magick/magick-type.h"
typedef double MagickRealType;
#line 67 "./magick/magick-type.h"
typedef unsigned short Quantum;
#line 113 "./magick/magick-type.h"
typedef unsigned int MagickStatusType;
#line 116 "./magick/magick-type.h"
typedef long long MagickOffsetType;
#line 117 "./magick/magick-type.h"
typedef unsigned long long MagickSizeType;
#line 133 "./magick/magick-type.h"
typedef MagickSizeType QuantumAny;
#line 140
enum __anonenum_ChannelType_79 {
    UndefinedChannel = 0,
    RedChannel = 1,
    GrayChannel = 1,
    CyanChannel = 1,
    GreenChannel = 2,
    MagentaChannel = 2,
    BlueChannel = 4,
    YellowChannel = 4,
    AlphaChannel = 8,
    OpacityChannel = 8,
    MatteChannel = 8,
    BlackChannel = 32,
    IndexChannel = 32,
    TrueAlphaChannel = 64,
    RGBChannels = 128,
    AllChannels = 63,
    DefaultChannels = 55
} ;
#line 140 "./magick/magick-type.h"
typedef enum __anonenum_ChannelType_79 ChannelType;
#line 162
enum __anonenum_ClassType_80 {
    UndefinedClass = 0,
    DirectClass = 1,
    PseudoClass = 2
} ;
#line 162 "./magick/magick-type.h"
typedef enum __anonenum_ClassType_80 ClassType;
#line 169
enum __anonenum_MagickBooleanType_81 {
    MagickFalse = 0,
    MagickTrue = 1
} ;
#line 169 "./magick/magick-type.h"
typedef enum __anonenum_MagickBooleanType_81 MagickBooleanType;
#line 175
struct _BlobInfo;
#line 175 "./magick/magick-type.h"
typedef struct _BlobInfo BlobInfo;
#line 177
struct _ExceptionInfo;
#line 177 "./magick/magick-type.h"
typedef struct _ExceptionInfo ExceptionInfo;
#line 179
struct _Image;
#line 179 "./magick/magick-type.h"
typedef struct _Image Image;
#line 181
struct _ImageInfo;
#line 181 "./magick/magick-type.h"
typedef struct _ImageInfo ImageInfo;
#line 57 "/usr/include/sys/time.h"
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
#line 63 "/usr/include/sys/time.h"
typedef struct timezone * __restrict  __timezone_ptr_t;
#line 93
enum __itimer_which {
    ITIMER_REAL = 0,
    ITIMER_VIRTUAL = 1,
    ITIMER_PROF = 2
} ;
#line 109 "/usr/include/sys/time.h"
struct itimerval {
   struct timeval it_interval ;
   struct timeval it_value ;
};
#line 120 "/usr/include/sys/time.h"
typedef enum __itimer_which __itimer_which_t;
#line 35 "/usr/include/sys/times.h"
struct tms {
   clock_t tms_utime ;
   clock_t tms_stime ;
   clock_t tms_cutime ;
   clock_t tms_cstime ;
};
#line 25 "./magick/geometry.h"
enum __anonenum_GeometryFlags_82 {
    NoValue = 0,
    XValue = 1,
    XiValue = 1,
    YValue = 2,
    PsiValue = 2,
    WidthValue = 4,
    RhoValue = 4,
    HeightValue = 8,
    SigmaValue = 8,
    ChiValue = 16,
    XiNegative = 32,
    XNegative = 32,
    PsiNegative = 64,
    YNegative = 64,
    ChiNegative = 128,
    PercentValue = 4096,
    AspectValue = 8192,
    LessValue = 16384,
    GreaterValue = 32768,
    MinimumValue = 65536,
    AreaValue = 131072,
    DecimalValue = 262144,
    AllValues = 2147483647
} ;
#line 25 "./magick/geometry.h"
typedef enum __anonenum_GeometryFlags_82 GeometryFlags;
#line 74
enum __anonenum_GravityType_83 {
    UndefinedGravity = 0,
    ForgetGravity = 0,
    NorthWestGravity = 1,
    NorthGravity = 2,
    NorthEastGravity = 3,
    WestGravity = 4,
    CenterGravity = 5,
    EastGravity = 6,
    SouthWestGravity = 7,
    SouthGravity = 8,
    SouthEastGravity = 9,
    StaticGravity = 10
} ;
#line 74 "./magick/geometry.h"
typedef enum __anonenum_GravityType_83 GravityType;
#line 90 "./magick/geometry.h"
struct _AffineMatrix {
   double sx ;
   double rx ;
   double ry ;
   double sy ;
   double tx ;
   double ty ;
};
#line 90 "./magick/geometry.h"
typedef struct _AffineMatrix AffineMatrix;
#line 101 "./magick/geometry.h"
struct _GeometryInfo {
   double rho ;
   double sigma ;
   double xi ;
   double psi ;
   double chi ;
};
#line 101 "./magick/geometry.h"
typedef struct _GeometryInfo GeometryInfo;
#line 111 "./magick/geometry.h"
struct _RectangleInfo {
   unsigned long width ;
   unsigned long height ;
   long x ;
   long y ;
};
#line 111 "./magick/geometry.h"
typedef struct _RectangleInfo RectangleInfo;
#line 25 "./magick/colorspace.h"
enum __anonenum_ColorspaceType_84 {
    UndefinedColorspace = 0,
    RGBColorspace = 1,
    GRAYColorspace = 2,
    TransparentColorspace = 3,
    OHTAColorspace = 4,
    LabColorspace = 5,
    XYZColorspace = 6,
    YCbCrColorspace = 7,
    YCCColorspace = 8,
    YIQColorspace = 9,
    YPbPrColorspace = 10,
    YUVColorspace = 11,
    CMYKColorspace = 12,
    sRGBColorspace = 13,
    HSBColorspace = 14,
    HSLColorspace = 15,
    HWBColorspace = 16,
    Rec601LumaColorspace = 17,
    Rec601YCbCrColorspace = 18,
    Rec709LumaColorspace = 19,
    Rec709YCbCrColorspace = 20,
    LogColorspace = 21,
    CMYColorspace = 22
} ;
#line 25 "./magick/colorspace.h"
typedef enum __anonenum_ColorspaceType_84 ColorspaceType;
#line 25 "./magick/constitute.h"
enum __anonenum_StorageType_85 {
    UndefinedPixel = 0,
    CharPixel = 1,
    DoublePixel = 2,
    FloatPixel = 3,
    IntegerPixel = 4,
    LongPixel = 5,
    QuantumPixel = 6,
    ShortPixel = 7
} ;
#line 25 "./magick/constitute.h"
typedef enum __anonenum_StorageType_85 StorageType;
#line 28 "./magick/pixel.h"
struct _LongPixelPacket {
   unsigned long red ;
   unsigned long green ;
   unsigned long blue ;
   unsigned long opacity ;
   unsigned long index ;
};
#line 28 "./magick/pixel.h"
typedef struct _LongPixelPacket LongPixelPacket;
#line 38 "./magick/pixel.h"
struct _MagickPixelPacket {
   ClassType storage_class ;
   ColorspaceType colorspace ;
   MagickBooleanType matte ;
   double fuzz ;
   unsigned long depth ;
   MagickRealType red ;
   MagickRealType green ;
   MagickRealType blue ;
   MagickRealType opacity ;
   MagickRealType index ;
};
#line 38 "./magick/pixel.h"
typedef struct _MagickPixelPacket MagickPixelPacket;
#line 63 "./magick/pixel.h"
typedef Quantum IndexPacket;
#line 65 "./magick/pixel.h"
struct _PixelPacket {
   Quantum blue ;
   Quantum green ;
   Quantum red ;
   Quantum opacity ;
};
#line 65 "./magick/pixel.h"
typedef struct _PixelPacket PixelPacket;
#line 25 "./magick/semaphore.h"
struct SemaphoreInfo;
#line 25 "./magick/semaphore.h"
typedef struct SemaphoreInfo SemaphoreInfo;
#line 28 "./magick/exception.h"
enum __anonenum_ExceptionType_86 {
    UndefinedException = 0,
    WarningException = 300,
    ResourceLimitWarning = 300,
    TypeWarning = 305,
    OptionWarning = 310,
    DelegateWarning = 315,
    MissingDelegateWarning = 320,
    CorruptImageWarning = 325,
    FileOpenWarning = 330,
    BlobWarning = 335,
    StreamWarning = 340,
    CacheWarning = 345,
    CoderWarning = 350,
    ModuleWarning = 355,
    DrawWarning = 360,
    ImageWarning = 365,
    WandWarning = 370,
    RandomWarning = 375,
    XServerWarning = 380,
    MonitorWarning = 385,
    RegistryWarning = 390,
    ConfigureWarning = 395,
    PolicyWarning = 399,
    ErrorException = 400,
    ResourceLimitError = 400,
    TypeError = 405,
    OptionError = 410,
    DelegateError = 415,
    MissingDelegateError = 420,
    CorruptImageError = 425,
    FileOpenError = 430,
    BlobError = 435,
    StreamError = 440,
    CacheError = 445,
    CoderError = 450,
    ModuleError = 455,
    DrawError = 460,
    ImageError = 465,
    WandError = 470,
    RandomError = 475,
    XServerError = 480,
    MonitorError = 485,
    RegistryError = 490,
    ConfigureError = 495,
    PolicyError = 499,
    FatalErrorException = 700,
    ResourceLimitFatalError = 700,
    TypeFatalError = 705,
    OptionFatalError = 710,
    DelegateFatalError = 715,
    MissingDelegateFatalError = 720,
    CorruptImageFatalError = 725,
    FileOpenFatalError = 730,
    BlobFatalError = 735,
    StreamFatalError = 740,
    CacheFatalError = 745,
    CoderFatalError = 750,
    ModuleFatalError = 755,
    DrawFatalError = 760,
    ImageFatalError = 765,
    WandFatalError = 770,
    RandomFatalError = 775,
    XServerFatalError = 780,
    MonitorFatalError = 785,
    RegistryFatalError = 790,
    ConfigureFatalError = 795,
    PolicyFatalError = 799
} ;
#line 28 "./magick/exception.h"
typedef enum __anonenum_ExceptionType_86 ExceptionType;
#line 99 "./magick/exception.h"
struct _ExceptionInfo {
   ExceptionType severity ;
   int error_number ;
   char *reason ;
   char *description ;
   void *exceptions ;
   MagickBooleanType relinquish ;
   SemaphoreInfo *semaphore ;
   unsigned long signature ;
};
#line 124 "./magick/exception.h"
typedef void (*ErrorHandler)(ExceptionType  , char const   * , char const   * );
#line 127 "./magick/exception.h"
typedef void (*FatalErrorHandler)(ExceptionType  , char const   * ,
                                  char const   * );
#line 130 "./magick/exception.h"
typedef void (*WarningHandler)(ExceptionType  , char const   * , char const   * );
#line 28 "./magick/color.h"
enum __anonenum_ComplianceType_87 {
    UndefinedCompliance = 0,
    NoCompliance = 0,
    SVGCompliance = 1,
    X11Compliance = 2,
    XPMCompliance = 4,
    AllCompliance = 2147483647
} ;
#line 28 "./magick/color.h"
typedef enum __anonenum_ComplianceType_87 ComplianceType;
#line 38 "./magick/color.h"
struct _ColorInfo {
   char *path ;
   char *name ;
   ComplianceType compliance ;
   MagickPixelPacket color ;
   MagickBooleanType stealth ;
   struct _ColorInfo *previous ;
   struct _ColorInfo *next ;
   unsigned long signature ;
};
#line 38 "./magick/color.h"
typedef struct _ColorInfo ColorInfo;
#line 61 "./magick/color.h"
struct _ColorPacket {
   PixelPacket pixel ;
   IndexPacket index ;
   MagickSizeType count ;
};
#line 61 "./magick/color.h"
typedef struct _ColorPacket ColorPacket;
#line 73 "./magick/color.h"
struct _ErrorInfo {
   double mean_error_per_pixel ;
   double normalized_mean_error ;
   double normalized_maximum_error ;
};
#line 73 "./magick/color.h"
typedef struct _ErrorInfo ErrorInfo;
#line 30 "./magick/image.h"
enum __anonenum_AlphaChannelType_88 {
    UndefinedAlphaChannel = 0,
    ActivateAlphaChannel = 1,
    BackgroundAlphaChannel = 2,
    CopyAlphaChannel = 3,
    DeactivateAlphaChannel = 4,
    ExtractAlphaChannel = 5,
    OpaqueAlphaChannel = 6,
    ResetAlphaChannel = 7,
    SetAlphaChannel = 8,
    ShapeAlphaChannel = 9,
    TransparentAlphaChannel = 10
} ;
#line 30 "./magick/image.h"
typedef enum __anonenum_AlphaChannelType_88 AlphaChannelType;
#line 45
enum __anonenum_ImageType_89 {
    UndefinedType = 0,
    BilevelType = 1,
    GrayscaleType = 2,
    GrayscaleMatteType = 3,
    PaletteType = 4,
    PaletteMatteType = 5,
    TrueColorType = 6,
    TrueColorMatteType = 7,
    ColorSeparationType = 8,
    ColorSeparationMatteType = 9,
    OptimizeType = 10,
    PaletteBilevelMatteType = 11
} ;
#line 45 "./magick/image.h"
typedef enum __anonenum_ImageType_89 ImageType;
#line 61
enum __anonenum_InterlaceType_90 {
    UndefinedInterlace = 0,
    NoInterlace = 1,
    LineInterlace = 2,
    PlaneInterlace = 3,
    PartitionInterlace = 4,
    GIFInterlace = 5,
    JPEGInterlace = 6,
    PNGInterlace = 7
} ;
#line 61 "./magick/image.h"
typedef enum __anonenum_InterlaceType_90 InterlaceType;
#line 73
enum __anonenum_OrientationType_91 {
    UndefinedOrientation = 0,
    TopLeftOrientation = 1,
    TopRightOrientation = 2,
    BottomRightOrientation = 3,
    BottomLeftOrientation = 4,
    LeftTopOrientation = 5,
    RightTopOrientation = 6,
    RightBottomOrientation = 7,
    LeftBottomOrientation = 8
} ;
#line 73 "./magick/image.h"
typedef enum __anonenum_OrientationType_91 OrientationType;
#line 86
enum __anonenum_ResolutionType_92 {
    UndefinedResolution = 0,
    PixelsPerInchResolution = 1,
    PixelsPerCentimeterResolution = 2
} ;
#line 86 "./magick/image.h"
typedef enum __anonenum_ResolutionType_92 ResolutionType;
#line 93 "./magick/image.h"
struct _PrimaryInfo {
   double x ;
   double y ;
   double z ;
};
#line 93 "./magick/image.h"
typedef struct _PrimaryInfo PrimaryInfo;
#line 101 "./magick/image.h"
struct _SegmentInfo {
   double x1 ;
   double y1 ;
   double x2 ;
   double y2 ;
};
#line 101 "./magick/image.h"
typedef struct _SegmentInfo SegmentInfo;
#line 110
enum __anonenum_TransmitType_93 {
    UndefinedTransmitType = 0,
    FileTransmitType = 1,
    BlobTransmitType = 2,
    StreamTransmitType = 3,
    ImageTransmitType = 4
} ;
#line 110 "./magick/image.h"
typedef enum __anonenum_TransmitType_93 TransmitType;
#line 119 "./magick/image.h"
struct _ChromaticityInfo {
   PrimaryInfo red_primary ;
   PrimaryInfo green_primary ;
   PrimaryInfo blue_primary ;
   PrimaryInfo white_point ;
};
#line 119 "./magick/image.h"
typedef struct _ChromaticityInfo ChromaticityInfo;
#line 25 "./magick/stream.h"
typedef size_t (*StreamHandler)(Image const   * , void const   * , size_t  );
#line 30 "./magick/blob.h"
enum __anonenum_MapMode_94 {
    ReadMode = 0,
    WriteMode = 1,
    IOMode = 2
} ;
#line 30 "./magick/blob.h"
typedef enum __anonenum_MapMode_94 MapMode;
#line 27 "./magick/cache-view.h"
enum __anonenum_VirtualPixelMethod_95 {
    UndefinedVirtualPixelMethod = 0,
    BackgroundVirtualPixelMethod = 1,
    ConstantVirtualPixelMethod = 2,
    DitherVirtualPixelMethod = 3,
    EdgeVirtualPixelMethod = 4,
    MirrorVirtualPixelMethod = 5,
    RandomVirtualPixelMethod = 6,
    TileVirtualPixelMethod = 7,
    TransparentVirtualPixelMethod = 8,
    MaskVirtualPixelMethod = 9,
    BlackVirtualPixelMethod = 10,
    GrayVirtualPixelMethod = 11,
    WhiteVirtualPixelMethod = 12,
    HorizontalTileVirtualPixelMethod = 13,
    VerticalTileVirtualPixelMethod = 14,
    HorizontalTileEdgeVirtualPixelMethod = 15,
    VerticalTileEdgeVirtualPixelMethod = 16,
    CheckerTileVirtualPixelMethod = 17
} ;
#line 27 "./magick/cache-view.h"
typedef enum __anonenum_VirtualPixelMethod_95 VirtualPixelMethod;
#line 49
struct _ViewInfo;
#line 49 "./magick/cache-view.h"
typedef struct _ViewInfo ViewInfo;
#line 25 "./magick/composite.h"
enum __anonenum_CompositeOperator_96 {
    UndefinedCompositeOp = 0,
    NoCompositeOp = 1,
    AddCompositeOp = 2,
    AtopCompositeOp = 3,
    BlendCompositeOp = 4,
    BumpmapCompositeOp = 5,
    ChangeMaskCompositeOp = 6,
    ClearCompositeOp = 7,
    ColorBurnCompositeOp = 8,
    ColorDodgeCompositeOp = 9,
    ColorizeCompositeOp = 10,
    CopyBlackCompositeOp = 11,
    CopyBlueCompositeOp = 12,
    CopyCompositeOp = 13,
    CopyCyanCompositeOp = 14,
    CopyGreenCompositeOp = 15,
    CopyMagentaCompositeOp = 16,
    CopyOpacityCompositeOp = 17,
    CopyRedCompositeOp = 18,
    CopyYellowCompositeOp = 19,
    DarkenCompositeOp = 20,
    DstAtopCompositeOp = 21,
    DstCompositeOp = 22,
    DstInCompositeOp = 23,
    DstOutCompositeOp = 24,
    DstOverCompositeOp = 25,
    DifferenceCompositeOp = 26,
    DisplaceCompositeOp = 27,
    DissolveCompositeOp = 28,
    ExclusionCompositeOp = 29,
    HardLightCompositeOp = 30,
    HueCompositeOp = 31,
    InCompositeOp = 32,
    LightenCompositeOp = 33,
    LinearLightCompositeOp = 34,
    LuminizeCompositeOp = 35,
    MinusCompositeOp = 36,
    ModulateCompositeOp = 37,
    MultiplyCompositeOp = 38,
    OutCompositeOp = 39,
    OverCompositeOp = 40,
    OverlayCompositeOp = 41,
    PlusCompositeOp = 42,
    ReplaceCompositeOp = 43,
    SaturateCompositeOp = 44,
    ScreenCompositeOp = 45,
    SoftLightCompositeOp = 46,
    SrcAtopCompositeOp = 47,
    SrcCompositeOp = 48,
    SrcInCompositeOp = 49,
    SrcOutCompositeOp = 50,
    SrcOverCompositeOp = 51,
    SubtractCompositeOp = 52,
    ThresholdCompositeOp = 53,
    XorCompositeOp = 54,
    DivideCompositeOp = 55
} ;
#line 25 "./magick/composite.h"
typedef enum __anonenum_CompositeOperator_96 CompositeOperator;
#line 25 "./magick/compress.h"
enum __anonenum_CompressionType_97 {
    UndefinedCompression = 0,
    NoCompression = 1,
    BZipCompression = 2,
    DXT1Compression = 3,
    DXT3Compression = 4,
    DXT5Compression = 5,
    FaxCompression = 6,
    Group4Compression = 7,
    JPEGCompression = 8,
    JPEG2000Compression = 9,
    LosslessJPEGCompression = 10,
    LZWCompression = 11,
    RLECompression = 12,
    ZipCompression = 13
} ;
#line 25 "./magick/compress.h"
typedef enum __anonenum_CompressionType_97 CompressionType;
#line 43
struct _Ascii85Info;
#line 43 "./magick/compress.h"
typedef struct _Ascii85Info Ascii85Info;
#line 25 "./magick/effect.h"
enum __anonenum_PreviewType_98 {
    UndefinedPreview = 0,
    RotatePreview = 1,
    ShearPreview = 2,
    RollPreview = 3,
    HuePreview = 4,
    SaturationPreview = 5,
    BrightnessPreview = 6,
    GammaPreview = 7,
    SpiffPreview = 8,
    DullPreview = 9,
    GrayscalePreview = 10,
    QuantizePreview = 11,
    DespecklePreview = 12,
    ReduceNoisePreview = 13,
    AddNoisePreview = 14,
    SharpenPreview = 15,
    BlurPreview = 16,
    ThresholdPreview = 17,
    EdgeDetectPreview = 18,
    SpreadPreview = 19,
    SolarizePreview = 20,
    ShadePreview = 21,
    RaisePreview = 22,
    SegmentPreview = 23,
    SwirlPreview = 24,
    ImplodePreview = 25,
    WavePreview = 26,
    OilPaintPreview = 27,
    CharcoalDrawingPreview = 28,
    JPEGPreview = 29
} ;
#line 25 "./magick/effect.h"
typedef enum __anonenum_PreviewType_98 PreviewType;
#line 25 "./magick/layer.h"
enum __anonenum_DisposeType_99 {
    UnrecognizedDispose = 0,
    UndefinedDispose = 0,
    NoneDispose = 1,
    BackgroundDispose = 2,
    PreviousDispose = 3
} ;
#line 25 "./magick/layer.h"
typedef enum __anonenum_DisposeType_99 DisposeType;
#line 34
enum __anonenum_ImageLayerMethod_100 {
    UndefinedLayer = 0,
    CoalesceLayer = 1,
    CompareAnyLayer = 2,
    CompareClearLayer = 3,
    CompareOverlayLayer = 4,
    DisposeLayer = 5,
    OptimizeLayer = 6,
    OptimizeImageLayer = 7,
    OptimizePlusLayer = 8,
    OptimizeTransLayer = 9,
    RemoveDupsLayer = 10,
    RemoveZeroLayer = 11,
    CompositeLayer = 12,
    MergeLayer = 13,
    FlattenLayer = 14,
    MosaicLayer = 15,
    TrimBoundsLayer = 16
} ;
#line 34 "./magick/layer.h"
typedef enum __anonenum_ImageLayerMethod_100 ImageLayerMethod;
#line 25 "./magick/monitor.h"
typedef MagickBooleanType (*MagickProgressMonitor)(char const   * ,
                                                   MagickOffsetType  ,
                                                   MagickSizeType  , void * );
#line 29 "./magick/string_.h"
struct _StringInfo {
   char path[4096] ;
   unsigned char *datum ;
   size_t length ;
   unsigned long signature ;
};
#line 29 "./magick/string_.h"
typedef struct _StringInfo StringInfo;
#line 27 "./magick/profile.h"
struct _ProfileInfo {
   char *name ;
   size_t length ;
   unsigned char *info ;
   unsigned long signature ;
};
#line 27 "./magick/profile.h"
typedef struct _ProfileInfo ProfileInfo;
#line 42
enum __anonenum_RenderingIntent_101 {
    UndefinedIntent = 0,
    SaturationIntent = 1,
    PerceptualIntent = 2,
    AbsoluteIntent = 3,
    RelativeIntent = 4
} ;
#line 42 "./magick/profile.h"
typedef enum __anonenum_RenderingIntent_101 RenderingIntent;
#line 27 "./magick/quantum.h"
enum __anonenum_EndianType_102 {
    UndefinedEndian = 0,
    LSBEndian = 1,
    MSBEndian = 2
} ;
#line 27 "./magick/quantum.h"
typedef enum __anonenum_EndianType_102 EndianType;
#line 34
enum __anonenum_QuantumAlphaType_103 {
    UndefinedQuantumAlpha = 0,
    AssociatedQuantumAlpha = 1,
    DisassociatedQuantumAlpha = 2
} ;
#line 34 "./magick/quantum.h"
typedef enum __anonenum_QuantumAlphaType_103 QuantumAlphaType;
#line 41
enum __anonenum_QuantumFormatType_104 {
    UndefinedQuantumFormat = 0,
    FloatingPointQuantumFormat = 1,
    SignedQuantumFormat = 2,
    UnsignedQuantumFormat = 3
} ;
#line 41 "./magick/quantum.h"
typedef enum __anonenum_QuantumFormatType_104 QuantumFormatType;
#line 49
enum __anonenum_QuantumType_105 {
    UndefinedQuantum = 0,
    AlphaQuantum = 1,
    BlackQuantum = 2,
    BlueQuantum = 3,
    CMYKAQuantum = 4,
    CMYKQuantum = 5,
    CyanQuantum = 6,
    GrayAlphaQuantum = 7,
    GrayQuantum = 8,
    GreenQuantum = 9,
    IndexAlphaQuantum = 10,
    IndexQuantum = 11,
    MagentaQuantum = 12,
    OpacityQuantum = 13,
    RedQuantum = 14,
    RGBAQuantum = 15,
    RGBOQuantum = 16,
    RGBQuantum = 17,
    YellowQuantum = 18,
    GrayPadQuantum = 19,
    RGBPadQuantum = 20,
    CbYCrYQuantum = 21
} ;
#line 49 "./magick/quantum.h"
typedef enum __anonenum_QuantumType_105 QuantumType;
#line 75
struct _QuantumInfo;
#line 75 "./magick/quantum.h"
typedef struct _QuantumInfo QuantumInfo;
#line 27 "./magick/resample.h"
enum __anonenum_FilterTypes_106 {
    UndefinedFilter = 0,
    PointFilter = 1,
    BoxFilter = 2,
    TriangleFilter = 3,
    HermiteFilter = 4,
    HanningFilter = 5,
    HammingFilter = 6,
    BlackmanFilter = 7,
    GaussianFilter = 8,
    QuadraticFilter = 9,
    CubicFilter = 10,
    CatromFilter = 11,
    MitchellFilter = 12,
    LanczosFilter = 13,
    BesselFilter = 14,
    SincFilter = 15,
    KaiserFilter = 16,
    WelshFilter = 17,
    ParzenFilter = 18,
    LagrangeFilter = 19,
    BohmanFilter = 20,
    BartlettFilter = 21,
    SentinelFilter = 22
} ;
#line 27 "./magick/resample.h"
typedef enum __anonenum_FilterTypes_106 FilterTypes;
#line 54
enum __anonenum_InterpolatePixelMethod_107 {
    UndefinedInterpolatePixel = 0,
    AverageInterpolatePixel = 1,
    BicubicInterpolatePixel = 2,
    BilinearInterpolatePixel = 3,
    FilterInterpolatePixel = 4,
    IntegerInterpolatePixel = 5,
    MeshInterpolatePixel = 6,
    NearestNeighborInterpolatePixel = 7,
    SplineInterpolatePixel = 8
} ;
#line 54 "./magick/resample.h"
typedef enum __anonenum_InterpolatePixelMethod_107 InterpolatePixelMethod;
#line 67
struct _ResampleFilter;
#line 67 "./magick/resample.h"
typedef struct _ResampleFilter ResampleFilter;
#line 25 "./magick/timer.h"
enum __anonenum_TimerState_108 {
    UndefinedTimerState = 0,
    StoppedTimerState = 1,
    RunningTimerState = 2
} ;
#line 25 "./magick/timer.h"
typedef enum __anonenum_TimerState_108 TimerState;
#line 32 "./magick/timer.h"
struct _Timer {
   double start ;
   double stop ;
   double total ;
};
#line 32 "./magick/timer.h"
typedef struct _Timer Timer;
#line 40 "./magick/timer.h"
struct _TimerInfo {
   Timer user ;
   Timer elapsed ;
   TimerState state ;
   unsigned long signature ;
};
#line 40 "./magick/timer.h"
typedef struct _TimerInfo TimerInfo;
#line 147 "./magick/image.h"
struct _Image {
   ClassType storage_class ;
   ColorspaceType colorspace ;
   CompressionType compression ;
   unsigned long quality ;
   OrientationType orientation ;
   MagickBooleanType taint ;
   MagickBooleanType matte ;
   unsigned long columns ;
   unsigned long rows ;
   unsigned long depth ;
   unsigned long colors ;
   PixelPacket *colormap ;
   PixelPacket background_color ;
   PixelPacket border_color ;
   PixelPacket matte_color ;
   double gamma ;
   ChromaticityInfo chromaticity ;
   RenderingIntent rendering_intent ;
   void *profiles ;
   ResolutionType units ;
   char *montage ;
   char *directory ;
   char *geometry ;
   long offset ;
   double x_resolution ;
   double y_resolution ;
   RectangleInfo page ;
   RectangleInfo extract_info ;
   RectangleInfo tile_info ;
   double bias ;
   double blur ;
   double fuzz ;
   FilterTypes filter ;
   InterlaceType interlace ;
   EndianType endian ;
   GravityType gravity ;
   CompositeOperator compose ;
   DisposeType dispose ;
   struct _Image *clip_mask ;
   unsigned long scene ;
   unsigned long delay ;
   long ticks_per_second ;
   unsigned long iterations ;
   unsigned long total_colors ;
   long start_loop ;
   ErrorInfo error ;
   TimerInfo timer ;
   MagickBooleanType (*progress_monitor)(char const   * , MagickOffsetType  ,
                                         MagickSizeType  , void * ) ;
   void *client_data ;
   void *cache ;
   void *attributes ;
   Ascii85Info *ascii85 ;
   BlobInfo *blob ;
   char filename[4096] ;
   char magick_filename[4096] ;
   char magick[4096] ;
   unsigned long magick_columns ;
   unsigned long magick_rows ;
   ExceptionInfo exception ;
   MagickBooleanType debug ;
   long volatile   reference_count ;
   SemaphoreInfo *semaphore ;
   ProfileInfo color_profile ;
   ProfileInfo iptc_profile ;
   ProfileInfo *generic_profile ;
   unsigned long generic_profiles ;
   unsigned long signature ;
   struct _Image *previous ;
   struct _Image *list ;
   struct _Image *next ;
   InterpolatePixelMethod interpolate ;
   MagickBooleanType black_point_compensation ;
   PixelPacket transparent_color ;
   struct _Image *mask ;
   RectangleInfo tile_offset ;
   void *properties ;
   void *artifacts ;
   ImageType type ;
   MagickBooleanType dither ;
};
#line 335 "./magick/image.h"
struct _ImageInfo {
   CompressionType compression ;
   OrientationType orientation ;
   MagickBooleanType temporary ;
   MagickBooleanType adjoin ;
   MagickBooleanType affirm ;
   MagickBooleanType antialias ;
   char *size ;
   char *extract ;
   char *page ;
   char *scenes ;
   unsigned long scene ;
   unsigned long number_scenes ;
   unsigned long depth ;
   InterlaceType interlace ;
   EndianType endian ;
   ResolutionType units ;
   unsigned long quality ;
   char *sampling_factor ;
   char *server_name ;
   char *font ;
   char *texture ;
   char *density ;
   double pointsize ;
   double fuzz ;
   PixelPacket background_color ;
   PixelPacket border_color ;
   PixelPacket matte_color ;
   MagickBooleanType dither ;
   MagickBooleanType monochrome ;
   unsigned long colors ;
   ColorspaceType colorspace ;
   ImageType type ;
   PreviewType preview_type ;
   long group ;
   MagickBooleanType ping ;
   MagickBooleanType verbose ;
   char *view ;
   char *authenticate ;
   ChannelType channel ;
   Image *attributes ;
   void *options ;
   MagickBooleanType (*progress_monitor)(char const   * , MagickOffsetType  ,
                                         MagickSizeType  , void * ) ;
   void *client_data ;
   void *cache ;
   size_t (*stream)(Image const   * , void const   * , size_t  ) ;
   FILE *file ;
   void *blob ;
   size_t length ;
   char magick[4096] ;
   char unique[4096] ;
   char zero[4096] ;
   char filename[4096] ;
   MagickBooleanType debug ;
   char *tile ;
   unsigned long subimage ;
   unsigned long subrange ;
   PixelPacket pen ;
   unsigned long signature ;
   VirtualPixelMethod virtual_pixel_method ;
   PixelPacket transparent_color ;
   void *profile ;
   MagickBooleanType synchronize ;
};
#line 25 "./magick/type.h"
enum __anonenum_StretchType_109 {
    UndefinedStretch = 0,
    NormalStretch = 1,
    UltraCondensedStretch = 2,
    ExtraCondensedStretch = 3,
    CondensedStretch = 4,
    SemiCondensedStretch = 5,
    SemiExpandedStretch = 6,
    ExpandedStretch = 7,
    ExtraExpandedStretch = 8,
    UltraExpandedStretch = 9,
    AnyStretch = 10
} ;
#line 25 "./magick/type.h"
typedef enum __anonenum_StretchType_109 StretchType;
#line 40
enum __anonenum_StyleType_110 {
    UndefinedStyle = 0,
    NormalStyle = 1,
    ItalicStyle = 2,
    ObliqueStyle = 3,
    AnyStyle = 4
} ;
#line 40 "./magick/type.h"
typedef enum __anonenum_StyleType_110 StyleType;
#line 49 "./magick/type.h"
struct _TypeInfo {
   unsigned long face ;
   char *path ;
   char *name ;
   char *description ;
   char *family ;
   StyleType style ;
   StretchType stretch ;
   unsigned long weight ;
   char *encoding ;
   char *foundry ;
   char *format ;
   char *metrics ;
   char *glyphs ;
   MagickBooleanType stealth ;
   struct _TypeInfo *previous ;
   struct _TypeInfo *next ;
   unsigned long signature ;
};
#line 49 "./magick/type.h"
typedef struct _TypeInfo TypeInfo;
#line 30 "./magick/draw.h"
enum __anonenum_AlignType_111 {
    UndefinedAlign = 0,
    LeftAlign = 1,
    CenterAlign = 2,
    RightAlign = 3
} ;
#line 30 "./magick/draw.h"
typedef enum __anonenum_AlignType_111 AlignType;
#line 38
enum __anonenum_ClipPathUnits_112 {
    UndefinedPathUnits = 0,
    UserSpace = 1,
    UserSpaceOnUse = 2,
    ObjectBoundingBox = 3
} ;
#line 38 "./magick/draw.h"
typedef enum __anonenum_ClipPathUnits_112 ClipPathUnits;
#line 46
enum __anonenum_DecorationType_113 {
    UndefinedDecoration = 0,
    NoDecoration = 1,
    UnderlineDecoration = 2,
    OverlineDecoration = 3,
    LineThroughDecoration = 4
} ;
#line 46 "./magick/draw.h"
typedef enum __anonenum_DecorationType_113 DecorationType;
#line 55
enum __anonenum_FillRule_114 {
    UndefinedRule = 0,
    EvenOddRule = 1,
    NonZeroRule = 2
} ;
#line 55 "./magick/draw.h"
typedef enum __anonenum_FillRule_114 FillRule;
#line 63
enum __anonenum_GradientType_115 {
    UndefinedGradient = 0,
    LinearGradient = 1,
    RadialGradient = 2
} ;
#line 63 "./magick/draw.h"
typedef enum __anonenum_GradientType_115 GradientType;
#line 70
enum __anonenum_LineCap_116 {
    UndefinedCap = 0,
    ButtCap = 1,
    RoundCap = 2,
    SquareCap = 3
} ;
#line 70 "./magick/draw.h"
typedef enum __anonenum_LineCap_116 LineCap;
#line 78
enum __anonenum_LineJoin_117 {
    UndefinedJoin = 0,
    MiterJoin = 1,
    RoundJoin = 2,
    BevelJoin = 3
} ;
#line 78 "./magick/draw.h"
typedef enum __anonenum_LineJoin_117 LineJoin;
#line 86
enum __anonenum_PaintMethod_118 {
    UndefinedMethod = 0,
    PointMethod = 1,
    ReplaceMethod = 2,
    FloodfillMethod = 3,
    FillToBorderMethod = 4,
    ResetMethod = 5
} ;
#line 86 "./magick/draw.h"
typedef enum __anonenum_PaintMethod_118 PaintMethod;
#line 96
enum __anonenum_PrimitiveType_119 {
    UndefinedPrimitive = 0,
    PointPrimitive = 1,
    LinePrimitive = 2,
    RectanglePrimitive = 3,
    RoundRectanglePrimitive = 4,
    ArcPrimitive = 5,
    EllipsePrimitive = 6,
    CirclePrimitive = 7,
    PolylinePrimitive = 8,
    PolygonPrimitive = 9,
    BezierPrimitive = 10,
    ColorPrimitive = 11,
    MattePrimitive = 12,
    TextPrimitive = 13,
    ImagePrimitive = 14,
    PathPrimitive = 15
} ;
#line 96 "./magick/draw.h"
typedef enum __anonenum_PrimitiveType_119 PrimitiveType;
#line 116
enum __anonenum_ReferenceType_120 {
    UndefinedReference = 0,
    GradientReference = 1
} ;
#line 116 "./magick/draw.h"
typedef enum __anonenum_ReferenceType_120 ReferenceType;
#line 122
enum __anonenum_SpreadMethod_121 {
    UndefinedSpread = 0,
    PadSpread = 1,
    ReflectSpread = 2,
    RepeatSpread = 3
} ;
#line 122 "./magick/draw.h"
typedef enum __anonenum_SpreadMethod_121 SpreadMethod;
#line 130 "./magick/draw.h"
struct _PointInfo {
   double x ;
   double y ;
};
#line 130 "./magick/draw.h"
typedef struct _PointInfo PointInfo;
#line 137 "./magick/draw.h"
struct _StopInfo {
   MagickPixelPacket color ;
   MagickRealType offset ;
};
#line 137 "./magick/draw.h"
typedef struct _StopInfo StopInfo;
#line 146 "./magick/draw.h"
struct _GradientInfo {
   GradientType type ;
   RectangleInfo bounding_box ;
   SegmentInfo gradient_vector ;
   StopInfo *stops ;
   unsigned long number_stops ;
   SpreadMethod spread ;
   MagickBooleanType debug ;
   unsigned long signature ;
   PointInfo center ;
   MagickRealType radius ;
};
#line 146 "./magick/draw.h"
typedef struct _GradientInfo GradientInfo;
#line 179 "./magick/draw.h"
struct _ElementReference {
   char *id ;
   ReferenceType type ;
   GradientInfo gradient ;
   unsigned long signature ;
   struct _ElementReference *previous ;
   struct _ElementReference *next ;
};
#line 179 "./magick/draw.h"
typedef struct _ElementReference ElementReference;
#line 198 "./magick/draw.h"
struct _DrawInfo {
   char *primitive ;
   char *geometry ;
   RectangleInfo viewbox ;
   AffineMatrix affine ;
   GravityType gravity ;
   PixelPacket fill ;
   PixelPacket stroke ;
   double stroke_width ;
   GradientInfo gradient ;
   Image *fill_pattern ;
   Image *tile ;
   Image *stroke_pattern ;
   MagickBooleanType stroke_antialias ;
   MagickBooleanType text_antialias ;
   FillRule fill_rule ;
   LineCap linecap ;
   LineJoin linejoin ;
   unsigned long miterlimit ;
   double dash_offset ;
   DecorationType decorate ;
   CompositeOperator compose ;
   char *text ;
   unsigned long face ;
   char *font ;
   char *metrics ;
   char *family ;
   StyleType style ;
   StretchType stretch ;
   unsigned long weight ;
   char *encoding ;
   double pointsize ;
   char *density ;
   AlignType align ;
   PixelPacket undercolor ;
   PixelPacket border_color ;
   char *server_name ;
   double *dash_pattern ;
   char *clip_mask ;
   SegmentInfo bounds ;
   ClipPathUnits clip_units ;
   Quantum opacity ;
   MagickBooleanType render ;
   ElementReference element_reference ;
   MagickBooleanType debug ;
   unsigned long signature ;
   double kerning ;
   double interword_spacing ;
};
#line 198 "./magick/draw.h"
typedef struct _DrawInfo DrawInfo;
#line 324 "./magick/draw.h"
struct _PrimitiveInfo {
   PointInfo point ;
   unsigned long coordinates ;
   PrimitiveType primitive ;
   PaintMethod method ;
   char *text ;
};
#line 324 "./magick/draw.h"
typedef struct _PrimitiveInfo PrimitiveInfo;
#line 342 "./magick/draw.h"
struct _TypeMetric {
   PointInfo pixels_per_em ;
   double ascent ;
   double descent ;
   double width ;
   double height ;
   double max_advance ;
   double underline_position ;
   double underline_thickness ;
   SegmentInfo bounds ;
   PointInfo origin ;
};
#line 342 "./magick/draw.h"
typedef struct _TypeMetric TypeMetric;
#line 34 "./magick/log.h"
enum __anonenum_LogEventType_122 {
    UndefinedEvents = 0,
    NoEvents = 0,
    TraceEvent = 1,
    AnnotateEvent = 2,
    BlobEvent = 4,
    CacheEvent = 8,
    CoderEvent = 16,
    ConfigureEvent = 32,
    DeprecateEvent = 64,
    DrawEvent = 128,
    ExceptionEvent = 256,
    LocaleEvent = 512,
    ModuleEvent = 1024,
    PolicyEvent = 2048,
    ResourceEvent = 4096,
    TransformEvent = 8192,
    UserEvent = 16384,
    WandEvent = 32768,
    X11Event = 65536,
    AllEvents = 2147483647
} ;
#line 34 "./magick/log.h"
typedef enum __anonenum_LogEventType_122 LogEventType;
#line 58
struct _LogInfo;
#line 58 "./magick/log.h"
typedef struct _LogInfo LogInfo;
#line 25 "./magick/decorate.h"
struct _FrameInfo {
   unsigned long width ;
   unsigned long height ;
   long x ;
   long y ;
   long inner_bevel ;
   long outer_bevel ;
};
#line 25 "./magick/decorate.h"
typedef struct _FrameInfo FrameInfo;
#line 27 "./magick/fx.h"
enum __anonenum_MagickEvaluateOperator_123 {
    UndefinedEvaluateOperator = 0,
    AddEvaluateOperator = 1,
    AndEvaluateOperator = 2,
    DivideEvaluateOperator = 3,
    LeftShiftEvaluateOperator = 4,
    MaxEvaluateOperator = 5,
    MinEvaluateOperator = 6,
    MultiplyEvaluateOperator = 7,
    OrEvaluateOperator = 8,
    RightShiftEvaluateOperator = 9,
    SetEvaluateOperator = 10,
    SubtractEvaluateOperator = 11,
    XorEvaluateOperator = 12,
    PowEvaluateOperator = 13,
    LogEvaluateOperator = 14,
    ThresholdEvaluateOperator = 15,
    ThresholdBlackEvaluateOperator = 16,
    ThresholdWhiteEvaluateOperator = 17,
    GaussianNoiseEvaluateOperator = 18,
    ImpulseNoiseEvaluateOperator = 19,
    LaplacianNoiseEvaluateOperator = 20,
    MultiplicativeNoiseEvaluateOperator = 21,
    PoissonNoiseEvaluateOperator = 22,
    UniformNoiseEvaluateOperator = 23,
    CosineEvaluateOperator = 24,
    SineEvaluateOperator = 25,
    AddModulusEvaluateOperator = 26
} ;
#line 27 "./magick/fx.h"
typedef enum __anonenum_MagickEvaluateOperator_123 MagickEvaluateOperator;
#line 58
enum __anonenum_MagickFunction_124 {
    UndefinedFunction = 0,
    PolynomialFunction = 1,
    SinusoidFunction = 2,
    ArcsinFunction = 3,
    ArctanFunction = 4
} ;
#line 58 "./magick/fx.h"
typedef enum __anonenum_MagickFunction_124 MagickFunction;
#line 67
enum __anonenum_NoiseType_125 {
    UndefinedNoise = 0,
    UniformNoise = 1,
    GaussianNoise = 2,
    MultiplicativeGaussianNoise = 3,
    ImpulseNoise = 4,
    LaplacianNoise = 5,
    PoissonNoise = 6,
    RandomNoise = 7
} ;
#line 67 "./magick/fx.h"
typedef enum __anonenum_NoiseType_125 NoiseType;
#line 25 "./magick/fx-private.h"
struct _FxInfo;
#line 25 "./magick/fx-private.h"
typedef struct _FxInfo FxInfo;
#line 25 "./magick/memory_.h"
typedef void *(*AcquireMemoryHandler)(size_t  );
#line 25 "./magick/memory_.h"
typedef void (*DestroyMemoryHandler)(void * );
#line 25 "./magick/memory_.h"
typedef void *(*ResizeMemoryHandler)(void * , size_t  );
#line 25 "./magick/option.h"
enum __anonenum_MagickOption_126 {
    MagickUndefinedOptions = -1,
    MagickAlignOptions = 0,
    MagickAlphaOptions = 1,
    MagickBooleanOptions = 2,
    MagickChannelOptions = 3,
    MagickClassOptions = 4,
    MagickClipPathOptions = 5,
    MagickCoderOptions = 6,
    MagickColorOptions = 7,
    MagickColorspaceOptions = 8,
    MagickCommandOptions = 9,
    MagickComposeOptions = 10,
    MagickCompressOptions = 11,
    MagickConfigureOptions = 12,
    MagickDataTypeOptions = 13,
    MagickDebugOptions = 14,
    MagickDecorateOptions = 15,
    MagickDelegateOptions = 16,
    MagickDisposeOptions = 17,
    MagickDistortOptions = 18,
    MagickDitherOptions = 19,
    MagickEndianOptions = 20,
    MagickEvaluateOptions = 21,
    MagickFillRuleOptions = 22,
    MagickFilterOptions = 23,
    MagickFontOptions = 24,
    MagickFontsOptions = 25,
    MagickFormatOptions = 26,
    MagickFunctionOptions = 27,
    MagickGravityOptions = 28,
    MagickImageListOptions = 29,
    MagickIntentOptions = 30,
    MagickInterlaceOptions = 31,
    MagickInterpolateOptions = 32,
    MagickLayerOptions = 33,
    MagickLineCapOptions = 34,
    MagickLineJoinOptions = 35,
    MagickListOptions = 36,
    MagickLocaleOptions = 37,
    MagickLogEventOptions = 38,
    MagickLogOptions = 39,
    MagickMagicOptions = 40,
    MagickMethodOptions = 41,
    MagickMetricOptions = 42,
    MagickMimeOptions = 43,
    MagickModeOptions = 44,
    MagickModuleOptions = 45,
    MagickNoiseOptions = 46,
    MagickOrientationOptions = 47,
    MagickPolicyOptions = 48,
    MagickPolicyDomainOptions = 49,
    MagickPolicyRightsOptions = 50,
    MagickPreviewOptions = 51,
    MagickPrimitiveOptions = 52,
    MagickQuantumFormatOptions = 53,
    MagickResolutionOptions = 54,
    MagickResourceOptions = 55,
    MagickSparseColorOptions = 56,
    MagickStorageOptions = 57,
    MagickStretchOptions = 58,
    MagickStyleOptions = 59,
    MagickThresholdOptions = 60,
    MagickTypeOptions = 61,
    MagickVirtualPixelOptions = 62
} ;
#line 25 "./magick/option.h"
typedef enum __anonenum_MagickOption_126 MagickOption;
#line 93 "./magick/option.h"
struct _OptionInfo {
   char const   *mnemonic ;
   long type ;
   MagickBooleanType stealth ;
};
#line 93 "./magick/option.h"
typedef struct _OptionInfo OptionInfo;
#line 27 "./magick/quantum-private.h"
struct _QuantumState {
   EndianType endian ;
   double minimum ;
   double scale ;
   double inverse_scale ;
   unsigned long pixel ;
   unsigned long bits ;
   unsigned long const   *mask ;
};
#line 27 "./magick/quantum-private.h"
typedef struct _QuantumState QuantumState;
#line 45 "./magick/quantum-private.h"
struct _QuantumInfo {
   unsigned long depth ;
   unsigned long quantum ;
   QuantumFormatType format ;
   double minimum ;
   double maximum ;
   double scale ;
   size_t pad ;
   MagickBooleanType min_is_white ;
   MagickBooleanType pack ;
   QuantumAlphaType alpha_type ;
   unsigned long number_threads ;
   unsigned char **pixels ;
   size_t extent ;
   SemaphoreInfo *semaphore ;
   unsigned long signature ;
};
#line 30 "./magick/random_.h"
struct _RandomInfo;
#line 30 "./magick/random_.h"
typedef struct _RandomInfo RandomInfo;
#line 25 "./magick/splay-tree.h"
struct _SplayTreeInfo;
#line 25 "./magick/splay-tree.h"
typedef struct _SplayTreeInfo SplayTreeInfo;
#line 25 "./magick/statistic.h"
struct _ChannelStatistics {
   unsigned long depth ;
   double minima ;
   double maxima ;
   double mean ;
   double standard_deviation ;
   double kurtosis ;
   double skewness ;
};
#line 25 "./magick/statistic.h"
typedef struct _ChannelStatistics ChannelStatistics;
#line 25 "./magick/utility.h"
enum __anonenum_PathType_127 {
    UndefinedPath = 0,
    MagickPath = 1,
    RootPath = 2,
    HeadPath = 3,
    TailPath = 4,
    BasePath = 5,
    ExtensionPath = 6,
    SubimagePath = 7,
    CanonicalPath = 8
} ;
#line 25 "./magick/utility.h"
typedef enum __anonenum_PathType_127 PathType;
#line 96 "magick/fx.c"
struct _FxInfo {
   Image const   *images ;
   MagickBooleanType matte ;
   char *expression ;
   FILE *file ;
   SplayTreeInfo *colors ;
   SplayTreeInfo *symbols ;
   ResampleFilter **resample_filter ;
   ExceptionInfo *exception ;
};
#line 2420
enum __anonenum_FxPrecedence_128 {
    UndefinedPrecedence = 0,
    NullPrecedence = 1,
    BitwiseComplementPrecedence = 2,
    ExponentPrecedence = 3,
    MultiplyPrecedence = 4,
    AdditionPrecedence = 5,
    ShiftPrecedence = 6,
    RelationalPrecedence = 7,
    EquivalencyPrecedence = 8,
    BitwiseAndPrecedence = 9,
    BitwiseOrPrecedence = 10,
    LogicalAndPrecedence = 11,
    LogicalOrPrecedence = 12,
    TernaryPrecedence = 13,
    AssignmentPrecedence = 14,
    CommaPrecedence = 15,
    SeparatorPrecedence = 16
} ;
#line 2420 "magick/fx.c"
typedef enum __anonenum_FxPrecedence_128 FxPrecedence;
/* compiler builtin: 
   void __builtin_varargs_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin_strcmp(char const   * , char const   * ) ;  */
/* compiler builtin: 
   void *__builtin___memmove_chk(void * , void const   * , unsigned long  ,
                                 unsigned long  ) ;  */
/* compiler builtin: 
   char *__builtin_strpbrk(char const   * , char const   * ) ;  */
/* compiler builtin: 
   void *__builtin_memcpy(void * , void const   * , unsigned long  ) ;  */
/* compiler builtin: 
   double __builtin_exp(double  ) ;  */
/* compiler builtin: 
   long double __builtin_nanl(char const   * ) ;  */
/* compiler builtin: 
   double __builtin_cos(double  ) ;  */
/* compiler builtin: 
   char *__builtin_strchr(char * , int  ) ;  */
/* compiler builtin: 
   float __builtin_atan2f(float  , float  ) ;  */
/* compiler builtin: 
   void *__builtin___memcpy_chk(void * , void const   * , unsigned long  ,
                                unsigned long  ) ;  */
/* compiler builtin: 
   double __builtin_asin(double  ) ;  */
/* compiler builtin: 
   int __builtin_ctz(unsigned int  ) ;  */
/* compiler builtin: 
   char *__builtin_stpcpy(char * , char const   * ) ;  */
/* compiler builtin: 
   double __builtin_nans(char const   * ) ;  */
/* compiler builtin: 
   long double __builtin_atan2l(long double  , long double  ) ;  */
/* compiler builtin: 
   float __builtin_logf(float  ) ;  */
/* compiler builtin: 
   int __builtin___fprintf_chk(void * , int  , char const   *  , ...) ;  */
/* compiler builtin: 
   int __builtin___vsprintf_chk(char * , int  , unsigned long  ,
                                char const   * , __builtin_va_list  ) ;  */
/* compiler builtin: 
   char *__builtin___strncpy_chk(char * , char const   * , unsigned long  ,
                                 unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_log10f(float  ) ;  */
/* compiler builtin: 
   double __builtin_atan(double  ) ;  */
/* compiler builtin: 
   void *__builtin_alloca(unsigned long  ) ;  */
/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin_strncmp(char const   * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   double __builtin_sin(double  ) ;  */
/* compiler builtin: 
   long double __builtin_logl(long double  ) ;  */
/* compiler builtin: 
   float __builtin_coshf(float  ) ;  */
/* compiler builtin: 
   void *__builtin___mempcpy_chk(void * , void const   * , unsigned long  ,
                                 unsigned long  ) ;  */
/* compiler builtin: 
   char *__builtin___strcat_chk(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_nansf(char const   * ) ;  */
/* compiler builtin: 
   void *__builtin_memset(void * , int  , int  ) ;  */
/* compiler builtin: 
   void __builtin_va_copy(__builtin_va_list  , __builtin_va_list  ) ;  */
/* compiler builtin: 
   float __builtin_sinhf(float  ) ;  */
/* compiler builtin: 
   long double __builtin_log10l(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_coshl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_ffs(unsigned int  ) ;  */
/* compiler builtin: 
   float __builtin_asinf(float  ) ;  */
/* compiler builtin: 
   long double __builtin_nansl(char const   * ) ;  */
/* compiler builtin: 
   double __builtin_frexp(double  , int * ) ;  */
/* compiler builtin: 
   double __builtin_tan(double  ) ;  */
/* compiler builtin: 
   long double __builtin_sinhl(long double  ) ;  */
/* compiler builtin: 
   float __builtin_frexpf(float  , int * ) ;  */
/* compiler builtin: 
   long double __builtin_asinl(long double  ) ;  */
/* compiler builtin: 
   void *__builtin_frame_address(unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_floor(double  ) ;  */
/* compiler builtin: 
   float __builtin_tanhf(float  ) ;  */
/* compiler builtin: 
   int __builtin_parityl(unsigned long  ) ;  */
/* compiler builtin: 
   int __builtin_clzl(unsigned long  ) ;  */
/* compiler builtin: 
   double __builtin_powi(double  , int  ) ;  */
/* compiler builtin: 
   long double __builtin_frexpl(long double  , int * ) ;  */
/* compiler builtin: 
   float __builtin_atanf(float  ) ;  */
/* compiler builtin: 
   float __builtin_huge_valf(void) ;  */
/* compiler builtin: 
   float __builtin_sqrtf(float  ) ;  */
/* compiler builtin: 
   float __builtin_fmodf(float  ) ;  */
/* compiler builtin: 
   unsigned long __builtin_object_size(void * , int  ) ;  */
/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned long  , void * ) ;  */
/* compiler builtin: 
   void __builtin_stdarg_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   long double __builtin_tanhl(long double  ) ;  */
/* compiler builtin: 
   double __builtin_nan(char const   * ) ;  */
/* compiler builtin: 
   void __builtin_return(void const   * ) ;  */
/* compiler builtin: 
   long double __builtin_atanl(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_huge_vall(void) ;  */
/* compiler builtin: 
   float __builtin_inff(void) ;  */
/* compiler builtin: 
   long double __builtin_sqrtl(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_fmodl(long double  ) ;  */
/* compiler builtin: 
   int __builtin___printf_chk(int  , char const   *  , ...) ;  */
/* compiler builtin: 
   float __builtin_floorf(float  ) ;  */
/* compiler builtin: 
   float __builtin_fabsf(float  ) ;  */
/* compiler builtin: 
   int __builtin_popcountll(unsigned long long  ) ;  */
/* compiler builtin: 
   int __builtin___sprintf_chk(char * , int  , unsigned long  , char const   * 
                               , ...) ;  */
/* compiler builtin: 
   int __builtin___vprintf_chk(int  , char const   * , __builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin___snprintf_chk(char * , unsigned long  , int  ,
                                unsigned long  , char const   *  , ...) ;  */
/* compiler builtin: 
   long double __builtin_infl(void) ;  */
/* compiler builtin: 
   void *__builtin_mempcpy(void * , void const   * , unsigned long  ) ;  */
/* compiler builtin: 
   long double __builtin_floorl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_ctzl(unsigned long  ) ;  */
/* compiler builtin: 
   long double __builtin_fabsl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_clz(unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_fabs(double  ) ;  */
/* compiler builtin: 
   int __builtin_popcount(unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_ceil(double  ) ;  */
/* compiler builtin: 
   double __builtin_ldexp(double  , int  ) ;  */
/* compiler builtin: 
   float __builtin_sinf(float  ) ;  */
/* compiler builtin: 
   float __builtin_acosf(float  ) ;  */
/* compiler builtin: 
   int __builtin___vsnprintf_chk(char * , unsigned long  , int  ,
                                 unsigned long  , char const   * ,
                                 __builtin_va_list  ) ;  */
/* compiler builtin: 
   double __builtin_sinh(double  ) ;  */
/* compiler builtin: 
   int __builtin_ffsll(unsigned long long  ) ;  */
/* compiler builtin: 
   char *__builtin___strcpy_chk(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   double __builtin_inf(void) ;  */
/* compiler builtin: 
   void __builtin_prefetch(void const   *  , ...) ;  */
/* compiler builtin: 
   long double __builtin_sinl(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_acosl(long double  ) ;  */
/* compiler builtin: 
   double __builtin_sqrt(double  ) ;  */
/* compiler builtin: 
   double __builtin_fmod(double  ) ;  */
/* compiler builtin: 
   char *__builtin_strcpy(char * , char const   * ) ;  */
/* compiler builtin: 
   float __builtin_ceilf(float  ) ;  */
/* compiler builtin: 
   void *__builtin_return_address(unsigned int  ) ;  */
/* compiler builtin: 
   char *__builtin___stpcpy_chk(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_tanf(float  ) ;  */
/* compiler builtin: 
   int __builtin_parityll(unsigned long long  ) ;  */
/* compiler builtin: 
   float __builtin_ldexpf(float  , int  ) ;  */
/* compiler builtin: 
   int __builtin_types_compatible_p(unsigned long  , unsigned long  ) ;  */
/* compiler builtin: 
   double __builtin_log10(double  ) ;  */
/* compiler builtin: 
   float __builtin_expf(float  ) ;  */
/* compiler builtin: 
   int __builtin_clzll(unsigned long long  ) ;  */
/* compiler builtin: 
   double __builtin_tanh(double  ) ;  */
/* compiler builtin: 
   int __builtin_constant_p(int  ) ;  */
/* compiler builtin: 
   long double __builtin_ceill(long double  ) ;  */
/* compiler builtin: 
   long double __builtin_tanl(long double  ) ;  */
/* compiler builtin: 
   double __builtin_log(double  ) ;  */
/* compiler builtin: 
   long double __builtin_ldexpl(long double  , int  ) ;  */
/* compiler builtin: 
   long double __builtin_expl(long double  ) ;  */
/* compiler builtin: 
   int __builtin_popcountl(unsigned long  ) ;  */
/* compiler builtin: 
   void *__builtin___memset_chk(void * , int  , unsigned long  , unsigned long  ) ;  */
/* compiler builtin: 
   char *__builtin___strncat_chk(char * , char const   * , unsigned long  ,
                                 unsigned long  ) ;  */
/* compiler builtin: 
   double __builtin_huge_val(void) ;  */
/* compiler builtin: 
   __builtin_va_list __builtin_next_arg(void) ;  */
/* compiler builtin: 
   float __builtin_powif(float  , int  ) ;  */
/* compiler builtin: 
   int __builtin___vfprintf_chk(void * , int  , char const   * ,
                                __builtin_va_list  ) ;  */
/* compiler builtin: 
   float __builtin_modff(float  , float * ) ;  */
/* compiler builtin: 
   double __builtin_atan2(double  , double  ) ;  */
/* compiler builtin: 
   char *__builtin_strncpy(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   long double __builtin_powil(long double  , int  ) ;  */
/* compiler builtin: 
   float __builtin_cosf(float  ) ;  */
/* compiler builtin: 
   unsigned long __builtin_strspn(char const   * , char const   * ) ;  */
/* compiler builtin: 
   long double __builtin_modfl(long double  , long double * ) ;  */
/* compiler builtin: 
   int __builtin_parity(unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_cosh(double  ) ;  */
/* compiler builtin: 
   char *__builtin_strncat(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   long __builtin_expect(long  , long  ) ;  */
/* compiler builtin: 
   double __builtin_acos(double  ) ;  */
/* compiler builtin: 
   long double __builtin_cosl(long double  ) ;  */
/* compiler builtin: 
   void __builtin_va_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin_ctzll(unsigned long long  ) ;  */
/* compiler builtin: 
   unsigned long __builtin_strcspn(char const   * , char const   * ) ;  */
/* compiler builtin: 
   int __builtin_ffsl(unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_nanf(char const   * ) ;  */
#line 343 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
#line 344
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
#line 345
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
#line 404
extern void _IO_cookie_init(struct _IO_cookie_file *__cfile , int __read_write ,
                            void *__cookie , _IO_cookie_io_functions_t __fns ) ;
#line 413
extern int __underflow(_IO_FILE * ) ;
#line 414
extern int __uflow(_IO_FILE * ) ;
#line 415
extern int __overflow(_IO_FILE * , int  ) ;
#line 416
extern wint_t __wunderflow(_IO_FILE * ) ;
#line 417
extern wint_t __wuflow(_IO_FILE * ) ;
#line 418
extern wint_t __woverflow(_IO_FILE * , wint_t  ) ;
#line 451
extern int _IO_getc(_IO_FILE *__fp ) ;
#line 452
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
#line 453
extern  __attribute__((__nothrow__)) int _IO_feof(_IO_FILE *__fp ) ;
#line 454
extern  __attribute__((__nothrow__)) int _IO_ferror(_IO_FILE *__fp ) ;
#line 456
extern int _IO_peekc_locked(_IO_FILE *__fp ) ;
#line 462
extern  __attribute__((__nothrow__)) void _IO_flockfile(_IO_FILE * ) ;
#line 463
extern  __attribute__((__nothrow__)) void _IO_funlockfile(_IO_FILE * ) ;
#line 464
extern  __attribute__((__nothrow__)) int _IO_ftrylockfile(_IO_FILE * ) ;
#line 481
extern int _IO_vfscanf(_IO_FILE * __restrict   , char const   * __restrict   ,
                       __gnuc_va_list  , int * __restrict   ) ;
#line 483
extern int _IO_vfprintf(_IO_FILE * __restrict   , char const   * __restrict   ,
                        __gnuc_va_list  ) ;
#line 485
extern __ssize_t _IO_padn(_IO_FILE * , int  , __ssize_t  ) ;
#line 486
extern size_t _IO_sgetn(_IO_FILE * , void * , size_t  ) ;
#line 488
extern __off64_t _IO_seekoff(_IO_FILE * , __off64_t  , int  , int  ) ;
#line 489
extern __off64_t _IO_seekpos(_IO_FILE * , __off64_t  , int  ) ;
#line 491
extern  __attribute__((__nothrow__)) void _IO_free_backup_area(_IO_FILE * ) ;
#line 142 "/usr/include/stdio.h"
extern struct _IO_FILE *stdin ;
#line 143
extern struct _IO_FILE *stdout ;
#line 144
extern struct _IO_FILE *stderr ;
#line 154
extern  __attribute__((__nothrow__)) int remove(char const   *__filename ) ;
#line 156
extern  __attribute__((__nothrow__)) int rename(char const   *__old ,
                                                char const   *__new ) ;
#line 161
extern  __attribute__((__nothrow__)) int renameat(int __oldfd ,
                                                  char const   *__old ,
                                                  int __newfd ,
                                                  char const   *__new ) ;
#line 174
extern FILE *tmpfile(void)  __asm__("tmpfile64")  ;
#line 181
extern FILE *tmpfile64(void) ;
#line 185
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
#line 191
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
#line 203
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;
#line 213
extern int fclose(FILE *__stream ) ;
#line 218
extern int fflush(FILE *__stream ) ;
#line 228
extern int fflush_unlocked(FILE *__stream ) ;
#line 238
extern int fcloseall(void) ;
#line 259
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes )  __asm__("fopen64")  ;
#line 261
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream )  __asm__("freopen64")  ;
#line 271
extern FILE *fopen64(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ) ;
#line 273
extern FILE *freopen64(char const   * __restrict  __filename ,
                       char const   * __restrict  __modes ,
                       FILE * __restrict  __stream ) ;
#line 280
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd ,
                                                  char const   *__modes ) ;
#line 286
extern  __attribute__((__nothrow__)) FILE *fopencookie(void * __restrict  __magic_cookie ,
                                                       char const   * __restrict  __modes ,
                                                       _IO_cookie_io_functions_t __io_funcs ) ;
#line 291
extern  __attribute__((__nothrow__)) FILE *fmemopen(void *__s , size_t __len ,
                                                    char const   *__modes ) ;
#line 296
extern  __attribute__((__nothrow__)) FILE *open_memstream(char **__bufloc ,
                                                          size_t *__sizeloc ) ;
#line 303
extern  __attribute__((__nothrow__)) void setbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ) ;
#line 307
extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ,
                                                 int __modes , size_t __n ) ;
#line 314
extern  __attribute__((__nothrow__)) void setbuffer(FILE * __restrict  __stream ,
                                                    char * __restrict  __buf ,
                                                    size_t __size ) ;
#line 318
extern  __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;
#line 327
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
#line 333
extern int printf(char const   * __restrict  __format  , ...) ;
#line 335
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;
#line 342
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
#line 348
__inline static int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) ;
#line 350
extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;
#line 357
extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s ,
                                                                             size_t __maxlen ,
                                                                             char const   * __restrict  __format 
                                                                             , ...) ;
#line 361
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsnprintf)(char * __restrict  __s ,
                                                                              size_t __maxlen ,
                                                                              char const   * __restrict  __format ,
                                                                              __gnuc_va_list __arg ) ;
#line 370
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vasprintf)(char ** __restrict  __ptr ,
                                                                              char const   * __restrict  __f ,
                                                                              __gnuc_va_list __arg ) ;
#line 373
extern  __attribute__((__nothrow__)) int ( /* format attribute */  __asprintf)(char ** __restrict  __ptr ,
                                                                               char const   * __restrict  __fmt 
                                                                               , ...) ;
#line 376
extern  __attribute__((__nothrow__)) int ( /* format attribute */  asprintf)(char ** __restrict  __ptr ,
                                                                             char const   * __restrict  __fmt 
                                                                             , ...) ;
#line 386
extern int ( /* format attribute */  vdprintf)(int __fd ,
                                               char const   * __restrict  __fmt ,
                                               __gnuc_va_list __arg ) ;
#line 389
extern int ( /* format attribute */  dprintf)(int __fd ,
                                              char const   * __restrict  __fmt 
                                              , ...) ;
#line 399
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...) ;
#line 405
extern int scanf(char const   * __restrict  __format  , ...) ;
#line 407
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...) ;
#line 417
extern int ( /* format attribute */  vfscanf)(FILE * __restrict  __s ,
                                              char const   * __restrict  __format ,
                                              __gnuc_va_list __arg ) ;
#line 425
extern int ( /* format attribute */  vscanf)(char const   * __restrict  __format ,
                                             __gnuc_va_list __arg ) ;
#line 429
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsscanf)(char const   * __restrict  __s ,
                                                                            char const   * __restrict  __format ,
                                                                            __gnuc_va_list __arg ) ;
#line 441
extern int fgetc(FILE *__stream ) ;
#line 442
extern int getc(FILE *__stream ) ;
#line 448
__inline static int getchar(void) ;
#line 460
__inline static int getc_unlocked(FILE *__fp ) ;
#line 461
__inline static int getchar_unlocked(void) ;
#line 471
__inline static int fgetc_unlocked(FILE *__fp ) ;
#line 483
extern int fputc(int __c , FILE *__stream ) ;
#line 484
extern int putc(int __c , FILE *__stream ) ;
#line 490
__inline static int putchar(int __c ) ;
#line 504
__inline static int fputc_unlocked(int __c , FILE *__stream ) ;
#line 512
__inline static int putc_unlocked(int __c , FILE *__stream ) ;
#line 513
__inline static int putchar_unlocked(int __c ) ;
#line 517
extern int getw(FILE *__stream ) ;
#line 520
extern int putw(int __w , FILE *__stream ) ;
#line 529
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
#line 537
extern char *gets(char *__s ) ;
#line 550
extern char *fgets_unlocked(char * __restrict  __s , int __n ,
                            FILE * __restrict  __stream ) ;
#line 566
extern __ssize_t __getdelim(char ** __restrict  __lineptr ,
                            size_t * __restrict  __n , int __delimiter ,
                            FILE * __restrict  __stream ) ;
#line 569
extern __ssize_t getdelim(char ** __restrict  __lineptr ,
                          size_t * __restrict  __n , int __delimiter ,
                          FILE * __restrict  __stream ) ;
#line 579
__inline static __ssize_t getline(char ** __restrict  __lineptr ,
                                  size_t * __restrict  __n ,
                                  FILE * __restrict  __stream ) ;
#line 590
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
#line 596
extern int puts(char const   *__s ) ;
#line 603
extern int ungetc(int __c , FILE *__stream ) ;
#line 610
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
#line 616
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
#line 627
extern int fputs_unlocked(char const   * __restrict  __s ,
                          FILE * __restrict  __stream ) ;
#line 638
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size ,
                             size_t __n , FILE * __restrict  __stream ) ;
#line 640
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size ,
                              size_t __n , FILE * __restrict  __stream ) ;
#line 650
extern int fseek(FILE *__stream , long __off , int __whence ) ;
#line 655
extern long ftell(FILE *__stream ) ;
#line 660
extern void rewind(FILE *__stream ) ;
#line 682
extern int fseeko(FILE *__stream , __off64_t __off , int __whence )  __asm__("fseeko64")  ;
#line 685
extern __off64_t ftello(FILE *__stream )  __asm__("ftello64")  ;
#line 707
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos )  __asm__("fgetpos64")  ;
#line 709
extern int fsetpos(FILE *__stream , fpos_t const   *__pos )  __asm__("fsetpos64")  ;
#line 719
extern int fseeko64(FILE *__stream , __off64_t __off , int __whence ) ;
#line 720
extern __off64_t ftello64(FILE *__stream ) ;
#line 721
extern int fgetpos64(FILE * __restrict  __stream , fpos64_t * __restrict  __pos ) ;
#line 722
extern int fsetpos64(FILE *__stream , fpos64_t const   *__pos ) ;
#line 727
extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;
#line 729
extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;
#line 731
extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;
#line 736
extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;
#line 737
__inline static  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
#line 738
__inline static  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
#line 747
extern void perror(char const   *__s ) ;
#line 27 "/usr/include/bits/sys_errlist.h"
extern int sys_nerr ;
#line 28
extern char const   * const  sys_errlist[] ;
#line 31
extern int _sys_nerr ;
#line 32
extern char const   * const  _sys_errlist[] ;
#line 759 "/usr/include/stdio.h"
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
#line 764
extern  __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;
#line 774
extern FILE *popen(char const   *__command , char const   *__modes ) ;
#line 780
extern int pclose(FILE *__stream ) ;
#line 786
extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
#line 792
extern char *cuserid(char *__s ) ;
#line 800
extern  __attribute__((__nothrow__)) int ( /* format attribute */  obstack_printf)(struct obstack * __restrict  __obstack ,
                                                                                   char const   * __restrict  __format 
                                                                                   , ...) ;
#line 803
extern  __attribute__((__nothrow__)) int ( /* format attribute */  obstack_vprintf)(struct obstack * __restrict  __obstack ,
                                                                                    char const   * __restrict  __format ,
                                                                                    __gnuc_va_list __args ) ;
#line 814
extern  __attribute__((__nothrow__)) void flockfile(FILE *__stream ) ;
#line 818
extern  __attribute__((__nothrow__)) int ftrylockfile(FILE *__stream ) ;
#line 821
extern  __attribute__((__nothrow__)) void funlockfile(FILE *__stream ) ;
#line 33 "/usr/include/bits/stdio.h"
__inline static int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) 
{ int tmp ;

  {
  {
#line 36
  fprintf(_coverage_fout, "1\n");
#line 36
  fflush(_coverage_fout);
#line 36
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  }
#line 33
  fprintf(_coverage_fout, "2\n");
#line 33
  fflush(_coverage_fout);
#line 36
  return (tmp);
}
}
#line 40 "/usr/include/bits/stdio.h"
__inline static int getchar(void) 
{ int tmp ;

  {
  {
#line 43
  fprintf(_coverage_fout, "3\n");
#line 43
  fflush(_coverage_fout);
#line 43
  tmp = _IO_getc(stdin);
  }
#line 40
  fprintf(_coverage_fout, "4\n");
#line 40
  fflush(_coverage_fout);
#line 43
  return (tmp);
}
}
#line 49 "/usr/include/bits/stdio.h"
__inline static int fgetc_unlocked(FILE *__fp ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 52
  fprintf(_coverage_fout, "5\n");
#line 52
  fflush(_coverage_fout);
#line 52
  tmp___4 = __builtin_expect((long )((unsigned long )__fp->_IO_read_ptr >= (unsigned long )__fp->_IO_read_end),
                             0L);
  }
#line 49
  fprintf(_coverage_fout, "8\n");
#line 49
  fflush(_coverage_fout);
#line 52
  if (tmp___4) {
    {
#line 52
    fprintf(_coverage_fout, "6\n");
#line 52
    fflush(_coverage_fout);
#line 52
    tmp___2 = __uflow(__fp);
    }
  } else {
#line 52
    fprintf(_coverage_fout, "7\n");
#line 52
    fflush(_coverage_fout);
#line 52
    tmp___3 = __fp->_IO_read_ptr;
#line 52
    (__fp->_IO_read_ptr) ++;
#line 52
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
#line 49
  fprintf(_coverage_fout, "9\n");
#line 49
  fflush(_coverage_fout);
#line 52
  return (tmp___2);
}
}
#line 59 "/usr/include/bits/stdio.h"
__inline static int getc_unlocked(FILE *__fp ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 62
  fprintf(_coverage_fout, "10\n");
#line 62
  fflush(_coverage_fout);
#line 62
  tmp___4 = __builtin_expect((long )((unsigned long )__fp->_IO_read_ptr >= (unsigned long )__fp->_IO_read_end),
                             0L);
  }
#line 59
  fprintf(_coverage_fout, "13\n");
#line 59
  fflush(_coverage_fout);
#line 62
  if (tmp___4) {
    {
#line 62
    fprintf(_coverage_fout, "11\n");
#line 62
    fflush(_coverage_fout);
#line 62
    tmp___2 = __uflow(__fp);
    }
  } else {
#line 62
    fprintf(_coverage_fout, "12\n");
#line 62
    fflush(_coverage_fout);
#line 62
    tmp___3 = __fp->_IO_read_ptr;
#line 62
    (__fp->_IO_read_ptr) ++;
#line 62
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
#line 59
  fprintf(_coverage_fout, "14\n");
#line 59
  fflush(_coverage_fout);
#line 62
  return (tmp___2);
}
}
#line 66 "/usr/include/bits/stdio.h"
__inline static int getchar_unlocked(void) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 69
  fprintf(_coverage_fout, "15\n");
#line 69
  fflush(_coverage_fout);
#line 69
  tmp___4 = __builtin_expect((long )((unsigned long )stdin->_IO_read_ptr >= (unsigned long )stdin->_IO_read_end),
                             0L);
  }
#line 66
  fprintf(_coverage_fout, "18\n");
#line 66
  fflush(_coverage_fout);
#line 69
  if (tmp___4) {
    {
#line 69
    fprintf(_coverage_fout, "16\n");
#line 69
    fflush(_coverage_fout);
#line 69
    tmp___2 = __uflow(stdin);
    }
  } else {
#line 69
    fprintf(_coverage_fout, "17\n");
#line 69
    fflush(_coverage_fout);
#line 69
    tmp___3 = stdin->_IO_read_ptr;
#line 69
    (stdin->_IO_read_ptr) ++;
#line 69
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
#line 66
  fprintf(_coverage_fout, "19\n");
#line 66
  fflush(_coverage_fout);
#line 69
  return (tmp___2);
}
}
#line 75 "/usr/include/bits/stdio.h"
__inline static int putchar(int __c ) 
{ int tmp ;

  {
  {
#line 78
  fprintf(_coverage_fout, "20\n");
#line 78
  fflush(_coverage_fout);
#line 78
  tmp = _IO_putc(__c, stdout);
  }
#line 75
  fprintf(_coverage_fout, "21\n");
#line 75
  fflush(_coverage_fout);
#line 78
  return (tmp);
}
}
#line 84 "/usr/include/bits/stdio.h"
__inline static int fputc_unlocked(int __c , FILE *__stream ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 87
  fprintf(_coverage_fout, "22\n");
#line 87
  fflush(_coverage_fout);
#line 87
  tmp___4 = __builtin_expect((long )((unsigned long )__stream->_IO_write_ptr >= (unsigned long )__stream->_IO_write_end),
                             0L);
  }
#line 84
  fprintf(_coverage_fout, "25\n");
#line 84
  fflush(_coverage_fout);
#line 87
  if (tmp___4) {
    {
#line 87
    fprintf(_coverage_fout, "23\n");
#line 87
    fflush(_coverage_fout);
#line 87
    tmp___2 = __overflow(__stream, (int )((unsigned char )__c));
    }
  } else {
#line 87
    fprintf(_coverage_fout, "24\n");
#line 87
    fflush(_coverage_fout);
#line 87
    tmp___3 = __stream->_IO_write_ptr;
#line 87
    (__stream->_IO_write_ptr) ++;
#line 87
    *tmp___3 = (char )__c;
#line 87
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
#line 84
  fprintf(_coverage_fout, "26\n");
#line 84
  fflush(_coverage_fout);
#line 87
  return (tmp___2);
}
}
#line 94 "/usr/include/bits/stdio.h"
__inline static int putc_unlocked(int __c , FILE *__stream ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 97
  fprintf(_coverage_fout, "27\n");
#line 97
  fflush(_coverage_fout);
#line 97
  tmp___4 = __builtin_expect((long )((unsigned long )__stream->_IO_write_ptr >= (unsigned long )__stream->_IO_write_end),
                             0L);
  }
#line 94
  fprintf(_coverage_fout, "30\n");
#line 94
  fflush(_coverage_fout);
#line 97
  if (tmp___4) {
    {
#line 97
    fprintf(_coverage_fout, "28\n");
#line 97
    fflush(_coverage_fout);
#line 97
    tmp___2 = __overflow(__stream, (int )((unsigned char )__c));
    }
  } else {
#line 97
    fprintf(_coverage_fout, "29\n");
#line 97
    fflush(_coverage_fout);
#line 97
    tmp___3 = __stream->_IO_write_ptr;
#line 97
    (__stream->_IO_write_ptr) ++;
#line 97
    *tmp___3 = (char )__c;
#line 97
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
#line 94
  fprintf(_coverage_fout, "31\n");
#line 94
  fflush(_coverage_fout);
#line 97
  return (tmp___2);
}
}
#line 101 "/usr/include/bits/stdio.h"
__inline static int putchar_unlocked(int __c ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
#line 104
  fprintf(_coverage_fout, "32\n");
#line 104
  fflush(_coverage_fout);
#line 104
  tmp___4 = __builtin_expect((long )((unsigned long )stdout->_IO_write_ptr >= (unsigned long )stdout->_IO_write_end),
                             0L);
  }
#line 101
  fprintf(_coverage_fout, "35\n");
#line 101
  fflush(_coverage_fout);
#line 104
  if (tmp___4) {
    {
#line 104
    fprintf(_coverage_fout, "33\n");
#line 104
    fflush(_coverage_fout);
#line 104
    tmp___2 = __overflow(stdout, (int )((unsigned char )__c));
    }
  } else {
#line 104
    fprintf(_coverage_fout, "34\n");
#line 104
    fflush(_coverage_fout);
#line 104
    tmp___3 = stdout->_IO_write_ptr;
#line 104
    (stdout->_IO_write_ptr) ++;
#line 104
    *tmp___3 = (char )__c;
#line 104
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
#line 101
  fprintf(_coverage_fout, "36\n");
#line 101
  fflush(_coverage_fout);
#line 104
  return (tmp___2);
}
}
#line 111 "/usr/include/bits/stdio.h"
__inline static __ssize_t getline(char ** __restrict  __lineptr ,
                                  size_t * __restrict  __n ,
                                  FILE * __restrict  __stream ) 
{ __ssize_t tmp ;

  {
  {
#line 114
  fprintf(_coverage_fout, "37\n");
#line 114
  fflush(_coverage_fout);
#line 114
  tmp = __getdelim(__lineptr, __n, '\n', __stream);
  }
#line 111
  fprintf(_coverage_fout, "38\n");
#line 111
  fflush(_coverage_fout);
#line 114
  return (tmp);
}
}
#line 121
__inline static  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
#line 121 "/usr/include/bits/stdio.h"
__inline static int feof_unlocked(FILE *__stream ) 
{ 

  {
#line 121
  fprintf(_coverage_fout, "39\n");
#line 121
  fflush(_coverage_fout);
#line 124
  return ((__stream->_flags & 16) != 0);
}
}
#line 128
__inline static  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
#line 128 "/usr/include/bits/stdio.h"
__inline static int ferror_unlocked(FILE *__stream ) 
{ 

  {
#line 128
  fprintf(_coverage_fout, "40\n");
#line 128
  fflush(_coverage_fout);
#line 131
  return ((__stream->_flags & 32) != 0);
}
}
#line 140 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;
#line 145
__inline static  __attribute__((__nothrow__)) double atof(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 148
__inline static  __attribute__((__nothrow__)) int atoi(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 151
__inline static  __attribute__((__nothrow__)) long atol(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 158
__inline static  __attribute__((__nothrow__)) long long atoll(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 165
__inline static  __attribute__((__nothrow__)) double strtod(char const   * __restrict  __nptr ,
                                                            char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 173
__inline static  __attribute__((__nothrow__)) float strtof(char const   * __restrict  __nptr ,
                                                           char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 176
__inline static  __attribute__((__nothrow__)) long double strtold(char const   * __restrict  __nptr ,
                                                                  char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 184
__inline static  __attribute__((__nothrow__)) long strtol(char const   * __restrict  __nptr ,
                                                          char ** __restrict  __endptr ,
                                                          int __base )  __attribute__((__nonnull__(1))) ;
#line 188
__inline static  __attribute__((__nothrow__)) unsigned long strtoul(char const   * __restrict  __nptr ,
                                                                    char ** __restrict  __endptr ,
                                                                    int __base )  __attribute__((__nonnull__(1))) ;
#line 196
__inline static  __attribute__((__nothrow__)) long long strtoq(char const   * __restrict  __nptr ,
                                                               char ** __restrict  __endptr ,
                                                               int __base )  __attribute__((__nonnull__(1))) ;
#line 201
__inline static  __attribute__((__nothrow__)) unsigned long long strtouq(char const   * __restrict  __nptr ,
                                                                         char ** __restrict  __endptr ,
                                                                         int __base )  __attribute__((__nonnull__(1))) ;
#line 210
__inline static  __attribute__((__nothrow__)) long long strtoll(char const   * __restrict  __nptr ,
                                                                char ** __restrict  __endptr ,
                                                                int __base )  __attribute__((__nonnull__(1))) ;
#line 215
__inline static  __attribute__((__nothrow__)) unsigned long long strtoull(char const   * __restrict  __nptr ,
                                                                          char ** __restrict  __endptr ,
                                                                          int __base )  __attribute__((__nonnull__(1))) ;
#line 240
extern  __attribute__((__nothrow__)) long strtol_l(char const   * __restrict  __nptr ,
                                                   char ** __restrict  __endptr ,
                                                   int __base ,
                                                   __locale_t __loc )  __attribute__((__nonnull__(1,4))) ;
#line 244
extern  __attribute__((__nothrow__)) unsigned long strtoul_l(char const   * __restrict  __nptr ,
                                                             char ** __restrict  __endptr ,
                                                             int __base ,
                                                             __locale_t __loc )  __attribute__((__nonnull__(1,4))) ;
#line 250
extern  __attribute__((__nothrow__)) long long strtoll_l(char const   * __restrict  __nptr ,
                                                         char ** __restrict  __endptr ,
                                                         int __base ,
                                                         __locale_t __loc )  __attribute__((__nonnull__(1,4))) ;
#line 256
extern  __attribute__((__nothrow__)) unsigned long long strtoull_l(char const   * __restrict  __nptr ,
                                                                   char ** __restrict  __endptr ,
                                                                   int __base ,
                                                                   __locale_t __loc )  __attribute__((__nonnull__(1,4))) ;
#line 261
extern  __attribute__((__nothrow__)) double strtod_l(char const   * __restrict  __nptr ,
                                                     char ** __restrict  __endptr ,
                                                     __locale_t __loc )  __attribute__((__nonnull__(1,3))) ;
#line 265
extern  __attribute__((__nothrow__)) float strtof_l(char const   * __restrict  __nptr ,
                                                    char ** __restrict  __endptr ,
                                                    __locale_t __loc )  __attribute__((__nonnull__(1,3))) ;
#line 269
extern  __attribute__((__nothrow__)) long double strtold_l(char const   * __restrict  __nptr ,
                                                           char ** __restrict  __endptr ,
                                                           __locale_t __loc )  __attribute__((__nonnull__(1,3))) ;
#line 279
extern  __attribute__((__nothrow__)) double __strtod_internal(char const   * __restrict  __nptr ,
                                                              char ** __restrict  __endptr ,
                                                              int __group )  __attribute__((__nonnull__(1))) ;
#line 282
extern  __attribute__((__nothrow__)) float __strtof_internal(char const   * __restrict  __nptr ,
                                                             char ** __restrict  __endptr ,
                                                             int __group )  __attribute__((__nonnull__(1))) ;
#line 285
extern  __attribute__((__nothrow__)) long double __strtold_internal(char const   * __restrict  __nptr ,
                                                                    char ** __restrict  __endptr ,
                                                                    int __group )  __attribute__((__nonnull__(1))) ;
#line 290
extern  __attribute__((__nothrow__)) long __strtol_internal(char const   * __restrict  __nptr ,
                                                            char ** __restrict  __endptr ,
                                                            int __base ,
                                                            int __group )  __attribute__((__nonnull__(1))) ;
#line 297
extern  __attribute__((__nothrow__)) unsigned long __strtoul_internal(char const   * __restrict  __nptr ,
                                                                      char ** __restrict  __endptr ,
                                                                      int __base ,
                                                                      int __group )  __attribute__((__nonnull__(1))) ;
#line 306
extern  __attribute__((__nothrow__)) long long __strtoll_internal(char const   * __restrict  __nptr ,
                                                                  char ** __restrict  __endptr ,
                                                                  int __base ,
                                                                  int __group )  __attribute__((__nonnull__(1))) ;
#line 314
extern  __attribute__((__nothrow__)) unsigned long long __strtoull_internal(char const   * __restrict  __nptr ,
                                                                            char ** __restrict  __endptr ,
                                                                            int __base ,
                                                                            int __group )  __attribute__((__nonnull__(1))) ;
#line 327
__inline static  __attribute__((__nothrow__)) double strtod(char const   * __restrict  __nptr ,
                                                            char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 327 "/usr/include/stdlib.h"
__inline static double strtod(char const   * __restrict  __nptr ,
                              char ** __restrict  __endptr ) 
{ double tmp ;

  {
  {
#line 330
  fprintf(_coverage_fout, "41\n");
#line 330
  fflush(_coverage_fout);
#line 330
  tmp = __strtod_internal(__nptr, __endptr, 0);
  }
#line 327
  fprintf(_coverage_fout, "42\n");
#line 327
  fflush(_coverage_fout);
#line 330
  return (tmp);
}
}
#line 332
__inline static  __attribute__((__nothrow__)) long strtol(char const   * __restrict  __nptr ,
                                                          char ** __restrict  __endptr ,
                                                          int __base )  __attribute__((__nonnull__(1))) ;
#line 332 "/usr/include/stdlib.h"
__inline static long strtol(char const   * __restrict  __nptr ,
                            char ** __restrict  __endptr , int __base ) 
{ long tmp ;

  {
  {
#line 336
  fprintf(_coverage_fout, "43\n");
#line 336
  fflush(_coverage_fout);
#line 336
  tmp = __strtol_internal(__nptr, __endptr, __base, 0);
  }
#line 332
  fprintf(_coverage_fout, "44\n");
#line 332
  fflush(_coverage_fout);
#line 336
  return (tmp);
}
}
#line 338
__inline static  __attribute__((__nothrow__)) unsigned long strtoul(char const   * __restrict  __nptr ,
                                                                    char ** __restrict  __endptr ,
                                                                    int __base )  __attribute__((__nonnull__(1))) ;
#line 338 "/usr/include/stdlib.h"
__inline static unsigned long strtoul(char const   * __restrict  __nptr ,
                                      char ** __restrict  __endptr , int __base ) 
{ unsigned long tmp ;

  {
  {
#line 342
  fprintf(_coverage_fout, "45\n");
#line 342
  fflush(_coverage_fout);
#line 342
  tmp = __strtoul_internal(__nptr, __endptr, __base, 0);
  }
#line 338
  fprintf(_coverage_fout, "46\n");
#line 338
  fflush(_coverage_fout);
#line 342
  return (tmp);
}
}
#line 348
__inline static  __attribute__((__nothrow__)) float strtof(char const   * __restrict  __nptr ,
                                                           char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 348 "/usr/include/stdlib.h"
__inline static float strtof(char const   * __restrict  __nptr ,
                             char ** __restrict  __endptr ) 
{ float tmp ;

  {
  {
#line 351
  fprintf(_coverage_fout, "47\n");
#line 351
  fflush(_coverage_fout);
#line 351
  tmp = __strtof_internal(__nptr, __endptr, 0);
  }
#line 348
  fprintf(_coverage_fout, "48\n");
#line 348
  fflush(_coverage_fout);
#line 351
  return (tmp);
}
}
#line 354
__inline static  __attribute__((__nothrow__)) long double strtold(char const   * __restrict  __nptr ,
                                                                  char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
#line 354 "/usr/include/stdlib.h"
__inline static long double strtold(char const   * __restrict  __nptr ,
                                    char ** __restrict  __endptr ) 
{ long double tmp ;

  {
  {
#line 357
  fprintf(_coverage_fout, "49\n");
#line 357
  fflush(_coverage_fout);
#line 357
  tmp = __strtold_internal(__nptr, __endptr, 0);
  }
#line 354
  fprintf(_coverage_fout, "50\n");
#line 354
  fflush(_coverage_fout);
#line 357
  return (tmp);
}
}
#line 364
__inline static  __attribute__((__nothrow__)) long long strtoq(char const   * __restrict  __nptr ,
                                                               char ** __restrict  __endptr ,
                                                               int __base )  __attribute__((__nonnull__(1))) ;
#line 364 "/usr/include/stdlib.h"
__inline static long long strtoq(char const   * __restrict  __nptr ,
                                 char ** __restrict  __endptr , int __base ) 
{ long long tmp ;

  {
  {
#line 368
  fprintf(_coverage_fout, "51\n");
#line 368
  fflush(_coverage_fout);
#line 368
  tmp = __strtoll_internal(__nptr, __endptr, __base, 0);
  }
#line 364
  fprintf(_coverage_fout, "52\n");
#line 364
  fflush(_coverage_fout);
#line 368
  return (tmp);
}
}
#line 370
__inline static  __attribute__((__nothrow__)) unsigned long long strtouq(char const   * __restrict  __nptr ,
                                                                         char ** __restrict  __endptr ,
                                                                         int __base )  __attribute__((__nonnull__(1))) ;
#line 370 "/usr/include/stdlib.h"
__inline static unsigned long long strtouq(char const   * __restrict  __nptr ,
                                           char ** __restrict  __endptr ,
                                           int __base ) 
{ unsigned long long tmp ;

  {
  {
#line 374
  fprintf(_coverage_fout, "53\n");
#line 374
  fflush(_coverage_fout);
#line 374
  tmp = __strtoull_internal(__nptr, __endptr, __base, 0);
  }
#line 370
  fprintf(_coverage_fout, "54\n");
#line 370
  fflush(_coverage_fout);
#line 374
  return (tmp);
}
}
#line 380
__inline static  __attribute__((__nothrow__)) long long strtoll(char const   * __restrict  __nptr ,
                                                                char ** __restrict  __endptr ,
                                                                int __base )  __attribute__((__nonnull__(1))) ;
#line 380 "/usr/include/stdlib.h"
__inline static long long strtoll(char const   * __restrict  __nptr ,
                                  char ** __restrict  __endptr , int __base ) 
{ long long tmp ;

  {
  {
#line 384
  fprintf(_coverage_fout, "55\n");
#line 384
  fflush(_coverage_fout);
#line 384
  tmp = __strtoll_internal(__nptr, __endptr, __base, 0);
  }
#line 380
  fprintf(_coverage_fout, "56\n");
#line 380
  fflush(_coverage_fout);
#line 384
  return (tmp);
}
}
#line 386
__inline static  __attribute__((__nothrow__)) unsigned long long strtoull(char const   * __restrict  __nptr ,
                                                                          char ** __restrict  __endptr ,
                                                                          int __base )  __attribute__((__nonnull__(1))) ;
#line 386 "/usr/include/stdlib.h"
__inline static unsigned long long strtoull(char const   * __restrict  __nptr ,
                                            char ** __restrict  __endptr ,
                                            int __base ) 
{ unsigned long long tmp ;

  {
  {
#line 390
  fprintf(_coverage_fout, "57\n");
#line 390
  fflush(_coverage_fout);
#line 390
  tmp = __strtoull_internal(__nptr, __endptr, __base, 0);
  }
#line 386
  fprintf(_coverage_fout, "58\n");
#line 386
  fflush(_coverage_fout);
#line 390
  return (tmp);
}
}
#line 396
__inline static  __attribute__((__nothrow__)) double atof(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 396 "/usr/include/stdlib.h"
__inline static double atof(char const   *__nptr ) 
{ double tmp ;

  {
  {
#line 399
  fprintf(_coverage_fout, "59\n");
#line 399
  fflush(_coverage_fout);
#line 399
  tmp = strtod((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)));
  }
#line 396
  fprintf(_coverage_fout, "60\n");
#line 396
  fflush(_coverage_fout);
#line 399
  return (tmp);
}
}
#line 401
__inline static  __attribute__((__nothrow__)) int atoi(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 401 "/usr/include/stdlib.h"
__inline static int atoi(char const   *__nptr ) 
{ long tmp ;

  {
  {
#line 404
  fprintf(_coverage_fout, "61\n");
#line 404
  fflush(_coverage_fout);
#line 404
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  }
#line 401
  fprintf(_coverage_fout, "62\n");
#line 401
  fflush(_coverage_fout);
#line 404
  return ((int )tmp);
}
}
#line 406
__inline static  __attribute__((__nothrow__)) long atol(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 406 "/usr/include/stdlib.h"
__inline static long atol(char const   *__nptr ) 
{ long tmp ;

  {
  {
#line 409
  fprintf(_coverage_fout, "63\n");
#line 409
  fflush(_coverage_fout);
#line 409
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  }
#line 406
  fprintf(_coverage_fout, "64\n");
#line 406
  fflush(_coverage_fout);
#line 409
  return (tmp);
}
}
#line 415
__inline static  __attribute__((__nothrow__)) long long atoll(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 415 "/usr/include/stdlib.h"
__inline static long long atoll(char const   *__nptr ) 
{ long long tmp ;

  {
  {
#line 418
  fprintf(_coverage_fout, "65\n");
#line 418
  fflush(_coverage_fout);
#line 418
  tmp = strtoll((char const   */* __restrict  */)__nptr,
                (char **/* __restrict  */)((char **)((void *)0)), 10);
  }
#line 415
  fprintf(_coverage_fout, "66\n");
#line 415
  fflush(_coverage_fout);
#line 418
  return (tmp);
}
}
#line 429
extern  __attribute__((__nothrow__)) char *l64a(long __n ) ;
#line 432
extern  __attribute__((__nothrow__)) long a64l(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 109 "/usr/include/sys/select.h"
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
#line 121
extern int pselect(int __nfds , fd_set * __restrict  __readfds ,
                   fd_set * __restrict  __writefds ,
                   fd_set * __restrict  __exceptfds ,
                   struct timespec  const  * __restrict  __timeout ,
                   __sigset_t const   * __restrict  __sigmask ) ;
#line 30 "/usr/include/sys/sysmacros.h"
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
#line 33
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
#line 36
__inline static  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
#line 41
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
#line 41 "/usr/include/sys/sysmacros.h"
__inline static unsigned int gnu_dev_major(unsigned long long __dev ) 
{ 

  {
#line 41
  fprintf(_coverage_fout, "67\n");
#line 41
  fflush(_coverage_fout);
#line 44
  return ((unsigned int )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
#line 47
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
#line 47 "/usr/include/sys/sysmacros.h"
__inline static unsigned int gnu_dev_minor(unsigned long long __dev ) 
{ 

  {
#line 47
  fprintf(_coverage_fout, "68\n");
#line 47
  fflush(_coverage_fout);
#line 50
  return ((unsigned int )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
#line 53
__inline static  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
#line 53 "/usr/include/sys/sysmacros.h"
__inline static unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                   unsigned int __minor ) 
{ 

  {
#line 53
  fprintf(_coverage_fout, "69\n");
#line 53
  fflush(_coverage_fout);
#line 56
  return (((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32));
}
}
#line 445 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) long random(void) ;
#line 448
extern  __attribute__((__nothrow__)) void srandom(unsigned int __seed ) ;
#line 454
extern  __attribute__((__nothrow__)) char *initstate(unsigned int __seed ,
                                                     char *__statebuf ,
                                                     size_t __statelen )  __attribute__((__nonnull__(2))) ;
#line 459
extern  __attribute__((__nothrow__)) char *setstate(char *__statebuf )  __attribute__((__nonnull__(1))) ;
#line 478
extern  __attribute__((__nothrow__)) int random_r(struct random_data * __restrict  __buf ,
                                                  int32_t * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 481
extern  __attribute__((__nothrow__)) int srandom_r(unsigned int __seed ,
                                                   struct random_data *__buf )  __attribute__((__nonnull__(2))) ;
#line 484
extern  __attribute__((__nothrow__)) int initstate_r(unsigned int __seed ,
                                                     char * __restrict  __statebuf ,
                                                     size_t __statelen ,
                                                     struct random_data * __restrict  __buf )  __attribute__((__nonnull__(2,4))) ;
#line 489
extern  __attribute__((__nothrow__)) int setstate_r(char * __restrict  __statebuf ,
                                                    struct random_data * __restrict  __buf )  __attribute__((__nonnull__(1,2))) ;
#line 498
extern  __attribute__((__nothrow__)) int rand(void) ;
#line 500
extern  __attribute__((__nothrow__)) void srand(unsigned int __seed ) ;
#line 505
extern  __attribute__((__nothrow__)) int rand_r(unsigned int *__seed ) ;
#line 513
extern  __attribute__((__nothrow__)) double drand48(void) ;
#line 514
extern  __attribute__((__nothrow__)) double erand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
#line 517
extern  __attribute__((__nothrow__)) long lrand48(void) ;
#line 518
extern  __attribute__((__nothrow__)) long nrand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
#line 522
extern  __attribute__((__nothrow__)) long mrand48(void) ;
#line 523
extern  __attribute__((__nothrow__)) long jrand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;
#line 527
extern  __attribute__((__nothrow__)) void srand48(long __seedval ) ;
#line 528
extern  __attribute__((__nothrow__)) unsigned short *seed48(unsigned short *__seed16v )  __attribute__((__nonnull__(1))) ;
#line 530
extern  __attribute__((__nothrow__)) void lcong48(unsigned short *__param )  __attribute__((__nonnull__(1))) ;
#line 546
extern  __attribute__((__nothrow__)) int drand48_r(struct drand48_data * __restrict  __buffer ,
                                                   double * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 548
extern  __attribute__((__nothrow__)) int erand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   double * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 553
extern  __attribute__((__nothrow__)) int lrand48_r(struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 556
extern  __attribute__((__nothrow__)) int nrand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 562
extern  __attribute__((__nothrow__)) int mrand48_r(struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 565
extern  __attribute__((__nothrow__)) int jrand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;
#line 571
extern  __attribute__((__nothrow__)) int srand48_r(long __seedval ,
                                                   struct drand48_data *__buffer )  __attribute__((__nonnull__(2))) ;
#line 574
extern  __attribute__((__nothrow__)) int seed48_r(unsigned short *__seed16v ,
                                                  struct drand48_data *__buffer )  __attribute__((__nonnull__(1,2))) ;
#line 577
extern  __attribute__((__nothrow__)) int lcong48_r(unsigned short *__param ,
                                                   struct drand48_data *__buffer )  __attribute__((__nonnull__(1,2))) ;
#line 589
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;
#line 591
extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;
#line 600
extern  __attribute__((__nothrow__)) void *realloc(void *__ptr , size_t __size )  __attribute__((__warn_unused_result__,
__malloc__)) ;
#line 603
extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;
#line 608
extern  __attribute__((__nothrow__)) void cfree(void *__ptr ) ;
#line 33 "/usr/include/alloca.h"
extern  __attribute__((__nothrow__)) void *alloca(size_t __size ) ;
#line 617 "/usr/include/stdlib.h"
extern  __attribute__((__nothrow__)) void *valloc(size_t __size )  __attribute__((__malloc__)) ;
#line 622
extern  __attribute__((__nothrow__)) int posix_memalign(void **__memptr ,
                                                        size_t __alignment ,
                                                        size_t __size )  __attribute__((__nonnull__(1))) ;
#line 628
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void) ;
#line 632
extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1))) ;
#line 638
extern  __attribute__((__nothrow__)) int on_exit(void (*__func)(int __status ,
                                                                void *__arg ) ,
                                                 void *__arg )  __attribute__((__nonnull__(1))) ;
#line 646
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
#line 653
extern  __attribute__((__nothrow__, __noreturn__)) void _Exit(int __status ) ;
#line 660
extern  __attribute__((__nothrow__)) char *getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
#line 665
extern  __attribute__((__nothrow__)) char *__secure_getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;
#line 672
extern  __attribute__((__nothrow__)) int putenv(char *__string )  __attribute__((__nonnull__(1))) ;
#line 678
extern  __attribute__((__nothrow__)) int setenv(char const   *__name ,
                                                char const   *__value ,
                                                int __replace )  __attribute__((__nonnull__(2))) ;
#line 682
extern  __attribute__((__nothrow__)) int unsetenv(char const   *__name ) ;
#line 689
extern  __attribute__((__nothrow__)) int clearenv(void) ;
#line 698
extern  __attribute__((__nothrow__)) char *mktemp(char *__template )  __attribute__((__nonnull__(1))) ;
#line 712
extern int mkstemp(char *__template )  __asm__("mkstemp64") __attribute__((__nonnull__(1))) ;
#line 719
extern int mkstemp64(char *__template )  __attribute__((__nonnull__(1))) ;
#line 729
extern  __attribute__((__nothrow__)) char *mkdtemp(char *__template )  __attribute__((__nonnull__(1))) ;
#line 738
extern int system(char const   *__command ) ;
#line 746
extern  __attribute__((__nothrow__)) char *canonicalize_file_name(char const   *__name )  __attribute__((__nonnull__(1))) ;
#line 756
extern  __attribute__((__nothrow__)) char *realpath(char const   * __restrict  __name ,
                                                    char * __restrict  __resolved ) ;
#line 774
extern void *bsearch(void const   *__key , void const   *__base ,
                     size_t __nmemb , size_t __size ,
                     int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,2,5))) ;
#line 780
extern void qsort(void *__base , size_t __nmemb , size_t __size ,
                  int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,4))) ;
#line 785
extern  __attribute__((__nothrow__)) int abs(int __x )  __attribute__((__const__)) ;
#line 786
extern  __attribute__((__nothrow__)) long labs(long __x )  __attribute__((__const__)) ;
#line 790
extern  __attribute__((__nothrow__)) long long llabs(long long __x )  __attribute__((__const__)) ;
#line 799
extern  __attribute__((__nothrow__)) div_t div(int __numer , int __denom )  __attribute__((__const__)) ;
#line 801
extern  __attribute__((__nothrow__)) ldiv_t ldiv(long __numer , long __denom )  __attribute__((__const__)) ;
#line 807
extern  __attribute__((__nothrow__)) lldiv_t lldiv(long long __numer ,
                                                   long long __denom )  __attribute__((__const__)) ;
#line 821
extern  __attribute__((__nothrow__)) char *ecvt(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
#line 827
extern  __attribute__((__nothrow__)) char *fcvt(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
#line 833
extern  __attribute__((__nothrow__)) char *gcvt(double __value , int __ndigit ,
                                                char *__buf )  __attribute__((__nonnull__(3))) ;
#line 839
extern  __attribute__((__nothrow__)) char *qecvt(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
#line 842
extern  __attribute__((__nothrow__)) char *qfcvt(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;
#line 845
extern  __attribute__((__nothrow__)) char *qgcvt(long double __value ,
                                                 int __ndigit , char *__buf )  __attribute__((__nonnull__(3))) ;
#line 851
extern  __attribute__((__nothrow__)) int ecvt_r(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign ,
                                                char * __restrict  __buf ,
                                                size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
#line 854
extern  __attribute__((__nothrow__)) int fcvt_r(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign ,
                                                char * __restrict  __buf ,
                                                size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
#line 858
extern  __attribute__((__nothrow__)) int qecvt_r(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign ,
                                                 char * __restrict  __buf ,
                                                 size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
#line 862
extern  __attribute__((__nothrow__)) int qfcvt_r(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign ,
                                                 char * __restrict  __buf ,
                                                 size_t __len )  __attribute__((__nonnull__(3,4,5))) ;
#line 873
extern  __attribute__((__nothrow__)) int mblen(char const   *__s , size_t __n ) ;
#line 876
extern  __attribute__((__nothrow__)) int mbtowc(wchar_t * __restrict  __pwc ,
                                                char const   * __restrict  __s ,
                                                size_t __n ) ;
#line 880
extern  __attribute__((__nothrow__)) int wctomb(char *__s , wchar_t __wchar ) ;
#line 884
extern  __attribute__((__nothrow__)) size_t mbstowcs(wchar_t * __restrict  __pwcs ,
                                                     char const   * __restrict  __s ,
                                                     size_t __n ) ;
#line 887
extern  __attribute__((__nothrow__)) size_t wcstombs(char * __restrict  __s ,
                                                     wchar_t const   * __restrict  __pwcs ,
                                                     size_t __n ) ;
#line 898
extern  __attribute__((__nothrow__)) int rpmatch(char const   *__response )  __attribute__((__nonnull__(1))) ;
#line 909
extern  __attribute__((__nothrow__)) int getsubopt(char ** __restrict  __optionp ,
                                                   char * const  * __restrict  __tokens ,
                                                   char ** __restrict  __valuep )  __attribute__((__nonnull__(1,2,3))) ;
#line 918
extern  __attribute__((__nothrow__)) void setkey(char const   *__key )  __attribute__((__nonnull__(1))) ;
#line 926
extern int posix_openpt(int __oflag ) ;
#line 934
extern  __attribute__((__nothrow__)) int grantpt(int __fd ) ;
#line 938
extern  __attribute__((__nothrow__)) int unlockpt(int __fd ) ;
#line 943
extern  __attribute__((__nothrow__)) char *ptsname(int __fd ) ;
#line 950
extern  __attribute__((__nothrow__)) int ptsname_r(int __fd , char *__buf ,
                                                   size_t __buflen )  __attribute__((__nonnull__(2))) ;
#line 954
extern int getpt(void) ;
#line 961
extern  __attribute__((__nothrow__)) int getloadavg(double *__loadavg ,
                                                    int __nelem )  __attribute__((__nonnull__(1))) ;
#line 258 "/usr/include/unistd.h"
extern  __attribute__((__nothrow__)) int access(char const   *__name ,
                                                int __type )  __attribute__((__nonnull__(1))) ;
#line 263
extern  __attribute__((__nothrow__)) int euidaccess(char const   *__name ,
                                                    int __type )  __attribute__((__nonnull__(1))) ;
#line 267
extern  __attribute__((__nothrow__)) int eaccess(char const   *__name ,
                                                 int __type )  __attribute__((__nonnull__(1))) ;
#line 275
extern  __attribute__((__nothrow__)) int faccessat(int __fd ,
                                                   char const   *__file ,
                                                   int __type , int __flag )  __attribute__((__nonnull__(2))) ;
#line 304
extern  __attribute__((__nothrow__)) __off64_t lseek(int __fd ,
                                                     __off64_t __offset ,
                                                     int __whence )  __asm__("lseek64")  ;
#line 312
extern  __attribute__((__nothrow__)) __off64_t lseek64(int __fd ,
                                                       __off64_t __offset ,
                                                       int __whence ) ;
#line 320
extern int close(int __fd ) ;
#line 327
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
#line 333
extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;
#line 355
extern ssize_t pread(int __fd , void *__buf , size_t __nbytes ,
                     __off64_t __offset )  __asm__("pread64")  ;
#line 358
extern ssize_t pwrite(int __fd , void const   *__buf , size_t __nbytes ,
                      __off64_t __offset )  __asm__("pwrite64")  ;
#line 371
extern ssize_t pread64(int __fd , void *__buf , size_t __nbytes ,
                       __off64_t __offset ) ;
#line 375
extern ssize_t pwrite64(int __fd , void const   *__buf , size_t __n ,
                        __off64_t __offset ) ;
#line 384
extern  __attribute__((__nothrow__)) int pipe(int *__pipedes ) ;
#line 393
extern  __attribute__((__nothrow__)) unsigned int alarm(unsigned int __seconds ) ;
#line 405
extern unsigned int sleep(unsigned int __seconds ) ;
#line 412
extern  __attribute__((__nothrow__)) __useconds_t ualarm(__useconds_t __value ,
                                                         __useconds_t __interval ) ;
#line 420
extern int usleep(__useconds_t __useconds ) ;
#line 429
extern int pause(void) ;
#line 433
extern  __attribute__((__nothrow__)) int chown(char const   *__file ,
                                               __uid_t __owner ,
                                               __gid_t __group )  __attribute__((__nonnull__(1))) ;
#line 438
extern  __attribute__((__nothrow__)) int fchown(int __fd , __uid_t __owner ,
                                                __gid_t __group ) ;
#line 443
extern  __attribute__((__nothrow__)) int lchown(char const   *__file ,
                                                __uid_t __owner ,
                                                __gid_t __group )  __attribute__((__nonnull__(1))) ;
#line 451
extern  __attribute__((__nothrow__)) int fchownat(int __fd ,
                                                  char const   *__file ,
                                                  __uid_t __owner ,
                                                  __gid_t __group , int __flag )  __attribute__((__nonnull__(2))) ;
#line 457
extern  __attribute__((__nothrow__)) int chdir(char const   *__path )  __attribute__((__nonnull__(1))) ;
#line 461
extern  __attribute__((__nothrow__)) int fchdir(int __fd ) ;
#line 471
extern  __attribute__((__nothrow__)) char *getcwd(char *__buf , size_t __size ) ;
#line 477
extern  __attribute__((__nothrow__)) char *get_current_dir_name(void) ;
#line 484
extern  __attribute__((__nothrow__)) char *getwd(char *__buf )  __attribute__((__nonnull__(1),
__deprecated__)) ;
#line 490
extern  __attribute__((__nothrow__)) int dup(int __fd ) ;
#line 493
extern  __attribute__((__nothrow__)) int dup2(int __fd , int __fd2 ) ;
#line 496
extern char **__environ ;
#line 498
extern char **environ ;
#line 504
extern  __attribute__((__nothrow__)) int execve(char const   *__path ,
                                                char * const  *__argv ,
                                                char * const  *__envp )  __attribute__((__nonnull__(1))) ;
#line 510
extern  __attribute__((__nothrow__)) int fexecve(int __fd ,
                                                 char * const  *__argv ,
                                                 char * const  *__envp ) ;
#line 516
extern  __attribute__((__nothrow__)) int execv(char const   *__path ,
                                               char * const  *__argv )  __attribute__((__nonnull__(1))) ;
#line 521
extern  __attribute__((__nothrow__)) int execle(char const   *__path ,
                                                char const   *__arg  , ...)  __attribute__((__nonnull__(1))) ;
#line 526
extern  __attribute__((__nothrow__)) int execl(char const   *__path ,
                                               char const   *__arg  , ...)  __attribute__((__nonnull__(1))) ;
#line 531
extern  __attribute__((__nothrow__)) int execvp(char const   *__file ,
                                                char * const  *__argv )  __attribute__((__nonnull__(1))) ;
#line 537
extern  __attribute__((__nothrow__)) int execlp(char const   *__file ,
                                                char const   *__arg  , ...)  __attribute__((__nonnull__(1))) ;
#line 543
extern  __attribute__((__nothrow__)) int nice(int __inc ) ;
#line 548
extern  __attribute__((__noreturn__)) void _exit(int __status ) ;
#line 557
extern  __attribute__((__nothrow__)) long pathconf(char const   *__path ,
                                                   int __name )  __attribute__((__nonnull__(1))) ;
#line 561
extern  __attribute__((__nothrow__)) long fpathconf(int __fd , int __name ) ;
#line 564
extern  __attribute__((__nothrow__)) long sysconf(int __name )  __attribute__((__const__)) ;
#line 568
extern  __attribute__((__nothrow__)) size_t confstr(int __name , char *__buf ,
                                                    size_t __len ) ;
#line 573
extern  __attribute__((__nothrow__)) __pid_t getpid(void) ;
#line 576
extern  __attribute__((__nothrow__)) __pid_t getppid(void) ;
#line 581
extern  __attribute__((__nothrow__)) __pid_t getpgrp(void) ;
#line 591
extern  __attribute__((__nothrow__)) __pid_t __getpgid(__pid_t __pid ) ;
#line 593
extern  __attribute__((__nothrow__)) __pid_t getpgid(__pid_t __pid ) ;
#line 600
extern  __attribute__((__nothrow__)) int setpgid(__pid_t __pid , __pid_t __pgid ) ;
#line 617
extern  __attribute__((__nothrow__)) int setpgrp(void) ;
#line 634
extern  __attribute__((__nothrow__)) __pid_t setsid(void) ;
#line 638
extern  __attribute__((__nothrow__)) __pid_t getsid(__pid_t __pid ) ;
#line 642
extern  __attribute__((__nothrow__)) __uid_t getuid(void) ;
#line 645
extern  __attribute__((__nothrow__)) __uid_t geteuid(void) ;
#line 648
extern  __attribute__((__nothrow__)) __gid_t getgid(void) ;
#line 651
extern  __attribute__((__nothrow__)) __gid_t getegid(void) ;
#line 656
extern  __attribute__((__nothrow__)) int getgroups(int __size , __gid_t *__list ) ;
#line 660
extern  __attribute__((__nothrow__)) int group_member(__gid_t __gid ) ;
#line 667
extern  __attribute__((__nothrow__)) int setuid(__uid_t __uid ) ;
#line 672
extern  __attribute__((__nothrow__)) int setreuid(__uid_t __ruid ,
                                                  __uid_t __euid ) ;
#line 677
extern  __attribute__((__nothrow__)) int seteuid(__uid_t __uid ) ;
#line 684
extern  __attribute__((__nothrow__)) int setgid(__gid_t __gid ) ;
#line 689
extern  __attribute__((__nothrow__)) int setregid(__gid_t __rgid ,
                                                  __gid_t __egid ) ;
#line 694
extern  __attribute__((__nothrow__)) int setegid(__gid_t __gid ) ;
#line 700
extern  __attribute__((__nothrow__)) int getresuid(__uid_t *__ruid ,
                                                   __uid_t *__euid ,
                                                   __uid_t *__suid ) ;
#line 705
extern  __attribute__((__nothrow__)) int getresgid(__gid_t *__rgid ,
                                                   __gid_t *__egid ,
                                                   __gid_t *__sgid ) ;
#line 710
extern  __attribute__((__nothrow__)) int setresuid(__uid_t __ruid ,
                                                   __uid_t __euid ,
                                                   __uid_t __suid ) ;
#line 715
extern  __attribute__((__nothrow__)) int setresgid(__gid_t __rgid ,
                                                   __gid_t __egid ,
                                                   __gid_t __sgid ) ;
#line 723
extern  __attribute__((__nothrow__)) __pid_t fork(void) ;
#line 730
extern  __attribute__((__nothrow__)) __pid_t vfork(void) ;
#line 736
extern  __attribute__((__nothrow__)) char *ttyname(int __fd ) ;
#line 740
extern  __attribute__((__nothrow__)) int ttyname_r(int __fd , char *__buf ,
                                                   size_t __buflen )  __attribute__((__nonnull__(2))) ;
#line 745
extern  __attribute__((__nothrow__)) int isatty(int __fd ) ;
#line 751
extern  __attribute__((__nothrow__)) int ttyslot(void) ;
#line 756
extern  __attribute__((__nothrow__)) int link(char const   *__from ,
                                              char const   *__to )  __attribute__((__nonnull__(1,2))) ;
#line 762
extern  __attribute__((__nothrow__)) int linkat(int __fromfd ,
                                                char const   *__from ,
                                                int __tofd ,
                                                char const   *__to ,
                                                int __flags )  __attribute__((__nonnull__(2,4))) ;
#line 769
extern  __attribute__((__nothrow__)) int symlink(char const   *__from ,
                                                 char const   *__to )  __attribute__((__nonnull__(1,2))) ;
#line 775
extern  __attribute__((__nothrow__)) ssize_t readlink(char const   * __restrict  __path ,
                                                      char * __restrict  __buf ,
                                                      size_t __len )  __attribute__((__nonnull__(1,2))) ;
#line 782
extern  __attribute__((__nothrow__)) int symlinkat(char const   *__from ,
                                                   int __tofd ,
                                                   char const   *__to )  __attribute__((__nonnull__(1,3))) ;
#line 786
extern  __attribute__((__nothrow__)) ssize_t readlinkat(int __fd ,
                                                        char const   * __restrict  __path ,
                                                        char * __restrict  __buf ,
                                                        size_t __len )  __attribute__((__nonnull__(2,3))) ;
#line 792
extern  __attribute__((__nothrow__)) int unlink(char const   *__name )  __attribute__((__nonnull__(1))) ;
#line 796
extern  __attribute__((__nothrow__)) int unlinkat(int __fd ,
                                                  char const   *__name ,
                                                  int __flag )  __attribute__((__nonnull__(2))) ;
#line 801
extern  __attribute__((__nothrow__)) int rmdir(char const   *__path )  __attribute__((__nonnull__(1))) ;
#line 805
extern  __attribute__((__nothrow__)) __pid_t tcgetpgrp(int __fd ) ;
#line 808
extern  __attribute__((__nothrow__)) int tcsetpgrp(int __fd , __pid_t __pgrp_id ) ;
#line 815
extern char *getlogin(void) ;
#line 823
extern int getlogin_r(char *__name , size_t __name_len )  __attribute__((__nonnull__(1))) ;
#line 828
extern  __attribute__((__nothrow__)) int setlogin(char const   *__name )  __attribute__((__nonnull__(1))) ;
#line 59 "/usr/include/getopt.h"
extern char *optarg ;
#line 73
extern int optind ;
#line 78
extern int opterr ;
#line 82
extern int optopt ;
#line 152
extern  __attribute__((__nothrow__)) int getopt(int ___argc ,
                                                char * const  *___argv ,
                                                char const   *__shortopts ) ;
#line 845 "/usr/include/unistd.h"
extern  __attribute__((__nothrow__)) int gethostname(char *__name ,
                                                     size_t __len )  __attribute__((__nonnull__(1))) ;
#line 852
extern  __attribute__((__nothrow__)) int sethostname(char const   *__name ,
                                                     size_t __len )  __attribute__((__nonnull__(1))) ;
#line 857
extern  __attribute__((__nothrow__)) int sethostid(long __id ) ;
#line 863
extern  __attribute__((__nothrow__)) int getdomainname(char *__name ,
                                                       size_t __len )  __attribute__((__nonnull__(1))) ;
#line 865
extern  __attribute__((__nothrow__)) int setdomainname(char const   *__name ,
                                                       size_t __len )  __attribute__((__nonnull__(1))) ;
#line 872
extern  __attribute__((__nothrow__)) int vhangup(void) ;
#line 875
extern  __attribute__((__nothrow__)) int revoke(char const   *__file )  __attribute__((__nonnull__(1))) ;
#line 883
extern  __attribute__((__nothrow__)) int profil(unsigned short *__sample_buffer ,
                                                size_t __size ,
                                                size_t __offset ,
                                                unsigned int __scale )  __attribute__((__nonnull__(1))) ;
#line 891
extern  __attribute__((__nothrow__)) int acct(char const   *__name ) ;
#line 895
extern  __attribute__((__nothrow__)) char *getusershell(void) ;
#line 896
extern  __attribute__((__nothrow__)) void endusershell(void) ;
#line 897
extern  __attribute__((__nothrow__)) void setusershell(void) ;
#line 903
extern  __attribute__((__nothrow__)) int daemon(int __nochdir , int __noclose ) ;
#line 910
extern  __attribute__((__nothrow__)) int chroot(char const   *__path )  __attribute__((__nonnull__(1))) ;
#line 914
extern char *getpass(char const   *__prompt )  __attribute__((__nonnull__(1))) ;
#line 923
extern int fsync(int __fd ) ;
#line 930
extern long gethostid(void) ;
#line 933
extern  __attribute__((__nothrow__)) void sync(void) ;
#line 938
extern  __attribute__((__nothrow__)) int getpagesize(void)  __attribute__((__const__)) ;
#line 943
extern  __attribute__((__nothrow__)) int getdtablesize(void) ;
#line 952
extern  __attribute__((__nothrow__)) int truncate(char const   *__file ,
                                                  __off64_t __length )  __asm__("truncate64") __attribute__((__nonnull__(1))) ;
#line 960
extern  __attribute__((__nothrow__)) int truncate64(char const   *__file ,
                                                    __off64_t __length )  __attribute__((__nonnull__(1))) ;
#line 973
extern  __attribute__((__nothrow__)) int ftruncate(int __fd ,
                                                   __off64_t __length )  __asm__("ftruncate64")  ;
#line 980
extern  __attribute__((__nothrow__)) int ftruncate64(int __fd ,
                                                     __off64_t __length ) ;
#line 990
extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;
#line 996
extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;
#line 1011
extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;
#line 1037
extern int lockf(int __fd , int __cmd , __off64_t __len )  __asm__("lockf64")  ;
#line 1044
extern int lockf64(int __fd , int __cmd , __off64_t __len ) ;
#line 1065
extern int fdatasync(int __fildes ) ;
#line 1073
extern  __attribute__((__nothrow__)) char *crypt(char const   *__key ,
                                                 char const   *__salt )  __attribute__((__nonnull__(1,2))) ;
#line 1078
extern  __attribute__((__nothrow__)) void encrypt(char *__block , int __edflag )  __attribute__((__nonnull__(1))) ;
#line 1085
extern  __attribute__((__nothrow__)) void swab(void const   * __restrict  __from ,
                                               void * __restrict  __to ,
                                               ssize_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 34 "/usr/include/strings.h"
extern  __attribute__((__nothrow__)) int bcmp(void const   *__s1 ,
                                              void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 38
extern  __attribute__((__nothrow__)) void bcopy(void const   *__src ,
                                                void *__dest , size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 41
extern  __attribute__((__nothrow__)) void bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
#line 45
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
#line 48
extern  __attribute__((__nothrow__)) char *index(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 51
extern  __attribute__((__nothrow__)) char *rindex(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 54
extern  __attribute__((__nothrow__)) int strcasecmp(char const   *__s1 ,
                                                    char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 58
extern  __attribute__((__nothrow__)) int strncasecmp(char const   *__s1 ,
                                                     char const   *__s2 ,
                                                     size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 38 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest ,
                                                  void const   * __restrict  __src ,
                                                  size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 43
extern  __attribute__((__nothrow__)) void *memmove(void *__dest ,
                                                   void const   *__src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 51
extern  __attribute__((__nothrow__)) void *memccpy(void * __restrict  __dest ,
                                                   void const   * __restrict  __src ,
                                                   int __c , size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 59
extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c ,
                                                  size_t __n )  __attribute__((__nonnull__(1))) ;
#line 62
extern  __attribute__((__nothrow__)) int memcmp(void const   *__s1 ,
                                                void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 66
extern  __attribute__((__nothrow__)) void *memchr(void const   *__s , int __c ,
                                                  size_t __n )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 73
extern  __attribute__((__nothrow__)) void *rawmemchr(void const   *__s ,
                                                     int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 77
extern  __attribute__((__nothrow__)) void *memrchr(void const   *__s , int __c ,
                                                   size_t __n )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 84
extern  __attribute__((__nothrow__)) char *strcpy(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
#line 87
extern  __attribute__((__nothrow__)) char *strncpy(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 92
extern  __attribute__((__nothrow__)) char *strcat(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
#line 95
extern  __attribute__((__nothrow__)) char *strncat(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 99
extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 ,
                                                char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 102
extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 ,
                                                 char const   *__s2 ,
                                                 size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 106
extern  __attribute__((__nothrow__)) int strcoll(char const   *__s1 ,
                                                 char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 109
extern  __attribute__((__nothrow__)) size_t strxfrm(char * __restrict  __dest ,
                                                    char const   * __restrict  __src ,
                                                    size_t __n )  __attribute__((__nonnull__(2))) ;
#line 121
extern  __attribute__((__nothrow__)) int strcoll_l(char const   *__s1 ,
                                                   char const   *__s2 ,
                                                   __locale_t __l )  __attribute__((__pure__,
__nonnull__(1,2,3))) ;
#line 124
extern  __attribute__((__nothrow__)) size_t strxfrm_l(char *__dest ,
                                                      char const   *__src ,
                                                      size_t __n ,
                                                      __locale_t __l )  __attribute__((__nonnull__(2,4))) ;
#line 130
extern  __attribute__((__nothrow__)) char *strdup(char const   *__s )  __attribute__((__nonnull__(1),
__malloc__)) ;
#line 138
extern  __attribute__((__nothrow__)) char *strndup(char const   *__string ,
                                                   size_t __n )  __attribute__((__nonnull__(1),
__malloc__)) ;
#line 167
extern  __attribute__((__nothrow__)) char *strchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 170
extern  __attribute__((__nothrow__)) char *strrchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 177
extern  __attribute__((__nothrow__)) char *strchrnul(char const   *__s ,
                                                     int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 184
extern  __attribute__((__nothrow__)) size_t strcspn(char const   *__s ,
                                                    char const   *__reject )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 188
extern  __attribute__((__nothrow__)) size_t strspn(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 191
extern  __attribute__((__nothrow__)) char *strpbrk(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 194
extern  __attribute__((__nothrow__)) char *strstr(char const   *__haystack ,
                                                  char const   *__needle )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 199
extern  __attribute__((__nothrow__)) char *strtok(char * __restrict  __s ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(2))) ;
#line 205
extern  __attribute__((__nothrow__)) char *__strtok_r(char * __restrict  __s ,
                                                      char const   * __restrict  __delim ,
                                                      char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
#line 210
extern  __attribute__((__nothrow__)) char *strtok_r(char * __restrict  __s ,
                                                    char const   * __restrict  __delim ,
                                                    char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
#line 217
extern  __attribute__((__nothrow__)) char *strcasestr(char const   *__haystack ,
                                                      char const   *__needle )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 225
extern  __attribute__((__nothrow__)) void *memmem(void const   *__haystack ,
                                                  size_t __haystacklen ,
                                                  void const   *__needle ,
                                                  size_t __needlelen )  __attribute__((__pure__,
__nonnull__(1,3))) ;
#line 231
extern  __attribute__((__nothrow__)) void *__mempcpy(void * __restrict  __dest ,
                                                     void const   * __restrict  __src ,
                                                     size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 234
extern  __attribute__((__nothrow__)) void *mempcpy(void * __restrict  __dest ,
                                                   void const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 242
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 249
extern  __attribute__((__nothrow__)) size_t strnlen(char const   *__string ,
                                                    size_t __maxlen )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 256
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
#line 281
extern  __attribute__((__nothrow__)) char *strerror_r(int __errnum ,
                                                      char *__buf ,
                                                      size_t __buflen )  __attribute__((__nonnull__(2))) ;
#line 288
extern  __attribute__((__nothrow__)) void __bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
#line 317
extern  __attribute__((__nothrow__)) int ffsl(long __l )  __attribute__((__const__)) ;
#line 319
extern  __attribute__((__nothrow__)) int ffsll(long long __ll )  __attribute__((__const__)) ;
#line 336
extern  __attribute__((__nothrow__)) int strcasecmp_l(char const   *__s1 ,
                                                      char const   *__s2 ,
                                                      __locale_t __loc )  __attribute__((__pure__,
__nonnull__(1,2,3))) ;
#line 340
extern  __attribute__((__nothrow__)) int strncasecmp_l(char const   *__s1 ,
                                                       char const   *__s2 ,
                                                       size_t __n ,
                                                       __locale_t __loc )  __attribute__((__pure__,
__nonnull__(1,2,4))) ;
#line 348
extern  __attribute__((__nothrow__)) char *strsep(char ** __restrict  __stringp ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(1,2))) ;
#line 355
extern  __attribute__((__nothrow__)) int strverscmp(char const   *__s1 ,
                                                    char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 359
extern  __attribute__((__nothrow__)) char *strsignal(int __sig ) ;
#line 362
extern  __attribute__((__nothrow__)) char *__stpcpy(char * __restrict  __dest ,
                                                    char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
#line 364
extern  __attribute__((__nothrow__)) char *stpcpy(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
#line 369
extern  __attribute__((__nothrow__)) char *__stpncpy(char * __restrict  __dest ,
                                                     char const   * __restrict  __src ,
                                                     size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 372
extern  __attribute__((__nothrow__)) char *stpncpy(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 377
extern  __attribute__((__nothrow__)) char *strfry(char *__string )  __attribute__((__nonnull__(1))) ;
#line 380
extern  __attribute__((__nothrow__)) void *memfrob(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
#line 387
extern  __attribute__((__nothrow__)) char *basename(char const   *__filename )  __attribute__((__nonnull__(1))) ;
#line 394 "/usr/include/bits/string2.h"
extern void *__rawmemchr(void const   *__s , int __c ) ;
#line 969
__inline static size_t __strcspn_c1(char const   *__s , int __reject ) ;
#line 970 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c1(char const   *__s , int __reject ) 
{ register size_t __result ;

  {
#line 970
  fprintf(_coverage_fout, "73\n");
#line 970
  fflush(_coverage_fout);
#line 973
  __result = (size_t )0;
#line 970
  fprintf(_coverage_fout, "74\n");
#line 970
  fflush(_coverage_fout);
#line 974
  while (1) {
#line 974
    fprintf(_coverage_fout, "71\n");
#line 974
    fflush(_coverage_fout);
#line 974
    if ((int const   )*(__s + __result) != 0) {
#line 974
      fprintf(_coverage_fout, "70\n");
#line 974
      fflush(_coverage_fout);
#line 974
      if (! ((int const   )*(__s + __result) != (int const   )__reject)) {
#line 974
        break;
      }
    } else {
#line 974
      break;
    }
#line 974
    fprintf(_coverage_fout, "72\n");
#line 974
    fflush(_coverage_fout);
#line 975
    __result ++;
  }
#line 970
  fprintf(_coverage_fout, "75\n");
#line 970
  fflush(_coverage_fout);
#line 976
  return (__result);
}
}
#line 979
__inline static size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) ;
#line 981 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) 
{ register size_t __result ;

  {
#line 981
  fprintf(_coverage_fout, "80\n");
#line 981
  fflush(_coverage_fout);
#line 984
  __result = (size_t )0;
#line 981
  fprintf(_coverage_fout, "81\n");
#line 981
  fflush(_coverage_fout);
#line 985
  while (1) {
#line 985
    fprintf(_coverage_fout, "78\n");
#line 985
    fflush(_coverage_fout);
#line 985
    if ((int const   )*(__s + __result) != 0) {
#line 985
      fprintf(_coverage_fout, "77\n");
#line 985
      fflush(_coverage_fout);
#line 985
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
#line 985
        fprintf(_coverage_fout, "76\n");
#line 985
        fflush(_coverage_fout);
#line 985
        if (! ((int const   )*(__s + __result) != (int const   )__reject2)) {
#line 985
          break;
        }
      } else {
#line 985
        break;
      }
    } else {
#line 985
      break;
    }
#line 985
    fprintf(_coverage_fout, "79\n");
#line 985
    fflush(_coverage_fout);
#line 987
    __result ++;
  }
#line 981
  fprintf(_coverage_fout, "82\n");
#line 981
  fflush(_coverage_fout);
#line 988
  return (__result);
}
}
#line 991
__inline static size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) ;
#line 993 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) 
{ register size_t __result ;

  {
#line 993
  fprintf(_coverage_fout, "88\n");
#line 993
  fflush(_coverage_fout);
#line 997
  __result = (size_t )0;
#line 993
  fprintf(_coverage_fout, "89\n");
#line 993
  fflush(_coverage_fout);
#line 998
  while (1) {
#line 998
    fprintf(_coverage_fout, "86\n");
#line 998
    fflush(_coverage_fout);
#line 998
    if ((int const   )*(__s + __result) != 0) {
#line 998
      fprintf(_coverage_fout, "85\n");
#line 998
      fflush(_coverage_fout);
#line 998
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
#line 998
        fprintf(_coverage_fout, "84\n");
#line 998
        fflush(_coverage_fout);
#line 998
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
#line 998
          fprintf(_coverage_fout, "83\n");
#line 998
          fflush(_coverage_fout);
#line 998
          if (! ((int const   )*(__s + __result) != (int const   )__reject3)) {
#line 998
            break;
          }
        } else {
#line 998
          break;
        }
      } else {
#line 998
        break;
      }
    } else {
#line 998
      break;
    }
#line 998
    fprintf(_coverage_fout, "87\n");
#line 998
    fflush(_coverage_fout);
#line 1000
    __result ++;
  }
#line 993
  fprintf(_coverage_fout, "90\n");
#line 993
  fflush(_coverage_fout);
#line 1001
  return (__result);
}
}
#line 1045
__inline static size_t __strspn_c1(char const   *__s , int __accept ) ;
#line 1046 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c1(char const   *__s , int __accept ) 
{ register size_t __result ;

  {
#line 1046
  fprintf(_coverage_fout, "93\n");
#line 1046
  fflush(_coverage_fout);
#line 1049
  __result = (size_t )0;
#line 1046
  fprintf(_coverage_fout, "94\n");
#line 1046
  fflush(_coverage_fout);
#line 1051
  while (1) {
#line 1051
    fprintf(_coverage_fout, "91\n");
#line 1051
    fflush(_coverage_fout);
#line 1051
    if (! ((int const   )*(__s + __result) == (int const   )__accept)) {
#line 1051
      break;
    }
#line 1051
    fprintf(_coverage_fout, "92\n");
#line 1051
    fflush(_coverage_fout);
#line 1052
    __result ++;
  }
#line 1046
  fprintf(_coverage_fout, "95\n");
#line 1046
  fflush(_coverage_fout);
#line 1053
  return (__result);
}
}
#line 1056
__inline static size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
#line 1058 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ register size_t __result ;

  {
#line 1058
  fprintf(_coverage_fout, "99\n");
#line 1058
  fflush(_coverage_fout);
#line 1061
  __result = (size_t )0;
#line 1058
  fprintf(_coverage_fout, "100\n");
#line 1058
  fflush(_coverage_fout);
#line 1063
  while (1) {
#line 1063
    fprintf(_coverage_fout, "97\n");
#line 1063
    fflush(_coverage_fout);
#line 1063
    if (! ((int const   )*(__s + __result) == (int const   )__accept1)) {
#line 1063
      fprintf(_coverage_fout, "96\n");
#line 1063
      fflush(_coverage_fout);
#line 1063
      if (! ((int const   )*(__s + __result) == (int const   )__accept2)) {
#line 1063
        break;
      }
    }
#line 1063
    fprintf(_coverage_fout, "98\n");
#line 1063
    fflush(_coverage_fout);
#line 1064
    __result ++;
  }
#line 1058
  fprintf(_coverage_fout, "101\n");
#line 1058
  fflush(_coverage_fout);
#line 1065
  return (__result);
}
}
#line 1068
__inline static size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
#line 1070 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ register size_t __result ;

  {
#line 1070
  fprintf(_coverage_fout, "106\n");
#line 1070
  fflush(_coverage_fout);
#line 1073
  __result = (size_t )0;
#line 1070
  fprintf(_coverage_fout, "107\n");
#line 1070
  fflush(_coverage_fout);
#line 1075
  while (1) {
#line 1075
    fprintf(_coverage_fout, "104\n");
#line 1075
    fflush(_coverage_fout);
#line 1075
    if (! ((int const   )*(__s + __result) == (int const   )__accept1)) {
#line 1075
      fprintf(_coverage_fout, "103\n");
#line 1075
      fflush(_coverage_fout);
#line 1075
      if (! ((int const   )*(__s + __result) == (int const   )__accept2)) {
#line 1075
        fprintf(_coverage_fout, "102\n");
#line 1075
        fflush(_coverage_fout);
#line 1075
        if (! ((int const   )*(__s + __result) == (int const   )__accept3)) {
#line 1075
          break;
        }
      }
    }
#line 1075
    fprintf(_coverage_fout, "105\n");
#line 1075
    fflush(_coverage_fout);
#line 1077
    __result ++;
  }
#line 1070
  fprintf(_coverage_fout, "108\n");
#line 1070
  fflush(_coverage_fout);
#line 1078
  return (__result);
}
}
#line 1121
__inline static char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
#line 1123 "/usr/include/bits/string2.h"
__inline static char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ char *tmp ;

  {
#line 1123
  fprintf(_coverage_fout, "115\n");
#line 1123
  fflush(_coverage_fout);
#line 1127
  while (1) {
#line 1127
    fprintf(_coverage_fout, "111\n");
#line 1127
    fflush(_coverage_fout);
#line 1127
    if ((int const   )*__s != 0) {
#line 1127
      fprintf(_coverage_fout, "110\n");
#line 1127
      fflush(_coverage_fout);
#line 1127
      if ((int const   )*__s != (int const   )__accept1) {
#line 1127
        fprintf(_coverage_fout, "109\n");
#line 1127
        fflush(_coverage_fout);
#line 1127
        if (! ((int const   )*__s != (int const   )__accept2)) {
#line 1127
          break;
        }
      } else {
#line 1127
        break;
      }
    } else {
#line 1127
      break;
    }
#line 1127
    fprintf(_coverage_fout, "112\n");
#line 1127
    fflush(_coverage_fout);
#line 1128
    __s ++;
  }
#line 1123
  fprintf(_coverage_fout, "116\n");
#line 1123
  fflush(_coverage_fout);
#line 1129
  if ((int const   )*__s == 0) {
#line 1129
    fprintf(_coverage_fout, "113\n");
#line 1129
    fflush(_coverage_fout);
#line 1129
    tmp = (char *)((void *)0);
  } else {
#line 1129
    fprintf(_coverage_fout, "114\n");
#line 1129
    fflush(_coverage_fout);
#line 1129
    tmp = (char *)((unsigned long )__s);
  }
#line 1123
  fprintf(_coverage_fout, "117\n");
#line 1123
  fflush(_coverage_fout);
#line 1129
  return (tmp);
}
}
#line 1132
__inline static char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
#line 1134 "/usr/include/bits/string2.h"
__inline static char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ char *tmp ;

  {
#line 1134
  fprintf(_coverage_fout, "125\n");
#line 1134
  fflush(_coverage_fout);
#line 1139
  while (1) {
#line 1139
    fprintf(_coverage_fout, "121\n");
#line 1139
    fflush(_coverage_fout);
#line 1139
    if ((int const   )*__s != 0) {
#line 1139
      fprintf(_coverage_fout, "120\n");
#line 1139
      fflush(_coverage_fout);
#line 1139
      if ((int const   )*__s != (int const   )__accept1) {
#line 1139
        fprintf(_coverage_fout, "119\n");
#line 1139
        fflush(_coverage_fout);
#line 1139
        if ((int const   )*__s != (int const   )__accept2) {
#line 1139
          fprintf(_coverage_fout, "118\n");
#line 1139
          fflush(_coverage_fout);
#line 1139
          if (! ((int const   )*__s != (int const   )__accept3)) {
#line 1139
            break;
          }
        } else {
#line 1139
          break;
        }
      } else {
#line 1139
        break;
      }
    } else {
#line 1139
      break;
    }
#line 1139
    fprintf(_coverage_fout, "122\n");
#line 1139
    fflush(_coverage_fout);
#line 1141
    __s ++;
  }
#line 1134
  fprintf(_coverage_fout, "126\n");
#line 1134
  fflush(_coverage_fout);
#line 1142
  if ((int const   )*__s == 0) {
#line 1142
    fprintf(_coverage_fout, "123\n");
#line 1142
    fflush(_coverage_fout);
#line 1142
    tmp = (char *)((void *)0);
  } else {
#line 1142
    fprintf(_coverage_fout, "124\n");
#line 1142
    fflush(_coverage_fout);
#line 1142
    tmp = (char *)((unsigned long )__s);
  }
#line 1134
  fprintf(_coverage_fout, "127\n");
#line 1134
  fflush(_coverage_fout);
#line 1142
  return (tmp);
}
}
#line 1173
__inline static char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) ;
#line 1174 "/usr/include/bits/string2.h"
__inline static char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) 
{ char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
#line 1174
  fprintf(_coverage_fout, "138\n");
#line 1174
  fflush(_coverage_fout);
#line 1178
  if ((unsigned long )__s == (unsigned long )((void *)0)) {
#line 1178
    fprintf(_coverage_fout, "128\n");
#line 1178
    fflush(_coverage_fout);
#line 1179
    __s = *__nextp;
  }
#line 1174
  fprintf(_coverage_fout, "139\n");
#line 1174
  fflush(_coverage_fout);
#line 1180
  while (1) {
#line 1180
    fprintf(_coverage_fout, "129\n");
#line 1180
    fflush(_coverage_fout);
#line 1180
    if (! ((int )*__s == (int )__sep)) {
#line 1180
      break;
    }
#line 1180
    fprintf(_coverage_fout, "130\n");
#line 1180
    fflush(_coverage_fout);
#line 1181
    __s ++;
  }
#line 1174
  fprintf(_coverage_fout, "140\n");
#line 1174
  fflush(_coverage_fout);
#line 1182
  __result = (char *)((void *)0);
#line 1174
  fprintf(_coverage_fout, "141\n");
#line 1174
  fflush(_coverage_fout);
#line 1183
  if ((int )*__s != 0) {
#line 1183
    fprintf(_coverage_fout, "135\n");
#line 1183
    fflush(_coverage_fout);
#line 1185
    tmp = __s;
#line 1185
    __s ++;
#line 1185
    __result = tmp;
#line 1183
    fprintf(_coverage_fout, "136\n");
#line 1183
    fflush(_coverage_fout);
#line 1186
    while (1) {
#line 1186
      fprintf(_coverage_fout, "132\n");
#line 1186
      fflush(_coverage_fout);
#line 1186
      if (! ((int )*__s != 0)) {
#line 1186
        break;
      }
#line 1186
      fprintf(_coverage_fout, "133\n");
#line 1186
      fflush(_coverage_fout);
#line 1187
      tmp___0 = __s;
#line 1187
      __s ++;
#line 1186
      fprintf(_coverage_fout, "134\n");
#line 1186
      fflush(_coverage_fout);
#line 1187
      if ((int )*tmp___0 == (int )__sep) {
#line 1187
        fprintf(_coverage_fout, "131\n");
#line 1187
        fflush(_coverage_fout);
#line 1189
        *(__s + -1) = (char )'\000';
#line 1190
        break;
      }
    }
#line 1183
    fprintf(_coverage_fout, "137\n");
#line 1183
    fflush(_coverage_fout);
#line 1192
    *__nextp = __s;
  }
#line 1174
  fprintf(_coverage_fout, "142\n");
#line 1174
  fflush(_coverage_fout);
#line 1194
  return (__result);
}
}
#line 1205
extern char *__strsep_g(char **__stringp , char const   *__delim ) ;
#line 1223
__inline static char *__strsep_1c(char **__s , char __reject ) ;
#line 1224 "/usr/include/bits/string2.h"
__inline static char *__strsep_1c(char **__s , char __reject ) 
{ register char *__retval ;
  char *tmp ;
  void *tmp___0 ;
  char *tmp___1 ;

  {
#line 1224
  fprintf(_coverage_fout, "147\n");
#line 1224
  fflush(_coverage_fout);
#line 1227
  __retval = *__s;
#line 1224
  fprintf(_coverage_fout, "148\n");
#line 1224
  fflush(_coverage_fout);
#line 1228
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    {
#line 1228
    fprintf(_coverage_fout, "143\n");
#line 1228
    fflush(_coverage_fout);
#line 1228
    tmp___1 = __builtin_strchr(__retval, (int )__reject);
#line 1228
    fprintf(_coverage_fout, "144\n");
#line 1228
    fflush(_coverage_fout);
#line 1228
    *__s = tmp___1;
    }
#line 1228
    fprintf(_coverage_fout, "146\n");
#line 1228
    fflush(_coverage_fout);
#line 1228
    if ((unsigned long )*__s != (unsigned long )((void *)0)) {
#line 1228
      fprintf(_coverage_fout, "145\n");
#line 1228
      fflush(_coverage_fout);
#line 1229
      tmp = *__s;
#line 1229
      (*__s) ++;
#line 1229
      *tmp = (char )'\000';
    }
  }
#line 1224
  fprintf(_coverage_fout, "149\n");
#line 1224
  fflush(_coverage_fout);
#line 1230
  return (__retval);
}
}
#line 1233
__inline static char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) ;
#line 1234 "/usr/include/bits/string2.h"
__inline static char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) 
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
#line 1234
  fprintf(_coverage_fout, "160\n");
#line 1234
  fflush(_coverage_fout);
#line 1237
  __retval = *__s;
#line 1234
  fprintf(_coverage_fout, "161\n");
#line 1234
  fflush(_coverage_fout);
#line 1238
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
#line 1238
    fprintf(_coverage_fout, "157\n");
#line 1238
    fflush(_coverage_fout);
#line 1240
    __cp = __retval;
#line 1238
    fprintf(_coverage_fout, "158\n");
#line 1238
    fflush(_coverage_fout);
#line 1241
    while (1) {
#line 1241
      fprintf(_coverage_fout, "154\n");
#line 1241
      fflush(_coverage_fout);
#line 1243
      if ((int )*__cp == 0) {
#line 1243
        fprintf(_coverage_fout, "150\n");
#line 1243
        fflush(_coverage_fout);
#line 1245
        __cp = (char *)((void *)0);
#line 1246
        break;
      }
#line 1241
      fprintf(_coverage_fout, "155\n");
#line 1241
      fflush(_coverage_fout);
#line 1248
      if ((int )*__cp == (int )__reject1) {
#line 1248
        fprintf(_coverage_fout, "151\n");
#line 1248
        fflush(_coverage_fout);
#line 1250
        tmp = __cp;
#line 1250
        __cp ++;
#line 1250
        *tmp = (char )'\000';
#line 1251
        break;
      } else {
#line 1248
        fprintf(_coverage_fout, "153\n");
#line 1248
        fflush(_coverage_fout);
#line 1248
        if ((int )*__cp == (int )__reject2) {
#line 1248
          fprintf(_coverage_fout, "152\n");
#line 1248
          fflush(_coverage_fout);
#line 1250
          tmp = __cp;
#line 1250
          __cp ++;
#line 1250
          *tmp = (char )'\000';
#line 1251
          break;
        }
      }
#line 1241
      fprintf(_coverage_fout, "156\n");
#line 1241
      fflush(_coverage_fout);
#line 1253
      __cp ++;
    }
#line 1238
    fprintf(_coverage_fout, "159\n");
#line 1238
    fflush(_coverage_fout);
#line 1255
    *__s = __cp;
  }
#line 1234
  fprintf(_coverage_fout, "162\n");
#line 1234
  fflush(_coverage_fout);
#line 1257
  return (__retval);
}
}
#line 1260
__inline static char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) ;
#line 1262 "/usr/include/bits/string2.h"
__inline static char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) 
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
#line 1262
  fprintf(_coverage_fout, "175\n");
#line 1262
  fflush(_coverage_fout);
#line 1265
  __retval = *__s;
#line 1262
  fprintf(_coverage_fout, "176\n");
#line 1262
  fflush(_coverage_fout);
#line 1266
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
#line 1266
    fprintf(_coverage_fout, "172\n");
#line 1266
    fflush(_coverage_fout);
#line 1268
    __cp = __retval;
#line 1266
    fprintf(_coverage_fout, "173\n");
#line 1266
    fflush(_coverage_fout);
#line 1269
    while (1) {
#line 1269
      fprintf(_coverage_fout, "169\n");
#line 1269
      fflush(_coverage_fout);
#line 1271
      if ((int )*__cp == 0) {
#line 1271
        fprintf(_coverage_fout, "163\n");
#line 1271
        fflush(_coverage_fout);
#line 1273
        __cp = (char *)((void *)0);
#line 1274
        break;
      }
#line 1269
      fprintf(_coverage_fout, "170\n");
#line 1269
      fflush(_coverage_fout);
#line 1276
      if ((int )*__cp == (int )__reject1) {
#line 1276
        fprintf(_coverage_fout, "164\n");
#line 1276
        fflush(_coverage_fout);
#line 1278
        tmp = __cp;
#line 1278
        __cp ++;
#line 1278
        *tmp = (char )'\000';
#line 1279
        break;
      } else {
#line 1276
        fprintf(_coverage_fout, "168\n");
#line 1276
        fflush(_coverage_fout);
#line 1276
        if ((int )*__cp == (int )__reject2) {
#line 1276
          fprintf(_coverage_fout, "165\n");
#line 1276
          fflush(_coverage_fout);
#line 1278
          tmp = __cp;
#line 1278
          __cp ++;
#line 1278
          *tmp = (char )'\000';
#line 1279
          break;
        } else {
#line 1276
          fprintf(_coverage_fout, "167\n");
#line 1276
          fflush(_coverage_fout);
#line 1276
          if ((int )*__cp == (int )__reject3) {
#line 1276
            fprintf(_coverage_fout, "166\n");
#line 1276
            fflush(_coverage_fout);
#line 1278
            tmp = __cp;
#line 1278
            __cp ++;
#line 1278
            *tmp = (char )'\000';
#line 1279
            break;
          }
        }
      }
#line 1269
      fprintf(_coverage_fout, "171\n");
#line 1269
      fflush(_coverage_fout);
#line 1281
      __cp ++;
    }
#line 1266
    fprintf(_coverage_fout, "174\n");
#line 1266
    fflush(_coverage_fout);
#line 1283
    *__s = __cp;
  }
#line 1262
  fprintf(_coverage_fout, "177\n");
#line 1262
  fflush(_coverage_fout);
#line 1285
  return (__retval);
}
}
#line 1304
extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;
#line 1323
extern  __attribute__((__nothrow__)) char *__strndup(char const   *__string ,
                                                     size_t __n )  __attribute__((__malloc__)) ;
#line 81 "/usr/include/ctype.h"
extern unsigned short const   **__ctype_b_loc(void)  __attribute__((__const__)) ;
#line 83
extern __int32_t const   **__ctype_tolower_loc(void)  __attribute__((__const__)) ;
#line 85
extern __int32_t const   **__ctype_toupper_loc(void)  __attribute__((__const__)) ;
#line 102
extern  __attribute__((__nothrow__)) int isalnum(int  ) ;
#line 103
extern  __attribute__((__nothrow__)) int isalpha(int  ) ;
#line 104
extern  __attribute__((__nothrow__)) int iscntrl(int  ) ;
#line 105
extern  __attribute__((__nothrow__)) int isdigit(int  ) ;
#line 106
extern  __attribute__((__nothrow__)) int islower(int  ) ;
#line 107
extern  __attribute__((__nothrow__)) int isgraph(int  ) ;
#line 108
extern  __attribute__((__nothrow__)) int isprint(int  ) ;
#line 109
extern  __attribute__((__nothrow__)) int ispunct(int  ) ;
#line 110
extern  __attribute__((__nothrow__)) int isspace(int  ) ;
#line 111
extern  __attribute__((__nothrow__)) int isupper(int  ) ;
#line 112
extern  __attribute__((__nothrow__)) int isxdigit(int  ) ;
#line 116
__inline static  __attribute__((__nothrow__)) int tolower(int __c ) ;
#line 119
__inline static  __attribute__((__nothrow__)) int toupper(int __c ) ;
#line 128
extern  __attribute__((__nothrow__)) int isblank(int  ) ;
#line 135
extern  __attribute__((__nothrow__)) int isctype(int __c , int __mask ) ;
#line 142
extern  __attribute__((__nothrow__)) int isascii(int __c ) ;
#line 146
extern  __attribute__((__nothrow__)) int toascii(int __c ) ;
#line 150
extern  __attribute__((__nothrow__)) int _toupper(int  ) ;
#line 151
extern  __attribute__((__nothrow__)) int _tolower(int  ) ;
#line 190
__inline static  __attribute__((__nothrow__)) int tolower(int __c ) ;
#line 190 "/usr/include/ctype.h"
__inline static int tolower(int __c ) 
{ __int32_t const   **tmp ;
  __int32_t tmp___0 ;
  __int32_t const   **tmp___1 ;

  {
#line 190
  fprintf(_coverage_fout, "183\n");
#line 190
  fflush(_coverage_fout);
#line 193
  if (__c >= -128) {
#line 193
    fprintf(_coverage_fout, "181\n");
#line 193
    fflush(_coverage_fout);
#line 193
    if (__c < 256) {
      {
#line 193
      fprintf(_coverage_fout, "178\n");
#line 193
      fflush(_coverage_fout);
#line 193
      tmp___1 = __ctype_tolower_loc();
#line 193
      fprintf(_coverage_fout, "179\n");
#line 193
      fflush(_coverage_fout);
#line 193
      tmp___0 = *(*tmp___1 + __c);
      }
    } else {
#line 193
      fprintf(_coverage_fout, "180\n");
#line 193
      fflush(_coverage_fout);
#line 193
      tmp___0 = (int const   )__c;
    }
  } else {
#line 193
    fprintf(_coverage_fout, "182\n");
#line 193
    fflush(_coverage_fout);
#line 193
    tmp___0 = (int const   )__c;
  }
#line 190
  fprintf(_coverage_fout, "184\n");
#line 190
  fflush(_coverage_fout);
#line 193
  return ((int )tmp___0);
}
}
#line 196
__inline static  __attribute__((__nothrow__)) int toupper(int __c ) ;
#line 196 "/usr/include/ctype.h"
__inline static int toupper(int __c ) 
{ __int32_t const   **tmp ;
  __int32_t tmp___0 ;
  __int32_t const   **tmp___1 ;

  {
#line 196
  fprintf(_coverage_fout, "190\n");
#line 196
  fflush(_coverage_fout);
#line 199
  if (__c >= -128) {
#line 199
    fprintf(_coverage_fout, "188\n");
#line 199
    fflush(_coverage_fout);
#line 199
    if (__c < 256) {
      {
#line 199
      fprintf(_coverage_fout, "185\n");
#line 199
      fflush(_coverage_fout);
#line 199
      tmp___1 = __ctype_toupper_loc();
#line 199
      fprintf(_coverage_fout, "186\n");
#line 199
      fflush(_coverage_fout);
#line 199
      tmp___0 = *(*tmp___1 + __c);
      }
    } else {
#line 199
      fprintf(_coverage_fout, "187\n");
#line 199
      fflush(_coverage_fout);
#line 199
      tmp___0 = (int const   )__c;
    }
  } else {
#line 199
    fprintf(_coverage_fout, "189\n");
#line 199
    fflush(_coverage_fout);
#line 199
    tmp___0 = (int const   )__c;
  }
#line 196
  fprintf(_coverage_fout, "191\n");
#line 196
  fflush(_coverage_fout);
#line 199
  return ((int )tmp___0);
}
}
#line 247
extern  __attribute__((__nothrow__)) int isalnum_l(int  , __locale_t  ) ;
#line 248
extern  __attribute__((__nothrow__)) int isalpha_l(int  , __locale_t  ) ;
#line 249
extern  __attribute__((__nothrow__)) int iscntrl_l(int  , __locale_t  ) ;
#line 250
extern  __attribute__((__nothrow__)) int isdigit_l(int  , __locale_t  ) ;
#line 251
extern  __attribute__((__nothrow__)) int islower_l(int  , __locale_t  ) ;
#line 252
extern  __attribute__((__nothrow__)) int isgraph_l(int  , __locale_t  ) ;
#line 253
extern  __attribute__((__nothrow__)) int isprint_l(int  , __locale_t  ) ;
#line 254
extern  __attribute__((__nothrow__)) int ispunct_l(int  , __locale_t  ) ;
#line 255
extern  __attribute__((__nothrow__)) int isspace_l(int  , __locale_t  ) ;
#line 256
extern  __attribute__((__nothrow__)) int isupper_l(int  , __locale_t  ) ;
#line 257
extern  __attribute__((__nothrow__)) int isxdigit_l(int  , __locale_t  ) ;
#line 259
extern  __attribute__((__nothrow__)) int isblank_l(int  , __locale_t  ) ;
#line 263
extern  __attribute__((__nothrow__)) int __tolower_l(int __c , __locale_t __l ) ;
#line 264
extern  __attribute__((__nothrow__)) int tolower_l(int __c , __locale_t __l ) ;
#line 267
extern  __attribute__((__nothrow__)) int __toupper_l(int __c , __locale_t __l ) ;
#line 268
extern  __attribute__((__nothrow__)) int toupper_l(int __c , __locale_t __l ) ;
#line 125 "/usr/include/locale.h"
extern  __attribute__((__nothrow__)) char *setlocale(int __category ,
                                                     char const   *__locale ) ;
#line 128
extern  __attribute__((__nothrow__)) struct lconv *localeconv(void) ;
#line 154
extern  __attribute__((__nothrow__)) __locale_t newlocale(int __category_mask ,
                                                          char const   *__locale ,
                                                          __locale_t __base ) ;
#line 189
extern  __attribute__((__nothrow__)) __locale_t duplocale(__locale_t __dataset ) ;
#line 193
extern  __attribute__((__nothrow__)) void freelocale(__locale_t __dataset ) ;
#line 200
extern  __attribute__((__nothrow__)) __locale_t uselocale(__locale_t __dataset ) ;
#line 43 "/usr/include/bits/errno.h"
extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;
#line 55 "/usr/include/errno.h"
extern char *program_invocation_name ;
#line 55
extern char *program_invocation_short_name ;
#line 227 "/usr/include/bits/fcntl.h"
extern  __attribute__((__nothrow__)) ssize_t readahead(int __fd ,
                                                       __off64_t __offset ,
                                                       size_t __count ) ;
#line 232
extern int sync_file_range(int __fd , __off64_t __from , __off64_t __to ,
                           unsigned int __flags ) ;
#line 237
extern int vmsplice(int __fdout , struct iovec  const  *__iov , size_t __count ,
                    unsigned int __flags ) ;
#line 241
extern  __attribute__((__nothrow__)) int splice(int __fdin ,
                                                __off64_t *__offin ,
                                                int __fdout ,
                                                __off64_t *__offout ,
                                                size_t __len ,
                                                unsigned int __flags ) ;
#line 246
extern  __attribute__((__nothrow__)) int tee(int __fdin , int __fdout ,
                                             size_t __len ,
                                             unsigned int __flags ) ;
#line 215 "/usr/include/sys/stat.h"
__inline static  __attribute__((__nothrow__)) int stat(char const   * __restrict  __path ,
                                                       struct stat * __restrict  __statbuf )  __asm__("stat64") __attribute__((__nonnull__(1,2))) ;
#line 218
__inline static  __attribute__((__nothrow__)) int fstat(int __fd ,
                                                        struct stat *__statbuf )  __asm__("fstat64") __attribute__((__nonnull__(2))) ;
#line 226
__inline static  __attribute__((__nothrow__)) int stat64(char const   * __restrict  __path ,
                                                         struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
#line 228
__inline static  __attribute__((__nothrow__)) int fstat64(int __fd ,
                                                          struct stat64 *__statbuf )  __attribute__((__nonnull__(2))) ;
#line 241
__inline static  __attribute__((__nothrow__)) int fstatat(int __fd ,
                                                          char const   * __restrict  __filename ,
                                                          struct stat * __restrict  __statbuf ,
                                                          int __flag )  __asm__("fstatat64") __attribute__((__nonnull__(2,3))) ;
#line 250
__inline static  __attribute__((__nothrow__)) int fstatat64(int __fd ,
                                                            char const   * __restrict  __filename ,
                                                            struct stat64 * __restrict  __statbuf ,
                                                            int __flag )  __attribute__((__nonnull__(2,3))) ;
#line 263
__inline static  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __path ,
                                                        struct stat * __restrict  __statbuf )  __asm__("lstat64") __attribute__((__nonnull__(1,2))) ;
#line 272
__inline static  __attribute__((__nothrow__)) int lstat64(char const   * __restrict  __path ,
                                                          struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
#line 280
extern  __attribute__((__nothrow__)) int chmod(char const   *__file ,
                                               __mode_t __mode )  __attribute__((__nonnull__(1))) ;
#line 287
extern  __attribute__((__nothrow__)) int lchmod(char const   *__file ,
                                                __mode_t __mode )  __attribute__((__nonnull__(1))) ;
#line 293
extern  __attribute__((__nothrow__)) int fchmod(int __fd , __mode_t __mode ) ;
#line 299
extern  __attribute__((__nothrow__)) int fchmodat(int __fd ,
                                                  char const   *__file ,
                                                  __mode_t mode , int __flag )  __attribute__((__nonnull__(2))) ;
#line 307
extern  __attribute__((__nothrow__)) __mode_t umask(__mode_t __mask ) ;
#line 312
extern  __attribute__((__nothrow__)) __mode_t getumask(void) ;
#line 316
extern  __attribute__((__nothrow__)) int mkdir(char const   *__path ,
                                               __mode_t __mode )  __attribute__((__nonnull__(1))) ;
#line 323
extern  __attribute__((__nothrow__)) int mkdirat(int __fd ,
                                                 char const   *__path ,
                                                 __mode_t __mode )  __attribute__((__nonnull__(2))) ;
#line 331
__inline static  __attribute__((__nothrow__)) int mknod(char const   *__path ,
                                                        __mode_t __mode ,
                                                        __dev_t __dev )  __attribute__((__nonnull__(1))) ;
#line 339
__inline static  __attribute__((__nothrow__)) int mknodat(int __fd ,
                                                          char const   *__path ,
                                                          __mode_t __mode ,
                                                          __dev_t __dev )  __attribute__((__nonnull__(2))) ;
#line 345
extern  __attribute__((__nothrow__)) int mkfifo(char const   *__path ,
                                                __mode_t __mode )  __attribute__((__nonnull__(1))) ;
#line 352
extern  __attribute__((__nothrow__)) int mkfifoat(int __fd ,
                                                  char const   *__path ,
                                                  __mode_t __mode )  __attribute__((__nonnull__(2))) ;
#line 391
extern  __attribute__((__nothrow__)) int __fxstat(int __ver , int __fildes ,
                                                  struct stat *__stat_buf )  __asm__("__fxstat64") __attribute__((__nonnull__(3))) ;
#line 394
extern  __attribute__((__nothrow__)) int __xstat(int __ver ,
                                                 char const   *__filename ,
                                                 struct stat *__stat_buf )  __asm__("__xstat64") __attribute__((__nonnull__(2,3))) ;
#line 397
extern  __attribute__((__nothrow__)) int __lxstat(int __ver ,
                                                  char const   *__filename ,
                                                  struct stat *__stat_buf )  __asm__("__lxstat64") __attribute__((__nonnull__(2,3))) ;
#line 400
extern  __attribute__((__nothrow__)) int __fxstatat(int __ver , int __fildes ,
                                                    char const   *__filename ,
                                                    struct stat *__stat_buf ,
                                                    int __flag )  __asm__("__fxstatat64") __attribute__((__nonnull__(3,4))) ;
#line 413
extern  __attribute__((__nothrow__)) int __fxstat64(int __ver , int __fildes ,
                                                    struct stat64 *__stat_buf )  __attribute__((__nonnull__(3))) ;
#line 415
extern  __attribute__((__nothrow__)) int __xstat64(int __ver ,
                                                   char const   *__filename ,
                                                   struct stat64 *__stat_buf )  __attribute__((__nonnull__(2,3))) ;
#line 417
extern  __attribute__((__nothrow__)) int __lxstat64(int __ver ,
                                                    char const   *__filename ,
                                                    struct stat64 *__stat_buf )  __attribute__((__nonnull__(2,3))) ;
#line 419
extern  __attribute__((__nothrow__)) int __fxstatat64(int __ver , int __fildes ,
                                                      char const   *__filename ,
                                                      struct stat64 *__stat_buf ,
                                                      int __flag )  __attribute__((__nonnull__(3,4))) ;
#line 423
extern  __attribute__((__nothrow__)) int __xmknod(int __ver ,
                                                  char const   *__path ,
                                                  __mode_t __mode ,
                                                  __dev_t *__dev )  __attribute__((__nonnull__(2,4))) ;
#line 426
extern  __attribute__((__nothrow__)) int __xmknodat(int __ver , int __fd ,
                                                    char const   *__path ,
                                                    __mode_t __mode ,
                                                    __dev_t *__dev )  __attribute__((__nonnull__(3,5))) ;
#line 433
__inline static  __attribute__((__nothrow__)) int stat(char const   * __restrict  __path ,
                                                       struct stat * __restrict  __statbuf )  __asm__("stat64") __attribute__((__nonnull__(1,2))) ;
#line 433 "/usr/include/sys/stat.h"
__inline static int stat(char const   * __restrict  __path ,
                         struct stat * __restrict  __statbuf ) 
{ int tmp ;

  {
  {
#line 436
  fprintf(_coverage_fout, "192\n");
#line 436
  fflush(_coverage_fout);
#line 436
  tmp = __xstat(1, (char const   *)__path, (struct stat *)__statbuf);
  }
#line 433
  fprintf(_coverage_fout, "193\n");
#line 433
  fflush(_coverage_fout);
#line 436
  return (tmp);
}
}
#line 440
__inline static  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __path ,
                                                        struct stat * __restrict  __statbuf )  __asm__("lstat64") __attribute__((__nonnull__(1,2))) ;
#line 440 "/usr/include/sys/stat.h"
__inline static int lstat(char const   * __restrict  __path ,
                          struct stat * __restrict  __statbuf ) 
{ int tmp ;

  {
  {
#line 443
  fprintf(_coverage_fout, "194\n");
#line 443
  fflush(_coverage_fout);
#line 443
  tmp = __lxstat(1, (char const   *)__path, (struct stat *)__statbuf);
  }
#line 440
  fprintf(_coverage_fout, "195\n");
#line 440
  fflush(_coverage_fout);
#line 443
  return (tmp);
}
}
#line 447
__inline static  __attribute__((__nothrow__)) int fstat(int __fd ,
                                                        struct stat *__statbuf )  __asm__("fstat64") __attribute__((__nonnull__(2))) ;
#line 447 "/usr/include/sys/stat.h"
__inline static int fstat(int __fd , struct stat *__statbuf ) 
{ int tmp ;

  {
  {
#line 450
  fprintf(_coverage_fout, "196\n");
#line 450
  fflush(_coverage_fout);
#line 450
  tmp = __fxstat(1, __fd, __statbuf);
  }
#line 447
  fprintf(_coverage_fout, "197\n");
#line 447
  fflush(_coverage_fout);
#line 450
  return (tmp);
}
}
#line 454
__inline static  __attribute__((__nothrow__)) int fstatat(int __fd ,
                                                          char const   * __restrict  __filename ,
                                                          struct stat * __restrict  __statbuf ,
                                                          int __flag )  __asm__("fstatat64") __attribute__((__nonnull__(2,3))) ;
#line 454 "/usr/include/sys/stat.h"
__inline static int fstatat(int __fd , char const   * __restrict  __filename ,
                            struct stat * __restrict  __statbuf , int __flag ) 
{ int tmp ;

  {
  {
#line 458
  fprintf(_coverage_fout, "198\n");
#line 458
  fflush(_coverage_fout);
#line 458
  tmp = __fxstatat(1, __fd, (char const   *)__filename,
                   (struct stat *)__statbuf, __flag);
  }
#line 454
  fprintf(_coverage_fout, "199\n");
#line 454
  fflush(_coverage_fout);
#line 458
  return (tmp);
}
}
#line 463
__inline static  __attribute__((__nothrow__)) int mknod(char const   *__path ,
                                                        __mode_t __mode ,
                                                        __dev_t __dev )  __attribute__((__nonnull__(1))) ;
#line 463 "/usr/include/sys/stat.h"
__inline static int mknod(char const   *__path , __mode_t __mode ,
                          __dev_t __dev ) 
{ int tmp ;

  {
  {
#line 466
  fprintf(_coverage_fout, "200\n");
#line 466
  fflush(_coverage_fout);
#line 466
  tmp = __xmknod(0, __path, __mode, & __dev);
  }
#line 463
  fprintf(_coverage_fout, "201\n");
#line 463
  fflush(_coverage_fout);
#line 466
  return (tmp);
}
}
#line 471
__inline static  __attribute__((__nothrow__)) int mknodat(int __fd ,
                                                          char const   *__path ,
                                                          __mode_t __mode ,
                                                          __dev_t __dev )  __attribute__((__nonnull__(2))) ;
#line 471 "/usr/include/sys/stat.h"
__inline static int mknodat(int __fd , char const   *__path , __mode_t __mode ,
                            __dev_t __dev ) 
{ int tmp ;

  {
  {
#line 475
  fprintf(_coverage_fout, "202\n");
#line 475
  fflush(_coverage_fout);
#line 475
  tmp = __xmknodat(0, __fd, __path, __mode, & __dev);
  }
#line 471
  fprintf(_coverage_fout, "203\n");
#line 471
  fflush(_coverage_fout);
#line 475
  return (tmp);
}
}
#line 482
__inline static  __attribute__((__nothrow__)) int stat64(char const   * __restrict  __path ,
                                                         struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
#line 482 "/usr/include/sys/stat.h"
__inline static int stat64(char const   * __restrict  __path ,
                           struct stat64 * __restrict  __statbuf ) 
{ int tmp ;

  {
  {
#line 485
  fprintf(_coverage_fout, "204\n");
#line 485
  fflush(_coverage_fout);
#line 485
  tmp = __xstat64(1, (char const   *)__path, (struct stat64 *)__statbuf);
  }
#line 482
  fprintf(_coverage_fout, "205\n");
#line 482
  fflush(_coverage_fout);
#line 485
  return (tmp);
}
}
#line 489
__inline static  __attribute__((__nothrow__)) int lstat64(char const   * __restrict  __path ,
                                                          struct stat64 * __restrict  __statbuf )  __attribute__((__nonnull__(1,2))) ;
#line 489 "/usr/include/sys/stat.h"
__inline static int lstat64(char const   * __restrict  __path ,
                            struct stat64 * __restrict  __statbuf ) 
{ int tmp ;

  {
  {
#line 492
  fprintf(_coverage_fout, "206\n");
#line 492
  fflush(_coverage_fout);
#line 492
  tmp = __lxstat64(1, (char const   *)__path, (struct stat64 *)__statbuf);
  }
#line 489
  fprintf(_coverage_fout, "207\n");
#line 489
  fflush(_coverage_fout);
#line 492
  return (tmp);
}
}
#line 496
__inline static  __attribute__((__nothrow__)) int fstat64(int __fd ,
                                                          struct stat64 *__statbuf )  __attribute__((__nonnull__(2))) ;
#line 496 "/usr/include/sys/stat.h"
__inline static int fstat64(int __fd , struct stat64 *__statbuf ) 
{ int tmp ;

  {
  {
#line 499
  fprintf(_coverage_fout, "208\n");
#line 499
  fflush(_coverage_fout);
#line 499
  tmp = __fxstat64(1, __fd, __statbuf);
  }
#line 496
  fprintf(_coverage_fout, "209\n");
#line 496
  fflush(_coverage_fout);
#line 499
  return (tmp);
}
}
#line 503
__inline static  __attribute__((__nothrow__)) int fstatat64(int __fd ,
                                                            char const   * __restrict  __filename ,
                                                            struct stat64 * __restrict  __statbuf ,
                                                            int __flag )  __attribute__((__nonnull__(2,3))) ;
#line 503 "/usr/include/sys/stat.h"
__inline static int fstatat64(int __fd , char const   * __restrict  __filename ,
                              struct stat64 * __restrict  __statbuf ,
                              int __flag ) 
{ int tmp ;

  {
  {
#line 507
  fprintf(_coverage_fout, "210\n");
#line 507
  fflush(_coverage_fout);
#line 507
  tmp = __fxstatat64(1, __fd, (char const   *)__filename,
                     (struct stat64 *)__statbuf, __flag);
  }
#line 503
  fprintf(_coverage_fout, "211\n");
#line 503
  fflush(_coverage_fout);
#line 507
  return (tmp);
}
}
#line 76 "/usr/include/fcntl.h"
extern int fcntl(int __fd , int __cmd  , ...) ;
#line 88
extern int open(char const   *__file , int __oflag  , ...)  __asm__("open64") __attribute__((__nonnull__(1))) ;
#line 95
extern int open64(char const   *__file , int __oflag  , ...)  __attribute__((__nonnull__(1))) ;
#line 113
extern int openat(int __fd , char const   *__file , int __oflag  , ...)  __asm__("openat64") __attribute__((__nonnull__(2))) ;
#line 120
extern int openat64(int __fd , char const   *__file , int __oflag  , ...)  __attribute__((__nonnull__(2))) ;
#line 133
extern int creat(char const   *__file , __mode_t __mode )  __asm__("creat64") __attribute__((__nonnull__(1))) ;
#line 140
extern int creat64(char const   *__file , __mode_t __mode )  __attribute__((__nonnull__(1))) ;
#line 180
extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off64_t __offset ,
                                                       __off64_t __len ,
                                                       int __advise )  __asm__("posix_fadvise64")  ;
#line 188
extern  __attribute__((__nothrow__)) int posix_fadvise64(int __fd ,
                                                         __off64_t __offset ,
                                                         __off64_t __len ,
                                                         int __advise ) ;
#line 201
extern int posix_fallocate(int __fd , __off64_t __offset , __off64_t __len )  __asm__("posix_fallocate64")  ;
#line 209
extern int posix_fallocate64(int __fd , __off64_t __offset , __off64_t __len ) ;
#line 55 "/usr/include/bits/mathcalls.h"
extern  __attribute__((__nothrow__)) double acos(double __x ) ;
#line 55
extern  __attribute__((__nothrow__)) double __acos(double __x ) ;
#line 57
extern  __attribute__((__nothrow__)) double asin(double __x ) ;
#line 57
extern  __attribute__((__nothrow__)) double __asin(double __x ) ;
#line 59
extern  __attribute__((__nothrow__)) double atan(double __x ) ;
#line 59
extern  __attribute__((__nothrow__)) double __atan(double __x ) ;
#line 61
extern  __attribute__((__nothrow__)) double atan2(double __y , double __x ) ;
#line 61
extern  __attribute__((__nothrow__)) double __atan2(double __y , double __x ) ;
#line 64
extern  __attribute__((__nothrow__)) double cos(double __x ) ;
#line 64
extern  __attribute__((__nothrow__)) double __cos(double __x ) ;
#line 66
extern  __attribute__((__nothrow__)) double sin(double __x ) ;
#line 66
extern  __attribute__((__nothrow__)) double __sin(double __x ) ;
#line 68
extern  __attribute__((__nothrow__)) double tan(double __x ) ;
#line 68
extern  __attribute__((__nothrow__)) double __tan(double __x ) ;
#line 73
extern  __attribute__((__nothrow__)) double cosh(double __x ) ;
#line 73
extern  __attribute__((__nothrow__)) double __cosh(double __x ) ;
#line 75
extern  __attribute__((__nothrow__)) double sinh(double __x ) ;
#line 75
extern  __attribute__((__nothrow__)) double __sinh(double __x ) ;
#line 77
extern  __attribute__((__nothrow__)) double tanh(double __x ) ;
#line 77
extern  __attribute__((__nothrow__)) double __tanh(double __x ) ;
#line 82
extern  __attribute__((__nothrow__)) void sincos(double __x , double *__sinx ,
                                                 double *__cosx ) ;
#line 82
extern  __attribute__((__nothrow__)) void __sincos(double __x , double *__sinx ,
                                                   double *__cosx ) ;
#line 89
extern  __attribute__((__nothrow__)) double acosh(double __x ) ;
#line 89
extern  __attribute__((__nothrow__)) double __acosh(double __x ) ;
#line 91
extern  __attribute__((__nothrow__)) double asinh(double __x ) ;
#line 91
extern  __attribute__((__nothrow__)) double __asinh(double __x ) ;
#line 93
extern  __attribute__((__nothrow__)) double atanh(double __x ) ;
#line 93
extern  __attribute__((__nothrow__)) double __atanh(double __x ) ;
#line 101
extern  __attribute__((__nothrow__)) double exp(double __x ) ;
#line 101
extern  __attribute__((__nothrow__)) double __exp(double __x ) ;
#line 104
extern  __attribute__((__nothrow__)) double frexp(double __x , int *__exponent ) ;
#line 104
extern  __attribute__((__nothrow__)) double __frexp(double __x ,
                                                    int *__exponent ) ;
#line 107
extern  __attribute__((__nothrow__)) double ldexp(double __x , int __exponent ) ;
#line 107
extern  __attribute__((__nothrow__)) double __ldexp(double __x , int __exponent ) ;
#line 110
extern  __attribute__((__nothrow__)) double log(double __x ) ;
#line 110
extern  __attribute__((__nothrow__)) double __log(double __x ) ;
#line 113
extern  __attribute__((__nothrow__)) double log10(double __x ) ;
#line 113
extern  __attribute__((__nothrow__)) double __log10(double __x ) ;
#line 116
extern  __attribute__((__nothrow__)) double modf(double __x , double *__iptr ) ;
#line 116
extern  __attribute__((__nothrow__)) double __modf(double __x , double *__iptr ) ;
#line 121
extern  __attribute__((__nothrow__)) double exp10(double __x ) ;
#line 121
extern  __attribute__((__nothrow__)) double __exp10(double __x ) ;
#line 123
extern  __attribute__((__nothrow__)) double pow10(double __x ) ;
#line 123
extern  __attribute__((__nothrow__)) double __pow10(double __x ) ;
#line 129
extern  __attribute__((__nothrow__)) double expm1(double __x ) ;
#line 129
extern  __attribute__((__nothrow__)) double __expm1(double __x ) ;
#line 132
extern  __attribute__((__nothrow__)) double log1p(double __x ) ;
#line 132
extern  __attribute__((__nothrow__)) double __log1p(double __x ) ;
#line 135
extern  __attribute__((__nothrow__)) double logb(double __x ) ;
#line 135
extern  __attribute__((__nothrow__)) double __logb(double __x ) ;
#line 142
extern  __attribute__((__nothrow__)) double exp2(double __x ) ;
#line 142
extern  __attribute__((__nothrow__)) double __exp2(double __x ) ;
#line 145
extern  __attribute__((__nothrow__)) double log2(double __x ) ;
#line 145
extern  __attribute__((__nothrow__)) double __log2(double __x ) ;
#line 154
extern  __attribute__((__nothrow__)) double pow(double __x , double __y ) ;
#line 154
extern  __attribute__((__nothrow__)) double __pow(double __x , double __y ) ;
#line 157
extern  __attribute__((__nothrow__)) double sqrt(double __x ) ;
#line 157
extern  __attribute__((__nothrow__)) double __sqrt(double __x ) ;
#line 163
extern  __attribute__((__nothrow__)) double hypot(double __x , double __y ) ;
#line 163
extern  __attribute__((__nothrow__)) double __hypot(double __x , double __y ) ;
#line 170
extern  __attribute__((__nothrow__)) double cbrt(double __x ) ;
#line 170
extern  __attribute__((__nothrow__)) double __cbrt(double __x ) ;
#line 179
extern  __attribute__((__nothrow__)) double ceil(double __x )  __attribute__((__const__)) ;
#line 179
extern  __attribute__((__nothrow__)) double __ceil(double __x )  __attribute__((__const__)) ;
#line 182
extern  __attribute__((__nothrow__)) double fabs(double __x )  __attribute__((__const__)) ;
#line 182
extern  __attribute__((__nothrow__)) double __fabs(double __x )  __attribute__((__const__)) ;
#line 185
extern  __attribute__((__nothrow__)) double floor(double __x )  __attribute__((__const__)) ;
#line 185
extern  __attribute__((__nothrow__)) double __floor(double __x )  __attribute__((__const__)) ;
#line 188
extern  __attribute__((__nothrow__)) double fmod(double __x , double __y ) ;
#line 188
extern  __attribute__((__nothrow__)) double __fmod(double __x , double __y ) ;
#line 193
extern  __attribute__((__nothrow__)) int __isinf(double __value )  __attribute__((__const__)) ;
#line 196
extern  __attribute__((__nothrow__)) int __finite(double __value )  __attribute__((__const__)) ;
#line 202
extern  __attribute__((__nothrow__)) int isinf(double __value )  __attribute__((__const__)) ;
#line 205
extern  __attribute__((__nothrow__)) int finite(double __value )  __attribute__((__const__)) ;
#line 208
extern  __attribute__((__nothrow__)) double drem(double __x , double __y ) ;
#line 208
extern  __attribute__((__nothrow__)) double __drem(double __x , double __y ) ;
#line 212
extern  __attribute__((__nothrow__)) double significand(double __x ) ;
#line 212
extern  __attribute__((__nothrow__)) double __significand(double __x ) ;
#line 218
extern  __attribute__((__nothrow__)) double copysign(double __x , double __y )  __attribute__((__const__)) ;
#line 218
extern  __attribute__((__nothrow__)) double __copysign(double __x , double __y )  __attribute__((__const__)) ;
#line 225
extern  __attribute__((__nothrow__)) double nan(char const   *__tagb )  __attribute__((__const__)) ;
#line 225
extern  __attribute__((__nothrow__)) double __nan(char const   *__tagb )  __attribute__((__const__)) ;
#line 231
extern  __attribute__((__nothrow__)) int __isnan(double __value )  __attribute__((__const__)) ;
#line 235
extern  __attribute__((__nothrow__)) int isnan(double __value )  __attribute__((__const__)) ;
#line 238
extern  __attribute__((__nothrow__)) double j0(double  ) ;
#line 238
extern  __attribute__((__nothrow__)) double __j0(double  ) ;
#line 239
extern  __attribute__((__nothrow__)) double j1(double  ) ;
#line 239
extern  __attribute__((__nothrow__)) double __j1(double  ) ;
#line 240
extern  __attribute__((__nothrow__)) double jn(int  , double  ) ;
#line 240
extern  __attribute__((__nothrow__)) double __jn(int  , double  ) ;
#line 241
extern  __attribute__((__nothrow__)) double y0(double  ) ;
#line 241
extern  __attribute__((__nothrow__)) double __y0(double  ) ;
#line 242
extern  __attribute__((__nothrow__)) double y1(double  ) ;
#line 242
extern  __attribute__((__nothrow__)) double __y1(double  ) ;
#line 243
extern  __attribute__((__nothrow__)) double yn(int  , double  ) ;
#line 243
extern  __attribute__((__nothrow__)) double __yn(int  , double  ) ;
#line 250
extern  __attribute__((__nothrow__)) double erf(double  ) ;
#line 250
extern  __attribute__((__nothrow__)) double __erf(double  ) ;
#line 251
extern  __attribute__((__nothrow__)) double erfc(double  ) ;
#line 251
extern  __attribute__((__nothrow__)) double __erfc(double  ) ;
#line 252
extern  __attribute__((__nothrow__)) double lgamma(double  ) ;
#line 252
extern  __attribute__((__nothrow__)) double __lgamma(double  ) ;
#line 259
extern  __attribute__((__nothrow__)) double tgamma(double  ) ;
#line 259
extern  __attribute__((__nothrow__)) double __tgamma(double  ) ;
#line 265
extern  __attribute__((__nothrow__)) double gamma(double  ) ;
#line 265
extern  __attribute__((__nothrow__)) double __gamma(double  ) ;
#line 272
extern  __attribute__((__nothrow__)) double lgamma_r(double  , int *__signgamp ) ;
#line 272
extern  __attribute__((__nothrow__)) double __lgamma_r(double  ,
                                                       int *__signgamp ) ;
#line 280
extern  __attribute__((__nothrow__)) double rint(double __x ) ;
#line 280
extern  __attribute__((__nothrow__)) double __rint(double __x ) ;
#line 283
extern  __attribute__((__nothrow__)) double nextafter(double __x , double __y )  __attribute__((__const__)) ;
#line 283
extern  __attribute__((__nothrow__)) double __nextafter(double __x , double __y )  __attribute__((__const__)) ;
#line 285
extern  __attribute__((__nothrow__)) double nexttoward(double __x ,
                                                       long double __y )  __attribute__((__const__)) ;
#line 285
extern  __attribute__((__nothrow__)) double __nexttoward(double __x ,
                                                         long double __y )  __attribute__((__const__)) ;
#line 289
extern  __attribute__((__nothrow__)) double remainder(double __x , double __y ) ;
#line 289
extern  __attribute__((__nothrow__)) double __remainder(double __x , double __y ) ;
#line 293
extern  __attribute__((__nothrow__)) double scalbn(double __x , int __n ) ;
#line 293
extern  __attribute__((__nothrow__)) double __scalbn(double __x , int __n ) ;
#line 297
extern  __attribute__((__nothrow__)) int ilogb(double __x ) ;
#line 297
extern  __attribute__((__nothrow__)) int __ilogb(double __x ) ;
#line 302
extern  __attribute__((__nothrow__)) double scalbln(double __x , long __n ) ;
#line 302
extern  __attribute__((__nothrow__)) double __scalbln(double __x , long __n ) ;
#line 306
extern  __attribute__((__nothrow__)) double nearbyint(double __x ) ;
#line 306
extern  __attribute__((__nothrow__)) double __nearbyint(double __x ) ;
#line 310
extern  __attribute__((__nothrow__)) double round(double __x )  __attribute__((__const__)) ;
#line 310
extern  __attribute__((__nothrow__)) double __round(double __x )  __attribute__((__const__)) ;
#line 314
extern  __attribute__((__nothrow__)) double trunc(double __x )  __attribute__((__const__)) ;
#line 314
extern  __attribute__((__nothrow__)) double __trunc(double __x )  __attribute__((__const__)) ;
#line 319
extern  __attribute__((__nothrow__)) double remquo(double __x , double __y ,
                                                   int *__quo ) ;
#line 319
extern  __attribute__((__nothrow__)) double __remquo(double __x , double __y ,
                                                     int *__quo ) ;
#line 326
extern  __attribute__((__nothrow__)) long lrint(double __x ) ;
#line 326
extern  __attribute__((__nothrow__)) long __lrint(double __x ) ;
#line 327
extern  __attribute__((__nothrow__)) long long llrint(double __x ) ;
#line 327
extern  __attribute__((__nothrow__)) long long __llrint(double __x ) ;
#line 331
extern  __attribute__((__nothrow__)) long lround(double __x ) ;
#line 331
extern  __attribute__((__nothrow__)) long __lround(double __x ) ;
#line 332
extern  __attribute__((__nothrow__)) long long llround(double __x ) ;
#line 332
extern  __attribute__((__nothrow__)) long long __llround(double __x ) ;
#line 336
extern  __attribute__((__nothrow__)) double fdim(double __x , double __y ) ;
#line 336
extern  __attribute__((__nothrow__)) double __fdim(double __x , double __y ) ;
#line 339
extern  __attribute__((__nothrow__)) double fmax(double __x , double __y ) ;
#line 339
extern  __attribute__((__nothrow__)) double __fmax(double __x , double __y ) ;
#line 342
extern  __attribute__((__nothrow__)) double fmin(double __x , double __y ) ;
#line 342
extern  __attribute__((__nothrow__)) double __fmin(double __x , double __y ) ;
#line 346
extern  __attribute__((__nothrow__)) int __fpclassify(double __value )  __attribute__((__const__)) ;
#line 350
__inline static  __attribute__((__nothrow__)) int __signbit(double __x )  __attribute__((__const__)) ;
#line 355
extern  __attribute__((__nothrow__)) double fma(double __x , double __y ,
                                                double __z ) ;
#line 355
extern  __attribute__((__nothrow__)) double __fma(double __x , double __y ,
                                                  double __z ) ;
#line 364
extern  __attribute__((__nothrow__)) double scalb(double __x , double __n ) ;
#line 364
extern  __attribute__((__nothrow__)) double __scalb(double __x , double __n ) ;
#line 55
extern  __attribute__((__nothrow__)) float acosf(float __x ) ;
#line 55
extern  __attribute__((__nothrow__)) float __acosf(float __x ) ;
#line 57
extern  __attribute__((__nothrow__)) float asinf(float __x ) ;
#line 57
extern  __attribute__((__nothrow__)) float __asinf(float __x ) ;
#line 59
extern  __attribute__((__nothrow__)) float atanf(float __x ) ;
#line 59
extern  __attribute__((__nothrow__)) float __atanf(float __x ) ;
#line 61
extern  __attribute__((__nothrow__)) float atan2f(float __y , float __x ) ;
#line 61
extern  __attribute__((__nothrow__)) float __atan2f(float __y , float __x ) ;
#line 64
extern  __attribute__((__nothrow__)) float cosf(float __x ) ;
#line 64
extern  __attribute__((__nothrow__)) float __cosf(float __x ) ;
#line 66
extern  __attribute__((__nothrow__)) float sinf(float __x ) ;
#line 66
extern  __attribute__((__nothrow__)) float __sinf(float __x ) ;
#line 68
extern  __attribute__((__nothrow__)) float tanf(float __x ) ;
#line 68
extern  __attribute__((__nothrow__)) float __tanf(float __x ) ;
#line 73
extern  __attribute__((__nothrow__)) float coshf(float __x ) ;
#line 73
extern  __attribute__((__nothrow__)) float __coshf(float __x ) ;
#line 75
extern  __attribute__((__nothrow__)) float sinhf(float __x ) ;
#line 75
extern  __attribute__((__nothrow__)) float __sinhf(float __x ) ;
#line 77
extern  __attribute__((__nothrow__)) float tanhf(float __x ) ;
#line 77
extern  __attribute__((__nothrow__)) float __tanhf(float __x ) ;
#line 82
extern  __attribute__((__nothrow__)) void sincosf(float __x , float *__sinx ,
                                                  float *__cosx ) ;
#line 82
extern  __attribute__((__nothrow__)) void __sincosf(float __x , float *__sinx ,
                                                    float *__cosx ) ;
#line 89
extern  __attribute__((__nothrow__)) float acoshf(float __x ) ;
#line 89
extern  __attribute__((__nothrow__)) float __acoshf(float __x ) ;
#line 91
extern  __attribute__((__nothrow__)) float asinhf(float __x ) ;
#line 91
extern  __attribute__((__nothrow__)) float __asinhf(float __x ) ;
#line 93
extern  __attribute__((__nothrow__)) float atanhf(float __x ) ;
#line 93
extern  __attribute__((__nothrow__)) float __atanhf(float __x ) ;
#line 101
extern  __attribute__((__nothrow__)) float expf(float __x ) ;
#line 101
extern  __attribute__((__nothrow__)) float __expf(float __x ) ;
#line 104
extern  __attribute__((__nothrow__)) float frexpf(float __x , int *__exponent ) ;
#line 104
extern  __attribute__((__nothrow__)) float __frexpf(float __x , int *__exponent ) ;
#line 107
extern  __attribute__((__nothrow__)) float ldexpf(float __x , int __exponent ) ;
#line 107
extern  __attribute__((__nothrow__)) float __ldexpf(float __x , int __exponent ) ;
#line 110
extern  __attribute__((__nothrow__)) float logf(float __x ) ;
#line 110
extern  __attribute__((__nothrow__)) float __logf(float __x ) ;
#line 113
extern  __attribute__((__nothrow__)) float log10f(float __x ) ;
#line 113
extern  __attribute__((__nothrow__)) float __log10f(float __x ) ;
#line 116
extern  __attribute__((__nothrow__)) float modff(float __x , float *__iptr ) ;
#line 116
extern  __attribute__((__nothrow__)) float __modff(float __x , float *__iptr ) ;
#line 121
extern  __attribute__((__nothrow__)) float exp10f(float __x ) ;
#line 121
extern  __attribute__((__nothrow__)) float __exp10f(float __x ) ;
#line 123
extern  __attribute__((__nothrow__)) float pow10f(float __x ) ;
#line 123
extern  __attribute__((__nothrow__)) float __pow10f(float __x ) ;
#line 129
extern  __attribute__((__nothrow__)) float expm1f(float __x ) ;
#line 129
extern  __attribute__((__nothrow__)) float __expm1f(float __x ) ;
#line 132
extern  __attribute__((__nothrow__)) float log1pf(float __x ) ;
#line 132
extern  __attribute__((__nothrow__)) float __log1pf(float __x ) ;
#line 135
extern  __attribute__((__nothrow__)) float logbf(float __x ) ;
#line 135
extern  __attribute__((__nothrow__)) float __logbf(float __x ) ;
#line 142
extern  __attribute__((__nothrow__)) float exp2f(float __x ) ;
#line 142
extern  __attribute__((__nothrow__)) float __exp2f(float __x ) ;
#line 145
extern  __attribute__((__nothrow__)) float log2f(float __x ) ;
#line 145
extern  __attribute__((__nothrow__)) float __log2f(float __x ) ;
#line 154
extern  __attribute__((__nothrow__)) float powf(float __x , float __y ) ;
#line 154
extern  __attribute__((__nothrow__)) float __powf(float __x , float __y ) ;
#line 157
extern  __attribute__((__nothrow__)) float sqrtf(float __x ) ;
#line 157
extern  __attribute__((__nothrow__)) float __sqrtf(float __x ) ;
#line 163
extern  __attribute__((__nothrow__)) float hypotf(float __x , float __y ) ;
#line 163
extern  __attribute__((__nothrow__)) float __hypotf(float __x , float __y ) ;
#line 170
extern  __attribute__((__nothrow__)) float cbrtf(float __x ) ;
#line 170
extern  __attribute__((__nothrow__)) float __cbrtf(float __x ) ;
#line 179
extern  __attribute__((__nothrow__)) float ceilf(float __x )  __attribute__((__const__)) ;
#line 179
extern  __attribute__((__nothrow__)) float __ceilf(float __x )  __attribute__((__const__)) ;
#line 182
extern  __attribute__((__nothrow__)) float fabsf(float __x )  __attribute__((__const__)) ;
#line 182
extern  __attribute__((__nothrow__)) float __fabsf(float __x )  __attribute__((__const__)) ;
#line 185
extern  __attribute__((__nothrow__)) float floorf(float __x )  __attribute__((__const__)) ;
#line 185
extern  __attribute__((__nothrow__)) float __floorf(float __x )  __attribute__((__const__)) ;
#line 188
extern  __attribute__((__nothrow__)) float fmodf(float __x , float __y ) ;
#line 188
extern  __attribute__((__nothrow__)) float __fmodf(float __x , float __y ) ;
#line 193
extern  __attribute__((__nothrow__)) int __isinff(float __value )  __attribute__((__const__)) ;
#line 196
extern  __attribute__((__nothrow__)) int __finitef(float __value )  __attribute__((__const__)) ;
#line 202
extern  __attribute__((__nothrow__)) int isinff(float __value )  __attribute__((__const__)) ;
#line 205
extern  __attribute__((__nothrow__)) int finitef(float __value )  __attribute__((__const__)) ;
#line 208
extern  __attribute__((__nothrow__)) float dremf(float __x , float __y ) ;
#line 208
extern  __attribute__((__nothrow__)) float __dremf(float __x , float __y ) ;
#line 212
extern  __attribute__((__nothrow__)) float significandf(float __x ) ;
#line 212
extern  __attribute__((__nothrow__)) float __significandf(float __x ) ;
#line 218
extern  __attribute__((__nothrow__)) float copysignf(float __x , float __y )  __attribute__((__const__)) ;
#line 218
extern  __attribute__((__nothrow__)) float __copysignf(float __x , float __y )  __attribute__((__const__)) ;
#line 225
extern  __attribute__((__nothrow__)) float nanf(char const   *__tagb )  __attribute__((__const__)) ;
#line 225
extern  __attribute__((__nothrow__)) float __nanf(char const   *__tagb )  __attribute__((__const__)) ;
#line 231
extern  __attribute__((__nothrow__)) int __isnanf(float __value )  __attribute__((__const__)) ;
#line 235
extern  __attribute__((__nothrow__)) int isnanf(float __value )  __attribute__((__const__)) ;
#line 238
extern  __attribute__((__nothrow__)) float j0f(float  ) ;
#line 238
extern  __attribute__((__nothrow__)) float __j0f(float  ) ;
#line 239
extern  __attribute__((__nothrow__)) float j1f(float  ) ;
#line 239
extern  __attribute__((__nothrow__)) float __j1f(float  ) ;
#line 240
extern  __attribute__((__nothrow__)) float jnf(int  , float  ) ;
#line 240
extern  __attribute__((__nothrow__)) float __jnf(int  , float  ) ;
#line 241
extern  __attribute__((__nothrow__)) float y0f(float  ) ;
#line 241
extern  __attribute__((__nothrow__)) float __y0f(float  ) ;
#line 242
extern  __attribute__((__nothrow__)) float y1f(float  ) ;
#line 242
extern  __attribute__((__nothrow__)) float __y1f(float  ) ;
#line 243
extern  __attribute__((__nothrow__)) float ynf(int  , float  ) ;
#line 243
extern  __attribute__((__nothrow__)) float __ynf(int  , float  ) ;
#line 250
extern  __attribute__((__nothrow__)) float erff(float  ) ;
#line 250
extern  __attribute__((__nothrow__)) float __erff(float  ) ;
#line 251
extern  __attribute__((__nothrow__)) float erfcf(float  ) ;
#line 251
extern  __attribute__((__nothrow__)) float __erfcf(float  ) ;
#line 252
extern  __attribute__((__nothrow__)) float lgammaf(float  ) ;
#line 252
extern  __attribute__((__nothrow__)) float __lgammaf(float  ) ;
#line 259
extern  __attribute__((__nothrow__)) float tgammaf(float  ) ;
#line 259
extern  __attribute__((__nothrow__)) float __tgammaf(float  ) ;
#line 265
extern  __attribute__((__nothrow__)) float gammaf(float  ) ;
#line 265
extern  __attribute__((__nothrow__)) float __gammaf(float  ) ;
#line 272
extern  __attribute__((__nothrow__)) float lgammaf_r(float  , int *__signgamp ) ;
#line 272
extern  __attribute__((__nothrow__)) float __lgammaf_r(float  , int *__signgamp ) ;
#line 280
extern  __attribute__((__nothrow__)) float rintf(float __x ) ;
#line 280
extern  __attribute__((__nothrow__)) float __rintf(float __x ) ;
#line 283
extern  __attribute__((__nothrow__)) float nextafterf(float __x , float __y )  __attribute__((__const__)) ;
#line 283
extern  __attribute__((__nothrow__)) float __nextafterf(float __x , float __y )  __attribute__((__const__)) ;
#line 285
extern  __attribute__((__nothrow__)) float nexttowardf(float __x ,
                                                       long double __y )  __attribute__((__const__)) ;
#line 285
extern  __attribute__((__nothrow__)) float __nexttowardf(float __x ,
                                                         long double __y )  __attribute__((__const__)) ;
#line 289
extern  __attribute__((__nothrow__)) float remainderf(float __x , float __y ) ;
#line 289
extern  __attribute__((__nothrow__)) float __remainderf(float __x , float __y ) ;
#line 293
extern  __attribute__((__nothrow__)) float scalbnf(float __x , int __n ) ;
#line 293
extern  __attribute__((__nothrow__)) float __scalbnf(float __x , int __n ) ;
#line 297
extern  __attribute__((__nothrow__)) int ilogbf(float __x ) ;
#line 297
extern  __attribute__((__nothrow__)) int __ilogbf(float __x ) ;
#line 302
extern  __attribute__((__nothrow__)) float scalblnf(float __x , long __n ) ;
#line 302
extern  __attribute__((__nothrow__)) float __scalblnf(float __x , long __n ) ;
#line 306
extern  __attribute__((__nothrow__)) float nearbyintf(float __x ) ;
#line 306
extern  __attribute__((__nothrow__)) float __nearbyintf(float __x ) ;
#line 310
extern  __attribute__((__nothrow__)) float roundf(float __x )  __attribute__((__const__)) ;
#line 310
extern  __attribute__((__nothrow__)) float __roundf(float __x )  __attribute__((__const__)) ;
#line 314
extern  __attribute__((__nothrow__)) float truncf(float __x )  __attribute__((__const__)) ;
#line 314
extern  __attribute__((__nothrow__)) float __truncf(float __x )  __attribute__((__const__)) ;
#line 319
extern  __attribute__((__nothrow__)) float remquof(float __x , float __y ,
                                                   int *__quo ) ;
#line 319
extern  __attribute__((__nothrow__)) float __remquof(float __x , float __y ,
                                                     int *__quo ) ;
#line 326
extern  __attribute__((__nothrow__)) long lrintf(float __x ) ;
#line 326
extern  __attribute__((__nothrow__)) long __lrintf(float __x ) ;
#line 327
extern  __attribute__((__nothrow__)) long long llrintf(float __x ) ;
#line 327
extern  __attribute__((__nothrow__)) long long __llrintf(float __x ) ;
#line 331
extern  __attribute__((__nothrow__)) long lroundf(float __x ) ;
#line 331
extern  __attribute__((__nothrow__)) long __lroundf(float __x ) ;
#line 332
extern  __attribute__((__nothrow__)) long long llroundf(float __x ) ;
#line 332
extern  __attribute__((__nothrow__)) long long __llroundf(float __x ) ;
#line 336
extern  __attribute__((__nothrow__)) float fdimf(float __x , float __y ) ;
#line 336
extern  __attribute__((__nothrow__)) float __fdimf(float __x , float __y ) ;
#line 339
extern  __attribute__((__nothrow__)) float fmaxf(float __x , float __y ) ;
#line 339
extern  __attribute__((__nothrow__)) float __fmaxf(float __x , float __y ) ;
#line 342
extern  __attribute__((__nothrow__)) float fminf(float __x , float __y ) ;
#line 342
extern  __attribute__((__nothrow__)) float __fminf(float __x , float __y ) ;
#line 346
extern  __attribute__((__nothrow__)) int __fpclassifyf(float __value )  __attribute__((__const__)) ;
#line 350
__inline static  __attribute__((__nothrow__)) int __signbitf(float __x )  __attribute__((__const__)) ;
#line 355
extern  __attribute__((__nothrow__)) float fmaf(float __x , float __y ,
                                                float __z ) ;
#line 355
extern  __attribute__((__nothrow__)) float __fmaf(float __x , float __y ,
                                                  float __z ) ;
#line 364
extern  __attribute__((__nothrow__)) float scalbf(float __x , float __n ) ;
#line 364
extern  __attribute__((__nothrow__)) float __scalbf(float __x , float __n ) ;
#line 55
extern  __attribute__((__nothrow__)) long double acosl(long double __x ) ;
#line 55
extern  __attribute__((__nothrow__)) long double __acosl(long double __x ) ;
#line 57
extern  __attribute__((__nothrow__)) long double asinl(long double __x ) ;
#line 57
extern  __attribute__((__nothrow__)) long double __asinl(long double __x ) ;
#line 59
extern  __attribute__((__nothrow__)) long double atanl(long double __x ) ;
#line 59
extern  __attribute__((__nothrow__)) long double __atanl(long double __x ) ;
#line 61
extern  __attribute__((__nothrow__)) long double atan2l(long double __y ,
                                                        long double __x ) ;
#line 61
extern  __attribute__((__nothrow__)) long double __atan2l(long double __y ,
                                                          long double __x ) ;
#line 64
extern  __attribute__((__nothrow__)) long double cosl(long double __x ) ;
#line 64
extern  __attribute__((__nothrow__)) long double __cosl(long double __x ) ;
#line 66
extern  __attribute__((__nothrow__)) long double sinl(long double __x ) ;
#line 66
extern  __attribute__((__nothrow__)) long double __sinl(long double __x ) ;
#line 68
extern  __attribute__((__nothrow__)) long double tanl(long double __x ) ;
#line 68
extern  __attribute__((__nothrow__)) long double __tanl(long double __x ) ;
#line 73
extern  __attribute__((__nothrow__)) long double coshl(long double __x ) ;
#line 73
extern  __attribute__((__nothrow__)) long double __coshl(long double __x ) ;
#line 75
extern  __attribute__((__nothrow__)) long double sinhl(long double __x ) ;
#line 75
extern  __attribute__((__nothrow__)) long double __sinhl(long double __x ) ;
#line 77
extern  __attribute__((__nothrow__)) long double tanhl(long double __x ) ;
#line 77
extern  __attribute__((__nothrow__)) long double __tanhl(long double __x ) ;
#line 82
extern  __attribute__((__nothrow__)) void sincosl(long double __x ,
                                                  long double *__sinx ,
                                                  long double *__cosx ) ;
#line 82
extern  __attribute__((__nothrow__)) void __sincosl(long double __x ,
                                                    long double *__sinx ,
                                                    long double *__cosx ) ;
#line 89
extern  __attribute__((__nothrow__)) long double acoshl(long double __x ) ;
#line 89
extern  __attribute__((__nothrow__)) long double __acoshl(long double __x ) ;
#line 91
extern  __attribute__((__nothrow__)) long double asinhl(long double __x ) ;
#line 91
extern  __attribute__((__nothrow__)) long double __asinhl(long double __x ) ;
#line 93
extern  __attribute__((__nothrow__)) long double atanhl(long double __x ) ;
#line 93
extern  __attribute__((__nothrow__)) long double __atanhl(long double __x ) ;
#line 101
extern  __attribute__((__nothrow__)) long double expl(long double __x ) ;
#line 101
extern  __attribute__((__nothrow__)) long double __expl(long double __x ) ;
#line 104
extern  __attribute__((__nothrow__)) long double frexpl(long double __x ,
                                                        int *__exponent ) ;
#line 104
extern  __attribute__((__nothrow__)) long double __frexpl(long double __x ,
                                                          int *__exponent ) ;
#line 107
extern  __attribute__((__nothrow__)) long double ldexpl(long double __x ,
                                                        int __exponent ) ;
#line 107
extern  __attribute__((__nothrow__)) long double __ldexpl(long double __x ,
                                                          int __exponent ) ;
#line 110
extern  __attribute__((__nothrow__)) long double logl(long double __x ) ;
#line 110
extern  __attribute__((__nothrow__)) long double __logl(long double __x ) ;
#line 113
extern  __attribute__((__nothrow__)) long double log10l(long double __x ) ;
#line 113
extern  __attribute__((__nothrow__)) long double __log10l(long double __x ) ;
#line 116
extern  __attribute__((__nothrow__)) long double modfl(long double __x ,
                                                       long double *__iptr ) ;
#line 116
extern  __attribute__((__nothrow__)) long double __modfl(long double __x ,
                                                         long double *__iptr ) ;
#line 121
extern  __attribute__((__nothrow__)) long double exp10l(long double __x ) ;
#line 121
extern  __attribute__((__nothrow__)) long double __exp10l(long double __x ) ;
#line 123
extern  __attribute__((__nothrow__)) long double pow10l(long double __x ) ;
#line 123
extern  __attribute__((__nothrow__)) long double __pow10l(long double __x ) ;
#line 129
extern  __attribute__((__nothrow__)) long double expm1l(long double __x ) ;
#line 129
extern  __attribute__((__nothrow__)) long double __expm1l(long double __x ) ;
#line 132
extern  __attribute__((__nothrow__)) long double log1pl(long double __x ) ;
#line 132
extern  __attribute__((__nothrow__)) long double __log1pl(long double __x ) ;
#line 135
extern  __attribute__((__nothrow__)) long double logbl(long double __x ) ;
#line 135
extern  __attribute__((__nothrow__)) long double __logbl(long double __x ) ;
#line 142
extern  __attribute__((__nothrow__)) long double exp2l(long double __x ) ;
#line 142
extern  __attribute__((__nothrow__)) long double __exp2l(long double __x ) ;
#line 145
extern  __attribute__((__nothrow__)) long double log2l(long double __x ) ;
#line 145
extern  __attribute__((__nothrow__)) long double __log2l(long double __x ) ;
#line 154
extern  __attribute__((__nothrow__)) long double powl(long double __x ,
                                                      long double __y ) ;
#line 154
extern  __attribute__((__nothrow__)) long double __powl(long double __x ,
                                                        long double __y ) ;
#line 157
extern  __attribute__((__nothrow__)) long double sqrtl(long double __x ) ;
#line 157
extern  __attribute__((__nothrow__)) long double __sqrtl(long double __x ) ;
#line 163
extern  __attribute__((__nothrow__)) long double hypotl(long double __x ,
                                                        long double __y ) ;
#line 163
extern  __attribute__((__nothrow__)) long double __hypotl(long double __x ,
                                                          long double __y ) ;
#line 170
extern  __attribute__((__nothrow__)) long double cbrtl(long double __x ) ;
#line 170
extern  __attribute__((__nothrow__)) long double __cbrtl(long double __x ) ;
#line 179
extern  __attribute__((__nothrow__)) long double ceill(long double __x )  __attribute__((__const__)) ;
#line 179
extern  __attribute__((__nothrow__)) long double __ceill(long double __x )  __attribute__((__const__)) ;
#line 182
extern  __attribute__((__nothrow__)) long double fabsl(long double __x )  __attribute__((__const__)) ;
#line 182
extern  __attribute__((__nothrow__)) long double __fabsl(long double __x )  __attribute__((__const__)) ;
#line 185
extern  __attribute__((__nothrow__)) long double floorl(long double __x )  __attribute__((__const__)) ;
#line 185
extern  __attribute__((__nothrow__)) long double __floorl(long double __x )  __attribute__((__const__)) ;
#line 188
extern  __attribute__((__nothrow__)) long double fmodl(long double __x ,
                                                       long double __y ) ;
#line 188
extern  __attribute__((__nothrow__)) long double __fmodl(long double __x ,
                                                         long double __y ) ;
#line 193
extern  __attribute__((__nothrow__)) int __isinfl(long double __value )  __attribute__((__const__)) ;
#line 196
extern  __attribute__((__nothrow__)) int __finitel(long double __value )  __attribute__((__const__)) ;
#line 202
extern  __attribute__((__nothrow__)) int isinfl(long double __value )  __attribute__((__const__)) ;
#line 205
extern  __attribute__((__nothrow__)) int finitel(long double __value )  __attribute__((__const__)) ;
#line 208
extern  __attribute__((__nothrow__)) long double dreml(long double __x ,
                                                       long double __y ) ;
#line 208
extern  __attribute__((__nothrow__)) long double __dreml(long double __x ,
                                                         long double __y ) ;
#line 212
extern  __attribute__((__nothrow__)) long double significandl(long double __x ) ;
#line 212
extern  __attribute__((__nothrow__)) long double __significandl(long double __x ) ;
#line 218
extern  __attribute__((__nothrow__)) long double copysignl(long double __x ,
                                                           long double __y )  __attribute__((__const__)) ;
#line 218
extern  __attribute__((__nothrow__)) long double __copysignl(long double __x ,
                                                             long double __y )  __attribute__((__const__)) ;
#line 225
extern  __attribute__((__nothrow__)) long double nanl(char const   *__tagb )  __attribute__((__const__)) ;
#line 225
extern  __attribute__((__nothrow__)) long double __nanl(char const   *__tagb )  __attribute__((__const__)) ;
#line 231
extern  __attribute__((__nothrow__)) int __isnanl(long double __value )  __attribute__((__const__)) ;
#line 235
extern  __attribute__((__nothrow__)) int isnanl(long double __value )  __attribute__((__const__)) ;
#line 238
extern  __attribute__((__nothrow__)) long double j0l(long double  ) ;
#line 238
extern  __attribute__((__nothrow__)) long double __j0l(long double  ) ;
#line 239
extern  __attribute__((__nothrow__)) long double j1l(long double  ) ;
#line 239
extern  __attribute__((__nothrow__)) long double __j1l(long double  ) ;
#line 240
extern  __attribute__((__nothrow__)) long double jnl(int  , long double  ) ;
#line 240
extern  __attribute__((__nothrow__)) long double __jnl(int  , long double  ) ;
#line 241
extern  __attribute__((__nothrow__)) long double y0l(long double  ) ;
#line 241
extern  __attribute__((__nothrow__)) long double __y0l(long double  ) ;
#line 242
extern  __attribute__((__nothrow__)) long double y1l(long double  ) ;
#line 242
extern  __attribute__((__nothrow__)) long double __y1l(long double  ) ;
#line 243
extern  __attribute__((__nothrow__)) long double ynl(int  , long double  ) ;
#line 243
extern  __attribute__((__nothrow__)) long double __ynl(int  , long double  ) ;
#line 250
extern  __attribute__((__nothrow__)) long double erfl(long double  ) ;
#line 250
extern  __attribute__((__nothrow__)) long double __erfl(long double  ) ;
#line 251
extern  __attribute__((__nothrow__)) long double erfcl(long double  ) ;
#line 251
extern  __attribute__((__nothrow__)) long double __erfcl(long double  ) ;
#line 252
extern  __attribute__((__nothrow__)) long double lgammal(long double  ) ;
#line 252
extern  __attribute__((__nothrow__)) long double __lgammal(long double  ) ;
#line 259
extern  __attribute__((__nothrow__)) long double tgammal(long double  ) ;
#line 259
extern  __attribute__((__nothrow__)) long double __tgammal(long double  ) ;
#line 265
extern  __attribute__((__nothrow__)) long double gammal(long double  ) ;
#line 265
extern  __attribute__((__nothrow__)) long double __gammal(long double  ) ;
#line 272
extern  __attribute__((__nothrow__)) long double lgammal_r(long double  ,
                                                           int *__signgamp ) ;
#line 272
extern  __attribute__((__nothrow__)) long double __lgammal_r(long double  ,
                                                             int *__signgamp ) ;
#line 280
extern  __attribute__((__nothrow__)) long double rintl(long double __x ) ;
#line 280
extern  __attribute__((__nothrow__)) long double __rintl(long double __x ) ;
#line 283
extern  __attribute__((__nothrow__)) long double nextafterl(long double __x ,
                                                            long double __y )  __attribute__((__const__)) ;
#line 283
extern  __attribute__((__nothrow__)) long double __nextafterl(long double __x ,
                                                              long double __y )  __attribute__((__const__)) ;
#line 285
extern  __attribute__((__nothrow__)) long double nexttowardl(long double __x ,
                                                             long double __y )  __attribute__((__const__)) ;
#line 285
extern  __attribute__((__nothrow__)) long double __nexttowardl(long double __x ,
                                                               long double __y )  __attribute__((__const__)) ;
#line 289
extern  __attribute__((__nothrow__)) long double remainderl(long double __x ,
                                                            long double __y ) ;
#line 289
extern  __attribute__((__nothrow__)) long double __remainderl(long double __x ,
                                                              long double __y ) ;
#line 293
extern  __attribute__((__nothrow__)) long double scalbnl(long double __x ,
                                                         int __n ) ;
#line 293
extern  __attribute__((__nothrow__)) long double __scalbnl(long double __x ,
                                                           int __n ) ;
#line 297
extern  __attribute__((__nothrow__)) int ilogbl(long double __x ) ;
#line 297
extern  __attribute__((__nothrow__)) int __ilogbl(long double __x ) ;
#line 302
extern  __attribute__((__nothrow__)) long double scalblnl(long double __x ,
                                                          long __n ) ;
#line 302
extern  __attribute__((__nothrow__)) long double __scalblnl(long double __x ,
                                                            long __n ) ;
#line 306
extern  __attribute__((__nothrow__)) long double nearbyintl(long double __x ) ;
#line 306
extern  __attribute__((__nothrow__)) long double __nearbyintl(long double __x ) ;
#line 310
extern  __attribute__((__nothrow__)) long double roundl(long double __x )  __attribute__((__const__)) ;
#line 310
extern  __attribute__((__nothrow__)) long double __roundl(long double __x )  __attribute__((__const__)) ;
#line 314
extern  __attribute__((__nothrow__)) long double truncl(long double __x )  __attribute__((__const__)) ;
#line 314
extern  __attribute__((__nothrow__)) long double __truncl(long double __x )  __attribute__((__const__)) ;
#line 319
extern  __attribute__((__nothrow__)) long double remquol(long double __x ,
                                                         long double __y ,
                                                         int *__quo ) ;
#line 319
extern  __attribute__((__nothrow__)) long double __remquol(long double __x ,
                                                           long double __y ,
                                                           int *__quo ) ;
#line 326
extern  __attribute__((__nothrow__)) long lrintl(long double __x ) ;
#line 326
extern  __attribute__((__nothrow__)) long __lrintl(long double __x ) ;
#line 327
extern  __attribute__((__nothrow__)) long long llrintl(long double __x ) ;
#line 327
extern  __attribute__((__nothrow__)) long long __llrintl(long double __x ) ;
#line 331
extern  __attribute__((__nothrow__)) long lroundl(long double __x ) ;
#line 331
extern  __attribute__((__nothrow__)) long __lroundl(long double __x ) ;
#line 332
extern  __attribute__((__nothrow__)) long long llroundl(long double __x ) ;
#line 332
extern  __attribute__((__nothrow__)) long long __llroundl(long double __x ) ;
#line 336
extern  __attribute__((__nothrow__)) long double fdiml(long double __x ,
                                                       long double __y ) ;
#line 336
extern  __attribute__((__nothrow__)) long double __fdiml(long double __x ,
                                                         long double __y ) ;
#line 339
extern  __attribute__((__nothrow__)) long double fmaxl(long double __x ,
                                                       long double __y ) ;
#line 339
extern  __attribute__((__nothrow__)) long double __fmaxl(long double __x ,
                                                         long double __y ) ;
#line 342
extern  __attribute__((__nothrow__)) long double fminl(long double __x ,
                                                       long double __y ) ;
#line 342
extern  __attribute__((__nothrow__)) long double __fminl(long double __x ,
                                                         long double __y ) ;
#line 346
extern  __attribute__((__nothrow__)) int __fpclassifyl(long double __value )  __attribute__((__const__)) ;
#line 350
__inline static  __attribute__((__nothrow__)) int __signbitl(long double __x )  __attribute__((__const__)) ;
#line 355
extern  __attribute__((__nothrow__)) long double fmal(long double __x ,
                                                      long double __y ,
                                                      long double __z ) ;
#line 355
extern  __attribute__((__nothrow__)) long double __fmal(long double __x ,
                                                        long double __y ,
                                                        long double __z ) ;
#line 364
extern  __attribute__((__nothrow__)) long double scalbl(long double __x ,
                                                        long double __n ) ;
#line 364
extern  __attribute__((__nothrow__)) long double __scalbl(long double __x ,
                                                          long double __n ) ;
#line 157 "/usr/include/math.h"
extern int signgam ;
#line 296
extern _LIB_VERSION_TYPE _LIB_VERSION ;
#line 322
extern int matherr(struct exception *__exc ) ;
#line 35 "/usr/include/bits/mathinline.h"
__inline static  __attribute__((__nothrow__)) int __signbitf(float __x )  __attribute__((__const__)) ;
#line 35 "/usr/include/bits/mathinline.h"
__inline static int __signbitf(float __x ) 
{ union __anonunion___u_37 __u ;

  {
#line 35
  fprintf(_coverage_fout, "212\n");
#line 35
  fflush(_coverage_fout);
#line 38
  __u.__f = __x;
#line 35
  fprintf(_coverage_fout, "213\n");
#line 35
  fflush(_coverage_fout);
#line 39
  return (__u.__i < 0);
}
}
#line 41
__inline static  __attribute__((__nothrow__)) int __signbit(double __x )  __attribute__((__const__)) ;
#line 41 "/usr/include/bits/mathinline.h"
__inline static int __signbit(double __x ) 
{ union __anonunion___u_38 __u ;

  {
#line 41
  fprintf(_coverage_fout, "214\n");
#line 41
  fflush(_coverage_fout);
#line 44
  __u.__d = __x;
#line 41
  fprintf(_coverage_fout, "215\n");
#line 41
  fflush(_coverage_fout);
#line 45
  return (__u.__i[1] < 0);
}
}
#line 47
__inline static  __attribute__((__nothrow__)) int __signbitl(long double __x )  __attribute__((__const__)) ;
#line 47 "/usr/include/bits/mathinline.h"
__inline static int __signbitl(long double __x ) 
{ union __anonunion___u_39 __u ;

  {
#line 47
  fprintf(_coverage_fout, "216\n");
#line 47
  fflush(_coverage_fout);
#line 50
  __u.__l = __x;
#line 47
  fprintf(_coverage_fout, "217\n");
#line 47
  fflush(_coverage_fout);
#line 51
  return ((__u.__i[2] & 32768) != 0);
}
}
#line 184 "/usr/include/time.h"
extern  __attribute__((__nothrow__)) clock_t clock(void) ;
#line 187
extern  __attribute__((__nothrow__)) time_t time(time_t *__timer ) ;
#line 190
extern  __attribute__((__nothrow__)) double difftime(time_t __time1 ,
                                                     time_t __time0 )  __attribute__((__const__)) ;
#line 194
extern  __attribute__((__nothrow__)) time_t mktime(struct tm *__tp ) ;
#line 200
extern  __attribute__((__nothrow__)) size_t strftime(char * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     char const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;
#line 208
extern  __attribute__((__nothrow__)) char *strptime(char const   * __restrict  __s ,
                                                    char const   * __restrict  __fmt ,
                                                    struct tm *__tp ) ;
#line 218
extern  __attribute__((__nothrow__)) size_t strftime_l(char * __restrict  __s ,
                                                       size_t __maxsize ,
                                                       char const   * __restrict  __format ,
                                                       struct tm  const  * __restrict  __tp ,
                                                       __locale_t __loc ) ;
#line 223
extern  __attribute__((__nothrow__)) char *strptime_l(char const   * __restrict  __s ,
                                                      char const   * __restrict  __fmt ,
                                                      struct tm *__tp ,
                                                      __locale_t __loc ) ;
#line 232
extern  __attribute__((__nothrow__)) struct tm *gmtime(time_t const   *__timer ) ;
#line 236
extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer ) ;
#line 242
extern  __attribute__((__nothrow__)) struct tm *gmtime_r(time_t const   * __restrict  __timer ,
                                                         struct tm * __restrict  __tp ) ;
#line 247
extern  __attribute__((__nothrow__)) struct tm *localtime_r(time_t const   * __restrict  __timer ,
                                                            struct tm * __restrict  __tp ) ;
#line 254
extern  __attribute__((__nothrow__)) char *asctime(struct tm  const  *__tp ) ;
#line 257
extern  __attribute__((__nothrow__)) char *ctime(time_t const   *__timer ) ;
#line 265
extern  __attribute__((__nothrow__)) char *asctime_r(struct tm  const  * __restrict  __tp ,
                                                     char * __restrict  __buf ) ;
#line 269
extern  __attribute__((__nothrow__)) char *ctime_r(time_t const   * __restrict  __timer ,
                                                   char * __restrict  __buf ) ;
#line 275
extern char *__tzname[2] ;
#line 276
extern int __daylight ;
#line 277
extern long __timezone ;
#line 282
extern char *tzname[2] ;
#line 286
extern  __attribute__((__nothrow__)) void tzset(void) ;
#line 290
extern int daylight ;
#line 291
extern long timezone ;
#line 297
extern  __attribute__((__nothrow__)) int stime(time_t const   *__when ) ;
#line 312
extern  __attribute__((__nothrow__)) time_t timegm(struct tm *__tp ) ;
#line 315
extern  __attribute__((__nothrow__)) time_t timelocal(struct tm *__tp ) ;
#line 318
extern  __attribute__((__nothrow__)) int dysize(int __year )  __attribute__((__const__)) ;
#line 327
extern int nanosleep(struct timespec  const  *__requested_time ,
                     struct timespec *__remaining ) ;
#line 332
extern  __attribute__((__nothrow__)) int clock_getres(clockid_t __clock_id ,
                                                      struct timespec *__res ) ;
#line 335
extern  __attribute__((__nothrow__)) int clock_gettime(clockid_t __clock_id ,
                                                       struct timespec *__tp ) ;
#line 338
extern  __attribute__((__nothrow__)) int clock_settime(clockid_t __clock_id ,
                                                       struct timespec  const  *__tp ) ;
#line 346
extern int clock_nanosleep(clockid_t __clock_id , int __flags ,
                           struct timespec  const  *__req ,
                           struct timespec *__rem ) ;
#line 351
extern  __attribute__((__nothrow__)) int clock_getcpuclockid(pid_t __pid ,
                                                             clockid_t *__clock_id ) ;
#line 356
extern  __attribute__((__nothrow__)) int timer_create(clockid_t __clock_id ,
                                                      struct sigevent * __restrict  __evp ,
                                                      timer_t * __restrict  __timerid ) ;
#line 361
extern  __attribute__((__nothrow__)) int timer_delete(timer_t __timerid ) ;
#line 364
extern  __attribute__((__nothrow__)) int timer_settime(timer_t __timerid ,
                                                       int __flags ,
                                                       struct itimerspec  const  * __restrict  __value ,
                                                       struct itimerspec * __restrict  __ovalue ) ;
#line 369
extern  __attribute__((__nothrow__)) int timer_gettime(timer_t __timerid ,
                                                       struct itimerspec *__value ) ;
#line 373
extern  __attribute__((__nothrow__)) int timer_getoverrun(timer_t __timerid ) ;
#line 389
extern int getdate_err ;
#line 398
extern struct tm *getdate(char const   *__string ) ;
#line 412
extern int getdate_r(char const   * __restrict  __string ,
                     struct tm * __restrict  __resbufp ) ;
#line 103 "/usr/include/bits/sigset.h"
__inline static int __sigismember(__sigset_t const   *__set , int __sig ) ;
#line 104
__inline static int __sigaddset(__sigset_t *__set , int __sig ) ;
#line 105
__inline static int __sigdelset(__sigset_t *__set , int __sig ) ;
#line 117 "/usr/include/bits/sigset.h"
__inline static int __sigismember(__sigset_t const   *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;
  int tmp ;

  {
#line 117
  fprintf(_coverage_fout, "220\n");
#line 117
  fflush(_coverage_fout);
#line 117
  __mask = 1UL << (unsigned long )(__sig - 1) % (8UL * sizeof(unsigned long ));
#line 117
  __word = (unsigned long )(__sig - 1) / (8UL * sizeof(unsigned long ));
#line 117
  fprintf(_coverage_fout, "221\n");
#line 117
  fflush(_coverage_fout);
#line 117
  if (__set->__val[__word] & __mask) {
#line 117
    fprintf(_coverage_fout, "218\n");
#line 117
    fflush(_coverage_fout);
#line 117
    tmp = 1;
  } else {
#line 117
    fprintf(_coverage_fout, "219\n");
#line 117
    fflush(_coverage_fout);
#line 117
    tmp = 0;
  }
#line 117
  fprintf(_coverage_fout, "222\n");
#line 117
  fflush(_coverage_fout);
#line 117
  return (tmp);
}
}
#line 118 "/usr/include/bits/sigset.h"
__inline static int __sigaddset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
#line 118
  fprintf(_coverage_fout, "223\n");
#line 118
  fflush(_coverage_fout);
#line 118
  __mask = 1UL << (unsigned long )(__sig - 1) % (8UL * sizeof(unsigned long ));
#line 118
  __word = (unsigned long )(__sig - 1) / (8UL * sizeof(unsigned long ));
#line 118
  __set->__val[__word] |= __mask;
#line 118
  fprintf(_coverage_fout, "224\n");
#line 118
  fflush(_coverage_fout);
#line 118
  return (0);
}
}
#line 119 "/usr/include/bits/sigset.h"
__inline static int __sigdelset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
#line 119
  fprintf(_coverage_fout, "225\n");
#line 119
  fflush(_coverage_fout);
#line 119
  __mask = 1UL << (unsigned long )(__sig - 1) % (8UL * sizeof(unsigned long ));
#line 119
  __word = (unsigned long )(__sig - 1) / (8UL * sizeof(unsigned long ));
#line 119
  __set->__val[__word] &= ~ __mask;
#line 119
  fprintf(_coverage_fout, "226\n");
#line 119
  fflush(_coverage_fout);
#line 119
  return (0);
}
}
#line 80 "/usr/include/signal.h"
extern  __attribute__((__nothrow__)) __sighandler_t __sysv_signal(int __sig ,
                                                                  void (*__handler)(int  ) ) ;
#line 83
extern  __attribute__((__nothrow__)) __sighandler_t sysv_signal(int __sig ,
                                                                void (*__handler)(int  ) ) ;
#line 92
extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig ,
                                                           void (*__handler)(int  ) ) ;
#line 109
extern  __attribute__((__nothrow__)) __sighandler_t bsd_signal(int __sig ,
                                                               void (*__handler)(int  ) ) ;
#line 117
extern  __attribute__((__nothrow__)) int kill(__pid_t __pid , int __sig ) ;
#line 124
extern  __attribute__((__nothrow__)) int killpg(__pid_t __pgrp , int __sig ) ;
#line 129
extern  __attribute__((__nothrow__)) int raise(int __sig ) ;
#line 134
extern  __attribute__((__nothrow__)) __sighandler_t ssignal(int __sig ,
                                                            void (*__handler)(int  ) ) ;
#line 136
extern  __attribute__((__nothrow__)) int gsignal(int __sig ) ;
#line 141
extern void psignal(int __sig , char const   *__s ) ;
#line 153
extern int __sigpause(int __sig_or_mask , int __is_sig ) ;
#line 162
extern int sigpause(int __sig )  __asm__("__xpg_sigpause")  ;
#line 181
extern  __attribute__((__nothrow__)) int sigblock(int __mask )  __attribute__((__deprecated__)) ;
#line 184
extern  __attribute__((__nothrow__)) int sigsetmask(int __mask )  __attribute__((__deprecated__)) ;
#line 187
extern  __attribute__((__nothrow__)) int siggetmask(void)  __attribute__((__deprecated__)) ;
#line 216
extern  __attribute__((__nothrow__)) int sigemptyset(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
#line 219
extern  __attribute__((__nothrow__)) int sigfillset(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
#line 222
extern  __attribute__((__nothrow__)) int sigaddset(sigset_t *__set ,
                                                   int __signo )  __attribute__((__nonnull__(1))) ;
#line 225
extern  __attribute__((__nothrow__)) int sigdelset(sigset_t *__set ,
                                                   int __signo )  __attribute__((__nonnull__(1))) ;
#line 228
extern  __attribute__((__nothrow__)) int sigismember(sigset_t const   *__set ,
                                                     int __signo )  __attribute__((__nonnull__(1))) ;
#line 233
extern  __attribute__((__nothrow__)) int sigisemptyset(sigset_t const   *__set )  __attribute__((__nonnull__(1))) ;
#line 236
extern  __attribute__((__nothrow__)) int sigandset(sigset_t *__set ,
                                                   sigset_t const   *__left ,
                                                   sigset_t const   *__right )  __attribute__((__nonnull__(1,2,3))) ;
#line 240
extern  __attribute__((__nothrow__)) int sigorset(sigset_t *__set ,
                                                  sigset_t const   *__left ,
                                                  sigset_t const   *__right )  __attribute__((__nonnull__(1,2,3))) ;
#line 249
extern  __attribute__((__nothrow__)) int sigprocmask(int __how ,
                                                     sigset_t const   * __restrict  __set ,
                                                     sigset_t * __restrict  __oset ) ;
#line 257
extern int sigsuspend(sigset_t const   *__set )  __attribute__((__nonnull__(1))) ;
#line 260
extern  __attribute__((__nothrow__)) int sigaction(int __sig ,
                                                   struct sigaction  const  * __restrict  __act ,
                                                   struct sigaction * __restrict  __oact ) ;
#line 264
extern  __attribute__((__nothrow__)) int sigpending(sigset_t *__set )  __attribute__((__nonnull__(1))) ;
#line 271
extern int sigwait(sigset_t const   * __restrict  __set ,
                   int * __restrict  __sig )  __attribute__((__nonnull__(1,2))) ;
#line 279
extern int sigwaitinfo(sigset_t const   * __restrict  __set ,
                       siginfo_t * __restrict  __info )  __attribute__((__nonnull__(1))) ;
#line 287
extern int sigtimedwait(sigset_t const   * __restrict  __set ,
                        siginfo_t * __restrict  __info ,
                        struct timespec  const  * __restrict  __timeout )  __attribute__((__nonnull__(1))) ;
#line 294
extern  __attribute__((__nothrow__)) int sigqueue(__pid_t __pid , int __sig ,
                                                  union sigval __val ) ;
#line 304
extern char const   * const  _sys_siglist[65] ;
#line 305
extern char const   * const  sys_siglist[65] ;
#line 328
extern  __attribute__((__nothrow__)) int sigvec(int __sig ,
                                                struct sigvec  const  *__vec ,
                                                struct sigvec *__ovec ) ;
#line 336
extern  __attribute__((__nothrow__)) int sigreturn(struct sigcontext *__scp ) ;
#line 346
extern  __attribute__((__nothrow__)) int siginterrupt(int __sig ,
                                                      int __interrupt ) ;
#line 357
extern  __attribute__((__nothrow__)) int sigstack(struct sigstack *__ss ,
                                                  struct sigstack *__oss )  __attribute__((__deprecated__)) ;
#line 362
extern  __attribute__((__nothrow__)) int sigaltstack(struct sigaltstack  const  * __restrict  __ss ,
                                                     struct sigaltstack * __restrict  __oss ) ;
#line 371
extern  __attribute__((__nothrow__)) int sighold(int __sig ) ;
#line 374
extern  __attribute__((__nothrow__)) int sigrelse(int __sig ) ;
#line 377
extern  __attribute__((__nothrow__)) int sigignore(int __sig ) ;
#line 380
extern  __attribute__((__nothrow__)) __sighandler_t sigset(int __sig ,
                                                           void (*__disp)(int  ) ) ;
#line 31 "/usr/include/bits/sigthread.h"
extern  __attribute__((__nothrow__)) int pthread_sigmask(int __how ,
                                                         __sigset_t const   * __restrict  __newmask ,
                                                         __sigset_t * __restrict  __oldmask ) ;
#line 36
extern  __attribute__((__nothrow__)) int pthread_kill(pthread_t __threadid ,
                                                      int __signo ) ;
#line 394 "/usr/include/signal.h"
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmin(void) ;
#line 396
extern  __attribute__((__nothrow__)) int __libc_current_sigrtmax(void) ;
#line 68 "/usr/include/assert.h"
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_fail(char const   *__assertion ,
                                  char const   *__file , unsigned int __line ,
                                  char const   *__function ) ;
#line 73
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_perror_fail(int __errnum , char const   *__file ,
                                         unsigned int __line ,
                                         char const   *__function ) ;
#line 81
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert(char const   *__assertion , char const   *__file ,
                             int __line ) ;
#line 74 "/usr/include/bits/sched.h"
extern  __attribute__((__nothrow__)) int clone(int (*__fn)(void *__arg ) ,
                                               void *__child_stack ,
                                               int __flags , void *__arg  , ...) ;
#line 78
extern  __attribute__((__nothrow__)) int unshare(int __flags ) ;
#line 40 "/usr/include/sched.h"
extern  __attribute__((__nothrow__)) int sched_setparam(__pid_t __pid ,
                                                        struct sched_param  const  *__param ) ;
#line 44
extern  __attribute__((__nothrow__)) int sched_getparam(__pid_t __pid ,
                                                        struct sched_param *__param ) ;
#line 47
extern  __attribute__((__nothrow__)) int sched_setscheduler(__pid_t __pid ,
                                                            int __policy ,
                                                            struct sched_param  const  *__param ) ;
#line 51
extern  __attribute__((__nothrow__)) int sched_getscheduler(__pid_t __pid ) ;
#line 54
extern  __attribute__((__nothrow__)) int sched_yield(void) ;
#line 57
extern  __attribute__((__nothrow__)) int sched_get_priority_max(int __algorithm ) ;
#line 60
extern  __attribute__((__nothrow__)) int sched_get_priority_min(int __algorithm ) ;
#line 63
extern  __attribute__((__nothrow__)) int sched_rr_get_interval(__pid_t __pid ,
                                                               struct timespec *__t ) ;
#line 76
extern  __attribute__((__nothrow__)) int sched_setaffinity(__pid_t __pid ,
                                                           size_t __cpusetsize ,
                                                           cpu_set_t const   *__cpuset ) ;
#line 80
extern  __attribute__((__nothrow__)) int sched_getaffinity(__pid_t __pid ,
                                                           size_t __cpusetsize ,
                                                           cpu_set_t *__cpuset ) ;
#line 221 "/usr/include/pthread.h"
extern  __attribute__((__nothrow__)) int pthread_create(pthread_t * __restrict  __newthread ,
                                                        pthread_attr_t const   * __restrict  __attr ,
                                                        void *(*__start_routine)(void * ) ,
                                                        void * __restrict  __arg )  __attribute__((__nonnull__(1,3))) ;
#line 230
extern  __attribute__((__noreturn__)) void pthread_exit(void *__retval ) ;
#line 238
extern int pthread_join(pthread_t __th , void **__thread_return ) ;
#line 243
extern  __attribute__((__nothrow__)) int pthread_tryjoin_np(pthread_t __th ,
                                                            void **__thread_return ) ;
#line 251
extern int pthread_timedjoin_np(pthread_t __th , void **__thread_return ,
                                struct timespec  const  *__abstime ) ;
#line 259
extern  __attribute__((__nothrow__)) int pthread_detach(pthread_t __th ) ;
#line 263
extern  __attribute__((__nothrow__)) pthread_t pthread_self(void)  __attribute__((__const__)) ;
#line 266
__inline static  __attribute__((__nothrow__)) int pthread_equal(pthread_t __thread1 ,
                                                                pthread_t __thread2 ) ;
#line 274
extern  __attribute__((__nothrow__)) int pthread_attr_init(pthread_attr_t *__attr )  __attribute__((__nonnull__(1))) ;
#line 277
extern  __attribute__((__nothrow__)) int pthread_attr_destroy(pthread_attr_t *__attr )  __attribute__((__nonnull__(1))) ;
#line 281
extern  __attribute__((__nothrow__)) int pthread_attr_getdetachstate(pthread_attr_t const   *__attr ,
                                                                     int *__detachstate )  __attribute__((__nonnull__(1,2))) ;
#line 286
extern  __attribute__((__nothrow__)) int pthread_attr_setdetachstate(pthread_attr_t *__attr ,
                                                                     int __detachstate )  __attribute__((__nonnull__(1))) ;
#line 292
extern  __attribute__((__nothrow__)) int pthread_attr_getguardsize(pthread_attr_t const   *__attr ,
                                                                   size_t *__guardsize )  __attribute__((__nonnull__(1,2))) ;
#line 297
extern  __attribute__((__nothrow__)) int pthread_attr_setguardsize(pthread_attr_t *__attr ,
                                                                   size_t __guardsize )  __attribute__((__nonnull__(1))) ;
#line 303
extern  __attribute__((__nothrow__)) int pthread_attr_getschedparam(pthread_attr_t const   * __restrict  __attr ,
                                                                    struct sched_param * __restrict  __param )  __attribute__((__nonnull__(1,2))) ;
#line 309
extern  __attribute__((__nothrow__)) int pthread_attr_setschedparam(pthread_attr_t * __restrict  __attr ,
                                                                    struct sched_param  const  * __restrict  __param )  __attribute__((__nonnull__(1,2))) ;
#line 314
extern  __attribute__((__nothrow__)) int pthread_attr_getschedpolicy(pthread_attr_t const   * __restrict  __attr ,
                                                                     int * __restrict  __policy )  __attribute__((__nonnull__(1,2))) ;
#line 319
extern  __attribute__((__nothrow__)) int pthread_attr_setschedpolicy(pthread_attr_t *__attr ,
                                                                     int __policy )  __attribute__((__nonnull__(1))) ;
#line 323
extern  __attribute__((__nothrow__)) int pthread_attr_getinheritsched(pthread_attr_t const   * __restrict  __attr ,
                                                                      int * __restrict  __inherit )  __attribute__((__nonnull__(1,2))) ;
#line 328
extern  __attribute__((__nothrow__)) int pthread_attr_setinheritsched(pthread_attr_t *__attr ,
                                                                      int __inherit )  __attribute__((__nonnull__(1))) ;
#line 334
extern  __attribute__((__nothrow__)) int pthread_attr_getscope(pthread_attr_t const   * __restrict  __attr ,
                                                               int * __restrict  __scope )  __attribute__((__nonnull__(1,2))) ;
#line 339
extern  __attribute__((__nothrow__)) int pthread_attr_setscope(pthread_attr_t *__attr ,
                                                               int __scope )  __attribute__((__nonnull__(1))) ;
#line 343
extern  __attribute__((__nothrow__)) int pthread_attr_getstackaddr(pthread_attr_t const   * __restrict  __attr ,
                                                                   void ** __restrict  __stackaddr )  __attribute__((__nonnull__(1,2),
__deprecated__)) ;
#line 351
extern  __attribute__((__nothrow__)) int pthread_attr_setstackaddr(pthread_attr_t *__attr ,
                                                                   void *__stackaddr )  __attribute__((__nonnull__(1),
__deprecated__)) ;
#line 356
extern  __attribute__((__nothrow__)) int pthread_attr_getstacksize(pthread_attr_t const   * __restrict  __attr ,
                                                                   size_t * __restrict  __stacksize )  __attribute__((__nonnull__(1,2))) ;
#line 363
extern  __attribute__((__nothrow__)) int pthread_attr_setstacksize(pthread_attr_t *__attr ,
                                                                   size_t __stacksize )  __attribute__((__nonnull__(1))) ;
#line 369
extern  __attribute__((__nothrow__)) int pthread_attr_getstack(pthread_attr_t const   * __restrict  __attr ,
                                                               void ** __restrict  __stackaddr ,
                                                               size_t * __restrict  __stacksize )  __attribute__((__nonnull__(1,2,3))) ;
#line 377
extern  __attribute__((__nothrow__)) int pthread_attr_setstack(pthread_attr_t *__attr ,
                                                               void *__stackaddr ,
                                                               size_t __stacksize )  __attribute__((__nonnull__(1))) ;
#line 384
extern  __attribute__((__nothrow__)) int pthread_attr_setaffinity_np(pthread_attr_t *__attr ,
                                                                     size_t __cpusetsize ,
                                                                     cpu_set_t const   *__cpuset )  __attribute__((__nonnull__(1,3))) ;
#line 391
extern  __attribute__((__nothrow__)) int pthread_attr_getaffinity_np(pthread_attr_t const   *__attr ,
                                                                     size_t __cpusetsize ,
                                                                     cpu_set_t *__cpuset )  __attribute__((__nonnull__(1,3))) ;
#line 400
extern  __attribute__((__nothrow__)) int pthread_getattr_np(pthread_t __th ,
                                                            pthread_attr_t *__attr )  __attribute__((__nonnull__(2))) ;
#line 409
extern  __attribute__((__nothrow__)) int pthread_setschedparam(pthread_t __target_thread ,
                                                               int __policy ,
                                                               struct sched_param  const  *__param )  __attribute__((__nonnull__(3))) ;
#line 414
extern  __attribute__((__nothrow__)) int pthread_getschedparam(pthread_t __target_thread ,
                                                               int * __restrict  __policy ,
                                                               struct sched_param * __restrict  __param )  __attribute__((__nonnull__(2,3))) ;
#line 420
extern  __attribute__((__nothrow__)) int pthread_setschedprio(pthread_t __target_thread ,
                                                              int __prio ) ;
#line 426
extern  __attribute__((__nothrow__)) int pthread_getconcurrency(void) ;
#line 429
extern  __attribute__((__nothrow__)) int pthread_setconcurrency(int __level ) ;
#line 437
extern  __attribute__((__nothrow__)) int pthread_yield(void) ;
#line 442
extern  __attribute__((__nothrow__)) int pthread_setaffinity_np(pthread_t __th ,
                                                                size_t __cpusetsize ,
                                                                cpu_set_t const   *__cpuset )  __attribute__((__nonnull__(3))) ;
#line 447
extern  __attribute__((__nothrow__)) int pthread_getaffinity_np(pthread_t __th ,
                                                                size_t __cpusetsize ,
                                                                cpu_set_t *__cpuset )  __attribute__((__nonnull__(3))) ;
#line 462
extern int pthread_once(pthread_once_t *__once_control ,
                        void (*__init_routine)(void) )  __attribute__((__nonnull__(1,2))) ;
#line 474
extern int pthread_setcancelstate(int __state , int *__oldstate ) ;
#line 478
extern int pthread_setcanceltype(int __type , int *__oldtype ) ;
#line 481
extern int pthread_cancel(pthread_t __th ) ;
#line 486
extern void pthread_testcancel(void) ;
#line 648
extern void __pthread_register_cancel(__pthread_unwind_buf_t *__buf ) ;
#line 659
extern void __pthread_unregister_cancel(__pthread_unwind_buf_t *__buf ) ;
#line 682
extern void __pthread_register_cancel_defer(__pthread_unwind_buf_t *__buf ) ;
#line 694
extern void __pthread_unregister_cancel_restore(__pthread_unwind_buf_t *__buf ) ;
#line 699
extern  __attribute__((__noreturn__)) void __pthread_unwind_next(__pthread_unwind_buf_t *__buf )  __attribute__((__weak__)) ;
#line 709
extern  __attribute__((__nothrow__)) int __sigsetjmp(struct __jmp_buf_tag *__env ,
                                                     int __savemask ) ;
#line 715
extern  __attribute__((__nothrow__)) int pthread_mutex_init(pthread_mutex_t *__mutex ,
                                                            pthread_mutexattr_t const   *__mutexattr )  __attribute__((__nonnull__(1))) ;
#line 720
extern  __attribute__((__nothrow__)) int pthread_mutex_destroy(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
#line 724
extern  __attribute__((__nothrow__)) int pthread_mutex_trylock(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
#line 728
extern  __attribute__((__nothrow__)) int pthread_mutex_lock(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
#line 733
extern  __attribute__((__nothrow__)) int pthread_mutex_timedlock(pthread_mutex_t * __restrict  __mutex ,
                                                                 struct timespec  const  * __restrict  __abstime )  __attribute__((__nonnull__(1,2))) ;
#line 739
extern  __attribute__((__nothrow__)) int pthread_mutex_unlock(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
#line 745
extern  __attribute__((__nothrow__)) int pthread_mutex_getprioceiling(pthread_mutex_t const   * __restrict  __mutex ,
                                                                      int * __restrict  __prioceiling )  __attribute__((__nonnull__(1,2))) ;
#line 752
extern  __attribute__((__nothrow__)) int pthread_mutex_setprioceiling(pthread_mutex_t * __restrict  __mutex ,
                                                                      int __prioceiling ,
                                                                      int * __restrict  __old_ceiling )  __attribute__((__nonnull__(1,3))) ;
#line 761
extern  __attribute__((__nothrow__)) int pthread_mutex_consistent_np(pthread_mutex_t *__mutex )  __attribute__((__nonnull__(1))) ;
#line 770
extern  __attribute__((__nothrow__)) int pthread_mutexattr_init(pthread_mutexattr_t *__attr )  __attribute__((__nonnull__(1))) ;
#line 774
extern  __attribute__((__nothrow__)) int pthread_mutexattr_destroy(pthread_mutexattr_t *__attr )  __attribute__((__nonnull__(1))) ;
#line 778
extern  __attribute__((__nothrow__)) int pthread_mutexattr_getpshared(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                      int * __restrict  __pshared )  __attribute__((__nonnull__(1,2))) ;
#line 784
extern  __attribute__((__nothrow__)) int pthread_mutexattr_setpshared(pthread_mutexattr_t *__attr ,
                                                                      int __pshared )  __attribute__((__nonnull__(1))) ;
#line 790
extern  __attribute__((__nothrow__)) int pthread_mutexattr_gettype(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                   int * __restrict  __kind )  __attribute__((__nonnull__(1,2))) ;
#line 797
extern  __attribute__((__nothrow__)) int pthread_mutexattr_settype(pthread_mutexattr_t *__attr ,
                                                                   int __kind )  __attribute__((__nonnull__(1))) ;
#line 801
extern  __attribute__((__nothrow__)) int pthread_mutexattr_getprotocol(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                       int * __restrict  __protocol )  __attribute__((__nonnull__(1,2))) ;
#line 808
extern  __attribute__((__nothrow__)) int pthread_mutexattr_setprotocol(pthread_mutexattr_t *__attr ,
                                                                       int __protocol )  __attribute__((__nonnull__(1))) ;
#line 813
extern  __attribute__((__nothrow__)) int pthread_mutexattr_getprioceiling(pthread_mutexattr_t const   * __restrict  __attr ,
                                                                          int * __restrict  __prioceiling )  __attribute__((__nonnull__(1,2))) ;
#line 819
extern  __attribute__((__nothrow__)) int pthread_mutexattr_setprioceiling(pthread_mutexattr_t *__attr ,
                                                                          int __prioceiling )  __attribute__((__nonnull__(1))) ;
#line 826
extern  __attribute__((__nothrow__)) int pthread_mutexattr_getrobust_np(pthread_mutexattr_t const   *__attr ,
                                                                        int *__robustness )  __attribute__((__nonnull__(1,2))) ;
#line 831
extern  __attribute__((__nothrow__)) int pthread_mutexattr_setrobust_np(pthread_mutexattr_t *__attr ,
                                                                        int __robustness )  __attribute__((__nonnull__(1))) ;
#line 842
extern  __attribute__((__nothrow__)) int pthread_rwlock_init(pthread_rwlock_t * __restrict  __rwlock ,
                                                             pthread_rwlockattr_t const   * __restrict  __attr )  __attribute__((__nonnull__(1))) ;
#line 847
extern  __attribute__((__nothrow__)) int pthread_rwlock_destroy(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
#line 851
extern  __attribute__((__nothrow__)) int pthread_rwlock_rdlock(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
#line 855
extern  __attribute__((__nothrow__)) int pthread_rwlock_tryrdlock(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
#line 860
extern  __attribute__((__nothrow__)) int pthread_rwlock_timedrdlock(pthread_rwlock_t * __restrict  __rwlock ,
                                                                    struct timespec  const  * __restrict  __abstime )  __attribute__((__nonnull__(1,2))) ;
#line 866
extern  __attribute__((__nothrow__)) int pthread_rwlock_wrlock(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
#line 870
extern  __attribute__((__nothrow__)) int pthread_rwlock_trywrlock(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
#line 875
extern  __attribute__((__nothrow__)) int pthread_rwlock_timedwrlock(pthread_rwlock_t * __restrict  __rwlock ,
                                                                    struct timespec  const  * __restrict  __abstime )  __attribute__((__nonnull__(1,2))) ;
#line 881
extern  __attribute__((__nothrow__)) int pthread_rwlock_unlock(pthread_rwlock_t *__rwlock )  __attribute__((__nonnull__(1))) ;
#line 888
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_init(pthread_rwlockattr_t *__attr )  __attribute__((__nonnull__(1))) ;
#line 892
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_destroy(pthread_rwlockattr_t *__attr )  __attribute__((__nonnull__(1))) ;
#line 896
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_getpshared(pthread_rwlockattr_t const   * __restrict  __attr ,
                                                                       int * __restrict  __pshared )  __attribute__((__nonnull__(1,2))) ;
#line 902
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_setpshared(pthread_rwlockattr_t *__attr ,
                                                                       int __pshared )  __attribute__((__nonnull__(1))) ;
#line 907
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_getkind_np(pthread_rwlockattr_t const   * __restrict  __attr ,
                                                                       int * __restrict  __pref )  __attribute__((__nonnull__(1,2))) ;
#line 913
extern  __attribute__((__nothrow__)) int pthread_rwlockattr_setkind_np(pthread_rwlockattr_t *__attr ,
                                                                       int __pref )  __attribute__((__nonnull__(1))) ;
#line 922
extern  __attribute__((__nothrow__)) int pthread_cond_init(pthread_cond_t * __restrict  __cond ,
                                                           pthread_condattr_t const   * __restrict  __cond_attr )  __attribute__((__nonnull__(1))) ;
#line 927
extern  __attribute__((__nothrow__)) int pthread_cond_destroy(pthread_cond_t *__cond )  __attribute__((__nonnull__(1))) ;
#line 931
extern  __attribute__((__nothrow__)) int pthread_cond_signal(pthread_cond_t *__cond )  __attribute__((__nonnull__(1))) ;
#line 935
extern  __attribute__((__nothrow__)) int pthread_cond_broadcast(pthread_cond_t *__cond )  __attribute__((__nonnull__(1))) ;
#line 943
extern int pthread_cond_wait(pthread_cond_t * __restrict  __cond ,
                             pthread_mutex_t * __restrict  __mutex )  __attribute__((__nonnull__(1,2))) ;
#line 954
extern int pthread_cond_timedwait(pthread_cond_t * __restrict  __cond ,
                                  pthread_mutex_t * __restrict  __mutex ,
                                  struct timespec  const  * __restrict  __abstime )  __attribute__((__nonnull__(1,2,3))) ;
#line 962
extern  __attribute__((__nothrow__)) int pthread_condattr_init(pthread_condattr_t *__attr )  __attribute__((__nonnull__(1))) ;
#line 966
extern  __attribute__((__nothrow__)) int pthread_condattr_destroy(pthread_condattr_t *__attr )  __attribute__((__nonnull__(1))) ;
#line 970
extern  __attribute__((__nothrow__)) int pthread_condattr_getpshared(pthread_condattr_t const   * __restrict  __attr ,
                                                                     int * __restrict  __pshared )  __attribute__((__nonnull__(1,2))) ;
#line 976
extern  __attribute__((__nothrow__)) int pthread_condattr_setpshared(pthread_condattr_t *__attr ,
                                                                     int __pshared )  __attribute__((__nonnull__(1))) ;
#line 981
extern  __attribute__((__nothrow__)) int pthread_condattr_getclock(pthread_condattr_t const   * __restrict  __attr ,
                                                                   __clockid_t * __restrict  __clock_id )  __attribute__((__nonnull__(1,2))) ;
#line 987
extern  __attribute__((__nothrow__)) int pthread_condattr_setclock(pthread_condattr_t *__attr ,
                                                                   __clockid_t __clock_id )  __attribute__((__nonnull__(1))) ;
#line 998
extern  __attribute__((__nothrow__)) int pthread_spin_init(pthread_spinlock_t *__lock ,
                                                           int __pshared )  __attribute__((__nonnull__(1))) ;
#line 1002
extern  __attribute__((__nothrow__)) int pthread_spin_destroy(pthread_spinlock_t *__lock )  __attribute__((__nonnull__(1))) ;
#line 1006
extern  __attribute__((__nothrow__)) int pthread_spin_lock(pthread_spinlock_t *__lock )  __attribute__((__nonnull__(1))) ;
#line 1010
extern  __attribute__((__nothrow__)) int pthread_spin_trylock(pthread_spinlock_t *__lock )  __attribute__((__nonnull__(1))) ;
#line 1014
extern  __attribute__((__nothrow__)) int pthread_spin_unlock(pthread_spinlock_t *__lock )  __attribute__((__nonnull__(1))) ;
#line 1022
extern  __attribute__((__nothrow__)) int pthread_barrier_init(pthread_barrier_t * __restrict  __barrier ,
                                                              pthread_barrierattr_t const   * __restrict  __attr ,
                                                              unsigned int __count )  __attribute__((__nonnull__(1))) ;
#line 1028
extern  __attribute__((__nothrow__)) int pthread_barrier_destroy(pthread_barrier_t *__barrier )  __attribute__((__nonnull__(1))) ;
#line 1032
extern  __attribute__((__nothrow__)) int pthread_barrier_wait(pthread_barrier_t *__barrier )  __attribute__((__nonnull__(1))) ;
#line 1037
extern  __attribute__((__nothrow__)) int pthread_barrierattr_init(pthread_barrierattr_t *__attr )  __attribute__((__nonnull__(1))) ;
#line 1041
extern  __attribute__((__nothrow__)) int pthread_barrierattr_destroy(pthread_barrierattr_t *__attr )  __attribute__((__nonnull__(1))) ;
#line 1045
extern  __attribute__((__nothrow__)) int pthread_barrierattr_getpshared(pthread_barrierattr_t const   * __restrict  __attr ,
                                                                        int * __restrict  __pshared )  __attribute__((__nonnull__(1,2))) ;
#line 1051
extern  __attribute__((__nothrow__)) int pthread_barrierattr_setpshared(pthread_barrierattr_t *__attr ,
                                                                        int __pshared )  __attribute__((__nonnull__(1))) ;
#line 1065
extern  __attribute__((__nothrow__)) int pthread_key_create(pthread_key_t *__key ,
                                                            void (*__destr_function)(void * ) )  __attribute__((__nonnull__(1))) ;
#line 1070
extern  __attribute__((__nothrow__)) int pthread_key_delete(pthread_key_t __key ) ;
#line 1073
extern  __attribute__((__nothrow__)) void *pthread_getspecific(pthread_key_t __key ) ;
#line 1076
extern  __attribute__((__nothrow__)) int pthread_setspecific(pthread_key_t __key ,
                                                             void const   *__pointer ) ;
#line 1082
extern  __attribute__((__nothrow__)) int pthread_getcpuclockid(pthread_t __thread_id ,
                                                               __clockid_t *__clock_id )  __attribute__((__nonnull__(2))) ;
#line 1099
extern  __attribute__((__nothrow__)) int pthread_atfork(void (*__prepare)(void) ,
                                                        void (*__parent)(void) ,
                                                        void (*__child)(void) ) ;
#line 1106
__inline static  __attribute__((__nothrow__)) int pthread_equal(pthread_t __thread1 ,
                                                                pthread_t __thread2 ) ;
#line 1106 "/usr/include/pthread.h"
__inline static int pthread_equal(pthread_t __thread1 , pthread_t __thread2 ) 
{ 

  {
#line 1106
  fprintf(_coverage_fout, "227\n");
#line 1106
  fflush(_coverage_fout);
#line 1109
  return (__thread1 == __thread2);
}
}
#line 54 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/omp.h"
extern void omp_set_num_threads(int  ) ;
#line 55
extern int omp_get_num_threads(void) ;
#line 56
extern int omp_get_max_threads(void) ;
#line 57
extern int omp_get_thread_num(void) ;
#line 58
extern int omp_get_num_procs(void) ;
#line 60
extern int omp_in_parallel(void) ;
#line 62
extern void omp_set_dynamic(int  ) ;
#line 63
extern int omp_get_dynamic(void) ;
#line 65
extern void omp_set_nested(int  ) ;
#line 66
extern int omp_get_nested(void) ;
#line 68
extern void omp_init_lock(omp_lock_t * ) ;
#line 69
extern void omp_destroy_lock(omp_lock_t * ) ;
#line 70
extern void omp_set_lock(omp_lock_t * ) ;
#line 71
extern void omp_unset_lock(omp_lock_t * ) ;
#line 72
extern int omp_test_lock(omp_lock_t * ) ;
#line 74
extern void omp_init_nest_lock(omp_nest_lock_t * ) ;
#line 75
extern void omp_destroy_nest_lock(omp_nest_lock_t * ) ;
#line 76
extern void omp_set_nest_lock(omp_nest_lock_t * ) ;
#line 77
extern void omp_unset_nest_lock(omp_nest_lock_t * ) ;
#line 78
extern int omp_test_nest_lock(omp_nest_lock_t * ) ;
#line 80
extern double omp_get_wtime(void) ;
#line 81
extern double omp_get_wtick(void) ;
#line 42 "/usr/include/sys/timeb.h"
extern int ftime(struct timeb *__timebuf ) ;
#line 135 "/usr/include/dirent.h"
extern DIR *opendir(char const   *__name )  __attribute__((__nonnull__(1))) ;
#line 142
extern DIR *fdopendir(int __fd ) ;
#line 150
extern int closedir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
#line 166
extern struct dirent *readdir(DIR *__dirp )  __asm__("readdir64") __attribute__((__nonnull__(1))) ;
#line 174
extern struct dirent64 *readdir64(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
#line 190
extern int readdir_r(DIR * __restrict  __dirp ,
                     struct dirent * __restrict  __entry ,
                     struct dirent ** __restrict  __result )  __asm__("readdir64_r") __attribute__((__nonnull__(1,2,3))) ;
#line 201
extern int readdir64_r(DIR * __restrict  __dirp ,
                       struct dirent64 * __restrict  __entry ,
                       struct dirent64 ** __restrict  __result )  __attribute__((__nonnull__(1,2,3))) ;
#line 209
extern  __attribute__((__nothrow__)) void rewinddir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
#line 215
extern  __attribute__((__nothrow__)) void seekdir(DIR *__dirp , long __pos )  __attribute__((__nonnull__(1))) ;
#line 218
extern  __attribute__((__nothrow__)) long telldir(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
#line 224
extern  __attribute__((__nothrow__)) int dirfd(DIR *__dirp )  __attribute__((__nonnull__(1))) ;
#line 257
extern int scandir(char const   * __restrict  __dir ,
                   struct dirent *** __restrict  __namelist ,
                   int (*__selector)(struct dirent  const  * ) ,
                   int (*__cmp)(void const   * , void const   * ) )  __asm__("scandir64") __attribute__((__nonnull__(1,2))) ;
#line 271
extern int scandir64(char const   * __restrict  __dir ,
                     struct dirent64 *** __restrict  __namelist ,
                     int (*__selector)(struct dirent64  const  * ) ,
                     int (*__cmp)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,2))) ;
#line 284
extern  __attribute__((__nothrow__)) int alphasort(void const   *__e1 ,
                                                   void const   *__e2 )  __asm__("alphasort64") __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 293
extern  __attribute__((__nothrow__)) int alphasort64(void const   *__e1 ,
                                                     void const   *__e2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 304
extern  __attribute__((__nothrow__)) int versionsort(void const   *__e1 ,
                                                     void const   *__e2 )  __asm__("versionsort64") __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 314
extern  __attribute__((__nothrow__)) int versionsort64(void const   *__e1 ,
                                                       void const   *__e2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 330
extern  __attribute__((__nothrow__)) __ssize_t getdirentries(int __fd ,
                                                             char * __restrict  __buf ,
                                                             size_t __nbytes ,
                                                             __off64_t * __restrict  __basep )  __asm__("getdirentries64") __attribute__((__nonnull__(2,4))) ;
#line 341
extern  __attribute__((__nothrow__)) __ssize_t getdirentries64(int __fd ,
                                                               char * __restrict  __buf ,
                                                               size_t __nbytes ,
                                                               __off64_t * __restrict  __basep )  __attribute__((__nonnull__(2,4))) ;
#line 55 "/usr/include/sys/resource.h"
extern  __attribute__((__nothrow__)) int getrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit *__rlimits )  __asm__("getrlimit64")  ;
#line 62
extern  __attribute__((__nothrow__)) int getrlimit64(__rlimit_resource_t __resource ,
                                                     struct rlimit64 *__rlimits ) ;
#line 74
extern  __attribute__((__nothrow__)) int setrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit  const  *__rlimits )  __asm__("setrlimit64")  ;
#line 82
extern  __attribute__((__nothrow__)) int setrlimit64(__rlimit_resource_t __resource ,
                                                     struct rlimit64  const  *__rlimits ) ;
#line 88
extern  __attribute__((__nothrow__)) int getrusage(__rusage_who_t __who ,
                                                   struct rusage *__usage ) ;
#line 94
extern  __attribute__((__nothrow__)) int getpriority(__priority_which_t __which ,
                                                     id_t __who ) ;
#line 98
extern  __attribute__((__nothrow__)) int setpriority(__priority_which_t __which ,
                                                     id_t __who , int __prio ) ;
#line 116 "/usr/include/sys/wait.h"
extern __pid_t wait(union wait *__stat_loc ) ;
#line 139
extern __pid_t waitpid(__pid_t __pid , int *__stat_loc , int __options ) ;
#line 155
extern int waitid(idtype_t __idtype , __id_t __id , siginfo_t *__infop ,
                  int __options ) ;
#line 169
extern  __attribute__((__nothrow__)) __pid_t wait3(union wait *__stat_loc ,
                                                   int __options ,
                                                   struct rusage *__usage ) ;
#line 179
extern  __attribute__((__nothrow__)) __pid_t wait4(__pid_t __pid ,
                                                   union wait *__stat_loc ,
                                                   int __options ,
                                                   struct rusage *__usage ) ;
#line 73 "/usr/include/pwd.h"
extern void setpwent(void) ;
#line 79
extern void endpwent(void) ;
#line 85
extern struct passwd *getpwent(void) ;
#line 95
extern struct passwd *fgetpwent(FILE *__stream ) ;
#line 103
extern int putpwent(struct passwd  const  * __restrict  __p ,
                    FILE * __restrict  __f ) ;
#line 111
extern struct passwd *getpwuid(__uid_t __uid ) ;
#line 117
extern struct passwd *getpwnam(char const   *__name ) ;
#line 140
extern int getpwent_r(struct passwd * __restrict  __resultbuf ,
                      char * __restrict  __buffer , size_t __buflen ,
                      struct passwd ** __restrict  __result ) ;
#line 145
extern int getpwuid_r(__uid_t __uid , struct passwd * __restrict  __resultbuf ,
                      char * __restrict  __buffer , size_t __buflen ,
                      struct passwd ** __restrict  __result ) ;
#line 150
extern int getpwnam_r(char const   * __restrict  __name ,
                      struct passwd * __restrict  __resultbuf ,
                      char * __restrict  __buffer , size_t __buflen ,
                      struct passwd ** __restrict  __result ) ;
#line 164
extern int fgetpwent_r(FILE * __restrict  __stream ,
                       struct passwd * __restrict  __resultbuf ,
                       char * __restrict  __buffer , size_t __buflen ,
                       struct passwd ** __restrict  __result ) ;
#line 181
extern int getpw(__uid_t __uid , char *__buffer ) ;
#line 73 "/usr/include/sys/time.h"
extern  __attribute__((__nothrow__)) int gettimeofday(struct timeval * __restrict  __tv ,
                                                      __timezone_ptr_t __tz )  __attribute__((__nonnull__(1))) ;
#line 79
extern  __attribute__((__nothrow__)) int settimeofday(struct timeval  const  *__tv ,
                                                      struct timezone  const  *__tz )  __attribute__((__nonnull__(1))) ;
#line 87
extern  __attribute__((__nothrow__)) int adjtime(struct timeval  const  *__delta ,
                                                 struct timeval *__olddelta ) ;
#line 127
extern  __attribute__((__nothrow__)) int getitimer(__itimer_which_t __which ,
                                                   struct itimerval *__value ) ;
#line 133
extern  __attribute__((__nothrow__)) int setitimer(__itimer_which_t __which ,
                                                   struct itimerval  const  * __restrict  __new ,
                                                   struct itimerval * __restrict  __old ) ;
#line 140
extern  __attribute__((__nothrow__)) int utimes(char const   *__file ,
                                                struct timeval  const  *__tvp )  __attribute__((__nonnull__(1))) ;
#line 145
extern  __attribute__((__nothrow__)) int lutimes(char const   *__file ,
                                                 struct timeval  const  *__tvp )  __attribute__((__nonnull__(1))) ;
#line 149
extern  __attribute__((__nothrow__)) int futimes(int __fd ,
                                                 struct timeval  const  *__tvp ) ;
#line 156
extern  __attribute__((__nothrow__)) int futimesat(int __fd ,
                                                   char const   *__file ,
                                                   struct timeval  const  *__tvp ) ;
#line 49 "/usr/include/sys/times.h"
extern  __attribute__((__nothrow__)) clock_t times(struct tms *__buffer ) ;
#line 122 "./magick/geometry.h"
extern char *GetPageGeometry(char const   * ) ;
#line 125
extern MagickBooleanType IsGeometry(char const   * ) ;
#line 125
extern MagickBooleanType IsSceneGeometry(char const   * , MagickBooleanType  ) ;
#line 129
extern MagickStatusType GetGeometry(char const   * , long * , long * ,
                                    unsigned long * , unsigned long * ) ;
#line 129
extern MagickStatusType ParseAbsoluteGeometry(char const   * , RectangleInfo * ) ;
#line 129
extern MagickStatusType ParseAffineGeometry(char const   * , AffineMatrix * ,
                                            ExceptionInfo * ) ;
#line 129
extern MagickStatusType ParseGeometry(char const   * , GeometryInfo * ) ;
#line 129
extern MagickStatusType ParseGravityGeometry(Image const   * , char const   * ,
                                             RectangleInfo * , ExceptionInfo * ) ;
#line 129
extern MagickStatusType ParseMetaGeometry(char const   * , long * , long * ,
                                          unsigned long * , unsigned long * ) ;
#line 129
extern MagickStatusType ParsePageGeometry(Image const   * , char const   * ,
                                          RectangleInfo * , ExceptionInfo * ) ;
#line 129
extern MagickStatusType ParseRegionGeometry(Image const   * , char const   * ,
                                            RectangleInfo * , ExceptionInfo * ) ;
#line 141
extern void GravityAdjustGeometry(unsigned long  , unsigned long  ,
                                  GravityType  , RectangleInfo * ) ;
#line 141
extern void SetGeometry(Image const   * , RectangleInfo * ) ;
#line 141
extern void SetGeometryInfo(GeometryInfo * ) ;
#line 52 "./magick/colorspace.h"
extern MagickBooleanType RGBTransformImage(Image * , ColorspaceType  ) ;
#line 52
extern MagickBooleanType SetImageColorspace(Image * , ColorspaceType  ) ;
#line 52
extern MagickBooleanType TransformImageColorspace(Image * , ColorspaceType  ) ;
#line 52
extern MagickBooleanType TransformRGBImage(Image * , ColorspaceType  ) ;
#line 37 "./magick/constitute.h"
extern Image *ConstituteImage(unsigned long  , unsigned long  , char const   * ,
                              StorageType  , void const   * , ExceptionInfo * ) ;
#line 37
extern Image *PingImage(ImageInfo const   * , ExceptionInfo * ) ;
#line 37
extern Image *PingImages(ImageInfo const   * , ExceptionInfo * ) ;
#line 37
extern Image *ReadImage(ImageInfo const   * , ExceptionInfo * ) ;
#line 37
extern Image *ReadImages(ImageInfo const   * , ExceptionInfo * ) ;
#line 37
extern Image *ReadInlineImage(ImageInfo const   * , char const   * ,
                              ExceptionInfo * ) ;
#line 46
extern MagickBooleanType WriteImage(ImageInfo const   * , Image * ) ;
#line 46
extern MagickBooleanType WriteImages(ImageInfo const   * , Image * ,
                                     char const   * , ExceptionInfo * ) ;
#line 50
extern void DestroyConstitute(void) ;
#line 82 "./magick/pixel.h"
extern MagickBooleanType ExportImagePixels(Image const   * , long  , long  ,
                                           unsigned long  , unsigned long  ,
                                           char const   * , StorageType  ,
                                           void * , ExceptionInfo * ) ;
#line 82
extern MagickBooleanType ImportImagePixels(Image * , long  , long  ,
                                           unsigned long  , unsigned long  ,
                                           char const   * , StorageType  ,
                                           void const   * ) ;
#line 88
extern void GetMagickPixelPacket(Image const   * , MagickPixelPacket * ) ;
#line 28 "./magick/semaphore.h"
extern MagickBooleanType LockSemaphoreInfo(SemaphoreInfo * ) ;
#line 28
extern MagickBooleanType UnlockSemaphoreInfo(SemaphoreInfo * ) ;
#line 32
extern SemaphoreInfo *AllocateSemaphoreInfo(void) ;
#line 35
extern void AcquireSemaphoreInfo(SemaphoreInfo ** ) ;
#line 35
extern void DestroySemaphore(void) ;
#line 35
extern void DestroySemaphoreInfo(SemaphoreInfo ** ) ;
#line 35
extern void InitializeSemaphore(void) ;
#line 35
extern void RelinquishSemaphoreInfo(SemaphoreInfo * ) ;
#line 133 "./magick/exception.h"
extern char *GetExceptionMessage(int  ) ;
#line 136
extern char const   *GetLocaleExceptionMessage(ExceptionType  , char const   * ) ;
#line 139
extern ErrorHandler SetErrorHandler(void (*)(ExceptionType  , char const   * ,
                                             char const   * ) ) ;
#line 142
extern ExceptionInfo *AcquireExceptionInfo(void) ;
#line 142
extern ExceptionInfo *DestroyExceptionInfo(ExceptionInfo * ) ;
#line 146
extern FatalErrorHandler SetFatalErrorHandler(void (*)(ExceptionType  ,
                                                       char const   * ,
                                                       char const   * ) ) ;
#line 149
extern MagickBooleanType ThrowException(ExceptionInfo * , ExceptionType  ,
                                        char const   * , char const   * ) ;
#line 149
extern MagickBooleanType ( /* format attribute */  ThrowMagickException)(ExceptionInfo * ,
                                                                         char const   * ,
                                                                         char const   * ,
                                                                         unsigned long  ,
                                                                         ExceptionType  ,
                                                                         char const   * ,
                                                                         char const   * 
                                                                         , ...) ;
#line 149
extern MagickBooleanType ( /* format attribute */  ThrowMagickExceptionList)(ExceptionInfo * ,
                                                                             char const   * ,
                                                                             char const   * ,
                                                                             unsigned long  ,
                                                                             ExceptionType  ,
                                                                             char const   * ,
                                                                             char const   * ,
                                                                             va_list  ) ;
#line 159
extern void CatchException(ExceptionInfo * ) ;
#line 159
extern void ClearMagickException(ExceptionInfo * ) ;
#line 159
extern void GetExceptionInfo(ExceptionInfo * ) ;
#line 159
extern void InheritException(ExceptionInfo * , ExceptionInfo const   * ) ;
#line 159
extern void MagickError(ExceptionType  , char const   * , char const   * ) ;
#line 159
extern void MagickFatalError(ExceptionType  , char const   * , char const   * ) ;
#line 159
extern void MagickWarning(ExceptionType  , char const   * , char const   * ) ;
#line 168
extern WarningHandler SetWarningHandler(void (*)(ExceptionType  ,
                                                 char const   * ,
                                                 char const   * ) ) ;
#line 81 "./magick/color.h"
extern char **GetColorList(char const   * , unsigned long * , ExceptionInfo * ) ;
#line 84
extern ColorInfo const   *GetColorInfo(char const   * , ExceptionInfo * ) ;
#line 84
extern ColorInfo const   **GetColorInfoList(char const   * , unsigned long * ,
                                            ExceptionInfo * ) ;
#line 88
extern ColorPacket *GetImageHistogram(Image const   * , unsigned long * ,
                                      ExceptionInfo * ) ;
#line 91
extern Image *UniqueImageColors(Image const   * , ExceptionInfo * ) ;
#line 94
extern MagickBooleanType IsColorSimilar(Image const   * ,
                                        PixelPacket const   * ,
                                        PixelPacket const   * ) ;
#line 94
extern MagickBooleanType IsGrayImage(Image * , ExceptionInfo * ) ;
#line 94
extern MagickBooleanType IsHistogramImage(Image const   * , ExceptionInfo * ) ;
#line 94
extern MagickBooleanType IsImageSimilar(Image const   * , Image const   * ,
                                        long *x , long *y , ExceptionInfo * ) ;
#line 94
extern MagickBooleanType IsMagickColorSimilar(MagickPixelPacket const   * ,
                                              MagickPixelPacket const   * ) ;
#line 94
extern MagickBooleanType IsMonochromeImage(Image * , ExceptionInfo * ) ;
#line 94
extern MagickBooleanType IsOpacitySimilar(Image const   * ,
                                          PixelPacket const   * ,
                                          PixelPacket const   * ) ;
#line 94
extern MagickBooleanType IsOpaqueImage(Image const   * , ExceptionInfo * ) ;
#line 94
extern MagickBooleanType IsPaletteImage(Image const   * , ExceptionInfo * ) ;
#line 94
extern MagickBooleanType ListColorInfo(FILE * , ExceptionInfo * ) ;
#line 94
extern MagickBooleanType QueryColorDatabase(char const   * , PixelPacket * ,
                                            ExceptionInfo * ) ;
#line 94
extern MagickBooleanType QueryColorname(Image const   * ,
                                        PixelPacket const   * ,
                                        ComplianceType  , char * ,
                                        ExceptionInfo * ) ;
#line 94
extern MagickBooleanType QueryMagickColor(char const   * , MagickPixelPacket * ,
                                          ExceptionInfo * ) ;
#line 94
extern MagickBooleanType QueryMagickColorname(Image const   * ,
                                              MagickPixelPacket const   * ,
                                              ComplianceType  , char * ,
                                              ExceptionInfo * ) ;
#line 112
extern unsigned long GetNumberColors(Image const   * , FILE * , ExceptionInfo * ) ;
#line 115
extern void ConcatenateColorComponent(MagickPixelPacket const   * ,
                                      ChannelType  , ComplianceType  , char * ) ;
#line 115
extern void DestroyColorList(void) ;
#line 115
extern void GetColorTuple(MagickPixelPacket const   * , MagickBooleanType  ,
                          char * ) ;
#line 28 "./magick/stream.h"
extern Image *ReadStream(ImageInfo const   * ,
                         size_t (*)(Image const   * , void const   * , size_t  ) ,
                         ExceptionInfo * ) ;
#line 31
extern MagickBooleanType WriteStream(ImageInfo const   * , Image * ,
                                     size_t (*)(Image const   * ,
                                                void const   * , size_t  ) ) ;
#line 37 "./magick/blob.h"
extern FILE *GetBlobFileHandle(Image const   * ) ;
#line 40
extern Image *BlobToImage(ImageInfo const   * , void const   * , size_t  ,
                          ExceptionInfo * ) ;
#line 40
extern Image *PingBlob(ImageInfo const   * , void const   * , size_t  ,
                       ExceptionInfo * ) ;
#line 44
extern MagickBooleanType BlobToFile(char * , void const   * , size_t  ,
                                    ExceptionInfo * ) ;
#line 44
extern MagickBooleanType FileToImage(Image * , char const   * ) ;
#line 44
extern MagickBooleanType GetBlobError(Image const   * ) ;
#line 44
extern MagickBooleanType ImageToFile(Image * , char * , ExceptionInfo * ) ;
#line 44
extern MagickBooleanType InjectImageBlob(ImageInfo const   * , Image * ,
                                         Image * , char const   * ,
                                         ExceptionInfo * ) ;
#line 44
extern MagickBooleanType IsBlobExempt(Image const   * ) ;
#line 44
extern MagickBooleanType IsBlobSeekable(Image const   * ) ;
#line 44
extern MagickBooleanType IsBlobTemporary(Image const   * ) ;
#line 55
extern MagickSizeType GetBlobSize(Image const   * ) ;
#line 58
extern StreamHandler GetBlobStreamHandler(Image const   * ) ;
#line 61
extern unsigned char *FileToBlob(char const   * , size_t  , size_t * ,
                                 ExceptionInfo * ) ;
#line 61
extern unsigned char *GetBlobStreamData(Image const   * ) ;
#line 61
extern unsigned char *ImageToBlob(ImageInfo const   * , Image * , size_t * ,
                                  ExceptionInfo * ) ;
#line 61
extern unsigned char *ImagesToBlob(ImageInfo const   * , Image * , size_t * ,
                                   ExceptionInfo * ) ;
#line 67
extern void DestroyBlob(Image * ) ;
#line 67
extern void DuplicateBlob(Image * , Image const   * ) ;
#line 67
extern void SetBlobExempt(Image * , MagickBooleanType  ) ;
#line 52 "./magick/cache-view.h"
extern ClassType GetCacheViewStorageClass(ViewInfo const   * ) ;
#line 55
extern ColorspaceType GetCacheViewColorspace(ViewInfo const   * ) ;
#line 58
extern IndexPacket const   *GetCacheViewVirtualIndexQueue(ViewInfo const   * ) ;
#line 61
extern PixelPacket const   *GetCacheViewVirtualPixels(ViewInfo const   * ,
                                                      long  , long  ,
                                                      unsigned long  ,
                                                      unsigned long  ,
                                                      ExceptionInfo * ) ;
#line 61
extern PixelPacket const   *GetCacheViewVirtualPixelQueue(ViewInfo const   * ) ;
#line 66
extern ExceptionInfo *GetCacheViewException(ViewInfo const   * ) ;
#line 69
extern IndexPacket *GetCacheViewAuthenticIndexQueue(ViewInfo * ) ;
#line 72
extern MagickBooleanType GetOneCacheViewVirtualPixel(ViewInfo const   * ,
                                                     long  , long  ,
                                                     PixelPacket * ,
                                                     ExceptionInfo * ) ;
#line 72
extern MagickBooleanType GetOneCacheViewVirtualMethodPixel(ViewInfo const   * ,
                                                           VirtualPixelMethod  ,
                                                           long  , long  ,
                                                           PixelPacket * ,
                                                           ExceptionInfo * ) ;
#line 72
extern MagickBooleanType GetOneCacheViewAuthenticPixel(ViewInfo const   * ,
                                                       long  , long  ,
                                                       PixelPacket * ,
                                                       ExceptionInfo * ) ;
#line 72
extern MagickBooleanType SetCacheViewStorageClass(ViewInfo * , ClassType  ) ;
#line 72
extern MagickBooleanType SetCacheViewVirtualPixelMethod(ViewInfo * ,
                                                        VirtualPixelMethod  ) ;
#line 72
extern MagickBooleanType SyncCacheViewAuthenticPixels(ViewInfo * ,
                                                      ExceptionInfo * ) ;
#line 84
extern MagickSizeType GetCacheViewExtent(ViewInfo const   * ) ;
#line 87
extern PixelPacket *GetCacheViewAuthenticPixelQueue(ViewInfo * ) ;
#line 87
extern PixelPacket *GetCacheViewAuthenticPixels(ViewInfo * , long  , long  ,
                                                unsigned long  ,
                                                unsigned long  ,
                                                ExceptionInfo * ) ;
#line 87
extern PixelPacket *QueueCacheViewAuthenticPixels(ViewInfo * , long  , long  ,
                                                  unsigned long  ,
                                                  unsigned long  ,
                                                  ExceptionInfo * ) ;
#line 94
extern ViewInfo *AcquireCacheView(Image const   * ) ;
#line 94
extern ViewInfo *CloneCacheView(ViewInfo const   * ) ;
#line 94
extern ViewInfo *DestroyCacheView(ViewInfo * ) ;
#line 85 "./magick/composite.h"
extern MagickBooleanType CompositeImage(Image * , CompositeOperator  ,
                                        Image const   * , long  , long  ) ;
#line 85
extern MagickBooleanType CompositeImageChannel(Image * , ChannelType  ,
                                               CompositeOperator  ,
                                               Image const   * , long  , long  ) ;
#line 46 "./magick/compress.h"
extern MagickBooleanType HuffmanDecodeImage(Image * ) ;
#line 46
extern MagickBooleanType HuffmanEncodeImage(ImageInfo const   * , Image * ,
                                            Image * ) ;
#line 46
extern MagickBooleanType Huffman2DEncodeImage(ImageInfo const   * , Image * ,
                                              Image * ) ;
#line 46
extern MagickBooleanType LZWEncodeImage(Image * , size_t  , unsigned char * ) ;
#line 46
extern MagickBooleanType PackbitsEncodeImage(Image * , size_t  ,
                                             unsigned char * ) ;
#line 46
extern MagickBooleanType ZLIBEncodeImage(Image * , size_t  , unsigned char * ) ;
#line 54
extern void Ascii85Encode(Image * , unsigned char  ) ;
#line 54
extern void Ascii85Flush(Image * ) ;
#line 54
extern void Ascii85Initialize(Image * ) ;
#line 59 "./magick/effect.h"
extern Image *AdaptiveBlurImage(Image const   * , double  , double  ,
                                ExceptionInfo * ) ;
#line 59
extern Image *AdaptiveBlurImageChannel(Image const   * , ChannelType  ,
                                       double  , double  , ExceptionInfo * ) ;
#line 59
extern Image *AdaptiveSharpenImage(Image const   * , double  , double  ,
                                   ExceptionInfo * ) ;
#line 59
extern Image *AdaptiveSharpenImageChannel(Image const   * , ChannelType  ,
                                          double  , double  , ExceptionInfo * ) ;
#line 59
extern Image *BlurImage(Image const   * , double  , double  , ExceptionInfo * ) ;
#line 59
extern Image *BlurImageChannel(Image const   * , ChannelType  , double  ,
                               double  , ExceptionInfo * ) ;
#line 59
extern Image *DespeckleImage(Image const   * , ExceptionInfo * ) ;
#line 59
extern Image *EdgeImage(Image const   * , double  , ExceptionInfo * ) ;
#line 59
extern Image *EmbossImage(Image const   * , double  , double  , ExceptionInfo * ) ;
#line 59
extern Image *GaussianBlurImage(Image const   * , double  , double  ,
                                ExceptionInfo * ) ;
#line 59
extern Image *GaussianBlurImageChannel(Image const   * , ChannelType  ,
                                       double  , double  , ExceptionInfo * ) ;
#line 59
extern Image *MedianFilterImage(Image const   * , double  , ExceptionInfo * ) ;
#line 59
extern Image *MotionBlurImage(Image const   * , double  , double  , double  ,
                              ExceptionInfo * ) ;
#line 59
extern Image *MotionBlurImageChannel(Image const   * , ChannelType  , double  ,
                                     double  , double  , ExceptionInfo * ) ;
#line 59
extern Image *PreviewImage(Image const   * , PreviewType  , ExceptionInfo * ) ;
#line 59
extern Image *RadialBlurImage(Image const   * , double  , ExceptionInfo * ) ;
#line 59
extern Image *RadialBlurImageChannel(Image const   * , ChannelType  , double  ,
                                     ExceptionInfo * ) ;
#line 59
extern Image *ReduceNoiseImage(Image const   * , double  , ExceptionInfo * ) ;
#line 59
extern Image *SelectiveBlurImage(Image const   * , double  , double  , double  ,
                                 ExceptionInfo * ) ;
#line 59
extern Image *SelectiveBlurImageChannel(Image const   * , ChannelType  ,
                                        double  , double  , double  ,
                                        ExceptionInfo * ) ;
#line 59
extern Image *ShadeImage(Image const   * , MagickBooleanType  , double  ,
                         double  , ExceptionInfo * ) ;
#line 59
extern Image *SharpenImage(Image const   * , double  , double  ,
                           ExceptionInfo * ) ;
#line 59
extern Image *SharpenImageChannel(Image const   * , ChannelType  , double  ,
                                  double  , ExceptionInfo * ) ;
#line 59
extern Image *SpreadImage(Image const   * , double  , ExceptionInfo * ) ;
#line 59
extern Image *UnsharpMaskImage(Image const   * , double  , double  , double  ,
                               double  , ExceptionInfo * ) ;
#line 59
extern Image *UnsharpMaskImageChannel(Image const   * , ChannelType  , double  ,
                                      double  , double  , double  ,
                                      ExceptionInfo * ) ;
#line 55 "./magick/layer.h"
extern Image *CoalesceImages(Image const   * , ExceptionInfo * ) ;
#line 55
extern Image *DisposeImages(Image const   * , ExceptionInfo * ) ;
#line 55
extern Image *CompareImageLayers(Image const   * , ImageLayerMethod  ,
                                 ExceptionInfo * ) ;
#line 55
extern Image *DeconstructImages(Image const   * , ExceptionInfo * ) ;
#line 55
extern Image *MergeImageLayers(Image * , ImageLayerMethod  , ExceptionInfo * ) ;
#line 55
extern Image *OptimizeImageLayers(Image const   * , ExceptionInfo * ) ;
#line 55
extern Image *OptimizePlusImageLayers(Image const   * , ExceptionInfo * ) ;
#line 64
extern void CompositeLayers(Image * , CompositeOperator  , Image * , long  ,
                            long  , ExceptionInfo * ) ;
#line 64
extern void OptimizeImageTransparency(Image const   * , ExceptionInfo * ) ;
#line 64
extern void RemoveDuplicateLayers(Image ** , ExceptionInfo * ) ;
#line 64
extern void RemoveZeroDelayLayers(Image ** , ExceptionInfo * ) ;
#line 29 "./magick/monitor.h"
extern MagickProgressMonitor SetImageProgressMonitor(Image * ,
                                                     MagickBooleanType (*)(char const   * ,
                                                                           MagickOffsetType  ,
                                                                           MagickSizeType  ,
                                                                           void * ) ,
                                                     void * ) ;
#line 29
extern MagickProgressMonitor SetImageInfoProgressMonitor(ImageInfo * ,
                                                         MagickBooleanType (*)(char const   * ,
                                                                               MagickOffsetType  ,
                                                                               MagickSizeType  ,
                                                                               void * ) ,
                                                         void * ) ;
#line 33 "./magick/monitor.h"
__inline static MagickBooleanType QuantumTick(MagickOffsetType offset ,
                                              MagickSizeType span ) 
{ 

  {
#line 33
  fprintf(_coverage_fout, "231\n");
#line 33
  fflush(_coverage_fout);
#line 36
  if (span <= 100ULL) {
#line 36
    fprintf(_coverage_fout, "228\n");
#line 36
    fflush(_coverage_fout);
#line 37
    return (1);
  }
#line 33
  fprintf(_coverage_fout, "232\n");
#line 33
  fflush(_coverage_fout);
#line 38
  if (offset == (long long )(span - 1ULL)) {
#line 38
    fprintf(_coverage_fout, "229\n");
#line 38
    fflush(_coverage_fout);
#line 39
    return (1);
  }
#line 33
  fprintf(_coverage_fout, "233\n");
#line 33
  fflush(_coverage_fout);
#line 40
  if ((unsigned long long )offset % (span / 100ULL) == 0ULL) {
#line 40
    fprintf(_coverage_fout, "230\n");
#line 40
    fflush(_coverage_fout);
#line 41
    return (1);
  }
#line 33
  fprintf(_coverage_fout, "234\n");
#line 33
  fflush(_coverage_fout);
#line 42
  return (0);
}
}
#line 44 "./magick/string_.h"
extern char *AcquireString(char const   * ) ;
#line 44
extern char *CloneString(char ** , char const   * ) ;
#line 44
extern char *ConstantString(char const   * ) ;
#line 44
extern char *DestroyString(char * ) ;
#line 44
extern char **DestroyStringList(char ** ) ;
#line 44
extern char *EscapeString(char const   * , char  ) ;
#line 44
extern char *FileToString(char const   * , size_t  , ExceptionInfo * ) ;
#line 44
extern char *GetEnvironmentValue(char const   * ) ;
#line 44
extern char *StringInfoToHexString(StringInfo const   * ) ;
#line 44
extern char *StringInfoToString(StringInfo const   * ) ;
#line 44
extern char **StringToArgv(char const   * , int * ) ;
#line 44
extern char *StringToken(char const   * , char ** ) ;
#line 44
extern char **StringToList(char const   * ) ;
#line 59
extern char const   *GetStringInfoPath(StringInfo const   * ) ;
#line 62
extern double StringToDouble(char const   * , double  ) ;
#line 65
extern long FormatMagickSize(MagickSizeType  , char * ) ;
#line 65
extern long ( /* format attribute */  FormatMagickString)(char * , size_t  ,
                                                          char const   *  , ...) ;
#line 65
extern long ( /* format attribute */  FormatMagickStringList)(char * , size_t  ,
                                                              char const   * ,
                                                              va_list  ) ;
#line 65
extern long FormatMagickTime(time_t  , size_t  , char * ) ;
#line 65
extern long LocaleCompare(char const   * , char const   * ) ;
#line 65
extern long LocaleNCompare(char const   * , char const   * , size_t  ) ;
#line 75
extern MagickBooleanType ConcatenateString(char ** , char const   * ) ;
#line 75
extern MagickBooleanType SubstituteString(char ** , char const   * ,
                                          char const   * ) ;
#line 79
extern int CompareStringInfo(StringInfo const   * , StringInfo const   * ) ;
#line 82
extern size_t ConcatenateMagickString(char * , char const   * , size_t  ) ;
#line 82
extern size_t CopyMagickString(char * , char const   * , size_t  ) ;
#line 82
extern size_t GetStringInfoLength(StringInfo const   * ) ;
#line 87
extern StringInfo *AcquireStringInfo(size_t  ) ;
#line 87
extern StringInfo *CloneStringInfo(StringInfo const   * ) ;
#line 87
extern StringInfo *ConfigureFileToStringInfo(char const   * ) ;
#line 87
extern StringInfo *DestroyStringInfo(StringInfo * ) ;
#line 87
extern StringInfo *FileToStringInfo(char const   * , size_t  , ExceptionInfo * ) ;
#line 87
extern StringInfo *SplitStringInfo(StringInfo * , size_t  ) ;
#line 87
extern StringInfo *StringToStringInfo(char const   * ) ;
#line 96
extern unsigned char *GetStringInfoDatum(StringInfo const   * ) ;
#line 99
extern void ConcatenateStringInfo(StringInfo * , StringInfo const   * ) ;
#line 99
extern void LocaleLower(char * ) ;
#line 99
extern void LocaleUpper(char * ) ;
#line 99
extern void PrintStringInfo(FILE *file , char const   * , StringInfo const   * ) ;
#line 99
extern void ResetStringInfo(StringInfo * ) ;
#line 99
extern void SetStringInfo(StringInfo * , StringInfo const   * ) ;
#line 99
extern void SetStringInfoDatum(StringInfo * , unsigned char const   * ) ;
#line 99
extern void SetStringInfoLength(StringInfo * , size_t  ) ;
#line 99
extern void SetStringInfoPath(StringInfo * , char const   * ) ;
#line 99
extern void StripString(char * ) ;
#line 51 "./magick/profile.h"
extern char *GetNextImageProfile(Image const   * ) ;
#line 54
extern StringInfo const   *GetImageProfile(Image const   * , char const   * ) ;
#line 57
extern MagickBooleanType CloneImageProfiles(Image * , Image const   * ) ;
#line 57
extern MagickBooleanType DeleteImageProfile(Image * , char const   * ) ;
#line 57
extern MagickBooleanType ProfileImage(Image * , char const   * ,
                                      void const   * , size_t  ,
                                      MagickBooleanType  ) ;
#line 57
extern MagickBooleanType SetImageProfile(Image * , char const   * ,
                                         StringInfo const   * ) ;
#line 57
extern MagickBooleanType SyncImageProfiles(Image * ) ;
#line 65
extern StringInfo *RemoveImageProfile(Image * , char const   * ) ;
#line 68
extern void DestroyImageProfiles(Image * ) ;
#line 68
extern void ResetImageProfileIterator(Image const   * ) ;
#line 78 "./magick/quantum.h"
__inline static Quantum RoundToQuantum(MagickRealType value ) 
{ 

  {
#line 78
  fprintf(_coverage_fout, "237\n");
#line 78
  fflush(_coverage_fout);
#line 83
  if (value <= 0.0) {
#line 83
    fprintf(_coverage_fout, "235\n");
#line 83
    fflush(_coverage_fout);
#line 84
    return ((unsigned short)0);
  }
#line 78
  fprintf(_coverage_fout, "238\n");
#line 78
  fflush(_coverage_fout);
#line 85
  if (value >= (MagickRealType )65535UL) {
#line 85
    fprintf(_coverage_fout, "236\n");
#line 85
    fflush(_coverage_fout);
#line 86
    return ((unsigned short)65535);
  }
#line 78
  fprintf(_coverage_fout, "239\n");
#line 78
  fflush(_coverage_fout);
#line 87
  return ((unsigned short )(value + 0.5));
}
}
#line 105 "./magick/quantum.h"
__inline static unsigned char ScaleQuantumToChar(Quantum quantum ) 
{ 

  {
#line 105
  fprintf(_coverage_fout, "240\n");
#line 105
  fflush(_coverage_fout);
#line 108
  return ((unsigned char )((((unsigned long )quantum + 128UL) - (((unsigned long )quantum + 128UL) >> 8)) >> 8));
}
}
#line 142
extern MagickBooleanType SetQuantumDepth(Image const   * , QuantumInfo * ,
                                         unsigned long  ) ;
#line 142
extern MagickBooleanType SetQuantumFormat(Image const   * , QuantumInfo * ,
                                          QuantumFormatType  ) ;
#line 142
extern MagickBooleanType SetQuantumPad(Image const   * , QuantumInfo * ,
                                       unsigned long  ) ;
#line 147
extern QuantumInfo *AcquireQuantumInfo(ImageInfo const   * , Image * ) ;
#line 147
extern QuantumInfo *DestroyQuantumInfo(QuantumInfo * ) ;
#line 151
extern QuantumType GetQuantumType(Image * , ExceptionInfo * ) ;
#line 154
extern size_t ExportQuantumPixels(Image const   * , ViewInfo const   * ,
                                  QuantumInfo const   * , QuantumType  ,
                                  unsigned char * , ExceptionInfo * ) ;
#line 154
extern size_t GetQuantumExtent(Image const   * , QuantumInfo const   * ,
                               QuantumType  ) ;
#line 154
extern size_t ImportQuantumPixels(Image * , ViewInfo * , QuantumInfo const   * ,
                                  QuantumType  , unsigned char const   * ,
                                  ExceptionInfo * ) ;
#line 161
extern unsigned char *GetQuantumPixels(QuantumInfo const   * ) ;
#line 164
extern void GetQuantumInfo(ImageInfo const   * , QuantumInfo * ) ;
#line 164
extern void SetQuantumAlphaType(QuantumInfo * , QuantumAlphaType  ) ;
#line 164
extern void SetQuantumImageType(Image * , QuantumType  ) ;
#line 164
extern void SetQuantumMinIsWhite(QuantumInfo * , MagickBooleanType  ) ;
#line 164
extern void SetQuantumPack(QuantumInfo * , MagickBooleanType  ) ;
#line 164
extern void SetQuantumQuantum(QuantumInfo * , unsigned long  ) ;
#line 164
extern void SetQuantumScale(QuantumInfo * , double  ) ;
#line 70 "./magick/resample.h"
extern MagickBooleanType ResamplePixelColor(ResampleFilter * , double  ,
                                            double  , MagickPixelPacket * ) ;
#line 70
extern MagickBooleanType SetResampleFilterInterpolateMethod(ResampleFilter * ,
                                                            InterpolatePixelMethod  ) ;
#line 70
extern MagickBooleanType SetResampleFilterVirtualPixelMethod(ResampleFilter * ,
                                                             VirtualPixelMethod  ) ;
#line 78
extern ResampleFilter *AcquireResampleFilter(Image const   * , ExceptionInfo * ) ;
#line 78
extern ResampleFilter *DestroyResampleFilter(ResampleFilter * ) ;
#line 82
extern void ScaleResampleFilter(ResampleFilter * , double  , double  , double  ,
                                double  ) ;
#line 82
extern void SetResampleFilter(ResampleFilter * , FilterTypes  , double  ) ;
#line 25 "./magick/resize.h"
extern Image *AdaptiveResizeImage(Image const   * , unsigned long  ,
                                  unsigned long  , ExceptionInfo * ) ;
#line 25
extern Image *LiquidRescaleImage(Image const   * , unsigned long  ,
                                 unsigned long  , double  , double  ,
                                 ExceptionInfo * ) ;
#line 25
extern Image *MagnifyImage(Image const   * , ExceptionInfo * ) ;
#line 25
extern Image *MinifyImage(Image const   * , ExceptionInfo * ) ;
#line 25
extern Image *ResampleImage(Image const   * , double  , double  , FilterTypes  ,
                            double  , ExceptionInfo * ) ;
#line 25
extern Image *ResizeImage(Image const   * , unsigned long  , unsigned long  ,
                          FilterTypes  , double  , ExceptionInfo * ) ;
#line 25
extern Image *SampleImage(Image const   * , unsigned long  , unsigned long  ,
                          ExceptionInfo * ) ;
#line 25
extern Image *ScaleImage(Image const   * , unsigned long  , unsigned long  ,
                         ExceptionInfo * ) ;
#line 25
extern Image *ThumbnailImage(Image const   * , unsigned long  , unsigned long  ,
                             ExceptionInfo * ) ;
#line 25
extern Image *ZoomImage(Image const   * , unsigned long  , unsigned long  ,
                        ExceptionInfo * ) ;
#line 53 "./magick/timer.h"
extern double GetElapsedTime(TimerInfo * ) ;
#line 53
extern double GetUserTime(TimerInfo * ) ;
#line 57
extern MagickBooleanType ContinueTimer(TimerInfo * ) ;
#line 60
extern TimerInfo *AcquireTimerInfo(void) ;
#line 60
extern TimerInfo *DestroyTimerInfo(TimerInfo * ) ;
#line 64
extern void GetTimerInfo(TimerInfo * ) ;
#line 64
extern void ResetTimer(TimerInfo * ) ;
#line 64
extern void StartTimer(TimerInfo * , MagickBooleanType  ) ;
#line 478 "./magick/image.h"
extern ExceptionType CatchImageException(Image * ) ;
#line 481
extern Image *AcquireImage(ImageInfo const   * ) ;
#line 481
extern Image *AppendImages(Image const   * , MagickBooleanType  ,
                           ExceptionInfo * ) ;
#line 481
extern Image *AverageImages(Image const   * , ExceptionInfo * ) ;
#line 481
extern Image *CloneImage(Image const   * , unsigned long  , unsigned long  ,
                         MagickBooleanType  , ExceptionInfo * ) ;
#line 481
extern Image *CombineImages(Image const   * , ChannelType  , ExceptionInfo * ) ;
#line 481
extern Image *DestroyImage(Image * ) ;
#line 481
extern Image *GetImageClipMask(Image const   * , ExceptionInfo * ) ;
#line 481
extern Image *GetImageMask(Image const   * , ExceptionInfo * ) ;
#line 481
extern Image *NewMagickImage(ImageInfo const   * , unsigned long  ,
                             unsigned long  , MagickPixelPacket const   * ) ;
#line 481
extern Image *ReferenceImage(Image * ) ;
#line 481
extern Image *SeparateImages(Image const   * , ChannelType  , ExceptionInfo * ) ;
#line 496
extern ImageInfo *AcquireImageInfo(void) ;
#line 496
extern ImageInfo *CloneImageInfo(ImageInfo const   * ) ;
#line 496
extern ImageInfo *DestroyImageInfo(ImageInfo * ) ;
#line 501
extern ImageType GetImageType(Image * , ExceptionInfo * ) ;
#line 504
extern MagickBooleanType AcquireImageColormap(Image * , unsigned long  ) ;
#line 504
extern MagickBooleanType ClipImage(Image * ) ;
#line 504
extern MagickBooleanType ClipImagePath(Image * , char const   * ,
                                       MagickBooleanType  ) ;
#line 504
extern MagickBooleanType CycleColormapImage(Image * , long  ) ;
#line 504
extern MagickBooleanType GetImageAlphaChannel(Image const   * ) ;
#line 504
extern MagickBooleanType IsTaintImage(Image const   * ) ;
#line 504
extern MagickBooleanType IsMagickConflict(char const   * ) ;
#line 504
extern MagickBooleanType IsHighDynamicRangeImage(Image const   * ,
                                                 ExceptionInfo * ) ;
#line 504
extern MagickBooleanType IsImageObject(Image const   * ) ;
#line 504
extern MagickBooleanType ListMagickInfo(FILE * , ExceptionInfo * ) ;
#line 504
extern MagickBooleanType ModifyImage(Image ** , ExceptionInfo * ) ;
#line 504
extern MagickBooleanType PlasmaImage(Image * , SegmentInfo const   * ,
                                     unsigned long  , unsigned long  ) ;
#line 504
extern MagickBooleanType ResetImagePage(Image * , char const   * ) ;
#line 504
extern MagickBooleanType SeparateImageChannel(Image * , ChannelType  ) ;
#line 504
extern MagickBooleanType SetImageAlphaChannel(Image * , AlphaChannelType  ) ;
#line 504
extern MagickBooleanType SetImageBackgroundColor(Image * ) ;
#line 504
extern MagickBooleanType SetImageClipMask(Image * , Image const   * ) ;
#line 504
extern MagickBooleanType SetImageExtent(Image * , unsigned long  ,
                                        unsigned long  ) ;
#line 504
extern MagickBooleanType SetImageInfo(ImageInfo * , MagickBooleanType  ,
                                      ExceptionInfo * ) ;
#line 504
extern MagickBooleanType SetImageMask(Image * , Image const   * ) ;
#line 504
extern MagickBooleanType SetImageOpacity(Image * , Quantum  ) ;
#line 504
extern MagickBooleanType SetImageStorageClass(Image * , ClassType  ) ;
#line 504
extern MagickBooleanType SetImageType(Image * , ImageType  ) ;
#line 504
extern MagickBooleanType SortColormapByIntensity(Image * ) ;
#line 504
extern MagickBooleanType StripImage(Image * ) ;
#line 504
extern MagickBooleanType SyncImage(Image * ) ;
#line 504
extern MagickBooleanType SyncImageSettings(ImageInfo const   * , Image * ) ;
#line 504
extern MagickBooleanType SyncImagesSettings(ImageInfo * , Image * ) ;
#line 504
extern MagickBooleanType TextureImage(Image * , Image const   * ) ;
#line 535
extern size_t InterpretImageFilename(ImageInfo const   * , Image * ,
                                     char const   * , int  , char * ) ;
#line 538
extern VirtualPixelMethod GetImageVirtualPixelMethod(Image const   * ) ;
#line 538
extern VirtualPixelMethod SetImageVirtualPixelMethod(Image const   * ,
                                                     VirtualPixelMethod  ) ;
#line 542
extern void AcquireNextImage(ImageInfo const   * , Image * ) ;
#line 542
extern void DestroyImagePixels(Image * ) ;
#line 542
extern void DisassociateImageStream(Image * ) ;
#line 542
extern void GetImageException(Image * , ExceptionInfo * ) ;
#line 542
extern void GetImageInfo(ImageInfo * ) ;
#line 542
extern void SetImageInfoBlob(ImageInfo * , void const   * , size_t  ) ;
#line 542
extern void SetImageInfoFile(ImageInfo * , FILE * ) ;
#line 87 "./magick/type.h"
extern char **GetTypeList(char const   * , unsigned long * , ExceptionInfo * ) ;
#line 90
extern MagickBooleanType ListTypeInfo(FILE * , ExceptionInfo * ) ;
#line 93
extern TypeInfo const   *GetTypeInfo(char const   * , ExceptionInfo * ) ;
#line 93
extern TypeInfo const   *GetTypeInfoByFamily(char const   * , StyleType  ,
                                             StretchType  , unsigned long  ,
                                             ExceptionInfo * ) ;
#line 93
extern TypeInfo const   **GetTypeInfoList(char const   * , unsigned long * ,
                                          ExceptionInfo * ) ;
#line 99
extern void DestroyTypeList(void) ;
#line 363 "./magick/draw.h"
extern DrawInfo *AcquireDrawInfo(void) ;
#line 363
extern DrawInfo *CloneDrawInfo(ImageInfo const   * , DrawInfo const   * ) ;
#line 363
extern DrawInfo *DestroyDrawInfo(DrawInfo * ) ;
#line 368
extern MagickBooleanType DrawAffineImage(Image * , Image const   * ,
                                         AffineMatrix const   * ) ;
#line 368
extern MagickBooleanType DrawClipPath(Image * , DrawInfo const   * ,
                                      char const   * ) ;
#line 368
extern MagickBooleanType DrawGradientImage(Image * , DrawInfo const   * ) ;
#line 368
extern MagickBooleanType DrawImage(Image * , DrawInfo const   * ) ;
#line 368
extern MagickBooleanType DrawPatternPath(Image * , DrawInfo const   * ,
                                         char const   * , Image ** ) ;
#line 368
extern MagickBooleanType DrawPrimitive(Image * , DrawInfo const   * ,
                                       PrimitiveInfo const   * ) ;
#line 376
extern void GetAffineMatrix(AffineMatrix * ) ;
#line 376
extern void GetDrawInfo(ImageInfo const   * , DrawInfo * ) ;
#line 27 "./magick/annotate.h"
extern long FormatMagickCaption(Image * , DrawInfo * , char * , TypeMetric * ) ;
#line 30
extern MagickBooleanType AnnotateImage(Image * , DrawInfo const   * ) ;
#line 30
extern MagickBooleanType GetMultilineTypeMetrics(Image * , DrawInfo const   * ,
                                                 TypeMetric * ) ;
#line 30
extern MagickBooleanType GetTypeMetrics(Image * , DrawInfo const   * ,
                                        TypeMetric * ) ;
#line 25 "./magick/artifact.h"
extern char *GetNextImageArtifact(Image const   * ) ;
#line 25
extern char *RemoveImageArtifact(Image * , char const   * ) ;
#line 29
extern char const   *GetImageArtifact(Image const   * , char const   * ) ;
#line 32
extern MagickBooleanType CloneImageArtifacts(Image * , Image const   * ) ;
#line 32
extern MagickBooleanType DefineImageArtifact(Image * , char const   * ) ;
#line 32
extern MagickBooleanType DeleteImageArtifact(Image * , char const   * ) ;
#line 32
extern MagickBooleanType SetImageArtifact(Image * , char const   * ,
                                          char const   * ) ;
#line 38
extern void DestroyImageArtifacts(Image * ) ;
#line 38
extern void ResetImageArtifactIterator(Image const   * ) ;
#line 27 "./magick/cache.h"
extern IndexPacket const   *GetVirtualIndexQueue(Image const   * ) ;
#line 30
extern PixelPacket const   *GetVirtualPixels(Image const   * , long  , long  ,
                                             unsigned long  , unsigned long  ,
                                             ExceptionInfo * ) ;
#line 30
extern PixelPacket const   *GetVirtualPixelQueue(Image const   * ) ;
#line 35
extern IndexPacket *GetAuthenticIndexQueue(Image const   * ) ;
#line 38
extern long GetPixelCacheThreadId(void) ;
#line 41
extern MagickBooleanType GetOneVirtualMagickPixel(Image const   * , long  ,
                                                  long  , MagickPixelPacket * ,
                                                  ExceptionInfo * ) ;
#line 41
extern MagickBooleanType GetOneVirtualPixel(Image const   * , long  , long  ,
                                            PixelPacket * , ExceptionInfo * ) ;
#line 41
extern MagickBooleanType GetOneVirtualMethodPixel(Image const   * ,
                                                  VirtualPixelMethod  , long  ,
                                                  long  , PixelPacket * ,
                                                  ExceptionInfo * ) ;
#line 41
extern MagickBooleanType GetOneAuthenticPixel(Image * , long  , long  ,
                                              PixelPacket * , ExceptionInfo * ) ;
#line 41
extern MagickBooleanType PersistPixelCache(Image * , char const   * ,
                                           MagickBooleanType  ,
                                           MagickOffsetType * , ExceptionInfo * ) ;
#line 41
extern MagickBooleanType SyncAuthenticPixels(Image * , ExceptionInfo * ) ;
#line 54
extern MagickSizeType GetImageExtent(Image const   * ) ;
#line 57
extern PixelPacket *GetAuthenticPixels(Image * , long  , long  ,
                                       unsigned long  , unsigned long  ,
                                       ExceptionInfo * ) ;
#line 57
extern PixelPacket *GetAuthenticPixelQueue(Image const   * ) ;
#line 57
extern PixelPacket *QueueAuthenticPixels(Image * , long  , long  ,
                                         unsigned long  , unsigned long  ,
                                         ExceptionInfo * ) ;
#line 64
extern unsigned long GetPixelCacheMaximumThreads(void) ;
#line 67
extern VirtualPixelMethod GetPixelCacheVirtualMethod(Image const   * ) ;
#line 67
extern VirtualPixelMethod SetPixelCacheVirtualMethod(Image const   * ,
                                                     VirtualPixelMethod  ) ;
#line 71
extern void DestroyPixelCacheResources(void) ;
#line 71
extern void SetPixelCacheMaximumThreads(unsigned long  ) ;
#line 61 "./magick/log.h"
extern char **GetLogList(char const   * , unsigned long * , ExceptionInfo * ) ;
#line 64
extern char const   *GetLogName(void) ;
#line 64
extern char const   *SetLogName(char const   * ) ;
#line 68
extern LogInfo const   **GetLogInfoList(char const   * , unsigned long * ,
                                        ExceptionInfo * ) ;
#line 71
extern LogEventType SetLogEventMask(char const   * ) ;
#line 74
extern MagickBooleanType IsEventLogging(void) ;
#line 74
extern MagickBooleanType ListLogInfo(FILE * , ExceptionInfo * ) ;
#line 74
extern MagickBooleanType ( /* format attribute */  LogMagickEvent)(LogEventType  ,
                                                                   char const   * ,
                                                                   char const   * ,
                                                                   unsigned long  ,
                                                                   char const   * 
                                                                   , ...) ;
#line 74
extern MagickBooleanType ( /* format attribute */  LogMagickEventList)(LogEventType  ,
                                                                       char const   * ,
                                                                       char const   * ,
                                                                       unsigned long  ,
                                                                       char const   * ,
                                                                       va_list  ) ;
#line 84
extern void CloseMagickLog(void) ;
#line 84
extern void DestroyLogList(void) ;
#line 84
extern void SetLogFormat(char const   * ) ;
#line 29 "./magick/color-private.h"
__inline static MagickBooleanType IsColorEqual(PixelPacket const   *p ,
                                               PixelPacket const   *q ) 
{ 

  {
#line 29
  fprintf(_coverage_fout, "244\n");
#line 29
  fflush(_coverage_fout);
#line 32
  if ((int const   )p->red == (int const   )q->red) {
#line 32
    fprintf(_coverage_fout, "243\n");
#line 32
    fflush(_coverage_fout);
#line 32
    if ((int const   )p->green == (int const   )q->green) {
#line 32
      fprintf(_coverage_fout, "242\n");
#line 32
      fflush(_coverage_fout);
#line 32
      if ((int const   )p->blue == (int const   )q->blue) {
#line 32
        fprintf(_coverage_fout, "241\n");
#line 32
        fflush(_coverage_fout);
#line 33
        return (1);
      }
    }
  }
#line 29
  fprintf(_coverage_fout, "245\n");
#line 29
  fflush(_coverage_fout);
#line 34
  return (0);
}
}
#line 37 "./magick/color-private.h"
__inline static IndexPacket ConstrainColormapIndex(Image *image ,
                                                   unsigned long index___0 ) 
{ 

  {
#line 37
  fprintf(_coverage_fout, "248\n");
#line 37
  fflush(_coverage_fout);
#line 40
  if (index___0 < image->colors) {
#line 40
    fprintf(_coverage_fout, "246\n");
#line 40
    fflush(_coverage_fout);
#line 41
    return ((unsigned short )index___0);
  }
  {
#line 42
  fprintf(_coverage_fout, "247\n");
#line 42
  fflush(_coverage_fout);
#line 42
  ThrowMagickException(& image->exception, "./magick/color-private.h",
                       "ConstrainColormapIndex", 42UL, 425,
                       "InvalidColormapIndex", "`%s\'", image->filename);
  }
#line 37
  fprintf(_coverage_fout, "249\n");
#line 37
  fflush(_coverage_fout);
#line 44
  return ((unsigned short)0);
}
}
#line 47 "./magick/color-private.h"
__inline static MagickBooleanType IsGray(PixelPacket const   *pixel ) 
{ 

  {
#line 47
  fprintf(_coverage_fout, "252\n");
#line 47
  fflush(_coverage_fout);
#line 49
  if ((int const   )pixel->red == (int const   )pixel->green) {
#line 49
    fprintf(_coverage_fout, "251\n");
#line 49
    fflush(_coverage_fout);
#line 49
    if ((int const   )pixel->green == (int const   )pixel->blue) {
#line 49
      fprintf(_coverage_fout, "250\n");
#line 49
      fflush(_coverage_fout);
#line 50
      return (1);
    }
  }
#line 47
  fprintf(_coverage_fout, "253\n");
#line 47
  fflush(_coverage_fout);
#line 51
  return (0);
}
}
#line 54 "./magick/color-private.h"
__inline static MagickBooleanType IsMagickColorEqual(MagickPixelPacket const   *p ,
                                                     MagickPixelPacket const   *q ) 
{ 

  {
#line 54
  fprintf(_coverage_fout, "270\n");
#line 54
  fflush(_coverage_fout);
#line 57
  if ((int const   )p->matte != 0) {
#line 57
    fprintf(_coverage_fout, "256\n");
#line 57
    fflush(_coverage_fout);
#line 57
    if ((int const   )q->matte == 0) {
#line 57
      fprintf(_coverage_fout, "255\n");
#line 57
      fflush(_coverage_fout);
#line 57
      if (p->opacity != (MagickRealType const   )(unsigned short)0) {
#line 57
        fprintf(_coverage_fout, "254\n");
#line 57
        fflush(_coverage_fout);
#line 59
        return (0);
      }
    }
  }
#line 54
  fprintf(_coverage_fout, "271\n");
#line 54
  fflush(_coverage_fout);
#line 60
  if ((int const   )q->matte != 0) {
#line 60
    fprintf(_coverage_fout, "259\n");
#line 60
    fflush(_coverage_fout);
#line 60
    if ((int const   )p->matte == 0) {
#line 60
      fprintf(_coverage_fout, "258\n");
#line 60
      fflush(_coverage_fout);
#line 60
      if (q->opacity != (MagickRealType const   )(unsigned short)0) {
#line 60
        fprintf(_coverage_fout, "257\n");
#line 60
        fflush(_coverage_fout);
#line 62
        return (0);
      }
    }
  }
#line 54
  fprintf(_coverage_fout, "272\n");
#line 54
  fflush(_coverage_fout);
#line 63
  if ((int const   )p->matte != 0) {
#line 63
    fprintf(_coverage_fout, "264\n");
#line 63
    fflush(_coverage_fout);
#line 63
    if ((int const   )q->matte != 0) {
#line 63
      fprintf(_coverage_fout, "262\n");
#line 63
      fflush(_coverage_fout);
#line 65
      if (p->opacity != q->opacity) {
#line 65
        fprintf(_coverage_fout, "260\n");
#line 65
        fflush(_coverage_fout);
#line 66
        return (0);
      }
#line 63
      fprintf(_coverage_fout, "263\n");
#line 63
      fflush(_coverage_fout);
#line 67
      if (p->opacity == (MagickRealType const   )(unsigned short)65535) {
#line 67
        fprintf(_coverage_fout, "261\n");
#line 67
        fflush(_coverage_fout);
#line 68
        return (1);
      }
    }
  }
#line 54
  fprintf(_coverage_fout, "273\n");
#line 54
  fflush(_coverage_fout);
#line 70
  if (p->red != q->red) {
#line 70
    fprintf(_coverage_fout, "265\n");
#line 70
    fflush(_coverage_fout);
#line 71
    return (0);
  }
#line 54
  fprintf(_coverage_fout, "274\n");
#line 54
  fflush(_coverage_fout);
#line 72
  if (p->green != q->green) {
#line 72
    fprintf(_coverage_fout, "266\n");
#line 72
    fflush(_coverage_fout);
#line 73
    return (0);
  }
#line 54
  fprintf(_coverage_fout, "275\n");
#line 54
  fflush(_coverage_fout);
#line 74
  if (p->blue != q->blue) {
#line 74
    fprintf(_coverage_fout, "267\n");
#line 74
    fflush(_coverage_fout);
#line 75
    return (0);
  }
#line 54
  fprintf(_coverage_fout, "276\n");
#line 54
  fflush(_coverage_fout);
#line 76
  if ((int const   )p->colorspace == 12) {
#line 76
    fprintf(_coverage_fout, "269\n");
#line 76
    fflush(_coverage_fout);
#line 76
    if (p->index != q->index) {
#line 76
      fprintf(_coverage_fout, "268\n");
#line 76
      fflush(_coverage_fout);
#line 77
      return (0);
    }
  }
#line 54
  fprintf(_coverage_fout, "277\n");
#line 54
  fflush(_coverage_fout);
#line 78
  return (1);
}
}
#line 81 "./magick/color-private.h"
__inline static MagickBooleanType IsMagickGray(MagickPixelPacket const   *pixel ) 
{ 

  {
#line 81
  fprintf(_coverage_fout, "281\n");
#line 81
  fflush(_coverage_fout);
#line 83
  if ((int const   )pixel->colorspace != 1) {
#line 83
    fprintf(_coverage_fout, "278\n");
#line 83
    fflush(_coverage_fout);
#line 84
    return (0);
  }
#line 81
  fprintf(_coverage_fout, "282\n");
#line 81
  fflush(_coverage_fout);
#line 85
  if (pixel->red == pixel->green) {
#line 85
    fprintf(_coverage_fout, "280\n");
#line 85
    fflush(_coverage_fout);
#line 85
    if (pixel->green == pixel->blue) {
#line 85
      fprintf(_coverage_fout, "279\n");
#line 85
      fflush(_coverage_fout);
#line 86
      return (1);
    }
  }
#line 81
  fprintf(_coverage_fout, "283\n");
#line 81
  fflush(_coverage_fout);
#line 87
  return (0);
}
}
#line 90 "./magick/color-private.h"
__inline static MagickRealType MagickPixelIntensity(MagickPixelPacket const   *pixel ) 
{ MagickRealType intensity ;

  {
#line 90
  fprintf(_coverage_fout, "284\n");
#line 90
  fflush(_coverage_fout);
#line 96
  intensity = (0.299 * (double )pixel->red + 0.587 * (double )pixel->green) + 0.114 * (double )pixel->blue;
#line 90
  fprintf(_coverage_fout, "285\n");
#line 90
  fflush(_coverage_fout);
#line 97
  return (intensity);
}
}
#line 100 "./magick/color-private.h"
__inline static Quantum MagickPixelIntensityToQuantum(MagickPixelPacket const   *pixel ) 
{ 

  {
#line 100
  fprintf(_coverage_fout, "286\n");
#line 100
  fflush(_coverage_fout);
#line 104
  return ((unsigned short )(((0.299 * (double )pixel->red + 0.587 * (double )pixel->green) + 0.114 * (double )pixel->blue) + 0.5));
}
}
#line 110 "./magick/color-private.h"
__inline static MagickRealType MagickPixelLuminance(MagickPixelPacket const   *pixel ) 
{ MagickRealType luminance ;

  {
#line 110
  fprintf(_coverage_fout, "287\n");
#line 110
  fflush(_coverage_fout);
#line 116
  luminance = (0.21267 * (double )pixel->red + 0.71516 * (double )pixel->green) + 0.07217 * (double )pixel->blue;
#line 110
  fprintf(_coverage_fout, "288\n");
#line 110
  fflush(_coverage_fout);
#line 117
  return (luminance);
}
}
#line 120 "./magick/color-private.h"
__inline static MagickRealType PixelIntensity(PixelPacket const   *pixel ) 
{ MagickRealType intensity ;

  {
#line 120
  fprintf(_coverage_fout, "291\n");
#line 120
  fflush(_coverage_fout);
#line 125
  if ((int const   )pixel->red == (int const   )pixel->green) {
#line 125
    fprintf(_coverage_fout, "290\n");
#line 125
    fflush(_coverage_fout);
#line 125
    if ((int const   )pixel->green == (int const   )pixel->blue) {
#line 125
      fprintf(_coverage_fout, "289\n");
#line 125
      fflush(_coverage_fout);
#line 126
      return ((double )pixel->red);
    }
  }
#line 120
  fprintf(_coverage_fout, "292\n");
#line 120
  fflush(_coverage_fout);
#line 127
  intensity = (0.299 * (double )pixel->red + 0.587 * (double )pixel->green) + 0.114 * (double )pixel->blue;
#line 120
  fprintf(_coverage_fout, "293\n");
#line 120
  fflush(_coverage_fout);
#line 129
  return (intensity);
}
}
#line 132 "./magick/color-private.h"
__inline static Quantum PixelIntensityToQuantum(PixelPacket const   *pixel ) 
{ 

  {
#line 132
  fprintf(_coverage_fout, "296\n");
#line 132
  fflush(_coverage_fout);
#line 135
  if ((int const   )pixel->red == (int const   )pixel->green) {
#line 135
    fprintf(_coverage_fout, "295\n");
#line 135
    fflush(_coverage_fout);
#line 135
    if ((int const   )pixel->green == (int const   )pixel->blue) {
#line 135
      fprintf(_coverage_fout, "294\n");
#line 135
      fflush(_coverage_fout);
#line 136
      return ((unsigned short )pixel->red);
    }
  }
#line 132
  fprintf(_coverage_fout, "297\n");
#line 132
  fflush(_coverage_fout);
#line 138
  return ((unsigned short )(((306U * (unsigned int )pixel->red + 601U * (unsigned int )pixel->green) + 117U * (unsigned int )pixel->blue) >> 10U));
}
}
#line 38 "./magick/decorate.h"
extern Image *BorderImage(Image const   * , RectangleInfo const   * ,
                          ExceptionInfo * ) ;
#line 38
extern Image *FrameImage(Image const   * , FrameInfo const   * ,
                         ExceptionInfo * ) ;
#line 42
extern MagickBooleanType RaiseImage(Image * , RectangleInfo const   * ,
                                    MagickBooleanType  ) ;
#line 25 "./magick/enhance.h"
extern MagickBooleanType ClutImage(Image * , Image const   * ) ;
#line 25
extern MagickBooleanType ClutImageChannel(Image * , ChannelType  ,
                                          Image const   * ) ;
#line 25
extern MagickBooleanType ContrastImage(Image * , MagickBooleanType  ) ;
#line 25
extern MagickBooleanType ContrastStretchImage(Image * , char const   * ) ;
#line 25
extern MagickBooleanType ContrastStretchImageChannel(Image * , ChannelType  ,
                                                     double  , double  ) ;
#line 25
extern MagickBooleanType EqualizeImage(Image *image ) ;
#line 25
extern MagickBooleanType EqualizeImageChannel(Image *image , ChannelType  ) ;
#line 25
extern MagickBooleanType GammaImage(Image * , char const   * ) ;
#line 25
extern MagickBooleanType GammaImageChannel(Image * , ChannelType  , double  ) ;
#line 25
extern MagickBooleanType LevelImage(Image * , char const   * ) ;
#line 25
extern MagickBooleanType LevelImageChannel(Image * , ChannelType  , double  ,
                                           double  , double  ) ;
#line 25
extern MagickBooleanType LevelizeImageChannel(Image * , ChannelType  , double  ,
                                              double  , double  ) ;
#line 25
extern MagickBooleanType LevelImageColors(Image * , ChannelType  ,
                                          MagickPixelPacket const   * ,
                                          MagickPixelPacket const   * ,
                                          MagickBooleanType  ) ;
#line 25
extern MagickBooleanType LinearStretchImage(Image * , double  , double  ) ;
#line 25
extern MagickBooleanType ModulateImage(Image * , char const   * ) ;
#line 25
extern MagickBooleanType NegateImage(Image * , MagickBooleanType  ) ;
#line 25
extern MagickBooleanType NegateImageChannel(Image * , ChannelType  ,
                                            MagickBooleanType  ) ;
#line 25
extern MagickBooleanType NormalizeImage(Image * ) ;
#line 25
extern MagickBooleanType NormalizeImageChannel(Image * , ChannelType  ) ;
#line 25
extern MagickBooleanType SigmoidalContrastImage(Image * , MagickBooleanType  ,
                                                char const   * ) ;
#line 25
extern MagickBooleanType SigmoidalContrastImageChannel(Image * , ChannelType  ,
                                                       MagickBooleanType  ,
                                                       double  , double  ) ;
#line 53
extern Image *EnhanceImage(Image const   * , ExceptionInfo * ) ;
#line 79 "./magick/fx.h"
Image *AddNoiseImage(Image const   *image , NoiseType noise_type ,
                     ExceptionInfo *exception ) ;
#line 79
Image *AddNoiseImageChannel(Image const   *image , ChannelType channel ,
                            NoiseType noise_type , ExceptionInfo *exception ) ;
#line 79
Image *CharcoalImage(Image const   *image , double radius , double sigma ,
                     ExceptionInfo *exception ) ;
#line 79
Image *ColorizeImage(Image const   *image , char const   *opacity ,
                     PixelPacket colorize , ExceptionInfo *exception ) ;
#line 79
Image *ConvolveImage(Image const   *image , unsigned long order ,
                     double const   *kernel , ExceptionInfo *exception ) ;
#line 79
Image *ConvolveImageChannel(Image const   *image , ChannelType channel ,
                            unsigned long order , double const   *kernel ,
                            ExceptionInfo *exception ) ;
#line 79
Image *FxImage(Image const   *image , char const   *expression ,
               ExceptionInfo *exception ) ;
#line 79
Image *FxImageChannel(Image const   *image , ChannelType channel ,
                      char const   *expression , ExceptionInfo *exception ) ;
#line 79
Image *ImplodeImage(Image const   *image , double amount ,
                    ExceptionInfo *exception ) ;
#line 79
Image *MorphImages(Image const   *image , unsigned long number_frames ,
                   ExceptionInfo *exception ) ;
#line 79
Image *PolaroidImage(Image const   *image , DrawInfo const   *draw_info ,
                     double angle , ExceptionInfo *exception ) ;
#line 79
Image *RecolorImage(Image const   *image , unsigned long order ,
                    double const   *color_matrix , ExceptionInfo *exception ) ;
#line 79
Image *SepiaToneImage(Image const   *image , double threshold ,
                      ExceptionInfo *exception ) ;
#line 79
Image *ShadowImage(Image const   *image , double opacity , double sigma ,
                   long x_offset , long y_offset , ExceptionInfo *exception ) ;
#line 79
Image *SketchImage(Image const   *image , double radius , double sigma ,
                   double angle , ExceptionInfo *exception ) ;
#line 79
Image *SteganoImage(Image const   *image , Image const   *watermark ,
                    ExceptionInfo *exception ) ;
#line 79
Image *StereoImage(Image const   *left_image , Image const   *right_image ,
                   ExceptionInfo *exception ) ;
#line 79
Image *StereoAnaglyphImage(Image const   *left_image ,
                           Image const   *right_image , long x_offset ,
                           long y_offset , ExceptionInfo *exception ) ;
#line 79
Image *SwirlImage(Image const   *image , double degrees ,
                  ExceptionInfo *exception ) ;
#line 79
Image *TintImage(Image const   *image , char const   *opacity ,
                 PixelPacket tint , ExceptionInfo *exception ) ;
#line 79
Image *VignetteImage(Image const   *image , double radius , double sigma ,
                     long x , long y , ExceptionInfo *exception ) ;
#line 79
Image *WaveImage(Image const   *image , double amplitude , double wave_length ,
                 ExceptionInfo *exception ) ;
#line 111
MagickBooleanType EvaluateImage(Image *image , MagickEvaluateOperator op ,
                                double value , ExceptionInfo *exception ) ;
#line 111
MagickBooleanType EvaluateImageChannel(Image *image , ChannelType channel ,
                                       MagickEvaluateOperator op ,
                                       double value , ExceptionInfo *exception ) ;
#line 111
MagickBooleanType FunctionImage(Image *image , MagickFunction function ,
                                unsigned long number_parameters ,
                                double const   *parameters ,
                                ExceptionInfo *exception ) ;
#line 111
MagickBooleanType FunctionImageChannel(Image *image , ChannelType channel ,
                                       MagickFunction function ,
                                       unsigned long number_parameters ,
                                       double const   *parameters ,
                                       ExceptionInfo *exception ) ;
#line 111
MagickBooleanType SolarizeImage(Image *image , double threshold ) ;
#line 28 "./magick/fx-private.h"
FxInfo *AcquireFxInfo(Image const   *image , char const   *expression ) ;
#line 28
FxInfo *DestroyFxInfo(FxInfo *fx_info ) ;
#line 32
MagickBooleanType FxEvaluateExpression(FxInfo *fx_info , MagickRealType *alpha ,
                                       ExceptionInfo *exception ) ;
#line 32
MagickBooleanType FxEvaluateChannelExpression(FxInfo *fx_info ,
                                              ChannelType channel , long x ,
                                              long y , MagickRealType *alpha ,
                                              ExceptionInfo *exception ) ;
#line 25 "./magick/gem.h"
extern double ExpandAffine(AffineMatrix const   * ) ;
#line 28
extern unsigned long GetOptimalKernelWidth(double  , double  ) ;
#line 28
extern unsigned long GetOptimalKernelWidth1D(double  , double  ) ;
#line 28
extern unsigned long GetOptimalKernelWidth2D(double  , double  ) ;
#line 33
extern void ConvertHSBToRGB(double  , double  , double  , Quantum * ,
                            Quantum * , Quantum * ) ;
#line 33
extern void ConvertHSLToRGB(double  , double  , double  , Quantum * ,
                            Quantum * , Quantum * ) ;
#line 33
extern void ConvertHWBToRGB(double  , double  , double  , Quantum * ,
                            Quantum * , Quantum * ) ;
#line 33
extern void ConvertRGBToHSB(Quantum  , Quantum  , Quantum  , double * ,
                            double * , double * ) ;
#line 33
extern void ConvertRGBToHSL(Quantum  , Quantum  , Quantum  , double * ,
                            double * , double * ) ;
#line 33
extern void ConvertRGBToHWB(Quantum  , Quantum  , Quantum  , double * ,
                            double * , double * ) ;
#line 25 "./magick/list.h"
extern Image *CloneImageList(Image const   * , ExceptionInfo * ) ;
#line 25
extern Image *CloneImages(Image const   * , char const   * , ExceptionInfo * ) ;
#line 25
extern Image *DestroyImageList(Image * ) ;
#line 25
extern Image *GetFirstImageInList(Image const   * ) ;
#line 25
extern Image *GetImageFromList(Image const   * , long  ) ;
#line 25
extern Image *GetLastImageInList(Image const   * ) ;
#line 25
extern Image *GetNextImageInList(Image const   * ) ;
#line 25
extern Image *GetPreviousImageInList(Image const   * ) ;
#line 25
extern Image **ImageListToArray(Image const   * , ExceptionInfo * ) ;
#line 25
extern Image *NewImageList(void) ;
#line 25
extern Image *RemoveImageFromList(Image ** ) ;
#line 25
extern Image *RemoveLastImageFromList(Image ** ) ;
#line 25
extern Image *RemoveFirstImageFromList(Image ** ) ;
#line 25
extern Image *SpliceImageIntoList(Image ** , unsigned long  , Image const   * ) ;
#line 25
extern Image *SplitImageList(Image * ) ;
#line 25
extern Image *SyncNextImageInList(Image const   * ) ;
#line 43
extern long GetImageIndexInList(Image const   * ) ;
#line 46
extern unsigned long GetImageListLength(Image const   * ) ;
#line 49
extern void AppendImageToList(Image ** , Image const   * ) ;
#line 49
extern void DeleteImageFromList(Image ** ) ;
#line 49
extern void DeleteImages(Image ** , char const   * , ExceptionInfo * ) ;
#line 49
extern void InsertImageInList(Image ** , Image * ) ;
#line 49
extern void PrependImageToList(Image ** , Image * ) ;
#line 49
extern void ReplaceImageInList(Image ** , Image * ) ;
#line 49
extern void ReverseImageList(Image ** ) ;
#line 49
extern void SyncImageList(Image * ) ;
#line 34 "./magick/image-private.h"
extern char const   *BackgroundColor ;
#line 34
extern char const   *BorderColor ;
#line 34
extern char const   *DefaultTileFrame ;
#line 34
extern char const   *DefaultTileGeometry ;
#line 34
extern char const   *DefaultTileLabel ;
#line 34
extern char const   *ForegroundColor ;
#line 34
extern char const   *MatteColor ;
#line 34
extern char const   *LoadImageTag ;
#line 34
extern char const   *LoadImagesTag ;
#line 34
extern char const   *PSDensityGeometry ;
#line 34
extern char const   *PSPageGeometry ;
#line 34
extern char const   *SaveImageTag ;
#line 34
extern char const   *SaveImagesTag ;
#line 49
extern double const   DefaultResolution ;
#line 52 "./magick/image-private.h"
__inline static double DegreesToRadians(double degrees ) 
{ 

  {
#line 52
  fprintf(_coverage_fout, "298\n");
#line 52
  fflush(_coverage_fout);
#line 54
  return ((3.14159265358979323846264338327950288419716939937510 * degrees) / 180.0);
}
}
#line 57 "./magick/image-private.h"
__inline static MagickRealType RadiansToDegrees(MagickRealType radians ) 
{ 

  {
#line 57
  fprintf(_coverage_fout, "299\n");
#line 57
  fflush(_coverage_fout);
#line 59
  return ((180.0 * radians) / 3.14159265358979323846264338327950288419716939937510);
}
}
#line 62 "./magick/image-private.h"
__inline static unsigned char ScaleColor5to8(unsigned long color ) 
{ 

  {
#line 62
  fprintf(_coverage_fout, "300\n");
#line 62
  fflush(_coverage_fout);
#line 64
  return ((unsigned char )((color << 3) | (color >> 2)));
}
}
#line 67 "./magick/image-private.h"
__inline static unsigned char ScaleColor6to8(unsigned long color ) 
{ 

  {
#line 67
  fprintf(_coverage_fout, "301\n");
#line 67
  fflush(_coverage_fout);
#line 69
  return ((unsigned char )((color << 2) | (color >> 4)));
}
}
#line 72 "./magick/image-private.h"
__inline static unsigned long ScaleColor8to5(unsigned char color ) 
{ 

  {
#line 72
  fprintf(_coverage_fout, "302\n");
#line 72
  fflush(_coverage_fout);
#line 74
  return ((unsigned long )(((int )color & -8) >> 3));
}
}
#line 77 "./magick/image-private.h"
__inline static unsigned long ScaleColor8to6(unsigned char color ) 
{ 

  {
#line 77
  fprintf(_coverage_fout, "303\n");
#line 77
  fflush(_coverage_fout);
#line 79
  return ((unsigned long )(((int )color & -4) >> 2));
}
}
#line 30 "./magick/memory_.h"
extern void *AcquireMagickMemory(size_t  ) ;
#line 30
extern void *AcquireQuantumMemory(size_t  , size_t  ) ;
#line 30
extern void *CopyMagickMemory(void * , void const   * , size_t  ) ;
#line 30
extern void DestroyMagickMemory(void) ;
#line 30
extern void GetMagickMemoryMethods(AcquireMemoryHandler * ,
                                   ResizeMemoryHandler * ,
                                   DestroyMemoryHandler * ) ;
#line 30
extern void *RelinquishMagickMemory(void * ) ;
#line 30
extern void *ResetMagickMemory(void * , int  , size_t  ) ;
#line 30
extern void *ResizeMagickMemory(void * , size_t  ) ;
#line 30
extern void *ResizeQuantumMemory(void * , size_t  , size_t  ) ;
#line 30
extern void SetMagickMemoryMethods(void *(*)(size_t  ) ,
                                   void *(*)(void * , size_t  ) ,
                                   void (*)(void * ) ) ;
#line 27 "./magick/monitor-private.h"
__inline static MagickBooleanType SetImageProgress(Image const   *image ,
                                                   char const   *tag ,
                                                   MagickOffsetType offset ,
                                                   MagickSizeType extent ) 
{ char message[4096] ;
  MagickBooleanType tmp ;
  MagickBooleanType tmp___0 ;

  {
#line 27
  fprintf(_coverage_fout, "309\n");
#line 27
  fflush(_coverage_fout);
#line 33
  if ((unsigned long )image->progress_monitor == (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                         MagickOffsetType  ,
                                                                                         MagickSizeType  ,
                                                                                         void * ))((void *)0))) {
#line 33
    fprintf(_coverage_fout, "304\n");
#line 33
    fflush(_coverage_fout);
#line 34
    return (1);
  }
  {
#line 35
  fprintf(_coverage_fout, "305\n");
#line 35
  fflush(_coverage_fout);
#line 35
  tmp = QuantumTick(offset, extent);
  }
#line 27
  fprintf(_coverage_fout, "310\n");
#line 27
  fflush(_coverage_fout);
#line 35
  if ((int )tmp == 0) {
#line 35
    fprintf(_coverage_fout, "306\n");
#line 35
    fflush(_coverage_fout);
#line 36
    return (1);
  }
  {
#line 37
  fprintf(_coverage_fout, "307\n");
#line 37
  fflush(_coverage_fout);
#line 37
  FormatMagickString(message, 4096UL, "%s/%s", tag, image->filename);
#line 37
  fprintf(_coverage_fout, "308\n");
#line 37
  fflush(_coverage_fout);
#line 38
  tmp___0 = (*(image->progress_monitor))((char const   *)(message), offset,
                                         extent, (void *)image->client_data);
  }
#line 27
  fprintf(_coverage_fout, "311\n");
#line 27
  fflush(_coverage_fout);
#line 38
  return (tmp___0);
}
}
#line 105 "./magick/option.h"
extern char **GetMagickOptions(MagickOption  ) ;
#line 105
extern char *GetNextImageOption(ImageInfo const   * ) ;
#line 105
extern char *RemoveImageOption(ImageInfo * , char const   * ) ;
#line 110
extern char const   *GetImageOption(ImageInfo const   * , char const   * ) ;
#line 110
extern char const   *MagickOptionToMnemonic(MagickOption  , long  ) ;
#line 114
extern long ParseChannelOption(char const   * ) ;
#line 114
extern long ParseMagickOption(MagickOption  , MagickBooleanType  ,
                              char const   * ) ;
#line 118
extern MagickBooleanType CloneImageOptions(ImageInfo * , ImageInfo const   * ) ;
#line 118
extern MagickBooleanType DefineImageOption(ImageInfo * , char const   * ) ;
#line 118
extern MagickBooleanType DeleteImageOption(ImageInfo * , char const   * ) ;
#line 118
extern MagickBooleanType IsMagickOption(char const   * ) ;
#line 118
extern MagickBooleanType ListMagickOptions(FILE * , MagickOption  ,
                                           ExceptionInfo * ) ;
#line 118
extern MagickBooleanType SetImageOption(ImageInfo * , char const   * ,
                                        char const   * ) ;
#line 126
extern void DestroyImageOptions(ImageInfo * ) ;
#line 126
extern void ResetImageOptionIterator(ImageInfo const   * ) ;
#line 85 "./magick/quantum-private.h"
__inline static MagickSizeType GetQuantumRange(unsigned long depth ) 
{ 

  {
#line 85
  fprintf(_coverage_fout, "312\n");
#line 85
  fflush(_coverage_fout);
#line 87
  return ((1ULL << (depth - 1UL)) + ((1ULL << (depth - 1UL)) - 1ULL));
}
}
#line 94
__inline static void InitializeQuantumState(QuantumInfo const   *quantum_info ,
                                            EndianType endian ,
                                            QuantumState *quantum_state ) ;
#line 94 "./magick/quantum-private.h"
static unsigned long const   mask[32]  = 
#line 94
  {      (unsigned long const   )0UL,      (unsigned long const   )1UL,      (unsigned long const   )3UL,      (unsigned long const   )7UL, 
        (unsigned long const   )15UL,      (unsigned long const   )31UL,      (unsigned long const   )63UL,      (unsigned long const   )127UL, 
        (unsigned long const   )255UL,      (unsigned long const   )511UL,      (unsigned long const   )1023UL,      (unsigned long const   )2047UL, 
        (unsigned long const   )4095UL,      (unsigned long const   )8191UL,      (unsigned long const   )16383UL,      (unsigned long const   )32767UL, 
        (unsigned long const   )65535UL,      (unsigned long const   )131071UL,      (unsigned long const   )262143UL,      (unsigned long const   )524287UL, 
        (unsigned long const   )1048575UL,      (unsigned long const   )2097151UL,      (unsigned long const   )4194303UL,      (unsigned long const   )8388607UL, 
        (unsigned long const   )16777215UL,      (unsigned long const   )33554431UL,      (unsigned long const   )67108863UL,      (unsigned long const   )134217727UL, 
        (unsigned long const   )268435455UL,      (unsigned long const   )536870911UL,      (unsigned long const   )1073741823UL,      (unsigned long const   )2147483647UL};
#line 91 "./magick/quantum-private.h"
__inline static void InitializeQuantumState(QuantumInfo const   *quantum_info ,
                                            EndianType endian ,
                                            QuantumState *quantum_state ) 
{ 

  {
  {
#line 105
  fprintf(_coverage_fout, "313\n");
#line 105
  fflush(_coverage_fout);
#line 105
  ResetMagickMemory((void *)quantum_state, 0, sizeof(& quantum_state));
#line 105
  fprintf(_coverage_fout, "314\n");
#line 105
  fflush(_coverage_fout);
#line 106
  quantum_state->endian = endian;
#line 105
  fprintf(_coverage_fout, "315\n");
#line 105
  fflush(_coverage_fout);
#line 107
  quantum_state->minimum = (double )quantum_info->minimum;
#line 105
  fprintf(_coverage_fout, "316\n");
#line 105
  fflush(_coverage_fout);
#line 108
  quantum_state->scale = (double )quantum_info->scale;
#line 105
  fprintf(_coverage_fout, "317\n");
#line 105
  fflush(_coverage_fout);
#line 109
  quantum_state->inverse_scale = 0.0;
  }
#line 91
  fprintf(_coverage_fout, "319\n");
#line 91
  fflush(_coverage_fout);
#line 110
  if (quantum_state->scale != 0.0) {
#line 110
    fprintf(_coverage_fout, "318\n");
#line 110
    fflush(_coverage_fout);
#line 111
    quantum_state->inverse_scale = 1.0 / quantum_state->scale;
  }
#line 91
  fprintf(_coverage_fout, "320\n");
#line 91
  fflush(_coverage_fout);
#line 112
  quantum_state->bits = 0UL;
#line 113
  quantum_state->mask = mask;
#line 91
  fprintf(_coverage_fout, "321\n");
#line 91
  fflush(_coverage_fout);
#line 114
  return;
}
}
#line 116 "./magick/quantum-private.h"
__inline static unsigned char *PopCharPixel(unsigned char pixel ,
                                            unsigned char *pixels ) 
{ unsigned char *tmp ;

  {
#line 116
  fprintf(_coverage_fout, "322\n");
#line 116
  fflush(_coverage_fout);
#line 119
  tmp = pixels;
#line 119
  pixels ++;
#line 119
  *tmp = pixel;
#line 116
  fprintf(_coverage_fout, "323\n");
#line 116
  fflush(_coverage_fout);
#line 120
  return (pixels);
}
}
#line 123 "./magick/quantum-private.h"
__inline static unsigned char *PopLongPixel(EndianType endian ,
                                            unsigned long pixel ,
                                            unsigned char *pixels ) 
{ register unsigned int quantum ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  unsigned char *tmp___2 ;
  unsigned char *tmp___3 ;
  unsigned char *tmp___4 ;
  unsigned char *tmp___5 ;
  unsigned char *tmp___6 ;

  {
#line 123
  fprintf(_coverage_fout, "326\n");
#line 123
  fflush(_coverage_fout);
#line 129
  quantum = (unsigned int )pixel;
#line 123
  fprintf(_coverage_fout, "327\n");
#line 123
  fflush(_coverage_fout);
#line 130
  if ((int )endian != 1) {
#line 130
    fprintf(_coverage_fout, "324\n");
#line 130
    fflush(_coverage_fout);
#line 132
    tmp = pixels;
#line 132
    pixels ++;
#line 132
    *tmp = (unsigned char )(quantum >> 24);
#line 133
    tmp___0 = pixels;
#line 133
    pixels ++;
#line 133
    *tmp___0 = (unsigned char )(quantum >> 16);
#line 134
    tmp___1 = pixels;
#line 134
    pixels ++;
#line 134
    *tmp___1 = (unsigned char )(quantum >> 8);
#line 135
    tmp___2 = pixels;
#line 135
    pixels ++;
#line 135
    *tmp___2 = (unsigned char )quantum;
#line 130
    fprintf(_coverage_fout, "325\n");
#line 130
    fflush(_coverage_fout);
#line 136
    return (pixels);
  }
#line 123
  fprintf(_coverage_fout, "328\n");
#line 123
  fflush(_coverage_fout);
#line 138
  tmp___3 = pixels;
#line 138
  pixels ++;
#line 138
  *tmp___3 = (unsigned char )quantum;
#line 139
  tmp___4 = pixels;
#line 139
  pixels ++;
#line 139
  *tmp___4 = (unsigned char )(quantum >> 8);
#line 140
  tmp___5 = pixels;
#line 140
  pixels ++;
#line 140
  *tmp___5 = (unsigned char )(quantum >> 16);
#line 141
  tmp___6 = pixels;
#line 141
  pixels ++;
#line 141
  *tmp___6 = (unsigned char )(quantum >> 24);
#line 123
  fprintf(_coverage_fout, "329\n");
#line 123
  fflush(_coverage_fout);
#line 142
  return (pixels);
}
}
#line 145 "./magick/quantum-private.h"
__inline static unsigned char *PopShortPixel(EndianType endian ,
                                             unsigned short pixel ,
                                             unsigned char *pixels ) 
{ register unsigned int quantum ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  unsigned char *tmp___2 ;

  {
#line 145
  fprintf(_coverage_fout, "332\n");
#line 145
  fflush(_coverage_fout);
#line 151
  quantum = (unsigned int )pixel;
#line 145
  fprintf(_coverage_fout, "333\n");
#line 145
  fflush(_coverage_fout);
#line 152
  if ((int )endian != 1) {
#line 152
    fprintf(_coverage_fout, "330\n");
#line 152
    fflush(_coverage_fout);
#line 154
    tmp = pixels;
#line 154
    pixels ++;
#line 154
    *tmp = (unsigned char )(quantum >> 8);
#line 155
    tmp___0 = pixels;
#line 155
    pixels ++;
#line 155
    *tmp___0 = (unsigned char )quantum;
#line 152
    fprintf(_coverage_fout, "331\n");
#line 152
    fflush(_coverage_fout);
#line 156
    return (pixels);
  }
#line 145
  fprintf(_coverage_fout, "334\n");
#line 145
  fflush(_coverage_fout);
#line 158
  tmp___1 = pixels;
#line 158
  pixels ++;
#line 158
  *tmp___1 = (unsigned char )quantum;
#line 159
  tmp___2 = pixels;
#line 159
  pixels ++;
#line 159
  *tmp___2 = (unsigned char )(quantum >> 8);
#line 145
  fprintf(_coverage_fout, "335\n");
#line 145
  fflush(_coverage_fout);
#line 160
  return (pixels);
}
}
#line 163 "./magick/quantum-private.h"
__inline static unsigned char const   *PushCharPixel(unsigned char const   *pixels ,
                                                     unsigned char *pixel ) 
{ unsigned char const   *tmp ;

  {
#line 163
  fprintf(_coverage_fout, "336\n");
#line 163
  fflush(_coverage_fout);
#line 166
  tmp = pixels;
#line 166
  pixels ++;
#line 166
  *pixel = (unsigned char )*tmp;
#line 163
  fprintf(_coverage_fout, "337\n");
#line 163
  fflush(_coverage_fout);
#line 167
  return (pixels);
}
}
#line 170 "./magick/quantum-private.h"
__inline static unsigned char const   *PushLongPixel(EndianType endian ,
                                                     unsigned char const   *pixels ,
                                                     unsigned long *pixel ) 
{ register unsigned int quantum ;
  unsigned char const   *tmp ;
  unsigned char const   *tmp___0 ;
  unsigned char const   *tmp___1 ;
  unsigned char const   *tmp___2 ;
  unsigned char const   *tmp___3 ;
  unsigned char const   *tmp___4 ;
  unsigned char const   *tmp___5 ;
  unsigned char const   *tmp___6 ;

  {
#line 170
  fprintf(_coverage_fout, "340\n");
#line 170
  fflush(_coverage_fout);
#line 176
  if ((int )endian != 1) {
#line 176
    fprintf(_coverage_fout, "338\n");
#line 176
    fflush(_coverage_fout);
#line 178
    tmp = pixels;
#line 178
    pixels ++;
#line 178
    quantum = (unsigned int )((int const   )*tmp << 24);
#line 179
    tmp___0 = pixels;
#line 179
    pixels ++;
#line 179
    quantum |= (unsigned int )((int const   )*tmp___0 << 16);
#line 180
    tmp___1 = pixels;
#line 180
    pixels ++;
#line 180
    quantum |= (unsigned int )((int const   )*tmp___1 << 8);
#line 181
    tmp___2 = pixels;
#line 181
    pixels ++;
#line 181
    quantum |= (unsigned int )*tmp___2;
  } else {
#line 176
    fprintf(_coverage_fout, "339\n");
#line 176
    fflush(_coverage_fout);
#line 185
    tmp___3 = pixels;
#line 185
    pixels ++;
#line 185
    quantum = (unsigned int )*tmp___3;
#line 186
    tmp___4 = pixels;
#line 186
    pixels ++;
#line 186
    quantum |= (unsigned int )((int const   )*tmp___4 << 8);
#line 187
    tmp___5 = pixels;
#line 187
    pixels ++;
#line 187
    quantum |= (unsigned int )((int const   )*tmp___5 << 16);
#line 188
    tmp___6 = pixels;
#line 188
    pixels ++;
#line 188
    quantum |= (unsigned int )((int const   )*tmp___6 << 24);
  }
#line 170
  fprintf(_coverage_fout, "341\n");
#line 170
  fflush(_coverage_fout);
#line 190
  *pixel = (unsigned long )(quantum & 4294967295U);
#line 170
  fprintf(_coverage_fout, "342\n");
#line 170
  fflush(_coverage_fout);
#line 191
  return (pixels);
}
}
#line 194 "./magick/quantum-private.h"
__inline static unsigned char const   *PushShortPixel(EndianType endian ,
                                                      unsigned char const   *pixels ,
                                                      unsigned short *pixel ) 
{ register unsigned int quantum ;
  unsigned char const   *tmp ;
  unsigned char const   *tmp___0 ;
  unsigned char const   *tmp___1 ;
  unsigned char const   *tmp___2 ;

  {
#line 194
  fprintf(_coverage_fout, "345\n");
#line 194
  fflush(_coverage_fout);
#line 200
  if ((int )endian != 1) {
#line 200
    fprintf(_coverage_fout, "343\n");
#line 200
    fflush(_coverage_fout);
#line 202
    tmp = pixels;
#line 202
    pixels ++;
#line 202
    quantum = (unsigned int )((int const   )*tmp << 8);
#line 203
    tmp___0 = pixels;
#line 203
    pixels ++;
#line 203
    quantum |= (unsigned int )*tmp___0;
  } else {
#line 200
    fprintf(_coverage_fout, "344\n");
#line 200
    fflush(_coverage_fout);
#line 207
    tmp___1 = pixels;
#line 207
    pixels ++;
#line 207
    quantum = (unsigned int )*tmp___1;
#line 208
    tmp___2 = pixels;
#line 208
    pixels ++;
#line 208
    quantum |= (unsigned int )((int const   )*tmp___2 << 8);
  }
#line 194
  fprintf(_coverage_fout, "346\n");
#line 194
  fflush(_coverage_fout);
#line 210
  *pixel = (unsigned short )(quantum & 65535U);
#line 194
  fprintf(_coverage_fout, "347\n");
#line 194
  fflush(_coverage_fout);
#line 211
  return (pixels);
}
}
#line 214 "./magick/quantum-private.h"
__inline static Quantum ScaleAnyToQuantum(QuantumAny quantum , QuantumAny range ) 
{ 

  {
#line 214
  fprintf(_coverage_fout, "348\n");
#line 214
  fflush(_coverage_fout);
#line 217
  return ((unsigned short )(((double )65535UL * (double )quantum) / (double )range + 0.5));
}
}
#line 220 "./magick/quantum-private.h"
__inline static QuantumAny ScaleQuantumToAny(Quantum quantum , QuantumAny range ) 
{ 

  {
#line 220
  fprintf(_coverage_fout, "349\n");
#line 220
  fflush(_coverage_fout);
#line 223
  return ((unsigned long long )(((double )range * (double )quantum) / (double )65535UL + 0.5));
}
}
#line 302 "./magick/quantum-private.h"
__inline static Quantum ScaleCharToQuantum(unsigned char value ) 
{ 

  {
#line 302
  fprintf(_coverage_fout, "350\n");
#line 302
  fflush(_coverage_fout);
#line 305
  return ((unsigned short )(257UL * (unsigned long )value));
}
}
#line 311 "./magick/quantum-private.h"
__inline static Quantum ScaleLongToQuantum(unsigned long value ) 
{ 

  {
#line 311
  fprintf(_coverage_fout, "351\n");
#line 311
  fflush(_coverage_fout);
#line 314
  return ((unsigned short )(((unsigned long long )value + 32768ULL) / 65537ULL));
}
}
#line 321 "./magick/quantum-private.h"
__inline static Quantum ScaleMapToQuantum(MagickRealType value ) 
{ 

  {
#line 321
  fprintf(_coverage_fout, "354\n");
#line 321
  fflush(_coverage_fout);
#line 326
  if (value <= 0.0) {
#line 326
    fprintf(_coverage_fout, "352\n");
#line 326
    fflush(_coverage_fout);
#line 327
    return ((unsigned short)0);
  }
#line 321
  fprintf(_coverage_fout, "355\n");
#line 321
  fflush(_coverage_fout);
#line 328
  if (value + 0.5 >= (MagickRealType )65535UL) {
#line 328
    fprintf(_coverage_fout, "353\n");
#line 328
    fflush(_coverage_fout);
#line 329
    return ((unsigned short)65535);
  }
#line 321
  fprintf(_coverage_fout, "356\n");
#line 321
  fflush(_coverage_fout);
#line 330
  return ((unsigned short )(value + 0.5));
}
}
#line 334 "./magick/quantum-private.h"
__inline static unsigned long ScaleQuantumToLong(Quantum quantum ) 
{ 

  {
#line 334
  fprintf(_coverage_fout, "357\n");
#line 334
  fflush(_coverage_fout);
#line 337
  return (65537UL * (unsigned long )quantum);
}
}
#line 347 "./magick/quantum-private.h"
__inline static unsigned long ScaleQuantumToMap(Quantum quantum ) 
{ 

  {
#line 347
  fprintf(_coverage_fout, "359\n");
#line 347
  fflush(_coverage_fout);
#line 349
  if ((int )quantum >= 65535) {
#line 349
    fprintf(_coverage_fout, "358\n");
#line 349
    fflush(_coverage_fout);
#line 350
    return (65535UL);
  }
#line 347
  fprintf(_coverage_fout, "360\n");
#line 347
  fflush(_coverage_fout);
#line 352
  return ((unsigned long )quantum);
}
}
#line 360 "./magick/quantum-private.h"
__inline static unsigned short ScaleQuantumToShort(Quantum quantum ) 
{ 

  {
#line 360
  fprintf(_coverage_fout, "361\n");
#line 360
  fflush(_coverage_fout);
#line 363
  return (quantum);
}
}
#line 373 "./magick/quantum-private.h"
__inline static Quantum ScaleShortToQuantum(unsigned short value ) 
{ 

  {
#line 373
  fprintf(_coverage_fout, "362\n");
#line 373
  fflush(_coverage_fout);
#line 375
  return (value);
}
}
#line 31 "./magick/pixel-private.h"
__inline static MagickPixelPacket *CloneMagickPixelPacket(MagickPixelPacket const   *pixel ) 
{ MagickPixelPacket *clone_pixel ;
  void *tmp ;
  ExceptionInfo exception ;
  int *tmp___0 ;
  char *tmp___1 ;
  char const   *tmp___2 ;

  {
  {
#line 37
  fprintf(_coverage_fout, "363\n");
#line 37
  fflush(_coverage_fout);
#line 37
  tmp = AcquireMagickMemory(sizeof(*clone_pixel));
#line 37
  fprintf(_coverage_fout, "364\n");
#line 37
  fflush(_coverage_fout);
#line 37
  clone_pixel = (MagickPixelPacket *)tmp;
  }
#line 31
  fprintf(_coverage_fout, "375\n");
#line 31
  fflush(_coverage_fout);
#line 38
  if ((unsigned long )clone_pixel == (unsigned long )((MagickPixelPacket *)((void *)0))) {
    {
#line 39
    fprintf(_coverage_fout, "365\n");
#line 39
    fflush(_coverage_fout);
#line 39
    GetExceptionInfo(& exception);
#line 39
    fprintf(_coverage_fout, "366\n");
#line 39
    fflush(_coverage_fout);
#line 39
    tmp___0 = __errno_location();
#line 39
    fprintf(_coverage_fout, "367\n");
#line 39
    fflush(_coverage_fout);
#line 39
    tmp___1 = strerror(*tmp___0);
    }
#line 38
    fprintf(_coverage_fout, "374\n");
#line 38
    fflush(_coverage_fout);
#line 39
    if ((unsigned long )"MemoryAllocationFailed" == (unsigned long )((char const   *)((void *)0))) {
#line 39
      fprintf(_coverage_fout, "368\n");
#line 39
      fflush(_coverage_fout);
#line 39
      tmp___2 = "unknown";
    } else {
#line 39
      fprintf(_coverage_fout, "369\n");
#line 39
      fflush(_coverage_fout);
#line 39
      tmp___2 = "MemoryAllocationFailed";
    }
    {
#line 39
    fprintf(_coverage_fout, "370\n");
#line 39
    fflush(_coverage_fout);
#line 39
    ThrowMagickException(& exception, "./magick/pixel-private.h",
                         "CloneMagickPixelPacket", 39UL, 700, tmp___2, "`%s\'",
                         tmp___1);
#line 39
    fprintf(_coverage_fout, "371\n");
#line 39
    fflush(_coverage_fout);
#line 39
    CatchException(& exception);
#line 39
    fprintf(_coverage_fout, "372\n");
#line 39
    fflush(_coverage_fout);
#line 39
    DestroyExceptionInfo(& exception);
#line 39
    fprintf(_coverage_fout, "373\n");
#line 39
    fflush(_coverage_fout);
#line 39
    _exit(1);
    }
  }
#line 31
  fprintf(_coverage_fout, "376\n");
#line 31
  fflush(_coverage_fout);
#line 40
  *clone_pixel = (struct _MagickPixelPacket )*pixel;
#line 31
  fprintf(_coverage_fout, "377\n");
#line 31
  fflush(_coverage_fout);
#line 41
  return (clone_pixel);
}
}
#line 44 "./magick/pixel-private.h"
__inline static MagickBooleanType IsGrayPixel(PixelPacket const   *pixel ) 
{ 

  {
#line 44
  fprintf(_coverage_fout, "380\n");
#line 44
  fflush(_coverage_fout);
#line 47
  if ((int const   )pixel->red == (int const   )pixel->green) {
#line 47
    fprintf(_coverage_fout, "379\n");
#line 47
    fflush(_coverage_fout);
#line 47
    if ((int const   )pixel->green == (int const   )pixel->blue) {
#line 47
      fprintf(_coverage_fout, "378\n");
#line 47
      fflush(_coverage_fout);
#line 48
      return (1);
    }
  }
#line 44
  fprintf(_coverage_fout, "381\n");
#line 44
  fflush(_coverage_fout);
#line 54
  return (0);
}
}
#line 57 "./magick/pixel-private.h"
__inline static MagickBooleanType IsMonochromePixel(PixelPacket const   *pixel ) 
{ 

  {
#line 57
  fprintf(_coverage_fout, "386\n");
#line 57
  fflush(_coverage_fout);
#line 60
  if ((int const   )pixel->red == 0) {
    goto _L;
  } else {
#line 60
    fprintf(_coverage_fout, "385\n");
#line 60
    fflush(_coverage_fout);
#line 60
    if ((int const   )pixel->red == 65535) {
#line 60
      fprintf(_coverage_fout, "384\n");
#line 60
      fflush(_coverage_fout);
      _L: /* CIL Label */ 
#line 60
      if ((int const   )pixel->red == (int const   )pixel->green) {
#line 60
        fprintf(_coverage_fout, "383\n");
#line 60
        fflush(_coverage_fout);
#line 60
        if ((int const   )pixel->green == (int const   )pixel->blue) {
#line 60
          fprintf(_coverage_fout, "382\n");
#line 60
          fflush(_coverage_fout);
#line 62
          return (1);
        }
      }
    }
  }
#line 57
  fprintf(_coverage_fout, "387\n");
#line 57
  fflush(_coverage_fout);
#line 70
  return (0);
}
}
#line 73 "./magick/pixel-private.h"
__inline static void SetMagickPixelPacket(Image const   *image ,
                                          PixelPacket const   *color ,
                                          IndexPacket const   *index___0 ,
                                          MagickPixelPacket *pixel ) 
{ 

  {
#line 73
  fprintf(_coverage_fout, "391\n");
#line 73
  fflush(_coverage_fout);
#line 76
  pixel->red = (double )color->red;
#line 77
  pixel->green = (double )color->green;
#line 78
  pixel->blue = (double )color->blue;
#line 79
  pixel->opacity = (double )color->opacity;
#line 73
  fprintf(_coverage_fout, "392\n");
#line 73
  fflush(_coverage_fout);
#line 80
  if ((int const   )image->colorspace == 12) {
    goto _L;
  } else {
#line 80
    fprintf(_coverage_fout, "390\n");
#line 80
    fflush(_coverage_fout);
#line 80
    if ((int const   )image->storage_class == 2) {
#line 80
      fprintf(_coverage_fout, "389\n");
#line 80
      fflush(_coverage_fout);
      _L: /* CIL Label */ 
#line 80
      if ((unsigned long )index___0 != (unsigned long )((IndexPacket const   *)((void *)0))) {
#line 80
        fprintf(_coverage_fout, "388\n");
#line 80
        fflush(_coverage_fout);
#line 83
        pixel->index = (double )*index___0;
      }
    }
  }
#line 73
  fprintf(_coverage_fout, "393\n");
#line 73
  fflush(_coverage_fout);
#line 84
  return;
}
}
#line 86 "./magick/pixel-private.h"
__inline static void SetPixelPacket(Image const   *image ,
                                    MagickPixelPacket const   *pixel ,
                                    PixelPacket *color , IndexPacket *index___0 ) 
{ 

  {
  {
#line 89
  fprintf(_coverage_fout, "394\n");
#line 89
  fflush(_coverage_fout);
#line 89
  color->red = RoundToQuantum((double )pixel->red);
#line 89
  fprintf(_coverage_fout, "395\n");
#line 89
  fflush(_coverage_fout);
#line 90
  color->green = RoundToQuantum((double )pixel->green);
#line 89
  fprintf(_coverage_fout, "396\n");
#line 89
  fflush(_coverage_fout);
#line 91
  color->blue = RoundToQuantum((double )pixel->blue);
#line 89
  fprintf(_coverage_fout, "397\n");
#line 89
  fflush(_coverage_fout);
#line 92
  color->opacity = RoundToQuantum((double )pixel->opacity);
  }
#line 86
  fprintf(_coverage_fout, "401\n");
#line 86
  fflush(_coverage_fout);
#line 93
  if ((int const   )image->colorspace == 12) {
    goto _L;
  } else {
#line 93
    fprintf(_coverage_fout, "400\n");
#line 93
    fflush(_coverage_fout);
#line 93
    if ((int const   )image->storage_class == 2) {
#line 93
      fprintf(_coverage_fout, "399\n");
#line 93
      fflush(_coverage_fout);
      _L: /* CIL Label */ 
#line 93
      if ((unsigned long )index___0 != (unsigned long )((IndexPacket const   *)((void *)0))) {
        {
#line 96
        fprintf(_coverage_fout, "398\n");
#line 96
        fflush(_coverage_fout);
#line 96
        *index___0 = RoundToQuantum((double )pixel->index);
        }
      }
    }
  }
#line 86
  fprintf(_coverage_fout, "402\n");
#line 86
  fflush(_coverage_fout);
#line 97
  return;
}
}
#line 25 "./magick/property.h"
extern char *GetNextImageProperty(Image const   * ) ;
#line 25
extern char *InterpretImageProperties(ImageInfo const   * , Image * ,
                                      char const   * ) ;
#line 25
extern char *RemoveImageProperty(Image * , char const   * ) ;
#line 30
extern char const   *GetImageProperty(Image const   * , char const   * ) ;
#line 30
extern char const   *GetMagickProperty(ImageInfo const   * , Image * ,
                                       char const   * ) ;
#line 34
extern MagickBooleanType CloneImageProperties(Image * , Image const   * ) ;
#line 34
extern MagickBooleanType DefineImageProperty(Image * , char const   * ) ;
#line 34
extern MagickBooleanType DeleteImageProperty(Image * , char const   * ) ;
#line 34
extern MagickBooleanType ( /* format attribute */  FormatImageProperty)(Image * ,
                                                                        char const   * ,
                                                                        char const   * 
                                                                        , ...) ;
#line 34
extern MagickBooleanType ( /* format attribute */  FormatImagePropertyList)(Image * ,
                                                                            char const   * ,
                                                                            char const   * ,
                                                                            va_list  ) ;
#line 34
extern MagickBooleanType SetImageProperty(Image * , char const   * ,
                                          char const   * ) ;
#line 44
extern void DestroyImageProperties(Image * ) ;
#line 44
extern void ResetImagePropertyIterator(Image const   * ) ;
#line 36 "./magick/random_.h"
extern double GetRandomValue(RandomInfo * ) ;
#line 36
extern double GetPseudoRandomValue(void) ;
#line 40
extern RandomInfo *AcquireRandomInfo(void) ;
#line 40
extern RandomInfo *DestroyRandomInfo(RandomInfo * ) ;
#line 44
extern StringInfo *GetRandomKey(RandomInfo * , size_t  ) ;
#line 47
extern void DestroyRandomReservoir(void) ;
#line 47
extern void SeedPseudoRandomGenerator(unsigned long  ) ;
#line 47
extern void SetRandomKey(RandomInfo * , size_t  , unsigned char * ) ;
#line 47
extern void SetRandomTrueRandom(MagickBooleanType  ) ;
#line 27 "./magick/resample-private.h"
__inline static ResampleFilter **DestroyResampleFilterThreadSet(ResampleFilter **filter ) 
{ register long i ;
  unsigned long tmp ;
  void *tmp___0 ;

  {
#line 27
  fprintf(_coverage_fout, "410\n");
#line 27
  fflush(_coverage_fout);
#line 33
  if (! ((unsigned long )filter != (unsigned long )((ResampleFilter **)((void *)0)))) {
    {
#line 33
    fprintf(_coverage_fout, "403\n");
#line 33
    fflush(_coverage_fout);
#line 33
    __assert_fail("filter != (ResampleFilter **) ((void *)0)",
                  "./magick/resample-private.h", 33U,
                  "DestroyResampleFilterThreadSet");
    }
  }
#line 27
  fprintf(_coverage_fout, "411\n");
#line 27
  fflush(_coverage_fout);
#line 34
  i = 0L;
#line 27
  fprintf(_coverage_fout, "412\n");
#line 27
  fflush(_coverage_fout);
#line 34
  while (1) {
    {
#line 34
    fprintf(_coverage_fout, "404\n");
#line 34
    fflush(_coverage_fout);
#line 34
    tmp = GetPixelCacheMaximumThreads();
    }
#line 34
    fprintf(_coverage_fout, "406\n");
#line 34
    fflush(_coverage_fout);
#line 34
    if (! (i < (long )tmp)) {
#line 34
      break;
    }
#line 34
    fprintf(_coverage_fout, "407\n");
#line 34
    fflush(_coverage_fout);
#line 35
    if ((unsigned long )*(filter + i) != (unsigned long )((ResampleFilter *)((void *)0))) {
      {
#line 36
      fprintf(_coverage_fout, "405\n");
#line 36
      fflush(_coverage_fout);
#line 36
      *(filter + i) = DestroyResampleFilter(*(filter + i));
      }
    }
#line 34
    fprintf(_coverage_fout, "408\n");
#line 34
    fflush(_coverage_fout);
#line 34
    i ++;
  }
  {
#line 37
  fprintf(_coverage_fout, "409\n");
#line 37
  fflush(_coverage_fout);
#line 37
  tmp___0 = RelinquishMagickMemory((void *)filter);
  }
#line 27
  fprintf(_coverage_fout, "413\n");
#line 27
  fflush(_coverage_fout);
#line 37
  return ((ResampleFilter **)tmp___0);
}
}
#line 40 "./magick/resample-private.h"
__inline static ResampleFilter **AcquireResampleFilterThreadSet(Image const   *image ,
                                                                MagickBooleanType interpolate ,
                                                                ExceptionInfo *exception ) 
{ register long i ;
  ResampleFilter **filter ;
  unsigned long number_threads ;
  void *tmp ;
  ResampleFilter **tmp___0 ;

  {
  {
#line 53
  fprintf(_coverage_fout, "414\n");
#line 53
  fflush(_coverage_fout);
#line 53
  number_threads = GetPixelCacheMaximumThreads();
#line 53
  fprintf(_coverage_fout, "415\n");
#line 53
  fflush(_coverage_fout);
#line 54
  tmp = AcquireQuantumMemory(number_threads, sizeof(*filter));
#line 53
  fprintf(_coverage_fout, "416\n");
#line 53
  fflush(_coverage_fout);
#line 54
  filter = (ResampleFilter **)tmp;
  }
#line 40
  fprintf(_coverage_fout, "428\n");
#line 40
  fflush(_coverage_fout);
#line 56
  if ((unsigned long )filter == (unsigned long )((ResampleFilter **)((void *)0))) {
#line 56
    fprintf(_coverage_fout, "417\n");
#line 56
    fflush(_coverage_fout);
#line 57
    return ((ResampleFilter **)((void *)0));
  }
  {
#line 58
  fprintf(_coverage_fout, "418\n");
#line 58
  fflush(_coverage_fout);
#line 58
  ResetMagickMemory((void *)filter, 0, number_threads * sizeof(*filter));
#line 58
  fprintf(_coverage_fout, "419\n");
#line 58
  fflush(_coverage_fout);
#line 59
  i = 0L;
  }
#line 40
  fprintf(_coverage_fout, "429\n");
#line 40
  fflush(_coverage_fout);
#line 59
  while (1) {
#line 59
    fprintf(_coverage_fout, "424\n");
#line 59
    fflush(_coverage_fout);
#line 59
    if (! (i < (long )number_threads)) {
#line 59
      break;
    }
    {
#line 61
    fprintf(_coverage_fout, "420\n");
#line 61
    fflush(_coverage_fout);
#line 61
    *(filter + i) = AcquireResampleFilter(image, exception);
    }
#line 59
    fprintf(_coverage_fout, "425\n");
#line 59
    fflush(_coverage_fout);
#line 62
    if ((unsigned long )*(filter + i) == (unsigned long )((ResampleFilter *)((void *)0))) {
      {
#line 63
      fprintf(_coverage_fout, "421\n");
#line 63
      fflush(_coverage_fout);
#line 63
      tmp___0 = DestroyResampleFilterThreadSet(filter);
      }
#line 62
      fprintf(_coverage_fout, "422\n");
#line 62
      fflush(_coverage_fout);
#line 63
      return (tmp___0);
    }
#line 59
    fprintf(_coverage_fout, "426\n");
#line 59
    fflush(_coverage_fout);
#line 64
    if ((int )interpolate != 0) {
      {
#line 65
      fprintf(_coverage_fout, "423\n");
#line 65
      fflush(_coverage_fout);
#line 65
      SetResampleFilter(*(filter + i), 1, 1.0);
      }
    }
#line 59
    fprintf(_coverage_fout, "427\n");
#line 59
    fflush(_coverage_fout);
#line 59
    i ++;
  }
#line 40
  fprintf(_coverage_fout, "430\n");
#line 40
  fflush(_coverage_fout);
#line 67
  return (filter);
}
}
#line 25 "./magick/shear.h"
extern Image *AffineTransformImage(Image const   * , AffineMatrix const   * ,
                                   ExceptionInfo * ) ;
#line 25
extern Image *DeskewImage(Image const   * , double  , ExceptionInfo * ) ;
#line 25
extern Image *RotateImage(Image const   * , double  , ExceptionInfo * ) ;
#line 25
extern Image *ShearImage(Image const   * , double  , double  , ExceptionInfo * ) ;
#line 28 "./magick/splay-tree.h"
extern MagickBooleanType AddValueToSplayTree(SplayTreeInfo * , void const   * ,
                                             void const   * ) ;
#line 28
extern MagickBooleanType DeleteNodeByValueFromSplayTree(SplayTreeInfo * ,
                                                        void const   * ) ;
#line 28
extern MagickBooleanType DeleteNodeFromSplayTree(SplayTreeInfo * ,
                                                 void const   * ) ;
#line 33
extern int CompareSplayTreeString(void const   * , void const   * ) ;
#line 33
extern int CompareSplayTreeStringInfo(void const   * , void const   * ) ;
#line 37
extern SplayTreeInfo *CloneSplayTree(SplayTreeInfo * , void *(*)(void * ) ,
                                     void *(*)(void * ) ) ;
#line 37
extern SplayTreeInfo *DestroySplayTree(SplayTreeInfo * ) ;
#line 37
extern SplayTreeInfo *NewSplayTree(int (*)(void const   * , void const   * ) ,
                                   void *(*)(void * ) , void *(*)(void * ) ) ;
#line 43
extern unsigned long GetNumberOfNodesInSplayTree(SplayTreeInfo const   * ) ;
#line 46
extern void *GetNextKeyInSplayTree(SplayTreeInfo * ) ;
#line 46
extern void *GetNextValueInSplayTree(SplayTreeInfo * ) ;
#line 46
extern void *GetValueFromSplayTree(SplayTreeInfo * , void const   * ) ;
#line 46
extern void *RemoveNodeByValueFromSplayTree(SplayTreeInfo * , void const   * ) ;
#line 46
extern void *RemoveNodeFromSplayTree(SplayTreeInfo * , void const   * ) ;
#line 46
extern void ResetSplayTreeIterator(SplayTreeInfo * ) ;
#line 39 "./magick/statistic.h"
extern ChannelStatistics *GetImageChannelStatistics(Image const   * ,
                                                    ExceptionInfo * ) ;
#line 42
extern MagickBooleanType GetImageChannelExtrema(Image const   * , ChannelType  ,
                                                unsigned long * ,
                                                unsigned long * ,
                                                ExceptionInfo * ) ;
#line 42
extern MagickBooleanType GetImageChannelMean(Image const   * , ChannelType  ,
                                             double * , double * ,
                                             ExceptionInfo * ) ;
#line 42
extern MagickBooleanType GetImageChannelKurtosis(Image const   * ,
                                                 ChannelType  , double * ,
                                                 double * , ExceptionInfo * ) ;
#line 42
extern MagickBooleanType GetImageChannelRange(Image const   * , ChannelType  ,
                                              double * , double * ,
                                              ExceptionInfo * ) ;
#line 42
extern MagickBooleanType GetImageExtrema(Image const   * , unsigned long * ,
                                         unsigned long * , ExceptionInfo * ) ;
#line 42
extern MagickBooleanType GetImageRange(Image const   * , double * , double * ,
                                       ExceptionInfo * ) ;
#line 42
extern MagickBooleanType GetImageMean(Image const   * , double * , double * ,
                                      ExceptionInfo * ) ;
#line 42
extern MagickBooleanType GetImageKurtosis(Image const   * , double * ,
                                          double * , ExceptionInfo * ) ;
#line 42
extern MagickBooleanType SetImageChannelDepth(Image * , ChannelType  ,
                                              unsigned long  ) ;
#line 42
extern MagickBooleanType SetImageDepth(Image * , unsigned long  ) ;
#line 59
extern RectangleInfo GetImageBoundingBox(Image const   * ,
                                         ExceptionInfo *exception ) ;
#line 62
extern unsigned long GetImageChannelDepth(Image const   * , ChannelType  ,
                                          ExceptionInfo * ) ;
#line 62
extern unsigned long GetImageDepth(Image const   * , ExceptionInfo * ) ;
#line 62
extern unsigned long GetImageQuantumDepth(Image const   * , MagickBooleanType  ) ;
#line 25 "./magick/transform.h"
extern Image *ChopImage(Image const   * , RectangleInfo const   * ,
                        ExceptionInfo * ) ;
#line 25
extern Image *ConsolidateCMYKImages(Image const   * , ExceptionInfo * ) ;
#line 25
extern Image *CropImage(Image const   * , RectangleInfo const   * ,
                        ExceptionInfo * ) ;
#line 25
extern Image *ExcerptImage(Image const   * , RectangleInfo const   * ,
                           ExceptionInfo * ) ;
#line 25
extern Image *ExtentImage(Image const   * , RectangleInfo const   * ,
                          ExceptionInfo * ) ;
#line 25
extern Image *FlipImage(Image const   * , ExceptionInfo * ) ;
#line 25
extern Image *FlopImage(Image const   * , ExceptionInfo * ) ;
#line 25
extern Image *RollImage(Image const   * , long  , long  , ExceptionInfo * ) ;
#line 25
extern Image *ShaveImage(Image const   * , RectangleInfo const   * ,
                         ExceptionInfo * ) ;
#line 25
extern Image *SpliceImage(Image const   * , RectangleInfo const   * ,
                          ExceptionInfo * ) ;
#line 25
extern Image *TransposeImage(Image const   * , ExceptionInfo * ) ;
#line 25
extern Image *TransverseImage(Image const   * , ExceptionInfo * ) ;
#line 25
extern Image *TrimImage(Image const   * , ExceptionInfo * ) ;
#line 40
extern MagickBooleanType TransformImage(Image ** , char const   * ,
                                        char const   * ) ;
#line 40
extern MagickBooleanType TransformImages(Image ** , char const   * ,
                                         char const   * ) ;
#line 38 "./magick/utility.h"
extern char *Base64Encode(unsigned char const   * , size_t  , size_t * ) ;
#line 38
extern char **GetPathComponents(char const   * , unsigned long * ) ;
#line 38
extern char **ListFiles(char const   * , char const   * , unsigned long * ) ;
#line 43
extern FILE *OpenMagickStream(char const   * , char const   * ) ;
#line 46
extern int SystemCommand(MagickBooleanType  , char const   * ) ;
#line 49
extern MagickBooleanType AcquireUniqueFilename(char * ) ;
#line 49
extern MagickBooleanType AcquireUniqueSymbolicLink(char const   * , char * ) ;
#line 49
extern MagickBooleanType ExpandFilenames(int * , char *** ) ;
#line 49
extern MagickBooleanType GetPathAttributes(char const   * , void * ) ;
#line 49
extern MagickBooleanType GetExecutionPath(char * , size_t  ) ;
#line 49
extern MagickBooleanType IsMagickTrue(char const   * ) ;
#line 49
extern MagickBooleanType IsPathAccessible(char const   * ) ;
#line 58
extern unsigned char *Base64Decode(char const   * , size_t * ) ;
#line 61
extern unsigned long MultilineCensus(char const   * ) ;
#line 64
extern void AppendImageFormat(char const   * , char * ) ;
#line 64
extern void ChopPathComponents(char * , unsigned long  ) ;
#line 64
extern void ExpandFilename(char * ) ;
#line 64
extern void GetPathComponent(char const   * , PathType  , char * ) ;
#line 137 "magick/fx.c"
FxInfo *AcquireFxInfo(Image const   *image , char const   *expression ) 
{ char fx_op[2] ;
  FxInfo *fx_info ;
  register long i ;
  void *tmp ;
  ExceptionInfo exception ;
  int *tmp___0 ;
  char *tmp___1 ;
  char const   *tmp___2 ;
  unsigned long tmp___3 ;
  void *tmp___4 ;
  ExceptionInfo exception___0 ;
  int *tmp___5 ;
  char *tmp___6 ;
  char const   *tmp___7 ;
  Image *tmp___8 ;
  unsigned long tmp___9 ;
  char *tmp___10 ;
  char *tmp___11 ;

  {
  {
#line 148
  fprintf(_coverage_fout, "431\n");
#line 148
  fflush(_coverage_fout);
#line 148
  tmp = AcquireMagickMemory(sizeof(*fx_info));
#line 148
  fprintf(_coverage_fout, "432\n");
#line 148
  fflush(_coverage_fout);
#line 148
  fx_info = (FxInfo *)tmp;
  }
#line 137
  fprintf(_coverage_fout, "511\n");
#line 137
  fflush(_coverage_fout);
#line 149
  if ((unsigned long )fx_info == (unsigned long )((FxInfo *)((void *)0))) {
    {
#line 150
    fprintf(_coverage_fout, "433\n");
#line 150
    fflush(_coverage_fout);
#line 150
    GetExceptionInfo(& exception);
#line 150
    fprintf(_coverage_fout, "434\n");
#line 150
    fflush(_coverage_fout);
#line 150
    tmp___0 = __errno_location();
#line 150
    fprintf(_coverage_fout, "435\n");
#line 150
    fflush(_coverage_fout);
#line 150
    tmp___1 = strerror(*tmp___0);
    }
#line 149
    fprintf(_coverage_fout, "442\n");
#line 149
    fflush(_coverage_fout);
#line 150
    if ((unsigned long )"MemoryAllocationFailed" == (unsigned long )((char const   *)((void *)0))) {
#line 150
      fprintf(_coverage_fout, "436\n");
#line 150
      fflush(_coverage_fout);
#line 150
      tmp___2 = "unknown";
    } else {
#line 150
      fprintf(_coverage_fout, "437\n");
#line 150
      fflush(_coverage_fout);
#line 150
      tmp___2 = "MemoryAllocationFailed";
    }
    {
#line 150
    fprintf(_coverage_fout, "438\n");
#line 150
    fflush(_coverage_fout);
#line 150
    ThrowMagickException(& exception, "magick/fx.c", "AcquireFxInfo", 150UL,
                         700, tmp___2, "`%s\'", tmp___1);
#line 150
    fprintf(_coverage_fout, "439\n");
#line 150
    fflush(_coverage_fout);
#line 150
    CatchException(& exception);
#line 150
    fprintf(_coverage_fout, "440\n");
#line 150
    fflush(_coverage_fout);
#line 150
    DestroyExceptionInfo(& exception);
#line 150
    fprintf(_coverage_fout, "441\n");
#line 150
    fflush(_coverage_fout);
#line 150
    _exit(1);
    }
  }
  {
#line 151
  fprintf(_coverage_fout, "443\n");
#line 151
  fflush(_coverage_fout);
#line 151
  ResetMagickMemory((void *)fx_info, 0, sizeof(*fx_info));
#line 151
  fprintf(_coverage_fout, "444\n");
#line 151
  fflush(_coverage_fout);
#line 152
  fx_info->exception = AcquireExceptionInfo();
#line 151
  fprintf(_coverage_fout, "445\n");
#line 151
  fflush(_coverage_fout);
#line 153
  fx_info->images = image;
#line 151
  fprintf(_coverage_fout, "446\n");
#line 151
  fflush(_coverage_fout);
#line 154
  fx_info->matte = (enum __anonenum_MagickBooleanType_81 )image->matte;
#line 151
  fprintf(_coverage_fout, "447\n");
#line 151
  fflush(_coverage_fout);
#line 155
  fx_info->colors = NewSplayTree(& CompareSplayTreeString,
                                 & RelinquishMagickMemory,
                                 & RelinquishMagickMemory);
#line 151
  fprintf(_coverage_fout, "448\n");
#line 151
  fflush(_coverage_fout);
#line 157
  fx_info->symbols = NewSplayTree(& CompareSplayTreeString,
                                  & RelinquishMagickMemory,
                                  & RelinquishMagickMemory);
#line 151
  fprintf(_coverage_fout, "449\n");
#line 151
  fflush(_coverage_fout);
#line 159
  tmp___3 = GetImageListLength(fx_info->images);
#line 151
  fprintf(_coverage_fout, "450\n");
#line 151
  fflush(_coverage_fout);
#line 159
  tmp___4 = AcquireQuantumMemory(tmp___3, sizeof(*(fx_info->resample_filter)));
#line 151
  fprintf(_coverage_fout, "451\n");
#line 151
  fflush(_coverage_fout);
#line 159
  fx_info->resample_filter = (ResampleFilter **)tmp___4;
  }
#line 137
  fprintf(_coverage_fout, "512\n");
#line 137
  fflush(_coverage_fout);
#line 161
  if ((unsigned long )fx_info->resample_filter == (unsigned long )((ResampleFilter **)((void *)0))) {
    {
#line 162
    fprintf(_coverage_fout, "452\n");
#line 162
    fflush(_coverage_fout);
#line 162
    GetExceptionInfo(& exception___0);
#line 162
    fprintf(_coverage_fout, "453\n");
#line 162
    fflush(_coverage_fout);
#line 162
    tmp___5 = __errno_location();
#line 162
    fprintf(_coverage_fout, "454\n");
#line 162
    fflush(_coverage_fout);
#line 162
    tmp___6 = strerror(*tmp___5);
    }
#line 161
    fprintf(_coverage_fout, "461\n");
#line 161
    fflush(_coverage_fout);
#line 162
    if ((unsigned long )"MemoryAllocationFailed" == (unsigned long )((char const   *)((void *)0))) {
#line 162
      fprintf(_coverage_fout, "455\n");
#line 162
      fflush(_coverage_fout);
#line 162
      tmp___7 = "unknown";
    } else {
#line 162
      fprintf(_coverage_fout, "456\n");
#line 162
      fflush(_coverage_fout);
#line 162
      tmp___7 = "MemoryAllocationFailed";
    }
    {
#line 162
    fprintf(_coverage_fout, "457\n");
#line 162
    fflush(_coverage_fout);
#line 162
    ThrowMagickException(& exception___0, "magick/fx.c", "AcquireFxInfo", 162UL,
                         700, tmp___7, "`%s\'", tmp___6);
#line 162
    fprintf(_coverage_fout, "458\n");
#line 162
    fflush(_coverage_fout);
#line 162
    CatchException(& exception___0);
#line 162
    fprintf(_coverage_fout, "459\n");
#line 162
    fflush(_coverage_fout);
#line 162
    DestroyExceptionInfo(& exception___0);
#line 162
    fprintf(_coverage_fout, "460\n");
#line 162
    fflush(_coverage_fout);
#line 162
    _exit(1);
    }
  }
#line 137
  fprintf(_coverage_fout, "513\n");
#line 137
  fflush(_coverage_fout);
#line 163
  i = 0L;
#line 137
  fprintf(_coverage_fout, "514\n");
#line 137
  fflush(_coverage_fout);
#line 163
  while (1) {
    {
#line 163
    fprintf(_coverage_fout, "462\n");
#line 163
    fflush(_coverage_fout);
#line 163
    tmp___9 = GetImageListLength(fx_info->images);
    }
#line 163
    fprintf(_coverage_fout, "467\n");
#line 163
    fflush(_coverage_fout);
#line 163
    if (! (i < (long )tmp___9)) {
#line 163
      break;
    }
    {
#line 165
    fprintf(_coverage_fout, "463\n");
#line 165
    fflush(_coverage_fout);
#line 165
    tmp___8 = GetImageFromList(fx_info->images, i);
#line 165
    fprintf(_coverage_fout, "464\n");
#line 165
    fflush(_coverage_fout);
#line 165
    *(fx_info->resample_filter + i) = AcquireResampleFilter((Image const   *)tmp___8,
                                                            fx_info->exception);
#line 165
    fprintf(_coverage_fout, "465\n");
#line 165
    fflush(_coverage_fout);
#line 167
    SetResampleFilter(*(fx_info->resample_filter + i), 1, 1.0);
#line 165
    fprintf(_coverage_fout, "466\n");
#line 165
    fflush(_coverage_fout);
#line 163
    i ++;
    }
  }
  {
#line 169
  fprintf(_coverage_fout, "468\n");
#line 169
  fflush(_coverage_fout);
#line 169
  fx_info->expression = ConstantString(expression);
#line 169
  fprintf(_coverage_fout, "469\n");
#line 169
  fflush(_coverage_fout);
#line 170
  fx_info->file = stderr;
#line 169
  fprintf(_coverage_fout, "470\n");
#line 169
  fflush(_coverage_fout);
#line 171
  SubstituteString(& fx_info->expression, " ", "");
#line 169
  fprintf(_coverage_fout, "471\n");
#line 169
  fflush(_coverage_fout);
#line 172
  tmp___10 = strstr((char const   *)fx_info->expression, "e+");
  }
#line 137
  fprintf(_coverage_fout, "515\n");
#line 137
  fflush(_coverage_fout);
#line 172
  if ((unsigned long )tmp___10 != (unsigned long )((char *)((void *)0))) {
    goto _L;
  } else {
    {
#line 172
    fprintf(_coverage_fout, "472\n");
#line 172
    fflush(_coverage_fout);
#line 172
    tmp___11 = strstr((char const   *)fx_info->expression, "e-");
    }
#line 172
    fprintf(_coverage_fout, "493\n");
#line 172
    fflush(_coverage_fout);
#line 172
    if ((unsigned long )tmp___11 != (unsigned long )((char *)((void *)0))) {
      _L: /* CIL Label */ 
      {
#line 178
      fprintf(_coverage_fout, "473\n");
#line 178
      fflush(_coverage_fout);
#line 178
      SubstituteString(& fx_info->expression, "0e+", "0*10^");
#line 178
      fprintf(_coverage_fout, "474\n");
#line 178
      fflush(_coverage_fout);
#line 179
      SubstituteString(& fx_info->expression, "1e+", "1*10^");
#line 178
      fprintf(_coverage_fout, "475\n");
#line 178
      fflush(_coverage_fout);
#line 180
      SubstituteString(& fx_info->expression, "2e+", "2*10^");
#line 178
      fprintf(_coverage_fout, "476\n");
#line 178
      fflush(_coverage_fout);
#line 181
      SubstituteString(& fx_info->expression, "3e+", "3*10^");
#line 178
      fprintf(_coverage_fout, "477\n");
#line 178
      fflush(_coverage_fout);
#line 182
      SubstituteString(& fx_info->expression, "4e+", "4*10^");
#line 178
      fprintf(_coverage_fout, "478\n");
#line 178
      fflush(_coverage_fout);
#line 183
      SubstituteString(& fx_info->expression, "5e+", "5*10^");
#line 178
      fprintf(_coverage_fout, "479\n");
#line 178
      fflush(_coverage_fout);
#line 184
      SubstituteString(& fx_info->expression, "6e+", "6*10^");
#line 178
      fprintf(_coverage_fout, "480\n");
#line 178
      fflush(_coverage_fout);
#line 185
      SubstituteString(& fx_info->expression, "7e+", "7*10^");
#line 178
      fprintf(_coverage_fout, "481\n");
#line 178
      fflush(_coverage_fout);
#line 186
      SubstituteString(& fx_info->expression, "8e+", "8*10^");
#line 178
      fprintf(_coverage_fout, "482\n");
#line 178
      fflush(_coverage_fout);
#line 187
      SubstituteString(& fx_info->expression, "9e+", "9*10^");
#line 178
      fprintf(_coverage_fout, "483\n");
#line 178
      fflush(_coverage_fout);
#line 188
      SubstituteString(& fx_info->expression, "0e-", "0*10^-");
#line 178
      fprintf(_coverage_fout, "484\n");
#line 178
      fflush(_coverage_fout);
#line 189
      SubstituteString(& fx_info->expression, "1e-", "1*10^-");
#line 178
      fprintf(_coverage_fout, "485\n");
#line 178
      fflush(_coverage_fout);
#line 190
      SubstituteString(& fx_info->expression, "2e-", "2*10^-");
#line 178
      fprintf(_coverage_fout, "486\n");
#line 178
      fflush(_coverage_fout);
#line 191
      SubstituteString(& fx_info->expression, "3e-", "3*10^-");
#line 178
      fprintf(_coverage_fout, "487\n");
#line 178
      fflush(_coverage_fout);
#line 192
      SubstituteString(& fx_info->expression, "4e-", "4*10^-");
#line 178
      fprintf(_coverage_fout, "488\n");
#line 178
      fflush(_coverage_fout);
#line 193
      SubstituteString(& fx_info->expression, "5e-", "5*10^-");
#line 178
      fprintf(_coverage_fout, "489\n");
#line 178
      fflush(_coverage_fout);
#line 194
      SubstituteString(& fx_info->expression, "6e-", "6*10^-");
#line 178
      fprintf(_coverage_fout, "490\n");
#line 178
      fflush(_coverage_fout);
#line 195
      SubstituteString(& fx_info->expression, "7e-", "7*10^-");
#line 178
      fprintf(_coverage_fout, "491\n");
#line 178
      fflush(_coverage_fout);
#line 196
      SubstituteString(& fx_info->expression, "8e-", "8*10^-");
#line 178
      fprintf(_coverage_fout, "492\n");
#line 178
      fflush(_coverage_fout);
#line 197
      SubstituteString(& fx_info->expression, "9e-", "9*10^-");
      }
    }
  }
  {
#line 202
  fprintf(_coverage_fout, "494\n");
#line 202
  fflush(_coverage_fout);
#line 202
  fx_op[1] = (char )'\000';
#line 202
  fprintf(_coverage_fout, "495\n");
#line 202
  fflush(_coverage_fout);
#line 203
  fx_op[0] = (char)-11;
#line 202
  fprintf(_coverage_fout, "496\n");
#line 202
  fflush(_coverage_fout);
#line 204
  SubstituteString(& fx_info->expression, "<<", (char const   *)(fx_op));
#line 202
  fprintf(_coverage_fout, "497\n");
#line 202
  fflush(_coverage_fout);
#line 205
  fx_op[0] = (char)-10;
#line 202
  fprintf(_coverage_fout, "498\n");
#line 202
  fflush(_coverage_fout);
#line 206
  SubstituteString(& fx_info->expression, ">>", (char const   *)(fx_op));
#line 202
  fprintf(_coverage_fout, "499\n");
#line 202
  fflush(_coverage_fout);
#line 207
  fx_op[0] = (char)-9;
#line 202
  fprintf(_coverage_fout, "500\n");
#line 202
  fflush(_coverage_fout);
#line 208
  SubstituteString(& fx_info->expression, "<=", (char const   *)(fx_op));
#line 202
  fprintf(_coverage_fout, "501\n");
#line 202
  fflush(_coverage_fout);
#line 209
  fx_op[0] = (char)-8;
#line 202
  fprintf(_coverage_fout, "502\n");
#line 202
  fflush(_coverage_fout);
#line 210
  SubstituteString(& fx_info->expression, ">=", (char const   *)(fx_op));
#line 202
  fprintf(_coverage_fout, "503\n");
#line 202
  fflush(_coverage_fout);
#line 211
  fx_op[0] = (char)-7;
#line 202
  fprintf(_coverage_fout, "504\n");
#line 202
  fflush(_coverage_fout);
#line 212
  SubstituteString(& fx_info->expression, "==", (char const   *)(fx_op));
#line 202
  fprintf(_coverage_fout, "505\n");
#line 202
  fflush(_coverage_fout);
#line 213
  fx_op[0] = (char)-6;
#line 202
  fprintf(_coverage_fout, "506\n");
#line 202
  fflush(_coverage_fout);
#line 214
  SubstituteString(& fx_info->expression, "!=", (char const   *)(fx_op));
#line 202
  fprintf(_coverage_fout, "507\n");
#line 202
  fflush(_coverage_fout);
#line 215
  fx_op[0] = (char)-5;
#line 202
  fprintf(_coverage_fout, "508\n");
#line 202
  fflush(_coverage_fout);
#line 216
  SubstituteString(& fx_info->expression, "&&", (char const   *)(fx_op));
#line 202
  fprintf(_coverage_fout, "509\n");
#line 202
  fflush(_coverage_fout);
#line 217
  fx_op[0] = (char)-4;
#line 202
  fprintf(_coverage_fout, "510\n");
#line 202
  fflush(_coverage_fout);
#line 218
  SubstituteString(& fx_info->expression, "||", (char const   *)(fx_op));
  }
#line 137
  fprintf(_coverage_fout, "516\n");
#line 137
  fflush(_coverage_fout);
#line 219
  return (fx_info);
}
}
#line 255 "magick/fx.c"
static Quantum GenerateNoise(Quantum pixel , NoiseType noise_type ,
                             MagickRealType attenuate ) 
{ MagickRealType alpha ;
  MagickRealType beta ;
  MagickRealType noise ;
  MagickRealType sigma ;
  Quantum tmp ;
  MagickRealType tau ;
  double tmp___0 ;
  double tmp___1 ;
  double tmp___2 ;
  double tmp___3 ;
  double tmp___4 ;
  double tmp___5 ;
  double tmp___6 ;
  Quantum tmp___7 ;
  Quantum tmp___8 ;
  double tmp___9 ;
  Quantum tmp___10 ;
  double tmp___11 ;
  Quantum tmp___12 ;
  double tmp___13 ;
  Quantum tmp___14 ;
  Quantum tmp___15 ;
  double tmp___16 ;
  Quantum tmp___17 ;
  MagickRealType poisson ;
  register long i ;
  unsigned char tmp___18 ;
  Quantum tmp___19 ;
  double tmp___20 ;
  Quantum tmp___21 ;

  {
  {
#line 274
  fprintf(_coverage_fout, "517\n");
#line 274
  fflush(_coverage_fout);
#line 274
  alpha = GetPseudoRandomValue();
  }
#line 255
  fprintf(_coverage_fout, "574\n");
#line 255
  fflush(_coverage_fout);
#line 275
  if (alpha == 0.0) {
#line 275
    fprintf(_coverage_fout, "518\n");
#line 275
    fflush(_coverage_fout);
#line 276
    alpha = 1.0;
  }
#line 277
  switch ((int )noise_type) {
  case 1: 
  default: 
  {
#line 282
  fprintf(_coverage_fout, "519\n");
#line 282
  fflush(_coverage_fout);
#line 282
  tmp = ScaleCharToQuantum((unsigned char )(attenuate * 4.0 + 0.5));
#line 282
  fprintf(_coverage_fout, "520\n");
#line 282
  fflush(_coverage_fout);
#line 282
  noise = (double )pixel + (MagickRealType )tmp * (alpha - 0.5);
  }
#line 283
  break;
  case 2: 
  {
#line 290
  fprintf(_coverage_fout, "521\n");
#line 290
  fflush(_coverage_fout);
#line 290
  beta = GetPseudoRandomValue();
#line 290
  fprintf(_coverage_fout, "522\n");
#line 290
  fflush(_coverage_fout);
#line 291
  tmp___0 = log(alpha);
#line 290
  fprintf(_coverage_fout, "523\n");
#line 290
  fflush(_coverage_fout);
#line 291
  tmp___1 = sqrt(- 2.0 * tmp___0);
#line 290
  fprintf(_coverage_fout, "524\n");
#line 290
  fflush(_coverage_fout);
#line 291
  tmp___2 = cos((2.0 * 3.14159265358979323846264338327950288419716939937510) * beta);
#line 290
  fprintf(_coverage_fout, "525\n");
#line 290
  fflush(_coverage_fout);
#line 291
  sigma = tmp___1 * tmp___2;
#line 290
  fprintf(_coverage_fout, "526\n");
#line 290
  fflush(_coverage_fout);
#line 292
  tmp___3 = log(alpha);
#line 290
  fprintf(_coverage_fout, "527\n");
#line 290
  fflush(_coverage_fout);
#line 292
  tmp___4 = sqrt(- 2.0 * tmp___3);
#line 290
  fprintf(_coverage_fout, "528\n");
#line 290
  fflush(_coverage_fout);
#line 292
  tmp___5 = sin((2.0 * 3.14159265358979323846264338327950288419716939937510) * beta);
#line 290
  fprintf(_coverage_fout, "529\n");
#line 290
  fflush(_coverage_fout);
#line 292
  tau = tmp___4 * tmp___5;
#line 290
  fprintf(_coverage_fout, "530\n");
#line 290
  fflush(_coverage_fout);
#line 293
  tmp___6 = sqrt((double )pixel);
#line 290
  fprintf(_coverage_fout, "531\n");
#line 290
  fflush(_coverage_fout);
#line 293
  tmp___7 = ScaleCharToQuantum((unsigned char )(attenuate * 4.0 + 0.5));
#line 290
  fprintf(_coverage_fout, "532\n");
#line 290
  fflush(_coverage_fout);
#line 293
  tmp___8 = ScaleCharToQuantum((unsigned char )(attenuate * 20.0 + 0.5));
#line 290
  fprintf(_coverage_fout, "533\n");
#line 290
  fflush(_coverage_fout);
#line 293
  noise = ((double )pixel + (tmp___6 * (double )tmp___7) * sigma) + (MagickRealType )tmp___8 * tau;
  }
#line 295
  break;
#line 277
  fprintf(_coverage_fout, "567\n");
#line 277
  fflush(_coverage_fout);
  case 3: 
#line 299
  if (alpha <= attenuate * 1.0e-5) {
#line 299
    fprintf(_coverage_fout, "534\n");
#line 299
    fflush(_coverage_fout);
#line 300
    sigma = (double )65535UL;
  } else {
    {
#line 302
    fprintf(_coverage_fout, "535\n");
#line 302
    fflush(_coverage_fout);
#line 302
    tmp___9 = log(alpha);
#line 302
    fprintf(_coverage_fout, "536\n");
#line 302
    fflush(_coverage_fout);
#line 302
    sigma = sqrt(- 2.0 * tmp___9);
    }
  }
  {
#line 303
  fprintf(_coverage_fout, "537\n");
#line 303
  fflush(_coverage_fout);
#line 303
  beta = GetPseudoRandomValue();
#line 303
  fprintf(_coverage_fout, "538\n");
#line 303
  fflush(_coverage_fout);
#line 304
  tmp___10 = ScaleCharToQuantum((unsigned char )(attenuate * 1.0 + 0.5));
#line 303
  fprintf(_coverage_fout, "539\n");
#line 303
  fflush(_coverage_fout);
#line 304
  tmp___11 = cos((2.0 * 3.14159265358979323846264338327950288419716939937510) * beta);
#line 303
  fprintf(_coverage_fout, "540\n");
#line 303
  fflush(_coverage_fout);
#line 304
  noise = (double )pixel + (((MagickRealType )((int )pixel * (int )tmp___10) * sigma) / 2.0) * tmp___11;
  }
#line 306
  break;
#line 277
  fprintf(_coverage_fout, "568\n");
#line 277
  fflush(_coverage_fout);
  case 4: 
#line 310
  if (alpha < (attenuate * 0.10) / 2.0) {
#line 310
    fprintf(_coverage_fout, "541\n");
#line 310
    fflush(_coverage_fout);
#line 311
    noise = 0.0;
  } else {
#line 310
    fprintf(_coverage_fout, "544\n");
#line 310
    fflush(_coverage_fout);
#line 313
    if (alpha >= 1.0 - (attenuate * 0.10) / 2.0) {
#line 313
      fprintf(_coverage_fout, "542\n");
#line 313
      fflush(_coverage_fout);
#line 314
      noise = (double )65535UL;
    } else {
#line 313
      fprintf(_coverage_fout, "543\n");
#line 313
      fflush(_coverage_fout);
#line 316
      noise = (double )pixel;
    }
  }
#line 317
  break;
#line 277
  fprintf(_coverage_fout, "569\n");
#line 277
  fflush(_coverage_fout);
  case 5: 
#line 321
  if (alpha <= 0.5) {
#line 321
    fprintf(_coverage_fout, "550\n");
#line 321
    fflush(_coverage_fout);
#line 323
    if (alpha <= attenuate * 1.0e-5) {
#line 323
      fprintf(_coverage_fout, "545\n");
#line 323
      fflush(_coverage_fout);
#line 324
      noise = (double )pixel - (double )65535UL;
    } else {
      {
#line 326
      fprintf(_coverage_fout, "546\n");
#line 326
      fflush(_coverage_fout);
#line 326
      tmp___12 = ScaleCharToQuantum((unsigned char )(attenuate * 10.0 + 0.5));
#line 326
      fprintf(_coverage_fout, "547\n");
#line 326
      fflush(_coverage_fout);
#line 326
      tmp___13 = log(2.0 * alpha);
#line 326
      fprintf(_coverage_fout, "548\n");
#line 326
      fflush(_coverage_fout);
#line 326
      tmp___14 = ScaleCharToQuantum((unsigned char )((double )tmp___12 * tmp___13 + 0.5));
#line 326
      fprintf(_coverage_fout, "549\n");
#line 326
      fflush(_coverage_fout);
#line 326
      noise = (double )pixel + (double )tmp___14;
      }
    }
#line 328
    break;
  }
#line 277
  fprintf(_coverage_fout, "570\n");
#line 277
  fflush(_coverage_fout);
#line 330
  beta = 1.0 - alpha;
#line 277
  fprintf(_coverage_fout, "571\n");
#line 277
  fflush(_coverage_fout);
#line 331
  if (beta <= 0.5 * (attenuate * 1.0e-5)) {
#line 331
    fprintf(_coverage_fout, "551\n");
#line 331
    fflush(_coverage_fout);
#line 332
    noise = (double )((unsigned long )pixel + 65535UL);
  } else {
    {
#line 334
    fprintf(_coverage_fout, "552\n");
#line 334
    fflush(_coverage_fout);
#line 334
    tmp___15 = ScaleCharToQuantum((unsigned char )(attenuate * 10.0 + 0.5));
#line 334
    fprintf(_coverage_fout, "553\n");
#line 334
    fflush(_coverage_fout);
#line 334
    tmp___16 = log(2.0 * beta);
#line 334
    fprintf(_coverage_fout, "554\n");
#line 334
    fflush(_coverage_fout);
#line 334
    tmp___17 = ScaleCharToQuantum((unsigned char )((double )tmp___15 * tmp___16 + 0.5));
#line 334
    fprintf(_coverage_fout, "555\n");
#line 334
    fflush(_coverage_fout);
#line 334
    noise = (double )pixel - (double )tmp___17;
    }
  }
#line 336
  break;
  case 6: 
  {
#line 346
  fprintf(_coverage_fout, "556\n");
#line 346
  fflush(_coverage_fout);
#line 346
  tmp___18 = ScaleQuantumToChar(pixel);
#line 346
  fprintf(_coverage_fout, "557\n");
#line 346
  fflush(_coverage_fout);
#line 346
  poisson = exp(- (attenuate * 0.05) * (double )tmp___18);
#line 346
  fprintf(_coverage_fout, "558\n");
#line 346
  fflush(_coverage_fout);
#line 347
  i = 0L;
  }
#line 277
  fprintf(_coverage_fout, "572\n");
#line 277
  fflush(_coverage_fout);
#line 347
  while (1) {
#line 347
    fprintf(_coverage_fout, "562\n");
#line 347
    fflush(_coverage_fout);
#line 347
    if (! (alpha > poisson)) {
#line 347
      break;
    }
    {
#line 349
    fprintf(_coverage_fout, "559\n");
#line 349
    fflush(_coverage_fout);
#line 349
    beta = GetPseudoRandomValue();
#line 349
    fprintf(_coverage_fout, "560\n");
#line 349
    fflush(_coverage_fout);
#line 350
    alpha *= beta;
#line 349
    fprintf(_coverage_fout, "561\n");
#line 349
    fflush(_coverage_fout);
#line 347
    i ++;
    }
  }
  {
#line 352
  fprintf(_coverage_fout, "563\n");
#line 352
  fflush(_coverage_fout);
#line 352
  tmp___19 = ScaleCharToQuantum((unsigned char )((MagickRealType )i / (attenuate * 0.05)));
#line 352
  fprintf(_coverage_fout, "564\n");
#line 352
  fflush(_coverage_fout);
#line 352
  noise = (double )tmp___19;
  }
#line 354
  break;
  case 7: 
  {
#line 358
  fprintf(_coverage_fout, "565\n");
#line 358
  fflush(_coverage_fout);
#line 358
  tmp___20 = GetPseudoRandomValue();
#line 358
  fprintf(_coverage_fout, "566\n");
#line 358
  fflush(_coverage_fout);
#line 358
  noise = (double )65535UL * tmp___20;
  }
#line 359
  break;
  }
  {
#line 362
  fprintf(_coverage_fout, "573\n");
#line 362
  fflush(_coverage_fout);
#line 362
  tmp___21 = RoundToQuantum(noise);
  }
#line 255
  fprintf(_coverage_fout, "575\n");
#line 255
  fflush(_coverage_fout);
#line 362
  return (tmp___21);
}
}
#line 365 "magick/fx.c"
Image *AddNoiseImage(Image const   *image , NoiseType noise_type ,
                     ExceptionInfo *exception ) 
{ Image *noise_image ;

  {
  {
#line 371
  fprintf(_coverage_fout, "576\n");
#line 371
  fflush(_coverage_fout);
#line 371
  noise_image = AddNoiseImageChannel(image, 55, noise_type, exception);
  }
#line 365
  fprintf(_coverage_fout, "577\n");
#line 365
  fflush(_coverage_fout);
#line 372
  return (noise_image);
}
}
#line 375 "magick/fx.c"
Image *AddNoiseImageChannel(Image const   *image , ChannelType channel ,
                            NoiseType noise_type , ExceptionInfo *exception ) 
{ char const   *option ;
  Image *noise_image ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  MagickRealType attenuate ;
  ViewInfo *image_view ;
  ViewInfo *noise_view ;
  MagickBooleanType tmp ;
  register IndexPacket const   * __restrict  indexes ;
  register PixelPacket const   * __restrict  p ;
  register IndexPacket * __restrict  noise_indexes ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket const   *tmp___0 ;
  PixelPacket *tmp___1 ;
  IndexPacket const   *tmp___2 ;
  IndexPacket *tmp___3 ;
  Quantum tmp___4 ;
  MagickBooleanType tmp___5 ;
  MagickBooleanType proceed ;
  long tmp___6 ;

  {
#line 375
  fprintf(_coverage_fout, "640\n");
#line 375
  fflush(_coverage_fout);
#line 403
  if (! ((unsigned long )image != (unsigned long )((Image const   *)((void *)0)))) {
    {
#line 403
    fprintf(_coverage_fout, "578\n");
#line 403
    fflush(_coverage_fout);
#line 403
    __assert_fail("image != (const Image *) ((void *)0)", "magick/fx.c", 403U,
                  "AddNoiseImageChannel");
    }
  }
#line 375
  fprintf(_coverage_fout, "641\n");
#line 375
  fflush(_coverage_fout);
#line 404
  if (! (image->signature == 2880220587UL)) {
    {
#line 404
    fprintf(_coverage_fout, "579\n");
#line 404
    fflush(_coverage_fout);
#line 404
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 404U,
                  "AddNoiseImageChannel");
    }
  }
#line 375
  fprintf(_coverage_fout, "642\n");
#line 375
  fflush(_coverage_fout);
#line 405
  if ((int const   )image->debug != 0) {
    {
#line 406
    fprintf(_coverage_fout, "580\n");
#line 406
    fflush(_coverage_fout);
#line 406
    LogMagickEvent(1, "magick/fx.c", "AddNoiseImageChannel", 406UL, "%s",
                   image->filename);
    }
  }
#line 375
  fprintf(_coverage_fout, "643\n");
#line 375
  fflush(_coverage_fout);
#line 407
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 407
    fprintf(_coverage_fout, "581\n");
#line 407
    fflush(_coverage_fout);
#line 407
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  407U, "AddNoiseImageChannel");
    }
  }
#line 375
  fprintf(_coverage_fout, "644\n");
#line 375
  fflush(_coverage_fout);
#line 408
  if (! (exception->signature == 2880220587UL)) {
    {
#line 408
    fprintf(_coverage_fout, "582\n");
#line 408
    fflush(_coverage_fout);
#line 408
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 408U,
                  "AddNoiseImageChannel");
    }
  }
  {
#line 409
  fprintf(_coverage_fout, "583\n");
#line 409
  fflush(_coverage_fout);
#line 409
  noise_image = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 375
  fprintf(_coverage_fout, "645\n");
#line 375
  fflush(_coverage_fout);
#line 410
  if ((unsigned long )noise_image == (unsigned long )((Image *)((void *)0))) {
#line 410
    fprintf(_coverage_fout, "584\n");
#line 410
    fflush(_coverage_fout);
#line 411
    return ((Image *)((void *)0));
  }
  {
#line 412
  fprintf(_coverage_fout, "585\n");
#line 412
  fflush(_coverage_fout);
#line 412
  tmp = SetImageStorageClass(noise_image, 1);
  }
#line 375
  fprintf(_coverage_fout, "646\n");
#line 375
  fflush(_coverage_fout);
#line 412
  if ((int )tmp == 0) {
    {
#line 414
    fprintf(_coverage_fout, "586\n");
#line 414
    fflush(_coverage_fout);
#line 414
    InheritException(exception,
                     (ExceptionInfo const   *)(& noise_image->exception));
#line 414
    fprintf(_coverage_fout, "587\n");
#line 414
    fflush(_coverage_fout);
#line 415
    noise_image = DestroyImage(noise_image);
    }
#line 412
    fprintf(_coverage_fout, "588\n");
#line 412
    fflush(_coverage_fout);
#line 416
    return ((Image *)((void *)0));
  }
  {
#line 421
  fprintf(_coverage_fout, "589\n");
#line 421
  fflush(_coverage_fout);
#line 421
  attenuate = 1.0;
#line 421
  fprintf(_coverage_fout, "590\n");
#line 421
  fflush(_coverage_fout);
#line 422
  option = GetImageArtifact(image, "attenuate");
  }
#line 375
  fprintf(_coverage_fout, "647\n");
#line 375
  fflush(_coverage_fout);
#line 423
  if ((unsigned long )option != (unsigned long )((char *)((void *)0))) {
    {
#line 424
    fprintf(_coverage_fout, "591\n");
#line 424
    fflush(_coverage_fout);
#line 424
    attenuate = atof(option);
    }
  }
  {
#line 425
  fprintf(_coverage_fout, "592\n");
#line 425
  fflush(_coverage_fout);
#line 425
  status = 1;
#line 425
  fprintf(_coverage_fout, "593\n");
#line 425
  fflush(_coverage_fout);
#line 426
  progress = 0L;
#line 425
  fprintf(_coverage_fout, "594\n");
#line 425
  fflush(_coverage_fout);
#line 427
  image_view = AcquireCacheView(image);
#line 425
  fprintf(_coverage_fout, "595\n");
#line 425
  fflush(_coverage_fout);
#line 428
  noise_view = AcquireCacheView((Image const   *)noise_image);
#line 425
  fprintf(_coverage_fout, "596\n");
#line 425
  fflush(_coverage_fout);
#line 429
  y = 0L;
  }
#line 375
  fprintf(_coverage_fout, "648\n");
#line 375
  fflush(_coverage_fout);
#line 429
  while (1) {
#line 429
    fprintf(_coverage_fout, "630\n");
#line 429
    fflush(_coverage_fout);
#line 429
    if (! (y < (long )image->rows)) {
#line 429
      break;
    }
    {
#line 446
    fprintf(_coverage_fout, "597\n");
#line 446
    fflush(_coverage_fout);
#line 446
    tmp___0 = GetCacheViewVirtualPixels((ViewInfo const   *)image_view, 0L, y,
                                        (unsigned long )image->columns, 1UL,
                                        exception);
#line 446
    fprintf(_coverage_fout, "598\n");
#line 446
    fflush(_coverage_fout);
#line 446
    p = (PixelPacket const   */* __restrict  */)tmp___0;
#line 446
    fprintf(_coverage_fout, "599\n");
#line 446
    fflush(_coverage_fout);
#line 447
    tmp___1 = GetCacheViewAuthenticPixels(noise_view, 0L, y,
                                          noise_image->columns, 1UL, exception);
#line 446
    fprintf(_coverage_fout, "600\n");
#line 446
    fflush(_coverage_fout);
#line 447
    q = (PixelPacket */* __restrict  */)tmp___1;
    }
#line 429
    fprintf(_coverage_fout, "631\n");
#line 429
    fflush(_coverage_fout);
#line 449
    if ((unsigned long )p == (unsigned long )((PixelPacket *)((void *)0))) {
#line 449
      fprintf(_coverage_fout, "601\n");
#line 449
      fflush(_coverage_fout);
#line 451
      status = 0;
#line 452
      break;
    } else {
#line 449
      fprintf(_coverage_fout, "603\n");
#line 449
      fflush(_coverage_fout);
#line 449
      if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 449
        fprintf(_coverage_fout, "602\n");
#line 449
        fflush(_coverage_fout);
#line 451
        status = 0;
#line 452
        break;
      }
    }
    {
#line 454
    fprintf(_coverage_fout, "604\n");
#line 454
    fflush(_coverage_fout);
#line 454
    tmp___2 = GetCacheViewVirtualIndexQueue((ViewInfo const   *)image_view);
#line 454
    fprintf(_coverage_fout, "605\n");
#line 454
    fflush(_coverage_fout);
#line 454
    indexes = (IndexPacket const   */* __restrict  */)tmp___2;
#line 454
    fprintf(_coverage_fout, "606\n");
#line 454
    fflush(_coverage_fout);
#line 455
    tmp___3 = GetCacheViewAuthenticIndexQueue(noise_view);
#line 454
    fprintf(_coverage_fout, "607\n");
#line 454
    fflush(_coverage_fout);
#line 455
    noise_indexes = (IndexPacket */* __restrict  */)tmp___3;
#line 454
    fprintf(_coverage_fout, "608\n");
#line 454
    fflush(_coverage_fout);
#line 456
    x = 0L;
    }
#line 429
    fprintf(_coverage_fout, "632\n");
#line 429
    fflush(_coverage_fout);
#line 456
    while (1) {
#line 456
      fprintf(_coverage_fout, "616\n");
#line 456
      fflush(_coverage_fout);
#line 456
      if (! (x < (long )image->columns)) {
#line 456
        break;
      }
#line 456
      fprintf(_coverage_fout, "617\n");
#line 456
      fflush(_coverage_fout);
#line 458
      if (((int )channel & 1) != 0) {
        {
#line 459
        fprintf(_coverage_fout, "609\n");
#line 459
        fflush(_coverage_fout);
#line 459
        q->red = GenerateNoise((unsigned short )p->red, noise_type, attenuate);
        }
      }
#line 456
      fprintf(_coverage_fout, "618\n");
#line 456
      fflush(_coverage_fout);
#line 460
      if (((int )channel & 2) != 0) {
        {
#line 461
        fprintf(_coverage_fout, "610\n");
#line 461
        fflush(_coverage_fout);
#line 461
        q->green = GenerateNoise((unsigned short )p->green, noise_type,
                                 attenuate);
        }
      }
#line 456
      fprintf(_coverage_fout, "619\n");
#line 456
      fflush(_coverage_fout);
#line 462
      if (((int )channel & 4) != 0) {
        {
#line 463
        fprintf(_coverage_fout, "611\n");
#line 463
        fflush(_coverage_fout);
#line 463
        q->blue = GenerateNoise((unsigned short )p->blue, noise_type, attenuate);
        }
      }
#line 456
      fprintf(_coverage_fout, "620\n");
#line 456
      fflush(_coverage_fout);
#line 464
      if (((int )channel & 8) != 0) {
        {
#line 465
        fprintf(_coverage_fout, "612\n");
#line 465
        fflush(_coverage_fout);
#line 465
        q->opacity = GenerateNoise((unsigned short )p->opacity, noise_type,
                                   attenuate);
        }
      }
#line 456
      fprintf(_coverage_fout, "621\n");
#line 456
      fflush(_coverage_fout);
#line 466
      if (((int )channel & 32) != 0) {
#line 466
        fprintf(_coverage_fout, "615\n");
#line 466
        fflush(_coverage_fout);
#line 466
        if ((int const   )image->colorspace == 12) {
          {
#line 468
          fprintf(_coverage_fout, "613\n");
#line 468
          fflush(_coverage_fout);
#line 468
          tmp___4 = GenerateNoise((unsigned short )*(indexes + x), noise_type,
                                  attenuate);
#line 468
          fprintf(_coverage_fout, "614\n");
#line 468
          fflush(_coverage_fout);
#line 468
          *(noise_indexes + x) = tmp___4;
          }
        }
      }
#line 456
      fprintf(_coverage_fout, "622\n");
#line 456
      fflush(_coverage_fout);
#line 470
      p ++;
#line 471
      q ++;
#line 456
      x ++;
    }
    {
#line 473
    fprintf(_coverage_fout, "623\n");
#line 473
    fflush(_coverage_fout);
#line 473
    tmp___5 = SyncCacheViewAuthenticPixels(noise_view, exception);
    }
#line 429
    fprintf(_coverage_fout, "633\n");
#line 429
    fflush(_coverage_fout);
#line 473
    if ((int )tmp___5 == 0) {
#line 473
      fprintf(_coverage_fout, "624\n");
#line 473
      fflush(_coverage_fout);
#line 474
      status = 0;
    }
#line 429
    fprintf(_coverage_fout, "634\n");
#line 429
    fflush(_coverage_fout);
#line 475
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 480
      fprintf(_coverage_fout, "625\n");
#line 480
      fflush(_coverage_fout);
#line 480
      tmp___6 = progress;
#line 480
      fprintf(_coverage_fout, "626\n");
#line 480
      fflush(_coverage_fout);
#line 480
      progress ++;
#line 480
      fprintf(_coverage_fout, "627\n");
#line 480
      fflush(_coverage_fout);
#line 480
      proceed = SetImageProgress(image, "AddNoise/Image", (long long )tmp___6,
                                 (unsigned long long )image->rows);
      }
#line 475
      fprintf(_coverage_fout, "629\n");
#line 475
      fflush(_coverage_fout);
#line 482
      if ((int )proceed == 0) {
#line 482
        fprintf(_coverage_fout, "628\n");
#line 482
        fflush(_coverage_fout);
#line 483
        status = 0;
      }
    }
#line 429
    fprintf(_coverage_fout, "635\n");
#line 429
    fflush(_coverage_fout);
#line 485
    if ((int )status == 0) {
#line 486
      break;
    }
#line 429
    fprintf(_coverage_fout, "636\n");
#line 429
    fflush(_coverage_fout);
#line 429
    y ++;
  }
  {
#line 488
  fprintf(_coverage_fout, "637\n");
#line 488
  fflush(_coverage_fout);
#line 488
  noise_view = DestroyCacheView(noise_view);
#line 488
  fprintf(_coverage_fout, "638\n");
#line 488
  fflush(_coverage_fout);
#line 489
  image_view = DestroyCacheView(image_view);
  }
#line 375
  fprintf(_coverage_fout, "649\n");
#line 375
  fflush(_coverage_fout);
#line 490
  if ((int )status == 0) {
    {
#line 491
    fprintf(_coverage_fout, "639\n");
#line 491
    fflush(_coverage_fout);
#line 491
    noise_image = DestroyImage(noise_image);
    }
  }
#line 375
  fprintf(_coverage_fout, "650\n");
#line 375
  fflush(_coverage_fout);
#line 492
  return (noise_image);
}
}
#line 526 "magick/fx.c"
Image *CharcoalImage(Image const   *image , double radius , double sigma ,
                     ExceptionInfo *exception ) 
{ Image *charcoal_image ;
  Image *clone_image ;
  Image *edge_image ;

  {
#line 526
  fprintf(_coverage_fout, "668\n");
#line 526
  fflush(_coverage_fout);
#line 534
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 534
    fprintf(_coverage_fout, "651\n");
#line 534
    fflush(_coverage_fout);
#line 534
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 534U,
                  "CharcoalImage");
    }
  }
#line 526
  fprintf(_coverage_fout, "669\n");
#line 526
  fflush(_coverage_fout);
#line 535
  if (! (image->signature == 2880220587UL)) {
    {
#line 535
    fprintf(_coverage_fout, "652\n");
#line 535
    fflush(_coverage_fout);
#line 535
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 535U,
                  "CharcoalImage");
    }
  }
#line 526
  fprintf(_coverage_fout, "670\n");
#line 526
  fflush(_coverage_fout);
#line 536
  if ((int const   )image->debug != 0) {
    {
#line 537
    fprintf(_coverage_fout, "653\n");
#line 537
    fflush(_coverage_fout);
#line 537
    LogMagickEvent(1, "magick/fx.c", "CharcoalImage", 537UL, "%s",
                   image->filename);
    }
  }
#line 526
  fprintf(_coverage_fout, "671\n");
#line 526
  fflush(_coverage_fout);
#line 538
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 538
    fprintf(_coverage_fout, "654\n");
#line 538
    fflush(_coverage_fout);
#line 538
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  538U, "CharcoalImage");
    }
  }
#line 526
  fprintf(_coverage_fout, "672\n");
#line 526
  fflush(_coverage_fout);
#line 539
  if (! (exception->signature == 2880220587UL)) {
    {
#line 539
    fprintf(_coverage_fout, "655\n");
#line 539
    fflush(_coverage_fout);
#line 539
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 539U,
                  "CharcoalImage");
    }
  }
  {
#line 540
  fprintf(_coverage_fout, "656\n");
#line 540
  fflush(_coverage_fout);
#line 540
  clone_image = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 526
  fprintf(_coverage_fout, "673\n");
#line 526
  fflush(_coverage_fout);
#line 541
  if ((unsigned long )clone_image == (unsigned long )((Image *)((void *)0))) {
#line 541
    fprintf(_coverage_fout, "657\n");
#line 541
    fflush(_coverage_fout);
#line 542
    return ((Image *)((void *)0));
  }
  {
#line 543
  fprintf(_coverage_fout, "658\n");
#line 543
  fflush(_coverage_fout);
#line 543
  SetImageType(clone_image, 2);
#line 543
  fprintf(_coverage_fout, "659\n");
#line 543
  fflush(_coverage_fout);
#line 544
  edge_image = EdgeImage((Image const   *)clone_image, radius, exception);
#line 543
  fprintf(_coverage_fout, "660\n");
#line 543
  fflush(_coverage_fout);
#line 545
  clone_image = DestroyImage(clone_image);
  }
#line 526
  fprintf(_coverage_fout, "674\n");
#line 526
  fflush(_coverage_fout);
#line 546
  if ((unsigned long )edge_image == (unsigned long )((Image *)((void *)0))) {
#line 546
    fprintf(_coverage_fout, "661\n");
#line 546
    fflush(_coverage_fout);
#line 547
    return ((Image *)((void *)0));
  }
  {
#line 548
  fprintf(_coverage_fout, "662\n");
#line 548
  fflush(_coverage_fout);
#line 548
  charcoal_image = BlurImage((Image const   *)edge_image, radius, sigma,
                             exception);
#line 548
  fprintf(_coverage_fout, "663\n");
#line 548
  fflush(_coverage_fout);
#line 549
  edge_image = DestroyImage(edge_image);
  }
#line 526
  fprintf(_coverage_fout, "675\n");
#line 526
  fflush(_coverage_fout);
#line 550
  if ((unsigned long )charcoal_image == (unsigned long )((Image *)((void *)0))) {
#line 550
    fprintf(_coverage_fout, "664\n");
#line 550
    fflush(_coverage_fout);
#line 551
    return ((Image *)((void *)0));
  }
  {
#line 552
  fprintf(_coverage_fout, "665\n");
#line 552
  fflush(_coverage_fout);
#line 552
  NormalizeImage(charcoal_image);
#line 552
  fprintf(_coverage_fout, "666\n");
#line 552
  fflush(_coverage_fout);
#line 553
  NegateImage(charcoal_image, 0);
#line 552
  fprintf(_coverage_fout, "667\n");
#line 552
  fflush(_coverage_fout);
#line 554
  SetImageType(charcoal_image, 2);
  }
#line 526
  fprintf(_coverage_fout, "676\n");
#line 526
  fflush(_coverage_fout);
#line 555
  return (charcoal_image);
}
}
#line 591 "magick/fx.c"
Image *ColorizeImage(Image const   *image , char const   *opacity ,
                     PixelPacket colorize , ExceptionInfo *exception ) 
{ GeometryInfo geometry_info ;
  Image *colorize_image ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  MagickPixelPacket pixel ;
  MagickStatusType flags ;
  ViewInfo *colorize_view ;
  ViewInfo *image_view ;
  MagickBooleanType tmp ;
  MagickBooleanType sync___0 ;
  register PixelPacket const   * __restrict  p ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket const   *tmp___0 ;
  PixelPacket *tmp___1 ;
  MagickBooleanType proceed ;
  long tmp___2 ;

  {
#line 591
  fprintf(_coverage_fout, "729\n");
#line 591
  fflush(_coverage_fout);
#line 622
  if (! ((unsigned long )image != (unsigned long )((Image const   *)((void *)0)))) {
    {
#line 622
    fprintf(_coverage_fout, "677\n");
#line 622
    fflush(_coverage_fout);
#line 622
    __assert_fail("image != (const Image *) ((void *)0)", "magick/fx.c", 622U,
                  "ColorizeImage");
    }
  }
#line 591
  fprintf(_coverage_fout, "730\n");
#line 591
  fflush(_coverage_fout);
#line 623
  if (! (image->signature == 2880220587UL)) {
    {
#line 623
    fprintf(_coverage_fout, "678\n");
#line 623
    fflush(_coverage_fout);
#line 623
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 623U,
                  "ColorizeImage");
    }
  }
#line 591
  fprintf(_coverage_fout, "731\n");
#line 591
  fflush(_coverage_fout);
#line 624
  if ((int const   )image->debug != 0) {
    {
#line 625
    fprintf(_coverage_fout, "679\n");
#line 625
    fflush(_coverage_fout);
#line 625
    LogMagickEvent(1, "magick/fx.c", "ColorizeImage", 625UL, "%s",
                   image->filename);
    }
  }
#line 591
  fprintf(_coverage_fout, "732\n");
#line 591
  fflush(_coverage_fout);
#line 626
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 626
    fprintf(_coverage_fout, "680\n");
#line 626
    fflush(_coverage_fout);
#line 626
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  626U, "ColorizeImage");
    }
  }
#line 591
  fprintf(_coverage_fout, "733\n");
#line 591
  fflush(_coverage_fout);
#line 627
  if (! (exception->signature == 2880220587UL)) {
    {
#line 627
    fprintf(_coverage_fout, "681\n");
#line 627
    fflush(_coverage_fout);
#line 627
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 627U,
                  "ColorizeImage");
    }
  }
  {
#line 628
  fprintf(_coverage_fout, "682\n");
#line 628
  fflush(_coverage_fout);
#line 628
  colorize_image = CloneImage(image, (unsigned long )image->columns,
                              (unsigned long )image->rows, 1, exception);
  }
#line 591
  fprintf(_coverage_fout, "734\n");
#line 591
  fflush(_coverage_fout);
#line 630
  if ((unsigned long )colorize_image == (unsigned long )((Image *)((void *)0))) {
#line 630
    fprintf(_coverage_fout, "683\n");
#line 630
    fflush(_coverage_fout);
#line 631
    return ((Image *)((void *)0));
  }
  {
#line 632
  fprintf(_coverage_fout, "684\n");
#line 632
  fflush(_coverage_fout);
#line 632
  tmp = SetImageStorageClass(colorize_image, 1);
  }
#line 591
  fprintf(_coverage_fout, "735\n");
#line 591
  fflush(_coverage_fout);
#line 632
  if ((int )tmp == 0) {
    {
#line 634
    fprintf(_coverage_fout, "685\n");
#line 634
    fflush(_coverage_fout);
#line 634
    InheritException(exception,
                     (ExceptionInfo const   *)(& colorize_image->exception));
#line 634
    fprintf(_coverage_fout, "686\n");
#line 634
    fflush(_coverage_fout);
#line 635
    colorize_image = DestroyImage(colorize_image);
    }
#line 632
    fprintf(_coverage_fout, "687\n");
#line 632
    fflush(_coverage_fout);
#line 636
    return ((Image *)((void *)0));
  }
#line 591
  fprintf(_coverage_fout, "736\n");
#line 591
  fflush(_coverage_fout);
#line 638
  if ((unsigned long )opacity == (unsigned long )((char const   *)((void *)0))) {
#line 638
    fprintf(_coverage_fout, "688\n");
#line 638
    fflush(_coverage_fout);
#line 639
    return (colorize_image);
  }
  {
#line 643
  fprintf(_coverage_fout, "689\n");
#line 643
  fflush(_coverage_fout);
#line 643
  flags = ParseGeometry(opacity, & geometry_info);
#line 643
  fprintf(_coverage_fout, "690\n");
#line 643
  fflush(_coverage_fout);
#line 644
  pixel.red = geometry_info.rho;
#line 643
  fprintf(_coverage_fout, "691\n");
#line 643
  fflush(_coverage_fout);
#line 645
  pixel.green = geometry_info.rho;
#line 643
  fprintf(_coverage_fout, "692\n");
#line 643
  fflush(_coverage_fout);
#line 646
  pixel.blue = geometry_info.rho;
#line 643
  fprintf(_coverage_fout, "693\n");
#line 643
  fflush(_coverage_fout);
#line 647
  pixel.opacity = (double )(unsigned short)0;
  }
#line 591
  fprintf(_coverage_fout, "737\n");
#line 591
  fflush(_coverage_fout);
#line 648
  if ((flags & 8U) != 0U) {
#line 648
    fprintf(_coverage_fout, "694\n");
#line 648
    fflush(_coverage_fout);
#line 649
    pixel.green = geometry_info.sigma;
  }
#line 591
  fprintf(_coverage_fout, "738\n");
#line 591
  fflush(_coverage_fout);
#line 650
  if ((flags & 1U) != 0U) {
#line 650
    fprintf(_coverage_fout, "695\n");
#line 650
    fflush(_coverage_fout);
#line 651
    pixel.blue = geometry_info.xi;
  }
#line 591
  fprintf(_coverage_fout, "739\n");
#line 591
  fflush(_coverage_fout);
#line 652
  if ((flags & 2U) != 0U) {
#line 652
    fprintf(_coverage_fout, "696\n");
#line 652
    fflush(_coverage_fout);
#line 653
    pixel.opacity = geometry_info.psi;
  }
  {
#line 657
  fprintf(_coverage_fout, "697\n");
#line 657
  fflush(_coverage_fout);
#line 657
  status = 1;
#line 657
  fprintf(_coverage_fout, "698\n");
#line 657
  fflush(_coverage_fout);
#line 658
  progress = 0L;
#line 657
  fprintf(_coverage_fout, "699\n");
#line 657
  fflush(_coverage_fout);
#line 659
  image_view = AcquireCacheView(image);
#line 657
  fprintf(_coverage_fout, "700\n");
#line 657
  fflush(_coverage_fout);
#line 660
  colorize_view = AcquireCacheView((Image const   *)colorize_image);
#line 657
  fprintf(_coverage_fout, "701\n");
#line 657
  fflush(_coverage_fout);
#line 664
  y = 0L;
  }
#line 591
  fprintf(_coverage_fout, "740\n");
#line 591
  fflush(_coverage_fout);
#line 664
  while (1) {
#line 664
    fprintf(_coverage_fout, "718\n");
#line 664
    fflush(_coverage_fout);
#line 664
    if (! (y < (long )image->rows)) {
#line 664
      break;
    }
#line 664
    fprintf(_coverage_fout, "719\n");
#line 664
    fflush(_coverage_fout);
#line 678
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 680
    fprintf(_coverage_fout, "702\n");
#line 680
    fflush(_coverage_fout);
#line 680
    tmp___0 = GetCacheViewVirtualPixels((ViewInfo const   *)image_view, 0L, y,
                                        (unsigned long )image->columns, 1UL,
                                        exception);
#line 680
    fprintf(_coverage_fout, "703\n");
#line 680
    fflush(_coverage_fout);
#line 680
    p = (PixelPacket const   */* __restrict  */)tmp___0;
#line 680
    fprintf(_coverage_fout, "704\n");
#line 680
    fflush(_coverage_fout);
#line 681
    tmp___1 = QueueCacheViewAuthenticPixels(colorize_view, 0L, y,
                                            colorize_image->columns, 1UL,
                                            exception);
#line 680
    fprintf(_coverage_fout, "705\n");
#line 680
    fflush(_coverage_fout);
#line 681
    q = (PixelPacket */* __restrict  */)tmp___1;
    }
#line 664
    fprintf(_coverage_fout, "720\n");
#line 664
    fflush(_coverage_fout);
#line 683
    if ((unsigned long )p == (unsigned long )((PixelPacket const   *)((void *)0))) {
#line 683
      fprintf(_coverage_fout, "706\n");
#line 683
      fflush(_coverage_fout);
#line 685
      status = 0;
      goto __Cont;
    } else {
#line 683
      fprintf(_coverage_fout, "708\n");
#line 683
      fflush(_coverage_fout);
#line 683
      if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 683
        fprintf(_coverage_fout, "707\n");
#line 683
        fflush(_coverage_fout);
#line 685
        status = 0;
        goto __Cont;
      }
    }
#line 664
    fprintf(_coverage_fout, "721\n");
#line 664
    fflush(_coverage_fout);
#line 688
    x = 0L;
#line 664
    fprintf(_coverage_fout, "722\n");
#line 664
    fflush(_coverage_fout);
#line 688
    while (1) {
#line 688
      fprintf(_coverage_fout, "709\n");
#line 688
      fflush(_coverage_fout);
#line 688
      if (! (x < (long )image->columns)) {
#line 688
        break;
      }
#line 688
      fprintf(_coverage_fout, "710\n");
#line 688
      fflush(_coverage_fout);
#line 690
      q->red = (unsigned short )(((double )p->red * (100.0 - pixel.red) + (MagickRealType )colorize.red * pixel.red) / 100.0);
#line 692
      q->green = (unsigned short )(((double )p->green * (100.0 - pixel.green) + (MagickRealType )colorize.green * pixel.green) / 100.0);
#line 694
      q->blue = (unsigned short )(((double )p->blue * (100.0 - pixel.blue) + (MagickRealType )colorize.blue * pixel.blue) / 100.0);
#line 696
      q->opacity = (unsigned short )(((double )p->opacity * (100.0 - pixel.opacity) + (MagickRealType )colorize.opacity * pixel.opacity) / 100.0);
#line 698
      p ++;
#line 699
      q ++;
#line 688
      x ++;
    }
    {
#line 701
    fprintf(_coverage_fout, "711\n");
#line 701
    fflush(_coverage_fout);
#line 701
    sync___0 = SyncCacheViewAuthenticPixels(colorize_view, exception);
    }
#line 664
    fprintf(_coverage_fout, "723\n");
#line 664
    fflush(_coverage_fout);
#line 702
    if ((int )sync___0 == 0) {
#line 702
      fprintf(_coverage_fout, "712\n");
#line 702
      fflush(_coverage_fout);
#line 703
      status = 0;
    }
#line 664
    fprintf(_coverage_fout, "724\n");
#line 664
    fflush(_coverage_fout);
#line 704
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 712
      fprintf(_coverage_fout, "713\n");
#line 712
      fflush(_coverage_fout);
#line 712
      tmp___2 = progress;
#line 712
      fprintf(_coverage_fout, "714\n");
#line 712
      fflush(_coverage_fout);
#line 712
      progress ++;
#line 712
      fprintf(_coverage_fout, "715\n");
#line 712
      fflush(_coverage_fout);
#line 712
      proceed = SetImageProgress(image, "Colorize/Image", (long long )tmp___2,
                                 (unsigned long long )image->rows);
      }
#line 704
      fprintf(_coverage_fout, "717\n");
#line 704
      fflush(_coverage_fout);
#line 713
      if ((int )proceed == 0) {
#line 713
        fprintf(_coverage_fout, "716\n");
#line 713
        fflush(_coverage_fout);
#line 714
        status = 0;
      }
    }
#line 664
    fprintf(_coverage_fout, "725\n");
#line 664
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 664
    y ++;
  }
  {
#line 717
  fprintf(_coverage_fout, "726\n");
#line 717
  fflush(_coverage_fout);
#line 717
  image_view = DestroyCacheView(image_view);
#line 717
  fprintf(_coverage_fout, "727\n");
#line 717
  fflush(_coverage_fout);
#line 718
  colorize_view = DestroyCacheView(colorize_view);
  }
#line 591
  fprintf(_coverage_fout, "741\n");
#line 591
  fflush(_coverage_fout);
#line 719
  if ((int )status == 0) {
    {
#line 720
    fprintf(_coverage_fout, "728\n");
#line 720
    fflush(_coverage_fout);
#line 720
    colorize_image = DestroyImage(colorize_image);
    }
  }
#line 591
  fprintf(_coverage_fout, "742\n");
#line 591
  fflush(_coverage_fout);
#line 721
  return (colorize_image);
}
}
#line 759 "magick/fx.c"
Image *ConvolveImage(Image const   *image , unsigned long order ,
                     double const   *kernel , ExceptionInfo *exception ) 
{ Image *convolve_image ;

  {
  {
#line 765
  fprintf(_coverage_fout, "743\n");
#line 765
  fflush(_coverage_fout);
#line 765
  convolve_image = ConvolveImageChannel(image, 55, order, kernel, exception);
  }
#line 759
  fprintf(_coverage_fout, "744\n");
#line 759
  fflush(_coverage_fout);
#line 767
  return (convolve_image);
}
}
#line 770 "magick/fx.c"
Image *ConvolveImageChannel(Image const   *image , ChannelType channel ,
                            unsigned long order , double const   *kernel ,
                            ExceptionInfo *exception ) 
{ double *normal_kernel ;
  Image *convolve_image ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  MagickPixelPacket zero ;
  MagickRealType bias ;
  MagickRealType gamma___0 ;
  register long i ;
  unsigned long width ;
  ViewInfo *convolve_view ;
  ViewInfo *image_view ;
  char const   *tmp ;
  MagickBooleanType tmp___0 ;
  char format[4096] ;
  char *message ;
  long u ;
  long v ;
  register double const   *k ;
  double const   *tmp___1 ;
  void *tmp___2 ;
  char const   *tmp___3 ;
  double tmp___4 ;
  double tmp___5 ;
  double tmp___6 ;
  MagickBooleanType sync___0 ;
  register IndexPacket const   * __restrict  indexes ;
  register PixelPacket const   * __restrict  p ;
  register IndexPacket * __restrict  convolve_indexes ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket const   *tmp___7 ;
  PixelPacket *tmp___8 ;
  IndexPacket const   *tmp___9 ;
  IndexPacket *tmp___10 ;
  long j ;
  long v___0 ;
  MagickPixelPacket pixel ;
  register double const   * __restrict  k___0 ;
  register long u___0 ;
  MagickRealType alpha ;
  MagickRealType gamma___1 ;
  double tmp___11 ;
  double tmp___12 ;
  double tmp___13 ;
  MagickBooleanType proceed ;
  long tmp___14 ;
  void *tmp___15 ;

  {
#line 770
  fprintf(_coverage_fout, "915\n");
#line 770
  fflush(_coverage_fout);
#line 809
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 809
    fprintf(_coverage_fout, "745\n");
#line 809
    fflush(_coverage_fout);
#line 809
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 809U,
                  "ConvolveImageChannel");
    }
  }
#line 770
  fprintf(_coverage_fout, "916\n");
#line 770
  fflush(_coverage_fout);
#line 810
  if (! (image->signature == 2880220587UL)) {
    {
#line 810
    fprintf(_coverage_fout, "746\n");
#line 810
    fflush(_coverage_fout);
#line 810
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 810U,
                  "ConvolveImageChannel");
    }
  }
#line 770
  fprintf(_coverage_fout, "917\n");
#line 770
  fflush(_coverage_fout);
#line 811
  if ((int const   )image->debug != 0) {
    {
#line 812
    fprintf(_coverage_fout, "747\n");
#line 812
    fflush(_coverage_fout);
#line 812
    LogMagickEvent(1, "magick/fx.c", "ConvolveImageChannel", 812UL, "%s",
                   image->filename);
    }
  }
#line 770
  fprintf(_coverage_fout, "918\n");
#line 770
  fflush(_coverage_fout);
#line 813
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 813
    fprintf(_coverage_fout, "748\n");
#line 813
    fflush(_coverage_fout);
#line 813
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  813U, "ConvolveImageChannel");
    }
  }
#line 770
  fprintf(_coverage_fout, "919\n");
#line 770
  fflush(_coverage_fout);
#line 814
  if (! (exception->signature == 2880220587UL)) {
    {
#line 814
    fprintf(_coverage_fout, "749\n");
#line 814
    fflush(_coverage_fout);
#line 814
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 814U,
                  "ConvolveImageChannel");
    }
  }
#line 770
  fprintf(_coverage_fout, "920\n");
#line 770
  fflush(_coverage_fout);
#line 815
  width = order;
#line 770
  fprintf(_coverage_fout, "921\n");
#line 770
  fflush(_coverage_fout);
#line 816
  if (width % 2UL == 0UL) {
#line 816
    fprintf(_coverage_fout, "753\n");
#line 816
    fflush(_coverage_fout);
#line 817
    if ((unsigned long )"KernelWidthMustBeAnOddNumber" == (unsigned long )((char const   *)((void *)0))) {
#line 817
      fprintf(_coverage_fout, "750\n");
#line 817
      fflush(_coverage_fout);
#line 817
      tmp = "unknown";
    } else {
#line 817
      fprintf(_coverage_fout, "751\n");
#line 817
      fflush(_coverage_fout);
#line 817
      tmp = "KernelWidthMustBeAnOddNumber";
    }
    {
#line 817
    fprintf(_coverage_fout, "752\n");
#line 817
    fflush(_coverage_fout);
#line 817
    ThrowMagickException(exception, "magick/fx.c", "ConvolveImageChannel",
                         817UL, 410, tmp, "`%s\'", image->filename);
    }
#line 816
    fprintf(_coverage_fout, "754\n");
#line 816
    fflush(_coverage_fout);
#line 817
    return ((Image *)((void *)0));
  }
  {
#line 818
  fprintf(_coverage_fout, "755\n");
#line 818
  fflush(_coverage_fout);
#line 818
  convolve_image = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 770
  fprintf(_coverage_fout, "922\n");
#line 770
  fflush(_coverage_fout);
#line 819
  if ((unsigned long )convolve_image == (unsigned long )((Image *)((void *)0))) {
#line 819
    fprintf(_coverage_fout, "756\n");
#line 819
    fflush(_coverage_fout);
#line 820
    return ((Image *)((void *)0));
  }
  {
#line 821
  fprintf(_coverage_fout, "757\n");
#line 821
  fflush(_coverage_fout);
#line 821
  tmp___0 = SetImageStorageClass(convolve_image, 1);
  }
#line 770
  fprintf(_coverage_fout, "923\n");
#line 770
  fflush(_coverage_fout);
#line 821
  if ((int )tmp___0 == 0) {
    {
#line 823
    fprintf(_coverage_fout, "758\n");
#line 823
    fflush(_coverage_fout);
#line 823
    InheritException(exception,
                     (ExceptionInfo const   *)(& convolve_image->exception));
#line 823
    fprintf(_coverage_fout, "759\n");
#line 823
    fflush(_coverage_fout);
#line 824
    convolve_image = DestroyImage(convolve_image);
    }
#line 821
    fprintf(_coverage_fout, "760\n");
#line 821
    fflush(_coverage_fout);
#line 825
    return ((Image *)((void *)0));
  }
#line 770
  fprintf(_coverage_fout, "924\n");
#line 770
  fflush(_coverage_fout);
#line 827
  if ((int const   )image->debug != 0) {
    {
#line 840
    fprintf(_coverage_fout, "761\n");
#line 840
    fflush(_coverage_fout);
#line 840
    LogMagickEvent(8192, "magick/fx.c", "ConvolveImageChannel", 840UL,
                   "  ConvolveImage with %ldx%ld kernel:", width, width);
#line 840
    fprintf(_coverage_fout, "762\n");
#line 840
    fflush(_coverage_fout);
#line 842
    message = AcquireString("");
#line 840
    fprintf(_coverage_fout, "763\n");
#line 840
    fflush(_coverage_fout);
#line 843
    k = kernel;
#line 840
    fprintf(_coverage_fout, "764\n");
#line 840
    fflush(_coverage_fout);
#line 844
    v = 0L;
    }
#line 827
    fprintf(_coverage_fout, "780\n");
#line 827
    fflush(_coverage_fout);
#line 844
    while (1) {
#line 844
      fprintf(_coverage_fout, "777\n");
#line 844
      fflush(_coverage_fout);
#line 844
      if (! (v < (long )width)) {
#line 844
        break;
      }
      {
#line 846
      fprintf(_coverage_fout, "765\n");
#line 846
      fflush(_coverage_fout);
#line 846
      *message = (char )'\000';
#line 846
      fprintf(_coverage_fout, "766\n");
#line 846
      fflush(_coverage_fout);
#line 847
      FormatMagickString(format, 4096UL, "%ld: ", v);
#line 846
      fprintf(_coverage_fout, "767\n");
#line 846
      fflush(_coverage_fout);
#line 848
      ConcatenateString(& message, (char const   *)(format));
#line 846
      fprintf(_coverage_fout, "768\n");
#line 846
      fflush(_coverage_fout);
#line 849
      u = 0L;
      }
#line 844
      fprintf(_coverage_fout, "778\n");
#line 844
      fflush(_coverage_fout);
#line 849
      while (1) {
#line 849
        fprintf(_coverage_fout, "774\n");
#line 849
        fflush(_coverage_fout);
#line 849
        if (! (u < (long )width)) {
#line 849
          break;
        }
        {
#line 851
        fprintf(_coverage_fout, "769\n");
#line 851
        fflush(_coverage_fout);
#line 851
        tmp___1 = k;
#line 851
        fprintf(_coverage_fout, "770\n");
#line 851
        fflush(_coverage_fout);
#line 851
        k ++;
#line 851
        fprintf(_coverage_fout, "771\n");
#line 851
        fflush(_coverage_fout);
#line 851
        FormatMagickString(format, 4096UL, "%+f ", *tmp___1);
#line 851
        fprintf(_coverage_fout, "772\n");
#line 851
        fflush(_coverage_fout);
#line 852
        ConcatenateString(& message, (char const   *)(format));
#line 851
        fprintf(_coverage_fout, "773\n");
#line 851
        fflush(_coverage_fout);
#line 849
        u ++;
        }
      }
      {
#line 854
      fprintf(_coverage_fout, "775\n");
#line 854
      fflush(_coverage_fout);
#line 854
      LogMagickEvent(8192, "magick/fx.c", "ConvolveImageChannel", 854UL, "%s",
                     message);
#line 854
      fprintf(_coverage_fout, "776\n");
#line 854
      fflush(_coverage_fout);
#line 844
      v ++;
      }
    }
    {
#line 856
    fprintf(_coverage_fout, "779\n");
#line 856
    fflush(_coverage_fout);
#line 856
    message = DestroyString(message);
    }
  }
  {
#line 861
  fprintf(_coverage_fout, "781\n");
#line 861
  fflush(_coverage_fout);
#line 861
  tmp___2 = AcquireQuantumMemory(width * width, sizeof(*normal_kernel));
#line 861
  fprintf(_coverage_fout, "782\n");
#line 861
  fflush(_coverage_fout);
#line 861
  normal_kernel = (double *)tmp___2;
  }
#line 770
  fprintf(_coverage_fout, "925\n");
#line 770
  fflush(_coverage_fout);
#line 863
  if ((unsigned long )normal_kernel == (unsigned long )((double *)((void *)0))) {
    {
#line 865
    fprintf(_coverage_fout, "783\n");
#line 865
    fflush(_coverage_fout);
#line 865
    convolve_image = DestroyImage(convolve_image);
    }
#line 863
    fprintf(_coverage_fout, "787\n");
#line 863
    fflush(_coverage_fout);
#line 866
    if ((unsigned long )"MemoryAllocationFailed" == (unsigned long )((char const   *)((void *)0))) {
#line 866
      fprintf(_coverage_fout, "784\n");
#line 866
      fflush(_coverage_fout);
#line 866
      tmp___3 = "unknown";
    } else {
#line 866
      fprintf(_coverage_fout, "785\n");
#line 866
      fflush(_coverage_fout);
#line 866
      tmp___3 = "MemoryAllocationFailed";
    }
    {
#line 866
    fprintf(_coverage_fout, "786\n");
#line 866
    fflush(_coverage_fout);
#line 866
    ThrowMagickException(exception, "magick/fx.c", "ConvolveImageChannel",
                         866UL, 400, tmp___3, "`%s\'", image->filename);
    }
#line 863
    fprintf(_coverage_fout, "788\n");
#line 863
    fflush(_coverage_fout);
#line 866
    return ((Image *)((void *)0));
  }
#line 770
  fprintf(_coverage_fout, "926\n");
#line 770
  fflush(_coverage_fout);
#line 868
  gamma___0 = 0.0;
#line 869
  i = 0L;
#line 770
  fprintf(_coverage_fout, "927\n");
#line 770
  fflush(_coverage_fout);
#line 869
  while (1) {
#line 869
    fprintf(_coverage_fout, "789\n");
#line 869
    fflush(_coverage_fout);
#line 869
    if (! (i < (long )(width * width))) {
#line 869
      break;
    }
#line 869
    fprintf(_coverage_fout, "790\n");
#line 869
    fflush(_coverage_fout);
#line 870
    gamma___0 += (MagickRealType )*(kernel + i);
#line 869
    i ++;
  }
  {
#line 871
  fprintf(_coverage_fout, "791\n");
#line 871
  fflush(_coverage_fout);
#line 871
  tmp___6 = fabs(gamma___0);
  }
#line 770
  fprintf(_coverage_fout, "928\n");
#line 770
  fflush(_coverage_fout);
#line 871
  if (tmp___6 <= 1.0e-10) {
#line 871
    fprintf(_coverage_fout, "792\n");
#line 871
    fflush(_coverage_fout);
#line 871
    tmp___5 = 1.0;
  } else {
#line 871
    fprintf(_coverage_fout, "793\n");
#line 871
    fflush(_coverage_fout);
#line 871
    tmp___5 = gamma___0;
  }
#line 770
  fprintf(_coverage_fout, "929\n");
#line 770
  fflush(_coverage_fout);
#line 871
  gamma___0 = 1.0 / tmp___5;
#line 872
  i = 0L;
#line 770
  fprintf(_coverage_fout, "930\n");
#line 770
  fflush(_coverage_fout);
#line 872
  while (1) {
#line 872
    fprintf(_coverage_fout, "794\n");
#line 872
    fflush(_coverage_fout);
#line 872
    if (! (i < (long )(width * width))) {
#line 872
      break;
    }
#line 872
    fprintf(_coverage_fout, "795\n");
#line 872
    fflush(_coverage_fout);
#line 873
    *(normal_kernel + i) = gamma___0 * (MagickRealType )*(kernel + i);
#line 872
    i ++;
  }
  {
#line 877
  fprintf(_coverage_fout, "796\n");
#line 877
  fflush(_coverage_fout);
#line 877
  status = 1;
#line 877
  fprintf(_coverage_fout, "797\n");
#line 877
  fflush(_coverage_fout);
#line 878
  progress = 0L;
#line 877
  fprintf(_coverage_fout, "798\n");
#line 877
  fflush(_coverage_fout);
#line 879
  GetMagickPixelPacket(image, & zero);
#line 877
  fprintf(_coverage_fout, "799\n");
#line 877
  fflush(_coverage_fout);
#line 880
  bias = (double )image->bias;
#line 877
  fprintf(_coverage_fout, "800\n");
#line 877
  fflush(_coverage_fout);
#line 881
  image_view = AcquireCacheView(image);
#line 877
  fprintf(_coverage_fout, "801\n");
#line 877
  fflush(_coverage_fout);
#line 882
  convolve_view = AcquireCacheView((Image const   *)convolve_image);
#line 877
  fprintf(_coverage_fout, "802\n");
#line 877
  fflush(_coverage_fout);
#line 886
  y = 0L;
  }
#line 770
  fprintf(_coverage_fout, "931\n");
#line 770
  fflush(_coverage_fout);
#line 886
  while (1) {
#line 886
    fprintf(_coverage_fout, "902\n");
#line 886
    fflush(_coverage_fout);
#line 886
    if (! (y < (long )image->rows)) {
#line 886
      break;
    }
#line 886
    fprintf(_coverage_fout, "903\n");
#line 886
    fflush(_coverage_fout);
#line 906
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 908
    fprintf(_coverage_fout, "803\n");
#line 908
    fflush(_coverage_fout);
#line 908
    tmp___7 = GetCacheViewVirtualPixels((ViewInfo const   *)image_view,
                                        - ((long )width / 2L),
                                        y - (long )(width / 2UL),
                                        (unsigned long )(image->columns + (unsigned long const   )width),
                                        width, exception);
#line 908
    fprintf(_coverage_fout, "804\n");
#line 908
    fflush(_coverage_fout);
#line 908
    p = (PixelPacket const   */* __restrict  */)tmp___7;
#line 908
    fprintf(_coverage_fout, "805\n");
#line 908
    fflush(_coverage_fout);
#line 910
    tmp___8 = GetCacheViewAuthenticPixels(convolve_view, 0L, y,
                                          convolve_image->columns, 1UL,
                                          exception);
#line 908
    fprintf(_coverage_fout, "806\n");
#line 908
    fflush(_coverage_fout);
#line 910
    q = (PixelPacket */* __restrict  */)tmp___8;
    }
#line 886
    fprintf(_coverage_fout, "904\n");
#line 886
    fflush(_coverage_fout);
#line 912
    if ((unsigned long )p == (unsigned long )((PixelPacket const   *)((void *)0))) {
#line 912
      fprintf(_coverage_fout, "807\n");
#line 912
      fflush(_coverage_fout);
#line 914
      status = 0;
      goto __Cont;
    } else {
#line 912
      fprintf(_coverage_fout, "809\n");
#line 912
      fflush(_coverage_fout);
#line 912
      if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 912
        fprintf(_coverage_fout, "808\n");
#line 912
        fflush(_coverage_fout);
#line 914
        status = 0;
        goto __Cont;
      }
    }
    {
#line 917
    fprintf(_coverage_fout, "810\n");
#line 917
    fflush(_coverage_fout);
#line 917
    tmp___9 = GetCacheViewVirtualIndexQueue((ViewInfo const   *)image_view);
#line 917
    fprintf(_coverage_fout, "811\n");
#line 917
    fflush(_coverage_fout);
#line 917
    indexes = (IndexPacket const   */* __restrict  */)tmp___9;
#line 917
    fprintf(_coverage_fout, "812\n");
#line 917
    fflush(_coverage_fout);
#line 918
    tmp___10 = GetCacheViewAuthenticIndexQueue(convolve_view);
#line 917
    fprintf(_coverage_fout, "813\n");
#line 917
    fflush(_coverage_fout);
#line 918
    convolve_indexes = (IndexPacket */* __restrict  */)tmp___10;
#line 917
    fprintf(_coverage_fout, "814\n");
#line 917
    fflush(_coverage_fout);
#line 919
    x = 0L;
    }
#line 886
    fprintf(_coverage_fout, "905\n");
#line 886
    fflush(_coverage_fout);
#line 919
    while (1) {
#line 919
      fprintf(_coverage_fout, "891\n");
#line 919
      fflush(_coverage_fout);
#line 919
      if (! (x < (long )image->columns)) {
#line 919
        break;
      }
#line 919
      fprintf(_coverage_fout, "892\n");
#line 919
      fflush(_coverage_fout);
#line 934
      pixel = zero;
#line 935
      k___0 = (double const   */* __restrict  */)normal_kernel;
#line 936
      j = 0L;
#line 919
      fprintf(_coverage_fout, "893\n");
#line 919
      fflush(_coverage_fout);
#line 937
      if (((int )channel & 8) == 0) {
        goto _L;
      } else {
#line 937
        fprintf(_coverage_fout, "890\n");
#line 937
        fflush(_coverage_fout);
#line 937
        if ((int const   )image->matte == 0) {
#line 937
          fprintf(_coverage_fout, "843\n");
#line 937
          fflush(_coverage_fout);
          _L: /* CIL Label */ 
#line 939
          v___0 = 0L;
#line 937
          fprintf(_coverage_fout, "844\n");
#line 937
          fflush(_coverage_fout);
#line 939
          while (1) {
#line 939
            fprintf(_coverage_fout, "817\n");
#line 939
            fflush(_coverage_fout);
#line 939
            if (! (v___0 < (long )width)) {
#line 939
              break;
            }
#line 939
            fprintf(_coverage_fout, "818\n");
#line 939
            fflush(_coverage_fout);
#line 941
            u___0 = 0L;
#line 939
            fprintf(_coverage_fout, "819\n");
#line 939
            fflush(_coverage_fout);
#line 941
            while (1) {
#line 941
              fprintf(_coverage_fout, "815\n");
#line 941
              fflush(_coverage_fout);
#line 941
              if (! (u___0 < (long )width)) {
#line 941
                break;
              }
#line 941
              fprintf(_coverage_fout, "816\n");
#line 941
              fflush(_coverage_fout);
#line 943
              pixel.red += (MagickRealType )(*k___0 * (double const   )((p + u___0) + j)->red);
#line 944
              pixel.green += (MagickRealType )(*k___0 * (double const   )((p + u___0) + j)->green);
#line 945
              pixel.blue += (MagickRealType )(*k___0 * (double const   )((p + u___0) + j)->blue);
#line 946
              k___0 ++;
#line 941
              u___0 ++;
            }
#line 939
            fprintf(_coverage_fout, "820\n");
#line 939
            fflush(_coverage_fout);
#line 948
            j = (long )((unsigned long const   )j + (image->columns + (unsigned long const   )width));
#line 939
            v___0 ++;
          }
#line 937
          fprintf(_coverage_fout, "845\n");
#line 937
          fflush(_coverage_fout);
#line 950
          if (((int )channel & 1) != 0) {
            {
#line 951
            fprintf(_coverage_fout, "821\n");
#line 951
            fflush(_coverage_fout);
#line 951
            q->red = RoundToQuantum(pixel.red + bias);
            }
          }
#line 937
          fprintf(_coverage_fout, "846\n");
#line 937
          fflush(_coverage_fout);
#line 952
          if (((int )channel & 2) != 0) {
            {
#line 953
            fprintf(_coverage_fout, "822\n");
#line 953
            fflush(_coverage_fout);
#line 953
            q->green = RoundToQuantum(pixel.green + bias);
            }
          }
#line 937
          fprintf(_coverage_fout, "847\n");
#line 937
          fflush(_coverage_fout);
#line 954
          if (((int )channel & 4) != 0) {
            {
#line 955
            fprintf(_coverage_fout, "823\n");
#line 955
            fflush(_coverage_fout);
#line 955
            q->blue = RoundToQuantum(pixel.blue + bias);
            }
          }
#line 937
          fprintf(_coverage_fout, "848\n");
#line 937
          fflush(_coverage_fout);
#line 956
          if (((int )channel & 8) != 0) {
#line 956
            fprintf(_coverage_fout, "831\n");
#line 956
            fflush(_coverage_fout);
#line 958
            k___0 = (double const   */* __restrict  */)normal_kernel;
#line 959
            j = 0L;
#line 960
            v___0 = 0L;
#line 956
            fprintf(_coverage_fout, "832\n");
#line 956
            fflush(_coverage_fout);
#line 960
            while (1) {
#line 960
              fprintf(_coverage_fout, "826\n");
#line 960
              fflush(_coverage_fout);
#line 960
              if (! (v___0 < (long )width)) {
#line 960
                break;
              }
#line 960
              fprintf(_coverage_fout, "827\n");
#line 960
              fflush(_coverage_fout);
#line 962
              u___0 = 0L;
#line 960
              fprintf(_coverage_fout, "828\n");
#line 960
              fflush(_coverage_fout);
#line 962
              while (1) {
#line 962
                fprintf(_coverage_fout, "824\n");
#line 962
                fflush(_coverage_fout);
#line 962
                if (! (u___0 < (long )width)) {
#line 962
                  break;
                }
#line 962
                fprintf(_coverage_fout, "825\n");
#line 962
                fflush(_coverage_fout);
#line 964
                pixel.opacity += (MagickRealType )(*k___0 * (double const   )((p + u___0) + j)->opacity);
#line 965
                k___0 ++;
#line 962
                u___0 ++;
              }
#line 960
              fprintf(_coverage_fout, "829\n");
#line 960
              fflush(_coverage_fout);
#line 967
              j = (long )((unsigned long const   )j + (image->columns + (unsigned long const   )width));
#line 960
              v___0 ++;
            }
            {
#line 969
            fprintf(_coverage_fout, "830\n");
#line 969
            fflush(_coverage_fout);
#line 969
            q->opacity = RoundToQuantum(pixel.opacity + bias);
            }
          }
#line 937
          fprintf(_coverage_fout, "849\n");
#line 937
          fflush(_coverage_fout);
#line 971
          if (((int )channel & 32) != 0) {
#line 971
            fprintf(_coverage_fout, "842\n");
#line 971
            fflush(_coverage_fout);
#line 971
            if ((int const   )image->colorspace == 12) {
#line 971
              fprintf(_coverage_fout, "840\n");
#line 971
              fflush(_coverage_fout);
#line 974
              k___0 = (double const   */* __restrict  */)normal_kernel;
#line 975
              j = 0L;
#line 976
              v___0 = 0L;
#line 971
              fprintf(_coverage_fout, "841\n");
#line 971
              fflush(_coverage_fout);
#line 976
              while (1) {
#line 976
                fprintf(_coverage_fout, "835\n");
#line 976
                fflush(_coverage_fout);
#line 976
                if (! (v___0 < (long )width)) {
#line 976
                  break;
                }
#line 976
                fprintf(_coverage_fout, "836\n");
#line 976
                fflush(_coverage_fout);
#line 978
                u___0 = 0L;
#line 976
                fprintf(_coverage_fout, "837\n");
#line 976
                fflush(_coverage_fout);
#line 978
                while (1) {
#line 978
                  fprintf(_coverage_fout, "833\n");
#line 978
                  fflush(_coverage_fout);
#line 978
                  if (! (u___0 < (long )width)) {
#line 978
                    break;
                  }
#line 978
                  fprintf(_coverage_fout, "834\n");
#line 978
                  fflush(_coverage_fout);
#line 980
                  pixel.index += (MagickRealType )(*k___0 * (double const   )*(indexes + ((x + u___0) + j)));
#line 981
                  k___0 ++;
#line 978
                  u___0 ++;
                }
#line 976
                fprintf(_coverage_fout, "838\n");
#line 976
                fflush(_coverage_fout);
#line 983
                j = (long )((unsigned long const   )j + (image->columns + (unsigned long const   )width));
#line 976
                v___0 ++;
              }
              {
#line 985
              fprintf(_coverage_fout, "839\n");
#line 985
              fflush(_coverage_fout);
#line 985
              *(convolve_indexes + x) = RoundToQuantum(pixel.index + bias);
              }
            }
          }
        } else {
#line 937
          fprintf(_coverage_fout, "881\n");
#line 937
          fflush(_coverage_fout);
#line 994
          gamma___1 = 0.0;
#line 995
          v___0 = 0L;
#line 937
          fprintf(_coverage_fout, "882\n");
#line 937
          fflush(_coverage_fout);
#line 995
          while (1) {
#line 995
            fprintf(_coverage_fout, "852\n");
#line 995
            fflush(_coverage_fout);
#line 995
            if (! (v___0 < (long )width)) {
#line 995
              break;
            }
#line 995
            fprintf(_coverage_fout, "853\n");
#line 995
            fflush(_coverage_fout);
#line 997
            u___0 = 0L;
#line 995
            fprintf(_coverage_fout, "854\n");
#line 995
            fflush(_coverage_fout);
#line 997
            while (1) {
#line 997
              fprintf(_coverage_fout, "850\n");
#line 997
              fflush(_coverage_fout);
#line 997
              if (! (u___0 < (long )width)) {
#line 997
                break;
              }
#line 997
              fprintf(_coverage_fout, "851\n");
#line 997
              fflush(_coverage_fout);
#line 999
              alpha = (1.0 / (double )65535UL) * (double )(65535UL - (unsigned long )((p + u___0) + j)->opacity);
#line 1001
              pixel.red += (MagickRealType )((*k___0 * (double const   )alpha) * (double const   )((p + u___0) + j)->red);
#line 1002
              pixel.green += (MagickRealType )((*k___0 * (double const   )alpha) * (double const   )((p + u___0) + j)->green);
#line 1003
              pixel.blue += (MagickRealType )((*k___0 * (double const   )alpha) * (double const   )((p + u___0) + j)->blue);
#line 1004
              pixel.opacity += (MagickRealType )(*k___0 * (double const   )((p + u___0) + j)->opacity);
#line 1005
              gamma___1 += (MagickRealType )(*k___0 * (double const   )alpha);
#line 1006
              k___0 ++;
#line 997
              u___0 ++;
            }
#line 995
            fprintf(_coverage_fout, "855\n");
#line 995
            fflush(_coverage_fout);
#line 1008
            j = (long )((unsigned long const   )j + (image->columns + (unsigned long const   )width));
#line 995
            v___0 ++;
          }
          {
#line 1010
          fprintf(_coverage_fout, "856\n");
#line 1010
          fflush(_coverage_fout);
#line 1010
          tmp___13 = fabs(gamma___1);
          }
#line 937
          fprintf(_coverage_fout, "883\n");
#line 937
          fflush(_coverage_fout);
#line 1010
          if (tmp___13 <= 1.0e-10) {
#line 1010
            fprintf(_coverage_fout, "857\n");
#line 1010
            fflush(_coverage_fout);
#line 1010
            tmp___12 = 1.0;
          } else {
#line 1010
            fprintf(_coverage_fout, "858\n");
#line 1010
            fflush(_coverage_fout);
#line 1010
            tmp___12 = gamma___1;
          }
#line 937
          fprintf(_coverage_fout, "884\n");
#line 937
          fflush(_coverage_fout);
#line 1010
          gamma___1 = 1.0 / tmp___12;
#line 937
          fprintf(_coverage_fout, "885\n");
#line 937
          fflush(_coverage_fout);
#line 1011
          if (((int )channel & 1) != 0) {
            {
#line 1012
            fprintf(_coverage_fout, "859\n");
#line 1012
            fflush(_coverage_fout);
#line 1012
            q->red = RoundToQuantum(gamma___1 * pixel.red + bias);
            }
          }
#line 937
          fprintf(_coverage_fout, "886\n");
#line 937
          fflush(_coverage_fout);
#line 1013
          if (((int )channel & 2) != 0) {
            {
#line 1014
            fprintf(_coverage_fout, "860\n");
#line 1014
            fflush(_coverage_fout);
#line 1014
            q->green = RoundToQuantum(gamma___1 * pixel.green + bias);
            }
          }
#line 937
          fprintf(_coverage_fout, "887\n");
#line 937
          fflush(_coverage_fout);
#line 1015
          if (((int )channel & 4) != 0) {
            {
#line 1016
            fprintf(_coverage_fout, "861\n");
#line 1016
            fflush(_coverage_fout);
#line 1016
            q->blue = RoundToQuantum(gamma___1 * pixel.blue + bias);
            }
          }
#line 937
          fprintf(_coverage_fout, "888\n");
#line 937
          fflush(_coverage_fout);
#line 1017
          if (((int )channel & 8) != 0) {
#line 1017
            fprintf(_coverage_fout, "869\n");
#line 1017
            fflush(_coverage_fout);
#line 1019
            k___0 = (double const   */* __restrict  */)normal_kernel;
#line 1020
            j = 0L;
#line 1021
            v___0 = 0L;
#line 1017
            fprintf(_coverage_fout, "870\n");
#line 1017
            fflush(_coverage_fout);
#line 1021
            while (1) {
#line 1021
              fprintf(_coverage_fout, "864\n");
#line 1021
              fflush(_coverage_fout);
#line 1021
              if (! (v___0 < (long )width)) {
#line 1021
                break;
              }
#line 1021
              fprintf(_coverage_fout, "865\n");
#line 1021
              fflush(_coverage_fout);
#line 1023
              u___0 = 0L;
#line 1021
              fprintf(_coverage_fout, "866\n");
#line 1021
              fflush(_coverage_fout);
#line 1023
              while (1) {
#line 1023
                fprintf(_coverage_fout, "862\n");
#line 1023
                fflush(_coverage_fout);
#line 1023
                if (! (u___0 < (long )width)) {
#line 1023
                  break;
                }
#line 1023
                fprintf(_coverage_fout, "863\n");
#line 1023
                fflush(_coverage_fout);
#line 1025
                pixel.opacity += (MagickRealType )(*k___0 * (double const   )((p + u___0) + j)->opacity);
#line 1026
                k___0 ++;
#line 1023
                u___0 ++;
              }
#line 1021
              fprintf(_coverage_fout, "867\n");
#line 1021
              fflush(_coverage_fout);
#line 1028
              j = (long )((unsigned long const   )j + (image->columns + (unsigned long const   )width));
#line 1021
              v___0 ++;
            }
            {
#line 1030
            fprintf(_coverage_fout, "868\n");
#line 1030
            fflush(_coverage_fout);
#line 1030
            q->opacity = RoundToQuantum(pixel.opacity + bias);
            }
          }
#line 937
          fprintf(_coverage_fout, "889\n");
#line 937
          fflush(_coverage_fout);
#line 1032
          if (((int )channel & 32) != 0) {
#line 1032
            fprintf(_coverage_fout, "880\n");
#line 1032
            fflush(_coverage_fout);
#line 1032
            if ((int const   )image->colorspace == 12) {
#line 1032
              fprintf(_coverage_fout, "878\n");
#line 1032
              fflush(_coverage_fout);
#line 1035
              k___0 = (double const   */* __restrict  */)normal_kernel;
#line 1036
              j = 0L;
#line 1037
              v___0 = 0L;
#line 1032
              fprintf(_coverage_fout, "879\n");
#line 1032
              fflush(_coverage_fout);
#line 1037
              while (1) {
#line 1037
                fprintf(_coverage_fout, "873\n");
#line 1037
                fflush(_coverage_fout);
#line 1037
                if (! (v___0 < (long )width)) {
#line 1037
                  break;
                }
#line 1037
                fprintf(_coverage_fout, "874\n");
#line 1037
                fflush(_coverage_fout);
#line 1039
                u___0 = 0L;
#line 1037
                fprintf(_coverage_fout, "875\n");
#line 1037
                fflush(_coverage_fout);
#line 1039
                while (1) {
#line 1039
                  fprintf(_coverage_fout, "871\n");
#line 1039
                  fflush(_coverage_fout);
#line 1039
                  if (! (u___0 < (long )width)) {
#line 1039
                    break;
                  }
#line 1039
                  fprintf(_coverage_fout, "872\n");
#line 1039
                  fflush(_coverage_fout);
#line 1041
                  alpha = (1.0 / (double )65535UL) * (double )(65535UL - (unsigned long )((p + u___0) + j)->opacity);
#line 1043
                  pixel.index += (MagickRealType )((*k___0 * (double const   )alpha) * (double const   )*(indexes + ((x + u___0) + j)));
#line 1044
                  k___0 ++;
#line 1039
                  u___0 ++;
                }
#line 1037
                fprintf(_coverage_fout, "876\n");
#line 1037
                fflush(_coverage_fout);
#line 1046
                j = (long )((unsigned long const   )j + (image->columns + (unsigned long const   )width));
#line 1037
                v___0 ++;
              }
              {
#line 1048
              fprintf(_coverage_fout, "877\n");
#line 1048
              fflush(_coverage_fout);
#line 1048
              *(convolve_indexes + x) = RoundToQuantum(gamma___1 * pixel.index + bias);
              }
            }
          }
        }
      }
#line 919
      fprintf(_coverage_fout, "894\n");
#line 919
      fflush(_coverage_fout);
#line 1051
      p ++;
#line 1052
      q ++;
#line 919
      x ++;
    }
    {
#line 1054
    fprintf(_coverage_fout, "895\n");
#line 1054
    fflush(_coverage_fout);
#line 1054
    sync___0 = SyncCacheViewAuthenticPixels(convolve_view, exception);
    }
#line 886
    fprintf(_coverage_fout, "906\n");
#line 886
    fflush(_coverage_fout);
#line 1055
    if ((int )sync___0 == 0) {
#line 1055
      fprintf(_coverage_fout, "896\n");
#line 1055
      fflush(_coverage_fout);
#line 1056
      status = 0;
    }
#line 886
    fprintf(_coverage_fout, "907\n");
#line 886
    fflush(_coverage_fout);
#line 1057
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 1065
      fprintf(_coverage_fout, "897\n");
#line 1065
      fflush(_coverage_fout);
#line 1065
      tmp___14 = progress;
#line 1065
      fprintf(_coverage_fout, "898\n");
#line 1065
      fflush(_coverage_fout);
#line 1065
      progress ++;
#line 1065
      fprintf(_coverage_fout, "899\n");
#line 1065
      fflush(_coverage_fout);
#line 1065
      proceed = SetImageProgress(image, "Convolve/Image", (long long )tmp___14,
                                 (unsigned long long )image->rows);
      }
#line 1057
      fprintf(_coverage_fout, "901\n");
#line 1057
      fflush(_coverage_fout);
#line 1066
      if ((int )proceed == 0) {
#line 1066
        fprintf(_coverage_fout, "900\n");
#line 1066
        fflush(_coverage_fout);
#line 1067
        status = 0;
      }
    }
#line 886
    fprintf(_coverage_fout, "908\n");
#line 886
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 886
    y ++;
  }
  {
#line 1070
  fprintf(_coverage_fout, "909\n");
#line 1070
  fflush(_coverage_fout);
#line 1070
  convolve_image->type = (enum __anonenum_ImageType_89 )image->type;
#line 1070
  fprintf(_coverage_fout, "910\n");
#line 1070
  fflush(_coverage_fout);
#line 1071
  convolve_view = DestroyCacheView(convolve_view);
#line 1070
  fprintf(_coverage_fout, "911\n");
#line 1070
  fflush(_coverage_fout);
#line 1072
  image_view = DestroyCacheView(image_view);
#line 1070
  fprintf(_coverage_fout, "912\n");
#line 1070
  fflush(_coverage_fout);
#line 1073
  tmp___15 = RelinquishMagickMemory((void *)normal_kernel);
#line 1070
  fprintf(_coverage_fout, "913\n");
#line 1070
  fflush(_coverage_fout);
#line 1073
  normal_kernel = (double *)tmp___15;
  }
#line 770
  fprintf(_coverage_fout, "932\n");
#line 770
  fflush(_coverage_fout);
#line 1074
  if ((int )status == 0) {
    {
#line 1075
    fprintf(_coverage_fout, "914\n");
#line 1075
    fflush(_coverage_fout);
#line 1075
    convolve_image = DestroyImage(convolve_image);
    }
  }
#line 770
  fprintf(_coverage_fout, "933\n");
#line 770
  fflush(_coverage_fout);
#line 1076
  return (convolve_image);
}
}
#line 1101 "magick/fx.c"
FxInfo *DestroyFxInfo(FxInfo *fx_info ) 
{ register long i ;
  unsigned long tmp ;
  void *tmp___0 ;
  void *tmp___1 ;

  {
  {
#line 1106
  fprintf(_coverage_fout, "934\n");
#line 1106
  fflush(_coverage_fout);
#line 1106
  fx_info->exception = DestroyExceptionInfo(fx_info->exception);
#line 1106
  fprintf(_coverage_fout, "935\n");
#line 1106
  fflush(_coverage_fout);
#line 1107
  fx_info->expression = DestroyString(fx_info->expression);
#line 1106
  fprintf(_coverage_fout, "936\n");
#line 1106
  fflush(_coverage_fout);
#line 1108
  fx_info->symbols = DestroySplayTree(fx_info->symbols);
#line 1106
  fprintf(_coverage_fout, "937\n");
#line 1106
  fflush(_coverage_fout);
#line 1109
  fx_info->colors = DestroySplayTree(fx_info->colors);
#line 1106
  fprintf(_coverage_fout, "938\n");
#line 1106
  fflush(_coverage_fout);
#line 1110
  i = 0L;
  }
#line 1101
  fprintf(_coverage_fout, "947\n");
#line 1101
  fflush(_coverage_fout);
#line 1110
  while (1) {
    {
#line 1110
    fprintf(_coverage_fout, "939\n");
#line 1110
    fflush(_coverage_fout);
#line 1110
    tmp = GetImageListLength(fx_info->images);
    }
#line 1110
    fprintf(_coverage_fout, "942\n");
#line 1110
    fflush(_coverage_fout);
#line 1110
    if (! (i < (long )tmp)) {
#line 1110
      break;
    }
    {
#line 1111
    fprintf(_coverage_fout, "940\n");
#line 1111
    fflush(_coverage_fout);
#line 1111
    *(fx_info->resample_filter + i) = DestroyResampleFilter(*(fx_info->resample_filter + i));
#line 1111
    fprintf(_coverage_fout, "941\n");
#line 1111
    fflush(_coverage_fout);
#line 1110
    i ++;
    }
  }
  {
#line 1113
  fprintf(_coverage_fout, "943\n");
#line 1113
  fflush(_coverage_fout);
#line 1113
  tmp___0 = RelinquishMagickMemory((void *)fx_info->resample_filter);
#line 1113
  fprintf(_coverage_fout, "944\n");
#line 1113
  fflush(_coverage_fout);
#line 1113
  fx_info->resample_filter = (ResampleFilter **)tmp___0;
#line 1113
  fprintf(_coverage_fout, "945\n");
#line 1113
  fflush(_coverage_fout);
#line 1115
  tmp___1 = RelinquishMagickMemory((void *)fx_info);
#line 1113
  fprintf(_coverage_fout, "946\n");
#line 1113
  fflush(_coverage_fout);
#line 1115
  fx_info = (FxInfo *)tmp___1;
  }
#line 1101
  fprintf(_coverage_fout, "948\n");
#line 1101
  fflush(_coverage_fout);
#line 1116
  return (fx_info);
}
}
#line 1158 "magick/fx.c"
__inline static double MagickMax(double x , double y ) 
{ 

  {
#line 1158
  fprintf(_coverage_fout, "950\n");
#line 1158
  fflush(_coverage_fout);
#line 1160
  if (x > y) {
#line 1160
    fprintf(_coverage_fout, "949\n");
#line 1160
    fflush(_coverage_fout);
#line 1161
    return (x);
  }
#line 1158
  fprintf(_coverage_fout, "951\n");
#line 1158
  fflush(_coverage_fout);
#line 1162
  return (y);
}
}
#line 1165 "magick/fx.c"
__inline static double MagickMin(double x , double y ) 
{ 

  {
#line 1165
  fprintf(_coverage_fout, "953\n");
#line 1165
  fflush(_coverage_fout);
#line 1167
  if (x < y) {
#line 1167
    fprintf(_coverage_fout, "952\n");
#line 1167
    fflush(_coverage_fout);
#line 1168
    return (x);
  }
#line 1165
  fprintf(_coverage_fout, "954\n");
#line 1165
  fflush(_coverage_fout);
#line 1169
  return (y);
}
}
#line 1172 "magick/fx.c"
static Quantum ApplyEvaluateOperator(Quantum pixel , MagickEvaluateOperator op ,
                                     MagickRealType value ) 
{ MagickRealType result ;
  double tmp ;
  double tmp___0 ;
  double tmp___1 ;
  Quantum tmp___2 ;
  Quantum tmp___3 ;
  Quantum tmp___4 ;
  double tmp___5 ;
  double tmp___6 ;
  double tmp___7 ;
  double tmp___8 ;
  Quantum tmp___9 ;
  Quantum tmp___10 ;
  double tmp___11 ;
  double tmp___12 ;
  unsigned long tmp___13 ;
  int tmp___14 ;
  unsigned long tmp___15 ;
  Quantum tmp___16 ;
  Quantum tmp___17 ;

  {
#line 1172
  fprintf(_coverage_fout, "1009\n");
#line 1172
  fflush(_coverage_fout);
#line 1178
  result = 0.0;
#line 1179
  switch ((int )op) {
  case 0: 
#line 1182
  break;
#line 1179
  fprintf(_coverage_fout, "991\n");
#line 1179
  fflush(_coverage_fout);
  case 1: 
#line 1185
  result = (MagickRealType )pixel + value;
#line 1186
  break;
  case 26: 
  {
#line 1198
  fprintf(_coverage_fout, "955\n");
#line 1198
  fflush(_coverage_fout);
#line 1198
  result = (MagickRealType )pixel + value;
#line 1198
  fprintf(_coverage_fout, "956\n");
#line 1198
  fflush(_coverage_fout);
#line 1199
  tmp = floor(result / (MagickRealType )65536UL);
#line 1198
  fprintf(_coverage_fout, "957\n");
#line 1198
  fflush(_coverage_fout);
#line 1199
  result -= (double )65536UL * tmp;
  }
#line 1200
  break;
#line 1179
  fprintf(_coverage_fout, "992\n");
#line 1179
  fflush(_coverage_fout);
  case 2: 
#line 1204
  result = (double )((unsigned long )pixel & (unsigned long )(value + 0.5));
#line 1206
  break;
  case 24: 
  {
#line 1210
  fprintf(_coverage_fout, "958\n");
#line 1210
  fflush(_coverage_fout);
#line 1210
  tmp___0 = cos((((2.0 * 3.14159265358979323846264338327950288419716939937510) * (1.0 / (double )65535UL)) * (double )pixel) * value);
#line 1210
  fprintf(_coverage_fout, "959\n");
#line 1210
  fflush(_coverage_fout);
#line 1210
  result = (double )65535UL * (0.5 * tmp___0 + 0.5);
  }
#line 1212
  break;
#line 1179
  fprintf(_coverage_fout, "993\n");
#line 1179
  fflush(_coverage_fout);
  case 3: 
#line 1216
  if (value == 0.0) {
#line 1216
    fprintf(_coverage_fout, "960\n");
#line 1216
    fflush(_coverage_fout);
#line 1216
    tmp___1 = 1.0;
  } else {
#line 1216
    fprintf(_coverage_fout, "961\n");
#line 1216
    fflush(_coverage_fout);
#line 1216
    tmp___1 = value;
  }
#line 1179
  fprintf(_coverage_fout, "994\n");
#line 1179
  fflush(_coverage_fout);
#line 1216
  result = (double )pixel / tmp___1;
#line 1217
  break;
  case 18: 
  {
#line 1221
  fprintf(_coverage_fout, "962\n");
#line 1221
  fflush(_coverage_fout);
#line 1221
  tmp___2 = GenerateNoise(pixel, 2, value);
#line 1221
  fprintf(_coverage_fout, "963\n");
#line 1221
  fflush(_coverage_fout);
#line 1221
  result = (double )tmp___2;
  }
#line 1222
  break;
  case 19: 
  {
#line 1226
  fprintf(_coverage_fout, "964\n");
#line 1226
  fflush(_coverage_fout);
#line 1226
  tmp___3 = GenerateNoise(pixel, 4, value);
#line 1226
  fprintf(_coverage_fout, "965\n");
#line 1226
  fflush(_coverage_fout);
#line 1226
  result = (double )tmp___3;
  }
#line 1227
  break;
  case 20: 
  {
#line 1231
  fprintf(_coverage_fout, "966\n");
#line 1231
  fflush(_coverage_fout);
#line 1231
  tmp___4 = GenerateNoise(pixel, 5, value);
#line 1231
  fprintf(_coverage_fout, "967\n");
#line 1231
  fflush(_coverage_fout);
#line 1231
  result = (double )tmp___4;
  }
#line 1232
  break;
#line 1179
  fprintf(_coverage_fout, "995\n");
#line 1179
  fflush(_coverage_fout);
  case 4: 
#line 1236
  result = (double )((unsigned long )pixel << (unsigned long )(value + 0.5));
#line 1238
  break;
  case 14: 
  {
#line 1242
  fprintf(_coverage_fout, "968\n");
#line 1242
  fflush(_coverage_fout);
#line 1242
  tmp___5 = log(((1.0 / (double )65535UL) * value) * (double )pixel + 1.0);
#line 1242
  fprintf(_coverage_fout, "969\n");
#line 1242
  fflush(_coverage_fout);
#line 1242
  tmp___6 = log(value + 1.0);
#line 1242
  fprintf(_coverage_fout, "970\n");
#line 1242
  fflush(_coverage_fout);
#line 1242
  result = ((double )65535UL * tmp___5) / tmp___6;
  }
#line 1244
  break;
  case 5: 
  {
#line 1248
  fprintf(_coverage_fout, "971\n");
#line 1248
  fflush(_coverage_fout);
#line 1248
  tmp___7 = MagickMax((double )pixel, value);
#line 1248
  fprintf(_coverage_fout, "972\n");
#line 1248
  fflush(_coverage_fout);
#line 1248
  result = tmp___7;
  }
#line 1249
  break;
  case 6: 
  {
#line 1253
  fprintf(_coverage_fout, "973\n");
#line 1253
  fflush(_coverage_fout);
#line 1253
  tmp___8 = MagickMin((double )pixel, value);
#line 1253
  fprintf(_coverage_fout, "974\n");
#line 1253
  fflush(_coverage_fout);
#line 1253
  result = tmp___8;
  }
#line 1254
  break;
  case 21: 
  {
#line 1258
  fprintf(_coverage_fout, "975\n");
#line 1258
  fflush(_coverage_fout);
#line 1258
  tmp___9 = GenerateNoise(pixel, 3, value);
#line 1258
  fprintf(_coverage_fout, "976\n");
#line 1258
  fflush(_coverage_fout);
#line 1258
  result = (double )tmp___9;
  }
#line 1260
  break;
#line 1179
  fprintf(_coverage_fout, "996\n");
#line 1179
  fflush(_coverage_fout);
  case 7: 
#line 1264
  result = value * (MagickRealType )pixel;
#line 1265
  break;
#line 1179
  fprintf(_coverage_fout, "997\n");
#line 1179
  fflush(_coverage_fout);
  case 8: 
#line 1269
  result = (double )((unsigned long )pixel | (unsigned long )(value + 0.5));
#line 1271
  break;
  case 22: 
  {
#line 1275
  fprintf(_coverage_fout, "977\n");
#line 1275
  fflush(_coverage_fout);
#line 1275
  tmp___10 = GenerateNoise(pixel, 6, value);
#line 1275
  fprintf(_coverage_fout, "978\n");
#line 1275
  fflush(_coverage_fout);
#line 1275
  result = (double )tmp___10;
  }
#line 1276
  break;
  case 13: 
  {
#line 1280
  fprintf(_coverage_fout, "979\n");
#line 1280
  fflush(_coverage_fout);
#line 1280
  tmp___11 = pow((1.0 / (double )65535UL) * (double )pixel, value);
#line 1280
  fprintf(_coverage_fout, "980\n");
#line 1280
  fflush(_coverage_fout);
#line 1280
  result = (double )65535UL * tmp___11;
  }
#line 1282
  break;
#line 1179
  fprintf(_coverage_fout, "998\n");
#line 1179
  fflush(_coverage_fout);
  case 9: 
#line 1286
  result = (double )((unsigned long )pixel >> (unsigned long )(value + 0.5));
#line 1288
  break;
#line 1179
  fprintf(_coverage_fout, "999\n");
#line 1179
  fflush(_coverage_fout);
  case 10: 
#line 1292
  result = value;
#line 1293
  break;
  case 25: 
  {
#line 1297
  fprintf(_coverage_fout, "981\n");
#line 1297
  fflush(_coverage_fout);
#line 1297
  tmp___12 = sin((((2.0 * 3.14159265358979323846264338327950288419716939937510) * (1.0 / (double )65535UL)) * (double )pixel) * value);
#line 1297
  fprintf(_coverage_fout, "982\n");
#line 1297
  fflush(_coverage_fout);
#line 1297
  result = (double )65535UL * (0.5 * tmp___12 + 0.5);
  }
#line 1299
  break;
#line 1179
  fprintf(_coverage_fout, "1000\n");
#line 1179
  fflush(_coverage_fout);
  case 11: 
#line 1303
  result = (MagickRealType )pixel - value;
#line 1304
  break;
#line 1179
  fprintf(_coverage_fout, "1001\n");
#line 1179
  fflush(_coverage_fout);
  case 15: 
#line 1308
  if ((double )pixel <= value) {
#line 1308
    fprintf(_coverage_fout, "983\n");
#line 1308
    fflush(_coverage_fout);
#line 1308
    tmp___13 = 0UL;
  } else {
#line 1308
    fprintf(_coverage_fout, "984\n");
#line 1308
    fflush(_coverage_fout);
#line 1308
    tmp___13 = 65535UL;
  }
#line 1179
  fprintf(_coverage_fout, "1002\n");
#line 1179
  fflush(_coverage_fout);
#line 1308
  result = (double )tmp___13;
#line 1310
  break;
#line 1179
  fprintf(_coverage_fout, "1003\n");
#line 1179
  fflush(_coverage_fout);
  case 16: 
#line 1314
  if ((double )pixel <= value) {
#line 1314
    fprintf(_coverage_fout, "985\n");
#line 1314
    fflush(_coverage_fout);
#line 1314
    tmp___14 = 0;
  } else {
#line 1314
    fprintf(_coverage_fout, "986\n");
#line 1314
    fflush(_coverage_fout);
#line 1314
    tmp___14 = (int )pixel;
  }
#line 1179
  fprintf(_coverage_fout, "1004\n");
#line 1179
  fflush(_coverage_fout);
#line 1314
  result = (double )tmp___14;
#line 1315
  break;
#line 1179
  fprintf(_coverage_fout, "1005\n");
#line 1179
  fflush(_coverage_fout);
  case 17: 
#line 1319
  if ((double )pixel > value) {
#line 1319
    fprintf(_coverage_fout, "987\n");
#line 1319
    fflush(_coverage_fout);
#line 1319
    tmp___15 = 65535UL;
  } else {
#line 1319
    fprintf(_coverage_fout, "988\n");
#line 1319
    fflush(_coverage_fout);
#line 1319
    tmp___15 = (unsigned long )pixel;
  }
#line 1179
  fprintf(_coverage_fout, "1006\n");
#line 1179
  fflush(_coverage_fout);
#line 1319
  result = (double )tmp___15;
#line 1321
  break;
  case 23: 
  {
#line 1325
  fprintf(_coverage_fout, "989\n");
#line 1325
  fflush(_coverage_fout);
#line 1325
  tmp___16 = GenerateNoise(pixel, 1, value);
#line 1325
  fprintf(_coverage_fout, "990\n");
#line 1325
  fflush(_coverage_fout);
#line 1325
  result = (double )tmp___16;
  }
#line 1326
  break;
#line 1179
  fprintf(_coverage_fout, "1007\n");
#line 1179
  fflush(_coverage_fout);
  case 12: 
#line 1330
  result = (double )((unsigned long )pixel ^ (unsigned long )(value + 0.5));
#line 1332
  break;
  }
  {
#line 1335
  fprintf(_coverage_fout, "1008\n");
#line 1335
  fflush(_coverage_fout);
#line 1335
  tmp___17 = RoundToQuantum(result);
  }
#line 1172
  fprintf(_coverage_fout, "1010\n");
#line 1172
  fflush(_coverage_fout);
#line 1335
  return (tmp___17);
}
}
#line 1338 "magick/fx.c"
MagickBooleanType EvaluateImage(Image *image , MagickEvaluateOperator op ,
                                double value , ExceptionInfo *exception ) 
{ MagickBooleanType status ;

  {
  {
#line 1344
  fprintf(_coverage_fout, "1011\n");
#line 1344
  fflush(_coverage_fout);
#line 1344
  status = EvaluateImageChannel(image, 63, op, value, exception);
  }
#line 1338
  fprintf(_coverage_fout, "1012\n");
#line 1338
  fflush(_coverage_fout);
#line 1345
  return (status);
}
}
#line 1348 "magick/fx.c"
MagickBooleanType EvaluateImageChannel(Image *image , ChannelType channel ,
                                       MagickEvaluateOperator op ,
                                       double value , ExceptionInfo *exception ) 
{ long progress ;
  long y ;
  MagickBooleanType status ;
  ViewInfo *image_view ;
  MagickBooleanType tmp ;
  register IndexPacket * __restrict  indexes ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket *tmp___0 ;
  IndexPacket *tmp___1 ;
  Quantum tmp___2 ;
  Quantum tmp___3 ;
  MagickBooleanType tmp___4 ;
  MagickBooleanType proceed ;
  long tmp___5 ;

  {
#line 1348
  fprintf(_coverage_fout, "1063\n");
#line 1348
  fflush(_coverage_fout);
#line 1364
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 1364
    fprintf(_coverage_fout, "1013\n");
#line 1364
    fflush(_coverage_fout);
#line 1364
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 1364U,
                  "EvaluateImageChannel");
    }
  }
#line 1348
  fprintf(_coverage_fout, "1064\n");
#line 1348
  fflush(_coverage_fout);
#line 1365
  if (! (image->signature == 2880220587UL)) {
    {
#line 1365
    fprintf(_coverage_fout, "1014\n");
#line 1365
    fflush(_coverage_fout);
#line 1365
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 1365U,
                  "EvaluateImageChannel");
    }
  }
#line 1348
  fprintf(_coverage_fout, "1065\n");
#line 1348
  fflush(_coverage_fout);
#line 1366
  if ((int )image->debug != 0) {
    {
#line 1367
    fprintf(_coverage_fout, "1015\n");
#line 1367
    fflush(_coverage_fout);
#line 1367
    LogMagickEvent(1, "magick/fx.c", "EvaluateImageChannel", 1367UL, "%s",
                   image->filename);
    }
  }
#line 1348
  fprintf(_coverage_fout, "1066\n");
#line 1348
  fflush(_coverage_fout);
#line 1368
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 1368
    fprintf(_coverage_fout, "1016\n");
#line 1368
    fflush(_coverage_fout);
#line 1368
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  1368U, "EvaluateImageChannel");
    }
  }
#line 1348
  fprintf(_coverage_fout, "1067\n");
#line 1348
  fflush(_coverage_fout);
#line 1369
  if (! (exception->signature == 2880220587UL)) {
    {
#line 1369
    fprintf(_coverage_fout, "1017\n");
#line 1369
    fflush(_coverage_fout);
#line 1369
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 1369U,
                  "EvaluateImageChannel");
    }
  }
  {
#line 1370
  fprintf(_coverage_fout, "1018\n");
#line 1370
  fflush(_coverage_fout);
#line 1370
  tmp = SetImageStorageClass(image, 1);
  }
#line 1348
  fprintf(_coverage_fout, "1068\n");
#line 1348
  fflush(_coverage_fout);
#line 1370
  if ((int )tmp == 0) {
    {
#line 1372
    fprintf(_coverage_fout, "1019\n");
#line 1372
    fflush(_coverage_fout);
#line 1372
    InheritException(exception, (ExceptionInfo const   *)(& image->exception));
    }
#line 1370
    fprintf(_coverage_fout, "1020\n");
#line 1370
    fflush(_coverage_fout);
#line 1373
    return (0);
  }
  {
#line 1375
  fprintf(_coverage_fout, "1021\n");
#line 1375
  fflush(_coverage_fout);
#line 1375
  status = 1;
#line 1375
  fprintf(_coverage_fout, "1022\n");
#line 1375
  fflush(_coverage_fout);
#line 1376
  progress = 0L;
#line 1375
  fprintf(_coverage_fout, "1023\n");
#line 1375
  fflush(_coverage_fout);
#line 1377
  image_view = AcquireCacheView((Image const   *)image);
#line 1375
  fprintf(_coverage_fout, "1024\n");
#line 1375
  fflush(_coverage_fout);
#line 1381
  y = 0L;
  }
#line 1348
  fprintf(_coverage_fout, "1069\n");
#line 1348
  fflush(_coverage_fout);
#line 1381
  while (1) {
#line 1381
    fprintf(_coverage_fout, "1055\n");
#line 1381
    fflush(_coverage_fout);
#line 1381
    if (! (y < (long )image->rows)) {
#line 1381
      break;
    }
#line 1381
    fprintf(_coverage_fout, "1056\n");
#line 1381
    fflush(_coverage_fout);
#line 1392
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 1394
    fprintf(_coverage_fout, "1025\n");
#line 1394
    fflush(_coverage_fout);
#line 1394
    tmp___0 = GetCacheViewAuthenticPixels(image_view, 0L, y, image->columns,
                                          1UL, exception);
#line 1394
    fprintf(_coverage_fout, "1026\n");
#line 1394
    fflush(_coverage_fout);
#line 1394
    q = (PixelPacket */* __restrict  */)tmp___0;
    }
#line 1381
    fprintf(_coverage_fout, "1057\n");
#line 1381
    fflush(_coverage_fout);
#line 1395
    if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 1395
      fprintf(_coverage_fout, "1027\n");
#line 1395
      fflush(_coverage_fout);
#line 1397
      status = 0;
      goto __Cont;
    }
    {
#line 1400
    fprintf(_coverage_fout, "1028\n");
#line 1400
    fflush(_coverage_fout);
#line 1400
    tmp___1 = GetCacheViewAuthenticIndexQueue(image_view);
#line 1400
    fprintf(_coverage_fout, "1029\n");
#line 1400
    fflush(_coverage_fout);
#line 1400
    indexes = (IndexPacket */* __restrict  */)tmp___1;
#line 1400
    fprintf(_coverage_fout, "1030\n");
#line 1400
    fflush(_coverage_fout);
#line 1401
    x = 0L;
    }
#line 1381
    fprintf(_coverage_fout, "1058\n");
#line 1381
    fflush(_coverage_fout);
#line 1401
    while (1) {
#line 1401
      fprintf(_coverage_fout, "1041\n");
#line 1401
      fflush(_coverage_fout);
#line 1401
      if (! (x < (long )image->columns)) {
#line 1401
        break;
      }
#line 1401
      fprintf(_coverage_fout, "1042\n");
#line 1401
      fflush(_coverage_fout);
#line 1403
      if (((int )channel & 1) != 0) {
        {
#line 1404
        fprintf(_coverage_fout, "1031\n");
#line 1404
        fflush(_coverage_fout);
#line 1404
        q->red = ApplyEvaluateOperator(q->red, op, value);
        }
      }
#line 1401
      fprintf(_coverage_fout, "1043\n");
#line 1401
      fflush(_coverage_fout);
#line 1405
      if (((int )channel & 2) != 0) {
        {
#line 1406
        fprintf(_coverage_fout, "1032\n");
#line 1406
        fflush(_coverage_fout);
#line 1406
        q->green = ApplyEvaluateOperator(q->green, op, value);
        }
      }
#line 1401
      fprintf(_coverage_fout, "1044\n");
#line 1401
      fflush(_coverage_fout);
#line 1407
      if (((int )channel & 4) != 0) {
        {
#line 1408
        fprintf(_coverage_fout, "1033\n");
#line 1408
        fflush(_coverage_fout);
#line 1408
        q->blue = ApplyEvaluateOperator(q->blue, op, value);
        }
      }
#line 1401
      fprintf(_coverage_fout, "1045\n");
#line 1401
      fflush(_coverage_fout);
#line 1409
      if (((int )channel & 8) != 0) {
#line 1409
        fprintf(_coverage_fout, "1037\n");
#line 1409
        fflush(_coverage_fout);
#line 1411
        if ((int )image->matte == 0) {
          {
#line 1412
          fprintf(_coverage_fout, "1034\n");
#line 1412
          fflush(_coverage_fout);
#line 1412
          q->opacity = ApplyEvaluateOperator(q->opacity, op, value);
          }
        } else {
          {
#line 1414
          fprintf(_coverage_fout, "1035\n");
#line 1414
          fflush(_coverage_fout);
#line 1414
          tmp___2 = ApplyEvaluateOperator((unsigned short )(65535UL - (unsigned long )q->opacity),
                                          op, value);
#line 1414
          fprintf(_coverage_fout, "1036\n");
#line 1414
          fflush(_coverage_fout);
#line 1414
          q->opacity = (unsigned short )(65535 - (int )tmp___2);
          }
        }
      }
#line 1401
      fprintf(_coverage_fout, "1046\n");
#line 1401
      fflush(_coverage_fout);
#line 1417
      if (((int )channel & 32) != 0) {
#line 1417
        fprintf(_coverage_fout, "1040\n");
#line 1417
        fflush(_coverage_fout);
#line 1417
        if ((unsigned long )indexes != (unsigned long )((IndexPacket *)((void *)0))) {
          {
#line 1418
          fprintf(_coverage_fout, "1038\n");
#line 1418
          fflush(_coverage_fout);
#line 1418
          tmp___3 = ApplyEvaluateOperator(*(indexes + x), op, value);
#line 1418
          fprintf(_coverage_fout, "1039\n");
#line 1418
          fflush(_coverage_fout);
#line 1418
          *(indexes + x) = tmp___3;
          }
        }
      }
#line 1401
      fprintf(_coverage_fout, "1047\n");
#line 1401
      fflush(_coverage_fout);
#line 1419
      q ++;
#line 1401
      x ++;
    }
    {
#line 1421
    fprintf(_coverage_fout, "1048\n");
#line 1421
    fflush(_coverage_fout);
#line 1421
    tmp___4 = SyncCacheViewAuthenticPixels(image_view, exception);
    }
#line 1381
    fprintf(_coverage_fout, "1059\n");
#line 1381
    fflush(_coverage_fout);
#line 1421
    if ((int )tmp___4 == 0) {
#line 1421
      fprintf(_coverage_fout, "1049\n");
#line 1421
      fflush(_coverage_fout);
#line 1422
      status = 0;
    }
#line 1381
    fprintf(_coverage_fout, "1060\n");
#line 1381
    fflush(_coverage_fout);
#line 1423
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 1431
      fprintf(_coverage_fout, "1050\n");
#line 1431
      fflush(_coverage_fout);
#line 1431
      tmp___5 = progress;
#line 1431
      fprintf(_coverage_fout, "1051\n");
#line 1431
      fflush(_coverage_fout);
#line 1431
      progress ++;
#line 1431
      fprintf(_coverage_fout, "1052\n");
#line 1431
      fflush(_coverage_fout);
#line 1431
      proceed = SetImageProgress((Image const   *)image, "Evaluate/Image ",
                                 (long long )tmp___5,
                                 (unsigned long long )image->rows);
      }
#line 1423
      fprintf(_coverage_fout, "1054\n");
#line 1423
      fflush(_coverage_fout);
#line 1432
      if ((int )proceed == 0) {
#line 1432
        fprintf(_coverage_fout, "1053\n");
#line 1432
        fflush(_coverage_fout);
#line 1433
        status = 0;
      }
    }
#line 1381
    fprintf(_coverage_fout, "1061\n");
#line 1381
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 1381
    y ++;
  }
  {
#line 1436
  fprintf(_coverage_fout, "1062\n");
#line 1436
  fflush(_coverage_fout);
#line 1436
  image_view = DestroyCacheView(image_view);
  }
#line 1348
  fprintf(_coverage_fout, "1070\n");
#line 1348
  fflush(_coverage_fout);
#line 1437
  return (status);
}
}
#line 1480 "magick/fx.c"
static Quantum ApplyFunction(Quantum pixel , MagickFunction function ,
                             unsigned long number_parameters ,
                             MagickRealType const   *parameters ,
                             ExceptionInfo *exception ) 
{ MagickRealType result ;
  register long i ;
  double freq ;
  double phase ;
  double ampl ;
  double bias ;
  double tmp ;
  double width ;
  double range ;
  double center ;
  double bias___0 ;
  double tmp___0 ;
  double width___0 ;
  double range___0 ;
  double center___0 ;
  double bias___1 ;
  double tmp___1 ;
  Quantum tmp___2 ;

  {
#line 1480
  fprintf(_coverage_fout, "1125\n");
#line 1480
  fflush(_coverage_fout);
#line 1491
  result = 0.0;
#line 1492
  switch ((int )function) {
#line 1492
  fprintf(_coverage_fout, "1106\n");
#line 1492
  fflush(_coverage_fout);
  case 1: 
#line 1501
  result = 0.0;
#line 1502
  i = 0L;
#line 1492
  fprintf(_coverage_fout, "1107\n");
#line 1492
  fflush(_coverage_fout);
#line 1502
  while (1) {
#line 1502
    fprintf(_coverage_fout, "1071\n");
#line 1502
    fflush(_coverage_fout);
#line 1502
    if (! (i < (long )number_parameters)) {
#line 1502
      break;
    }
#line 1502
    fprintf(_coverage_fout, "1072\n");
#line 1502
    fflush(_coverage_fout);
#line 1503
    result = (result * (1.0 / (double )65535UL)) * (MagickRealType )pixel + (MagickRealType )*(parameters + i);
#line 1502
    i ++;
  }
#line 1492
  fprintf(_coverage_fout, "1108\n");
#line 1492
  fflush(_coverage_fout);
#line 1504
  result *= (MagickRealType )65535UL;
#line 1505
  break;
#line 1492
  fprintf(_coverage_fout, "1109\n");
#line 1492
  fflush(_coverage_fout);
  case 2: 
#line 1513
  if (number_parameters >= 1UL) {
#line 1513
    fprintf(_coverage_fout, "1073\n");
#line 1513
    fflush(_coverage_fout);
#line 1513
    freq = (double )*(parameters + 0);
  } else {
#line 1513
    fprintf(_coverage_fout, "1074\n");
#line 1513
    fflush(_coverage_fout);
#line 1513
    freq = 1.0;
  }
#line 1492
  fprintf(_coverage_fout, "1110\n");
#line 1492
  fflush(_coverage_fout);
#line 1514
  if (number_parameters >= 2UL) {
#line 1514
    fprintf(_coverage_fout, "1075\n");
#line 1514
    fflush(_coverage_fout);
#line 1514
    phase = (double )*(parameters + 1);
  } else {
#line 1514
    fprintf(_coverage_fout, "1076\n");
#line 1514
    fflush(_coverage_fout);
#line 1514
    phase = 0.0;
  }
#line 1492
  fprintf(_coverage_fout, "1111\n");
#line 1492
  fflush(_coverage_fout);
#line 1515
  if (number_parameters >= 3UL) {
#line 1515
    fprintf(_coverage_fout, "1077\n");
#line 1515
    fflush(_coverage_fout);
#line 1515
    ampl = (double )*(parameters + 2);
  } else {
#line 1515
    fprintf(_coverage_fout, "1078\n");
#line 1515
    fflush(_coverage_fout);
#line 1515
    ampl = 0.5;
  }
#line 1492
  fprintf(_coverage_fout, "1112\n");
#line 1492
  fflush(_coverage_fout);
#line 1516
  if (number_parameters >= 4UL) {
#line 1516
    fprintf(_coverage_fout, "1079\n");
#line 1516
    fflush(_coverage_fout);
#line 1516
    bias = (double )*(parameters + 3);
  } else {
#line 1516
    fprintf(_coverage_fout, "1080\n");
#line 1516
    fflush(_coverage_fout);
#line 1516
    bias = 0.5;
  }
  {
#line 1517
  fprintf(_coverage_fout, "1081\n");
#line 1517
  fflush(_coverage_fout);
#line 1517
  tmp = sin((2.0 * 3.14159265358979323846264338327950288419716939937510) * ((freq * (1.0 / (double )65535UL)) * (double )pixel + phase / 360.0));
#line 1517
  fprintf(_coverage_fout, "1082\n");
#line 1517
  fflush(_coverage_fout);
#line 1517
  result = (double )65535UL * (ampl * tmp + bias);
  }
#line 1519
  break;
#line 1492
  fprintf(_coverage_fout, "1113\n");
#line 1492
  fflush(_coverage_fout);
  case 3: 
#line 1527
  if (number_parameters >= 1UL) {
#line 1527
    fprintf(_coverage_fout, "1083\n");
#line 1527
    fflush(_coverage_fout);
#line 1527
    width = (double )*(parameters + 0);
  } else {
#line 1527
    fprintf(_coverage_fout, "1084\n");
#line 1527
    fflush(_coverage_fout);
#line 1527
    width = 1.0;
  }
#line 1492
  fprintf(_coverage_fout, "1114\n");
#line 1492
  fflush(_coverage_fout);
#line 1528
  if (number_parameters >= 3UL) {
#line 1528
    fprintf(_coverage_fout, "1085\n");
#line 1528
    fflush(_coverage_fout);
#line 1528
    range = (double )*(parameters + 1);
  } else {
#line 1528
    fprintf(_coverage_fout, "1086\n");
#line 1528
    fflush(_coverage_fout);
#line 1528
    range = 1.0;
  }
#line 1492
  fprintf(_coverage_fout, "1115\n");
#line 1492
  fflush(_coverage_fout);
#line 1529
  if (number_parameters >= 2UL) {
#line 1529
    fprintf(_coverage_fout, "1087\n");
#line 1529
    fflush(_coverage_fout);
#line 1529
    center = (double )*(parameters + 2);
  } else {
#line 1529
    fprintf(_coverage_fout, "1088\n");
#line 1529
    fflush(_coverage_fout);
#line 1529
    center = 0.5;
  }
#line 1492
  fprintf(_coverage_fout, "1116\n");
#line 1492
  fflush(_coverage_fout);
#line 1530
  if (number_parameters >= 4UL) {
#line 1530
    fprintf(_coverage_fout, "1089\n");
#line 1530
    fflush(_coverage_fout);
#line 1530
    bias___0 = (double )*(parameters + 3);
  } else {
#line 1530
    fprintf(_coverage_fout, "1090\n");
#line 1530
    fflush(_coverage_fout);
#line 1530
    bias___0 = 0.5;
  }
#line 1492
  fprintf(_coverage_fout, "1117\n");
#line 1492
  fflush(_coverage_fout);
#line 1531
  result = (2.0 / width) * ((1.0 / (double )65535UL) * (double )pixel - center);
#line 1492
  fprintf(_coverage_fout, "1118\n");
#line 1492
  fflush(_coverage_fout);
#line 1532
  if (result <= - 1.0) {
#line 1532
    fprintf(_coverage_fout, "1091\n");
#line 1532
    fflush(_coverage_fout);
#line 1533
    result = 1.0e-10 - 1.0;
  }
#line 1492
  fprintf(_coverage_fout, "1119\n");
#line 1492
  fflush(_coverage_fout);
#line 1534
  if (result >= 1.0) {
#line 1534
    fprintf(_coverage_fout, "1092\n");
#line 1534
    fflush(_coverage_fout);
#line 1535
    result = 1.0 - 1.0e-10;
  }
  {
#line 1536
  fprintf(_coverage_fout, "1093\n");
#line 1536
  fflush(_coverage_fout);
#line 1536
  tmp___0 = asin(result);
#line 1536
  fprintf(_coverage_fout, "1094\n");
#line 1536
  fflush(_coverage_fout);
#line 1536
  result = (double )65535UL * ((range / 3.14159265358979323846264338327950288419716939937510) * tmp___0 + bias___0);
  }
#line 1538
  break;
#line 1492
  fprintf(_coverage_fout, "1120\n");
#line 1492
  fflush(_coverage_fout);
  case 4: 
#line 1546
  if (number_parameters >= 1UL) {
#line 1546
    fprintf(_coverage_fout, "1095\n");
#line 1546
    fflush(_coverage_fout);
#line 1546
    width___0 = (double )*(parameters + 0);
  } else {
#line 1546
    fprintf(_coverage_fout, "1096\n");
#line 1546
    fflush(_coverage_fout);
#line 1546
    width___0 = 1.0;
  }
#line 1492
  fprintf(_coverage_fout, "1121\n");
#line 1492
  fflush(_coverage_fout);
#line 1547
  if (number_parameters >= 3UL) {
#line 1547
    fprintf(_coverage_fout, "1097\n");
#line 1547
    fflush(_coverage_fout);
#line 1547
    range___0 = (double )*(parameters + 1);
  } else {
#line 1547
    fprintf(_coverage_fout, "1098\n");
#line 1547
    fflush(_coverage_fout);
#line 1547
    range___0 = 1.0;
  }
#line 1492
  fprintf(_coverage_fout, "1122\n");
#line 1492
  fflush(_coverage_fout);
#line 1548
  if (number_parameters >= 2UL) {
#line 1548
    fprintf(_coverage_fout, "1099\n");
#line 1548
    fflush(_coverage_fout);
#line 1548
    center___0 = (double )*(parameters + 2);
  } else {
#line 1548
    fprintf(_coverage_fout, "1100\n");
#line 1548
    fflush(_coverage_fout);
#line 1548
    center___0 = 0.5;
  }
#line 1492
  fprintf(_coverage_fout, "1123\n");
#line 1492
  fflush(_coverage_fout);
#line 1549
  if (number_parameters >= 4UL) {
#line 1549
    fprintf(_coverage_fout, "1101\n");
#line 1549
    fflush(_coverage_fout);
#line 1549
    bias___1 = (double )*(parameters + 3);
  } else {
#line 1549
    fprintf(_coverage_fout, "1102\n");
#line 1549
    fflush(_coverage_fout);
#line 1549
    bias___1 = 0.5;
  }
  {
#line 1550
  fprintf(_coverage_fout, "1103\n");
#line 1550
  fflush(_coverage_fout);
#line 1550
  result = (2.0 * width___0) * ((1.0 / (double )65535UL) * (double )pixel - center___0);
#line 1550
  fprintf(_coverage_fout, "1104\n");
#line 1550
  fflush(_coverage_fout);
#line 1551
  tmp___1 = atan(result);
#line 1550
  fprintf(_coverage_fout, "1105\n");
#line 1550
  fflush(_coverage_fout);
#line 1551
  result = (double )65535UL * ((range___0 / 3.14159265358979323846264338327950288419716939937510) * tmp___1 + bias___1);
  }
#line 1553
  break;
  case 0: 
#line 1556
  break;
  }
  {
#line 1558
  fprintf(_coverage_fout, "1124\n");
#line 1558
  fflush(_coverage_fout);
#line 1558
  tmp___2 = RoundToQuantum(result);
  }
#line 1480
  fprintf(_coverage_fout, "1126\n");
#line 1480
  fflush(_coverage_fout);
#line 1558
  return (tmp___2);
}
}
#line 1561 "magick/fx.c"
MagickBooleanType FunctionImage(Image *image , MagickFunction function ,
                                unsigned long number_parameters ,
                                double const   *parameters ,
                                ExceptionInfo *exception ) 
{ MagickBooleanType status ;

  {
  {
#line 1568
  fprintf(_coverage_fout, "1127\n");
#line 1568
  fflush(_coverage_fout);
#line 1568
  status = FunctionImageChannel(image, 63, function, number_parameters,
                                parameters, exception);
  }
#line 1561
  fprintf(_coverage_fout, "1128\n");
#line 1561
  fflush(_coverage_fout);
#line 1570
  return (status);
}
}
#line 1573 "magick/fx.c"
MagickBooleanType FunctionImageChannel(Image *image , ChannelType channel ,
                                       MagickFunction function ,
                                       unsigned long number_parameters ,
                                       double const   *parameters ,
                                       ExceptionInfo *exception ) 
{ long progress ;
  long y ;
  MagickBooleanType status ;
  ViewInfo *image_view ;
  MagickBooleanType tmp ;
  register IndexPacket * __restrict  indexes ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket *tmp___0 ;
  IndexPacket *tmp___1 ;
  Quantum tmp___2 ;
  Quantum tmp___3 ;
  MagickBooleanType tmp___4 ;
  MagickBooleanType proceed ;
  long tmp___5 ;

  {
#line 1573
  fprintf(_coverage_fout, "1179\n");
#line 1573
  fflush(_coverage_fout);
#line 1590
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 1590
    fprintf(_coverage_fout, "1129\n");
#line 1590
    fflush(_coverage_fout);
#line 1590
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 1590U,
                  "FunctionImageChannel");
    }
  }
#line 1573
  fprintf(_coverage_fout, "1180\n");
#line 1573
  fflush(_coverage_fout);
#line 1591
  if (! (image->signature == 2880220587UL)) {
    {
#line 1591
    fprintf(_coverage_fout, "1130\n");
#line 1591
    fflush(_coverage_fout);
#line 1591
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 1591U,
                  "FunctionImageChannel");
    }
  }
#line 1573
  fprintf(_coverage_fout, "1181\n");
#line 1573
  fflush(_coverage_fout);
#line 1592
  if ((int )image->debug != 0) {
    {
#line 1593
    fprintf(_coverage_fout, "1131\n");
#line 1593
    fflush(_coverage_fout);
#line 1593
    LogMagickEvent(1, "magick/fx.c", "FunctionImageChannel", 1593UL, "%s",
                   image->filename);
    }
  }
#line 1573
  fprintf(_coverage_fout, "1182\n");
#line 1573
  fflush(_coverage_fout);
#line 1594
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 1594
    fprintf(_coverage_fout, "1132\n");
#line 1594
    fflush(_coverage_fout);
#line 1594
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  1594U, "FunctionImageChannel");
    }
  }
#line 1573
  fprintf(_coverage_fout, "1183\n");
#line 1573
  fflush(_coverage_fout);
#line 1595
  if (! (exception->signature == 2880220587UL)) {
    {
#line 1595
    fprintf(_coverage_fout, "1133\n");
#line 1595
    fflush(_coverage_fout);
#line 1595
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 1595U,
                  "FunctionImageChannel");
    }
  }
  {
#line 1596
  fprintf(_coverage_fout, "1134\n");
#line 1596
  fflush(_coverage_fout);
#line 1596
  tmp = SetImageStorageClass(image, 1);
  }
#line 1573
  fprintf(_coverage_fout, "1184\n");
#line 1573
  fflush(_coverage_fout);
#line 1596
  if ((int )tmp == 0) {
    {
#line 1598
    fprintf(_coverage_fout, "1135\n");
#line 1598
    fflush(_coverage_fout);
#line 1598
    InheritException(exception, (ExceptionInfo const   *)(& image->exception));
    }
#line 1596
    fprintf(_coverage_fout, "1136\n");
#line 1596
    fflush(_coverage_fout);
#line 1599
    return (0);
  }
  {
#line 1601
  fprintf(_coverage_fout, "1137\n");
#line 1601
  fflush(_coverage_fout);
#line 1601
  status = 1;
#line 1601
  fprintf(_coverage_fout, "1138\n");
#line 1601
  fflush(_coverage_fout);
#line 1602
  progress = 0L;
#line 1601
  fprintf(_coverage_fout, "1139\n");
#line 1601
  fflush(_coverage_fout);
#line 1603
  image_view = AcquireCacheView((Image const   *)image);
#line 1601
  fprintf(_coverage_fout, "1140\n");
#line 1601
  fflush(_coverage_fout);
#line 1607
  y = 0L;
  }
#line 1573
  fprintf(_coverage_fout, "1185\n");
#line 1573
  fflush(_coverage_fout);
#line 1607
  while (1) {
#line 1607
    fprintf(_coverage_fout, "1171\n");
#line 1607
    fflush(_coverage_fout);
#line 1607
    if (! (y < (long )image->rows)) {
#line 1607
      break;
    }
#line 1607
    fprintf(_coverage_fout, "1172\n");
#line 1607
    fflush(_coverage_fout);
#line 1618
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 1620
    fprintf(_coverage_fout, "1141\n");
#line 1620
    fflush(_coverage_fout);
#line 1620
    tmp___0 = GetCacheViewAuthenticPixels(image_view, 0L, y, image->columns,
                                          1UL, exception);
#line 1620
    fprintf(_coverage_fout, "1142\n");
#line 1620
    fflush(_coverage_fout);
#line 1620
    q = (PixelPacket */* __restrict  */)tmp___0;
    }
#line 1607
    fprintf(_coverage_fout, "1173\n");
#line 1607
    fflush(_coverage_fout);
#line 1621
    if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 1621
      fprintf(_coverage_fout, "1143\n");
#line 1621
      fflush(_coverage_fout);
#line 1623
      status = 0;
      goto __Cont;
    }
    {
#line 1626
    fprintf(_coverage_fout, "1144\n");
#line 1626
    fflush(_coverage_fout);
#line 1626
    tmp___1 = GetCacheViewAuthenticIndexQueue(image_view);
#line 1626
    fprintf(_coverage_fout, "1145\n");
#line 1626
    fflush(_coverage_fout);
#line 1626
    indexes = (IndexPacket */* __restrict  */)tmp___1;
#line 1626
    fprintf(_coverage_fout, "1146\n");
#line 1626
    fflush(_coverage_fout);
#line 1627
    x = 0L;
    }
#line 1607
    fprintf(_coverage_fout, "1174\n");
#line 1607
    fflush(_coverage_fout);
#line 1627
    while (1) {
#line 1627
      fprintf(_coverage_fout, "1157\n");
#line 1627
      fflush(_coverage_fout);
#line 1627
      if (! (x < (long )image->columns)) {
#line 1627
        break;
      }
#line 1627
      fprintf(_coverage_fout, "1158\n");
#line 1627
      fflush(_coverage_fout);
#line 1629
      if (((int )channel & 1) != 0) {
        {
#line 1630
        fprintf(_coverage_fout, "1147\n");
#line 1630
        fflush(_coverage_fout);
#line 1630
        q->red = ApplyFunction(q->red, function, number_parameters, parameters,
                               exception);
        }
      }
#line 1627
      fprintf(_coverage_fout, "1159\n");
#line 1627
      fflush(_coverage_fout);
#line 1632
      if (((int )channel & 2) != 0) {
        {
#line 1633
        fprintf(_coverage_fout, "1148\n");
#line 1633
        fflush(_coverage_fout);
#line 1633
        q->green = ApplyFunction(q->green, function, number_parameters,
                                 parameters, exception);
        }
      }
#line 1627
      fprintf(_coverage_fout, "1160\n");
#line 1627
      fflush(_coverage_fout);
#line 1635
      if (((int )channel & 4) != 0) {
        {
#line 1636
        fprintf(_coverage_fout, "1149\n");
#line 1636
        fflush(_coverage_fout);
#line 1636
        q->blue = ApplyFunction(q->blue, function, number_parameters,
                                parameters, exception);
        }
      }
#line 1627
      fprintf(_coverage_fout, "1161\n");
#line 1627
      fflush(_coverage_fout);
#line 1638
      if (((int )channel & 8) != 0) {
#line 1638
        fprintf(_coverage_fout, "1153\n");
#line 1638
        fflush(_coverage_fout);
#line 1640
        if ((int )image->matte == 0) {
          {
#line 1641
          fprintf(_coverage_fout, "1150\n");
#line 1641
          fflush(_coverage_fout);
#line 1641
          q->opacity = ApplyFunction(q->opacity, function, number_parameters,
                                     parameters, exception);
          }
        } else {
          {
#line 1644
          fprintf(_coverage_fout, "1151\n");
#line 1644
          fflush(_coverage_fout);
#line 1644
          tmp___2 = ApplyFunction((unsigned short )(65535UL - (unsigned long )q->opacity),
                                  function, number_parameters, parameters,
                                  exception);
#line 1644
          fprintf(_coverage_fout, "1152\n");
#line 1644
          fflush(_coverage_fout);
#line 1644
          q->opacity = (unsigned short )(65535 - (int )tmp___2);
          }
        }
      }
#line 1627
      fprintf(_coverage_fout, "1162\n");
#line 1627
      fflush(_coverage_fout);
#line 1648
      if (((int )channel & 32) != 0) {
#line 1648
        fprintf(_coverage_fout, "1156\n");
#line 1648
        fflush(_coverage_fout);
#line 1648
        if ((unsigned long )indexes != (unsigned long )((IndexPacket *)((void *)0))) {
          {
#line 1649
          fprintf(_coverage_fout, "1154\n");
#line 1649
          fflush(_coverage_fout);
#line 1649
          tmp___3 = ApplyFunction(*(indexes + x), function, number_parameters,
                                  parameters, exception);
#line 1649
          fprintf(_coverage_fout, "1155\n");
#line 1649
          fflush(_coverage_fout);
#line 1649
          *(indexes + x) = tmp___3;
          }
        }
      }
#line 1627
      fprintf(_coverage_fout, "1163\n");
#line 1627
      fflush(_coverage_fout);
#line 1651
      q ++;
#line 1627
      x ++;
    }
    {
#line 1653
    fprintf(_coverage_fout, "1164\n");
#line 1653
    fflush(_coverage_fout);
#line 1653
    tmp___4 = SyncCacheViewAuthenticPixels(image_view, exception);
    }
#line 1607
    fprintf(_coverage_fout, "1175\n");
#line 1607
    fflush(_coverage_fout);
#line 1653
    if ((int )tmp___4 == 0) {
#line 1653
      fprintf(_coverage_fout, "1165\n");
#line 1653
      fflush(_coverage_fout);
#line 1654
      status = 0;
    }
#line 1607
    fprintf(_coverage_fout, "1176\n");
#line 1607
    fflush(_coverage_fout);
#line 1655
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 1663
      fprintf(_coverage_fout, "1166\n");
#line 1663
      fflush(_coverage_fout);
#line 1663
      tmp___5 = progress;
#line 1663
      fprintf(_coverage_fout, "1167\n");
#line 1663
      fflush(_coverage_fout);
#line 1663
      progress ++;
#line 1663
      fprintf(_coverage_fout, "1168\n");
#line 1663
      fflush(_coverage_fout);
#line 1663
      proceed = SetImageProgress((Image const   *)image, "Function/Image ",
                                 (long long )tmp___5,
                                 (unsigned long long )image->rows);
      }
#line 1655
      fprintf(_coverage_fout, "1170\n");
#line 1655
      fflush(_coverage_fout);
#line 1664
      if ((int )proceed == 0) {
#line 1664
        fprintf(_coverage_fout, "1169\n");
#line 1664
        fflush(_coverage_fout);
#line 1665
        status = 0;
      }
    }
#line 1607
    fprintf(_coverage_fout, "1177\n");
#line 1607
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 1607
    y ++;
  }
  {
#line 1668
  fprintf(_coverage_fout, "1178\n");
#line 1668
  fflush(_coverage_fout);
#line 1668
  image_view = DestroyCacheView(image_view);
  }
#line 1573
  fprintf(_coverage_fout, "1186\n");
#line 1573
  fflush(_coverage_fout);
#line 1669
  return (status);
}
}
#line 1708 "magick/fx.c"
static MagickRealType FxChannelStatistics(FxInfo *fx_info ,
                                          Image const   *image ,
                                          ChannelType channel ,
                                          char const   *symbol ,
                                          ExceptionInfo *exception ) 
{ char key[4096] ;
  char statistic[4096] ;
  char const   *value ;
  register char const   *p ;
  void *tmp ;
  double tmp___0 ;
  unsigned long depth ;
  long tmp___1 ;
  double kurtosis ;
  double skewness ;
  long tmp___2 ;
  double maxima ;
  double minima ;
  long tmp___3 ;
  double mean ;
  double standard_deviation ;
  long tmp___4 ;
  double maxima___0 ;
  double minima___0 ;
  long tmp___5 ;
  double kurtosis___0 ;
  double skewness___0 ;
  long tmp___6 ;
  double mean___0 ;
  double standard_deviation___0 ;
  long tmp___7 ;
  char *tmp___8 ;
  char *tmp___9 ;
  double tmp___10 ;

  {
#line 1708
  fprintf(_coverage_fout, "1230\n");
#line 1708
  fflush(_coverage_fout);
#line 1721
  p = symbol;
#line 1708
  fprintf(_coverage_fout, "1231\n");
#line 1708
  fflush(_coverage_fout);
#line 1721
  while (1) {
#line 1721
    fprintf(_coverage_fout, "1188\n");
#line 1721
    fflush(_coverage_fout);
#line 1721
    if ((int const   )*p != 46) {
#line 1721
      fprintf(_coverage_fout, "1187\n");
#line 1721
      fflush(_coverage_fout);
#line 1721
      if (! ((int const   )*p != 0)) {
#line 1721
        break;
      }
    } else {
#line 1721
      break;
    }
#line 1721
    fprintf(_coverage_fout, "1189\n");
#line 1721
    fflush(_coverage_fout);
#line 1721
    p ++;
  }
#line 1708
  fprintf(_coverage_fout, "1232\n");
#line 1708
  fflush(_coverage_fout);
#line 1722
  if ((int const   )*p == 46) {
#line 1722
    fprintf(_coverage_fout, "1198\n");
#line 1722
    fflush(_coverage_fout);
#line 1723
    p ++;
#line 1723
    switch ((int )*p) {
#line 1723
    fprintf(_coverage_fout, "1190\n");
#line 1723
    fflush(_coverage_fout);
    case 114: 
#line 1725
    channel = 1;
#line 1725
    break;
#line 1723
    fprintf(_coverage_fout, "1191\n");
#line 1723
    fflush(_coverage_fout);
    case 103: 
#line 1726
    channel = 2;
#line 1726
    break;
#line 1723
    fprintf(_coverage_fout, "1192\n");
#line 1723
    fflush(_coverage_fout);
    case 98: 
#line 1727
    channel = 4;
#line 1727
    break;
#line 1723
    fprintf(_coverage_fout, "1193\n");
#line 1723
    fflush(_coverage_fout);
    case 99: 
#line 1728
    channel = 1;
#line 1728
    break;
#line 1723
    fprintf(_coverage_fout, "1194\n");
#line 1723
    fflush(_coverage_fout);
    case 109: 
#line 1729
    channel = 2;
#line 1729
    break;
#line 1723
    fprintf(_coverage_fout, "1195\n");
#line 1723
    fflush(_coverage_fout);
    case 121: 
#line 1730
    channel = 4;
#line 1730
    break;
#line 1723
    fprintf(_coverage_fout, "1196\n");
#line 1723
    fflush(_coverage_fout);
    case 107: 
#line 1731
    channel = 32;
#line 1731
    break;
#line 1723
    fprintf(_coverage_fout, "1197\n");
#line 1723
    fflush(_coverage_fout);
    default: ;
#line 1732
    break;
    }
  }
  {
#line 1734
  fprintf(_coverage_fout, "1199\n");
#line 1734
  fflush(_coverage_fout);
#line 1734
  FormatMagickString(key, 4096UL, "%p.%ld.%s", image, (long )channel, symbol);
#line 1734
  fprintf(_coverage_fout, "1200\n");
#line 1734
  fflush(_coverage_fout);
#line 1736
  tmp = GetValueFromSplayTree(fx_info->symbols, (void const   *)(key));
#line 1734
  fprintf(_coverage_fout, "1201\n");
#line 1734
  fflush(_coverage_fout);
#line 1736
  value = (char const   *)tmp;
  }
#line 1708
  fprintf(_coverage_fout, "1233\n");
#line 1708
  fflush(_coverage_fout);
#line 1737
  if ((unsigned long )value != (unsigned long )((char const   *)((void *)0))) {
    {
#line 1738
    fprintf(_coverage_fout, "1202\n");
#line 1738
    fflush(_coverage_fout);
#line 1738
    tmp___0 = atof(value);
    }
#line 1737
    fprintf(_coverage_fout, "1203\n");
#line 1737
    fflush(_coverage_fout);
#line 1738
    return ((1.0 / (double )65535UL) * tmp___0);
  }
  {
#line 1739
  fprintf(_coverage_fout, "1204\n");
#line 1739
  fflush(_coverage_fout);
#line 1739
  DeleteNodeFromSplayTree(fx_info->symbols, (void const   *)(key));
#line 1739
  fprintf(_coverage_fout, "1205\n");
#line 1739
  fflush(_coverage_fout);
#line 1740
  tmp___1 = LocaleNCompare(symbol, "depth", 5UL);
  }
#line 1708
  fprintf(_coverage_fout, "1234\n");
#line 1708
  fflush(_coverage_fout);
#line 1740
  if (tmp___1 == 0L) {
    {
#line 1745
    fprintf(_coverage_fout, "1206\n");
#line 1745
    fflush(_coverage_fout);
#line 1745
    depth = GetImageChannelDepth(image, channel, exception);
#line 1745
    fprintf(_coverage_fout, "1207\n");
#line 1745
    fflush(_coverage_fout);
#line 1746
    FormatMagickString(statistic, 4096UL, "%lu", depth);
    }
  }
  {
#line 1748
  fprintf(_coverage_fout, "1208\n");
#line 1748
  fflush(_coverage_fout);
#line 1748
  tmp___2 = LocaleNCompare(symbol, "kurtosis", 8UL);
  }
#line 1708
  fprintf(_coverage_fout, "1235\n");
#line 1708
  fflush(_coverage_fout);
#line 1748
  if (tmp___2 == 0L) {
    {
#line 1754
    fprintf(_coverage_fout, "1209\n");
#line 1754
    fflush(_coverage_fout);
#line 1754
    GetImageChannelKurtosis(image, channel, & kurtosis, & skewness, exception);
#line 1754
    fprintf(_coverage_fout, "1210\n");
#line 1754
    fflush(_coverage_fout);
#line 1756
    FormatMagickString(statistic, 4096UL, "%g", kurtosis);
    }
  }
  {
#line 1758
  fprintf(_coverage_fout, "1211\n");
#line 1758
  fflush(_coverage_fout);
#line 1758
  tmp___3 = LocaleNCompare(symbol, "maxima", 6UL);
  }
#line 1708
  fprintf(_coverage_fout, "1236\n");
#line 1708
  fflush(_coverage_fout);
#line 1758
  if (tmp___3 == 0L) {
    {
#line 1764
    fprintf(_coverage_fout, "1212\n");
#line 1764
    fflush(_coverage_fout);
#line 1764
    GetImageChannelRange(image, channel, & minima, & maxima, exception);
#line 1764
    fprintf(_coverage_fout, "1213\n");
#line 1764
    fflush(_coverage_fout);
#line 1765
    FormatMagickString(statistic, 4096UL, "%g", maxima);
    }
  }
  {
#line 1767
  fprintf(_coverage_fout, "1214\n");
#line 1767
  fflush(_coverage_fout);
#line 1767
  tmp___4 = LocaleNCompare(symbol, "mean", 4UL);
  }
#line 1708
  fprintf(_coverage_fout, "1237\n");
#line 1708
  fflush(_coverage_fout);
#line 1767
  if (tmp___4 == 0L) {
    {
#line 1773
    fprintf(_coverage_fout, "1215\n");
#line 1773
    fflush(_coverage_fout);
#line 1773
    GetImageChannelMean(image, channel, & mean, & standard_deviation, exception);
#line 1773
    fprintf(_coverage_fout, "1216\n");
#line 1773
    fflush(_coverage_fout);
#line 1775
    FormatMagickString(statistic, 4096UL, "%g", mean);
    }
  }
  {
#line 1777
  fprintf(_coverage_fout, "1217\n");
#line 1777
  fflush(_coverage_fout);
#line 1777
  tmp___5 = LocaleNCompare(symbol, "minima", 6UL);
  }
#line 1708
  fprintf(_coverage_fout, "1238\n");
#line 1708
  fflush(_coverage_fout);
#line 1777
  if (tmp___5 == 0L) {
    {
#line 1783
    fprintf(_coverage_fout, "1218\n");
#line 1783
    fflush(_coverage_fout);
#line 1783
    GetImageChannelRange(image, channel, & minima___0, & maxima___0, exception);
#line 1783
    fprintf(_coverage_fout, "1219\n");
#line 1783
    fflush(_coverage_fout);
#line 1784
    FormatMagickString(statistic, 4096UL, "%g", minima___0);
    }
  }
  {
#line 1786
  fprintf(_coverage_fout, "1220\n");
#line 1786
  fflush(_coverage_fout);
#line 1786
  tmp___6 = LocaleNCompare(symbol, "skewness", 8UL);
  }
#line 1708
  fprintf(_coverage_fout, "1239\n");
#line 1708
  fflush(_coverage_fout);
#line 1786
  if (tmp___6 == 0L) {
    {
#line 1792
    fprintf(_coverage_fout, "1221\n");
#line 1792
    fflush(_coverage_fout);
#line 1792
    GetImageChannelKurtosis(image, channel, & kurtosis___0, & skewness___0,
                            exception);
#line 1792
    fprintf(_coverage_fout, "1222\n");
#line 1792
    fflush(_coverage_fout);
#line 1794
    FormatMagickString(statistic, 4096UL, "%g", skewness___0);
    }
  }
  {
#line 1796
  fprintf(_coverage_fout, "1223\n");
#line 1796
  fflush(_coverage_fout);
#line 1796
  tmp___7 = LocaleNCompare(symbol, "standard_deviation", 18UL);
  }
#line 1708
  fprintf(_coverage_fout, "1240\n");
#line 1708
  fflush(_coverage_fout);
#line 1796
  if (tmp___7 == 0L) {
    {
#line 1802
    fprintf(_coverage_fout, "1224\n");
#line 1802
    fflush(_coverage_fout);
#line 1802
    GetImageChannelMean(image, channel, & mean___0, & standard_deviation___0,
                        exception);
#line 1802
    fprintf(_coverage_fout, "1225\n");
#line 1802
    fflush(_coverage_fout);
#line 1804
    FormatMagickString(statistic, 4096UL, "%g", standard_deviation___0);
    }
  }
  {
#line 1807
  fprintf(_coverage_fout, "1226\n");
#line 1807
  fflush(_coverage_fout);
#line 1807
  tmp___8 = ConstantString((char const   *)(statistic));
#line 1807
  fprintf(_coverage_fout, "1227\n");
#line 1807
  fflush(_coverage_fout);
#line 1807
  tmp___9 = ConstantString((char const   *)(key));
#line 1807
  fprintf(_coverage_fout, "1228\n");
#line 1807
  fflush(_coverage_fout);
#line 1807
  AddValueToSplayTree(fx_info->symbols, (void const   *)tmp___9,
                      (void const   *)tmp___8);
#line 1807
  fprintf(_coverage_fout, "1229\n");
#line 1807
  fflush(_coverage_fout);
#line 1809
  tmp___10 = atof((char const   *)(statistic));
  }
#line 1708
  fprintf(_coverage_fout, "1241\n");
#line 1708
  fflush(_coverage_fout);
#line 1809
  return ((1.0 / (double )65535UL) * tmp___10);
}
}
#line 1812
static MagickRealType FxEvaluateSubexpression(FxInfo *fx_info ,
                                              ChannelType channel , long x ,
                                              long y ,
                                              char const   *expression ,
                                              MagickRealType *beta ,
                                              ExceptionInfo *exception ) ;
#line 1816 "magick/fx.c"
__inline static MagickRealType FxMax(FxInfo *fx_info , ChannelType channel ,
                                     long x , long y ,
                                     char const   *expression ,
                                     ExceptionInfo *exception ) 
{ MagickRealType alpha ;
  MagickRealType beta ;
  double tmp ;

  {
  {
#line 1823
  fprintf(_coverage_fout, "1242\n");
#line 1823
  fflush(_coverage_fout);
#line 1823
  alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression, & beta,
                                  exception);
#line 1823
  fprintf(_coverage_fout, "1243\n");
#line 1823
  fflush(_coverage_fout);
#line 1824
  tmp = MagickMax(alpha, beta);
  }
#line 1816
  fprintf(_coverage_fout, "1244\n");
#line 1816
  fflush(_coverage_fout);
#line 1824
  return (tmp);
}
}
#line 1827 "magick/fx.c"
__inline static MagickRealType FxMin(FxInfo *fx_info , ChannelType channel ,
                                     long x , long y ,
                                     char const   *expression ,
                                     ExceptionInfo *exception ) 
{ MagickRealType alpha ;
  MagickRealType beta ;
  double tmp ;

  {
  {
#line 1834
  fprintf(_coverage_fout, "1245\n");
#line 1834
  fflush(_coverage_fout);
#line 1834
  alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression, & beta,
                                  exception);
#line 1834
  fprintf(_coverage_fout, "1246\n");
#line 1834
  fflush(_coverage_fout);
#line 1835
  tmp = MagickMin(alpha, beta);
  }
#line 1827
  fprintf(_coverage_fout, "1247\n");
#line 1827
  fflush(_coverage_fout);
#line 1835
  return (tmp);
}
}
#line 1838 "magick/fx.c"
__inline static char const   *FxSubexpression(char const   *expression ,
                                              ExceptionInfo *exception ) 
{ char const   *subexpression ;
  register long level ;
  void *tmp ;
  char *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;
  void *tmp___3 ;
  char *tmp___4 ;

  {
#line 1838
  fprintf(_coverage_fout, "1260\n");
#line 1838
  fflush(_coverage_fout);
#line 1847
  level = 0L;
#line 1848
  subexpression = expression;
#line 1838
  fprintf(_coverage_fout, "1261\n");
#line 1838
  fflush(_coverage_fout);
#line 1849
  while (1) {
#line 1849
    fprintf(_coverage_fout, "1256\n");
#line 1849
    fflush(_coverage_fout);
#line 1849
    if ((int const   )*subexpression != 0) {
#line 1849
      fprintf(_coverage_fout, "1250\n");
#line 1849
      fflush(_coverage_fout);
#line 1849
      if (! (level != 1L)) {
        {
#line 1849
        fprintf(_coverage_fout, "1248\n");
#line 1849
        fflush(_coverage_fout);
#line 1849
        tmp___4 = __builtin_strchr((char *)")", (int )*subexpression);
        }
#line 1849
        fprintf(_coverage_fout, "1249\n");
#line 1849
        fflush(_coverage_fout);
#line 1849
        if (! ((unsigned long )tmp___4 == (unsigned long )((char *)((void *)0)))) {
#line 1849
          break;
        }
      }
    } else {
#line 1849
      break;
    }
    {
#line 1852
    fprintf(_coverage_fout, "1251\n");
#line 1852
    fflush(_coverage_fout);
#line 1852
    tmp___2 = __builtin_strchr((char *)"(", (int )*subexpression);
    }
#line 1849
    fprintf(_coverage_fout, "1257\n");
#line 1849
    fflush(_coverage_fout);
#line 1852
    if ((unsigned long )tmp___2 != (unsigned long )((char *)((void *)0))) {
#line 1852
      fprintf(_coverage_fout, "1252\n");
#line 1852
      fflush(_coverage_fout);
#line 1853
      level ++;
    } else {
      {
#line 1855
      fprintf(_coverage_fout, "1253\n");
#line 1855
      fflush(_coverage_fout);
#line 1855
      tmp___0 = __builtin_strchr((char *)")", (int )*subexpression);
      }
#line 1852
      fprintf(_coverage_fout, "1255\n");
#line 1852
      fflush(_coverage_fout);
#line 1855
      if ((unsigned long )tmp___0 != (unsigned long )((char *)((void *)0))) {
#line 1855
        fprintf(_coverage_fout, "1254\n");
#line 1855
        fflush(_coverage_fout);
#line 1856
        level --;
      }
    }
#line 1849
    fprintf(_coverage_fout, "1258\n");
#line 1849
    fflush(_coverage_fout);
#line 1857
    subexpression ++;
  }
#line 1838
  fprintf(_coverage_fout, "1262\n");
#line 1838
  fflush(_coverage_fout);
#line 1859
  if ((int const   )*subexpression == 0) {
    {
#line 1860
    fprintf(_coverage_fout, "1259\n");
#line 1860
    fflush(_coverage_fout);
#line 1860
    ThrowMagickException(exception, "magick/fx.c", "FxSubexpression", 1860UL,
                         410, "UnbalancedParenthesis", "`%s\'", expression);
    }
  }
#line 1838
  fprintf(_coverage_fout, "1263\n");
#line 1838
  fflush(_coverage_fout);
#line 1862
  return (subexpression);
}
}
#line 1865 "magick/fx.c"
static MagickRealType FxGetSymbol(FxInfo *fx_info , ChannelType channel ,
                                  long x , long y , char const   *expression ,
                                  ExceptionInfo *exception ) 
{ char *q ;
  char subexpression[4096] ;
  char symbol[4096] ;
  char const   *p ;
  char const   *value ;
  Image *image ;
  MagickPixelPacket pixel ;
  MagickRealType alpha ;
  MagickRealType beta ;
  PointInfo point ;
  register long i ;
  size_t length ;
  unsigned long level ;
  char *tmp ;
  char const   *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;
  char *tmp___3 ;
  char const   *tmp___4 ;
  char *tmp___5 ;
  char const   *tmp___6 ;
  unsigned short const   **tmp___7 ;
  unsigned short const   **tmp___8 ;
  char name[4096] ;
  size_t tmp___9 ;
  MagickPixelPacket *color ;
  void *tmp___10 ;
  size_t tmp___11 ;
  MagickPixelPacket *tmp___12 ;
  char *tmp___13 ;
  size_t tmp___14 ;
  MagickBooleanType tmp___15 ;
  size_t tmp___16 ;
  void *tmp___17 ;
  size_t tmp___18 ;
  long tmp___19 ;
  long tmp___20 ;
  long tmp___21 ;
  long tmp___22 ;
  long tmp___23 ;
  long tmp___24 ;
  long tmp___25 ;
  GeometryInfo channel_info ;
  MagickStatusType flags ;
  long tmp___26 ;
  long tmp___27 ;
  MagickRealType tmp___28 ;
  long tmp___29 ;
  long tmp___30 ;
  MagickRealType tmp___31 ;
  long tmp___32 ;
  long tmp___33 ;
  long tmp___34 ;
  double hue ;
  double lightness ;
  double saturation ;
  Quantum tmp___35 ;
  Quantum tmp___36 ;
  Quantum tmp___37 ;
  long tmp___38 ;
  MagickRealType tmp___39 ;
  long tmp___40 ;
  long tmp___41 ;
  long tmp___42 ;
  long tmp___43 ;
  long tmp___44 ;
  long tmp___45 ;
  long tmp___46 ;
  long tmp___47 ;
  long tmp___48 ;
  Quantum tmp___49 ;
  long tmp___50 ;
  long tmp___51 ;
  long tmp___52 ;
  double hue___0 ;
  double lightness___0 ;
  double saturation___0 ;
  Quantum tmp___53 ;
  Quantum tmp___54 ;
  Quantum tmp___55 ;
  long tmp___56 ;
  double luminence ;
  long tmp___57 ;
  MagickRealType tmp___58 ;
  long tmp___59 ;
  MagickRealType tmp___60 ;
  long tmp___61 ;
  MagickRealType tmp___62 ;
  long tmp___63 ;
  long tmp___64 ;
  unsigned long tmp___65 ;
  long tmp___66 ;
  long tmp___67 ;
  long tmp___68 ;
  long tmp___69 ;
  long tmp___70 ;
  long tmp___71 ;
  long tmp___72 ;
  long tmp___73 ;
  long tmp___74 ;
  double hue___1 ;
  double lightness___1 ;
  double saturation___1 ;
  Quantum tmp___75 ;
  Quantum tmp___76 ;
  Quantum tmp___77 ;
  long tmp___78 ;
  MagickRealType tmp___79 ;
  long tmp___80 ;
  MagickRealType tmp___81 ;
  long tmp___82 ;
  long tmp___83 ;
  long tmp___84 ;
  long tmp___85 ;
  MagickRealType depth ;
  unsigned long tmp___86 ;
  long tmp___87 ;
  void *tmp___88 ;
  double tmp___89 ;

  {
  {
#line 1899
  fprintf(_coverage_fout, "1264\n");
#line 1899
  fflush(_coverage_fout);
#line 1899
  p = expression;
#line 1899
  fprintf(_coverage_fout, "1265\n");
#line 1899
  fflush(_coverage_fout);
#line 1900
  i = GetImageIndexInList(fx_info->images);
#line 1899
  fprintf(_coverage_fout, "1266\n");
#line 1899
  fflush(_coverage_fout);
#line 1901
  level = 0UL;
#line 1899
  fprintf(_coverage_fout, "1267\n");
#line 1899
  fflush(_coverage_fout);
#line 1902
  point.x = (double )x;
#line 1899
  fprintf(_coverage_fout, "1268\n");
#line 1899
  fflush(_coverage_fout);
#line 1903
  point.y = (double )y;
#line 1899
  fprintf(_coverage_fout, "1269\n");
#line 1899
  fflush(_coverage_fout);
#line 1904
  tmp___8 = __ctype_b_loc();
  }
#line 1865
  fprintf(_coverage_fout, "1597\n");
#line 1865
  fflush(_coverage_fout);
#line 1904
  if (((int const   )*(*tmp___8 + (int )*(p + 1)) & 1024) == 0) {
    {
#line 1906
    fprintf(_coverage_fout, "1270\n");
#line 1906
    fflush(_coverage_fout);
#line 1906
    tmp___2 = __builtin_strchr((char *)"suv", (int )*p);
    }
#line 1904
    fprintf(_coverage_fout, "1326\n");
#line 1904
    fflush(_coverage_fout);
#line 1906
    if ((unsigned long )tmp___2 != (unsigned long )((char *)((void *)0))) {
#line 1908
      switch ((int )*p) {
      case 115: 
      default: 
      {
#line 1913
      fprintf(_coverage_fout, "1271\n");
#line 1913
      fflush(_coverage_fout);
#line 1913
      i = GetImageIndexInList(fx_info->images);
      }
#line 1914
      break;
#line 1908
      fprintf(_coverage_fout, "1272\n");
#line 1908
      fflush(_coverage_fout);
      case 117: 
#line 1916
      i = 0L;
#line 1916
      break;
#line 1908
      fprintf(_coverage_fout, "1273\n");
#line 1908
      fflush(_coverage_fout);
      case 118: 
#line 1917
      i = 1L;
#line 1917
      break;
      }
#line 1906
      fprintf(_coverage_fout, "1288\n");
#line 1906
      fflush(_coverage_fout);
#line 1919
      p ++;
#line 1906
      fprintf(_coverage_fout, "1289\n");
#line 1906
      fflush(_coverage_fout);
#line 1920
      if ((int const   )*p == 91) {
#line 1920
        fprintf(_coverage_fout, "1285\n");
#line 1920
        fflush(_coverage_fout);
#line 1922
        level ++;
#line 1923
        q = subexpression;
#line 1924
        p ++;
#line 1920
        fprintf(_coverage_fout, "1286\n");
#line 1920
        fflush(_coverage_fout);
#line 1924
        while (1) {
#line 1924
          fprintf(_coverage_fout, "1278\n");
#line 1924
          fflush(_coverage_fout);
#line 1924
          if (! ((int const   )*p != 0)) {
#line 1924
            break;
          }
#line 1924
          fprintf(_coverage_fout, "1279\n");
#line 1924
          fflush(_coverage_fout);
#line 1926
          if ((int const   )*p == 91) {
#line 1926
            fprintf(_coverage_fout, "1274\n");
#line 1926
            fflush(_coverage_fout);
#line 1927
            level ++;
          } else {
#line 1926
            fprintf(_coverage_fout, "1277\n");
#line 1926
            fflush(_coverage_fout);
#line 1929
            if ((int const   )*p == 93) {
#line 1929
              fprintf(_coverage_fout, "1275\n");
#line 1929
              fflush(_coverage_fout);
#line 1931
              level --;
#line 1929
              fprintf(_coverage_fout, "1276\n");
#line 1929
              fflush(_coverage_fout);
#line 1932
              if (level == 0UL) {
#line 1933
                break;
              }
            }
          }
#line 1924
          fprintf(_coverage_fout, "1280\n");
#line 1924
          fflush(_coverage_fout);
#line 1935
          tmp = q;
#line 1935
          q ++;
#line 1935
          tmp___0 = p;
#line 1935
          p ++;
#line 1935
          *tmp = (char )*tmp___0;
        }
        {
#line 1937
        fprintf(_coverage_fout, "1281\n");
#line 1937
        fflush(_coverage_fout);
#line 1937
        *q = (char )'\000';
#line 1937
        fprintf(_coverage_fout, "1282\n");
#line 1937
        fflush(_coverage_fout);
#line 1938
        alpha = FxEvaluateSubexpression(fx_info, channel, x, y,
                                        (char const   *)(subexpression), & beta,
                                        exception);
#line 1937
        fprintf(_coverage_fout, "1283\n");
#line 1937
        fflush(_coverage_fout);
#line 1940
        i = (long )(alpha + 0.5);
#line 1937
        fprintf(_coverage_fout, "1284\n");
#line 1937
        fflush(_coverage_fout);
#line 1941
        p ++;
        }
      }
#line 1906
      fprintf(_coverage_fout, "1290\n");
#line 1906
      fflush(_coverage_fout);
#line 1943
      if ((int const   )*p == 46) {
#line 1943
        fprintf(_coverage_fout, "1287\n");
#line 1943
        fflush(_coverage_fout);
#line 1944
        p ++;
      }
    }
    {
#line 1946
    fprintf(_coverage_fout, "1291\n");
#line 1946
    fflush(_coverage_fout);
#line 1946
    tmp___7 = __ctype_b_loc();
    }
#line 1904
    fprintf(_coverage_fout, "1327\n");
#line 1904
    fflush(_coverage_fout);
#line 1946
    if (((int const   )*(*tmp___7 + (int )*(p + 1)) & 1024) == 0) {
#line 1946
      fprintf(_coverage_fout, "1325\n");
#line 1946
      fflush(_coverage_fout);
#line 1946
      if ((int const   )*p == 112) {
#line 1946
        fprintf(_coverage_fout, "1322\n");
#line 1946
        fflush(_coverage_fout);
#line 1948
        p ++;
#line 1946
        fprintf(_coverage_fout, "1323\n");
#line 1946
        fflush(_coverage_fout);
#line 1949
        if ((int const   )*p == 123) {
#line 1949
          fprintf(_coverage_fout, "1304\n");
#line 1949
          fflush(_coverage_fout);
#line 1951
          level ++;
#line 1952
          q = subexpression;
#line 1953
          p ++;
#line 1949
          fprintf(_coverage_fout, "1305\n");
#line 1949
          fflush(_coverage_fout);
#line 1953
          while (1) {
#line 1953
            fprintf(_coverage_fout, "1296\n");
#line 1953
            fflush(_coverage_fout);
#line 1953
            if (! ((int const   )*p != 0)) {
#line 1953
              break;
            }
#line 1953
            fprintf(_coverage_fout, "1297\n");
#line 1953
            fflush(_coverage_fout);
#line 1955
            if ((int const   )*p == 123) {
#line 1955
              fprintf(_coverage_fout, "1292\n");
#line 1955
              fflush(_coverage_fout);
#line 1956
              level ++;
            } else {
#line 1955
              fprintf(_coverage_fout, "1295\n");
#line 1955
              fflush(_coverage_fout);
#line 1958
              if ((int const   )*p == 125) {
#line 1958
                fprintf(_coverage_fout, "1293\n");
#line 1958
                fflush(_coverage_fout);
#line 1960
                level --;
#line 1958
                fprintf(_coverage_fout, "1294\n");
#line 1958
                fflush(_coverage_fout);
#line 1961
                if (level == 0UL) {
#line 1962
                  break;
                }
              }
            }
#line 1953
            fprintf(_coverage_fout, "1298\n");
#line 1953
            fflush(_coverage_fout);
#line 1964
            tmp___3 = q;
#line 1964
            q ++;
#line 1964
            tmp___4 = p;
#line 1964
            p ++;
#line 1964
            *tmp___3 = (char )*tmp___4;
          }
          {
#line 1966
          fprintf(_coverage_fout, "1299\n");
#line 1966
          fflush(_coverage_fout);
#line 1966
          *q = (char )'\000';
#line 1966
          fprintf(_coverage_fout, "1300\n");
#line 1966
          fflush(_coverage_fout);
#line 1967
          alpha = FxEvaluateSubexpression(fx_info, channel, x, y,
                                          (char const   *)(subexpression),
                                          & beta, exception);
#line 1966
          fprintf(_coverage_fout, "1301\n");
#line 1966
          fflush(_coverage_fout);
#line 1969
          point.x = alpha;
#line 1966
          fprintf(_coverage_fout, "1302\n");
#line 1966
          fflush(_coverage_fout);
#line 1970
          point.y = beta;
#line 1966
          fprintf(_coverage_fout, "1303\n");
#line 1966
          fflush(_coverage_fout);
#line 1971
          p ++;
          }
        } else {
#line 1949
          fprintf(_coverage_fout, "1320\n");
#line 1949
          fflush(_coverage_fout);
#line 1974
          if ((int const   )*p == 91) {
#line 1974
            fprintf(_coverage_fout, "1318\n");
#line 1974
            fflush(_coverage_fout);
#line 1976
            level ++;
#line 1977
            q = subexpression;
#line 1978
            p ++;
#line 1974
            fprintf(_coverage_fout, "1319\n");
#line 1974
            fflush(_coverage_fout);
#line 1978
            while (1) {
#line 1978
              fprintf(_coverage_fout, "1310\n");
#line 1978
              fflush(_coverage_fout);
#line 1978
              if (! ((int const   )*p != 0)) {
#line 1978
                break;
              }
#line 1978
              fprintf(_coverage_fout, "1311\n");
#line 1978
              fflush(_coverage_fout);
#line 1980
              if ((int const   )*p == 91) {
#line 1980
                fprintf(_coverage_fout, "1306\n");
#line 1980
                fflush(_coverage_fout);
#line 1981
                level ++;
              } else {
#line 1980
                fprintf(_coverage_fout, "1309\n");
#line 1980
                fflush(_coverage_fout);
#line 1983
                if ((int const   )*p == 93) {
#line 1983
                  fprintf(_coverage_fout, "1307\n");
#line 1983
                  fflush(_coverage_fout);
#line 1985
                  level --;
#line 1983
                  fprintf(_coverage_fout, "1308\n");
#line 1983
                  fflush(_coverage_fout);
#line 1986
                  if (level == 0UL) {
#line 1987
                    break;
                  }
                }
              }
#line 1978
              fprintf(_coverage_fout, "1312\n");
#line 1978
              fflush(_coverage_fout);
#line 1989
              tmp___5 = q;
#line 1989
              q ++;
#line 1989
              tmp___6 = p;
#line 1989
              p ++;
#line 1989
              *tmp___5 = (char )*tmp___6;
            }
            {
#line 1991
            fprintf(_coverage_fout, "1313\n");
#line 1991
            fflush(_coverage_fout);
#line 1991
            *q = (char )'\000';
#line 1991
            fprintf(_coverage_fout, "1314\n");
#line 1991
            fflush(_coverage_fout);
#line 1992
            alpha = FxEvaluateSubexpression(fx_info, channel, x, y,
                                            (char const   *)(subexpression),
                                            & beta, exception);
#line 1991
            fprintf(_coverage_fout, "1315\n");
#line 1991
            fflush(_coverage_fout);
#line 1994
            point.x += alpha;
#line 1991
            fprintf(_coverage_fout, "1316\n");
#line 1991
            fflush(_coverage_fout);
#line 1995
            point.y += beta;
#line 1991
            fprintf(_coverage_fout, "1317\n");
#line 1991
            fflush(_coverage_fout);
#line 1996
            p ++;
            }
          }
        }
#line 1946
        fprintf(_coverage_fout, "1324\n");
#line 1946
        fflush(_coverage_fout);
#line 1998
        if ((int const   )*p == 46) {
#line 1998
          fprintf(_coverage_fout, "1321\n");
#line 1998
          fflush(_coverage_fout);
#line 1999
          p ++;
        }
      }
    }
  }
  {
#line 2002
  fprintf(_coverage_fout, "1328\n");
#line 2002
  fflush(_coverage_fout);
#line 2002
  length = GetImageListLength(fx_info->images);
  }
#line 1865
  fprintf(_coverage_fout, "1598\n");
#line 1865
  fflush(_coverage_fout);
#line 2003
  while (1) {
#line 2003
    fprintf(_coverage_fout, "1329\n");
#line 2003
    fflush(_coverage_fout);
#line 2003
    if (! (i < 0L)) {
#line 2003
      break;
    }
#line 2003
    fprintf(_coverage_fout, "1330\n");
#line 2003
    fflush(_coverage_fout);
#line 2004
    i += (long )length;
  }
  {
#line 2005
  fprintf(_coverage_fout, "1331\n");
#line 2005
  fflush(_coverage_fout);
#line 2005
  i = (long )((unsigned long )i % length);
#line 2005
  fprintf(_coverage_fout, "1332\n");
#line 2005
  fflush(_coverage_fout);
#line 2006
  image = GetImageFromList(fx_info->images, i);
  }
#line 1865
  fprintf(_coverage_fout, "1599\n");
#line 1865
  fflush(_coverage_fout);
#line 2007
  if ((unsigned long )image == (unsigned long )((Image *)((void *)0))) {
    {
#line 2009
    fprintf(_coverage_fout, "1333\n");
#line 2009
    fflush(_coverage_fout);
#line 2009
    ThrowMagickException(exception, "magick/fx.c", "FxGetSymbol", 2009UL, 410,
                         "NoSuchImage", "`%s\'", expression);
    }
#line 2007
    fprintf(_coverage_fout, "1334\n");
#line 2007
    fflush(_coverage_fout);
#line 2011
    return (0.0);
  }
  {
#line 2013
  fprintf(_coverage_fout, "1335\n");
#line 2013
  fflush(_coverage_fout);
#line 2013
  ResamplePixelColor(*(fx_info->resample_filter + i), point.x, point.y, & pixel);
#line 2013
  fprintf(_coverage_fout, "1336\n");
#line 2013
  fflush(_coverage_fout);
#line 2014
  tmp___18 = strlen(p);
  }
#line 1865
  fprintf(_coverage_fout, "1600\n");
#line 1865
  fflush(_coverage_fout);
#line 2014
  if (tmp___18 > 2UL) {
    {
#line 2014
    fprintf(_coverage_fout, "1337\n");
#line 2014
    fflush(_coverage_fout);
#line 2014
    tmp___19 = LocaleCompare(p, "intensity");
    }
#line 2014
    fprintf(_coverage_fout, "1372\n");
#line 2014
    fflush(_coverage_fout);
#line 2014
    if (tmp___19 != 0L) {
      {
#line 2014
      fprintf(_coverage_fout, "1338\n");
#line 2014
      fflush(_coverage_fout);
#line 2014
      tmp___20 = LocaleCompare(p, "luminance");
      }
#line 2014
      fprintf(_coverage_fout, "1371\n");
#line 2014
      fflush(_coverage_fout);
#line 2014
      if (tmp___20 != 0L) {
        {
#line 2014
        fprintf(_coverage_fout, "1339\n");
#line 2014
        fflush(_coverage_fout);
#line 2014
        tmp___21 = LocaleCompare(p, "hue");
        }
#line 2014
        fprintf(_coverage_fout, "1370\n");
#line 2014
        fflush(_coverage_fout);
#line 2014
        if (tmp___21 != 0L) {
          {
#line 2014
          fprintf(_coverage_fout, "1340\n");
#line 2014
          fflush(_coverage_fout);
#line 2014
          tmp___22 = LocaleCompare(p, "saturation");
          }
#line 2014
          fprintf(_coverage_fout, "1369\n");
#line 2014
          fflush(_coverage_fout);
#line 2014
          if (tmp___22 != 0L) {
            {
#line 2014
            fprintf(_coverage_fout, "1341\n");
#line 2014
            fflush(_coverage_fout);
#line 2014
            tmp___23 = LocaleCompare(p, "lightness");
            }
#line 2014
            fprintf(_coverage_fout, "1368\n");
#line 2014
            fflush(_coverage_fout);
#line 2014
            if (tmp___23 != 0L) {
              {
#line 2024
              fprintf(_coverage_fout, "1342\n");
#line 2024
              fflush(_coverage_fout);
#line 2024
              CopyMagickString(name, p, 4096UL);
#line 2024
              fprintf(_coverage_fout, "1343\n");
#line 2024
              fflush(_coverage_fout);
#line 2025
              tmp___9 = strlen((char const   *)(name));
#line 2024
              fprintf(_coverage_fout, "1344\n");
#line 2024
              fflush(_coverage_fout);
#line 2025
              q = name + (tmp___9 - 1UL);
              }
#line 2014
              fprintf(_coverage_fout, "1366\n");
#line 2014
              fflush(_coverage_fout);
#line 2025
              while (1) {
#line 2025
                fprintf(_coverage_fout, "1346\n");
#line 2025
                fflush(_coverage_fout);
#line 2025
                if (! ((unsigned long )q > (unsigned long )(name))) {
#line 2025
                  break;
                }
#line 2025
                fprintf(_coverage_fout, "1347\n");
#line 2025
                fflush(_coverage_fout);
#line 2027
                if ((int )*q == 41) {
#line 2028
                  break;
                }
#line 2025
                fprintf(_coverage_fout, "1348\n");
#line 2025
                fflush(_coverage_fout);
#line 2029
                if ((int )*q == 46) {
#line 2029
                  fprintf(_coverage_fout, "1345\n");
#line 2029
                  fflush(_coverage_fout);
#line 2031
                  *q = (char )'\000';
#line 2032
                  break;
                }
#line 2025
                fprintf(_coverage_fout, "1349\n");
#line 2025
                fflush(_coverage_fout);
#line 2025
                q --;
              }
              {
#line 2035
              fprintf(_coverage_fout, "1350\n");
#line 2035
              fflush(_coverage_fout);
#line 2035
              tmp___16 = strlen((char const   *)(name));
              }
#line 2014
              fprintf(_coverage_fout, "1367\n");
#line 2014
              fflush(_coverage_fout);
#line 2035
              if (tmp___16 > 2UL) {
                {
#line 2035
                fprintf(_coverage_fout, "1351\n");
#line 2035
                fflush(_coverage_fout);
#line 2035
                tmp___17 = GetValueFromSplayTree(fx_info->symbols,
                                                 (void const   *)(name));
                }
#line 2035
                fprintf(_coverage_fout, "1365\n");
#line 2035
                fflush(_coverage_fout);
#line 2035
                if ((unsigned long )tmp___17 == (unsigned long )((char const   *)((void *)0))) {
                  {
#line 2041
                  fprintf(_coverage_fout, "1352\n");
#line 2041
                  fflush(_coverage_fout);
#line 2041
                  tmp___10 = GetValueFromSplayTree(fx_info->colors,
                                                   (void const   *)(name));
#line 2041
                  fprintf(_coverage_fout, "1353\n");
#line 2041
                  fflush(_coverage_fout);
#line 2041
                  color = (MagickPixelPacket *)tmp___10;
                  }
#line 2035
                  fprintf(_coverage_fout, "1364\n");
#line 2035
                  fflush(_coverage_fout);
#line 2043
                  if ((unsigned long )color != (unsigned long )((MagickPixelPacket *)((void *)0))) {
                    {
#line 2045
                    fprintf(_coverage_fout, "1354\n");
#line 2045
                    fflush(_coverage_fout);
#line 2045
                    pixel = *color;
#line 2045
                    fprintf(_coverage_fout, "1355\n");
#line 2045
                    fflush(_coverage_fout);
#line 2046
                    tmp___11 = strlen((char const   *)(name));
#line 2045
                    fprintf(_coverage_fout, "1356\n");
#line 2045
                    fflush(_coverage_fout);
#line 2046
                    p += tmp___11;
                    }
                  } else {
                    {
#line 2049
                    fprintf(_coverage_fout, "1357\n");
#line 2049
                    fflush(_coverage_fout);
#line 2049
                    tmp___15 = QueryMagickColor((char const   *)(name), & pixel,
                                                fx_info->exception);
                    }
#line 2043
                    fprintf(_coverage_fout, "1363\n");
#line 2043
                    fflush(_coverage_fout);
#line 2049
                    if ((int )tmp___15 != 0) {
                      {
#line 2051
                      fprintf(_coverage_fout, "1358\n");
#line 2051
                      fflush(_coverage_fout);
#line 2051
                      tmp___12 = CloneMagickPixelPacket((MagickPixelPacket const   *)(& pixel));
#line 2051
                      fprintf(_coverage_fout, "1359\n");
#line 2051
                      fflush(_coverage_fout);
#line 2051
                      tmp___13 = ConstantString((char const   *)(name));
#line 2051
                      fprintf(_coverage_fout, "1360\n");
#line 2051
                      fflush(_coverage_fout);
#line 2051
                      AddValueToSplayTree(fx_info->colors,
                                          (void const   *)tmp___13,
                                          (void const   *)tmp___12);
#line 2051
                      fprintf(_coverage_fout, "1361\n");
#line 2051
                      fflush(_coverage_fout);
#line 2053
                      tmp___14 = strlen((char const   *)(name));
#line 2051
                      fprintf(_coverage_fout, "1362\n");
#line 2051
                      fflush(_coverage_fout);
#line 2053
                      p += tmp___14;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  {
#line 2057
  fprintf(_coverage_fout, "1373\n");
#line 2057
  fflush(_coverage_fout);
#line 2057
  CopyMagickString(symbol, p, 4096UL);
#line 2057
  fprintf(_coverage_fout, "1374\n");
#line 2057
  fflush(_coverage_fout);
#line 2058
  StripString(symbol);
  }
#line 1865
  fprintf(_coverage_fout, "1601\n");
#line 1865
  fflush(_coverage_fout);
#line 2059
  if ((int )symbol[0] == 0) {
#line 2061
    switch ((int )channel) {
#line 2061
    fprintf(_coverage_fout, "1379\n");
#line 2061
    fflush(_coverage_fout);
    case 1: 
#line 2063
    return ((1.0 / (double )65535UL) * pixel.red);
#line 2061
    fprintf(_coverage_fout, "1380\n");
#line 2061
    fflush(_coverage_fout);
    case 2: 
#line 2064
    return ((1.0 / (double )65535UL) * pixel.green);
#line 2061
    fprintf(_coverage_fout, "1381\n");
#line 2061
    fflush(_coverage_fout);
    case 4: 
#line 2065
    return ((1.0 / (double )65535UL) * pixel.blue);
#line 2061
    fprintf(_coverage_fout, "1382\n");
#line 2061
    fflush(_coverage_fout);
    case 8: 
#line 2068
    if ((int )pixel.matte == 0) {
#line 2068
      fprintf(_coverage_fout, "1375\n");
#line 2068
      fflush(_coverage_fout);
#line 2070
      fx_info->matte = 0;
#line 2068
      fprintf(_coverage_fout, "1376\n");
#line 2068
      fflush(_coverage_fout);
#line 2071
      return (1.0);
    }
#line 2061
    fprintf(_coverage_fout, "1383\n");
#line 2061
    fflush(_coverage_fout);
#line 2073
    return ((1.0 / (double )65535UL) * ((MagickRealType )65535UL - pixel.opacity));
#line 2061
    fprintf(_coverage_fout, "1384\n");
#line 2061
    fflush(_coverage_fout);
    case 32: 
#line 2077
    if ((int )image->colorspace != 12) {
      {
#line 2079
      fprintf(_coverage_fout, "1377\n");
#line 2079
      fflush(_coverage_fout);
#line 2079
      ThrowMagickException(exception, "magick/fx.c", "FxGetSymbol", 2079UL, 410,
                           "ColorSeparatedImageRequired", "`%s\'",
                           image->filename);
      }
#line 2077
      fprintf(_coverage_fout, "1378\n");
#line 2077
      fflush(_coverage_fout);
#line 2082
      return (0.0);
    }
#line 2061
    fprintf(_coverage_fout, "1385\n");
#line 2061
    fflush(_coverage_fout);
#line 2084
    return ((1.0 / (double )65535UL) * pixel.index);
#line 2061
    fprintf(_coverage_fout, "1386\n");
#line 2061
    fflush(_coverage_fout);
    default: ;
#line 2087
    break;
    }
    {
#line 2089
    fprintf(_coverage_fout, "1387\n");
#line 2089
    fflush(_coverage_fout);
#line 2089
    ThrowMagickException(exception, "magick/fx.c", "FxGetSymbol", 2089UL, 410,
                         "UnableToParseExpression", "`%s\'", p);
    }
#line 2059
    fprintf(_coverage_fout, "1388\n");
#line 2059
    fflush(_coverage_fout);
#line 2091
    return (0.0);
  }
#line 2093
  switch ((int )symbol[0]) {
  case 65: 
  case 97: 
  {
#line 2098
  fprintf(_coverage_fout, "1389\n");
#line 2098
  fflush(_coverage_fout);
#line 2098
  tmp___24 = LocaleCompare((char const   *)(symbol), "a");
  }
#line 2093
  fprintf(_coverage_fout, "1553\n");
#line 2093
  fflush(_coverage_fout);
#line 2098
  if (tmp___24 == 0L) {
#line 2098
    fprintf(_coverage_fout, "1390\n");
#line 2098
    fflush(_coverage_fout);
#line 2099
    return ((1.0 / (double )65535UL) * ((MagickRealType )65535UL - pixel.opacity));
  }
#line 2100
  break;
  case 66: 
  case 98: 
  {
#line 2105
  fprintf(_coverage_fout, "1391\n");
#line 2105
  fflush(_coverage_fout);
#line 2105
  tmp___25 = LocaleCompare((char const   *)(symbol), "b");
  }
#line 2093
  fprintf(_coverage_fout, "1554\n");
#line 2093
  fflush(_coverage_fout);
#line 2105
  if (tmp___25 == 0L) {
#line 2105
    fprintf(_coverage_fout, "1392\n");
#line 2105
    fflush(_coverage_fout);
#line 2106
    return ((1.0 / (double )65535UL) * pixel.blue);
  }
#line 2107
  break;
  case 67: 
  case 99: 
  {
#line 2112
  fprintf(_coverage_fout, "1393\n");
#line 2112
  fflush(_coverage_fout);
#line 2112
  tmp___26 = LocaleNCompare((char const   *)(symbol), "channel", 7UL);
  }
#line 2093
  fprintf(_coverage_fout, "1555\n");
#line 2093
  fflush(_coverage_fout);
#line 2112
  if (tmp___26 == 0L) {
    {
#line 2120
    fprintf(_coverage_fout, "1394\n");
#line 2120
    fflush(_coverage_fout);
#line 2120
    flags = ParseGeometry((char const   *)(symbol + 7), & channel_info);
    }
#line 2112
    fprintf(_coverage_fout, "1429\n");
#line 2112
    fflush(_coverage_fout);
#line 2121
    if ((int )image->colorspace == 12) {
#line 2122
      switch ((int )channel) {
#line 2122
      fprintf(_coverage_fout, "1400\n");
#line 2122
      fflush(_coverage_fout);
      case 1: 
#line 2126
      if ((flags & 4U) == 0U) {
#line 2126
        fprintf(_coverage_fout, "1395\n");
#line 2126
        fflush(_coverage_fout);
#line 2127
        return (0.0);
      }
#line 2122
      fprintf(_coverage_fout, "1401\n");
#line 2122
      fflush(_coverage_fout);
#line 2128
      return (channel_info.rho);
#line 2122
      fprintf(_coverage_fout, "1402\n");
#line 2122
      fflush(_coverage_fout);
      case 2: 
#line 2132
      if ((flags & 8U) == 0U) {
#line 2132
        fprintf(_coverage_fout, "1396\n");
#line 2132
        fflush(_coverage_fout);
#line 2133
        return (0.0);
      }
#line 2122
      fprintf(_coverage_fout, "1403\n");
#line 2122
      fflush(_coverage_fout);
#line 2134
      return (channel_info.sigma);
#line 2122
      fprintf(_coverage_fout, "1404\n");
#line 2122
      fflush(_coverage_fout);
      case 4: 
#line 2138
      if ((flags & 1U) == 0U) {
#line 2138
        fprintf(_coverage_fout, "1397\n");
#line 2138
        fflush(_coverage_fout);
#line 2139
        return (0.0);
      }
#line 2122
      fprintf(_coverage_fout, "1405\n");
#line 2122
      fflush(_coverage_fout);
#line 2140
      return (channel_info.xi);
#line 2122
      fprintf(_coverage_fout, "1406\n");
#line 2122
      fflush(_coverage_fout);
      case 32: 
#line 2144
      if ((flags & 2U) == 0U) {
#line 2144
        fprintf(_coverage_fout, "1398\n");
#line 2144
        fflush(_coverage_fout);
#line 2145
        return (0.0);
      }
#line 2122
      fprintf(_coverage_fout, "1407\n");
#line 2122
      fflush(_coverage_fout);
#line 2146
      return (channel_info.psi);
#line 2122
      fprintf(_coverage_fout, "1408\n");
#line 2122
      fflush(_coverage_fout);
      case 8: 
#line 2150
      if ((flags & 16U) == 0U) {
#line 2150
        fprintf(_coverage_fout, "1399\n");
#line 2150
        fflush(_coverage_fout);
#line 2151
        return (0.0);
      }
#line 2122
      fprintf(_coverage_fout, "1409\n");
#line 2122
      fflush(_coverage_fout);
#line 2152
      return (channel_info.chi);
#line 2122
      fprintf(_coverage_fout, "1410\n");
#line 2122
      fflush(_coverage_fout);
      default: ;
#line 2122
      fprintf(_coverage_fout, "1411\n");
#line 2122
      fflush(_coverage_fout);
#line 2155
      return (0.0);
      }
    }
#line 2157
    switch ((int )channel) {
#line 2157
    fprintf(_coverage_fout, "1417\n");
#line 2157
    fflush(_coverage_fout);
    case 1: 
#line 2161
    if ((flags & 4U) == 0U) {
#line 2161
      fprintf(_coverage_fout, "1412\n");
#line 2161
      fflush(_coverage_fout);
#line 2162
      return (0.0);
    }
#line 2157
    fprintf(_coverage_fout, "1418\n");
#line 2157
    fflush(_coverage_fout);
#line 2163
    return (channel_info.rho);
#line 2157
    fprintf(_coverage_fout, "1419\n");
#line 2157
    fflush(_coverage_fout);
    case 2: 
#line 2167
    if ((flags & 8U) == 0U) {
#line 2167
      fprintf(_coverage_fout, "1413\n");
#line 2167
      fflush(_coverage_fout);
#line 2168
      return (0.0);
    }
#line 2157
    fprintf(_coverage_fout, "1420\n");
#line 2157
    fflush(_coverage_fout);
#line 2169
    return (channel_info.sigma);
#line 2157
    fprintf(_coverage_fout, "1421\n");
#line 2157
    fflush(_coverage_fout);
    case 4: 
#line 2173
    if ((flags & 1U) == 0U) {
#line 2173
      fprintf(_coverage_fout, "1414\n");
#line 2173
      fflush(_coverage_fout);
#line 2174
      return (0.0);
    }
#line 2157
    fprintf(_coverage_fout, "1422\n");
#line 2157
    fflush(_coverage_fout);
#line 2175
    return (channel_info.xi);
#line 2157
    fprintf(_coverage_fout, "1423\n");
#line 2157
    fflush(_coverage_fout);
    case 8: 
#line 2179
    if ((flags & 2U) == 0U) {
#line 2179
      fprintf(_coverage_fout, "1415\n");
#line 2179
      fflush(_coverage_fout);
#line 2180
      return (0.0);
    }
#line 2157
    fprintf(_coverage_fout, "1424\n");
#line 2157
    fflush(_coverage_fout);
#line 2181
    return (channel_info.psi);
#line 2157
    fprintf(_coverage_fout, "1425\n");
#line 2157
    fflush(_coverage_fout);
    case 32: 
#line 2185
    if ((flags & 16U) == 0U) {
#line 2185
      fprintf(_coverage_fout, "1416\n");
#line 2185
      fflush(_coverage_fout);
#line 2186
      return (0.0);
    }
#line 2157
    fprintf(_coverage_fout, "1426\n");
#line 2157
    fflush(_coverage_fout);
#line 2187
    return (channel_info.chi);
#line 2157
    fprintf(_coverage_fout, "1427\n");
#line 2157
    fflush(_coverage_fout);
    default: ;
#line 2157
    fprintf(_coverage_fout, "1428\n");
#line 2157
    fflush(_coverage_fout);
#line 2190
    return (0.0);
    }
#line 2112
    fprintf(_coverage_fout, "1430\n");
#line 2112
    fflush(_coverage_fout);
#line 2192
    return (0.0);
  }
  {
#line 2194
  fprintf(_coverage_fout, "1431\n");
#line 2194
  fflush(_coverage_fout);
#line 2194
  tmp___27 = LocaleCompare((char const   *)(symbol), "c");
  }
#line 2093
  fprintf(_coverage_fout, "1556\n");
#line 2093
  fflush(_coverage_fout);
#line 2194
  if (tmp___27 == 0L) {
#line 2194
    fprintf(_coverage_fout, "1432\n");
#line 2194
    fflush(_coverage_fout);
#line 2195
    return ((1.0 / (double )65535UL) * pixel.red);
  }
#line 2196
  break;
  case 68: 
  case 100: 
  {
#line 2201
  fprintf(_coverage_fout, "1433\n");
#line 2201
  fflush(_coverage_fout);
#line 2201
  tmp___29 = LocaleNCompare((char const   *)(symbol), "depth", 5UL);
  }
#line 2093
  fprintf(_coverage_fout, "1557\n");
#line 2093
  fflush(_coverage_fout);
#line 2201
  if (tmp___29 == 0L) {
    {
#line 2202
    fprintf(_coverage_fout, "1434\n");
#line 2202
    fflush(_coverage_fout);
#line 2202
    tmp___28 = FxChannelStatistics(fx_info, (Image const   *)image, channel,
                                   (char const   *)(symbol), exception);
    }
#line 2201
    fprintf(_coverage_fout, "1435\n");
#line 2201
    fflush(_coverage_fout);
#line 2202
    return (tmp___28);
  }
#line 2203
  break;
  case 71: 
  case 103: 
  {
#line 2208
  fprintf(_coverage_fout, "1436\n");
#line 2208
  fflush(_coverage_fout);
#line 2208
  tmp___30 = LocaleCompare((char const   *)(symbol), "g");
  }
#line 2093
  fprintf(_coverage_fout, "1558\n");
#line 2093
  fflush(_coverage_fout);
#line 2208
  if (tmp___30 == 0L) {
#line 2208
    fprintf(_coverage_fout, "1437\n");
#line 2208
    fflush(_coverage_fout);
#line 2209
    return ((1.0 / (double )65535UL) * pixel.green);
  }
#line 2210
  break;
  case 75: 
  case 107: 
  {
#line 2215
  fprintf(_coverage_fout, "1438\n");
#line 2215
  fflush(_coverage_fout);
#line 2215
  tmp___32 = LocaleNCompare((char const   *)(symbol), "kurtosis", 8UL);
  }
#line 2093
  fprintf(_coverage_fout, "1559\n");
#line 2093
  fflush(_coverage_fout);
#line 2215
  if (tmp___32 == 0L) {
    {
#line 2216
    fprintf(_coverage_fout, "1439\n");
#line 2216
    fflush(_coverage_fout);
#line 2216
    tmp___31 = FxChannelStatistics(fx_info, (Image const   *)image, channel,
                                   (char const   *)(symbol), exception);
    }
#line 2215
    fprintf(_coverage_fout, "1440\n");
#line 2215
    fflush(_coverage_fout);
#line 2216
    return (tmp___31);
  }
  {
#line 2217
  fprintf(_coverage_fout, "1441\n");
#line 2217
  fflush(_coverage_fout);
#line 2217
  tmp___33 = LocaleCompare((char const   *)(symbol), "k");
  }
#line 2093
  fprintf(_coverage_fout, "1560\n");
#line 2093
  fflush(_coverage_fout);
#line 2217
  if (tmp___33 == 0L) {
#line 2217
    fprintf(_coverage_fout, "1444\n");
#line 2217
    fflush(_coverage_fout);
#line 2219
    if ((int )image->colorspace != 12) {
      {
#line 2221
      fprintf(_coverage_fout, "1442\n");
#line 2221
      fflush(_coverage_fout);
#line 2221
      ThrowMagickException(exception, "magick/fx.c", "FxGetSymbol", 2221UL, 410,
                           "ColorSeparatedImageRequired", "`%s\'",
                           image->filename);
      }
#line 2219
      fprintf(_coverage_fout, "1443\n");
#line 2219
      fflush(_coverage_fout);
#line 2224
      return (0.0);
    }
#line 2217
    fprintf(_coverage_fout, "1445\n");
#line 2217
    fflush(_coverage_fout);
#line 2226
    return ((1.0 / (double )65535UL) * pixel.index);
  }
#line 2228
  break;
  case 72: 
  case 104: 
  {
#line 2233
  fprintf(_coverage_fout, "1446\n");
#line 2233
  fflush(_coverage_fout);
#line 2233
  tmp___34 = LocaleCompare((char const   *)(symbol), "h");
  }
#line 2093
  fprintf(_coverage_fout, "1561\n");
#line 2093
  fflush(_coverage_fout);
#line 2233
  if (tmp___34 == 0L) {
#line 2233
    fprintf(_coverage_fout, "1447\n");
#line 2233
    fflush(_coverage_fout);
#line 2234
    return ((double )image->rows);
  }
  {
#line 2235
  fprintf(_coverage_fout, "1448\n");
#line 2235
  fflush(_coverage_fout);
#line 2235
  tmp___38 = LocaleCompare((char const   *)(symbol), "hue");
  }
#line 2093
  fprintf(_coverage_fout, "1562\n");
#line 2093
  fflush(_coverage_fout);
#line 2235
  if (tmp___38 == 0L) {
    {
#line 2242
    fprintf(_coverage_fout, "1449\n");
#line 2242
    fflush(_coverage_fout);
#line 2242
    tmp___35 = RoundToQuantum(pixel.blue);
#line 2242
    fprintf(_coverage_fout, "1450\n");
#line 2242
    fflush(_coverage_fout);
#line 2242
    tmp___36 = RoundToQuantum(pixel.green);
#line 2242
    fprintf(_coverage_fout, "1451\n");
#line 2242
    fflush(_coverage_fout);
#line 2242
    tmp___37 = RoundToQuantum(pixel.red);
#line 2242
    fprintf(_coverage_fout, "1452\n");
#line 2242
    fflush(_coverage_fout);
#line 2242
    ConvertRGBToHSL(tmp___37, tmp___36, tmp___35, & hue, & saturation,
                    & lightness);
    }
#line 2235
    fprintf(_coverage_fout, "1453\n");
#line 2235
    fflush(_coverage_fout);
#line 2244
    return (hue);
  }
#line 2246
  break;
  case 73: 
  case 105: 
  {
#line 2251
  fprintf(_coverage_fout, "1454\n");
#line 2251
  fflush(_coverage_fout);
#line 2251
  tmp___40 = LocaleCompare((char const   *)(symbol), "image.depth");
  }
#line 2093
  fprintf(_coverage_fout, "1563\n");
#line 2093
  fflush(_coverage_fout);
#line 2251
  if (tmp___40 == 0L) {
    {
#line 2258
    fprintf(_coverage_fout, "1455\n");
#line 2258
    fflush(_coverage_fout);
#line 2258
    tmp___39 = FxChannelStatistics(fx_info, (Image const   *)image, channel,
                                   (char const   *)(symbol + 6), exception);
    }
#line 2251
    fprintf(_coverage_fout, "1456\n");
#line 2251
    fflush(_coverage_fout);
#line 2258
    return (tmp___39);
  } else {
    {
#line 2251
    fprintf(_coverage_fout, "1457\n");
#line 2251
    fflush(_coverage_fout);
#line 2251
    tmp___41 = LocaleCompare((char const   *)(symbol), "image.minima");
    }
#line 2251
    fprintf(_coverage_fout, "1480\n");
#line 2251
    fflush(_coverage_fout);
#line 2251
    if (tmp___41 == 0L) {
      {
#line 2258
      fprintf(_coverage_fout, "1458\n");
#line 2258
      fflush(_coverage_fout);
#line 2258
      tmp___39 = FxChannelStatistics(fx_info, (Image const   *)image, channel,
                                     (char const   *)(symbol + 6), exception);
      }
#line 2251
      fprintf(_coverage_fout, "1459\n");
#line 2251
      fflush(_coverage_fout);
#line 2258
      return (tmp___39);
    } else {
      {
#line 2251
      fprintf(_coverage_fout, "1460\n");
#line 2251
      fflush(_coverage_fout);
#line 2251
      tmp___42 = LocaleCompare((char const   *)(symbol), "image.maxima");
      }
#line 2251
      fprintf(_coverage_fout, "1479\n");
#line 2251
      fflush(_coverage_fout);
#line 2251
      if (tmp___42 == 0L) {
        {
#line 2258
        fprintf(_coverage_fout, "1461\n");
#line 2258
        fflush(_coverage_fout);
#line 2258
        tmp___39 = FxChannelStatistics(fx_info, (Image const   *)image, channel,
                                       (char const   *)(symbol + 6), exception);
        }
#line 2251
        fprintf(_coverage_fout, "1462\n");
#line 2251
        fflush(_coverage_fout);
#line 2258
        return (tmp___39);
      } else {
        {
#line 2251
        fprintf(_coverage_fout, "1463\n");
#line 2251
        fflush(_coverage_fout);
#line 2251
        tmp___43 = LocaleCompare((char const   *)(symbol), "image.mean");
        }
#line 2251
        fprintf(_coverage_fout, "1478\n");
#line 2251
        fflush(_coverage_fout);
#line 2251
        if (tmp___43 == 0L) {
          {
#line 2258
          fprintf(_coverage_fout, "1464\n");
#line 2258
          fflush(_coverage_fout);
#line 2258
          tmp___39 = FxChannelStatistics(fx_info, (Image const   *)image,
                                         channel, (char const   *)(symbol + 6),
                                         exception);
          }
#line 2251
          fprintf(_coverage_fout, "1465\n");
#line 2251
          fflush(_coverage_fout);
#line 2258
          return (tmp___39);
        } else {
          {
#line 2251
          fprintf(_coverage_fout, "1466\n");
#line 2251
          fflush(_coverage_fout);
#line 2251
          tmp___44 = LocaleCompare((char const   *)(symbol), "image.kurtosis");
          }
#line 2251
          fprintf(_coverage_fout, "1477\n");
#line 2251
          fflush(_coverage_fout);
#line 2251
          if (tmp___44 == 0L) {
            {
#line 2258
            fprintf(_coverage_fout, "1467\n");
#line 2258
            fflush(_coverage_fout);
#line 2258
            tmp___39 = FxChannelStatistics(fx_info, (Image const   *)image,
                                           channel,
                                           (char const   *)(symbol + 6),
                                           exception);
            }
#line 2251
            fprintf(_coverage_fout, "1468\n");
#line 2251
            fflush(_coverage_fout);
#line 2258
            return (tmp___39);
          } else {
            {
#line 2251
            fprintf(_coverage_fout, "1469\n");
#line 2251
            fflush(_coverage_fout);
#line 2251
            tmp___45 = LocaleCompare((char const   *)(symbol), "image.skewness");
            }
#line 2251
            fprintf(_coverage_fout, "1476\n");
#line 2251
            fflush(_coverage_fout);
#line 2251
            if (tmp___45 == 0L) {
              {
#line 2258
              fprintf(_coverage_fout, "1470\n");
#line 2258
              fflush(_coverage_fout);
#line 2258
              tmp___39 = FxChannelStatistics(fx_info, (Image const   *)image,
                                             channel,
                                             (char const   *)(symbol + 6),
                                             exception);
              }
#line 2251
              fprintf(_coverage_fout, "1471\n");
#line 2251
              fflush(_coverage_fout);
#line 2258
              return (tmp___39);
            } else {
              {
#line 2251
              fprintf(_coverage_fout, "1472\n");
#line 2251
              fflush(_coverage_fout);
#line 2251
              tmp___46 = LocaleCompare((char const   *)(symbol),
                                       "image.standard_deviation");
              }
#line 2251
              fprintf(_coverage_fout, "1475\n");
#line 2251
              fflush(_coverage_fout);
#line 2251
              if (tmp___46 == 0L) {
                {
#line 2258
                fprintf(_coverage_fout, "1473\n");
#line 2258
                fflush(_coverage_fout);
#line 2258
                tmp___39 = FxChannelStatistics(fx_info, (Image const   *)image,
                                               channel,
                                               (char const   *)(symbol + 6),
                                               exception);
                }
#line 2251
                fprintf(_coverage_fout, "1474\n");
#line 2251
                fflush(_coverage_fout);
#line 2258
                return (tmp___39);
              }
            }
          }
        }
      }
    }
  }
  {
#line 2259
  fprintf(_coverage_fout, "1481\n");
#line 2259
  fflush(_coverage_fout);
#line 2259
  tmp___47 = LocaleCompare((char const   *)(symbol), "image.resolution.x");
  }
#line 2093
  fprintf(_coverage_fout, "1564\n");
#line 2093
  fflush(_coverage_fout);
#line 2259
  if (tmp___47 == 0L) {
#line 2259
    fprintf(_coverage_fout, "1482\n");
#line 2259
    fflush(_coverage_fout);
#line 2260
    return (image->x_resolution);
  }
  {
#line 2261
  fprintf(_coverage_fout, "1483\n");
#line 2261
  fflush(_coverage_fout);
#line 2261
  tmp___48 = LocaleCompare((char const   *)(symbol), "image.resolution.y");
  }
#line 2093
  fprintf(_coverage_fout, "1565\n");
#line 2093
  fflush(_coverage_fout);
#line 2261
  if (tmp___48 == 0L) {
#line 2261
    fprintf(_coverage_fout, "1484\n");
#line 2261
    fflush(_coverage_fout);
#line 2262
    return (image->y_resolution);
  }
  {
#line 2263
  fprintf(_coverage_fout, "1485\n");
#line 2263
  fflush(_coverage_fout);
#line 2263
  tmp___50 = LocaleCompare((char const   *)(symbol), "intensity");
  }
#line 2093
  fprintf(_coverage_fout, "1566\n");
#line 2093
  fflush(_coverage_fout);
#line 2263
  if (tmp___50 == 0L) {
    {
#line 2264
    fprintf(_coverage_fout, "1486\n");
#line 2264
    fflush(_coverage_fout);
#line 2264
    tmp___49 = MagickPixelIntensityToQuantum((MagickPixelPacket const   *)(& pixel));
    }
#line 2263
    fprintf(_coverage_fout, "1487\n");
#line 2263
    fflush(_coverage_fout);
#line 2264
    return ((1.0 / (double )65535UL) * (double )tmp___49);
  }
  {
#line 2265
  fprintf(_coverage_fout, "1488\n");
#line 2265
  fflush(_coverage_fout);
#line 2265
  tmp___51 = LocaleCompare((char const   *)(symbol), "i");
  }
#line 2093
  fprintf(_coverage_fout, "1567\n");
#line 2093
  fflush(_coverage_fout);
#line 2265
  if (tmp___51 == 0L) {
#line 2265
    fprintf(_coverage_fout, "1489\n");
#line 2265
    fflush(_coverage_fout);
#line 2266
    return ((double )x);
  }
#line 2267
  break;
  case 74: 
  case 106: 
  {
#line 2272
  fprintf(_coverage_fout, "1490\n");
#line 2272
  fflush(_coverage_fout);
#line 2272
  tmp___52 = LocaleCompare((char const   *)(symbol), "j");
  }
#line 2093
  fprintf(_coverage_fout, "1568\n");
#line 2093
  fflush(_coverage_fout);
#line 2272
  if (tmp___52 == 0L) {
#line 2272
    fprintf(_coverage_fout, "1491\n");
#line 2272
    fflush(_coverage_fout);
#line 2273
    return ((double )y);
  }
#line 2274
  break;
  case 76: 
  case 108: 
  {
#line 2279
  fprintf(_coverage_fout, "1492\n");
#line 2279
  fflush(_coverage_fout);
#line 2279
  tmp___56 = LocaleCompare((char const   *)(symbol), "lightness");
  }
#line 2093
  fprintf(_coverage_fout, "1569\n");
#line 2093
  fflush(_coverage_fout);
#line 2279
  if (tmp___56 == 0L) {
    {
#line 2286
    fprintf(_coverage_fout, "1493\n");
#line 2286
    fflush(_coverage_fout);
#line 2286
    tmp___53 = RoundToQuantum(pixel.blue);
#line 2286
    fprintf(_coverage_fout, "1494\n");
#line 2286
    fflush(_coverage_fout);
#line 2286
    tmp___54 = RoundToQuantum(pixel.green);
#line 2286
    fprintf(_coverage_fout, "1495\n");
#line 2286
    fflush(_coverage_fout);
#line 2286
    tmp___55 = RoundToQuantum(pixel.red);
#line 2286
    fprintf(_coverage_fout, "1496\n");
#line 2286
    fflush(_coverage_fout);
#line 2286
    ConvertRGBToHSL(tmp___55, tmp___54, tmp___53, & hue___0, & saturation___0,
                    & lightness___0);
    }
#line 2279
    fprintf(_coverage_fout, "1497\n");
#line 2279
    fflush(_coverage_fout);
#line 2288
    return (lightness___0);
  }
  {
#line 2290
  fprintf(_coverage_fout, "1498\n");
#line 2290
  fflush(_coverage_fout);
#line 2290
  tmp___57 = LocaleCompare((char const   *)(symbol), "luminance");
  }
#line 2093
  fprintf(_coverage_fout, "1570\n");
#line 2093
  fflush(_coverage_fout);
#line 2290
  if (tmp___57 == 0L) {
#line 2290
    fprintf(_coverage_fout, "1499\n");
#line 2290
    fflush(_coverage_fout);
#line 2295
    luminence = (0.2126 * pixel.red + 0.7152 * pixel.green) + 0.0722 * pixel.blue;
#line 2290
    fprintf(_coverage_fout, "1500\n");
#line 2290
    fflush(_coverage_fout);
#line 2296
    return ((1.0 / (double )65535UL) * luminence);
  }
#line 2298
  break;
  case 77: 
  case 109: 
  {
#line 2303
  fprintf(_coverage_fout, "1501\n");
#line 2303
  fflush(_coverage_fout);
#line 2303
  tmp___59 = LocaleNCompare((char const   *)(symbol), "maxima", 6UL);
  }
#line 2093
  fprintf(_coverage_fout, "1571\n");
#line 2093
  fflush(_coverage_fout);
#line 2303
  if (tmp___59 == 0L) {
    {
#line 2304
    fprintf(_coverage_fout, "1502\n");
#line 2304
    fflush(_coverage_fout);
#line 2304
    tmp___58 = FxChannelStatistics(fx_info, (Image const   *)image, channel,
                                   (char const   *)(symbol), exception);
    }
#line 2303
    fprintf(_coverage_fout, "1503\n");
#line 2303
    fflush(_coverage_fout);
#line 2304
    return (tmp___58);
  }
  {
#line 2305
  fprintf(_coverage_fout, "1504\n");
#line 2305
  fflush(_coverage_fout);
#line 2305
  tmp___61 = LocaleNCompare((char const   *)(symbol), "mean", 4UL);
  }
#line 2093
  fprintf(_coverage_fout, "1572\n");
#line 2093
  fflush(_coverage_fout);
#line 2305
  if (tmp___61 == 0L) {
    {
#line 2306
    fprintf(_coverage_fout, "1505\n");
#line 2306
    fflush(_coverage_fout);
#line 2306
    tmp___60 = FxChannelStatistics(fx_info, (Image const   *)image, channel,
                                   (char const   *)(symbol), exception);
    }
#line 2305
    fprintf(_coverage_fout, "1506\n");
#line 2305
    fflush(_coverage_fout);
#line 2306
    return (tmp___60);
  }
  {
#line 2307
  fprintf(_coverage_fout, "1507\n");
#line 2307
  fflush(_coverage_fout);
#line 2307
  tmp___63 = LocaleNCompare((char const   *)(symbol), "minima", 6UL);
  }
#line 2093
  fprintf(_coverage_fout, "1573\n");
#line 2093
  fflush(_coverage_fout);
#line 2307
  if (tmp___63 == 0L) {
    {
#line 2308
    fprintf(_coverage_fout, "1508\n");
#line 2308
    fflush(_coverage_fout);
#line 2308
    tmp___62 = FxChannelStatistics(fx_info, (Image const   *)image, channel,
                                   (char const   *)(symbol), exception);
    }
#line 2307
    fprintf(_coverage_fout, "1509\n");
#line 2307
    fflush(_coverage_fout);
#line 2308
    return (tmp___62);
  }
  {
#line 2309
  fprintf(_coverage_fout, "1510\n");
#line 2309
  fflush(_coverage_fout);
#line 2309
  tmp___64 = LocaleCompare((char const   *)(symbol), "m");
  }
#line 2093
  fprintf(_coverage_fout, "1574\n");
#line 2093
  fflush(_coverage_fout);
#line 2309
  if (tmp___64 == 0L) {
#line 2309
    fprintf(_coverage_fout, "1511\n");
#line 2309
    fflush(_coverage_fout);
#line 2310
    return ((1.0 / (double )65535UL) * pixel.blue);
  }
#line 2311
  break;
  case 78: 
  case 110: 
  {
#line 2316
  fprintf(_coverage_fout, "1512\n");
#line 2316
  fflush(_coverage_fout);
#line 2316
  tmp___66 = LocaleCompare((char const   *)(symbol), "n");
  }
#line 2093
  fprintf(_coverage_fout, "1575\n");
#line 2093
  fflush(_coverage_fout);
#line 2316
  if (tmp___66 == 0L) {
    {
#line 2317
    fprintf(_coverage_fout, "1513\n");
#line 2317
    fflush(_coverage_fout);
#line 2317
    tmp___65 = GetImageListLength(fx_info->images);
    }
#line 2316
    fprintf(_coverage_fout, "1514\n");
#line 2316
    fflush(_coverage_fout);
#line 2317
    return ((double )tmp___65);
  }
#line 2318
  break;
  case 79: 
  case 111: 
  {
#line 2323
  fprintf(_coverage_fout, "1515\n");
#line 2323
  fflush(_coverage_fout);
#line 2323
  tmp___67 = LocaleCompare((char const   *)(symbol), "o");
  }
#line 2093
  fprintf(_coverage_fout, "1576\n");
#line 2093
  fflush(_coverage_fout);
#line 2323
  if (tmp___67 == 0L) {
#line 2323
    fprintf(_coverage_fout, "1516\n");
#line 2323
    fflush(_coverage_fout);
#line 2324
    return ((1.0 / (double )65535UL) * pixel.opacity);
  }
#line 2325
  break;
  case 80: 
  case 112: 
  {
#line 2330
  fprintf(_coverage_fout, "1517\n");
#line 2330
  fflush(_coverage_fout);
#line 2330
  tmp___68 = LocaleCompare((char const   *)(symbol), "page.height");
  }
#line 2093
  fprintf(_coverage_fout, "1577\n");
#line 2093
  fflush(_coverage_fout);
#line 2330
  if (tmp___68 == 0L) {
#line 2330
    fprintf(_coverage_fout, "1518\n");
#line 2330
    fflush(_coverage_fout);
#line 2331
    return ((double )image->page.height);
  }
  {
#line 2332
  fprintf(_coverage_fout, "1519\n");
#line 2332
  fflush(_coverage_fout);
#line 2332
  tmp___69 = LocaleCompare((char const   *)(symbol), "page.width");
  }
#line 2093
  fprintf(_coverage_fout, "1578\n");
#line 2093
  fflush(_coverage_fout);
#line 2332
  if (tmp___69 == 0L) {
#line 2332
    fprintf(_coverage_fout, "1520\n");
#line 2332
    fflush(_coverage_fout);
#line 2333
    return ((double )image->page.width);
  }
  {
#line 2334
  fprintf(_coverage_fout, "1521\n");
#line 2334
  fflush(_coverage_fout);
#line 2334
  tmp___70 = LocaleCompare((char const   *)(symbol), "page.x");
  }
#line 2093
  fprintf(_coverage_fout, "1579\n");
#line 2093
  fflush(_coverage_fout);
#line 2334
  if (tmp___70 == 0L) {
#line 2334
    fprintf(_coverage_fout, "1522\n");
#line 2334
    fflush(_coverage_fout);
#line 2335
    return ((double )image->page.x);
  }
  {
#line 2336
  fprintf(_coverage_fout, "1523\n");
#line 2336
  fflush(_coverage_fout);
#line 2336
  tmp___71 = LocaleCompare((char const   *)(symbol), "page.y");
  }
#line 2093
  fprintf(_coverage_fout, "1580\n");
#line 2093
  fflush(_coverage_fout);
#line 2336
  if (tmp___71 == 0L) {
#line 2336
    fprintf(_coverage_fout, "1524\n");
#line 2336
    fflush(_coverage_fout);
#line 2337
    return ((double )image->page.y);
  }
#line 2338
  break;
  case 82: 
  case 114: 
  {
#line 2343
  fprintf(_coverage_fout, "1525\n");
#line 2343
  fflush(_coverage_fout);
#line 2343
  tmp___72 = LocaleCompare((char const   *)(symbol), "resolution.x");
  }
#line 2093
  fprintf(_coverage_fout, "1581\n");
#line 2093
  fflush(_coverage_fout);
#line 2343
  if (tmp___72 == 0L) {
#line 2343
    fprintf(_coverage_fout, "1526\n");
#line 2343
    fflush(_coverage_fout);
#line 2344
    return (image->x_resolution);
  }
  {
#line 2345
  fprintf(_coverage_fout, "1527\n");
#line 2345
  fflush(_coverage_fout);
#line 2345
  tmp___73 = LocaleCompare((char const   *)(symbol), "resolution.y");
  }
#line 2093
  fprintf(_coverage_fout, "1582\n");
#line 2093
  fflush(_coverage_fout);
#line 2345
  if (tmp___73 == 0L) {
#line 2345
    fprintf(_coverage_fout, "1528\n");
#line 2345
    fflush(_coverage_fout);
#line 2346
    return (image->y_resolution);
  }
  {
#line 2347
  fprintf(_coverage_fout, "1529\n");
#line 2347
  fflush(_coverage_fout);
#line 2347
  tmp___74 = LocaleCompare((char const   *)(symbol), "r");
  }
#line 2093
  fprintf(_coverage_fout, "1583\n");
#line 2093
  fflush(_coverage_fout);
#line 2347
  if (tmp___74 == 0L) {
#line 2347
    fprintf(_coverage_fout, "1530\n");
#line 2347
    fflush(_coverage_fout);
#line 2348
    return ((1.0 / (double )65535UL) * pixel.red);
  }
#line 2349
  break;
  case 83: 
  case 115: 
  {
#line 2354
  fprintf(_coverage_fout, "1531\n");
#line 2354
  fflush(_coverage_fout);
#line 2354
  tmp___78 = LocaleCompare((char const   *)(symbol), "saturation");
  }
#line 2093
  fprintf(_coverage_fout, "1584\n");
#line 2093
  fflush(_coverage_fout);
#line 2354
  if (tmp___78 == 0L) {
    {
#line 2361
    fprintf(_coverage_fout, "1532\n");
#line 2361
    fflush(_coverage_fout);
#line 2361
    tmp___75 = RoundToQuantum(pixel.blue);
#line 2361
    fprintf(_coverage_fout, "1533\n");
#line 2361
    fflush(_coverage_fout);
#line 2361
    tmp___76 = RoundToQuantum(pixel.green);
#line 2361
    fprintf(_coverage_fout, "1534\n");
#line 2361
    fflush(_coverage_fout);
#line 2361
    tmp___77 = RoundToQuantum(pixel.red);
#line 2361
    fprintf(_coverage_fout, "1535\n");
#line 2361
    fflush(_coverage_fout);
#line 2361
    ConvertRGBToHSL(tmp___77, tmp___76, tmp___75, & hue___1, & saturation___1,
                    & lightness___1);
    }
#line 2354
    fprintf(_coverage_fout, "1536\n");
#line 2354
    fflush(_coverage_fout);
#line 2363
    return (saturation___1);
  }
  {
#line 2365
  fprintf(_coverage_fout, "1537\n");
#line 2365
  fflush(_coverage_fout);
#line 2365
  tmp___80 = LocaleNCompare((char const   *)(symbol), "skewness", 8UL);
  }
#line 2093
  fprintf(_coverage_fout, "1585\n");
#line 2093
  fflush(_coverage_fout);
#line 2365
  if (tmp___80 == 0L) {
    {
#line 2366
    fprintf(_coverage_fout, "1538\n");
#line 2366
    fflush(_coverage_fout);
#line 2366
    tmp___79 = FxChannelStatistics(fx_info, (Image const   *)image, channel,
                                   (char const   *)(symbol), exception);
    }
#line 2365
    fprintf(_coverage_fout, "1539\n");
#line 2365
    fflush(_coverage_fout);
#line 2366
    return (tmp___79);
  }
  {
#line 2367
  fprintf(_coverage_fout, "1540\n");
#line 2367
  fflush(_coverage_fout);
#line 2367
  tmp___82 = LocaleNCompare((char const   *)(symbol), "standard_deviation", 18UL);
  }
#line 2093
  fprintf(_coverage_fout, "1586\n");
#line 2093
  fflush(_coverage_fout);
#line 2367
  if (tmp___82 == 0L) {
    {
#line 2368
    fprintf(_coverage_fout, "1541\n");
#line 2368
    fflush(_coverage_fout);
#line 2368
    tmp___81 = FxChannelStatistics(fx_info, (Image const   *)image, channel,
                                   (char const   *)(symbol), exception);
    }
#line 2367
    fprintf(_coverage_fout, "1542\n");
#line 2367
    fflush(_coverage_fout);
#line 2368
    return (tmp___81);
  }
#line 2369
  break;
  case 84: 
  case 116: 
  {
#line 2374
  fprintf(_coverage_fout, "1543\n");
#line 2374
  fflush(_coverage_fout);
#line 2374
  tmp___83 = LocaleCompare((char const   *)(symbol), "t");
  }
#line 2093
  fprintf(_coverage_fout, "1587\n");
#line 2093
  fflush(_coverage_fout);
#line 2374
  if (tmp___83 == 0L) {
#line 2374
    fprintf(_coverage_fout, "1544\n");
#line 2374
    fflush(_coverage_fout);
#line 2375
    return ((double )(fx_info->images)->scene);
  }
#line 2376
  break;
  case 87: 
  case 119: 
  {
#line 2381
  fprintf(_coverage_fout, "1545\n");
#line 2381
  fflush(_coverage_fout);
#line 2381
  tmp___84 = LocaleCompare((char const   *)(symbol), "w");
  }
#line 2093
  fprintf(_coverage_fout, "1588\n");
#line 2093
  fflush(_coverage_fout);
#line 2381
  if (tmp___84 == 0L) {
#line 2381
    fprintf(_coverage_fout, "1546\n");
#line 2381
    fflush(_coverage_fout);
#line 2382
    return ((double )image->columns);
  }
#line 2383
  break;
  case 89: 
  case 121: 
  {
#line 2388
  fprintf(_coverage_fout, "1547\n");
#line 2388
  fflush(_coverage_fout);
#line 2388
  tmp___85 = LocaleCompare((char const   *)(symbol), "y");
  }
#line 2093
  fprintf(_coverage_fout, "1589\n");
#line 2093
  fflush(_coverage_fout);
#line 2388
  if (tmp___85 == 0L) {
#line 2388
    fprintf(_coverage_fout, "1548\n");
#line 2388
    fflush(_coverage_fout);
#line 2389
    return ((1.0 / (double )65535UL) * pixel.green);
  }
#line 2390
  break;
  case 90: 
  case 122: 
  {
#line 2395
  fprintf(_coverage_fout, "1549\n");
#line 2395
  fflush(_coverage_fout);
#line 2395
  tmp___87 = LocaleCompare((char const   *)(symbol), "z");
  }
#line 2093
  fprintf(_coverage_fout, "1590\n");
#line 2093
  fflush(_coverage_fout);
#line 2395
  if (tmp___87 == 0L) {
    {
#line 2400
    fprintf(_coverage_fout, "1550\n");
#line 2400
    fflush(_coverage_fout);
#line 2400
    tmp___86 = GetImageChannelDepth((Image const   *)image, channel,
                                    fx_info->exception);
#line 2400
    fprintf(_coverage_fout, "1551\n");
#line 2400
    fflush(_coverage_fout);
#line 2400
    depth = (double )tmp___86;
    }
#line 2395
    fprintf(_coverage_fout, "1552\n");
#line 2395
    fflush(_coverage_fout);
#line 2402
    return (depth);
  }
#line 2404
  break;
#line 2093
  fprintf(_coverage_fout, "1591\n");
#line 2093
  fflush(_coverage_fout);
  default: ;
#line 2407
  break;
  }
  {
#line 2409
  fprintf(_coverage_fout, "1592\n");
#line 2409
  fflush(_coverage_fout);
#line 2409
  tmp___88 = GetValueFromSplayTree(fx_info->symbols, (void const   *)(symbol));
#line 2409
  fprintf(_coverage_fout, "1593\n");
#line 2409
  fflush(_coverage_fout);
#line 2409
  value = (char const   *)tmp___88;
  }
#line 1865
  fprintf(_coverage_fout, "1602\n");
#line 1865
  fflush(_coverage_fout);
#line 2410
  if ((unsigned long )value != (unsigned long )((char const   *)((void *)0))) {
    {
#line 2411
    fprintf(_coverage_fout, "1594\n");
#line 2411
    fflush(_coverage_fout);
#line 2411
    tmp___89 = atof(value);
    }
#line 2410
    fprintf(_coverage_fout, "1595\n");
#line 2410
    fflush(_coverage_fout);
#line 2411
    return (tmp___89);
  }
  {
#line 2412
  fprintf(_coverage_fout, "1596\n");
#line 2412
  fflush(_coverage_fout);
#line 2412
  ThrowMagickException(exception, "magick/fx.c", "FxGetSymbol", 2412UL, 410,
                       "UnableToParseExpression", "`%s\'", symbol);
  }
#line 1865
  fprintf(_coverage_fout, "1603\n");
#line 1865
  fflush(_coverage_fout);
#line 2414
  return (0.0);
}
}
#line 2417 "magick/fx.c"
static char const   *FxOperatorPrecedence(char const   *expression ,
                                          ExceptionInfo *exception ) 
{ FxPrecedence precedence ;
  FxPrecedence target ;
  register char const   *subexpression ;
  register int c ;
  unsigned long level ;
  unsigned short const   **tmp ;
  long tmp___0 ;
  unsigned short const   **tmp___1 ;
  void *tmp___2 ;
  char *tmp___3 ;
  unsigned short const   **tmp___4 ;
  void *tmp___5 ;
  char *tmp___6 ;
  unsigned short const   **tmp___7 ;
  unsigned short const   **tmp___8 ;
  void *tmp___9 ;
  char *tmp___10 ;
  void *tmp___11 ;
  char *tmp___12 ;
  unsigned short const   **tmp___13 ;
  void *tmp___14 ;
  char *tmp___15 ;
  char const   *tmp___16 ;

  {
#line 2417
  fprintf(_coverage_fout, "1671\n");
#line 2417
  fflush(_coverage_fout);
#line 2454
  c = 0;
#line 2455
  level = 0UL;
#line 2456
  subexpression = (char const   *)((void *)0);
#line 2457
  target = 1;
#line 2417
  fprintf(_coverage_fout, "1672\n");
#line 2417
  fflush(_coverage_fout);
#line 2458
  while (1) {
#line 2458
    fprintf(_coverage_fout, "1663\n");
#line 2458
    fflush(_coverage_fout);
#line 2458
    if (! ((int const   )*expression != 0)) {
#line 2458
      break;
    }
    {
#line 2460
    fprintf(_coverage_fout, "1604\n");
#line 2460
    fflush(_coverage_fout);
#line 2460
    precedence = 0;
#line 2460
    fprintf(_coverage_fout, "1605\n");
#line 2460
    fflush(_coverage_fout);
#line 2461
    tmp = __ctype_b_loc();
    }
#line 2458
    fprintf(_coverage_fout, "1664\n");
#line 2458
    fflush(_coverage_fout);
#line 2461
    if (((int const   )*(*tmp + (int )((char )*expression)) & 8192) != 0) {
#line 2461
      fprintf(_coverage_fout, "1606\n");
#line 2461
      fflush(_coverage_fout);
#line 2463
      expression ++;
#line 2464
      continue;
    } else {
#line 2461
      fprintf(_coverage_fout, "1608\n");
#line 2461
      fflush(_coverage_fout);
#line 2461
      if (c == 64) {
#line 2461
        fprintf(_coverage_fout, "1607\n");
#line 2461
        fflush(_coverage_fout);
#line 2463
        expression ++;
#line 2464
        continue;
      }
    }
    {
#line 2466
    fprintf(_coverage_fout, "1609\n");
#line 2466
    fflush(_coverage_fout);
#line 2466
    tmp___0 = LocaleNCompare(expression, "atan2", 5UL);
    }
#line 2458
    fprintf(_coverage_fout, "1665\n");
#line 2458
    fflush(_coverage_fout);
#line 2466
    if (tmp___0 == 0L) {
#line 2466
      fprintf(_coverage_fout, "1610\n");
#line 2466
      fflush(_coverage_fout);
#line 2468
      expression += 5;
#line 2469
      continue;
    }
#line 2458
    fprintf(_coverage_fout, "1666\n");
#line 2458
    fflush(_coverage_fout);
#line 2471
    if (c == 123) {
#line 2471
      fprintf(_coverage_fout, "1611\n");
#line 2471
      fflush(_coverage_fout);
#line 2472
      level ++;
    } else {
#line 2471
      fprintf(_coverage_fout, "1617\n");
#line 2471
      fflush(_coverage_fout);
#line 2471
      if (c == 91) {
#line 2471
        fprintf(_coverage_fout, "1612\n");
#line 2471
        fflush(_coverage_fout);
#line 2472
        level ++;
      } else {
#line 2471
        fprintf(_coverage_fout, "1616\n");
#line 2471
        fflush(_coverage_fout);
#line 2474
        if (c == 125) {
#line 2474
          fprintf(_coverage_fout, "1613\n");
#line 2474
          fflush(_coverage_fout);
#line 2475
          level --;
        } else {
#line 2474
          fprintf(_coverage_fout, "1615\n");
#line 2474
          fflush(_coverage_fout);
#line 2474
          if (c == 93) {
#line 2474
            fprintf(_coverage_fout, "1614\n");
#line 2474
            fflush(_coverage_fout);
#line 2475
            level --;
          }
        }
      }
    }
#line 2458
    fprintf(_coverage_fout, "1667\n");
#line 2458
    fflush(_coverage_fout);
#line 2476
    if (level == 0UL) {
#line 2477
      switch ((int )((unsigned char )*expression)) {
#line 2477
      fprintf(_coverage_fout, "1638\n");
#line 2477
      fflush(_coverage_fout);
      case 126: 
      case 33: 
#line 2482
      precedence = 2;
#line 2483
      break;
#line 2477
      fprintf(_coverage_fout, "1639\n");
#line 2477
      fflush(_coverage_fout);
      case 94: 
#line 2487
      precedence = 3;
#line 2488
      break;
#line 2477
      fprintf(_coverage_fout, "1640\n");
#line 2477
      fflush(_coverage_fout);
      default: ;
#line 2477
      fprintf(_coverage_fout, "1641\n");
#line 2477
      fflush(_coverage_fout);
#line 2492
      if (c != 0) {
        {
#line 2492
        fprintf(_coverage_fout, "1618\n");
#line 2492
        fflush(_coverage_fout);
#line 2492
        tmp___1 = __ctype_b_loc();
        }
#line 2492
        fprintf(_coverage_fout, "1632\n");
#line 2492
        fflush(_coverage_fout);
#line 2492
        if (((int const   )*(*tmp___1 + (int )((char )c)) & 2048) != 0) {
          goto _L___0;
        } else {
          {
#line 2492
          fprintf(_coverage_fout, "1619\n");
#line 2492
          fflush(_coverage_fout);
#line 2492
          tmp___3 = __builtin_strchr((char *)")", c);
          }
#line 2492
          fprintf(_coverage_fout, "1631\n");
#line 2492
          fflush(_coverage_fout);
#line 2492
          if ((unsigned long )tmp___3 != (unsigned long )((char *)((void *)0))) {
            _L___0: /* CIL Label */ 
            {
#line 2492
            fprintf(_coverage_fout, "1620\n");
#line 2492
            fflush(_coverage_fout);
#line 2492
            tmp___4 = __ctype_b_loc();
            }
#line 2492
            fprintf(_coverage_fout, "1630\n");
#line 2492
            fflush(_coverage_fout);
#line 2492
            if (((int const   )*(*tmp___4 + (int )((char )*expression)) & 512) != 0) {
              goto _L;
            } else {
              {
#line 2492
              fprintf(_coverage_fout, "1621\n");
#line 2492
              fflush(_coverage_fout);
#line 2492
              tmp___6 = __builtin_strchr((char *)"(", (int )*expression);
              }
#line 2492
              fprintf(_coverage_fout, "1629\n");
#line 2492
              fflush(_coverage_fout);
#line 2492
              if ((unsigned long )tmp___6 != (unsigned long )((char *)((void *)0))) {
                goto _L;
              } else {
                {
#line 2492
                fprintf(_coverage_fout, "1622\n");
#line 2492
                fflush(_coverage_fout);
#line 2492
                tmp___7 = __ctype_b_loc();
                }
#line 2492
                fprintf(_coverage_fout, "1628\n");
#line 2492
                fflush(_coverage_fout);
#line 2492
                if (((int const   )*(*tmp___7 + (int )((char )c)) & 2048) == 0) {
                  {
#line 2492
                  fprintf(_coverage_fout, "1623\n");
#line 2492
                  fflush(_coverage_fout);
#line 2492
                  tmp___8 = __ctype_b_loc();
                  }
#line 2492
                  fprintf(_coverage_fout, "1627\n");
#line 2492
                  fflush(_coverage_fout);
#line 2492
                  if (((int const   )*(*tmp___8 + (int )((char )*expression)) & 2048) != 0) {
                    _L: /* CIL Label */ 
                    {
#line 2492
                    fprintf(_coverage_fout, "1624\n");
#line 2492
                    fflush(_coverage_fout);
#line 2492
                    tmp___10 = __builtin_strchr((char *)"xy", (int )*expression);
                    }
#line 2492
                    fprintf(_coverage_fout, "1626\n");
#line 2492
                    fflush(_coverage_fout);
#line 2492
                    if ((unsigned long )tmp___10 == (unsigned long )((char *)((void *)0))) {
#line 2492
                      fprintf(_coverage_fout, "1625\n");
#line 2492
                      fflush(_coverage_fout);
#line 2499
                      precedence = 4;
                    }
                  }
                }
              }
            }
          }
        }
      }
#line 2500
      break;
#line 2477
      fprintf(_coverage_fout, "1642\n");
#line 2477
      fflush(_coverage_fout);
      case 42: 
      case 47: 
      case 37: 
#line 2506
      precedence = 4;
#line 2507
      break;
      case 43: 
      case 45: 
      {
#line 2512
      fprintf(_coverage_fout, "1633\n");
#line 2512
      fflush(_coverage_fout);
#line 2512
      tmp___12 = __builtin_strchr((char *)"(+-/*%:&^|<>~,", c);
      }
#line 2477
      fprintf(_coverage_fout, "1643\n");
#line 2477
      fflush(_coverage_fout);
#line 2512
      if ((unsigned long )tmp___12 == (unsigned long )((char *)((void *)0))) {
#line 2512
        fprintf(_coverage_fout, "1634\n");
#line 2512
        fflush(_coverage_fout);
#line 2514
        precedence = 5;
      } else {
        {
#line 2512
        fprintf(_coverage_fout, "1635\n");
#line 2512
        fflush(_coverage_fout);
#line 2512
        tmp___13 = __ctype_b_loc();
        }
#line 2512
        fprintf(_coverage_fout, "1637\n");
#line 2512
        fflush(_coverage_fout);
#line 2512
        if (((int const   )*(*tmp___13 + c) & 1024) != 0) {
#line 2512
          fprintf(_coverage_fout, "1636\n");
#line 2512
          fflush(_coverage_fout);
#line 2514
          precedence = 5;
        }
      }
#line 2515
      break;
#line 2477
      fprintf(_coverage_fout, "1644\n");
#line 2477
      fflush(_coverage_fout);
      case 245: 
      case 246: 
#line 2520
      precedence = 6;
#line 2521
      break;
#line 2477
      fprintf(_coverage_fout, "1645\n");
#line 2477
      fflush(_coverage_fout);
      case 60: 
      case 247: 
      case 248: 
      case 62: 
#line 2528
      precedence = 7;
#line 2529
      break;
#line 2477
      fprintf(_coverage_fout, "1646\n");
#line 2477
      fflush(_coverage_fout);
      case 249: 
      case 250: 
#line 2534
      precedence = 8;
#line 2535
      break;
#line 2477
      fprintf(_coverage_fout, "1647\n");
#line 2477
      fflush(_coverage_fout);
      case 38: 
#line 2539
      precedence = 9;
#line 2540
      break;
#line 2477
      fprintf(_coverage_fout, "1648\n");
#line 2477
      fflush(_coverage_fout);
      case 124: 
#line 2544
      precedence = 10;
#line 2545
      break;
#line 2477
      fprintf(_coverage_fout, "1649\n");
#line 2477
      fflush(_coverage_fout);
      case 251: 
#line 2549
      precedence = 11;
#line 2550
      break;
#line 2477
      fprintf(_coverage_fout, "1650\n");
#line 2477
      fflush(_coverage_fout);
      case 252: 
#line 2554
      precedence = 12;
#line 2555
      break;
#line 2477
      fprintf(_coverage_fout, "1651\n");
#line 2477
      fflush(_coverage_fout);
      case 58: 
      case 63: 
#line 2560
      precedence = 13;
#line 2561
      break;
#line 2477
      fprintf(_coverage_fout, "1652\n");
#line 2477
      fflush(_coverage_fout);
      case 61: 
#line 2565
      precedence = 14;
#line 2566
      break;
#line 2477
      fprintf(_coverage_fout, "1653\n");
#line 2477
      fflush(_coverage_fout);
      case 44: 
#line 2570
      precedence = 15;
#line 2571
      break;
#line 2477
      fprintf(_coverage_fout, "1654\n");
#line 2477
      fflush(_coverage_fout);
      case 59: 
#line 2575
      precedence = 16;
#line 2576
      break;
      }
    }
#line 2458
    fprintf(_coverage_fout, "1668\n");
#line 2458
    fflush(_coverage_fout);
#line 2579
    if ((int )precedence == 2) {
      goto _L___1;
    } else {
#line 2579
      fprintf(_coverage_fout, "1660\n");
#line 2579
      fflush(_coverage_fout);
#line 2579
      if ((int )precedence == 13) {
        goto _L___1;
      } else {
#line 2579
        fprintf(_coverage_fout, "1659\n");
#line 2579
        fflush(_coverage_fout);
#line 2579
        if ((int )precedence == 14) {
#line 2579
          fprintf(_coverage_fout, "1656\n");
#line 2579
          fflush(_coverage_fout);
          _L___1: /* CIL Label */ 
#line 2583
          if ((int )precedence > (int )target) {
#line 2583
            fprintf(_coverage_fout, "1655\n");
#line 2583
            fflush(_coverage_fout);
#line 2588
            target = precedence;
#line 2589
            subexpression = expression;
          }
        } else {
#line 2579
          fprintf(_coverage_fout, "1658\n");
#line 2579
          fflush(_coverage_fout);
#line 2593
          if ((int )precedence >= (int )target) {
#line 2593
            fprintf(_coverage_fout, "1657\n");
#line 2593
            fflush(_coverage_fout);
#line 2598
            target = precedence;
#line 2599
            subexpression = expression;
          }
        }
      }
    }
    {
#line 2601
    fprintf(_coverage_fout, "1661\n");
#line 2601
    fflush(_coverage_fout);
#line 2601
    tmp___15 = __builtin_strchr((char *)"(", (int )*expression);
    }
#line 2458
    fprintf(_coverage_fout, "1669\n");
#line 2458
    fflush(_coverage_fout);
#line 2601
    if ((unsigned long )tmp___15 != (unsigned long )((char *)((void *)0))) {
      {
#line 2602
      fprintf(_coverage_fout, "1662\n");
#line 2602
      fflush(_coverage_fout);
#line 2602
      expression = FxSubexpression(expression, exception);
      }
    }
#line 2458
    fprintf(_coverage_fout, "1670\n");
#line 2458
    fflush(_coverage_fout);
#line 2603
    tmp___16 = expression;
#line 2603
    expression ++;
#line 2603
    c = (int )*tmp___16;
  }
#line 2417
  fprintf(_coverage_fout, "1673\n");
#line 2417
  fflush(_coverage_fout);
#line 2605
  return (subexpression);
}
}
#line 2608 "magick/fx.c"
static MagickRealType FxEvaluateSubexpression(FxInfo *fx_info ,
                                              ChannelType channel , long x ,
                                              long y ,
                                              char const   *expression ,
                                              MagickRealType *beta ,
                                              ExceptionInfo *exception ) 
{ char *q ;
  char subexpression[4096] ;
  MagickRealType alpha ;
  MagickRealType gamma___0 ;
  register char const   *p ;
  unsigned short const   **tmp ;
  double tmp___0 ;
  MagickRealType tmp___1 ;
  double tmp___2 ;
  double tmp___3 ;
  double tmp___4 ;
  double tmp___5 ;
  double tmp___6 ;
  double tmp___7 ;
  double tmp___8 ;
  double tmp___9 ;
  double tmp___10 ;
  double tmp___11 ;
  double tmp___12 ;
  double tmp___13 ;
  MagickRealType gamma___1 ;
  char *tmp___14 ;
  double tmp___15 ;
  char numeric[4096] ;
  unsigned short const   **tmp___16 ;
  char *tmp___17 ;
  char *tmp___18 ;
  MagickRealType tmp___19 ;
  size_t tmp___20 ;
  void *tmp___21 ;
  char *tmp___22 ;
  double tmp___23 ;
  long tmp___24 ;
  double tmp___25 ;
  long tmp___26 ;
  double tmp___27 ;
  long tmp___28 ;
  double tmp___29 ;
  long tmp___30 ;
  double tmp___31 ;
  long tmp___32 ;
  double tmp___33 ;
  long tmp___34 ;
  MagickRealType tmp___35 ;
  long tmp___36 ;
  MagickRealType tmp___37 ;
  long tmp___38 ;
  double tmp___39 ;
  long tmp___40 ;
  double tmp___41 ;
  long tmp___42 ;
  double tmp___43 ;
  long tmp___44 ;
  MagickRealType tmp___45 ;
  long tmp___46 ;
  char const   *type ;
  size_t tmp___47 ;
  size_t tmp___48 ;
  long tmp___49 ;
  long tmp___50 ;
  double tmp___51 ;
  long tmp___52 ;
  long tmp___53 ;
  double tmp___54 ;
  long tmp___55 ;
  MagickRealType tmp___56 ;
  long tmp___57 ;
  MagickRealType tmp___58 ;
  long tmp___59 ;
  MagickRealType tmp___60 ;
  long tmp___61 ;
  double tmp___62 ;
  long tmp___63 ;
  MagickRealType tmp___64 ;
  long tmp___65 ;
  MagickRealType tmp___66 ;
  long tmp___67 ;
  double tmp___68 ;
  long tmp___69 ;
  MagickRealType tmp___70 ;
  long tmp___71 ;
  MagickRealType tmp___72 ;
  long tmp___73 ;
  double tmp___74 ;
  long tmp___75 ;
  double tmp___76 ;
  double tmp___77 ;
  long tmp___78 ;
  double tmp___79 ;
  long tmp___80 ;
  MagickRealType tmp___81 ;
  long tmp___82 ;
  long tmp___83 ;
  long tmp___84 ;
  MagickRealType tmp___85 ;
  long tmp___86 ;
  long tmp___87 ;
  MagickRealType tmp___88 ;
  long tmp___89 ;
  double tmp___90 ;
  long tmp___91 ;
  MagickRealType tmp___92 ;
  long tmp___93 ;
  MagickRealType tmp___94 ;
  long tmp___95 ;
  long tmp___96 ;
  MagickRealType tmp___97 ;
  long tmp___98 ;
  long tmp___99 ;
  double tmp___100 ;
  long tmp___101 ;
  MagickRealType tmp___102 ;
  long tmp___103 ;
  long tmp___104 ;
  long tmp___105 ;
  double tmp___106 ;
  long tmp___107 ;
  double tmp___108 ;
  double tmp___109 ;
  long tmp___110 ;
  MagickRealType tmp___111 ;
  long tmp___112 ;
  MagickRealType tmp___113 ;
  long tmp___114 ;
  double tmp___115 ;
  long tmp___116 ;
  double tmp___117 ;
  long tmp___118 ;
  double tmp___119 ;
  long tmp___120 ;
  double tmp___121 ;
  long tmp___122 ;
  MagickRealType tmp___123 ;
  long tmp___124 ;
  double tmp___125 ;
  long tmp___126 ;
  double tmp___127 ;
  long tmp___128 ;
  long tmp___129 ;
  MagickRealType tmp___130 ;
  long tmp___131 ;
  MagickRealType tmp___132 ;
  long tmp___133 ;
  MagickRealType tmp___134 ;
  long tmp___135 ;
  MagickRealType tmp___136 ;
  long tmp___137 ;
  MagickRealType tmp___138 ;
  long tmp___139 ;
  MagickRealType tmp___140 ;
  long tmp___141 ;
  MagickRealType tmp___142 ;

  {
#line 2608
  fprintf(_coverage_fout, "2140\n");
#line 2608
  fflush(_coverage_fout);
#line 2623
  *beta = 0.0;
#line 2608
  fprintf(_coverage_fout, "2141\n");
#line 2608
  fflush(_coverage_fout);
#line 2624
  if ((int )exception->severity != 0) {
#line 2624
    fprintf(_coverage_fout, "1674\n");
#line 2624
    fflush(_coverage_fout);
#line 2625
    return (0.0);
  }
#line 2608
  fprintf(_coverage_fout, "2142\n");
#line 2608
  fflush(_coverage_fout);
#line 2626
  while (1) {
    {
#line 2626
    fprintf(_coverage_fout, "1675\n");
#line 2626
    fflush(_coverage_fout);
#line 2626
    tmp = __ctype_b_loc();
    }
#line 2626
    fprintf(_coverage_fout, "1676\n");
#line 2626
    fflush(_coverage_fout);
#line 2626
    if (! (((int const   )*(*tmp + (int )*expression) & 8192) != 0)) {
#line 2626
      break;
    }
#line 2626
    fprintf(_coverage_fout, "1677\n");
#line 2626
    fflush(_coverage_fout);
#line 2627
    expression ++;
  }
#line 2608
  fprintf(_coverage_fout, "2143\n");
#line 2608
  fflush(_coverage_fout);
#line 2628
  if ((int const   )*expression == 0) {
    {
#line 2630
    fprintf(_coverage_fout, "1678\n");
#line 2630
    fflush(_coverage_fout);
#line 2630
    ThrowMagickException(exception, "magick/fx.c", "FxEvaluateSubexpression",
                         2630UL, 410, "MissingExpression", "`%s\'", expression);
    }
#line 2628
    fprintf(_coverage_fout, "1679\n");
#line 2628
    fflush(_coverage_fout);
#line 2632
    return (0.0);
  }
  {
#line 2634
  fprintf(_coverage_fout, "1680\n");
#line 2634
  fflush(_coverage_fout);
#line 2634
  p = FxOperatorPrecedence(expression, exception);
  }
#line 2608
  fprintf(_coverage_fout, "2144\n");
#line 2608
  fflush(_coverage_fout);
#line 2635
  if ((unsigned long )p != (unsigned long )((char const   *)((void *)0))) {
    {
#line 2637
    fprintf(_coverage_fout, "1681\n");
#line 2637
    fflush(_coverage_fout);
#line 2637
    CopyMagickString(subexpression, expression,
                     (unsigned long )((p - expression) + 1));
#line 2637
    fprintf(_coverage_fout, "1682\n");
#line 2637
    fflush(_coverage_fout);
#line 2639
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y,
                                    (char const   *)(subexpression), beta,
                                    exception);
    }
#line 2641
    switch ((int )((unsigned char )*p)) {
    case 126: 
    {
#line 2645
    fprintf(_coverage_fout, "1683\n");
#line 2645
    fflush(_coverage_fout);
#line 2645
    p ++;
#line 2645
    fprintf(_coverage_fout, "1684\n");
#line 2645
    fflush(_coverage_fout);
#line 2645
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
#line 2645
    fprintf(_coverage_fout, "1685\n");
#line 2645
    fflush(_coverage_fout);
#line 2646
    *beta = (double )(~ ((unsigned long )*beta));
    }
#line 2641
    fprintf(_coverage_fout, "1790\n");
#line 2641
    fflush(_coverage_fout);
#line 2647
    return (*beta);
    case 33: 
    {
#line 2651
    fprintf(_coverage_fout, "1686\n");
#line 2651
    fflush(_coverage_fout);
#line 2651
    p ++;
#line 2651
    fprintf(_coverage_fout, "1687\n");
#line 2651
    fflush(_coverage_fout);
#line 2651
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
    }
#line 2641
    fprintf(_coverage_fout, "1791\n");
#line 2641
    fflush(_coverage_fout);
#line 2652
    if (*beta == 0.0) {
#line 2652
      fprintf(_coverage_fout, "1688\n");
#line 2652
      fflush(_coverage_fout);
#line 2652
      tmp___0 = 1.0;
    } else {
#line 2652
      fprintf(_coverage_fout, "1689\n");
#line 2652
      fflush(_coverage_fout);
#line 2652
      tmp___0 = 0.0;
    }
#line 2641
    fprintf(_coverage_fout, "1792\n");
#line 2641
    fflush(_coverage_fout);
#line 2652
    return (tmp___0);
    case 94: 
    {
#line 2656
    fprintf(_coverage_fout, "1690\n");
#line 2656
    fflush(_coverage_fout);
#line 2656
    p ++;
#line 2656
    fprintf(_coverage_fout, "1691\n");
#line 2656
    fflush(_coverage_fout);
#line 2656
    tmp___1 = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
#line 2656
    fprintf(_coverage_fout, "1692\n");
#line 2656
    fflush(_coverage_fout);
#line 2656
    *beta = pow(alpha, tmp___1);
    }
#line 2641
    fprintf(_coverage_fout, "1793\n");
#line 2641
    fflush(_coverage_fout);
#line 2658
    return (*beta);
    case 42: 
    {
#line 2662
    fprintf(_coverage_fout, "1693\n");
#line 2662
    fflush(_coverage_fout);
#line 2662
    p ++;
#line 2662
    fprintf(_coverage_fout, "1694\n");
#line 2662
    fflush(_coverage_fout);
#line 2662
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
    }
#line 2641
    fprintf(_coverage_fout, "1794\n");
#line 2641
    fflush(_coverage_fout);
#line 2663
    return (alpha * *beta);
    case 47: 
    {
#line 2667
    fprintf(_coverage_fout, "1695\n");
#line 2667
    fflush(_coverage_fout);
#line 2667
    p ++;
#line 2667
    fprintf(_coverage_fout, "1696\n");
#line 2667
    fflush(_coverage_fout);
#line 2667
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
    }
#line 2641
    fprintf(_coverage_fout, "1795\n");
#line 2641
    fflush(_coverage_fout);
#line 2668
    if (*beta == 0.0) {
#line 2668
      fprintf(_coverage_fout, "1698\n");
#line 2668
      fflush(_coverage_fout);
#line 2670
      if ((int )exception->severity == 0) {
        {
#line 2671
        fprintf(_coverage_fout, "1697\n");
#line 2671
        fflush(_coverage_fout);
#line 2671
        ThrowMagickException(exception, "magick/fx.c",
                             "FxEvaluateSubexpression", 2671UL, 410,
                             "DivideByZero", "`%s\'", expression);
        }
      }
#line 2668
      fprintf(_coverage_fout, "1699\n");
#line 2668
      fflush(_coverage_fout);
#line 2673
      return (0.0);
    }
#line 2641
    fprintf(_coverage_fout, "1796\n");
#line 2641
    fflush(_coverage_fout);
#line 2675
    return (alpha / *beta);
    case 37: 
    {
#line 2679
    fprintf(_coverage_fout, "1700\n");
#line 2679
    fflush(_coverage_fout);
#line 2679
    p ++;
#line 2679
    fprintf(_coverage_fout, "1701\n");
#line 2679
    fflush(_coverage_fout);
#line 2679
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
#line 2679
    fprintf(_coverage_fout, "1702\n");
#line 2679
    fflush(_coverage_fout);
#line 2680
    tmp___2 = floor(*beta + 0.5);
#line 2679
    fprintf(_coverage_fout, "1703\n");
#line 2679
    fflush(_coverage_fout);
#line 2680
    *beta = fabs(tmp___2);
    }
#line 2641
    fprintf(_coverage_fout, "1797\n");
#line 2641
    fflush(_coverage_fout);
#line 2681
    if (*beta == 0.0) {
      {
#line 2683
      fprintf(_coverage_fout, "1704\n");
#line 2683
      fflush(_coverage_fout);
#line 2683
      ThrowMagickException(exception, "magick/fx.c", "FxEvaluateSubexpression",
                           2683UL, 410, "DivideByZero", "`%s\'", expression);
      }
#line 2681
      fprintf(_coverage_fout, "1705\n");
#line 2681
      fflush(_coverage_fout);
#line 2685
      return (0.0);
    }
    {
#line 2687
    fprintf(_coverage_fout, "1706\n");
#line 2687
    fflush(_coverage_fout);
#line 2687
    tmp___3 = fmod(alpha, *beta);
    }
#line 2641
    fprintf(_coverage_fout, "1798\n");
#line 2641
    fflush(_coverage_fout);
#line 2687
    return (tmp___3);
    case 43: 
    {
#line 2691
    fprintf(_coverage_fout, "1707\n");
#line 2691
    fflush(_coverage_fout);
#line 2691
    p ++;
#line 2691
    fprintf(_coverage_fout, "1708\n");
#line 2691
    fflush(_coverage_fout);
#line 2691
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
    }
#line 2641
    fprintf(_coverage_fout, "1799\n");
#line 2641
    fflush(_coverage_fout);
#line 2692
    return (alpha + *beta);
    case 45: 
    {
#line 2696
    fprintf(_coverage_fout, "1709\n");
#line 2696
    fflush(_coverage_fout);
#line 2696
    p ++;
#line 2696
    fprintf(_coverage_fout, "1710\n");
#line 2696
    fflush(_coverage_fout);
#line 2696
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
    }
#line 2641
    fprintf(_coverage_fout, "1800\n");
#line 2641
    fflush(_coverage_fout);
#line 2697
    return (alpha - *beta);
    case 245: 
    {
#line 2701
    fprintf(_coverage_fout, "1711\n");
#line 2701
    fflush(_coverage_fout);
#line 2701
    p ++;
#line 2701
    fprintf(_coverage_fout, "1712\n");
#line 2701
    fflush(_coverage_fout);
#line 2701
    gamma___0 = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta,
                                        exception);
#line 2701
    fprintf(_coverage_fout, "1713\n");
#line 2701
    fflush(_coverage_fout);
#line 2702
    *beta = (double )((unsigned long )(alpha + 0.5) << (unsigned long )(gamma___0 + 0.5));
    }
#line 2641
    fprintf(_coverage_fout, "1801\n");
#line 2641
    fflush(_coverage_fout);
#line 2704
    return (*beta);
    case 246: 
    {
#line 2708
    fprintf(_coverage_fout, "1714\n");
#line 2708
    fflush(_coverage_fout);
#line 2708
    p ++;
#line 2708
    fprintf(_coverage_fout, "1715\n");
#line 2708
    fflush(_coverage_fout);
#line 2708
    gamma___0 = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta,
                                        exception);
#line 2708
    fprintf(_coverage_fout, "1716\n");
#line 2708
    fflush(_coverage_fout);
#line 2709
    *beta = (double )((unsigned long )(alpha + 0.5) >> (unsigned long )(gamma___0 + 0.5));
    }
#line 2641
    fprintf(_coverage_fout, "1802\n");
#line 2641
    fflush(_coverage_fout);
#line 2711
    return (*beta);
    case 60: 
    {
#line 2715
    fprintf(_coverage_fout, "1717\n");
#line 2715
    fflush(_coverage_fout);
#line 2715
    p ++;
#line 2715
    fprintf(_coverage_fout, "1718\n");
#line 2715
    fflush(_coverage_fout);
#line 2715
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
    }
#line 2641
    fprintf(_coverage_fout, "1803\n");
#line 2641
    fflush(_coverage_fout);
#line 2716
    if (alpha < *beta) {
#line 2716
      fprintf(_coverage_fout, "1719\n");
#line 2716
      fflush(_coverage_fout);
#line 2716
      tmp___4 = 1.0;
    } else {
#line 2716
      fprintf(_coverage_fout, "1720\n");
#line 2716
      fflush(_coverage_fout);
#line 2716
      tmp___4 = 0.0;
    }
#line 2641
    fprintf(_coverage_fout, "1804\n");
#line 2641
    fflush(_coverage_fout);
#line 2716
    return (tmp___4);
    case 247: 
    {
#line 2720
    fprintf(_coverage_fout, "1721\n");
#line 2720
    fflush(_coverage_fout);
#line 2720
    p ++;
#line 2720
    fprintf(_coverage_fout, "1722\n");
#line 2720
    fflush(_coverage_fout);
#line 2720
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
    }
#line 2641
    fprintf(_coverage_fout, "1805\n");
#line 2641
    fflush(_coverage_fout);
#line 2721
    if (alpha <= *beta) {
#line 2721
      fprintf(_coverage_fout, "1723\n");
#line 2721
      fflush(_coverage_fout);
#line 2721
      tmp___5 = 1.0;
    } else {
#line 2721
      fprintf(_coverage_fout, "1724\n");
#line 2721
      fflush(_coverage_fout);
#line 2721
      tmp___5 = 0.0;
    }
#line 2641
    fprintf(_coverage_fout, "1806\n");
#line 2641
    fflush(_coverage_fout);
#line 2721
    return (tmp___5);
    case 62: 
    {
#line 2725
    fprintf(_coverage_fout, "1725\n");
#line 2725
    fflush(_coverage_fout);
#line 2725
    p ++;
#line 2725
    fprintf(_coverage_fout, "1726\n");
#line 2725
    fflush(_coverage_fout);
#line 2725
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
    }
#line 2641
    fprintf(_coverage_fout, "1807\n");
#line 2641
    fflush(_coverage_fout);
#line 2726
    if (alpha > *beta) {
#line 2726
      fprintf(_coverage_fout, "1727\n");
#line 2726
      fflush(_coverage_fout);
#line 2726
      tmp___6 = 1.0;
    } else {
#line 2726
      fprintf(_coverage_fout, "1728\n");
#line 2726
      fflush(_coverage_fout);
#line 2726
      tmp___6 = 0.0;
    }
#line 2641
    fprintf(_coverage_fout, "1808\n");
#line 2641
    fflush(_coverage_fout);
#line 2726
    return (tmp___6);
    case 248: 
    {
#line 2730
    fprintf(_coverage_fout, "1729\n");
#line 2730
    fflush(_coverage_fout);
#line 2730
    p ++;
#line 2730
    fprintf(_coverage_fout, "1730\n");
#line 2730
    fflush(_coverage_fout);
#line 2730
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
    }
#line 2641
    fprintf(_coverage_fout, "1809\n");
#line 2641
    fflush(_coverage_fout);
#line 2731
    if (alpha >= *beta) {
#line 2731
      fprintf(_coverage_fout, "1731\n");
#line 2731
      fflush(_coverage_fout);
#line 2731
      tmp___7 = 1.0;
    } else {
#line 2731
      fprintf(_coverage_fout, "1732\n");
#line 2731
      fflush(_coverage_fout);
#line 2731
      tmp___7 = 0.0;
    }
#line 2641
    fprintf(_coverage_fout, "1810\n");
#line 2641
    fflush(_coverage_fout);
#line 2731
    return (tmp___7);
    case 249: 
    {
#line 2735
    fprintf(_coverage_fout, "1733\n");
#line 2735
    fflush(_coverage_fout);
#line 2735
    p ++;
#line 2735
    fprintf(_coverage_fout, "1734\n");
#line 2735
    fflush(_coverage_fout);
#line 2735
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
#line 2735
    fprintf(_coverage_fout, "1735\n");
#line 2735
    fflush(_coverage_fout);
#line 2736
    tmp___10 = fabs(alpha - *beta);
    }
#line 2641
    fprintf(_coverage_fout, "1811\n");
#line 2641
    fflush(_coverage_fout);
#line 2736
    if (tmp___10 <= 1.0e-10) {
#line 2736
      fprintf(_coverage_fout, "1736\n");
#line 2736
      fflush(_coverage_fout);
#line 2736
      tmp___9 = 1.0;
    } else {
#line 2736
      fprintf(_coverage_fout, "1737\n");
#line 2736
      fflush(_coverage_fout);
#line 2736
      tmp___9 = 0.0;
    }
#line 2641
    fprintf(_coverage_fout, "1812\n");
#line 2641
    fflush(_coverage_fout);
#line 2736
    return (tmp___9);
    case 250: 
    {
#line 2740
    fprintf(_coverage_fout, "1738\n");
#line 2740
    fflush(_coverage_fout);
#line 2740
    p ++;
#line 2740
    fprintf(_coverage_fout, "1739\n");
#line 2740
    fflush(_coverage_fout);
#line 2740
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
#line 2740
    fprintf(_coverage_fout, "1740\n");
#line 2740
    fflush(_coverage_fout);
#line 2741
    tmp___13 = fabs(alpha - *beta);
    }
#line 2641
    fprintf(_coverage_fout, "1813\n");
#line 2641
    fflush(_coverage_fout);
#line 2741
    if (tmp___13 > 1.0e-10) {
#line 2741
      fprintf(_coverage_fout, "1741\n");
#line 2741
      fflush(_coverage_fout);
#line 2741
      tmp___12 = 1.0;
    } else {
#line 2741
      fprintf(_coverage_fout, "1742\n");
#line 2741
      fflush(_coverage_fout);
#line 2741
      tmp___12 = 0.0;
    }
#line 2641
    fprintf(_coverage_fout, "1814\n");
#line 2641
    fflush(_coverage_fout);
#line 2741
    return (tmp___12);
    case 38: 
    {
#line 2745
    fprintf(_coverage_fout, "1743\n");
#line 2745
    fflush(_coverage_fout);
#line 2745
    p ++;
#line 2745
    fprintf(_coverage_fout, "1744\n");
#line 2745
    fflush(_coverage_fout);
#line 2745
    gamma___0 = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta,
                                        exception);
#line 2745
    fprintf(_coverage_fout, "1745\n");
#line 2745
    fflush(_coverage_fout);
#line 2746
    *beta = (double )((unsigned long )(alpha + 0.5) & (unsigned long )(gamma___0 + 0.5));
    }
#line 2641
    fprintf(_coverage_fout, "1815\n");
#line 2641
    fflush(_coverage_fout);
#line 2748
    return (*beta);
    case 124: 
    {
#line 2752
    fprintf(_coverage_fout, "1746\n");
#line 2752
    fflush(_coverage_fout);
#line 2752
    p ++;
#line 2752
    fprintf(_coverage_fout, "1747\n");
#line 2752
    fflush(_coverage_fout);
#line 2752
    gamma___0 = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta,
                                        exception);
#line 2752
    fprintf(_coverage_fout, "1748\n");
#line 2752
    fflush(_coverage_fout);
#line 2753
    *beta = (double )((unsigned long )(alpha + 0.5) | (unsigned long )(gamma___0 + 0.5));
    }
#line 2641
    fprintf(_coverage_fout, "1816\n");
#line 2641
    fflush(_coverage_fout);
#line 2755
    return (*beta);
    case 251: 
    {
#line 2759
    fprintf(_coverage_fout, "1749\n");
#line 2759
    fflush(_coverage_fout);
#line 2759
    p ++;
#line 2759
    fprintf(_coverage_fout, "1750\n");
#line 2759
    fflush(_coverage_fout);
#line 2759
    gamma___0 = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta,
                                        exception);
    }
#line 2641
    fprintf(_coverage_fout, "1817\n");
#line 2641
    fflush(_coverage_fout);
#line 2760
    if (alpha > 0.0) {
#line 2760
      fprintf(_coverage_fout, "1753\n");
#line 2760
      fflush(_coverage_fout);
#line 2760
      if (gamma___0 > 0.0) {
#line 2760
        fprintf(_coverage_fout, "1751\n");
#line 2760
        fflush(_coverage_fout);
#line 2760
        *beta = 1.0;
      } else {
#line 2760
        fprintf(_coverage_fout, "1752\n");
#line 2760
        fflush(_coverage_fout);
#line 2760
        *beta = 0.0;
      }
    } else {
#line 2760
      fprintf(_coverage_fout, "1754\n");
#line 2760
      fflush(_coverage_fout);
#line 2760
      *beta = 0.0;
    }
#line 2641
    fprintf(_coverage_fout, "1818\n");
#line 2641
    fflush(_coverage_fout);
#line 2761
    return (*beta);
    case 252: 
    {
#line 2765
    fprintf(_coverage_fout, "1755\n");
#line 2765
    fflush(_coverage_fout);
#line 2765
    p ++;
#line 2765
    fprintf(_coverage_fout, "1756\n");
#line 2765
    fflush(_coverage_fout);
#line 2765
    gamma___0 = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta,
                                        exception);
    }
#line 2641
    fprintf(_coverage_fout, "1819\n");
#line 2641
    fflush(_coverage_fout);
#line 2766
    if (alpha > 0.0) {
#line 2766
      fprintf(_coverage_fout, "1757\n");
#line 2766
      fflush(_coverage_fout);
#line 2766
      *beta = 1.0;
    } else {
#line 2766
      fprintf(_coverage_fout, "1760\n");
#line 2766
      fflush(_coverage_fout);
#line 2766
      if (gamma___0 > 0.0) {
#line 2766
        fprintf(_coverage_fout, "1758\n");
#line 2766
        fflush(_coverage_fout);
#line 2766
        *beta = 1.0;
      } else {
#line 2766
        fprintf(_coverage_fout, "1759\n");
#line 2766
        fflush(_coverage_fout);
#line 2766
        *beta = 0.0;
      }
    }
#line 2641
    fprintf(_coverage_fout, "1820\n");
#line 2641
    fflush(_coverage_fout);
#line 2767
    return (*beta);
    case 63: 
    {
#line 2774
    fprintf(_coverage_fout, "1761\n");
#line 2774
    fflush(_coverage_fout);
#line 2774
    p ++;
#line 2774
    fprintf(_coverage_fout, "1762\n");
#line 2774
    fflush(_coverage_fout);
#line 2774
    CopyMagickString(subexpression, p, 4096UL);
#line 2774
    fprintf(_coverage_fout, "1763\n");
#line 2774
    fflush(_coverage_fout);
#line 2775
    q = subexpression;
#line 2774
    fprintf(_coverage_fout, "1764\n");
#line 2774
    fflush(_coverage_fout);
#line 2776
    tmp___14 = StringToken(":", & q);
#line 2774
    fprintf(_coverage_fout, "1765\n");
#line 2774
    fflush(_coverage_fout);
#line 2776
    p = (char const   *)tmp___14;
    }
#line 2641
    fprintf(_coverage_fout, "1821\n");
#line 2641
    fflush(_coverage_fout);
#line 2777
    if ((unsigned long )q == (unsigned long )((char *)((void *)0))) {
      {
#line 2779
      fprintf(_coverage_fout, "1766\n");
#line 2779
      fflush(_coverage_fout);
#line 2779
      ThrowMagickException(exception, "magick/fx.c", "FxEvaluateSubexpression",
                           2779UL, 410, "UnableToParseExpression", "`%s\'",
                           subexpression);
      }
#line 2777
      fprintf(_coverage_fout, "1767\n");
#line 2777
      fflush(_coverage_fout);
#line 2781
      return (0.0);
    }
    {
#line 2783
    fprintf(_coverage_fout, "1768\n");
#line 2783
    fflush(_coverage_fout);
#line 2783
    tmp___15 = fabs(alpha);
    }
#line 2641
    fprintf(_coverage_fout, "1822\n");
#line 2641
    fflush(_coverage_fout);
#line 2783
    if (tmp___15 > 1.0e-10) {
      {
#line 2784
      fprintf(_coverage_fout, "1769\n");
#line 2784
      fflush(_coverage_fout);
#line 2784
      gamma___1 = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta,
                                          exception);
      }
    } else {
      {
#line 2786
      fprintf(_coverage_fout, "1770\n");
#line 2786
      fflush(_coverage_fout);
#line 2786
      gamma___1 = FxEvaluateSubexpression(fx_info, channel, x, y,
                                          (char const   *)q, beta, exception);
      }
    }
#line 2641
    fprintf(_coverage_fout, "1823\n");
#line 2641
    fflush(_coverage_fout);
#line 2787
    return (gamma___1);
#line 2641
    fprintf(_coverage_fout, "1824\n");
#line 2641
    fflush(_coverage_fout);
    case 61: 
#line 2794
    q = subexpression;
#line 2641
    fprintf(_coverage_fout, "1825\n");
#line 2641
    fflush(_coverage_fout);
#line 2795
    while (1) {
      {
#line 2795
      fprintf(_coverage_fout, "1771\n");
#line 2795
      fflush(_coverage_fout);
#line 2795
      tmp___16 = __ctype_b_loc();
      }
#line 2795
      fprintf(_coverage_fout, "1772\n");
#line 2795
      fflush(_coverage_fout);
#line 2795
      if (! (((int const   )*(*tmp___16 + (int )((unsigned char )*q)) & 1024) != 0)) {
#line 2795
        break;
      }
#line 2795
      fprintf(_coverage_fout, "1773\n");
#line 2795
      fflush(_coverage_fout);
#line 2796
      q ++;
    }
#line 2641
    fprintf(_coverage_fout, "1826\n");
#line 2641
    fflush(_coverage_fout);
#line 2797
    if ((int )*q != 0) {
      {
#line 2799
      fprintf(_coverage_fout, "1774\n");
#line 2799
      fflush(_coverage_fout);
#line 2799
      ThrowMagickException(exception, "magick/fx.c", "FxEvaluateSubexpression",
                           2799UL, 410, "UnableToParseExpression", "`%s\'",
                           subexpression);
      }
#line 2797
      fprintf(_coverage_fout, "1775\n");
#line 2797
      fflush(_coverage_fout);
#line 2801
      return (0.0);
    }
    {
#line 2803
    fprintf(_coverage_fout, "1776\n");
#line 2803
    fflush(_coverage_fout);
#line 2803
    ClearMagickException(exception);
#line 2803
    fprintf(_coverage_fout, "1777\n");
#line 2803
    fflush(_coverage_fout);
#line 2804
    p ++;
#line 2803
    fprintf(_coverage_fout, "1778\n");
#line 2803
    fflush(_coverage_fout);
#line 2804
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
#line 2803
    fprintf(_coverage_fout, "1779\n");
#line 2803
    fflush(_coverage_fout);
#line 2805
    FormatMagickString(numeric, 4096UL, "%g", *beta);
#line 2803
    fprintf(_coverage_fout, "1780\n");
#line 2803
    fflush(_coverage_fout);
#line 2806
    DeleteNodeFromSplayTree(fx_info->symbols, (void const   *)(subexpression));
#line 2803
    fprintf(_coverage_fout, "1781\n");
#line 2803
    fflush(_coverage_fout);
#line 2807
    tmp___17 = ConstantString((char const   *)(numeric));
#line 2803
    fprintf(_coverage_fout, "1782\n");
#line 2803
    fflush(_coverage_fout);
#line 2807
    tmp___18 = ConstantString((char const   *)(subexpression));
#line 2803
    fprintf(_coverage_fout, "1783\n");
#line 2803
    fflush(_coverage_fout);
#line 2807
    AddValueToSplayTree(fx_info->symbols, (void const   *)tmp___18,
                        (void const   *)tmp___17);
    }
#line 2641
    fprintf(_coverage_fout, "1827\n");
#line 2641
    fflush(_coverage_fout);
#line 2809
    return (*beta);
    case 44: 
    {
#line 2813
    fprintf(_coverage_fout, "1784\n");
#line 2813
    fflush(_coverage_fout);
#line 2813
    p ++;
#line 2813
    fprintf(_coverage_fout, "1785\n");
#line 2813
    fflush(_coverage_fout);
#line 2813
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
    }
#line 2641
    fprintf(_coverage_fout, "1828\n");
#line 2641
    fflush(_coverage_fout);
#line 2814
    return (alpha);
    case 59: 
    {
#line 2818
    fprintf(_coverage_fout, "1786\n");
#line 2818
    fflush(_coverage_fout);
#line 2818
    p ++;
#line 2818
    fprintf(_coverage_fout, "1787\n");
#line 2818
    fflush(_coverage_fout);
#line 2818
    *beta = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta, exception);
    }
#line 2641
    fprintf(_coverage_fout, "1829\n");
#line 2641
    fflush(_coverage_fout);
#line 2819
    return (*beta);
    default: 
    {
#line 2823
    fprintf(_coverage_fout, "1788\n");
#line 2823
    fflush(_coverage_fout);
#line 2823
    tmp___19 = FxEvaluateSubexpression(fx_info, channel, x, y, p, beta,
                                       exception);
#line 2823
    fprintf(_coverage_fout, "1789\n");
#line 2823
    fflush(_coverage_fout);
#line 2823
    gamma___0 = alpha * tmp___19;
    }
#line 2641
    fprintf(_coverage_fout, "1830\n");
#line 2641
    fflush(_coverage_fout);
#line 2825
    return (gamma___0);
    }
  }
  {
#line 2829
  fprintf(_coverage_fout, "1831\n");
#line 2829
  fflush(_coverage_fout);
#line 2829
  tmp___22 = __builtin_strchr((char *)"(", (int )*expression);
  }
#line 2608
  fprintf(_coverage_fout, "2145\n");
#line 2608
  fflush(_coverage_fout);
#line 2829
  if ((unsigned long )tmp___22 != (unsigned long )((char *)((void *)0))) {
    {
#line 2831
    fprintf(_coverage_fout, "1832\n");
#line 2831
    fflush(_coverage_fout);
#line 2831
    CopyMagickString(subexpression, expression + 1, 4096UL);
#line 2831
    fprintf(_coverage_fout, "1833\n");
#line 2831
    fflush(_coverage_fout);
#line 2832
    tmp___20 = strlen((char const   *)(subexpression));
#line 2831
    fprintf(_coverage_fout, "1834\n");
#line 2831
    fflush(_coverage_fout);
#line 2832
    subexpression[tmp___20 - 1UL] = (char )'\000';
#line 2831
    fprintf(_coverage_fout, "1835\n");
#line 2831
    fflush(_coverage_fout);
#line 2833
    gamma___0 = FxEvaluateSubexpression(fx_info, channel, x, y,
                                        (char const   *)(subexpression), beta,
                                        exception);
    }
#line 2829
    fprintf(_coverage_fout, "1836\n");
#line 2829
    fflush(_coverage_fout);
#line 2835
    return (gamma___0);
  }
#line 2837
  switch ((int )*expression) {
  case 43: 
  {
#line 2841
  fprintf(_coverage_fout, "1837\n");
#line 2841
  fflush(_coverage_fout);
#line 2841
  gamma___0 = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 1,
                                      beta, exception);
  }
#line 2837
  fprintf(_coverage_fout, "2069\n");
#line 2837
  fflush(_coverage_fout);
#line 2843
  return (1.0 * gamma___0);
  case 45: 
  {
#line 2847
  fprintf(_coverage_fout, "1838\n");
#line 2847
  fflush(_coverage_fout);
#line 2847
  gamma___0 = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 1,
                                      beta, exception);
  }
#line 2837
  fprintf(_coverage_fout, "2070\n");
#line 2837
  fflush(_coverage_fout);
#line 2849
  return (- 1.0 * gamma___0);
  case 126: 
  {
#line 2853
  fprintf(_coverage_fout, "1839\n");
#line 2853
  fflush(_coverage_fout);
#line 2853
  gamma___0 = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 1,
                                      beta, exception);
  }
#line 2837
  fprintf(_coverage_fout, "2071\n");
#line 2837
  fflush(_coverage_fout);
#line 2855
  return ((double )(~ ((unsigned long )(gamma___0 + 0.5))));
  case 65: 
  case 97: 
  {
#line 2860
  fprintf(_coverage_fout, "1840\n");
#line 2860
  fflush(_coverage_fout);
#line 2860
  tmp___24 = LocaleNCompare(expression, "abs", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2072\n");
#line 2837
  fflush(_coverage_fout);
#line 2860
  if (tmp___24 == 0L) {
    {
#line 2862
    fprintf(_coverage_fout, "1841\n");
#line 2862
    fflush(_coverage_fout);
#line 2862
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 3,
                                    beta, exception);
#line 2862
    fprintf(_coverage_fout, "1842\n");
#line 2862
    fflush(_coverage_fout);
#line 2864
    tmp___23 = fabs(alpha);
    }
#line 2860
    fprintf(_coverage_fout, "1843\n");
#line 2860
    fflush(_coverage_fout);
#line 2864
    return (tmp___23);
  }
  {
#line 2866
  fprintf(_coverage_fout, "1844\n");
#line 2866
  fflush(_coverage_fout);
#line 2866
  tmp___26 = LocaleNCompare(expression, "acos", 4UL);
  }
#line 2837
  fprintf(_coverage_fout, "2073\n");
#line 2837
  fflush(_coverage_fout);
#line 2866
  if (tmp___26 == 0L) {
    {
#line 2868
    fprintf(_coverage_fout, "1845\n");
#line 2868
    fflush(_coverage_fout);
#line 2868
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 4,
                                    beta, exception);
#line 2868
    fprintf(_coverage_fout, "1846\n");
#line 2868
    fflush(_coverage_fout);
#line 2870
    tmp___25 = acos(alpha);
    }
#line 2866
    fprintf(_coverage_fout, "1847\n");
#line 2866
    fflush(_coverage_fout);
#line 2870
    return (tmp___25);
  }
  {
#line 2872
  fprintf(_coverage_fout, "1848\n");
#line 2872
  fflush(_coverage_fout);
#line 2872
  tmp___28 = LocaleNCompare(expression, "asin", 4UL);
  }
#line 2837
  fprintf(_coverage_fout, "2074\n");
#line 2837
  fflush(_coverage_fout);
#line 2872
  if (tmp___28 == 0L) {
    {
#line 2874
    fprintf(_coverage_fout, "1849\n");
#line 2874
    fflush(_coverage_fout);
#line 2874
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 4,
                                    beta, exception);
#line 2874
    fprintf(_coverage_fout, "1850\n");
#line 2874
    fflush(_coverage_fout);
#line 2876
    tmp___27 = asin(alpha);
    }
#line 2872
    fprintf(_coverage_fout, "1851\n");
#line 2872
    fflush(_coverage_fout);
#line 2876
    return (tmp___27);
  }
  {
#line 2878
  fprintf(_coverage_fout, "1852\n");
#line 2878
  fflush(_coverage_fout);
#line 2878
  tmp___30 = LocaleNCompare(expression, "alt", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2075\n");
#line 2837
  fflush(_coverage_fout);
#line 2878
  if (tmp___30 == 0L) {
    {
#line 2880
    fprintf(_coverage_fout, "1853\n");
#line 2880
    fflush(_coverage_fout);
#line 2880
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 3,
                                    beta, exception);
    }
#line 2878
    fprintf(_coverage_fout, "1856\n");
#line 2878
    fflush(_coverage_fout);
#line 2882
    if ((long )alpha & 1L) {
#line 2882
      fprintf(_coverage_fout, "1854\n");
#line 2882
      fflush(_coverage_fout);
#line 2882
      tmp___29 = - 1.0;
    } else {
#line 2882
      fprintf(_coverage_fout, "1855\n");
#line 2882
      fflush(_coverage_fout);
#line 2882
      tmp___29 = 1.0;
    }
#line 2878
    fprintf(_coverage_fout, "1857\n");
#line 2878
    fflush(_coverage_fout);
#line 2882
    return (tmp___29);
  }
  {
#line 2884
  fprintf(_coverage_fout, "1858\n");
#line 2884
  fflush(_coverage_fout);
#line 2884
  tmp___32 = LocaleNCompare(expression, "atan2", 5UL);
  }
#line 2837
  fprintf(_coverage_fout, "2076\n");
#line 2837
  fflush(_coverage_fout);
#line 2884
  if (tmp___32 == 0L) {
    {
#line 2886
    fprintf(_coverage_fout, "1859\n");
#line 2886
    fflush(_coverage_fout);
#line 2886
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 5,
                                    beta, exception);
#line 2886
    fprintf(_coverage_fout, "1860\n");
#line 2886
    fflush(_coverage_fout);
#line 2888
    tmp___31 = atan2(alpha, *beta);
    }
#line 2884
    fprintf(_coverage_fout, "1861\n");
#line 2884
    fflush(_coverage_fout);
#line 2888
    return (tmp___31);
  }
  {
#line 2890
  fprintf(_coverage_fout, "1862\n");
#line 2890
  fflush(_coverage_fout);
#line 2890
  tmp___34 = LocaleNCompare(expression, "atan", 4UL);
  }
#line 2837
  fprintf(_coverage_fout, "2077\n");
#line 2837
  fflush(_coverage_fout);
#line 2890
  if (tmp___34 == 0L) {
    {
#line 2892
    fprintf(_coverage_fout, "1863\n");
#line 2892
    fflush(_coverage_fout);
#line 2892
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 4,
                                    beta, exception);
#line 2892
    fprintf(_coverage_fout, "1864\n");
#line 2892
    fflush(_coverage_fout);
#line 2894
    tmp___33 = atan(alpha);
    }
#line 2890
    fprintf(_coverage_fout, "1865\n");
#line 2890
    fflush(_coverage_fout);
#line 2894
    return (tmp___33);
  }
  {
#line 2896
  fprintf(_coverage_fout, "1866\n");
#line 2896
  fflush(_coverage_fout);
#line 2896
  tmp___36 = LocaleCompare(expression, "a");
  }
#line 2837
  fprintf(_coverage_fout, "2078\n");
#line 2837
  fflush(_coverage_fout);
#line 2896
  if (tmp___36 == 0L) {
    {
#line 2897
    fprintf(_coverage_fout, "1867\n");
#line 2897
    fflush(_coverage_fout);
#line 2897
    tmp___35 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 2896
    fprintf(_coverage_fout, "1868\n");
#line 2896
    fflush(_coverage_fout);
#line 2897
    return (tmp___35);
  }
#line 2898
  break;
  case 66: 
  case 98: 
  {
#line 2903
  fprintf(_coverage_fout, "1869\n");
#line 2903
  fflush(_coverage_fout);
#line 2903
  tmp___38 = LocaleCompare(expression, "b");
  }
#line 2837
  fprintf(_coverage_fout, "2079\n");
#line 2837
  fflush(_coverage_fout);
#line 2903
  if (tmp___38 == 0L) {
    {
#line 2904
    fprintf(_coverage_fout, "1870\n");
#line 2904
    fflush(_coverage_fout);
#line 2904
    tmp___37 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 2903
    fprintf(_coverage_fout, "1871\n");
#line 2903
    fflush(_coverage_fout);
#line 2904
    return (tmp___37);
  }
#line 2905
  break;
  case 67: 
  case 99: 
  {
#line 2910
  fprintf(_coverage_fout, "1872\n");
#line 2910
  fflush(_coverage_fout);
#line 2910
  tmp___40 = LocaleNCompare(expression, "ceil", 4UL);
  }
#line 2837
  fprintf(_coverage_fout, "2080\n");
#line 2837
  fflush(_coverage_fout);
#line 2910
  if (tmp___40 == 0L) {
    {
#line 2912
    fprintf(_coverage_fout, "1873\n");
#line 2912
    fflush(_coverage_fout);
#line 2912
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 4,
                                    beta, exception);
#line 2912
    fprintf(_coverage_fout, "1874\n");
#line 2912
    fflush(_coverage_fout);
#line 2914
    tmp___39 = ceil(alpha);
    }
#line 2910
    fprintf(_coverage_fout, "1875\n");
#line 2910
    fflush(_coverage_fout);
#line 2914
    return (tmp___39);
  }
  {
#line 2916
  fprintf(_coverage_fout, "1876\n");
#line 2916
  fflush(_coverage_fout);
#line 2916
  tmp___42 = LocaleNCompare(expression, "cosh", 4UL);
  }
#line 2837
  fprintf(_coverage_fout, "2081\n");
#line 2837
  fflush(_coverage_fout);
#line 2916
  if (tmp___42 == 0L) {
    {
#line 2918
    fprintf(_coverage_fout, "1877\n");
#line 2918
    fflush(_coverage_fout);
#line 2918
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 4,
                                    beta, exception);
#line 2918
    fprintf(_coverage_fout, "1878\n");
#line 2918
    fflush(_coverage_fout);
#line 2920
    tmp___41 = cosh(alpha);
    }
#line 2916
    fprintf(_coverage_fout, "1879\n");
#line 2916
    fflush(_coverage_fout);
#line 2920
    return (tmp___41);
  }
  {
#line 2922
  fprintf(_coverage_fout, "1880\n");
#line 2922
  fflush(_coverage_fout);
#line 2922
  tmp___44 = LocaleNCompare(expression, "cos", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2082\n");
#line 2837
  fflush(_coverage_fout);
#line 2922
  if (tmp___44 == 0L) {
    {
#line 2924
    fprintf(_coverage_fout, "1881\n");
#line 2924
    fflush(_coverage_fout);
#line 2924
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 3,
                                    beta, exception);
#line 2924
    fprintf(_coverage_fout, "1882\n");
#line 2924
    fflush(_coverage_fout);
#line 2926
    tmp___43 = cos(alpha);
    }
#line 2922
    fprintf(_coverage_fout, "1883\n");
#line 2922
    fflush(_coverage_fout);
#line 2926
    return (tmp___43);
  }
  {
#line 2928
  fprintf(_coverage_fout, "1884\n");
#line 2928
  fflush(_coverage_fout);
#line 2928
  tmp___46 = LocaleCompare(expression, "c");
  }
#line 2837
  fprintf(_coverage_fout, "2083\n");
#line 2837
  fflush(_coverage_fout);
#line 2928
  if (tmp___46 == 0L) {
    {
#line 2929
    fprintf(_coverage_fout, "1885\n");
#line 2929
    fflush(_coverage_fout);
#line 2929
    tmp___45 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 2928
    fprintf(_coverage_fout, "1886\n");
#line 2928
    fflush(_coverage_fout);
#line 2929
    return (tmp___45);
  }
#line 2930
  break;
  case 68: 
  case 100: 
  {
#line 2935
  fprintf(_coverage_fout, "1887\n");
#line 2935
  fflush(_coverage_fout);
#line 2935
  tmp___49 = LocaleNCompare(expression, "debug", 5UL);
  }
#line 2837
  fprintf(_coverage_fout, "2084\n");
#line 2837
  fflush(_coverage_fout);
#line 2935
  if (tmp___49 == 0L) {
    {
#line 2940
    fprintf(_coverage_fout, "1888\n");
#line 2940
    fflush(_coverage_fout);
#line 2940
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 5,
                                    beta, exception);
    }
#line 2935
    fprintf(_coverage_fout, "1905\n");
#line 2935
    fflush(_coverage_fout);
#line 2942
    if ((int const   )(fx_info->images)->colorspace == 12) {
#line 2943
      switch ((int )channel) {
#line 2943
      fprintf(_coverage_fout, "1889\n");
#line 2943
      fflush(_coverage_fout);
      case 1: 
#line 2945
      type = "cyan";
#line 2945
      break;
#line 2943
      fprintf(_coverage_fout, "1890\n");
#line 2943
      fflush(_coverage_fout);
      case 2: 
#line 2946
      type = "magenta";
#line 2946
      break;
#line 2943
      fprintf(_coverage_fout, "1891\n");
#line 2943
      fflush(_coverage_fout);
      case 4: 
#line 2947
      type = "yellow";
#line 2947
      break;
#line 2943
      fprintf(_coverage_fout, "1892\n");
#line 2943
      fflush(_coverage_fout);
      case 8: 
#line 2948
      type = "opacity";
#line 2948
      break;
#line 2943
      fprintf(_coverage_fout, "1893\n");
#line 2943
      fflush(_coverage_fout);
      case 32: 
#line 2949
      type = "black";
#line 2949
      break;
#line 2943
      fprintf(_coverage_fout, "1894\n");
#line 2943
      fflush(_coverage_fout);
      default: 
#line 2950
      type = "unknown";
#line 2950
      break;
      }
    } else {
#line 2953
      switch ((int )channel) {
#line 2953
      fprintf(_coverage_fout, "1895\n");
#line 2953
      fflush(_coverage_fout);
      case 1: 
#line 2955
      type = "red";
#line 2955
      break;
#line 2953
      fprintf(_coverage_fout, "1896\n");
#line 2953
      fflush(_coverage_fout);
      case 2: 
#line 2956
      type = "green";
#line 2956
      break;
#line 2953
      fprintf(_coverage_fout, "1897\n");
#line 2953
      fflush(_coverage_fout);
      case 4: 
#line 2957
      type = "blue";
#line 2957
      break;
#line 2953
      fprintf(_coverage_fout, "1898\n");
#line 2953
      fflush(_coverage_fout);
      case 8: 
#line 2958
      type = "opacity";
#line 2958
      break;
#line 2953
      fprintf(_coverage_fout, "1899\n");
#line 2953
      fflush(_coverage_fout);
      default: 
#line 2959
      type = "unknown";
#line 2959
      break;
      }
    }
    {
#line 2961
    fprintf(_coverage_fout, "1900\n");
#line 2961
    fflush(_coverage_fout);
#line 2961
    CopyMagickString(subexpression, expression + 6, 4096UL);
#line 2961
    fprintf(_coverage_fout, "1901\n");
#line 2961
    fflush(_coverage_fout);
#line 2962
    tmp___48 = strlen((char const   *)(subexpression));
    }
#line 2935
    fprintf(_coverage_fout, "1906\n");
#line 2935
    fflush(_coverage_fout);
#line 2962
    if (tmp___48 > 1UL) {
      {
#line 2963
      fprintf(_coverage_fout, "1902\n");
#line 2963
      fflush(_coverage_fout);
#line 2963
      tmp___47 = strlen((char const   *)(subexpression));
#line 2963
      fprintf(_coverage_fout, "1903\n");
#line 2963
      fflush(_coverage_fout);
#line 2963
      subexpression[tmp___47 - 1UL] = (char )'\000';
      }
    }
#line 2935
    fprintf(_coverage_fout, "1907\n");
#line 2935
    fflush(_coverage_fout);
#line 2964
    if ((unsigned long )fx_info->file != (unsigned long )((FILE *)((void *)0))) {
      {
#line 2965
      fprintf(_coverage_fout, "1904\n");
#line 2965
      fflush(_coverage_fout);
#line 2965
      fprintf((FILE */* __restrict  */)fx_info->file,
              (char const   */* __restrict  */)"%s[%ld,%ld].%s: %s=%g\n",
              (fx_info->images)->filename, x, y, type, subexpression, alpha);
      }
    }
#line 2935
    fprintf(_coverage_fout, "1908\n");
#line 2935
    fflush(_coverage_fout);
#line 2967
    return (0.0);
  }
#line 2969
  break;
  case 69: 
  case 101: 
  {
#line 2974
  fprintf(_coverage_fout, "1909\n");
#line 2974
  fflush(_coverage_fout);
#line 2974
  tmp___50 = LocaleCompare(expression, "epsilon");
  }
#line 2837
  fprintf(_coverage_fout, "2085\n");
#line 2837
  fflush(_coverage_fout);
#line 2974
  if (tmp___50 == 0L) {
#line 2974
    fprintf(_coverage_fout, "1910\n");
#line 2974
    fflush(_coverage_fout);
#line 2975
    return (1.0e-10);
  }
  {
#line 2976
  fprintf(_coverage_fout, "1911\n");
#line 2976
  fflush(_coverage_fout);
#line 2976
  tmp___52 = LocaleNCompare(expression, "exp", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2086\n");
#line 2837
  fflush(_coverage_fout);
#line 2976
  if (tmp___52 == 0L) {
    {
#line 2978
    fprintf(_coverage_fout, "1912\n");
#line 2978
    fflush(_coverage_fout);
#line 2978
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 3,
                                    beta, exception);
#line 2978
    fprintf(_coverage_fout, "1913\n");
#line 2978
    fflush(_coverage_fout);
#line 2980
    tmp___51 = exp(alpha);
    }
#line 2976
    fprintf(_coverage_fout, "1914\n");
#line 2976
    fflush(_coverage_fout);
#line 2980
    return (tmp___51);
  }
  {
#line 2982
  fprintf(_coverage_fout, "1915\n");
#line 2982
  fflush(_coverage_fout);
#line 2982
  tmp___53 = LocaleCompare(expression, "e");
  }
#line 2837
  fprintf(_coverage_fout, "2087\n");
#line 2837
  fflush(_coverage_fout);
#line 2982
  if (tmp___53 == 0L) {
#line 2982
    fprintf(_coverage_fout, "1916\n");
#line 2982
    fflush(_coverage_fout);
#line 2983
    return (2.7182818284590452354);
  }
#line 2984
  break;
  case 70: 
  case 102: 
  {
#line 2989
  fprintf(_coverage_fout, "1917\n");
#line 2989
  fflush(_coverage_fout);
#line 2989
  tmp___55 = LocaleNCompare(expression, "floor", 5UL);
  }
#line 2837
  fprintf(_coverage_fout, "2088\n");
#line 2837
  fflush(_coverage_fout);
#line 2989
  if (tmp___55 == 0L) {
    {
#line 2991
    fprintf(_coverage_fout, "1918\n");
#line 2991
    fflush(_coverage_fout);
#line 2991
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 5,
                                    beta, exception);
#line 2991
    fprintf(_coverage_fout, "1919\n");
#line 2991
    fflush(_coverage_fout);
#line 2993
    tmp___54 = floor(alpha);
    }
#line 2989
    fprintf(_coverage_fout, "1920\n");
#line 2989
    fflush(_coverage_fout);
#line 2993
    return (tmp___54);
  }
#line 2995
  break;
  case 71: 
  case 103: 
  {
#line 3000
  fprintf(_coverage_fout, "1921\n");
#line 3000
  fflush(_coverage_fout);
#line 3000
  tmp___57 = LocaleCompare(expression, "g");
  }
#line 2837
  fprintf(_coverage_fout, "2089\n");
#line 2837
  fflush(_coverage_fout);
#line 3000
  if (tmp___57 == 0L) {
    {
#line 3001
    fprintf(_coverage_fout, "1922\n");
#line 3001
    fflush(_coverage_fout);
#line 3001
    tmp___56 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3000
    fprintf(_coverage_fout, "1923\n");
#line 3000
    fflush(_coverage_fout);
#line 3001
    return (tmp___56);
  }
#line 3002
  break;
  case 72: 
  case 104: 
  {
#line 3007
  fprintf(_coverage_fout, "1924\n");
#line 3007
  fflush(_coverage_fout);
#line 3007
  tmp___59 = LocaleCompare(expression, "h");
  }
#line 2837
  fprintf(_coverage_fout, "2090\n");
#line 2837
  fflush(_coverage_fout);
#line 3007
  if (tmp___59 == 0L) {
    {
#line 3008
    fprintf(_coverage_fout, "1925\n");
#line 3008
    fflush(_coverage_fout);
#line 3008
    tmp___58 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3007
    fprintf(_coverage_fout, "1926\n");
#line 3007
    fflush(_coverage_fout);
#line 3008
    return (tmp___58);
  }
  {
#line 3009
  fprintf(_coverage_fout, "1927\n");
#line 3009
  fflush(_coverage_fout);
#line 3009
  tmp___61 = LocaleCompare(expression, "hue");
  }
#line 2837
  fprintf(_coverage_fout, "2091\n");
#line 2837
  fflush(_coverage_fout);
#line 3009
  if (tmp___61 == 0L) {
    {
#line 3010
    fprintf(_coverage_fout, "1928\n");
#line 3010
    fflush(_coverage_fout);
#line 3010
    tmp___60 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3009
    fprintf(_coverage_fout, "1929\n");
#line 3009
    fflush(_coverage_fout);
#line 3010
    return (tmp___60);
  }
  {
#line 3011
  fprintf(_coverage_fout, "1930\n");
#line 3011
  fflush(_coverage_fout);
#line 3011
  tmp___63 = LocaleNCompare(expression, "hypot", 5UL);
  }
#line 2837
  fprintf(_coverage_fout, "2092\n");
#line 2837
  fflush(_coverage_fout);
#line 3011
  if (tmp___63 == 0L) {
    {
#line 3013
    fprintf(_coverage_fout, "1931\n");
#line 3013
    fflush(_coverage_fout);
#line 3013
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 5,
                                    beta, exception);
#line 3013
    fprintf(_coverage_fout, "1932\n");
#line 3013
    fflush(_coverage_fout);
#line 3015
    tmp___62 = hypot(alpha, *beta);
    }
#line 3011
    fprintf(_coverage_fout, "1933\n");
#line 3011
    fflush(_coverage_fout);
#line 3015
    return (tmp___62);
  }
#line 3017
  break;
  case 75: 
  case 107: 
  {
#line 3022
  fprintf(_coverage_fout, "1934\n");
#line 3022
  fflush(_coverage_fout);
#line 3022
  tmp___65 = LocaleCompare(expression, "k");
  }
#line 2837
  fprintf(_coverage_fout, "2093\n");
#line 2837
  fflush(_coverage_fout);
#line 3022
  if (tmp___65 == 0L) {
    {
#line 3023
    fprintf(_coverage_fout, "1935\n");
#line 3023
    fflush(_coverage_fout);
#line 3023
    tmp___64 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3022
    fprintf(_coverage_fout, "1936\n");
#line 3022
    fflush(_coverage_fout);
#line 3023
    return (tmp___64);
  }
#line 3024
  break;
  case 73: 
  case 105: 
  {
#line 3029
  fprintf(_coverage_fout, "1937\n");
#line 3029
  fflush(_coverage_fout);
#line 3029
  tmp___67 = LocaleCompare(expression, "intensity");
  }
#line 2837
  fprintf(_coverage_fout, "2094\n");
#line 2837
  fflush(_coverage_fout);
#line 3029
  if (tmp___67 == 0L) {
    {
#line 3030
    fprintf(_coverage_fout, "1938\n");
#line 3030
    fflush(_coverage_fout);
#line 3030
    tmp___66 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3029
    fprintf(_coverage_fout, "1939\n");
#line 3029
    fflush(_coverage_fout);
#line 3030
    return (tmp___66);
  }
  {
#line 3031
  fprintf(_coverage_fout, "1940\n");
#line 3031
  fflush(_coverage_fout);
#line 3031
  tmp___69 = LocaleNCompare(expression, "int", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2095\n");
#line 2837
  fflush(_coverage_fout);
#line 3031
  if (tmp___69 == 0L) {
    {
#line 3033
    fprintf(_coverage_fout, "1941\n");
#line 3033
    fflush(_coverage_fout);
#line 3033
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 3,
                                    beta, exception);
#line 3033
    fprintf(_coverage_fout, "1942\n");
#line 3033
    fflush(_coverage_fout);
#line 3035
    tmp___68 = floor(alpha + 0.5);
    }
#line 3031
    fprintf(_coverage_fout, "1943\n");
#line 3031
    fflush(_coverage_fout);
#line 3035
    return (tmp___68);
  }
  {
#line 3037
  fprintf(_coverage_fout, "1944\n");
#line 3037
  fflush(_coverage_fout);
#line 3037
  tmp___71 = LocaleCompare(expression, "i");
  }
#line 2837
  fprintf(_coverage_fout, "2096\n");
#line 2837
  fflush(_coverage_fout);
#line 3037
  if (tmp___71 == 0L) {
    {
#line 3038
    fprintf(_coverage_fout, "1945\n");
#line 3038
    fflush(_coverage_fout);
#line 3038
    tmp___70 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3037
    fprintf(_coverage_fout, "1946\n");
#line 3037
    fflush(_coverage_fout);
#line 3038
    return (tmp___70);
  }
#line 3039
  break;
  case 74: 
  case 106: 
  {
#line 3044
  fprintf(_coverage_fout, "1947\n");
#line 3044
  fflush(_coverage_fout);
#line 3044
  tmp___73 = LocaleCompare(expression, "j");
  }
#line 2837
  fprintf(_coverage_fout, "2097\n");
#line 2837
  fflush(_coverage_fout);
#line 3044
  if (tmp___73 == 0L) {
    {
#line 3045
    fprintf(_coverage_fout, "1948\n");
#line 3045
    fflush(_coverage_fout);
#line 3045
    tmp___72 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3044
    fprintf(_coverage_fout, "1949\n");
#line 3044
    fflush(_coverage_fout);
#line 3045
    return (tmp___72);
  }
#line 3046
  break;
  case 76: 
  case 108: 
  {
#line 3051
  fprintf(_coverage_fout, "1950\n");
#line 3051
  fflush(_coverage_fout);
#line 3051
  tmp___75 = LocaleNCompare(expression, "ln", 2UL);
  }
#line 2837
  fprintf(_coverage_fout, "2098\n");
#line 2837
  fflush(_coverage_fout);
#line 3051
  if (tmp___75 == 0L) {
    {
#line 3053
    fprintf(_coverage_fout, "1951\n");
#line 3053
    fflush(_coverage_fout);
#line 3053
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 2,
                                    beta, exception);
#line 3053
    fprintf(_coverage_fout, "1952\n");
#line 3053
    fflush(_coverage_fout);
#line 3055
    tmp___74 = log(alpha);
    }
#line 3051
    fprintf(_coverage_fout, "1953\n");
#line 3051
    fflush(_coverage_fout);
#line 3055
    return (tmp___74);
  }
  {
#line 3057
  fprintf(_coverage_fout, "1954\n");
#line 3057
  fflush(_coverage_fout);
#line 3057
  tmp___78 = LocaleNCompare(expression, "logtwo", 4UL);
  }
#line 2837
  fprintf(_coverage_fout, "2099\n");
#line 2837
  fflush(_coverage_fout);
#line 3057
  if (tmp___78 == 0L) {
    {
#line 3059
    fprintf(_coverage_fout, "1955\n");
#line 3059
    fflush(_coverage_fout);
#line 3059
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 4,
                                    beta, exception);
#line 3059
    fprintf(_coverage_fout, "1956\n");
#line 3059
    fflush(_coverage_fout);
#line 3061
    tmp___76 = log10(alpha);
#line 3059
    fprintf(_coverage_fout, "1957\n");
#line 3059
    fflush(_coverage_fout);
#line 3061
    tmp___77 = log10(2.0);
    }
#line 3057
    fprintf(_coverage_fout, "1958\n");
#line 3057
    fflush(_coverage_fout);
#line 3061
    return (tmp___76 / tmp___77);
  }
  {
#line 3063
  fprintf(_coverage_fout, "1959\n");
#line 3063
  fflush(_coverage_fout);
#line 3063
  tmp___80 = LocaleNCompare(expression, "log", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2100\n");
#line 2837
  fflush(_coverage_fout);
#line 3063
  if (tmp___80 == 0L) {
    {
#line 3065
    fprintf(_coverage_fout, "1960\n");
#line 3065
    fflush(_coverage_fout);
#line 3065
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 3,
                                    beta, exception);
#line 3065
    fprintf(_coverage_fout, "1961\n");
#line 3065
    fflush(_coverage_fout);
#line 3067
    tmp___79 = log10(alpha);
    }
#line 3063
    fprintf(_coverage_fout, "1962\n");
#line 3063
    fflush(_coverage_fout);
#line 3067
    return (tmp___79);
  }
  {
#line 3069
  fprintf(_coverage_fout, "1963\n");
#line 3069
  fflush(_coverage_fout);
#line 3069
  tmp___82 = LocaleCompare(expression, "lightness");
  }
#line 2837
  fprintf(_coverage_fout, "2101\n");
#line 2837
  fflush(_coverage_fout);
#line 3069
  if (tmp___82 == 0L) {
    {
#line 3070
    fprintf(_coverage_fout, "1964\n");
#line 3070
    fflush(_coverage_fout);
#line 3070
    tmp___81 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3069
    fprintf(_coverage_fout, "1965\n");
#line 3069
    fflush(_coverage_fout);
#line 3070
    return (tmp___81);
  }
#line 3071
  break;
  case 77: 
  case 109: 
  {
#line 3076
  fprintf(_coverage_fout, "1966\n");
#line 3076
  fflush(_coverage_fout);
#line 3076
  tmp___83 = LocaleCompare(expression, "MaxRGB");
  }
#line 2837
  fprintf(_coverage_fout, "2102\n");
#line 2837
  fflush(_coverage_fout);
#line 3076
  if (tmp___83 == 0L) {
#line 3076
    fprintf(_coverage_fout, "1967\n");
#line 3076
    fflush(_coverage_fout);
#line 3077
    return ((double )65535UL);
  }
  {
#line 3078
  fprintf(_coverage_fout, "1968\n");
#line 3078
  fflush(_coverage_fout);
#line 3078
  tmp___84 = LocaleNCompare(expression, "maxima", 6UL);
  }
#line 2837
  fprintf(_coverage_fout, "2103\n");
#line 2837
  fflush(_coverage_fout);
#line 3078
  if (tmp___84 == 0L) {
#line 3079
    break;
  }
  {
#line 3080
  fprintf(_coverage_fout, "1969\n");
#line 3080
  fflush(_coverage_fout);
#line 3080
  tmp___86 = LocaleNCompare(expression, "max", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2104\n");
#line 2837
  fflush(_coverage_fout);
#line 3080
  if (tmp___86 == 0L) {
    {
#line 3081
    fprintf(_coverage_fout, "1970\n");
#line 3081
    fflush(_coverage_fout);
#line 3081
    tmp___85 = FxMax(fx_info, channel, x, y, expression + 3, exception);
    }
#line 3080
    fprintf(_coverage_fout, "1971\n");
#line 3080
    fflush(_coverage_fout);
#line 3081
    return (tmp___85);
  }
  {
#line 3082
  fprintf(_coverage_fout, "1972\n");
#line 3082
  fflush(_coverage_fout);
#line 3082
  tmp___87 = LocaleNCompare(expression, "minima", 6UL);
  }
#line 2837
  fprintf(_coverage_fout, "2105\n");
#line 2837
  fflush(_coverage_fout);
#line 3082
  if (tmp___87 == 0L) {
#line 3083
    break;
  }
  {
#line 3084
  fprintf(_coverage_fout, "1973\n");
#line 3084
  fflush(_coverage_fout);
#line 3084
  tmp___89 = LocaleNCompare(expression, "min", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2106\n");
#line 2837
  fflush(_coverage_fout);
#line 3084
  if (tmp___89 == 0L) {
    {
#line 3085
    fprintf(_coverage_fout, "1974\n");
#line 3085
    fflush(_coverage_fout);
#line 3085
    tmp___88 = FxMin(fx_info, channel, x, y, expression + 3, exception);
    }
#line 3084
    fprintf(_coverage_fout, "1975\n");
#line 3084
    fflush(_coverage_fout);
#line 3085
    return (tmp___88);
  }
  {
#line 3086
  fprintf(_coverage_fout, "1976\n");
#line 3086
  fflush(_coverage_fout);
#line 3086
  tmp___91 = LocaleNCompare(expression, "mod", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2107\n");
#line 2837
  fflush(_coverage_fout);
#line 3086
  if (tmp___91 == 0L) {
    {
#line 3088
    fprintf(_coverage_fout, "1977\n");
#line 3088
    fflush(_coverage_fout);
#line 3088
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 3,
                                    beta, exception);
#line 3088
    fprintf(_coverage_fout, "1978\n");
#line 3088
    fflush(_coverage_fout);
#line 3090
    tmp___90 = fmod(alpha, *beta);
    }
#line 3086
    fprintf(_coverage_fout, "1979\n");
#line 3086
    fflush(_coverage_fout);
#line 3090
    return (tmp___90);
  }
  {
#line 3092
  fprintf(_coverage_fout, "1980\n");
#line 3092
  fflush(_coverage_fout);
#line 3092
  tmp___93 = LocaleCompare(expression, "m");
  }
#line 2837
  fprintf(_coverage_fout, "2108\n");
#line 2837
  fflush(_coverage_fout);
#line 3092
  if (tmp___93 == 0L) {
    {
#line 3093
    fprintf(_coverage_fout, "1981\n");
#line 3093
    fflush(_coverage_fout);
#line 3093
    tmp___92 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3092
    fprintf(_coverage_fout, "1982\n");
#line 3092
    fflush(_coverage_fout);
#line 3093
    return (tmp___92);
  }
#line 3094
  break;
  case 78: 
  case 110: 
  {
#line 3099
  fprintf(_coverage_fout, "1983\n");
#line 3099
  fflush(_coverage_fout);
#line 3099
  tmp___95 = LocaleCompare(expression, "n");
  }
#line 2837
  fprintf(_coverage_fout, "2109\n");
#line 2837
  fflush(_coverage_fout);
#line 3099
  if (tmp___95 == 0L) {
    {
#line 3100
    fprintf(_coverage_fout, "1984\n");
#line 3100
    fflush(_coverage_fout);
#line 3100
    tmp___94 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3099
    fprintf(_coverage_fout, "1985\n");
#line 3099
    fflush(_coverage_fout);
#line 3100
    return (tmp___94);
  }
#line 3101
  break;
  case 79: 
  case 111: 
  {
#line 3106
  fprintf(_coverage_fout, "1986\n");
#line 3106
  fflush(_coverage_fout);
#line 3106
  tmp___96 = LocaleCompare(expression, "Opaque");
  }
#line 2837
  fprintf(_coverage_fout, "2110\n");
#line 2837
  fflush(_coverage_fout);
#line 3106
  if (tmp___96 == 0L) {
#line 3106
    fprintf(_coverage_fout, "1987\n");
#line 3106
    fflush(_coverage_fout);
#line 3107
    return (1.0);
  }
  {
#line 3108
  fprintf(_coverage_fout, "1988\n");
#line 3108
  fflush(_coverage_fout);
#line 3108
  tmp___98 = LocaleCompare(expression, "o");
  }
#line 2837
  fprintf(_coverage_fout, "2111\n");
#line 2837
  fflush(_coverage_fout);
#line 3108
  if (tmp___98 == 0L) {
    {
#line 3109
    fprintf(_coverage_fout, "1989\n");
#line 3109
    fflush(_coverage_fout);
#line 3109
    tmp___97 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3108
    fprintf(_coverage_fout, "1990\n");
#line 3108
    fflush(_coverage_fout);
#line 3109
    return (tmp___97);
  }
#line 3110
  break;
  case 80: 
  case 112: 
  {
#line 3115
  fprintf(_coverage_fout, "1991\n");
#line 3115
  fflush(_coverage_fout);
#line 3115
  tmp___99 = LocaleCompare(expression, "pi");
  }
#line 2837
  fprintf(_coverage_fout, "2112\n");
#line 2837
  fflush(_coverage_fout);
#line 3115
  if (tmp___99 == 0L) {
#line 3115
    fprintf(_coverage_fout, "1992\n");
#line 3115
    fflush(_coverage_fout);
#line 3116
    return (3.14159265358979323846264338327950288419716939937510);
  }
  {
#line 3117
  fprintf(_coverage_fout, "1993\n");
#line 3117
  fflush(_coverage_fout);
#line 3117
  tmp___101 = LocaleNCompare(expression, "pow", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2113\n");
#line 2837
  fflush(_coverage_fout);
#line 3117
  if (tmp___101 == 0L) {
    {
#line 3119
    fprintf(_coverage_fout, "1994\n");
#line 3119
    fflush(_coverage_fout);
#line 3119
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 3,
                                    beta, exception);
#line 3119
    fprintf(_coverage_fout, "1995\n");
#line 3119
    fflush(_coverage_fout);
#line 3121
    tmp___100 = pow(alpha, *beta);
    }
#line 3117
    fprintf(_coverage_fout, "1996\n");
#line 3117
    fflush(_coverage_fout);
#line 3121
    return (tmp___100);
  }
  {
#line 3123
  fprintf(_coverage_fout, "1997\n");
#line 3123
  fflush(_coverage_fout);
#line 3123
  tmp___103 = LocaleCompare(expression, "p");
  }
#line 2837
  fprintf(_coverage_fout, "2114\n");
#line 2837
  fflush(_coverage_fout);
#line 3123
  if (tmp___103 == 0L) {
    {
#line 3124
    fprintf(_coverage_fout, "1998\n");
#line 3124
    fflush(_coverage_fout);
#line 3124
    tmp___102 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3123
    fprintf(_coverage_fout, "1999\n");
#line 3123
    fflush(_coverage_fout);
#line 3124
    return (tmp___102);
  }
#line 3125
  break;
  case 81: 
  case 113: 
  {
#line 3130
  fprintf(_coverage_fout, "2000\n");
#line 3130
  fflush(_coverage_fout);
#line 3130
  tmp___104 = LocaleCompare(expression, "QuantumRange");
  }
#line 2837
  fprintf(_coverage_fout, "2115\n");
#line 2837
  fflush(_coverage_fout);
#line 3130
  if (tmp___104 == 0L) {
#line 3130
    fprintf(_coverage_fout, "2001\n");
#line 3130
    fflush(_coverage_fout);
#line 3131
    return ((double )65535UL);
  }
  {
#line 3132
  fprintf(_coverage_fout, "2002\n");
#line 3132
  fflush(_coverage_fout);
#line 3132
  tmp___105 = LocaleCompare(expression, "QuantumScale");
  }
#line 2837
  fprintf(_coverage_fout, "2116\n");
#line 2837
  fflush(_coverage_fout);
#line 3132
  if (tmp___105 == 0L) {
#line 3132
    fprintf(_coverage_fout, "2003\n");
#line 3132
    fflush(_coverage_fout);
#line 3133
    return (1.0 / (double )65535UL);
  }
#line 3134
  break;
  case 82: 
  case 114: 
  {
#line 3139
  fprintf(_coverage_fout, "2004\n");
#line 3139
  fflush(_coverage_fout);
#line 3139
  tmp___107 = LocaleNCompare(expression, "rand", 4UL);
  }
#line 2837
  fprintf(_coverage_fout, "2117\n");
#line 2837
  fflush(_coverage_fout);
#line 3139
  if (tmp___107 == 0L) {
    {
#line 3140
    fprintf(_coverage_fout, "2005\n");
#line 3140
    fflush(_coverage_fout);
#line 3140
    tmp___106 = GetPseudoRandomValue();
    }
#line 3139
    fprintf(_coverage_fout, "2006\n");
#line 3139
    fflush(_coverage_fout);
#line 3140
    return (tmp___106);
  }
  {
#line 3141
  fprintf(_coverage_fout, "2007\n");
#line 3141
  fflush(_coverage_fout);
#line 3141
  tmp___110 = LocaleNCompare(expression, "round", 5UL);
  }
#line 2837
  fprintf(_coverage_fout, "2118\n");
#line 2837
  fflush(_coverage_fout);
#line 3141
  if (tmp___110 == 0L) {
    {
#line 3143
    fprintf(_coverage_fout, "2008\n");
#line 3143
    fflush(_coverage_fout);
#line 3143
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 5,
                                    beta, exception);
    }
#line 3141
    fprintf(_coverage_fout, "2012\n");
#line 3141
    fflush(_coverage_fout);
#line 3145
    if (alpha >= 0.0) {
      {
#line 3146
      fprintf(_coverage_fout, "2009\n");
#line 3146
      fflush(_coverage_fout);
#line 3146
      tmp___108 = floor(alpha + 0.5);
      }
#line 3145
      fprintf(_coverage_fout, "2010\n");
#line 3145
      fflush(_coverage_fout);
#line 3146
      return (tmp___108);
    }
    {
#line 3147
    fprintf(_coverage_fout, "2011\n");
#line 3147
    fflush(_coverage_fout);
#line 3147
    tmp___109 = ceil(alpha - 0.5);
    }
#line 3141
    fprintf(_coverage_fout, "2013\n");
#line 3141
    fflush(_coverage_fout);
#line 3147
    return (tmp___109);
  }
  {
#line 3149
  fprintf(_coverage_fout, "2014\n");
#line 3149
  fflush(_coverage_fout);
#line 3149
  tmp___112 = LocaleCompare(expression, "r");
  }
#line 2837
  fprintf(_coverage_fout, "2119\n");
#line 2837
  fflush(_coverage_fout);
#line 3149
  if (tmp___112 == 0L) {
    {
#line 3150
    fprintf(_coverage_fout, "2015\n");
#line 3150
    fflush(_coverage_fout);
#line 3150
    tmp___111 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3149
    fprintf(_coverage_fout, "2016\n");
#line 3149
    fflush(_coverage_fout);
#line 3150
    return (tmp___111);
  }
#line 3151
  break;
  case 83: 
  case 115: 
  {
#line 3156
  fprintf(_coverage_fout, "2017\n");
#line 3156
  fflush(_coverage_fout);
#line 3156
  tmp___114 = LocaleCompare(expression, "saturation");
  }
#line 2837
  fprintf(_coverage_fout, "2120\n");
#line 2837
  fflush(_coverage_fout);
#line 3156
  if (tmp___114 == 0L) {
    {
#line 3157
    fprintf(_coverage_fout, "2018\n");
#line 3157
    fflush(_coverage_fout);
#line 3157
    tmp___113 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3156
    fprintf(_coverage_fout, "2019\n");
#line 3156
    fflush(_coverage_fout);
#line 3157
    return (tmp___113);
  }
  {
#line 3158
  fprintf(_coverage_fout, "2020\n");
#line 3158
  fflush(_coverage_fout);
#line 3158
  tmp___116 = LocaleNCompare(expression, "sign", 4UL);
  }
#line 2837
  fprintf(_coverage_fout, "2121\n");
#line 2837
  fflush(_coverage_fout);
#line 3158
  if (tmp___116 == 0L) {
    {
#line 3160
    fprintf(_coverage_fout, "2021\n");
#line 3160
    fflush(_coverage_fout);
#line 3160
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 4,
                                    beta, exception);
    }
#line 3158
    fprintf(_coverage_fout, "2024\n");
#line 3158
    fflush(_coverage_fout);
#line 3162
    if (alpha < 0.0) {
#line 3162
      fprintf(_coverage_fout, "2022\n");
#line 3162
      fflush(_coverage_fout);
#line 3162
      tmp___115 = - 1.0;
    } else {
#line 3162
      fprintf(_coverage_fout, "2023\n");
#line 3162
      fflush(_coverage_fout);
#line 3162
      tmp___115 = 1.0;
    }
#line 3158
    fprintf(_coverage_fout, "2025\n");
#line 3158
    fflush(_coverage_fout);
#line 3162
    return (tmp___115);
  }
  {
#line 3164
  fprintf(_coverage_fout, "2026\n");
#line 3164
  fflush(_coverage_fout);
#line 3164
  tmp___118 = LocaleNCompare(expression, "sinh", 4UL);
  }
#line 2837
  fprintf(_coverage_fout, "2122\n");
#line 2837
  fflush(_coverage_fout);
#line 3164
  if (tmp___118 == 0L) {
    {
#line 3166
    fprintf(_coverage_fout, "2027\n");
#line 3166
    fflush(_coverage_fout);
#line 3166
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 4,
                                    beta, exception);
#line 3166
    fprintf(_coverage_fout, "2028\n");
#line 3166
    fflush(_coverage_fout);
#line 3168
    tmp___117 = sinh(alpha);
    }
#line 3164
    fprintf(_coverage_fout, "2029\n");
#line 3164
    fflush(_coverage_fout);
#line 3168
    return (tmp___117);
  }
  {
#line 3170
  fprintf(_coverage_fout, "2030\n");
#line 3170
  fflush(_coverage_fout);
#line 3170
  tmp___120 = LocaleNCompare(expression, "sin", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2123\n");
#line 2837
  fflush(_coverage_fout);
#line 3170
  if (tmp___120 == 0L) {
    {
#line 3172
    fprintf(_coverage_fout, "2031\n");
#line 3172
    fflush(_coverage_fout);
#line 3172
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 3,
                                    beta, exception);
#line 3172
    fprintf(_coverage_fout, "2032\n");
#line 3172
    fflush(_coverage_fout);
#line 3174
    tmp___119 = sin(alpha);
    }
#line 3170
    fprintf(_coverage_fout, "2033\n");
#line 3170
    fflush(_coverage_fout);
#line 3174
    return (tmp___119);
  }
  {
#line 3176
  fprintf(_coverage_fout, "2034\n");
#line 3176
  fflush(_coverage_fout);
#line 3176
  tmp___122 = LocaleNCompare(expression, "sqrt", 4UL);
  }
#line 2837
  fprintf(_coverage_fout, "2124\n");
#line 2837
  fflush(_coverage_fout);
#line 3176
  if (tmp___122 == 0L) {
    {
#line 3178
    fprintf(_coverage_fout, "2035\n");
#line 3178
    fflush(_coverage_fout);
#line 3178
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 4,
                                    beta, exception);
#line 3178
    fprintf(_coverage_fout, "2036\n");
#line 3178
    fflush(_coverage_fout);
#line 3180
    tmp___121 = sqrt(alpha);
    }
#line 3176
    fprintf(_coverage_fout, "2037\n");
#line 3176
    fflush(_coverage_fout);
#line 3180
    return (tmp___121);
  }
  {
#line 3182
  fprintf(_coverage_fout, "2038\n");
#line 3182
  fflush(_coverage_fout);
#line 3182
  tmp___124 = LocaleCompare(expression, "s");
  }
#line 2837
  fprintf(_coverage_fout, "2125\n");
#line 2837
  fflush(_coverage_fout);
#line 3182
  if (tmp___124 == 0L) {
    {
#line 3183
    fprintf(_coverage_fout, "2039\n");
#line 3183
    fflush(_coverage_fout);
#line 3183
    tmp___123 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3182
    fprintf(_coverage_fout, "2040\n");
#line 3182
    fflush(_coverage_fout);
#line 3183
    return (tmp___123);
  }
#line 3184
  break;
  case 84: 
  case 116: 
  {
#line 3189
  fprintf(_coverage_fout, "2041\n");
#line 3189
  fflush(_coverage_fout);
#line 3189
  tmp___126 = LocaleNCompare(expression, "tanh", 4UL);
  }
#line 2837
  fprintf(_coverage_fout, "2126\n");
#line 2837
  fflush(_coverage_fout);
#line 3189
  if (tmp___126 == 0L) {
    {
#line 3191
    fprintf(_coverage_fout, "2042\n");
#line 3191
    fflush(_coverage_fout);
#line 3191
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 4,
                                    beta, exception);
#line 3191
    fprintf(_coverage_fout, "2043\n");
#line 3191
    fflush(_coverage_fout);
#line 3193
    tmp___125 = tanh(alpha);
    }
#line 3189
    fprintf(_coverage_fout, "2044\n");
#line 3189
    fflush(_coverage_fout);
#line 3193
    return (tmp___125);
  }
  {
#line 3195
  fprintf(_coverage_fout, "2045\n");
#line 3195
  fflush(_coverage_fout);
#line 3195
  tmp___128 = LocaleNCompare(expression, "tan", 3UL);
  }
#line 2837
  fprintf(_coverage_fout, "2127\n");
#line 2837
  fflush(_coverage_fout);
#line 3195
  if (tmp___128 == 0L) {
    {
#line 3197
    fprintf(_coverage_fout, "2046\n");
#line 3197
    fflush(_coverage_fout);
#line 3197
    alpha = FxEvaluateSubexpression(fx_info, channel, x, y, expression + 3,
                                    beta, exception);
#line 3197
    fprintf(_coverage_fout, "2047\n");
#line 3197
    fflush(_coverage_fout);
#line 3199
    tmp___127 = tan(alpha);
    }
#line 3195
    fprintf(_coverage_fout, "2048\n");
#line 3195
    fflush(_coverage_fout);
#line 3199
    return (tmp___127);
  }
  {
#line 3201
  fprintf(_coverage_fout, "2049\n");
#line 3201
  fflush(_coverage_fout);
#line 3201
  tmp___129 = LocaleCompare(expression, "Transparent");
  }
#line 2837
  fprintf(_coverage_fout, "2128\n");
#line 2837
  fflush(_coverage_fout);
#line 3201
  if (tmp___129 == 0L) {
#line 3201
    fprintf(_coverage_fout, "2050\n");
#line 3201
    fflush(_coverage_fout);
#line 3202
    return (0.0);
  }
  {
#line 3203
  fprintf(_coverage_fout, "2051\n");
#line 3203
  fflush(_coverage_fout);
#line 3203
  tmp___131 = LocaleCompare(expression, "t");
  }
#line 2837
  fprintf(_coverage_fout, "2129\n");
#line 2837
  fflush(_coverage_fout);
#line 3203
  if (tmp___131 == 0L) {
    {
#line 3204
    fprintf(_coverage_fout, "2052\n");
#line 3204
    fflush(_coverage_fout);
#line 3204
    tmp___130 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3203
    fprintf(_coverage_fout, "2053\n");
#line 3203
    fflush(_coverage_fout);
#line 3204
    return (tmp___130);
  }
#line 3205
  break;
  case 85: 
  case 117: 
  {
#line 3210
  fprintf(_coverage_fout, "2054\n");
#line 3210
  fflush(_coverage_fout);
#line 3210
  tmp___133 = LocaleCompare(expression, "u");
  }
#line 2837
  fprintf(_coverage_fout, "2130\n");
#line 2837
  fflush(_coverage_fout);
#line 3210
  if (tmp___133 == 0L) {
    {
#line 3211
    fprintf(_coverage_fout, "2055\n");
#line 3211
    fflush(_coverage_fout);
#line 3211
    tmp___132 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3210
    fprintf(_coverage_fout, "2056\n");
#line 3210
    fflush(_coverage_fout);
#line 3211
    return (tmp___132);
  }
#line 3212
  break;
  case 86: 
  case 118: 
  {
#line 3217
  fprintf(_coverage_fout, "2057\n");
#line 3217
  fflush(_coverage_fout);
#line 3217
  tmp___135 = LocaleCompare(expression, "v");
  }
#line 2837
  fprintf(_coverage_fout, "2131\n");
#line 2837
  fflush(_coverage_fout);
#line 3217
  if (tmp___135 == 0L) {
    {
#line 3218
    fprintf(_coverage_fout, "2058\n");
#line 3218
    fflush(_coverage_fout);
#line 3218
    tmp___134 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3217
    fprintf(_coverage_fout, "2059\n");
#line 3217
    fflush(_coverage_fout);
#line 3218
    return (tmp___134);
  }
#line 3219
  break;
  case 87: 
  case 119: 
  {
#line 3224
  fprintf(_coverage_fout, "2060\n");
#line 3224
  fflush(_coverage_fout);
#line 3224
  tmp___137 = LocaleCompare(expression, "w");
  }
#line 2837
  fprintf(_coverage_fout, "2132\n");
#line 2837
  fflush(_coverage_fout);
#line 3224
  if (tmp___137 == 0L) {
    {
#line 3225
    fprintf(_coverage_fout, "2061\n");
#line 3225
    fflush(_coverage_fout);
#line 3225
    tmp___136 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3224
    fprintf(_coverage_fout, "2062\n");
#line 3224
    fflush(_coverage_fout);
#line 3225
    return (tmp___136);
  }
#line 3226
  break;
  case 89: 
  case 121: 
  {
#line 3231
  fprintf(_coverage_fout, "2063\n");
#line 3231
  fflush(_coverage_fout);
#line 3231
  tmp___139 = LocaleCompare(expression, "y");
  }
#line 2837
  fprintf(_coverage_fout, "2133\n");
#line 2837
  fflush(_coverage_fout);
#line 3231
  if (tmp___139 == 0L) {
    {
#line 3232
    fprintf(_coverage_fout, "2064\n");
#line 3232
    fflush(_coverage_fout);
#line 3232
    tmp___138 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3231
    fprintf(_coverage_fout, "2065\n");
#line 3231
    fflush(_coverage_fout);
#line 3232
    return (tmp___138);
  }
#line 3233
  break;
  case 90: 
  case 122: 
  {
#line 3238
  fprintf(_coverage_fout, "2066\n");
#line 3238
  fflush(_coverage_fout);
#line 3238
  tmp___141 = LocaleCompare(expression, "z");
  }
#line 2837
  fprintf(_coverage_fout, "2134\n");
#line 2837
  fflush(_coverage_fout);
#line 3238
  if (tmp___141 == 0L) {
    {
#line 3239
    fprintf(_coverage_fout, "2067\n");
#line 3239
    fflush(_coverage_fout);
#line 3239
    tmp___140 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3238
    fprintf(_coverage_fout, "2068\n");
#line 3238
    fflush(_coverage_fout);
#line 3239
    return (tmp___140);
  }
#line 3240
  break;
#line 2837
  fprintf(_coverage_fout, "2135\n");
#line 2837
  fflush(_coverage_fout);
  default: ;
#line 3243
  break;
  }
  {
#line 3245
  fprintf(_coverage_fout, "2136\n");
#line 3245
  fflush(_coverage_fout);
#line 3245
  q = (char *)expression;
#line 3245
  fprintf(_coverage_fout, "2137\n");
#line 3245
  fflush(_coverage_fout);
#line 3246
  alpha = strtod((char const   */* __restrict  */)expression,
                 (char **/* __restrict  */)(& q));
  }
#line 2608
  fprintf(_coverage_fout, "2146\n");
#line 2608
  fflush(_coverage_fout);
#line 3247
  if ((unsigned long )q == (unsigned long )expression) {
    {
#line 3248
    fprintf(_coverage_fout, "2138\n");
#line 3248
    fflush(_coverage_fout);
#line 3248
    tmp___142 = FxGetSymbol(fx_info, channel, x, y, expression, exception);
    }
#line 3247
    fprintf(_coverage_fout, "2139\n");
#line 3247
    fflush(_coverage_fout);
#line 3248
    return (tmp___142);
  }
#line 2608
  fprintf(_coverage_fout, "2147\n");
#line 2608
  fflush(_coverage_fout);
#line 3249
  return (alpha);
}
}
#line 3252 "magick/fx.c"
MagickBooleanType FxEvaluateExpression(FxInfo *fx_info , MagickRealType *alpha ,
                                       ExceptionInfo *exception ) 
{ MagickBooleanType status ;

  {
  {
#line 3258
  fprintf(_coverage_fout, "2148\n");
#line 3258
  fflush(_coverage_fout);
#line 3258
  status = FxEvaluateChannelExpression(fx_info, 1, 0L, 0L, alpha, exception);
  }
#line 3252
  fprintf(_coverage_fout, "2149\n");
#line 3252
  fflush(_coverage_fout);
#line 3259
  return (status);
}
}
#line 3262 "magick/fx.c"
MagickBooleanType FxPreprocessExpression(FxInfo *fx_info ,
                                         MagickRealType *alpha ,
                                         ExceptionInfo *exception ) 
{ FILE *file ;
  MagickBooleanType status ;

  {
  {
#line 3271
  fprintf(_coverage_fout, "2150\n");
#line 3271
  fflush(_coverage_fout);
#line 3271
  file = fx_info->file;
#line 3271
  fprintf(_coverage_fout, "2151\n");
#line 3271
  fflush(_coverage_fout);
#line 3272
  fx_info->file = (FILE *)((void *)0);
#line 3271
  fprintf(_coverage_fout, "2152\n");
#line 3271
  fflush(_coverage_fout);
#line 3273
  status = FxEvaluateChannelExpression(fx_info, 1, 0L, 0L, alpha, exception);
#line 3271
  fprintf(_coverage_fout, "2153\n");
#line 3271
  fflush(_coverage_fout);
#line 3274
  fx_info->file = file;
  }
#line 3262
  fprintf(_coverage_fout, "2154\n");
#line 3262
  fflush(_coverage_fout);
#line 3275
  return (status);
}
}
#line 3278 "magick/fx.c"
MagickBooleanType FxEvaluateChannelExpression(FxInfo *fx_info ,
                                              ChannelType channel , long x ,
                                              long y , MagickRealType *alpha ,
                                              ExceptionInfo *exception ) 
{ MagickRealType beta ;
  int tmp ;

  {
  {
#line 3285
  fprintf(_coverage_fout, "2155\n");
#line 3285
  fflush(_coverage_fout);
#line 3285
  beta = 0.0;
#line 3285
  fprintf(_coverage_fout, "2156\n");
#line 3285
  fflush(_coverage_fout);
#line 3286
  *alpha = FxEvaluateSubexpression(fx_info, channel, x, y,
                                   (char const   *)fx_info->expression, & beta,
                                   exception);
  }
#line 3278
  fprintf(_coverage_fout, "2159\n");
#line 3278
  fflush(_coverage_fout);
#line 3288
  if ((int )exception->severity == 410) {
#line 3288
    fprintf(_coverage_fout, "2157\n");
#line 3288
    fflush(_coverage_fout);
#line 3288
    tmp = 0;
  } else {
#line 3288
    fprintf(_coverage_fout, "2158\n");
#line 3288
    fflush(_coverage_fout);
#line 3288
    tmp = 1;
  }
#line 3278
  fprintf(_coverage_fout, "2160\n");
#line 3278
  fflush(_coverage_fout);
#line 3288
  return ((enum __anonenum_MagickBooleanType_81 )tmp);
}
}
#line 3323 "magick/fx.c"
static FxInfo **DestroyFxThreadSet(FxInfo **fx_info ) 
{ register long i ;
  unsigned long tmp ;
  void *tmp___0 ;

  {
#line 3323
  fprintf(_coverage_fout, "2168\n");
#line 3323
  fflush(_coverage_fout);
#line 3328
  if (! ((unsigned long )fx_info != (unsigned long )((FxInfo **)((void *)0)))) {
    {
#line 3328
    fprintf(_coverage_fout, "2161\n");
#line 3328
    fflush(_coverage_fout);
#line 3328
    __assert_fail("fx_info != (FxInfo **) ((void *)0)", "magick/fx.c", 3328U,
                  "DestroyFxThreadSet");
    }
  }
#line 3323
  fprintf(_coverage_fout, "2169\n");
#line 3323
  fflush(_coverage_fout);
#line 3329
  i = 0L;
#line 3323
  fprintf(_coverage_fout, "2170\n");
#line 3323
  fflush(_coverage_fout);
#line 3329
  while (1) {
    {
#line 3329
    fprintf(_coverage_fout, "2162\n");
#line 3329
    fflush(_coverage_fout);
#line 3329
    tmp = GetPixelCacheMaximumThreads();
    }
#line 3329
    fprintf(_coverage_fout, "2164\n");
#line 3329
    fflush(_coverage_fout);
#line 3329
    if (! (i < (long )tmp)) {
#line 3329
      break;
    }
#line 3329
    fprintf(_coverage_fout, "2165\n");
#line 3329
    fflush(_coverage_fout);
#line 3330
    if ((unsigned long )*(fx_info + i) != (unsigned long )((FxInfo *)((void *)0))) {
      {
#line 3331
      fprintf(_coverage_fout, "2163\n");
#line 3331
      fflush(_coverage_fout);
#line 3331
      *(fx_info + i) = DestroyFxInfo(*(fx_info + i));
      }
    }
#line 3329
    fprintf(_coverage_fout, "2166\n");
#line 3329
    fflush(_coverage_fout);
#line 3329
    i ++;
  }
  {
#line 3332
  fprintf(_coverage_fout, "2167\n");
#line 3332
  fflush(_coverage_fout);
#line 3332
  tmp___0 = RelinquishMagickMemory((void *)fx_info);
  }
#line 3323
  fprintf(_coverage_fout, "2171\n");
#line 3323
  fflush(_coverage_fout);
#line 3332
  return ((FxInfo **)tmp___0);
}
}
#line 3335 "magick/fx.c"
static FxInfo **AcquireFxThreadSet(Image const   *image ,
                                   char const   *expression ,
                                   ExceptionInfo *exception ) 
{ char *fx_expression ;
  FxInfo **fx_info ;
  MagickRealType alpha ;
  register long i ;
  unsigned long number_threads ;
  void *tmp ;
  FxInfo **tmp___0 ;

  {
  {
#line 3353
  fprintf(_coverage_fout, "2172\n");
#line 3353
  fflush(_coverage_fout);
#line 3353
  number_threads = GetPixelCacheMaximumThreads();
#line 3353
  fprintf(_coverage_fout, "2173\n");
#line 3353
  fflush(_coverage_fout);
#line 3354
  tmp = AcquireQuantumMemory(number_threads, sizeof(*fx_info));
#line 3353
  fprintf(_coverage_fout, "2174\n");
#line 3353
  fflush(_coverage_fout);
#line 3354
  fx_info = (FxInfo **)tmp;
  }
#line 3335
  fprintf(_coverage_fout, "2187\n");
#line 3335
  fflush(_coverage_fout);
#line 3355
  if ((unsigned long )fx_info == (unsigned long )((FxInfo **)((void *)0))) {
#line 3355
    fprintf(_coverage_fout, "2175\n");
#line 3355
    fflush(_coverage_fout);
#line 3356
    return ((FxInfo **)((void *)0));
  }
  {
#line 3357
  fprintf(_coverage_fout, "2176\n");
#line 3357
  fflush(_coverage_fout);
#line 3357
  ResetMagickMemory((void *)fx_info, 0, number_threads * sizeof(*fx_info));
  }
#line 3335
  fprintf(_coverage_fout, "2188\n");
#line 3335
  fflush(_coverage_fout);
#line 3358
  if ((int const   )*expression != 64) {
    {
#line 3359
    fprintf(_coverage_fout, "2177\n");
#line 3359
    fflush(_coverage_fout);
#line 3359
    fx_expression = ConstantString(expression);
    }
  } else {
    {
#line 3361
    fprintf(_coverage_fout, "2178\n");
#line 3361
    fflush(_coverage_fout);
#line 3361
    fx_expression = FileToString(expression + 1, (unsigned long )(~ 0),
                                 exception);
    }
  }
#line 3335
  fprintf(_coverage_fout, "2189\n");
#line 3335
  fflush(_coverage_fout);
#line 3362
  i = 0L;
#line 3335
  fprintf(_coverage_fout, "2190\n");
#line 3335
  fflush(_coverage_fout);
#line 3362
  while (1) {
#line 3362
    fprintf(_coverage_fout, "2184\n");
#line 3362
    fflush(_coverage_fout);
#line 3362
    if (! (i < (long )number_threads)) {
#line 3362
      break;
    }
    {
#line 3364
    fprintf(_coverage_fout, "2179\n");
#line 3364
    fflush(_coverage_fout);
#line 3364
    *(fx_info + i) = AcquireFxInfo(image, (char const   *)fx_expression);
    }
#line 3362
    fprintf(_coverage_fout, "2185\n");
#line 3362
    fflush(_coverage_fout);
#line 3365
    if ((unsigned long )*(fx_info + i) == (unsigned long )((FxInfo *)((void *)0))) {
      {
#line 3366
      fprintf(_coverage_fout, "2180\n");
#line 3366
      fflush(_coverage_fout);
#line 3366
      tmp___0 = DestroyFxThreadSet(fx_info);
      }
#line 3365
      fprintf(_coverage_fout, "2181\n");
#line 3365
      fflush(_coverage_fout);
#line 3366
      return (tmp___0);
    }
    {
#line 3367
    fprintf(_coverage_fout, "2182\n");
#line 3367
    fflush(_coverage_fout);
#line 3367
    FxPreprocessExpression(*(fx_info + i), & alpha, (*(fx_info + i))->exception);
#line 3367
    fprintf(_coverage_fout, "2183\n");
#line 3367
    fflush(_coverage_fout);
#line 3362
    i ++;
    }
  }
  {
#line 3369
  fprintf(_coverage_fout, "2186\n");
#line 3369
  fflush(_coverage_fout);
#line 3369
  fx_expression = DestroyString(fx_expression);
  }
#line 3335
  fprintf(_coverage_fout, "2191\n");
#line 3335
  fflush(_coverage_fout);
#line 3370
  return (fx_info);
}
}
#line 3373 "magick/fx.c"
Image *FxImage(Image const   *image , char const   *expression ,
               ExceptionInfo *exception ) 
{ Image *fx_image ;

  {
  {
#line 3379
  fprintf(_coverage_fout, "2192\n");
#line 3379
  fflush(_coverage_fout);
#line 3379
  fx_image = FxImageChannel(image, 1, expression, exception);
  }
#line 3373
  fprintf(_coverage_fout, "2193\n");
#line 3373
  fflush(_coverage_fout);
#line 3380
  return (fx_image);
}
}
#line 3383 "magick/fx.c"
Image *FxImageChannel(Image const   *image , ChannelType channel ,
                      char const   *expression , ExceptionInfo *exception ) 
{ FxInfo **fx_info ;
  Image *fx_image ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  MagickRealType alpha ;
  ViewInfo *fx_view ;
  MagickBooleanType tmp ;
  char const   *tmp___0 ;
  MagickRealType alpha___0 ;
  register IndexPacket * __restrict  fx_indexes ;
  register long id ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket *tmp___1 ;
  IndexPacket *tmp___2 ;
  Quantum tmp___3 ;
  MagickBooleanType tmp___4 ;
  MagickBooleanType proceed ;
  long tmp___5 ;

  {
#line 3383
  fprintf(_coverage_fout, "2265\n");
#line 3383
  fflush(_coverage_fout);
#line 3407
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 3407
    fprintf(_coverage_fout, "2194\n");
#line 3407
    fflush(_coverage_fout);
#line 3407
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 3407U,
                  "FxImageChannel");
    }
  }
#line 3383
  fprintf(_coverage_fout, "2266\n");
#line 3383
  fflush(_coverage_fout);
#line 3408
  if (! (image->signature == 2880220587UL)) {
    {
#line 3408
    fprintf(_coverage_fout, "2195\n");
#line 3408
    fflush(_coverage_fout);
#line 3408
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 3408U,
                  "FxImageChannel");
    }
  }
#line 3383
  fprintf(_coverage_fout, "2267\n");
#line 3383
  fflush(_coverage_fout);
#line 3409
  if ((int const   )image->debug != 0) {
    {
#line 3410
    fprintf(_coverage_fout, "2196\n");
#line 3410
    fflush(_coverage_fout);
#line 3410
    LogMagickEvent(1, "magick/fx.c", "FxImageChannel", 3410UL, "%s",
                   image->filename);
    }
  }
  {
#line 3411
  fprintf(_coverage_fout, "2197\n");
#line 3411
  fflush(_coverage_fout);
#line 3411
  fx_image = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 3383
  fprintf(_coverage_fout, "2268\n");
#line 3383
  fflush(_coverage_fout);
#line 3412
  if ((unsigned long )fx_image == (unsigned long )((Image *)((void *)0))) {
#line 3412
    fprintf(_coverage_fout, "2198\n");
#line 3412
    fflush(_coverage_fout);
#line 3413
    return ((Image *)((void *)0));
  }
  {
#line 3414
  fprintf(_coverage_fout, "2199\n");
#line 3414
  fflush(_coverage_fout);
#line 3414
  tmp = SetImageStorageClass(fx_image, 1);
  }
#line 3383
  fprintf(_coverage_fout, "2269\n");
#line 3383
  fflush(_coverage_fout);
#line 3414
  if ((int )tmp == 0) {
    {
#line 3416
    fprintf(_coverage_fout, "2200\n");
#line 3416
    fflush(_coverage_fout);
#line 3416
    InheritException(exception, (ExceptionInfo const   *)(& fx_image->exception));
#line 3416
    fprintf(_coverage_fout, "2201\n");
#line 3416
    fflush(_coverage_fout);
#line 3417
    fx_image = DestroyImage(fx_image);
    }
#line 3414
    fprintf(_coverage_fout, "2202\n");
#line 3414
    fflush(_coverage_fout);
#line 3418
    return ((Image *)((void *)0));
  }
  {
#line 3420
  fprintf(_coverage_fout, "2203\n");
#line 3420
  fflush(_coverage_fout);
#line 3420
  fx_info = AcquireFxThreadSet(image, expression, exception);
  }
#line 3383
  fprintf(_coverage_fout, "2270\n");
#line 3383
  fflush(_coverage_fout);
#line 3421
  if ((unsigned long )fx_info == (unsigned long )((FxInfo **)((void *)0))) {
    {
#line 3423
    fprintf(_coverage_fout, "2204\n");
#line 3423
    fflush(_coverage_fout);
#line 3423
    fx_image = DestroyImage(fx_image);
    }
#line 3421
    fprintf(_coverage_fout, "2208\n");
#line 3421
    fflush(_coverage_fout);
#line 3424
    if ((unsigned long )"MemoryAllocationFailed" == (unsigned long )((char const   *)((void *)0))) {
#line 3424
      fprintf(_coverage_fout, "2205\n");
#line 3424
      fflush(_coverage_fout);
#line 3424
      tmp___0 = "unknown";
    } else {
#line 3424
      fprintf(_coverage_fout, "2206\n");
#line 3424
      fflush(_coverage_fout);
#line 3424
      tmp___0 = "MemoryAllocationFailed";
    }
    {
#line 3424
    fprintf(_coverage_fout, "2207\n");
#line 3424
    fflush(_coverage_fout);
#line 3424
    ThrowMagickException(exception, "magick/fx.c", "FxImageChannel", 3424UL,
                         400, tmp___0, "`%s\'", image->filename);
    }
#line 3421
    fprintf(_coverage_fout, "2209\n");
#line 3421
    fflush(_coverage_fout);
#line 3424
    return ((Image *)((void *)0));
  }
  {
#line 3426
  fprintf(_coverage_fout, "2210\n");
#line 3426
  fflush(_coverage_fout);
#line 3426
  status = FxPreprocessExpression(*(fx_info + 0), & alpha, exception);
  }
#line 3383
  fprintf(_coverage_fout, "2271\n");
#line 3383
  fflush(_coverage_fout);
#line 3427
  if ((int )status == 0) {
    {
#line 3429
    fprintf(_coverage_fout, "2211\n");
#line 3429
    fflush(_coverage_fout);
#line 3429
    fx_image = DestroyImage(fx_image);
#line 3429
    fprintf(_coverage_fout, "2212\n");
#line 3429
    fflush(_coverage_fout);
#line 3430
    fx_info = DestroyFxThreadSet(fx_info);
    }
#line 3427
    fprintf(_coverage_fout, "2213\n");
#line 3427
    fflush(_coverage_fout);
#line 3431
    return ((Image *)((void *)0));
  }
  {
#line 3436
  fprintf(_coverage_fout, "2214\n");
#line 3436
  fflush(_coverage_fout);
#line 3436
  status = 1;
#line 3436
  fprintf(_coverage_fout, "2215\n");
#line 3436
  fflush(_coverage_fout);
#line 3437
  progress = 0L;
#line 3436
  fprintf(_coverage_fout, "2216\n");
#line 3436
  fflush(_coverage_fout);
#line 3438
  fx_view = AcquireCacheView((Image const   *)fx_image);
#line 3436
  fprintf(_coverage_fout, "2217\n");
#line 3436
  fflush(_coverage_fout);
#line 3442
  y = 0L;
  }
#line 3383
  fprintf(_coverage_fout, "2272\n");
#line 3383
  fflush(_coverage_fout);
#line 3442
  while (1) {
#line 3442
    fprintf(_coverage_fout, "2254\n");
#line 3442
    fflush(_coverage_fout);
#line 3442
    if (! (y < (long )fx_image->rows)) {
#line 3442
      break;
    }
#line 3442
    fprintf(_coverage_fout, "2255\n");
#line 3442
    fflush(_coverage_fout);
#line 3457
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 3459
    fprintf(_coverage_fout, "2218\n");
#line 3459
    fflush(_coverage_fout);
#line 3459
    tmp___1 = GetCacheViewAuthenticPixels(fx_view, 0L, y, fx_image->columns,
                                          1UL, exception);
#line 3459
    fprintf(_coverage_fout, "2219\n");
#line 3459
    fflush(_coverage_fout);
#line 3459
    q = (PixelPacket */* __restrict  */)tmp___1;
    }
#line 3442
    fprintf(_coverage_fout, "2256\n");
#line 3442
    fflush(_coverage_fout);
#line 3460
    if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 3460
      fprintf(_coverage_fout, "2220\n");
#line 3460
      fflush(_coverage_fout);
#line 3462
      status = 0;
      goto __Cont;
    }
    {
#line 3465
    fprintf(_coverage_fout, "2221\n");
#line 3465
    fflush(_coverage_fout);
#line 3465
    tmp___2 = GetCacheViewAuthenticIndexQueue(fx_view);
#line 3465
    fprintf(_coverage_fout, "2222\n");
#line 3465
    fflush(_coverage_fout);
#line 3465
    fx_indexes = (IndexPacket */* __restrict  */)tmp___2;
#line 3465
    fprintf(_coverage_fout, "2223\n");
#line 3465
    fflush(_coverage_fout);
#line 3466
    id = GetPixelCacheThreadId();
#line 3465
    fprintf(_coverage_fout, "2224\n");
#line 3465
    fflush(_coverage_fout);
#line 3467
    alpha___0 = 0.0;
#line 3465
    fprintf(_coverage_fout, "2225\n");
#line 3465
    fflush(_coverage_fout);
#line 3468
    x = 0L;
    }
#line 3442
    fprintf(_coverage_fout, "2257\n");
#line 3442
    fflush(_coverage_fout);
#line 3468
    while (1) {
#line 3468
      fprintf(_coverage_fout, "2240\n");
#line 3468
      fflush(_coverage_fout);
#line 3468
      if (! (x < (long )fx_image->columns)) {
#line 3468
        break;
      }
#line 3468
      fprintf(_coverage_fout, "2241\n");
#line 3468
      fflush(_coverage_fout);
#line 3470
      if (((int )channel & 1) != 0) {
        {
#line 3472
        fprintf(_coverage_fout, "2226\n");
#line 3472
        fflush(_coverage_fout);
#line 3472
        FxEvaluateChannelExpression(*(fx_info + id), 1, x, y, & alpha___0,
                                    exception);
#line 3472
        fprintf(_coverage_fout, "2227\n");
#line 3472
        fflush(_coverage_fout);
#line 3474
        q->red = RoundToQuantum((double )65535UL * alpha___0);
        }
      }
#line 3468
      fprintf(_coverage_fout, "2242\n");
#line 3468
      fflush(_coverage_fout);
#line 3476
      if (((int )channel & 2) != 0) {
        {
#line 3478
        fprintf(_coverage_fout, "2228\n");
#line 3478
        fflush(_coverage_fout);
#line 3478
        FxEvaluateChannelExpression(*(fx_info + id), 2, x, y, & alpha___0,
                                    exception);
#line 3478
        fprintf(_coverage_fout, "2229\n");
#line 3478
        fflush(_coverage_fout);
#line 3480
        q->green = RoundToQuantum((double )65535UL * alpha___0);
        }
      }
#line 3468
      fprintf(_coverage_fout, "2243\n");
#line 3468
      fflush(_coverage_fout);
#line 3482
      if (((int )channel & 4) != 0) {
        {
#line 3484
        fprintf(_coverage_fout, "2230\n");
#line 3484
        fflush(_coverage_fout);
#line 3484
        FxEvaluateChannelExpression(*(fx_info + id), 4, x, y, & alpha___0,
                                    exception);
#line 3484
        fprintf(_coverage_fout, "2231\n");
#line 3484
        fflush(_coverage_fout);
#line 3486
        q->blue = RoundToQuantum((double )65535UL * alpha___0);
        }
      }
#line 3468
      fprintf(_coverage_fout, "2244\n");
#line 3468
      fflush(_coverage_fout);
#line 3488
      if (((int )channel & 8) != 0) {
        {
#line 3490
        fprintf(_coverage_fout, "2232\n");
#line 3490
        fflush(_coverage_fout);
#line 3490
        FxEvaluateChannelExpression(*(fx_info + id), 8, x, y, & alpha___0,
                                    exception);
        }
#line 3488
        fprintf(_coverage_fout, "2235\n");
#line 3488
        fflush(_coverage_fout);
#line 3492
        if ((int const   )image->matte == 0) {
          {
#line 3493
          fprintf(_coverage_fout, "2233\n");
#line 3493
          fflush(_coverage_fout);
#line 3493
          q->opacity = RoundToQuantum((double )65535UL * alpha___0);
          }
        } else {
          {
#line 3495
          fprintf(_coverage_fout, "2234\n");
#line 3495
          fflush(_coverage_fout);
#line 3495
          q->opacity = RoundToQuantum((MagickRealType )65535UL - (MagickRealType )65535UL * alpha___0);
          }
        }
      }
#line 3468
      fprintf(_coverage_fout, "2245\n");
#line 3468
      fflush(_coverage_fout);
#line 3498
      if (((int )channel & 32) != 0) {
#line 3498
        fprintf(_coverage_fout, "2239\n");
#line 3498
        fflush(_coverage_fout);
#line 3498
        if ((int )fx_image->colorspace == 12) {
          {
#line 3501
          fprintf(_coverage_fout, "2236\n");
#line 3501
          fflush(_coverage_fout);
#line 3501
          FxEvaluateChannelExpression(*(fx_info + id), 32, x, y, & alpha___0,
                                      exception);
#line 3501
          fprintf(_coverage_fout, "2237\n");
#line 3501
          fflush(_coverage_fout);
#line 3503
          tmp___3 = RoundToQuantum((double )65535UL * alpha___0);
#line 3501
          fprintf(_coverage_fout, "2238\n");
#line 3501
          fflush(_coverage_fout);
#line 3503
          *(fx_indexes + x) = tmp___3;
          }
        }
      }
#line 3468
      fprintf(_coverage_fout, "2246\n");
#line 3468
      fflush(_coverage_fout);
#line 3506
      q ++;
#line 3468
      x ++;
    }
    {
#line 3508
    fprintf(_coverage_fout, "2247\n");
#line 3508
    fflush(_coverage_fout);
#line 3508
    tmp___4 = SyncCacheViewAuthenticPixels(fx_view, exception);
    }
#line 3442
    fprintf(_coverage_fout, "2258\n");
#line 3442
    fflush(_coverage_fout);
#line 3508
    if ((int )tmp___4 == 0) {
#line 3508
      fprintf(_coverage_fout, "2248\n");
#line 3508
      fflush(_coverage_fout);
#line 3509
      status = 0;
    }
#line 3442
    fprintf(_coverage_fout, "2259\n");
#line 3442
    fflush(_coverage_fout);
#line 3510
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 3518
      fprintf(_coverage_fout, "2249\n");
#line 3518
      fflush(_coverage_fout);
#line 3518
      tmp___5 = progress;
#line 3518
      fprintf(_coverage_fout, "2250\n");
#line 3518
      fflush(_coverage_fout);
#line 3518
      progress ++;
#line 3518
      fprintf(_coverage_fout, "2251\n");
#line 3518
      fflush(_coverage_fout);
#line 3518
      proceed = SetImageProgress(image, "Fx/Image", (long long )tmp___5,
                                 (unsigned long long )image->rows);
      }
#line 3510
      fprintf(_coverage_fout, "2253\n");
#line 3510
      fflush(_coverage_fout);
#line 3519
      if ((int )proceed == 0) {
#line 3519
        fprintf(_coverage_fout, "2252\n");
#line 3519
        fflush(_coverage_fout);
#line 3520
        status = 0;
      }
    }
#line 3442
    fprintf(_coverage_fout, "2260\n");
#line 3442
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 3442
    y ++;
  }
  {
#line 3523
  fprintf(_coverage_fout, "2261\n");
#line 3523
  fflush(_coverage_fout);
#line 3523
  fx_image->matte = (*(fx_info + 0))->matte;
#line 3523
  fprintf(_coverage_fout, "2262\n");
#line 3523
  fflush(_coverage_fout);
#line 3524
  fx_view = DestroyCacheView(fx_view);
#line 3523
  fprintf(_coverage_fout, "2263\n");
#line 3523
  fflush(_coverage_fout);
#line 3525
  fx_info = DestroyFxThreadSet(fx_info);
  }
#line 3383
  fprintf(_coverage_fout, "2273\n");
#line 3383
  fflush(_coverage_fout);
#line 3526
  if ((int )status == 0) {
    {
#line 3527
    fprintf(_coverage_fout, "2264\n");
#line 3527
    fflush(_coverage_fout);
#line 3527
    fx_image = DestroyImage(fx_image);
    }
  }
#line 3383
  fprintf(_coverage_fout, "2274\n");
#line 3383
  fflush(_coverage_fout);
#line 3528
  return (fx_image);
}
}
#line 3565 "magick/fx.c"
Image *ImplodeImage(Image const   *image , double amount ,
                    ExceptionInfo *exception ) 
{ Image *implode_image ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  MagickPixelPacket zero ;
  MagickRealType radius ;
  PointInfo center ;
  PointInfo scale ;
  ResampleFilter **resample_filter ;
  ViewInfo *image_view ;
  ViewInfo *implode_view ;
  MagickBooleanType tmp ;
  MagickPixelPacket pixel ;
  MagickRealType distance ;
  PointInfo delta ;
  register IndexPacket * __restrict  implode_indexes ;
  register long id ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket *tmp___0 ;
  IndexPacket *tmp___1 ;
  double factor ;
  double tmp___2 ;
  double tmp___3 ;
  MagickBooleanType tmp___4 ;
  MagickBooleanType proceed ;
  long tmp___5 ;

  {
#line 3565
  fprintf(_coverage_fout, "2335\n");
#line 3565
  fflush(_coverage_fout);
#line 3600
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 3600
    fprintf(_coverage_fout, "2275\n");
#line 3600
    fflush(_coverage_fout);
#line 3600
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 3600U,
                  "ImplodeImage");
    }
  }
#line 3565
  fprintf(_coverage_fout, "2336\n");
#line 3565
  fflush(_coverage_fout);
#line 3601
  if (! (image->signature == 2880220587UL)) {
    {
#line 3601
    fprintf(_coverage_fout, "2276\n");
#line 3601
    fflush(_coverage_fout);
#line 3601
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 3601U,
                  "ImplodeImage");
    }
  }
#line 3565
  fprintf(_coverage_fout, "2337\n");
#line 3565
  fflush(_coverage_fout);
#line 3602
  if ((int const   )image->debug != 0) {
    {
#line 3603
    fprintf(_coverage_fout, "2277\n");
#line 3603
    fflush(_coverage_fout);
#line 3603
    LogMagickEvent(1, "magick/fx.c", "ImplodeImage", 3603UL, "%s",
                   image->filename);
    }
  }
#line 3565
  fprintf(_coverage_fout, "2338\n");
#line 3565
  fflush(_coverage_fout);
#line 3604
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 3604
    fprintf(_coverage_fout, "2278\n");
#line 3604
    fflush(_coverage_fout);
#line 3604
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  3604U, "ImplodeImage");
    }
  }
#line 3565
  fprintf(_coverage_fout, "2339\n");
#line 3565
  fflush(_coverage_fout);
#line 3605
  if (! (exception->signature == 2880220587UL)) {
    {
#line 3605
    fprintf(_coverage_fout, "2279\n");
#line 3605
    fflush(_coverage_fout);
#line 3605
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 3605U,
                  "ImplodeImage");
    }
  }
  {
#line 3606
  fprintf(_coverage_fout, "2280\n");
#line 3606
  fflush(_coverage_fout);
#line 3606
  implode_image = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 3565
  fprintf(_coverage_fout, "2340\n");
#line 3565
  fflush(_coverage_fout);
#line 3607
  if ((unsigned long )implode_image == (unsigned long )((Image *)((void *)0))) {
#line 3607
    fprintf(_coverage_fout, "2281\n");
#line 3607
    fflush(_coverage_fout);
#line 3608
    return ((Image *)((void *)0));
  }
  {
#line 3609
  fprintf(_coverage_fout, "2282\n");
#line 3609
  fflush(_coverage_fout);
#line 3609
  tmp = SetImageStorageClass(implode_image, 1);
  }
#line 3565
  fprintf(_coverage_fout, "2341\n");
#line 3565
  fflush(_coverage_fout);
#line 3609
  if ((int )tmp == 0) {
    {
#line 3611
    fprintf(_coverage_fout, "2283\n");
#line 3611
    fflush(_coverage_fout);
#line 3611
    InheritException(exception,
                     (ExceptionInfo const   *)(& implode_image->exception));
#line 3611
    fprintf(_coverage_fout, "2284\n");
#line 3611
    fflush(_coverage_fout);
#line 3612
    implode_image = DestroyImage(implode_image);
    }
#line 3609
    fprintf(_coverage_fout, "2285\n");
#line 3609
    fflush(_coverage_fout);
#line 3613
    return ((Image *)((void *)0));
  }
#line 3565
  fprintf(_coverage_fout, "2342\n");
#line 3565
  fflush(_coverage_fout);
#line 3615
  if ((int )implode_image->background_color.opacity != 0) {
#line 3615
    fprintf(_coverage_fout, "2286\n");
#line 3615
    fflush(_coverage_fout);
#line 3616
    implode_image->matte = 1;
  }
#line 3565
  fprintf(_coverage_fout, "2343\n");
#line 3565
  fflush(_coverage_fout);
#line 3620
  scale.x = 1.0;
#line 3621
  scale.y = 1.0;
#line 3622
  center.x = 0.5 * (double )image->columns;
#line 3623
  center.y = 0.5 * (double )image->rows;
#line 3624
  radius = center.x;
#line 3565
  fprintf(_coverage_fout, "2344\n");
#line 3565
  fflush(_coverage_fout);
#line 3625
  if (image->columns > image->rows) {
#line 3625
    fprintf(_coverage_fout, "2287\n");
#line 3625
    fflush(_coverage_fout);
#line 3626
    scale.y = (double )image->columns / (double )image->rows;
  } else {
#line 3625
    fprintf(_coverage_fout, "2289\n");
#line 3625
    fflush(_coverage_fout);
#line 3628
    if (image->columns < image->rows) {
#line 3628
      fprintf(_coverage_fout, "2288\n");
#line 3628
      fflush(_coverage_fout);
#line 3630
      scale.x = (double )image->rows / (double )image->columns;
#line 3631
      radius = center.y;
    }
  }
  {
#line 3636
  fprintf(_coverage_fout, "2290\n");
#line 3636
  fflush(_coverage_fout);
#line 3636
  status = 1;
#line 3636
  fprintf(_coverage_fout, "2291\n");
#line 3636
  fflush(_coverage_fout);
#line 3637
  progress = 0L;
#line 3636
  fprintf(_coverage_fout, "2292\n");
#line 3636
  fflush(_coverage_fout);
#line 3638
  GetMagickPixelPacket((Image const   *)implode_image, & zero);
#line 3636
  fprintf(_coverage_fout, "2293\n");
#line 3636
  fflush(_coverage_fout);
#line 3639
  resample_filter = AcquireResampleFilterThreadSet(image, 1, exception);
#line 3636
  fprintf(_coverage_fout, "2294\n");
#line 3636
  fflush(_coverage_fout);
#line 3640
  image_view = AcquireCacheView(image);
#line 3636
  fprintf(_coverage_fout, "2295\n");
#line 3636
  fflush(_coverage_fout);
#line 3641
  implode_view = AcquireCacheView((Image const   *)implode_image);
#line 3636
  fprintf(_coverage_fout, "2296\n");
#line 3636
  fflush(_coverage_fout);
#line 3645
  y = 0L;
  }
#line 3565
  fprintf(_coverage_fout, "2345\n");
#line 3565
  fflush(_coverage_fout);
#line 3645
  while (1) {
#line 3645
    fprintf(_coverage_fout, "2324\n");
#line 3645
    fflush(_coverage_fout);
#line 3645
    if (! (y < (long )image->rows)) {
#line 3645
      break;
    }
#line 3645
    fprintf(_coverage_fout, "2325\n");
#line 3645
    fflush(_coverage_fout);
#line 3666
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 3668
    fprintf(_coverage_fout, "2297\n");
#line 3668
    fflush(_coverage_fout);
#line 3668
    tmp___0 = GetCacheViewAuthenticPixels(implode_view, 0L, y,
                                          implode_image->columns, 1UL, exception);
#line 3668
    fprintf(_coverage_fout, "2298\n");
#line 3668
    fflush(_coverage_fout);
#line 3668
    q = (PixelPacket */* __restrict  */)tmp___0;
    }
#line 3645
    fprintf(_coverage_fout, "2326\n");
#line 3645
    fflush(_coverage_fout);
#line 3670
    if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 3670
      fprintf(_coverage_fout, "2299\n");
#line 3670
      fflush(_coverage_fout);
#line 3672
      status = 0;
      goto __Cont;
    }
    {
#line 3675
    fprintf(_coverage_fout, "2300\n");
#line 3675
    fflush(_coverage_fout);
#line 3675
    tmp___1 = GetCacheViewAuthenticIndexQueue(implode_view);
#line 3675
    fprintf(_coverage_fout, "2301\n");
#line 3675
    fflush(_coverage_fout);
#line 3675
    implode_indexes = (IndexPacket */* __restrict  */)tmp___1;
#line 3675
    fprintf(_coverage_fout, "2302\n");
#line 3675
    fflush(_coverage_fout);
#line 3676
    delta.y = scale.y * ((double )y - center.y);
#line 3675
    fprintf(_coverage_fout, "2303\n");
#line 3675
    fflush(_coverage_fout);
#line 3677
    pixel = zero;
#line 3675
    fprintf(_coverage_fout, "2304\n");
#line 3675
    fflush(_coverage_fout);
#line 3678
    id = GetPixelCacheThreadId();
#line 3675
    fprintf(_coverage_fout, "2305\n");
#line 3675
    fflush(_coverage_fout);
#line 3679
    x = 0L;
    }
#line 3645
    fprintf(_coverage_fout, "2327\n");
#line 3645
    fflush(_coverage_fout);
#line 3679
    while (1) {
#line 3679
      fprintf(_coverage_fout, "2313\n");
#line 3679
      fflush(_coverage_fout);
#line 3679
      if (! (x < (long )image->columns)) {
#line 3679
        break;
      }
#line 3679
      fprintf(_coverage_fout, "2314\n");
#line 3679
      fflush(_coverage_fout);
#line 3684
      delta.x = scale.x * ((double )x - center.x);
#line 3685
      distance = delta.x * delta.x + delta.y * delta.y;
#line 3679
      fprintf(_coverage_fout, "2315\n");
#line 3679
      fflush(_coverage_fout);
#line 3686
      if (distance < radius * radius) {
#line 3686
        fprintf(_coverage_fout, "2311\n");
#line 3686
        fflush(_coverage_fout);
#line 3694
        factor = 1.0;
#line 3686
        fprintf(_coverage_fout, "2312\n");
#line 3686
        fflush(_coverage_fout);
#line 3695
        if (distance > 0.0) {
          {
#line 3696
          fprintf(_coverage_fout, "2306\n");
#line 3696
          fflush(_coverage_fout);
#line 3696
          tmp___2 = sqrt(distance);
#line 3696
          fprintf(_coverage_fout, "2307\n");
#line 3696
          fflush(_coverage_fout);
#line 3696
          tmp___3 = sin(((3.14159265358979323846264338327950288419716939937510 * tmp___2) / radius) / (double )2);
#line 3696
          fprintf(_coverage_fout, "2308\n");
#line 3696
          fflush(_coverage_fout);
#line 3696
          factor = pow(tmp___3, - amount);
          }
        }
        {
#line 3698
        fprintf(_coverage_fout, "2309\n");
#line 3698
        fflush(_coverage_fout);
#line 3698
        ResamplePixelColor(*(resample_filter + id),
                           (factor * delta.x) / scale.x + center.x,
                           (factor * delta.y) / scale.y + center.y, & pixel);
#line 3698
        fprintf(_coverage_fout, "2310\n");
#line 3698
        fflush(_coverage_fout);
#line 3701
        SetPixelPacket((Image const   *)implode_image,
                       (MagickPixelPacket const   *)(& pixel), (PixelPacket *)q,
                       (IndexPacket *)(implode_indexes + x));
        }
      }
#line 3679
      fprintf(_coverage_fout, "2316\n");
#line 3679
      fflush(_coverage_fout);
#line 3703
      q ++;
#line 3679
      x ++;
    }
    {
#line 3705
    fprintf(_coverage_fout, "2317\n");
#line 3705
    fflush(_coverage_fout);
#line 3705
    tmp___4 = SyncCacheViewAuthenticPixels(implode_view, exception);
    }
#line 3645
    fprintf(_coverage_fout, "2328\n");
#line 3645
    fflush(_coverage_fout);
#line 3705
    if ((int )tmp___4 == 0) {
#line 3705
      fprintf(_coverage_fout, "2318\n");
#line 3705
      fflush(_coverage_fout);
#line 3706
      status = 0;
    }
#line 3645
    fprintf(_coverage_fout, "2329\n");
#line 3645
    fflush(_coverage_fout);
#line 3707
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 3715
      fprintf(_coverage_fout, "2319\n");
#line 3715
      fflush(_coverage_fout);
#line 3715
      tmp___5 = progress;
#line 3715
      fprintf(_coverage_fout, "2320\n");
#line 3715
      fflush(_coverage_fout);
#line 3715
      progress ++;
#line 3715
      fprintf(_coverage_fout, "2321\n");
#line 3715
      fflush(_coverage_fout);
#line 3715
      proceed = SetImageProgress(image, "Implode/Image", (long long )tmp___5,
                                 (unsigned long long )image->rows);
      }
#line 3707
      fprintf(_coverage_fout, "2323\n");
#line 3707
      fflush(_coverage_fout);
#line 3716
      if ((int )proceed == 0) {
#line 3716
        fprintf(_coverage_fout, "2322\n");
#line 3716
        fflush(_coverage_fout);
#line 3717
        status = 0;
      }
    }
#line 3645
    fprintf(_coverage_fout, "2330\n");
#line 3645
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 3645
    y ++;
  }
  {
#line 3720
  fprintf(_coverage_fout, "2331\n");
#line 3720
  fflush(_coverage_fout);
#line 3720
  implode_view = DestroyCacheView(implode_view);
#line 3720
  fprintf(_coverage_fout, "2332\n");
#line 3720
  fflush(_coverage_fout);
#line 3721
  image_view = DestroyCacheView(image_view);
#line 3720
  fprintf(_coverage_fout, "2333\n");
#line 3720
  fflush(_coverage_fout);
#line 3722
  resample_filter = DestroyResampleFilterThreadSet(resample_filter);
  }
#line 3565
  fprintf(_coverage_fout, "2346\n");
#line 3565
  fflush(_coverage_fout);
#line 3723
  if ((int )status == 0) {
    {
#line 3724
    fprintf(_coverage_fout, "2334\n");
#line 3724
    fflush(_coverage_fout);
#line 3724
    implode_image = DestroyImage(implode_image);
    }
  }
#line 3565
  fprintf(_coverage_fout, "2347\n");
#line 3565
  fflush(_coverage_fout);
#line 3725
  return (implode_image);
}
}
#line 3758 "magick/fx.c"
Image *MorphImages(Image const   *image , unsigned long number_frames ,
                   ExceptionInfo *exception ) 
{ Image *morph_image ;
  Image *morph_images ;
  long y ;
  MagickOffsetType scene ;
  MagickRealType alpha ;
  MagickRealType beta ;
  register Image const   *next ;
  register long i ;
  MagickBooleanType status ;
  MagickBooleanType tmp ;
  Image *tmp___0 ;
  Image *tmp___1 ;
  Image *tmp___2 ;
  ViewInfo *image_view ;
  ViewInfo *morph_view ;
  Image *tmp___3 ;
  Image *tmp___4 ;
  MagickBooleanType tmp___5 ;
  Image *tmp___6 ;
  MagickBooleanType sync___0 ;
  register PixelPacket const   * __restrict  p ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket const   *tmp___7 ;
  PixelPacket *tmp___8 ;
  Image *tmp___9 ;
  MagickBooleanType proceed ;
  unsigned long tmp___10 ;
  Image *tmp___11 ;
  Image *tmp___12 ;
  Image *tmp___13 ;

  {
#line 3758
  fprintf(_coverage_fout, "2449\n");
#line 3758
  fflush(_coverage_fout);
#line 3789
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 3789
    fprintf(_coverage_fout, "2348\n");
#line 3789
    fflush(_coverage_fout);
#line 3789
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 3789U,
                  "MorphImages");
    }
  }
#line 3758
  fprintf(_coverage_fout, "2450\n");
#line 3758
  fflush(_coverage_fout);
#line 3790
  if (! (image->signature == 2880220587UL)) {
    {
#line 3790
    fprintf(_coverage_fout, "2349\n");
#line 3790
    fflush(_coverage_fout);
#line 3790
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 3790U,
                  "MorphImages");
    }
  }
#line 3758
  fprintf(_coverage_fout, "2451\n");
#line 3758
  fflush(_coverage_fout);
#line 3791
  if ((int const   )image->debug != 0) {
    {
#line 3792
    fprintf(_coverage_fout, "2350\n");
#line 3792
    fflush(_coverage_fout);
#line 3792
    LogMagickEvent(1, "magick/fx.c", "MorphImages", 3792UL, "%s",
                   image->filename);
    }
  }
#line 3758
  fprintf(_coverage_fout, "2452\n");
#line 3758
  fflush(_coverage_fout);
#line 3793
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 3793
    fprintf(_coverage_fout, "2351\n");
#line 3793
    fflush(_coverage_fout);
#line 3793
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  3793U, "MorphImages");
    }
  }
#line 3758
  fprintf(_coverage_fout, "2453\n");
#line 3758
  fflush(_coverage_fout);
#line 3794
  if (! (exception->signature == 2880220587UL)) {
    {
#line 3794
    fprintf(_coverage_fout, "2352\n");
#line 3794
    fflush(_coverage_fout);
#line 3794
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 3794U,
                  "MorphImages");
    }
  }
  {
#line 3795
  fprintf(_coverage_fout, "2353\n");
#line 3795
  fflush(_coverage_fout);
#line 3795
  morph_images = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 3758
  fprintf(_coverage_fout, "2454\n");
#line 3758
  fflush(_coverage_fout);
#line 3796
  if ((unsigned long )morph_images == (unsigned long )((Image *)((void *)0))) {
#line 3796
    fprintf(_coverage_fout, "2354\n");
#line 3796
    fflush(_coverage_fout);
#line 3797
    return ((Image *)((void *)0));
  }
  {
#line 3798
  fprintf(_coverage_fout, "2355\n");
#line 3798
  fflush(_coverage_fout);
#line 3798
  tmp___1 = GetNextImageInList(image);
  }
#line 3758
  fprintf(_coverage_fout, "2455\n");
#line 3758
  fflush(_coverage_fout);
#line 3798
  if ((unsigned long )tmp___1 == (unsigned long )((Image *)((void *)0))) {
#line 3798
    fprintf(_coverage_fout, "2369\n");
#line 3798
    fflush(_coverage_fout);
#line 3803
    i = 1L;
#line 3798
    fprintf(_coverage_fout, "2370\n");
#line 3798
    fflush(_coverage_fout);
#line 3803
    while (1) {
#line 3803
      fprintf(_coverage_fout, "2364\n");
#line 3803
      fflush(_coverage_fout);
#line 3803
      if (! (i < (long )number_frames)) {
#line 3803
        break;
      }
      {
#line 3805
      fprintf(_coverage_fout, "2356\n");
#line 3805
      fflush(_coverage_fout);
#line 3805
      morph_image = CloneImage(image, 0UL, 0UL, 1, exception);
      }
#line 3803
      fprintf(_coverage_fout, "2365\n");
#line 3803
      fflush(_coverage_fout);
#line 3806
      if ((unsigned long )morph_image == (unsigned long )((Image *)((void *)0))) {
        {
#line 3808
        fprintf(_coverage_fout, "2357\n");
#line 3808
        fflush(_coverage_fout);
#line 3808
        morph_images = DestroyImageList(morph_images);
        }
#line 3806
        fprintf(_coverage_fout, "2358\n");
#line 3806
        fflush(_coverage_fout);
#line 3809
        return ((Image *)((void *)0));
      }
      {
#line 3811
      fprintf(_coverage_fout, "2359\n");
#line 3811
      fflush(_coverage_fout);
#line 3811
      AppendImageToList(& morph_images, (Image const   *)morph_image);
      }
#line 3803
      fprintf(_coverage_fout, "2366\n");
#line 3803
      fflush(_coverage_fout);
#line 3812
      if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                             MagickOffsetType  ,
                                                                                             MagickSizeType  ,
                                                                                             void * ))((void *)0))) {
        {
#line 3812
        fprintf(_coverage_fout, "2360\n");
#line 3812
        fflush(_coverage_fout);
#line 3812
        tmp = QuantumTick((long long )i, (unsigned long long )number_frames);
        }
#line 3812
        fprintf(_coverage_fout, "2363\n");
#line 3812
        fflush(_coverage_fout);
#line 3812
        if ((int )tmp != 0) {
          {
#line 3815
          fprintf(_coverage_fout, "2361\n");
#line 3815
          fflush(_coverage_fout);
#line 3815
          status = (*(image->progress_monitor))("Morph/Image", (long long )i,
                                                (unsigned long long )number_frames,
                                                (void *)image->client_data);
          }
#line 3812
          fprintf(_coverage_fout, "2362\n");
#line 3812
          fflush(_coverage_fout);
#line 3817
          if ((int )status == 0) {
#line 3818
            break;
          }
        }
      }
#line 3803
      fprintf(_coverage_fout, "2367\n");
#line 3803
      fflush(_coverage_fout);
#line 3803
      i ++;
    }
    {
#line 3821
    fprintf(_coverage_fout, "2368\n");
#line 3821
    fflush(_coverage_fout);
#line 3821
    tmp___0 = GetFirstImageInList((Image const   *)morph_images);
    }
#line 3798
    fprintf(_coverage_fout, "2371\n");
#line 3798
    fflush(_coverage_fout);
#line 3821
    return (tmp___0);
  }
#line 3758
  fprintf(_coverage_fout, "2456\n");
#line 3758
  fflush(_coverage_fout);
#line 3826
  status = 1;
#line 3827
  scene = 0LL;
#line 3828
  next = image;
#line 3758
  fprintf(_coverage_fout, "2457\n");
#line 3758
  fflush(_coverage_fout);
#line 3829
  while (1) {
    {
#line 3829
    fprintf(_coverage_fout, "2372\n");
#line 3829
    fflush(_coverage_fout);
#line 3829
    tmp___11 = GetNextImageInList(next);
    }
#line 3829
    fprintf(_coverage_fout, "2439\n");
#line 3829
    fflush(_coverage_fout);
#line 3829
    if (! ((unsigned long )tmp___11 != (unsigned long )((Image *)((void *)0)))) {
#line 3829
      break;
    }
#line 3829
    fprintf(_coverage_fout, "2440\n");
#line 3829
    fflush(_coverage_fout);
#line 3831
    i = 0L;
#line 3829
    fprintf(_coverage_fout, "2441\n");
#line 3829
    fflush(_coverage_fout);
#line 3831
    while (1) {
#line 3831
      fprintf(_coverage_fout, "2421\n");
#line 3831
      fflush(_coverage_fout);
#line 3831
      if (! (i < (long )number_frames)) {
#line 3831
        break;
      }
      {
#line 3837
      fprintf(_coverage_fout, "2373\n");
#line 3837
      fflush(_coverage_fout);
#line 3837
      beta = ((double )i + 1.0) / ((double )number_frames + 1.0);
#line 3837
      fprintf(_coverage_fout, "2374\n");
#line 3837
      fflush(_coverage_fout);
#line 3838
      alpha = 1.0 - beta;
#line 3837
      fprintf(_coverage_fout, "2375\n");
#line 3837
      fflush(_coverage_fout);
#line 3839
      tmp___3 = GetNextImageInList(next);
#line 3837
      fprintf(_coverage_fout, "2376\n");
#line 3837
      fflush(_coverage_fout);
#line 3839
      tmp___4 = GetNextImageInList(next);
#line 3837
      fprintf(_coverage_fout, "2377\n");
#line 3837
      fflush(_coverage_fout);
#line 3839
      morph_image = ZoomImage(next,
                              (unsigned long )((alpha * (MagickRealType )next->columns + beta * (MagickRealType )tmp___4->columns) + 0.5),
                              (unsigned long )((alpha * (MagickRealType )next->rows + beta * (MagickRealType )tmp___3->rows) + 0.5),
                              exception);
      }
#line 3831
      fprintf(_coverage_fout, "2422\n");
#line 3831
      fflush(_coverage_fout);
#line 3842
      if ((unsigned long )morph_image == (unsigned long )((Image *)((void *)0))) {
        {
#line 3844
        fprintf(_coverage_fout, "2378\n");
#line 3844
        fflush(_coverage_fout);
#line 3844
        morph_images = DestroyImageList(morph_images);
        }
#line 3842
        fprintf(_coverage_fout, "2379\n");
#line 3842
        fflush(_coverage_fout);
#line 3845
        return ((Image *)((void *)0));
      }
      {
#line 3847
      fprintf(_coverage_fout, "2380\n");
#line 3847
      fflush(_coverage_fout);
#line 3847
      tmp___5 = SetImageStorageClass(morph_image, 1);
      }
#line 3831
      fprintf(_coverage_fout, "2423\n");
#line 3831
      fflush(_coverage_fout);
#line 3847
      if ((int )tmp___5 == 0) {
        {
#line 3849
        fprintf(_coverage_fout, "2381\n");
#line 3849
        fflush(_coverage_fout);
#line 3849
        InheritException(exception,
                         (ExceptionInfo const   *)(& morph_image->exception));
#line 3849
        fprintf(_coverage_fout, "2382\n");
#line 3849
        fflush(_coverage_fout);
#line 3850
        morph_image = DestroyImage(morph_image);
        }
#line 3847
        fprintf(_coverage_fout, "2383\n");
#line 3847
        fflush(_coverage_fout);
#line 3851
        return ((Image *)((void *)0));
      }
      {
#line 3853
      fprintf(_coverage_fout, "2384\n");
#line 3853
      fflush(_coverage_fout);
#line 3853
      AppendImageToList(& morph_images, (Image const   *)morph_image);
#line 3853
      fprintf(_coverage_fout, "2385\n");
#line 3853
      fflush(_coverage_fout);
#line 3854
      morph_images = GetLastImageInList((Image const   *)morph_images);
#line 3853
      fprintf(_coverage_fout, "2386\n");
#line 3853
      fflush(_coverage_fout);
#line 3855
      tmp___6 = GetNextImageInList(next);
#line 3853
      fprintf(_coverage_fout, "2387\n");
#line 3853
      fflush(_coverage_fout);
#line 3855
      morph_image = ZoomImage((Image const   *)tmp___6, morph_images->columns,
                              morph_images->rows, exception);
      }
#line 3831
      fprintf(_coverage_fout, "2424\n");
#line 3831
      fflush(_coverage_fout);
#line 3857
      if ((unsigned long )morph_image == (unsigned long )((Image *)((void *)0))) {
        {
#line 3859
        fprintf(_coverage_fout, "2388\n");
#line 3859
        fflush(_coverage_fout);
#line 3859
        morph_images = DestroyImageList(morph_images);
        }
#line 3857
        fprintf(_coverage_fout, "2389\n");
#line 3857
        fflush(_coverage_fout);
#line 3860
        return ((Image *)((void *)0));
      }
      {
#line 3862
      fprintf(_coverage_fout, "2390\n");
#line 3862
      fflush(_coverage_fout);
#line 3862
      image_view = AcquireCacheView((Image const   *)morph_image);
#line 3862
      fprintf(_coverage_fout, "2391\n");
#line 3862
      fflush(_coverage_fout);
#line 3863
      morph_view = AcquireCacheView((Image const   *)morph_images);
#line 3862
      fprintf(_coverage_fout, "2392\n");
#line 3862
      fflush(_coverage_fout);
#line 3867
      y = 0L;
      }
#line 3831
      fprintf(_coverage_fout, "2425\n");
#line 3831
      fflush(_coverage_fout);
#line 3867
      while (1) {
#line 3867
        fprintf(_coverage_fout, "2410\n");
#line 3867
        fflush(_coverage_fout);
#line 3867
        if (! (y < (long )morph_images->rows)) {
#line 3867
          break;
        }
#line 3867
        fprintf(_coverage_fout, "2411\n");
#line 3867
        fflush(_coverage_fout);
#line 3881
        if ((int )status == 0) {
          goto __Cont;
        }
        {
#line 3883
        fprintf(_coverage_fout, "2393\n");
#line 3883
        fflush(_coverage_fout);
#line 3883
        tmp___7 = GetCacheViewVirtualPixels((ViewInfo const   *)image_view, 0L,
                                            y, morph_image->columns, 1UL,
                                            exception);
#line 3883
        fprintf(_coverage_fout, "2394\n");
#line 3883
        fflush(_coverage_fout);
#line 3883
        p = (PixelPacket const   */* __restrict  */)tmp___7;
#line 3883
        fprintf(_coverage_fout, "2395\n");
#line 3883
        fflush(_coverage_fout);
#line 3885
        tmp___8 = GetCacheViewAuthenticPixels(morph_view, 0L, y,
                                              morph_images->columns, 1UL,
                                              exception);
#line 3883
        fprintf(_coverage_fout, "2396\n");
#line 3883
        fflush(_coverage_fout);
#line 3885
        q = (PixelPacket */* __restrict  */)tmp___8;
        }
#line 3867
        fprintf(_coverage_fout, "2412\n");
#line 3867
        fflush(_coverage_fout);
#line 3887
        if ((unsigned long )p == (unsigned long )((PixelPacket const   *)((void *)0))) {
#line 3887
          fprintf(_coverage_fout, "2397\n");
#line 3887
          fflush(_coverage_fout);
#line 3889
          status = 0;
          goto __Cont;
        } else {
#line 3887
          fprintf(_coverage_fout, "2399\n");
#line 3887
          fflush(_coverage_fout);
#line 3887
          if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 3887
            fprintf(_coverage_fout, "2398\n");
#line 3887
            fflush(_coverage_fout);
#line 3889
            status = 0;
            goto __Cont;
          }
        }
#line 3867
        fprintf(_coverage_fout, "2413\n");
#line 3867
        fflush(_coverage_fout);
#line 3892
        x = 0L;
#line 3867
        fprintf(_coverage_fout, "2414\n");
#line 3867
        fflush(_coverage_fout);
#line 3892
        while (1) {
#line 3892
          fprintf(_coverage_fout, "2407\n");
#line 3892
          fflush(_coverage_fout);
#line 3892
          if (! (x < (long )morph_images->columns)) {
#line 3892
            break;
          }
          {
#line 3894
          fprintf(_coverage_fout, "2400\n");
#line 3894
          fflush(_coverage_fout);
#line 3894
          q->red = RoundToQuantum(alpha * (MagickRealType )q->red + beta * (MagickRealType )p->red);
#line 3894
          fprintf(_coverage_fout, "2401\n");
#line 3894
          fflush(_coverage_fout);
#line 3895
          q->green = RoundToQuantum(alpha * (MagickRealType )q->green + beta * (MagickRealType )p->green);
#line 3894
          fprintf(_coverage_fout, "2402\n");
#line 3894
          fflush(_coverage_fout);
#line 3896
          q->blue = RoundToQuantum(alpha * (MagickRealType )q->blue + beta * (MagickRealType )p->blue);
#line 3894
          fprintf(_coverage_fout, "2403\n");
#line 3894
          fflush(_coverage_fout);
#line 3897
          q->opacity = RoundToQuantum(alpha * (MagickRealType )q->opacity + beta * (MagickRealType )p->opacity);
#line 3894
          fprintf(_coverage_fout, "2404\n");
#line 3894
          fflush(_coverage_fout);
#line 3898
          p ++;
#line 3894
          fprintf(_coverage_fout, "2405\n");
#line 3894
          fflush(_coverage_fout);
#line 3899
          q ++;
#line 3894
          fprintf(_coverage_fout, "2406\n");
#line 3894
          fflush(_coverage_fout);
#line 3892
          x ++;
          }
        }
        {
#line 3901
        fprintf(_coverage_fout, "2408\n");
#line 3901
        fflush(_coverage_fout);
#line 3901
        sync___0 = SyncCacheViewAuthenticPixels(morph_view, exception);
        }
#line 3867
        fprintf(_coverage_fout, "2415\n");
#line 3867
        fflush(_coverage_fout);
#line 3902
        if ((int )sync___0 == 0) {
#line 3902
          fprintf(_coverage_fout, "2409\n");
#line 3902
          fflush(_coverage_fout);
#line 3903
          status = 0;
        }
#line 3867
        fprintf(_coverage_fout, "2416\n");
#line 3867
        fflush(_coverage_fout);
        __Cont: /* CIL Label */ 
#line 3867
        y ++;
      }
      {
#line 3905
      fprintf(_coverage_fout, "2417\n");
#line 3905
      fflush(_coverage_fout);
#line 3905
      morph_view = DestroyCacheView(morph_view);
#line 3905
      fprintf(_coverage_fout, "2418\n");
#line 3905
      fflush(_coverage_fout);
#line 3906
      image_view = DestroyCacheView(image_view);
#line 3905
      fprintf(_coverage_fout, "2419\n");
#line 3905
      fflush(_coverage_fout);
#line 3907
      morph_image = DestroyImage(morph_image);
#line 3905
      fprintf(_coverage_fout, "2420\n");
#line 3905
      fflush(_coverage_fout);
#line 3831
      i ++;
      }
    }
#line 3829
    fprintf(_coverage_fout, "2442\n");
#line 3829
    fflush(_coverage_fout);
#line 3909
    if (i < (long )number_frames) {
#line 3910
      break;
    }
    {
#line 3914
    fprintf(_coverage_fout, "2426\n");
#line 3914
    fflush(_coverage_fout);
#line 3914
    tmp___9 = GetNextImageInList(next);
#line 3914
    fprintf(_coverage_fout, "2427\n");
#line 3914
    fflush(_coverage_fout);
#line 3914
    morph_image = CloneImage((Image const   *)tmp___9, 0UL, 0UL, 1, exception);
    }
#line 3829
    fprintf(_coverage_fout, "2443\n");
#line 3829
    fflush(_coverage_fout);
#line 3915
    if ((unsigned long )morph_image == (unsigned long )((Image *)((void *)0))) {
      {
#line 3917
      fprintf(_coverage_fout, "2428\n");
#line 3917
      fflush(_coverage_fout);
#line 3917
      morph_images = DestroyImageList(morph_images);
      }
#line 3915
      fprintf(_coverage_fout, "2429\n");
#line 3915
      fflush(_coverage_fout);
#line 3918
      return ((Image *)((void *)0));
    }
    {
#line 3920
    fprintf(_coverage_fout, "2430\n");
#line 3920
    fflush(_coverage_fout);
#line 3920
    AppendImageToList(& morph_images, (Image const   *)morph_image);
#line 3920
    fprintf(_coverage_fout, "2431\n");
#line 3920
    fflush(_coverage_fout);
#line 3921
    morph_images = GetLastImageInList((Image const   *)morph_images);
    }
#line 3829
    fprintf(_coverage_fout, "2444\n");
#line 3829
    fflush(_coverage_fout);
#line 3922
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 3930
      fprintf(_coverage_fout, "2432\n");
#line 3930
      fflush(_coverage_fout);
#line 3930
      tmp___10 = GetImageListLength(image);
#line 3930
      fprintf(_coverage_fout, "2433\n");
#line 3930
      fflush(_coverage_fout);
#line 3930
      proceed = SetImageProgress(image, "Morph/Image", scene,
                                 (unsigned long long )tmp___10);
      }
#line 3922
      fprintf(_coverage_fout, "2435\n");
#line 3922
      fflush(_coverage_fout);
#line 3932
      if ((int )proceed == 0) {
#line 3932
        fprintf(_coverage_fout, "2434\n");
#line 3932
        fflush(_coverage_fout);
#line 3933
        status = 0;
      }
    }
    {
#line 3935
    fprintf(_coverage_fout, "2436\n");
#line 3935
    fflush(_coverage_fout);
#line 3935
    scene ++;
#line 3935
    fprintf(_coverage_fout, "2437\n");
#line 3935
    fflush(_coverage_fout);
#line 3829
    tmp___2 = GetNextImageInList(next);
#line 3935
    fprintf(_coverage_fout, "2438\n");
#line 3935
    fflush(_coverage_fout);
#line 3829
    next = (Image const   *)tmp___2;
    }
  }
  {
#line 3937
  fprintf(_coverage_fout, "2445\n");
#line 3937
  fflush(_coverage_fout);
#line 3937
  tmp___12 = GetNextImageInList(next);
  }
#line 3758
  fprintf(_coverage_fout, "2458\n");
#line 3758
  fflush(_coverage_fout);
#line 3937
  if ((unsigned long )tmp___12 != (unsigned long )((Image *)((void *)0))) {
    {
#line 3939
    fprintf(_coverage_fout, "2446\n");
#line 3939
    fflush(_coverage_fout);
#line 3939
    morph_images = DestroyImageList(morph_images);
    }
#line 3937
    fprintf(_coverage_fout, "2447\n");
#line 3937
    fflush(_coverage_fout);
#line 3940
    return ((Image *)((void *)0));
  }
  {
#line 3942
  fprintf(_coverage_fout, "2448\n");
#line 3942
  fflush(_coverage_fout);
#line 3942
  tmp___13 = GetFirstImageInList((Image const   *)morph_images);
  }
#line 3758
  fprintf(_coverage_fout, "2459\n");
#line 3758
  fflush(_coverage_fout);
#line 3942
  return (tmp___13);
}
}
#line 3974 "magick/fx.c"
Image *PolaroidImage(Image const   *image , DrawInfo const   *draw_info ,
                     double angle , ExceptionInfo *exception ) 
{ char const   *value ;
  long quantum ;
  Image *bend_image ;
  Image *caption_image ;
  Image *flop_image ;
  Image *picture_image ;
  Image *polaroid_image ;
  Image *rotate_image ;
  Image *trim_image ;
  unsigned long height ;
  double tmp ;
  double tmp___0 ;
  char *caption ;
  char geometry[4096] ;
  DrawInfo *annotate_info ;
  long count ;
  MagickBooleanType status ;
  TypeMetric metrics ;
  char *tmp___1 ;

  {
#line 3974
  fprintf(_coverage_fout, "2535\n");
#line 3974
  fflush(_coverage_fout);
#line 3998
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 3998
    fprintf(_coverage_fout, "2460\n");
#line 3998
    fflush(_coverage_fout);
#line 3998
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 3998U,
                  "PolaroidImage");
    }
  }
#line 3974
  fprintf(_coverage_fout, "2536\n");
#line 3974
  fflush(_coverage_fout);
#line 3999
  if (! (image->signature == 2880220587UL)) {
    {
#line 3999
    fprintf(_coverage_fout, "2461\n");
#line 3999
    fflush(_coverage_fout);
#line 3999
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 3999U,
                  "PolaroidImage");
    }
  }
#line 3974
  fprintf(_coverage_fout, "2537\n");
#line 3974
  fflush(_coverage_fout);
#line 4000
  if ((int const   )image->debug != 0) {
    {
#line 4001
    fprintf(_coverage_fout, "2462\n");
#line 4001
    fflush(_coverage_fout);
#line 4001
    LogMagickEvent(1, "magick/fx.c", "PolaroidImage", 4001UL, "%s",
                   image->filename);
    }
  }
#line 3974
  fprintf(_coverage_fout, "2538\n");
#line 3974
  fflush(_coverage_fout);
#line 4002
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 4002
    fprintf(_coverage_fout, "2463\n");
#line 4002
    fflush(_coverage_fout);
#line 4002
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  4002U, "PolaroidImage");
    }
  }
#line 3974
  fprintf(_coverage_fout, "2539\n");
#line 3974
  fflush(_coverage_fout);
#line 4003
  if (! (exception->signature == 2880220587UL)) {
    {
#line 4003
    fprintf(_coverage_fout, "2464\n");
#line 4003
    fflush(_coverage_fout);
#line 4003
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 4003U,
                  "PolaroidImage");
    }
  }
  {
#line 4004
  fprintf(_coverage_fout, "2465\n");
#line 4004
  fflush(_coverage_fout);
#line 4004
  tmp = MagickMax((double )image->columns, (double )image->rows);
#line 4004
  fprintf(_coverage_fout, "2466\n");
#line 4004
  fflush(_coverage_fout);
#line 4004
  tmp___0 = MagickMax(tmp / 25.0, 10.0);
#line 4004
  fprintf(_coverage_fout, "2467\n");
#line 4004
  fflush(_coverage_fout);
#line 4004
  quantum = (long )tmp___0;
#line 4004
  fprintf(_coverage_fout, "2468\n");
#line 4004
  fflush(_coverage_fout);
#line 4006
  height = (unsigned long )(image->rows + (unsigned long const   )(2L * quantum));
#line 4004
  fprintf(_coverage_fout, "2469\n");
#line 4004
  fflush(_coverage_fout);
#line 4007
  caption_image = (Image *)((void *)0);
#line 4004
  fprintf(_coverage_fout, "2470\n");
#line 4004
  fflush(_coverage_fout);
#line 4008
  value = GetImageProperty(image, "Caption");
  }
#line 3974
  fprintf(_coverage_fout, "2540\n");
#line 3974
  fflush(_coverage_fout);
#line 4009
  if ((unsigned long )value != (unsigned long )((char const   *)((void *)0))) {
    {
#line 4030
    fprintf(_coverage_fout, "2471\n");
#line 4030
    fflush(_coverage_fout);
#line 4030
    caption_image = CloneImage(image, (unsigned long )image->columns, 1UL, 1,
                               exception);
    }
#line 4009
    fprintf(_coverage_fout, "2490\n");
#line 4009
    fflush(_coverage_fout);
#line 4031
    if ((unsigned long )caption_image == (unsigned long )((Image *)((void *)0))) {
#line 4031
      fprintf(_coverage_fout, "2472\n");
#line 4031
      fflush(_coverage_fout);
#line 4032
      return ((Image *)((void *)0));
    }
    {
#line 4033
    fprintf(_coverage_fout, "2473\n");
#line 4033
    fflush(_coverage_fout);
#line 4033
    annotate_info = CloneDrawInfo((ImageInfo const   *)((void *)0), draw_info);
#line 4033
    fprintf(_coverage_fout, "2474\n");
#line 4033
    fflush(_coverage_fout);
#line 4034
    caption = InterpretImageProperties((ImageInfo const   *)((ImageInfo *)((void *)0)),
                                       (Image *)image, value);
#line 4033
    fprintf(_coverage_fout, "2475\n");
#line 4033
    fflush(_coverage_fout);
#line 4036
    CloneString(& annotate_info->text, (char const   *)caption);
#line 4033
    fprintf(_coverage_fout, "2476\n");
#line 4033
    fflush(_coverage_fout);
#line 4037
    count = FormatMagickCaption(caption_image, annotate_info, caption, & metrics);
#line 4033
    fprintf(_coverage_fout, "2477\n");
#line 4033
    fflush(_coverage_fout);
#line 4038
    status = SetImageExtent(caption_image, (unsigned long )image->columns,
                            (unsigned long )((double )(count + 1L) * (metrics.ascent - metrics.descent) + 0.5));
    }
#line 4009
    fprintf(_coverage_fout, "2491\n");
#line 4009
    fflush(_coverage_fout);
#line 4040
    if ((int )status == 0) {
      {
#line 4041
      fprintf(_coverage_fout, "2478\n");
#line 4041
      fflush(_coverage_fout);
#line 4041
      caption_image = DestroyImage(caption_image);
      }
    } else {
      {
#line 4044
      fprintf(_coverage_fout, "2479\n");
#line 4044
      fflush(_coverage_fout);
#line 4044
      caption_image->background_color = (struct _PixelPacket )image->border_color;
#line 4044
      fprintf(_coverage_fout, "2480\n");
#line 4044
      fflush(_coverage_fout);
#line 4045
      SetImageBackgroundColor(caption_image);
#line 4044
      fprintf(_coverage_fout, "2481\n");
#line 4044
      fflush(_coverage_fout);
#line 4046
      CloneString(& annotate_info->text, (char const   *)caption);
#line 4044
      fprintf(_coverage_fout, "2482\n");
#line 4044
      fflush(_coverage_fout);
#line 4047
      FormatMagickString(geometry, 4096UL, "+0+%g", metrics.ascent);
      }
#line 4040
      fprintf(_coverage_fout, "2487\n");
#line 4040
      fflush(_coverage_fout);
#line 4049
      if ((int )annotate_info->gravity == 0) {
        {
#line 4050
        fprintf(_coverage_fout, "2483\n");
#line 4050
        fflush(_coverage_fout);
#line 4050
        tmp___1 = AcquireString((char const   *)(geometry));
#line 4050
        fprintf(_coverage_fout, "2484\n");
#line 4050
        fflush(_coverage_fout);
#line 4050
        CloneString(& annotate_info->geometry, (char const   *)tmp___1);
        }
      }
      {
#line 4052
      fprintf(_coverage_fout, "2485\n");
#line 4052
      fflush(_coverage_fout);
#line 4052
      AnnotateImage(caption_image, (DrawInfo const   *)annotate_info);
#line 4052
      fprintf(_coverage_fout, "2486\n");
#line 4052
      fflush(_coverage_fout);
#line 4053
      height += caption_image->rows;
      }
    }
    {
#line 4055
    fprintf(_coverage_fout, "2488\n");
#line 4055
    fflush(_coverage_fout);
#line 4055
    annotate_info = DestroyDrawInfo(annotate_info);
#line 4055
    fprintf(_coverage_fout, "2489\n");
#line 4055
    fflush(_coverage_fout);
#line 4056
    caption = DestroyString(caption);
    }
  }
  {
#line 4058
  fprintf(_coverage_fout, "2492\n");
#line 4058
  fflush(_coverage_fout);
#line 4058
  picture_image = CloneImage(image,
                             (unsigned long )(image->columns + (unsigned long const   )(2L * quantum)),
                             height, 1, exception);
  }
#line 3974
  fprintf(_coverage_fout, "2541\n");
#line 3974
  fflush(_coverage_fout);
#line 4060
  if ((unsigned long )picture_image == (unsigned long )((Image *)((void *)0))) {
#line 4060
    fprintf(_coverage_fout, "2494\n");
#line 4060
    fflush(_coverage_fout);
#line 4062
    if ((unsigned long )caption_image != (unsigned long )((Image *)((void *)0))) {
      {
#line 4063
      fprintf(_coverage_fout, "2493\n");
#line 4063
      fflush(_coverage_fout);
#line 4063
      caption_image = DestroyImage(caption_image);
      }
    }
#line 4060
    fprintf(_coverage_fout, "2495\n");
#line 4060
    fflush(_coverage_fout);
#line 4064
    return ((Image *)((void *)0));
  }
  {
#line 4066
  fprintf(_coverage_fout, "2496\n");
#line 4066
  fflush(_coverage_fout);
#line 4066
  picture_image->background_color = (struct _PixelPacket )image->border_color;
#line 4066
  fprintf(_coverage_fout, "2497\n");
#line 4066
  fflush(_coverage_fout);
#line 4067
  SetImageBackgroundColor(picture_image);
#line 4066
  fprintf(_coverage_fout, "2498\n");
#line 4066
  fflush(_coverage_fout);
#line 4068
  CompositeImage(picture_image, 40, image, quantum, quantum);
  }
#line 3974
  fprintf(_coverage_fout, "2542\n");
#line 3974
  fflush(_coverage_fout);
#line 4069
  if ((unsigned long )caption_image != (unsigned long )((Image *)((void *)0))) {
    {
#line 4071
    fprintf(_coverage_fout, "2499\n");
#line 4071
    fflush(_coverage_fout);
#line 4071
    CompositeImage(picture_image, 40, (Image const   *)caption_image, quantum,
                   (long )(image->rows + (unsigned long const   )((3L * quantum) / 2L)));
#line 4071
    fprintf(_coverage_fout, "2500\n");
#line 4071
    fflush(_coverage_fout);
#line 4073
    caption_image = DestroyImage(caption_image);
    }
  }
  {
#line 4075
  fprintf(_coverage_fout, "2501\n");
#line 4075
  fflush(_coverage_fout);
#line 4075
  QueryColorDatabase("none", & picture_image->background_color, exception);
#line 4075
  fprintf(_coverage_fout, "2502\n");
#line 4075
  fflush(_coverage_fout);
#line 4076
  SetImageAlphaChannel(picture_image, 6);
#line 4075
  fprintf(_coverage_fout, "2503\n");
#line 4075
  fflush(_coverage_fout);
#line 4077
  rotate_image = RotateImage((Image const   *)picture_image, 90.0, exception);
#line 4075
  fprintf(_coverage_fout, "2504\n");
#line 4075
  fflush(_coverage_fout);
#line 4078
  picture_image = DestroyImage(picture_image);
  }
#line 3974
  fprintf(_coverage_fout, "2543\n");
#line 3974
  fflush(_coverage_fout);
#line 4079
  if ((unsigned long )rotate_image == (unsigned long )((Image *)((void *)0))) {
#line 4079
    fprintf(_coverage_fout, "2505\n");
#line 4079
    fflush(_coverage_fout);
#line 4080
    return ((Image *)((void *)0));
  }
  {
#line 4081
  fprintf(_coverage_fout, "2506\n");
#line 4081
  fflush(_coverage_fout);
#line 4081
  picture_image = rotate_image;
#line 4081
  fprintf(_coverage_fout, "2507\n");
#line 4081
  fflush(_coverage_fout);
#line 4082
  bend_image = WaveImage((Image const   *)picture_image,
                         0.01 * (double )picture_image->rows,
                         2.0 * (double )picture_image->columns, exception);
#line 4081
  fprintf(_coverage_fout, "2508\n");
#line 4081
  fflush(_coverage_fout);
#line 4084
  picture_image = DestroyImage(picture_image);
  }
#line 3974
  fprintf(_coverage_fout, "2544\n");
#line 3974
  fflush(_coverage_fout);
#line 4085
  if ((unsigned long )bend_image == (unsigned long )((Image *)((void *)0))) {
#line 4085
    fprintf(_coverage_fout, "2509\n");
#line 4085
    fflush(_coverage_fout);
#line 4086
    return ((Image *)((void *)0));
  }
  {
#line 4087
  fprintf(_coverage_fout, "2510\n");
#line 4087
  fflush(_coverage_fout);
#line 4087
  InheritException(& bend_image->exception, (ExceptionInfo const   *)exception);
#line 4087
  fprintf(_coverage_fout, "2511\n");
#line 4087
  fflush(_coverage_fout);
#line 4088
  picture_image = bend_image;
#line 4087
  fprintf(_coverage_fout, "2512\n");
#line 4087
  fflush(_coverage_fout);
#line 4089
  rotate_image = RotateImage((Image const   *)picture_image, - 90.0, exception);
#line 4087
  fprintf(_coverage_fout, "2513\n");
#line 4087
  fflush(_coverage_fout);
#line 4090
  picture_image = DestroyImage(picture_image);
  }
#line 3974
  fprintf(_coverage_fout, "2545\n");
#line 3974
  fflush(_coverage_fout);
#line 4091
  if ((unsigned long )rotate_image == (unsigned long )((Image *)((void *)0))) {
#line 4091
    fprintf(_coverage_fout, "2514\n");
#line 4091
    fflush(_coverage_fout);
#line 4092
    return ((Image *)((void *)0));
  }
  {
#line 4093
  fprintf(_coverage_fout, "2515\n");
#line 4093
  fflush(_coverage_fout);
#line 4093
  picture_image = rotate_image;
#line 4093
  fprintf(_coverage_fout, "2516\n");
#line 4093
  fflush(_coverage_fout);
#line 4094
  picture_image->background_color = (struct _PixelPacket )image->background_color;
#line 4093
  fprintf(_coverage_fout, "2517\n");
#line 4093
  fflush(_coverage_fout);
#line 4095
  polaroid_image = ShadowImage((Image const   *)picture_image, 80.0, 2.0,
                               quantum / 3L, quantum / 3L, exception);
  }
#line 3974
  fprintf(_coverage_fout, "2546\n");
#line 3974
  fflush(_coverage_fout);
#line 4097
  if ((unsigned long )polaroid_image == (unsigned long )((Image *)((void *)0))) {
    {
#line 4099
    fprintf(_coverage_fout, "2518\n");
#line 4099
    fflush(_coverage_fout);
#line 4099
    picture_image = DestroyImage(picture_image);
    }
#line 4097
    fprintf(_coverage_fout, "2519\n");
#line 4097
    fflush(_coverage_fout);
#line 4100
    return (picture_image);
  }
  {
#line 4102
  fprintf(_coverage_fout, "2520\n");
#line 4102
  fflush(_coverage_fout);
#line 4102
  flop_image = FlopImage((Image const   *)polaroid_image, exception);
#line 4102
  fprintf(_coverage_fout, "2521\n");
#line 4102
  fflush(_coverage_fout);
#line 4103
  polaroid_image = DestroyImage(polaroid_image);
  }
#line 3974
  fprintf(_coverage_fout, "2547\n");
#line 3974
  fflush(_coverage_fout);
#line 4104
  if ((unsigned long )flop_image == (unsigned long )((Image *)((void *)0))) {
    {
#line 4106
    fprintf(_coverage_fout, "2522\n");
#line 4106
    fflush(_coverage_fout);
#line 4106
    picture_image = DestroyImage(picture_image);
    }
#line 4104
    fprintf(_coverage_fout, "2523\n");
#line 4104
    fflush(_coverage_fout);
#line 4107
    return (picture_image);
  }
  {
#line 4109
  fprintf(_coverage_fout, "2524\n");
#line 4109
  fflush(_coverage_fout);
#line 4109
  polaroid_image = flop_image;
#line 4109
  fprintf(_coverage_fout, "2525\n");
#line 4109
  fflush(_coverage_fout);
#line 4110
  CompositeImage(polaroid_image, 40, (Image const   *)picture_image,
                 (long )((- 0.01 * (double )picture_image->columns) / 2.0), 0L);
#line 4109
  fprintf(_coverage_fout, "2526\n");
#line 4109
  fflush(_coverage_fout);
#line 4112
  picture_image = DestroyImage(picture_image);
#line 4109
  fprintf(_coverage_fout, "2527\n");
#line 4109
  fflush(_coverage_fout);
#line 4113
  QueryColorDatabase("none", & polaroid_image->background_color, exception);
#line 4109
  fprintf(_coverage_fout, "2528\n");
#line 4109
  fflush(_coverage_fout);
#line 4114
  rotate_image = RotateImage((Image const   *)polaroid_image, angle, exception);
#line 4109
  fprintf(_coverage_fout, "2529\n");
#line 4109
  fflush(_coverage_fout);
#line 4115
  polaroid_image = DestroyImage(polaroid_image);
  }
#line 3974
  fprintf(_coverage_fout, "2548\n");
#line 3974
  fflush(_coverage_fout);
#line 4116
  if ((unsigned long )rotate_image == (unsigned long )((Image *)((void *)0))) {
#line 4116
    fprintf(_coverage_fout, "2530\n");
#line 4116
    fflush(_coverage_fout);
#line 4117
    return ((Image *)((void *)0));
  }
  {
#line 4118
  fprintf(_coverage_fout, "2531\n");
#line 4118
  fflush(_coverage_fout);
#line 4118
  polaroid_image = rotate_image;
#line 4118
  fprintf(_coverage_fout, "2532\n");
#line 4118
  fflush(_coverage_fout);
#line 4119
  trim_image = TrimImage((Image const   *)polaroid_image, exception);
#line 4118
  fprintf(_coverage_fout, "2533\n");
#line 4118
  fflush(_coverage_fout);
#line 4120
  polaroid_image = DestroyImage(polaroid_image);
  }
#line 3974
  fprintf(_coverage_fout, "2549\n");
#line 3974
  fflush(_coverage_fout);
#line 4121
  if ((unsigned long )trim_image == (unsigned long )((Image *)((void *)0))) {
#line 4121
    fprintf(_coverage_fout, "2534\n");
#line 4121
    fflush(_coverage_fout);
#line 4122
    return ((Image *)((void *)0));
  }
#line 3974
  fprintf(_coverage_fout, "2550\n");
#line 3974
  fflush(_coverage_fout);
#line 4123
  polaroid_image = trim_image;
#line 3974
  fprintf(_coverage_fout, "2551\n");
#line 3974
  fflush(_coverage_fout);
#line 4124
  return (polaroid_image);
}
}
#line 4159 "magick/fx.c"
Image *RecolorImage(Image const   *image , unsigned long order ,
                    double const   *color_matrix , ExceptionInfo *exception ) 
{ Image *recolor_image ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  MagickPixelPacket zero ;
  register double const   *k ;
  ViewInfo *image_view ;
  ViewInfo *recolor_view ;
  MagickBooleanType tmp ;
  char format[4096] ;
  char *message ;
  long u ;
  long v ;
  double const   *tmp___0 ;
  MagickPixelPacket pixel ;
  MagickPixelPacket recolor_pixel ;
  register IndexPacket const   * __restrict  indexes ;
  register PixelPacket const   * __restrict  p ;
  register long x ;
  register IndexPacket * __restrict  recolor_indexes ;
  register PixelPacket * __restrict  q ;
  PixelPacket const   *tmp___1 ;
  PixelPacket *tmp___2 ;
  IndexPacket *tmp___3 ;
  IndexPacket *tmp___4 ;
  MagickBooleanType tmp___5 ;
  MagickBooleanType proceed ;
  long tmp___6 ;

  {
#line 4159
  fprintf(_coverage_fout, "2640\n");
#line 4159
  fflush(_coverage_fout);
#line 4187
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 4187
    fprintf(_coverage_fout, "2552\n");
#line 4187
    fflush(_coverage_fout);
#line 4187
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 4187U,
                  "RecolorImage");
    }
  }
#line 4159
  fprintf(_coverage_fout, "2641\n");
#line 4159
  fflush(_coverage_fout);
#line 4188
  if (! (image->signature == 2880220587UL)) {
    {
#line 4188
    fprintf(_coverage_fout, "2553\n");
#line 4188
    fflush(_coverage_fout);
#line 4188
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 4188U,
                  "RecolorImage");
    }
  }
#line 4159
  fprintf(_coverage_fout, "2642\n");
#line 4159
  fflush(_coverage_fout);
#line 4189
  if ((int const   )image->debug != 0) {
    {
#line 4190
    fprintf(_coverage_fout, "2554\n");
#line 4190
    fflush(_coverage_fout);
#line 4190
    LogMagickEvent(1, "magick/fx.c", "RecolorImage", 4190UL, "%s",
                   image->filename);
    }
  }
#line 4159
  fprintf(_coverage_fout, "2643\n");
#line 4159
  fflush(_coverage_fout);
#line 4191
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 4191
    fprintf(_coverage_fout, "2555\n");
#line 4191
    fflush(_coverage_fout);
#line 4191
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  4191U, "RecolorImage");
    }
  }
#line 4159
  fprintf(_coverage_fout, "2644\n");
#line 4159
  fflush(_coverage_fout);
#line 4192
  if (! (exception->signature == 2880220587UL)) {
    {
#line 4192
    fprintf(_coverage_fout, "2556\n");
#line 4192
    fflush(_coverage_fout);
#line 4192
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 4192U,
                  "RecolorImage");
    }
  }
  {
#line 4193
  fprintf(_coverage_fout, "2557\n");
#line 4193
  fflush(_coverage_fout);
#line 4193
  recolor_image = CloneImage(image, (unsigned long )image->columns,
                             (unsigned long )image->rows, 1, exception);
  }
#line 4159
  fprintf(_coverage_fout, "2645\n");
#line 4159
  fflush(_coverage_fout);
#line 4195
  if ((unsigned long )recolor_image == (unsigned long )((Image *)((void *)0))) {
#line 4195
    fprintf(_coverage_fout, "2558\n");
#line 4195
    fflush(_coverage_fout);
#line 4196
    return ((Image *)((void *)0));
  }
  {
#line 4197
  fprintf(_coverage_fout, "2559\n");
#line 4197
  fflush(_coverage_fout);
#line 4197
  tmp = SetImageStorageClass(recolor_image, 1);
  }
#line 4159
  fprintf(_coverage_fout, "2646\n");
#line 4159
  fflush(_coverage_fout);
#line 4197
  if ((int )tmp == 0) {
    {
#line 4199
    fprintf(_coverage_fout, "2560\n");
#line 4199
    fflush(_coverage_fout);
#line 4199
    InheritException(exception,
                     (ExceptionInfo const   *)(& recolor_image->exception));
#line 4199
    fprintf(_coverage_fout, "2561\n");
#line 4199
    fflush(_coverage_fout);
#line 4200
    recolor_image = DestroyImage(recolor_image);
    }
#line 4197
    fprintf(_coverage_fout, "2562\n");
#line 4197
    fflush(_coverage_fout);
#line 4201
    return ((Image *)((void *)0));
  }
#line 4159
  fprintf(_coverage_fout, "2647\n");
#line 4159
  fflush(_coverage_fout);
#line 4203
  if ((int const   )image->debug != 0) {
    {
#line 4213
    fprintf(_coverage_fout, "2563\n");
#line 4213
    fflush(_coverage_fout);
#line 4213
    LogMagickEvent(8192, "magick/fx.c", "RecolorImage", 4213UL,
                   "  Recolor image with %ldx%ld color matrix:", order, order);
#line 4213
    fprintf(_coverage_fout, "2564\n");
#line 4213
    fflush(_coverage_fout);
#line 4215
    message = AcquireString("");
#line 4213
    fprintf(_coverage_fout, "2565\n");
#line 4213
    fflush(_coverage_fout);
#line 4216
    k = color_matrix;
#line 4213
    fprintf(_coverage_fout, "2566\n");
#line 4213
    fflush(_coverage_fout);
#line 4217
    v = 0L;
    }
#line 4203
    fprintf(_coverage_fout, "2582\n");
#line 4203
    fflush(_coverage_fout);
#line 4217
    while (1) {
#line 4217
      fprintf(_coverage_fout, "2579\n");
#line 4217
      fflush(_coverage_fout);
#line 4217
      if (! (v < (long )order)) {
#line 4217
        break;
      }
      {
#line 4219
      fprintf(_coverage_fout, "2567\n");
#line 4219
      fflush(_coverage_fout);
#line 4219
      *message = (char )'\000';
#line 4219
      fprintf(_coverage_fout, "2568\n");
#line 4219
      fflush(_coverage_fout);
#line 4220
      FormatMagickString(format, 4096UL, "%ld: ", v);
#line 4219
      fprintf(_coverage_fout, "2569\n");
#line 4219
      fflush(_coverage_fout);
#line 4221
      ConcatenateString(& message, (char const   *)(format));
#line 4219
      fprintf(_coverage_fout, "2570\n");
#line 4219
      fflush(_coverage_fout);
#line 4222
      u = 0L;
      }
#line 4217
      fprintf(_coverage_fout, "2580\n");
#line 4217
      fflush(_coverage_fout);
#line 4222
      while (1) {
#line 4222
        fprintf(_coverage_fout, "2576\n");
#line 4222
        fflush(_coverage_fout);
#line 4222
        if (! (u < (long )order)) {
#line 4222
          break;
        }
        {
#line 4224
        fprintf(_coverage_fout, "2571\n");
#line 4224
        fflush(_coverage_fout);
#line 4224
        tmp___0 = k;
#line 4224
        fprintf(_coverage_fout, "2572\n");
#line 4224
        fflush(_coverage_fout);
#line 4224
        k ++;
#line 4224
        fprintf(_coverage_fout, "2573\n");
#line 4224
        fflush(_coverage_fout);
#line 4224
        FormatMagickString(format, 4096UL, "%+f ", *tmp___0);
#line 4224
        fprintf(_coverage_fout, "2574\n");
#line 4224
        fflush(_coverage_fout);
#line 4225
        ConcatenateString(& message, (char const   *)(format));
#line 4224
        fprintf(_coverage_fout, "2575\n");
#line 4224
        fflush(_coverage_fout);
#line 4222
        u ++;
        }
      }
      {
#line 4227
      fprintf(_coverage_fout, "2577\n");
#line 4227
      fflush(_coverage_fout);
#line 4227
      LogMagickEvent(8192, "magick/fx.c", "RecolorImage", 4227UL, "%s", message);
#line 4227
      fprintf(_coverage_fout, "2578\n");
#line 4227
      fflush(_coverage_fout);
#line 4217
      v ++;
      }
    }
    {
#line 4229
    fprintf(_coverage_fout, "2581\n");
#line 4229
    fflush(_coverage_fout);
#line 4229
    message = DestroyString(message);
    }
  }
  {
#line 4234
  fprintf(_coverage_fout, "2583\n");
#line 4234
  fflush(_coverage_fout);
#line 4234
  status = 1;
#line 4234
  fprintf(_coverage_fout, "2584\n");
#line 4234
  fflush(_coverage_fout);
#line 4235
  progress = 0L;
#line 4234
  fprintf(_coverage_fout, "2585\n");
#line 4234
  fflush(_coverage_fout);
#line 4236
  GetMagickPixelPacket(image, & zero);
#line 4234
  fprintf(_coverage_fout, "2586\n");
#line 4234
  fflush(_coverage_fout);
#line 4237
  k = color_matrix;
#line 4234
  fprintf(_coverage_fout, "2587\n");
#line 4234
  fflush(_coverage_fout);
#line 4238
  image_view = AcquireCacheView(image);
#line 4234
  fprintf(_coverage_fout, "2588\n");
#line 4234
  fflush(_coverage_fout);
#line 4239
  recolor_view = AcquireCacheView((Image const   *)recolor_image);
#line 4234
  fprintf(_coverage_fout, "2589\n");
#line 4234
  fflush(_coverage_fout);
#line 4243
  y = 0L;
  }
#line 4159
  fprintf(_coverage_fout, "2648\n");
#line 4159
  fflush(_coverage_fout);
#line 4243
  while (1) {
#line 4243
    fprintf(_coverage_fout, "2630\n");
#line 4243
    fflush(_coverage_fout);
#line 4243
    if (! (y < (long )image->rows)) {
#line 4243
      break;
    }
#line 4243
    fprintf(_coverage_fout, "2631\n");
#line 4243
    fflush(_coverage_fout);
#line 4264
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 4266
    fprintf(_coverage_fout, "2590\n");
#line 4266
    fflush(_coverage_fout);
#line 4266
    tmp___1 = GetCacheViewVirtualPixels((ViewInfo const   *)image_view, 0L, y,
                                        (unsigned long )image->columns, 1UL,
                                        exception);
#line 4266
    fprintf(_coverage_fout, "2591\n");
#line 4266
    fflush(_coverage_fout);
#line 4266
    p = (PixelPacket const   */* __restrict  */)tmp___1;
#line 4266
    fprintf(_coverage_fout, "2592\n");
#line 4266
    fflush(_coverage_fout);
#line 4267
    tmp___2 = QueueCacheViewAuthenticPixels(recolor_view, 0L, y,
                                            recolor_image->columns, 1UL,
                                            exception);
#line 4266
    fprintf(_coverage_fout, "2593\n");
#line 4266
    fflush(_coverage_fout);
#line 4267
    q = (PixelPacket */* __restrict  */)tmp___2;
    }
#line 4243
    fprintf(_coverage_fout, "2632\n");
#line 4243
    fflush(_coverage_fout);
#line 4269
    if ((unsigned long )p == (unsigned long )((PixelPacket const   *)((void *)0))) {
#line 4269
      fprintf(_coverage_fout, "2594\n");
#line 4269
      fflush(_coverage_fout);
#line 4271
      status = 0;
      goto __Cont;
    } else {
#line 4269
      fprintf(_coverage_fout, "2596\n");
#line 4269
      fflush(_coverage_fout);
#line 4269
      if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 4269
        fprintf(_coverage_fout, "2595\n");
#line 4269
        fflush(_coverage_fout);
#line 4271
        status = 0;
        goto __Cont;
      }
    }
    {
#line 4274
    fprintf(_coverage_fout, "2597\n");
#line 4274
    fflush(_coverage_fout);
#line 4274
    tmp___3 = GetCacheViewAuthenticIndexQueue(image_view);
#line 4274
    fprintf(_coverage_fout, "2598\n");
#line 4274
    fflush(_coverage_fout);
#line 4274
    indexes = (IndexPacket const   */* __restrict  */)tmp___3;
#line 4274
    fprintf(_coverage_fout, "2599\n");
#line 4274
    fflush(_coverage_fout);
#line 4275
    tmp___4 = GetCacheViewAuthenticIndexQueue(recolor_view);
#line 4274
    fprintf(_coverage_fout, "2600\n");
#line 4274
    fflush(_coverage_fout);
#line 4275
    recolor_indexes = (IndexPacket */* __restrict  */)tmp___4;
#line 4274
    fprintf(_coverage_fout, "2601\n");
#line 4274
    fflush(_coverage_fout);
#line 4276
    pixel = zero;
#line 4274
    fprintf(_coverage_fout, "2602\n");
#line 4274
    fflush(_coverage_fout);
#line 4277
    recolor_pixel = zero;
#line 4274
    fprintf(_coverage_fout, "2603\n");
#line 4274
    fflush(_coverage_fout);
#line 4278
    x = 0L;
    }
#line 4243
    fprintf(_coverage_fout, "2633\n");
#line 4243
    fflush(_coverage_fout);
#line 4278
    while (1) {
#line 4278
      fprintf(_coverage_fout, "2620\n");
#line 4278
      fflush(_coverage_fout);
#line 4278
      if (! (x < (long )image->columns)) {
#line 4278
        break;
      }
      {
#line 4280
      fprintf(_coverage_fout, "2604\n");
#line 4280
      fflush(_coverage_fout);
#line 4280
      SetMagickPixelPacket(image, (PixelPacket const   *)p,
                           (IndexPacket const   *)indexes, & pixel);
#line 4280
      fprintf(_coverage_fout, "2605\n");
#line 4280
      fflush(_coverage_fout);
#line 4281
      SetMagickPixelPacket((Image const   *)recolor_image,
                           (PixelPacket const   *)p,
                           (IndexPacket const   *)indexes, & recolor_pixel);
      }
#line 4282
      switch ((int )order) {
      case 0: 
#line 4285
      break;
#line 4282
      fprintf(_coverage_fout, "2607\n");
#line 4282
      fflush(_coverage_fout);
      case 1: 
#line 4288
      recolor_pixel.red = (double )(*(k + 0) * (double const   )pixel.red);
#line 4289
      break;
#line 4282
      fprintf(_coverage_fout, "2608\n");
#line 4282
      fflush(_coverage_fout);
      case 2: 
#line 4293
      recolor_pixel.red = (double )(*(k + 0) * (double const   )pixel.red + *(k + 1) * (double const   )pixel.green);
#line 4294
      recolor_pixel.green = (double )(*(k + 2) * (double const   )pixel.red + *(k + 3) * (double const   )pixel.green);
#line 4295
      break;
#line 4282
      fprintf(_coverage_fout, "2609\n");
#line 4282
      fflush(_coverage_fout);
      case 3: 
#line 4299
      recolor_pixel.red = (double )((*(k + 0) * (double const   )pixel.red + *(k + 1) * (double const   )pixel.green) + *(k + 2) * (double const   )pixel.blue);
#line 4300
      recolor_pixel.green = (double )((*(k + 3) * (double const   )pixel.red + *(k + 4) * (double const   )pixel.green) + *(k + 5) * (double const   )pixel.blue);
#line 4301
      recolor_pixel.blue = (double )((*(k + 6) * (double const   )pixel.red + *(k + 7) * (double const   )pixel.green) + *(k + 8) * (double const   )pixel.blue);
#line 4302
      break;
#line 4282
      fprintf(_coverage_fout, "2610\n");
#line 4282
      fflush(_coverage_fout);
      case 4: 
#line 4306
      recolor_pixel.red = (double )(((*(k + 0) * (double const   )pixel.red + *(k + 1) * (double const   )pixel.green) + *(k + 2) * (double const   )pixel.blue) + *(k + 12) * (double const   )65535UL);
#line 4308
      recolor_pixel.green = (double )(((*(k + 4) * (double const   )pixel.red + *(k + 5) * (double const   )pixel.green) + *(k + 6) * (double const   )pixel.blue) + *(k + 13) * (double const   )65535UL);
#line 4310
      recolor_pixel.blue = (double )(((*(k + 8) * (double const   )pixel.red + *(k + 9) * (double const   )pixel.green) + *(k + 10) * (double const   )pixel.blue) + *(k + 14) * (double const   )65535UL);
#line 4312
      break;
#line 4282
      fprintf(_coverage_fout, "2611\n");
#line 4282
      fflush(_coverage_fout);
      case 5: 
#line 4316
      recolor_pixel.red = (double )((((*(k + 0) * (double const   )pixel.red + *(k + 1) * (double const   )pixel.green) + *(k + 2) * (double const   )pixel.blue) + *(k + 3) * (double const   )((MagickRealType )65535UL - pixel.opacity)) + *(k + 20) * (double const   )65535UL);
#line 4318
      recolor_pixel.green = (double )((((*(k + 5) * (double const   )pixel.red + *(k + 6) * (double const   )pixel.green) + *(k + 7) * (double const   )pixel.blue) + *(k + 8) * (double const   )((MagickRealType )65535UL - pixel.opacity)) + *(k + 21) * (double const   )65535UL);
#line 4320
      recolor_pixel.blue = (double )((((*(k + 10) * (double const   )pixel.red + *(k + 11) * (double const   )pixel.green) + *(k + 12) * (double const   )pixel.blue) + *(k + 13) * (double const   )((MagickRealType )65535UL - pixel.opacity)) + *(k + 22) * (double const   )65535UL);
#line 4322
      recolor_pixel.opacity = (double )65535UL - (double )((((*(k + 15) * (double const   )pixel.red + *(k + 16) * (double const   )pixel.green) + *(k + 17) * (double const   )pixel.blue) + *(k + 18) * (double const   )((MagickRealType )65535UL - pixel.opacity)) + *(k + 23) * (double const   )65535UL);
#line 4325
      break;
#line 4282
      fprintf(_coverage_fout, "2612\n");
#line 4282
      fflush(_coverage_fout);
      default: 
#line 4329
      recolor_pixel.red = (double )(((((*(k + 0) * (double const   )pixel.red + *(k + 1) * (double const   )pixel.green) + *(k + 2) * (double const   )pixel.blue) + *(k + 3) * (double const   )pixel.index) + *(k + 4) * (double const   )((MagickRealType )(unsigned short)65535 - pixel.opacity)) + *(k + 30) * (double const   )65535UL);
#line 4332
      recolor_pixel.green = (double )(((((*(k + 6) * (double const   )pixel.red + *(k + 7) * (double const   )pixel.green) + *(k + 8) * (double const   )pixel.blue) + *(k + 9) * (double const   )pixel.index) + *(k + 10) * (double const   )((MagickRealType )(unsigned short)65535 - pixel.opacity)) + *(k + 31) * (double const   )65535UL);
#line 4335
      recolor_pixel.blue = (double )(((((*(k + 12) * (double const   )pixel.red + *(k + 13) * (double const   )pixel.green) + *(k + 14) * (double const   )pixel.blue) + *(k + 15) * (double const   )pixel.index) + *(k + 16) * (double const   )((MagickRealType )(unsigned short)65535 - pixel.opacity)) + *(k + 32) * (double const   )65535UL);
#line 4282
      fprintf(_coverage_fout, "2613\n");
#line 4282
      fflush(_coverage_fout);
#line 4338
      if ((int const   )image->colorspace == 12) {
#line 4338
        fprintf(_coverage_fout, "2606\n");
#line 4338
        fflush(_coverage_fout);
#line 4339
        recolor_pixel.index = (double )(((((*(k + 18) * (double const   )pixel.red + *(k + 19) * (double const   )pixel.green) + *(k + 20) * (double const   )pixel.blue) + *(k + 21) * (double const   )pixel.index) + *(k + 22) * (double const   )((MagickRealType )(unsigned short)65535 - pixel.opacity)) + *(k + 33) * (double const   )65535UL);
      }
#line 4282
      fprintf(_coverage_fout, "2614\n");
#line 4282
      fflush(_coverage_fout);
#line 4342
      recolor_pixel.opacity = (double )65535UL - (double )(((((*(k + 24) * (double const   )pixel.red + *(k + 25) * (double const   )pixel.green) + *(k + 26) * (double const   )pixel.blue) + *(k + 27) * (double const   )pixel.index) + *(k + 28) * (double const   )((MagickRealType )65535UL - pixel.opacity)) + *(k + 34) * (double const   )65535UL);
#line 4345
      break;
      }
      {
#line 4348
      fprintf(_coverage_fout, "2615\n");
#line 4348
      fflush(_coverage_fout);
#line 4348
      q->red = RoundToQuantum(recolor_pixel.red);
#line 4348
      fprintf(_coverage_fout, "2616\n");
#line 4348
      fflush(_coverage_fout);
#line 4349
      q->green = RoundToQuantum(recolor_pixel.green);
#line 4348
      fprintf(_coverage_fout, "2617\n");
#line 4348
      fflush(_coverage_fout);
#line 4350
      q->blue = RoundToQuantum(recolor_pixel.blue);
#line 4348
      fprintf(_coverage_fout, "2618\n");
#line 4348
      fflush(_coverage_fout);
#line 4351
      q->opacity = RoundToQuantum(recolor_pixel.opacity);
      }
#line 4278
      fprintf(_coverage_fout, "2621\n");
#line 4278
      fflush(_coverage_fout);
#line 4352
      if ((int const   )image->colorspace == 12) {
        {
#line 4353
        fprintf(_coverage_fout, "2619\n");
#line 4353
        fflush(_coverage_fout);
#line 4353
        *(recolor_indexes + x) = RoundToQuantum(recolor_pixel.index);
        }
      }
#line 4278
      fprintf(_coverage_fout, "2622\n");
#line 4278
      fflush(_coverage_fout);
#line 4354
      p ++;
#line 4355
      q ++;
#line 4278
      x ++;
    }
    {
#line 4357
    fprintf(_coverage_fout, "2623\n");
#line 4357
    fflush(_coverage_fout);
#line 4357
    tmp___5 = SyncCacheViewAuthenticPixels(recolor_view, exception);
    }
#line 4243
    fprintf(_coverage_fout, "2634\n");
#line 4243
    fflush(_coverage_fout);
#line 4357
    if ((int )tmp___5 == 0) {
#line 4357
      fprintf(_coverage_fout, "2624\n");
#line 4357
      fflush(_coverage_fout);
#line 4358
      status = 0;
    }
#line 4243
    fprintf(_coverage_fout, "2635\n");
#line 4243
    fflush(_coverage_fout);
#line 4359
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 4367
      fprintf(_coverage_fout, "2625\n");
#line 4367
      fflush(_coverage_fout);
#line 4367
      tmp___6 = progress;
#line 4367
      fprintf(_coverage_fout, "2626\n");
#line 4367
      fflush(_coverage_fout);
#line 4367
      progress ++;
#line 4367
      fprintf(_coverage_fout, "2627\n");
#line 4367
      fflush(_coverage_fout);
#line 4367
      proceed = SetImageProgress(image, "Recolor/Image", (long long )tmp___6,
                                 (unsigned long long )image->rows);
      }
#line 4359
      fprintf(_coverage_fout, "2629\n");
#line 4359
      fflush(_coverage_fout);
#line 4368
      if ((int )proceed == 0) {
#line 4368
        fprintf(_coverage_fout, "2628\n");
#line 4368
        fflush(_coverage_fout);
#line 4369
        status = 0;
      }
    }
#line 4243
    fprintf(_coverage_fout, "2636\n");
#line 4243
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 4243
    y ++;
  }
  {
#line 4372
  fprintf(_coverage_fout, "2637\n");
#line 4372
  fflush(_coverage_fout);
#line 4372
  recolor_view = DestroyCacheView(recolor_view);
#line 4372
  fprintf(_coverage_fout, "2638\n");
#line 4372
  fflush(_coverage_fout);
#line 4373
  image_view = DestroyCacheView(image_view);
  }
#line 4159
  fprintf(_coverage_fout, "2649\n");
#line 4159
  fflush(_coverage_fout);
#line 4374
  if ((int )status == 0) {
    {
#line 4375
    fprintf(_coverage_fout, "2639\n");
#line 4375
    fflush(_coverage_fout);
#line 4375
    recolor_image = DestroyImage(recolor_image);
    }
  }
#line 4159
  fprintf(_coverage_fout, "2650\n");
#line 4159
  fflush(_coverage_fout);
#line 4376
  return (recolor_image);
}
}
#line 4409 "magick/fx.c"
Image *SepiaToneImage(Image const   *image , double threshold ,
                      ExceptionInfo *exception ) 
{ Image *sepia_image ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  ViewInfo *image_view ;
  ViewInfo *sepia_view ;
  MagickBooleanType tmp ;
  register PixelPacket const   * __restrict  p ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket const   *tmp___0 ;
  PixelPacket *tmp___1 ;
  MagickRealType intensity ;
  MagickRealType tone ;
  Quantum tmp___2 ;
  MagickBooleanType tmp___3 ;
  MagickBooleanType proceed ;
  long tmp___4 ;

  {
#line 4409
  fprintf(_coverage_fout, "2715\n");
#line 4409
  fflush(_coverage_fout);
#line 4431
  if (! ((unsigned long )image != (unsigned long )((Image const   *)((void *)0)))) {
    {
#line 4431
    fprintf(_coverage_fout, "2651\n");
#line 4431
    fflush(_coverage_fout);
#line 4431
    __assert_fail("image != (const Image *) ((void *)0)", "magick/fx.c", 4431U,
                  "SepiaToneImage");
    }
  }
#line 4409
  fprintf(_coverage_fout, "2716\n");
#line 4409
  fflush(_coverage_fout);
#line 4432
  if (! (image->signature == 2880220587UL)) {
    {
#line 4432
    fprintf(_coverage_fout, "2652\n");
#line 4432
    fflush(_coverage_fout);
#line 4432
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 4432U,
                  "SepiaToneImage");
    }
  }
#line 4409
  fprintf(_coverage_fout, "2717\n");
#line 4409
  fflush(_coverage_fout);
#line 4433
  if ((int const   )image->debug != 0) {
    {
#line 4434
    fprintf(_coverage_fout, "2653\n");
#line 4434
    fflush(_coverage_fout);
#line 4434
    LogMagickEvent(1, "magick/fx.c", "SepiaToneImage", 4434UL, "%s",
                   image->filename);
    }
  }
#line 4409
  fprintf(_coverage_fout, "2718\n");
#line 4409
  fflush(_coverage_fout);
#line 4435
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 4435
    fprintf(_coverage_fout, "2654\n");
#line 4435
    fflush(_coverage_fout);
#line 4435
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  4435U, "SepiaToneImage");
    }
  }
#line 4409
  fprintf(_coverage_fout, "2719\n");
#line 4409
  fflush(_coverage_fout);
#line 4436
  if (! (exception->signature == 2880220587UL)) {
    {
#line 4436
    fprintf(_coverage_fout, "2655\n");
#line 4436
    fflush(_coverage_fout);
#line 4436
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 4436U,
                  "SepiaToneImage");
    }
  }
  {
#line 4437
  fprintf(_coverage_fout, "2656\n");
#line 4437
  fflush(_coverage_fout);
#line 4437
  sepia_image = CloneImage(image, (unsigned long )image->columns,
                           (unsigned long )image->rows, 1, exception);
  }
#line 4409
  fprintf(_coverage_fout, "2720\n");
#line 4409
  fflush(_coverage_fout);
#line 4438
  if ((unsigned long )sepia_image == (unsigned long )((Image *)((void *)0))) {
#line 4438
    fprintf(_coverage_fout, "2657\n");
#line 4438
    fflush(_coverage_fout);
#line 4439
    return ((Image *)((void *)0));
  }
  {
#line 4440
  fprintf(_coverage_fout, "2658\n");
#line 4440
  fflush(_coverage_fout);
#line 4440
  tmp = SetImageStorageClass(sepia_image, 1);
  }
#line 4409
  fprintf(_coverage_fout, "2721\n");
#line 4409
  fflush(_coverage_fout);
#line 4440
  if ((int )tmp == 0) {
    {
#line 4442
    fprintf(_coverage_fout, "2659\n");
#line 4442
    fflush(_coverage_fout);
#line 4442
    InheritException(exception,
                     (ExceptionInfo const   *)(& sepia_image->exception));
#line 4442
    fprintf(_coverage_fout, "2660\n");
#line 4442
    fflush(_coverage_fout);
#line 4443
    sepia_image = DestroyImage(sepia_image);
    }
#line 4440
    fprintf(_coverage_fout, "2661\n");
#line 4440
    fflush(_coverage_fout);
#line 4444
    return ((Image *)((void *)0));
  }
  {
#line 4449
  fprintf(_coverage_fout, "2662\n");
#line 4449
  fflush(_coverage_fout);
#line 4449
  status = 1;
#line 4449
  fprintf(_coverage_fout, "2663\n");
#line 4449
  fflush(_coverage_fout);
#line 4450
  progress = 0L;
#line 4449
  fprintf(_coverage_fout, "2664\n");
#line 4449
  fflush(_coverage_fout);
#line 4451
  image_view = AcquireCacheView(image);
#line 4449
  fprintf(_coverage_fout, "2665\n");
#line 4449
  fflush(_coverage_fout);
#line 4452
  sepia_view = AcquireCacheView((Image const   *)sepia_image);
#line 4449
  fprintf(_coverage_fout, "2666\n");
#line 4449
  fflush(_coverage_fout);
#line 4456
  y = 0L;
  }
#line 4409
  fprintf(_coverage_fout, "2722\n");
#line 4409
  fflush(_coverage_fout);
#line 4456
  while (1) {
#line 4456
    fprintf(_coverage_fout, "2702\n");
#line 4456
    fflush(_coverage_fout);
#line 4456
    if (! (y < (long )image->rows)) {
#line 4456
      break;
    }
#line 4456
    fprintf(_coverage_fout, "2703\n");
#line 4456
    fflush(_coverage_fout);
#line 4467
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 4469
    fprintf(_coverage_fout, "2667\n");
#line 4469
    fflush(_coverage_fout);
#line 4469
    tmp___0 = GetCacheViewVirtualPixels((ViewInfo const   *)image_view, 0L, y,
                                        (unsigned long )image->columns, 1UL,
                                        exception);
#line 4469
    fprintf(_coverage_fout, "2668\n");
#line 4469
    fflush(_coverage_fout);
#line 4469
    p = (PixelPacket const   */* __restrict  */)tmp___0;
#line 4469
    fprintf(_coverage_fout, "2669\n");
#line 4469
    fflush(_coverage_fout);
#line 4470
    tmp___1 = QueueCacheViewAuthenticPixels(sepia_view, 0L, y,
                                            sepia_image->columns, 1UL, exception);
#line 4469
    fprintf(_coverage_fout, "2670\n");
#line 4469
    fflush(_coverage_fout);
#line 4470
    q = (PixelPacket */* __restrict  */)tmp___1;
    }
#line 4456
    fprintf(_coverage_fout, "2704\n");
#line 4456
    fflush(_coverage_fout);
#line 4472
    if ((unsigned long )p == (unsigned long )((PixelPacket const   *)((void *)0))) {
#line 4472
      fprintf(_coverage_fout, "2671\n");
#line 4472
      fflush(_coverage_fout);
#line 4474
      status = 0;
      goto __Cont;
    } else {
#line 4472
      fprintf(_coverage_fout, "2673\n");
#line 4472
      fflush(_coverage_fout);
#line 4472
      if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 4472
        fprintf(_coverage_fout, "2672\n");
#line 4472
        fflush(_coverage_fout);
#line 4474
        status = 0;
        goto __Cont;
      }
    }
#line 4456
    fprintf(_coverage_fout, "2705\n");
#line 4456
    fflush(_coverage_fout);
#line 4477
    x = 0L;
#line 4456
    fprintf(_coverage_fout, "2706\n");
#line 4456
    fflush(_coverage_fout);
#line 4477
    while (1) {
#line 4477
      fprintf(_coverage_fout, "2688\n");
#line 4477
      fflush(_coverage_fout);
#line 4477
      if (! (x < (long )image->columns)) {
#line 4477
        break;
      }
      {
#line 4483
      fprintf(_coverage_fout, "2674\n");
#line 4483
      fflush(_coverage_fout);
#line 4483
      tmp___2 = PixelIntensityToQuantum((PixelPacket const   *)p);
#line 4483
      fprintf(_coverage_fout, "2675\n");
#line 4483
      fflush(_coverage_fout);
#line 4483
      intensity = (double )tmp___2;
      }
#line 4477
      fprintf(_coverage_fout, "2689\n");
#line 4477
      fflush(_coverage_fout);
#line 4484
      if (intensity > threshold) {
#line 4484
        fprintf(_coverage_fout, "2676\n");
#line 4484
        fflush(_coverage_fout);
#line 4484
        tone = (double )65535UL;
      } else {
#line 4484
        fprintf(_coverage_fout, "2677\n");
#line 4484
        fflush(_coverage_fout);
#line 4484
        tone = (intensity + (double )65535UL) - threshold;
      }
      {
#line 4486
      fprintf(_coverage_fout, "2678\n");
#line 4486
      fflush(_coverage_fout);
#line 4486
      q->red = RoundToQuantum(tone);
      }
#line 4477
      fprintf(_coverage_fout, "2690\n");
#line 4477
      fflush(_coverage_fout);
#line 4487
      if (intensity > (7.0 * threshold) / 6.0) {
#line 4487
        fprintf(_coverage_fout, "2679\n");
#line 4487
        fflush(_coverage_fout);
#line 4487
        tone = (double )65535UL;
      } else {
#line 4487
        fprintf(_coverage_fout, "2680\n");
#line 4487
        fflush(_coverage_fout);
#line 4487
        tone = (intensity + (double )65535UL) - (7.0 * threshold) / 6.0;
      }
      {
#line 4489
      fprintf(_coverage_fout, "2681\n");
#line 4489
      fflush(_coverage_fout);
#line 4489
      q->green = RoundToQuantum(tone);
      }
#line 4477
      fprintf(_coverage_fout, "2691\n");
#line 4477
      fflush(_coverage_fout);
#line 4490
      if (intensity < threshold / 6.0) {
#line 4490
        fprintf(_coverage_fout, "2682\n");
#line 4490
        fflush(_coverage_fout);
#line 4490
        tone = (double )0;
      } else {
#line 4490
        fprintf(_coverage_fout, "2683\n");
#line 4490
        fflush(_coverage_fout);
#line 4490
        tone = intensity - threshold / 6.0;
      }
      {
#line 4491
      fprintf(_coverage_fout, "2684\n");
#line 4491
      fflush(_coverage_fout);
#line 4491
      q->blue = RoundToQuantum(tone);
#line 4491
      fprintf(_coverage_fout, "2685\n");
#line 4491
      fflush(_coverage_fout);
#line 4492
      tone = threshold / 7.0;
      }
#line 4477
      fprintf(_coverage_fout, "2692\n");
#line 4477
      fflush(_coverage_fout);
#line 4493
      if ((double )q->green < tone) {
        {
#line 4494
        fprintf(_coverage_fout, "2686\n");
#line 4494
        fflush(_coverage_fout);
#line 4494
        q->green = RoundToQuantum(tone);
        }
      }
#line 4477
      fprintf(_coverage_fout, "2693\n");
#line 4477
      fflush(_coverage_fout);
#line 4495
      if ((double )q->blue < tone) {
        {
#line 4496
        fprintf(_coverage_fout, "2687\n");
#line 4496
        fflush(_coverage_fout);
#line 4496
        q->blue = RoundToQuantum(tone);
        }
      }
#line 4477
      fprintf(_coverage_fout, "2694\n");
#line 4477
      fflush(_coverage_fout);
#line 4497
      p ++;
#line 4498
      q ++;
#line 4477
      x ++;
    }
    {
#line 4500
    fprintf(_coverage_fout, "2695\n");
#line 4500
    fflush(_coverage_fout);
#line 4500
    tmp___3 = SyncCacheViewAuthenticPixels(sepia_view, exception);
    }
#line 4456
    fprintf(_coverage_fout, "2707\n");
#line 4456
    fflush(_coverage_fout);
#line 4500
    if ((int )tmp___3 == 0) {
#line 4500
      fprintf(_coverage_fout, "2696\n");
#line 4500
      fflush(_coverage_fout);
#line 4501
      status = 0;
    }
#line 4456
    fprintf(_coverage_fout, "2708\n");
#line 4456
    fflush(_coverage_fout);
#line 4502
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 4510
      fprintf(_coverage_fout, "2697\n");
#line 4510
      fflush(_coverage_fout);
#line 4510
      tmp___4 = progress;
#line 4510
      fprintf(_coverage_fout, "2698\n");
#line 4510
      fflush(_coverage_fout);
#line 4510
      progress ++;
#line 4510
      fprintf(_coverage_fout, "2699\n");
#line 4510
      fflush(_coverage_fout);
#line 4510
      proceed = SetImageProgress(image, "SepiaTone/Image", (long long )tmp___4,
                                 (unsigned long long )image->rows);
      }
#line 4502
      fprintf(_coverage_fout, "2701\n");
#line 4502
      fflush(_coverage_fout);
#line 4512
      if ((int )proceed == 0) {
#line 4512
        fprintf(_coverage_fout, "2700\n");
#line 4512
        fflush(_coverage_fout);
#line 4513
        status = 0;
      }
    }
#line 4456
    fprintf(_coverage_fout, "2709\n");
#line 4456
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 4456
    y ++;
  }
  {
#line 4516
  fprintf(_coverage_fout, "2710\n");
#line 4516
  fflush(_coverage_fout);
#line 4516
  sepia_view = DestroyCacheView(sepia_view);
#line 4516
  fprintf(_coverage_fout, "2711\n");
#line 4516
  fflush(_coverage_fout);
#line 4517
  image_view = DestroyCacheView(image_view);
#line 4516
  fprintf(_coverage_fout, "2712\n");
#line 4516
  fflush(_coverage_fout);
#line 4518
  NormalizeImage(sepia_image);
#line 4516
  fprintf(_coverage_fout, "2713\n");
#line 4516
  fflush(_coverage_fout);
#line 4519
  ContrastImage(sepia_image, 1);
  }
#line 4409
  fprintf(_coverage_fout, "2723\n");
#line 4409
  fflush(_coverage_fout);
#line 4520
  if ((int )status == 0) {
    {
#line 4521
    fprintf(_coverage_fout, "2714\n");
#line 4521
    fflush(_coverage_fout);
#line 4521
    sepia_image = DestroyImage(sepia_image);
    }
  }
#line 4409
  fprintf(_coverage_fout, "2724\n");
#line 4409
  fflush(_coverage_fout);
#line 4522
  return (sepia_image);
}
}
#line 4559 "magick/fx.c"
Image *ShadowImage(Image const   *image , double opacity , double sigma ,
                   long x_offset , long y_offset , ExceptionInfo *exception ) 
{ Image *border_image ;
  Image *clone_image ;
  Image *shadow_image ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  RectangleInfo border_info ;
  ViewInfo *image_view ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket *tmp ;
  MagickBooleanType tmp___0 ;
  MagickBooleanType proceed ;
  long tmp___1 ;

  {
#line 4559
  fprintf(_coverage_fout, "2777\n");
#line 4559
  fflush(_coverage_fout);
#line 4583
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 4583
    fprintf(_coverage_fout, "2725\n");
#line 4583
    fflush(_coverage_fout);
#line 4583
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 4583U,
                  "ShadowImage");
    }
  }
#line 4559
  fprintf(_coverage_fout, "2778\n");
#line 4559
  fflush(_coverage_fout);
#line 4584
  if (! (image->signature == 2880220587UL)) {
    {
#line 4584
    fprintf(_coverage_fout, "2726\n");
#line 4584
    fflush(_coverage_fout);
#line 4584
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 4584U,
                  "ShadowImage");
    }
  }
#line 4559
  fprintf(_coverage_fout, "2779\n");
#line 4559
  fflush(_coverage_fout);
#line 4585
  if ((int const   )image->debug != 0) {
    {
#line 4586
    fprintf(_coverage_fout, "2727\n");
#line 4586
    fflush(_coverage_fout);
#line 4586
    LogMagickEvent(1, "magick/fx.c", "ShadowImage", 4586UL, "%s",
                   image->filename);
    }
  }
#line 4559
  fprintf(_coverage_fout, "2780\n");
#line 4559
  fflush(_coverage_fout);
#line 4587
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 4587
    fprintf(_coverage_fout, "2728\n");
#line 4587
    fflush(_coverage_fout);
#line 4587
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  4587U, "ShadowImage");
    }
  }
#line 4559
  fprintf(_coverage_fout, "2781\n");
#line 4559
  fflush(_coverage_fout);
#line 4588
  if (! (exception->signature == 2880220587UL)) {
    {
#line 4588
    fprintf(_coverage_fout, "2729\n");
#line 4588
    fflush(_coverage_fout);
#line 4588
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 4588U,
                  "ShadowImage");
    }
  }
  {
#line 4589
  fprintf(_coverage_fout, "2730\n");
#line 4589
  fflush(_coverage_fout);
#line 4589
  clone_image = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 4559
  fprintf(_coverage_fout, "2782\n");
#line 4559
  fflush(_coverage_fout);
#line 4590
  if ((unsigned long )clone_image == (unsigned long )((Image *)((void *)0))) {
#line 4590
    fprintf(_coverage_fout, "2731\n");
#line 4590
    fflush(_coverage_fout);
#line 4591
    return ((Image *)((void *)0));
  }
  {
#line 4592
  fprintf(_coverage_fout, "2732\n");
#line 4592
  fflush(_coverage_fout);
#line 4592
  SetImageVirtualPixelMethod((Image const   *)clone_image, 4);
#line 4592
  fprintf(_coverage_fout, "2733\n");
#line 4592
  fflush(_coverage_fout);
#line 4593
  clone_image->compose = 40;
#line 4592
  fprintf(_coverage_fout, "2734\n");
#line 4592
  fflush(_coverage_fout);
#line 4594
  border_info.width = (unsigned long )(2.0 * sigma + 0.5);
#line 4592
  fprintf(_coverage_fout, "2735\n");
#line 4592
  fflush(_coverage_fout);
#line 4595
  border_info.height = (unsigned long )(2.0 * sigma + 0.5);
#line 4592
  fprintf(_coverage_fout, "2736\n");
#line 4592
  fflush(_coverage_fout);
#line 4596
  border_info.x = 0L;
#line 4592
  fprintf(_coverage_fout, "2737\n");
#line 4592
  fflush(_coverage_fout);
#line 4597
  border_info.y = 0L;
#line 4592
  fprintf(_coverage_fout, "2738\n");
#line 4592
  fflush(_coverage_fout);
#line 4598
  QueryColorDatabase("none", & clone_image->border_color, exception);
#line 4592
  fprintf(_coverage_fout, "2739\n");
#line 4592
  fflush(_coverage_fout);
#line 4599
  border_image = BorderImage((Image const   *)clone_image,
                             (RectangleInfo const   *)(& border_info), exception);
#line 4592
  fprintf(_coverage_fout, "2740\n");
#line 4592
  fflush(_coverage_fout);
#line 4600
  clone_image = DestroyImage(clone_image);
  }
#line 4559
  fprintf(_coverage_fout, "2783\n");
#line 4559
  fflush(_coverage_fout);
#line 4601
  if ((unsigned long )border_image == (unsigned long )((Image *)((void *)0))) {
#line 4601
    fprintf(_coverage_fout, "2741\n");
#line 4601
    fflush(_coverage_fout);
#line 4602
    return ((Image *)((void *)0));
  }
#line 4559
  fprintf(_coverage_fout, "2784\n");
#line 4559
  fflush(_coverage_fout);
#line 4603
  if ((int )border_image->matte == 0) {
    {
#line 4604
    fprintf(_coverage_fout, "2742\n");
#line 4604
    fflush(_coverage_fout);
#line 4604
    SetImageAlphaChannel(border_image, 6);
    }
  }
  {
#line 4608
  fprintf(_coverage_fout, "2743\n");
#line 4608
  fflush(_coverage_fout);
#line 4608
  status = 1;
#line 4608
  fprintf(_coverage_fout, "2744\n");
#line 4608
  fflush(_coverage_fout);
#line 4609
  progress = 0L;
#line 4608
  fprintf(_coverage_fout, "2745\n");
#line 4608
  fflush(_coverage_fout);
#line 4610
  image_view = AcquireCacheView((Image const   *)border_image);
#line 4608
  fprintf(_coverage_fout, "2746\n");
#line 4608
  fflush(_coverage_fout);
#line 4614
  y = 0L;
  }
#line 4559
  fprintf(_coverage_fout, "2785\n");
#line 4559
  fflush(_coverage_fout);
#line 4614
  while (1) {
#line 4614
    fprintf(_coverage_fout, "2763\n");
#line 4614
    fflush(_coverage_fout);
#line 4614
    if (! (y < (long )border_image->rows)) {
#line 4614
      break;
    }
#line 4614
    fprintf(_coverage_fout, "2764\n");
#line 4614
    fflush(_coverage_fout);
#line 4622
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 4624
    fprintf(_coverage_fout, "2747\n");
#line 4624
    fflush(_coverage_fout);
#line 4624
    tmp = GetCacheViewAuthenticPixels(image_view, 0L, y, border_image->columns,
                                      1UL, exception);
#line 4624
    fprintf(_coverage_fout, "2748\n");
#line 4624
    fflush(_coverage_fout);
#line 4624
    q = (PixelPacket */* __restrict  */)tmp;
    }
#line 4614
    fprintf(_coverage_fout, "2765\n");
#line 4614
    fflush(_coverage_fout);
#line 4626
    if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 4626
      fprintf(_coverage_fout, "2749\n");
#line 4626
      fflush(_coverage_fout);
#line 4628
      status = 0;
      goto __Cont;
    }
#line 4614
    fprintf(_coverage_fout, "2766\n");
#line 4614
    fflush(_coverage_fout);
#line 4631
    x = 0L;
#line 4614
    fprintf(_coverage_fout, "2767\n");
#line 4614
    fflush(_coverage_fout);
#line 4631
    while (1) {
#line 4631
      fprintf(_coverage_fout, "2752\n");
#line 4631
      fflush(_coverage_fout);
#line 4631
      if (! (x < (long )border_image->columns)) {
#line 4631
        break;
      }
#line 4631
      fprintf(_coverage_fout, "2753\n");
#line 4631
      fflush(_coverage_fout);
#line 4633
      q->red = border_image->background_color.red;
#line 4634
      q->green = border_image->background_color.green;
#line 4635
      q->blue = border_image->background_color.blue;
#line 4631
      fprintf(_coverage_fout, "2754\n");
#line 4631
      fflush(_coverage_fout);
#line 4636
      if ((int )border_image->matte == 0) {
#line 4636
        fprintf(_coverage_fout, "2750\n");
#line 4636
        fflush(_coverage_fout);
#line 4637
        q->opacity = border_image->background_color.opacity;
      } else {
        {
#line 4639
        fprintf(_coverage_fout, "2751\n");
#line 4639
        fflush(_coverage_fout);
#line 4639
        q->opacity = RoundToQuantum((double )65535UL - ((double )(65535UL - (unsigned long )q->opacity) * opacity) / 100.0);
        }
      }
#line 4631
      fprintf(_coverage_fout, "2755\n");
#line 4631
      fflush(_coverage_fout);
#line 4641
      q ++;
#line 4631
      x ++;
    }
    {
#line 4643
    fprintf(_coverage_fout, "2756\n");
#line 4643
    fflush(_coverage_fout);
#line 4643
    tmp___0 = SyncCacheViewAuthenticPixels(image_view, exception);
    }
#line 4614
    fprintf(_coverage_fout, "2768\n");
#line 4614
    fflush(_coverage_fout);
#line 4643
    if ((int )tmp___0 == 0) {
#line 4643
      fprintf(_coverage_fout, "2757\n");
#line 4643
      fflush(_coverage_fout);
#line 4644
      status = 0;
    }
#line 4614
    fprintf(_coverage_fout, "2769\n");
#line 4614
    fflush(_coverage_fout);
#line 4645
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 4653
      fprintf(_coverage_fout, "2758\n");
#line 4653
      fflush(_coverage_fout);
#line 4653
      tmp___1 = progress;
#line 4653
      fprintf(_coverage_fout, "2759\n");
#line 4653
      fflush(_coverage_fout);
#line 4653
      progress ++;
#line 4653
      fprintf(_coverage_fout, "2760\n");
#line 4653
      fflush(_coverage_fout);
#line 4653
      proceed = SetImageProgress(image, "Shadow/Image", (long long )tmp___1,
                                 (unsigned long long )border_image->rows);
      }
#line 4645
      fprintf(_coverage_fout, "2762\n");
#line 4645
      fflush(_coverage_fout);
#line 4655
      if ((int )proceed == 0) {
#line 4655
        fprintf(_coverage_fout, "2761\n");
#line 4655
        fflush(_coverage_fout);
#line 4656
        status = 0;
      }
    }
#line 4614
    fprintf(_coverage_fout, "2770\n");
#line 4614
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 4614
    y ++;
  }
  {
#line 4659
  fprintf(_coverage_fout, "2771\n");
#line 4659
  fflush(_coverage_fout);
#line 4659
  image_view = DestroyCacheView(image_view);
#line 4659
  fprintf(_coverage_fout, "2772\n");
#line 4659
  fflush(_coverage_fout);
#line 4660
  shadow_image = BlurImageChannel((Image const   *)border_image, 8, 0.0, sigma,
                                  exception);
#line 4659
  fprintf(_coverage_fout, "2773\n");
#line 4659
  fflush(_coverage_fout);
#line 4661
  border_image = DestroyImage(border_image);
  }
#line 4559
  fprintf(_coverage_fout, "2786\n");
#line 4559
  fflush(_coverage_fout);
#line 4662
  if ((unsigned long )shadow_image == (unsigned long )((Image *)((void *)0))) {
#line 4662
    fprintf(_coverage_fout, "2774\n");
#line 4662
    fflush(_coverage_fout);
#line 4663
    return ((Image *)((void *)0));
  }
#line 4559
  fprintf(_coverage_fout, "2787\n");
#line 4559
  fflush(_coverage_fout);
#line 4664
  if (shadow_image->page.width == 0UL) {
#line 4664
    fprintf(_coverage_fout, "2775\n");
#line 4664
    fflush(_coverage_fout);
#line 4665
    shadow_image->page.width = shadow_image->columns;
  }
#line 4559
  fprintf(_coverage_fout, "2788\n");
#line 4559
  fflush(_coverage_fout);
#line 4666
  if (shadow_image->page.height == 0UL) {
#line 4666
    fprintf(_coverage_fout, "2776\n");
#line 4666
    fflush(_coverage_fout);
#line 4667
    shadow_image->page.height = shadow_image->rows;
  }
#line 4559
  fprintf(_coverage_fout, "2789\n");
#line 4559
  fflush(_coverage_fout);
#line 4668
  shadow_image->page.width += (unsigned long )(x_offset - (long )border_info.width);
#line 4669
  shadow_image->page.height += (unsigned long )(y_offset - (long )border_info.height);
#line 4670
  shadow_image->page.x += x_offset - (long )border_info.width;
#line 4671
  shadow_image->page.y += y_offset - (long )border_info.height;
#line 4559
  fprintf(_coverage_fout, "2790\n");
#line 4559
  fflush(_coverage_fout);
#line 4672
  return (shadow_image);
}
}
#line 4711 "magick/fx.c"
Image *SketchImage(Image const   *image , double radius , double sigma ,
                   double angle , ExceptionInfo *exception ) 
{ Image *blend_image ;
  Image *blur_image ;
  Image *dodge_image ;
  Image *random_image ;
  Image *sketch_image ;
  long y ;
  MagickBooleanType status ;
  MagickPixelPacket zero ;
  ViewInfo *random_view ;
  MagickPixelPacket pixel ;
  register IndexPacket * __restrict  indexes ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket *tmp ;
  IndexPacket *tmp___0 ;
  double tmp___1 ;
  MagickBooleanType tmp___2 ;

  {
  {
#line 4736
  fprintf(_coverage_fout, "2791\n");
#line 4736
  fflush(_coverage_fout);
#line 4736
  random_image = CloneImage(image, (unsigned long )(image->columns << 1),
                            (unsigned long )(image->rows << 1), 1, exception);
  }
#line 4711
  fprintf(_coverage_fout, "2845\n");
#line 4711
  fflush(_coverage_fout);
#line 4738
  if ((unsigned long )random_image == (unsigned long )((Image *)((void *)0))) {
#line 4738
    fprintf(_coverage_fout, "2792\n");
#line 4738
    fflush(_coverage_fout);
#line 4739
    return ((Image *)((void *)0));
  }
  {
#line 4740
  fprintf(_coverage_fout, "2793\n");
#line 4740
  fflush(_coverage_fout);
#line 4740
  status = 1;
#line 4740
  fprintf(_coverage_fout, "2794\n");
#line 4740
  fflush(_coverage_fout);
#line 4741
  GetMagickPixelPacket((Image const   *)random_image, & zero);
#line 4740
  fprintf(_coverage_fout, "2795\n");
#line 4740
  fflush(_coverage_fout);
#line 4742
  random_view = AcquireCacheView((Image const   *)random_image);
#line 4740
  fprintf(_coverage_fout, "2796\n");
#line 4740
  fflush(_coverage_fout);
#line 4743
  y = 0L;
  }
#line 4711
  fprintf(_coverage_fout, "2846\n");
#line 4711
  fflush(_coverage_fout);
#line 4743
  while (1) {
#line 4743
    fprintf(_coverage_fout, "2816\n");
#line 4743
    fflush(_coverage_fout);
#line 4743
    if (! (y < (long )random_image->rows)) {
#line 4743
      break;
    }
    {
#line 4757
    fprintf(_coverage_fout, "2797\n");
#line 4757
    fflush(_coverage_fout);
#line 4757
    tmp = QueueCacheViewAuthenticPixels(random_view, 0L, y,
                                        random_image->columns, 1UL, exception);
#line 4757
    fprintf(_coverage_fout, "2798\n");
#line 4757
    fflush(_coverage_fout);
#line 4757
    q = (PixelPacket */* __restrict  */)tmp;
    }
#line 4743
    fprintf(_coverage_fout, "2817\n");
#line 4743
    fflush(_coverage_fout);
#line 4759
    if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 4759
      fprintf(_coverage_fout, "2799\n");
#line 4759
      fflush(_coverage_fout);
#line 4761
      status = 0;
      goto __Cont;
    }
    {
#line 4764
    fprintf(_coverage_fout, "2800\n");
#line 4764
    fflush(_coverage_fout);
#line 4764
    tmp___0 = GetCacheViewAuthenticIndexQueue(random_view);
#line 4764
    fprintf(_coverage_fout, "2801\n");
#line 4764
    fflush(_coverage_fout);
#line 4764
    indexes = (IndexPacket */* __restrict  */)tmp___0;
#line 4764
    fprintf(_coverage_fout, "2802\n");
#line 4764
    fflush(_coverage_fout);
#line 4765
    pixel = zero;
#line 4764
    fprintf(_coverage_fout, "2803\n");
#line 4764
    fflush(_coverage_fout);
#line 4766
    x = 0L;
    }
#line 4743
    fprintf(_coverage_fout, "2818\n");
#line 4743
    fflush(_coverage_fout);
#line 4766
    while (1) {
#line 4766
      fprintf(_coverage_fout, "2812\n");
#line 4766
      fflush(_coverage_fout);
#line 4766
      if (! (x < (long )random_image->columns)) {
#line 4766
        break;
      }
      {
#line 4768
      fprintf(_coverage_fout, "2804\n");
#line 4768
      fflush(_coverage_fout);
#line 4768
      tmp___1 = GetPseudoRandomValue();
#line 4768
      fprintf(_coverage_fout, "2805\n");
#line 4768
      fflush(_coverage_fout);
#line 4768
      pixel.red = (double )65535UL * tmp___1;
#line 4768
      fprintf(_coverage_fout, "2806\n");
#line 4768
      fflush(_coverage_fout);
#line 4769
      pixel.green = pixel.red;
#line 4768
      fprintf(_coverage_fout, "2807\n");
#line 4768
      fflush(_coverage_fout);
#line 4770
      pixel.blue = pixel.red;
      }
#line 4766
      fprintf(_coverage_fout, "2813\n");
#line 4766
      fflush(_coverage_fout);
#line 4771
      if ((int const   )image->colorspace == 12) {
#line 4771
        fprintf(_coverage_fout, "2808\n");
#line 4771
        fflush(_coverage_fout);
#line 4772
        pixel.index = pixel.red;
      }
      {
#line 4773
      fprintf(_coverage_fout, "2809\n");
#line 4773
      fflush(_coverage_fout);
#line 4773
      SetPixelPacket((Image const   *)random_image,
                     (MagickPixelPacket const   *)(& pixel), (PixelPacket *)q,
                     (IndexPacket *)(indexes + x));
#line 4773
      fprintf(_coverage_fout, "2810\n");
#line 4773
      fflush(_coverage_fout);
#line 4774
      q ++;
#line 4773
      fprintf(_coverage_fout, "2811\n");
#line 4773
      fflush(_coverage_fout);
#line 4766
      x ++;
      }
    }
    {
#line 4776
    fprintf(_coverage_fout, "2814\n");
#line 4776
    fflush(_coverage_fout);
#line 4776
    tmp___2 = SyncCacheViewAuthenticPixels(random_view, exception);
    }
#line 4743
    fprintf(_coverage_fout, "2819\n");
#line 4743
    fflush(_coverage_fout);
#line 4776
    if ((int )tmp___2 == 0) {
#line 4776
      fprintf(_coverage_fout, "2815\n");
#line 4776
      fflush(_coverage_fout);
#line 4777
      status = 0;
    }
#line 4743
    fprintf(_coverage_fout, "2820\n");
#line 4743
    fflush(_coverage_fout);
#line 4778
    if ((int )status == 0) {
#line 4779
      break;
    }
#line 4743
    fprintf(_coverage_fout, "2821\n");
#line 4743
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 4743
    y ++;
  }
  {
#line 4781
  fprintf(_coverage_fout, "2822\n");
#line 4781
  fflush(_coverage_fout);
#line 4781
  random_view = DestroyCacheView(random_view);
  }
#line 4711
  fprintf(_coverage_fout, "2847\n");
#line 4711
  fflush(_coverage_fout);
#line 4782
  if ((int )status == 0) {
    {
#line 4784
    fprintf(_coverage_fout, "2823\n");
#line 4784
    fflush(_coverage_fout);
#line 4784
    random_image = DestroyImage(random_image);
    }
#line 4782
    fprintf(_coverage_fout, "2824\n");
#line 4782
    fflush(_coverage_fout);
#line 4785
    return (random_image);
  }
  {
#line 4787
  fprintf(_coverage_fout, "2825\n");
#line 4787
  fflush(_coverage_fout);
#line 4787
  blur_image = MotionBlurImage((Image const   *)random_image, radius, sigma,
                               angle, exception);
#line 4787
  fprintf(_coverage_fout, "2826\n");
#line 4787
  fflush(_coverage_fout);
#line 4788
  random_image = DestroyImage(random_image);
  }
#line 4711
  fprintf(_coverage_fout, "2848\n");
#line 4711
  fflush(_coverage_fout);
#line 4789
  if ((unsigned long )blur_image == (unsigned long )((Image *)((void *)0))) {
#line 4789
    fprintf(_coverage_fout, "2827\n");
#line 4789
    fflush(_coverage_fout);
#line 4790
    return ((Image *)((void *)0));
  }
  {
#line 4791
  fprintf(_coverage_fout, "2828\n");
#line 4791
  fflush(_coverage_fout);
#line 4791
  dodge_image = EdgeImage((Image const   *)blur_image, radius, exception);
#line 4791
  fprintf(_coverage_fout, "2829\n");
#line 4791
  fflush(_coverage_fout);
#line 4792
  blur_image = DestroyImage(blur_image);
  }
#line 4711
  fprintf(_coverage_fout, "2849\n");
#line 4711
  fflush(_coverage_fout);
#line 4793
  if ((unsigned long )dodge_image == (unsigned long )((Image *)((void *)0))) {
#line 4793
    fprintf(_coverage_fout, "2830\n");
#line 4793
    fflush(_coverage_fout);
#line 4794
    return ((Image *)((void *)0));
  }
  {
#line 4795
  fprintf(_coverage_fout, "2831\n");
#line 4795
  fflush(_coverage_fout);
#line 4795
  NormalizeImage(dodge_image);
#line 4795
  fprintf(_coverage_fout, "2832\n");
#line 4795
  fflush(_coverage_fout);
#line 4796
  NegateImage(dodge_image, 0);
#line 4795
  fprintf(_coverage_fout, "2833\n");
#line 4795
  fflush(_coverage_fout);
#line 4797
  TransformImage(& dodge_image, (char const   *)((char *)((void *)0)), "50%");
#line 4795
  fprintf(_coverage_fout, "2834\n");
#line 4795
  fflush(_coverage_fout);
#line 4798
  sketch_image = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 4711
  fprintf(_coverage_fout, "2850\n");
#line 4711
  fflush(_coverage_fout);
#line 4799
  if ((unsigned long )sketch_image == (unsigned long )((Image *)((void *)0))) {
    {
#line 4801
    fprintf(_coverage_fout, "2835\n");
#line 4801
    fflush(_coverage_fout);
#line 4801
    dodge_image = DestroyImage(dodge_image);
    }
#line 4799
    fprintf(_coverage_fout, "2836\n");
#line 4799
    fflush(_coverage_fout);
#line 4802
    return ((Image *)((void *)0));
  }
  {
#line 4804
  fprintf(_coverage_fout, "2837\n");
#line 4804
  fflush(_coverage_fout);
#line 4804
  CompositeImage(sketch_image, 9, (Image const   *)dodge_image, 0L, 0L);
#line 4804
  fprintf(_coverage_fout, "2838\n");
#line 4804
  fflush(_coverage_fout);
#line 4805
  dodge_image = DestroyImage(dodge_image);
#line 4804
  fprintf(_coverage_fout, "2839\n");
#line 4804
  fflush(_coverage_fout);
#line 4806
  blend_image = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 4711
  fprintf(_coverage_fout, "2851\n");
#line 4711
  fflush(_coverage_fout);
#line 4807
  if ((unsigned long )blend_image == (unsigned long )((Image *)((void *)0))) {
    {
#line 4809
    fprintf(_coverage_fout, "2840\n");
#line 4809
    fflush(_coverage_fout);
#line 4809
    sketch_image = DestroyImage(sketch_image);
    }
#line 4807
    fprintf(_coverage_fout, "2841\n");
#line 4807
    fflush(_coverage_fout);
#line 4810
    return ((Image *)((void *)0));
  }
  {
#line 4812
  fprintf(_coverage_fout, "2842\n");
#line 4812
  fflush(_coverage_fout);
#line 4812
  blend_image->geometry = AcquireString("20x80");
#line 4812
  fprintf(_coverage_fout, "2843\n");
#line 4812
  fflush(_coverage_fout);
#line 4813
  CompositeImage(sketch_image, 4, (Image const   *)blend_image, 0L, 0L);
#line 4812
  fprintf(_coverage_fout, "2844\n");
#line 4812
  fflush(_coverage_fout);
#line 4814
  blend_image = DestroyImage(blend_image);
  }
#line 4711
  fprintf(_coverage_fout, "2852\n");
#line 4711
  fflush(_coverage_fout);
#line 4815
  return (sketch_image);
}
}
#line 4845 "magick/fx.c"
MagickBooleanType SolarizeImage(Image *image , double threshold ) 
{ ExceptionInfo *exception ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  ViewInfo *image_view ;
  register long i ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket *tmp ;
  MagickBooleanType tmp___0 ;
  MagickBooleanType proceed ;
  long tmp___1 ;

  {
#line 4845
  fprintf(_coverage_fout, "2898\n");
#line 4845
  fflush(_coverage_fout);
#line 4863
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 4863
    fprintf(_coverage_fout, "2853\n");
#line 4863
    fflush(_coverage_fout);
#line 4863
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 4863U,
                  "SolarizeImage");
    }
  }
#line 4845
  fprintf(_coverage_fout, "2899\n");
#line 4845
  fflush(_coverage_fout);
#line 4864
  if (! (image->signature == 2880220587UL)) {
    {
#line 4864
    fprintf(_coverage_fout, "2854\n");
#line 4864
    fflush(_coverage_fout);
#line 4864
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 4864U,
                  "SolarizeImage");
    }
  }
#line 4845
  fprintf(_coverage_fout, "2900\n");
#line 4845
  fflush(_coverage_fout);
#line 4865
  if ((int )image->debug != 0) {
    {
#line 4866
    fprintf(_coverage_fout, "2855\n");
#line 4866
    fflush(_coverage_fout);
#line 4866
    LogMagickEvent(1, "magick/fx.c", "SolarizeImage", 4866UL, "%s",
                   image->filename);
    }
  }
#line 4845
  fprintf(_coverage_fout, "2901\n");
#line 4845
  fflush(_coverage_fout);
#line 4867
  if ((int )image->storage_class == 2) {
#line 4867
    fprintf(_coverage_fout, "2864\n");
#line 4867
    fflush(_coverage_fout);
#line 4875
    i = 0L;
#line 4867
    fprintf(_coverage_fout, "2865\n");
#line 4867
    fflush(_coverage_fout);
#line 4875
    while (1) {
#line 4875
      fprintf(_coverage_fout, "2859\n");
#line 4875
      fflush(_coverage_fout);
#line 4875
      if (! (i < (long )image->colors)) {
#line 4875
        break;
      }
#line 4875
      fprintf(_coverage_fout, "2860\n");
#line 4875
      fflush(_coverage_fout);
#line 4877
      if ((double )(image->colormap + i)->red > threshold) {
#line 4877
        fprintf(_coverage_fout, "2856\n");
#line 4877
        fflush(_coverage_fout);
#line 4878
        (image->colormap + i)->red = (unsigned short )(65535 - (int )(image->colormap + i)->red);
      }
#line 4875
      fprintf(_coverage_fout, "2861\n");
#line 4875
      fflush(_coverage_fout);
#line 4879
      if ((double )(image->colormap + i)->green > threshold) {
#line 4879
        fprintf(_coverage_fout, "2857\n");
#line 4879
        fflush(_coverage_fout);
#line 4880
        (image->colormap + i)->green = (unsigned short )(65535 - (int )(image->colormap + i)->green);
      }
#line 4875
      fprintf(_coverage_fout, "2862\n");
#line 4875
      fflush(_coverage_fout);
#line 4882
      if ((double )(image->colormap + i)->blue > threshold) {
#line 4882
        fprintf(_coverage_fout, "2858\n");
#line 4882
        fflush(_coverage_fout);
#line 4883
        (image->colormap + i)->blue = (unsigned short )(65535 - (int )(image->colormap + i)->blue);
      }
#line 4875
      fprintf(_coverage_fout, "2863\n");
#line 4875
      fflush(_coverage_fout);
#line 4875
      i ++;
    }
  }
  {
#line 4890
  fprintf(_coverage_fout, "2866\n");
#line 4890
  fflush(_coverage_fout);
#line 4890
  status = 1;
#line 4890
  fprintf(_coverage_fout, "2867\n");
#line 4890
  fflush(_coverage_fout);
#line 4891
  progress = 0L;
#line 4890
  fprintf(_coverage_fout, "2868\n");
#line 4890
  fflush(_coverage_fout);
#line 4892
  exception = & image->exception;
#line 4890
  fprintf(_coverage_fout, "2869\n");
#line 4890
  fflush(_coverage_fout);
#line 4893
  image_view = AcquireCacheView((Image const   *)image);
#line 4890
  fprintf(_coverage_fout, "2870\n");
#line 4890
  fflush(_coverage_fout);
#line 4897
  y = 0L;
  }
#line 4845
  fprintf(_coverage_fout, "2902\n");
#line 4845
  fflush(_coverage_fout);
#line 4897
  while (1) {
#line 4897
    fprintf(_coverage_fout, "2889\n");
#line 4897
    fflush(_coverage_fout);
#line 4897
    if (! (y < (long )image->rows)) {
#line 4897
      break;
    }
#line 4897
    fprintf(_coverage_fout, "2890\n");
#line 4897
    fflush(_coverage_fout);
#line 4905
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 4907
    fprintf(_coverage_fout, "2871\n");
#line 4907
    fflush(_coverage_fout);
#line 4907
    tmp = GetCacheViewAuthenticPixels(image_view, 0L, y, image->columns, 1UL,
                                      exception);
#line 4907
    fprintf(_coverage_fout, "2872\n");
#line 4907
    fflush(_coverage_fout);
#line 4907
    q = (PixelPacket */* __restrict  */)tmp;
    }
#line 4897
    fprintf(_coverage_fout, "2891\n");
#line 4897
    fflush(_coverage_fout);
#line 4909
    if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 4909
      fprintf(_coverage_fout, "2873\n");
#line 4909
      fflush(_coverage_fout);
#line 4911
      status = 0;
      goto __Cont;
    }
#line 4897
    fprintf(_coverage_fout, "2892\n");
#line 4897
    fflush(_coverage_fout);
#line 4914
    x = 0L;
#line 4897
    fprintf(_coverage_fout, "2893\n");
#line 4897
    fflush(_coverage_fout);
#line 4914
    while (1) {
#line 4914
      fprintf(_coverage_fout, "2877\n");
#line 4914
      fflush(_coverage_fout);
#line 4914
      if (! (x < (long )image->columns)) {
#line 4914
        break;
      }
#line 4914
      fprintf(_coverage_fout, "2878\n");
#line 4914
      fflush(_coverage_fout);
#line 4916
      if ((double )q->red > threshold) {
#line 4916
        fprintf(_coverage_fout, "2874\n");
#line 4916
        fflush(_coverage_fout);
#line 4917
        q->red = (unsigned short )(65535 - (int )q->red);
      }
#line 4914
      fprintf(_coverage_fout, "2879\n");
#line 4914
      fflush(_coverage_fout);
#line 4918
      if ((double )q->green > threshold) {
#line 4918
        fprintf(_coverage_fout, "2875\n");
#line 4918
        fflush(_coverage_fout);
#line 4919
        q->green = (unsigned short )(65535 - (int )q->green);
      }
#line 4914
      fprintf(_coverage_fout, "2880\n");
#line 4914
      fflush(_coverage_fout);
#line 4920
      if ((double )q->blue > threshold) {
#line 4920
        fprintf(_coverage_fout, "2876\n");
#line 4920
        fflush(_coverage_fout);
#line 4921
        q->blue = (unsigned short )(65535 - (int )q->blue);
      }
#line 4914
      fprintf(_coverage_fout, "2881\n");
#line 4914
      fflush(_coverage_fout);
#line 4922
      q ++;
#line 4914
      x ++;
    }
    {
#line 4924
    fprintf(_coverage_fout, "2882\n");
#line 4924
    fflush(_coverage_fout);
#line 4924
    tmp___0 = SyncCacheViewAuthenticPixels(image_view, exception);
    }
#line 4897
    fprintf(_coverage_fout, "2894\n");
#line 4897
    fflush(_coverage_fout);
#line 4924
    if ((int )tmp___0 == 0) {
#line 4924
      fprintf(_coverage_fout, "2883\n");
#line 4924
      fflush(_coverage_fout);
#line 4925
      status = 0;
    }
#line 4897
    fprintf(_coverage_fout, "2895\n");
#line 4897
    fflush(_coverage_fout);
#line 4926
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 4934
      fprintf(_coverage_fout, "2884\n");
#line 4934
      fflush(_coverage_fout);
#line 4934
      tmp___1 = progress;
#line 4934
      fprintf(_coverage_fout, "2885\n");
#line 4934
      fflush(_coverage_fout);
#line 4934
      progress ++;
#line 4934
      fprintf(_coverage_fout, "2886\n");
#line 4934
      fflush(_coverage_fout);
#line 4934
      proceed = SetImageProgress((Image const   *)image, "Solarize/Image",
                                 (long long )tmp___1,
                                 (unsigned long long )image->rows);
      }
#line 4926
      fprintf(_coverage_fout, "2888\n");
#line 4926
      fflush(_coverage_fout);
#line 4935
      if ((int )proceed == 0) {
#line 4935
        fprintf(_coverage_fout, "2887\n");
#line 4935
        fflush(_coverage_fout);
#line 4936
        status = 0;
      }
    }
#line 4897
    fprintf(_coverage_fout, "2896\n");
#line 4897
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 4897
    y ++;
  }
  {
#line 4939
  fprintf(_coverage_fout, "2897\n");
#line 4939
  fflush(_coverage_fout);
#line 4939
  image_view = DestroyCacheView(image_view);
  }
#line 4845
  fprintf(_coverage_fout, "2903\n");
#line 4845
  fflush(_coverage_fout);
#line 4940
  return (status);
}
}
#line 4972 "magick/fx.c"
Image *SteganoImage(Image const   *image , Image const   *watermark ,
                    ExceptionInfo *exception ) 
{ Image *stegano_image ;
  int c ;
  long i ;
  long j ;
  long k ;
  long y ;
  MagickBooleanType status ;
  PixelPacket pixel ;
  register long x ;
  register PixelPacket *q ;
  unsigned long depth ;
  MagickBooleanType tmp ;
  Quantum tmp___0 ;
  unsigned long tmp___1 ;
  Quantum tmp___2 ;
  Quantum tmp___3 ;
  unsigned long tmp___4 ;
  Quantum tmp___5 ;
  Quantum tmp___6 ;
  unsigned long tmp___7 ;
  Quantum tmp___8 ;
  MagickBooleanType tmp___9 ;
  MagickBooleanType tmp___10 ;

  {
#line 4972
  fprintf(_coverage_fout, "2965\n");
#line 4972
  fflush(_coverage_fout);
#line 5012
  if (! ((unsigned long )image != (unsigned long )((Image const   *)((void *)0)))) {
    {
#line 5012
    fprintf(_coverage_fout, "2904\n");
#line 5012
    fflush(_coverage_fout);
#line 5012
    __assert_fail("image != (const Image *) ((void *)0)", "magick/fx.c", 5012U,
                  "SteganoImage");
    }
  }
#line 4972
  fprintf(_coverage_fout, "2966\n");
#line 4972
  fflush(_coverage_fout);
#line 5013
  if (! (image->signature == 2880220587UL)) {
    {
#line 5013
    fprintf(_coverage_fout, "2905\n");
#line 5013
    fflush(_coverage_fout);
#line 5013
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 5013U,
                  "SteganoImage");
    }
  }
#line 4972
  fprintf(_coverage_fout, "2967\n");
#line 4972
  fflush(_coverage_fout);
#line 5014
  if ((int const   )image->debug != 0) {
    {
#line 5015
    fprintf(_coverage_fout, "2906\n");
#line 5015
    fflush(_coverage_fout);
#line 5015
    LogMagickEvent(1, "magick/fx.c", "SteganoImage", 5015UL, "%s",
                   image->filename);
    }
  }
#line 4972
  fprintf(_coverage_fout, "2968\n");
#line 4972
  fflush(_coverage_fout);
#line 5016
  if (! ((unsigned long )watermark != (unsigned long )((Image const   *)((void *)0)))) {
    {
#line 5016
    fprintf(_coverage_fout, "2907\n");
#line 5016
    fflush(_coverage_fout);
#line 5016
    __assert_fail("watermark != (const Image *) ((void *)0)", "magick/fx.c",
                  5016U, "SteganoImage");
    }
  }
#line 4972
  fprintf(_coverage_fout, "2969\n");
#line 4972
  fflush(_coverage_fout);
#line 5017
  if (! (watermark->signature == 2880220587UL)) {
    {
#line 5017
    fprintf(_coverage_fout, "2908\n");
#line 5017
    fflush(_coverage_fout);
#line 5017
    __assert_fail("watermark->signature == 0xabacadabUL", "magick/fx.c", 5017U,
                  "SteganoImage");
    }
  }
#line 4972
  fprintf(_coverage_fout, "2970\n");
#line 4972
  fflush(_coverage_fout);
#line 5018
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 5018
    fprintf(_coverage_fout, "2909\n");
#line 5018
    fflush(_coverage_fout);
#line 5018
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  5018U, "SteganoImage");
    }
  }
#line 4972
  fprintf(_coverage_fout, "2971\n");
#line 4972
  fflush(_coverage_fout);
#line 5019
  if (! (exception->signature == 2880220587UL)) {
    {
#line 5019
    fprintf(_coverage_fout, "2910\n");
#line 5019
    fflush(_coverage_fout);
#line 5019
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 5019U,
                  "SteganoImage");
    }
  }
  {
#line 5020
  fprintf(_coverage_fout, "2911\n");
#line 5020
  fflush(_coverage_fout);
#line 5020
  stegano_image = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 4972
  fprintf(_coverage_fout, "2972\n");
#line 4972
  fflush(_coverage_fout);
#line 5021
  if ((unsigned long )stegano_image == (unsigned long )((Image *)((void *)0))) {
#line 5021
    fprintf(_coverage_fout, "2912\n");
#line 5021
    fflush(_coverage_fout);
#line 5022
    return ((Image *)((void *)0));
  }
  {
#line 5023
  fprintf(_coverage_fout, "2913\n");
#line 5023
  fflush(_coverage_fout);
#line 5023
  tmp = SetImageStorageClass(stegano_image, 1);
  }
#line 4972
  fprintf(_coverage_fout, "2973\n");
#line 4972
  fflush(_coverage_fout);
#line 5023
  if ((int )tmp == 0) {
    {
#line 5025
    fprintf(_coverage_fout, "2914\n");
#line 5025
    fflush(_coverage_fout);
#line 5025
    InheritException(exception,
                     (ExceptionInfo const   *)(& stegano_image->exception));
#line 5025
    fprintf(_coverage_fout, "2915\n");
#line 5025
    fflush(_coverage_fout);
#line 5026
    stegano_image = DestroyImage(stegano_image);
    }
#line 5023
    fprintf(_coverage_fout, "2916\n");
#line 5023
    fflush(_coverage_fout);
#line 5027
    return ((Image *)((void *)0));
  }
#line 4972
  fprintf(_coverage_fout, "2974\n");
#line 4972
  fflush(_coverage_fout);
#line 5029
  stegano_image->depth = 16UL;
#line 5033
  c = 0;
#line 5034
  i = 0L;
#line 5035
  j = 0L;
#line 5036
  depth = stegano_image->depth;
#line 5037
  k = (long )image->offset;
#line 5038
  i = (long )(depth - 1UL);
#line 4972
  fprintf(_coverage_fout, "2975\n");
#line 4972
  fflush(_coverage_fout);
#line 5038
  while (1) {
#line 5038
    fprintf(_coverage_fout, "2959\n");
#line 5038
    fflush(_coverage_fout);
#line 5038
    if (i >= 0L) {
#line 5038
      fprintf(_coverage_fout, "2917\n");
#line 5038
      fflush(_coverage_fout);
#line 5038
      if (! (j < (long )depth)) {
#line 5038
        break;
      }
    } else {
#line 5038
      break;
    }
#line 5038
    fprintf(_coverage_fout, "2960\n");
#line 5038
    fflush(_coverage_fout);
#line 5040
    y = 0L;
#line 5038
    fprintf(_coverage_fout, "2961\n");
#line 5038
    fflush(_coverage_fout);
#line 5040
    while (1) {
#line 5040
      fprintf(_coverage_fout, "2951\n");
#line 5040
      fflush(_coverage_fout);
#line 5040
      if (y < (long )watermark->rows) {
#line 5040
        fprintf(_coverage_fout, "2918\n");
#line 5040
        fflush(_coverage_fout);
#line 5040
        if (! (j < (long )depth)) {
#line 5040
          break;
        }
      } else {
#line 5040
        break;
      }
#line 5040
      fprintf(_coverage_fout, "2952\n");
#line 5040
      fflush(_coverage_fout);
#line 5042
      x = 0L;
#line 5040
      fprintf(_coverage_fout, "2953\n");
#line 5040
      fflush(_coverage_fout);
#line 5042
      while (1) {
#line 5042
        fprintf(_coverage_fout, "2941\n");
#line 5042
        fflush(_coverage_fout);
#line 5042
        if (x < (long )watermark->columns) {
#line 5042
          fprintf(_coverage_fout, "2919\n");
#line 5042
          fflush(_coverage_fout);
#line 5042
          if (! (j < (long )depth)) {
#line 5042
            break;
          }
        } else {
#line 5042
          break;
        }
        {
#line 5044
        fprintf(_coverage_fout, "2920\n");
#line 5044
        fflush(_coverage_fout);
#line 5044
        GetOneVirtualPixel(watermark, x, y, & pixel, exception);
        }
#line 5042
        fprintf(_coverage_fout, "2942\n");
#line 5042
        fflush(_coverage_fout);
#line 5045
        if (k / (long )stegano_image->columns >= (long )stegano_image->rows) {
#line 5046
          break;
        }
        {
#line 5047
        fprintf(_coverage_fout, "2921\n");
#line 5047
        fflush(_coverage_fout);
#line 5047
        q = GetAuthenticPixels(stegano_image, k % (long )stegano_image->columns,
                               k / (long )stegano_image->columns, 1UL, 1UL,
                               exception);
        }
#line 5042
        fprintf(_coverage_fout, "2943\n");
#line 5042
        fflush(_coverage_fout);
#line 5049
        if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 5050
          break;
        }
#line 5051
        switch (c) {
        case 0: 
        {
#line 5055
        fprintf(_coverage_fout, "2922\n");
#line 5055
        fflush(_coverage_fout);
#line 5055
        tmp___2 = PixelIntensityToQuantum((PixelPacket const   *)(& pixel));
        }
#line 5051
        fprintf(_coverage_fout, "2931\n");
#line 5051
        fflush(_coverage_fout);
#line 5055
        if ((((unsigned long )tmp___2 >> (unsigned long )i) & 1UL) != 0UL) {
#line 5055
          fprintf(_coverage_fout, "2923\n");
#line 5055
          fflush(_coverage_fout);
#line 5055
          tmp___1 = (unsigned long )q->red | (1UL << (unsigned long )j);
        } else {
#line 5055
          fprintf(_coverage_fout, "2924\n");
#line 5055
          fflush(_coverage_fout);
#line 5055
          tmp___1 = (unsigned long )q->red & ~ (1UL << (unsigned long )j);
        }
#line 5051
        fprintf(_coverage_fout, "2932\n");
#line 5051
        fflush(_coverage_fout);
#line 5055
        q->red = (unsigned short )tmp___1;
#line 5056
        break;
        case 1: 
        {
#line 5060
        fprintf(_coverage_fout, "2925\n");
#line 5060
        fflush(_coverage_fout);
#line 5060
        tmp___5 = PixelIntensityToQuantum((PixelPacket const   *)(& pixel));
        }
#line 5051
        fprintf(_coverage_fout, "2933\n");
#line 5051
        fflush(_coverage_fout);
#line 5060
        if ((((unsigned long )tmp___5 >> (unsigned long )i) & 1UL) != 0UL) {
#line 5060
          fprintf(_coverage_fout, "2926\n");
#line 5060
          fflush(_coverage_fout);
#line 5060
          tmp___4 = (unsigned long )q->green | (1UL << (unsigned long )j);
        } else {
#line 5060
          fprintf(_coverage_fout, "2927\n");
#line 5060
          fflush(_coverage_fout);
#line 5060
          tmp___4 = (unsigned long )q->green & ~ (1UL << (unsigned long )j);
        }
#line 5051
        fprintf(_coverage_fout, "2934\n");
#line 5051
        fflush(_coverage_fout);
#line 5060
        q->green = (unsigned short )tmp___4;
#line 5061
        break;
        case 2: 
        {
#line 5065
        fprintf(_coverage_fout, "2928\n");
#line 5065
        fflush(_coverage_fout);
#line 5065
        tmp___8 = PixelIntensityToQuantum((PixelPacket const   *)(& pixel));
        }
#line 5051
        fprintf(_coverage_fout, "2935\n");
#line 5051
        fflush(_coverage_fout);
#line 5065
        if ((((unsigned long )tmp___8 >> (unsigned long )i) & 1UL) != 0UL) {
#line 5065
          fprintf(_coverage_fout, "2929\n");
#line 5065
          fflush(_coverage_fout);
#line 5065
          tmp___7 = (unsigned long )q->blue | (1UL << (unsigned long )j);
        } else {
#line 5065
          fprintf(_coverage_fout, "2930\n");
#line 5065
          fflush(_coverage_fout);
#line 5065
          tmp___7 = (unsigned long )q->blue & ~ (1UL << (unsigned long )j);
        }
#line 5051
        fprintf(_coverage_fout, "2936\n");
#line 5051
        fflush(_coverage_fout);
#line 5065
        q->blue = (unsigned short )tmp___7;
#line 5066
        break;
        }
        {
#line 5069
        fprintf(_coverage_fout, "2937\n");
#line 5069
        fflush(_coverage_fout);
#line 5069
        tmp___9 = SyncAuthenticPixels(stegano_image, exception);
        }
#line 5042
        fprintf(_coverage_fout, "2944\n");
#line 5042
        fflush(_coverage_fout);
#line 5069
        if ((int )tmp___9 == 0) {
#line 5070
          break;
        }
#line 5042
        fprintf(_coverage_fout, "2945\n");
#line 5042
        fflush(_coverage_fout);
#line 5071
        c ++;
#line 5042
        fprintf(_coverage_fout, "2946\n");
#line 5042
        fflush(_coverage_fout);
#line 5072
        if (c == 3) {
#line 5072
          fprintf(_coverage_fout, "2938\n");
#line 5072
          fflush(_coverage_fout);
#line 5073
          c = 0;
        }
#line 5042
        fprintf(_coverage_fout, "2947\n");
#line 5042
        fflush(_coverage_fout);
#line 5074
        k ++;
#line 5042
        fprintf(_coverage_fout, "2948\n");
#line 5042
        fflush(_coverage_fout);
#line 5075
        if (k == (long )(stegano_image->columns * stegano_image->columns)) {
#line 5075
          fprintf(_coverage_fout, "2939\n");
#line 5075
          fflush(_coverage_fout);
#line 5076
          k = 0L;
        }
#line 5042
        fprintf(_coverage_fout, "2949\n");
#line 5042
        fflush(_coverage_fout);
#line 5077
        if (k == (long )image->offset) {
#line 5077
          fprintf(_coverage_fout, "2940\n");
#line 5077
          fflush(_coverage_fout);
#line 5078
          j ++;
        }
#line 5042
        fprintf(_coverage_fout, "2950\n");
#line 5042
        fflush(_coverage_fout);
#line 5042
        x ++;
      }
#line 5040
      fprintf(_coverage_fout, "2954\n");
#line 5040
      fflush(_coverage_fout);
#line 5040
      y ++;
    }
#line 5038
    fprintf(_coverage_fout, "2962\n");
#line 5038
    fflush(_coverage_fout);
#line 5081
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 5081
      fprintf(_coverage_fout, "2955\n");
#line 5081
      fflush(_coverage_fout);
#line 5081
      tmp___10 = QuantumTick((long long )(depth - (unsigned long )i),
                             (unsigned long long )depth);
      }
#line 5081
      fprintf(_coverage_fout, "2958\n");
#line 5081
      fflush(_coverage_fout);
#line 5081
      if ((int )tmp___10 != 0) {
        {
#line 5084
        fprintf(_coverage_fout, "2956\n");
#line 5084
        fflush(_coverage_fout);
#line 5084
        status = (*(image->progress_monitor))("Stegano/Image",
                                              (long long )(depth - (unsigned long )i),
                                              (unsigned long long )depth,
                                              (void *)image->client_data);
        }
#line 5081
        fprintf(_coverage_fout, "2957\n");
#line 5081
        fflush(_coverage_fout);
#line 5086
        if ((int )status == 0) {
#line 5087
          break;
        }
      }
    }
#line 5038
    fprintf(_coverage_fout, "2963\n");
#line 5038
    fflush(_coverage_fout);
#line 5038
    i --;
  }
#line 4972
  fprintf(_coverage_fout, "2976\n");
#line 4972
  fflush(_coverage_fout);
#line 5090
  if ((int )stegano_image->storage_class == 2) {
    {
#line 5091
    fprintf(_coverage_fout, "2964\n");
#line 5091
    fflush(_coverage_fout);
#line 5091
    SyncImage(stegano_image);
    }
  }
#line 4972
  fprintf(_coverage_fout, "2977\n");
#line 4972
  fflush(_coverage_fout);
#line 5092
  return (stegano_image);
}
}
#line 5134 "magick/fx.c"
Image *StereoImage(Image const   *left_image , Image const   *right_image ,
                   ExceptionInfo *exception ) 
{ Image *tmp ;

  {
  {
#line 5137
  fprintf(_coverage_fout, "2978\n");
#line 5137
  fflush(_coverage_fout);
#line 5137
  tmp = StereoAnaglyphImage(left_image, right_image, 0L, 0L, exception);
  }
#line 5134
  fprintf(_coverage_fout, "2979\n");
#line 5134
  fflush(_coverage_fout);
#line 5137
  return (tmp);
}
}
#line 5140 "magick/fx.c"
Image *StereoAnaglyphImage(Image const   *left_image ,
                           Image const   *right_image , long x_offset ,
                           long y_offset , ExceptionInfo *exception ) 
{ Image const   *image ;
  Image *stereo_image ;
  long y ;
  MagickBooleanType status ;
  char const   *tmp ;
  MagickBooleanType tmp___0 ;
  register PixelPacket const   * __restrict  p ;
  register PixelPacket const   * __restrict  q ;
  register long x ;
  register PixelPacket * __restrict  r ;
  PixelPacket const   *tmp___1 ;
  PixelPacket const   *tmp___2 ;
  PixelPacket *tmp___3 ;
  MagickBooleanType tmp___4 ;
  MagickBooleanType tmp___5 ;

  {
#line 5140
  fprintf(_coverage_fout, "3022\n");
#line 5140
  fflush(_coverage_fout);
#line 5158
  if (! ((unsigned long )left_image != (unsigned long )((Image const   *)((void *)0)))) {
    {
#line 5158
    fprintf(_coverage_fout, "2980\n");
#line 5158
    fflush(_coverage_fout);
#line 5158
    __assert_fail("left_image != (const Image *) ((void *)0)", "magick/fx.c",
                  5158U, "StereoAnaglyphImage");
    }
  }
#line 5140
  fprintf(_coverage_fout, "3023\n");
#line 5140
  fflush(_coverage_fout);
#line 5159
  if (! (left_image->signature == 2880220587UL)) {
    {
#line 5159
    fprintf(_coverage_fout, "2981\n");
#line 5159
    fflush(_coverage_fout);
#line 5159
    __assert_fail("left_image->signature == 0xabacadabUL", "magick/fx.c", 5159U,
                  "StereoAnaglyphImage");
    }
  }
#line 5140
  fprintf(_coverage_fout, "3024\n");
#line 5140
  fflush(_coverage_fout);
#line 5160
  if ((int const   )left_image->debug != 0) {
    {
#line 5161
    fprintf(_coverage_fout, "2982\n");
#line 5161
    fflush(_coverage_fout);
#line 5161
    LogMagickEvent(1, "magick/fx.c", "StereoAnaglyphImage", 5161UL, "%s",
                   left_image->filename);
    }
  }
#line 5140
  fprintf(_coverage_fout, "3025\n");
#line 5140
  fflush(_coverage_fout);
#line 5163
  if (! ((unsigned long )right_image != (unsigned long )((Image const   *)((void *)0)))) {
    {
#line 5163
    fprintf(_coverage_fout, "2983\n");
#line 5163
    fflush(_coverage_fout);
#line 5163
    __assert_fail("right_image != (const Image *) ((void *)0)", "magick/fx.c",
                  5163U, "StereoAnaglyphImage");
    }
  }
#line 5140
  fprintf(_coverage_fout, "3026\n");
#line 5140
  fflush(_coverage_fout);
#line 5164
  if (! (right_image->signature == 2880220587UL)) {
    {
#line 5164
    fprintf(_coverage_fout, "2984\n");
#line 5164
    fflush(_coverage_fout);
#line 5164
    __assert_fail("right_image->signature == 0xabacadabUL", "magick/fx.c",
                  5164U, "StereoAnaglyphImage");
    }
  }
#line 5140
  fprintf(_coverage_fout, "3027\n");
#line 5140
  fflush(_coverage_fout);
#line 5165
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 5165
    fprintf(_coverage_fout, "2985\n");
#line 5165
    fflush(_coverage_fout);
#line 5165
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  5165U, "StereoAnaglyphImage");
    }
  }
#line 5140
  fprintf(_coverage_fout, "3028\n");
#line 5140
  fflush(_coverage_fout);
#line 5166
  if (! (exception->signature == 2880220587UL)) {
    {
#line 5166
    fprintf(_coverage_fout, "2986\n");
#line 5166
    fflush(_coverage_fout);
#line 5166
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 5166U,
                  "StereoAnaglyphImage");
    }
  }
#line 5140
  fprintf(_coverage_fout, "3029\n");
#line 5140
  fflush(_coverage_fout);
#line 5167
  if (! ((unsigned long )right_image != (unsigned long )((Image const   *)((void *)0)))) {
    {
#line 5167
    fprintf(_coverage_fout, "2987\n");
#line 5167
    fflush(_coverage_fout);
#line 5167
    __assert_fail("right_image != (const Image *) ((void *)0)", "magick/fx.c",
                  5167U, "StereoAnaglyphImage");
    }
  }
#line 5140
  fprintf(_coverage_fout, "3030\n");
#line 5140
  fflush(_coverage_fout);
#line 5168
  image = left_image;
#line 5140
  fprintf(_coverage_fout, "3031\n");
#line 5140
  fflush(_coverage_fout);
#line 5169
  if (left_image->columns != right_image->columns) {
    goto _L;
  } else {
#line 5169
    fprintf(_coverage_fout, "2993\n");
#line 5169
    fflush(_coverage_fout);
#line 5169
    if (left_image->rows != right_image->rows) {
#line 5169
      fprintf(_coverage_fout, "2991\n");
#line 5169
      fflush(_coverage_fout);
      _L: /* CIL Label */ 
#line 5171
      if ((unsigned long )"LeftAndRightImageSizesDiffer" == (unsigned long )((char const   *)((void *)0))) {
#line 5171
        fprintf(_coverage_fout, "2988\n");
#line 5171
        fflush(_coverage_fout);
#line 5171
        tmp = "unknown";
      } else {
#line 5171
        fprintf(_coverage_fout, "2989\n");
#line 5171
        fflush(_coverage_fout);
#line 5171
        tmp = "LeftAndRightImageSizesDiffer";
      }
      {
#line 5171
      fprintf(_coverage_fout, "2990\n");
#line 5171
      fflush(_coverage_fout);
#line 5171
      ThrowMagickException(exception, "magick/fx.c", "StereoAnaglyphImage",
                           5171UL, 465, tmp, "`%s\'", image->filename);
      }
#line 5169
      fprintf(_coverage_fout, "2992\n");
#line 5169
      fflush(_coverage_fout);
#line 5171
      return ((Image *)((void *)0));
    }
  }
  {
#line 5175
  fprintf(_coverage_fout, "2994\n");
#line 5175
  fflush(_coverage_fout);
#line 5175
  stereo_image = CloneImage(left_image, (unsigned long )left_image->columns,
                            (unsigned long )left_image->rows, 1, exception);
  }
#line 5140
  fprintf(_coverage_fout, "3032\n");
#line 5140
  fflush(_coverage_fout);
#line 5177
  if ((unsigned long )stereo_image == (unsigned long )((Image *)((void *)0))) {
#line 5177
    fprintf(_coverage_fout, "2995\n");
#line 5177
    fflush(_coverage_fout);
#line 5178
    return ((Image *)((void *)0));
  }
  {
#line 5179
  fprintf(_coverage_fout, "2996\n");
#line 5179
  fflush(_coverage_fout);
#line 5179
  tmp___0 = SetImageStorageClass(stereo_image, 1);
  }
#line 5140
  fprintf(_coverage_fout, "3033\n");
#line 5140
  fflush(_coverage_fout);
#line 5179
  if ((int )tmp___0 == 0) {
    {
#line 5181
    fprintf(_coverage_fout, "2997\n");
#line 5181
    fflush(_coverage_fout);
#line 5181
    InheritException(exception,
                     (ExceptionInfo const   *)(& stereo_image->exception));
#line 5181
    fprintf(_coverage_fout, "2998\n");
#line 5181
    fflush(_coverage_fout);
#line 5182
    stereo_image = DestroyImage(stereo_image);
    }
#line 5179
    fprintf(_coverage_fout, "2999\n");
#line 5179
    fflush(_coverage_fout);
#line 5183
    return ((Image *)((void *)0));
  }
#line 5140
  fprintf(_coverage_fout, "3034\n");
#line 5140
  fflush(_coverage_fout);
#line 5188
  y = 0L;
#line 5140
  fprintf(_coverage_fout, "3035\n");
#line 5140
  fflush(_coverage_fout);
#line 5188
  while (1) {
#line 5188
    fprintf(_coverage_fout, "3015\n");
#line 5188
    fflush(_coverage_fout);
#line 5188
    if (! (y < (long )stereo_image->rows)) {
#line 5188
      break;
    }
    {
#line 5200
    fprintf(_coverage_fout, "3000\n");
#line 5200
    fflush(_coverage_fout);
#line 5200
    tmp___1 = GetVirtualPixels(left_image, - x_offset, y - y_offset,
                               (unsigned long )image->columns, 1UL, exception);
#line 5200
    fprintf(_coverage_fout, "3001\n");
#line 5200
    fflush(_coverage_fout);
#line 5200
    p = (PixelPacket const   */* __restrict  */)tmp___1;
#line 5200
    fprintf(_coverage_fout, "3002\n");
#line 5200
    fflush(_coverage_fout);
#line 5202
    tmp___2 = GetVirtualPixels(right_image, 0L, y,
                               (unsigned long )right_image->columns, 1UL,
                               exception);
#line 5200
    fprintf(_coverage_fout, "3003\n");
#line 5200
    fflush(_coverage_fout);
#line 5202
    q = (PixelPacket const   */* __restrict  */)tmp___2;
#line 5200
    fprintf(_coverage_fout, "3004\n");
#line 5200
    fflush(_coverage_fout);
#line 5203
    tmp___3 = QueueAuthenticPixels(stereo_image, 0L, y, stereo_image->columns,
                                   1UL, exception);
#line 5200
    fprintf(_coverage_fout, "3005\n");
#line 5200
    fflush(_coverage_fout);
#line 5203
    r = (PixelPacket */* __restrict  */)tmp___3;
    }
#line 5188
    fprintf(_coverage_fout, "3016\n");
#line 5188
    fflush(_coverage_fout);
#line 5204
    if ((unsigned long )p == (unsigned long )((PixelPacket *)((void *)0))) {
#line 5206
      break;
    } else {
#line 5204
      fprintf(_coverage_fout, "3007\n");
#line 5204
      fflush(_coverage_fout);
#line 5204
      if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 5206
        break;
      } else {
#line 5204
        fprintf(_coverage_fout, "3006\n");
#line 5204
        fflush(_coverage_fout);
#line 5204
        if ((unsigned long )r == (unsigned long )((PixelPacket *)((void *)0))) {
#line 5206
          break;
        }
      }
    }
#line 5188
    fprintf(_coverage_fout, "3017\n");
#line 5188
    fflush(_coverage_fout);
#line 5207
    x = 0L;
#line 5188
    fprintf(_coverage_fout, "3018\n");
#line 5188
    fflush(_coverage_fout);
#line 5207
    while (1) {
#line 5207
      fprintf(_coverage_fout, "3008\n");
#line 5207
      fflush(_coverage_fout);
#line 5207
      if (! (x < (long )stereo_image->columns)) {
#line 5207
        break;
      }
#line 5207
      fprintf(_coverage_fout, "3009\n");
#line 5207
      fflush(_coverage_fout);
#line 5209
      r->red = (unsigned short )p->red;
#line 5210
      r->green = (unsigned short )q->green;
#line 5211
      r->blue = (unsigned short )q->blue;
#line 5212
      r->opacity = (unsigned short )(((int const   )p->opacity + (int const   )q->opacity) / 2);
#line 5213
      p ++;
#line 5214
      q ++;
#line 5215
      r ++;
#line 5207
      x ++;
    }
    {
#line 5217
    fprintf(_coverage_fout, "3010\n");
#line 5217
    fflush(_coverage_fout);
#line 5217
    tmp___4 = SyncAuthenticPixels(stereo_image, exception);
    }
#line 5188
    fprintf(_coverage_fout, "3019\n");
#line 5188
    fflush(_coverage_fout);
#line 5217
    if ((int )tmp___4 == 0) {
#line 5218
      break;
    }
#line 5188
    fprintf(_coverage_fout, "3020\n");
#line 5188
    fflush(_coverage_fout);
#line 5219
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 5219
      fprintf(_coverage_fout, "3011\n");
#line 5219
      fflush(_coverage_fout);
#line 5219
      tmp___5 = QuantumTick((long long )y, (unsigned long long )image->rows);
      }
#line 5219
      fprintf(_coverage_fout, "3014\n");
#line 5219
      fflush(_coverage_fout);
#line 5219
      if ((int )tmp___5 != 0) {
        {
#line 5222
        fprintf(_coverage_fout, "3012\n");
#line 5222
        fflush(_coverage_fout);
#line 5222
        status = (*(image->progress_monitor))("Stereo/Image", (long long )y,
                                              (unsigned long long )stereo_image->rows,
                                              stereo_image->client_data);
        }
#line 5219
        fprintf(_coverage_fout, "3013\n");
#line 5219
        fflush(_coverage_fout);
#line 5224
        if ((int )status == 0) {
#line 5225
          break;
        }
      }
    }
#line 5188
    fprintf(_coverage_fout, "3021\n");
#line 5188
    fflush(_coverage_fout);
#line 5188
    y ++;
  }
#line 5140
  fprintf(_coverage_fout, "3036\n");
#line 5140
  fflush(_coverage_fout);
#line 5228
  return (stereo_image);
}
}
#line 5260 "magick/fx.c"
Image *SwirlImage(Image const   *image , double degrees ,
                  ExceptionInfo *exception ) 
{ Image *swirl_image ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  MagickPixelPacket zero ;
  MagickRealType radius ;
  PointInfo center ;
  PointInfo scale ;
  ResampleFilter **resample_filter ;
  ViewInfo *image_view ;
  ViewInfo *swirl_view ;
  MagickBooleanType tmp ;
  double tmp___0 ;
  MagickPixelPacket pixel ;
  MagickRealType distance ;
  PointInfo delta ;
  register IndexPacket * __restrict  swirl_indexes ;
  register long id ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket *tmp___1 ;
  IndexPacket *tmp___2 ;
  MagickRealType cosine ;
  MagickRealType factor ;
  MagickRealType sine ;
  double tmp___3 ;
  MagickBooleanType tmp___4 ;
  MagickBooleanType proceed ;
  long tmp___5 ;

  {
#line 5260
  fprintf(_coverage_fout, "3103\n");
#line 5260
  fflush(_coverage_fout);
#line 5295
  if (! ((unsigned long )image != (unsigned long )((Image const   *)((void *)0)))) {
    {
#line 5295
    fprintf(_coverage_fout, "3037\n");
#line 5295
    fflush(_coverage_fout);
#line 5295
    __assert_fail("image != (const Image *) ((void *)0)", "magick/fx.c", 5295U,
                  "SwirlImage");
    }
  }
#line 5260
  fprintf(_coverage_fout, "3104\n");
#line 5260
  fflush(_coverage_fout);
#line 5296
  if (! (image->signature == 2880220587UL)) {
    {
#line 5296
    fprintf(_coverage_fout, "3038\n");
#line 5296
    fflush(_coverage_fout);
#line 5296
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 5296U,
                  "SwirlImage");
    }
  }
#line 5260
  fprintf(_coverage_fout, "3105\n");
#line 5260
  fflush(_coverage_fout);
#line 5297
  if ((int const   )image->debug != 0) {
    {
#line 5298
    fprintf(_coverage_fout, "3039\n");
#line 5298
    fflush(_coverage_fout);
#line 5298
    LogMagickEvent(1, "magick/fx.c", "SwirlImage", 5298UL, "%s", image->filename);
    }
  }
#line 5260
  fprintf(_coverage_fout, "3106\n");
#line 5260
  fflush(_coverage_fout);
#line 5299
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 5299
    fprintf(_coverage_fout, "3040\n");
#line 5299
    fflush(_coverage_fout);
#line 5299
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  5299U, "SwirlImage");
    }
  }
#line 5260
  fprintf(_coverage_fout, "3107\n");
#line 5260
  fflush(_coverage_fout);
#line 5300
  if (! (exception->signature == 2880220587UL)) {
    {
#line 5300
    fprintf(_coverage_fout, "3041\n");
#line 5300
    fflush(_coverage_fout);
#line 5300
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 5300U,
                  "SwirlImage");
    }
  }
  {
#line 5301
  fprintf(_coverage_fout, "3042\n");
#line 5301
  fflush(_coverage_fout);
#line 5301
  swirl_image = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 5260
  fprintf(_coverage_fout, "3108\n");
#line 5260
  fflush(_coverage_fout);
#line 5302
  if ((unsigned long )swirl_image == (unsigned long )((Image *)((void *)0))) {
#line 5302
    fprintf(_coverage_fout, "3043\n");
#line 5302
    fflush(_coverage_fout);
#line 5303
    return ((Image *)((void *)0));
  }
  {
#line 5304
  fprintf(_coverage_fout, "3044\n");
#line 5304
  fflush(_coverage_fout);
#line 5304
  tmp = SetImageStorageClass(swirl_image, 1);
  }
#line 5260
  fprintf(_coverage_fout, "3109\n");
#line 5260
  fflush(_coverage_fout);
#line 5304
  if ((int )tmp == 0) {
    {
#line 5306
    fprintf(_coverage_fout, "3045\n");
#line 5306
    fflush(_coverage_fout);
#line 5306
    InheritException(exception,
                     (ExceptionInfo const   *)(& swirl_image->exception));
#line 5306
    fprintf(_coverage_fout, "3046\n");
#line 5306
    fflush(_coverage_fout);
#line 5307
    swirl_image = DestroyImage(swirl_image);
    }
#line 5304
    fprintf(_coverage_fout, "3047\n");
#line 5304
    fflush(_coverage_fout);
#line 5308
    return ((Image *)((void *)0));
  }
#line 5260
  fprintf(_coverage_fout, "3110\n");
#line 5260
  fflush(_coverage_fout);
#line 5310
  if ((int )swirl_image->background_color.opacity != 0) {
#line 5310
    fprintf(_coverage_fout, "3048\n");
#line 5310
    fflush(_coverage_fout);
#line 5311
    swirl_image->matte = 1;
  }
  {
#line 5315
  fprintf(_coverage_fout, "3049\n");
#line 5315
  fflush(_coverage_fout);
#line 5315
  center.x = (double )image->columns / 2.0;
#line 5315
  fprintf(_coverage_fout, "3050\n");
#line 5315
  fflush(_coverage_fout);
#line 5316
  center.y = (double )image->rows / 2.0;
#line 5315
  fprintf(_coverage_fout, "3051\n");
#line 5315
  fflush(_coverage_fout);
#line 5317
  radius = MagickMax(center.x, center.y);
#line 5315
  fprintf(_coverage_fout, "3052\n");
#line 5315
  fflush(_coverage_fout);
#line 5318
  scale.x = 1.0;
#line 5315
  fprintf(_coverage_fout, "3053\n");
#line 5315
  fflush(_coverage_fout);
#line 5319
  scale.y = 1.0;
  }
#line 5260
  fprintf(_coverage_fout, "3111\n");
#line 5260
  fflush(_coverage_fout);
#line 5320
  if (image->columns > image->rows) {
#line 5320
    fprintf(_coverage_fout, "3054\n");
#line 5320
    fflush(_coverage_fout);
#line 5321
    scale.y = (double )image->columns / (double )image->rows;
  } else {
#line 5320
    fprintf(_coverage_fout, "3056\n");
#line 5320
    fflush(_coverage_fout);
#line 5323
    if (image->columns < image->rows) {
#line 5323
      fprintf(_coverage_fout, "3055\n");
#line 5323
      fflush(_coverage_fout);
#line 5324
      scale.x = (double )image->rows / (double )image->columns;
    }
  }
  {
#line 5325
  fprintf(_coverage_fout, "3057\n");
#line 5325
  fflush(_coverage_fout);
#line 5325
  tmp___0 = DegreesToRadians(degrees);
#line 5325
  fprintf(_coverage_fout, "3058\n");
#line 5325
  fflush(_coverage_fout);
#line 5325
  degrees = tmp___0;
#line 5325
  fprintf(_coverage_fout, "3059\n");
#line 5325
  fflush(_coverage_fout);
#line 5329
  status = 1;
#line 5325
  fprintf(_coverage_fout, "3060\n");
#line 5325
  fflush(_coverage_fout);
#line 5330
  progress = 0L;
#line 5325
  fprintf(_coverage_fout, "3061\n");
#line 5325
  fflush(_coverage_fout);
#line 5331
  GetMagickPixelPacket((Image const   *)swirl_image, & zero);
#line 5325
  fprintf(_coverage_fout, "3062\n");
#line 5325
  fflush(_coverage_fout);
#line 5332
  resample_filter = AcquireResampleFilterThreadSet(image, 1, exception);
#line 5325
  fprintf(_coverage_fout, "3063\n");
#line 5325
  fflush(_coverage_fout);
#line 5333
  image_view = AcquireCacheView(image);
#line 5325
  fprintf(_coverage_fout, "3064\n");
#line 5325
  fflush(_coverage_fout);
#line 5334
  swirl_view = AcquireCacheView((Image const   *)swirl_image);
#line 5325
  fprintf(_coverage_fout, "3065\n");
#line 5325
  fflush(_coverage_fout);
#line 5338
  y = 0L;
  }
#line 5260
  fprintf(_coverage_fout, "3112\n");
#line 5260
  fflush(_coverage_fout);
#line 5338
  while (1) {
#line 5338
    fprintf(_coverage_fout, "3092\n");
#line 5338
    fflush(_coverage_fout);
#line 5338
    if (! (y < (long )image->rows)) {
#line 5338
      break;
    }
#line 5338
    fprintf(_coverage_fout, "3093\n");
#line 5338
    fflush(_coverage_fout);
#line 5359
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 5361
    fprintf(_coverage_fout, "3066\n");
#line 5361
    fflush(_coverage_fout);
#line 5361
    tmp___1 = GetCacheViewAuthenticPixels(swirl_view, 0L, y,
                                          swirl_image->columns, 1UL, exception);
#line 5361
    fprintf(_coverage_fout, "3067\n");
#line 5361
    fflush(_coverage_fout);
#line 5361
    q = (PixelPacket */* __restrict  */)tmp___1;
    }
#line 5338
    fprintf(_coverage_fout, "3094\n");
#line 5338
    fflush(_coverage_fout);
#line 5363
    if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 5363
      fprintf(_coverage_fout, "3068\n");
#line 5363
      fflush(_coverage_fout);
#line 5365
      status = 0;
      goto __Cont;
    }
    {
#line 5368
    fprintf(_coverage_fout, "3069\n");
#line 5368
    fflush(_coverage_fout);
#line 5368
    tmp___2 = GetCacheViewAuthenticIndexQueue(swirl_view);
#line 5368
    fprintf(_coverage_fout, "3070\n");
#line 5368
    fflush(_coverage_fout);
#line 5368
    swirl_indexes = (IndexPacket */* __restrict  */)tmp___2;
#line 5368
    fprintf(_coverage_fout, "3071\n");
#line 5368
    fflush(_coverage_fout);
#line 5369
    delta.y = scale.y * ((double )y - center.y);
#line 5368
    fprintf(_coverage_fout, "3072\n");
#line 5368
    fflush(_coverage_fout);
#line 5370
    pixel = zero;
#line 5368
    fprintf(_coverage_fout, "3073\n");
#line 5368
    fflush(_coverage_fout);
#line 5371
    id = GetPixelCacheThreadId();
#line 5368
    fprintf(_coverage_fout, "3074\n");
#line 5368
    fflush(_coverage_fout);
#line 5372
    x = 0L;
    }
#line 5338
    fprintf(_coverage_fout, "3095\n");
#line 5338
    fflush(_coverage_fout);
#line 5372
    while (1) {
#line 5372
      fprintf(_coverage_fout, "3081\n");
#line 5372
      fflush(_coverage_fout);
#line 5372
      if (! (x < (long )image->columns)) {
#line 5372
        break;
      }
#line 5372
      fprintf(_coverage_fout, "3082\n");
#line 5372
      fflush(_coverage_fout);
#line 5377
      delta.x = scale.x * ((double )x - center.x);
#line 5378
      distance = delta.x * delta.x + delta.y * delta.y;
#line 5372
      fprintf(_coverage_fout, "3083\n");
#line 5372
      fflush(_coverage_fout);
#line 5379
      if (distance < radius * radius) {
        {
#line 5389
        fprintf(_coverage_fout, "3075\n");
#line 5389
        fflush(_coverage_fout);
#line 5389
        tmp___3 = sqrt(distance);
#line 5389
        fprintf(_coverage_fout, "3076\n");
#line 5389
        fflush(_coverage_fout);
#line 5389
        factor = 1.0 - tmp___3 / radius;
#line 5389
        fprintf(_coverage_fout, "3077\n");
#line 5389
        fflush(_coverage_fout);
#line 5390
        sine = sin((degrees * factor) * factor);
#line 5389
        fprintf(_coverage_fout, "3078\n");
#line 5389
        fflush(_coverage_fout);
#line 5391
        cosine = cos((degrees * factor) * factor);
#line 5389
        fprintf(_coverage_fout, "3079\n");
#line 5389
        fflush(_coverage_fout);
#line 5392
        ResamplePixelColor(*(resample_filter + id),
                           (cosine * delta.x - sine * delta.y) / scale.x + center.x,
                           (sine * delta.x + cosine * delta.y) / scale.y + center.y,
                           & pixel);
#line 5389
        fprintf(_coverage_fout, "3080\n");
#line 5389
        fflush(_coverage_fout);
#line 5395
        SetPixelPacket((Image const   *)swirl_image,
                       (MagickPixelPacket const   *)(& pixel), (PixelPacket *)q,
                       (IndexPacket *)(swirl_indexes + x));
        }
      }
#line 5372
      fprintf(_coverage_fout, "3084\n");
#line 5372
      fflush(_coverage_fout);
#line 5397
      q ++;
#line 5372
      x ++;
    }
    {
#line 5399
    fprintf(_coverage_fout, "3085\n");
#line 5399
    fflush(_coverage_fout);
#line 5399
    tmp___4 = SyncCacheViewAuthenticPixels(swirl_view, exception);
    }
#line 5338
    fprintf(_coverage_fout, "3096\n");
#line 5338
    fflush(_coverage_fout);
#line 5399
    if ((int )tmp___4 == 0) {
#line 5399
      fprintf(_coverage_fout, "3086\n");
#line 5399
      fflush(_coverage_fout);
#line 5400
      status = 0;
    }
#line 5338
    fprintf(_coverage_fout, "3097\n");
#line 5338
    fflush(_coverage_fout);
#line 5401
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 5409
      fprintf(_coverage_fout, "3087\n");
#line 5409
      fflush(_coverage_fout);
#line 5409
      tmp___5 = progress;
#line 5409
      fprintf(_coverage_fout, "3088\n");
#line 5409
      fflush(_coverage_fout);
#line 5409
      progress ++;
#line 5409
      fprintf(_coverage_fout, "3089\n");
#line 5409
      fflush(_coverage_fout);
#line 5409
      proceed = SetImageProgress(image, "Swirl/Image", (long long )tmp___5,
                                 (unsigned long long )image->rows);
      }
#line 5401
      fprintf(_coverage_fout, "3091\n");
#line 5401
      fflush(_coverage_fout);
#line 5410
      if ((int )proceed == 0) {
#line 5410
        fprintf(_coverage_fout, "3090\n");
#line 5410
        fflush(_coverage_fout);
#line 5411
        status = 0;
      }
    }
#line 5338
    fprintf(_coverage_fout, "3098\n");
#line 5338
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 5338
    y ++;
  }
  {
#line 5414
  fprintf(_coverage_fout, "3099\n");
#line 5414
  fflush(_coverage_fout);
#line 5414
  swirl_view = DestroyCacheView(swirl_view);
#line 5414
  fprintf(_coverage_fout, "3100\n");
#line 5414
  fflush(_coverage_fout);
#line 5415
  image_view = DestroyCacheView(image_view);
#line 5414
  fprintf(_coverage_fout, "3101\n");
#line 5414
  fflush(_coverage_fout);
#line 5416
  resample_filter = DestroyResampleFilterThreadSet(resample_filter);
  }
#line 5260
  fprintf(_coverage_fout, "3113\n");
#line 5260
  fflush(_coverage_fout);
#line 5417
  if ((int )status == 0) {
    {
#line 5418
    fprintf(_coverage_fout, "3102\n");
#line 5418
    fflush(_coverage_fout);
#line 5418
    swirl_image = DestroyImage(swirl_image);
    }
  }
#line 5260
  fprintf(_coverage_fout, "3114\n");
#line 5260
  fflush(_coverage_fout);
#line 5419
  return (swirl_image);
}
}
#line 5453 "magick/fx.c"
Image *TintImage(Image const   *image , char const   *opacity ,
                 PixelPacket tint , ExceptionInfo *exception ) 
{ GeometryInfo geometry_info ;
  Image *tint_image ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  MagickStatusType flags ;
  MagickPixelPacket color_vector ;
  MagickPixelPacket pixel ;
  ViewInfo *image_view ;
  ViewInfo *tint_view ;
  MagickBooleanType tmp ;
  MagickRealType tmp___0 ;
  MagickRealType tmp___1 ;
  MagickRealType tmp___2 ;
  register PixelPacket const   * __restrict  p ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket const   *tmp___3 ;
  PixelPacket *tmp___4 ;
  MagickPixelPacket pixel___0 ;
  MagickRealType weight ;
  MagickBooleanType tmp___5 ;
  MagickBooleanType proceed ;
  long tmp___6 ;

  {
#line 5453
  fprintf(_coverage_fout, "3185\n");
#line 5453
  fflush(_coverage_fout);
#line 5485
  if (! ((unsigned long )image != (unsigned long )((Image const   *)((void *)0)))) {
    {
#line 5485
    fprintf(_coverage_fout, "3115\n");
#line 5485
    fflush(_coverage_fout);
#line 5485
    __assert_fail("image != (const Image *) ((void *)0)", "magick/fx.c", 5485U,
                  "TintImage");
    }
  }
#line 5453
  fprintf(_coverage_fout, "3186\n");
#line 5453
  fflush(_coverage_fout);
#line 5486
  if (! (image->signature == 2880220587UL)) {
    {
#line 5486
    fprintf(_coverage_fout, "3116\n");
#line 5486
    fflush(_coverage_fout);
#line 5486
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 5486U,
                  "TintImage");
    }
  }
#line 5453
  fprintf(_coverage_fout, "3187\n");
#line 5453
  fflush(_coverage_fout);
#line 5487
  if ((int const   )image->debug != 0) {
    {
#line 5488
    fprintf(_coverage_fout, "3117\n");
#line 5488
    fflush(_coverage_fout);
#line 5488
    LogMagickEvent(1, "magick/fx.c", "TintImage", 5488UL, "%s", image->filename);
    }
  }
#line 5453
  fprintf(_coverage_fout, "3188\n");
#line 5453
  fflush(_coverage_fout);
#line 5489
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 5489
    fprintf(_coverage_fout, "3118\n");
#line 5489
    fflush(_coverage_fout);
#line 5489
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  5489U, "TintImage");
    }
  }
#line 5453
  fprintf(_coverage_fout, "3189\n");
#line 5453
  fflush(_coverage_fout);
#line 5490
  if (! (exception->signature == 2880220587UL)) {
    {
#line 5490
    fprintf(_coverage_fout, "3119\n");
#line 5490
    fflush(_coverage_fout);
#line 5490
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 5490U,
                  "TintImage");
    }
  }
  {
#line 5491
  fprintf(_coverage_fout, "3120\n");
#line 5491
  fflush(_coverage_fout);
#line 5491
  tint_image = CloneImage(image, (unsigned long )image->columns,
                          (unsigned long )image->rows, 1, exception);
  }
#line 5453
  fprintf(_coverage_fout, "3190\n");
#line 5453
  fflush(_coverage_fout);
#line 5492
  if ((unsigned long )tint_image == (unsigned long )((Image *)((void *)0))) {
#line 5492
    fprintf(_coverage_fout, "3121\n");
#line 5492
    fflush(_coverage_fout);
#line 5493
    return ((Image *)((void *)0));
  }
  {
#line 5494
  fprintf(_coverage_fout, "3122\n");
#line 5494
  fflush(_coverage_fout);
#line 5494
  tmp = SetImageStorageClass(tint_image, 1);
  }
#line 5453
  fprintf(_coverage_fout, "3191\n");
#line 5453
  fflush(_coverage_fout);
#line 5494
  if ((int )tmp == 0) {
    {
#line 5496
    fprintf(_coverage_fout, "3123\n");
#line 5496
    fflush(_coverage_fout);
#line 5496
    InheritException(exception,
                     (ExceptionInfo const   *)(& tint_image->exception));
#line 5496
    fprintf(_coverage_fout, "3124\n");
#line 5496
    fflush(_coverage_fout);
#line 5497
    tint_image = DestroyImage(tint_image);
    }
#line 5494
    fprintf(_coverage_fout, "3125\n");
#line 5494
    fflush(_coverage_fout);
#line 5498
    return ((Image *)((void *)0));
  }
#line 5453
  fprintf(_coverage_fout, "3192\n");
#line 5453
  fflush(_coverage_fout);
#line 5500
  if ((unsigned long )opacity == (unsigned long )((char const   *)((void *)0))) {
#line 5500
    fprintf(_coverage_fout, "3126\n");
#line 5500
    fflush(_coverage_fout);
#line 5501
    return (tint_image);
  }
  {
#line 5505
  fprintf(_coverage_fout, "3127\n");
#line 5505
  fflush(_coverage_fout);
#line 5505
  flags = ParseGeometry(opacity, & geometry_info);
#line 5505
  fprintf(_coverage_fout, "3128\n");
#line 5505
  fflush(_coverage_fout);
#line 5506
  pixel.red = geometry_info.rho;
  }
#line 5453
  fprintf(_coverage_fout, "3193\n");
#line 5453
  fflush(_coverage_fout);
#line 5507
  if ((flags & 8U) != 0U) {
#line 5507
    fprintf(_coverage_fout, "3129\n");
#line 5507
    fflush(_coverage_fout);
#line 5508
    pixel.green = geometry_info.sigma;
  } else {
#line 5507
    fprintf(_coverage_fout, "3130\n");
#line 5507
    fflush(_coverage_fout);
#line 5510
    pixel.green = pixel.red;
  }
#line 5453
  fprintf(_coverage_fout, "3194\n");
#line 5453
  fflush(_coverage_fout);
#line 5511
  if ((flags & 1U) != 0U) {
#line 5511
    fprintf(_coverage_fout, "3131\n");
#line 5511
    fflush(_coverage_fout);
#line 5512
    pixel.blue = geometry_info.xi;
  } else {
#line 5511
    fprintf(_coverage_fout, "3132\n");
#line 5511
    fflush(_coverage_fout);
#line 5514
    pixel.blue = pixel.red;
  }
#line 5453
  fprintf(_coverage_fout, "3195\n");
#line 5453
  fflush(_coverage_fout);
#line 5515
  if ((flags & 2U) != 0U) {
#line 5515
    fprintf(_coverage_fout, "3133\n");
#line 5515
    fflush(_coverage_fout);
#line 5516
    pixel.opacity = geometry_info.psi;
  } else {
#line 5515
    fprintf(_coverage_fout, "3134\n");
#line 5515
    fflush(_coverage_fout);
#line 5518
    pixel.opacity = (double )(unsigned short)0;
  }
  {
#line 5519
  fprintf(_coverage_fout, "3135\n");
#line 5519
  fflush(_coverage_fout);
#line 5519
  tmp___0 = PixelIntensity((PixelPacket const   *)(& tint));
#line 5519
  fprintf(_coverage_fout, "3136\n");
#line 5519
  fflush(_coverage_fout);
#line 5519
  color_vector.red = (pixel.red * (MagickRealType )tint.red) / 100.0 - tmp___0;
#line 5519
  fprintf(_coverage_fout, "3137\n");
#line 5519
  fflush(_coverage_fout);
#line 5521
  tmp___1 = PixelIntensity((PixelPacket const   *)(& tint));
#line 5519
  fprintf(_coverage_fout, "3138\n");
#line 5519
  fflush(_coverage_fout);
#line 5521
  color_vector.green = (pixel.green * (MagickRealType )tint.green) / 100.0 - tmp___1;
#line 5519
  fprintf(_coverage_fout, "3139\n");
#line 5519
  fflush(_coverage_fout);
#line 5523
  tmp___2 = PixelIntensity((PixelPacket const   *)(& tint));
#line 5519
  fprintf(_coverage_fout, "3140\n");
#line 5519
  fflush(_coverage_fout);
#line 5523
  color_vector.blue = (pixel.blue * (MagickRealType )tint.blue) / 100.0 - tmp___2;
#line 5519
  fprintf(_coverage_fout, "3141\n");
#line 5519
  fflush(_coverage_fout);
#line 5528
  status = 1;
#line 5519
  fprintf(_coverage_fout, "3142\n");
#line 5519
  fflush(_coverage_fout);
#line 5529
  progress = 0L;
#line 5519
  fprintf(_coverage_fout, "3143\n");
#line 5519
  fflush(_coverage_fout);
#line 5530
  image_view = AcquireCacheView(image);
#line 5519
  fprintf(_coverage_fout, "3144\n");
#line 5519
  fflush(_coverage_fout);
#line 5531
  tint_view = AcquireCacheView((Image const   *)tint_image);
#line 5519
  fprintf(_coverage_fout, "3145\n");
#line 5519
  fflush(_coverage_fout);
#line 5535
  y = 0L;
  }
#line 5453
  fprintf(_coverage_fout, "3196\n");
#line 5453
  fflush(_coverage_fout);
#line 5535
  while (1) {
#line 5535
    fprintf(_coverage_fout, "3174\n");
#line 5535
    fflush(_coverage_fout);
#line 5535
    if (! (y < (long )image->rows)) {
#line 5535
      break;
    }
#line 5535
    fprintf(_coverage_fout, "3175\n");
#line 5535
    fflush(_coverage_fout);
#line 5546
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 5548
    fprintf(_coverage_fout, "3146\n");
#line 5548
    fflush(_coverage_fout);
#line 5548
    tmp___3 = GetCacheViewVirtualPixels((ViewInfo const   *)image_view, 0L, y,
                                        (unsigned long )image->columns, 1UL,
                                        exception);
#line 5548
    fprintf(_coverage_fout, "3147\n");
#line 5548
    fflush(_coverage_fout);
#line 5548
    p = (PixelPacket const   */* __restrict  */)tmp___3;
#line 5548
    fprintf(_coverage_fout, "3148\n");
#line 5548
    fflush(_coverage_fout);
#line 5549
    tmp___4 = QueueCacheViewAuthenticPixels(tint_view, 0L, y,
                                            tint_image->columns, 1UL, exception);
#line 5548
    fprintf(_coverage_fout, "3149\n");
#line 5548
    fflush(_coverage_fout);
#line 5549
    q = (PixelPacket */* __restrict  */)tmp___4;
    }
#line 5535
    fprintf(_coverage_fout, "3176\n");
#line 5535
    fflush(_coverage_fout);
#line 5551
    if ((unsigned long )p == (unsigned long )((PixelPacket const   *)((void *)0))) {
#line 5551
      fprintf(_coverage_fout, "3150\n");
#line 5551
      fflush(_coverage_fout);
#line 5553
      status = 0;
      goto __Cont;
    } else {
#line 5551
      fprintf(_coverage_fout, "3152\n");
#line 5551
      fflush(_coverage_fout);
#line 5551
      if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 5551
        fprintf(_coverage_fout, "3151\n");
#line 5551
        fflush(_coverage_fout);
#line 5553
        status = 0;
        goto __Cont;
      }
    }
#line 5535
    fprintf(_coverage_fout, "3177\n");
#line 5535
    fflush(_coverage_fout);
#line 5556
    x = 0L;
#line 5535
    fprintf(_coverage_fout, "3178\n");
#line 5535
    fflush(_coverage_fout);
#line 5556
    while (1) {
#line 5556
      fprintf(_coverage_fout, "3166\n");
#line 5556
      fflush(_coverage_fout);
#line 5556
      if (! (x < (long )image->columns)) {
#line 5556
        break;
      }
      {
#line 5564
      fprintf(_coverage_fout, "3153\n");
#line 5564
      fflush(_coverage_fout);
#line 5564
      weight = (1.0 / (double )65535UL) * (double )p->red - 0.5;
#line 5564
      fprintf(_coverage_fout, "3154\n");
#line 5564
      fflush(_coverage_fout);
#line 5565
      pixel___0.red = (double )p->red + color_vector.red * (1.0 - 4.0 * (weight * weight));
#line 5564
      fprintf(_coverage_fout, "3155\n");
#line 5564
      fflush(_coverage_fout);
#line 5567
      q->red = RoundToQuantum(pixel___0.red);
#line 5564
      fprintf(_coverage_fout, "3156\n");
#line 5564
      fflush(_coverage_fout);
#line 5568
      weight = (1.0 / (double )65535UL) * (double )p->green - 0.5;
#line 5564
      fprintf(_coverage_fout, "3157\n");
#line 5564
      fflush(_coverage_fout);
#line 5569
      pixel___0.green = (double )p->green + color_vector.green * (1.0 - 4.0 * (weight * weight));
#line 5564
      fprintf(_coverage_fout, "3158\n");
#line 5564
      fflush(_coverage_fout);
#line 5571
      q->green = RoundToQuantum(pixel___0.green);
#line 5564
      fprintf(_coverage_fout, "3159\n");
#line 5564
      fflush(_coverage_fout);
#line 5572
      weight = (1.0 / (double )65535UL) * (double )p->blue - 0.5;
#line 5564
      fprintf(_coverage_fout, "3160\n");
#line 5564
      fflush(_coverage_fout);
#line 5573
      pixel___0.blue = (double )p->blue + color_vector.blue * (1.0 - 4.0 * (weight * weight));
#line 5564
      fprintf(_coverage_fout, "3161\n");
#line 5564
      fflush(_coverage_fout);
#line 5575
      q->blue = RoundToQuantum(pixel___0.blue);
#line 5564
      fprintf(_coverage_fout, "3162\n");
#line 5564
      fflush(_coverage_fout);
#line 5576
      q->opacity = (unsigned short )p->opacity;
#line 5564
      fprintf(_coverage_fout, "3163\n");
#line 5564
      fflush(_coverage_fout);
#line 5577
      p ++;
#line 5564
      fprintf(_coverage_fout, "3164\n");
#line 5564
      fflush(_coverage_fout);
#line 5578
      q ++;
#line 5564
      fprintf(_coverage_fout, "3165\n");
#line 5564
      fflush(_coverage_fout);
#line 5556
      x ++;
      }
    }
    {
#line 5580
    fprintf(_coverage_fout, "3167\n");
#line 5580
    fflush(_coverage_fout);
#line 5580
    tmp___5 = SyncCacheViewAuthenticPixels(tint_view, exception);
    }
#line 5535
    fprintf(_coverage_fout, "3179\n");
#line 5535
    fflush(_coverage_fout);
#line 5580
    if ((int )tmp___5 == 0) {
#line 5580
      fprintf(_coverage_fout, "3168\n");
#line 5580
      fflush(_coverage_fout);
#line 5581
      status = 0;
    }
#line 5535
    fprintf(_coverage_fout, "3180\n");
#line 5535
    fflush(_coverage_fout);
#line 5582
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 5590
      fprintf(_coverage_fout, "3169\n");
#line 5590
      fflush(_coverage_fout);
#line 5590
      tmp___6 = progress;
#line 5590
      fprintf(_coverage_fout, "3170\n");
#line 5590
      fflush(_coverage_fout);
#line 5590
      progress ++;
#line 5590
      fprintf(_coverage_fout, "3171\n");
#line 5590
      fflush(_coverage_fout);
#line 5590
      proceed = SetImageProgress(image, "Tint/Image", (long long )tmp___6,
                                 (unsigned long long )image->rows);
      }
#line 5582
      fprintf(_coverage_fout, "3173\n");
#line 5582
      fflush(_coverage_fout);
#line 5591
      if ((int )proceed == 0) {
#line 5591
        fprintf(_coverage_fout, "3172\n");
#line 5591
        fflush(_coverage_fout);
#line 5592
        status = 0;
      }
    }
#line 5535
    fprintf(_coverage_fout, "3181\n");
#line 5535
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 5535
    y ++;
  }
  {
#line 5595
  fprintf(_coverage_fout, "3182\n");
#line 5595
  fflush(_coverage_fout);
#line 5595
  tint_view = DestroyCacheView(tint_view);
#line 5595
  fprintf(_coverage_fout, "3183\n");
#line 5595
  fflush(_coverage_fout);
#line 5596
  image_view = DestroyCacheView(image_view);
  }
#line 5453
  fprintf(_coverage_fout, "3197\n");
#line 5453
  fflush(_coverage_fout);
#line 5597
  if ((int )status == 0) {
    {
#line 5598
    fprintf(_coverage_fout, "3184\n");
#line 5598
    fflush(_coverage_fout);
#line 5598
    tint_image = DestroyImage(tint_image);
    }
  }
#line 5453
  fprintf(_coverage_fout, "3198\n");
#line 5453
  fflush(_coverage_fout);
#line 5599
  return (tint_image);
}
}
#line 5633 "magick/fx.c"
Image *VignetteImage(Image const   *image , double radius , double sigma ,
                     long x , long y , ExceptionInfo *exception ) 
{ char ellipse[4096] ;
  DrawInfo *draw_info ;
  Image *canvas_image ;
  Image *blur_image ;
  Image *oval_image ;
  Image *vignette_image ;
  MagickBooleanType tmp ;

  {
#line 5633
  fprintf(_coverage_fout, "3232\n");
#line 5633
  fflush(_coverage_fout);
#line 5648
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 5648
    fprintf(_coverage_fout, "3199\n");
#line 5648
    fflush(_coverage_fout);
#line 5648
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 5648U,
                  "VignetteImage");
    }
  }
#line 5633
  fprintf(_coverage_fout, "3233\n");
#line 5633
  fflush(_coverage_fout);
#line 5649
  if (! (image->signature == 2880220587UL)) {
    {
#line 5649
    fprintf(_coverage_fout, "3200\n");
#line 5649
    fflush(_coverage_fout);
#line 5649
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 5649U,
                  "VignetteImage");
    }
  }
#line 5633
  fprintf(_coverage_fout, "3234\n");
#line 5633
  fflush(_coverage_fout);
#line 5650
  if ((int const   )image->debug != 0) {
    {
#line 5651
    fprintf(_coverage_fout, "3201\n");
#line 5651
    fflush(_coverage_fout);
#line 5651
    LogMagickEvent(1, "magick/fx.c", "VignetteImage", 5651UL, "%s",
                   image->filename);
    }
  }
#line 5633
  fprintf(_coverage_fout, "3235\n");
#line 5633
  fflush(_coverage_fout);
#line 5652
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 5652
    fprintf(_coverage_fout, "3202\n");
#line 5652
    fflush(_coverage_fout);
#line 5652
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  5652U, "VignetteImage");
    }
  }
#line 5633
  fprintf(_coverage_fout, "3236\n");
#line 5633
  fflush(_coverage_fout);
#line 5653
  if (! (exception->signature == 2880220587UL)) {
    {
#line 5653
    fprintf(_coverage_fout, "3203\n");
#line 5653
    fflush(_coverage_fout);
#line 5653
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 5653U,
                  "VignetteImage");
    }
  }
  {
#line 5654
  fprintf(_coverage_fout, "3204\n");
#line 5654
  fflush(_coverage_fout);
#line 5654
  canvas_image = CloneImage(image, 0UL, 0UL, 1, exception);
  }
#line 5633
  fprintf(_coverage_fout, "3237\n");
#line 5633
  fflush(_coverage_fout);
#line 5655
  if ((unsigned long )canvas_image == (unsigned long )((Image *)((void *)0))) {
#line 5655
    fprintf(_coverage_fout, "3205\n");
#line 5655
    fflush(_coverage_fout);
#line 5656
    return ((Image *)((void *)0));
  }
  {
#line 5657
  fprintf(_coverage_fout, "3206\n");
#line 5657
  fflush(_coverage_fout);
#line 5657
  tmp = SetImageStorageClass(canvas_image, 1);
  }
#line 5633
  fprintf(_coverage_fout, "3238\n");
#line 5633
  fflush(_coverage_fout);
#line 5657
  if ((int )tmp == 0) {
    {
#line 5659
    fprintf(_coverage_fout, "3207\n");
#line 5659
    fflush(_coverage_fout);
#line 5659
    InheritException(exception,
                     (ExceptionInfo const   *)(& canvas_image->exception));
#line 5659
    fprintf(_coverage_fout, "3208\n");
#line 5659
    fflush(_coverage_fout);
#line 5660
    canvas_image = DestroyImage(canvas_image);
    }
#line 5657
    fprintf(_coverage_fout, "3209\n");
#line 5657
    fflush(_coverage_fout);
#line 5661
    return ((Image *)((void *)0));
  }
  {
#line 5663
  fprintf(_coverage_fout, "3210\n");
#line 5663
  fflush(_coverage_fout);
#line 5663
  canvas_image->matte = 1;
#line 5663
  fprintf(_coverage_fout, "3211\n");
#line 5663
  fflush(_coverage_fout);
#line 5664
  oval_image = CloneImage((Image const   *)canvas_image, canvas_image->columns,
                          canvas_image->rows, 1, exception);
  }
#line 5633
  fprintf(_coverage_fout, "3239\n");
#line 5633
  fflush(_coverage_fout);
#line 5666
  if ((unsigned long )oval_image == (unsigned long )((Image *)((void *)0))) {
    {
#line 5668
    fprintf(_coverage_fout, "3212\n");
#line 5668
    fflush(_coverage_fout);
#line 5668
    canvas_image = DestroyImage(canvas_image);
    }
#line 5666
    fprintf(_coverage_fout, "3213\n");
#line 5666
    fflush(_coverage_fout);
#line 5669
    return ((Image *)((void *)0));
  }
  {
#line 5671
  fprintf(_coverage_fout, "3214\n");
#line 5671
  fflush(_coverage_fout);
#line 5671
  QueryColorDatabase("#000000", & oval_image->background_color, exception);
#line 5671
  fprintf(_coverage_fout, "3215\n");
#line 5671
  fflush(_coverage_fout);
#line 5672
  SetImageBackgroundColor(oval_image);
#line 5671
  fprintf(_coverage_fout, "3216\n");
#line 5671
  fflush(_coverage_fout);
#line 5673
  draw_info = CloneDrawInfo((ImageInfo const   *)((void *)0),
                            (DrawInfo const   *)((void *)0));
#line 5671
  fprintf(_coverage_fout, "3217\n");
#line 5671
  fflush(_coverage_fout);
#line 5674
  QueryColorDatabase("#ffffff", & draw_info->fill, exception);
#line 5671
  fprintf(_coverage_fout, "3218\n");
#line 5671
  fflush(_coverage_fout);
#line 5675
  QueryColorDatabase("#ffffff", & draw_info->stroke, exception);
#line 5671
  fprintf(_coverage_fout, "3219\n");
#line 5671
  fflush(_coverage_fout);
#line 5676
  FormatMagickString(ellipse, 4096UL, "ellipse %g,%g,%g,%g,0.0,360.0",
                     (double )image->columns / 2.0, (double )image->rows / 2.0,
                     (double )image->columns / 2.0 - (double )x,
                     (double )image->rows / 2.0 - (double )y);
#line 5671
  fprintf(_coverage_fout, "3220\n");
#line 5671
  fflush(_coverage_fout);
#line 5679
  draw_info->primitive = AcquireString((char const   *)(ellipse));
#line 5671
  fprintf(_coverage_fout, "3221\n");
#line 5671
  fflush(_coverage_fout);
#line 5680
  DrawImage(oval_image, (DrawInfo const   *)draw_info);
#line 5671
  fprintf(_coverage_fout, "3222\n");
#line 5671
  fflush(_coverage_fout);
#line 5681
  draw_info = DestroyDrawInfo(draw_info);
#line 5671
  fprintf(_coverage_fout, "3223\n");
#line 5671
  fflush(_coverage_fout);
#line 5682
  blur_image = BlurImage((Image const   *)oval_image, radius, sigma, exception);
#line 5671
  fprintf(_coverage_fout, "3224\n");
#line 5671
  fflush(_coverage_fout);
#line 5683
  oval_image = DestroyImage(oval_image);
  }
#line 5633
  fprintf(_coverage_fout, "3240\n");
#line 5633
  fflush(_coverage_fout);
#line 5684
  if ((unsigned long )blur_image == (unsigned long )((Image *)((void *)0))) {
    {
#line 5686
    fprintf(_coverage_fout, "3225\n");
#line 5686
    fflush(_coverage_fout);
#line 5686
    canvas_image = DestroyImage(canvas_image);
    }
#line 5684
    fprintf(_coverage_fout, "3226\n");
#line 5684
    fflush(_coverage_fout);
#line 5687
    return ((Image *)((void *)0));
  }
  {
#line 5689
  fprintf(_coverage_fout, "3227\n");
#line 5689
  fflush(_coverage_fout);
#line 5689
  blur_image->matte = 0;
#line 5689
  fprintf(_coverage_fout, "3228\n");
#line 5689
  fflush(_coverage_fout);
#line 5690
  CompositeImage(canvas_image, 17, (Image const   *)blur_image, 0L, 0L);
#line 5689
  fprintf(_coverage_fout, "3229\n");
#line 5689
  fflush(_coverage_fout);
#line 5691
  blur_image = DestroyImage(blur_image);
#line 5689
  fprintf(_coverage_fout, "3230\n");
#line 5689
  fflush(_coverage_fout);
#line 5692
  vignette_image = MergeImageLayers(canvas_image, 14, exception);
#line 5689
  fprintf(_coverage_fout, "3231\n");
#line 5689
  fflush(_coverage_fout);
#line 5693
  canvas_image = DestroyImage(canvas_image);
  }
#line 5633
  fprintf(_coverage_fout, "3241\n");
#line 5633
  fflush(_coverage_fout);
#line 5694
  return (vignette_image);
}
}
#line 5727 "magick/fx.c"
Image *WaveImage(Image const   *image , double amplitude , double wave_length ,
                 ExceptionInfo *exception ) 
{ Image *wave_image ;
  long progress ;
  long y ;
  MagickBooleanType status ;
  MagickPixelPacket zero ;
  MagickRealType *sine_map ;
  register long i ;
  ResampleFilter **resample_filter ;
  ViewInfo *wave_view ;
  double tmp ;
  MagickBooleanType tmp___0 ;
  void *tmp___1 ;
  char const   *tmp___2 ;
  double tmp___3 ;
  double tmp___4 ;
  MagickPixelPacket pixel ;
  register IndexPacket * __restrict  indexes ;
  register long id ;
  register long x ;
  register PixelPacket * __restrict  q ;
  PixelPacket *tmp___5 ;
  IndexPacket *tmp___6 ;
  MagickBooleanType tmp___7 ;
  MagickBooleanType proceed ;
  long tmp___8 ;
  void *tmp___9 ;

  {
#line 5727
  fprintf(_coverage_fout, "3307\n");
#line 5727
  fflush(_coverage_fout);
#line 5760
  if (! ((unsigned long )image != (unsigned long )((Image *)((void *)0)))) {
    {
#line 5760
    fprintf(_coverage_fout, "3242\n");
#line 5760
    fflush(_coverage_fout);
#line 5760
    __assert_fail("image != (Image *) ((void *)0)", "magick/fx.c", 5760U,
                  "WaveImage");
    }
  }
#line 5727
  fprintf(_coverage_fout, "3308\n");
#line 5727
  fflush(_coverage_fout);
#line 5761
  if (! (image->signature == 2880220587UL)) {
    {
#line 5761
    fprintf(_coverage_fout, "3243\n");
#line 5761
    fflush(_coverage_fout);
#line 5761
    __assert_fail("image->signature == 0xabacadabUL", "magick/fx.c", 5761U,
                  "WaveImage");
    }
  }
#line 5727
  fprintf(_coverage_fout, "3309\n");
#line 5727
  fflush(_coverage_fout);
#line 5762
  if ((int const   )image->debug != 0) {
    {
#line 5763
    fprintf(_coverage_fout, "3244\n");
#line 5763
    fflush(_coverage_fout);
#line 5763
    LogMagickEvent(1, "magick/fx.c", "WaveImage", 5763UL, "%s", image->filename);
    }
  }
#line 5727
  fprintf(_coverage_fout, "3310\n");
#line 5727
  fflush(_coverage_fout);
#line 5764
  if (! ((unsigned long )exception != (unsigned long )((ExceptionInfo *)((void *)0)))) {
    {
#line 5764
    fprintf(_coverage_fout, "3245\n");
#line 5764
    fflush(_coverage_fout);
#line 5764
    __assert_fail("exception != (ExceptionInfo *) ((void *)0)", "magick/fx.c",
                  5764U, "WaveImage");
    }
  }
#line 5727
  fprintf(_coverage_fout, "3311\n");
#line 5727
  fflush(_coverage_fout);
#line 5765
  if (! (exception->signature == 2880220587UL)) {
    {
#line 5765
    fprintf(_coverage_fout, "3246\n");
#line 5765
    fflush(_coverage_fout);
#line 5765
    __assert_fail("exception->signature == 0xabacadabUL", "magick/fx.c", 5765U,
                  "WaveImage");
    }
  }
  {
#line 5766
  fprintf(_coverage_fout, "3247\n");
#line 5766
  fflush(_coverage_fout);
#line 5766
  tmp = fabs(amplitude);
#line 5766
  fprintf(_coverage_fout, "3248\n");
#line 5766
  fflush(_coverage_fout);
#line 5766
  wave_image = CloneImage(image, (unsigned long )image->columns,
                          (unsigned long )((double )image->rows + 2.0 * tmp), 1,
                          exception);
  }
#line 5727
  fprintf(_coverage_fout, "3312\n");
#line 5727
  fflush(_coverage_fout);
#line 5768
  if ((unsigned long )wave_image == (unsigned long )((Image *)((void *)0))) {
#line 5768
    fprintf(_coverage_fout, "3249\n");
#line 5768
    fflush(_coverage_fout);
#line 5769
    return ((Image *)((void *)0));
  }
  {
#line 5770
  fprintf(_coverage_fout, "3250\n");
#line 5770
  fflush(_coverage_fout);
#line 5770
  tmp___0 = SetImageStorageClass(wave_image, 1);
  }
#line 5727
  fprintf(_coverage_fout, "3313\n");
#line 5727
  fflush(_coverage_fout);
#line 5770
  if ((int )tmp___0 == 0) {
    {
#line 5772
    fprintf(_coverage_fout, "3251\n");
#line 5772
    fflush(_coverage_fout);
#line 5772
    InheritException(exception,
                     (ExceptionInfo const   *)(& wave_image->exception));
#line 5772
    fprintf(_coverage_fout, "3252\n");
#line 5772
    fflush(_coverage_fout);
#line 5773
    wave_image = DestroyImage(wave_image);
    }
#line 5770
    fprintf(_coverage_fout, "3253\n");
#line 5770
    fflush(_coverage_fout);
#line 5774
    return ((Image *)((void *)0));
  }
#line 5727
  fprintf(_coverage_fout, "3314\n");
#line 5727
  fflush(_coverage_fout);
#line 5776
  if ((int )wave_image->background_color.opacity != 0) {
#line 5776
    fprintf(_coverage_fout, "3254\n");
#line 5776
    fflush(_coverage_fout);
#line 5777
    wave_image->matte = 1;
  }
  {
#line 5781
  fprintf(_coverage_fout, "3255\n");
#line 5781
  fflush(_coverage_fout);
#line 5781
  tmp___1 = AcquireQuantumMemory(wave_image->columns, sizeof(*sine_map));
#line 5781
  fprintf(_coverage_fout, "3256\n");
#line 5781
  fflush(_coverage_fout);
#line 5781
  sine_map = (MagickRealType *)tmp___1;
  }
#line 5727
  fprintf(_coverage_fout, "3315\n");
#line 5727
  fflush(_coverage_fout);
#line 5783
  if ((unsigned long )sine_map == (unsigned long )((MagickRealType *)((void *)0))) {
    {
#line 5785
    fprintf(_coverage_fout, "3257\n");
#line 5785
    fflush(_coverage_fout);
#line 5785
    wave_image = DestroyImage(wave_image);
    }
#line 5783
    fprintf(_coverage_fout, "3261\n");
#line 5783
    fflush(_coverage_fout);
#line 5786
    if ((unsigned long )"MemoryAllocationFailed" == (unsigned long )((char const   *)((void *)0))) {
#line 5786
      fprintf(_coverage_fout, "3258\n");
#line 5786
      fflush(_coverage_fout);
#line 5786
      tmp___2 = "unknown";
    } else {
#line 5786
      fprintf(_coverage_fout, "3259\n");
#line 5786
      fflush(_coverage_fout);
#line 5786
      tmp___2 = "MemoryAllocationFailed";
    }
    {
#line 5786
    fprintf(_coverage_fout, "3260\n");
#line 5786
    fflush(_coverage_fout);
#line 5786
    ThrowMagickException(exception, "magick/fx.c", "WaveImage", 5786UL, 400,
                         tmp___2, "`%s\'", image->filename);
    }
#line 5783
    fprintf(_coverage_fout, "3262\n");
#line 5783
    fflush(_coverage_fout);
#line 5786
    return ((Image *)((void *)0));
  }
#line 5727
  fprintf(_coverage_fout, "3316\n");
#line 5727
  fflush(_coverage_fout);
#line 5788
  i = 0L;
#line 5727
  fprintf(_coverage_fout, "3317\n");
#line 5727
  fflush(_coverage_fout);
#line 5788
  while (1) {
#line 5788
    fprintf(_coverage_fout, "3267\n");
#line 5788
    fflush(_coverage_fout);
#line 5788
    if (! (i < (long )wave_image->columns)) {
#line 5788
      break;
    }
    {
#line 5789
    fprintf(_coverage_fout, "3263\n");
#line 5789
    fflush(_coverage_fout);
#line 5789
    tmp___3 = fabs(amplitude);
#line 5789
    fprintf(_coverage_fout, "3264\n");
#line 5789
    fflush(_coverage_fout);
#line 5789
    tmp___4 = sin((((double )2 * 3.14159265358979323846264338327950288419716939937510) * (double )i) / wave_length);
#line 5789
    fprintf(_coverage_fout, "3265\n");
#line 5789
    fflush(_coverage_fout);
#line 5789
    *(sine_map + i) = tmp___3 + amplitude * tmp___4;
#line 5789
    fprintf(_coverage_fout, "3266\n");
#line 5789
    fflush(_coverage_fout);
#line 5788
    i ++;
    }
  }
  {
#line 5793
  fprintf(_coverage_fout, "3268\n");
#line 5793
  fflush(_coverage_fout);
#line 5793
  status = 1;
#line 5793
  fprintf(_coverage_fout, "3269\n");
#line 5793
  fflush(_coverage_fout);
#line 5794
  progress = 0L;
#line 5793
  fprintf(_coverage_fout, "3270\n");
#line 5793
  fflush(_coverage_fout);
#line 5795
  GetMagickPixelPacket((Image const   *)wave_image, & zero);
#line 5793
  fprintf(_coverage_fout, "3271\n");
#line 5793
  fflush(_coverage_fout);
#line 5796
  resample_filter = AcquireResampleFilterThreadSet(image, 1, exception);
#line 5793
  fprintf(_coverage_fout, "3272\n");
#line 5793
  fflush(_coverage_fout);
#line 5797
  wave_view = AcquireCacheView((Image const   *)wave_image);
#line 5793
  fprintf(_coverage_fout, "3273\n");
#line 5793
  fflush(_coverage_fout);
#line 5801
  y = 0L;
  }
#line 5727
  fprintf(_coverage_fout, "3318\n");
#line 5727
  fflush(_coverage_fout);
#line 5801
  while (1) {
#line 5801
    fprintf(_coverage_fout, "3295\n");
#line 5801
    fflush(_coverage_fout);
#line 5801
    if (! (y < (long )wave_image->rows)) {
#line 5801
      break;
    }
#line 5801
    fprintf(_coverage_fout, "3296\n");
#line 5801
    fflush(_coverage_fout);
#line 5816
    if ((int )status == 0) {
      goto __Cont;
    }
    {
#line 5818
    fprintf(_coverage_fout, "3274\n");
#line 5818
    fflush(_coverage_fout);
#line 5818
    tmp___5 = QueueCacheViewAuthenticPixels(wave_view, 0L, y,
                                            wave_image->columns, 1UL, exception);
#line 5818
    fprintf(_coverage_fout, "3275\n");
#line 5818
    fflush(_coverage_fout);
#line 5818
    q = (PixelPacket */* __restrict  */)tmp___5;
    }
#line 5801
    fprintf(_coverage_fout, "3297\n");
#line 5801
    fflush(_coverage_fout);
#line 5820
    if ((unsigned long )q == (unsigned long )((PixelPacket *)((void *)0))) {
#line 5820
      fprintf(_coverage_fout, "3276\n");
#line 5820
      fflush(_coverage_fout);
#line 5822
      status = 0;
      goto __Cont;
    }
    {
#line 5825
    fprintf(_coverage_fout, "3277\n");
#line 5825
    fflush(_coverage_fout);
#line 5825
    tmp___6 = GetCacheViewAuthenticIndexQueue(wave_view);
#line 5825
    fprintf(_coverage_fout, "3278\n");
#line 5825
    fflush(_coverage_fout);
#line 5825
    indexes = (IndexPacket */* __restrict  */)tmp___6;
#line 5825
    fprintf(_coverage_fout, "3279\n");
#line 5825
    fflush(_coverage_fout);
#line 5826
    pixel = zero;
#line 5825
    fprintf(_coverage_fout, "3280\n");
#line 5825
    fflush(_coverage_fout);
#line 5827
    id = GetPixelCacheThreadId();
#line 5825
    fprintf(_coverage_fout, "3281\n");
#line 5825
    fflush(_coverage_fout);
#line 5828
    SetResampleFilterVirtualPixelMethod(*(resample_filter + id), 1);
#line 5825
    fprintf(_coverage_fout, "3282\n");
#line 5825
    fflush(_coverage_fout);
#line 5830
    x = 0L;
    }
#line 5801
    fprintf(_coverage_fout, "3298\n");
#line 5801
    fflush(_coverage_fout);
#line 5830
    while (1) {
#line 5830
      fprintf(_coverage_fout, "3287\n");
#line 5830
      fflush(_coverage_fout);
#line 5830
      if (! (x < (long )wave_image->columns)) {
#line 5830
        break;
      }
      {
#line 5832
      fprintf(_coverage_fout, "3283\n");
#line 5832
      fflush(_coverage_fout);
#line 5832
      ResamplePixelColor(*(resample_filter + id), (double )x,
                         (MagickRealType )y - *(sine_map + x), & pixel);
#line 5832
      fprintf(_coverage_fout, "3284\n");
#line 5832
      fflush(_coverage_fout);
#line 5834
      SetPixelPacket((Image const   *)wave_image,
                     (MagickPixelPacket const   *)(& pixel), (PixelPacket *)q,
                     (IndexPacket *)(indexes + x));
#line 5832
      fprintf(_coverage_fout, "3285\n");
#line 5832
      fflush(_coverage_fout);
#line 5835
      q ++;
#line 5832
      fprintf(_coverage_fout, "3286\n");
#line 5832
      fflush(_coverage_fout);
#line 5830
      x ++;
      }
    }
    {
#line 5837
    fprintf(_coverage_fout, "3288\n");
#line 5837
    fflush(_coverage_fout);
#line 5837
    tmp___7 = SyncCacheViewAuthenticPixels(wave_view, exception);
    }
#line 5801
    fprintf(_coverage_fout, "3299\n");
#line 5801
    fflush(_coverage_fout);
#line 5837
    if ((int )tmp___7 == 0) {
#line 5837
      fprintf(_coverage_fout, "3289\n");
#line 5837
      fflush(_coverage_fout);
#line 5838
      status = 0;
    }
#line 5801
    fprintf(_coverage_fout, "3300\n");
#line 5801
    fflush(_coverage_fout);
#line 5839
    if ((unsigned long )image->progress_monitor != (unsigned long )((MagickBooleanType (*)(char const   * ,
                                                                                           MagickOffsetType  ,
                                                                                           MagickSizeType  ,
                                                                                           void * ))((void *)0))) {
      {
#line 5847
      fprintf(_coverage_fout, "3290\n");
#line 5847
      fflush(_coverage_fout);
#line 5847
      tmp___8 = progress;
#line 5847
      fprintf(_coverage_fout, "3291\n");
#line 5847
      fflush(_coverage_fout);
#line 5847
      progress ++;
#line 5847
      fprintf(_coverage_fout, "3292\n");
#line 5847
      fflush(_coverage_fout);
#line 5847
      proceed = SetImageProgress(image, "Wave/Image", (long long )tmp___8,
                                 (unsigned long long )image->rows);
      }
#line 5839
      fprintf(_coverage_fout, "3294\n");
#line 5839
      fflush(_coverage_fout);
#line 5848
      if ((int )proceed == 0) {
#line 5848
        fprintf(_coverage_fout, "3293\n");
#line 5848
        fflush(_coverage_fout);
#line 5849
        status = 0;
      }
    }
#line 5801
    fprintf(_coverage_fout, "3301\n");
#line 5801
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ 
#line 5801
    y ++;
  }
  {
#line 5852
  fprintf(_coverage_fout, "3302\n");
#line 5852
  fflush(_coverage_fout);
#line 5852
  wave_view = DestroyCacheView(wave_view);
#line 5852
  fprintf(_coverage_fout, "3303\n");
#line 5852
  fflush(_coverage_fout);
#line 5853
  resample_filter = DestroyResampleFilterThreadSet(resample_filter);
#line 5852
  fprintf(_coverage_fout, "3304\n");
#line 5852
  fflush(_coverage_fout);
#line 5854
  tmp___9 = RelinquishMagickMemory((void *)sine_map);
#line 5852
  fprintf(_coverage_fout, "3305\n");
#line 5852
  fflush(_coverage_fout);
#line 5854
  sine_map = (MagickRealType *)tmp___9;
  }
#line 5727
  fprintf(_coverage_fout, "3319\n");
#line 5727
  fflush(_coverage_fout);
#line 5855
  if ((int )status == 0) {
    {
#line 5856
    fprintf(_coverage_fout, "3306\n");
#line 5856
    fflush(_coverage_fout);
#line 5856
    wave_image = DestroyImage(wave_image);
    }
  }
#line 5727
  fprintf(_coverage_fout, "3320\n");
#line 5727
  fflush(_coverage_fout);
#line 5857
  return (wave_image);
}
}
void __globinit_fx(void) 
{ 

  {
#line 5727
  _coverage_fout = fopen("fx.i.path", "wb");
}
}
