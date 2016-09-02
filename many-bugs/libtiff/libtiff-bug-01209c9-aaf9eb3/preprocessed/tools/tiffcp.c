# 1 "tiffcp.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/libtiff-bug-01209c9-aaf9eb3/libtiff/tools//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "tiffcp.c"
# 41 "tiffcp.c"
# 1 "../libtiff/tif_config.h" 1
# 42 "tiffcp.c" 2

# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 361 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 365 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 366 "/usr/include/sys/cdefs.h" 2 3 4
# 362 "/usr/include/features.h" 2 3 4
# 385 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4


# 1 "/usr/include/gnu/stubs-32.h" 1 3 4
# 8 "/usr/include/gnu/stubs.h" 2 3 4
# 386 "/usr/include/features.h" 2 3 4
# 29 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 211 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
# 35 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


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
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


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
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
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
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
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
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
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
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 416 "/usr/include/libio.h" 3 4
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
# 490 "/usr/include/libio.h" 3 4
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




typedef __gnuc_va_list va_list;
# 93 "/usr/include/stdio.h" 3 4
typedef __off64_t off_t;
# 103 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;









typedef _G_fpos64_t fpos_t;


# 161 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 162 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;









extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__));



# 197 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) __asm__ ("" "tmpfile64") ;
# 208 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
# 226 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 251 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 265 "/usr/include/stdio.h" 3 4

# 282 "/usr/include/stdio.h" 3 4
extern FILE *fopen (__const char *__restrict __filename, __const char *__restrict __modes) __asm__ ("" "fopen64")

  ;
extern FILE *freopen (__const char *__restrict __filename, __const char *__restrict __modes, FILE *__restrict __stream) __asm__ ("" "freopen64")


  ;






# 305 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
# 318 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__)) ;






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

# 416 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
# 447 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__))

                      ;
# 467 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 498 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 526 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 554 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 565 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 598 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;

# 660 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;

# 732 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 776 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off64_t __off, int __whence) __asm__ ("" "fseeko64")

                  ;
extern __off64_t ftello (FILE *__stream) __asm__ ("" "ftello64");








# 801 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos) __asm__ ("" "fgetpos64")
                                          ;
extern int fsetpos (FILE *__stream, __const fpos_t *__pos) __asm__ ("" "fsetpos64")
                                                            ;






# 819 "/usr/include/stdio.h" 3 4


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
# 849 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
# 868 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 908 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));
# 929 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 36 "/usr/include/bits/stdio.h" 3 4
extern __inline int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}
# 125 "/usr/include/bits/stdio.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) feof_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline int
__attribute__ ((__nothrow__)) ferror_unlocked (FILE *__stream)
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 930 "/usr/include/stdio.h" 2 3 4
# 938 "/usr/include/stdio.h" 3 4

# 44 "tiffcp.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 323 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef long int wchar_t;
# 34 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 65 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 66 "/usr/include/bits/waitstatus.h" 2 3 4

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
# 44 "/usr/include/stdlib.h" 2 3 4
# 68 "/usr/include/stdlib.h" 3 4
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 96 "/usr/include/stdlib.h" 3 4


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


# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

# 277 "/usr/include/stdlib.h" 3 4

extern __inline double
__attribute__ ((__nothrow__)) atof (__const char *__nptr)
{
  return strtod (__nptr, (char **) ((void *)0));
}
extern __inline int
__attribute__ ((__nothrow__)) atoi (__const char *__nptr)
{
  return (int) strtol (__nptr, (char **) ((void *)0), 10);
}
extern __inline long int
__attribute__ ((__nothrow__)) atol (__const char *__nptr)
{
  return strtol (__nptr, (char **) ((void *)0), 10);
}




__extension__ extern __inline long long int
__attribute__ ((__nothrow__)) atoll (__const char *__nptr)
{
  return strtoll (__nptr, (char **) ((void *)0), 10);
}

# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;





typedef __ino64_t ino_t;
# 61 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 99 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 116 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4

# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);



# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__));


__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_major (unsigned long long int __dev)
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline unsigned int
__attribute__ ((__nothrow__)) gnu_dev_minor (unsigned long long int __dev)
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline unsigned long long int
__attribute__ ((__nothrow__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor)
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;
# 249 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt_t;



typedef __fsblkcnt64_t fsblkcnt_t;



typedef __fsfilcnt64_t fsfilcnt_t;
# 271 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 36 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;


typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;




typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  long int __align;
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
  long int __align;
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


    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;
    int __writer;
  } __data;
  char __size[32];
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
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 272 "/usr/include/sys/types.h" 2 3 4



# 321 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







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
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__));






# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 531 "/usr/include/stdlib.h" 3 4





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));
# 554 "/usr/include/stdlib.h" 3 4






extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__));
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 623 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __asm__ ("" "mkstemp64")
     __attribute__ ((__nonnull__ (1))) ;
# 645 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __asm__ ("" "mkstemps64")
                     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 712 "/usr/include/stdlib.h" 3 4





extern int system (__const char *__command) ;

# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);
# 752 "/usr/include/stdlib.h" 3 4



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 771 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

# 808 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 948 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4

# 45 "tiffcp.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4





# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 35 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 95 "/usr/include/string.h" 3 4
extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 126 "/usr/include/string.h" 3 4


extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 163 "/usr/include/string.h" 2 3 4


extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4

# 235 "/usr/include/string.h" 3 4
extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 262 "/usr/include/string.h" 3 4
extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


# 281 "/usr/include/string.h" 3 4



extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 314 "/usr/include/string.h" 3 4
extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 342 "/usr/include/string.h" 3 4
extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));
# 397 "/usr/include/string.h" 3 4


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

# 427 "/usr/include/string.h" 3 4
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__))

                        __attribute__ ((__nonnull__ (2)));
# 445 "/usr/include/string.h" 3 4
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 489 "/usr/include/string.h" 3 4
extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 517 "/usr/include/string.h" 3 4
extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
# 536 "/usr/include/string.h" 3 4
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 559 "/usr/include/string.h" 3 4
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__));


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 634 "/usr/include/string.h" 3 4
# 1 "/usr/include/bits/string.h" 1 3 4
# 635 "/usr/include/string.h" 2 3 4


# 1 "/usr/include/bits/string2.h" 1 3 4
# 394 "/usr/include/bits/string2.h" 3 4
extern void *__rawmemchr (const void *__s, int __c);
# 969 "/usr/include/bits/string2.h" 3 4
extern __inline size_t __strcspn_c1 (__const char *__s, int __reject);
extern __inline size_t
__strcspn_c1 (__const char *__s, int __reject)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline size_t __strcspn_c2 (__const char *__s, int __reject1,
         int __reject2);
extern __inline size_t
__strcspn_c2 (__const char *__s, int __reject1, int __reject2)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline size_t __strcspn_c3 (__const char *__s, int __reject1,
         int __reject2, int __reject3);
extern __inline size_t
__strcspn_c3 (__const char *__s, int __reject1, int __reject2,
       int __reject3)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
  && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}
# 1045 "/usr/include/bits/string2.h" 3 4
extern __inline size_t __strspn_c1 (__const char *__s, int __accept);
extern __inline size_t
__strspn_c1 (__const char *__s, int __accept)
{
  register size_t __result = 0;

  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline size_t __strspn_c2 (__const char *__s, int __accept1,
        int __accept2);
extern __inline size_t
__strspn_c2 (__const char *__s, int __accept1, int __accept2)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline size_t __strspn_c3 (__const char *__s, int __accept1,
        int __accept2, int __accept3);
extern __inline size_t
__strspn_c3 (__const char *__s, int __accept1, int __accept2, int __accept3)
{
  register size_t __result = 0;

  while (__s[__result] == __accept1 || __s[__result] == __accept2
  || __s[__result] == __accept3)
    ++__result;
  return __result;
}
# 1121 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strpbrk_c2 (__const char *__s, int __accept1,
         int __accept2);
extern __inline char *
__strpbrk_c2 (__const char *__s, int __accept1, int __accept2)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}

extern __inline char *__strpbrk_c3 (__const char *__s, int __accept1,
         int __accept2, int __accept3);
extern __inline char *
__strpbrk_c3 (__const char *__s, int __accept1, int __accept2,
       int __accept3)
{

  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
  && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0) : (char *) (size_t) __s;
}
# 1172 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void *)0))
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  __result = ((void *)0);
  if (*__s != '\0')
    {
      __result = __s++;
      while (*__s != '\0')
 if (*__s++ == __sep)
   {
     __s[-1] = '\0';
     break;
   }
    }
  *__nextp = __s;
  return __result;
}
# 1204 "/usr/include/bits/string2.h" 3 4
extern char *__strsep_g (char **__stringp, __const char *__delim);
# 1222 "/usr/include/bits/string2.h" 3 4
extern __inline char *__strsep_1c (char **__s, char __reject);
extern __inline char *
__strsep_1c (char **__s, char __reject)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0) && (*__s = (__extension__ (__builtin_constant_p (__reject) && !__builtin_constant_p (__retval) && (__reject) == '\0' ? (char *) __rawmemchr (__retval, __reject) : __builtin_strchr (__retval, __reject)))) != ((void *)0))
    *(*__s)++ = '\0';
  return __retval;
}

