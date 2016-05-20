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
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memcpy)(void * __restrict  __dest ,
                                                                                       void const   * __restrict  __src ,
                                                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memmove)(void *__dest ,
                                                                                        void const   *__src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memccpy)(void * __restrict  __dest ,
                                                                                        void const   * __restrict  __src ,
                                                                                        int __c ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memset)(void *__s ,
                                                                                     int __c ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) memcmp)(void const   *__s1 ,
                                                                                     void const   *__s2 ,
                                                                                     size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memchr)(void const   *__s ,
                                                                                     int __c ,
                                                                                     size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcpy)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strncpy)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcat)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strncat)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcmp)(char const   *__s1 ,
                                                                                     char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncmp)(char const   *__s1 ,
                                                                                      char const   *__s2 ,
                                                                                      size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcoll)(char const   *__s1 ,
                                                                                      char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(2))) strxfrm)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ,
                                                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strdup)(char const   *__s )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strchr)(char const   *__s ,
                                                                                     int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strrchr)(char const   *__s ,
                                                                                      int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2))) strcspn)(char const   *__s ,
                                                                                         char const   *__reject )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2))) strspn)(char const   *__s ,
                                                                                        char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strpbrk)(char const   *__s ,
                                                                                        char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strstr)(char const   *__haystack ,
                                                                                       char const   *__needle )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2))) strtok)(char * __restrict  __s ,
                                                                                     char const   * __restrict  __delim ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2,3))) __strtok_r)(char * __restrict  __s ,
                                                                                           char const   * __restrict  __delim ,
                                                                                           char ** __restrict  __save_ptr ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2,3))) strtok_r)(char * __restrict  __s ,
                                                                                         char const   * __restrict  __delim ,
                                                                                         char ** __restrict  __save_ptr ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1))) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) strerror_r)(int __errnum ,
                                                                                       char *__buf ,
                                                                                       size_t __buflen )  __asm__("__xpg_strerror_r")  ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) __bzero)(void *__s ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1,2))) bcopy)(void const   *__src ,
                                                                                     void *__dest ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) bzero)(void *__s ,
                                                                                   size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) bcmp)(void const   *__s1 ,
                                                                                   void const   *__s2 ,
                                                                                   size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) index)(char const   *__s ,
                                                                                    int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) rindex)(char const   *__s ,
                                                                                     int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcasecmp)(char const   *__s1 ,
                                                                                         char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncasecmp)(char const   *__s1 ,
                                                                                          char const   *__s2 ,
                                                                                          size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strsep)(char ** __restrict  __stringp ,
                                                                                       char const   * __restrict  __delim ) ;
