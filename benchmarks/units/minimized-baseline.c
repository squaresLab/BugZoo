typedef unsigned int size_t;

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

struct __anonstruct___fsid_t_1 {
   int __val[2] ;
};

typedef struct __anonstruct___fsid_t_1 __fsid_t;

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

struct _IO_FILE;

struct _IO_FILE;

struct _IO_FILE;

typedef struct _IO_FILE FILE;

typedef struct _IO_FILE __FILE;

typedef long wchar_t;

typedef unsigned int wint_t;

union __anonunion___value_3 {
   wint_t __wch ;
   char __wchb[4] ;
};

struct __anonstruct___mbstate_t_2 {
   int __count ;
   union __anonunion___value_3 __value ;
};

typedef struct __anonstruct___mbstate_t_2 __mbstate_t;

struct __anonstruct__G_fpos_t_4 {
   __off_t __pos ;
   __mbstate_t __state ;
};

typedef struct __anonstruct__G_fpos_t_4 _G_fpos_t;

struct __anonstruct__G_fpos64_t_5 {
   __off64_t __pos ;
   __mbstate_t __state ;
};

typedef struct __anonstruct__G_fpos64_t_5 _G_fpos64_t;

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

enum __anonenum_7 {
    __GCONV_IS_LAST = 1,
    __GCONV_IGNORE_ERRORS = 2
} ;

struct __gconv_step;

struct __gconv_step;

struct __gconv_step;

struct __gconv_step_data;

struct __gconv_step_data;

struct __gconv_step_data;

struct __gconv_loaded_object;

struct __gconv_loaded_object;

struct __gconv_loaded_object;

struct __gconv_trans_data;

struct __gconv_trans_data;

struct __gconv_trans_data;

typedef int (*__gconv_fct)(struct __gconv_step * , struct __gconv_step_data * ,
                           unsigned char const   ** , unsigned char const   * ,
                           unsigned char ** , size_t * , int  , int  );

typedef wint_t (*__gconv_btowc_fct)(struct __gconv_step * , unsigned char  );

typedef int (*__gconv_init_fct)(struct __gconv_step * );

typedef void (*__gconv_end_fct)(struct __gconv_step * );

typedef int (*__gconv_trans_fct)(struct __gconv_step * ,
                                 struct __gconv_step_data * , void * ,
                                 unsigned char const   * ,
                                 unsigned char const   ** ,
                                 unsigned char const   * , unsigned char ** ,
                                 size_t * );

typedef int (*__gconv_trans_context_fct)(void * , unsigned char const   * ,
                                         unsigned char const   * ,
                                         unsigned char * , unsigned char * );

typedef int (*__gconv_trans_query_fct)(char const   * , char const   *** ,
                                       size_t * );

typedef int (*__gconv_trans_init_fct)(void ** , char const   * );

typedef void (*__gconv_trans_end_fct)(void * );

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

struct __gconv_info {
   size_t __nsteps ;
   struct __gconv_step *__steps ;
   struct __gconv_step_data __data[] ;
};

typedef struct __gconv_info *__gconv_t;

struct __anonstruct___combined_9 {
   struct __gconv_info __cd ;
   struct __gconv_step_data __data ;
};

union __anonunion__G_iconv_t_8 {
   struct __gconv_info __cd ;
   struct __anonstruct___combined_9 __combined ;
};

typedef union __anonunion__G_iconv_t_8 _G_iconv_t;

typedef short _G_int16_t;

typedef int _G_int32_t;

typedef unsigned short _G_uint16_t;

typedef unsigned int _G_uint32_t;

typedef __builtin_va_list __gnuc_va_list;

struct _IO_jump_t;

struct _IO_jump_t;

struct _IO_jump_t;

struct _IO_FILE;

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

struct _IO_FILE_plus;

struct _IO_FILE_plus;

typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );

typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf ,
                                size_t __n );

typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );

typedef int __io_close_fn(void *__cookie );

typedef _G_fpos_t fpos_t;

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

struct table;

struct table;

struct unit {
   double factor ;
   char dim[10] ;
};

struct table {
   double factor ;
   char dim[10] ;
   char *name ;
};

struct prefix {
   double factor ;
   char *pname ;
};

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

#pragma ident "%Z%%M%	%I%	%E% SMI"

extern struct _IO_FILE_plus _IO_2_1_stdin_ ;

extern struct _IO_FILE_plus _IO_2_1_stdout_ ;

extern struct _IO_FILE_plus _IO_2_1_stderr_ ;

