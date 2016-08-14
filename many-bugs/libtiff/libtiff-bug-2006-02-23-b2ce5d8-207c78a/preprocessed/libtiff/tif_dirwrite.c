# 1 "tif_dirwrite.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "tif_dirwrite.c"
# 32 "tif_dirwrite.c"
# 1 "tiffiop.h" 1
# 33 "tiffiop.h"
# 1 "tif_config.h" 1
# 34 "tiffiop.h" 2


# 1 "/usr/include/fcntl.h" 1 3 4
# 25 "/usr/include/fcntl.h" 3 4
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
# 26 "/usr/include/fcntl.h" 2 3 4





# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4



# 30 "/usr/include/bits/types.h" 3 4
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
# 32 "/usr/include/fcntl.h" 2 3 4



# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 35 "/usr/include/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };
# 61 "/usr/include/bits/fcntl.h" 3 4
# 1 "/usr/include/bits/fcntl-linux.h" 1 3 4
# 345 "/usr/include/bits/fcntl-linux.h" 3 4

# 419 "/usr/include/bits/fcntl-linux.h" 3 4

# 61 "/usr/include/bits/fcntl.h" 2 3 4
# 36 "/usr/include/fcntl.h" 2 3 4
# 50 "/usr/include/fcntl.h" 3 4
typedef __mode_t mode_t;





typedef __off_t off_t;
# 69 "/usr/include/fcntl.h" 3 4
typedef __pid_t pid_t;






# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 77 "/usr/include/fcntl.h" 2 3 4
# 1 "/usr/include/bits/stat.h" 1 3 4
# 46 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;




    __ino_t st_ino;







    __nlink_t st_nlink;
    __mode_t st_mode;

    __uid_t st_uid;
    __gid_t st_gid;

    int __pad0;

    __dev_t st_rdev;




    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
# 91 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 106 "/usr/include/bits/stat.h" 3 4
    __syscall_slong_t __glibc_reserved[3];
# 115 "/usr/include/bits/stat.h" 3 4
  };
# 78 "/usr/include/fcntl.h" 2 3 4
# 169 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 179 "/usr/include/fcntl.h" 3 4
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
# 203 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
# 225 "/usr/include/fcntl.h" 3 4
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
# 254 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, off_t __len);
# 271 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
# 293 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
# 315 "/usr/include/fcntl.h" 3 4

# 37 "tiffiop.h" 2



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
# 75 "/usr/include/sys/types.h" 3 4
typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 104 "/usr/include/sys/types.h" 3 4
typedef __id_t id_t;




typedef __ssize_t ssize_t;





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
# 216 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
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
# 216 "/usr/include/sys/types.h" 3 4
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
# 217 "/usr/include/sys/types.h" 2 3 4


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



# 41 "tiffiop.h" 2



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

# 45 "tiffiop.h" 2



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



# 49 "tiffiop.h" 2





# 1 "/usr/include/search.h" 1 3 4
# 25 "/usr/include/search.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 26 "/usr/include/search.h" 2 3 4


# 44 "/usr/include/search.h" 3 4
extern void insque (void *__elem, void *__prev) __attribute__ ((__nothrow__ , __leaf__));


extern void remque (void *__elem) __attribute__ ((__nothrow__ , __leaf__));






typedef int (*__compar_fn_t) (const void *, const void *);







typedef enum
  {
    FIND,
    ENTER
  }
ACTION;

typedef struct entry
  {
    char *key;
    void *data;
  }
ENTRY;


struct _ENTRY;
# 87 "/usr/include/search.h" 3 4
extern ENTRY *hsearch (ENTRY __item, ACTION __action) __attribute__ ((__nothrow__ , __leaf__));


extern int hcreate (size_t __nel) __attribute__ ((__nothrow__ , __leaf__));


extern void hdestroy (void) __attribute__ ((__nothrow__ , __leaf__));
# 118 "/usr/include/search.h" 3 4
typedef enum
{
  preorder,
  postorder,
  endorder,
  leaf
}
VISIT;



extern void *tsearch (const void *__key, void **__rootp,
        __compar_fn_t __compar);



extern void *tfind (const void *__key, void *const *__rootp,
      __compar_fn_t __compar);


extern void *tdelete (const void *__restrict __key,
        void **__restrict __rootp,
        __compar_fn_t __compar);



typedef void (*__action_fn_t) (const void *__nodep, VISIT __value,
          int __level);




extern void twalk (const void *__root, __action_fn_t __action);
# 164 "/usr/include/search.h" 3 4
extern void *lfind (const void *__key, const void *__base,
      size_t *__nmemb, size_t __size, __compar_fn_t __compar);



extern void *lsearch (const void *__key, void *__base,
        size_t *__nmemb, size_t __size, __compar_fn_t __compar);


# 55 "tiffiop.h" 2





# 1 "tiffio.h" 1
# 33 "tiffio.h"
# 1 "tiff.h" 1
# 30 "tiff.h"
# 1 "tiffconf.h" 1
# 31 "tiff.h" 2
# 65 "tiff.h"

# 65 "tiff.h"
typedef signed char int8;

typedef unsigned char uint8;

typedef short int16;

typedef unsigned short uint16;


typedef int int32;

typedef unsigned int uint32;
# 85 "tiff.h"
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
# 116 "tiff.h"
typedef struct {
 uint16 tdir_tag;
 uint16 tdir_type;
 uint32 tdir_count;
 uint32 tdir_offset;
} TIFFDirEntry;
# 137 "tiff.h"
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
# 34 "tiffio.h" 2
# 1 "tiffvers.h" 1
# 35 "tiffio.h" 2





typedef struct tiff TIFF;
# 61 "tiffio.h"
typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrip_t;
typedef uint32 ttile_t;
typedef int32 tsize_t;
typedef void* tdata_t;
typedef uint32 toff_t;
# 97 "tiffio.h"
typedef void* thandle_t;
# 133 "tiffio.h"
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
# 185 "tiffio.h"
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
# 242 "tiffio.h"
typedef int (*TIFFInitMethod)(TIFF*, int);
typedef struct {
 char* name;
 uint16 scheme;
 TIFFInitMethod init;
} TIFFCodec;

# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4

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
# 108 "/usr/include/stdio.h" 3 4


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

# 250 "tiffio.h" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stdarg.h" 1 3 4
# 251 "tiffio.h" 2
# 260 "tiffio.h"

