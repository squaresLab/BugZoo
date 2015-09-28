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

struct chain {
   struct chain *nextp ;
   char *datap ;
};

typedef int pacmac;

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

static char *sccsid   = (char *)"@(#)deroff.c\t7.1\tULTRIX\t7/23/92";

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

int wordflag  ;

int msflag  ;

int mac  ;

int disp  ;

int parag  ;

int inmacro  ;

int intable  ;

int keepblock  ;

char chars[128]  ;

char line[512]  ;

char *lp  ;

int c  ;

int pc  ;

int ldelim  ;

int rdelim  ;

int argc  ;

char **argv  ;

char fname[50]  ;

FILE *files[15]  ;

FILE **filesp  ;

FILE *infile  ;

FILE *opn(char *p ) ;

int fatal(char *s , char *p ) ;

int work(void) ;

int main(int ac , char **av ) 
{ register int i ;
  int errflg ;
  register int optchar ;
  int kflag ;
  char *p ;

  {
  errflg = 0;
  kflag = 0;
  wordflag = 0;
  msflag = 0;
  mac = 2;
  disp = 0;
  parag = 0;
  inmacro = 0;
  intable = 0;
  ldelim = -2;
  rdelim = -2;
  keepblock = 1;
  argc = ac - 1;
  argv = av + 1;
  while (1) {
    if (argc > 0) {
      if ((int )*(*(argv + 0) + 0) == 45) {
        if (! ((int )*(*(argv + 0) + 1) != 0)) {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    p = *(argv + 0) + 1;
    while (*p) {
      switch ((int )*p) {
      case 112: 
      parag = 1;
      break;
      case 107: 
      kflag = 1;
      break;
      case 119: 
      wordflag = 1;
      kflag = 1;
      break;
      case 109: 
      msflag = 1;
      keepblock = 0;
      switch ((int )*(p + 1)) {
      case 109: 
      mac = 1;
      p ++;
      break;
      case 115: 
      mac = 0;
      p ++;
      break;
      case 101: 
      mac = 2;
      p ++;
      break;
      case 97: 
      mac = 3;
      p ++;
      break;
      case 108: 
      disp = 1;
      p ++;
      break;
      default: 
      errflg ++;
      break;
      }
      break;
      default: 
      errflg ++;
      }
      p ++;
    }
    argc --;
    argv ++;
  }
  if (kflag) {
    keepblock = 1;
  }
  if (errflg) {
    fatal((char *)"usage: deroff [ -w ] [ -k] [ -m (a e m s l) ] [ file ] ... \n",
          (char *)((void *)0));
  }
  if (argc == 0) {
    infile = stdin;
  } else {
    infile = opn(*(argv + 0));
    argc --;
    argv ++;
  }
  files[0] = infile;
  filesp = files;
  i = 'a';
  while (i <= 122) {
    chars[i] = (char)4;
    i ++;
  }
  i = 'A';
  while (i <= 90) {
    chars[i] = (char)4;
    i ++;
  }
  i = '0';
  while (i <= 57) {
    chars[i] = (char)3;
    i ++;
  }
  chars['\''] = (char)1;
  chars['&'] = (char)1;
  chars['.'] = (char)2;
  chars[','] = (char)2;
  chars[';'] = (char)2;
  chars['?'] = (char)2;
  chars[':'] = (char)2;
  work();
  return (0);
}
}

extern char *calloc() ;

int eof(void) ;

int skeqn(void) 
{ 

  {
  while (1) {
    c = _IO_getc(infile);
    if (! (c != rdelim)) {
      break;
    }
    if (c == -1) {
      c = eof();
    } else {
      if (c == 34) {
        while (1) {
          c = _IO_getc(infile);
          if (! (c != 34)) {
            break;
          }
          if (c == -1) {
            c = eof();
          } else {
            if (c == 92) {
              c = _IO_getc(infile);
              if (c == -1) {
                c = eof();
              }
            }
          }
        }
      }
    }
  }
  if (msflag) {
    c = 'x';
    return (c);
  }
  c = ' ';
  return (c);
}
}

extern int exit() ;

FILE *opn(char *p ) 
{ FILE *fd ;

  {
  fd = fopen((char const   */* __restrict  */)((char const   *)p),
             (char const   */* __restrict  */)"r");
  if ((unsigned int )fd == (unsigned int )((void *)0)) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"Deroff: ");
    perror((char const   *)p);
    exit(1);
  }
  return (fd);
}
}

int eof(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  if ((unsigned int )infile != (unsigned int )stdin) {
    fclose(infile);
  }
  if ((unsigned int )filesp > (unsigned int )(files)) {
    filesp --;
    infile = *filesp;
  } else {
    if (argc > 0) {
      infile = opn(*(argv + 0));
      argc --;
      argv ++;
    } else {
      exit(0);
    }
  }
  c = _IO_getc(infile);
  if (c == -1) {
    tmp___2 = eof();
  } else {
    if (c == ldelim) {
      if ((unsigned int )filesp == (unsigned int )(files)) {
        tmp___2 = skeqn();
      } else {
        tmp___2 = c;
      }
    } else {
      tmp___2 = c;
    }
  }
  return (tmp___2);
}
}

int getfname(void) ;

static struct chain *namechain   = (struct chain *)((void *)0);

char *copys(char *s ) ;

extern int strcmp() ;

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
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___2 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___2 = skeqn();
        } else {
          tmp___2 = c;
        }
      } else {
        tmp___2 = c;
      }
    }
    if (! (tmp___2 == 32)) {
      break;
    }
  }
  p = fname;
  while (1) {
    *p = (char )c;
    if ((int )*p != 10) {
      if (c != 32) {
        if (c != 9) {
          if (! (c != 92)) {
            break;
          }
        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    c = _IO_getc(infile);
    if (c == -1) {
      eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          skeqn();
        }
      }
    }
    p ++;
  }
  *p = (char )'\000';
  while (c != 10) {
    c = _IO_getc(infile);
    if (c == -1) {
      eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          skeqn();
        }
      }
    }
  }
  q = namechain;
  while (q) {
    tmp___4 = strcmp(fname, q->datap);
    if (! tmp___4) {
      fname[0] = (char )'\000';
      return;
    }
    q = q->nextp;
  }
  tmp___5 = calloc(1, sizeof(*chainblock));
  q = (struct chain *)tmp___5;
  q->nextp = namechain;
  q->datap = copys(fname);
  namechain = q;
  return (0);
}
}

int fatal(char *s , char *p ) 
{ 

  {
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)"Deroff: ");
  fprintf((FILE */* __restrict  */)stderr,
          (char const   */* __restrict  */)((char const   *)s), p);
  exit(1);
}
}

int msputwords(int macline ) ;

int textline(char *str , int const_val ) 
{ 

  {
  if (wordflag) {
    msputwords(0);
    return;
  }
  puts((char const   *)str);
  return (0);
}
}

int comline(void) ;

int regline(int (*pfunc)() , int const_val ) ;

int work(void) 
{ 

  {
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          skeqn();
        }
      }
    }
    if (c == 46) {
      comline();
    } else {
      if (c == 39) {
        comline();
      } else {
        regline((int (*)())(& textline), 2);
      }
    }
  }
}
}

