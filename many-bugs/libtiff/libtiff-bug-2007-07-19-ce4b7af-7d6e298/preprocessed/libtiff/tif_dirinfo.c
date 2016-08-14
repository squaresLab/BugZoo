# 1 "tif_dirinfo.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "tif_dirinfo.c"
# 32 "tif_dirinfo.c"
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
# 68 "tiff.h"

# 68 "tiff.h"
typedef signed char int8;
typedef unsigned char uint8;

typedef signed short int16;
typedef unsigned short uint16;

typedef signed int int32;
typedef unsigned int uint32;

typedef signed long int64;
typedef unsigned long uint64;
# 88 "tiff.h"
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
# 125 "tiff.h"
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
# 34 "tiffio.h" 2
# 1 "tiffvers.h" 1
# 35 "tiffio.h" 2





typedef struct tiff TIFF;
# 65 "tiffio.h"
typedef signed long tmsize_t;


typedef uint32 ttag_t;
typedef uint16 tdir_t;
typedef uint16 tsample_t;
typedef uint32 tstrile_t;
typedef tstrile_t tstrip_t;
typedef tstrile_t ttile_t;
typedef tmsize_t tsize_t;
typedef void* tdata_t;
typedef uint64 toff_t;
# 104 "tiffio.h"
typedef void* thandle_t;
# 136 "tiffio.h"
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
# 188 "tiffio.h"
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
 uint16 SubsamplingHor;
 uint16 SubsamplingVer;
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
# 251 "tiffio.h"
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

# 259 "tiffio.h" 2
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stdarg.h" 1 3 4
# 260 "tiffio.h" 2
# 269 "tiffio.h"

# 269 "tiffio.h"
typedef void (*TIFFErrorHandler)(const char*, const char*, va_list);
typedef void (*TIFFErrorHandlerExt)(thandle_t, const char*, const char*, va_list);
typedef tmsize_t (*TIFFReadWriteProc)(thandle_t, void*, tmsize_t);
typedef uint64 (*TIFFSeekProc)(thandle_t, uint64, int);
typedef int (*TIFFCloseProc)(thandle_t);
typedef uint64 (*TIFFSizeProc)(thandle_t);
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
# 311 "tiffio.h"
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
extern int TIFFReadCustomDirectory(TIFF* tif, uint64 diroff, const TIFFFieldArray* infoarray);
extern int TIFFReadEXIFDirectory(TIFF* tif, uint64 diroff);
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
extern int TIFFWriteDirectory(TIFF *);
extern int TIFFCheckpointDirectory(TIFF *);
extern int TIFFRewriteDirectory(TIFF *);
# 409 "tiffio.h"
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
extern void TIFFError(const char*, const char*, ...);
extern void TIFFErrorExt(thandle_t, const char*, const char*, ...);
extern void TIFFWarning(const char*, const char*, ...);
extern void TIFFWarningExt(thandle_t, const char*, const char*, ...);
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
extern void TIFFSetWriteOffset(TIFF* tif, uint64 off);
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
# 61 "tiffiop.h" 2
# 1 "tif_dir.h" 1
# 33 "tif_dir.h"
typedef struct {
 const TIFFField *info;
 int count;
 void *value;
} TIFFTagValue;




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



 uint32 td_stripsperimage;
 uint32 td_nstrips;
 uint64* td_stripoffset;
 uint64* td_stripbytecount;
 int td_stripbytecountsorted;
 uint16 td_nsubifd;
 uint64* td_subifd;

 uint16 td_ycbcrsubsampling[2];
 uint16 td_ycbcrpositioning;

 uint16* td_transferfunction[3];

 int td_inknameslen;
 char* td_inknames;

 int td_customValueCount;
        TIFFTagValue *td_customValues;
} TIFFDirectory;
# 168 "tif_dir.h"
typedef enum {
 TIFF_SETGET_UNDEFINED = 0,
 TIFF_SETGET_ASCII = 1,
 TIFF_SETGET_UINT8 = 2,
 TIFF_SETGET_SINT8 = 3,
 TIFF_SETGET_UINT16 = 4,
 TIFF_SETGET_SINT16 = 5,
 TIFF_SETGET_UINT32 = 6,
 TIFF_SETGET_SINT32 = 7,
 TIFF_SETGET_UINT64 = 8,
 TIFF_SETGET_SINT64 = 9,
 TIFF_SETGET_FLOAT = 10,
 TIFF_SETGET_DOUBLE = 11,
 TIFF_SETGET_IFD8 = 12,
 TIFF_SETGET_INT = 13,
 TIFF_SETGET_UINT16_PAIR = 14,
 TIFF_SETGET_C0_ASCII = 15,
 TIFF_SETGET_C0_UINT8 = 16,
 TIFF_SETGET_C0_SINT8 = 17,
 TIFF_SETGET_C0_UINT16 = 18,
 TIFF_SETGET_C0_SINT16 = 19,
 TIFF_SETGET_C0_UINT32 = 20,
 TIFF_SETGET_C0_SINT32 = 21,
 TIFF_SETGET_C0_UINT64 = 22,
 TIFF_SETGET_C0_SINT64 = 23,
 TIFF_SETGET_C0_FLOAT = 24,
 TIFF_SETGET_C0_DOUBLE = 25,
 TIFF_SETGET_C0_IFD8 = 26,
 TIFF_SETGET_C16_ASCII = 27,
 TIFF_SETGET_C16_UINT8 = 28,
 TIFF_SETGET_C16_SINT8 = 29,
 TIFF_SETGET_C16_UINT16 = 30,
 TIFF_SETGET_C16_SINT16 = 31,
 TIFF_SETGET_C16_UINT32 = 32,
 TIFF_SETGET_C16_SINT32 = 33,
 TIFF_SETGET_C16_UINT64 = 34,
 TIFF_SETGET_C16_SINT64 = 35,
 TIFF_SETGET_C16_FLOAT = 36,
 TIFF_SETGET_C16_DOUBLE = 37,
 TIFF_SETGET_C16_IFD8 = 38,
 TIFF_SETGET_C32_ASCII = 39,
 TIFF_SETGET_C32_UINT8 = 40,
 TIFF_SETGET_C32_SINT8 = 41,
 TIFF_SETGET_C32_UINT16 = 42,
 TIFF_SETGET_C32_SINT16 = 43,
 TIFF_SETGET_C32_UINT32 = 44,
 TIFF_SETGET_C32_SINT32 = 45,
 TIFF_SETGET_C32_UINT64 = 46,
 TIFF_SETGET_C32_SINT64 = 47,
 TIFF_SETGET_C32_FLOAT = 48,
 TIFF_SETGET_C32_DOUBLE = 49,
 TIFF_SETGET_C32_IFD8 = 50,
 TIFF_SETGET_OTHER = 51
} TIFFSetGetFieldType;





extern const TIFFFieldArray* _TIFFGetFields(void);
extern const TIFFFieldArray* _TIFFGetExifFields(void);
extern void _TIFFSetupFields(TIFF* tif, const TIFFFieldArray* infoarray);
extern void _TIFFPrintFieldInfo(TIFF*, FILE*);

typedef enum {
 tfiatImage,
 tfiatExif,
 tfiatOther
} TIFFFieldArrayType;

struct _TIFFFieldArray {
 TIFFFieldArrayType type;
 uint32 allocated_size;
 uint32 count;
 TIFFField* fields;
};

struct _TIFFField {
 uint32 field_tag;
 short field_readcount;
 short field_writecount;
 TIFFDataType field_type;
 uint32 reserved;
 TIFFSetGetFieldType set_field_type;
 TIFFSetGetFieldType get_field_type;
 unsigned short field_bit;
 unsigned char field_oktochange;
 unsigned char field_passcount;
 char* field_name;
 TIFFFieldArray* field_subfields;
};

extern int _TIFFMergeFields(TIFF*, const TIFFField[], uint32);
extern const TIFFField* _TIFFFindOrRegisterField(TIFF *, uint32, TIFFDataType);
extern TIFFField* _TIFFCreateAnonField(TIFF *, uint32, TIFFDataType);
# 62 "tiffiop.h" 2
# 85 "tiffiop.h"
typedef struct {
 uint16 tdir_tag;
 uint16 tdir_type;
 uint64 tdir_count;
 uint64 tdir_offset;
} TIFFDirEntry;

typedef struct client_info {
    struct client_info *next;
    void *data;
    char *name;
} TIFFClientInfoLink;





typedef unsigned char tidataval_t;
typedef tidataval_t* tidata_t;

typedef void (*TIFFVoidMethod)(TIFF*);
typedef int (*TIFFBoolMethod)(TIFF*);
typedef int (*TIFFPreMethod)(TIFF*, uint16);
typedef int (*TIFFCodeMethod)(TIFF* tif, uint8* buf, tmsize_t size, uint16 sample);
typedef int (*TIFFSeekMethod)(TIFF*, uint32);
typedef void (*TIFFPostMethod)(TIFF* tif, uint8* buf, tmsize_t size);
typedef uint32 (*TIFFStripMethod)(TIFF*, uint32);
typedef void (*TIFFTileMethod)(TIFF*, uint32*, uint32*);

struct tiff {
 char* tif_name;
 int tif_fd;
 int tif_mode;
 uint32 tif_flags;
# 138 "tiffiop.h"
 uint64 tif_diroff;
 uint64 tif_nextdiroff;
 uint64* tif_dirlist;
 uint16 tif_dirlistsize;
 uint16 tif_dirnumber;
 TIFFDirectory tif_dir;
 TIFFDirectory tif_customdir;
 union {
  TIFFHeaderCommon common;
  TIFFHeaderClassic classic;
  TIFFHeaderBig big;
 } tif_header;
 uint16 tif_header_size;
 uint32 tif_row;
 uint16 tif_curdir;
 uint32 tif_curstrip;
 uint64 tif_curoff;
 uint64 tif_dataoff;

 uint16 tif_nsubifd;
 uint64 tif_subifdoff;

 uint32 tif_col;
 uint32 tif_curtile;
 tmsize_t tif_tilesize;

 int tif_decodestatus;
 TIFFBoolMethod tif_fixuptags;
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
 uint8* tif_data;

 tmsize_t tif_scanlinesize;
 tmsize_t tif_scanlineskew;
 uint8* tif_rawdata;
 tmsize_t tif_rawdatasize;
 uint8* tif_rawcp;
 tmsize_t tif_rawcc;

 uint8* tif_base;
 tmsize_t tif_size;
 TIFFMapFileProc tif_mapproc;
 TIFFUnmapFileProc tif_unmapproc;

 thandle_t tif_clientdata;
 TIFFReadWriteProc tif_readproc;
 TIFFReadWriteProc tif_writeproc;
 TIFFSeekProc tif_seekproc;
 TIFFCloseProc tif_closeproc;
 TIFFSizeProc tif_sizeproc;

 TIFFPostMethod tif_postdecode;

 TIFFField** tif_fields;
 uint32 tif_nfields;
 const TIFFField* tif_foundfield;
 TIFFTagMethods tif_tagmethods;
 TIFFClientInfoLink* tif_clientinfo;


