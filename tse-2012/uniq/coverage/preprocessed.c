extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1),
__leaf__)) memset)(void *__s , int __c , unsigned long __n ) ;
struct _IO_FILE;
struct _IO_FILE *_coverage_fout  ;
typedef unsigned long size_t;
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
typedef long __int64_t;
typedef unsigned long __uint64_t;
typedef long __quad_t;
typedef unsigned long __u_quad_t;
typedef unsigned long __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long __ino_t;
typedef unsigned long __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long __nlink_t;
typedef long __off_t;
typedef long __off64_t;
typedef int __pid_t;
struct __anonstruct___fsid_t_1 {
   int __val[2] ;
};
typedef struct __anonstruct___fsid_t_1 __fsid_t;
typedef long __clock_t;
typedef unsigned long __rlim_t;
typedef unsigned long __rlim64_t;
typedef unsigned int __id_t;
typedef long __time_t;
typedef unsigned int __useconds_t;
typedef long __suseconds_t;
typedef int __daddr_t;
typedef int __key_t;
typedef int __clockid_t;
typedef void *__timer_t;
typedef long __blksize_t;
typedef long __blkcnt_t;
typedef long __blkcnt64_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsblkcnt64_t;
typedef unsigned long __fsfilcnt_t;
typedef unsigned long __fsfilcnt64_t;
typedef long __fsword_t;
typedef long __ssize_t;
typedef long __syscall_slong_t;
typedef unsigned long __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;
typedef long __intptr_t;
typedef unsigned int __socklen_t;
typedef struct _IO_FILE FILE;
typedef struct _IO_FILE __FILE;
union __anonunion___value_3 {
   unsigned int __wch ;
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
typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;
typedef _G_fpos_t fpos_t;
enum __anonenum_6 {
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
static char *sccsid  =    (char *)"@(#)uniq.c\t7.1\t(ULTRIX)\t7/23/92";
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
extern int __underflow(_IO_FILE * ) ;
extern int __uflow(_IO_FILE * ) ;
extern int __overflow(_IO_FILE * , int  ) ;
extern int _IO_getc(_IO_FILE *__fp ) ;
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) _IO_feof)(_IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) _IO_ferror)(_IO_FILE *__fp ) ;
extern int _IO_peekc_locked(_IO_FILE *__fp ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) _IO_flockfile)(_IO_FILE * ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) _IO_funlockfile)(_IO_FILE * ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) _IO_ftrylockfile)(_IO_FILE * ) ;
extern int _IO_vfscanf(_IO_FILE * __restrict   , char const   * __restrict   ,
                       __gnuc_va_list  , int * __restrict   ) ;
extern int _IO_vfprintf(_IO_FILE * __restrict   , char const   * __restrict   ,
                        __gnuc_va_list  ) ;
extern __ssize_t _IO_padn(_IO_FILE * , int  , __ssize_t  ) ;
extern size_t _IO_sgetn(_IO_FILE * , void * , size_t  ) ;
extern __off64_t _IO_seekoff(_IO_FILE * , __off64_t  , int  , int  ) ;
extern __off64_t _IO_seekpos(_IO_FILE * , __off64_t  , int  ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) _IO_free_backup_area)(_IO_FILE * ) ;
extern struct _IO_FILE *stdin ;
extern struct _IO_FILE *stdout ;
extern struct _IO_FILE *stderr ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) remove)(char const   *__filename ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) rename)(char const   *__old ,
                                                                             char const   *__new ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) renameat)(int __oldfd ,
                                                                               char const   *__old ,
                                                                               int __newfd ,
                                                                               char const   *__new ) ;
extern FILE *tmpfile(void) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) tmpnam)(char *__s ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) tmpnam_r)(char *__s ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) tempnam)(char const   *__dir ,
                                                                                char const   *__pfx )  __attribute__((__malloc__)) ;
