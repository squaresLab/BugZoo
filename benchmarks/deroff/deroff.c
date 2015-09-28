# 1 "deroff-original.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "deroff-original.c"

static char *sccsid = "@(#)deroff.c	7.1	ULTRIX	7/23/92";
# 42 "deroff-original.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 328 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 324 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 325 "/usr/include/sys/cdefs.h" 2 3 4
# 329 "/usr/include/features.h" 2 3 4
# 351 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 352 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 214 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 32 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 134 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 135 "/usr/include/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef long int __swblk_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;

__extension__ typedef int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 37 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 14 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 326 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef long int wchar_t;
# 355 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 15 "/usr/include/_G_config.h" 2 3 4
# 24 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4

# 1 "/usr/include/bits/wchar.h" 1 3 4
# 51 "/usr/include/wchar.h" 2 3 4
# 76 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 44 "/usr/include/_G_config.h" 3 4
# 1 "/usr/include/gconv.h" 1 3 4
# 28 "/usr/include/gconv.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 48 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 49 "/usr/include/wchar.h" 2 3 4
# 29 "/usr/include/gconv.h" 2 3 4


# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 32 "/usr/include/gconv.h" 2 3 4





enum
{
  __GCONV_OK = 0,
  __GCONV_NOCONV,
  __GCONV_NODB,
  __GCONV_NOMEM,

  __GCONV_EMPTY_INPUT,
  __GCONV_FULL_OUTPUT,
  __GCONV_ILLEGAL_INPUT,
  __GCONV_INCOMPLETE_INPUT,

  __GCONV_ILLEGAL_DESCRIPTOR,
  __GCONV_INTERNAL_ERROR
};



enum
{
  __GCONV_IS_LAST = 0x0001,
  __GCONV_IGNORE_ERRORS = 0x0002
};



struct __gconv_step;
struct __gconv_step_data;
struct __gconv_loaded_object;
struct __gconv_trans_data;



typedef int (*__gconv_fct) (struct __gconv_step *, struct __gconv_step_data *,
       __const unsigned char **, __const unsigned char *,
       unsigned char **, size_t *, int, int);


typedef wint_t (*__gconv_btowc_fct) (struct __gconv_step *, unsigned char);


typedef int (*__gconv_init_fct) (struct __gconv_step *);
typedef void (*__gconv_end_fct) (struct __gconv_step *);



typedef int (*__gconv_trans_fct) (struct __gconv_step *,
      struct __gconv_step_data *, void *,
      __const unsigned char *,
      __const unsigned char **,
      __const unsigned char *, unsigned char **,
      size_t *);


typedef int (*__gconv_trans_context_fct) (void *, __const unsigned char *,
       __const unsigned char *,
       unsigned char *, unsigned char *);


typedef int (*__gconv_trans_query_fct) (__const char *, __const char ***,
     size_t *);


typedef int (*__gconv_trans_init_fct) (void **, const char *);
typedef void (*__gconv_trans_end_fct) (void *);

struct __gconv_trans_data
{

  __gconv_trans_fct __trans_fct;
  __gconv_trans_context_fct __trans_context_fct;
  __gconv_trans_end_fct __trans_end_fct;
  void *__data;
  struct __gconv_trans_data *__next;
};



struct __gconv_step
{
  struct __gconv_loaded_object *__shlib_handle;
  __const char *__modname;

  int __counter;

  char *__from_name;
  char *__to_name;

  __gconv_fct __fct;
  __gconv_btowc_fct __btowc_fct;
  __gconv_init_fct __init_fct;
  __gconv_end_fct __end_fct;



  int __min_needed_from;
  int __max_needed_from;
  int __min_needed_to;
  int __max_needed_to;


  int __stateful;

  void *__data;
};



struct __gconv_step_data
{
  unsigned char *__outbuf;
  unsigned char *__outbufend;



  int __flags;



  int __invocation_counter;



  int __internal_use;

  __mbstate_t *__statep;
  __mbstate_t __state;



  struct __gconv_trans_data *__trans;
};



typedef struct __gconv_info
{
  size_t __nsteps;
  struct __gconv_step *__steps;
  __extension__ struct __gconv_step_data __data [];
} *__gconv_t;
# 45 "/usr/include/_G_config.h" 2 3 4
typedef union
{
  struct __gconv_info __cd;
  struct
  {
    struct __gconv_info __cd;
    struct __gconv_step_data __data;
  } __combined;
} _G_iconv_t;

typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h" 1 3 4
# 43 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 167 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 177 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 200 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 268 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 316 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 325 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 361 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 413 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern wint_t __wunderflow (_IO_FILE *);
extern wint_t __wuflow (_IO_FILE *);
extern wint_t __woverflow (_IO_FILE *, wint_t);
# 451 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 481 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));
# 76 "/usr/include/stdio.h" 2 3 4
# 89 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;




# 141 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 142 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));














extern FILE *tmpfile (void) ;
# 188 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 206 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 231 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 245 "/usr/include/stdio.h" 3 4






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 274 "/usr/include/stdio.h" 3 4

# 285 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
# 306 "/usr/include/stdio.h" 3 4



extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 400 "/usr/include/stdio.h" 3 4





extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));

# 442 "/usr/include/stdio.h" 3 4





extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 466 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 477 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 510 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 591 "/usr/include/stdio.h" 3 4





extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;

# 644 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 680 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 699 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 722 "/usr/include/stdio.h" 3 4

# 731 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];
# 761 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 780 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 820 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 850 "/usr/include/stdio.h" 3 4

# 43 "deroff-original.c" 2
# 96 "deroff-original.c"
int wordflag;
int msflag;
int mac;
int disp;
int parag;
int inmacro;
int intable;
int keepblock;

char chars[128];

char line[512];
char *lp;

int c;
int pc;
int ldelim;
int rdelim;


int argc;
char **argv;

char fname[50];
FILE *files[15];
FILE **filesp;
FILE *infile;
FILE *opn();
# 143 "deroff-original.c"
main(ac, av)
int ac;
char **av;
{
 register int i;
 int errflg = 0;
 register optchar;
 FILE *opn();
 int kflag = 0;
 char *p;

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

 for(argc = ac - 1, argv = av + 1;
     ( (argc > 0)
      && (argv[0][0] == '-')
      && (argv[0][1] != '\0') );
     --argc, ++argv
 ){
  for(p = argv[0]+1; *p; ++p) {
   switch(*p) {
   case 'p':
    parag=1;
    break;
   case 'k':
    kflag = 1;
    break;
   case 'w':
    wordflag = 1;
    kflag = 1;
    break;
   case 'm':
    msflag = 1;
    keepblock = 0;
    switch(p[1]){
    case 'm': mac = 1; p++; break;
    case 's': mac = 0; p++; break;
    case 'e': mac = 2; p++; break;
    case 'a': mac = 3; p++; break;
    case 'l': disp = 1; p++; break;
    default: errflg++; break;
    }
    break;
   default:
    errflg++;
   }
  }
 }

 if (kflag)
  keepblock = 1;
 if (errflg)
  fatal("usage: deroff [ -w ] [ -k] [ -m (a e m s l) ] [ file ] ... \n",
   (char *) ((void *)0));





 if (argc == 0){
  infile = stdin;
 } else {
  infile = opn(argv[0]);
  --argc;
  ++argv;
 }


 files[0] = infile;
 filesp = &files[0];

 for(i='a'; i<='z' ; ++i)
  chars[i] = 4;
 for(i='A'; i<='Z'; ++i)
  chars[i] = 4;
 for(i='0'; i<='9'; ++i)
  chars[i] = 3;
 chars['\''] = 1;
 chars['&'] = 1;
 chars['.'] = 2;
 chars[','] = 2;
 chars[';'] = 2;
 chars['?'] = 2;
 chars[':'] = 2;
 work();
}
char *calloc();

skeqn()
{
 while((c = _IO_getc (infile)) != rdelim)
  if(c == (-1))
   c = eof();
  else if(c == '"')
   while( (c = _IO_getc (infile)) != '"')
    if(c == (-1))
     c = eof();
    else if(c == '\\')
     if((c = _IO_getc (infile)) == (-1))
      c = eof();
 if(msflag)return(c='x');
 return(c = ' ');
}

FILE *opn(p)
register char *p;
{
 FILE *fd;

 if( (fd = fopen(p, "r")) == ((void *)0)) {
  fprintf(stderr, "Deroff: ");
  perror(p);
  exit(1);
 }

 return(fd);
}

eof()
{
 if(infile != stdin)
  fclose(infile);
 if(filesp > files)
  infile = *--filesp;
 else if (argc > 0) {
  infile = opn(argv[0]);
  --argc;
  ++argv;
 } else
  exit(0);
 return(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ));
}

