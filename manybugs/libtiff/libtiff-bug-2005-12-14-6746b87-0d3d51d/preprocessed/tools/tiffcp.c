# 1 "tiffcp.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "tiffcp.c"
# 41 "tiffcp.c"
# 1 "../libtiff/tif_config.h" 1
# 42 "tiffcp.c" 2

# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 368 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 410 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 411 "/usr/include/sys/cdefs.h" 2 3 4
# 369 "/usr/include/features.h" 2 3 4
# 392 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 393 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 3 4

# 216 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4


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

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 122 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
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
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
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
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







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
# 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 385 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;




# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 266 "/usr/include/stdio.h" 3 4






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4

# 306 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

# 412 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 640 "/usr/include/stdio.h" 3 4

# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4

# 824 "/usr/include/stdio.h" 3 4


extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 912 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 942 "/usr/include/stdio.h" 3 4

# 44 "tiffcp.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 328 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4






# 1 "/usr/include/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/bits/byteswap.h" 2 3 4
# 44 "/usr/include/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 67 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/sys/types.h" 2 3 4
# 146 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 147 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 22 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/select.h" 2 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 22 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/sys/select.h" 3 4

# 106 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/sys/select.h" 3 4

# 220 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/sys/sysmacros.h" 3 4


__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 58 "/usr/include/sys/sysmacros.h" 3 4

# 223 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 270 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 271 "/usr/include/sys/types.h" 2 3 4



# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

# 578 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 711 "/usr/include/stdlib.h" 3 4





extern int system (const char *__command) ;

# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 751 "/usr/include/stdlib.h" 3 4



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 774 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

# 811 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 950 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4

# 45 "tiffcp.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3 4
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 123 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 160 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 206 "/usr/include/string.h" 3 4

# 231 "/usr/include/string.h" 3 4
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 258 "/usr/include/string.h" 3 4
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 277 "/usr/include/string.h" 3 4



extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 310 "/usr/include/string.h" 3 4
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 337 "/usr/include/string.h" 3 4
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 392 "/usr/include/string.h" 3 4


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

# 422 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 440 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 484 "/usr/include/string.h" 3 4
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 512 "/usr/include/string.h" 3 4
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 529 "/usr/include/string.h" 3 4
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 552 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 658 "/usr/include/string.h" 3 4

# 46 "tiffcp.c" 2

# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4

# 46 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


# 150 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
# 347 "/usr/include/ctype.h" 3 4

# 48 "tiffcp.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 64 "/usr/include/assert.h" 3 4



extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



# 49 "tiffcp.c" 2


# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4

# 205 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 206 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 22 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 2 3 4
# 210 "/usr/include/unistd.h" 2 3 4
# 229 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 230 "/usr/include/unistd.h" 2 3 4
# 258 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 270 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 290 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 307 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;
# 337 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ , __leaf__));
# 356 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 379 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 420 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 435 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ , __leaf__));
# 447 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ , __leaf__));






extern int usleep (__useconds_t __useconds);
# 472 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;
# 514 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ , __leaf__)) ;
# 528 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ , __leaf__));
# 546 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 601 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 24 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 613 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ , __leaf__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ , __leaf__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ , __leaf__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ , __leaf__));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ , __leaf__));
# 663 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__ , __leaf__));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ , __leaf__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ , __leaf__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ , __leaf__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ , __leaf__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ , __leaf__)) ;
# 703 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ , __leaf__)) ;
# 759 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ , __leaf__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ , __leaf__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ , __leaf__));





extern int ttyslot (void) __attribute__ ((__nothrow__ , __leaf__));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ , __leaf__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ , __leaf__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 874 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ , __leaf__));
# 875 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ , __leaf__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ , __leaf__));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ , __leaf__));



extern char *getusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void endusershell (void) __attribute__ ((__nothrow__ , __leaf__));
extern void setusershell (void) __attribute__ ((__nothrow__ , __leaf__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ , __leaf__)) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
# 972 "/usr/include/unistd.h" 3 4
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ , __leaf__));





extern int getpagesize (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ , __leaf__));
# 996 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 1019 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ , __leaf__)) ;
# 1040 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__ , __leaf__));
# 1061 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ , __leaf__));
# 1084 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1115 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1154 "/usr/include/unistd.h" 3 4

# 52 "tiffcp.c" 2


# 1 "../libtiff/tiffio.h" 1
# 33 "../libtiff/tiffio.h"
# 1 "../libtiff/tiff.h" 1
# 30 "../libtiff/tiff.h"
# 1 "../libtiff/tiffconf.h" 1
# 31 "../libtiff/tiff.h" 2
# 65 "../libtiff/tiff.h"

# 65 "../libtiff/tiff.h"
typedef signed char int8;

typedef unsigned char uint8;

typedef short int16;

typedef unsigned short uint16;


typedef int int32;

typedef unsigned int uint32;
# 85 "../libtiff/tiff.h"
enum TIFFIgnoreSense
{
 TIS_STORE,
 TIS_EXTRACT,
 TIS_EMPTY
};




typedef struct {
 uint16 tiff_magic;

 uint16 tiff_version;

 uint32 tiff_diroff;

} TIFFHeader;
# 116 "../libtiff/tiff.h"
typedef struct {
 uint16 tdir_tag;
 uint16 tdir_type;
 uint32 tdir_count;
 uint32 tdir_offset;
} TIFFDirEntry;
# 137 "../libtiff/tiff.h"
typedef enum {
 TIFF_NOTYPE = 0,
 TIFF_BYTE = 1,
 TIFF_ASCII = 2,
 TIFF_SHORT = 3,
 TIFF_LONG = 4,
 TIFF_RATIONAL = 5,
 TIFF_SBYTE = 6,
 TIFF_UNDEFINED = 7,
 TIFF_SSHORT = 8,
 TIFF_SLONG = 9,
 TIFF_SRATIONAL = 10,
 TIFF_FLOAT = 11,
 TIFF_DOUBLE = 12,
 TIFF_IFD = 13
} TIFFDataType;
# 34 "../libtiff/tiffio.h" 2
# 1 "../libtiff/tiffvers.h" 1
# 35 "../libtiff/tiffio.h" 2





typedef struct tiff TIFF;
# 61 "../libtiff/tiffio.h"
typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrip_t;
typedef uint32 ttile_t;
typedef int32 tsize_t;
typedef void* tdata_t;
typedef uint32 toff_t;
# 96 "../libtiff/tiffio.h"
typedef void* thandle_t;
# 132 "../libtiff/tiffio.h"
typedef unsigned char TIFFRGBValue;

typedef struct {
 float d_mat[3][3];
 float d_YCR;
 float d_YCG;
 float d_YCB;
 uint32 d_Vrwr;
 uint32 d_Vrwg;
 uint32 d_Vrwb;
 float d_Y0R;
 float d_Y0G;
 float d_Y0B;
 float d_gammaR;
 float d_gammaG;
 float d_gammaB;
} TIFFDisplay;

typedef struct {
 TIFFRGBValue* clamptab;
 int* Cr_r_tab;
 int* Cb_b_tab;
 int32* Cr_g_tab;
 int32* Cb_g_tab;
        int32* Y_tab;
} TIFFYCbCrToRGB;

typedef struct {
 int range;

 float rstep, gstep, bstep;
 float X0, Y0, Z0;
 TIFFDisplay display;
 float Yr2r[1500 + 1];
 float Yg2g[1500 + 1];
 float Yb2b[1500 + 1];
} TIFFCIELabToRGB;




typedef struct _TIFFRGBAImage TIFFRGBAImage;
# 184 "../libtiff/tiffio.h"
typedef void (*tileContigRoutine)
    (TIFFRGBAImage*, uint32*, uint32, uint32, uint32, uint32, int32, int32,
 unsigned char*);
typedef void (*tileSeparateRoutine)
    (TIFFRGBAImage*, uint32*, uint32, uint32, uint32, uint32, int32, int32,
 unsigned char*, unsigned char*, unsigned char*, unsigned char*);



struct _TIFFRGBAImage {
 TIFF* tif;
 int stoponerr;
 int isContig;
 int alpha;
 uint32 width;
 uint32 height;
 uint16 bitspersample;
 uint16 samplesperpixel;
 uint16 orientation;
 uint16 req_orientation;
 uint16 photometric;
 uint16* redcmap;
 uint16* greencmap;
 uint16* bluecmap;

 int (*get)(TIFFRGBAImage*, uint32*, uint32, uint32);
 union {
     void (*any)(TIFFRGBAImage*);
     tileContigRoutine contig;
     tileSeparateRoutine separate;
 } put;
 TIFFRGBValue* Map;
 uint32** BWmap;
 uint32** PALmap;
 TIFFYCbCrToRGB* ycbcr;
        TIFFCIELabToRGB* cielab;

        int row_offset;
        int col_offset;
};
# 241 "../libtiff/tiffio.h"
typedef int (*TIFFInitMethod)(TIFF*, int);
typedef struct {
 char* name;
 uint16 scheme;
 TIFFInitMethod init;
} TIFFCodec;


# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stdarg.h" 1 3 4
# 250 "../libtiff/tiffio.h" 2
# 259 "../libtiff/tiffio.h"
typedef void (*TIFFErrorHandler)(const char*, const char*, va_list);
typedef tsize_t (*TIFFReadWriteProc)(thandle_t, tdata_t, tsize_t);
typedef toff_t (*TIFFSeekProc)(thandle_t, toff_t, int);
typedef int (*TIFFCloseProc)(thandle_t);
typedef toff_t (*TIFFSizeProc)(thandle_t);
typedef int (*TIFFMapFileProc)(thandle_t, tdata_t*, toff_t*);
typedef void (*TIFFUnmapFileProc)(thandle_t, tdata_t, toff_t);
typedef void (*TIFFExtendProc)(TIFF*);

extern const char* TIFFGetVersion(void);

extern const TIFFCodec* TIFFFindCODEC(uint16);
extern TIFFCodec* TIFFRegisterCODEC(uint16, const char*, TIFFInitMethod);
extern void TIFFUnRegisterCODEC(TIFFCodec*);
extern int TIFFIsCODECConfigured(uint16);
extern TIFFCodec* TIFFGetConfiguredCODECs(void);





extern tdata_t _TIFFmalloc(tsize_t);
extern tdata_t _TIFFrealloc(tdata_t, tsize_t);
extern void _TIFFmemset(tdata_t, int, tsize_t);
extern void _TIFFmemcpy(tdata_t, const tdata_t, tsize_t);
extern int _TIFFmemcmp(const tdata_t, const tdata_t, tsize_t);
extern void _TIFFfree(tdata_t);




extern int TIFFGetTagListCount( TIFF * );
extern ttag_t TIFFGetTagListEntry( TIFF *, int tag_index );
# 300 "../libtiff/tiffio.h"
typedef struct {
 ttag_t field_tag;
 short field_readcount;
 short field_writecount;
 TIFFDataType field_type;
        unsigned short field_bit;
 unsigned char field_oktochange;
 unsigned char field_passcount;
 char *field_name;
} TIFFFieldInfo;

typedef struct _TIFFTagValue {
    const TIFFFieldInfo *info;
    int count;
    void *value;
} TIFFTagValue;

extern void TIFFMergeFieldInfo(TIFF*, const TIFFFieldInfo[], int);
extern const TIFFFieldInfo* TIFFFindFieldInfo(TIFF*, ttag_t, TIFFDataType);
extern const TIFFFieldInfo* TIFFFindFieldInfoByName(TIFF* , const char *,
           TIFFDataType);
extern const TIFFFieldInfo* TIFFFieldWithTag(TIFF*, ttag_t);
extern const TIFFFieldInfo* TIFFFieldWithName(TIFF*, const char *);

typedef int (*TIFFVSetMethod)(TIFF*, ttag_t, va_list);
typedef int (*TIFFVGetMethod)(TIFF*, ttag_t, va_list);
typedef void (*TIFFPrintMethod)(TIFF*, FILE*, long);

typedef struct {
    TIFFVSetMethod vsetfield;
    TIFFVGetMethod vgetfield;
    TIFFPrintMethod printdir;
} TIFFTagMethods;

extern TIFFTagMethods *TIFFAccessTagMethods( TIFF * );
extern void *TIFFGetClientInfo( TIFF *, const char * );
extern void TIFFSetClientInfo( TIFF *, void *, const char * );

extern void TIFFCleanup(TIFF*);
extern void TIFFClose(TIFF*);
extern int TIFFFlush(TIFF*);
extern int TIFFFlushData(TIFF*);
extern int TIFFGetField(TIFF*, ttag_t, ...);
extern int TIFFVGetField(TIFF*, ttag_t, va_list);
extern int TIFFGetFieldDefaulted(TIFF*, ttag_t, ...);
extern int TIFFVGetFieldDefaulted(TIFF*, ttag_t, va_list);
extern int TIFFReadDirectory(TIFF*);
extern int TIFFReadCustomDirectory(TIFF*, toff_t, const TIFFFieldInfo[],
        size_t);
extern int TIFFReadEXIFDirectory(TIFF*, toff_t);
extern tsize_t TIFFScanlineSize(TIFF*);
extern tsize_t TIFFRasterScanlineSize(TIFF*);
extern tsize_t TIFFStripSize(TIFF*);
extern tsize_t TIFFRawStripSize(TIFF*, tstrip_t);
extern tsize_t TIFFVStripSize(TIFF*, uint32);
extern tsize_t TIFFTileRowSize(TIFF*);
extern tsize_t TIFFTileSize(TIFF*);
extern tsize_t TIFFVTileSize(TIFF*, uint32);
extern uint32 TIFFDefaultStripSize(TIFF*, uint32);
extern void TIFFDefaultTileSize(TIFF*, uint32*, uint32*);
extern int TIFFFileno(TIFF*);
extern int TIFFSetFileno(TIFF*, int);
extern thandle_t TIFFClientdata(TIFF*);
extern thandle_t TIFFSetClientdata(TIFF*, thandle_t);
extern int TIFFGetMode(TIFF*);
extern int TIFFSetMode(TIFF*, int);
extern int TIFFIsTiled(TIFF*);
extern int TIFFIsByteSwapped(TIFF*);
extern int TIFFIsUpSampled(TIFF*);
extern int TIFFIsMSB2LSB(TIFF*);
extern int TIFFIsBigEndian(TIFF*);
extern TIFFReadWriteProc TIFFGetReadProc(TIFF*);
extern TIFFReadWriteProc TIFFGetWriteProc(TIFF*);
extern TIFFSeekProc TIFFGetSeekProc(TIFF*);
extern TIFFCloseProc TIFFGetCloseProc(TIFF*);
extern TIFFSizeProc TIFFGetSizeProc(TIFF*);
extern TIFFMapFileProc TIFFGetMapFileProc(TIFF*);
extern TIFFUnmapFileProc TIFFGetUnmapFileProc(TIFF*);
extern uint32 TIFFCurrentRow(TIFF*);
extern tdir_t TIFFCurrentDirectory(TIFF*);
extern tdir_t TIFFNumberOfDirectories(TIFF*);
extern uint32 TIFFCurrentDirOffset(TIFF*);
extern tstrip_t TIFFCurrentStrip(TIFF*);
extern ttile_t TIFFCurrentTile(TIFF*);
extern int TIFFReadBufferSetup(TIFF*, tdata_t, tsize_t);
extern int TIFFWriteBufferSetup(TIFF*, tdata_t, tsize_t);
extern int TIFFSetupStrips(TIFF *);
extern int TIFFWriteCheck(TIFF*, int, const char *);
extern void TIFFFreeDirectory(TIFF*);
extern int TIFFCreateDirectory(TIFF*);
extern int TIFFLastDirectory(TIFF*);
extern int TIFFSetDirectory(TIFF*, tdir_t);
extern int TIFFSetSubDirectory(TIFF*, uint32);
extern int TIFFUnlinkDirectory(TIFF*, tdir_t);
extern int TIFFSetField(TIFF*, ttag_t, ...);
extern int TIFFVSetField(TIFF*, ttag_t, va_list);
extern int TIFFWriteDirectory(TIFF *);
extern int TIFFCheckpointDirectory(TIFF *);
extern int TIFFRewriteDirectory(TIFF *);
extern int TIFFReassignTagToIgnore(enum TIFFIgnoreSense, int);
# 409 "../libtiff/tiffio.h"
extern void TIFFPrintDirectory(TIFF*, FILE*, long);
extern int TIFFReadScanline(TIFF*, tdata_t, uint32, tsample_t);
extern int TIFFWriteScanline(TIFF*, tdata_t, uint32, tsample_t);
extern int TIFFReadRGBAImage(TIFF*, uint32, uint32, uint32*, int);
extern int TIFFReadRGBAImageOriented(TIFF*, uint32, uint32, uint32*, int, int);


extern int TIFFReadRGBAStrip(TIFF*, tstrip_t, uint32 * );
extern int TIFFReadRGBATile(TIFF*, uint32, uint32, uint32 * );
extern int TIFFRGBAImageOK(TIFF*, char [1024]);
extern int TIFFRGBAImageBegin(TIFFRGBAImage*, TIFF*, int, char [1024]);
extern int TIFFRGBAImageGet(TIFFRGBAImage*, uint32*, uint32, uint32);
extern void TIFFRGBAImageEnd(TIFFRGBAImage*);
extern TIFF* TIFFOpen(const char*, const char*);



extern TIFF* TIFFFdOpen(int, const char*, const char*);
extern TIFF* TIFFClientOpen(const char*, const char*,
     thandle_t,
     TIFFReadWriteProc, TIFFReadWriteProc,
     TIFFSeekProc, TIFFCloseProc,
     TIFFSizeProc,
     TIFFMapFileProc, TIFFUnmapFileProc);
extern const char* TIFFFileName(TIFF*);
extern const char* TIFFSetFileName(TIFF*, const char *);
extern void TIFFError(const char*, const char*, ...);
extern void TIFFWarning(const char*, const char*, ...);
extern TIFFErrorHandler TIFFSetErrorHandler(TIFFErrorHandler);
extern TIFFErrorHandler TIFFSetWarningHandler(TIFFErrorHandler);
extern TIFFExtendProc TIFFSetTagExtender(TIFFExtendProc);
extern ttile_t TIFFComputeTile(TIFF*, uint32, uint32, uint32, tsample_t);
extern int TIFFCheckTile(TIFF*, uint32, uint32, uint32, tsample_t);
extern ttile_t TIFFNumberOfTiles(TIFF*);
extern tsize_t TIFFReadTile(TIFF*,
     tdata_t, uint32, uint32, uint32, tsample_t);
