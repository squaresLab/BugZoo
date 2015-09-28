#line 143 "deroff-original.c"
void __globinit_deroff(void) ;
#line 1464
void *_coverage_fout ;
#line 214 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h"
typedef unsigned int size_t;
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
#line 50 "/usr/include/bits/types.h"
typedef long long __int64_t;
#line 51 "/usr/include/bits/types.h"
typedef unsigned long long __uint64_t;
#line 59 "/usr/include/bits/types.h"
typedef long long __quad_t;
#line 60 "/usr/include/bits/types.h"
typedef unsigned long long __u_quad_t;
#line 137 "/usr/include/bits/types.h"
typedef __u_quad_t __dev_t;
#line 138 "/usr/include/bits/types.h"
typedef unsigned int __uid_t;
#line 139 "/usr/include/bits/types.h"
typedef unsigned int __gid_t;
#line 140 "/usr/include/bits/types.h"
typedef unsigned long __ino_t;
#line 141 "/usr/include/bits/types.h"
typedef __u_quad_t __ino64_t;
#line 142 "/usr/include/bits/types.h"
typedef unsigned int __mode_t;
#line 143 "/usr/include/bits/types.h"
typedef unsigned int __nlink_t;
#line 144 "/usr/include/bits/types.h"
typedef long __off_t;
#line 145 "/usr/include/bits/types.h"
typedef __quad_t __off64_t;
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
typedef __u_quad_t __rlim64_t;
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
typedef __quad_t __blkcnt64_t;
#line 176 "/usr/include/bits/types.h"
typedef unsigned long __fsblkcnt_t;
#line 177 "/usr/include/bits/types.h"
typedef __u_quad_t __fsblkcnt64_t;
#line 180 "/usr/include/bits/types.h"
typedef unsigned long __fsfilcnt_t;
#line 181 "/usr/include/bits/types.h"
typedef __u_quad_t __fsfilcnt64_t;
#line 183 "/usr/include/bits/types.h"
typedef int __ssize_t;
#line 187 "/usr/include/bits/types.h"
typedef __off64_t __loff_t;
#line 188 "/usr/include/bits/types.h"
typedef __quad_t *__qaddr_t;
#line 189 "/usr/include/bits/types.h"
typedef char *__caddr_t;
#line 192 "/usr/include/bits/types.h"
typedef int __intptr_t;
#line 195 "/usr/include/bits/types.h"
typedef unsigned int __socklen_t;
#line 45 "/usr/include/stdio.h"
struct _IO_FILE;
#line 45
struct _IO_FILE;
#line 49 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 65 "/usr/include/stdio.h"
typedef struct _IO_FILE __FILE;
#line 326 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h"
typedef long wchar_t;
#line 355 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h"
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
#line 43 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
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
   char _unused2[(15U * sizeof(int ) - 4U * sizeof(void *)) - sizeof(size_t )] ;
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
#line 91 "/usr/include/stdio.h"
typedef _G_fpos_t fpos_t;
#line 288 "deroff-original.c"
struct chain {
   struct chain *nextp ;
   char *datap ;
};
#line 674 "deroff-original.c"
typedef int pacmac;
#line 680 "deroff-original.c"
struct mactab {
   int condition ;
   pacmac macname ;
   int (*func)() ;
};
/* compiler builtin: 
   void __builtin_varargs_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin_strcmp(char const   * , char const   * ) ;  */
/* compiler builtin: 
   void *__builtin___memmove_chk(void * , void const   * , unsigned int  ,
                                 unsigned int  ) ;  */
/* compiler builtin: 
   char *__builtin_strpbrk(char const   * , char const   * ) ;  */
/* compiler builtin: 
   void *__builtin_memcpy(void * , void const   * , unsigned int  ) ;  */
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
   void *__builtin___memcpy_chk(void * , void const   * , unsigned int  ,
                                unsigned int  ) ;  */
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
   int __builtin___vsprintf_chk(char * , int  , unsigned int  , char const   * ,
                                __builtin_va_list  ) ;  */
/* compiler builtin: 
   char *__builtin___strncpy_chk(char * , char const   * , unsigned int  ,
                                 unsigned int  ) ;  */
/* compiler builtin: 
   float __builtin_log10f(float  ) ;  */
/* compiler builtin: 
   double __builtin_atan(double  ) ;  */
/* compiler builtin: 
   void *__builtin_alloca(unsigned int  ) ;  */
/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin_strncmp(char const   * , char const   * , unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_sin(double  ) ;  */
/* compiler builtin: 
   long double __builtin_logl(long double  ) ;  */
/* compiler builtin: 
   float __builtin_coshf(float  ) ;  */
/* compiler builtin: 
   void *__builtin___mempcpy_chk(void * , void const   * , unsigned int  ,
                                 unsigned int  ) ;  */
/* compiler builtin: 
   char *__builtin___strcat_chk(char * , char const   * , unsigned int  ) ;  */
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
   unsigned int __builtin_object_size(void * , int  ) ;  */
/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned int  , void * ) ;  */
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
   int __builtin___sprintf_chk(char * , int  , unsigned int  , char const   * 
                               , ...) ;  */
/* compiler builtin: 
   int __builtin___vprintf_chk(int  , char const   * , __builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin___snprintf_chk(char * , unsigned int  , int  , unsigned int  ,
                                char const   *  , ...) ;  */
/* compiler builtin: 
   long double __builtin_infl(void) ;  */
/* compiler builtin: 
   void *__builtin_mempcpy(void * , void const   * , unsigned int  ) ;  */
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
   int __builtin___vsnprintf_chk(char * , unsigned int  , int  , unsigned int  ,
                                 char const   * , __builtin_va_list  ) ;  */
/* compiler builtin: 
   double __builtin_sinh(double  ) ;  */
/* compiler builtin: 
   int __builtin_ffsll(unsigned long long  ) ;  */
/* compiler builtin: 
   char *__builtin___strcpy_chk(char * , char const   * , unsigned int  ) ;  */
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
   char *__builtin___stpcpy_chk(char * , char const   * , unsigned int  ) ;  */
/* compiler builtin: 
   float __builtin_tanf(float  ) ;  */
/* compiler builtin: 
   int __builtin_parityll(unsigned long long  ) ;  */
/* compiler builtin: 
   float __builtin_ldexpf(float  , int  ) ;  */
/* compiler builtin: 
   int __builtin_types_compatible_p(unsigned int  , unsigned int  ) ;  */
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
   void *__builtin___memset_chk(void * , int  , unsigned int  , unsigned int  ) ;  */
/* compiler builtin: 
   char *__builtin___strncat_chk(char * , char const   * , unsigned int  ,
                                 unsigned int  ) ;  */
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
   char *__builtin_strncpy(char * , char const   * , unsigned int  ) ;  */
/* compiler builtin: 
   long double __builtin_powil(long double  , int  ) ;  */
/* compiler builtin: 
   float __builtin_cosf(float  ) ;  */
/* compiler builtin: 
   unsigned int __builtin_strspn(char const   * , char const   * ) ;  */
/* compiler builtin: 
   long double __builtin_modfl(long double  , long double * ) ;  */
/* compiler builtin: 
   int __builtin_parity(unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_cosh(double  ) ;  */
/* compiler builtin: 
   char *__builtin_strncat(char * , char const   * , unsigned int  ) ;  */
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
   unsigned int __builtin_strcspn(char const   * , char const   * ) ;  */
/* compiler builtin: 
   int __builtin_ffsl(unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_nanf(char const   * ) ;  */
#line 2 "deroff-original.c"
static char *sccsid  =    (char *)"@(#)deroff.c\t7.1\tULTRIX\t7/23/92";
#line 343 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
#line 344
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
#line 345
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
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
#line 145 "/usr/include/stdio.h"
extern struct _IO_FILE *stdin ;
#line 146
extern struct _IO_FILE *stdout ;
#line 147
extern struct _IO_FILE *stderr ;
#line 157
extern  __attribute__((__nothrow__)) int remove(char const   *__filename ) ;
#line 159
extern  __attribute__((__nothrow__)) int rename(char const   *__old ,
                                                char const   *__new ) ;
#line 174
extern FILE *tmpfile(void) ;
#line 188
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
#line 194
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
#line 206
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;
#line 216
extern int fclose(FILE *__stream ) ;
#line 221
extern int fflush(FILE *__stream ) ;
#line 231
extern int fflush_unlocked(FILE *__stream ) ;
#line 251
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;
#line 257
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream ) ;
#line 285
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd ,
                                                  char const   *__modes ) ;
#line 309
extern  __attribute__((__nothrow__)) void setbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ) ;
#line 313
extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ,
                                                 int __modes , size_t __n ) ;
#line 320
extern  __attribute__((__nothrow__)) void setbuffer(FILE * __restrict  __stream ,
                                                    char * __restrict  __buf ,
                                                    size_t __size ) ;
#line 324
extern  __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;
#line 333
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
#line 339
extern int printf(char const   * __restrict  __format  , ...) ;
#line 341
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;
#line 348
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
#line 354
extern int vprintf(char const   * __restrict  __format , __gnuc_va_list __arg ) ;
#line 356
extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;
#line 363
extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s ,
                                                                             size_t __maxlen ,
                                                                             char const   * __restrict  __format 
                                                                             , ...) ;
#line 367
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsnprintf)(char * __restrict  __s ,
                                                                              size_t __maxlen ,
                                                                              char const   * __restrict  __format ,
                                                                              __gnuc_va_list __arg ) ;
#line 405
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...) ;
#line 411
extern int scanf(char const   * __restrict  __format  , ...) ;
#line 413
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...) ;
#line 447
extern int fgetc(FILE *__stream ) ;
#line 448
extern int getc(FILE *__stream ) ;
#line 454
extern int getchar(void) ;
#line 466
extern int getc_unlocked(FILE *__stream ) ;
#line 467
extern int getchar_unlocked(void) ;
#line 477
extern int fgetc_unlocked(FILE *__stream ) ;
#line 489
extern int fputc(int __c , FILE *__stream ) ;
#line 490
extern int putc(int __c , FILE *__stream ) ;
#line 496
extern int putchar(int __c ) ;
#line 510
extern int fputc_unlocked(int __c , FILE *__stream ) ;
#line 518
extern int putc_unlocked(int __c , FILE *__stream ) ;
#line 519
extern int putchar_unlocked(int __c ) ;
#line 526
extern int getw(FILE *__stream ) ;
#line 529
extern int putw(int __w , FILE *__stream ) ;
#line 538
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
#line 546
extern char *gets(char *__s ) ;
#line 596
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
#line 602
extern int puts(char const   *__s ) ;
#line 609
extern int ungetc(int __c , FILE *__stream ) ;
#line 616
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
#line 622
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
#line 644
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size ,
                             size_t __n , FILE * __restrict  __stream ) ;
#line 646
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size ,
                              size_t __n , FILE * __restrict  __stream ) ;
#line 656
extern int fseek(FILE *__stream , long __off , int __whence ) ;
#line 661
extern long ftell(FILE *__stream ) ;
#line 666
extern void rewind(FILE *__stream ) ;
#line 680
extern int fseeko(FILE *__stream , __off_t __off , int __whence ) ;
#line 685
extern __off_t ftello(FILE *__stream ) ;
#line 705
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos ) ;
#line 710
extern int fsetpos(FILE *__stream , fpos_t const   *__pos ) ;
#line 733
extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;
#line 735
extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;
#line 737
extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;
#line 742
extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;
#line 743
extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
#line 744
extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
#line 753
extern void perror(char const   *__s ) ;
#line 27 "/usr/include/bits/sys_errlist.h"
extern int sys_nerr ;
#line 28
extern char const   * const  sys_errlist[] ;
#line 765 "/usr/include/stdio.h"
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
#line 770
extern  __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;
#line 780
extern FILE *popen(char const   *__command , char const   *__modes ) ;
#line 786
extern int pclose(FILE *__stream ) ;
#line 792
extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
#line 820
extern  __attribute__((__nothrow__)) void flockfile(FILE *__stream ) ;
#line 824
extern  __attribute__((__nothrow__)) int ftrylockfile(FILE *__stream ) ;
#line 827
extern  __attribute__((__nothrow__)) void funlockfile(FILE *__stream ) ;
#line 96 "deroff-original.c"
int wordflag  ;
#line 97 "deroff-original.c"
int msflag  ;
#line 98 "deroff-original.c"
int mac  ;
#line 99 "deroff-original.c"
int disp  ;
#line 100 "deroff-original.c"
int parag  ;
#line 101 "deroff-original.c"
int inmacro  ;
#line 102 "deroff-original.c"
int intable  ;
#line 103 "deroff-original.c"
int keepblock  ;
#line 105 "deroff-original.c"
char chars[128]  ;
#line 107 "deroff-original.c"
char line[512]  ;
#line 108 "deroff-original.c"
char *lp  ;
#line 110 "deroff-original.c"
int c  ;
#line 111 "deroff-original.c"
int pc  ;
#line 112 "deroff-original.c"
int ldelim  ;
#line 113 "deroff-original.c"
int rdelim  ;
#line 116 "deroff-original.c"
int argc  ;
#line 117 "deroff-original.c"
char **argv  ;
#line 119 "deroff-original.c"
char fname[50]  ;
#line 120 "deroff-original.c"
FILE *files[15]  ;
#line 121 "deroff-original.c"
FILE **filesp  ;
#line 122 "deroff-original.c"
FILE *infile  ;
#line 123
FILE *opn(char *p ) ;
#line 204
int fatal(char *s , char *p ) ;
#line 236
int work(void) ;
#line 143 "deroff-original.c"
int main(int ac , char **av ) 
{ register int i ;
  int errflg ;
  register int optchar ;
  int kflag ;
  char *p ;

  {
  __globinit_deroff();
#line 143
  fprintf(_coverage_fout, "40\n");
#line 143
  fflush(_coverage_fout);
#line 148
  errflg = 0;
#line 151
  kflag = 0;
#line 154
  wordflag = 0;
#line 155
  msflag = 0;
#line 156
  mac = 2;
#line 157
  disp = 0;
#line 158
  parag = 0;
#line 159
  inmacro = 0;
#line 160
  intable = 0;
#line 161
  ldelim = -2;
#line 162
  rdelim = -2;
#line 163
  keepblock = 1;
#line 165
  argc = ac - 1;
#line 165
  argv = av + 1;
#line 143
  fprintf(_coverage_fout, "41\n");
#line 143
  fflush(_coverage_fout);
#line 165
  while (1) {
#line 165
    fprintf(_coverage_fout, "16\n");
#line 165
    fflush(_coverage_fout);
#line 165
    if (argc > 0) {
#line 165
      fprintf(_coverage_fout, "2\n");
#line 165
      fflush(_coverage_fout);
#line 165
      if ((int )*(*(argv + 0) + 0) == 45) {
#line 165
        fprintf(_coverage_fout, "1\n");
#line 165
        fflush(_coverage_fout);
#line 165
        if (! ((int )*(*(argv + 0) + 1) != 0)) {
#line 165
          break;
        }
      } else {
#line 165
        break;
      }
    } else {
#line 165
      break;
    }
#line 165
    fprintf(_coverage_fout, "17\n");
#line 165
    fflush(_coverage_fout);
#line 171
    p = *(argv + 0) + 1;
#line 165
    fprintf(_coverage_fout, "18\n");
#line 165
    fflush(_coverage_fout);
#line 171
    while (1) {
#line 171
      fprintf(_coverage_fout, "14\n");
#line 171
      fflush(_coverage_fout);
#line 171
      if (! *p) {
#line 171
        break;
      }
#line 172
      switch ((int )*p) {
#line 172
      fprintf(_coverage_fout, "9\n");
#line 172
      fflush(_coverage_fout);
      case 112: 
#line 174
      parag = 1;
#line 175
      break;
#line 172
      fprintf(_coverage_fout, "10\n");
#line 172
      fflush(_coverage_fout);
      case 107: 
#line 177
      kflag = 1;
#line 178
      break;
#line 172
      fprintf(_coverage_fout, "11\n");
#line 172
      fflush(_coverage_fout);
      case 119: 
#line 180
      wordflag = 1;
#line 181
      kflag = 1;
#line 182
      break;
#line 172
      fprintf(_coverage_fout, "12\n");
#line 172
      fflush(_coverage_fout);
      case 109: 
#line 184
      msflag = 1;
#line 185
      keepblock = 0;
#line 186
      switch ((int )*(p + 1)) {
#line 186
      fprintf(_coverage_fout, "3\n");
#line 186
      fflush(_coverage_fout);
      case 109: 
#line 187
      mac = 1;
#line 187
      p ++;
#line 187
      break;
#line 186
      fprintf(_coverage_fout, "4\n");
#line 186
      fflush(_coverage_fout);
      case 115: 
#line 188
      mac = 0;
#line 188
      p ++;
#line 188
      break;
#line 186
      fprintf(_coverage_fout, "5\n");
#line 186
      fflush(_coverage_fout);
      case 101: 
#line 189
      mac = 2;
#line 189
      p ++;
#line 189
      break;
#line 186
      fprintf(_coverage_fout, "6\n");
#line 186
      fflush(_coverage_fout);
      case 97: 
#line 190
      mac = 3;
#line 190
      p ++;
#line 190
      break;
#line 186
      fprintf(_coverage_fout, "7\n");
#line 186
      fflush(_coverage_fout);
      case 108: 
#line 191
      disp = 1;
#line 191
      p ++;
#line 191
      break;
#line 186
      fprintf(_coverage_fout, "8\n");
#line 186
      fflush(_coverage_fout);
      default: 
#line 192
      errflg ++;
#line 192
      break;
      }
#line 194
      break;
#line 172
      fprintf(_coverage_fout, "13\n");
#line 172
      fflush(_coverage_fout);
      default: 
#line 196
      errflg ++;
      }
#line 171
      fprintf(_coverage_fout, "15\n");
#line 171
      fflush(_coverage_fout);
#line 171
      p ++;
    }
#line 165
    fprintf(_coverage_fout, "19\n");
#line 165
    fflush(_coverage_fout);
#line 165
    argc --;
#line 165
    argv ++;
  }
#line 143
  fprintf(_coverage_fout, "42\n");
#line 143
  fflush(_coverage_fout);
#line 201
  if (kflag) {
#line 201
    fprintf(_coverage_fout, "20\n");
#line 201
    fflush(_coverage_fout);
#line 202
    keepblock = 1;
  }
#line 143
  fprintf(_coverage_fout, "43\n");
#line 143
  fflush(_coverage_fout);
#line 203
  if (errflg) {
    {
#line 204
    fprintf(_coverage_fout, "21\n");
#line 204
    fflush(_coverage_fout);
#line 204
    fatal("usage: deroff [ -w ] [ -k] [ -m (a e m s l) ] [ file ] ... \n",
          (char *)((void *)0));
    }
  }
#line 143
  fprintf(_coverage_fout, "44\n");
#line 143
  fflush(_coverage_fout);
#line 211
  if (argc == 0) {
#line 211
    fprintf(_coverage_fout, "22\n");
#line 211
    fflush(_coverage_fout);
#line 212
    infile = stdin;
  } else {
    {
#line 214
    fprintf(_coverage_fout, "23\n");
#line 214
    fflush(_coverage_fout);
#line 214
    infile = opn(*(argv + 0));
#line 214
    fprintf(_coverage_fout, "24\n");
#line 214
    fflush(_coverage_fout);
#line 215
    argc --;
#line 214
    fprintf(_coverage_fout, "25\n");
#line 214
    fflush(_coverage_fout);
#line 216
    argv ++;
    }
  }
#line 143
  fprintf(_coverage_fout, "45\n");
#line 143
  fflush(_coverage_fout);
#line 220
  files[0] = infile;
#line 221
  filesp = files;
#line 223
  i = 'a';
#line 143
  fprintf(_coverage_fout, "46\n");
#line 143
  fflush(_coverage_fout);
#line 223
  while (1) {
#line 223
    fprintf(_coverage_fout, "26\n");
#line 223
    fflush(_coverage_fout);
#line 223
    if (! (i <= 122)) {
#line 223
      break;
    }
#line 223
    fprintf(_coverage_fout, "27\n");
#line 223
    fflush(_coverage_fout);
#line 224
    chars[i] = (char)4;
#line 223
    i ++;
  }
#line 143
  fprintf(_coverage_fout, "47\n");
#line 143
  fflush(_coverage_fout);
#line 225
  i = 'A';
#line 143
  fprintf(_coverage_fout, "48\n");
#line 143
  fflush(_coverage_fout);
#line 225
  while (1) {
#line 225
    fprintf(_coverage_fout, "28\n");
#line 225
    fflush(_coverage_fout);
#line 225
    if (! (i <= 90)) {
#line 225
      break;
    }
#line 225
    fprintf(_coverage_fout, "29\n");
#line 225
    fflush(_coverage_fout);
#line 226
    chars[i] = (char)4;
#line 225
    i ++;
  }
#line 143
  fprintf(_coverage_fout, "49\n");
#line 143
  fflush(_coverage_fout);
#line 227
  i = '0';
#line 143
  fprintf(_coverage_fout, "50\n");
#line 143
  fflush(_coverage_fout);
#line 227
  while (1) {
#line 227
    fprintf(_coverage_fout, "30\n");
#line 227
    fflush(_coverage_fout);
#line 227
    if (! (i <= 57)) {
#line 227
      break;
    }
#line 227
    fprintf(_coverage_fout, "31\n");
#line 227
    fflush(_coverage_fout);
#line 228
    chars[i] = (char)3;
#line 227
    i ++;
  }
  {
#line 229
  fprintf(_coverage_fout, "32\n");
#line 229
  fflush(_coverage_fout);
#line 229
  chars['\''] = (char)1;
#line 229
  fprintf(_coverage_fout, "33\n");
#line 229
  fflush(_coverage_fout);
#line 230
  chars['&'] = (char)1;
#line 229
  fprintf(_coverage_fout, "34\n");
#line 229
  fflush(_coverage_fout);
#line 231
  chars['.'] = (char)2;
#line 229
  fprintf(_coverage_fout, "35\n");
#line 229
  fflush(_coverage_fout);
#line 232
  chars[','] = (char)2;
#line 229
  fprintf(_coverage_fout, "36\n");
#line 229
  fflush(_coverage_fout);
#line 233
  chars[';'] = (char)2;
#line 229
  fprintf(_coverage_fout, "37\n");
#line 229
  fflush(_coverage_fout);
#line 234
  chars['?'] = (char)2;
#line 229
  fprintf(_coverage_fout, "38\n");
#line 229
  fflush(_coverage_fout);
#line 235
  chars[':'] = (char)2;
#line 229
  fprintf(_coverage_fout, "39\n");
#line 229
  fflush(_coverage_fout);
#line 236
  work();
  }
#line 143
  fprintf(_coverage_fout, "51\n");
#line 143
  fflush(_coverage_fout);
#line 237
  return (0);
}
}
#line 238
extern char *calloc() ;
#line 244
int eof(void) ;
#line 240 "deroff-original.c"
int skeqn(void) 
{ 

  {
#line 240
  fprintf(_coverage_fout, "68\n");
#line 240
  fflush(_coverage_fout);
#line 242
  while (1) {
    {
#line 242
    fprintf(_coverage_fout, "52\n");
#line 242
    fflush(_coverage_fout);
#line 242
    c = _IO_getc(infile);
    }
#line 242
    fprintf(_coverage_fout, "64\n");
#line 242
    fflush(_coverage_fout);
#line 242
    if (! (c != rdelim)) {
#line 242
      break;
    }
#line 242
    fprintf(_coverage_fout, "65\n");
#line 242
    fflush(_coverage_fout);
#line 243
    if (c == -1) {
      {
#line 244
      fprintf(_coverage_fout, "53\n");
#line 244
      fflush(_coverage_fout);
#line 244
      c = eof();
      }
    } else {
#line 243
      fprintf(_coverage_fout, "63\n");
#line 243
      fflush(_coverage_fout);
#line 245
      if (c == 34) {
#line 245
        fprintf(_coverage_fout, "62\n");
#line 245
        fflush(_coverage_fout);
#line 246
        while (1) {
          {
#line 246
          fprintf(_coverage_fout, "54\n");
#line 246
          fflush(_coverage_fout);
#line 246
          c = _IO_getc(infile);
          }
#line 246
          fprintf(_coverage_fout, "60\n");
#line 246
          fflush(_coverage_fout);
#line 246
          if (! (c != 34)) {
#line 246
            break;
          }
#line 246
          fprintf(_coverage_fout, "61\n");
#line 246
          fflush(_coverage_fout);
#line 247
          if (c == -1) {
            {
#line 248
            fprintf(_coverage_fout, "55\n");
#line 248
            fflush(_coverage_fout);
#line 248
            c = eof();
            }
          } else {
#line 247
            fprintf(_coverage_fout, "59\n");
#line 247
            fflush(_coverage_fout);
#line 249
            if (c == 92) {
              {
#line 250
              fprintf(_coverage_fout, "56\n");
#line 250
              fflush(_coverage_fout);
#line 250
              c = _IO_getc(infile);
              }
#line 249
              fprintf(_coverage_fout, "58\n");
#line 249
              fflush(_coverage_fout);
#line 250
              if (c == -1) {
                {
#line 251
                fprintf(_coverage_fout, "57\n");
#line 251
                fflush(_coverage_fout);
#line 251
                c = eof();
                }
              }
            }
          }
        }
      }
    }
  }
#line 240
  fprintf(_coverage_fout, "69\n");
#line 240
  fflush(_coverage_fout);
#line 252
  if (msflag) {
#line 252
    fprintf(_coverage_fout, "66\n");
#line 252
    fflush(_coverage_fout);
#line 252
    c = 'x';
#line 252
    fprintf(_coverage_fout, "67\n");
#line 252
    fflush(_coverage_fout);
#line 252
    return (c);
  }
#line 240
  fprintf(_coverage_fout, "70\n");
#line 240
  fflush(_coverage_fout);
#line 253
  c = ' ';
#line 240
  fprintf(_coverage_fout, "71\n");
#line 240
  fflush(_coverage_fout);
#line 253
  return (c);
}
}
#line 264
extern int ( /* missing proto */  exit)() ;
#line 256 "deroff-original.c"
FILE *opn(char *p ) 
{ FILE *fd ;

  {
  {
#line 261
  fprintf(_coverage_fout, "72\n");
#line 261
  fflush(_coverage_fout);
#line 261
  fd = fopen((char const   */* __restrict  */)p,
             (char const   */* __restrict  */)"r");
  }
#line 256
  fprintf(_coverage_fout, "76\n");
#line 256
  fflush(_coverage_fout);
#line 261
  if ((unsigned int )fd == (unsigned int )((void *)0)) {
    {
#line 262
    fprintf(_coverage_fout, "73\n");
#line 262
    fflush(_coverage_fout);
#line 262
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Deroff: ");
#line 262
    fprintf(_coverage_fout, "74\n");
#line 262
    fflush(_coverage_fout);
#line 263
    perror((char const   *)p);
#line 262
    fprintf(_coverage_fout, "75\n");
#line 262
    fflush(_coverage_fout);
#line 264
    exit(1);
    }
  }
#line 256
  fprintf(_coverage_fout, "77\n");
#line 256
  fflush(_coverage_fout);
#line 267
  return (fd);
}
}
#line 270 "deroff-original.c"
int eof(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
#line 270
  fprintf(_coverage_fout, "92\n");
#line 270
  fflush(_coverage_fout);
#line 272
  if ((unsigned int )infile != (unsigned int )stdin) {
    {
#line 273
    fprintf(_coverage_fout, "78\n");
#line 273
    fflush(_coverage_fout);
#line 273
    fclose(infile);
    }
  }
#line 270
  fprintf(_coverage_fout, "93\n");
#line 270
  fflush(_coverage_fout);
#line 274
  if ((unsigned int )filesp > (unsigned int )(files)) {
#line 274
    fprintf(_coverage_fout, "79\n");
#line 274
    fflush(_coverage_fout);
#line 275
    filesp --;
#line 275
    infile = *filesp;
  } else {
#line 274
    fprintf(_coverage_fout, "84\n");
#line 274
    fflush(_coverage_fout);
#line 276
    if (argc > 0) {
      {
#line 277
      fprintf(_coverage_fout, "80\n");
#line 277
      fflush(_coverage_fout);
#line 277
      infile = opn(*(argv + 0));
#line 277
      fprintf(_coverage_fout, "81\n");
#line 277
      fflush(_coverage_fout);
#line 278
      argc --;
#line 277
      fprintf(_coverage_fout, "82\n");
#line 277
      fflush(_coverage_fout);
#line 279
      argv ++;
      }
    } else {
      {
#line 281
      fprintf(_coverage_fout, "83\n");
#line 281
      fflush(_coverage_fout);
#line 281
      exit(0);
      }
    }
  }
  {
#line 282
  fprintf(_coverage_fout, "85\n");
#line 282
  fflush(_coverage_fout);
#line 282
  c = _IO_getc(infile);
  }
#line 270
  fprintf(_coverage_fout, "94\n");
#line 270
  fflush(_coverage_fout);
#line 282
  if (c == -1) {
    {
#line 282
    fprintf(_coverage_fout, "86\n");
#line 282
    fflush(_coverage_fout);
#line 282
    tmp___2 = eof();
    }
  } else {
#line 282
    fprintf(_coverage_fout, "91\n");
#line 282
    fflush(_coverage_fout);
#line 282
    if (c == ldelim) {
#line 282
      fprintf(_coverage_fout, "89\n");
#line 282
      fflush(_coverage_fout);
#line 282
      if ((unsigned int )filesp == (unsigned int )(files)) {
        {
#line 282
        fprintf(_coverage_fout, "87\n");
#line 282
        fflush(_coverage_fout);
#line 282
        tmp___2 = skeqn();
        }
      } else {
#line 282
        fprintf(_coverage_fout, "88\n");
#line 282
        fflush(_coverage_fout);
#line 282
        tmp___2 = c;
      }
    } else {
#line 282
      fprintf(_coverage_fout, "90\n");
#line 282
      fflush(_coverage_fout);
#line 282
      tmp___2 = c;
    }
  }
#line 270
  fprintf(_coverage_fout, "95\n");
#line 270
  fflush(_coverage_fout);
#line 282
  return (tmp___2);
}
}
#line 293
int getfname(void) ;
#line 293 "deroff-original.c"
static struct chain *namechain  =    (struct chain *)((void *)0);
#line 294
char *copys(char *s ) ;
#line 307
extern int ( /* missing proto */  strcmp)() ;
#line 285 "deroff-original.c"
int getfname(void) 
{ register char *p ;
  struct chain *chainblock ;
  register struct chain *q ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  char *tmp___5 ;

  {
#line 285
  fprintf(_coverage_fout, "135\n");
#line 285
  fflush(_coverage_fout);
#line 296
  while (1) {
    {
#line 296
    fprintf(_coverage_fout, "96\n");
#line 296
    fflush(_coverage_fout);
#line 296
    c = _IO_getc(infile);
    }
#line 296
    fprintf(_coverage_fout, "103\n");
#line 296
    fflush(_coverage_fout);
#line 296
    if (c == -1) {
      {
#line 296
      fprintf(_coverage_fout, "97\n");
#line 296
      fflush(_coverage_fout);
#line 296
      tmp___2 = eof();
      }
    } else {
#line 296
      fprintf(_coverage_fout, "102\n");
#line 296
      fflush(_coverage_fout);
#line 296
      if (c == ldelim) {
#line 296
        fprintf(_coverage_fout, "100\n");
#line 296
        fflush(_coverage_fout);
#line 296
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 296
          fprintf(_coverage_fout, "98\n");
#line 296
          fflush(_coverage_fout);
#line 296
          tmp___2 = skeqn();
          }
        } else {
#line 296
          fprintf(_coverage_fout, "99\n");
#line 296
          fflush(_coverage_fout);
#line 296
          tmp___2 = c;
        }
      } else {
#line 296
        fprintf(_coverage_fout, "101\n");
#line 296
        fflush(_coverage_fout);
#line 296
        tmp___2 = c;
      }
    }
#line 296
    fprintf(_coverage_fout, "104\n");
#line 296
    fflush(_coverage_fout);
#line 296
    if (! (tmp___2 == 32)) {
#line 296
      break;
    }
  }
#line 285
  fprintf(_coverage_fout, "136\n");
#line 285
  fflush(_coverage_fout);
#line 298
  p = fname;
#line 285
  fprintf(_coverage_fout, "137\n");
#line 285
  fflush(_coverage_fout);
#line 298
  while (1) {
#line 298
    fprintf(_coverage_fout, "113\n");
#line 298
    fflush(_coverage_fout);
#line 298
    *p = (char )c;
#line 298
    fprintf(_coverage_fout, "114\n");
#line 298
    fflush(_coverage_fout);
#line 298
    if ((int )*p != 10) {
#line 298
      fprintf(_coverage_fout, "107\n");
#line 298
      fflush(_coverage_fout);
#line 298
      if (c != 32) {
#line 298
        fprintf(_coverage_fout, "106\n");
#line 298
        fflush(_coverage_fout);
#line 298
        if (c != 9) {
#line 298
          fprintf(_coverage_fout, "105\n");
#line 298
          fflush(_coverage_fout);
#line 298
          if (! (c != 92)) {
#line 298
            break;
          }
        } else {
#line 298
          break;
        }
      } else {
#line 298
        break;
      }
    } else {
#line 298
      break;
    }
    {
#line 299
    fprintf(_coverage_fout, "108\n");
#line 299
    fflush(_coverage_fout);
#line 299
    c = _IO_getc(infile);
    }
#line 298
    fprintf(_coverage_fout, "115\n");
#line 298
    fflush(_coverage_fout);
#line 299
    if (c == -1) {
      {
#line 299
      fprintf(_coverage_fout, "109\n");
#line 299
      fflush(_coverage_fout);
#line 299
      eof();
      }
    } else {
#line 299
      fprintf(_coverage_fout, "112\n");
#line 299
      fflush(_coverage_fout);
#line 299
      if (c == ldelim) {
#line 299
        fprintf(_coverage_fout, "111\n");
#line 299
        fflush(_coverage_fout);
#line 299
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 299
          fprintf(_coverage_fout, "110\n");
#line 299
          fflush(_coverage_fout);
#line 299
          skeqn();
          }
        }
      }
    }
#line 298
    fprintf(_coverage_fout, "116\n");
#line 298
    fflush(_coverage_fout);
#line 298
    p ++;
  }
#line 285
  fprintf(_coverage_fout, "138\n");
#line 285
  fflush(_coverage_fout);
#line 300
  *p = (char )'\000';
#line 285
  fprintf(_coverage_fout, "139\n");
#line 285
  fflush(_coverage_fout);
#line 301
  while (1) {
#line 301
    fprintf(_coverage_fout, "122\n");
#line 301
    fflush(_coverage_fout);
#line 301
    if (! (c != 10)) {
#line 301
      break;
    }
    {
#line 302
    fprintf(_coverage_fout, "117\n");
#line 302
    fflush(_coverage_fout);
#line 302
    c = _IO_getc(infile);
    }
#line 301
    fprintf(_coverage_fout, "123\n");
#line 301
    fflush(_coverage_fout);
#line 302
    if (c == -1) {
      {
#line 302
      fprintf(_coverage_fout, "118\n");
#line 302
      fflush(_coverage_fout);
#line 302
      eof();
      }
    } else {
#line 302
      fprintf(_coverage_fout, "121\n");
#line 302
      fflush(_coverage_fout);
#line 302
      if (c == ldelim) {
#line 302
        fprintf(_coverage_fout, "120\n");
#line 302
        fflush(_coverage_fout);
#line 302
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 302
          fprintf(_coverage_fout, "119\n");
#line 302
          fflush(_coverage_fout);
#line 302
          skeqn();
          }
        }
      }
    }
  }
#line 285
  fprintf(_coverage_fout, "140\n");
#line 285
  fflush(_coverage_fout);
#line 306
  q = namechain;
#line 285
  fprintf(_coverage_fout, "141\n");
#line 285
  fflush(_coverage_fout);
#line 306
  while (1) {
#line 306
    fprintf(_coverage_fout, "127\n");
#line 306
    fflush(_coverage_fout);
#line 306
    if (! q) {
#line 306
      break;
    }
    {
#line 307
    fprintf(_coverage_fout, "124\n");
#line 307
    fflush(_coverage_fout);
#line 307
    tmp___4 = strcmp(fname, q->datap);
    }
#line 306
    fprintf(_coverage_fout, "128\n");
#line 306
    fflush(_coverage_fout);
#line 307
    if (! tmp___4) {
#line 307
      fprintf(_coverage_fout, "125\n");
#line 307
      fflush(_coverage_fout);
#line 309
      fname[0] = (char )'\000';
#line 307
      fprintf(_coverage_fout, "126\n");
#line 307
      fflush(_coverage_fout);
#line 310
      return;
    }
#line 306
    fprintf(_coverage_fout, "129\n");
#line 306
    fflush(_coverage_fout);
#line 306
    q = q->nextp;
  }
  {
#line 313
  fprintf(_coverage_fout, "130\n");
#line 313
  fflush(_coverage_fout);
#line 313
  tmp___5 = calloc(1, sizeof(*chainblock));
#line 313
  fprintf(_coverage_fout, "131\n");
#line 313
  fflush(_coverage_fout);
#line 313
  q = (struct chain *)tmp___5;
#line 313
  fprintf(_coverage_fout, "132\n");
#line 313
  fflush(_coverage_fout);
#line 314
  q->nextp = namechain;
#line 313
  fprintf(_coverage_fout, "133\n");
#line 313
  fflush(_coverage_fout);
#line 315
  q->datap = copys(fname);
#line 313
  fprintf(_coverage_fout, "134\n");
#line 313
  fflush(_coverage_fout);
#line 316
  namechain = q;
  }
#line 285
  fprintf(_coverage_fout, "142\n");
#line 285
  fflush(_coverage_fout);
