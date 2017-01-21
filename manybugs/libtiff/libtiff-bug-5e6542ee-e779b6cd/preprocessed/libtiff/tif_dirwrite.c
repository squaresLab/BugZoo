# 1 "tif_dirwrite.c"
# 1 "/root/mountpoint-genprog/genprog-many-bugs/libtiff-bug-5e6542ee-e779b6cd/libtiff/libtiff//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "tif_dirwrite.c"
# 32 "tif_dirwrite.c"
# 1 "tiffiop.h" 1
# 33 "tiffiop.h"
# 1 "tif_config.h" 1
# 34 "tiffiop.h" 2


# 1 "/usr/include/fcntl.h" 1 3 4
# 27 "/usr/include/fcntl.h" 3 4
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
# 28 "/usr/include/fcntl.h" 2 3 4






# 1 "/usr/include/bits/fcntl.h" 1 3 4
# 25 "/usr/include/bits/fcntl.h" 3 4
# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4


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
# 31 "/usr/include/sys/types.h" 2 3 4



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







typedef __off64_t off_t;
# 99 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





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
# 211 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 3 4
typedef unsigned int size_t;
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
# 217 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 218 "/usr/include/sys/types.h" 2 3 4


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



# 26 "/usr/include/bits/fcntl.h" 2 3 4
# 150 "/usr/include/bits/fcntl.h" 3 4
struct flock
  {
    short int l_type;
    short int l_whence;




    __off64_t l_start;
    __off64_t l_len;

    __pid_t l_pid;
  };
# 235 "/usr/include/bits/fcntl.h" 3 4

# 281 "/usr/include/bits/fcntl.h" 3 4

# 35 "/usr/include/fcntl.h" 2 3 4





# 1 "/usr/include/time.h" 1 3 4
# 41 "/usr/include/fcntl.h" 2 3 4
# 1 "/usr/include/bits/stat.h" 1 3 4
# 39 "/usr/include/bits/stat.h" 3 4
struct stat
  {
    __dev_t st_dev;
    unsigned short int __pad1;



    __ino_t __st_ino;

    __mode_t st_mode;
    __nlink_t st_nlink;
    __uid_t st_uid;
    __gid_t st_gid;
    __dev_t st_rdev;
    unsigned short int __pad2;



    __off64_t st_size;

    __blksize_t st_blksize;




    __blkcnt64_t st_blocks;
# 73 "/usr/include/bits/stat.h" 3 4
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
# 91 "/usr/include/bits/stat.h" 3 4
    __ino64_t st_ino;

  };
# 42 "/usr/include/fcntl.h" 2 3 4
# 122 "/usr/include/fcntl.h" 3 4
extern int fcntl (int __fd, int __cmd, ...);
# 134 "/usr/include/fcntl.h" 3 4
extern int open (__const char *__file, int __oflag, ...) __asm__ ("" "open64")
     __attribute__ ((__nonnull__ (1)));
# 159 "/usr/include/fcntl.h" 3 4
extern int openat (int __fd, __const char *__file, int __oflag, ...) __asm__ ("" "openat64")
                    __attribute__ ((__nonnull__ (2)));
# 180 "/usr/include/fcntl.h" 3 4
extern int creat (__const char *__file, __mode_t __mode) __asm__ ("" "creat64")
                  __attribute__ ((__nonnull__ (1)));
# 209 "/usr/include/fcntl.h" 3 4
extern int lockf (int __fd, int __cmd, __off64_t __len) __asm__ ("" "lockf64");
# 227 "/usr/include/fcntl.h" 3 4
extern int posix_fadvise (int __fd, __off64_t __offset, __off64_t __len, int __advise) __asm__ ("" "posix_fadvise64") __attribute__ ((__nothrow__))

                      ;
# 248 "/usr/include/fcntl.h" 3 4
extern int posix_fallocate (int __fd, __off64_t __offset, __off64_t __len) __asm__ ("" "posix_fallocate64")

                           ;
# 267 "/usr/include/fcntl.h" 3 4

# 37 "tiffiop.h" 2







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
# 1298 "/usr/include/bits/string2.h" 3 4
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4


# 469 "/usr/include/stdlib.h" 3 4


extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

# 964 "/usr/include/stdlib.h" 3 4

# 1299 "/usr/include/bits/string2.h" 2 3 4




extern char *__strdup (__const char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 1322 "/usr/include/bits/string2.h" 3 4
extern char *__strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__));
# 638 "/usr/include/string.h" 2 3 4
# 646 "/usr/include/string.h" 3 4

# 45 "tiffiop.h" 2



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



# 49 "tiffiop.h" 2





# 1 "/usr/include/search.h" 1 3 4
# 26 "/usr/include/search.h" 3 4
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 27 "/usr/include/search.h" 2 3 4


# 45 "/usr/include/search.h" 3 4
extern void insque (void *__elem, void *__prev) __attribute__ ((__nothrow__));


extern void remque (void *__elem) __attribute__ ((__nothrow__));






typedef int (*__compar_fn_t) (__const void *, __const void *);







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
# 88 "/usr/include/search.h" 3 4
extern ENTRY *hsearch (ENTRY __item, ACTION __action) __attribute__ ((__nothrow__));


extern int hcreate (size_t __nel) __attribute__ ((__nothrow__));


extern void hdestroy (void) __attribute__ ((__nothrow__));
# 119 "/usr/include/search.h" 3 4
typedef enum
{
  preorder,
  postorder,
  endorder,
  leaf
}
VISIT;



extern void *tsearch (__const void *__key, void **__rootp,
        __compar_fn_t __compar);



extern void *tfind (__const void *__key, void *__const *__rootp,
      __compar_fn_t __compar);


extern void *tdelete (__const void *__restrict __key,
        void **__restrict __rootp,
        __compar_fn_t __compar);



typedef void (*__action_fn_t) (__const void *__nodep, VISIT __value,
          int __level);




extern void twalk (__const void *__root, __action_fn_t __action);
# 165 "/usr/include/search.h" 3 4
extern void *lfind (__const void *__key, __const void *__base,
      size_t *__nmemb, size_t __size, __compar_fn_t __compar);



extern void *lsearch (__const void *__key, void *__base,
        size_t *__nmemb, size_t __size, __compar_fn_t __compar);


# 55 "tiffiop.h" 2





# 1 "tiffio.h" 1
# 33 "tiffio.h"
# 1 "tiff.h" 1
# 30 "tiff.h"
# 1 "tiffconf.h" 1
# 31 "tiff.h" 2
# 68 "tiff.h"
typedef signed char int8;
typedef unsigned char uint8;

typedef signed short int16;
typedef unsigned short uint16;

typedef signed int int32;
typedef unsigned int uint32;

typedef signed long long int64;
typedef unsigned long long uint64;
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
# 249 "tiffio.h"
typedef int (*TIFFInitMethod)(TIFF*, int);
typedef struct {
 char* name;
 uint16 scheme;
 TIFFInitMethod init;
} TIFFCodec;

# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4




# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
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
# 109 "/usr/include/stdio.h" 3 4




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

# 257 "tiffio.h" 2
# 1 "/usr/lib/gcc/i686-redhat-linux/4.4.5/include/stdarg.h" 1 3 4
# 258 "tiffio.h" 2
# 267 "tiffio.h"
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
# 309 "tiffio.h"
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
# 407 "tiffio.h"
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
# 33 "tif_dirwrite.c" 2
# 42 "tif_dirwrite.c"
static int TIFFWriteDirectorySec(TIFF* tif, int isimage, int imagedone, uint64* pdiroff);

static int TIFFWriteDirectoryTagSampleformatPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value);

static int TIFFWriteDirectoryTagAscii(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, char* value);
static int TIFFWriteDirectoryTagUndefinedArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint8* value);
static int TIFFWriteDirectoryTagByte(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint8 value);
static int TIFFWriteDirectoryTagByteArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint8* value);
static int TIFFWriteDirectoryTagBytePerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint8 value);
static int TIFFWriteDirectoryTagSbyte(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int8 value);
static int TIFFWriteDirectoryTagSbyteArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int8* value);
static int TIFFWriteDirectoryTagSbytePerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int8 value);
static int TIFFWriteDirectoryTagShort(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint16 value);
static int TIFFWriteDirectoryTagShortArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint16* value);
static int TIFFWriteDirectoryTagShortPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint16 value);
static int TIFFWriteDirectoryTagSshort(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int16 value);
static int TIFFWriteDirectoryTagSshortArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int16* value);
static int TIFFWriteDirectoryTagSshortPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int16 value);
static int TIFFWriteDirectoryTagLong(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 value);
static int TIFFWriteDirectoryTagLongArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint32* value);
static int TIFFWriteDirectoryTagLongPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 value);
static int TIFFWriteDirectoryTagSlong(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int32 value);
static int TIFFWriteDirectoryTagSlongArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int32* value);
static int TIFFWriteDirectoryTagSlongPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int32 value);
static int TIFFWriteDirectoryTagLong8(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint64 value);
static int TIFFWriteDirectoryTagLong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value);
static int TIFFWriteDirectoryTagSlong8(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int64 value);
static int TIFFWriteDirectoryTagSlong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int64* value);
static int TIFFWriteDirectoryTagRational(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value);
static int TIFFWriteDirectoryTagRationalArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value);
static int TIFFWriteDirectoryTagSrationalArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value);
static int TIFFWriteDirectoryTagFloat(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, float value);
static int TIFFWriteDirectoryTagFloatArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value);
static int TIFFWriteDirectoryTagFloatPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, float value);
static int TIFFWriteDirectoryTagDouble(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value);
static int TIFFWriteDirectoryTagDoubleArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, double* value);
static int TIFFWriteDirectoryTagDoublePerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value);
static int TIFFWriteDirectoryTagIfdArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint32* value);
static int TIFFWriteDirectoryTagIfd8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value);
static int TIFFWriteDirectoryTagShortLong(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 value);
static int TIFFWriteDirectoryTagLongLong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value);
static int TIFFWriteDirectoryTagShortLongLong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value);
static int TIFFWriteDirectoryTagColormap(TIFF* tif, uint32* ndir, TIFFDirEntry* dir);
static int TIFFWriteDirectoryTagTransferfunction(TIFF* tif, uint32* ndir, TIFFDirEntry* dir);
static int TIFFWriteDirectoryTagSubifd(TIFF* tif, uint32* ndir, TIFFDirEntry* dir);