extern int __underflow(_IO_FILE * ) ;

extern int __uflow(_IO_FILE * ) ;

extern int __overflow(_IO_FILE * , int  ) ;

extern wint_t __wunderflow(_IO_FILE * ) ;

extern wint_t __wuflow(_IO_FILE * ) ;

extern wint_t __woverflow(_IO_FILE * , wint_t  ) ;

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

extern FILE *tmpfile(void) ;

extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;

extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;

extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;

extern int fclose(FILE *__stream ) ;

extern int fflush(FILE *__stream ) ;

extern int fflush_unlocked(FILE *__stream ) ;

extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;

extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream ) ;

extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd ,
                                                  char const   *__modes ) ;

extern  __attribute__((__nothrow__)) void setbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ) ;

extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ,
                                                 int __modes , size_t __n ) ;

extern  __attribute__((__nothrow__)) void setbuffer(FILE * __restrict  __stream ,
                                                    char * __restrict  __buf ,
                                                    size_t __size ) ;

extern  __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;

extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;

extern int printf(char const   * __restrict  __format  , ...) ;

extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;

extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;

extern int vprintf(char const   * __restrict  __format , __gnuc_va_list __arg ) ;

extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;

extern  __attribute__((__nothrow__)) int snprintf(char * __restrict  __s ,
                                                  size_t __maxlen ,
                                                  char const   * __restrict  __format 
                                                  , ...) ;

extern  __attribute__((__nothrow__)) int vsnprintf(char * __restrict  __s ,
                                                   size_t __maxlen ,
                                                   char const   * __restrict  __format ,
                                                   __gnuc_va_list __arg ) ;

extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...) ;

extern int scanf(char const   * __restrict  __format  , ...) ;

extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...) ;

extern int fgetc(FILE *__stream ) ;

extern int getc(FILE *__stream ) ;

extern int getchar(void) ;

extern int getc_unlocked(FILE *__stream ) ;

extern int getchar_unlocked(void) ;

extern int fgetc_unlocked(FILE *__stream ) ;

extern int fputc(int __c , FILE *__stream ) ;

extern int putc(int __c , FILE *__stream ) ;

extern int putchar(int __c ) ;

extern int fputc_unlocked(int __c , FILE *__stream ) ;

extern int putc_unlocked(int __c , FILE *__stream ) ;

extern int putchar_unlocked(int __c ) ;

extern int getw(FILE *__stream ) ;

extern int putw(int __w , FILE *__stream ) ;

extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;

extern char *gets(char *__s ) ;

extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;

extern int puts(char const   *__s ) ;

extern int ungetc(int __c , FILE *__stream ) ;

extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;

extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;

extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size ,
                             size_t __n , FILE * __restrict  __stream ) ;

extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size ,
                              size_t __n , FILE * __restrict  __stream ) ;

extern int fseek(FILE *__stream , long __off , int __whence ) ;

extern long ftell(FILE *__stream ) ;

extern void rewind(FILE *__stream ) ;

extern int fseeko(FILE *__stream , __off_t __off , int __whence ) ;

extern __off_t ftello(FILE *__stream ) ;

extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos ) ;

extern int fsetpos(FILE *__stream , fpos_t const   *__pos ) ;

extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;

extern void perror(char const   *__s ) ;

extern int sys_nerr ;

extern char const   * const  sys_errlist[] ;

extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;

extern FILE *popen(char const   *__command , char const   *__modes ) ;