#line 317
  return (0);
}
}
#line 319 "deroff-original.c"
int fatal(char *s , char *p ) 
{ 

  {
  {
#line 322
  fprintf(_coverage_fout, "143\n");
#line 322
  fflush(_coverage_fout);
#line 322
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"Deroff: ");
#line 322
  fprintf(_coverage_fout, "144\n");
#line 322
  fflush(_coverage_fout);
#line 323
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)s, p);
#line 322
  fprintf(_coverage_fout, "145\n");
#line 322
  fflush(_coverage_fout);
#line 324
  exit(1);
  }
}
}
#line 333
int msputwords(int macline ) ;
#line 328 "deroff-original.c"
int textline(char *str , int const_val ) 
{ 

  {
#line 328
  fprintf(_coverage_fout, "149\n");
#line 328
  fflush(_coverage_fout);
#line 332
  if (wordflag) {
    {
#line 333
    fprintf(_coverage_fout, "146\n");
#line 333
    fflush(_coverage_fout);
#line 333
    msputwords(0);
    }
#line 332
    fprintf(_coverage_fout, "147\n");
#line 332
    fflush(_coverage_fout);
#line 334
    return;
  }
  {
#line 336
  fprintf(_coverage_fout, "148\n");
#line 336
  fflush(_coverage_fout);
#line 336
  puts((char const   *)str);
  }
#line 328
  fprintf(_coverage_fout, "150\n");
#line 328
  fflush(_coverage_fout);
#line 337
  return (0);
}
}
#line 348
int comline(void) ;
#line 350
int regline(int (*pfunc)() , int const_val ) ;
#line 339 "deroff-original.c"
int work(void) 
{ 

  {
#line 339
  fprintf(_coverage_fout, "162\n");
#line 339
  fflush(_coverage_fout);
#line 341
  while (1) {
    {
#line 343
    fprintf(_coverage_fout, "151\n");
#line 343
    fflush(_coverage_fout);
#line 343
    c = _IO_getc(infile);
    }
#line 341
    fprintf(_coverage_fout, "160\n");
#line 341
    fflush(_coverage_fout);
#line 343
    if (c == -1) {
      {
#line 343
      fprintf(_coverage_fout, "152\n");
#line 343
      fflush(_coverage_fout);
#line 343
      eof();
      }
    } else {
#line 343
      fprintf(_coverage_fout, "155\n");
#line 343
      fflush(_coverage_fout);
#line 343
      if (c == ldelim) {
#line 343
        fprintf(_coverage_fout, "154\n");
#line 343
        fflush(_coverage_fout);
#line 343
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 343
          fprintf(_coverage_fout, "153\n");
#line 343
          fflush(_coverage_fout);
#line 343
          skeqn();
          }
        }
      }
    }
#line 341
    fprintf(_coverage_fout, "161\n");
#line 341
    fflush(_coverage_fout);
#line 347
    if (c == 46) {
      {
#line 348
      fprintf(_coverage_fout, "156\n");
#line 348
      fflush(_coverage_fout);
#line 348
      comline();
      }
    } else {
#line 347
      fprintf(_coverage_fout, "159\n");
#line 347
      fflush(_coverage_fout);
#line 347
      if (c == 39) {
        {
#line 348
        fprintf(_coverage_fout, "157\n");
#line 348
        fflush(_coverage_fout);
#line 348
        comline();
        }
      } else {
        {
#line 350
        fprintf(_coverage_fout, "158\n");
#line 350
        fflush(_coverage_fout);
#line 350
        regline(& textline, 2);
        }
      }
    }
  }
}
}
#line 364
int backsl(void) ;
#line 354 "deroff-original.c"
int regline(int (*pfunc)() , int const_val ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;

  {
#line 354
  fprintf(_coverage_fout, "205\n");
#line 354
  fflush(_coverage_fout);
#line 358
  line[0] = (char )c;
#line 359
  lp = line;
#line 354
  fprintf(_coverage_fout, "206\n");
#line 354
  fflush(_coverage_fout);
#line 360
  while (1) {
#line 360
    fprintf(_coverage_fout, "201\n");
#line 360
    fflush(_coverage_fout);
#line 362
    if (c == 92) {
      {
#line 363
      fprintf(_coverage_fout, "163\n");
#line 363
      fflush(_coverage_fout);
#line 363
      *lp = (char )' ';
#line 363
      fprintf(_coverage_fout, "164\n");
#line 363
      fflush(_coverage_fout);
#line 364
      backsl();
      }
    }
#line 360
    fprintf(_coverage_fout, "202\n");
#line 360
    fflush(_coverage_fout);
#line 366
    if (c == 10) {
#line 367
      break;
    }
#line 360
    fprintf(_coverage_fout, "203\n");
#line 360
    fflush(_coverage_fout);
#line 368
    if (intable) {
#line 368
      fprintf(_coverage_fout, "189\n");
#line 368
      fflush(_coverage_fout);
#line 368
      if (c == 84) {
        {
#line 369
        fprintf(_coverage_fout, "165\n");
#line 369
        fflush(_coverage_fout);
#line 369
        lp ++;
#line 369
        fprintf(_coverage_fout, "166\n");
#line 369
        fflush(_coverage_fout);
#line 369
        c = _IO_getc(infile);
        }
#line 368
        fprintf(_coverage_fout, "187\n");
#line 368
        fflush(_coverage_fout);
#line 369
        if (c == -1) {
          {
#line 369
          fprintf(_coverage_fout, "167\n");
#line 369
          fflush(_coverage_fout);
#line 369
          tmp___2 = eof();
#line 369
          fprintf(_coverage_fout, "168\n");
#line 369
          fflush(_coverage_fout);
#line 369
          *lp = (char )tmp___2;
          }
        } else {
#line 369
          fprintf(_coverage_fout, "174\n");
#line 369
          fflush(_coverage_fout);
#line 369
          if (c == ldelim) {
#line 369
            fprintf(_coverage_fout, "172\n");
#line 369
            fflush(_coverage_fout);
#line 369
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 369
              fprintf(_coverage_fout, "169\n");
#line 369
              fflush(_coverage_fout);
#line 369
              tmp___4 = skeqn();
#line 369
              fprintf(_coverage_fout, "170\n");
#line 369
              fflush(_coverage_fout);
#line 369
              *lp = (char )tmp___4;
              }
            } else {
#line 369
              fprintf(_coverage_fout, "171\n");
#line 369
              fflush(_coverage_fout);
#line 369
              *lp = (char )c;
            }
          } else {
#line 369
            fprintf(_coverage_fout, "173\n");
#line 369
            fflush(_coverage_fout);
#line 369
            *lp = (char )c;
          }
        }
#line 368
        fprintf(_coverage_fout, "188\n");
#line 368
        fflush(_coverage_fout);
#line 370
        if (c == 123) {
          goto _L;
        } else {
#line 370
          fprintf(_coverage_fout, "186\n");
#line 370
          fflush(_coverage_fout);
#line 370
          if (c == 125) {
            _L: /* CIL Label */ 
            {
#line 371
            fprintf(_coverage_fout, "175\n");
#line 371
            fflush(_coverage_fout);
#line 371
            *(lp + -1) = (char )' ';
#line 371
            fprintf(_coverage_fout, "176\n");
#line 371
            fflush(_coverage_fout);
#line 372
            c = _IO_getc(infile);
            }
#line 370
            fprintf(_coverage_fout, "185\n");
#line 370
            fflush(_coverage_fout);
#line 372
            if (c == -1) {
              {
#line 372
              fprintf(_coverage_fout, "177\n");
#line 372
              fflush(_coverage_fout);
#line 372
              tmp___8 = eof();
#line 372
              fprintf(_coverage_fout, "178\n");
#line 372
              fflush(_coverage_fout);
#line 372
              *lp = (char )tmp___8;
              }
            } else {
#line 372
              fprintf(_coverage_fout, "184\n");
#line 372
              fflush(_coverage_fout);
#line 372
              if (c == ldelim) {
#line 372
                fprintf(_coverage_fout, "182\n");
#line 372
                fflush(_coverage_fout);
#line 372
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  {
#line 372
                  fprintf(_coverage_fout, "179\n");
#line 372
                  fflush(_coverage_fout);
#line 372
                  tmp___10 = skeqn();
#line 372
                  fprintf(_coverage_fout, "180\n");
#line 372
                  fflush(_coverage_fout);
#line 372
                  *lp = (char )tmp___10;
                  }
                } else {
#line 372
                  fprintf(_coverage_fout, "181\n");
#line 372
                  fflush(_coverage_fout);
#line 372
                  *lp = (char )c;
                }
              } else {
#line 372
                fprintf(_coverage_fout, "183\n");
#line 372
                fflush(_coverage_fout);
#line 372
                *lp = (char )c;
              }
            }
          }
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0: /* CIL Label */ 
      {
#line 375
      fprintf(_coverage_fout, "190\n");
#line 375
      fflush(_coverage_fout);
#line 375
      lp ++;
#line 375
      fprintf(_coverage_fout, "191\n");
#line 375
      fflush(_coverage_fout);
#line 375
      c = _IO_getc(infile);
      }
#line 368
      fprintf(_coverage_fout, "200\n");
#line 368
      fflush(_coverage_fout);
#line 375
      if (c == -1) {
        {
#line 375
        fprintf(_coverage_fout, "192\n");
#line 375
        fflush(_coverage_fout);
#line 375
        tmp___14 = eof();
#line 375
        fprintf(_coverage_fout, "193\n");
#line 375
        fflush(_coverage_fout);
#line 375
        *lp = (char )tmp___14;
        }
      } else {
#line 375
        fprintf(_coverage_fout, "199\n");
#line 375
        fflush(_coverage_fout);
#line 375
        if (c == ldelim) {
#line 375
          fprintf(_coverage_fout, "197\n");
#line 375
          fflush(_coverage_fout);
#line 375
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 375
            fprintf(_coverage_fout, "194\n");
#line 375
            fflush(_coverage_fout);
#line 375
            tmp___16 = skeqn();
#line 375
            fprintf(_coverage_fout, "195\n");
#line 375
            fflush(_coverage_fout);
#line 375
            *lp = (char )tmp___16;
            }
          } else {
#line 375
            fprintf(_coverage_fout, "196\n");
#line 375
            fflush(_coverage_fout);
#line 375
            *lp = (char )c;
          }
        } else {
#line 375
          fprintf(_coverage_fout, "198\n");
#line 375
          fflush(_coverage_fout);
#line 375
          *lp = (char )c;
        }
      }
    }
  }
#line 354
  fprintf(_coverage_fout, "207\n");
#line 354
  fflush(_coverage_fout);
#line 379
  *lp = (char )'\000';
#line 354
  fprintf(_coverage_fout, "208\n");
#line 354
  fflush(_coverage_fout);
#line 381
  if ((int )line[0] != 0) {
    {
#line 382
    fprintf(_coverage_fout, "204\n");
#line 382
    fflush(_coverage_fout);
#line 382
    (*pfunc)(line, const_val);
    }
  }
#line 354
  fprintf(_coverage_fout, "209\n");
#line 354
  fflush(_coverage_fout);
#line 383
  return (0);
}
}
#line 385 "deroff-original.c"
int macro(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;

  {
#line 385
  fprintf(_coverage_fout, "269\n");
#line 385
  fflush(_coverage_fout);
#line 387
  if (msflag) {
#line 387
    fprintf(_coverage_fout, "257\n");
#line 387
    fflush(_coverage_fout);
#line 388
    while (1) {
#line 388
      fprintf(_coverage_fout, "244\n");
#line 388
      fflush(_coverage_fout);
#line 389
      while (1) {
        {
#line 389
        fprintf(_coverage_fout, "210\n");
#line 389
        fflush(_coverage_fout);
#line 389
        c = _IO_getc(infile);
        }
#line 389
        fprintf(_coverage_fout, "217\n");
#line 389
        fflush(_coverage_fout);
#line 389
        if (c == -1) {
          {
#line 389
          fprintf(_coverage_fout, "211\n");
#line 389
          fflush(_coverage_fout);
#line 389
          tmp___2 = eof();
          }
        } else {
#line 389
          fprintf(_coverage_fout, "216\n");
#line 389
          fflush(_coverage_fout);
#line 389
          if (c == ldelim) {
#line 389
            fprintf(_coverage_fout, "214\n");
#line 389
            fflush(_coverage_fout);
#line 389
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 389
              fprintf(_coverage_fout, "212\n");
#line 389
              fflush(_coverage_fout);
#line 389
              tmp___2 = skeqn();
              }
            } else {
#line 389
              fprintf(_coverage_fout, "213\n");
#line 389
              fflush(_coverage_fout);
#line 389
              tmp___2 = c;
            }
          } else {
#line 389
            fprintf(_coverage_fout, "215\n");
#line 389
            fflush(_coverage_fout);
#line 389
            tmp___2 = c;
          }
        }
#line 389
        fprintf(_coverage_fout, "218\n");
#line 389
        fflush(_coverage_fout);
#line 389
        if (! (tmp___2 != 10)) {
#line 389
          break;
        }
      }
      {
#line 388
      fprintf(_coverage_fout, "219\n");
#line 388
      fflush(_coverage_fout);
#line 388
      c = _IO_getc(infile);
      }
#line 388
      fprintf(_coverage_fout, "245\n");
#line 388
      fflush(_coverage_fout);
#line 388
      if (c == -1) {
        {
#line 388
        fprintf(_coverage_fout, "220\n");
#line 388
        fflush(_coverage_fout);
#line 388
        tmp___7 = eof();
        }
      } else {
#line 388
        fprintf(_coverage_fout, "225\n");
#line 388
        fflush(_coverage_fout);
#line 388
        if (c == ldelim) {
#line 388
          fprintf(_coverage_fout, "223\n");
#line 388
          fflush(_coverage_fout);
#line 388
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 388
            fprintf(_coverage_fout, "221\n");
#line 388
            fflush(_coverage_fout);
#line 388
            tmp___7 = skeqn();
            }
          } else {
#line 388
            fprintf(_coverage_fout, "222\n");
#line 388
            fflush(_coverage_fout);
#line 388
            tmp___7 = c;
          }
        } else {
#line 388
          fprintf(_coverage_fout, "224\n");
#line 388
          fflush(_coverage_fout);
#line 388
          tmp___7 = c;
        }
      }
#line 388
      fprintf(_coverage_fout, "246\n");
#line 388
      fflush(_coverage_fout);
#line 388
      if (! (tmp___7 != 46)) {
        {
#line 388
        fprintf(_coverage_fout, "226\n");
#line 388
        fflush(_coverage_fout);
#line 388
        c = _IO_getc(infile);
        }
#line 388
        fprintf(_coverage_fout, "242\n");
#line 388
        fflush(_coverage_fout);
#line 388
        if (c == -1) {
          {
#line 388
          fprintf(_coverage_fout, "227\n");
#line 388
          fflush(_coverage_fout);
#line 388
          tmp___12 = eof();
          }
        } else {
#line 388
          fprintf(_coverage_fout, "232\n");
#line 388
          fflush(_coverage_fout);
#line 388
          if (c == ldelim) {
#line 388
            fprintf(_coverage_fout, "230\n");
#line 388
            fflush(_coverage_fout);
#line 388
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 388
              fprintf(_coverage_fout, "228\n");
#line 388
              fflush(_coverage_fout);
#line 388
              tmp___12 = skeqn();
              }
            } else {
#line 388
              fprintf(_coverage_fout, "229\n");
#line 388
              fflush(_coverage_fout);
#line 388
              tmp___12 = c;
            }
          } else {
#line 388
            fprintf(_coverage_fout, "231\n");
#line 388
            fflush(_coverage_fout);
#line 388
            tmp___12 = c;
          }
        }
#line 388
        fprintf(_coverage_fout, "243\n");
#line 388
        fflush(_coverage_fout);
#line 388
        if (! (tmp___12 != 46)) {
          {
#line 388
          fprintf(_coverage_fout, "233\n");
#line 388
          fflush(_coverage_fout);
#line 388
          c = _IO_getc(infile);
          }
#line 388
          fprintf(_coverage_fout, "240\n");
#line 388
          fflush(_coverage_fout);
#line 388
          if (c == -1) {
            {
#line 388
            fprintf(_coverage_fout, "234\n");
#line 388
            fflush(_coverage_fout);
#line 388
            tmp___17 = eof();
            }
          } else {
#line 388
            fprintf(_coverage_fout, "239\n");
#line 388
            fflush(_coverage_fout);
#line 388
            if (c == ldelim) {
#line 388
              fprintf(_coverage_fout, "237\n");
#line 388
              fflush(_coverage_fout);
#line 388
              if ((unsigned int )filesp == (unsigned int )(files)) {
                {
#line 388
                fprintf(_coverage_fout, "235\n");
#line 388
                fflush(_coverage_fout);
#line 388
                tmp___17 = skeqn();
                }
              } else {
#line 388
                fprintf(_coverage_fout, "236\n");
#line 388
                fflush(_coverage_fout);
#line 388
                tmp___17 = c;
              }
            } else {
#line 388
              fprintf(_coverage_fout, "238\n");
#line 388
              fflush(_coverage_fout);
#line 388
              tmp___17 = c;
            }
          }
#line 388
          fprintf(_coverage_fout, "241\n");
#line 388
          fflush(_coverage_fout);
#line 388
          if (! (tmp___17 == 46)) {
#line 388
            break;
          }
        }
      }
    }
#line 387
    fprintf(_coverage_fout, "258\n");
#line 387
    fflush(_coverage_fout);
#line 391
    if (c != 10) {
#line 391
      fprintf(_coverage_fout, "256\n");
#line 391
      fflush(_coverage_fout);
#line 391
      while (1) {
        {
#line 391
        fprintf(_coverage_fout, "247\n");
#line 391
        fflush(_coverage_fout);
#line 391
        c = _IO_getc(infile);
        }
#line 391
        fprintf(_coverage_fout, "254\n");
#line 391
        fflush(_coverage_fout);
#line 391
        if (c == -1) {
          {
#line 391
          fprintf(_coverage_fout, "248\n");
#line 391
          fflush(_coverage_fout);
#line 391
          tmp___22 = eof();
          }
        } else {
#line 391
          fprintf(_coverage_fout, "253\n");
#line 391
          fflush(_coverage_fout);
#line 391
          if (c == ldelim) {
#line 391
            fprintf(_coverage_fout, "251\n");
#line 391
            fflush(_coverage_fout);
#line 391
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 391
              fprintf(_coverage_fout, "249\n");
#line 391
              fflush(_coverage_fout);
#line 391
              tmp___22 = skeqn();
              }
            } else {
#line 391
              fprintf(_coverage_fout, "250\n");
#line 391
              fflush(_coverage_fout);
#line 391
              tmp___22 = c;
            }
          } else {
#line 391
            fprintf(_coverage_fout, "252\n");
#line 391
            fflush(_coverage_fout);
#line 391
            tmp___22 = c;
          }
        }
#line 391
        fprintf(_coverage_fout, "255\n");
#line 391
        fflush(_coverage_fout);
#line 391
        if (! (tmp___22 != 10)) {
#line 391
          break;
        }
      }
    }
#line 387
    fprintf(_coverage_fout, "259\n");
#line 387
    fflush(_coverage_fout);
#line 392
    return;
  }
#line 385
  fprintf(_coverage_fout, "270\n");
#line 385
  fflush(_coverage_fout);
#line 394
  while (1) {
    {
#line 394
    fprintf(_coverage_fout, "260\n");
#line 394
    fflush(_coverage_fout);
#line 394
    c = _IO_getc(infile);
    }
#line 394
    fprintf(_coverage_fout, "267\n");
#line 394
    fflush(_coverage_fout);
#line 394
    if (c == -1) {
      {
#line 394
      fprintf(_coverage_fout, "261\n");
#line 394
      fflush(_coverage_fout);
#line 394
      tmp___27 = eof();
      }
    } else {
#line 394
      fprintf(_coverage_fout, "266\n");
#line 394
      fflush(_coverage_fout);
#line 394
      if (c == ldelim) {
#line 394
        fprintf(_coverage_fout, "264\n");
#line 394
        fflush(_coverage_fout);
#line 394
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 394
          fprintf(_coverage_fout, "262\n");
#line 394
          fflush(_coverage_fout);
#line 394
          tmp___27 = skeqn();
          }
        } else {
#line 394
          fprintf(_coverage_fout, "263\n");
#line 394
          fflush(_coverage_fout);
#line 394
          tmp___27 = c;
        }
      } else {
#line 394
        fprintf(_coverage_fout, "265\n");
#line 394
        fflush(_coverage_fout);
#line 394
        tmp___27 = c;
      }
    }
#line 394
    fprintf(_coverage_fout, "268\n");
#line 394
    fflush(_coverage_fout);
#line 394
    if (! (tmp___27 != 10)) {
#line 394
      break;
    }
  }
#line 385
  fprintf(_coverage_fout, "271\n");
#line 385
  fflush(_coverage_fout);
#line 395
  inmacro = 1;
#line 385
  fprintf(_coverage_fout, "272\n");
#line 385
  fflush(_coverage_fout);
#line 396
  return (0);
}
}
#line 398 "deroff-original.c"
int tbl(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;

  {
#line 398
  fprintf(_coverage_fout, "291\n");
#line 398
  fflush(_coverage_fout);
#line 400
  while (1) {
    {
#line 400
    fprintf(_coverage_fout, "273\n");
#line 400
    fflush(_coverage_fout);
#line 400
    c = _IO_getc(infile);
    }
#line 400
    fprintf(_coverage_fout, "280\n");
#line 400
    fflush(_coverage_fout);
#line 400
    if (c == -1) {
      {
#line 400
      fprintf(_coverage_fout, "274\n");
#line 400
      fflush(_coverage_fout);
#line 400
      tmp___2 = eof();
      }
    } else {
#line 400
      fprintf(_coverage_fout, "279\n");
#line 400
      fflush(_coverage_fout);
#line 400
      if (c == ldelim) {
#line 400
        fprintf(_coverage_fout, "277\n");
#line 400
        fflush(_coverage_fout);
#line 400
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 400
          fprintf(_coverage_fout, "275\n");
#line 400
          fflush(_coverage_fout);
#line 400
          tmp___2 = skeqn();
          }
        } else {
#line 400
          fprintf(_coverage_fout, "276\n");
#line 400
          fflush(_coverage_fout);
#line 400
          tmp___2 = c;
        }
      } else {
#line 400
        fprintf(_coverage_fout, "278\n");
#line 400
        fflush(_coverage_fout);
#line 400
        tmp___2 = c;
      }
    }
#line 400
    fprintf(_coverage_fout, "281\n");
#line 400
    fflush(_coverage_fout);
#line 400
    if (! (tmp___2 != 46)) {
#line 400
      break;
    }
  }
#line 398
  fprintf(_coverage_fout, "292\n");
#line 398
  fflush(_coverage_fout);
#line 401
  while (1) {
    {
#line 401
    fprintf(_coverage_fout, "282\n");
#line 401
    fflush(_coverage_fout);
#line 401
    c = _IO_getc(infile);
    }
#line 401
    fprintf(_coverage_fout, "289\n");
#line 401
    fflush(_coverage_fout);
#line 401
    if (c == -1) {
      {
#line 401
      fprintf(_coverage_fout, "283\n");
#line 401
      fflush(_coverage_fout);
#line 401
      tmp___7 = eof();
      }
    } else {
#line 401
      fprintf(_coverage_fout, "288\n");
#line 401
      fflush(_coverage_fout);
#line 401
      if (c == ldelim) {
#line 401
        fprintf(_coverage_fout, "286\n");
#line 401
        fflush(_coverage_fout);
#line 401
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 401
          fprintf(_coverage_fout, "284\n");
#line 401
          fflush(_coverage_fout);
#line 401
          tmp___7 = skeqn();
          }
        } else {
#line 401
          fprintf(_coverage_fout, "285\n");
#line 401
          fflush(_coverage_fout);
#line 401
          tmp___7 = c;
        }
      } else {
#line 401
        fprintf(_coverage_fout, "287\n");
#line 401
        fflush(_coverage_fout);
#line 401
        tmp___7 = c;
      }
    }
#line 401
    fprintf(_coverage_fout, "290\n");
#line 401
    fflush(_coverage_fout);
#line 401
    if (! (tmp___7 != 10)) {
#line 401
      break;
    }
  }
#line 398
  fprintf(_coverage_fout, "293\n");
#line 398
  fflush(_coverage_fout);
#line 402
  intable = 1;
#line 398
  fprintf(_coverage_fout, "294\n");
#line 398
  fflush(_coverage_fout);
#line 403
  return (0);
}
}
#line 404 "deroff-original.c"
int stbl(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;
  int tmp___48 ;

  {
#line 404
  fprintf(_coverage_fout, "392\n");
#line 404
  fflush(_coverage_fout);
#line 406
  while (1) {
    {
#line 406
    fprintf(_coverage_fout, "295\n");
#line 406
    fflush(_coverage_fout);
#line 406
    c = _IO_getc(infile);
    }
#line 406
    fprintf(_coverage_fout, "302\n");
#line 406
    fflush(_coverage_fout);
#line 406
    if (c == -1) {
      {
#line 406
      fprintf(_coverage_fout, "296\n");
#line 406
      fflush(_coverage_fout);
#line 406
      tmp___2 = eof();
      }
    } else {
#line 406
      fprintf(_coverage_fout, "301\n");
#line 406
      fflush(_coverage_fout);
#line 406
      if (c == ldelim) {
#line 406
        fprintf(_coverage_fout, "299\n");
#line 406
        fflush(_coverage_fout);
#line 406
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 406
          fprintf(_coverage_fout, "297\n");
#line 406
          fflush(_coverage_fout);
#line 406
          tmp___2 = skeqn();
          }
        } else {
#line 406
          fprintf(_coverage_fout, "298\n");
#line 406
          fflush(_coverage_fout);
#line 406
          tmp___2 = c;
        }
      } else {
#line 406
        fprintf(_coverage_fout, "300\n");
#line 406
        fflush(_coverage_fout);
#line 406
        tmp___2 = c;
      }
    }
#line 406
    fprintf(_coverage_fout, "303\n");
#line 406
    fflush(_coverage_fout);
#line 406
    if (! (tmp___2 != 46)) {
#line 406
      break;
    }
  }
#line 404
  fprintf(_coverage_fout, "393\n");
#line 404
  fflush(_coverage_fout);
#line 407
  while (1) {
    {
#line 407
    fprintf(_coverage_fout, "304\n");
#line 407
    fflush(_coverage_fout);
#line 407
    c = _IO_getc(infile);
    }
#line 407
    fprintf(_coverage_fout, "311\n");
#line 407
    fflush(_coverage_fout);
#line 407
    if (c == -1) {
      {
#line 407
      fprintf(_coverage_fout, "305\n");
#line 407
      fflush(_coverage_fout);
#line 407
      tmp___7 = eof();
      }
    } else {
#line 407
      fprintf(_coverage_fout, "310\n");
#line 407
      fflush(_coverage_fout);
#line 407
      if (c == ldelim) {
#line 407
        fprintf(_coverage_fout, "308\n");
#line 407
        fflush(_coverage_fout);
#line 407
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 407
          fprintf(_coverage_fout, "306\n");
#line 407
          fflush(_coverage_fout);
#line 407
          tmp___7 = skeqn();
          }
        } else {
#line 407
          fprintf(_coverage_fout, "307\n");
#line 407
          fflush(_coverage_fout);
#line 407
          tmp___7 = c;
        }
      } else {
#line 407
        fprintf(_coverage_fout, "309\n");
#line 407
        fflush(_coverage_fout);
#line 407
        tmp___7 = c;
      }
    }
#line 407
    fprintf(_coverage_fout, "312\n");
#line 407
    fflush(_coverage_fout);
#line 407
    if (! (tmp___7 != 10)) {
#line 407
      break;
    }
  }
#line 404
  fprintf(_coverage_fout, "394\n");
#line 404
  fflush(_coverage_fout);
#line 407
  while (1) {
    {
#line 407
    fprintf(_coverage_fout, "313\n");
#line 407
    fflush(_coverage_fout);
#line 407
    c = _IO_getc(infile);
    }
#line 407
    fprintf(_coverage_fout, "320\n");
#line 407
    fflush(_coverage_fout);
#line 407
    if (c == -1) {
      {
#line 407
      fprintf(_coverage_fout, "314\n");
#line 407
      fflush(_coverage_fout);
#line 407
      tmp___12 = eof();
      }
    } else {
#line 407
      fprintf(_coverage_fout, "319\n");
#line 407
      fflush(_coverage_fout);
#line 407
      if (c == ldelim) {
#line 407
        fprintf(_coverage_fout, "317\n");
#line 407
        fflush(_coverage_fout);
#line 407
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 407
          fprintf(_coverage_fout, "315\n");
#line 407
          fflush(_coverage_fout);
#line 407
          tmp___12 = skeqn();
          }
        } else {
#line 407
          fprintf(_coverage_fout, "316\n");
#line 407
          fflush(_coverage_fout);
#line 407
          tmp___12 = c;
        }
      } else {
#line 407
        fprintf(_coverage_fout, "318\n");
#line 407
        fflush(_coverage_fout);
#line 407
        tmp___12 = c;
      }
    }
#line 407
    fprintf(_coverage_fout, "321\n");
#line 407
    fflush(_coverage_fout);
#line 407
    if (! (tmp___12 != 10)) {
#line 407
      break;
    }
  }
#line 404
  fprintf(_coverage_fout, "395\n");
#line 404
  fflush(_coverage_fout);
#line 407
  pc = c;
#line 404
  fprintf(_coverage_fout, "396\n");
#line 404
  fflush(_coverage_fout);
#line 407
  while (1) {
    {
#line 407
    fprintf(_coverage_fout, "322\n");
#line 407
    fflush(_coverage_fout);
#line 407
    c = _IO_getc(infile);
    }
#line 407
    fprintf(_coverage_fout, "339\n");
#line 407
    fflush(_coverage_fout);
#line 407
    if (c == -1) {
      {
#line 407
      fprintf(_coverage_fout, "323\n");
#line 407
      fflush(_coverage_fout);
#line 407
      tmp___17 = eof();
      }
    } else {
#line 407
      fprintf(_coverage_fout, "328\n");
#line 407
      fflush(_coverage_fout);
#line 407
      if (c == ldelim) {
#line 407
        fprintf(_coverage_fout, "326\n");
#line 407
        fflush(_coverage_fout);
#line 407
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 407
          fprintf(_coverage_fout, "324\n");
#line 407
          fflush(_coverage_fout);
#line 407
          tmp___17 = skeqn();
          }
        } else {
#line 407
          fprintf(_coverage_fout, "325\n");
#line 407
          fflush(_coverage_fout);
#line 407
          tmp___17 = c;
        }
      } else {
#line 407
        fprintf(_coverage_fout, "327\n");
#line 407
        fflush(_coverage_fout);
#line 407
        tmp___17 = c;
      }
    }
#line 407
    fprintf(_coverage_fout, "340\n");
#line 407
    fflush(_coverage_fout);
#line 407
    if (! (tmp___17 != 46)) {
#line 407
      fprintf(_coverage_fout, "338\n");
#line 407
      fflush(_coverage_fout);
#line 407
      if (! (pc != 10)) {
        {
#line 407
        fprintf(_coverage_fout, "329\n");
#line 407
        fflush(_coverage_fout);
#line 407
        c = _IO_getc(infile);
        }
#line 407
        fprintf(_coverage_fout, "336\n");
#line 407
        fflush(_coverage_fout);
#line 407
        if (c == -1) {
          {
#line 407
          fprintf(_coverage_fout, "330\n");
#line 407
          fflush(_coverage_fout);
#line 407
          tmp___22 = eof();
          }
        } else {
#line 407
          fprintf(_coverage_fout, "335\n");
#line 407
          fflush(_coverage_fout);
#line 407
          if (c == ldelim) {
#line 407
            fprintf(_coverage_fout, "333\n");
#line 407
            fflush(_coverage_fout);
#line 407
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 407
              fprintf(_coverage_fout, "331\n");
#line 407
              fflush(_coverage_fout);
#line 407
              tmp___22 = skeqn();
              }
            } else {
#line 407
              fprintf(_coverage_fout, "332\n");
#line 407
              fflush(_coverage_fout);
#line 407
              tmp___22 = c;
            }
          } else {
#line 407
            fprintf(_coverage_fout, "334\n");
#line 407
            fflush(_coverage_fout);
#line 407
            tmp___22 = c;
          }
        }
#line 407
        fprintf(_coverage_fout, "337\n");
#line 407
        fflush(_coverage_fout);
#line 407
        if (! (tmp___22 > 90)) {
#line 407
          break;
        }
      }
    }
#line 407
    fprintf(_coverage_fout, "341\n");
#line 407
    fflush(_coverage_fout);
#line 407
    pc = c;
  }
#line 404
  fprintf(_coverage_fout, "397\n");
#line 404
  fflush(_coverage_fout);
#line 408
  if (c != 84) {
    goto _L;
  } else {
    {
#line 408
    fprintf(_coverage_fout, "342\n");
#line 408
    fflush(_coverage_fout);
#line 408
    c = _IO_getc(infile);
    }
#line 408
    fprintf(_coverage_fout, "390\n");
#line 408
    fflush(_coverage_fout);
#line 408
    if (c == -1) {
      {
#line 408
      fprintf(_coverage_fout, "343\n");
#line 408
      fflush(_coverage_fout);
#line 408
      tmp___47 = eof();
      }
    } else {
#line 408
      fprintf(_coverage_fout, "348\n");
#line 408
      fflush(_coverage_fout);
#line 408
      if (c == ldelim) {
#line 408
        fprintf(_coverage_fout, "346\n");
#line 408
        fflush(_coverage_fout);
#line 408
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 408
          fprintf(_coverage_fout, "344\n");
#line 408
          fflush(_coverage_fout);
#line 408
          tmp___47 = skeqn();
          }
        } else {
#line 408
          fprintf(_coverage_fout, "345\n");
#line 408
          fflush(_coverage_fout);
#line 408
          tmp___47 = c;
        }
      } else {
#line 408
        fprintf(_coverage_fout, "347\n");
#line 408
        fflush(_coverage_fout);
#line 408
        tmp___47 = c;
      }
    }
#line 408
    fprintf(_coverage_fout, "391\n");
#line 408
    fflush(_coverage_fout);
#line 408
    if (tmp___47 != 69) {
#line 408
      fprintf(_coverage_fout, "387\n");
#line 408
      fflush(_coverage_fout);
      _L: /* CIL Label */ 
#line 409
      while (1) {
        {
#line 409
        fprintf(_coverage_fout, "349\n");
#line 409
        fflush(_coverage_fout);
#line 409
        c = _IO_getc(infile);
        }
#line 409
        fprintf(_coverage_fout, "356\n");
#line 409
        fflush(_coverage_fout);
#line 409
        if (c == -1) {
          {
#line 409
          fprintf(_coverage_fout, "350\n");
#line 409
          fflush(_coverage_fout);
#line 409
          tmp___27 = eof();
          }
        } else {
#line 409
          fprintf(_coverage_fout, "355\n");
#line 409
          fflush(_coverage_fout);
#line 409
          if (c == ldelim) {
#line 409
            fprintf(_coverage_fout, "353\n");
#line 409
            fflush(_coverage_fout);
#line 409
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 409
              fprintf(_coverage_fout, "351\n");
#line 409
              fflush(_coverage_fout);
#line 409
              tmp___27 = skeqn();
              }
            } else {
#line 409
              fprintf(_coverage_fout, "352\n");
#line 409
              fflush(_coverage_fout);
#line 409
              tmp___27 = c;
            }
          } else {
#line 409
            fprintf(_coverage_fout, "354\n");
#line 409
            fflush(_coverage_fout);
#line 409
            tmp___27 = c;
          }
        }
#line 409
        fprintf(_coverage_fout, "357\n");
#line 409
        fflush(_coverage_fout);
#line 409
        if (! (tmp___27 != 10)) {
#line 409
          break;
        }
      }
#line 408
      fprintf(_coverage_fout, "388\n");
#line 408
      fflush(_coverage_fout);
#line 410
      pc = c;
#line 408
      fprintf(_coverage_fout, "389\n");
#line 408
      fflush(_coverage_fout);
#line 411
      while (1) {
        {
#line 411
        fprintf(_coverage_fout, "358\n");
#line 411
        fflush(_coverage_fout);
#line 411
        c = _IO_getc(infile);
        }
#line 411
        fprintf(_coverage_fout, "384\n");
#line 411
        fflush(_coverage_fout);
#line 411
        if (c == -1) {
          {
#line 411
          fprintf(_coverage_fout, "359\n");
#line 411
          fflush(_coverage_fout);
#line 411
          tmp___32 = eof();
          }
        } else {
#line 411
          fprintf(_coverage_fout, "364\n");
#line 411
          fflush(_coverage_fout);
#line 411
          if (c == ldelim) {
#line 411
            fprintf(_coverage_fout, "362\n");
#line 411
            fflush(_coverage_fout);
#line 411
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 411
              fprintf(_coverage_fout, "360\n");
#line 411
              fflush(_coverage_fout);
#line 411
              tmp___32 = skeqn();
              }
            } else {
#line 411
              fprintf(_coverage_fout, "361\n");
#line 411
              fflush(_coverage_fout);
#line 411
              tmp___32 = c;
            }
          } else {
#line 411
            fprintf(_coverage_fout, "363\n");
#line 411
            fflush(_coverage_fout);
#line 411
            tmp___32 = c;
          }
        }
#line 411
        fprintf(_coverage_fout, "385\n");
#line 411
        fflush(_coverage_fout);