 TIFFFieldArray* tif_fieldscompat;
 uint32 tif_nfieldscompat;
};
# 270 "tiffiop.h"
extern int _TIFFgetMode(const char* mode, const char* module);
extern int _TIFFNoRowEncode(TIFF* tif, uint8* pp, tmsize_t cc, uint16 s);
extern int _TIFFNoStripEncode(TIFF* tif, uint8* pp, tmsize_t cc, uint16 s);
extern int _TIFFNoTileEncode(TIFF*, uint8* pp, tmsize_t cc, uint16 s);
extern int _TIFFNoRowDecode(TIFF* tif, uint8* pp, tmsize_t cc, uint16 s);
extern int _TIFFNoStripDecode(TIFF* tif, uint8* pp, tmsize_t cc, uint16 s);
extern int _TIFFNoTileDecode(TIFF*, uint8* pp, tmsize_t cc, uint16 s);
extern void _TIFFNoPostDecode(TIFF* tif, uint8* buf, tmsize_t cc);
extern int _TIFFNoPreCode(TIFF* tif, uint16 s);
extern int _TIFFNoSeek(TIFF* tif, uint32 off);
extern void _TIFFSwab16BitData(TIFF* tif, uint8* buf, tmsize_t cc);
extern void _TIFFSwab24BitData(TIFF* tif, uint8* buf, tmsize_t cc);
extern void _TIFFSwab32BitData(TIFF* tif, uint8* buf, tmsize_t cc);
extern void _TIFFSwab64BitData(TIFF* tif, uint8* buf, tmsize_t cc);
extern int TIFFFlushData1(TIFF* tif);
extern int TIFFDefaultDirectory(TIFF* tif);
extern void _TIFFSetDefaultCompressionState(TIFF* tif);
extern int TIFFSetCompressionScheme(TIFF* tif, int scheme);
extern int TIFFSetDefaultCompressionState(TIFF* tif);
extern uint32 _TIFFDefaultStripSize(TIFF* tif, uint32 s);
extern void _TIFFDefaultTileSize(TIFF* tif, uint32* tw, uint32* th);
extern int _TIFFDataSize(TIFFDataType type);

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

extern void* _TIFFCheckMalloc(TIFF* tif, tmsize_t nmemb, tmsize_t elem_size, const char* what);
extern void* _TIFFCheckRealloc(TIFF* tif, void* buffer, tmsize_t nmemb, tmsize_t elem_size, const char* what);

extern double _TIFFUInt64ToDouble(uint64);
extern float _TIFFUInt64ToFloat(uint64);

extern int TIFFInitDumpMode(TIFF*, int);

extern int TIFFInitPackBits(TIFF*, int);


extern int TIFFInitCCITTRLE(TIFF*, int), TIFFInitCCITTRLEW(TIFF*, int);
extern int TIFFInitCCITTFax3(TIFF*, int), TIFFInitCCITTFax4(TIFF*, int);


extern int TIFFInitThunderScan(TIFF*, int);


extern int TIFFInitNeXT(TIFF*, int);


extern int TIFFInitLZW(TIFF*, int);
# 341 "tiffiop.h"
extern int TIFFInitZIP(TIFF*, int);


extern int TIFFInitPixarLog(TIFF*, int);


extern int TIFFInitSGILog(TIFF*, int);




extern TIFFCodec _TIFFBuiltinCODECS[];
# 33 "tif_dirinfo.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 1 3 4
# 328 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 3 4

# 328 "/usr/lib/gcc/x86_64-redhat-linux/6.1.1/include/stddef.h" 3 4
typedef int wchar_t;
# 33 "/usr/include/stdlib.h" 2 3 4








# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 66 "/usr/include/bits/waitstatus.h" 3 4
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
# 321 "/usr/include/stdlib.h" 3 4
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

# 34 "tif_dirinfo.c" 2
# 45 "tif_dirinfo.c"

# 45 "tif_dirinfo.c"
static const TIFFFieldArray tiffFieldArray;
static const TIFFFieldArray exifFieldArray;

