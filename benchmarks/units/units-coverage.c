#line 77 "units.c"
void __globinit_units(void) ;
#line 491
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
#line 27 "/usr/include/bits/locale.h"
enum __anonenum_10 {
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
#line 54 "/usr/include/locale.h"
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
   char __int_p_cs_precedes ;
   char __int_p_sep_by_space ;
   char __int_n_cs_precedes ;
   char __int_n_sep_by_space ;
   char __int_p_sign_posn ;
   char __int_n_sign_posn ;
};
#line 23 "units.c"
struct table;
#line 24 "units.c"
struct unit {
   double factor ;
   char dim[10] ;
};
#line 30 "units.c"
struct table {
   double factor ;
   char dim[10] ;
   char *name ;
};
#line 37 "units.c"
struct prefix {
   double factor ;
   char *pname ;
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
#line 11
#pragma ident "%Z%%M%	%I%	%E% SMI"
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
#line 125 "/usr/include/locale.h"
extern  __attribute__((__nothrow__)) char *setlocale(int __category ,
                                                     char const   *__locale ) ;
#line 128
extern  __attribute__((__nothrow__)) struct lconv *localeconv(void) ;
#line 18 "units.c"
extern int *signal() ;
#line 19 "units.c"
char *dfile  =    (char *)"unittab";
#line 20 "units.c"
char *unames[10]  ;
#line 21
double getflt(void) ;
#line 22
int fperr(void) ;
#line 23
struct table *hash(char *name ) ;
#line 30 "units.c"
struct table table[1009]  ;
#line 36 "units.c"
char names[10090]  ;
#line 37 "units.c"
struct prefix prefix[28]  = 
#line 37
  {      {1e-21, (char *)"zepto"}, 
        {1e-24, (char *)"yocto"}, 
        {1e-18, (char *)"atto"}, 
        {1e-15, (char *)"femto"}, 
        {1e-12, (char *)"pico"}, 
        {1e-9, (char *)"nano"}, 
        {1e-6, (char *)"micro"}, 
        {1e-3, (char *)"milli"}, 
        {1e-2, (char *)"centi"}, 
        {1e-1, (char *)"deci"}, 
        {1e1, (char *)"deka"}, 
        {1e1, (char *)"deca"}, 
        {1e2, (char *)"hecta"}, 
        {1e2, (char *)"hecto"}, 
        {1e3, (char *)"kilo"}, 
        {1e6, (char *)"mega"}, 
        {1e6, (char *)"meg"}, 
        {1e9, (char *)"giga"}, 
        {1e12, (char *)"tera"}, 
        {1e15, (char *)"peta"}, 
        {1e18, (char *)"exa"}, 
        {1e21, (char *)"zetta"}, 
        {1e24, (char *)"yotta"}, 
        {(double )(1 << 10), (char *)"kibi"}, 
        {(double )(1L << 20), (char *)"mebi"}, 
        {(double )(1L << 30), (char *)"gibi"}, 
        {(double )(1LL << 40), (char *)"tebi"}, 
        {0.0, (char *)0}};
#line 72 "units.c"
FILE *inp  ;
#line 73 "units.c"
int fperrc  ;
#line 74 "units.c"
int peekc  ;
#line 75 "units.c"
int dumpflg  ;
#line 89
extern int ( /* missing proto */  textdomain)() ;
#line 100
extern int ( /* missing proto */  gettext)() ;
#line 101
extern int ( /* missing proto */  exit)() ;
#line 104
int init(void) ;
#line 109
int convr(struct unit *up ) ;
#line 131
int units(struct unit *up ) ;
#line 77 "units.c"
int main(int argc , char **argv ) 
{ register int i ;
  register char *file ;
  struct unit u1 ;
  struct unit u2 ;
  double f ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;

  {
  __globinit_units();
  {
#line 85
  fprintf(_coverage_fout, "1\n");
#line 85
  fflush(_coverage_fout);
#line 85
  setlocale(6, "");
#line 85
  fprintf(_coverage_fout, "2\n");
#line 85
  fflush(_coverage_fout);
#line 89
  textdomain("SYS_TEST");
  }
#line 77
  fprintf(_coverage_fout, "31\n");
#line 77
  fflush(_coverage_fout);
#line 91
  if (argc > 1) {
#line 91
    fprintf(_coverage_fout, "4\n");
#line 91
    fflush(_coverage_fout);
#line 91
    if ((int )*(*(argv + 1)) == 45) {
#line 91
      fprintf(_coverage_fout, "3\n");
#line 91
      fflush(_coverage_fout);
#line 92
      argc --;
#line 93
      argv ++;
#line 94
      dumpflg ++;
    }
  }
#line 77
  fprintf(_coverage_fout, "32\n");
#line 77
  fflush(_coverage_fout);
#line 96
  file = dfile;
#line 77
  fprintf(_coverage_fout, "33\n");
#line 77
  fflush(_coverage_fout);
#line 97
  if (argc > 1) {
#line 97
    fprintf(_coverage_fout, "5\n");
#line 97
    fflush(_coverage_fout);
#line 98
    file = *(argv + 1);
  }
  {
#line 99
  fprintf(_coverage_fout, "6\n");
#line 99
  fflush(_coverage_fout);
#line 99
  inp = fopen((char const   */* __restrict  */)file,
              (char const   */* __restrict  */)"r");
  }
#line 77
  fprintf(_coverage_fout, "34\n");
#line 77
  fflush(_coverage_fout);
#line 99
  if ((unsigned int )inp == (unsigned int )((void *)0)) {
    {
#line 100
    fprintf(_coverage_fout, "7\n");
#line 100
    fflush(_coverage_fout);
#line 100
    tmp = gettext("no table\n");
#line 100
    fprintf(_coverage_fout, "8\n");
#line 100
    fflush(_coverage_fout);
#line 100
    printf((char const   */* __restrict  */)tmp);
#line 100
    fprintf(_coverage_fout, "9\n");
#line 100
    fflush(_coverage_fout);
#line 101
    exit(1);
    }
  }
  {
#line 103
  fprintf(_coverage_fout, "10\n");
#line 103
  fflush(_coverage_fout);
#line 103
  signal(8, & fperr);
#line 103
  fprintf(_coverage_fout, "11\n");
#line 103
  fflush(_coverage_fout);
#line 104
  init();
  }
  loop: 
  {
#line 107
  fprintf(_coverage_fout, "12\n");
#line 107
  fflush(_coverage_fout);
#line 107
  fperrc = 0;
#line 107
  fprintf(_coverage_fout, "13\n");
#line 107
  fflush(_coverage_fout);
#line 108
  tmp___0 = gettext("you have: ");
#line 107
  fprintf(_coverage_fout, "14\n");
#line 107
  fflush(_coverage_fout);
#line 108
  printf((char const   */* __restrict  */)tmp___0);
#line 107
  fprintf(_coverage_fout, "15\n");
#line 107
  fflush(_coverage_fout);
#line 109
  tmp___1 = convr(& u1);
  }
#line 77
  fprintf(_coverage_fout, "35\n");
#line 77
  fflush(_coverage_fout);
#line 109
  if (tmp___1) {
    goto loop;
  }
#line 77
  fprintf(_coverage_fout, "36\n");
#line 77
  fflush(_coverage_fout);
#line 111
  if (fperrc) {
    goto fp;
  }
  loop1: 
  {
#line 114
  fprintf(_coverage_fout, "16\n");
#line 114
  fflush(_coverage_fout);
#line 114
  tmp___2 = gettext("you want: ");
#line 114
  fprintf(_coverage_fout, "17\n");
#line 114
  fflush(_coverage_fout);
#line 114
  printf((char const   */* __restrict  */)tmp___2);
#line 114
  fprintf(_coverage_fout, "18\n");
#line 114
  fflush(_coverage_fout);
#line 115
  tmp___3 = convr(& u2);
  }
#line 77
  fprintf(_coverage_fout, "37\n");
#line 77
  fflush(_coverage_fout);
#line 115
  if (tmp___3) {
    goto loop1;
  }
#line 77
  fprintf(_coverage_fout, "38\n");
#line 77
  fflush(_coverage_fout);
#line 117
  i = 0;
#line 77
  fprintf(_coverage_fout, "39\n");
#line 77
  fflush(_coverage_fout);
#line 117
  while (1) {
#line 117
    fprintf(_coverage_fout, "19\n");
#line 117
    fflush(_coverage_fout);
#line 117
    if (! (i < 10)) {
#line 117
      break;
    }
#line 117
    fprintf(_coverage_fout, "20\n");
#line 117
    fflush(_coverage_fout);
#line 118
    if ((int )u1.dim[i] != (int )u2.dim[i]) {
      goto conform;
    }
#line 117
    fprintf(_coverage_fout, "21\n");
#line 117
    fflush(_coverage_fout);
#line 117
    i ++;
  }
#line 77
  fprintf(_coverage_fout, "40\n");
#line 77
  fflush(_coverage_fout);
#line 120
  f = u1.factor / u2.factor;
#line 77
  fprintf(_coverage_fout, "41\n");
#line 77
  fflush(_coverage_fout);
#line 121
  if (fperrc) {
    goto fp;
  } else {
#line 121
    fprintf(_coverage_fout, "22\n");
#line 121
    fflush(_coverage_fout);
#line 121
    if (f == 0.0) {
      goto fp;
    }
  }
  {
#line 123
  fprintf(_coverage_fout, "23\n");
#line 123
  fflush(_coverage_fout);
#line 123
  printf((char const   */* __restrict  */)"\t* %e\n", f);
#line 123
  fprintf(_coverage_fout, "24\n");
#line 123
  fflush(_coverage_fout);
#line 124
  printf((char const   */* __restrict  */)"\t/ %e\n", 1. / f);
  }
  goto loop;
#line 77
  fprintf(_coverage_fout, "42\n");
#line 77
  fflush(_coverage_fout);
  conform: 
#line 128
  if (fperrc) {
    goto fp;
  }
  {
#line 130
  fprintf(_coverage_fout, "25\n");
#line 130
  fflush(_coverage_fout);
#line 130
  tmp___4 = gettext("conformability\n");
#line 130
  fprintf(_coverage_fout, "26\n");
#line 130
  fflush(_coverage_fout);
#line 130
  printf((char const   */* __restrict  */)tmp___4);
#line 130
  fprintf(_coverage_fout, "27\n");
#line 130
  fflush(_coverage_fout);
#line 131
  units(& u1);
#line 130
  fprintf(_coverage_fout, "28\n");
#line 130
  fflush(_coverage_fout);
#line 132
  units(& u2);
  }
  goto loop;
  fp: 
  {
#line 136
  fprintf(_coverage_fout, "29\n");
#line 136
  fflush(_coverage_fout);
#line 136
  tmp___5 = gettext("underflow or overflow\n");
#line 136
  fprintf(_coverage_fout, "30\n");
#line 136
  fflush(_coverage_fout);
#line 136
  printf((char const   */* __restrict  */)tmp___5);
  }
  goto loop;
}
}
#line 150
int pu(int u , int i , int f ) ;
#line 140 "units.c"
int units(struct unit *up ) 
{ register struct unit *p ;
  register int f ;
  register int i ;
  int tmp ;
  int tmp___0 ;

  {
  {
#line 146
  fprintf(_coverage_fout, "43\n");
#line 146
  fflush(_coverage_fout);
#line 146
  p = up;
#line 146
  fprintf(_coverage_fout, "44\n");
#line 146
  fflush(_coverage_fout);
#line 147
  printf((char const   */* __restrict  */)"\t%e ", p->factor);
#line 146
  fprintf(_coverage_fout, "45\n");
#line 146
  fflush(_coverage_fout);
#line 148
  f = 0;
#line 146
  fprintf(_coverage_fout, "46\n");
#line 146
  fflush(_coverage_fout);
#line 149
  i = 0;
  }
#line 140
  fprintf(_coverage_fout, "60\n");
#line 140
  fflush(_coverage_fout);
#line 149
  while (1) {
#line 149
    fprintf(_coverage_fout, "50\n");
#line 149
    fflush(_coverage_fout);
#line 149
    if (! (i < 10)) {
#line 149
      break;
    }
    {
#line 150
    fprintf(_coverage_fout, "47\n");
#line 150
    fflush(_coverage_fout);
#line 150
    tmp = pu(p->dim[i], i, f);
#line 150
    fprintf(_coverage_fout, "48\n");
#line 150
    fflush(_coverage_fout);
#line 150
    f |= tmp;
#line 150
    fprintf(_coverage_fout, "49\n");
#line 150
    fflush(_coverage_fout);
#line 149
    i ++;
    }
  }
#line 140
  fprintf(_coverage_fout, "61\n");
#line 140
  fflush(_coverage_fout);
#line 151
  if (f & 1) {
    {
#line 152
    fprintf(_coverage_fout, "51\n");
#line 152
    fflush(_coverage_fout);
#line 152
    putchar('/');
#line 152
    fprintf(_coverage_fout, "52\n");
#line 152
    fflush(_coverage_fout);
#line 153
    f = 0;
#line 152
    fprintf(_coverage_fout, "53\n");
#line 152
    fflush(_coverage_fout);
#line 154
    i = 0;
    }
#line 151
    fprintf(_coverage_fout, "58\n");
#line 151
    fflush(_coverage_fout);
#line 154
    while (1) {
#line 154
      fprintf(_coverage_fout, "57\n");
#line 154
      fflush(_coverage_fout);
#line 154
      if (! (i < 10)) {
#line 154
        break;
      }
      {
#line 155
      fprintf(_coverage_fout, "54\n");
#line 155
      fflush(_coverage_fout);
#line 155
      tmp___0 = pu(- ((int )p->dim[i]), i, f);
#line 155
      fprintf(_coverage_fout, "55\n");
#line 155
      fflush(_coverage_fout);
#line 155
      f |= tmp___0;
#line 155
      fprintf(_coverage_fout, "56\n");
#line 155
      fflush(_coverage_fout);
#line 154
      i ++;
      }
    }
  }
  {
#line 157
  fprintf(_coverage_fout, "59\n");
#line 157
  fflush(_coverage_fout);
#line 157
  putchar('\n');
  }
#line 140
  fprintf(_coverage_fout, "62\n");
#line 140
  fflush(_coverage_fout);
#line 158
  return (0);
}
}
#line 160 "units.c"
int pu(int u , int i , int f ) 
{ int tmp ;

  {
#line 160
  fprintf(_coverage_fout, "73\n");
#line 160
  fflush(_coverage_fout);
#line 163
  if (u > 0) {
#line 163
    fprintf(_coverage_fout, "68\n");
#line 163
    fflush(_coverage_fout);
#line 164
    if (f & 2) {
      {
#line 165
      fprintf(_coverage_fout, "63\n");
#line 165
      fflush(_coverage_fout);
#line 165
      putchar('-');
      }
    }
#line 163
    fprintf(_coverage_fout, "69\n");
#line 163
    fflush(_coverage_fout);
#line 166
    if (unames[i]) {
      {
#line 167
      fprintf(_coverage_fout, "64\n");
#line 167
      fflush(_coverage_fout);
#line 167
      printf((char const   */* __restrict  */)"%s", unames[i]);
      }
    } else {
      {
#line 168
      fprintf(_coverage_fout, "65\n");
#line 168
      fflush(_coverage_fout);
#line 168
      tmp = gettext("*%c*");
#line 168
      fprintf(_coverage_fout, "66\n");
#line 168
      fflush(_coverage_fout);
#line 168
      printf((char const   */* __restrict  */)tmp, i + 97);
      }
    }
#line 163
    fprintf(_coverage_fout, "70\n");
#line 163
    fflush(_coverage_fout);
#line 169
    if (u > 1) {
      {
#line 170
      fprintf(_coverage_fout, "67\n");
#line 170
      fflush(_coverage_fout);
#line 170
      putchar(u + 48);
      }
    }
#line 163
    fprintf(_coverage_fout, "71\n");
#line 163
    fflush(_coverage_fout);
#line 171
    return (2);
  }
#line 160
  fprintf(_coverage_fout, "74\n");
#line 160
  fflush(_coverage_fout);
#line 173
  if (u < 0) {
#line 173
    fprintf(_coverage_fout, "72\n");
#line 173
    fflush(_coverage_fout);
#line 174
    return (1);
  }
#line 160
  fprintf(_coverage_fout, "75\n");
#line 160
  fflush(_coverage_fout);
#line 175
  return (0);
}
}
#line 198
int get(void) ;
#line 217
int lookup(char *name , struct unit *up , int den , int c ) ;
#line 178 "units.c"
int convr(struct unit *up ) 
{ register struct unit *p ;
  register int c ;
  register char *cp ;
  char name[20] ;
  int den ;
  int err ;
  char *tmp ;
  int tmp___0 ;
  char *tmp___1 ;

  {
#line 178
  fprintf(_coverage_fout, "92\n");
#line 178
  fflush(_coverage_fout);
#line 187
  p = up;
#line 188
  c = 0;
#line 178
  fprintf(_coverage_fout, "93\n");
#line 178
  fflush(_coverage_fout);
#line 188
  while (1) {
#line 188
    fprintf(_coverage_fout, "76\n");
#line 188
    fflush(_coverage_fout);
#line 188
    if (! (c < 10)) {
#line 188
      break;
    }
#line 188
    fprintf(_coverage_fout, "77\n");
#line 188
    fflush(_coverage_fout);
#line 189
    p->dim[c] = (char)0;
#line 188
    c ++;
  }
  {
#line 190
  fprintf(_coverage_fout, "78\n");
#line 190
  fflush(_coverage_fout);
#line 190
  p->factor = getflt();
  }
#line 178
  fprintf(_coverage_fout, "94\n");
#line 178
  fflush(_coverage_fout);
#line 191
  if (p->factor == 0.) {
#line 191
    fprintf(_coverage_fout, "79\n");
#line 191
    fflush(_coverage_fout);
#line 192
    p->factor = 1.0;
  }
#line 178
  fprintf(_coverage_fout, "95\n");
#line 178
  fflush(_coverage_fout);
#line 193
  err = 0;
#line 194
  den = 0;
#line 195
  cp = name;
  loop: 
  {
#line 198
  fprintf(_coverage_fout, "80\n");
#line 198
  fflush(_coverage_fout);
#line 198
  c = get();
  }
#line 198
  switch (c) {
#line 198
  fprintf(_coverage_fout, "89\n");
#line 198
  fflush(_coverage_fout);
  case 49: 
  case 50: 
  case 51: 
  case 52: 
  case 53: 
  case 54: 
  case 55: 
  case 56: 
  case 57: 
  case 45: 
  case 47: 
  case 32: 
  case 9: 
  case 10: 
#line 214
  if ((unsigned int )cp != (unsigned int )(name)) {
    {
#line 215
    fprintf(_coverage_fout, "81\n");
#line 215
    fflush(_coverage_fout);
#line 215
    tmp = cp;
#line 215
    fprintf(_coverage_fout, "82\n");
#line 215
    fflush(_coverage_fout);
#line 215
    cp ++;
#line 215
    fprintf(_coverage_fout, "83\n");
#line 215
    fflush(_coverage_fout);
#line 215
    *tmp = (char)0;
#line 215
    fprintf(_coverage_fout, "84\n");
#line 215
    fflush(_coverage_fout);
#line 216
    cp = name;
#line 215
    fprintf(_coverage_fout, "85\n");
#line 215
    fflush(_coverage_fout);
#line 217
    tmp___0 = lookup(cp, p, den, c);
#line 215
    fprintf(_coverage_fout, "86\n");
#line 215
    fflush(_coverage_fout);
#line 217
    err |= tmp___0;
    }
  }
#line 198
  fprintf(_coverage_fout, "90\n");
#line 198
  fflush(_coverage_fout);
#line 219
  if (c == 47) {
#line 219
    fprintf(_coverage_fout, "87\n");
#line 219
    fflush(_coverage_fout);
#line 220
    den ++;
  }
#line 198
  fprintf(_coverage_fout, "91\n");
#line 198
  fflush(_coverage_fout);
#line 221
  if (c == 10) {
#line 221
    fprintf(_coverage_fout, "88\n");
#line 221
    fflush(_coverage_fout);
#line 222
    return (err);
  }
  goto loop;
  }
#line 178
  fprintf(_coverage_fout, "96\n");
#line 178
  fflush(_coverage_fout);
#line 225
  tmp___1 = cp;
#line 225
  cp ++;
#line 225
  *tmp___1 = (char )c;
  goto loop;
}
}
#line 229 "units.c"
int lookup(char *name , struct unit *up , int den , int c ) 
{ register struct unit *p ;
  register struct table *q ;
  register int i ;
  char *cp1 ;
  char *cp2 ;
  double e ;
  char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
#line 229
  fprintf(_coverage_fout, "130\n");
#line 229
  fflush(_coverage_fout);
#line 239
  p = up;
#line 240
  e = 1.0;
  loop: 
  {
#line 243
  fprintf(_coverage_fout, "97\n");
#line 243
  fflush(_coverage_fout);
#line 243
  q = hash(name);
  }
#line 229
  fprintf(_coverage_fout, "131\n");
#line 229
  fflush(_coverage_fout);
#line 244
  if (q->name) {
#line 244
    fprintf(_coverage_fout, "108\n");
#line 244
    fflush(_coverage_fout);
    l1: 
#line 246
    if (den) {
#line 246
      fprintf(_coverage_fout, "100\n");
#line 246
      fflush(_coverage_fout);
#line 247
      p->factor /= q->factor * e;
#line 248
      i = 0;
#line 246
      fprintf(_coverage_fout, "101\n");
#line 246
      fflush(_coverage_fout);
#line 248
      while (1) {
#line 248
        fprintf(_coverage_fout, "98\n");
#line 248
        fflush(_coverage_fout);
#line 248
        if (! (i < 10)) {
#line 248
          break;
        }
#line 248
        fprintf(_coverage_fout, "99\n");
#line 248
        fflush(_coverage_fout);
#line 249
        p->dim[i] = (char )((int )p->dim[i] - (int )q->dim[i]);
#line 248
        i ++;
      }
    } else {
#line 246
      fprintf(_coverage_fout, "104\n");
#line 246
      fflush(_coverage_fout);
#line 251
      p->factor *= q->factor * e;
#line 252
      i = 0;
#line 246
      fprintf(_coverage_fout, "105\n");
#line 246
      fflush(_coverage_fout);
#line 252
      while (1) {
#line 252
        fprintf(_coverage_fout, "102\n");
#line 252
        fflush(_coverage_fout);
#line 252
        if (! (i < 10)) {
#line 252
          break;
        }
#line 252
        fprintf(_coverage_fout, "103\n");
#line 252
        fflush(_coverage_fout);
#line 253
        p->dim[i] = (char )((int )p->dim[i] + (int )q->dim[i]);
#line 252
        i ++;
      }
    }
#line 244
    fprintf(_coverage_fout, "109\n");
#line 244
    fflush(_coverage_fout);
#line 255
    if (c >= 50) {
#line 255
      fprintf(_coverage_fout, "107\n");
#line 255
      fflush(_coverage_fout);
#line 255
      if (c <= 57) {
#line 255
        fprintf(_coverage_fout, "106\n");
#line 255
        fflush(_coverage_fout);
#line 256
        c --;
        goto l1;
      }
    }
#line 244
    fprintf(_coverage_fout, "110\n");
#line 244
    fflush(_coverage_fout);
#line 259
    return (0);
  }
#line 229
  fprintf(_coverage_fout, "132\n");
#line 229
  fflush(_coverage_fout);
#line 261
  i = 0;
#line 229
  fprintf(_coverage_fout, "133\n");
#line 229
  fflush(_coverage_fout);
#line 261
  while (1) {
#line 261
    fprintf(_coverage_fout, "117\n");
#line 261
    fflush(_coverage_fout);
#line 261
    cp1 = prefix[i].pname;
#line 261
    fprintf(_coverage_fout, "118\n");
#line 261
    fflush(_coverage_fout);
#line 261
    if (! cp1) {
#line 261
      break;
    }
#line 261
    fprintf(_coverage_fout, "119\n");
#line 261
    fflush(_coverage_fout);
#line 262
    cp2 = name;
#line 261
    fprintf(_coverage_fout, "120\n");
#line 261
    fflush(_coverage_fout);
#line 263
    while (1) {
#line 263
      fprintf(_coverage_fout, "112\n");
#line 263
      fflush(_coverage_fout);
#line 263
      tmp___0 = cp2;
#line 263
      cp2 ++;
#line 263
      fprintf(_coverage_fout, "113\n");
#line 263
      fflush(_coverage_fout);
#line 263
      if (! ((int )*cp1 == (int )*tmp___0)) {
#line 263
        break;
      }
#line 263
      fprintf(_coverage_fout, "114\n");
#line 263
      fflush(_coverage_fout);
#line 264
      tmp = cp1;
#line 264
      cp1 ++;
#line 263
      fprintf(_coverage_fout, "115\n");
#line 263
      fflush(_coverage_fout);
#line 264
      if ((int )*tmp == 0) {
#line 264
        fprintf(_coverage_fout, "111\n");
#line 264
        fflush(_coverage_fout);
#line 265
        cp1 --;
#line 266
        break;
      }
    }
#line 261
    fprintf(_coverage_fout, "121\n");
#line 261
    fflush(_coverage_fout);
#line 268
    if ((int )*cp1 == 0) {
#line 268
      fprintf(_coverage_fout, "116\n");
#line 268
      fflush(_coverage_fout);
#line 269
      e *= prefix[i].factor;
#line 270
      name = cp2 - 1;
      goto loop;
    }
#line 261
    fprintf(_coverage_fout, "122\n");
#line 261
    fflush(_coverage_fout);
#line 261
    i ++;
  }
#line 229
  fprintf(_coverage_fout, "134\n");
#line 229
  fflush(_coverage_fout);
#line 274
  cp1 = name;
#line 229
  fprintf(_coverage_fout, "135\n");
#line 229
  fflush(_coverage_fout);
#line 274
  while (1) {
#line 274
    fprintf(_coverage_fout, "123\n");
#line 274
    fflush(_coverage_fout);
#line 274
    if (! *cp1) {
#line 274
      break;
    }
#line 274
    fprintf(_coverage_fout, "124\n");
#line 274
    fflush(_coverage_fout);
#line 274
    cp1 ++;
  }
#line 229
  fprintf(_coverage_fout, "136\n");
#line 229
  fflush(_coverage_fout);
#line 275
  if ((unsigned int )cp1 > (unsigned int )(name + 1)) {
#line 275
    fprintf(_coverage_fout, "126\n");
#line 275
    fflush(_coverage_fout);
#line 275
    cp1 --;
#line 275
    fprintf(_coverage_fout, "127\n");
#line 275
    fflush(_coverage_fout);
#line 275
    if ((int )*cp1 == 115) {
#line 275
      fprintf(_coverage_fout, "125\n");
#line 275
      fflush(_coverage_fout);
#line 276
      *cp1 = (char)0;
      goto loop;
    }
  }
  {
#line 279
  fprintf(_coverage_fout, "128\n");
#line 279
  fflush(_coverage_fout);
#line 279
  tmp___1 = gettext("cannot recognize %s\n");
#line 279
  fprintf(_coverage_fout, "129\n");
#line 279
  fflush(_coverage_fout);
#line 279
  printf((char const   */* __restrict  */)tmp___1, name);
  }
#line 229
  fprintf(_coverage_fout, "137\n");
#line 229
  fflush(_coverage_fout);
#line 280
  return (1);
}
}
#line 283 "units.c"
int equal(char *s1 , char *s2 ) 
{ register char *c1 ;
  register char *c2 ;
  char *tmp ;
  char *tmp___0 ;

  {
#line 283
  fprintf(_coverage_fout, "143\n");
#line 283
  fflush(_coverage_fout);
#line 288
  c1 = s1;
#line 289
  c2 = s2;
#line 283
  fprintf(_coverage_fout, "144\n");
#line 283
  fflush(_coverage_fout);
#line 290
  while (1) {
#line 290
    fprintf(_coverage_fout, "139\n");
#line 290
    fflush(_coverage_fout);
#line 290
    tmp___0 = c1;
#line 290
    c1 ++;
#line 290
    fprintf(_coverage_fout, "140\n");
#line 290
    fflush(_coverage_fout);
#line 290
    if (! ((int )*tmp___0 == (int )*c2)) {
#line 290
      break;
    }
#line 290
    fprintf(_coverage_fout, "141\n");
#line 290
    fflush(_coverage_fout);
#line 291
    tmp = c2;
#line 291
    c2 ++;
#line 290
    fprintf(_coverage_fout, "142\n");
#line 290
    fflush(_coverage_fout);
#line 291
    if ((int )*tmp == 0) {
#line 291
      fprintf(_coverage_fout, "138\n");
#line 291
      fflush(_coverage_fout);
#line 292
      return (1);
    }
  }
#line 283
  fprintf(_coverage_fout, "145\n");
#line 283
  fflush(_coverage_fout);
#line 293
  return (0);
}
}
#line 296 "units.c"
int init(void) 
{ register char *cp ;
  register struct table *tp ;
  register struct table *lp ;
  int c ;
  int i ;
  int f ;
  int t ;
  char *np ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;
  int tmp___3 ;
  char *tmp___4 ;
  char *tmp___5 ;
  char *tmp___6 ;
  int tmp___7 ;

  {
#line 296
  fprintf(_coverage_fout, "225\n");
#line 296
  fflush(_coverage_fout);
#line 303
  cp = names;
#line 304
  i = 0;
#line 296
  fprintf(_coverage_fout, "226\n");
#line 296
  fflush(_coverage_fout);
#line 304
  while (1) {
#line 304
    fprintf(_coverage_fout, "164\n");
#line 304
    fflush(_coverage_fout);
#line 304
    if (! (i < 10)) {
#line 304
      break;
    }
    {
#line 305
    fprintf(_coverage_fout, "146\n");
#line 305
    fflush(_coverage_fout);
#line 305
    np = cp;
#line 305
    fprintf(_coverage_fout, "147\n");
#line 305
    fflush(_coverage_fout);
#line 306
    tmp = cp;
#line 305
    fprintf(_coverage_fout, "148\n");
#line 305
    fflush(_coverage_fout);
#line 306
    cp ++;
#line 305
    fprintf(_coverage_fout, "149\n");
#line 305
    fflush(_coverage_fout);
#line 306
    *tmp = (char )'*';
#line 305
    fprintf(_coverage_fout, "150\n");
#line 305
    fflush(_coverage_fout);
#line 307
    tmp___0 = cp;
#line 305
    fprintf(_coverage_fout, "151\n");
#line 305
    fflush(_coverage_fout);
#line 307
    cp ++;
#line 305
    fprintf(_coverage_fout, "152\n");
#line 305
    fflush(_coverage_fout);
#line 307
    *tmp___0 = (char )(i + 97);
#line 305
    fprintf(_coverage_fout, "153\n");
#line 305
    fflush(_coverage_fout);
#line 308
    tmp___1 = cp;
#line 305
    fprintf(_coverage_fout, "154\n");
#line 305
    fflush(_coverage_fout);
#line 308
    cp ++;
#line 305
    fprintf(_coverage_fout, "155\n");
#line 305
    fflush(_coverage_fout);
#line 308
    *tmp___1 = (char )'*';
#line 305
    fprintf(_coverage_fout, "156\n");
#line 305
    fflush(_coverage_fout);
#line 309
    tmp___2 = cp;
#line 305
    fprintf(_coverage_fout, "157\n");
#line 305
    fflush(_coverage_fout);
#line 309
    cp ++;
#line 305
    fprintf(_coverage_fout, "158\n");
#line 305
    fflush(_coverage_fout);
#line 309
    *tmp___2 = (char)0;
#line 305
    fprintf(_coverage_fout, "159\n");
#line 305
    fflush(_coverage_fout);
#line 310
    lp = hash(np);
#line 305
    fprintf(_coverage_fout, "160\n");
#line 305
    fflush(_coverage_fout);
#line 311
    lp->name = np;
#line 305
    fprintf(_coverage_fout, "161\n");
#line 305
    fflush(_coverage_fout);
#line 312
    lp->factor = 1.0;
#line 305
    fprintf(_coverage_fout, "162\n");
#line 305
    fflush(_coverage_fout);
#line 313
    lp->dim[i] = (char)1;
#line 305
    fprintf(_coverage_fout, "163\n");
#line 305
    fflush(_coverage_fout);
#line 304
    i ++;
    }
  }
  {
#line 315
  fprintf(_coverage_fout, "165\n");
#line 315
  fflush(_coverage_fout);
#line 315
  lp = hash("");
#line 315
  fprintf(_coverage_fout, "166\n");
#line 315
  fflush(_coverage_fout);
#line 316
  lp->name = cp - 1;
#line 315
  fprintf(_coverage_fout, "167\n");
#line 315
  fflush(_coverage_fout);
#line 317
  lp->factor = 1.0;
  }
  l0: 
  {
#line 320
  fprintf(_coverage_fout, "168\n");
#line 320
  fflush(_coverage_fout);
#line 320
  c = get();
  }
#line 296
  fprintf(_coverage_fout, "227\n");
#line 296
  fflush(_coverage_fout);
#line 321
  if (c == 0) {
#line 321
    fprintf(_coverage_fout, "180\n");
#line 321
    fflush(_coverage_fout);
#line 322
    if (dumpflg) {
      {
#line 323
      fprintf(_coverage_fout, "169\n");
#line 323
      fflush(_coverage_fout);
#line 323
      tmp___3 = gettext("%d units; %d bytes\n\n");
#line 323
      fprintf(_coverage_fout, "170\n");
#line 323
      fflush(_coverage_fout);
#line 323
      printf((char const   */* __restrict  */)tmp___3, i, cp - names);
#line 323
      fprintf(_coverage_fout, "171\n");
#line 323
      fflush(_coverage_fout);
#line 324
      tp = table;
      }
#line 322
      fprintf(_coverage_fout, "177\n");
#line 322
      fflush(_coverage_fout);
#line 324
      while (1) {
#line 324
        fprintf(_coverage_fout, "174\n");
#line 324
        fflush(_coverage_fout);
#line 324
        if (! ((unsigned int )tp < (unsigned int )(& table[1009]))) {
#line 324
          break;
        }
#line 324
        fprintf(_coverage_fout, "175\n");
#line 324
        fflush(_coverage_fout);
#line 325
        if ((unsigned int )tp->name == (unsigned int )((char *)0)) {
          goto __Cont;
        }
        {
#line 327
        fprintf(_coverage_fout, "172\n");
#line 327
        fflush(_coverage_fout);
#line 327
        printf((char const   */* __restrict  */)"%s", tp->name);
#line 327
        fprintf(_coverage_fout, "173\n");
#line 327
        fflush(_coverage_fout);
#line 328
        units((struct unit *)tp);
        }
#line 324
        fprintf(_coverage_fout, "176\n");
#line 324
        fflush(_coverage_fout);
        __Cont: /* CIL Label */ 
#line 324
        tp ++;
      }
    }
    {
#line 330
    fprintf(_coverage_fout, "178\n");
#line 330
    fflush(_coverage_fout);
#line 330
    fclose(inp);
#line 330
    fprintf(_coverage_fout, "179\n");
#line 330
    fflush(_coverage_fout);
#line 331
    inp = stdin;
    }
#line 321
    fprintf(_coverage_fout, "181\n");
#line 321
    fflush(_coverage_fout);
#line 332
    return;
  }
#line 296
  fprintf(_coverage_fout, "228\n");
#line 296
  fflush(_coverage_fout);
#line 334
  if (c == 47) {
#line 334
    fprintf(_coverage_fout, "185\n");
#line 334
    fflush(_coverage_fout);
#line 335
    while (1) {
#line 335
      fprintf(_coverage_fout, "184\n");
#line 335
      fflush(_coverage_fout);
#line 335
      if (c != 10) {
#line 335
        fprintf(_coverage_fout, "182\n");
#line 335
        fflush(_coverage_fout);
#line 335
        if (! (c != 0)) {
#line 335
          break;
        }
      } else {
#line 335
        break;
      }
      {
#line 336
      fprintf(_coverage_fout, "183\n");
#line 336
      fflush(_coverage_fout);
#line 336
      c = get();
      }
    }
    goto l0;
  }
#line 296
  fprintf(_coverage_fout, "229\n");
#line 296
  fflush(_coverage_fout);
#line 339
  if (c == 10) {
    goto l0;
  }
#line 296
  fprintf(_coverage_fout, "230\n");
#line 296
  fflush(_coverage_fout);
#line 341
  np = cp;
#line 296
  fprintf(_coverage_fout, "231\n");
#line 296
  fflush(_coverage_fout);
#line 342
  while (1) {
#line 342
    fprintf(_coverage_fout, "201\n");
#line 342
    fflush(_coverage_fout);
#line 342
    if (c != 32) {
#line 342
      fprintf(_coverage_fout, "186\n");
#line 342
      fflush(_coverage_fout);
#line 342
      if (! (c != 9)) {
#line 342
        break;
      }
    } else {
#line 342
      break;
    }
    {
#line 343
    fprintf(_coverage_fout, "187\n");
#line 343
    fflush(_coverage_fout);
#line 343
    tmp___4 = cp;
#line 343
    fprintf(_coverage_fout, "188\n");
#line 343
    fflush(_coverage_fout);
#line 343
    cp ++;
#line 343
    fprintf(_coverage_fout, "189\n");
#line 343
    fflush(_coverage_fout);
#line 343
    *tmp___4 = (char )c;
#line 343
    fprintf(_coverage_fout, "190\n");
#line 343
    fflush(_coverage_fout);
#line 344
    c = get();
    }
#line 342
    fprintf(_coverage_fout, "202\n");
#line 342
    fflush(_coverage_fout);
#line 345
    if (c == 0) {
      goto l0;
    }
#line 342
    fprintf(_coverage_fout, "203\n");
#line 342
    fflush(_coverage_fout);
#line 347
    if (c == 10) {
      {
#line 348
      fprintf(_coverage_fout, "191\n");
#line 348
      fflush(_coverage_fout);
#line 348
      tmp___5 = cp;
#line 348
      fprintf(_coverage_fout, "192\n");
#line 348
      fflush(_coverage_fout);
#line 348
      cp ++;
#line 348
      fprintf(_coverage_fout, "193\n");
#line 348
      fflush(_coverage_fout);
#line 348
      *tmp___5 = (char)0;
#line 348
      fprintf(_coverage_fout, "194\n");
#line 348
      fflush(_coverage_fout);
#line 349
      tp = hash(np);
      }
#line 347
      fprintf(_coverage_fout, "197\n");
#line 347
      fflush(_coverage_fout);
#line 350
      if (tp->name) {
        goto redef;
      }
#line 347
      fprintf(_coverage_fout, "198\n");
#line 347
      fflush(_coverage_fout);
#line 352
      tp->name = np;
#line 353
      tp->factor = lp->factor;
#line 354
      c = 0;
#line 347
      fprintf(_coverage_fout, "199\n");
#line 347
      fflush(_coverage_fout);
#line 354
      while (1) {
#line 354
        fprintf(_coverage_fout, "195\n");
#line 354
        fflush(_coverage_fout);
#line 354
        if (! (c < 10)) {
#line 354
          break;
        }
#line 354
        fprintf(_coverage_fout, "196\n");
#line 354
        fflush(_coverage_fout);
#line 355
        tp->dim[c] = lp->dim[c];
#line 354
        c ++;
      }
#line 347
      fprintf(_coverage_fout, "200\n");
#line 347
      fflush(_coverage_fout);
#line 356
      i ++;
      goto l0;
    }
  }
  {
#line 360
  fprintf(_coverage_fout, "204\n");
#line 360
  fflush(_coverage_fout);
#line 360
  tmp___6 = cp;
#line 360
  fprintf(_coverage_fout, "205\n");
#line 360
  fflush(_coverage_fout);
#line 360
  cp ++;
#line 360
  fprintf(_coverage_fout, "206\n");
#line 360
  fflush(_coverage_fout);
#line 360
  *tmp___6 = (char)0;
#line 360
  fprintf(_coverage_fout, "207\n");
#line 360
  fflush(_coverage_fout);
#line 361
  lp = hash(np);
  }
#line 296
  fprintf(_coverage_fout, "232\n");
#line 296
  fflush(_coverage_fout);
#line 362
  if (lp->name) {
    goto redef;
  }
  {
#line 364
  fprintf(_coverage_fout, "208\n");
#line 364
  fflush(_coverage_fout);
#line 364
  convr((struct unit *)lp);
#line 364
  fprintf(_coverage_fout, "209\n");
#line 364
  fflush(_coverage_fout);
#line 365
  lp->name = np;
#line 364
  fprintf(_coverage_fout, "210\n");
#line 364
  fflush(_coverage_fout);
#line 366
  f = 0;
#line 364
  fprintf(_coverage_fout, "211\n");
#line 364
  fflush(_coverage_fout);
#line 367
  i ++;
  }
#line 296
  fprintf(_coverage_fout, "233\n");
#line 296
  fflush(_coverage_fout);
#line 368
  if (lp->factor != 1.0) {
    goto l0;
  }
#line 296
  fprintf(_coverage_fout, "234\n");
#line 296
  fflush(_coverage_fout);
#line 370
  c = 0;
#line 296
  fprintf(_coverage_fout, "235\n");
#line 296
  fflush(_coverage_fout);
#line 370
  while (1) {
#line 370
    fprintf(_coverage_fout, "217\n");
#line 370
    fflush(_coverage_fout);
#line 370
    if (! (c < 10)) {
#line 370
      break;
    }
#line 370
    fprintf(_coverage_fout, "218\n");
#line 370
    fflush(_coverage_fout);
#line 371
    t = (int )lp->dim[c];
#line 370
    fprintf(_coverage_fout, "219\n");
#line 370
    fflush(_coverage_fout);
#line 372
    if (t > 1) {
      goto l0;
    } else {
#line 372
      fprintf(_coverage_fout, "213\n");
#line 372
      fflush(_coverage_fout);
#line 372
      if (f > 0) {
#line 372
        fprintf(_coverage_fout, "212\n");
#line 372
        fflush(_coverage_fout);
#line 372
        if (t != 0) {
          goto l0;
        }
      }
    }
#line 370
    fprintf(_coverage_fout, "220\n");
#line 370
    fflush(_coverage_fout);
#line 374
    if (f == 0) {
#line 374
      fprintf(_coverage_fout, "216\n");
#line 374
      fflush(_coverage_fout);
#line 374
      if (t == 1) {
#line 374
        fprintf(_coverage_fout, "214\n");
#line 374
        fflush(_coverage_fout);
#line 375
        if (unames[c]) {
          goto l0;
        }
#line 374
        fprintf(_coverage_fout, "215\n");
#line 374
        fflush(_coverage_fout);
#line 377
        f = c + 1;
      }
    }
#line 370
    fprintf(_coverage_fout, "221\n");
#line 370
    fflush(_coverage_fout);
#line 370
    c ++;
  }
#line 296
  fprintf(_coverage_fout, "236\n");
#line 296
  fflush(_coverage_fout);
#line 380
  if (f > 0) {
#line 380
    fprintf(_coverage_fout, "222\n");
#line 380
    fflush(_coverage_fout);
#line 381
    unames[f - 1] = np;
  }
  goto l0;
  redef: 
  {
#line 385
  fprintf(_coverage_fout, "223\n");
#line 385
  fflush(_coverage_fout);
#line 385
  tmp___7 = gettext("redefinition %s\n");
#line 385
  fprintf(_coverage_fout, "224\n");
#line 385
  fflush(_coverage_fout);
#line 385
  printf((char const   */* __restrict  */)tmp___7, np);
  }
  goto l0;
}
}
#line 389 "units.c"
double getflt(void) 
{ register int c ;
  register int i ;
  register int dp ;
  double d ;
  double e ;
  int f ;
  int tmp ;
  double tmp___0 ;

  {
#line 389
  fprintf(_coverage_fout, "270\n");
#line 389
  fflush(_coverage_fout);
#line 396
  d = 0.;
#line 397
  dp = 0;
#line 389
  fprintf(_coverage_fout, "271\n");
#line 389
  fflush(_coverage_fout);
#line 398
  while (1) {
    {
#line 399
    fprintf(_coverage_fout, "237\n");
#line 399
    fflush(_coverage_fout);
#line 399
    c = get();
    }
#line 398
    fprintf(_coverage_fout, "239\n");
#line 398
    fflush(_coverage_fout);
#line 398
    if (! (c == 32)) {
#line 398
      fprintf(_coverage_fout, "238\n");
#line 398
      fflush(_coverage_fout);
#line 398
      if (! (c == 9)) {
#line 398
        break;
      }
    }
  }
#line 389
  fprintf(_coverage_fout, "272\n");
#line 389
  fflush(_coverage_fout);
  l1: 
#line 403
  if (c >= 48) {
#line 403
    fprintf(_coverage_fout, "244\n");
#line 403
    fflush(_coverage_fout);
#line 403
    if (c <= 57) {
#line 403
      fprintf(_coverage_fout, "242\n");
#line 403
      fflush(_coverage_fout);
#line 404
      d = (d * 10. + (double )c) - (double )48;
#line 403
      fprintf(_coverage_fout, "243\n");
#line 403
      fflush(_coverage_fout);
#line 405
      if (dp) {
#line 405
        fprintf(_coverage_fout, "240\n");
#line 405
        fflush(_coverage_fout);
#line 406
        dp ++;
      }
      {
#line 407
      fprintf(_coverage_fout, "241\n");
#line 407
      fflush(_coverage_fout);
#line 407
      c = get();
      }
      goto l1;
    }
  }
#line 389
  fprintf(_coverage_fout, "273\n");
#line 389
  fflush(_coverage_fout);
#line 410
  if (c == 46) {
    {
#line 411
    fprintf(_coverage_fout, "245\n");
#line 411
    fflush(_coverage_fout);
#line 411
    dp ++;
#line 411
    fprintf(_coverage_fout, "246\n");
#line 411
    fflush(_coverage_fout);
#line 412
    c = get();
    }
    goto l1;
  }
#line 389
  fprintf(_coverage_fout, "274\n");
#line 389
  fflush(_coverage_fout);
#line 415
  if (dp) {
#line 415
    fprintf(_coverage_fout, "247\n");
#line 415
    fflush(_coverage_fout);
#line 416
    dp --;
  }
#line 389
  fprintf(_coverage_fout, "275\n");
#line 389
  fflush(_coverage_fout);
#line 417
  if (c == 43) {
    goto _L;
  } else {
#line 417
    fprintf(_coverage_fout, "261\n");
#line 417
    fflush(_coverage_fout);
#line 417
    if (c == 45) {
#line 417
      fprintf(_coverage_fout, "256\n");
#line 417
      fflush(_coverage_fout);
      _L: /* CIL Label */ 
#line 418
      f = 0;
#line 417
      fprintf(_coverage_fout, "257\n");
#line 417
      fflush(_coverage_fout);
#line 419
      if (c == 45) {
#line 419
        fprintf(_coverage_fout, "248\n");
#line 419
        fflush(_coverage_fout);
#line 420
        f ++;
      }
      {
#line 421
      fprintf(_coverage_fout, "249\n");
#line 421
      fflush(_coverage_fout);
#line 421
      i = 0;
#line 421
      fprintf(_coverage_fout, "250\n");
#line 421
      fflush(_coverage_fout);
#line 422
      c = get();
      }
#line 417
      fprintf(_coverage_fout, "258\n");
#line 417
      fflush(_coverage_fout);
#line 423
      while (1) {
#line 423
        fprintf(_coverage_fout, "254\n");
#line 423
        fflush(_coverage_fout);
#line 423
        if (c >= 48) {
#line 423
          fprintf(_coverage_fout, "251\n");
#line 423
          fflush(_coverage_fout);
#line 423
          if (! (c <= 57)) {
#line 423
            break;
          }
        } else {
#line 423
          break;
        }
        {
#line 424
        fprintf(_coverage_fout, "252\n");
#line 424
        fflush(_coverage_fout);
#line 424
        i = (i * 10 + c) - 48;
#line 424
        fprintf(_coverage_fout, "253\n");
#line 424
        fflush(_coverage_fout);
#line 425
        c = get();
        }
      }
#line 417
      fprintf(_coverage_fout, "259\n");
#line 417
      fflush(_coverage_fout);
#line 427
      if (f) {
#line 427
        fprintf(_coverage_fout, "255\n");
#line 427
        fflush(_coverage_fout);
#line 428
        i = - i;
      }
#line 417
      fprintf(_coverage_fout, "260\n");
#line 417
      fflush(_coverage_fout);
#line 429
      dp -= i;
    }
  }
#line 389
  fprintf(_coverage_fout, "276\n");
#line 389
  fflush(_coverage_fout);
#line 431
  e = 1.;
#line 432
  i = dp;
#line 389
  fprintf(_coverage_fout, "277\n");
#line 389
  fflush(_coverage_fout);
#line 433
  if (i < 0) {
#line 433
    fprintf(_coverage_fout, "262\n");
#line 433
    fflush(_coverage_fout);
#line 434
    i = - i;
  }
#line 389
  fprintf(_coverage_fout, "278\n");
#line 389
  fflush(_coverage_fout);
#line 435
  while (1) {
#line 435
    fprintf(_coverage_fout, "263\n");
#line 435
    fflush(_coverage_fout);
#line 435
    tmp = i;
#line 435
    i --;
#line 435
    fprintf(_coverage_fout, "264\n");
#line 435
    fflush(_coverage_fout);
#line 435
    if (! tmp) {
#line 435
      break;
    }
#line 435
    fprintf(_coverage_fout, "265\n");
#line 435
    fflush(_coverage_fout);
#line 436
    e *= 10.;
  }
#line 389
  fprintf(_coverage_fout, "279\n");
#line 389
  fflush(_coverage_fout);
#line 437
  if (dp < 0) {
#line 437
    fprintf(_coverage_fout, "266\n");
#line 437
    fflush(_coverage_fout);
#line 438
    d *= e;
  } else {
#line 437
    fprintf(_coverage_fout, "267\n");
#line 437
    fflush(_coverage_fout);
#line 439
    d /= e;
  }
#line 389
  fprintf(_coverage_fout, "280\n");
#line 389
  fflush(_coverage_fout);
#line 440
  if (c == 124) {
    {
#line 441
    fprintf(_coverage_fout, "268\n");
#line 441
    fflush(_coverage_fout);
#line 441
    tmp___0 = getflt();
    }
#line 440
    fprintf(_coverage_fout, "269\n");
#line 440
    fflush(_coverage_fout);
#line 441
    return (d / tmp___0);
  }
#line 389
  fprintf(_coverage_fout, "281\n");
#line 389
  fflush(_coverage_fout);
#line 442
  peekc = c;
#line 389
  fprintf(_coverage_fout, "282\n");
#line 389
  fflush(_coverage_fout);
#line 443
  return (d);
}
}
#line 446 "units.c"
int get(void) 
{ register int c ;

  {
#line 446
  fprintf(_coverage_fout, "290\n");
#line 446
  fflush(_coverage_fout);
#line 450
  c = peekc;
#line 446
  fprintf(_coverage_fout, "291\n");
#line 446
  fflush(_coverage_fout);
#line 450
  if (c) {
#line 450
    fprintf(_coverage_fout, "283\n");
#line 450
    fflush(_coverage_fout);
#line 451
    peekc = 0;
#line 450
    fprintf(_coverage_fout, "284\n");
#line 450
    fflush(_coverage_fout);
#line 452
    return (c);
  }
  {
#line 454
  fprintf(_coverage_fout, "285\n");
#line 454
  fflush(_coverage_fout);
#line 454
  c = _IO_getc(inp);
  }
#line 446
  fprintf(_coverage_fout, "292\n");
#line 446
  fflush(_coverage_fout);
#line 455
  if (c == -1) {
#line 455
    fprintf(_coverage_fout, "288\n");
#line 455
    fflush(_coverage_fout);
#line 456
    if ((unsigned int )inp == (unsigned int )stdin) {
      {
#line 457
      fprintf(_coverage_fout, "286\n");
#line 457
      fflush(_coverage_fout);
#line 457
      printf((char const   */* __restrict  */)"\n");
#line 457
      fprintf(_coverage_fout, "287\n");
#line 457
      fflush(_coverage_fout);
#line 458
      exit(0);
      }
    }
#line 455
    fprintf(_coverage_fout, "289\n");
#line 455
    fflush(_coverage_fout);
#line 460
    return (0);
  }
#line 446
  fprintf(_coverage_fout, "293\n");
#line 446
  fflush(_coverage_fout);
#line 462
  return (c);
}
}
#line 465 "units.c"
struct table *hash(char *name ) 
{ register struct table *tp ;
  register char *np ;
  register unsigned int h ;
  char *tmp ;
  int tmp___0 ;