extern tsize_t TIFFWriteTile(TIFF*,
     tdata_t, uint32, uint32, uint32, tsample_t);
extern tstrip_t TIFFComputeStrip(TIFF*, uint32, tsample_t);
extern tstrip_t TIFFNumberOfStrips(TIFF*);
extern tsize_t TIFFReadEncodedStrip(TIFF*, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFReadRawStrip(TIFF*, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFReadEncodedTile(TIFF*, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFReadRawTile(TIFF*, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteEncodedStrip(TIFF*, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteRawStrip(TIFF*, tstrip_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteEncodedTile(TIFF*, ttile_t, tdata_t, tsize_t);
extern tsize_t TIFFWriteRawTile(TIFF*, ttile_t, tdata_t, tsize_t);
extern int TIFFDataWidth(TIFFDataType);
extern void TIFFSetWriteOffset(TIFF*, toff_t);
extern void TIFFSwabShort(uint16*);
extern void TIFFSwabLong(uint32*);
extern void TIFFSwabDouble(double*);
extern void TIFFSwabArrayOfShort(uint16*, unsigned long);
extern void TIFFSwabArrayOfTriples(uint8*, unsigned long);
extern void TIFFSwabArrayOfLong(uint32*, unsigned long);
extern void TIFFSwabArrayOfDouble(double*, unsigned long);
extern void TIFFReverseBits(unsigned char *, unsigned long);
extern const unsigned char* TIFFGetBitRevTable(int);





extern double LogL16toY(int);
extern double LogL10toY(int);
extern void XYZtoRGB24(float*, uint8*);
extern int uv_decode(double*, double*, int);
extern void LogLuv24toXYZ(uint32, float*);
extern void LogLuv32toXYZ(uint32, float*);







extern int LogL16fromY(double, int);
extern int LogL10fromY(double, int);
extern int uv_encode(double, double, int);
extern uint32 LogLuv24fromXYZ(float*, int);
extern uint32 LogLuv32fromXYZ(float*, int);



extern int TIFFCIELabToRGBInit(TIFFCIELabToRGB*, TIFFDisplay *, float*);
extern void TIFFCIELabToXYZ(TIFFCIELabToRGB *, uint32, int32, int32,
       float *, float *, float *);
extern void TIFFXYZToRGB(TIFFCIELabToRGB *, float, float, float,
    uint32 *, uint32 *, uint32 *);

extern int TIFFYCbCrToRGBInit(TIFFYCbCrToRGB*, float*, float*);
extern void TIFFYCbCrtoRGB(TIFFYCbCrToRGB *, uint32, int32, int32,
      uint32 *, uint32 *, uint32 *);
# 55 "tiffcp.c" 2
# 66 "tiffcp.c"
static int outtiled = -1;
static uint32 tilewidth;
static uint32 tilelength;

static uint16 config;
static uint16 compression;
static uint16 predictor;
static uint16 fillorder;
static uint16 orientation;
static uint32 rowsperstrip;
static uint32 g3opts;
static int ignore = 0;
static uint32 defg3opts = (uint32) -1;
static int quality = 75;
static int jpegcolormode = 0x0001;
static uint16 defcompression = (uint16) -1;
static uint16 defpredictor = (uint16) -1;

static int tiffcp(TIFF*, TIFF*);
static int processCompressOptions(char*);
static void usage(void);

static char comma = ',';
static TIFF* bias = 
# 89 "tiffcp.c" 3 4
                   ((void *)0)
# 89 "tiffcp.c"
                       ;
static int pageNum = 0;

static int nextSrcImage (TIFF *tif, char **imageSpec)





{
  if (**imageSpec == comma) {
    char *start = *imageSpec + 1;
    tdir_t nextImage = (tdir_t)strtol(start, imageSpec, 0);
    if (start == *imageSpec) nextImage = TIFFCurrentDirectory (tif);
    if (**imageSpec)
    {
      if (**imageSpec == comma) {

        if ((*imageSpec)[1] == '\0') *imageSpec = 
# 107 "tiffcp.c" 3 4
                                                 ((void *)0)
# 107 "tiffcp.c"
                                                     ;
      }else{
        fprintf (
# 109 "tiffcp.c" 3 4
                stderr
# 109 "tiffcp.c"
                      ,
          "Expected a %c separated image # list after %s\n",
          comma, TIFFFileName (tif));
        exit (-4);
      }
    }
    if (TIFFSetDirectory (tif, nextImage)) return 1;
    fprintf (
# 116 "tiffcp.c" 3 4
            stderr
# 116 "tiffcp.c"
                  , "%s%c%d not found!\n",
             TIFFFileName(tif), comma, (int) nextImage);
  }
  return 0;
}


static TIFF* openSrcImage (char **imageSpec)





{
    TIFF *tif;
    char *fn = *imageSpec;
    *imageSpec = strchr (fn, comma);
    if (*imageSpec) {
        **imageSpec = '\0';
        tif = TIFFOpen (fn, "r");

        if (!(*imageSpec)[1]) {*imageSpec = 
# 137 "tiffcp.c" 3 4
                                           ((void *)0)
# 137 "tiffcp.c"
                                               ; return tif;}
        if (tif) {
            **imageSpec = comma;
            if (!nextSrcImage(tif, imageSpec)) {
              TIFFClose (tif);
              tif = 
# 142 "tiffcp.c" 3 4
                   ((void *)0)
# 142 "tiffcp.c"
                       ;
            }
        }
    }else
        tif = TIFFOpen (fn, "r");
    return tif;
}


int
main(int argc, char* argv[])
{
 uint16 defconfig = (uint16) -1;
 uint16 deffillorder = 0;
 uint32 deftilewidth = (uint32) -1;
 uint32 deftilelength = (uint32) -1;
 uint32 defrowsperstrip = (uint32) 0;
 uint32 diroff = 0;
 TIFF* in;
 TIFF* out;
 char mode[10];
 char* mp = mode;
 int c;
 extern int optind;
 extern char* optarg;

 *mp++ = 'w';
 *mp = '\0';
 while ((c = getopt(argc, argv, ",:b:c:f:l:o:z:p:r:w:aistBLMC")) != -1)
  switch (c) {
                case ',':
                        if (optarg[0] != '=') usage();
                        comma = optarg[1];
                        break;
                case 'b':
                        if (bias) {
                          fputs ("Only 1 bias image may be specified\n", 
# 178 "tiffcp.c" 3 4
                                                                        stderr
# 178 "tiffcp.c"
                                                                              );
                          exit (-2);
                        }
                        {
                          uint16 samples = (uint16) -1;
                          char **biasFn = &optarg;
                          bias = openSrcImage (biasFn);
                          if (!bias) exit (-5);
                          if (TIFFIsTiled (bias)) {
                     fputs ("Bias image must be organized in strips\n", 
# 187 "tiffcp.c" 3 4
                                                                       stderr
# 187 "tiffcp.c"
                                                                             );
                            exit (-7);
                          }
     TIFFGetField(bias, 277, &samples);
                          if (samples != 1) {
                     fputs ("Bias image must be monochrome\n", 
# 192 "tiffcp.c" 3 4
                                                              stderr
# 192 "tiffcp.c"
                                                                    );
                            exit (-7);
                          }
                        }
                        break;
  case 'a':
   mode[0] = 'a';
   break;
  case 'c':
   if (!processCompressOptions(optarg))
    usage();
   break;
  case 'f':
   if ((strcmp(optarg,"lsb2msb") == 0))
    deffillorder = 2;
   else if ((strcmp(optarg,"msb2lsb") == 0))
    deffillorder = 1;
   else
    usage();
   break;
  case 'i':
   ignore = 1;
   break;
  case 'l':
   outtiled = 1;
   deftilelength = atoi(optarg);
   break;
  case 'o':
   diroff = strtoul(optarg, 
# 220 "tiffcp.c" 3 4
                           ((void *)0)
# 220 "tiffcp.c"
                               , 0);
   break;
  case 'p':
   if ((strcmp(optarg,"separate") == 0))
    defconfig = 2;
   else if ((strcmp(optarg,"contig") == 0))
    defconfig = 1;
   else
    usage();
   break;
  case 'r':
   defrowsperstrip = atol(optarg);
   break;
  case 's':
   outtiled = 0;
   break;
  case 't':
   outtiled = 1;
   break;
  case 'w':
   outtiled = 1;
   deftilewidth = atoi(optarg);
   break;
  case 'B':
   *mp++ = 'b'; *mp = '\0';
   break;
  case 'L':
   *mp++ = 'l'; *mp = '\0';
   break;
  case 'M':
   *mp++ = 'm'; *mp = '\0';
   break;
  case 'C':
   *mp++ = 'c'; *mp = '\0';
   break;
  case '?':
   usage();

  }
 if (argc - optind < 2)
  usage();
 out = TIFFOpen(argv[argc-1], mode);
 if (out == 
# 262 "tiffcp.c" 3 4
           ((void *)0)
# 262 "tiffcp.c"
               )
  return (-2);
 if ((argc - optind) == 2)
   pageNum = -1;
 for (; optind < argc-1 ; optind++) {
                char *imageCursor = argv[optind];
  in = openSrcImage (&imageCursor);
  if (in == 
# 269 "tiffcp.c" 3 4
           ((void *)0)
# 269 "tiffcp.c"
               )
   return (-3);
  if (diroff != 0 && !TIFFSetSubDirectory(in, diroff)) {
   TIFFError(TIFFFileName(in),
       "Error, setting subdirectory at %#x", diroff);
   (void) TIFFClose(out);
   return (1);
  }
                for (;;) {
                   config = defconfig;
                   compression = defcompression;
                   predictor = defpredictor;
                   fillorder = deffillorder;
                   rowsperstrip = defrowsperstrip;
                   tilewidth = deftilewidth;
                   tilelength = deftilelength;
                   g3opts = defg3opts;
                   if (!tiffcp(in, out) || !TIFFWriteDirectory(out)) {
                        TIFFClose(out);
                        return (1);
                   }
                   if (imageCursor) {
                        if (!nextSrcImage(in, &imageCursor)) break;
                   }else
                        if (!TIFFReadDirectory(in)) break;
  }
  TIFFClose(in);
 }

        TIFFClose(out);
        return (0);
}


static void
processG3Options(char* cp)
{
 if( (cp = strchr(cp, ':')) ) {
  if (defg3opts == (uint32) -1)
   defg3opts = 0;
  do {
   cp++;
   if ((strncmp(cp,"1d",2) == 0))
    defg3opts &= ~0x1;
   else if ((strncmp(cp,"2d",2) == 0))
    defg3opts |= 0x1;
   else if ((strncmp(cp,"fill",4) == 0))
    defg3opts |= 0x4;
   else
    usage();
  } while( (cp = strchr(cp, ':')) );
 }
}

static int
processCompressOptions(char* opt)
{
 if ((strcmp(opt,"none") == 0)) {
  defcompression = 1;
 } else if ((strcmp(opt,"packbits") == 0)) {
  defcompression = 32773;
 } else if ((strncmp(opt,"jpeg",4) == 0)) {
  char* cp = strchr(opt, ':');
  if (cp && 
# 332 "tiffcp.c" 3 4
           ((*__ctype_b_loc ())[(int) ((
# 332 "tiffcp.c"
           (int)cp[1]
# 332 "tiffcp.c" 3 4
           ))] & (unsigned short int) _ISdigit)
# 332 "tiffcp.c"
                              )
   quality = atoi(cp+1);
  if (cp && strchr(cp, 'r'))
   jpegcolormode = 0x0000;
  defcompression = 7;
 } else if ((strncmp(opt,"g3",2) == 0)) {
  processG3Options(opt);
  defcompression = 3;
 } else if ((strcmp(opt,"g4") == 0)) {
  defcompression = 4;
 } else if ((strncmp(opt,"lzw",3) == 0)) {
  char* cp = strchr(opt, ':');
  if (cp)
   defpredictor = atoi(cp+1);
  defcompression = 5;
 } else if ((strncmp(opt,"zip",3) == 0)) {
  char* cp = strchr(opt, ':');
  if (cp)
   defpredictor = atoi(cp+1);
  defcompression = 8;
 } else
  return (0);
 return (1);
}

char* stuff[] = {
"usage: tiffcp [options] input... output",
"where options are:",
" -a		append to output instead of overwriting",
" -o offset	set initial directory offset",
" -p contig	pack samples contiguously (e.g. RGBRGB...)",
" -p separate	store samples separately (e.g. RRR...GGG...BBB...)",
" -s		write output in strips",
" -t		write output in tiles",
" -i		ignore read errors",
" -b file[,#]	bias (dark) monochrome image to be subtracted from all others",
" -,=%		use % rather than , to separate image #'s (per Note below)",
"",
" -r #		make each strip have no more than # rows",
" -w #		set output tile width (pixels)",
" -l #		set output tile length (pixels)",
"",
" -f lsb2msb	force lsb-to-msb FillOrder for output",
" -f msb2lsb	force msb-to-lsb FillOrder for output",
"",
" -c lzw[:opts]	compress output with Lempel-Ziv & Welch encoding",
" -c zip[:opts]	compress output with deflate encoding",
" -c jpeg[:opts]	compress output with JPEG encoding",
" -c packbits	compress output with packbits encoding",
" -c g3[:opts]	compress output with CCITT Group 3 encoding",
" -c g4		compress output with CCITT Group 4 encoding",
" -c none	use no compression algorithm on output",
"",
"Group 3 options:",
" 1d		use default CCITT Group 3 1D-encoding",
" 2d		use optional CCITT Group 3 2D-encoding",
" fill		byte-align EOL codes",
"For example, -c g3:2d:fill to get G3-2D-encoded data with byte-aligned EOLs",
"",
"JPEG options:",
" #		set compression quality level (0-100, default 75)",
" r		output color image as RGB rather than YCbCr",
"For example, -c jpeg:r:50 to get JPEG-encoded RGB data with 50% comp. quality",
"",
"LZW and deflate options:",
" #		set predictor value",
"For example, -c lzw:2 to get LZW-encoded data with horizontal differencing",
"",
"Note that input filenames may be of the form filename,x,y,z",
"where x, y, and z specify image numbers in the filename to copy.",
"example:  tiffcp -c none -b esp.tif,1 esp.tif,0 test.tif",
"  subtract 2nd image in esp.tif from 1st yielding uncompressed result test.tif",

# 404 "tiffcp.c" 3 4
((void *)0)

# 405 "tiffcp.c"
};

static void
usage(void)
{
 char buf[
# 410 "tiffcp.c" 3 4
         8192
# 410 "tiffcp.c"
               ];
 int i;

 setbuf(
# 413 "tiffcp.c" 3 4
       stderr
# 413 "tiffcp.c"
             , buf);
        fprintf(
# 414 "tiffcp.c" 3 4
               stderr
# 414 "tiffcp.c"
                     , "%s\n\n", TIFFGetVersion());
 for (i = 0; stuff[i] != 
# 415 "tiffcp.c" 3 4
                        ((void *)0)
# 415 "tiffcp.c"
                            ; i++)
  fprintf(
# 416 "tiffcp.c" 3 4
         stderr
# 416 "tiffcp.c"
               , "%s\n", stuff[i]);
 exit(-1);
}
# 429 "tiffcp.c"
static void
cpTag(TIFF* in, TIFF* out, uint16 tag, uint16 count, TIFFDataType type)
{
 switch (type) {
 case TIFF_SHORT:
  if (count == 1) {
   uint16 shortv;
   if (TIFFGetField(in, tag, &shortv)) TIFFSetField(out, tag, shortv);
  } else if (count == 2) {
   uint16 shortv1, shortv2;
   if (TIFFGetField(in, tag, &shortv1, &shortv2)) TIFFSetField(out, tag, shortv1, shortv2);
  } else if (count == 4) {
   uint16 *tr, *tg, *tb, *ta;
   if (TIFFGetField(in, tag, &tr, &tg, &tb, &ta)) TIFFSetField(out, tag, tr, tg, tb, ta);
  } else if (count == (uint16) -1) {
   uint16 shortv1;
   uint16* shortav;
   if (TIFFGetField(in, tag, &shortv1, &shortav)) TIFFSetField(out, tag, shortv1, shortav);
  }
  break;
 case TIFF_LONG:
  { uint32 longv;
    if (TIFFGetField(in, tag, &longv)) TIFFSetField(out, tag, longv);
  }
  break;
 case TIFF_RATIONAL:
  if (count == 1) {
   float floatv;
   if (TIFFGetField(in, tag, &floatv)) TIFFSetField(out, tag, floatv);
  } else if (count == (uint16) -1) {
   float* floatav;
   if (TIFFGetField(in, tag, &floatav)) TIFFSetField(out, tag, floatav);
  }
  break;
 case TIFF_ASCII:
  { char* stringv;
    if (TIFFGetField(in, tag, &stringv)) TIFFSetField(out, tag, stringv);
  }
  break;
 case TIFF_DOUBLE:
  if (count == 1) {
   double doublev;
   if (TIFFGetField(in, tag, &doublev)) TIFFSetField(out, tag, doublev);
  } else if (count == (uint16) -1) {
   double* doubleav;
   if (TIFFGetField(in, tag, &doubleav)) TIFFSetField(out, tag, doubleav);
  }
  break;
          default:
                TIFFError(TIFFFileName(in),
                          "Data type %d is not supported, tag %d skipped.",
                          tag, type);
 }
}

static struct cpTag {
 uint16 tag;
 uint16 count;
 TIFFDataType type;
} tags[] = {
 { 254, 1, TIFF_LONG },
 { 263, 1, TIFF_SHORT },
 { 269, 1, TIFF_ASCII },
 { 270, 1, TIFF_ASCII },
 { 271, 1, TIFF_ASCII },
 { 272, 1, TIFF_ASCII },
 { 280, 1, TIFF_SHORT },
 { 281, 1, TIFF_SHORT },
 { 282, 1, TIFF_RATIONAL },
 { 283, 1, TIFF_RATIONAL },
 { 285, 1, TIFF_ASCII },
 { 286, 1, TIFF_RATIONAL },
 { 287, 1, TIFF_RATIONAL },
 { 296, 1, TIFF_SHORT },
 { 305, 1, TIFF_ASCII },
 { 306, 1, TIFF_ASCII },
 { 315, 1, TIFF_ASCII },
 { 316, 1, TIFF_ASCII },
 { 318, (uint16) -1, TIFF_RATIONAL },
 { 319,(uint16) -1,TIFF_RATIONAL },
 { 321, 2, TIFF_SHORT },
 { 332, 1, TIFF_SHORT },
 { 336, 2, TIFF_SHORT },
 { 337, 1, TIFF_ASCII },
 { 339, 1, TIFF_SHORT },
 { 529, (uint16) -1,TIFF_RATIONAL },
 { 530, 2, TIFF_SHORT },
 { 531, 1, TIFF_SHORT },
 { 532, (uint16) -1,TIFF_RATIONAL },
 { 338, (uint16) -1, TIFF_SHORT },
 { 340, 1, TIFF_DOUBLE },
 { 341, 1, TIFF_DOUBLE },
 { 37439, 1, TIFF_DOUBLE },
};




typedef int (*copyFunc)
    (TIFF* in, TIFF* out, uint32 l, uint32 w, uint16 samplesperpixel);
static copyFunc pickCopyFunc(TIFF*, TIFF*, uint16, uint16);

static int
tiffcp(TIFF* in, TIFF* out)
{
 uint16 bitspersample, samplesperpixel;
 copyFunc cf;
 uint32 width, length;
 struct cpTag* p;

 if (TIFFGetField(in, 256, &width)) TIFFSetField(out, 256, width);
 if (TIFFGetField(in, 257, &length)) TIFFSetField(out, 257, length);
 if (TIFFGetField(in, 258, &bitspersample)) TIFFSetField(out, 258, bitspersample);
 if (TIFFGetField(in, 277, &samplesperpixel)) TIFFSetField(out, 277, samplesperpixel);
 if (compression != (uint16)-1)
  TIFFSetField(out, 259, compression);
 else
  if (TIFFGetField(in, 259, &compression)) TIFFSetField(out, 259, compression);
 if (compression == 7) {
     uint16 input_compression, input_photometric;

            if ( TIFFGetField( in, 259, &input_compression )
                 && input_compression == 7 ) {
                TIFFSetField(in, 65538, 0x0001);
            }
     if (TIFFGetField(in, 262, &input_photometric)) {
  if(input_photometric == 2) {
   if (jpegcolormode == 0x0001)
        TIFFSetField(out, 262,
          6);
   else
        TIFFSetField(out, 262,
          2);
  } else
   TIFFSetField(out, 262,
         input_photometric);
     }
        }
 else if (compression == 34676
   || compression == 34677)
  TIFFSetField(out, 262,
      samplesperpixel == 1 ?
   32844 : 32845);
 else
  cpTag(in, out, 262, 1, TIFF_SHORT);
 if (fillorder != 0)
  TIFFSetField(out, 266, fillorder);
 else
  cpTag(in, out, 266, 1, TIFF_SHORT);



 TIFFGetFieldDefaulted(in, 274, &orientation);
 switch (orientation) {
  case 3:
  case 7:
   TIFFWarning(TIFFFileName(in), "using bottom-left orientation");
   orientation = 4;

  case 8:
  case 4:
   break;
  case 2:
  case 6:
  default:
   TIFFWarning(TIFFFileName(in), "using top-left orientation");
   orientation = 1;

  case 5:
  case 1:
   break;
 }
 TIFFSetField(out, 274, orientation);





 if (outtiled == -1)
  outtiled = TIFFIsTiled(in);
 if (outtiled) {






  if (tilewidth == (uint32) -1)
   TIFFGetField(in, 322, &tilewidth);
  if (tilelength == (uint32) -1)
   TIFFGetField(in, 323, &tilelength);
  TIFFDefaultTileSize(out, &tilewidth, &tilelength);
  TIFFSetField(out, 322, tilewidth);
  TIFFSetField(out, 323, tilelength);
 } else {





  if (rowsperstrip == (uint32) 0) {
   if (!TIFFGetField(in, 278,&rowsperstrip))
    rowsperstrip =
     TIFFDefaultStripSize(out, rowsperstrip);
  }
  else if (rowsperstrip == (uint32) -1)
   rowsperstrip = length;
  TIFFSetField(out, 278, rowsperstrip);
 }
 if (config != (uint16) -1)
  TIFFSetField(out, 284, config);
 else
  if (TIFFGetField(in, 284, &config)) TIFFSetField(out, 284, config);
 if (samplesperpixel <= 4)
  cpTag(in, out, 301, 4, TIFF_SHORT);
 cpTag(in, out, 320, 4, TIFF_SHORT);

 switch (compression) {
 case 7:
  TIFFSetField(out, 65537, quality);
  TIFFSetField(out, 65538, jpegcolormode);
  break;
 case 5:
 case 8:
 case 32946:
  if (predictor != (uint16)-1)
   TIFFSetField(out, 317, predictor);
  else
   if (TIFFGetField(in, 317, &predictor)) TIFFSetField(out, 317, predictor);
  break;
 case 3:
 case 4:
  if (compression == 3) {
   if (g3opts != (uint32) -1)
    TIFFSetField(out, 292,
        g3opts);
   else
    if (TIFFGetField(in, 292, &g3opts)) TIFFSetField(out, 292, g3opts);
  } else
   cpTag(in, out, 293, 1, TIFF_LONG);
  cpTag(in, out, 326, 1, TIFF_LONG);
  cpTag(in, out, 327, 1, TIFF_LONG);
  cpTag(in, out, 328, 1, TIFF_LONG);
  cpTag(in, out, 34908, 1, TIFF_LONG);
  cpTag(in, out, 34910, 1, TIFF_LONG);
  cpTag(in, out, 34909, 1, TIFF_ASCII);
  break;
 }
 { uint32 len32;
   void** data;
   if (TIFFGetField(in, 34675, &len32, &data))
  TIFFSetField(out, 34675, len32, data);
 }
 { uint16 ninks;
   const char* inknames;
   if (TIFFGetField(in, 334, &ninks)) {
  TIFFSetField(out, 334, ninks);
  if (TIFFGetField(in, 333, &inknames)) {
      int inknameslen = strlen(inknames) + 1;
      const char* cp = inknames;
      while (ninks > 1) {
       cp = strchr(cp, '\0');
       if (cp) {
        cp++;
        inknameslen += (strlen(cp) + 1);
       }
       ninks--;
      }
      TIFFSetField(out, 333, inknameslen, inknames);
  }
   }
 }
 {
   unsigned short pg0, pg1;
   if (TIFFGetField(in, 297, &pg0, &pg1)) {
  if (pageNum < 0)
   TIFFSetField(out, 297, pg0, pg1);
  else
   TIFFSetField(out, 297, pageNum++, 0);
   }
 }

 for (p = tags; p < &tags[(sizeof (tags) / sizeof (tags[0]))]; p++)
  cpTag(in, out, p->tag, p->count, p->type);

 cf = pickCopyFunc(in, out, bitspersample, samplesperpixel);
 return (cf ? (*cf)(in, out, length, width, samplesperpixel) : 0);
}
# 728 "tiffcp.c"
typedef int (*readFunc)(TIFF*, uint8*, uint32, uint32, tsample_t);




typedef int (*writeFunc)(TIFF*, uint8*, uint32, uint32, tsample_t);




static int cpContig2ContigByRow(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 tdata_t buf = _TIFFmalloc(TIFFScanlineSize(in));
 uint32 row;

 (void) imagewidth; (void) spp;
 for (row = 0; row < imagelength; row++) {
  if (TIFFReadScanline(in, buf, row, 0) < 0 && !ignore)
   goto done;
  if (TIFFWriteScanline(out, buf, row, 0) < 0)
   goto bad;
 }
done:
 _TIFFfree(buf);
 return (1);
bad:
 _TIFFfree(buf);
 return (0);
}


typedef void biasFn (void *image, void *bias, uint32 pixels);
# 772 "tiffcp.c"
static void subtract8 (void *i, void *b, uint32 pixels){ uint8 *image = i; uint8 *bias = b; while (pixels--) { *image = *image > *bias ? *image-*bias : 0; image++, bias++; } }
static void subtract16 (void *i, void *b, uint32 pixels){ uint16 *image = i; uint16 *bias = b; while (pixels--) { *image = *image > *bias ? *image-*bias : 0; image++, bias++; } }
static void subtract32 (void *i, void *b, uint32 pixels){ uint32 *image = i; uint32 *bias = b; while (pixels--) { *image = *image > *bias ? *image-*bias : 0; image++, bias++; } }

static biasFn *lineSubtractFn (unsigned bits)
{
    switch (bits) {
      case 8: return subtract8;
      case 16: return subtract16;
      case 32: return subtract32;
    }
    return 
# 783 "tiffcp.c" 3 4
          ((void *)0)
# 783 "tiffcp.c"
              ;
}




static int cpBiasedContig2Contig(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
  if (spp == 1) {
    tsize_t biasSize = TIFFScanlineSize(bias);
    tsize_t bufSize = TIFFScanlineSize(in);
    tdata_t buf, biasBuf;
    uint32 biasWidth = 0, biasLength = 0;
    TIFFGetField(bias, 256, &biasWidth);
    TIFFGetField(bias, 257, &biasLength);
    if (biasSize == bufSize &&
        imagelength == biasLength && imagewidth == biasWidth) {
      uint16 sampleBits = 0;
      biasFn *subtractLine;
      TIFFGetField(in, 258, &sampleBits);
      subtractLine = lineSubtractFn (sampleBits);
      if (subtractLine) {
        uint32 row;
        buf = _TIFFmalloc(bufSize);
        biasBuf = _TIFFmalloc(bufSize);
 for (row = 0; row < imagelength; row++) {
   if (TIFFReadScanline(in, buf, row, 0) < 0 && !ignore)
  break;
   if (TIFFReadScanline(bias, biasBuf, row, 0) < 0 && !ignore)
  break;
          subtractLine (buf, biasBuf, imagewidth);
   if (TIFFWriteScanline(out, buf, row, 0) < 0) {
            _TIFFfree(buf); _TIFFfree(biasBuf);
            return 0;
   }
 }
 _TIFFfree(buf); _TIFFfree(biasBuf);
        TIFFSetDirectory (bias, TIFFCurrentDirectory(bias));
 return 1;

      }else{
        fprintf (
# 824 "tiffcp.c" 3 4
                stderr
# 824 "tiffcp.c"
                      , "No support for biasing %d bit pixels\n", sampleBits);
        return 0;
      }
    }
    fprintf (
# 828 "tiffcp.c" 3 4
            stderr
# 828 "tiffcp.c"
                  ,"Bias image %s,%d\nis not the same size as %s,%d\n",
             TIFFFileName(bias), TIFFCurrentDirectory(bias),
             TIFFFileName(in), TIFFCurrentDirectory(in));
    return 0;
  }else{
    fprintf (
# 833 "tiffcp.c" 3 4
            stderr
# 833 "tiffcp.c"
                  , "Can't bias %s,%d as it has >1 Sample/Pixel\n",
             TIFFFileName(in), TIFFCurrentDirectory(in));
    return 0;
  }
}





static int cpDecodedStrips(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 tsize_t stripsize = TIFFStripSize(in);
 tdata_t buf = _TIFFmalloc(stripsize);

 (void) imagewidth; (void) spp;
 if (buf) {
  tstrip_t s, ns = TIFFNumberOfStrips(in);
  uint32 row = 0;
  for (s = 0; s < ns; s++) {
   tsize_t cc = (row + rowsperstrip > imagelength) ?
       TIFFVStripSize(in, imagelength - row) : stripsize;
   if (TIFFReadEncodedStrip(in, s, buf, cc) < 0 && !ignore)
    break;
   if (TIFFWriteEncodedStrip(out, s, buf, cc) < 0) {
    _TIFFfree(buf);
    return (0);
   }
   row += rowsperstrip;
  }
  _TIFFfree(buf);
  return (1);
 }
 return (0);
}




static int cpSeparate2SeparateByRow(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 tdata_t buf = _TIFFmalloc(TIFFScanlineSize(in));
 uint32 row;
 tsample_t s;

 (void) imagewidth;
 for (s = 0; s < spp; s++) {
  for (row = 0; row < imagelength; row++) {
   if (TIFFReadScanline(in, buf, row, s) < 0 && !ignore)
    goto done;
   if (TIFFWriteScanline(out, buf, row, s) < 0)
    goto bad;
  }
 }
done:
 _TIFFfree(buf);
 return (1);
bad:
 _TIFFfree(buf);
 return (0);
}




static int cpContig2SeparateByRow(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 tdata_t inbuf = _TIFFmalloc(TIFFScanlineSize(in));
 tdata_t outbuf = _TIFFmalloc(TIFFScanlineSize(out));
 register uint8 *inp, *outp;
 register uint32 n;
 uint32 row;
 tsample_t s;


 for (s = 0; s < spp; s++) {
  for (row = 0; row < imagelength; row++) {
   if (TIFFReadScanline(in, inbuf, row, 0) < 0 && !ignore)
    goto done;
   inp = ((uint8*)inbuf) + s;
   outp = (uint8*)outbuf;
   for (n = imagewidth; n-- > 0;) {
    *outp++ = *inp;
    inp += spp;
   }
   if (TIFFWriteScanline(out, outbuf, row, s) < 0)
    goto bad;
  }
 }
done:
 if (inbuf) _TIFFfree(inbuf);
 if (outbuf) _TIFFfree(outbuf);
 return (1);
bad:
 if (inbuf) _TIFFfree(inbuf);
 if (outbuf) _TIFFfree(outbuf);
 return (0);
}




static int cpSeparate2ContigByRow(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 tdata_t inbuf = _TIFFmalloc(TIFFScanlineSize(in));
 tdata_t outbuf = _TIFFmalloc(TIFFScanlineSize(out));
 register uint8 *inp, *outp;
 register uint32 n;
 uint32 row;
 tsample_t s;

 for (row = 0; row < imagelength; row++) {

  for (s = 0; s < spp; s++) {
   if (TIFFReadScanline(in, inbuf, row, s) < 0 && !ignore)
    goto done;
   inp = (uint8*)inbuf;
   outp = ((uint8*)outbuf) + s;
   for (n = imagewidth; n-- > 0;) {
    *outp = *inp++;
    outp += spp;
   }
  }
  if (TIFFWriteScanline(out, outbuf, row, 0) < 0)
   goto bad;
 }
done:
 if (inbuf) _TIFFfree(inbuf);
 if (outbuf) _TIFFfree(outbuf);
 return (1);
bad:
 if (inbuf) _TIFFfree(inbuf);
 if (outbuf) _TIFFfree(outbuf);
 return (0);
}

static void
cpStripToTile(uint8* out, uint8* in,
 uint32 rows, uint32 cols, int outskew, int inskew)
{
 while (rows-- > 0) {
  uint32 j = cols;
  while (j-- > 0)
   *out++ = *in++;
  out += outskew;
  in += inskew;
 }
}

static void
cpContigBufToSeparateBuf(uint8* out, uint8* in,
           uint32 rows, uint32 cols, int outskew, int inskew, tsample_t spp,
           int bytes_per_sample )
{
 while (rows-- > 0) {
  uint32 j = cols;
  while (j-- > 0)
                {
                        int n = bytes_per_sample;

                        while( n-- ) {
                            *out++ = *in++;
                        }
                        in += (spp-1) * bytes_per_sample;
                }
  out += outskew;
  in += inskew;
 }
}

static void
cpSeparateBufToContigBuf(uint8* out, uint8* in,
 uint32 rows, uint32 cols, int outskew, int inskew, tsample_t spp,
                         int bytes_per_sample)
{
 while (rows-- > 0) {
  uint32 j = cols;
  while (j-- > 0) {
                        int n = bytes_per_sample;

                        while( n-- ) {
                                *out++ = *in++;
                        }
                        out += (spp-1)*bytes_per_sample;
                }
  out += outskew;
  in += inskew;
 }
}

static int
cpImage(TIFF* in, TIFF* out, readFunc fin, writeFunc fout,
 uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 int status = 0;
 tdata_t buf = _TIFFmalloc(TIFFRasterScanlineSize(in) * imagelength);

 if (buf) {
  if ((*fin)(in, (uint8*)buf, imagelength, imagewidth, spp)) {
   status = (*fout)(out, (uint8*)buf,
      imagelength, imagewidth, spp);
  }
  _TIFFfree(buf);
 }
 return status;
}

static int readContigStripsIntoBuffer(TIFF* in, uint8* buf, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 tsize_t scanlinesize = TIFFScanlineSize(in);
 uint8* bufp = buf;
 uint32 row;

 (void) imagewidth; (void) spp;
 for (row = 0; row < imagelength; row++) {
  if (TIFFReadScanline(in, (tdata_t) bufp, row, 0) < 0 && !ignore)
   return 0;
  bufp += scanlinesize;
 }

 return 1;
}

static int readSeparateStripsIntoBuffer(TIFF* in, uint8* buf, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 int status = 1;
 tsize_t scanlinesize = TIFFScanlineSize(in);
 tdata_t scanline = _TIFFmalloc(scanlinesize);
 if (!scanlinesize)
  return 0;

 (void) imagewidth;
 if (scanline) {
  uint8* bufp = (uint8*) buf;
  uint32 row;
  tsample_t s;
  for (row = 0; row < imagelength; row++) {

   for (s = 0; s < spp; s++) {
    uint8* bp = bufp + s;
    tsize_t n = scanlinesize;
                                uint8* sbuf = scanline;

    if (TIFFReadScanline(in, scanline, row, s) < 0
        && !ignore) {
     status = 0;
     goto done;
    }
    while (n-- > 0)
     *bp = *sbuf++, bp += spp;
   }
   bufp += scanlinesize * spp;
  }

done:
  _TIFFfree(scanline);
  return status;
 }
}

static int readContigTilesIntoBuffer(TIFF* in, uint8* buf, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 int status = 1;
 tdata_t tilebuf = _TIFFmalloc(TIFFTileSize(in));
 uint32 imagew = TIFFScanlineSize(in);
 uint32 tilew = TIFFTileRowSize(in);
 int iskew = imagew - tilew;
 uint8* bufp = (uint8*) buf;
 uint32 tw, tl;
 uint32 row;

 (void) spp;
 if (tilebuf == 0)
  return 0;
 (void) TIFFGetField(in, 322, &tw);
 (void) TIFFGetField(in, 323, &tl);

 for (row = 0; row < imagelength; row += tl) {
  uint32 nrow = (row+tl > imagelength) ? imagelength-row : tl;
  uint32 colb = 0;
  uint32 col;

  for (col = 0; col < imagewidth; col += tw) {
   if (TIFFReadTile(in, tilebuf, col, row, 0, 0) < 0
       && !ignore) {
    status = 0;
    goto done;
   }
   if (colb + tilew > imagew) {
    uint32 width = imagew - colb;
    uint32 oskew = tilew - width;
    cpStripToTile(bufp + colb,
                                              tilebuf, nrow, width,
                                              oskew + iskew, oskew );
   } else
    cpStripToTile(bufp + colb,
                                              tilebuf, nrow, tilew,
                                              iskew, 0);
   colb += tilew;
  }
  bufp += imagew * nrow;
 }
done:
 _TIFFfree(tilebuf);
 return status;
}

static int readSeparateTilesIntoBuffer(TIFF* in, uint8* buf, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 int status = 1;
 uint32 imagew = TIFFRasterScanlineSize(in);
 uint32 tilew = TIFFTileRowSize(in);
 int iskew = imagew - tilew*spp;
 tdata_t tilebuf = _TIFFmalloc(TIFFTileSize(in));
 uint8* bufp = (uint8*) buf;
 uint32 tw, tl;
 uint32 row;
        uint16 bps, bytes_per_sample;

 if (tilebuf == 0)
  return 0;
 (void) TIFFGetField(in, 322, &tw);
 (void) TIFFGetField(in, 323, &tl);
 (void) TIFFGetField(in, 258, &bps);
        
# 1157 "tiffcp.c" 3 4
       ((
# 1157 "tiffcp.c"
       bps % 8 == 0
# 1157 "tiffcp.c" 3 4
       ) ? (void) (0) : __assert_fail (
# 1157 "tiffcp.c"
       "bps % 8 == 0"
# 1157 "tiffcp.c" 3 4
       , "tiffcp.c", 1157, __PRETTY_FUNCTION__))
# 1157 "tiffcp.c"
                             ;
        bytes_per_sample = bps/8;

 for (row = 0; row < imagelength; row += tl) {
  uint32 nrow = (row+tl > imagelength) ? imagelength-row : tl;
  uint32 colb = 0;
  uint32 col;

  for (col = 0; col < imagewidth; col += tw) {
   tsample_t s;

   for (s = 0; s < spp; s++) {
    if (TIFFReadTile(in, tilebuf, col, row, 0, s) < 0
        && !ignore) {
     status = 0;
     goto done;
    }




    if (colb + tilew*spp > imagew) {
     uint32 width = imagew - colb;
     int oskew = tilew*spp - width;
     cpSeparateBufToContigBuf(
                                            bufp+colb+s*bytes_per_sample,
         tilebuf, nrow,
                                            width/(spp*bytes_per_sample),
         oskew + iskew,
                                            oskew/spp, spp,
                                            bytes_per_sample);
    } else
     cpSeparateBufToContigBuf(
                                            bufp+colb+s*bytes_per_sample,
         tilebuf, nrow, tw,
         iskew, 0, spp,
                                            bytes_per_sample);
   }
   colb += tilew*spp;
  }
  bufp += imagew * nrow;
 }
done:
 _TIFFfree(tilebuf);
 return status;
}

static int writeBufferToContigStrips(TIFF* out, uint8* buf, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 uint32 row, rowsperstrip;
 tstrip_t strip = 0;

 (void) imagewidth; (void) spp;
 (void) TIFFGetFieldDefaulted(out, 278, &rowsperstrip);
 for (row = 0; row < imagelength; row += rowsperstrip) {
  uint32 nrows = (row+rowsperstrip > imagelength) ?
      imagelength-row : rowsperstrip;
  tsize_t stripsize = TIFFVStripSize(out, nrows);
  if (TIFFWriteEncodedStrip(out, strip++, buf, stripsize) < 0)
   return (0);
  buf += stripsize;
 }
 return (1);
}

static int writeBufferToSeparateStrips(TIFF* out, uint8* buf, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 uint32 rowsize = imagewidth * spp;
 uint32 rowsperstrip;
 tdata_t obuf = _TIFFmalloc(TIFFStripSize(out));
 tstrip_t strip = 0;
 tsample_t s;

 if (obuf == 
# 1230 "tiffcp.c" 3 4
            ((void *)0)
# 1230 "tiffcp.c"
                )
  return (0);
 (void) TIFFGetFieldDefaulted(out, 278, &rowsperstrip);
 for (s = 0; s < spp; s++) {
  uint32 row;
  for (row = 0; row < imagelength; row += rowsperstrip) {
   uint32 nrows = (row+rowsperstrip > imagelength) ?
       imagelength-row : rowsperstrip;
   tsize_t stripsize = TIFFVStripSize(out, nrows);

   cpContigBufToSeparateBuf(
       obuf, (uint8*) buf + row*rowsize + s,
       nrows, imagewidth, 0, 0, spp, 1);
   if (TIFFWriteEncodedStrip(out, strip++, obuf, stripsize) < 0) {
    _TIFFfree(obuf);
    return (0);
   }
  }
 }
 _TIFFfree(obuf);
 return (1);

}

static int writeBufferToContigTiles(TIFF* out, uint8* buf, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 uint32 imagew = TIFFScanlineSize(out);
 uint32 tilew = TIFFTileRowSize(out);
 int iskew = imagew - tilew;
 tdata_t obuf = _TIFFmalloc(TIFFTileSize(out));
 uint8* bufp = (uint8*) buf;
 uint32 tl, tw;
 uint32 row;

 (void) spp;
 if (obuf == 
# 1265 "tiffcp.c" 3 4
            ((void *)0)
# 1265 "tiffcp.c"
                )
  return (0);
 (void) TIFFGetField(out, 323, &tl);
 (void) TIFFGetField(out, 322, &tw);
 for (row = 0; row < imagelength; row += tilelength) {
  uint32 nrow = (row+tl > imagelength) ? imagelength-row : tl;
  uint32 colb = 0;
  uint32 col;

  for (col = 0; col < imagewidth; col += tw) {




   if (colb + tilew > imagew) {
    uint32 width = imagew - colb;
    int oskew = tilew - width;
    cpStripToTile(obuf, bufp + colb, nrow, width,
        oskew, oskew + iskew);
   } else
    cpStripToTile(obuf, bufp + colb, nrow, tilew,
        0, iskew);
   if (TIFFWriteTile(out, obuf, col, row, 0, 0) < 0) {
    _TIFFfree(obuf);
    return (0);
   }
   colb += tilew;
  }
  bufp += nrow * imagew;
 }
 _TIFFfree(obuf);
 return (1);
}

static int writeBufferToSeparateTiles(TIFF* out, uint8* buf, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 uint32 imagew = TIFFScanlineSize(out);
 tsize_t tilew = TIFFTileRowSize(out);
 uint32 iimagew = TIFFRasterScanlineSize(out);
 int iskew = iimagew - tilew*spp;
 tdata_t obuf = _TIFFmalloc(TIFFTileSize(out));
 uint8* bufp = (uint8*) buf;
 uint32 tl, tw;
 uint32 row;
        uint16 bps, bytes_per_sample;

 if (obuf == 
# 1311 "tiffcp.c" 3 4
            ((void *)0)
# 1311 "tiffcp.c"
                )
  return (0);
 (void) TIFFGetField(out, 323, &tl);
 (void) TIFFGetField(out, 322, &tw);
 (void) TIFFGetField(out, 258, &bps);
        
# 1316 "tiffcp.c" 3 4
       ((
# 1316 "tiffcp.c"
       bps % 8 == 0
# 1316 "tiffcp.c" 3 4
       ) ? (void) (0) : __assert_fail (
# 1316 "tiffcp.c"
       "bps % 8 == 0"
# 1316 "tiffcp.c" 3 4
       , "tiffcp.c", 1316, __PRETTY_FUNCTION__))
# 1316 "tiffcp.c"
                             ;
        bytes_per_sample = bps/8;

 for (row = 0; row < imagelength; row += tl) {
  uint32 nrow = (row+tl > imagelength) ? imagelength-row : tl;
  uint32 colb = 0;
  uint32 col;

  for (col = 0; col < imagewidth; col += tw) {
   tsample_t s;
   for (s = 0; s < spp; s++) {




    if (colb + tilew > imagew) {
     uint32 width = (imagew - colb);
     int oskew = tilew - width;

     cpContigBufToSeparateBuf(obuf,
         bufp + (colb*spp) + s,
         nrow, width/bytes_per_sample,
         oskew, (oskew*spp)+iskew, spp,
                                            bytes_per_sample);
    } else
     cpContigBufToSeparateBuf(obuf,
         bufp + (colb*spp) + s,
         nrow, tilewidth,
         0, iskew, spp,
                                            bytes_per_sample);
    if (TIFFWriteTile(out, obuf, col, row, 0, s) < 0) {
     _TIFFfree(obuf);
     return (0);
    }
   }
   colb += tilew;
  }
  bufp += nrow * iimagew;
 }
 _TIFFfree(obuf);
 return (1);
}




static int cpContigStrips2ContigTiles(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readContigStripsIntoBuffer,
     writeBufferToContigTiles,
     imagelength, imagewidth, spp);
}




static int cpContigStrips2SeparateTiles(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readContigStripsIntoBuffer,
     writeBufferToSeparateTiles,
     imagelength, imagewidth, spp);
}




static int cpSeparateStrips2ContigTiles(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readSeparateStripsIntoBuffer,
     writeBufferToContigTiles,
     imagelength, imagewidth, spp);
}




static int cpSeparateStrips2SeparateTiles(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readSeparateStripsIntoBuffer,
     writeBufferToSeparateTiles,
     imagelength, imagewidth, spp);
}




static int cpContigTiles2ContigTiles(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readContigTilesIntoBuffer,
     writeBufferToContigTiles,
     imagelength, imagewidth, spp);
}




static int cpContigTiles2SeparateTiles(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readContigTilesIntoBuffer,
     writeBufferToSeparateTiles,
     imagelength, imagewidth, spp);
}