extern __inline char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}

extern __inline char *__strsep_3c (char **__s, char __reject1, char __reject2,
       char __reject3);
extern __inline char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  register char *__retval = *__s;
  if (__retval != ((void *)0))
    {
      register char *__cp = __retval;
      while (1)
 {
   if (*__cp == '\0')
     {
       __cp = ((void *)0);
   break;
     }
   if (*__cp == __reject1 || *__cp == __reject2 || *__cp == __reject3)
     {
       *__cp++ = '\0';
       break;
     }
   ++__cp;
 }
      *__s = __cp;
    }
  return __retval;
}
# 1303 "/usr/include/bits/string2.h" 3 4
extern char *__strdup (__const char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 1322 "/usr/include/bits/string2.h" 3 4
extern char *__strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 638 "/usr/include/string.h" 2 3 4
# 646 "/usr/include/string.h" 3 4

# 46 "tiffcp.c" 2

# 1 "/usr/include/ctype.h" 1 3 4
# 30 "/usr/include/ctype.h" 3 4

# 48 "/usr/include/ctype.h" 3 4
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
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
# 96 "/usr/include/ctype.h" 3 4






extern int isalnum (int) __attribute__ ((__nothrow__));
extern int isalpha (int) __attribute__ ((__nothrow__));
extern int iscntrl (int) __attribute__ ((__nothrow__));
extern int isdigit (int) __attribute__ ((__nothrow__));
extern int islower (int) __attribute__ ((__nothrow__));
extern int isgraph (int) __attribute__ ((__nothrow__));
extern int isprint (int) __attribute__ ((__nothrow__));
extern int ispunct (int) __attribute__ ((__nothrow__));
extern int isspace (int) __attribute__ ((__nothrow__));
extern int isupper (int) __attribute__ ((__nothrow__));
extern int isxdigit (int) __attribute__ ((__nothrow__));



extern int tolower (int __c) __attribute__ ((__nothrow__));


extern int toupper (int __c) __attribute__ ((__nothrow__));








extern int isblank (int) __attribute__ ((__nothrow__));


# 142 "/usr/include/ctype.h" 3 4
extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
# 190 "/usr/include/ctype.h" 3 4
extern __inline int
__attribute__ ((__nothrow__)) tolower (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_tolower_loc ())[__c] : __c;
}

extern __inline int
__attribute__ ((__nothrow__)) toupper (int __c)
{
  return __c >= -128 && __c < 256 ? (*__ctype_toupper_loc ())[__c] : __c;
}
# 247 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
# 323 "/usr/include/ctype.h" 3 4

# 48 "tiffcp.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4



extern void __assert_fail (__const char *__assertion, __const char *__file,
      unsigned int __line, __const char *__function)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
      unsigned int __line,
      __const char *__function)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



# 49 "tiffcp.c" 2


# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4

# 203 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 204 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 208 "/usr/include/unistd.h" 2 3 4
# 227 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 228 "/usr/include/unistd.h" 2 3 4
# 256 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;
# 268 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 305 "/usr/include/unistd.h" 3 4
extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off64_t lseek (int __fd, __off64_t __offset, int __whence) __asm__ ("" "lseek64") __attribute__ ((__nothrow__))

             ;
# 350 "/usr/include/unistd.h" 3 4
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 385 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pread64")

                    ;
extern ssize_t pwrite (int __fd, __const void *__buf, size_t __nbytes, __off64_t __offset) __asm__ ("" "pwrite64")

                     ;
# 414 "/usr/include/unistd.h" 3 4
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__)) ;
# 429 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__));
# 441 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__));






extern int usleep (__useconds_t __useconds);
# 466 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__)) ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__)) ;
# 508 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__)) ;
# 522 "/usr/include/unistd.h" 3 4
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__)) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__));
# 540 "/usr/include/unistd.h" 3 4
extern char **__environ;







extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern int execv (__const char *__path, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (__const char *__path, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (__const char *__file, char *__const __argv[])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
# 595 "/usr/include/unistd.h" 3 4
extern int nice (int __inc) __attribute__ ((__nothrow__)) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 26 "/usr/include/bits/confname.h" 3 4
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
# 607 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__));


extern long int sysconf (int __name) __attribute__ ((__nothrow__));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__));




extern __pid_t getpid (void) __attribute__ ((__nothrow__));


extern __pid_t getppid (void) __attribute__ ((__nothrow__));




extern __pid_t getpgrp (void) __attribute__ ((__nothrow__));
# 643 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__));
# 669 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) __attribute__ ((__nothrow__));
# 686 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) __attribute__ ((__nothrow__));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__));



extern __uid_t getuid (void) __attribute__ ((__nothrow__));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__));


extern __gid_t getgid (void) __attribute__ ((__nothrow__));


extern __gid_t getegid (void) __attribute__ ((__nothrow__));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__)) ;
# 719 "/usr/include/unistd.h" 3 4
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__));




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__));




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__));






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__));




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__));




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__));
# 775 "/usr/include/unistd.h" 3 4
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__));





extern int ttyslot (void) __attribute__ ((__nothrow__));




extern int link (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (__const char *__from, __const char *__to)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
# 890 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__));
# 891 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__)) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__));


extern int revoke (__const char *__file) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) __attribute__ ((__nothrow__));



extern char *getusershell (void) __attribute__ ((__nothrow__));
extern void endusershell (void) __attribute__ ((__nothrow__));
extern void setusershell (void) __attribute__ ((__nothrow__));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__)) ;






extern int chroot (__const char *__path) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
# 976 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__));





extern int getpagesize (void) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__));
# 1011 "/usr/include/unistd.h" 3 4
extern int truncate (__const char *__file, __off64_t __length) __asm__ ("" "truncate64") __attribute__ ((__nothrow__))

                  __attribute__ ((__nonnull__ (1))) ;
# 1029 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off64_t __length) __asm__ ("" "ftruncate64") __attribute__ ((__nothrow__))
                        ;
# 1047 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) __attribute__ ((__nothrow__)) ;





extern void *sbrk (intptr_t __delta) __attribute__ ((__nothrow__));
# 1068 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__));
# 1094 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off64_t __len) __asm__ ("" "lockf64")
                       ;
# 1122 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);
# 1151 "/usr/include/unistd.h" 3 4
extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
# 1160 "/usr/include/unistd.h" 3 4

# 52 "tiffcp.c" 2


# 1 "../libtiff/tiffio.h" 1
# 33 "../libtiff/tiffio.h"
# 1 "../libtiff/tiff.h" 1
# 30 "../libtiff/tiff.h"
# 1 "../libtiff/tiffconf.h" 1
# 31 "../libtiff/tiff.h" 2
# 68 "../libtiff/tiff.h"
typedef signed char int8;
typedef unsigned char uint8;

typedef signed short int16;
typedef unsigned short uint16;

typedef signed int int32;
typedef unsigned int uint32;

typedef signed long long int64;
typedef unsigned long long uint64;
# 88 "../libtiff/tiff.h"
typedef int uint16_vap;




typedef struct {
 uint16 tiff_magic;
 uint16 tiff_version;
} TIFFHeaderCommon;
typedef struct {
 uint16 tiff_magic;
 uint16 tiff_version;
 uint32 tiff_diroff;
} TIFFHeaderClassic;
typedef struct {
 uint16 tiff_magic;
 uint16 tiff_version;
 uint16 tiff_offsetsize;
 uint16 tiff_unused;
 uint64 tiff_diroff;
} TIFFHeaderBig;
# 125 "../libtiff/tiff.h"
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
 TIFF_IFD = 13,
 TIFF_LONG8 = 16,
 TIFF_SLONG8 = 17,
 TIFF_IFD8 = 18
} TIFFDataType;
# 34 "../libtiff/tiffio.h" 2
# 1 "../libtiff/tiffvers.h" 1
# 35 "../libtiff/tiffio.h" 2





typedef struct tiff TIFF;
# 67 "../libtiff/tiffio.h"
typedef signed long tmsize_t;
typedef uint64 toff_t;


typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrile_t;
typedef tstrile_t tstrip_t;
typedef tstrile_t ttile_t;
typedef tmsize_t tsize_t;
typedef void* tdata_t;
# 106 "../libtiff/tiffio.h"
typedef void* thandle_t;
# 138 "../libtiff/tiffio.h"
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
# 190 "../libtiff/tiffio.h"
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

 uint8* UaToAa;
 uint8* Bitdepth16To8;

 int row_offset;
 int col_offset;
};
# 251 "../libtiff/tiffio.h"
typedef int (*TIFFInitMethod)(TIFF*, int);
typedef struct {
 char* name;
 uint16 scheme;
 TIFFInitMethod init;
} TIFFCodec;


# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 260 "../libtiff/tiffio.h" 2
# 273 "../libtiff/tiffio.h"
typedef void (*TIFFErrorHandler)(const char*, const char*, va_list);
typedef void (*TIFFErrorHandlerExt)(thandle_t, const char*, const char*, va_list);
typedef tmsize_t (*TIFFReadWriteProc)(thandle_t, void*, tmsize_t);
typedef toff_t (*TIFFSeekProc)(thandle_t, toff_t, int);
typedef int (*TIFFCloseProc)(thandle_t);
typedef toff_t (*TIFFSizeProc)(thandle_t);
typedef int (*TIFFMapFileProc)(thandle_t, void** base, toff_t* size);
typedef void (*TIFFUnmapFileProc)(thandle_t, void* base, toff_t size);
typedef void (*TIFFExtendProc)(TIFF*);

extern const char* TIFFGetVersion(void);

extern const TIFFCodec* TIFFFindCODEC(uint16);
extern TIFFCodec* TIFFRegisterCODEC(uint16, const char*, TIFFInitMethod);
extern void TIFFUnRegisterCODEC(TIFFCodec*);
extern int TIFFIsCODECConfigured(uint16);
extern TIFFCodec* TIFFGetConfiguredCODECs(void);





extern void* _TIFFmalloc(tmsize_t s);
extern void* _TIFFrealloc(void* p, tmsize_t s);
extern void _TIFFmemset(void* p, int v, tmsize_t c);
extern void _TIFFmemcpy(void* d, const void* s, tmsize_t c);
extern int _TIFFmemcmp(const void* p1, const void* p2, tmsize_t c);
extern void _TIFFfree(void* p);




extern int TIFFGetTagListCount( TIFF * );
extern uint32 TIFFGetTagListEntry( TIFF *, int tag_index );
# 315 "../libtiff/tiffio.h"
typedef struct _TIFFField TIFFField;
typedef struct _TIFFFieldArray TIFFFieldArray;

extern const TIFFField* TIFFFindField(TIFF *, uint32, TIFFDataType);
extern const TIFFField* TIFFFieldWithTag(TIFF*, uint32);
extern const TIFFField* TIFFFieldWithName(TIFF*, const char *);

typedef int (*TIFFVSetMethod)(TIFF*, uint32, va_list);
typedef int (*TIFFVGetMethod)(TIFF*, uint32, va_list);
typedef void (*TIFFPrintMethod)(TIFF*, FILE*, long);

typedef struct {
    TIFFVSetMethod vsetfield;
    TIFFVGetMethod vgetfield;
    TIFFPrintMethod printdir;
} TIFFTagMethods;

extern TIFFTagMethods *TIFFAccessTagMethods(TIFF *);
extern void *TIFFGetClientInfo(TIFF *, const char *);
extern void TIFFSetClientInfo(TIFF *, void *, const char *);

extern void TIFFCleanup(TIFF* tif);
extern void TIFFClose(TIFF* tif);
extern int TIFFFlush(TIFF* tif);
extern int TIFFFlushData(TIFF* tif);
extern int TIFFGetField(TIFF* tif, uint32 tag, ...);
extern int TIFFVGetField(TIFF* tif, uint32 tag, va_list ap);
extern int TIFFGetFieldDefaulted(TIFF* tif, uint32 tag, ...);
extern int TIFFVGetFieldDefaulted(TIFF* tif, uint32 tag, va_list ap);
extern int TIFFReadDirectory(TIFF* tif);
extern int TIFFReadCustomDirectory(TIFF* tif, toff_t diroff, const TIFFFieldArray* infoarray);
extern int TIFFReadEXIFDirectory(TIFF* tif, toff_t diroff);
extern uint64 TIFFScanlineSize64(TIFF* tif);
extern tmsize_t TIFFScanlineSize(TIFF* tif);
extern uint64 TIFFRasterScanlineSize64(TIFF* tif);
extern tmsize_t TIFFRasterScanlineSize(TIFF* tif);
extern uint64 TIFFStripSize64(TIFF* tif);
extern tmsize_t TIFFStripSize(TIFF* tif);
extern uint64 TIFFRawStripSize64(TIFF* tif, uint32 strip);
extern tmsize_t TIFFRawStripSize(TIFF* tif, uint32 strip);
extern uint64 TIFFVStripSize64(TIFF* tif, uint32 nrows);
extern tmsize_t TIFFVStripSize(TIFF* tif, uint32 nrows);
extern uint64 TIFFTileRowSize64(TIFF* tif);
extern tmsize_t TIFFTileRowSize(TIFF* tif);
extern uint64 TIFFTileSize64(TIFF* tif);
extern tmsize_t TIFFTileSize(TIFF* tif);
extern uint64 TIFFVTileSize64(TIFF* tif, uint32 nrows);
extern tmsize_t TIFFVTileSize(TIFF* tif, uint32 nrows);
extern uint32 TIFFDefaultStripSize(TIFF* tif, uint32 request);
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
extern uint16 TIFFCurrentDirectory(TIFF*);
extern uint16 TIFFNumberOfDirectories(TIFF*);
extern uint64 TIFFCurrentDirOffset(TIFF*);
extern uint32 TIFFCurrentStrip(TIFF*);
extern uint32 TIFFCurrentTile(TIFF* tif);
extern int TIFFReadBufferSetup(TIFF* tif, void* bp, tmsize_t size);
extern int TIFFWriteBufferSetup(TIFF* tif, void* bp, tmsize_t size);
extern int TIFFSetupStrips(TIFF *);
extern int TIFFWriteCheck(TIFF*, int, const char *);
extern void TIFFFreeDirectory(TIFF*);
extern int TIFFCreateDirectory(TIFF*);
extern int TIFFLastDirectory(TIFF*);
extern int TIFFSetDirectory(TIFF*, uint16);
extern int TIFFSetSubDirectory(TIFF*, uint64);
extern int TIFFUnlinkDirectory(TIFF*, uint16);
extern int TIFFSetField(TIFF*, uint32, ...);
extern int TIFFVSetField(TIFF*, uint32, va_list);
extern int TIFFUnsetField(TIFF*, uint32);
extern int TIFFWriteDirectory(TIFF *);
extern int TIFFCheckpointDirectory(TIFF *);
extern int TIFFRewriteDirectory(TIFF *);
# 414 "../libtiff/tiffio.h"
extern void TIFFPrintDirectory(TIFF*, FILE*, long);
extern int TIFFReadScanline(TIFF* tif, void* buf, uint32 row, uint16 sample);
extern int TIFFWriteScanline(TIFF* tif, void* buf, uint32 row, uint16 sample);
extern int TIFFReadRGBAImage(TIFF*, uint32, uint32, uint32*, int);
extern int TIFFReadRGBAImageOriented(TIFF*, uint32, uint32, uint32*, int, int);


extern int TIFFReadRGBAStrip(TIFF*, uint32, uint32 * );
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
extern void TIFFError(const char*, const char*, ...) __attribute__((format (printf,2,3)));
extern void TIFFErrorExt(thandle_t, const char*, const char*, ...) __attribute__((format (printf,3,4)));
extern void TIFFWarning(const char*, const char*, ...) __attribute__((format (printf,2,3)));
extern void TIFFWarningExt(thandle_t, const char*, const char*, ...) __attribute__((format (printf,3,4)));
extern TIFFErrorHandler TIFFSetErrorHandler(TIFFErrorHandler);
extern TIFFErrorHandlerExt TIFFSetErrorHandlerExt(TIFFErrorHandlerExt);
extern TIFFErrorHandler TIFFSetWarningHandler(TIFFErrorHandler);
extern TIFFErrorHandlerExt TIFFSetWarningHandlerExt(TIFFErrorHandlerExt);
extern TIFFExtendProc TIFFSetTagExtender(TIFFExtendProc);
extern uint32 TIFFComputeTile(TIFF* tif, uint32 x, uint32 y, uint32 z, uint16 s);
extern int TIFFCheckTile(TIFF* tif, uint32 x, uint32 y, uint32 z, uint16 s);
extern uint32 TIFFNumberOfTiles(TIFF*);
extern tmsize_t TIFFReadTile(TIFF* tif, void* buf, uint32 x, uint32 y, uint32 z, uint16 s);
extern tmsize_t TIFFWriteTile(TIFF* tif, void* buf, uint32 x, uint32 y, uint32 z, uint16 s);
extern uint32 TIFFComputeStrip(TIFF*, uint32, uint16);
extern uint32 TIFFNumberOfStrips(TIFF*);
extern tmsize_t TIFFReadEncodedStrip(TIFF* tif, uint32 strip, void* buf, tmsize_t size);
extern tmsize_t TIFFReadRawStrip(TIFF* tif, uint32 strip, void* buf, tmsize_t size);
extern tmsize_t TIFFReadEncodedTile(TIFF* tif, uint32 tile, void* buf, tmsize_t size);
extern tmsize_t TIFFReadRawTile(TIFF* tif, uint32 tile, void* buf, tmsize_t size);
extern tmsize_t TIFFWriteEncodedStrip(TIFF* tif, uint32 strip, void* data, tmsize_t cc);
extern tmsize_t TIFFWriteRawStrip(TIFF* tif, uint32 strip, void* data, tmsize_t cc);
extern tmsize_t TIFFWriteEncodedTile(TIFF* tif, uint32 tile, void* data, tmsize_t cc);
extern tmsize_t TIFFWriteRawTile(TIFF* tif, uint32 tile, void* data, tmsize_t cc);
extern int TIFFDataWidth(TIFFDataType);
extern void TIFFSetWriteOffset(TIFF* tif, toff_t off);
extern void TIFFSwabShort(uint16*);
extern void TIFFSwabLong(uint32*);
extern void TIFFSwabLong8(uint64*);
extern void TIFFSwabFloat(float*);
extern void TIFFSwabDouble(double*);
extern void TIFFSwabArrayOfShort(uint16* wp, tmsize_t n);
extern void TIFFSwabArrayOfTriples(uint8* tp, tmsize_t n);
extern void TIFFSwabArrayOfLong(uint32* lp, tmsize_t n);
extern void TIFFSwabArrayOfLong8(uint64* lp, tmsize_t n);
extern void TIFFSwabArrayOfFloat(float* fp, tmsize_t n);
extern void TIFFSwabArrayOfDouble(double* dp, tmsize_t n);
extern void TIFFReverseBits(uint8* cp, tmsize_t n);
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