extern int fclose(FILE *__stream ) ;
extern int fflush(FILE *__stream ) ;
extern int fflush_unlocked(FILE *__stream ) ;
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream ) ;
extern  __attribute__((__nothrow__)) FILE *( __attribute__((__leaf__)) fdopen)(int __fd ,
                                                                               char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *( __attribute__((__leaf__)) fmemopen)(void *__s ,
                                                                                 size_t __len ,
                                                                                 char const   *__modes ) ;
extern  __attribute__((__nothrow__)) FILE *( __attribute__((__leaf__)) open_memstream)(char **__bufloc ,
                                                                                       size_t *__sizeloc ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) setbuf)(FILE * __restrict  __stream ,
                                                                              char * __restrict  __buf ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) setvbuf)(FILE * __restrict  __stream ,
                                                                              char * __restrict  __buf ,
                                                                              int __modes ,
                                                                              size_t __n ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) setbuffer)(FILE * __restrict  __stream ,
                                                                                 char * __restrict  __buf ,
                                                                                 size_t __size ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) setlinebuf)(FILE *__stream ) ;
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
extern int ( /* format attribute */  vdprintf)(int __fd ,
                                               char const   * __restrict  __fmt ,
                                               __gnuc_va_list __arg ) ;
extern int ( /* format attribute */  dprintf)(int __fd ,
                                              char const   * __restrict  __fmt 
                                              , ...) ;
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...)  __asm__("__isoc99_fscanf")  ;
extern int scanf(char const   * __restrict  __format  , ...)  __asm__("__isoc99_scanf")  ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) sscanf)(char const   * __restrict  __s ,
                                                                             char const   * __restrict  __format 
                                                                             , ...)  __asm__("__isoc99_sscanf")  ;
extern int ( /* format attribute */  vfscanf)(FILE * __restrict  __s ,
                                              char const   * __restrict  __format ,
                                              __gnuc_va_list __arg )  __asm__("__isoc99_vfscanf")  ;
extern int ( /* format attribute */  vscanf)(char const   * __restrict  __format ,
                                             __gnuc_va_list __arg )  __asm__("__isoc99_vscanf")  ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */ __attribute__((__leaf__)) vsscanf)(char const   * __restrict  __s ,
                                                                                                     char const   * __restrict  __format ,
                                                                                                     __gnuc_va_list __arg )  __asm__("__isoc99_vsscanf")  ;
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
extern char *gets(char *__s )  __attribute__((__deprecated__)) ;
extern __ssize_t __getdelim(char ** __restrict  __lineptr ,
                            size_t * __restrict  __n , int __delimiter ,
                            FILE * __restrict  __stream ) ;
extern __ssize_t getdelim(char ** __restrict  __lineptr ,
                          size_t * __restrict  __n , int __delimiter ,
                          FILE * __restrict  __stream ) ;