extern int pclose(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;

extern  __attribute__((__nothrow__)) void flockfile(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) int ftrylockfile(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) void funlockfile(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) char *setlocale(int __category ,
                                                     char const   *__locale ) ;

extern  __attribute__((__nothrow__)) struct lconv *localeconv(void) ;

extern int *signal() ;

char *dfile   = (char *)"unittab";

char *unames[10]  ;

double getflt(void) ;

int fperr(void) ;

struct table *hash(char *name ) ;

struct table table[1009]  ;

char names[10090]  ;

struct prefix prefix[28]   = 
  {{1e-21, (char *)"zepto"}, {1e-24, (char *)"yocto"}, {1e-18, (char *)"atto"},
   {1e-15, (char *)"femto"}, {1e-12, (char *)"pico"}, {1e-9, (char *)"nano"},
   {1e-6, (char *)"micro"}, {1e-3, (char *)"milli"}, {1e-2, (char *)"centi"},
   {1e-1, (char *)"deci"}, {1e1, (char *)"deka"}, {1e1, (char *)"deca"},
   {1e2, (char *)"hecta"}, {1e2, (char *)"hecto"}, {1e3, (char *)"kilo"},
   {1e6, (char *)"mega"}, {1e6, (char *)"meg"}, {1e9, (char *)"giga"},
   {1e12, (char *)"tera"}, {1e15, (char *)"peta"}, {1e18, (char *)"exa"},
   {1e21, (char *)"zetta"}, {1e24, (char *)"yotta"},
   {(double )(1 << 10), (char *)"kibi"}, {(double )(1L << 20), (char *)"mebi"},
   {(double )(1L << 30), (char *)"gibi"},
   {(double )(1LL << 40), (char *)"tebi"}, {0.0, (char *)0}};

FILE *inp  ;

int fperrc  ;

int peekc  ;

int dumpflg  ;

extern int textdomain() ;

extern int gettext() ;

extern int exit() ;

int init(void) ;

int convr(struct unit *up ) ;

int units(struct unit *up ) ;

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
  setlocale(6, "");
  textdomain("SYS_TEST");
  if (argc > 1) {
    if ((int )*(*(argv + 1)) == 45) {
      argc --;
      argv ++;
      dumpflg ++;
    }
  }
  file = dfile;
  if (argc > 1) {
    file = *(argv + 1);
  }
  inp = fopen((char const   */* __restrict  */)((char const   *)file),
              (char const   */* __restrict  */)"r");
  if ((unsigned int )inp == (unsigned int )((void *)0)) {
    tmp = gettext("no table\n");
    printf((char const   */* __restrict  */)((char const   *)tmp));
    exit(1);
  }
  signal(8, & fperr);
  init();
  loop: 
  fperrc = 0;
  tmp___0 = gettext("you have: ");
  printf((char const   */* __restrict  */)((char const   *)tmp___0));
  tmp___1 = convr(& u1);
  if (tmp___1) {
    goto loop;
  }
  if (fperrc) {
    goto fp;
  }
  loop1: 
  tmp___2 = gettext("you want: ");
  printf((char const   */* __restrict  */)((char const   *)tmp___2));
  tmp___3 = convr(& u2);
  if (tmp___3) {
    goto loop1;
  }
  i = 0;
  while (i < 10) {
    if ((int )u1.dim[i] != (int )u2.dim[i]) {
      goto conform;
    }
    i ++;
  }
  f = u1.factor / u2.factor;
  if (fperrc) {
    goto fp;
  } else {
    if (f == 0.0) {
      goto fp;
    }
  }
  printf((char const   */* __restrict  */)"\t* %e\n", f);
  printf((char const   */* __restrict  */)"\t/ %e\n", 1. / f);
  goto loop;
  conform: 
  if (fperrc) {
    goto fp;
  }
  tmp___4 = gettext("conformability\n");
  printf((char const   */* __restrict  */)((char const   *)tmp___4));
  units(& u1);
  units(& u2);
  goto loop;
  fp: 
  tmp___5 = gettext("underflow or overflow\n");
  printf((char const   */* __restrict  */)((char const   *)tmp___5));
  goto loop;
}
}

int pu(int u , int i , int f ) ;

int units(struct unit *up ) 
{ register struct unit *p ;
  register int f ;
  register int i ;
  int tmp ;
  int tmp___0 ;

  {
  p = up;
  printf((char const   */* __restrict  */)"\t%e ", p->factor);
  f = 0;
  i = 0;
  while (i < 10) {
    tmp = pu((int )p->dim[i], i, f);
    f |= tmp;
    i ++;
  }
  if (f & 1) {
    putchar('/');
    f = 0;
    i = 0;
    while (i < 10) {
      tmp___0 = pu(- ((int )p->dim[i]), i, f);
      f |= tmp___0;
      i ++;
    }
  }
  putchar('\n');
  return (0);
}
}

int pu(int u , int i , int f ) 
{ int tmp ;

  {
  if (u > 0) {
    if (f & 2) {
      putchar('-');
    }
    if (unames[i]) {
      printf((char const   */* __restrict  */)"%s", unames[i]);
    } else {
      tmp = gettext("*%c*");
      printf((char const   */* __restrict  */)((char const   *)tmp), i + 97);
    }
    if (u > 1) {
      putchar(u + 48);
    }
    return (2);
  }
  if (u < 0) {
    return (1);
  }
  return (0);
}
}

int get(void) ;