# 260 "tiffio.h"
typedef void (*TIFFErrorHandler)(const char*, const char*, va_list);
typedef void (*TIFFErrorHandlerExt)(thandle_t, const char*, const char*, va_list);
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
# 302 "tiffio.h"
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
# 411 "tiffio.h"
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
extern void TIFFErrorExt(thandle_t, const char*, const char*, ...);
extern void TIFFWarning(const char*, const char*, ...);
extern void TIFFWarningExt(thandle_t, const char*, const char*, ...);
extern TIFFErrorHandler TIFFSetErrorHandler(TIFFErrorHandler);
extern TIFFErrorHandlerExt TIFFSetErrorHandlerExt(TIFFErrorHandlerExt);
extern TIFFErrorHandler TIFFSetWarningHandler(TIFFErrorHandler);
extern TIFFErrorHandlerExt TIFFSetWarningHandlerExt(TIFFErrorHandlerExt);
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
# 61 "tiffiop.h" 2
# 1 "tif_dir.h" 1
# 36 "tif_dir.h"
typedef struct {


 unsigned long td_fieldsset[4];

 uint32 td_imagewidth, td_imagelength, td_imagedepth;
 uint32 td_tilewidth, td_tilelength, td_tiledepth;
 uint32 td_subfiletype;
 uint16 td_bitspersample;
 uint16 td_sampleformat;
 uint16 td_compression;
 uint16 td_photometric;
 uint16 td_threshholding;
 uint16 td_fillorder;
 uint16 td_orientation;
 uint16 td_samplesperpixel;
 uint32 td_rowsperstrip;
 uint16 td_minsamplevalue, td_maxsamplevalue;
 double td_sminsamplevalue, td_smaxsamplevalue;
 float td_xresolution, td_yresolution;
 uint16 td_resolutionunit;
 uint16 td_planarconfig;
 float td_xposition, td_yposition;
 uint16 td_pagenumber[2];
 uint16* td_colormap[3];
 uint16 td_halftonehints[2];
 uint16 td_extrasamples;
 uint16* td_sampleinfo;
 tstrip_t td_stripsperimage;
 tstrip_t td_nstrips;
 uint32* td_stripoffset;
 uint32* td_stripbytecount;
 int td_stripbytecountsorted;
 uint16 td_nsubifd;
 uint32* td_subifd;

 uint16 td_ycbcrsubsampling[2];
 uint16 td_ycbcrpositioning;

 uint16* td_transferfunction[3];

 int td_inknameslen;
 char* td_inknames;

 int td_customValueCount;
        TIFFTagValue *td_customValues;
} TIFFDirectory;
# 177 "tif_dir.h"
extern const TIFFFieldInfo *_TIFFGetFieldInfo(size_t *);
extern const TIFFFieldInfo *_TIFFGetExifFieldInfo(size_t *);
extern void _TIFFSetupFieldInfo(TIFF*, const TIFFFieldInfo[], size_t);
extern void _TIFFPrintFieldInfo(TIFF*, FILE*);
extern TIFFDataType _TIFFSampleToTagType(TIFF*);
extern const TIFFFieldInfo* _TIFFFindOrRegisterFieldInfo( TIFF *tif,
          ttag_t tag,
          TIFFDataType dt );
extern TIFFFieldInfo* _TIFFCreateAnonFieldInfo( TIFF *tif, ttag_t tag,
                                                 TIFFDataType dt );
# 62 "tiffiop.h" 2

typedef double dblparam_t;
# 74 "tiffiop.h"
typedef struct client_info {
    struct client_info *next;
    void *data;
    char *name;
} TIFFClientInfoLink;




typedef unsigned char tidataval_t;
typedef tidataval_t* tidata_t;

typedef void (*TIFFVoidMethod)(TIFF*);
typedef int (*TIFFBoolMethod)(TIFF*);
typedef int (*TIFFPreMethod)(TIFF*, tsample_t);
typedef int (*TIFFCodeMethod)(TIFF*, tidata_t, tsize_t, tsample_t);
typedef int (*TIFFSeekMethod)(TIFF*, uint32);
typedef void (*TIFFPostMethod)(TIFF*, tidata_t, tsize_t);
typedef uint32 (*TIFFStripMethod)(TIFF*, uint32);
typedef void (*TIFFTileMethod)(TIFF*, uint32*, uint32*);

struct tiff {
 char* tif_name;
 int tif_fd;
 int tif_mode;
 uint32 tif_flags;
# 117 "tiffiop.h"
 toff_t tif_diroff;
 toff_t tif_nextdiroff;
 toff_t* tif_dirlist;

 uint16 tif_dirnumber;
 TIFFDirectory tif_dir;
 TIFFHeader tif_header;
 const int* tif_typeshift;
 const long* tif_typemask;
 uint32 tif_row;
 tdir_t tif_curdir;
 tstrip_t tif_curstrip;
 toff_t tif_curoff;
 toff_t tif_dataoff;

 uint16 tif_nsubifd;
 toff_t tif_subifdoff;

 uint32 tif_col;
 ttile_t tif_curtile;
 tsize_t tif_tilesize;

 int tif_decodestatus;
 TIFFBoolMethod tif_setupdecode;
 TIFFPreMethod tif_predecode;
 TIFFBoolMethod tif_setupencode;
 int tif_encodestatus;
 TIFFPreMethod tif_preencode;
 TIFFBoolMethod tif_postencode;
 TIFFCodeMethod tif_decoderow;
 TIFFCodeMethod tif_encoderow;
 TIFFCodeMethod tif_decodestrip;
 TIFFCodeMethod tif_encodestrip;
 TIFFCodeMethod tif_decodetile;
 TIFFCodeMethod tif_encodetile;
 TIFFVoidMethod tif_close;
 TIFFSeekMethod tif_seek;
 TIFFVoidMethod tif_cleanup;
 TIFFStripMethod tif_defstripsize;
 TIFFTileMethod tif_deftilesize;
 tidata_t tif_data;

 tsize_t tif_scanlinesize;
 tsize_t tif_scanlineskew;
 tidata_t tif_rawdata;
 tsize_t tif_rawdatasize;
 tidata_t tif_rawcp;
 tsize_t tif_rawcc;

 tidata_t tif_base;
 toff_t tif_size;
 TIFFMapFileProc tif_mapproc;
 TIFFUnmapFileProc tif_unmapproc;

 thandle_t tif_clientdata;
 TIFFReadWriteProc tif_readproc;
 TIFFReadWriteProc tif_writeproc;
 TIFFSeekProc tif_seekproc;
 TIFFCloseProc tif_closeproc;
 TIFFSizeProc tif_sizeproc;

 TIFFPostMethod tif_postdecode;