getfname()
{
 register char *p;
 struct chain {
  struct chain *nextp;
  char *datap;
 } *chainblock;
 register struct chain *q;
 static struct chain *namechain = ((void *)0);
 char *copys();

 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == ' ') ;

 for(p = fname ; (*p=c)!= '\n' && c!=' ' && c!='\t' && c!='\\' ; ++p)
  ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) );
 *p = '\0';
 while(c != '\n')
  ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) );



 for(q = namechain ; q; q = q->nextp)
  if( ! strcmp(fname, q->datap))
  {
   fname[0] = '\0';
   return;
  }

 q = (struct chain *) calloc(1, sizeof(*chainblock));
 q->nextp = namechain;
 q->datap = copys(fname);
 namechain = q;
}

fatal(s,p)
char *s, *p;
{
 fprintf(stderr, "Deroff: ");
 fprintf(stderr, s, p);
 exit(1);
}


textline(str, const_val)
 char *str;
 int const_val;
{
 if (wordflag) {
  msputwords(0);
  return;
 }
 puts(str);
}

work()
{
 for( ;; )
 {
  ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) );



  if(c == '.' || c == '\'')
   comline();
  else
   regline(textline, 2);
 }
}

regline(pfunc, const_val)
 int (*pfunc)();
 int const_val;
{
 line[0] = c;
 lp = line;
 for( ; ; )
 {
  if(c == '\\') {
   *lp = ' ';
   backsl();
  }
  if(c == '\n')
   break;
  if(intable && c=='T') {
   *++lp = ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) );
   if(c=='{' || c=='}') {
    lp[-1] = ' ';
    *lp = ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) );
   }
  } else {
   *++lp = ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) );
  }
 }

 *lp = '\0';

 if(line[0] != '\0')
  (*pfunc)(line, const_val);
}

macro()
{
 if(msflag){
  do {
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
  } while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) )!='.' || ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) )!='.' || ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) )=='.');
  if(c != '\n')while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
  return;
 }
 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
 inmacro = 1;
}

tbl()
{
 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '.');
 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
 intable = 1;
}
stbl()
{
 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '.');
 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n'); while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n'); pc=c; while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '.' || pc != '\n' || ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) > 'Z')pc=c;
 if(c != 'T' || ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != 'E'){
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
  pc=c;
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '.' || pc != '\n' || ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != 'T' || ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != 'E')pc=c;
 }
}

eqn()
{
 register int c1, c2;
 register int dflg;
 char last;

 last=0;
 dflg = 1;
 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');

 for( ;;)
 {
  if(( (c=_IO_getc (infile)) == (-1) ? eof() : c) == '.' || c == '\'')
  {
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : c)==' ' || c=='\t')
    ;
   if(c=='E' && ( (c=_IO_getc (infile)) == (-1) ? eof() : c)=='N')
   {
    while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
    if(msflag && dflg){
     putchar('x');
     putchar(' ');
     if(last){
      putchar(last);
      putchar('\n');
     }
    }
    return;
   }
  }
  else if(c == 'd')
  {
   if(( (c=_IO_getc (infile)) == (-1) ? eof() : c)=='e' && ( (c=_IO_getc (infile)) == (-1) ? eof() : c)=='l')
    if( ( (c=_IO_getc (infile)) == (-1) ? eof() : c)=='i' && ( (c=_IO_getc (infile)) == (-1) ? eof() : c)=='m')
    {
     while(( (c=_IO_getc (infile)) == (-1) ? eof() : c) == ' ');
     if((c1=c)=='\n' || (c2=( (c=_IO_getc (infile)) == (-1) ? eof() : c))=='\n'
         || (c1=='o' && c2=='f' && ( (c=_IO_getc (infile)) == (-1) ? eof() : c)=='f') )
     {
      ldelim = -2;
      rdelim = -2;
     }
     else {
      ldelim = c1;
      rdelim = c2;
     }
    }
   dflg = 0;
  }

  if(c != '\n') while(( (c=_IO_getc (infile)) == (-1) ? eof() : c) != '\n'){
   if(chars[c] == 2)last = c;
   else if(c != ' ')last = 0;
  }
 }
}

backsl()
{
 int bdelim;

sw:
 switch(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ))
 {
 case '"':
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
  return;
 case 's':
  if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == '\\') backsl();
  else {
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) )>='0' && c<='9') ;
   ungetc(c,infile);
   c = '0';
  }
  --lp;
  return;

 case 'f':
 case 'n':
 case '*':
  if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '(')
   return;

 case '(':
  if(msflag){
   if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == 'e'){
    if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == 'm'){
     *lp = '-';
     return;
    }
   }
   else if(c != '\n')( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) );
   return;
  }
  if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n') ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) );
  return;

 case '$':
  ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) );
  return;

 case 'b':
 case 'x':
 case 'v':
 case 'h':
 case 'w':
 case 'o':
 case 'l':
 case 'L':
  if( (bdelim=( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) )) == '\n')
   return;
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) )!='\n' && c!=bdelim)
   if(c == '\\') backsl();
  return;

 case '\\':
  if(inmacro)
   goto sw;
 default:
  return;
 }
}