FILE *dfile  ;
char *filenam  =    (char *)"words";
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
{ 
  register int c ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/look-svr/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "2\n");
    fflush(_coverage_fout);
    }
    if (argc >= 2) {
      {
      fprintf(_coverage_fout, "3\n");
      fflush(_coverage_fout);
      }
      if ((int )*(*(argv + 1)) == 45) {
        {
        fprintf(_coverage_fout, "4\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "5\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "6\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "7\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "8\n");
      fflush(_coverage_fout);
      }
      (*(argv + 1)) ++;
      {
      fprintf(_coverage_fout, "9\n");
      fflush(_coverage_fout);
      }
      switch ((int )*(*(argv + 1))) {
      {
      fprintf(_coverage_fout, "10\n");
      fflush(_coverage_fout);
      }
      case 100: 
      dict ++;
      {
      fprintf(_coverage_fout, "11\n");
      fflush(_coverage_fout);
      }
      goto __Cont;
      {
      fprintf(_coverage_fout, "12\n");
      fflush(_coverage_fout);
      }
      case 102: 
      fold ++;
      {
      fprintf(_coverage_fout, "13\n");
      fflush(_coverage_fout);
      }
      goto __Cont;
      {
      fprintf(_coverage_fout, "14\n");
      fflush(_coverage_fout);
      }
      case 116: 
      tab = (int )*(*(argv + 1) + 1);
      {
      fprintf(_coverage_fout, "15\n");
      fflush(_coverage_fout);
      }
      if (tab) {
        {
        fprintf(_coverage_fout, "16\n");
        fflush(_coverage_fout);
        }
        (*(argv + 1)) ++;
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
      goto __Cont;
      {
      fprintf(_coverage_fout, "19\n");
      fflush(_coverage_fout);
      }
      case 0: 
      break;
      {
      fprintf(_coverage_fout, "20\n");
      fflush(_coverage_fout);
      }
      default: 
      goto __Cont;
      }
      {
      fprintf(_coverage_fout, "21\n");
      fflush(_coverage_fout);
      }
      break;
      {
      fprintf(_coverage_fout, "22\n");
      fflush(_coverage_fout);
      }
      __Cont: /* CIL Label */ ;
    }
    {
    fprintf(_coverage_fout, "23\n");
    fflush(_coverage_fout);
    }
    argc --;
    {
    fprintf(_coverage_fout, "24\n");
    fflush(_coverage_fout);
    }
    argv ++;
  }
  {
  fprintf(_coverage_fout, "25\n");
  fflush(_coverage_fout);
  }
  if (argc <= 1) {
    {
    fprintf(_coverage_fout, "26\n");
    fflush(_coverage_fout);
    }
    return;
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
  if (argc == 2) {
    {
    fprintf(_coverage_fout, "29\n");
    fflush(_coverage_fout);
    }
    fold ++;
    {
    fprintf(_coverage_fout, "30\n");
    fflush(_coverage_fout);
    }
    dict ++;
  } else {
    {
    fprintf(_coverage_fout, "31\n");
    fflush(_coverage_fout);
    }
    filenam = *(argv + 2);
  }
  {
  fprintf(_coverage_fout, "32\n");
  fflush(_coverage_fout);
  }
  dfile = fopen((char const   */* __restrict  */)filenam,
                (char const   */* __restrict  */)"r");
  {
  fprintf(_coverage_fout, "33\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )dfile == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "34\n");
    fflush(_coverage_fout);
    }
    fprintf((FILE */* __restrict  */)stderr,
            (char const   */* __restrict  */)"look: can\'t open %s\n", filenam);
    {
    fprintf(_coverage_fout, "35\n");
    fflush(_coverage_fout);
    }
    exit(2);
  } else {
    {
    fprintf(_coverage_fout, "36\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "37\n");
  fflush(_coverage_fout);
  }
  wstring = strdup((char const   *)*(argv + 1));
  {
  fprintf(_coverage_fout, "38\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )tab != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "39\n");
    fflush(_coverage_fout);
    }
    ptr = strchr((char const   *)wstring, tab);
    {
    fprintf(_coverage_fout, "40\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )ptr != (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "41\n");
      fflush(_coverage_fout);
      }
      ptr ++;
      {
      fprintf(_coverage_fout, "42\n");
      fflush(_coverage_fout);
      }
      *ptr = (char )'\000';
    } else {
      {
      fprintf(_coverage_fout, "43\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "44\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "45\n");
  fflush(_coverage_fout);
  }
  canon(wstring, key);
  {
  fprintf(_coverage_fout, "46\n");
  fflush(_coverage_fout);
  }
  bot = 0L;
  {
  fprintf(_coverage_fout, "47\n");
  fflush(_coverage_fout);
  }
  fseek(dfile, 0L, 2);
  {
  fprintf(_coverage_fout, "48\n");
  fflush(_coverage_fout);
  }
  top = ftell(dfile);
  {
  fprintf(_coverage_fout, "49\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "50\n");
    fflush(_coverage_fout);
    }
    mid = (top + bot) / 2L;
    {
    fprintf(_coverage_fout, "51\n");
    fflush(_coverage_fout);
    }
    fseek(dfile, mid, 0);
    {
    fprintf(_coverage_fout, "52\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "53\n");
      fflush(_coverage_fout);
      }
      c = _IO_getc(dfile);
      {
      fprintf(_coverage_fout, "54\n");
      fflush(_coverage_fout);
      }
      mid ++;
      {
      fprintf(_coverage_fout, "55\n");
      fflush(_coverage_fout);
      }
      if (c != -1) {
        {
        fprintf(_coverage_fout, "56\n");
        fflush(_coverage_fout);
        }
        if (c != 10) {
          {
          fprintf(_coverage_fout, "57\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "58\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "59\n");
        fflush(_coverage_fout);
        }
        break;
      }
    }
    {
    fprintf(_coverage_fout, "60\n");
    fflush(_coverage_fout);
    }
    tmp = getword(entry);
    {
    fprintf(_coverage_fout, "61\n");
    fflush(_coverage_fout);
    }
    if (tmp) {
      {
      fprintf(_coverage_fout, "62\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "63\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "64\n");
    fflush(_coverage_fout);
    }
    canon(entry, word);
    {
    fprintf(_coverage_fout, "65\n");
    fflush(_coverage_fout);
    }
    tmp___0 = compare(key, word);
    {
    fprintf(_coverage_fout, "66\n");
    fflush(_coverage_fout);
    }
    switch (tmp___0) {
    {
    fprintf(_coverage_fout, "67\n");
    fflush(_coverage_fout);
    }
    case 0: 
    case -1: 
    case -2: 
    if (top <= mid) {
      {
      fprintf(_coverage_fout, "68\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "69\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "70\n");
    fflush(_coverage_fout);
    }
    top = mid;
    {
    fprintf(_coverage_fout, "71\n");
    fflush(_coverage_fout);
    }
    goto __Cont___0;
    {
    fprintf(_coverage_fout, "72\n");
    fflush(_coverage_fout);
    }
    case 2: 
    case 1: 
    bot = mid;
    {
    fprintf(_coverage_fout, "73\n");
    fflush(_coverage_fout);
    }
    goto __Cont___0;
    }
    {
    fprintf(_coverage_fout, "74\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "75\n");
    fflush(_coverage_fout);
    }
    __Cont___0: /* CIL Label */ ;
  }
  {
  fprintf(_coverage_fout, "76\n");
  fflush(_coverage_fout);
  }
  fseek(dfile, bot, 0);
  {
  fprintf(_coverage_fout, "77\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "78\n");
    fflush(_coverage_fout);
    }
    tmp___3 = ftell(dfile);
    {
    fprintf(_coverage_fout, "79\n");
    fflush(_coverage_fout);
    }
    if (tmp___3 < top) {
      {
      fprintf(_coverage_fout, "80\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "81\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "82\n");
    fflush(_coverage_fout);
    }
    tmp___1 = getword(entry);
    {
    fprintf(_coverage_fout, "83\n");
    fflush(_coverage_fout);
    }
    if (tmp___1) {
      {
      fprintf(_coverage_fout, "84\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "85\n");
      fflush(_coverage_fout);
      }
      return;
    }
    {
    fprintf(_coverage_fout, "86\n");
    fflush(_coverage_fout);
    }
    canon(entry, word);
    {
    fprintf(_coverage_fout, "87\n");
    fflush(_coverage_fout);
    }
    tmp___2 = compare(key, word);
    {
    fprintf(_coverage_fout, "88\n");
    fflush(_coverage_fout);
    }
    switch (tmp___2) {
    {
    fprintf(_coverage_fout, "89\n");
    fflush(_coverage_fout);
    }
    case -2: 
    return;
    {
    fprintf(_coverage_fout, "90\n");
    fflush(_coverage_fout);
    }
    case 0: 
    case -1: 
    puts((char const   *)(entry));
    {
    fprintf(_coverage_fout, "91\n");
    fflush(_coverage_fout);
    }
    break;
    {
    fprintf(_coverage_fout, "92\n");
    fflush(_coverage_fout);
    }
    case 2: 
    case 1: 
    continue;
    }
    {
    fprintf(_coverage_fout, "93\n");
    fflush(_coverage_fout);
    }
    break;
  }
  {
  fprintf(_coverage_fout, "94\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "95\n");
    fflush(_coverage_fout);
    }
    tmp___5 = getword(entry);
    {
    fprintf(_coverage_fout, "96\n");
    fflush(_coverage_fout);
    }
    if (tmp___5) {
      {
      fprintf(_coverage_fout, "97\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "98\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "99\n");
    fflush(_coverage_fout);
    }
    canon(entry, word);
    {
    fprintf(_coverage_fout, "100\n");
    fflush(_coverage_fout);
    }
    tmp___4 = compare(key, word);
    {
    fprintf(_coverage_fout, "101\n");
    fflush(_coverage_fout);
    }
    switch (tmp___4) {
    {
    fprintf(_coverage_fout, "102\n");
    fflush(_coverage_fout);
    }
    case 0: 
    case -1: 
    puts((char const   *)(entry));
    {
    fprintf(_coverage_fout, "103\n");
    fflush(_coverage_fout);
    }
    continue;
    }
    {
    fprintf(_coverage_fout, "104\n");
    fflush(_coverage_fout);
    }
    break;
  }
  {
  fprintf(_coverage_fout, "105\n");
  fflush(_coverage_fout);
  }
  exit(0);
}
}
int compare(char *s , char *t ) 
{ 
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/look-svr/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "106\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "107\n");
    fflush(_coverage_fout);
    }
    if ((int )*s == (int )*t) {
      {
      fprintf(_coverage_fout, "108\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "109\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "110\n");
    fflush(_coverage_fout);
    }
    if ((int )*s == 0) {
      {
      fprintf(_coverage_fout, "111\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "112\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "113\n");
    fflush(_coverage_fout);
    }
    s ++;
    {
    fprintf(_coverage_fout, "114\n");
    fflush(_coverage_fout);
    }
    t ++;
  }
  {
  fprintf(_coverage_fout, "115\n");
  fflush(_coverage_fout);
  }
  if ((int )*s == 0) {
    {
    fprintf(_coverage_fout, "116\n");
    fflush(_coverage_fout);
    }
    tmp___1 = -1;
  } else {
    {
    fprintf(_coverage_fout, "117\n");
    fflush(_coverage_fout);
    }
    if ((int )*t == 0) {
      {
      fprintf(_coverage_fout, "118\n");
      fflush(_coverage_fout);
      }
      tmp___0 = 1;
    } else {
      {
      fprintf(_coverage_fout, "119\n");
      fflush(_coverage_fout);
      }
      if ((int )*s < (int )*t) {
        {
        fprintf(_coverage_fout, "120\n");
        fflush(_coverage_fout);
        }
        tmp = -2;
      } else {
        {
        fprintf(_coverage_fout, "121\n");
        fflush(_coverage_fout);
        }
        tmp = 2;
      }
      {
      fprintf(_coverage_fout, "122\n");
      fflush(_coverage_fout);
      }
      tmp___0 = tmp;
    }
    {
    fprintf(_coverage_fout, "123\n");
    fflush(_coverage_fout);
    }
    tmp___1 = tmp___0;
  }
  {
  fprintf(_coverage_fout, "124\n");
  fflush(_coverage_fout);
  }
  return (tmp___1);
}
}
int getword(char *w ) 
{ 
  register int c ;
  register int avail ;
  char *tmp ;
  int tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/look-svr/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "125\n");
  fflush(_coverage_fout);
  }
  avail = 256;
  {
  fprintf(_coverage_fout, "126\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "127\n");
    fflush(_coverage_fout);
    }
    tmp___0 = avail;
    {
    fprintf(_coverage_fout, "128\n");
    fflush(_coverage_fout);
    }
    avail --;
    {
    fprintf(_coverage_fout, "129\n");
    fflush(_coverage_fout);
    }
    if (tmp___0) {
      {
      fprintf(_coverage_fout, "130\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "131\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "132\n");
    fflush(_coverage_fout);
    }
    c = _IO_getc(dfile);
    {
    fprintf(_coverage_fout, "133\n");
    fflush(_coverage_fout);
    }
    if (c == -1) {
      {
      fprintf(_coverage_fout, "134\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "135\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "136\n");
    fflush(_coverage_fout);
    }
    if (c == 10) {
      {
      fprintf(_coverage_fout, "137\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "138\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "139\n");
    fflush(_coverage_fout);
    }
    tmp = w;
    {
    fprintf(_coverage_fout, "140\n");
    fflush(_coverage_fout);
    }
    w ++;
    {
    fprintf(_coverage_fout, "141\n");
    fflush(_coverage_fout);
    }
    *tmp = (char )c;
  }
  {
  fprintf(_coverage_fout, "142\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "143\n");
    fflush(_coverage_fout);
    }
    if (c != 10) {
      {
      fprintf(_coverage_fout, "144\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "145\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "146\n");
    fflush(_coverage_fout);
    }
    c = _IO_getc(dfile);
  }
  {
  fprintf(_coverage_fout, "147\n");
  fflush(_coverage_fout);
  }
  *w = (char)0;
  {
  fprintf(_coverage_fout, "148\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
int canon(char *old , char *new ) 
{ 
  register int c ;
  register int avail ;
  char *tmp ;
  unsigned short const   **tmp___0 ;
  unsigned short const   **tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/look-svr/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "149\n");
  fflush(_coverage_fout);
  }
  avail = 256;
  {
  fprintf(_coverage_fout, "150\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "151\n");
    fflush(_coverage_fout);
    }
    tmp = old;
    {
    fprintf(_coverage_fout, "152\n");
    fflush(_coverage_fout);
    }
    old ++;
    {
    fprintf(_coverage_fout, "153\n");
    fflush(_coverage_fout);
    }
    c = (int )*tmp;
    {
    fprintf(_coverage_fout, "154\n");
    fflush(_coverage_fout);
    }
    *new = (char )c;
    {
    fprintf(_coverage_fout, "155\n");
    fflush(_coverage_fout);
    }
    if (c == 0) {
      {
      fprintf(_coverage_fout, "156\n");
      fflush(_coverage_fout);
      }
      *new = (char)0;
      {
      fprintf(_coverage_fout, "157\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "158\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "159\n");
    fflush(_coverage_fout);
    }
    if (dict) {
      {
      fprintf(_coverage_fout, "160\n");
      fflush(_coverage_fout);
      }
      tmp___0 = __ctype_b_loc();
      {
      fprintf(_coverage_fout, "161\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(*tmp___0 + c) & 8) {
        {
        fprintf(_coverage_fout, "162\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "163\n");
        fflush(_coverage_fout);
        }
        goto __Cont;
      }
    } else {
      {
      fprintf(_coverage_fout, "164\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "165\n");
    fflush(_coverage_fout);
    }
    if (fold) {
      {
      fprintf(_coverage_fout, "166\n");
      fflush(_coverage_fout);
      }
      tmp___1 = __ctype_b_loc();
      {
      fprintf(_coverage_fout, "167\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(*tmp___1 + c) & 256) {
        {
        fprintf(_coverage_fout, "168\n");
        fflush(_coverage_fout);
        }
        *new = (char )((int )*new + 32);
      } else {
        {
        fprintf(_coverage_fout, "169\n");
        fflush(_coverage_fout);
        }

      }
    } else {
      {
      fprintf(_coverage_fout, "170\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "171\n");
    fflush(_coverage_fout);
    }
    new ++;
    {
    fprintf(_coverage_fout, "172\n");
    fflush(_coverage_fout);
    }
    avail --;
    {
    fprintf(_coverage_fout, "173\n");
    fflush(_coverage_fout);
    }
    if (avail <= 0) {
      {
      fprintf(_coverage_fout, "174\n");
      fflush(_coverage_fout);
      }
      *new = (char)0;
      {
      fprintf(_coverage_fout, "175\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "176\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "177\n");
    fflush(_coverage_fout);
    }
    __Cont: /* CIL Label */ ;
  }
  {
  fprintf(_coverage_fout, "178\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