 TIFFFieldInfo** tif_fieldinfo;
 size_t tif_nfields;
 const TIFFFieldInfo *tif_foundfield;
        TIFFTagMethods tif_tagmethods;
        TIFFClientInfoLink *tif_clientinfo;
};
# 237 "tiffiop.h"
extern int _TIFFgetMode(const char*, const char*);
extern int _TIFFNoRowEncode(TIFF*, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoStripEncode(TIFF*, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoTileEncode(TIFF*, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoRowDecode(TIFF*, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoStripDecode(TIFF*, tidata_t, tsize_t, tsample_t);
extern int _TIFFNoTileDecode(TIFF*, tidata_t, tsize_t, tsample_t);
extern void _TIFFNoPostDecode(TIFF*, tidata_t, tsize_t);
extern int _TIFFNoPreCode (TIFF*, tsample_t);
extern int _TIFFNoSeek(TIFF*, uint32);
extern void _TIFFSwab16BitData(TIFF*, tidata_t, tsize_t);
extern void _TIFFSwab24BitData(TIFF*, tidata_t, tsize_t);
extern void _TIFFSwab32BitData(TIFF*, tidata_t, tsize_t);
extern void _TIFFSwab64BitData(TIFF*, tidata_t, tsize_t);
extern int TIFFFlushData1(TIFF*);
extern int TIFFDefaultDirectory(TIFF*);
extern int TIFFSetCompressionScheme(TIFF*, int);
extern int TIFFSetDefaultCompressionState(TIFF*);
extern uint32 _TIFFDefaultStripSize(TIFF*, uint32);
extern void _TIFFDefaultTileSize(TIFF*, uint32*, uint32*);
extern int _TIFFDataSize(TIFFDataType);

extern void _TIFFsetByteArray(void**, void*, uint32);
extern void _TIFFsetString(char**, char*);
extern void _TIFFsetShortArray(uint16**, uint16*, uint32);
extern void _TIFFsetLongArray(uint32**, uint32*, uint32);
extern void _TIFFsetFloatArray(float**, float*, uint32);
extern void _TIFFsetDoubleArray(double**, double*, uint32);

extern void _TIFFprintAscii(FILE*, const char*);
extern void _TIFFprintAsciiTag(FILE*, const char*, const char*);

extern TIFFErrorHandler _TIFFwarningHandler;
extern TIFFErrorHandler _TIFFerrorHandler;
extern TIFFErrorHandlerExt _TIFFwarningHandlerExt;
extern TIFFErrorHandlerExt _TIFFerrorHandlerExt;

extern tdata_t _TIFFCheckMalloc(TIFF*, size_t, size_t, const char*);

extern int TIFFInitDumpMode(TIFF*, int);

extern int TIFFInitPackBits(TIFF*, int);


extern int TIFFInitCCITTRLE(TIFF*, int), TIFFInitCCITTRLEW(TIFF*, int);
extern int TIFFInitCCITTFax3(TIFF*, int), TIFFInitCCITTFax4(TIFF*, int);


extern int TIFFInitThunderScan(TIFF*, int);


extern int TIFFInitNeXT(TIFF*, int);


extern int TIFFInitLZW(TIFF*, int);
# 303 "tiffiop.h"
extern int TIFFInitZIP(TIFF*, int);


extern int TIFFInitPixarLog(TIFF*, int);


extern int TIFFInitSGILog(TIFF*, int);




extern TIFFCodec _TIFFBuiltinCODECS[];
# 33 "tif_dirwrite.c" 2
# 42 "tif_dirwrite.c"
static int TIFFWriteNormalTag(TIFF*, TIFFDirEntry*, const TIFFFieldInfo*);
static void TIFFSetupShortLong(TIFF*, ttag_t, TIFFDirEntry*, uint32);
static void TIFFSetupShort(TIFF*, ttag_t, TIFFDirEntry*, uint16);
static int TIFFSetupShortPair(TIFF*, ttag_t, TIFFDirEntry*);
static int TIFFWritePerSampleShorts(TIFF*, ttag_t, TIFFDirEntry*);
static int TIFFWritePerSampleAnys(TIFF*, TIFFDataType, ttag_t, TIFFDirEntry*);
static int TIFFWriteShortTable(TIFF*, ttag_t, TIFFDirEntry*, uint32, uint16**);
static int TIFFWriteShortArray(TIFF*, TIFFDirEntry*, uint16*);
static int TIFFWriteLongArray(TIFF *, TIFFDirEntry*, uint32*);
static int TIFFWriteRationalArray(TIFF *, TIFFDirEntry*, float*);
static int TIFFWriteFloatArray(TIFF *, TIFFDirEntry*, float*);
static int TIFFWriteDoubleArray(TIFF *, TIFFDirEntry*, double*);
static int TIFFWriteByteArray(TIFF*, TIFFDirEntry*, char*);
static int TIFFWriteAnyArray(TIFF*,
     TIFFDataType, ttag_t, TIFFDirEntry*, uint32, double*);
static int TIFFWriteTransferFunction(TIFF*, TIFFDirEntry*);
static int TIFFWriteInkNames(TIFF*, TIFFDirEntry*);
static int TIFFWriteData(TIFF*, TIFFDirEntry*, char*);
static int TIFFLinkDirectory(TIFF*);
# 80 "tif_dirwrite.c"
static int
_TIFFWriteDirectory(TIFF* tif, int done)
{
 uint16 dircount;
 toff_t diroff;
 ttag_t tag;
 uint32 nfields;
 tsize_t dirsize;
 char* data;
 TIFFDirEntry* dir;
 TIFFDirectory* td;
 unsigned long b, fields[4];
 int fi, nfi;

 if (tif->tif_mode == 
# 94 "tif_dirwrite.c" 3 4
                     00
# 94 "tif_dirwrite.c"
                             )
  return (1);





 if (done)
 {
     if (tif->tif_flags & 0x1000) {
      tif->tif_flags &= ~0x1000;
      if (!(*tif->tif_postencode)(tif)) {
    TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
    "Error post-encoding before directory write");
       return (0);
      }
     }
     (*tif->tif_close)(tif);




     if (tif->tif_rawcc > 0 && !TIFFFlushData1(tif)) {
   TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
   "Error flushing data before directory write");
      return (0);
     }
     if ((tif->tif_flags & 0x0200) && tif->tif_rawdata) {
      _TIFFfree(tif->tif_rawdata);
      tif->tif_rawdata = 
# 123 "tif_dirwrite.c" 3 4
                        ((void *)0)
# 123 "tif_dirwrite.c"
                            ;
      tif->tif_rawcc = 0;
      tif->tif_rawdatasize = 0;
     }
     tif->tif_flags &= ~(0x0040|0x0010);
 }

 td = &tif->tif_dir;





 nfields = 0;
 for (b = 0; b <= (32*4 -1); b++)
  if ((((tif)->tif_dir.td_fieldsset[(b)/32]) & (((unsigned long)1L)<<((b)&0x1f))) && b != 65)
   nfields += (b < 5 ? 2 : 1);
        nfields += td->td_customValueCount;
 dirsize = nfields * sizeof (TIFFDirEntry);
 data = (char*) _TIFFmalloc(dirsize);
 if (data == 
# 143 "tif_dirwrite.c" 3 4
            ((void *)0)
# 143 "tif_dirwrite.c"
                ) {
  TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
      "Cannot write directory, out of space");
  return (0);
 }





 if (tif->tif_diroff == 0 && !TIFFLinkDirectory(tif))
  goto bad;
 tif->tif_dataoff = (toff_t)(
     tif->tif_diroff + sizeof (uint16) + dirsize + sizeof (toff_t));
 if (tif->tif_dataoff & 1)
  tif->tif_dataoff++;
 (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)(tif->tif_dataoff),
# 159 "tif_dirwrite.c" 3 4
       0
# 159 "tif_dirwrite.c"
       ));
 tif->tif_curdir++;
 dir = (TIFFDirEntry*) data;




 _TIFFmemcpy(fields, td->td_fieldsset, sizeof (fields));




 if ((fields[(31)/32] & (((unsigned long)1L)<<((31)&0x1f))) && !td->td_extrasamples) {
  (fields[(31)/32] &= ~(((unsigned long)1L)<<((31)&0x1f)));
  nfields--;
  dirsize -= sizeof (TIFFDirEntry);
 }
 for (fi = 0, nfi = tif->tif_nfields; nfi > 0; nfi--, fi++) {
  const TIFFFieldInfo* fip = tif->tif_fieldinfo[fi];






                if( fip->field_bit == 65 )
                {
                    int ci, is_set = 0;

                    for( ci = 0; ci < td->td_customValueCount; ci++ )
                        is_set |= (td->td_customValues[ci].info == fip);

                    if( !is_set )
                        continue;
                }
  else if (!(fields[(fip->field_bit)/32] & (((unsigned long)1L)<<((fip->field_bit)&0x1f))))
                    continue;





  switch (fip->field_bit)
                {
  case 25:







   tag = (((tif)->tif_flags & 0x0400) != 0) ?
       324 : 273;
   if (tag != fip->field_tag)
    continue;

   dir->tdir_tag = (uint16) tag;
   dir->tdir_type = (uint16) TIFF_LONG;
   dir->tdir_count = (uint32) td->td_nstrips;
   if (!TIFFWriteLongArray(tif, dir, td->td_stripoffset))
    goto bad;
   break;
  case 24:






   tag = (((tif)->tif_flags & 0x0400) != 0) ?
       325 : 279;
   if (tag != fip->field_tag)
    continue;

   dir->tdir_tag = (uint16) tag;
   dir->tdir_type = (uint16) TIFF_LONG;
   dir->tdir_count = (uint32) td->td_nstrips;
   if (!TIFFWriteLongArray(tif, dir,
      td->td_stripbytecount))
    goto bad;
   break;
  case 17:
   TIFFSetupShortLong(tif, 278,
       dir, td->td_rowsperstrip);
   break;
  case 26:
   if (!TIFFWriteShortTable(tif, 320, dir,
       3, td->td_colormap))
    goto bad;
   break;
  case 1:
   TIFFSetupShortLong(tif, 256,
       dir++, td->td_imagewidth);
   TIFFSetupShortLong(tif, 257,
       dir, td->td_imagelength);
   break;
  case 2:
   TIFFSetupShortLong(tif, 322,
       dir++, td->td_tilewidth);
   TIFFSetupShortLong(tif, 323,
       dir, td->td_tilelength);
   break;
  case 7:
   TIFFSetupShort(tif, 259,
       dir, td->td_compression);
   break;
  case 8:
   TIFFSetupShort(tif, 262,
       dir, td->td_photometric);
   break;
  case 4:
   { ((dir))->tdir_tag = ((286)); ((dir))->tdir_type = ((TIFF_RATIONAL)); ((dir))->tdir_count = 1; if (!TIFFWriteRationalArray(((tif)), ((dir)), &((td->td_xposition)))) goto bad; ((dir)+1)->tdir_tag = ((287)); ((dir)+1)->tdir_type = ((TIFF_RATIONAL)); ((dir)+1)->tdir_count = 1; if (!TIFFWriteRationalArray(((tif)), ((dir)+1), &((td->td_yposition)))) goto bad; (dir)++; }

                                           ;
   break;
  case 3:
   { ((dir))->tdir_tag = ((282)); ((dir))->tdir_type = ((TIFF_RATIONAL)); ((dir))->tdir_count = 1; if (!TIFFWriteRationalArray(((tif)), ((dir)), &((td->td_xresolution)))) goto bad; ((dir)+1)->tdir_tag = ((283)); ((dir)+1)->tdir_type = ((TIFF_RATIONAL)); ((dir)+1)->tdir_count = 1; if (!TIFFWriteRationalArray(((tif)), ((dir)+1), &((td->td_yresolution)))) goto bad; (dir)++; }

                                               ;
   break;
  case 6:
  case 18:
  case 19:
  case 32:
   if (!TIFFWritePerSampleShorts(tif, fip->field_tag, dir))
    goto bad;
   break;
  case 33:
  case 34:
   if (!TIFFWritePerSampleAnys(tif,
       _TIFFSampleToTagType(tif), fip->field_tag, dir))
    goto bad;
   break;
  case 23:
  case 37:
  case 39:
   if (!TIFFSetupShortPair(tif, fip->field_tag, dir))
    goto bad;
   break;
  case 46:
   if (!TIFFWriteInkNames(tif, dir))
    goto bad;
   break;
  case 44:
   if (!TIFFWriteTransferFunction(tif, dir))
    goto bad;
   break;
  case 49:




   dir->tdir_tag = (uint16) fip->field_tag;
   dir->tdir_type = (uint16) TIFF_LONG;
   dir->tdir_count = (uint32) td->td_nsubifd;
   if (!TIFFWriteLongArray(tif, dir, td->td_subifd))
    goto bad;
# 325 "tif_dirwrite.c"
   if (dir->tdir_count > 0) {
    tif->tif_flags |= 0x2000;
    tif->tif_nsubifd = (uint16) dir->tdir_count;
    if (dir->tdir_count > 1)
     tif->tif_subifdoff = dir->tdir_offset;
    else
     tif->tif_subifdoff = (uint32)(
           tif->tif_diroff
         + sizeof (uint16)
         + ((char*)&dir->tdir_offset-data));
   }
   break;
  default:

   if (fip->field_tag == 336) {
    if (!TIFFSetupShortPair(tif, fip->field_tag, dir))
     goto bad;
   }
   else if (!TIFFWriteNormalTag(tif, dir, fip))
    goto bad;
   break;
  }
  dir++;

                if( fip->field_bit != 65 )
                    (fields[(fip->field_bit)/32] &= ~(((unsigned long)1L)<<((fip->field_bit)&0x1f)));
 }




 dircount = (uint16) nfields;
 diroff = (uint32) tif->tif_nextdiroff;
 if (tif->tif_flags & 0x0080) {
# 369 "tif_dirwrite.c"
  for (dir = (TIFFDirEntry*) data; dircount; dir++, dircount--) {
   TIFFSwabArrayOfShort(&dir->tdir_tag, 2);
   TIFFSwabArrayOfLong(&dir->tdir_count, 2);
  }
  dircount = (uint16) nfields;
  TIFFSwabShort(&dircount);
  TIFFSwabLong(&diroff);
 }
 (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)(tif->tif_diroff),