char *copys(s)
register char *s;
{
 register char *t, *t0;

 if( (t0 = t = calloc( (unsigned)(strlen(s)+1), sizeof(*t) ) ) == ((void *)0))
  fatal("Cannot allocate memory", (char *) ((void *)0));

 while( *t++ = *s++ )
  ;
 return(t0);
}

sce()
{
 register char *ap;
 register int n, i;
 char a[10];
 for(ap=a;( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n';ap++){
  *ap = c;
  if(ap == &a[9]){
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
   ap=a;
   break;
  }
 }
 if(ap != a)n = atoi(a);
 else n = 1;
 for(i=0;i<n;){
  if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == '.'){
   if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == 'c'){
    if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == 'e'){
     while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == ' ');
     if(c == '0'){
      while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
      break;
     }
     else while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
    }
    else while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
   }
   else if(c == 'P' || ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == 'P'){
    if(c != '\n')while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
    break;
   }
   else if(c != '\n')while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
  }
  else {
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
   i++;
  }
 }
}

refer(c1)
{
 register int c2;
 if(c1 != '\n')
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
 while(1){
  if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '.')
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
  else {
   if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != ']')
    while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
   else {
    while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n')
     c2=c;
    if(chars[c2] == 2)putchar(c2);
    return;
   }
  }
 }
}

inpic()
{
 register int c1;
 register char *p1;
 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
 p1 = line;
 c = '\n';
 while(1){
  c1 = c;
  if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == '.' && c1 == '\n'){
   if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != 'P'){
    if(c == '\n')continue;
    else { while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n'); c='\n'; continue;}
   }
   if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != 'E'){
    if(c == '\n')continue;
    else { while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n'); c='\n';continue; }
   }
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
   return;
  }
  else if(c == '\"'){
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\"'){
    if(c == '\\'){
     if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == '\"')continue;
     ungetc(c,infile);
     backsl();
    }
    else *p1++ = c;
   }
   *p1++ = ' ';
  }
  else if(c == '\n' && p1 != line){
   *p1 = '\0';
   if(wordflag)msputwords(0);
   else {
    puts(line);
    putchar('\n');
   }
   p1 = line;
  }
 }
}
# 674 "deroff-original.c"
typedef int pacmac;
int argconcat = 0;




struct mactab{
 int condition;
 pacmac macname;
 int (*func)();
};
extern struct mactab troffmactab[];
extern struct mactab ppmactab[];
extern struct mactab msmactab[];
extern struct mactab mmmactab[];
extern struct mactab memactab[];
extern struct mactab manmactab[];
# 699 "deroff-original.c"
msputmac(s, const_val)
 register char *s;
 int const_val;
{
 register char *t;
 register found;
 int last;
 found = 0;

 if (wordflag) {
  msputwords(1);
  return;
 }
 while(*s)
 {
  while(*s==' ' || *s=='\t')
   putchar(*s++);
  for(t = s ; *t!=' ' && *t!='\t' && *t!='\0' ; ++t)
   ;
  if(*s == '\"')s++;
  if(t>s+const_val && chars[ s[0] ]==4 && chars[ s[1] ]==4){
   while(s < t)
    if(*s == '\"')s++;
    else
     putchar(*s++);
   last = *(t-1);
   found++;
  }
  else if(found && chars[ s[0] ] == 2 && s[1] == '\0')
   putchar(*s++);
  else{
   last = *(t-1);
   s = t;
  }
 }
 putchar('\n');
 if(msflag && chars[last] == 2){
  putchar(last);
  putchar('\n');
 }
}



msputwords(macline)
 int macline;
{
 register char *p, *p1;
 int i, nlet;

 for(p1 = line ; ;) {



  while( chars[*p1] < 3)
   if(*p1++ == '\0') return;
  nlet = 0;
  for(p = p1 ; (i=chars[*p]) != 0 ; ++p)
   if(i == 4) ++nlet;

  if ( (macline && nlet > 1)
      || (!macline && nlet > 2
     && chars[p1[0]] == 4
     && chars[p1[1]] == 4) )
  {



   while( (p[-1]=='\'')
        || (p[-1]=='&')
        || (chars[p[-1]] == 2) ){
    --p;
   }
   while(p1 < p)
    putchar(*p1++);
   putchar('\n');
  } else {
   p1 = p;
  }
 }
}