static const TIFFField
tiffFields[] = {
 { 254, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UNDEFINED, 5, 1, 0, "SubfileType", 
# 50 "tif_dirinfo.c" 3 4
                                                                                                                              ((void *)0) 
# 50 "tif_dirinfo.c"
                                                                                                                                   },
 { 255, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 5, 1, 0, "OldSubfileType", 
# 51 "tif_dirinfo.c" 3 4
                                                                                                                                      ((void *)0) 
# 51 "tif_dirinfo.c"
                                                                                                                                           },
 { 256, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UNDEFINED, 1, 0, 0, "ImageWidth", 
# 52 "tif_dirinfo.c" 3 4
                                                                                                                                ((void *)0) 
# 52 "tif_dirinfo.c"
                                                                                                                                     },
 { 257, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UNDEFINED, 1, 1, 0, "ImageLength", 
# 53 "tif_dirinfo.c" 3 4
                                                                                                                                  ((void *)0) 
# 53 "tif_dirinfo.c"
                                                                                                                                       },
 { 258, -1, -1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 6, 0, 0, "BitsPerSample", 
# 54 "tif_dirinfo.c" 3 4
                                                                                                                                       ((void *)0) 
# 54 "tif_dirinfo.c"
                                                                                                                                            },
 { 259, -1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 7, 0, 0, "Compression", 
# 55 "tif_dirinfo.c" 3 4
                                                                                                                                ((void *)0) 
# 55 "tif_dirinfo.c"
                                                                                                                                     },
 { 262, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 8, 0, 0, "PhotometricInterpretation", 
# 56 "tif_dirinfo.c" 3 4
                                                                                                                                             ((void *)0) 
# 56 "tif_dirinfo.c"
                                                                                                                                                  },
 { 263, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 9, 1, 0, "Threshholding", 
# 57 "tif_dirinfo.c" 3 4
                                                                                                                                     ((void *)0) 
# 57 "tif_dirinfo.c"
                                                                                                                                          },
 { 264, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 0, 1, 0, "CellWidth", 
# 58 "tif_dirinfo.c" 3 4
                                                                                                                         ((void *)0) 
# 58 "tif_dirinfo.c"
                                                                                                                              },
 { 265, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 0, 1, 0, "CellLength", 
# 59 "tif_dirinfo.c" 3 4
                                                                                                                           ((void *)0) 
# 59 "tif_dirinfo.c"
                                                                                                                                },
 { 266, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 10, 0, 0, "FillOrder", 
# 60 "tif_dirinfo.c" 3 4
                                                                                                                         ((void *)0) 
# 60 "tif_dirinfo.c"
                                                                                                                              },
 { 269, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "DocumentName", 
# 61 "tif_dirinfo.c" 3 4
                                                                                                                             ((void *)0) 
# 61 "tif_dirinfo.c"
                                                                                                                                  },
 { 270, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ImageDescription", 
# 62 "tif_dirinfo.c" 3 4
                                                                                                                                     ((void *)0) 
# 62 "tif_dirinfo.c"
                                                                                                                                          },
 { 271, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "Make", 
# 63 "tif_dirinfo.c" 3 4
                                                                                                             ((void *)0) 
# 63 "tif_dirinfo.c"
                                                                                                                  },
 { 272, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "Model", 
# 64 "tif_dirinfo.c" 3 4
                                                                                                               ((void *)0) 
# 64 "tif_dirinfo.c"
                                                                                                                    },
 { 273, -1, -1, TIFF_LONG8, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 25, 0, 0, "StripOffsets", 
# 65 "tif_dirinfo.c" 3 4
                                                                                                                                       ((void *)0) 
# 65 "tif_dirinfo.c"
                                                                                                                                            },
 { 274, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 15, 0, 0, "Orientation", 
# 66 "tif_dirinfo.c" 3 4
                                                                                                                               ((void *)0) 
# 66 "tif_dirinfo.c"
                                                                                                                                    },
 { 277, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 16, 0, 0, "SamplesPerPixel", 
# 67 "tif_dirinfo.c" 3 4
                                                                                                                                           ((void *)0) 
# 67 "tif_dirinfo.c"
                                                                                                                                                },
 { 278, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UNDEFINED, 17, 0, 0, "RowsPerStrip", 
# 68 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 68 "tif_dirinfo.c"
                                                                                                                                      },
 { 279, -1, -1, TIFF_LONG8, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 24, 0, 0, "StripByteCounts", 
# 69 "tif_dirinfo.c" 3 4
                                                                                                                                                ((void *)0) 
# 69 "tif_dirinfo.c"
                                                                                                                                                     },
 { 280, -2, -1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 18, 1, 0, "MinSampleValue", 
# 70 "tif_dirinfo.c" 3 4
                                                                                                                                          ((void *)0) 
# 70 "tif_dirinfo.c"
                                                                                                                                               },
 { 281, -2, -1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 19, 1, 0, "MaxSampleValue", 
# 71 "tif_dirinfo.c" 3 4
                                                                                                                                          ((void *)0) 
# 71 "tif_dirinfo.c"
                                                                                                                                               },
 { 282, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 3, 1, 0, "XResolution", 
# 72 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 72 "tif_dirinfo.c"
                                                                                                                                      },
 { 283, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 3, 1, 0, "YResolution", 
# 73 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 73 "tif_dirinfo.c"
                                                                                                                                      },
 { 284, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 20, 0, 0, "PlanarConfiguration", 
# 74 "tif_dirinfo.c" 3 4
                                                                                                                                         ((void *)0) 
# 74 "tif_dirinfo.c"
                                                                                                                                              },
 { 285, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "PageName", 
# 75 "tif_dirinfo.c" 3 4
                                                                                                                     ((void *)0) 
# 75 "tif_dirinfo.c"
                                                                                                                          },
 { 286, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 4, 1, 0, "XPosition", 
# 76 "tif_dirinfo.c" 3 4
                                                                                                                           ((void *)0) 
# 76 "tif_dirinfo.c"
                                                                                                                                },
 { 287, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 4, 1, 0, "YPosition", 
# 77 "tif_dirinfo.c" 3 4
                                                                                                                           ((void *)0) 
# 77 "tif_dirinfo.c"
                                                                                                                                },
 { 288, -1, -1, TIFF_LONG8, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 0, 0, 0, "FreeOffsets", 
# 78 "tif_dirinfo.c" 3 4
                                                                                                                               ((void *)0) 
# 78 "tif_dirinfo.c"
                                                                                                                                    },
 { 289, -1, -1, TIFF_LONG8, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 0, 0, 0, "FreeByteCounts", 
# 79 "tif_dirinfo.c" 3 4
                                                                                                                                     ((void *)0) 
# 79 "tif_dirinfo.c"
                                                                                                                                          },
 { 290, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 0, 1, 0, "GrayResponseUnit", 
# 80 "tif_dirinfo.c" 3 4
                                                                                                                                       ((void *)0) 
# 80 "tif_dirinfo.c"
                                                                                                                                            },
 { 291, -1, -1, TIFF_SHORT, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 0, 1, 0, "GrayResponseCurve", 
# 81 "tif_dirinfo.c" 3 4
                                                                                                                                           ((void *)0) 
# 81 "tif_dirinfo.c"
                                                                                                                                                },
 { 296, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 22, 1, 0, "ResolutionUnit", 
# 82 "tif_dirinfo.c" 3 4
                                                                                                                                        ((void *)0) 
# 82 "tif_dirinfo.c"
                                                                                                                                             },
 { 297, 2, 2, TIFF_SHORT, 0, TIFF_SETGET_UINT16_PAIR, TIFF_SETGET_UNDEFINED, 23, 1, 0, "PageNumber", 
# 83 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 83 "tif_dirinfo.c"
                                                                                                                                      },
 { 300, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 0, 1, 0, "ColorResponseUnit", 
# 84 "tif_dirinfo.c" 3 4
                                                                                                                                         ((void *)0) 
# 84 "tif_dirinfo.c"
                                                                                                                                              },
 { 301, -1, -1, TIFF_SHORT, 0, TIFF_SETGET_OTHER, TIFF_SETGET_UNDEFINED, 44, 1, 0, "TransferFunction", 
# 85 "tif_dirinfo.c" 3 4
                                                                                                                                               ((void *)0) 
# 85 "tif_dirinfo.c"
                                                                                                                                                    },
 { 305, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "Software", 
# 86 "tif_dirinfo.c" 3 4
                                                                                                                     ((void *)0) 
# 86 "tif_dirinfo.c"
                                                                                                                          },
 { 306, 20, 20, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "DateTime", 
# 87 "tif_dirinfo.c" 3 4
                                                                                                                     ((void *)0) 
# 87 "tif_dirinfo.c"
                                                                                                                          },
 { 315, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "Artist", 
# 88 "tif_dirinfo.c" 3 4
                                                                                                                 ((void *)0) 
# 88 "tif_dirinfo.c"
                                                                                                                      },
 { 316, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "HostComputer", 
# 89 "tif_dirinfo.c" 3 4
                                                                                                                             ((void *)0) 
# 89 "tif_dirinfo.c"
                                                                                                                                  },
 { 318, 2, 2, TIFF_RATIONAL, 0, TIFF_SETGET_C0_FLOAT, TIFF_SETGET_UNDEFINED, 65, 1, 0, "WhitePoint", 
# 90 "tif_dirinfo.c" 3 4
                                                                                                                             ((void *)0) 
# 90 "tif_dirinfo.c"
                                                                                                                                  },
 { 319, 6, 6, TIFF_RATIONAL, 0, TIFF_SETGET_C0_FLOAT, TIFF_SETGET_UNDEFINED, 65, 1, 0, "PrimaryChromaticities", 
# 91 "tif_dirinfo.c" 3 4
                                                                                                                                                   ((void *)0) 
# 91 "tif_dirinfo.c"
                                                                                                                                                        },
 { 320, -1, -1, TIFF_SHORT, 0, TIFF_SETGET_OTHER, TIFF_SETGET_UNDEFINED, 26, 1, 0, "ColorMap", 
# 92 "tif_dirinfo.c" 3 4
                                                                                                                       ((void *)0) 
# 92 "tif_dirinfo.c"
                                                                                                                            },
 { 321, 2, 2, TIFF_SHORT, 0, TIFF_SETGET_UINT16_PAIR, TIFF_SETGET_UNDEFINED, 37, 1, 0, "HalftoneHints", 
# 93 "tif_dirinfo.c" 3 4
                                                                                                                                          ((void *)0) 
# 93 "tif_dirinfo.c"
                                                                                                                                               },
 { 322, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UNDEFINED, 2, 0, 0, "TileWidth", 
# 94 "tif_dirinfo.c" 3 4
                                                                                                                             ((void *)0) 
# 94 "tif_dirinfo.c"
                                                                                                                                  },
 { 323, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UNDEFINED, 2, 0, 0, "TileLength", 
# 95 "tif_dirinfo.c" 3 4
                                                                                                                               ((void *)0) 
# 95 "tif_dirinfo.c"
                                                                                                                                    },
 { 324, -1, 1, TIFF_LONG8, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 25, 0, 0, "TileOffsets", 
# 96 "tif_dirinfo.c" 3 4
                                                                                                                                    ((void *)0) 
# 96 "tif_dirinfo.c"
                                                                                                                                         },
 { 325, -1, 1, TIFF_LONG8, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 24, 0, 0, "TileByteCounts", 
# 97 "tif_dirinfo.c" 3 4
                                                                                                                                             ((void *)0) 
# 97 "tif_dirinfo.c"
                                                                                                                                                  },
 { 330, -1, -1, TIFF_IFD8, 0, TIFF_SETGET_C16_IFD8, TIFF_SETGET_UNDEFINED, 49, 1, 1, "SubIFD", &tiffFieldArray },
 { 332, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 0, 0, "InkSet", 
# 99 "tif_dirinfo.c" 3 4
                                                                                                                ((void *)0) 
# 99 "tif_dirinfo.c"
                                                                                                                     },
 { 333, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_C16_ASCII, TIFF_SETGET_UNDEFINED, 46, 1, 1, "InkNames", 
# 100 "tif_dirinfo.c" 3 4
                                                                                                                           ((void *)0) 
# 100 "tif_dirinfo.c"
                                                                                                                                },
 { 334, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 1, 0, "NumberOfInks", 
# 101 "tif_dirinfo.c" 3 4
                                                                                                                               ((void *)0) 
# 101 "tif_dirinfo.c"
                                                                                                                                    },
 { 336, 2, 2, TIFF_SHORT, 0, TIFF_SETGET_UINT16_PAIR, TIFF_SETGET_UNDEFINED, 65, 0, 0, "DotRange", 
# 102 "tif_dirinfo.c" 3 4
                                                                                                                         ((void *)0) 
# 102 "tif_dirinfo.c"
                                                                                                                              },
 { 337, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "TargetPrinter", 
# 103 "tif_dirinfo.c" 3 4
                                                                                                                               ((void *)0) 
# 103 "tif_dirinfo.c"
                                                                                                                                    },
 { 338, -1, -1, TIFF_SHORT, 0, TIFF_SETGET_C16_UINT16, TIFF_SETGET_UNDEFINED, 31, 0, 1, "ExtraSamples", 
# 104 "tif_dirinfo.c" 3 4
                                                                                                                                        ((void *)0) 
# 104 "tif_dirinfo.c"
                                                                                                                                             },
 { 339, -1, -1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 32, 0, 0, "SampleFormat", 
# 105 "tif_dirinfo.c" 3 4
                                                                                                                                    ((void *)0) 
# 105 "tif_dirinfo.c"
                                                                                                                                         },
 { 340, -2, -1, TIFF_NOTYPE, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 33, 1, 0, "SMinSampleValue", 
# 106 "tif_dirinfo.c" 3 4
                                                                                                                                           ((void *)0) 
# 106 "tif_dirinfo.c"
                                                                                                                                                },
 { 341, -2, -1, TIFF_NOTYPE, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 34, 1, 0, "SMaxSampleValue", 
# 107 "tif_dirinfo.c" 3 4
                                                                                                                                           ((void *)0) 
# 107 "tif_dirinfo.c"
                                                                                                                                                },
 { 343, -1, -3, TIFF_BYTE, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 0, 1, "ClipPath", 
# 108 "tif_dirinfo.c" 3 4
                                                                                                                        ((void *)0) 
# 108 "tif_dirinfo.c"
                                                                                                                             },
 { 344, 1, 1, TIFF_SLONG, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 0, 0, "XClipPathUnits", 
# 109 "tif_dirinfo.c" 3 4
                                                                                                                                   ((void *)0) 
# 109 "tif_dirinfo.c"
                                                                                                                                        },
 { 344, 1, 1, TIFF_SBYTE, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 0, 0, "XClipPathUnits", 
# 110 "tif_dirinfo.c" 3 4
                                                                                                                                   ((void *)0) 
# 110 "tif_dirinfo.c"
                                                                                                                                        },
 { 345, 1, 1, TIFF_SLONG, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 0, 0, "YClipPathUnits", 
# 111 "tif_dirinfo.c" 3 4
                                                                                                                                   ((void *)0) 
# 111 "tif_dirinfo.c"
                                                                                                                                        },
 { 529, 3, 3, TIFF_RATIONAL, 0, TIFF_SETGET_C0_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 0, "YCbCrCoefficients", 
# 112 "tif_dirinfo.c" 3 4
                                                                                                                                           ((void *)0) 
# 112 "tif_dirinfo.c"
                                                                                                                                                },
 { 530, 2, 2, TIFF_SHORT, 0, TIFF_SETGET_UINT16_PAIR, TIFF_SETGET_UNDEFINED, 39, 0, 0, "YCbCrSubsampling", 
# 113 "tif_dirinfo.c" 3 4
                                                                                                                                                   ((void *)0) 
# 113 "tif_dirinfo.c"
                                                                                                                                                        },
 { 531, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 40, 0, 0, "YCbCrPositioning", 
# 114 "tif_dirinfo.c" 3 4
                                                                                                                                              ((void *)0) 
# 114 "tif_dirinfo.c"
                                                                                                                                                   },
 { 532, 6, 6, TIFF_RATIONAL, 0, TIFF_SETGET_C0_FLOAT, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ReferenceBlackWhite", 
# 115 "tif_dirinfo.c" 3 4
                                                                                                                                               ((void *)0) 
# 115 "tif_dirinfo.c"
                                                                                                                                                    },
 { 700, -3, -3, TIFF_BYTE, 0, TIFF_SETGET_C32_UINT8, TIFF_SETGET_UNDEFINED, 65, 0, 1, "XMLPacket", 
# 116 "tif_dirinfo.c" 3 4
                                                                                                                          ((void *)0) 
# 116 "tif_dirinfo.c"
                                                                                                                               },

 { 32995, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 31, 0, 0, "Matteing", 
# 118 "tif_dirinfo.c" 3 4
                                                                                                                          ((void *)0) 
# 118 "tif_dirinfo.c"
                                                                                                                               },
 { 32996, -2, -1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 32, 0, 0, "DataType", 
# 119 "tif_dirinfo.c" 3 4
                                                                                                                            ((void *)0) 
# 119 "tif_dirinfo.c"
                                                                                                                                 },
 { 32997, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UNDEFINED, 35, 0, 0, "ImageDepth", 
# 120 "tif_dirinfo.c" 3 4
                                                                                                                           ((void *)0) 
# 120 "tif_dirinfo.c"
                                                                                                                                },
 { 32998, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UNDEFINED, 36, 0, 0, "TileDepth", 
# 121 "tif_dirinfo.c" 3 4
                                                                                                                        ((void *)0) 
# 121 "tif_dirinfo.c"
                                                                                                                             },


 { 33300, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ImageFullWidth", 
# 124 "tif_dirinfo.c" 3 4
                                                                                                                                        ((void *)0) 
# 124 "tif_dirinfo.c"
                                                                                                                                             },
 { 33301, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ImageFullLength", 
# 125 "tif_dirinfo.c" 3 4
                                                                                                                                          ((void *)0) 
# 125 "tif_dirinfo.c"
                                                                                                                                               },
 { 33302, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 1, 0, "TextureFormat", 
# 126 "tif_dirinfo.c" 3 4
                                                                                                                                         ((void *)0) 
# 126 "tif_dirinfo.c"
                                                                                                                                              },
 { 33303, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 1, 0, "TextureWrapModes", 
# 127 "tif_dirinfo.c" 3 4
                                                                                                                                        ((void *)0) 
# 127 "tif_dirinfo.c"
                                                                                                                                             },
 { 33304, 1, 1, TIFF_FLOAT, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 1, 0, "FieldOfViewCotangent", 
# 128 "tif_dirinfo.c" 3 4
                                                                                                                                       ((void *)0) 
# 128 "tif_dirinfo.c"
                                                                                                                                            },
 { 33305, 16, 16, TIFF_FLOAT, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 1, 0, "MatrixWorldToScreen", 
# 129 "tif_dirinfo.c" 3 4
                                                                                                                                                      ((void *)0) 
# 129 "tif_dirinfo.c"
                                                                                                                                                           },
 { 33306, 16, 16, TIFF_FLOAT, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 1, 0, "MatrixWorldToCamera", 
# 130 "tif_dirinfo.c" 3 4
                                                                                                                                                      ((void *)0) 
# 130 "tif_dirinfo.c"
                                                                                                                                                           },
 { 33432, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "Copyright", 
# 131 "tif_dirinfo.c" 3 4
                                                                                                                       ((void *)0) 
# 131 "tif_dirinfo.c"
                                                                                                                            },

 { 33723, -3, -3, TIFF_LONG, 0, TIFF_SETGET_C32_UINT32, TIFF_SETGET_UNDEFINED, 65, 0, 1, "RichTIFFIPTC", 
# 133 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 133 "tif_dirinfo.c"
                                                                                                                                      },
 { 34377, -3, -3, TIFF_BYTE, 0, TIFF_SETGET_C32_UINT8, TIFF_SETGET_UNDEFINED, 65, 0, 1, "Photoshop", 
# 134 "tif_dirinfo.c" 3 4
                                                                                                                          ((void *)0) 
# 134 "tif_dirinfo.c"
                                                                                                                               },
 { 34665, 1, 1, TIFF_IFD8, 0, TIFF_SETGET_IFD8, TIFF_SETGET_UNDEFINED, 65, 0, 0, "EXIFIFDOffset", &exifFieldArray },
 { 34675, -3, -3, TIFF_UNDEFINED, 0, TIFF_SETGET_C32_UINT8, TIFF_SETGET_UNDEFINED, 65, 0, 1, "ICC Profile", 
# 136 "tif_dirinfo.c" 3 4
                                                                                                                                  ((void *)0) 
# 136 "tif_dirinfo.c"
                                                                                                                                       },
 { 34853, 1, 1, TIFF_IFD8, 0, TIFF_SETGET_IFD8, TIFF_SETGET_UNDEFINED, 65, 0, 0, "GPSIFDOffset", 
# 137 "tif_dirinfo.c" 3 4
                                                                                                                   ((void *)0) 
# 137 "tif_dirinfo.c"
                                                                                                                        },
 { 34908, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UINT32, 65, 1, 0, "FaxRecvParams", 
# 138 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 138 "tif_dirinfo.c"
                                                                                                                                      },
 { 34909, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_ASCII, 65, 1, 0, "FaxSubAddress", 
# 139 "tif_dirinfo.c" 3 4
                                                                                                                                  ((void *)0) 
# 139 "tif_dirinfo.c"
                                                                                                                                       },
 { 34910, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UINT32, 65, 1, 0, "FaxRecvTime", 
# 140 "tif_dirinfo.c" 3 4
                                                                                                                             ((void *)0) 
# 140 "tif_dirinfo.c"
                                                                                                                                  },
 { 34911, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_ASCII, 65, 1, 0, "FaxDcs", 
# 141 "tif_dirinfo.c" 3 4
                                                                                                                    ((void *)0) 
# 141 "tif_dirinfo.c"
                                                                                                                         },
 { 37439, 1, 1, TIFF_DOUBLE, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 0, 0, "StoNits", 
# 142 "tif_dirinfo.c" 3 4
                                                                                                                   ((void *)0) 
# 142 "tif_dirinfo.c"
                                                                                                                        },
 { 40965, 1, 1, TIFF_IFD8, 0, TIFF_SETGET_UNDEFINED, TIFF_SETGET_UNDEFINED, 65, 0, 0, "InteroperabilityIFDOffset", 
# 143 "tif_dirinfo.c" 3 4
                                                                                                                                                  ((void *)0) 
# 143 "tif_dirinfo.c"
                                                                                                                                                       },

 { 50706, 4, 4, TIFF_BYTE, 0, TIFF_SETGET_C0_UINT8, TIFF_SETGET_UNDEFINED, 65, 0, 0, "DNGVersion", 
# 145 "tif_dirinfo.c" 3 4
                                                                                                                         ((void *)0) 
# 145 "tif_dirinfo.c"
                                                                                                                              },
 { 50707, 4, 4, TIFF_BYTE, 0, TIFF_SETGET_C0_UINT8, TIFF_SETGET_UNDEFINED, 65, 0, 0, "DNGBackwardVersion", 
# 146 "tif_dirinfo.c" 3 4
                                                                                                                                         ((void *)0) 
# 146 "tif_dirinfo.c"
                                                                                                                                              },
 { 50708, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "UniqueCameraModel", 
# 147 "tif_dirinfo.c" 3 4
                                                                                                                                       ((void *)0) 
# 147 "tif_dirinfo.c"
                                                                                                                                            },
 { 50709, -1, -1, TIFF_BYTE, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 1, "LocalizedCameraModel", 
# 148 "tif_dirinfo.c" 3 4
                                                                                                                                                ((void *)0) 
# 148 "tif_dirinfo.c"
                                                                                                                                                     },
 { 50710, -1, -1, TIFF_BYTE, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 0, 1, "CFAPlaneColor", 
# 149 "tif_dirinfo.c" 3 4
                                                                                                                                  ((void *)0) 
# 149 "tif_dirinfo.c"
                                                                                                                                       },
 { 50711, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 0, 0, "CFALayout", 
# 150 "tif_dirinfo.c" 3 4
                                                                                                                      ((void *)0) 
# 150 "tif_dirinfo.c"
                                                                                                                           },
 { 50712, -1, -1, TIFF_SHORT, 0, TIFF_SETGET_C16_UINT16, TIFF_SETGET_UNDEFINED, 65, 0, 1, "LinearizationTable", 
# 151 "tif_dirinfo.c" 3 4
                                                                                                                                              ((void *)0) 
# 151 "tif_dirinfo.c"
                                                                                                                                                   },
 { 50713, 2, 2, TIFF_SHORT, 0, TIFF_SETGET_C0_UINT16, TIFF_SETGET_UNDEFINED, 65, 0, 0, "BlackLevelRepeatDim", 
# 152 "tif_dirinfo.c" 3 4
                                                                                                                                             ((void *)0) 
# 152 "tif_dirinfo.c"
                                                                                                                                                  },
 { 50714, -1, -1, TIFF_RATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "BlackLevel", 
# 153 "tif_dirinfo.c" 3 4
                                                                                                                                ((void *)0) 
# 153 "tif_dirinfo.c"
                                                                                                                                     },
 { 50715, -1, -1, TIFF_SRATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "BlackLevelDeltaH", 
# 154 "tif_dirinfo.c" 3 4
                                                                                                                                             ((void *)0) 
# 154 "tif_dirinfo.c"
                                                                                                                                                  },
 { 50716, -1, -1, TIFF_SRATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "BlackLevelDeltaV", 
# 155 "tif_dirinfo.c" 3 4
                                                                                                                                             ((void *)0) 
# 155 "tif_dirinfo.c"
                                                                                                                                                  },
 { 50717, -1, -1, TIFF_LONG, 0, TIFF_SETGET_C16_UINT32, TIFF_SETGET_UNDEFINED, 65, 0, 1, "WhiteLevel", 
# 156 "tif_dirinfo.c" 3 4
                                                                                                                             ((void *)0) 
# 156 "tif_dirinfo.c"
                                                                                                                                  },
 { 50718, 2, 2, TIFF_RATIONAL, 0, TIFF_SETGET_C0_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 0, "DefaultScale", 
# 157 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 157 "tif_dirinfo.c"
                                                                                                                                      },
 { 50780, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 0, 0, "BestQualityScale", 
# 158 "tif_dirinfo.c" 3 4
                                                                                                                                       ((void *)0) 
# 158 "tif_dirinfo.c"
                                                                                                                                            },
 { 50719, 2, 2, TIFF_RATIONAL, 0, TIFF_SETGET_C0_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 0, "DefaultCropOrigin", 
# 159 "tif_dirinfo.c" 3 4
                                                                                                                                           ((void *)0) 
# 159 "tif_dirinfo.c"
                                                                                                                                                },
 { 50720, 2, 2, TIFF_RATIONAL, 0, TIFF_SETGET_C0_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 0, "DefaultCropSize", 
# 160 "tif_dirinfo.c" 3 4
                                                                                                                                       ((void *)0) 
# 160 "tif_dirinfo.c"
                                                                                                                                            },
 { 50721, -1, -1, TIFF_SRATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "ColorMatrix1", 
# 161 "tif_dirinfo.c" 3 4
                                                                                                                                     ((void *)0) 
# 161 "tif_dirinfo.c"
                                                                                                                                          },
 { 50722, -1, -1, TIFF_SRATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "ColorMatrix2", 
# 162 "tif_dirinfo.c" 3 4
                                                                                                                                     ((void *)0) 
# 162 "tif_dirinfo.c"
                                                                                                                                          },
 { 50723, -1, -1, TIFF_SRATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "CameraCalibration1", 
# 163 "tif_dirinfo.c" 3 4
                                                                                                                                                 ((void *)0) 
# 163 "tif_dirinfo.c"
                                                                                                                                                      },
 { 50724, -1, -1, TIFF_SRATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "CameraCalibration2", 
# 164 "tif_dirinfo.c" 3 4
                                                                                                                                                 ((void *)0) 
# 164 "tif_dirinfo.c"
                                                                                                                                                      },
 { 50725, -1, -1, TIFF_SRATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "ReductionMatrix1", 
# 165 "tif_dirinfo.c" 3 4
                                                                                                                                             ((void *)0) 
# 165 "tif_dirinfo.c"
                                                                                                                                                  },
 { 50726, -1, -1, TIFF_SRATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "ReductionMatrix2", 
# 166 "tif_dirinfo.c" 3 4
                                                                                                                                             ((void *)0) 
# 166 "tif_dirinfo.c"
                                                                                                                                                  },
 { 50727, -1, -1, TIFF_RATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "AnalogBalance", 
# 167 "tif_dirinfo.c" 3 4
                                                                                                                                      ((void *)0) 
# 167 "tif_dirinfo.c"
                                                                                                                                           },
 { 50728, -1, -1, TIFF_RATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "AsShotNeutral", 
# 168 "tif_dirinfo.c" 3 4
                                                                                                                                      ((void *)0) 
# 168 "tif_dirinfo.c"
                                                                                                                                           },
 { 50729, 2, 2, TIFF_RATIONAL, 0, TIFF_SETGET_C0_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 0, "AsShotWhiteXY", 
# 169 "tif_dirinfo.c" 3 4
                                                                                                                                   ((void *)0) 
# 169 "tif_dirinfo.c"
                                                                                                                                        },
 { 50730, 1, 1, TIFF_SRATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 0, 0, "BaselineExposure", 
# 170 "tif_dirinfo.c" 3 4
                                                                                                                                        ((void *)0) 
# 170 "tif_dirinfo.c"
                                                                                                                                             },
 { 50731, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 0, 0, "BaselineNoise", 
# 171 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 171 "tif_dirinfo.c"
                                                                                                                                      },
 { 50732, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 0, 0, "BaselineSharpness", 
# 172 "tif_dirinfo.c" 3 4
                                                                                                                                         ((void *)0) 
# 172 "tif_dirinfo.c"
                                                                                                                                              },
 { 50733, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UNDEFINED, 65, 0, 0, "BayerGreenSplit", 
# 173 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 173 "tif_dirinfo.c"
                                                                                                                                      },
 { 50734, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 0, 0, "LinearResponseLimit", 
# 174 "tif_dirinfo.c" 3 4
                                                                                                                                             ((void *)0) 
# 174 "tif_dirinfo.c"
                                                                                                                                                  },
 { 50735, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "CameraSerialNumber", 
# 175 "tif_dirinfo.c" 3 4
                                                                                                                                         ((void *)0) 
# 175 "tif_dirinfo.c"
                                                                                                                                              },
 { 50736, 4, 4, TIFF_RATIONAL, 0, TIFF_SETGET_C0_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 0, "LensInfo", 
# 176 "tif_dirinfo.c" 3 4
                                                                                                                         ((void *)0) 
# 176 "tif_dirinfo.c"
                                                                                                                              },
 { 50737, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 0, 0, "ChromaBlurRadius", 
# 177 "tif_dirinfo.c" 3 4
                                                                                                                                       ((void *)0) 
# 177 "tif_dirinfo.c"
                                                                                                                                            },
 { 50738, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 0, 0, "AntiAliasStrength", 
# 178 "tif_dirinfo.c" 3 4
                                                                                                                                         ((void *)0) 
# 178 "tif_dirinfo.c"
                                                                                                                                              },
 { 50739, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 0, 0, "ShadowScale", 
# 179 "tif_dirinfo.c" 3 4
                                                                                                                             ((void *)0) 
# 179 "tif_dirinfo.c"
                                                                                                                                  },
 { 50740, -1, -1, TIFF_BYTE, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 0, 1, "DNGPrivateData", 
# 180 "tif_dirinfo.c" 3 4
                                                                                                                                    ((void *)0) 
# 180 "tif_dirinfo.c"
                                                                                                                                         },
 { 50741, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 0, 0, "MakerNoteSafety", 
# 181 "tif_dirinfo.c" 3 4
                                                                                                                                  ((void *)0) 
# 181 "tif_dirinfo.c"
                                                                                                                                       },
 { 50778, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 0, 0, "CalibrationIlluminant1", 
# 182 "tif_dirinfo.c" 3 4
                                                                                                                                                ((void *)0) 
# 182 "tif_dirinfo.c"
                                                                                                                                                     },
 { 50779, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 0, 0, "CalibrationIlluminant2", 
# 183 "tif_dirinfo.c" 3 4
                                                                                                                                                ((void *)0) 
# 183 "tif_dirinfo.c"
                                                                                                                                                     },
 { 50781, 16, 16, TIFF_BYTE, 0, TIFF_SETGET_C0_UINT8, TIFF_SETGET_UNDEFINED, 65, 0, 0, "RawDataUniqueID", 
# 184 "tif_dirinfo.c" 3 4
                                                                                                                                     ((void *)0) 
# 184 "tif_dirinfo.c"
                                                                                                                                          },
 { 50827, -1, -1, TIFF_BYTE, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 1, "OriginalRawFileName", 
# 185 "tif_dirinfo.c" 3 4
                                                                                                                                              ((void *)0) 
# 185 "tif_dirinfo.c"
                                                                                                                                                   },
 { 50828, -1, -1, TIFF_UNDEFINED, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 0, 1, "OriginalRawFileData", 
# 186 "tif_dirinfo.c" 3 4
                                                                                                                                                   ((void *)0) 
# 186 "tif_dirinfo.c"
                                                                                                                                                        },
 { 50829, 4, 4, TIFF_LONG, 0, TIFF_SETGET_C0_UINT32, TIFF_SETGET_UNDEFINED, 65, 0, 0, "ActiveArea", 
# 187 "tif_dirinfo.c" 3 4
                                                                                                                          ((void *)0) 
# 187 "tif_dirinfo.c"
                                                                                                                               },
 { 50830, -1, -1, TIFF_LONG, 0, TIFF_SETGET_C16_UINT32, TIFF_SETGET_UNDEFINED, 65, 0, 1, "MaskedAreas", 
# 188 "tif_dirinfo.c" 3 4
                                                                                                                               ((void *)0) 
# 188 "tif_dirinfo.c"
                                                                                                                                    },
 { 50831, -1, -1, TIFF_UNDEFINED, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 0, 1, "AsShotICCProfile", 
# 189 "tif_dirinfo.c" 3 4
                                                                                                                                             ((void *)0) 
# 189 "tif_dirinfo.c"
                                                                                                                                                  },
 { 50832, -1, -1, TIFF_SRATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "AsShotPreProfileMatrix", 
# 190 "tif_dirinfo.c" 3 4
                                                                                                                                                         ((void *)0) 
# 190 "tif_dirinfo.c"
                                                                                                                                                              },
 { 50833, -1, -1, TIFF_UNDEFINED, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 0, 1, "CurrentICCProfile", 
# 191 "tif_dirinfo.c" 3 4
                                                                                                                                               ((void *)0) 
# 191 "tif_dirinfo.c"
                                                                                                                                                    },
 { 50834, -1, -1, TIFF_SRATIONAL, 0, TIFF_SETGET_C16_FLOAT, TIFF_SETGET_UNDEFINED, 65, 0, 1, "CurrentPreProfileMatrix", 
# 192 "tif_dirinfo.c" 3 4
                                                                                                                                                           ((void *)0) 
# 192 "tif_dirinfo.c"
                                                                                                                                                                },

};