# 377 "tif_dirwrite.c" 3 4
       0
# 377 "tif_dirwrite.c"
       ));
 if (!(((*(tif)->tif_writeproc)((tif)->tif_clientdata,(tdata_t) &dircount,(tsize_t) sizeof (dircount))) == (tsize_t) sizeof (dircount))) {
  TIFFErrorExt(tif->tif_clientdata, tif->tif_name, "Error writing directory count");
  goto bad;
 }
 if (!(((*(tif)->tif_writeproc)((tif)->tif_clientdata,(tdata_t) data,(tsize_t) dirsize)) == (tsize_t) dirsize)) {
  TIFFErrorExt(tif->tif_clientdata, tif->tif_name, "Error writing directory contents");
  goto bad;
 }
 if (!(((*(tif)->tif_writeproc)((tif)->tif_clientdata,(tdata_t) &diroff,(tsize_t) sizeof (diroff))) == (tsize_t) sizeof (diroff))) {
  TIFFErrorExt(tif->tif_clientdata, tif->tif_name, "Error writing directory link");
  goto bad;
 }
 if (done) {
  TIFFFreeDirectory(tif);
  tif->tif_flags &= ~0x0008;
  (*tif->tif_cleanup)(tif);





  TIFFCreateDirectory(tif);
 }
 _TIFFfree(data);
 return (1);