int backsl(void) ;

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
  line[0] = (char )c;
  lp = line;
  while (1) {
    if (c == 92) {
      *lp = (char )' ';
      backsl();
    }
    if (c == 10) {
      break;
    }
    if (intable) {
      if (c == 84) {
        lp ++;
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___2 = eof();
          *lp = (char )tmp___2;
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___4 = skeqn();
              *lp = (char )tmp___4;
            } else {
              *lp = (char )c;
            }
          } else {
            *lp = (char )c;
          }
        }
        if (c == 123) {
          goto _L;
        } else {
          if (c == 125) {
            _L: 
            *(lp + -1) = (char )' ';
            c = _IO_getc(infile);
            if (c == -1) {
              tmp___8 = eof();
              *lp = (char )tmp___8;
            } else {
              if (c == ldelim) {
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  tmp___10 = skeqn();
                  *lp = (char )tmp___10;
                } else {
                  *lp = (char )c;
                }
              } else {
                *lp = (char )c;
              }
            }
          }
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      lp ++;
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___14 = eof();
        *lp = (char )tmp___14;
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___16 = skeqn();
            *lp = (char )tmp___16;
          } else {
            *lp = (char )c;
          }
        } else {
          *lp = (char )c;
        }
      }
    }
  }
  *lp = (char )'\000';
  if ((int )line[0] != 0) {
    (*pfunc)(line, const_val);
  }
  return (0);
}
}

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
  if (msflag) {
    while (1) {
      while (1) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___2 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___2 = skeqn();
            } else {
              tmp___2 = c;
            }
          } else {
            tmp___2 = c;
          }
        }
        if (! (tmp___2 != 10)) {
          break;
        }
      }
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___7 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___7 = skeqn();
          } else {
            tmp___7 = c;
          }
        } else {
          tmp___7 = c;
        }
      }
      if (! (tmp___7 != 46)) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___12 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___12 = skeqn();
            } else {
              tmp___12 = c;
            }
          } else {
            tmp___12 = c;
          }
        }
        if (! (tmp___12 != 46)) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___17 = eof();
          } else {
            if (c == ldelim) {
              if ((unsigned int )filesp == (unsigned int )(files)) {
                tmp___17 = skeqn();
              } else {
                tmp___17 = c;
              }
            } else {
              tmp___17 = c;
            }
          }
          if (! (tmp___17 == 46)) {
            break;
          }
        }
      }
    }
    if (c != 10) {
      while (1) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___22 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___22 = skeqn();
            } else {
              tmp___22 = c;
            }
          } else {
            tmp___22 = c;
          }
        }
        if (! (tmp___22 != 10)) {
          break;
        }
      }
    }
    return;
  }
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___27 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___27 = skeqn();
        } else {
          tmp___27 = c;
        }
      } else {
        tmp___27 = c;
      }
    }
    if (! (tmp___27 != 10)) {
      break;
    }
  }
  inmacro = 1;
  return (0);
}
}

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
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___2 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___2 = skeqn();
        } else {
          tmp___2 = c;
        }
      } else {
        tmp___2 = c;
      }
    }
    if (! (tmp___2 != 46)) {
      break;
    }
  }
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___7 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___7 = skeqn();
        } else {
          tmp___7 = c;
        }
      } else {
        tmp___7 = c;
      }
    }
    if (! (tmp___7 != 10)) {
      break;
    }
  }
  intable = 1;
  return (0);
}
}

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
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___2 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___2 = skeqn();
        } else {
          tmp___2 = c;
        }
      } else {
        tmp___2 = c;
      }
    }
    if (! (tmp___2 != 46)) {
      break;
    }
  }
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___7 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___7 = skeqn();
        } else {
          tmp___7 = c;
        }
      } else {
        tmp___7 = c;
      }
    }
    if (! (tmp___7 != 10)) {
      break;
    }
  }
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___12 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___12 = skeqn();
        } else {
          tmp___12 = c;
        }
      } else {
        tmp___12 = c;
      }
    }
    if (! (tmp___12 != 10)) {
      break;
    }
  }
  pc = c;
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___17 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___17 = skeqn();
        } else {
          tmp___17 = c;
        }
      } else {
        tmp___17 = c;
      }
    }
    if (! (tmp___17 != 46)) {
      if (! (pc != 10)) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___22 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___22 = skeqn();
            } else {
              tmp___22 = c;
            }
          } else {
            tmp___22 = c;
          }
        }
        if (! (tmp___22 > 90)) {
          break;
        }
      }
    }
    pc = c;
  }
  if (c != 84) {
    goto _L;
  } else {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___47 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___47 = skeqn();
        } else {
          tmp___47 = c;
        }
      } else {
        tmp___47 = c;
      }
    }
    if (tmp___47 != 69) {
      _L: 
      while (1) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___27 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___27 = skeqn();
            } else {
              tmp___27 = c;
            }
          } else {
            tmp___27 = c;
          }
        }
        if (! (tmp___27 != 10)) {
          break;
        }
      }
      pc = c;
      while (1) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___32 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___32 = skeqn();
            } else {
              tmp___32 = c;
            }
          } else {
            tmp___32 = c;
          }
        }
        if (! (tmp___32 != 46)) {
          if (! (pc != 10)) {
            c = _IO_getc(infile);
            if (c == -1) {
              tmp___37 = eof();
            } else {
              if (c == ldelim) {
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  tmp___37 = skeqn();
                } else {
                  tmp___37 = c;
                }
              } else {
                tmp___37 = c;
              }
            }
            if (! (tmp___37 != 84)) {
              c = _IO_getc(infile);
              if (c == -1) {
                tmp___42 = eof();
              } else {
                if (c == ldelim) {
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    tmp___42 = skeqn();
                  } else {
                    tmp___42 = c;
                  }
                } else {
                  tmp___42 = c;
                }
              }
              if (! (tmp___42 != 69)) {
                break;
              }
            }
          }
        }
        pc = c;
      }
    }
  }
  return (0);
}
}

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
  last = (char)0;
  dflg = 1;
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___2 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___2 = skeqn();
        } else {
          tmp___2 = c;
        }
      } else {
        tmp___2 = c;
      }
    }
    if (! (tmp___2 != 10)) {
      break;
    }
  }
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___27 = eof();
    } else {
      tmp___27 = c;
    }
    if (tmp___27 == 46) {
      goto _L;
    } else {
      if (c == 39) {
        _L: 
        while (1) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___5 = eof();
          } else {
            tmp___5 = c;
          }
          if (! (tmp___5 == 32)) {
            if (! (c == 9)) {
              break;
            }
          }
        }
        if (c == 69) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___12 = eof();
          } else {
            tmp___12 = c;
          }
          if (tmp___12 == 78) {
            while (1) {
              c = _IO_getc(infile);
              if (c == -1) {
                tmp___9 = eof();
              } else {
                if (c == ldelim) {
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    tmp___9 = skeqn();
                  } else {
                    tmp___9 = c;
                  }
                } else {
                  tmp___9 = c;
                }
              }
              if (! (tmp___9 != 10)) {
                break;
              }
            }
            if (msflag) {
              if (dflg) {
                putchar('x');
                putchar(' ');
                if (last) {
                  putchar((int )last);
                  putchar('\n');
                }
              }
            }
            return;
          }
        }
      } else {
        if (c == 100) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___23 = eof();
          } else {
            tmp___23 = c;
          }
          if (tmp___23 == 101) {
            c = _IO_getc(infile);
            if (c == -1) {
              tmp___25 = eof();
            } else {
              tmp___25 = c;
            }
            if (tmp___25 == 108) {
              c = _IO_getc(infile);
              if (c == -1) {
                tmp___19 = eof();
              } else {
                tmp___19 = c;
              }
              if (tmp___19 == 105) {
                c = _IO_getc(infile);
                if (c == -1) {
                  tmp___21 = eof();
                } else {
                  tmp___21 = c;
                }
                if (tmp___21 == 109) {
                  while (1) {
                    c = _IO_getc(infile);
                    if (c == -1) {
                      tmp___14 = eof();
                    } else {
                      tmp___14 = c;
                    }
                    if (! (tmp___14 == 32)) {
                      break;
                    }
                  }
                  c1 = c;
                  if (c1 == 10) {
                    ldelim = -2;
                    rdelim = -2;
                  } else {
                    c = _IO_getc(infile);
                    if (c == -1) {
                      c2 = eof();
                    } else {
                      c2 = c;
                    }
                    if (c2 == 10) {
                      ldelim = -2;
                      rdelim = -2;
                    } else {
                      if (c1 == 111) {
                        if (c2 == 102) {
                          c = _IO_getc(infile);
                          if (c == -1) {
                            tmp___17 = eof();
                          } else {
                            tmp___17 = c;
                          }
                          if (tmp___17 == 102) {
                            ldelim = -2;
                            rdelim = -2;
                          } else {
                            ldelim = c1;
                            rdelim = c2;
                          }
                        } else {
                          ldelim = c1;
                          rdelim = c2;
                        }
                      } else {
                        ldelim = c1;
                        rdelim = c2;
                      }
                    }
                  }
                }
              }
            }
          }
          dflg = 0;
        }
      }
    }
    if (c != 10) {
      while (1) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___29 = eof();
        } else {
          tmp___29 = c;
        }
        if (! (tmp___29 != 10)) {
          break;
        }
        if ((int )chars[c] == 2) {
          last = (char )c;
        } else {
          if (c != 32) {
            last = (char)0;
          }
        }
      }
    }
  }
}
}

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
  c = _IO_getc(infile);
  if (c == -1) {
    tmp___2 = eof();
  } else {
    if (c == ldelim) {
      if ((unsigned int )filesp == (unsigned int )(files)) {
        tmp___2 = skeqn();
      } else {
        tmp___2 = c;
      }
    } else {
      tmp___2 = c;
    }
  }
  switch (tmp___2) {
  case 34: 
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___7 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___7 = skeqn();
        } else {
          tmp___7 = c;
        }
      } else {
        tmp___7 = c;
      }
    }
    if (! (tmp___7 != 10)) {
      break;
    }
  }
  return;
  case 115: 
  c = _IO_getc(infile);
  if (c == -1) {
    tmp___17 = eof();
  } else {
    if (c == ldelim) {
      if ((unsigned int )filesp == (unsigned int )(files)) {
        tmp___17 = skeqn();
      } else {
        tmp___17 = c;
      }
    } else {
      tmp___17 = c;
    }
  }
  if (tmp___17 == 92) {
    backsl();
  } else {
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___12 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___12 = skeqn();
          } else {
            tmp___12 = c;
          }
        } else {
          tmp___12 = c;
        }
      }
      if (tmp___12 >= 48) {
        if (! (c <= 57)) {
          break;
        }
      } else {
        break;
      }
    }
    ungetc(c, infile);
    c = '0';
  }
  lp --;
  return;
  case 102: 
  case 110: 
  case 42: 
  c = _IO_getc(infile);
  if (c == -1) {
    tmp___22 = eof();
  } else {
    if (c == ldelim) {
      if ((unsigned int )filesp == (unsigned int )(files)) {
        tmp___22 = skeqn();
      } else {
        tmp___22 = c;
      }
    } else {
      tmp___22 = c;
    }
  }
  if (tmp___22 != 40) {
    return;
  }
  case 40: 
  if (msflag) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___32 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___32 = skeqn();
        } else {
          tmp___32 = c;
        }
      } else {
        tmp___32 = c;
      }
    }
    if (tmp___32 == 101) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___27 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___27 = skeqn();
          } else {
            tmp___27 = c;
          }
        } else {
          tmp___27 = c;
        }
      }
      if (tmp___27 == 109) {
        *lp = (char )'-';
        return;
      }
    } else {
      if (c != 10) {
        c = _IO_getc(infile);
        if (c == -1) {
          eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              skeqn();
            }
          }
        }
      }
    }
    return;
  }
  c = _IO_getc(infile);
  if (c == -1) {
    tmp___37 = eof();
  } else {
    if (c == ldelim) {
      if ((unsigned int )filesp == (unsigned int )(files)) {
        tmp___37 = skeqn();
      } else {
        tmp___37 = c;
      }
    } else {
      tmp___37 = c;
    }
  }
  if (tmp___37 != 10) {
    c = _IO_getc(infile);
    if (c == -1) {
      eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          skeqn();
        }
      }
    }
  }
  return;
  case 36: 
  c = _IO_getc(infile);
  if (c == -1) {
    eof();
  } else {
    if (c == ldelim) {
      if ((unsigned int )filesp == (unsigned int )(files)) {
        skeqn();
      }
    }
  }
  return;
  case 98: 
  case 120: 
  case 118: 
  case 104: 
  case 119: 
  case 111: 
  case 108: 
  case 76: 
  c = _IO_getc(infile);
  if (c == -1) {
    bdelim = eof();
  } else {
    if (c == ldelim) {
      if ((unsigned int )filesp == (unsigned int )(files)) {
        bdelim = skeqn();
      } else {
        bdelim = c;
      }
    }
  }
  if (bdelim == 10) {
    return;
  }
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___46 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___46 = skeqn();
        } else {
          tmp___46 = c;
        }
      } else {
        tmp___46 = c;
      }
    }
    if (tmp___46 != 10) {
      if (! (c != bdelim)) {
        break;
      }
    } else {
      break;
    }
    if (c == 92) {
      backsl();
    }
  }
  return;
  case 92: 
  if (inmacro) {
    goto sw;
  }
  default: ;
  return;
  }
}
}