extern int TIFFMergeFieldInfo(TIFF*, const TIFFFieldInfo[], uint32);
extern const TIFFFieldInfo* TIFFFindFieldInfo(TIFF*, uint32, TIFFDataType);
extern const TIFFFieldInfo* TIFFFindFieldInfoByName(TIFF* , const char *,
          TIFFDataType);
# 55 "tiffcp.c" 2
# 70 "tiffcp.c"
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
static TIFF* bias = ((void *)0);
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

    if ((*imageSpec)[1] == '\0') *imageSpec = ((void *)0);
   }else{
    fprintf (stderr,
        "Expected a %c separated image # list after %s\n",
        comma, TIFFFileName (tif));
    exit (-4);
   }
  }
  if (TIFFSetDirectory (tif, nextImage)) return 1;
  fprintf (stderr, "%s%c%d not found!\n",
      TIFFFileName(tif), comma, (int) nextImage);
 }
 return 0;
}


static TIFF* openSrcImage (char **imageSpec)





{
 TIFF *tif;
 char *fn = *imageSpec;
 *imageSpec = (__extension__ (__builtin_constant_p (comma) && !__builtin_constant_p (fn) && (comma) == '\0' ? (char *) __rawmemchr (fn, comma) : __builtin_strchr (fn, comma)));
 if (*imageSpec) {
  **imageSpec = '\0';
  tif = TIFFOpen (fn, "r");

  if (!(*imageSpec)[1]) {*imageSpec = ((void *)0); return tif;}
  if (tif) {
   **imageSpec = comma;
   if (!nextSrcImage(tif, imageSpec)) {
    TIFFClose (tif);
    tif = ((void *)0);
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
 uint64 diroff = 0;
 TIFF* in;
 TIFF* out;
 char mode[10];
 char* mp = mode;
 int c;
 extern int optind;
 extern char* optarg;

 *mp++ = 'w';
 *mp = '\0';
 while ((c = getopt(argc, argv, ",:b:c:f:l:o:z:p:r:w:aistBLMC8")) != -1)
  switch (c) {
  case ',':
   if (optarg[0] != '=') usage();
   comma = optarg[1];
   break;
  case 'b':
   if (bias) {
    fputs ("Only 1 bias image may be specified\n", stderr);
    exit (-2);
   }
   {
    uint16 samples = (uint16) -1;
    char **biasFn = &optarg;
    bias = openSrcImage (biasFn);
    if (!bias) exit (-5);
    if (TIFFIsTiled (bias)) {
     fputs ("Bias image must be organized in strips\n", stderr);
     exit (-7);
    }
    TIFFGetField(bias, 277, &samples);
    if (samples != 1) {
     fputs ("Bias image must be monochrome\n", stderr);
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
   if ((__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (optarg) && __builtin_constant_p ("lsb2msb") && (__s1_len = strlen (optarg), __s2_len = strlen ("lsb2msb"), (!((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("lsb2msb") + 1) - (size_t)(const void *)("lsb2msb") == 1) || __s2_len >= 4)) ? __builtin_strcmp (optarg, "lsb2msb") : (__builtin_constant_p (optarg) && ((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) && (__s1_len = strlen (optarg), __s1_len < 4) ? (__builtin_constant_p ("lsb2msb") && ((size_t)(const void *)(("lsb2msb") + 1) - (size_t)(const void *)("lsb2msb") == 1) ? __builtin_strcmp (optarg, "lsb2msb") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("lsb2msb"); register int __result = (((__const unsigned char *) (__const char *) (optarg))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (optarg))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (optarg))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (optarg))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("lsb2msb") && ((size_t)(const void *)(("lsb2msb") + 1) - (size_t)(const void *)("lsb2msb") == 1) && (__s2_len = strlen ("lsb2msb"), __s2_len < 4) ? (__builtin_constant_p (optarg) && ((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) ? __builtin_strcmp (optarg, "lsb2msb") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (optarg); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("lsb2msb"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("lsb2msb"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("lsb2msb"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("lsb2msb"))[3]); } } __result; }))) : __builtin_strcmp (optarg, "lsb2msb")))); }) == 0))
    deffillorder = 2;
   else if ((__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (optarg) && __builtin_constant_p ("msb2lsb") && (__s1_len = strlen (optarg), __s2_len = strlen ("msb2lsb"), (!((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("msb2lsb") + 1) - (size_t)(const void *)("msb2lsb") == 1) || __s2_len >= 4)) ? __builtin_strcmp (optarg, "msb2lsb") : (__builtin_constant_p (optarg) && ((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) && (__s1_len = strlen (optarg), __s1_len < 4) ? (__builtin_constant_p ("msb2lsb") && ((size_t)(const void *)(("msb2lsb") + 1) - (size_t)(const void *)("msb2lsb") == 1) ? __builtin_strcmp (optarg, "msb2lsb") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("msb2lsb"); register int __result = (((__const unsigned char *) (__const char *) (optarg))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (optarg))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (optarg))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (optarg))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("msb2lsb") && ((size_t)(const void *)(("msb2lsb") + 1) - (size_t)(const void *)("msb2lsb") == 1) && (__s2_len = strlen ("msb2lsb"), __s2_len < 4) ? (__builtin_constant_p (optarg) && ((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) ? __builtin_strcmp (optarg, "msb2lsb") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (optarg); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("msb2lsb"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("msb2lsb"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("msb2lsb"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("msb2lsb"))[3]); } } __result; }))) : __builtin_strcmp (optarg, "msb2lsb")))); }) == 0))
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
   diroff = strtoul(optarg, ((void *)0), 0);
   break;
  case 'p':
   if ((__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (optarg) && __builtin_constant_p ("separate") && (__s1_len = strlen (optarg), __s2_len = strlen ("separate"), (!((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("separate") + 1) - (size_t)(const void *)("separate") == 1) || __s2_len >= 4)) ? __builtin_strcmp (optarg, "separate") : (__builtin_constant_p (optarg) && ((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) && (__s1_len = strlen (optarg), __s1_len < 4) ? (__builtin_constant_p ("separate") && ((size_t)(const void *)(("separate") + 1) - (size_t)(const void *)("separate") == 1) ? __builtin_strcmp (optarg, "separate") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("separate"); register int __result = (((__const unsigned char *) (__const char *) (optarg))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (optarg))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (optarg))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (optarg))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("separate") && ((size_t)(const void *)(("separate") + 1) - (size_t)(const void *)("separate") == 1) && (__s2_len = strlen ("separate"), __s2_len < 4) ? (__builtin_constant_p (optarg) && ((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) ? __builtin_strcmp (optarg, "separate") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (optarg); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("separate"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("separate"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("separate"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("separate"))[3]); } } __result; }))) : __builtin_strcmp (optarg, "separate")))); }) == 0))
    defconfig = 2;
   else if ((__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (optarg) && __builtin_constant_p ("contig") && (__s1_len = strlen (optarg), __s2_len = strlen ("contig"), (!((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("contig") + 1) - (size_t)(const void *)("contig") == 1) || __s2_len >= 4)) ? __builtin_strcmp (optarg, "contig") : (__builtin_constant_p (optarg) && ((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) && (__s1_len = strlen (optarg), __s1_len < 4) ? (__builtin_constant_p ("contig") && ((size_t)(const void *)(("contig") + 1) - (size_t)(const void *)("contig") == 1) ? __builtin_strcmp (optarg, "contig") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("contig"); register int __result = (((__const unsigned char *) (__const char *) (optarg))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (optarg))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (optarg))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (optarg))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("contig") && ((size_t)(const void *)(("contig") + 1) - (size_t)(const void *)("contig") == 1) && (__s2_len = strlen ("contig"), __s2_len < 4) ? (__builtin_constant_p (optarg) && ((size_t)(const void *)((optarg) + 1) - (size_t)(const void *)(optarg) == 1) ? __builtin_strcmp (optarg, "contig") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (optarg); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("contig"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("contig"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("contig"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("contig"))[3]); } } __result; }))) : __builtin_strcmp (optarg, "contig")))); }) == 0))
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
  case '8':
   *mp++ = '8'; *mp = '\0';
   break;
  case '?':
   usage();

  }
 if (argc - optind < 2)
  usage();
 out = TIFFOpen(argv[argc-1], mode);
 if (out == ((void *)0))
  return (-2);
 if ((argc - optind) == 2)
  pageNum = -1;
 for (; optind < argc-1 ; optind++) {
  char *imageCursor = argv[optind];
  in = openSrcImage (&imageCursor);
  if (in == ((void *)0))
   return (-3);
  if (diroff != 0 && !TIFFSetSubDirectory(in, diroff)) {
   TIFFError(TIFFFileName(in),
       "Error, setting subdirectory at " "%llu", diroff);
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
 if( (cp = (__extension__ (__builtin_constant_p (':') && !__builtin_constant_p (cp) && (':') == '\0' ? (char *) __rawmemchr (cp, ':') : __builtin_strchr (cp, ':')))) ) {
  if (defg3opts == (uint32) -1)
   defg3opts = 0;
  do {
   cp++;
   if (((__extension__ (__builtin_constant_p (2) && ((__builtin_constant_p (cp) && strlen (cp) < ((size_t) (2))) || (__builtin_constant_p ("1d") && strlen ("1d") < ((size_t) (2)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (cp) && __builtin_constant_p ("1d") && (__s1_len = strlen (cp), __s2_len = strlen ("1d"), (!((size_t)(const void *)((cp) + 1) - (size_t)(const void *)(cp) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("1d") + 1) - (size_t)(const void *)("1d") == 1) || __s2_len >= 4)) ? __builtin_strcmp (cp, "1d") : (__builtin_constant_p (cp) && ((size_t)(const void *)((cp) + 1) - (size_t)(const void *)(cp) == 1) && (__s1_len = strlen (cp), __s1_len < 4) ? (__builtin_constant_p ("1d") && ((size_t)(const void *)(("1d") + 1) - (size_t)(const void *)("1d") == 1) ? __builtin_strcmp (cp, "1d") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("1d"); register int __result = (((__const unsigned char *) (__const char *) (cp))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (cp))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (cp))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (cp))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("1d") && ((size_t)(const void *)(("1d") + 1) - (size_t)(const void *)("1d") == 1) && (__s2_len = strlen ("1d"), __s2_len < 4) ? (__builtin_constant_p (cp) && ((size_t)(const void *)((cp) + 1) - (size_t)(const void *)(cp) == 1) ? __builtin_strcmp (cp, "1d") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (cp); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("1d"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("1d"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("1d"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("1d"))[3]); } } __result; }))) : __builtin_strcmp (cp, "1d")))); }) : strncmp (cp, "1d", 2))) == 0))
    defg3opts &= ~0x1;
   else if (((__extension__ (__builtin_constant_p (2) && ((__builtin_constant_p (cp) && strlen (cp) < ((size_t) (2))) || (__builtin_constant_p ("2d") && strlen ("2d") < ((size_t) (2)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (cp) && __builtin_constant_p ("2d") && (__s1_len = strlen (cp), __s2_len = strlen ("2d"), (!((size_t)(const void *)((cp) + 1) - (size_t)(const void *)(cp) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("2d") + 1) - (size_t)(const void *)("2d") == 1) || __s2_len >= 4)) ? __builtin_strcmp (cp, "2d") : (__builtin_constant_p (cp) && ((size_t)(const void *)((cp) + 1) - (size_t)(const void *)(cp) == 1) && (__s1_len = strlen (cp), __s1_len < 4) ? (__builtin_constant_p ("2d") && ((size_t)(const void *)(("2d") + 1) - (size_t)(const void *)("2d") == 1) ? __builtin_strcmp (cp, "2d") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("2d"); register int __result = (((__const unsigned char *) (__const char *) (cp))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (cp))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (cp))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (cp))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("2d") && ((size_t)(const void *)(("2d") + 1) - (size_t)(const void *)("2d") == 1) && (__s2_len = strlen ("2d"), __s2_len < 4) ? (__builtin_constant_p (cp) && ((size_t)(const void *)((cp) + 1) - (size_t)(const void *)(cp) == 1) ? __builtin_strcmp (cp, "2d") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (cp); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("2d"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("2d"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("2d"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("2d"))[3]); } } __result; }))) : __builtin_strcmp (cp, "2d")))); }) : strncmp (cp, "2d", 2))) == 0))
    defg3opts |= 0x1;
   else if (((__extension__ (__builtin_constant_p (4) && ((__builtin_constant_p (cp) && strlen (cp) < ((size_t) (4))) || (__builtin_constant_p ("fill") && strlen ("fill") < ((size_t) (4)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (cp) && __builtin_constant_p ("fill") && (__s1_len = strlen (cp), __s2_len = strlen ("fill"), (!((size_t)(const void *)((cp) + 1) - (size_t)(const void *)(cp) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("fill") + 1) - (size_t)(const void *)("fill") == 1) || __s2_len >= 4)) ? __builtin_strcmp (cp, "fill") : (__builtin_constant_p (cp) && ((size_t)(const void *)((cp) + 1) - (size_t)(const void *)(cp) == 1) && (__s1_len = strlen (cp), __s1_len < 4) ? (__builtin_constant_p ("fill") && ((size_t)(const void *)(("fill") + 1) - (size_t)(const void *)("fill") == 1) ? __builtin_strcmp (cp, "fill") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("fill"); register int __result = (((__const unsigned char *) (__const char *) (cp))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (cp))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (cp))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (cp))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("fill") && ((size_t)(const void *)(("fill") + 1) - (size_t)(const void *)("fill") == 1) && (__s2_len = strlen ("fill"), __s2_len < 4) ? (__builtin_constant_p (cp) && ((size_t)(const void *)((cp) + 1) - (size_t)(const void *)(cp) == 1) ? __builtin_strcmp (cp, "fill") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (cp); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("fill"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("fill"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("fill"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("fill"))[3]); } } __result; }))) : __builtin_strcmp (cp, "fill")))); }) : strncmp (cp, "fill", 4))) == 0))
    defg3opts |= 0x4;
   else
    usage();
  } while( (cp = (__extension__ (__builtin_constant_p (':') && !__builtin_constant_p (cp) && (':') == '\0' ? (char *) __rawmemchr (cp, ':') : __builtin_strchr (cp, ':')))) );
 }
}