static const TIFFField
exifFields[] = {
 { 33434, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ExposureTime", 
# 198 "tif_dirinfo.c" 3 4
                                                                                                                               ((void *)0) 
# 198 "tif_dirinfo.c"
                                                                                                                                    },
 { 33437, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "FNumber", 
# 199 "tif_dirinfo.c" 3 4
                                                                                                                     ((void *)0) 
# 199 "tif_dirinfo.c"
                                                                                                                          },
 { 34850, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ExposureProgram", 
# 200 "tif_dirinfo.c" 3 4
                                                                                                                                  ((void *)0) 
# 200 "tif_dirinfo.c"
                                                                                                                                       },
 { 34852, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "SpectralSensitivity", 
# 201 "tif_dirinfo.c" 3 4
                                                                                                                                           ((void *)0) 
# 201 "tif_dirinfo.c"
                                                                                                                                                },
 { 34855, -1, -1, TIFF_SHORT, 0, TIFF_SETGET_C16_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 1, "ISOSpeedRatings", 
# 202 "tif_dirinfo.c" 3 4
                                                                                                                                        ((void *)0) 
# 202 "tif_dirinfo.c"
                                                                                                                                             },
 { 34856, -1, -1, TIFF_UNDEFINED, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 1, "OptoelectricConversionFactor", 
# 203 "tif_dirinfo.c" 3 4
                                                                                                                                             ((void *)0) 
# 203 "tif_dirinfo.c"
                                                                                                                                                  },
 { 36864, 4, 4, TIFF_UNDEFINED, 0, TIFF_SETGET_C0_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ExifVersion", 
# 204 "tif_dirinfo.c" 3 4
                                                                                                                                ((void *)0) 
# 204 "tif_dirinfo.c"
                                                                                                                                     },
 { 36867, 20, 20, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "DateTimeOriginal", 
# 205 "tif_dirinfo.c" 3 4
                                                                                                                                     ((void *)0) 
# 205 "tif_dirinfo.c"
                                                                                                                                          },
 { 36868, 20, 20, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "DateTimeDigitized", 
# 206 "tif_dirinfo.c" 3 4
                                                                                                                                       ((void *)0) 
# 206 "tif_dirinfo.c"
                                                                                                                                            },
 { 37121, 4, 4, TIFF_UNDEFINED, 0, TIFF_SETGET_C0_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ComponentsConfiguration", 
# 207 "tif_dirinfo.c" 3 4
                                                                                                                                                        ((void *)0) 
# 207 "tif_dirinfo.c"
                                                                                                                                                             },
 { 37122, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "CompressedBitsPerPixel", 
# 208 "tif_dirinfo.c" 3 4
                                                                                                                                                   ((void *)0) 
# 208 "tif_dirinfo.c"
                                                                                                                                                        },
 { 37377, 1, 1, TIFF_SRATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ShutterSpeedValue", 
# 209 "tif_dirinfo.c" 3 4
                                                                                                                                          ((void *)0) 
# 209 "tif_dirinfo.c"
                                                                                                                                               },
 { 37378, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ApertureValue", 
# 210 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 210 "tif_dirinfo.c"
                                                                                                                                      },
 { 37379, 1, 1, TIFF_SRATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "BrightnessValue", 
# 211 "tif_dirinfo.c" 3 4
                                                                                                                                      ((void *)0) 
# 211 "tif_dirinfo.c"
                                                                                                                                           },
 { 37380, 1, 1, TIFF_SRATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ExposureBiasValue", 
# 212 "tif_dirinfo.c" 3 4
                                                                                                                                          ((void *)0) 
# 212 "tif_dirinfo.c"
                                                                                                                                               },
 { 37381, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "MaxApertureValue", 
# 213 "tif_dirinfo.c" 3 4
                                                                                                                                       ((void *)0) 
# 213 "tif_dirinfo.c"
                                                                                                                                            },
 { 37382, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "SubjectDistance", 
# 214 "tif_dirinfo.c" 3 4
                                                                                                                                     ((void *)0) 
# 214 "tif_dirinfo.c"
                                                                                                                                          },
 { 37383, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "MeteringMode", 
# 215 "tif_dirinfo.c" 3 4
                                                                                                                            ((void *)0) 
# 215 "tif_dirinfo.c"
                                                                                                                                 },
 { 37384, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "LightSource", 
# 216 "tif_dirinfo.c" 3 4
                                                                                                                          ((void *)0) 
# 216 "tif_dirinfo.c"
                                                                                                                               },
 { 37385, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "Flash", 
# 217 "tif_dirinfo.c" 3 4
                                                                                                              ((void *)0) 
# 217 "tif_dirinfo.c"
                                                                                                                   },
 { 37386, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "FocalLength", 
# 218 "tif_dirinfo.c" 3 4
                                                                                                                             ((void *)0) 
# 218 "tif_dirinfo.c"
                                                                                                                                  },
 { 37396, -1, -1, TIFF_SHORT, 0, TIFF_SETGET_C16_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 1, "SubjectArea", 
# 219 "tif_dirinfo.c" 3 4
                                                                                                                                ((void *)0) 
# 219 "tif_dirinfo.c"
                                                                                                                                     },
 { 37500, -1, -1, TIFF_UNDEFINED, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 1, "MakerNote", 
# 220 "tif_dirinfo.c" 3 4
                                                                                                                               ((void *)0) 
# 220 "tif_dirinfo.c"
                                                                                                                                    },
 { 37510, -1, -1, TIFF_UNDEFINED, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 1, "UserComment", 
# 221 "tif_dirinfo.c" 3 4
                                                                                                                                   ((void *)0) 
# 221 "tif_dirinfo.c"
                                                                                                                                        },
 { 37520, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "SubSecTime", 
# 222 "tif_dirinfo.c" 3 4
                                                                                                                         ((void *)0) 
# 222 "tif_dirinfo.c"
                                                                                                                              },
 { 37521, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "SubSecTimeOriginal", 
# 223 "tif_dirinfo.c" 3 4
                                                                                                                                         ((void *)0) 
# 223 "tif_dirinfo.c"
                                                                                                                                              },
 { 37522, -1, -1, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "SubSecTimeDigitized", 
# 224 "tif_dirinfo.c" 3 4
                                                                                                                                           ((void *)0) 
# 224 "tif_dirinfo.c"
                                                                                                                                                },
 { 40960, 4, 4, TIFF_UNDEFINED, 0, TIFF_SETGET_C0_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 0, "FlashpixVersion", 
# 225 "tif_dirinfo.c" 3 4
                                                                                                                                        ((void *)0) 
# 225 "tif_dirinfo.c"
                                                                                                                                             },
 { 40961, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ColorSpace", 
# 226 "tif_dirinfo.c" 3 4
                                                                                                                        ((void *)0) 
# 226 "tif_dirinfo.c"
                                                                                                                             },
 { 40962, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UNDEFINED, 65, 1, 0, "PixelXDimension", 
# 227 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 227 "tif_dirinfo.c"
                                                                                                                                      },
 { 40963, 1, 1, TIFF_LONG, 0, TIFF_SETGET_UINT32, TIFF_SETGET_UNDEFINED, 65, 1, 0, "PixelYDimension", 
# 228 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 228 "tif_dirinfo.c"
                                                                                                                                      },
 { 40964, 13, 13, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "RelatedSoundFile", 
# 229 "tif_dirinfo.c" 3 4
                                                                                                                                     ((void *)0) 
# 229 "tif_dirinfo.c"
                                                                                                                                          },
 { 41483, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "FlashEnergy", 
# 230 "tif_dirinfo.c" 3 4
                                                                                                                             ((void *)0) 
# 230 "tif_dirinfo.c"
                                                                                                                                  },
 { 41484, -1, -1, TIFF_UNDEFINED, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 1, "SpatialFrequencyResponse", 
# 231 "tif_dirinfo.c" 3 4
                                                                                                                                                             ((void *)0) 
# 231 "tif_dirinfo.c"
                                                                                                                                                                  },
 { 41486, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "FocalPlaneXResolution", 
# 232 "tif_dirinfo.c" 3 4
                                                                                                                                                 ((void *)0) 
# 232 "tif_dirinfo.c"
                                                                                                                                                      },
 { 41487, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "FocalPlaneYResolution", 
# 233 "tif_dirinfo.c" 3 4
                                                                                                                                                 ((void *)0) 
# 233 "tif_dirinfo.c"
                                                                                                                                                      },
 { 41488, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "FocalPlaneResolutionUnit", 
# 234 "tif_dirinfo.c" 3 4
                                                                                                                                                    ((void *)0) 
# 234 "tif_dirinfo.c"
                                                                                                                                                         },
 { 41492, 2, 2, TIFF_SHORT, 0, TIFF_SETGET_C0_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "SubjectLocation", 
# 235 "tif_dirinfo.c" 3 4
                                                                                                                                     ((void *)0) 
# 235 "tif_dirinfo.c"
                                                                                                                                          },
 { 41493, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ExposureIndex", 
# 236 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 236 "tif_dirinfo.c"
                                                                                                                                      },
 { 41495, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "SensingMethod", 
# 237 "tif_dirinfo.c" 3 4
                                                                                                                              ((void *)0) 
# 237 "tif_dirinfo.c"
                                                                                                                                   },
 { 41728, 1, 1, TIFF_UNDEFINED, 0, TIFF_SETGET_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 0, "FileSource", 
# 238 "tif_dirinfo.c" 3 4
                                                                                                                           ((void *)0) 
# 238 "tif_dirinfo.c"
                                                                                                                                },
 { 41729, 1, 1, TIFF_UNDEFINED, 0, TIFF_SETGET_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 0, "SceneType", 
# 239 "tif_dirinfo.c" 3 4
                                                                                                                         ((void *)0) 
# 239 "tif_dirinfo.c"
                                                                                                                              },
 { 41730, -1, -1, TIFF_UNDEFINED, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 1, "CFAPattern", 
# 240 "tif_dirinfo.c" 3 4
                                                                                                                                 ((void *)0) 
# 240 "tif_dirinfo.c"
                                                                                                                                      },
 { 41985, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "CustomRendered", 
# 241 "tif_dirinfo.c" 3 4
                                                                                                                                ((void *)0) 
# 241 "tif_dirinfo.c"
                                                                                                                                     },
 { 41986, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ExposureMode", 
# 242 "tif_dirinfo.c" 3 4
                                                                                                                            ((void *)0) 
# 242 "tif_dirinfo.c"
                                                                                                                                 },
 { 41987, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "WhiteBalance", 
# 243 "tif_dirinfo.c" 3 4
                                                                                                                            ((void *)0) 
# 243 "tif_dirinfo.c"
                                                                                                                                 },
 { 41988, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "DigitalZoomRatio", 
# 244 "tif_dirinfo.c" 3 4
                                                                                                                                       ((void *)0) 
# 244 "tif_dirinfo.c"
                                                                                                                                            },
 { 41989, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "FocalLengthIn35mmFilm", 
# 245 "tif_dirinfo.c" 3 4
                                                                                                                                              ((void *)0) 
# 245 "tif_dirinfo.c"
                                                                                                                                                   },
 { 41990, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "SceneCaptureType", 
# 246 "tif_dirinfo.c" 3 4
                                                                                                                                    ((void *)0) 
# 246 "tif_dirinfo.c"
                                                                                                                                         },
 { 41991, 1, 1, TIFF_RATIONAL, 0, TIFF_SETGET_DOUBLE, TIFF_SETGET_UNDEFINED, 65, 1, 0, "GainControl", 
# 247 "tif_dirinfo.c" 3 4
                                                                                                                             ((void *)0) 
# 247 "tif_dirinfo.c"
                                                                                                                                  },
 { 41992, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "Contrast", 
# 248 "tif_dirinfo.c" 3 4
                                                                                                                    ((void *)0) 
# 248 "tif_dirinfo.c"
                                                                                                                         },
 { 41993, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "Saturation", 
# 249 "tif_dirinfo.c" 3 4
                                                                                                                        ((void *)0) 
# 249 "tif_dirinfo.c"
                                                                                                                             },
 { 41994, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "Sharpness", 
# 250 "tif_dirinfo.c" 3 4
                                                                                                                      ((void *)0) 
# 250 "tif_dirinfo.c"
                                                                                                                           },
 { 41995, -1, -1, TIFF_UNDEFINED, 0, TIFF_SETGET_C16_UINT8, TIFF_SETGET_UNDEFINED, 65, 1, 1, "DeviceSettingDescription", 
# 251 "tif_dirinfo.c" 3 4
                                                                                                                                                             ((void *)0) 
# 251 "tif_dirinfo.c"
                                                                                                                                                                  },
 { 41996, 1, 1, TIFF_SHORT, 0, TIFF_SETGET_UINT16, TIFF_SETGET_UNDEFINED, 65, 1, 0, "SubjectDistanceRange", 
# 252 "tif_dirinfo.c" 3 4
                                                                                                                                            ((void *)0) 
# 252 "tif_dirinfo.c"
                                                                                                                                                 },
 { 42016, 33, 33, TIFF_ASCII, 0, TIFF_SETGET_ASCII, TIFF_SETGET_UNDEFINED, 65, 1, 0, "ImageUniqueID", 
# 253 "tif_dirinfo.c" 3 4
                                                                                                                               ((void *)0) 
# 253 "tif_dirinfo.c"
                                                                                                                                    }
};