extern int strlen() ;

char *copys(char *s ) 
{ register char *t ;
  register char *t0 ;
  int tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  tmp = strlen(s);
  t = calloc((unsigned int )(tmp + 1), sizeof(*t));
  t0 = t;
  if ((unsigned int )t0 == (unsigned int )((void *)0)) {
    fatal((char *)"Cannot allocate memory", (char *)((void *)0));
  }
  while (1) {
    tmp___0 = t;
    t ++;
    tmp___1 = s;
    s ++;
    *tmp___0 = *tmp___1;
    if (! *tmp___0) {
      break;
    }
  }
  return (t0);
}
}

extern int atoi() ;

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
  ap = a;
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___7 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___7 = skeqn();
        } else {
          tmp___7 = c;
        }
      } else {
        tmp___7 = c;
      }
    }
    if (! (tmp___7 != 10)) {
      break;
    }
    *ap = (char )c;
    if ((unsigned int )ap == (unsigned int )(& a[9])) {
      while (1) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___2 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___2 = skeqn();
            } else {
              tmp___2 = c;
            }
          } else {
            tmp___2 = c;
          }
        }
        if (! (tmp___2 != 10)) {
          break;
        }
      }
      ap = a;
      break;
    }
    ap ++;
  }
  if ((unsigned int )ap != (unsigned int )(a)) {
    n = atoi(a);
  } else {
    n = 1;
  }
  i = 0;
  while (i < n) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___62 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___62 = skeqn();
        } else {
          tmp___62 = c;
        }
      } else {
        tmp___62 = c;
      }
    }
    if (tmp___62 == 46) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___52 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___52 = skeqn();
          } else {
            tmp___52 = c;
          }
        } else {
          tmp___52 = c;
        }
      }
      if (tmp___52 == 99) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___32 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___32 = skeqn();
            } else {
              tmp___32 = c;
            }
          } else {
            tmp___32 = c;
          }
        }
        if (tmp___32 == 101) {
          while (1) {
            c = _IO_getc(infile);
            if (c == -1) {
              tmp___12 = eof();
            } else {
              if (c == ldelim) {
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  tmp___12 = skeqn();
                } else {
                  tmp___12 = c;
                }
              } else {
                tmp___12 = c;
              }
            }
            if (! (tmp___12 == 32)) {
              break;
            }
          }
          if (c == 48) {
            while (1) {
              c = _IO_getc(infile);
              if (c == -1) {
                tmp___17 = eof();
              } else {
                if (c == ldelim) {
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    tmp___17 = skeqn();
                  } else {
                    tmp___17 = c;
                  }
                } else {
                  tmp___17 = c;
                }
              }
              if (! (tmp___17 != 10)) {
                break;
              }
            }
            break;
          } else {
            while (1) {
              c = _IO_getc(infile);
              if (c == -1) {
                tmp___22 = eof();
              } else {
                if (c == ldelim) {
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    tmp___22 = skeqn();
                  } else {
                    tmp___22 = c;
                  }
                } else {
                  tmp___22 = c;
                }
              }
              if (! (tmp___22 != 10)) {
                break;
              }
            }
          }
        } else {
          while (1) {
            c = _IO_getc(infile);
            if (c == -1) {
              tmp___27 = eof();
            } else {
              if (c == ldelim) {
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  tmp___27 = skeqn();
                } else {
                  tmp___27 = c;
                }
              } else {
                tmp___27 = c;
              }
            }
            if (! (tmp___27 != 10)) {
              break;
            }
          }
        }
      } else {
        if (c == 80) {
          goto _L;
        } else {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___47 = eof();
          } else {
            if (c == ldelim) {
              if ((unsigned int )filesp == (unsigned int )(files)) {
                tmp___47 = skeqn();
              } else {
                tmp___47 = c;
              }
            } else {
              tmp___47 = c;
            }
          }
          if (tmp___47 == 80) {
            _L: 
            if (c != 10) {
              while (1) {
                c = _IO_getc(infile);
                if (c == -1) {
                  tmp___37 = eof();
                } else {
                  if (c == ldelim) {
                    if ((unsigned int )filesp == (unsigned int )(files)) {
                      tmp___37 = skeqn();
                    } else {
                      tmp___37 = c;
                    }
                  } else {
                    tmp___37 = c;
                  }
                }
                if (! (tmp___37 != 10)) {
                  break;
                }
              }
            }
            break;
          } else {
            if (c != 10) {
              while (1) {
                c = _IO_getc(infile);
                if (c == -1) {
                  tmp___42 = eof();
                } else {
                  if (c == ldelim) {
                    if ((unsigned int )filesp == (unsigned int )(files)) {
                      tmp___42 = skeqn();
                    } else {
                      tmp___42 = c;
                    }
                  } else {
                    tmp___42 = c;
                  }
                }
                if (! (tmp___42 != 10)) {
                  break;
                }
              }
            }
          }
        }
      }
    } else {
      while (1) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___57 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___57 = skeqn();
            } else {
              tmp___57 = c;
            }
          } else {
            tmp___57 = c;
          }
        }
        if (! (tmp___57 != 10)) {
          break;
        }
      }
      i ++;
    }
  }
  return (0);
}
}

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
  if (c1 != 10) {
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___2 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___2 = skeqn();
          } else {
            tmp___2 = c;
          }
        } else {
          tmp___2 = c;
        }
      }
      if (! (tmp___2 != 10)) {
        break;
      }
    }
  }
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___27 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___27 = skeqn();
        } else {
          tmp___27 = c;
        }
      } else {
        tmp___27 = c;
      }
    }
    if (tmp___27 != 46) {
      while (1) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___7 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___7 = skeqn();
            } else {
              tmp___7 = c;
            }
          } else {
            tmp___7 = c;
          }
        }
        if (! (tmp___7 != 10)) {
          break;
        }
      }
    } else {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___22 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___22 = skeqn();
          } else {
            tmp___22 = c;
          }
        } else {
          tmp___22 = c;
        }
      }
      if (tmp___22 != 93) {
        while (1) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___12 = eof();
          } else {
            if (c == ldelim) {
              if ((unsigned int )filesp == (unsigned int )(files)) {
                tmp___12 = skeqn();
              } else {
                tmp___12 = c;
              }
            } else {
              tmp___12 = c;
            }
          }
          if (! (tmp___12 != 10)) {
            break;
          }
        }
      } else {
        while (1) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___17 = eof();
          } else {
            if (c == ldelim) {
              if ((unsigned int )filesp == (unsigned int )(files)) {
                tmp___17 = skeqn();
              } else {
                tmp___17 = c;
              }
            } else {
              tmp___17 = c;
            }
          }
          if (! (tmp___17 != 10)) {
            break;
          }
          c2 = c;
        }
        if ((int )chars[c2] == 2) {
          putchar(c2);
        }
        return;
      }
    }
  }
}
}

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
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___2 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___2 = skeqn();
        } else {
          tmp___2 = c;
        }
      } else {
        tmp___2 = c;
      }
    }
    if (! (tmp___2 != 10)) {
      break;
    }
  }
  p1 = line;
  c = '\n';
  while (1) {
    c1 = c;
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___44 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___44 = skeqn();
        } else {
          tmp___44 = c;
        }
      } else {
        tmp___44 = c;
      }
    }
    if (tmp___44 == 46) {
      if (c1 == 10) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___12 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___12 = skeqn();
            } else {
              tmp___12 = c;
            }
          } else {
            tmp___12 = c;
          }
        }
        if (tmp___12 != 80) {
          if (c == 10) {
            continue;
          } else {
            while (1) {
              c = _IO_getc(infile);
              if (c == -1) {
                tmp___7 = eof();
              } else {
                if (c == ldelim) {
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    tmp___7 = skeqn();
                  } else {
                    tmp___7 = c;
                  }
                } else {
                  tmp___7 = c;
                }
              }
              if (! (tmp___7 != 10)) {
                break;
              }
            }
            c = '\n';
            continue;
          }
        }
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___22 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___22 = skeqn();
            } else {
              tmp___22 = c;
            }
          } else {
            tmp___22 = c;
          }
        }
        if (tmp___22 != 69) {
          if (c == 10) {
            continue;
          } else {
            while (1) {
              c = _IO_getc(infile);
              if (c == -1) {
                tmp___17 = eof();
              } else {
                if (c == ldelim) {
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    tmp___17 = skeqn();
                  } else {
                    tmp___17 = c;
                  }
                } else {
                  tmp___17 = c;
                }
              }
              if (! (tmp___17 != 10)) {
                break;
              }
            }
            c = '\n';
            continue;
          }
        }
        while (1) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___27 = eof();
          } else {
            if (c == ldelim) {
              if ((unsigned int )filesp == (unsigned int )(files)) {
                tmp___27 = skeqn();
              } else {
                tmp___27 = c;
              }
            } else {
              tmp___27 = c;
            }
          }
          if (! (tmp___27 != 10)) {
            break;
          }
        }
        return;
      } else {
        goto _L;
      }
    } else {
      _L: 
      if (c == 34) {
        while (1) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___38 = eof();
          } else {
            if (c == ldelim) {
              if ((unsigned int )filesp == (unsigned int )(files)) {
                tmp___38 = skeqn();
              } else {
                tmp___38 = c;
              }
            } else {
              tmp___38 = c;
            }
          }
          if (! (tmp___38 != 34)) {
            break;
          }
          if (c == 92) {
            c = _IO_getc(infile);
            if (c == -1) {
              tmp___32 = eof();
            } else {
              if (c == ldelim) {
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  tmp___32 = skeqn();
                } else {
                  tmp___32 = c;
                }
              } else {
                tmp___32 = c;
              }
            }
            if (tmp___32 == 34) {
              continue;
            }
            ungetc(c, infile);
            backsl();
          } else {
            tmp___34 = p1;
            p1 ++;
            *tmp___34 = (char )c;
          }
        }
        tmp___40 = p1;
        p1 ++;
        *tmp___40 = (char )' ';
      } else {
        if (c == 10) {
          if ((unsigned int )p1 != (unsigned int )(line)) {
            *p1 = (char )'\000';
            if (wordflag) {
              msputwords(0);
            } else {
              puts((char const   *)(line));
              putchar('\n');
            }
            p1 = line;
          }
        }
      }
    }
  }
}
}

