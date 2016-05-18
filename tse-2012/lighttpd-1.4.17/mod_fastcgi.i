# 1 "mod_fastcgi.c"
# 1 "/af14/csl9q/genprog/security/lighttpd-1.4.17/src//"
# 1 "<built-in>"
# 1 "<command line>"
# 1 "mod_fastcgi.c"
# 214 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h"
typedef unsigned int size_t;
# 34 "/usr/include/bits/types.h"
typedef unsigned char __u_char;
# 35 "/usr/include/bits/types.h"
typedef unsigned short __u_short;
# 36 "/usr/include/bits/types.h"
typedef unsigned int __u_int;
# 37 "/usr/include/bits/types.h"
typedef unsigned long __u_long;
# 40 "/usr/include/bits/types.h"
typedef signed char __int8_t;
# 41 "/usr/include/bits/types.h"
typedef unsigned char __uint8_t;
# 42 "/usr/include/bits/types.h"
typedef short __int16_t;
# 43 "/usr/include/bits/types.h"
typedef unsigned short __uint16_t;
# 44 "/usr/include/bits/types.h"
typedef int __int32_t;
# 45 "/usr/include/bits/types.h"
typedef unsigned int __uint32_t;
# 50 "/usr/include/bits/types.h"
typedef long long __int64_t;
# 51 "/usr/include/bits/types.h"
typedef unsigned long long __uint64_t;
# 59 "/usr/include/bits/types.h"
typedef long long __quad_t;
# 60 "/usr/include/bits/types.h"
typedef unsigned long long __u_quad_t;
# 137 "/usr/include/bits/types.h"
typedef __u_quad_t __dev_t;
# 138 "/usr/include/bits/types.h"
typedef unsigned int __uid_t;
# 139 "/usr/include/bits/types.h"
typedef unsigned int __gid_t;
# 140 "/usr/include/bits/types.h"
typedef unsigned long __ino_t;
# 141 "/usr/include/bits/types.h"
typedef __u_quad_t __ino64_t;
# 142 "/usr/include/bits/types.h"
typedef unsigned int __mode_t;
# 143 "/usr/include/bits/types.h"
typedef unsigned int __nlink_t;
# 144 "/usr/include/bits/types.h"
typedef long __off_t;
# 145 "/usr/include/bits/types.h"
typedef __quad_t __off64_t;
# 146 "/usr/include/bits/types.h"
typedef int __pid_t;
# 147 "/usr/include/bits/types.h"
struct __anonstruct___fsid_t_1 {
   int __val[2] ;
};
# 147 "/usr/include/bits/types.h"
typedef struct __anonstruct___fsid_t_1 __fsid_t;
# 148 "/usr/include/bits/types.h"
typedef long __clock_t;
# 149 "/usr/include/bits/types.h"
typedef unsigned long __rlim_t;
# 150 "/usr/include/bits/types.h"
typedef __u_quad_t __rlim64_t;
# 151 "/usr/include/bits/types.h"
typedef unsigned int __id_t;
# 152 "/usr/include/bits/types.h"
typedef long __time_t;
# 153 "/usr/include/bits/types.h"
typedef unsigned int __useconds_t;
# 154 "/usr/include/bits/types.h"
typedef long __suseconds_t;
# 156 "/usr/include/bits/types.h"
typedef int __daddr_t;
# 157 "/usr/include/bits/types.h"
typedef long __swblk_t;
# 158 "/usr/include/bits/types.h"
typedef int __key_t;
# 161 "/usr/include/bits/types.h"
typedef int __clockid_t;
# 164 "/usr/include/bits/types.h"
typedef void *__timer_t;
# 167 "/usr/include/bits/types.h"
typedef long __blksize_t;
# 172 "/usr/include/bits/types.h"
typedef long __blkcnt_t;
# 173 "/usr/include/bits/types.h"
typedef __quad_t __blkcnt64_t;
# 176 "/usr/include/bits/types.h"
typedef unsigned long __fsblkcnt_t;
# 177 "/usr/include/bits/types.h"
typedef __u_quad_t __fsblkcnt64_t;
# 180 "/usr/include/bits/types.h"
typedef unsigned long __fsfilcnt_t;
# 181 "/usr/include/bits/types.h"
typedef __u_quad_t __fsfilcnt64_t;
# 183 "/usr/include/bits/types.h"
typedef int __ssize_t;
# 187 "/usr/include/bits/types.h"
typedef __off64_t __loff_t;
# 188 "/usr/include/bits/types.h"
typedef __quad_t *__qaddr_t;
# 189 "/usr/include/bits/types.h"
typedef char *__caddr_t;
# 192 "/usr/include/bits/types.h"
typedef int __intptr_t;
# 195 "/usr/include/bits/types.h"
typedef unsigned int __socklen_t;
# 35 "/usr/include/sys/types.h"
typedef __u_char u_char;
# 36 "/usr/include/sys/types.h"
typedef __u_short u_short;
# 37 "/usr/include/sys/types.h"
typedef __u_int u_int;
# 38 "/usr/include/sys/types.h"
typedef __u_long u_long;
# 39 "/usr/include/sys/types.h"
typedef __quad_t quad_t;
# 40 "/usr/include/sys/types.h"
typedef __u_quad_t u_quad_t;
# 41 "/usr/include/sys/types.h"
typedef __fsid_t fsid_t;
# 46 "/usr/include/sys/types.h"
typedef __loff_t loff_t;
# 52 "/usr/include/sys/types.h"
typedef __ino64_t ino_t;
# 62 "/usr/include/sys/types.h"
typedef __dev_t dev_t;
# 67 "/usr/include/sys/types.h"
typedef __gid_t gid_t;
# 72 "/usr/include/sys/types.h"
typedef __mode_t mode_t;
# 77 "/usr/include/sys/types.h"
typedef __nlink_t nlink_t;
# 82 "/usr/include/sys/types.h"
typedef __uid_t uid_t;
# 90 "/usr/include/sys/types.h"
typedef __off64_t off_t;
# 100 "/usr/include/sys/types.h"
typedef __pid_t pid_t;
# 105 "/usr/include/sys/types.h"
typedef __id_t id_t;
# 110 "/usr/include/sys/types.h"
typedef __ssize_t ssize_t;
# 116 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;
# 117 "/usr/include/sys/types.h"
typedef __caddr_t caddr_t;
# 123 "/usr/include/sys/types.h"
typedef __key_t key_t;
# 77 "/usr/include/time.h"
typedef __time_t time_t;
# 93 "/usr/include/time.h"
typedef __clockid_t clockid_t;
# 105 "/usr/include/time.h"
typedef __timer_t timer_t;
# 151 "/usr/include/sys/types.h"
typedef unsigned long ulong;
# 152 "/usr/include/sys/types.h"
typedef unsigned short ushort;
# 153 "/usr/include/sys/types.h"
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h"
typedef char int8_t;
# 196 "/usr/include/sys/types.h"
typedef short int16_t;
# 197 "/usr/include/sys/types.h"
typedef int int32_t;
# 198 "/usr/include/sys/types.h"
typedef long long int64_t;
# 201 "/usr/include/sys/types.h"
typedef unsigned char u_int8_t;
# 202 "/usr/include/sys/types.h"
typedef unsigned short u_int16_t;
# 203 "/usr/include/sys/types.h"
typedef unsigned int u_int32_t;
# 204 "/usr/include/sys/types.h"
typedef unsigned long long u_int64_t;
# 206 "/usr/include/sys/types.h"
typedef int register_t;
# 24 "/usr/include/bits/sigset.h"
typedef int __sig_atomic_t;
# 29 "/usr/include/bits/sigset.h"
struct __anonstruct___sigset_t_2 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};
# 29 "/usr/include/bits/sigset.h"
typedef struct __anonstruct___sigset_t_2 __sigset_t;
# 38 "/usr/include/sys/select.h"
typedef __sigset_t sigset_t;
# 121 "/usr/include/time.h"
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
# 69 "/usr/include/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
# 49 "/usr/include/sys/select.h"
typedef __suseconds_t suseconds_t;
# 55 "/usr/include/sys/select.h"
typedef long __fd_mask;
# 67 "/usr/include/sys/select.h"
struct __anonstruct_fd_set_3 {
   __fd_mask __fds_bits[1024U / (8U * sizeof(__fd_mask ))] ;
};
# 67 "/usr/include/sys/select.h"
typedef struct __anonstruct_fd_set_3 fd_set;
# 85 "/usr/include/sys/select.h"
typedef __fd_mask fd_mask;
# 248 "/usr/include/sys/types.h"
typedef __blkcnt64_t blkcnt_t;
# 252 "/usr/include/sys/types.h"
typedef __fsblkcnt64_t fsblkcnt_t;
# 256 "/usr/include/sys/types.h"
typedef __fsfilcnt64_t fsfilcnt_t;
# 36 "/usr/include/bits/pthreadtypes.h"
typedef unsigned long pthread_t;
# 39 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_attr_t_4 {
   char __size[36] ;
   long __align ;
};
# 39 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_attr_t_4 pthread_attr_t;
# 46 "/usr/include/bits/pthreadtypes.h"
struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};
# 46 "/usr/include/bits/pthreadtypes.h"
typedef struct __pthread_internal_slist __pthread_slist_t;
# 54 "/usr/include/bits/pthreadtypes.h"
union __anonunion____missing_field_name_6 {
   int __spins ;
   __pthread_slist_t __list ;
};
# 54 "/usr/include/bits/pthreadtypes.h"
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_6 __annonCompField1 ;
};
# 54 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_mutex_t_5 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};
# 54 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutex_t_5 pthread_mutex_t;
# 75 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_mutexattr_t_7 {
   char __size[4] ;
   long __align ;
};
# 75 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutexattr_t_7 pthread_mutexattr_t;
# 84 "/usr/include/bits/pthreadtypes.h"
struct __anonstruct___data_9 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
# 84 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_cond_t_8 {
   struct __anonstruct___data_9 __data ;
   char __size[48] ;
   long long __align ;
};
# 84 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_cond_t_8 pthread_cond_t;
# 101 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_condattr_t_10 {
   char __size[4] ;
   long __align ;
};
# 101 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_condattr_t_10 pthread_condattr_t;
# 109 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;
# 113 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t;
# 119 "/usr/include/bits/pthreadtypes.h"
struct __anonstruct___data_12 {
   int __lock ;
   unsigned int __nr_readers ;
   unsigned int __readers_wakeup ;
   unsigned int __writer_wakeup ;
   unsigned int __nr_readers_queued ;
   unsigned int __nr_writers_queued ;
   unsigned int __flags ;
   int __writer ;
};
# 119 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_rwlock_t_11 {
   struct __anonstruct___data_12 __data ;
   char __size[32] ;
   long __align ;
};
# 119 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_rwlock_t_11 pthread_rwlock_t;
# 138 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_rwlockattr_t_13 {
   char __size[8] ;
   long __align ;
};
# 138 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_rwlockattr_t_13 pthread_rwlockattr_t;
# 148 "/usr/include/bits/pthreadtypes.h"
typedef int volatile pthread_spinlock_t;
# 153 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_barrier_t_14 {
   char __size[20] ;
   long __align ;
};
# 153 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_barrier_t_14 pthread_barrier_t;
# 159 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_barrierattr_t_15 {
   char __size[4] ;
   int __align ;
};
# 159 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_barrierattr_t_15 pthread_barrierattr_t;
# 226 "/usr/include/unistd.h"
typedef __useconds_t useconds_t;
# 238 "/usr/include/unistd.h"
typedef __intptr_t intptr_t;
# 245 "/usr/include/unistd.h"
typedef __socklen_t socklen_t;
# 26 "/usr/include/bits/confname.h"
enum __anonenum_16 {
    _PC_LINK_MAX = 0,
    _PC_MAX_CANON = 1,
    _PC_MAX_INPUT = 2,
    _PC_NAME_MAX = 3,
    _PC_PATH_MAX = 4,
    _PC_PIPE_BUF = 5,
    _PC_CHOWN_RESTRICTED = 6,
    _PC_NO_TRUNC = 7,
    _PC_VDISABLE = 8,
    _PC_SYNC_IO = 9,
    _PC_ASYNC_IO = 10,
    _PC_PRIO_IO = 11,
    _PC_SOCK_MAXBUF = 12,
    _PC_FILESIZEBITS = 13,
    _PC_REC_INCR_XFER_SIZE = 14,
    _PC_REC_MAX_XFER_SIZE = 15,
    _PC_REC_MIN_XFER_SIZE = 16,
    _PC_REC_XFER_ALIGN = 17,
    _PC_ALLOC_SIZE_MIN = 18,
    _PC_SYMLINK_MAX = 19,
    _PC_2_SYMLINKS = 20
} ;
# 73 "/usr/include/bits/confname.h"
enum __anonenum_17 {
    _SC_ARG_MAX = 0,
    _SC_CHILD_MAX = 1,
    _SC_CLK_TCK = 2,
    _SC_NGROUPS_MAX = 3,
    _SC_OPEN_MAX = 4,
    _SC_STREAM_MAX = 5,
    _SC_TZNAME_MAX = 6,
    _SC_JOB_CONTROL = 7,
    _SC_SAVED_IDS = 8,
    _SC_REALTIME_SIGNALS = 9,
    _SC_PRIORITY_SCHEDULING = 10,
    _SC_TIMERS = 11,
    _SC_ASYNCHRONOUS_IO = 12,
    _SC_PRIORITIZED_IO = 13,
    _SC_SYNCHRONIZED_IO = 14,
    _SC_FSYNC = 15,
    _SC_MAPPED_FILES = 16,
    _SC_MEMLOCK = 17,
    _SC_MEMLOCK_RANGE = 18,
    _SC_MEMORY_PROTECTION = 19,
    _SC_MESSAGE_PASSING = 20,
    _SC_SEMAPHORES = 21,
    _SC_SHARED_MEMORY_OBJECTS = 22,
    _SC_AIO_LISTIO_MAX = 23,
    _SC_AIO_MAX = 24,
    _SC_AIO_PRIO_DELTA_MAX = 25,
    _SC_DELAYTIMER_MAX = 26,
    _SC_MQ_OPEN_MAX = 27,
    _SC_MQ_PRIO_MAX = 28,
    _SC_VERSION = 29,
    _SC_PAGESIZE = 30,
    _SC_RTSIG_MAX = 31,
    _SC_SEM_NSEMS_MAX = 32,
    _SC_SEM_VALUE_MAX = 33,
    _SC_SIGQUEUE_MAX = 34,
    _SC_TIMER_MAX = 35,
    _SC_BC_BASE_MAX = 36,
    _SC_BC_DIM_MAX = 37,
    _SC_BC_SCALE_MAX = 38,
    _SC_BC_STRING_MAX = 39,
    _SC_COLL_WEIGHTS_MAX = 40,
    _SC_EQUIV_CLASS_MAX = 41,
    _SC_EXPR_NEST_MAX = 42,
    _SC_LINE_MAX = 43,
    _SC_RE_DUP_MAX = 44,
    _SC_CHARCLASS_NAME_MAX = 45,
    _SC_2_VERSION = 46,
    _SC_2_C_BIND = 47,
    _SC_2_C_DEV = 48,
    _SC_2_FORT_DEV = 49,
    _SC_2_FORT_RUN = 50,
    _SC_2_SW_DEV = 51,
    _SC_2_LOCALEDEF = 52,
    _SC_PII = 53,
    _SC_PII_XTI = 54,
    _SC_PII_SOCKET = 55,
    _SC_PII_INTERNET = 56,
    _SC_PII_OSI = 57,
    _SC_POLL = 58,
    _SC_SELECT = 59,
    _SC_UIO_MAXIOV = 60,
    _SC_IOV_MAX = 60,
    _SC_PII_INTERNET_STREAM = 61,
    _SC_PII_INTERNET_DGRAM = 62,
    _SC_PII_OSI_COTS = 63,
    _SC_PII_OSI_CLTS = 64,
    _SC_PII_OSI_M = 65,
    _SC_T_IOV_MAX = 66,
    _SC_THREADS = 67,
    _SC_THREAD_SAFE_FUNCTIONS = 68,
    _SC_GETGR_R_SIZE_MAX = 69,
    _SC_GETPW_R_SIZE_MAX = 70,
    _SC_LOGIN_NAME_MAX = 71,
    _SC_TTY_NAME_MAX = 72,
    _SC_THREAD_DESTRUCTOR_ITERATIONS = 73,
    _SC_THREAD_KEYS_MAX = 74,
    _SC_THREAD_STACK_MIN = 75,
    _SC_THREAD_THREADS_MAX = 76,
    _SC_THREAD_ATTR_STACKADDR = 77,
    _SC_THREAD_ATTR_STACKSIZE = 78,
    _SC_THREAD_PRIORITY_SCHEDULING = 79,
    _SC_THREAD_PRIO_INHERIT = 80,
    _SC_THREAD_PRIO_PROTECT = 81,
    _SC_THREAD_PROCESS_SHARED = 82,
    _SC_NPROCESSORS_CONF = 83,
    _SC_NPROCESSORS_ONLN = 84,
    _SC_PHYS_PAGES = 85,
    _SC_AVPHYS_PAGES = 86,
    _SC_ATEXIT_MAX = 87,
    _SC_PASS_MAX = 88,
    _SC_XOPEN_VERSION = 89,
    _SC_XOPEN_XCU_VERSION = 90,
    _SC_XOPEN_UNIX = 91,
    _SC_XOPEN_CRYPT = 92,
    _SC_XOPEN_ENH_I18N = 93,
    _SC_XOPEN_SHM = 94,
    _SC_2_CHAR_TERM = 95,
    _SC_2_C_VERSION = 96,
    _SC_2_UPE = 97,
    _SC_XOPEN_XPG2 = 98,
    _SC_XOPEN_XPG3 = 99,
    _SC_XOPEN_XPG4 = 100,
    _SC_CHAR_BIT = 101,
    _SC_CHAR_MAX = 102,
    _SC_CHAR_MIN = 103,
    _SC_INT_MAX = 104,
    _SC_INT_MIN = 105,
    _SC_LONG_BIT = 106,
    _SC_WORD_BIT = 107,
    _SC_MB_LEN_MAX = 108,
    _SC_NZERO = 109,
    _SC_SSIZE_MAX = 110,
    _SC_SCHAR_MAX = 111,
    _SC_SCHAR_MIN = 112,
    _SC_SHRT_MAX = 113,
    _SC_SHRT_MIN = 114,
    _SC_UCHAR_MAX = 115,
    _SC_UINT_MAX = 116,
    _SC_ULONG_MAX = 117,
    _SC_USHRT_MAX = 118,
    _SC_NL_ARGMAX = 119,
    _SC_NL_LANGMAX = 120,
    _SC_NL_MSGMAX = 121,
    _SC_NL_NMAX = 122,
    _SC_NL_SETMAX = 123,
    _SC_NL_TEXTMAX = 124,
    _SC_XBS5_ILP32_OFF32 = 125,
    _SC_XBS5_ILP32_OFFBIG = 126,
    _SC_XBS5_LP64_OFF64 = 127,
    _SC_XBS5_LPBIG_OFFBIG = 128,
    _SC_XOPEN_LEGACY = 129,
    _SC_XOPEN_REALTIME = 130,
    _SC_XOPEN_REALTIME_THREADS = 131,
    _SC_ADVISORY_INFO = 132,
    _SC_BARRIERS = 133,
    _SC_BASE = 134,
    _SC_C_LANG_SUPPORT = 135,
    _SC_C_LANG_SUPPORT_R = 136,
    _SC_CLOCK_SELECTION = 137,
    _SC_CPUTIME = 138,
    _SC_THREAD_CPUTIME = 139,
    _SC_DEVICE_IO = 140,
    _SC_DEVICE_SPECIFIC = 141,
    _SC_DEVICE_SPECIFIC_R = 142,
    _SC_FD_MGMT = 143,
    _SC_FIFO = 144,
    _SC_PIPE = 145,
    _SC_FILE_ATTRIBUTES = 146,
    _SC_FILE_LOCKING = 147,
    _SC_FILE_SYSTEM = 148,
    _SC_MONOTONIC_CLOCK = 149,
    _SC_MULTI_PROCESS = 150,
    _SC_SINGLE_PROCESS = 151,
    _SC_NETWORKING = 152,
    _SC_READER_WRITER_LOCKS = 153,
    _SC_SPIN_LOCKS = 154,
    _SC_REGEXP = 155,
    _SC_REGEX_VERSION = 156,
    _SC_SHELL = 157,
    _SC_SIGNALS = 158,
    _SC_SPAWN = 159,
    _SC_SPORADIC_SERVER = 160,
    _SC_THREAD_SPORADIC_SERVER = 161,
    _SC_SYSTEM_DATABASE = 162,
    _SC_SYSTEM_DATABASE_R = 163,
    _SC_TIMEOUTS = 164,
    _SC_TYPED_MEMORY_OBJECTS = 165,
    _SC_USER_GROUPS = 166,
    _SC_USER_GROUPS_R = 167,
    _SC_2_PBS = 168,
    _SC_2_PBS_ACCOUNTING = 169,
    _SC_2_PBS_LOCATE = 170,
    _SC_2_PBS_MESSAGE = 171,
    _SC_2_PBS_TRACK = 172,
    _SC_SYMLOOP_MAX = 173,
    _SC_STREAMS = 174,
    _SC_2_PBS_CHECKPOINT = 175,
    _SC_V6_ILP32_OFF32 = 176,
    _SC_V6_ILP32_OFFBIG = 177,
    _SC_V6_LP64_OFF64 = 178,
    _SC_V6_LPBIG_OFFBIG = 179,
    _SC_HOST_NAME_MAX = 180,
    _SC_TRACE = 181,
    _SC_TRACE_EVENT_FILTER = 182,
    _SC_TRACE_INHERIT = 183,
    _SC_TRACE_LOG = 184,
    _SC_LEVEL1_ICACHE_SIZE = 185,
    _SC_LEVEL1_ICACHE_ASSOC = 186,
    _SC_LEVEL1_ICACHE_LINESIZE = 187,
    _SC_LEVEL1_DCACHE_SIZE = 188,
    _SC_LEVEL1_DCACHE_ASSOC = 189,
    _SC_LEVEL1_DCACHE_LINESIZE = 190,
    _SC_LEVEL2_CACHE_SIZE = 191,
    _SC_LEVEL2_CACHE_ASSOC = 192,
    _SC_LEVEL2_CACHE_LINESIZE = 193,
    _SC_LEVEL3_CACHE_SIZE = 194,
    _SC_LEVEL3_CACHE_ASSOC = 195,
    _SC_LEVEL3_CACHE_LINESIZE = 196,
    _SC_LEVEL4_CACHE_SIZE = 197,
    _SC_LEVEL4_CACHE_ASSOC = 198,
    _SC_LEVEL4_CACHE_LINESIZE = 199,
    _SC_IPV6 = 235,
    _SC_RAW_SOCKETS = 236
} ;
# 506 "/usr/include/bits/confname.h"
enum __anonenum_18 {
    _CS_PATH = 0,
    _CS_V6_WIDTH_RESTRICTED_ENVS = 1,
    _CS_GNU_LIBC_VERSION = 2,
    _CS_GNU_LIBPTHREAD_VERSION = 3,
    _CS_LFS_CFLAGS = 1000,
    _CS_LFS_LDFLAGS = 1001,
    _CS_LFS_LIBS = 1002,
    _CS_LFS_LINTFLAGS = 1003,
    _CS_LFS64_CFLAGS = 1004,
    _CS_LFS64_LDFLAGS = 1005,
    _CS_LFS64_LIBS = 1006,
    _CS_LFS64_LINTFLAGS = 1007,
    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,
    _CS_XBS5_ILP32_OFF32_LDFLAGS = 1101,
    _CS_XBS5_ILP32_OFF32_LIBS = 1102,
    _CS_XBS5_ILP32_OFF32_LINTFLAGS = 1103,
    _CS_XBS5_ILP32_OFFBIG_CFLAGS = 1104,
    _CS_XBS5_ILP32_OFFBIG_LDFLAGS = 1105,
    _CS_XBS5_ILP32_OFFBIG_LIBS = 1106,
    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS = 1107,
    _CS_XBS5_LP64_OFF64_CFLAGS = 1108,
    _CS_XBS5_LP64_OFF64_LDFLAGS = 1109,
    _CS_XBS5_LP64_OFF64_LIBS = 1110,
    _CS_XBS5_LP64_OFF64_LINTFLAGS = 1111,
    _CS_XBS5_LPBIG_OFFBIG_CFLAGS = 1112,
    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS = 1113,
    _CS_XBS5_LPBIG_OFFBIG_LIBS = 1114,
    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS = 1115,
    _CS_POSIX_V6_ILP32_OFF32_CFLAGS = 1116,
    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS = 1117,
    _CS_POSIX_V6_ILP32_OFF32_LIBS = 1118,
    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS = 1119,
    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS = 1120,
    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS = 1121,
    _CS_POSIX_V6_ILP32_OFFBIG_LIBS = 1122,
    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS = 1123,
    _CS_POSIX_V6_LP64_OFF64_CFLAGS = 1124,
    _CS_POSIX_V6_LP64_OFF64_LDFLAGS = 1125,
    _CS_POSIX_V6_LP64_OFF64_LIBS = 1126,
    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS = 1127,
    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS = 1128,
    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS = 1129,
    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS = 1130,
    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS = 1131
} ;
# 141 "/usr/include/bits/fcntl.h"
struct flock {
   short l_type ;
   short l_whence ;
   __off64_t l_start ;
   __off64_t l_len ;
   __pid_t l_pid ;
};
# 326 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h"
typedef long wchar_t;
# 98 "/usr/include/stdlib.h"
struct __anonstruct_div_t_19 {
   int quot ;
   int rem ;
};
# 98 "/usr/include/stdlib.h"
typedef struct __anonstruct_div_t_19 div_t;
# 106 "/usr/include/stdlib.h"
struct __anonstruct_ldiv_t_20 {
   long quot ;
   long rem ;
};
# 106 "/usr/include/stdlib.h"
typedef struct __anonstruct_ldiv_t_20 ldiv_t;
# 118 "/usr/include/stdlib.h"
struct __anonstruct_lldiv_t_21 {
   long long quot ;
   long long rem ;
};
# 118 "/usr/include/stdlib.h"
typedef struct __anonstruct_lldiv_t_21 lldiv_t;
# 467 "/usr/include/stdlib.h"
struct random_data {
   int32_t *fptr ;
   int32_t *rptr ;
   int32_t *state ;
   int rand_type ;
   int rand_deg ;
   int rand_sep ;
   int32_t *end_ptr ;
};
# 536 "/usr/include/stdlib.h"
struct drand48_data {
   unsigned short __x[3] ;
   unsigned short __old_x[3] ;
   unsigned short __c ;
   unsigned short __init ;
   unsigned long long __a ;
};
# 763 "/usr/include/stdlib.h"
typedef int (*__compar_fn_t)(void const * , void const * );
# 48 "/usr/include/ctype.h"
enum __anonenum_22 {
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
# 41 "/usr/include/signal.h"
typedef __sig_atomic_t sig_atomic_t;
# 75 "/usr/include/signal.h"
typedef void (*__sighandler_t)(int );
# 201 "/usr/include/signal.h"
typedef void (*sig_t)(int );
# 33 "/usr/include/bits/siginfo.h"
union sigval {
   int sival_int ;
   void *sival_ptr ;
};
# 33 "/usr/include/bits/siginfo.h"
typedef union sigval sigval_t;
# 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__kill_24 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};
# 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__timer_25 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};
# 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__rt_26 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};
# 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigchld_27 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};
# 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigfault_28 {
   void *si_addr ;
};
# 51 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigpoll_29 {
   long si_band ;
   int si_fd ;
};
# 51 "/usr/include/bits/siginfo.h"
union __anonunion__sifields_23 {
   int _pad[128U / sizeof(int ) - 3U] ;
   struct __anonstruct__kill_24 _kill ;
   struct __anonstruct__timer_25 _timer ;
   struct __anonstruct__rt_26 _rt ;
   struct __anonstruct__sigchld_27 _sigchld ;
   struct __anonstruct__sigfault_28 _sigfault ;
   struct __anonstruct__sigpoll_29 _sigpoll ;
};
# 51 "/usr/include/bits/siginfo.h"
struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_23 _sifields ;
};
# 51 "/usr/include/bits/siginfo.h"
typedef struct siginfo siginfo_t;
# 129 "/usr/include/bits/siginfo.h"
enum __anonenum_30 {
    SI_ASYNCNL = -60,
    SI_TKILL = -6,
    SI_SIGIO = -5,
    SI_ASYNCIO = -4,
    SI_MESGQ = -3,
    SI_TIMER = -2,
    SI_QUEUE = -1,
    SI_USER = 0,
    SI_KERNEL = 128
} ;
# 153 "/usr/include/bits/siginfo.h"
enum __anonenum_31 {
    ILL_ILLOPC = 1,
    ILL_ILLOPN = 2,
    ILL_ILLADR = 3,
    ILL_ILLTRP = 4,
    ILL_PRVOPC = 5,
    ILL_PRVREG = 6,
    ILL_COPROC = 7,
    ILL_BADSTK = 8
} ;
# 174 "/usr/include/bits/siginfo.h"
enum __anonenum_32 {
    FPE_INTDIV = 1,
    FPE_INTOVF = 2,
    FPE_FLTDIV = 3,
    FPE_FLTOVF = 4,
    FPE_FLTUND = 5,
    FPE_FLTRES = 6,
    FPE_FLTINV = 7,
    FPE_FLTSUB = 8
} ;
# 195 "/usr/include/bits/siginfo.h"
enum __anonenum_33 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;
# 204 "/usr/include/bits/siginfo.h"
enum __anonenum_34 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;
# 215 "/usr/include/bits/siginfo.h"
enum __anonenum_35 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;
# 224 "/usr/include/bits/siginfo.h"
enum __anonenum_36 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;
# 241 "/usr/include/bits/siginfo.h"
enum __anonenum_37 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;
# 273 "/usr/include/bits/siginfo.h"
struct __anonstruct__sigev_thread_39 {
   void (*_function)(sigval_t ) ;
   void *_attribute ;
};
# 273 "/usr/include/bits/siginfo.h"
union __anonunion__sigev_un_38 {
   int _pad[64U / sizeof(int ) - 3U] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_39 _sigev_thread ;
};
# 273 "/usr/include/bits/siginfo.h"
struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_38 _sigev_un ;
};
# 273 "/usr/include/bits/siginfo.h"
typedef struct sigevent sigevent_t;
# 300 "/usr/include/bits/siginfo.h"
enum __anonenum_40 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;
# 25 "/usr/include/bits/sigaction.h"
union __anonunion___sigaction_handler_41 {
   void (*sa_handler)(int ) ;
   void (*sa_sigaction)(int , siginfo_t * , void * ) ;
};
# 25 "/usr/include/bits/sigaction.h"
struct sigaction {
   union __anonunion___sigaction_handler_41 __sigaction_handler ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};
# 308 "/usr/include/signal.h"
struct sigvec {
   void (*sv_handler)(int ) ;
   int sv_mask ;
   int sv_flags ;
};
# 19 "/usr/include/asm/sigcontext.h"
struct _fpreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
};
# 24 "/usr/include/asm/sigcontext.h"
struct _fpxreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
   unsigned short padding[3] ;
};
# 30 "/usr/include/asm/sigcontext.h"
struct _xmmreg {
   unsigned long element[4] ;
};
# 34 "/usr/include/asm/sigcontext.h"
struct _fpstate {
   unsigned long cw ;
   unsigned long sw ;
   unsigned long tag ;
   unsigned long ipoff ;
   unsigned long cssel ;
   unsigned long dataoff ;
   unsigned long datasel ;
   struct _fpreg _st[8] ;
   unsigned short status ;
   unsigned short magic ;
   unsigned long _fxsr_env[6] ;
   unsigned long mxcsr ;
   unsigned long reserved ;
   struct _fpxreg _fxsr_st[8] ;
   struct _xmmreg _xmm[8] ;
   unsigned long padding[56] ;
};
# 58 "/usr/include/asm/sigcontext.h"
struct sigcontext {
   unsigned short gs ;
   unsigned short __gsh ;
   unsigned short fs ;
   unsigned short __fsh ;
   unsigned short es ;
   unsigned short __esh ;
   unsigned short ds ;
   unsigned short __dsh ;
   unsigned long edi ;
   unsigned long esi ;
   unsigned long ebp ;
   unsigned long esp ;
   unsigned long ebx ;
   unsigned long edx ;
   unsigned long ecx ;
   unsigned long eax ;
   unsigned long trapno ;
   unsigned long err ;
   unsigned long eip ;
   unsigned short cs ;
   unsigned short __csh ;
   unsigned long eflags ;
   unsigned long esp_at_signal ;
   unsigned short ss ;
   unsigned short __ssh ;
   struct _fpstate *fpstate ;
   unsigned long oldmask ;
   unsigned long cr2 ;
};
# 26 "/usr/include/bits/sigstack.h"
struct sigstack {
   void *ss_sp ;
   int ss_onstack ;
};
# 34 "/usr/include/bits/sigstack.h"
enum __anonenum_42 {
    SS_ONSTACK = 1,
    SS_DISABLE = 2
} ;
# 50 "/usr/include/bits/sigstack.h"
struct sigaltstack {
   void *ss_sp ;
   int ss_flags ;
   size_t ss_size ;
};
# 50 "/usr/include/bits/sigstack.h"
typedef struct sigaltstack stack_t;
# 25 "settings.h"
enum __anonenum_handler_t_43 {
    HANDLER_UNSET = 0,
    HANDLER_GO_ON = 1,
    HANDLER_FINISHED = 2,
    HANDLER_COMEBACK = 3,
    HANDLER_WAIT_FOR_EVENT = 4,
    HANDLER_ERROR = 5,
    HANDLER_WAIT_FOR_FD = 6
} ;
# 25 "settings.h"
typedef enum __anonenum_handler_t_43 handler_t;
# 13 "buffer.h"
struct __anonstruct_buffer_44 {
   char *ptr ;
   size_t used ;
   size_t size ;
};
# 13 "buffer.h"
typedef struct __anonstruct_buffer_44 buffer;
# 20 "buffer.h"
struct __anonstruct_buffer_array_45 {
   buffer **ptr ;
   size_t used ;
   size_t size ;
};
# 20 "buffer.h"
typedef struct __anonstruct_buffer_array_45 buffer_array;
# 27 "buffer.h"
struct __anonstruct_read_buffer_46 {
   char *ptr ;
   size_t offset ;
   size_t used ;
   size_t size ;
};
# 27 "buffer.h"
typedef struct __anonstruct_read_buffer_46 read_buffer;
# 86 "buffer.h"
enum __anonenum_buffer_encoding_t_47 {
    ENCODING_UNSET = 0,
    ENCODING_REL_URI = 1,
    ENCODING_REL_URI_PART = 2,
    ENCODING_HTML = 3,
    ENCODING_MINIMAL_XML = 4,
    ENCODING_HEX = 5,
    ENCODING_HTTP_HEADER = 6
} ;
# 86 "buffer.h"
typedef enum __anonenum_buffer_encoding_t_47 buffer_encoding_t;
# 57 "/usr/include/sys/time.h"
struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};
# 63 "/usr/include/sys/time.h"
typedef struct timezone * __restrict __timezone_ptr_t;
# 93 "/usr/include/sys/time.h"
enum __itimer_which {
    ITIMER_REAL = 0,
    ITIMER_VIRTUAL = 1,
    ITIMER_PROF = 2
} ;
# 109 "/usr/include/sys/time.h"
struct itimerval {
   struct timeval it_interval ;
   struct timeval it_value ;
};
# 122 "/usr/include/sys/time.h"
typedef int __itimer_which_t;
# 36 "/usr/include/bits/stat.h"
struct stat {
   __dev_t st_dev ;
   unsigned short __pad1 ;
   __ino_t __st_ino ;
   __mode_t st_mode ;
   __nlink_t st_nlink ;
   __uid_t st_uid ;
   __gid_t st_gid ;
   __dev_t st_rdev ;
   unsigned short __pad2 ;
   __off64_t st_size ;
   __blksize_t st_blksize ;
   __blkcnt64_t st_blocks ;
   struct timespec st_atim ;
   struct timespec st_mtim ;
   struct timespec st_ctim ;
   __ino64_t st_ino ;
};
# 49 "/usr/include/stdint.h"
typedef unsigned char uint8_t;
# 50 "/usr/include/stdint.h"
typedef unsigned short uint16_t;
# 52 "/usr/include/stdint.h"
typedef unsigned int uint32_t;
# 59 "/usr/include/stdint.h"
typedef unsigned long long uint64_t;
# 66 "/usr/include/stdint.h"
typedef signed char int_least8_t;
# 67 "/usr/include/stdint.h"
typedef short int_least16_t;
# 68 "/usr/include/stdint.h"
typedef int int_least32_t;
# 73 "/usr/include/stdint.h"
typedef long long int_least64_t;
# 77 "/usr/include/stdint.h"
typedef unsigned char uint_least8_t;
# 78 "/usr/include/stdint.h"
typedef unsigned short uint_least16_t;
# 79 "/usr/include/stdint.h"
typedef unsigned int uint_least32_t;
# 84 "/usr/include/stdint.h"
typedef unsigned long long uint_least64_t;
# 91 "/usr/include/stdint.h"
typedef signed char int_fast8_t;
# 97 "/usr/include/stdint.h"
typedef int int_fast16_t;
# 98 "/usr/include/stdint.h"
typedef int int_fast32_t;
# 100 "/usr/include/stdint.h"
typedef long long int_fast64_t;
# 104 "/usr/include/stdint.h"
typedef unsigned char uint_fast8_t;
# 110 "/usr/include/stdint.h"
typedef unsigned int uint_fast16_t;
# 111 "/usr/include/stdint.h"
typedef unsigned int uint_fast32_t;
# 113 "/usr/include/stdint.h"
typedef unsigned long long uint_fast64_t;
# 129 "/usr/include/stdint.h"
typedef unsigned int uintptr_t;
# 139 "/usr/include/stdint.h"
typedef long long intmax_t;
# 141 "/usr/include/stdint.h"
typedef unsigned long long uintmax_t;
# 35 "/usr/include/inttypes.h"
typedef long __gwchar_t;
# 288 "/usr/include/inttypes.h"
struct __anonstruct_imaxdiv_t_48 {
   long long quot ;
   long long rem ;
};
# 288 "/usr/include/inttypes.h"
typedef struct __anonstruct_imaxdiv_t_48 imaxdiv_t;
# 195 "/usr/include/pcre.h"
struct real_pcre;
# 195 "/usr/include/pcre.h"
struct real_pcre;
# 196 "/usr/include/pcre.h"
typedef struct real_pcre pcre;
# 210 "/usr/include/pcre.h"
struct pcre_extra {
   unsigned long flags ;
   void *study_data ;
   unsigned long match_limit ;
   void *callout_data ;
   unsigned char const *tables ;
   unsigned long match_limit_recursion ;
};
# 210 "/usr/include/pcre.h"
typedef struct pcre_extra pcre_extra;
# 224 "/usr/include/pcre.h"
struct pcre_callout_block {
   int version ;
   int callout_number ;
   int *offset_vector ;
   char const *subject ;
   int subject_length ;
   int start_match ;
   int current_position ;
   int capture_top ;
   int capture_last ;
   void *callout_data ;
   int pattern_position ;
   int next_item_length ;
};
# 224 "/usr/include/pcre.h"
typedef struct pcre_callout_block pcre_callout_block;
# 15 "array.h"
enum __anonenum_data_type_t_49 {
    TYPE_UNSET = 0,
    TYPE_STRING = 1,
    TYPE_COUNT = 2,
    TYPE_ARRAY = 3,
    TYPE_INTEGER = 4,
    TYPE_FASTCGI = 5,
    TYPE_CONFIG = 6
} ;
# 15 "array.h"
typedef enum __anonenum_data_type_t_49 data_type_t;
# 26 "array.h"
struct data_unset {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset const *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset const *p , int depth ) ;
};
# 26 "array.h"
typedef struct data_unset data_unset;
# 30 "array.h"
struct __anonstruct_array_50 {
   data_unset **data ;
   size_t *sorted ;
   size_t used ;
   size_t size ;
   size_t unique_ndx ;
   size_t next_power_of_2 ;
   int is_weakref ;
};
# 30 "array.h"
typedef struct __anonstruct_array_50 array;
# 44 "array.h"
struct __anonstruct_data_count_51 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset const *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset const *p , int depth ) ;
   int count ;
};
# 44 "array.h"
typedef struct __anonstruct_data_count_51 data_count;
# 52 "array.h"
struct __anonstruct_data_string_52 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset const *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset const *p , int depth ) ;
   buffer *value ;
};
# 52 "array.h"
typedef struct __anonstruct_data_string_52 data_string;
# 61 "array.h"
struct __anonstruct_data_array_53 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset const *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset const *p , int depth ) ;
   array *value ;
};
# 61 "array.h"
typedef struct __anonstruct_data_array_53 data_array;
# 72 "array.h"
enum __anonenum_config_cond_t_54 {
    CONFIG_COND_UNSET = 0,
    CONFIG_COND_EQ = 1,
    CONFIG_COND_MATCH = 2,
    CONFIG_COND_NE = 3,
    CONFIG_COND_NOMATCH = 4
} ;
# 72 "array.h"
typedef enum __anonenum_config_cond_t_54 config_cond_t;
# 83 "array.h"
enum __anonenum_comp_key_t_55 {
    COMP_UNSET = 0,
    COMP_SERVER_SOCKET = 1,
    COMP_HTTP_URL = 2,
    COMP_HTTP_HOST = 3,
    COMP_HTTP_REFERER = 4,
    COMP_HTTP_USERAGENT = 5,
    COMP_HTTP_COOKIE = 6,
    COMP_HTTP_REMOTEIP = 7,
    COMP_HTTP_QUERYSTRING = 8,
    COMP_LAST_ELEMENT = 9
} ;
# 83 "array.h"
typedef enum __anonenum_comp_key_t_55 comp_key_t;
# 102 "array.h"
struct _data_config;
# 102 "array.h"
typedef struct _data_config data_config;
# 103 "array.h"
struct _data_config {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset const *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset const *p , int depth ) ;
   array *value ;
   buffer *comp_key ;
   comp_key_t comp ;
   config_cond_t cond ;
   buffer *op ;
   int context_ndx ;
   array *childs ;
   data_config *parent ;
   data_config *prev ;
   data_config *next ;
   buffer *string ;
   pcre *regex ;
   pcre_extra *regex_study ;
};
# 131 "array.h"
struct __anonstruct_data_integer_56 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset const *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset const *p , int depth ) ;
   int value ;
};
# 131 "array.h"
typedef struct __anonstruct_data_integer_56 data_integer;
# 139 "array.h"
struct __anonstruct_data_fastcgi_57 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset const *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset const *p , int depth ) ;
   buffer *host ;
   unsigned short port ;
   time_t disable_ts ;
   int is_disabled ;
   size_t balance ;
   int usage ;
   int last_used_ndx ;
};
# 139 "array.h"
typedef struct __anonstruct_data_fastcgi_57 data_fastcgi;
# 7 "chunk.h"
enum __anonenum_type_58 {
    UNUSED_CHUNK = 0,
    MEM_CHUNK = 1,
    FILE_CHUNK = 2
} ;
# 7 "chunk.h"
struct __anonstruct_mmap_60 {
   char *start ;
   size_t length ;
   off_t offset ;
};
# 7 "chunk.h"
struct __anonstruct_file_59 {
   buffer *name ;
   off_t start ;
   off_t length ;
   int fd ;
   struct __anonstruct_mmap_60 mmap ;
   int is_temp ;
};
# 7 "chunk.h"
struct chunk {
   enum __anonenum_type_58 type ;
   buffer *mem ;
   struct __anonstruct_file_59 file ;
   off_t offset ;
   struct chunk *next ;
};
# 7 "chunk.h"
typedef struct chunk chunk;
# 37 "chunk.h"
struct __anonstruct_chunkqueue_61 {
   chunk *first ;
   chunk *last ;
   chunk *unused ;
   size_t unused_chunks ;
   array *tempdirs ;
   off_t bytes_in ;
   off_t bytes_out ;
};
# 37 "chunk.h"
typedef struct __anonstruct_chunkqueue_61 chunkqueue;
# 12 "keyvalue.h"
enum __anonenum_http_method_t_62 {
    HTTP_METHOD_UNSET = -1,
    HTTP_METHOD_GET = 0,
    HTTP_METHOD_POST = 1,
    HTTP_METHOD_HEAD = 2,
    HTTP_METHOD_OPTIONS = 3,
    HTTP_METHOD_PROPFIND = 4,
    HTTP_METHOD_MKCOL = 5,
    HTTP_METHOD_PUT = 6,
    HTTP_METHOD_DELETE = 7,
    HTTP_METHOD_COPY = 8,
    HTTP_METHOD_MOVE = 9,
    HTTP_METHOD_PROPPATCH = 10,
    HTTP_METHOD_REPORT = 11,
    HTTP_METHOD_CHECKOUT = 12,
    HTTP_METHOD_CHECKIN = 13,
    HTTP_METHOD_VERSION_CONTROL = 14,
    HTTP_METHOD_UNCHECKOUT = 15,
    HTTP_METHOD_MKACTIVITY = 16,
    HTTP_METHOD_MERGE = 17,
    HTTP_METHOD_LOCK = 18,
    HTTP_METHOD_UNLOCK = 19,
    HTTP_METHOD_LABEL = 20,
    HTTP_METHOD_CONNECT = 21
} ;
# 12 "keyvalue.h"
typedef enum __anonenum_http_method_t_62 http_method_t;
# 38 "keyvalue.h"
enum __anonenum_http_version_t_63 {
    HTTP_VERSION_UNSET = -1,
    HTTP_VERSION_1_0 = 0,
    HTTP_VERSION_1_1 = 1
} ;
# 38 "keyvalue.h"
typedef enum __anonenum_http_version_t_63 http_version_t;
# 40 "keyvalue.h"
struct __anonstruct_keyvalue_64 {
   int key ;
   char *value ;
};
# 40 "keyvalue.h"
typedef struct __anonstruct_keyvalue_64 keyvalue;
# 46 "keyvalue.h"
struct __anonstruct_s_keyvalue_65 {
   char *key ;
   char *value ;
};
# 46 "keyvalue.h"
typedef struct __anonstruct_s_keyvalue_65 s_keyvalue;
# 52 "keyvalue.h"
struct __anonstruct_pcre_keyvalue_66 {
   pcre *key ;
   pcre_extra *key_extra ;
   buffer *value ;
};
# 52 "keyvalue.h"
typedef struct __anonstruct_pcre_keyvalue_66 pcre_keyvalue;
# 61 "keyvalue.h"
enum __anonenum_httpauth_type_67 {
    HTTP_AUTH_BASIC = 0,
    HTTP_AUTH_DIGEST = 1
} ;
# 61 "keyvalue.h"
typedef enum __anonenum_httpauth_type_67 httpauth_type;
# 63 "keyvalue.h"
struct __anonstruct_httpauth_keyvalue_68 {
   char *key ;
   char *realm ;
   httpauth_type type ;
};
# 63 "keyvalue.h"
typedef struct __anonstruct_httpauth_keyvalue_68 httpauth_keyvalue;
# 77 "keyvalue.h"
struct __anonstruct_keyvalue_buffer_69 {
   keyvalue **kv ;
   size_t used ;
   size_t size ;
};
# 77 "keyvalue.h"
typedef struct __anonstruct_keyvalue_buffer_69 keyvalue_buffer;
# 78 "keyvalue.h"
struct __anonstruct_s_keyvalue_buffer_70 {
   s_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
# 78 "keyvalue.h"
typedef struct __anonstruct_s_keyvalue_buffer_70 s_keyvalue_buffer;
# 79 "keyvalue.h"
struct __anonstruct_httpauth_keyvalue_buffer_71 {
   httpauth_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
# 79 "keyvalue.h"
typedef struct __anonstruct_httpauth_keyvalue_buffer_71 httpauth_keyvalue_buffer;
# 80 "keyvalue.h"
struct __anonstruct_pcre_keyvalue_buffer_72 {
   pcre_keyvalue **kv ;
   size_t used ;
   size_t size ;
};
# 80 "keyvalue.h"
typedef struct __anonstruct_pcre_keyvalue_buffer_72 pcre_keyvalue_buffer;
# 152 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h"
typedef int ptrdiff_t;
# 6 "bitset.h"
struct __anonstruct_bitset_73 {
   size_t *bits ;
   size_t nbits ;
};
# 6 "bitset.h"
typedef struct __anonstruct_bitset_73 bitset;
# 34 "/usr/include/sys/epoll.h"
enum EPOLL_EVENTS {
    EPOLLIN = 1,
    EPOLLPRI = 2,
    EPOLLOUT = 4,
    EPOLLRDNORM = 64,
    EPOLLRDBAND = 128,
    EPOLLWRNORM = 256,
    EPOLLWRBAND = 512,
    EPOLLMSG = 1024,
    EPOLLERR = 8,
    EPOLLHUP = 16,
    EPOLLONESHOT = 1073741824,
    EPOLLET = (-0x7FFFFFFF-1)
} ;
# 69 "/usr/include/sys/epoll.h"
union epoll_data {
   void *ptr ;
   int fd ;
   uint32_t u32 ;
   uint64_t u64 ;
};
# 69 "/usr/include/sys/epoll.h"
typedef union epoll_data epoll_data_t;
# 77 "/usr/include/sys/epoll.h"
struct epoll_event {
   uint32_t events ;
   epoll_data_t data ;
};
# 37 "/usr/include/sys/poll.h"
typedef unsigned long nfds_t;
# 40 "/usr/include/sys/poll.h"
struct pollfd {
   int fd ;
   short events ;
   short revents ;
};
# 61 "fdevent.h"
typedef handler_t (*fdevent_handler)(void *srv , void *ctx , int revents );
# 70 "fdevent.h"
enum __anonenum_fd_event_t_74 {
    FD_EVENT_TYPE_UNSET = -1,
    FD_EVENT_TYPE_CONNECTION = 0,
    FD_EVENT_TYPE_FCGI_CONNECTION = 1,
    FD_EVENT_TYPE_DIRWATCH = 2,
    FD_EVENT_TYPE_CGI_CONNECTION = 3
} ;
# 70 "fdevent.h"
typedef enum __anonenum_fd_event_t_74 fd_event_t;
# 77 "fdevent.h"
enum __anonenum_fdevent_handler_t_75 {
    FDEVENT_HANDLER_UNSET = 0,
    FDEVENT_HANDLER_SELECT = 1,
    FDEVENT_HANDLER_POLL = 2,
    FDEVENT_HANDLER_LINUX_RTSIG = 3,
    FDEVENT_HANDLER_LINUX_SYSEPOLL = 4,
    FDEVENT_HANDLER_SOLARIS_DEVPOLL = 5,
    FDEVENT_HANDLER_FREEBSD_KQUEUE = 6,
    FDEVENT_HANDLER_SOLARIS_PORT = 7
} ;
# 77 "fdevent.h"
typedef enum __anonenum_fdevent_handler_t_75 fdevent_handler_t;
# 91 "fdevent.h"
struct __anonstruct_fd_conn_76 {
   int fd ;
   void *conn ;
   fd_event_t fd_type ;
   int events ;
   int revents ;
};
# 91 "fdevent.h"
typedef struct __anonstruct_fd_conn_76 fd_conn;
# 99 "fdevent.h"
struct __anonstruct_fd_conn_buffer_77 {
   fd_conn *ptr ;
   size_t size ;
   size_t used ;
};
# 99 "fdevent.h"
typedef struct __anonstruct_fd_conn_buffer_77 fd_conn_buffer;
# 111 "fdevent.h"
struct _fdnode {
   handler_t (*handler)(void *srv , void *ctx , int revents ) ;
   void *ctx ;
   int fd ;
   struct _fdnode *prev ;
   struct _fdnode *next ;
};
# 111 "fdevent.h"
typedef struct _fdnode fdnode;
# 119 "fdevent.h"
struct __anonstruct_buffer_int_78 {
   int *ptr ;
   size_t used ;
   size_t size ;
};
# 119 "fdevent.h"
typedef struct __anonstruct_buffer_int_78 buffer_int;
# 130 "fdevent.h"
struct fdevents {
   fdevent_handler_t type ;
   fdnode **fdarray ;
   size_t maxfds ;
   int in_sigio ;
   int signum ;
   sigset_t sigset ;
   siginfo_t siginfo ;
   bitset *sigbset ;
   int epoll_fd ;
   struct epoll_event *epoll_events ;
   struct pollfd *pollfds ;
   size_t size ;
   size_t used ;
   buffer_int unused ;
   fd_set select_read ;
   fd_set select_write ;
   fd_set select_error ;
   fd_set select_set_read ;
   fd_set select_set_write ;
   fd_set select_set_error ;
   int select_max_fd ;
   int (*reset)(struct fdevents *ev ) ;
   void (*free)(struct fdevents *ev ) ;
   int (*event_add)(struct fdevents *ev , int fde_ndx , int fd , int events ) ;
   int (*event_del)(struct fdevents *ev , int fde_ndx , int fd ) ;
   int (*event_get_revent)(struct fdevents *ev , size_t ndx ) ;
   int (*event_get_fd)(struct fdevents *ev , size_t ndx ) ;
   int (*event_next_fdndx)(struct fdevents *ev , int ndx ) ;
   int (*poll)(struct fdevents *ev , int timeout_ms ) ;
   int (*fcntl_set)(struct fdevents *ev , int fd ) ;
};
# 130 "fdevent.h"
typedef struct fdevents fdevents;
# 44 "/usr/include/bits/uio.h"
struct iovec {
   void *iov_base ;
   size_t iov_len ;
};
# 42 "/usr/include/bits/socket.h"
enum __socket_type {
    SOCK_STREAM = 1,
    SOCK_DGRAM = 2,
    SOCK_RAW = 3,
    SOCK_RDM = 4,
    SOCK_SEQPACKET = 5,
    SOCK_PACKET = 10
} ;
# 29 "/usr/include/bits/sockaddr.h"
typedef unsigned short sa_family_t;
# 146 "/usr/include/bits/socket.h"
struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};
# 163 "/usr/include/bits/socket.h"
struct sockaddr_storage {
   sa_family_t ss_family ;
   __uint32_t __ss_align ;
   char __ss_padding[128U - 2U * sizeof(__uint32_t )] ;
};
# 172 "/usr/include/bits/socket.h"
enum __anonenum_79 {
    MSG_OOB = 1,
    MSG_PEEK = 2,
    MSG_DONTROUTE = 4,
    MSG_CTRUNC = 8,
    MSG_PROXY = 16,
    MSG_TRUNC = 32,
    MSG_DONTWAIT = 64,
    MSG_EOR = 128,
    MSG_WAITALL = 256,
    MSG_FIN = 512,
    MSG_SYN = 1024,
    MSG_CONFIRM = 2048,
    MSG_RST = 4096,
    MSG_ERRQUEUE = 8192,
    MSG_NOSIGNAL = 16384,
    MSG_MORE = 32768
} ;
# 216 "/usr/include/bits/socket.h"
struct msghdr {
   void *msg_name ;
   socklen_t msg_namelen ;
   struct iovec *msg_iov ;
   size_t msg_iovlen ;
   void *msg_control ;
   size_t msg_controllen ;
   int msg_flags ;
};
# 234 "/usr/include/bits/socket.h"
struct cmsghdr {
   size_t cmsg_len ;
   int cmsg_level ;
   int cmsg_type ;
   unsigned char __cmsg_data[] ;
};
# 291 "/usr/include/bits/socket.h"
enum __anonenum_80 {
    SCM_RIGHTS = 1,
    SCM_CREDENTIALS = 2
} ;
# 303 "/usr/include/bits/socket.h"
struct ucred {
   pid_t pid ;
   uid_t uid ;
   gid_t gid ;
};
# 315 "/usr/include/bits/socket.h"
struct linger {
   int l_onoff ;
   int l_linger ;
};
# 40 "/usr/include/sys/socket.h"
struct osockaddr {
   unsigned short sa_family ;
   unsigned char sa_data[14] ;
};
# 49 "/usr/include/sys/socket.h"
enum __anonenum_81 {
    SHUT_RD = 0,
    SHUT_WR = 1,
    SHUT_RDWR = 2
} ;
# 28 "/usr/include/bits/ioctl-types.h"
struct winsize {
   unsigned short ws_row ;
   unsigned short ws_col ;
   unsigned short ws_xpixel ;
   unsigned short ws_ypixel ;
};
# 37 "/usr/include/bits/ioctl-types.h"
struct termio {
   unsigned short c_iflag ;
   unsigned short c_oflag ;
   unsigned short c_cflag ;
   unsigned short c_lflag ;
   unsigned char c_line ;
   unsigned char c_cc[8] ;
};
# 31 "/usr/include/netinet/in.h"
enum __anonenum_82 {
    IPPROTO_IP = 0,
    IPPROTO_HOPOPTS = 0,
    IPPROTO_ICMP = 1,
    IPPROTO_IGMP = 2,
    IPPROTO_IPIP = 4,
    IPPROTO_TCP = 6,
    IPPROTO_EGP = 8,
    IPPROTO_PUP = 12,
    IPPROTO_UDP = 17,
    IPPROTO_IDP = 22,
    IPPROTO_TP = 29,
    IPPROTO_IPV6 = 41,
    IPPROTO_ROUTING = 43,
    IPPROTO_FRAGMENT = 44,
    IPPROTO_RSVP = 46,
    IPPROTO_GRE = 47,
    IPPROTO_ESP = 50,
    IPPROTO_AH = 51,
    IPPROTO_ICMPV6 = 58,
    IPPROTO_NONE = 59,
    IPPROTO_DSTOPTS = 60,
    IPPROTO_MTP = 92,
    IPPROTO_ENCAP = 98,
    IPPROTO_PIM = 103,
    IPPROTO_COMP = 108,
    IPPROTO_SCTP = 132,
    IPPROTO_RAW = 255,
    IPPROTO_MAX = 256
} ;
# 92 "/usr/include/netinet/in.h"
typedef uint16_t in_port_t;
# 95 "/usr/include/netinet/in.h"
enum __anonenum_83 {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,
    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,
    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,
    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,
    IPPORT_RESERVED = 1024,
    IPPORT_USERRESERVED = 5000
} ;
# 136 "/usr/include/netinet/in.h"
typedef uint32_t in_addr_t;
# 137 "/usr/include/netinet/in.h"
struct in_addr {
   in_addr_t s_addr ;
};
# 193 "/usr/include/netinet/in.h"
union __anonunion_in6_u_84 {
   uint8_t u6_addr8[16] ;
   uint16_t u6_addr16[8] ;
   uint32_t u6_addr32[4] ;
};
# 193 "/usr/include/netinet/in.h"
struct in6_addr {
   union __anonunion_in6_u_84 in6_u ;
};
# 219 "/usr/include/netinet/in.h"
struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[((sizeof(struct sockaddr ) - sizeof(unsigned short )) - sizeof(in_port_t )) - sizeof(struct in_addr )] ;
};
# 233 "/usr/include/netinet/in.h"
struct sockaddr_in6 {
   sa_family_t sin6_family ;
   in_port_t sin6_port ;
   uint32_t sin6_flowinfo ;
   struct in6_addr sin6_addr ;
   uint32_t sin6_scope_id ;
};
# 244 "/usr/include/netinet/in.h"
struct ip_mreq {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_interface ;
};
# 253 "/usr/include/netinet/in.h"
struct ip_mreq_source {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_interface ;
   struct in_addr imr_sourceaddr ;
};
# 266 "/usr/include/netinet/in.h"
struct ipv6_mreq {
   struct in6_addr ipv6mr_multiaddr ;
   unsigned int ipv6mr_interface ;
};
# 277 "/usr/include/netinet/in.h"
struct group_req {
   uint32_t gr_interface ;
   struct sockaddr_storage gr_group ;
};
# 286 "/usr/include/netinet/in.h"
struct group_source_req {
   uint32_t gsr_interface ;
   struct sockaddr_storage gsr_group ;
   struct sockaddr_storage gsr_source ;
};
# 300 "/usr/include/netinet/in.h"
struct ip_msfilter {
   struct in_addr imsf_multiaddr ;
   struct in_addr imsf_interface ;
   uint32_t imsf_fmode ;
   uint32_t imsf_numsrc ;
   struct in_addr imsf_slist[1] ;
};
# 321 "/usr/include/netinet/in.h"
struct group_filter {
   uint32_t gf_interface ;
   struct sockaddr_storage gf_group ;
   uint32_t gf_fmode ;
   uint32_t gf_numsrc ;
   struct sockaddr_storage gf_slist[1] ;
};
# 82 "/usr/include/bits/in.h"
struct ip_opts {
   struct in_addr ip_dst ;
   char ip_opts[40] ;
};
# 89 "/usr/include/bits/in.h"
struct ip_mreqn {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_address ;
   int imr_ifindex ;
};
# 97 "/usr/include/bits/in.h"
struct in_pktinfo {
   int ipi_ifindex ;
   struct in_addr ipi_spec_dst ;
   struct in_addr ipi_addr ;
};
# 456 "/usr/include/netinet/in.h"
struct in6_pktinfo {
   struct in6_addr ipi6_addr ;
   unsigned int ipi6_ifindex ;
};
# 463 "/usr/include/netinet/in.h"
struct ip6_mtuinfo {
   struct sockaddr_in6 ip6m_addr ;
   uint32_t ip6m_mtu ;
};
# 90 "/usr/include/netinet/tcp.h"
struct tcphdr {
   u_int16_t source ;
   u_int16_t dest ;
   u_int32_t seq ;
   u_int32_t ack_seq ;
   u_int16_t res1 : 4 ;
   u_int16_t doff : 4 ;
   u_int16_t fin : 1 ;
   u_int16_t syn : 1 ;
   u_int16_t rst : 1 ;
   u_int16_t psh : 1 ;
   u_int16_t ack : 1 ;
   u_int16_t urg : 1 ;
   u_int16_t res2 : 2 ;
   u_int16_t window ;
   u_int16_t check ;
   u_int16_t urg_ptr ;
};
# 125 "/usr/include/netinet/tcp.h"
enum __anonenum_85 {
    TCP_ESTABLISHED = 1,
    TCP_SYN_SENT = 2,
    TCP_SYN_RECV = 3,
    TCP_FIN_WAIT1 = 4,
    TCP_FIN_WAIT2 = 5,
    TCP_TIME_WAIT = 6,
    TCP_CLOSE = 7,
    TCP_CLOSE_WAIT = 8,
    TCP_LAST_ACK = 9,
    TCP_LISTEN = 10,
    TCP_CLOSING = 11
} ;
# 177 "/usr/include/netinet/tcp.h"
enum tcp_ca_state {
    TCP_CA_Open = 0,
    TCP_CA_Disorder = 1,
    TCP_CA_CWR = 2,
    TCP_CA_Recovery = 3,
    TCP_CA_Loss = 4
} ;
# 186 "/usr/include/netinet/tcp.h"
struct tcp_info {
   u_int8_t tcpi_state ;
   u_int8_t tcpi_ca_state ;
   u_int8_t tcpi_retransmits ;
   u_int8_t tcpi_probes ;
   u_int8_t tcpi_backoff ;
   u_int8_t tcpi_options ;
   u_int8_t tcpi_snd_wscale : 4 ;
   u_int8_t tcpi_rcv_wscale : 4 ;
   u_int32_t tcpi_rto ;
   u_int32_t tcpi_ato ;
   u_int32_t tcpi_snd_mss ;
   u_int32_t tcpi_rcv_mss ;
   u_int32_t tcpi_unacked ;
   u_int32_t tcpi_sacked ;
   u_int32_t tcpi_lost ;
   u_int32_t tcpi_retrans ;
   u_int32_t tcpi_fackets ;
   u_int32_t tcpi_last_data_sent ;
   u_int32_t tcpi_last_ack_sent ;
   u_int32_t tcpi_last_data_recv ;
   u_int32_t tcpi_last_ack_recv ;
   u_int32_t tcpi_pmtu ;
   u_int32_t tcpi_rcv_ssthresh ;
   u_int32_t tcpi_rtt ;
   u_int32_t tcpi_rttvar ;
   u_int32_t tcpi_snd_ssthresh ;
   u_int32_t tcpi_snd_cwnd ;
   u_int32_t tcpi_advmss ;
   u_int32_t tcpi_reordering ;
};
# 30 "/usr/include/sys/un.h"
struct sockaddr_un {
   sa_family_t sun_family ;
   char sun_path[108] ;
};
# 46 "/usr/include/rpc/netdb.h"
struct rpcent {
   char *r_name ;
   char **r_aliases ;
   int r_number ;
};
# 27 "/usr/include/bits/netdb.h"
struct netent {
   char *n_name ;
   char **n_aliases ;
   int n_addrtype ;
   uint32_t n_net ;
};
# 96 "/usr/include/netdb.h"
struct hostent {
   char *h_name ;
   char **h_aliases ;
   int h_addrtype ;
   int h_length ;
   char **h_addr_list ;
};
# 251 "/usr/include/netdb.h"
struct servent {
   char *s_name ;
   char **s_aliases ;
   int s_port ;
   char *s_proto ;
};
# 321 "/usr/include/netdb.h"
struct protoent {
   char *p_name ;
   char **p_aliases ;
   int p_proto ;
};
# 538 "/usr/include/netdb.h"
struct addrinfo {
   int ai_flags ;
   int ai_family ;
   int ai_socktype ;
   int ai_protocol ;
   socklen_t ai_addrlen ;
   struct sockaddr *ai_addr ;
   char *ai_canonname ;
   struct addrinfo *ai_next ;
};
# 4 "splaytree.h"
struct tree_node {
   struct tree_node *left ;
   struct tree_node *right ;
   int key ;
   int size ;
   void *data ;
};
# 4 "splaytree.h"
typedef struct tree_node splay_tree;
# 10 "etag.h"
enum __anonenum_etag_flags_t_86 {
    ETAG_USE_INODE = 1,
    ETAG_USE_MTIME = 2,
    ETAG_USE_SIZE = 4
} ;
# 10 "etag.h"
typedef enum __anonenum_etag_flags_t_86 etag_flags_t;
# 84 "base.h"
enum __anonenum_config_values_type_t_87 {
    T_CONFIG_UNSET = 0,
    T_CONFIG_STRING = 1,
    T_CONFIG_SHORT = 2,
    T_CONFIG_BOOLEAN = 3,
    T_CONFIG_ARRAY = 4,
    T_CONFIG_LOCAL = 5,
    T_CONFIG_DEPRECATED = 6,
    T_CONFIG_UNSUPPORTED = 7
} ;
# 84 "base.h"
typedef enum __anonenum_config_values_type_t_87 config_values_type_t;
# 94 "base.h"
enum __anonenum_config_scope_type_t_88 {
    T_CONFIG_SCOPE_UNSET = 0,
    T_CONFIG_SCOPE_SERVER = 1,
    T_CONFIG_SCOPE_CONNECTION = 2
} ;
# 94 "base.h"
typedef enum __anonenum_config_scope_type_t_88 config_scope_type_t;
# 99 "base.h"
struct __anonstruct_config_values_t_89 {
   char const *key ;
   void *destination ;
   config_values_type_t type ;
   config_scope_type_t scope ;
};
# 99 "base.h"
typedef struct __anonstruct_config_values_t_89 config_values_t;
# 107 "base.h"
enum __anonenum_connection_type_90 {
    DIRECT = 0,
    EXTERNAL = 1
} ;
# 107 "base.h"
typedef enum __anonenum_connection_type_90 connection_type;
# 109 "base.h"
struct __anonstruct_request_handler_91 {
   char *key ;
   connection_type type ;
   char *value ;
};
# 109 "base.h"
typedef struct __anonstruct_request_handler_91 request_handler;
# 115 "base.h"
struct __anonstruct_fcgi_connections_92 {
   char *key ;
   char *host ;
   unsigned short port ;
   int used ;
   short factor ;
};
# 115 "base.h"
typedef struct __anonstruct_fcgi_connections_92 fcgi_connections;
# 124 "base.h"
union __anonunion_sock_addr_93 {
   struct sockaddr_in6 ipv6 ;
   struct sockaddr_in ipv4 ;
   struct sockaddr_un un ;
   struct sockaddr plain ;
};
# 124 "base.h"
typedef union __anonunion_sock_addr_93 sock_addr;
# 142 "base.h"
struct __anonstruct_request_94 {
   buffer *request ;
   buffer *uri ;
   buffer *orig_uri ;
   http_method_t http_method ;
   http_version_t http_version ;
   buffer *request_line ;
   buffer *http_host ;
   char const *http_range ;
   char const *http_content_type ;
   char const *http_if_modified_since ;
   char const *http_if_none_match ;
   array *headers ;
   size_t content_length ;
   int accept_encoding ;
   buffer *pathinfo ;
};
# 142 "base.h"
typedef struct __anonstruct_request_94 request;
# 174 "base.h"
enum __anonenum_transfer_encoding_96 {
    HTTP_TRANSFER_ENCODING_IDENTITY = 0,
    HTTP_TRANSFER_ENCODING_CHUNKED = 1
} ;
# 174 "base.h"
struct __anonstruct_response_95 {
   off_t content_length ;
   int keep_alive ;
   array *headers ;
   enum __anonenum_transfer_encoding_96 transfer_encoding ;
};
# 174 "base.h"
typedef struct __anonstruct_response_95 response;
# 185 "base.h"
struct __anonstruct_request_uri_97 {
   buffer *scheme ;
   buffer *authority ;
   buffer *path ;
   buffer *path_raw ;
   buffer *query ;
};
# 185 "base.h"
typedef struct __anonstruct_request_uri_97 request_uri;
# 193 "base.h"
struct __anonstruct_physical_98 {
   buffer *path ;
   buffer *basedir ;
   buffer *doc_root ;
   buffer *rel_path ;
   buffer *etag ;
};
# 193 "base.h"
typedef struct __anonstruct_physical_98 physical;
# 203 "base.h"
struct __anonstruct_stat_cache_entry_99 {
   buffer *name ;
   buffer *etag ;
   struct stat st ;
   time_t stat_ts ;
   char is_symlink ;
   buffer *content_type ;
};
# 203 "base.h"
typedef struct __anonstruct_stat_cache_entry_99 stat_cache_entry;
# 223 "base.h"
struct __anonstruct_stat_cache_100 {
   splay_tree *files ;
   buffer *dir_name ;
   buffer *hash_key ;
};
# 223 "base.h"
typedef struct __anonstruct_stat_cache_100 stat_cache;
# 236 "base.h"
struct __anonstruct_specific_config_101 {
   array *mimetypes ;
   buffer *document_root ;
   buffer *server_name ;
   buffer *error_handler ;
   buffer *server_tag ;
   buffer *dirlist_encoding ;
   buffer *errorfile_prefix ;
   unsigned short max_keep_alive_requests ;
   unsigned short max_keep_alive_idle ;
   unsigned short max_read_idle ;
   unsigned short max_write_idle ;
   unsigned short use_xattr ;
   unsigned short follow_symlink ;
   unsigned short range_requests ;
   unsigned short log_file_not_found ;
   unsigned short log_request_header ;
   unsigned short log_request_handling ;
   unsigned short log_response_header ;
   unsigned short log_condition_handling ;
   buffer *ssl_pemfile ;
   buffer *ssl_ca_file ;
   buffer *ssl_cipher_list ;
   unsigned short ssl_use_sslv2 ;
   unsigned short use_ipv6 ;
   unsigned short is_ssl ;
   unsigned short allow_http11 ;
   unsigned short etag_use_inode ;
   unsigned short etag_use_mtime ;
   unsigned short etag_use_size ;
   unsigned short force_lowercase_filenames ;
   unsigned short max_request_size ;
   unsigned short kbytes_per_second ;
   unsigned short global_kbytes_per_second ;
   off_t global_bytes_per_second_cnt ;
   off_t *global_bytes_per_second_cnt_ptr ;
};
# 236 "base.h"
typedef struct __anonstruct_specific_config_101 specific_config;
# 307 "base.h"
enum __anonenum_connection_state_t_102 {
    CON_STATE_CONNECT = 0,
    CON_STATE_REQUEST_START = 1,
    CON_STATE_READ = 2,
    CON_STATE_REQUEST_END = 3,
    CON_STATE_READ_POST = 4,
    CON_STATE_HANDLE_REQUEST = 5,
    CON_STATE_RESPONSE_START = 6,
    CON_STATE_WRITE = 7,
    CON_STATE_RESPONSE_END = 8,
    CON_STATE_ERROR = 9,
    CON_STATE_CLOSE = 10
} ;
# 307 "base.h"
typedef enum __anonenum_connection_state_t_102 connection_state_t;
# 321 "base.h"
enum __anonenum_cond_result_t_103 {
    COND_RESULT_UNSET = 0,
    COND_RESULT_FALSE = 1,
    COND_RESULT_TRUE = 2
} ;
# 321 "base.h"
typedef enum __anonenum_cond_result_t_103 cond_result_t;
# 322 "base.h"
struct __anonstruct_cond_cache_t_104 {
   cond_result_t result ;
   int patterncount ;
   int matches[30] ;
   buffer *comp_value ;
   comp_key_t comp_type ;
};
# 322 "base.h"
typedef struct __anonstruct_cond_cache_t_104 cond_cache_t;
# 331 "base.h"
struct __anonstruct_connection_105 {
   connection_state_t state ;
   time_t read_idle_ts ;
   time_t close_timeout_ts ;
   time_t write_request_ts ;
   time_t connection_start ;
   time_t request_start ;
   struct timeval start_tv ;
   size_t request_count ;
   size_t loops_per_request ;
   int fd ;
   int fde_ndx ;
   int ndx ;
   int is_readable ;
   int is_writable ;
   int keep_alive ;
   int file_started ;
   int file_finished ;
   chunkqueue *write_queue ;
   chunkqueue *read_queue ;
   chunkqueue *request_content_queue ;
   int traffic_limit_reached ;
   off_t bytes_written ;
   off_t bytes_written_cur_second ;
   off_t bytes_read ;
   off_t bytes_header ;
   int http_status ;
   sock_addr dst_addr ;
   buffer *dst_addr_buf ;
   buffer *parse_request ;
   unsigned int parsed_response ;
   request request ;
   request_uri uri ;
   physical physical ;
   response response ;
   size_t header_len ;
   buffer *authed_user ;
   array *environment ;
   int got_response ;
   int in_joblist ;
   connection_type mode ;
   void **plugin_ctx ;
   specific_config conf ;
   cond_cache_t *cond_cache ;
   buffer *server_name ;
   buffer *error_handler ;
   int error_handler_saved_status ;
   int in_error_handler ;
   void *srv_socket ;
   etag_flags_t etag_flags ;
   int conditional_is_valid[9] ;
};
# 331 "base.h"
typedef struct __anonstruct_connection_105 connection;
# 425 "base.h"
struct __anonstruct_connections_106 {
   connection **ptr ;
   size_t size ;
   size_t used ;
};
# 425 "base.h"
typedef struct __anonstruct_connections_106 connections;
# 433 "base.h"
union __anonunion_addr_108 {
   struct in6_addr ipv6 ;
   struct in_addr ipv4 ;
};
# 433 "base.h"
struct __anonstruct_inet_ntop_cache_type_107 {
   int family ;
   union __anonunion_addr_108 addr ;
   char b2[47] ;
   time_t ts ;
};
# 433 "base.h"
typedef struct __anonstruct_inet_ntop_cache_type_107 inet_ntop_cache_type;
# 445 "base.h"
struct __anonstruct_realpath_cache_type_109 {
   buffer *uri ;
   time_t mtime ;
   int http_status ;
};
# 445 "base.h"
typedef struct __anonstruct_realpath_cache_type_109 realpath_cache_type;
# 451 "base.h"
struct __anonstruct_mtime_cache_type_110 {
   time_t mtime ;
   buffer *str ;
};
# 451 "base.h"
typedef struct __anonstruct_mtime_cache_type_110 mtime_cache_type;
# 456 "base.h"
struct __anonstruct_buffer_plugin_111 {
   void *ptr ;
   size_t used ;
   size_t size ;
};
# 456 "base.h"
typedef struct __anonstruct_buffer_plugin_111 buffer_plugin;
# 462 "base.h"
enum __anonenum_stat_cache_engine_113 {
    STAT_CACHE_ENGINE_UNSET = 0,
    STAT_CACHE_ENGINE_NONE = 1,
    STAT_CACHE_ENGINE_SIMPLE = 2
} ;
# 462 "base.h"
struct __anonstruct_server_config_112 {
   unsigned short port ;
   buffer *bindhost ;
   buffer *errorlog_file ;
   unsigned short errorlog_use_syslog ;
   unsigned short dont_daemonize ;
   buffer *changeroot ;
   buffer *username ;
   buffer *groupname ;
   buffer *pid_file ;
   buffer *event_handler ;
   buffer *modules_dir ;
   buffer *network_backend ;
   array *modules ;
   array *upload_tempdirs ;
   unsigned short max_worker ;
   unsigned short max_fds ;
   unsigned short max_conns ;
   unsigned short max_request_size ;
   unsigned short log_request_header_on_error ;
   unsigned short log_state_handling ;
   enum __anonenum_stat_cache_engine_113 stat_cache_engine ;
   unsigned short enable_cores ;
};
# 462 "base.h"
typedef struct __anonstruct_server_config_112 server_config;
# 501 "base.h"
struct __anonstruct_server_socket_114 {
   sock_addr addr ;
   int fd ;
   int fde_ndx ;
   buffer *ssl_pemfile ;
   buffer *ssl_ca_file ;
   buffer *ssl_cipher_list ;
   unsigned short ssl_use_sslv2 ;
   unsigned short use_ipv6 ;
   unsigned short is_ssl ;
   buffer *srv_token ;
};
# 501 "base.h"
typedef struct __anonstruct_server_socket_114 server_socket;
# 520 "base.h"
struct __anonstruct_server_socket_array_115 {
   server_socket **ptr ;
   size_t size ;
   size_t used ;
};
# 520 "base.h"
typedef struct __anonstruct_server_socket_array_115 server_socket_array;
# 527 "base.h"
enum __anonenum_errorlog_mode_116 {
    ERRORLOG_STDERR = 0,
    ERRORLOG_FILE = 1,
    ERRORLOG_SYSLOG = 2
} ;
# 527 "base.h"
struct server {
   server_socket_array srv_sockets ;
   int errorlog_fd ;
   enum __anonenum_errorlog_mode_116 errorlog_mode ;
   buffer *errorlog_buf ;
   fdevents *ev ;
   fdevents *ev_ins ;
   buffer_plugin plugins ;
   void *plugin_slots ;
   int con_opened ;
   int con_read ;
   int con_written ;
   int con_closed ;
   int ssl_is_init ;
   int max_fds ;
   int cur_fds ;
   int want_fds ;
   int sockets_disabled ;
   size_t max_conns ;
   buffer *parse_full_path ;
   buffer *response_header ;
   buffer *response_range ;
   buffer *tmp_buf ;
   buffer *tmp_chunk_len ;
   buffer *empty_string ;
   buffer *cond_check_buf ;
   inet_ntop_cache_type inet_ntop_cache[4] ;
   mtime_cache_type mtime_cache[16] ;
   array *split_vals ;
   time_t cur_ts ;
   time_t last_generated_date_ts ;
   time_t last_generated_debug_ts ;
   time_t startup_ts ;
   buffer *ts_debug_str ;
   buffer *ts_date_str ;
   array *config ;
   array *config_touched ;
   array *config_context ;
   specific_config **config_storage ;
   server_config srvconf ;
   short config_deprecated ;
   short config_unsupported ;
   connections *conns ;
   connections *joblist ;
   connections *fdwaitqueue ;
   stat_cache *stat_cache ;
   array *status ;
   fdevent_handler_t event_handler ;
   int (*network_backend_write)(struct server *srv , connection *con , int fd , chunkqueue *cq ) ;
   int (*network_backend_read)(struct server *srv , connection *con , int fd , chunkqueue *cq ) ;
   uid_t uid ;
   gid_t gid ;
};
# 527 "base.h"
typedef struct server server;
# 6 "server.h"
struct __anonstruct_two_strings_117 {
   char *key ;
   char *value ;
};
# 6 "server.h"
typedef struct __anonstruct_two_strings_117 two_strings;
# 11 "server.h"
enum __anonenum_config_var_t_118 {
    CONFIG_UNSET = 0,
    CONFIG_DOCUMENT_ROOT = 1
} ;
# 11 "server.h"
typedef enum __anonenum_config_var_t_118 config_var_t;
# 61 "/usr/include/time.h"
typedef __clock_t clock_t;
# 134 "/usr/include/time.h"
struct tm {
   int tm_sec ;
   int tm_min ;
   int tm_hour ;
   int tm_mday ;
   int tm_mon ;
   int tm_year ;
   int tm_wday ;
   int tm_yday ;
   int tm_isdst ;
   long tm_gmtoff ;
   char const *tm_zone ;
};
# 162 "/usr/include/time.h"
struct itimerspec {
   struct timespec it_interval ;
   struct timespec it_value ;
};
# 169 "/usr/include/time.h"
struct sigevent;
# 29 "plugin.h"
struct __anonstruct_plugin_119 {
   size_t version ;
   buffer *name ;
   void *(*init)() ;
   handler_t (*set_defaults)(server *srv , void *p_d ) ;
   handler_t (*cleanup)(server *srv , void *p_d ) ;
   handler_t (*handle_trigger)(server *srv , void *p_d ) ;
   handler_t (*handle_sighup)(server *srv , void *p_d ) ;
   handler_t (*handle_uri_raw)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_uri_clean)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_docroot)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_physical)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_request_done)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_connection_close)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_joblist)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_subrequest_start)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_subrequest)(server *srv , connection *con , void *p_d ) ;
   handler_t (*connection_reset)(server *srv , connection *con , void *p_d ) ;
   void *data ;
   void *lib ;
};
# 29 "plugin.h"
typedef struct __anonstruct_plugin_119 plugin;
# 23 "fastcgi.h"
struct __anonstruct_FCGI_Header_120 {
   unsigned char version ;
   unsigned char type ;
   unsigned char requestIdB1 ;
   unsigned char requestIdB0 ;
   unsigned char contentLengthB1 ;
   unsigned char contentLengthB0 ;
   unsigned char paddingLength ;
   unsigned char reserved ;
};
# 23 "fastcgi.h"
typedef struct __anonstruct_FCGI_Header_120 FCGI_Header;
# 69 "fastcgi.h"
struct __anonstruct_FCGI_BeginRequestBody_121 {
   unsigned char roleB1 ;
   unsigned char roleB0 ;
   unsigned char flags ;
   unsigned char reserved[5] ;
};
# 69 "fastcgi.h"
typedef struct __anonstruct_FCGI_BeginRequestBody_121 FCGI_BeginRequestBody;
# 76 "fastcgi.h"
struct __anonstruct_FCGI_BeginRequestRecord_122 {
   FCGI_Header header ;
   FCGI_BeginRequestBody body ;
};
# 76 "fastcgi.h"
typedef struct __anonstruct_FCGI_BeginRequestRecord_122 FCGI_BeginRequestRecord;
# 94 "fastcgi.h"
struct __anonstruct_FCGI_EndRequestBody_123 {
   unsigned char appStatusB3 ;
   unsigned char appStatusB2 ;
   unsigned char appStatusB1 ;
   unsigned char appStatusB0 ;
   unsigned char protocolStatus ;
   unsigned char reserved[3] ;
};
# 94 "fastcgi.h"
typedef struct __anonstruct_FCGI_EndRequestBody_123 FCGI_EndRequestBody;
# 103 "fastcgi.h"
struct __anonstruct_FCGI_EndRequestRecord_124 {
   FCGI_Header header ;
   FCGI_EndRequestBody body ;
};
# 103 "fastcgi.h"
typedef struct __anonstruct_FCGI_EndRequestRecord_124 FCGI_EndRequestRecord;
# 125 "fastcgi.h"
struct __anonstruct_FCGI_UnknownTypeBody_125 {
   unsigned char type ;
   unsigned char reserved[7] ;
};
# 125 "fastcgi.h"
typedef struct __anonstruct_FCGI_UnknownTypeBody_125 FCGI_UnknownTypeBody;
# 130 "fastcgi.h"
struct __anonstruct_FCGI_UnknownTypeRecord_126 {
   FCGI_Header header ;
   FCGI_UnknownTypeBody body ;
};
# 130 "fastcgi.h"
typedef struct __anonstruct_FCGI_UnknownTypeRecord_126 FCGI_UnknownTypeRecord;
# 45 "/usr/include/stdio.h"
struct _IO_FILE;
# 45 "/usr/include/stdio.h"
struct _IO_FILE;
# 49 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
# 65 "/usr/include/stdio.h"
typedef struct _IO_FILE __FILE;
# 355 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stddef.h"
typedef unsigned int wint_t;
# 76 "/usr/include/wchar.h"
union __anonunion___value_128 {
   wint_t __wch ;
   char __wchb[4] ;
};
# 76 "/usr/include/wchar.h"
struct __anonstruct___mbstate_t_127 {
   int __count ;
   union __anonunion___value_128 __value ;
};
# 76 "/usr/include/wchar.h"
typedef struct __anonstruct___mbstate_t_127 __mbstate_t;
# 26 "/usr/include/_G_config.h"
struct __anonstruct__G_fpos_t_129 {
   __off_t __pos ;
   __mbstate_t __state ;
};
# 26 "/usr/include/_G_config.h"
typedef struct __anonstruct__G_fpos_t_129 _G_fpos_t;
# 31 "/usr/include/_G_config.h"
struct __anonstruct__G_fpos64_t_130 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
# 31 "/usr/include/_G_config.h"
typedef struct __anonstruct__G_fpos64_t_130 _G_fpos64_t;
# 37 "/usr/include/gconv.h"
enum __anonenum_131 {
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
# 55 "/usr/include/gconv.h"
enum __anonenum_132 {
    __GCONV_IS_LAST = 1,
    __GCONV_IGNORE_ERRORS = 2
} ;
# 63 "/usr/include/gconv.h"
struct __gconv_step;
# 63 "/usr/include/gconv.h"
struct __gconv_step;
# 64 "/usr/include/gconv.h"
struct __gconv_step_data;
# 64 "/usr/include/gconv.h"
struct __gconv_step_data;
# 65 "/usr/include/gconv.h"
struct __gconv_loaded_object;
# 65 "/usr/include/gconv.h"
struct __gconv_loaded_object;
# 66 "/usr/include/gconv.h"
struct __gconv_trans_data;
# 66 "/usr/include/gconv.h"
struct __gconv_trans_data;
# 70 "/usr/include/gconv.h"
typedef int (*__gconv_fct)(struct __gconv_step * , struct __gconv_step_data * , unsigned char const ** ,
                           unsigned char const * , unsigned char ** , size_t * ,
                           int , int );
# 75 "/usr/include/gconv.h"
typedef wint_t (*__gconv_btowc_fct)(struct __gconv_step * , unsigned char );
# 78 "/usr/include/gconv.h"
typedef int (*__gconv_init_fct)(struct __gconv_step * );
# 79 "/usr/include/gconv.h"
typedef void (*__gconv_end_fct)(struct __gconv_step * );
# 83 "/usr/include/gconv.h"
typedef int (*__gconv_trans_fct)(struct __gconv_step * , struct __gconv_step_data * ,
                                 void * , unsigned char const * , unsigned char const ** ,
                                 unsigned char const * , unsigned char ** , size_t * );
# 91 "/usr/include/gconv.h"
typedef int (*__gconv_trans_context_fct)(void * , unsigned char const * , unsigned char const * ,
                                         unsigned char * , unsigned char * );
# 96 "/usr/include/gconv.h"
typedef int (*__gconv_trans_query_fct)(char const * , char const *** , size_t * );
# 100 "/usr/include/gconv.h"
typedef int (*__gconv_trans_init_fct)(void ** , char const * );
# 101 "/usr/include/gconv.h"
typedef void (*__gconv_trans_end_fct)(void * );
# 103 "/usr/include/gconv.h"
struct __gconv_trans_data {
   int (*__trans_fct)(struct __gconv_step * , struct __gconv_step_data * , void * ,
                      unsigned char const * , unsigned char const ** , unsigned char const * ,
                      unsigned char ** , size_t * ) ;
   int (*__trans_context_fct)(void * , unsigned char const * , unsigned char const * ,
                              unsigned char * , unsigned char * ) ;
   void (*__trans_end_fct)(void * ) ;
   void *__data ;
   struct __gconv_trans_data *__next ;
};
# 115 "/usr/include/gconv.h"
struct __gconv_step {
   struct __gconv_loaded_object *__shlib_handle ;
   char const *__modname ;
   int __counter ;
   char *__from_name ;
   char *__to_name ;
   int (*__fct)(struct __gconv_step * , struct __gconv_step_data * , unsigned char const ** ,
                unsigned char const * , unsigned char ** , size_t * , int , int ) ;
   wint_t (*__btowc_fct)(struct __gconv_step * , unsigned char ) ;
   int (*__init_fct)(struct __gconv_step * ) ;
   void (*__end_fct)(struct __gconv_step * ) ;
   int __min_needed_from ;
   int __max_needed_from ;
   int __min_needed_to ;
   int __max_needed_to ;
   int __stateful ;
   void *__data ;
};
# 145 "/usr/include/gconv.h"
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
# 172 "/usr/include/gconv.h"
struct __gconv_info {
   size_t __nsteps ;
   struct __gconv_step *__steps ;
   struct __gconv_step_data __data[] ;
};
# 172 "/usr/include/gconv.h"
typedef struct __gconv_info *__gconv_t;
# 45 "/usr/include/_G_config.h"
struct __anonstruct___combined_134 {
   struct __gconv_info __cd ;
   struct __gconv_step_data __data ;
};
# 45 "/usr/include/_G_config.h"
union __anonunion__G_iconv_t_133 {
   struct __gconv_info __cd ;
   struct __anonstruct___combined_134 __combined ;
};
# 45 "/usr/include/_G_config.h"
typedef union __anonunion__G_iconv_t_133 _G_iconv_t;
# 55 "/usr/include/_G_config.h"
typedef short _G_int16_t;
# 56 "/usr/include/_G_config.h"
typedef int _G_int32_t;
# 57 "/usr/include/_G_config.h"
typedef unsigned short _G_uint16_t;
# 58 "/usr/include/_G_config.h"
typedef unsigned int _G_uint32_t;
# 43 "/usr/lib/gcc/i386-redhat-linux/4.1.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
# 167 "/usr/include/libio.h"
struct _IO_jump_t;
# 167 "/usr/include/libio.h"
struct _IO_jump_t;
# 167 "/usr/include/libio.h"
struct _IO_FILE;
# 177 "/usr/include/libio.h"
typedef void _IO_lock_t;
# 183 "/usr/include/libio.h"
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
# 203 "/usr/include/libio.h"
enum __codecvt_result {
    __codecvt_ok = 0,
    __codecvt_partial = 1,
    __codecvt_error = 2,
    __codecvt_noconv = 3
} ;
# 268 "/usr/include/libio.h"
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
   char _unused2[(15U * sizeof(int ) - 4U * sizeof(void *)) - sizeof(size_t )] ;
};
# 338 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE;
# 341 "/usr/include/libio.h"
struct _IO_FILE_plus;
# 341 "/usr/include/libio.h"
struct _IO_FILE_plus;
# 361 "/usr/include/libio.h"
typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );
# 369 "/usr/include/libio.h"
typedef __ssize_t __io_write_fn(void *__cookie , char const *__buf , size_t __n );
# 378 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );
# 381 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie );
# 93 "/usr/include/stdio.h"
typedef _G_fpos64_t fpos_t;
# 33 "/usr/include/bits/resource.h"
enum __rlimit_resource {
    RLIMIT_CPU = 0,
    RLIMIT_FSIZE = 1,
    RLIMIT_DATA = 2,
    RLIMIT_STACK = 3,
    RLIMIT_CORE = 4,
    __RLIMIT_RSS = 5,
    RLIMIT_NOFILE = 7,
    __RLIMIT_OFILE = 7,
    RLIMIT_AS = 9,
    __RLIMIT_NPROC = 6,
    __RLIMIT_MEMLOCK = 8,
    __RLIMIT_LOCKS = 10,
    __RLIMIT_SIGPENDING = 11,
    __RLIMIT_MSGQUEUE = 12,
    __RLIMIT_NICE = 13,
    __RLIMIT_RTPRIO = 14,
    __RLIMIT_NLIMITS = 15,
    __RLIM_NLIMITS = 15
} ;
# 129 "/usr/include/bits/resource.h"
typedef __rlim64_t rlim_t;
# 135 "/usr/include/bits/resource.h"
struct rlimit {
   rlim_t rlim_cur ;
   rlim_t rlim_max ;
};
# 154 "/usr/include/bits/resource.h"
enum __rusage_who {
    RUSAGE_SELF = 0,
    RUSAGE_CHILDREN = -1
} ;
# 169 "/usr/include/bits/resource.h"
struct rusage {
   struct timeval ru_utime ;
   struct timeval ru_stime ;
   long ru_maxrss ;
   long ru_ixrss ;
   long ru_idrss ;
   long ru_isrss ;
   long ru_minflt ;
   long ru_majflt ;
   long ru_nswap ;
   long ru_inblock ;
   long ru_oublock ;
   long ru_msgsnd ;
   long ru_msgrcv ;
   long ru_nsignals ;
   long ru_nvcsw ;
   long ru_nivcsw ;
};
# 217 "/usr/include/bits/resource.h"
enum __priority_which {
    PRIO_PROCESS = 0,
    PRIO_PGRP = 1,
    PRIO_USER = 2
} ;
# 43 "/usr/include/sys/resource.h"
typedef int __rlimit_resource_t;
# 44 "/usr/include/sys/resource.h"
typedef int __rusage_who_t;
# 45 "/usr/include/sys/resource.h"
typedef int __priority_which_t;
# 63 "/usr/include/sys/wait.h"
union wait;
# 63 "/usr/include/sys/wait.h"
union __anonunion___WAIT_STATUS_135 {
   union wait *__uptr ;
   int *__iptr ;
};
# 63 "/usr/include/sys/wait.h"
typedef union __anonunion___WAIT_STATUS_135 __attribute__((__transparent_union__)) __WAIT_STATUS;
# 67 "/usr/include/bits/waitstatus.h"
struct __anonstruct___wait_terminated_136 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int : 16 ;
};
# 67 "/usr/include/bits/waitstatus.h"
struct __anonstruct___wait_stopped_137 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int : 16 ;
};
# 67 "/usr/include/bits/waitstatus.h"
union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_136 __wait_terminated ;
   struct __anonstruct___wait_stopped_137 __wait_stopped ;
};
# 102 "/usr/include/sys/wait.h"
enum __anonenum_idtype_t_138 {
    P_ALL = 0,
    P_PID = 1,
    P_PGID = 2
} ;
# 102 "/usr/include/sys/wait.h"
typedef enum __anonenum_idtype_t_138 idtype_t;
# 162 "/usr/include/sys/wait.h"
struct rusage;
# 62 "mod_fastcgi.c"
enum __anonenum_state_139 {
    PROC_STATE_UNSET = 0,
    PROC_STATE_RUNNING = 1,
    PROC_STATE_OVERLOADED = 2,
    PROC_STATE_DIED_WAIT_FOR_PID = 3,
    PROC_STATE_DIED = 4,
    PROC_STATE_KILLED = 5
} ;
# 62 "mod_fastcgi.c"
struct fcgi_proc {
   size_t id ;
   buffer *unixsocket ;
   unsigned int port ;
   buffer *connection_name ;
   pid_t pid ;
   size_t load ;
   time_t last_used ;
   size_t requests ;
   struct fcgi_proc *prev ;
   struct fcgi_proc *next ;
   time_t disabled_until ;
   int is_local ;
   enum __anonenum_state_139 state ;
};
# 62 "mod_fastcgi.c"
typedef struct fcgi_proc fcgi_proc;
# 93 "mod_fastcgi.c"
struct __anonstruct_fcgi_extension_host_140 {
   buffer *id ;
   fcgi_proc *first ;
   fcgi_proc *unused_procs ;
   unsigned short min_procs ;
   unsigned short max_procs ;
   size_t num_procs ;
   size_t active_procs ;
   unsigned short max_load_per_proc ;
   unsigned short idle_timeout ;
   unsigned short disable_time ;
   size_t max_requests_per_proc ;
   buffer *host ;
   unsigned short port ;
   buffer *unixsocket ;
   buffer *bin_path ;
   array *bin_env ;
   array *bin_env_copy ;
   buffer *docroot ;
   unsigned short mode ;
   unsigned short check_local ;
   unsigned short break_scriptfilename_for_php ;
   unsigned short allow_xsendfile ;
   ssize_t load ;
   size_t max_id ;
   buffer *strip_request_uri ;
   unsigned short kill_signal ;
};
# 93 "mod_fastcgi.c"
typedef struct __anonstruct_fcgi_extension_host_140 fcgi_extension_host;
# 274 "mod_fastcgi.c"
struct __anonstruct_fcgi_extension_141 {
   buffer *key ;
   int note_is_sent ;
   int last_used_ndx ;
   fcgi_extension_host **hosts ;
   size_t used ;
   size_t size ;
};
# 274 "mod_fastcgi.c"
typedef struct __anonstruct_fcgi_extension_141 fcgi_extension;
# 286 "mod_fastcgi.c"
struct __anonstruct_fcgi_exts_142 {
   fcgi_extension **exts ;
   size_t used ;
   size_t size ;
};
# 286 "mod_fastcgi.c"
typedef struct __anonstruct_fcgi_exts_142 fcgi_exts;
# 294 "mod_fastcgi.c"
struct __anonstruct_plugin_config_143 {
   fcgi_exts *exts ;
   array *ext_mapping ;
   int debug ;
};
# 294 "mod_fastcgi.c"
typedef struct __anonstruct_plugin_config_143 plugin_config;
# 302 "mod_fastcgi.c"
struct __anonstruct_buffer_uint_144 {
   size_t *ptr ;
   size_t used ;
   size_t size ;
};
# 302 "mod_fastcgi.c"
typedef struct __anonstruct_buffer_uint_144 buffer_uint;
# 308 "mod_fastcgi.c"
struct __anonstruct_char_array_145 {
   char **ptr ;
   size_t size ;
   size_t used ;
};
# 308 "mod_fastcgi.c"
typedef struct __anonstruct_char_array_145 char_array;
# 316 "mod_fastcgi.c"
struct __anonstruct_plugin_data_146 {
   size_t id ;
   buffer_uint fcgi_request_id ;
   buffer *fcgi_env ;
   buffer *path ;
   buffer *parse_response ;
   buffer *statuskey ;
   plugin_config **config_storage ;
   plugin_config conf ;
};
# 316 "mod_fastcgi.c"
typedef struct __anonstruct_plugin_data_146 plugin_data;
# 333 "mod_fastcgi.c"
enum __anonenum_fcgi_connection_state_t_147 {
    FCGI_STATE_UNSET = 0,
    FCGI_STATE_INIT = 1,
    FCGI_STATE_CONNECT_DELAYED = 2,
    FCGI_STATE_PREPARE_WRITE = 3,
    FCGI_STATE_WRITE = 4,
    FCGI_STATE_READ = 5
} ;
# 333 "mod_fastcgi.c"
typedef enum __anonenum_fcgi_connection_state_t_147 fcgi_connection_state_t;
# 342 "mod_fastcgi.c"
struct __anonstruct_handler_ctx_148 {
   fcgi_proc *proc ;
   fcgi_extension_host *host ;
   fcgi_extension *ext ;
   fcgi_connection_state_t state ;
   time_t state_timestamp ;
   int reconnects ;
   chunkqueue *rb ;
   chunkqueue *wb ;
   buffer *response_header ;
   size_t request_id ;
   int fd ;
   int fde_ndx ;
   pid_t pid ;
   int got_proc ;
   int send_content_body ;
   plugin_config conf ;
   connection *remote_conn ;
   plugin_data *plugin_data ;
};
# 342 "mod_fastcgi.c"
typedef struct __anonstruct_handler_ctx_148 handler_ctx;
# 1023 "mod_fastcgi.c"
union __anonunion_149 {
   int __in ;
   int __i ;
};
# 1033 "mod_fastcgi.c"
union __anonunion_150 {
   int __in ;
   int __i ;
};
# 1037 "mod_fastcgi.c"
union __anonunion_151 {
   int __in ;
   int __i ;
};
# 1032 "mod_fastcgi.c"
union __anonunion_152 {
   int __in ;
   int __i ;
};
# 1022 "mod_fastcgi.c"
union __anonunion_153 {
   int __in ;
   int __i ;
};
# 1622 "mod_fastcgi.c"
enum __anonenum_connection_result_t_154 {
    CONNECTION_UNSET = 0,
    CONNECTION_OK = 1,
    CONNECTION_DELAYED = 2,
    CONNECTION_OVERLOADED = 3,
    CONNECTION_DEAD = 4
} ;
# 1622 "mod_fastcgi.c"
typedef enum __anonenum_connection_result_t_154 connection_result_t;
# 2287 "mod_fastcgi.c"
struct __anonstruct_fastcgi_response_packet_155 {
   buffer *b ;
   size_t len ;
   int type ;
   int padding ;
   size_t request_id ;
};
# 2287 "mod_fastcgi.c"
typedef struct __anonstruct_fastcgi_response_packet_155 fastcgi_response_packet;
# 2637 "mod_fastcgi.c"
union __anonunion_156 {
   int __in ;
   int __i ;
};
# 2636 "mod_fastcgi.c"
union __anonunion_157 {
   int __in ;
   int __i ;
};
# 2630 "mod_fastcgi.c"
union __anonunion_158 {
   int __in ;
   int __i ;
};
# 3188 "mod_fastcgi.c"
union __anonunion_159 {
   int __in ;
   int __i ;
};
# 3192 "mod_fastcgi.c"
union __anonunion_160 {
   int __in ;
   int __i ;
};
# 3191 "mod_fastcgi.c"
union __anonunion_161 {
   int __in ;
   int __i ;
};
# 3187 "mod_fastcgi.c"
union __anonunion_162 {
   int __in ;
   int __i ;
};
# 3785 "mod_fastcgi.c"
union __anonunion_163 {
   int __in ;
   int __i ;
};
# 3791 "mod_fastcgi.c"
union __anonunion_164 {
   int __in ;
   int __i ;
};
# 3790 "mod_fastcgi.c"
union __anonunion_165 {
   int __in ;
   int __i ;
};
# 3789 "mod_fastcgi.c"
union __anonunion_166 {
   int __in ;
   int __i ;
};
# 3783 "mod_fastcgi.c"
union __anonunion_167 {
   int __in ;
   int __i ;
};
# 109 "/usr/include/sys/select.h"
extern int select(int __nfds , fd_set * __restrict __readfds , fd_set * __restrict __writefds ,
                  fd_set * __restrict __exceptfds , struct timeval * __restrict __timeout ) ;
# 121 "/usr/include/sys/select.h"
extern int pselect(int __nfds , fd_set * __restrict __readfds , fd_set * __restrict __writefds ,
                   fd_set * __restrict __exceptfds , struct timespec const * __restrict __timeout ,
                   __sigset_t const * __restrict __sigmask ) ;
# 31 "/usr/include/sys/sysmacros.h"
__inline static __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
# 34 "/usr/include/sys/sysmacros.h"
__inline static __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
# 37 "/usr/include/sys/sysmacros.h"
__inline static __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
# 42 "/usr/include/sys/sysmacros.h"
__inline static __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
# 42 "/usr/include/sys/sysmacros.h"
__inline static unsigned int gnu_dev_major(unsigned long long __dev )
{

  {
# 45 "/usr/include/sys/sysmacros.h"
  return ((unsigned int )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
# 48 "/usr/include/sys/sysmacros.h"
__inline static __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
# 48 "/usr/include/sys/sysmacros.h"
__inline static unsigned int gnu_dev_minor(unsigned long long __dev )
{

  {
# 51 "/usr/include/sys/sysmacros.h"
  return ((unsigned int )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
# 54 "/usr/include/sys/sysmacros.h"
__inline static __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
# 54 "/usr/include/sys/sysmacros.h"
__inline static unsigned long long gnu_dev_makedev(unsigned int __major , unsigned int __minor )
{

  {
# 57 "/usr/include/sys/sysmacros.h"
  return (((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32));
}
}
# 258 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int access(char const *__name , int __type ) __attribute__((__nonnull__(1))) ;
# 304 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __off64_t lseek(int __fd , __off64_t __offset ,
                                                     int __whence ) __asm__("lseek64") ;
# 320 "/usr/include/unistd.h"
extern int close(int __fd ) ;
# 327 "/usr/include/unistd.h"
extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;
# 333 "/usr/include/unistd.h"
extern ssize_t write(int __fd , void const *__buf , size_t __n ) ;
# 384 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int pipe(int *__pipedes ) ;
# 393 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) unsigned int alarm(unsigned int __seconds ) ;
# 405 "/usr/include/unistd.h"
extern unsigned int sleep(unsigned int __seconds ) ;
# 412 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __useconds_t ualarm(__useconds_t __value , __useconds_t __interval ) ;
# 420 "/usr/include/unistd.h"
extern int usleep(__useconds_t __useconds ) ;
# 429 "/usr/include/unistd.h"
extern int pause(void) ;
# 433 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int chown(char const *__file , __uid_t __owner ,
                                               __gid_t __group ) __attribute__((__nonnull__(1))) ;
# 438 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int fchown(int __fd , __uid_t __owner , __gid_t __group ) ;
# 443 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int lchown(char const *__file , __uid_t __owner ,
                                                __gid_t __group ) __attribute__((__nonnull__(1))) ;
# 457 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int chdir(char const *__path ) __attribute__((__nonnull__(1))) ;
# 461 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int fchdir(int __fd ) ;
# 471 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) char *getcwd(char *__buf , size_t __size ) ;
# 484 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) char *getwd(char *__buf ) __attribute__((__nonnull__(1),
__deprecated__)) ;
# 490 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int dup(int __fd ) ;
# 493 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int dup2(int __fd , int __fd2 ) ;
# 496 "/usr/include/unistd.h"
extern char **__environ ;
# 504 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int execve(char const *__path , char * const *__argv ,
                                                char * const *__envp ) __attribute__((__nonnull__(1))) ;
# 516 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int execv(char const *__path , char * const *__argv ) __attribute__((__nonnull__(1))) ;
# 521 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int execle(char const *__path , char const *__arg
                                                , ...) __attribute__((__nonnull__(1))) ;
# 526 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int execl(char const *__path , char const *__arg
                                               , ...) __attribute__((__nonnull__(1))) ;
# 531 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int execvp(char const *__file , char * const *__argv ) __attribute__((__nonnull__(1))) ;
# 537 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int execlp(char const *__file , char const *__arg
                                                , ...) __attribute__((__nonnull__(1))) ;
# 543 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int nice(int __inc ) ;
# 548 "/usr/include/unistd.h"
extern __attribute__((__noreturn__)) void _exit(int __status ) ;
# 557 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) long pathconf(char const *__path , int __name ) __attribute__((__nonnull__(1))) ;
# 561 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) long fpathconf(int __fd , int __name ) ;
# 564 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) long sysconf(int __name ) ;
# 568 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) size_t confstr(int __name , char *__buf , size_t __len ) ;
# 573 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __pid_t getpid(void) ;
# 576 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __pid_t getppid(void) ;
# 581 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __pid_t getpgrp(void) ;
# 591 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __pid_t __getpgid(__pid_t __pid ) ;
# 600 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int setpgid(__pid_t __pid , __pid_t __pgid ) ;
# 617 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int setpgrp(void) ;
# 634 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __pid_t setsid(void) ;
# 642 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __uid_t getuid(void) ;
# 645 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __uid_t geteuid(void) ;
# 648 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __gid_t getgid(void) ;
# 651 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __gid_t getegid(void) ;
# 656 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int getgroups(int __size , __gid_t *__list ) ;
# 667 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int setuid(__uid_t __uid ) ;
# 672 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int setreuid(__uid_t __ruid , __uid_t __euid ) ;
# 677 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int seteuid(__uid_t __uid ) ;
# 684 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int setgid(__gid_t __gid ) ;
# 689 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int setregid(__gid_t __rgid , __gid_t __egid ) ;
# 694 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int setegid(__gid_t __gid ) ;
# 723 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __pid_t fork(void) ;
# 730 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __pid_t vfork(void) ;
# 736 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) char *ttyname(int __fd ) ;
# 740 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int ttyname_r(int __fd , char *__buf , size_t __buflen ) __attribute__((__nonnull__(2))) ;
# 745 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int isatty(int __fd ) ;
# 751 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int ttyslot(void) ;
# 756 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int link(char const *__from , char const *__to ) __attribute__((__nonnull__(1,2))) ;
# 769 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int symlink(char const *__from , char const *__to ) __attribute__((__nonnull__(1,2))) ;
# 775 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) ssize_t readlink(char const * __restrict __path ,
                                                      char * __restrict __buf , size_t __len ) __attribute__((__nonnull__(1,2))) ;
# 792 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int unlink(char const *__name ) __attribute__((__nonnull__(1))) ;
# 801 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int rmdir(char const *__path ) __attribute__((__nonnull__(1))) ;
# 805 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) __pid_t tcgetpgrp(int __fd ) ;
# 808 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int tcsetpgrp(int __fd , __pid_t __pgrp_id ) ;
# 815 "/usr/include/unistd.h"
extern char *getlogin(void) ;
# 823 "/usr/include/unistd.h"
extern int getlogin_r(char *__name , size_t __name_len ) __attribute__((__nonnull__(1))) ;
# 828 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int setlogin(char const *__name ) __attribute__((__nonnull__(1))) ;
# 59 "/usr/include/getopt.h"
extern char *optarg ;
# 73 "/usr/include/getopt.h"
extern int optind ;
# 78 "/usr/include/getopt.h"
extern int opterr ;
# 82 "/usr/include/getopt.h"
extern int optopt ;
# 152 "/usr/include/getopt.h"
extern __attribute__((__nothrow__)) int getopt(int ___argc , char * const *___argv ,
                                                char const *__shortopts ) ;
# 845 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int gethostname(char *__name , size_t __len ) __attribute__((__nonnull__(1))) ;
# 852 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int sethostname(char const *__name , size_t __len ) __attribute__((__nonnull__(1))) ;
# 857 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int sethostid(long __id ) ;
# 863 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int getdomainname(char *__name , size_t __len ) __attribute__((__nonnull__(1))) ;
# 865 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int setdomainname(char const *__name , size_t __len ) __attribute__((__nonnull__(1))) ;
# 872 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int vhangup(void) ;
# 875 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int revoke(char const *__file ) __attribute__((__nonnull__(1))) ;
# 883 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int profil(unsigned short *__sample_buffer ,
                                                size_t __size , size_t __offset ,
                                                unsigned int __scale ) __attribute__((__nonnull__(1))) ;
# 891 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int acct(char const *__name ) ;
# 895 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) char *getusershell(void) ;
# 896 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) void endusershell(void) ;
# 897 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) void setusershell(void) ;
# 903 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int daemon(int __nochdir , int __noclose ) ;
# 910 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int chroot(char const *__path ) __attribute__((__nonnull__(1))) ;
# 914 "/usr/include/unistd.h"
extern char *getpass(char const *__prompt ) __attribute__((__nonnull__(1))) ;
# 923 "/usr/include/unistd.h"
extern int fsync(int __fd ) ;
# 930 "/usr/include/unistd.h"
extern long gethostid(void) ;
# 933 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) void sync(void) ;
# 938 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int getpagesize(void) __attribute__((__const__)) ;
# 943 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int getdtablesize(void) ;
# 952 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int truncate(char const *__file , __off64_t __length ) __asm__("truncate64") __attribute__((__nonnull__(1))) ;
# 973 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int ftruncate(int __fd , __off64_t __length ) __asm__("ftruncate64") ;
# 990 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) int brk(void *__addr ) ;
# 996 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;
# 1011 "/usr/include/unistd.h"
extern __attribute__((__nothrow__)) long syscall(long __sysno , ...) ;
# 1037 "/usr/include/unistd.h"
extern int lockf(int __fd , int __cmd , __off64_t __len ) __asm__("lockf64") ;
# 1065 "/usr/include/unistd.h"
extern int fdatasync(int __fildes ) ;
# 43 "/usr/include/bits/errno.h"
extern __attribute__((__nothrow__)) int *__errno_location(void) __attribute__((__const__)) ;
# 76 "/usr/include/fcntl.h"
extern int fcntl(int __fd , int __cmd , ...) ;
# 88 "/usr/include/fcntl.h"
extern int open(char const *__file , int __oflag , ...) __asm__("open64") __attribute__((__nonnull__(1))) ;
# 133 "/usr/include/fcntl.h"
extern int creat(char const *__file , __mode_t __mode ) __asm__("creat64") __attribute__((__nonnull__(1))) ;
# 180 "/usr/include/fcntl.h"
extern __attribute__((__nothrow__)) int posix_fadvise(int __fd , __off64_t __offset ,
                                                       __off64_t __len , int __advise ) __asm__("posix_fadvise64") ;
# 201 "/usr/include/fcntl.h"
extern int posix_fallocate(int __fd , __off64_t __offset , __off64_t __len ) __asm__("posix_fallocate64") ;
# 38 "/usr/include/string.h"
extern __attribute__((__nothrow__)) void *memcpy(void * __restrict __dest , void const * __restrict __src ,
                                                  size_t __n ) __attribute__((__nonnull__(1,2))) ;
# 43 "/usr/include/string.h"
extern __attribute__((__nothrow__)) void *memmove(void *__dest , void const *__src ,
                                                   size_t __n ) __attribute__((__nonnull__(1,2))) ;
# 51 "/usr/include/string.h"
extern __attribute__((__nothrow__)) void *memccpy(void * __restrict __dest , void const * __restrict __src ,
                                                   int __c , size_t __n ) __attribute__((__nonnull__(1,2))) ;
# 59 "/usr/include/string.h"
extern __attribute__((__nothrow__)) void *memset(void *__s , int __c , size_t __n ) __attribute__((__nonnull__(1))) ;
# 62 "/usr/include/string.h"
extern __attribute__((__nothrow__)) int memcmp(void const *__s1 , void const *__s2 ,
                                                size_t __n ) __attribute__((__pure__,
__nonnull__(1,2))) ;
# 66 "/usr/include/string.h"
extern __attribute__((__nothrow__)) void *memchr(void const *__s , int __c , size_t __n ) __attribute__((__pure__,
__nonnull__(1))) ;
# 84 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strcpy(char * __restrict __dest , char const * __restrict __src ) __attribute__((__nonnull__(1,2))) ;
# 87 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strncpy(char * __restrict __dest , char const * __restrict __src ,
                                                   size_t __n ) __attribute__((__nonnull__(1,2))) ;
# 92 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strcat(char * __restrict __dest , char const * __restrict __src ) __attribute__((__nonnull__(1,2))) ;
# 95 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strncat(char * __restrict __dest , char const * __restrict __src ,
                                                   size_t __n ) __attribute__((__nonnull__(1,2))) ;
# 99 "/usr/include/string.h"
extern __attribute__((__nothrow__)) int strcmp(char const *__s1 , char const *__s2 ) __attribute__((__pure__,
__nonnull__(1,2))) ;
# 102 "/usr/include/string.h"
extern __attribute__((__nothrow__)) int strncmp(char const *__s1 , char const *__s2 ,
                                                 size_t __n ) __attribute__((__pure__,
__nonnull__(1,2))) ;
# 106 "/usr/include/string.h"
extern __attribute__((__nothrow__)) int strcoll(char const *__s1 , char const *__s2 ) __attribute__((__pure__,
__nonnull__(1,2))) ;
# 109 "/usr/include/string.h"
extern __attribute__((__nothrow__)) size_t strxfrm(char * __restrict __dest , char const * __restrict __src ,
                                                    size_t __n ) __attribute__((__nonnull__(2))) ;
# 130 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strdup(char const *__s ) __attribute__((__nonnull__(1),
__malloc__)) ;
# 167 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strchr(char const *__s , int __c ) __attribute__((__pure__,
__nonnull__(1))) ;
# 170 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strrchr(char const *__s , int __c ) __attribute__((__pure__,
__nonnull__(1))) ;
# 184 "/usr/include/string.h"
extern __attribute__((__nothrow__)) size_t strcspn(char const *__s , char const *__reject ) __attribute__((__pure__,
__nonnull__(1,2))) ;
# 188 "/usr/include/string.h"
extern __attribute__((__nothrow__)) size_t strspn(char const *__s , char const *__accept ) __attribute__((__pure__,
__nonnull__(1,2))) ;
# 191 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strpbrk(char const *__s , char const *__accept ) __attribute__((__pure__,
__nonnull__(1,2))) ;
# 194 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strstr(char const *__haystack , char const *__needle ) __attribute__((__pure__,
__nonnull__(1,2))) ;
# 199 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strtok(char * __restrict __s , char const * __restrict __delim ) __attribute__((__nonnull__(2))) ;
# 205 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *__strtok_r(char * __restrict __s , char const * __restrict __delim ,
                                                      char ** __restrict __save_ptr ) __attribute__((__nonnull__(2,3))) ;
# 210 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strtok_r(char * __restrict __s , char const * __restrict __delim ,
                                                    char ** __restrict __save_ptr ) __attribute__((__nonnull__(2,3))) ;
# 242 "/usr/include/string.h"
extern __attribute__((__nothrow__)) size_t strlen(char const *__s ) __attribute__((__pure__,
__nonnull__(1))) ;
# 256 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
# 270 "/usr/include/string.h"
extern __attribute__((__nothrow__)) int strerror_r(int __errnum , char *__buf , size_t __buflen ) __asm__("__xpg_strerror_r") __attribute__((__nonnull__(2))) ;
# 294 "/usr/include/string.h"
extern __attribute__((__nothrow__)) void __bzero(void *__s , size_t __n ) __attribute__((__nonnull__(1))) ;
# 298 "/usr/include/string.h"
extern __attribute__((__nothrow__)) void bcopy(void const *__src , void *__dest ,
                                                size_t __n ) __attribute__((__nonnull__(1,2))) ;
# 302 "/usr/include/string.h"
extern __attribute__((__nothrow__)) void bzero(void *__s , size_t __n ) __attribute__((__nonnull__(1))) ;
# 305 "/usr/include/string.h"
extern __attribute__((__nothrow__)) int bcmp(void const *__s1 , void const *__s2 ,
                                              size_t __n ) __attribute__((__pure__,
__nonnull__(1,2))) ;
# 309 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *index(char const *__s , int __c ) __attribute__((__pure__,
__nonnull__(1))) ;
# 313 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *rindex(char const *__s , int __c ) __attribute__((__pure__,
__nonnull__(1))) ;
# 318 "/usr/include/string.h"
extern __attribute__((__nothrow__)) int ffs(int __i ) __attribute__((__const__)) ;
# 331 "/usr/include/string.h"
extern __attribute__((__nothrow__)) int strcasecmp(char const *__s1 , char const *__s2 ) __attribute__((__pure__,
__nonnull__(1,2))) ;
# 335 "/usr/include/string.h"
extern __attribute__((__nothrow__)) int strncasecmp(char const *__s1 , char const *__s2 ,
                                                     size_t __n ) __attribute__((__pure__,
__nonnull__(1,2))) ;
# 354 "/usr/include/string.h"
extern __attribute__((__nothrow__)) char *strsep(char ** __restrict __stringp ,
                                                  char const * __restrict __delim ) __attribute__((__nonnull__(1,2))) ;
# 394 "/usr/include/bits/string2.h"
extern void *__rawmemchr(void const *__s , int __c ) ;
# 969 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c1(char const *__s , int __reject ) ;
# 970 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c1(char const *__s , int __reject )
{ register size_t __result ;

  {
# 973 "/usr/include/bits/string2.h"
  __result = (size_t )0;
# 974 "/usr/include/bits/string2.h"
  while (1) {
# 974 "/usr/include/bits/string2.h"
    if ((int const )*(__s + __result) != 0) {
# 974 "/usr/include/bits/string2.h"
      if (! ((int const )*(__s + __result) != (int const )__reject)) {
# 974 "/usr/include/bits/string2.h"
        break;
      }
    } else {
# 974 "/usr/include/bits/string2.h"
      break;
    }
# 975 "/usr/include/bits/string2.h"
    __result ++;
  }
# 976 "/usr/include/bits/string2.h"
  return (__result);
}
}
# 979 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c2(char const *__s , int __reject1 , int __reject2 ) ;
# 981 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c2(char const *__s , int __reject1 , int __reject2 )
{ register size_t __result ;

  {
# 984 "/usr/include/bits/string2.h"
  __result = (size_t )0;
# 985 "/usr/include/bits/string2.h"
  while (1) {
# 985 "/usr/include/bits/string2.h"
    if ((int const )*(__s + __result) != 0) {
# 985 "/usr/include/bits/string2.h"
      if ((int const )*(__s + __result) != (int const )__reject1) {
# 985 "/usr/include/bits/string2.h"
        if (! ((int const )*(__s + __result) != (int const )__reject2)) {
# 985 "/usr/include/bits/string2.h"
          break;
        }
      } else {
# 985 "/usr/include/bits/string2.h"
        break;
      }
    } else {
# 985 "/usr/include/bits/string2.h"
      break;
    }
# 987 "/usr/include/bits/string2.h"
    __result ++;
  }
# 988 "/usr/include/bits/string2.h"
  return (__result);
}
}
# 991 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c3(char const *__s , int __reject1 , int __reject2 ,
                                    int __reject3 ) ;
# 993 "/usr/include/bits/string2.h"
__inline static size_t __strcspn_c3(char const *__s , int __reject1 , int __reject2 ,
                                    int __reject3 )
{ register size_t __result ;

  {
# 997 "/usr/include/bits/string2.h"
  __result = (size_t )0;
# 998 "/usr/include/bits/string2.h"
  while (1) {
# 998 "/usr/include/bits/string2.h"
    if ((int const )*(__s + __result) != 0) {
# 998 "/usr/include/bits/string2.h"
      if ((int const )*(__s + __result) != (int const )__reject1) {
# 998 "/usr/include/bits/string2.h"
        if ((int const )*(__s + __result) != (int const )__reject2) {
# 998 "/usr/include/bits/string2.h"
          if (! ((int const )*(__s + __result) != (int const )__reject3)) {
# 998 "/usr/include/bits/string2.h"
            break;
          }
        } else {
# 998 "/usr/include/bits/string2.h"
          break;
        }
      } else {
# 998 "/usr/include/bits/string2.h"
        break;
      }
    } else {
# 998 "/usr/include/bits/string2.h"
      break;
    }
# 1000 "/usr/include/bits/string2.h"
    __result ++;
  }
# 1001 "/usr/include/bits/string2.h"
  return (__result);
}
}
# 1045 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c1(char const *__s , int __accept ) ;
# 1046 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c1(char const *__s , int __accept )
{ register size_t __result ;

  {
# 1049 "/usr/include/bits/string2.h"
  __result = (size_t )0;
# 1051 "/usr/include/bits/string2.h"
  while ((int const )*(__s + __result) == (int const )__accept) {
# 1052 "/usr/include/bits/string2.h"
    __result ++;
  }
# 1053 "/usr/include/bits/string2.h"
  return (__result);
}
}
# 1056 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c2(char const *__s , int __accept1 , int __accept2 ) ;
# 1058 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c2(char const *__s , int __accept1 , int __accept2 )
{ register size_t __result ;

  {
# 1061 "/usr/include/bits/string2.h"
  __result = (size_t )0;
# 1063 "/usr/include/bits/string2.h"
  while (1) {
# 1063 "/usr/include/bits/string2.h"
    if (! ((int const )*(__s + __result) == (int const )__accept1)) {
# 1063 "/usr/include/bits/string2.h"
      if (! ((int const )*(__s + __result) == (int const )__accept2)) {
# 1063 "/usr/include/bits/string2.h"
        break;
      }
    }
# 1064 "/usr/include/bits/string2.h"
    __result ++;
  }
# 1065 "/usr/include/bits/string2.h"
  return (__result);
}
}
# 1068 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c3(char const *__s , int __accept1 , int __accept2 ,
                                   int __accept3 ) ;
# 1070 "/usr/include/bits/string2.h"
__inline static size_t __strspn_c3(char const *__s , int __accept1 , int __accept2 ,
                                   int __accept3 )
{ register size_t __result ;

  {
# 1073 "/usr/include/bits/string2.h"
  __result = (size_t )0;
# 1075 "/usr/include/bits/string2.h"
  while (1) {
# 1075 "/usr/include/bits/string2.h"
    if (! ((int const )*(__s + __result) == (int const )__accept1)) {
# 1075 "/usr/include/bits/string2.h"
      if (! ((int const )*(__s + __result) == (int const )__accept2)) {
# 1075 "/usr/include/bits/string2.h"
        if (! ((int const )*(__s + __result) == (int const )__accept3)) {
# 1075 "/usr/include/bits/string2.h"
          break;
        }
      }
    }
# 1077 "/usr/include/bits/string2.h"
    __result ++;
  }
# 1078 "/usr/include/bits/string2.h"
  return (__result);
}
}
# 1121 "/usr/include/bits/string2.h"
__inline static char *__strpbrk_c2(char const *__s , int __accept1 , int __accept2 ) ;
# 1123 "/usr/include/bits/string2.h"
__inline static char *__strpbrk_c2(char const *__s , int __accept1 , int __accept2 )
{ char *tmp ;

  {
# 1127 "/usr/include/bits/string2.h"
  while (1) {
# 1127 "/usr/include/bits/string2.h"
    if ((int const )*__s != 0) {
# 1127 "/usr/include/bits/string2.h"
      if ((int const )*__s != (int const )__accept1) {
# 1127 "/usr/include/bits/string2.h"
        if (! ((int const )*__s != (int const )__accept2)) {
# 1127 "/usr/include/bits/string2.h"
          break;
        }
      } else {
# 1127 "/usr/include/bits/string2.h"
        break;
      }
    } else {
# 1127 "/usr/include/bits/string2.h"
      break;
    }
# 1128 "/usr/include/bits/string2.h"
    __s ++;
  }
# 1129 "/usr/include/bits/string2.h"
  if ((int const )*__s == 0) {
# 1129 "/usr/include/bits/string2.h"
    tmp = (char *)((void *)0);
  } else {
# 1129 "/usr/include/bits/string2.h"
    tmp = (char *)((unsigned int )__s);
  }
# 1129 "/usr/include/bits/string2.h"
  return (tmp);
}
}
# 1132 "/usr/include/bits/string2.h"
__inline static char *__strpbrk_c3(char const *__s , int __accept1 , int __accept2 ,
                                   int __accept3 ) ;
# 1134 "/usr/include/bits/string2.h"
__inline static char *__strpbrk_c3(char const *__s , int __accept1 , int __accept2 ,
                                   int __accept3 )
{ char *tmp ;

  {
# 1139 "/usr/include/bits/string2.h"
  while (1) {
# 1139 "/usr/include/bits/string2.h"
    if ((int const )*__s != 0) {
# 1139 "/usr/include/bits/string2.h"
      if ((int const )*__s != (int const )__accept1) {
# 1139 "/usr/include/bits/string2.h"
        if ((int const )*__s != (int const )__accept2) {
# 1139 "/usr/include/bits/string2.h"
          if (! ((int const )*__s != (int const )__accept3)) {
# 1139 "/usr/include/bits/string2.h"
            break;
          }
        } else {
# 1139 "/usr/include/bits/string2.h"
          break;
        }
      } else {
# 1139 "/usr/include/bits/string2.h"
        break;
      }
    } else {
# 1139 "/usr/include/bits/string2.h"
      break;
    }
# 1141 "/usr/include/bits/string2.h"
    __s ++;
  }
# 1142 "/usr/include/bits/string2.h"
  if ((int const )*__s == 0) {
# 1142 "/usr/include/bits/string2.h"
    tmp = (char *)((void *)0);
  } else {
# 1142 "/usr/include/bits/string2.h"
    tmp = (char *)((unsigned int )__s);
  }
# 1142 "/usr/include/bits/string2.h"
  return (tmp);
}
}
# 1173 "/usr/include/bits/string2.h"
__inline static char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) ;
# 1174 "/usr/include/bits/string2.h"
__inline static char *__strtok_r_1c(char *__s , char __sep , char **__nextp )
{ char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
# 1178 "/usr/include/bits/string2.h"
  if ((unsigned int )__s == (unsigned int )((void *)0)) {
# 1179 "/usr/include/bits/string2.h"
    __s = *__nextp;
  }
# 1180 "/usr/include/bits/string2.h"
  while ((int )*__s == (int )__sep) {
# 1181 "/usr/include/bits/string2.h"
    __s ++;
  }
# 1182 "/usr/include/bits/string2.h"
  __result = (char *)((void *)0);
# 1183 "/usr/include/bits/string2.h"
  if ((int )*__s != 0) {
# 1185 "/usr/include/bits/string2.h"
    tmp = __s;
# 1185 "/usr/include/bits/string2.h"
    __s ++;
# 1185 "/usr/include/bits/string2.h"
    __result = tmp;
# 1186 "/usr/include/bits/string2.h"
    while ((int )*__s != 0) {
# 1187 "/usr/include/bits/string2.h"
      tmp___0 = __s;
# 1187 "/usr/include/bits/string2.h"
      __s ++;
# 1187 "/usr/include/bits/string2.h"
      if ((int )*tmp___0 == (int )__sep) {
# 1189 "/usr/include/bits/string2.h"
        *(__s + -1) = (char )'\000';
# 1190 "/usr/include/bits/string2.h"
        break;
      }
    }
# 1192 "/usr/include/bits/string2.h"
    *__nextp = __s;
  }
# 1194 "/usr/include/bits/string2.h"
  return (__result);
}
}
# 1205 "/usr/include/bits/string2.h"
extern char *__strsep_g(char **__stringp , char const *__delim ) ;
# 1223 "/usr/include/bits/string2.h"
__inline static char *__strsep_1c(char **__s , char __reject ) ;
# 1224 "/usr/include/bits/string2.h"
__inline static char *__strsep_1c(char **__s , char __reject )
{ register char *__retval ;
  char *tmp ;
  void *tmp___0 ;
  char *tmp___1 ;

  {
# 1227 "/usr/include/bits/string2.h"
  __retval = *__s;
# 1228 "/usr/include/bits/string2.h"
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    {
# 1228 "/usr/include/bits/string2.h"
    tmp___1 = __builtin_strchr(__retval, (int )__reject);
# 1228 "/usr/include/bits/string2.h"
    *__s = tmp___1;
    }
# 1228 "/usr/include/bits/string2.h"
    if ((unsigned int )*__s != (unsigned int )((void *)0)) {
# 1229 "/usr/include/bits/string2.h"
      tmp = *__s;
# 1229 "/usr/include/bits/string2.h"
      (*__s) ++;
# 1229 "/usr/include/bits/string2.h"
      *tmp = (char )'\000';
    }
  }
# 1230 "/usr/include/bits/string2.h"
  return (__retval);
}
}
# 1233 "/usr/include/bits/string2.h"
__inline static char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) ;
# 1234 "/usr/include/bits/string2.h"
__inline static char *__strsep_2c(char **__s , char __reject1 , char __reject2 )
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
# 1237 "/usr/include/bits/string2.h"
  __retval = *__s;
# 1238 "/usr/include/bits/string2.h"
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
# 1240 "/usr/include/bits/string2.h"
    __cp = __retval;
# 1241 "/usr/include/bits/string2.h"
    while (1) {
# 1243 "/usr/include/bits/string2.h"
      if ((int )*__cp == 0) {
# 1245 "/usr/include/bits/string2.h"
        __cp = (char *)((void *)0);
# 1246 "/usr/include/bits/string2.h"
        break;
      }
# 1248 "/usr/include/bits/string2.h"
      if ((int )*__cp == (int )__reject1) {
# 1250 "/usr/include/bits/string2.h"
        tmp = __cp;
# 1250 "/usr/include/bits/string2.h"
        __cp ++;
# 1250 "/usr/include/bits/string2.h"
        *tmp = (char )'\000';
# 1251 "/usr/include/bits/string2.h"
        break;
      } else {
# 1248 "/usr/include/bits/string2.h"
        if ((int )*__cp == (int )__reject2) {
# 1250 "/usr/include/bits/string2.h"
          tmp = __cp;
# 1250 "/usr/include/bits/string2.h"
          __cp ++;
# 1250 "/usr/include/bits/string2.h"
          *tmp = (char )'\000';
# 1251 "/usr/include/bits/string2.h"
          break;
        }
      }
# 1253 "/usr/include/bits/string2.h"
      __cp ++;
    }
# 1255 "/usr/include/bits/string2.h"
    *__s = __cp;
  }
# 1257 "/usr/include/bits/string2.h"
  return (__retval);
}
}
# 1260 "/usr/include/bits/string2.h"
__inline static char *__strsep_3c(char **__s , char __reject1 , char __reject2 , char __reject3 ) ;
# 1262 "/usr/include/bits/string2.h"
__inline static char *__strsep_3c(char **__s , char __reject1 , char __reject2 , char __reject3 )
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
# 1265 "/usr/include/bits/string2.h"
  __retval = *__s;
# 1266 "/usr/include/bits/string2.h"
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
# 1268 "/usr/include/bits/string2.h"
    __cp = __retval;
# 1269 "/usr/include/bits/string2.h"
    while (1) {
# 1271 "/usr/include/bits/string2.h"
      if ((int )*__cp == 0) {
# 1273 "/usr/include/bits/string2.h"
        __cp = (char *)((void *)0);
# 1274 "/usr/include/bits/string2.h"
        break;
      }
# 1276 "/usr/include/bits/string2.h"
      if ((int )*__cp == (int )__reject1) {
# 1278 "/usr/include/bits/string2.h"
        tmp = __cp;
# 1278 "/usr/include/bits/string2.h"
        __cp ++;
# 1278 "/usr/include/bits/string2.h"
        *tmp = (char )'\000';
# 1279 "/usr/include/bits/string2.h"
        break;
      } else {
# 1276 "/usr/include/bits/string2.h"
        if ((int )*__cp == (int )__reject2) {
# 1278 "/usr/include/bits/string2.h"
          tmp = __cp;
# 1278 "/usr/include/bits/string2.h"
          __cp ++;
# 1278 "/usr/include/bits/string2.h"
          *tmp = (char )'\000';
# 1279 "/usr/include/bits/string2.h"
          break;
        } else {
# 1276 "/usr/include/bits/string2.h"
          if ((int )*__cp == (int )__reject3) {
# 1278 "/usr/include/bits/string2.h"
            tmp = __cp;
# 1278 "/usr/include/bits/string2.h"
            __cp ++;
# 1278 "/usr/include/bits/string2.h"
            *tmp = (char )'\000';
# 1279 "/usr/include/bits/string2.h"
            break;
          }
        }
      }
# 1281 "/usr/include/bits/string2.h"
      __cp ++;
    }
# 1283 "/usr/include/bits/string2.h"
    *__s = __cp;
  }
# 1285 "/usr/include/bits/string2.h"
  return (__retval);
}
}
# 589 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) void *malloc(size_t __size ) __attribute__((__malloc__)) ;
# 591 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) void *calloc(size_t __nmemb , size_t __size ) __attribute__((__malloc__)) ;
# 1304 "/usr/include/bits/string2.h"
extern __attribute__((__nothrow__)) char *__strdup(char const *__string ) __attribute__((__malloc__)) ;
# 1323 "/usr/include/bits/string2.h"
extern __attribute__((__nothrow__)) char *__strndup(char const *__string , size_t __n ) __attribute__((__malloc__)) ;
# 140 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;
# 145 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) double atof(char const *__nptr ) __attribute__((__pure__,
__nonnull__(1))) ;
# 148 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) int atoi(char const *__nptr ) __attribute__((__pure__,
__nonnull__(1))) ;
# 151 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long atol(char const *__nptr ) __attribute__((__pure__,
__nonnull__(1))) ;
# 158 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long long atoll(char const *__nptr ) __attribute__((__pure__,
__nonnull__(1))) ;
# 165 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) double strtod(char const * __restrict __nptr ,
                                                            char ** __restrict __endptr ) __attribute__((__nonnull__(1))) ;
# 173 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) float strtof(char const * __restrict __nptr ,
                                                           char ** __restrict __endptr ) __attribute__((__nonnull__(1))) ;
# 176 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long double strtold(char const * __restrict __nptr ,
                                                                  char ** __restrict __endptr ) __attribute__((__nonnull__(1))) ;
# 184 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long strtol(char const * __restrict __nptr ,
                                                          char ** __restrict __endptr ,
                                                          int __base ) __attribute__((__nonnull__(1))) ;
# 188 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) unsigned long strtoul(char const * __restrict __nptr ,
                                                                    char ** __restrict __endptr ,
                                                                    int __base ) __attribute__((__nonnull__(1))) ;
# 196 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long long strtoq(char const * __restrict __nptr ,
                                                               char ** __restrict __endptr ,
                                                               int __base ) __attribute__((__nonnull__(1))) ;
# 201 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) unsigned long long strtouq(char const * __restrict __nptr ,
                                                                         char ** __restrict __endptr ,
                                                                         int __base ) __attribute__((__nonnull__(1))) ;
# 210 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long long strtoll(char const * __restrict __nptr ,
                                                                char ** __restrict __endptr ,
                                                                int __base ) __attribute__((__nonnull__(1))) ;
# 215 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) unsigned long long strtoull(char const * __restrict __nptr ,
                                                                          char ** __restrict __endptr ,
                                                                          int __base ) __attribute__((__nonnull__(1))) ;
# 279 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) double __strtod_internal(char const * __restrict __nptr ,
                                                              char ** __restrict __endptr ,
                                                              int __group ) __attribute__((__nonnull__(1))) ;
# 282 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) float __strtof_internal(char const * __restrict __nptr ,
                                                             char ** __restrict __endptr ,
                                                             int __group ) __attribute__((__nonnull__(1))) ;
# 285 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) long double __strtold_internal(char const * __restrict __nptr ,
                                                                    char ** __restrict __endptr ,
                                                                    int __group ) __attribute__((__nonnull__(1))) ;
# 290 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) long __strtol_internal(char const * __restrict __nptr ,
                                                            char ** __restrict __endptr ,
                                                            int __base , int __group ) __attribute__((__nonnull__(1))) ;
# 297 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) unsigned long __strtoul_internal(char const * __restrict __nptr ,
                                                                      char ** __restrict __endptr ,
                                                                      int __base ,
                                                                      int __group ) __attribute__((__nonnull__(1))) ;
# 306 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) long long __strtoll_internal(char const * __restrict __nptr ,
                                                                  char ** __restrict __endptr ,
                                                                  int __base , int __group ) __attribute__((__nonnull__(1))) ;
# 314 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) unsigned long long __strtoull_internal(char const * __restrict __nptr ,
                                                                            char ** __restrict __endptr ,
                                                                            int __base ,
                                                                            int __group ) __attribute__((__nonnull__(1))) ;
# 327 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) double strtod(char const * __restrict __nptr ,
                                                            char ** __restrict __endptr ) __attribute__((__nonnull__(1))) ;
# 327 "/usr/include/stdlib.h"
__inline static double strtod(char const * __restrict __nptr , char ** __restrict __endptr )
{ double tmp ;

  {
  {
# 330 "/usr/include/stdlib.h"
  tmp = __strtod_internal(__nptr, __endptr, 0);
  }
# 330 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 332 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long strtol(char const * __restrict __nptr ,
                                                          char ** __restrict __endptr ,
                                                          int __base ) __attribute__((__nonnull__(1))) ;
# 332 "/usr/include/stdlib.h"
__inline static long strtol(char const * __restrict __nptr , char ** __restrict __endptr ,
                            int __base )
{ long tmp ;

  {
  {
# 336 "/usr/include/stdlib.h"
  tmp = __strtol_internal(__nptr, __endptr, __base, 0);
  }
# 336 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 338 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) unsigned long strtoul(char const * __restrict __nptr ,
                                                                    char ** __restrict __endptr ,
                                                                    int __base ) __attribute__((__nonnull__(1))) ;
# 338 "/usr/include/stdlib.h"
__inline static unsigned long strtoul(char const * __restrict __nptr , char ** __restrict __endptr ,
                                      int __base )
{ unsigned long tmp ;

  {
  {
# 342 "/usr/include/stdlib.h"
  tmp = __strtoul_internal(__nptr, __endptr, __base, 0);
  }
# 342 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 348 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) float strtof(char const * __restrict __nptr ,
                                                           char ** __restrict __endptr ) __attribute__((__nonnull__(1))) ;
# 348 "/usr/include/stdlib.h"
__inline static float strtof(char const * __restrict __nptr , char ** __restrict __endptr )
{ float tmp ;

  {
  {
# 351 "/usr/include/stdlib.h"
  tmp = __strtof_internal(__nptr, __endptr, 0);
  }
# 351 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 354 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long double strtold(char const * __restrict __nptr ,
                                                                  char ** __restrict __endptr ) __attribute__((__nonnull__(1))) ;
# 354 "/usr/include/stdlib.h"
__inline static long double strtold(char const * __restrict __nptr , char ** __restrict __endptr )
{ long double tmp ;

  {
  {
# 357 "/usr/include/stdlib.h"
  tmp = __strtold_internal(__nptr, __endptr, 0);
  }
# 357 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 364 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long long strtoq(char const * __restrict __nptr ,
                                                               char ** __restrict __endptr ,
                                                               int __base ) __attribute__((__nonnull__(1))) ;
# 364 "/usr/include/stdlib.h"
__inline static long long strtoq(char const * __restrict __nptr , char ** __restrict __endptr ,
                                 int __base )
{ long long tmp ;

  {
  {
# 368 "/usr/include/stdlib.h"
  tmp = __strtoll_internal(__nptr, __endptr, __base, 0);
  }
# 368 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 370 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) unsigned long long strtouq(char const * __restrict __nptr ,
                                                                         char ** __restrict __endptr ,
                                                                         int __base ) __attribute__((__nonnull__(1))) ;
# 370 "/usr/include/stdlib.h"
__inline static unsigned long long strtouq(char const * __restrict __nptr , char ** __restrict __endptr ,
                                           int __base )
{ unsigned long long tmp ;

  {
  {
# 374 "/usr/include/stdlib.h"
  tmp = __strtoull_internal(__nptr, __endptr, __base, 0);
  }
# 374 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 380 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long long strtoll(char const * __restrict __nptr ,
                                                                char ** __restrict __endptr ,
                                                                int __base ) __attribute__((__nonnull__(1))) ;
# 380 "/usr/include/stdlib.h"
__inline static long long strtoll(char const * __restrict __nptr , char ** __restrict __endptr ,
                                  int __base )
{ long long tmp ;

  {
  {
# 384 "/usr/include/stdlib.h"
  tmp = __strtoll_internal(__nptr, __endptr, __base, 0);
  }
# 384 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 386 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) unsigned long long strtoull(char const * __restrict __nptr ,
                                                                          char ** __restrict __endptr ,
                                                                          int __base ) __attribute__((__nonnull__(1))) ;
# 386 "/usr/include/stdlib.h"
__inline static unsigned long long strtoull(char const * __restrict __nptr , char ** __restrict __endptr ,
                                            int __base )
{ unsigned long long tmp ;

  {
  {
# 390 "/usr/include/stdlib.h"
  tmp = __strtoull_internal(__nptr, __endptr, __base, 0);
  }
# 390 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 396 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) double atof(char const *__nptr ) __attribute__((__pure__,
__nonnull__(1))) ;
# 396 "/usr/include/stdlib.h"
__inline static double atof(char const *__nptr )
{ double tmp ;

  {
  {
# 399 "/usr/include/stdlib.h"
  tmp = strtod((char const * )__nptr, (char ** )((char **)((void *)0)));
  }
# 399 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 401 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) int atoi(char const *__nptr ) __attribute__((__pure__,
__nonnull__(1))) ;
# 401 "/usr/include/stdlib.h"
__inline static int atoi(char const *__nptr )
{ long tmp ;

  {
  {
# 404 "/usr/include/stdlib.h"
  tmp = strtol((char const * )__nptr, (char ** )((char **)((void *)0)),
               10);
  }
# 404 "/usr/include/stdlib.h"
  return ((int )tmp);
}
}
# 406 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long atol(char const *__nptr ) __attribute__((__pure__,
__nonnull__(1))) ;
# 406 "/usr/include/stdlib.h"
__inline static long atol(char const *__nptr )
{ long tmp ;

  {
  {
# 409 "/usr/include/stdlib.h"
  tmp = strtol((char const * )__nptr, (char ** )((char **)((void *)0)),
               10);
  }
# 409 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 415 "/usr/include/stdlib.h"
__inline static __attribute__((__nothrow__)) long long atoll(char const *__nptr ) __attribute__((__pure__,
__nonnull__(1))) ;
# 415 "/usr/include/stdlib.h"
__inline static long long atoll(char const *__nptr )
{ long long tmp ;

  {
  {
# 418 "/usr/include/stdlib.h"
  tmp = strtoll((char const * )__nptr, (char ** )((char **)((void *)0)),
                10);
  }
# 418 "/usr/include/stdlib.h"
  return (tmp);
}
}
# 429 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *l64a(long __n ) ;
# 432 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) long a64l(char const *__s ) __attribute__((__pure__,
__nonnull__(1))) ;
# 445 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) long random(void) ;
# 448 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) void srandom(unsigned int __seed ) ;
# 454 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *initstate(unsigned int __seed , char *__statebuf ,
                                                     size_t __statelen ) __attribute__((__nonnull__(2))) ;
# 459 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *setstate(char *__statebuf ) __attribute__((__nonnull__(1))) ;
# 478 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int random_r(struct random_data * __restrict __buf ,
                                                  int32_t * __restrict __result ) __attribute__((__nonnull__(1,2))) ;
# 481 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int srandom_r(unsigned int __seed , struct random_data *__buf ) __attribute__((__nonnull__(2))) ;
# 484 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int initstate_r(unsigned int __seed , char * __restrict __statebuf ,
                                                     size_t __statelen , struct random_data * __restrict __buf ) __attribute__((__nonnull__(2,4))) ;
# 489 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int setstate_r(char * __restrict __statebuf ,
                                                    struct random_data * __restrict __buf ) __attribute__((__nonnull__(1,2))) ;
# 498 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int rand(void) ;
# 500 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) void srand(unsigned int __seed ) ;
# 505 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int rand_r(unsigned int *__seed ) ;
# 513 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) double drand48(void) ;
# 514 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) double erand48(unsigned short *__xsubi ) __attribute__((__nonnull__(1))) ;
# 517 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) long lrand48(void) ;
# 518 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) long nrand48(unsigned short *__xsubi ) __attribute__((__nonnull__(1))) ;
# 522 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) long mrand48(void) ;
# 523 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) long jrand48(unsigned short *__xsubi ) __attribute__((__nonnull__(1))) ;
# 527 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) void srand48(long __seedval ) ;
# 528 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) unsigned short *seed48(unsigned short *__seed16v ) __attribute__((__nonnull__(1))) ;
# 530 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) void lcong48(unsigned short *__param ) __attribute__((__nonnull__(1))) ;
# 546 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int drand48_r(struct drand48_data * __restrict __buffer ,
                                                   double * __restrict __result ) __attribute__((__nonnull__(1,2))) ;
# 548 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int erand48_r(unsigned short *__xsubi , struct drand48_data * __restrict __buffer ,
                                                   double * __restrict __result ) __attribute__((__nonnull__(1,2))) ;
# 553 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int lrand48_r(struct drand48_data * __restrict __buffer ,
                                                   long * __restrict __result ) __attribute__((__nonnull__(1,2))) ;
# 556 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int nrand48_r(unsigned short *__xsubi , struct drand48_data * __restrict __buffer ,
                                                   long * __restrict __result ) __attribute__((__nonnull__(1,2))) ;
# 562 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int mrand48_r(struct drand48_data * __restrict __buffer ,
                                                   long * __restrict __result ) __attribute__((__nonnull__(1,2))) ;
# 565 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int jrand48_r(unsigned short *__xsubi , struct drand48_data * __restrict __buffer ,
                                                   long * __restrict __result ) __attribute__((__nonnull__(1,2))) ;
# 571 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int srand48_r(long __seedval , struct drand48_data *__buffer ) __attribute__((__nonnull__(2))) ;
# 574 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int seed48_r(unsigned short *__seed16v , struct drand48_data *__buffer ) __attribute__((__nonnull__(1,2))) ;
# 577 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int lcong48_r(unsigned short *__param , struct drand48_data *__buffer ) __attribute__((__nonnull__(1,2))) ;
# 600 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) void *realloc(void *__ptr , size_t __size ) __attribute__((__warn_unused_result__,
__malloc__)) ;
# 603 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) void free(void *__ptr ) ;
# 608 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) void cfree(void *__ptr ) ;
# 33 "/usr/include/alloca.h"
extern __attribute__((__nothrow__)) void *alloca(size_t __size ) ;
# 617 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) void *valloc(size_t __size ) __attribute__((__malloc__)) ;
# 622 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int posix_memalign(void **__memptr , size_t __alignment ,
                                                        size_t __size ) __attribute__((__nonnull__(1))) ;
# 628 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__, __noreturn__)) void abort(void) ;
# 632 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int atexit(void (*__func)(void) ) __attribute__((__nonnull__(1))) ;
# 638 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int on_exit(void (*__func)(int __status , void *__arg ) ,
                                                 void *__arg ) __attribute__((__nonnull__(1))) ;
# 646 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;
# 653 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__, __noreturn__)) void _Exit(int __status ) ;
# 660 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *getenv(char const *__name ) __attribute__((__nonnull__(1))) ;
# 665 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *__secure_getenv(char const *__name ) __attribute__((__nonnull__(1))) ;
# 672 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int putenv(char *__string ) __attribute__((__nonnull__(1))) ;
# 678 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int setenv(char const *__name , char const *__value ,
                                                int __replace ) __attribute__((__nonnull__(2))) ;
# 682 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int unsetenv(char const *__name ) ;
# 689 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int clearenv(void) ;
# 698 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *mktemp(char *__template ) __attribute__((__nonnull__(1))) ;
# 712 "/usr/include/stdlib.h"
extern int mkstemp(char *__template ) __asm__("mkstemp64") __attribute__((__nonnull__(1))) ;
# 729 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *mkdtemp(char *__template ) __attribute__((__nonnull__(1))) ;
# 738 "/usr/include/stdlib.h"
extern int system(char const *__command ) ;
# 755 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *realpath(char const * __restrict __name ,
                                                    char * __restrict __resolved ) ;
# 773 "/usr/include/stdlib.h"
extern void *bsearch(void const *__key , void const *__base , size_t __nmemb ,
                     size_t __size , int (*__compar)(void const * , void const * ) ) __attribute__((__nonnull__(1,2,5))) ;
# 779 "/usr/include/stdlib.h"
extern void qsort(void *__base , size_t __nmemb , size_t __size , int (*__compar)(void const * ,
                                                                                  void const * ) ) __attribute__((__nonnull__(1,4))) ;
# 784 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int abs(int __x ) __attribute__((__const__)) ;
# 785 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) long labs(long __x ) __attribute__((__const__)) ;
# 789 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) long long llabs(long long __x ) __attribute__((__const__)) ;
# 798 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) div_t div(int __numer , int __denom ) __attribute__((__const__)) ;
# 800 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) ldiv_t ldiv(long __numer , long __denom ) __attribute__((__const__)) ;
# 806 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) lldiv_t lldiv(long long __numer , long long __denom ) __attribute__((__const__)) ;
# 820 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *ecvt(double __value , int __ndigit , int * __restrict __decpt ,
                                                int * __restrict __sign ) __attribute__((__nonnull__(3,4))) ;
# 826 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *fcvt(double __value , int __ndigit , int * __restrict __decpt ,
                                                int * __restrict __sign ) __attribute__((__nonnull__(3,4))) ;
# 832 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *gcvt(double __value , int __ndigit , char *__buf ) __attribute__((__nonnull__(3))) ;
# 838 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *qecvt(long double __value , int __ndigit ,
                                                 int * __restrict __decpt , int * __restrict __sign ) __attribute__((__nonnull__(3,4))) ;
# 841 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *qfcvt(long double __value , int __ndigit ,
                                                 int * __restrict __decpt , int * __restrict __sign ) __attribute__((__nonnull__(3,4))) ;
# 844 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) char *qgcvt(long double __value , int __ndigit ,
                                                 char *__buf ) __attribute__((__nonnull__(3))) ;
# 850 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int ecvt_r(double __value , int __ndigit , int * __restrict __decpt ,
                                                int * __restrict __sign , char * __restrict __buf ,
                                                size_t __len ) __attribute__((__nonnull__(3,4,5))) ;
# 853 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int fcvt_r(double __value , int __ndigit , int * __restrict __decpt ,
                                                int * __restrict __sign , char * __restrict __buf ,
                                                size_t __len ) __attribute__((__nonnull__(3,4,5))) ;
# 857 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int qecvt_r(long double __value , int __ndigit ,
                                                 int * __restrict __decpt , int * __restrict __sign ,
                                                 char * __restrict __buf , size_t __len ) __attribute__((__nonnull__(3,4,5))) ;
# 861 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int qfcvt_r(long double __value , int __ndigit ,
                                                 int * __restrict __decpt , int * __restrict __sign ,
                                                 char * __restrict __buf , size_t __len ) __attribute__((__nonnull__(3,4,5))) ;
# 872 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int mblen(char const *__s , size_t __n ) ;
# 875 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int mbtowc(wchar_t * __restrict __pwc , char const * __restrict __s ,
                                                size_t __n ) ;
# 879 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int wctomb(char *__s , wchar_t __wchar ) ;
# 883 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) size_t mbstowcs(wchar_t * __restrict __pwcs ,
                                                     char const * __restrict __s ,
                                                     size_t __n ) ;
# 886 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) size_t wcstombs(char * __restrict __s , wchar_t const * __restrict __pwcs ,
                                                     size_t __n ) ;
# 897 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int rpmatch(char const *__response ) __attribute__((__nonnull__(1))) ;
# 925 "/usr/include/stdlib.h"
extern int posix_openpt(int __oflag ) ;
# 960 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__)) int getloadavg(double *__loadavg , int __nelem ) __attribute__((__nonnull__(1))) ;
# 81 "/usr/include/ctype.h"
extern unsigned short const **__ctype_b_loc(void) __attribute__((__const__)) ;
# 83 "/usr/include/ctype.h"
extern __int32_t const **__ctype_tolower_loc(void) __attribute__((__const__)) ;
# 85 "/usr/include/ctype.h"
extern __int32_t const **__ctype_toupper_loc(void) __attribute__((__const__)) ;
# 102 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int isalnum(int ) ;
# 103 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int isalpha(int ) ;
# 104 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int iscntrl(int ) ;
# 105 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int isdigit(int ) ;
# 106 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int islower(int ) ;
# 107 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int isgraph(int ) ;
# 108 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int isprint(int ) ;
# 109 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int ispunct(int ) ;
# 110 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int isspace(int ) ;
# 111 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int isupper(int ) ;
# 112 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int isxdigit(int ) ;
# 116 "/usr/include/ctype.h"
__inline static __attribute__((__nothrow__)) int tolower(int __c ) ;
# 119 "/usr/include/ctype.h"
__inline static __attribute__((__nothrow__)) int toupper(int __c ) ;
# 128 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int isblank(int ) ;
# 142 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int isascii(int __c ) ;
# 146 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int toascii(int __c ) ;
# 150 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int _toupper(int ) ;
# 151 "/usr/include/ctype.h"
extern __attribute__((__nothrow__)) int _tolower(int ) ;
# 190 "/usr/include/ctype.h"
__inline static __attribute__((__nothrow__)) int tolower(int __c ) ;
# 190 "/usr/include/ctype.h"
__inline static int tolower(int __c )
{ __int32_t const **tmp ;
  __int32_t tmp___0 ;
  __int32_t const **tmp___1 ;

  {
# 193 "/usr/include/ctype.h"
  if (__c >= -128) {
# 193 "/usr/include/ctype.h"
    if (__c < 256) {
      {
# 193 "/usr/include/ctype.h"
      tmp___1 = __ctype_tolower_loc();
# 193 "/usr/include/ctype.h"
      tmp___0 = *(*tmp___1 + __c);
      }
    } else {
# 193 "/usr/include/ctype.h"
      tmp___0 = (int const )__c;
    }
  } else {
# 193 "/usr/include/ctype.h"
    tmp___0 = (int const )__c;
  }
# 193 "/usr/include/ctype.h"
  return ((int )tmp___0);
}
}
# 196 "/usr/include/ctype.h"
__inline static __attribute__((__nothrow__)) int toupper(int __c ) ;
# 196 "/usr/include/ctype.h"
__inline static int toupper(int __c )
{ __int32_t const **tmp ;
  __int32_t tmp___0 ;
  __int32_t const **tmp___1 ;

  {
# 199 "/usr/include/ctype.h"
  if (__c >= -128) {
# 199 "/usr/include/ctype.h"
    if (__c < 256) {
      {
# 199 "/usr/include/ctype.h"
      tmp___1 = __ctype_toupper_loc();
# 199 "/usr/include/ctype.h"
      tmp___0 = *(*tmp___1 + __c);
      }
    } else {
# 199 "/usr/include/ctype.h"
      tmp___0 = (int const )__c;
    }
  } else {
# 199 "/usr/include/ctype.h"
    tmp___0 = (int const )__c;
  }
# 199 "/usr/include/ctype.h"
  return ((int )tmp___0);
}
}
# 69 "/usr/include/assert.h"
extern __attribute__((__nothrow__, __noreturn__)) void __assert_fail(char const *__assertion ,
                                                                      char const *__file ,
                                                                      unsigned int __line ,
                                                                      char const *__function ) ;
# 74 "/usr/include/assert.h"
extern __attribute__((__nothrow__, __noreturn__)) void __assert_perror_fail(int __errnum ,
                                                                             char const *__file ,
                                                                             unsigned int __line ,
                                                                             char const *__function ) ;
# 82 "/usr/include/assert.h"
extern __attribute__((__nothrow__, __noreturn__)) void __assert(char const *__assertion ,
                                                                 char const *__file ,
                                                                 int __line ) ;
# 104 "/usr/include/bits/sigset.h"
__inline static int __sigismember(__sigset_t const *__set , int __sig ) ;
# 105 "/usr/include/bits/sigset.h"
__inline static int __sigaddset(__sigset_t *__set , int __sig ) ;
# 106 "/usr/include/bits/sigset.h"
__inline static int __sigdelset(__sigset_t *__set , int __sig ) ;
# 118 "/usr/include/bits/sigset.h"
__inline static int __sigismember(__sigset_t const *__set , int __sig )
{ unsigned long __mask ;
  unsigned long __word ;
  int tmp ;

  {
# 118 "/usr/include/bits/sigset.h"
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
# 118 "/usr/include/bits/sigset.h"
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
# 118 "/usr/include/bits/sigset.h"
  if (__set->__val[__word] & __mask) {
# 118 "/usr/include/bits/sigset.h"
    tmp = 1;
  } else {
# 118 "/usr/include/bits/sigset.h"
    tmp = 0;
  }
# 118 "/usr/include/bits/sigset.h"
  return (tmp);
}
}
# 119 "/usr/include/bits/sigset.h"
__inline static int __sigaddset(__sigset_t *__set , int __sig )
{ unsigned long __mask ;
  unsigned long __word ;

  {
# 119 "/usr/include/bits/sigset.h"
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
# 119 "/usr/include/bits/sigset.h"
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
# 119 "/usr/include/bits/sigset.h"
  __set->__val[__word] |= __mask;
# 119 "/usr/include/bits/sigset.h"
  return (0);
}
}
# 120 "/usr/include/bits/sigset.h"
__inline static int __sigdelset(__sigset_t *__set , int __sig )
{ unsigned long __mask ;
  unsigned long __word ;

  {
# 120 "/usr/include/bits/sigset.h"
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
# 120 "/usr/include/bits/sigset.h"
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
# 120 "/usr/include/bits/sigset.h"
  __set->__val[__word] &= ~ __mask;
# 120 "/usr/include/bits/sigset.h"
  return (0);
}
}
# 80 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) __sighandler_t __sysv_signal(int __sig , void (*__handler)(int ) ) ;
# 92 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) __sighandler_t signal(int __sig , void (*__handler)(int ) ) ;
# 117 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int kill(__pid_t __pid , int __sig ) ;
# 124 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int killpg(__pid_t __pgrp , int __sig ) ;
# 129 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int raise(int __sig ) ;
# 134 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) __sighandler_t ssignal(int __sig , void (*__handler)(int ) ) ;
# 136 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int gsignal(int __sig ) ;
# 141 "/usr/include/signal.h"
extern void psignal(int __sig , char const *__s ) ;
# 153 "/usr/include/signal.h"
extern int __sigpause(int __sig_or_mask , int __is_sig ) ;
# 181 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigblock(int __mask ) __attribute__((__deprecated__)) ;
# 184 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigsetmask(int __mask ) __attribute__((__deprecated__)) ;
# 187 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int siggetmask(void) __attribute__((__deprecated__)) ;
# 216 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigemptyset(sigset_t *__set ) __attribute__((__nonnull__(1))) ;
# 219 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigfillset(sigset_t *__set ) __attribute__((__nonnull__(1))) ;
# 222 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigaddset(sigset_t *__set , int __signo ) __attribute__((__nonnull__(1))) ;
# 225 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigdelset(sigset_t *__set , int __signo ) __attribute__((__nonnull__(1))) ;
# 228 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigismember(sigset_t const *__set , int __signo ) __attribute__((__nonnull__(1))) ;
# 249 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigprocmask(int __how , sigset_t const * __restrict __set ,
                                                     sigset_t * __restrict __oset ) ;
# 257 "/usr/include/signal.h"
extern int sigsuspend(sigset_t const *__set ) __attribute__((__nonnull__(1))) ;
# 260 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigaction(int __sig , struct sigaction const * __restrict __act ,
                                                   struct sigaction * __restrict __oact ) ;
# 264 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigpending(sigset_t *__set ) __attribute__((__nonnull__(1))) ;
# 271 "/usr/include/signal.h"
extern int sigwait(sigset_t const * __restrict __set , int * __restrict __sig ) __attribute__((__nonnull__(1,2))) ;
# 279 "/usr/include/signal.h"
extern int sigwaitinfo(sigset_t const * __restrict __set , siginfo_t * __restrict __info ) __attribute__((__nonnull__(1))) ;
# 287 "/usr/include/signal.h"
extern int sigtimedwait(sigset_t const * __restrict __set , siginfo_t * __restrict __info ,
                        struct timespec const * __restrict __timeout ) __attribute__((__nonnull__(1))) ;
# 294 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigqueue(__pid_t __pid , int __sig , union sigval __val ) ;
# 304 "/usr/include/signal.h"
extern char const * const _sys_siglist[65] ;
# 305 "/usr/include/signal.h"
extern char const * const sys_siglist[65] ;
# 328 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigvec(int __sig , struct sigvec const *__vec ,
                                                struct sigvec *__ovec ) ;
# 336 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigreturn(struct sigcontext *__scp ) ;
# 346 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int siginterrupt(int __sig , int __interrupt ) ;
# 357 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigstack(struct sigstack *__ss , struct sigstack *__oss ) __attribute__((__deprecated__)) ;
# 362 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int sigaltstack(struct sigaltstack const * __restrict __ss ,
                                                     struct sigaltstack * __restrict __oss ) ;
# 31 "/usr/include/bits/sigthread.h"
extern __attribute__((__nothrow__)) int pthread_sigmask(int __how , __sigset_t const * __restrict __newmask ,
                                                         __sigset_t * __restrict __oldmask ) ;
# 36 "/usr/include/bits/sigthread.h"
extern __attribute__((__nothrow__)) int pthread_kill(pthread_t __threadid , int __signo ) ;
# 394 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int __libc_current_sigrtmin(void) ;
# 396 "/usr/include/signal.h"
extern __attribute__((__nothrow__)) int __libc_current_sigrtmax(void) ;
# 36 "buffer.h"
extern buffer_array *buffer_array_init(void) ;
# 37 "buffer.h"
extern void buffer_array_free(buffer_array *b ) ;
# 38 "buffer.h"
extern void buffer_array_reset(buffer_array *b ) ;
# 39 "buffer.h"
extern buffer *buffer_array_append_get_buffer(buffer_array *b ) ;
# 41 "buffer.h"
extern buffer *buffer_init(void) ;
# 42 "buffer.h"
extern buffer *buffer_init_buffer(buffer *b ) ;
# 43 "buffer.h"
extern buffer *buffer_init_string(char const *str ) ;
# 44 "buffer.h"
extern void buffer_free(buffer *b ) ;
# 45 "buffer.h"
extern void buffer_reset(buffer *b ) ;
# 47 "buffer.h"
extern int buffer_prepare_copy(buffer *b , size_t size ) ;
# 48 "buffer.h"
extern int buffer_prepare_append(buffer *b , size_t size ) ;
# 50 "buffer.h"
extern int buffer_copy_string(buffer *b , char const *s ) ;
# 51 "buffer.h"
extern int buffer_copy_string_len(buffer *b , char const *s , size_t s_len ) ;
# 52 "buffer.h"
extern int buffer_copy_string_buffer(buffer *b , buffer const *src ) ;
# 53 "buffer.h"
extern int buffer_copy_string_hex(buffer *b , char const *in , size_t in_len ) ;
# 55 "buffer.h"
extern int buffer_copy_long(buffer *b , long val ) ;
# 57 "buffer.h"
extern int buffer_copy_memory(buffer *b , char const *s , size_t s_len ) ;
# 59 "buffer.h"
extern int buffer_append_string(buffer *b , char const *s ) ;
# 60 "buffer.h"
extern int buffer_append_string_len(buffer *b , char const *s , size_t s_len ) ;
# 61 "buffer.h"
extern int buffer_append_string_buffer(buffer *b , buffer const *src ) ;
# 62 "buffer.h"
extern int buffer_append_string_lfill(buffer *b , char const *s , size_t maxlen ) ;
# 63 "buffer.h"
extern int buffer_append_string_rfill(buffer *b , char const *s , size_t maxlen ) ;
# 65 "buffer.h"
extern int buffer_append_long_hex(buffer *b , unsigned long len ) ;
# 66 "buffer.h"
extern int buffer_append_long(buffer *b , long val ) ;
# 72 "buffer.h"
extern int buffer_copy_off_t(buffer *b , off_t val ) ;
# 73 "buffer.h"
extern int buffer_append_off_t(buffer *b , off_t val ) ;
# 76 "buffer.h"
extern int buffer_append_memory(buffer *b , char const *s , size_t s_len ) ;
# 78 "buffer.h"
extern char *buffer_search_string_len(buffer *b , char const *needle , size_t len ) ;
# 80 "buffer.h"
extern int buffer_is_empty(buffer *b ) ;
# 81 "buffer.h"
extern int buffer_is_equal(buffer *a , buffer *b ) ;
# 82 "buffer.h"
extern int buffer_is_equal_right_len(buffer *a , buffer *b , size_t len ) ;
# 83 "buffer.h"
extern int buffer_is_equal_string(buffer *a , char const *s , size_t b_len ) ;
# 84 "buffer.h"
extern int buffer_caseless_compare(char const *a , size_t a_len , char const *b ,
                                   size_t b_len ) ;
# 96 "buffer.h"
extern int buffer_append_string_encoded(buffer *b , char const *s , size_t s_len ,
                                        buffer_encoding_t encoding ) ;
# 98 "buffer.h"
extern int buffer_urldecode_path(buffer *url ) ;
# 99 "buffer.h"
extern int buffer_urldecode_query(buffer *url ) ;
# 100 "buffer.h"
extern int buffer_path_simplify(buffer *dest , buffer *src ) ;
# 102 "buffer.h"
extern int buffer_to_lower(buffer *b ) ;
# 103 "buffer.h"
extern int buffer_to_upper(buffer *b ) ;
# 106 "buffer.h"
extern int LI_ltostr(char *buf , long val ) ;
# 107 "buffer.h"
extern char hex2int(unsigned char c ) ;
# 108 "buffer.h"
extern char int2hex(char i ) ;
# 110 "buffer.h"
extern int light_isdigit(int c ) ;
# 111 "buffer.h"
extern int light_isxdigit(int c ) ;
# 112 "buffer.h"
extern int light_isalpha(int c ) ;
# 113 "buffer.h"
extern int light_isalnum(int c ) ;
# 73 "/usr/include/sys/time.h"
extern __attribute__((__nothrow__)) int gettimeofday(struct timeval * __restrict __tv ,
                                                      __timezone_ptr_t __tz ) __attribute__((__nonnull__(1))) ;
# 79 "/usr/include/sys/time.h"
extern __attribute__((__nothrow__)) int settimeofday(struct timeval const *__tv ,
                                                      struct timezone const *__tz ) __attribute__((__nonnull__(1))) ;
# 87 "/usr/include/sys/time.h"
extern __attribute__((__nothrow__)) int adjtime(struct timeval const *__delta ,
                                                 struct timeval *__olddelta ) ;
# 127 "/usr/include/sys/time.h"
extern __attribute__((__nothrow__)) int getitimer(__itimer_which_t __which , struct itimerval *__value ) ;
# 133 "/usr/include/sys/time.h"
extern __attribute__((__nothrow__)) int setitimer(__itimer_which_t __which , struct itimerval const * __restrict __new ,
                                                   struct itimerval * __restrict __old ) ;
# 140 "/usr/include/sys/time.h"
extern __attribute__((__nothrow__)) int utimes(char const *__file , struct timeval const *__tvp ) __attribute__((__nonnull__(1))) ;
# 145 "/usr/include/sys/time.h"
extern __attribute__((__nothrow__)) int lutimes(char const *__file , struct timeval const *__tvp ) __attribute__((__nonnull__(1))) ;
# 149 "/usr/include/sys/time.h"
extern __attribute__((__nothrow__)) int futimes(int __fd , struct timeval const *__tvp ) ;
# 217 "/usr/include/sys/stat.h"
__inline static __attribute__((__nothrow__)) int stat(char const * __restrict __path ,
                                                       struct stat * __restrict __statbuf ) __asm__("stat64") __attribute__((__nonnull__(1,2))) ;
# 220 "/usr/include/sys/stat.h"
__inline static __attribute__((__nothrow__)) int fstat(int __fd , struct stat *__statbuf ) __asm__("fstat64") __attribute__((__nonnull__(2))) ;
# 265 "/usr/include/sys/stat.h"
__inline static __attribute__((__nothrow__)) int lstat(char const * __restrict __path ,
                                                        struct stat * __restrict __statbuf ) __asm__("lstat64") __attribute__((__nonnull__(1,2))) ;
# 282 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) int chmod(char const *__file , __mode_t __mode ) __attribute__((__nonnull__(1))) ;
# 289 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) int lchmod(char const *__file , __mode_t __mode ) __attribute__((__nonnull__(1))) ;
# 295 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) int fchmod(int __fd , __mode_t __mode ) ;
# 309 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) __mode_t umask(__mode_t __mask ) ;
# 318 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) int mkdir(char const *__path , __mode_t __mode ) __attribute__((__nonnull__(1))) ;
# 333 "/usr/include/sys/stat.h"
__inline static __attribute__((__nothrow__)) int mknod(char const *__path , __mode_t __mode ,
                                                        __dev_t __dev ) __attribute__((__nonnull__(1))) ;
# 347 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) int mkfifo(char const *__path , __mode_t __mode ) __attribute__((__nonnull__(1))) ;
# 408 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) int __fxstat(int __ver , int __fildes , struct stat *__stat_buf ) __asm__("__fxstat64") __attribute__((__nonnull__(3))) ;
# 411 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) int __xstat(int __ver , char const *__filename ,
                                                 struct stat *__stat_buf ) __asm__("__xstat64") __attribute__((__nonnull__(2,3))) ;
# 414 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) int __lxstat(int __ver , char const *__filename ,
                                                  struct stat *__stat_buf ) __asm__("__lxstat64") __attribute__((__nonnull__(2,3))) ;
# 417 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) int __fxstatat(int __ver , int __fildes , char const *__filename ,
                                                    struct stat *__stat_buf , int __flag ) __asm__("__fxstatat64") __attribute__((__nonnull__(3,4))) ;
# 440 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) int __xmknod(int __ver , char const *__path ,
                                                  __mode_t __mode , __dev_t *__dev ) __attribute__((__nonnull__(2,4))) ;
# 443 "/usr/include/sys/stat.h"
extern __attribute__((__nothrow__)) int __xmknodat(int __ver , int __fd , char const *__path ,
                                                    __mode_t __mode , __dev_t *__dev ) __attribute__((__nonnull__(3,5))) ;
# 450 "/usr/include/sys/stat.h"
__inline static __attribute__((__nothrow__)) int stat(char const * __restrict __path ,
                                                       struct stat * __restrict __statbuf ) __asm__("stat64") __attribute__((__nonnull__(1,2))) ;
# 450 "/usr/include/sys/stat.h"
__inline static int stat(char const * __restrict __path , struct stat * __restrict __statbuf )
{ int tmp ;

  {
  {
# 453 "/usr/include/sys/stat.h"
  tmp = __xstat(3, (char const *)__path, (struct stat *)__statbuf);
  }
# 453 "/usr/include/sys/stat.h"
  return (tmp);
}
}
# 457 "/usr/include/sys/stat.h"
__inline static __attribute__((__nothrow__)) int lstat(char const * __restrict __path ,
                                                        struct stat * __restrict __statbuf ) __asm__("lstat64") __attribute__((__nonnull__(1,2))) ;
# 457 "/usr/include/sys/stat.h"
__inline static int lstat(char const * __restrict __path , struct stat * __restrict __statbuf )
{ int tmp ;

  {
  {
# 460 "/usr/include/sys/stat.h"
  tmp = __lxstat(3, (char const *)__path, (struct stat *)__statbuf);
  }
# 460 "/usr/include/sys/stat.h"
  return (tmp);
}
}
# 464 "/usr/include/sys/stat.h"
__inline static __attribute__((__nothrow__)) int fstat(int __fd , struct stat *__statbuf ) __asm__("fstat64") __attribute__((__nonnull__(2))) ;
# 464 "/usr/include/sys/stat.h"
__inline static int fstat(int __fd , struct stat *__statbuf )
{ int tmp ;

  {
  {
# 467 "/usr/include/sys/stat.h"
  tmp = __fxstat(3, __fd, __statbuf);
  }
# 467 "/usr/include/sys/stat.h"
  return (tmp);
}
}
# 480 "/usr/include/sys/stat.h"
__inline static __attribute__((__nothrow__)) int mknod(char const *__path , __mode_t __mode ,
                                                        __dev_t __dev ) __attribute__((__nonnull__(1))) ;
# 480 "/usr/include/sys/stat.h"
__inline static int mknod(char const *__path , __mode_t __mode , __dev_t __dev )
{ int tmp ;

  {
  {
# 483 "/usr/include/sys/stat.h"
  tmp = __xmknod(1, __path, __mode, & __dev);
  }
# 483 "/usr/include/sys/stat.h"
  return (tmp);
}
}
# 298 "/usr/include/inttypes.h"
extern __attribute__((__nothrow__)) intmax_t imaxabs(intmax_t __n ) __attribute__((__const__)) ;
# 301 "/usr/include/inttypes.h"
extern __attribute__((__nothrow__)) imaxdiv_t imaxdiv(intmax_t __numer , intmax_t __denom ) __attribute__((__const__)) ;
# 305 "/usr/include/inttypes.h"
__inline static __attribute__((__nothrow__)) intmax_t strtoimax(char const * __restrict nptr ,
                                                                 char ** __restrict endptr ,
                                                                 int base ) ;
# 309 "/usr/include/inttypes.h"
__inline static __attribute__((__nothrow__)) uintmax_t strtoumax(char const * __restrict nptr ,
                                                                  char ** __restrict endptr ,
                                                                  int base ) ;
# 313 "/usr/include/inttypes.h"
__inline static __attribute__((__nothrow__)) intmax_t wcstoimax(__gwchar_t const * __restrict nptr ,
                                                                 __gwchar_t ** __restrict endptr ,
                                                                 int base ) ;
# 318 "/usr/include/inttypes.h"
__inline static __attribute__((__nothrow__)) uintmax_t wcstoumax(__gwchar_t const * __restrict nptr ,
                                                                  __gwchar_t ** __restrict endptr ,
                                                                  int base ) ;
# 396 "/usr/include/inttypes.h"
__inline static __attribute__((__nothrow__)) intmax_t strtoimax(char const * __restrict nptr ,
                                                                 char ** __restrict endptr ,
                                                                 int base ) ;
# 396 "/usr/include/inttypes.h"
__inline static intmax_t strtoimax(char const * __restrict nptr , char ** __restrict endptr ,
                                   int base )
{ long long tmp ;

  {
  {
# 400 "/usr/include/inttypes.h"
  tmp = __strtoll_internal(nptr, endptr, base, 0);
  }
# 400 "/usr/include/inttypes.h"
  return (tmp);
}
}
# 414 "/usr/include/inttypes.h"
__inline static __attribute__((__nothrow__)) uintmax_t strtoumax(char const * __restrict nptr ,
                                                                  char ** __restrict endptr ,
                                                                  int base ) ;
# 414 "/usr/include/inttypes.h"
__inline static uintmax_t strtoumax(char const * __restrict nptr , char ** __restrict endptr ,
                                    int base )
{ unsigned long long tmp ;

  {
  {
# 418 "/usr/include/inttypes.h"
  tmp = __strtoull_internal(nptr, endptr, base, 0);
  }
# 418 "/usr/include/inttypes.h"
  return (tmp);
}
}
# 424 "/usr/include/inttypes.h"
extern __attribute__((__nothrow__)) long long __wcstoll_internal(__gwchar_t const * __restrict __nptr ,
                                                                  __gwchar_t ** __restrict __endptr ,
                                                                  int __base , int __group ) ;
# 430 "/usr/include/inttypes.h"
__inline static __attribute__((__nothrow__)) intmax_t wcstoimax(__gwchar_t const * __restrict nptr ,
                                                                 __gwchar_t ** __restrict endptr ,
                                                                 int base ) ;
# 430 "/usr/include/inttypes.h"
__inline static intmax_t wcstoimax(__gwchar_t const * __restrict nptr , __gwchar_t ** __restrict endptr ,
                                   int base )
{ long long tmp ;

  {
  {
# 434 "/usr/include/inttypes.h"
  tmp = __wcstoll_internal(nptr, endptr, base, 0);
  }
# 434 "/usr/include/inttypes.h"
  return (tmp);
}
}
# 441 "/usr/include/inttypes.h"
extern __attribute__((__nothrow__)) unsigned long long __wcstoull_internal(__gwchar_t const * __restrict __nptr ,
                                                                            __gwchar_t ** __restrict __endptr ,
                                                                            int __base ,
                                                                            int __group ) ;
# 449 "/usr/include/inttypes.h"
__inline static __attribute__((__nothrow__)) uintmax_t wcstoumax(__gwchar_t const * __restrict nptr ,
                                                                  __gwchar_t ** __restrict endptr ,
                                                                  int base ) ;
# 449 "/usr/include/inttypes.h"
__inline static uintmax_t wcstoumax(__gwchar_t const * __restrict nptr , __gwchar_t ** __restrict endptr ,
                                    int base )
{ unsigned long long tmp ;

  {
  {
# 453 "/usr/include/inttypes.h"
  tmp = __wcstoull_internal(nptr, endptr, base, 0);
  }
# 453 "/usr/include/inttypes.h"
  return (tmp);
}
}
# 249 "/usr/include/pcre.h"
extern void *(*pcre_malloc)(size_t ) ;
# 250 "/usr/include/pcre.h"
extern void (*pcre_free)(void * ) ;
# 251 "/usr/include/pcre.h"
extern void *(*pcre_stack_malloc)(size_t ) ;
# 252 "/usr/include/pcre.h"
extern void (*pcre_stack_free)(void * ) ;
# 253 "/usr/include/pcre.h"
extern int (*pcre_callout)(pcre_callout_block * ) ;
# 264 "/usr/include/pcre.h"
extern pcre *pcre_compile(char const * , int , char const ** , int * , unsigned char const * ) ;
# 266 "/usr/include/pcre.h"
extern pcre *pcre_compile2(char const * , int , int * , char const ** , int * ,
                           unsigned char const * ) ;
# 268 "/usr/include/pcre.h"
extern int pcre_config(int , void * ) ;
# 269 "/usr/include/pcre.h"
extern int pcre_copy_named_substring(pcre const * , char const * , int * , int ,
                                     char const * , char * , int ) ;
# 271 "/usr/include/pcre.h"
extern int pcre_copy_substring(char const * , int * , int , int , char * , int ) ;
# 273 "/usr/include/pcre.h"
extern int pcre_dfa_exec(pcre const * , pcre_extra const * , char const * ,
                         int , int , int , int * , int , int * , int ) ;
# 275 "/usr/include/pcre.h"
extern int pcre_exec(pcre const * , pcre_extra const * , char const * , int ,
                     int , int , int * , int ) ;
# 277 "/usr/include/pcre.h"
extern void pcre_free_substring(char const * ) ;
# 278 "/usr/include/pcre.h"
extern void pcre_free_substring_list(char const ** ) ;
# 279 "/usr/include/pcre.h"
extern int pcre_fullinfo(pcre const * , pcre_extra const * , int , void * ) ;
# 281 "/usr/include/pcre.h"
extern int pcre_get_named_substring(pcre const * , char const * , int * , int ,
                                    char const * , char const ** ) ;
# 283 "/usr/include/pcre.h"
extern int pcre_get_stringnumber(pcre const * , char const * ) ;
# 284 "/usr/include/pcre.h"
extern int pcre_get_stringtable_entries(pcre const * , char const * , char ** ,
                                        char ** ) ;
# 286 "/usr/include/pcre.h"
extern int pcre_get_substring(char const * , int * , int , int , char const ** ) ;
# 288 "/usr/include/pcre.h"
extern int pcre_get_substring_list(char const * , int * , int , char const *** ) ;
# 290 "/usr/include/pcre.h"
extern int pcre_info(pcre const * , int * , int * ) ;
# 291 "/usr/include/pcre.h"
extern unsigned char const *pcre_maketables(void) ;
# 292 "/usr/include/pcre.h"
extern int pcre_refcount(pcre * , int ) ;
# 293 "/usr/include/pcre.h"
extern pcre_extra *pcre_study(pcre const * , int , char const ** ) ;
# 294 "/usr/include/pcre.h"
extern char const *pcre_version(void) ;
# 50 "array.h"
extern data_count *data_count_init(void) ;
# 58 "array.h"
extern data_string *data_string_init(void) ;
# 59 "array.h"
extern data_string *data_response_init(void) ;
# 67 "array.h"
extern data_array *data_array_init(void) ;
# 129 "array.h"
extern data_config *data_config_init(void) ;
# 137 "array.h"
extern data_integer *data_integer_init(void) ;
# 154 "array.h"
extern data_fastcgi *data_fastcgi_init(void) ;
# 156 "array.h"
extern array *array_init(void) ;
# 157 "array.h"
extern array *array_init_array(array *a ) ;
# 158 "array.h"
extern void array_free(array *a ) ;
# 159 "array.h"
extern void array_reset(array *a ) ;
# 160 "array.h"
extern int array_insert_unique(array *a , data_unset *str ) ;
# 161 "array.h"
extern data_unset *array_pop(array *a ) ;
# 162 "array.h"
extern int array_print(array *a , int depth ) ;
# 163 "array.h"
extern data_unset *array_get_unused_element(array *a , data_type_t t ) ;
# 164 "array.h"
extern data_unset *array_get_element(array *a , char const *key ) ;
# 165 "array.h"
extern data_unset *array_replace(array *a , data_unset *du ) ;
# 166 "array.h"
extern int array_strcasecmp(char const *a , size_t a_len , char const *b , size_t b_len ) ;
# 167 "array.h"
extern void array_print_indent(int depth ) ;
# 168 "array.h"
extern size_t array_get_max_key_length(array *a ) ;
# 49 "chunk.h"
extern chunkqueue *chunkqueue_init(void) ;
# 50 "chunk.h"
extern int chunkqueue_set_tempdirs(chunkqueue *c , array *tempdirs ) ;
# 51 "chunk.h"
extern int chunkqueue_append_file(chunkqueue *c , buffer *fn , off_t offset , off_t len ) ;
# 52 "chunk.h"
extern int chunkqueue_append_mem(chunkqueue *c , char const *mem , size_t len ) ;
# 53 "chunk.h"
extern int chunkqueue_append_buffer(chunkqueue *c , buffer *mem ) ;
# 54 "chunk.h"
extern int chunkqueue_append_buffer_weak(chunkqueue *c , buffer *mem ) ;
# 55 "chunk.h"
extern int chunkqueue_prepend_buffer(chunkqueue *c , buffer *mem ) ;
# 57 "chunk.h"
extern buffer *chunkqueue_get_append_buffer(chunkqueue *c ) ;
# 58 "chunk.h"
extern buffer *chunkqueue_get_prepend_buffer(chunkqueue *c ) ;
# 59 "chunk.h"
extern chunk *chunkqueue_get_append_tempfile(chunkqueue *cq ) ;
# 61 "chunk.h"
extern int chunkqueue_remove_finished_chunks(chunkqueue *cq ) ;
# 63 "chunk.h"
extern off_t chunkqueue_length(chunkqueue *c ) ;
# 64 "chunk.h"
extern off_t chunkqueue_written(chunkqueue *c ) ;
# 65 "chunk.h"
extern void chunkqueue_free(chunkqueue *c ) ;
# 66 "chunk.h"
extern void chunkqueue_reset(chunkqueue *c ) ;
# 68 "chunk.h"
extern int chunkqueue_is_empty(chunkqueue *c ) ;
# 82 "keyvalue.h"
extern char const *get_http_status_name(int i ) ;
# 83 "keyvalue.h"
extern char const *get_http_version_name(int i ) ;
# 84 "keyvalue.h"
extern char const *get_http_method_name(http_method_t i ) ;
# 85 "keyvalue.h"
extern char const *get_http_status_body_name(int i ) ;
# 86 "keyvalue.h"
extern int get_http_version_key(char const *s ) ;
# 87 "keyvalue.h"
extern http_method_t get_http_method_key(char const *s ) ;
# 89 "keyvalue.h"
extern char const *keyvalue_get_value(keyvalue *kv , int k ) ;
# 90 "keyvalue.h"
extern int keyvalue_get_key(keyvalue *kv , char const *s ) ;
# 92 "keyvalue.h"
extern keyvalue_buffer *keyvalue_buffer_init(void) ;
# 93 "keyvalue.h"
extern int keyvalue_buffer_append(keyvalue_buffer *kvb , int k , char const *value ) ;
# 94 "keyvalue.h"
extern void keyvalue_buffer_free(keyvalue_buffer *kvb ) ;
# 96 "keyvalue.h"
extern s_keyvalue_buffer *s_keyvalue_buffer_init(void) ;
# 97 "keyvalue.h"
extern int s_keyvalue_buffer_append(s_keyvalue_buffer *kvb , char const *key , char const *value ) ;
# 98 "keyvalue.h"
extern void s_keyvalue_buffer_free(s_keyvalue_buffer *kvb ) ;
# 100 "keyvalue.h"
extern httpauth_keyvalue_buffer *httpauth_keyvalue_buffer_init(void) ;
# 101 "keyvalue.h"
extern int httpauth_keyvalue_buffer_append(httpauth_keyvalue_buffer *kvb , char const *key ,
                                           char const *realm , httpauth_type type ) ;
# 102 "keyvalue.h"
extern void httpauth_keyvalue_buffer_free(httpauth_keyvalue_buffer *kvb ) ;
# 104 "keyvalue.h"
extern pcre_keyvalue_buffer *pcre_keyvalue_buffer_init(void) ;
# 105 "keyvalue.h"
extern int pcre_keyvalue_buffer_append(pcre_keyvalue_buffer *kvb , char const *key ,
                                       char const *value ) ;
# 106 "keyvalue.h"
extern void pcre_keyvalue_buffer_free(pcre_keyvalue_buffer *kvb ) ;
# 11 "bitset.h"
extern bitset *bitset_init(size_t nbits ) ;
# 12 "bitset.h"
extern void bitset_reset(bitset *set ) ;
# 13 "bitset.h"
extern void bitset_free(bitset *set ) ;
# 15 "bitset.h"
extern void bitset_clear_bit(bitset *set , size_t pos ) ;
# 16 "bitset.h"
extern void bitset_set_bit(bitset *set , size_t pos ) ;
# 17 "bitset.h"
extern int bitset_test_bit(bitset *set , size_t pos ) ;
# 90 "/usr/include/sys/epoll.h"
extern __attribute__((__nothrow__)) int epoll_create(int __size ) ;
# 99 "/usr/include/sys/epoll.h"
extern __attribute__((__nothrow__)) int epoll_ctl(int __epfd , int __op , int __fd ,
                                                   struct epoll_event *__event ) ;
# 113 "/usr/include/sys/epoll.h"
extern int epoll_wait(int __epfd , struct epoll_event *__events , int __maxevents ,
                      int __timeout ) ;
# 122 "/usr/include/sys/epoll.h"
extern int epoll_pwait(int __epfd , struct epoll_event *__events , int __maxevents ,
                       int __timeout , __sigset_t const *__ss ) ;
# 58 "/usr/include/sys/poll.h"
extern int poll(struct pollfd *__fds , nfds_t __nfds , int __timeout ) ;
# 193 "fdevent.h"
extern fdevents *fdevent_init(size_t maxfds , fdevent_handler_t type ) ;
# 194 "fdevent.h"
extern int fdevent_reset(fdevents *ev ) ;
# 195 "fdevent.h"
extern void fdevent_free(fdevents *ev ) ;
# 197 "fdevent.h"
extern int fdevent_event_add(fdevents *ev , int *fde_ndx , int fd , int events ) ;
# 198 "fdevent.h"
extern int fdevent_event_del(fdevents *ev , int *fde_ndx , int fd ) ;
# 199 "fdevent.h"
extern int fdevent_event_get_revent(fdevents *ev , size_t ndx ) ;
# 200 "fdevent.h"
extern int fdevent_event_get_fd(fdevents *ev , size_t ndx ) ;
# 201 "fdevent.h"
extern fdevent_handler fdevent_get_handler(fdevents *ev , int fd ) ;
# 202 "fdevent.h"
extern void *fdevent_get_context(fdevents *ev , int fd ) ;
# 204 "fdevent.h"
extern int fdevent_event_next_fdndx(fdevents *ev , int ndx ) ;
# 206 "fdevent.h"
extern int fdevent_poll(fdevents *ev , int timeout_ms ) ;
# 208 "fdevent.h"
extern int fdevent_register(fdevents *ev , int fd , handler_t (*handler)(void *srv ,
                                                                         void *ctx ,
                                                                         int revents ) ,
                            void *ctx ) ;
# 209 "fdevent.h"
extern int fdevent_unregister(fdevents *ev , int fd ) ;
# 211 "fdevent.h"
extern int fdevent_fcntl_set(fdevents *ev , int fd ) ;
# 213 "fdevent.h"
extern int fdevent_select_init(fdevents *ev ) ;
# 214 "fdevent.h"
extern int fdevent_poll_init(fdevents *ev ) ;
# 215 "fdevent.h"
extern int fdevent_linux_rtsig_init(fdevents *ev ) ;
# 216 "fdevent.h"
extern int fdevent_linux_sysepoll_init(fdevents *ev ) ;
# 217 "fdevent.h"
extern int fdevent_solaris_devpoll_init(fdevents *ev ) ;
# 218 "fdevent.h"
extern int fdevent_freebsd_kqueue_init(fdevents *ev ) ;
# 40 "/usr/include/sys/uio.h"
extern ssize_t readv(int __fd , struct iovec const *__iovec , int __count ) ;
# 50 "/usr/include/sys/uio.h"
extern ssize_t writev(int __fd , struct iovec const *__iovec , int __count ) ;
# 264 "/usr/include/bits/socket.h"
__inline static __attribute__((__nothrow__)) struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                            struct cmsghdr *__cmsg ) ;
# 270 "/usr/include/bits/socket.h"
__inline static __attribute__((__nothrow__)) struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                            struct cmsghdr *__cmsg ) ;
# 270 "/usr/include/bits/socket.h"
__inline static struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr , struct cmsghdr *__cmsg )
{

  {
# 273 "/usr/include/bits/socket.h"
  if (__cmsg->cmsg_len < sizeof(struct cmsghdr )) {
# 275 "/usr/include/bits/socket.h"
    return ((struct cmsghdr *)0);
  }
# 277 "/usr/include/bits/socket.h"
  __cmsg = (struct cmsghdr *)((unsigned char *)__cmsg + (((__cmsg->cmsg_len + sizeof(size_t )) - 1U) & ~ (sizeof(size_t ) - 1U)));
# 279 "/usr/include/bits/socket.h"
  if ((unsigned int )((unsigned char *)(__cmsg + 1)) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
# 284 "/usr/include/bits/socket.h"
    return ((struct cmsghdr *)0);
  } else {
# 279 "/usr/include/bits/socket.h"
    if ((unsigned int )((unsigned char *)__cmsg + (((__cmsg->cmsg_len + sizeof(size_t )) - 1U) & ~ (sizeof(size_t ) - 1U))) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
# 284 "/usr/include/bits/socket.h"
      return ((struct cmsghdr *)0);
    }
  }
# 285 "/usr/include/bits/socket.h"
  return (__cmsg);
}
}
# 100 "/usr/include/sys/socket.h"
extern __attribute__((__nothrow__)) int socket(int __domain , int __type , int __protocol ) ;
# 106 "/usr/include/sys/socket.h"
extern __attribute__((__nothrow__)) int socketpair(int __domain , int __type , int __protocol ,
                                                    int *__fds ) ;
# 110 "/usr/include/sys/socket.h"
extern __attribute__((__nothrow__)) int bind(int __fd , struct sockaddr const *__addr ,
                                              socklen_t __len ) ;
# 114 "/usr/include/sys/socket.h"
extern __attribute__((__nothrow__)) int getsockname(int __fd , struct sockaddr * __restrict __addr ,
                                                     socklen_t * __restrict __len ) ;
# 124 "/usr/include/sys/socket.h"
extern int connect(int __fd , struct sockaddr const *__addr , socklen_t __len ) ;
# 128 "/usr/include/sys/socket.h"
extern __attribute__((__nothrow__)) int getpeername(int __fd , struct sockaddr * __restrict __addr ,
                                                     socklen_t * __restrict __len ) ;
# 136 "/usr/include/sys/socket.h"
extern ssize_t send(int __fd , void const *__buf , size_t __n , int __flags ) ;
# 143 "/usr/include/sys/socket.h"
extern ssize_t recv(int __fd , void *__buf , size_t __n , int __flags ) ;
# 150 "/usr/include/sys/socket.h"
extern ssize_t sendto(int __fd , void const *__buf , size_t __n , int __flags ,
                      struct sockaddr const *__addr , socklen_t __addr_len ) ;
# 161 "/usr/include/sys/socket.h"
extern ssize_t recvfrom(int __fd , void * __restrict __buf , size_t __n , int __flags ,
                        struct sockaddr * __restrict __addr , socklen_t * __restrict __addr_len ) ;
# 171 "/usr/include/sys/socket.h"
extern ssize_t sendmsg(int __fd , struct msghdr const *__message , int __flags ) ;
# 179 "/usr/include/sys/socket.h"
extern ssize_t recvmsg(int __fd , struct msghdr *__message , int __flags ) ;
# 185 "/usr/include/sys/socket.h"
extern __attribute__((__nothrow__)) int getsockopt(int __fd , int __level , int __optname ,
                                                    void * __restrict __optval ,
                                                    socklen_t * __restrict __optlen ) ;
# 192 "/usr/include/sys/socket.h"
extern __attribute__((__nothrow__)) int setsockopt(int __fd , int __level , int __optname ,
                                                    void const *__optval , socklen_t __optlen ) ;
# 199 "/usr/include/sys/socket.h"
extern __attribute__((__nothrow__)) int listen(int __fd , int __n ) ;
# 209 "/usr/include/sys/socket.h"
extern int accept(int __fd , struct sockaddr * __restrict __addr , socklen_t * __restrict __addr_len ) ;
# 218 "/usr/include/sys/socket.h"
extern __attribute__((__nothrow__)) int shutdown(int __fd , int __how ) ;
# 223 "/usr/include/sys/socket.h"
extern __attribute__((__nothrow__)) int sockatmark(int __fd ) ;
# 231 "/usr/include/sys/socket.h"
extern __attribute__((__nothrow__)) int isfdtype(int __fd , int __fdtype ) ;
# 51 "/usr/include/asm-generic/ioctl.h"
extern unsigned int __invalid_size_argument_for_IOC ;
# 42 "/usr/include/sys/ioctl.h"
extern __attribute__((__nothrow__)) int ioctl(int __fd , unsigned long __request
                                               , ...) ;
# 206 "/usr/include/netinet/in.h"
extern struct in6_addr const in6addr_any ;
# 207 "/usr/include/netinet/in.h"
extern struct in6_addr const in6addr_loopback ;
# 354 "/usr/include/netinet/in.h"
extern __attribute__((__nothrow__)) uint32_t ntohl(uint32_t __netlong ) __attribute__((__const__)) ;
# 355 "/usr/include/netinet/in.h"
extern __attribute__((__nothrow__)) uint16_t ntohs(uint16_t __netshort ) __attribute__((__const__)) ;
# 357 "/usr/include/netinet/in.h"
extern __attribute__((__nothrow__)) uint32_t htonl(uint32_t __hostlong ) __attribute__((__const__)) ;
# 359 "/usr/include/netinet/in.h"
extern __attribute__((__nothrow__)) uint16_t htons(uint16_t __hostshort ) __attribute__((__const__)) ;
# 428 "/usr/include/netinet/in.h"
extern __attribute__((__nothrow__)) int bindresvport(int __sockfd , struct sockaddr_in *__sock_in ) ;
# 431 "/usr/include/netinet/in.h"
extern __attribute__((__nothrow__)) int bindresvport6(int __sockfd , struct sockaddr_in6 *__sock_in ) ;
# 35 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) in_addr_t inet_addr(char const *__cp ) ;
# 38 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) in_addr_t inet_lnaof(struct in_addr __in ) ;
# 42 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) struct in_addr inet_makeaddr(in_addr_t __net ,
                                                                  in_addr_t __host ) ;
# 46 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) in_addr_t inet_netof(struct in_addr __in ) ;
# 50 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) in_addr_t inet_network(char const *__cp ) ;
# 54 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) char *inet_ntoa(struct in_addr __in ) ;
# 59 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) int inet_pton(int __af , char const * __restrict __cp ,
                                                   void * __restrict __buf ) ;
# 65 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) char const *inet_ntop(int __af , void const * __restrict __cp ,
                                                             char * __restrict __buf ,
                                                             socklen_t __len ) ;
# 74 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) int inet_aton(char const *__cp , struct in_addr *__inp ) ;
# 78 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) char *inet_neta(in_addr_t __net , char *__buf ,
                                                     size_t __len ) ;
# 83 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) char *inet_net_ntop(int __af , void const *__cp ,
                                                         int __bits , char *__buf ,
                                                         size_t __len ) ;
# 89 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) int inet_net_pton(int __af , char const *__cp ,
                                                       void *__buf , size_t __len ) ;
# 95 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) unsigned int inet_nsap_addr(char const *__cp ,
                                                                 unsigned char *__buf ,
                                                                 int __len ) ;
# 100 "/usr/include/arpa/inet.h"
extern __attribute__((__nothrow__)) char *inet_nsap_ntoa(int __len , unsigned char const *__cp ,
                                                          char *__buf ) ;
# 53 "/usr/include/rpc/netdb.h"
extern __attribute__((__nothrow__)) void setrpcent(int __stayopen ) ;
# 54 "/usr/include/rpc/netdb.h"
extern __attribute__((__nothrow__)) void endrpcent(void) ;
# 55 "/usr/include/rpc/netdb.h"
extern __attribute__((__nothrow__)) struct rpcent *getrpcbyname(char const *__name ) ;
# 56 "/usr/include/rpc/netdb.h"
extern __attribute__((__nothrow__)) struct rpcent *getrpcbynumber(int __number ) ;
# 57 "/usr/include/rpc/netdb.h"
extern __attribute__((__nothrow__)) struct rpcent *getrpcent(void) ;
# 60 "/usr/include/rpc/netdb.h"
extern __attribute__((__nothrow__)) int getrpcbyname_r(char const *__name , struct rpcent *__result_buf ,
                                                        char *__buffer , size_t __buflen ,
                                                        struct rpcent **__result ) ;
# 64 "/usr/include/rpc/netdb.h"
extern __attribute__((__nothrow__)) int getrpcbynumber_r(int __number , struct rpcent *__result_buf ,
                                                          char *__buffer , size_t __buflen ,
                                                          struct rpcent **__result ) ;
# 68 "/usr/include/rpc/netdb.h"
extern __attribute__((__nothrow__)) int getrpcent_r(struct rpcent *__result_buf ,
                                                     char *__buffer , size_t __buflen ,
                                                     struct rpcent **__result ) ;
# 61 "/usr/include/netdb.h"
extern __attribute__((__nothrow__)) int *__h_errno_location(void) __attribute__((__const__)) ;
# 88 "/usr/include/netdb.h"
extern __attribute__((__nothrow__)) void herror(char const *__str ) ;
# 91 "/usr/include/netdb.h"
extern __attribute__((__nothrow__)) char const *hstrerror(int __err_num ) ;
# 111 "/usr/include/netdb.h"
extern void sethostent(int __stay_open ) ;
# 117 "/usr/include/netdb.h"
extern void endhostent(void) ;
# 124 "/usr/include/netdb.h"
extern struct hostent *gethostent(void) ;
# 131 "/usr/include/netdb.h"
extern struct hostent *gethostbyaddr(void const *__addr , __socklen_t __len , int __type ) ;
# 138 "/usr/include/netdb.h"
extern struct hostent *gethostbyname(char const *__name ) ;
# 149 "/usr/include/netdb.h"
extern struct hostent *gethostbyname2(char const *__name , int __af ) ;
# 161 "/usr/include/netdb.h"
extern int gethostent_r(struct hostent * __restrict __result_buf , char * __restrict __buf ,
                        size_t __buflen , struct hostent ** __restrict __result ,
                        int * __restrict __h_errnop ) ;
# 166 "/usr/include/netdb.h"
extern int gethostbyaddr_r(void const * __restrict __addr , __socklen_t __len ,
                           int __type , struct hostent * __restrict __result_buf ,
                           char * __restrict __buf , size_t __buflen , struct hostent ** __restrict __result ,
                           int * __restrict __h_errnop ) ;
# 173 "/usr/include/netdb.h"
extern int gethostbyname_r(char const * __restrict __name , struct hostent * __restrict __result_buf ,
                           char * __restrict __buf , size_t __buflen , struct hostent ** __restrict __result ,
                           int * __restrict __h_errnop ) ;
# 179 "/usr/include/netdb.h"
extern int gethostbyname2_r(char const * __restrict __name , int __af , struct hostent * __restrict __result_buf ,
                            char * __restrict __buf , size_t __buflen , struct hostent ** __restrict __result ,
                            int * __restrict __h_errnop ) ;
# 192 "/usr/include/netdb.h"
extern void setnetent(int __stay_open ) ;
# 198 "/usr/include/netdb.h"
extern void endnetent(void) ;
# 205 "/usr/include/netdb.h"
extern struct netent *getnetent(void) ;
# 212 "/usr/include/netdb.h"
extern struct netent *getnetbyaddr(uint32_t __net , int __type ) ;
# 218 "/usr/include/netdb.h"
extern struct netent *getnetbyname(char const *__name ) ;
# 231 "/usr/include/netdb.h"
extern int getnetent_r(struct netent * __restrict __result_buf , char * __restrict __buf ,
                       size_t __buflen , struct netent ** __restrict __result , int * __restrict __h_errnop ) ;
# 236 "/usr/include/netdb.h"
extern int getnetbyaddr_r(uint32_t __net , int __type , struct netent * __restrict __result_buf ,
                          char * __restrict __buf , size_t __buflen , struct netent ** __restrict __result ,
                          int * __restrict __h_errnop ) ;
# 242 "/usr/include/netdb.h"
extern int getnetbyname_r(char const * __restrict __name , struct netent * __restrict __result_buf ,
                          char * __restrict __buf , size_t __buflen , struct netent ** __restrict __result ,
                          int * __restrict __h_errnop ) ;
# 264 "/usr/include/netdb.h"
extern void setservent(int __stay_open ) ;
# 270 "/usr/include/netdb.h"
extern void endservent(void) ;
# 277 "/usr/include/netdb.h"
extern struct servent *getservent(void) ;
# 284 "/usr/include/netdb.h"
extern struct servent *getservbyname(char const *__name , char const *__proto ) ;
# 292 "/usr/include/netdb.h"
extern struct servent *getservbyport(int __port , char const *__proto ) ;
# 303 "/usr/include/netdb.h"
extern int getservent_r(struct servent * __restrict __result_buf , char * __restrict __buf ,
                        size_t __buflen , struct servent ** __restrict __result ) ;
# 307 "/usr/include/netdb.h"
extern int getservbyname_r(char const * __restrict __name , char const * __restrict __proto ,
                           struct servent * __restrict __result_buf , char * __restrict __buf ,
                           size_t __buflen , struct servent ** __restrict __result ) ;
# 313 "/usr/include/netdb.h"
extern int getservbyport_r(int __port , char const * __restrict __proto , struct servent * __restrict __result_buf ,
                           char * __restrict __buf , size_t __buflen , struct servent ** __restrict __result ) ;
# 333 "/usr/include/netdb.h"
extern void setprotoent(int __stay_open ) ;
# 339 "/usr/include/netdb.h"
extern void endprotoent(void) ;
# 346 "/usr/include/netdb.h"
extern struct protoent *getprotoent(void) ;
# 352 "/usr/include/netdb.h"
extern struct protoent *getprotobyname(char const *__name ) ;
# 358 "/usr/include/netdb.h"
extern struct protoent *getprotobynumber(int __proto ) ;
# 369 "/usr/include/netdb.h"
extern int getprotoent_r(struct protoent * __restrict __result_buf , char * __restrict __buf ,
                         size_t __buflen , struct protoent ** __restrict __result ) ;
# 373 "/usr/include/netdb.h"
extern int getprotobyname_r(char const * __restrict __name , struct protoent * __restrict __result_buf ,
                            char * __restrict __buf , size_t __buflen , struct protoent ** __restrict __result ) ;
# 378 "/usr/include/netdb.h"
extern int getprotobynumber_r(int __proto , struct protoent * __restrict __result_buf ,
                              char * __restrict __buf , size_t __buflen , struct protoent ** __restrict __result ) ;
# 390 "/usr/include/netdb.h"
extern int setnetgrent(char const *__netgroup ) ;
# 398 "/usr/include/netdb.h"
extern void endnetgrent(void) ;
# 407 "/usr/include/netdb.h"
extern int getnetgrent(char ** __restrict __hostp , char ** __restrict __userp ,
                       char ** __restrict __domainp ) ;
# 418 "/usr/include/netdb.h"
extern int innetgr(char const *__netgroup , char const *__host , char const *__user ,
                   char const *domain ) ;
# 427 "/usr/include/netdb.h"
extern int getnetgrent_r(char ** __restrict __hostp , char ** __restrict __userp ,
                         char ** __restrict __domainp , char * __restrict __buffer ,
                         size_t __buflen ) ;
# 446 "/usr/include/netdb.h"
extern int rcmd(char ** __restrict __ahost , unsigned short __rport , char const * __restrict __locuser ,
                char const * __restrict __remuser , char const * __restrict __cmd ,
                int * __restrict __fd2p ) ;
# 458 "/usr/include/netdb.h"
extern int rcmd_af(char ** __restrict __ahost , unsigned short __rport , char const * __restrict __locuser ,
                   char const * __restrict __remuser , char const * __restrict __cmd ,
                   int * __restrict __fd2p , sa_family_t __af ) ;
# 474 "/usr/include/netdb.h"
extern int rexec(char ** __restrict __ahost , int __rport , char const * __restrict __name ,
                 char const * __restrict __pass , char const * __restrict __cmd ,
                 int * __restrict __fd2p ) ;
# 486 "/usr/include/netdb.h"
extern int rexec_af(char ** __restrict __ahost , int __rport , char const * __restrict __name ,
                    char const * __restrict __pass , char const * __restrict __cmd ,
                    int * __restrict __fd2p , sa_family_t __af ) ;
# 500 "/usr/include/netdb.h"
extern int ruserok(char const *__rhost , int __suser , char const *__remuser ,
                   char const *__locuser ) ;
# 510 "/usr/include/netdb.h"
extern int ruserok_af(char const *__rhost , int __suser , char const *__remuser ,
                      char const *__locuser , sa_family_t __af ) ;
# 522 "/usr/include/netdb.h"
extern int rresvport(int *__alport ) ;
# 531 "/usr/include/netdb.h"
extern int rresvport_af(int *__alport , sa_family_t __af ) ;
# 631 "/usr/include/netdb.h"
extern int getaddrinfo(char const * __restrict __name , char const * __restrict __service ,
                       struct addrinfo const * __restrict __req , struct addrinfo ** __restrict __pai ) ;
# 637 "/usr/include/netdb.h"
extern __attribute__((__nothrow__)) void freeaddrinfo(struct addrinfo *__ai ) ;
# 640 "/usr/include/netdb.h"
extern __attribute__((__nothrow__)) char const *gai_strerror(int __ecode ) ;
# 646 "/usr/include/netdb.h"
extern int getnameinfo(struct sockaddr const * __restrict __sa , socklen_t __salen ,
                       char * __restrict __host , socklen_t __hostlen , char * __restrict __serv ,
                       socklen_t __servlen , unsigned int __flags ) ;
# 13 "splaytree.h"
extern splay_tree *splaytree_splay(splay_tree *t , int key ) ;
# 14 "splaytree.h"
extern splay_tree *splaytree_insert(splay_tree *t , int key , void *data ) ;
# 15 "splaytree.h"
extern splay_tree *splaytree_delete(splay_tree *t , int key ) ;
# 16 "splaytree.h"
extern splay_tree *splaytree_size(splay_tree *t ) ;
# 12 "etag.h"
extern int etag_is_equal(buffer *etag , char const *matches ) ;
# 13 "etag.h"
extern int etag_create(buffer *etag , struct stat *st , etag_flags_t flags ) ;
# 14 "etag.h"
extern int etag_mutate(buffer *mut , buffer *etag ) ;
# 64 "base.h"
extern char **environ ;
# 13 "server.h"
extern int config_read(server *srv , char const *fn ) ;
# 14 "server.h"
extern int config_set_defaults(server *srv ) ;
# 15 "server.h"
extern buffer *config_get_value_buffer(server *srv , connection *con , config_var_t field ) ;
# 8 "log.h"
extern int log_error_open(server *srv ) ;
# 9 "log.h"
extern int log_error_close(server *srv ) ;
# 10 "log.h"
extern int log_error_write(server *srv , char const *filename , unsigned int line ,
                           char const *fmt , ...) ;
# 11 "log.h"
extern int log_error_cycle(server *srv ) ;
# 7 "http_chunk.h"
extern int http_chunk_append_mem(server *srv , connection *con , char const *mem ,
                                 size_t len ) ;
# 8 "http_chunk.h"
extern int http_chunk_append_buffer(server *srv , connection *con , buffer *mem ) ;
# 9 "http_chunk.h"
extern int http_chunk_append_file(server *srv , connection *con , buffer *fn , off_t offset ,
                                  off_t len ) ;
# 10 "http_chunk.h"
extern off_t http_chunkqueue_length(server *srv , connection *con ) ;
# 7 "connections.h"
extern connection *connection_init(server *srv ) ;
# 8 "connections.h"
extern int connection_reset(server *srv , connection *con ) ;
# 9 "connections.h"
extern void connections_free(server *srv ) ;
# 11 "connections.h"
extern connection *connection_accept(server *srv , server_socket *srv_sock ) ;
# 12 "connections.h"
extern int connection_close(server *srv , connection *con ) ;
# 14 "connections.h"
extern int connection_set_state(server *srv , connection *con , connection_state_t state ) ;
# 15 "connections.h"
extern char const *connection_get_state(connection_state_t state ) ;
# 16 "connections.h"
extern char const *connection_get_short_state(connection_state_t state ) ;
# 17 "connections.h"
extern int connection_state_machine(server *srv , connection *con ) ;
# 184 "/usr/include/time.h"
extern __attribute__((__nothrow__)) clock_t clock(void) ;
# 187 "/usr/include/time.h"
extern __attribute__((__nothrow__)) time_t time(time_t *__timer ) ;
# 190 "/usr/include/time.h"
extern __attribute__((__nothrow__)) double difftime(time_t __time1 , time_t __time0 ) __attribute__((__const__)) ;
# 194 "/usr/include/time.h"
extern __attribute__((__nothrow__)) time_t mktime(struct tm *__tp ) ;
# 200 "/usr/include/time.h"
extern __attribute__((__nothrow__)) size_t strftime(char * __restrict __s , size_t __maxsize ,
                                                     char const * __restrict __format ,
                                                     struct tm const * __restrict __tp ) ;
# 232 "/usr/include/time.h"
extern __attribute__((__nothrow__)) struct tm *gmtime(time_t const *__timer ) ;
# 236 "/usr/include/time.h"
extern __attribute__((__nothrow__)) struct tm *localtime(time_t const *__timer ) ;
# 242 "/usr/include/time.h"
extern __attribute__((__nothrow__)) struct tm *gmtime_r(time_t const * __restrict __timer ,
                                                         struct tm * __restrict __tp ) ;
# 247 "/usr/include/time.h"
extern __attribute__((__nothrow__)) struct tm *localtime_r(time_t const * __restrict __timer ,
                                                            struct tm * __restrict __tp ) ;
# 254 "/usr/include/time.h"
extern __attribute__((__nothrow__)) char *asctime(struct tm const *__tp ) ;
# 257 "/usr/include/time.h"
extern __attribute__((__nothrow__)) char *ctime(time_t const *__timer ) ;
# 265 "/usr/include/time.h"
extern __attribute__((__nothrow__)) char *asctime_r(struct tm const * __restrict __tp ,
                                                     char * __restrict __buf ) ;
# 269 "/usr/include/time.h"
extern __attribute__((__nothrow__)) char *ctime_r(time_t const * __restrict __timer ,
                                                   char * __restrict __buf ) ;
# 275 "/usr/include/time.h"
extern char *__tzname[2] ;
# 276 "/usr/include/time.h"
extern int __daylight ;
# 277 "/usr/include/time.h"
extern long __timezone ;
# 282 "/usr/include/time.h"
extern char *tzname[2] ;
# 286 "/usr/include/time.h"
extern __attribute__((__nothrow__)) void tzset(void) ;
# 290 "/usr/include/time.h"
extern int daylight ;
# 291 "/usr/include/time.h"
extern long timezone ;
# 297 "/usr/include/time.h"
extern __attribute__((__nothrow__)) int stime(time_t const *__when ) ;
# 312 "/usr/include/time.h"
extern __attribute__((__nothrow__)) time_t timegm(struct tm *__tp ) ;
# 315 "/usr/include/time.h"
extern __attribute__((__nothrow__)) time_t timelocal(struct tm *__tp ) ;
# 318 "/usr/include/time.h"
extern __attribute__((__nothrow__)) int dysize(int __year ) __attribute__((__const__)) ;
# 327 "/usr/include/time.h"
extern int nanosleep(struct timespec const *__requested_time , struct timespec *__remaining ) ;
# 332 "/usr/include/time.h"
extern __attribute__((__nothrow__)) int clock_getres(clockid_t __clock_id , struct timespec *__res ) ;
# 335 "/usr/include/time.h"
extern __attribute__((__nothrow__)) int clock_gettime(clockid_t __clock_id , struct timespec *__tp ) ;
# 338 "/usr/include/time.h"
extern __attribute__((__nothrow__)) int clock_settime(clockid_t __clock_id , struct timespec const *__tp ) ;
# 346 "/usr/include/time.h"
extern int clock_nanosleep(clockid_t __clock_id , int __flags , struct timespec const *__req ,
                           struct timespec *__rem ) ;
# 351 "/usr/include/time.h"
extern __attribute__((__nothrow__)) int clock_getcpuclockid(pid_t __pid , clockid_t *__clock_id ) ;
# 356 "/usr/include/time.h"
extern __attribute__((__nothrow__)) int timer_create(clockid_t __clock_id , struct sigevent * __restrict __evp ,
                                                      timer_t * __restrict __timerid ) ;
# 361 "/usr/include/time.h"
extern __attribute__((__nothrow__)) int timer_delete(timer_t __timerid ) ;
# 364 "/usr/include/time.h"
extern __attribute__((__nothrow__)) int timer_settime(timer_t __timerid , int __flags ,
                                                       struct itimerspec const * __restrict __value ,
                                                       struct itimerspec * __restrict __ovalue ) ;
# 369 "/usr/include/time.h"
extern __attribute__((__nothrow__)) int timer_gettime(timer_t __timerid , struct itimerspec *__value ) ;
# 373 "/usr/include/time.h"
extern __attribute__((__nothrow__)) int timer_getoverrun(timer_t __timerid ) ;
# 8 "response.h"
extern int http_response_parse(server *srv , connection *con ) ;
# 9 "response.h"
extern int http_response_write_header(server *srv , connection *con ) ;
# 11 "response.h"
extern int response_header_insert(server *srv , connection *con , char const *key ,
                                  size_t keylen , char const *value , size_t vallen ) ;
# 12 "response.h"
extern int response_header_overwrite(server *srv , connection *con , char const *key ,
                                     size_t keylen , char const *value , size_t vallen ) ;
# 14 "response.h"
extern handler_t http_response_prepare(server *srv , connection *con ) ;
# 15 "response.h"
extern int http_response_redirect_to_directory(server *srv , connection *con ) ;
# 16 "response.h"
extern int http_response_handle_cachable(server *srv , connection *con , buffer *mtime ) ;
# 18 "response.h"
extern buffer *strftime_cache_get(server *srv , time_t last_mod ) ;
# 6 "joblist.h"
extern int joblist_append(server *srv , connection *con ) ;
# 7 "joblist.h"
extern void joblist_free(server *srv , connections *joblist ) ;
# 9 "joblist.h"
extern int fdwaitqueue_append(server *srv , connection *con ) ;
# 10 "joblist.h"
extern void fdwaitqueue_free(server *srv , connections *fdwaitqueue ) ;
# 11 "joblist.h"
extern connection *fdwaitqueue_unshift(server *srv , connections *fdwaitqueue ) ;
# 64 "plugin.h"
extern int plugins_load(server *srv ) ;
# 65 "plugin.h"
extern void plugins_free(server *srv ) ;
# 67 "plugin.h"
extern handler_t plugins_call_handle_uri_raw(server *srv , connection *con ) ;
# 68 "plugin.h"
extern handler_t plugins_call_handle_uri_clean(server *srv , connection *con ) ;
# 69 "plugin.h"
extern handler_t plugins_call_handle_subrequest_start(server *srv , connection *con ) ;
# 70 "plugin.h"
extern handler_t plugins_call_handle_subrequest(server *srv , connection *con ) ;
# 71 "plugin.h"
extern handler_t plugins_call_handle_request_done(server *srv , connection *con ) ;
# 72 "plugin.h"
extern handler_t plugins_call_handle_docroot(server *srv , connection *con ) ;
# 73 "plugin.h"
extern handler_t plugins_call_handle_physical(server *srv , connection *con ) ;
# 74 "plugin.h"
extern handler_t plugins_call_handle_connection_close(server *srv , connection *con ) ;
# 75 "plugin.h"
extern handler_t plugins_call_handle_joblist(server *srv , connection *con ) ;
# 76 "plugin.h"
extern handler_t plugins_call_connection_reset(server *srv , connection *con ) ;
# 78 "plugin.h"
extern handler_t plugins_call_handle_trigger(server *srv ) ;
# 79 "plugin.h"
extern handler_t plugins_call_handle_sighup(server *srv ) ;
# 81 "plugin.h"
extern handler_t plugins_call_init(server *srv ) ;
# 82 "plugin.h"
extern handler_t plugins_call_set_defaults(server *srv ) ;
# 83 "plugin.h"
extern handler_t plugins_call_cleanup(server *srv ) ;
# 85 "plugin.h"
extern int config_insert_values_global(server *srv , array *ca , config_values_t const *cv ) ;
# 86 "plugin.h"
extern int config_insert_values_internal(server *srv , array *ca , config_values_t const *cv ) ;
# 87 "plugin.h"
extern int config_setup_connection(server *srv , connection *con ) ;
# 88 "plugin.h"
extern int config_patch_connection(server *srv , connection *con , comp_key_t comp ) ;
# 89 "plugin.h"
extern int config_check_cond(server *srv , connection *con , data_config *dc ) ;
# 90 "plugin.h"
extern int config_append_cond_match_buffer(connection *con , data_config *dc , buffer *buf ,
                                           int n ) ;
# 5 "inet_ntop_cache.h"
extern char const *inet_ntop_cache_get_ip(server *srv , sock_addr *addr ) ;
# 6 "stat_cache.h"
extern stat_cache *stat_cache_init(void) ;
# 7 "stat_cache.h"
extern void stat_cache_free(stat_cache *fc ) ;
# 9 "stat_cache.h"
extern handler_t stat_cache_get_entry(server *srv , connection *con , buffer *name ,
                                      stat_cache_entry **fce ) ;
# 10 "stat_cache.h"
extern handler_t stat_cache_handle_fdevent(void *_srv , void *_fce , int revent ) ;
# 12 "stat_cache.h"
extern int stat_cache_trigger_cleanup(server *srv ) ;
# 9 "status_counter.h"
extern data_integer *status_counter_get_counter(server *srv , char const *s , size_t len ) ;
# 10 "status_counter.h"
extern int status_counter_inc(server *srv , char const *s , size_t len ) ;
# 11 "status_counter.h"
extern int status_counter_dec(server *srv , char const *s , size_t len ) ;
# 12 "status_counter.h"
extern int status_counter_set(server *srv , char const *s , size_t len , int val ) ;
# 343 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
# 344 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
# 345 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
# 413 "/usr/include/libio.h"
extern int __underflow(_IO_FILE * ) ;
# 414 "/usr/include/libio.h"
extern int __uflow(_IO_FILE * ) ;
# 415 "/usr/include/libio.h"
extern int __overflow(_IO_FILE * , int ) ;
# 416 "/usr/include/libio.h"
extern wint_t __wunderflow(_IO_FILE * ) ;
# 417 "/usr/include/libio.h"
extern wint_t __wuflow(_IO_FILE * ) ;
# 418 "/usr/include/libio.h"
extern wint_t __woverflow(_IO_FILE * , wint_t ) ;
# 451 "/usr/include/libio.h"
extern int _IO_getc(_IO_FILE *__fp ) ;
# 452 "/usr/include/libio.h"
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
# 453 "/usr/include/libio.h"
extern __attribute__((__nothrow__)) int _IO_feof(_IO_FILE *__fp ) ;
# 454 "/usr/include/libio.h"
extern __attribute__((__nothrow__)) int _IO_ferror(_IO_FILE *__fp ) ;
# 456 "/usr/include/libio.h"
extern int _IO_peekc_locked(_IO_FILE *__fp ) ;
# 462 "/usr/include/libio.h"
extern __attribute__((__nothrow__)) void _IO_flockfile(_IO_FILE * ) ;
# 463 "/usr/include/libio.h"
extern __attribute__((__nothrow__)) void _IO_funlockfile(_IO_FILE * ) ;
# 464 "/usr/include/libio.h"
extern __attribute__((__nothrow__)) int _IO_ftrylockfile(_IO_FILE * ) ;
# 481 "/usr/include/libio.h"
extern int _IO_vfscanf(_IO_FILE * __restrict , char const * __restrict , __gnuc_va_list ,
                       int * __restrict ) ;
# 483 "/usr/include/libio.h"
extern int _IO_vfprintf(_IO_FILE * __restrict , char const * __restrict , __gnuc_va_list ) ;
# 485 "/usr/include/libio.h"
extern __ssize_t _IO_padn(_IO_FILE * , int , __ssize_t ) ;
# 486 "/usr/include/libio.h"
extern size_t _IO_sgetn(_IO_FILE * , void * , size_t ) ;
# 488 "/usr/include/libio.h"
extern __off64_t _IO_seekoff(_IO_FILE * , __off64_t , int , int ) ;
# 489 "/usr/include/libio.h"
extern __off64_t _IO_seekpos(_IO_FILE * , __off64_t , int ) ;
# 491 "/usr/include/libio.h"
extern __attribute__((__nothrow__)) void _IO_free_backup_area(_IO_FILE * ) ;
# 145 "/usr/include/stdio.h"
extern struct _IO_FILE *stdin ;
# 146 "/usr/include/stdio.h"
extern struct _IO_FILE *stdout ;
# 147 "/usr/include/stdio.h"
extern struct _IO_FILE *stderr ;
# 157 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int remove(char const *__filename ) ;
# 159 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int rename(char const *__old , char const *__new ) ;
# 177 "/usr/include/stdio.h"
extern FILE *tmpfile(void) __asm__("tmpfile64") ;
# 188 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
# 194 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
# 206 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) char *tempnam(char const *__dir , char const *__pfx ) __attribute__((__malloc__)) ;
# 216 "/usr/include/stdio.h"
extern int fclose(FILE *__stream ) ;
# 221 "/usr/include/stdio.h"
extern int fflush(FILE *__stream ) ;
# 231 "/usr/include/stdio.h"
extern int fflush_unlocked(FILE *__stream ) ;
# 262 "/usr/include/stdio.h"
extern FILE *fopen(char const * __restrict __filename , char const * __restrict __modes ) __asm__("fopen64") ;
# 265 "/usr/include/stdio.h"
extern FILE *freopen(char const * __restrict __filename , char const * __restrict __modes ,
                     FILE * __restrict __stream ) __asm__("freopen64") ;
# 285 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) FILE *fdopen(int __fd , char const *__modes ) ;
# 309 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) void setbuf(FILE * __restrict __stream , char * __restrict __buf ) ;
# 313 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int setvbuf(FILE * __restrict __stream , char * __restrict __buf ,
                                                 int __modes , size_t __n ) ;
# 320 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) void setbuffer(FILE * __restrict __stream ,
                                                    char * __restrict __buf , size_t __size ) ;
# 324 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;
# 333 "/usr/include/stdio.h"
extern int fprintf(FILE * __restrict __stream , char const * __restrict __format
                   , ...) ;
# 339 "/usr/include/stdio.h"
extern int printf(char const * __restrict __format , ...) ;
# 341 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int sprintf(char * __restrict __s , char const * __restrict __format
                                                 , ...) ;
# 348 "/usr/include/stdio.h"
extern int vfprintf(FILE * __restrict __s , char const * __restrict __format ,
                    __gnuc_va_list __arg ) ;
# 354 "/usr/include/stdio.h"
__inline static int vprintf(char const * __restrict __fmt , __gnuc_va_list __arg ) ;
# 356 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int vsprintf(char * __restrict __s , char const * __restrict __format ,
                                                  __gnuc_va_list __arg ) ;
# 363 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int ( snprintf)(char * __restrict __s ,
                                                                             size_t __maxlen ,
                                                                             char const * __restrict __format
                                                                             , ...) ;
# 367 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int ( vsnprintf)(char * __restrict __s ,
                                                                              size_t __maxlen ,
                                                                              char const * __restrict __format ,
                                                                              __gnuc_va_list __arg ) ;
# 405 "/usr/include/stdio.h"
extern int fscanf(FILE * __restrict __stream , char const * __restrict __format
                  , ...) ;
# 411 "/usr/include/stdio.h"
extern int scanf(char const * __restrict __format , ...) ;
# 413 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int sscanf(char const * __restrict __s , char const * __restrict __format
                                                , ...) ;
# 423 "/usr/include/stdio.h"
extern int ( vfscanf)(FILE * __restrict __s , char const * __restrict __format ,
                                              __gnuc_va_list __arg ) ;
# 431 "/usr/include/stdio.h"
extern int ( vscanf)(char const * __restrict __format ,
                                             __gnuc_va_list __arg ) ;
# 435 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int ( vsscanf)(char const * __restrict __s ,
                                                                            char const * __restrict __format ,
                                                                            __gnuc_va_list __arg ) ;
# 447 "/usr/include/stdio.h"
extern int fgetc(FILE *__stream ) ;
# 448 "/usr/include/stdio.h"
extern int getc(FILE *__stream ) ;
# 454 "/usr/include/stdio.h"
__inline static int getchar(void) ;
# 466 "/usr/include/stdio.h"
__inline static int getc_unlocked(FILE *__fp ) ;
# 467 "/usr/include/stdio.h"
__inline static int getchar_unlocked(void) ;
# 477 "/usr/include/stdio.h"
__inline static int fgetc_unlocked(FILE *__fp ) ;
# 489 "/usr/include/stdio.h"
extern int fputc(int __c , FILE *__stream ) ;
# 490 "/usr/include/stdio.h"
extern int putc(int __c , FILE *__stream ) ;
# 496 "/usr/include/stdio.h"
__inline static int putchar(int __c ) ;
# 510 "/usr/include/stdio.h"
__inline static int fputc_unlocked(int __c , FILE *__stream ) ;
# 518 "/usr/include/stdio.h"
__inline static int putc_unlocked(int __c , FILE *__stream ) ;
# 519 "/usr/include/stdio.h"
__inline static int putchar_unlocked(int __c ) ;
# 526 "/usr/include/stdio.h"
extern int getw(FILE *__stream ) ;
# 529 "/usr/include/stdio.h"
extern int putw(int __w , FILE *__stream ) ;
# 538 "/usr/include/stdio.h"
extern char *fgets(char * __restrict __s , int __n , FILE * __restrict __stream ) ;
# 546 "/usr/include/stdio.h"
extern char *gets(char *__s ) ;
# 596 "/usr/include/stdio.h"
extern int fputs(char const * __restrict __s , FILE * __restrict __stream ) ;
# 602 "/usr/include/stdio.h"
extern int puts(char const *__s ) ;
# 609 "/usr/include/stdio.h"
extern int ungetc(int __c , FILE *__stream ) ;
# 616 "/usr/include/stdio.h"
extern size_t fread(void * __restrict __ptr , size_t __size , size_t __n , FILE * __restrict __stream ) ;
# 622 "/usr/include/stdio.h"
extern size_t fwrite(void const * __restrict __ptr , size_t __size , size_t __n ,
                     FILE * __restrict __s ) ;
# 644 "/usr/include/stdio.h"
extern size_t fread_unlocked(void * __restrict __ptr , size_t __size , size_t __n ,
                             FILE * __restrict __stream ) ;
# 646 "/usr/include/stdio.h"
extern size_t fwrite_unlocked(void const * __restrict __ptr , size_t __size , size_t __n ,
                              FILE * __restrict __stream ) ;
# 656 "/usr/include/stdio.h"
extern int fseek(FILE *__stream , long __off , int __whence ) ;
# 661 "/usr/include/stdio.h"
extern long ftell(FILE *__stream ) ;
# 666 "/usr/include/stdio.h"
extern void rewind(FILE *__stream ) ;
# 688 "/usr/include/stdio.h"
extern int fseeko(FILE *__stream , __off64_t __off , int __whence ) __asm__("fseeko64") ;
# 691 "/usr/include/stdio.h"
extern __off64_t ftello(FILE *__stream ) __asm__("ftello64") ;
# 713 "/usr/include/stdio.h"
extern int fgetpos(FILE * __restrict __stream , fpos_t * __restrict __pos ) __asm__("fgetpos64") ;
# 715 "/usr/include/stdio.h"
extern int fsetpos(FILE *__stream , fpos_t const *__pos ) __asm__("fsetpos64") ;
# 733 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;
# 735 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int feof(FILE *__stream ) ;
# 737 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;
# 742 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;
# 743 "/usr/include/stdio.h"
__inline static __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
# 744 "/usr/include/stdio.h"
__inline static __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
# 753 "/usr/include/stdio.h"
extern void perror(char const *__s ) ;
# 27 "/usr/include/bits/sys_errlist.h"
extern int sys_nerr ;
# 28 "/usr/include/bits/sys_errlist.h"
extern char const * const sys_errlist[] ;
# 765 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
# 770 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;
# 780 "/usr/include/stdio.h"
extern FILE *popen(char const *__command , char const *__modes ) ;
# 786 "/usr/include/stdio.h"
extern int pclose(FILE *__stream ) ;
# 792 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
# 820 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) void flockfile(FILE *__stream ) ;
# 824 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) int ftrylockfile(FILE *__stream ) ;
# 827 "/usr/include/stdio.h"
extern __attribute__((__nothrow__)) void funlockfile(FILE *__stream ) ;
# 33 "/usr/include/bits/stdio.h"
__inline static int vprintf(char const * __restrict __fmt , __gnuc_va_list __arg )
{ int tmp ;

  {
  {
# 36 "/usr/include/bits/stdio.h"
  tmp = vfprintf((FILE * )stdout, __fmt, __arg);
  }
# 36 "/usr/include/bits/stdio.h"
  return (tmp);
}
}
# 40 "/usr/include/bits/stdio.h"
__inline static int getchar(void)
{ int tmp ;

  {
  {
# 43 "/usr/include/bits/stdio.h"
  tmp = _IO_getc(stdin);
  }
# 43 "/usr/include/bits/stdio.h"
  return (tmp);
}
}
# 49 "/usr/include/bits/stdio.h"
__inline static int fgetc_unlocked(FILE *__fp )
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
# 52 "/usr/include/bits/stdio.h"
  tmp___4 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  }
# 52 "/usr/include/bits/stdio.h"
  if (tmp___4) {
    {
# 52 "/usr/include/bits/stdio.h"
    tmp___2 = __uflow(__fp);
    }
  } else {
# 52 "/usr/include/bits/stdio.h"
    tmp___3 = __fp->_IO_read_ptr;
# 52 "/usr/include/bits/stdio.h"
    (__fp->_IO_read_ptr) ++;
# 52 "/usr/include/bits/stdio.h"
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
# 52 "/usr/include/bits/stdio.h"
  return (tmp___2);
}
}
# 59 "/usr/include/bits/stdio.h"
__inline static int getc_unlocked(FILE *__fp )
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
# 62 "/usr/include/bits/stdio.h"
  tmp___4 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  }
# 62 "/usr/include/bits/stdio.h"
  if (tmp___4) {
    {
# 62 "/usr/include/bits/stdio.h"
    tmp___2 = __uflow(__fp);
    }
  } else {
# 62 "/usr/include/bits/stdio.h"
    tmp___3 = __fp->_IO_read_ptr;
# 62 "/usr/include/bits/stdio.h"
    (__fp->_IO_read_ptr) ++;
# 62 "/usr/include/bits/stdio.h"
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
# 62 "/usr/include/bits/stdio.h"
  return (tmp___2);
}
}
# 66 "/usr/include/bits/stdio.h"
__inline static int getchar_unlocked(void)
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
# 69 "/usr/include/bits/stdio.h"
  tmp___4 = __builtin_expect((long )((unsigned int )stdin->_IO_read_ptr >= (unsigned int )stdin->_IO_read_end),
                             0L);
  }
# 69 "/usr/include/bits/stdio.h"
  if (tmp___4) {
    {
# 69 "/usr/include/bits/stdio.h"
    tmp___2 = __uflow(stdin);
    }
  } else {
# 69 "/usr/include/bits/stdio.h"
    tmp___3 = stdin->_IO_read_ptr;
# 69 "/usr/include/bits/stdio.h"
    (stdin->_IO_read_ptr) ++;
# 69 "/usr/include/bits/stdio.h"
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
# 69 "/usr/include/bits/stdio.h"
  return (tmp___2);
}
}
# 75 "/usr/include/bits/stdio.h"
__inline static int putchar(int __c )
{ int tmp ;

  {
  {
# 78 "/usr/include/bits/stdio.h"
  tmp = _IO_putc(__c, stdout);
  }
# 78 "/usr/include/bits/stdio.h"
  return (tmp);
}
}
# 84 "/usr/include/bits/stdio.h"
__inline static int fputc_unlocked(int __c , FILE *__stream )
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
# 87 "/usr/include/bits/stdio.h"
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  }
# 87 "/usr/include/bits/stdio.h"
  if (tmp___4) {
    {
# 87 "/usr/include/bits/stdio.h"
    tmp___2 = __overflow(__stream, (int )((unsigned char )__c));
    }
  } else {
# 87 "/usr/include/bits/stdio.h"
    tmp___3 = __stream->_IO_write_ptr;
# 87 "/usr/include/bits/stdio.h"
    (__stream->_IO_write_ptr) ++;
# 87 "/usr/include/bits/stdio.h"
    *tmp___3 = (char )__c;
# 87 "/usr/include/bits/stdio.h"
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
# 87 "/usr/include/bits/stdio.h"
  return (tmp___2);
}
}
# 94 "/usr/include/bits/stdio.h"
__inline static int putc_unlocked(int __c , FILE *__stream )
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
# 97 "/usr/include/bits/stdio.h"
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  }
# 97 "/usr/include/bits/stdio.h"
  if (tmp___4) {
    {
# 97 "/usr/include/bits/stdio.h"
    tmp___2 = __overflow(__stream, (int )((unsigned char )__c));
    }
  } else {
# 97 "/usr/include/bits/stdio.h"
    tmp___3 = __stream->_IO_write_ptr;
# 97 "/usr/include/bits/stdio.h"
    (__stream->_IO_write_ptr) ++;
# 97 "/usr/include/bits/stdio.h"
    *tmp___3 = (char )__c;
# 97 "/usr/include/bits/stdio.h"
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
# 97 "/usr/include/bits/stdio.h"
  return (tmp___2);
}
}
# 101 "/usr/include/bits/stdio.h"
__inline static int putchar_unlocked(int __c )
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  {
# 104 "/usr/include/bits/stdio.h"
  tmp___4 = __builtin_expect((long )((unsigned int )stdout->_IO_write_ptr >= (unsigned int )stdout->_IO_write_end),
                             0L);
  }
# 104 "/usr/include/bits/stdio.h"
  if (tmp___4) {
    {
# 104 "/usr/include/bits/stdio.h"
    tmp___2 = __overflow(stdout, (int )((unsigned char )__c));
    }
  } else {
# 104 "/usr/include/bits/stdio.h"
    tmp___3 = stdout->_IO_write_ptr;
# 104 "/usr/include/bits/stdio.h"
    (stdout->_IO_write_ptr) ++;
# 104 "/usr/include/bits/stdio.h"
    *tmp___3 = (char )__c;
# 104 "/usr/include/bits/stdio.h"
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
# 104 "/usr/include/bits/stdio.h"
  return (tmp___2);
}
}
# 121 "/usr/include/bits/stdio.h"
__inline static __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
# 121 "/usr/include/bits/stdio.h"
__inline static int feof_unlocked(FILE *__stream )
{

  {
# 124 "/usr/include/bits/stdio.h"
  return ((__stream->_flags & 16) != 0);
}
}
# 128 "/usr/include/bits/stdio.h"
__inline static __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
# 128 "/usr/include/bits/stdio.h"
__inline static int ferror_unlocked(FILE *__stream )
{

  {
# 131 "/usr/include/bits/stdio.h"
  return ((__stream->_flags & 32) != 0);
}
}
# 55 "/usr/include/sys/resource.h"
extern __attribute__((__nothrow__)) int getrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit *__rlimits ) __asm__("getrlimit64") ;
# 74 "/usr/include/sys/resource.h"
extern __attribute__((__nothrow__)) int setrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit const *__rlimits ) __asm__("setrlimit64") ;
# 88 "/usr/include/sys/resource.h"
extern __attribute__((__nothrow__)) int getrusage(__rusage_who_t __who , struct rusage *__usage ) ;
# 94 "/usr/include/sys/resource.h"
extern __attribute__((__nothrow__)) int getpriority(__priority_which_t __which ,
                                                     id_t __who ) ;
# 98 "/usr/include/sys/resource.h"
extern __attribute__((__nothrow__)) int setpriority(__priority_which_t __which ,
                                                     id_t __who , int __prio ) ;
# 116 "/usr/include/sys/wait.h"
extern __pid_t wait(union wait *__stat_loc ) ;
# 139 "/usr/include/sys/wait.h"
extern __pid_t waitpid(__pid_t __pid , int *__stat_loc , int __options ) ;
# 155 "/usr/include/sys/wait.h"
extern int waitid(idtype_t __idtype , __id_t __id , siginfo_t *__infop , int __options ) ;
# 169 "/usr/include/sys/wait.h"
extern __attribute__((__nothrow__)) __pid_t wait3(union wait *__stat_loc , int __options ,
                                                   struct rusage *__usage ) ;
# 175 "/usr/include/sys/wait.h"
extern __attribute__((__nothrow__)) __pid_t wait4(__pid_t __pid , union wait *__stat_loc ,
                                                   int __options , struct rusage *__usage ) ;
# 374 "mod_fastcgi.c"
static handler_t fcgi_handle_fdevent(void *s , void *ctx , int revents ) ;
# 376 "mod_fastcgi.c"
int fastcgi_status_copy_procname(buffer *b , fcgi_extension_host *host , fcgi_proc *proc )
{

  {
  {
# 377 "mod_fastcgi.c"
  buffer_copy_string(b, "fastcgi.backend.");
# 378 "mod_fastcgi.c"
  buffer_append_string_buffer(b, (buffer const *)host->id);
  }
# 379 "mod_fastcgi.c"
  if (proc) {
    {
# 380 "mod_fastcgi.c"
    buffer_append_string(b, ".");
# 381 "mod_fastcgi.c"
    buffer_append_long(b, (long )proc->id);
    }
  }
# 384 "mod_fastcgi.c"
  return (0);
}
}
# 387 "mod_fastcgi.c"
int fastcgi_status_init(server *srv , buffer *b , fcgi_extension_host *host , fcgi_proc *proc )
{ size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;

  {
  {
# 393 "mod_fastcgi.c"
  fastcgi_status_copy_procname(b, host, proc);
# 393 "mod_fastcgi.c"
  buffer_append_string(b, ".disabled");
  }
# 393 "mod_fastcgi.c"
  if (b->used) {
# 393 "mod_fastcgi.c"
    tmp = b->used - 1U;
  } else {
# 393 "mod_fastcgi.c"
    tmp = 0U;
  }
  {
# 393 "mod_fastcgi.c"
  status_counter_set(srv, (char const *)b->ptr, tmp, 0);
# 394 "mod_fastcgi.c"
  fastcgi_status_copy_procname(b, host, proc);
# 394 "mod_fastcgi.c"
  buffer_append_string(b, ".died");
  }
# 394 "mod_fastcgi.c"
  if (b->used) {
# 394 "mod_fastcgi.c"
    tmp___0 = b->used - 1U;
  } else {
# 394 "mod_fastcgi.c"
    tmp___0 = 0U;
  }
  {
# 394 "mod_fastcgi.c"
  status_counter_set(srv, (char const *)b->ptr, tmp___0, 0);
# 395 "mod_fastcgi.c"
  fastcgi_status_copy_procname(b, host, proc);
# 395 "mod_fastcgi.c"
  buffer_append_string(b, ".overloaded");
  }
# 395 "mod_fastcgi.c"
  if (b->used) {
# 395 "mod_fastcgi.c"
    tmp___1 = b->used - 1U;
  } else {
# 395 "mod_fastcgi.c"
    tmp___1 = 0U;
  }
  {
# 395 "mod_fastcgi.c"
  status_counter_set(srv, (char const *)b->ptr, tmp___1, 0);
# 396 "mod_fastcgi.c"
  fastcgi_status_copy_procname(b, host, proc);
# 396 "mod_fastcgi.c"
  buffer_append_string(b, ".connected");
  }
# 396 "mod_fastcgi.c"
  if (b->used) {
# 396 "mod_fastcgi.c"
    tmp___2 = b->used - 1U;
  } else {
# 396 "mod_fastcgi.c"
    tmp___2 = 0U;
  }
  {
# 396 "mod_fastcgi.c"
  status_counter_set(srv, (char const *)b->ptr, tmp___2, 0);
# 397 "mod_fastcgi.c"
  fastcgi_status_copy_procname(b, host, proc);
# 397 "mod_fastcgi.c"
  buffer_append_string(b, ".load");
  }
# 397 "mod_fastcgi.c"
  if (b->used) {
# 397 "mod_fastcgi.c"
    tmp___3 = b->used - 1U;
  } else {
# 397 "mod_fastcgi.c"
    tmp___3 = 0U;
  }
  {
# 397 "mod_fastcgi.c"
  status_counter_set(srv, (char const *)b->ptr, tmp___3, 0);
# 406 "mod_fastcgi.c"
  fastcgi_status_copy_procname(b, host, (fcgi_proc *)((void *)0));
# 406 "mod_fastcgi.c"
  buffer_append_string(b, ".load");
  }
# 406 "mod_fastcgi.c"
  if (b->used) {
# 406 "mod_fastcgi.c"
    tmp___4 = b->used - 1U;
  } else {
# 406 "mod_fastcgi.c"
    tmp___4 = 0U;
  }
  {
# 406 "mod_fastcgi.c"
  status_counter_set(srv, (char const *)b->ptr, tmp___4, 0);
  }
# 410 "mod_fastcgi.c"
  return (0);
}
}
# 413 "mod_fastcgi.c"
static handler_ctx *handler_ctx_init(void)
{ handler_ctx *hctx ;
  void *tmp ;

  {
  {
# 416 "mod_fastcgi.c"
  tmp = calloc(1U, sizeof(*hctx));
# 416 "mod_fastcgi.c"
  hctx = (handler_ctx *)tmp;
  }
# 417 "mod_fastcgi.c"
  if (! hctx) {
    {
# 417 "mod_fastcgi.c"
    __assert_fail("hctx", "mod_fastcgi.c", 417U, "handler_ctx_init");
    }
  }
  {
# 419 "mod_fastcgi.c"
  hctx->fde_ndx = -1;
# 421 "mod_fastcgi.c"
  hctx->response_header = buffer_init();
# 423 "mod_fastcgi.c"
  hctx->request_id = 0U;
# 424 "mod_fastcgi.c"
  hctx->state = 1;
# 425 "mod_fastcgi.c"
  hctx->proc = (fcgi_proc *)((void *)0);
# 427 "mod_fastcgi.c"
  hctx->fd = -1;
# 429 "mod_fastcgi.c"
  hctx->reconnects = 0;
# 430 "mod_fastcgi.c"
  hctx->send_content_body = 1;
# 432 "mod_fastcgi.c"
  hctx->rb = chunkqueue_init();
# 433 "mod_fastcgi.c"
  hctx->wb = chunkqueue_init();
  }
# 435 "mod_fastcgi.c"
  return (hctx);
}
}
# 438 "mod_fastcgi.c"
static void handler_ctx_free(handler_ctx *hctx )
{

  {
# 439 "mod_fastcgi.c"
  if (hctx->host) {
# 440 "mod_fastcgi.c"
    ((hctx->host)->load) --;
# 441 "mod_fastcgi.c"
    hctx->host = (fcgi_extension_host *)((void *)0);
  }
  {
# 444 "mod_fastcgi.c"
  buffer_free(hctx->response_header);
# 446 "mod_fastcgi.c"
  chunkqueue_free(hctx->rb);
# 447 "mod_fastcgi.c"
  chunkqueue_free(hctx->wb);
# 449 "mod_fastcgi.c"
  free((void *)hctx);
  }
# 450 "mod_fastcgi.c"
  return;
}
}
# 452 "mod_fastcgi.c"
fcgi_proc *fastcgi_process_init(void)
{ fcgi_proc *f ;
  void *tmp ;

  {
  {
# 455 "mod_fastcgi.c"
  tmp = calloc(1U, sizeof(*f));
# 455 "mod_fastcgi.c"
  f = (fcgi_proc *)tmp;
# 456 "mod_fastcgi.c"
  f->unixsocket = buffer_init();
# 457 "mod_fastcgi.c"
  f->connection_name = buffer_init();
# 459 "mod_fastcgi.c"
  f->prev = (struct fcgi_proc *)((void *)0);
# 460 "mod_fastcgi.c"
  f->next = (struct fcgi_proc *)((void *)0);
  }
# 462 "mod_fastcgi.c"
  return (f);
}
}
# 465 "mod_fastcgi.c"
void fastcgi_process_free(fcgi_proc *f )
{

  {
# 466 "mod_fastcgi.c"
  if (! f) {
# 466 "mod_fastcgi.c"
    return;
  }
  {
# 468 "mod_fastcgi.c"
  fastcgi_process_free(f->next);
# 470 "mod_fastcgi.c"
  buffer_free(f->unixsocket);
# 471 "mod_fastcgi.c"
  buffer_free(f->connection_name);
# 473 "mod_fastcgi.c"
  free((void *)f);
  }
# 474 "mod_fastcgi.c"
  return;
}
}
# 476 "mod_fastcgi.c"
fcgi_extension_host *fastcgi_host_init(void)
{ fcgi_extension_host *f ;
  void *tmp ;

  {
  {
# 479 "mod_fastcgi.c"
  tmp = calloc(1U, sizeof(*f));
# 479 "mod_fastcgi.c"
  f = (fcgi_extension_host *)tmp;
# 481 "mod_fastcgi.c"
  f->id = buffer_init();
# 482 "mod_fastcgi.c"
  f->host = buffer_init();
# 483 "mod_fastcgi.c"
  f->unixsocket = buffer_init();
# 484 "mod_fastcgi.c"
  f->docroot = buffer_init();
# 485 "mod_fastcgi.c"
  f->bin_path = buffer_init();
# 486 "mod_fastcgi.c"
  f->bin_env = array_init();
# 487 "mod_fastcgi.c"
  f->bin_env_copy = array_init();
# 488 "mod_fastcgi.c"
  f->strip_request_uri = buffer_init();
  }
# 490 "mod_fastcgi.c"
  return (f);
}
}
# 493 "mod_fastcgi.c"
void fastcgi_host_free(fcgi_extension_host *h )
{

  {
# 494 "mod_fastcgi.c"
  if (! h) {
# 494 "mod_fastcgi.c"
    return;
  }
  {
# 496 "mod_fastcgi.c"
  buffer_free(h->id);
# 497 "mod_fastcgi.c"
  buffer_free(h->host);
# 498 "mod_fastcgi.c"
  buffer_free(h->unixsocket);
# 499 "mod_fastcgi.c"
  buffer_free(h->docroot);
# 500 "mod_fastcgi.c"
  buffer_free(h->bin_path);
# 501 "mod_fastcgi.c"
  buffer_free(h->strip_request_uri);
# 502 "mod_fastcgi.c"
  array_free(h->bin_env);
# 503 "mod_fastcgi.c"
  array_free(h->bin_env_copy);
# 505 "mod_fastcgi.c"
  fastcgi_process_free(h->first);
# 506 "mod_fastcgi.c"
  fastcgi_process_free(h->unused_procs);
# 508 "mod_fastcgi.c"
  free((void *)h);
  }
# 510 "mod_fastcgi.c"
  return;
}
}
# 512 "mod_fastcgi.c"
fcgi_exts *fastcgi_extensions_init(void)
{ fcgi_exts *f ;
  void *tmp ;

  {
  {
# 515 "mod_fastcgi.c"
  tmp = calloc(1U, sizeof(*f));
# 515 "mod_fastcgi.c"
  f = (fcgi_exts *)tmp;
  }
# 517 "mod_fastcgi.c"
  return (f);
}
}
# 520 "mod_fastcgi.c"
void fastcgi_extensions_free(fcgi_exts *f )
{ size_t i ;
  fcgi_extension *fe ;
  size_t j ;
  fcgi_extension_host *h ;

  {
# 523 "mod_fastcgi.c"
  if (! f) {
# 523 "mod_fastcgi.c"
    return;
  }
# 525 "mod_fastcgi.c"
  i = 0U;
# 525 "mod_fastcgi.c"
  while (i < f->used) {
# 529 "mod_fastcgi.c"
    fe = *(f->exts + i);
# 531 "mod_fastcgi.c"
    j = 0U;
# 531 "mod_fastcgi.c"
    while (j < fe->used) {
      {
# 534 "mod_fastcgi.c"
      h = *(fe->hosts + j);
# 536 "mod_fastcgi.c"
      fastcgi_host_free(h);
# 531 "mod_fastcgi.c"
      j ++;
      }
    }
    {
# 539 "mod_fastcgi.c"
    buffer_free(fe->key);
# 540 "mod_fastcgi.c"
    free((void *)fe->hosts);
# 542 "mod_fastcgi.c"
    free((void *)fe);
# 525 "mod_fastcgi.c"
    i ++;
    }
  }
  {
# 545 "mod_fastcgi.c"
  free((void *)f->exts);
# 547 "mod_fastcgi.c"
  free((void *)f);
  }
# 548 "mod_fastcgi.c"
  return;
}
}
# 550 "mod_fastcgi.c"
int fastcgi_extension_insert(fcgi_exts *ext , buffer *key , fcgi_extension_host *fh )
{ fcgi_extension *fe ;
  size_t i ;
  int tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  void *tmp___2 ;
  size_t tmp___3 ;
  void *tmp___4 ;
  void *tmp___5 ;
  size_t tmp___6 ;

  {
# 556 "mod_fastcgi.c"
  i = 0U;
# 556 "mod_fastcgi.c"
  while (i < ext->used) {
    {
# 557 "mod_fastcgi.c"
    tmp = buffer_is_equal(key, (*(ext->exts + i))->key);
    }
# 557 "mod_fastcgi.c"
    if (tmp) {
# 558 "mod_fastcgi.c"
      break;
    }
# 556 "mod_fastcgi.c"
    i ++;
  }
# 562 "mod_fastcgi.c"
  if (i == ext->used) {
    {
# 564 "mod_fastcgi.c"
    tmp___0 = calloc(1U, sizeof(*fe));
# 564 "mod_fastcgi.c"
    fe = (fcgi_extension *)tmp___0;
    }
# 565 "mod_fastcgi.c"
    if (! fe) {
      {
# 565 "mod_fastcgi.c"
      __assert_fail("fe", "mod_fastcgi.c", 565U, "fastcgi_extension_insert");
      }
    }
    {
# 566 "mod_fastcgi.c"
    fe->key = buffer_init();
# 567 "mod_fastcgi.c"
    fe->last_used_ndx = -1;
# 568 "mod_fastcgi.c"
    buffer_copy_string_buffer(fe->key, (buffer const *)key);
    }
# 572 "mod_fastcgi.c"
    if (ext->size == 0U) {
      {
# 573 "mod_fastcgi.c"
      ext->size = 8U;
# 574 "mod_fastcgi.c"
      tmp___1 = malloc(ext->size * sizeof(*(ext->exts)));
# 574 "mod_fastcgi.c"
      ext->exts = (fcgi_extension **)tmp___1;
      }
# 575 "mod_fastcgi.c"
      if (! ext->exts) {
        {
# 575 "mod_fastcgi.c"
        __assert_fail("ext->exts", "mod_fastcgi.c", 575U, "fastcgi_extension_insert");
        }
      }
    } else {
# 576 "mod_fastcgi.c"
      if (ext->used == ext->size) {
        {
# 577 "mod_fastcgi.c"
        ext->size += 8U;
# 578 "mod_fastcgi.c"
        tmp___2 = realloc((void *)ext->exts, ext->size * sizeof(*(ext->exts)));
# 578 "mod_fastcgi.c"
        ext->exts = (fcgi_extension **)tmp___2;
        }
# 579 "mod_fastcgi.c"
        if (! ext->exts) {
          {
# 579 "mod_fastcgi.c"
          __assert_fail("ext->exts", "mod_fastcgi.c", 579U, "fastcgi_extension_insert");
          }
        }
      }
    }
# 581 "mod_fastcgi.c"
    tmp___3 = ext->used;
# 581 "mod_fastcgi.c"
    (ext->used) ++;
# 581 "mod_fastcgi.c"
    *(ext->exts + tmp___3) = fe;
  } else {
# 583 "mod_fastcgi.c"
    fe = *(ext->exts + i);
  }
# 586 "mod_fastcgi.c"
  if (fe->size == 0U) {
    {
# 587 "mod_fastcgi.c"
    fe->size = 4U;
# 588 "mod_fastcgi.c"
    tmp___4 = malloc(fe->size * sizeof(*(fe->hosts)));
# 588 "mod_fastcgi.c"
    fe->hosts = (fcgi_extension_host **)tmp___4;
    }
# 589 "mod_fastcgi.c"
    if (! fe->hosts) {
      {
# 589 "mod_fastcgi.c"
      __assert_fail("fe->hosts", "mod_fastcgi.c", 589U, "fastcgi_extension_insert");
      }
    }
  } else {
# 590 "mod_fastcgi.c"
    if (fe->size == fe->used) {
      {
# 591 "mod_fastcgi.c"
      fe->size += 4U;
# 592 "mod_fastcgi.c"
      tmp___5 = realloc((void *)fe->hosts, fe->size * sizeof(*(fe->hosts)));
# 592 "mod_fastcgi.c"
      fe->hosts = (fcgi_extension_host **)tmp___5;
      }
# 593 "mod_fastcgi.c"
      if (! fe->hosts) {
        {
# 593 "mod_fastcgi.c"
        __assert_fail("fe->hosts", "mod_fastcgi.c", 593U, "fastcgi_extension_insert");
        }
      }
    }
  }
# 596 "mod_fastcgi.c"
  tmp___6 = fe->used;
# 596 "mod_fastcgi.c"
  (fe->used) ++;
# 596 "mod_fastcgi.c"
  *(fe->hosts + tmp___6) = fh;
# 598 "mod_fastcgi.c"
  return (0);
}
}
# 602 "mod_fastcgi.c"
static void *mod_fastcgi_init(void)
{ plugin_data *p ;
  void *tmp ;

  {
  {
# 605 "mod_fastcgi.c"
  tmp = calloc(1U, sizeof(*p));
# 605 "mod_fastcgi.c"
  p = (plugin_data *)tmp;
# 607 "mod_fastcgi.c"
  p->fcgi_env = buffer_init();
# 609 "mod_fastcgi.c"
  p->path = buffer_init();
# 610 "mod_fastcgi.c"
  p->parse_response = buffer_init();
# 612 "mod_fastcgi.c"
  p->statuskey = buffer_init();
  }
# 614 "mod_fastcgi.c"
  return ((void *)p);
}
}
# 618 "mod_fastcgi.c"
static handler_t mod_fastcgi_free(server *srv , void *p_d )
{ plugin_data *p ;
  buffer_uint *r ;
  size_t i ;
  size_t j ;
  size_t n ;
  plugin_config *s ;
  fcgi_exts *exts ;
  fcgi_extension *ex ;
  fcgi_proc *proc ;
  fcgi_extension_host *host ;
  int tmp ;
  int tmp___0 ;

  {
# 619 "mod_fastcgi.c"
  p = (plugin_data *)p_d;
# 620 "mod_fastcgi.c"
  r = & p->fcgi_request_id;
# 624 "mod_fastcgi.c"
  if (r->ptr) {
    {
# 624 "mod_fastcgi.c"
    free((void *)r->ptr);
    }
  }
  {
# 626 "mod_fastcgi.c"
  buffer_free(p->fcgi_env);
# 627 "mod_fastcgi.c"
  buffer_free(p->path);
# 628 "mod_fastcgi.c"
  buffer_free(p->parse_response);
# 629 "mod_fastcgi.c"
  buffer_free(p->statuskey);
  }
# 631 "mod_fastcgi.c"
  if (p->config_storage) {
# 633 "mod_fastcgi.c"
    i = 0U;
# 633 "mod_fastcgi.c"
    while (i < (srv->config_context)->used) {
# 634 "mod_fastcgi.c"
      s = *(p->config_storage + i);
# 637 "mod_fastcgi.c"
      if (! s) {
        goto __Cont;
      }
# 639 "mod_fastcgi.c"
      exts = s->exts;
# 641 "mod_fastcgi.c"
      j = 0U;
# 641 "mod_fastcgi.c"
      while (j < exts->used) {
# 644 "mod_fastcgi.c"
        ex = *(exts->exts + j);
# 646 "mod_fastcgi.c"
        n = 0U;
# 646 "mod_fastcgi.c"
        while (n < ex->used) {
# 650 "mod_fastcgi.c"
          host = *(ex->hosts + n);
# 652 "mod_fastcgi.c"
          proc = host->first;
# 652 "mod_fastcgi.c"
          while (proc) {
# 653 "mod_fastcgi.c"
            if (proc->pid != 0) {
              {
# 654 "mod_fastcgi.c"
              kill(proc->pid, (int )host->kill_signal);
              }
            }
# 657 "mod_fastcgi.c"
            if (proc->is_local) {
              {
# 657 "mod_fastcgi.c"
              tmp = buffer_is_empty(proc->unixsocket);
              }
# 657 "mod_fastcgi.c"
              if (! tmp) {
                {
# 659 "mod_fastcgi.c"
                unlink((char const *)(proc->unixsocket)->ptr);
                }
              }
            }
# 652 "mod_fastcgi.c"
            proc = proc->next;
          }
# 663 "mod_fastcgi.c"
          proc = host->unused_procs;
# 663 "mod_fastcgi.c"
          while (proc) {
# 664 "mod_fastcgi.c"
            if (proc->pid != 0) {
              {
# 665 "mod_fastcgi.c"
              kill(proc->pid, (int )host->kill_signal);
              }
            }
# 667 "mod_fastcgi.c"
            if (proc->is_local) {
              {
# 667 "mod_fastcgi.c"
              tmp___0 = buffer_is_empty(proc->unixsocket);
              }
# 667 "mod_fastcgi.c"
              if (! tmp___0) {
                {
# 669 "mod_fastcgi.c"
                unlink((char const *)(proc->unixsocket)->ptr);
                }
              }
            }
# 663 "mod_fastcgi.c"
            proc = proc->next;
          }
# 646 "mod_fastcgi.c"
          n ++;
        }
# 641 "mod_fastcgi.c"
        j ++;
      }
      {
# 675 "mod_fastcgi.c"
      fastcgi_extensions_free(s->exts);
# 676 "mod_fastcgi.c"
      array_free(s->ext_mapping);
# 678 "mod_fastcgi.c"
      free((void *)s);
      }
      __Cont:
# 633 "mod_fastcgi.c"
      i ++;
    }
    {
# 680 "mod_fastcgi.c"
    free((void *)p->config_storage);
    }
  }
  {
# 683 "mod_fastcgi.c"
  free((void *)p);
  }
# 685 "mod_fastcgi.c"
  return (1);
}
}
# 688 "mod_fastcgi.c"
static int env_add(char_array *env , char const *key , size_t key_len , char const *val ,
                   size_t val_len )
{ char *dst ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  size_t tmp___2 ;

  {
# 691 "mod_fastcgi.c"
  if (! key) {
# 691 "mod_fastcgi.c"
    return (-1);
  } else {
# 691 "mod_fastcgi.c"
    if (! val) {
# 691 "mod_fastcgi.c"
      return (-1);
    }
  }
  {
# 693 "mod_fastcgi.c"
  tmp = malloc((key_len + val_len) + 3U);
# 693 "mod_fastcgi.c"
  dst = (char *)tmp;
# 694 "mod_fastcgi.c"
  memcpy((void * )dst, (void const * )key, key_len);
# 695 "mod_fastcgi.c"
  *(dst + key_len) = (char )'=';
# 697 "mod_fastcgi.c"
  memcpy((void * )((dst + key_len) + 1), (void const * )val,
         val_len + 1U);
  }
# 699 "mod_fastcgi.c"
  if (env->size == 0U) {
    {
# 700 "mod_fastcgi.c"
    env->size = 16U;
# 701 "mod_fastcgi.c"
    tmp___0 = malloc(env->size * sizeof(*(env->ptr)));
# 701 "mod_fastcgi.c"
    env->ptr = (char **)tmp___0;
    }
  } else {
# 702 "mod_fastcgi.c"
    if (env->size == env->used + 1U) {
      {
# 703 "mod_fastcgi.c"
      env->size += 16U;
# 704 "mod_fastcgi.c"
      tmp___1 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
# 704 "mod_fastcgi.c"
      env->ptr = (char **)tmp___1;
      }
    }
  }
# 707 "mod_fastcgi.c"
  tmp___2 = env->used;
# 707 "mod_fastcgi.c"
  (env->used) ++;
# 707 "mod_fastcgi.c"
  *(env->ptr + tmp___2) = dst;
# 709 "mod_fastcgi.c"
  return (0);
}
}
# 712 "mod_fastcgi.c"
static int parse_binpath(char_array *env , buffer *b )
{ char *start ;
  size_t i ;
  void *tmp ;
  void *tmp___0 ;
  size_t tmp___1 ;
  void *tmp___2 ;
  void *tmp___3 ;
  size_t tmp___4 ;
  void *tmp___5 ;
  void *tmp___6 ;
  size_t tmp___7 ;

  {
# 717 "mod_fastcgi.c"
  start = b->ptr;
# 718 "mod_fastcgi.c"
  i = 0U;
# 718 "mod_fastcgi.c"
  while (i < b->used - 1U) {
# 719 "mod_fastcgi.c"
    switch ((int )*(b->ptr + i)) {
    case 32:
    case 9:
# 724 "mod_fastcgi.c"
    if (env->size == 0U) {
      {
# 725 "mod_fastcgi.c"
      env->size = 16U;
# 726 "mod_fastcgi.c"
      tmp = malloc(env->size * sizeof(*(env->ptr)));
# 726 "mod_fastcgi.c"
      env->ptr = (char **)tmp;
      }
    } else {
# 727 "mod_fastcgi.c"
      if (env->size == env->used) {
        {
# 728 "mod_fastcgi.c"
        env->size += 16U;
# 729 "mod_fastcgi.c"
        tmp___0 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
# 729 "mod_fastcgi.c"
        env->ptr = (char **)tmp___0;
        }
      }
    }
# 732 "mod_fastcgi.c"
    *(b->ptr + i) = (char )'\000';
# 734 "mod_fastcgi.c"
    tmp___1 = env->used;
# 734 "mod_fastcgi.c"
    (env->used) ++;
# 734 "mod_fastcgi.c"
    *(env->ptr + tmp___1) = start;
# 736 "mod_fastcgi.c"
    start = (b->ptr + i) + 1;
# 737 "mod_fastcgi.c"
    break;
    default: ;
# 739 "mod_fastcgi.c"
    break;
    }
# 718 "mod_fastcgi.c"
    i ++;
  }
# 743 "mod_fastcgi.c"
  if (env->size == 0U) {
    {
# 744 "mod_fastcgi.c"
    env->size = 16U;
# 745 "mod_fastcgi.c"
    tmp___2 = malloc(env->size * sizeof(*(env->ptr)));
# 745 "mod_fastcgi.c"
    env->ptr = (char **)tmp___2;
    }
  } else {
# 746 "mod_fastcgi.c"
    if (env->size == env->used) {
      {
# 747 "mod_fastcgi.c"
      env->size += 16U;
# 748 "mod_fastcgi.c"
      tmp___3 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
# 748 "mod_fastcgi.c"
      env->ptr = (char **)tmp___3;
      }
    }
  }
# 752 "mod_fastcgi.c"
  tmp___4 = env->used;
# 752 "mod_fastcgi.c"
  (env->used) ++;
# 752 "mod_fastcgi.c"
  *(env->ptr + tmp___4) = start;
# 754 "mod_fastcgi.c"
  if (env->size == 0U) {
    {
# 755 "mod_fastcgi.c"
    env->size = 16U;
# 756 "mod_fastcgi.c"
    tmp___5 = malloc(env->size * sizeof(*(env->ptr)));
# 756 "mod_fastcgi.c"
    env->ptr = (char **)tmp___5;
    }
  } else {
# 757 "mod_fastcgi.c"
    if (env->size == env->used) {
      {
# 758 "mod_fastcgi.c"
      env->size += 16U;
# 759 "mod_fastcgi.c"
      tmp___6 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
# 759 "mod_fastcgi.c"
      env->ptr = (char **)tmp___6;
      }
    }
  }
# 763 "mod_fastcgi.c"
  tmp___7 = env->used;
# 763 "mod_fastcgi.c"
  (env->used) ++;
# 763 "mod_fastcgi.c"
  *(env->ptr + tmp___7) = (char *)((void *)0);
# 765 "mod_fastcgi.c"
  return (0);
}
}
# 768 "mod_fastcgi.c"
static int fcgi_spawn_connection(server *srv , plugin_data *p , fcgi_extension_host *host ,
                                 fcgi_proc *proc )
{ int fcgi_fd ;
  int socket_type ;
  int status ;
  struct timeval tv ;
  struct sockaddr_un fcgi_addr_un ;
  struct sockaddr_in fcgi_addr_in ;
  struct sockaddr *fcgi_addr ;
  socklen_t servlen ;
  size_t tmp ;
  register unsigned int __v ;
  register unsigned int __x ;
  struct hostent *he ;
  register unsigned int __v___0 ;
  register unsigned int __x___0 ;
  int *tmp___0 ;
  int tmp___1 ;
  register unsigned short __v___1 ;
  register unsigned short __x___1 ;
  int tmp___2 ;
  int *tmp___3 ;
  char *tmp___4 ;
  pid_t child ;
  int val ;
  int *tmp___5 ;
  int tmp___6 ;
  int *tmp___7 ;
  char *tmp___8 ;
  int *tmp___9 ;
  char *tmp___10 ;
  int tmp___11 ;
  int *tmp___12 ;
  char *tmp___13 ;
  int tmp___14 ;
  int *tmp___15 ;
  char *tmp___16 ;
  int tmp___17 ;
  size_t i ;
  char *c ;
  char_array env ;
  char_array arg ;
  data_string *ds ;
  char *ge ;
  size_t tmp___18 ;
  size_t tmp___19 ;
  char *eq ;
  size_t tmp___20 ;
  void *tmp___21 ;
  char *tmp___22 ;
  data_string *ds___0 ;
  size_t tmp___23 ;
  size_t tmp___24 ;
  size_t tmp___25 ;
  size_t tmp___26 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  unsigned char const *__s2 ;
  register int __result ;
  int tmp___30 ;
  unsigned char const *__s1 ;
  register int __result___0 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  unsigned char const *__s2___0 ;
  register int __result___1 ;
  int tmp___34 ;
  unsigned char const *__s1___0 ;
  register int __result___2 ;
  int tmp___35 ;
  int tmp___36 ;
  int tmp___37 ;
  int tmp___38 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  unsigned char const *__s2___1 ;
  register int __result___3 ;
  int tmp___42 ;
  unsigned char const *__s1___1 ;
  register int __result___4 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  unsigned char const *__s2___2 ;
  register int __result___5 ;
  int tmp___46 ;
  unsigned char const *__s1___2 ;
  register int __result___6 ;
  int tmp___47 ;
  int tmp___48 ;
  size_t tmp___49 ;
  size_t tmp___50 ;
  int *tmp___51 ;
  char *tmp___52 ;
  int tmp___53 ;
  int *tmp___54 ;
  char *tmp___55 ;
  int *tmp___56 ;
  __pid_t tmp___57 ;
  int *tmp___58 ;
  char *tmp___59 ;
  union __anonunion_149 __constr_expr_0 ;
  union __anonunion_150 __constr_expr_1 ;
  union __anonunion_151 __constr_expr_2 ;
  union __anonunion_152 __constr_expr_3 ;
  union __anonunion_153 __constr_expr_4 ;
  int tmp___60 ;

  {
# 774 "mod_fastcgi.c"
  tv.tv_sec = (__time_t )0;
# 774 "mod_fastcgi.c"
  tv.tv_usec = (__suseconds_t )100000;
# 787 "mod_fastcgi.c"
  if (p->conf.debug) {
    {
# 788 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 788U, "sdb", "new proc, socket:", proc->port,
                    proc->unixsocket);
    }
  }
  {
# 792 "mod_fastcgi.c"
  tmp___2 = buffer_is_empty(proc->unixsocket);
  }
# 792 "mod_fastcgi.c"
  if (tmp___2) {
    {
# 817 "mod_fastcgi.c"
    fcgi_addr_in.sin_family = (unsigned short)2;
# 819 "mod_fastcgi.c"
    tmp___1 = buffer_is_empty(host->host);
    }
# 819 "mod_fastcgi.c"
    if (tmp___1) {
# 820 "mod_fastcgi.c"
      __x = 0U;
# 820 "mod_fastcgi.c"
      __asm__ ("rorw $8, %w0;"
                "rorl $16, %0;"
                "rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
# 820 "mod_fastcgi.c"
      fcgi_addr_in.sin_addr.s_addr = __v;
    } else {
      {
# 825 "mod_fastcgi.c"
      __x___0 = 0U;
# 825 "mod_fastcgi.c"
      __asm__ ("rorw $8, %w0;"
                "rorl $16, %0;"
                "rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
# 825 "mod_fastcgi.c"
      fcgi_addr_in.sin_addr.s_addr = __v___0;
# 828 "mod_fastcgi.c"
      he = gethostbyname((char const *)(host->host)->ptr);
      }
# 828 "mod_fastcgi.c"
      if ((unsigned int )((void *)0) == (unsigned int )he) {
        {
# 829 "mod_fastcgi.c"
        tmp___0 = __h_errno_location();
# 829 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 829U, "sdb", "gethostbyname failed: ",
                        *tmp___0, host->host);
        }
# 832 "mod_fastcgi.c"
        return (-1);
      }
# 835 "mod_fastcgi.c"
      if (he->h_addrtype != 2) {
        {
# 836 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 836U, "sd", "addr-type != AF_INET: ",
                        he->h_addrtype);
        }
# 837 "mod_fastcgi.c"
        return (-1);
      }
# 840 "mod_fastcgi.c"
      if ((unsigned int )he->h_length != sizeof(struct in_addr )) {
        {
# 841 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 841U, "sd", "addr-length != sizeof(in_addr): ",
                        he->h_length);
        }
# 842 "mod_fastcgi.c"
        return (-1);
      }
      {
# 845 "mod_fastcgi.c"
      memcpy((void * )(& fcgi_addr_in.sin_addr.s_addr), (void const * )*(he->h_addr_list + 0),
             (unsigned int )he->h_length);
      }
    }
    {
# 848 "mod_fastcgi.c"
    __x___1 = (unsigned short )proc->port;
# 848 "mod_fastcgi.c"
    __asm__ ("rorw $8, %w0": "=r" (__v___1): "0" (__x___1): "cc");
# 848 "mod_fastcgi.c"
    fcgi_addr_in.sin_port = __v___1;
# 849 "mod_fastcgi.c"
    servlen = sizeof(fcgi_addr_in);
# 851 "mod_fastcgi.c"
    socket_type = 2;
# 852 "mod_fastcgi.c"
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_in);
# 854 "mod_fastcgi.c"
    buffer_copy_string(proc->connection_name, "tcp:");
# 855 "mod_fastcgi.c"
    buffer_append_string_buffer(proc->connection_name, (buffer const *)host->host);
# 856 "mod_fastcgi.c"
    buffer_append_string(proc->connection_name, ":");
# 857 "mod_fastcgi.c"
    buffer_append_long(proc->connection_name, (long )proc->port);
    }
  } else {
    {
# 793 "mod_fastcgi.c"
    memset((void *)(& fcgi_addr), 0, sizeof(fcgi_addr));
# 796 "mod_fastcgi.c"
    fcgi_addr_un.sun_family = (unsigned short)1;
# 797 "mod_fastcgi.c"
    strcpy((char * )(fcgi_addr_un.sun_path), (char const * )(proc->unixsocket)->ptr);
# 800 "mod_fastcgi.c"
    tmp = strlen((char const *)(fcgi_addr_un.sun_path));
# 800 "mod_fastcgi.c"
    servlen = (unsigned int )(((struct sockaddr_un *)0)->sun_path) + tmp;
# 805 "mod_fastcgi.c"
    socket_type = 1;
# 806 "mod_fastcgi.c"
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_un);
# 808 "mod_fastcgi.c"
    buffer_copy_string(proc->connection_name, "unix:");
# 809 "mod_fastcgi.c"
    buffer_append_string_buffer(proc->connection_name, (buffer const *)proc->unixsocket);
    }
  }
  {
# 860 "mod_fastcgi.c"
  fcgi_fd = socket(socket_type, 1, 0);
  }
# 860 "mod_fastcgi.c"
  if (-1 == fcgi_fd) {
    {
# 861 "mod_fastcgi.c"
    tmp___3 = __errno_location();
# 861 "mod_fastcgi.c"
    tmp___4 = strerror(*tmp___3);
# 861 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 861U, "ss", "failed:", tmp___4);
    }
# 863 "mod_fastcgi.c"
    return (-1);
  }
  {
# 866 "mod_fastcgi.c"
  tmp___60 = connect(fcgi_fd, (struct sockaddr const *)fcgi_addr, servlen);
  }
# 866 "mod_fastcgi.c"
  if (-1 == tmp___60) {
    {
# 871 "mod_fastcgi.c"
    tmp___5 = __errno_location();
    }
# 871 "mod_fastcgi.c"
    if (*tmp___5 != 2) {
      {
# 871 "mod_fastcgi.c"
      tmp___6 = buffer_is_empty(proc->unixsocket);
      }
# 871 "mod_fastcgi.c"
      if (! tmp___6) {
        {
# 873 "mod_fastcgi.c"
        unlink((char const *)(proc->unixsocket)->ptr);
        }
      }
    }
    {
# 876 "mod_fastcgi.c"
    close(fcgi_fd);
# 879 "mod_fastcgi.c"
    fcgi_fd = socket(socket_type, 1, 0);
    }
# 879 "mod_fastcgi.c"
    if (-1 == fcgi_fd) {
      {
# 880 "mod_fastcgi.c"
      tmp___7 = __errno_location();
# 880 "mod_fastcgi.c"
      tmp___8 = strerror(*tmp___7);
# 880 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 880U, "ss", "socket failed:", tmp___8);
      }
# 882 "mod_fastcgi.c"
      return (-1);
    }
    {
# 885 "mod_fastcgi.c"
    val = 1;
# 886 "mod_fastcgi.c"
    tmp___11 = setsockopt(fcgi_fd, 1, 2, (void const *)(& val), sizeof(val));
    }
# 886 "mod_fastcgi.c"
    if (tmp___11 < 0) {
      {
# 887 "mod_fastcgi.c"
      tmp___9 = __errno_location();
# 887 "mod_fastcgi.c"
      tmp___10 = strerror(*tmp___9);
# 887 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 887U, "ss", "socketsockopt failed:", tmp___10);
      }
# 889 "mod_fastcgi.c"
      return (-1);
    }
    {
# 893 "mod_fastcgi.c"
    tmp___14 = bind(fcgi_fd, (struct sockaddr const *)fcgi_addr, servlen);
    }
# 893 "mod_fastcgi.c"
    if (-1 == tmp___14) {
      {
# 894 "mod_fastcgi.c"
      tmp___12 = __errno_location();
# 894 "mod_fastcgi.c"
      tmp___13 = strerror(*tmp___12);
# 894 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 894U, "sbs", "bind failed for:", proc->connection_name,
                      tmp___13);
      }
# 898 "mod_fastcgi.c"
      return (-1);
    }
    {
# 901 "mod_fastcgi.c"
    tmp___17 = listen(fcgi_fd, 1024);
    }
# 901 "mod_fastcgi.c"
    if (-1 == tmp___17) {
      {
# 902 "mod_fastcgi.c"
      tmp___15 = __errno_location();
# 902 "mod_fastcgi.c"
      tmp___16 = strerror(*tmp___15);
# 902 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 902U, "ss", "listen failed:", tmp___16);
      }
# 904 "mod_fastcgi.c"
      return (-1);
    }
    {
# 908 "mod_fastcgi.c"
    child = fork();
    }
# 908 "mod_fastcgi.c"
    switch (child) {
    case 0:
# 910 "mod_fastcgi.c"
    i = (size_t )0;
# 916 "mod_fastcgi.c"
    env.ptr = (char **)((void *)0);
# 917 "mod_fastcgi.c"
    env.size = 0U;
# 918 "mod_fastcgi.c"
    env.used = 0U;
# 920 "mod_fastcgi.c"
    arg.ptr = (char **)((void *)0);
# 921 "mod_fastcgi.c"
    arg.size = 0U;
# 922 "mod_fastcgi.c"
    arg.used = 0U;
# 924 "mod_fastcgi.c"
    if (fcgi_fd != 0) {
      {
# 925 "mod_fastcgi.c"
      close(0);
# 926 "mod_fastcgi.c"
      dup2(fcgi_fd, 0);
# 927 "mod_fastcgi.c"
      close(fcgi_fd);
      }
    }
# 931 "mod_fastcgi.c"
    i = 3U;
# 931 "mod_fastcgi.c"
    while (i < 256U) {
      {
# 932 "mod_fastcgi.c"
      close((int )i);
# 931 "mod_fastcgi.c"
      i ++;
      }
    }
# 936 "mod_fastcgi.c"
    if ((host->bin_env_copy)->used) {
# 937 "mod_fastcgi.c"
      i = 0U;
# 937 "mod_fastcgi.c"
      while (i < (host->bin_env_copy)->used) {
        {
# 938 "mod_fastcgi.c"
        ds = (data_string *)*((host->bin_env_copy)->data + i);
# 941 "mod_fastcgi.c"
        ge = getenv((char const *)(ds->value)->ptr);
        }
# 941 "mod_fastcgi.c"
        if ((unsigned int )((void *)0) != (unsigned int )ge) {
          {
# 942 "mod_fastcgi.c"
          tmp___18 = strlen((char const *)ge);
          }
# 942 "mod_fastcgi.c"
          if ((ds->value)->used) {
# 942 "mod_fastcgi.c"
            tmp___19 = (ds->value)->used - 1U;
          } else {
# 942 "mod_fastcgi.c"
            tmp___19 = 0U;
          }
          {
# 942 "mod_fastcgi.c"
          env_add(& env, (char const *)(ds->value)->ptr, tmp___19, (char const *)ge,
                  tmp___18);
          }
        }
# 937 "mod_fastcgi.c"
        i ++;
      }
    } else {
# 946 "mod_fastcgi.c"
      i = 0U;
# 946 "mod_fastcgi.c"
      while (*(environ + i)) {
        {
# 949 "mod_fastcgi.c"
        tmp___22 = __builtin_strchr(*(environ + i), '=');
# 949 "mod_fastcgi.c"
        eq = tmp___22;
        }
# 949 "mod_fastcgi.c"
        if ((unsigned int )((void *)0) != (unsigned int )eq) {
          {
# 950 "mod_fastcgi.c"
          tmp___20 = strlen((char const *)(eq + 1));
# 950 "mod_fastcgi.c"
          env_add(& env, (char const *)*(environ + i), (unsigned int )(eq - *(environ + i)),
                  (char const *)(eq + 1), tmp___20);
          }
        }
# 946 "mod_fastcgi.c"
        i ++;
      }
    }
# 956 "mod_fastcgi.c"
    i = 0U;
# 956 "mod_fastcgi.c"
    while (i < (host->bin_env)->used) {
# 957 "mod_fastcgi.c"
      ds___0 = (data_string *)*((host->bin_env)->data + i);
# 959 "mod_fastcgi.c"
      if ((ds___0->value)->used) {
# 959 "mod_fastcgi.c"
        tmp___23 = (ds___0->value)->used - 1U;
      } else {
# 959 "mod_fastcgi.c"
        tmp___23 = 0U;
      }
# 959 "mod_fastcgi.c"
      if ((ds___0->key)->used) {
# 959 "mod_fastcgi.c"
        tmp___24 = (ds___0->key)->used - 1U;
      } else {
# 959 "mod_fastcgi.c"
        tmp___24 = 0U;
      }
      {
# 959 "mod_fastcgi.c"
      env_add(& env, (char const *)(ds___0->key)->ptr, tmp___24, (char const *)(ds___0->value)->ptr,
              tmp___23);
# 956 "mod_fastcgi.c"
      i ++;
      }
    }
# 962 "mod_fastcgi.c"
    i = 0U;
# 962 "mod_fastcgi.c"
    while (i < env.used) {
# 964 "mod_fastcgi.c"
      if (0) {
# 964 "mod_fastcgi.c"
        if (0) {
          {
# 964 "mod_fastcgi.c"
          __s1_len___0 = strlen((char const *)*(env.ptr + i));
# 964 "mod_fastcgi.c"
          __s2_len___0 = strlen("PHP_FCGI_CHILDREN=");
          }
# 964 "mod_fastcgi.c"
          if (! ((unsigned int )((void const *)(*(env.ptr + i) + 1)) - (unsigned int )((void const *)*(env.ptr + i)) == 1U)) {
            goto _L___2;
          } else {
# 964 "mod_fastcgi.c"
            if (__s1_len___0 >= 4U) {
              _L___2:
# 964 "mod_fastcgi.c"
              if (! ((unsigned int )((void const *)("PHP_FCGI_CHILDREN=" + 1)) - (unsigned int )((void const *)"PHP_FCGI_CHILDREN=") == 1U)) {
# 964 "mod_fastcgi.c"
                tmp___48 = 1;
              } else {
# 964 "mod_fastcgi.c"
                if (__s2_len___0 >= 4U) {
# 964 "mod_fastcgi.c"
                  tmp___48 = 1;
                } else {
# 964 "mod_fastcgi.c"
                  tmp___48 = 0;
                }
              }
            } else {
# 964 "mod_fastcgi.c"
              tmp___48 = 0;
            }
          }
# 964 "mod_fastcgi.c"
          if (tmp___48) {
            {
# 964 "mod_fastcgi.c"
            tmp___44 = __builtin_strcmp((char const *)*(env.ptr + i), "PHP_FCGI_CHILDREN=");
            }
          } else {
            {
# 964 "mod_fastcgi.c"
            tmp___47 = __builtin_strcmp((char const *)*(env.ptr + i), "PHP_FCGI_CHILDREN=");
# 964 "mod_fastcgi.c"
            tmp___44 = tmp___47;
            }
          }
        } else {
          {
# 964 "mod_fastcgi.c"
          tmp___47 = __builtin_strcmp((char const *)*(env.ptr + i), "PHP_FCGI_CHILDREN=");
# 964 "mod_fastcgi.c"
          tmp___44 = tmp___47;
          }
        }
# 964 "mod_fastcgi.c"
        tmp___38 = tmp___44;
      } else {
        {
# 964 "mod_fastcgi.c"
        tmp___38 = strncmp((char const *)*(env.ptr + i), "PHP_FCGI_CHILDREN=", sizeof("PHP_FCGI_CHILDREN=") - 1U);
        }
      }
# 964 "mod_fastcgi.c"
      if (0 == tmp___38) {
# 964 "mod_fastcgi.c"
        break;
      }
# 962 "mod_fastcgi.c"
      i ++;
    }
# 968 "mod_fastcgi.c"
    if (i == env.used) {
      {
# 969 "mod_fastcgi.c"
      env_add(& env, "PHP_FCGI_CHILDREN", sizeof("PHP_FCGI_CHILDREN") - 1U, "1", sizeof("1") - 1U);
      }
    }
    {
# 972 "mod_fastcgi.c"
    *(env.ptr + env.used) = (char *)((void *)0);
# 974 "mod_fastcgi.c"
    parse_binpath(& arg, host->bin_path);
# 978 "mod_fastcgi.c"
    c = strrchr((char const *)*(arg.ptr + 0), '/');
    }
# 978 "mod_fastcgi.c"
    if ((unsigned int )((void *)0) != (unsigned int )c) {
      {
# 979 "mod_fastcgi.c"
      *c = (char )'\000';
# 982 "mod_fastcgi.c"
      tmp___53 = chdir((char const *)*(arg.ptr + 0));
      }
# 982 "mod_fastcgi.c"
      if (-1 == tmp___53) {
        {
# 983 "mod_fastcgi.c"
        *c = (char )'/';
# 984 "mod_fastcgi.c"
        tmp___51 = __errno_location();
# 984 "mod_fastcgi.c"
        tmp___52 = strerror(*tmp___51);
# 984 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 984U, "sss", "chdir failed:", tmp___52,
                        *(arg.ptr + 0));
        }
      }
# 986 "mod_fastcgi.c"
      *c = (char )'/';
    }
    {
# 991 "mod_fastcgi.c"
    execve((char const *)*(arg.ptr + 0), (char * const *)arg.ptr, (char * const *)env.ptr);
# 993 "mod_fastcgi.c"
    tmp___54 = __errno_location();
# 993 "mod_fastcgi.c"
    tmp___55 = strerror(*tmp___54);
# 993 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 993U, "sbs", "execve failed for:", host->bin_path,
                    tmp___55);
# 996 "mod_fastcgi.c"
    tmp___56 = __errno_location();
# 996 "mod_fastcgi.c"
    exit(*tmp___56);
    }
# 998 "mod_fastcgi.c"
    break;
    case -1:
# 1002 "mod_fastcgi.c"
    break;
    default:
    {
# 1007 "mod_fastcgi.c"
    select(0, (fd_set * )((void *)0), (fd_set * )((void *)0),
           (fd_set * )((void *)0), (struct timeval * )(& tv));
# 1009 "mod_fastcgi.c"
    tmp___57 = waitpid(child, & status, 1);
    }
# 1009 "mod_fastcgi.c"
    switch (tmp___57) {
    case 0:
# 1012 "mod_fastcgi.c"
    break;
    case -1:
    {
# 1015 "mod_fastcgi.c"
    tmp___58 = __errno_location();
# 1015 "mod_fastcgi.c"
    tmp___59 = strerror(*tmp___58);
# 1015 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 1015U, "ss", "pid not found:", tmp___59);
    }
# 1017 "mod_fastcgi.c"
    return (-1);
    default:
    {
# 1019 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 1019U, "sbs", "the fastcgi-backend", host->bin_path,
                    "failed to start:");
# 1022 "mod_fastcgi.c"
    __constr_expr_4.__in = status;
    }
# 1022 "mod_fastcgi.c"
    if ((__constr_expr_4.__i & 127) == 0) {
      {
# 1023 "mod_fastcgi.c"
      __constr_expr_0.__in = status;
# 1023 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 1023U, "sdb", "child exited with status",
                      (__constr_expr_0.__i & 65280) >> 8, host->bin_path);
# 1026 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 1026U, "s", "If you\'re trying to run PHP as a FastCGI backend, make sure you\'re using the FastCGI-enabled version.\nYou can find out if it is the right one by executing \'php -v\' and it should display \'(cgi-fcgi)\' in the output, NOT \'(cgi)\' NOR \'(cli)\'.\nFor more information, check http://trac.lighttpd.net/trac/wiki/Docs%3AModFastCGI#preparing-php-as-a-fastcgi-programIf this is PHP on Gentoo, add \'fastcgi\' to the USE flags.");
      }
    } else {
# 1032 "mod_fastcgi.c"
      __constr_expr_3.__in = status;
# 1032 "mod_fastcgi.c"
      if ((int )((signed char )((__constr_expr_3.__i & 127) + 1)) >> 1 > 0) {
        {
# 1033 "mod_fastcgi.c"
        __constr_expr_1.__in = status;
# 1033 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 1033U, "sd", "terminated by signal:",
                        __constr_expr_1.__i & 127);
# 1037 "mod_fastcgi.c"
        __constr_expr_2.__in = status;
        }
# 1037 "mod_fastcgi.c"
        if ((__constr_expr_2.__i & 127) == 11) {
          {
# 1038 "mod_fastcgi.c"
          log_error_write(srv, "mod_fastcgi.c", 1038U, "s", "to be exact: it segfaulted, crashed, died, ... you get the idea.");
# 1040 "mod_fastcgi.c"
          log_error_write(srv, "mod_fastcgi.c", 1040U, "s", "If this is PHP, try removing the bytecode caches for now and try again.");
          }
        }
      } else {
        {
# 1044 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 1044U, "sd", "child died somehow:",
                        status);
        }
      }
    }
# 1048 "mod_fastcgi.c"
    return (-1);
    }
# 1052 "mod_fastcgi.c"
    proc->pid = child;
# 1053 "mod_fastcgi.c"
    proc->last_used = srv->cur_ts;
# 1054 "mod_fastcgi.c"
    proc->is_local = 1;
# 1056 "mod_fastcgi.c"
    break;
    }
  } else {
# 1060 "mod_fastcgi.c"
    proc->is_local = 0;
# 1061 "mod_fastcgi.c"
    proc->pid = 0;
# 1063 "mod_fastcgi.c"
    if (p->conf.debug) {
      {
# 1064 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 1064U, "sb", "(debug) socket is already used; won\'t spawn:",
                      proc->connection_name);
      }
    }
  }
  {
# 1070 "mod_fastcgi.c"
  proc->state = 1;
# 1071 "mod_fastcgi.c"
  (host->active_procs) ++;
# 1073 "mod_fastcgi.c"
  close(fcgi_fd);
  }
# 1075 "mod_fastcgi.c"
  return (0);
}
}
# 1079 "mod_fastcgi.c"
static handler_t mod_fastcgi_set_defaults(server *srv , void *p_d )
{ plugin_data *p ;
  data_unset *du ;
  size_t i ;
  buffer *fcgi_mode ;
  buffer *tmp ;
  config_values_t cv[4] ;
  void *tmp___0 ;
  plugin_config *s ;
  array *ca ;
  void *tmp___1 ;
  int tmp___2 ;
  size_t j ;
  data_array *da ;
  size_t n ;
  data_array *da_ext ;
  data_array *da_host ;
  fcgi_extension_host *host ;
  config_values_t fcv[19] ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  struct sockaddr_un un ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  size_t pno ;
  fcgi_proc *proc ;
  size_t tmp___9 ;
  int tmp___10 ;
  int tmp___11 ;
  fcgi_proc *proc___0 ;
  size_t tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  unsigned char const *__s2 ;
  register int __result ;
  int tmp___19 ;
  unsigned char const *__s1 ;
  register int __result___0 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  unsigned char const *__s2___0 ;
  register int __result___1 ;
  int tmp___23 ;
  unsigned char const *__s1___0 ;
  register int __result___2 ;
  int tmp___24 ;
  int tmp___25 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  unsigned char const *__s2___1 ;
  register int __result___3 ;
  int tmp___29 ;
  unsigned char const *__s1___1 ;
  register int __result___4 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  unsigned char const *__s2___2 ;
  register int __result___5 ;
  int tmp___33 ;
  unsigned char const *__s1___2 ;
  register int __result___6 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;

  {
  {
# 1080 "mod_fastcgi.c"
  p = (plugin_data *)p_d;
# 1082 "mod_fastcgi.c"
  i = (size_t )0;
# 1083 "mod_fastcgi.c"
  tmp = buffer_init();
# 1083 "mod_fastcgi.c"
  fcgi_mode = tmp;
# 1085 "mod_fastcgi.c"
  cv[0].key = "fastcgi.server";
# 1085 "mod_fastcgi.c"
  cv[0].destination = (void *)0;
# 1085 "mod_fastcgi.c"
  cv[0].type = 5;
# 1085 "mod_fastcgi.c"
  cv[0].scope = 2;
# 1085 "mod_fastcgi.c"
  cv[1].key = "fastcgi.debug";
# 1085 "mod_fastcgi.c"
  cv[1].destination = (void *)0;
# 1085 "mod_fastcgi.c"
  cv[1].type = 2;
# 1085 "mod_fastcgi.c"
  cv[1].scope = 2;
# 1085 "mod_fastcgi.c"
  cv[2].key = "fastcgi.map-extensions";
# 1085 "mod_fastcgi.c"
  cv[2].destination = (void *)0;
# 1085 "mod_fastcgi.c"
  cv[2].type = 4;
# 1085 "mod_fastcgi.c"
  cv[2].scope = 2;
# 1085 "mod_fastcgi.c"
  cv[3].key = (char const *)((void *)0);
# 1085 "mod_fastcgi.c"
  cv[3].destination = (void *)0;
# 1085 "mod_fastcgi.c"
  cv[3].type = 0;
# 1085 "mod_fastcgi.c"
  cv[3].scope = 0;
# 1092 "mod_fastcgi.c"
  tmp___0 = calloc(1U, (srv->config_context)->used * sizeof(specific_config *));
# 1092 "mod_fastcgi.c"
  p->config_storage = (plugin_config **)tmp___0;
# 1094 "mod_fastcgi.c"
  i = 0U;
  }
# 1094 "mod_fastcgi.c"
  while (i < (srv->config_context)->used) {
    {
# 1098 "mod_fastcgi.c"
    tmp___1 = malloc(sizeof(plugin_config ));
# 1098 "mod_fastcgi.c"
    s = (plugin_config *)tmp___1;
# 1099 "mod_fastcgi.c"
    s->exts = fastcgi_extensions_init();
# 1100 "mod_fastcgi.c"
    s->debug = 0;
# 1101 "mod_fastcgi.c"
    s->ext_mapping = array_init();
# 1103 "mod_fastcgi.c"
    cv[0].destination = (void *)s->exts;
# 1104 "mod_fastcgi.c"
    cv[1].destination = (void *)(& s->debug);
# 1105 "mod_fastcgi.c"
    cv[2].destination = (void *)s->ext_mapping;
# 1107 "mod_fastcgi.c"
    *(p->config_storage + i) = s;
# 1108 "mod_fastcgi.c"
    ca = ((data_config *)*((srv->config_context)->data + i))->value;
# 1110 "mod_fastcgi.c"
    tmp___2 = config_insert_values_global(srv, ca, (config_values_t const *)(cv));
    }
# 1110 "mod_fastcgi.c"
    if (0 != tmp___2) {
# 1111 "mod_fastcgi.c"
      return (5);
    }
    {
# 1118 "mod_fastcgi.c"
    du = array_get_element(ca, "fastcgi.server");
    }
# 1118 "mod_fastcgi.c"
    if ((unsigned int )((void *)0) != (unsigned int )du) {
# 1120 "mod_fastcgi.c"
      da = (data_array *)du;
# 1122 "mod_fastcgi.c"
      if ((int )du->type != 3) {
        {
# 1123 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 1123U, "sss", "unexpected type for key: ",
                        "fastcgi.server", "array of strings");
        }
# 1126 "mod_fastcgi.c"
        return (5);
      }
# 1135 "mod_fastcgi.c"
      j = 0U;
# 1135 "mod_fastcgi.c"
      while (j < (da->value)->used) {
# 1137 "mod_fastcgi.c"
        da_ext = (data_array *)*((da->value)->data + j);
# 1139 "mod_fastcgi.c"
        if ((int )(*((da->value)->data + j))->type != 3) {
          {
# 1140 "mod_fastcgi.c"
          log_error_write(srv, "mod_fastcgi.c", 1140U, "sssbs", "unexpected type for key: ",
                          "fastcgi.server", "[", (*((da->value)->data + j))->key,
                          "](string)");
          }
# 1144 "mod_fastcgi.c"
          return (5);
        }
# 1159 "mod_fastcgi.c"
        n = 0U;
# 1159 "mod_fastcgi.c"
        while (n < (da_ext->value)->used) {
# 1160 "mod_fastcgi.c"
          da_host = (data_array *)*((da_ext->value)->data + n);
# 1164 "mod_fastcgi.c"
          fcv[0].key = "host";
# 1164 "mod_fastcgi.c"
          fcv[0].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[0].type = 1;
# 1164 "mod_fastcgi.c"
          fcv[0].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[1].key = "docroot";
# 1164 "mod_fastcgi.c"
          fcv[1].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[1].type = 1;
# 1164 "mod_fastcgi.c"
          fcv[1].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[2].key = "mode";
# 1164 "mod_fastcgi.c"
          fcv[2].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[2].type = 1;
# 1164 "mod_fastcgi.c"
          fcv[2].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[3].key = "socket";
# 1164 "mod_fastcgi.c"
          fcv[3].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[3].type = 1;
# 1164 "mod_fastcgi.c"
          fcv[3].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[4].key = "bin-path";
# 1164 "mod_fastcgi.c"
          fcv[4].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[4].type = 1;
# 1164 "mod_fastcgi.c"
          fcv[4].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[5].key = "check-local";
# 1164 "mod_fastcgi.c"
          fcv[5].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[5].type = 3;
# 1164 "mod_fastcgi.c"
          fcv[5].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[6].key = "port";
# 1164 "mod_fastcgi.c"
          fcv[6].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[6].type = 2;
# 1164 "mod_fastcgi.c"
          fcv[6].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[7].key = "min-procs-not-working";
# 1164 "mod_fastcgi.c"
          fcv[7].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[7].type = 2;
# 1164 "mod_fastcgi.c"
          fcv[7].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[8].key = "max-procs";
# 1164 "mod_fastcgi.c"
          fcv[8].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[8].type = 2;
# 1164 "mod_fastcgi.c"
          fcv[8].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[9].key = "max-load-per-proc";
# 1164 "mod_fastcgi.c"
          fcv[9].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[9].type = 2;
# 1164 "mod_fastcgi.c"
          fcv[9].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[10].key = "idle-timeout";
# 1164 "mod_fastcgi.c"
          fcv[10].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[10].type = 2;
# 1164 "mod_fastcgi.c"
          fcv[10].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[11].key = "disable-time";
# 1164 "mod_fastcgi.c"
          fcv[11].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[11].type = 2;
# 1164 "mod_fastcgi.c"
          fcv[11].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[12].key = "bin-environment";
# 1164 "mod_fastcgi.c"
          fcv[12].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[12].type = 4;
# 1164 "mod_fastcgi.c"
          fcv[12].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[13].key = "bin-copy-environment";
# 1164 "mod_fastcgi.c"
          fcv[13].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[13].type = 4;
# 1164 "mod_fastcgi.c"
          fcv[13].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[14].key = "broken-scriptfilename";
# 1164 "mod_fastcgi.c"
          fcv[14].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[14].type = 3;
# 1164 "mod_fastcgi.c"
          fcv[14].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[15].key = "allow-x-send-file";
# 1164 "mod_fastcgi.c"
          fcv[15].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[15].type = 3;
# 1164 "mod_fastcgi.c"
          fcv[15].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[16].key = "strip-request-uri";
# 1164 "mod_fastcgi.c"
          fcv[16].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[16].type = 1;
# 1164 "mod_fastcgi.c"
          fcv[16].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[17].key = "kill-signal";
# 1164 "mod_fastcgi.c"
          fcv[17].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[17].type = 2;
# 1164 "mod_fastcgi.c"
          fcv[17].scope = 2;
# 1164 "mod_fastcgi.c"
          fcv[18].key = (char const *)((void *)0);
# 1164 "mod_fastcgi.c"
          fcv[18].destination = (void *)0;
# 1164 "mod_fastcgi.c"
          fcv[18].type = 0;
# 1164 "mod_fastcgi.c"
          fcv[18].scope = 0;
# 1190 "mod_fastcgi.c"
          if ((int )da_host->type != 3) {
            {
# 1191 "mod_fastcgi.c"
            log_error_write(srv, "mod_fastcgi.c", 1191U, "ssSBS", "unexpected type for key:",
                            "fastcgi.server", "[", da_host->key, "](string)");
            }
# 1196 "mod_fastcgi.c"
            return (5);
          }
          {
# 1199 "mod_fastcgi.c"
          host = fastcgi_host_init();
# 1201 "mod_fastcgi.c"
          buffer_copy_string_buffer(host->id, (buffer const *)da_host->key);
# 1203 "mod_fastcgi.c"
          host->check_local = (unsigned short)1;
# 1204 "mod_fastcgi.c"
          host->min_procs = (unsigned short)4;
# 1205 "mod_fastcgi.c"
          host->max_procs = (unsigned short)4;
# 1206 "mod_fastcgi.c"
          host->max_load_per_proc = (unsigned short)1;
# 1207 "mod_fastcgi.c"
          host->idle_timeout = (unsigned short)60;
# 1208 "mod_fastcgi.c"
          host->mode = (unsigned short)1;
# 1209 "mod_fastcgi.c"
          host->disable_time = (unsigned short)60;
# 1210 "mod_fastcgi.c"
          host->break_scriptfilename_for_php = (unsigned short)0;
# 1211 "mod_fastcgi.c"
          host->allow_xsendfile = (unsigned short)0;
# 1212 "mod_fastcgi.c"
          host->kill_signal = (unsigned short)15;
# 1214 "mod_fastcgi.c"
          fcv[0].destination = (void *)host->host;
# 1215 "mod_fastcgi.c"
          fcv[1].destination = (void *)host->docroot;
# 1216 "mod_fastcgi.c"
          fcv[2].destination = (void *)fcgi_mode;
# 1217 "mod_fastcgi.c"
          fcv[3].destination = (void *)host->unixsocket;
# 1218 "mod_fastcgi.c"
          fcv[4].destination = (void *)host->bin_path;
# 1220 "mod_fastcgi.c"
          fcv[5].destination = (void *)(& host->check_local);
# 1221 "mod_fastcgi.c"
          fcv[6].destination = (void *)(& host->port);
# 1222 "mod_fastcgi.c"
          fcv[7].destination = (void *)(& host->min_procs);
# 1223 "mod_fastcgi.c"
          fcv[8].destination = (void *)(& host->max_procs);
# 1224 "mod_fastcgi.c"
          fcv[9].destination = (void *)(& host->max_load_per_proc);
# 1225 "mod_fastcgi.c"
          fcv[10].destination = (void *)(& host->idle_timeout);
# 1226 "mod_fastcgi.c"
          fcv[11].destination = (void *)(& host->disable_time);
# 1228 "mod_fastcgi.c"
          fcv[12].destination = (void *)host->bin_env;
# 1229 "mod_fastcgi.c"
          fcv[13].destination = (void *)host->bin_env_copy;
# 1230 "mod_fastcgi.c"
          fcv[14].destination = (void *)(& host->break_scriptfilename_for_php);
# 1231 "mod_fastcgi.c"
          fcv[15].destination = (void *)(& host->allow_xsendfile);
# 1232 "mod_fastcgi.c"
          fcv[16].destination = (void *)host->strip_request_uri;
# 1233 "mod_fastcgi.c"
          fcv[17].destination = (void *)(& host->kill_signal);
# 1235 "mod_fastcgi.c"
          tmp___3 = config_insert_values_internal(srv, da_host->value, (config_values_t const *)(fcv));
          }
# 1235 "mod_fastcgi.c"
          if (0 != tmp___3) {
# 1236 "mod_fastcgi.c"
            return (5);
          }
          {
# 1239 "mod_fastcgi.c"
          tmp___4 = buffer_is_empty(host->host);
          }
# 1239 "mod_fastcgi.c"
          if (tmp___4) {
# 1239 "mod_fastcgi.c"
            if (host->port) {
              _L:
              {
# 1239 "mod_fastcgi.c"
              tmp___5 = buffer_is_empty(host->unixsocket);
              }
# 1239 "mod_fastcgi.c"
              if (! tmp___5) {
                {
# 1241 "mod_fastcgi.c"
                log_error_write(srv, "mod_fastcgi.c", 1241U, "sbsbsbs", "either host/port or socket have to be set in:",
                                da->key, "= (", da_ext->key, " => (", da_host->key,
                                " ( ...");
                }
# 1247 "mod_fastcgi.c"
                return (5);
              }
            }
          } else {
            goto _L;
          }
          {
# 1250 "mod_fastcgi.c"
          tmp___8 = buffer_is_empty(host->unixsocket);
          }
# 1250 "mod_fastcgi.c"
          if (tmp___8) {
            {
# 1266 "mod_fastcgi.c"
            tmp___6 = buffer_is_empty(host->host);
            }
# 1266 "mod_fastcgi.c"
            if (tmp___6) {
              {
# 1266 "mod_fastcgi.c"
              tmp___7 = buffer_is_empty(host->bin_path);
              }
# 1266 "mod_fastcgi.c"
              if (tmp___7) {
                {
# 1268 "mod_fastcgi.c"
                log_error_write(srv, "mod_fastcgi.c", 1268U, "sbsbsbs", "host or binpath have to be set in:",
                                da->key, "= (", da_ext->key, " => (", da_host->key,
                                " ( ...");
                }
# 1274 "mod_fastcgi.c"
                return (5);
              } else {
                goto _L___0;
              }
            } else {
              _L___0:
# 1275 "mod_fastcgi.c"
              if ((int )host->port == 0) {
                {
# 1276 "mod_fastcgi.c"
                log_error_write(srv, "mod_fastcgi.c", 1276U, "sbsbsbs", "port has to be set in:",
                                da->key, "= (", da_ext->key, " => (", da_host->key,
                                " ( ...");
                }
# 1282 "mod_fastcgi.c"
                return (5);
              }
            }
          } else {
# 1254 "mod_fastcgi.c"
            if ((host->unixsocket)->used > sizeof(un.sun_path) - 2U) {
              {
# 1255 "mod_fastcgi.c"
              log_error_write(srv, "mod_fastcgi.c", 1255U, "sbsbsbs", "unixsocket is too long in:",
                              da->key, "= (", da_ext->key, " => (", da_host->key,
                              " ( ...");
              }
# 1261 "mod_fastcgi.c"
              return (5);
            }
          }
          {
# 1286 "mod_fastcgi.c"
          tmp___14 = buffer_is_empty(host->bin_path);
          }
# 1286 "mod_fastcgi.c"
          if (tmp___14) {
            {
# 1345 "mod_fastcgi.c"
            proc___0 = fastcgi_process_init();
# 1346 "mod_fastcgi.c"
            tmp___12 = host->num_procs;
# 1346 "mod_fastcgi.c"
            (host->num_procs) ++;
# 1346 "mod_fastcgi.c"
            proc___0->id = tmp___12;
# 1347 "mod_fastcgi.c"
            (host->max_id) ++;
# 1348 "mod_fastcgi.c"
            (host->active_procs) ++;
# 1349 "mod_fastcgi.c"
            proc___0->state = 1;
# 1351 "mod_fastcgi.c"
            tmp___13 = buffer_is_empty(host->unixsocket);
            }
# 1351 "mod_fastcgi.c"
            if (tmp___13) {
# 1352 "mod_fastcgi.c"
              proc___0->port = (unsigned int )host->port;
            } else {
              {
# 1354 "mod_fastcgi.c"
              buffer_copy_string_buffer(proc___0->unixsocket, (buffer const *)host->unixsocket);
              }
            }
            {
# 1357 "mod_fastcgi.c"
            fastcgi_status_init(srv, p->statuskey, host, proc___0);
# 1359 "mod_fastcgi.c"
            host->first = proc___0;
# 1361 "mod_fastcgi.c"
            host->min_procs = (unsigned short)1;
# 1362 "mod_fastcgi.c"
            host->max_procs = (unsigned short)1;
            }
          } else {
# 1291 "mod_fastcgi.c"
            host->min_procs = host->max_procs;
# 1293 "mod_fastcgi.c"
            if ((int )host->min_procs > (int )host->max_procs) {
# 1293 "mod_fastcgi.c"
              host->max_procs = host->min_procs;
            }
# 1294 "mod_fastcgi.c"
            if ((int )host->max_load_per_proc < 1) {
# 1294 "mod_fastcgi.c"
              host->max_load_per_proc = (unsigned short)0;
            }
# 1296 "mod_fastcgi.c"
            if (s->debug) {
              {
# 1297 "mod_fastcgi.c"
              log_error_write(srv, "mod_fastcgi.c", 1297U, "ssbsdsbsdsd", "--- fastcgi spawning local",
                              "\n\tproc:", host->bin_path, "\n\tport:", host->port,
                              "\n\tsocket", host->unixsocket, "\n\tmin-procs:", host->min_procs,
                              "\n\tmax-procs:", host->max_procs);
              }
            }
# 1306 "mod_fastcgi.c"
            pno = 0U;
# 1306 "mod_fastcgi.c"
            while (pno < (size_t )host->min_procs) {
              {
# 1309 "mod_fastcgi.c"
              proc = fastcgi_process_init();
# 1310 "mod_fastcgi.c"
              tmp___9 = host->num_procs;
# 1310 "mod_fastcgi.c"
              (host->num_procs) ++;
# 1310 "mod_fastcgi.c"
              proc->id = tmp___9;
# 1311 "mod_fastcgi.c"
              (host->max_id) ++;
# 1313 "mod_fastcgi.c"
              tmp___10 = buffer_is_empty(host->unixsocket);
              }
# 1313 "mod_fastcgi.c"
              if (tmp___10) {
# 1314 "mod_fastcgi.c"
                proc->port = (size_t )host->port + pno;
              } else {
                {
# 1316 "mod_fastcgi.c"
                buffer_copy_string_buffer(proc->unixsocket, (buffer const *)host->unixsocket);
# 1317 "mod_fastcgi.c"
                buffer_append_string(proc->unixsocket, "-");
# 1318 "mod_fastcgi.c"
                buffer_append_long(proc->unixsocket, (long )pno);
                }
              }
# 1321 "mod_fastcgi.c"
              if (s->debug) {
                {
# 1322 "mod_fastcgi.c"
                log_error_write(srv, "mod_fastcgi.c", 1322U, "ssdsbsdsd", "--- fastcgi spawning",
                                "\n\tport:", host->port, "\n\tsocket", host->unixsocket,
                                "\n\tcurrent:", pno, "/", host->min_procs);
                }
              }
              {
# 1329 "mod_fastcgi.c"
              tmp___11 = fcgi_spawn_connection(srv, p, host, proc);
              }
# 1329 "mod_fastcgi.c"
              if (tmp___11) {
                {
# 1330 "mod_fastcgi.c"
                log_error_write(srv, "mod_fastcgi.c", 1330U, "s", "[ERROR]: spawning fcgi failed.");
                }
# 1332 "mod_fastcgi.c"
                return (5);
              }
              {
# 1335 "mod_fastcgi.c"
              fastcgi_status_init(srv, p->statuskey, host, proc);
# 1337 "mod_fastcgi.c"
              proc->next = host->first;
              }
# 1338 "mod_fastcgi.c"
              if (host->first) {
# 1338 "mod_fastcgi.c"
                (host->first)->prev = proc;
              }
# 1340 "mod_fastcgi.c"
              host->first = proc;
# 1306 "mod_fastcgi.c"
              pno ++;
            }
          }
          {
# 1365 "mod_fastcgi.c"
          tmp___36 = buffer_is_empty(fcgi_mode);
          }
# 1365 "mod_fastcgi.c"
          if (! tmp___36) {
# 1366 "mod_fastcgi.c"
            if (0) {
              {
# 1366 "mod_fastcgi.c"
              __s1_len___0 = strlen((char const *)fcgi_mode->ptr);
# 1366 "mod_fastcgi.c"
              __s2_len___0 = strlen("responder");
              }
# 1366 "mod_fastcgi.c"
              if (! ((unsigned int )((void const *)(fcgi_mode->ptr + 1)) - (unsigned int )((void const *)fcgi_mode->ptr) == 1U)) {
                goto _L___4;
              } else {
# 1366 "mod_fastcgi.c"
                if (__s1_len___0 >= 4U) {
                  _L___4:
# 1366 "mod_fastcgi.c"
                  if (! ((unsigned int )((void const *)("responder" + 1)) - (unsigned int )((void const *)"responder") == 1U)) {
# 1366 "mod_fastcgi.c"
                    tmp___35 = 1;
                  } else {
# 1366 "mod_fastcgi.c"
                    if (__s2_len___0 >= 4U) {
# 1366 "mod_fastcgi.c"
                      tmp___35 = 1;
                    } else {
# 1366 "mod_fastcgi.c"
                      tmp___35 = 0;
                    }
                  }
                } else {
# 1366 "mod_fastcgi.c"
                  tmp___35 = 0;
                }
              }
# 1366 "mod_fastcgi.c"
              if (tmp___35) {
                {
# 1366 "mod_fastcgi.c"
                tmp___31 = __builtin_strcmp((char const *)fcgi_mode->ptr, "responder");
                }
              } else {
                {
# 1366 "mod_fastcgi.c"
                tmp___34 = __builtin_strcmp((char const *)fcgi_mode->ptr, "responder");
# 1366 "mod_fastcgi.c"
                tmp___31 = tmp___34;
                }
              }
            } else {
              {
# 1366 "mod_fastcgi.c"
              tmp___34 = __builtin_strcmp((char const *)fcgi_mode->ptr, "responder");
# 1366 "mod_fastcgi.c"
              tmp___31 = tmp___34;
              }
            }
# 1366 "mod_fastcgi.c"
            if (tmp___31 == 0) {
# 1367 "mod_fastcgi.c"
              host->mode = (unsigned short)1;
            } else {
# 1368 "mod_fastcgi.c"
              if (0) {
                {
# 1368 "mod_fastcgi.c"
                __s1_len = strlen((char const *)fcgi_mode->ptr);
# 1368 "mod_fastcgi.c"
                __s2_len = strlen("authorizer");
                }
# 1368 "mod_fastcgi.c"
                if (! ((unsigned int )((void const *)(fcgi_mode->ptr + 1)) - (unsigned int )((void const *)fcgi_mode->ptr) == 1U)) {
                  goto _L___2;
                } else {
# 1368 "mod_fastcgi.c"
                  if (__s1_len >= 4U) {
                    _L___2:
# 1368 "mod_fastcgi.c"
                    if (! ((unsigned int )((void const *)("authorizer" + 1)) - (unsigned int )((void const *)"authorizer") == 1U)) {
# 1368 "mod_fastcgi.c"
                      tmp___25 = 1;
                    } else {
# 1368 "mod_fastcgi.c"
                      if (__s2_len >= 4U) {
# 1368 "mod_fastcgi.c"
                        tmp___25 = 1;
                      } else {
# 1368 "mod_fastcgi.c"
                        tmp___25 = 0;
                      }
                    }
                  } else {
# 1368 "mod_fastcgi.c"
                    tmp___25 = 0;
                  }
                }
# 1368 "mod_fastcgi.c"
                if (tmp___25) {
                  {
# 1368 "mod_fastcgi.c"
                  tmp___21 = __builtin_strcmp((char const *)fcgi_mode->ptr, "authorizer");
                  }
                } else {
                  {
# 1368 "mod_fastcgi.c"
                  tmp___24 = __builtin_strcmp((char const *)fcgi_mode->ptr, "authorizer");
# 1368 "mod_fastcgi.c"
                  tmp___21 = tmp___24;
                  }
                }
              } else {
                {
# 1368 "mod_fastcgi.c"
                tmp___24 = __builtin_strcmp((char const *)fcgi_mode->ptr, "authorizer");
# 1368 "mod_fastcgi.c"
                tmp___21 = tmp___24;
                }
              }
# 1368 "mod_fastcgi.c"
              if (tmp___21 == 0) {
                {
# 1369 "mod_fastcgi.c"
                host->mode = (unsigned short)2;
# 1370 "mod_fastcgi.c"
                tmp___15 = buffer_is_empty(host->docroot);
                }
# 1370 "mod_fastcgi.c"
                if (tmp___15) {
                  {
# 1371 "mod_fastcgi.c"
                  log_error_write(srv, "mod_fastcgi.c", 1371U, "s", "ERROR: docroot is required for authorizer mode.");
                  }
# 1373 "mod_fastcgi.c"
                  return (5);
                }
              } else {
                {
# 1376 "mod_fastcgi.c"
                log_error_write(srv, "mod_fastcgi.c", 1376U, "sbs", "WARNING: unknown fastcgi mode:",
                                fcgi_mode, "(ignored, mode set to responder)");
                }
              }
            }
          }
          {
# 1383 "mod_fastcgi.c"
          fastcgi_extension_insert(s->exts, da_ext->key, host);
# 1159 "mod_fastcgi.c"
          n ++;
          }
        }
# 1135 "mod_fastcgi.c"
        j ++;
      }
    }
# 1094 "mod_fastcgi.c"
    i ++;
  }
  {
# 1389 "mod_fastcgi.c"
  buffer_free(fcgi_mode);
  }
# 1391 "mod_fastcgi.c"
  return (1);
}
}
# 1394 "mod_fastcgi.c"
static int fcgi_set_state(server *srv , handler_ctx *hctx , fcgi_connection_state_t state )
{

  {
# 1395 "mod_fastcgi.c"
  hctx->state = state;
# 1396 "mod_fastcgi.c"
  hctx->state_timestamp = srv->cur_ts;
# 1398 "mod_fastcgi.c"
  return (0);
}
}
# 1402 "mod_fastcgi.c"
static size_t fcgi_requestid_new(server *srv , plugin_data *p )
{ size_t m ;
  size_t i ;
  buffer_uint *r ;
  void *tmp ;
  void *tmp___0 ;
  size_t tmp___1 ;

  {
# 1403 "mod_fastcgi.c"
  m = (size_t )0;
# 1405 "mod_fastcgi.c"
  r = & p->fcgi_request_id;
# 1409 "mod_fastcgi.c"
  i = 0U;
# 1409 "mod_fastcgi.c"
  while (i < r->used) {
# 1410 "mod_fastcgi.c"
    if (*(r->ptr + i) > m) {
# 1410 "mod_fastcgi.c"
      m = *(r->ptr + i);
    }
# 1409 "mod_fastcgi.c"
    i ++;
  }
# 1413 "mod_fastcgi.c"
  if (r->size == 0U) {
    {
# 1414 "mod_fastcgi.c"
    r->size = 16U;
# 1415 "mod_fastcgi.c"
    tmp = malloc(sizeof(*(r->ptr)) * r->size);
# 1415 "mod_fastcgi.c"
    r->ptr = (size_t *)tmp;
    }
  } else {
# 1416 "mod_fastcgi.c"
    if (r->used == r->size) {
      {
# 1417 "mod_fastcgi.c"
      r->size += 16U;
# 1418 "mod_fastcgi.c"
      tmp___0 = realloc((void *)r->ptr, sizeof(*(r->ptr)) * r->size);
# 1418 "mod_fastcgi.c"
      r->ptr = (size_t *)tmp___0;
      }
    }
  }
# 1421 "mod_fastcgi.c"
  tmp___1 = r->used;
# 1421 "mod_fastcgi.c"
  (r->used) ++;
# 1421 "mod_fastcgi.c"
  m ++;
# 1421 "mod_fastcgi.c"
  *(r->ptr + tmp___1) = m;
# 1423 "mod_fastcgi.c"
  return (m);
}
}
# 1426 "mod_fastcgi.c"
static int fcgi_requestid_del(server *srv , plugin_data *p , size_t request_id )
{ size_t i ;
  buffer_uint *r ;

  {
# 1428 "mod_fastcgi.c"
  r = & p->fcgi_request_id;
# 1432 "mod_fastcgi.c"
  i = 0U;
# 1432 "mod_fastcgi.c"
  while (i < r->used) {
# 1433 "mod_fastcgi.c"
    if (*(r->ptr + i) == request_id) {
# 1433 "mod_fastcgi.c"
      break;
    }
# 1432 "mod_fastcgi.c"
    i ++;
  }
# 1436 "mod_fastcgi.c"
  if (i != r->used) {
# 1439 "mod_fastcgi.c"
    if (i != r->used - 1U) {
# 1440 "mod_fastcgi.c"
      *(r->ptr + i) = *(r->ptr + (r->used - 1U));
    }
# 1442 "mod_fastcgi.c"
    (r->used) --;
  }
# 1445 "mod_fastcgi.c"
  return (0);
}
}
# 1447 "mod_fastcgi.c"
void fcgi_connection_close(server *srv , handler_ctx *hctx )
{ plugin_data *p ;
  connection *con ;
  size_t tmp ;

  {
# 1451 "mod_fastcgi.c"
  if ((unsigned int )((void *)0) == (unsigned int )hctx) {
# 1451 "mod_fastcgi.c"
    return;
  }
# 1453 "mod_fastcgi.c"
  p = hctx->plugin_data;
# 1454 "mod_fastcgi.c"
  con = hctx->remote_conn;
# 1456 "mod_fastcgi.c"
  if (hctx->fd != -1) {
    {
# 1457 "mod_fastcgi.c"
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
# 1458 "mod_fastcgi.c"
    fdevent_unregister(srv->ev, hctx->fd);
# 1459 "mod_fastcgi.c"
    close(hctx->fd);
# 1460 "mod_fastcgi.c"
    (srv->cur_fds) --;
    }
  }
# 1463 "mod_fastcgi.c"
  if (hctx->request_id != 0U) {
    {
# 1464 "mod_fastcgi.c"
    fcgi_requestid_del(srv, p, hctx->request_id);
    }
  }
# 1467 "mod_fastcgi.c"
  if (hctx->host) {
# 1467 "mod_fastcgi.c"
    if (hctx->proc) {
# 1468 "mod_fastcgi.c"
      if (hctx->got_proc) {
        {
# 1470 "mod_fastcgi.c"
        ((hctx->proc)->load) --;
# 1472 "mod_fastcgi.c"
        status_counter_dec(srv, "fastcgi.active-requests", sizeof("fastcgi.active-requests") - 1U);
# 1474 "mod_fastcgi.c"
        fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
# 1475 "mod_fastcgi.c"
        buffer_append_string(p->statuskey, ".load");
        }
# 1477 "mod_fastcgi.c"
        if ((p->statuskey)->used) {
# 1477 "mod_fastcgi.c"
          tmp = (p->statuskey)->used - 1U;
        } else {
# 1477 "mod_fastcgi.c"
          tmp = 0U;
        }
        {
# 1477 "mod_fastcgi.c"
        status_counter_set(srv, (char const *)(p->statuskey)->ptr, tmp, (int )(hctx->proc)->load);
        }
# 1479 "mod_fastcgi.c"
        if (p->conf.debug) {
          {
# 1480 "mod_fastcgi.c"
          log_error_write(srv, "mod_fastcgi.c", 1480U, "ssdsbsd", "released proc:",
                          "pid:", (hctx->proc)->pid, "socket:", (hctx->proc)->connection_name,
                          "load:", (hctx->proc)->load);
          }
        }
      }
    }
  }
  {
# 1490 "mod_fastcgi.c"
  handler_ctx_free(hctx);
# 1491 "mod_fastcgi.c"
  *(con->plugin_ctx + p->id) = (void *)0;
  }
# 1492 "mod_fastcgi.c"
  return;
}
}
# 1494 "mod_fastcgi.c"
static int fcgi_reconnect(server *srv , handler_ctx *hctx )
{ plugin_data *p ;

  {
# 1495 "mod_fastcgi.c"
  p = hctx->plugin_data;
# 1516 "mod_fastcgi.c"
  if (hctx->fd != -1) {
    {
# 1517 "mod_fastcgi.c"
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
# 1518 "mod_fastcgi.c"
    fdevent_unregister(srv->ev, hctx->fd);
# 1519 "mod_fastcgi.c"
    close(hctx->fd);
# 1520 "mod_fastcgi.c"
    (srv->cur_fds) --;
# 1521 "mod_fastcgi.c"
    hctx->fd = -1;
    }
  }
  {
# 1524 "mod_fastcgi.c"
  fcgi_requestid_del(srv, p, hctx->request_id);
# 1526 "mod_fastcgi.c"
  fcgi_set_state(srv, hctx, 1);
# 1528 "mod_fastcgi.c"
  hctx->request_id = 0U;
# 1529 "mod_fastcgi.c"
  (hctx->reconnects) ++;
  }
# 1531 "mod_fastcgi.c"
  if (p->conf.debug > 2) {
# 1532 "mod_fastcgi.c"
    if (hctx->proc) {
      {
# 1533 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 1533U, "sdb", "release proc for reconnect:",
                      (hctx->proc)->pid, (hctx->proc)->connection_name);
      }
    } else {
      {
# 1537 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 1537U, "sb", "release proc for reconnect:",
                      (hctx->host)->unixsocket);
      }
    }
  }
# 1543 "mod_fastcgi.c"
  if (hctx->proc) {
# 1543 "mod_fastcgi.c"
    if (hctx->got_proc) {
# 1544 "mod_fastcgi.c"
      ((hctx->proc)->load) --;
    }
  }
# 1548 "mod_fastcgi.c"
  ((hctx->host)->load) --;
# 1549 "mod_fastcgi.c"
  hctx->host = (fcgi_extension_host *)((void *)0);
# 1551 "mod_fastcgi.c"
  return (0);
}
}
# 1555 "mod_fastcgi.c"
static handler_t fcgi_connection_reset(server *srv , connection *con , void *p_d )
{ plugin_data *p ;

  {
  {
# 1556 "mod_fastcgi.c"
  p = (plugin_data *)p_d;
# 1558 "mod_fastcgi.c"
  fcgi_connection_close(srv, (handler_ctx *)*(con->plugin_ctx + p->id));
  }
# 1560 "mod_fastcgi.c"
  return (1);
}
}
# 1564 "mod_fastcgi.c"
static int fcgi_env_add(buffer *env , char const *key , size_t key_len , char const *val ,
                        size_t val_len )
{ size_t len ;
  int tmp ;
  int tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  size_t tmp___6 ;
  size_t tmp___7 ;
  size_t tmp___8 ;
  size_t tmp___9 ;
  size_t tmp___10 ;

  {
# 1567 "mod_fastcgi.c"
  if (! key) {
# 1567 "mod_fastcgi.c"
    return (-1);
  } else {
# 1567 "mod_fastcgi.c"
    if (! val) {
# 1567 "mod_fastcgi.c"
      return (-1);
    }
  }
# 1569 "mod_fastcgi.c"
  len = key_len + val_len;
# 1571 "mod_fastcgi.c"
  if (key_len > 127U) {
# 1571 "mod_fastcgi.c"
    tmp = 4;
  } else {
# 1571 "mod_fastcgi.c"
    tmp = 1;
  }
# 1571 "mod_fastcgi.c"
  len += (size_t )tmp;
# 1572 "mod_fastcgi.c"
  if (val_len > 127U) {
# 1572 "mod_fastcgi.c"
    tmp___0 = 4;
  } else {
# 1572 "mod_fastcgi.c"
    tmp___0 = 1;
  }
  {
# 1572 "mod_fastcgi.c"
  len += (size_t )tmp___0;
# 1574 "mod_fastcgi.c"
  buffer_prepare_append(env, len);
  }
# 1576 "mod_fastcgi.c"
  if (key_len > 127U) {
# 1577 "mod_fastcgi.c"
    tmp___1 = env->used;
# 1577 "mod_fastcgi.c"
    (env->used) ++;
# 1577 "mod_fastcgi.c"
    *(env->ptr + tmp___1) = (char )(((key_len >> 24) & 255U) | 128U);
# 1578 "mod_fastcgi.c"
    tmp___2 = env->used;
# 1578 "mod_fastcgi.c"
    (env->used) ++;
# 1578 "mod_fastcgi.c"
    *(env->ptr + tmp___2) = (char )((key_len >> 16) & 255U);
# 1579 "mod_fastcgi.c"
    tmp___3 = env->used;
# 1579 "mod_fastcgi.c"
    (env->used) ++;
# 1579 "mod_fastcgi.c"
    *(env->ptr + tmp___3) = (char )((key_len >> 8) & 255U);
# 1580 "mod_fastcgi.c"
    tmp___4 = env->used;
# 1580 "mod_fastcgi.c"
    (env->used) ++;
# 1580 "mod_fastcgi.c"
    *(env->ptr + tmp___4) = (char )(key_len & 255U);
  } else {
# 1582 "mod_fastcgi.c"
    tmp___5 = env->used;
# 1582 "mod_fastcgi.c"
    (env->used) ++;
# 1582 "mod_fastcgi.c"
    *(env->ptr + tmp___5) = (char )(key_len & 255U);
  }
# 1585 "mod_fastcgi.c"
  if (val_len > 127U) {
# 1586 "mod_fastcgi.c"
    tmp___6 = env->used;
# 1586 "mod_fastcgi.c"
    (env->used) ++;
# 1586 "mod_fastcgi.c"
    *(env->ptr + tmp___6) = (char )(((val_len >> 24) & 255U) | 128U);
# 1587 "mod_fastcgi.c"
    tmp___7 = env->used;
# 1587 "mod_fastcgi.c"
    (env->used) ++;
# 1587 "mod_fastcgi.c"
    *(env->ptr + tmp___7) = (char )((val_len >> 16) & 255U);
# 1588 "mod_fastcgi.c"
    tmp___8 = env->used;
# 1588 "mod_fastcgi.c"
    (env->used) ++;
# 1588 "mod_fastcgi.c"
    *(env->ptr + tmp___8) = (char )((val_len >> 8) & 255U);
# 1589 "mod_fastcgi.c"
    tmp___9 = env->used;
# 1589 "mod_fastcgi.c"
    (env->used) ++;
# 1589 "mod_fastcgi.c"
    *(env->ptr + tmp___9) = (char )(val_len & 255U);
  } else {
# 1591 "mod_fastcgi.c"
    tmp___10 = env->used;
# 1591 "mod_fastcgi.c"
    (env->used) ++;
# 1591 "mod_fastcgi.c"
    *(env->ptr + tmp___10) = (char )(val_len & 255U);
  }
  {
# 1594 "mod_fastcgi.c"
  memcpy((void * )(env->ptr + env->used), (void const * )key,
         key_len);
# 1595 "mod_fastcgi.c"
  env->used += key_len;
# 1596 "mod_fastcgi.c"
  memcpy((void * )(env->ptr + env->used), (void const * )val,
         val_len);
# 1597 "mod_fastcgi.c"
  env->used += val_len;
  }
# 1599 "mod_fastcgi.c"
  return (0);
}
}
# 1602 "mod_fastcgi.c"
static int fcgi_header(FCGI_Header *header , unsigned char type , size_t request_id ,
                       int contentLength , unsigned char paddingLength )
{

  {
# 1603 "mod_fastcgi.c"
  header->version = (unsigned char)1;
# 1604 "mod_fastcgi.c"
  header->type = type;
# 1605 "mod_fastcgi.c"
  header->requestIdB0 = (unsigned char )(request_id & 255U);
# 1606 "mod_fastcgi.c"
  header->requestIdB1 = (unsigned char )((request_id >> 8) & 255U);
# 1607 "mod_fastcgi.c"
  header->contentLengthB0 = (unsigned char )(contentLength & 255);
# 1608 "mod_fastcgi.c"
  header->contentLengthB1 = (unsigned char )((contentLength >> 8) & 255);
# 1609 "mod_fastcgi.c"
  header->paddingLength = paddingLength;
# 1610 "mod_fastcgi.c"
  header->reserved = (unsigned char)0;
# 1612 "mod_fastcgi.c"
  return (0);
}
}
# 1630 "mod_fastcgi.c"
static connection_result_t fcgi_establish_connection(server *srv , handler_ctx *hctx )
{ struct sockaddr *fcgi_addr ;
  struct sockaddr_in fcgi_addr_in ;
  struct sockaddr_un fcgi_addr_un ;
  socklen_t servlen ;
  fcgi_extension_host *host ;
  fcgi_proc *proc ;
  int fcgi_fd ;
  size_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp___2 ;
  int tmp___3 ;
  int *tmp___4 ;
  char *tmp___5 ;
  int *tmp___6 ;
  int *tmp___7 ;
  int *tmp___8 ;
  int *tmp___9 ;
  int tmp___10 ;

  {
  {
# 1638 "mod_fastcgi.c"
  host = hctx->host;
# 1639 "mod_fastcgi.c"
  proc = hctx->proc;
# 1640 "mod_fastcgi.c"
  fcgi_fd = hctx->fd;
# 1642 "mod_fastcgi.c"
  memset((void *)(& fcgi_addr), 0, sizeof(fcgi_addr));
# 1644 "mod_fastcgi.c"
  tmp___3 = buffer_is_empty(proc->unixsocket);
  }
# 1644 "mod_fastcgi.c"
  if (tmp___3) {
    {
# 1666 "mod_fastcgi.c"
    fcgi_addr_in.sin_family = (unsigned short)2;
# 1667 "mod_fastcgi.c"
    tmp___1 = inet_aton((char const *)(host->host)->ptr, & fcgi_addr_in.sin_addr);
    }
# 1667 "mod_fastcgi.c"
    if (0 == tmp___1) {
      {
# 1668 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 1668U, "sbs", "converting IP address failed for",
                      host->host, "\nBe sure to specify an IP address here");
      }
# 1672 "mod_fastcgi.c"
      return ((enum __anonenum_connection_result_t_154 )-1);
    }
    {
# 1674 "mod_fastcgi.c"
    __x = (unsigned short )proc->port;
# 1674 "mod_fastcgi.c"
    __asm__ ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
# 1674 "mod_fastcgi.c"
    fcgi_addr_in.sin_port = __v;
# 1675 "mod_fastcgi.c"
    servlen = sizeof(fcgi_addr_in);
# 1677 "mod_fastcgi.c"
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_in);
# 1679 "mod_fastcgi.c"
    tmp___2 = buffer_is_empty(proc->connection_name);
    }
# 1679 "mod_fastcgi.c"
    if (tmp___2) {
      {
# 1681 "mod_fastcgi.c"
      buffer_copy_string(proc->connection_name, "tcp:");
# 1682 "mod_fastcgi.c"
      buffer_append_string_buffer(proc->connection_name, (buffer const *)host->host);
# 1683 "mod_fastcgi.c"
      buffer_append_string(proc->connection_name, ":");
# 1684 "mod_fastcgi.c"
      buffer_append_long(proc->connection_name, (long )proc->port);
      }
    }
  } else {
    {
# 1647 "mod_fastcgi.c"
    fcgi_addr_un.sun_family = (unsigned short)1;
# 1648 "mod_fastcgi.c"
    strcpy((char * )(fcgi_addr_un.sun_path), (char const * )(proc->unixsocket)->ptr);
# 1650 "mod_fastcgi.c"
    tmp = strlen((char const *)(fcgi_addr_un.sun_path));
# 1650 "mod_fastcgi.c"
    servlen = (unsigned int )(((struct sockaddr_un *)0)->sun_path) + tmp;
# 1655 "mod_fastcgi.c"
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_un);
# 1657 "mod_fastcgi.c"
    tmp___0 = buffer_is_empty(proc->connection_name);
    }
# 1657 "mod_fastcgi.c"
    if (tmp___0) {
      {
# 1659 "mod_fastcgi.c"
      buffer_copy_string(proc->connection_name, "unix:");
# 1660 "mod_fastcgi.c"
      buffer_append_string_buffer(proc->connection_name, (buffer const *)proc->unixsocket);
      }
    }
  }
  {
# 1688 "mod_fastcgi.c"
  tmp___10 = connect(fcgi_fd, (struct sockaddr const *)fcgi_addr, servlen);
  }
# 1688 "mod_fastcgi.c"
  if (-1 == tmp___10) {
    {
# 1689 "mod_fastcgi.c"
    tmp___7 = __errno_location();
    }
# 1689 "mod_fastcgi.c"
    if (*tmp___7 == 115) {
      goto _L;
    } else {
      {
# 1689 "mod_fastcgi.c"
      tmp___8 = __errno_location();
      }
# 1689 "mod_fastcgi.c"
      if (*tmp___8 == 114) {
        goto _L;
      } else {
        {
# 1689 "mod_fastcgi.c"
        tmp___9 = __errno_location();
        }
# 1689 "mod_fastcgi.c"
        if (*tmp___9 == 4) {
          _L:
# 1692 "mod_fastcgi.c"
          if (hctx->conf.debug > 2) {
            {
# 1693 "mod_fastcgi.c"
            log_error_write(srv, "mod_fastcgi.c", 1693U, "sb", "connect delayed; will continue later:",
                            proc->connection_name);
            }
          }
# 1697 "mod_fastcgi.c"
          return (2);
        } else {
          {
# 1698 "mod_fastcgi.c"
          tmp___6 = __errno_location();
          }
# 1698 "mod_fastcgi.c"
          if (*tmp___6 == 11) {
# 1699 "mod_fastcgi.c"
            if (hctx->conf.debug) {
              {
# 1700 "mod_fastcgi.c"
              log_error_write(srv, "mod_fastcgi.c", 1700U, "sbsd", "This means that you have more incoming requests than your FastCGI backend can handle in parallel.It might help to spawn more FastCGI backends or PHP children; if not, decrease server.max-connections.The load for this FastCGI backend",
                              proc->connection_name, "is", proc->load);
              }
            }
# 1706 "mod_fastcgi.c"
            return (3);
          } else {
            {
# 1708 "mod_fastcgi.c"
            tmp___4 = __errno_location();
# 1708 "mod_fastcgi.c"
            tmp___5 = strerror(*tmp___4);
# 1708 "mod_fastcgi.c"
            log_error_write(srv, "mod_fastcgi.c", 1708U, "sssb", "connect failed:",
                            tmp___5, "on", proc->connection_name);
            }
# 1713 "mod_fastcgi.c"
            return (4);
          }
        }
      }
    }
  }
# 1717 "mod_fastcgi.c"
  hctx->reconnects = 0;
# 1718 "mod_fastcgi.c"
  if (hctx->conf.debug > 1) {
    {
# 1719 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 1719U, "sd", "connect succeeded: ", fcgi_fd);
    }
  }
# 1723 "mod_fastcgi.c"
  return (1);
}
}
# 1726 "mod_fastcgi.c"
static int fcgi_env_add_request_headers(server *srv , connection *con , plugin_data *p )
{ size_t i ;
  data_string *ds ;
  size_t j ;
  int tmp ;
  char c ;
  int tmp___0 ;
  int tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;
  size_t tmp___5 ;
  data_string *ds___0 ;
  size_t j___0 ;
  char c___0 ;
  int tmp___6 ;
  int tmp___7 ;
  size_t tmp___8 ;
  size_t tmp___9 ;
  size_t tmp___10 ;
  size_t tmp___11 ;

  {
# 1729 "mod_fastcgi.c"
  i = 0U;
# 1729 "mod_fastcgi.c"
  while (i < (con->request.headers)->used) {
# 1732 "mod_fastcgi.c"
    ds = (data_string *)*((con->request.headers)->data + i);
# 1734 "mod_fastcgi.c"
    if ((ds->value)->used) {
# 1734 "mod_fastcgi.c"
      if ((ds->key)->used) {
        {
# 1736 "mod_fastcgi.c"
        buffer_reset(srv->tmp_buf);
# 1738 "mod_fastcgi.c"
        tmp = strcasecmp((char const *)(ds->key)->ptr, "CONTENT-TYPE");
        }
# 1738 "mod_fastcgi.c"
        if (0 != tmp) {
          {
# 1739 "mod_fastcgi.c"
          buffer_copy_string_len(srv->tmp_buf, "HTTP_", sizeof("HTTP_") - 1U);
# 1740 "mod_fastcgi.c"
          ((srv->tmp_buf)->used) --;
          }
        }
        {
# 1743 "mod_fastcgi.c"
        buffer_prepare_append(srv->tmp_buf, (ds->key)->used + 2U);
# 1744 "mod_fastcgi.c"
        j = 0U;
        }
# 1744 "mod_fastcgi.c"
        while (j < (ds->key)->used - 1U) {
          {
# 1745 "mod_fastcgi.c"
          c = (char )'_';
# 1746 "mod_fastcgi.c"
          tmp___1 = light_isalpha((int )*((ds->key)->ptr + j));
          }
# 1746 "mod_fastcgi.c"
          if (tmp___1) {
# 1748 "mod_fastcgi.c"
            c = (char )((int )*((ds->key)->ptr + j) & -33);
          } else {
            {
# 1749 "mod_fastcgi.c"
            tmp___0 = light_isdigit((int )*((ds->key)->ptr + j));
            }
# 1749 "mod_fastcgi.c"
            if (tmp___0) {
# 1751 "mod_fastcgi.c"
              c = *((ds->key)->ptr + j);
            }
          }
# 1753 "mod_fastcgi.c"
          tmp___2 = (srv->tmp_buf)->used;
# 1753 "mod_fastcgi.c"
          ((srv->tmp_buf)->used) ++;
# 1753 "mod_fastcgi.c"
          *((srv->tmp_buf)->ptr + tmp___2) = c;
# 1744 "mod_fastcgi.c"
          j ++;
        }
# 1755 "mod_fastcgi.c"
        tmp___3 = (srv->tmp_buf)->used;
# 1755 "mod_fastcgi.c"
        ((srv->tmp_buf)->used) ++;
# 1755 "mod_fastcgi.c"
        *((srv->tmp_buf)->ptr + tmp___3) = (char )'\000';
# 1757 "mod_fastcgi.c"
        if ((ds->value)->used) {
# 1757 "mod_fastcgi.c"
          tmp___4 = (ds->value)->used - 1U;
        } else {
# 1757 "mod_fastcgi.c"
          tmp___4 = 0U;
        }
# 1757 "mod_fastcgi.c"
        if ((srv->tmp_buf)->used) {
# 1757 "mod_fastcgi.c"
          tmp___5 = (srv->tmp_buf)->used - 1U;
        } else {
# 1757 "mod_fastcgi.c"
          tmp___5 = 0U;
        }
        {
# 1757 "mod_fastcgi.c"
        fcgi_env_add(p->fcgi_env, (char const *)(srv->tmp_buf)->ptr, tmp___5, (char const *)(ds->value)->ptr,
                     tmp___4);
        }
      }
    }
# 1729 "mod_fastcgi.c"
    i ++;
  }
# 1761 "mod_fastcgi.c"
  i = 0U;
# 1761 "mod_fastcgi.c"
  while (i < (con->environment)->used) {
# 1764 "mod_fastcgi.c"
    ds___0 = (data_string *)*((con->environment)->data + i);
# 1766 "mod_fastcgi.c"
    if ((ds___0->value)->used) {
# 1766 "mod_fastcgi.c"
      if ((ds___0->key)->used) {
        {
# 1768 "mod_fastcgi.c"
        buffer_reset(srv->tmp_buf);
# 1770 "mod_fastcgi.c"
        buffer_prepare_append(srv->tmp_buf, (ds___0->key)->used + 2U);
# 1771 "mod_fastcgi.c"
        j___0 = 0U;
        }
# 1771 "mod_fastcgi.c"
        while (j___0 < (ds___0->key)->used - 1U) {
          {
# 1772 "mod_fastcgi.c"
          c___0 = (char )'_';
# 1773 "mod_fastcgi.c"
          tmp___7 = light_isalpha((int )*((ds___0->key)->ptr + j___0));
          }
# 1773 "mod_fastcgi.c"
          if (tmp___7) {
# 1775 "mod_fastcgi.c"
            c___0 = (char )((int )*((ds___0->key)->ptr + j___0) & -33);
          } else {
            {
# 1776 "mod_fastcgi.c"
            tmp___6 = light_isdigit((int )*((ds___0->key)->ptr + j___0));
            }
# 1776 "mod_fastcgi.c"
            if (tmp___6) {
# 1778 "mod_fastcgi.c"
              c___0 = *((ds___0->key)->ptr + j___0);
            }
          }
# 1780 "mod_fastcgi.c"
          tmp___8 = (srv->tmp_buf)->used;
# 1780 "mod_fastcgi.c"
          ((srv->tmp_buf)->used) ++;
# 1780 "mod_fastcgi.c"
          *((srv->tmp_buf)->ptr + tmp___8) = c___0;
# 1771 "mod_fastcgi.c"
          j___0 ++;
        }
# 1782 "mod_fastcgi.c"
        tmp___9 = (srv->tmp_buf)->used;
# 1782 "mod_fastcgi.c"
        ((srv->tmp_buf)->used) ++;
# 1782 "mod_fastcgi.c"
        *((srv->tmp_buf)->ptr + tmp___9) = (char )'\000';
# 1784 "mod_fastcgi.c"
        if ((ds___0->value)->used) {
# 1784 "mod_fastcgi.c"
          tmp___10 = (ds___0->value)->used - 1U;
        } else {
# 1784 "mod_fastcgi.c"
          tmp___10 = 0U;
        }
# 1784 "mod_fastcgi.c"
        if ((srv->tmp_buf)->used) {
# 1784 "mod_fastcgi.c"
          tmp___11 = (srv->tmp_buf)->used - 1U;
        } else {
# 1784 "mod_fastcgi.c"
          tmp___11 = 0U;
        }
        {
# 1784 "mod_fastcgi.c"
        fcgi_env_add(p->fcgi_env, (char const *)(srv->tmp_buf)->ptr, tmp___11, (char const *)(ds___0->value)->ptr,
                     tmp___10);
        }
      }
    }
# 1761 "mod_fastcgi.c"
    i ++;
  }
# 1788 "mod_fastcgi.c"
  return (0);
}
}
# 1792 "mod_fastcgi.c"
static int fcgi_create_env(server *srv , handler_ctx *hctx , size_t request_id )
{ FCGI_BeginRequestRecord beginRecord ;
  FCGI_Header header ;
  buffer *b ;
  char buf[32] ;
  char const *s ;
  char b2[47] ;
  plugin_data *p ;
  fcgi_extension_host *host ;
  connection *con ;
  server_socket *srv_sock ;
  sock_addr our_addr ;
  socklen_t our_addr_len ;
  size_t tmp ;
  void const *tmp___0 ;
  size_t tmp___1 ;
  register unsigned short __v ;
  register unsigned short __x ;
  int tmp___2 ;
  size_t tmp___3 ;
  int tmp___4 ;
  size_t tmp___5 ;
  register unsigned short __v___0 ;
  register unsigned short __x___0 ;
  int tmp___6 ;
  size_t tmp___7 ;
  size_t tmp___8 ;
  char *http_authorization ;
  data_string *ds ;
  size_t tmp___9 ;
  data_unset *tmp___10 ;
  char *auth_realm ;
  int auth_type_len ;
  size_t tmp___11 ;
  size_t tmp___12 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___13 ;
  int tmp___14 ;
  int tmp___15 ;
  unsigned char const *__s2 ;
  register int __result ;
  int tmp___16 ;
  unsigned char const *__s1 ;
  register int __result___0 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  unsigned char const *__s2___0 ;
  register int __result___1 ;
  int tmp___20 ;
  unsigned char const *__s1___0 ;
  register int __result___2 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  unsigned char const *__s2___1 ;
  register int __result___3 ;
  int tmp___28 ;
  unsigned char const *__s1___1 ;
  register int __result___4 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  unsigned char const *__s2___2 ;
  register int __result___5 ;
  int tmp___32 ;
  unsigned char const *__s1___2 ;
  register int __result___6 ;
  int tmp___33 ;
  int tmp___34 ;
  size_t tmp___35 ;
  size_t tmp___36 ;
  size_t tmp___37 ;
  size_t tmp___38 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___39 ;
  int tmp___40 ;
  int tmp___41 ;
  unsigned char const *__s2___3 ;
  register int __result___7 ;
  int tmp___42 ;
  unsigned char const *__s1___3 ;
  register int __result___8 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  unsigned char const *__s2___4 ;
  register int __result___9 ;
  int tmp___46 ;
  unsigned char const *__s1___4 ;
  register int __result___10 ;
  int tmp___47 ;
  int tmp___48 ;
  int tmp___49 ;
  int tmp___50 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___51 ;
  int tmp___52 ;
  int tmp___53 ;
  unsigned char const *__s2___5 ;
  register int __result___11 ;
  int tmp___54 ;
  unsigned char const *__s1___5 ;
  register int __result___12 ;
  int tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;
  unsigned char const *__s2___6 ;
  register int __result___13 ;
  int tmp___58 ;
  unsigned char const *__s1___6 ;
  register int __result___14 ;
  int tmp___59 ;
  int tmp___60 ;
  size_t tmp___61 ;
  size_t tmp___62 ;
  void *tmp___63 ;
  char *tmp___64 ;
  int tmp___65 ;
  size_t tmp___66 ;
  size_t tmp___67 ;
  size_t tmp___68 ;
  int tmp___69 ;
  size_t tmp___70 ;
  int tmp___71 ;
  size_t tmp___72 ;
  size_t tmp___73 ;
  size_t tmp___74 ;
  size_t tmp___75 ;
  int tmp___76 ;
  size_t tmp___77 ;
  size_t tmp___78 ;
  size_t tmp___79 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___80 ;
  int tmp___81 ;
  int tmp___82 ;
  unsigned char const *__s2___7 ;
  register int __result___15 ;
  int tmp___83 ;
  unsigned char const *__s1___7 ;
  register int __result___16 ;
  int tmp___84 ;
  int tmp___85 ;
  int tmp___86 ;
  unsigned char const *__s2___8 ;
  register int __result___17 ;
  int tmp___87 ;
  unsigned char const *__s1___8 ;
  register int __result___18 ;
  int tmp___88 ;
  int tmp___89 ;
  int tmp___90 ;
  int tmp___91 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___92 ;
  int tmp___93 ;
  int tmp___94 ;
  unsigned char const *__s2___9 ;
  register int __result___19 ;
  int tmp___95 ;
  unsigned char const *__s1___9 ;
  register int __result___20 ;
  int tmp___96 ;
  int tmp___97 ;
  int tmp___98 ;
  unsigned char const *__s2___10 ;
  register int __result___21 ;
  int tmp___99 ;
  unsigned char const *__s1___10 ;
  register int __result___22 ;
  int tmp___100 ;
  int tmp___101 ;
  size_t tmp___102 ;
  size_t tmp___103 ;
  size_t tmp___104 ;
  size_t tmp___105 ;
  int tmp___106 ;
  size_t tmp___107 ;
  int tmp___108 ;
  size_t tmp___109 ;
  size_t tmp___110 ;
  chunkqueue *req_cq ;
  chunk *req_c ;
  off_t offset ;
  off_t weWant ;
  off_t tmp___111 ;
  off_t written ;
  off_t weHave ;
  chunk *c ;

  {
  {
# 1803 "mod_fastcgi.c"
  p = hctx->plugin_data;
# 1804 "mod_fastcgi.c"
  host = hctx->host;
# 1806 "mod_fastcgi.c"
  con = hctx->remote_conn;
# 1807 "mod_fastcgi.c"
  srv_sock = (server_socket *)con->srv_socket;
# 1814 "mod_fastcgi.c"
  fcgi_header(& beginRecord.header, (unsigned char)1, request_id, (int )sizeof(beginRecord.body),
              (unsigned char)0);
# 1815 "mod_fastcgi.c"
  beginRecord.body.roleB0 = (unsigned char )host->mode;
# 1816 "mod_fastcgi.c"
  beginRecord.body.roleB1 = (unsigned char)0;
# 1817 "mod_fastcgi.c"
  beginRecord.body.flags = (unsigned char)0;
# 1818 "mod_fastcgi.c"
  memset((void *)(beginRecord.body.reserved), 0, sizeof(beginRecord.body.reserved));
# 1820 "mod_fastcgi.c"
  b = chunkqueue_get_append_buffer(hctx->wb);
# 1822 "mod_fastcgi.c"
  buffer_copy_memory(b, (char const *)(& beginRecord), sizeof(beginRecord));
# 1825 "mod_fastcgi.c"
  buffer_prepare_copy(p->fcgi_env, 1024U);
# 1828 "mod_fastcgi.c"
  fcgi_env_add(p->fcgi_env, "SERVER_SOFTWARE", sizeof("SERVER_SOFTWARE") - 1U, "lighttpd/1.4.17",
               sizeof("lighttpd/1.4.17") - 1U);
  }
# 1832 "mod_fastcgi.c"
  if ((con->server_name)->used) {
# 1833 "mod_fastcgi.c"
    if ((con->server_name)->used) {
# 1833 "mod_fastcgi.c"
      tmp = (con->server_name)->used - 1U;
    } else {
# 1833 "mod_fastcgi.c"
      tmp = 0U;
    }
    {
# 1833 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "SERVER_NAME", sizeof("SERVER_NAME") - 1U, (char const *)(con->server_name)->ptr,
                 tmp);
    }
  } else {
# 1836 "mod_fastcgi.c"
    if ((int )srv_sock->addr.plain.sa_family == 10) {
# 1836 "mod_fastcgi.c"
      tmp___0 = (void const *)(& srv_sock->addr.ipv6.sin6_addr);
    } else {
# 1836 "mod_fastcgi.c"
      tmp___0 = (void const *)(& srv_sock->addr.ipv4.sin_addr);
    }
    {
# 1836 "mod_fastcgi.c"
    s = inet_ntop((int )srv_sock->addr.plain.sa_family, (void const * )tmp___0,
                  (char * )(b2), sizeof(b2) - 1U);
# 1844 "mod_fastcgi.c"
    tmp___1 = strlen(s);
# 1844 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "SERVER_NAME", sizeof("SERVER_NAME") - 1U, s, tmp___1);
    }
  }
  {
# 1847 "mod_fastcgi.c"
  fcgi_env_add(p->fcgi_env, "GATEWAY_INTERFACE", sizeof("GATEWAY_INTERFACE") - 1U,
               "CGI/1.1", sizeof("CGI/1.1") - 1U);
  }
# 1851 "mod_fastcgi.c"
  if (srv_sock->addr.plain.sa_family) {
# 1851 "mod_fastcgi.c"
    tmp___2 = (int )srv_sock->addr.ipv6.sin6_port;
  } else {
# 1851 "mod_fastcgi.c"
    tmp___2 = (int )srv_sock->addr.ipv4.sin_port;
  }
  {
# 1851 "mod_fastcgi.c"
  __x = (unsigned short )tmp___2;
# 1851 "mod_fastcgi.c"
  __asm__ ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
# 1851 "mod_fastcgi.c"
  LI_ltostr(buf, (long )__v);
# 1857 "mod_fastcgi.c"
  tmp___3 = strlen((char const *)(buf));
# 1857 "mod_fastcgi.c"
  fcgi_env_add(p->fcgi_env, "SERVER_PORT", sizeof("SERVER_PORT") - 1U, (char const *)(buf),
               tmp___3);
# 1860 "mod_fastcgi.c"
  our_addr_len = sizeof(our_addr);
# 1862 "mod_fastcgi.c"
  tmp___4 = getsockname(con->fd, (struct sockaddr * )(& our_addr.plain),
                        (socklen_t * )(& our_addr_len));
  }
# 1862 "mod_fastcgi.c"
  if (-1 == tmp___4) {
    {
# 1863 "mod_fastcgi.c"
    s = inet_ntop_cache_get_ip(srv, & srv_sock->addr);
    }
  } else {
    {
# 1865 "mod_fastcgi.c"
    s = inet_ntop_cache_get_ip(srv, & our_addr);
    }
  }
  {
# 1867 "mod_fastcgi.c"
  tmp___5 = strlen(s);
# 1867 "mod_fastcgi.c"
  fcgi_env_add(p->fcgi_env, "SERVER_ADDR", sizeof("SERVER_ADDR") - 1U, s, tmp___5);
  }
# 1871 "mod_fastcgi.c"
  if (con->dst_addr.plain.sa_family) {
# 1871 "mod_fastcgi.c"
    tmp___6 = (int )con->dst_addr.ipv6.sin6_port;
  } else {
# 1871 "mod_fastcgi.c"
    tmp___6 = (int )con->dst_addr.ipv4.sin_port;
  }
  {
# 1871 "mod_fastcgi.c"
  __x___0 = (unsigned short )tmp___6;
# 1871 "mod_fastcgi.c"
  __asm__ ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
# 1871 "mod_fastcgi.c"
  LI_ltostr(buf, (long )__v___0);
# 1877 "mod_fastcgi.c"
  tmp___7 = strlen((char const *)(buf));
# 1877 "mod_fastcgi.c"
  fcgi_env_add(p->fcgi_env, "REMOTE_PORT", sizeof("REMOTE_PORT") - 1U, (char const *)(buf),
               tmp___7);
# 1879 "mod_fastcgi.c"
  s = inet_ntop_cache_get_ip(srv, & con->dst_addr);
# 1880 "mod_fastcgi.c"
  tmp___8 = strlen(s);
# 1880 "mod_fastcgi.c"
  fcgi_env_add(p->fcgi_env, "REMOTE_ADDR", sizeof("REMOTE_ADDR") - 1U, s, tmp___8);
# 1882 "mod_fastcgi.c"
  tmp___65 = buffer_is_empty(con->authed_user);
  }
# 1882 "mod_fastcgi.c"
  if (! tmp___65) {
# 1893 "mod_fastcgi.c"
    http_authorization = (char *)((void *)0);
# 1896 "mod_fastcgi.c"
    if ((con->authed_user)->used) {
# 1896 "mod_fastcgi.c"
      tmp___9 = (con->authed_user)->used - 1U;
    } else {
# 1896 "mod_fastcgi.c"
      tmp___9 = 0U;
    }
    {
# 1896 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "REMOTE_USER", sizeof("REMOTE_USER") - 1U, (char const *)(con->authed_user)->ptr,
                 tmp___9);
# 1898 "mod_fastcgi.c"
    tmp___10 = array_get_element(con->request.headers, "Authorization");
# 1898 "mod_fastcgi.c"
    ds = (data_string *)tmp___10;
    }
# 1898 "mod_fastcgi.c"
    if ((unsigned int )((void *)0) != (unsigned int )ds) {
# 1899 "mod_fastcgi.c"
      http_authorization = (ds->value)->ptr;
    }
# 1902 "mod_fastcgi.c"
    if (ds) {
# 1902 "mod_fastcgi.c"
      if (ds->value) {
# 1902 "mod_fastcgi.c"
        if ((ds->value)->used) {
          {
# 1904 "mod_fastcgi.c"
          tmp___64 = __builtin_strchr(http_authorization, ' ');
# 1904 "mod_fastcgi.c"
          auth_realm = tmp___64;
          }
# 1904 "mod_fastcgi.c"
          if ((unsigned int )((void *)0) != (unsigned int )auth_realm) {
# 1905 "mod_fastcgi.c"
            auth_type_len = auth_realm - http_authorization;
# 1906 "mod_fastcgi.c"
            if (auth_type_len == 5) {
# 1906 "mod_fastcgi.c"
              if (0) {
# 1906 "mod_fastcgi.c"
                if (0) {
                  {
# 1906 "mod_fastcgi.c"
                  __s1_len___2 = strlen((char const *)http_authorization);
# 1906 "mod_fastcgi.c"
                  __s2_len___2 = strlen("Basic");
                  }
# 1906 "mod_fastcgi.c"
                  if (! ((unsigned int )((void const *)(http_authorization + 1)) - (unsigned int )((void const *)http_authorization) == 1U)) {
                    goto _L___6;
                  } else {
# 1906 "mod_fastcgi.c"
                    if (__s1_len___2 >= 4U) {
                      _L___6:
# 1906 "mod_fastcgi.c"
                      if (! ((unsigned int )((void const *)("Basic" + 1)) - (unsigned int )((void const *)"Basic") == 1U)) {
# 1906 "mod_fastcgi.c"
                        tmp___60 = 1;
                      } else {
# 1906 "mod_fastcgi.c"
                        if (__s2_len___2 >= 4U) {
# 1906 "mod_fastcgi.c"
                          tmp___60 = 1;
                        } else {
# 1906 "mod_fastcgi.c"
                          tmp___60 = 0;
                        }
                      }
                    } else {
# 1906 "mod_fastcgi.c"
                      tmp___60 = 0;
                    }
                  }
# 1906 "mod_fastcgi.c"
                  if (tmp___60) {
                    {
# 1906 "mod_fastcgi.c"
                    tmp___56 = __builtin_strcmp((char const *)http_authorization,
                                                "Basic");
                    }
                  } else {
                    {
# 1906 "mod_fastcgi.c"
                    tmp___59 = __builtin_strcmp((char const *)http_authorization,
                                                "Basic");
# 1906 "mod_fastcgi.c"
                    tmp___56 = tmp___59;
                    }
                  }
                } else {
                  {
# 1906 "mod_fastcgi.c"
                  tmp___59 = __builtin_strcmp((char const *)http_authorization,
                                              "Basic");
# 1906 "mod_fastcgi.c"
                  tmp___56 = tmp___59;
                  }
                }
# 1906 "mod_fastcgi.c"
                tmp___50 = tmp___56;
              } else {
                {
# 1906 "mod_fastcgi.c"
                tmp___50 = strncmp((char const *)http_authorization, "Basic", (unsigned int )auth_type_len);
                }
              }
# 1906 "mod_fastcgi.c"
              if (0 == tmp___50) {
                {
# 1907 "mod_fastcgi.c"
                fcgi_env_add(p->fcgi_env, "AUTH_TYPE", sizeof("AUTH_TYPE") - 1U, "Basic",
                             sizeof("Basic") - 1U);
                }
              } else {
                goto _L___7;
              }
            } else {
              _L___7:
# 1908 "mod_fastcgi.c"
              if (auth_type_len == 6) {
# 1908 "mod_fastcgi.c"
                if (0) {
# 1908 "mod_fastcgi.c"
                  if (0) {
                    {
# 1908 "mod_fastcgi.c"
                    __s1_len___0 = strlen((char const *)http_authorization);
# 1908 "mod_fastcgi.c"
                    __s2_len___0 = strlen("Digest");
                    }
# 1908 "mod_fastcgi.c"
                    if (! ((unsigned int )((void const *)(http_authorization + 1)) - (unsigned int )((void const *)http_authorization) == 1U)) {
                      goto _L___2;
                    } else {
# 1908 "mod_fastcgi.c"
                      if (__s1_len___0 >= 4U) {
                        _L___2:
# 1908 "mod_fastcgi.c"
                        if (! ((unsigned int )((void const *)("Digest" + 1)) - (unsigned int )((void const *)"Digest") == 1U)) {
# 1908 "mod_fastcgi.c"
                          tmp___34 = 1;
                        } else {
# 1908 "mod_fastcgi.c"
                          if (__s2_len___0 >= 4U) {
# 1908 "mod_fastcgi.c"
                            tmp___34 = 1;
                          } else {
# 1908 "mod_fastcgi.c"
                            tmp___34 = 0;
                          }
                        }
                      } else {
# 1908 "mod_fastcgi.c"
                        tmp___34 = 0;
                      }
                    }
# 1908 "mod_fastcgi.c"
                    if (tmp___34) {
                      {
# 1908 "mod_fastcgi.c"
                      tmp___30 = __builtin_strcmp((char const *)http_authorization,
                                                  "Digest");
                      }
                    } else {
                      {
# 1908 "mod_fastcgi.c"
                      tmp___33 = __builtin_strcmp((char const *)http_authorization,
                                                  "Digest");
# 1908 "mod_fastcgi.c"
                      tmp___30 = tmp___33;
                      }
                    }
                  } else {
                    {
# 1908 "mod_fastcgi.c"
                    tmp___33 = __builtin_strcmp((char const *)http_authorization,
                                                "Digest");
# 1908 "mod_fastcgi.c"
                    tmp___30 = tmp___33;
                    }
                  }
# 1908 "mod_fastcgi.c"
                  tmp___24 = tmp___30;
                } else {
                  {
# 1908 "mod_fastcgi.c"
                  tmp___24 = strncmp((char const *)http_authorization, "Digest",
                                     (unsigned int )auth_type_len);
                  }
                }
# 1908 "mod_fastcgi.c"
                if (0 == tmp___24) {
                  {
# 1909 "mod_fastcgi.c"
                  fcgi_env_add(p->fcgi_env, "AUTH_TYPE", sizeof("AUTH_TYPE") - 1U,
                               "Digest", sizeof("Digest") - 1U);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
# 1915 "mod_fastcgi.c"
  if (con->request.content_length > 0U) {
# 1915 "mod_fastcgi.c"
    if ((int )host->mode != 2) {
      {
# 1919 "mod_fastcgi.c"
      LI_ltostr(buf, (long )con->request.content_length);
# 1920 "mod_fastcgi.c"
      tmp___66 = strlen((char const *)(buf));
# 1920 "mod_fastcgi.c"
      fcgi_env_add(p->fcgi_env, "CONTENT_LENGTH", sizeof("CONTENT_LENGTH") - 1U, (char const *)(buf),
                   tmp___66);
      }
    }
  }
# 1923 "mod_fastcgi.c"
  if ((int )host->mode != 2) {
# 1931 "mod_fastcgi.c"
    if ((con->uri.path)->used) {
# 1931 "mod_fastcgi.c"
      tmp___67 = (con->uri.path)->used - 1U;
    } else {
# 1931 "mod_fastcgi.c"
      tmp___67 = 0U;
    }
    {
# 1931 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "SCRIPT_NAME", sizeof("SCRIPT_NAME") - 1U, (char const *)(con->uri.path)->ptr,
                 tmp___67);
# 1933 "mod_fastcgi.c"
    tmp___71 = buffer_is_empty(con->request.pathinfo);
    }
# 1933 "mod_fastcgi.c"
    if (tmp___71) {
      {
# 1946 "mod_fastcgi.c"
      fcgi_env_add(p->fcgi_env, "PATH_INFO", sizeof("PATH_INFO") - 1U, "", sizeof("") - 1U);
      }
    } else {
# 1934 "mod_fastcgi.c"
      if ((con->request.pathinfo)->used) {
# 1934 "mod_fastcgi.c"
        tmp___68 = (con->request.pathinfo)->used - 1U;
      } else {
# 1934 "mod_fastcgi.c"
        tmp___68 = 0U;
      }
      {
# 1934 "mod_fastcgi.c"
      fcgi_env_add(p->fcgi_env, "PATH_INFO", sizeof("PATH_INFO") - 1U, (char const *)(con->request.pathinfo)->ptr,
                   tmp___68);
# 1938 "mod_fastcgi.c"
      tmp___69 = buffer_is_empty(host->docroot);
      }
# 1938 "mod_fastcgi.c"
      if (tmp___69) {
        {
# 1941 "mod_fastcgi.c"
        buffer_copy_string_buffer(p->path, (buffer const *)con->physical.doc_root);
        }
      } else {
        {
# 1939 "mod_fastcgi.c"
        buffer_copy_string_buffer(p->path, (buffer const *)host->docroot);
        }
      }
      {
# 1943 "mod_fastcgi.c"
      buffer_append_string_buffer(p->path, (buffer const *)con->request.pathinfo);
      }
# 1944 "mod_fastcgi.c"
      if ((p->path)->used) {
# 1944 "mod_fastcgi.c"
        tmp___70 = (p->path)->used - 1U;
      } else {
# 1944 "mod_fastcgi.c"
        tmp___70 = 0U;
      }
      {
# 1944 "mod_fastcgi.c"
      fcgi_env_add(p->fcgi_env, "PATH_TRANSLATED", sizeof("PATH_TRANSLATED") - 1U,
                   (char const *)(p->path)->ptr, tmp___70);
      }
    }
  }
  {
# 1958 "mod_fastcgi.c"
  tmp___76 = buffer_is_empty(host->docroot);
  }
# 1958 "mod_fastcgi.c"
  if (tmp___76) {
    {
# 1970 "mod_fastcgi.c"
    buffer_copy_string_buffer(p->path, (buffer const *)con->physical.path);
    }
# 1976 "mod_fastcgi.c"
    if (host->break_scriptfilename_for_php) {
      {
# 1977 "mod_fastcgi.c"
      buffer_append_string_buffer(p->path, (buffer const *)con->request.pathinfo);
      }
    }
# 1980 "mod_fastcgi.c"
    if ((p->path)->used) {
# 1980 "mod_fastcgi.c"
      tmp___74 = (p->path)->used - 1U;
    } else {
# 1980 "mod_fastcgi.c"
      tmp___74 = 0U;
    }
    {
# 1980 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "SCRIPT_FILENAME", sizeof("SCRIPT_FILENAME") - 1U, (char const *)(p->path)->ptr,
                 tmp___74);
    }
# 1981 "mod_fastcgi.c"
    if ((con->physical.doc_root)->used) {
# 1981 "mod_fastcgi.c"
      tmp___75 = (con->physical.doc_root)->used - 1U;
    } else {
# 1981 "mod_fastcgi.c"
      tmp___75 = 0U;
    }
    {
# 1981 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "DOCUMENT_ROOT", sizeof("DOCUMENT_ROOT") - 1U, (char const *)(con->physical.doc_root)->ptr,
                 tmp___75);
    }
  } else {
    {
# 1964 "mod_fastcgi.c"
    buffer_copy_string_buffer(p->path, (buffer const *)host->docroot);
# 1965 "mod_fastcgi.c"
    buffer_append_string_buffer(p->path, (buffer const *)con->uri.path);
    }
# 1967 "mod_fastcgi.c"
    if ((p->path)->used) {
# 1967 "mod_fastcgi.c"
      tmp___72 = (p->path)->used - 1U;
    } else {
# 1967 "mod_fastcgi.c"
      tmp___72 = 0U;
    }
    {
# 1967 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "SCRIPT_FILENAME", sizeof("SCRIPT_FILENAME") - 1U, (char const *)(p->path)->ptr,
                 tmp___72);
    }
# 1968 "mod_fastcgi.c"
    if ((host->docroot)->used) {
# 1968 "mod_fastcgi.c"
      tmp___73 = (host->docroot)->used - 1U;
    } else {
# 1968 "mod_fastcgi.c"
      tmp___73 = 0U;
    }
    {
# 1968 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "DOCUMENT_ROOT", sizeof("DOCUMENT_ROOT") - 1U, (char const *)(host->docroot)->ptr,
                 tmp___73);
    }
  }
# 1984 "mod_fastcgi.c"
  if ((host->strip_request_uri)->used > 1U) {
# 1994 "mod_fastcgi.c"
    if (47 != (int )*((host->strip_request_uri)->ptr + ((host->strip_request_uri)->used - 2U))) {
      {
# 1996 "mod_fastcgi.c"
      buffer_append_string(host->strip_request_uri, "/");
      }
    }
# 2000 "mod_fastcgi.c"
    if ((con->request.orig_uri)->used >= (host->strip_request_uri)->used) {
# 2000 "mod_fastcgi.c"
      if (0) {
# 2000 "mod_fastcgi.c"
        if (0) {
          {
# 2000 "mod_fastcgi.c"
          __s1_len___4 = strlen((char const *)(con->request.orig_uri)->ptr);
# 2000 "mod_fastcgi.c"
          __s2_len___4 = strlen((char const *)(host->strip_request_uri)->ptr);
          }
# 2000 "mod_fastcgi.c"
          if (! ((unsigned int )((void const *)((con->request.orig_uri)->ptr + 1)) - (unsigned int )((void const *)(con->request.orig_uri)->ptr) == 1U)) {
            goto _L___11;
          } else {
# 2000 "mod_fastcgi.c"
            if (__s1_len___4 >= 4U) {
              _L___11:
# 2000 "mod_fastcgi.c"
              if (! ((unsigned int )((void const *)((host->strip_request_uri)->ptr + 1)) - (unsigned int )((void const *)(host->strip_request_uri)->ptr) == 1U)) {
# 2000 "mod_fastcgi.c"
                tmp___101 = 1;
              } else {
# 2000 "mod_fastcgi.c"
                if (__s2_len___4 >= 4U) {
# 2000 "mod_fastcgi.c"
                  tmp___101 = 1;
                } else {
# 2000 "mod_fastcgi.c"
                  tmp___101 = 0;
                }
              }
            } else {
# 2000 "mod_fastcgi.c"
              tmp___101 = 0;
            }
          }
# 2000 "mod_fastcgi.c"
          if (tmp___101) {
            {
# 2000 "mod_fastcgi.c"
            tmp___97 = __builtin_strcmp((char const *)(con->request.orig_uri)->ptr,
                                        (char const *)(host->strip_request_uri)->ptr);
            }
          } else {
            {
# 2000 "mod_fastcgi.c"
            tmp___100 = __builtin_strcmp((char const *)(con->request.orig_uri)->ptr,
                                         (char const *)(host->strip_request_uri)->ptr);
# 2000 "mod_fastcgi.c"
            tmp___97 = tmp___100;
            }
          }
        } else {
          {
# 2000 "mod_fastcgi.c"
          tmp___100 = __builtin_strcmp((char const *)(con->request.orig_uri)->ptr,
                                       (char const *)(host->strip_request_uri)->ptr);
# 2000 "mod_fastcgi.c"
          tmp___97 = tmp___100;
          }
        }
# 2000 "mod_fastcgi.c"
        tmp___91 = tmp___97;
      } else {
        {
# 2000 "mod_fastcgi.c"
        tmp___91 = strncmp((char const *)(con->request.orig_uri)->ptr, (char const *)(host->strip_request_uri)->ptr,
                           (host->strip_request_uri)->used - 1U);
        }
      }
# 2000 "mod_fastcgi.c"
      if (0 == tmp___91) {
        {
# 2003 "mod_fastcgi.c"
        fcgi_env_add(p->fcgi_env, "REQUEST_URI", sizeof("REQUEST_URI") - 1U, (char const *)((con->request.orig_uri)->ptr + ((host->strip_request_uri)->used - 2U)),
                     (con->request.orig_uri)->used - ((host->strip_request_uri)->used - 2U));
        }
      } else {
        goto _L___12;
      }
    } else {
      _L___12:
# 2007 "mod_fastcgi.c"
      if ((con->request.orig_uri)->used) {
# 2007 "mod_fastcgi.c"
        tmp___77 = (con->request.orig_uri)->used - 1U;
      } else {
# 2007 "mod_fastcgi.c"
        tmp___77 = 0U;
      }
      {
# 2007 "mod_fastcgi.c"
      fcgi_env_add(p->fcgi_env, "REQUEST_URI", sizeof("REQUEST_URI") - 1U, (char const *)(con->request.orig_uri)->ptr,
                   tmp___77);
      }
    }
  } else {
# 2010 "mod_fastcgi.c"
    if ((con->request.orig_uri)->used) {
# 2010 "mod_fastcgi.c"
      tmp___104 = (con->request.orig_uri)->used - 1U;
    } else {
# 2010 "mod_fastcgi.c"
      tmp___104 = 0U;
    }
    {
# 2010 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "REQUEST_URI", sizeof("REQUEST_URI") - 1U, (char const *)(con->request.orig_uri)->ptr,
                 tmp___104);
    }
  }
  {
# 2012 "mod_fastcgi.c"
  tmp___106 = buffer_is_equal(con->request.uri, con->request.orig_uri);
  }
# 2012 "mod_fastcgi.c"
  if (! tmp___106) {
# 2013 "mod_fastcgi.c"
    if ((con->request.uri)->used) {
# 2013 "mod_fastcgi.c"
      tmp___105 = (con->request.uri)->used - 1U;
    } else {
# 2013 "mod_fastcgi.c"
      tmp___105 = 0U;
    }
    {
# 2013 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "REDIRECT_URI", sizeof("REDIRECT_URI") - 1U, (char const *)(con->request.uri)->ptr,
                 tmp___105);
    }
  }
  {
# 2015 "mod_fastcgi.c"
  tmp___108 = buffer_is_empty(con->uri.query);
  }
# 2015 "mod_fastcgi.c"
  if (tmp___108) {
    {
# 2018 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "QUERY_STRING", sizeof("QUERY_STRING") - 1U, "", sizeof("") - 1U);
    }
  } else {
# 2016 "mod_fastcgi.c"
    if ((con->uri.query)->used) {
# 2016 "mod_fastcgi.c"
      tmp___107 = (con->uri.query)->used - 1U;
    } else {
# 2016 "mod_fastcgi.c"
      tmp___107 = 0U;
    }
    {
# 2016 "mod_fastcgi.c"
    fcgi_env_add(p->fcgi_env, "QUERY_STRING", sizeof("QUERY_STRING") - 1U, (char const *)(con->uri.query)->ptr,
                 tmp___107);
    }
  }
  {
# 2021 "mod_fastcgi.c"
  s = get_http_method_name(con->request.http_method);
# 2022 "mod_fastcgi.c"
  tmp___109 = strlen(s);
# 2022 "mod_fastcgi.c"
  fcgi_env_add(p->fcgi_env, "REQUEST_METHOD", sizeof("REQUEST_METHOD") - 1U, s, tmp___109);
# 2023 "mod_fastcgi.c"
  fcgi_env_add(p->fcgi_env, "REDIRECT_STATUS", sizeof("REDIRECT_STATUS") - 1U, "200",
               sizeof("200") - 1U);
# 2024 "mod_fastcgi.c"
  s = get_http_version_name((int )con->request.http_version);
# 2025 "mod_fastcgi.c"
  tmp___110 = strlen(s);
# 2025 "mod_fastcgi.c"
  fcgi_env_add(p->fcgi_env, "SERVER_PROTOCOL", sizeof("SERVER_PROTOCOL") - 1U, s,
               tmp___110);
# 2034 "mod_fastcgi.c"
  fcgi_env_add_request_headers(srv, con, p);
# 2036 "mod_fastcgi.c"
  fcgi_header(& header, (unsigned char)4, request_id, (int )(p->fcgi_env)->used, (unsigned char)0);
# 2037 "mod_fastcgi.c"
  buffer_append_memory(b, (char const *)(& header), sizeof(header));
# 2038 "mod_fastcgi.c"
  buffer_append_memory(b, (char const *)(p->fcgi_env)->ptr, (p->fcgi_env)->used);
# 2040 "mod_fastcgi.c"
  fcgi_header(& header, (unsigned char)4, request_id, 0, (unsigned char)0);
# 2041 "mod_fastcgi.c"
  buffer_append_memory(b, (char const *)(& header), sizeof(header));
# 2043 "mod_fastcgi.c"
  (b->used) ++;
# 2044 "mod_fastcgi.c"
  (hctx->wb)->bytes_in += (off_t )(b->used - 1U);
  }
# 2046 "mod_fastcgi.c"
  if (con->request.content_length) {
# 2047 "mod_fastcgi.c"
    req_cq = con->request_content_queue;
# 2052 "mod_fastcgi.c"
    offset = 0LL;
# 2052 "mod_fastcgi.c"
    req_c = req_cq->first;
# 2052 "mod_fastcgi.c"
    while (offset != req_cq->bytes_in) {
# 2053 "mod_fastcgi.c"
      if (req_cq->bytes_in - offset > 65535LL) {
# 2053 "mod_fastcgi.c"
        tmp___111 = 65535LL;
      } else {
# 2053 "mod_fastcgi.c"
        tmp___111 = req_cq->bytes_in - offset;
      }
      {
# 2053 "mod_fastcgi.c"
      weWant = tmp___111;
# 2054 "mod_fastcgi.c"
      written = (off_t )0;
# 2055 "mod_fastcgi.c"
      weHave = (off_t )0;
# 2061 "mod_fastcgi.c"
      b = chunkqueue_get_append_buffer(hctx->wb);
# 2062 "mod_fastcgi.c"
      fcgi_header(& header, (unsigned char)5, request_id, (int )weWant, (unsigned char)0);
# 2063 "mod_fastcgi.c"
      buffer_copy_memory(b, (char const *)(& header), sizeof(header));
# 2064 "mod_fastcgi.c"
      (hctx->wb)->bytes_in += (off_t )sizeof(header);
      }
# 2066 "mod_fastcgi.c"
      if (p->conf.debug > 10) {
        {
# 2067 "mod_fastcgi.c"
        fprintf((FILE * )stderr, (char const * )"%s.%d: tosend: %lld / %lld\n",
                "mod_fastcgi.c", 2067, offset, req_cq->bytes_in);
        }
      }
# 2070 "mod_fastcgi.c"
      written = 0LL;
# 2070 "mod_fastcgi.c"
      while (written != weWant) {
# 2071 "mod_fastcgi.c"
        if (p->conf.debug > 10) {
          {
# 2072 "mod_fastcgi.c"
          fprintf((FILE * )stderr, (char const * )"%s.%d: chunk: %lld / %lld\n",
                  "mod_fastcgi.c", 2072, written, weWant);
          }
        }
# 2075 "mod_fastcgi.c"
        switch ((int )req_c->type) {
        case 2:
# 2077 "mod_fastcgi.c"
        weHave = req_c->file.length - req_c->offset;
# 2079 "mod_fastcgi.c"
        if (weHave > weWant - written) {
# 2079 "mod_fastcgi.c"
          weHave = weWant - written;
        }
# 2081 "mod_fastcgi.c"
        if (p->conf.debug > 10) {
          {
# 2082 "mod_fastcgi.c"
          fprintf((FILE * )stderr, (char const * )"%s.%d: sending %lld bytes from (%lld / %lld) %s\n",
                  "mod_fastcgi.c", 2083, weHave, req_c->offset, req_c->file.length,
                  (req_c->file.name)->ptr);
          }
        }
# 2090 "mod_fastcgi.c"
        if (! (weHave != 0LL)) {
          {
# 2090 "mod_fastcgi.c"
          __assert_fail("weHave != 0", "mod_fastcgi.c", 2090U, "fcgi_create_env");
          }
        }
        {
# 2092 "mod_fastcgi.c"
        chunkqueue_append_file(hctx->wb, req_c->file.name, req_c->offset, weHave);
# 2094 "mod_fastcgi.c"
        req_c->offset += weHave;
# 2095 "mod_fastcgi.c"
        req_cq->bytes_out += weHave;
# 2096 "mod_fastcgi.c"
        written += weHave;
# 2098 "mod_fastcgi.c"
        (hctx->wb)->bytes_in += weHave;
        }
# 2112 "mod_fastcgi.c"
        if (req_c->offset == req_c->file.length) {
# 2115 "mod_fastcgi.c"
          if (p->conf.debug > 10) {
            {
# 2116 "mod_fastcgi.c"
            fprintf((FILE * )stderr, (char const * )"%s.%d: next chunk\n",
                    "mod_fastcgi.c", 2116);
            }
          }
# 2118 "mod_fastcgi.c"
          c = (hctx->wb)->last;
# 2120 "mod_fastcgi.c"
          if (! ((int )c->type == 2)) {
            {
# 2120 "mod_fastcgi.c"
            __assert_fail("c->type == FILE_CHUNK", "mod_fastcgi.c", 2120U, "fcgi_create_env");
            }
          }
# 2121 "mod_fastcgi.c"
          if (! (req_c->file.is_temp == 1)) {
            {
# 2121 "mod_fastcgi.c"
            __assert_fail("req_c->file.is_temp == 1", "mod_fastcgi.c", 2121U, "fcgi_create_env");
            }
          }
          {
# 2123 "mod_fastcgi.c"
          c->file.is_temp = 1;
# 2124 "mod_fastcgi.c"
          req_c->file.is_temp = 0;
# 2126 "mod_fastcgi.c"
          chunkqueue_remove_finished_chunks(req_cq);
# 2128 "mod_fastcgi.c"
          req_c = req_cq->first;
          }
        }
# 2131 "mod_fastcgi.c"
        break;
        case 1:
# 2134 "mod_fastcgi.c"
        weHave = (off_t )((req_c->mem)->used - 1U) - req_c->offset;
# 2136 "mod_fastcgi.c"
        if (weHave > weWant - written) {
# 2136 "mod_fastcgi.c"
          weHave = weWant - written;
        }
        {
# 2138 "mod_fastcgi.c"
        buffer_append_memory(b, (char const *)((req_c->mem)->ptr + req_c->offset),
                             (unsigned int )weHave);
# 2140 "mod_fastcgi.c"
        req_c->offset += weHave;
# 2141 "mod_fastcgi.c"
        req_cq->bytes_out += weHave;
# 2142 "mod_fastcgi.c"
        written += weHave;
# 2144 "mod_fastcgi.c"
        (hctx->wb)->bytes_in += weHave;
        }
# 2146 "mod_fastcgi.c"
        if (req_c->offset == (off_t )((req_c->mem)->used - 1U)) {
          {
# 2147 "mod_fastcgi.c"
          chunkqueue_remove_finished_chunks(req_cq);
# 2149 "mod_fastcgi.c"
          req_c = req_cq->first;
          }
        }
# 2152 "mod_fastcgi.c"
        break;
        default: ;
# 2154 "mod_fastcgi.c"
        break;
        }
      }
# 2158 "mod_fastcgi.c"
      (b->used) ++;
# 2159 "mod_fastcgi.c"
      offset += weWant;
    }
  }
  {
# 2163 "mod_fastcgi.c"
  b = chunkqueue_get_append_buffer(hctx->wb);
# 2165 "mod_fastcgi.c"
  fcgi_header(& header, (unsigned char)5, request_id, 0, (unsigned char)0);
# 2166 "mod_fastcgi.c"
  buffer_copy_memory(b, (char const *)(& header), sizeof(header));
# 2167 "mod_fastcgi.c"
  (b->used) ++;
# 2169 "mod_fastcgi.c"
  (hctx->wb)->bytes_in += (off_t )sizeof(header);
  }
# 2185 "mod_fastcgi.c"
  return (0);
}
}
# 2188 "mod_fastcgi.c"
static int fcgi_response_parse(server *srv , connection *con , plugin_data *p , buffer *in )
{ char *s ;
  char *ns ;
  handler_ctx *hctx ;
  fcgi_extension_host *host ;
  char *key ;
  char *value ;
  int key_len ;
  data_string *ds ;
  void *tmp ;
  char *tmp___0 ;
  data_unset *tmp___1 ;
  int tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;
  int tmp___5 ;
  int tmp___6 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  long tmp___10 ;
  int tmp___11 ;
  void *tmp___12 ;
  char *tmp___13 ;

  {
  {
# 2191 "mod_fastcgi.c"
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
# 2192 "mod_fastcgi.c"
  host = hctx->host;
# 2196 "mod_fastcgi.c"
  buffer_copy_string_buffer(p->parse_response, (buffer const *)in);
# 2199 "mod_fastcgi.c"
  s = (p->parse_response)->ptr;
  }
# 2199 "mod_fastcgi.c"
  while (1) {
    {
# 2199 "mod_fastcgi.c"
    tmp___13 = __builtin_strchr(s, '\n');
# 2199 "mod_fastcgi.c"
    ns = tmp___13;
    }
# 2199 "mod_fastcgi.c"
    if (! ((unsigned int )((void *)0) != (unsigned int )ns)) {
# 2199 "mod_fastcgi.c"
      break;
    }
# 2206 "mod_fastcgi.c"
    if ((unsigned int )ns > (unsigned int )(p->parse_response)->ptr) {
# 2206 "mod_fastcgi.c"
      if ((int )*(ns - 1) == 13) {
# 2208 "mod_fastcgi.c"
        *(ns - 1) = (char )'\000';
      }
    }
    {
# 2211 "mod_fastcgi.c"
    *(ns + 0) = (char )'\000';
# 2213 "mod_fastcgi.c"
    key = s;
# 2214 "mod_fastcgi.c"
    tmp___0 = __builtin_strchr(s, ':');
# 2214 "mod_fastcgi.c"
    value = tmp___0;
    }
# 2214 "mod_fastcgi.c"
    if ((unsigned int )((void *)0) == (unsigned int )value) {
      goto __Cont;
    }
# 2219 "mod_fastcgi.c"
    key_len = value - key;
# 2221 "mod_fastcgi.c"
    value ++;
# 2223 "mod_fastcgi.c"
    while (1) {
# 2223 "mod_fastcgi.c"
      if (! ((int )*value == 32)) {
# 2223 "mod_fastcgi.c"
        if (! ((int )*value == 9)) {
# 2223 "mod_fastcgi.c"
          break;
        }
      }
# 2223 "mod_fastcgi.c"
      value ++;
    }
# 2225 "mod_fastcgi.c"
    if ((int )host->mode != 2) {
      goto _L;
    } else {
# 2225 "mod_fastcgi.c"
      if (! (con->http_status == 0)) {
# 2225 "mod_fastcgi.c"
        if (! (con->http_status == 200)) {
          _L:
          {
# 2231 "mod_fastcgi.c"
          tmp___2 = strncasecmp((char const *)key, "Status", (unsigned int )key_len);
          }
# 2231 "mod_fastcgi.c"
          if (0 != tmp___2) {
            {
# 2232 "mod_fastcgi.c"
            tmp___1 = array_get_unused_element(con->response.headers, 1);
# 2232 "mod_fastcgi.c"
            ds = (data_string *)tmp___1;
            }
# 2232 "mod_fastcgi.c"
            if ((unsigned int )((void *)0) == (unsigned int )ds) {
              {
# 2233 "mod_fastcgi.c"
              ds = data_response_init();
              }
            }
            {
# 2235 "mod_fastcgi.c"
            buffer_copy_string_len(ds->key, (char const *)key, (unsigned int )key_len);
# 2236 "mod_fastcgi.c"
            buffer_copy_string(ds->value, (char const *)value);
# 2238 "mod_fastcgi.c"
            array_insert_unique(con->response.headers, (data_unset *)ds);
            }
          }
        }
      }
    }
# 2242 "mod_fastcgi.c"
    switch (key_len) {
    case 4:
    {
# 2244 "mod_fastcgi.c"
    tmp___3 = strncasecmp((char const *)key, "Date", (unsigned int )key_len);
    }
# 2244 "mod_fastcgi.c"
    if (0 == tmp___3) {
# 2245 "mod_fastcgi.c"
      con->parsed_response |= (unsigned int )(1 << 3);
    }
# 2247 "mod_fastcgi.c"
    break;
    case 6:
    {
# 2249 "mod_fastcgi.c"
    tmp___5 = strncasecmp((char const *)key, "Status", (unsigned int )key_len);
    }
# 2249 "mod_fastcgi.c"
    if (0 == tmp___5) {
      {
# 2250 "mod_fastcgi.c"
      tmp___4 = strtol((char const * )value, (char ** )((void *)0),
                       10);
# 2250 "mod_fastcgi.c"
      con->http_status = (int )tmp___4;
# 2251 "mod_fastcgi.c"
      con->parsed_response |= 1U;
      }
    }
# 2253 "mod_fastcgi.c"
    break;
    case 8:
    {
# 2255 "mod_fastcgi.c"
    tmp___6 = strncasecmp((char const *)key, "Location", (unsigned int )key_len);
    }
# 2255 "mod_fastcgi.c"
    if (0 == tmp___6) {
# 2256 "mod_fastcgi.c"
      con->parsed_response |= (unsigned int )(1 << 4);
    }
# 2258 "mod_fastcgi.c"
    break;
    case 10:
    {
# 2260 "mod_fastcgi.c"
    tmp___9 = strncasecmp((char const *)key, "Connection", (unsigned int )key_len);
    }
# 2260 "mod_fastcgi.c"
    if (0 == tmp___9) {
      {
# 2261 "mod_fastcgi.c"
      tmp___8 = strcasecmp((char const *)value, "Keep-Alive");
      }
# 2261 "mod_fastcgi.c"
      if (0 == tmp___8) {
# 2261 "mod_fastcgi.c"
        con->response.keep_alive = 1;
      } else {
# 2261 "mod_fastcgi.c"
        con->response.keep_alive = 0;
      }
# 2262 "mod_fastcgi.c"
      con->parsed_response |= (unsigned int )(1 << 1);
    }
# 2264 "mod_fastcgi.c"
    break;
    case 14:
    {
# 2266 "mod_fastcgi.c"
    tmp___11 = strncasecmp((char const *)key, "Content-Length", (unsigned int )key_len);
    }
# 2266 "mod_fastcgi.c"
    if (0 == tmp___11) {
      {
# 2267 "mod_fastcgi.c"
      tmp___10 = strtol((char const * )value, (char ** )((void *)0),
                        10);
# 2267 "mod_fastcgi.c"
      con->response.content_length = (long long )tmp___10;
# 2268 "mod_fastcgi.c"
      con->parsed_response |= (unsigned int )(1 << 2);
      }
# 2270 "mod_fastcgi.c"
      if (con->response.content_length < 0LL) {
# 2270 "mod_fastcgi.c"
        con->response.content_length = 0LL;
      }
    }
# 2272 "mod_fastcgi.c"
    break;
    default: ;
# 2274 "mod_fastcgi.c"
    break;
    }
    __Cont:
# 2199 "mod_fastcgi.c"
    s = ns + 1;
  }
# 2279 "mod_fastcgi.c"
  if (con->parsed_response & (unsigned int )(1 << 4)) {
# 2279 "mod_fastcgi.c"
    if (! (con->parsed_response & 1U)) {
# 2281 "mod_fastcgi.c"
      con->http_status = 302;
    }
  }
# 2284 "mod_fastcgi.c"
  return (0);
}
}
# 2295 "mod_fastcgi.c"
static int fastcgi_get_packet(server *srv , handler_ctx *hctx , fastcgi_response_packet *packet )
{ chunk *c ;
  size_t offset ;
  size_t toread ;
  FCGI_Header *header ;
  size_t weWant ;
  size_t weHave ;

  {
# 2297 "mod_fastcgi.c"
  offset = (size_t )0;
# 2298 "mod_fastcgi.c"
  toread = (size_t )0;
# 2301 "mod_fastcgi.c"
  if (! (hctx->rb)->first) {
# 2301 "mod_fastcgi.c"
    return (-1);
  }
  {
# 2303 "mod_fastcgi.c"
  packet->b = buffer_init();
# 2304 "mod_fastcgi.c"
  packet->len = 0U;
# 2305 "mod_fastcgi.c"
  packet->type = 0;
# 2306 "mod_fastcgi.c"
  packet->padding = 0;
# 2307 "mod_fastcgi.c"
  packet->request_id = 0U;
# 2310 "mod_fastcgi.c"
  c = (hctx->rb)->first;
  }
# 2310 "mod_fastcgi.c"
  while (c) {
# 2311 "mod_fastcgi.c"
    if ((packet->b)->used == 0U) {
      {
# 2312 "mod_fastcgi.c"
      buffer_copy_string_len(packet->b, (char const *)((c->mem)->ptr + c->offset),
                             (unsigned int )(((off_t )(c->mem)->used - c->offset) - 1LL));
      }
    } else {
      {
# 2314 "mod_fastcgi.c"
      buffer_append_string_len(packet->b, (char const *)((c->mem)->ptr + c->offset),
                               (unsigned int )(((off_t )(c->mem)->used - c->offset) - 1LL));
      }
    }
# 2317 "mod_fastcgi.c"
    if ((packet->b)->used >= sizeof(*header) + 1U) {
# 2317 "mod_fastcgi.c"
      break;
    }
# 2310 "mod_fastcgi.c"
    c = c->next;
  }
# 2320 "mod_fastcgi.c"
  if ((packet->b)->used == 0U) {
    {
# 2323 "mod_fastcgi.c"
    buffer_free(packet->b);
# 2325 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2325U, "s", "FastCGI: header too small");
    }
# 2326 "mod_fastcgi.c"
    return (-1);
  } else {
# 2320 "mod_fastcgi.c"
    if ((packet->b)->used - 1U < sizeof(FCGI_Header )) {
      {
# 2323 "mod_fastcgi.c"
      buffer_free(packet->b);
# 2325 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 2325U, "s", "FastCGI: header too small");
      }
# 2326 "mod_fastcgi.c"
      return (-1);
    }
  }
  {
# 2330 "mod_fastcgi.c"
  header = (FCGI_Header *)(packet->b)->ptr;
# 2332 "mod_fastcgi.c"
  packet->len = (unsigned int )(((int )header->contentLengthB0 | ((int )header->contentLengthB1 << 8)) + (int )header->paddingLength);
# 2333 "mod_fastcgi.c"
  packet->request_id = (unsigned int )((int )header->requestIdB0 | ((int )header->requestIdB1 << 8));
# 2334 "mod_fastcgi.c"
  packet->type = (int )header->type;
# 2335 "mod_fastcgi.c"
  packet->padding = (int )header->paddingLength;
# 2338 "mod_fastcgi.c"
  offset = sizeof(*header);
# 2341 "mod_fastcgi.c"
  buffer_copy_string(packet->b, "");
  }
# 2343 "mod_fastcgi.c"
  if (packet->len) {
# 2345 "mod_fastcgi.c"
    while (1) {
# 2345 "mod_fastcgi.c"
      if (c) {
# 2345 "mod_fastcgi.c"
        if (! ((packet->b)->used < packet->len + 1U)) {
# 2345 "mod_fastcgi.c"
          break;
        }
      } else {
# 2345 "mod_fastcgi.c"
        break;
      }
# 2346 "mod_fastcgi.c"
      weWant = packet->len - ((packet->b)->used - 1U);
# 2347 "mod_fastcgi.c"
      weHave = (size_t )((((off_t )(c->mem)->used - c->offset) - (off_t )offset) - 1LL);
# 2349 "mod_fastcgi.c"
      if (weHave > weWant) {
# 2349 "mod_fastcgi.c"
        weHave = weWant;
      }
      {
# 2351 "mod_fastcgi.c"
      buffer_append_string_len(packet->b, (char const *)(((c->mem)->ptr + c->offset) + offset),
                               weHave);
# 2354 "mod_fastcgi.c"
      offset = 0U;
# 2345 "mod_fastcgi.c"
      c = c->next;
      }
    }
# 2357 "mod_fastcgi.c"
    if ((packet->b)->used < packet->len + 1U) {
      {
# 2360 "mod_fastcgi.c"
      buffer_free(packet->b);
      }
# 2361 "mod_fastcgi.c"
      return (-1);
    }
# 2364 "mod_fastcgi.c"
    (packet->b)->used -= (size_t )packet->padding;
# 2365 "mod_fastcgi.c"
    *((packet->b)->ptr + ((packet->b)->used - 1U)) = (char )'\000';
  }
# 2369 "mod_fastcgi.c"
  toread = packet->len + sizeof(FCGI_Header );
# 2370 "mod_fastcgi.c"
  c = (hctx->rb)->first;
# 2370 "mod_fastcgi.c"
  while (1) {
# 2370 "mod_fastcgi.c"
    if (c) {
# 2370 "mod_fastcgi.c"
      if (! toread) {
# 2370 "mod_fastcgi.c"
        break;
      }
    } else {
# 2370 "mod_fastcgi.c"
      break;
    }
# 2371 "mod_fastcgi.c"
    if (((off_t )(c->mem)->used - c->offset) - 1LL <= (off_t )toread) {
# 2373 "mod_fastcgi.c"
      toread = (unsigned int )((off_t )toread - (((off_t )(c->mem)->used - c->offset) - 1LL));
# 2374 "mod_fastcgi.c"
      c->offset = (long long )((c->mem)->used - 1U);
    } else {
# 2376 "mod_fastcgi.c"
      c->offset += (off_t )toread;
# 2377 "mod_fastcgi.c"
      toread = 0U;
    }
# 2370 "mod_fastcgi.c"
    c = c->next;
  }
  {
# 2381 "mod_fastcgi.c"
  chunkqueue_remove_finished_chunks(hctx->rb);
  }
# 2383 "mod_fastcgi.c"
  return (0);
}
}
# 2386 "mod_fastcgi.c"
static int fcgi_demux_response(server *srv , handler_ctx *hctx )
{ int fin ;
  int toread ;
  ssize_t r ;
  plugin_data *p ;
  connection *con ;
  int fcgi_fd ;
  fcgi_extension_host *host ;
  fcgi_proc *proc ;
  int *tmp ;
  int tmp___0 ;
  buffer *b ;
  chunk *cq_first ;
  chunk *cq_last ;
  int *tmp___1 ;
  int *tmp___2 ;
  char *tmp___3 ;
  fastcgi_response_packet packet ;
  int tmp___4 ;
  char *c ;
  size_t blen ;
  data_string *ds ;
  stat_cache_entry *sce ;
  handler_t tmp___5 ;
  data_unset *tmp___6 ;

  {
  {
# 2387 "mod_fastcgi.c"
  fin = 0;
# 2391 "mod_fastcgi.c"
  p = hctx->plugin_data;
# 2392 "mod_fastcgi.c"
  con = hctx->remote_conn;
# 2393 "mod_fastcgi.c"
  fcgi_fd = hctx->fd;
# 2394 "mod_fastcgi.c"
  host = hctx->host;
# 2395 "mod_fastcgi.c"
  proc = hctx->proc;
# 2400 "mod_fastcgi.c"
  tmp___0 = ioctl(hctx->fd, 21531UL, & toread);
  }
# 2400 "mod_fastcgi.c"
  if (tmp___0) {
    {
# 2401 "mod_fastcgi.c"
    tmp = __errno_location();
    }
# 2401 "mod_fastcgi.c"
    if (*tmp == 11) {
# 2401 "mod_fastcgi.c"
      return (0);
    }
    {
# 2402 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2402U, "sd", "unexpected end-of-file (perhaps the fastcgi process died):",
                    fcgi_fd);
    }
# 2405 "mod_fastcgi.c"
    return (-1);
  }
# 2410 "mod_fastcgi.c"
  if (toread > 0) {
    {
# 2412 "mod_fastcgi.c"
    cq_first = (hctx->rb)->first;
# 2413 "mod_fastcgi.c"
    cq_last = (hctx->rb)->last;
# 2415 "mod_fastcgi.c"
    b = chunkqueue_get_append_buffer(hctx->rb);
# 2416 "mod_fastcgi.c"
    buffer_prepare_copy(b, (unsigned int )(toread + 1));
# 2419 "mod_fastcgi.c"
    r = read(hctx->fd, (void *)b->ptr, (unsigned int )toread);
    }
# 2419 "mod_fastcgi.c"
    if (-1 == r) {
      {
# 2420 "mod_fastcgi.c"
      tmp___1 = __errno_location();
      }
# 2420 "mod_fastcgi.c"
      if (*tmp___1 == 11) {
        {
# 2423 "mod_fastcgi.c"
        buffer_free(((hctx->rb)->last)->mem);
# 2424 "mod_fastcgi.c"
        free((void *)(hctx->rb)->last);
# 2425 "mod_fastcgi.c"
        (hctx->rb)->first = cq_first;
# 2426 "mod_fastcgi.c"
        (hctx->rb)->last = cq_last;
        }
# 2427 "mod_fastcgi.c"
        return (0);
      }
      {
# 2429 "mod_fastcgi.c"
      tmp___2 = __errno_location();
# 2429 "mod_fastcgi.c"
      tmp___3 = strerror(*tmp___2);
# 2429 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 2429U, "sds", "unexpected end-of-file (perhaps the fastcgi process died):",
                      fcgi_fd, tmp___3);
      }
# 2432 "mod_fastcgi.c"
      return (-1);
    }
# 2436 "mod_fastcgi.c"
    if (! r) {
      {
# 2436 "mod_fastcgi.c"
      __assert_fail("r", "mod_fastcgi.c", 2436U, "fcgi_demux_response");
      }
    }
# 2438 "mod_fastcgi.c"
    b->used = (unsigned int )(r + 1);
# 2439 "mod_fastcgi.c"
    *(b->ptr + (b->used - 1U)) = (char )'\000';
  } else {
    {
# 2441 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2441U, "ssdsb", "unexpected end-of-file (perhaps the fastcgi process died):",
                    "pid:", proc->pid, "socket:", proc->connection_name);
    }
# 2446 "mod_fastcgi.c"
    return (-1);
  }
# 2453 "mod_fastcgi.c"
  while (fin == 0) {
    {
# 2457 "mod_fastcgi.c"
    tmp___4 = fastcgi_get_packet(srv, hctx, & packet);
    }
# 2457 "mod_fastcgi.c"
    if (0 != tmp___4) {
# 2459 "mod_fastcgi.c"
      break;
    }
# 2462 "mod_fastcgi.c"
    switch (packet.type) {
    case 6:
# 2464 "mod_fastcgi.c"
    if (packet.len == 0U) {
# 2464 "mod_fastcgi.c"
      break;
    }
# 2467 "mod_fastcgi.c"
    if (0 == con->file_started) {
# 2480 "mod_fastcgi.c"
      if ((hctx->response_header)->used == 0U) {
        {
# 2481 "mod_fastcgi.c"
        buffer_copy_string_buffer(hctx->response_header, (buffer const *)packet.b);
        }
      } else {
        {
# 2483 "mod_fastcgi.c"
        buffer_append_string_buffer(hctx->response_header, (buffer const *)packet.b);
        }
      }
      {
# 2486 "mod_fastcgi.c"
      c = buffer_search_string_len(hctx->response_header, "\r\n\r\n", sizeof("\r\n\r\n") - 1U);
      }
# 2486 "mod_fastcgi.c"
      if ((unsigned int )((void *)0) != (unsigned int )c) {
# 2487 "mod_fastcgi.c"
        blen = ((hctx->response_header)->used - (size_t )(c - (hctx->response_header)->ptr)) - 4U;
# 2488 "mod_fastcgi.c"
        (hctx->response_header)->used = (unsigned int )((c - (hctx->response_header)->ptr) + 3);
# 2489 "mod_fastcgi.c"
        c += 4;
      } else {
        {
# 2490 "mod_fastcgi.c"
        c = buffer_search_string_len(hctx->response_header, "\n\n", sizeof("\n\n") - 1U);
        }
# 2490 "mod_fastcgi.c"
        if ((unsigned int )((void *)0) != (unsigned int )c) {
# 2491 "mod_fastcgi.c"
          blen = ((hctx->response_header)->used - (size_t )(c - (hctx->response_header)->ptr)) - 2U;
# 2492 "mod_fastcgi.c"
          (hctx->response_header)->used = (unsigned int )((c - (hctx->response_header)->ptr) + 2);
# 2493 "mod_fastcgi.c"
          c += 2;
        } else {
# 2496 "mod_fastcgi.c"
          break;
        }
      }
      {
# 2500 "mod_fastcgi.c"
      fcgi_response_parse(srv, con, p, hctx->response_header);
# 2502 "mod_fastcgi.c"
      con->file_started = 1;
      }
# 2504 "mod_fastcgi.c"
      if ((int )host->mode == 2) {
# 2504 "mod_fastcgi.c"
        if (con->http_status == 0) {
# 2508 "mod_fastcgi.c"
          hctx->send_content_body = 0;
        } else {
# 2504 "mod_fastcgi.c"
          if (con->http_status == 200) {
# 2508 "mod_fastcgi.c"
            hctx->send_content_body = 0;
          }
        }
      }
# 2511 "mod_fastcgi.c"
      if (host->allow_xsendfile) {
        {
# 2511 "mod_fastcgi.c"
        tmp___6 = array_get_element(con->response.headers, "X-LIGHTTPD-send-file");
# 2511 "mod_fastcgi.c"
        ds = (data_string *)tmp___6;
        }
# 2511 "mod_fastcgi.c"
        if ((unsigned int )((void *)0) != (unsigned int )ds) {
          {
# 2515 "mod_fastcgi.c"
          tmp___5 = stat_cache_get_entry(srv, con, ds->value, & sce);
          }
# 2515 "mod_fastcgi.c"
          if (5 != (int )tmp___5) {
            {
# 2518 "mod_fastcgi.c"
            http_chunk_append_file(srv, con, ds->value, 0LL, sce->st.st_size);
# 2519 "mod_fastcgi.c"
            hctx->send_content_body = 0;
# 2520 "mod_fastcgi.c"
            joblist_append(srv, con);
            }
          }
        }
      }
# 2525 "mod_fastcgi.c"
      if (hctx->send_content_body) {
# 2525 "mod_fastcgi.c"
        if (blen > 1U) {
# 2527 "mod_fastcgi.c"
          if ((int )con->request.http_version == 1) {
# 2527 "mod_fastcgi.c"
            if (! (con->parsed_response & (unsigned int )(1 << 2))) {
# 2529 "mod_fastcgi.c"
              con->response.transfer_encoding = 1;
            }
          }
          {
# 2532 "mod_fastcgi.c"
          http_chunk_append_mem(srv, con, (char const *)c, blen);
# 2533 "mod_fastcgi.c"
          joblist_append(srv, con);
          }
        }
      }
    } else {
# 2535 "mod_fastcgi.c"
      if (hctx->send_content_body) {
# 2535 "mod_fastcgi.c"
        if ((packet.b)->used > 1U) {
# 2536 "mod_fastcgi.c"
          if ((int )con->request.http_version == 1) {
# 2536 "mod_fastcgi.c"
            if (! (con->parsed_response & (unsigned int )(1 << 2))) {
# 2539 "mod_fastcgi.c"
              con->response.transfer_encoding = 1;
            }
          }
          {
# 2542 "mod_fastcgi.c"
          http_chunk_append_mem(srv, con, (char const *)(packet.b)->ptr, (packet.b)->used);
# 2543 "mod_fastcgi.c"
          joblist_append(srv, con);
          }
        }
      }
    }
# 2545 "mod_fastcgi.c"
    break;
    case 7:
# 2547 "mod_fastcgi.c"
    if (packet.len == 0U) {
# 2547 "mod_fastcgi.c"
      break;
    }
    {
# 2549 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2549U, "sb", "FastCGI-stderr:", packet.b);
    }
# 2552 "mod_fastcgi.c"
    break;
    case 3:
# 2554 "mod_fastcgi.c"
    con->file_finished = 1;
# 2556 "mod_fastcgi.c"
    if ((int )host->mode != 2) {
      {
# 2560 "mod_fastcgi.c"
      http_chunk_append_mem(srv, con, (char const *)((void *)0), 0U);
# 2561 "mod_fastcgi.c"
      joblist_append(srv, con);
      }
    } else {
# 2556 "mod_fastcgi.c"
      if (! (con->http_status == 0)) {
# 2556 "mod_fastcgi.c"
        if (! (con->http_status == 200)) {
          {
# 2560 "mod_fastcgi.c"
          http_chunk_append_mem(srv, con, (char const *)((void *)0), 0U);
# 2561 "mod_fastcgi.c"
          joblist_append(srv, con);
          }
        }
      }
    }
# 2564 "mod_fastcgi.c"
    fin = 1;
# 2565 "mod_fastcgi.c"
    break;
    default:
    {
# 2567 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2567U, "sd", "FastCGI: header.type not handled: ",
                    packet.type);
    }
# 2569 "mod_fastcgi.c"
    break;
    }
    {
# 2571 "mod_fastcgi.c"
    buffer_free(packet.b);
    }
  }
# 2574 "mod_fastcgi.c"
  return (fin);
}
}
# 2577 "mod_fastcgi.c"
static int fcgi_restart_dead_procs(server *srv , plugin_data *p , fcgi_extension_host *host )
{ fcgi_proc *proc ;
  int status ;
  __pid_t tmp ;
  union __anonunion_156 __constr_expr_0 ;
  union __anonunion_157 __constr_expr_1 ;
  union __anonunion_158 __constr_expr_2 ;
  int tmp___0 ;

  {
# 2580 "mod_fastcgi.c"
  proc = host->first;
# 2580 "mod_fastcgi.c"
  while (proc) {
# 2583 "mod_fastcgi.c"
    if (p->conf.debug > 2) {
      {
# 2584 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 2584U, "sbdddd", "proc:", proc->connection_name,
                      proc->state, proc->is_local, proc->load, proc->pid);
      }
    }
# 2597 "mod_fastcgi.c"
    switch ((int )proc->state) {
    case 5:
    case 0:
    {
# 2601 "mod_fastcgi.c"
    __assert_fail("0", "mod_fastcgi.c", 2601U, "fcgi_restart_dead_procs");
    }
# 2603 "mod_fastcgi.c"
    break;
    case 1:
# 2605 "mod_fastcgi.c"
    break;
    case 2:
# 2607 "mod_fastcgi.c"
    if (srv->cur_ts <= proc->disabled_until) {
# 2607 "mod_fastcgi.c"
      break;
    }
    {
# 2609 "mod_fastcgi.c"
    proc->state = 1;
# 2610 "mod_fastcgi.c"
    (host->active_procs) ++;
# 2612 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2612U, "sbdb", "fcgi-server re-enabled:",
                    host->host, host->port, host->unixsocket);
    }
# 2616 "mod_fastcgi.c"
    break;
    case 3:
# 2619 "mod_fastcgi.c"
    if (! proc->is_local) {
# 2619 "mod_fastcgi.c"
      break;
    }
    {
# 2623 "mod_fastcgi.c"
    tmp = waitpid(proc->pid, & status, 1);
    }
# 2623 "mod_fastcgi.c"
    switch (tmp) {
    case 0:
# 2626 "mod_fastcgi.c"
    break;
    case -1:
# 2628 "mod_fastcgi.c"
    break;
    default:
# 2630 "mod_fastcgi.c"
    __constr_expr_2.__in = status;
# 2630 "mod_fastcgi.c"
    if (! ((__constr_expr_2.__i & 127) == 0)) {
# 2636 "mod_fastcgi.c"
      __constr_expr_1.__in = status;
# 2636 "mod_fastcgi.c"
      if ((int )((signed char )((__constr_expr_1.__i & 127) + 1)) >> 1 > 0) {
        {
# 2637 "mod_fastcgi.c"
        __constr_expr_0.__in = status;
# 2637 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 2637U, "sd", "child signaled:", __constr_expr_0.__i & 127);
        }
      } else {
        {
# 2641 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 2641U, "sd", "child died somehow:",
                        status);
        }
      }
    }
# 2646 "mod_fastcgi.c"
    proc->state = 4;
# 2647 "mod_fastcgi.c"
    break;
    }
# 2651 "mod_fastcgi.c"
    if ((int )proc->state != 4) {
# 2651 "mod_fastcgi.c"
      break;
    }
    case 4:
# 2657 "mod_fastcgi.c"
    if (proc->is_local) {
# 2660 "mod_fastcgi.c"
      if (proc->load != 0U) {
# 2660 "mod_fastcgi.c"
        break;
      }
# 2664 "mod_fastcgi.c"
      if (p->conf.debug) {
        {
# 2665 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 2665U, "ssbsdsd", "--- fastcgi spawning",
                        "\n\tsocket", proc->connection_name, "\n\tcurrent:", 1, "/",
                        host->min_procs);
        }
      }
      {
# 2671 "mod_fastcgi.c"
      tmp___0 = fcgi_spawn_connection(srv, p, host, proc);
      }
# 2671 "mod_fastcgi.c"
      if (tmp___0) {
        {
# 2672 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 2672U, "s", "ERROR: spawning fcgi failed.");
        }
# 2674 "mod_fastcgi.c"
        return (5);
      }
    } else {
# 2677 "mod_fastcgi.c"
      if (srv->cur_ts <= proc->disabled_until) {
# 2677 "mod_fastcgi.c"
        break;
      }
      {
# 2679 "mod_fastcgi.c"
      proc->state = 1;
# 2680 "mod_fastcgi.c"
      (host->active_procs) ++;
# 2682 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 2682U, "sb", "fcgi-server re-enabled:",
                      proc->connection_name);
      }
    }
# 2686 "mod_fastcgi.c"
    break;
    }
# 2580 "mod_fastcgi.c"
    proc = proc->next;
  }
# 2690 "mod_fastcgi.c"
  return (0);
}
}
# 2693 "mod_fastcgi.c"
static handler_t fcgi_write_request(server *srv , handler_ctx *hctx )
{ plugin_data *p ;
  fcgi_extension_host *host ;
  connection *con ;
  fcgi_proc *proc ;
  int ret ;
  int socket_error ;
  socklen_t socket_error_len ;
  int *tmp ;
  char *tmp___0 ;
  int tmp___1 ;
  char *tmp___2 ;
  size_t tmp___3 ;
  int *tmp___4 ;
  int *tmp___5 ;
  int *tmp___6 ;
  char *tmp___7 ;
  int *tmp___8 ;
  char *tmp___9 ;
  int tmp___10 ;
  connection_result_t tmp___11 ;
  size_t tmp___12 ;
  size_t tmp___13 ;
  size_t tmp___14 ;
  size_t tmp___15 ;
  size_t tmp___16 ;
  int *tmp___17 ;
  int *tmp___18 ;
  int *tmp___19 ;
  char *tmp___20 ;

  {
# 2694 "mod_fastcgi.c"
  p = hctx->plugin_data;
# 2695 "mod_fastcgi.c"
  host = hctx->host;
# 2696 "mod_fastcgi.c"
  con = hctx->remote_conn;
# 2702 "mod_fastcgi.c"
  if (! host) {
    {
# 2704 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2704U, "sxddd", "write-req: error", host,
                    (host->host)->used, host->port, (host->unixsocket)->used);
# 2711 "mod_fastcgi.c"
    (hctx->proc)->disabled_until = srv->cur_ts + 10L;
# 2712 "mod_fastcgi.c"
    (hctx->proc)->state = 4;
    }
# 2714 "mod_fastcgi.c"
    return (5);
  } else {
# 2702 "mod_fastcgi.c"
    if (! (host->host)->used) {
      goto _L;
    } else {
# 2702 "mod_fastcgi.c"
      if (! host->port) {
        _L:
# 2702 "mod_fastcgi.c"
        if (! (host->unixsocket)->used) {
          {
# 2704 "mod_fastcgi.c"
          log_error_write(srv, "mod_fastcgi.c", 2704U, "sxddd", "write-req: error",
                          host, (host->host)->used, host->port, (host->unixsocket)->used);
# 2711 "mod_fastcgi.c"
          (hctx->proc)->disabled_until = srv->cur_ts + 10L;
# 2712 "mod_fastcgi.c"
          (hctx->proc)->state = 4;
          }
# 2714 "mod_fastcgi.c"
          return (5);
        }
      }
    }
  }
# 2718 "mod_fastcgi.c"
  if ((int )hctx->state == 2) {
    {
# 2720 "mod_fastcgi.c"
    socket_error_len = sizeof(socket_error);
# 2723 "mod_fastcgi.c"
    tmp___1 = getsockopt(hctx->fd, 1, 4, (void * )(& socket_error),
                         (socklen_t * )(& socket_error_len));
    }
# 2723 "mod_fastcgi.c"
    if (0 != tmp___1) {
      {
# 2724 "mod_fastcgi.c"
      tmp = __errno_location();
# 2724 "mod_fastcgi.c"
      tmp___0 = strerror(*tmp);
# 2724 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 2724U, "ss", "getsockopt failed:", tmp___0);
# 2727 "mod_fastcgi.c"
      (hctx->proc)->disabled_until = srv->cur_ts + 10L;
# 2728 "mod_fastcgi.c"
      (hctx->proc)->state = 4;
      }
# 2730 "mod_fastcgi.c"
      return (5);
    }
# 2732 "mod_fastcgi.c"
    if (socket_error != 0) {
# 2733 "mod_fastcgi.c"
      if (! (hctx->proc)->is_local) {
        {
# 2736 "mod_fastcgi.c"
        tmp___2 = strerror(socket_error);
# 2736 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 2736U, "sssb", "establishing connection failed:",
                        tmp___2, "socket:", (hctx->proc)->connection_name);
        }
      } else {
# 2733 "mod_fastcgi.c"
        if (p->conf.debug) {
          {
# 2736 "mod_fastcgi.c"
          tmp___2 = strerror(socket_error);
# 2736 "mod_fastcgi.c"
          log_error_write(srv, "mod_fastcgi.c", 2736U, "sssb", "establishing connection failed:",
                          tmp___2, "socket:", (hctx->proc)->connection_name);
          }
        }
      }
# 2741 "mod_fastcgi.c"
      (hctx->proc)->disabled_until = srv->cur_ts + 5L;
# 2743 "mod_fastcgi.c"
      if ((hctx->proc)->is_local) {
# 2744 "mod_fastcgi.c"
        (hctx->proc)->state = 3;
      } else {
# 2746 "mod_fastcgi.c"
        (hctx->proc)->state = 4;
      }
      {
# 2749 "mod_fastcgi.c"
      (hctx->proc)->state = 4;
# 2751 "mod_fastcgi.c"
      fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
# 2752 "mod_fastcgi.c"
      buffer_append_string(p->statuskey, ".died");
      }
# 2754 "mod_fastcgi.c"
      if ((p->statuskey)->used) {
# 2754 "mod_fastcgi.c"
        tmp___3 = (p->statuskey)->used - 1U;
      } else {
# 2754 "mod_fastcgi.c"
        tmp___3 = 0U;
      }
      {
# 2754 "mod_fastcgi.c"
      status_counter_inc(srv, (char const *)(p->statuskey)->ptr, tmp___3);
      }
# 2756 "mod_fastcgi.c"
      return (5);
    }
# 2759 "mod_fastcgi.c"
    hctx->state = 3;
  }
# 2763 "mod_fastcgi.c"
  switch ((int )hctx->state) {
  case 2:
# 2766 "mod_fastcgi.c"
  break;
  case 1:
# 2769 "mod_fastcgi.c"
  hctx->proc = (fcgi_proc *)((void *)0);
# 2771 "mod_fastcgi.c"
  proc = (hctx->host)->first;
# 2771 "mod_fastcgi.c"
  while (1) {
# 2771 "mod_fastcgi.c"
    if (proc) {
# 2771 "mod_fastcgi.c"
      if (! ((int )proc->state != 1)) {
# 2771 "mod_fastcgi.c"
        break;
      }
    } else {
# 2771 "mod_fastcgi.c"
      break;
    }
# 2771 "mod_fastcgi.c"
    proc = proc->next;
  }
# 2776 "mod_fastcgi.c"
  if ((unsigned int )proc == (unsigned int )((void *)0)) {
# 2777 "mod_fastcgi.c"
    hctx->fde_ndx = -1;
# 2779 "mod_fastcgi.c"
    return (5);
  }
# 2782 "mod_fastcgi.c"
  hctx->proc = proc;
# 2785 "mod_fastcgi.c"
  proc = proc->next;
# 2785 "mod_fastcgi.c"
  while (proc) {
# 2786 "mod_fastcgi.c"
    if ((int )proc->state != 1) {
      goto __Cont;
    }
# 2787 "mod_fastcgi.c"
    if (proc->load < (hctx->proc)->load) {
# 2787 "mod_fastcgi.c"
      hctx->proc = proc;
    }
    __Cont:
# 2785 "mod_fastcgi.c"
    proc = proc->next;
  }
# 2790 "mod_fastcgi.c"
  if ((host->unixsocket)->used) {
# 2790 "mod_fastcgi.c"
    ret = 1;
  } else {
# 2790 "mod_fastcgi.c"
    ret = 2;
  }
  {
# 2792 "mod_fastcgi.c"
  hctx->fd = socket(ret, 1, 0);
  }
# 2792 "mod_fastcgi.c"
  if (-1 == hctx->fd) {
    {
# 2793 "mod_fastcgi.c"
    tmp___4 = __errno_location();
    }
# 2793 "mod_fastcgi.c"
    if (*tmp___4 == 24) {
      {
# 2795 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 2795U, "sd", "wait for fd at connection:",
                      con->fd);
      }
# 2798 "mod_fastcgi.c"
      return (6);
    } else {
      {
# 2793 "mod_fastcgi.c"
      tmp___5 = __errno_location();
      }
# 2793 "mod_fastcgi.c"
      if (*tmp___5 == 4) {
        {
# 2795 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 2795U, "sd", "wait for fd at connection:",
                        con->fd);
        }
# 2798 "mod_fastcgi.c"
        return (6);
      }
    }
    {
# 2801 "mod_fastcgi.c"
    tmp___6 = __errno_location();
# 2801 "mod_fastcgi.c"
    tmp___7 = strerror(*tmp___6);
# 2801 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2801U, "ssdd", "socket failed:", tmp___7,
                    srv->cur_fds, srv->max_fds);
    }
# 2803 "mod_fastcgi.c"
    return (5);
  }
  {
# 2805 "mod_fastcgi.c"
  hctx->fde_ndx = -1;
# 2807 "mod_fastcgi.c"
  (srv->cur_fds) ++;
# 2809 "mod_fastcgi.c"
  fdevent_register(srv->ev, hctx->fd, & fcgi_handle_fdevent, (void *)hctx);
# 2811 "mod_fastcgi.c"
  tmp___10 = fdevent_fcntl_set(srv->ev, hctx->fd);
  }
# 2811 "mod_fastcgi.c"
  if (-1 == tmp___10) {
    {
# 2812 "mod_fastcgi.c"
    tmp___8 = __errno_location();
# 2812 "mod_fastcgi.c"
    tmp___9 = strerror(*tmp___8);
# 2812 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2812U, "ss", "fcntl failed:", tmp___9);
    }
# 2815 "mod_fastcgi.c"
    return (5);
  }
# 2818 "mod_fastcgi.c"
  if ((hctx->proc)->is_local) {
# 2819 "mod_fastcgi.c"
    hctx->pid = (hctx->proc)->pid;
  }
  {
# 2822 "mod_fastcgi.c"
  tmp___11 = fcgi_establish_connection(srv, hctx);
  }
# 2822 "mod_fastcgi.c"
  switch ((int )tmp___11) {
  case 2:
  {
# 2826 "mod_fastcgi.c"
  fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
# 2828 "mod_fastcgi.c"
  fcgi_set_state(srv, hctx, 2);
  }
# 2829 "mod_fastcgi.c"
  return (4);
  case 3:
  {
# 2834 "mod_fastcgi.c"
  log_error_write(srv, "mod_fastcgi.c", 2834U, "ssdsd", "backend is overloaded; we\'ll disable it for 2 seconds and send the request to another backend instead:",
                  "reconnects:", hctx->reconnects, "load:", host->load);
# 2840 "mod_fastcgi.c"
  (hctx->proc)->disabled_until = srv->cur_ts + 2L;
# 2841 "mod_fastcgi.c"
  (hctx->proc)->state = 2;
# 2843 "mod_fastcgi.c"
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
# 2844 "mod_fastcgi.c"
  buffer_append_string(p->statuskey, ".overloaded");
  }
# 2846 "mod_fastcgi.c"
  if ((p->statuskey)->used) {
# 2846 "mod_fastcgi.c"
    tmp___12 = (p->statuskey)->used - 1U;
  } else {
# 2846 "mod_fastcgi.c"
    tmp___12 = 0U;
  }
  {
# 2846 "mod_fastcgi.c"
  status_counter_inc(srv, (char const *)(p->statuskey)->ptr, tmp___12);
  }
# 2848 "mod_fastcgi.c"
  return (5);
  case 4:
# 2857 "mod_fastcgi.c"
  (hctx->proc)->disabled_until = srv->cur_ts + 5L;
# 2858 "mod_fastcgi.c"
  if ((hctx->proc)->is_local) {
# 2859 "mod_fastcgi.c"
    (hctx->proc)->state = 3;
  } else {
# 2861 "mod_fastcgi.c"
    (hctx->proc)->state = 4;
  }
  {
# 2864 "mod_fastcgi.c"
  log_error_write(srv, "mod_fastcgi.c", 2864U, "ssdsd", "backend died; we\'ll disable it for 5 seconds and send the request to another backend instead:",
                  "reconnects:", hctx->reconnects, "load:", host->load);
# 2869 "mod_fastcgi.c"
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
# 2870 "mod_fastcgi.c"
  buffer_append_string(p->statuskey, ".died");
  }
# 2872 "mod_fastcgi.c"
  if ((p->statuskey)->used) {
# 2872 "mod_fastcgi.c"
    tmp___13 = (p->statuskey)->used - 1U;
  } else {
# 2872 "mod_fastcgi.c"
    tmp___13 = 0U;
  }
  {
# 2872 "mod_fastcgi.c"
  status_counter_inc(srv, (char const *)(p->statuskey)->ptr, tmp___13);
  }
# 2874 "mod_fastcgi.c"
  return (5);
  case 1:
  {
# 2878 "mod_fastcgi.c"
  fcgi_set_state(srv, hctx, 3);
  }
# 2880 "mod_fastcgi.c"
  break;
  case 0:
# 2882 "mod_fastcgi.c"
  break;
  }
  case 3:
  {
# 2888 "mod_fastcgi.c"
  ((hctx->proc)->load) ++;
# 2889 "mod_fastcgi.c"
  (hctx->proc)->last_used = srv->cur_ts;
# 2890 "mod_fastcgi.c"
  hctx->got_proc = 1;
# 2892 "mod_fastcgi.c"
  status_counter_inc(srv, "fastcgi.requests", sizeof("fastcgi.requests") - 1U);
# 2893 "mod_fastcgi.c"
  status_counter_inc(srv, "fastcgi.active-requests", sizeof("fastcgi.active-requests") - 1U);
# 2895 "mod_fastcgi.c"
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
# 2896 "mod_fastcgi.c"
  buffer_append_string(p->statuskey, ".connected");
  }
# 2898 "mod_fastcgi.c"
  if ((p->statuskey)->used) {
# 2898 "mod_fastcgi.c"
    tmp___14 = (p->statuskey)->used - 1U;
  } else {
# 2898 "mod_fastcgi.c"
    tmp___14 = 0U;
  }
  {
# 2898 "mod_fastcgi.c"
  status_counter_inc(srv, (char const *)(p->statuskey)->ptr, tmp___14);
# 2901 "mod_fastcgi.c"
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
# 2902 "mod_fastcgi.c"
  buffer_append_string(p->statuskey, ".load");
  }
# 2904 "mod_fastcgi.c"
  if ((p->statuskey)->used) {
# 2904 "mod_fastcgi.c"
    tmp___15 = (p->statuskey)->used - 1U;
  } else {
# 2904 "mod_fastcgi.c"
    tmp___15 = 0U;
  }
  {
# 2904 "mod_fastcgi.c"
  status_counter_set(srv, (char const *)(p->statuskey)->ptr, tmp___15, (int )(hctx->proc)->load);
# 2907 "mod_fastcgi.c"
  fastcgi_status_copy_procname(p->statuskey, hctx->host, (fcgi_proc *)((void *)0));
# 2908 "mod_fastcgi.c"
  buffer_append_string(p->statuskey, ".load");
  }
# 2910 "mod_fastcgi.c"
  if ((p->statuskey)->used) {
# 2910 "mod_fastcgi.c"
    tmp___16 = (p->statuskey)->used - 1U;
  } else {
# 2910 "mod_fastcgi.c"
    tmp___16 = 0U;
  }
  {
# 2910 "mod_fastcgi.c"
  status_counter_set(srv, (char const *)(p->statuskey)->ptr, tmp___16, (hctx->host)->load);
  }
# 2912 "mod_fastcgi.c"
  if (p->conf.debug) {
    {
# 2913 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2913U, "ssdsbsd", "got proc:", "pid:", (hctx->proc)->pid,
                    "socket:", (hctx->proc)->connection_name, "load:", (hctx->proc)->load);
    }
  }
# 2921 "mod_fastcgi.c"
  if (hctx->request_id == 0U) {
    {
# 2922 "mod_fastcgi.c"
    hctx->request_id = fcgi_requestid_new(srv, p);
    }
  } else {
    {
# 2924 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2924U, "sd", "fcgi-request is already in use:",
                    hctx->request_id);
    }
  }
  {
# 2929 "mod_fastcgi.c"
  fcgi_create_env(srv, hctx, hctx->request_id);
# 2931 "mod_fastcgi.c"
  fcgi_set_state(srv, hctx, 4);
  }
  case 4:
  {
# 2935 "mod_fastcgi.c"
  ret = (*(srv->network_backend_write))(srv, con, hctx->fd, hctx->wb);
# 2937 "mod_fastcgi.c"
  chunkqueue_remove_finished_chunks(hctx->wb);
  }
# 2939 "mod_fastcgi.c"
  if (ret < 0) {
    {
# 2940 "mod_fastcgi.c"
    tmp___17 = __errno_location();
    }
# 2940 "mod_fastcgi.c"
    switch (*tmp___17) {
    case 107:
# 2948 "mod_fastcgi.c"
    if ((hctx->wb)->bytes_out == 0LL) {
# 2948 "mod_fastcgi.c"
      if (hctx->reconnects < 5) {
        {
# 2950 "mod_fastcgi.c"
        usleep(10000U);
# 2954 "mod_fastcgi.c"
        fcgi_reconnect(srv, hctx);
        }
# 2956 "mod_fastcgi.c"
        return (6);
      }
    }
    {
# 2965 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2965U, "ssosd", "[REPORT ME] connection was dropped after accept(). reconnect() denied:",
                    "write-offset:", (hctx->wb)->bytes_out, "reconnect attempts:",
                    hctx->reconnects);
    }
# 2970 "mod_fastcgi.c"
    return (5);
    case 11:
    case 4:
    {
# 2973 "mod_fastcgi.c"
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    }
# 2975 "mod_fastcgi.c"
    return (4);
    default:
    {
# 2977 "mod_fastcgi.c"
    tmp___18 = __errno_location();
# 2977 "mod_fastcgi.c"
    tmp___19 = __errno_location();
# 2977 "mod_fastcgi.c"
    tmp___20 = strerror(*tmp___19);
# 2977 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 2977U, "ssd", "write failed:", tmp___20,
                    *tmp___18);
    }
# 2980 "mod_fastcgi.c"
    return (5);
    }
  }
# 2984 "mod_fastcgi.c"
  if ((hctx->wb)->bytes_out == (hctx->wb)->bytes_in) {
    {
# 2986 "mod_fastcgi.c"
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
# 2987 "mod_fastcgi.c"
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1);
# 2988 "mod_fastcgi.c"
    fcgi_set_state(srv, hctx, 5);
    }
  } else {
    {
# 2990 "mod_fastcgi.c"
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    }
# 2992 "mod_fastcgi.c"
    return (4);
  }
# 2995 "mod_fastcgi.c"
  break;
  case 5:
# 2998 "mod_fastcgi.c"
  break;
  default:
  {
# 3000 "mod_fastcgi.c"
  log_error_write(srv, "mod_fastcgi.c", 3000U, "s", "(debug) unknown state");
  }
# 3001 "mod_fastcgi.c"
  return (5);
  }
# 3004 "mod_fastcgi.c"
  return (4);
}
}
# 3010 "mod_fastcgi.c"
static handler_t mod_fastcgi_handle_subrequest(server *srv , connection *con , void *p_d )
{ plugin_data *p ;
  handler_ctx *hctx ;
  fcgi_proc *proc ;
  fcgi_extension_host *host ;
  size_t k ;
  int ndx ;
  int used ;
  handler_t tmp ;

  {
# 3011 "mod_fastcgi.c"
  p = (plugin_data *)p_d;
# 3013 "mod_fastcgi.c"
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
# 3017 "mod_fastcgi.c"
  if ((unsigned int )((void *)0) == (unsigned int )hctx) {
# 3017 "mod_fastcgi.c"
    return (1);
  }
# 3020 "mod_fastcgi.c"
  if ((size_t )con->mode != p->id) {
# 3020 "mod_fastcgi.c"
    return (1);
  }
# 3025 "mod_fastcgi.c"
  if ((unsigned int )hctx->host == (unsigned int )((void *)0)) {
# 3027 "mod_fastcgi.c"
    used = -1;
# 3030 "mod_fastcgi.c"
    ndx = (hctx->ext)->last_used_ndx + 1;
# 3031 "mod_fastcgi.c"
    if ((size_t )ndx >= (hctx->ext)->used) {
# 3031 "mod_fastcgi.c"
      ndx = 0;
    } else {
# 3031 "mod_fastcgi.c"
      if (ndx < 0) {
# 3031 "mod_fastcgi.c"
        ndx = 0;
      }
    }
# 3032 "mod_fastcgi.c"
    host = *((hctx->ext)->hosts + ndx);
# 3033 "mod_fastcgi.c"
    if (host->load > 0) {
# 3035 "mod_fastcgi.c"
      k = 0U;
# 3035 "mod_fastcgi.c"
      ndx = -1;
# 3035 "mod_fastcgi.c"
      while (k < (hctx->ext)->used) {
# 3036 "mod_fastcgi.c"
        host = *((hctx->ext)->hosts + k);
# 3039 "mod_fastcgi.c"
        if (host->active_procs == 0U) {
          goto __Cont;
        }
# 3041 "mod_fastcgi.c"
        if (used == -1) {
# 3042 "mod_fastcgi.c"
          used = host->load;
# 3044 "mod_fastcgi.c"
          ndx = (int )k;
        } else {
# 3041 "mod_fastcgi.c"
          if (host->load < used) {
# 3042 "mod_fastcgi.c"
            used = host->load;
# 3044 "mod_fastcgi.c"
            ndx = (int )k;
          }
        }
        __Cont:
# 3035 "mod_fastcgi.c"
        k ++;
      }
    }
# 3050 "mod_fastcgi.c"
    if (ndx == -1) {
      {
# 3053 "mod_fastcgi.c"
      fcgi_connection_close(srv, hctx);
# 3055 "mod_fastcgi.c"
      con->http_status = 500;
# 3056 "mod_fastcgi.c"
      con->mode = 0;
      }
# 3058 "mod_fastcgi.c"
      return (2);
    }
# 3061 "mod_fastcgi.c"
    (hctx->ext)->last_used_ndx = ndx;
# 3062 "mod_fastcgi.c"
    host = *((hctx->ext)->hosts + ndx);
# 3070 "mod_fastcgi.c"
    hctx->host = host;
# 3075 "mod_fastcgi.c"
    ((hctx->host)->load) ++;
# 3076 "mod_fastcgi.c"
    hctx->proc = (fcgi_proc *)((void *)0);
  } else {
# 3078 "mod_fastcgi.c"
    host = hctx->host;
  }
  {
# 3082 "mod_fastcgi.c"
  tmp = fcgi_write_request(srv, hctx);
  }
# 3082 "mod_fastcgi.c"
  switch ((int )tmp) {
  case 5:
# 3084 "mod_fastcgi.c"
  proc = hctx->proc;
# 3085 "mod_fastcgi.c"
  host = hctx->host;
# 3087 "mod_fastcgi.c"
  if ((int )hctx->state == 1) {
    goto _L;
  } else {
# 3087 "mod_fastcgi.c"
    if ((int )hctx->state == 2) {
      _L:
# 3089 "mod_fastcgi.c"
      if (proc) {
# 3089 "mod_fastcgi.c"
        (host->active_procs) --;
      }
      {
# 3091 "mod_fastcgi.c"
      fcgi_restart_dead_procs(srv, p, host);
      }
# 3094 "mod_fastcgi.c"
      if (hctx->reconnects < 5) {
        {
# 3095 "mod_fastcgi.c"
        fcgi_reconnect(srv, hctx);
# 3096 "mod_fastcgi.c"
        joblist_append(srv, con);
        }
# 3098 "mod_fastcgi.c"
        return (6);
      } else {
        {
# 3100 "mod_fastcgi.c"
        fcgi_connection_close(srv, hctx);
# 3102 "mod_fastcgi.c"
        buffer_reset(con->physical.path);
# 3103 "mod_fastcgi.c"
        con->mode = 0;
# 3104 "mod_fastcgi.c"
        con->http_status = 500;
# 3105 "mod_fastcgi.c"
        joblist_append(srv, con);
        }
# 3107 "mod_fastcgi.c"
        return (2);
      }
    } else {
      {
# 3110 "mod_fastcgi.c"
      fcgi_connection_close(srv, hctx);
# 3112 "mod_fastcgi.c"
      buffer_reset(con->physical.path);
# 3113 "mod_fastcgi.c"
      con->mode = 0;
# 3114 "mod_fastcgi.c"
      con->http_status = 503;
# 3115 "mod_fastcgi.c"
      joblist_append(srv, con);
      }
# 3117 "mod_fastcgi.c"
      return (2);
    }
  }
  case 4:
# 3120 "mod_fastcgi.c"
  if (con->file_started == 1) {
# 3121 "mod_fastcgi.c"
    return (2);
  } else {
# 3123 "mod_fastcgi.c"
    return (4);
  }
  case 6:
# 3126 "mod_fastcgi.c"
  return (6);
  default:
  {
# 3128 "mod_fastcgi.c"
  log_error_write(srv, "mod_fastcgi.c", 3128U, "s", "subrequest write-req default");
  }
# 3129 "mod_fastcgi.c"
  return (5);
  }
}
}
# 3133 "mod_fastcgi.c"
static handler_t fcgi_handle_fdevent(void *s , void *ctx , int revents )
{ server *srv ;
  handler_ctx *hctx ;
  connection *con ;
  plugin_data *p ;
  fcgi_proc *proc ;
  fcgi_extension_host *host ;
  int tmp ;
  int status ;
  __pid_t tmp___0 ;
  union __anonunion_159 __constr_expr_0 ;
  union __anonunion_160 __constr_expr_1 ;
  union __anonunion_161 __constr_expr_2 ;
  union __anonunion_162 __constr_expr_3 ;
  int tmp___1 ;
  handler_t tmp___2 ;
  handler_t tmp___3 ;

  {
# 3134 "mod_fastcgi.c"
  srv = (server *)s;
# 3135 "mod_fastcgi.c"
  hctx = (handler_ctx *)ctx;
# 3136 "mod_fastcgi.c"
  con = hctx->remote_conn;
# 3137 "mod_fastcgi.c"
  p = hctx->plugin_data;
# 3139 "mod_fastcgi.c"
  proc = hctx->proc;
# 3140 "mod_fastcgi.c"
  host = hctx->host;
# 3142 "mod_fastcgi.c"
  if (revents & 1) {
# 3142 "mod_fastcgi.c"
    if ((int )hctx->state == 5) {
      {
# 3144 "mod_fastcgi.c"
      tmp = fcgi_demux_response(srv, hctx);
      }
# 3144 "mod_fastcgi.c"
      switch (tmp) {
      case 0:
# 3146 "mod_fastcgi.c"
      break;
      case 1:
# 3149 "mod_fastcgi.c"
      if ((int )host->mode == 2) {
# 3149 "mod_fastcgi.c"
        if (con->http_status == 200) {
          goto _L;
        } else {
# 3149 "mod_fastcgi.c"
          if (con->http_status == 0) {
            _L:
            {
# 3158 "mod_fastcgi.c"
            buffer_copy_string_buffer(con->physical.doc_root, (buffer const *)host->docroot);
# 3160 "mod_fastcgi.c"
            buffer_copy_string_buffer(con->physical.path, (buffer const *)host->docroot);
# 3161 "mod_fastcgi.c"
            buffer_append_string_buffer(con->physical.path, (buffer const *)con->uri.path);
# 3162 "mod_fastcgi.c"
            fcgi_connection_close(srv, hctx);
# 3164 "mod_fastcgi.c"
            con->mode = 0;
# 3165 "mod_fastcgi.c"
            con->file_started = 1;
            }
          } else {
            {
# 3168 "mod_fastcgi.c"
            fcgi_connection_close(srv, hctx);
            }
          }
        }
      } else {
        {
# 3168 "mod_fastcgi.c"
        fcgi_connection_close(srv, hctx);
        }
      }
      {
# 3171 "mod_fastcgi.c"
      joblist_append(srv, con);
      }
# 3172 "mod_fastcgi.c"
      return (2);
      case -1:
# 3174 "mod_fastcgi.c"
      if (proc->pid) {
# 3174 "mod_fastcgi.c"
        if ((int )proc->state != 4) {
          {
# 3179 "mod_fastcgi.c"
          tmp___0 = waitpid(proc->pid, & status, 1);
          }
# 3179 "mod_fastcgi.c"
          switch (tmp___0) {
          case 0:
# 3182 "mod_fastcgi.c"
          break;
          case -1:
# 3184 "mod_fastcgi.c"
          break;
          default:
# 3187 "mod_fastcgi.c"
          __constr_expr_3.__in = status;
# 3187 "mod_fastcgi.c"
          if ((__constr_expr_3.__i & 127) == 0) {
            {
# 3188 "mod_fastcgi.c"
            __constr_expr_0.__in = status;
# 3188 "mod_fastcgi.c"
            log_error_write(srv, "mod_fastcgi.c", 3188U, "sdsd", "child exited, pid:",
                            proc->pid, "status:", (__constr_expr_0.__i & 65280) >> 8);
            }
          } else {
# 3191 "mod_fastcgi.c"
            __constr_expr_2.__in = status;
# 3191 "mod_fastcgi.c"
            if ((int )((signed char )((__constr_expr_2.__i & 127) + 1)) >> 1 > 0) {
              {
# 3192 "mod_fastcgi.c"
              __constr_expr_1.__in = status;
# 3192 "mod_fastcgi.c"
              log_error_write(srv, "mod_fastcgi.c", 3192U, "sd", "child signaled:",
                              __constr_expr_1.__i & 127);
              }
            } else {
              {
# 3196 "mod_fastcgi.c"
              log_error_write(srv, "mod_fastcgi.c", 3196U, "sd", "child died somehow:",
                              status);
              }
            }
          }
# 3201 "mod_fastcgi.c"
          if (p->conf.debug) {
            {
# 3202 "mod_fastcgi.c"
            log_error_write(srv, "mod_fastcgi.c", 3202U, "ssbsdsd", "--- fastcgi spawning",
                            "\n\tsocket", proc->connection_name, "\n\tcurrent:", 1,
                            "/", host->min_procs);
            }
          }
          {
# 3208 "mod_fastcgi.c"
          tmp___1 = fcgi_spawn_connection(srv, p, host, proc);
          }
# 3208 "mod_fastcgi.c"
          if (tmp___1) {
            {
# 3210 "mod_fastcgi.c"
            proc->state = 4;
# 3212 "mod_fastcgi.c"
            log_error_write(srv, "mod_fastcgi.c", 3212U, "s", "respawning failed, will retry later");
            }
          }
# 3216 "mod_fastcgi.c"
          break;
          }
        }
      }
# 3220 "mod_fastcgi.c"
      if (con->file_started == 0) {
# 3223 "mod_fastcgi.c"
        if ((hctx->wb)->bytes_out == 0LL) {
# 3223 "mod_fastcgi.c"
          if (hctx->reconnects < 5) {
            {
# 3225 "mod_fastcgi.c"
            fcgi_reconnect(srv, hctx);
# 3227 "mod_fastcgi.c"
            log_error_write(srv, "mod_fastcgi.c", 3227U, "ssbsbs", "response not received, request not sent",
                            "on socket:", proc->connection_name, "for", con->uri.path,
                            ", reconnecting");
            }
# 3232 "mod_fastcgi.c"
            return (6);
          }
        }
        {
# 3235 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 3235U, "sosbsbs", "response not received, request sent:",
                        (hctx->wb)->bytes_out, "on socket:", proc->connection_name,
                        "for", con->uri.path, ", closing connection");
# 3240 "mod_fastcgi.c"
        fcgi_connection_close(srv, hctx);
# 3242 "mod_fastcgi.c"
        connection_set_state(srv, con, 5);
# 3243 "mod_fastcgi.c"
        buffer_reset(con->physical.path);
# 3244 "mod_fastcgi.c"
        con->http_status = 500;
# 3245 "mod_fastcgi.c"
        con->mode = 0;
        }
      } else {
        {
# 3248 "mod_fastcgi.c"
        fcgi_connection_close(srv, hctx);
# 3250 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 3250U, "ssbsbs", "response already sent out, but backend returned error",
                        "on socket:", proc->connection_name, "for", con->uri.path,
                        ", terminating connection");
# 3255 "mod_fastcgi.c"
        connection_set_state(srv, con, 9);
        }
      }
      {
# 3261 "mod_fastcgi.c"
      joblist_append(srv, con);
      }
# 3262 "mod_fastcgi.c"
      return (2);
      }
    }
  }
# 3266 "mod_fastcgi.c"
  if (revents & (1 << 2)) {
# 3267 "mod_fastcgi.c"
    if ((int )hctx->state == 2) {
      {
# 3274 "mod_fastcgi.c"
      tmp___2 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
      }
# 3274 "mod_fastcgi.c"
      return (tmp___2);
    } else {
# 3267 "mod_fastcgi.c"
      if ((int )hctx->state == 4) {
        {
# 3274 "mod_fastcgi.c"
        tmp___2 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
        }
# 3274 "mod_fastcgi.c"
        return (tmp___2);
      } else {
        {
# 3276 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 3276U, "sd", "got a FDEVENT_OUT and didn\'t know why:",
                        hctx->state);
        }
      }
    }
  }
# 3283 "mod_fastcgi.c"
  if (revents & (1 << 4)) {
# 3284 "mod_fastcgi.c"
    if ((int )hctx->state == 2) {
      {
# 3294 "mod_fastcgi.c"
      tmp___3 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
      }
# 3294 "mod_fastcgi.c"
      return (tmp___3);
    } else {
# 3295 "mod_fastcgi.c"
      if ((int )hctx->state == 5) {
# 3295 "mod_fastcgi.c"
        if (! ((hctx->proc)->port == 0U)) {
          {
# 3303 "mod_fastcgi.c"
          log_error_write(srv, "mod_fastcgi.c", 3303U, "sbSBSDSd", "error: unexpected close of fastcgi connection for",
                          con->uri.path, "(no fastcgi process on host:", host->host,
                          ", port: ", host->port, " ?)", hctx->state);
# 3313 "mod_fastcgi.c"
          connection_set_state(srv, con, 9);
# 3314 "mod_fastcgi.c"
          fcgi_connection_close(srv, hctx);
# 3315 "mod_fastcgi.c"
          joblist_append(srv, con);
          }
        }
      } else {
        {
# 3303 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 3303U, "sbSBSDSd", "error: unexpected close of fastcgi connection for",
                        con->uri.path, "(no fastcgi process on host:", host->host,
                        ", port: ", host->port, " ?)", hctx->state);
# 3313 "mod_fastcgi.c"
        connection_set_state(srv, con, 9);
# 3314 "mod_fastcgi.c"
        fcgi_connection_close(srv, hctx);
# 3315 "mod_fastcgi.c"
        joblist_append(srv, con);
        }
      }
    }
  } else {
# 3317 "mod_fastcgi.c"
    if (revents & (1 << 3)) {
      {
# 3318 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 3318U, "s", "fcgi: got a FDEVENT_ERR. Don\'t know why.");
# 3323 "mod_fastcgi.c"
      connection_set_state(srv, con, 9);
# 3324 "mod_fastcgi.c"
      fcgi_connection_close(srv, hctx);
# 3325 "mod_fastcgi.c"
      joblist_append(srv, con);
      }
    }
  }
# 3328 "mod_fastcgi.c"
  return (2);
}
}
# 3332 "mod_fastcgi.c"
static int fcgi_patch_connection(server *srv , connection *con , plugin_data *p )
{ size_t i ;
  size_t j ;
  plugin_config *s ;
  data_config *dc ;
  int tmp ;
  data_unset *du ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
# 3334 "mod_fastcgi.c"
  s = *(p->config_storage + 0);
# 3336 "mod_fastcgi.c"
  p->conf.exts = s->exts;
# 3337 "mod_fastcgi.c"
  p->conf.debug = s->debug;
# 3338 "mod_fastcgi.c"
  p->conf.ext_mapping = s->ext_mapping;
# 3341 "mod_fastcgi.c"
  i = 1U;
# 3341 "mod_fastcgi.c"
  while (i < (srv->config_context)->used) {
    {
# 3342 "mod_fastcgi.c"
    dc = (data_config *)*((srv->config_context)->data + i);
# 3343 "mod_fastcgi.c"
    s = *(p->config_storage + i);
# 3346 "mod_fastcgi.c"
    tmp = config_check_cond(srv, con, dc);
    }
# 3346 "mod_fastcgi.c"
    if (! tmp) {
      goto __Cont;
    }
# 3349 "mod_fastcgi.c"
    j = 0U;
# 3349 "mod_fastcgi.c"
    while (j < (dc->value)->used) {
      {
# 3350 "mod_fastcgi.c"
      du = *((dc->value)->data + j);
# 3352 "mod_fastcgi.c"
      tmp___2 = buffer_is_equal_string(du->key, "fastcgi.server", sizeof("fastcgi.server") - 1U);
      }
# 3352 "mod_fastcgi.c"
      if (tmp___2) {
# 3353 "mod_fastcgi.c"
        p->conf.exts = s->exts;
      } else {
        {
# 3354 "mod_fastcgi.c"
        tmp___1 = buffer_is_equal_string(du->key, "fastcgi.debug", sizeof("fastcgi.debug") - 1U);
        }
# 3354 "mod_fastcgi.c"
        if (tmp___1) {
# 3355 "mod_fastcgi.c"
          p->conf.debug = s->debug;
        } else {
          {
# 3356 "mod_fastcgi.c"
          tmp___0 = buffer_is_equal_string(du->key, "fastcgi.map-extensions", sizeof("fastcgi.map-extensions") - 1U);
          }
# 3356 "mod_fastcgi.c"
          if (tmp___0) {
# 3357 "mod_fastcgi.c"
            p->conf.ext_mapping = s->ext_mapping;
          }
        }
      }
# 3349 "mod_fastcgi.c"
      j ++;
    }
    __Cont:
# 3341 "mod_fastcgi.c"
    i ++;
  }
# 3362 "mod_fastcgi.c"
  return (0);
}
}
# 3367 "mod_fastcgi.c"
static handler_t fcgi_check_extension(server *srv , connection *con , void *p_d ,
                                      int uri_path_handler )
{ plugin_data *p ;
  size_t s_len ;
  size_t k ;
  buffer *fn ;
  fcgi_extension *extension ;
  fcgi_extension_host *host ;
  int tmp ;
  data_string *ds ;
  size_t ct_len ;
  int tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t __s1_len ;
  size_t __s2_len ;
  int tmp___3 ;
  int tmp___4 ;
  int tmp___5 ;
  unsigned char const *__s2 ;
  register int __result ;
  int tmp___6 ;
  unsigned char const *__s1 ;
  register int __result___0 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned char const *__s2___0 ;
  register int __result___1 ;
  int tmp___10 ;
  unsigned char const *__s1___0 ;
  register int __result___2 ;
  int tmp___11 ;
  int tmp___12 ;
  int tmp___13 ;
  int tmp___14 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___15 ;
  int tmp___16 ;
  int tmp___17 ;
  unsigned char const *__s2___1 ;
  register int __result___3 ;
  int tmp___18 ;
  unsigned char const *__s1___1 ;
  register int __result___4 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  unsigned char const *__s2___2 ;
  register int __result___5 ;
  int tmp___22 ;
  unsigned char const *__s1___2 ;
  register int __result___6 ;
  int tmp___23 ;
  int tmp___24 ;
  size_t tmp___25 ;
  size_t tmp___26 ;
  size_t ct_len___0 ;
  size_t tmp___27 ;
  size_t tmp___28 ;
  size_t __s1_len___1 ;
  size_t __s2_len___1 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  unsigned char const *__s2___3 ;
  register int __result___7 ;
  int tmp___32 ;
  unsigned char const *__s1___3 ;
  register int __result___8 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  unsigned char const *__s2___4 ;
  register int __result___9 ;
  int tmp___36 ;
  unsigned char const *__s1___4 ;
  register int __result___10 ;
  int tmp___37 ;
  int tmp___38 ;
  int tmp___39 ;
  int tmp___40 ;
  size_t __s1_len___2 ;
  size_t __s2_len___2 ;
  int tmp___41 ;
  int tmp___42 ;
  int tmp___43 ;
  unsigned char const *__s2___5 ;
  register int __result___11 ;
  int tmp___44 ;
  unsigned char const *__s1___5 ;
  register int __result___12 ;
  int tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;
  unsigned char const *__s2___6 ;
  register int __result___13 ;
  int tmp___48 ;
  unsigned char const *__s1___6 ;
  register int __result___14 ;
  int tmp___49 ;
  int tmp___50 ;
  size_t tmp___51 ;
  size_t tmp___52 ;
  size_t tmp___53 ;
  size_t tmp___54 ;
  size_t __s1_len___3 ;
  size_t __s2_len___3 ;
  int tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;
  unsigned char const *__s2___7 ;
  register int __result___15 ;
  int tmp___58 ;
  unsigned char const *__s1___7 ;
  register int __result___16 ;
  int tmp___59 ;
  int tmp___60 ;
  int tmp___61 ;
  unsigned char const *__s2___8 ;
  register int __result___17 ;
  int tmp___62 ;
  unsigned char const *__s1___8 ;
  register int __result___18 ;
  int tmp___63 ;
  int tmp___64 ;
  int tmp___65 ;
  int tmp___66 ;
  size_t __s1_len___4 ;
  size_t __s2_len___4 ;
  int tmp___67 ;
  int tmp___68 ;
  int tmp___69 ;
  unsigned char const *__s2___9 ;
  register int __result___19 ;
  int tmp___70 ;
  unsigned char const *__s1___9 ;
  register int __result___20 ;
  int tmp___71 ;
  int tmp___72 ;
  int tmp___73 ;
  unsigned char const *__s2___10 ;
  register int __result___21 ;
  int tmp___74 ;
  unsigned char const *__s1___10 ;
  register int __result___22 ;
  int tmp___75 ;
  int tmp___76 ;
  size_t tmp___77 ;
  size_t tmp___78 ;
  handler_ctx *hctx ;
  char *pathinfo ;
  void *tmp___79 ;
  char *tmp___80 ;
  handler_ctx *hctx___0 ;

  {
# 3368 "mod_fastcgi.c"
  p = (plugin_data *)p_d;
# 3372 "mod_fastcgi.c"
  extension = (fcgi_extension *)((void *)0);
# 3373 "mod_fastcgi.c"
  host = (fcgi_extension_host *)((void *)0);
# 3376 "mod_fastcgi.c"
  if (con->file_started == 1) {
# 3376 "mod_fastcgi.c"
    return (1);
  }
# 3378 "mod_fastcgi.c"
  if (uri_path_handler) {
# 3378 "mod_fastcgi.c"
    fn = con->uri.path;
  } else {
# 3378 "mod_fastcgi.c"
    fn = con->physical.path;
  }
  {
# 3380 "mod_fastcgi.c"
  tmp = buffer_is_empty(fn);
  }
# 3380 "mod_fastcgi.c"
  if (tmp) {
# 3380 "mod_fastcgi.c"
    return (1);
  }
  {
# 3382 "mod_fastcgi.c"
  s_len = fn->used - 1U;
# 3384 "mod_fastcgi.c"
  fcgi_patch_connection(srv, con, p);
# 3395 "mod_fastcgi.c"
  k = 0U;
  }
# 3395 "mod_fastcgi.c"
  while (k < (p->conf.ext_mapping)->used) {
# 3396 "mod_fastcgi.c"
    ds = (data_string *)*((p->conf.ext_mapping)->data + k);
# 3399 "mod_fastcgi.c"
    if ((ds->key)->used == 0U) {
      goto __Cont;
    }
# 3401 "mod_fastcgi.c"
    ct_len = (ds->key)->used - 1U;
# 3403 "mod_fastcgi.c"
    if (s_len < ct_len) {
      goto __Cont;
    }
# 3406 "mod_fastcgi.c"
    if (0) {
# 3406 "mod_fastcgi.c"
      if (0) {
        {
# 3406 "mod_fastcgi.c"
        __s1_len___0 = strlen((char const *)((fn->ptr + s_len) - ct_len));
# 3406 "mod_fastcgi.c"
        __s2_len___0 = strlen((char const *)(ds->key)->ptr);
        }
# 3406 "mod_fastcgi.c"
        if (! ((unsigned int )((void const *)(((fn->ptr + s_len) - ct_len) + 1)) - (unsigned int )((void const *)((fn->ptr + s_len) - ct_len)) == 1U)) {
          goto _L___2;
        } else {
# 3406 "mod_fastcgi.c"
          if (__s1_len___0 >= 4U) {
            _L___2:
# 3406 "mod_fastcgi.c"
            if (! ((unsigned int )((void const *)((ds->key)->ptr + 1)) - (unsigned int )((void const *)(ds->key)->ptr) == 1U)) {
# 3406 "mod_fastcgi.c"
              tmp___24 = 1;
            } else {
# 3406 "mod_fastcgi.c"
              if (__s2_len___0 >= 4U) {
# 3406 "mod_fastcgi.c"
                tmp___24 = 1;
              } else {
# 3406 "mod_fastcgi.c"
                tmp___24 = 0;
              }
            }
          } else {
# 3406 "mod_fastcgi.c"
            tmp___24 = 0;
          }
        }
# 3406 "mod_fastcgi.c"
        if (tmp___24) {
          {
# 3406 "mod_fastcgi.c"
          tmp___20 = __builtin_strcmp((char const *)((fn->ptr + s_len) - ct_len),
                                      (char const *)(ds->key)->ptr);
          }
        } else {
          {
# 3406 "mod_fastcgi.c"
          tmp___23 = __builtin_strcmp((char const *)((fn->ptr + s_len) - ct_len),
                                      (char const *)(ds->key)->ptr);
# 3406 "mod_fastcgi.c"
          tmp___20 = tmp___23;
          }
        }
      } else {
        {
# 3406 "mod_fastcgi.c"
        tmp___23 = __builtin_strcmp((char const *)((fn->ptr + s_len) - ct_len),
                                    (char const *)(ds->key)->ptr);
# 3406 "mod_fastcgi.c"
        tmp___20 = tmp___23;
        }
      }
# 3406 "mod_fastcgi.c"
      tmp___14 = tmp___20;
    } else {
      {
# 3406 "mod_fastcgi.c"
      tmp___14 = strncmp((char const *)((fn->ptr + s_len) - ct_len), (char const *)(ds->key)->ptr,
                         ct_len);
      }
    }
# 3406 "mod_fastcgi.c"
    if (0 == tmp___14) {
# 3410 "mod_fastcgi.c"
      k = 0U;
# 3410 "mod_fastcgi.c"
      while (k < (p->conf.exts)->used) {
        {
# 3411 "mod_fastcgi.c"
        extension = *((p->conf.exts)->exts + k);
# 3413 "mod_fastcgi.c"
        tmp___0 = buffer_is_equal(ds->value, extension->key);
        }
# 3413 "mod_fastcgi.c"
        if (tmp___0) {
# 3414 "mod_fastcgi.c"
          break;
        }
# 3410 "mod_fastcgi.c"
        k ++;
      }
# 3418 "mod_fastcgi.c"
      if (k == (p->conf.exts)->used) {
# 3420 "mod_fastcgi.c"
        extension = (fcgi_extension *)((void *)0);
      }
# 3422 "mod_fastcgi.c"
      break;
    }
    __Cont:
# 3395 "mod_fastcgi.c"
    k ++;
  }
# 3426 "mod_fastcgi.c"
  if ((unsigned int )extension == (unsigned int )((void *)0)) {
# 3428 "mod_fastcgi.c"
    k = 0U;
# 3428 "mod_fastcgi.c"
    while (k < (p->conf.exts)->used) {
# 3431 "mod_fastcgi.c"
      extension = *((p->conf.exts)->exts + k);
# 3433 "mod_fastcgi.c"
      if ((extension->key)->used == 0U) {
        goto __Cont___0;
      }
# 3435 "mod_fastcgi.c"
      ct_len___0 = (extension->key)->used - 1U;
# 3437 "mod_fastcgi.c"
      if (s_len < ct_len___0) {
        goto __Cont___0;
      }
# 3440 "mod_fastcgi.c"
      if ((int )*((extension->key)->ptr) == 47) {
# 3440 "mod_fastcgi.c"
        if (0) {
# 3440 "mod_fastcgi.c"
          if (0) {
            {
# 3440 "mod_fastcgi.c"
            __s1_len___4 = strlen((char const *)fn->ptr);
# 3440 "mod_fastcgi.c"
            __s2_len___4 = strlen((char const *)(extension->key)->ptr);
            }
# 3440 "mod_fastcgi.c"
            if (! ((unsigned int )((void const *)(fn->ptr + 1)) - (unsigned int )((void const *)fn->ptr) == 1U)) {
              goto _L___10;
            } else {
# 3440 "mod_fastcgi.c"
              if (__s1_len___4 >= 4U) {
                _L___10:
# 3440 "mod_fastcgi.c"
                if (! ((unsigned int )((void const *)((extension->key)->ptr + 1)) - (unsigned int )((void const *)(extension->key)->ptr) == 1U)) {
# 3440 "mod_fastcgi.c"
                  tmp___76 = 1;
                } else {
# 3440 "mod_fastcgi.c"
                  if (__s2_len___4 >= 4U) {
# 3440 "mod_fastcgi.c"
                    tmp___76 = 1;
                  } else {
# 3440 "mod_fastcgi.c"
                    tmp___76 = 0;
                  }
                }
              } else {
# 3440 "mod_fastcgi.c"
                tmp___76 = 0;
              }
            }
# 3440 "mod_fastcgi.c"
            if (tmp___76) {
              {
# 3440 "mod_fastcgi.c"
              tmp___72 = __builtin_strcmp((char const *)fn->ptr, (char const *)(extension->key)->ptr);
              }
            } else {
              {
# 3440 "mod_fastcgi.c"
              tmp___75 = __builtin_strcmp((char const *)fn->ptr, (char const *)(extension->key)->ptr);
# 3440 "mod_fastcgi.c"
              tmp___72 = tmp___75;
              }
            }
          } else {
            {
# 3440 "mod_fastcgi.c"
            tmp___75 = __builtin_strcmp((char const *)fn->ptr, (char const *)(extension->key)->ptr);
# 3440 "mod_fastcgi.c"
            tmp___72 = tmp___75;
            }
          }
# 3440 "mod_fastcgi.c"
          tmp___66 = tmp___72;
        } else {
          {
# 3440 "mod_fastcgi.c"
          tmp___66 = strncmp((char const *)fn->ptr, (char const *)(extension->key)->ptr,
                             ct_len___0);
          }
        }
# 3440 "mod_fastcgi.c"
        if (tmp___66 == 0) {
# 3441 "mod_fastcgi.c"
          break;
        } else {
          goto _L___11;
        }
      } else {
        _L___11:
# 3442 "mod_fastcgi.c"
        if (0) {
# 3442 "mod_fastcgi.c"
          if (0) {
            {
# 3442 "mod_fastcgi.c"
            __s1_len___2 = strlen((char const *)((fn->ptr + s_len) - ct_len___0));
# 3442 "mod_fastcgi.c"
            __s2_len___2 = strlen((char const *)(extension->key)->ptr);
            }
# 3442 "mod_fastcgi.c"
            if (! ((unsigned int )((void const *)(((fn->ptr + s_len) - ct_len___0) + 1)) - (unsigned int )((void const *)((fn->ptr + s_len) - ct_len___0)) == 1U)) {
              goto _L___6;
            } else {
# 3442 "mod_fastcgi.c"
              if (__s1_len___2 >= 4U) {
                _L___6:
# 3442 "mod_fastcgi.c"
                if (! ((unsigned int )((void const *)((extension->key)->ptr + 1)) - (unsigned int )((void const *)(extension->key)->ptr) == 1U)) {
# 3442 "mod_fastcgi.c"
                  tmp___50 = 1;
                } else {
# 3442 "mod_fastcgi.c"
                  if (__s2_len___2 >= 4U) {
# 3442 "mod_fastcgi.c"
                    tmp___50 = 1;
                  } else {
# 3442 "mod_fastcgi.c"
                    tmp___50 = 0;
                  }
                }
              } else {
# 3442 "mod_fastcgi.c"
                tmp___50 = 0;
              }
            }
# 3442 "mod_fastcgi.c"
            if (tmp___50) {
              {
# 3442 "mod_fastcgi.c"
              tmp___46 = __builtin_strcmp((char const *)((fn->ptr + s_len) - ct_len___0),
                                          (char const *)(extension->key)->ptr);
              }
            } else {
              {
# 3442 "mod_fastcgi.c"
              tmp___49 = __builtin_strcmp((char const *)((fn->ptr + s_len) - ct_len___0),
                                          (char const *)(extension->key)->ptr);
# 3442 "mod_fastcgi.c"
              tmp___46 = tmp___49;
              }
            }
          } else {
            {
# 3442 "mod_fastcgi.c"
            tmp___49 = __builtin_strcmp((char const *)((fn->ptr + s_len) - ct_len___0),
                                        (char const *)(extension->key)->ptr);
# 3442 "mod_fastcgi.c"
            tmp___46 = tmp___49;
            }
          }
# 3442 "mod_fastcgi.c"
          tmp___40 = tmp___46;
        } else {
          {
# 3442 "mod_fastcgi.c"
          tmp___40 = strncmp((char const *)((fn->ptr + s_len) - ct_len___0), (char const *)(extension->key)->ptr,
                             ct_len___0);
          }
        }
# 3442 "mod_fastcgi.c"
        if (0 == tmp___40) {
# 3444 "mod_fastcgi.c"
          break;
        }
      }
      __Cont___0:
# 3428 "mod_fastcgi.c"
      k ++;
    }
# 3448 "mod_fastcgi.c"
    if (k == (p->conf.exts)->used) {
# 3449 "mod_fastcgi.c"
      return (1);
    }
  }
# 3454 "mod_fastcgi.c"
  k = 0U;
# 3454 "mod_fastcgi.c"
  while (k < extension->used) {
# 3455 "mod_fastcgi.c"
    host = *(extension->hosts + k);
# 3458 "mod_fastcgi.c"
    if (host->active_procs == 0U) {
# 3459 "mod_fastcgi.c"
      host = (fcgi_extension_host *)((void *)0);
      goto __Cont___1;
    }
# 3465 "mod_fastcgi.c"
    break;
    __Cont___1:
# 3454 "mod_fastcgi.c"
    k ++;
  }
# 3468 "mod_fastcgi.c"
  if (! host) {
    {
# 3470 "mod_fastcgi.c"
    buffer_reset(con->physical.path);
# 3471 "mod_fastcgi.c"
    con->http_status = 500;
    }
# 3474 "mod_fastcgi.c"
    if (! extension->note_is_sent) {
      {
# 3475 "mod_fastcgi.c"
      extension->note_is_sent = 1;
# 3477 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 3477U, "sbsbs", "all handlers for ", con->uri.path,
                      "on", extension->key, "are down.");
      }
    }
# 3483 "mod_fastcgi.c"
    return (2);
  }
# 3487 "mod_fastcgi.c"
  extension->note_is_sent = 0;
# 3495 "mod_fastcgi.c"
  if (uri_path_handler) {
# 3496 "mod_fastcgi.c"
    if ((int )host->check_local == 0) {
      {
# 3500 "mod_fastcgi.c"
      hctx = handler_ctx_init();
# 3502 "mod_fastcgi.c"
      hctx->remote_conn = con;
# 3503 "mod_fastcgi.c"
      hctx->plugin_data = p;
# 3504 "mod_fastcgi.c"
      hctx->proc = (fcgi_proc *)((void *)0);
# 3505 "mod_fastcgi.c"
      hctx->ext = extension;
# 3508 "mod_fastcgi.c"
      hctx->conf.exts = p->conf.exts;
# 3509 "mod_fastcgi.c"
      hctx->conf.debug = p->conf.debug;
# 3511 "mod_fastcgi.c"
      *(con->plugin_ctx + p->id) = (void *)hctx;
# 3513 "mod_fastcgi.c"
      con->mode = (enum __anonenum_connection_type_90 )p->id;
      }
# 3515 "mod_fastcgi.c"
      if (con->conf.log_request_handling) {
        {
# 3516 "mod_fastcgi.c"
        log_error_write(srv, "mod_fastcgi.c", 3516U, "s", "handling it in mod_fastcgi");
        }
      }
# 3541 "mod_fastcgi.c"
      if ((int )*((extension->key)->ptr + 0) == 47) {
# 3541 "mod_fastcgi.c"
        if ((con->uri.path)->used > (extension->key)->used) {
          {
# 3541 "mod_fastcgi.c"
          tmp___80 = __builtin_strchr(((con->uri.path)->ptr + (extension->key)->used) - 1,
                                      '/');
# 3541 "mod_fastcgi.c"
          pathinfo = tmp___80;
          }
# 3541 "mod_fastcgi.c"
          if ((unsigned int )((void *)0) != (unsigned int )pathinfo) {
            {
# 3546 "mod_fastcgi.c"
            buffer_copy_string(con->request.pathinfo, (char const *)pathinfo);
# 3548 "mod_fastcgi.c"
            (con->uri.path)->used -= (con->request.pathinfo)->used - 1U;
# 3549 "mod_fastcgi.c"
            *((con->uri.path)->ptr + ((con->uri.path)->used - 1U)) = (char )'\000';
            }
          }
        }
      }
    }
  } else {
    {
# 3554 "mod_fastcgi.c"
    hctx___0 = handler_ctx_init();
# 3556 "mod_fastcgi.c"
    hctx___0->remote_conn = con;
# 3557 "mod_fastcgi.c"
    hctx___0->plugin_data = p;
# 3558 "mod_fastcgi.c"
    hctx___0->proc = (fcgi_proc *)((void *)0);
# 3559 "mod_fastcgi.c"
    hctx___0->ext = extension;
# 3561 "mod_fastcgi.c"
    hctx___0->conf.exts = p->conf.exts;
# 3562 "mod_fastcgi.c"
    hctx___0->conf.debug = p->conf.debug;
# 3564 "mod_fastcgi.c"
    *(con->plugin_ctx + p->id) = (void *)hctx___0;
# 3566 "mod_fastcgi.c"
    con->mode = (enum __anonenum_connection_type_90 )p->id;
    }
# 3568 "mod_fastcgi.c"
    if (con->conf.log_request_handling) {
      {
# 3569 "mod_fastcgi.c"
      log_error_write(srv, "mod_fastcgi.c", 3569U, "s", "handling it in mod_fastcgi");
      }
    }
  }
# 3573 "mod_fastcgi.c"
  return (1);
}
}
# 3577 "mod_fastcgi.c"
static handler_t fcgi_check_extension_1(server *srv , connection *con , void *p_d )
{ handler_t tmp ;

  {
  {
# 3578 "mod_fastcgi.c"
  tmp = fcgi_check_extension(srv, con, p_d, 1);
  }
# 3578 "mod_fastcgi.c"
  return (tmp);
}
}
# 3582 "mod_fastcgi.c"
static handler_t fcgi_check_extension_2(server *srv , connection *con , void *p_d )
{ handler_t tmp ;

  {
  {
# 3583 "mod_fastcgi.c"
  tmp = fcgi_check_extension(srv, con, p_d, 0);
  }
# 3583 "mod_fastcgi.c"
  return (tmp);
}
}
# 3586 "mod_fastcgi.c"
static handler_t mod_fastcgi_handle_joblist(server *srv , connection *con , void *p_d )
{ plugin_data *p ;
  handler_ctx *hctx ;

  {
# 3587 "mod_fastcgi.c"
  p = (plugin_data *)p_d;
# 3588 "mod_fastcgi.c"
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
# 3590 "mod_fastcgi.c"
  if ((unsigned int )hctx == (unsigned int )((void *)0)) {
# 3590 "mod_fastcgi.c"
    return (1);
  }
# 3592 "mod_fastcgi.c"
  if (hctx->fd != -1) {
# 3593 "mod_fastcgi.c"
    switch ((int )hctx->state) {
    case 5:
    {
# 3595 "mod_fastcgi.c"
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1);
    }
# 3597 "mod_fastcgi.c"
    break;
    case 2:
    case 4:
    {
# 3600 "mod_fastcgi.c"
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    }
# 3602 "mod_fastcgi.c"
    break;
    case 1:
# 3605 "mod_fastcgi.c"
    break;
    default:
    {
# 3607 "mod_fastcgi.c"
    log_error_write(srv, "mod_fastcgi.c", 3607U, "sd", "unhandled fcgi.state", hctx->state);
    }
# 3608 "mod_fastcgi.c"
    break;
    }
  }
# 3612 "mod_fastcgi.c"
  return (1);
}
}
# 3616 "mod_fastcgi.c"
static handler_t fcgi_connection_close_callback(server *srv , connection *con , void *p_d )
{ plugin_data *p ;

  {
  {
# 3617 "mod_fastcgi.c"
  p = (plugin_data *)p_d;
# 3619 "mod_fastcgi.c"
  fcgi_connection_close(srv, (handler_ctx *)*(con->plugin_ctx + p->id));
  }
# 3621 "mod_fastcgi.c"
  return (1);
}
}
# 3624 "mod_fastcgi.c"
static handler_t mod_fastcgi_handle_trigger(server *srv , void *p_d )
{ plugin_data *p ;
  size_t i ;
  size_t j ;
  size_t n ;
  plugin_config *conf ;
  fcgi_exts *exts ;
  fcgi_extension *ex ;
  fcgi_proc *proc ;
  unsigned long sum_load ;
  fcgi_extension_host *host ;
  size_t tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int status ;
  __pid_t tmp___2 ;
  int *tmp___3 ;
  char *tmp___4 ;
  int *tmp___5 ;
  union __anonunion_163 __constr_expr_0 ;
  union __anonunion_164 __constr_expr_1 ;
  union __anonunion_165 __constr_expr_2 ;
  union __anonunion_166 __constr_expr_3 ;
  union __anonunion_167 __constr_expr_4 ;

  {
# 3625 "mod_fastcgi.c"
  p = (plugin_data *)p_d;
# 3639 "mod_fastcgi.c"
  i = 0U;
# 3639 "mod_fastcgi.c"
  while (i < (srv->config_context)->used) {
# 3643 "mod_fastcgi.c"
    conf = *(p->config_storage + i);
# 3645 "mod_fastcgi.c"
    exts = conf->exts;
# 3647 "mod_fastcgi.c"
    j = 0U;
# 3647 "mod_fastcgi.c"
    while (j < exts->used) {
# 3650 "mod_fastcgi.c"
      ex = *(exts->exts + j);
# 3652 "mod_fastcgi.c"
      n = 0U;
# 3652 "mod_fastcgi.c"
      while (n < ex->used) {
        {
# 3655 "mod_fastcgi.c"
        sum_load = 0UL;
# 3658 "mod_fastcgi.c"
        host = *(ex->hosts + n);
# 3660 "mod_fastcgi.c"
        fcgi_restart_dead_procs(srv, p, host);
# 3662 "mod_fastcgi.c"
        proc = host->first;
        }
# 3662 "mod_fastcgi.c"
        while (proc) {
# 3663 "mod_fastcgi.c"
          sum_load += (unsigned long )proc->load;
# 3662 "mod_fastcgi.c"
          proc = proc->next;
        }
# 3666 "mod_fastcgi.c"
        if (host->num_procs) {
# 3666 "mod_fastcgi.c"
          if (host->num_procs < (size_t )host->max_procs) {
# 3666 "mod_fastcgi.c"
            if (sum_load / (unsigned long )host->num_procs > (unsigned long )host->max_load_per_proc) {
# 3670 "mod_fastcgi.c"
              if (p->conf.debug) {
                {
# 3671 "mod_fastcgi.c"
                log_error_write(srv, "mod_fastcgi.c", 3671U, "s", "overload detected, spawning a new child");
                }
              }
# 3675 "mod_fastcgi.c"
              proc = host->unused_procs;
# 3675 "mod_fastcgi.c"
              while (1) {
# 3675 "mod_fastcgi.c"
                if (proc) {
# 3675 "mod_fastcgi.c"
                  if (! (proc->pid != 0)) {
# 3675 "mod_fastcgi.c"
                    break;
                  }
                } else {
# 3675 "mod_fastcgi.c"
                  break;
                }
# 3675 "mod_fastcgi.c"
                proc = proc->next;
              }
# 3677 "mod_fastcgi.c"
              if (proc) {
# 3678 "mod_fastcgi.c"
                if ((unsigned int )proc == (unsigned int )host->unused_procs) {
# 3678 "mod_fastcgi.c"
                  host->unused_procs = proc->next;
                }
# 3680 "mod_fastcgi.c"
                if (proc->next) {
# 3680 "mod_fastcgi.c"
                  (proc->next)->prev = (struct fcgi_proc *)((void *)0);
                }
# 3682 "mod_fastcgi.c"
                (host->max_id) ++;
              } else {
                {
# 3684 "mod_fastcgi.c"
                proc = fastcgi_process_init();
# 3685 "mod_fastcgi.c"
                tmp = host->max_id;
# 3685 "mod_fastcgi.c"
                (host->max_id) ++;
# 3685 "mod_fastcgi.c"
                proc->id = tmp;
                }
              }
              {
# 3688 "mod_fastcgi.c"
              (host->num_procs) ++;
# 3690 "mod_fastcgi.c"
              tmp___0 = buffer_is_empty(host->unixsocket);
              }
# 3690 "mod_fastcgi.c"
              if (tmp___0) {
# 3691 "mod_fastcgi.c"
                proc->port = (size_t )host->port + proc->id;
              } else {
                {
# 3693 "mod_fastcgi.c"
                buffer_copy_string_buffer(proc->unixsocket, (buffer const *)host->unixsocket);
# 3694 "mod_fastcgi.c"
                buffer_append_string(proc->unixsocket, "-");
# 3695 "mod_fastcgi.c"
                buffer_append_long(proc->unixsocket, (long )proc->id);
                }
              }
              {
# 3698 "mod_fastcgi.c"
              tmp___1 = fcgi_spawn_connection(srv, p, host, proc);
              }
# 3698 "mod_fastcgi.c"
              if (tmp___1) {
                {
# 3699 "mod_fastcgi.c"
                log_error_write(srv, "mod_fastcgi.c", 3699U, "s", "ERROR: spawning fcgi failed.");
                }
# 3701 "mod_fastcgi.c"
                return (5);
              }
# 3704 "mod_fastcgi.c"
              proc->prev = (struct fcgi_proc *)((void *)0);
# 3705 "mod_fastcgi.c"
              proc->next = host->first;
# 3706 "mod_fastcgi.c"
              if (host->first) {
# 3707 "mod_fastcgi.c"
                (host->first)->prev = proc;
              }
# 3709 "mod_fastcgi.c"
              host->first = proc;
            }
          }
        }
# 3712 "mod_fastcgi.c"
        proc = host->first;
# 3712 "mod_fastcgi.c"
        while (proc) {
# 3713 "mod_fastcgi.c"
          if (proc->load != 0U) {
# 3713 "mod_fastcgi.c"
            break;
          }
# 3714 "mod_fastcgi.c"
          if (host->num_procs <= (size_t )host->min_procs) {
# 3714 "mod_fastcgi.c"
            break;
          }
# 3715 "mod_fastcgi.c"
          if (proc->pid == 0) {
            goto __Cont;
          }
# 3717 "mod_fastcgi.c"
          if (srv->cur_ts - proc->last_used > (time_t )host->idle_timeout) {
# 3721 "mod_fastcgi.c"
            if (p->conf.debug) {
              {
# 3722 "mod_fastcgi.c"
              log_error_write(srv, "mod_fastcgi.c", 3722U, "ssbsd", "idle-timeout reached; terminating child:",
                              "socket:", proc->connection_name, "pid", proc->pid);
              }
            }
# 3729 "mod_fastcgi.c"
            if (proc->next) {
# 3729 "mod_fastcgi.c"
              (proc->next)->prev = proc->prev;
            }
# 3730 "mod_fastcgi.c"
            if (proc->prev) {
# 3730 "mod_fastcgi.c"
              (proc->prev)->next = proc->next;
            }
# 3732 "mod_fastcgi.c"
            if ((unsigned int )proc->prev == (unsigned int )((void *)0)) {
# 3732 "mod_fastcgi.c"
              host->first = proc->next;
            }
# 3734 "mod_fastcgi.c"
            proc->prev = (struct fcgi_proc *)((void *)0);
# 3735 "mod_fastcgi.c"
            proc->next = host->unused_procs;
# 3737 "mod_fastcgi.c"
            if (host->unused_procs) {
# 3737 "mod_fastcgi.c"
              (host->unused_procs)->prev = proc;
            }
            {
# 3738 "mod_fastcgi.c"
            host->unused_procs = proc;
# 3740 "mod_fastcgi.c"
            kill(proc->pid, 15);
# 3742 "mod_fastcgi.c"
            proc->state = 5;
# 3744 "mod_fastcgi.c"
            log_error_write(srv, "mod_fastcgi.c", 3744U, "ssbsd", "killed:", "socket:",
                            proc->connection_name, "pid", proc->pid);
# 3749 "mod_fastcgi.c"
            (host->num_procs) --;
            }
# 3752 "mod_fastcgi.c"
            break;
          }
          __Cont:
# 3712 "mod_fastcgi.c"
          proc = proc->next;
        }
# 3756 "mod_fastcgi.c"
        proc = host->unused_procs;
# 3756 "mod_fastcgi.c"
        while (proc) {
# 3759 "mod_fastcgi.c"
          if (proc->pid == 0) {
            goto __Cont___0;
          }
          {
# 3761 "mod_fastcgi.c"
          tmp___2 = waitpid(proc->pid, & status, 1);
          }
# 3761 "mod_fastcgi.c"
          switch (tmp___2) {
          case 0:
# 3764 "mod_fastcgi.c"
          break;
          case -1:
          {
# 3766 "mod_fastcgi.c"
          tmp___5 = __errno_location();
          }
# 3766 "mod_fastcgi.c"
          if (*tmp___5 != 4) {
            {
# 3768 "mod_fastcgi.c"
            tmp___3 = __errno_location();
# 3768 "mod_fastcgi.c"
            tmp___4 = strerror(*tmp___3);
# 3768 "mod_fastcgi.c"
            log_error_write(srv, "mod_fastcgi.c", 3768U, "sddss", "pid ", proc->pid,
                            proc->state, "not found:", tmp___4);
            }
          }
# 3780 "mod_fastcgi.c"
          break;
          default:
# 3783 "mod_fastcgi.c"
          __constr_expr_4.__in = status;
# 3783 "mod_fastcgi.c"
          if ((__constr_expr_4.__i & 127) == 0) {
# 3784 "mod_fastcgi.c"
            if ((int )proc->state != 5) {
              {
# 3785 "mod_fastcgi.c"
              __constr_expr_0.__in = status;
# 3785 "mod_fastcgi.c"
              log_error_write(srv, "mod_fastcgi.c", 3785U, "sdb", "child exited:",
                              (__constr_expr_0.__i & 65280) >> 8, proc->connection_name);
              }
            }
          } else {
# 3789 "mod_fastcgi.c"
            __constr_expr_3.__in = status;
# 3789 "mod_fastcgi.c"
            if ((int )((signed char )((__constr_expr_3.__i & 127) + 1)) >> 1 > 0) {
# 3790 "mod_fastcgi.c"
              __constr_expr_2.__in = status;
# 3790 "mod_fastcgi.c"
              if ((__constr_expr_2.__i & 127) != 15) {
                {
# 3791 "mod_fastcgi.c"
                __constr_expr_1.__in = status;
# 3791 "mod_fastcgi.c"
                log_error_write(srv, "mod_fastcgi.c", 3791U, "sd", "child signaled:",
                                __constr_expr_1.__i & 127);
                }
              }
            } else {
              {
# 3796 "mod_fastcgi.c"
              log_error_write(srv, "mod_fastcgi.c", 3796U, "sd", "child died somehow:",
                              status);
              }
            }
          }
# 3800 "mod_fastcgi.c"
          proc->pid = 0;
# 3801 "mod_fastcgi.c"
          proc->state = 0;
# 3802 "mod_fastcgi.c"
          (host->max_id) --;
          }
          __Cont___0:
# 3756 "mod_fastcgi.c"
          proc = proc->next;
        }
# 3652 "mod_fastcgi.c"
        n ++;
      }
# 3647 "mod_fastcgi.c"
      j ++;
    }
# 3639 "mod_fastcgi.c"
    i ++;
  }
# 3809 "mod_fastcgi.c"
  return (1);
}
}
# 3813 "mod_fastcgi.c"
int mod_fastcgi_plugin_init(plugin *p )
{

  {
  {
# 3814 "mod_fastcgi.c"
  p->version = (unsigned int )(((1 << 16) | (4 << 8)) | 17);
# 3815 "mod_fastcgi.c"
  p->name = buffer_init_string("fastcgi");
# 3817 "mod_fastcgi.c"
  p->init = & mod_fastcgi_init;
# 3818 "mod_fastcgi.c"
  p->cleanup = & mod_fastcgi_free;
# 3819 "mod_fastcgi.c"
  p->set_defaults = & mod_fastcgi_set_defaults;
# 3820 "mod_fastcgi.c"
  p->connection_reset = & fcgi_connection_reset;
# 3821 "mod_fastcgi.c"
  p->handle_connection_close = & fcgi_connection_close_callback;
# 3822 "mod_fastcgi.c"
  p->handle_uri_clean = & fcgi_check_extension_1;
# 3823 "mod_fastcgi.c"
  p->handle_subrequest_start = & fcgi_check_extension_2;
# 3824 "mod_fastcgi.c"
  p->handle_subrequest = & mod_fastcgi_handle_subrequest;
# 3825 "mod_fastcgi.c"
  p->handle_joblist = & mod_fastcgi_handle_joblist;
# 3826 "mod_fastcgi.c"
  p->handle_trigger = & mod_fastcgi_handle_trigger;
# 3828 "mod_fastcgi.c"
  p->data = (void *)0;
  }
# 3830 "mod_fastcgi.c"
  return (0);
}
}