static const TIFFFieldArray
tiffFieldArray = { tfiatImage, 0, (sizeof (tiffFields) / sizeof ((tiffFields)[0])), tiffFields };
static const TIFFFieldArray
exifFieldArray = { tfiatExif, 0, (sizeof (exifFields) / sizeof ((exifFields)[0])), exifFields };

const TIFFFieldArray*
_TIFFGetFields(void)
{
 return(&tiffFieldArray);
}

const TIFFFieldArray*
_TIFFGetExifFields(void)
{
 return(&exifFieldArray);
}

void
_TIFFSetupFields(TIFF* tif, const TIFFFieldArray* fieldarray)
{
 if (tif->tif_fields) {
  uint32 i;

  for (i = 0; i < tif->tif_nfields; i++) {
   TIFFField *fld = tif->tif_fields[i];
   if (fld->field_bit == 65 &&
    strncmp("Tag ", fld->field_name, 4) == 0) {
     _TIFFfree(fld->field_name);
     _TIFFfree(fld);
    }
  }

  _TIFFfree(tif->tif_fields);
  tif->tif_nfields = 0;
 }
 if (!_TIFFMergeFields(tif, fieldarray->fields, fieldarray->count)) {
  TIFFErrorExt(tif->tif_clientdata, "_TIFFSetupFields",
        "Setting up field info failed");
 }
}