meputmac(cp, const_val)
 register char *cp;
  int const_val;
{
 register char *np;
  int found;
  int argno;
  int last;
  int inquote;

 if (wordflag) {
  meputwords(1);
  return;
 }
 for (argno = 0; *cp; argno++){
  while(*cp == ' ' || *cp == '\t') { cp++; };
  inquote = (*cp == '"');
  if (inquote)
   cp++;
  for (np = cp; *np; np++){
   switch(*np){
   case '\n':
   case '\0': break;
   case '\t':
   case ' ': if (inquote) {
      continue;
     } else {
      goto endarg;
     }
   case '"': if(inquote && np[1] == '"'){
      strcpy(np, np + 1);
      np++;
      continue;
     } else {
      *np = ' ';
      goto endarg;
     }
   default: continue;
   }
  }
  endarg: ;




  if ((argconcat == 0) || (argconcat != argno)) {
   putchar(' ');
  }
# 850 "deroff-original.c"
  if ( ( (np - cp) > const_val)
      && ( inquote
           || (chars[cp[0]] == 4)) ){
   for (cp = cp; cp < np; cp++){
    putchar(*cp);
   }
   last = np[-1];
   found++;
  } else
  if(found && (np - cp == 1) && chars[*cp] == 2){
   putchar(*cp);
  } else {
   last = np[-1];
  }
  cp = np;
 }
 if(msflag && chars[last] == 2)
  putchar(last);
 putchar('\n');
}



meputwords(macline)
 int macline;
{
 msputwords(macline);
}
# 898 "deroff-original.c"
noblock(a1, a2)
 char a1, a2;
{
 register int c1,c2;
 register int eqnf;
 int lct;
 lct = 0;
 eqnf = 1;
 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
 while(1){
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '.')
   if(c == '\n')
    continue;
   else
    while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
  if((c1=( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) )) == '\n')
   continue;
  if((c2=( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) )) == '\n')
   continue;
  if(c1==a1 && c2 == a2){
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
   if(lct != 0){
    lct--;
    continue;
   }
   if(eqnf)
    putchar('.');
   putchar('\n');
   return;
  } else if(a1 == 'L' && c2 == 'L'){
   lct++;
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
  }



  else if(c1 == 'E' && c2 == 'Q'){
   if ( (mac == 2 && a1 == ')')
       || (mac != 2 && a1 == 'D') ) {
    eqn();
    eqnf=0;
   }
  }




  else if(a1 == 'f') {
   if ( (mac == 2 && (c2 == 'h' || c2 == 'p'))
        ||(mac != 2 && (c1 == 'P' || c2 == 'P')) ) {
    while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
    return;
   }
  } else {
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
  }
 }
}

EQ()
{
 eqn();
 return(0);
}
domacro()
{
 macro();
 return(0);
}
PS()
{
 if (!msflag) {
  inpic();
 } else {
  noblock('P', 'E');
 }
 return(0);
}

skip()
{
 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
 return(0);
}

intbl()
{
 if(msflag){
  stbl();
 }
 else tbl();
 return(0);
}

outtbl(){ intable = 0; }

so()
{
 getfname();
 if( fname[0] )
  infile = *++filesp = opn( fname );
 return(0);
}
nx()
{
 getfname();
 if(fname[0] == '\0') exit(0);
 if(infile != stdin)
  fclose(infile);
 infile = *filesp = opn(fname);
 return(0);
}
skiptocom(){ while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n'); while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n'); pc=c; while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '.' || pc != '\n' || ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) > 'Z')pc=c; return(1); }

PP(c12)
 pacmac c12;
{
 int c1, c2;

 (((c1)=((c12)>>8)&0xFF),((c2) =(c12)&0xFF));
 printf(".%c%c",c1,c2);
 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n')putchar(c);
 putchar('\n');
 return(0);
}
AU()
{
 if(mac==1) {
  return(0);
 } else {
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n'); while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n'); pc=c; while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '.' || pc != '\n' || ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) > 'Z')pc=c;
  return(1);
 }
}