bad:
 _TIFFfree(data);
 return (0);
}


int
TIFFWriteDirectory(TIFF* tif)
{
 return _TIFFWriteDirectory(tif, 1);
}







int
TIFFCheckpointDirectory(TIFF* tif)
{
 int rc;

 if (tif->tif_dir.td_stripoffset == 
# 426 "tif_dirwrite.c" 3 4
                                   ((void *)0)
# 426 "tif_dirwrite.c"
                                       )
     (void) TIFFSetupStrips(tif);
 rc = _TIFFWriteDirectory(tif, 0);
 (void) TIFFSetWriteOffset(tif, ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)(0),
# 429 "tif_dirwrite.c" 3 4
                               2
# 429 "tif_dirwrite.c"
                               )));
 return rc;
}




static int
TIFFWriteNormalTag(TIFF* tif, TIFFDirEntry* dir, const TIFFFieldInfo* fip)
{
 uint16 wc = (uint16) fip->field_writecount;
 uint32 wc2;

 dir->tdir_tag = (uint16) fip->field_tag;
 dir->tdir_type = (uint16) fip->field_type;
 dir->tdir_count = wc;

 switch (fip->field_type) {
 case TIFF_SHORT:
 case TIFF_SSHORT:
  if (fip->field_passcount) {
   uint16* wp;
   if (wc == (uint16) -3) {
    TIFFGetField(tif, fip->field_tag, &wc2, &wp);
    dir->tdir_count = wc2;
   } else {
    TIFFGetField(tif, fip->field_tag, &wc, &wp);
    dir->tdir_count = wc;
   }
   if (!TIFFWriteShortArray(tif, dir, wp))
    return 0;
  } else {
   if (wc == 1) {
    uint16 sv;
    TIFFGetField(tif, fip->field_tag, &sv);
    dir->tdir_offset =
     ((uint32) ((tif)->tif_header.tiff_magic == 0x4d4d ? ((sv) & (tif)->tif_typemask[dir->tdir_type]) << (tif)->tif_typeshift[dir->tdir_type] : (sv) & (tif)->tif_typemask[dir->tdir_type]));
   } else {
    uint16* wp;
    TIFFGetField(tif, fip->field_tag, &wp);
    if (!TIFFWriteShortArray(tif, dir, wp))
     return 0;
   }
  }
  break;
 case TIFF_LONG:
 case TIFF_SLONG:
 case TIFF_IFD:
  if (fip->field_passcount) {
   uint32* lp;
   if (wc == (uint16) -3) {
    TIFFGetField(tif, fip->field_tag, &wc2, &lp);
    dir->tdir_count = wc2;
   } else {
    TIFFGetField(tif, fip->field_tag, &wc, &lp);
    dir->tdir_count = wc;
   }
   if (!TIFFWriteLongArray(tif, dir, lp))
    return 0;
  } else {
   if (wc == 1) {

    TIFFGetField(tif, fip->field_tag,
          &dir->tdir_offset);
   } else {
    uint32* lp;
    TIFFGetField(tif, fip->field_tag, &lp);
    if (!TIFFWriteLongArray(tif, dir, lp))
     return 0;
   }
  }
  break;
 case TIFF_RATIONAL:
 case TIFF_SRATIONAL:
  if (fip->field_passcount) {
   float* fp;
   if (wc == (uint16) -3) {
    TIFFGetField(tif, fip->field_tag, &wc2, &fp);
    dir->tdir_count = wc2;
   } else {
    TIFFGetField(tif, fip->field_tag, &wc, &fp);
    dir->tdir_count = wc;
   }
   if (!TIFFWriteRationalArray(tif, dir, fp))
    return 0;
  } else {
   if (wc == 1) {
    float fv;
    TIFFGetField(tif, fip->field_tag, &fv);
    if (!TIFFWriteRationalArray(tif, dir, &fv))
     return 0;
   } else {
    float* fp;
    TIFFGetField(tif, fip->field_tag, &fp);
    if (!TIFFWriteRationalArray(tif, dir, fp))
     return 0;
   }
  }
  break;
 case TIFF_FLOAT:
  if (fip->field_passcount) {
   float* fp;
   if (wc == (uint16) -3) {
    TIFFGetField(tif, fip->field_tag, &wc2, &fp);
    dir->tdir_count = wc2;
   } else {
    TIFFGetField(tif, fip->field_tag, &wc, &fp);
    dir->tdir_count = wc;
   }
   if (!TIFFWriteFloatArray(tif, dir, fp))
    return 0;
  } else {
   if (wc == 1) {
    float fv;
    TIFFGetField(tif, fip->field_tag, &fv);
    if (!TIFFWriteFloatArray(tif, dir, &fv))
     return 0;
   } else {
    float* fp;
    TIFFGetField(tif, fip->field_tag, &fp);
    if (!TIFFWriteFloatArray(tif, dir, fp))
     return 0;
   }
  }
  break;
 case TIFF_DOUBLE:
  if (fip->field_passcount) {
   double* dp;
   if (wc == (uint16) -3) {
    TIFFGetField(tif, fip->field_tag, &wc2, &dp);
    dir->tdir_count = wc2;
   } else {
    TIFFGetField(tif, fip->field_tag, &wc, &dp);
    dir->tdir_count = wc;
   }
   if (!TIFFWriteDoubleArray(tif, dir, dp))
    return 0;
  } else {
   if (wc == 1) {
    double dv;
    TIFFGetField(tif, fip->field_tag, &dv);
    if (!TIFFWriteDoubleArray(tif, dir, &dv))
     return 0;
   } else {
    double* dp;
    TIFFGetField(tif, fip->field_tag, &dp);
    if (!TIFFWriteDoubleArray(tif, dir, dp))
     return 0;
   }
  }
  break;
 case TIFF_ASCII:
  {
                    char* cp;
                    if (fip->field_passcount)
                        TIFFGetField(tif, fip->field_tag, &wc, &cp);
                    else
                        TIFFGetField(tif, fip->field_tag, &cp);

                    dir->tdir_count = (uint32) (strlen(cp) + 1);
                    if (!TIFFWriteByteArray(tif, dir, cp))
                        return (0);
  }
  break;

        case TIFF_BYTE:
        case TIFF_SBYTE:
  if (fip->field_passcount) {
   char* cp;
   if (wc == (uint16) -3) {
    TIFFGetField(tif, fip->field_tag, &wc2, &cp);
    dir->tdir_count = wc2;
   } else {
    TIFFGetField(tif, fip->field_tag, &wc, &cp);
    dir->tdir_count = wc;
   }
   if (!TIFFWriteByteArray(tif, dir, cp))
    return 0;
  } else {
   if (wc == 1) {
    char cv;
    TIFFGetField(tif, fip->field_tag, &cv);
    if (!TIFFWriteByteArray(tif, dir, &cv))
     return 0;
   } else {
    char* cp;
    TIFFGetField(tif, fip->field_tag, &cp);
    if (!TIFFWriteByteArray(tif, dir, cp))
     return 0;
   }
  }
                break;

 case TIFF_UNDEFINED:
  { char* cp;
    if (wc == (unsigned short) -1) {
   TIFFGetField(tif, fip->field_tag, &wc, &cp);
   dir->tdir_count = wc;
    } else if (wc == (unsigned short) -3) {
   TIFFGetField(tif, fip->field_tag, &wc2, &cp);
   dir->tdir_count = wc2;
    } else
   TIFFGetField(tif, fip->field_tag, &cp);
    if (!TIFFWriteByteArray(tif, dir, cp))
   return (0);
  }
  break;

        case TIFF_NOTYPE:
                break;
 }
 return (1);
}