extern __ssize_t getline(char ** __restrict  __lineptr ,
                         size_t * __restrict  __n , FILE * __restrict  __stream ) ;
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
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) clearerr)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) feof)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ferror)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) clearerr_unlocked)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) feof_unlocked)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ferror_unlocked)(FILE *__stream ) ;
extern void perror(char const   *__s ) ;
extern int sys_nerr ;
extern char const   * const  sys_errlist[] ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fileno)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) fileno_unlocked)(FILE *__stream ) ;
extern FILE *popen(char const   *__command , char const   *__modes ) ;
extern int pclose(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__leaf__)) ctermid)(char *__s ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) flockfile)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ftrylockfile)(FILE *__stream ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__leaf__)) funlockfile)(FILE *__stream ) ;
__inline static unsigned int __bswap_32(unsigned int __bsx ) 
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
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  tmp = __builtin_bswap32((int )__bsx);
  {
  fprintf(_coverage_fout, "2\n");
  fflush(_coverage_fout);
  }
  return ((unsigned int )tmp);
}
}
__inline static __uint64_t __bswap_64(__uint64_t __bsx ) 
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
  tmp = __builtin_bswap64((long )__bsx);
  {
  fprintf(_coverage_fout, "4\n");
  fflush(_coverage_fout);
  }
  return ((__uint64_t )tmp);
}
}
extern  __attribute__((__nothrow__)) unsigned short const   **( __attribute__((__leaf__)) __ctype_b_loc)(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) __int32_t const   **( __attribute__((__leaf__)) __ctype_tolower_loc)(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) __int32_t const   **( __attribute__((__leaf__)) __ctype_toupper_loc)(void)  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isalnum)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isalpha)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iscntrl)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isdigit)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) islower)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isgraph)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isprint)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ispunct)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isspace)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isupper)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isxdigit)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tolower)(int __c ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) toupper)(int __c ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isblank)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isascii)(int __c ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) toascii)(int __c ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) _toupper)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) _tolower)(int  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isalnum_l)(int  ,
                                                                                __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isalpha_l)(int  ,
                                                                                __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) iscntrl_l)(int  ,
                                                                                __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isdigit_l)(int  ,
                                                                                __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) islower_l)(int  ,
                                                                                __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isgraph_l)(int  ,
                                                                                __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isprint_l)(int  ,
                                                                                __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) ispunct_l)(int  ,
                                                                                __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isspace_l)(int  ,
                                                                                __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isupper_l)(int  ,
                                                                                __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isxdigit_l)(int  ,
                                                                                 __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) isblank_l)(int  ,
                                                                                __locale_t  ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) __tolower_l)(int __c ,
                                                                                  __locale_t __l ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) tolower_l)(int __c ,
                                                                                __locale_t __l ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) __toupper_l)(int __c ,
                                                                                  __locale_t __l ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__leaf__)) toupper_l)(int __c ,
                                                                                __locale_t __l ) ;