SH(c12)
 pacmac c12;
{
 int c1, c2;

 (((c1)=((c12)>>8)&0xFF),((c2) =(c12)&0xFF));

 if(parag){
  printf(".%c%c",c1,c2);
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n')putchar(c);
  putchar(c);
  putchar('!');
  while(1){
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n')putchar(c);
   putchar('\n');
   if(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == '.')
    return(2);
   putchar('!');
   putchar(c);
  }

 } else {
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n'); while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n'); pc=c; while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '.' || pc != '\n' || ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) > 'Z')pc=c;
  return(1);
 }
}

UX()
{
 if(wordflag)
  printf("UNIX\n");
 else
  printf("UNIX ");
 return(0);
}

MMHU(c12)
 pacmac c12;
{
 int c1, c2;

 (((c1)=((c12)>>8)&0xFF),((c2) =(c12)&0xFF));
 if(parag){
  printf(".%c%c",c1,c2);
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n')putchar(c);
  putchar('\n');
 } else {
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
 }
 return(0);
}

mesnblock(c12)
 pacmac c12;
{
 int c1, c2;

 (((c1)=((c12)>>8)&0xFF),((c2) =(c12)&0xFF));
 noblock(')',c2);
 return(0);
}
mssnblock(c12)
 pacmac c12;
{
 int c1, c2;

 (((c1)=((c12)>>8)&0xFF),((c2) =(c12)&0xFF));
 noblock(c1,'E');
 return(0);
}
nf()
{
 noblock('f','i');
 return(0);
}

ce()
{
 sce();
 return(0);
}

meip(c12)
 pacmac c12;
{
 if(parag)
  mepp(c12);
 else if (wordflag)
  regline(meputmac, 1);
 else {
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
 }
 return(0);
}



mepp(c12)
 pacmac c12;
{
 PP(c12);
 return(0);
}



mesh(c12)
 pacmac c12;
{
 if (parag)
  mepp(c12);
 else if (wordflag)
  defcomline(c12);
 else {
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
 }
 return(0);
}



mefont(c12)
 pacmac c12;
{
 argconcat = 1;
 defcomline(c12);
 argconcat = 0;
 return(0);
}
manfont(c12)
 pacmac c12;
{
 return(mefont(c12));
}
manpp(c12)
 pacmac c12;
{
 return(mepp(c12));
}

defcomline(c12)
 pacmac c12;
{
 int c1, c2;

 (((c1)=((c12)>>8)&0xFF),((c2) =(c12)&0xFF));
 if(msflag && mac==1 && c2=='L'){
  if(disp || c1 == 'R') {
   noblock('L','E');
  } else {
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
   putchar('.');
  }
 }
 else if(c1=='.' && c2=='.'){
  if(msflag){
   while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) != '\n');
   return;
  }
  while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) ) == '.')
           ;
 }
 ++inmacro;



 switch(mac){
 default:
 case 1:
 case 0:
  if(c1 <= 'Z' && msflag)
   regline(msputmac, 1);
  else
   regline(msputmac, 2);
  break;
 case 2:
  regline(meputmac, 1);
  break;
 }
 --inmacro;
}

comline()
{
 register int c1;
 register int c2;
  pacmac c12;
 register int mid;
  int lb, ub;
  int hit;
 static int tabsize = 0;
 static struct mactab *mactab = (struct mactab *)0;
 register struct mactab *mp;

 if (mactab == 0){
   buildtab(&mactab, &tabsize);
 }
com:
 while(( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) )==' ' || c=='\t')
  ;
comx:
 if( (c1=c) == '\n')
  return;
 c2 = ( (c=_IO_getc (infile)) == (-1) ? eof() : ((c==ldelim)&&(filesp==files) ? skeqn() : c) );
 if(c1=='.' && c2 !='.')
  inmacro = 0;
 if(msflag && c1 == '['){
  refer(c2);
  return;
 }
 if(parag && mac==1 && c1 == 'P' && c2 == '\n'){
  printf(".P\n");
  return;
 }
 if(c2 == '\n')
  return;



 if (mac == 2 && (c2 == ' ' || c2 == '\t') )
  c2 = ' ';
 c12 = ((((c1) & 0xFF) << 8) | ((c2) & 0xFF));



 lb = 0;
 ub = tabsize - 1;
 while(lb <= ub){
  mid = (ub + lb) / 2;
  mp = &mactab[mid];
  if (mp->macname < c12)
   lb = mid + 1;
  else if (mp->macname > c12)
   ub = mid - 1;
  else {
   hit = 1;



   switch(mp->condition){
   case 0: hit = 1; break;
   case 1: hit = (filesp == files); break;
   case 2: hit = !inmacro; break;
   case 3: hit = inmacro; break;
   case 4: hit = parag; break;
   case 6: hit = !keepblock; break;
   default: hit = 0;
   }
   if (hit) {



    switch( (*(mp->func))(c12) ) {
    default: return;
    case 1: goto comx;
    case 2: goto com;
    }
   }



   break;
  }
 }
 defcomline(c12);
}