int lookup(char *name , struct unit *up , int den , int c ) ;

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
  p = up;
  c = 0;
  while (c < 10) {
    p->dim[c] = (char)0;
    c ++;
  }
  p->factor = getflt();
  if (p->factor == 0.) {
    p->factor = 1.0;
  }
  err = 0;
  den = 0;
  cp = name;
  loop: 
  c = get();
  switch (c) {
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
  if ((unsigned int )cp != (unsigned int )(name)) {
    tmp = cp;
    cp ++;
    *tmp = (char)0;
    cp = name;
    tmp___0 = lookup(cp, p, den, c);
    err |= tmp___0;
  }
  if (c == 47) {
    den ++;
  }
  if (c == 10) {
    return (err);
  }
  goto loop;
  }
  tmp___1 = cp;
  cp ++;
  *tmp___1 = (char )c;
  goto loop;
}
}

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
  p = up;
  e = 1.0;
  loop: 
  q = hash(name);
  if (q->name) {
    l1: 
    if (den) {
      p->factor /= q->factor * e;
      i = 0;
      while (i < 10) {
        p->dim[i] = (char )((int )p->dim[i] - (int )q->dim[i]);
        i ++;
      }
    } else {
      p->factor *= q->factor * e;
      i = 0;
      while (i < 10) {
        p->dim[i] = (char )((int )p->dim[i] + (int )q->dim[i]);
        i ++;
      }
    }
    if (c >= 50) {
      if (c <= 57) {
        c --;
        goto l1;
      }
    }
    return (0);
  }
  i = 0;
  while (1) {
    cp1 = prefix[i].pname;
    if (! cp1) {
      break;
    }
    cp2 = name;
    while (1) {
      tmp___0 = cp2;
      cp2 ++;
      if (! ((int )*cp1 == (int )*tmp___0)) {
        break;
      }
      tmp = cp1;
      cp1 ++;
      if ((int )*tmp == 0) {
        cp1 --;
        break;
      }
    }
    if ((int )*cp1 == 0) {
      e *= prefix[i].factor;
      name = cp2 - 1;
      goto loop;
    }
    i ++;
  }
  cp1 = name;
  while (*cp1) {
    cp1 ++;
  }
  if ((unsigned int )cp1 > (unsigned int )(name + 1)) {
    cp1 --;
    if ((int )*cp1 == 115) {
      *cp1 = (char)0;
      goto loop;
    }
  }
  tmp___1 = gettext("cannot recognize %s\n");
  printf((char const   */* __restrict  */)((char const   *)tmp___1), name);
  return (1);
}
}