static int
tagCompare(const void* a, const void* b)
{
 const TIFFField* ta = *(const TIFFField**) a;
 const TIFFField* tb = *(const TIFFField**) b;

 if (ta->field_tag != tb->field_tag)
  return (int)ta->field_tag - (int)tb->field_tag;
 else
  return (ta->field_type == TIFF_NOTYPE) ?
   0 : ((int)tb->field_type - (int)ta->field_type);
}

static int
tagNameCompare(const void* a, const void* b)
{
 const TIFFField* ta = *(const TIFFField**) a;
 const TIFFField* tb = *(const TIFFField**) b;
 int ret = strcmp(ta->field_name, tb->field_name);

 if (ret)
  return ret;
 else
  return (ta->field_type == TIFF_NOTYPE) ?
   0 : ((int)tb->field_type - (int)ta->field_type);
}

int
_TIFFMergeFields(TIFF* tif, const TIFFField info[], uint32 n)
{
 const char module[] = "_TIFFMergeFields";
 const char reason[] = "for fields array";
 TIFFField** tp;
 uint32 i;

 for (i = 0; i < n; i++) {
  const TIFFField *fip =
   TIFFFindField(tif, info[i].field_tag, TIFF_NOTYPE);
  if (fip) {
   TIFFErrorExt(tif->tif_clientdata, module,
   "Field with tag %lu is already registered as \"%s\"",
         (unsigned int) info[i].field_tag,
         fip->field_name);
   return 0;
  }
 }

        tif->tif_foundfield = 
# 344 "tif_dirinfo.c" 3 4
                             ((void *)0)
# 344 "tif_dirinfo.c"
                                 ;

 if (tif->tif_nfields > 0) {
  tif->tif_fields = (TIFFField**)
   _TIFFCheckRealloc(tif, tif->tif_fields,
       (tif->tif_nfields + n),
       sizeof(TIFFField *), reason);
 } else {
  tif->tif_fields = (TIFFField **)
   _TIFFCheckMalloc(tif, n, sizeof(TIFFField *),
      reason);
 }
 if (!tif->tif_fields) {
  TIFFErrorExt(tif->tif_clientdata, module,
        "Failed to allocate fields array");
  return 0;
 }
 tp = tif->tif_fields + tif->tif_nfields;
 for (i = 0; i < n; i++)
  *tp++ = (TIFFField *) (info + i);


 qsort(tif->tif_fields, tif->tif_nfields += n,
       sizeof(TIFFField *), tagCompare);

 return n;
}