#line 411
        if (! (tmp___32 != 46)) {
#line 411
          fprintf(_coverage_fout, "383\n");
#line 411
          fflush(_coverage_fout);
#line 411
          if (! (pc != 10)) {
            {
#line 411
            fprintf(_coverage_fout, "365\n");
#line 411
            fflush(_coverage_fout);
#line 411
            c = _IO_getc(infile);
            }
#line 411
            fprintf(_coverage_fout, "381\n");
#line 411
            fflush(_coverage_fout);
#line 411
            if (c == -1) {
              {
#line 411
              fprintf(_coverage_fout, "366\n");
#line 411
              fflush(_coverage_fout);
#line 411
              tmp___37 = eof();
              }
            } else {
#line 411
              fprintf(_coverage_fout, "371\n");
#line 411
              fflush(_coverage_fout);
#line 411
              if (c == ldelim) {
#line 411
                fprintf(_coverage_fout, "369\n");
#line 411
                fflush(_coverage_fout);
#line 411
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  {
#line 411
                  fprintf(_coverage_fout, "367\n");
#line 411
                  fflush(_coverage_fout);
#line 411
                  tmp___37 = skeqn();
                  }
                } else {
#line 411
                  fprintf(_coverage_fout, "368\n");
#line 411
                  fflush(_coverage_fout);
#line 411
                  tmp___37 = c;
                }
              } else {
#line 411
                fprintf(_coverage_fout, "370\n");
#line 411
                fflush(_coverage_fout);
#line 411
                tmp___37 = c;
              }
            }
#line 411
            fprintf(_coverage_fout, "382\n");
#line 411
            fflush(_coverage_fout);
#line 411
            if (! (tmp___37 != 84)) {
              {
#line 411
              fprintf(_coverage_fout, "372\n");
#line 411
              fflush(_coverage_fout);
#line 411
              c = _IO_getc(infile);
              }
#line 411
              fprintf(_coverage_fout, "379\n");
#line 411
              fflush(_coverage_fout);
#line 411
              if (c == -1) {
                {
#line 411
                fprintf(_coverage_fout, "373\n");
#line 411
                fflush(_coverage_fout);
#line 411
                tmp___42 = eof();
                }
              } else {
#line 411
                fprintf(_coverage_fout, "378\n");
#line 411
                fflush(_coverage_fout);
#line 411
                if (c == ldelim) {
#line 411
                  fprintf(_coverage_fout, "376\n");
#line 411
                  fflush(_coverage_fout);
#line 411
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    {
#line 411
                    fprintf(_coverage_fout, "374\n");
#line 411
                    fflush(_coverage_fout);
#line 411
                    tmp___42 = skeqn();
                    }
                  } else {
#line 411
                    fprintf(_coverage_fout, "375\n");
#line 411
                    fflush(_coverage_fout);
#line 411
                    tmp___42 = c;
                  }
                } else {
#line 411
                  fprintf(_coverage_fout, "377\n");
#line 411
                  fflush(_coverage_fout);
#line 411
                  tmp___42 = c;
                }
              }
#line 411
              fprintf(_coverage_fout, "380\n");
#line 411
              fflush(_coverage_fout);
#line 411
              if (! (tmp___42 != 69)) {
#line 411
                break;
              }
            }
          }
        }
#line 411
        fprintf(_coverage_fout, "386\n");
#line 411
        fflush(_coverage_fout);
#line 411
        pc = c;
      }
    }
  }
#line 404
  fprintf(_coverage_fout, "398\n");
#line 404
  fflush(_coverage_fout);
#line 413
  return (0);
}
}
#line 415 "deroff-original.c"
int eqn(void) 
{ register int c1 ;
  register int c2 ;
  register int dflg ;
  char last ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;

  {
#line 415
  fprintf(_coverage_fout, "504\n");
#line 415
  fflush(_coverage_fout);
#line 421
  last = (char)0;
#line 422
  dflg = 1;
#line 415
  fprintf(_coverage_fout, "505\n");
#line 415
  fflush(_coverage_fout);
#line 423
  while (1) {
    {
#line 423
    fprintf(_coverage_fout, "399\n");
#line 423
    fflush(_coverage_fout);
#line 423
    c = _IO_getc(infile);
    }
#line 423
    fprintf(_coverage_fout, "406\n");
#line 423
    fflush(_coverage_fout);
#line 423
    if (c == -1) {
      {
#line 423
      fprintf(_coverage_fout, "400\n");
#line 423
      fflush(_coverage_fout);
#line 423
      tmp___2 = eof();
      }
    } else {
#line 423
      fprintf(_coverage_fout, "405\n");
#line 423
      fflush(_coverage_fout);
#line 423
      if (c == ldelim) {
#line 423
        fprintf(_coverage_fout, "403\n");
#line 423
        fflush(_coverage_fout);
#line 423
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 423
          fprintf(_coverage_fout, "401\n");
#line 423
          fflush(_coverage_fout);
#line 423
          tmp___2 = skeqn();
          }
        } else {
#line 423
          fprintf(_coverage_fout, "402\n");
#line 423
          fflush(_coverage_fout);
#line 423
          tmp___2 = c;
        }
      } else {
#line 423
        fprintf(_coverage_fout, "404\n");
#line 423
        fflush(_coverage_fout);
#line 423
        tmp___2 = c;
      }
    }
#line 423
    fprintf(_coverage_fout, "407\n");
#line 423
    fflush(_coverage_fout);
#line 423
    if (! (tmp___2 != 10)) {
#line 423
      break;
    }
  }
#line 415
  fprintf(_coverage_fout, "506\n");
#line 415
  fflush(_coverage_fout);
#line 425
  while (1) {
    {
#line 427
    fprintf(_coverage_fout, "408\n");
#line 427
    fflush(_coverage_fout);
#line 427
    c = _IO_getc(infile);
    }
#line 425
    fprintf(_coverage_fout, "501\n");
#line 425
    fflush(_coverage_fout);
#line 427
    if (c == -1) {
      {
#line 427
      fprintf(_coverage_fout, "409\n");
#line 427
      fflush(_coverage_fout);
#line 427
      tmp___27 = eof();
      }
    } else {
#line 427
      fprintf(_coverage_fout, "410\n");
#line 427
      fflush(_coverage_fout);
#line 427
      tmp___27 = c;
    }
#line 425
    fprintf(_coverage_fout, "502\n");
#line 425
    fflush(_coverage_fout);
#line 427
    if (tmp___27 == 46) {
      goto _L;
    } else {
#line 427
      fprintf(_coverage_fout, "490\n");
#line 427
      fflush(_coverage_fout);
#line 427
      if (c == 39) {
#line 427
        fprintf(_coverage_fout, "440\n");
#line 427
        fflush(_coverage_fout);
        _L: /* CIL Label */ 
#line 429
        while (1) {
          {
#line 429
          fprintf(_coverage_fout, "411\n");
#line 429
          fflush(_coverage_fout);
#line 429
          c = _IO_getc(infile);
          }
#line 429
          fprintf(_coverage_fout, "415\n");
#line 429
          fflush(_coverage_fout);
#line 429
          if (c == -1) {
            {
#line 429
            fprintf(_coverage_fout, "412\n");
#line 429
            fflush(_coverage_fout);
#line 429
            tmp___5 = eof();
            }
          } else {
#line 429
            fprintf(_coverage_fout, "413\n");
#line 429
            fflush(_coverage_fout);
#line 429
            tmp___5 = c;
          }
#line 429
          fprintf(_coverage_fout, "416\n");
#line 429
          fflush(_coverage_fout);
#line 429
          if (! (tmp___5 == 32)) {
#line 429
            fprintf(_coverage_fout, "414\n");
#line 429
            fflush(_coverage_fout);
#line 429
            if (! (c == 9)) {
#line 429
              break;
            }
          }
        }
#line 427
        fprintf(_coverage_fout, "441\n");
#line 427
        fflush(_coverage_fout);
#line 431
        if (c == 69) {
          {
#line 431
          fprintf(_coverage_fout, "417\n");
#line 431
          fflush(_coverage_fout);
#line 431
          c = _IO_getc(infile);
          }
#line 431
          fprintf(_coverage_fout, "438\n");
#line 431
          fflush(_coverage_fout);
#line 431
          if (c == -1) {
            {
#line 431
            fprintf(_coverage_fout, "418\n");
#line 431
            fflush(_coverage_fout);
#line 431
            tmp___12 = eof();
            }
          } else {
#line 431
            fprintf(_coverage_fout, "419\n");
#line 431
            fflush(_coverage_fout);
#line 431
            tmp___12 = c;
          }
#line 431
          fprintf(_coverage_fout, "439\n");
#line 431
          fflush(_coverage_fout);
#line 431
          if (tmp___12 == 78) {
#line 431
            fprintf(_coverage_fout, "435\n");
#line 431
            fflush(_coverage_fout);
#line 433
            while (1) {
              {
#line 433
              fprintf(_coverage_fout, "420\n");
#line 433
              fflush(_coverage_fout);
#line 433
              c = _IO_getc(infile);
              }
#line 433
              fprintf(_coverage_fout, "427\n");
#line 433
              fflush(_coverage_fout);
#line 433
              if (c == -1) {
                {
#line 433
                fprintf(_coverage_fout, "421\n");
#line 433
                fflush(_coverage_fout);
#line 433
                tmp___9 = eof();
                }
              } else {
#line 433
                fprintf(_coverage_fout, "426\n");
#line 433
                fflush(_coverage_fout);
#line 433
                if (c == ldelim) {
#line 433
                  fprintf(_coverage_fout, "424\n");
#line 433
                  fflush(_coverage_fout);
#line 433
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    {
#line 433
                    fprintf(_coverage_fout, "422\n");
#line 433
                    fflush(_coverage_fout);
#line 433
                    tmp___9 = skeqn();
                    }
                  } else {
#line 433
                    fprintf(_coverage_fout, "423\n");
#line 433
                    fflush(_coverage_fout);
#line 433
                    tmp___9 = c;
                  }
                } else {
#line 433
                  fprintf(_coverage_fout, "425\n");
#line 433
                  fflush(_coverage_fout);
#line 433
                  tmp___9 = c;
                }
              }
#line 433
              fprintf(_coverage_fout, "428\n");
#line 433
              fflush(_coverage_fout);
#line 433
              if (! (tmp___9 != 10)) {
#line 433
                break;
              }
            }
#line 431
            fprintf(_coverage_fout, "436\n");
#line 431
            fflush(_coverage_fout);
#line 434
            if (msflag) {
#line 434
              fprintf(_coverage_fout, "434\n");
#line 434
              fflush(_coverage_fout);
#line 434
              if (dflg) {
                {
#line 435
                fprintf(_coverage_fout, "429\n");
#line 435
                fflush(_coverage_fout);
#line 435
                putchar('x');
#line 435
                fprintf(_coverage_fout, "430\n");
#line 435
                fflush(_coverage_fout);
#line 436
                putchar(' ');
                }
#line 434
                fprintf(_coverage_fout, "433\n");
#line 434
                fflush(_coverage_fout);
#line 437
                if (last) {
                  {
#line 438
                  fprintf(_coverage_fout, "431\n");
#line 438
                  fflush(_coverage_fout);
#line 438
                  putchar((int )last);
#line 438
                  fprintf(_coverage_fout, "432\n");
#line 438
                  fflush(_coverage_fout);
#line 439
                  putchar('\n');
                  }
                }
              }
            }
#line 431
            fprintf(_coverage_fout, "437\n");
#line 431
            fflush(_coverage_fout);
#line 442
            return;
          }
        }
      } else {
#line 427
        fprintf(_coverage_fout, "489\n");
#line 427
        fflush(_coverage_fout);
#line 445
        if (c == 100) {
          {
#line 447
          fprintf(_coverage_fout, "442\n");
#line 447
          fflush(_coverage_fout);
#line 447
          c = _IO_getc(infile);
          }
#line 445
          fprintf(_coverage_fout, "486\n");
#line 445
          fflush(_coverage_fout);
#line 447
          if (c == -1) {
            {
#line 447
            fprintf(_coverage_fout, "443\n");
#line 447
            fflush(_coverage_fout);
#line 447
            tmp___23 = eof();
            }
          } else {
#line 447
            fprintf(_coverage_fout, "444\n");
#line 447
            fflush(_coverage_fout);
#line 447
            tmp___23 = c;
          }
#line 445
          fprintf(_coverage_fout, "487\n");
#line 445
          fflush(_coverage_fout);
#line 447
          if (tmp___23 == 101) {
            {
#line 447
            fprintf(_coverage_fout, "445\n");
#line 447
            fflush(_coverage_fout);
#line 447
            c = _IO_getc(infile);
            }
#line 447
            fprintf(_coverage_fout, "484\n");
#line 447
            fflush(_coverage_fout);
#line 447
            if (c == -1) {
              {
#line 447
              fprintf(_coverage_fout, "446\n");
#line 447
              fflush(_coverage_fout);
#line 447
              tmp___25 = eof();
              }
            } else {
#line 447
              fprintf(_coverage_fout, "447\n");
#line 447
              fflush(_coverage_fout);
#line 447
              tmp___25 = c;
            }
#line 447
            fprintf(_coverage_fout, "485\n");
#line 447
            fflush(_coverage_fout);
#line 447
            if (tmp___25 == 108) {
              {
#line 448
              fprintf(_coverage_fout, "448\n");
#line 448
              fflush(_coverage_fout);
#line 448
              c = _IO_getc(infile);
              }
#line 447
              fprintf(_coverage_fout, "482\n");
#line 447
              fflush(_coverage_fout);
#line 448
              if (c == -1) {
                {
#line 448
                fprintf(_coverage_fout, "449\n");
#line 448
                fflush(_coverage_fout);
#line 448
                tmp___19 = eof();
                }
              } else {
#line 448
                fprintf(_coverage_fout, "450\n");
#line 448
                fflush(_coverage_fout);
#line 448
                tmp___19 = c;
              }
#line 447
              fprintf(_coverage_fout, "483\n");
#line 447
              fflush(_coverage_fout);
#line 448
              if (tmp___19 == 105) {
                {
#line 448
                fprintf(_coverage_fout, "451\n");
#line 448
                fflush(_coverage_fout);
#line 448
                c = _IO_getc(infile);
                }
#line 448
                fprintf(_coverage_fout, "480\n");
#line 448
                fflush(_coverage_fout);
#line 448
                if (c == -1) {
                  {
#line 448
                  fprintf(_coverage_fout, "452\n");
#line 448
                  fflush(_coverage_fout);
#line 448
                  tmp___21 = eof();
                  }
                } else {
#line 448
                  fprintf(_coverage_fout, "453\n");
#line 448
                  fflush(_coverage_fout);
#line 448
                  tmp___21 = c;
                }
#line 448
                fprintf(_coverage_fout, "481\n");
#line 448
                fflush(_coverage_fout);
#line 448
                if (tmp___21 == 109) {
#line 448
                  fprintf(_coverage_fout, "477\n");
#line 448
                  fflush(_coverage_fout);
#line 450
                  while (1) {
                    {
#line 450
                    fprintf(_coverage_fout, "454\n");
#line 450
                    fflush(_coverage_fout);
#line 450
                    c = _IO_getc(infile);
                    }
#line 450
                    fprintf(_coverage_fout, "457\n");
#line 450
                    fflush(_coverage_fout);
#line 450
                    if (c == -1) {
                      {
#line 450
                      fprintf(_coverage_fout, "455\n");
#line 450
                      fflush(_coverage_fout);
#line 450
                      tmp___14 = eof();
                      }
                    } else {
#line 450
                      fprintf(_coverage_fout, "456\n");
#line 450
                      fflush(_coverage_fout);
#line 450
                      tmp___14 = c;
                    }
#line 450
                    fprintf(_coverage_fout, "458\n");
#line 450
                    fflush(_coverage_fout);
#line 450
                    if (! (tmp___14 == 32)) {
#line 450
                      break;
                    }
                  }
#line 448
                  fprintf(_coverage_fout, "478\n");
#line 448
                  fflush(_coverage_fout);
#line 451
                  c1 = c;
#line 448
                  fprintf(_coverage_fout, "479\n");
#line 448
                  fflush(_coverage_fout);
#line 451
                  if (c1 == 10) {
#line 451
                    fprintf(_coverage_fout, "459\n");
#line 451
                    fflush(_coverage_fout);
#line 454
                    ldelim = -2;
#line 455
                    rdelim = -2;
                  } else {
                    {
#line 451
                    fprintf(_coverage_fout, "460\n");
#line 451
                    fflush(_coverage_fout);
#line 451
                    c = _IO_getc(infile);
                    }
#line 451
                    fprintf(_coverage_fout, "475\n");
#line 451
                    fflush(_coverage_fout);
#line 451
                    if (c == -1) {
                      {
#line 451
                      fprintf(_coverage_fout, "461\n");
#line 451
                      fflush(_coverage_fout);
#line 451
                      c2 = eof();
                      }
                    } else {
#line 451
                      fprintf(_coverage_fout, "462\n");
#line 451
                      fflush(_coverage_fout);
#line 451
                      c2 = c;
                    }
#line 451
                    fprintf(_coverage_fout, "476\n");
#line 451
                    fflush(_coverage_fout);
#line 451
                    if (c2 == 10) {
#line 451
                      fprintf(_coverage_fout, "463\n");
#line 451
                      fflush(_coverage_fout);
#line 454
                      ldelim = -2;
#line 455
                      rdelim = -2;
                    } else {
#line 451
                      fprintf(_coverage_fout, "474\n");
#line 451
                      fflush(_coverage_fout);
#line 451
                      if (c1 == 111) {
#line 451
                        fprintf(_coverage_fout, "472\n");
#line 451
                        fflush(_coverage_fout);
#line 451
                        if (c2 == 102) {
                          {
#line 451
                          fprintf(_coverage_fout, "464\n");
#line 451
                          fflush(_coverage_fout);
#line 451
                          c = _IO_getc(infile);
                          }
#line 451
                          fprintf(_coverage_fout, "469\n");
#line 451
                          fflush(_coverage_fout);
#line 451
                          if (c == -1) {
                            {
#line 451
                            fprintf(_coverage_fout, "465\n");
#line 451
                            fflush(_coverage_fout);
#line 451
                            tmp___17 = eof();
                            }
                          } else {
#line 451
                            fprintf(_coverage_fout, "466\n");
#line 451
                            fflush(_coverage_fout);
#line 451
                            tmp___17 = c;
                          }
#line 451
                          fprintf(_coverage_fout, "470\n");
#line 451
                          fflush(_coverage_fout);
#line 451
                          if (tmp___17 == 102) {
#line 451
                            fprintf(_coverage_fout, "467\n");
#line 451
                            fflush(_coverage_fout);
#line 454
                            ldelim = -2;
#line 455
                            rdelim = -2;
                          } else {
#line 451
                            fprintf(_coverage_fout, "468\n");
#line 451
                            fflush(_coverage_fout);
#line 458
                            ldelim = c1;
#line 459
                            rdelim = c2;
                          }
                        } else {
#line 451
                          fprintf(_coverage_fout, "471\n");
#line 451
                          fflush(_coverage_fout);
#line 458
                          ldelim = c1;
#line 459
                          rdelim = c2;
                        }
                      } else {
#line 451
                        fprintf(_coverage_fout, "473\n");
#line 451
                        fflush(_coverage_fout);
#line 458
                        ldelim = c1;
#line 459
                        rdelim = c2;
                      }
                    }
                  }
                }
              }
            }
          }
#line 445
          fprintf(_coverage_fout, "488\n");
#line 445
          fflush(_coverage_fout);
#line 462
          dflg = 0;
        }
      }
    }
#line 425
    fprintf(_coverage_fout, "503\n");
#line 425
    fflush(_coverage_fout);
#line 465
    if (c != 10) {
#line 465
      fprintf(_coverage_fout, "500\n");
#line 465
      fflush(_coverage_fout);
#line 465
      while (1) {
        {
#line 465
        fprintf(_coverage_fout, "491\n");
#line 465
        fflush(_coverage_fout);
#line 465
        c = _IO_getc(infile);
        }
#line 465
        fprintf(_coverage_fout, "497\n");
#line 465
        fflush(_coverage_fout);
#line 465
        if (c == -1) {
          {
#line 465
          fprintf(_coverage_fout, "492\n");
#line 465
          fflush(_coverage_fout);
#line 465
          tmp___29 = eof();
          }
        } else {
#line 465
          fprintf(_coverage_fout, "493\n");
#line 465
          fflush(_coverage_fout);
#line 465
          tmp___29 = c;
        }
#line 465
        fprintf(_coverage_fout, "498\n");
#line 465
        fflush(_coverage_fout);
#line 465
        if (! (tmp___29 != 10)) {
#line 465
          break;
        }
#line 465
        fprintf(_coverage_fout, "499\n");
#line 465
        fflush(_coverage_fout);
#line 466
        if ((int )chars[c] == 2) {
#line 466
          fprintf(_coverage_fout, "494\n");
#line 466
          fflush(_coverage_fout);
#line 466
          last = (char )c;
        } else {
#line 466
          fprintf(_coverage_fout, "496\n");
#line 466
          fflush(_coverage_fout);
#line 467
          if (c != 32) {
#line 467
            fprintf(_coverage_fout, "495\n");
#line 467
            fflush(_coverage_fout);
#line 467
            last = (char)0;
          }
        }
      }
    }
  }
}
}
#line 472 "deroff-original.c"
int backsl(void) 
{ int bdelim ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;

  {
  sw: 
  {
#line 477
  fprintf(_coverage_fout, "507\n");
#line 477
  fflush(_coverage_fout);
#line 477
  c = _IO_getc(infile);
  }
#line 472
  fprintf(_coverage_fout, "639\n");
#line 472
  fflush(_coverage_fout);
#line 477
  if (c == -1) {
    {
#line 477
    fprintf(_coverage_fout, "508\n");
#line 477
    fflush(_coverage_fout);
#line 477
    tmp___2 = eof();
    }
  } else {
#line 477
    fprintf(_coverage_fout, "513\n");
#line 477
    fflush(_coverage_fout);
#line 477
    if (c == ldelim) {
#line 477
      fprintf(_coverage_fout, "511\n");
#line 477
      fflush(_coverage_fout);
#line 477
      if ((unsigned int )filesp == (unsigned int )(files)) {
        {
#line 477
        fprintf(_coverage_fout, "509\n");
#line 477
        fflush(_coverage_fout);
#line 477
        tmp___2 = skeqn();
        }
      } else {
#line 477
        fprintf(_coverage_fout, "510\n");
#line 477
        fflush(_coverage_fout);
#line 477
        tmp___2 = c;
      }
    } else {
#line 477
      fprintf(_coverage_fout, "512\n");
#line 477
      fflush(_coverage_fout);
#line 477
      tmp___2 = c;
    }
  }
#line 477
  switch (tmp___2) {
#line 477
  fprintf(_coverage_fout, "618\n");
#line 477
  fflush(_coverage_fout);
  case 34: 
#line 480
  while (1) {
    {
#line 480
    fprintf(_coverage_fout, "514\n");
#line 480
    fflush(_coverage_fout);
#line 480
    c = _IO_getc(infile);
    }
#line 480
    fprintf(_coverage_fout, "521\n");
#line 480
    fflush(_coverage_fout);
#line 480
    if (c == -1) {
      {
#line 480
      fprintf(_coverage_fout, "515\n");
#line 480
      fflush(_coverage_fout);
#line 480
      tmp___7 = eof();
      }
    } else {
#line 480
      fprintf(_coverage_fout, "520\n");
#line 480
      fflush(_coverage_fout);
#line 480
      if (c == ldelim) {
#line 480
        fprintf(_coverage_fout, "518\n");
#line 480
        fflush(_coverage_fout);
#line 480
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 480
          fprintf(_coverage_fout, "516\n");
#line 480
          fflush(_coverage_fout);
#line 480
          tmp___7 = skeqn();
          }
        } else {
#line 480
          fprintf(_coverage_fout, "517\n");
#line 480
          fflush(_coverage_fout);
#line 480
          tmp___7 = c;
        }
      } else {
#line 480
        fprintf(_coverage_fout, "519\n");
#line 480
        fflush(_coverage_fout);
#line 480
        tmp___7 = c;
      }
    }
#line 480
    fprintf(_coverage_fout, "522\n");
#line 480
    fflush(_coverage_fout);
#line 480
    if (! (tmp___7 != 10)) {
#line 480
      break;
    }
  }
#line 477
  fprintf(_coverage_fout, "619\n");
#line 477
  fflush(_coverage_fout);
#line 481
  return;
  case 115: 
  {
#line 483
  fprintf(_coverage_fout, "523\n");
#line 483
  fflush(_coverage_fout);
#line 483
  c = _IO_getc(infile);
  }
#line 477
  fprintf(_coverage_fout, "620\n");
#line 477
  fflush(_coverage_fout);
#line 483
  if (c == -1) {
    {
#line 483
    fprintf(_coverage_fout, "524\n");
#line 483
    fflush(_coverage_fout);
#line 483
    tmp___17 = eof();
    }
  } else {
#line 483
    fprintf(_coverage_fout, "529\n");
#line 483
    fflush(_coverage_fout);
#line 483
    if (c == ldelim) {
#line 483
      fprintf(_coverage_fout, "527\n");
#line 483
      fflush(_coverage_fout);
#line 483
      if ((unsigned int )filesp == (unsigned int )(files)) {
        {
#line 483
        fprintf(_coverage_fout, "525\n");
#line 483
        fflush(_coverage_fout);
#line 483
        tmp___17 = skeqn();
        }
      } else {
#line 483
        fprintf(_coverage_fout, "526\n");
#line 483
        fflush(_coverage_fout);
#line 483
        tmp___17 = c;
      }
    } else {
#line 483
      fprintf(_coverage_fout, "528\n");
#line 483
      fflush(_coverage_fout);
#line 483
      tmp___17 = c;
    }
  }
#line 477
  fprintf(_coverage_fout, "621\n");
#line 477
  fflush(_coverage_fout);
#line 483
  if (tmp___17 == 92) {
    {
#line 483
    fprintf(_coverage_fout, "530\n");
#line 483
    fflush(_coverage_fout);
#line 483
    backsl();
    }
  } else {
#line 483
    fprintf(_coverage_fout, "543\n");
#line 483
    fflush(_coverage_fout);
#line 485
    while (1) {
      {
#line 485
      fprintf(_coverage_fout, "531\n");
#line 485
      fflush(_coverage_fout);
#line 485
      c = _IO_getc(infile);
      }
#line 485
      fprintf(_coverage_fout, "539\n");
#line 485
      fflush(_coverage_fout);
#line 485
      if (c == -1) {
        {
#line 485
        fprintf(_coverage_fout, "532\n");
#line 485
        fflush(_coverage_fout);
#line 485
        tmp___12 = eof();
        }
      } else {
#line 485
        fprintf(_coverage_fout, "537\n");
#line 485
        fflush(_coverage_fout);
#line 485
        if (c == ldelim) {
#line 485
          fprintf(_coverage_fout, "535\n");
#line 485
          fflush(_coverage_fout);
#line 485
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 485
            fprintf(_coverage_fout, "533\n");
#line 485
            fflush(_coverage_fout);
#line 485
            tmp___12 = skeqn();
            }
          } else {
#line 485
            fprintf(_coverage_fout, "534\n");
#line 485
            fflush(_coverage_fout);
#line 485
            tmp___12 = c;
          }
        } else {
#line 485
          fprintf(_coverage_fout, "536\n");
#line 485
          fflush(_coverage_fout);
#line 485
          tmp___12 = c;
        }
      }
#line 485
      fprintf(_coverage_fout, "540\n");
#line 485
      fflush(_coverage_fout);
#line 485
      if (tmp___12 >= 48) {
#line 485
        fprintf(_coverage_fout, "538\n");
#line 485
        fflush(_coverage_fout);
#line 485
        if (! (c <= 57)) {
#line 485
          break;
        }
      } else {
#line 485
        break;
      }
    }
    {
#line 486
    fprintf(_coverage_fout, "541\n");
#line 486
    fflush(_coverage_fout);
#line 486
    ungetc(c, infile);
#line 486
    fprintf(_coverage_fout, "542\n");
#line 486
    fflush(_coverage_fout);
#line 487
    c = '0';
    }
  }
#line 477
  fprintf(_coverage_fout, "622\n");
#line 477
  fflush(_coverage_fout);
#line 489
  lp --;
#line 477
  fprintf(_coverage_fout, "623\n");
#line 477
  fflush(_coverage_fout);
#line 490
  return;
  case 102: 
  case 110: 
  case 42: 
  {
#line 495
  fprintf(_coverage_fout, "544\n");
#line 495
  fflush(_coverage_fout);
#line 495
  c = _IO_getc(infile);
  }
#line 477
  fprintf(_coverage_fout, "624\n");
#line 477
  fflush(_coverage_fout);
#line 495
  if (c == -1) {
    {
#line 495
    fprintf(_coverage_fout, "545\n");
#line 495
    fflush(_coverage_fout);
#line 495
    tmp___22 = eof();
    }
  } else {
#line 495
    fprintf(_coverage_fout, "550\n");
#line 495
    fflush(_coverage_fout);
#line 495
    if (c == ldelim) {
#line 495
      fprintf(_coverage_fout, "548\n");
#line 495
      fflush(_coverage_fout);
#line 495
      if ((unsigned int )filesp == (unsigned int )(files)) {
        {
#line 495
        fprintf(_coverage_fout, "546\n");
#line 495
        fflush(_coverage_fout);
#line 495
        tmp___22 = skeqn();
        }
      } else {
#line 495
        fprintf(_coverage_fout, "547\n");
#line 495
        fflush(_coverage_fout);
#line 495
        tmp___22 = c;
      }
    } else {
#line 495
      fprintf(_coverage_fout, "549\n");
#line 495
      fflush(_coverage_fout);
#line 495
      tmp___22 = c;
    }
  }
#line 477
  fprintf(_coverage_fout, "625\n");
#line 477
  fflush(_coverage_fout);
#line 495
  if (tmp___22 != 40) {
#line 495
    fprintf(_coverage_fout, "551\n");
#line 495
    fflush(_coverage_fout);
#line 496
    return;
  }
#line 477
  fprintf(_coverage_fout, "626\n");
#line 477
  fflush(_coverage_fout);
  case 40: 
#line 499
  if (msflag) {
    {
#line 500
    fprintf(_coverage_fout, "552\n");
#line 500
    fflush(_coverage_fout);
#line 500
    c = _IO_getc(infile);
    }
#line 499
    fprintf(_coverage_fout, "577\n");
#line 499
    fflush(_coverage_fout);
#line 500
    if (c == -1) {
      {
#line 500
      fprintf(_coverage_fout, "553\n");
#line 500
      fflush(_coverage_fout);
#line 500
      tmp___32 = eof();
      }
    } else {
#line 500
      fprintf(_coverage_fout, "558\n");
#line 500
      fflush(_coverage_fout);
#line 500
      if (c == ldelim) {
#line 500
        fprintf(_coverage_fout, "556\n");
#line 500
        fflush(_coverage_fout);
#line 500
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 500
          fprintf(_coverage_fout, "554\n");
#line 500
          fflush(_coverage_fout);
#line 500
          tmp___32 = skeqn();
          }
        } else {
#line 500
          fprintf(_coverage_fout, "555\n");
#line 500
          fflush(_coverage_fout);
#line 500
          tmp___32 = c;
        }
      } else {
#line 500
        fprintf(_coverage_fout, "557\n");
#line 500
        fflush(_coverage_fout);
#line 500
        tmp___32 = c;
      }
    }
#line 499
    fprintf(_coverage_fout, "578\n");
#line 499
    fflush(_coverage_fout);
#line 500
    if (tmp___32 == 101) {
      {
#line 501
      fprintf(_coverage_fout, "559\n");
#line 501
      fflush(_coverage_fout);
#line 501
      c = _IO_getc(infile);
      }
#line 500
      fprintf(_coverage_fout, "568\n");
#line 500
      fflush(_coverage_fout);
#line 501
      if (c == -1) {
        {
#line 501
        fprintf(_coverage_fout, "560\n");
#line 501
        fflush(_coverage_fout);
#line 501
        tmp___27 = eof();
        }
      } else {
#line 501
        fprintf(_coverage_fout, "565\n");
#line 501
        fflush(_coverage_fout);
#line 501
        if (c == ldelim) {
#line 501
          fprintf(_coverage_fout, "563\n");
#line 501
          fflush(_coverage_fout);
#line 501
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 501
            fprintf(_coverage_fout, "561\n");
#line 501
            fflush(_coverage_fout);
#line 501
            tmp___27 = skeqn();
            }
          } else {
#line 501
            fprintf(_coverage_fout, "562\n");
#line 501
            fflush(_coverage_fout);
#line 501
            tmp___27 = c;
          }
        } else {
#line 501
          fprintf(_coverage_fout, "564\n");
#line 501
          fflush(_coverage_fout);
#line 501
          tmp___27 = c;
        }
      }
#line 500
      fprintf(_coverage_fout, "569\n");
#line 500
      fflush(_coverage_fout);
#line 501
      if (tmp___27 == 109) {
#line 501
        fprintf(_coverage_fout, "566\n");
#line 501
        fflush(_coverage_fout);
#line 502
        *lp = (char )'-';
#line 501
        fprintf(_coverage_fout, "567\n");
#line 501
        fflush(_coverage_fout);
#line 503
        return;
      }
    } else {
#line 500
      fprintf(_coverage_fout, "576\n");
#line 500
      fflush(_coverage_fout);
#line 506
      if (c != 10) {
        {
#line 506
        fprintf(_coverage_fout, "570\n");
#line 506
        fflush(_coverage_fout);
#line 506
        c = _IO_getc(infile);
        }
#line 506
        fprintf(_coverage_fout, "575\n");
#line 506
        fflush(_coverage_fout);
#line 506
        if (c == -1) {
          {
#line 506
          fprintf(_coverage_fout, "571\n");
#line 506
          fflush(_coverage_fout);
#line 506
          eof();
          }
        } else {
#line 506
          fprintf(_coverage_fout, "574\n");
#line 506
          fflush(_coverage_fout);
#line 506
          if (c == ldelim) {
#line 506
            fprintf(_coverage_fout, "573\n");
#line 506
            fflush(_coverage_fout);
#line 506
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 506
              fprintf(_coverage_fout, "572\n");
#line 506
              fflush(_coverage_fout);
#line 506
              skeqn();
              }
            }
          }
        }
      }
    }
#line 499
    fprintf(_coverage_fout, "579\n");
#line 499
    fflush(_coverage_fout);
#line 507
    return;
  }
  {
#line 509
  fprintf(_coverage_fout, "580\n");
#line 509
  fflush(_coverage_fout);
#line 509
  c = _IO_getc(infile);
  }
#line 477
  fprintf(_coverage_fout, "627\n");
#line 477
  fflush(_coverage_fout);
#line 509
  if (c == -1) {
    {
#line 509
    fprintf(_coverage_fout, "581\n");
#line 509
    fflush(_coverage_fout);
#line 509
    tmp___37 = eof();
    }
  } else {
#line 509
    fprintf(_coverage_fout, "586\n");
#line 509
    fflush(_coverage_fout);
#line 509
    if (c == ldelim) {
#line 509
      fprintf(_coverage_fout, "584\n");
#line 509
      fflush(_coverage_fout);
#line 509
      if ((unsigned int )filesp == (unsigned int )(files)) {
        {
#line 509
        fprintf(_coverage_fout, "582\n");
#line 509
        fflush(_coverage_fout);
#line 509
        tmp___37 = skeqn();
        }
      } else {
#line 509
        fprintf(_coverage_fout, "583\n");
#line 509
        fflush(_coverage_fout);
#line 509
        tmp___37 = c;
      }
    } else {
#line 509
      fprintf(_coverage_fout, "585\n");
#line 509
      fflush(_coverage_fout);
#line 509
      tmp___37 = c;
    }
  }
#line 477
  fprintf(_coverage_fout, "628\n");
#line 477
  fflush(_coverage_fout);
#line 509
  if (tmp___37 != 10) {
    {
#line 509
    fprintf(_coverage_fout, "587\n");
#line 509
    fflush(_coverage_fout);
#line 509
    c = _IO_getc(infile);
    }
#line 509
    fprintf(_coverage_fout, "592\n");
#line 509
    fflush(_coverage_fout);
#line 509
    if (c == -1) {
      {
#line 509
      fprintf(_coverage_fout, "588\n");
#line 509
      fflush(_coverage_fout);
#line 509
      eof();
      }
    } else {
#line 509
      fprintf(_coverage_fout, "591\n");
#line 509
      fflush(_coverage_fout);
#line 509
      if (c == ldelim) {
#line 509
        fprintf(_coverage_fout, "590\n");
#line 509
        fflush(_coverage_fout);
#line 509
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 509
          fprintf(_coverage_fout, "589\n");
#line 509
          fflush(_coverage_fout);
#line 509
          skeqn();
          }
        }
      }
    }
  }
#line 477
  fprintf(_coverage_fout, "629\n");
#line 477
  fflush(_coverage_fout);
#line 510
  return;
  case 36: 
  {
#line 513
  fprintf(_coverage_fout, "593\n");
#line 513
  fflush(_coverage_fout);
#line 513
  c = _IO_getc(infile);
  }
#line 477
  fprintf(_coverage_fout, "630\n");
#line 477
  fflush(_coverage_fout);
#line 513
  if (c == -1) {
    {
#line 513
    fprintf(_coverage_fout, "594\n");
#line 513
    fflush(_coverage_fout);
#line 513
    eof();
    }
  } else {
#line 513
    fprintf(_coverage_fout, "597\n");
#line 513
    fflush(_coverage_fout);
#line 513
    if (c == ldelim) {
#line 513
      fprintf(_coverage_fout, "596\n");
#line 513
      fflush(_coverage_fout);
#line 513
      if ((unsigned int )filesp == (unsigned int )(files)) {
        {
#line 513
        fprintf(_coverage_fout, "595\n");
#line 513
        fflush(_coverage_fout);
#line 513
        skeqn();
        }
      }
    }
  }
#line 477
  fprintf(_coverage_fout, "631\n");
#line 477
  fflush(_coverage_fout);
#line 514
  return;
  case 98: 
  case 120: 
  case 118: 
  case 104: 
  case 119: 
  case 111: 
  case 108: 
  case 76: 
  {
#line 524
  fprintf(_coverage_fout, "598\n");
#line 524
  fflush(_coverage_fout);
#line 524
  c = _IO_getc(infile);
  }