static int TIFFWriteDirectoryTagCheckedAscii(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, char* value);
static int TIFFWriteDirectoryTagCheckedUndefinedArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint8* value);
static int TIFFWriteDirectoryTagCheckedByte(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint8 value);
static int TIFFWriteDirectoryTagCheckedByteArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint8* value);
static int TIFFWriteDirectoryTagCheckedSbyte(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int8 value);
static int TIFFWriteDirectoryTagCheckedSbyteArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int8* value);
static int TIFFWriteDirectoryTagCheckedShort(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint16 value);
static int TIFFWriteDirectoryTagCheckedShortArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint16* value);
static int TIFFWriteDirectoryTagCheckedSshort(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int16 value);
static int TIFFWriteDirectoryTagCheckedSshortArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int16* value);
static int TIFFWriteDirectoryTagCheckedLong(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 value);
static int TIFFWriteDirectoryTagCheckedLongArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint32* value);
static int TIFFWriteDirectoryTagCheckedSlong(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int32 value);
static int TIFFWriteDirectoryTagCheckedSlongArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int32* value);
static int TIFFWriteDirectoryTagCheckedLong8(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint64 value);
static int TIFFWriteDirectoryTagCheckedLong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value);
static int TIFFWriteDirectoryTagCheckedSlong8(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int64 value);
static int TIFFWriteDirectoryTagCheckedSlong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int64* value);
static int TIFFWriteDirectoryTagCheckedRational(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value);
static int TIFFWriteDirectoryTagCheckedRationalArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value);
static int TIFFWriteDirectoryTagCheckedSrationalArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value);
static int TIFFWriteDirectoryTagCheckedFloat(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, float value);
static int TIFFWriteDirectoryTagCheckedFloatArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value);
static int TIFFWriteDirectoryTagCheckedDouble(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value);
static int TIFFWriteDirectoryTagCheckedDoubleArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, double* value);
static int TIFFWriteDirectoryTagCheckedIfdArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint32* value);
static int TIFFWriteDirectoryTagCheckedIfd8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value);

static int TIFFWriteDirectoryTagData(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint16 datatype, uint32 count, uint32 datalength, void* data);

static int TIFFLinkDirectory(TIFF*);







int
TIFFWriteDirectory(TIFF* tif)
{
 return TIFFWriteDirectorySec(tif,1,1,((void *)0));
}







int
TIFFCheckpointDirectory(TIFF* tif)
{
 int rc;

 if (tif->tif_dir.td_stripoffset == ((void *)0))
     (void) TIFFSetupStrips(tif);
 rc = TIFFWriteDirectorySec(tif,1,0,((void *)0));
 (void) TIFFSetWriteOffset(tif, ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(0),(2))));
 return rc;
}

int
TIFFWriteCustomDirectory(TIFF* tif, uint64* pdiroff)
{
 return TIFFWriteDirectorySec(tif,0,0,pdiroff);
}







int
TIFFRewriteDirectory( TIFF *tif )
{
 static const char module[] = "TIFFRewriteDirectory";


 if( tif->tif_diroff == 0 )
  return TIFFWriteDirectory( tif );






 if (!(tif->tif_flags&0x80000))
 {
  if (tif->tif_header.classic.tiff_diroff == tif->tif_diroff)
  {
   tif->tif_header.classic.tiff_diroff = 0;
   tif->tif_diroff = 0;

   ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(4),(0)));
   if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&(tif->tif_header.classic.tiff_diroff))),((4))))==(4)))
   {
    TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
        "Error updating TIFF header");
    return (0);
   }
  }
  else
  {
   uint32 nextdir;
   nextdir = tif->tif_header.classic.tiff_diroff;
   while(1) {
    uint16 dircount;
    uint32 nextnextdir;

    if (!(((*((tif))->tif_seekproc)(((tif))->tif_clientdata,((nextdir)),(0)))==(nextdir)) ||
        !(((*((tif))->tif_readproc)(((tif))->tif_clientdata,(&dircount),(2)))==(2))) {
     TIFFErrorExt(tif->tif_clientdata, module,
          "Error fetching directory count");
     return (0);
    }
    if (tif->tif_flags & 0x00080)
     TIFFSwabShort(&dircount);
    (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(nextdir+2+dircount*12),(0)))
                                        ;
    if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,(&nextnextdir),(4)))==(4))) {
     TIFFErrorExt(tif->tif_clientdata, module,
          "Error fetching directory link");
     return (0);
    }
    if (tif->tif_flags & 0x00080)
     TIFFSwabLong(&nextnextdir);
    if (nextnextdir==tif->tif_diroff)
    {
     uint32 m;
     m=0;
     (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(nextdir+2+dircount*12),(0)))
                                         ;
     if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&m)),((4))))==(4))) {
      TIFFErrorExt(tif->tif_clientdata, module,
           "Error writing directory link");
      return (0);
     }
     tif->tif_diroff=0;
     break;
    }
    nextdir=nextnextdir;
   }
  }
 }
 else
 {
  if (tif->tif_header.big.tiff_diroff == tif->tif_diroff)
  {
   tif->tif_header.big.tiff_diroff = 0;
   tif->tif_diroff = 0;

   ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(8),(0)));
   if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&(tif->tif_header.big.tiff_diroff))),((8))))==(8)))
   {
    TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
        "Error updating TIFF header");
    return (0);
   }
  }
  else
  {
   uint64 nextdir;
   nextdir = tif->tif_header.big.tiff_diroff;
   while(1) {
    uint64 dircount64;
    uint16 dircount;
    uint64 nextnextdir;

    if (!(((*((tif))->tif_seekproc)(((tif))->tif_clientdata,((nextdir)),(0)))==(nextdir)) ||
        !(((*((tif))->tif_readproc)(((tif))->tif_clientdata,(&dircount64),(8)))==(8))) {
     TIFFErrorExt(tif->tif_clientdata, module,
          "Error fetching directory count");
     return (0);
    }
    if (tif->tif_flags & 0x00080)
     TIFFSwabLong8(&dircount64);
    if (dircount64>0xFFFF)
    {
     TIFFErrorExt(tif->tif_clientdata, module,
          "Sanity check on tag count failed, likely corrupt TIFF");
     return (0);
    }
    dircount=(uint16)dircount64;
    (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(nextdir+8+dircount*20),(0)))
                                        ;
    if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,(&nextnextdir),(8)))==(8))) {
     TIFFErrorExt(tif->tif_clientdata, module,
          "Error fetching directory link");
     return (0);
    }
    if (tif->tif_flags & 0x00080)
     TIFFSwabLong8(&nextnextdir);
    if (nextnextdir==tif->tif_diroff)
    {
     uint64 m;
     m=0;
     (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(nextdir+8+dircount*20),(0)))
                                         ;
     if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&m)),((8))))==(8))) {
      TIFFErrorExt(tif->tif_clientdata, module,
           "Error writing directory link");
      return (0);
     }
     tif->tif_diroff=0;
     break;
    }
    nextdir=nextnextdir;
   }
  }
 }





 return TIFFWriteDirectory( tif );
}

