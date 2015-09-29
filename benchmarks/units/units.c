# 1 "units.c"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "units.c"
# 11 "units.c"
#pragma ident "%Z%%M%	%I%	%E% SMI"

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

# 14 "units.c" 2
# 1 "/usr/include/locale.h" 1 3 4
# 29 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/bits/locale.h" 1 3 4
# 27 "/usr/include/bits/locale.h" 3 4
enum
{
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
};
# 31 "/usr/include/locale.h" 2 3 4


# 51 "/usr/include/locale.h" 3 4



struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;
# 114 "/usr/include/locale.h" 3 4
  char __int_p_cs_precedes;
  char __int_p_sep_by_space;
  char __int_n_cs_precedes;
  char __int_n_sep_by_space;
  char __int_p_sign_posn;
  char __int_n_sign_posn;

};



extern char *setlocale (int __category, __const char *__locale) __attribute__ ((__nothrow__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__));


# 208 "/usr/include/locale.h" 3 4

# 15 "units.c" 2



extern int *signal();
char *dfile = "unittab";
char *unames[10];
double getflt();
int fperr();
struct table *hash();
struct unit
{
 double factor;
 char dim[10];
};

struct table
{
 double factor;
 char dim[10];
 char *name;
} table[1009];
char names[1009*10];
struct prefix
{
 double factor;
 char *pname;
} prefix[] =
{
 1e-21, "zepto",
 1e-24, "yocto",
 1e-18, "atto",
 1e-15, "femto",
 1e-12, "pico",
 1e-9, "nano",
 1e-6, "micro",
 1e-3, "milli",
 1e-2, "centi",
 1e-1, "deci",
 1e1, "deka",
 1e1, "deca",
 1e2, "hecta",
 1e2, "hecto",
 1e3, "kilo",
 1e6, "mega",
 1e6, "meg",
 1e9, "giga",
 1e12, "tera",
 1e15, "peta",
 1e18, "exa",
 1e21, "zetta",
 1e24, "yotta",
 1<<10, "kibi",
 1L<<20, "mebi",
 1L<<30, "gibi",
 1LL<<40,"tebi",
 0.0, 0
};
FILE *inp;
int fperrc;
int peekc;
int dumpflg;

main(argc, argv)
char *argv[];
{
 register i;
 register char *file;
 struct unit u1, u2;
 double f;

 (void) setlocale(__LC_ALL, "");



        (void) textdomain("SYS_TEST");

 if(argc>1 && *argv[1]=='-') {
  argc--;
  argv++;
  dumpflg++;
 }
 file = dfile;
 if(argc > 1)
  file = argv[1];
 if ((inp = fopen(file, "r")) == ((void *)0)) {
  printf(gettext("no table\n"));
  exit(1);
 }
 signal(8, fperr);
 init();

loop:
 fperrc = 0;
 printf(gettext("you have: "));
 if(convr(&u1))
  goto loop;
 if(fperrc)
  goto fp;
loop1:
 printf(gettext("you want: "));
 if(convr(&u2))
  goto loop1;
 for(i=0; i<10; i++)
  if(u1.dim[i] != u2.dim[i])
   goto conform;
 f = u1.factor/u2.factor;
 if(fperrc || f == 0.0)
  goto fp;
 printf("\t* %e\n", f);
 printf("\t/ %e\n", 1./f);
 goto loop;

conform:
 if(fperrc)
  goto fp;
 printf(gettext("conformability\n"));
 units(&u1);
 units(&u2);
 goto loop;

fp:
 printf(gettext("underflow or overflow\n"));
 goto loop;
}

units(up)
struct unit *up;
{
 register struct unit *p;
 register f, i;

 p = up;
 printf("\t%e ", p->factor);
 f = 0;
 for(i=0; i<10; i++)
  f |= pu(p->dim[i], i, f);
 if(f&1) {
  putchar('/');
  f = 0;
  for(i=0; i<10; i++)
   f |= pu(-p->dim[i], i, f);
 }
 putchar('\n');
}

pu(u, i, f)
{

 if(u > 0) {
  if(f&2)
   putchar('-');
  if(unames[i])
   printf("%s", unames[i]); else
   printf(gettext("*%c*"), i+'a');
  if(u > 1)
   putchar(u+'0');
   return(2);
 }
 if(u < 0)
  return(1);
 return(0);
}

convr(up)
struct unit *up;
{
 register struct unit *p;
 register c;
 register char *cp;
 char name[20];
 int den, err;

 p = up;
 for(c=0; c<10; c++)
  p->dim[c] = 0;
 p->factor = getflt();
 if(p->factor == 0.)
  p->factor = 1.0;
 err = 0;
 den = 0;
 cp = name;

loop:
 switch(c=get()) {

 case '1':
 case '2':
 case '3':
 case '4':
 case '5':
 case '6':
 case '7':
 case '8':
 case '9':
 case '-':
 case '/':
 case ' ':
 case '\t':
 case '\n':
  if(cp != name) {
   *cp++ = 0;
   cp = name;
   err |= lookup(cp, p, den, c);
  }
  if(c == '/')
   den++;
  if(c == '\n')
   return(err);
  goto loop;
 }
 *cp++ = c;
 goto loop;
}

lookup(name, up, den, c)
char *name;
struct unit *up;
{
 register struct unit *p;
 register struct table *q;
 register i;
 char *cp1, *cp2;
 double e;