int fields  ;
int letters  ;
int linec  ;
char mode  ;
int uniq  ;
char *skip(char *s ) ;
static char b1[1000]  ;
static char b2[1000]  ;
extern int ( /* missing proto */  atoi)() ;
int printe(char *p , char *s ) ;
extern int ( /* missing proto */  exit)() ;
int gline(char *buf ) ;
int pline(char *buf ) ;
int equal(char *b1___0 , char *b2___0 ) ;
int main(int argc , char **argv ) 
{ 
  unsigned short const   **tmp ;
  FILE *tmp___0 ;
  FILE *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;

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
  while (1) {
    {
    fprintf(_coverage_fout, "6\n");
    fflush(_coverage_fout);
    }
    if (argc > 1) {
      {
      fprintf(_coverage_fout, "7\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "8\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "9\n");
    fflush(_coverage_fout);
    }
    if ((int )*(*(argv + 1)) == 45) {
      {
      fprintf(_coverage_fout, "10\n");
      fflush(_coverage_fout);
      }
      tmp = __ctype_b_loc();
      {
      fprintf(_coverage_fout, "11\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(*tmp + (int )*(*(argv + 1) + 1)) & 2048) {
        {
        fprintf(_coverage_fout, "12\n");
        fflush(_coverage_fout);
        }
        fields = atoi(*(argv + 1) + 1);
      } else {
        {
        fprintf(_coverage_fout, "13\n");
        fflush(_coverage_fout);
        }
        mode = *(*(argv + 1) + 1);
      }
      {
      fprintf(_coverage_fout, "14\n");
      fflush(_coverage_fout);
      }
      argc --;
      {
      fprintf(_coverage_fout, "15\n");
      fflush(_coverage_fout);
      }
      argv ++;
      {
      fprintf(_coverage_fout, "16\n");
      fflush(_coverage_fout);
      }
      continue;
    } else {
      {
      fprintf(_coverage_fout, "17\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "18\n");
    fflush(_coverage_fout);
    }
    if ((int )*(*(argv + 1)) == 43) {
      {
      fprintf(_coverage_fout, "19\n");
      fflush(_coverage_fout);
      }
      letters = atoi(*(argv + 1) + 1);
      {
      fprintf(_coverage_fout, "20\n");
      fflush(_coverage_fout);
      }
      argc --;
      {
      fprintf(_coverage_fout, "21\n");
      fflush(_coverage_fout);
      }
      argv ++;
      {
      fprintf(_coverage_fout, "22\n");
      fflush(_coverage_fout);
      }
      continue;
    } else {
      {
      fprintf(_coverage_fout, "23\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "24\n");
    fflush(_coverage_fout);
    }
    tmp___0 = freopen((char const   */* __restrict  */)*(argv + 1),
                      (char const   */* __restrict  */)"r",
                      (FILE */* __restrict  */)stdin);
    {
    fprintf(_coverage_fout, "25\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )tmp___0 == (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "26\n");
      fflush(_coverage_fout);
      }
      printe("cannot open %s\n", *(argv + 1));
    } else {
      {
      fprintf(_coverage_fout, "27\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "28\n");
    fflush(_coverage_fout);
    }
    break;
  }
  {
  fprintf(_coverage_fout, "29\n");
  fflush(_coverage_fout);
  }
  if (argc > 2) {
    {
    fprintf(_coverage_fout, "30\n");
    fflush(_coverage_fout);
    }
    tmp___1 = freopen((char const   */* __restrict  */)*(argv + 2),
                      (char const   */* __restrict  */)"w",
                      (FILE */* __restrict  */)stdout);
    {
    fprintf(_coverage_fout, "31\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )tmp___1 == (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "32\n");
      fflush(_coverage_fout);
      }
      printe("cannot create %s\n", *(argv + 2));
    } else {
      {
      fprintf(_coverage_fout, "33\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "34\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "35\n");
  fflush(_coverage_fout);
  }
  tmp___2 = gline(b1);
  {
  fprintf(_coverage_fout, "36\n");
  fflush(_coverage_fout);
  }
  if (tmp___2) {
    {
    fprintf(_coverage_fout, "37\n");
    fflush(_coverage_fout);
    }
    exit(0);
  } else {
    {
    fprintf(_coverage_fout, "38\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "39\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "40\n");
    fflush(_coverage_fout);
    }
    linec ++;
    {
    fprintf(_coverage_fout, "41\n");
    fflush(_coverage_fout);
    }
    tmp___3 = gline(b2);
    {
    fprintf(_coverage_fout, "42\n");
    fflush(_coverage_fout);
    }
    if (tmp___3) {
      {
      fprintf(_coverage_fout, "43\n");
      fflush(_coverage_fout);
      }
      pline(b1);
      {
      fprintf(_coverage_fout, "44\n");
      fflush(_coverage_fout);
      }
      exit(0);
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
    tmp___6 = equal(b1, b2);
    {
    fprintf(_coverage_fout, "47\n");
    fflush(_coverage_fout);
    }
    if (tmp___6) {
      {
      fprintf(_coverage_fout, "48\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "49\n");
      fflush(_coverage_fout);
      }
      pline(b1);
      {
      fprintf(_coverage_fout, "50\n");
      fflush(_coverage_fout);
      }
      linec = 0;
      {
      fprintf(_coverage_fout, "51\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "52\n");
        fflush(_coverage_fout);
        }
        linec ++;
        {
        fprintf(_coverage_fout, "53\n");
        fflush(_coverage_fout);
        }
        tmp___4 = gline(b1);
        {
        fprintf(_coverage_fout, "54\n");
        fflush(_coverage_fout);
        }
        if (tmp___4) {
          {
          fprintf(_coverage_fout, "55\n");
          fflush(_coverage_fout);
          }
          pline(b2);
          {
          fprintf(_coverage_fout, "56\n");
          fflush(_coverage_fout);
          }
          exit(0);
        } else {
          {
          fprintf(_coverage_fout, "57\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "58\n");
        fflush(_coverage_fout);
        }
        tmp___5 = equal(b1, b2);
        {
        fprintf(_coverage_fout, "59\n");
        fflush(_coverage_fout);
        }
        if (tmp___5) {
          {
          fprintf(_coverage_fout, "60\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "61\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
      {
      fprintf(_coverage_fout, "62\n");
      fflush(_coverage_fout);
      }
      pline(b2);
      {
      fprintf(_coverage_fout, "63\n");
      fflush(_coverage_fout);
      }
      linec = 0;
    }
  }
}
}
int gline(char *buf ) 
{ 
  register int c ;
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
  fprintf(_coverage_fout, "64\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "65\n");
    fflush(_coverage_fout);
    }
    c = getchar();
    {
    fprintf(_coverage_fout, "66\n");
    fflush(_coverage_fout);
    }
    if (c != 10) {
      {
      fprintf(_coverage_fout, "67\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "68\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "69\n");
    fflush(_coverage_fout);
    }
    if (c == -1) {
      {
      fprintf(_coverage_fout, "70\n");
      fflush(_coverage_fout);
      }
      return (1);
    } else {
      {
      fprintf(_coverage_fout, "71\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "72\n");
    fflush(_coverage_fout);
    }
    tmp = buf;
    {
    fprintf(_coverage_fout, "73\n");
    fflush(_coverage_fout);
    }
    buf ++;
    {
    fprintf(_coverage_fout, "74\n");
    fflush(_coverage_fout);
    }
    *tmp = (char )c;
  }
  {
  fprintf(_coverage_fout, "75\n");
  fflush(_coverage_fout);
  }
  *buf = (char)0;
  {
  fprintf(_coverage_fout, "76\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
int pline(char *buf ) 
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
  fprintf(_coverage_fout, "77\n");
  fflush(_coverage_fout);
  }
  switch ((int )mode) {
  {
  fprintf(_coverage_fout, "78\n");
  fflush(_coverage_fout);
  }
  case 117: 
  if (uniq) {
    {
    fprintf(_coverage_fout, "79\n");
    fflush(_coverage_fout);
    }
    uniq = 0;
    {
    fprintf(_coverage_fout, "80\n");
    fflush(_coverage_fout);
    }
    return;
  } else {
    {
    fprintf(_coverage_fout, "81\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "82\n");
  fflush(_coverage_fout);
  }
  break;
  {
  fprintf(_coverage_fout, "83\n");
  fflush(_coverage_fout);
  }
  case 100: 
  if (uniq) {
    {
    fprintf(_coverage_fout, "84\n");
    fflush(_coverage_fout);
    }
    break;
  } else {
    {
    fprintf(_coverage_fout, "85\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "86\n");
  fflush(_coverage_fout);
  }
  return;
  {
  fprintf(_coverage_fout, "87\n");
  fflush(_coverage_fout);
  }
  case 99: 
  printf((char const   */* __restrict  */)"%4d ", linec);
  }
  {
  fprintf(_coverage_fout, "88\n");
  fflush(_coverage_fout);
  }
  uniq = 0;
  {
  fprintf(_coverage_fout, "89\n");
  fflush(_coverage_fout);
  }
  fputs((char const   */* __restrict  */)buf, (FILE */* __restrict  */)stdout);
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
int equal(char *b1___0 , char *b2___0 ) 
{ 
  register char c ;
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
  fprintf(_coverage_fout, "92\n");
  fflush(_coverage_fout);
  }
  b1___0 = skip(b1___0);
  {
  fprintf(_coverage_fout, "93\n");
  fflush(_coverage_fout);
  }
  b2___0 = skip(b2___0);
  {
  fprintf(_coverage_fout, "94\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "95\n");
    fflush(_coverage_fout);
    }
    tmp___0 = b1___0;
    {
    fprintf(_coverage_fout, "96\n");
    fflush(_coverage_fout);
    }
    b1___0 ++;
    {
    fprintf(_coverage_fout, "97\n");
    fflush(_coverage_fout);
    }
    c = *tmp___0;
    {
    fprintf(_coverage_fout, "98\n");
    fflush(_coverage_fout);
    }
    if ((int )c != 0) {
      {
      fprintf(_coverage_fout, "99\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "100\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "101\n");
    fflush(_coverage_fout);
    }
    tmp = b2___0;
    {
    fprintf(_coverage_fout, "102\n");
    fflush(_coverage_fout);
    }
    b2___0 ++;
    {
    fprintf(_coverage_fout, "103\n");
    fflush(_coverage_fout);
    }
    if ((int )c != (int )*tmp) {
      {
      fprintf(_coverage_fout, "104\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "105\n");
      fflush(_coverage_fout);
      }

    }
  }
  {
  fprintf(_coverage_fout, "106\n");
  fflush(_coverage_fout);
  }
  if ((int )*b2___0 != 0) {
    {
    fprintf(_coverage_fout, "107\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "108\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "109\n");
  fflush(_coverage_fout);
  }
  uniq ++;
  {
  fprintf(_coverage_fout, "110\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
char *skip(char *s ) 
{ 
  register int nf ;
  register int nl ;
  int tmp ;
  int tmp___0 ;

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
  nl = 0;
  {
  fprintf(_coverage_fout, "112\n");
  fflush(_coverage_fout);
  }
  nf = nl;
  {
  fprintf(_coverage_fout, "113\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "114\n");
    fflush(_coverage_fout);
    }
    tmp = nf;
    {
    fprintf(_coverage_fout, "115\n");
    fflush(_coverage_fout);
    }
    nf ++;
    {
    fprintf(_coverage_fout, "116\n");
    fflush(_coverage_fout);
    }
    if (tmp < fields) {
      {
      fprintf(_coverage_fout, "117\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "118\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "119\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "120\n");
      fflush(_coverage_fout);
      }
      if ((int )*s == 32) {
        {
        fprintf(_coverage_fout, "121\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "122\n");
        fflush(_coverage_fout);
        }
        if ((int )*s == 9) {
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
      s ++;
    }
    {
    fprintf(_coverage_fout, "126\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "127\n");
      fflush(_coverage_fout);
      }
      if ((int )*s == 32) {
        {
        fprintf(_coverage_fout, "128\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "129\n");
        fflush(_coverage_fout);
        }
        if ((int )*s == 9) {
          {
          fprintf(_coverage_fout, "130\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "131\n");
          fflush(_coverage_fout);
          }
          if ((int )*s == 0) {
            {
            fprintf(_coverage_fout, "132\n");
            fflush(_coverage_fout);
            }
            break;
          } else {
            {
            fprintf(_coverage_fout, "133\n");
            fflush(_coverage_fout);
            }

          }
        }
      }
      {
      fprintf(_coverage_fout, "134\n");
      fflush(_coverage_fout);
      }
      s ++;
    }
  }
  {
  fprintf(_coverage_fout, "135\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "136\n");
    fflush(_coverage_fout);
    }
    tmp___0 = nl;
    {
    fprintf(_coverage_fout, "137\n");
    fflush(_coverage_fout);
    }
    nl ++;
    {
    fprintf(_coverage_fout, "138\n");
    fflush(_coverage_fout);
    }
    if (tmp___0 < letters) {
      {
      fprintf(_coverage_fout, "139\n");
      fflush(_coverage_fout);
      }
      if ((int )*s != 0) {
        {
        fprintf(_coverage_fout, "140\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "141\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "142\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "143\n");
    fflush(_coverage_fout);
    }
    s ++;
  }
  {
  fprintf(_coverage_fout, "144\n");
  fflush(_coverage_fout);
  }
  return (s);
}
}
int printe(char *p , char *s ) 
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
  fprintf(_coverage_fout, "145\n");
  fflush(_coverage_fout);
  }
  fprintf((FILE */* __restrict  */)stderr, (char const   */* __restrict  */)p, s);
  {
  fprintf(_coverage_fout, "146\n");
  fflush(_coverage_fout);
  }
  exit(1);
}
}