  {
#line 465
  fprintf(_coverage_fout, "301\n");
#line 465
  fflush(_coverage_fout);
#line 473
  h = 0U;
#line 474
  np = name;
#line 465
  fprintf(_coverage_fout, "302\n");
#line 465
  fflush(_coverage_fout);
#line 475
  while (1) {
#line 475
    fprintf(_coverage_fout, "294\n");
#line 475
    fflush(_coverage_fout);
#line 475
    if (! *np) {
#line 475
      break;
    }
#line 475
    fprintf(_coverage_fout, "295\n");
#line 475
    fflush(_coverage_fout);
#line 476
    tmp = np;
#line 476
    np ++;
#line 476
    h = (h * 57U + (unsigned int )*tmp) - 48U;
  }
#line 465
  fprintf(_coverage_fout, "303\n");
#line 465
  fflush(_coverage_fout);
#line 477
  if ((int )h < 0) {
#line 477
    fprintf(_coverage_fout, "296\n");
#line 477
    fflush(_coverage_fout);
#line 477
    h = (unsigned int )(- ((int )h));
  }
#line 465
  fprintf(_coverage_fout, "304\n");
#line 465
  fflush(_coverage_fout);
#line 478
  h %= 1009U;
#line 479
  tp = & table[h];
#line 465
  fprintf(_coverage_fout, "305\n");
#line 465
  fflush(_coverage_fout);
  l0: 
#line 481
  if ((unsigned int )tp->name == (unsigned int )((char *)0)) {
#line 481
    fprintf(_coverage_fout, "297\n");
#line 481
    fflush(_coverage_fout);
#line 482
    return (tp);
  }
  {
#line 483
  fprintf(_coverage_fout, "298\n");
#line 483
  fflush(_coverage_fout);
#line 483
  tmp___0 = equal(name, tp->name);
  }
#line 465
  fprintf(_coverage_fout, "306\n");
#line 465
  fflush(_coverage_fout);
#line 483
  if (tmp___0) {
#line 483
    fprintf(_coverage_fout, "299\n");
#line 483
    fflush(_coverage_fout);
#line 484
    return (tp);
  }
#line 465
  fprintf(_coverage_fout, "307\n");
#line 465
  fflush(_coverage_fout);
#line 485
  tp ++;
#line 465
  fprintf(_coverage_fout, "308\n");
#line 465
  fflush(_coverage_fout);
#line 486
  if ((unsigned int )tp >= (unsigned int )(& table[1009])) {
#line 486
    fprintf(_coverage_fout, "300\n");
#line 486
    fflush(_coverage_fout);
#line 487
    tp = table;
  }
  goto l0;
}
}
#line 491 "units.c"
int fperr(void) 
{ 

  {
  {
#line 494
  fprintf(_coverage_fout, "309\n");
#line 494
  fflush(_coverage_fout);
#line 494
  signal(8, & fperr);
#line 494
  fprintf(_coverage_fout, "310\n");
#line 494
  fflush(_coverage_fout);
#line 495
  fperrc ++;
  }
#line 491
  fprintf(_coverage_fout, "311\n");
#line 491
  fflush(_coverage_fout);
#line 496
  return (0);
}
}
void __globinit_units(void) 
{ 

  {
#line 491
  _coverage_fout = fopen("units.c.path", "wb");
}
}