static int
TIFFWriteDirectorySec(TIFF* tif, int isimage, int imagedone, uint64* pdiroff)
{
 static const char module[] = "TIFFWriteDirectorySec";
 uint32 ndir;
 TIFFDirEntry* dir;
 uint32 dirsize;
 void* dirmem;
 uint32 m;
 if (tif->tif_mode == 00)
  return (1);





 if (imagedone)
 {
                tmsize_t orig_rawcc = tif->tif_rawcc;

  if (tif->tif_flags & 0x01000)
  {
   tif->tif_flags &= ~0x01000;
   if (!(*tif->tif_postencode)(tif))
   {
    TIFFErrorExt(tif->tif_clientdata,module,
        "Error post-encoding before directory write");
    return (0);
   }
  }
  (*tif->tif_close)(tif);







  if (tif->tif_rawcc > 0 && tif->tif_rawcc != orig_rawcc
      && (tif->tif_flags & 0x00040) != 0
      && !TIFFFlushData1(tif))
  {
   TIFFErrorExt(tif->tif_clientdata, module,
       "Error flushing data before directory write");
   return (0);
  }
  if ((tif->tif_flags & 0x00200) && tif->tif_rawdata)
  {
   _TIFFfree(tif->tif_rawdata);
   tif->tif_rawdata = ((void *)0);
   tif->tif_rawcc = 0;
   tif->tif_rawdatasize = 0;
  }
  tif->tif_flags &= ~(0x00040|0x00010);
 }
 dir=((void *)0);
 dirmem=((void *)0);
 dirsize=0;
 while (1)
 {
  ndir=0;
  if (isimage)
  {
   if ((((tif)->tif_dir.td_fieldsset[(1)/32]) & (((unsigned long)1L)<<((1)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShortLong(tif,&ndir,dir,256,tif->tif_dir.td_imagewidth))
     goto bad;
    if (!TIFFWriteDirectoryTagShortLong(tif,&ndir,dir,257,tif->tif_dir.td_imagelength))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(2)/32]) & (((unsigned long)1L)<<((2)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShortLong(tif,&ndir,dir,322,tif->tif_dir.td_tilewidth))
     goto bad;
    if (!TIFFWriteDirectoryTagShortLong(tif,&ndir,dir,323,tif->tif_dir.td_tilelength))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(3)/32]) & (((unsigned long)1L)<<((3)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagRational(tif,&ndir,dir,282,tif->tif_dir.td_xresolution))
     goto bad;
    if (!TIFFWriteDirectoryTagRational(tif,&ndir,dir,283,tif->tif_dir.td_yresolution))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(4)/32]) & (((unsigned long)1L)<<((4)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagRational(tif,&ndir,dir,286,tif->tif_dir.td_xposition))
     goto bad;
    if (!TIFFWriteDirectoryTagRational(tif,&ndir,dir,287,tif->tif_dir.td_yposition))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(5)/32]) & (((unsigned long)1L)<<((5)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagLong(tif,&ndir,dir,254,tif->tif_dir.td_subfiletype))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(6)/32]) & (((unsigned long)1L)<<((6)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShortPerSample(tif,&ndir,dir,258,tif->tif_dir.td_bitspersample))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(7)/32]) & (((unsigned long)1L)<<((7)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShort(tif,&ndir,dir,259,tif->tif_dir.td_compression))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(8)/32]) & (((unsigned long)1L)<<((8)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShort(tif,&ndir,dir,262,tif->tif_dir.td_photometric))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(9)/32]) & (((unsigned long)1L)<<((9)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShort(tif,&ndir,dir,263,tif->tif_dir.td_threshholding))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(10)/32]) & (((unsigned long)1L)<<((10)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShort(tif,&ndir,dir,266,tif->tif_dir.td_fillorder))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(15)/32]) & (((unsigned long)1L)<<((15)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShort(tif,&ndir,dir,274,tif->tif_dir.td_orientation))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(16)/32]) & (((unsigned long)1L)<<((16)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShort(tif,&ndir,dir,277,tif->tif_dir.td_samplesperpixel))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(17)/32]) & (((unsigned long)1L)<<((17)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShortLong(tif,&ndir,dir,278,tif->tif_dir.td_rowsperstrip))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(18)/32]) & (((unsigned long)1L)<<((18)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShortPerSample(tif,&ndir,dir,280,tif->tif_dir.td_minsamplevalue))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(19)/32]) & (((unsigned long)1L)<<((19)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShortPerSample(tif,&ndir,dir,281,tif->tif_dir.td_maxsamplevalue))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(20)/32]) & (((unsigned long)1L)<<((20)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShort(tif,&ndir,dir,284,tif->tif_dir.td_planarconfig))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(22)/32]) & (((unsigned long)1L)<<((22)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShort(tif,&ndir,dir,296,tif->tif_dir.td_resolutionunit))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(23)/32]) & (((unsigned long)1L)<<((23)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShortArray(tif,&ndir,dir,297,2,&tif->tif_dir.td_pagenumber[0]))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(24)/32]) & (((unsigned long)1L)<<((24)&0x1f))))
   {
    if (!(((tif)->tif_flags & 0x00400) != 0))
    {
     if (!TIFFWriteDirectoryTagLongLong8Array(tif,&ndir,dir,279,tif->tif_dir.td_nstrips,tif->tif_dir.td_stripbytecount))
      goto bad;
    }
    else
    {
     if (!TIFFWriteDirectoryTagLongLong8Array(tif,&ndir,dir,325,tif->tif_dir.td_nstrips,tif->tif_dir.td_stripbytecount))
      goto bad;
    }
   }
   if ((((tif)->tif_dir.td_fieldsset[(25)/32]) & (((unsigned long)1L)<<((25)&0x1f))))
   {
    if (!(((tif)->tif_flags & 0x00400) != 0))
    {
     if (!TIFFWriteDirectoryTagLongLong8Array(tif,&ndir,dir,273,tif->tif_dir.td_nstrips,tif->tif_dir.td_stripoffset))
      goto bad;
    }
    else
    {
     if (!TIFFWriteDirectoryTagLongLong8Array(tif,&ndir,dir,324,tif->tif_dir.td_nstrips,tif->tif_dir.td_stripoffset))
      goto bad;
    }
   }
   if ((((tif)->tif_dir.td_fieldsset[(26)/32]) & (((unsigned long)1L)<<((26)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagColormap(tif,&ndir,dir))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(31)/32]) & (((unsigned long)1L)<<((31)&0x1f))))
   {
    if (tif->tif_dir.td_extrasamples)
    {
     uint16 na;
     uint16* nb;
     TIFFGetFieldDefaulted(tif,338,&na,&nb);
     if (!TIFFWriteDirectoryTagShortArray(tif,&ndir,dir,338,na,nb))
      goto bad;
    }
   }
   if ((((tif)->tif_dir.td_fieldsset[(32)/32]) & (((unsigned long)1L)<<((32)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShortPerSample(tif,&ndir,dir,339,tif->tif_dir.td_sampleformat))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(33)/32]) & (((unsigned long)1L)<<((33)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagSampleformatPerSample(tif,&ndir,dir,340,tif->tif_dir.td_sminsamplevalue))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(34)/32]) & (((unsigned long)1L)<<((34)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagSampleformatPerSample(tif,&ndir,dir,341,tif->tif_dir.td_smaxsamplevalue))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(35)/32]) & (((unsigned long)1L)<<((35)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagLong(tif,&ndir,dir,32997,tif->tif_dir.td_imagedepth))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(36)/32]) & (((unsigned long)1L)<<((36)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagLong(tif,&ndir,dir,32998,tif->tif_dir.td_tiledepth))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(37)/32]) & (((unsigned long)1L)<<((37)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShortArray(tif,&ndir,dir,321,2,&tif->tif_dir.td_halftonehints[0]))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(39)/32]) & (((unsigned long)1L)<<((39)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShortArray(tif,&ndir,dir,530,2,&tif->tif_dir.td_ycbcrsubsampling[0]))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(40)/32]) & (((unsigned long)1L)<<((40)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagShort(tif,&ndir,dir,531,tif->tif_dir.td_ycbcrpositioning))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(44)/32]) & (((unsigned long)1L)<<((44)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagTransferfunction(tif,&ndir,dir))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(46)/32]) & (((unsigned long)1L)<<((46)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagAscii(tif,&ndir,dir,333,tif->tif_dir.td_inknameslen,tif->tif_dir.td_inknames))
     goto bad;
   }
   if ((((tif)->tif_dir.td_fieldsset[(49)/32]) & (((unsigned long)1L)<<((49)&0x1f))))
   {
    if (!TIFFWriteDirectoryTagSubifd(tif,&ndir,dir))
     goto bad;
   }
   {
    uint32 n;
    for (n=0; n<tif->tif_nfields; n++) {
     const TIFFField* o;
     o = tif->tif_fields[n];
     if ((o->field_bit>=66)&&((((tif)->tif_dir.td_fieldsset[(o->field_bit)/32]) & (((unsigned long)1L)<<((o->field_bit)&0x1f)))))
     {
      switch (o->get_field_type)
      {
       case TIFF_SETGET_ASCII:
        {
         uint32 pa;
         char* pb;
         ((o->field_type==TIFF_ASCII) ? (void) (0) : __assert_fail ("o->field_type==TIFF_ASCII", "tif_dirwrite.c", 579, __PRETTY_FUNCTION__));
         ((o->field_readcount==-1) ? (void) (0) : __assert_fail ("o->field_readcount==-1", "tif_dirwrite.c", 580, __PRETTY_FUNCTION__));
         ((o->field_passcount==0) ? (void) (0) : __assert_fail ("o->field_passcount==0", "tif_dirwrite.c", 581, __PRETTY_FUNCTION__));
         TIFFGetField(tif,o->field_tag,&pb);
         pa=(uint32)(strlen(pb));
         if (!TIFFWriteDirectoryTagAscii(tif,&ndir,dir,o->field_tag,pa,pb))
          goto bad;
        }
        break;
       case TIFF_SETGET_UINT16:
        {
         uint16 p;
         ((o->field_type==TIFF_SHORT) ? (void) (0) : __assert_fail ("o->field_type==TIFF_SHORT", "tif_dirwrite.c", 591, __PRETTY_FUNCTION__));
         ((o->field_readcount==1) ? (void) (0) : __assert_fail ("o->field_readcount==1", "tif_dirwrite.c", 592, __PRETTY_FUNCTION__));
         ((o->field_passcount==0) ? (void) (0) : __assert_fail ("o->field_passcount==0", "tif_dirwrite.c", 593, __PRETTY_FUNCTION__));
         TIFFGetField(tif,o->field_tag,&p);
         if (!TIFFWriteDirectoryTagShort(tif,&ndir,dir,o->field_tag,p))
          goto bad;
        }
        break;
       case TIFF_SETGET_UINT32:
        {
         uint32 p;
         ((o->field_type==TIFF_LONG) ? (void) (0) : __assert_fail ("o->field_type==TIFF_LONG", "tif_dirwrite.c", 602, __PRETTY_FUNCTION__));
         ((o->field_readcount==1) ? (void) (0) : __assert_fail ("o->field_readcount==1", "tif_dirwrite.c", 603, __PRETTY_FUNCTION__));
         ((o->field_passcount==0) ? (void) (0) : __assert_fail ("o->field_passcount==0", "tif_dirwrite.c", 604, __PRETTY_FUNCTION__));
         TIFFGetField(tif,o->field_tag,&p);
         if (!TIFFWriteDirectoryTagLong(tif,&ndir,dir,o->field_tag,p))
          goto bad;
        }
        break;
       case TIFF_SETGET_C32_UINT8:
        {
         uint32 pa;
         void* pb;
         ((o->field_type==TIFF_UNDEFINED) ? (void) (0) : __assert_fail ("o->field_type==TIFF_UNDEFINED", "tif_dirwrite.c", 614, __PRETTY_FUNCTION__));
         ((o->field_readcount==-3) ? (void) (0) : __assert_fail ("o->field_readcount==-3", "tif_dirwrite.c", 615, __PRETTY_FUNCTION__));
         ((o->field_passcount==1) ? (void) (0) : __assert_fail ("o->field_passcount==1", "tif_dirwrite.c", 616, __PRETTY_FUNCTION__));
         TIFFGetField(tif,o->field_tag,&pa,&pb);
         if (!TIFFWriteDirectoryTagUndefinedArray(tif,&ndir,dir,o->field_tag,pa,pb))
          goto bad;
        }
        break;
       default:
        ((0) ? (void) (0) : __assert_fail ("0", "tif_dirwrite.c", 623, __PRETTY_FUNCTION__));
        break;
      }
     }
    }
   }
  }
  for (m=0; m<(uint32)(tif->tif_dir.td_customValueCount); m++)
  {
   switch (tif->tif_dir.td_customValues[m].info->field_type)
   {
    case TIFF_ASCII:
     if (!TIFFWriteDirectoryTagAscii(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_UNDEFINED:
     if (!TIFFWriteDirectoryTagUndefinedArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_BYTE:
     if (!TIFFWriteDirectoryTagByteArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_SBYTE:
     if (!TIFFWriteDirectoryTagSbyteArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_SHORT:
     if (!TIFFWriteDirectoryTagShortArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_SSHORT:
     if (!TIFFWriteDirectoryTagSshortArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_LONG:
     if (!TIFFWriteDirectoryTagLongArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_SLONG:
     if (!TIFFWriteDirectoryTagSlongArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_LONG8:
     if (!TIFFWriteDirectoryTagLong8Array(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_SLONG8:
     if (!TIFFWriteDirectoryTagSlong8Array(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_RATIONAL:
     if (!TIFFWriteDirectoryTagRationalArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_SRATIONAL:
     if (!TIFFWriteDirectoryTagSrationalArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_FLOAT:
     if (!TIFFWriteDirectoryTagFloatArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_DOUBLE:
     if (!TIFFWriteDirectoryTagDoubleArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_IFD:
     if (!TIFFWriteDirectoryTagIfdArray(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    case TIFF_IFD8:
     if (!TIFFWriteDirectoryTagIfd8Array(tif,&ndir,dir,tif->tif_dir.td_customValues[m].info->field_tag,tif->tif_dir.td_customValues[m].count,tif->tif_dir.td_customValues[m].value))
      goto bad;
     break;
    default:
     ((0) ? (void) (0) : __assert_fail ("0", "tif_dirwrite.c", 699, __PRETTY_FUNCTION__));
     break;
   }
  }
  if (dir!=((void *)0))
   break;
  dir=_TIFFmalloc(ndir*sizeof(TIFFDirEntry));
  if (dir==((void *)0))
  {
   TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
   goto bad;
  }
  if (isimage)
  {
   if ((tif->tif_diroff==0)&&(!TIFFLinkDirectory(tif)))
    goto bad;
  }
  else
   tif->tif_diroff=(((*(tif)->tif_seekproc)((tif)->tif_clientdata,(0),(2)))+1)&(~1);
  if (pdiroff!=((void *)0))
   *pdiroff=tif->tif_diroff;
  if (!(tif->tif_flags&0x80000))
   dirsize=2+ndir*12+4;
  else
   dirsize=8+ndir*20+8;
  tif->tif_dataoff=tif->tif_diroff+dirsize;
  if (!(tif->tif_flags&0x80000))
   tif->tif_dataoff=(uint32)tif->tif_dataoff;
  if ((tif->tif_dataoff<tif->tif_diroff)||(tif->tif_dataoff<(uint64)dirsize))
  {
   TIFFErrorExt(tif->tif_clientdata,module,"Maximum TIFF file size exceeded");
   goto bad;
  }
  if (tif->tif_dataoff&1)
   tif->tif_dataoff++;
  if (isimage)
   tif->tif_curdir++;
 }
 if (isimage)
 {
  if ((((tif)->tif_dir.td_fieldsset[(49)/32]) & (((unsigned long)1L)<<((49)&0x1f)))&&(tif->tif_subifdoff==0))
  {
   uint32 na;
   TIFFDirEntry* nb;
   for (na=0, nb=dir; ; na++, nb++)
   {
    ((na<ndir) ? (void) (0) : __assert_fail ("na<ndir", "tif_dirwrite.c", 745, __PRETTY_FUNCTION__));
    if (nb->tdir_tag==330)
     break;
   }
   if (!(tif->tif_flags&0x80000))
    tif->tif_subifdoff=tif->tif_diroff+2+na*12+8;
   else
    tif->tif_subifdoff=tif->tif_diroff+8+na*20+12;
  }
 }
 dirmem=_TIFFmalloc(dirsize);
 if (dirmem==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  goto bad;
 }
 if (!(tif->tif_flags&0x80000))
 {
  uint8* n;
  TIFFDirEntry* o;
  n=dirmem;
  *(uint16*)n=ndir;
  if (tif->tif_flags&0x00080)
   TIFFSwabShort((uint16*)n);
  n+=2;
  o=dir;
  for (m=0; m<ndir; m++)
  {
   *(uint16*)n=o->tdir_tag;
   if (tif->tif_flags&0x00080)
    TIFFSwabShort((uint16*)n);
   n+=2;
   *(uint16*)n=o->tdir_type;
   if (tif->tif_flags&0x00080)
    TIFFSwabShort((uint16*)n);
   n+=2;
   *(uint32*)n=(uint32)o->tdir_count;
   if (tif->tif_flags&0x00080)
    TIFFSwabLong((uint32*)n);
   n+=4;
   _TIFFmemcpy(n,&o->tdir_offset,4);
   n+=4;
   o++;
  }
  *(uint32*)n = (uint32)tif->tif_nextdiroff;
 }
 else
 {
  uint8* n;
  TIFFDirEntry* o;
  n=dirmem;
  *(uint64*)n=ndir;
  if (tif->tif_flags&0x00080)
   TIFFSwabLong8((uint64*)n);
  n+=8;
  o=dir;
  for (m=0; m<ndir; m++)
  {
   *(uint16*)n=o->tdir_tag;
   if (tif->tif_flags&0x00080)
    TIFFSwabShort((uint16*)n);
   n+=2;
   *(uint16*)n=o->tdir_type;
   if (tif->tif_flags&0x00080)
    TIFFSwabShort((uint16*)n);
   n+=2;
   *(uint64*)n=o->tdir_count;
   if (tif->tif_flags&0x00080)
    TIFFSwabLong8((uint64*)n);
   n+=8;
   _TIFFmemcpy(n,&o->tdir_offset,8);
   n+=8;
   o++;
  }
  *(uint64*)n = tif->tif_nextdiroff;
 }
 _TIFFfree(dir);
 dir=((void *)0);
 if (!(((*((tif))->tif_seekproc)(((tif))->tif_clientdata,((tif->tif_diroff)),(0)))==(tif->tif_diroff)))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"IO error writing directory");
  goto bad;
 }
 if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((dirmem)),(((tmsize_t)dirsize))))==((tmsize_t)dirsize)))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"IO error writing directory");
  goto bad;
 }
 _TIFFfree(dirmem);
 if (imagedone)
 {
  TIFFFreeDirectory(tif);
  tif->tif_flags&=~0x00008;
  (*tif->tif_cleanup)(tif);




  TIFFCreateDirectory(tif);
 }
 return(1);
bad:
 if (dir!=((void *)0))
  _TIFFfree(dir);
 if (dirmem!=((void *)0))
  _TIFFfree(dirmem);
 return(0);
}

static int
TIFFWriteDirectoryTagSampleformatPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value)
{
 switch (tif->tif_dir.td_sampleformat)
 {
  case 3:
   if (tif->tif_dir.td_bitspersample<=32)
    return(TIFFWriteDirectoryTagFloatPerSample(tif,ndir,dir,tag,(float)value));
   else
    return(TIFFWriteDirectoryTagDoublePerSample(tif,ndir,dir,tag,value));
  case 2:
   if (tif->tif_dir.td_bitspersample<=8)
    return(TIFFWriteDirectoryTagSbytePerSample(tif,ndir,dir,tag,(int8)value));
   else if (tif->tif_dir.td_bitspersample<=16)
    return(TIFFWriteDirectoryTagSshortPerSample(tif,ndir,dir,tag,(int16)value));
   else
    return(TIFFWriteDirectoryTagSlongPerSample(tif,ndir,dir,tag,(int32)value));
  case 1:
   if (tif->tif_dir.td_bitspersample<=8)
    return(TIFFWriteDirectoryTagBytePerSample(tif,ndir,dir,tag,(uint8)value));
   else if (tif->tif_dir.td_bitspersample<=16)
    return(TIFFWriteDirectoryTagShortPerSample(tif,ndir,dir,tag,(uint16)value));
   else
    return(TIFFWriteDirectoryTagLongPerSample(tif,ndir,dir,tag,(uint32)value));
  default:
   return(1);
 }
}

static int
TIFFWriteDirectoryTagAscii(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, char* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedAscii(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagUndefinedArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint8* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedUndefinedArray(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagByte(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint8 value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedByte(tif,ndir,dir,tag,value));
}

static int
TIFFWriteDirectoryTagByteArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint8* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedByteArray(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagBytePerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint8 value)
{
 static const char module[] = "TIFFWriteDirectoryTagBytePerSample";
 uint8* m;
 uint8* na;
 uint16 nb;
 int o;
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 m=_TIFFmalloc(tif->tif_dir.td_samplesperpixel*sizeof(uint8));
 if (m==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 for (na=m, nb=0; nb<tif->tif_dir.td_samplesperpixel; na++, nb++)
  *na=value;
 o=TIFFWriteDirectoryTagCheckedByteArray(tif,ndir,dir,tag,tif->tif_dir.td_samplesperpixel,m);
 _TIFFfree(m);
 return(o);
}

static int
TIFFWriteDirectoryTagSbyte(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int8 value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedSbyte(tif,ndir,dir,tag,value));
}

static int
TIFFWriteDirectoryTagSbyteArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int8* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedSbyteArray(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagSbytePerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int8 value)
{
 static const char module[] = "TIFFWriteDirectoryTagSbytePerSample";
 int8* m;
 int8* na;
 uint16 nb;
 int o;
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 m=_TIFFmalloc(tif->tif_dir.td_samplesperpixel*sizeof(int8));
 if (m==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 for (na=m, nb=0; nb<tif->tif_dir.td_samplesperpixel; na++, nb++)
  *na=value;
 o=TIFFWriteDirectoryTagCheckedSbyteArray(tif,ndir,dir,tag,tif->tif_dir.td_samplesperpixel,m);
 _TIFFfree(m);
 return(o);
}

static int
TIFFWriteDirectoryTagShort(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint16 value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedShort(tif,ndir,dir,tag,value));
}

static int
TIFFWriteDirectoryTagShortArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint16* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedShortArray(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagShortPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint16 value)
{
 static const char module[] = "TIFFWriteDirectoryTagShortPerSample";
 uint16* m;
 uint16* na;
 uint16 nb;
 int o;
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 m=_TIFFmalloc(tif->tif_dir.td_samplesperpixel*sizeof(uint16));
 if (m==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 for (na=m, nb=0; nb<tif->tif_dir.td_samplesperpixel; na++, nb++)
  *na=value;
 o=TIFFWriteDirectoryTagCheckedShortArray(tif,ndir,dir,tag,tif->tif_dir.td_samplesperpixel,m);
 _TIFFfree(m);
 return(o);
}

static int
TIFFWriteDirectoryTagSshort(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int16 value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedSshort(tif,ndir,dir,tag,value));
}

static int
TIFFWriteDirectoryTagSshortArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int16* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedSshortArray(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagSshortPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int16 value)
{
 static const char module[] = "TIFFWriteDirectoryTagSshortPerSample";
 int16* m;
 int16* na;
 uint16 nb;
 int o;
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 m=_TIFFmalloc(tif->tif_dir.td_samplesperpixel*sizeof(int16));
 if (m==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 for (na=m, nb=0; nb<tif->tif_dir.td_samplesperpixel; na++, nb++)
  *na=value;
 o=TIFFWriteDirectoryTagCheckedSshortArray(tif,ndir,dir,tag,tif->tif_dir.td_samplesperpixel,m);
 _TIFFfree(m);
 return(o);
}

static int
TIFFWriteDirectoryTagLong(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedLong(tif,ndir,dir,tag,value));
}

static int
TIFFWriteDirectoryTagLongArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint32* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedLongArray(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagLongPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 value)
{
 static const char module[] = "TIFFWriteDirectoryTagLongPerSample";
 uint32* m;
 uint32* na;
 uint16 nb;
 int o;
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 m=_TIFFmalloc(tif->tif_dir.td_samplesperpixel*sizeof(uint32));
 if (m==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 for (na=m, nb=0; nb<tif->tif_dir.td_samplesperpixel; na++, nb++)
  *na=value;
 o=TIFFWriteDirectoryTagCheckedLongArray(tif,ndir,dir,tag,tif->tif_dir.td_samplesperpixel,m);
 _TIFFfree(m);
 return(o);
}

static int
TIFFWriteDirectoryTagSlong(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int32 value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedSlong(tif,ndir,dir,tag,value));
}

static int
TIFFWriteDirectoryTagSlongArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int32* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedSlongArray(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagSlongPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int32 value)
{
 static const char module[] = "TIFFWriteDirectoryTagSlongPerSample";
 int32* m;
 int32* na;
 uint16 nb;
 int o;
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 m=_TIFFmalloc(tif->tif_dir.td_samplesperpixel*sizeof(int32));
 if (m==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 for (na=m, nb=0; nb<tif->tif_dir.td_samplesperpixel; na++, nb++)
  *na=value;
 o=TIFFWriteDirectoryTagCheckedSlongArray(tif,ndir,dir,tag,tif->tif_dir.td_samplesperpixel,m);
 _TIFFfree(m);
 return(o);
}

static int
TIFFWriteDirectoryTagLong8(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint64 value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedLong8(tif,ndir,dir,tag,value));
}

static int
TIFFWriteDirectoryTagLong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedLong8Array(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagSlong8(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int64 value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedSlong8(tif,ndir,dir,tag,value));
}

static int
TIFFWriteDirectoryTagSlong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int64* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedSlong8Array(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagRational(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedRational(tif,ndir,dir,tag,value));
}

static int
TIFFWriteDirectoryTagRationalArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedRationalArray(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagSrationalArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedSrationalArray(tif,ndir,dir,tag,count,value));
}

static int TIFFWriteDirectoryTagFloat(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, float value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedFloat(tif,ndir,dir,tag,value));
}

static int TIFFWriteDirectoryTagFloatArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedFloatArray(tif,ndir,dir,tag,count,value));
}

static int TIFFWriteDirectoryTagFloatPerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, float value)
{
 static const char module[] = "TIFFWriteDirectoryTagFloatPerSample";
 float* m;
 float* na;
 uint16 nb;
 int o;
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 m=_TIFFmalloc(tif->tif_dir.td_samplesperpixel*sizeof(float));
 if (m==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 for (na=m, nb=0; nb<tif->tif_dir.td_samplesperpixel; na++, nb++)
  *na=value;
 o=TIFFWriteDirectoryTagCheckedFloatArray(tif,ndir,dir,tag,tif->tif_dir.td_samplesperpixel,m);
 _TIFFfree(m);
 return(o);
}

static int TIFFWriteDirectoryTagDouble(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedDouble(tif,ndir,dir,tag,value));
}

static int TIFFWriteDirectoryTagDoubleArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, double* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedDoubleArray(tif,ndir,dir,tag,count,value));
}

static int TIFFWriteDirectoryTagDoublePerSample(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value)
{
 static const char module[] = "TIFFWriteDirectoryTagDoublePerSample";
 double* m;
 double* na;
 uint16 nb;
 int o;
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 m=_TIFFmalloc(tif->tif_dir.td_samplesperpixel*sizeof(double));
 if (m==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 for (na=m, nb=0; nb<tif->tif_dir.td_samplesperpixel; na++, nb++)
  *na=value;
 o=TIFFWriteDirectoryTagCheckedDoubleArray(tif,ndir,dir,tag,tif->tif_dir.td_samplesperpixel,m);
 _TIFFfree(m);
 return(o);
}

static int
TIFFWriteDirectoryTagIfdArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint32* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedIfdArray(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagIfd8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 return(TIFFWriteDirectoryTagCheckedIfd8Array(tif,ndir,dir,tag,count,value));
}

static int
TIFFWriteDirectoryTagShortLong(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 value)
{
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 if (value<=0xFFFF)
  return(TIFFWriteDirectoryTagCheckedShort(tif,ndir,dir,tag,(uint16)value));
 else
  return(TIFFWriteDirectoryTagCheckedLong(tif,ndir,dir,tag,value));
}
# 1403 "tif_dirwrite.c"
static int
TIFFWriteDirectoryTagLongLong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value)
{
    static const char module[] = "TIFFWriteDirectoryTagLongLong8Array";
    uint64* ma;
    uint32 mb;
    uint32* p;
    uint32* q;
    int o;


    if (dir==((void *)0))
    {
        (*ndir)++;
        return(1);
    }


    if( tif->tif_flags&0x80000 )
        return TIFFWriteDirectoryTagCheckedLong8Array(tif,ndir,dir,
                                                      tag,count,value);






    p = _TIFFmalloc(count*sizeof(uint32));
    if (p==((void *)0))
    {
        TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
        return(0);
    }

    for (q=p, ma=value, mb=0; mb<count; ma++, mb++, q++)
    {
        if (*ma>0xFFFFFFFF)
        {
            TIFFErrorExt(tif->tif_clientdata,module,
                         "Attempt to write value larger than 0xFFFFFFFF in Classic TIFF file.");
            _TIFFfree(p);
            return(0);
        }
        *q= (uint32)(*ma);
    }

    o=TIFFWriteDirectoryTagCheckedLongArray(tif,ndir,dir,tag,count,p);
    _TIFFfree(p);

    return(o);
}

static int
TIFFWriteDirectoryTagShortLongLong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value)
{
 static const char module[] = "TIFFWriteDirectoryTagShortLongLong8Array";
 uint64* ma;
 uint32 mb;
 uint8 n;
 int o;
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 n=0;
 for (ma=value, mb=0; mb<count; ma++, mb++)
 {
  if ((n==0)&&(*ma>0xFFFF))
   n=1;
  if ((n==1)&&(*ma>0xFFFFFFFF))
  {
   n=2;
   break;
  }
 }
 if (n==0)
 {
  uint16* p;
  uint16* q;
  p=_TIFFmalloc(count*sizeof(uint16));
  if (p==((void *)0))
  {
   TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
   return(0);
  }
  for (ma=value, mb=0, q=p; mb<count; ma++, mb++, q++)
   *q=(uint16)(*ma);
  o=TIFFWriteDirectoryTagCheckedShortArray(tif,ndir,dir,tag,count,p);
  _TIFFfree(p);
 }
 else if (n==1)
 {
  uint32* p;
  uint32* q;
  p=_TIFFmalloc(count*sizeof(uint32));
  if (p==((void *)0))
  {
   TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
   return(0);
  }
  for (ma=value, mb=0, q=p; mb<count; ma++, mb++, q++)
   *q=(uint32)(*ma);
  o=TIFFWriteDirectoryTagCheckedLongArray(tif,ndir,dir,tag,count,p);
  _TIFFfree(p);
 }
 else
 {
  ((n==2) ? (void) (0) : __assert_fail ("n==2", "tif_dirwrite.c", 1511, __PRETTY_FUNCTION__));
  o=TIFFWriteDirectoryTagCheckedLong8Array(tif,ndir,dir,tag,count,value);
 }
 return(o);
}

static int
TIFFWriteDirectoryTagColormap(TIFF* tif, uint32* ndir, TIFFDirEntry* dir)
{
 static const char module[] = "TIFFWriteDirectoryTagColormap";
 uint32 m;
 uint16* n;
 int o;
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 m=(1<<tif->tif_dir.td_bitspersample);
 n=_TIFFmalloc(3*m*sizeof(uint16));
 if (n==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 _TIFFmemcpy(&n[0],tif->tif_dir.td_colormap[0],m*sizeof(uint16));
 _TIFFmemcpy(&n[m],tif->tif_dir.td_colormap[1],m*sizeof(uint16));
 _TIFFmemcpy(&n[2*m],tif->tif_dir.td_colormap[2],m*sizeof(uint16));
 o=TIFFWriteDirectoryTagCheckedShortArray(tif,ndir,dir,320,3*m,n);
 _TIFFfree(n);
 return(o);
}

static int
TIFFWriteDirectoryTagTransferfunction(TIFF* tif, uint32* ndir, TIFFDirEntry* dir)
{
 static const char module[] = "TIFFWriteDirectoryTagTransferfunction";
 uint32 m;
 uint16 n;
 uint16* o;
 int p;
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 m=(1<<tif->tif_dir.td_bitspersample);
 n=tif->tif_dir.td_samplesperpixel-tif->tif_dir.td_extrasamples;






 if (n>3)
  n=3;
 if (n==3)
 {
  if (!_TIFFmemcmp(tif->tif_dir.td_transferfunction[0],tif->tif_dir.td_transferfunction[2],m*sizeof(uint16)))
   n=2;
 }
 if (n==2)
 {
  if (!_TIFFmemcmp(tif->tif_dir.td_transferfunction[0],tif->tif_dir.td_transferfunction[1],m*sizeof(uint16)))
   n=1;
 }
 if (n==0)
  n=1;
 o=_TIFFmalloc(n*m*sizeof(uint16));
 if (o==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 _TIFFmemcpy(&o[0],tif->tif_dir.td_transferfunction[0],m*sizeof(uint16));
 if (n>1)
  _TIFFmemcpy(&o[m],tif->tif_dir.td_transferfunction[1],m*sizeof(uint16));
 if (n>2)
  _TIFFmemcpy(&o[2*m],tif->tif_dir.td_transferfunction[2],m*sizeof(uint16));
 p=TIFFWriteDirectoryTagCheckedShortArray(tif,ndir,dir,301,n*m,o);
 _TIFFfree(o);
 return(p);
}

static int
TIFFWriteDirectoryTagSubifd(TIFF* tif, uint32* ndir, TIFFDirEntry* dir)
{
 static const char module[] = "TIFFWriteDirectoryTagSubifd";
 uint64 m;
 int n;
 if (tif->tif_dir.td_nsubifd==0)
  return(1);
 if (dir==((void *)0))
 {
  (*ndir)++;
  return(1);
 }
 m=tif->tif_dataoff;
 if (!(tif->tif_flags&0x80000))
 {
  uint32* o;
  uint64* pa;
  uint32* pb;
  uint16 p;
  o=_TIFFmalloc(tif->tif_dir.td_nsubifd*sizeof(uint32));
  if (o==((void *)0))
  {
   TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
   return(0);
  }
  pa=tif->tif_dir.td_subifd;
  pb=o;
  for (p=0; p<tif->tif_dir.td_nsubifd; p++)
  {
   ((*pa<=0xFFFFFFFFUL) ? (void) (0) : __assert_fail ("*pa<=0xFFFFFFFFUL", "tif_dirwrite.c", 1625, __PRETTY_FUNCTION__));
   *pb++=(uint32)(*pa++);
  }
  n=TIFFWriteDirectoryTagCheckedIfdArray(tif,ndir,dir,330,tif->tif_dir.td_nsubifd,o);
  _TIFFfree(o);
 }
 else
  n=TIFFWriteDirectoryTagCheckedIfd8Array(tif,ndir,dir,330,tif->tif_dir.td_nsubifd,tif->tif_dir.td_subifd);
 if (!n)
  return(0);
# 1643 "tif_dirwrite.c"
 tif->tif_flags|=0x02000;
 tif->tif_nsubifd=tif->tif_dir.td_nsubifd;
 if (tif->tif_dir.td_nsubifd==1)
  tif->tif_subifdoff=0;
 else
  tif->tif_subifdoff=m;
 return(1);
}

static int
TIFFWriteDirectoryTagCheckedAscii(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, char* value)
{
 ((sizeof(char)==1) ? (void) (0) : __assert_fail ("sizeof(char)==1", "tif_dirwrite.c", 1655, __PRETTY_FUNCTION__));
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_ASCII,count,count,value));
}

static int
TIFFWriteDirectoryTagCheckedUndefinedArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint8* value)
{
 ((sizeof(uint8)==1) ? (void) (0) : __assert_fail ("sizeof(uint8)==1", "tif_dirwrite.c", 1662, __PRETTY_FUNCTION__));
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_UNDEFINED,count,count,value));
}