static int
processCompressOptions(char* opt)
{
 if ((__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (opt) && __builtin_constant_p ("none") && (__s1_len = strlen (opt), __s2_len = strlen ("none"), (!((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("none") + 1) - (size_t)(const void *)("none") == 1) || __s2_len >= 4)) ? __builtin_strcmp (opt, "none") : (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) && (__s1_len = strlen (opt), __s1_len < 4) ? (__builtin_constant_p ("none") && ((size_t)(const void *)(("none") + 1) - (size_t)(const void *)("none") == 1) ? __builtin_strcmp (opt, "none") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("none"); register int __result = (((__const unsigned char *) (__const char *) (opt))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (opt))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("none") && ((size_t)(const void *)(("none") + 1) - (size_t)(const void *)("none") == 1) && (__s2_len = strlen ("none"), __s2_len < 4) ? (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) ? __builtin_strcmp (opt, "none") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (opt); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("none"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("none"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("none"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("none"))[3]); } } __result; }))) : __builtin_strcmp (opt, "none")))); }) == 0)) {
  defcompression = 1;
 } else if ((__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (opt) && __builtin_constant_p ("packbits") && (__s1_len = strlen (opt), __s2_len = strlen ("packbits"), (!((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("packbits") + 1) - (size_t)(const void *)("packbits") == 1) || __s2_len >= 4)) ? __builtin_strcmp (opt, "packbits") : (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) && (__s1_len = strlen (opt), __s1_len < 4) ? (__builtin_constant_p ("packbits") && ((size_t)(const void *)(("packbits") + 1) - (size_t)(const void *)("packbits") == 1) ? __builtin_strcmp (opt, "packbits") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("packbits"); register int __result = (((__const unsigned char *) (__const char *) (opt))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (opt))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("packbits") && ((size_t)(const void *)(("packbits") + 1) - (size_t)(const void *)("packbits") == 1) && (__s2_len = strlen ("packbits"), __s2_len < 4) ? (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) ? __builtin_strcmp (opt, "packbits") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (opt); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("packbits"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("packbits"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("packbits"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("packbits"))[3]); } } __result; }))) : __builtin_strcmp (opt, "packbits")))); }) == 0)) {
  defcompression = 32773;
 } else if (((__extension__ (__builtin_constant_p (4) && ((__builtin_constant_p (opt) && strlen (opt) < ((size_t) (4))) || (__builtin_constant_p ("jpeg") && strlen ("jpeg") < ((size_t) (4)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (opt) && __builtin_constant_p ("jpeg") && (__s1_len = strlen (opt), __s2_len = strlen ("jpeg"), (!((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("jpeg") + 1) - (size_t)(const void *)("jpeg") == 1) || __s2_len >= 4)) ? __builtin_strcmp (opt, "jpeg") : (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) && (__s1_len = strlen (opt), __s1_len < 4) ? (__builtin_constant_p ("jpeg") && ((size_t)(const void *)(("jpeg") + 1) - (size_t)(const void *)("jpeg") == 1) ? __builtin_strcmp (opt, "jpeg") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("jpeg"); register int __result = (((__const unsigned char *) (__const char *) (opt))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (opt))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("jpeg") && ((size_t)(const void *)(("jpeg") + 1) - (size_t)(const void *)("jpeg") == 1) && (__s2_len = strlen ("jpeg"), __s2_len < 4) ? (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) ? __builtin_strcmp (opt, "jpeg") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (opt); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("jpeg"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("jpeg"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("jpeg"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("jpeg"))[3]); } } __result; }))) : __builtin_strcmp (opt, "jpeg")))); }) : strncmp (opt, "jpeg", 4))) == 0)) {
  char* cp = (__extension__ (__builtin_constant_p (':') && !__builtin_constant_p (opt) && (':') == '\0' ? (char *) __rawmemchr (opt, ':') : __builtin_strchr (opt, ':')));

  defcompression = 7;
  while( cp )
  {
   if (((*__ctype_b_loc ())[(int) (((int)cp[1]))] & (unsigned short int) _ISdigit))
    quality = atoi(cp+1);
   else if (cp[1] == 'r' )
    jpegcolormode = 0x0000;
   else
    usage();

   cp = (__extension__ (__builtin_constant_p (':') && !__builtin_constant_p (cp+1) && (':') == '\0' ? (char *) __rawmemchr (cp+1, ':') : __builtin_strchr (cp+1, ':')));
  }
 } else if (((__extension__ (__builtin_constant_p (2) && ((__builtin_constant_p (opt) && strlen (opt) < ((size_t) (2))) || (__builtin_constant_p ("g3") && strlen ("g3") < ((size_t) (2)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (opt) && __builtin_constant_p ("g3") && (__s1_len = strlen (opt), __s2_len = strlen ("g3"), (!((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("g3") + 1) - (size_t)(const void *)("g3") == 1) || __s2_len >= 4)) ? __builtin_strcmp (opt, "g3") : (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) && (__s1_len = strlen (opt), __s1_len < 4) ? (__builtin_constant_p ("g3") && ((size_t)(const void *)(("g3") + 1) - (size_t)(const void *)("g3") == 1) ? __builtin_strcmp (opt, "g3") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("g3"); register int __result = (((__const unsigned char *) (__const char *) (opt))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (opt))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("g3") && ((size_t)(const void *)(("g3") + 1) - (size_t)(const void *)("g3") == 1) && (__s2_len = strlen ("g3"), __s2_len < 4) ? (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) ? __builtin_strcmp (opt, "g3") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (opt); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("g3"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("g3"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("g3"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("g3"))[3]); } } __result; }))) : __builtin_strcmp (opt, "g3")))); }) : strncmp (opt, "g3", 2))) == 0)) {
  processG3Options(opt);
  defcompression = 3;
 } else if ((__extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (opt) && __builtin_constant_p ("g4") && (__s1_len = strlen (opt), __s2_len = strlen ("g4"), (!((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("g4") + 1) - (size_t)(const void *)("g4") == 1) || __s2_len >= 4)) ? __builtin_strcmp (opt, "g4") : (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) && (__s1_len = strlen (opt), __s1_len < 4) ? (__builtin_constant_p ("g4") && ((size_t)(const void *)(("g4") + 1) - (size_t)(const void *)("g4") == 1) ? __builtin_strcmp (opt, "g4") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("g4"); register int __result = (((__const unsigned char *) (__const char *) (opt))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (opt))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("g4") && ((size_t)(const void *)(("g4") + 1) - (size_t)(const void *)("g4") == 1) && (__s2_len = strlen ("g4"), __s2_len < 4) ? (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) ? __builtin_strcmp (opt, "g4") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (opt); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("g4"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("g4"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("g4"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("g4"))[3]); } } __result; }))) : __builtin_strcmp (opt, "g4")))); }) == 0)) {
  defcompression = 4;
 } else if (((__extension__ (__builtin_constant_p (3) && ((__builtin_constant_p (opt) && strlen (opt) < ((size_t) (3))) || (__builtin_constant_p ("lzw") && strlen ("lzw") < ((size_t) (3)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (opt) && __builtin_constant_p ("lzw") && (__s1_len = strlen (opt), __s2_len = strlen ("lzw"), (!((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("lzw") + 1) - (size_t)(const void *)("lzw") == 1) || __s2_len >= 4)) ? __builtin_strcmp (opt, "lzw") : (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) && (__s1_len = strlen (opt), __s1_len < 4) ? (__builtin_constant_p ("lzw") && ((size_t)(const void *)(("lzw") + 1) - (size_t)(const void *)("lzw") == 1) ? __builtin_strcmp (opt, "lzw") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("lzw"); register int __result = (((__const unsigned char *) (__const char *) (opt))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (opt))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("lzw") && ((size_t)(const void *)(("lzw") + 1) - (size_t)(const void *)("lzw") == 1) && (__s2_len = strlen ("lzw"), __s2_len < 4) ? (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) ? __builtin_strcmp (opt, "lzw") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (opt); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("lzw"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("lzw"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("lzw"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("lzw"))[3]); } } __result; }))) : __builtin_strcmp (opt, "lzw")))); }) : strncmp (opt, "lzw", 3))) == 0)) {
  char* cp = (__extension__ (__builtin_constant_p (':') && !__builtin_constant_p (opt) && (':') == '\0' ? (char *) __rawmemchr (opt, ':') : __builtin_strchr (opt, ':')));
  if (cp)
   defpredictor = atoi(cp+1);
  defcompression = 5;
 } else if (((__extension__ (__builtin_constant_p (3) && ((__builtin_constant_p (opt) && strlen (opt) < ((size_t) (3))) || (__builtin_constant_p ("zip") && strlen ("zip") < ((size_t) (3)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (opt) && __builtin_constant_p ("zip") && (__s1_len = strlen (opt), __s2_len = strlen ("zip"), (!((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("zip") + 1) - (size_t)(const void *)("zip") == 1) || __s2_len >= 4)) ? __builtin_strcmp (opt, "zip") : (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) && (__s1_len = strlen (opt), __s1_len < 4) ? (__builtin_constant_p ("zip") && ((size_t)(const void *)(("zip") + 1) - (size_t)(const void *)("zip") == 1) ? __builtin_strcmp (opt, "zip") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("zip"); register int __result = (((__const unsigned char *) (__const char *) (opt))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (opt))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("zip") && ((size_t)(const void *)(("zip") + 1) - (size_t)(const void *)("zip") == 1) && (__s2_len = strlen ("zip"), __s2_len < 4) ? (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) ? __builtin_strcmp (opt, "zip") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (opt); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("zip"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("zip"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("zip"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("zip"))[3]); } } __result; }))) : __builtin_strcmp (opt, "zip")))); }) : strncmp (opt, "zip", 3))) == 0)) {
  char* cp = (__extension__ (__builtin_constant_p (':') && !__builtin_constant_p (opt) && (':') == '\0' ? (char *) __rawmemchr (opt, ':') : __builtin_strchr (opt, ':')));
  if (cp)
   defpredictor = atoi(cp+1);
  defcompression = 8;
 } else if (((__extension__ (__builtin_constant_p (4) && ((__builtin_constant_p (opt) && strlen (opt) < ((size_t) (4))) || (__builtin_constant_p ("jbig") && strlen ("jbig") < ((size_t) (4)))) ? __extension__ ({ size_t __s1_len, __s2_len; (__builtin_constant_p (opt) && __builtin_constant_p ("jbig") && (__s1_len = strlen (opt), __s2_len = strlen ("jbig"), (!((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) || __s1_len >= 4) && (!((size_t)(const void *)(("jbig") + 1) - (size_t)(const void *)("jbig") == 1) || __s2_len >= 4)) ? __builtin_strcmp (opt, "jbig") : (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) && (__s1_len = strlen (opt), __s1_len < 4) ? (__builtin_constant_p ("jbig") && ((size_t)(const void *)(("jbig") + 1) - (size_t)(const void *)("jbig") == 1) ? __builtin_strcmp (opt, "jbig") : (__extension__ ({ __const unsigned char *__s2 = (__const unsigned char *) (__const char *) ("jbig"); register int __result = (((__const unsigned char *) (__const char *) (opt))[0] - __s2[0]); if (__s1_len > 0 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[1] - __s2[1]); if (__s1_len > 1 && __result == 0) { __result = (((__const unsigned char *) (__const char *) (opt))[2] - __s2[2]); if (__s1_len > 2 && __result == 0) __result = (((__const unsigned char *) (__const char *) (opt))[3] - __s2[3]); } } __result; }))) : (__builtin_constant_p ("jbig") && ((size_t)(const void *)(("jbig") + 1) - (size_t)(const void *)("jbig") == 1) && (__s2_len = strlen ("jbig"), __s2_len < 4) ? (__builtin_constant_p (opt) && ((size_t)(const void *)((opt) + 1) - (size_t)(const void *)(opt) == 1) ? __builtin_strcmp (opt, "jbig") : (__extension__ ({ __const unsigned char *__s1 = (__const unsigned char *) (__const char *) (opt); register int __result = __s1[0] - ((__const unsigned char *) (__const char *) ("jbig"))[0]; if (__s2_len > 0 && __result == 0) { __result = (__s1[1] - ((__const unsigned char *) (__const char *) ("jbig"))[1]); if (__s2_len > 1 && __result == 0) { __result = (__s1[2] - ((__const unsigned char *) (__const char *) ("jbig"))[2]); if (__s2_len > 2 && __result == 0) __result = (__s1[3] - ((__const unsigned char *) (__const char *) ("jbig"))[3]); } } __result; }))) : __builtin_strcmp (opt, "jbig")))); }) : strncmp (opt, "jbig", 4))) == 0)) {
  defcompression = 34661;
 } else
  return (0);
 return (1);
}

