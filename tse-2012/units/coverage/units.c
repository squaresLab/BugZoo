extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1),
__leaf__)) memset)(void *__s , int __c , unsigned long __n ) ;
struct _IO_FILE;
struct _IO_FILE *_coverage_fout  ;
char ___coverage_array[480] ;
int ___coverage_array_already_memset ;
int ___coverage_array_already_memset  =    0;
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
struct __gconv_step_data;
struct __gconv_loaded_object;
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
extern  __attribute__((__nothrow__)) char *setlocale(int __category ,
                                                     char const   *__locale ) ;
extern  __attribute__((__nothrow__)) struct lconv *localeconv(void) ;
extern int *signal() ;
char *dfile  =    (char *)"unittab";
char *unames[10]  ;
double getflt(void) ;
int fperr(void) ;
struct table *hash(char *name ) ;
struct table table[1009]  ;
char names[10090]  ;
struct prefix prefix[28]  = 
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
FILE *inp  ;
int fperrc  ;
int peekc  ;
int dumpflg  ;
extern int ( /* missing proto */  textdomain)() ;
extern int ( /* missing proto */  gettext)() ;
extern int ( /* missing proto */  exit)() ;
int init(void) ;
int convr(struct unit *up ) ;
int units(struct unit *up ) ;
int main(int argc , char **argv ) 
{ 
  register int i ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/christ/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    if (___coverage_array_already_memset == 0) {
      {
      ___coverage_array_already_memset = 1;
      memset(___coverage_array, 0, sizeof(___coverage_array));
      }
    }
    }
  }
  }
  {
  if (___coverage_array[1] == 0) {
    {
    fprintf(_coverage_fout, "1\n");
    fflush(_coverage_fout);
    ___coverage_array[1] = 1;
    }
  }
  }
  setlocale(6, "");
  {
  if (___coverage_array[2] == 0) {
    {
    fprintf(_coverage_fout, "2\n");
    fflush(_coverage_fout);
    ___coverage_array[2] = 1;
    }
  }
  }
  textdomain("SYS_TEST");
  {
  if (___coverage_array[3] == 0) {
    {
    fprintf(_coverage_fout, "3\n");
    fflush(_coverage_fout);
    ___coverage_array[3] = 1;
    }
  }
  }
  if (argc > 1) {
    {
    if (___coverage_array[4] == 0) {
      {
      fprintf(_coverage_fout, "4\n");
      fflush(_coverage_fout);
      ___coverage_array[4] = 1;
      }
    }
    }
    if ((int )*(*(argv + 1)) == 45) {
      {
      if (___coverage_array[5] == 0) {
        {
        fprintf(_coverage_fout, "5\n");
        fflush(_coverage_fout);
        ___coverage_array[5] = 1;
        }
      }
      }
      argc --;
      {
      if (___coverage_array[6] == 0) {
        {
        fprintf(_coverage_fout, "6\n");
        fflush(_coverage_fout);
        ___coverage_array[6] = 1;
        }
      }
      }
      argv ++;
      {
      if (___coverage_array[7] == 0) {
        {
        fprintf(_coverage_fout, "7\n");
        fflush(_coverage_fout);
        ___coverage_array[7] = 1;
        }
      }
      }
      dumpflg ++;
    } else {
      {
      if (___coverage_array[8] == 0) {
        {
        fprintf(_coverage_fout, "8\n");
        fflush(_coverage_fout);
        ___coverage_array[8] = 1;
        }
      }
      }

    }
  } else {
    {
    if (___coverage_array[9] == 0) {
      {
      fprintf(_coverage_fout, "9\n");
      fflush(_coverage_fout);
      ___coverage_array[9] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[10] == 0) {
    {
    fprintf(_coverage_fout, "10\n");
    fflush(_coverage_fout);
    ___coverage_array[10] = 1;
    }
  }
  }
  file = dfile;
  {
  if (___coverage_array[11] == 0) {
    {
    fprintf(_coverage_fout, "11\n");
    fflush(_coverage_fout);
    ___coverage_array[11] = 1;
    }
  }
  }
  if (argc > 1) {
    {
    if (___coverage_array[12] == 0) {
      {
      fprintf(_coverage_fout, "12\n");
      fflush(_coverage_fout);
      ___coverage_array[12] = 1;
      }
    }
    }
    file = *(argv + 1);
  } else {
    {
    if (___coverage_array[13] == 0) {
      {
      fprintf(_coverage_fout, "13\n");
      fflush(_coverage_fout);
      ___coverage_array[13] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[14] == 0) {
    {
    fprintf(_coverage_fout, "14\n");
    fflush(_coverage_fout);
    ___coverage_array[14] = 1;
    }
  }
  }
  inp = fopen((char const   */* __restrict  */)file,
              (char const   */* __restrict  */)"r");
  {
  if (___coverage_array[15] == 0) {
    {
    fprintf(_coverage_fout, "15\n");
    fflush(_coverage_fout);
    ___coverage_array[15] = 1;
    }
  }
  }
  if ((unsigned long )inp == (unsigned long )((void *)0)) {
    {
    if (___coverage_array[16] == 0) {
      {
      fprintf(_coverage_fout, "16\n");
      fflush(_coverage_fout);
      ___coverage_array[16] = 1;
      }
    }
    }
    tmp = gettext("no table\n");
    {
    if (___coverage_array[17] == 0) {
      {
      fprintf(_coverage_fout, "17\n");
      fflush(_coverage_fout);
      ___coverage_array[17] = 1;
      }
    }
    }
    printf((char const   */* __restrict  */)tmp);
    {
    if (___coverage_array[18] == 0) {
      {
      fprintf(_coverage_fout, "18\n");
      fflush(_coverage_fout);
      ___coverage_array[18] = 1;
      }
    }
    }
    exit(1);
  } else {
    {
    if (___coverage_array[19] == 0) {
      {
      fprintf(_coverage_fout, "19\n");
      fflush(_coverage_fout);
      ___coverage_array[19] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[20] == 0) {
    {
    fprintf(_coverage_fout, "20\n");
    fflush(_coverage_fout);
    ___coverage_array[20] = 1;
    }
  }
  }
  signal(8, & fperr);
  {
  if (___coverage_array[21] == 0) {
    {
    fprintf(_coverage_fout, "21\n");
    fflush(_coverage_fout);
    ___coverage_array[21] = 1;
    }
  }
  }
  init();
  {
  if (___coverage_array[22] == 0) {
    {
    fprintf(_coverage_fout, "22\n");
    fflush(_coverage_fout);
    ___coverage_array[22] = 1;
    }
  }
  }
  loop: 
  fperrc = 0;
  {
  if (___coverage_array[23] == 0) {
    {
    fprintf(_coverage_fout, "23\n");
    fflush(_coverage_fout);
    ___coverage_array[23] = 1;
    }
  }
  }
  tmp___0 = gettext("you have: ");
  {
  if (___coverage_array[24] == 0) {
    {
    fprintf(_coverage_fout, "24\n");
    fflush(_coverage_fout);
    ___coverage_array[24] = 1;
    }
  }
  }
  printf((char const   */* __restrict  */)tmp___0);
  {
  if (___coverage_array[25] == 0) {
    {
    fprintf(_coverage_fout, "25\n");
    fflush(_coverage_fout);
    ___coverage_array[25] = 1;
    }
  }
  }
  tmp___1 = convr(& u1);
  {
  if (___coverage_array[26] == 0) {
    {
    fprintf(_coverage_fout, "26\n");
    fflush(_coverage_fout);
    ___coverage_array[26] = 1;
    }
  }
  }
  if (tmp___1) {
    {
    if (___coverage_array[27] == 0) {
      {
      fprintf(_coverage_fout, "27\n");
      fflush(_coverage_fout);
      ___coverage_array[27] = 1;
      }
    }
    }
    goto loop;
  } else {
    {
    if (___coverage_array[28] == 0) {
      {
      fprintf(_coverage_fout, "28\n");
      fflush(_coverage_fout);
      ___coverage_array[28] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[29] == 0) {
    {
    fprintf(_coverage_fout, "29\n");
    fflush(_coverage_fout);
    ___coverage_array[29] = 1;
    }
  }
  }
  if (fperrc) {
    {
    if (___coverage_array[30] == 0) {
      {
      fprintf(_coverage_fout, "30\n");
      fflush(_coverage_fout);
      ___coverage_array[30] = 1;
      }
    }
    }
    goto fp;
  } else {
    {
    if (___coverage_array[31] == 0) {
      {
      fprintf(_coverage_fout, "31\n");
      fflush(_coverage_fout);
      ___coverage_array[31] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[32] == 0) {
    {
    fprintf(_coverage_fout, "32\n");
    fflush(_coverage_fout);
    ___coverage_array[32] = 1;
    }
  }
  }
  loop1: 
  tmp___2 = gettext("you want: ");
  {
  if (___coverage_array[33] == 0) {
    {
    fprintf(_coverage_fout, "33\n");
    fflush(_coverage_fout);
    ___coverage_array[33] = 1;
    }
  }
  }
  printf((char const   */* __restrict  */)tmp___2);
  {
  if (___coverage_array[34] == 0) {
    {
    fprintf(_coverage_fout, "34\n");
    fflush(_coverage_fout);
    ___coverage_array[34] = 1;
    }
  }
  }
  tmp___3 = convr(& u2);
  {
  if (___coverage_array[35] == 0) {
    {
    fprintf(_coverage_fout, "35\n");
    fflush(_coverage_fout);
    ___coverage_array[35] = 1;
    }
  }
  }
  if (tmp___3) {
    {
    if (___coverage_array[36] == 0) {
      {
      fprintf(_coverage_fout, "36\n");
      fflush(_coverage_fout);
      ___coverage_array[36] = 1;
      }
    }
    }
    goto loop1;
  } else {
    {
    if (___coverage_array[37] == 0) {
      {
      fprintf(_coverage_fout, "37\n");
      fflush(_coverage_fout);
      ___coverage_array[37] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[38] == 0) {
    {
    fprintf(_coverage_fout, "38\n");
    fflush(_coverage_fout);
    ___coverage_array[38] = 1;
    }
  }
  }
  i = 0;
  {
  if (___coverage_array[39] == 0) {
    {
    fprintf(_coverage_fout, "39\n");
    fflush(_coverage_fout);
    ___coverage_array[39] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[40] == 0) {
      {
      fprintf(_coverage_fout, "40\n");
      fflush(_coverage_fout);
      ___coverage_array[40] = 1;
      }
    }
    }
    if (i < 10) {
      {
      if (___coverage_array[41] == 0) {
        {
        fprintf(_coverage_fout, "41\n");
        fflush(_coverage_fout);
        ___coverage_array[41] = 1;
        }
      }
      }

    } else {
      {
      if (___coverage_array[42] == 0) {
        {
        fprintf(_coverage_fout, "42\n");
        fflush(_coverage_fout);
        ___coverage_array[42] = 1;
        }
      }
      }
      break;
    }
    {
    if (___coverage_array[43] == 0) {
      {
      fprintf(_coverage_fout, "43\n");
      fflush(_coverage_fout);
      ___coverage_array[43] = 1;
      }
    }
    }
    if ((int )u1.dim[i] != (int )u2.dim[i]) {
      {
      if (___coverage_array[44] == 0) {
        {
        fprintf(_coverage_fout, "44\n");
        fflush(_coverage_fout);
        ___coverage_array[44] = 1;
        }
      }
      }
      goto conform;
    } else {
      {
      if (___coverage_array[45] == 0) {
        {
        fprintf(_coverage_fout, "45\n");
        fflush(_coverage_fout);
        ___coverage_array[45] = 1;
        }
      }
      }

    }
    {
    if (___coverage_array[46] == 0) {
      {
      fprintf(_coverage_fout, "46\n");
      fflush(_coverage_fout);
      ___coverage_array[46] = 1;
      }
    }
    }
    i ++;
  }
  {
  if (___coverage_array[47] == 0) {
    {
    fprintf(_coverage_fout, "47\n");
    fflush(_coverage_fout);
    ___coverage_array[47] = 1;
    }
  }
  }
  f = u1.factor / u2.factor;
  {
  if (___coverage_array[48] == 0) {
    {
    fprintf(_coverage_fout, "48\n");
    fflush(_coverage_fout);
    ___coverage_array[48] = 1;
    }
  }
  }
  if (fperrc) {
    {
    if (___coverage_array[49] == 0) {
      {
      fprintf(_coverage_fout, "49\n");
      fflush(_coverage_fout);
      ___coverage_array[49] = 1;
      }
    }
    }
    goto fp;
  } else {
    {
    if (___coverage_array[50] == 0) {
      {
      fprintf(_coverage_fout, "50\n");
      fflush(_coverage_fout);
      ___coverage_array[50] = 1;
      }
    }
    }
    if (f == 0.0) {
      {
      if (___coverage_array[51] == 0) {
        {
        fprintf(_coverage_fout, "51\n");
        fflush(_coverage_fout);
        ___coverage_array[51] = 1;
        }
      }
      }
      goto fp;
    } else {
      {
      if (___coverage_array[52] == 0) {
        {
        fprintf(_coverage_fout, "52\n");
        fflush(_coverage_fout);
        ___coverage_array[52] = 1;
        }
      }
      }

    }
  }
  {
  if (___coverage_array[53] == 0) {
    {
    fprintf(_coverage_fout, "53\n");
    fflush(_coverage_fout);
    ___coverage_array[53] = 1;
    }
  }
  }
  printf((char const   */* __restrict  */)"\t* %e\n", f);
  {
  if (___coverage_array[54] == 0) {
    {
    fprintf(_coverage_fout, "54\n");
    fflush(_coverage_fout);
    ___coverage_array[54] = 1;
    }
  }
  }
  printf((char const   */* __restrict  */)"\t/ %e\n", 1. / f);
  {
  if (___coverage_array[55] == 0) {
    {
    fprintf(_coverage_fout, "55\n");
    fflush(_coverage_fout);
    ___coverage_array[55] = 1;
    }
  }
  }
  goto loop;
  {
  if (___coverage_array[56] == 0) {
    {
    fprintf(_coverage_fout, "56\n");
    fflush(_coverage_fout);
    ___coverage_array[56] = 1;
    }
  }
  }
  conform: 
  if (fperrc) {
    {
    if (___coverage_array[57] == 0) {
      {
      fprintf(_coverage_fout, "57\n");
      fflush(_coverage_fout);
      ___coverage_array[57] = 1;
      }
    }
    }
    goto fp;
  } else {
    {
    if (___coverage_array[58] == 0) {
      {
      fprintf(_coverage_fout, "58\n");
      fflush(_coverage_fout);
      ___coverage_array[58] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[59] == 0) {
    {
    fprintf(_coverage_fout, "59\n");
    fflush(_coverage_fout);
    ___coverage_array[59] = 1;
    }
  }
  }
  tmp___4 = gettext("conformability\n");
  {
  if (___coverage_array[60] == 0) {
    {
    fprintf(_coverage_fout, "60\n");
    fflush(_coverage_fout);
    ___coverage_array[60] = 1;
    }
  }
  }
  printf((char const   */* __restrict  */)tmp___4);
  {
  if (___coverage_array[61] == 0) {
    {
    fprintf(_coverage_fout, "61\n");
    fflush(_coverage_fout);
    ___coverage_array[61] = 1;
    }
  }
  }
  units(& u1);
  {
  if (___coverage_array[62] == 0) {
    {
    fprintf(_coverage_fout, "62\n");
    fflush(_coverage_fout);
    ___coverage_array[62] = 1;
    }
  }
  }
  units(& u2);
  {
  if (___coverage_array[63] == 0) {
    {
    fprintf(_coverage_fout, "63\n");
    fflush(_coverage_fout);
    ___coverage_array[63] = 1;
    }
  }
  }
  goto loop;
  {
  if (___coverage_array[64] == 0) {
    {
    fprintf(_coverage_fout, "64\n");
    fflush(_coverage_fout);
    ___coverage_array[64] = 1;
    }
  }
  }
  fp: 
  tmp___5 = gettext("underflow or overflow\n");
  {
  if (___coverage_array[65] == 0) {
    {
    fprintf(_coverage_fout, "65\n");
    fflush(_coverage_fout);
    ___coverage_array[65] = 1;
    }
  }
  }
  printf((char const   */* __restrict  */)tmp___5);
  {
  if (___coverage_array[66] == 0) {
    {
    fprintf(_coverage_fout, "66\n");
    fflush(_coverage_fout);
    ___coverage_array[66] = 1;
    }
  }
  }
  goto loop;
}
}
int pu(int u , int i , int f ) ;
int units(struct unit *up ) 
{ 
  register struct unit *p ;
  register int f ;
  register int i ;
  int tmp ;
  int tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/christ/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    if (___coverage_array_already_memset == 0) {
      {
      ___coverage_array_already_memset = 1;
      memset(___coverage_array, 0, sizeof(___coverage_array));
      }
    }
    }
  }
  }
  {
  if (___coverage_array[67] == 0) {
    {
    fprintf(_coverage_fout, "67\n");
    fflush(_coverage_fout);
    ___coverage_array[67] = 1;
    }
  }
  }
  p = up;
  {
  if (___coverage_array[68] == 0) {
    {
    fprintf(_coverage_fout, "68\n");
    fflush(_coverage_fout);
    ___coverage_array[68] = 1;
    }
  }
  }
  printf((char const   */* __restrict  */)"\t%e ", p->factor);
  {
  if (___coverage_array[69] == 0) {
    {
    fprintf(_coverage_fout, "69\n");
    fflush(_coverage_fout);
    ___coverage_array[69] = 1;
    }
  }
  }
  f = 0;
  {
  if (___coverage_array[70] == 0) {
    {
    fprintf(_coverage_fout, "70\n");
    fflush(_coverage_fout);
    ___coverage_array[70] = 1;
    }
  }
  }
  i = 0;
  {
  if (___coverage_array[71] == 0) {
    {
    fprintf(_coverage_fout, "71\n");
    fflush(_coverage_fout);
    ___coverage_array[71] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[72] == 0) {
      {
      fprintf(_coverage_fout, "72\n");
      fflush(_coverage_fout);
      ___coverage_array[72] = 1;
      }
    }
    }
    if (i < 10) {
      {
      if (___coverage_array[73] == 0) {
        {
        fprintf(_coverage_fout, "73\n");
        fflush(_coverage_fout);
        ___coverage_array[73] = 1;
        }
      }
      }

    } else {
      {
      if (___coverage_array[74] == 0) {
        {
        fprintf(_coverage_fout, "74\n");
        fflush(_coverage_fout);
        ___coverage_array[74] = 1;
        }
      }
      }
      break;
    }
    {
    if (___coverage_array[75] == 0) {
      {
      fprintf(_coverage_fout, "75\n");
      fflush(_coverage_fout);
      ___coverage_array[75] = 1;
      }
    }
    }
    tmp = pu((int )p->dim[i], i, f);
    {
    if (___coverage_array[76] == 0) {
      {
      fprintf(_coverage_fout, "76\n");
      fflush(_coverage_fout);
      ___coverage_array[76] = 1;
      }
    }
    }
    f |= tmp;
    {
    if (___coverage_array[77] == 0) {
      {
      fprintf(_coverage_fout, "77\n");
      fflush(_coverage_fout);
      ___coverage_array[77] = 1;
      }
    }
    }
    i ++;
  }
  {
  if (___coverage_array[78] == 0) {
    {
    fprintf(_coverage_fout, "78\n");
    fflush(_coverage_fout);
    ___coverage_array[78] = 1;
    }
  }
  }
  if (f & 1) {
    {
    if (___coverage_array[79] == 0) {
      {
      fprintf(_coverage_fout, "79\n");
      fflush(_coverage_fout);
      ___coverage_array[79] = 1;
      }
    }
    }
    putchar('/');
    {
    if (___coverage_array[80] == 0) {
      {
      fprintf(_coverage_fout, "80\n");
      fflush(_coverage_fout);
      ___coverage_array[80] = 1;
      }
    }
    }
    f = 0;
    {
    if (___coverage_array[81] == 0) {
      {
      fprintf(_coverage_fout, "81\n");
      fflush(_coverage_fout);
      ___coverage_array[81] = 1;
      }
    }
    }
    i = 0;
    {
    if (___coverage_array[82] == 0) {
      {
      fprintf(_coverage_fout, "82\n");
      fflush(_coverage_fout);
      ___coverage_array[82] = 1;
      }
    }
    }
    while (1) {
      {
      if (___coverage_array[83] == 0) {
        {
        fprintf(_coverage_fout, "83\n");
        fflush(_coverage_fout);
        ___coverage_array[83] = 1;
        }
      }
      }
      if (i < 10) {
        {
        if (___coverage_array[84] == 0) {
          {
          fprintf(_coverage_fout, "84\n");
          fflush(_coverage_fout);
          ___coverage_array[84] = 1;
          }
        }
        }

      } else {
        {
        if (___coverage_array[85] == 0) {
          {
          fprintf(_coverage_fout, "85\n");
          fflush(_coverage_fout);
          ___coverage_array[85] = 1;
          }
        }
        }
        break;
      }
      {
      if (___coverage_array[86] == 0) {
        {
        fprintf(_coverage_fout, "86\n");
        fflush(_coverage_fout);
        ___coverage_array[86] = 1;
        }
      }
      }
      tmp___0 = pu(- ((int )p->dim[i]), i, f);
      {
      if (___coverage_array[87] == 0) {
        {
        fprintf(_coverage_fout, "87\n");
        fflush(_coverage_fout);
        ___coverage_array[87] = 1;
        }
      }
      }
      f |= tmp___0;
      {
      if (___coverage_array[88] == 0) {
        {
        fprintf(_coverage_fout, "88\n");
        fflush(_coverage_fout);
        ___coverage_array[88] = 1;
        }
      }
      }
      i ++;
    }
  } else {
    {
    if (___coverage_array[89] == 0) {
      {
      fprintf(_coverage_fout, "89\n");
      fflush(_coverage_fout);
      ___coverage_array[89] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[90] == 0) {
    {
    fprintf(_coverage_fout, "90\n");
    fflush(_coverage_fout);
    ___coverage_array[90] = 1;
    }
  }
  }
  putchar('\n');
  {
  if (___coverage_array[91] == 0) {
    {
    fprintf(_coverage_fout, "91\n");
    fflush(_coverage_fout);
    ___coverage_array[91] = 1;
    }
  }
  }
  return (0);
}
}
int pu(int u , int i , int f ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/christ/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    if (___coverage_array_already_memset == 0) {
      {
      ___coverage_array_already_memset = 1;
      memset(___coverage_array, 0, sizeof(___coverage_array));
      }
    }
    }
  }
  }
  {
  if (___coverage_array[92] == 0) {
    {
    fprintf(_coverage_fout, "92\n");
    fflush(_coverage_fout);
    ___coverage_array[92] = 1;
    }
  }
  }
  if (u > 0) {
    {
    if (___coverage_array[93] == 0) {
      {
      fprintf(_coverage_fout, "93\n");
      fflush(_coverage_fout);
      ___coverage_array[93] = 1;
      }
    }
    }
    if (f & 2) {
      {
      if (___coverage_array[94] == 0) {
        {
        fprintf(_coverage_fout, "94\n");
        fflush(_coverage_fout);
        ___coverage_array[94] = 1;
        }
      }
      }
      putchar('-');
    } else {
      {
      if (___coverage_array[95] == 0) {
        {
        fprintf(_coverage_fout, "95\n");
        fflush(_coverage_fout);
        ___coverage_array[95] = 1;
        }
      }
      }

    }
    {
    if (___coverage_array[96] == 0) {
      {
      fprintf(_coverage_fout, "96\n");
      fflush(_coverage_fout);
      ___coverage_array[96] = 1;
      }
    }
    }
    if (unames[i]) {
      {
      if (___coverage_array[97] == 0) {
        {
        fprintf(_coverage_fout, "97\n");
        fflush(_coverage_fout);
        ___coverage_array[97] = 1;
        }
      }
      }
      printf((char const   */* __restrict  */)"%s", unames[i]);
    } else {
      {
      if (___coverage_array[98] == 0) {
        {
        fprintf(_coverage_fout, "98\n");
        fflush(_coverage_fout);
        ___coverage_array[98] = 1;
        }
      }
      }
      tmp = gettext("*%c*");
      {
      if (___coverage_array[99] == 0) {
        {
        fprintf(_coverage_fout, "99\n");
        fflush(_coverage_fout);
        ___coverage_array[99] = 1;
        }
      }
      }
      printf((char const   */* __restrict  */)tmp, i + 97);
    }
    {
    if (___coverage_array[100] == 0) {
      {
      fprintf(_coverage_fout, "100\n");
      fflush(_coverage_fout);
      ___coverage_array[100] = 1;
      }
    }
    }
    if (u > 1) {
      {
      if (___coverage_array[101] == 0) {
        {
        fprintf(_coverage_fout, "101\n");
        fflush(_coverage_fout);
        ___coverage_array[101] = 1;
        }
      }
      }
      putchar(u + 48);
    } else {
      {
      if (___coverage_array[102] == 0) {
        {
        fprintf(_coverage_fout, "102\n");
        fflush(_coverage_fout);
        ___coverage_array[102] = 1;
        }
      }
      }

    }
    {
    if (___coverage_array[103] == 0) {
      {
      fprintf(_coverage_fout, "103\n");
      fflush(_coverage_fout);
      ___coverage_array[103] = 1;
      }
    }
    }
    return (2);
  } else {
    {
    if (___coverage_array[104] == 0) {
      {
      fprintf(_coverage_fout, "104\n");
      fflush(_coverage_fout);
      ___coverage_array[104] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[105] == 0) {
    {
    fprintf(_coverage_fout, "105\n");
    fflush(_coverage_fout);
    ___coverage_array[105] = 1;
    }
  }
  }
  if (u < 0) {
    {
    if (___coverage_array[106] == 0) {
      {
      fprintf(_coverage_fout, "106\n");
      fflush(_coverage_fout);
      ___coverage_array[106] = 1;
      }
    }
    }
    return (1);
  } else {
    {
    if (___coverage_array[107] == 0) {
      {
      fprintf(_coverage_fout, "107\n");
      fflush(_coverage_fout);
      ___coverage_array[107] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[108] == 0) {
    {
    fprintf(_coverage_fout, "108\n");
    fflush(_coverage_fout);
    ___coverage_array[108] = 1;
    }
  }
  }
  return (0);
}
}
int get(void) ;
int lookup(char *name , struct unit *up , int den , int c ) ;
int convr(struct unit *up ) 
{ 
  register struct unit *p ;
  register int c ;
  register char *cp ;
  char name[20] ;
  int den ;
  int err ;
  char *tmp ;
  int tmp___0 ;
  char *tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/christ/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    if (___coverage_array_already_memset == 0) {
      {
      ___coverage_array_already_memset = 1;
      memset(___coverage_array, 0, sizeof(___coverage_array));
      }
    }
    }
  }
  }
  {
  if (___coverage_array[109] == 0) {
    {
    fprintf(_coverage_fout, "109\n");
    fflush(_coverage_fout);
    ___coverage_array[109] = 1;
    }
  }
  }
  p = up;
  {
  if (___coverage_array[110] == 0) {
    {
    fprintf(_coverage_fout, "110\n");
    fflush(_coverage_fout);
    ___coverage_array[110] = 1;
    }
  }
  }
  c = 0;
  {
  if (___coverage_array[111] == 0) {
    {
    fprintf(_coverage_fout, "111\n");
    fflush(_coverage_fout);
    ___coverage_array[111] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[112] == 0) {
      {
      fprintf(_coverage_fout, "112\n");
      fflush(_coverage_fout);
      ___coverage_array[112] = 1;
      }
    }
    }
    if (c < 10) {
      {
      if (___coverage_array[113] == 0) {
        {
        fprintf(_coverage_fout, "113\n");
        fflush(_coverage_fout);
        ___coverage_array[113] = 1;
        }
      }
      }

    } else {
      {
      if (___coverage_array[114] == 0) {
        {
        fprintf(_coverage_fout, "114\n");
        fflush(_coverage_fout);
        ___coverage_array[114] = 1;
        }
      }
      }
      break;
    }
    {
    if (___coverage_array[115] == 0) {
      {
      fprintf(_coverage_fout, "115\n");
      fflush(_coverage_fout);
      ___coverage_array[115] = 1;
      }
    }
    }
    p->dim[c] = (char)0;
    {
    if (___coverage_array[116] == 0) {
      {
      fprintf(_coverage_fout, "116\n");
      fflush(_coverage_fout);
      ___coverage_array[116] = 1;
      }
    }
    }
    c ++;
  }
  {
  if (___coverage_array[117] == 0) {
    {
    fprintf(_coverage_fout, "117\n");
    fflush(_coverage_fout);
    ___coverage_array[117] = 1;
    }
  }
  }
  p->factor = getflt();
  {
  if (___coverage_array[118] == 0) {
    {
    fprintf(_coverage_fout, "118\n");
    fflush(_coverage_fout);
    ___coverage_array[118] = 1;
    }
  }
  }
  if (p->factor == 0.) {
    {
    if (___coverage_array[119] == 0) {
      {
      fprintf(_coverage_fout, "119\n");
      fflush(_coverage_fout);
      ___coverage_array[119] = 1;
      }
    }
    }
    p->factor = 1.0;
  } else {
    {
    if (___coverage_array[120] == 0) {
      {
      fprintf(_coverage_fout, "120\n");
      fflush(_coverage_fout);
      ___coverage_array[120] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[121] == 0) {
    {
    fprintf(_coverage_fout, "121\n");
    fflush(_coverage_fout);
    ___coverage_array[121] = 1;
    }
  }
  }
  err = 0;
  {
  if (___coverage_array[122] == 0) {
    {
    fprintf(_coverage_fout, "122\n");
    fflush(_coverage_fout);
    ___coverage_array[122] = 1;
    }
  }
  }
  den = 0;
  {
  if (___coverage_array[123] == 0) {
    {
    fprintf(_coverage_fout, "123\n");
    fflush(_coverage_fout);
    ___coverage_array[123] = 1;
    }
  }
  }
  cp = name;
  {
  if (___coverage_array[124] == 0) {
    {
    fprintf(_coverage_fout, "124\n");
    fflush(_coverage_fout);
    ___coverage_array[124] = 1;
    }
  }
  }
  loop: 
  c = get();
  {
  if (___coverage_array[125] == 0) {
    {
    fprintf(_coverage_fout, "125\n");
    fflush(_coverage_fout);
    ___coverage_array[125] = 1;
    }
  }
  }
  switch (c) {
  {
  if (___coverage_array[126] == 0) {
    {
    fprintf(_coverage_fout, "126\n");
    fflush(_coverage_fout);
    ___coverage_array[126] = 1;
    }
  }
  }
  case 10: 
  case 9: 
  case 32: 
  case 47: 
  case 45: 
  case 57: 
  case 56: 
  case 55: 
  case 54: 
  case 53: 
  case 52: 
  case 51: 
  case 50: 
  case 49: 
  if ((unsigned long )cp != (unsigned long )(name)) {
    {
    if (___coverage_array[127] == 0) {
      {
      fprintf(_coverage_fout, "127\n");
      fflush(_coverage_fout);
      ___coverage_array[127] = 1;
      }
    }
    }
    tmp = cp;
    {
    if (___coverage_array[128] == 0) {
      {
      fprintf(_coverage_fout, "128\n");
      fflush(_coverage_fout);
      ___coverage_array[128] = 1;
      }
    }
    }
    cp ++;
    {
    if (___coverage_array[129] == 0) {
      {
      fprintf(_coverage_fout, "129\n");
      fflush(_coverage_fout);
      ___coverage_array[129] = 1;
      }
    }
    }
    *tmp = (char)0;
    {
    if (___coverage_array[130] == 0) {
      {
      fprintf(_coverage_fout, "130\n");
      fflush(_coverage_fout);
      ___coverage_array[130] = 1;
      }
    }
    }
    cp = name;
    {
    if (___coverage_array[131] == 0) {
      {
      fprintf(_coverage_fout, "131\n");
      fflush(_coverage_fout);
      ___coverage_array[131] = 1;
      }
    }
    }
    tmp___0 = lookup(cp, p, den, c);
    {
    if (___coverage_array[132] == 0) {
      {
      fprintf(_coverage_fout, "132\n");
      fflush(_coverage_fout);
      ___coverage_array[132] = 1;
      }
    }
    }
    err |= tmp___0;
  } else {
    {
    if (___coverage_array[133] == 0) {
      {
      fprintf(_coverage_fout, "133\n");
      fflush(_coverage_fout);
      ___coverage_array[133] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[134] == 0) {
    {
    fprintf(_coverage_fout, "134\n");
    fflush(_coverage_fout);
    ___coverage_array[134] = 1;
    }
  }
  }
  if (c == 47) {
    {
    if (___coverage_array[135] == 0) {
      {
      fprintf(_coverage_fout, "135\n");
      fflush(_coverage_fout);
      ___coverage_array[135] = 1;
      }
    }
    }
    den ++;
  } else {
    {
    if (___coverage_array[136] == 0) {
      {
      fprintf(_coverage_fout, "136\n");
      fflush(_coverage_fout);
      ___coverage_array[136] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[137] == 0) {
    {
    fprintf(_coverage_fout, "137\n");
    fflush(_coverage_fout);
    ___coverage_array[137] = 1;
    }
  }
  }
  if (c == 10) {
    {
    if (___coverage_array[138] == 0) {
      {
      fprintf(_coverage_fout, "138\n");
      fflush(_coverage_fout);
      ___coverage_array[138] = 1;
      }
    }
    }
    return (err);
  } else {
    {
    if (___coverage_array[139] == 0) {
      {
      fprintf(_coverage_fout, "139\n");
      fflush(_coverage_fout);
      ___coverage_array[139] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[140] == 0) {
    {
    fprintf(_coverage_fout, "140\n");
    fflush(_coverage_fout);
    ___coverage_array[140] = 1;
    }
  }
  }
  goto loop;
  }
  {
  if (___coverage_array[141] == 0) {
    {
    fprintf(_coverage_fout, "141\n");
    fflush(_coverage_fout);
    ___coverage_array[141] = 1;
    }
  }
  }
  tmp___1 = cp;
  {
  if (___coverage_array[142] == 0) {
    {
    fprintf(_coverage_fout, "142\n");
    fflush(_coverage_fout);
    ___coverage_array[142] = 1;
    }
  }
  }
  cp ++;
  {
  if (___coverage_array[143] == 0) {
    {
    fprintf(_coverage_fout, "143\n");
    fflush(_coverage_fout);
    ___coverage_array[143] = 1;
    }
  }
  }
  *tmp___1 = (char )c;
  {
  if (___coverage_array[144] == 0) {
    {
    fprintf(_coverage_fout, "144\n");
    fflush(_coverage_fout);
    ___coverage_array[144] = 1;
    }
  }
  }
  goto loop;
}
}
int lookup(char *name , struct unit *up , int den , int c ) 
{ 
  register struct unit *p ;
  register struct table *q ;
  register int i ;
  char *cp1 ;
  char *cp2 ;
  double e ;
  char *tmp ;
  char *tmp___0 ;
  int tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/christ/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    if (___coverage_array_already_memset == 0) {
      {
      ___coverage_array_already_memset = 1;
      memset(___coverage_array, 0, sizeof(___coverage_array));
      }
    }
    }
  }
  }
  {
  if (___coverage_array[145] == 0) {
    {
    fprintf(_coverage_fout, "145\n");
    fflush(_coverage_fout);
    ___coverage_array[145] = 1;
    }
  }
  }
  p = up;
  {
  if (___coverage_array[146] == 0) {
    {
    fprintf(_coverage_fout, "146\n");
    fflush(_coverage_fout);
    ___coverage_array[146] = 1;
    }
  }
  }
  e = 1.0;
  {
  if (___coverage_array[147] == 0) {
    {
    fprintf(_coverage_fout, "147\n");
    fflush(_coverage_fout);
    ___coverage_array[147] = 1;
    }
  }
  }
  loop: 
  q = hash(name);
  {
  if (___coverage_array[148] == 0) {
    {
    fprintf(_coverage_fout, "148\n");
    fflush(_coverage_fout);
    ___coverage_array[148] = 1;
    }
  }
  }
  if (q->name) {
    {
    if (___coverage_array[149] == 0) {
      {
      fprintf(_coverage_fout, "149\n");
      fflush(_coverage_fout);
      ___coverage_array[149] = 1;
      }
    }
    }
    l1: 
    if (den) {
      {
      if (___coverage_array[150] == 0) {
        {
        fprintf(_coverage_fout, "150\n");
        fflush(_coverage_fout);
        ___coverage_array[150] = 1;
        }
      }
      }
      p->factor /= q->factor * e;
      {
      if (___coverage_array[151] == 0) {
        {
        fprintf(_coverage_fout, "151\n");
        fflush(_coverage_fout);
        ___coverage_array[151] = 1;
        }
      }
      }
      i = 0;
      {
      if (___coverage_array[152] == 0) {
        {
        fprintf(_coverage_fout, "152\n");
        fflush(_coverage_fout);
        ___coverage_array[152] = 1;
        }
      }
      }
      while (1) {
        {
        if (___coverage_array[153] == 0) {
          {
          fprintf(_coverage_fout, "153\n");
          fflush(_coverage_fout);
          ___coverage_array[153] = 1;
          }
        }
        }
        if (i < 10) {
          {
          if (___coverage_array[154] == 0) {
            {
            fprintf(_coverage_fout, "154\n");
            fflush(_coverage_fout);
            ___coverage_array[154] = 1;
            }
          }
          }

        } else {
          {
          if (___coverage_array[155] == 0) {
            {
            fprintf(_coverage_fout, "155\n");
            fflush(_coverage_fout);
            ___coverage_array[155] = 1;
            }
          }
          }
          break;
        }
        {
        if (___coverage_array[156] == 0) {
          {
          fprintf(_coverage_fout, "156\n");
          fflush(_coverage_fout);
          ___coverage_array[156] = 1;
          }
        }
        }
        p->dim[i] = (char )((int )p->dim[i] - (int )q->dim[i]);
        {
        if (___coverage_array[157] == 0) {
          {
          fprintf(_coverage_fout, "157\n");
          fflush(_coverage_fout);
          ___coverage_array[157] = 1;
          }
        }
        }
        i ++;
      }
    } else {
      {
      if (___coverage_array[158] == 0) {
        {
        fprintf(_coverage_fout, "158\n");
        fflush(_coverage_fout);
        ___coverage_array[158] = 1;
        }
      }
      }
      p->factor *= q->factor * e;
      {
      if (___coverage_array[159] == 0) {
        {
        fprintf(_coverage_fout, "159\n");
        fflush(_coverage_fout);
        ___coverage_array[159] = 1;
        }
      }
      }
      i = 0;
      {
      if (___coverage_array[160] == 0) {
        {
        fprintf(_coverage_fout, "160\n");
        fflush(_coverage_fout);
        ___coverage_array[160] = 1;
        }
      }
      }
      while (1) {
        {
        if (___coverage_array[161] == 0) {
          {
          fprintf(_coverage_fout, "161\n");
          fflush(_coverage_fout);
          ___coverage_array[161] = 1;
          }
        }
        }
        if (i < 10) {
          {
          if (___coverage_array[162] == 0) {
            {
            fprintf(_coverage_fout, "162\n");
            fflush(_coverage_fout);
            ___coverage_array[162] = 1;
            }
          }
          }

        } else {
          {
          if (___coverage_array[163] == 0) {
            {
            fprintf(_coverage_fout, "163\n");
            fflush(_coverage_fout);
            ___coverage_array[163] = 1;
            }
          }
          }
          break;
        }
        {
        if (___coverage_array[164] == 0) {
          {
          fprintf(_coverage_fout, "164\n");
          fflush(_coverage_fout);
          ___coverage_array[164] = 1;
          }
        }
        }
        p->dim[i] = (char )((int )p->dim[i] + (int )q->dim[i]);
        {
        if (___coverage_array[165] == 0) {
          {
          fprintf(_coverage_fout, "165\n");
          fflush(_coverage_fout);
          ___coverage_array[165] = 1;
          }
        }
        }
        i ++;
      }
    }
    {
    if (___coverage_array[166] == 0) {
      {
      fprintf(_coverage_fout, "166\n");
      fflush(_coverage_fout);
      ___coverage_array[166] = 1;
      }
    }
    }
    if (c >= 50) {
      {
      if (___coverage_array[167] == 0) {
        {
        fprintf(_coverage_fout, "167\n");
        fflush(_coverage_fout);
        ___coverage_array[167] = 1;
        }
      }
      }
      if (c <= 57) {
        {
        if (___coverage_array[168] == 0) {
          {
          fprintf(_coverage_fout, "168\n");
          fflush(_coverage_fout);
          ___coverage_array[168] = 1;
          }
        }
        }
        c --;
        {
        if (___coverage_array[169] == 0) {
          {
          fprintf(_coverage_fout, "169\n");
          fflush(_coverage_fout);
          ___coverage_array[169] = 1;
          }
        }
        }
        goto l1;
      } else {
        {
        if (___coverage_array[170] == 0) {
          {
          fprintf(_coverage_fout, "170\n");
          fflush(_coverage_fout);
          ___coverage_array[170] = 1;
          }
        }
        }

      }
    } else {
      {
      if (___coverage_array[171] == 0) {
        {
        fprintf(_coverage_fout, "171\n");
        fflush(_coverage_fout);
        ___coverage_array[171] = 1;
        }
      }
      }

    }
    {
    if (___coverage_array[172] == 0) {
      {
      fprintf(_coverage_fout, "172\n");
      fflush(_coverage_fout);
      ___coverage_array[172] = 1;
      }
    }
    }
    return (0);
  } else {
    {
    if (___coverage_array[173] == 0) {
      {
      fprintf(_coverage_fout, "173\n");
      fflush(_coverage_fout);
      ___coverage_array[173] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[174] == 0) {
    {
    fprintf(_coverage_fout, "174\n");
    fflush(_coverage_fout);
    ___coverage_array[174] = 1;
    }
  }
  }
  i = 0;
  {
  if (___coverage_array[175] == 0) {
    {
    fprintf(_coverage_fout, "175\n");
    fflush(_coverage_fout);
    ___coverage_array[175] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[176] == 0) {
      {
      fprintf(_coverage_fout, "176\n");
      fflush(_coverage_fout);
      ___coverage_array[176] = 1;
      }
    }
    }
    cp1 = prefix[i].pname;
    {
    if (___coverage_array[177] == 0) {
      {
      fprintf(_coverage_fout, "177\n");
      fflush(_coverage_fout);
      ___coverage_array[177] = 1;
      }
    }
    }
    if (cp1) {
      {
      if (___coverage_array[178] == 0) {
        {
        fprintf(_coverage_fout, "178\n");
        fflush(_coverage_fout);
        ___coverage_array[178] = 1;
        }
      }
      }

    } else {
      {
      if (___coverage_array[179] == 0) {
        {
        fprintf(_coverage_fout, "179\n");
        fflush(_coverage_fout);
        ___coverage_array[179] = 1;
        }
      }
      }
      break;
    }
    {
    if (___coverage_array[180] == 0) {
      {
      fprintf(_coverage_fout, "180\n");
      fflush(_coverage_fout);
      ___coverage_array[180] = 1;
      }
    }
    }
    cp2 = name;
    {
    if (___coverage_array[181] == 0) {
      {
      fprintf(_coverage_fout, "181\n");
      fflush(_coverage_fout);
      ___coverage_array[181] = 1;
      }
    }
    }
    while (1) {
      {
      if (___coverage_array[182] == 0) {
        {
        fprintf(_coverage_fout, "182\n");
        fflush(_coverage_fout);
        ___coverage_array[182] = 1;
        }
      }
      }
      tmp___0 = cp2;
      {
      if (___coverage_array[183] == 0) {
        {
        fprintf(_coverage_fout, "183\n");
        fflush(_coverage_fout);
        ___coverage_array[183] = 1;
        }
      }
      }
      cp2 ++;
      {
      if (___coverage_array[184] == 0) {
        {
        fprintf(_coverage_fout, "184\n");
        fflush(_coverage_fout);
        ___coverage_array[184] = 1;
        }
      }
      }
      if ((int )*cp1 == (int )*tmp___0) {
        {
        if (___coverage_array[185] == 0) {
          {
          fprintf(_coverage_fout, "185\n");
          fflush(_coverage_fout);
          ___coverage_array[185] = 1;
          }
        }
        }

      } else {
        {
        if (___coverage_array[186] == 0) {
          {
          fprintf(_coverage_fout, "186\n");
          fflush(_coverage_fout);
          ___coverage_array[186] = 1;
          }
        }
        }
        break;
      }
      {
      if (___coverage_array[187] == 0) {
        {
        fprintf(_coverage_fout, "187\n");
        fflush(_coverage_fout);
        ___coverage_array[187] = 1;
        }
      }
      }
      tmp = cp1;
      {
      if (___coverage_array[188] == 0) {
        {
        fprintf(_coverage_fout, "188\n");
        fflush(_coverage_fout);
        ___coverage_array[188] = 1;
        }
      }
      }
      cp1 ++;
      {
      if (___coverage_array[189] == 0) {
        {
        fprintf(_coverage_fout, "189\n");
        fflush(_coverage_fout);
        ___coverage_array[189] = 1;
        }
      }
      }
      if ((int )*tmp == 0) {
        {
        if (___coverage_array[190] == 0) {
          {
          fprintf(_coverage_fout, "190\n");
          fflush(_coverage_fout);
          ___coverage_array[190] = 1;
          }
        }
        }
        cp1 --;
        {
        if (___coverage_array[191] == 0) {
          {
          fprintf(_coverage_fout, "191\n");
          fflush(_coverage_fout);
          ___coverage_array[191] = 1;
          }
        }
        }
        break;
      } else {
        {
        if (___coverage_array[192] == 0) {
          {
          fprintf(_coverage_fout, "192\n");
          fflush(_coverage_fout);
          ___coverage_array[192] = 1;
          }
        }
        }

      }
    }
    {
    if (___coverage_array[193] == 0) {
      {
      fprintf(_coverage_fout, "193\n");
      fflush(_coverage_fout);
      ___coverage_array[193] = 1;
      }
    }
    }
    if ((int )*cp1 == 0) {
      {
      if (___coverage_array[194] == 0) {
        {
        fprintf(_coverage_fout, "194\n");
        fflush(_coverage_fout);
        ___coverage_array[194] = 1;
        }
      }
      }
      e *= prefix[i].factor;
      {
      if (___coverage_array[195] == 0) {
        {
        fprintf(_coverage_fout, "195\n");
        fflush(_coverage_fout);
        ___coverage_array[195] = 1;
        }
      }
      }
      name = cp2 - 1;
      {
      if (___coverage_array[196] == 0) {
        {
        fprintf(_coverage_fout, "196\n");
        fflush(_coverage_fout);
        ___coverage_array[196] = 1;
        }
      }
      }
      goto loop;
    } else {
      {
      if (___coverage_array[197] == 0) {
        {
        fprintf(_coverage_fout, "197\n");
        fflush(_coverage_fout);
        ___coverage_array[197] = 1;
        }
      }
      }

    }
    {
    if (___coverage_array[198] == 0) {
      {
      fprintf(_coverage_fout, "198\n");
      fflush(_coverage_fout);
      ___coverage_array[198] = 1;
      }
    }
    }
    i ++;
  }
  {
  if (___coverage_array[199] == 0) {
    {
    fprintf(_coverage_fout, "199\n");
    fflush(_coverage_fout);
    ___coverage_array[199] = 1;
    }
  }
  }
  cp1 = name;
  {
  if (___coverage_array[200] == 0) {
    {
    fprintf(_coverage_fout, "200\n");
    fflush(_coverage_fout);
    ___coverage_array[200] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[201] == 0) {
      {
      fprintf(_coverage_fout, "201\n");
      fflush(_coverage_fout);
      ___coverage_array[201] = 1;
      }
    }
    }
    if (*cp1) {
      {
      if (___coverage_array[202] == 0) {
        {
        fprintf(_coverage_fout, "202\n");
        fflush(_coverage_fout);
        ___coverage_array[202] = 1;
        }
      }
      }

    } else {
      {
      if (___coverage_array[203] == 0) {
        {
        fprintf(_coverage_fout, "203\n");
        fflush(_coverage_fout);
        ___coverage_array[203] = 1;
        }
      }
      }
      break;
    }
    {
    if (___coverage_array[204] == 0) {
      {
      fprintf(_coverage_fout, "204\n");
      fflush(_coverage_fout);
      ___coverage_array[204] = 1;
      }
    }
    }
    cp1 ++;
  }
  {
  if (___coverage_array[205] == 0) {
    {
    fprintf(_coverage_fout, "205\n");
    fflush(_coverage_fout);
    ___coverage_array[205] = 1;
    }
  }
  }
  if ((unsigned long )cp1 > (unsigned long )(name + 1)) {
    {
    if (___coverage_array[206] == 0) {
      {
      fprintf(_coverage_fout, "206\n");
      fflush(_coverage_fout);
      ___coverage_array[206] = 1;
      }
    }
    }
    cp1 --;
    {
    if (___coverage_array[207] == 0) {
      {
      fprintf(_coverage_fout, "207\n");
      fflush(_coverage_fout);
      ___coverage_array[207] = 1;
      }
    }
    }
    if ((int )*cp1 == 115) {
      {
      if (___coverage_array[208] == 0) {
        {
        fprintf(_coverage_fout, "208\n");
        fflush(_coverage_fout);
        ___coverage_array[208] = 1;
        }
      }
      }
      *cp1 = (char)0;
      {
      if (___coverage_array[209] == 0) {
        {
        fprintf(_coverage_fout, "209\n");
        fflush(_coverage_fout);
        ___coverage_array[209] = 1;
        }
      }
      }
      goto loop;
    } else {
      {
      if (___coverage_array[210] == 0) {
        {
        fprintf(_coverage_fout, "210\n");
        fflush(_coverage_fout);
        ___coverage_array[210] = 1;
        }
      }
      }

    }
  } else {
    {
    if (___coverage_array[211] == 0) {
      {
      fprintf(_coverage_fout, "211\n");
      fflush(_coverage_fout);
      ___coverage_array[211] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[212] == 0) {
    {
    fprintf(_coverage_fout, "212\n");
    fflush(_coverage_fout);
    ___coverage_array[212] = 1;
    }
  }
  }
  tmp___1 = gettext("cannot recognize %s\n");
  {
  if (___coverage_array[213] == 0) {
    {
    fprintf(_coverage_fout, "213\n");
    fflush(_coverage_fout);
    ___coverage_array[213] = 1;
    }
  }
  }
  printf((char const   */* __restrict  */)tmp___1, name);
  {
  if (___coverage_array[214] == 0) {
    {
    fprintf(_coverage_fout, "214\n");
    fflush(_coverage_fout);
    ___coverage_array[214] = 1;
    }
  }
  }
  return (1);
}
}
int equal(char *s1 , char *s2 ) 
{ 
  register char *c1 ;
  register char *c2 ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/christ/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    if (___coverage_array_already_memset == 0) {
      {
      ___coverage_array_already_memset = 1;
      memset(___coverage_array, 0, sizeof(___coverage_array));
      }
    }
    }
  }
  }
  {
  if (___coverage_array[215] == 0) {
    {
    fprintf(_coverage_fout, "215\n");
    fflush(_coverage_fout);
    ___coverage_array[215] = 1;
    }
  }
  }
  c1 = s1;
  {
  if (___coverage_array[216] == 0) {
    {
    fprintf(_coverage_fout, "216\n");
    fflush(_coverage_fout);
    ___coverage_array[216] = 1;
    }
  }
  }
  c2 = s2;
  {
  if (___coverage_array[217] == 0) {
    {
    fprintf(_coverage_fout, "217\n");
    fflush(_coverage_fout);
    ___coverage_array[217] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[218] == 0) {
      {
      fprintf(_coverage_fout, "218\n");
      fflush(_coverage_fout);
      ___coverage_array[218] = 1;
      }
    }
    }
    tmp___0 = c1;
    {
    if (___coverage_array[219] == 0) {
      {
      fprintf(_coverage_fout, "219\n");
      fflush(_coverage_fout);
      ___coverage_array[219] = 1;
      }
    }
    }
    c1 ++;
    {
    if (___coverage_array[220] == 0) {
      {
      fprintf(_coverage_fout, "220\n");
      fflush(_coverage_fout);
      ___coverage_array[220] = 1;
      }
    }
    }
    if ((int )*tmp___0 == (int )*c2) {
      {
      if (___coverage_array[221] == 0) {
        {
        fprintf(_coverage_fout, "221\n");
        fflush(_coverage_fout);
        ___coverage_array[221] = 1;
        }
      }
      }

    } else {
      {
      if (___coverage_array[222] == 0) {
        {
        fprintf(_coverage_fout, "222\n");
        fflush(_coverage_fout);
        ___coverage_array[222] = 1;
        }
      }
      }
      break;
    }
    {
    if (___coverage_array[223] == 0) {
      {
      fprintf(_coverage_fout, "223\n");
      fflush(_coverage_fout);
      ___coverage_array[223] = 1;
      }
    }
    }
    tmp = c2;
    {
    if (___coverage_array[224] == 0) {
      {
      fprintf(_coverage_fout, "224\n");
      fflush(_coverage_fout);
      ___coverage_array[224] = 1;
      }
    }
    }
    c2 ++;
    {
    if (___coverage_array[225] == 0) {
      {
      fprintf(_coverage_fout, "225\n");
      fflush(_coverage_fout);
      ___coverage_array[225] = 1;
      }
    }
    }
    if ((int )*tmp == 0) {
      {
      if (___coverage_array[226] == 0) {
        {
        fprintf(_coverage_fout, "226\n");
        fflush(_coverage_fout);
        ___coverage_array[226] = 1;
        }
      }
      }
      return (1);
    } else {
      {
      if (___coverage_array[227] == 0) {
        {
        fprintf(_coverage_fout, "227\n");
        fflush(_coverage_fout);
        ___coverage_array[227] = 1;
        }
      }
      }

    }
  }
  {
  if (___coverage_array[228] == 0) {
    {
    fprintf(_coverage_fout, "228\n");
    fflush(_coverage_fout);
    ___coverage_array[228] = 1;
    }
  }
  }
  return (0);
}
}
int init(void) 
{ 
  register char *cp ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/christ/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    if (___coverage_array_already_memset == 0) {
      {
      ___coverage_array_already_memset = 1;
      memset(___coverage_array, 0, sizeof(___coverage_array));
      }
    }
    }
  }
  }
  {
  if (___coverage_array[229] == 0) {
    {
    fprintf(_coverage_fout, "229\n");
    fflush(_coverage_fout);
    ___coverage_array[229] = 1;
    }
  }
  }
  cp = names;
  {
  if (___coverage_array[230] == 0) {
    {
    fprintf(_coverage_fout, "230\n");
    fflush(_coverage_fout);
    ___coverage_array[230] = 1;
    }
  }
  }
  i = 0;
  {
  if (___coverage_array[231] == 0) {
    {
    fprintf(_coverage_fout, "231\n");
    fflush(_coverage_fout);
    ___coverage_array[231] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[232] == 0) {
      {
      fprintf(_coverage_fout, "232\n");
      fflush(_coverage_fout);
      ___coverage_array[232] = 1;
      }
    }
    }
    if (i < 10) {
      {
      if (___coverage_array[233] == 0) {
        {
        fprintf(_coverage_fout, "233\n");
        fflush(_coverage_fout);
        ___coverage_array[233] = 1;
        }
      }
      }

    } else {
      {
      if (___coverage_array[234] == 0) {
        {
        fprintf(_coverage_fout, "234\n");
        fflush(_coverage_fout);
        ___coverage_array[234] = 1;
        }
      }
      }
      break;
    }
    {
    if (___coverage_array[235] == 0) {
      {
      fprintf(_coverage_fout, "235\n");
      fflush(_coverage_fout);
      ___coverage_array[235] = 1;
      }
    }
    }
    np = cp;
    {
    if (___coverage_array[236] == 0) {
      {
      fprintf(_coverage_fout, "236\n");
      fflush(_coverage_fout);
      ___coverage_array[236] = 1;
      }
    }
    }
    tmp = cp;
    {
    if (___coverage_array[237] == 0) {
      {
      fprintf(_coverage_fout, "237\n");
      fflush(_coverage_fout);
      ___coverage_array[237] = 1;
      }
    }
    }
    cp ++;
    {
    if (___coverage_array[238] == 0) {
      {
      fprintf(_coverage_fout, "238\n");
      fflush(_coverage_fout);
      ___coverage_array[238] = 1;
      }
    }
    }
    *tmp = (char )'*';
    {
    if (___coverage_array[239] == 0) {
      {
      fprintf(_coverage_fout, "239\n");
      fflush(_coverage_fout);
      ___coverage_array[239] = 1;
      }
    }
    }
    tmp___0 = cp;
    {
    if (___coverage_array[240] == 0) {
      {
      fprintf(_coverage_fout, "240\n");
      fflush(_coverage_fout);
      ___coverage_array[240] = 1;
      }
    }
    }
    cp ++;
    {
    if (___coverage_array[241] == 0) {
      {
      fprintf(_coverage_fout, "241\n");
      fflush(_coverage_fout);
      ___coverage_array[241] = 1;
      }
    }
    }
    *tmp___0 = (char )(i + 97);
    {
    if (___coverage_array[242] == 0) {
      {
      fprintf(_coverage_fout, "242\n");
      fflush(_coverage_fout);
      ___coverage_array[242] = 1;
      }
    }
    }
    tmp___1 = cp;
    {
    if (___coverage_array[243] == 0) {
      {
      fprintf(_coverage_fout, "243\n");
      fflush(_coverage_fout);
      ___coverage_array[243] = 1;
      }
    }
    }
    cp ++;
    {
    if (___coverage_array[244] == 0) {
      {
      fprintf(_coverage_fout, "244\n");
      fflush(_coverage_fout);
      ___coverage_array[244] = 1;
      }
    }
    }
    *tmp___1 = (char )'*';
    {
    if (___coverage_array[245] == 0) {
      {
      fprintf(_coverage_fout, "245\n");
      fflush(_coverage_fout);
      ___coverage_array[245] = 1;
      }
    }
    }
    tmp___2 = cp;
    {
    if (___coverage_array[246] == 0) {
      {
      fprintf(_coverage_fout, "246\n");
      fflush(_coverage_fout);
      ___coverage_array[246] = 1;
      }
    }
    }
    cp ++;
    {
    if (___coverage_array[247] == 0) {
      {
      fprintf(_coverage_fout, "247\n");
      fflush(_coverage_fout);
      ___coverage_array[247] = 1;
      }
    }
    }
    *tmp___2 = (char)0;
    {
    if (___coverage_array[248] == 0) {
      {
      fprintf(_coverage_fout, "248\n");
      fflush(_coverage_fout);
      ___coverage_array[248] = 1;
      }
    }
    }
    lp = hash(np);
    {
    if (___coverage_array[249] == 0) {
      {
      fprintf(_coverage_fout, "249\n");
      fflush(_coverage_fout);
      ___coverage_array[249] = 1;
      }
    }
    }
    lp->name = np;
    {
    if (___coverage_array[250] == 0) {
      {
      fprintf(_coverage_fout, "250\n");
      fflush(_coverage_fout);
      ___coverage_array[250] = 1;
      }
    }
    }
    lp->factor = 1.0;
    {
    if (___coverage_array[251] == 0) {
      {
      fprintf(_coverage_fout, "251\n");
      fflush(_coverage_fout);
      ___coverage_array[251] = 1;
      }
    }
    }
    lp->dim[i] = (char)1;
    {
    if (___coverage_array[252] == 0) {
      {
      fprintf(_coverage_fout, "252\n");
      fflush(_coverage_fout);
      ___coverage_array[252] = 1;
      }
    }
    }
    i ++;
  }
  {
  if (___coverage_array[253] == 0) {
    {
    fprintf(_coverage_fout, "253\n");
    fflush(_coverage_fout);
    ___coverage_array[253] = 1;
    }
  }
  }
  lp = hash("");
  {
  if (___coverage_array[254] == 0) {
    {
    fprintf(_coverage_fout, "254\n");
    fflush(_coverage_fout);
    ___coverage_array[254] = 1;
    }
  }
  }
  lp->name = cp - 1;
  {
  if (___coverage_array[255] == 0) {
    {
    fprintf(_coverage_fout, "255\n");
    fflush(_coverage_fout);
    ___coverage_array[255] = 1;
    }
  }
  }
  lp->factor = 1.0;
  {
  if (___coverage_array[256] == 0) {
    {
    fprintf(_coverage_fout, "256\n");
    fflush(_coverage_fout);
    ___coverage_array[256] = 1;
    }
  }
  }
  l0: 
  c = get();
  {
  if (___coverage_array[257] == 0) {
    {
    fprintf(_coverage_fout, "257\n");
    fflush(_coverage_fout);
    ___coverage_array[257] = 1;
    }
  }
  }
  if (c == 0) {
    {
    if (___coverage_array[258] == 0) {
      {
      fprintf(_coverage_fout, "258\n");
      fflush(_coverage_fout);
      ___coverage_array[258] = 1;
      }
    }
    }
    if (dumpflg) {
      {
      if (___coverage_array[259] == 0) {
        {
        fprintf(_coverage_fout, "259\n");
        fflush(_coverage_fout);
        ___coverage_array[259] = 1;
        }
      }
      }
      tmp___3 = gettext("%d units; %d bytes\n\n");
      {
      if (___coverage_array[260] == 0) {
        {
        fprintf(_coverage_fout, "260\n");
        fflush(_coverage_fout);
        ___coverage_array[260] = 1;
        }
      }
      }
      printf((char const   */* __restrict  */)tmp___3, i, cp - names);
      {
      if (___coverage_array[261] == 0) {
        {
        fprintf(_coverage_fout, "261\n");
        fflush(_coverage_fout);
        ___coverage_array[261] = 1;
        }
      }
      }
      tp = & table[0];
      {
      if (___coverage_array[262] == 0) {
        {
        fprintf(_coverage_fout, "262\n");
        fflush(_coverage_fout);
        ___coverage_array[262] = 1;
        }
      }
      }
      while (1) {
        {
        if (___coverage_array[263] == 0) {
          {
          fprintf(_coverage_fout, "263\n");
          fflush(_coverage_fout);
          ___coverage_array[263] = 1;
          }
        }
        }
        if ((unsigned long )tp < (unsigned long )(& table[1009])) {
          {
          if (___coverage_array[264] == 0) {
            {
            fprintf(_coverage_fout, "264\n");
            fflush(_coverage_fout);
            ___coverage_array[264] = 1;
            }
          }
          }

        } else {
          {
          if (___coverage_array[265] == 0) {
            {
            fprintf(_coverage_fout, "265\n");
            fflush(_coverage_fout);
            ___coverage_array[265] = 1;
            }
          }
          }
          break;
        }
        {
        if (___coverage_array[266] == 0) {
          {
          fprintf(_coverage_fout, "266\n");
          fflush(_coverage_fout);
          ___coverage_array[266] = 1;
          }
        }
        }
        if ((unsigned long )tp->name == (unsigned long )((char *)0)) {
          {
          if (___coverage_array[267] == 0) {
            {
            fprintf(_coverage_fout, "267\n");
            fflush(_coverage_fout);
            ___coverage_array[267] = 1;
            }
          }
          }
          goto __Cont;
        } else {
          {
          if (___coverage_array[268] == 0) {
            {
            fprintf(_coverage_fout, "268\n");
            fflush(_coverage_fout);
            ___coverage_array[268] = 1;
            }
          }
          }

        }
        {
        if (___coverage_array[269] == 0) {
          {
          fprintf(_coverage_fout, "269\n");
          fflush(_coverage_fout);
          ___coverage_array[269] = 1;
          }
        }
        }
        printf((char const   */* __restrict  */)"%s", tp->name);
        {
        if (___coverage_array[270] == 0) {
          {
          fprintf(_coverage_fout, "270\n");
          fflush(_coverage_fout);
          ___coverage_array[270] = 1;
          }
        }
        }
        units((struct unit *)tp);
        {
        if (___coverage_array[271] == 0) {
          {
          fprintf(_coverage_fout, "271\n");
          fflush(_coverage_fout);
          ___coverage_array[271] = 1;
          }
        }
        }
        __Cont: /* CIL Label */ 
        tp ++;
      }
    } else {
      {
      if (___coverage_array[272] == 0) {
        {
        fprintf(_coverage_fout, "272\n");
        fflush(_coverage_fout);
        ___coverage_array[272] = 1;
        }
      }
      }

    }
    {
    if (___coverage_array[273] == 0) {
      {
      fprintf(_coverage_fout, "273\n");
      fflush(_coverage_fout);
      ___coverage_array[273] = 1;
      }
    }
    }
    fclose(inp);
    {
    if (___coverage_array[274] == 0) {
      {
      fprintf(_coverage_fout, "274\n");
      fflush(_coverage_fout);
      ___coverage_array[274] = 1;
      }
    }
    }
    inp = stdin;
    {
    if (___coverage_array[275] == 0) {
      {
      fprintf(_coverage_fout, "275\n");
      fflush(_coverage_fout);
      ___coverage_array[275] = 1;
      }
    }
    }
    return;
  } else {
    {
    if (___coverage_array[276] == 0) {
      {
      fprintf(_coverage_fout, "276\n");
      fflush(_coverage_fout);
      ___coverage_array[276] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[277] == 0) {
    {
    fprintf(_coverage_fout, "277\n");
    fflush(_coverage_fout);
    ___coverage_array[277] = 1;
    }
  }
  }
  if (c == 47) {
    {
    if (___coverage_array[278] == 0) {
      {
      fprintf(_coverage_fout, "278\n");
      fflush(_coverage_fout);
      ___coverage_array[278] = 1;
      }
    }
    }
    while (1) {
      {
      if (___coverage_array[279] == 0) {
        {
        fprintf(_coverage_fout, "279\n");
        fflush(_coverage_fout);
        ___coverage_array[279] = 1;
        }
      }
      }
      if (c != 10) {
        {
        if (___coverage_array[280] == 0) {
          {
          fprintf(_coverage_fout, "280\n");
          fflush(_coverage_fout);
          ___coverage_array[280] = 1;
          }
        }
        }
        if (c != 0) {
          {
          if (___coverage_array[281] == 0) {
            {
            fprintf(_coverage_fout, "281\n");
            fflush(_coverage_fout);
            ___coverage_array[281] = 1;
            }
          }
          }

        } else {
          {
          if (___coverage_array[282] == 0) {
            {
            fprintf(_coverage_fout, "282\n");
            fflush(_coverage_fout);
            ___coverage_array[282] = 1;
            }
          }
          }
          break;
        }
      } else {
        {
        if (___coverage_array[283] == 0) {
          {
          fprintf(_coverage_fout, "283\n");
          fflush(_coverage_fout);
          ___coverage_array[283] = 1;
          }
        }
        }
        break;
      }
      {
      if (___coverage_array[284] == 0) {
        {
        fprintf(_coverage_fout, "284\n");
        fflush(_coverage_fout);
        ___coverage_array[284] = 1;
        }
      }
      }
      c = get();
    }
    {
    if (___coverage_array[285] == 0) {
      {
      fprintf(_coverage_fout, "285\n");
      fflush(_coverage_fout);
      ___coverage_array[285] = 1;
      }
    }
    }
    goto l0;
  } else {
    {
    if (___coverage_array[286] == 0) {
      {
      fprintf(_coverage_fout, "286\n");
      fflush(_coverage_fout);
      ___coverage_array[286] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[287] == 0) {
    {
    fprintf(_coverage_fout, "287\n");
    fflush(_coverage_fout);
    ___coverage_array[287] = 1;
    }
  }
  }
  if (c == 10) {
    {
    if (___coverage_array[288] == 0) {
      {
      fprintf(_coverage_fout, "288\n");
      fflush(_coverage_fout);
      ___coverage_array[288] = 1;
      }
    }
    }
    goto l0;
  } else {
    {
    if (___coverage_array[289] == 0) {
      {
      fprintf(_coverage_fout, "289\n");
      fflush(_coverage_fout);
      ___coverage_array[289] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[290] == 0) {
    {
    fprintf(_coverage_fout, "290\n");
    fflush(_coverage_fout);
    ___coverage_array[290] = 1;
    }
  }
  }
  np = cp;
  {
  if (___coverage_array[291] == 0) {
    {
    fprintf(_coverage_fout, "291\n");
    fflush(_coverage_fout);
    ___coverage_array[291] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[292] == 0) {
      {
      fprintf(_coverage_fout, "292\n");
      fflush(_coverage_fout);
      ___coverage_array[292] = 1;
      }
    }
    }
    if (c != 32) {
      {
      if (___coverage_array[293] == 0) {
        {
        fprintf(_coverage_fout, "293\n");
        fflush(_coverage_fout);
        ___coverage_array[293] = 1;
        }
      }
      }
      if (c != 9) {
        {
        if (___coverage_array[294] == 0) {
          {
          fprintf(_coverage_fout, "294\n");
          fflush(_coverage_fout);
          ___coverage_array[294] = 1;
          }
        }
        }

      } else {
        {
        if (___coverage_array[295] == 0) {
          {
          fprintf(_coverage_fout, "295\n");
          fflush(_coverage_fout);
          ___coverage_array[295] = 1;
          }
        }
        }
        break;
      }
    } else {
      {
      if (___coverage_array[296] == 0) {
        {
        fprintf(_coverage_fout, "296\n");
        fflush(_coverage_fout);
        ___coverage_array[296] = 1;
        }
      }
      }
      break;
    }
    {
    if (___coverage_array[297] == 0) {
      {
      fprintf(_coverage_fout, "297\n");
      fflush(_coverage_fout);
      ___coverage_array[297] = 1;
      }
    }
    }
    tmp___4 = cp;
    {
    if (___coverage_array[298] == 0) {
      {
      fprintf(_coverage_fout, "298\n");
      fflush(_coverage_fout);
      ___coverage_array[298] = 1;
      }
    }
    }
    cp ++;
    {
    if (___coverage_array[299] == 0) {
      {
      fprintf(_coverage_fout, "299\n");
      fflush(_coverage_fout);
      ___coverage_array[299] = 1;
      }
    }
    }
    *tmp___4 = (char )c;
    {
    if (___coverage_array[300] == 0) {
      {
      fprintf(_coverage_fout, "300\n");
      fflush(_coverage_fout);
      ___coverage_array[300] = 1;
      }
    }
    }
    c = get();
    {
    if (___coverage_array[301] == 0) {
      {
      fprintf(_coverage_fout, "301\n");
      fflush(_coverage_fout);
      ___coverage_array[301] = 1;
      }
    }
    }
    if (c == 0) {
      {
      if (___coverage_array[302] == 0) {
        {
        fprintf(_coverage_fout, "302\n");
        fflush(_coverage_fout);
        ___coverage_array[302] = 1;
        }
      }
      }
      goto l0;
    } else {
      {
      if (___coverage_array[303] == 0) {
        {
        fprintf(_coverage_fout, "303\n");
        fflush(_coverage_fout);
        ___coverage_array[303] = 1;
        }
      }
      }

    }
    {
    if (___coverage_array[304] == 0) {
      {
      fprintf(_coverage_fout, "304\n");
      fflush(_coverage_fout);
      ___coverage_array[304] = 1;
      }
    }
    }
    if (c == 10) {
      {
      if (___coverage_array[305] == 0) {
        {
        fprintf(_coverage_fout, "305\n");
        fflush(_coverage_fout);
        ___coverage_array[305] = 1;
        }
      }
      }
      tmp___5 = cp;
      {
      if (___coverage_array[306] == 0) {
        {
        fprintf(_coverage_fout, "306\n");
        fflush(_coverage_fout);
        ___coverage_array[306] = 1;
        }
      }
      }
      cp ++;
      {
      if (___coverage_array[307] == 0) {
        {
        fprintf(_coverage_fout, "307\n");
        fflush(_coverage_fout);
        ___coverage_array[307] = 1;
        }
      }
      }
      *tmp___5 = (char)0;
      {
      if (___coverage_array[308] == 0) {
        {
        fprintf(_coverage_fout, "308\n");
        fflush(_coverage_fout);
        ___coverage_array[308] = 1;
        }
      }
      }
      tp = hash(np);
      {
      if (___coverage_array[309] == 0) {
        {
        fprintf(_coverage_fout, "309\n");
        fflush(_coverage_fout);
        ___coverage_array[309] = 1;
        }
      }
      }
      if (tp->name) {
        {
        if (___coverage_array[310] == 0) {
          {
          fprintf(_coverage_fout, "310\n");
          fflush(_coverage_fout);
          ___coverage_array[310] = 1;
          }
        }
        }
        goto redef;
      } else {
        {
        if (___coverage_array[311] == 0) {
          {
          fprintf(_coverage_fout, "311\n");
          fflush(_coverage_fout);
          ___coverage_array[311] = 1;
          }
        }
        }

      }
      {
      if (___coverage_array[312] == 0) {
        {
        fprintf(_coverage_fout, "312\n");
        fflush(_coverage_fout);
        ___coverage_array[312] = 1;
        }
      }
      }
      tp->name = np;
      {
      if (___coverage_array[313] == 0) {
        {
        fprintf(_coverage_fout, "313\n");
        fflush(_coverage_fout);
        ___coverage_array[313] = 1;
        }
      }
      }
      tp->factor = lp->factor;
      {
      if (___coverage_array[314] == 0) {
        {
        fprintf(_coverage_fout, "314\n");
        fflush(_coverage_fout);
        ___coverage_array[314] = 1;
        }
      }
      }
      c = 0;
      {
      if (___coverage_array[315] == 0) {
        {
        fprintf(_coverage_fout, "315\n");
        fflush(_coverage_fout);
        ___coverage_array[315] = 1;
        }
      }
      }
      while (1) {
        {
        if (___coverage_array[316] == 0) {
          {
          fprintf(_coverage_fout, "316\n");
          fflush(_coverage_fout);
          ___coverage_array[316] = 1;
          }
        }
        }
        if (c < 10) {
          {
          if (___coverage_array[317] == 0) {
            {
            fprintf(_coverage_fout, "317\n");
            fflush(_coverage_fout);
            ___coverage_array[317] = 1;
            }
          }
          }

        } else {
          {
          if (___coverage_array[318] == 0) {
            {
            fprintf(_coverage_fout, "318\n");
            fflush(_coverage_fout);
            ___coverage_array[318] = 1;
            }
          }
          }
          break;
        }
        {
        if (___coverage_array[319] == 0) {
          {
          fprintf(_coverage_fout, "319\n");
          fflush(_coverage_fout);
          ___coverage_array[319] = 1;
          }
        }
        }
        tp->dim[c] = lp->dim[c];
        {
        if (___coverage_array[320] == 0) {
          {
          fprintf(_coverage_fout, "320\n");
          fflush(_coverage_fout);
          ___coverage_array[320] = 1;
          }
        }
        }
        c ++;
      }
      {
      if (___coverage_array[321] == 0) {
        {
        fprintf(_coverage_fout, "321\n");
        fflush(_coverage_fout);
        ___coverage_array[321] = 1;
        }
      }
      }
      i ++;
      {
      if (___coverage_array[322] == 0) {
        {
        fprintf(_coverage_fout, "322\n");
        fflush(_coverage_fout);
        ___coverage_array[322] = 1;
        }
      }
      }
      goto l0;
    } else {
      {
      if (___coverage_array[323] == 0) {
        {
        fprintf(_coverage_fout, "323\n");
        fflush(_coverage_fout);
        ___coverage_array[323] = 1;
        }
      }
      }

    }
  }
  {
  if (___coverage_array[324] == 0) {
    {
    fprintf(_coverage_fout, "324\n");
    fflush(_coverage_fout);
    ___coverage_array[324] = 1;
    }
  }
  }
  tmp___6 = cp;
  {
  if (___coverage_array[325] == 0) {
    {
    fprintf(_coverage_fout, "325\n");
    fflush(_coverage_fout);
    ___coverage_array[325] = 1;
    }
  }
  }
  cp ++;
  {
  if (___coverage_array[326] == 0) {
    {
    fprintf(_coverage_fout, "326\n");
    fflush(_coverage_fout);
    ___coverage_array[326] = 1;
    }
  }
  }
  *tmp___6 = (char)0;
  {
  if (___coverage_array[327] == 0) {
    {
    fprintf(_coverage_fout, "327\n");
    fflush(_coverage_fout);
    ___coverage_array[327] = 1;
    }
  }
  }
  lp = hash(np);
  {
  if (___coverage_array[328] == 0) {
    {
    fprintf(_coverage_fout, "328\n");
    fflush(_coverage_fout);
    ___coverage_array[328] = 1;
    }
  }
  }
  if (lp->name) {
    {
    if (___coverage_array[329] == 0) {
      {
      fprintf(_coverage_fout, "329\n");
      fflush(_coverage_fout);
      ___coverage_array[329] = 1;
      }
    }
    }
    goto redef;
  } else {
    {
    if (___coverage_array[330] == 0) {
      {
      fprintf(_coverage_fout, "330\n");
      fflush(_coverage_fout);
      ___coverage_array[330] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[331] == 0) {
    {
    fprintf(_coverage_fout, "331\n");
    fflush(_coverage_fout);
    ___coverage_array[331] = 1;
    }
  }
  }
  convr((struct unit *)lp);
  {
  if (___coverage_array[332] == 0) {
    {
    fprintf(_coverage_fout, "332\n");
    fflush(_coverage_fout);
    ___coverage_array[332] = 1;
    }
  }
  }
  lp->name = np;
  {
  if (___coverage_array[333] == 0) {
    {
    fprintf(_coverage_fout, "333\n");
    fflush(_coverage_fout);
    ___coverage_array[333] = 1;
    }
  }
  }
  f = 0;
  {
  if (___coverage_array[334] == 0) {
    {
    fprintf(_coverage_fout, "334\n");
    fflush(_coverage_fout);
    ___coverage_array[334] = 1;
    }
  }
  }
  i ++;
  {
  if (___coverage_array[335] == 0) {
    {
    fprintf(_coverage_fout, "335\n");
    fflush(_coverage_fout);
    ___coverage_array[335] = 1;
    }
  }
  }
  if (lp->factor != 1.0) {
    {
    if (___coverage_array[336] == 0) {
      {
      fprintf(_coverage_fout, "336\n");
      fflush(_coverage_fout);
      ___coverage_array[336] = 1;
      }
    }
    }
    goto l0;
  } else {
    {
    if (___coverage_array[337] == 0) {
      {
      fprintf(_coverage_fout, "337\n");
      fflush(_coverage_fout);
      ___coverage_array[337] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[338] == 0) {
    {
    fprintf(_coverage_fout, "338\n");
    fflush(_coverage_fout);
    ___coverage_array[338] = 1;
    }
  }
  }
  c = 0;
  {
  if (___coverage_array[339] == 0) {
    {
    fprintf(_coverage_fout, "339\n");
    fflush(_coverage_fout);
    ___coverage_array[339] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[340] == 0) {
      {
      fprintf(_coverage_fout, "340\n");
      fflush(_coverage_fout);
      ___coverage_array[340] = 1;
      }
    }
    }
    if (c < 10) {
      {
      if (___coverage_array[341] == 0) {
        {
        fprintf(_coverage_fout, "341\n");
        fflush(_coverage_fout);
        ___coverage_array[341] = 1;
        }
      }
      }

    } else {
      {
      if (___coverage_array[342] == 0) {
        {
        fprintf(_coverage_fout, "342\n");
        fflush(_coverage_fout);
        ___coverage_array[342] = 1;
        }
      }
      }
      break;
    }
    {
    if (___coverage_array[343] == 0) {
      {
      fprintf(_coverage_fout, "343\n");
      fflush(_coverage_fout);
      ___coverage_array[343] = 1;
      }
    }
    }
    t = (int )lp->dim[c];
    {
    if (___coverage_array[344] == 0) {
      {
      fprintf(_coverage_fout, "344\n");
      fflush(_coverage_fout);
      ___coverage_array[344] = 1;
      }
    }
    }
    if (t > 1) {
      {
      if (___coverage_array[345] == 0) {
        {
        fprintf(_coverage_fout, "345\n");
        fflush(_coverage_fout);
        ___coverage_array[345] = 1;
        }
      }
      }
      goto l0;
    } else {
      {
      if (___coverage_array[346] == 0) {
        {
        fprintf(_coverage_fout, "346\n");
        fflush(_coverage_fout);
        ___coverage_array[346] = 1;
        }
      }
      }
      if (f > 0) {
        {
        if (___coverage_array[347] == 0) {
          {
          fprintf(_coverage_fout, "347\n");
          fflush(_coverage_fout);
          ___coverage_array[347] = 1;
          }
        }
        }
        if (t != 0) {
          {
          if (___coverage_array[348] == 0) {
            {
            fprintf(_coverage_fout, "348\n");
            fflush(_coverage_fout);
            ___coverage_array[348] = 1;
            }
          }
          }
          goto l0;
        } else {
          {
          if (___coverage_array[349] == 0) {
            {
            fprintf(_coverage_fout, "349\n");
            fflush(_coverage_fout);
            ___coverage_array[349] = 1;
            }
          }
          }

        }
      } else {
        {
        if (___coverage_array[350] == 0) {
          {
          fprintf(_coverage_fout, "350\n");
          fflush(_coverage_fout);
          ___coverage_array[350] = 1;
          }
        }
        }

      }
    }
    {
    if (___coverage_array[351] == 0) {
      {
      fprintf(_coverage_fout, "351\n");
      fflush(_coverage_fout);
      ___coverage_array[351] = 1;
      }
    }
    }
    if (f == 0) {
      {
      if (___coverage_array[352] == 0) {
        {
        fprintf(_coverage_fout, "352\n");
        fflush(_coverage_fout);
        ___coverage_array[352] = 1;
        }
      }
      }
      if (t == 1) {
        {
        if (___coverage_array[353] == 0) {
          {
          fprintf(_coverage_fout, "353\n");
          fflush(_coverage_fout);
          ___coverage_array[353] = 1;
          }
        }
        }
        if (unames[c]) {
          {
          if (___coverage_array[354] == 0) {
            {
            fprintf(_coverage_fout, "354\n");
            fflush(_coverage_fout);
            ___coverage_array[354] = 1;
            }
          }
          }
          goto l0;
        } else {
          {
          if (___coverage_array[355] == 0) {
            {
            fprintf(_coverage_fout, "355\n");
            fflush(_coverage_fout);
            ___coverage_array[355] = 1;
            }
          }
          }

        }
        {
        if (___coverage_array[356] == 0) {
          {
          fprintf(_coverage_fout, "356\n");
          fflush(_coverage_fout);
          ___coverage_array[356] = 1;
          }
        }
        }
        f = c + 1;
      } else {
        {
        if (___coverage_array[357] == 0) {
          {
          fprintf(_coverage_fout, "357\n");
          fflush(_coverage_fout);
          ___coverage_array[357] = 1;
          }
        }
        }

      }
    } else {
      {
      if (___coverage_array[358] == 0) {
        {
        fprintf(_coverage_fout, "358\n");
        fflush(_coverage_fout);
        ___coverage_array[358] = 1;
        }
      }
      }

    }
    {
    if (___coverage_array[359] == 0) {
      {
      fprintf(_coverage_fout, "359\n");
      fflush(_coverage_fout);
      ___coverage_array[359] = 1;
      }
    }
    }
    c ++;
  }
  {
  if (___coverage_array[360] == 0) {
    {
    fprintf(_coverage_fout, "360\n");
    fflush(_coverage_fout);
    ___coverage_array[360] = 1;
    }
  }
  }
  if (f > 0) {
    {
    if (___coverage_array[361] == 0) {
      {
      fprintf(_coverage_fout, "361\n");
      fflush(_coverage_fout);
      ___coverage_array[361] = 1;
      }
    }
    }
    unames[f - 1] = np;
  } else {
    {
    if (___coverage_array[362] == 0) {
      {
      fprintf(_coverage_fout, "362\n");
      fflush(_coverage_fout);
      ___coverage_array[362] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[363] == 0) {
    {
    fprintf(_coverage_fout, "363\n");
    fflush(_coverage_fout);
    ___coverage_array[363] = 1;
    }
  }
  }
  goto l0;
  {
  if (___coverage_array[364] == 0) {
    {
    fprintf(_coverage_fout, "364\n");
    fflush(_coverage_fout);
    ___coverage_array[364] = 1;
    }
  }
  }
  redef: 
  tmp___7 = gettext("redefinition %s\n");
  {
  if (___coverage_array[365] == 0) {
    {
    fprintf(_coverage_fout, "365\n");
    fflush(_coverage_fout);
    ___coverage_array[365] = 1;
    }
  }
  }
  printf((char const   */* __restrict  */)tmp___7, np);
  {
  if (___coverage_array[366] == 0) {
    {
    fprintf(_coverage_fout, "366\n");
    fflush(_coverage_fout);
    ___coverage_array[366] = 1;
    }
  }
  }
  goto l0;
}
}
double getflt(void) 
{ 
  register int c ;
  register int i ;
  register int dp ;
  double d ;
  double e ;
  int f ;
  int tmp ;
  double tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/christ/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    if (___coverage_array_already_memset == 0) {
      {
      ___coverage_array_already_memset = 1;
      memset(___coverage_array, 0, sizeof(___coverage_array));
      }
    }
    }
  }
  }
  {
  if (___coverage_array[367] == 0) {
    {
    fprintf(_coverage_fout, "367\n");
    fflush(_coverage_fout);
    ___coverage_array[367] = 1;
    }
  }
  }
  d = 0.;
  {
  if (___coverage_array[368] == 0) {
    {
    fprintf(_coverage_fout, "368\n");
    fflush(_coverage_fout);
    ___coverage_array[368] = 1;
    }
  }
  }
  dp = 0;
  {
  if (___coverage_array[369] == 0) {
    {
    fprintf(_coverage_fout, "369\n");
    fflush(_coverage_fout);
    ___coverage_array[369] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[370] == 0) {
      {
      fprintf(_coverage_fout, "370\n");
      fflush(_coverage_fout);
      ___coverage_array[370] = 1;
      }
    }
    }
    c = get();
    {
    if (___coverage_array[371] == 0) {
      {
      fprintf(_coverage_fout, "371\n");
      fflush(_coverage_fout);
      ___coverage_array[371] = 1;
      }
    }
    }
    if (c == 32) {
      {
      if (___coverage_array[372] == 0) {
        {
        fprintf(_coverage_fout, "372\n");
        fflush(_coverage_fout);
        ___coverage_array[372] = 1;
        }
      }
      }

    } else {
      {
      if (___coverage_array[373] == 0) {
        {
        fprintf(_coverage_fout, "373\n");
        fflush(_coverage_fout);
        ___coverage_array[373] = 1;
        }
      }
      }
      if (c == 9) {
        {
        if (___coverage_array[374] == 0) {
          {
          fprintf(_coverage_fout, "374\n");
          fflush(_coverage_fout);
          ___coverage_array[374] = 1;
          }
        }
        }

      } else {
        {
        if (___coverage_array[375] == 0) {
          {
          fprintf(_coverage_fout, "375\n");
          fflush(_coverage_fout);
          ___coverage_array[375] = 1;
          }
        }
        }
        break;
      }
    }
  }
  {
  if (___coverage_array[376] == 0) {
    {
    fprintf(_coverage_fout, "376\n");
    fflush(_coverage_fout);
    ___coverage_array[376] = 1;
    }
  }
  }
  l1: 
  if (c >= 48) {
    {
    if (___coverage_array[377] == 0) {
      {
      fprintf(_coverage_fout, "377\n");
      fflush(_coverage_fout);
      ___coverage_array[377] = 1;
      }
    }
    }
    if (c <= 57) {
      {
      if (___coverage_array[378] == 0) {
        {
        fprintf(_coverage_fout, "378\n");
        fflush(_coverage_fout);
        ___coverage_array[378] = 1;
        }
      }
      }
      d = (d * 10. + (double )c) - (double )48;
      {
      if (___coverage_array[379] == 0) {
        {
        fprintf(_coverage_fout, "379\n");
        fflush(_coverage_fout);
        ___coverage_array[379] = 1;
        }
      }
      }
      if (dp) {
        {
        if (___coverage_array[380] == 0) {
          {
          fprintf(_coverage_fout, "380\n");
          fflush(_coverage_fout);
          ___coverage_array[380] = 1;
          }
        }
        }
        dp ++;
      } else {
        {
        if (___coverage_array[381] == 0) {
          {
          fprintf(_coverage_fout, "381\n");
          fflush(_coverage_fout);
          ___coverage_array[381] = 1;
          }
        }
        }

      }
      {
      if (___coverage_array[382] == 0) {
        {
        fprintf(_coverage_fout, "382\n");
        fflush(_coverage_fout);
        ___coverage_array[382] = 1;
        }
      }
      }
      c = get();
      {
      if (___coverage_array[383] == 0) {
        {
        fprintf(_coverage_fout, "383\n");
        fflush(_coverage_fout);
        ___coverage_array[383] = 1;
        }
      }
      }
      goto l1;
    } else {
      {
      if (___coverage_array[384] == 0) {
        {
        fprintf(_coverage_fout, "384\n");
        fflush(_coverage_fout);
        ___coverage_array[384] = 1;
        }
      }
      }

    }
  } else {
    {
    if (___coverage_array[385] == 0) {
      {
      fprintf(_coverage_fout, "385\n");
      fflush(_coverage_fout);
      ___coverage_array[385] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[386] == 0) {
    {
    fprintf(_coverage_fout, "386\n");
    fflush(_coverage_fout);
    ___coverage_array[386] = 1;
    }
  }
  }
  if (c == 46) {
    {
    if (___coverage_array[387] == 0) {
      {
      fprintf(_coverage_fout, "387\n");
      fflush(_coverage_fout);
      ___coverage_array[387] = 1;
      }
    }
    }
    dp ++;
    {
    if (___coverage_array[388] == 0) {
      {
      fprintf(_coverage_fout, "388\n");
      fflush(_coverage_fout);
      ___coverage_array[388] = 1;
      }
    }
    }
    c = get();
    {
    if (___coverage_array[389] == 0) {
      {
      fprintf(_coverage_fout, "389\n");
      fflush(_coverage_fout);
      ___coverage_array[389] = 1;
      }
    }
    }
    goto l1;
  } else {
    {
    if (___coverage_array[390] == 0) {
      {
      fprintf(_coverage_fout, "390\n");
      fflush(_coverage_fout);
      ___coverage_array[390] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[391] == 0) {
    {
    fprintf(_coverage_fout, "391\n");
    fflush(_coverage_fout);
    ___coverage_array[391] = 1;
    }
  }
  }
  if (dp) {
    {
    if (___coverage_array[392] == 0) {
      {
      fprintf(_coverage_fout, "392\n");
      fflush(_coverage_fout);
      ___coverage_array[392] = 1;
      }
    }
    }
    dp --;
  } else {
    {
    if (___coverage_array[393] == 0) {
      {
      fprintf(_coverage_fout, "393\n");
      fflush(_coverage_fout);
      ___coverage_array[393] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[394] == 0) {
    {
    fprintf(_coverage_fout, "394\n");
    fflush(_coverage_fout);
    ___coverage_array[394] = 1;
    }
  }
  }
  if (c == 43) {
    {
    if (___coverage_array[395] == 0) {
      {
      fprintf(_coverage_fout, "395\n");
      fflush(_coverage_fout);
      ___coverage_array[395] = 1;
      }
    }
    }
    goto _L;
  } else {
    {
    if (___coverage_array[396] == 0) {
      {
      fprintf(_coverage_fout, "396\n");
      fflush(_coverage_fout);
      ___coverage_array[396] = 1;
      }
    }
    }
    if (c == 45) {
      {
      if (___coverage_array[397] == 0) {
        {
        fprintf(_coverage_fout, "397\n");
        fflush(_coverage_fout);
        ___coverage_array[397] = 1;
        }
      }
      }
      _L: /* CIL Label */ 
      f = 0;
      {
      if (___coverage_array[398] == 0) {
        {
        fprintf(_coverage_fout, "398\n");
        fflush(_coverage_fout);
        ___coverage_array[398] = 1;
        }
      }
      }
      if (c == 45) {
        {
        if (___coverage_array[399] == 0) {
          {
          fprintf(_coverage_fout, "399\n");
          fflush(_coverage_fout);
          ___coverage_array[399] = 1;
          }
        }
        }
        f ++;
      } else {
        {
        if (___coverage_array[400] == 0) {
          {
          fprintf(_coverage_fout, "400\n");
          fflush(_coverage_fout);
          ___coverage_array[400] = 1;
          }
        }
        }

      }
      {
      if (___coverage_array[401] == 0) {
        {
        fprintf(_coverage_fout, "401\n");
        fflush(_coverage_fout);
        ___coverage_array[401] = 1;
        }
      }
      }
      i = 0;
      {
      if (___coverage_array[402] == 0) {
        {
        fprintf(_coverage_fout, "402\n");
        fflush(_coverage_fout);
        ___coverage_array[402] = 1;
        }
      }
      }
      c = get();
      {
      if (___coverage_array[403] == 0) {
        {
        fprintf(_coverage_fout, "403\n");
        fflush(_coverage_fout);
        ___coverage_array[403] = 1;
        }
      }
      }
      while (1) {
        {
        if (___coverage_array[404] == 0) {
          {
          fprintf(_coverage_fout, "404\n");
          fflush(_coverage_fout);
          ___coverage_array[404] = 1;
          }
        }
        }
        if (c >= 48) {
          {
          if (___coverage_array[405] == 0) {
            {
            fprintf(_coverage_fout, "405\n");
            fflush(_coverage_fout);
            ___coverage_array[405] = 1;
            }
          }
          }
          if (c <= 57) {
            {
            if (___coverage_array[406] == 0) {
              {
              fprintf(_coverage_fout, "406\n");
              fflush(_coverage_fout);
              ___coverage_array[406] = 1;
              }
            }
            }

          } else {
            {
            if (___coverage_array[407] == 0) {
              {
              fprintf(_coverage_fout, "407\n");
              fflush(_coverage_fout);
              ___coverage_array[407] = 1;
              }
            }
            }
            break;
          }
        } else {
          {
          if (___coverage_array[408] == 0) {
            {
            fprintf(_coverage_fout, "408\n");
            fflush(_coverage_fout);
            ___coverage_array[408] = 1;
            }
          }
          }
          break;
        }
        {
        if (___coverage_array[409] == 0) {
          {
          fprintf(_coverage_fout, "409\n");
          fflush(_coverage_fout);
          ___coverage_array[409] = 1;
          }
        }
        }
        i = (i * 10 + c) - 48;
        {
        if (___coverage_array[410] == 0) {
          {
          fprintf(_coverage_fout, "410\n");
          fflush(_coverage_fout);
          ___coverage_array[410] = 1;
          }
        }
        }
        c = get();
      }
      {
      if (___coverage_array[411] == 0) {
        {
        fprintf(_coverage_fout, "411\n");
        fflush(_coverage_fout);
        ___coverage_array[411] = 1;
        }
      }
      }
      if (f) {
        {
        if (___coverage_array[412] == 0) {
          {
          fprintf(_coverage_fout, "412\n");
          fflush(_coverage_fout);
          ___coverage_array[412] = 1;
          }
        }
        }
        i = - i;
      } else {
        {
        if (___coverage_array[413] == 0) {
          {
          fprintf(_coverage_fout, "413\n");
          fflush(_coverage_fout);
          ___coverage_array[413] = 1;
          }
        }
        }

      }
      {
      if (___coverage_array[414] == 0) {
        {
        fprintf(_coverage_fout, "414\n");
        fflush(_coverage_fout);
        ___coverage_array[414] = 1;
        }
      }
      }
      dp -= i;
    } else {
      {
      if (___coverage_array[415] == 0) {
        {
        fprintf(_coverage_fout, "415\n");
        fflush(_coverage_fout);
        ___coverage_array[415] = 1;
        }
      }
      }

    }
  }
  {
  if (___coverage_array[416] == 0) {
    {
    fprintf(_coverage_fout, "416\n");
    fflush(_coverage_fout);
    ___coverage_array[416] = 1;
    }
  }
  }
  e = 1.;
  {
  if (___coverage_array[417] == 0) {
    {
    fprintf(_coverage_fout, "417\n");
    fflush(_coverage_fout);
    ___coverage_array[417] = 1;
    }
  }
  }
  i = dp;
  {
  if (___coverage_array[418] == 0) {
    {
    fprintf(_coverage_fout, "418\n");
    fflush(_coverage_fout);
    ___coverage_array[418] = 1;
    }
  }
  }
  if (i < 0) {
    {
    if (___coverage_array[419] == 0) {
      {
      fprintf(_coverage_fout, "419\n");
      fflush(_coverage_fout);
      ___coverage_array[419] = 1;
      }
    }
    }
    i = - i;
  } else {
    {
    if (___coverage_array[420] == 0) {
      {
      fprintf(_coverage_fout, "420\n");
      fflush(_coverage_fout);
      ___coverage_array[420] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[421] == 0) {
    {
    fprintf(_coverage_fout, "421\n");
    fflush(_coverage_fout);
    ___coverage_array[421] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[422] == 0) {
      {
      fprintf(_coverage_fout, "422\n");
      fflush(_coverage_fout);
      ___coverage_array[422] = 1;
      }
    }
    }
    tmp = i;
    {
    if (___coverage_array[423] == 0) {
      {
      fprintf(_coverage_fout, "423\n");
      fflush(_coverage_fout);
      ___coverage_array[423] = 1;
      }
    }
    }
    i --;
    {
    if (___coverage_array[424] == 0) {
      {
      fprintf(_coverage_fout, "424\n");
      fflush(_coverage_fout);
      ___coverage_array[424] = 1;
      }
    }
    }
    if (tmp) {
      {
      if (___coverage_array[425] == 0) {
        {
        fprintf(_coverage_fout, "425\n");
        fflush(_coverage_fout);
        ___coverage_array[425] = 1;
        }
      }
      }

    } else {
      {
      if (___coverage_array[426] == 0) {
        {
        fprintf(_coverage_fout, "426\n");
        fflush(_coverage_fout);
        ___coverage_array[426] = 1;
        }
      }
      }
      break;
    }
    {
    if (___coverage_array[427] == 0) {
      {
      fprintf(_coverage_fout, "427\n");
      fflush(_coverage_fout);
      ___coverage_array[427] = 1;
      }
    }
    }
    e *= 10.;
  }
  {
  if (___coverage_array[428] == 0) {
    {
    fprintf(_coverage_fout, "428\n");
    fflush(_coverage_fout);
    ___coverage_array[428] = 1;
    }
  }
  }
  if (dp < 0) {
    {
    if (___coverage_array[429] == 0) {
      {
      fprintf(_coverage_fout, "429\n");
      fflush(_coverage_fout);
      ___coverage_array[429] = 1;
      }
    }
    }
    d *= e;
  } else {
    {
    if (___coverage_array[430] == 0) {
      {
      fprintf(_coverage_fout, "430\n");
      fflush(_coverage_fout);
      ___coverage_array[430] = 1;
      }
    }
    }
    d /= e;
  }
  {
  if (___coverage_array[431] == 0) {
    {
    fprintf(_coverage_fout, "431\n");
    fflush(_coverage_fout);
    ___coverage_array[431] = 1;
    }
  }
  }
  if (c == 124) {
    {
    if (___coverage_array[432] == 0) {
      {
      fprintf(_coverage_fout, "432\n");
      fflush(_coverage_fout);
      ___coverage_array[432] = 1;
      }
    }
    }
    tmp___0 = getflt();
    {
    if (___coverage_array[433] == 0) {
      {
      fprintf(_coverage_fout, "433\n");
      fflush(_coverage_fout);
      ___coverage_array[433] = 1;
      }
    }
    }
    return (d / tmp___0);
  } else {
    {
    if (___coverage_array[434] == 0) {
      {
      fprintf(_coverage_fout, "434\n");
      fflush(_coverage_fout);
      ___coverage_array[434] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[435] == 0) {
    {
    fprintf(_coverage_fout, "435\n");
    fflush(_coverage_fout);
    ___coverage_array[435] = 1;
    }
  }
  }
  peekc = c;
  {
  if (___coverage_array[436] == 0) {
    {
    fprintf(_coverage_fout, "436\n");
    fflush(_coverage_fout);
    ___coverage_array[436] = 1;
    }
  }
  }
  return (d);
}
}
int get(void) 
{ 
  register int c ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/christ/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    if (___coverage_array_already_memset == 0) {
      {
      ___coverage_array_already_memset = 1;
      memset(___coverage_array, 0, sizeof(___coverage_array));
      }
    }
    }
  }
  }
  {
  if (___coverage_array[437] == 0) {
    {
    fprintf(_coverage_fout, "437\n");
    fflush(_coverage_fout);
    ___coverage_array[437] = 1;
    }
  }
  }
  c = peekc;
  {
  if (___coverage_array[438] == 0) {
    {
    fprintf(_coverage_fout, "438\n");
    fflush(_coverage_fout);
    ___coverage_array[438] = 1;
    }
  }
  }
  if (c) {
    {
    if (___coverage_array[439] == 0) {
      {
      fprintf(_coverage_fout, "439\n");
      fflush(_coverage_fout);
      ___coverage_array[439] = 1;
      }
    }
    }
    peekc = 0;
    {
    if (___coverage_array[440] == 0) {
      {
      fprintf(_coverage_fout, "440\n");
      fflush(_coverage_fout);
      ___coverage_array[440] = 1;
      }
    }
    }
    return (c);
  } else {
    {
    if (___coverage_array[441] == 0) {
      {
      fprintf(_coverage_fout, "441\n");
      fflush(_coverage_fout);
      ___coverage_array[441] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[442] == 0) {
    {
    fprintf(_coverage_fout, "442\n");
    fflush(_coverage_fout);
    ___coverage_array[442] = 1;
    }
  }
  }
  c = _IO_getc(inp);
  {
  if (___coverage_array[443] == 0) {
    {
    fprintf(_coverage_fout, "443\n");
    fflush(_coverage_fout);
    ___coverage_array[443] = 1;
    }
  }
  }
  if (c == -1) {
    {
    if (___coverage_array[444] == 0) {
      {
      fprintf(_coverage_fout, "444\n");
      fflush(_coverage_fout);
      ___coverage_array[444] = 1;
      }
    }
    }
    if ((unsigned long )inp == (unsigned long )stdin) {
      {
      if (___coverage_array[445] == 0) {
        {
        fprintf(_coverage_fout, "445\n");
        fflush(_coverage_fout);
        ___coverage_array[445] = 1;
        }
      }
      }
      printf((char const   */* __restrict  */)"\n");
      {
      if (___coverage_array[446] == 0) {
        {
        fprintf(_coverage_fout, "446\n");
        fflush(_coverage_fout);
        ___coverage_array[446] = 1;
        }
      }
      }
      exit(0);
    } else {
      {
      if (___coverage_array[447] == 0) {
        {
        fprintf(_coverage_fout, "447\n");
        fflush(_coverage_fout);
        ___coverage_array[447] = 1;
        }
      }
      }

    }
    {
    if (___coverage_array[448] == 0) {
      {
      fprintf(_coverage_fout, "448\n");
      fflush(_coverage_fout);
      ___coverage_array[448] = 1;
      }
    }
    }
    return (0);
  } else {
    {
    if (___coverage_array[449] == 0) {
      {
      fprintf(_coverage_fout, "449\n");
      fflush(_coverage_fout);
      ___coverage_array[449] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[450] == 0) {
    {
    fprintf(_coverage_fout, "450\n");
    fflush(_coverage_fout);
    ___coverage_array[450] = 1;
    }
  }
  }
  return (c);
}
}
struct table *hash(char *name ) 
{ 
  register struct table *tp ;
  register char *np ;
  register unsigned int h ;
  char *tmp ;
  int tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/christ/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    if (___coverage_array_already_memset == 0) {
      {
      ___coverage_array_already_memset = 1;
      memset(___coverage_array, 0, sizeof(___coverage_array));
      }
    }
    }
  }
  }
  {
  if (___coverage_array[451] == 0) {
    {
    fprintf(_coverage_fout, "451\n");
    fflush(_coverage_fout);
    ___coverage_array[451] = 1;
    }
  }
  }
  h = 0U;
  {
  if (___coverage_array[452] == 0) {
    {
    fprintf(_coverage_fout, "452\n");
    fflush(_coverage_fout);
    ___coverage_array[452] = 1;
    }
  }
  }
  np = name;
  {
  if (___coverage_array[453] == 0) {
    {
    fprintf(_coverage_fout, "453\n");
    fflush(_coverage_fout);
    ___coverage_array[453] = 1;
    }
  }
  }
  while (1) {
    {
    if (___coverage_array[454] == 0) {
      {
      fprintf(_coverage_fout, "454\n");
      fflush(_coverage_fout);
      ___coverage_array[454] = 1;
      }
    }
    }
    if (*np) {
      {
      if (___coverage_array[455] == 0) {
        {
        fprintf(_coverage_fout, "455\n");
        fflush(_coverage_fout);
        ___coverage_array[455] = 1;
        }
      }
      }

    } else {
      {
      if (___coverage_array[456] == 0) {
        {
        fprintf(_coverage_fout, "456\n");
        fflush(_coverage_fout);
        ___coverage_array[456] = 1;
        }
      }
      }
      break;
    }
    {
    if (___coverage_array[457] == 0) {
      {
      fprintf(_coverage_fout, "457\n");
      fflush(_coverage_fout);
      ___coverage_array[457] = 1;
      }
    }
    }
    tmp = np;
    {
    if (___coverage_array[458] == 0) {
      {
      fprintf(_coverage_fout, "458\n");
      fflush(_coverage_fout);
      ___coverage_array[458] = 1;
      }
    }
    }
    np ++;
    {
    if (___coverage_array[459] == 0) {
      {
      fprintf(_coverage_fout, "459\n");
      fflush(_coverage_fout);
      ___coverage_array[459] = 1;
      }
    }
    }
    h = (h * 57U + (unsigned int )*tmp) - 48U;
  }
  {
  if (___coverage_array[460] == 0) {
    {
    fprintf(_coverage_fout, "460\n");
    fflush(_coverage_fout);
    ___coverage_array[460] = 1;
    }
  }
  }
  if ((int )h < 0) {
    {
    if (___coverage_array[461] == 0) {
      {
      fprintf(_coverage_fout, "461\n");
      fflush(_coverage_fout);
      ___coverage_array[461] = 1;
      }
    }
    }
    h = (unsigned int )(- ((int )h));
  } else {
    {
    if (___coverage_array[462] == 0) {
      {
      fprintf(_coverage_fout, "462\n");
      fflush(_coverage_fout);
      ___coverage_array[462] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[463] == 0) {
    {
    fprintf(_coverage_fout, "463\n");
    fflush(_coverage_fout);
    ___coverage_array[463] = 1;
    }
  }
  }
  h %= 1009U;
  {
  if (___coverage_array[464] == 0) {
    {
    fprintf(_coverage_fout, "464\n");
    fflush(_coverage_fout);
    ___coverage_array[464] = 1;
    }
  }
  }
  tp = & table[h];
  {
  if (___coverage_array[465] == 0) {
    {
    fprintf(_coverage_fout, "465\n");
    fflush(_coverage_fout);
    ___coverage_array[465] = 1;
    }
  }
  }
  l0: 
  if ((unsigned long )tp->name == (unsigned long )((char *)0)) {
    {
    if (___coverage_array[466] == 0) {
      {
      fprintf(_coverage_fout, "466\n");
      fflush(_coverage_fout);
      ___coverage_array[466] = 1;
      }
    }
    }
    return (tp);
  } else {
    {
    if (___coverage_array[467] == 0) {
      {
      fprintf(_coverage_fout, "467\n");
      fflush(_coverage_fout);
      ___coverage_array[467] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[468] == 0) {
    {
    fprintf(_coverage_fout, "468\n");
    fflush(_coverage_fout);
    ___coverage_array[468] = 1;
    }
  }
  }
  tmp___0 = equal(name, tp->name);
  {
  if (___coverage_array[469] == 0) {
    {
    fprintf(_coverage_fout, "469\n");
    fflush(_coverage_fout);
    ___coverage_array[469] = 1;
    }
  }
  }
  if (tmp___0) {
    {
    if (___coverage_array[470] == 0) {
      {
      fprintf(_coverage_fout, "470\n");
      fflush(_coverage_fout);
      ___coverage_array[470] = 1;
      }
    }
    }
    return (tp);
  } else {
    {
    if (___coverage_array[471] == 0) {
      {
      fprintf(_coverage_fout, "471\n");
      fflush(_coverage_fout);
      ___coverage_array[471] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[472] == 0) {
    {
    fprintf(_coverage_fout, "472\n");
    fflush(_coverage_fout);
    ___coverage_array[472] = 1;
    }
  }
  }
  tp ++;
  {
  if (___coverage_array[473] == 0) {
    {
    fprintf(_coverage_fout, "473\n");
    fflush(_coverage_fout);
    ___coverage_array[473] = 1;
    }
  }
  }
  if ((unsigned long )tp >= (unsigned long )(& table[1009])) {
    {
    if (___coverage_array[474] == 0) {
      {
      fprintf(_coverage_fout, "474\n");
      fflush(_coverage_fout);
      ___coverage_array[474] = 1;
      }
    }
    }
    tp = table;
  } else {
    {
    if (___coverage_array[475] == 0) {
      {
      fprintf(_coverage_fout, "475\n");
      fflush(_coverage_fout);
      ___coverage_array[475] = 1;
      }
    }
    }

  }
  {
  if (___coverage_array[476] == 0) {
    {
    fprintf(_coverage_fout, "476\n");
    fflush(_coverage_fout);
    ___coverage_array[476] = 1;
    }
  }
  }
  goto l0;
}
}
int fperr(void) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/christ/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    if (___coverage_array_already_memset == 0) {
      {
      ___coverage_array_already_memset = 1;
      memset(___coverage_array, 0, sizeof(___coverage_array));
      }
    }
    }
  }
  }
  {
  if (___coverage_array[477] == 0) {
    {
    fprintf(_coverage_fout, "477\n");
    fflush(_coverage_fout);
    ___coverage_array[477] = 1;
    }
  }
  }
  signal(8, & fperr);
  {
  if (___coverage_array[478] == 0) {
    {
    fprintf(_coverage_fout, "478\n");
    fflush(_coverage_fout);
    ___coverage_array[478] = 1;
    }
  }
  }
  fperrc ++;
  {
  if (___coverage_array[479] == 0) {
    {
    fprintf(_coverage_fout, "479\n");
    fflush(_coverage_fout);
    ___coverage_array[479] = 1;
    }
  }
  }
  return (0);
}
}