#line 477
  fprintf(_coverage_fout, "632\n");
#line 477
  fflush(_coverage_fout);
#line 524
  if (c == -1) {
    {
#line 524
    fprintf(_coverage_fout, "599\n");
#line 524
    fflush(_coverage_fout);
#line 524
    bdelim = eof();
    }
  } else {
#line 524
    fprintf(_coverage_fout, "604\n");
#line 524
    fflush(_coverage_fout);
#line 524
    if (c == ldelim) {
#line 524
      fprintf(_coverage_fout, "602\n");
#line 524
      fflush(_coverage_fout);
#line 524
      if ((unsigned int )filesp == (unsigned int )(files)) {
        {
#line 524
        fprintf(_coverage_fout, "600\n");
#line 524
        fflush(_coverage_fout);
#line 524
        bdelim = skeqn();
        }
      } else {
#line 524
        fprintf(_coverage_fout, "601\n");
#line 524
        fflush(_coverage_fout);
#line 524
        bdelim = c;
      }
    } else {
#line 524
      fprintf(_coverage_fout, "603\n");
#line 524
      fflush(_coverage_fout);
#line 524
      bdelim = c;
    }
  }
#line 477
  fprintf(_coverage_fout, "633\n");
#line 477
  fflush(_coverage_fout);
#line 524
  if (bdelim == 10) {
#line 524
    fprintf(_coverage_fout, "605\n");
#line 524
    fflush(_coverage_fout);
#line 525
    return;
  }
#line 477
  fprintf(_coverage_fout, "634\n");
#line 477
  fflush(_coverage_fout);
#line 526
  while (1) {
    {
#line 526
    fprintf(_coverage_fout, "606\n");
#line 526
    fflush(_coverage_fout);
#line 526
    c = _IO_getc(infile);
    }
#line 526
    fprintf(_coverage_fout, "615\n");
#line 526
    fflush(_coverage_fout);
#line 526
    if (c == -1) {
      {
#line 526
      fprintf(_coverage_fout, "607\n");
#line 526
      fflush(_coverage_fout);
#line 526
      tmp___46 = eof();
      }
    } else {
#line 526
      fprintf(_coverage_fout, "612\n");
#line 526
      fflush(_coverage_fout);
#line 526
      if (c == ldelim) {
#line 526
        fprintf(_coverage_fout, "610\n");
#line 526
        fflush(_coverage_fout);
#line 526
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 526
          fprintf(_coverage_fout, "608\n");
#line 526
          fflush(_coverage_fout);
#line 526
          tmp___46 = skeqn();
          }
        } else {
#line 526
          fprintf(_coverage_fout, "609\n");
#line 526
          fflush(_coverage_fout);
#line 526
          tmp___46 = c;
        }
      } else {
#line 526
        fprintf(_coverage_fout, "611\n");
#line 526
        fflush(_coverage_fout);
#line 526
        tmp___46 = c;
      }
    }
#line 526
    fprintf(_coverage_fout, "616\n");
#line 526
    fflush(_coverage_fout);
#line 526
    if (tmp___46 != 10) {
#line 526
      fprintf(_coverage_fout, "613\n");
#line 526
      fflush(_coverage_fout);
#line 526
      if (! (c != bdelim)) {
#line 526
        break;
      }
    } else {
#line 526
      break;
    }
#line 526
    fprintf(_coverage_fout, "617\n");
#line 526
    fflush(_coverage_fout);
#line 527
    if (c == 92) {
      {
#line 527
      fprintf(_coverage_fout, "614\n");
#line 527
      fflush(_coverage_fout);
#line 527
      backsl();
      }
    }
  }
#line 477
  fprintf(_coverage_fout, "635\n");
#line 477
  fflush(_coverage_fout);
#line 528
  return;
#line 477
  fprintf(_coverage_fout, "636\n");
#line 477
  fflush(_coverage_fout);
  case 92: 
#line 531
  if (inmacro) {
    goto sw;
  }
#line 477
  fprintf(_coverage_fout, "637\n");
#line 477
  fflush(_coverage_fout);
  default: ;
#line 477
  fprintf(_coverage_fout, "638\n");
#line 477
  fflush(_coverage_fout);
#line 534
  return;
  }
}
}
#line 543
extern int ( /* missing proto */  strlen)() ;
#line 538 "deroff-original.c"
char *copys(char *s ) 
{ register char *t ;
  register char *t0 ;
  int tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  {
#line 543
  fprintf(_coverage_fout, "640\n");
#line 543
  fflush(_coverage_fout);
#line 543
  tmp = strlen(s);
#line 543
  fprintf(_coverage_fout, "641\n");
#line 543
  fflush(_coverage_fout);
#line 543
  t = calloc((unsigned int )(tmp + 1), sizeof(*t));
#line 543
  fprintf(_coverage_fout, "642\n");
#line 543
  fflush(_coverage_fout);
#line 543
  t0 = t;
  }
#line 538
  fprintf(_coverage_fout, "646\n");
#line 538
  fflush(_coverage_fout);
#line 543
  if ((unsigned int )t0 == (unsigned int )((void *)0)) {
    {
#line 544
    fprintf(_coverage_fout, "643\n");
#line 544
    fflush(_coverage_fout);
#line 544
    fatal((char *)"Cannot allocate memory", (char *)((void *)0));
    }
  }
#line 538
  fprintf(_coverage_fout, "647\n");
#line 538
  fflush(_coverage_fout);
#line 546
  while (1) {
#line 546
    fprintf(_coverage_fout, "644\n");
#line 546
    fflush(_coverage_fout);
#line 546
    tmp___0 = t;
#line 546
    t ++;
#line 546
    tmp___1 = s;
#line 546
    s ++;
#line 546
    *tmp___0 = *tmp___1;
#line 546
    fprintf(_coverage_fout, "645\n");
#line 546
    fflush(_coverage_fout);
#line 546
    if (! *tmp___0) {
#line 546
      break;
    }
  }
#line 538
  fprintf(_coverage_fout, "648\n");
#line 538
  fflush(_coverage_fout);
#line 548
  return (t0);
}
}
#line 564
extern int ( /* missing proto */  atoi)() ;
#line 551 "deroff-original.c"
int sce(void) 
{ register char *ap ;
  register int n ;
  register int i ;
  char a[10] ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;
  int tmp___48 ;
  int tmp___49 ;
  int tmp___50 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  int tmp___54 ;
  int tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;
  int tmp___58 ;
  int tmp___59 ;
  int tmp___60 ;
  int tmp___61 ;
  int tmp___62 ;
  int tmp___63 ;

  {
#line 551
  fprintf(_coverage_fout, "786\n");
#line 551
  fflush(_coverage_fout);
#line 556
  ap = a;
#line 551
  fprintf(_coverage_fout, "787\n");
#line 551
  fflush(_coverage_fout);
#line 556
  while (1) {
    {
#line 556
    fprintf(_coverage_fout, "649\n");
#line 556
    fflush(_coverage_fout);
#line 556
    c = _IO_getc(infile);
    }
#line 556
    fprintf(_coverage_fout, "667\n");
#line 556
    fflush(_coverage_fout);
#line 556
    if (c == -1) {
      {
#line 556
      fprintf(_coverage_fout, "650\n");
#line 556
      fflush(_coverage_fout);
#line 556
      tmp___7 = eof();
      }
    } else {
#line 556
      fprintf(_coverage_fout, "655\n");
#line 556
      fflush(_coverage_fout);
#line 556
      if (c == ldelim) {
#line 556
        fprintf(_coverage_fout, "653\n");
#line 556
        fflush(_coverage_fout);
#line 556
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 556
          fprintf(_coverage_fout, "651\n");
#line 556
          fflush(_coverage_fout);
#line 556
          tmp___7 = skeqn();
          }
        } else {
#line 556
          fprintf(_coverage_fout, "652\n");
#line 556
          fflush(_coverage_fout);
#line 556
          tmp___7 = c;
        }
      } else {
#line 556
        fprintf(_coverage_fout, "654\n");
#line 556
        fflush(_coverage_fout);
#line 556
        tmp___7 = c;
      }
    }
#line 556
    fprintf(_coverage_fout, "668\n");
#line 556
    fflush(_coverage_fout);
#line 556
    if (! (tmp___7 != 10)) {
#line 556
      break;
    }
#line 556
    fprintf(_coverage_fout, "669\n");
#line 556
    fflush(_coverage_fout);
#line 557
    *ap = (char )c;
#line 556
    fprintf(_coverage_fout, "670\n");
#line 556
    fflush(_coverage_fout);
#line 558
    if ((unsigned int )ap == (unsigned int )(& a[9])) {
#line 558
      fprintf(_coverage_fout, "665\n");
#line 558
      fflush(_coverage_fout);
#line 559
      while (1) {
        {
#line 559
        fprintf(_coverage_fout, "656\n");
#line 559
        fflush(_coverage_fout);
#line 559
        c = _IO_getc(infile);
        }
#line 559
        fprintf(_coverage_fout, "663\n");
#line 559
        fflush(_coverage_fout);
#line 559
        if (c == -1) {
          {
#line 559
          fprintf(_coverage_fout, "657\n");
#line 559
          fflush(_coverage_fout);
#line 559
          tmp___2 = eof();
          }
        } else {
#line 559
          fprintf(_coverage_fout, "662\n");
#line 559
          fflush(_coverage_fout);
#line 559
          if (c == ldelim) {
#line 559
            fprintf(_coverage_fout, "660\n");
#line 559
            fflush(_coverage_fout);
#line 559
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 559
              fprintf(_coverage_fout, "658\n");
#line 559
              fflush(_coverage_fout);
#line 559
              tmp___2 = skeqn();
              }
            } else {
#line 559
              fprintf(_coverage_fout, "659\n");
#line 559
              fflush(_coverage_fout);
#line 559
              tmp___2 = c;
            }
          } else {
#line 559
            fprintf(_coverage_fout, "661\n");
#line 559
            fflush(_coverage_fout);
#line 559
            tmp___2 = c;
          }
        }
#line 559
        fprintf(_coverage_fout, "664\n");
#line 559
        fflush(_coverage_fout);
#line 559
        if (! (tmp___2 != 10)) {
#line 559
          break;
        }
      }
#line 558
      fprintf(_coverage_fout, "666\n");
#line 558
      fflush(_coverage_fout);
#line 560
      ap = a;
#line 561
      break;
    }
#line 556
    fprintf(_coverage_fout, "671\n");
#line 556
    fflush(_coverage_fout);
#line 556
    ap ++;
  }
#line 551
  fprintf(_coverage_fout, "788\n");
#line 551
  fflush(_coverage_fout);
#line 564
  if ((unsigned int )ap != (unsigned int )(a)) {
    {
#line 564
    fprintf(_coverage_fout, "672\n");
#line 564
    fflush(_coverage_fout);
#line 564
    n = atoi(a);
    }
  } else {
#line 564
    fprintf(_coverage_fout, "673\n");
#line 564
    fflush(_coverage_fout);
#line 565
    n = 1;
  }
#line 551
  fprintf(_coverage_fout, "789\n");
#line 551
  fflush(_coverage_fout);
#line 566
  i = 0;
#line 551
  fprintf(_coverage_fout, "790\n");
#line 551
  fflush(_coverage_fout);
#line 566
  while (1) {
#line 566
    fprintf(_coverage_fout, "783\n");
#line 566
    fflush(_coverage_fout);
#line 566
    if (! (i < n)) {
#line 566
      break;
    }
    {
#line 567
    fprintf(_coverage_fout, "674\n");
#line 567
    fflush(_coverage_fout);
#line 567
    c = _IO_getc(infile);
    }
#line 566
    fprintf(_coverage_fout, "784\n");
#line 566
    fflush(_coverage_fout);
#line 567
    if (c == -1) {
      {
#line 567
      fprintf(_coverage_fout, "675\n");
#line 567
      fflush(_coverage_fout);
#line 567
      tmp___62 = eof();
      }
    } else {
#line 567
      fprintf(_coverage_fout, "680\n");
#line 567
      fflush(_coverage_fout);
#line 567
      if (c == ldelim) {
#line 567
        fprintf(_coverage_fout, "678\n");
#line 567
        fflush(_coverage_fout);
#line 567
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 567
          fprintf(_coverage_fout, "676\n");
#line 567
          fflush(_coverage_fout);
#line 567
          tmp___62 = skeqn();
          }
        } else {
#line 567
          fprintf(_coverage_fout, "677\n");
#line 567
          fflush(_coverage_fout);
#line 567
          tmp___62 = c;
        }
      } else {
#line 567
        fprintf(_coverage_fout, "679\n");
#line 567
        fflush(_coverage_fout);
#line 567
        tmp___62 = c;
      }
    }
#line 566
    fprintf(_coverage_fout, "785\n");
#line 566
    fflush(_coverage_fout);
#line 567
    if (tmp___62 == 46) {
      {
#line 568
      fprintf(_coverage_fout, "681\n");
#line 568
      fflush(_coverage_fout);
#line 568
      c = _IO_getc(infile);
      }
#line 567
      fprintf(_coverage_fout, "770\n");
#line 567
      fflush(_coverage_fout);
#line 568
      if (c == -1) {
        {
#line 568
        fprintf(_coverage_fout, "682\n");
#line 568
        fflush(_coverage_fout);
#line 568
        tmp___52 = eof();
        }
      } else {
#line 568
        fprintf(_coverage_fout, "687\n");
#line 568
        fflush(_coverage_fout);
#line 568
        if (c == ldelim) {
#line 568
          fprintf(_coverage_fout, "685\n");
#line 568
          fflush(_coverage_fout);
#line 568
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 568
            fprintf(_coverage_fout, "683\n");
#line 568
            fflush(_coverage_fout);
#line 568
            tmp___52 = skeqn();
            }
          } else {
#line 568
            fprintf(_coverage_fout, "684\n");
#line 568
            fflush(_coverage_fout);
#line 568
            tmp___52 = c;
          }
        } else {
#line 568
          fprintf(_coverage_fout, "686\n");
#line 568
          fflush(_coverage_fout);
#line 568
          tmp___52 = c;
        }
      }
#line 567
      fprintf(_coverage_fout, "771\n");
#line 567
      fflush(_coverage_fout);
#line 568
      if (tmp___52 == 99) {
        {
#line 569
        fprintf(_coverage_fout, "688\n");
#line 569
        fflush(_coverage_fout);
#line 569
        c = _IO_getc(infile);
        }
#line 568
        fprintf(_coverage_fout, "736\n");
#line 568
        fflush(_coverage_fout);
#line 569
        if (c == -1) {
          {
#line 569
          fprintf(_coverage_fout, "689\n");
#line 569
          fflush(_coverage_fout);
#line 569
          tmp___32 = eof();
          }
        } else {
#line 569
          fprintf(_coverage_fout, "694\n");
#line 569
          fflush(_coverage_fout);
#line 569
          if (c == ldelim) {
#line 569
            fprintf(_coverage_fout, "692\n");
#line 569
            fflush(_coverage_fout);
#line 569
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 569
              fprintf(_coverage_fout, "690\n");
#line 569
              fflush(_coverage_fout);
#line 569
              tmp___32 = skeqn();
              }
            } else {
#line 569
              fprintf(_coverage_fout, "691\n");
#line 569
              fflush(_coverage_fout);
#line 569
              tmp___32 = c;
            }
          } else {
#line 569
            fprintf(_coverage_fout, "693\n");
#line 569
            fflush(_coverage_fout);
#line 569
            tmp___32 = c;
          }
        }
#line 568
        fprintf(_coverage_fout, "737\n");
#line 568
        fflush(_coverage_fout);
#line 569
        if (tmp___32 == 101) {
#line 569
          fprintf(_coverage_fout, "724\n");
#line 569
          fflush(_coverage_fout);
#line 570
          while (1) {
            {
#line 570
            fprintf(_coverage_fout, "695\n");
#line 570
            fflush(_coverage_fout);
#line 570
            c = _IO_getc(infile);
            }
#line 570
            fprintf(_coverage_fout, "702\n");
#line 570
            fflush(_coverage_fout);
#line 570
            if (c == -1) {
              {
#line 570
              fprintf(_coverage_fout, "696\n");
#line 570
              fflush(_coverage_fout);
#line 570
              tmp___12 = eof();
              }
            } else {
#line 570
              fprintf(_coverage_fout, "701\n");
#line 570
              fflush(_coverage_fout);
#line 570
              if (c == ldelim) {
#line 570
                fprintf(_coverage_fout, "699\n");
#line 570
                fflush(_coverage_fout);
#line 570
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  {
#line 570
                  fprintf(_coverage_fout, "697\n");
#line 570
                  fflush(_coverage_fout);
#line 570
                  tmp___12 = skeqn();
                  }
                } else {
#line 570
                  fprintf(_coverage_fout, "698\n");
#line 570
                  fflush(_coverage_fout);
#line 570
                  tmp___12 = c;
                }
              } else {
#line 570
                fprintf(_coverage_fout, "700\n");
#line 570
                fflush(_coverage_fout);
#line 570
                tmp___12 = c;
              }
            }
#line 570
            fprintf(_coverage_fout, "703\n");
#line 570
            fflush(_coverage_fout);
#line 570
            if (! (tmp___12 == 32)) {
#line 570
              break;
            }
          }
#line 569
          fprintf(_coverage_fout, "725\n");
#line 569
          fflush(_coverage_fout);
#line 571
          if (c == 48) {
#line 571
            fprintf(_coverage_fout, "713\n");
#line 571
            fflush(_coverage_fout);
#line 572
            while (1) {
              {
#line 572
              fprintf(_coverage_fout, "704\n");
#line 572
              fflush(_coverage_fout);
#line 572
              c = _IO_getc(infile);
              }
#line 572
              fprintf(_coverage_fout, "711\n");
#line 572
              fflush(_coverage_fout);
#line 572
              if (c == -1) {
                {
#line 572
                fprintf(_coverage_fout, "705\n");
#line 572
                fflush(_coverage_fout);
#line 572
                tmp___17 = eof();
                }
              } else {
#line 572
                fprintf(_coverage_fout, "710\n");
#line 572
                fflush(_coverage_fout);
#line 572
                if (c == ldelim) {
#line 572
                  fprintf(_coverage_fout, "708\n");
#line 572
                  fflush(_coverage_fout);
#line 572
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    {
#line 572
                    fprintf(_coverage_fout, "706\n");
#line 572
                    fflush(_coverage_fout);
#line 572
                    tmp___17 = skeqn();
                    }
                  } else {
#line 572
                    fprintf(_coverage_fout, "707\n");
#line 572
                    fflush(_coverage_fout);
#line 572
                    tmp___17 = c;
                  }
                } else {
#line 572
                  fprintf(_coverage_fout, "709\n");
#line 572
                  fflush(_coverage_fout);
#line 572
                  tmp___17 = c;
                }
              }
#line 572
              fprintf(_coverage_fout, "712\n");
#line 572
              fflush(_coverage_fout);
#line 572
              if (! (tmp___17 != 10)) {
#line 572
                break;
              }
            }
#line 573
            break;
          } else {
#line 571
            fprintf(_coverage_fout, "723\n");
#line 571
            fflush(_coverage_fout);
#line 575
            while (1) {
              {
#line 575
              fprintf(_coverage_fout, "714\n");
#line 575
              fflush(_coverage_fout);
#line 575
              c = _IO_getc(infile);
              }
#line 575
              fprintf(_coverage_fout, "721\n");
#line 575
              fflush(_coverage_fout);
#line 575
              if (c == -1) {
                {
#line 575
                fprintf(_coverage_fout, "715\n");
#line 575
                fflush(_coverage_fout);
#line 575
                tmp___22 = eof();
                }
              } else {
#line 575
                fprintf(_coverage_fout, "720\n");
#line 575
                fflush(_coverage_fout);
#line 575
                if (c == ldelim) {
#line 575
                  fprintf(_coverage_fout, "718\n");
#line 575
                  fflush(_coverage_fout);
#line 575
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    {
#line 575
                    fprintf(_coverage_fout, "716\n");
#line 575
                    fflush(_coverage_fout);
#line 575
                    tmp___22 = skeqn();
                    }
                  } else {
#line 575
                    fprintf(_coverage_fout, "717\n");
#line 575
                    fflush(_coverage_fout);
#line 575
                    tmp___22 = c;
                  }
                } else {
#line 575
                  fprintf(_coverage_fout, "719\n");
#line 575
                  fflush(_coverage_fout);
#line 575
                  tmp___22 = c;
                }
              }
#line 575
              fprintf(_coverage_fout, "722\n");
#line 575
              fflush(_coverage_fout);
#line 575
              if (! (tmp___22 != 10)) {
#line 575
                break;
              }
            }
          }
        } else {
#line 569
          fprintf(_coverage_fout, "735\n");
#line 569
          fflush(_coverage_fout);
#line 577
          while (1) {
            {
#line 577
            fprintf(_coverage_fout, "726\n");
#line 577
            fflush(_coverage_fout);
#line 577
            c = _IO_getc(infile);
            }
#line 577
            fprintf(_coverage_fout, "733\n");
#line 577
            fflush(_coverage_fout);
#line 577
            if (c == -1) {
              {
#line 577
              fprintf(_coverage_fout, "727\n");
#line 577
              fflush(_coverage_fout);
#line 577
              tmp___27 = eof();
              }
            } else {
#line 577
              fprintf(_coverage_fout, "732\n");
#line 577
              fflush(_coverage_fout);
#line 577
              if (c == ldelim) {
#line 577
                fprintf(_coverage_fout, "730\n");
#line 577
                fflush(_coverage_fout);
#line 577
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  {
#line 577
                  fprintf(_coverage_fout, "728\n");
#line 577
                  fflush(_coverage_fout);
#line 577
                  tmp___27 = skeqn();
                  }
                } else {
#line 577
                  fprintf(_coverage_fout, "729\n");
#line 577
                  fflush(_coverage_fout);
#line 577
                  tmp___27 = c;
                }
              } else {
#line 577
                fprintf(_coverage_fout, "731\n");
#line 577
                fflush(_coverage_fout);
#line 577
                tmp___27 = c;
              }
            }
#line 577
            fprintf(_coverage_fout, "734\n");
#line 577
            fflush(_coverage_fout);
#line 577
            if (! (tmp___27 != 10)) {
#line 577
              break;
            }
          }
        }
      } else {
#line 568
        fprintf(_coverage_fout, "769\n");
#line 568
        fflush(_coverage_fout);
#line 579
        if (c == 80) {
          goto _L;
        } else {
          {
#line 579
          fprintf(_coverage_fout, "738\n");
#line 579
          fflush(_coverage_fout);
#line 579
          c = _IO_getc(infile);
          }
#line 579
          fprintf(_coverage_fout, "767\n");
#line 579
          fflush(_coverage_fout);
#line 579
          if (c == -1) {
            {
#line 579
            fprintf(_coverage_fout, "739\n");
#line 579
            fflush(_coverage_fout);
#line 579
            tmp___47 = eof();
            }
          } else {
#line 579
            fprintf(_coverage_fout, "744\n");
#line 579
            fflush(_coverage_fout);
#line 579
            if (c == ldelim) {
#line 579
              fprintf(_coverage_fout, "742\n");
#line 579
              fflush(_coverage_fout);
#line 579
              if ((unsigned int )filesp == (unsigned int )(files)) {
                {
#line 579
                fprintf(_coverage_fout, "740\n");
#line 579
                fflush(_coverage_fout);
#line 579
                tmp___47 = skeqn();
                }
              } else {
#line 579
                fprintf(_coverage_fout, "741\n");
#line 579
                fflush(_coverage_fout);
#line 579
                tmp___47 = c;
              }
            } else {
#line 579
              fprintf(_coverage_fout, "743\n");
#line 579
              fflush(_coverage_fout);
#line 579
              tmp___47 = c;
            }
          }
#line 579
          fprintf(_coverage_fout, "768\n");
#line 579
          fflush(_coverage_fout);
#line 579
          if (tmp___47 == 80) {
#line 579
            fprintf(_coverage_fout, "755\n");
#line 579
            fflush(_coverage_fout);
            _L: /* CIL Label */ 
#line 580
            if (c != 10) {
#line 580
              fprintf(_coverage_fout, "754\n");
#line 580
              fflush(_coverage_fout);
#line 580
              while (1) {
                {
#line 580
                fprintf(_coverage_fout, "745\n");
#line 580
                fflush(_coverage_fout);
#line 580
                c = _IO_getc(infile);
                }
#line 580
                fprintf(_coverage_fout, "752\n");
#line 580
                fflush(_coverage_fout);
#line 580
                if (c == -1) {
                  {
#line 580
                  fprintf(_coverage_fout, "746\n");
#line 580
                  fflush(_coverage_fout);
#line 580
                  tmp___37 = eof();
                  }
                } else {
#line 580
                  fprintf(_coverage_fout, "751\n");
#line 580
                  fflush(_coverage_fout);
#line 580
                  if (c == ldelim) {
#line 580
                    fprintf(_coverage_fout, "749\n");
#line 580
                    fflush(_coverage_fout);
#line 580
                    if ((unsigned int )filesp == (unsigned int )(files)) {
                      {
#line 580
                      fprintf(_coverage_fout, "747\n");
#line 580
                      fflush(_coverage_fout);
#line 580
                      tmp___37 = skeqn();
                      }
                    } else {
#line 580
                      fprintf(_coverage_fout, "748\n");
#line 580
                      fflush(_coverage_fout);
#line 580
                      tmp___37 = c;
                    }
                  } else {
#line 580
                    fprintf(_coverage_fout, "750\n");
#line 580
                    fflush(_coverage_fout);
#line 580
                    tmp___37 = c;
                  }
                }
#line 580
                fprintf(_coverage_fout, "753\n");
#line 580
                fflush(_coverage_fout);
#line 580
                if (! (tmp___37 != 10)) {
#line 580
                  break;
                }
              }
            }
#line 581
            break;
          } else {
#line 579
            fprintf(_coverage_fout, "766\n");
#line 579
            fflush(_coverage_fout);
#line 583
            if (c != 10) {
#line 583
              fprintf(_coverage_fout, "765\n");
#line 583
              fflush(_coverage_fout);
#line 583
              while (1) {
                {
#line 583
                fprintf(_coverage_fout, "756\n");
#line 583
                fflush(_coverage_fout);
#line 583
                c = _IO_getc(infile);
                }
#line 583
                fprintf(_coverage_fout, "763\n");
#line 583
                fflush(_coverage_fout);
#line 583
                if (c == -1) {
                  {
#line 583
                  fprintf(_coverage_fout, "757\n");
#line 583
                  fflush(_coverage_fout);
#line 583
                  tmp___42 = eof();
                  }
                } else {
#line 583
                  fprintf(_coverage_fout, "762\n");
#line 583
                  fflush(_coverage_fout);
#line 583
                  if (c == ldelim) {
#line 583
                    fprintf(_coverage_fout, "760\n");
#line 583
                    fflush(_coverage_fout);
#line 583
                    if ((unsigned int )filesp == (unsigned int )(files)) {
                      {
#line 583
                      fprintf(_coverage_fout, "758\n");
#line 583
                      fflush(_coverage_fout);
#line 583
                      tmp___42 = skeqn();
                      }
                    } else {
#line 583
                      fprintf(_coverage_fout, "759\n");
#line 583
                      fflush(_coverage_fout);
#line 583
                      tmp___42 = c;
                    }
                  } else {
#line 583
                    fprintf(_coverage_fout, "761\n");
#line 583
                    fflush(_coverage_fout);
#line 583
                    tmp___42 = c;
                  }
                }
#line 583
                fprintf(_coverage_fout, "764\n");
#line 583
                fflush(_coverage_fout);
#line 583
                if (! (tmp___42 != 10)) {
#line 583
                  break;
                }
              }
            }
          }
        }
      }
    } else {
#line 567
      fprintf(_coverage_fout, "781\n");
#line 567
      fflush(_coverage_fout);
#line 586
      while (1) {
        {
#line 586
        fprintf(_coverage_fout, "772\n");
#line 586
        fflush(_coverage_fout);
#line 586
        c = _IO_getc(infile);
        }
#line 586
        fprintf(_coverage_fout, "779\n");
#line 586
        fflush(_coverage_fout);
#line 586
        if (c == -1) {
          {
#line 586
          fprintf(_coverage_fout, "773\n");
#line 586
          fflush(_coverage_fout);
#line 586
          tmp___57 = eof();
          }
        } else {
#line 586
          fprintf(_coverage_fout, "778\n");
#line 586
          fflush(_coverage_fout);
#line 586
          if (c == ldelim) {
#line 586
            fprintf(_coverage_fout, "776\n");
#line 586
            fflush(_coverage_fout);
#line 586
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 586
              fprintf(_coverage_fout, "774\n");
#line 586
              fflush(_coverage_fout);
#line 586
              tmp___57 = skeqn();
              }
            } else {
#line 586
              fprintf(_coverage_fout, "775\n");
#line 586
              fflush(_coverage_fout);
#line 586
              tmp___57 = c;
            }
          } else {
#line 586
            fprintf(_coverage_fout, "777\n");
#line 586
            fflush(_coverage_fout);
#line 586
            tmp___57 = c;
          }
        }
#line 586
        fprintf(_coverage_fout, "780\n");
#line 586
        fflush(_coverage_fout);
#line 586
        if (! (tmp___57 != 10)) {
#line 586
          break;
        }
      }
#line 567
      fprintf(_coverage_fout, "782\n");
#line 567
      fflush(_coverage_fout);
#line 587
      i ++;
    }
  }
#line 551
  fprintf(_coverage_fout, "791\n");
#line 551
  fflush(_coverage_fout);
#line 590
  return (0);
}
}
#line 592 "deroff-original.c"
int refer(int c1 ) 
{ register int c2 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;

  {
#line 592
  fprintf(_coverage_fout, "854\n");
#line 592
  fflush(_coverage_fout);
#line 595
  if (c1 != 10) {
#line 595
    fprintf(_coverage_fout, "801\n");
#line 595
    fflush(_coverage_fout);
#line 596
    while (1) {
      {
#line 596
      fprintf(_coverage_fout, "792\n");
#line 596
      fflush(_coverage_fout);
#line 596
      c = _IO_getc(infile);
      }
#line 596
      fprintf(_coverage_fout, "799\n");
#line 596
      fflush(_coverage_fout);
#line 596
      if (c == -1) {
        {
#line 596
        fprintf(_coverage_fout, "793\n");
#line 596
        fflush(_coverage_fout);
#line 596
        tmp___2 = eof();
        }
      } else {
#line 596
        fprintf(_coverage_fout, "798\n");
#line 596
        fflush(_coverage_fout);
#line 596
        if (c == ldelim) {
#line 596
          fprintf(_coverage_fout, "796\n");
#line 596
          fflush(_coverage_fout);
#line 596
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 596
            fprintf(_coverage_fout, "794\n");
#line 596
            fflush(_coverage_fout);
#line 596
            tmp___2 = skeqn();
            }
          } else {
#line 596
            fprintf(_coverage_fout, "795\n");
#line 596
            fflush(_coverage_fout);
#line 596
            tmp___2 = c;
          }
        } else {
#line 596
          fprintf(_coverage_fout, "797\n");
#line 596
          fflush(_coverage_fout);
#line 596
          tmp___2 = c;
        }
      }
#line 596
      fprintf(_coverage_fout, "800\n");
#line 596
      fflush(_coverage_fout);
#line 596
      if (! (tmp___2 != 10)) {
#line 596
        break;
      }
    }
  }
#line 592
  fprintf(_coverage_fout, "855\n");
#line 592
  fflush(_coverage_fout);
#line 597
  while (1) {
    {
#line 598
    fprintf(_coverage_fout, "802\n");
#line 598
    fflush(_coverage_fout);
#line 598
    c = _IO_getc(infile);
    }
#line 597
    fprintf(_coverage_fout, "852\n");
#line 597
    fflush(_coverage_fout);
#line 598
    if (c == -1) {
      {
#line 598
      fprintf(_coverage_fout, "803\n");
#line 598
      fflush(_coverage_fout);
#line 598
      tmp___27 = eof();
      }
    } else {
#line 598
      fprintf(_coverage_fout, "808\n");
#line 598
      fflush(_coverage_fout);
#line 598
      if (c == ldelim) {
#line 598
        fprintf(_coverage_fout, "806\n");
#line 598
        fflush(_coverage_fout);
#line 598
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 598
          fprintf(_coverage_fout, "804\n");
#line 598
          fflush(_coverage_fout);
#line 598
          tmp___27 = skeqn();
          }
        } else {
#line 598
          fprintf(_coverage_fout, "805\n");
#line 598
          fflush(_coverage_fout);
#line 598
          tmp___27 = c;
        }
      } else {
#line 598
        fprintf(_coverage_fout, "807\n");
#line 598
        fflush(_coverage_fout);
#line 598
        tmp___27 = c;
      }
    }
#line 597
    fprintf(_coverage_fout, "853\n");
#line 597
    fflush(_coverage_fout);
#line 598
    if (tmp___27 != 46) {
#line 598
      fprintf(_coverage_fout, "818\n");
#line 598
      fflush(_coverage_fout);
#line 599
      while (1) {
        {
#line 599
        fprintf(_coverage_fout, "809\n");
#line 599
        fflush(_coverage_fout);
#line 599
        c = _IO_getc(infile);
        }
#line 599
        fprintf(_coverage_fout, "816\n");
#line 599
        fflush(_coverage_fout);
#line 599
        if (c == -1) {
          {
#line 599
          fprintf(_coverage_fout, "810\n");
#line 599
          fflush(_coverage_fout);
#line 599
          tmp___7 = eof();
          }
        } else {
#line 599
          fprintf(_coverage_fout, "815\n");
#line 599
          fflush(_coverage_fout);
#line 599
          if (c == ldelim) {
#line 599
            fprintf(_coverage_fout, "813\n");
#line 599
            fflush(_coverage_fout);
#line 599
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 599
              fprintf(_coverage_fout, "811\n");
#line 599
              fflush(_coverage_fout);
#line 599
              tmp___7 = skeqn();
              }
            } else {
#line 599
              fprintf(_coverage_fout, "812\n");
#line 599
              fflush(_coverage_fout);
#line 599
              tmp___7 = c;
            }
          } else {
#line 599
            fprintf(_coverage_fout, "814\n");
#line 599
            fflush(_coverage_fout);
#line 599
            tmp___7 = c;
          }
        }
#line 599
        fprintf(_coverage_fout, "817\n");
#line 599
        fflush(_coverage_fout);
#line 599
        if (! (tmp___7 != 10)) {
#line 599
          break;
        }
      }
    } else {
      {
#line 601
      fprintf(_coverage_fout, "819\n");
#line 601
      fflush(_coverage_fout);
#line 601
      c = _IO_getc(infile);
      }
#line 598
      fprintf(_coverage_fout, "850\n");
#line 598
      fflush(_coverage_fout);
#line 601
      if (c == -1) {
        {
#line 601
        fprintf(_coverage_fout, "820\n");
#line 601
        fflush(_coverage_fout);
#line 601
        tmp___22 = eof();
        }
      } else {
#line 601
        fprintf(_coverage_fout, "825\n");
#line 601
        fflush(_coverage_fout);
#line 601
        if (c == ldelim) {
#line 601
          fprintf(_coverage_fout, "823\n");
#line 601
          fflush(_coverage_fout);
#line 601
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 601
            fprintf(_coverage_fout, "821\n");
#line 601
            fflush(_coverage_fout);
#line 601
            tmp___22 = skeqn();
            }
          } else {
#line 601
            fprintf(_coverage_fout, "822\n");
#line 601
            fflush(_coverage_fout);
#line 601
            tmp___22 = c;
          }
        } else {
#line 601
          fprintf(_coverage_fout, "824\n");
#line 601
          fflush(_coverage_fout);
#line 601
          tmp___22 = c;
        }
      }
#line 598
      fprintf(_coverage_fout, "851\n");
#line 598
      fflush(_coverage_fout);