static int
TIFFWriteDirectoryTagCheckedByte(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint8 value)
{
 ((sizeof(uint8)==1) ? (void) (0) : __assert_fail ("sizeof(uint8)==1", "tif_dirwrite.c", 1669, __PRETTY_FUNCTION__));
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_BYTE,1,1,&value));
}

static int
TIFFWriteDirectoryTagCheckedByteArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint8* value)
{
 ((sizeof(uint8)==1) ? (void) (0) : __assert_fail ("sizeof(uint8)==1", "tif_dirwrite.c", 1676, __PRETTY_FUNCTION__));
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_BYTE,count,count,value));
}

static int
TIFFWriteDirectoryTagCheckedSbyte(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int8 value)
{
 ((sizeof(int8)==1) ? (void) (0) : __assert_fail ("sizeof(int8)==1", "tif_dirwrite.c", 1683, __PRETTY_FUNCTION__));
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_SBYTE,1,1,&value));
}

static int
TIFFWriteDirectoryTagCheckedSbyteArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int8* value)
{
 ((sizeof(int8)==1) ? (void) (0) : __assert_fail ("sizeof(int8)==1", "tif_dirwrite.c", 1690, __PRETTY_FUNCTION__));
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_SBYTE,count,count,value));
}

static int
TIFFWriteDirectoryTagCheckedShort(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint16 value)
{
 uint16 m;
 ((sizeof(uint16)==2) ? (void) (0) : __assert_fail ("sizeof(uint16)==2", "tif_dirwrite.c", 1698, __PRETTY_FUNCTION__));
 m=value;
 if (tif->tif_flags&0x00080)
  TIFFSwabShort(&m);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_SHORT,1,2,&m));
}