 p = up;
 e = 1.0;

loop:
 q = hash(name);
 if(q->name) {
  l1:
  if(den) {
   p->factor /= q->factor*e;
   for(i=0; i<10; i++)
    p->dim[i] -= q->dim[i];
  } else {
   p->factor *= q->factor*e;
   for(i=0; i<10; i++)
    p->dim[i] += q->dim[i];
  }
  if(c >= '2' && c <= '9') {
   c--;
   goto l1;
  }
  return(0);
 }
 for(i=0; cp1 = prefix[i].pname; i++) {
  cp2 = name;
  while(*cp1 == *cp2++)
   if(*cp1++ == 0) {
    cp1--;
    break;
   }
  if(*cp1 == 0) {
   e *= prefix[i].factor;
   name = cp2-1;
   goto loop;
  }
 }
 for(cp1 = name; *cp1; cp1++);
 if(cp1 > name+1 && *--cp1 == 's') {
  *cp1 = 0;
  goto loop;
 }
 printf(gettext("cannot recognize %s\n"), name);
 return(1);
}

equal(s1, s2)
char *s1, *s2;
{
 register char *c1, *c2;

 c1 = s1;
 c2 = s2;
 while(*c1++ == *c2)
  if(*c2++ == 0)
   return(1);
 return(0);
}

init()
{
 register char *cp;
 register struct table *tp, *lp;
 int c, i, f, t;
 char *np;

 cp = names;
 for(i=0; i<10; i++) {
  np = cp;
  *cp++ = '*';
  *cp++ = i+'a';
  *cp++ = '*';
  *cp++ = 0;
  lp = hash(np);
  lp->name = np;
  lp->factor = 1.0;
  lp->dim[i] = 1;
 }
 lp = hash("");
 lp->name = cp-1;
 lp->factor = 1.0;

l0:
 c = get();
 if(c == 0) {
  if(dumpflg) {
  printf(gettext("%d units; %d bytes\n\n"), i, cp-names);
  for(tp = &table[0]; tp < &table[1009]; tp++) {
   if(tp->name == 0)
    continue;
   printf("%s", tp->name);
   units((struct unit *)tp);
  } }
  fclose(inp);
  inp = stdin;
  return;
 }
 if(c == '/') {
  while(c != '\n' && c != 0)
   c = get();
  goto l0;
 }
 if(c == '\n')
  goto l0;
 np = cp;
 while(c != ' ' && c != '\t') {
  *cp++ = c;
  c = get();
  if (c==0)
   goto l0;
  if(c == '\n') {
   *cp++ = 0;
   tp = hash(np);
   if(tp->name)
    goto redef;
   tp->name = np;
   tp->factor = lp->factor;
   for(c=0; c<10; c++)
    tp->dim[c] = lp->dim[c];
   i++;
   goto l0;
  }
 }
 *cp++ = 0;
 lp = hash(np);
 if(lp->name)
  goto redef;
 convr((struct unit *)lp);
 lp->name = np;
 f = 0;
 i++;
 if(lp->factor != 1.0)
  goto l0;
 for(c=0; c<10; c++) {
  t = lp->dim[c];
  if(t>1 || (f>0 && t!=0))
   goto l0;
  if(f==0 && t==1) {
   if(unames[c])
    goto l0;
   f = c+1;
  }
 }
 if(f>0)
  unames[f-1] = np;
 goto l0;

redef:
 printf(gettext("redefinition %s\n"), np);
 goto l0;
}

double
getflt()
{
 register c, i, dp;
 double d, e;
 int f;

 d = 0.;
 dp = 0;
 do
  c = get();
 while(c == ' ' || c == '\t');

l1:
 if(c >= '0' && c <= '9') {
  d = d*10. + c-'0';
  if(dp)
   dp++;
  c = get();
  goto l1;
 }
 if(c == '.') {
  dp++;
  c = get();
  goto l1;
 }
 if(dp)
  dp--;
 if(c == '+' || c == '-') {
  f = 0;
  if(c == '-')
   f++;
  i = 0;
  c = get();
  while(c >= '0' && c <= '9') {
   i = i*10 + c-'0';
   c = get();
  }
  if(f)
   i = -i;
  dp -= i;
 }
 e = 1.;
 i = dp;
 if(i < 0)
  i = -i;
 while(i--)
  e *= 10.;
 if(dp < 0)
  d *= e; else
  d /= e;
 if(c == '|')
  return(d/getflt());
 peekc = c;
 return(d);
}

get()
{
 register c;

 if(c=peekc) {
  peekc = 0;
  return(c);
 }
 c = _IO_getc (inp);
 if (c == (-1)) {
  if (inp == stdin) {
   printf("\n");
   exit(0);
  }
  return(0);
 }
 return(c);
}

struct table *
hash(name)
char *name;
{
 register struct table *tp;
 register char *np;
 register unsigned h;

 h = 0;
 np = name;
 while(*np)
  h = h*57 + *np++ - '0';
 if( ((int)h)<0) h= -(int)h;
 h %= 1009;
 tp = &table[h];
l0:
 if(tp->name == 0)
  return(tp);
 if(equal(name, tp->name))
  return(tp);
 tp++;
 if(tp >= &table[1009])
  tp = table;
 goto l0;
}

fperr()
{

 signal(8, fperr);
 fperrc++;
}