static void
TIFFSetupShortLong(TIFF* tif, ttag_t tag, TIFFDirEntry* dir, uint32 v)
{
 dir->tdir_tag = (uint16) tag;
 dir->tdir_count = 1;
 if (v > 0xffffL) {
  dir->tdir_type = (short) TIFF_LONG;
  dir->tdir_offset = v;
 } else {
  dir->tdir_type = (short) TIFF_SHORT;
  dir->tdir_offset = ((uint32) ((tif)->tif_header.tiff_magic == 0x4d4d ? ((v) & (tif)->tif_typemask[(int) TIFF_SHORT]) << (tif)->tif_typeshift[(int) TIFF_SHORT] : (v) & (tif)->tif_typemask[(int) TIFF_SHORT]));
 }
}




static void
TIFFSetupShort(TIFF* tif, ttag_t tag, TIFFDirEntry* dir, uint16 v)
{
 dir->tdir_tag = (uint16) tag;
 dir->tdir_count = 1;
 dir->tdir_type = (short) TIFF_SHORT;
 dir->tdir_offset = ((uint32) ((tif)->tif_header.tiff_magic == 0x4d4d ? ((v) & (tif)->tif_typemask[(int) TIFF_SHORT]) << (tif)->tif_typeshift[(int) TIFF_SHORT] : (v) & (tif)->tif_typemask[(int) TIFF_SHORT]));
}
# 681 "tif_dirwrite.c"
static int
TIFFWritePerSampleShorts(TIFF* tif, ttag_t tag, TIFFDirEntry* dir)
{
 uint16 buf[10], v;
 uint16* w = buf;
 uint16 i, samples = tif->tif_dir.td_samplesperpixel;
 int status;

 if (samples > (sizeof (buf) / sizeof (buf[0]))) {
  w = (uint16*) _TIFFmalloc(samples * sizeof (uint16));
  if (w == 
# 691 "tif_dirwrite.c" 3 4
          ((void *)0)
# 691 "tif_dirwrite.c"
              ) {
   TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
       "No space to write per-sample shorts");
   return (0);
  }
 }
 TIFFGetField(tif, tag, &v);
 for (i = 0; i < samples; i++)
  w[i] = v;

 dir->tdir_tag = (uint16) tag;
 dir->tdir_type = (uint16) TIFF_SHORT;
 dir->tdir_count = samples;
 status = TIFFWriteShortArray(tif, dir, w);
 if (w != buf)
  _TIFFfree((char*) w);
 return (status);
}






static int
TIFFWritePerSampleAnys(TIFF* tif,
    TIFFDataType type, ttag_t tag, TIFFDirEntry* dir)
{
 double buf[10], v;
 double* w = buf;
 uint16 i, samples = tif->tif_dir.td_samplesperpixel;
 int status;

 if (samples > (sizeof (buf) / sizeof (buf[0]))) {
  w = (double*) _TIFFmalloc(samples * sizeof (double));
  if (w == 
# 726 "tif_dirwrite.c" 3 4
          ((void *)0)
# 726 "tif_dirwrite.c"
              ) {
   TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
       "No space to write per-sample values");
   return (0);
  }
 }
 TIFFGetField(tif, tag, &v);
 for (i = 0; i < samples; i++)
  w[i] = v;
 status = TIFFWriteAnyArray(tif, type, tag, dir, samples, w);
 if (w != buf)
  _TIFFfree(w);
 return (status);
}






static int
TIFFSetupShortPair(TIFF* tif, ttag_t tag, TIFFDirEntry* dir)
{
 uint16 v[2];

 TIFFGetField(tif, tag, &v[0], &v[1]);

 dir->tdir_tag = (uint16) tag;
 dir->tdir_type = (uint16) TIFF_SHORT;
 dir->tdir_count = 2;
 return (TIFFWriteShortArray(tif, dir, v));
}






static int
TIFFWriteShortTable(TIFF* tif,
    ttag_t tag, TIFFDirEntry* dir, uint32 n, uint16** table)
{
 uint32 i, off;

 dir->tdir_tag = (uint16) tag;
 dir->tdir_type = (short) TIFF_SHORT;

 dir->tdir_count = (uint32) (1L<<tif->tif_dir.td_bitspersample);
 off = tif->tif_dataoff;
 for (i = 0; i < n; i++)
  if (!TIFFWriteData(tif, dir, (char *)table[i]))
   return (0);
 dir->tdir_count *= n;
 dir->tdir_offset = off;
 return (1);
}




static int
TIFFWriteByteArray(TIFF* tif, TIFFDirEntry* dir, char* cp)
{
 if (dir->tdir_count > 4) {
  if (!TIFFWriteData(tif, dir, cp))
   return (0);
 } else
  _TIFFmemcpy(&dir->tdir_offset, cp, dir->tdir_count);
 return (1);
}





static int
TIFFWriteShortArray(TIFF* tif, TIFFDirEntry* dir, uint16* v)
{
 if (dir->tdir_count <= 2) {
  if (tif->tif_header.tiff_magic == 0x4d4d) {
   dir->tdir_offset = (uint32) ((long) v[0] << 16);
   if (dir->tdir_count == 2)
    dir->tdir_offset |= v[1] & 0xffff;
  } else {
   dir->tdir_offset = v[0] & 0xffff;
   if (dir->tdir_count == 2)
    dir->tdir_offset |= (long) v[1] << 16;
  }
  return (1);
 } else
  return (TIFFWriteData(tif, dir, (char*) v));
}





static int
TIFFWriteLongArray(TIFF* tif, TIFFDirEntry* dir, uint32* v)
{
 if (dir->tdir_count == 1) {
  dir->tdir_offset = v[0];
  return (1);
 } else
  return (TIFFWriteData(tif, dir, (char*) v));
}