int macsort(p1, p2)
 struct mactab *p1, *p2;
{
 return(p1->macname - p2->macname);
}

int sizetab(mp)
 register struct mactab *mp;
{
 register int i;
 i = 0;
 if (mp){
  for (; mp->macname; mp++, i++)
            ;
 }
 return(i);
}

struct mactab *macfill(dst, src)
 register struct mactab *dst;
 register struct mactab *src;
{
 if (src) {
  while(src->macname){
   *dst++ = *src++;
  }
 }
 return(dst);
}

buildtab(r_back, r_size)
 struct mactab **r_back;
 int *r_size;
{
 int size;

 struct mactab *p, *p1, *p2;
 struct mactab *back;

 size = sizetab(troffmactab);
 size += sizetab(ppmactab);
 p1 = p2 = (struct mactab *)0;
 if (msflag){
  switch(mac){
  case 2: p1 = memactab; break;
  case 1: p1 = msmactab;
    p2 = mmmactab; break;

  case 0: p1 = msmactab; break;
  case 3: p1 = manmactab; break;
  default: break;
  }
 }
 size += sizetab(p1);
 size += sizetab(p2);
 back = (struct mactab *)calloc(size+2, sizeof(struct mactab));

 p = macfill(back, troffmactab);
 p = macfill(p, ppmactab);
 p = macfill(p, p1);
 p = macfill(p, p2);

 qsort(back, size, sizeof(struct mactab), macsort);
 *r_size = size;
 *r_back = back;
}




struct mactab troffmactab[] = {
 {0, (((('\\') & 0xFF) << 8) | (('"') & 0xFF)), skip},
 {2, (((('d') & 0xFF) << 8) | (('e') & 0xFF)), domacro},
 {2, (((('i') & 0xFF) << 8) | (('g') & 0xFF)), domacro},
 {2, (((('a') & 0xFF) << 8) | (('m') & 0xFF)), domacro},
 {6, (((('n') & 0xFF) << 8) | (('f') & 0xFF)), nf},
 {6, (((('c') & 0xFF) << 8) | (('e') & 0xFF)), ce},

 {0, (((('s') & 0xFF) << 8) | (('o') & 0xFF)), so},
 {0, (((('n') & 0xFF) << 8) | (('x') & 0xFF)), nx},

 {0, (((('t') & 0xFF) << 8) | (('m') & 0xFF)), skip},
 {0, (((('h') & 0xFF) << 8) | (('w') & 0xFF)), skip},
 {0, ((((0) & 0xFF) << 8) | ((0) & 0xFF)), 0}
};



struct mactab ppmactab[] = {
 {1, (((('E') & 0xFF) << 8) | (('Q') & 0xFF)), EQ},
 {1, (((('T') & 0xFF) << 8) | (('S') & 0xFF)), intbl},
 {1, (((('T') & 0xFF) << 8) | (('C') & 0xFF)), intbl},
 {1, (((('T') & 0xFF) << 8) | (('&') & 0xFF)), intbl},
 {0, (((('T') & 0xFF) << 8) | (('E') & 0xFF)), outtbl},
 {0, (((('P') & 0xFF) << 8) | (('S') & 0xFF)), PS},
 {0, ((((0) & 0xFF) << 8) | ((0) & 0xFF)), 0}
};



struct mactab msmactab[] = {
 {0, (((('T') & 0xFF) << 8) | (('L') & 0xFF)), skiptocom},
 {0, (((('F') & 0xFF) << 8) | (('S') & 0xFF)), skiptocom},
 {0, (((('O') & 0xFF) << 8) | (('K') & 0xFF)), skiptocom},

 {0, (((('N') & 0xFF) << 8) | (('R') & 0xFF)), skip},
 {0, (((('N') & 0xFF) << 8) | (('D') & 0xFF)), skip},

 {4, (((('P') & 0xFF) << 8) | (('P') & 0xFF)), PP},
 {4, (((('I') & 0xFF) << 8) | (('P') & 0xFF)), PP},
 {4, (((('L') & 0xFF) << 8) | (('P') & 0xFF)), PP},

 {0, (((('A') & 0xFF) << 8) | (('U') & 0xFF)), AU},
 {0, (((('A') & 0xFF) << 8) | (('I') & 0xFF)), AU},