static int
TIFFWriteDirectoryTagCheckedShortArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint16* value)
{
 ((count<0x80000000) ? (void) (0) : __assert_fail ("count<0x80000000", "tif_dirwrite.c", 1708, __PRETTY_FUNCTION__));
 ((sizeof(uint16)==2) ? (void) (0) : __assert_fail ("sizeof(uint16)==2", "tif_dirwrite.c", 1709, __PRETTY_FUNCTION__));
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfShort(value,count);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_SHORT,count,count*2,value));
}

static int
TIFFWriteDirectoryTagCheckedSshort(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int16 value)
{
 int16 m;
 ((sizeof(int16)==2) ? (void) (0) : __assert_fail ("sizeof(int16)==2", "tif_dirwrite.c", 1719, __PRETTY_FUNCTION__));
 m=value;
 if (tif->tif_flags&0x00080)
  TIFFSwabShort((uint16*)(&m));
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_SSHORT,1,2,&m));
}

static int
TIFFWriteDirectoryTagCheckedSshortArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int16* value)
{
 ((count<0x80000000) ? (void) (0) : __assert_fail ("count<0x80000000", "tif_dirwrite.c", 1729, __PRETTY_FUNCTION__));
 ((sizeof(int16)==2) ? (void) (0) : __assert_fail ("sizeof(int16)==2", "tif_dirwrite.c", 1730, __PRETTY_FUNCTION__));
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfShort((uint16*)value,count);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_SSHORT,count,count*2,value));
}