#line 601
      if (tmp___22 != 93) {
#line 601
        fprintf(_coverage_fout, "835\n");
#line 601
        fflush(_coverage_fout);
#line 602
        while (1) {
          {
#line 602
          fprintf(_coverage_fout, "826\n");
#line 602
          fflush(_coverage_fout);
#line 602
          c = _IO_getc(infile);
          }
#line 602
          fprintf(_coverage_fout, "833\n");
#line 602
          fflush(_coverage_fout);
#line 602
          if (c == -1) {
            {
#line 602
            fprintf(_coverage_fout, "827\n");
#line 602
            fflush(_coverage_fout);
#line 602
            tmp___12 = eof();
            }
          } else {
#line 602
            fprintf(_coverage_fout, "832\n");
#line 602
            fflush(_coverage_fout);
#line 602
            if (c == ldelim) {
#line 602
              fprintf(_coverage_fout, "830\n");
#line 602
              fflush(_coverage_fout);
#line 602
              if ((unsigned int )filesp == (unsigned int )(files)) {
                {
#line 602
                fprintf(_coverage_fout, "828\n");
#line 602
                fflush(_coverage_fout);
#line 602
                tmp___12 = skeqn();
                }
              } else {
#line 602
                fprintf(_coverage_fout, "829\n");
#line 602
                fflush(_coverage_fout);
#line 602
                tmp___12 = c;
              }
            } else {
#line 602
              fprintf(_coverage_fout, "831\n");
#line 602
              fflush(_coverage_fout);
#line 602
              tmp___12 = c;
            }
          }
#line 602
          fprintf(_coverage_fout, "834\n");
#line 602
          fflush(_coverage_fout);
#line 602
          if (! (tmp___12 != 10)) {
#line 602
            break;
          }
        }
      } else {
#line 601
        fprintf(_coverage_fout, "847\n");
#line 601
        fflush(_coverage_fout);
#line 604
        while (1) {
          {
#line 604
          fprintf(_coverage_fout, "836\n");
#line 604
          fflush(_coverage_fout);
#line 604
          c = _IO_getc(infile);
          }
#line 604
          fprintf(_coverage_fout, "843\n");
#line 604
          fflush(_coverage_fout);
#line 604
          if (c == -1) {
            {
#line 604
            fprintf(_coverage_fout, "837\n");
#line 604
            fflush(_coverage_fout);
#line 604
            tmp___17 = eof();
            }
          } else {
#line 604
            fprintf(_coverage_fout, "842\n");
#line 604
            fflush(_coverage_fout);
#line 604
            if (c == ldelim) {
#line 604
              fprintf(_coverage_fout, "840\n");
#line 604
              fflush(_coverage_fout);
#line 604
              if ((unsigned int )filesp == (unsigned int )(files)) {
                {
#line 604
                fprintf(_coverage_fout, "838\n");
#line 604
                fflush(_coverage_fout);
#line 604
                tmp___17 = skeqn();
                }
              } else {
#line 604
                fprintf(_coverage_fout, "839\n");
#line 604
                fflush(_coverage_fout);
#line 604
                tmp___17 = c;
              }
            } else {
#line 604
              fprintf(_coverage_fout, "841\n");
#line 604
              fflush(_coverage_fout);
#line 604
              tmp___17 = c;
            }
          }
#line 604
          fprintf(_coverage_fout, "844\n");
#line 604
          fflush(_coverage_fout);
#line 604
          if (! (tmp___17 != 10)) {
#line 604
            break;
          }
#line 604
          fprintf(_coverage_fout, "845\n");
#line 604
          fflush(_coverage_fout);
#line 605
          c2 = c;
        }
#line 601
        fprintf(_coverage_fout, "848\n");
#line 601
        fflush(_coverage_fout);
#line 606
        if ((int )chars[c2] == 2) {
          {
#line 606
          fprintf(_coverage_fout, "846\n");
#line 606
          fflush(_coverage_fout);
#line 606
          putchar(c2);
          }
        }
#line 601
        fprintf(_coverage_fout, "849\n");
#line 601
        fflush(_coverage_fout);
#line 607
        return;
      }
    }
  }
}
}
#line 613 "deroff-original.c"
int inpic(void) 
{ register int c1 ;
  register char *p1 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  char *tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  char *tmp___40 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;

  {
#line 613
  fprintf(_coverage_fout, "962\n");
#line 613
  fflush(_coverage_fout);
#line 617
  while (1) {
    {
#line 617
    fprintf(_coverage_fout, "856\n");
#line 617
    fflush(_coverage_fout);
#line 617
    c = _IO_getc(infile);
    }
#line 617
    fprintf(_coverage_fout, "863\n");
#line 617
    fflush(_coverage_fout);
#line 617
    if (c == -1) {
      {
#line 617
      fprintf(_coverage_fout, "857\n");
#line 617
      fflush(_coverage_fout);
#line 617
      tmp___2 = eof();
      }
    } else {
#line 617
      fprintf(_coverage_fout, "862\n");
#line 617
      fflush(_coverage_fout);
#line 617
      if (c == ldelim) {
#line 617
        fprintf(_coverage_fout, "860\n");
#line 617
        fflush(_coverage_fout);
#line 617
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 617
          fprintf(_coverage_fout, "858\n");
#line 617
          fflush(_coverage_fout);
#line 617
          tmp___2 = skeqn();
          }
        } else {
#line 617
          fprintf(_coverage_fout, "859\n");
#line 617
          fflush(_coverage_fout);
#line 617
          tmp___2 = c;
        }
      } else {
#line 617
        fprintf(_coverage_fout, "861\n");
#line 617
        fflush(_coverage_fout);
#line 617
        tmp___2 = c;
      }
    }
#line 617
    fprintf(_coverage_fout, "864\n");
#line 617
    fflush(_coverage_fout);
#line 617
    if (! (tmp___2 != 10)) {
#line 617
      break;
    }
  }
#line 613
  fprintf(_coverage_fout, "963\n");
#line 613
  fflush(_coverage_fout);
#line 618
  p1 = line;
#line 619
  c = '\n';
#line 613
  fprintf(_coverage_fout, "964\n");
#line 613
  fflush(_coverage_fout);
#line 620
  while (1) {
    {
#line 621
    fprintf(_coverage_fout, "865\n");
#line 621
    fflush(_coverage_fout);
#line 621
    c1 = c;
#line 621
    fprintf(_coverage_fout, "866\n");
#line 621
    fflush(_coverage_fout);
#line 622
    c = _IO_getc(infile);
    }
#line 620
    fprintf(_coverage_fout, "960\n");
#line 620
    fflush(_coverage_fout);
#line 622
    if (c == -1) {
      {
#line 622
      fprintf(_coverage_fout, "867\n");
#line 622
      fflush(_coverage_fout);
#line 622
      tmp___44 = eof();
      }
    } else {
#line 622
      fprintf(_coverage_fout, "872\n");
#line 622
      fflush(_coverage_fout);
#line 622
      if (c == ldelim) {
#line 622
        fprintf(_coverage_fout, "870\n");
#line 622
        fflush(_coverage_fout);
#line 622
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 622
          fprintf(_coverage_fout, "868\n");
#line 622
          fflush(_coverage_fout);
#line 622
          tmp___44 = skeqn();
          }
        } else {
#line 622
          fprintf(_coverage_fout, "869\n");
#line 622
          fflush(_coverage_fout);
#line 622
          tmp___44 = c;
        }
      } else {
#line 622
        fprintf(_coverage_fout, "871\n");
#line 622
        fflush(_coverage_fout);
#line 622
        tmp___44 = c;
      }
    }
#line 620
    fprintf(_coverage_fout, "961\n");
#line 620
    fflush(_coverage_fout);
#line 622
    if (tmp___44 == 46) {
#line 622
      fprintf(_coverage_fout, "926\n");
#line 622
      fflush(_coverage_fout);
#line 622
      if (c1 == 10) {
        {
#line 623
        fprintf(_coverage_fout, "873\n");
#line 623
        fflush(_coverage_fout);
#line 623
        c = _IO_getc(infile);
        }
#line 622
        fprintf(_coverage_fout, "920\n");
#line 622
        fflush(_coverage_fout);
#line 623
        if (c == -1) {
          {
#line 623
          fprintf(_coverage_fout, "874\n");
#line 623
          fflush(_coverage_fout);
#line 623
          tmp___12 = eof();
          }
        } else {
#line 623
          fprintf(_coverage_fout, "879\n");
#line 623
          fflush(_coverage_fout);
#line 623
          if (c == ldelim) {
#line 623
            fprintf(_coverage_fout, "877\n");
#line 623
            fflush(_coverage_fout);
#line 623
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 623
              fprintf(_coverage_fout, "875\n");
#line 623
              fflush(_coverage_fout);
#line 623
              tmp___12 = skeqn();
              }
            } else {
#line 623
              fprintf(_coverage_fout, "876\n");
#line 623
              fflush(_coverage_fout);
#line 623
              tmp___12 = c;
            }
          } else {
#line 623
            fprintf(_coverage_fout, "878\n");
#line 623
            fflush(_coverage_fout);
#line 623
            tmp___12 = c;
          }
        }
#line 622
        fprintf(_coverage_fout, "921\n");
#line 622
        fflush(_coverage_fout);
#line 623
        if (tmp___12 != 80) {
#line 623
          fprintf(_coverage_fout, "891\n");
#line 623
          fflush(_coverage_fout);
#line 624
          if (c == 10) {
#line 624
            continue;
          } else {
#line 624
            fprintf(_coverage_fout, "889\n");
#line 624
            fflush(_coverage_fout);
#line 625
            while (1) {
              {
#line 625
              fprintf(_coverage_fout, "880\n");
#line 625
              fflush(_coverage_fout);
#line 625
              c = _IO_getc(infile);
              }
#line 625
              fprintf(_coverage_fout, "887\n");
#line 625
              fflush(_coverage_fout);
#line 625
              if (c == -1) {
                {
#line 625
                fprintf(_coverage_fout, "881\n");
#line 625
                fflush(_coverage_fout);
#line 625
                tmp___7 = eof();
                }
              } else {
#line 625
                fprintf(_coverage_fout, "886\n");
#line 625
                fflush(_coverage_fout);
#line 625
                if (c == ldelim) {
#line 625
                  fprintf(_coverage_fout, "884\n");
#line 625
                  fflush(_coverage_fout);
#line 625
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    {
#line 625
                    fprintf(_coverage_fout, "882\n");
#line 625
                    fflush(_coverage_fout);
#line 625
                    tmp___7 = skeqn();
                    }
                  } else {
#line 625
                    fprintf(_coverage_fout, "883\n");
#line 625
                    fflush(_coverage_fout);
#line 625
                    tmp___7 = c;
                  }
                } else {
#line 625
                  fprintf(_coverage_fout, "885\n");
#line 625
                  fflush(_coverage_fout);
#line 625
                  tmp___7 = c;
                }
              }
#line 625
              fprintf(_coverage_fout, "888\n");
#line 625
              fflush(_coverage_fout);
#line 625
              if (! (tmp___7 != 10)) {
#line 625
                break;
              }
            }
#line 624
            fprintf(_coverage_fout, "890\n");
#line 624
            fflush(_coverage_fout);
#line 625
            c = '\n';
#line 625
            continue;
          }
        }
        {
#line 627
        fprintf(_coverage_fout, "892\n");
#line 627
        fflush(_coverage_fout);
#line 627
        c = _IO_getc(infile);
        }
#line 622
        fprintf(_coverage_fout, "922\n");
#line 622
        fflush(_coverage_fout);
#line 627
        if (c == -1) {
          {
#line 627
          fprintf(_coverage_fout, "893\n");
#line 627
          fflush(_coverage_fout);
#line 627
          tmp___22 = eof();
          }
        } else {
#line 627
          fprintf(_coverage_fout, "898\n");
#line 627
          fflush(_coverage_fout);
#line 627
          if (c == ldelim) {
#line 627
            fprintf(_coverage_fout, "896\n");
#line 627
            fflush(_coverage_fout);
#line 627
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 627
              fprintf(_coverage_fout, "894\n");
#line 627
              fflush(_coverage_fout);
#line 627
              tmp___22 = skeqn();
              }
            } else {
#line 627
              fprintf(_coverage_fout, "895\n");
#line 627
              fflush(_coverage_fout);
#line 627
              tmp___22 = c;
            }
          } else {
#line 627
            fprintf(_coverage_fout, "897\n");
#line 627
            fflush(_coverage_fout);
#line 627
            tmp___22 = c;
          }
        }
#line 622
        fprintf(_coverage_fout, "923\n");
#line 622
        fflush(_coverage_fout);
#line 627
        if (tmp___22 != 69) {
#line 627
          fprintf(_coverage_fout, "910\n");
#line 627
          fflush(_coverage_fout);
#line 628
          if (c == 10) {
#line 628
            continue;
          } else {
#line 628
            fprintf(_coverage_fout, "908\n");
#line 628
            fflush(_coverage_fout);
#line 629
            while (1) {
              {
#line 629
              fprintf(_coverage_fout, "899\n");
#line 629
              fflush(_coverage_fout);
#line 629
              c = _IO_getc(infile);
              }
#line 629
              fprintf(_coverage_fout, "906\n");
#line 629
              fflush(_coverage_fout);
#line 629
              if (c == -1) {
                {
#line 629
                fprintf(_coverage_fout, "900\n");
#line 629
                fflush(_coverage_fout);
#line 629
                tmp___17 = eof();
                }
              } else {
#line 629
                fprintf(_coverage_fout, "905\n");
#line 629
                fflush(_coverage_fout);
#line 629
                if (c == ldelim) {
#line 629
                  fprintf(_coverage_fout, "903\n");
#line 629
                  fflush(_coverage_fout);
#line 629
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    {
#line 629
                    fprintf(_coverage_fout, "901\n");
#line 629
                    fflush(_coverage_fout);
#line 629
                    tmp___17 = skeqn();
                    }
                  } else {
#line 629
                    fprintf(_coverage_fout, "902\n");
#line 629
                    fflush(_coverage_fout);
#line 629
                    tmp___17 = c;
                  }
                } else {
#line 629
                  fprintf(_coverage_fout, "904\n");
#line 629
                  fflush(_coverage_fout);
#line 629
                  tmp___17 = c;
                }
              }
#line 629
              fprintf(_coverage_fout, "907\n");
#line 629
              fflush(_coverage_fout);
#line 629
              if (! (tmp___17 != 10)) {
#line 629
                break;
              }
            }
#line 628
            fprintf(_coverage_fout, "909\n");
#line 628
            fflush(_coverage_fout);
#line 629
            c = '\n';
#line 629
            continue;
          }
        }
#line 622
        fprintf(_coverage_fout, "924\n");
#line 622
        fflush(_coverage_fout);
#line 631
        while (1) {
          {
#line 631
          fprintf(_coverage_fout, "911\n");
#line 631
          fflush(_coverage_fout);
#line 631
          c = _IO_getc(infile);
          }
#line 631
          fprintf(_coverage_fout, "918\n");
#line 631
          fflush(_coverage_fout);
#line 631
          if (c == -1) {
            {
#line 631
            fprintf(_coverage_fout, "912\n");
#line 631
            fflush(_coverage_fout);
#line 631
            tmp___27 = eof();
            }
          } else {
#line 631
            fprintf(_coverage_fout, "917\n");
#line 631
            fflush(_coverage_fout);
#line 631
            if (c == ldelim) {
#line 631
              fprintf(_coverage_fout, "915\n");
#line 631
              fflush(_coverage_fout);
#line 631
              if ((unsigned int )filesp == (unsigned int )(files)) {
                {
#line 631
                fprintf(_coverage_fout, "913\n");
#line 631
                fflush(_coverage_fout);
#line 631
                tmp___27 = skeqn();
                }
              } else {
#line 631
                fprintf(_coverage_fout, "914\n");
#line 631
                fflush(_coverage_fout);
#line 631
                tmp___27 = c;
              }
            } else {
#line 631
              fprintf(_coverage_fout, "916\n");
#line 631
              fflush(_coverage_fout);
#line 631
              tmp___27 = c;
            }
          }
#line 631
          fprintf(_coverage_fout, "919\n");
#line 631
          fflush(_coverage_fout);
#line 631
          if (! (tmp___27 != 10)) {
#line 631
            break;
          }
        }
#line 622
        fprintf(_coverage_fout, "925\n");
#line 622
        fflush(_coverage_fout);
#line 632
        return;
      } else {
        goto _L;
      }
    } else {
#line 622
      fprintf(_coverage_fout, "959\n");
#line 622
      fflush(_coverage_fout);
      _L: /* CIL Label */ 
#line 634
      if (c == 34) {
#line 634
        fprintf(_coverage_fout, "949\n");
#line 634
        fflush(_coverage_fout);
#line 635
        while (1) {
          {
#line 635
          fprintf(_coverage_fout, "927\n");
#line 635
          fflush(_coverage_fout);
#line 635
          c = _IO_getc(infile);
          }
#line 635
          fprintf(_coverage_fout, "946\n");
#line 635
          fflush(_coverage_fout);
#line 635
          if (c == -1) {
            {
#line 635
            fprintf(_coverage_fout, "928\n");
#line 635
            fflush(_coverage_fout);
#line 635
            tmp___38 = eof();
            }
          } else {
#line 635
            fprintf(_coverage_fout, "933\n");
#line 635
            fflush(_coverage_fout);
#line 635
            if (c == ldelim) {
#line 635
              fprintf(_coverage_fout, "931\n");
#line 635
              fflush(_coverage_fout);
#line 635
              if ((unsigned int )filesp == (unsigned int )(files)) {
                {
#line 635
                fprintf(_coverage_fout, "929\n");
#line 635
                fflush(_coverage_fout);
#line 635
                tmp___38 = skeqn();
                }
              } else {
#line 635
                fprintf(_coverage_fout, "930\n");
#line 635
                fflush(_coverage_fout);
#line 635
                tmp___38 = c;
              }
            } else {
#line 635
              fprintf(_coverage_fout, "932\n");
#line 635
              fflush(_coverage_fout);
#line 635
              tmp___38 = c;
            }
          }
#line 635
          fprintf(_coverage_fout, "947\n");
#line 635
          fflush(_coverage_fout);
#line 635
          if (! (tmp___38 != 34)) {
#line 635
            break;
          }
#line 635
          fprintf(_coverage_fout, "948\n");
#line 635
          fflush(_coverage_fout);
#line 636
          if (c == 92) {
            {
#line 637
            fprintf(_coverage_fout, "934\n");
#line 637
            fflush(_coverage_fout);
#line 637
            c = _IO_getc(infile);
            }
#line 636
            fprintf(_coverage_fout, "943\n");
#line 636
            fflush(_coverage_fout);
#line 637
            if (c == -1) {
              {
#line 637
              fprintf(_coverage_fout, "935\n");
#line 637
              fflush(_coverage_fout);
#line 637
              tmp___32 = eof();
              }
            } else {
#line 637
              fprintf(_coverage_fout, "940\n");
#line 637
              fflush(_coverage_fout);
#line 637
              if (c == ldelim) {
#line 637
                fprintf(_coverage_fout, "938\n");
#line 637
                fflush(_coverage_fout);
#line 637
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  {
#line 637
                  fprintf(_coverage_fout, "936\n");
#line 637
                  fflush(_coverage_fout);
#line 637
                  tmp___32 = skeqn();
                  }
                } else {
#line 637
                  fprintf(_coverage_fout, "937\n");
#line 637
                  fflush(_coverage_fout);
#line 637
                  tmp___32 = c;
                }
              } else {
#line 637
                fprintf(_coverage_fout, "939\n");
#line 637
                fflush(_coverage_fout);
#line 637
                tmp___32 = c;
              }
            }
#line 636
            fprintf(_coverage_fout, "944\n");
#line 636
            fflush(_coverage_fout);
#line 637
            if (tmp___32 == 34) {
#line 637
              continue;
            }
            {
#line 638
            fprintf(_coverage_fout, "941\n");
#line 638
            fflush(_coverage_fout);
#line 638
            ungetc(c, infile);
#line 638
            fprintf(_coverage_fout, "942\n");
#line 638
            fflush(_coverage_fout);
#line 639
            backsl();
            }
          } else {
#line 636
            fprintf(_coverage_fout, "945\n");
#line 636
            fflush(_coverage_fout);
#line 641
            tmp___34 = p1;
#line 641
            p1 ++;
#line 641
            *tmp___34 = (char )c;
          }
        }
#line 634
        fprintf(_coverage_fout, "950\n");
#line 634
        fflush(_coverage_fout);
#line 643
        tmp___40 = p1;
#line 643
        p1 ++;
#line 643
        *tmp___40 = (char )' ';
      } else {
#line 634
        fprintf(_coverage_fout, "958\n");
#line 634
        fflush(_coverage_fout);
#line 645
        if (c == 10) {
#line 645
          fprintf(_coverage_fout, "957\n");
#line 645
          fflush(_coverage_fout);
#line 645
          if ((unsigned int )p1 != (unsigned int )(line)) {
#line 645
            fprintf(_coverage_fout, "954\n");
#line 645
            fflush(_coverage_fout);
#line 646
            *p1 = (char )'\000';
#line 645
            fprintf(_coverage_fout, "955\n");
#line 645
            fflush(_coverage_fout);
#line 647
            if (wordflag) {
              {
#line 647
              fprintf(_coverage_fout, "951\n");
#line 647
              fflush(_coverage_fout);
#line 647
              msputwords(0);
              }
            } else {
              {
#line 649
              fprintf(_coverage_fout, "952\n");
#line 649
              fflush(_coverage_fout);
#line 649
              puts((char const   *)(line));
#line 649
              fprintf(_coverage_fout, "953\n");
#line 649
              fflush(_coverage_fout);
#line 650
              putchar('\n');
              }
            }
#line 645
            fprintf(_coverage_fout, "956\n");
#line 645
            fflush(_coverage_fout);
#line 652
            p1 = line;
          }
        }
      }
    }
  }
}
}
#line 675 "deroff-original.c"
int argconcat  =    0;
#line 685
struct mactab troffmactab[11] ;
#line 686
struct mactab ppmactab[7] ;
#line 687
struct mactab msmactab[17] ;
#line 688
struct mactab mmmactab[5] ;
#line 689
struct mactab memactab[23] ;
#line 690
struct mactab manmactab[10] ;
#line 699 "deroff-original.c"
int msputmac(char *s , int const_val ) 
{ register char *t ;
  register int found ;
  int last ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
#line 699
  fprintf(_coverage_fout, "1006\n");
#line 699
  fflush(_coverage_fout);
#line 706
  found = 0;
#line 699
  fprintf(_coverage_fout, "1007\n");
#line 699
  fflush(_coverage_fout);
#line 708
  if (wordflag) {
    {
#line 709
    fprintf(_coverage_fout, "965\n");
#line 709
    fflush(_coverage_fout);
#line 709
    msputwords(1);
    }
#line 708
    fprintf(_coverage_fout, "966\n");
#line 708
    fflush(_coverage_fout);
#line 710
    return;
  }
#line 699
  fprintf(_coverage_fout, "1008\n");
#line 699
  fflush(_coverage_fout);
#line 712
  while (1) {
#line 712
    fprintf(_coverage_fout, "996\n");
#line 712
    fflush(_coverage_fout);
#line 712
    if (! *s) {
#line 712
      break;
    }
#line 712
    fprintf(_coverage_fout, "997\n");
#line 712
    fflush(_coverage_fout);
#line 714
    while (1) {
#line 714
      fprintf(_coverage_fout, "971\n");
#line 714
      fflush(_coverage_fout);
#line 714
      if (! ((int )*s == 32)) {
#line 714
        fprintf(_coverage_fout, "967\n");
#line 714
        fflush(_coverage_fout);
#line 714
        if (! ((int )*s == 9)) {
#line 714
          break;
        }
      }
      {
#line 715
      fprintf(_coverage_fout, "968\n");
#line 715
      fflush(_coverage_fout);
#line 715
      tmp = s;
#line 715
      fprintf(_coverage_fout, "969\n");
#line 715
      fflush(_coverage_fout);
#line 715
      s ++;
#line 715
      fprintf(_coverage_fout, "970\n");
#line 715
      fflush(_coverage_fout);
#line 715
      putchar((int )*tmp);
      }
    }
#line 712
    fprintf(_coverage_fout, "998\n");
#line 712
    fflush(_coverage_fout);
#line 716
    t = s;
#line 712
    fprintf(_coverage_fout, "999\n");
#line 712
    fflush(_coverage_fout);
#line 716
    while (1) {
#line 716
      fprintf(_coverage_fout, "974\n");
#line 716
      fflush(_coverage_fout);
#line 716
      if ((int )*t != 32) {
#line 716
        fprintf(_coverage_fout, "973\n");
#line 716
        fflush(_coverage_fout);
#line 716
        if ((int )*t != 9) {
#line 716
          fprintf(_coverage_fout, "972\n");
#line 716
          fflush(_coverage_fout);
#line 716
          if (! ((int )*t != 0)) {
#line 716
            break;
          }
        } else {
#line 716
          break;
        }
      } else {
#line 716
        break;
      }
#line 716
      fprintf(_coverage_fout, "975\n");
#line 716
      fflush(_coverage_fout);
#line 716
      t ++;
    }
#line 712
    fprintf(_coverage_fout, "1000\n");
#line 712
    fflush(_coverage_fout);
#line 718
    if ((int )*s == 34) {
#line 718
      fprintf(_coverage_fout, "976\n");
#line 718
      fflush(_coverage_fout);
#line 718
      s ++;
    }
#line 712
    fprintf(_coverage_fout, "1001\n");
#line 712
    fflush(_coverage_fout);
#line 719
    if ((unsigned int )t > (unsigned int )(s + const_val)) {
#line 719
      fprintf(_coverage_fout, "986\n");
#line 719
      fflush(_coverage_fout);
#line 719
      if ((int )chars[*(s + 0)] == 4) {
#line 719
        fprintf(_coverage_fout, "985\n");
#line 719
        fflush(_coverage_fout);
#line 719
        if ((int )chars[*(s + 1)] == 4) {
#line 719
          fprintf(_coverage_fout, "983\n");
#line 719
          fflush(_coverage_fout);
#line 720
          while (1) {
#line 720
            fprintf(_coverage_fout, "981\n");
#line 720
            fflush(_coverage_fout);
#line 720
            if (! ((unsigned int )s < (unsigned int )t)) {
#line 720
              break;
            }
#line 720
            fprintf(_coverage_fout, "982\n");
#line 720
            fflush(_coverage_fout);
#line 721
            if ((int )*s == 34) {
#line 721
              fprintf(_coverage_fout, "977\n");
#line 721
              fflush(_coverage_fout);
#line 721
              s ++;
            } else {
              {
#line 723
              fprintf(_coverage_fout, "978\n");
#line 723
              fflush(_coverage_fout);
#line 723
              tmp___0 = s;
#line 723
              fprintf(_coverage_fout, "979\n");
#line 723
              fflush(_coverage_fout);
#line 723
              s ++;
#line 723
              fprintf(_coverage_fout, "980\n");
#line 723
              fflush(_coverage_fout);
#line 723
              putchar((int )*tmp___0);
              }
            }
          }
#line 719
          fprintf(_coverage_fout, "984\n");
#line 719
          fflush(_coverage_fout);
#line 724
          last = (int )*(t - 1);
#line 725
          found ++;
        } else {
          goto _L___0;
        }
      } else {
        goto _L___0;
      }
    } else {
#line 719
      fprintf(_coverage_fout, "995\n");
#line 719
      fflush(_coverage_fout);
      _L___0: /* CIL Label */ 
      _L: /* CIL Label */ 
#line 727
      if (found) {
#line 727
        fprintf(_coverage_fout, "993\n");
#line 727
        fflush(_coverage_fout);
#line 727
        if ((int )chars[*(s + 0)] == 2) {
#line 727
          fprintf(_coverage_fout, "991\n");
#line 727
          fflush(_coverage_fout);
#line 727
          if ((int )*(s + 1) == 0) {
            {
#line 728
            fprintf(_coverage_fout, "987\n");
#line 728
            fflush(_coverage_fout);
#line 728
            tmp___1 = s;
#line 728
            fprintf(_coverage_fout, "988\n");
#line 728
            fflush(_coverage_fout);
#line 728
            s ++;
#line 728
            fprintf(_coverage_fout, "989\n");
#line 728
            fflush(_coverage_fout);
#line 728
            putchar((int )*tmp___1);
            }
          } else {
#line 727
            fprintf(_coverage_fout, "990\n");
#line 727
            fflush(_coverage_fout);
#line 730
            last = (int )*(t - 1);
#line 731
            s = t;
          }
        } else {
#line 727
          fprintf(_coverage_fout, "992\n");
#line 727
          fflush(_coverage_fout);
#line 730
          last = (int )*(t - 1);
#line 731
          s = t;
        }
      } else {
#line 727
        fprintf(_coverage_fout, "994\n");
#line 727
        fflush(_coverage_fout);
#line 730
        last = (int )*(t - 1);
#line 731
        s = t;
      }
    }
  }
  {
#line 734
  fprintf(_coverage_fout, "1002\n");
#line 734
  fflush(_coverage_fout);
#line 734
  putchar('\n');
  }
#line 699
  fprintf(_coverage_fout, "1009\n");
#line 699
  fflush(_coverage_fout);
#line 735
  if (msflag) {
#line 735
    fprintf(_coverage_fout, "1005\n");
#line 735
    fflush(_coverage_fout);
#line 735
    if ((int )chars[last] == 2) {
      {
#line 736
      fprintf(_coverage_fout, "1003\n");
#line 736
      fflush(_coverage_fout);
#line 736
      putchar(last);
#line 736
      fprintf(_coverage_fout, "1004\n");
#line 736
      fflush(_coverage_fout);
#line 737
      putchar('\n');
      }
    }
  }
#line 699
  fprintf(_coverage_fout, "1010\n");
#line 699
  fflush(_coverage_fout);
#line 739
  return (0);
}
}
#line 743 "deroff-original.c"
int msputwords(int macline ) 
{ register char *p ;
  register char *p1 ;
  int i ;
  int nlet ;
  char *tmp ;
  char *tmp___0 ;

  {
#line 743
  fprintf(_coverage_fout, "1044\n");
#line 743
  fflush(_coverage_fout);
#line 749
  p1 = line;
#line 743
  fprintf(_coverage_fout, "1045\n");
#line 743
  fflush(_coverage_fout);
#line 749
  while (1) {
#line 749
    fprintf(_coverage_fout, "1040\n");
#line 749
    fflush(_coverage_fout);
#line 753
    while (1) {
#line 753
      fprintf(_coverage_fout, "1012\n");
#line 753
      fflush(_coverage_fout);
#line 753
      if (! ((int )chars[*p1] < 3)) {
#line 753
        break;
      }
#line 753
      fprintf(_coverage_fout, "1013\n");
#line 753
      fflush(_coverage_fout);
#line 754
      tmp = p1;
#line 754
      p1 ++;
#line 753
      fprintf(_coverage_fout, "1014\n");
#line 753
      fflush(_coverage_fout);
#line 754
      if ((int )*tmp == 0) {
#line 754
        fprintf(_coverage_fout, "1011\n");
#line 754
        fflush(_coverage_fout);
#line 754
        return;
      }
    }
#line 749
    fprintf(_coverage_fout, "1041\n");
#line 749
    fflush(_coverage_fout);
#line 755
    nlet = 0;
#line 756
    p = p1;
#line 749
    fprintf(_coverage_fout, "1042\n");
#line 749
    fflush(_coverage_fout);
#line 756
    while (1) {
#line 756
      fprintf(_coverage_fout, "1016\n");
#line 756
      fflush(_coverage_fout);
#line 756
      i = (int )chars[*p];
#line 756
      fprintf(_coverage_fout, "1017\n");
#line 756
      fflush(_coverage_fout);
#line 756
      if (! (i != 0)) {
#line 756
        break;
      }
#line 756
      fprintf(_coverage_fout, "1018\n");
#line 756
      fflush(_coverage_fout);
#line 757
      if (i == 4) {
#line 757
        fprintf(_coverage_fout, "1015\n");
#line 757
        fflush(_coverage_fout);
#line 757
        nlet ++;
      }
#line 756
      fprintf(_coverage_fout, "1019\n");
#line 756
      fflush(_coverage_fout);
#line 756
      p ++;
    }
#line 749
    fprintf(_coverage_fout, "1043\n");
#line 749
    fflush(_coverage_fout);
#line 759
    if (macline) {
#line 759
      fprintf(_coverage_fout, "1020\n");
#line 759
      fflush(_coverage_fout);
#line 759
      if (nlet > 1) {
        goto _L;
      } else {
        goto _L___0;
      }
    } else {
#line 759
      fprintf(_coverage_fout, "1039\n");
#line 759
      fflush(_coverage_fout);
      _L___0: /* CIL Label */ 
#line 759
      if (! macline) {
#line 759
        fprintf(_coverage_fout, "1037\n");
#line 759
        fflush(_coverage_fout);
#line 759
        if (nlet > 2) {
#line 759
          fprintf(_coverage_fout, "1035\n");
#line 759
          fflush(_coverage_fout);
#line 759
          if ((int )chars[*(p1 + 0)] == 4) {
#line 759
            fprintf(_coverage_fout, "1033\n");
#line 759
            fflush(_coverage_fout);
#line 759
            if ((int )chars[*(p1 + 1)] == 4) {
#line 759
              fprintf(_coverage_fout, "1030\n");
#line 759
              fflush(_coverage_fout);
              _L: /* CIL Label */ 
#line 767
              while (1) {
#line 767
                fprintf(_coverage_fout, "1023\n");
#line 767
                fflush(_coverage_fout);
#line 767
                if (! ((int )*(p + -1) == 39)) {
#line 767
                  fprintf(_coverage_fout, "1022\n");
#line 767
                  fflush(_coverage_fout);
#line 767
                  if (! ((int )*(p + -1) == 38)) {
#line 767
                    fprintf(_coverage_fout, "1021\n");
#line 767
                    fflush(_coverage_fout);
#line 767
                    if (! ((int )chars[*(p + -1)] == 2)) {
#line 767
                      break;
                    }
                  }
                }
#line 767
                fprintf(_coverage_fout, "1024\n");
#line 767
                fflush(_coverage_fout);
#line 770
                p --;
              }
#line 759
              fprintf(_coverage_fout, "1031\n");
#line 759
              fflush(_coverage_fout);
#line 772
              while (1) {
#line 772
                fprintf(_coverage_fout, "1028\n");
#line 772
                fflush(_coverage_fout);
#line 772
                if (! ((unsigned int )p1 < (unsigned int )p)) {
#line 772
                  break;
                }
                {
#line 773
                fprintf(_coverage_fout, "1025\n");
#line 773
                fflush(_coverage_fout);
#line 773
                tmp___0 = p1;
#line 773
                fprintf(_coverage_fout, "1026\n");
#line 773
                fflush(_coverage_fout);
#line 773
                p1 ++;
#line 773
                fprintf(_coverage_fout, "1027\n");
#line 773
                fflush(_coverage_fout);
#line 773
                putchar((int )*tmp___0);
                }
              }
              {
#line 774
              fprintf(_coverage_fout, "1029\n");
#line 774
              fflush(_coverage_fout);
#line 774
              putchar('\n');
              }
            } else {
#line 759
              fprintf(_coverage_fout, "1032\n");
#line 759
              fflush(_coverage_fout);
#line 776
              p1 = p;
            }
          } else {
#line 759
            fprintf(_coverage_fout, "1034\n");
#line 759
            fflush(_coverage_fout);
#line 776
            p1 = p;
          }
        } else {
#line 759
          fprintf(_coverage_fout, "1036\n");
#line 759
          fflush(_coverage_fout);
#line 776
          p1 = p;
        }
      } else {
#line 759
        fprintf(_coverage_fout, "1038\n");
#line 759
        fflush(_coverage_fout);
#line 776
        p1 = p;
      }
    }
  }
}
}
#line 797
int meputwords(int macline ) ;
#line 816
extern int ( /* missing proto */  strcpy)() ;
#line 786 "deroff-original.c"
int meputmac(char *cp , int const_val ) 
{ register char *np ;
  int found ;
  int argno ;
  int last ;
  int inquote ;

  {
#line 786
  fprintf(_coverage_fout, "1093\n");
#line 786
  fflush(_coverage_fout);
#line 796
  if (wordflag) {
    {
#line 797
    fprintf(_coverage_fout, "1046\n");
#line 797
    fflush(_coverage_fout);
#line 797
    meputwords(1);
    }
#line 796
    fprintf(_coverage_fout, "1047\n");
#line 796
    fflush(_coverage_fout);
#line 798
    return;
  }
#line 786
  fprintf(_coverage_fout, "1094\n");
#line 786
  fflush(_coverage_fout);
#line 800
  argno = 0;
#line 786
  fprintf(_coverage_fout, "1095\n");
#line 786
  fflush(_coverage_fout);
#line 800
  while (1) {
#line 800
    fprintf(_coverage_fout, "1080\n");
#line 800
    fflush(_coverage_fout);
#line 800
    if (! *cp) {
#line 800
      break;
    }
#line 800
    fprintf(_coverage_fout, "1081\n");
#line 800
    fflush(_coverage_fout);
#line 801
    while (1) {
#line 801
      fprintf(_coverage_fout, "1049\n");
#line 801
      fflush(_coverage_fout);
#line 801
      if (! ((int )*cp == 32)) {
#line 801
        fprintf(_coverage_fout, "1048\n");
#line 801
        fflush(_coverage_fout);
#line 801
        if (! ((int )*cp == 9)) {
#line 801
          break;
        }
      }
#line 801
      fprintf(_coverage_fout, "1050\n");
#line 801
      fflush(_coverage_fout);
#line 801
      cp ++;
    }
#line 800
    fprintf(_coverage_fout, "1082\n");
#line 800
    fflush(_coverage_fout);
#line 802
    inquote = (int )*cp == 34;
#line 800
    fprintf(_coverage_fout, "1083\n");
#line 800
    fflush(_coverage_fout);
#line 803
    if (inquote) {
#line 803
      fprintf(_coverage_fout, "1051\n");
#line 803
      fflush(_coverage_fout);
#line 804
      cp ++;
    }
#line 800
    fprintf(_coverage_fout, "1084\n");
#line 800
    fflush(_coverage_fout);
#line 805
    np = cp;
#line 800
    fprintf(_coverage_fout, "1085\n");
#line 800
    fflush(_coverage_fout);
#line 805
    while (1) {
#line 805
      fprintf(_coverage_fout, "1060\n");
#line 805
      fflush(_coverage_fout);
#line 805
      if (! *np) {
#line 805
        break;
      }
#line 806
      switch ((int )*np) {
      case 10: 
      case 0: 
#line 808
      break;
#line 806
      fprintf(_coverage_fout, "1057\n");
#line 806
      fflush(_coverage_fout);
      case 9: 
      case 32: 
#line 810
      if (inquote) {
        goto __Cont;
      } else {
        goto endarg;
      }
#line 806
      fprintf(_coverage_fout, "1058\n");
#line 806
      fflush(_coverage_fout);
      case 34: 
#line 815
      if (inquote) {
#line 815
        fprintf(_coverage_fout, "1055\n");
#line 815
        fflush(_coverage_fout);
#line 815
        if ((int )*(np + 1) == 34) {
          {
#line 816
          fprintf(_coverage_fout, "1052\n");
#line 816
          fflush(_coverage_fout);
#line 816
          strcpy(np, np + 1);
#line 816
          fprintf(_coverage_fout, "1053\n");
#line 816
          fflush(_coverage_fout);
#line 817
          np ++;
          }
          goto __Cont;
        } else {
#line 815
          fprintf(_coverage_fout, "1054\n");
#line 815
          fflush(_coverage_fout);
#line 820
          *np = (char )' ';
          goto endarg;
        }
      } else {
#line 815
        fprintf(_coverage_fout, "1056\n");
#line 815
        fflush(_coverage_fout);
#line 820
        *np = (char )' ';
        goto endarg;
      }
#line 806
      fprintf(_coverage_fout, "1059\n");
#line 806
      fflush(_coverage_fout);
      default: ;
      goto __Cont;
      }
#line 805
      fprintf(_coverage_fout, "1061\n");
#line 805
      fflush(_coverage_fout);
      __Cont: /* CIL Label */ 
#line 805
      np ++;
    }
#line 800
    fprintf(_coverage_fout, "1086\n");
#line 800
    fflush(_coverage_fout);
    endarg: ;
#line 800
    fprintf(_coverage_fout, "1087\n");
#line 800
    fflush(_coverage_fout);
#line 831
    if (argconcat == 0) {
      {
#line 832
      fprintf(_coverage_fout, "1062\n");
#line 832
      fflush(_coverage_fout);
#line 832
      putchar(' ');
      }
    } else {
#line 831
      fprintf(_coverage_fout, "1064\n");
#line 831
      fflush(_coverage_fout);
#line 831
      if (argconcat != argno) {
        {
#line 832
        fprintf(_coverage_fout, "1063\n");
#line 832
        fflush(_coverage_fout);
#line 832
        putchar(' ');
        }
      }
    }
#line 800
    fprintf(_coverage_fout, "1088\n");
#line 800
    fflush(_coverage_fout);
#line 850
    if (np - cp > const_val) {
#line 850
      fprintf(_coverage_fout, "1072\n");
#line 850
      fflush(_coverage_fout);
#line 850
      if (inquote) {
        goto _L___0;
      } else {
#line 850
        fprintf(_coverage_fout, "1071\n");
#line 850
        fflush(_coverage_fout);
#line 850
        if ((int )chars[*(cp + 0)] == 4) {
#line 850
          fprintf(_coverage_fout, "1068\n");
#line 850
          fflush(_coverage_fout);
          _L___0: /* CIL Label */ 
#line 853
          cp = cp;
#line 850
          fprintf(_coverage_fout, "1069\n");
#line 850
          fflush(_coverage_fout);
#line 853
          while (1) {
#line 853
            fprintf(_coverage_fout, "1067\n");
#line 853
            fflush(_coverage_fout);
#line 853
            if (! ((unsigned int )cp < (unsigned int )np)) {
#line 853
              break;
            }
            {
#line 854
            fprintf(_coverage_fout, "1065\n");
#line 854
            fflush(_coverage_fout);
#line 854
            putchar((int )*cp);
#line 854
            fprintf(_coverage_fout, "1066\n");
#line 854
            fflush(_coverage_fout);
#line 853
            cp ++;
            }
          }
#line 850
          fprintf(_coverage_fout, "1070\n");
#line 850
          fflush(_coverage_fout);
#line 856
          last = (int )*(np + -1);
#line 857
          found ++;
        } else {
          goto _L;
        }
      }
    } else {
#line 850
      fprintf(_coverage_fout, "1079\n");
#line 850
      fflush(_coverage_fout);
      _L: /* CIL Label */ 
#line 859
      if (found) {
#line 859
        fprintf(_coverage_fout, "1077\n");
#line 859
        fflush(_coverage_fout);
#line 859
        if (np - cp == 1) {
#line 859
          fprintf(_coverage_fout, "1075\n");
#line 859
          fflush(_coverage_fout);
#line 859
          if ((int )chars[*cp] == 2) {
            {
#line 860
            fprintf(_coverage_fout, "1073\n");
#line 860
            fflush(_coverage_fout);
#line 860
            putchar((int )*cp);
            }
          } else {
#line 859
            fprintf(_coverage_fout, "1074\n");
#line 859
            fflush(_coverage_fout);
#line 862
            last = (int )*(np + -1);
          }
        } else {
#line 859
          fprintf(_coverage_fout, "1076\n");
#line 859
          fflush(_coverage_fout);
#line 862
          last = (int )*(np + -1);
        }
      } else {
#line 859
        fprintf(_coverage_fout, "1078\n");
#line 859
        fflush(_coverage_fout);
#line 862
        last = (int )*(np + -1);
      }
    }
#line 800
    fprintf(_coverage_fout, "1089\n");
#line 800
    fflush(_coverage_fout);
#line 864
    cp = np;
#line 800
    argno ++;
  }
#line 786
  fprintf(_coverage_fout, "1096\n");
#line 786
  fflush(_coverage_fout);
#line 866
  if (msflag) {
#line 866
    fprintf(_coverage_fout, "1091\n");
#line 866
    fflush(_coverage_fout);
#line 866
    if ((int )chars[last] == 2) {
      {
#line 867
      fprintf(_coverage_fout, "1090\n");
#line 867
      fflush(_coverage_fout);
#line 867
      putchar(last);
      }
    }
  }
  {
#line 868
  fprintf(_coverage_fout, "1092\n");
#line 868
  fflush(_coverage_fout);
#line 868
  putchar('\n');
  }
#line 786
  fprintf(_coverage_fout, "1097\n");
#line 786
  fflush(_coverage_fout);
#line 869
  return (0);
}
}
#line 873 "deroff-original.c"
int meputwords(int macline ) 
{ 

  {
  {
#line 876
  fprintf(_coverage_fout, "1098\n");
#line 876
  fflush(_coverage_fout);
#line 876
  msputwords(macline);
  }
#line 873
  fprintf(_coverage_fout, "1099\n");
#line 873
  fflush(_coverage_fout);
#line 877
  return (0);
}
}
#line 898 "deroff-original.c"
int noblock(char a1 , char a2 ) 
{ register int c1 ;
  register int c2 ;
  register int eqnf ;
  int lct ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;

  {
#line 898
  fprintf(_coverage_fout, "1217\n");
#line 898
  fflush(_coverage_fout);
#line 904
  lct = 0;
#line 905
  eqnf = 1;
#line 898
  fprintf(_coverage_fout, "1218\n");
#line 898
  fflush(_coverage_fout);
#line 906
  while (1) {
    {
#line 906
    fprintf(_coverage_fout, "1100\n");
#line 906
    fflush(_coverage_fout);
#line 906
    c = _IO_getc(infile);
    }
#line 906
    fprintf(_coverage_fout, "1107\n");
#line 906
    fflush(_coverage_fout);
#line 906
    if (c == -1) {
      {
#line 906
      fprintf(_coverage_fout, "1101\n");
#line 906
      fflush(_coverage_fout);
#line 906
      tmp___2 = eof();
      }
    } else {
#line 906
      fprintf(_coverage_fout, "1106\n");
#line 906
      fflush(_coverage_fout);
#line 906
      if (c == ldelim) {
#line 906
        fprintf(_coverage_fout, "1104\n");
#line 906
        fflush(_coverage_fout);
#line 906
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 906
          fprintf(_coverage_fout, "1102\n");
#line 906
          fflush(_coverage_fout);
#line 906
          tmp___2 = skeqn();
          }
        } else {
#line 906
          fprintf(_coverage_fout, "1103\n");
#line 906
          fflush(_coverage_fout);
#line 906
          tmp___2 = c;
        }
      } else {
#line 906
        fprintf(_coverage_fout, "1105\n");
#line 906
        fflush(_coverage_fout);
#line 906
        tmp___2 = c;
      }
    }
#line 906
    fprintf(_coverage_fout, "1108\n");
#line 906
    fflush(_coverage_fout);
#line 906
    if (! (tmp___2 != 10)) {
#line 906
      break;
    }
  }
