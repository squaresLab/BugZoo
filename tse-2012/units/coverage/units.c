extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1),
__leaf__)) memset)(void *__s , int __c , unsigned long __n ) ;
struct _IO_FILE;
struct _IO_FILE *_coverage_fout  ;
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
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  setlocale(6, "");
  {
  fprintf(_coverage_fout, "2\n");
  fflush(_coverage_fout);
  }
  textdomain("SYS_TEST");
  {
  fprintf(_coverage_fout, "3\n");
  fflush(_coverage_fout);
  }
  if (argc > 1) {
    {
    fprintf(_coverage_fout, "4\n");
    fflush(_coverage_fout);
    }
    if ((int )*(*(argv + 1)) == 45) {
      {
      fprintf(_coverage_fout, "5\n");
      fflush(_coverage_fout);
      }
      argc --;
      {
      fprintf(_coverage_fout, "6\n");
      fflush(_coverage_fout);
      }
      argv ++;
      {
      fprintf(_coverage_fout, "7\n");
      fflush(_coverage_fout);
      }
      dumpflg ++;
    } else {
      {
      fprintf(_coverage_fout, "8\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "9\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "10\n");
  fflush(_coverage_fout);
  }
  file = dfile;
  {
  fprintf(_coverage_fout, "11\n");
  fflush(_coverage_fout);
  }
  if (argc > 1) {
    {
    fprintf(_coverage_fout, "12\n");
    fflush(_coverage_fout);
    }
    file = *(argv + 1);
  } else {
    {
    fprintf(_coverage_fout, "13\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "14\n");
  fflush(_coverage_fout);
  }
  inp = fopen((char const   */* __restrict  */)file,
              (char const   */* __restrict  */)"r");
  {
  fprintf(_coverage_fout, "15\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )inp == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "16\n");
    fflush(_coverage_fout);
    }
    tmp = gettext("no table\n");
    {
    fprintf(_coverage_fout, "17\n");
    fflush(_coverage_fout);
    }
    printf((char const   */* __restrict  */)tmp);
    {
    fprintf(_coverage_fout, "18\n");
    fflush(_coverage_fout);
    }
    exit(1);
  } else {
    {
    fprintf(_coverage_fout, "19\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "20\n");
  fflush(_coverage_fout);
  }
  signal(8, & fperr);
  {
  fprintf(_coverage_fout, "21\n");
  fflush(_coverage_fout);
  }
  init();
  {
  fprintf(_coverage_fout, "22\n");
  fflush(_coverage_fout);
  }
  loop: 
  fperrc = 0;
  {
  fprintf(_coverage_fout, "23\n");
  fflush(_coverage_fout);
  }
  tmp___0 = gettext("you have: ");
  {
  fprintf(_coverage_fout, "24\n");
  fflush(_coverage_fout);
  }
  printf((char const   */* __restrict  */)tmp___0);
  {
  fprintf(_coverage_fout, "25\n");
  fflush(_coverage_fout);
  }
  tmp___1 = convr(& u1);
  {
  fprintf(_coverage_fout, "26\n");
  fflush(_coverage_fout);
  }
  if (tmp___1) {
    {
    fprintf(_coverage_fout, "27\n");
    fflush(_coverage_fout);
    }
    goto loop;
  } else {
    {
    fprintf(_coverage_fout, "28\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "29\n");
  fflush(_coverage_fout);
  }
  if (fperrc) {
    {
    fprintf(_coverage_fout, "30\n");
    fflush(_coverage_fout);
    }
    goto fp;
  } else {
    {
    fprintf(_coverage_fout, "31\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "32\n");
  fflush(_coverage_fout);
  }
  loop1: 
  tmp___2 = gettext("you want: ");
  {
  fprintf(_coverage_fout, "33\n");
  fflush(_coverage_fout);
  }
  printf((char const   */* __restrict  */)tmp___2);
  {
  fprintf(_coverage_fout, "34\n");
  fflush(_coverage_fout);
  }
  tmp___3 = convr(& u2);
  {
  fprintf(_coverage_fout, "35\n");
  fflush(_coverage_fout);
  }
  if (tmp___3) {
    {
    fprintf(_coverage_fout, "36\n");
    fflush(_coverage_fout);
    }
    goto loop1;
  } else {
    {
    fprintf(_coverage_fout, "37\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "38\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "39\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "40\n");
    fflush(_coverage_fout);
    }
    if (i < 10) {
      {
      fprintf(_coverage_fout, "41\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "42\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "43\n");
    fflush(_coverage_fout);
    }
    if ((int )u1.dim[i] != (int )u2.dim[i]) {
      {
      fprintf(_coverage_fout, "44\n");
      fflush(_coverage_fout);
      }
      goto conform;
    } else {
      {
      fprintf(_coverage_fout, "45\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "46\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "47\n");
  fflush(_coverage_fout);
  }
  f = u1.factor / u2.factor;
  {
  fprintf(_coverage_fout, "48\n");
  fflush(_coverage_fout);
  }
  if (fperrc) {
    {
    fprintf(_coverage_fout, "49\n");
    fflush(_coverage_fout);
    }
    goto fp;
  } else {
    {
    fprintf(_coverage_fout, "50\n");
    fflush(_coverage_fout);
    }
    if (f == 0.0) {
      {
      fprintf(_coverage_fout, "51\n");
      fflush(_coverage_fout);
      }
      goto fp;
    } else {
      {
      fprintf(_coverage_fout, "52\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "53\n");
  fflush(_coverage_fout);
  }
  printf((char const   */* __restrict  */)"\t* %e\n", f);
  {
  fprintf(_coverage_fout, "54\n");
  fflush(_coverage_fout);
  }
  printf((char const   */* __restrict  */)"\t/ %e\n", 1. / f);
  {
  fprintf(_coverage_fout, "55\n");
  fflush(_coverage_fout);
  }
  goto loop;
  {
  fprintf(_coverage_fout, "56\n");
  fflush(_coverage_fout);
  }
  conform: 
  if (fperrc) {
    {
    fprintf(_coverage_fout, "57\n");
    fflush(_coverage_fout);
    }
    goto fp;
  } else {
    {
    fprintf(_coverage_fout, "58\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "59\n");
  fflush(_coverage_fout);
  }
  tmp___4 = gettext("conformability\n");
  {
  fprintf(_coverage_fout, "60\n");
  fflush(_coverage_fout);
  }
  printf((char const   */* __restrict  */)tmp___4);
  {
  fprintf(_coverage_fout, "61\n");
  fflush(_coverage_fout);
  }
  units(& u1);
  {
  fprintf(_coverage_fout, "62\n");
  fflush(_coverage_fout);
  }
  units(& u2);
  {
  fprintf(_coverage_fout, "63\n");
  fflush(_coverage_fout);
  }
  goto loop;
  {
  fprintf(_coverage_fout, "64\n");
  fflush(_coverage_fout);
  }
  fp: 
  tmp___5 = gettext("underflow or overflow\n");
  {
  fprintf(_coverage_fout, "65\n");
  fflush(_coverage_fout);
  }
  printf((char const   */* __restrict  */)tmp___5);
  {
  fprintf(_coverage_fout, "66\n");
  fflush(_coverage_fout);
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
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "67\n");
  fflush(_coverage_fout);
  }
  p = up;
  {
  fprintf(_coverage_fout, "68\n");
  fflush(_coverage_fout);
  }
  printf((char const   */* __restrict  */)"\t%e ", p->factor);
  {
  fprintf(_coverage_fout, "69\n");
  fflush(_coverage_fout);
  }
  f = 0;
  {
  fprintf(_coverage_fout, "70\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "71\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "72\n");
    fflush(_coverage_fout);
    }
    if (i < 10) {
      {
      fprintf(_coverage_fout, "73\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "74\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "75\n");
    fflush(_coverage_fout);
    }
    tmp = pu((int )p->dim[i], i, f);
    {
    fprintf(_coverage_fout, "76\n");
    fflush(_coverage_fout);
    }
    f |= tmp;
    {
    fprintf(_coverage_fout, "77\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "78\n");
  fflush(_coverage_fout);
  }
  if (f & 1) {
    {
    fprintf(_coverage_fout, "79\n");
    fflush(_coverage_fout);
    }
    putchar('/');
    {
    fprintf(_coverage_fout, "80\n");
    fflush(_coverage_fout);
    }
    f = 0;
    {
    fprintf(_coverage_fout, "81\n");
    fflush(_coverage_fout);
    }
    i = 0;
    {
    fprintf(_coverage_fout, "82\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "83\n");
      fflush(_coverage_fout);
      }
      if (i < 10) {
        {
        fprintf(_coverage_fout, "84\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "85\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "86\n");
      fflush(_coverage_fout);
      }
      tmp___0 = pu(- ((int )p->dim[i]), i, f);
      {
      fprintf(_coverage_fout, "87\n");
      fflush(_coverage_fout);
      }
      f |= tmp___0;
      {
      fprintf(_coverage_fout, "88\n");
      fflush(_coverage_fout);
      }
      i ++;
    }
  } else {
    {
    fprintf(_coverage_fout, "89\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "90\n");
  fflush(_coverage_fout);
  }
  putchar('\n');
  {
  fprintf(_coverage_fout, "91\n");
  fflush(_coverage_fout);
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
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "92\n");
  fflush(_coverage_fout);
  }
  if (u > 0) {
    {
    fprintf(_coverage_fout, "93\n");
    fflush(_coverage_fout);
    }
    if (f & 2) {
      {
      fprintf(_coverage_fout, "94\n");
      fflush(_coverage_fout);
      }
      putchar('-');
    } else {
      {
      fprintf(_coverage_fout, "95\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "96\n");
    fflush(_coverage_fout);
    }
    if (unames[i]) {
      {
      fprintf(_coverage_fout, "97\n");
      fflush(_coverage_fout);
      }
      printf((char const   */* __restrict  */)"%s", unames[i]);
    } else {
      {
      fprintf(_coverage_fout, "98\n");
      fflush(_coverage_fout);
      }
      tmp = gettext("*%c*");
      {
      fprintf(_coverage_fout, "99\n");
      fflush(_coverage_fout);
      }
      printf((char const   */* __restrict  */)tmp, i + 97);
    }
    {
    fprintf(_coverage_fout, "100\n");
    fflush(_coverage_fout);
    }
    if (u > 1) {
      {
      fprintf(_coverage_fout, "101\n");
      fflush(_coverage_fout);
      }
      putchar(u + 48);
    } else {
      {
      fprintf(_coverage_fout, "102\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "103\n");
    fflush(_coverage_fout);
    }
    return (2);
  } else {
    {
    fprintf(_coverage_fout, "104\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "105\n");
  fflush(_coverage_fout);
  }
  if (u < 0) {
    {
    fprintf(_coverage_fout, "106\n");
    fflush(_coverage_fout);
    }
    return (1);
  } else {
    {
    fprintf(_coverage_fout, "107\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "108\n");
  fflush(_coverage_fout);
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
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "109\n");
  fflush(_coverage_fout);
  }
  p = up;
  {
  fprintf(_coverage_fout, "110\n");
  fflush(_coverage_fout);
  }
  c = 0;
  {
  fprintf(_coverage_fout, "111\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "112\n");
    fflush(_coverage_fout);
    }
    if (c < 10) {
      {
      fprintf(_coverage_fout, "113\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "114\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "115\n");
    fflush(_coverage_fout);
    }
    p->dim[c] = (char)0;
    {
    fprintf(_coverage_fout, "116\n");
    fflush(_coverage_fout);
    }
    c ++;
  }
  {
  fprintf(_coverage_fout, "117\n");
  fflush(_coverage_fout);
  }
  p->factor = getflt();
  {
  fprintf(_coverage_fout, "118\n");
  fflush(_coverage_fout);
  }
  if (p->factor == 0.) {
    {
    fprintf(_coverage_fout, "119\n");
    fflush(_coverage_fout);
    }
    p->factor = 1.0;
  } else {
    {
    fprintf(_coverage_fout, "120\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "121\n");
  fflush(_coverage_fout);
  }
  err = 0;
  {
  fprintf(_coverage_fout, "122\n");
  fflush(_coverage_fout);
  }
  den = 0;
  {
  fprintf(_coverage_fout, "123\n");
  fflush(_coverage_fout);
  }
  cp = name;
  {
  fprintf(_coverage_fout, "124\n");
  fflush(_coverage_fout);
  }
  loop: 
  c = get();
  {
  fprintf(_coverage_fout, "125\n");
  fflush(_coverage_fout);
  }
  switch (c) {
  {
  fprintf(_coverage_fout, "126\n");
  fflush(_coverage_fout);
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
    fprintf(_coverage_fout, "127\n");
    fflush(_coverage_fout);
    }
    tmp = cp;
    {
    fprintf(_coverage_fout, "128\n");
    fflush(_coverage_fout);
    }
    cp ++;
    {
    fprintf(_coverage_fout, "129\n");
    fflush(_coverage_fout);
    }
    *tmp = (char)0;
    {
    fprintf(_coverage_fout, "130\n");
    fflush(_coverage_fout);
    }
    cp = name;
    {
    fprintf(_coverage_fout, "131\n");
    fflush(_coverage_fout);
    }
    tmp___0 = lookup(cp, p, den, c);
    {
    fprintf(_coverage_fout, "132\n");
    fflush(_coverage_fout);
    }
    err |= tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "133\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "134\n");
  fflush(_coverage_fout);
  }
  if (c == 47) {
    {
    fprintf(_coverage_fout, "135\n");
    fflush(_coverage_fout);
    }
    den ++;
  } else {
    {
    fprintf(_coverage_fout, "136\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "137\n");
  fflush(_coverage_fout);
  }
  if (c == 10) {
    {
    fprintf(_coverage_fout, "138\n");
    fflush(_coverage_fout);
    }
    return (err);
  } else {
    {
    fprintf(_coverage_fout, "139\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "140\n");
  fflush(_coverage_fout);
  }
  goto loop;
  }
  {
  fprintf(_coverage_fout, "141\n");
  fflush(_coverage_fout);
  }
  tmp___1 = cp;
  {
  fprintf(_coverage_fout, "142\n");
  fflush(_coverage_fout);
  }
  cp ++;
  {
  fprintf(_coverage_fout, "143\n");
  fflush(_coverage_fout);
  }
  *tmp___1 = (char )c;
  {
  fprintf(_coverage_fout, "144\n");
  fflush(_coverage_fout);
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
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "145\n");
  fflush(_coverage_fout);
  }
  p = up;
  {
  fprintf(_coverage_fout, "146\n");
  fflush(_coverage_fout);
  }
  e = 1.0;
  {
  fprintf(_coverage_fout, "147\n");
  fflush(_coverage_fout);
  }
  loop: 
  q = hash(name);
  {
  fprintf(_coverage_fout, "148\n");
  fflush(_coverage_fout);
  }
  if (q->name) {
    {
    fprintf(_coverage_fout, "149\n");
    fflush(_coverage_fout);
    }
    l1: 
    if (den) {
      {
      fprintf(_coverage_fout, "150\n");
      fflush(_coverage_fout);
      }
      p->factor /= q->factor * e;
      {
      fprintf(_coverage_fout, "151\n");
      fflush(_coverage_fout);
      }
      i = 0;
      {
      fprintf(_coverage_fout, "152\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "153\n");
        fflush(_coverage_fout);
        }
        if (i < 10) {
          {
          fprintf(_coverage_fout, "154\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "155\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "156\n");
        fflush(_coverage_fout);
        }
        p->dim[i] = (char )((int )p->dim[i] - (int )q->dim[i]);
        {
        fprintf(_coverage_fout, "157\n");
        fflush(_coverage_fout);
        }
        i ++;
      }
    } else {
      {
      fprintf(_coverage_fout, "158\n");
      fflush(_coverage_fout);
      }
      p->factor *= q->factor * e;
      {
      fprintf(_coverage_fout, "159\n");
      fflush(_coverage_fout);
      }
      i = 0;
      {
      fprintf(_coverage_fout, "160\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "161\n");
        fflush(_coverage_fout);
        }
        if (i < 10) {
          {
          fprintf(_coverage_fout, "162\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "163\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "164\n");
        fflush(_coverage_fout);
        }
        p->dim[i] = (char )((int )p->dim[i] + (int )q->dim[i]);
        {
        fprintf(_coverage_fout, "165\n");
        fflush(_coverage_fout);
        }
        i ++;
      }
    }
    {
    fprintf(_coverage_fout, "166\n");
    fflush(_coverage_fout);
    }
    if (c >= 50) {
      {
      fprintf(_coverage_fout, "167\n");
      fflush(_coverage_fout);
      }
      if (c <= 57) {
        {
        fprintf(_coverage_fout, "168\n");
        fflush(_coverage_fout);
        }
        c --;
        {
        fprintf(_coverage_fout, "169\n");
        fflush(_coverage_fout);
        }
        goto l1;
      } else {
        {
        fprintf(_coverage_fout, "170\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "171\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "172\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "173\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "174\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "175\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "176\n");
    fflush(_coverage_fout);
    }
    cp1 = prefix[i].pname;
    {
    fprintf(_coverage_fout, "177\n");
    fflush(_coverage_fout);
    }
    if (cp1) {
      {
      fprintf(_coverage_fout, "178\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "179\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "180\n");
    fflush(_coverage_fout);
    }
    cp2 = name;
    {
    fprintf(_coverage_fout, "181\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "182\n");
      fflush(_coverage_fout);
      }
      tmp___0 = cp2;
      {
      fprintf(_coverage_fout, "183\n");
      fflush(_coverage_fout);
      }
      cp2 ++;
      {
      fprintf(_coverage_fout, "184\n");
      fflush(_coverage_fout);
      }
      if ((int )*cp1 == (int )*tmp___0) {
        {
        fprintf(_coverage_fout, "185\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "186\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "187\n");
      fflush(_coverage_fout);
      }
      tmp = cp1;
      {
      fprintf(_coverage_fout, "188\n");
      fflush(_coverage_fout);
      }
      cp1 ++;
      {
      fprintf(_coverage_fout, "189\n");
      fflush(_coverage_fout);
      }
      if ((int )*tmp == 0) {
        {
        fprintf(_coverage_fout, "190\n");
        fflush(_coverage_fout);
        }
        cp1 --;
        {
        fprintf(_coverage_fout, "191\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "192\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "193\n");
    fflush(_coverage_fout);
    }
    if ((int )*cp1 == 0) {
      {
      fprintf(_coverage_fout, "194\n");
      fflush(_coverage_fout);
      }
      e *= prefix[i].factor;
      {
      fprintf(_coverage_fout, "195\n");
      fflush(_coverage_fout);
      }
      name = cp2 - 1;
      {
      fprintf(_coverage_fout, "196\n");
      fflush(_coverage_fout);
      }
      goto loop;
    } else {
      {
      fprintf(_coverage_fout, "197\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "198\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "199\n");
  fflush(_coverage_fout);
  }
  cp1 = name;
  {
  fprintf(_coverage_fout, "200\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "201\n");
    fflush(_coverage_fout);
    }
    if (*cp1) {
      {
      fprintf(_coverage_fout, "202\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "203\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "204\n");
    fflush(_coverage_fout);
    }
    cp1 ++;
  }
  {
  fprintf(_coverage_fout, "205\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )cp1 > (unsigned long )(name + 1)) {
    {
    fprintf(_coverage_fout, "206\n");
    fflush(_coverage_fout);
    }
    cp1 --;
    {
    fprintf(_coverage_fout, "207\n");
    fflush(_coverage_fout);
    }
    if ((int )*cp1 == 115) {
      {
      fprintf(_coverage_fout, "208\n");
      fflush(_coverage_fout);
      }
      *cp1 = (char)0;
      {
      fprintf(_coverage_fout, "209\n");
      fflush(_coverage_fout);
      }
      goto loop;
    } else {
      {
      fprintf(_coverage_fout, "210\n");
      fflush(_coverage_fout);
      }

    }
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
  tmp___1 = gettext("cannot recognize %s\n");
  {
  fprintf(_coverage_fout, "213\n");
  fflush(_coverage_fout);
  }
  printf((char const   */* __restrict  */)tmp___1, name);
  {
  fprintf(_coverage_fout, "214\n");
  fflush(_coverage_fout);
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
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "215\n");
  fflush(_coverage_fout);
  }
  c1 = s1;
  {
  fprintf(_coverage_fout, "216\n");
  fflush(_coverage_fout);
  }
  c2 = s2;
  {
  fprintf(_coverage_fout, "217\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "218\n");
    fflush(_coverage_fout);
    }
    tmp___0 = c1;
    {
    fprintf(_coverage_fout, "219\n");
    fflush(_coverage_fout);
    }
    c1 ++;
    {
    fprintf(_coverage_fout, "220\n");
    fflush(_coverage_fout);
    }
    if ((int )*tmp___0 == (int )*c2) {
      {
      fprintf(_coverage_fout, "221\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "222\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "223\n");
    fflush(_coverage_fout);
    }
    tmp = c2;
    {
    fprintf(_coverage_fout, "224\n");
    fflush(_coverage_fout);
    }
    c2 ++;
    {
    fprintf(_coverage_fout, "225\n");
    fflush(_coverage_fout);
    }
    if ((int )*tmp == 0) {
      {
      fprintf(_coverage_fout, "226\n");
      fflush(_coverage_fout);
      }
      return (1);
    } else {
      {
      fprintf(_coverage_fout, "227\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "228\n");
  fflush(_coverage_fout);
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
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "229\n");
  fflush(_coverage_fout);
  }
  cp = names;
  {
  fprintf(_coverage_fout, "230\n");
  fflush(_coverage_fout);
  }
  i = 0;
  {
  fprintf(_coverage_fout, "231\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "232\n");
    fflush(_coverage_fout);
    }
    if (i < 10) {
      {
      fprintf(_coverage_fout, "233\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "234\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "235\n");
    fflush(_coverage_fout);
    }
    np = cp;
    {
    fprintf(_coverage_fout, "236\n");
    fflush(_coverage_fout);
    }
    tmp = cp;
    {
    fprintf(_coverage_fout, "237\n");
    fflush(_coverage_fout);
    }
    cp ++;
    {
    fprintf(_coverage_fout, "238\n");
    fflush(_coverage_fout);
    }
    *tmp = (char )'*';
    {
    fprintf(_coverage_fout, "239\n");
    fflush(_coverage_fout);
    }
    tmp___0 = cp;
    {
    fprintf(_coverage_fout, "240\n");
    fflush(_coverage_fout);
    }
    cp ++;
    {
    fprintf(_coverage_fout, "241\n");
    fflush(_coverage_fout);
    }
    *tmp___0 = (char )(i + 97);
    {
    fprintf(_coverage_fout, "242\n");
    fflush(_coverage_fout);
    }
    tmp___1 = cp;
    {
    fprintf(_coverage_fout, "243\n");
    fflush(_coverage_fout);
    }
    cp ++;
    {
    fprintf(_coverage_fout, "244\n");
    fflush(_coverage_fout);
    }
    *tmp___1 = (char )'*';
    {
    fprintf(_coverage_fout, "245\n");
    fflush(_coverage_fout);
    }
    tmp___2 = cp;
    {
    fprintf(_coverage_fout, "246\n");
    fflush(_coverage_fout);
    }
    cp ++;
    {
    fprintf(_coverage_fout, "247\n");
    fflush(_coverage_fout);
    }
    *tmp___2 = (char)0;
    {
    fprintf(_coverage_fout, "248\n");
    fflush(_coverage_fout);
    }
    lp = hash(np);
    {
    fprintf(_coverage_fout, "249\n");
    fflush(_coverage_fout);
    }
    lp->name = np;
    {
    fprintf(_coverage_fout, "250\n");
    fflush(_coverage_fout);
    }
    lp->factor = 1.0;
    {
    fprintf(_coverage_fout, "251\n");
    fflush(_coverage_fout);
    }
    lp->dim[i] = (char)1;
    {
    fprintf(_coverage_fout, "252\n");
    fflush(_coverage_fout);
    }
    i ++;
  }
  {
  fprintf(_coverage_fout, "253\n");
  fflush(_coverage_fout);
  }
  lp = hash("");
  {
  fprintf(_coverage_fout, "254\n");
  fflush(_coverage_fout);
  }
  lp->name = cp - 1;
  {
  fprintf(_coverage_fout, "255\n");
  fflush(_coverage_fout);
  }
  lp->factor = 1.0;
  {
  fprintf(_coverage_fout, "256\n");
  fflush(_coverage_fout);
  }
  l0: 
  c = get();
  {
  fprintf(_coverage_fout, "257\n");
  fflush(_coverage_fout);
  }
  if (c == 0) {
    {
    fprintf(_coverage_fout, "258\n");
    fflush(_coverage_fout);
    }
    if (dumpflg) {
      {
      fprintf(_coverage_fout, "259\n");
      fflush(_coverage_fout);
      }
      tmp___3 = gettext("%d units; %d bytes\n\n");
      {
      fprintf(_coverage_fout, "260\n");
      fflush(_coverage_fout);
      }
      printf((char const   */* __restrict  */)tmp___3, i, cp - names);
      {
      fprintf(_coverage_fout, "261\n");
      fflush(_coverage_fout);
      }
      tp = & table[0];
      {
      fprintf(_coverage_fout, "262\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "263\n");
        fflush(_coverage_fout);
        }
        if ((unsigned long )tp < (unsigned long )(& table[1009])) {
          {
          fprintf(_coverage_fout, "264\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "265\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "266\n");
        fflush(_coverage_fout);
        }
        if ((unsigned long )tp->name == (unsigned long )((char *)0)) {
          {
          fprintf(_coverage_fout, "267\n");
          fflush(_coverage_fout);
          }
          goto __Cont;
        } else {
          {
          fprintf(_coverage_fout, "268\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "269\n");
        fflush(_coverage_fout);
        }
        printf((char const   */* __restrict  */)"%s", tp->name);
        {
        fprintf(_coverage_fout, "270\n");
        fflush(_coverage_fout);
        }
        units((struct unit *)tp);
        {
        fprintf(_coverage_fout, "271\n");
        fflush(_coverage_fout);
        }
        __Cont: /* CIL Label */ 
        tp ++;
      }
    } else {
      {
      fprintf(_coverage_fout, "272\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "273\n");
    fflush(_coverage_fout);
    }
    fclose(inp);
    {
    fprintf(_coverage_fout, "274\n");
    fflush(_coverage_fout);
    }
    inp = stdin;
    {
    fprintf(_coverage_fout, "275\n");
    fflush(_coverage_fout);
    }
    return;
  } else {
    {
    fprintf(_coverage_fout, "276\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "277\n");
  fflush(_coverage_fout);
  }
  if (c == 47) {
    {
    fprintf(_coverage_fout, "278\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "279\n");
      fflush(_coverage_fout);
      }
      if (c != 10) {
        {
        fprintf(_coverage_fout, "280\n");
        fflush(_coverage_fout);
        }
        if (c != 0) {
          {
          fprintf(_coverage_fout, "281\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "282\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "283\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "284\n");
      fflush(_coverage_fout);
      }
      c = get();
    }
    {
    fprintf(_coverage_fout, "285\n");
    fflush(_coverage_fout);
    }
    goto l0;
  } else {
    {
    fprintf(_coverage_fout, "286\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "287\n");
  fflush(_coverage_fout);
  }
  if (c == 10) {
    {
    fprintf(_coverage_fout, "288\n");
    fflush(_coverage_fout);
    }
    goto l0;
  } else {
    {
    fprintf(_coverage_fout, "289\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "290\n");
  fflush(_coverage_fout);
  }
  np = cp;
  {
  fprintf(_coverage_fout, "291\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "292\n");
    fflush(_coverage_fout);
    }
    if (c != 32) {
      {
      fprintf(_coverage_fout, "293\n");
      fflush(_coverage_fout);
      }
      if (c != 9) {
        {
        fprintf(_coverage_fout, "294\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "295\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "296\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "297\n");
    fflush(_coverage_fout);
    }
    tmp___4 = cp;
    {
    fprintf(_coverage_fout, "298\n");
    fflush(_coverage_fout);
    }
    cp ++;
    {
    fprintf(_coverage_fout, "299\n");
    fflush(_coverage_fout);
    }
    *tmp___4 = (char )c;
    {
    fprintf(_coverage_fout, "300\n");
    fflush(_coverage_fout);
    }
    c = get();
    {
    fprintf(_coverage_fout, "301\n");
    fflush(_coverage_fout);
    }
    if (c == 0) {
      {
      fprintf(_coverage_fout, "302\n");
      fflush(_coverage_fout);
      }
      goto l0;
    } else {
      {
      fprintf(_coverage_fout, "303\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "304\n");
    fflush(_coverage_fout);
    }
    if (c == 10) {
      {
      fprintf(_coverage_fout, "305\n");
      fflush(_coverage_fout);
      }
      tmp___5 = cp;
      {
      fprintf(_coverage_fout, "306\n");
      fflush(_coverage_fout);
      }
      cp ++;
      {
      fprintf(_coverage_fout, "307\n");
      fflush(_coverage_fout);
      }
      *tmp___5 = (char)0;
      {
      fprintf(_coverage_fout, "308\n");
      fflush(_coverage_fout);
      }
      tp = hash(np);
      {
      fprintf(_coverage_fout, "309\n");
      fflush(_coverage_fout);
      }
      if (tp->name) {
        {
        fprintf(_coverage_fout, "310\n");
        fflush(_coverage_fout);
        }
        goto redef;
      } else {
        {
        fprintf(_coverage_fout, "311\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "312\n");
      fflush(_coverage_fout);
      }
      tp->name = np;
      {
      fprintf(_coverage_fout, "313\n");
      fflush(_coverage_fout);
      }
      tp->factor = lp->factor;
      {
      fprintf(_coverage_fout, "314\n");
      fflush(_coverage_fout);
      }
      c = 0;
      {
      fprintf(_coverage_fout, "315\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "316\n");
        fflush(_coverage_fout);
        }
        if (c < 10) {
          {
          fprintf(_coverage_fout, "317\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "318\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "319\n");
        fflush(_coverage_fout);
        }
        tp->dim[c] = lp->dim[c];
        {
        fprintf(_coverage_fout, "320\n");
        fflush(_coverage_fout);
        }
        c ++;
      }
      {
      fprintf(_coverage_fout, "321\n");
      fflush(_coverage_fout);
      }
      i ++;
      {
      fprintf(_coverage_fout, "322\n");
      fflush(_coverage_fout);
      }
      goto l0;
    } else {
      {
      fprintf(_coverage_fout, "323\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "324\n");
  fflush(_coverage_fout);
  }
  tmp___6 = cp;
  {
  fprintf(_coverage_fout, "325\n");
  fflush(_coverage_fout);
  }
  cp ++;
  {
  fprintf(_coverage_fout, "326\n");
  fflush(_coverage_fout);
  }
  *tmp___6 = (char)0;
  {
  fprintf(_coverage_fout, "327\n");
  fflush(_coverage_fout);
  }
  lp = hash(np);
  {
  fprintf(_coverage_fout, "328\n");
  fflush(_coverage_fout);
  }
  if (lp->name) {
    {
    fprintf(_coverage_fout, "329\n");
    fflush(_coverage_fout);
    }
    goto redef;
  } else {
    {
    fprintf(_coverage_fout, "330\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "331\n");
  fflush(_coverage_fout);
  }
  convr((struct unit *)lp);
  {
  fprintf(_coverage_fout, "332\n");
  fflush(_coverage_fout);
  }
  lp->name = np;
  {
  fprintf(_coverage_fout, "333\n");
  fflush(_coverage_fout);
  }
  f = 0;
  {
  fprintf(_coverage_fout, "334\n");
  fflush(_coverage_fout);
  }
  i ++;
  {
  fprintf(_coverage_fout, "335\n");
  fflush(_coverage_fout);
  }
  if (lp->factor != 1.0) {
    {
    fprintf(_coverage_fout, "336\n");
    fflush(_coverage_fout);
    }
    goto l0;
  } else {
    {
    fprintf(_coverage_fout, "337\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "338\n");
  fflush(_coverage_fout);
  }
  c = 0;
  {
  fprintf(_coverage_fout, "339\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "340\n");
    fflush(_coverage_fout);
    }
    if (c < 10) {
      {
      fprintf(_coverage_fout, "341\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "342\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "343\n");
    fflush(_coverage_fout);
    }
    t = (int )lp->dim[c];
    {
    fprintf(_coverage_fout, "344\n");
    fflush(_coverage_fout);
    }
    if (t > 1) {
      {
      fprintf(_coverage_fout, "345\n");
      fflush(_coverage_fout);
      }
      goto l0;
    } else {
      {
      fprintf(_coverage_fout, "346\n");
      fflush(_coverage_fout);
      }
      if (f > 0) {
        {
        fprintf(_coverage_fout, "347\n");
        fflush(_coverage_fout);
        }
        if (t != 0) {
          {
          fprintf(_coverage_fout, "348\n");
          fflush(_coverage_fout);
          }
          goto l0;
        } else {
          {
          fprintf(_coverage_fout, "349\n");
          fflush(_coverage_fout);
          }

        }
      } else {
        {
        fprintf(_coverage_fout, "350\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "351\n");
    fflush(_coverage_fout);
    }
    if (f == 0) {
      {
      fprintf(_coverage_fout, "352\n");
      fflush(_coverage_fout);
      }
      if (t == 1) {
        {
        fprintf(_coverage_fout, "353\n");
        fflush(_coverage_fout);
        }
        if (unames[c]) {
          {
          fprintf(_coverage_fout, "354\n");
          fflush(_coverage_fout);
          }
          goto l0;
        } else {
          {
          fprintf(_coverage_fout, "355\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "356\n");
        fflush(_coverage_fout);
        }
        f = c + 1;
      } else {
        {
        fprintf(_coverage_fout, "357\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "358\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "359\n");
    fflush(_coverage_fout);
    }
    c ++;
  }
  {
  fprintf(_coverage_fout, "360\n");
  fflush(_coverage_fout);
  }
  if (f > 0) {
    {
    fprintf(_coverage_fout, "361\n");
    fflush(_coverage_fout);
    }
    unames[f - 1] = np;
  } else {
    {
    fprintf(_coverage_fout, "362\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "363\n");
  fflush(_coverage_fout);
  }
  goto l0;
  {
  fprintf(_coverage_fout, "364\n");
  fflush(_coverage_fout);
  }
  redef: 
  tmp___7 = gettext("redefinition %s\n");
  {
  fprintf(_coverage_fout, "365\n");
  fflush(_coverage_fout);
  }
  printf((char const   */* __restrict  */)tmp___7, np);
  {
  fprintf(_coverage_fout, "366\n");
  fflush(_coverage_fout);
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
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "367\n");
  fflush(_coverage_fout);
  }
  d = 0.;
  {
  fprintf(_coverage_fout, "368\n");
  fflush(_coverage_fout);
  }
  dp = 0;
  {
  fprintf(_coverage_fout, "369\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "370\n");
    fflush(_coverage_fout);
    }
    c = get();
    {
    fprintf(_coverage_fout, "371\n");
    fflush(_coverage_fout);
    }
    if (c == 32) {
      {
      fprintf(_coverage_fout, "372\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "373\n");
      fflush(_coverage_fout);
      }
      if (c == 9) {
        {
        fprintf(_coverage_fout, "374\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "375\n");
        fflush(_coverage_fout);
        }
        break;
      }
    }
  }
  {
  fprintf(_coverage_fout, "376\n");
  fflush(_coverage_fout);
  }
  l1: 
  if (c >= 48) {
    {
    fprintf(_coverage_fout, "377\n");
    fflush(_coverage_fout);
    }
    if (c <= 57) {
      {
      fprintf(_coverage_fout, "378\n");
      fflush(_coverage_fout);
      }
      d = (d * 10. + (double )c) - (double )48;
      {
      fprintf(_coverage_fout, "379\n");
      fflush(_coverage_fout);
      }
      if (dp) {
        {
        fprintf(_coverage_fout, "380\n");
        fflush(_coverage_fout);
        }
        dp ++;
      } else {
        {
        fprintf(_coverage_fout, "381\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "382\n");
      fflush(_coverage_fout);
      }
      c = get();
      {
      fprintf(_coverage_fout, "383\n");
      fflush(_coverage_fout);
      }
      goto l1;
    } else {
      {
      fprintf(_coverage_fout, "384\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "385\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "386\n");
  fflush(_coverage_fout);
  }
  if (c == 46) {
    {
    fprintf(_coverage_fout, "387\n");
    fflush(_coverage_fout);
    }
    dp ++;
    {
    fprintf(_coverage_fout, "388\n");
    fflush(_coverage_fout);
    }
    c = get();
    {
    fprintf(_coverage_fout, "389\n");
    fflush(_coverage_fout);
    }
    goto l1;
  } else {
    {
    fprintf(_coverage_fout, "390\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "391\n");
  fflush(_coverage_fout);
  }
  if (dp) {
    {
    fprintf(_coverage_fout, "392\n");
    fflush(_coverage_fout);
    }
    dp --;
  } else {
    {
    fprintf(_coverage_fout, "393\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "394\n");
  fflush(_coverage_fout);
  }
  if (c == 43) {
    {
    fprintf(_coverage_fout, "395\n");
    fflush(_coverage_fout);
    }
    goto _L;
  } else {
    {
    fprintf(_coverage_fout, "396\n");
    fflush(_coverage_fout);
    }
    if (c == 45) {
      {
      fprintf(_coverage_fout, "397\n");
      fflush(_coverage_fout);
      }
      _L: /* CIL Label */ 
      f = 0;
      {
      fprintf(_coverage_fout, "398\n");
      fflush(_coverage_fout);
      }
      if (c == 45) {
        {
        fprintf(_coverage_fout, "399\n");
        fflush(_coverage_fout);
        }
        f ++;
      } else {
        {
        fprintf(_coverage_fout, "400\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "401\n");
      fflush(_coverage_fout);
      }
      i = 0;
      {
      fprintf(_coverage_fout, "402\n");
      fflush(_coverage_fout);
      }
      c = get();
      {
      fprintf(_coverage_fout, "403\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "404\n");
        fflush(_coverage_fout);
        }
        if (c >= 48) {
          {
          fprintf(_coverage_fout, "405\n");
          fflush(_coverage_fout);
          }
          if (c <= 57) {
            {
            fprintf(_coverage_fout, "406\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "407\n");
            fflush(_coverage_fout);
            }
            break;
          }
        } else {
          {
          fprintf(_coverage_fout, "408\n");
          fflush(_coverage_fout);
          }
          break;
        }
        {
        fprintf(_coverage_fout, "409\n");
        fflush(_coverage_fout);
        }
        i = (i * 10 + c) - 48;
        {
        fprintf(_coverage_fout, "410\n");
        fflush(_coverage_fout);
        }
        c = get();
      }
      {
      fprintf(_coverage_fout, "411\n");
      fflush(_coverage_fout);
      }
      if (f) {
        {
        fprintf(_coverage_fout, "412\n");
        fflush(_coverage_fout);
        }
        i = - i;
      } else {
        {
        fprintf(_coverage_fout, "413\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "414\n");
      fflush(_coverage_fout);
      }
      dp -= i;
    } else {
      {
      fprintf(_coverage_fout, "415\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "416\n");
  fflush(_coverage_fout);
  }
  e = 1.;
  {
  fprintf(_coverage_fout, "417\n");
  fflush(_coverage_fout);
  }
  i = dp;
  {
  fprintf(_coverage_fout, "418\n");
  fflush(_coverage_fout);
  }
  if (i < 0) {
    {
    fprintf(_coverage_fout, "419\n");
    fflush(_coverage_fout);
    }
    i = - i;
  } else {
    {
    fprintf(_coverage_fout, "420\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "421\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "422\n");
    fflush(_coverage_fout);
    }
    tmp = i;
    {
    fprintf(_coverage_fout, "423\n");
    fflush(_coverage_fout);
    }
    i --;
    {
    fprintf(_coverage_fout, "424\n");
    fflush(_coverage_fout);
    }
    if (tmp) {
      {
      fprintf(_coverage_fout, "425\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "426\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "427\n");
    fflush(_coverage_fout);
    }
    e *= 10.;
  }
  {
  fprintf(_coverage_fout, "428\n");
  fflush(_coverage_fout);
  }
  if (dp < 0) {
    {
    fprintf(_coverage_fout, "429\n");
    fflush(_coverage_fout);
    }
    d *= e;
  } else {
    {
    fprintf(_coverage_fout, "430\n");
    fflush(_coverage_fout);
    }
    d /= e;
  }
  {
  fprintf(_coverage_fout, "431\n");
  fflush(_coverage_fout);
  }
  if (c == 124) {
    {
    fprintf(_coverage_fout, "432\n");
    fflush(_coverage_fout);
    }
    tmp___0 = getflt();
    {
    fprintf(_coverage_fout, "433\n");
    fflush(_coverage_fout);
    }
    return (d / tmp___0);
  } else {
    {
    fprintf(_coverage_fout, "434\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "435\n");
  fflush(_coverage_fout);
  }
  peekc = c;
  {
  fprintf(_coverage_fout, "436\n");
  fflush(_coverage_fout);
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
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "437\n");
  fflush(_coverage_fout);
  }
  c = peekc;
  {
  fprintf(_coverage_fout, "438\n");
  fflush(_coverage_fout);
  }
  if (c) {
    {
    fprintf(_coverage_fout, "439\n");
    fflush(_coverage_fout);
    }
    peekc = 0;
    {
    fprintf(_coverage_fout, "440\n");
    fflush(_coverage_fout);
    }
    return (c);
  } else {
    {
    fprintf(_coverage_fout, "441\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "442\n");
  fflush(_coverage_fout);
  }
  c = _IO_getc(inp);
  {
  fprintf(_coverage_fout, "443\n");
  fflush(_coverage_fout);
  }
  if (c == -1) {
    {
    fprintf(_coverage_fout, "444\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )inp == (unsigned long )stdin) {
      {
      fprintf(_coverage_fout, "445\n");
      fflush(_coverage_fout);
      }
      printf((char const   */* __restrict  */)"\n");
      {
      fprintf(_coverage_fout, "446\n");
      fflush(_coverage_fout);
      }
      exit(0);
    } else {
      {
      fprintf(_coverage_fout, "447\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "448\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "449\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "450\n");
  fflush(_coverage_fout);
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
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "451\n");
  fflush(_coverage_fout);
  }
  h = 0U;
  {
  fprintf(_coverage_fout, "452\n");
  fflush(_coverage_fout);
  }
  np = name;
  {
  fprintf(_coverage_fout, "453\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "454\n");
    fflush(_coverage_fout);
    }
    if (*np) {
      {
      fprintf(_coverage_fout, "455\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "456\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "457\n");
    fflush(_coverage_fout);
    }
    tmp = np;
    {
    fprintf(_coverage_fout, "458\n");
    fflush(_coverage_fout);
    }
    np ++;
    {
    fprintf(_coverage_fout, "459\n");
    fflush(_coverage_fout);
    }
    h = (h * 57U + (unsigned int )*tmp) - 48U;
  }
  {
  fprintf(_coverage_fout, "460\n");
  fflush(_coverage_fout);
  }
  if ((int )h < 0) {
    {
    fprintf(_coverage_fout, "461\n");
    fflush(_coverage_fout);
    }
    h = (unsigned int )(- ((int )h));
  } else {
    {
    fprintf(_coverage_fout, "462\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "463\n");
  fflush(_coverage_fout);
  }
  h %= 1009U;
  {
  fprintf(_coverage_fout, "464\n");
  fflush(_coverage_fout);
  }
  tp = & table[h];
  {
  fprintf(_coverage_fout, "465\n");
  fflush(_coverage_fout);
  }
  l0: 
  if ((unsigned long )tp->name == (unsigned long )((char *)0)) {
    {
    fprintf(_coverage_fout, "466\n");
    fflush(_coverage_fout);
    }
    return (tp);
  } else {
    {
    fprintf(_coverage_fout, "467\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "468\n");
  fflush(_coverage_fout);
  }
  tmp___0 = equal(name, tp->name);
  {
  fprintf(_coverage_fout, "469\n");
  fflush(_coverage_fout);
  }
  if (tmp___0) {
    {
    fprintf(_coverage_fout, "470\n");
    fflush(_coverage_fout);
    }
    return (tp);
  } else {
    {
    fprintf(_coverage_fout, "471\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "472\n");
  fflush(_coverage_fout);
  }
  tp ++;
  {
  fprintf(_coverage_fout, "473\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )tp >= (unsigned long )(& table[1009])) {
    {
    fprintf(_coverage_fout, "474\n");
    fflush(_coverage_fout);
    }
    tp = table;
  } else {
    {
    fprintf(_coverage_fout, "475\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "476\n");
  fflush(_coverage_fout);
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
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/units/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "477\n");
  fflush(_coverage_fout);
  }
  signal(8, & fperr);
  {
  fprintf(_coverage_fout, "478\n");
  fflush(_coverage_fout);
  }
  fperrc ++;
  {
  fprintf(_coverage_fout, "479\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