static int
TIFFWriteDirectoryTagCheckedLong(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 value)
{
 uint32 m;
 ((sizeof(uint32)==4) ? (void) (0) : __assert_fail ("sizeof(uint32)==4", "tif_dirwrite.c", 1740, __PRETTY_FUNCTION__));
 m=value;
 if (tif->tif_flags&0x00080)
  TIFFSwabLong(&m);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_LONG,1,4,&m));
}

static int
TIFFWriteDirectoryTagCheckedLongArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint32* value)
{
 ((count<0x40000000) ? (void) (0) : __assert_fail ("count<0x40000000", "tif_dirwrite.c", 1750, __PRETTY_FUNCTION__));
 ((sizeof(uint32)==4) ? (void) (0) : __assert_fail ("sizeof(uint32)==4", "tif_dirwrite.c", 1751, __PRETTY_FUNCTION__));
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfLong(value,count);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_LONG,count,count*4,value));
}

static int
TIFFWriteDirectoryTagCheckedSlong(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int32 value)
{
 int32 m;
 ((sizeof(int32)==4) ? (void) (0) : __assert_fail ("sizeof(int32)==4", "tif_dirwrite.c", 1761, __PRETTY_FUNCTION__));
 m=value;
 if (tif->tif_flags&0x00080)
  TIFFSwabLong((uint32*)(&m));
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_SLONG,1,4,&m));
}