#line 898
  fprintf(_coverage_fout, "1219\n");
#line 898
  fflush(_coverage_fout);
#line 907
  while (1) {
#line 907
    fprintf(_coverage_fout, "1211\n");
#line 907
    fflush(_coverage_fout);
#line 908
    while (1) {
      {
#line 908
      fprintf(_coverage_fout, "1109\n");
#line 908
      fflush(_coverage_fout);
#line 908
      c = _IO_getc(infile);
      }
#line 908
      fprintf(_coverage_fout, "1126\n");
#line 908
      fflush(_coverage_fout);
#line 908
      if (c == -1) {
        {
#line 908
        fprintf(_coverage_fout, "1110\n");
#line 908
        fflush(_coverage_fout);
#line 908
        tmp___12 = eof();
        }
      } else {
#line 908
        fprintf(_coverage_fout, "1115\n");
#line 908
        fflush(_coverage_fout);
#line 908
        if (c == ldelim) {
#line 908
          fprintf(_coverage_fout, "1113\n");
#line 908
          fflush(_coverage_fout);
#line 908
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 908
            fprintf(_coverage_fout, "1111\n");
#line 908
            fflush(_coverage_fout);
#line 908
            tmp___12 = skeqn();
            }
          } else {
#line 908
            fprintf(_coverage_fout, "1112\n");
#line 908
            fflush(_coverage_fout);
#line 908
            tmp___12 = c;
          }
        } else {
#line 908
          fprintf(_coverage_fout, "1114\n");
#line 908
          fflush(_coverage_fout);
#line 908
          tmp___12 = c;
        }
      }
#line 908
      fprintf(_coverage_fout, "1127\n");
#line 908
      fflush(_coverage_fout);
#line 908
      if (! (tmp___12 != 46)) {
#line 908
        break;
      }
#line 908
      fprintf(_coverage_fout, "1128\n");
#line 908
      fflush(_coverage_fout);
#line 909
      if (c == 10) {
#line 910
        continue;
      } else {
#line 909
        fprintf(_coverage_fout, "1125\n");
#line 909
        fflush(_coverage_fout);
#line 912
        while (1) {
          {
#line 912
          fprintf(_coverage_fout, "1116\n");
#line 912
          fflush(_coverage_fout);
#line 912
          c = _IO_getc(infile);
          }
#line 912
          fprintf(_coverage_fout, "1123\n");
#line 912
          fflush(_coverage_fout);
#line 912
          if (c == -1) {
            {
#line 912
            fprintf(_coverage_fout, "1117\n");
#line 912
            fflush(_coverage_fout);
#line 912
            tmp___7 = eof();
            }
          } else {
#line 912
            fprintf(_coverage_fout, "1122\n");
#line 912
            fflush(_coverage_fout);
#line 912
            if (c == ldelim) {
#line 912
              fprintf(_coverage_fout, "1120\n");
#line 912
              fflush(_coverage_fout);
#line 912
              if ((unsigned int )filesp == (unsigned int )(files)) {
                {
#line 912
                fprintf(_coverage_fout, "1118\n");
#line 912
                fflush(_coverage_fout);
#line 912
                tmp___7 = skeqn();
                }
              } else {
#line 912
                fprintf(_coverage_fout, "1119\n");
#line 912
                fflush(_coverage_fout);
#line 912
                tmp___7 = c;
              }
            } else {
#line 912
              fprintf(_coverage_fout, "1121\n");
#line 912
              fflush(_coverage_fout);
#line 912
              tmp___7 = c;
            }
          }
#line 912
          fprintf(_coverage_fout, "1124\n");
#line 912
          fflush(_coverage_fout);
#line 912
          if (! (tmp___7 != 10)) {
#line 912
            break;
          }
        }
      }
    }
    {
#line 913
    fprintf(_coverage_fout, "1129\n");
#line 913
    fflush(_coverage_fout);
#line 913
    c = _IO_getc(infile);
    }
#line 907
    fprintf(_coverage_fout, "1212\n");
#line 907
    fflush(_coverage_fout);
#line 913
    if (c == -1) {
      {
#line 913
      fprintf(_coverage_fout, "1130\n");
#line 913
      fflush(_coverage_fout);
#line 913
      c1 = eof();
      }
    } else {
#line 913
      fprintf(_coverage_fout, "1135\n");
#line 913
      fflush(_coverage_fout);
#line 913
      if (c == ldelim) {
#line 913
        fprintf(_coverage_fout, "1133\n");
#line 913
        fflush(_coverage_fout);
#line 913
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 913
          fprintf(_coverage_fout, "1131\n");
#line 913
          fflush(_coverage_fout);
#line 913
          c1 = skeqn();
          }
        } else {
#line 913
          fprintf(_coverage_fout, "1132\n");
#line 913
          fflush(_coverage_fout);
#line 913
          c1 = c;
        }
      } else {
#line 913
        fprintf(_coverage_fout, "1134\n");
#line 913
        fflush(_coverage_fout);
#line 913
        c1 = c;
      }
    }
#line 907
    fprintf(_coverage_fout, "1213\n");
#line 907
    fflush(_coverage_fout);
#line 913
    if (c1 == 10) {
#line 914
      continue;
    }
    {
#line 915
    fprintf(_coverage_fout, "1136\n");
#line 915
    fflush(_coverage_fout);
#line 915
    c = _IO_getc(infile);
    }
#line 907
    fprintf(_coverage_fout, "1214\n");
#line 907
    fflush(_coverage_fout);
#line 915
    if (c == -1) {
      {
#line 915
      fprintf(_coverage_fout, "1137\n");
#line 915
      fflush(_coverage_fout);
#line 915
      c2 = eof();
      }
    } else {
#line 915
      fprintf(_coverage_fout, "1142\n");
#line 915
      fflush(_coverage_fout);
#line 915
      if (c == ldelim) {
#line 915
        fprintf(_coverage_fout, "1140\n");
#line 915
        fflush(_coverage_fout);
#line 915
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 915
          fprintf(_coverage_fout, "1138\n");
#line 915
          fflush(_coverage_fout);
#line 915
          c2 = skeqn();
          }
        } else {
#line 915
          fprintf(_coverage_fout, "1139\n");
#line 915
          fflush(_coverage_fout);
#line 915
          c2 = c;
        }
      } else {
#line 915
        fprintf(_coverage_fout, "1141\n");
#line 915
        fflush(_coverage_fout);
#line 915
        c2 = c;
      }
    }
#line 907
    fprintf(_coverage_fout, "1215\n");
#line 907
    fflush(_coverage_fout);
#line 915
    if (c2 == 10) {
#line 916
      continue;
    }
#line 907
    fprintf(_coverage_fout, "1216\n");
#line 907
    fflush(_coverage_fout);
#line 917
    if (c1 == (int )a1) {
#line 917
      fprintf(_coverage_fout, "1159\n");
#line 917
      fflush(_coverage_fout);
#line 917
      if (c2 == (int )a2) {
#line 917
        fprintf(_coverage_fout, "1155\n");
#line 917
        fflush(_coverage_fout);
#line 918
        while (1) {
          {
#line 918
          fprintf(_coverage_fout, "1143\n");
#line 918
          fflush(_coverage_fout);
#line 918
          c = _IO_getc(infile);
          }
#line 918
          fprintf(_coverage_fout, "1150\n");
#line 918
          fflush(_coverage_fout);
#line 918
          if (c == -1) {
            {
#line 918
            fprintf(_coverage_fout, "1144\n");
#line 918
            fflush(_coverage_fout);
#line 918
            tmp___25 = eof();
            }
          } else {
#line 918
            fprintf(_coverage_fout, "1149\n");
#line 918
            fflush(_coverage_fout);
#line 918
            if (c == ldelim) {
#line 918
              fprintf(_coverage_fout, "1147\n");
#line 918
              fflush(_coverage_fout);
#line 918
              if ((unsigned int )filesp == (unsigned int )(files)) {
                {
#line 918
                fprintf(_coverage_fout, "1145\n");
#line 918
                fflush(_coverage_fout);
#line 918
                tmp___25 = skeqn();
                }
              } else {
#line 918
                fprintf(_coverage_fout, "1146\n");
#line 918
                fflush(_coverage_fout);
#line 918
                tmp___25 = c;
              }
            } else {
#line 918
              fprintf(_coverage_fout, "1148\n");
#line 918
              fflush(_coverage_fout);
#line 918
              tmp___25 = c;
            }
          }
#line 918
          fprintf(_coverage_fout, "1151\n");
#line 918
          fflush(_coverage_fout);
#line 918
          if (! (tmp___25 != 10)) {
#line 918
            break;
          }
        }
#line 917
        fprintf(_coverage_fout, "1156\n");
#line 917
        fflush(_coverage_fout);
#line 919
        if (lct != 0) {
#line 919
          fprintf(_coverage_fout, "1152\n");
#line 919
          fflush(_coverage_fout);
#line 920
          lct --;
#line 921
          continue;
        }
#line 917
        fprintf(_coverage_fout, "1157\n");
#line 917
        fflush(_coverage_fout);
#line 923
        if (eqnf) {
          {
#line 924
          fprintf(_coverage_fout, "1153\n");
#line 924
          fflush(_coverage_fout);
#line 924
          putchar('.');
          }
        }
        {
#line 925
        fprintf(_coverage_fout, "1154\n");
#line 925
        fflush(_coverage_fout);
#line 925
        putchar('\n');
        }
#line 917
        fprintf(_coverage_fout, "1158\n");
#line 917
        fflush(_coverage_fout);
#line 926
        return;
      } else {
        goto _L___5;
      }
    } else {
#line 917
      fprintf(_coverage_fout, "1210\n");
#line 917
      fflush(_coverage_fout);
      _L___5: /* CIL Label */ 
#line 927
      if ((int )a1 == 76) {
#line 927
        fprintf(_coverage_fout, "1171\n");
#line 927
        fflush(_coverage_fout);
#line 927
        if (c2 == 76) {
#line 927
          fprintf(_coverage_fout, "1169\n");
#line 927
          fflush(_coverage_fout);
#line 928
          lct ++;
#line 927
          fprintf(_coverage_fout, "1170\n");
#line 927
          fflush(_coverage_fout);
#line 929
          while (1) {
            {
#line 929
            fprintf(_coverage_fout, "1160\n");
#line 929
            fflush(_coverage_fout);
#line 929
            c = _IO_getc(infile);
            }
#line 929
            fprintf(_coverage_fout, "1167\n");
#line 929
            fflush(_coverage_fout);
#line 929
            if (c == -1) {
              {
#line 929
              fprintf(_coverage_fout, "1161\n");
#line 929
              fflush(_coverage_fout);
#line 929
              tmp___30 = eof();
              }
            } else {
#line 929
              fprintf(_coverage_fout, "1166\n");
#line 929
              fflush(_coverage_fout);
#line 929
              if (c == ldelim) {
#line 929
                fprintf(_coverage_fout, "1164\n");
#line 929
                fflush(_coverage_fout);
#line 929
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  {
#line 929
                  fprintf(_coverage_fout, "1162\n");
#line 929
                  fflush(_coverage_fout);
#line 929
                  tmp___30 = skeqn();
                  }
                } else {
#line 929
                  fprintf(_coverage_fout, "1163\n");
#line 929
                  fflush(_coverage_fout);
#line 929
                  tmp___30 = c;
                }
              } else {
#line 929
                fprintf(_coverage_fout, "1165\n");
#line 929
                fflush(_coverage_fout);
#line 929
                tmp___30 = c;
              }
            }
#line 929
            fprintf(_coverage_fout, "1168\n");
#line 929
            fflush(_coverage_fout);
#line 929
            if (! (tmp___30 != 10)) {
#line 929
              break;
            }
          }
        } else {
          goto _L___4;
        }
      } else {
#line 927
        fprintf(_coverage_fout, "1209\n");
#line 927
        fflush(_coverage_fout);
        _L___4: /* CIL Label */ 
#line 934
        if (c1 == 69) {
#line 934
          fprintf(_coverage_fout, "1180\n");
#line 934
          fflush(_coverage_fout);
#line 934
          if (c2 == 81) {
#line 934
            fprintf(_coverage_fout, "1179\n");
#line 934
            fflush(_coverage_fout);
#line 935
            if (mac == 2) {
#line 935
              fprintf(_coverage_fout, "1174\n");
#line 935
              fflush(_coverage_fout);
#line 935
              if ((int )a1 == 41) {
                {
#line 937
                fprintf(_coverage_fout, "1172\n");
#line 937
                fflush(_coverage_fout);
#line 937
                eqn();
#line 937
                fprintf(_coverage_fout, "1173\n");
#line 937
                fflush(_coverage_fout);
#line 938
                eqnf = 0;
                }
              } else {
                goto _L;
              }
            } else {
#line 935
              fprintf(_coverage_fout, "1178\n");
#line 935
              fflush(_coverage_fout);
              _L: /* CIL Label */ 
#line 935
              if (mac != 2) {
#line 935
                fprintf(_coverage_fout, "1177\n");
#line 935
                fflush(_coverage_fout);
#line 935
                if ((int )a1 == 68) {
                  {
#line 937
                  fprintf(_coverage_fout, "1175\n");
#line 937
                  fflush(_coverage_fout);
#line 937
                  eqn();
#line 937
                  fprintf(_coverage_fout, "1176\n");
#line 937
                  fflush(_coverage_fout);
#line 938
                  eqnf = 0;
                  }
                }
              }
            }
          } else {
            goto _L___3;
          }
        } else {
#line 934
          fprintf(_coverage_fout, "1208\n");
#line 934
          fflush(_coverage_fout);
          _L___3: /* CIL Label */ 
#line 945
          if ((int )a1 == 102) {
#line 945
            fprintf(_coverage_fout, "1197\n");
#line 945
            fflush(_coverage_fout);
#line 946
            if (mac == 2) {
#line 946
              fprintf(_coverage_fout, "1182\n");
#line 946
              fflush(_coverage_fout);
#line 946
              if (c2 == 104) {
                goto _L___1;
              } else {
#line 946
                fprintf(_coverage_fout, "1181\n");
#line 946
                fflush(_coverage_fout);
#line 946
                if (c2 == 112) {
                  goto _L___1;
                } else {
                  goto _L___2;
                }
              }
            } else {
#line 946
              fprintf(_coverage_fout, "1196\n");
#line 946
              fflush(_coverage_fout);
              _L___2: /* CIL Label */ 
#line 946
              if (mac != 2) {
#line 946
                fprintf(_coverage_fout, "1195\n");
#line 946
                fflush(_coverage_fout);
#line 946
                if (c1 == 80) {
                  goto _L___1;
                } else {
#line 946
                  fprintf(_coverage_fout, "1194\n");
#line 946
                  fflush(_coverage_fout);
#line 946
                  if (c2 == 80) {
#line 946
                    fprintf(_coverage_fout, "1192\n");
#line 946
                    fflush(_coverage_fout);
                    _L___1: /* CIL Label */ 
                    _L___0: /* CIL Label */ 
#line 948
                    while (1) {
                      {
#line 948
                      fprintf(_coverage_fout, "1183\n");
#line 948
                      fflush(_coverage_fout);
#line 948
                      c = _IO_getc(infile);
                      }
#line 948
                      fprintf(_coverage_fout, "1190\n");
#line 948
                      fflush(_coverage_fout);
#line 948
                      if (c == -1) {
                        {
#line 948
                        fprintf(_coverage_fout, "1184\n");
#line 948
                        fflush(_coverage_fout);
#line 948
                        tmp___35 = eof();
                        }
                      } else {
#line 948
                        fprintf(_coverage_fout, "1189\n");
#line 948
                        fflush(_coverage_fout);
#line 948
                        if (c == ldelim) {
#line 948
                          fprintf(_coverage_fout, "1187\n");
#line 948
                          fflush(_coverage_fout);
#line 948
                          if ((unsigned int )filesp == (unsigned int )(files)) {
                            {
#line 948
                            fprintf(_coverage_fout, "1185\n");
#line 948
                            fflush(_coverage_fout);
#line 948
                            tmp___35 = skeqn();
                            }
                          } else {
#line 948
                            fprintf(_coverage_fout, "1186\n");
#line 948
                            fflush(_coverage_fout);
#line 948
                            tmp___35 = c;
                          }
                        } else {
#line 948
                          fprintf(_coverage_fout, "1188\n");
#line 948
                          fflush(_coverage_fout);
#line 948
                          tmp___35 = c;
                        }
                      }
#line 948
                      fprintf(_coverage_fout, "1191\n");
#line 948
                      fflush(_coverage_fout);
#line 948
                      if (! (tmp___35 != 10)) {
#line 948
                        break;
                      }
                    }
#line 946
                    fprintf(_coverage_fout, "1193\n");
#line 946
                    fflush(_coverage_fout);
#line 949
                    return;
                  }
                }
              }
            }
          } else {
#line 945
            fprintf(_coverage_fout, "1207\n");
#line 945
            fflush(_coverage_fout);
#line 952
            while (1) {
              {
#line 952
              fprintf(_coverage_fout, "1198\n");
#line 952
              fflush(_coverage_fout);
#line 952
              c = _IO_getc(infile);
              }
#line 952
              fprintf(_coverage_fout, "1205\n");
#line 952
              fflush(_coverage_fout);
#line 952
              if (c == -1) {
                {
#line 952
                fprintf(_coverage_fout, "1199\n");
#line 952
                fflush(_coverage_fout);
#line 952
                tmp___40 = eof();
                }
              } else {
#line 952
                fprintf(_coverage_fout, "1204\n");
#line 952
                fflush(_coverage_fout);
#line 952
                if (c == ldelim) {
#line 952
                  fprintf(_coverage_fout, "1202\n");
#line 952
                  fflush(_coverage_fout);
#line 952
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    {
#line 952
                    fprintf(_coverage_fout, "1200\n");
#line 952
                    fflush(_coverage_fout);
#line 952
                    tmp___40 = skeqn();
                    }
                  } else {
#line 952
                    fprintf(_coverage_fout, "1201\n");
#line 952
                    fflush(_coverage_fout);
#line 952
                    tmp___40 = c;
                  }
                } else {
#line 952
                  fprintf(_coverage_fout, "1203\n");
#line 952
                  fflush(_coverage_fout);
#line 952
                  tmp___40 = c;
                }
              }
#line 952
              fprintf(_coverage_fout, "1206\n");
#line 952
              fflush(_coverage_fout);
#line 952
              if (! (tmp___40 != 10)) {
#line 952
                break;
              }
            }
          }
        }
      }
    }
  }
}
}
#line 957 "deroff-original.c"
int EQ(void) 
{ 

  {
  {
#line 959
  fprintf(_coverage_fout, "1220\n");
#line 959
  fflush(_coverage_fout);
#line 959
  eqn();
  }
#line 957
  fprintf(_coverage_fout, "1221\n");
#line 957
  fflush(_coverage_fout);
#line 960
  return (0);
}
}
#line 962 "deroff-original.c"
int domacro(void) 
{ 

  {
  {
#line 964
  fprintf(_coverage_fout, "1222\n");
#line 964
  fflush(_coverage_fout);
#line 964
  macro();
  }
#line 962
  fprintf(_coverage_fout, "1223\n");
#line 962
  fflush(_coverage_fout);
#line 965
  return (0);
}
}
#line 967 "deroff-original.c"
int PS(void) 
{ 

  {
#line 967
  fprintf(_coverage_fout, "1226\n");
#line 967
  fflush(_coverage_fout);
#line 969
  if (! msflag) {
    {
#line 970
    fprintf(_coverage_fout, "1224\n");
#line 970
    fflush(_coverage_fout);
#line 970
    inpic();
    }
  } else {
    {
#line 972
    fprintf(_coverage_fout, "1225\n");
#line 972
    fflush(_coverage_fout);
#line 972
    noblock((char )'P', (char )'E');
    }
  }
#line 967
  fprintf(_coverage_fout, "1227\n");
#line 967
  fflush(_coverage_fout);
#line 974
  return (0);
}
}
#line 977 "deroff-original.c"
int skip(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
#line 977
  fprintf(_coverage_fout, "1237\n");
#line 977
  fflush(_coverage_fout);
#line 979
  while (1) {
    {
#line 979
    fprintf(_coverage_fout, "1228\n");
#line 979
    fflush(_coverage_fout);
#line 979
    c = _IO_getc(infile);
    }
#line 979
    fprintf(_coverage_fout, "1235\n");
#line 979
    fflush(_coverage_fout);
#line 979
    if (c == -1) {
      {
#line 979
      fprintf(_coverage_fout, "1229\n");
#line 979
      fflush(_coverage_fout);
#line 979
      tmp___2 = eof();
      }
    } else {
#line 979
      fprintf(_coverage_fout, "1234\n");
#line 979
      fflush(_coverage_fout);
#line 979
      if (c == ldelim) {
#line 979
        fprintf(_coverage_fout, "1232\n");
#line 979
        fflush(_coverage_fout);
#line 979
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 979
          fprintf(_coverage_fout, "1230\n");
#line 979
          fflush(_coverage_fout);
#line 979
          tmp___2 = skeqn();
          }
        } else {
#line 979
          fprintf(_coverage_fout, "1231\n");
#line 979
          fflush(_coverage_fout);
#line 979
          tmp___2 = c;
        }
      } else {
#line 979
        fprintf(_coverage_fout, "1233\n");
#line 979
        fflush(_coverage_fout);
#line 979
        tmp___2 = c;
      }
    }
#line 979
    fprintf(_coverage_fout, "1236\n");
#line 979
    fflush(_coverage_fout);
#line 979
    if (! (tmp___2 != 10)) {
#line 979
      break;
    }
  }
#line 977
  fprintf(_coverage_fout, "1238\n");
#line 977
  fflush(_coverage_fout);
#line 980
  return (0);
}
}
#line 983 "deroff-original.c"
int intbl(void) 
{ 

  {
#line 983
  fprintf(_coverage_fout, "1241\n");
#line 983
  fflush(_coverage_fout);
#line 985
  if (msflag) {
    {
#line 986
    fprintf(_coverage_fout, "1239\n");
#line 986
    fflush(_coverage_fout);
#line 986
    stbl();
    }
  } else {
    {
#line 988
    fprintf(_coverage_fout, "1240\n");
#line 988
    fflush(_coverage_fout);
#line 988
    tbl();
    }
  }
#line 983
  fprintf(_coverage_fout, "1242\n");
#line 983
  fflush(_coverage_fout);
#line 989
  return (0);
}
}
#line 992 "deroff-original.c"
int outtbl(void) 
{ 

  {
#line 992
  fprintf(_coverage_fout, "1243\n");
#line 992
  fflush(_coverage_fout);
#line 992
  intable = 0;
#line 992
  fprintf(_coverage_fout, "1244\n");
#line 992
  fflush(_coverage_fout);
#line 992
  return (0);
}
}
#line 994 "deroff-original.c"
int so(void) 
{ 

  {
  {
#line 996
  fprintf(_coverage_fout, "1245\n");
#line 996
  fflush(_coverage_fout);
#line 996
  getfname();
  }
#line 994
  fprintf(_coverage_fout, "1249\n");
#line 994
  fflush(_coverage_fout);
#line 997
  if (fname[0]) {
    {
#line 998
    fprintf(_coverage_fout, "1246\n");
#line 998
    fflush(_coverage_fout);
#line 998
    filesp ++;
#line 998
    fprintf(_coverage_fout, "1247\n");
#line 998
    fflush(_coverage_fout);
#line 998
    *filesp = opn(fname);
#line 998
    fprintf(_coverage_fout, "1248\n");
#line 998
    fflush(_coverage_fout);
#line 998
    infile = *filesp;
    }
  }
#line 994
  fprintf(_coverage_fout, "1250\n");
#line 994
  fflush(_coverage_fout);
#line 999
  return (0);
}
}
#line 1001 "deroff-original.c"
int nx(void) 
{ 

  {
  {
#line 1003
  fprintf(_coverage_fout, "1251\n");
#line 1003
  fflush(_coverage_fout);
#line 1003
  getfname();
  }
#line 1001
  fprintf(_coverage_fout, "1256\n");
#line 1001
  fflush(_coverage_fout);
#line 1004
  if ((int )fname[0] == 0) {
    {
#line 1004
    fprintf(_coverage_fout, "1252\n");
#line 1004
    fflush(_coverage_fout);
#line 1004
    exit(0);
    }
  }
#line 1001
  fprintf(_coverage_fout, "1257\n");
#line 1001
  fflush(_coverage_fout);
#line 1005
  if ((unsigned int )infile != (unsigned int )stdin) {
    {
#line 1006
    fprintf(_coverage_fout, "1253\n");
#line 1006
    fflush(_coverage_fout);
#line 1006
    fclose(infile);
    }
  }
  {
#line 1007
  fprintf(_coverage_fout, "1254\n");
#line 1007
  fflush(_coverage_fout);
#line 1007
  *filesp = opn(fname);
#line 1007
  fprintf(_coverage_fout, "1255\n");
#line 1007
  fflush(_coverage_fout);
#line 1007
  infile = *filesp;
  }
#line 1001
  fprintf(_coverage_fout, "1258\n");
#line 1001
  fflush(_coverage_fout);
#line 1008
  return (0);
}
}
#line 1010 "deroff-original.c"
int skiptocom(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;

  {
#line 1010
  fprintf(_coverage_fout, "1297\n");
#line 1010
  fflush(_coverage_fout);
#line 1010
  while (1) {
    {
#line 1010
    fprintf(_coverage_fout, "1259\n");
#line 1010
    fflush(_coverage_fout);
#line 1010
    c = _IO_getc(infile);
    }
#line 1010
    fprintf(_coverage_fout, "1266\n");
#line 1010
    fflush(_coverage_fout);
#line 1010
    if (c == -1) {
      {
#line 1010
      fprintf(_coverage_fout, "1260\n");
#line 1010
      fflush(_coverage_fout);
#line 1010
      tmp___2 = eof();
      }
    } else {
#line 1010
      fprintf(_coverage_fout, "1265\n");
#line 1010
      fflush(_coverage_fout);
#line 1010
      if (c == ldelim) {
#line 1010
        fprintf(_coverage_fout, "1263\n");
#line 1010
        fflush(_coverage_fout);
#line 1010
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 1010
          fprintf(_coverage_fout, "1261\n");
#line 1010
          fflush(_coverage_fout);
#line 1010
          tmp___2 = skeqn();
          }
        } else {
#line 1010
          fprintf(_coverage_fout, "1262\n");
#line 1010
          fflush(_coverage_fout);
#line 1010
          tmp___2 = c;
        }
      } else {
#line 1010
        fprintf(_coverage_fout, "1264\n");
#line 1010
        fflush(_coverage_fout);
#line 1010
        tmp___2 = c;
      }
    }
#line 1010
    fprintf(_coverage_fout, "1267\n");
#line 1010
    fflush(_coverage_fout);
#line 1010
    if (! (tmp___2 != 10)) {
#line 1010
      break;
    }
  }
#line 1010
  fprintf(_coverage_fout, "1298\n");
#line 1010
  fflush(_coverage_fout);
#line 1010
  while (1) {
    {
#line 1010
    fprintf(_coverage_fout, "1268\n");
#line 1010
    fflush(_coverage_fout);
#line 1010
    c = _IO_getc(infile);
    }
#line 1010
    fprintf(_coverage_fout, "1275\n");
#line 1010
    fflush(_coverage_fout);
#line 1010
    if (c == -1) {
      {
#line 1010
      fprintf(_coverage_fout, "1269\n");
#line 1010
      fflush(_coverage_fout);
#line 1010
      tmp___7 = eof();
      }
    } else {
#line 1010
      fprintf(_coverage_fout, "1274\n");
#line 1010
      fflush(_coverage_fout);
#line 1010
      if (c == ldelim) {
#line 1010
        fprintf(_coverage_fout, "1272\n");
#line 1010
        fflush(_coverage_fout);
#line 1010
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 1010
          fprintf(_coverage_fout, "1270\n");
#line 1010
          fflush(_coverage_fout);
#line 1010
          tmp___7 = skeqn();
          }
        } else {
#line 1010
          fprintf(_coverage_fout, "1271\n");
#line 1010
          fflush(_coverage_fout);
#line 1010
          tmp___7 = c;
        }
      } else {
#line 1010
        fprintf(_coverage_fout, "1273\n");
#line 1010
        fflush(_coverage_fout);
#line 1010
        tmp___7 = c;
      }
    }
#line 1010
    fprintf(_coverage_fout, "1276\n");
#line 1010
    fflush(_coverage_fout);
#line 1010
    if (! (tmp___7 != 10)) {
#line 1010
      break;
    }
  }
#line 1010
  fprintf(_coverage_fout, "1299\n");
#line 1010
  fflush(_coverage_fout);
#line 1010
  pc = c;
#line 1010
  fprintf(_coverage_fout, "1300\n");
#line 1010
  fflush(_coverage_fout);
#line 1010
  while (1) {
    {
#line 1010
    fprintf(_coverage_fout, "1277\n");
#line 1010
    fflush(_coverage_fout);
#line 1010
    c = _IO_getc(infile);
    }
#line 1010
    fprintf(_coverage_fout, "1294\n");
#line 1010
    fflush(_coverage_fout);
#line 1010
    if (c == -1) {
      {
#line 1010
      fprintf(_coverage_fout, "1278\n");
#line 1010
      fflush(_coverage_fout);
#line 1010
      tmp___12 = eof();
      }
    } else {
#line 1010
      fprintf(_coverage_fout, "1283\n");
#line 1010
      fflush(_coverage_fout);
#line 1010
      if (c == ldelim) {
#line 1010
        fprintf(_coverage_fout, "1281\n");
#line 1010
        fflush(_coverage_fout);
#line 1010
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 1010
          fprintf(_coverage_fout, "1279\n");
#line 1010
          fflush(_coverage_fout);
#line 1010
          tmp___12 = skeqn();
          }
        } else {
#line 1010
          fprintf(_coverage_fout, "1280\n");
#line 1010
          fflush(_coverage_fout);
#line 1010
          tmp___12 = c;
        }
      } else {
#line 1010
        fprintf(_coverage_fout, "1282\n");
#line 1010
        fflush(_coverage_fout);
#line 1010
        tmp___12 = c;
      }
    }
#line 1010
    fprintf(_coverage_fout, "1295\n");
#line 1010
    fflush(_coverage_fout);