static int cpSeparateTiles2ContigTiles(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readSeparateTilesIntoBuffer,
     writeBufferToContigTiles,
     imagelength, imagewidth, spp);
}




static int cpSeparateTiles2SeparateTiles(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readSeparateTilesIntoBuffer,
     writeBufferToSeparateTiles,
     imagelength, imagewidth, spp);
}




static int cpContigTiles2ContigStrips(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readContigTilesIntoBuffer,
     writeBufferToContigStrips,
     imagelength, imagewidth, spp);
}




static int cpContigTiles2SeparateStrips(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readContigTilesIntoBuffer,
     writeBufferToSeparateStrips,
     imagelength, imagewidth, spp);
}




static int cpSeparateTiles2ContigStrips(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readSeparateTilesIntoBuffer,
     writeBufferToContigStrips,
     imagelength, imagewidth, spp);
}




static int cpSeparateTiles2SeparateStrips(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 return cpImage(in, out,
     readSeparateTilesIntoBuffer,
     writeBufferToSeparateStrips,
     imagelength, imagewidth, spp);
}




static copyFunc
pickCopyFunc(TIFF* in, TIFF* out, uint16 bitspersample, uint16 samplesperpixel)
{
 uint16 shortv;
 uint32 w, l, tw, tl;
 int bychunk;

 (void) TIFFGetField(in, 284, &shortv);
 if (shortv != config && bitspersample != 8 && samplesperpixel > 1) {
  fprintf(
# 1503 "tiffcp.c" 3 4
         stderr
# 1503 "tiffcp.c"
               ,
"%s: Cannot handle different planar configuration w/ bits/sample != 8\n",
      TIFFFileName(in));
  return (
# 1506 "tiffcp.c" 3 4
         ((void *)0)
# 1506 "tiffcp.c"
             );
 }
 TIFFGetField(in, 256, &w);
 TIFFGetField(in, 257, &l);
        if (!(TIFFIsTiled(out) || TIFFIsTiled(in))) {
     uint32 irps = (uint32) -1L;
     TIFFGetField(in, 278, &irps);

     bychunk = !bias && (rowsperstrip == irps);
 }else{
            if (bias) {
                  fprintf(
# 1517 "tiffcp.c" 3 4
                         stderr
# 1517 "tiffcp.c"
                               ,
"%s: Cannot handle tiled configuration w/bias image\n",
                  TIFFFileName(in));
                  return (
# 1520 "tiffcp.c" 3 4
                         ((void *)0)
# 1520 "tiffcp.c"
                             );
            }
     if (TIFFIsTiled(out)) {
  if (!TIFFGetField(in, 322, &tw))
   tw = w;
  if (!TIFFGetField(in, 323, &tl))
   tl = l;
  bychunk = (tw == tilewidth && tl == tilelength);
     } else {
  TIFFGetField(in, 322, &tw);
  TIFFGetField(in, 323, &tl);
  bychunk = (tw == w && tl == rowsperstrip);
            }
 }



 switch(((long)(((shortv)<<11)|((config)<<3)|((TIFFIsTiled(in))<<2)|((TIFFIsTiled(out))<<1)|(bychunk)))) {

 case ((long)(((1)<<11)|((1)<<3)|((0)<<2)|((1)<<1)|(0))):
 case ((long)(((1)<<11)|((1)<<3)|((0)<<2)|((1)<<1)|(1))):
  return cpContigStrips2ContigTiles;
 case ((long)(((1)<<11)|((2)<<3)|((0)<<2)|((1)<<1)|(0))):
 case ((long)(((1)<<11)|((2)<<3)|((0)<<2)|((1)<<1)|(1))):
  return cpContigStrips2SeparateTiles;
        case ((long)(((2)<<11)|((1)<<3)|((0)<<2)|((1)<<1)|(0))):
        case ((long)(((2)<<11)|((1)<<3)|((0)<<2)|((1)<<1)|(1))):
  return cpSeparateStrips2ContigTiles;
 case ((long)(((2)<<11)|((2)<<3)|((0)<<2)|((1)<<1)|(0))):
 case ((long)(((2)<<11)|((2)<<3)|((0)<<2)|((1)<<1)|(1))):
  return cpSeparateStrips2SeparateTiles;

 case ((long)(((1)<<11)|((1)<<3)|((1)<<2)|((1)<<1)|(0))):
 case ((long)(((1)<<11)|((1)<<3)|((1)<<2)|((1)<<1)|(1))):
  return cpContigTiles2ContigTiles;
 case ((long)(((1)<<11)|((2)<<3)|((1)<<2)|((1)<<1)|(0))):
 case ((long)(((1)<<11)|((2)<<3)|((1)<<2)|((1)<<1)|(1))):
  return cpContigTiles2SeparateTiles;
        case ((long)(((2)<<11)|((1)<<3)|((1)<<2)|((1)<<1)|(0))):
        case ((long)(((2)<<11)|((1)<<3)|((1)<<2)|((1)<<1)|(1))):
  return cpSeparateTiles2ContigTiles;
 case ((long)(((2)<<11)|((2)<<3)|((1)<<2)|((1)<<1)|(0))):
 case ((long)(((2)<<11)|((2)<<3)|((1)<<2)|((1)<<1)|(1))):
  return cpSeparateTiles2SeparateTiles;

 case ((long)(((1)<<11)|((1)<<3)|((1)<<2)|((0)<<1)|(0))):
 case ((long)(((1)<<11)|((1)<<3)|((1)<<2)|((0)<<1)|(1))):
  return cpContigTiles2ContigStrips;
 case ((long)(((1)<<11)|((2)<<3)|((1)<<2)|((0)<<1)|(0))):
 case ((long)(((1)<<11)|((2)<<3)|((1)<<2)|((0)<<1)|(1))):
  return cpContigTiles2SeparateStrips;
        case ((long)(((2)<<11)|((1)<<3)|((1)<<2)|((0)<<1)|(0))):
        case ((long)(((2)<<11)|((1)<<3)|((1)<<2)|((0)<<1)|(1))):
  return cpSeparateTiles2ContigStrips;
 case ((long)(((2)<<11)|((2)<<3)|((1)<<2)|((0)<<1)|(0))):
 case ((long)(((2)<<11)|((2)<<3)|((1)<<2)|((0)<<1)|(1))):
  return cpSeparateTiles2SeparateStrips;

 case ((long)(((1)<<11)|((1)<<3)|((0)<<2)|((0)<<1)|(0))):
  return bias ? cpBiasedContig2Contig : cpContig2ContigByRow;
 case ((long)(((1)<<11)|((1)<<3)|((0)<<2)|((0)<<1)|(1))):
  return cpDecodedStrips;
 case ((long)(((1)<<11)|((2)<<3)|((0)<<2)|((0)<<1)|(0))):
 case ((long)(((1)<<11)|((2)<<3)|((0)<<2)|((0)<<1)|(1))):
  return cpContig2SeparateByRow;
 case ((long)(((2)<<11)|((1)<<3)|((0)<<2)|((0)<<1)|(0))):
 case ((long)(((2)<<11)|((1)<<3)|((0)<<2)|((0)<<1)|(1))):
  return cpSeparate2ContigByRow;
 case ((long)(((2)<<11)|((2)<<3)|((0)<<2)|((0)<<1)|(0))):
 case ((long)(((2)<<11)|((2)<<3)|((0)<<2)|((0)<<1)|(1))):
  return cpSeparate2SeparateByRow;
 }



 fprintf(
# 1595 "tiffcp.c" 3 4
        stderr
# 1595 "tiffcp.c"
              , "tiffcp: %s: Don't know how to copy/convert image.\n",
     TIFFFileName(in));
 return (
# 1597 "tiffcp.c" 3 4
        ((void *)0)
# 1597 "tiffcp.c"
            );
}