static int
TIFFWriteDirectoryTagCheckedSlongArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int32* value)
{
 ((count<0x40000000) ? (void) (0) : __assert_fail ("count<0x40000000", "tif_dirwrite.c", 1771, __PRETTY_FUNCTION__));
 ((sizeof(int32)==4) ? (void) (0) : __assert_fail ("sizeof(int32)==4", "tif_dirwrite.c", 1772, __PRETTY_FUNCTION__));
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfLong((uint32*)value,count);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_SLONG,count,count*4,value));
}

static int
TIFFWriteDirectoryTagCheckedLong8(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint64 value)
{
 uint64 m;
 ((sizeof(uint64)==8) ? (void) (0) : __assert_fail ("sizeof(uint64)==8", "tif_dirwrite.c", 1782, __PRETTY_FUNCTION__));
 ((tif->tif_flags&0x80000) ? (void) (0) : __assert_fail ("tif->tif_flags&0x80000", "tif_dirwrite.c", 1783, __PRETTY_FUNCTION__));
 m=value;
 if (tif->tif_flags&0x00080)
  TIFFSwabLong8(&m);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_LONG8,1,8,&m));
}

static int
TIFFWriteDirectoryTagCheckedLong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value)
{
 ((count<0x20000000) ? (void) (0) : __assert_fail ("count<0x20000000", "tif_dirwrite.c", 1793, __PRETTY_FUNCTION__));
 ((sizeof(uint64)==8) ? (void) (0) : __assert_fail ("sizeof(uint64)==8", "tif_dirwrite.c", 1794, __PRETTY_FUNCTION__));
 ((tif->tif_flags&0x80000) ? (void) (0) : __assert_fail ("tif->tif_flags&0x80000", "tif_dirwrite.c", 1795, __PRETTY_FUNCTION__));
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfLong8(value,count);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_LONG8,count,count*8,value));
}

static int
TIFFWriteDirectoryTagCheckedSlong8(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, int64 value)
{
 int64 m;
 ((sizeof(int64)==8) ? (void) (0) : __assert_fail ("sizeof(int64)==8", "tif_dirwrite.c", 1805, __PRETTY_FUNCTION__));
 ((tif->tif_flags&0x80000) ? (void) (0) : __assert_fail ("tif->tif_flags&0x80000", "tif_dirwrite.c", 1806, __PRETTY_FUNCTION__));
 m=value;
 if (tif->tif_flags&0x00080)
  TIFFSwabLong8((uint64*)(&m));
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_SLONG8,1,8,&m));
}

static int
TIFFWriteDirectoryTagCheckedSlong8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, int64* value)
{
 ((count<0x20000000) ? (void) (0) : __assert_fail ("count<0x20000000", "tif_dirwrite.c", 1816, __PRETTY_FUNCTION__));
 ((sizeof(int64)==8) ? (void) (0) : __assert_fail ("sizeof(int64)==8", "tif_dirwrite.c", 1817, __PRETTY_FUNCTION__));
 ((tif->tif_flags&0x80000) ? (void) (0) : __assert_fail ("tif->tif_flags&0x80000", "tif_dirwrite.c", 1818, __PRETTY_FUNCTION__));
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfLong8((uint64*)value,count);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_SLONG8,count,count*8,value));
}

static int
TIFFWriteDirectoryTagCheckedRational(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value)
{
 uint32 m[2];
 ((value>=0.0) ? (void) (0) : __assert_fail ("value>=0.0", "tif_dirwrite.c", 1828, __PRETTY_FUNCTION__));
 ((sizeof(uint32)==4) ? (void) (0) : __assert_fail ("sizeof(uint32)==4", "tif_dirwrite.c", 1829, __PRETTY_FUNCTION__));
 if (value<=0.0)
 {
  m[0]=0;
  m[1]=1;
 }
 else if (value==(double)(uint32)value)
 {
  m[0]=(uint32)value;
  m[1]=1;
 }
 else if (value<1.0)
 {
  m[0]=(uint32)(value*0xFFFFFFFF);
  m[1]=0xFFFFFFFF;
 }
 else
 {
  m[0]=0xFFFFFFFF;
  m[1]=(uint32)(0xFFFFFFFF/value);
 }
 if (tif->tif_flags&0x00080)
 {
  TIFFSwabLong(&m[0]);
  TIFFSwabLong(&m[1]);
 }
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_RATIONAL,1,8,&m[0]));
}

static int
TIFFWriteDirectoryTagCheckedRationalArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value)
{
 static const char module[] = "TIFFWriteDirectoryTagCheckedRationalArray";
 uint32* m;
 float* na;
 uint32* nb;
 uint32 nc;
 int o;
 ((sizeof(uint32)==4) ? (void) (0) : __assert_fail ("sizeof(uint32)==4", "tif_dirwrite.c", 1867, __PRETTY_FUNCTION__));
 m=_TIFFmalloc(count*2*sizeof(uint32));
 if (m==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 for (na=value, nb=m, nc=0; nc<count; na++, nb+=2, nc++)
 {
  if (*na<=0.0)
  {
   nb[0]=0;
   nb[1]=1;
  }
  else if (*na==(float)(uint32)(*na))
  {
   nb[0]=(uint32)(*na);
   nb[1]=1;
  }
  else if (*na<1.0)
  {
   nb[0]=(uint32)((*na)*0xFFFFFFFF);
   nb[1]=0xFFFFFFFF;
  }
  else
  {
   nb[0]=0xFFFFFFFF;
   nb[1]=(uint32)(0xFFFFFFFF/(*na));
  }
 }
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfLong(m,count*2);
 o=TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_RATIONAL,count,count*8,&m[0]);
 _TIFFfree(m);
 return(o);
}

static int
TIFFWriteDirectoryTagCheckedSrationalArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value)
{
 static const char module[] = "TIFFWriteDirectoryTagCheckedSrationalArray";
 int32* m;
 float* na;
 int32* nb;
 uint32 nc;
 int o;
 ((sizeof(int32)==4) ? (void) (0) : __assert_fail ("sizeof(int32)==4", "tif_dirwrite.c", 1913, __PRETTY_FUNCTION__));
 m=_TIFFmalloc(count*2*sizeof(int32));
 if (m==((void *)0))
 {
  TIFFErrorExt(tif->tif_clientdata,module,"Out of memory");
  return(0);
 }
 for (na=value, nb=m, nc=0; nc<count; na++, nb+=2, nc++)
 {
  if (*na<0.0)
  {
   if (*na==(int32)(*na))
   {
    nb[0]=(int32)(*na);
    nb[1]=1;
   }
   else if (*na>-1.0)
   {
    nb[0]=-(int32)((-*na)*0x7FFFFFFF);
    nb[1]=0x7FFFFFFF;
   }
   else
   {
    nb[0]=-0x7FFFFFFF;
    nb[1]=(int32)(0x7FFFFFFF/(-*na));
   }
  }
  else
  {
   if (*na==(int32)(*na))
   {
    nb[0]=(int32)(*na);
    nb[1]=1;
   }
   else if (*na<1.0)
   {
    nb[0]=(int32)((*na)*0x7FFFFFFF);
    nb[1]=0x7FFFFFFF;
   }
   else
   {
    nb[0]=0x7FFFFFFF;
    nb[1]=(int32)(0x7FFFFFFF/(*na));
   }
  }
 }
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfLong((uint32*)m,count*2);
 o=TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_SRATIONAL,count,count*8,&m[0]);
 _TIFFfree(m);
 return(o);
}

static int
TIFFWriteDirectoryTagCheckedFloat(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, float value)
{
 float m;
 ((sizeof(float)==4) ? (void) (0) : __assert_fail ("sizeof(float)==4", "tif_dirwrite.c", 1970, __PRETTY_FUNCTION__));
 m=value;
 ;
 if (tif->tif_flags&0x00080)
  TIFFSwabFloat(&m);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_FLOAT,1,4,&m));
}

static int
TIFFWriteDirectoryTagCheckedFloatArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, float* value)
{
 ((count<0x40000000) ? (void) (0) : __assert_fail ("count<0x40000000", "tif_dirwrite.c", 1981, __PRETTY_FUNCTION__));
 ((sizeof(float)==4) ? (void) (0) : __assert_fail ("sizeof(float)==4", "tif_dirwrite.c", 1982, __PRETTY_FUNCTION__));
 ;
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfFloat(value,count);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_FLOAT,count,count*4,value));
}

static int
TIFFWriteDirectoryTagCheckedDouble(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, double value)
{
 double m;
 ((sizeof(double)==8) ? (void) (0) : __assert_fail ("sizeof(double)==8", "tif_dirwrite.c", 1993, __PRETTY_FUNCTION__));
 m=value;
 ;
 if (tif->tif_flags&0x00080)
  TIFFSwabDouble(&m);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_DOUBLE,1,8,&m));
}

static int
TIFFWriteDirectoryTagCheckedDoubleArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, double* value)
{
 ((count<0x20000000) ? (void) (0) : __assert_fail ("count<0x20000000", "tif_dirwrite.c", 2004, __PRETTY_FUNCTION__));
 ((sizeof(double)==8) ? (void) (0) : __assert_fail ("sizeof(double)==8", "tif_dirwrite.c", 2005, __PRETTY_FUNCTION__));
 ;
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfDouble(value,count);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_DOUBLE,count,count*8,value));
}