int argconcat   = 0;

struct mactab troffmactab[11] ;

struct mactab ppmactab[7] ;

struct mactab msmactab[17] ;

struct mactab mmmactab[5] ;

struct mactab memactab[23] ;

struct mactab manmactab[10] ;

int msputmac(char *s , int const_val ) 
{ register char *t ;
  register int found ;
  int last ;
  char *tmp ;
  char *tmp___0 ;
  char *tmp___1 ;

  {
  found = 0;
  if (wordflag) {
    msputwords(1);
    return;
  }
  while (*s) {
    while (1) {
      if (! ((int )*s == 32)) {
        if (! ((int )*s == 9)) {
          break;
        }
      }
      tmp = s;
      s ++;
      putchar((int )*tmp);
    }
    t = s;
    while (1) {
      if ((int )*t != 32) {
        if ((int )*t != 9) {
          if (! ((int )*t != 0)) {
            break;
          }
        } else {
          break;
        }
      } else {
        break;
      }
      t ++;
    }
    if ((int )*s == 34) {
      s ++;
    }
    if ((unsigned int )t > (unsigned int )(s + const_val)) {
      if ((int )chars[*(s + 0)] == 4) {
        if ((int )chars[*(s + 1)] == 4) {
          while ((unsigned int )s < (unsigned int )t) {
            if ((int )*s == 34) {
              s ++;
            } else {
              tmp___0 = s;
              s ++;
              putchar((int )*tmp___0);
            }
          }
          last = (int )*(t - 1);
          found ++;
        } else {
          goto _L___0;
        }
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      _L: 
      if (found) {
        if ((int )chars[*(s + 0)] == 2) {
          if ((int )*(s + 1) == 0) {
            tmp___1 = s;
            s ++;
            putchar((int )*tmp___1);
          } else {
            last = (int )*(t - 1);
            s = t;
          }
        } else {
          last = (int )*(t - 1);
          s = t;
        }
      } else {
        last = (int )*(t - 1);
        s = t;
      }
    }
  }
  putchar('\n');
  if (msflag) {
    if ((int )chars[last] == 2) {
      putchar(last);
      putchar('\n');
    }
  }
  return (0);
}
}

int msputwords(int macline ) 
{ register char *p ;
  register char *p1 ;
  int i ;
  int nlet ;
  char *tmp ;
  char *tmp___0 ;

  {
  p1 = line;
  while (1) {
    while ((int )chars[*p1] < 3) {
      tmp = p1;
      p1 ++;
      if ((int )*tmp == 0) {
        return;
      }
    }
    nlet = 0;
    p = p1;
    while (1) {
      i = (int )chars[*p];
      if (! (i != 0)) {
        break;
      }
      if (i == 4) {
        nlet ++;
      }
      p ++;
    }
    if (macline) {
      if (nlet > 1) {
        goto _L;
      } else {
        goto _L___0;
      }
    } else {
      _L___0: 
      if (! macline) {
        if (nlet > 2) {
          if ((int )chars[*(p1 + 0)] == 4) {
            if ((int )chars[*(p1 + 1)] == 4) {
              _L: 
              while (1) {
                if (! ((int )*(p + -1) == 39)) {
                  if (! ((int )*(p + -1) == 38)) {
                    if (! ((int )chars[*(p + -1)] == 2)) {
                      break;
                    }
                  }
                }
                p --;
              }
              while ((unsigned int )p1 < (unsigned int )p) {
                tmp___0 = p1;
                p1 ++;
                putchar((int )*tmp___0);
              }
              putchar('\n');
            } else {
              p1 = p;
            }
          } else {
            p1 = p;
          }
        } else {
          p1 = p;
        }
      } else {
        p1 = p;
      }
    }
  }
}
}

int meputwords(int macline ) ;

extern int strcpy() ;

int meputmac(char *cp , int const_val ) 
{ register char *np ;
  int found ;
  int argno ;
  int last ;
  int inquote ;

  {
  if (wordflag) {
    meputwords(1);
    return;
  }
  argno = 0;
  while (*cp) {
    while (1) {
      if (! ((int )*cp == 32)) {
        if (! ((int )*cp == 9)) {
          break;
        }
      }
      cp ++;
    }
    inquote = (int )*cp == 34;
    if (inquote) {
      cp ++;
    }
    np = cp;
    while (*np) {
      switch ((int )*np) {
      case 10: 
      case 0: 
      break;
      case 9: 
      case 32: 
      if (inquote) {
        goto __Cont;
      } else {
        goto endarg;
      }
      case 34: 
      if (inquote) {
        if ((int )*(np + 1) == 34) {
          strcpy(np, np + 1);
          np ++;
          goto __Cont;
        } else {
          *np = (char )' ';
          goto endarg;
        }
      } else {
        *np = (char )' ';
        goto endarg;
      }
      default: ;
      goto __Cont;
      }
      __Cont: 
      np ++;
    }
    endarg: ;
    if (argconcat == 0) {
      putchar(' ');
    } else {
      if (argconcat != argno) {
        putchar(' ');
      }
    }
    if (np - cp > const_val) {
      if (inquote) {
        goto _L___0;
      } else {
        if ((int )chars[*(cp + 0)] == 4) {
          _L___0: 
          cp = cp;
          while ((unsigned int )cp < (unsigned int )np) {
            putchar((int )*cp);
            cp ++;
          }
          last = (int )*(np + -1);
          found ++;
        } else {
          goto _L;
        }
      }
    } else {
      _L: 
      if (found) {
        if (np - cp == 1) {
          if ((int )chars[*cp] == 2) {
            putchar((int )*cp);
          } else {
            last = (int )*(np + -1);
          }
        } else {
          last = (int )*(np + -1);
        }
      } else {
        last = (int )*(np + -1);
      }
    }
    cp = np;
    argno ++;
  }
  if (msflag) {
    if ((int )chars[last] == 2) {
      putchar(last);
    }
  }
  putchar('\n');
  return (0);
}
}

int meputwords(int macline ) 
{ 

  {
  msputwords(macline);
  return (0);
}
}

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
  lct = 0;
  eqnf = 1;
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___2 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___2 = skeqn();
        } else {
          tmp___2 = c;
        }
      } else {
        tmp___2 = c;
      }
    }
    if (! (tmp___2 != 10)) {
      break;
    }
  }
  while (1) {
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___12 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___12 = skeqn();
          } else {
            tmp___12 = c;
          }
        } else {
          tmp___12 = c;
        }
      }
      if (! (tmp___12 != 46)) {
        break;
      }
      if (c == 10) {
        continue;
      } else {
        while (1) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___7 = eof();
          } else {
            if (c == ldelim) {
              if ((unsigned int )filesp == (unsigned int )(files)) {
                tmp___7 = skeqn();
              } else {
                tmp___7 = c;
              }
            } else {
              tmp___7 = c;
            }
          }
          if (! (tmp___7 != 10)) {
            break;
          }
        }
      }
    }
    c = _IO_getc(infile);
    if (c == -1) {
      c1 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          c1 = skeqn();
        } else {
          c1 = c;
        }
      } else {
        c1 = c;
      }
    }
    if (c1 == 10) {
      continue;
    }
    c = _IO_getc(infile);
    if (c == -1) {
      c2 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          c2 = skeqn();
        } else {
          c2 = c;
        }
      } else {
        c2 = c;
      }
    }
    if (c2 == 10) {
      continue;
    }
    if (c1 == (int )a1) {
      if (c2 == (int )a2) {
        while (1) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___25 = eof();
          } else {
            if (c == ldelim) {
              if ((unsigned int )filesp == (unsigned int )(files)) {
                tmp___25 = skeqn();
              } else {
                tmp___25 = c;
              }
            } else {
              tmp___25 = c;
            }
          }
          if (! (tmp___25 != 10)) {
            break;
          }
        }
        if (lct != 0) {
          lct --;
          continue;
        }
        if (eqnf) {
          putchar('.');
        }
        putchar('\n');
        return;
      } else {
        goto _L___5;
      }
    } else {
      _L___5: 
      if ((int )a1 == 76) {
        if (c2 == 76) {
          lct ++;
          while (1) {
            c = _IO_getc(infile);
            if (c == -1) {
              tmp___30 = eof();
            } else {
              if (c == ldelim) {
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  tmp___30 = skeqn();
                } else {
                  tmp___30 = c;
                }
              } else {
                tmp___30 = c;
              }
            }
            if (! (tmp___30 != 10)) {
              break;
            }
          }
        } else {
          goto _L___4;
        }
      } else {
        _L___4: 
        if (c1 == 69) {
          if (c2 == 81) {
            if (mac == 2) {
              if ((int )a1 == 41) {
                eqn();
                eqnf = 0;
              } else {
                goto _L;
              }
            } else {
              _L: 
              if (mac != 2) {
                if ((int )a1 == 68) {
                  eqn();
                  eqnf = 0;
                }
              }
            }
          } else {
            goto _L___3;
          }
        } else {
          _L___3: 
          if ((int )a1 == 102) {
            if (mac == 2) {
              if (c2 == 104) {
                goto _L___1;
              } else {
                if (c2 == 112) {
                  goto _L___1;
                } else {
                  goto _L___2;
                }
              }
            } else {
              _L___2: 
              if (mac != 2) {
                if (c1 == 80) {
                  goto _L___1;
                } else {
                  if (c2 == 80) {
                    _L___1: 
                    _L___0: 
                    while (1) {
                      c = _IO_getc(infile);
                      if (c == -1) {
                        tmp___35 = eof();
                      } else {
                        if (c == ldelim) {
                          if ((unsigned int )filesp == (unsigned int )(files)) {
                            tmp___35 = skeqn();
                          } else {
                            tmp___35 = c;
                          }
                        } else {
                          tmp___35 = c;
                        }
                      }
                      if (! (tmp___35 != 10)) {
                        break;
                      }
                    }
                    return;
                  }
                }
              }
            }
          } else {
            while (1) {
              c = _IO_getc(infile);
              if (c == -1) {
                tmp___40 = eof();
              } else {
                if (c == ldelim) {
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    tmp___40 = skeqn();
                  } else {
                    tmp___40 = c;
                  }
                } else {
                  tmp___40 = c;
                }
              }
              if (! (tmp___40 != 10)) {
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

int EQ(void) 
{ 

  {
  eqn();
  return (0);
}
}

int domacro(void) 
{ 

  {
  macro();
  return (0);
}
}

int PS(void) 
{ 

  {
  if (! msflag) {
    inpic();
  } else {
    noblock((char )'P', (char )'E');
  }
  return (0);
}
}

int skip(void) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___2 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___2 = skeqn();
        } else {
          tmp___2 = c;
        }
      } else {
        tmp___2 = c;
      }
    }
    if (! (tmp___2 != 10)) {
      break;
    }
  }
  return (0);
}
}