void
_TIFFPrintFieldInfo(TIFF* tif, FILE* fd)
{
 uint32 i;

 fprintf(fd, "%s: \n", tif->tif_name);
 for (i = 0; i < tif->tif_nfields; i++) {
  const TIFFField* fip = tif->tif_fields[i];
  fprintf(fd, "field[%2d] %5lu, %2d, %2d, %d, %2d, %5s, %5s, %s\n"
   , (int)i
   , (unsigned long) fip->field_tag
   , fip->field_readcount, fip->field_writecount
   , fip->field_type
   , fip->field_bit
   , fip->field_oktochange ? "TRUE" : "FALSE"
   , fip->field_passcount ? "TRUE" : "FALSE"
   , fip->field_name
  );
 }
}




int
TIFFDataWidth(TIFFDataType type)
{
 switch(type)
 {
  case 0:
  case TIFF_BYTE:
  case TIFF_ASCII:
  case TIFF_SBYTE:
  case TIFF_UNDEFINED:
   return 1;
  case TIFF_SHORT:
  case TIFF_SSHORT:
   return 2;
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_FLOAT:
  case TIFF_IFD:
   return 4;
  case TIFF_RATIONAL:
  case TIFF_SRATIONAL:
  case TIFF_DOUBLE:
  case TIFF_LONG8:
  case TIFF_SLONG8:
  case TIFF_IFD8:
   return 8;
  default:
   return 0;
 }
}
# 434 "tif_dirinfo.c"
int
_TIFFDataSize(TIFFDataType type)
{
 switch (type)
 {
  case TIFF_BYTE:
  case TIFF_SBYTE:
  case TIFF_ASCII:
  case TIFF_UNDEFINED:
      return 1;
  case TIFF_SHORT:
  case TIFF_SSHORT:
      return 2;
  case TIFF_LONG:
  case TIFF_SLONG:
  case TIFF_FLOAT:
  case TIFF_IFD:
  case TIFF_RATIONAL:
  case TIFF_SRATIONAL:
      return 4;
  case TIFF_DOUBLE:
  case TIFF_LONG8:
  case TIFF_SLONG8:
  case TIFF_IFD8:
      return 8;
  default:
      return 0;
 }
}

const TIFFField*
TIFFFindField(TIFF* tif, uint32 tag, TIFFDataType dt)
{
 TIFFField key = {0, 0, 0, TIFF_NOTYPE, 0, 0, 0, 0, 0, 0, 
# 467 "tif_dirinfo.c" 3 4
                                                         ((void *)0)
# 467 "tif_dirinfo.c"
                                                             , 
# 467 "tif_dirinfo.c" 3 4
                                                               ((void *)0)
# 467 "tif_dirinfo.c"
                                                                   };
 TIFFField* pkey = &key;
 const TIFFField **ret;
 if (tif->tif_foundfield && tif->tif_foundfield->field_tag == tag &&
     (dt == TIFF_NOTYPE || dt == tif->tif_foundfield->field_type))
  return tif->tif_foundfield;


 if ( !tif->tif_fields ) {
  return 
# 476 "tif_dirinfo.c" 3 4
        ((void *)0)
# 476 "tif_dirinfo.c"
            ;
 }



 key.field_tag = tag;
 key.field_type = dt;

 ret = (const TIFFField **) bsearch(&pkey, tif->tif_fields,
        tif->tif_nfields,
        sizeof(TIFFField *), tagCompare);
 return tif->tif_foundfield = (ret ? *ret : 
# 487 "tif_dirinfo.c" 3 4
                                           ((void *)0)
# 487 "tif_dirinfo.c"
                                               );
}

const TIFFField*
_TIFFFindFieldByName(TIFF* tif, const char *field_name, TIFFDataType dt)
{
 TIFFField key = {0, 0, 0, TIFF_NOTYPE, 0, 0, 0, 0, 0, 0, 
# 493 "tif_dirinfo.c" 3 4
                                                         ((void *)0)
# 493 "tif_dirinfo.c"
                                                             , 
# 493 "tif_dirinfo.c" 3 4
                                                               ((void *)0)
# 493 "tif_dirinfo.c"
                                                                   };
 TIFFField* pkey = &key;
 const TIFFField **ret;
 if (tif->tif_foundfield
     && (strcmp(tif->tif_foundfield->field_name,field_name) == 0)
     && (dt == TIFF_NOTYPE || dt == tif->tif_foundfield->field_type))
  return (tif->tif_foundfield);


 if ( !tif->tif_fields ) {
  return 
# 503 "tif_dirinfo.c" 3 4
        ((void *)0)
# 503 "tif_dirinfo.c"
            ;
 }



 key.field_name = (char *)field_name;
 key.field_type = dt;

 ret = (const TIFFField **) lfind(&pkey, tif->tif_fields,
      &tif->tif_nfields,
      sizeof(TIFFField *), tagNameCompare);
 return tif->tif_foundfield = (ret ? *ret : 
# 514 "tif_dirinfo.c" 3 4
                                           ((void *)0)
# 514 "tif_dirinfo.c"
                                               );
}

const TIFFField*
TIFFFieldWithTag(TIFF* tif, uint32 tag)
{
 const TIFFField* fip = TIFFFindField(tif, tag, TIFF_NOTYPE);
 if (!fip) {
  TIFFErrorExt(tif->tif_clientdata, "TIFFFieldWithTag",
        "Internal error, unknown tag 0x%x",
        (unsigned int) tag);
  
# 525 "tif_dirinfo.c" 3 4
 ((
# 525 "tif_dirinfo.c"
 fip != 
# 525 "tif_dirinfo.c" 3 4
 ((void *)0)) ? (void) (0) : __assert_fail (
# 525 "tif_dirinfo.c"
 "fip != NULL"
# 525 "tif_dirinfo.c" 3 4
 , "tif_dirinfo.c", 525, __PRETTY_FUNCTION__))
# 525 "tif_dirinfo.c"
                    ;

 }
 return (fip);
}

const TIFFField*
TIFFFieldWithName(TIFF* tif, const char *field_name)
{
 const TIFFField* fip =
  _TIFFFindFieldByName(tif, field_name, TIFF_NOTYPE);
 if (!fip) {
  TIFFErrorExt(tif->tif_clientdata, "TIFFFieldWithName",
        "Internal error, unknown tag %s", field_name);
  
# 539 "tif_dirinfo.c" 3 4
 ((
# 539 "tif_dirinfo.c"
 fip != 
# 539 "tif_dirinfo.c" 3 4
 ((void *)0)) ? (void) (0) : __assert_fail (
# 539 "tif_dirinfo.c"
 "fip != NULL"
# 539 "tif_dirinfo.c" 3 4
 , "tif_dirinfo.c", 539, __PRETTY_FUNCTION__))
# 539 "tif_dirinfo.c"
                    ;

 }
 return (fip);
}

const TIFFField*
_TIFFFindOrRegisterField(TIFF *tif, uint32 tag, TIFFDataType dt)

{
 const TIFFField *fld;

 fld = TIFFFindField(tif, tag, dt);
 if (fld == 
# 552 "tif_dirinfo.c" 3 4
           ((void *)0)
# 552 "tif_dirinfo.c"
               ) {
  fld = _TIFFCreateAnonField(tif, tag, dt);
  if (!_TIFFMergeFields(tif, fld, 1))
   return 
# 555 "tif_dirinfo.c" 3 4
         ((void *)0)
# 555 "tif_dirinfo.c"
             ;
 }

 return fld;
}