#line 1010
    if (! (tmp___12 != 46)) {
#line 1010
      fprintf(_coverage_fout, "1293\n");
#line 1010
      fflush(_coverage_fout);
#line 1010
      if (! (pc != 10)) {
        {
#line 1010
        fprintf(_coverage_fout, "1284\n");
#line 1010
        fflush(_coverage_fout);
#line 1010
        c = _IO_getc(infile);
        }
#line 1010
        fprintf(_coverage_fout, "1291\n");
#line 1010
        fflush(_coverage_fout);
#line 1010
        if (c == -1) {
          {
#line 1010
          fprintf(_coverage_fout, "1285\n");
#line 1010
          fflush(_coverage_fout);
#line 1010
          tmp___17 = eof();
          }
        } else {
#line 1010
          fprintf(_coverage_fout, "1290\n");
#line 1010
          fflush(_coverage_fout);
#line 1010
          if (c == ldelim) {
#line 1010
            fprintf(_coverage_fout, "1288\n");
#line 1010
            fflush(_coverage_fout);
#line 1010
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 1010
              fprintf(_coverage_fout, "1286\n");
#line 1010
              fflush(_coverage_fout);
#line 1010
              tmp___17 = skeqn();
              }
            } else {
#line 1010
              fprintf(_coverage_fout, "1287\n");
#line 1010
              fflush(_coverage_fout);
#line 1010
              tmp___17 = c;
            }
          } else {
#line 1010
            fprintf(_coverage_fout, "1289\n");
#line 1010
            fflush(_coverage_fout);
#line 1010
            tmp___17 = c;
          }
        }
#line 1010
        fprintf(_coverage_fout, "1292\n");
#line 1010
        fflush(_coverage_fout);
#line 1010
        if (! (tmp___17 > 90)) {
#line 1010
          break;
        }
      }
    }
#line 1010
    fprintf(_coverage_fout, "1296\n");
#line 1010
    fflush(_coverage_fout);
#line 1010
    pc = c;
  }
#line 1010
  fprintf(_coverage_fout, "1301\n");
#line 1010
  fflush(_coverage_fout);
#line 1010
  return (1);
}
}
#line 1012 "deroff-original.c"
int PP(pacmac c12 ) 
{ int c1 ;
  int c2 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  {
#line 1017
  fprintf(_coverage_fout, "1302\n");
#line 1017
  fflush(_coverage_fout);
#line 1017
  c1 = (c12 >> 8) & 255;
#line 1017
  fprintf(_coverage_fout, "1303\n");
#line 1017
  fflush(_coverage_fout);
#line 1017
  c2 = c12 & 255;
#line 1017
  fprintf(_coverage_fout, "1304\n");
#line 1017
  fflush(_coverage_fout);
#line 1018
  printf((char const   */* __restrict  */)".%c%c", c1, c2);
  }
#line 1012
  fprintf(_coverage_fout, "1316\n");
#line 1012
  fflush(_coverage_fout);
#line 1019
  while (1) {
    {
#line 1019
    fprintf(_coverage_fout, "1305\n");
#line 1019
    fflush(_coverage_fout);
#line 1019
    c = _IO_getc(infile);
    }
#line 1019
    fprintf(_coverage_fout, "1313\n");
#line 1019
    fflush(_coverage_fout);
#line 1019
    if (c == -1) {
      {
#line 1019
      fprintf(_coverage_fout, "1306\n");
#line 1019
      fflush(_coverage_fout);
#line 1019
      tmp___2 = eof();
      }
    } else {
#line 1019
      fprintf(_coverage_fout, "1311\n");
#line 1019
      fflush(_coverage_fout);
#line 1019
      if (c == ldelim) {
#line 1019
        fprintf(_coverage_fout, "1309\n");
#line 1019
        fflush(_coverage_fout);
#line 1019
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 1019
          fprintf(_coverage_fout, "1307\n");
#line 1019
          fflush(_coverage_fout);
#line 1019
          tmp___2 = skeqn();
          }
        } else {
#line 1019
          fprintf(_coverage_fout, "1308\n");
#line 1019
          fflush(_coverage_fout);
#line 1019
          tmp___2 = c;
        }
      } else {
#line 1019
        fprintf(_coverage_fout, "1310\n");
#line 1019
        fflush(_coverage_fout);
#line 1019
        tmp___2 = c;
      }
    }
#line 1019
    fprintf(_coverage_fout, "1314\n");
#line 1019
    fflush(_coverage_fout);
#line 1019
    if (! (tmp___2 != 10)) {
#line 1019
      break;
    }
    {
#line 1019
    fprintf(_coverage_fout, "1312\n");
#line 1019
    fflush(_coverage_fout);
#line 1019
    putchar(c);
    }
  }
  {
#line 1020
  fprintf(_coverage_fout, "1315\n");
#line 1020
  fflush(_coverage_fout);
#line 1020
  putchar('\n');
  }
#line 1012
  fprintf(_coverage_fout, "1317\n");
#line 1012
  fflush(_coverage_fout);
#line 1021
  return (0);
}
}
#line 1023 "deroff-original.c"
int AU(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;

  {
#line 1023
  fprintf(_coverage_fout, "1362\n");
#line 1023
  fflush(_coverage_fout);
#line 1025
  if (mac == 1) {
#line 1025
    fprintf(_coverage_fout, "1318\n");
#line 1025
    fflush(_coverage_fout);
#line 1026
    return (0);
  } else {
#line 1025
    fprintf(_coverage_fout, "1357\n");
#line 1025
    fflush(_coverage_fout);
#line 1028
    while (1) {
      {
#line 1028
      fprintf(_coverage_fout, "1319\n");
#line 1028
      fflush(_coverage_fout);
#line 1028
      c = _IO_getc(infile);
      }
#line 1028
      fprintf(_coverage_fout, "1326\n");
#line 1028
      fflush(_coverage_fout);
#line 1028
      if (c == -1) {
        {
#line 1028
        fprintf(_coverage_fout, "1320\n");
#line 1028
        fflush(_coverage_fout);
#line 1028
        tmp___2 = eof();
        }
      } else {
#line 1028
        fprintf(_coverage_fout, "1325\n");
#line 1028
        fflush(_coverage_fout);
#line 1028
        if (c == ldelim) {
#line 1028
          fprintf(_coverage_fout, "1323\n");
#line 1028
          fflush(_coverage_fout);
#line 1028
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 1028
            fprintf(_coverage_fout, "1321\n");
#line 1028
            fflush(_coverage_fout);
#line 1028
            tmp___2 = skeqn();
            }
          } else {
#line 1028
            fprintf(_coverage_fout, "1322\n");
#line 1028
            fflush(_coverage_fout);
#line 1028
            tmp___2 = c;
          }
        } else {
#line 1028
          fprintf(_coverage_fout, "1324\n");
#line 1028
          fflush(_coverage_fout);
#line 1028
          tmp___2 = c;
        }
      }
#line 1028
      fprintf(_coverage_fout, "1327\n");
#line 1028
      fflush(_coverage_fout);
#line 1028
      if (! (tmp___2 != 10)) {
#line 1028
        break;
      }
    }
#line 1025
    fprintf(_coverage_fout, "1358\n");
#line 1025
    fflush(_coverage_fout);
#line 1028
    while (1) {
      {
#line 1028
      fprintf(_coverage_fout, "1328\n");
#line 1028
      fflush(_coverage_fout);
#line 1028
      c = _IO_getc(infile);
      }
#line 1028
      fprintf(_coverage_fout, "1335\n");
#line 1028
      fflush(_coverage_fout);
#line 1028
      if (c == -1) {
        {
#line 1028
        fprintf(_coverage_fout, "1329\n");
#line 1028
        fflush(_coverage_fout);
#line 1028
        tmp___7 = eof();
        }
      } else {
#line 1028
        fprintf(_coverage_fout, "1334\n");
#line 1028
        fflush(_coverage_fout);
#line 1028
        if (c == ldelim) {
#line 1028
          fprintf(_coverage_fout, "1332\n");
#line 1028
          fflush(_coverage_fout);
#line 1028
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 1028
            fprintf(_coverage_fout, "1330\n");
#line 1028
            fflush(_coverage_fout);
#line 1028
            tmp___7 = skeqn();
            }
          } else {
#line 1028
            fprintf(_coverage_fout, "1331\n");
#line 1028
            fflush(_coverage_fout);
#line 1028
            tmp___7 = c;
          }
        } else {
#line 1028
          fprintf(_coverage_fout, "1333\n");
#line 1028
          fflush(_coverage_fout);
#line 1028
          tmp___7 = c;
        }
      }
#line 1028
      fprintf(_coverage_fout, "1336\n");
#line 1028
      fflush(_coverage_fout);
#line 1028
      if (! (tmp___7 != 10)) {
#line 1028
        break;
      }
    }
#line 1025
    fprintf(_coverage_fout, "1359\n");
#line 1025
    fflush(_coverage_fout);
#line 1028
    pc = c;
#line 1025
    fprintf(_coverage_fout, "1360\n");
#line 1025
    fflush(_coverage_fout);
#line 1028
    while (1) {
      {
#line 1028
      fprintf(_coverage_fout, "1337\n");
#line 1028
      fflush(_coverage_fout);
#line 1028
      c = _IO_getc(infile);
      }
#line 1028
      fprintf(_coverage_fout, "1354\n");
#line 1028
      fflush(_coverage_fout);
#line 1028
      if (c == -1) {
        {
#line 1028
        fprintf(_coverage_fout, "1338\n");
#line 1028
        fflush(_coverage_fout);
#line 1028
        tmp___12 = eof();
        }
      } else {
#line 1028
        fprintf(_coverage_fout, "1343\n");
#line 1028
        fflush(_coverage_fout);
#line 1028
        if (c == ldelim) {
#line 1028
          fprintf(_coverage_fout, "1341\n");
#line 1028
          fflush(_coverage_fout);
#line 1028
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 1028
            fprintf(_coverage_fout, "1339\n");
#line 1028
            fflush(_coverage_fout);
#line 1028
            tmp___12 = skeqn();
            }
          } else {
#line 1028
            fprintf(_coverage_fout, "1340\n");
#line 1028
            fflush(_coverage_fout);
#line 1028
            tmp___12 = c;
          }
        } else {
#line 1028
          fprintf(_coverage_fout, "1342\n");
#line 1028
          fflush(_coverage_fout);
#line 1028
          tmp___12 = c;
        }
      }
#line 1028
      fprintf(_coverage_fout, "1355\n");
#line 1028
      fflush(_coverage_fout);
#line 1028
      if (! (tmp___12 != 46)) {
#line 1028
        fprintf(_coverage_fout, "1353\n");
#line 1028
        fflush(_coverage_fout);
#line 1028
        if (! (pc != 10)) {
          {
#line 1028
          fprintf(_coverage_fout, "1344\n");
#line 1028
          fflush(_coverage_fout);
#line 1028
          c = _IO_getc(infile);
          }
#line 1028
          fprintf(_coverage_fout, "1351\n");
#line 1028
          fflush(_coverage_fout);
#line 1028
          if (c == -1) {
            {
#line 1028
            fprintf(_coverage_fout, "1345\n");
#line 1028
            fflush(_coverage_fout);
#line 1028
            tmp___17 = eof();
            }
          } else {
#line 1028
            fprintf(_coverage_fout, "1350\n");
#line 1028
            fflush(_coverage_fout);
#line 1028
            if (c == ldelim) {
#line 1028
              fprintf(_coverage_fout, "1348\n");
#line 1028
              fflush(_coverage_fout);
#line 1028
              if ((unsigned int )filesp == (unsigned int )(files)) {
                {
#line 1028
                fprintf(_coverage_fout, "1346\n");
#line 1028
                fflush(_coverage_fout);
#line 1028
                tmp___17 = skeqn();
                }
              } else {
#line 1028
                fprintf(_coverage_fout, "1347\n");
#line 1028
                fflush(_coverage_fout);
#line 1028
                tmp___17 = c;
              }
            } else {
#line 1028
              fprintf(_coverage_fout, "1349\n");
#line 1028
              fflush(_coverage_fout);
#line 1028
              tmp___17 = c;
            }
          }
#line 1028
          fprintf(_coverage_fout, "1352\n");
#line 1028
          fflush(_coverage_fout);
#line 1028
          if (! (tmp___17 > 90)) {
#line 1028
            break;
          }
        }
      }
#line 1028
      fprintf(_coverage_fout, "1356\n");
#line 1028
      fflush(_coverage_fout);
#line 1028
      pc = c;
    }
#line 1025
    fprintf(_coverage_fout, "1361\n");
#line 1025
    fflush(_coverage_fout);
#line 1029
    return (1);
  }
}
}
#line 1033 "deroff-original.c"
int SH(pacmac c12 ) 
{ int c1 ;
  int c2 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;

  {
#line 1033
  fprintf(_coverage_fout, "1445\n");
#line 1033
  fflush(_coverage_fout);
#line 1038
  c1 = (c12 >> 8) & 255;
#line 1038
  c2 = c12 & 255;
#line 1033
  fprintf(_coverage_fout, "1446\n");
#line 1033
  fflush(_coverage_fout);
#line 1040
  if (parag) {
    {
#line 1041
    fprintf(_coverage_fout, "1363\n");
#line 1041
    fflush(_coverage_fout);
#line 1041
    printf((char const   */* __restrict  */)".%c%c", c1, c2);
    }
#line 1040
    fprintf(_coverage_fout, "1400\n");
#line 1040
    fflush(_coverage_fout);
#line 1042
    while (1) {
      {
#line 1042
      fprintf(_coverage_fout, "1364\n");
#line 1042
      fflush(_coverage_fout);
#line 1042
      c = _IO_getc(infile);
      }
#line 1042
      fprintf(_coverage_fout, "1372\n");
#line 1042
      fflush(_coverage_fout);
#line 1042
      if (c == -1) {
        {
#line 1042
        fprintf(_coverage_fout, "1365\n");
#line 1042
        fflush(_coverage_fout);
#line 1042
        tmp___2 = eof();
        }
      } else {
#line 1042
        fprintf(_coverage_fout, "1370\n");
#line 1042
        fflush(_coverage_fout);
#line 1042
        if (c == ldelim) {
#line 1042
          fprintf(_coverage_fout, "1368\n");
#line 1042
          fflush(_coverage_fout);
#line 1042
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 1042
            fprintf(_coverage_fout, "1366\n");
#line 1042
            fflush(_coverage_fout);
#line 1042
            tmp___2 = skeqn();
            }
          } else {
#line 1042
            fprintf(_coverage_fout, "1367\n");
#line 1042
            fflush(_coverage_fout);
#line 1042
            tmp___2 = c;
          }
        } else {
#line 1042
          fprintf(_coverage_fout, "1369\n");
#line 1042
          fflush(_coverage_fout);
#line 1042
          tmp___2 = c;
        }
      }
#line 1042
      fprintf(_coverage_fout, "1373\n");
#line 1042
      fflush(_coverage_fout);
#line 1042
      if (! (tmp___2 != 10)) {
#line 1042
        break;
      }
      {
#line 1042
      fprintf(_coverage_fout, "1371\n");
#line 1042
      fflush(_coverage_fout);
#line 1042
      putchar(c);
      }
    }
    {
#line 1043
    fprintf(_coverage_fout, "1374\n");
#line 1043
    fflush(_coverage_fout);
#line 1043
    putchar(c);
#line 1043
    fprintf(_coverage_fout, "1375\n");
#line 1043
    fflush(_coverage_fout);
#line 1044
    putchar('!');
    }
#line 1040
    fprintf(_coverage_fout, "1401\n");
#line 1040
    fflush(_coverage_fout);
#line 1045
    while (1) {
#line 1045
      fprintf(_coverage_fout, "1397\n");
#line 1045
      fflush(_coverage_fout);
#line 1046
      while (1) {
        {
#line 1046
        fprintf(_coverage_fout, "1376\n");
#line 1046
        fflush(_coverage_fout);
#line 1046
        c = _IO_getc(infile);
        }
#line 1046
        fprintf(_coverage_fout, "1384\n");
#line 1046
        fflush(_coverage_fout);
#line 1046
        if (c == -1) {
          {
#line 1046
          fprintf(_coverage_fout, "1377\n");
#line 1046
          fflush(_coverage_fout);
#line 1046
          tmp___7 = eof();
          }
        } else {
#line 1046
          fprintf(_coverage_fout, "1382\n");
#line 1046
          fflush(_coverage_fout);
#line 1046
          if (c == ldelim) {
#line 1046
            fprintf(_coverage_fout, "1380\n");
#line 1046
            fflush(_coverage_fout);
#line 1046
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 1046
              fprintf(_coverage_fout, "1378\n");
#line 1046
              fflush(_coverage_fout);
#line 1046
              tmp___7 = skeqn();
              }
            } else {
#line 1046
              fprintf(_coverage_fout, "1379\n");
#line 1046
              fflush(_coverage_fout);
#line 1046
              tmp___7 = c;
            }
          } else {
#line 1046
            fprintf(_coverage_fout, "1381\n");
#line 1046
            fflush(_coverage_fout);
#line 1046
            tmp___7 = c;
          }
        }
#line 1046
        fprintf(_coverage_fout, "1385\n");
#line 1046
        fflush(_coverage_fout);
#line 1046
        if (! (tmp___7 != 10)) {
#line 1046
          break;
        }
        {
#line 1046
        fprintf(_coverage_fout, "1383\n");
#line 1046
        fflush(_coverage_fout);
#line 1046
        putchar(c);
        }
      }
      {
#line 1047
      fprintf(_coverage_fout, "1386\n");
#line 1047
      fflush(_coverage_fout);
#line 1047
      putchar('\n');
#line 1047
      fprintf(_coverage_fout, "1387\n");
#line 1047
      fflush(_coverage_fout);
#line 1048
      c = _IO_getc(infile);
      }
#line 1045
      fprintf(_coverage_fout, "1398\n");
#line 1045
      fflush(_coverage_fout);
#line 1048
      if (c == -1) {
        {
#line 1048
        fprintf(_coverage_fout, "1388\n");
#line 1048
        fflush(_coverage_fout);
#line 1048
        tmp___12 = eof();
        }
      } else {
#line 1048
        fprintf(_coverage_fout, "1393\n");
#line 1048
        fflush(_coverage_fout);
#line 1048
        if (c == ldelim) {
#line 1048
          fprintf(_coverage_fout, "1391\n");
#line 1048
          fflush(_coverage_fout);
#line 1048
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 1048
            fprintf(_coverage_fout, "1389\n");
#line 1048
            fflush(_coverage_fout);
#line 1048
            tmp___12 = skeqn();
            }
          } else {
#line 1048
            fprintf(_coverage_fout, "1390\n");
#line 1048
            fflush(_coverage_fout);
#line 1048
            tmp___12 = c;
          }
        } else {
#line 1048
          fprintf(_coverage_fout, "1392\n");
#line 1048
          fflush(_coverage_fout);
#line 1048
          tmp___12 = c;
        }
      }
#line 1045
      fprintf(_coverage_fout, "1399\n");
#line 1045
      fflush(_coverage_fout);
#line 1048
      if (tmp___12 == 46) {
#line 1048
        fprintf(_coverage_fout, "1394\n");
#line 1048
        fflush(_coverage_fout);
#line 1049
        return (2);
      }
      {
#line 1050
      fprintf(_coverage_fout, "1395\n");
#line 1050
      fflush(_coverage_fout);
#line 1050
      putchar('!');
#line 1050
      fprintf(_coverage_fout, "1396\n");
#line 1050
      fflush(_coverage_fout);
#line 1051
      putchar(c);
      }
    }
  } else {
#line 1040
    fprintf(_coverage_fout, "1440\n");
#line 1040
    fflush(_coverage_fout);
#line 1055
    while (1) {
      {
#line 1055
      fprintf(_coverage_fout, "1402\n");
#line 1055
      fflush(_coverage_fout);
#line 1055
      c = _IO_getc(infile);
      }
#line 1055
      fprintf(_coverage_fout, "1409\n");
#line 1055
      fflush(_coverage_fout);
#line 1055
      if (c == -1) {
        {
#line 1055
        fprintf(_coverage_fout, "1403\n");
#line 1055
        fflush(_coverage_fout);
#line 1055
        tmp___17 = eof();
        }
      } else {
#line 1055
        fprintf(_coverage_fout, "1408\n");
#line 1055
        fflush(_coverage_fout);
#line 1055
        if (c == ldelim) {
#line 1055
          fprintf(_coverage_fout, "1406\n");
#line 1055
          fflush(_coverage_fout);
#line 1055
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 1055
            fprintf(_coverage_fout, "1404\n");
#line 1055
            fflush(_coverage_fout);
#line 1055
            tmp___17 = skeqn();
            }
          } else {
#line 1055
            fprintf(_coverage_fout, "1405\n");
#line 1055
            fflush(_coverage_fout);
#line 1055
            tmp___17 = c;
          }
        } else {
#line 1055
          fprintf(_coverage_fout, "1407\n");
#line 1055
          fflush(_coverage_fout);
#line 1055
          tmp___17 = c;
        }
      }
#line 1055
      fprintf(_coverage_fout, "1410\n");
#line 1055
      fflush(_coverage_fout);
#line 1055
      if (! (tmp___17 != 10)) {
#line 1055
        break;
      }
    }
#line 1040
    fprintf(_coverage_fout, "1441\n");
#line 1040
    fflush(_coverage_fout);
#line 1055
    while (1) {
      {
#line 1055
      fprintf(_coverage_fout, "1411\n");
#line 1055
      fflush(_coverage_fout);
#line 1055
      c = _IO_getc(infile);
      }
#line 1055
      fprintf(_coverage_fout, "1418\n");
#line 1055
      fflush(_coverage_fout);
#line 1055
      if (c == -1) {
        {
#line 1055
        fprintf(_coverage_fout, "1412\n");
#line 1055
        fflush(_coverage_fout);
#line 1055
        tmp___22 = eof();
        }
      } else {
#line 1055
        fprintf(_coverage_fout, "1417\n");
#line 1055
        fflush(_coverage_fout);
#line 1055
        if (c == ldelim) {
#line 1055
          fprintf(_coverage_fout, "1415\n");
#line 1055
          fflush(_coverage_fout);
#line 1055
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 1055
            fprintf(_coverage_fout, "1413\n");
#line 1055
            fflush(_coverage_fout);
#line 1055
            tmp___22 = skeqn();
            }
          } else {
#line 1055
            fprintf(_coverage_fout, "1414\n");
#line 1055
            fflush(_coverage_fout);
#line 1055
            tmp___22 = c;
          }
        } else {
#line 1055
          fprintf(_coverage_fout, "1416\n");
#line 1055
          fflush(_coverage_fout);
#line 1055
          tmp___22 = c;
        }
      }
#line 1055
      fprintf(_coverage_fout, "1419\n");
#line 1055
      fflush(_coverage_fout);
#line 1055
      if (! (tmp___22 != 10)) {
#line 1055
        break;
      }
    }
#line 1040
    fprintf(_coverage_fout, "1442\n");
#line 1040
    fflush(_coverage_fout);
#line 1055
    pc = c;
#line 1040
    fprintf(_coverage_fout, "1443\n");
#line 1040
    fflush(_coverage_fout);
#line 1055
    while (1) {
      {
#line 1055
      fprintf(_coverage_fout, "1420\n");
#line 1055
      fflush(_coverage_fout);
#line 1055
      c = _IO_getc(infile);
      }
#line 1055
      fprintf(_coverage_fout, "1437\n");
#line 1055
      fflush(_coverage_fout);
#line 1055
      if (c == -1) {
        {
#line 1055
        fprintf(_coverage_fout, "1421\n");
#line 1055
        fflush(_coverage_fout);
#line 1055
        tmp___27 = eof();
        }
      } else {
#line 1055
        fprintf(_coverage_fout, "1426\n");
#line 1055
        fflush(_coverage_fout);
#line 1055
        if (c == ldelim) {
#line 1055
          fprintf(_coverage_fout, "1424\n");
#line 1055
          fflush(_coverage_fout);
#line 1055
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 1055
            fprintf(_coverage_fout, "1422\n");
#line 1055
            fflush(_coverage_fout);
#line 1055
            tmp___27 = skeqn();
            }
          } else {
#line 1055
            fprintf(_coverage_fout, "1423\n");
#line 1055
            fflush(_coverage_fout);
#line 1055
            tmp___27 = c;
          }
        } else {
#line 1055
          fprintf(_coverage_fout, "1425\n");
#line 1055
          fflush(_coverage_fout);
#line 1055
          tmp___27 = c;
        }
      }
#line 1055
      fprintf(_coverage_fout, "1438\n");
#line 1055
      fflush(_coverage_fout);
#line 1055
      if (! (tmp___27 != 46)) {
#line 1055
        fprintf(_coverage_fout, "1436\n");
#line 1055
        fflush(_coverage_fout);
#line 1055
        if (! (pc != 10)) {
          {
#line 1055
          fprintf(_coverage_fout, "1427\n");
#line 1055
          fflush(_coverage_fout);
#line 1055
          c = _IO_getc(infile);
          }
#line 1055
          fprintf(_coverage_fout, "1434\n");
#line 1055
          fflush(_coverage_fout);
#line 1055
          if (c == -1) {
            {
#line 1055
            fprintf(_coverage_fout, "1428\n");
#line 1055
            fflush(_coverage_fout);
#line 1055
            tmp___32 = eof();
            }
          } else {
#line 1055
            fprintf(_coverage_fout, "1433\n");
#line 1055
            fflush(_coverage_fout);
#line 1055
            if (c == ldelim) {
#line 1055
              fprintf(_coverage_fout, "1431\n");
#line 1055
              fflush(_coverage_fout);
#line 1055
              if ((unsigned int )filesp == (unsigned int )(files)) {
                {
#line 1055
                fprintf(_coverage_fout, "1429\n");
#line 1055
                fflush(_coverage_fout);
#line 1055
                tmp___32 = skeqn();
                }
              } else {
#line 1055
                fprintf(_coverage_fout, "1430\n");
#line 1055
                fflush(_coverage_fout);
#line 1055
                tmp___32 = c;
              }
            } else {
#line 1055
              fprintf(_coverage_fout, "1432\n");
#line 1055
              fflush(_coverage_fout);
#line 1055
              tmp___32 = c;
            }
          }
#line 1055
          fprintf(_coverage_fout, "1435\n");
#line 1055
          fflush(_coverage_fout);
#line 1055
          if (! (tmp___32 > 90)) {
#line 1055
            break;
          }
        }
      }
#line 1055
      fprintf(_coverage_fout, "1439\n");
#line 1055
      fflush(_coverage_fout);
#line 1055
      pc = c;
    }
#line 1040
    fprintf(_coverage_fout, "1444\n");
#line 1040
    fflush(_coverage_fout);
#line 1056
    return (1);
  }
}
}
#line 1060 "deroff-original.c"
int UX(void) 
{ 

  {
#line 1060
  fprintf(_coverage_fout, "1449\n");
#line 1060
  fflush(_coverage_fout);
#line 1062
  if (wordflag) {
    {
#line 1063
    fprintf(_coverage_fout, "1447\n");
#line 1063
    fflush(_coverage_fout);
#line 1063
    printf((char const   */* __restrict  */)"UNIX\n");
    }
  } else {
    {
#line 1065
    fprintf(_coverage_fout, "1448\n");
#line 1065
    fflush(_coverage_fout);
#line 1065
    printf((char const   */* __restrict  */)"UNIX ");
    }
  }
#line 1060
  fprintf(_coverage_fout, "1450\n");
#line 1060
  fflush(_coverage_fout);
#line 1066
  return (0);
}
}
#line 1069 "deroff-original.c"
int MMHU(pacmac c12 ) 
{ int c1 ;
  int c2 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;

  {
#line 1069
  fprintf(_coverage_fout, "1474\n");
#line 1069
  fflush(_coverage_fout);
#line 1074
  c1 = (c12 >> 8) & 255;
#line 1074
  c2 = c12 & 255;
#line 1069
  fprintf(_coverage_fout, "1475\n");
#line 1069
  fflush(_coverage_fout);
#line 1075
  if (parag) {
    {
#line 1076
    fprintf(_coverage_fout, "1451\n");
#line 1076
    fflush(_coverage_fout);
#line 1076
    printf((char const   */* __restrict  */)".%c%c", c1, c2);
    }
#line 1075
    fprintf(_coverage_fout, "1463\n");
#line 1075
    fflush(_coverage_fout);
#line 1077
    while (1) {
      {
#line 1077
      fprintf(_coverage_fout, "1452\n");
#line 1077
      fflush(_coverage_fout);
#line 1077
      c = _IO_getc(infile);
      }
#line 1077
      fprintf(_coverage_fout, "1460\n");
#line 1077
      fflush(_coverage_fout);
#line 1077
      if (c == -1) {
        {
#line 1077
        fprintf(_coverage_fout, "1453\n");
#line 1077
        fflush(_coverage_fout);
#line 1077
        tmp___2 = eof();
        }
      } else {
#line 1077
        fprintf(_coverage_fout, "1458\n");
#line 1077
        fflush(_coverage_fout);
#line 1077
        if (c == ldelim) {
#line 1077
          fprintf(_coverage_fout, "1456\n");
#line 1077
          fflush(_coverage_fout);
#line 1077
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 1077
            fprintf(_coverage_fout, "1454\n");
#line 1077
            fflush(_coverage_fout);
#line 1077
            tmp___2 = skeqn();
            }
          } else {
#line 1077
            fprintf(_coverage_fout, "1455\n");
#line 1077
            fflush(_coverage_fout);
#line 1077
            tmp___2 = c;
          }
        } else {
#line 1077
          fprintf(_coverage_fout, "1457\n");
#line 1077
          fflush(_coverage_fout);
#line 1077
          tmp___2 = c;
        }
      }
#line 1077
      fprintf(_coverage_fout, "1461\n");
#line 1077
      fflush(_coverage_fout);
#line 1077
      if (! (tmp___2 != 10)) {
#line 1077
        break;
      }
      {
#line 1077
      fprintf(_coverage_fout, "1459\n");
#line 1077
      fflush(_coverage_fout);
#line 1077
      putchar(c);
      }
    }
    {
#line 1078
    fprintf(_coverage_fout, "1462\n");
#line 1078
    fflush(_coverage_fout);
#line 1078
    putchar('\n');
    }
  } else {
#line 1075
    fprintf(_coverage_fout, "1473\n");
#line 1075
    fflush(_coverage_fout);
#line 1080
    while (1) {
      {
#line 1080
      fprintf(_coverage_fout, "1464\n");
#line 1080
      fflush(_coverage_fout);
#line 1080
      c = _IO_getc(infile);
      }
#line 1080
      fprintf(_coverage_fout, "1471\n");
#line 1080
      fflush(_coverage_fout);
#line 1080
      if (c == -1) {
        {
#line 1080
        fprintf(_coverage_fout, "1465\n");
#line 1080
        fflush(_coverage_fout);
#line 1080
        tmp___7 = eof();
        }
      } else {
#line 1080
        fprintf(_coverage_fout, "1470\n");
#line 1080
        fflush(_coverage_fout);
#line 1080
        if (c == ldelim) {
#line 1080
          fprintf(_coverage_fout, "1468\n");
#line 1080
          fflush(_coverage_fout);
#line 1080
          if ((unsigned int )filesp == (unsigned int )(files)) {
            {
#line 1080
            fprintf(_coverage_fout, "1466\n");
#line 1080
            fflush(_coverage_fout);
#line 1080
            tmp___7 = skeqn();
            }
          } else {
#line 1080
            fprintf(_coverage_fout, "1467\n");
#line 1080
            fflush(_coverage_fout);
#line 1080
            tmp___7 = c;
          }
        } else {
#line 1080
          fprintf(_coverage_fout, "1469\n");
#line 1080
          fflush(_coverage_fout);
#line 1080
          tmp___7 = c;
        }
      }
#line 1080
      fprintf(_coverage_fout, "1472\n");
#line 1080
      fflush(_coverage_fout);
#line 1080
      if (! (tmp___7 != 10)) {
#line 1080
        break;
      }
    }
  }
#line 1069
  fprintf(_coverage_fout, "1476\n");
#line 1069
  fflush(_coverage_fout);
#line 1082
  return (0);
}
}
#line 1085 "deroff-original.c"
int mesnblock(pacmac c12 ) 
{ int c1 ;
  int c2 ;

  {
  {
#line 1090
  fprintf(_coverage_fout, "1477\n");
#line 1090
  fflush(_coverage_fout);
#line 1090
  c1 = (c12 >> 8) & 255;
#line 1090
  fprintf(_coverage_fout, "1478\n");
#line 1090
  fflush(_coverage_fout);
#line 1090
  c2 = c12 & 255;
#line 1090
  fprintf(_coverage_fout, "1479\n");
#line 1090
  fflush(_coverage_fout);
#line 1091
  noblock((char )')', (char )c2);
  }
#line 1085
  fprintf(_coverage_fout, "1480\n");
#line 1085
  fflush(_coverage_fout);
#line 1092
  return (0);
}
}
#line 1094 "deroff-original.c"
int mssnblock(pacmac c12 ) 
{ int c1 ;
  int c2 ;

  {
  {
#line 1099
  fprintf(_coverage_fout, "1481\n");
#line 1099
  fflush(_coverage_fout);
#line 1099
  c1 = (c12 >> 8) & 255;
#line 1099
  fprintf(_coverage_fout, "1482\n");
#line 1099
  fflush(_coverage_fout);
#line 1099
  c2 = c12 & 255;
#line 1099
  fprintf(_coverage_fout, "1483\n");
#line 1099
  fflush(_coverage_fout);
#line 1100
  noblock((char )c1, (char )'E');
  }
#line 1094
  fprintf(_coverage_fout, "1484\n");
#line 1094
  fflush(_coverage_fout);
#line 1101
  return (0);
}
}
#line 1103 "deroff-original.c"
int nf(void) 
{ 

  {
  {
#line 1105
  fprintf(_coverage_fout, "1485\n");
#line 1105
  fflush(_coverage_fout);
#line 1105
  noblock((char )'f', (char )'i');
  }
#line 1103
  fprintf(_coverage_fout, "1486\n");
#line 1103
  fflush(_coverage_fout);
#line 1106
  return (0);
}
}
#line 1109 "deroff-original.c"
int ce(void) 
{ 

  {
  {
#line 1111
  fprintf(_coverage_fout, "1487\n");
#line 1111
  fflush(_coverage_fout);
#line 1111
  sce();
  }
#line 1109
  fprintf(_coverage_fout, "1488\n");
#line 1109
  fflush(_coverage_fout);
#line 1112
  return (0);
}
}
#line 1119
int mepp(pacmac c12 ) ;
#line 1115 "deroff-original.c"
int meip(pacmac c12 ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
#line 1115
  fprintf(_coverage_fout, "1502\n");
#line 1115
  fflush(_coverage_fout);
#line 1118
  if (parag) {
    {
#line 1119
    fprintf(_coverage_fout, "1489\n");
#line 1119
    fflush(_coverage_fout);
#line 1119
    mepp(c12);
    }
  } else {
#line 1118
    fprintf(_coverage_fout, "1501\n");
#line 1118
    fflush(_coverage_fout);
#line 1120
    if (wordflag) {
      {
#line 1121
      fprintf(_coverage_fout, "1490\n");
#line 1121
      fflush(_coverage_fout);
#line 1121
      regline((int (*)())(& meputmac), 1);
      }
    } else {
#line 1120
      fprintf(_coverage_fout, "1500\n");
#line 1120
      fflush(_coverage_fout);
#line 1123
      while (1) {
        {
#line 1123
        fprintf(_coverage_fout, "1491\n");
#line 1123
        fflush(_coverage_fout);
#line 1123
        c = _IO_getc(infile);
        }
#line 1123
        fprintf(_coverage_fout, "1498\n");
#line 1123
        fflush(_coverage_fout);
#line 1123
        if (c == -1) {
          {
#line 1123
          fprintf(_coverage_fout, "1492\n");
#line 1123
          fflush(_coverage_fout);
#line 1123
          tmp___2 = eof();
          }
        } else {
#line 1123
          fprintf(_coverage_fout, "1497\n");
#line 1123
          fflush(_coverage_fout);
#line 1123
          if (c == ldelim) {
#line 1123
            fprintf(_coverage_fout, "1495\n");
#line 1123
            fflush(_coverage_fout);
#line 1123
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 1123
              fprintf(_coverage_fout, "1493\n");
#line 1123
              fflush(_coverage_fout);
#line 1123
              tmp___2 = skeqn();
              }
            } else {
#line 1123
              fprintf(_coverage_fout, "1494\n");
#line 1123
              fflush(_coverage_fout);
#line 1123
              tmp___2 = c;
            }
          } else {
#line 1123
            fprintf(_coverage_fout, "1496\n");
#line 1123
            fflush(_coverage_fout);
#line 1123
            tmp___2 = c;
          }
        }
#line 1123
        fprintf(_coverage_fout, "1499\n");
#line 1123
        fflush(_coverage_fout);
#line 1123
        if (! (tmp___2 != 10)) {
#line 1123
          break;
        }
      }
    }
  }
#line 1115
  fprintf(_coverage_fout, "1503\n");
#line 1115
  fflush(_coverage_fout);