int intbl(void) 
{ 

  {
  if (msflag) {
    stbl();
  } else {
    tbl();
  }
  return (0);
}
}

int outtbl(void) 
{ 

  {
  intable = 0;
  return (0);
}
}

int so(void) 
{ 

  {
  getfname();
  if (fname[0]) {
    filesp ++;
    *filesp = opn(fname);
    infile = *filesp;
  }
  return (0);
}
}

int nx(void) 
{ 

  {
  getfname();
  if ((int )fname[0] == 0) {
    exit(0);
  }
  if ((unsigned int )infile != (unsigned int )stdin) {
    fclose(infile);
  }
  *filesp = opn(fname);
  infile = *filesp;
  return (0);
}
}

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
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___2 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___2 = skeqn();
        } else {
          tmp___2 = c;
        }
      } else {
        tmp___2 = c;
      }
    }
    if (! (tmp___2 != 10)) {
      break;
    }
  }
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___7 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___7 = skeqn();
        } else {
          tmp___7 = c;
        }
      } else {
        tmp___7 = c;
      }
    }
    if (! (tmp___7 != 10)) {
      break;
    }
  }
  pc = c;
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___12 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___12 = skeqn();
        } else {
          tmp___12 = c;
        }
      } else {
        tmp___12 = c;
      }
    }
    if (! (tmp___12 != 46)) {
      if (! (pc != 10)) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___17 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___17 = skeqn();
            } else {
              tmp___17 = c;
            }
          } else {
            tmp___17 = c;
          }
        }
        if (! (tmp___17 > 90)) {
          break;
        }
      }
    }
    pc = c;
  }
  return (1);
}
}