int equal(char *s1 , char *s2 ) 
{ register char *c1 ;
  register char *c2 ;
  char *tmp ;
  char *tmp___0 ;

  {
  c1 = s1;
  c2 = s2;
  while (1) {
    tmp___0 = c1;
    c1 ++;
    if (! ((int )*tmp___0 == (int )*c2)) {
      break;
    }
    tmp = c2;
    c2 ++;
    if ((int )*tmp == 0) {
      return (1);
    }
  }
  return (0);
}
}

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
  cp = names;
  i = 0;
  while (i < 10) {
    np = cp;
    tmp = cp;
    cp ++;
    *tmp = (char )'*';
    tmp___0 = cp;
    cp ++;
    *tmp___0 = (char )(i + 97);
    tmp___1 = cp;
    cp ++;
    *tmp___1 = (char )'*';
    tmp___2 = cp;
    cp ++;
    *tmp___2 = (char)0;
    lp = hash(np);
    lp->name = np;
    lp->factor = 1.0;
    lp->dim[i] = (char)1;
    i ++;
  }
  lp = hash((char *)"");
  lp->name = cp - 1;
  lp->factor = 1.0;
  l0: 
  c = get();
  if (c == 0) {
    if (dumpflg) {
      tmp___3 = gettext("%d units; %d bytes\n\n");
      printf((char const   */* __restrict  */)((char const   *)tmp___3), i,
             cp - names);
      tp = table;
      while ((unsigned int )tp < (unsigned int )(& table[1009])) {
        if ((unsigned int )tp->name == (unsigned int )((char *)0)) {
          goto __Cont;
        }
        printf((char const   */* __restrict  */)"%s", tp->name);
        units((struct unit *)tp);
        __Cont: 
        tp ++;
      }
    }
    fclose(inp);
    inp = stdin;
    return;
  }
  if (c == 47) {
    while (1) {
      if (c != 10) {
        if (! (c != 0)) {
          break;
        }
      } else {
        break;
      }
      c = get();
    }
    goto l0;
  }
  if (c == 10) {
    goto l0;
  }
  np = cp;
  while (1) {
    if (c != 32) {
      if (! (c != 9)) {
        break;
      }
    } else {
      break;
    }
    tmp___4 = cp;
    cp ++;
    *tmp___4 = (char )c;
    c = get();
    if (c == 0) {
      goto l0;
    }
    if (c == 10) {
      tmp___5 = cp;
      cp ++;
      *tmp___5 = (char)0;
      tp = hash(np);
      if (tp->name) {
        goto redef;
      }
      tp->name = np;
      tp->factor = lp->factor;
      c = 0;
      while (c < 10) {
        tp->dim[c] = lp->dim[c];
        c ++;
      }
      i ++;
      goto l0;
    }
  }
  tmp___6 = cp;
  cp ++;
  *tmp___6 = (char)0;
  lp = hash(np);
  if (lp->name) {
    goto redef;
  }
  convr((struct unit *)lp);
  lp->name = np;
  f = 0;
  i ++;
  if (lp->factor != 1.0) {
    goto l0;
  }
  c = 0;
  while (c < 10) {
    t = (int )lp->dim[c];
    if (t > 1) {
      goto l0;
    } else {
      if (f > 0) {
        if (t != 0) {
          goto l0;
        }
      }
    }
    if (f == 0) {
      if (t == 1) {
        if (unames[c]) {
          goto l0;
        }
        f = c + 1;
      }
    }
    c ++;
  }
  if (f > 0) {
    unames[f - 1] = np;
  }
  goto l0;
  redef: 
  tmp___7 = gettext("redefinition %s\n");
  printf((char const   */* __restrict  */)((char const   *)tmp___7), np);
  goto l0;
}
}

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
  d = 0.;
  dp = 0;
  while (1) {
    c = get();
    if (! (c == 32)) {
      if (! (c == 9)) {
        break;
      }
    }
  }
  l1: 
  if (c >= 48) {
    if (c <= 57) {
      d = (d * 10. + (double )c) - (double )48;
      if (dp) {
        dp ++;
      }
      c = get();
      goto l1;
    }
  }
  if (c == 46) {
    dp ++;
    c = get();
    goto l1;
  }
  if (dp) {
    dp --;
  }
  if (c == 43) {
    goto _L;
  } else {
    if (c == 45) {
      _L: 
      f = 0;
      if (c == 45) {
        f ++;
      }
      i = 0;
      c = get();
      while (1) {
        if (c >= 48) {
          if (! (c <= 57)) {
            break;
          }
        } else {
          break;
        }
        i = (i * 10 + c) - 48;
        c = get();
      }
      if (f) {
        i = - i;
      }
      dp -= i;
    }
  }
  e = 1.;
  i = dp;
  if (i < 0) {
    i = - i;
  }
  while (1) {
    tmp = i;
    i --;
    if (! tmp) {
      break;
    }
    e *= 10.;
  }
  if (dp < 0) {
    d *= e;
  } else {
    d /= e;
  }
  if (c == 124) {
    tmp___0 = getflt();
    return (d / tmp___0);
  }
  peekc = c;
  return (d);
}
}

int get(void) 
{ register int c ;

  {
  c = peekc;
  if (c) {
    peekc = 0;
    return (c);
  }
  c = _IO_getc(inp);
  if (c == -1) {
    if ((unsigned int )inp == (unsigned int )stdin) {
      printf((char const   */* __restrict  */)"\n");
      exit(0);
    }
    return (0);
  }
  return (c);
}
}

struct table *hash(char *name ) 
{ register struct table *tp ;
  register char *np ;
  register unsigned int h ;
  char *tmp ;
  int tmp___0 ;

  {
  h = 0U;
  np = name;
  while (*np) {
    tmp = np;
    np ++;
    h = (h * 57U + (unsigned int )*tmp) - 48U;
  }
  if ((int )h < 0) {
    h = (unsigned int )(- ((int )h));
  }
  h %= 1009U;
  tp = & table[h];
  l0: 
  if ((unsigned int )tp->name == (unsigned int )((char *)0)) {
    return (tp);
  }
  tmp___0 = equal(name, tp->name);
  if (tmp___0) {
    return (tp);
  }
  tp ++;
  if ((unsigned int )tp >= (unsigned int )(& table[1009])) {
    tp = table;
  }
  goto l0;
}
}

int fperr(void) 
{ 

  {
  signal(8, & fperr);
  fperrc ++;
  return (0);
}
}

