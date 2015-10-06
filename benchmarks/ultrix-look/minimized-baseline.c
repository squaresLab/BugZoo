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

struct __gconv_step_data;

struct __gconv_step_data;

struct __gconv_loaded_object;

struct __gconv_loaded_object;

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

typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );

typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf ,
                                size_t __n );

typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );

typedef int __io_close_fn(void *__cookie );

typedef _G_fpos_t fpos_t;

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

extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s ,
                                                                             size_t __maxlen ,
                                                                             char const   * __restrict  __format 
                                                                             , ...) ;

extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsnprintf)(char * __restrict  __s ,
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

extern unsigned short const   **__ctype_b_loc(void)  __attribute__((__const__)) ;

extern __int32_t const   **__ctype_tolower_loc(void)  __attribute__((__const__)) ;

extern __int32_t const   **__ctype_toupper_loc(void)  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int isalnum(int  ) ;

extern  __attribute__((__nothrow__)) int isalpha(int  ) ;

extern  __attribute__((__nothrow__)) int iscntrl(int  ) ;

extern  __attribute__((__nothrow__)) int isdigit(int  ) ;

extern  __attribute__((__nothrow__)) int islower(int  ) ;

extern  __attribute__((__nothrow__)) int isgraph(int  ) ;

extern  __attribute__((__nothrow__)) int isprint(int  ) ;

extern  __attribute__((__nothrow__)) int ispunct(int  ) ;

extern  __attribute__((__nothrow__)) int isspace(int  ) ;

extern  __attribute__((__nothrow__)) int isupper(int  ) ;

extern  __attribute__((__nothrow__)) int isxdigit(int  ) ;

extern  __attribute__((__nothrow__)) int tolower(int __c ) ;

extern  __attribute__((__nothrow__)) int toupper(int __c ) ;

extern  __attribute__((__nothrow__)) int isascii(int __c ) ;

extern  __attribute__((__nothrow__)) int toascii(int __c ) ;

extern  __attribute__((__nothrow__)) int _toupper(int  ) ;

extern  __attribute__((__nothrow__)) int _tolower(int  ) ;

extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest ,
                                                  void const   * __restrict  __src ,
                                                  size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) void *memmove(void *__dest ,
                                                   void const   *__src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) void *memccpy(void * __restrict  __dest ,
                                                   void const   * __restrict  __src ,
                                                   int __c , size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c ,
                                                  size_t __n )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int memcmp(void const   *__s1 ,
                                                void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) void *memchr(void const   *__s , int __c ,
                                                  size_t __n )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *strcpy(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strncpy(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strcat(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strncat(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 ,
                                                char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 ,
                                                 char const   *__s2 ,
                                                 size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int strcoll(char const   *__s1 ,
                                                 char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) size_t strxfrm(char * __restrict  __dest ,
                                                    char const   * __restrict  __src ,
                                                    size_t __n )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) char *strdup(char const   *__s )  __attribute__((__nonnull__(1),
__malloc__)) ;

extern  __attribute__((__nothrow__)) char *strchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *strrchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) size_t strcspn(char const   *__s ,
                                                    char const   *__reject )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) size_t strspn(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strpbrk(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strstr(char const   *__haystack ,
                                                  char const   *__needle )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strtok(char * __restrict  __s ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) char *__strtok_r(char * __restrict  __s ,
                                                      char const   * __restrict  __delim ,
                                                      char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;

extern  __attribute__((__nothrow__)) char *strtok_r(char * __restrict  __s ,
                                                    char const   * __restrict  __delim ,
                                                    char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;

extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;

extern  __attribute__((__nothrow__)) int strerror_r(int __errnum , char *__buf ,
                                                    size_t __buflen )  __asm__("__xpg_strerror_r") __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) void __bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) void bcopy(void const   *__src ,
                                                void *__dest , size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) void bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int bcmp(void const   *__s1 ,
                                              void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *index(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *rindex(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int strcasecmp(char const   *__s1 ,
                                                    char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int strncasecmp(char const   *__s1 ,
                                                     char const   *__s2 ,
                                                     size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strsep(char ** __restrict  __stringp ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(1,2))) ;

FILE *dfile  ;

char *filenam   = (char *)"words";

int fold  ;

int dict  ;

int tab  ;

char entry[257]  ;

char word[257]  ;

char key[257]  ;

extern int ( /* missing proto */  exit)() ;

int canon(char *old , char *new ) ;

int getword(char *w ) ;

int compare(char *s , char *t ) ;

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
  while (1) {
    if (argc >= 2) {
      if (! ((int )*(*(argv + 1)) == 45)) {
        break;
      }
    } else {
      break;
    }
    while (1) {
      (*(argv + 1)) ++;
      switch ((int )*(*(argv + 1))) {
      case 100: 
      dict ++;
      goto __Cont;
      case 102: 
      fold ++;
      goto __Cont;
      case 116: 
      tab = (int )*(*(argv + 1) + 1);
      if (tab) {
        (*(argv + 1)) ++;
      }
      goto __Cont;
      case 0: 
      break;
      default: ;
      goto __Cont;
      }
      break;
      __Cont: /* CIL Label */ ;
    }
    argc --;
    argv ++;
  }
  if (argc <= 1) {
    return;
  }
  if (argc == 2) {
    fold ++;
    dict ++;
  } else {
    filenam = *(argv + 2);
  }
  dfile = fopen((char const   */* __restrict  */)filenam,
                (char const   */* __restrict  */)"r");
  if ((unsigned long )dfile == (unsigned long )((void *)0)) {
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"look: can\'t open %s\n", filenam);
    exit(2);
  }
  wstring = strdup((char const   *)*(argv + 1));
  if ((unsigned long )tab != (unsigned long )((void *)0)) {
    ptr = strchr((char const   *)wstring, tab);
    if ((unsigned long )ptr != (unsigned long )((void *)0)) {
      ptr ++;
      *ptr = (char )'\000';
    }
  }
  canon(wstring, key);
  bot = 0L;
  fseek(dfile, 0L, 2);
  top = ftell(dfile);
  while (1) {
    mid = (top + bot) / 2L;
    fseek(dfile, mid, 0);
    while (1) {
      c = _IO_getc(dfile);
      mid ++;
      if (c != -1) {
        if (! (c != 10)) {
          break;
        }
      } else {
        break;
      }
    }
    tmp = getword(entry);
    if (! tmp) {
      break;
    }
    canon(entry, word);
    tmp___0 = compare(key, word);
    switch (tmp___0) {
    case -2: 
    case -1: 
    case 0: 
    if (top <= mid) {
      break;
    }
    top = mid;
    goto __Cont___0;
    case 1: 
    case 2: 
    bot = mid;
    goto __Cont___0;
    }
    break;
    __Cont___0: /* CIL Label */ ;
  }
  fseek(dfile, bot, 0);
  while (1) {
    tmp___3 = ftell(dfile);
    if (! (tmp___3 < top)) {
      break;
    }
    tmp___1 = getword(entry);
    if (! tmp___1) {
      return;
    }
    canon(entry, word);
    tmp___2 = compare(key, word);
    switch (tmp___2) {
    case -2: 
    return;
    case -1: 
    case 0: 
    puts((char const   *)(entry));
    break;
    case 1: 
    case 2: 
    continue;
    }
    break;
  }
  while (1) {
    tmp___5 = getword(entry);
    if (! tmp___5) {
      break;
    }
    canon(entry, word);
    tmp___4 = compare(key, word);
    switch (tmp___4) {
    case -1: 
    case 0: 
    puts((char const   *)(entry));
    continue;
    }
    break;
  }
  exit(0);
}
}

int compare(char *s , char *t ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  while ((int )*s == (int )*t) {
    if ((int )*s == 0) {
      return (0);
    }
    s ++;
    t ++;
  }
  if ((int )*s == 0) {
    tmp___1 = -1;
  } else {
    if ((int )*t == 0) {
      tmp___1 = 1;
    } else {
      if ((int )*s < (int )*t) {
        tmp___1 = -2;
      } else {
        tmp___1 = 2;
      }
    }
  }
  return (tmp___1);
}
}

int getword(char *w ) 
{ register int c ;
  register int avail ;
  char *tmp ;
  int tmp___0 ;

  {
  avail = 256;
  while (1) {
    tmp___0 = avail;
    avail --;
    if (! tmp___0) {
      break;
    }
    c = _IO_getc(dfile);
    if (c == -1) {
      return (0);
    }
    if (c == 10) {
      break;
    }
    tmp = w;
    w ++;
    *tmp = (char )c;
  }
  while (c != 10) {
    c = _IO_getc(dfile);
  }
  *w = (char)0;
  return (1);
}
}

int canon(char *old , char *new ) 
{ register int c ;
  register int avail ;
  char *tmp ;
  unsigned short const   **tmp___0 ;
  unsigned short const   **tmp___1 ;

  {
  avail = 256;
  while (1) {
    tmp = old;
    old ++;
    c = (int )*tmp;
    *new = (char )c;
    if (c == 0) {
      *new = (char)0;
      break;
    }
    if (dict) {
      tmp___0 = __ctype_b_loc();
      if (! ((int const   )*(*tmp___0 + c) & 8)) {
        goto __Cont;
      }
    }
    if (fold) {
      tmp___1 = __ctype_b_loc();
      if ((int const   )*(*tmp___1 + c) & 256) {
        *new = (char )((int )*new + 32);
      }
    }
    new ++;
    avail --;
    if (avail <= 0) {
      *new = (char)0;
      break;
    }
    __Cont: /* CIL Label */ ;
  }
  return (0);
}
}