int PP(pacmac c12 ) 
{ int c1 ;
  int c2 ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  c1 = (c12 >> 8) & 255;
  c2 = c12 & 255;
  printf((char const   */* __restrict  */)".%c%c", c1, c2);
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___2 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___2 = skeqn();
        } else {
          tmp___2 = c;
        }
      } else {
        tmp___2 = c;
      }
    }
    if (! (tmp___2 != 10)) {
      break;
    }
    putchar(c);
  }
  putchar('\n');
  return (0);
}
}

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
  if (mac == 1) {
    return (0);
  } else {
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___2 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___2 = skeqn();
          } else {
            tmp___2 = c;
          }
        } else {
          tmp___2 = c;
        }
      }
      if (! (tmp___2 != 10)) {
        break;
      }
    }
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___7 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___7 = skeqn();
          } else {
            tmp___7 = c;
          }
        } else {
          tmp___7 = c;
        }
      }
      if (! (tmp___7 != 10)) {
        break;
      }
    }
    pc = c;
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___12 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___12 = skeqn();
          } else {
            tmp___12 = c;
          }
        } else {
          tmp___12 = c;
        }
      }
      if (! (tmp___12 != 46)) {
        if (! (pc != 10)) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___17 = eof();
          } else {
            if (c == ldelim) {
              if ((unsigned int )filesp == (unsigned int )(files)) {
                tmp___17 = skeqn();
              } else {
                tmp___17 = c;
              }
            } else {
              tmp___17 = c;
            }
          }
          if (! (tmp___17 > 90)) {
            break;
          }
        }
      }
      pc = c;
    }
    return (1);
  }
}
}

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
  c1 = (c12 >> 8) & 255;
  c2 = c12 & 255;
  if (parag) {
    printf((char const   */* __restrict  */)".%c%c", c1, c2);
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___2 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___2 = skeqn();
          } else {
            tmp___2 = c;
          }
        } else {
          tmp___2 = c;
        }
      }
      if (! (tmp___2 != 10)) {
        break;
      }
      putchar(c);
    }
    putchar(c);
    putchar('!');
    while (1) {
      while (1) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___7 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___7 = skeqn();
            } else {
              tmp___7 = c;
            }
          } else {
            tmp___7 = c;
          }
        }
        if (! (tmp___7 != 10)) {
          break;
        }
        putchar(c);
      }
      putchar('\n');
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___12 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___12 = skeqn();
          } else {
            tmp___12 = c;
          }
        } else {
          tmp___12 = c;
        }
      }
      if (tmp___12 == 46) {
        return (2);
      }
      putchar('!');
      putchar(c);
    }
  } else {
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___17 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___17 = skeqn();
          } else {
            tmp___17 = c;
          }
        } else {
          tmp___17 = c;
        }
      }
      if (! (tmp___17 != 10)) {
        break;
      }
    }
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___22 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___22 = skeqn();
          } else {
            tmp___22 = c;
          }
        } else {
          tmp___22 = c;
        }
      }
      if (! (tmp___22 != 10)) {
        break;
      }
    }
    pc = c;
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___27 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___27 = skeqn();
          } else {
            tmp___27 = c;
          }
        } else {
          tmp___27 = c;
        }
      }
      if (! (tmp___27 != 46)) {
        if (! (pc != 10)) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___32 = eof();
          } else {
            if (c == ldelim) {
              if ((unsigned int )filesp == (unsigned int )(files)) {
                tmp___32 = skeqn();
              } else {
                tmp___32 = c;
              }
            } else {
              tmp___32 = c;
            }
          }
          if (! (tmp___32 > 90)) {
            break;
          }
        }
      }
      pc = c;
    }
    return (1);
  }
}
}