static int
TIFFWriteDirectoryTagCheckedIfdArray(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint32* value)
{
 ((count<0x40000000) ? (void) (0) : __assert_fail ("count<0x40000000", "tif_dirwrite.c", 2015, __PRETTY_FUNCTION__));
 ((sizeof(uint32)==4) ? (void) (0) : __assert_fail ("sizeof(uint32)==4", "tif_dirwrite.c", 2016, __PRETTY_FUNCTION__));
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfLong(value,count);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_IFD,count,count*4,value));
}

static int
TIFFWriteDirectoryTagCheckedIfd8Array(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint32 count, uint64* value)
{
 ((count<0x20000000) ? (void) (0) : __assert_fail ("count<0x20000000", "tif_dirwrite.c", 2025, __PRETTY_FUNCTION__));
 ((sizeof(uint64)==8) ? (void) (0) : __assert_fail ("sizeof(uint64)==8", "tif_dirwrite.c", 2026, __PRETTY_FUNCTION__));
 ((tif->tif_flags&0x80000) ? (void) (0) : __assert_fail ("tif->tif_flags&0x80000", "tif_dirwrite.c", 2027, __PRETTY_FUNCTION__));
 if (tif->tif_flags&0x00080)
  TIFFSwabArrayOfLong8(value,count);
 return(TIFFWriteDirectoryTagData(tif,ndir,dir,tag,TIFF_IFD8,count,count*8,value));
}

static int
TIFFWriteDirectoryTagData(TIFF* tif, uint32* ndir, TIFFDirEntry* dir, uint16 tag, uint16 datatype, uint32 count, uint32 datalength, void* data)
{
 static const char module[] = "TIFFWriteDirectoryTagData";
 uint32 m;
 m=0;
 while (m<(*ndir))
 {
  ((dir[m].tdir_tag!=tag) ? (void) (0) : __assert_fail ("dir[m].tdir_tag!=tag", "tif_dirwrite.c", 2041, __PRETTY_FUNCTION__));
  if (dir[m].tdir_tag>tag)
   break;
  m++;
 }
 if (m<(*ndir))
 {
  uint32 n;
  for (n=*ndir; n>m; n--)
   dir[n]=dir[n-1];
 }
 dir[m].tdir_tag=tag;
 dir[m].tdir_type=datatype;
 dir[m].tdir_count=count;
 dir[m].tdir_offset=0;
 if (datalength<=((tif->tif_flags&0x80000)?0x8U:0x4U))
  _TIFFmemcpy(&dir[m].tdir_offset,data,datalength);
 else
 {
  uint64 na,nb;
  na=tif->tif_dataoff;
  nb=na+datalength;
  if (!(tif->tif_flags&0x80000))
   nb=(uint32)nb;
  if ((nb<na)||(nb<datalength))
  {
   TIFFErrorExt(tif->tif_clientdata,module,"Maximum TIFF file size exceeded");
   return(0);
  }
  if (!(((*((tif))->tif_seekproc)(((tif))->tif_clientdata,((na)),(0)))==(na)))
  {
   TIFFErrorExt(tif->tif_clientdata,module,"IO error writing tag data");
   return(0);
  }
  ((datalength<0x80000000UL) ? (void) (0) : __assert_fail ("datalength<0x80000000UL", "tif_dirwrite.c", 2075, __PRETTY_FUNCTION__));
  if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((data)),(((tmsize_t)datalength))))==((tmsize_t)datalength)))
  {
   TIFFErrorExt(tif->tif_clientdata,module,"IO error writing tag data");
   return(0);
  }
  tif->tif_dataoff=nb;
  if (tif->tif_dataoff&1)
   tif->tif_dataoff++;
  if (!(tif->tif_flags&0x80000))
  {
   uint32 o;
   o=(uint32)na;
   if (tif->tif_flags&0x00080)
    TIFFSwabLong(&o);
   _TIFFmemcpy(&dir[m].tdir_offset,&o,4);
  }
  else
  {
   dir[m].tdir_offset=na;
   if (tif->tif_flags&0x00080)
    TIFFSwabLong8(&dir[m].tdir_offset);
  }
 }
 (*ndir)++;
 return(1);
}




static int
TIFFLinkDirectory(TIFF* tif)
{
 static const char module[] = "TIFFLinkDirectory";

 tif->tif_diroff = (((*(tif)->tif_seekproc)((tif)->tif_clientdata,(0),(2)))+1) &~ 1;




 if (tif->tif_flags & 0x02000)
 {
  if (!(tif->tif_flags&0x80000))
  {
   uint32 m;
   m = (uint32)tif->tif_diroff;
   if (tif->tif_flags & 0x00080)
    TIFFSwabLong(&m);
   (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(tif->tif_subifdoff),(0)));
   if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&m)),((4))))==(4))) {
    TIFFErrorExt(tif->tif_clientdata, module,
         "Error writing SubIFD directory link");
    return (0);
   }





   if (--tif->tif_nsubifd)
    tif->tif_subifdoff += 4;
   else
    tif->tif_flags &= ~0x02000;
   return (1);
  }
  else
  {
   uint64 m;
   m = tif->tif_diroff;
   if (tif->tif_flags & 0x00080)
    TIFFSwabLong8(&m);
   (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(tif->tif_subifdoff),(0)));
   if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&m)),((8))))==(8))) {
    TIFFErrorExt(tif->tif_clientdata, module,
         "Error writing SubIFD directory link");
    return (0);
   }





   if (--tif->tif_nsubifd)
    tif->tif_subifdoff += 8;
   else
    tif->tif_flags &= ~0x02000;
   return (1);
  }
 }

 if (!(tif->tif_flags&0x80000))
 {
  uint32 m;
  uint32 nextdir;
  m = (uint32)(tif->tif_diroff);
  if (tif->tif_flags & 0x00080)
   TIFFSwabLong(&m);
  if (tif->tif_header.classic.tiff_diroff == 0) {



   tif->tif_header.classic.tiff_diroff = (uint32) tif->tif_diroff;
   (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(4),(0)));
   if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&m)),((4))))==(4))) {
    TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
          "Error writing TIFF header");
    return (0);
   }
   return (1);
  }



  nextdir = tif->tif_header.classic.tiff_diroff;
  while(1) {
   uint16 dircount;
   uint32 nextnextdir;

   if (!(((*((tif))->tif_seekproc)(((tif))->tif_clientdata,((nextdir)),(0)))==(nextdir)) ||
       !(((*((tif))->tif_readproc)(((tif))->tif_clientdata,(&dircount),(2)))==(2))) {
    TIFFErrorExt(tif->tif_clientdata, module,
          "Error fetching directory count");
    return (0);
   }
   if (tif->tif_flags & 0x00080)
    TIFFSwabShort(&dircount);
   (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(nextdir+2+dircount*12),(0)))
                                       ;
   if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,(&nextnextdir),(4)))==(4))) {
    TIFFErrorExt(tif->tif_clientdata, module,
          "Error fetching directory link");
    return (0);
   }
   if (tif->tif_flags & 0x00080)
    TIFFSwabLong(&nextnextdir);
   if (nextnextdir==0)
   {
    (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(nextdir+2+dircount*12),(0)))
                                        ;
    if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&m)),((4))))==(4))) {
     TIFFErrorExt(tif->tif_clientdata, module,
          "Error writing directory link");
     return (0);
    }
    break;
   }
   nextdir=nextnextdir;
  }
 }
 else
 {
  uint64 m;
  uint64 nextdir;
  m = tif->tif_diroff;
  if (tif->tif_flags & 0x00080)
   TIFFSwabLong8(&m);
  if (tif->tif_header.big.tiff_diroff == 0) {



   tif->tif_header.big.tiff_diroff = tif->tif_diroff;
   (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(8),(0)));
   if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&m)),((8))))==(8))) {
    TIFFErrorExt(tif->tif_clientdata, tif->tif_name,
          "Error writing TIFF header");
    return (0);
   }
   return (1);
  }



  nextdir = tif->tif_header.big.tiff_diroff;
  while(1) {
   uint64 dircount64;
   uint16 dircount;
   uint64 nextnextdir;

   if (!(((*((tif))->tif_seekproc)(((tif))->tif_clientdata,((nextdir)),(0)))==(nextdir)) ||
       !(((*((tif))->tif_readproc)(((tif))->tif_clientdata,(&dircount64),(8)))==(8))) {
    TIFFErrorExt(tif->tif_clientdata, module,
          "Error fetching directory count");
    return (0);
   }
   if (tif->tif_flags & 0x00080)
    TIFFSwabLong8(&dircount64);
   if (dircount64>0xFFFF)
   {
    TIFFErrorExt(tif->tif_clientdata, module,
          "Sanity check on tag count failed, likely corrupt TIFF");
    return (0);
   }
   dircount=(uint16)dircount64;
   (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(nextdir+8+dircount*20),(0)))
                                       ;
   if (!(((*((tif))->tif_readproc)(((tif))->tif_clientdata,(&nextnextdir),(8)))==(8))) {
    TIFFErrorExt(tif->tif_clientdata, module,
          "Error fetching directory link");
    return (0);
   }
   if (tif->tif_flags & 0x00080)
    TIFFSwabLong8(&nextnextdir);
   if (nextnextdir==0)
   {
    (void) ((*(tif)->tif_seekproc)((tif)->tif_clientdata,(nextdir+8+dircount*20),(0)))
                                        ;
    if (!(((*((tif))->tif_writeproc)(((tif))->tif_clientdata,((&m)),((8))))==(8))) {
     TIFFErrorExt(tif->tif_clientdata, module,
          "Error writing directory link");
     return (0);
    }
    break;
   }
   nextdir=nextnextdir;
  }
 }
 return (1);
}