TIFFField*
_TIFFCreateAnonField(TIFF *tif, uint32 tag, TIFFDataType field_type)
{
 TIFFField *fld;
 (void) tif;

 fld = (TIFFField *) _TIFFmalloc(sizeof (TIFFField));
 if (fld == 
# 568 "tif_dirinfo.c" 3 4
           ((void *)0)
# 568 "tif_dirinfo.c"
               )
     return 
# 569 "tif_dirinfo.c" 3 4
           ((void *)0)
# 569 "tif_dirinfo.c"
               ;
 _TIFFmemset(fld, 0, sizeof(TIFFField));

 fld->field_tag = tag;
 fld->field_readcount = -3;
 fld->field_writecount = -3;
 fld->field_type = field_type;
 fld->reserved = 0;
 switch (field_type)
 {
  case TIFF_BYTE:
  case TIFF_UNDEFINED:
   fld->set_field_type = TIFF_SETGET_C32_UINT8;
   fld->get_field_type = TIFF_SETGET_C32_UINT8;
   break;
  case TIFF_ASCII:
   fld->set_field_type = TIFF_SETGET_C32_ASCII;
   fld->get_field_type = TIFF_SETGET_C32_ASCII;
   break;
  case TIFF_SHORT:
   fld->set_field_type = TIFF_SETGET_C32_UINT16;
   fld->get_field_type = TIFF_SETGET_C32_UINT16;
   break;
  case TIFF_LONG:
   fld->set_field_type = TIFF_SETGET_C32_UINT32;
   fld->get_field_type = TIFF_SETGET_C32_UINT32;
   break;
  case TIFF_RATIONAL:
  case TIFF_SRATIONAL:
  case TIFF_FLOAT:
   fld->set_field_type = TIFF_SETGET_C32_FLOAT;
   fld->get_field_type = TIFF_SETGET_C32_FLOAT;
   break;
  case TIFF_SBYTE:
   fld->set_field_type = TIFF_SETGET_C32_SINT8;
   fld->get_field_type = TIFF_SETGET_C32_SINT8;
   break;
  case TIFF_SSHORT:
   fld->set_field_type = TIFF_SETGET_C32_SINT16;
   fld->get_field_type = TIFF_SETGET_C32_SINT16;
   break;
  case TIFF_SLONG:
   fld->set_field_type = TIFF_SETGET_C32_SINT32;
   fld->get_field_type = TIFF_SETGET_C32_SINT32;
   break;
  case TIFF_DOUBLE:
   fld->set_field_type = TIFF_SETGET_C32_DOUBLE;
   fld->get_field_type = TIFF_SETGET_C32_DOUBLE;
   break;
  case TIFF_IFD:
  case TIFF_IFD8:
   fld->set_field_type = TIFF_SETGET_C32_IFD8;
   fld->get_field_type = TIFF_SETGET_C32_IFD8;
   break;
  case TIFF_LONG8:
   fld->set_field_type = TIFF_SETGET_C32_UINT64;
   fld->get_field_type = TIFF_SETGET_C32_UINT64;
   break;
  case TIFF_SLONG8:
   fld->set_field_type = TIFF_SETGET_C32_SINT64;
   fld->get_field_type = TIFF_SETGET_C32_SINT64;
   break;
  default:
   fld->set_field_type = TIFF_SETGET_UNDEFINED;
   fld->get_field_type = TIFF_SETGET_UNDEFINED;
   break;
 }
 fld->field_bit = 65;
 fld->field_oktochange = 1;
 fld->field_passcount = 1;
 fld->field_name = (char *) _TIFFmalloc(32);
 if (fld->field_name == 
# 640 "tif_dirinfo.c" 3 4
                       ((void *)0)
# 640 "tif_dirinfo.c"
                           ) {
     _TIFFfree(fld);
     return 
# 642 "tif_dirinfo.c" 3 4
           ((void *)0)
# 642 "tif_dirinfo.c"
               ;
 }
 fld->field_subfields = 
# 644 "tif_dirinfo.c" 3 4
                       ((void *)0)
# 644 "tif_dirinfo.c"
                           ;





 sprintf(fld->field_name, "Tag %d", (int) tag);

 return fld;
}
# 662 "tif_dirinfo.c"
static TIFFSetGetFieldType
_TIFFSetGetType(TIFFDataType type, short count, unsigned char passcount)
{
 if (type == TIFF_ASCII && count == -1 && passcount == 0)
  return TIFF_SETGET_ASCII;

 else if (count == 1 && passcount == 0) {
  switch (type)
  {
   case TIFF_BYTE:
   case TIFF_UNDEFINED:
    return TIFF_SETGET_UINT8;
   case TIFF_ASCII:
    return TIFF_SETGET_ASCII;
   case TIFF_SHORT:
    return TIFF_SETGET_UINT16;
   case TIFF_LONG:
    return TIFF_SETGET_UINT32;
   case TIFF_RATIONAL:
   case TIFF_SRATIONAL:
   case TIFF_FLOAT:
    return TIFF_SETGET_FLOAT;
   case TIFF_SBYTE:
    return TIFF_SETGET_SINT8;
   case TIFF_SSHORT:
    return TIFF_SETGET_SINT16;
   case TIFF_SLONG:
    return TIFF_SETGET_SINT32;
   case TIFF_DOUBLE:
    return TIFF_SETGET_DOUBLE;
   case TIFF_IFD:
   case TIFF_IFD8:
    return TIFF_SETGET_IFD8;
   case TIFF_LONG8:
    return TIFF_SETGET_UINT64;
   case TIFF_SLONG8:
    return TIFF_SETGET_SINT64;
   default:
    return TIFF_SETGET_UNDEFINED;
  }
 }

 else if (count >= 1 && passcount == 0) {
  switch (type)
  {
   case TIFF_BYTE:
   case TIFF_UNDEFINED:
    return TIFF_SETGET_C0_UINT8;
   case TIFF_ASCII:
    return TIFF_SETGET_C0_ASCII;
   case TIFF_SHORT:
    return TIFF_SETGET_C0_UINT16;
   case TIFF_LONG:
    return TIFF_SETGET_C0_UINT32;
   case TIFF_RATIONAL:
   case TIFF_SRATIONAL:
   case TIFF_FLOAT:
    return TIFF_SETGET_C0_FLOAT;
   case TIFF_SBYTE:
    return TIFF_SETGET_C0_SINT8;
   case TIFF_SSHORT:
    return TIFF_SETGET_C0_SINT16;
   case TIFF_SLONG:
    return TIFF_SETGET_C0_SINT32;
   case TIFF_DOUBLE:
    return TIFF_SETGET_C0_DOUBLE;
   case TIFF_IFD:
   case TIFF_IFD8:
    return TIFF_SETGET_C0_IFD8;
   case TIFF_LONG8:
    return TIFF_SETGET_C0_UINT64;
   case TIFF_SLONG8:
    return TIFF_SETGET_C0_SINT64;
   default:
    return TIFF_SETGET_UNDEFINED;
  }
 }

 else if (count == -1 && passcount == 1) {
  switch (type)
  {
   case TIFF_BYTE:
   case TIFF_UNDEFINED:
    return TIFF_SETGET_C16_UINT8;
   case TIFF_ASCII:
    return TIFF_SETGET_C16_ASCII;
   case TIFF_SHORT:
    return TIFF_SETGET_C16_UINT16;
   case TIFF_LONG:
    return TIFF_SETGET_C16_UINT32;
   case TIFF_RATIONAL:
   case TIFF_SRATIONAL:
   case TIFF_FLOAT:
    return TIFF_SETGET_C16_FLOAT;
   case TIFF_SBYTE:
    return TIFF_SETGET_C16_SINT8;
   case TIFF_SSHORT:
    return TIFF_SETGET_C16_SINT16;
   case TIFF_SLONG:
    return TIFF_SETGET_C16_SINT32;
   case TIFF_DOUBLE:
    return TIFF_SETGET_C16_DOUBLE;
   case TIFF_IFD:
   case TIFF_IFD8:
    return TIFF_SETGET_C16_IFD8;
   case TIFF_LONG8:
    return TIFF_SETGET_C16_UINT64;
   case TIFF_SLONG8:
    return TIFF_SETGET_C16_SINT64;
   default:
    return TIFF_SETGET_UNDEFINED;
  }
 }

 else if (count == -3 && passcount == 1) {
  switch (type)
  {
   case TIFF_BYTE:
   case TIFF_UNDEFINED:
    return TIFF_SETGET_C32_UINT8;
   case TIFF_ASCII:
    return TIFF_SETGET_C32_ASCII;
   case TIFF_SHORT:
    return TIFF_SETGET_C32_UINT16;
   case TIFF_LONG:
    return TIFF_SETGET_C32_UINT32;
   case TIFF_RATIONAL:
   case TIFF_SRATIONAL:
   case TIFF_FLOAT:
    return TIFF_SETGET_C32_FLOAT;
   case TIFF_SBYTE:
    return TIFF_SETGET_C32_SINT8;
   case TIFF_SSHORT:
    return TIFF_SETGET_C32_SINT16;
   case TIFF_SLONG:
    return TIFF_SETGET_C32_SINT32;
   case TIFF_DOUBLE:
    return TIFF_SETGET_C32_DOUBLE;
   case TIFF_IFD:
   case TIFF_IFD8:
    return TIFF_SETGET_C32_IFD8;
   case TIFF_LONG8:
    return TIFF_SETGET_C32_UINT64;
   case TIFF_SLONG8:
    return TIFF_SETGET_C32_SINT64;
   default:
    return TIFF_SETGET_UNDEFINED;
  }
 }

 return TIFF_SETGET_UNDEFINED;
}

int
TIFFMergeFieldInfo(TIFF* tif, const TIFFFieldInfo info[], uint32 n)
{
 const char module[] = "TIFFMergeFieldInfo";
 const char reason[] = "for fields array";
 TIFFField *tp;
 uint32 i, nfields;

 if (tif->tif_nfieldscompat > 0) {
  tif->tif_fieldscompat = (TIFFFieldArray *)
   _TIFFCheckRealloc(tif, tif->tif_fieldscompat,
       tif->tif_nfieldscompat + 1,
       sizeof(TIFFFieldArray), reason);
 } else {
  tif->tif_fieldscompat = (TIFFFieldArray *)
   _TIFFCheckMalloc(tif, 1, sizeof(TIFFFieldArray),
      reason);
 }
 if (!tif->tif_fieldscompat) {
  TIFFErrorExt(tif->tif_clientdata, module,
        "Failed to allocate fields array");
  return -1;
 }
 nfields = tif->tif_nfieldscompat++;

 tif->tif_fieldscompat[nfields].type = tfiatOther;
 tif->tif_fieldscompat[nfields].allocated_size = n;
 tif->tif_fieldscompat[nfields].count = n;
 tif->tif_fieldscompat[nfields].fields =
  (TIFFField *)_TIFFCheckMalloc(tif, n, sizeof(TIFFField),
           reason);
 if (!tif->tif_fieldscompat[nfields].fields) {
  TIFFErrorExt(tif->tif_clientdata, module,
        "Failed to allocate fields array");
  return -1;
 }

 tp = tif->tif_fieldscompat[nfields].fields;
 for (i = 0; i < n; i++) {
  tp->field_tag = info[i].field_tag;
  tp->field_readcount = info[i].field_readcount;
  tp->field_writecount = info[i].field_writecount;
  tp->field_type = info[i].field_type;
  tp->reserved = 0;
  tp->set_field_type =
       _TIFFSetGetType(info[i].field_type,
         info[i].field_readcount,
         info[i].field_passcount);
  tp->get_field_type =
       _TIFFSetGetType(info[i].field_type,
         info[i].field_readcount,
         info[i].field_passcount);
  tp->field_bit = info[i].field_bit;
  tp->field_oktochange = info[i].field_oktochange;
  tp->field_passcount = info[i].field_passcount;
  tp->field_name = info[i].field_name;
  tp->field_subfields = 
# 871 "tif_dirinfo.c" 3 4
                       ((void *)0)
# 871 "tif_dirinfo.c"
                           ;
  tp++;
 }

 if (!_TIFFMergeFields(tif, tif->tif_fieldscompat[nfields].fields, n)) {
  TIFFErrorExt(tif->tif_clientdata, module,
        "Setting up field info failed");
  return -1;
 }

 return 0;
}

const TIFFFieldInfo*
TIFFFindFieldInfoByName(TIFF* tif, const char *field_name, TIFFDataType dt)
{
# 913 "tif_dirinfo.c"
 return 
# 913 "tif_dirinfo.c" 3 4
       ((void *)0)
# 913 "tif_dirinfo.c"
           ;
}

const TIFFFieldInfo*
TIFFFindFieldInfo(TIFF* tif, uint32 tag, TIFFDataType dt)
{
# 944 "tif_dirinfo.c"
 return 
# 944 "tif_dirinfo.c" 3 4
       ((void *)0)
# 944 "tif_dirinfo.c"
           ;
}