int UX(void) 
{ 

  {
  if (wordflag) {
    printf((char const   */* __restrict  */)"UNIX\n");
  } else {
    printf((char const   */* __restrict  */)"UNIX ");
  }
  return (0);
}
}

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
  c1 = (c12 >> 8) & 255;
  c2 = c12 & 255;
  if (parag) {
    printf((char const   */* __restrict  */)".%c%c", c1, c2);
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___2 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___2 = skeqn();
          } else {
            tmp___2 = c;
          }
        } else {
          tmp___2 = c;
        }
      }
      if (! (tmp___2 != 10)) {
        break;
      }
      putchar(c);
    }
    putchar('\n');
  } else {
    while (1) {
      c = _IO_getc(infile);
      if (c == -1) {
        tmp___7 = eof();
      } else {
        if (c == ldelim) {
          if ((unsigned int )filesp == (unsigned int )(files)) {
            tmp___7 = skeqn();
          } else {
            tmp___7 = c;
          }
        } else {
          tmp___7 = c;
        }
      }
      if (! (tmp___7 != 10)) {
        break;
      }
    }
  }
  return (0);
}
}

int mesnblock(pacmac c12 ) 
{ int c1 ;
  int c2 ;

  {
  c1 = (c12 >> 8) & 255;
  c2 = c12 & 255;
  noblock((char )')', (char )c2);
  return (0);
}
}

int mssnblock(pacmac c12 ) 
{ int c1 ;
  int c2 ;

  {
  c1 = (c12 >> 8) & 255;
  c2 = c12 & 255;
  noblock((char )c1, (char )'E');
  return (0);
}
}

int nf(void) 
{ 

  {
  noblock((char )'f', (char )'i');
  return (0);
}
}

int ce(void) 
{ 

  {
  sce();
  return (0);
}
}

int mepp(pacmac c12 ) ;

int meip(pacmac c12 ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  if (parag) {
    mepp(c12);
  } else {
    if (wordflag) {
      regline((int (*)())(& meputmac), 1);
    } else {
      while (1) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___2 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___2 = skeqn();
            } else {
              tmp___2 = c;
            }
          } else {
            tmp___2 = c;
          }
        }
        if (! (tmp___2 != 10)) {
          break;
        }
      }
    }
  }
  return (0);
}
}

int mepp(pacmac c12 ) 
{ 

  {
  PP(c12);
  return (0);
}
}

int defcomline(pacmac c12 ) ;

int mesh(pacmac c12 ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;

  {
  if (parag) {
    mepp(c12);
  } else {
    if (wordflag) {
      defcomline(c12);
    } else {
      while (1) {
        c = _IO_getc(infile);
        if (c == -1) {
          tmp___2 = eof();
        } else {
          if (c == ldelim) {
            if ((unsigned int )filesp == (unsigned int )(files)) {
              tmp___2 = skeqn();
            } else {
              tmp___2 = c;
            }
          } else {
            tmp___2 = c;
          }
        }
        if (! (tmp___2 != 10)) {
          break;
        }
      }
    }
  }
  return (0);
}
}

int mefont(pacmac c12 ) 
{ 

  {
  argconcat = 1;
  defcomline(c12);
  argconcat = 0;
  return (0);
}
}

int manfont(pacmac c12 ) 
{ int tmp ;

  {
  tmp = mefont(c12);
  return (tmp);
}
}

int manpp(pacmac c12 ) 
{ int tmp ;

  {
  tmp = mepp(c12);
  return (tmp);
}
}

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
  c1 = (c12 >> 8) & 255;
  c2 = c12 & 255;
  if (msflag) {
    if (mac == 1) {
      if (c2 == 76) {
        if (disp) {
          noblock((char )'L', (char )'E');
        } else {
          if (c1 == 82) {
            noblock((char )'L', (char )'E');
          } else {
            while (1) {
              c = _IO_getc(infile);
              if (c == -1) {
                tmp___2 = eof();
              } else {
                if (c == ldelim) {
                  if ((unsigned int )filesp == (unsigned int )(files)) {
                    tmp___2 = skeqn();
                  } else {
                    tmp___2 = c;
                  }
                } else {
                  tmp___2 = c;
                }
              }
              if (! (tmp___2 != 10)) {
                break;
              }
            }
            putchar('.');
          }
        }
      } else {
        goto _L___0;
      }
    } else {
      goto _L___0;
    }
  } else {
    _L___0: 
    _L: 
    if (c1 == 46) {
      if (c2 == 46) {
        if (msflag) {
          while (1) {
            c = _IO_getc(infile);
            if (c == -1) {
              tmp___7 = eof();
            } else {
              if (c == ldelim) {
                if ((unsigned int )filesp == (unsigned int )(files)) {
                  tmp___7 = skeqn();
                } else {
                  tmp___7 = c;
                }
              } else {
                tmp___7 = c;
              }
            }
            if (! (tmp___7 != 10)) {
              break;
            }
          }
          return;
        }
        while (1) {
          c = _IO_getc(infile);
          if (c == -1) {
            tmp___12 = eof();
          } else {
            if (c == ldelim) {
              if ((unsigned int )filesp == (unsigned int )(files)) {
                tmp___12 = skeqn();
              } else {
                tmp___12 = c;
              }
            } else {
              tmp___12 = c;
            }
          }
          if (! (tmp___12 == 46)) {
            break;
          }
        }
      }
    }
  }
  inmacro ++;
  switch (mac) {
  default: ;
  case 1: 
  case 0: 
  if (c1 <= 90) {
    if (msflag) {
      regline((int (*)())(& msputmac), 1);
    } else {
      regline((int (*)())(& msputmac), 2);
    }
  } else {
    regline((int (*)())(& msputmac), 2);
  }
  break;
  case 2: 
  regline((int (*)())(& meputmac), 1);
  break;
  }
  inmacro --;
  return (0);
}
}

static int tabsize   = 0;

static struct mactab *mactab   = (struct mactab *)0;