 {0, (((('S') & 0xFF) << 8) | (('H') & 0xFF)), SH},
 {0, (((('S') & 0xFF) << 8) | (('N') & 0xFF)), SH},
 {0, (((('U') & 0xFF) << 8) | (('X') & 0xFF)), UX},

 {6, (((('D') & 0xFF) << 8) | (('S') & 0xFF)), mssnblock},
 {6, (((('K') & 0xFF) << 8) | (('S') & 0xFF)), mssnblock},
 {6, (((('K') & 0xFF) << 8) | (('F') & 0xFF)), mssnblock},
 {0, ((((0) & 0xFF) << 8) | ((0) & 0xFF)), 0}
};

struct mactab mmmactab[] = {
 {0, (((('H') & 0xFF) << 8) | ((' ') & 0xFF)), MMHU},
 {0, (((('H') & 0xFF) << 8) | (('U') & 0xFF)), MMHU},
 {4, (((('P') & 0xFF) << 8) | ((' ') & 0xFF)), PP},
 {6, (((('N') & 0xFF) << 8) | (('S') & 0xFF)), mssnblock},
 {0, ((((0) & 0xFF) << 8) | ((0) & 0xFF)), 0}
};

struct mactab memactab[] = {
 {4, (((('p') & 0xFF) << 8) | (('p') & 0xFF)), mepp},
 {4, (((('l') & 0xFF) << 8) | (('p') & 0xFF)), mepp},
 {4, (((('n') & 0xFF) << 8) | (('p') & 0xFF)), mepp},
 {0, (((('i') & 0xFF) << 8) | (('p') & 0xFF)), meip},

 {0, (((('s') & 0xFF) << 8) | (('h') & 0xFF)), mesh},
 {0, (((('u') & 0xFF) << 8) | (('h') & 0xFF)), mesh},

 {6, (((('(') & 0xFF) << 8) | (('l') & 0xFF)), mesnblock},
 {6, (((('(') & 0xFF) << 8) | (('q') & 0xFF)), mesnblock},
 {6, (((('(') & 0xFF) << 8) | (('b') & 0xFF)), mesnblock},
 {6, (((('(') & 0xFF) << 8) | (('z') & 0xFF)), mesnblock},
 {6, (((('(') & 0xFF) << 8) | (('c') & 0xFF)), mesnblock},

 {6, (((('(') & 0xFF) << 8) | (('d') & 0xFF)), mesnblock},
 {6, (((('(') & 0xFF) << 8) | (('f') & 0xFF)), mesnblock},
 {6, (((('(') & 0xFF) << 8) | (('x') & 0xFF)), mesnblock},

 {0, (((('r') & 0xFF) << 8) | ((' ') & 0xFF)), mefont},
 {0, (((('i') & 0xFF) << 8) | ((' ') & 0xFF)), mefont},
 {0, (((('b') & 0xFF) << 8) | ((' ') & 0xFF)), mefont},
 {0, (((('u') & 0xFF) << 8) | ((' ') & 0xFF)), mefont},
 {0, (((('q') & 0xFF) << 8) | ((' ') & 0xFF)), mefont},
 {0, (((('r') & 0xFF) << 8) | (('b') & 0xFF)), mefont},
 {0, (((('b') & 0xFF) << 8) | (('i') & 0xFF)), mefont},
 {0, (((('b') & 0xFF) << 8) | (('x') & 0xFF)), mefont},
 {0, ((((0) & 0xFF) << 8) | ((0) & 0xFF)), 0}
};


struct mactab manmactab[] = {
 {4, (((('B') & 0xFF) << 8) | (('I') & 0xFF)), manfont},
 {4, (((('B') & 0xFF) << 8) | (('R') & 0xFF)), manfont},
 {4, (((('I') & 0xFF) << 8) | (('B') & 0xFF)), manfont},
 {4, (((('I') & 0xFF) << 8) | (('R') & 0xFF)), manfont},
 {4, (((('R') & 0xFF) << 8) | (('B') & 0xFF)), manfont},
 {4, (((('R') & 0xFF) << 8) | (('I') & 0xFF)), manfont},

 {4, (((('P') & 0xFF) << 8) | (('P') & 0xFF)), manpp},
 {4, (((('L') & 0xFF) << 8) | (('P') & 0xFF)), manpp},
 {4, (((('H') & 0xFF) << 8) | (('P') & 0xFF)), manpp},
 {0, ((((0) & 0xFF) << 8) | ((0) & 0xFF)), 0}
};