char* stuff[] = {
"usage: tiffcp [options] input... output",
"where options are:",
" -a              append to output instead of overwriting",
" -o offset       set initial directory offset",
" -p contig       pack samples contiguously (e.g. RGBRGB...)",
" -p separate     store samples separately (e.g. RRR...GGG...BBB...)",
" -s              write output in strips",
" -t              write output in tiles",
" -8              write BigTIFF instead of default ClassicTIFF",
" -i              ignore read errors",
" -b file[,#]     bias (dark) monochrome image to be subtracted from all others",
" -,=%            use % rather than , to separate image #'s (per Note below)",
"",
" -r #            make each strip have no more than # rows",
" -w #            set output tile width (pixels)",
" -l #            set output tile length (pixels)",
"",
" -f lsb2msb      force lsb-to-msb FillOrder for output",
" -f msb2lsb      force msb-to-lsb FillOrder for output",
"",
" -c lzw[:opts]   compress output with Lempel-Ziv & Welch encoding",
" -c zip[:opts]   compress output with deflate encoding",
" -c jpeg[:opts]  compress output with JPEG encoding",
" -c jbig         compress output with ISO JBIG encoding",
" -c packbits     compress output with packbits encoding",
" -c g3[:opts]    compress output with CCITT Group 3 encoding",
" -c g4           compress output with CCITT Group 4 encoding",
" -c none         use no compression algorithm on output",
"",
"Group 3 options:",
" 1d              use default CCITT Group 3 1D-encoding",
" 2d              use optional CCITT Group 3 2D-encoding",
" fill            byte-align EOL codes",
"For example, -c g3:2d:fill to get G3-2D-encoded data with byte-aligned EOLs",
"",
"JPEG options:",
" #               set compression quality level (0-100, default 75)",
" r               output color image as RGB rather than YCbCr",
"For example, -c jpeg:r:50 to get JPEG-encoded RGB data with 50% comp. quality",
"",
"LZW and deflate options:",
" #               set predictor value",
"For example, -c lzw:2 to get LZW-encoded data with horizontal differencing",
"",
"Note that input filenames may be of the form filename,x,y,z",
"where x, y, and z specify image numbers in the filename to copy.",
"example:  tiffcp -c none -b esp.tif,1 esp.tif,0 test.tif",
"  subtract 2nd image in esp.tif from 1st yielding uncompressed result test.tif",
((void *)0)
};