int buildtab(struct mactab **r_back , int *r_size ) ;

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
  if ((unsigned int )mactab == (unsigned int )((struct mactab *)0)) {
    buildtab(& mactab, & tabsize);
  }
  com: 
  while (1) {
    c = _IO_getc(infile);
    if (c == -1) {
      tmp___2 = eof();
    } else {
      if (c == ldelim) {
        if ((unsigned int )filesp == (unsigned int )(files)) {
          tmp___2 = skeqn();
        } else {
          tmp___2 = c;
        }
      } else {
        tmp___2 = c;
      }
    }
    if (! (tmp___2 == 32)) {
      if (! (c == 9)) {
        break;
      }
    }
  }
  comx: 
  c1 = c;
  if (c1 == 10) {
    return;
  }
  c = _IO_getc(infile);
  if (c == -1) {
    c2 = eof();
  } else {
    if (c == ldelim) {
      if ((unsigned int )filesp == (unsigned int )(files)) {
        c2 = skeqn();
      } else {
        c2 = c;
      }
    } else {
      c2 = c;
    }
  }
  if (c1 == 46) {
    if (c2 != 46) {
      inmacro = 0;
    }
  }
  if (msflag) {
    if (c1 == 91) {
      refer(c2);
      return;
    }
  }
  if (parag) {
    if (mac == 1) {
      if (c1 == 80) {
        if (c2 == 10) {
          printf((char const   */* __restrict  */)".P\n");
          return;
        }
      }
    }
  }
  if (c2 == 10) {
    return;
  }
  if (mac == 2) {
    if (c2 == 32) {
      c2 = ' ';
    } else {
      if (c2 == 9) {
        c2 = ' ';
      }
    }
  }
  c12 = ((c1 & 255) << 8) | (c2 & 255);
  lb = 0;
  ub = tabsize - 1;
  while (lb <= ub) {
    mid = (ub + lb) / 2;
    mp = mactab + mid;
    if (mp->macname < c12) {
      lb = mid + 1;
    } else {
      if (mp->macname > c12) {
        ub = mid - 1;
      } else {
        hit = 1;
        switch (mp->condition) {
        case 0: 
        hit = 1;
        break;
        case 1: 
        hit = (unsigned int )filesp == (unsigned int )(files);
        break;
        case 2: 
        hit = ! inmacro;
        break;
        case 3: 
        hit = inmacro;
        break;
        case 4: 
        hit = parag;
        break;
        case 6: 
        hit = ! keepblock;
        break;
        default: 
        hit = 0;
        }
        if (hit) {
          tmp___8 = (*(mp->func))(c12);
          switch (tmp___8) {
          default: ;
          return;
          case 1: 
          goto comx;
          case 2: 
          goto com;
          }
        }
        break;
      }
    }
  }
  defcomline(c12);
  return (0);
}
}

int macsort(struct mactab *p1 , struct mactab *p2 ) 
{ 

  {
  return (p1->macname - p2->macname);
}
}

int sizetab(struct mactab *mp ) 
{ register int i ;

  {
  i = 0;
  if (mp) {
    while (mp->macname) {
      mp ++;
      i ++;
    }
  }
  return (i);
}
}

struct mactab *macfill(struct mactab *dst , struct mactab *src ) 
{ struct mactab *tmp ;
  struct mactab *tmp___0 ;

  {
  if (src) {
    while (src->macname) {
      tmp = dst;
      dst ++;
      tmp___0 = src;
      src ++;
      *tmp = *tmp___0;
    }
  }
  return (dst);
}
}

extern int qsort() ;

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
  size = sizetab(troffmactab);
  tmp = sizetab(ppmactab);
  size += tmp;
  p2 = (struct mactab *)0;
  p1 = p2;
  if (msflag) {
    switch (mac) {
    case 2: 
    p1 = memactab;
    break;
    case 1: 
    p1 = msmactab;
    p2 = mmmactab;
    break;
    case 0: 
    p1 = msmactab;
    break;
    case 3: 
    p1 = manmactab;
    break;
    default: ;
    break;
    }
  }
  tmp___0 = sizetab(p1);
  size += tmp___0;
  tmp___1 = sizetab(p2);
  size += tmp___1;
  tmp___2 = calloc(size + 2, sizeof(struct mactab ));
  back = (struct mactab *)tmp___2;
  p = macfill(back, troffmactab);
  p = macfill(p, ppmactab);
  p = macfill(p, p1);
  p = macfill(p, p2);
  qsort(back, size, sizeof(struct mactab ), & macsort);
  *r_size = size;
  *r_back = back;
  return (0);
}
}

struct mactab troffmactab[11]   = 
  {{0, (92 << 8) | 34, & skip}, {2, (100 << 8) | 101, & domacro},
   {2, (105 << 8) | 103, & domacro}, {2, (97 << 8) | 109, & domacro},
   {6, (110 << 8) | 102, & nf}, {6, (99 << 8) | 101, & ce},
   {0, (115 << 8) | 111, & so}, {0, (110 << 8) | 120, & nx},
   {0, (116 << 8) | 109, & skip}, {0, (104 << 8) | 119, & skip},
   {0, 0, (int (*)())0}};

struct mactab ppmactab[7]   = {{1, (69 << 8) | 81, & EQ},
                               {1, (84 << 8) | 83, & intbl},
                               {1, (84 << 8) | 67, & intbl},
                               {1, (84 << 8) | 38, & intbl},
                               {0, (84 << 8) | 69, & outtbl},
                               {0, (80 << 8) | 83, & PS}, {0, 0, (int (*)())0}};

struct mactab msmactab[17]   = 
  {{0, (84 << 8) | 76, & skiptocom}, {0, (70 << 8) | 83, & skiptocom},
   {0, (79 << 8) | 75, & skiptocom}, {0, (78 << 8) | 82, & skip},
   {0, (78 << 8) | 68, & skip}, {4, (80 << 8) | 80, (int (*)())(& PP)},
   {4, (73 << 8) | 80, (int (*)())(& PP)},
   {4, (76 << 8) | 80, (int (*)())(& PP)}, {0, (65 << 8) | 85, & AU},
   {0, (65 << 8) | 73, & AU}, {0, (83 << 8) | 72, (int (*)())(& SH)},
   {0, (83 << 8) | 78, (int (*)())(& SH)}, {0, (85 << 8) | 88, & UX},
   {6, (68 << 8) | 83, (int (*)())(& mssnblock)},
   {6, (75 << 8) | 83, (int (*)())(& mssnblock)},
   {6, (75 << 8) | 70, (int (*)())(& mssnblock)}, {0, 0, (int (*)())0}};

struct mactab mmmactab[5]   = {{0, (72 << 8) | 32, (int (*)())(& MMHU)},
                               {0, (72 << 8) | 85, (int (*)())(& MMHU)},
                               {4, (80 << 8) | 32, (int (*)())(& PP)},
                               {6, (78 << 8) | 83, (int (*)())(& mssnblock)},
                               {0, 0, (int (*)())0}};

struct mactab memactab[23]   = 
  {{4, (112 << 8) | 112, (int (*)())(& mepp)},
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
   {0, (98 << 8) | 120, (int (*)())(& mefont)}, {0, 0, (int (*)())0}};

struct mactab manmactab[10]   = 
  {{4, (66 << 8) | 73, (int (*)())(& manfont)},
   {4, (66 << 8) | 82, (int (*)())(& manfont)},
   {4, (73 << 8) | 66, (int (*)())(& manfont)},
   {4, (73 << 8) | 82, (int (*)())(& manfont)},
   {4, (82 << 8) | 66, (int (*)())(& manfont)},
   {4, (82 << 8) | 73, (int (*)())(& manfont)},
   {4, (80 << 8) | 80, (int (*)())(& manpp)},
   {4, (76 << 8) | 80, (int (*)())(& manpp)},
   {4, (72 << 8) | 80, (int (*)())(& manpp)}, {0, 0, (int (*)())0}};