static int
TIFFWriteRationalArray(TIFF* tif, TIFFDirEntry* dir, float* v)
{
 uint32 i;
 uint32* t;
 int status;

 t = (uint32*) _TIFFmalloc(2 * dir->tdir_count * sizeof (uint32));
 if (t == 
# 845 "tif_dirwrite.c" 3 4
         ((void *)0)
# 845 "tif_dirwrite.c"
             ) {
  TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
      "No space to write RATIONAL array");
  return (0);
 }
 for (i = 0; i < dir->tdir_count; i++) {
  float fv = v[i];
  int sign = 1;
  uint32 den;

  if (fv < 0) {
   if (dir->tdir_type == TIFF_RATIONAL) {
    TIFFWarningExt(tif->tif_clientdata, tif->tif_name,
 "\"%s\": Information lost writing value (%g) as (unsigned) RATIONAL",
    TIFFFieldWithTag(tif,dir->tdir_tag)->field_name,
    fv);
    fv = 0;
   } else
    fv = -fv, sign = -1;
  }
  den = 1L;
  if (fv > 0) {
   while (fv < 1L<<(31-3) && den < 1L<<(31-3))
    fv *= 1<<3, den *= 1L<<3;
  }
  t[2*i+0] = (uint32) (sign * (fv + 0.5));
  t[2*i+1] = den;
 }
 status = TIFFWriteData(tif, dir, (char *)t);
 _TIFFfree((char*) t);
 return (status);
}

static int
TIFFWriteFloatArray(TIFF* tif, TIFFDirEntry* dir, float* v)
{
 ;
 if (dir->tdir_count == 1) {
  dir->tdir_offset = *(uint32*) &v[0];
  return (1);
 } else
  return (TIFFWriteData(tif, dir, (char*) v));
}

static int
TIFFWriteDoubleArray(TIFF* tif, TIFFDirEntry* dir, double* v)
{
 ;
 return (TIFFWriteData(tif, dir, (char*) v));
}
# 905 "tif_dirwrite.c"
static int
TIFFWriteAnyArray(TIFF* tif,
    TIFFDataType type, ttag_t tag, TIFFDirEntry* dir, uint32 n, double* v)
{
 char buf[10 * sizeof(double)];
 char* w = buf;
 int i, status = 0;

 if (n * TIFFDataWidth(type) > sizeof buf) {
  w = (char*) _TIFFmalloc(n * TIFFDataWidth(type));
  if (w == 
# 915 "tif_dirwrite.c" 3 4
          ((void *)0)
# 915 "tif_dirwrite.c"
              ) {
   TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
       "No space to write array");
   return (0);
  }
 }

 dir->tdir_tag = (uint16) tag;
 dir->tdir_type = (uint16) type;
 dir->tdir_count = n;

 switch (type) {
 case TIFF_BYTE:
  {
   uint8* bp = (uint8*) w;
   for (i = 0; i < (int) n; i++)
    bp[i] = (uint8) v[i];
   if (!TIFFWriteByteArray(tif, dir, (char*) bp))
    goto out;
  }
  break;
 case TIFF_SBYTE:
  {
   int8* bp = (int8*) w;
   for (i = 0; i < (int) n; i++)
    bp[i] = (int8) v[i];
   if (!TIFFWriteByteArray(tif, dir, (char*) bp))
    goto out;
  }
  break;
 case TIFF_SHORT:
  {
   uint16* bp = (uint16*) w;
   for (i = 0; i < (int) n; i++)
    bp[i] = (uint16) v[i];
   if (!TIFFWriteShortArray(tif, dir, (uint16*)bp))
    goto out;
  }
  break;
 case TIFF_SSHORT:
  {
   int16* bp = (int16*) w;
   for (i = 0; i < (int) n; i++)
    bp[i] = (int16) v[i];
   if (!TIFFWriteShortArray(tif, dir, (uint16*)bp))
    goto out;
  }
  break;
 case TIFF_LONG:
  {
   uint32* bp = (uint32*) w;
   for (i = 0; i < (int) n; i++)
    bp[i] = (uint32) v[i];
   if (!TIFFWriteLongArray(tif, dir, bp))
    goto out;
  }
  break;
 case TIFF_SLONG:
  {
   int32* bp = (int32*) w;
   for (i = 0; i < (int) n; i++)
    bp[i] = (int32) v[i];
   if (!TIFFWriteLongArray(tif, dir, (uint32*) bp))
    goto out;
  }
  break;
 case TIFF_FLOAT:
  {
   float* bp = (float*) w;
   for (i = 0; i < (int) n; i++)
    bp[i] = (float) v[i];
   if (!TIFFWriteFloatArray(tif, dir, bp))
    goto out;
  }
  break;
 case TIFF_DOUBLE:
  return (TIFFWriteDoubleArray(tif, dir, v));
 default:





  goto out;
 }
 status = 1;
 out:
 if (w != buf)
  _TIFFfree(w);
 return (status);
}

static int
TIFFWriteTransferFunction(TIFF* tif, TIFFDirEntry* dir)
{
 TIFFDirectory* td = &tif->tif_dir;
 tsize_t n = (1L<<td->td_bitspersample) * sizeof (uint16);
 uint16** tf = td->td_transferfunction;
 int ncols;







 switch (td->td_samplesperpixel - td->td_extrasamples) {
 default: if (_TIFFmemcmp(tf[0], tf[2], n)) { ncols = 3; break; }
 case 2: if (_TIFFmemcmp(tf[0], tf[1], n)) { ncols = 3; break; }
 case 1: case 0: ncols = 1;
 }
 return (TIFFWriteShortTable(tif,
     301, dir, ncols, tf));
}

static int
TIFFWriteInkNames(TIFF* tif, TIFFDirEntry* dir)
{
 TIFFDirectory* td = &tif->tif_dir;

 dir->tdir_tag = 333;
 dir->tdir_type = (short) TIFF_ASCII;
 dir->tdir_count = td->td_inknameslen;
 return (TIFFWriteByteArray(tif, dir, td->td_inknames));
}