static void
usage(void)
{
 char buf[8192];
 int i;

 setbuf(stderr, buf);
 fprintf(stderr, "%s\n\n", TIFFGetVersion());
 for (i = 0; stuff[i] != ((void *)0); i++)
  fprintf(stderr, "%s\n", stuff[i]);
 exit(-1);
}
# 447 "tiffcp.c"
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

  if (TIFFGetField(in, 259, &input_compression)
      && input_compression == 7) {
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
   if (!TIFFGetField(in, 278,
       &rowsperstrip)) {
    rowsperstrip =
        TIFFDefaultStripSize(out, rowsperstrip);
   }
   if (rowsperstrip > length && rowsperstrip != (uint32)-1)
    rowsperstrip = length;
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
  case 34661:
   cpTag(in, out, 34908, 1, TIFF_LONG);
   cpTag(in, out, 34910, 1, TIFF_LONG);
   cpTag(in, out, 34909, 1, TIFF_ASCII);
   cpTag(in, out, 34911, 1, TIFF_ASCII);
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
 {
  uint32 len32;
  void** data;
  if (TIFFGetField(in, 34675, &len32, &data))
   TIFFSetField(out, 34675, len32, data);
 }
 {
  uint16 ninks;
  const char* inknames;
  if (TIFFGetField(in, 334, &ninks)) {
   TIFFSetField(out, 334, ninks);
   if (TIFFGetField(in, 333, &inknames)) {
    int inknameslen = strlen(inknames) + 1;
    const char* cp = inknames;
    while (ninks > 1) {
     cp = (__extension__ (__builtin_constant_p ('\0') && !__builtin_constant_p (cp) && ('\0') == '\0' ? (char *) __rawmemchr (cp, '\0') : __builtin_strchr (cp, '\0')));
                                        cp++;
                                        inknameslen += (strlen(cp) + 1);
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
# 758 "tiffcp.c"
typedef int (*readFunc)(TIFF*, uint8*, uint32, uint32, tsample_t);




typedef int (*writeFunc)(TIFF*, uint8*, uint32, uint32, tsample_t);




static int cpContig2ContigByRow(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 tdata_t buf = _TIFFmalloc(TIFFScanlineSize(in));
 uint32 row;

 (void) imagewidth; (void) spp;
 for (row = 0; row < imagelength; row++) {
  if (TIFFReadScanline(in, buf, row, 0) < 0 && !ignore) {
   TIFFError(TIFFFileName(in),
      "Error, can't read scanline %lu",
      (unsigned long) row);
   goto bad;
  }
  if (TIFFWriteScanline(out, buf, row, 0) < 0) {
   TIFFError(TIFFFileName(out),
      "Error, can't write scanline %lu",
      (unsigned long) row);
   goto bad;
  }
 }
 _TIFFfree(buf);
 return 1;
bad:
 _TIFFfree(buf);
 return 0;
}


typedef void biasFn (void *image, void *bias, uint32 pixels);
# 809 "tiffcp.c"
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
 return ((void *)0);
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
     if (TIFFReadScanline(in, buf, row, 0) < 0
         && !ignore) {
      TIFFError(TIFFFileName(in),
          "Error, can't read scanline %lu",
          (unsigned long) row);
      goto bad;
     }
     if (TIFFReadScanline(bias, biasBuf, row, 0) < 0
         && !ignore) {
      TIFFError(TIFFFileName(in),
          "Error, can't read biased scanline %lu",
          (unsigned long) row);
      goto bad;
     }
     subtractLine (buf, biasBuf, imagewidth);
     if (TIFFWriteScanline(out, buf, row, 0) < 0) {
      TIFFError(TIFFFileName(out),
          "Error, can't write scanline %lu",
          (unsigned long) row);
      goto bad;
     }
    }

    _TIFFfree(buf);
    _TIFFfree(biasBuf);
    TIFFSetDirectory(bias,
        TIFFCurrentDirectory(bias));
    return 1;
bad:
    _TIFFfree(buf);
    _TIFFfree(biasBuf);
    return 0;
   } else {
    TIFFError(TIFFFileName(in),
        "No support for biasing %d bit pixels\n",
        sampleBits);
    return 0;
   }
  }
  TIFFError(TIFFFileName(in),
      "Bias image %s,%d\nis not the same size as %s,%d\n",
      TIFFFileName(bias), TIFFCurrentDirectory(bias),
      TIFFFileName(in), TIFFCurrentDirectory(in));
  return 0;
 } else {
  TIFFError(TIFFFileName(in),
      "Can't bias %s,%d as it has >1 Sample/Pixel\n",
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
   if (TIFFReadEncodedStrip(in, s, buf, cc) < 0
       && !ignore) {
    TIFFError(TIFFFileName(in),
        "Error, can't read strip %lu",
        (unsigned long) s);
    goto bad;
   }
   if (TIFFWriteEncodedStrip(out, s, buf, cc) < 0) {
    TIFFError(TIFFFileName(out),
        "Error, can't write strip %lu",
        (unsigned long) s);
    goto bad;
   }
   row += rowsperstrip;
  }
  _TIFFfree(buf);
  return 1;
 } else {
  TIFFError(TIFFFileName(in),
      "Error, can't allocate memory buffer of size %lu "
      "to read strips", (unsigned long) stripsize);
  return 0;
 }

bad:
 _TIFFfree(buf);
 return 0;
}




