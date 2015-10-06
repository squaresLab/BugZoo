#line 33 "look.c"
void __globinit_look(void) ;
#line 174
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
#line 48 "/usr/include/ctype.h"
enum __anonenum_10 {
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
extern  __attribute__((__nothrow__)) int tolower(int __c ) ;
#line 119
extern  __attribute__((__nothrow__)) int toupper(int __c ) ;
#line 142
extern  __attribute__((__nothrow__)) int isascii(int __c ) ;
#line 146
extern  __attribute__((__nothrow__)) int toascii(int __c ) ;
#line 150
extern  __attribute__((__nothrow__)) int _toupper(int  ) ;
#line 151
extern  __attribute__((__nothrow__)) int _tolower(int  ) ;
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
#line 130
extern  __attribute__((__nothrow__)) char *strdup(char const   *__s )  __attribute__((__nonnull__(1),
__malloc__)) ;
#line 167
extern  __attribute__((__nothrow__)) char *strchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 170
extern  __attribute__((__nothrow__)) char *strrchr(char const   *__s , int __c )  __attribute__((__pure__,
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
#line 242
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 256
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
#line 270
extern  __attribute__((__nothrow__)) int strerror_r(int __errnum , char *__buf ,
                                                    size_t __buflen )  __asm__("__xpg_strerror_r") __attribute__((__nonnull__(2))) ;
#line 294
extern  __attribute__((__nothrow__)) void __bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
#line 298
extern  __attribute__((__nothrow__)) void bcopy(void const   *__src ,
                                                void *__dest , size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 302
extern  __attribute__((__nothrow__)) void bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
#line 305
extern  __attribute__((__nothrow__)) int bcmp(void const   *__s1 ,
                                              void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 309
extern  __attribute__((__nothrow__)) char *index(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 313
extern  __attribute__((__nothrow__)) char *rindex(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 318
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
#line 331
extern  __attribute__((__nothrow__)) int strcasecmp(char const   *__s1 ,
                                                    char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 335
extern  __attribute__((__nothrow__)) int strncasecmp(char const   *__s1 ,
                                                     char const   *__s2 ,
                                                     size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 354
extern  __attribute__((__nothrow__)) char *strsep(char ** __restrict  __stringp ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(1,2))) ;
#line 22 "look.c"
FILE *dfile  ;
#line 23 "look.c"
char *filenam  =    (char *)"words";
#line 25 "look.c"
int fold  ;
#line 26 "look.c"
int dict  ;
#line 27 "look.c"
int tab  ;
#line 29 "look.c"
char entry[257]  ;
#line 30 "look.c"
char word[257]  ;
#line 31 "look.c"
char key[257]  ;
#line 74
extern int ( /* missing proto */  exit)() ;
#line 82
int canon(char *old , char *new ) ;
#line 93
int getword(char *w ) ;
#line 96
int compare(char *s , char *t ) ;
#line 33 "look.c"
int main(int argc , char **argv ) 
{ register int c ;
  long top ;
  long bot ;
  long mid ;
  char *wstring ;
  char *ptr ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  __globinit_look();
#line 33
  fprintf(_coverage_fout, "58\n");
#line 33
  fflush(_coverage_fout);
#line 40
  while (1) {
#line 40
    fprintf(_coverage_fout, "10\n");
#line 40
    fflush(_coverage_fout);
#line 40
    if (argc >= 2) {
#line 40
      fprintf(_coverage_fout, "1\n");
#line 40
      fflush(_coverage_fout);
#line 40
      if (! ((int )*(*(argv + 1)) == 45)) {
#line 40
        break;
      }
    } else {
#line 40
      break;
    }
#line 40
    fprintf(_coverage_fout, "11\n");
#line 40
    fflush(_coverage_fout);
#line 41
    while (1) {
#line 41
      fprintf(_coverage_fout, "8\n");
#line 41
      fflush(_coverage_fout);
#line 42
      (*(argv + 1)) ++;
#line 42
      switch ((int )*(*(argv + 1))) {
#line 42
      fprintf(_coverage_fout, "3\n");
#line 42
      fflush(_coverage_fout);
      case 100: 
#line 44
      dict ++;
      goto __Cont;
#line 42
      fprintf(_coverage_fout, "4\n");
#line 42
      fflush(_coverage_fout);
      case 102: 
#line 47
      fold ++;
      goto __Cont;
#line 42
      fprintf(_coverage_fout, "5\n");
#line 42
      fflush(_coverage_fout);
      case 116: 
#line 50
      tab = (int )*(*(argv + 1) + 1);
#line 42
      fprintf(_coverage_fout, "6\n");
#line 42
      fflush(_coverage_fout);
#line 51
      if (tab) {
#line 51
        fprintf(_coverage_fout, "2\n");
#line 51
        fflush(_coverage_fout);
#line 52
        (*(argv + 1)) ++;
      }
      goto __Cont;
      case 0: 
#line 55
      break;
#line 42
      fprintf(_coverage_fout, "7\n");
#line 42
      fflush(_coverage_fout);
      default: ;
      goto __Cont;
      }
#line 59
      break;
#line 41
      fprintf(_coverage_fout, "9\n");
#line 41
      fflush(_coverage_fout);
      __Cont: /* CIL Label */ ;
    }
#line 40
    fprintf(_coverage_fout, "12\n");
#line 40
    fflush(_coverage_fout);
#line 61
    argc --;
#line 62
    argv ++;
  }
#line 33
  fprintf(_coverage_fout, "59\n");
#line 33
  fflush(_coverage_fout);
#line 64
  if (argc <= 1) {
#line 64
    fprintf(_coverage_fout, "13\n");
#line 64
    fflush(_coverage_fout);
#line 65
    return;
  }
#line 33
  fprintf(_coverage_fout, "60\n");
#line 33
  fflush(_coverage_fout);
#line 66
  if (argc == 2) {
#line 66
    fprintf(_coverage_fout, "14\n");
#line 66
    fflush(_coverage_fout);
#line 67
    fold ++;
#line 68
    dict ++;
  } else {
#line 66
    fprintf(_coverage_fout, "15\n");
#line 66
    fflush(_coverage_fout);
#line 70
    filenam = *(argv + 2);
  }
  {
#line 71
  fprintf(_coverage_fout, "16\n");
#line 71
  fflush(_coverage_fout);
#line 71
  dfile = fopen((char const   */* __restrict  */)filenam,
                (char const   */* __restrict  */)"r");
  }
#line 33
  fprintf(_coverage_fout, "61\n");
#line 33
  fflush(_coverage_fout);
#line 72
  if ((unsigned int )dfile == (unsigned int )((void *)0)) {
    {
#line 73
    fprintf(_coverage_fout, "17\n");
#line 73
    fflush(_coverage_fout);
#line 73
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"look: can\'t open %s\n", filenam);
#line 73
    fprintf(_coverage_fout, "18\n");
#line 73
    fflush(_coverage_fout);
#line 74
    exit(2);
    }
  }
  {
#line 76
  fprintf(_coverage_fout, "19\n");
#line 76
  fflush(_coverage_fout);
#line 76
  wstring = strdup((char const   *)*(argv + 1));
  }
#line 33
  fprintf(_coverage_fout, "62\n");
#line 33
  fflush(_coverage_fout);
#line 77
  if ((unsigned int )tab != (unsigned int )((void *)0)) {
    {
#line 78
    fprintf(_coverage_fout, "20\n");
#line 78
    fflush(_coverage_fout);
#line 78
    ptr = strchr((char const   *)wstring, tab);
    }
#line 77
    fprintf(_coverage_fout, "22\n");
#line 77
    fflush(_coverage_fout);
#line 78
    if ((unsigned int )ptr != (unsigned int )((void *)0)) {
#line 78
      fprintf(_coverage_fout, "21\n");
#line 78
      fflush(_coverage_fout);
#line 79
      ptr ++;
#line 79
      *ptr = (char )'\000';
    }
  }
  {
#line 82
  fprintf(_coverage_fout, "23\n");
#line 82
  fflush(_coverage_fout);
#line 82
  canon(wstring, key);
#line 82
  fprintf(_coverage_fout, "24\n");
#line 82
  fflush(_coverage_fout);
#line 83
  bot = 0L;
#line 82
  fprintf(_coverage_fout, "25\n");
#line 82
  fflush(_coverage_fout);
#line 84
  fseek(dfile, 0L, 2);
#line 82
  fprintf(_coverage_fout, "26\n");
#line 82
  fflush(_coverage_fout);
#line 85
  top = ftell(dfile);
  }
#line 33
  fprintf(_coverage_fout, "63\n");
#line 33
  fflush(_coverage_fout);
#line 86
  while (1) {
    {
#line 87
    fprintf(_coverage_fout, "27\n");
#line 87
    fflush(_coverage_fout);
#line 87
    mid = (top + bot) / 2L;
#line 87
    fprintf(_coverage_fout, "28\n");
#line 87
    fflush(_coverage_fout);
#line 88
    fseek(dfile, mid, 0);
    }
#line 86
    fprintf(_coverage_fout, "39\n");
#line 86
    fflush(_coverage_fout);
#line 89
    while (1) {
      {
#line 90
      fprintf(_coverage_fout, "29\n");
#line 90
      fflush(_coverage_fout);
#line 90
      c = _IO_getc(dfile);
#line 90
      fprintf(_coverage_fout, "30\n");
#line 90
      fflush(_coverage_fout);
#line 91
      mid ++;
      }
#line 89
      fprintf(_coverage_fout, "32\n");
#line 89
      fflush(_coverage_fout);
#line 89
      if (c != -1) {
#line 89
        fprintf(_coverage_fout, "31\n");
#line 89
        fflush(_coverage_fout);
#line 89
        if (! (c != 10)) {
#line 89
          break;
        }
      } else {
#line 89
        break;
      }
    }
    {
#line 93
    fprintf(_coverage_fout, "33\n");
#line 93
    fflush(_coverage_fout);
#line 93
    tmp = getword(entry);
    }
#line 86
    fprintf(_coverage_fout, "40\n");
#line 86
    fflush(_coverage_fout);
#line 93
    if (! tmp) {
#line 94
      break;
    }
    {
#line 95
    fprintf(_coverage_fout, "34\n");
#line 95
    fflush(_coverage_fout);
#line 95
    canon(entry, word);
#line 95
    fprintf(_coverage_fout, "35\n");
#line 95
    fflush(_coverage_fout);
#line 96
    tmp___0 = compare(key, word);
    }
#line 96
    switch (tmp___0) {
#line 96
    fprintf(_coverage_fout, "36\n");
#line 96
    fflush(_coverage_fout);
    case -2: 
    case -1: 
    case 0: 
#line 100
    if (top <= mid) {
#line 101
      break;
    }
#line 96
    fprintf(_coverage_fout, "37\n");
#line 96
    fflush(_coverage_fout);
#line 102
    top = mid;
    goto __Cont___0;
#line 96
    fprintf(_coverage_fout, "38\n");
#line 96
    fflush(_coverage_fout);
    case 1: 
    case 2: 
#line 106
    bot = mid;
    goto __Cont___0;
    }
#line 109
    break;
#line 86
    fprintf(_coverage_fout, "41\n");
#line 86
    fflush(_coverage_fout);
    __Cont___0: /* CIL Label */ ;
  }
  {
#line 111
  fprintf(_coverage_fout, "42\n");
#line 111
  fflush(_coverage_fout);
#line 111
  fseek(dfile, bot, 0);
  }
#line 33
  fprintf(_coverage_fout, "64\n");
#line 33
  fflush(_coverage_fout);
#line 112
  while (1) {
    {
#line 112
    fprintf(_coverage_fout, "43\n");
#line 112
    fflush(_coverage_fout);
#line 112
    tmp___3 = ftell(dfile);
    }
#line 112
    fprintf(_coverage_fout, "50\n");
#line 112
    fflush(_coverage_fout);
#line 112
    if (! (tmp___3 < top)) {
#line 112
      break;
    }
    {
#line 113
    fprintf(_coverage_fout, "44\n");
#line 113
    fflush(_coverage_fout);
#line 113
    tmp___1 = getword(entry);
    }
#line 112
    fprintf(_coverage_fout, "51\n");
#line 112
    fflush(_coverage_fout);
#line 113
    if (! tmp___1) {
#line 113
      fprintf(_coverage_fout, "45\n");
#line 113
      fflush(_coverage_fout);
#line 114
      return;
    }
    {
#line 115
    fprintf(_coverage_fout, "46\n");
#line 115
    fflush(_coverage_fout);
#line 115
    canon(entry, word);
#line 115
    fprintf(_coverage_fout, "47\n");
#line 115
    fflush(_coverage_fout);
#line 116
    tmp___2 = compare(key, word);
    }
#line 116
    switch (tmp___2) {
#line 116
    fprintf(_coverage_fout, "49\n");
#line 116
    fflush(_coverage_fout);
    case -2: 
#line 118
    return;
    case -1: 
    case 0: 
    {
#line 121
    fprintf(_coverage_fout, "48\n");
#line 121
    fflush(_coverage_fout);
#line 121
    puts((char const   *)(entry));
    }
#line 122
    break;
    case 1: 
    case 2: 
#line 125
    continue;
    }
#line 127
    break;
  }
#line 33
  fprintf(_coverage_fout, "65\n");
#line 33
  fflush(_coverage_fout);
#line 129
  while (1) {
    {
#line 129
    fprintf(_coverage_fout, "52\n");
#line 129
    fflush(_coverage_fout);
#line 129
    tmp___5 = getword(entry);
    }
#line 129
    fprintf(_coverage_fout, "56\n");
#line 129
    fflush(_coverage_fout);
#line 129
    if (! tmp___5) {
#line 129
      break;
    }
    {
#line 130
    fprintf(_coverage_fout, "53\n");
#line 130
    fflush(_coverage_fout);
#line 130
    canon(entry, word);
#line 130
    fprintf(_coverage_fout, "54\n");
#line 130
    fflush(_coverage_fout);
#line 131
    tmp___4 = compare(key, word);
    }
#line 131
    switch (tmp___4) {
    case -1: 
    case 0: 
    {
#line 134
    fprintf(_coverage_fout, "55\n");
#line 134
    fflush(_coverage_fout);
#line 134
    puts((char const   *)(entry));
    }
#line 135
    continue;
    }
#line 137
    break;
  }
  {
#line 139
  fprintf(_coverage_fout, "57\n");
#line 139
  fflush(_coverage_fout);
#line 139
  exit(0);
  }
}
}
#line 142 "look.c"
int compare(char *s , char *t ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
#line 142
  fprintf(_coverage_fout, "76\n");
#line 142
  fflush(_coverage_fout);
#line 145
  while (1) {
#line 145
    fprintf(_coverage_fout, "67\n");
#line 145
    fflush(_coverage_fout);
#line 145
    if (! ((int )*s == (int )*t)) {
#line 145
      break;
    }
#line 145
    fprintf(_coverage_fout, "68\n");
#line 145
    fflush(_coverage_fout);
#line 146
    if ((int )*s == 0) {
#line 146
      fprintf(_coverage_fout, "66\n");
#line 146
      fflush(_coverage_fout);
#line 147
      return (0);
    }
#line 145
    fprintf(_coverage_fout, "69\n");
#line 145
    fflush(_coverage_fout);
#line 145
    s ++;
#line 145
    t ++;
  }
#line 142
  fprintf(_coverage_fout, "77\n");
#line 142
  fflush(_coverage_fout);
#line 148
  if ((int )*s == 0) {
#line 148
    fprintf(_coverage_fout, "70\n");
#line 148
    fflush(_coverage_fout);
#line 148
    tmp___1 = -1;
  } else {
#line 148
    fprintf(_coverage_fout, "75\n");
#line 148
    fflush(_coverage_fout);
#line 148
    if ((int )*t == 0) {
#line 148
      fprintf(_coverage_fout, "71\n");
#line 148
      fflush(_coverage_fout);
#line 148
      tmp___1 = 1;
    } else {
#line 148
      fprintf(_coverage_fout, "74\n");
#line 148
      fflush(_coverage_fout);
#line 148
      if ((int )*s < (int )*t) {
#line 148
        fprintf(_coverage_fout, "72\n");
#line 148
        fflush(_coverage_fout);
#line 148
        tmp___1 = -2;
      } else {
#line 148
        fprintf(_coverage_fout, "73\n");
#line 148
        fflush(_coverage_fout);
#line 148
        tmp___1 = 2;
      }
    }
  }
#line 142
  fprintf(_coverage_fout, "78\n");
#line 142
  fflush(_coverage_fout);
#line 148
  return (tmp___1);
}
}
#line 154 "look.c"
int getword(char *w ) 
{ register int c ;
  register int avail ;
  char *tmp ;
  int tmp___0 ;

  {
#line 154
  fprintf(_coverage_fout, "88\n");
#line 154
  fflush(_coverage_fout);
#line 158
  avail = 256;
#line 154
  fprintf(_coverage_fout, "89\n");
#line 154
  fflush(_coverage_fout);
#line 160
  while (1) {
#line 160
    fprintf(_coverage_fout, "81\n");
#line 160
    fflush(_coverage_fout);
#line 160
    tmp___0 = avail;
#line 160
    avail --;
#line 160
    fprintf(_coverage_fout, "82\n");
#line 160
    fflush(_coverage_fout);
#line 160
    if (! tmp___0) {
#line 160
      break;
    }
    {
#line 161
    fprintf(_coverage_fout, "79\n");
#line 161
    fflush(_coverage_fout);
#line 161
    c = _IO_getc(dfile);
    }
#line 160
    fprintf(_coverage_fout, "83\n");
#line 160
    fflush(_coverage_fout);
#line 162
    if (c == -1) {
#line 162
      fprintf(_coverage_fout, "80\n");
#line 162
      fflush(_coverage_fout);
#line 163
      return (0);
    }
#line 160
    fprintf(_coverage_fout, "84\n");
#line 160
    fflush(_coverage_fout);
#line 164
    if (c == 10) {
#line 165
      break;
    }
#line 160
    fprintf(_coverage_fout, "85\n");
#line 160
    fflush(_coverage_fout);
#line 166
    tmp = w;
#line 166
    w ++;
#line 166
    *tmp = (char )c;
  }
#line 154
  fprintf(_coverage_fout, "90\n");
#line 154
  fflush(_coverage_fout);
#line 168
  while (1) {
#line 168
    fprintf(_coverage_fout, "87\n");
#line 168
    fflush(_coverage_fout);
#line 168
    if (! (c != 10)) {
#line 168
      break;
    }
    {
#line 169
    fprintf(_coverage_fout, "86\n");
#line 169
    fflush(_coverage_fout);
#line 169
    c = _IO_getc(dfile);
    }
  }
#line 154
  fprintf(_coverage_fout, "91\n");
#line 154
  fflush(_coverage_fout);
#line 170
  *w = (char)0;
#line 154
  fprintf(_coverage_fout, "92\n");
#line 154
  fflush(_coverage_fout);
#line 171
  return (1);
}
}
#line 174 "look.c"
int canon(char *old , char *new ) 
{ register int c ;
  register int avail ;
  char *tmp ;
  unsigned short const   **tmp___0 ;
  unsigned short const   **tmp___1 ;

  {
#line 174
  fprintf(_coverage_fout, "107\n");
#line 174
  fflush(_coverage_fout);
#line 178
  avail = 256;
#line 174
  fprintf(_coverage_fout, "108\n");
#line 174
  fflush(_coverage_fout);
#line 180
  while (1) {
#line 180
    fprintf(_coverage_fout, "100\n");
#line 180
    fflush(_coverage_fout);
#line 181
    tmp = old;
#line 181
    old ++;
#line 181
    c = (int )*tmp;
#line 181
    *new = (char )c;
#line 180
    fprintf(_coverage_fout, "101\n");
#line 180
    fflush(_coverage_fout);
#line 182
    if (c == 0) {
#line 182
      fprintf(_coverage_fout, "93\n");
#line 182
      fflush(_coverage_fout);
#line 183
      *new = (char)0;
#line 184
      break;
    }
#line 180
    fprintf(_coverage_fout, "102\n");
#line 180
    fflush(_coverage_fout);
#line 186
    if (dict) {
      {
#line 187
      fprintf(_coverage_fout, "94\n");
#line 187
      fflush(_coverage_fout);
#line 187
      tmp___0 = __ctype_b_loc();
      }
#line 186
      fprintf(_coverage_fout, "95\n");
#line 186
      fflush(_coverage_fout);
#line 187
      if (! ((int const   )*(*tmp___0 + c) & 8)) {
        goto __Cont;
      }
    }
#line 180
    fprintf(_coverage_fout, "103\n");
#line 180
    fflush(_coverage_fout);
#line 190
    if (fold) {
      {
#line 191
      fprintf(_coverage_fout, "96\n");
#line 191
      fflush(_coverage_fout);
#line 191
      tmp___1 = __ctype_b_loc();
      }
#line 190
      fprintf(_coverage_fout, "98\n");
#line 190
      fflush(_coverage_fout);
#line 191
      if ((int const   )*(*tmp___1 + c) & 256) {
#line 191
        fprintf(_coverage_fout, "97\n");
#line 191
        fflush(_coverage_fout);
#line 192
        *new = (char )((int )*new + 32);
      }
    }
#line 180
    fprintf(_coverage_fout, "104\n");
#line 180
    fflush(_coverage_fout);
#line 194
    new ++;
#line 195
    avail --;
#line 180
    fprintf(_coverage_fout, "105\n");
#line 180
    fflush(_coverage_fout);
#line 196
    if (avail <= 0) {
#line 196
      fprintf(_coverage_fout, "99\n");
#line 196
      fflush(_coverage_fout);
#line 197
      *new = (char)0;
#line 198
      break;
    }
#line 180
    fprintf(_coverage_fout, "106\n");
#line 180
    fflush(_coverage_fout);
    __Cont: /* CIL Label */ ;
  }
#line 174
  fprintf(_coverage_fout, "109\n");
#line 174
  fflush(_coverage_fout);
#line 201
  return (0);
}
}
void __globinit_look(void) 
{ 

  {
#line 174
  _coverage_fout = fopen("look.c.path", "wb");
}
}