static int
TIFFWriteData(TIFF* tif, TIFFDirEntry* dir, char* cp)
{
 tsize_t cc;

 if (tif->tif_flags & 0x0080) {
  switch (dir->tdir_type) {
  case TIFF_SHORT:
  case TIFF_SSHORT:
   TIFFSwabArrayOfShort((uint16*) cp, dir->tdir_count);
   break;
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_FLOAT:
   TIFFSwabArrayOfLong((uint32*) cp, dir->tdir_count);
   break;
  case TIFF_RATIONAL:
  case TIFF_SRATIONAL:
   TIFFSwabArrayOfLong((uint32*) cp, 2*dir->tdir_count);
   break;
  case TIFF_DOUBLE:
   TIFFSwabArrayOfDouble((double*) cp, dir->tdir_count);
   break;
  }
 }
 dir->tdir_offset = tif->tif_dataoff;
 cc = dir->tdir_count * TIFFDataWidth((TIFFDataType) dir->tdir_type);
 if ((((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)((toff_t) dir->tdir_offset),
# 1071 "tif_dirwrite.c" 3 4
    0
# 1071 "tif_dirwrite.c"
    )) == (toff_t) dir->tdir_offset) &&
     (((*(tif)->tif_writeproc)((tif)->tif_clientdata,(tdata_t) cp,(tsize_t) cc)) == (tsize_t) cc)) {
  tif->tif_dataoff += (cc + 1) & ~1;
  return (1);
 }
 TIFFErrorExt(tif->tif_clientdata, tif->tif_name, "Error writing data for field \"%s\"",
     TIFFFieldWithTag(tif, dir->tdir_tag)->field_name);
 return (0);
}
# 1088 "tif_dirwrite.c"
int
TIFFRewriteDirectory( TIFF *tif )
{
    static const char module[] = "TIFFRewriteDirectory";


    if( tif->tif_diroff == 0 )
        return TIFFWriteDirectory( tif );







    if (tif->tif_header.tiff_diroff == tif->tif_diroff)
    {
        tif->tif_header.tiff_diroff = 0;
        tif->tif_diroff = 0;

        ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)((toff_t)(2 +2)),
# 1108 "tif_dirwrite.c" 3 4
       0
# 1108 "tif_dirwrite.c"
       ))
                ;
        if (!(((*(tif)->tif_writeproc)((tif)->tif_clientdata,(tdata_t) &(tif->tif_header.tiff_diroff),(tsize_t) sizeof (tif->tif_diroff))) == (tsize_t) sizeof (tif->tif_diroff))
                                              )
        {
   TIFFErrorExt(tif->tif_clientdata, tif->tif_name, "Error updating TIFF header");
            return (0);
        }
    }
    else
    {
        toff_t nextdir, off;

 nextdir = tif->tif_header.tiff_diroff;
 do {
  uint16 dircount;

  if (!(((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)((toff_t) nextdir),
# 1125 "tif_dirwrite.c" 3 4
      0
# 1125 "tif_dirwrite.c"
      )) == (toff_t) nextdir) ||
      !(((*(tif)->tif_readproc)((tif)->tif_clientdata,(tdata_t) &dircount,(tsize_t)(sizeof (dircount)))) == (tsize_t)(sizeof (dircount)))) {
   TIFFErrorExt(tif->tif_clientdata, module, "Error fetching directory count");
   return (0);
  }
  if (tif->tif_flags & 0x0080)
   TIFFSwabShort(&dircount);
  (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)(dircount * sizeof (TIFFDirEntry)),
# 1132 "tif_dirwrite.c" 3 4
        1
# 1132 "tif_dirwrite.c"
        ))
                                                 ;
  if (!(((*(tif)->tif_readproc)((tif)->tif_clientdata,(tdata_t) &nextdir,(tsize_t)(sizeof (nextdir)))) == (tsize_t)(sizeof (nextdir)))) {
   TIFFErrorExt(tif->tif_clientdata, module, "Error fetching directory link");
   return (0);
  }
  if (tif->tif_flags & 0x0080)
   TIFFSwabLong(&nextdir);
 } while (nextdir != tif->tif_diroff && nextdir != 0);
        off = ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)(0),
# 1141 "tif_dirwrite.c" 3 4
             1
# 1141 "tif_dirwrite.c"
             ));
        (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)(off - (toff_t)sizeof(nextdir)),
# 1142 "tif_dirwrite.c" 3 4
              0
# 1142 "tif_dirwrite.c"
              ));
        tif->tif_diroff = 0;
 if (!(((*(tif)->tif_writeproc)((tif)->tif_clientdata,(tdata_t) &(tif->tif_diroff),(tsize_t) sizeof (nextdir))) == (tsize_t) sizeof (nextdir))) {
  TIFFErrorExt(tif->tif_clientdata, module, "Error writing directory link");
  return (0);
 }
    }





    return TIFFWriteDirectory( tif );
}






static int
TIFFLinkDirectory(TIFF* tif)
{
 static const char module[] = "TIFFLinkDirectory";
 toff_t nextdir;
 toff_t diroff, off;

 tif->tif_diroff = (((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)((toff_t) 0),
# 1169 "tif_dirwrite.c" 3 4
                   2
# 1169 "tif_dirwrite.c"
                   ))+1) &~ 1;
 diroff = tif->tif_diroff;
 if (tif->tif_flags & 0x0080)
  TIFFSwabLong(&diroff);




        if (tif->tif_flags & 0x2000) {
  (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)(tif->tif_subifdoff),
# 1178 "tif_dirwrite.c" 3 4
        0
# 1178 "tif_dirwrite.c"
        ));
  if (!(((*(tif)->tif_writeproc)((tif)->tif_clientdata,(tdata_t) &diroff,(tsize_t) sizeof (diroff))) == (tsize_t) sizeof (diroff))) {
   TIFFErrorExt(tif->tif_clientdata, module,
       "%s: Error writing SubIFD directory link",
       tif->tif_name);
   return (0);
  }





  if (--tif->tif_nsubifd)
   tif->tif_subifdoff += sizeof (diroff);
  else
   tif->tif_flags &= ~0x2000;
  return (1);
 }

 if (tif->tif_header.tiff_diroff == 0) {



  tif->tif_header.tiff_diroff = tif->tif_diroff;
  (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)((toff_t)(2 +2)),
# 1202 "tif_dirwrite.c" 3 4
        0
# 1202 "tif_dirwrite.c"
        ))

                                             ;
  if (!(((*(tif)->tif_writeproc)((tif)->tif_clientdata,(tdata_t) &diroff,(tsize_t) sizeof (diroff))) == (tsize_t) sizeof (diroff))) {
   TIFFErrorExt(tif->tif_clientdata, tif->tif_name, "Error writing TIFF header");
   return (0);
  }
  return (1);
 }



 nextdir = tif->tif_header.tiff_diroff;
 do {
  uint16 dircount;

  if (!(((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)((toff_t) nextdir),
# 1218 "tif_dirwrite.c" 3 4
      0
# 1218 "tif_dirwrite.c"
      )) == (toff_t) nextdir) ||
      !(((*(tif)->tif_readproc)((tif)->tif_clientdata,(tdata_t) &dircount,(tsize_t)(sizeof (dircount)))) == (tsize_t)(sizeof (dircount)))) {
   TIFFErrorExt(tif->tif_clientdata, module, "Error fetching directory count");
   return (0);
  }
  if (tif->tif_flags & 0x0080)
   TIFFSwabShort(&dircount);
  (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)(dircount * sizeof (TIFFDirEntry)),
# 1225 "tif_dirwrite.c" 3 4
        1
# 1225 "tif_dirwrite.c"
        ))
                                                 ;
  if (!(((*(tif)->tif_readproc)((tif)->tif_clientdata,(tdata_t) &nextdir,(tsize_t)(sizeof (nextdir)))) == (tsize_t)(sizeof (nextdir)))) {
   TIFFErrorExt(tif->tif_clientdata, module, "Error fetching directory link");
   return (0);
  }
  if (tif->tif_flags & 0x0080)
   TIFFSwabLong(&nextdir);
 } while (nextdir != 0);
        off = ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)(0),
# 1234 "tif_dirwrite.c" 3 4
             1
# 1234 "tif_dirwrite.c"
             ));
        (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(toff_t)(off - (toff_t)sizeof(nextdir)),
# 1235 "tif_dirwrite.c" 3 4
              0
# 1235 "tif_dirwrite.c"
              ));
 if (!(((*(tif)->tif_writeproc)((tif)->tif_clientdata,(tdata_t) &diroff,(tsize_t) sizeof (diroff))) == (tsize_t) sizeof (diroff))) {
  TIFFErrorExt(tif->tif_clientdata, module, "Error writing directory link");
  return (0);
 }
 return (1);
}