static int cpSeparate2SeparateByRow(TIFF* in, TIFF* out, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 tdata_t buf = _TIFFmalloc(TIFFScanlineSize(in));
 uint32 row;
 tsample_t s;

 (void) imagewidth;
 for (s = 0; s < spp; s++) {
  for (row = 0; row < imagelength; row++) {
   if (TIFFReadScanline(in, buf, row, s) < 0 && !ignore) {
    TIFFError(TIFFFileName(in),
        "Error, can't read scanline %lu",
        (unsigned long) row);
    goto bad;
   }
   if (TIFFWriteScanline(out, buf, row, s) < 0) {
    TIFFError(TIFFFileName(out),
        "Error, can't write scanline %lu",
        (unsigned long) row);
    goto bad;
   }
  }
 }
 _TIFFfree(buf);
 return 1;
bad:
 _TIFFfree(buf);
 return 0;
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
   if (TIFFReadScanline(in, inbuf, row, 0) < 0
       && !ignore) {
    TIFFError(TIFFFileName(in),
        "Error, can't read scanline %lu",
        (unsigned long) row);
    goto bad;
   }
   inp = ((uint8*)inbuf) + s;
   outp = (uint8*)outbuf;
   for (n = imagewidth; n-- > 0;) {
    *outp++ = *inp;
    inp += spp;
   }
   if (TIFFWriteScanline(out, outbuf, row, s) < 0) {
    TIFFError(TIFFFileName(out),
        "Error, can't write scanline %lu",
        (unsigned long) row);
    goto bad;
   }
  }
 }
 if (inbuf) _TIFFfree(inbuf);
 if (outbuf) _TIFFfree(outbuf);
 return 1;
bad:
 if (inbuf) _TIFFfree(inbuf);
 if (outbuf) _TIFFfree(outbuf);
 return 0;
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
   if (TIFFReadScanline(in, inbuf, row, s) < 0
       && !ignore) {
    TIFFError(TIFFFileName(in),
        "Error, can't read scanline %lu",
        (unsigned long) row);
    goto bad;
   }
   inp = (uint8*)inbuf;
   outp = ((uint8*)outbuf) + s;
   for (n = imagewidth; n-- > 0;) {
    *outp = *inp++;
    outp += spp;
   }
  }
  if (TIFFWriteScanline(out, outbuf, row, 0) < 0) {
   TIFFError(TIFFFileName(out),
       "Error, can't write scanline %lu",
       (unsigned long) row);
   goto bad;
  }
 }
 if (inbuf) _TIFFfree(inbuf);
 if (outbuf) _TIFFfree(outbuf);
 return 1;
bad:
 if (inbuf) _TIFFfree(inbuf);
 if (outbuf) _TIFFfree(outbuf);
 return 0;
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
 tdata_t buf = ((void *)0);
 tsize_t scanlinesize = TIFFRasterScanlineSize(in);
 tsize_t bytes = scanlinesize * (tsize_t)imagelength;



 if (scanlinesize
     && imagelength
     && bytes / (tsize_t)imagelength == scanlinesize) {
  buf = _TIFFmalloc(bytes);
  if (buf) {
   if ((*fin)(in, (uint8*)buf, imagelength,
       imagewidth, spp)) {
    status = (*fout)(out, (uint8*)buf,
        imagelength, imagewidth, spp);
   }
   _TIFFfree(buf);
  } else {
   TIFFError(TIFFFileName(in),
       "Error, can't allocate space for image buffer");
  }
 } else {
  TIFFError(TIFFFileName(in), "Error, no space for image buffer");
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
  if (TIFFReadScanline(in, (tdata_t) bufp, row, 0) < 0
      && !ignore) {
   TIFFError(TIFFFileName(in),
       "Error, can't read scanline %lu",
       (unsigned long) row);
   return 0;
  }
  bufp += scanlinesize;
 }

 return 1;
}

static int readSeparateStripsIntoBuffer(TIFF* in, uint8* buf, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 int status = 1;
 tsize_t scanlinesize = TIFFScanlineSize(in);
 tdata_t scanline;
 if (!scanlinesize)
  return 0;

        scanline = _TIFFmalloc(scanlinesize);

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
     TIFFError(TIFFFileName(in),
         "Error, can't read scanline %lu",
         (unsigned long) row);
         status = 0;
     goto done;
    }
    while (n-- > 0)
     *bp = *sbuf++, bp += spp;
   }
   bufp += scanlinesize * spp;
  }
 }

done:
 _TIFFfree(scanline);
 return status;
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
    TIFFError(TIFFFileName(in),
        "Error, can't read tile at %lu %lu",
        (unsigned long) col,
        (unsigned long) row);
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
 ((bps % 8 == 0) ? (void) (0) : __assert_fail ("bps % 8 == 0", "tiffcp.c", 1285, __PRETTY_FUNCTION__));
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
     TIFFError(TIFFFileName(in),
         "Error, can't read tile at %lu %lu, "
         "sample %lu",
         (unsigned long) col,
         (unsigned long) row,
         (unsigned long) s);
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
  if (TIFFWriteEncodedStrip(out, strip++, buf, stripsize) < 0) {
   TIFFError(TIFFFileName(out),
       "Error, can't write strip %u", strip - 1);
   return 0;
  }
  buf += stripsize;
 }
 return 1;
}

static int writeBufferToSeparateStrips(TIFF* out, uint8* buf, uint32 imagelength, uint32 imagewidth, tsample_t spp)
{
 uint32 rowsize = imagewidth * spp;
 uint32 rowsperstrip;
 tdata_t obuf = _TIFFmalloc(TIFFStripSize(out));
 tstrip_t strip = 0;
 tsample_t s;

 if (obuf == ((void *)0))
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
    TIFFError(TIFFFileName(out),
        "Error, can't write strip %u",
        strip - 1);
    _TIFFfree(obuf);
    return 0;
   }
  }
 }
 _TIFFfree(obuf);
 return 1;

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
 if (obuf == ((void *)0))
  return 0;
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
    TIFFError(TIFFFileName(out),
        "Error, can't write tile at %lu %lu",
        (unsigned long) col,
        (unsigned long) row);
    _TIFFfree(obuf);
    return 0;
   }
   colb += tilew;
  }
  bufp += nrow * imagew;
 }
 _TIFFfree(obuf);
 return 1;
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

 if (obuf == ((void *)0))
  return 0;
 (void) TIFFGetField(out, 323, &tl);
 (void) TIFFGetField(out, 322, &tw);
 (void) TIFFGetField(out, 258, &bps);
 ((bps % 8 == 0) ? (void) (0) : __assert_fail ("bps % 8 == 0", "tiffcp.c", 1460, __PRETTY_FUNCTION__));
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
     TIFFError(TIFFFileName(out),
         "Error, can't write tile at %lu %lu "
         "sample %lu",
         (unsigned long) col,
         (unsigned long) row,
         (unsigned long) s);
     _TIFFfree(obuf);
     return 0;
    }
   }
   colb += tilew;
  }
  bufp += nrow * iimagew;
 }
 _TIFFfree(obuf);
 return 1;
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
  fprintf(stderr,
      "%s: Cannot handle different planar configuration w/ bits/sample != 8\n",
      TIFFFileName(in));
  return (((void *)0));
 }
 TIFFGetField(in, 256, &w);
 TIFFGetField(in, 257, &l);
 if (!(TIFFIsTiled(out) || TIFFIsTiled(in))) {
  uint32 irps = (uint32) -1L;
  TIFFGetField(in, 278, &irps);

  bychunk = !bias && (rowsperstrip == irps);
 }else{
  if (bias) {
   fprintf(stderr,
       "%s: Cannot handle tiled configuration w/bias image\n",
   TIFFFileName(in));
   return (((void *)0));
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



 fprintf(stderr, "tiffcp: %s: Don't know how to copy/convert image.\n",
     TIFFFileName(in));
 return (((void *)0));
}