#line 1125
  return (0);
}
}
#line 1130 "deroff-original.c"
int mepp(pacmac c12 ) 
{ 

  {
  {
#line 1133
  fprintf(_coverage_fout, "1504\n");
#line 1133
  fflush(_coverage_fout);
#line 1133
  PP(c12);
  }
#line 1130
  fprintf(_coverage_fout, "1505\n");
#line 1130
  fflush(_coverage_fout);
#line 1134
  return (0);
}
}
#line 1145
int defcomline(pacmac c12 ) ;
#line 1139 "deroff-original.c"
int mesh(pacmac c12 ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
#line 1139
  fprintf(_coverage_fout, "1519\n");
#line 1139
  fflush(_coverage_fout);
#line 1142
  if (parag) {
    {
#line 1143
    fprintf(_coverage_fout, "1506\n");
#line 1143
    fflush(_coverage_fout);
#line 1143
    mepp(c12);
    }
  } else {
#line 1142
    fprintf(_coverage_fout, "1518\n");
#line 1142
    fflush(_coverage_fout);
#line 1144
    if (wordflag) {
      {
#line 1145
      fprintf(_coverage_fout, "1507\n");
#line 1145
      fflush(_coverage_fout);
#line 1145
      defcomline(c12);
      }
    } else {
#line 1144
      fprintf(_coverage_fout, "1517\n");
#line 1144
      fflush(_coverage_fout);
#line 1147
      while (1) {
        {
#line 1147
        fprintf(_coverage_fout, "1508\n");
#line 1147
        fflush(_coverage_fout);
#line 1147
        c = _IO_getc(infile);
        }
#line 1147
        fprintf(_coverage_fout, "1515\n");
#line 1147
        fflush(_coverage_fout);
#line 1147
        if (c == -1) {
          {
#line 1147
          fprintf(_coverage_fout, "1509\n");
#line 1147
          fflush(_coverage_fout);
#line 1147
          tmp___2 = eof();
          }
        } else {
#line 1147
          fprintf(_coverage_fout, "1514\n");
#line 1147
          fflush(_coverage_fout);
#line 1147
          if (c == ldelim) {
#line 1147
            fprintf(_coverage_fout, "1512\n");
#line 1147
            fflush(_coverage_fout);
#line 1147
            if ((unsigned int )filesp == (unsigned int )(files)) {
              {
#line 1147
              fprintf(_coverage_fout, "1510\n");
#line 1147
              fflush(_coverage_fout);
#line 1147
              tmp___2 = skeqn();
              }
            } else {
#line 1147
              fprintf(_coverage_fout, "1511\n");
#line 1147
              fflush(_coverage_fout);
#line 1147
              tmp___2 = c;
            }
          } else {
#line 1147
            fprintf(_coverage_fout, "1513\n");
#line 1147
            fflush(_coverage_fout);
#line 1147
            tmp___2 = c;
          }
        }
#line 1147
        fprintf(_coverage_fout, "1516\n");
#line 1147
        fflush(_coverage_fout);
#line 1147
        if (! (tmp___2 != 10)) {
#line 1147
          break;
        }
      }
    }
  }
#line 1139
  fprintf(_coverage_fout, "1520\n");
#line 1139
  fflush(_coverage_fout);
#line 1149
  return (0);
}
}
#line 1154 "deroff-original.c"
int mefont(pacmac c12 ) 
{ 

  {
  {
#line 1157
  fprintf(_coverage_fout, "1521\n");
#line 1157
  fflush(_coverage_fout);
#line 1157
  argconcat = 1;
#line 1157
  fprintf(_coverage_fout, "1522\n");
#line 1157
  fflush(_coverage_fout);
#line 1158
  defcomline(c12);
#line 1157
  fprintf(_coverage_fout, "1523\n");
#line 1157
  fflush(_coverage_fout);
#line 1159
  argconcat = 0;
  }
#line 1154
  fprintf(_coverage_fout, "1524\n");
#line 1154
  fflush(_coverage_fout);
#line 1160
  return (0);
}
}
#line 1162 "deroff-original.c"
int manfont(pacmac c12 ) 
{ int tmp ;

  {
  {
#line 1165
  fprintf(_coverage_fout, "1525\n");
#line 1165
  fflush(_coverage_fout);
#line 1165
  tmp = mefont(c12);
  }
#line 1162
  fprintf(_coverage_fout, "1526\n");
#line 1162
  fflush(_coverage_fout);
#line 1165
  return (tmp);
}
}
#line 1167 "deroff-original.c"
int manpp(pacmac c12 ) 
{ int tmp ;

  {
  {
#line 1170
  fprintf(_coverage_fout, "1527\n");
#line 1170
  fflush(_coverage_fout);
#line 1170
  tmp = mepp(c12);
  }
#line 1167
  fprintf(_coverage_fout, "1528\n");
#line 1167
  fflush(_coverage_fout);
#line 1170
  return (tmp);
}
}
#line 1173 "deroff-original.c"
int defcomline(pacmac c12 ) 
{ int c1 ;
  int c2 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;

  {
#line 1173
  fprintf(_coverage_fout, "1577\n");
#line 1173
  fflush(_coverage_fout);
#line 1178
  c1 = (c12 >> 8) & 255;
#line 1178
  c2 = c12 & 255;
#line 1173
  fprintf(_coverage_fout, "1578\n");
#line 1173
  fflush(_coverage_fout);
#line 1179
  if (msflag) {
#line 1179
    fprintf(_coverage_fout, "1545\n");
#line 1179
    fflush(_coverage_fout);
#line 1179
    if (mac == 1) {
#line 1179
      fprintf(_coverage_fout, "1544\n");
#line 1179
      fflush(_coverage_fout);
#line 1179
      if (c2 == 76) {
#line 1179
        fprintf(_coverage_fout, "1543\n");
#line 1179
        fflush(_coverage_fout);
#line 1180
        if (disp) {
          {
#line 1181
          fprintf(_coverage_fout, "1529\n");
#line 1181
          fflush(_coverage_fout);
#line 1181
          noblock((char )'L', (char )'E');
          }
        } else {
#line 1180
          fprintf(_coverage_fout, "1542\n");
#line 1180
          fflush(_coverage_fout);
#line 1180
          if (c1 == 82) {
            {
#line 1181
            fprintf(_coverage_fout, "1530\n");
#line 1181
            fflush(_coverage_fout);
#line 1181
            noblock((char )'L', (char )'E');
            }
          } else {
#line 1180
            fprintf(_coverage_fout, "1541\n");
#line 1180
            fflush(_coverage_fout);
#line 1183
            while (1) {
              {
#line 1183
              fprintf(_coverage_fout, "1531\n");
#line 1183
              fflush(_coverage_fout);
#line 1183
              c = _IO_getc(infile);
              }
#line 1183
              fprintf(_coverage_fout, "1538\n");
#line 1183
              fflush(_coverage_fout);
#line 1183
              if (c == -1) {
                {
#line 1183
                fprintf(_coverage_fout, "1532\n");
#line 1183
                fflush(_coverage_fout);
#line 1183
                tmp___2 = eof();
                }
              } else {
#line 1183
                fprintf(_coverage_fout, "1537\n");
#line 1183
                fflush(_coverage_fout);
#line 1183
                if (c == ldelim) {
#line 1183
                  fprintf(_coverage_fout, "1535\n");
#line 1183
                  fflush(_coverage_fout);
#line 1183
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    {
#line 1183
                    fprintf(_coverage_fout, "1533\n");
#line 1183
                    fflush(_coverage_fout);
#line 1183
                    tmp___2 = skeqn();
                    }
                  } else {
#line 1183
                    fprintf(_coverage_fout, "1534\n");
#line 1183
                    fflush(_coverage_fout);
#line 1183
                    tmp___2 = c;
                  }
                } else {
#line 1183
                  fprintf(_coverage_fout, "1536\n");
#line 1183
                  fflush(_coverage_fout);
#line 1183
                  tmp___2 = c;
                }
              }
#line 1183
              fprintf(_coverage_fout, "1539\n");
#line 1183
              fflush(_coverage_fout);
#line 1183
              if (! (tmp___2 != 10)) {
#line 1183
                break;
              }
            }
            {
#line 1184
            fprintf(_coverage_fout, "1540\n");
#line 1184
            fflush(_coverage_fout);
#line 1184
            putchar('.');
            }
          }
        }
      } else {
        goto _L___0;
      }
    } else {
      goto _L___0;
    }
  } else {
#line 1179
    fprintf(_coverage_fout, "1569\n");
#line 1179
    fflush(_coverage_fout);
    _L___0: /* CIL Label */ 
    _L: /* CIL Label */ 
#line 1187
    if (c1 == 46) {
#line 1187
      fprintf(_coverage_fout, "1568\n");
#line 1187
      fflush(_coverage_fout);
#line 1187
      if (c2 == 46) {
#line 1187
        fprintf(_coverage_fout, "1566\n");
#line 1187
        fflush(_coverage_fout);
#line 1188
        if (msflag) {
#line 1188
          fprintf(_coverage_fout, "1555\n");
#line 1188
          fflush(_coverage_fout);
#line 1189
          while (1) {
            {
#line 1189
            fprintf(_coverage_fout, "1546\n");
#line 1189
            fflush(_coverage_fout);
#line 1189
            c = _IO_getc(infile);
            }
#line 1189
            fprintf(_coverage_fout, "1553\n");
#line 1189
            fflush(_coverage_fout);
#line 1189
            if (c == -1) {
              {
#line 1189
              fprintf(_coverage_fout, "1547\n");
#line 1189
              fflush(_coverage_fout);
#line 1189
              tmp___7 = eof();
              }
            } else {
#line 1189
              fprintf(_coverage_fout, "1552\n");
#line 1189
              fflush(_coverage_fout);
#line 1189
              if (c == ldelim) {
#line 1189
                fprintf(_coverage_fout, "1550\n");
#line 1189
                fflush(_coverage_fout);
#line 1189
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  {
#line 1189
                  fprintf(_coverage_fout, "1548\n");
#line 1189
                  fflush(_coverage_fout);
#line 1189
                  tmp___7 = skeqn();
                  }
                } else {
#line 1189
                  fprintf(_coverage_fout, "1549\n");
#line 1189
                  fflush(_coverage_fout);
#line 1189
                  tmp___7 = c;
                }
              } else {
#line 1189
                fprintf(_coverage_fout, "1551\n");
#line 1189
                fflush(_coverage_fout);
#line 1189
                tmp___7 = c;
              }
            }
#line 1189
            fprintf(_coverage_fout, "1554\n");
#line 1189
            fflush(_coverage_fout);
#line 1189
            if (! (tmp___7 != 10)) {
#line 1189
              break;
            }
          }
#line 1188
          fprintf(_coverage_fout, "1556\n");
#line 1188
          fflush(_coverage_fout);
#line 1190
          return;
        }
#line 1187
        fprintf(_coverage_fout, "1567\n");
#line 1187
        fflush(_coverage_fout);
#line 1192
        while (1) {
          {
#line 1192
          fprintf(_coverage_fout, "1557\n");
#line 1192
          fflush(_coverage_fout);
#line 1192
          c = _IO_getc(infile);
          }
#line 1192
          fprintf(_coverage_fout, "1564\n");
#line 1192
          fflush(_coverage_fout);
#line 1192
          if (c == -1) {
            {
#line 1192
            fprintf(_coverage_fout, "1558\n");
#line 1192
            fflush(_coverage_fout);
#line 1192
            tmp___12 = eof();
            }
          } else {
#line 1192
            fprintf(_coverage_fout, "1563\n");
#line 1192
            fflush(_coverage_fout);
#line 1192
            if (c == ldelim) {
#line 1192
              fprintf(_coverage_fout, "1561\n");
#line 1192
              fflush(_coverage_fout);
#line 1192
              if ((unsigned int )filesp == (unsigned int )(files)) {
                {
#line 1192
                fprintf(_coverage_fout, "1559\n");
#line 1192
                fflush(_coverage_fout);
#line 1192
                tmp___12 = skeqn();
                }
              } else {
#line 1192
                fprintf(_coverage_fout, "1560\n");
#line 1192
                fflush(_coverage_fout);
#line 1192
                tmp___12 = c;
              }
            } else {
#line 1192
              fprintf(_coverage_fout, "1562\n");
#line 1192
              fflush(_coverage_fout);
#line 1192
              tmp___12 = c;
            }
          }
#line 1192
          fprintf(_coverage_fout, "1565\n");
#line 1192
          fflush(_coverage_fout);
#line 1192
          if (! (tmp___12 == 46)) {
#line 1192
            break;
          }
        }
      }
    }
  }
#line 1173
  fprintf(_coverage_fout, "1579\n");
#line 1173
  fflush(_coverage_fout);
#line 1195
  inmacro ++;
#line 1199
  switch (mac) {
#line 1199
  fprintf(_coverage_fout, "1575\n");
#line 1199
  fflush(_coverage_fout);
  default: ;
#line 1199
  fprintf(_coverage_fout, "1576\n");
#line 1199
  fflush(_coverage_fout);
  case 1: 
  case 0: 
#line 1203
  if (c1 <= 90) {
#line 1203
    fprintf(_coverage_fout, "1572\n");
#line 1203
    fflush(_coverage_fout);
#line 1203
    if (msflag) {
      {
#line 1204
      fprintf(_coverage_fout, "1570\n");
#line 1204
      fflush(_coverage_fout);
#line 1204
      regline((int (*)())(& msputmac), 1);
      }
    } else {
      {
#line 1206
      fprintf(_coverage_fout, "1571\n");
#line 1206
      fflush(_coverage_fout);
#line 1206
      regline((int (*)())(& msputmac), 2);
      }
    }
  } else {
    {
#line 1206
    fprintf(_coverage_fout, "1573\n");
#line 1206
    fflush(_coverage_fout);
#line 1206
    regline((int (*)())(& msputmac), 2);
    }
  }
#line 1207
  break;
  case 2: 
  {
#line 1209
  fprintf(_coverage_fout, "1574\n");
#line 1209
  fflush(_coverage_fout);
#line 1209
  regline((int (*)())(& meputmac), 1);
  }
#line 1210
  break;
  }
#line 1173
  fprintf(_coverage_fout, "1580\n");
#line 1173
  fflush(_coverage_fout);
#line 1212
  inmacro --;
#line 1173
  fprintf(_coverage_fout, "1581\n");
#line 1173
  fflush(_coverage_fout);
#line 1213
  return (0);
}
}
#line 1223
int comline(void) ;
#line 1223 "deroff-original.c"
static int tabsize  =    0;
#line 1224
int comline(void) ;
#line 1224 "deroff-original.c"
static struct mactab *mactab  =    (struct mactab *)0;
#line 1228
int buildtab(struct mactab **r_back , int *r_size ) ;
#line 1215 "deroff-original.c"
int comline(void) 
{ register int c1 ;
  register int c2 ;
  pacmac c12 ;
  register int mid ;
  int lb ;
  int ub ;
  int hit ;
  register struct mactab *mp ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;

  {
#line 1215
  fprintf(_coverage_fout, "1635\n");
#line 1215
  fflush(_coverage_fout);
#line 1227
  if ((unsigned int )mactab == (unsigned int )((struct mactab *)0)) {
    {
#line 1228
    fprintf(_coverage_fout, "1582\n");
#line 1228
    fflush(_coverage_fout);
#line 1228
    buildtab(& mactab, & tabsize);
    }
  }
#line 1215
  fprintf(_coverage_fout, "1636\n");
#line 1215
  fflush(_coverage_fout);
  com: 
#line 1231
  while (1) {
    {
#line 1231
    fprintf(_coverage_fout, "1583\n");
#line 1231
    fflush(_coverage_fout);
#line 1231
    c = _IO_getc(infile);
    }
#line 1231
    fprintf(_coverage_fout, "1591\n");
#line 1231
    fflush(_coverage_fout);
#line 1231
    if (c == -1) {
      {
#line 1231
      fprintf(_coverage_fout, "1584\n");
#line 1231
      fflush(_coverage_fout);
#line 1231
      tmp___2 = eof();
      }
    } else {
#line 1231
      fprintf(_coverage_fout, "1589\n");
#line 1231
      fflush(_coverage_fout);
#line 1231
      if (c == ldelim) {
#line 1231
        fprintf(_coverage_fout, "1587\n");
#line 1231
        fflush(_coverage_fout);
#line 1231
        if ((unsigned int )filesp == (unsigned int )(files)) {
          {
#line 1231
          fprintf(_coverage_fout, "1585\n");
#line 1231
          fflush(_coverage_fout);
#line 1231
          tmp___2 = skeqn();
          }
        } else {
#line 1231
          fprintf(_coverage_fout, "1586\n");
#line 1231
          fflush(_coverage_fout);
#line 1231
          tmp___2 = c;
        }
      } else {
#line 1231
        fprintf(_coverage_fout, "1588\n");
#line 1231
        fflush(_coverage_fout);
#line 1231
        tmp___2 = c;
      }
    }
#line 1231
    fprintf(_coverage_fout, "1592\n");
#line 1231
    fflush(_coverage_fout);
#line 1231
    if (! (tmp___2 == 32)) {
#line 1231
      fprintf(_coverage_fout, "1590\n");
#line 1231
      fflush(_coverage_fout);
#line 1231
      if (! (c == 9)) {
#line 1231
        break;
      }
    }
  }
#line 1215
  fprintf(_coverage_fout, "1637\n");
#line 1215
  fflush(_coverage_fout);
  comx: 
#line 1234
  c1 = c;
#line 1215
  fprintf(_coverage_fout, "1638\n");
#line 1215
  fflush(_coverage_fout);
#line 1234
  if (c1 == 10) {
#line 1234
    fprintf(_coverage_fout, "1593\n");
#line 1234
    fflush(_coverage_fout);
#line 1235
    return;
  }
  {
#line 1236
  fprintf(_coverage_fout, "1594\n");
#line 1236
  fflush(_coverage_fout);
#line 1236
  c = _IO_getc(infile);
  }
#line 1215
  fprintf(_coverage_fout, "1639\n");
#line 1215
  fflush(_coverage_fout);
#line 1236
  if (c == -1) {
    {
#line 1236
    fprintf(_coverage_fout, "1595\n");
#line 1236
    fflush(_coverage_fout);
#line 1236
    c2 = eof();
    }
  } else {
#line 1236
    fprintf(_coverage_fout, "1600\n");
#line 1236
    fflush(_coverage_fout);
#line 1236
    if (c == ldelim) {
#line 1236
      fprintf(_coverage_fout, "1598\n");
#line 1236
      fflush(_coverage_fout);
#line 1236
      if ((unsigned int )filesp == (unsigned int )(files)) {
        {
#line 1236
        fprintf(_coverage_fout, "1596\n");
#line 1236
        fflush(_coverage_fout);
#line 1236
        c2 = skeqn();
        }
      } else {
#line 1236
        fprintf(_coverage_fout, "1597\n");
#line 1236
        fflush(_coverage_fout);
#line 1236
        c2 = c;
      }
    } else {
#line 1236
      fprintf(_coverage_fout, "1599\n");
#line 1236
      fflush(_coverage_fout);
#line 1236
      c2 = c;
    }
  }
#line 1215
  fprintf(_coverage_fout, "1640\n");
#line 1215
  fflush(_coverage_fout);
#line 1237
  if (c1 == 46) {
#line 1237
    fprintf(_coverage_fout, "1602\n");
#line 1237
    fflush(_coverage_fout);
#line 1237
    if (c2 != 46) {
#line 1237
      fprintf(_coverage_fout, "1601\n");
#line 1237
      fflush(_coverage_fout);
#line 1238
      inmacro = 0;
    }
  }
#line 1215
  fprintf(_coverage_fout, "1641\n");
#line 1215
  fflush(_coverage_fout);
#line 1239
  if (msflag) {
#line 1239
    fprintf(_coverage_fout, "1605\n");
#line 1239
    fflush(_coverage_fout);
#line 1239
    if (c1 == 91) {
      {
#line 1240
      fprintf(_coverage_fout, "1603\n");
#line 1240
      fflush(_coverage_fout);
#line 1240
      refer(c2);
      }
#line 1239
      fprintf(_coverage_fout, "1604\n");
#line 1239
      fflush(_coverage_fout);
#line 1241
      return;
    }
  }
#line 1215
  fprintf(_coverage_fout, "1642\n");
#line 1215
  fflush(_coverage_fout);
#line 1243
  if (parag) {
#line 1243
    fprintf(_coverage_fout, "1610\n");
#line 1243
    fflush(_coverage_fout);
#line 1243
    if (mac == 1) {
#line 1243
      fprintf(_coverage_fout, "1609\n");
#line 1243
      fflush(_coverage_fout);
#line 1243
      if (c1 == 80) {
#line 1243
        fprintf(_coverage_fout, "1608\n");
#line 1243
        fflush(_coverage_fout);
#line 1243
        if (c2 == 10) {
          {
#line 1244
          fprintf(_coverage_fout, "1606\n");
#line 1244
          fflush(_coverage_fout);
#line 1244
          printf((char const   */* __restrict  */)".P\n");
          }
#line 1243
          fprintf(_coverage_fout, "1607\n");
#line 1243
          fflush(_coverage_fout);
#line 1245
          return;
        }
      }
    }
  }
#line 1215
  fprintf(_coverage_fout, "1643\n");
#line 1215
  fflush(_coverage_fout);
#line 1247
  if (c2 == 10) {
#line 1247
    fprintf(_coverage_fout, "1611\n");
#line 1247
    fflush(_coverage_fout);
#line 1248
    return;
  }
#line 1215
  fprintf(_coverage_fout, "1644\n");
#line 1215
  fflush(_coverage_fout);
#line 1252
  if (mac == 2) {
#line 1252
    fprintf(_coverage_fout, "1615\n");
#line 1252
    fflush(_coverage_fout);
#line 1252
    if (c2 == 32) {
#line 1252
      fprintf(_coverage_fout, "1612\n");
#line 1252
      fflush(_coverage_fout);
#line 1253
      c2 = ' ';
    } else {
#line 1252
      fprintf(_coverage_fout, "1614\n");
#line 1252
      fflush(_coverage_fout);
#line 1252
      if (c2 == 9) {
#line 1252
        fprintf(_coverage_fout, "1613\n");
#line 1252
        fflush(_coverage_fout);
#line 1253
        c2 = ' ';
      }
    }
  }
#line 1215
  fprintf(_coverage_fout, "1645\n");
#line 1215
  fflush(_coverage_fout);
#line 1254
  c12 = ((c1 & 255) << 8) | (c2 & 255);
#line 1258
  lb = 0;
#line 1259
  ub = tabsize - 1;
#line 1215
  fprintf(_coverage_fout, "1646\n");
#line 1215
  fflush(_coverage_fout);
#line 1260
  while (1) {
#line 1260
    fprintf(_coverage_fout, "1631\n");
#line 1260
    fflush(_coverage_fout);
#line 1260
    if (! (lb <= ub)) {
#line 1260
      break;
    }
#line 1260
    fprintf(_coverage_fout, "1632\n");
#line 1260
    fflush(_coverage_fout);
#line 1261
    mid = (ub + lb) / 2;
#line 1262
    mp = mactab + mid;
#line 1260
    fprintf(_coverage_fout, "1633\n");
#line 1260
    fflush(_coverage_fout);
#line 1263
    if (mp->macname < c12) {
#line 1263
      fprintf(_coverage_fout, "1616\n");
#line 1263
      fflush(_coverage_fout);
#line 1264
      lb = mid + 1;
    } else {
#line 1263
      fprintf(_coverage_fout, "1630\n");
#line 1263
      fflush(_coverage_fout);
#line 1265
      if (mp->macname > c12) {
#line 1265
        fprintf(_coverage_fout, "1617\n");
#line 1265
        fflush(_coverage_fout);
#line 1266
        ub = mid - 1;
      } else {
#line 1265
        fprintf(_coverage_fout, "1628\n");
#line 1265
        fflush(_coverage_fout);
#line 1268
        hit = 1;
#line 1272
        switch (mp->condition) {
#line 1272
        fprintf(_coverage_fout, "1618\n");
#line 1272
        fflush(_coverage_fout);
        case 0: 
#line 1273
        hit = 1;
#line 1273
        break;
#line 1272
        fprintf(_coverage_fout, "1619\n");
#line 1272
        fflush(_coverage_fout);
        case 1: 
#line 1274
        hit = (unsigned int )filesp == (unsigned int )(files);
#line 1274
        break;
#line 1272
        fprintf(_coverage_fout, "1620\n");
#line 1272
        fflush(_coverage_fout);
        case 2: 
#line 1275
        hit = ! inmacro;
#line 1275
        break;
#line 1272
        fprintf(_coverage_fout, "1621\n");
#line 1272
        fflush(_coverage_fout);
        case 3: 
#line 1276
        hit = inmacro;
#line 1276
        break;
#line 1272
        fprintf(_coverage_fout, "1622\n");
#line 1272
        fflush(_coverage_fout);
        case 4: 
#line 1277
        hit = parag;
#line 1277
        break;
#line 1272
        fprintf(_coverage_fout, "1623\n");
#line 1272
        fflush(_coverage_fout);
        case 6: 
#line 1278
        hit = ! keepblock;
#line 1278
        break;
#line 1272
        fprintf(_coverage_fout, "1624\n");
#line 1272
        fflush(_coverage_fout);
        default: 
#line 1279
        hit = 0;
        }
#line 1265
        fprintf(_coverage_fout, "1629\n");
#line 1265
        fflush(_coverage_fout);
#line 1281
        if (hit) {
          {
#line 1285
          fprintf(_coverage_fout, "1625\n");
#line 1285
          fflush(_coverage_fout);
#line 1285
          tmp___8 = (*(mp->func))(c12);
          }
#line 1285
          switch (tmp___8) {
#line 1285
          fprintf(_coverage_fout, "1626\n");
#line 1285
          fflush(_coverage_fout);
          default: ;
#line 1285
          fprintf(_coverage_fout, "1627\n");
#line 1285
          fflush(_coverage_fout);
#line 1286
          return;
          case 1: 
          goto comx;
          case 2: 
          goto com;
          }
        }
#line 1294
        break;
      }
    }
  }
  {
#line 1297
  fprintf(_coverage_fout, "1634\n");
#line 1297
  fflush(_coverage_fout);
#line 1297
  defcomline(c12);
  }
#line 1215
  fprintf(_coverage_fout, "1647\n");
#line 1215
  fflush(_coverage_fout);
#line 1298
  return (0);
}
}
#line 1300 "deroff-original.c"
int macsort(struct mactab *p1 , struct mactab *p2 ) 
{ 

  {
#line 1300
  fprintf(_coverage_fout, "1648\n");
#line 1300
  fflush(_coverage_fout);
#line 1303
  return (p1->macname - p2->macname);
}
}
#line 1306 "deroff-original.c"
int sizetab(struct mactab *mp ) 
{ register int i ;

  {
#line 1306
  fprintf(_coverage_fout, "1652\n");
#line 1306
  fflush(_coverage_fout);
#line 1310
  i = 0;
#line 1306
  fprintf(_coverage_fout, "1653\n");
#line 1306
  fflush(_coverage_fout);
#line 1311
  if (mp) {
#line 1311
    fprintf(_coverage_fout, "1651\n");
#line 1311
    fflush(_coverage_fout);
#line 1312
    while (1) {
#line 1312
      fprintf(_coverage_fout, "1649\n");
#line 1312
      fflush(_coverage_fout);
#line 1312
      if (! mp->macname) {
#line 1312
        break;
      }
#line 1312
      fprintf(_coverage_fout, "1650\n");
#line 1312
      fflush(_coverage_fout);
#line 1312
      mp ++;
#line 1312
      i ++;
    }
  }
#line 1306
  fprintf(_coverage_fout, "1654\n");
#line 1306
  fflush(_coverage_fout);
#line 1315
  return (i);
}
}
#line 1318 "deroff-original.c"
struct mactab *macfill(struct mactab *dst , struct mactab *src ) 
{ struct mactab *tmp ;
  struct mactab *tmp___0 ;

  {
#line 1318
  fprintf(_coverage_fout, "1658\n");
#line 1318
  fflush(_coverage_fout);
#line 1322
  if (src) {
#line 1322
    fprintf(_coverage_fout, "1657\n");
#line 1322
    fflush(_coverage_fout);
#line 1323
    while (1) {
#line 1323
      fprintf(_coverage_fout, "1655\n");
#line 1323
      fflush(_coverage_fout);
#line 1323
      if (! src->macname) {
#line 1323
        break;
      }
#line 1323
      fprintf(_coverage_fout, "1656\n");
#line 1323
      fflush(_coverage_fout);
#line 1324
      tmp = dst;
#line 1324
      dst ++;
#line 1324
      tmp___0 = src;
#line 1324
      src ++;
#line 1324
      *tmp = *tmp___0;
    }
  }
#line 1318
  fprintf(_coverage_fout, "1659\n");
#line 1318
  fflush(_coverage_fout);
#line 1327
  return (dst);
}
}
#line 1362
extern int ( /* missing proto */  qsort)() ;
#line 1330 "deroff-original.c"
int buildtab(struct mactab **r_back , int *r_size ) 
{ int size ;
  struct mactab *p ;
  struct mactab *p1 ;
  struct mactab *p2 ;
  struct mactab *back ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;

  {
  {
#line 1339
  fprintf(_coverage_fout, "1660\n");
#line 1339
  fflush(_coverage_fout);
#line 1339
  size = sizetab(troffmactab);
#line 1339
  fprintf(_coverage_fout, "1661\n");
#line 1339
  fflush(_coverage_fout);
#line 1340
  tmp = sizetab(ppmactab);
#line 1339
  fprintf(_coverage_fout, "1662\n");
#line 1339
  fflush(_coverage_fout);
#line 1340
  size += tmp;
#line 1339
  fprintf(_coverage_fout, "1663\n");
#line 1339
  fflush(_coverage_fout);
#line 1341
  p2 = (struct mactab *)0;
#line 1339
  fprintf(_coverage_fout, "1664\n");
#line 1339
  fflush(_coverage_fout);
#line 1341
  p1 = p2;
  }
#line 1330
  fprintf(_coverage_fout, "1683\n");
#line 1330
  fflush(_coverage_fout);
#line 1342
  if (msflag) {
#line 1343
    switch (mac) {
#line 1343
    fprintf(_coverage_fout, "1665\n");
#line 1343
    fflush(_coverage_fout);
    case 2: 
#line 1344
    p1 = memactab;
#line 1344
    break;
#line 1343
    fprintf(_coverage_fout, "1666\n");
#line 1343
    fflush(_coverage_fout);
    case 1: 
#line 1345
    p1 = msmactab;
#line 1346
    p2 = mmmactab;
#line 1346
    break;
#line 1343
    fprintf(_coverage_fout, "1667\n");
#line 1343
    fflush(_coverage_fout);
    case 0: 
#line 1348
    p1 = msmactab;
#line 1348
    break;
#line 1343
    fprintf(_coverage_fout, "1668\n");
#line 1343
    fflush(_coverage_fout);
    case 3: 
#line 1349
    p1 = manmactab;
#line 1349
    break;
#line 1343
    fprintf(_coverage_fout, "1669\n");
#line 1343
    fflush(_coverage_fout);
    default: ;
#line 1350
    break;
    }
  }
  {
#line 1353
  fprintf(_coverage_fout, "1670\n");
#line 1353
  fflush(_coverage_fout);
#line 1353
  tmp___0 = sizetab(p1);
#line 1353
  fprintf(_coverage_fout, "1671\n");
#line 1353
  fflush(_coverage_fout);
#line 1353
  size += tmp___0;
#line 1353
  fprintf(_coverage_fout, "1672\n");
#line 1353
  fflush(_coverage_fout);
#line 1354
  tmp___1 = sizetab(p2);
#line 1353
  fprintf(_coverage_fout, "1673\n");
#line 1353
  fflush(_coverage_fout);
#line 1354
  size += tmp___1;
#line 1353
  fprintf(_coverage_fout, "1674\n");
#line 1353
  fflush(_coverage_fout);
#line 1355
  tmp___2 = calloc(size + 2, sizeof(struct mactab ));
#line 1353
  fprintf(_coverage_fout, "1675\n");
#line 1353
  fflush(_coverage_fout);
#line 1355
  back = (struct mactab *)tmp___2;
#line 1353
  fprintf(_coverage_fout, "1676\n");
#line 1353
  fflush(_coverage_fout);
#line 1357
  p = macfill(back, troffmactab);
#line 1353
  fprintf(_coverage_fout, "1677\n");
#line 1353
  fflush(_coverage_fout);
#line 1358
  p = macfill(p, ppmactab);
#line 1353
  fprintf(_coverage_fout, "1678\n");
#line 1353
  fflush(_coverage_fout);
#line 1359
  p = macfill(p, p1);
#line 1353
  fprintf(_coverage_fout, "1679\n");
#line 1353
  fflush(_coverage_fout);
#line 1360
  p = macfill(p, p2);
#line 1353
  fprintf(_coverage_fout, "1680\n");
#line 1353
  fflush(_coverage_fout);
#line 1362
  qsort(back, size, sizeof(struct mactab ), & macsort);
#line 1353
  fprintf(_coverage_fout, "1681\n");
#line 1353
  fflush(_coverage_fout);
#line 1363
  *r_size = size;
#line 1353
  fprintf(_coverage_fout, "1682\n");
#line 1353
  fflush(_coverage_fout);
#line 1364
  *r_back = back;
  }
#line 1330
  fprintf(_coverage_fout, "1684\n");
#line 1330
  fflush(_coverage_fout);
#line 1365
  return (0);
}
}
#line 1370 "deroff-original.c"
struct mactab troffmactab[11]  = 
#line 1370
  {      {0, (92 << 8) | 34, & skip}, 
        {2, (100 << 8) | 101, & domacro}, 
        {2, (105 << 8) | 103, & domacro}, 
        {2, (97 << 8) | 109, & domacro}, 
        {6, (110 << 8) | 102, & nf}, 
        {6, (99 << 8) | 101, & ce}, 
        {0, (115 << 8) | 111, & so}, 
        {0, (110 << 8) | 120, & nx}, 
        {0, (116 << 8) | 109, & skip}, 
        {0, (104 << 8) | 119, & skip}, 
        {0, 0, (int (*)())0}};
#line 1388 "deroff-original.c"
struct mactab ppmactab[7]  = {      {1, (69 << 8) | 81, & EQ}, 
        {1, (84 << 8) | 83, & intbl}, 
        {1, (84 << 8) | 67, & intbl}, 
        {1, (84 << 8) | 38, & intbl}, 
        {0, (84 << 8) | 69, & outtbl}, 
        {0, (80 << 8) | 83, & PS}, 
        {0, 0, (int (*)())0}};
#line 1400 "deroff-original.c"
struct mactab msmactab[17]  = 
#line 1400
  {      {0, (84 << 8) | 76, & skiptocom}, 
        {0, (70 << 8) | 83, & skiptocom}, 
        {0, (79 << 8) | 75, & skiptocom}, 
        {0, (78 << 8) | 82, & skip}, 
        {0, (78 << 8) | 68, & skip}, 
        {4, (80 << 8) | 80, (int (*)())(& PP)}, 
        {4, (73 << 8) | 80, (int (*)())(& PP)}, 
        {4, (76 << 8) | 80, (int (*)())(& PP)}, 
        {0, (65 << 8) | 85, & AU}, 
        {0, (65 << 8) | 73, & AU}, 
        {0, (83 << 8) | 72, (int (*)())(& SH)}, 
        {0, (83 << 8) | 78, (int (*)())(& SH)}, 
        {0, (85 << 8) | 88, & UX}, 
        {6, (68 << 8) | 83, (int (*)())(& mssnblock)}, 
        {6, (75 << 8) | 83, (int (*)())(& mssnblock)}, 
        {6, (75 << 8) | 70, (int (*)())(& mssnblock)}, 
        {0, 0, (int (*)())0}};
#line 1425 "deroff-original.c"
struct mactab mmmactab[5]  = {      {0, (72 << 8) | 32, (int (*)())(& MMHU)}, 
        {0, (72 << 8) | 85, (int (*)())(& MMHU)}, 
        {4, (80 << 8) | 32, (int (*)())(& PP)}, 
        {6, (78 << 8) | 83, (int (*)())(& mssnblock)}, 
        {0, 0, (int (*)())0}};
#line 1433 "deroff-original.c"
struct mactab memactab[23]  = 
#line 1433
  {      {4, (112 << 8) | 112, (int (*)())(& mepp)}, 
        {4, (108 << 8) | 112, (int (*)())(& mepp)}, 
        {4, (110 << 8) | 112, (int (*)())(& mepp)}, 
        {0, (105 << 8) | 112, (int (*)())(& meip)}, 
        {0, (115 << 8) | 104, (int (*)())(& mesh)}, 
        {0, (117 << 8) | 104, (int (*)())(& mesh)}, 
        {6, (40 << 8) | 108, (int (*)())(& mesnblock)}, 
        {6, (40 << 8) | 113, (int (*)())(& mesnblock)}, 
        {6, (40 << 8) | 98, (int (*)())(& mesnblock)}, 
        {6, (40 << 8) | 122, (int (*)())(& mesnblock)}, 
        {6, (40 << 8) | 99, (int (*)())(& mesnblock)}, 
        {6, (40 << 8) | 100, (int (*)())(& mesnblock)}, 
        {6, (40 << 8) | 102, (int (*)())(& mesnblock)}, 
        {6, (40 << 8) | 120, (int (*)())(& mesnblock)}, 
        {0, (114 << 8) | 32, (int (*)())(& mefont)}, 
        {0, (105 << 8) | 32, (int (*)())(& mefont)}, 
        {0, (98 << 8) | 32, (int (*)())(& mefont)}, 
        {0, (117 << 8) | 32, (int (*)())(& mefont)}, 
        {0, (113 << 8) | 32, (int (*)())(& mefont)}, 
        {0, (114 << 8) | 98, (int (*)())(& mefont)}, 
        {0, (98 << 8) | 105, (int (*)())(& mefont)}, 
        {0, (98 << 8) | 120, (int (*)())(& mefont)}, 
        {0, 0, (int (*)())0}};
#line 1464 "deroff-original.c"
struct mactab manmactab[10]  = 
#line 1464
  {      {4, (66 << 8) | 73, (int (*)())(& manfont)}, 
        {4, (66 << 8) | 82, (int (*)())(& manfont)}, 
        {4, (73 << 8) | 66, (int (*)())(& manfont)}, 
        {4, (73 << 8) | 82, (int (*)())(& manfont)}, 
        {4, (82 << 8) | 66, (int (*)())(& manfont)}, 
        {4, (82 << 8) | 73, (int (*)())(& manfont)}, 
        {4, (80 << 8) | 80, (int (*)())(& manpp)}, 
        {4, (76 << 8) | 80, (int (*)())(& manpp)}, 
        {4, (72 << 8) | 80, (int (*)())(& manpp)}, 
        {0, 0, (int (*)())0}};
void __globinit_deroff(void) 
{ 

  {
#line 1464
  _coverage_fout = fopen("deroff.c.path", "wb");
}
}
