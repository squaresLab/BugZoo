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

typedef __u_char u_char;

typedef __u_short u_short;

typedef __u_int u_int;

typedef __u_long u_long;

typedef __quad_t quad_t;

typedef __u_quad_t u_quad_t;

typedef __fsid_t fsid_t;

typedef __loff_t loff_t;

typedef __ino64_t ino_t;

typedef __dev_t dev_t;

typedef __gid_t gid_t;

typedef __mode_t mode_t;

typedef __nlink_t nlink_t;

typedef __uid_t uid_t;

typedef __off64_t off_t;

typedef __pid_t pid_t;

typedef __id_t id_t;

typedef __ssize_t ssize_t;

typedef __daddr_t daddr_t;

typedef __caddr_t caddr_t;

typedef __key_t key_t;

typedef __time_t time_t;

typedef __clockid_t clockid_t;

typedef __timer_t timer_t;

typedef unsigned long ulong;

typedef unsigned short ushort;

typedef unsigned int uint;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char u_int8_t;

typedef unsigned short u_int16_t;

typedef unsigned int u_int32_t;

typedef unsigned long long u_int64_t;

typedef int register_t;

typedef int __sig_atomic_t;

struct __anonstruct___sigset_t_2 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};

typedef struct __anonstruct___sigset_t_2 __sigset_t;

typedef __sigset_t sigset_t;

struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};

struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};

typedef __suseconds_t suseconds_t;

typedef long __fd_mask;

struct __anonstruct_fd_set_3 {
   __fd_mask __fds_bits[1024U / (8U * sizeof(__fd_mask ))] ;
};

typedef struct __anonstruct_fd_set_3 fd_set;

typedef __fd_mask fd_mask;

typedef __blkcnt64_t blkcnt_t;

typedef __fsblkcnt64_t fsblkcnt_t;

typedef __fsfilcnt64_t fsfilcnt_t;

typedef unsigned long pthread_t;

union __anonunion_pthread_attr_t_4 {
   char __size[36] ;
   long __align ;
};

typedef union __anonunion_pthread_attr_t_4 pthread_attr_t;

struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};

typedef struct __pthread_internal_slist __pthread_slist_t;

union __anonunion____missing_field_name_6 {
   int __spins ;
   __pthread_slist_t __list ;
};

struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_6 __annonCompField1 ;
};

union __anonunion_pthread_mutex_t_5 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};

typedef union __anonunion_pthread_mutex_t_5 pthread_mutex_t;

union __anonunion_pthread_mutexattr_t_7 {
   char __size[4] ;
   long __align ;
};

typedef union __anonunion_pthread_mutexattr_t_7 pthread_mutexattr_t;

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

union __anonunion_pthread_cond_t_8 {
   struct __anonstruct___data_9 __data ;
   char __size[48] ;
   long long __align ;
};

typedef union __anonunion_pthread_cond_t_8 pthread_cond_t;

union __anonunion_pthread_condattr_t_10 {
   char __size[4] ;
   long __align ;
};

typedef union __anonunion_pthread_condattr_t_10 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

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

union __anonunion_pthread_rwlock_t_11 {
   struct __anonstruct___data_12 __data ;
   char __size[32] ;
   long __align ;
};

typedef union __anonunion_pthread_rwlock_t_11 pthread_rwlock_t;

union __anonunion_pthread_rwlockattr_t_13 {
   char __size[8] ;
   long __align ;
};

typedef union __anonunion_pthread_rwlockattr_t_13 pthread_rwlockattr_t;

typedef int volatile   pthread_spinlock_t;

union __anonunion_pthread_barrier_t_14 {
   char __size[20] ;
   long __align ;
};

typedef union __anonunion_pthread_barrier_t_14 pthread_barrier_t;

union __anonunion_pthread_barrierattr_t_15 {
   char __size[4] ;
   int __align ;
};

typedef union __anonunion_pthread_barrierattr_t_15 pthread_barrierattr_t;

typedef __useconds_t useconds_t;

typedef __intptr_t intptr_t;

typedef __socklen_t socklen_t;

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

struct flock {
   short l_type ;
   short l_whence ;
   __off64_t l_start ;
   __off64_t l_len ;
   __pid_t l_pid ;
};

typedef long wchar_t;

struct __anonstruct_div_t_19 {
   int quot ;
   int rem ;
};

typedef struct __anonstruct_div_t_19 div_t;

struct __anonstruct_ldiv_t_20 {
   long quot ;
   long rem ;
};

typedef struct __anonstruct_ldiv_t_20 ldiv_t;

struct __anonstruct_lldiv_t_21 {
   long long quot ;
   long long rem ;
};

typedef struct __anonstruct_lldiv_t_21 lldiv_t;

struct random_data {
   int32_t *fptr ;
   int32_t *rptr ;
   int32_t *state ;
   int rand_type ;
   int rand_deg ;
   int rand_sep ;
   int32_t *end_ptr ;
};

struct drand48_data {
   unsigned short __x[3] ;
   unsigned short __old_x[3] ;
   unsigned short __c ;
   unsigned short __init ;
   unsigned long long __a ;
};

typedef int (*__compar_fn_t)(void const   * , void const   * );

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

typedef __sig_atomic_t sig_atomic_t;

typedef void (*__sighandler_t)(int  );

typedef void (*sig_t)(int  );

union sigval {
   int sival_int ;
   void *sival_ptr ;
};

typedef union sigval sigval_t;

struct __anonstruct__kill_24 {
   __pid_t si_pid ;
   __uid_t si_uid ;
};

struct __anonstruct__timer_25 {
   int si_tid ;
   int si_overrun ;
   sigval_t si_sigval ;
};

struct __anonstruct__rt_26 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   sigval_t si_sigval ;
};

struct __anonstruct__sigchld_27 {
   __pid_t si_pid ;
   __uid_t si_uid ;
   int si_status ;
   __clock_t si_utime ;
   __clock_t si_stime ;
};

struct __anonstruct__sigfault_28 {
   void *si_addr ;
};

struct __anonstruct__sigpoll_29 {
   long si_band ;
   int si_fd ;
};

union __anonunion__sifields_23 {
   int _pad[128U / sizeof(int ) - 3U] ;
   struct __anonstruct__kill_24 _kill ;
   struct __anonstruct__timer_25 _timer ;
   struct __anonstruct__rt_26 _rt ;
   struct __anonstruct__sigchld_27 _sigchld ;
   struct __anonstruct__sigfault_28 _sigfault ;
   struct __anonstruct__sigpoll_29 _sigpoll ;
};

struct siginfo {
   int si_signo ;
   int si_errno ;
   int si_code ;
   union __anonunion__sifields_23 _sifields ;
};

typedef struct siginfo siginfo_t;

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

enum __anonenum_33 {
    SEGV_MAPERR = 1,
    SEGV_ACCERR = 2
} ;

enum __anonenum_34 {
    BUS_ADRALN = 1,
    BUS_ADRERR = 2,
    BUS_OBJERR = 3
} ;

enum __anonenum_35 {
    TRAP_BRKPT = 1,
    TRAP_TRACE = 2
} ;

enum __anonenum_36 {
    CLD_EXITED = 1,
    CLD_KILLED = 2,
    CLD_DUMPED = 3,
    CLD_TRAPPED = 4,
    CLD_STOPPED = 5,
    CLD_CONTINUED = 6
} ;

enum __anonenum_37 {
    POLL_IN = 1,
    POLL_OUT = 2,
    POLL_MSG = 3,
    POLL_ERR = 4,
    POLL_PRI = 5,
    POLL_HUP = 6
} ;

struct __anonstruct__sigev_thread_39 {
   void (*_function)(sigval_t  ) ;
   void *_attribute ;
};

union __anonunion__sigev_un_38 {
   int _pad[64U / sizeof(int ) - 3U] ;
   __pid_t _tid ;
   struct __anonstruct__sigev_thread_39 _sigev_thread ;
};

struct sigevent {
   sigval_t sigev_value ;
   int sigev_signo ;
   int sigev_notify ;
   union __anonunion__sigev_un_38 _sigev_un ;
};

typedef struct sigevent sigevent_t;

enum __anonenum_40 {
    SIGEV_SIGNAL = 0,
    SIGEV_NONE = 1,
    SIGEV_THREAD = 2,
    SIGEV_THREAD_ID = 4
} ;

union __anonunion___sigaction_handler_41 {
   void (*sa_handler)(int  ) ;
   void (*sa_sigaction)(int  , siginfo_t * , void * ) ;
};

struct sigaction {
   union __anonunion___sigaction_handler_41 __sigaction_handler ;
   __sigset_t sa_mask ;
   int sa_flags ;
   void (*sa_restorer)(void) ;
};

struct sigvec {
   void (*sv_handler)(int  ) ;
   int sv_mask ;
   int sv_flags ;
};

struct _fpreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
};

struct _fpxreg {
   unsigned short significand[4] ;
   unsigned short exponent ;
   unsigned short padding[3] ;
};

struct _xmmreg {
   unsigned long element[4] ;
};

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

struct sigstack {
   void *ss_sp ;
   int ss_onstack ;
};

enum __anonenum_42 {
    SS_ONSTACK = 1,
    SS_DISABLE = 2
} ;

struct sigaltstack {
   void *ss_sp ;
   int ss_flags ;
   size_t ss_size ;
};

typedef struct sigaltstack stack_t;

enum __anonenum_handler_t_43 {
    HANDLER_UNSET = 0,
    HANDLER_GO_ON = 1,
    HANDLER_FINISHED = 2,
    HANDLER_COMEBACK = 3,
    HANDLER_WAIT_FOR_EVENT = 4,
    HANDLER_ERROR = 5,
    HANDLER_WAIT_FOR_FD = 6
} ;

typedef enum __anonenum_handler_t_43 handler_t;

struct __anonstruct_buffer_44 {
   char *ptr ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_buffer_44 buffer;

struct __anonstruct_buffer_array_45 {
   buffer **ptr ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_buffer_array_45 buffer_array;

struct __anonstruct_read_buffer_46 {
   char *ptr ;
   size_t offset ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_read_buffer_46 read_buffer;

enum __anonenum_buffer_encoding_t_47 {
    ENCODING_UNSET = 0,
    ENCODING_REL_URI = 1,
    ENCODING_REL_URI_PART = 2,
    ENCODING_HTML = 3,
    ENCODING_MINIMAL_XML = 4,
    ENCODING_HEX = 5,
    ENCODING_HTTP_HEADER = 6
} ;

typedef enum __anonenum_buffer_encoding_t_47 buffer_encoding_t;

struct timezone {
   int tz_minuteswest ;
   int tz_dsttime ;
};

typedef struct timezone * __restrict  __timezone_ptr_t;

enum __itimer_which {
    ITIMER_REAL = 0,
    ITIMER_VIRTUAL = 1,
    ITIMER_PROF = 2
} ;

struct itimerval {
   struct timeval it_interval ;
   struct timeval it_value ;
};

typedef int __itimer_which_t;

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

typedef unsigned char uint8_t;

typedef unsigned short uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long long uint64_t;

typedef signed char int_least8_t;

typedef short int_least16_t;

typedef int int_least32_t;

typedef long long int_least64_t;

typedef unsigned char uint_least8_t;

typedef unsigned short uint_least16_t;

typedef unsigned int uint_least32_t;

typedef unsigned long long uint_least64_t;

typedef signed char int_fast8_t;

typedef int int_fast16_t;

typedef int int_fast32_t;

typedef long long int_fast64_t;

typedef unsigned char uint_fast8_t;

typedef unsigned int uint_fast16_t;

typedef unsigned int uint_fast32_t;

typedef unsigned long long uint_fast64_t;

typedef unsigned int uintptr_t;

typedef long long intmax_t;

typedef unsigned long long uintmax_t;

typedef long __gwchar_t;

struct __anonstruct_imaxdiv_t_48 {
   long long quot ;
   long long rem ;
};

typedef struct __anonstruct_imaxdiv_t_48 imaxdiv_t;

struct real_pcre;

struct real_pcre;

struct real_pcre;

typedef struct real_pcre pcre;

struct pcre_extra {
   unsigned long flags ;
   void *study_data ;
   unsigned long match_limit ;
   void *callout_data ;
   unsigned char const   *tables ;
   unsigned long match_limit_recursion ;
};

typedef struct pcre_extra pcre_extra;

struct pcre_callout_block {
   int version ;
   int callout_number ;
   int *offset_vector ;
   char const   *subject ;
   int subject_length ;
   int start_match ;
   int current_position ;
   int capture_top ;
   int capture_last ;
   void *callout_data ;
   int pattern_position ;
   int next_item_length ;
};

typedef struct pcre_callout_block pcre_callout_block;

enum __anonenum_data_type_t_49 {
    TYPE_UNSET = 0,
    TYPE_STRING = 1,
    TYPE_COUNT = 2,
    TYPE_ARRAY = 3,
    TYPE_INTEGER = 4,
    TYPE_FASTCGI = 5,
    TYPE_CONFIG = 6
} ;

typedef enum __anonenum_data_type_t_49 data_type_t;

struct data_unset {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
};

typedef struct data_unset data_unset;

struct __anonstruct_array_50 {
   data_unset **data ;
   size_t *sorted ;
   size_t used ;
   size_t size ;
   size_t unique_ndx ;
   size_t next_power_of_2 ;
   int is_weakref ;
};

typedef struct __anonstruct_array_50 array;

struct __anonstruct_data_count_51 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   int count ;
};

typedef struct __anonstruct_data_count_51 data_count;

struct __anonstruct_data_string_52 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   buffer *value ;
};

typedef struct __anonstruct_data_string_52 data_string;

struct __anonstruct_data_array_53 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   array *value ;
};

typedef struct __anonstruct_data_array_53 data_array;

enum __anonenum_config_cond_t_54 {
    CONFIG_COND_UNSET = 0,
    CONFIG_COND_EQ = 1,
    CONFIG_COND_MATCH = 2,
    CONFIG_COND_NE = 3,
    CONFIG_COND_NOMATCH = 4
} ;

typedef enum __anonenum_config_cond_t_54 config_cond_t;

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

typedef enum __anonenum_comp_key_t_55 comp_key_t;

struct _data_config;

struct _data_config;

typedef struct _data_config data_config;

struct _data_config {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
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

struct __anonstruct_data_integer_56 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   int value ;
};

typedef struct __anonstruct_data_integer_56 data_integer;

struct __anonstruct_data_fastcgi_57 {
   data_type_t type ;
   buffer *key ;
   int is_index_key ;
   struct data_unset *(*copy)(struct data_unset  const  *src ) ;
   void (*free)(struct data_unset *p ) ;
   void (*reset)(struct data_unset *p ) ;
   int (*insert_dup)(struct data_unset *dst , struct data_unset *src ) ;
   void (*print)(struct data_unset  const  *p , int depth ) ;
   buffer *host ;
   unsigned short port ;
   time_t disable_ts ;
   int is_disabled ;
   size_t balance ;
   int usage ;
   int last_used_ndx ;
};

typedef struct __anonstruct_data_fastcgi_57 data_fastcgi;

enum __anonenum_type_58 {
    UNUSED_CHUNK = 0,
    MEM_CHUNK = 1,
    FILE_CHUNK = 2
} ;

struct __anonstruct_mmap_60 {
   char *start ;
   size_t length ;
   off_t offset ;
};

struct __anonstruct_file_59 {
   buffer *name ;
   off_t start ;
   off_t length ;
   int fd ;
   struct __anonstruct_mmap_60 mmap ;
   int is_temp ;
};

struct chunk {
   enum __anonenum_type_58 type ;
   buffer *mem ;
   struct __anonstruct_file_59 file ;
   off_t offset ;
   struct chunk *next ;
};

typedef struct chunk chunk;

struct __anonstruct_chunkqueue_61 {
   chunk *first ;
   chunk *last ;
   chunk *unused ;
   size_t unused_chunks ;
   array *tempdirs ;
   off_t bytes_in ;
   off_t bytes_out ;
};

typedef struct __anonstruct_chunkqueue_61 chunkqueue;

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

typedef enum __anonenum_http_method_t_62 http_method_t;

enum __anonenum_http_version_t_63 {
    HTTP_VERSION_UNSET = -1,
    HTTP_VERSION_1_0 = 0,
    HTTP_VERSION_1_1 = 1
} ;

typedef enum __anonenum_http_version_t_63 http_version_t;

struct __anonstruct_keyvalue_64 {
   int key ;
   char *value ;
};

typedef struct __anonstruct_keyvalue_64 keyvalue;

struct __anonstruct_s_keyvalue_65 {
   char *key ;
   char *value ;
};

typedef struct __anonstruct_s_keyvalue_65 s_keyvalue;

struct __anonstruct_pcre_keyvalue_66 {
   pcre *key ;
   pcre_extra *key_extra ;
   buffer *value ;
};

typedef struct __anonstruct_pcre_keyvalue_66 pcre_keyvalue;

enum __anonenum_httpauth_type_67 {
    HTTP_AUTH_BASIC = 0,
    HTTP_AUTH_DIGEST = 1
} ;

typedef enum __anonenum_httpauth_type_67 httpauth_type;

struct __anonstruct_httpauth_keyvalue_68 {
   char *key ;
   char *realm ;
   httpauth_type type ;
};

typedef struct __anonstruct_httpauth_keyvalue_68 httpauth_keyvalue;

struct __anonstruct_keyvalue_buffer_69 {
   keyvalue **kv ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_keyvalue_buffer_69 keyvalue_buffer;

struct __anonstruct_s_keyvalue_buffer_70 {
   s_keyvalue **kv ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_s_keyvalue_buffer_70 s_keyvalue_buffer;

struct __anonstruct_httpauth_keyvalue_buffer_71 {
   httpauth_keyvalue **kv ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_httpauth_keyvalue_buffer_71 httpauth_keyvalue_buffer;

struct __anonstruct_pcre_keyvalue_buffer_72 {
   pcre_keyvalue **kv ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_pcre_keyvalue_buffer_72 pcre_keyvalue_buffer;

typedef int ptrdiff_t;

struct __anonstruct_bitset_73 {
   size_t *bits ;
   size_t nbits ;
};

typedef struct __anonstruct_bitset_73 bitset;

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

union epoll_data {
   void *ptr ;
   int fd ;
   uint32_t u32 ;
   uint64_t u64 ;
};

typedef union epoll_data epoll_data_t;

struct epoll_event {
   uint32_t events ;
   epoll_data_t data ;
};

typedef unsigned long nfds_t;

struct pollfd {
   int fd ;
   short events ;
   short revents ;
};

typedef handler_t (*fdevent_handler)(void *srv , void *ctx , int revents );

enum __anonenum_fd_event_t_74 {
    FD_EVENT_TYPE_UNSET = -1,
    FD_EVENT_TYPE_CONNECTION = 0,
    FD_EVENT_TYPE_FCGI_CONNECTION = 1,
    FD_EVENT_TYPE_DIRWATCH = 2,
    FD_EVENT_TYPE_CGI_CONNECTION = 3
} ;

typedef enum __anonenum_fd_event_t_74 fd_event_t;

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

typedef enum __anonenum_fdevent_handler_t_75 fdevent_handler_t;

struct __anonstruct_fd_conn_76 {
   int fd ;
   void *conn ;
   fd_event_t fd_type ;
   int events ;
   int revents ;
};

typedef struct __anonstruct_fd_conn_76 fd_conn;

struct __anonstruct_fd_conn_buffer_77 {
   fd_conn *ptr ;
   size_t size ;
   size_t used ;
};

typedef struct __anonstruct_fd_conn_buffer_77 fd_conn_buffer;

struct _fdnode {
   handler_t (*handler)(void *srv , void *ctx , int revents ) ;
   void *ctx ;
   int fd ;
   struct _fdnode *prev ;
   struct _fdnode *next ;
};

typedef struct _fdnode fdnode;

struct __anonstruct_buffer_int_78 {
   int *ptr ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_buffer_int_78 buffer_int;

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

typedef struct fdevents fdevents;

struct iovec {
   void *iov_base ;
   size_t iov_len ;
};

enum __socket_type {
    SOCK_STREAM = 1,
    SOCK_DGRAM = 2,
    SOCK_RAW = 3,
    SOCK_RDM = 4,
    SOCK_SEQPACKET = 5,
    SOCK_PACKET = 10
} ;

typedef unsigned short sa_family_t;

struct sockaddr {
   sa_family_t sa_family ;
   char sa_data[14] ;
};

struct sockaddr_storage {
   sa_family_t ss_family ;
   __uint32_t __ss_align ;
   char __ss_padding[128U - 2U * sizeof(__uint32_t )] ;
};

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

struct msghdr {
   void *msg_name ;
   socklen_t msg_namelen ;
   struct iovec *msg_iov ;
   size_t msg_iovlen ;
   void *msg_control ;
   size_t msg_controllen ;
   int msg_flags ;
};

struct cmsghdr {
   size_t cmsg_len ;
   int cmsg_level ;
   int cmsg_type ;
   unsigned char __cmsg_data[] ;
};

enum __anonenum_80 {
    SCM_RIGHTS = 1,
    SCM_CREDENTIALS = 2
} ;

struct ucred {
   pid_t pid ;
   uid_t uid ;
   gid_t gid ;
};

struct linger {
   int l_onoff ;
   int l_linger ;
};

struct osockaddr {
   unsigned short sa_family ;
   unsigned char sa_data[14] ;
};

enum __anonenum_81 {
    SHUT_RD = 0,
    SHUT_WR = 1,
    SHUT_RDWR = 2
} ;

struct winsize {
   unsigned short ws_row ;
   unsigned short ws_col ;
   unsigned short ws_xpixel ;
   unsigned short ws_ypixel ;
};

struct termio {
   unsigned short c_iflag ;
   unsigned short c_oflag ;
   unsigned short c_cflag ;
   unsigned short c_lflag ;
   unsigned char c_line ;
   unsigned char c_cc[8] ;
};

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

typedef uint16_t in_port_t;

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

typedef uint32_t in_addr_t;

struct in_addr {
   in_addr_t s_addr ;
};

union __anonunion_in6_u_84 {
   uint8_t u6_addr8[16] ;
   uint16_t u6_addr16[8] ;
   uint32_t u6_addr32[4] ;
};

struct in6_addr {
   union __anonunion_in6_u_84 in6_u ;
};

struct sockaddr_in {
   sa_family_t sin_family ;
   in_port_t sin_port ;
   struct in_addr sin_addr ;
   unsigned char sin_zero[((sizeof(struct sockaddr ) - sizeof(unsigned short )) - sizeof(in_port_t )) - sizeof(struct in_addr )] ;
};

struct sockaddr_in6 {
   sa_family_t sin6_family ;
   in_port_t sin6_port ;
   uint32_t sin6_flowinfo ;
   struct in6_addr sin6_addr ;
   uint32_t sin6_scope_id ;
};

struct ip_mreq {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_interface ;
};

struct ip_mreq_source {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_interface ;
   struct in_addr imr_sourceaddr ;
};

struct ipv6_mreq {
   struct in6_addr ipv6mr_multiaddr ;
   unsigned int ipv6mr_interface ;
};

struct group_req {
   uint32_t gr_interface ;
   struct sockaddr_storage gr_group ;
};

struct group_source_req {
   uint32_t gsr_interface ;
   struct sockaddr_storage gsr_group ;
   struct sockaddr_storage gsr_source ;
};

struct ip_msfilter {
   struct in_addr imsf_multiaddr ;
   struct in_addr imsf_interface ;
   uint32_t imsf_fmode ;
   uint32_t imsf_numsrc ;
   struct in_addr imsf_slist[1] ;
};

struct group_filter {
   uint32_t gf_interface ;
   struct sockaddr_storage gf_group ;
   uint32_t gf_fmode ;
   uint32_t gf_numsrc ;
   struct sockaddr_storage gf_slist[1] ;
};

struct ip_opts {
   struct in_addr ip_dst ;
   char ip_opts[40] ;
};

struct ip_mreqn {
   struct in_addr imr_multiaddr ;
   struct in_addr imr_address ;
   int imr_ifindex ;
};

struct in_pktinfo {
   int ipi_ifindex ;
   struct in_addr ipi_spec_dst ;
   struct in_addr ipi_addr ;
};

struct in6_pktinfo {
   struct in6_addr ipi6_addr ;
   unsigned int ipi6_ifindex ;
};

struct ip6_mtuinfo {
   struct sockaddr_in6 ip6m_addr ;
   uint32_t ip6m_mtu ;
};

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

enum tcp_ca_state {
    TCP_CA_Open = 0,
    TCP_CA_Disorder = 1,
    TCP_CA_CWR = 2,
    TCP_CA_Recovery = 3,
    TCP_CA_Loss = 4
} ;

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

struct sockaddr_un {
   sa_family_t sun_family ;
   char sun_path[108] ;
};

struct rpcent {
   char *r_name ;
   char **r_aliases ;
   int r_number ;
};

struct netent {
   char *n_name ;
   char **n_aliases ;
   int n_addrtype ;
   uint32_t n_net ;
};

struct hostent {
   char *h_name ;
   char **h_aliases ;
   int h_addrtype ;
   int h_length ;
   char **h_addr_list ;
};

struct servent {
   char *s_name ;
   char **s_aliases ;
   int s_port ;
   char *s_proto ;
};

struct protoent {
   char *p_name ;
   char **p_aliases ;
   int p_proto ;
};

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

struct tree_node {
   struct tree_node *left ;
   struct tree_node *right ;
   int key ;
   int size ;
   void *data ;
};

typedef struct tree_node splay_tree;

enum __anonenum_etag_flags_t_86 {
    ETAG_USE_INODE = 1,
    ETAG_USE_MTIME = 2,
    ETAG_USE_SIZE = 4
} ;

typedef enum __anonenum_etag_flags_t_86 etag_flags_t;

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

typedef enum __anonenum_config_values_type_t_87 config_values_type_t;

enum __anonenum_config_scope_type_t_88 {
    T_CONFIG_SCOPE_UNSET = 0,
    T_CONFIG_SCOPE_SERVER = 1,
    T_CONFIG_SCOPE_CONNECTION = 2
} ;

typedef enum __anonenum_config_scope_type_t_88 config_scope_type_t;

struct __anonstruct_config_values_t_89 {
   char const   *key ;
   void *destination ;
   config_values_type_t type ;
   config_scope_type_t scope ;
};

typedef struct __anonstruct_config_values_t_89 config_values_t;

enum __anonenum_connection_type_90 {
    DIRECT = 0,
    EXTERNAL = 1
} ;

typedef enum __anonenum_connection_type_90 connection_type;

struct __anonstruct_request_handler_91 {
   char *key ;
   connection_type type ;
   char *value ;
};

typedef struct __anonstruct_request_handler_91 request_handler;

struct __anonstruct_fcgi_connections_92 {
   char *key ;
   char *host ;
   unsigned short port ;
   int used ;
   short factor ;
};

typedef struct __anonstruct_fcgi_connections_92 fcgi_connections;

union __anonunion_sock_addr_93 {
   struct sockaddr_in6 ipv6 ;
   struct sockaddr_in ipv4 ;
   struct sockaddr_un un ;
   struct sockaddr plain ;
};

typedef union __anonunion_sock_addr_93 sock_addr;

struct __anonstruct_request_94 {
   buffer *request ;
   buffer *uri ;
   buffer *orig_uri ;
   http_method_t http_method ;
   http_version_t http_version ;
   buffer *request_line ;
   buffer *http_host ;
   char const   *http_range ;
   char const   *http_content_type ;
   char const   *http_if_modified_since ;
   char const   *http_if_none_match ;
   array *headers ;
   size_t content_length ;
   int accept_encoding ;
   buffer *pathinfo ;
};

typedef struct __anonstruct_request_94 request;

enum __anonenum_transfer_encoding_96 {
    HTTP_TRANSFER_ENCODING_IDENTITY = 0,
    HTTP_TRANSFER_ENCODING_CHUNKED = 1
} ;

struct __anonstruct_response_95 {
   off_t content_length ;
   int keep_alive ;
   array *headers ;
   enum __anonenum_transfer_encoding_96 transfer_encoding ;
};

typedef struct __anonstruct_response_95 response;

struct __anonstruct_request_uri_97 {
   buffer *scheme ;
   buffer *authority ;
   buffer *path ;
   buffer *path_raw ;
   buffer *query ;
};

typedef struct __anonstruct_request_uri_97 request_uri;

struct __anonstruct_physical_98 {
   buffer *path ;
   buffer *basedir ;
   buffer *doc_root ;
   buffer *rel_path ;
   buffer *etag ;
};

typedef struct __anonstruct_physical_98 physical;

struct __anonstruct_stat_cache_entry_99 {
   buffer *name ;
   buffer *etag ;
   struct stat st ;
   time_t stat_ts ;
   char is_symlink ;
   buffer *content_type ;
};

typedef struct __anonstruct_stat_cache_entry_99 stat_cache_entry;

struct __anonstruct_stat_cache_100 {
   splay_tree *files ;
   buffer *dir_name ;
   buffer *hash_key ;
};

typedef struct __anonstruct_stat_cache_100 stat_cache;

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

typedef struct __anonstruct_specific_config_101 specific_config;

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

typedef enum __anonenum_connection_state_t_102 connection_state_t;

enum __anonenum_cond_result_t_103 {
    COND_RESULT_UNSET = 0,
    COND_RESULT_FALSE = 1,
    COND_RESULT_TRUE = 2
} ;

typedef enum __anonenum_cond_result_t_103 cond_result_t;

struct __anonstruct_cond_cache_t_104 {
   cond_result_t result ;
   int patterncount ;
   int matches[30] ;
   buffer *comp_value ;
   comp_key_t comp_type ;
};

typedef struct __anonstruct_cond_cache_t_104 cond_cache_t;

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

typedef struct __anonstruct_connection_105 connection;

struct __anonstruct_connections_106 {
   connection **ptr ;
   size_t size ;
   size_t used ;
};

typedef struct __anonstruct_connections_106 connections;

union __anonunion_addr_108 {
   struct in6_addr ipv6 ;
   struct in_addr ipv4 ;
};

struct __anonstruct_inet_ntop_cache_type_107 {
   int family ;
   union __anonunion_addr_108 addr ;
   char b2[47] ;
   time_t ts ;
};

typedef struct __anonstruct_inet_ntop_cache_type_107 inet_ntop_cache_type;

struct __anonstruct_realpath_cache_type_109 {
   buffer *uri ;
   time_t mtime ;
   int http_status ;
};

typedef struct __anonstruct_realpath_cache_type_109 realpath_cache_type;

struct __anonstruct_mtime_cache_type_110 {
   time_t mtime ;
   buffer *str ;
};

typedef struct __anonstruct_mtime_cache_type_110 mtime_cache_type;

struct __anonstruct_buffer_plugin_111 {
   void *ptr ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_buffer_plugin_111 buffer_plugin;

enum __anonenum_stat_cache_engine_113 {
    STAT_CACHE_ENGINE_UNSET = 0,
    STAT_CACHE_ENGINE_NONE = 1,
    STAT_CACHE_ENGINE_SIMPLE = 2
} ;

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

typedef struct __anonstruct_server_config_112 server_config;

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

typedef struct __anonstruct_server_socket_114 server_socket;

struct __anonstruct_server_socket_array_115 {
   server_socket **ptr ;
   size_t size ;
   size_t used ;
};

typedef struct __anonstruct_server_socket_array_115 server_socket_array;

enum __anonenum_errorlog_mode_116 {
    ERRORLOG_STDERR = 0,
    ERRORLOG_FILE = 1,
    ERRORLOG_SYSLOG = 2
} ;

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
   int (*network_backend_write)(struct server *srv , connection *con , int fd ,
                                chunkqueue *cq ) ;
   int (*network_backend_read)(struct server *srv , connection *con , int fd ,
                               chunkqueue *cq ) ;
   uid_t uid ;
   gid_t gid ;
};

typedef struct server server;

struct __anonstruct_two_strings_117 {
   char *key ;
   char *value ;
};

typedef struct __anonstruct_two_strings_117 two_strings;

enum __anonenum_config_var_t_118 {
    CONFIG_UNSET = 0,
    CONFIG_DOCUMENT_ROOT = 1
} ;

typedef enum __anonenum_config_var_t_118 config_var_t;

typedef __clock_t clock_t;

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
   char const   *tm_zone ;
};

struct itimerspec {
   struct timespec it_interval ;
   struct timespec it_value ;
};

struct sigevent;

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
   handler_t (*handle_connection_close)(server *srv , connection *con ,
                                        void *p_d ) ;
   handler_t (*handle_joblist)(server *srv , connection *con , void *p_d ) ;
   handler_t (*handle_subrequest_start)(server *srv , connection *con ,
                                        void *p_d ) ;
   handler_t (*handle_subrequest)(server *srv , connection *con , void *p_d ) ;
   handler_t (*connection_reset)(server *srv , connection *con , void *p_d ) ;
   void *data ;
   void *lib ;
};

typedef struct __anonstruct_plugin_119 plugin;

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

typedef struct __anonstruct_FCGI_Header_120 FCGI_Header;

struct __anonstruct_FCGI_BeginRequestBody_121 {
   unsigned char roleB1 ;
   unsigned char roleB0 ;
   unsigned char flags ;
   unsigned char reserved[5] ;
};

typedef struct __anonstruct_FCGI_BeginRequestBody_121 FCGI_BeginRequestBody;

struct __anonstruct_FCGI_BeginRequestRecord_122 {
   FCGI_Header header ;
   FCGI_BeginRequestBody body ;
};

typedef struct __anonstruct_FCGI_BeginRequestRecord_122 FCGI_BeginRequestRecord;

struct __anonstruct_FCGI_EndRequestBody_123 {
   unsigned char appStatusB3 ;
   unsigned char appStatusB2 ;
   unsigned char appStatusB1 ;
   unsigned char appStatusB0 ;
   unsigned char protocolStatus ;
   unsigned char reserved[3] ;
};

typedef struct __anonstruct_FCGI_EndRequestBody_123 FCGI_EndRequestBody;

struct __anonstruct_FCGI_EndRequestRecord_124 {
   FCGI_Header header ;
   FCGI_EndRequestBody body ;
};

typedef struct __anonstruct_FCGI_EndRequestRecord_124 FCGI_EndRequestRecord;

struct __anonstruct_FCGI_UnknownTypeBody_125 {
   unsigned char type ;
   unsigned char reserved[7] ;
};

typedef struct __anonstruct_FCGI_UnknownTypeBody_125 FCGI_UnknownTypeBody;

struct __anonstruct_FCGI_UnknownTypeRecord_126 {
   FCGI_Header header ;
   FCGI_UnknownTypeBody body ;
};

typedef struct __anonstruct_FCGI_UnknownTypeRecord_126 FCGI_UnknownTypeRecord;

struct _IO_FILE;

struct _IO_FILE;

struct _IO_FILE;

typedef struct _IO_FILE FILE;

typedef struct _IO_FILE __FILE;

typedef unsigned int wint_t;

union __anonunion___value_128 {
   wint_t __wch ;
   char __wchb[4] ;
};

struct __anonstruct___mbstate_t_127 {
   int __count ;
   union __anonunion___value_128 __value ;
};

typedef struct __anonstruct___mbstate_t_127 __mbstate_t;

struct __anonstruct__G_fpos_t_129 {
   __off_t __pos ;
   __mbstate_t __state ;
};

typedef struct __anonstruct__G_fpos_t_129 _G_fpos_t;

struct __anonstruct__G_fpos64_t_130 {
   __off64_t __pos ;
   __mbstate_t __state ;
};

typedef struct __anonstruct__G_fpos64_t_130 _G_fpos64_t;

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

enum __anonenum_132 {
    __GCONV_IS_LAST = 1,
    __GCONV_IGNORE_ERRORS = 2
} ;

struct __gconv_step;

struct __gconv_step;

struct __gconv_step;

struct __gconv_step_data;

struct __gconv_step_data;

struct __gconv_step_data;

struct __gconv_loaded_object;

struct __gconv_loaded_object;

struct __gconv_loaded_object;

struct __gconv_trans_data;

struct __gconv_trans_data;

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

struct __anonstruct___combined_134 {
   struct __gconv_info __cd ;
   struct __gconv_step_data __data ;
};

union __anonunion__G_iconv_t_133 {
   struct __gconv_info __cd ;
   struct __anonstruct___combined_134 __combined ;
};

typedef union __anonunion__G_iconv_t_133 _G_iconv_t;

typedef short _G_int16_t;

typedef int _G_int32_t;

typedef unsigned short _G_uint16_t;

typedef unsigned int _G_uint32_t;

typedef __builtin_va_list __gnuc_va_list;

struct _IO_jump_t;

struct _IO_jump_t;

struct _IO_jump_t;

struct _IO_FILE;

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
   char _unused2[(15U * sizeof(int ) - 4U * sizeof(void *)) - sizeof(size_t )] ;
};

typedef struct _IO_FILE _IO_FILE;

struct _IO_FILE_plus;

struct _IO_FILE_plus;

struct _IO_FILE_plus;

typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );

typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf ,
                                size_t __n );

typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );

typedef int __io_close_fn(void *__cookie );

typedef _G_fpos64_t fpos_t;

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

typedef __rlim64_t rlim_t;

struct rlimit {
   rlim_t rlim_cur ;
   rlim_t rlim_max ;
};

enum __rusage_who {
    RUSAGE_SELF = 0,
    RUSAGE_CHILDREN = -1
} ;

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

enum __priority_which {
    PRIO_PROCESS = 0,
    PRIO_PGRP = 1,
    PRIO_USER = 2
} ;

typedef int __rlimit_resource_t;

typedef int __rusage_who_t;

typedef int __priority_which_t;

union wait;

union wait;

union __anonunion___WAIT_STATUS_135 {
   union wait *__uptr ;
   int *__iptr ;
};

typedef union __anonunion___WAIT_STATUS_135  __attribute__((__transparent_union__)) __WAIT_STATUS;

struct __anonstruct___wait_terminated_136 {
   unsigned int __w_termsig : 7 ;
   unsigned int __w_coredump : 1 ;
   unsigned int __w_retcode : 8 ;
   unsigned int  : 16 ;
};

struct __anonstruct___wait_stopped_137 {
   unsigned int __w_stopval : 8 ;
   unsigned int __w_stopsig : 8 ;
   unsigned int  : 16 ;
};

union wait {
   int w_status ;
   struct __anonstruct___wait_terminated_136 __wait_terminated ;
   struct __anonstruct___wait_stopped_137 __wait_stopped ;
};

enum __anonenum_idtype_t_138 {
    P_ALL = 0,
    P_PID = 1,
    P_PGID = 2
} ;

typedef enum __anonenum_idtype_t_138 idtype_t;

struct rusage;

enum __anonenum_state_139 {
    PROC_STATE_UNSET = 0,
    PROC_STATE_RUNNING = 1,
    PROC_STATE_OVERLOADED = 2,
    PROC_STATE_DIED_WAIT_FOR_PID = 3,
    PROC_STATE_DIED = 4,
    PROC_STATE_KILLED = 5
} ;

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

typedef struct fcgi_proc fcgi_proc;

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

typedef struct __anonstruct_fcgi_extension_host_140 fcgi_extension_host;

struct __anonstruct_fcgi_extension_141 {
   buffer *key ;
   int note_is_sent ;
   int last_used_ndx ;
   fcgi_extension_host **hosts ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_fcgi_extension_141 fcgi_extension;

struct __anonstruct_fcgi_exts_142 {
   fcgi_extension **exts ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_fcgi_exts_142 fcgi_exts;

struct __anonstruct_plugin_config_143 {
   fcgi_exts *exts ;
   array *ext_mapping ;
   int debug ;
};

typedef struct __anonstruct_plugin_config_143 plugin_config;

struct __anonstruct_buffer_uint_144 {
   size_t *ptr ;
   size_t used ;
   size_t size ;
};

typedef struct __anonstruct_buffer_uint_144 buffer_uint;

struct __anonstruct_char_array_145 {
   char **ptr ;
   size_t size ;
   size_t used ;
};

typedef struct __anonstruct_char_array_145 char_array;

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

typedef struct __anonstruct_plugin_data_146 plugin_data;

enum __anonenum_fcgi_connection_state_t_147 {
    FCGI_STATE_UNSET = 0,
    FCGI_STATE_INIT = 1,
    FCGI_STATE_CONNECT_DELAYED = 2,
    FCGI_STATE_PREPARE_WRITE = 3,
    FCGI_STATE_WRITE = 4,
    FCGI_STATE_READ = 5
} ;

typedef enum __anonenum_fcgi_connection_state_t_147 fcgi_connection_state_t;

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

typedef struct __anonstruct_handler_ctx_148 handler_ctx;

union __anonunion_149 {
   int __in ;
   int __i ;
};

union __anonunion_150 {
   int __in ;
   int __i ;
};

union __anonunion_151 {
   int __in ;
   int __i ;
};

union __anonunion_152 {
   int __in ;
   int __i ;
};

union __anonunion_153 {
   int __in ;
   int __i ;
};

enum __anonenum_connection_result_t_154 {
    CONNECTION_UNSET = 0,
    CONNECTION_OK = 1,
    CONNECTION_DELAYED = 2,
    CONNECTION_OVERLOADED = 3,
    CONNECTION_DEAD = 4
} ;

typedef enum __anonenum_connection_result_t_154 connection_result_t;

struct __anonstruct_fastcgi_response_packet_155 {
   buffer *b ;
   size_t len ;
   int type ;
   int padding ;
   size_t request_id ;
};

typedef struct __anonstruct_fastcgi_response_packet_155 fastcgi_response_packet;

union __anonunion_156 {
   int __in ;
   int __i ;
};

union __anonunion_157 {
   int __in ;
   int __i ;
};

union __anonunion_158 {
   int __in ;
   int __i ;
};

union __anonunion_159 {
   int __in ;
   int __i ;
};

union __anonunion_160 {
   int __in ;
   int __i ;
};

union __anonunion_161 {
   int __in ;
   int __i ;
};

union __anonunion_162 {
   int __in ;
   int __i ;
};

union __anonunion_163 {
   int __in ;
   int __i ;
};

union __anonunion_164 {
   int __in ;
   int __i ;
};

union __anonunion_165 {
   int __in ;
   int __i ;
};

union __anonunion_166 {
   int __in ;
   int __i ;
};

union __anonunion_167 {
   int __in ;
   int __i ;
};

/* compiler builtin: 
   void __builtin_varargs_start(__builtin_va_list  ) ;  */

/* compiler builtin: 
   int __builtin_strcmp(char const   * , char const   * ) ;  */

/* compiler builtin: 
   void *__builtin___memmove_chk(void * , void const   * , unsigned int  ,
                                 unsigned int  ) ;  */

/* compiler builtin: 
   char *__builtin_strpbrk(char const   * , char const   * ) ;  */

/* compiler builtin: 
   void *__builtin_memcpy(void * , void const   * , unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_exp(double  ) ;  */

/* compiler builtin: 
   long double __builtin_nanl(char const   * ) ;  */

/* compiler builtin: 
   double __builtin_cos(double  ) ;  */

/* compiler builtin: 
   char *__builtin_strchr(char * , int  ) ;  */

/* compiler builtin: 
   float __builtin_atan2f(float  , float  ) ;  */

/* compiler builtin: 
   void *__builtin___memcpy_chk(void * , void const   * , unsigned int  ,
                                unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_asin(double  ) ;  */

/* compiler builtin: 
   int __builtin_ctz(unsigned int  ) ;  */

/* compiler builtin: 
   char *__builtin_stpcpy(char * , char const   * ) ;  */

/* compiler builtin: 
   double __builtin_nans(char const   * ) ;  */

/* compiler builtin: 
   long double __builtin_atan2l(long double  , long double  ) ;  */

/* compiler builtin: 
   float __builtin_logf(float  ) ;  */

/* compiler builtin: 
   int __builtin___fprintf_chk(void * , int  , char const   *  , ...) ;  */

/* compiler builtin: 
   int __builtin___vsprintf_chk(char * , int  , unsigned int  , char const   * ,
                                __builtin_va_list  ) ;  */

/* compiler builtin: 
   char *__builtin___strncpy_chk(char * , char const   * , unsigned int  ,
                                 unsigned int  ) ;  */

/* compiler builtin: 
   float __builtin_log10f(float  ) ;  */

/* compiler builtin: 
   double __builtin_atan(double  ) ;  */

/* compiler builtin: 
   void *__builtin_alloca(unsigned int  ) ;  */

/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */

/* compiler builtin: 
   int __builtin_strncmp(char const   * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_sin(double  ) ;  */

/* compiler builtin: 
   long double __builtin_logl(long double  ) ;  */

/* compiler builtin: 
   float __builtin_coshf(float  ) ;  */

/* compiler builtin: 
   void *__builtin___mempcpy_chk(void * , void const   * , unsigned int  ,
                                 unsigned int  ) ;  */

/* compiler builtin: 
   char *__builtin___strcat_chk(char * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   float __builtin_nansf(char const   * ) ;  */

/* compiler builtin: 
   void *__builtin_memset(void * , int  , int  ) ;  */

/* compiler builtin: 
   void __builtin_va_copy(__builtin_va_list  , __builtin_va_list  ) ;  */

/* compiler builtin: 
   float __builtin_sinhf(float  ) ;  */

/* compiler builtin: 
   long double __builtin_log10l(long double  ) ;  */

/* compiler builtin: 
   long double __builtin_coshl(long double  ) ;  */

/* compiler builtin: 
   int __builtin_ffs(unsigned int  ) ;  */

/* compiler builtin: 
   float __builtin_asinf(float  ) ;  */

/* compiler builtin: 
   long double __builtin_nansl(char const   * ) ;  */

/* compiler builtin: 
   double __builtin_frexp(double  , int * ) ;  */

/* compiler builtin: 
   double __builtin_tan(double  ) ;  */

/* compiler builtin: 
   long double __builtin_sinhl(long double  ) ;  */

/* compiler builtin: 
   float __builtin_frexpf(float  , int * ) ;  */

/* compiler builtin: 
   long double __builtin_asinl(long double  ) ;  */

/* compiler builtin: 
   void *__builtin_frame_address(unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_floor(double  ) ;  */

/* compiler builtin: 
   float __builtin_tanhf(float  ) ;  */

/* compiler builtin: 
   int __builtin_parityl(unsigned long  ) ;  */

/* compiler builtin: 
   int __builtin_clzl(unsigned long  ) ;  */

/* compiler builtin: 
   double __builtin_powi(double  , int  ) ;  */

/* compiler builtin: 
   long double __builtin_frexpl(long double  , int * ) ;  */

/* compiler builtin: 
   float __builtin_atanf(float  ) ;  */

/* compiler builtin: 
   float __builtin_huge_valf(void) ;  */

/* compiler builtin: 
   float __builtin_sqrtf(float  ) ;  */

/* compiler builtin: 
   float __builtin_fmodf(float  ) ;  */

/* compiler builtin: 
   unsigned int __builtin_object_size(void * , int  ) ;  */

/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned int  , void * ) ;  */

/* compiler builtin: 
   void __builtin_stdarg_start(__builtin_va_list  ) ;  */

/* compiler builtin: 
   long double __builtin_tanhl(long double  ) ;  */

/* compiler builtin: 
   double __builtin_nan(char const   * ) ;  */

/* compiler builtin: 
   void __builtin_return(void const   * ) ;  */

/* compiler builtin: 
   long double __builtin_atanl(long double  ) ;  */

/* compiler builtin: 
   long double __builtin_huge_vall(void) ;  */

/* compiler builtin: 
   float __builtin_inff(void) ;  */

/* compiler builtin: 
   long double __builtin_sqrtl(long double  ) ;  */

/* compiler builtin: 
   long double __builtin_fmodl(long double  ) ;  */

/* compiler builtin: 
   int __builtin___printf_chk(int  , char const   *  , ...) ;  */

/* compiler builtin: 
   float __builtin_floorf(float  ) ;  */

/* compiler builtin: 
   float __builtin_fabsf(float  ) ;  */

/* compiler builtin: 
   int __builtin_popcountll(unsigned long long  ) ;  */

/* compiler builtin: 
   int __builtin___sprintf_chk(char * , int  , unsigned int  , char const   * 
                               , ...) ;  */

/* compiler builtin: 
   int __builtin___vprintf_chk(int  , char const   * , __builtin_va_list  ) ;  */

/* compiler builtin: 
   int __builtin___snprintf_chk(char * , unsigned int  , int  , unsigned int  ,
                                char const   *  , ...) ;  */

/* compiler builtin: 
   long double __builtin_infl(void) ;  */

/* compiler builtin: 
   void *__builtin_mempcpy(void * , void const   * , unsigned int  ) ;  */

/* compiler builtin: 
   long double __builtin_floorl(long double  ) ;  */

/* compiler builtin: 
   int __builtin_ctzl(unsigned long  ) ;  */

/* compiler builtin: 
   long double __builtin_fabsl(long double  ) ;  */

/* compiler builtin: 
   int __builtin_clz(unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_fabs(double  ) ;  */

/* compiler builtin: 
   int __builtin_popcount(unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_ceil(double  ) ;  */

/* compiler builtin: 
   double __builtin_ldexp(double  , int  ) ;  */

/* compiler builtin: 
   float __builtin_sinf(float  ) ;  */

/* compiler builtin: 
   float __builtin_acosf(float  ) ;  */

/* compiler builtin: 
   int __builtin___vsnprintf_chk(char * , unsigned int  , int  , unsigned int  ,
                                 char const   * , __builtin_va_list  ) ;  */

/* compiler builtin: 
   double __builtin_sinh(double  ) ;  */

/* compiler builtin: 
   int __builtin_ffsll(unsigned long long  ) ;  */

/* compiler builtin: 
   char *__builtin___strcpy_chk(char * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_inf(void) ;  */

/* compiler builtin: 
   void __builtin_prefetch(void const   *  , ...) ;  */

/* compiler builtin: 
   long double __builtin_sinl(long double  ) ;  */

/* compiler builtin: 
   long double __builtin_acosl(long double  ) ;  */

/* compiler builtin: 
   double __builtin_sqrt(double  ) ;  */

/* compiler builtin: 
   double __builtin_fmod(double  ) ;  */

/* compiler builtin: 
   char *__builtin_strcpy(char * , char const   * ) ;  */

/* compiler builtin: 
   float __builtin_ceilf(float  ) ;  */

/* compiler builtin: 
   void *__builtin_return_address(unsigned int  ) ;  */

/* compiler builtin: 
   char *__builtin___stpcpy_chk(char * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   float __builtin_tanf(float  ) ;  */

/* compiler builtin: 
   int __builtin_parityll(unsigned long long  ) ;  */

/* compiler builtin: 
   float __builtin_ldexpf(float  , int  ) ;  */

/* compiler builtin: 
   int __builtin_types_compatible_p(unsigned int  , unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_log10(double  ) ;  */

/* compiler builtin: 
   float __builtin_expf(float  ) ;  */

/* compiler builtin: 
   int __builtin_clzll(unsigned long long  ) ;  */

/* compiler builtin: 
   double __builtin_tanh(double  ) ;  */

/* compiler builtin: 
   int __builtin_constant_p(int  ) ;  */

/* compiler builtin: 
   long double __builtin_ceill(long double  ) ;  */

/* compiler builtin: 
   long double __builtin_tanl(long double  ) ;  */

/* compiler builtin: 
   double __builtin_log(double  ) ;  */

/* compiler builtin: 
   long double __builtin_ldexpl(long double  , int  ) ;  */

/* compiler builtin: 
   long double __builtin_expl(long double  ) ;  */

/* compiler builtin: 
   int __builtin_popcountl(unsigned long  ) ;  */

/* compiler builtin: 
   void *__builtin___memset_chk(void * , int  , unsigned int  , unsigned int  ) ;  */

/* compiler builtin: 
   char *__builtin___strncat_chk(char * , char const   * , unsigned int  ,
                                 unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_huge_val(void) ;  */

/* compiler builtin: 
   __builtin_va_list __builtin_next_arg(void) ;  */

/* compiler builtin: 
   float __builtin_powif(float  , int  ) ;  */

/* compiler builtin: 
   int __builtin___vfprintf_chk(void * , int  , char const   * ,
                                __builtin_va_list  ) ;  */

/* compiler builtin: 
   float __builtin_modff(float  , float * ) ;  */

/* compiler builtin: 
   double __builtin_atan2(double  , double  ) ;  */

/* compiler builtin: 
   char *__builtin_strncpy(char * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   long double __builtin_powil(long double  , int  ) ;  */

/* compiler builtin: 
   float __builtin_cosf(float  ) ;  */

/* compiler builtin: 
   unsigned int __builtin_strspn(char const   * , char const   * ) ;  */

/* compiler builtin: 
   long double __builtin_modfl(long double  , long double * ) ;  */

/* compiler builtin: 
   int __builtin_parity(unsigned int  ) ;  */

/* compiler builtin: 
   double __builtin_cosh(double  ) ;  */

/* compiler builtin: 
   char *__builtin_strncat(char * , char const   * , unsigned int  ) ;  */

/* compiler builtin: 
   long __builtin_expect(long  , long  ) ;  */

/* compiler builtin: 
   double __builtin_acos(double  ) ;  */

/* compiler builtin: 
   long double __builtin_cosl(long double  ) ;  */

/* compiler builtin: 
   void __builtin_va_start(__builtin_va_list  ) ;  */

/* compiler builtin: 
   int __builtin_ctzll(unsigned long long  ) ;  */

/* compiler builtin: 
   unsigned int __builtin_strcspn(char const   * , char const   * ) ;  */

/* compiler builtin: 
   int __builtin_ffsl(unsigned long  ) ;  */

/* compiler builtin: 
   float __builtin_nanf(char const   * ) ;  */

extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;

extern int pselect(int __nfds , fd_set * __restrict  __readfds ,
                   fd_set * __restrict  __writefds ,
                   fd_set * __restrict  __exceptfds ,
                   struct timespec  const  * __restrict  __timeout ,
                   __sigset_t const   * __restrict  __sigmask ) ;

__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;

__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;

__inline static  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;

__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
__inline static unsigned int gnu_dev_major(unsigned long long __dev ) 
{ 

  {
  return ((unsigned int )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}

__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline static unsigned int gnu_dev_minor(unsigned long long __dev ) 
{ 

  {
  return ((unsigned int )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}

__inline static  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
__inline static unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                   unsigned int __minor ) 
{ 

  {
  return (((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32));
}
}

extern  __attribute__((__nothrow__)) int access(char const   *__name ,
                                                int __type )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) __off64_t lseek(int __fd ,
                                                     __off64_t __offset ,
                                                     int __whence )  __asm__("lseek64")  ;

extern int close(int __fd ) ;

extern ssize_t read(int __fd , void *__buf , size_t __nbytes ) ;

extern ssize_t write(int __fd , void const   *__buf , size_t __n ) ;

extern  __attribute__((__nothrow__)) int pipe(int *__pipedes ) ;

extern  __attribute__((__nothrow__)) unsigned int alarm(unsigned int __seconds ) ;

extern unsigned int sleep(unsigned int __seconds ) ;

extern  __attribute__((__nothrow__)) __useconds_t ualarm(__useconds_t __value ,
                                                         __useconds_t __interval ) ;

extern int usleep(__useconds_t __useconds ) ;

extern int pause(void) ;

extern  __attribute__((__nothrow__)) int chown(char const   *__file ,
                                               __uid_t __owner ,
                                               __gid_t __group )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int fchown(int __fd , __uid_t __owner ,
                                                __gid_t __group ) ;

extern  __attribute__((__nothrow__)) int lchown(char const   *__file ,
                                                __uid_t __owner ,
                                                __gid_t __group )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int chdir(char const   *__path )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int fchdir(int __fd ) ;

extern  __attribute__((__nothrow__)) char *getcwd(char *__buf , size_t __size ) ;

extern  __attribute__((__nothrow__)) char *getwd(char *__buf )  __attribute__((__nonnull__(1),
__deprecated__)) ;

extern  __attribute__((__nothrow__)) int dup(int __fd ) ;

extern  __attribute__((__nothrow__)) int dup2(int __fd , int __fd2 ) ;

extern char **__environ ;

extern  __attribute__((__nothrow__)) int execve(char const   *__path ,
                                                char * const  *__argv ,
                                                char * const  *__envp )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int execv(char const   *__path ,
                                               char * const  *__argv )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int execle(char const   *__path ,
                                                char const   *__arg  , ...)  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int execl(char const   *__path ,
                                               char const   *__arg  , ...)  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int execvp(char const   *__file ,
                                                char * const  *__argv )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int execlp(char const   *__file ,
                                                char const   *__arg  , ...)  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int nice(int __inc ) ;

extern  __attribute__((__noreturn__)) void _exit(int __status ) ;

extern  __attribute__((__nothrow__)) long pathconf(char const   *__path ,
                                                   int __name )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long fpathconf(int __fd , int __name ) ;

extern  __attribute__((__nothrow__)) long sysconf(int __name ) ;

extern  __attribute__((__nothrow__)) size_t confstr(int __name , char *__buf ,
                                                    size_t __len ) ;

extern  __attribute__((__nothrow__)) __pid_t getpid(void) ;

extern  __attribute__((__nothrow__)) __pid_t getppid(void) ;

extern  __attribute__((__nothrow__)) __pid_t getpgrp(void) ;

extern  __attribute__((__nothrow__)) __pid_t __getpgid(__pid_t __pid ) ;

extern  __attribute__((__nothrow__)) int setpgid(__pid_t __pid , __pid_t __pgid ) ;

extern  __attribute__((__nothrow__)) int setpgrp(void) ;

extern  __attribute__((__nothrow__)) __pid_t setsid(void) ;

extern  __attribute__((__nothrow__)) __uid_t getuid(void) ;

extern  __attribute__((__nothrow__)) __uid_t geteuid(void) ;

extern  __attribute__((__nothrow__)) __gid_t getgid(void) ;

extern  __attribute__((__nothrow__)) __gid_t getegid(void) ;

extern  __attribute__((__nothrow__)) int getgroups(int __size , __gid_t *__list ) ;

extern  __attribute__((__nothrow__)) int setuid(__uid_t __uid ) ;

extern  __attribute__((__nothrow__)) int setreuid(__uid_t __ruid ,
                                                  __uid_t __euid ) ;

extern  __attribute__((__nothrow__)) int seteuid(__uid_t __uid ) ;

extern  __attribute__((__nothrow__)) int setgid(__gid_t __gid ) ;

extern  __attribute__((__nothrow__)) int setregid(__gid_t __rgid ,
                                                  __gid_t __egid ) ;

extern  __attribute__((__nothrow__)) int setegid(__gid_t __gid ) ;

extern  __attribute__((__nothrow__)) __pid_t fork(void) ;

extern  __attribute__((__nothrow__)) __pid_t vfork(void) ;

extern  __attribute__((__nothrow__)) char *ttyname(int __fd ) ;

extern  __attribute__((__nothrow__)) int ttyname_r(int __fd , char *__buf ,
                                                   size_t __buflen )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) int isatty(int __fd ) ;

extern  __attribute__((__nothrow__)) int ttyslot(void) ;

extern  __attribute__((__nothrow__)) int link(char const   *__from ,
                                              char const   *__to )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int symlink(char const   *__from ,
                                                 char const   *__to )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) ssize_t readlink(char const   * __restrict  __path ,
                                                      char * __restrict  __buf ,
                                                      size_t __len )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int unlink(char const   *__name )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int rmdir(char const   *__path )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) __pid_t tcgetpgrp(int __fd ) ;

extern  __attribute__((__nothrow__)) int tcsetpgrp(int __fd , __pid_t __pgrp_id ) ;

extern char *getlogin(void) ;

extern int getlogin_r(char *__name , size_t __name_len )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int setlogin(char const   *__name )  __attribute__((__nonnull__(1))) ;

extern char *optarg ;

extern int optind ;

extern int opterr ;

extern int optopt ;

extern  __attribute__((__nothrow__)) int getopt(int ___argc ,
                                                char * const  *___argv ,
                                                char const   *__shortopts ) ;

extern  __attribute__((__nothrow__)) int gethostname(char *__name ,
                                                     size_t __len )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int sethostname(char const   *__name ,
                                                     size_t __len )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int sethostid(long __id ) ;

extern  __attribute__((__nothrow__)) int getdomainname(char *__name ,
                                                       size_t __len )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int setdomainname(char const   *__name ,
                                                       size_t __len )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int vhangup(void) ;

extern  __attribute__((__nothrow__)) int revoke(char const   *__file )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int profil(unsigned short *__sample_buffer ,
                                                size_t __size ,
                                                size_t __offset ,
                                                unsigned int __scale )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int acct(char const   *__name ) ;

extern  __attribute__((__nothrow__)) char *getusershell(void) ;

extern  __attribute__((__nothrow__)) void endusershell(void) ;

extern  __attribute__((__nothrow__)) void setusershell(void) ;

extern  __attribute__((__nothrow__)) int daemon(int __nochdir , int __noclose ) ;

extern  __attribute__((__nothrow__)) int chroot(char const   *__path )  __attribute__((__nonnull__(1))) ;

extern char *getpass(char const   *__prompt )  __attribute__((__nonnull__(1))) ;

extern int fsync(int __fd ) ;

extern long gethostid(void) ;

extern  __attribute__((__nothrow__)) void sync(void) ;

extern  __attribute__((__nothrow__)) int getpagesize(void)  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int getdtablesize(void) ;

extern  __attribute__((__nothrow__)) int truncate(char const   *__file ,
                                                  __off64_t __length )  __asm__("truncate64") __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int ftruncate(int __fd ,
                                                   __off64_t __length )  __asm__("ftruncate64")  ;

extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;

extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;

extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;

extern int lockf(int __fd , int __cmd , __off64_t __len )  __asm__("lockf64")  ;

extern int fdatasync(int __fildes ) ;

extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;

extern int fcntl(int __fd , int __cmd  , ...) ;

extern int open(char const   *__file , int __oflag  , ...)  __asm__("open64") __attribute__((__nonnull__(1))) ;

extern int creat(char const   *__file , __mode_t __mode )  __asm__("creat64") __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off64_t __offset ,
                                                       __off64_t __len ,
                                                       int __advise )  __asm__("posix_fadvise64")  ;

extern int posix_fallocate(int __fd , __off64_t __offset , __off64_t __len )  __asm__("posix_fallocate64")  ;

extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest ,
                                                  void const   * __restrict  __src ,
                                                  size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) void *memmove(void *__dest ,
                                                   void const   *__src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) void *memccpy(void * __restrict  __dest ,
                                                   void const   * __restrict  __src ,
                                                   int __c , size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c ,
                                                  size_t __n )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int memcmp(void const   *__s1 ,
                                                void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) void *memchr(void const   *__s , int __c ,
                                                  size_t __n )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *strcpy(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strncpy(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strcat(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strncat(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 ,
                                                char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 ,
                                                 char const   *__s2 ,
                                                 size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int strcoll(char const   *__s1 ,
                                                 char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) size_t strxfrm(char * __restrict  __dest ,
                                                    char const   * __restrict  __src ,
                                                    size_t __n )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) char *strdup(char const   *__s )  __attribute__((__nonnull__(1),
__malloc__)) ;

extern  __attribute__((__nothrow__)) char *strchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *strrchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) size_t strcspn(char const   *__s ,
                                                    char const   *__reject )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) size_t strspn(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strpbrk(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strstr(char const   *__haystack ,
                                                  char const   *__needle )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strtok(char * __restrict  __s ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) char *__strtok_r(char * __restrict  __s ,
                                                      char const   * __restrict  __delim ,
                                                      char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;

extern  __attribute__((__nothrow__)) char *strtok_r(char * __restrict  __s ,
                                                    char const   * __restrict  __delim ,
                                                    char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;

extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;

extern  __attribute__((__nothrow__)) int strerror_r(int __errnum , char *__buf ,
                                                    size_t __buflen )  __asm__("__xpg_strerror_r") __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) void __bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) void bcopy(void const   *__src ,
                                                void *__dest , size_t __n )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) void bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int bcmp(void const   *__s1 ,
                                              void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *index(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *rindex(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int strcasecmp(char const   *__s1 ,
                                                    char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int strncasecmp(char const   *__s1 ,
                                                     char const   *__s2 ,
                                                     size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) char *strsep(char ** __restrict  __stringp ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(1,2))) ;

extern void *__rawmemchr(void const   *__s , int __c ) ;

__inline static size_t __strcspn_c1(char const   *__s , int __reject ) ;

__inline static size_t __strcspn_c1(char const   *__s , int __reject ) 
{ register size_t __result ;

  {
  __result = 0U;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if (! ((int const   )*(__s + __result) != (int const   )__reject)) {
        break;
      }
    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}

__inline static size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) ;

__inline static size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) 
{ register size_t __result ;

  {
  __result = 0U;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        if (! ((int const   )*(__s + __result) != (int const   )__reject2)) {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}

__inline static size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) ;

__inline static size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) 
{ register size_t __result ;

  {
  __result = 0U;
  while (1) {
    if ((int const   )*(__s + __result) != 0) {
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
          if (! ((int const   )*(__s + __result) != (int const   )__reject3)) {
            break;
          }
        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __result ++;
  }
  return (__result);
}
}

__inline static size_t __strspn_c1(char const   *__s , int __accept ) ;

__inline static size_t __strspn_c1(char const   *__s , int __accept ) 
{ register size_t __result ;

  {
  __result = 0U;
  while ((int const   )*(__s + __result) == (int const   )__accept) {
    __result ++;
  }
  return (__result);
}
}

__inline static size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;

__inline static size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ register size_t __result ;

  {
  __result = 0U;
  while (1) {
    if (! ((int const   )*(__s + __result) == (int const   )__accept1)) {
      if (! ((int const   )*(__s + __result) == (int const   )__accept2)) {
        break;
      }
    }
    __result ++;
  }
  return (__result);
}
}

__inline static size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;

__inline static size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ register size_t __result ;

  {
  __result = 0U;
  while (1) {
    if (! ((int const   )*(__s + __result) == (int const   )__accept1)) {
      if (! ((int const   )*(__s + __result) == (int const   )__accept2)) {
        if (! ((int const   )*(__s + __result) == (int const   )__accept3)) {
          break;
        }
      }
    }
    __result ++;
  }
  return (__result);
}
}

__inline static char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;

__inline static char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ char *tmp ;

  {
  while (1) {
    if ((int const   )*__s != 0) {
      if ((int const   )*__s != (int const   )__accept1) {
        if (! ((int const   )*__s != (int const   )__accept2)) {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __s ++;
  }
  if ((int const   )*__s == 0) {
    tmp = (char *)((void *)0);
  } else {
    tmp = (char *)((unsigned int )__s);
  }
  return (tmp);
}
}

__inline static char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;

__inline static char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ char *tmp ;

  {
  while (1) {
    if ((int const   )*__s != 0) {
      if ((int const   )*__s != (int const   )__accept1) {
        if ((int const   )*__s != (int const   )__accept2) {
          if (! ((int const   )*__s != (int const   )__accept3)) {
            break;
          }
        } else {
          break;
        }
      } else {
        break;
      }
    } else {
      break;
    }
    __s ++;
  }
  if ((int const   )*__s == 0) {
    tmp = (char *)((void *)0);
  } else {
    tmp = (char *)((unsigned int )__s);
  }
  return (tmp);
}
}

__inline static char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) ;

__inline static char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) 
{ char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
  if ((unsigned int )__s == (unsigned int )((void *)0)) {
    __s = *__nextp;
  }
  while ((int )*__s == (int )__sep) {
    __s ++;
  }
  __result = (char *)((void *)0);
  if ((int )*__s != 0) {
    tmp = __s;
    __s ++;
    __result = tmp;
    while ((int )*__s != 0) {
      tmp___0 = __s;
      __s ++;
      if ((int )*tmp___0 == (int )__sep) {
        *(__s + -1) = (char )'\000';
        break;
      }
    }
    *__nextp = __s;
  }
  return (__result);
}
}

extern char *__strsep_g(char **__stringp , char const   *__delim ) ;

__inline static char *__strsep_1c(char **__s , char __reject ) ;

__inline static char *__strsep_1c(char **__s , char __reject ) 
{ register char *__retval ;
  char *tmp ;
  void *tmp___0 ;
  char *tmp___1 ;

  {
  __retval = *__s;
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    tmp___1 = __builtin_strchr(__retval, (int )__reject);
    *__s = tmp___1;
    if ((unsigned int )*__s != (unsigned int )((void *)0)) {
      tmp = *__s;
      (*__s) ++;
      *tmp = (char )'\000';
    }
  }
  return (__retval);
}
}

__inline static char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) ;

__inline static char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) 
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  __retval = *__s;
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    __cp = __retval;
    while (1) {
      if ((int )*__cp == 0) {
        __cp = (char *)((void *)0);
        break;
      }
      if ((int )*__cp == (int )__reject1) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else {
        if ((int )*__cp == (int )__reject2) {
          tmp = __cp;
          __cp ++;
          *tmp = (char )'\000';
          break;
        }
      }
      __cp ++;
    }
    *__s = __cp;
  }
  return (__retval);
}
}

__inline static char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) ;

__inline static char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) 
{ register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  __retval = *__s;
  if ((unsigned int )__retval != (unsigned int )((void *)0)) {
    __cp = __retval;
    while (1) {
      if ((int )*__cp == 0) {
        __cp = (char *)((void *)0);
        break;
      }
      if ((int )*__cp == (int )__reject1) {
        tmp = __cp;
        __cp ++;
        *tmp = (char )'\000';
        break;
      } else {
        if ((int )*__cp == (int )__reject2) {
          tmp = __cp;
          __cp ++;
          *tmp = (char )'\000';
          break;
        } else {
          if ((int )*__cp == (int )__reject3) {
            tmp = __cp;
            __cp ++;
            *tmp = (char )'\000';
            break;
          }
        }
      }
      __cp ++;
    }
    *__s = __cp;
  }
  return (__retval);
}
}

extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;

extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;

extern  __attribute__((__nothrow__)) char *__strdup(char const   *__string )  __attribute__((__malloc__)) ;

extern  __attribute__((__nothrow__)) char *__strndup(char const   *__string ,
                                                     size_t __n )  __attribute__((__malloc__)) ;

extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;

__inline static  __attribute__((__nothrow__)) double atof(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) int atoi(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) long atol(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) long long atoll(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) double strtod(char const   * __restrict  __nptr ,
                                                            char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) float strtof(char const   * __restrict  __nptr ,
                                                           char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) long double strtold(char const   * __restrict  __nptr ,
                                                                  char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) long strtol(char const   * __restrict  __nptr ,
                                                          char ** __restrict  __endptr ,
                                                          int __base )  __attribute__((__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) unsigned long strtoul(char const   * __restrict  __nptr ,
                                                                    char ** __restrict  __endptr ,
                                                                    int __base )  __attribute__((__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) long long strtoq(char const   * __restrict  __nptr ,
                                                               char ** __restrict  __endptr ,
                                                               int __base )  __attribute__((__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) unsigned long long strtouq(char const   * __restrict  __nptr ,
                                                                         char ** __restrict  __endptr ,
                                                                         int __base )  __attribute__((__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) long long strtoll(char const   * __restrict  __nptr ,
                                                                char ** __restrict  __endptr ,
                                                                int __base )  __attribute__((__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) unsigned long long strtoull(char const   * __restrict  __nptr ,
                                                                          char ** __restrict  __endptr ,
                                                                          int __base )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) double __strtod_internal(char const   * __restrict  __nptr ,
                                                              char ** __restrict  __endptr ,
                                                              int __group )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) float __strtof_internal(char const   * __restrict  __nptr ,
                                                             char ** __restrict  __endptr ,
                                                             int __group )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long double __strtold_internal(char const   * __restrict  __nptr ,
                                                                    char ** __restrict  __endptr ,
                                                                    int __group )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long __strtol_internal(char const   * __restrict  __nptr ,
                                                            char ** __restrict  __endptr ,
                                                            int __base ,
                                                            int __group )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) unsigned long __strtoul_internal(char const   * __restrict  __nptr ,
                                                                      char ** __restrict  __endptr ,
                                                                      int __base ,
                                                                      int __group )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long long __strtoll_internal(char const   * __restrict  __nptr ,
                                                                  char ** __restrict  __endptr ,
                                                                  int __base ,
                                                                  int __group )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) unsigned long long __strtoull_internal(char const   * __restrict  __nptr ,
                                                                            char ** __restrict  __endptr ,
                                                                            int __base ,
                                                                            int __group )  __attribute__((__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) double strtod(char const   * __restrict  __nptr ,
                                                            char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
__inline static double strtod(char const   * __restrict  __nptr ,
                              char ** __restrict  __endptr ) 
{ double tmp ;

  {
  tmp = __strtod_internal(__nptr, __endptr, 0);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) long strtol(char const   * __restrict  __nptr ,
                                                          char ** __restrict  __endptr ,
                                                          int __base )  __attribute__((__nonnull__(1))) ;
__inline static long strtol(char const   * __restrict  __nptr ,
                            char ** __restrict  __endptr , int __base ) 
{ long tmp ;

  {
  tmp = __strtol_internal(__nptr, __endptr, __base, 0);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) unsigned long strtoul(char const   * __restrict  __nptr ,
                                                                    char ** __restrict  __endptr ,
                                                                    int __base )  __attribute__((__nonnull__(1))) ;
__inline static unsigned long strtoul(char const   * __restrict  __nptr ,
                                      char ** __restrict  __endptr , int __base ) 
{ unsigned long tmp ;

  {
  tmp = __strtoul_internal(__nptr, __endptr, __base, 0);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) float strtof(char const   * __restrict  __nptr ,
                                                           char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
__inline static float strtof(char const   * __restrict  __nptr ,
                             char ** __restrict  __endptr ) 
{ float tmp ;

  {
  tmp = __strtof_internal(__nptr, __endptr, 0);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) long double strtold(char const   * __restrict  __nptr ,
                                                                  char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;
__inline static long double strtold(char const   * __restrict  __nptr ,
                                    char ** __restrict  __endptr ) 
{ long double tmp ;

  {
  tmp = __strtold_internal(__nptr, __endptr, 0);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) long long strtoq(char const   * __restrict  __nptr ,
                                                               char ** __restrict  __endptr ,
                                                               int __base )  __attribute__((__nonnull__(1))) ;
__inline static long long strtoq(char const   * __restrict  __nptr ,
                                 char ** __restrict  __endptr , int __base ) 
{ long long tmp ;

  {
  tmp = __strtoll_internal(__nptr, __endptr, __base, 0);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) unsigned long long strtouq(char const   * __restrict  __nptr ,
                                                                         char ** __restrict  __endptr ,
                                                                         int __base )  __attribute__((__nonnull__(1))) ;
__inline static unsigned long long strtouq(char const   * __restrict  __nptr ,
                                           char ** __restrict  __endptr ,
                                           int __base ) 
{ unsigned long long tmp ;

  {
  tmp = __strtoull_internal(__nptr, __endptr, __base, 0);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) long long strtoll(char const   * __restrict  __nptr ,
                                                                char ** __restrict  __endptr ,
                                                                int __base )  __attribute__((__nonnull__(1))) ;
__inline static long long strtoll(char const   * __restrict  __nptr ,
                                  char ** __restrict  __endptr , int __base ) 
{ long long tmp ;

  {
  tmp = __strtoll_internal(__nptr, __endptr, __base, 0);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) unsigned long long strtoull(char const   * __restrict  __nptr ,
                                                                          char ** __restrict  __endptr ,
                                                                          int __base )  __attribute__((__nonnull__(1))) ;
__inline static unsigned long long strtoull(char const   * __restrict  __nptr ,
                                            char ** __restrict  __endptr ,
                                            int __base ) 
{ unsigned long long tmp ;

  {
  tmp = __strtoull_internal(__nptr, __endptr, __base, 0);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) double atof(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
__inline static double atof(char const   *__nptr ) 
{ double tmp ;

  {
  tmp = strtod((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)));
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) int atoi(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
__inline static int atoi(char const   *__nptr ) 
{ long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  return ((int )tmp);
}
}

__inline static  __attribute__((__nothrow__)) long atol(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
__inline static long atol(char const   *__nptr ) 
{ long tmp ;

  {
  tmp = strtol((char const   */* __restrict  */)__nptr,
               (char **/* __restrict  */)((char **)((void *)0)), 10);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) long long atoll(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;
__inline static long long atoll(char const   *__nptr ) 
{ long long tmp ;

  {
  tmp = strtoll((char const   */* __restrict  */)__nptr,
                (char **/* __restrict  */)((char **)((void *)0)), 10);
  return (tmp);
}
}

extern  __attribute__((__nothrow__)) char *l64a(long __n ) ;

extern  __attribute__((__nothrow__)) long a64l(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long random(void) ;

extern  __attribute__((__nothrow__)) void srandom(unsigned int __seed ) ;

extern  __attribute__((__nothrow__)) char *initstate(unsigned int __seed ,
                                                     char *__statebuf ,
                                                     size_t __statelen )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) char *setstate(char *__statebuf )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int random_r(struct random_data * __restrict  __buf ,
                                                  int32_t * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int srandom_r(unsigned int __seed ,
                                                   struct random_data *__buf )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) int initstate_r(unsigned int __seed ,
                                                     char * __restrict  __statebuf ,
                                                     size_t __statelen ,
                                                     struct random_data * __restrict  __buf )  __attribute__((__nonnull__(2,4))) ;

extern  __attribute__((__nothrow__)) int setstate_r(char * __restrict  __statebuf ,
                                                    struct random_data * __restrict  __buf )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int rand(void) ;

extern  __attribute__((__nothrow__)) void srand(unsigned int __seed ) ;

extern  __attribute__((__nothrow__)) int rand_r(unsigned int *__seed ) ;

extern  __attribute__((__nothrow__)) double drand48(void) ;

extern  __attribute__((__nothrow__)) double erand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long lrand48(void) ;

extern  __attribute__((__nothrow__)) long nrand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long mrand48(void) ;

extern  __attribute__((__nothrow__)) long jrand48(unsigned short *__xsubi )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) void srand48(long __seedval ) ;

extern  __attribute__((__nothrow__)) unsigned short *seed48(unsigned short *__seed16v )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) void lcong48(unsigned short *__param )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int drand48_r(struct drand48_data * __restrict  __buffer ,
                                                   double * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int erand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   double * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int lrand48_r(struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int nrand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int mrand48_r(struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int jrand48_r(unsigned short *__xsubi ,
                                                   struct drand48_data * __restrict  __buffer ,
                                                   long * __restrict  __result )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int srand48_r(long __seedval ,
                                                   struct drand48_data *__buffer )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) int seed48_r(unsigned short *__seed16v ,
                                                  struct drand48_data *__buffer )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int lcong48_r(unsigned short *__param ,
                                                   struct drand48_data *__buffer )  __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) void *realloc(void *__ptr , size_t __size )  __attribute__((__warn_unused_result__,
__malloc__)) ;

extern  __attribute__((__nothrow__)) void free(void *__ptr ) ;

extern  __attribute__((__nothrow__)) void cfree(void *__ptr ) ;

extern  __attribute__((__nothrow__)) void *alloca(size_t __size ) ;

extern  __attribute__((__nothrow__)) void *valloc(size_t __size )  __attribute__((__malloc__)) ;

extern  __attribute__((__nothrow__)) int posix_memalign(void **__memptr ,
                                                        size_t __alignment ,
                                                        size_t __size )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void) ;

extern  __attribute__((__nothrow__)) int atexit(void (*__func)(void) )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int on_exit(void (*__func)(int __status ,
                                                                void *__arg ) ,
                                                 void *__arg )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status ) ;

extern  __attribute__((__nothrow__, __noreturn__)) void _Exit(int __status ) ;

extern  __attribute__((__nothrow__)) char *getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *__secure_getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int putenv(char *__string )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int setenv(char const   *__name ,
                                                char const   *__value ,
                                                int __replace )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) int unsetenv(char const   *__name ) ;

extern  __attribute__((__nothrow__)) int clearenv(void) ;

extern  __attribute__((__nothrow__)) char *mktemp(char *__template )  __attribute__((__nonnull__(1))) ;

extern int mkstemp(char *__template )  __asm__("mkstemp64") __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *mkdtemp(char *__template )  __attribute__((__nonnull__(1))) ;

extern int system(char const   *__command ) ;

extern  __attribute__((__nothrow__)) char *realpath(char const   * __restrict  __name ,
                                                    char * __restrict  __resolved ) ;

extern void *bsearch(void const   *__key , void const   *__base ,
                     size_t __nmemb , size_t __size ,
                     int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,2,5))) ;

extern void qsort(void *__base , size_t __nmemb , size_t __size ,
                  int (*__compar)(void const   * , void const   * ) )  __attribute__((__nonnull__(1,4))) ;

extern  __attribute__((__nothrow__)) int abs(int __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long labs(long __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) long long llabs(long long __x )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) div_t div(int __numer , int __denom )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) ldiv_t ldiv(long __numer , long __denom )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) lldiv_t lldiv(long long __numer ,
                                                   long long __denom )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) char *ecvt(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;

extern  __attribute__((__nothrow__)) char *fcvt(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;

extern  __attribute__((__nothrow__)) char *gcvt(double __value , int __ndigit ,
                                                char *__buf )  __attribute__((__nonnull__(3))) ;

extern  __attribute__((__nothrow__)) char *qecvt(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;

extern  __attribute__((__nothrow__)) char *qfcvt(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign )  __attribute__((__nonnull__(3,4))) ;

extern  __attribute__((__nothrow__)) char *qgcvt(long double __value ,
                                                 int __ndigit , char *__buf )  __attribute__((__nonnull__(3))) ;

extern  __attribute__((__nothrow__)) int ecvt_r(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign ,
                                                char * __restrict  __buf ,
                                                size_t __len )  __attribute__((__nonnull__(3,4,5))) ;

extern  __attribute__((__nothrow__)) int fcvt_r(double __value , int __ndigit ,
                                                int * __restrict  __decpt ,
                                                int * __restrict  __sign ,
                                                char * __restrict  __buf ,
                                                size_t __len )  __attribute__((__nonnull__(3,4,5))) ;

extern  __attribute__((__nothrow__)) int qecvt_r(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign ,
                                                 char * __restrict  __buf ,
                                                 size_t __len )  __attribute__((__nonnull__(3,4,5))) ;

extern  __attribute__((__nothrow__)) int qfcvt_r(long double __value ,
                                                 int __ndigit ,
                                                 int * __restrict  __decpt ,
                                                 int * __restrict  __sign ,
                                                 char * __restrict  __buf ,
                                                 size_t __len )  __attribute__((__nonnull__(3,4,5))) ;

extern  __attribute__((__nothrow__)) int mblen(char const   *__s , size_t __n ) ;

extern  __attribute__((__nothrow__)) int mbtowc(wchar_t * __restrict  __pwc ,
                                                char const   * __restrict  __s ,
                                                size_t __n ) ;

extern  __attribute__((__nothrow__)) int wctomb(char *__s , wchar_t __wchar ) ;

extern  __attribute__((__nothrow__)) size_t mbstowcs(wchar_t * __restrict  __pwcs ,
                                                     char const   * __restrict  __s ,
                                                     size_t __n ) ;

extern  __attribute__((__nothrow__)) size_t wcstombs(char * __restrict  __s ,
                                                     wchar_t const   * __restrict  __pwcs ,
                                                     size_t __n ) ;

extern  __attribute__((__nothrow__)) int rpmatch(char const   *__response )  __attribute__((__nonnull__(1))) ;

extern int posix_openpt(int __oflag ) ;

extern  __attribute__((__nothrow__)) int getloadavg(double *__loadavg ,
                                                    int __nelem )  __attribute__((__nonnull__(1))) ;

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

__inline static  __attribute__((__nothrow__)) int tolower(int __c ) ;

__inline static  __attribute__((__nothrow__)) int toupper(int __c ) ;

extern  __attribute__((__nothrow__)) int isblank(int  ) ;

extern  __attribute__((__nothrow__)) int isascii(int __c ) ;

extern  __attribute__((__nothrow__)) int toascii(int __c ) ;

extern  __attribute__((__nothrow__)) int _toupper(int  ) ;

extern  __attribute__((__nothrow__)) int _tolower(int  ) ;

__inline static  __attribute__((__nothrow__)) int tolower(int __c ) ;
__inline static int tolower(int __c ) 
{ __int32_t const   **tmp ;
  __int32_t tmp___0 ;
  __int32_t const   **tmp___1 ;

  {
  if (__c >= -128) {
    if (__c < 256) {
      tmp___1 = __ctype_tolower_loc();
      tmp___0 = (int )*(*tmp___1 + __c);
    } else {
      tmp___0 = (int )((int const   )__c);
    }
  } else {
    tmp___0 = (int )((int const   )__c);
  }
  return (tmp___0);
}
}

__inline static  __attribute__((__nothrow__)) int toupper(int __c ) ;
__inline static int toupper(int __c ) 
{ __int32_t const   **tmp ;
  __int32_t tmp___0 ;
  __int32_t const   **tmp___1 ;

  {
  if (__c >= -128) {
    if (__c < 256) {
      tmp___1 = __ctype_toupper_loc();
      tmp___0 = (int )*(*tmp___1 + __c);
    } else {
      tmp___0 = (int )((int const   )__c);
    }
  } else {
    tmp___0 = (int )((int const   )__c);
  }
  return (tmp___0);
}
}

extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_fail(char const   *__assertion ,
                                  char const   *__file , unsigned int __line ,
                                  char const   *__function ) ;

extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_perror_fail(int __errnum , char const   *__file ,
                                         unsigned int __line ,
                                         char const   *__function ) ;

extern  __attribute__((__nothrow__,
__noreturn__)) void __assert(char const   *__assertion , char const   *__file ,
                             int __line ) ;

__inline static int __sigismember(__sigset_t const   *__set , int __sig ) ;

__inline static int __sigaddset(__sigset_t *__set , int __sig ) ;

__inline static int __sigdelset(__sigset_t *__set , int __sig ) ;

__inline static int __sigismember(__sigset_t const   *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;
  int tmp ;

  {
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  if (__set->__val[__word] & __mask) {
    tmp = 1;
  } else {
    tmp = 0;
  }
  return (tmp);
}
}

__inline static int __sigaddset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  __set->__val[__word] |= __mask;
  return (0);
}
}

__inline static int __sigdelset(__sigset_t *__set , int __sig ) 
{ unsigned long __mask ;
  unsigned long __word ;

  {
  __mask = 1UL << (unsigned int )(__sig - 1) % (8U * sizeof(unsigned long ));
  __word = (unsigned long )((unsigned int )(__sig - 1) / (8U * sizeof(unsigned long )));
  __set->__val[__word] &= ~ __mask;
  return (0);
}
}

extern  __attribute__((__nothrow__)) __sighandler_t __sysv_signal(int __sig ,
                                                                  void (*__handler)(int  ) ) ;

extern  __attribute__((__nothrow__)) __sighandler_t signal(int __sig ,
                                                           void (*__handler)(int  ) ) ;

extern  __attribute__((__nothrow__)) int kill(__pid_t __pid , int __sig ) ;

extern  __attribute__((__nothrow__)) int killpg(__pid_t __pgrp , int __sig ) ;

extern  __attribute__((__nothrow__)) int raise(int __sig ) ;

extern  __attribute__((__nothrow__)) __sighandler_t ssignal(int __sig ,
                                                            void (*__handler)(int  ) ) ;

extern  __attribute__((__nothrow__)) int gsignal(int __sig ) ;

extern void psignal(int __sig , char const   *__s ) ;

extern int __sigpause(int __sig_or_mask , int __is_sig ) ;

extern  __attribute__((__nothrow__)) int sigblock(int __mask )  __attribute__((__deprecated__)) ;

extern  __attribute__((__nothrow__)) int sigsetmask(int __mask )  __attribute__((__deprecated__)) ;

extern  __attribute__((__nothrow__)) int siggetmask(void)  __attribute__((__deprecated__)) ;

extern  __attribute__((__nothrow__)) int sigemptyset(sigset_t *__set )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int sigfillset(sigset_t *__set )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int sigaddset(sigset_t *__set ,
                                                   int __signo )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int sigdelset(sigset_t *__set ,
                                                   int __signo )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int sigismember(sigset_t const   *__set ,
                                                     int __signo )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int sigprocmask(int __how ,
                                                     sigset_t const   * __restrict  __set ,
                                                     sigset_t * __restrict  __oset ) ;

extern int sigsuspend(sigset_t const   *__set )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int sigaction(int __sig ,
                                                   struct sigaction  const  * __restrict  __act ,
                                                   struct sigaction * __restrict  __oact ) ;

extern  __attribute__((__nothrow__)) int sigpending(sigset_t *__set )  __attribute__((__nonnull__(1))) ;

extern int sigwait(sigset_t const   * __restrict  __set ,
                   int * __restrict  __sig )  __attribute__((__nonnull__(1,2))) ;

extern int sigwaitinfo(sigset_t const   * __restrict  __set ,
                       siginfo_t * __restrict  __info )  __attribute__((__nonnull__(1))) ;

extern int sigtimedwait(sigset_t const   * __restrict  __set ,
                        siginfo_t * __restrict  __info ,
                        struct timespec  const  * __restrict  __timeout )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int sigqueue(__pid_t __pid , int __sig ,
                                                  union sigval __val ) ;

extern char const   * const  _sys_siglist[65] ;

extern char const   * const  sys_siglist[65] ;

extern  __attribute__((__nothrow__)) int sigvec(int __sig ,
                                                struct sigvec  const  *__vec ,
                                                struct sigvec *__ovec ) ;

extern  __attribute__((__nothrow__)) int sigreturn(struct sigcontext *__scp ) ;

extern  __attribute__((__nothrow__)) int siginterrupt(int __sig ,
                                                      int __interrupt ) ;

extern  __attribute__((__nothrow__)) int sigstack(struct sigstack *__ss ,
                                                  struct sigstack *__oss )  __attribute__((__deprecated__)) ;

extern  __attribute__((__nothrow__)) int sigaltstack(struct sigaltstack  const  * __restrict  __ss ,
                                                     struct sigaltstack * __restrict  __oss ) ;

extern  __attribute__((__nothrow__)) int pthread_sigmask(int __how ,
                                                         __sigset_t const   * __restrict  __newmask ,
                                                         __sigset_t * __restrict  __oldmask ) ;

extern  __attribute__((__nothrow__)) int pthread_kill(pthread_t __threadid ,
                                                      int __signo ) ;

extern  __attribute__((__nothrow__)) int __libc_current_sigrtmin(void) ;

extern  __attribute__((__nothrow__)) int __libc_current_sigrtmax(void) ;

extern buffer_array *buffer_array_init(void) ;

extern void buffer_array_free(buffer_array *b ) ;

extern void buffer_array_reset(buffer_array *b ) ;

extern buffer *buffer_array_append_get_buffer(buffer_array *b ) ;

extern buffer *buffer_init(void) ;

extern buffer *buffer_init_buffer(buffer *b ) ;

extern buffer *buffer_init_string(char const   *str ) ;

extern void buffer_free(buffer *b ) ;

extern void buffer_reset(buffer *b ) ;

extern int buffer_prepare_copy(buffer *b , size_t size ) ;

extern int buffer_prepare_append(buffer *b , size_t size ) ;

extern int buffer_copy_string(buffer *b , char const   *s ) ;

extern int buffer_copy_string_len(buffer *b , char const   *s , size_t s_len ) ;

extern int buffer_copy_string_buffer(buffer *b , buffer const   *src ) ;

extern int buffer_copy_string_hex(buffer *b , char const   *in , size_t in_len ) ;

extern int buffer_copy_long(buffer *b , long val ) ;

extern int buffer_copy_memory(buffer *b , char const   *s , size_t s_len ) ;

extern int buffer_append_string(buffer *b , char const   *s ) ;

extern int buffer_append_string_len(buffer *b , char const   *s , size_t s_len ) ;

extern int buffer_append_string_buffer(buffer *b , buffer const   *src ) ;

extern int buffer_append_string_lfill(buffer *b , char const   *s ,
                                      size_t maxlen ) ;

extern int buffer_append_string_rfill(buffer *b , char const   *s ,
                                      size_t maxlen ) ;

extern int buffer_append_long_hex(buffer *b , unsigned long len ) ;

extern int buffer_append_long(buffer *b , long val ) ;

extern int buffer_copy_off_t(buffer *b , off_t val ) ;

extern int buffer_append_off_t(buffer *b , off_t val ) ;

extern int buffer_append_memory(buffer *b , char const   *s , size_t s_len ) ;

extern char *buffer_search_string_len(buffer *b , char const   *needle ,
                                      size_t len ) ;

extern int buffer_is_empty(buffer *b ) ;

extern int buffer_is_equal(buffer *a , buffer *b ) ;

extern int buffer_is_equal_right_len(buffer *a , buffer *b , size_t len ) ;

extern int buffer_is_equal_string(buffer *a , char const   *s , size_t b_len ) ;

extern int buffer_caseless_compare(char const   *a , size_t a_len ,
                                   char const   *b , size_t b_len ) ;

extern int buffer_append_string_encoded(buffer *b , char const   *s ,
                                        size_t s_len ,
                                        buffer_encoding_t encoding ) ;

extern int buffer_urldecode_path(buffer *url ) ;

extern int buffer_urldecode_query(buffer *url ) ;

extern int buffer_path_simplify(buffer *dest , buffer *src ) ;

extern int buffer_to_lower(buffer *b ) ;

extern int buffer_to_upper(buffer *b ) ;

extern int LI_ltostr(char *buf , long val ) ;

extern char hex2int(unsigned char c ) ;

extern char int2hex(char i ) ;

extern int light_isdigit(int c ) ;

extern int light_isxdigit(int c ) ;

extern int light_isalpha(int c ) ;

extern int light_isalnum(int c ) ;

extern  __attribute__((__nothrow__)) int gettimeofday(struct timeval * __restrict  __tv ,
                                                      __timezone_ptr_t __tz )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int settimeofday(struct timeval  const  *__tv ,
                                                      struct timezone  const  *__tz )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int adjtime(struct timeval  const  *__delta ,
                                                 struct timeval *__olddelta ) ;

extern  __attribute__((__nothrow__)) int getitimer(__itimer_which_t __which ,
                                                   struct itimerval *__value ) ;

extern  __attribute__((__nothrow__)) int setitimer(__itimer_which_t __which ,
                                                   struct itimerval  const  * __restrict  __new ,
                                                   struct itimerval * __restrict  __old ) ;

extern  __attribute__((__nothrow__)) int utimes(char const   *__file ,
                                                struct timeval  const  *__tvp )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int lutimes(char const   *__file ,
                                                 struct timeval  const  *__tvp )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int futimes(int __fd ,
                                                 struct timeval  const  *__tvp ) ;

__inline static  __attribute__((__nothrow__)) int stat(char const   * __restrict  __path ,
                                                       struct stat * __restrict  __statbuf )  __asm__("stat64") __attribute__((__nonnull__(1,2))) ;

__inline static  __attribute__((__nothrow__)) int fstat(int __fd ,
                                                        struct stat *__statbuf )  __asm__("fstat64") __attribute__((__nonnull__(2))) ;

__inline static  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __path ,
                                                        struct stat * __restrict  __statbuf )  __asm__("lstat64") __attribute__((__nonnull__(1,2))) ;

extern  __attribute__((__nothrow__)) int chmod(char const   *__file ,
                                               __mode_t __mode )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int lchmod(char const   *__file ,
                                                __mode_t __mode )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int fchmod(int __fd , __mode_t __mode ) ;

extern  __attribute__((__nothrow__)) __mode_t umask(__mode_t __mask ) ;

extern  __attribute__((__nothrow__)) int mkdir(char const   *__path ,
                                               __mode_t __mode )  __attribute__((__nonnull__(1))) ;

__inline static  __attribute__((__nothrow__)) int mknod(char const   *__path ,
                                                        __mode_t __mode ,
                                                        __dev_t __dev )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int mkfifo(char const   *__path ,
                                                __mode_t __mode )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int __fxstat(int __ver , int __fildes ,
                                                  struct stat *__stat_buf )  __asm__("__fxstat64") __attribute__((__nonnull__(3))) ;

extern  __attribute__((__nothrow__)) int __xstat(int __ver ,
                                                 char const   *__filename ,
                                                 struct stat *__stat_buf )  __asm__("__xstat64") __attribute__((__nonnull__(2,3))) ;

extern  __attribute__((__nothrow__)) int __lxstat(int __ver ,
                                                  char const   *__filename ,
                                                  struct stat *__stat_buf )  __asm__("__lxstat64") __attribute__((__nonnull__(2,3))) ;

extern  __attribute__((__nothrow__)) int __fxstatat(int __ver , int __fildes ,
                                                    char const   *__filename ,
                                                    struct stat *__stat_buf ,
                                                    int __flag )  __asm__("__fxstatat64") __attribute__((__nonnull__(3,4))) ;

extern  __attribute__((__nothrow__)) int __xmknod(int __ver ,
                                                  char const   *__path ,
                                                  __mode_t __mode ,
                                                  __dev_t *__dev )  __attribute__((__nonnull__(2,4))) ;

extern  __attribute__((__nothrow__)) int __xmknodat(int __ver , int __fd ,
                                                    char const   *__path ,
                                                    __mode_t __mode ,
                                                    __dev_t *__dev )  __attribute__((__nonnull__(3,5))) ;

__inline static  __attribute__((__nothrow__)) int stat(char const   * __restrict  __path ,
                                                       struct stat * __restrict  __statbuf )  __asm__("stat64") __attribute__((__nonnull__(1,2))) ;
__inline static int stat(char const   * __restrict  __path ,
                         struct stat * __restrict  __statbuf ) 
{ int tmp ;

  {
  tmp = __xstat(3, (char const   *)__path, (struct stat *)__statbuf);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) int lstat(char const   * __restrict  __path ,
                                                        struct stat * __restrict  __statbuf )  __asm__("lstat64") __attribute__((__nonnull__(1,2))) ;
__inline static int lstat(char const   * __restrict  __path ,
                          struct stat * __restrict  __statbuf ) 
{ int tmp ;

  {
  tmp = __lxstat(3, (char const   *)__path, (struct stat *)__statbuf);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) int fstat(int __fd ,
                                                        struct stat *__statbuf )  __asm__("fstat64") __attribute__((__nonnull__(2))) ;
__inline static int fstat(int __fd , struct stat *__statbuf ) 
{ int tmp ;

  {
  tmp = __fxstat(3, __fd, __statbuf);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) int mknod(char const   *__path ,
                                                        __mode_t __mode ,
                                                        __dev_t __dev )  __attribute__((__nonnull__(1))) ;
__inline static int mknod(char const   *__path , __mode_t __mode ,
                          __dev_t __dev ) 
{ int tmp ;

  {
  tmp = __xmknod(1, __path, __mode, & __dev);
  return (tmp);
}
}

extern  __attribute__((__nothrow__)) intmax_t imaxabs(intmax_t __n )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) imaxdiv_t imaxdiv(intmax_t __numer ,
                                                       intmax_t __denom )  __attribute__((__const__)) ;

__inline static  __attribute__((__nothrow__)) intmax_t strtoimax(char const   * __restrict  nptr ,
                                                                 char ** __restrict  endptr ,
                                                                 int base ) ;

__inline static  __attribute__((__nothrow__)) uintmax_t strtoumax(char const   * __restrict  nptr ,
                                                                  char ** __restrict  endptr ,
                                                                  int base ) ;

__inline static  __attribute__((__nothrow__)) intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                                                 __gwchar_t ** __restrict  endptr ,
                                                                 int base ) ;

__inline static  __attribute__((__nothrow__)) uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                                                  __gwchar_t ** __restrict  endptr ,
                                                                  int base ) ;

__inline static  __attribute__((__nothrow__)) intmax_t strtoimax(char const   * __restrict  nptr ,
                                                                 char ** __restrict  endptr ,
                                                                 int base ) ;
__inline static intmax_t strtoimax(char const   * __restrict  nptr ,
                                   char ** __restrict  endptr , int base ) 
{ long long tmp ;

  {
  tmp = __strtoll_internal(nptr, endptr, base, 0);
  return (tmp);
}
}

__inline static  __attribute__((__nothrow__)) uintmax_t strtoumax(char const   * __restrict  nptr ,
                                                                  char ** __restrict  endptr ,
                                                                  int base ) ;
__inline static uintmax_t strtoumax(char const   * __restrict  nptr ,
                                    char ** __restrict  endptr , int base ) 
{ unsigned long long tmp ;

  {
  tmp = __strtoull_internal(nptr, endptr, base, 0);
  return (tmp);
}
}

extern  __attribute__((__nothrow__)) long long __wcstoll_internal(__gwchar_t const   * __restrict  __nptr ,
                                                                  __gwchar_t ** __restrict  __endptr ,
                                                                  int __base ,
                                                                  int __group ) ;

__inline static  __attribute__((__nothrow__)) intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                                                 __gwchar_t ** __restrict  endptr ,
                                                                 int base ) ;
__inline static intmax_t wcstoimax(__gwchar_t const   * __restrict  nptr ,
                                   __gwchar_t ** __restrict  endptr , int base ) 
{ long long tmp ;

  {
  tmp = __wcstoll_internal(nptr, endptr, base, 0);
  return (tmp);
}
}

extern  __attribute__((__nothrow__)) unsigned long long __wcstoull_internal(__gwchar_t const   * __restrict  __nptr ,
                                                                            __gwchar_t ** __restrict  __endptr ,
                                                                            int __base ,
                                                                            int __group ) ;

__inline static  __attribute__((__nothrow__)) uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                                                  __gwchar_t ** __restrict  endptr ,
                                                                  int base ) ;
__inline static uintmax_t wcstoumax(__gwchar_t const   * __restrict  nptr ,
                                    __gwchar_t ** __restrict  endptr , int base ) 
{ unsigned long long tmp ;

  {
  tmp = __wcstoull_internal(nptr, endptr, base, 0);
  return (tmp);
}
}

extern void *(*pcre_malloc)(size_t  ) ;

extern void (*pcre_free)(void * ) ;

extern void *(*pcre_stack_malloc)(size_t  ) ;

extern void (*pcre_stack_free)(void * ) ;

extern int (*pcre_callout)(pcre_callout_block * ) ;

extern pcre *pcre_compile(char const   * , int  , char const   ** , int * ,
                          unsigned char const   * ) ;

extern pcre *pcre_compile2(char const   * , int  , int * , char const   ** ,
                           int * , unsigned char const   * ) ;

extern int pcre_config(int  , void * ) ;

extern int pcre_copy_named_substring(pcre const   * , char const   * , int * ,
                                     int  , char const   * , char * , int  ) ;

extern int pcre_copy_substring(char const   * , int * , int  , int  , char * ,
                               int  ) ;

extern int pcre_dfa_exec(pcre const   * , pcre_extra const   * ,
                         char const   * , int  , int  , int  , int * , int  ,
                         int * , int  ) ;

extern int pcre_exec(pcre const   * , pcre_extra const   * , char const   * ,
                     int  , int  , int  , int * , int  ) ;

extern void pcre_free_substring(char const   * ) ;

extern void pcre_free_substring_list(char const   ** ) ;

extern int pcre_fullinfo(pcre const   * , pcre_extra const   * , int  , void * ) ;

extern int pcre_get_named_substring(pcre const   * , char const   * , int * ,
                                    int  , char const   * , char const   ** ) ;

extern int pcre_get_stringnumber(pcre const   * , char const   * ) ;

extern int pcre_get_stringtable_entries(pcre const   * , char const   * ,
                                        char ** , char ** ) ;

extern int pcre_get_substring(char const   * , int * , int  , int  ,
                              char const   ** ) ;

extern int pcre_get_substring_list(char const   * , int * , int  ,
                                   char const   *** ) ;

extern int pcre_info(pcre const   * , int * , int * ) ;

extern unsigned char const   *pcre_maketables(void) ;

extern int pcre_refcount(pcre * , int  ) ;

extern pcre_extra *pcre_study(pcre const   * , int  , char const   ** ) ;

extern char const   *pcre_version(void) ;

extern data_count *data_count_init(void) ;

extern data_string *data_string_init(void) ;

extern data_string *data_response_init(void) ;

extern data_array *data_array_init(void) ;

extern data_config *data_config_init(void) ;

extern data_integer *data_integer_init(void) ;

extern data_fastcgi *data_fastcgi_init(void) ;

extern array *array_init(void) ;

extern array *array_init_array(array *a ) ;

extern void array_free(array *a ) ;

extern void array_reset(array *a ) ;

extern int array_insert_unique(array *a , data_unset *str ) ;

extern data_unset *array_pop(array *a ) ;

extern int array_print(array *a , int depth ) ;

extern data_unset *array_get_unused_element(array *a , data_type_t t ) ;

extern data_unset *array_get_element(array *a , char const   *key ) ;

extern data_unset *array_replace(array *a , data_unset *du ) ;

extern int array_strcasecmp(char const   *a , size_t a_len , char const   *b ,
                            size_t b_len ) ;

extern void array_print_indent(int depth ) ;

extern size_t array_get_max_key_length(array *a ) ;

extern chunkqueue *chunkqueue_init(void) ;

extern int chunkqueue_set_tempdirs(chunkqueue *c , array *tempdirs ) ;

extern int chunkqueue_append_file(chunkqueue *c , buffer *fn , off_t offset ,
                                  off_t len ) ;

extern int chunkqueue_append_mem(chunkqueue *c , char const   *mem , size_t len ) ;

extern int chunkqueue_append_buffer(chunkqueue *c , buffer *mem ) ;

extern int chunkqueue_append_buffer_weak(chunkqueue *c , buffer *mem ) ;

extern int chunkqueue_prepend_buffer(chunkqueue *c , buffer *mem ) ;

extern buffer *chunkqueue_get_append_buffer(chunkqueue *c ) ;

extern buffer *chunkqueue_get_prepend_buffer(chunkqueue *c ) ;

extern chunk *chunkqueue_get_append_tempfile(chunkqueue *cq ) ;

extern int chunkqueue_remove_finished_chunks(chunkqueue *cq ) ;

extern off_t chunkqueue_length(chunkqueue *c ) ;

extern off_t chunkqueue_written(chunkqueue *c ) ;

extern void chunkqueue_free(chunkqueue *c ) ;

extern void chunkqueue_reset(chunkqueue *c ) ;

extern int chunkqueue_is_empty(chunkqueue *c ) ;

extern char const   *get_http_status_name(int i ) ;

extern char const   *get_http_version_name(int i ) ;

extern char const   *get_http_method_name(http_method_t i ) ;

extern char const   *get_http_status_body_name(int i ) ;

extern int get_http_version_key(char const   *s ) ;

extern http_method_t get_http_method_key(char const   *s ) ;

extern char const   *keyvalue_get_value(keyvalue *kv , int k ) ;

extern int keyvalue_get_key(keyvalue *kv , char const   *s ) ;

extern keyvalue_buffer *keyvalue_buffer_init(void) ;

extern int keyvalue_buffer_append(keyvalue_buffer *kvb , int k ,
                                  char const   *value ) ;

extern void keyvalue_buffer_free(keyvalue_buffer *kvb ) ;

extern s_keyvalue_buffer *s_keyvalue_buffer_init(void) ;

extern int s_keyvalue_buffer_append(s_keyvalue_buffer *kvb , char const   *key ,
                                    char const   *value ) ;

extern void s_keyvalue_buffer_free(s_keyvalue_buffer *kvb ) ;

extern httpauth_keyvalue_buffer *httpauth_keyvalue_buffer_init(void) ;

extern int httpauth_keyvalue_buffer_append(httpauth_keyvalue_buffer *kvb ,
                                           char const   *key ,
                                           char const   *realm ,
                                           httpauth_type type ) ;

extern void httpauth_keyvalue_buffer_free(httpauth_keyvalue_buffer *kvb ) ;

extern pcre_keyvalue_buffer *pcre_keyvalue_buffer_init(void) ;

extern int pcre_keyvalue_buffer_append(pcre_keyvalue_buffer *kvb ,
                                       char const   *key , char const   *value ) ;

extern void pcre_keyvalue_buffer_free(pcre_keyvalue_buffer *kvb ) ;

extern bitset *bitset_init(size_t nbits ) ;

extern void bitset_reset(bitset *set ) ;

extern void bitset_free(bitset *set ) ;

extern void bitset_clear_bit(bitset *set , size_t pos ) ;

extern void bitset_set_bit(bitset *set , size_t pos ) ;

extern int bitset_test_bit(bitset *set , size_t pos ) ;

extern  __attribute__((__nothrow__)) int epoll_create(int __size ) ;

extern  __attribute__((__nothrow__)) int epoll_ctl(int __epfd , int __op ,
                                                   int __fd ,
                                                   struct epoll_event *__event ) ;

extern int epoll_wait(int __epfd , struct epoll_event *__events ,
                      int __maxevents , int __timeout ) ;

extern int epoll_pwait(int __epfd , struct epoll_event *__events ,
                       int __maxevents , int __timeout ,
                       __sigset_t const   *__ss ) ;

extern int poll(struct pollfd *__fds , nfds_t __nfds , int __timeout ) ;

extern fdevents *fdevent_init(size_t maxfds , fdevent_handler_t type ) ;

extern int fdevent_reset(fdevents *ev ) ;

extern void fdevent_free(fdevents *ev ) ;

extern int fdevent_event_add(fdevents *ev , int *fde_ndx , int fd , int events ) ;

extern int fdevent_event_del(fdevents *ev , int *fde_ndx , int fd ) ;

extern int fdevent_event_get_revent(fdevents *ev , size_t ndx ) ;

extern int fdevent_event_get_fd(fdevents *ev , size_t ndx ) ;

extern fdevent_handler fdevent_get_handler(fdevents *ev , int fd ) ;

extern void *fdevent_get_context(fdevents *ev , int fd ) ;

extern int fdevent_event_next_fdndx(fdevents *ev , int ndx ) ;

extern int fdevent_poll(fdevents *ev , int timeout_ms ) ;

extern int fdevent_register(fdevents *ev , int fd ,
                            handler_t (*handler)(void *srv , void *ctx ,
                                                 int revents ) , void *ctx ) ;

extern int fdevent_unregister(fdevents *ev , int fd ) ;

extern int fdevent_fcntl_set(fdevents *ev , int fd ) ;

extern int fdevent_select_init(fdevents *ev ) ;

extern int fdevent_poll_init(fdevents *ev ) ;

extern int fdevent_linux_rtsig_init(fdevents *ev ) ;

extern int fdevent_linux_sysepoll_init(fdevents *ev ) ;

extern int fdevent_solaris_devpoll_init(fdevents *ev ) ;

extern int fdevent_freebsd_kqueue_init(fdevents *ev ) ;

extern ssize_t readv(int __fd , struct iovec  const  *__iovec , int __count ) ;

extern ssize_t writev(int __fd , struct iovec  const  *__iovec , int __count ) ;

__inline static  __attribute__((__nothrow__)) struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                            struct cmsghdr *__cmsg ) ;

__inline static  __attribute__((__nothrow__)) struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                            struct cmsghdr *__cmsg ) ;
__inline static struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                              struct cmsghdr *__cmsg ) 
{ 

  {
  if (__cmsg->cmsg_len < sizeof(struct cmsghdr )) {
    return ((struct cmsghdr *)0);
  }
  __cmsg = (struct cmsghdr *)((unsigned char *)__cmsg + (((__cmsg->cmsg_len + sizeof(size_t )) - 1U) & ~ (sizeof(size_t ) - 1U)));
  if ((unsigned int )((unsigned char *)(__cmsg + 1)) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
    return ((struct cmsghdr *)0);
  } else {
    if ((unsigned int )((unsigned char *)__cmsg + (((__cmsg->cmsg_len + sizeof(size_t )) - 1U) & ~ (sizeof(size_t ) - 1U))) > (unsigned int )((unsigned char *)__mhdr->msg_control + __mhdr->msg_controllen)) {
      return ((struct cmsghdr *)0);
    }
  }
  return (__cmsg);
}
}

extern  __attribute__((__nothrow__)) int socket(int __domain , int __type ,
                                                int __protocol ) ;

extern  __attribute__((__nothrow__)) int socketpair(int __domain , int __type ,
                                                    int __protocol , int *__fds ) ;

extern  __attribute__((__nothrow__)) int bind(int __fd ,
                                              struct sockaddr  const  *__addr ,
                                              socklen_t __len ) ;

extern  __attribute__((__nothrow__)) int getsockname(int __fd ,
                                                     struct sockaddr * __restrict  __addr ,
                                                     socklen_t * __restrict  __len ) ;

extern int connect(int __fd , struct sockaddr  const  *__addr , socklen_t __len ) ;

extern  __attribute__((__nothrow__)) int getpeername(int __fd ,
                                                     struct sockaddr * __restrict  __addr ,
                                                     socklen_t * __restrict  __len ) ;

extern ssize_t send(int __fd , void const   *__buf , size_t __n , int __flags ) ;

extern ssize_t recv(int __fd , void *__buf , size_t __n , int __flags ) ;

extern ssize_t sendto(int __fd , void const   *__buf , size_t __n ,
                      int __flags , struct sockaddr  const  *__addr ,
                      socklen_t __addr_len ) ;

extern ssize_t recvfrom(int __fd , void * __restrict  __buf , size_t __n ,
                        int __flags , struct sockaddr * __restrict  __addr ,
                        socklen_t * __restrict  __addr_len ) ;

extern ssize_t sendmsg(int __fd , struct msghdr  const  *__message ,
                       int __flags ) ;

extern ssize_t recvmsg(int __fd , struct msghdr *__message , int __flags ) ;

extern  __attribute__((__nothrow__)) int getsockopt(int __fd , int __level ,
                                                    int __optname ,
                                                    void * __restrict  __optval ,
                                                    socklen_t * __restrict  __optlen ) ;

extern  __attribute__((__nothrow__)) int setsockopt(int __fd , int __level ,
                                                    int __optname ,
                                                    void const   *__optval ,
                                                    socklen_t __optlen ) ;

extern  __attribute__((__nothrow__)) int listen(int __fd , int __n ) ;

extern int accept(int __fd , struct sockaddr * __restrict  __addr ,
                  socklen_t * __restrict  __addr_len ) ;

extern  __attribute__((__nothrow__)) int shutdown(int __fd , int __how ) ;

extern  __attribute__((__nothrow__)) int sockatmark(int __fd ) ;

extern  __attribute__((__nothrow__)) int isfdtype(int __fd , int __fdtype ) ;

extern unsigned int __invalid_size_argument_for_IOC ;

extern  __attribute__((__nothrow__)) int ioctl(int __fd ,
                                               unsigned long __request  , ...) ;

extern struct in6_addr  const  in6addr_any ;

extern struct in6_addr  const  in6addr_loopback ;

extern  __attribute__((__nothrow__)) uint32_t ntohl(uint32_t __netlong )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) uint16_t ntohs(uint16_t __netshort )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) uint32_t htonl(uint32_t __hostlong )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) uint16_t htons(uint16_t __hostshort )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) int bindresvport(int __sockfd ,
                                                      struct sockaddr_in *__sock_in ) ;

extern  __attribute__((__nothrow__)) int bindresvport6(int __sockfd ,
                                                       struct sockaddr_in6 *__sock_in ) ;

extern  __attribute__((__nothrow__)) in_addr_t inet_addr(char const   *__cp ) ;

extern  __attribute__((__nothrow__)) in_addr_t inet_lnaof(struct in_addr __in ) ;

extern  __attribute__((__nothrow__)) struct in_addr inet_makeaddr(in_addr_t __net ,
                                                                  in_addr_t __host ) ;

extern  __attribute__((__nothrow__)) in_addr_t inet_netof(struct in_addr __in ) ;

extern  __attribute__((__nothrow__)) in_addr_t inet_network(char const   *__cp ) ;

extern  __attribute__((__nothrow__)) char *inet_ntoa(struct in_addr __in ) ;

extern  __attribute__((__nothrow__)) int inet_pton(int __af ,
                                                   char const   * __restrict  __cp ,
                                                   void * __restrict  __buf ) ;

extern  __attribute__((__nothrow__)) char const   *inet_ntop(int __af ,
                                                             void const   * __restrict  __cp ,
                                                             char * __restrict  __buf ,
                                                             socklen_t __len ) ;

extern  __attribute__((__nothrow__)) int inet_aton(char const   *__cp ,
                                                   struct in_addr *__inp ) ;

extern  __attribute__((__nothrow__)) char *inet_neta(in_addr_t __net ,
                                                     char *__buf , size_t __len ) ;

extern  __attribute__((__nothrow__)) char *inet_net_ntop(int __af ,
                                                         void const   *__cp ,
                                                         int __bits ,
                                                         char *__buf ,
                                                         size_t __len ) ;

extern  __attribute__((__nothrow__)) int inet_net_pton(int __af ,
                                                       char const   *__cp ,
                                                       void *__buf ,
                                                       size_t __len ) ;

extern  __attribute__((__nothrow__)) unsigned int inet_nsap_addr(char const   *__cp ,
                                                                 unsigned char *__buf ,
                                                                 int __len ) ;

extern  __attribute__((__nothrow__)) char *inet_nsap_ntoa(int __len ,
                                                          unsigned char const   *__cp ,
                                                          char *__buf ) ;

extern  __attribute__((__nothrow__)) void setrpcent(int __stayopen ) ;

extern  __attribute__((__nothrow__)) void endrpcent(void) ;

extern  __attribute__((__nothrow__)) struct rpcent *getrpcbyname(char const   *__name ) ;

extern  __attribute__((__nothrow__)) struct rpcent *getrpcbynumber(int __number ) ;

extern  __attribute__((__nothrow__)) struct rpcent *getrpcent(void) ;

extern  __attribute__((__nothrow__)) int getrpcbyname_r(char const   *__name ,
                                                        struct rpcent *__result_buf ,
                                                        char *__buffer ,
                                                        size_t __buflen ,
                                                        struct rpcent **__result ) ;

extern  __attribute__((__nothrow__)) int getrpcbynumber_r(int __number ,
                                                          struct rpcent *__result_buf ,
                                                          char *__buffer ,
                                                          size_t __buflen ,
                                                          struct rpcent **__result ) ;

extern  __attribute__((__nothrow__)) int getrpcent_r(struct rpcent *__result_buf ,
                                                     char *__buffer ,
                                                     size_t __buflen ,
                                                     struct rpcent **__result ) ;

extern  __attribute__((__nothrow__)) int *__h_errno_location(void)  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) void herror(char const   *__str ) ;

extern  __attribute__((__nothrow__)) char const   *hstrerror(int __err_num ) ;

extern void sethostent(int __stay_open ) ;

extern void endhostent(void) ;

extern struct hostent *gethostent(void) ;

extern struct hostent *gethostbyaddr(void const   *__addr , __socklen_t __len ,
                                     int __type ) ;

extern struct hostent *gethostbyname(char const   *__name ) ;

extern struct hostent *gethostbyname2(char const   *__name , int __af ) ;

extern int gethostent_r(struct hostent * __restrict  __result_buf ,
                        char * __restrict  __buf , size_t __buflen ,
                        struct hostent ** __restrict  __result ,
                        int * __restrict  __h_errnop ) ;

extern int gethostbyaddr_r(void const   * __restrict  __addr ,
                           __socklen_t __len , int __type ,
                           struct hostent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct hostent ** __restrict  __result ,
                           int * __restrict  __h_errnop ) ;

extern int gethostbyname_r(char const   * __restrict  __name ,
                           struct hostent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct hostent ** __restrict  __result ,
                           int * __restrict  __h_errnop ) ;

extern int gethostbyname2_r(char const   * __restrict  __name , int __af ,
                            struct hostent * __restrict  __result_buf ,
                            char * __restrict  __buf , size_t __buflen ,
                            struct hostent ** __restrict  __result ,
                            int * __restrict  __h_errnop ) ;

extern void setnetent(int __stay_open ) ;

extern void endnetent(void) ;

extern struct netent *getnetent(void) ;

extern struct netent *getnetbyaddr(uint32_t __net , int __type ) ;

extern struct netent *getnetbyname(char const   *__name ) ;

extern int getnetent_r(struct netent * __restrict  __result_buf ,
                       char * __restrict  __buf , size_t __buflen ,
                       struct netent ** __restrict  __result ,
                       int * __restrict  __h_errnop ) ;

extern int getnetbyaddr_r(uint32_t __net , int __type ,
                          struct netent * __restrict  __result_buf ,
                          char * __restrict  __buf , size_t __buflen ,
                          struct netent ** __restrict  __result ,
                          int * __restrict  __h_errnop ) ;

extern int getnetbyname_r(char const   * __restrict  __name ,
                          struct netent * __restrict  __result_buf ,
                          char * __restrict  __buf , size_t __buflen ,
                          struct netent ** __restrict  __result ,
                          int * __restrict  __h_errnop ) ;

extern void setservent(int __stay_open ) ;

extern void endservent(void) ;

extern struct servent *getservent(void) ;

extern struct servent *getservbyname(char const   *__name ,
                                     char const   *__proto ) ;

extern struct servent *getservbyport(int __port , char const   *__proto ) ;

extern int getservent_r(struct servent * __restrict  __result_buf ,
                        char * __restrict  __buf , size_t __buflen ,
                        struct servent ** __restrict  __result ) ;

extern int getservbyname_r(char const   * __restrict  __name ,
                           char const   * __restrict  __proto ,
                           struct servent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct servent ** __restrict  __result ) ;

extern int getservbyport_r(int __port , char const   * __restrict  __proto ,
                           struct servent * __restrict  __result_buf ,
                           char * __restrict  __buf , size_t __buflen ,
                           struct servent ** __restrict  __result ) ;

extern void setprotoent(int __stay_open ) ;

extern void endprotoent(void) ;

extern struct protoent *getprotoent(void) ;

extern struct protoent *getprotobyname(char const   *__name ) ;

extern struct protoent *getprotobynumber(int __proto ) ;

extern int getprotoent_r(struct protoent * __restrict  __result_buf ,
                         char * __restrict  __buf , size_t __buflen ,
                         struct protoent ** __restrict  __result ) ;

extern int getprotobyname_r(char const   * __restrict  __name ,
                            struct protoent * __restrict  __result_buf ,
                            char * __restrict  __buf , size_t __buflen ,
                            struct protoent ** __restrict  __result ) ;

extern int getprotobynumber_r(int __proto ,
                              struct protoent * __restrict  __result_buf ,
                              char * __restrict  __buf , size_t __buflen ,
                              struct protoent ** __restrict  __result ) ;

extern int setnetgrent(char const   *__netgroup ) ;

extern void endnetgrent(void) ;

extern int getnetgrent(char ** __restrict  __hostp ,
                       char ** __restrict  __userp ,
                       char ** __restrict  __domainp ) ;

extern int innetgr(char const   *__netgroup , char const   *__host ,
                   char const   *__user , char const   *domain ) ;

extern int getnetgrent_r(char ** __restrict  __hostp ,
                         char ** __restrict  __userp ,
                         char ** __restrict  __domainp ,
                         char * __restrict  __buffer , size_t __buflen ) ;

extern int rcmd(char ** __restrict  __ahost , unsigned short __rport ,
                char const   * __restrict  __locuser ,
                char const   * __restrict  __remuser ,
                char const   * __restrict  __cmd , int * __restrict  __fd2p ) ;

extern int rcmd_af(char ** __restrict  __ahost , unsigned short __rport ,
                   char const   * __restrict  __locuser ,
                   char const   * __restrict  __remuser ,
                   char const   * __restrict  __cmd , int * __restrict  __fd2p ,
                   sa_family_t __af ) ;

extern int rexec(char ** __restrict  __ahost , int __rport ,
                 char const   * __restrict  __name ,
                 char const   * __restrict  __pass ,
                 char const   * __restrict  __cmd , int * __restrict  __fd2p ) ;

extern int rexec_af(char ** __restrict  __ahost , int __rport ,
                    char const   * __restrict  __name ,
                    char const   * __restrict  __pass ,
                    char const   * __restrict  __cmd ,
                    int * __restrict  __fd2p , sa_family_t __af ) ;

extern int ruserok(char const   *__rhost , int __suser ,
                   char const   *__remuser , char const   *__locuser ) ;

extern int ruserok_af(char const   *__rhost , int __suser ,
                      char const   *__remuser , char const   *__locuser ,
                      sa_family_t __af ) ;

extern int rresvport(int *__alport ) ;

extern int rresvport_af(int *__alport , sa_family_t __af ) ;

extern int getaddrinfo(char const   * __restrict  __name ,
                       char const   * __restrict  __service ,
                       struct addrinfo  const  * __restrict  __req ,
                       struct addrinfo ** __restrict  __pai ) ;

extern  __attribute__((__nothrow__)) void freeaddrinfo(struct addrinfo *__ai ) ;

extern  __attribute__((__nothrow__)) char const   *gai_strerror(int __ecode ) ;

extern int getnameinfo(struct sockaddr  const  * __restrict  __sa ,
                       socklen_t __salen , char * __restrict  __host ,
                       socklen_t __hostlen , char * __restrict  __serv ,
                       socklen_t __servlen , unsigned int __flags ) ;

extern splay_tree *splaytree_splay(splay_tree *t , int key ) ;

extern splay_tree *splaytree_insert(splay_tree *t , int key , void *data ) ;

extern splay_tree *splaytree_delete(splay_tree *t , int key ) ;

extern splay_tree *splaytree_size(splay_tree *t ) ;

extern int etag_is_equal(buffer *etag , char const   *matches ) ;

extern int etag_create(buffer *etag , struct stat *st , etag_flags_t flags ) ;

extern int etag_mutate(buffer *mut , buffer *etag ) ;

extern char **environ ;

extern int config_read(server *srv , char const   *fn ) ;

extern int config_set_defaults(server *srv ) ;

extern buffer *config_get_value_buffer(server *srv , connection *con ,
                                       config_var_t field ) ;

extern int log_error_open(server *srv ) ;

extern int log_error_close(server *srv ) ;

extern int log_error_write(server *srv , char const   *filename ,
                           unsigned int line , char const   *fmt  , ...) ;

extern int log_error_cycle(server *srv ) ;

extern int http_chunk_append_mem(server *srv , connection *con ,
                                 char const   *mem , size_t len ) ;

extern int http_chunk_append_buffer(server *srv , connection *con , buffer *mem ) ;

extern int http_chunk_append_file(server *srv , connection *con , buffer *fn ,
                                  off_t offset , off_t len ) ;

extern off_t http_chunkqueue_length(server *srv , connection *con ) ;

extern connection *connection_init(server *srv ) ;

extern int connection_reset(server *srv , connection *con ) ;

extern void connections_free(server *srv ) ;

extern connection *connection_accept(server *srv , server_socket *srv_sock ) ;

extern int connection_close(server *srv , connection *con ) ;

extern int connection_set_state(server *srv , connection *con ,
                                connection_state_t state ) ;

extern char const   *connection_get_state(connection_state_t state ) ;

extern char const   *connection_get_short_state(connection_state_t state ) ;

extern int connection_state_machine(server *srv , connection *con ) ;

extern  __attribute__((__nothrow__)) clock_t clock(void) ;

extern  __attribute__((__nothrow__)) time_t time(time_t *__timer ) ;

extern  __attribute__((__nothrow__)) double difftime(time_t __time1 ,
                                                     time_t __time0 )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) time_t mktime(struct tm *__tp ) ;

extern  __attribute__((__nothrow__)) size_t strftime(char * __restrict  __s ,
                                                     size_t __maxsize ,
                                                     char const   * __restrict  __format ,
                                                     struct tm  const  * __restrict  __tp ) ;

extern  __attribute__((__nothrow__)) struct tm *gmtime(time_t const   *__timer ) ;

extern  __attribute__((__nothrow__)) struct tm *localtime(time_t const   *__timer ) ;

extern  __attribute__((__nothrow__)) struct tm *gmtime_r(time_t const   * __restrict  __timer ,
                                                         struct tm * __restrict  __tp ) ;

extern  __attribute__((__nothrow__)) struct tm *localtime_r(time_t const   * __restrict  __timer ,
                                                            struct tm * __restrict  __tp ) ;

extern  __attribute__((__nothrow__)) char *asctime(struct tm  const  *__tp ) ;

extern  __attribute__((__nothrow__)) char *ctime(time_t const   *__timer ) ;

extern  __attribute__((__nothrow__)) char *asctime_r(struct tm  const  * __restrict  __tp ,
                                                     char * __restrict  __buf ) ;

extern  __attribute__((__nothrow__)) char *ctime_r(time_t const   * __restrict  __timer ,
                                                   char * __restrict  __buf ) ;

extern char *__tzname[2] ;

extern int __daylight ;

extern long __timezone ;

extern char *tzname[2] ;

extern  __attribute__((__nothrow__)) void tzset(void) ;

extern int daylight ;

extern long timezone ;

extern  __attribute__((__nothrow__)) int stime(time_t const   *__when ) ;

extern  __attribute__((__nothrow__)) time_t timegm(struct tm *__tp ) ;

extern  __attribute__((__nothrow__)) time_t timelocal(struct tm *__tp ) ;

extern  __attribute__((__nothrow__)) int dysize(int __year )  __attribute__((__const__)) ;

extern int nanosleep(struct timespec  const  *__requested_time ,
                     struct timespec *__remaining ) ;

extern  __attribute__((__nothrow__)) int clock_getres(clockid_t __clock_id ,
                                                      struct timespec *__res ) ;

extern  __attribute__((__nothrow__)) int clock_gettime(clockid_t __clock_id ,
                                                       struct timespec *__tp ) ;

extern  __attribute__((__nothrow__)) int clock_settime(clockid_t __clock_id ,
                                                       struct timespec  const  *__tp ) ;

extern int clock_nanosleep(clockid_t __clock_id , int __flags ,
                           struct timespec  const  *__req ,
                           struct timespec *__rem ) ;

extern  __attribute__((__nothrow__)) int clock_getcpuclockid(pid_t __pid ,
                                                             clockid_t *__clock_id ) ;

extern  __attribute__((__nothrow__)) int timer_create(clockid_t __clock_id ,
                                                      struct sigevent * __restrict  __evp ,
                                                      timer_t * __restrict  __timerid ) ;

extern  __attribute__((__nothrow__)) int timer_delete(timer_t __timerid ) ;

extern  __attribute__((__nothrow__)) int timer_settime(timer_t __timerid ,
                                                       int __flags ,
                                                       struct itimerspec  const  * __restrict  __value ,
                                                       struct itimerspec * __restrict  __ovalue ) ;

extern  __attribute__((__nothrow__)) int timer_gettime(timer_t __timerid ,
                                                       struct itimerspec *__value ) ;

extern  __attribute__((__nothrow__)) int timer_getoverrun(timer_t __timerid ) ;

extern int http_response_parse(server *srv , connection *con ) ;

extern int http_response_write_header(server *srv , connection *con ) ;

extern int response_header_insert(server *srv , connection *con ,
                                  char const   *key , size_t keylen ,
                                  char const   *value , size_t vallen ) ;

extern int response_header_overwrite(server *srv , connection *con ,
                                     char const   *key , size_t keylen ,
                                     char const   *value , size_t vallen ) ;

extern handler_t http_response_prepare(server *srv , connection *con ) ;

extern int http_response_redirect_to_directory(server *srv , connection *con ) ;

extern int http_response_handle_cachable(server *srv , connection *con ,
                                         buffer *mtime ) ;

extern buffer *strftime_cache_get(server *srv , time_t last_mod ) ;

extern int joblist_append(server *srv , connection *con ) ;

extern void joblist_free(server *srv , connections *joblist ) ;

extern int fdwaitqueue_append(server *srv , connection *con ) ;

extern void fdwaitqueue_free(server *srv , connections *fdwaitqueue ) ;

extern connection *fdwaitqueue_unshift(server *srv , connections *fdwaitqueue ) ;

extern int plugins_load(server *srv ) ;

extern void plugins_free(server *srv ) ;

extern handler_t plugins_call_handle_uri_raw(server *srv , connection *con ) ;

extern handler_t plugins_call_handle_uri_clean(server *srv , connection *con ) ;

extern handler_t plugins_call_handle_subrequest_start(server *srv ,
                                                      connection *con ) ;

extern handler_t plugins_call_handle_subrequest(server *srv , connection *con ) ;

extern handler_t plugins_call_handle_request_done(server *srv , connection *con ) ;

extern handler_t plugins_call_handle_docroot(server *srv , connection *con ) ;

extern handler_t plugins_call_handle_physical(server *srv , connection *con ) ;

extern handler_t plugins_call_handle_connection_close(server *srv ,
                                                      connection *con ) ;

extern handler_t plugins_call_handle_joblist(server *srv , connection *con ) ;

extern handler_t plugins_call_connection_reset(server *srv , connection *con ) ;

extern handler_t plugins_call_handle_trigger(server *srv ) ;

extern handler_t plugins_call_handle_sighup(server *srv ) ;

extern handler_t plugins_call_init(server *srv ) ;

extern handler_t plugins_call_set_defaults(server *srv ) ;

extern handler_t plugins_call_cleanup(server *srv ) ;

extern int config_insert_values_global(server *srv , array *ca ,
                                       config_values_t const   *cv ) ;

extern int config_insert_values_internal(server *srv , array *ca ,
                                         config_values_t const   *cv ) ;

extern int config_setup_connection(server *srv , connection *con ) ;

extern int config_patch_connection(server *srv , connection *con ,
                                   comp_key_t comp ) ;

extern int config_check_cond(server *srv , connection *con , data_config *dc ) ;

extern int config_append_cond_match_buffer(connection *con , data_config *dc ,
                                           buffer *buf , int n ) ;

extern char const   *inet_ntop_cache_get_ip(server *srv , sock_addr *addr ) ;

extern stat_cache *stat_cache_init(void) ;

extern void stat_cache_free(stat_cache *fc ) ;

extern handler_t stat_cache_get_entry(server *srv , connection *con ,
                                      buffer *name , stat_cache_entry **fce ) ;

extern handler_t stat_cache_handle_fdevent(void *_srv , void *_fce , int revent ) ;

extern int stat_cache_trigger_cleanup(server *srv ) ;

extern data_integer *status_counter_get_counter(server *srv , char const   *s ,
                                                size_t len ) ;

extern int status_counter_inc(server *srv , char const   *s , size_t len ) ;

extern int status_counter_dec(server *srv , char const   *s , size_t len ) ;

extern int status_counter_set(server *srv , char const   *s , size_t len ,
                              int val ) ;

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

extern FILE *tmpfile(void)  __asm__("tmpfile64")  ;

extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;

extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;

extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;

extern int fclose(FILE *__stream ) ;

extern int fflush(FILE *__stream ) ;

extern int fflush_unlocked(FILE *__stream ) ;

extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes )  __asm__("fopen64")  ;

extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream )  __asm__("freopen64")  ;

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

__inline static int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) ;

extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;

extern  __attribute__((__nothrow__)) int snprintf(char * __restrict  __s ,
                                                  size_t __maxlen ,
                                                  char const   * __restrict  __format 
                                                  , ...) ;

extern  __attribute__((__nothrow__)) int vsnprintf(char * __restrict  __s ,
                                                   size_t __maxlen ,
                                                   char const   * __restrict  __format ,
                                                   __gnuc_va_list __arg ) ;

extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...) ;

extern int scanf(char const   * __restrict  __format  , ...) ;

extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...) ;

extern int vfscanf(FILE * __restrict  __s ,
                   char const   * __restrict  __format , __gnuc_va_list __arg ) ;

extern int vscanf(char const   * __restrict  __format , __gnuc_va_list __arg ) ;

extern  __attribute__((__nothrow__)) int vsscanf(char const   * __restrict  __s ,
                                                 char const   * __restrict  __format ,
                                                 __gnuc_va_list __arg ) ;

extern int fgetc(FILE *__stream ) ;

extern int getc(FILE *__stream ) ;

__inline static int getchar(void) ;

__inline static int getc_unlocked(FILE *__fp ) ;

__inline static int getchar_unlocked(void) ;

__inline static int fgetc_unlocked(FILE *__fp ) ;

extern int fputc(int __c , FILE *__stream ) ;

extern int putc(int __c , FILE *__stream ) ;

__inline static int putchar(int __c ) ;

__inline static int fputc_unlocked(int __c , FILE *__stream ) ;

__inline static int putc_unlocked(int __c , FILE *__stream ) ;

__inline static int putchar_unlocked(int __c ) ;

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

extern int fseeko(FILE *__stream , __off64_t __off , int __whence )  __asm__("fseeko64")  ;

extern __off64_t ftello(FILE *__stream )  __asm__("ftello64")  ;

extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos )  __asm__("fgetpos64")  ;

extern int fsetpos(FILE *__stream , fpos_t const   *__pos )  __asm__("fsetpos64")  ;

extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;

extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;

__inline static  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;

__inline static  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;

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

__inline static int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) 
{ int tmp ;

  {
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  return (tmp);
}
}

__inline static int getchar(void) 
{ int tmp ;

  {
  tmp = _IO_getc(stdin);
  return (tmp);
}
}

__inline static int fgetc_unlocked(FILE *__fp ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  if (tmp___4) {
    tmp___2 = __uflow(__fp);
  } else {
    tmp___3 = __fp->_IO_read_ptr;
    (__fp->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
  return (tmp___2);
}
}

__inline static int getc_unlocked(FILE *__fp ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )__fp->_IO_read_ptr >= (unsigned int )__fp->_IO_read_end),
                             0L);
  if (tmp___4) {
    tmp___2 = __uflow(__fp);
  } else {
    tmp___3 = __fp->_IO_read_ptr;
    (__fp->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
  return (tmp___2);
}
}

__inline static int getchar_unlocked(void) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )stdin->_IO_read_ptr >= (unsigned int )stdin->_IO_read_end),
                             0L);
  if (tmp___4) {
    tmp___2 = __uflow(stdin);
  } else {
    tmp___3 = stdin->_IO_read_ptr;
    (stdin->_IO_read_ptr) ++;
    tmp___2 = (int )*((unsigned char *)tmp___3);
  }
  return (tmp___2);
}
}

__inline static int putchar(int __c ) 
{ int tmp ;

  {
  tmp = _IO_putc(__c, stdout);
  return (tmp);
}
}

__inline static int fputc_unlocked(int __c , FILE *__stream ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  if (tmp___4) {
    tmp___2 = __overflow(__stream, (int )((unsigned char )__c));
  } else {
    tmp___3 = __stream->_IO_write_ptr;
    (__stream->_IO_write_ptr) ++;
    *tmp___3 = (char )__c;
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
  return (tmp___2);
}
}

__inline static int putc_unlocked(int __c , FILE *__stream ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )__stream->_IO_write_ptr >= (unsigned int )__stream->_IO_write_end),
                             0L);
  if (tmp___4) {
    tmp___2 = __overflow(__stream, (int )((unsigned char )__c));
  } else {
    tmp___3 = __stream->_IO_write_ptr;
    (__stream->_IO_write_ptr) ++;
    *tmp___3 = (char )__c;
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
  return (tmp___2);
}
}

__inline static int putchar_unlocked(int __c ) 
{ long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  char *tmp___3 ;
  long tmp___4 ;

  {
  tmp___4 = __builtin_expect((long )((unsigned int )stdout->_IO_write_ptr >= (unsigned int )stdout->_IO_write_end),
                             0L);
  if (tmp___4) {
    tmp___2 = __overflow(stdout, (int )((unsigned char )__c));
  } else {
    tmp___3 = stdout->_IO_write_ptr;
    (stdout->_IO_write_ptr) ++;
    *tmp___3 = (char )__c;
    tmp___2 = (int )((unsigned char )*tmp___3);
  }
  return (tmp___2);
}
}

__inline static  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline static int feof_unlocked(FILE *__stream ) 
{ 

  {
  return ((__stream->_flags & 16) != 0);
}
}

__inline static  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
__inline static int ferror_unlocked(FILE *__stream ) 
{ 

  {
  return ((__stream->_flags & 32) != 0);
}
}

extern  __attribute__((__nothrow__)) int getrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit *__rlimits )  __asm__("getrlimit64")  ;

extern  __attribute__((__nothrow__)) int setrlimit(__rlimit_resource_t __resource ,
                                                   struct rlimit  const  *__rlimits )  __asm__("setrlimit64")  ;

extern  __attribute__((__nothrow__)) int getrusage(__rusage_who_t __who ,
                                                   struct rusage *__usage ) ;

extern  __attribute__((__nothrow__)) int getpriority(__priority_which_t __which ,
                                                     id_t __who ) ;

extern  __attribute__((__nothrow__)) int setpriority(__priority_which_t __which ,
                                                     id_t __who , int __prio ) ;

extern __pid_t wait(union wait *__stat_loc ) ;

extern __pid_t waitpid(__pid_t __pid , int *__stat_loc , int __options ) ;

extern int waitid(idtype_t __idtype , __id_t __id , siginfo_t *__infop ,
                  int __options ) ;

extern  __attribute__((__nothrow__)) __pid_t wait3(union wait *__stat_loc ,
                                                   int __options ,
                                                   struct rusage *__usage ) ;

extern  __attribute__((__nothrow__)) __pid_t wait4(__pid_t __pid ,
                                                   union wait *__stat_loc ,
                                                   int __options ,
                                                   struct rusage *__usage ) ;

static handler_t fcgi_handle_fdevent(void *s , void *ctx , int revents ) ;

int fastcgi_status_copy_procname(buffer *b , fcgi_extension_host *host ,
                                 fcgi_proc *proc ) 
{ 

  {
  buffer_copy_string(b, "fastcgi.backend.");
  buffer_append_string_buffer(b, (buffer const   *)host->id);
  if (proc) {
    buffer_append_string(b, ".");
    buffer_append_long(b, (long )proc->id);
  }
  return (0);
}
}

int fastcgi_status_init(server *srv , buffer *b , fcgi_extension_host *host ,
                        fcgi_proc *proc ) 
{ size_t tmp ;
  size_t tmp___0 ;
  size_t tmp___1 ;
  size_t tmp___2 ;
  size_t tmp___3 ;
  size_t tmp___4 ;

  {
  fastcgi_status_copy_procname(b, host, proc);
  buffer_append_string(b, ".disabled");
  if (b->used) {
    tmp = b->used - 1U;
  } else {
    tmp = 0U;
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp, 0);
  fastcgi_status_copy_procname(b, host, proc);
  buffer_append_string(b, ".died");
  if (b->used) {
    tmp___0 = b->used - 1U;
  } else {
    tmp___0 = 0U;
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp___0, 0);
  fastcgi_status_copy_procname(b, host, proc);
  buffer_append_string(b, ".overloaded");
  if (b->used) {
    tmp___1 = b->used - 1U;
  } else {
    tmp___1 = 0U;
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp___1, 0);
  fastcgi_status_copy_procname(b, host, proc);
  buffer_append_string(b, ".connected");
  if (b->used) {
    tmp___2 = b->used - 1U;
  } else {
    tmp___2 = 0U;
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp___2, 0);
  fastcgi_status_copy_procname(b, host, proc);
  buffer_append_string(b, ".load");
  if (b->used) {
    tmp___3 = b->used - 1U;
  } else {
    tmp___3 = 0U;
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp___3, 0);
  fastcgi_status_copy_procname(b, host, (fcgi_proc *)((void *)0));
  buffer_append_string(b, ".load");
  if (b->used) {
    tmp___4 = b->used - 1U;
  } else {
    tmp___4 = 0U;
  }
  status_counter_set(srv, (char const   *)b->ptr, tmp___4, 0);
  return (0);
}
}

static handler_ctx *handler_ctx_init(void) 
{ handler_ctx *hctx ;
  void *tmp ;

  {
  tmp = calloc(1U, sizeof(*hctx));
  hctx = (handler_ctx *)tmp;
  if (! hctx) {
    __assert_fail("hctx", "mod_fastcgi.c", 417U, "handler_ctx_init");
  }
  hctx->fde_ndx = -1;
  hctx->response_header = buffer_init();
  hctx->request_id = 0U;
  hctx->state = (enum __anonenum_fcgi_connection_state_t_147 )1;
  hctx->proc = (fcgi_proc *)((void *)0);
  hctx->fd = -1;
  hctx->reconnects = 0;
  hctx->send_content_body = 1;
  hctx->rb = chunkqueue_init();
  hctx->wb = chunkqueue_init();
  return (hctx);
}
}

static void handler_ctx_free(handler_ctx *hctx ) 
{ 

  {
  if (hctx->host) {
    ((hctx->host)->load) --;
    hctx->host = (fcgi_extension_host *)((void *)0);
  }
  buffer_free(hctx->response_header);
  chunkqueue_free(hctx->rb);
  chunkqueue_free(hctx->wb);
  free((void *)hctx);
  return;
}
}

fcgi_proc *fastcgi_process_init(void) 
{ fcgi_proc *f ;
  void *tmp ;

  {
  tmp = calloc(1U, sizeof(*f));
  f = (fcgi_proc *)tmp;
  f->unixsocket = buffer_init();
  f->connection_name = buffer_init();
  f->prev = (struct fcgi_proc *)((void *)0);
  f->next = (struct fcgi_proc *)((void *)0);
  return (f);
}
}

void fastcgi_process_free(fcgi_proc *f ) 
{ 

  {
  if (! f) {
    return;
  }
  fastcgi_process_free(f->next);
  buffer_free(f->unixsocket);
  buffer_free(f->connection_name);
  free((void *)f);
  return;
}
}

fcgi_extension_host *fastcgi_host_init(void) 
{ fcgi_extension_host *f ;
  void *tmp ;

  {
  tmp = calloc(1U, sizeof(*f));
  f = (fcgi_extension_host *)tmp;
  f->id = buffer_init();
  f->host = buffer_init();
  f->unixsocket = buffer_init();
  f->docroot = buffer_init();
  f->bin_path = buffer_init();
  f->bin_env = array_init();
  f->bin_env_copy = array_init();
  f->strip_request_uri = buffer_init();
  return (f);
}
}

void fastcgi_host_free(fcgi_extension_host *h ) 
{ 

  {
  if (! h) {
    return;
  }
  buffer_free(h->id);
  buffer_free(h->host);
  buffer_free(h->unixsocket);
  buffer_free(h->docroot);
  buffer_free(h->bin_path);
  buffer_free(h->strip_request_uri);
  array_free(h->bin_env);
  array_free(h->bin_env_copy);
  fastcgi_process_free(h->first);
  fastcgi_process_free(h->unused_procs);
  free((void *)h);
  return;
}
}

fcgi_exts *fastcgi_extensions_init(void) 
{ fcgi_exts *f ;
  void *tmp ;

  {
  tmp = calloc(1U, sizeof(*f));
  f = (fcgi_exts *)tmp;
  return (f);
}
}

void fastcgi_extensions_free(fcgi_exts *f ) 
{ size_t i ;
  fcgi_extension *fe ;
  size_t j ;
  fcgi_extension_host *h ;

  {
  if (! f) {
    return;
  }
  i = 0U;
  while (i < f->used) {
    fe = *(f->exts + i);
    j = 0U;
    while (j < fe->used) {
      h = *(fe->hosts + j);
      fastcgi_host_free(h);
      j ++;
    }
    buffer_free(fe->key);
    free((void *)fe->hosts);
    free((void *)fe);
    i ++;
  }
  free((void *)f->exts);
  free((void *)f);
  return;
}
}

int fastcgi_extension_insert(fcgi_exts *ext , buffer *key ,
                             fcgi_extension_host *fh ) 
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
  i = 0U;
  while (i < ext->used) {
    tmp = buffer_is_equal(key, (*(ext->exts + i))->key);
    if (tmp) {
      break;
    }
    i ++;
  }
  if (i == ext->used) {
    tmp___0 = calloc(1U, sizeof(*fe));
    fe = (fcgi_extension *)tmp___0;
    if (! fe) {
      __assert_fail("fe", "mod_fastcgi.c", 565U, "fastcgi_extension_insert");
    }
    fe->key = buffer_init();
    fe->last_used_ndx = -1;
    buffer_copy_string_buffer(fe->key, (buffer const   *)key);
    if (ext->size == 0U) {
      ext->size = 8U;
      tmp___1 = malloc(ext->size * sizeof(*(ext->exts)));
      ext->exts = (fcgi_extension **)tmp___1;
      if (! ext->exts) {
        __assert_fail("ext->exts", "mod_fastcgi.c", 575U,
                      "fastcgi_extension_insert");
      }
    } else {
      if (ext->used == ext->size) {
        ext->size += 8U;
        tmp___2 = realloc((void *)ext->exts, ext->size * sizeof(*(ext->exts)));
        ext->exts = (fcgi_extension **)tmp___2;
        if (! ext->exts) {
          __assert_fail("ext->exts", "mod_fastcgi.c", 579U,
                        "fastcgi_extension_insert");
        }
      }
    }
    tmp___3 = ext->used;
    (ext->used) ++;
    *(ext->exts + tmp___3) = fe;
  } else {
    fe = *(ext->exts + i);
  }
  if (fe->size == 0U) {
    fe->size = 4U;
    tmp___4 = malloc(fe->size * sizeof(*(fe->hosts)));
    fe->hosts = (fcgi_extension_host **)tmp___4;
    if (! fe->hosts) {
      __assert_fail("fe->hosts", "mod_fastcgi.c", 589U,
                    "fastcgi_extension_insert");
    }
  } else {
    if (fe->size == fe->used) {
      fe->size += 4U;
      tmp___5 = realloc((void *)fe->hosts, fe->size * sizeof(*(fe->hosts)));
      fe->hosts = (fcgi_extension_host **)tmp___5;
      if (! fe->hosts) {
        __assert_fail("fe->hosts", "mod_fastcgi.c", 593U,
                      "fastcgi_extension_insert");
      }
    }
  }
  tmp___6 = fe->used;
  (fe->used) ++;
  *(fe->hosts + tmp___6) = fh;
  return (0);
}
}

static void *mod_fastcgi_init(void) 
{ plugin_data *p ;
  void *tmp ;

  {
  tmp = calloc(1U, sizeof(*p));
  p = (plugin_data *)tmp;
  p->fcgi_env = buffer_init();
  p->path = buffer_init();
  p->parse_response = buffer_init();
  p->statuskey = buffer_init();
  return ((void *)p);
}
}

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
  p = (plugin_data *)p_d;
  r = & p->fcgi_request_id;
  if (r->ptr) {
    free((void *)r->ptr);
  }
  buffer_free(p->fcgi_env);
  buffer_free(p->path);
  buffer_free(p->parse_response);
  buffer_free(p->statuskey);
  if (p->config_storage) {
    i = 0U;
    while (i < (srv->config_context)->used) {
      s = *(p->config_storage + i);
      if (! s) {
        goto __Cont;
      }
      exts = s->exts;
      j = 0U;
      while (j < exts->used) {
        ex = *(exts->exts + j);
        n = 0U;
        while (n < ex->used) {
          host = *(ex->hosts + n);
          proc = host->first;
          while (proc) {
            if (proc->pid != 0) {
              kill(proc->pid, (int )host->kill_signal);
            }
            if (proc->is_local) {
              tmp = buffer_is_empty(proc->unixsocket);
              if (! tmp) {
                unlink((char const   *)(proc->unixsocket)->ptr);
              }
            }
            proc = proc->next;
          }
          proc = host->unused_procs;
          while (proc) {
            if (proc->pid != 0) {
              kill(proc->pid, (int )host->kill_signal);
            }
            if (proc->is_local) {
              tmp___0 = buffer_is_empty(proc->unixsocket);
              if (! tmp___0) {
                unlink((char const   *)(proc->unixsocket)->ptr);
              }
            }
            proc = proc->next;
          }
          n ++;
        }
        j ++;
      }
      fastcgi_extensions_free(s->exts);
      array_free(s->ext_mapping);
      free((void *)s);
      __Cont: 
      i ++;
    }
    free((void *)p->config_storage);
  }
  free((void *)p);
  return ((enum __anonenum_handler_t_43 )1);
}
}

static int env_add(char_array *env , char const   *key , size_t key_len ,
                   char const   *val , size_t val_len ) 
{ char *dst ;
  void *tmp ;
  void *tmp___0 ;
  void *tmp___1 ;
  size_t tmp___2 ;

  {
  if (! key) {
    return (-1);
  } else {
    if (! val) {
      return (-1);
    }
  }
  tmp = malloc((key_len + val_len) + 3U);
  dst = (char *)tmp;
  memcpy((void */* __restrict  */)((void *)dst),
         (void const   */* __restrict  */)((void const   *)key), key_len);
  *(dst + key_len) = (char )'=';
  memcpy((void */* __restrict  */)((void *)((dst + key_len) + 1)),
         (void const   */* __restrict  */)((void const   *)val), val_len + 1U);
  if (env->size == 0U) {
    env->size = 16U;
    tmp___0 = malloc(env->size * sizeof(*(env->ptr)));
    env->ptr = (char **)tmp___0;
  } else {
    if (env->size == env->used + 1U) {
      env->size += 16U;
      tmp___1 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
      env->ptr = (char **)tmp___1;
    }
  }
  tmp___2 = env->used;
  (env->used) ++;
  *(env->ptr + tmp___2) = dst;
  return (0);
}
}

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
  start = b->ptr;
  i = 0U;
  while (i < b->used - 1U) {
    switch ((int )*(b->ptr + i)) {
    case 32: 
    case 9: 
    if (env->size == 0U) {
      env->size = 16U;
      tmp = malloc(env->size * sizeof(*(env->ptr)));
      env->ptr = (char **)tmp;
    } else {
      if (env->size == env->used) {
        env->size += 16U;
        tmp___0 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
        env->ptr = (char **)tmp___0;
      }
    }
    *(b->ptr + i) = (char )'\000';
    tmp___1 = env->used;
    (env->used) ++;
    *(env->ptr + tmp___1) = start;
    start = (b->ptr + i) + 1;
    break;
    default: ;
    break;
    }
    i ++;
  }
  if (env->size == 0U) {
    env->size = 16U;
    tmp___2 = malloc(env->size * sizeof(*(env->ptr)));
    env->ptr = (char **)tmp___2;
  } else {
    if (env->size == env->used) {
      env->size += 16U;
      tmp___3 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
      env->ptr = (char **)tmp___3;
    }
  }
  tmp___4 = env->used;
  (env->used) ++;
  *(env->ptr + tmp___4) = start;
  if (env->size == 0U) {
    env->size = 16U;
    tmp___5 = malloc(env->size * sizeof(*(env->ptr)));
    env->ptr = (char **)tmp___5;
  } else {
    if (env->size == env->used) {
      env->size += 16U;
      tmp___6 = realloc((void *)env->ptr, env->size * sizeof(*(env->ptr)));
      env->ptr = (char **)tmp___6;
    }
  }
  tmp___7 = env->used;
  (env->used) ++;
  *(env->ptr + tmp___7) = (char *)((void *)0);
  return (0);
}
}

static int fcgi_spawn_connection(server *srv , plugin_data *p ,
                                 fcgi_extension_host *host , fcgi_proc *proc ) 
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
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___30 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___31 ;
  int tmp___32 ;
  int tmp___33 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___34 ;
  unsigned char const   *__s1___0 ;
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
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___42 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___46 ;
  unsigned char const   *__s1___2 ;
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
  tv.tv_sec = 0L;
  tv.tv_usec = 100000L;
  if (p->conf.debug) {
    log_error_write(srv, "mod_fastcgi.c", 788U, "sdb", "new proc, socket:",
                    proc->port, proc->unixsocket);
  }
  tmp___2 = buffer_is_empty(proc->unixsocket);
  if (tmp___2) {
    fcgi_addr_in.sin_family = (unsigned short)2;
    tmp___1 = buffer_is_empty(host->host);
    if (tmp___1) {
      __x = 0U;
      __asm__  ("rorw $8, %w0;"
                "rorl $16, %0;"
                "rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
      fcgi_addr_in.sin_addr.s_addr = __v;
    } else {
      __x___0 = 0U;
      __asm__  ("rorw $8, %w0;"
                "rorl $16, %0;"
                "rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
      fcgi_addr_in.sin_addr.s_addr = __v___0;
      he = gethostbyname((char const   *)(host->host)->ptr);
      if ((unsigned int )((void *)0) == (unsigned int )he) {
        tmp___0 = __h_errno_location();
        log_error_write(srv, "mod_fastcgi.c", 829U, "sdb",
                        "gethostbyname failed: ", *tmp___0, host->host);
        return (-1);
      }
      if (he->h_addrtype != 2) {
        log_error_write(srv, "mod_fastcgi.c", 836U, "sd",
                        "addr-type != AF_INET: ", he->h_addrtype);
        return (-1);
      }
      if ((unsigned int )he->h_length != sizeof(struct in_addr )) {
        log_error_write(srv, "mod_fastcgi.c", 841U, "sd",
                        "addr-length != sizeof(in_addr): ", he->h_length);
        return (-1);
      }
      memcpy((void */* __restrict  */)((void *)(& fcgi_addr_in.sin_addr.s_addr)),
             (void const   */* __restrict  */)((void const   *)*(he->h_addr_list + 0)),
             (unsigned int )he->h_length);
    }
    __x___1 = (unsigned short )proc->port;
    __asm__  ("rorw $8, %w0": "=r" (__v___1): "0" (__x___1): "cc");
    fcgi_addr_in.sin_port = __v___1;
    servlen = sizeof(fcgi_addr_in);
    socket_type = 2;
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_in);
    buffer_copy_string(proc->connection_name, "tcp:");
    buffer_append_string_buffer(proc->connection_name,
                                (buffer const   *)host->host);
    buffer_append_string(proc->connection_name, ":");
    buffer_append_long(proc->connection_name, (long )proc->port);
  } else {
    memset((void *)(& fcgi_addr), 0, sizeof(fcgi_addr));
    fcgi_addr_un.sun_family = (unsigned short)1;
    strcpy((char */* __restrict  */)(fcgi_addr_un.sun_path),
           (char const   */* __restrict  */)((char const   *)(proc->unixsocket)->ptr));
    tmp = strlen((char const   *)(fcgi_addr_un.sun_path));
    servlen = (unsigned int )(((struct sockaddr_un *)0)->sun_path) + tmp;
    socket_type = 1;
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_un);
    buffer_copy_string(proc->connection_name, "unix:");
    buffer_append_string_buffer(proc->connection_name,
                                (buffer const   *)proc->unixsocket);
  }
  fcgi_fd = socket(socket_type, 1, 0);
  if (-1 == fcgi_fd) {
    tmp___3 = __errno_location();
    tmp___4 = strerror(*tmp___3);
    log_error_write(srv, "mod_fastcgi.c", 861U, "ss", "failed:", tmp___4);
    return (-1);
  }
  tmp___60 = connect(fcgi_fd, (struct sockaddr  const  *)fcgi_addr, servlen);
  if (-1 == tmp___60) {
    tmp___5 = __errno_location();
    if (*tmp___5 != 2) {
      tmp___6 = buffer_is_empty(proc->unixsocket);
      if (! tmp___6) {
        unlink((char const   *)(proc->unixsocket)->ptr);
      }
    }
    close(fcgi_fd);
    fcgi_fd = socket(socket_type, 1, 0);
    if (-1 == fcgi_fd) {
      tmp___7 = __errno_location();
      tmp___8 = strerror(*tmp___7);
      log_error_write(srv, "mod_fastcgi.c", 880U, "ss", "socket failed:",
                      tmp___8);
      return (-1);
    }
    val = 1;
    tmp___11 = setsockopt(fcgi_fd, 1, 2, (void const   *)(& val), sizeof(val));
    if (tmp___11 < 0) {
      tmp___9 = __errno_location();
      tmp___10 = strerror(*tmp___9);
      log_error_write(srv, "mod_fastcgi.c", 887U, "ss", "socketsockopt failed:",
                      tmp___10);
      return (-1);
    }
    tmp___14 = bind(fcgi_fd, (struct sockaddr  const  *)fcgi_addr, servlen);
    if (-1 == tmp___14) {
      tmp___12 = __errno_location();
      tmp___13 = strerror(*tmp___12);
      log_error_write(srv, "mod_fastcgi.c", 894U, "sbs", "bind failed for:",
                      proc->connection_name, tmp___13);
      return (-1);
    }
    tmp___17 = listen(fcgi_fd, 1024);
    if (-1 == tmp___17) {
      tmp___15 = __errno_location();
      tmp___16 = strerror(*tmp___15);
      log_error_write(srv, "mod_fastcgi.c", 902U, "ss", "listen failed:",
                      tmp___16);
      return (-1);
    }
    child = fork();
    switch (child) {
    case 0: 
    i = 0U;
    env.ptr = (char **)((void *)0);
    env.size = 0U;
    env.used = 0U;
    arg.ptr = (char **)((void *)0);
    arg.size = 0U;
    arg.used = 0U;
    if (fcgi_fd != 0) {
      close(0);
      dup2(fcgi_fd, 0);
      close(fcgi_fd);
    }
    i = 3U;
    while (i < 256U) {
      close((int )i);
      i ++;
    }
    if ((host->bin_env_copy)->used) {
      i = 0U;
      while (i < (host->bin_env_copy)->used) {
        ds = (data_string *)*((host->bin_env_copy)->data + i);
        ge = getenv((char const   *)(ds->value)->ptr);
        if ((unsigned int )((void *)0) != (unsigned int )ge) {
          tmp___18 = strlen((char const   *)ge);
          if ((ds->value)->used) {
            tmp___19 = (ds->value)->used - 1U;
          } else {
            tmp___19 = 0U;
          }
          env_add(& env, (char const   *)(ds->value)->ptr, tmp___19,
                  (char const   *)ge, tmp___18);
        }
        i ++;
      }
    } else {
      i = 0U;
      while (*(environ + i)) {
        tmp___22 = __builtin_strchr(*(environ + i), '=');
        eq = tmp___22;
        if ((unsigned int )((void *)0) != (unsigned int )eq) {
          tmp___20 = strlen((char const   *)(eq + 1));
          env_add(& env, (char const   *)*(environ + i),
                  (unsigned int )(eq - *(environ + i)),
                  (char const   *)(eq + 1), tmp___20);
        }
        i ++;
      }
    }
    i = 0U;
    while (i < (host->bin_env)->used) {
      ds___0 = (data_string *)*((host->bin_env)->data + i);
      if ((ds___0->value)->used) {
        tmp___23 = (ds___0->value)->used - 1U;
      } else {
        tmp___23 = 0U;
      }
      if ((ds___0->key)->used) {
        tmp___24 = (ds___0->key)->used - 1U;
      } else {
        tmp___24 = 0U;
      }
      env_add(& env, (char const   *)(ds___0->key)->ptr, tmp___24,
              (char const   *)(ds___0->value)->ptr, tmp___23);
      i ++;
    }
    i = 0U;
    while (i < env.used) {
      if (0) {
        if (0) {
          __s1_len___0 = strlen((char const   *)*(env.ptr + i));
          __s2_len___0 = strlen("PHP_FCGI_CHILDREN=");
          if (! ((unsigned int )((void const   *)(*(env.ptr + i) + 1)) - (unsigned int )((void const   *)*(env.ptr + i)) == 1U)) {
            goto _L___2;
          } else {
            if (__s1_len___0 >= 4U) {
              _L___2: 
              if (! ((unsigned int )((void const   *)("PHP_FCGI_CHILDREN=" + 1)) - (unsigned int )((void const   *)"PHP_FCGI_CHILDREN=") == 1U)) {
                tmp___48 = 1;
              } else {
                if (__s2_len___0 >= 4U) {
                  tmp___48 = 1;
                } else {
                  tmp___48 = 0;
                }
              }
            } else {
              tmp___48 = 0;
            }
          }
          if (tmp___48) {
            tmp___44 = __builtin_strcmp((char const   *)*(env.ptr + i),
                                        "PHP_FCGI_CHILDREN=");
          } else {
            tmp___47 = __builtin_strcmp((char const   *)*(env.ptr + i),
                                        "PHP_FCGI_CHILDREN=");
            tmp___44 = tmp___47;
          }
        } else {
          tmp___47 = __builtin_strcmp((char const   *)*(env.ptr + i),
                                      "PHP_FCGI_CHILDREN=");
          tmp___44 = tmp___47;
        }
        tmp___38 = tmp___44;
      } else {
        tmp___38 = strncmp((char const   *)*(env.ptr + i), "PHP_FCGI_CHILDREN=",
                           sizeof("PHP_FCGI_CHILDREN=") - 1U);
      }
      if (0 == tmp___38) {
        break;
      }
      i ++;
    }
    if (i == env.used) {
      env_add(& env, "PHP_FCGI_CHILDREN", sizeof("PHP_FCGI_CHILDREN") - 1U, "1",
              sizeof("1") - 1U);
    }
    *(env.ptr + env.used) = (char *)((void *)0);
    parse_binpath(& arg, host->bin_path);
    c = strrchr((char const   *)*(arg.ptr + 0), '/');
    if ((unsigned int )((void *)0) != (unsigned int )c) {
      *c = (char )'\000';
      tmp___53 = chdir((char const   *)*(arg.ptr + 0));
      if (-1 == tmp___53) {
        *c = (char )'/';
        tmp___51 = __errno_location();
        tmp___52 = strerror(*tmp___51);
        log_error_write(srv, "mod_fastcgi.c", 984U, "sss", "chdir failed:",
                        tmp___52, *(arg.ptr + 0));
      }
      *c = (char )'/';
    }
    execve((char const   *)*(arg.ptr + 0), (char * const  *)arg.ptr,
           (char * const  *)env.ptr);
    tmp___54 = __errno_location();
    tmp___55 = strerror(*tmp___54);
    log_error_write(srv, "mod_fastcgi.c", 993U, "sbs", "execve failed for:",
                    host->bin_path, tmp___55);
    tmp___56 = __errno_location();
    exit(*tmp___56);
    break;
    case -1: 
    break;
    default: 
    select(0, (fd_set */* __restrict  */)((fd_set *)((void *)0)),
           (fd_set */* __restrict  */)((fd_set *)((void *)0)),
           (fd_set */* __restrict  */)((fd_set *)((void *)0)),
           (struct timeval */* __restrict  */)(& tv));
    tmp___57 = waitpid(child, & status, 1);
    switch (tmp___57) {
    case 0: 
    break;
    case -1: 
    tmp___58 = __errno_location();
    tmp___59 = strerror(*tmp___58);
    log_error_write(srv, "mod_fastcgi.c", 1015U, "ss", "pid not found:",
                    tmp___59);
    return (-1);
    default: 
    log_error_write(srv, "mod_fastcgi.c", 1019U, "sbs", "the fastcgi-backend",
                    host->bin_path, "failed to start:");
    __constr_expr_4.__in = status;
    if ((__constr_expr_4.__i & 127) == 0) {
      __constr_expr_0.__in = status;
      log_error_write(srv, "mod_fastcgi.c", 1023U, "sdb",
                      "child exited with status",
                      (__constr_expr_0.__i & 65280) >> 8, host->bin_path);
      log_error_write(srv, "mod_fastcgi.c", 1026U, "s",
                      "If you\'re trying to run PHP as a FastCGI backend, make sure you\'re using the FastCGI-enabled version.\nYou can find out if it is the right one by executing \'php -v\' and it should display \'(cgi-fcgi)\' in the output, NOT \'(cgi)\' NOR \'(cli)\'.\nFor more information, check http://trac.lighttpd.net/trac/wiki/Docs%3AModFastCGI#preparing-php-as-a-fastcgi-programIf this is PHP on Gentoo, add \'fastcgi\' to the USE flags.");
    } else {
      __constr_expr_3.__in = status;
      if ((int )((signed char )((__constr_expr_3.__i & 127) + 1)) >> 1 > 0) {
        __constr_expr_1.__in = status;
        log_error_write(srv, "mod_fastcgi.c", 1033U, "sd",
                        "terminated by signal:", __constr_expr_1.__i & 127);
        __constr_expr_2.__in = status;
        if ((__constr_expr_2.__i & 127) == 11) {
          log_error_write(srv, "mod_fastcgi.c", 1038U, "s",
                          "to be exact: it segfaulted, crashed, died, ... you get the idea.");
          log_error_write(srv, "mod_fastcgi.c", 1040U, "s",
                          "If this is PHP, try removing the bytecode caches for now and try again.");
        }
      } else {
        log_error_write(srv, "mod_fastcgi.c", 1044U, "sd",
                        "child died somehow:", status);
      }
    }
    return (-1);
    }
    proc->pid = child;
    proc->last_used = srv->cur_ts;
    proc->is_local = 1;
    break;
    }
  } else {
    proc->is_local = 0;
    proc->pid = 0;
    if (p->conf.debug) {
      log_error_write(srv, "mod_fastcgi.c", 1064U, "sb",
                      "(debug) socket is already used; won\'t spawn:",
                      proc->connection_name);
    }
  }
  proc->state = (enum __anonenum_state_139 )1;
  (host->active_procs) ++;
  close(fcgi_fd);
  return (0);
}
}

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
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___19 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___23 ;
  unsigned char const   *__s1___0 ;
  register int __result___2 ;
  int tmp___24 ;
  int tmp___25 ;
  size_t __s1_len___0 ;
  size_t __s2_len___0 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___29 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___33 ;
  unsigned char const   *__s1___2 ;
  register int __result___6 ;
  int tmp___34 ;
  int tmp___35 ;
  int tmp___36 ;

  {
  p = (plugin_data *)p_d;
  i = 0U;
  tmp = buffer_init();
  fcgi_mode = tmp;
  cv[0].key = "fastcgi.server";
  cv[0].destination = (void *)0;
  cv[0].type = (enum __anonenum_config_values_type_t_87 )5;
  cv[0].scope = (enum __anonenum_config_scope_type_t_88 )2;
  cv[1].key = "fastcgi.debug";
  cv[1].destination = (void *)0;
  cv[1].type = (enum __anonenum_config_values_type_t_87 )2;
  cv[1].scope = (enum __anonenum_config_scope_type_t_88 )2;
  cv[2].key = "fastcgi.map-extensions";
  cv[2].destination = (void *)0;
  cv[2].type = (enum __anonenum_config_values_type_t_87 )4;
  cv[2].scope = (enum __anonenum_config_scope_type_t_88 )2;
  cv[3].key = (char const   *)((void *)0);
  cv[3].destination = (void *)0;
  cv[3].type = (enum __anonenum_config_values_type_t_87 )0;
  cv[3].scope = (enum __anonenum_config_scope_type_t_88 )0;
  tmp___0 = calloc(1U, (srv->config_context)->used * sizeof(specific_config *));
  p->config_storage = (plugin_config **)tmp___0;
  i = 0U;
  while (i < (srv->config_context)->used) {
    tmp___1 = malloc(sizeof(plugin_config ));
    s = (plugin_config *)tmp___1;
    s->exts = fastcgi_extensions_init();
    s->debug = 0;
    s->ext_mapping = array_init();
    cv[0].destination = (void *)s->exts;
    cv[1].destination = (void *)(& s->debug);
    cv[2].destination = (void *)s->ext_mapping;
    *(p->config_storage + i) = s;
    ca = ((data_config *)*((srv->config_context)->data + i))->value;
    tmp___2 = config_insert_values_global(srv, ca,
                                          (config_values_t const   *)(cv));
    if (0 != tmp___2) {
      return ((enum __anonenum_handler_t_43 )5);
    }
    du = array_get_element(ca, "fastcgi.server");
    if ((unsigned int )((void *)0) != (unsigned int )du) {
      da = (data_array *)du;
      if ((int )du->type != 3) {
        log_error_write(srv, "mod_fastcgi.c", 1123U, "sss",
                        "unexpected type for key: ", "fastcgi.server",
                        "array of strings");
        return ((enum __anonenum_handler_t_43 )5);
      }
      j = 0U;
      while (j < (da->value)->used) {
        da_ext = (data_array *)*((da->value)->data + j);
        if ((int )(*((da->value)->data + j))->type != 3) {
          log_error_write(srv, "mod_fastcgi.c", 1140U, "sssbs",
                          "unexpected type for key: ", "fastcgi.server", "[",
                          (*((da->value)->data + j))->key, "](string)");
          return ((enum __anonenum_handler_t_43 )5);
        }
        n = 0U;
        while (n < (da_ext->value)->used) {
          da_host = (data_array *)*((da_ext->value)->data + n);
          fcv[0].key = "host";
          fcv[0].destination = (void *)0;
          fcv[0].type = (enum __anonenum_config_values_type_t_87 )1;
          fcv[0].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[1].key = "docroot";
          fcv[1].destination = (void *)0;
          fcv[1].type = (enum __anonenum_config_values_type_t_87 )1;
          fcv[1].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[2].key = "mode";
          fcv[2].destination = (void *)0;
          fcv[2].type = (enum __anonenum_config_values_type_t_87 )1;
          fcv[2].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[3].key = "socket";
          fcv[3].destination = (void *)0;
          fcv[3].type = (enum __anonenum_config_values_type_t_87 )1;
          fcv[3].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[4].key = "bin-path";
          fcv[4].destination = (void *)0;
          fcv[4].type = (enum __anonenum_config_values_type_t_87 )1;
          fcv[4].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[5].key = "check-local";
          fcv[5].destination = (void *)0;
          fcv[5].type = (enum __anonenum_config_values_type_t_87 )3;
          fcv[5].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[6].key = "port";
          fcv[6].destination = (void *)0;
          fcv[6].type = (enum __anonenum_config_values_type_t_87 )2;
          fcv[6].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[7].key = "min-procs-not-working";
          fcv[7].destination = (void *)0;
          fcv[7].type = (enum __anonenum_config_values_type_t_87 )2;
          fcv[7].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[8].key = "max-procs";
          fcv[8].destination = (void *)0;
          fcv[8].type = (enum __anonenum_config_values_type_t_87 )2;
          fcv[8].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[9].key = "max-load-per-proc";
          fcv[9].destination = (void *)0;
          fcv[9].type = (enum __anonenum_config_values_type_t_87 )2;
          fcv[9].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[10].key = "idle-timeout";
          fcv[10].destination = (void *)0;
          fcv[10].type = (enum __anonenum_config_values_type_t_87 )2;
          fcv[10].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[11].key = "disable-time";
          fcv[11].destination = (void *)0;
          fcv[11].type = (enum __anonenum_config_values_type_t_87 )2;
          fcv[11].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[12].key = "bin-environment";
          fcv[12].destination = (void *)0;
          fcv[12].type = (enum __anonenum_config_values_type_t_87 )4;
          fcv[12].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[13].key = "bin-copy-environment";
          fcv[13].destination = (void *)0;
          fcv[13].type = (enum __anonenum_config_values_type_t_87 )4;
          fcv[13].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[14].key = "broken-scriptfilename";
          fcv[14].destination = (void *)0;
          fcv[14].type = (enum __anonenum_config_values_type_t_87 )3;
          fcv[14].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[15].key = "allow-x-send-file";
          fcv[15].destination = (void *)0;
          fcv[15].type = (enum __anonenum_config_values_type_t_87 )3;
          fcv[15].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[16].key = "strip-request-uri";
          fcv[16].destination = (void *)0;
          fcv[16].type = (enum __anonenum_config_values_type_t_87 )1;
          fcv[16].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[17].key = "kill-signal";
          fcv[17].destination = (void *)0;
          fcv[17].type = (enum __anonenum_config_values_type_t_87 )2;
          fcv[17].scope = (enum __anonenum_config_scope_type_t_88 )2;
          fcv[18].key = (char const   *)((void *)0);
          fcv[18].destination = (void *)0;
          fcv[18].type = (enum __anonenum_config_values_type_t_87 )0;
          fcv[18].scope = (enum __anonenum_config_scope_type_t_88 )0;
          if ((int )da_host->type != 3) {
            log_error_write(srv, "mod_fastcgi.c", 1191U, "ssSBS",
                            "unexpected type for key:", "fastcgi.server", "[",
                            da_host->key, "](string)");
            return ((enum __anonenum_handler_t_43 )5);
          }
          host = fastcgi_host_init();
          buffer_copy_string_buffer(host->id, (buffer const   *)da_host->key);
          host->check_local = (unsigned short)1;
          host->min_procs = (unsigned short)4;
          host->max_procs = (unsigned short)4;
          host->max_load_per_proc = (unsigned short)1;
          host->idle_timeout = (unsigned short)60;
          host->mode = (unsigned short)1;
          host->disable_time = (unsigned short)60;
          host->break_scriptfilename_for_php = (unsigned short)0;
          host->allow_xsendfile = (unsigned short)0;
          host->kill_signal = (unsigned short)15;
          fcv[0].destination = (void *)host->host;
          fcv[1].destination = (void *)host->docroot;
          fcv[2].destination = (void *)fcgi_mode;
          fcv[3].destination = (void *)host->unixsocket;
          fcv[4].destination = (void *)host->bin_path;
          fcv[5].destination = (void *)(& host->check_local);
          fcv[6].destination = (void *)(& host->port);
          fcv[7].destination = (void *)(& host->min_procs);
          fcv[8].destination = (void *)(& host->max_procs);
          fcv[9].destination = (void *)(& host->max_load_per_proc);
          fcv[10].destination = (void *)(& host->idle_timeout);
          fcv[11].destination = (void *)(& host->disable_time);
          fcv[12].destination = (void *)host->bin_env;
          fcv[13].destination = (void *)host->bin_env_copy;
          fcv[14].destination = (void *)(& host->break_scriptfilename_for_php);
          fcv[15].destination = (void *)(& host->allow_xsendfile);
          fcv[16].destination = (void *)host->strip_request_uri;
          fcv[17].destination = (void *)(& host->kill_signal);
          tmp___3 = config_insert_values_internal(srv, da_host->value,
                                                  (config_values_t const   *)(fcv));
          if (0 != tmp___3) {
            return ((enum __anonenum_handler_t_43 )5);
          }
          tmp___4 = buffer_is_empty(host->host);
          if (tmp___4) {
            if (host->port) {
              _L: 
              tmp___5 = buffer_is_empty(host->unixsocket);
              if (! tmp___5) {
                log_error_write(srv, "mod_fastcgi.c", 1241U, "sbsbsbs",
                                "either host/port or socket have to be set in:",
                                da->key, "= (", da_ext->key, " => (",
                                da_host->key, " ( ...");
                return ((enum __anonenum_handler_t_43 )5);
              }
            }
          } else {
            goto _L;
          }
          tmp___8 = buffer_is_empty(host->unixsocket);
          if (tmp___8) {
            tmp___6 = buffer_is_empty(host->host);
            if (tmp___6) {
              tmp___7 = buffer_is_empty(host->bin_path);
              if (tmp___7) {
                log_error_write(srv, "mod_fastcgi.c", 1268U, "sbsbsbs",
                                "host or binpath have to be set in:", da->key,
                                "= (", da_ext->key, " => (", da_host->key,
                                " ( ...");
                return ((enum __anonenum_handler_t_43 )5);
              } else {
                goto _L___0;
              }
            } else {
              _L___0: 
              if ((int )host->port == 0) {
                log_error_write(srv, "mod_fastcgi.c", 1276U, "sbsbsbs",
                                "port has to be set in:", da->key, "= (",
                                da_ext->key, " => (", da_host->key, " ( ...");
                return ((enum __anonenum_handler_t_43 )5);
              }
            }
          } else {
            if ((host->unixsocket)->used > sizeof(un.sun_path) - 2U) {
              log_error_write(srv, "mod_fastcgi.c", 1255U, "sbsbsbs",
                              "unixsocket is too long in:", da->key, "= (",
                              da_ext->key, " => (", da_host->key, " ( ...");
              return ((enum __anonenum_handler_t_43 )5);
            }
          }
          tmp___14 = buffer_is_empty(host->bin_path);
          if (tmp___14) {
            proc___0 = fastcgi_process_init();
            tmp___12 = host->num_procs;
            (host->num_procs) ++;
            proc___0->id = tmp___12;
            (host->max_id) ++;
            (host->active_procs) ++;
            proc___0->state = (enum __anonenum_state_139 )1;
            tmp___13 = buffer_is_empty(host->unixsocket);
            if (tmp___13) {
              proc___0->port = (unsigned int )host->port;
            } else {
              buffer_copy_string_buffer(proc___0->unixsocket,
                                        (buffer const   *)host->unixsocket);
            }
            fastcgi_status_init(srv, p->statuskey, host, proc___0);
            host->first = proc___0;
            host->min_procs = (unsigned short)1;
            host->max_procs = (unsigned short)1;
          } else {
            host->min_procs = host->max_procs;
            if ((int )host->min_procs > (int )host->max_procs) {
              host->max_procs = host->min_procs;
            }
            if ((int )host->max_load_per_proc < 1) {
              host->max_load_per_proc = (unsigned short)0;
            }
            if (s->debug) {
              log_error_write(srv, "mod_fastcgi.c", 1297U, "ssbsdsbsdsd",
                              "--- fastcgi spawning local", "\n\tproc:",
                              host->bin_path, "\n\tport:", host->port,
                              "\n\tsocket", host->unixsocket, "\n\tmin-procs:",
                              host->min_procs, "\n\tmax-procs:", host->max_procs);
            }
            pno = 0U;
            while (pno < (unsigned int )host->min_procs) {
              proc = fastcgi_process_init();
              tmp___9 = host->num_procs;
              (host->num_procs) ++;
              proc->id = tmp___9;
              (host->max_id) ++;
              tmp___10 = buffer_is_empty(host->unixsocket);
              if (tmp___10) {
                proc->port = (unsigned int )host->port + pno;
              } else {
                buffer_copy_string_buffer(proc->unixsocket,
                                          (buffer const   *)host->unixsocket);
                buffer_append_string(proc->unixsocket, "-");
                buffer_append_long(proc->unixsocket, (long )pno);
              }
              if (s->debug) {
                log_error_write(srv, "mod_fastcgi.c", 1322U, "ssdsbsdsd",
                                "--- fastcgi spawning", "\n\tport:", host->port,
                                "\n\tsocket", host->unixsocket, "\n\tcurrent:",
                                pno, "/", host->min_procs);
              }
              tmp___11 = fcgi_spawn_connection(srv, p, host, proc);
              if (tmp___11) {
                log_error_write(srv, "mod_fastcgi.c", 1330U, "s",
                                "[ERROR]: spawning fcgi failed.");
                return ((enum __anonenum_handler_t_43 )5);
              }
              fastcgi_status_init(srv, p->statuskey, host, proc);
              proc->next = host->first;
              if (host->first) {
                (host->first)->prev = proc;
              }
              host->first = proc;
              pno ++;
            }
          }
          tmp___36 = buffer_is_empty(fcgi_mode);
          if (! tmp___36) {
            if (0) {
              __s1_len___0 = strlen((char const   *)fcgi_mode->ptr);
              __s2_len___0 = strlen("responder");
              if (! ((unsigned int )((void const   *)(fcgi_mode->ptr + 1)) - (unsigned int )((void const   *)fcgi_mode->ptr) == 1U)) {
                goto _L___4;
              } else {
                if (__s1_len___0 >= 4U) {
                  _L___4: 
                  if (! ((unsigned int )((void const   *)("responder" + 1)) - (unsigned int )((void const   *)"responder") == 1U)) {
                    tmp___35 = 1;
                  } else {
                    if (__s2_len___0 >= 4U) {
                      tmp___35 = 1;
                    } else {
                      tmp___35 = 0;
                    }
                  }
                } else {
                  tmp___35 = 0;
                }
              }
              if (tmp___35) {
                tmp___31 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                            "responder");
              } else {
                tmp___34 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                            "responder");
                tmp___31 = tmp___34;
              }
            } else {
              tmp___34 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                          "responder");
              tmp___31 = tmp___34;
            }
            if (tmp___31 == 0) {
              host->mode = (unsigned short)1;
            } else {
              if (0) {
                __s1_len = strlen((char const   *)fcgi_mode->ptr);
                __s2_len = strlen("authorizer");
                if (! ((unsigned int )((void const   *)(fcgi_mode->ptr + 1)) - (unsigned int )((void const   *)fcgi_mode->ptr) == 1U)) {
                  goto _L___2;
                } else {
                  if (__s1_len >= 4U) {
                    _L___2: 
                    if (! ((unsigned int )((void const   *)("authorizer" + 1)) - (unsigned int )((void const   *)"authorizer") == 1U)) {
                      tmp___25 = 1;
                    } else {
                      if (__s2_len >= 4U) {
                        tmp___25 = 1;
                      } else {
                        tmp___25 = 0;
                      }
                    }
                  } else {
                    tmp___25 = 0;
                  }
                }
                if (tmp___25) {
                  tmp___21 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                              "authorizer");
                } else {
                  tmp___24 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                              "authorizer");
                  tmp___21 = tmp___24;
                }
              } else {
                tmp___24 = __builtin_strcmp((char const   *)fcgi_mode->ptr,
                                            "authorizer");
                tmp___21 = tmp___24;
              }
              if (tmp___21 == 0) {
                host->mode = (unsigned short)2;
                tmp___15 = buffer_is_empty(host->docroot);
                if (tmp___15) {
                  log_error_write(srv, "mod_fastcgi.c", 1371U, "s",
                                  "ERROR: docroot is required for authorizer mode.");
                  return ((enum __anonenum_handler_t_43 )5);
                }
              } else {
                log_error_write(srv, "mod_fastcgi.c", 1376U, "sbs",
                                "WARNING: unknown fastcgi mode:", fcgi_mode,
                                "(ignored, mode set to responder)");
              }
            }
          }
          fastcgi_extension_insert(s->exts, da_ext->key, host);
          n ++;
        }
        j ++;
      }
    }
    i ++;
  }
  buffer_free(fcgi_mode);
  return ((enum __anonenum_handler_t_43 )1);
}
}

static int fcgi_set_state(server *srv , handler_ctx *hctx ,
                          fcgi_connection_state_t state ) 
{ 

  {
  hctx->state = state;
  hctx->state_timestamp = srv->cur_ts;
  return (0);
}
}

static size_t fcgi_requestid_new(server *srv , plugin_data *p ) 
{ size_t m ;
  size_t i ;
  buffer_uint *r ;
  void *tmp ;
  void *tmp___0 ;
  size_t tmp___1 ;

  {
  m = 0U;
  r = & p->fcgi_request_id;
  i = 0U;
  while (i < r->used) {
    if (*(r->ptr + i) > m) {
      m = *(r->ptr + i);
    }
    i ++;
  }
  if (r->size == 0U) {
    r->size = 16U;
    tmp = malloc(sizeof(*(r->ptr)) * r->size);
    r->ptr = (size_t *)tmp;
  } else {
    if (r->used == r->size) {
      r->size += 16U;
      tmp___0 = realloc((void *)r->ptr, sizeof(*(r->ptr)) * r->size);
      r->ptr = (size_t *)tmp___0;
    }
  }
  tmp___1 = r->used;
  (r->used) ++;
  m ++;
  *(r->ptr + tmp___1) = m;
  return (m);
}
}

static int fcgi_requestid_del(server *srv , plugin_data *p , size_t request_id ) 
{ size_t i ;
  buffer_uint *r ;

  {
  r = & p->fcgi_request_id;
  i = 0U;
  while (i < r->used) {
    if (*(r->ptr + i) == request_id) {
      break;
    }
    i ++;
  }
  if (i != r->used) {
    if (i != r->used - 1U) {
      *(r->ptr + i) = *(r->ptr + (r->used - 1U));
    }
    (r->used) --;
  }
  return (0);
}
}

void fcgi_connection_close(server *srv , handler_ctx *hctx ) 
{ plugin_data *p ;
  connection *con ;
  size_t tmp ;

  {
  if ((unsigned int )((void *)0) == (unsigned int )hctx) {
    return;
  }
  p = hctx->plugin_data;
  con = hctx->remote_conn;
  if (hctx->fd != -1) {
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
    fdevent_unregister(srv->ev, hctx->fd);
    close(hctx->fd);
    (srv->cur_fds) --;
  }
  if (hctx->request_id != 0U) {
    fcgi_requestid_del(srv, p, hctx->request_id);
  }
  if (hctx->host) {
    if (hctx->proc) {
      if (hctx->got_proc) {
        ((hctx->proc)->load) --;
        status_counter_dec(srv, "fastcgi.active-requests",
                           sizeof("fastcgi.active-requests") - 1U);
        fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
        buffer_append_string(p->statuskey, ".load");
        if ((p->statuskey)->used) {
          tmp = (p->statuskey)->used - 1U;
        } else {
          tmp = 0U;
        }
        status_counter_set(srv, (char const   *)(p->statuskey)->ptr, tmp,
                           (int )(hctx->proc)->load);
        if (p->conf.debug) {
          log_error_write(srv, "mod_fastcgi.c", 1480U, "ssdsbsd",
                          "released proc:", "pid:", (hctx->proc)->pid,
                          "socket:", (hctx->proc)->connection_name, "load:",
                          (hctx->proc)->load);
        }
      }
    }
  }
  handler_ctx_free(hctx);
  *(con->plugin_ctx + p->id) = (void *)0;
  return;
}
}

static int fcgi_reconnect(server *srv , handler_ctx *hctx ) 
{ plugin_data *p ;

  {
  p = hctx->plugin_data;
  if (hctx->fd != -1) {
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
    fdevent_unregister(srv->ev, hctx->fd);
    close(hctx->fd);
    (srv->cur_fds) --;
    hctx->fd = -1;
  }
  fcgi_requestid_del(srv, p, hctx->request_id);
  fcgi_set_state(srv, hctx, (enum __anonenum_fcgi_connection_state_t_147 )1);
  hctx->request_id = 0U;
  (hctx->reconnects) ++;
  if (p->conf.debug > 2) {
    if (hctx->proc) {
      log_error_write(srv, "mod_fastcgi.c", 1533U, "sdb",
                      "release proc for reconnect:", (hctx->proc)->pid,
                      (hctx->proc)->connection_name);
    } else {
      log_error_write(srv, "mod_fastcgi.c", 1537U, "sb",
                      "release proc for reconnect:", (hctx->host)->unixsocket);
    }
  }
  if (hctx->proc) {
    if (hctx->got_proc) {
      ((hctx->proc)->load) --;
    }
  }
  ((hctx->host)->load) --;
  hctx->host = (fcgi_extension_host *)((void *)0);
  return (0);
}
}

static handler_t fcgi_connection_reset(server *srv , connection *con ,
                                       void *p_d ) 
{ plugin_data *p ;

  {
  p = (plugin_data *)p_d;
  fcgi_connection_close(srv, (handler_ctx *)*(con->plugin_ctx + p->id));
  return ((enum __anonenum_handler_t_43 )1);
}
}

static int fcgi_env_add(buffer *env , char const   *key , size_t key_len ,
                        char const   *val , size_t val_len ) 
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
  if (! key) {
    return (-1);
  } else {
    if (! val) {
      return (-1);
    }
  }
  len = key_len + val_len;
  if (key_len > 127U) {
    tmp = 4;
  } else {
    tmp = 1;
  }
  len += (unsigned int )tmp;
  if (val_len > 127U) {
    tmp___0 = 4;
  } else {
    tmp___0 = 1;
  }
  len += (unsigned int )tmp___0;
  buffer_prepare_append(env, len);
  if (key_len > 127U) {
    tmp___1 = env->used;
    (env->used) ++;
    *(env->ptr + tmp___1) = (char )(((key_len >> 24) & 255U) | 128U);
    tmp___2 = env->used;
    (env->used) ++;
    *(env->ptr + tmp___2) = (char )((key_len >> 16) & 255U);
    tmp___3 = env->used;
    (env->used) ++;
    *(env->ptr + tmp___3) = (char )((key_len >> 8) & 255U);
    tmp___4 = env->used;
    (env->used) ++;
    *(env->ptr + tmp___4) = (char )(key_len & 255U);
  } else {
    tmp___5 = env->used;
    (env->used) ++;
    *(env->ptr + tmp___5) = (char )(key_len & 255U);
  }
  if (val_len > 127U) {
    tmp___6 = env->used;
    (env->used) ++;
    *(env->ptr + tmp___6) = (char )(((val_len >> 24) & 255U) | 128U);
    tmp___7 = env->used;
    (env->used) ++;
    *(env->ptr + tmp___7) = (char )((val_len >> 16) & 255U);
    tmp___8 = env->used;
    (env->used) ++;
    *(env->ptr + tmp___8) = (char )((val_len >> 8) & 255U);
    tmp___9 = env->used;
    (env->used) ++;
    *(env->ptr + tmp___9) = (char )(val_len & 255U);
  } else {
    tmp___10 = env->used;
    (env->used) ++;
    *(env->ptr + tmp___10) = (char )(val_len & 255U);
  }
  memcpy((void */* __restrict  */)((void *)(env->ptr + env->used)),
         (void const   */* __restrict  */)((void const   *)key), key_len);
  env->used += key_len;
  memcpy((void */* __restrict  */)((void *)(env->ptr + env->used)),
         (void const   */* __restrict  */)((void const   *)val), val_len);
  env->used += val_len;
  return (0);
}
}

static int fcgi_header(FCGI_Header *header , unsigned char type ,
                       size_t request_id , int contentLength ,
                       unsigned char paddingLength ) 
{ 

  {
  header->version = (unsigned char)1;
  header->type = type;
  header->requestIdB0 = (unsigned char )(request_id & 255U);
  header->requestIdB1 = (unsigned char )((request_id >> 8) & 255U);
  header->contentLengthB0 = (unsigned char )(contentLength & 255);
  header->contentLengthB1 = (unsigned char )((contentLength >> 8) & 255);
  header->paddingLength = paddingLength;
  header->reserved = (unsigned char)0;
  return (0);
}
}

static connection_result_t fcgi_establish_connection(server *srv ,
                                                     handler_ctx *hctx ) 
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
  host = hctx->host;
  proc = hctx->proc;
  fcgi_fd = hctx->fd;
  memset((void *)(& fcgi_addr), 0, sizeof(fcgi_addr));
  tmp___3 = buffer_is_empty(proc->unixsocket);
  if (tmp___3) {
    fcgi_addr_in.sin_family = (unsigned short)2;
    tmp___1 = inet_aton((char const   *)(host->host)->ptr,
                        & fcgi_addr_in.sin_addr);
    if (0 == tmp___1) {
      log_error_write(srv, "mod_fastcgi.c", 1668U, "sbs",
                      "converting IP address failed for", host->host,
                      "\nBe sure to specify an IP address here");
      return ((enum __anonenum_connection_result_t_154 )-1);
    }
    __x = (unsigned short )proc->port;
    __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
    fcgi_addr_in.sin_port = __v;
    servlen = sizeof(fcgi_addr_in);
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_in);
    tmp___2 = buffer_is_empty(proc->connection_name);
    if (tmp___2) {
      buffer_copy_string(proc->connection_name, "tcp:");
      buffer_append_string_buffer(proc->connection_name,
                                  (buffer const   *)host->host);
      buffer_append_string(proc->connection_name, ":");
      buffer_append_long(proc->connection_name, (long )proc->port);
    }
  } else {
    fcgi_addr_un.sun_family = (unsigned short)1;
    strcpy((char */* __restrict  */)(fcgi_addr_un.sun_path),
           (char const   */* __restrict  */)((char const   *)(proc->unixsocket)->ptr));
    tmp = strlen((char const   *)(fcgi_addr_un.sun_path));
    servlen = (unsigned int )(((struct sockaddr_un *)0)->sun_path) + tmp;
    fcgi_addr = (struct sockaddr *)(& fcgi_addr_un);
    tmp___0 = buffer_is_empty(proc->connection_name);
    if (tmp___0) {
      buffer_copy_string(proc->connection_name, "unix:");
      buffer_append_string_buffer(proc->connection_name,
                                  (buffer const   *)proc->unixsocket);
    }
  }
  tmp___10 = connect(fcgi_fd, (struct sockaddr  const  *)fcgi_addr, servlen);
  if (-1 == tmp___10) {
    tmp___7 = __errno_location();
    if (*tmp___7 == 115) {
      goto _L;
    } else {
      tmp___8 = __errno_location();
      if (*tmp___8 == 114) {
        goto _L;
      } else {
        tmp___9 = __errno_location();
        if (*tmp___9 == 4) {
          _L: 
          if (hctx->conf.debug > 2) {
            log_error_write(srv, "mod_fastcgi.c", 1693U, "sb",
                            "connect delayed; will continue later:",
                            proc->connection_name);
          }
          return ((enum __anonenum_connection_result_t_154 )2);
        } else {
          tmp___6 = __errno_location();
          if (*tmp___6 == 11) {
            if (hctx->conf.debug) {
              log_error_write(srv, "mod_fastcgi.c", 1700U, "sbsd",
                              "This means that you have more incoming requests than your FastCGI backend can handle in parallel.It might help to spawn more FastCGI backends or PHP children; if not, decrease server.max-connections.The load for this FastCGI backend",
                              proc->connection_name, "is", proc->load);
            }
            return ((enum __anonenum_connection_result_t_154 )3);
          } else {
            tmp___4 = __errno_location();
            tmp___5 = strerror(*tmp___4);
            log_error_write(srv, "mod_fastcgi.c", 1708U, "sssb",
                            "connect failed:", tmp___5, "on",
                            proc->connection_name);
            return ((enum __anonenum_connection_result_t_154 )4);
          }
        }
      }
    }
  }
  hctx->reconnects = 0;
  if (hctx->conf.debug > 1) {
    log_error_write(srv, "mod_fastcgi.c", 1719U, "sd", "connect succeeded: ",
                    fcgi_fd);
  }
  return ((enum __anonenum_connection_result_t_154 )1);
}
}

static int fcgi_env_add_request_headers(server *srv , connection *con ,
                                        plugin_data *p ) 
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
  i = 0U;
  while (i < (con->request.headers)->used) {
    ds = (data_string *)*((con->request.headers)->data + i);
    if ((ds->value)->used) {
      if ((ds->key)->used) {
        buffer_reset(srv->tmp_buf);
        tmp = strcasecmp((char const   *)(ds->key)->ptr, "CONTENT-TYPE");
        if (0 != tmp) {
          buffer_copy_string_len(srv->tmp_buf, "HTTP_", sizeof("HTTP_") - 1U);
          ((srv->tmp_buf)->used) --;
        }
        buffer_prepare_append(srv->tmp_buf, (ds->key)->used + 2U);
        j = 0U;
        while (j < (ds->key)->used - 1U) {
          c = (char )'_';
          tmp___1 = light_isalpha((int )*((ds->key)->ptr + j));
          if (tmp___1) {
            c = (char )((int )*((ds->key)->ptr + j) & -33);
          } else {
            tmp___0 = light_isdigit((int )*((ds->key)->ptr + j));
            if (tmp___0) {
              c = *((ds->key)->ptr + j);
            }
          }
          tmp___2 = (srv->tmp_buf)->used;
          ((srv->tmp_buf)->used) ++;
          *((srv->tmp_buf)->ptr + tmp___2) = c;
          j ++;
        }
        tmp___3 = (srv->tmp_buf)->used;
        ((srv->tmp_buf)->used) ++;
        *((srv->tmp_buf)->ptr + tmp___3) = (char )'\000';
        if ((ds->value)->used) {
          tmp___4 = (ds->value)->used - 1U;
        } else {
          tmp___4 = 0U;
        }
        if ((srv->tmp_buf)->used) {
          tmp___5 = (srv->tmp_buf)->used - 1U;
        } else {
          tmp___5 = 0U;
        }
        fcgi_env_add(p->fcgi_env, (char const   *)(srv->tmp_buf)->ptr, tmp___5,
                     (char const   *)(ds->value)->ptr, tmp___4);
      }
    }
    i ++;
  }
  i = 0U;
  while (i < (con->environment)->used) {
    ds___0 = (data_string *)*((con->environment)->data + i);
    if ((ds___0->value)->used) {
      if ((ds___0->key)->used) {
        buffer_reset(srv->tmp_buf);
        buffer_prepare_append(srv->tmp_buf, (ds___0->key)->used + 2U);
        j___0 = 0U;
        while (j___0 < (ds___0->key)->used - 1U) {
          c___0 = (char )'_';
          tmp___7 = light_isalpha((int )*((ds___0->key)->ptr + j___0));
          if (tmp___7) {
            c___0 = (char )((int )*((ds___0->key)->ptr + j___0) & -33);
          } else {
            tmp___6 = light_isdigit((int )*((ds___0->key)->ptr + j___0));
            if (tmp___6) {
              c___0 = *((ds___0->key)->ptr + j___0);
            }
          }
          tmp___8 = (srv->tmp_buf)->used;
          ((srv->tmp_buf)->used) ++;
          *((srv->tmp_buf)->ptr + tmp___8) = c___0;
          j___0 ++;
        }
        tmp___9 = (srv->tmp_buf)->used;
        ((srv->tmp_buf)->used) ++;
        *((srv->tmp_buf)->ptr + tmp___9) = (char )'\000';
        if ((ds___0->value)->used) {
          tmp___10 = (ds___0->value)->used - 1U;
        } else {
          tmp___10 = 0U;
        }
        if ((srv->tmp_buf)->used) {
          tmp___11 = (srv->tmp_buf)->used - 1U;
        } else {
          tmp___11 = 0U;
        }
        fcgi_env_add(p->fcgi_env, (char const   *)(srv->tmp_buf)->ptr, tmp___11,
                     (char const   *)(ds___0->value)->ptr, tmp___10);
      }
    }
    i ++;
  }
  return (0);
}
}

static int fcgi_create_env(server *srv , handler_ctx *hctx , size_t request_id ) 
{ FCGI_BeginRequestRecord beginRecord ;
  FCGI_Header header ;
  buffer *b ;
  char buf[32] ;
  char const   *s ;
  char b2[47] ;
  plugin_data *p ;
  fcgi_extension_host *host ;
  connection *con ;
  server_socket *srv_sock ;
  sock_addr our_addr ;
  socklen_t our_addr_len ;
  size_t tmp ;
  void const   *tmp___0 ;
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
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___16 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___20 ;
  unsigned char const   *__s1___0 ;
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
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___28 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___32 ;
  unsigned char const   *__s1___2 ;
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
  unsigned char const   *__s2___3 ;
  register int __result___7 ;
  int tmp___42 ;
  unsigned char const   *__s1___3 ;
  register int __result___8 ;
  int tmp___43 ;
  int tmp___44 ;
  int tmp___45 ;
  unsigned char const   *__s2___4 ;
  register int __result___9 ;
  int tmp___46 ;
  unsigned char const   *__s1___4 ;
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
  unsigned char const   *__s2___5 ;
  register int __result___11 ;
  int tmp___54 ;
  unsigned char const   *__s1___5 ;
  register int __result___12 ;
  int tmp___55 ;
  int tmp___56 ;
  int tmp___57 ;
  unsigned char const   *__s2___6 ;
  register int __result___13 ;
  int tmp___58 ;
  unsigned char const   *__s1___6 ;
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
  unsigned char const   *__s2___7 ;
  register int __result___15 ;
  int tmp___83 ;
  unsigned char const   *__s1___7 ;
  register int __result___16 ;
  int tmp___84 ;
  int tmp___85 ;
  int tmp___86 ;
  unsigned char const   *__s2___8 ;
  register int __result___17 ;
  int tmp___87 ;
  unsigned char const   *__s1___8 ;
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
  unsigned char const   *__s2___9 ;
  register int __result___19 ;
  int tmp___95 ;
  unsigned char const   *__s1___9 ;
  register int __result___20 ;
  int tmp___96 ;
  int tmp___97 ;
  int tmp___98 ;
  unsigned char const   *__s2___10 ;
  register int __result___21 ;
  int tmp___99 ;
  unsigned char const   *__s1___10 ;
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
  p = hctx->plugin_data;
  host = hctx->host;
  con = hctx->remote_conn;
  srv_sock = (server_socket *)con->srv_socket;
  fcgi_header(& beginRecord.header, (unsigned char)1, request_id,
              (int )sizeof(beginRecord.body), (unsigned char)0);
  beginRecord.body.roleB0 = (unsigned char )host->mode;
  beginRecord.body.roleB1 = (unsigned char)0;
  beginRecord.body.flags = (unsigned char)0;
  memset((void *)(beginRecord.body.reserved), 0,
         sizeof(beginRecord.body.reserved));
  b = chunkqueue_get_append_buffer(hctx->wb);
  buffer_copy_memory(b, (char const   *)(& beginRecord), sizeof(beginRecord));
  buffer_prepare_copy(p->fcgi_env, 1024U);
  fcgi_env_add(p->fcgi_env, "SERVER_SOFTWARE", sizeof("SERVER_SOFTWARE") - 1U,
               "lighttpd/1.4.17", sizeof("lighttpd/1.4.17") - 1U);
  if ((con->server_name)->used) {
    if ((con->server_name)->used) {
      tmp = (con->server_name)->used - 1U;
    } else {
      tmp = 0U;
    }
    fcgi_env_add(p->fcgi_env, "SERVER_NAME", sizeof("SERVER_NAME") - 1U,
                 (char const   *)(con->server_name)->ptr, tmp);
  } else {
    if ((int )srv_sock->addr.plain.sa_family == 10) {
      tmp___0 = (void const   *)(& srv_sock->addr.ipv6.sin6_addr);
    } else {
      tmp___0 = (void const   *)(& srv_sock->addr.ipv4.sin_addr);
    }
    s = inet_ntop((int )srv_sock->addr.plain.sa_family,
                  (void const   */* __restrict  */)tmp___0,
                  (char */* __restrict  */)(b2), sizeof(b2) - 1U);
    tmp___1 = strlen(s);
    fcgi_env_add(p->fcgi_env, "SERVER_NAME", sizeof("SERVER_NAME") - 1U, s,
                 tmp___1);
  }
  fcgi_env_add(p->fcgi_env, "GATEWAY_INTERFACE",
               sizeof("GATEWAY_INTERFACE") - 1U, "CGI/1.1",
               sizeof("CGI/1.1") - 1U);
  if (srv_sock->addr.plain.sa_family) {
    tmp___2 = (int )srv_sock->addr.ipv6.sin6_port;
  } else {
    tmp___2 = (int )srv_sock->addr.ipv4.sin_port;
  }
  __x = (unsigned short )tmp___2;
  __asm__  ("rorw $8, %w0": "=r" (__v): "0" (__x): "cc");
  LI_ltostr(buf, (long )__v);
  tmp___3 = strlen((char const   *)(buf));
  fcgi_env_add(p->fcgi_env, "SERVER_PORT", sizeof("SERVER_PORT") - 1U,
               (char const   *)(buf), tmp___3);
  our_addr_len = sizeof(our_addr);
  tmp___4 = getsockname(con->fd,
                        (struct sockaddr */* __restrict  */)(& our_addr.plain),
                        (socklen_t */* __restrict  */)(& our_addr_len));
  if (-1 == tmp___4) {
    s = inet_ntop_cache_get_ip(srv, & srv_sock->addr);
  } else {
    s = inet_ntop_cache_get_ip(srv, & our_addr);
  }
  tmp___5 = strlen(s);
  fcgi_env_add(p->fcgi_env, "SERVER_ADDR", sizeof("SERVER_ADDR") - 1U, s,
               tmp___5);
  if (con->dst_addr.plain.sa_family) {
    tmp___6 = (int )con->dst_addr.ipv6.sin6_port;
  } else {
    tmp___6 = (int )con->dst_addr.ipv4.sin_port;
  }
  __x___0 = (unsigned short )tmp___6;
  __asm__  ("rorw $8, %w0": "=r" (__v___0): "0" (__x___0): "cc");
  LI_ltostr(buf, (long )__v___0);
  tmp___7 = strlen((char const   *)(buf));
  fcgi_env_add(p->fcgi_env, "REMOTE_PORT", sizeof("REMOTE_PORT") - 1U,
               (char const   *)(buf), tmp___7);
  s = inet_ntop_cache_get_ip(srv, & con->dst_addr);
  tmp___8 = strlen(s);
  fcgi_env_add(p->fcgi_env, "REMOTE_ADDR", sizeof("REMOTE_ADDR") - 1U, s,
               tmp___8);
  tmp___65 = buffer_is_empty(con->authed_user);
  if (! tmp___65) {
    http_authorization = (char *)((void *)0);
    if ((con->authed_user)->used) {
      tmp___9 = (con->authed_user)->used - 1U;
    } else {
      tmp___9 = 0U;
    }
    fcgi_env_add(p->fcgi_env, "REMOTE_USER", sizeof("REMOTE_USER") - 1U,
                 (char const   *)(con->authed_user)->ptr, tmp___9);
    tmp___10 = array_get_element(con->request.headers, "Authorization");
    ds = (data_string *)tmp___10;
    if ((unsigned int )((void *)0) != (unsigned int )ds) {
      http_authorization = (ds->value)->ptr;
    }
    if (ds) {
      if (ds->value) {
        if ((ds->value)->used) {
          tmp___64 = __builtin_strchr(http_authorization, ' ');
          auth_realm = tmp___64;
          if ((unsigned int )((void *)0) != (unsigned int )auth_realm) {
            auth_type_len = auth_realm - http_authorization;
            if (auth_type_len == 5) {
              if (0) {
                if (0) {
                  __s1_len___2 = strlen((char const   *)http_authorization);
                  __s2_len___2 = strlen("Basic");
                  if (! ((unsigned int )((void const   *)(http_authorization + 1)) - (unsigned int )((void const   *)http_authorization) == 1U)) {
                    goto _L___6;
                  } else {
                    if (__s1_len___2 >= 4U) {
                      _L___6: 
                      if (! ((unsigned int )((void const   *)("Basic" + 1)) - (unsigned int )((void const   *)"Basic") == 1U)) {
                        tmp___60 = 1;
                      } else {
                        if (__s2_len___2 >= 4U) {
                          tmp___60 = 1;
                        } else {
                          tmp___60 = 0;
                        }
                      }
                    } else {
                      tmp___60 = 0;
                    }
                  }
                  if (tmp___60) {
                    tmp___56 = __builtin_strcmp((char const   *)http_authorization,
                                                "Basic");
                  } else {
                    tmp___59 = __builtin_strcmp((char const   *)http_authorization,
                                                "Basic");
                    tmp___56 = tmp___59;
                  }
                } else {
                  tmp___59 = __builtin_strcmp((char const   *)http_authorization,
                                              "Basic");
                  tmp___56 = tmp___59;
                }
                tmp___50 = tmp___56;
              } else {
                tmp___50 = strncmp((char const   *)http_authorization, "Basic",
                                   (unsigned int )auth_type_len);
              }
              if (0 == tmp___50) {
                fcgi_env_add(p->fcgi_env, "AUTH_TYPE", sizeof("AUTH_TYPE") - 1U,
                             "Basic", sizeof("Basic") - 1U);
              } else {
                goto _L___7;
              }
            } else {
              _L___7: 
              if (auth_type_len == 6) {
                if (0) {
                  if (0) {
                    __s1_len___0 = strlen((char const   *)http_authorization);
                    __s2_len___0 = strlen("Digest");
                    if (! ((unsigned int )((void const   *)(http_authorization + 1)) - (unsigned int )((void const   *)http_authorization) == 1U)) {
                      goto _L___2;
                    } else {
                      if (__s1_len___0 >= 4U) {
                        _L___2: 
                        if (! ((unsigned int )((void const   *)("Digest" + 1)) - (unsigned int )((void const   *)"Digest") == 1U)) {
                          tmp___34 = 1;
                        } else {
                          if (__s2_len___0 >= 4U) {
                            tmp___34 = 1;
                          } else {
                            tmp___34 = 0;
                          }
                        }
                      } else {
                        tmp___34 = 0;
                      }
                    }
                    if (tmp___34) {
                      tmp___30 = __builtin_strcmp((char const   *)http_authorization,
                                                  "Digest");
                    } else {
                      tmp___33 = __builtin_strcmp((char const   *)http_authorization,
                                                  "Digest");
                      tmp___30 = tmp___33;
                    }
                  } else {
                    tmp___33 = __builtin_strcmp((char const   *)http_authorization,
                                                "Digest");
                    tmp___30 = tmp___33;
                  }
                  tmp___24 = tmp___30;
                } else {
                  tmp___24 = strncmp((char const   *)http_authorization,
                                     "Digest", (unsigned int )auth_type_len);
                }
                if (0 == tmp___24) {
                  fcgi_env_add(p->fcgi_env, "AUTH_TYPE",
                               sizeof("AUTH_TYPE") - 1U, "Digest",
                               sizeof("Digest") - 1U);
                }
              }
            }
          }
        }
      }
    }
  }
  if (con->request.content_length > 0U) {
    if ((int )host->mode != 2) {
      LI_ltostr(buf, (long )con->request.content_length);
      tmp___66 = strlen((char const   *)(buf));
      fcgi_env_add(p->fcgi_env, "CONTENT_LENGTH", sizeof("CONTENT_LENGTH") - 1U,
                   (char const   *)(buf), tmp___66);
    }
  }
  if ((int )host->mode != 2) {
    if ((con->uri.path)->used) {
      tmp___67 = (con->uri.path)->used - 1U;
    } else {
      tmp___67 = 0U;
    }
    fcgi_env_add(p->fcgi_env, "SCRIPT_NAME", sizeof("SCRIPT_NAME") - 1U,
                 (char const   *)(con->uri.path)->ptr, tmp___67);
    tmp___71 = buffer_is_empty(con->request.pathinfo);
    if (tmp___71) {
      fcgi_env_add(p->fcgi_env, "PATH_INFO", sizeof("PATH_INFO") - 1U, "",
                   sizeof("") - 1U);
    } else {
      if ((con->request.pathinfo)->used) {
        tmp___68 = (con->request.pathinfo)->used - 1U;
      } else {
        tmp___68 = 0U;
      }
      fcgi_env_add(p->fcgi_env, "PATH_INFO", sizeof("PATH_INFO") - 1U,
                   (char const   *)(con->request.pathinfo)->ptr, tmp___68);
      tmp___69 = buffer_is_empty(host->docroot);
      if (tmp___69) {
        buffer_copy_string_buffer(p->path,
                                  (buffer const   *)con->physical.doc_root);
      } else {
        buffer_copy_string_buffer(p->path, (buffer const   *)host->docroot);
      }
      buffer_append_string_buffer(p->path,
                                  (buffer const   *)con->request.pathinfo);
      if ((p->path)->used) {
        tmp___70 = (p->path)->used - 1U;
      } else {
        tmp___70 = 0U;
      }
      fcgi_env_add(p->fcgi_env, "PATH_TRANSLATED",
                   sizeof("PATH_TRANSLATED") - 1U,
                   (char const   *)(p->path)->ptr, tmp___70);
    }
  }
  tmp___76 = buffer_is_empty(host->docroot);
  if (tmp___76) {
    buffer_copy_string_buffer(p->path, (buffer const   *)con->physical.path);
    if (host->break_scriptfilename_for_php) {
      buffer_append_string_buffer(p->path,
                                  (buffer const   *)con->request.pathinfo);
    }
    if ((p->path)->used) {
      tmp___74 = (p->path)->used - 1U;
    } else {
      tmp___74 = 0U;
    }
    fcgi_env_add(p->fcgi_env, "SCRIPT_FILENAME", sizeof("SCRIPT_FILENAME") - 1U,
                 (char const   *)(p->path)->ptr, tmp___74);
    if ((con->physical.doc_root)->used) {
      tmp___75 = (con->physical.doc_root)->used - 1U;
    } else {
      tmp___75 = 0U;
    }
    fcgi_env_add(p->fcgi_env, "DOCUMENT_ROOT", sizeof("DOCUMENT_ROOT") - 1U,
                 (char const   *)(con->physical.doc_root)->ptr, tmp___75);
  } else {
    buffer_copy_string_buffer(p->path, (buffer const   *)host->docroot);
    buffer_append_string_buffer(p->path, (buffer const   *)con->uri.path);
    if ((p->path)->used) {
      tmp___72 = (p->path)->used - 1U;
    } else {
      tmp___72 = 0U;
    }
    fcgi_env_add(p->fcgi_env, "SCRIPT_FILENAME", sizeof("SCRIPT_FILENAME") - 1U,
                 (char const   *)(p->path)->ptr, tmp___72);
    if ((host->docroot)->used) {
      tmp___73 = (host->docroot)->used - 1U;
    } else {
      tmp___73 = 0U;
    }
    fcgi_env_add(p->fcgi_env, "DOCUMENT_ROOT", sizeof("DOCUMENT_ROOT") - 1U,
                 (char const   *)(host->docroot)->ptr, tmp___73);
  }
  if ((host->strip_request_uri)->used > 1U) {
    if (47 != (int )*((host->strip_request_uri)->ptr + ((host->strip_request_uri)->used - 2U))) {
      buffer_append_string(host->strip_request_uri, "/");
    }
    if ((con->request.orig_uri)->used >= (host->strip_request_uri)->used) {
      if (0) {
        if (0) {
          __s1_len___4 = strlen((char const   *)(con->request.orig_uri)->ptr);
          __s2_len___4 = strlen((char const   *)(host->strip_request_uri)->ptr);
          if (! ((unsigned int )((void const   *)((con->request.orig_uri)->ptr + 1)) - (unsigned int )((void const   *)(con->request.orig_uri)->ptr) == 1U)) {
            goto _L___11;
          } else {
            if (__s1_len___4 >= 4U) {
              _L___11: 
              if (! ((unsigned int )((void const   *)((host->strip_request_uri)->ptr + 1)) - (unsigned int )((void const   *)(host->strip_request_uri)->ptr) == 1U)) {
                tmp___101 = 1;
              } else {
                if (__s2_len___4 >= 4U) {
                  tmp___101 = 1;
                } else {
                  tmp___101 = 0;
                }
              }
            } else {
              tmp___101 = 0;
            }
          }
          if (tmp___101) {
            tmp___97 = __builtin_strcmp((char const   *)(con->request.orig_uri)->ptr,
                                        (char const   *)(host->strip_request_uri)->ptr);
          } else {
            tmp___100 = __builtin_strcmp((char const   *)(con->request.orig_uri)->ptr,
                                         (char const   *)(host->strip_request_uri)->ptr);
            tmp___97 = tmp___100;
          }
        } else {
          tmp___100 = __builtin_strcmp((char const   *)(con->request.orig_uri)->ptr,
                                       (char const   *)(host->strip_request_uri)->ptr);
          tmp___97 = tmp___100;
        }
        tmp___91 = tmp___97;
      } else {
        tmp___91 = strncmp((char const   *)(con->request.orig_uri)->ptr,
                           (char const   *)(host->strip_request_uri)->ptr,
                           (host->strip_request_uri)->used - 1U);
      }
      if (0 == tmp___91) {
        fcgi_env_add(p->fcgi_env, "REQUEST_URI", sizeof("REQUEST_URI") - 1U,
                     (char const   *)((con->request.orig_uri)->ptr + ((host->strip_request_uri)->used - 2U)),
                     (con->request.orig_uri)->used - ((host->strip_request_uri)->used - 2U));
      } else {
        goto _L___12;
      }
    } else {
      _L___12: 
      if ((con->request.orig_uri)->used) {
        tmp___77 = (con->request.orig_uri)->used - 1U;
      } else {
        tmp___77 = 0U;
      }
      fcgi_env_add(p->fcgi_env, "REQUEST_URI", sizeof("REQUEST_URI") - 1U,
                   (char const   *)(con->request.orig_uri)->ptr, tmp___77);
    }
  } else {
    if ((con->request.orig_uri)->used) {
      tmp___104 = (con->request.orig_uri)->used - 1U;
    } else {
      tmp___104 = 0U;
    }
    fcgi_env_add(p->fcgi_env, "REQUEST_URI", sizeof("REQUEST_URI") - 1U,
                 (char const   *)(con->request.orig_uri)->ptr, tmp___104);
  }
  tmp___106 = buffer_is_equal(con->request.uri, con->request.orig_uri);
  if (! tmp___106) {
    if ((con->request.uri)->used) {
      tmp___105 = (con->request.uri)->used - 1U;
    } else {
      tmp___105 = 0U;
    }
    fcgi_env_add(p->fcgi_env, "REDIRECT_URI", sizeof("REDIRECT_URI") - 1U,
                 (char const   *)(con->request.uri)->ptr, tmp___105);
  }
  tmp___108 = buffer_is_empty(con->uri.query);
  if (tmp___108) {
    fcgi_env_add(p->fcgi_env, "QUERY_STRING", sizeof("QUERY_STRING") - 1U, "",
                 sizeof("") - 1U);
  } else {
    if ((con->uri.query)->used) {
      tmp___107 = (con->uri.query)->used - 1U;
    } else {
      tmp___107 = 0U;
    }
    fcgi_env_add(p->fcgi_env, "QUERY_STRING", sizeof("QUERY_STRING") - 1U,
                 (char const   *)(con->uri.query)->ptr, tmp___107);
  }
  s = get_http_method_name(con->request.http_method);
  tmp___109 = strlen(s);
  fcgi_env_add(p->fcgi_env, "REQUEST_METHOD", sizeof("REQUEST_METHOD") - 1U, s,
               tmp___109);
  fcgi_env_add(p->fcgi_env, "REDIRECT_STATUS", sizeof("REDIRECT_STATUS") - 1U,
               "200", sizeof("200") - 1U);
  s = get_http_version_name((int )con->request.http_version);
  tmp___110 = strlen(s);
  fcgi_env_add(p->fcgi_env, "SERVER_PROTOCOL", sizeof("SERVER_PROTOCOL") - 1U,
               s, tmp___110);
  fcgi_env_add_request_headers(srv, con, p);
  fcgi_header(& header, (unsigned char)4, request_id, (int )(p->fcgi_env)->used,
              (unsigned char)0);
  buffer_append_memory(b, (char const   *)(& header), sizeof(header));
  buffer_append_memory(b, (char const   *)(p->fcgi_env)->ptr,
                       (p->fcgi_env)->used);
  fcgi_header(& header, (unsigned char)4, request_id, 0, (unsigned char)0);
  buffer_append_memory(b, (char const   *)(& header), sizeof(header));
  (b->used) ++;
  (hctx->wb)->bytes_in += (long long )(b->used - 1U);
  if (con->request.content_length) {
    req_cq = con->request_content_queue;
    offset = 0LL;
    req_c = req_cq->first;
    while (offset != req_cq->bytes_in) {
      if (req_cq->bytes_in - offset > 65535LL) {
        tmp___111 = 65535LL;
      } else {
        tmp___111 = req_cq->bytes_in - offset;
      }
      weWant = tmp___111;
      written = 0LL;
      weHave = 0LL;
      b = chunkqueue_get_append_buffer(hctx->wb);
      fcgi_header(& header, (unsigned char)5, request_id, (int )weWant,
                  (unsigned char)0);
      buffer_copy_memory(b, (char const   *)(& header), sizeof(header));
      (hctx->wb)->bytes_in += (long long )sizeof(header);
      if (p->conf.debug > 10) {
        fprintf((FILE */* __restrict  */)stderr,
                (char const   */* __restrict  */)"%s.%d: tosend: %lld / %lld\n",
                "mod_fastcgi.c", 2067, offset, req_cq->bytes_in);
      }
      written = 0LL;
      while (written != weWant) {
        if (p->conf.debug > 10) {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s.%d: chunk: %lld / %lld\n",
                  "mod_fastcgi.c", 2072, written, weWant);
        }
        switch ((int )req_c->type) {
        case 2: 
        weHave = req_c->file.length - req_c->offset;
        if (weHave > weWant - written) {
          weHave = weWant - written;
        }
        if (p->conf.debug > 10) {
          fprintf((FILE */* __restrict  */)stderr,
                  (char const   */* __restrict  */)"%s.%d: sending %lld bytes from (%lld / %lld) %s\n",
                  "mod_fastcgi.c", 2083, weHave, req_c->offset,
                  req_c->file.length, (req_c->file.name)->ptr);
        }
        if (! (weHave != 0LL)) {
          __assert_fail("weHave != 0", "mod_fastcgi.c", 2090U, "fcgi_create_env");
        }
        chunkqueue_append_file(hctx->wb, req_c->file.name, req_c->offset, weHave);
        req_c->offset += weHave;
        req_cq->bytes_out += weHave;
        written += weHave;
        (hctx->wb)->bytes_in += weHave;
        if (req_c->offset == req_c->file.length) {
          if (p->conf.debug > 10) {
            fprintf((FILE */* __restrict  */)stderr,
                    (char const   */* __restrict  */)"%s.%d: next chunk\n",
                    "mod_fastcgi.c", 2116);
          }
          c = (hctx->wb)->last;
          if (! ((int )c->type == 2)) {
            __assert_fail("c->type == FILE_CHUNK", "mod_fastcgi.c", 2120U,
                          "fcgi_create_env");
          }
          if (! (req_c->file.is_temp == 1)) {
            __assert_fail("req_c->file.is_temp == 1", "mod_fastcgi.c", 2121U,
                          "fcgi_create_env");
          }
          c->file.is_temp = 1;
          req_c->file.is_temp = 0;
          chunkqueue_remove_finished_chunks(req_cq);
          req_c = req_cq->first;
        }
        break;
        case 1: 
        weHave = (long long )((req_c->mem)->used - 1U) - req_c->offset;
        if (weHave > weWant - written) {
          weHave = weWant - written;
        }
        buffer_append_memory(b,
                             (char const   *)((req_c->mem)->ptr + req_c->offset),
                             (unsigned int )weHave);
        req_c->offset += weHave;
        req_cq->bytes_out += weHave;
        written += weHave;
        (hctx->wb)->bytes_in += weHave;
        if (req_c->offset == (long long )((req_c->mem)->used - 1U)) {
          chunkqueue_remove_finished_chunks(req_cq);
          req_c = req_cq->first;
        }
        break;
        default: ;
        break;
        }
      }
      (b->used) ++;
      offset += weWant;
    }
  }
  b = chunkqueue_get_append_buffer(hctx->wb);
  fcgi_header(& header, (unsigned char)5, request_id, 0, (unsigned char)0);
  buffer_copy_memory(b, (char const   *)(& header), sizeof(header));
  (b->used) ++;
  (hctx->wb)->bytes_in += (long long )sizeof(header);
  return (0);
}
}

static int fcgi_response_parse(server *srv , connection *con , plugin_data *p ,
                               buffer *in ) 
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
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
  host = hctx->host;
  buffer_copy_string_buffer(p->parse_response, (buffer const   *)in);
  s = (p->parse_response)->ptr;
  while (1) {
    tmp___13 = __builtin_strchr(s, '\n');
    ns = tmp___13;
    if (! ((unsigned int )((void *)0) != (unsigned int )ns)) {
      break;
    }
    if ((unsigned int )ns > (unsigned int )(p->parse_response)->ptr) {
      if ((int )*(ns - 1) == 13) {
        *(ns - 1) = (char )'\000';
      }
    }
    *(ns + 0) = (char )'\000';
    key = s;
    tmp___0 = __builtin_strchr(s, ':');
    value = tmp___0;
    if ((unsigned int )((void *)0) == (unsigned int )value) {
      goto __Cont;
    }
    key_len = value - key;
    value ++;
    while (1) {
      if (! ((int )*value == 32)) {
        if (! ((int )*value == 9)) {
          break;
        }
      }
      value ++;
    }
    if ((int )host->mode != 2) {
      goto _L;
    } else {
      if (! (con->http_status == 0)) {
        if (! (con->http_status == 200)) {
          _L: 
          tmp___2 = strncasecmp((char const   *)key, "Status",
                                (unsigned int )key_len);
          if (0 != tmp___2) {
            tmp___1 = array_get_unused_element(con->response.headers,
                                               (enum __anonenum_data_type_t_49 )1);
            ds = (data_string *)tmp___1;
            if ((unsigned int )((void *)0) == (unsigned int )ds) {
              ds = data_response_init();
            }
            buffer_copy_string_len(ds->key, (char const   *)key,
                                   (unsigned int )key_len);
            buffer_copy_string(ds->value, (char const   *)value);
            array_insert_unique(con->response.headers, (data_unset *)ds);
          }
        }
      }
    }
    switch (key_len) {
    case 4: 
    tmp___3 = strncasecmp((char const   *)key, "Date", (unsigned int )key_len);
    if (0 == tmp___3) {
      con->parsed_response |= (unsigned int )(1 << 3);
    }
    break;
    case 6: 
    tmp___5 = strncasecmp((char const   *)key, "Status", (unsigned int )key_len);
    if (0 == tmp___5) {
      tmp___4 = strtol((char const   */* __restrict  */)((char const   *)value),
                       (char **/* __restrict  */)((char **)((void *)0)), 10);
      con->http_status = (int )tmp___4;
      con->parsed_response |= 1U;
    }
    break;
    case 8: 
    tmp___6 = strncasecmp((char const   *)key, "Location",
                          (unsigned int )key_len);
    if (0 == tmp___6) {
      con->parsed_response |= (unsigned int )(1 << 4);
    }
    break;
    case 10: 
    tmp___9 = strncasecmp((char const   *)key, "Connection",
                          (unsigned int )key_len);
    if (0 == tmp___9) {
      tmp___8 = strcasecmp((char const   *)value, "Keep-Alive");
      if (0 == tmp___8) {
        con->response.keep_alive = 1;
      } else {
        con->response.keep_alive = 0;
      }
      con->parsed_response |= (unsigned int )(1 << 1);
    }
    break;
    case 14: 
    tmp___11 = strncasecmp((char const   *)key, "Content-Length",
                           (unsigned int )key_len);
    if (0 == tmp___11) {
      tmp___10 = strtol((char const   */* __restrict  */)((char const   *)value),
                        (char **/* __restrict  */)((char **)((void *)0)), 10);
      con->response.content_length = (long long )tmp___10;
      con->parsed_response |= (unsigned int )(1 << 2);
      if (con->response.content_length < 0LL) {
        con->response.content_length = 0LL;
      }
    }
    break;
    default: ;
    break;
    }
    __Cont: 
    s = ns + 1;
  }
  if (con->parsed_response & (unsigned int )(1 << 4)) {
    if (! (con->parsed_response & 1U)) {
      con->http_status = 302;
    }
  }
  return (0);
}
}

static int fastcgi_get_packet(server *srv , handler_ctx *hctx ,
                              fastcgi_response_packet *packet ) 
{ chunk *c ;
  size_t offset ;
  size_t toread ;
  FCGI_Header *header ;
  size_t weWant ;
  size_t weHave ;

  {
  offset = 0U;
  toread = 0U;
  if (! (hctx->rb)->first) {
    return (-1);
  }
  packet->b = buffer_init();
  packet->len = 0U;
  packet->type = 0;
  packet->padding = 0;
  packet->request_id = 0U;
  c = (hctx->rb)->first;
  while (c) {
    if ((packet->b)->used == 0U) {
      buffer_copy_string_len(packet->b,
                             (char const   *)((c->mem)->ptr + c->offset),
                             (unsigned int )(((long long )(c->mem)->used - c->offset) - 1LL));
    } else {
      buffer_append_string_len(packet->b,
                               (char const   *)((c->mem)->ptr + c->offset),
                               (unsigned int )(((long long )(c->mem)->used - c->offset) - 1LL));
    }
    if ((packet->b)->used >= sizeof(*header) + 1U) {
      break;
    }
    c = c->next;
  }
  if ((packet->b)->used == 0U) {
    buffer_free(packet->b);
    log_error_write(srv, "mod_fastcgi.c", 2325U, "s",
                    "FastCGI: header too small");
    return (-1);
  } else {
    if ((packet->b)->used - 1U < sizeof(FCGI_Header )) {
      buffer_free(packet->b);
      log_error_write(srv, "mod_fastcgi.c", 2325U, "s",
                      "FastCGI: header too small");
      return (-1);
    }
  }
  header = (FCGI_Header *)(packet->b)->ptr;
  packet->len = (unsigned int )(((int )header->contentLengthB0 | ((int )header->contentLengthB1 << 8)) + (int )header->paddingLength);
  packet->request_id = (unsigned int )((int )header->requestIdB0 | ((int )header->requestIdB1 << 8));
  packet->type = (int )header->type;
  packet->padding = (int )header->paddingLength;
  offset = sizeof(*header);
  buffer_copy_string(packet->b, "");
  if (packet->len) {
    while (1) {
      if (c) {
        if (! ((packet->b)->used < packet->len + 1U)) {
          break;
        }
      } else {
        break;
      }
      weWant = packet->len - ((packet->b)->used - 1U);
      weHave = (unsigned int )((((long long )(c->mem)->used - c->offset) - (long long )offset) - 1LL);
      if (weHave > weWant) {
        weHave = weWant;
      }
      buffer_append_string_len(packet->b,
                               (char const   *)(((c->mem)->ptr + c->offset) + offset),
                               weHave);
      offset = 0U;
      c = c->next;
    }
    if ((packet->b)->used < packet->len + 1U) {
      buffer_free(packet->b);
      return (-1);
    }
    (packet->b)->used -= (unsigned int )packet->padding;
    *((packet->b)->ptr + ((packet->b)->used - 1U)) = (char )'\000';
  }
  toread = packet->len + sizeof(FCGI_Header );
  c = (hctx->rb)->first;
  while (1) {
    if (c) {
      if (! toread) {
        break;
      }
    } else {
      break;
    }
    if (((long long )(c->mem)->used - c->offset) - 1LL <= (long long )toread) {
      toread = (unsigned int )((long long )toread - (((long long )(c->mem)->used - c->offset) - 1LL));
      c->offset = (long long )((c->mem)->used - 1U);
    } else {
      c->offset += (long long )toread;
      toread = 0U;
    }
    c = c->next;
  }
  chunkqueue_remove_finished_chunks(hctx->rb);
  return (0);
}
}

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
  fin = 0;
  p = hctx->plugin_data;
  con = hctx->remote_conn;
  fcgi_fd = hctx->fd;
  host = hctx->host;
  proc = hctx->proc;
  tmp___0 = ioctl(hctx->fd, 21531UL, & toread);
  if (tmp___0) {
    tmp = __errno_location();
    if (*tmp == 11) {
      return (0);
    }
    log_error_write(srv, "mod_fastcgi.c", 2402U, "sd",
                    "unexpected end-of-file (perhaps the fastcgi process died):",
                    fcgi_fd);
    return (-1);
  }
  if (toread > 0) {
    cq_first = (hctx->rb)->first;
    cq_last = (hctx->rb)->last;
    b = chunkqueue_get_append_buffer(hctx->rb);
    buffer_prepare_copy(b, (unsigned int )(toread + 1));
    r = read(hctx->fd, (void *)b->ptr, (unsigned int )toread);
    if (-1 == r) {
      tmp___1 = __errno_location();
      if (*tmp___1 == 11) {
        buffer_free(((hctx->rb)->last)->mem);
        free((void *)(hctx->rb)->last);
        (hctx->rb)->first = cq_first;
        (hctx->rb)->last = cq_last;
        return (0);
      }
      tmp___2 = __errno_location();
      tmp___3 = strerror(*tmp___2);
      log_error_write(srv, "mod_fastcgi.c", 2429U, "sds",
                      "unexpected end-of-file (perhaps the fastcgi process died):",
                      fcgi_fd, tmp___3);
      return (-1);
    }
    if (! r) {
      __assert_fail("r", "mod_fastcgi.c", 2436U, "fcgi_demux_response");
    }
    b->used = (unsigned int )(r + 1);
    *(b->ptr + (b->used - 1U)) = (char )'\000';
  } else {
    log_error_write(srv, "mod_fastcgi.c", 2441U, "ssdsb",
                    "unexpected end-of-file (perhaps the fastcgi process died):",
                    "pid:", proc->pid, "socket:", proc->connection_name);
    return (-1);
  }
  while (fin == 0) {
    tmp___4 = fastcgi_get_packet(srv, hctx, & packet);
    if (0 != tmp___4) {
      break;
    }
    switch (packet.type) {
    case 6: 
    if (packet.len == 0U) {
      break;
    }
    if (0 == con->file_started) {
      if ((hctx->response_header)->used == 0U) {
        buffer_copy_string_buffer(hctx->response_header,
                                  (buffer const   *)packet.b);
      } else {
        buffer_append_string_buffer(hctx->response_header,
                                    (buffer const   *)packet.b);
      }
      c = buffer_search_string_len(hctx->response_header, "\r\n\r\n",
                                   sizeof("\r\n\r\n") - 1U);
      if ((unsigned int )((void *)0) != (unsigned int )c) {
        blen = ((hctx->response_header)->used - (unsigned int )(c - (hctx->response_header)->ptr)) - 4U;
        (hctx->response_header)->used = (unsigned int )((c - (hctx->response_header)->ptr) + 3);
        c += 4;
      } else {
        c = buffer_search_string_len(hctx->response_header, "\n\n",
                                     sizeof("\n\n") - 1U);
        if ((unsigned int )((void *)0) != (unsigned int )c) {
          blen = ((hctx->response_header)->used - (unsigned int )(c - (hctx->response_header)->ptr)) - 2U;
          (hctx->response_header)->used = (unsigned int )((c - (hctx->response_header)->ptr) + 2);
          c += 2;
        } else {
          break;
        }
      }
      fcgi_response_parse(srv, con, p, hctx->response_header);
      con->file_started = 1;
      if ((int )host->mode == 2) {
        if (con->http_status == 0) {
          hctx->send_content_body = 0;
        } else {
          if (con->http_status == 200) {
            hctx->send_content_body = 0;
          }
        }
      }
      if (host->allow_xsendfile) {
        tmp___6 = array_get_element(con->response.headers,
                                    "X-LIGHTTPD-send-file");
        ds = (data_string *)tmp___6;
        if ((unsigned int )((void *)0) != (unsigned int )ds) {
          tmp___5 = stat_cache_get_entry(srv, con, ds->value, & sce);
          if (5 != (int )tmp___5) {
            http_chunk_append_file(srv, con, ds->value, 0LL, sce->st.st_size);
            hctx->send_content_body = 0;
            joblist_append(srv, con);
          }
        }
      }
      if (hctx->send_content_body) {
        if (blen > 1U) {
          if ((int )con->request.http_version == 1) {
            if (! (con->parsed_response & (unsigned int )(1 << 2))) {
              con->response.transfer_encoding = (enum __anonenum_transfer_encoding_96 )1;
            }
          }
          http_chunk_append_mem(srv, con, (char const   *)c, blen);
          joblist_append(srv, con);
        }
      }
    } else {
      if (hctx->send_content_body) {
        if ((packet.b)->used > 1U) {
          if ((int )con->request.http_version == 1) {
            if (! (con->parsed_response & (unsigned int )(1 << 2))) {
              con->response.transfer_encoding = (enum __anonenum_transfer_encoding_96 )1;
            }
          }
          http_chunk_append_mem(srv, con, (char const   *)(packet.b)->ptr,
                                (packet.b)->used);
          joblist_append(srv, con);
        }
      }
    }
    break;
    case 7: 
    if (packet.len == 0U) {
      break;
    }
    log_error_write(srv, "mod_fastcgi.c", 2549U, "sb", "FastCGI-stderr:",
                    packet.b);
    break;
    case 3: 
    con->file_finished = 1;
    if ((int )host->mode != 2) {
      http_chunk_append_mem(srv, con, (char const   *)((void *)0), 0U);
      joblist_append(srv, con);
    } else {
      if (! (con->http_status == 0)) {
        if (! (con->http_status == 200)) {
          http_chunk_append_mem(srv, con, (char const   *)((void *)0), 0U);
          joblist_append(srv, con);
        }
      }
    }
    fin = 1;
    break;
    default: 
    log_error_write(srv, "mod_fastcgi.c", 2567U, "sd",
                    "FastCGI: header.type not handled: ", packet.type);
    break;
    }
    buffer_free(packet.b);
  }
  return (fin);
}
}

static int fcgi_restart_dead_procs(server *srv , plugin_data *p ,
                                   fcgi_extension_host *host ) 
{ fcgi_proc *proc ;
  int status ;
  __pid_t tmp ;
  union __anonunion_156 __constr_expr_0 ;
  union __anonunion_157 __constr_expr_1 ;
  union __anonunion_158 __constr_expr_2 ;
  int tmp___0 ;

  {
  proc = host->first;
  while (proc) {
    if (p->conf.debug > 2) {
      log_error_write(srv, "mod_fastcgi.c", 2584U, "sbdddd", "proc:",
                      proc->connection_name, proc->state, proc->is_local,
                      proc->load, proc->pid);
    }
    switch ((int )proc->state) {
    case 5: 
    case 0: 
    __assert_fail("0", "mod_fastcgi.c", 2601U, "fcgi_restart_dead_procs");
    break;
    case 1: 
    break;
    case 2: 
    if (srv->cur_ts <= proc->disabled_until) {
      break;
    }
    proc->state = (enum __anonenum_state_139 )1;
    (host->active_procs) ++;
    log_error_write(srv, "mod_fastcgi.c", 2612U, "sbdb",
                    "fcgi-server re-enabled:", host->host, host->port,
                    host->unixsocket);
    break;
    case 3: 
    if (! proc->is_local) {
      break;
    }
    tmp = waitpid(proc->pid, & status, 1);
    switch (tmp) {
    case 0: 
    break;
    case -1: 
    break;
    default: 
    __constr_expr_2.__in = status;
    if (! ((__constr_expr_2.__i & 127) == 0)) {
      __constr_expr_1.__in = status;
      if ((int )((signed char )((__constr_expr_1.__i & 127) + 1)) >> 1 > 0) {
        __constr_expr_0.__in = status;
        log_error_write(srv, "mod_fastcgi.c", 2637U, "sd", "child signaled:",
                        __constr_expr_0.__i & 127);
      } else {
        log_error_write(srv, "mod_fastcgi.c", 2641U, "sd",
                        "child died somehow:", status);
      }
    }
    proc->state = (enum __anonenum_state_139 )4;
    break;
    }
    if ((int )proc->state != 4) {
      break;
    }
    case 4: 
    if (proc->is_local) {
      if (proc->load != 0U) {
        break;
      }
      if (p->conf.debug) {
        log_error_write(srv, "mod_fastcgi.c", 2665U, "ssbsdsd",
                        "--- fastcgi spawning", "\n\tsocket",
                        proc->connection_name, "\n\tcurrent:", 1, "/",
                        host->min_procs);
      }
      tmp___0 = fcgi_spawn_connection(srv, p, host, proc);
      if (tmp___0) {
        log_error_write(srv, "mod_fastcgi.c", 2672U, "s",
                        "ERROR: spawning fcgi failed.");
        return (5);
      }
    } else {
      if (srv->cur_ts <= proc->disabled_until) {
        break;
      }
      proc->state = (enum __anonenum_state_139 )1;
      (host->active_procs) ++;
      log_error_write(srv, "mod_fastcgi.c", 2682U, "sb",
                      "fcgi-server re-enabled:", proc->connection_name);
    }
    break;
    }
    proc = proc->next;
  }
  return (0);
}
}

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
  p = hctx->plugin_data;
  host = hctx->host;
  con = hctx->remote_conn;
  if (! host) {
    log_error_write(srv, "mod_fastcgi.c", 2704U, "sxddd", "write-req: error",
                    host, (host->host)->used, host->port,
                    (host->unixsocket)->used);
    (hctx->proc)->disabled_until = srv->cur_ts + 10L;
    (hctx->proc)->state = (enum __anonenum_state_139 )4;
    return ((enum __anonenum_handler_t_43 )5);
  } else {
    if (! (host->host)->used) {
      goto _L;
    } else {
      if (! host->port) {
        _L: 
        if (! (host->unixsocket)->used) {
          log_error_write(srv, "mod_fastcgi.c", 2704U, "sxddd",
                          "write-req: error", host, (host->host)->used,
                          host->port, (host->unixsocket)->used);
          (hctx->proc)->disabled_until = srv->cur_ts + 10L;
          (hctx->proc)->state = (enum __anonenum_state_139 )4;
          return ((enum __anonenum_handler_t_43 )5);
        }
      }
    }
  }
  if ((int )hctx->state == 2) {
    socket_error_len = sizeof(socket_error);
    tmp___1 = getsockopt(hctx->fd, 1, 4,
                         (void */* __restrict  */)((void *)(& socket_error)),
                         (socklen_t */* __restrict  */)(& socket_error_len));
    if (0 != tmp___1) {
      tmp = __errno_location();
      tmp___0 = strerror(*tmp);
      log_error_write(srv, "mod_fastcgi.c", 2724U, "ss", "getsockopt failed:",
                      tmp___0);
      (hctx->proc)->disabled_until = srv->cur_ts + 10L;
      (hctx->proc)->state = (enum __anonenum_state_139 )4;
      return ((enum __anonenum_handler_t_43 )5);
    }
    if (socket_error != 0) {
      if (! (hctx->proc)->is_local) {
        tmp___2 = strerror(socket_error);
        log_error_write(srv, "mod_fastcgi.c", 2736U, "sssb",
                        "establishing connection failed:", tmp___2, "socket:",
                        (hctx->proc)->connection_name);
      } else {
        if (p->conf.debug) {
          tmp___2 = strerror(socket_error);
          log_error_write(srv, "mod_fastcgi.c", 2736U, "sssb",
                          "establishing connection failed:", tmp___2, "socket:",
                          (hctx->proc)->connection_name);
        }
      }
      (hctx->proc)->disabled_until = srv->cur_ts + 5L;
      if ((hctx->proc)->is_local) {
        (hctx->proc)->state = (enum __anonenum_state_139 )3;
      } else {
        (hctx->proc)->state = (enum __anonenum_state_139 )4;
      }
      (hctx->proc)->state = (enum __anonenum_state_139 )4;
      fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
      buffer_append_string(p->statuskey, ".died");
      if ((p->statuskey)->used) {
        tmp___3 = (p->statuskey)->used - 1U;
      } else {
        tmp___3 = 0U;
      }
      status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___3);
      return ((enum __anonenum_handler_t_43 )5);
    }
    hctx->state = (enum __anonenum_fcgi_connection_state_t_147 )3;
  }
  switch ((int )hctx->state) {
  case 2: 
  break;
  case 1: 
  hctx->proc = (fcgi_proc *)((void *)0);
  proc = (hctx->host)->first;
  while (1) {
    if (proc) {
      if (! ((int )proc->state != 1)) {
        break;
      }
    } else {
      break;
    }
    proc = proc->next;
  }
  if ((unsigned int )proc == (unsigned int )((void *)0)) {
    hctx->fde_ndx = -1;
    return ((enum __anonenum_handler_t_43 )5);
  }
  hctx->proc = proc;
  proc = proc->next;
  while (proc) {
    if ((int )proc->state != 1) {
      goto __Cont;
    }
    if (proc->load < (hctx->proc)->load) {
      hctx->proc = proc;
    }
    __Cont: 
    proc = proc->next;
  }
  if ((host->unixsocket)->used) {
    ret = 1;
  } else {
    ret = 2;
  }
  hctx->fd = socket(ret, 1, 0);
  if (-1 == hctx->fd) {
    tmp___4 = __errno_location();
    if (*tmp___4 == 24) {
      log_error_write(srv, "mod_fastcgi.c", 2795U, "sd",
                      "wait for fd at connection:", con->fd);
      return ((enum __anonenum_handler_t_43 )6);
    } else {
      tmp___5 = __errno_location();
      if (*tmp___5 == 4) {
        log_error_write(srv, "mod_fastcgi.c", 2795U, "sd",
                        "wait for fd at connection:", con->fd);
        return ((enum __anonenum_handler_t_43 )6);
      }
    }
    tmp___6 = __errno_location();
    tmp___7 = strerror(*tmp___6);
    log_error_write(srv, "mod_fastcgi.c", 2801U, "ssdd", "socket failed:",
                    tmp___7, srv->cur_fds, srv->max_fds);
    return ((enum __anonenum_handler_t_43 )5);
  }
  hctx->fde_ndx = -1;
  (srv->cur_fds) ++;
  fdevent_register(srv->ev, hctx->fd, & fcgi_handle_fdevent, (void *)hctx);
  tmp___10 = fdevent_fcntl_set(srv->ev, hctx->fd);
  if (-1 == tmp___10) {
    tmp___8 = __errno_location();
    tmp___9 = strerror(*tmp___8);
    log_error_write(srv, "mod_fastcgi.c", 2812U, "ss", "fcntl failed:", tmp___9);
    return ((enum __anonenum_handler_t_43 )5);
  }
  if ((hctx->proc)->is_local) {
    hctx->pid = (hctx->proc)->pid;
  }
  tmp___11 = fcgi_establish_connection(srv, hctx);
  switch ((int )tmp___11) {
  case 2: 
  fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
  fcgi_set_state(srv, hctx, (enum __anonenum_fcgi_connection_state_t_147 )2);
  return ((enum __anonenum_handler_t_43 )4);
  case 3: 
  log_error_write(srv, "mod_fastcgi.c", 2834U, "ssdsd",
                  "backend is overloaded; we\'ll disable it for 2 seconds and send the request to another backend instead:",
                  "reconnects:", hctx->reconnects, "load:", host->load);
  (hctx->proc)->disabled_until = srv->cur_ts + 2L;
  (hctx->proc)->state = (enum __anonenum_state_139 )2;
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
  buffer_append_string(p->statuskey, ".overloaded");
  if ((p->statuskey)->used) {
    tmp___12 = (p->statuskey)->used - 1U;
  } else {
    tmp___12 = 0U;
  }
  status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___12);
  return ((enum __anonenum_handler_t_43 )5);
  case 4: 
  (hctx->proc)->disabled_until = srv->cur_ts + 5L;
  if ((hctx->proc)->is_local) {
    (hctx->proc)->state = (enum __anonenum_state_139 )3;
  } else {
    (hctx->proc)->state = (enum __anonenum_state_139 )4;
  }
  log_error_write(srv, "mod_fastcgi.c", 2864U, "ssdsd",
                  "backend died; we\'ll disable it for 5 seconds and send the request to another backend instead:",
                  "reconnects:", hctx->reconnects, "load:", host->load);
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
  buffer_append_string(p->statuskey, ".died");
  if ((p->statuskey)->used) {
    tmp___13 = (p->statuskey)->used - 1U;
  } else {
    tmp___13 = 0U;
  }
  status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___13);
  return ((enum __anonenum_handler_t_43 )5);
  case 1: 
  fcgi_set_state(srv, hctx, (enum __anonenum_fcgi_connection_state_t_147 )3);
  break;
  case 0: 
  break;
  }
  case 3: 
  ((hctx->proc)->load) ++;
  (hctx->proc)->last_used = srv->cur_ts;
  hctx->got_proc = 1;
  status_counter_inc(srv, "fastcgi.requests", sizeof("fastcgi.requests") - 1U);
  status_counter_inc(srv, "fastcgi.active-requests",
                     sizeof("fastcgi.active-requests") - 1U);
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
  buffer_append_string(p->statuskey, ".connected");
  if ((p->statuskey)->used) {
    tmp___14 = (p->statuskey)->used - 1U;
  } else {
    tmp___14 = 0U;
  }
  status_counter_inc(srv, (char const   *)(p->statuskey)->ptr, tmp___14);
  fastcgi_status_copy_procname(p->statuskey, hctx->host, hctx->proc);
  buffer_append_string(p->statuskey, ".load");
  if ((p->statuskey)->used) {
    tmp___15 = (p->statuskey)->used - 1U;
  } else {
    tmp___15 = 0U;
  }
  status_counter_set(srv, (char const   *)(p->statuskey)->ptr, tmp___15,
                     (int )(hctx->proc)->load);
  fastcgi_status_copy_procname(p->statuskey, hctx->host,
                               (fcgi_proc *)((void *)0));
  buffer_append_string(p->statuskey, ".load");
  if ((p->statuskey)->used) {
    tmp___16 = (p->statuskey)->used - 1U;
  } else {
    tmp___16 = 0U;
  }
  status_counter_set(srv, (char const   *)(p->statuskey)->ptr, tmp___16,
                     (hctx->host)->load);
  if (p->conf.debug) {
    log_error_write(srv, "mod_fastcgi.c", 2913U, "ssdsbsd", "got proc:", "pid:",
                    (hctx->proc)->pid, "socket:", (hctx->proc)->connection_name,
                    "load:", (hctx->proc)->load);
  }
  if (hctx->request_id == 0U) {
    hctx->request_id = fcgi_requestid_new(srv, p);
  } else {
    log_error_write(srv, "mod_fastcgi.c", 2924U, "sd",
                    "fcgi-request is already in use:", hctx->request_id);
  }
  fcgi_create_env(srv, hctx, hctx->request_id);
  fcgi_set_state(srv, hctx, (enum __anonenum_fcgi_connection_state_t_147 )4);
  case 4: 
  ret = (*(srv->network_backend_write))(srv, con, hctx->fd, hctx->wb);
  chunkqueue_remove_finished_chunks(hctx->wb);
  if (ret < 0) {
    tmp___17 = __errno_location();
    switch (*tmp___17) {
    case 107: 
    if ((hctx->wb)->bytes_out == 0LL) {
      if (hctx->reconnects < 5) {
        usleep(10000U);
        fcgi_reconnect(srv, hctx);
        return ((enum __anonenum_handler_t_43 )6);
      }
    }
    log_error_write(srv, "mod_fastcgi.c", 2965U, "ssosd",
                    "[REPORT ME] connection was dropped after accept(). reconnect() denied:",
                    "write-offset:", (hctx->wb)->bytes_out,
                    "reconnect attempts:", hctx->reconnects);
    return ((enum __anonenum_handler_t_43 )5);
    case 11: 
    case 4: 
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    return ((enum __anonenum_handler_t_43 )4);
    default: 
    tmp___18 = __errno_location();
    tmp___19 = __errno_location();
    tmp___20 = strerror(*tmp___19);
    log_error_write(srv, "mod_fastcgi.c", 2977U, "ssd", "write failed:",
                    tmp___20, *tmp___18);
    return ((enum __anonenum_handler_t_43 )5);
    }
  }
  if ((hctx->wb)->bytes_out == (hctx->wb)->bytes_in) {
    fdevent_event_del(srv->ev, & hctx->fde_ndx, hctx->fd);
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1);
    fcgi_set_state(srv, hctx, (enum __anonenum_fcgi_connection_state_t_147 )5);
  } else {
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    return ((enum __anonenum_handler_t_43 )4);
  }
  break;
  case 5: 
  break;
  default: 
  log_error_write(srv, "mod_fastcgi.c", 3000U, "s", "(debug) unknown state");
  return ((enum __anonenum_handler_t_43 )5);
  }
  return ((enum __anonenum_handler_t_43 )4);
}
}

static handler_t mod_fastcgi_handle_subrequest(server *srv , connection *con ,
                                               void *p_d ) 
{ plugin_data *p ;
  handler_ctx *hctx ;
  fcgi_proc *proc ;
  fcgi_extension_host *host ;
  size_t k ;
  int ndx ;
  int used ;
  handler_t tmp ;

  {
  p = (plugin_data *)p_d;
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
  if ((unsigned int )((void *)0) == (unsigned int )hctx) {
    return ((enum __anonenum_handler_t_43 )1);
  }
  if ((unsigned int )con->mode != p->id) {
    return ((enum __anonenum_handler_t_43 )1);
  }
  if ((unsigned int )hctx->host == (unsigned int )((void *)0)) {
    used = -1;
    ndx = (hctx->ext)->last_used_ndx + 1;
    if ((unsigned int )ndx >= (hctx->ext)->used) {
      ndx = 0;
    } else {
      if (ndx < 0) {
        ndx = 0;
      }
    }
    host = *((hctx->ext)->hosts + ndx);
    if (host->load > 0) {
      k = 0U;
      ndx = -1;
      while (k < (hctx->ext)->used) {
        host = *((hctx->ext)->hosts + k);
        if (host->active_procs == 0U) {
          goto __Cont;
        }
        if (used == -1) {
          used = host->load;
          ndx = (int )k;
        } else {
          if (host->load < used) {
            used = host->load;
            ndx = (int )k;
          }
        }
        __Cont: 
        k ++;
      }
    }
    if (ndx == -1) {
      fcgi_connection_close(srv, hctx);
      con->http_status = 500;
      con->mode = (enum __anonenum_connection_type_90 )0;
      return ((enum __anonenum_handler_t_43 )2);
    }
    (hctx->ext)->last_used_ndx = ndx;
    host = *((hctx->ext)->hosts + ndx);
    hctx->host = host;
    ((hctx->host)->load) ++;
    hctx->proc = (fcgi_proc *)((void *)0);
  } else {
    host = hctx->host;
  }
  tmp = fcgi_write_request(srv, hctx);
  switch ((int )tmp) {
  case 5: 
  proc = hctx->proc;
  host = hctx->host;
  if ((int )hctx->state == 1) {
    goto _L;
  } else {
    if ((int )hctx->state == 2) {
      _L: 
      if (proc) {
        (host->active_procs) --;
      }
      fcgi_restart_dead_procs(srv, p, host);
      if (hctx->reconnects < 5) {
        fcgi_reconnect(srv, hctx);
        joblist_append(srv, con);
        return ((enum __anonenum_handler_t_43 )6);
      } else {
        fcgi_connection_close(srv, hctx);
        buffer_reset(con->physical.path);
        con->mode = (enum __anonenum_connection_type_90 )0;
        con->http_status = 500;
        joblist_append(srv, con);
        return ((enum __anonenum_handler_t_43 )2);
      }
    } else {
      fcgi_connection_close(srv, hctx);
      buffer_reset(con->physical.path);
      con->mode = (enum __anonenum_connection_type_90 )0;
      con->http_status = 503;
      joblist_append(srv, con);
      return ((enum __anonenum_handler_t_43 )2);
    }
  }
  case 4: 
  if (con->file_started == 1) {
    return ((enum __anonenum_handler_t_43 )2);
  } else {
    return ((enum __anonenum_handler_t_43 )4);
  }
  case 6: 
  return ((enum __anonenum_handler_t_43 )6);
  default: 
  log_error_write(srv, "mod_fastcgi.c", 3128U, "s",
                  "subrequest write-req default");
  return ((enum __anonenum_handler_t_43 )5);
  }
}
}

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
  srv = (server *)s;
  hctx = (handler_ctx *)ctx;
  con = hctx->remote_conn;
  p = hctx->plugin_data;
  proc = hctx->proc;
  host = hctx->host;
  if (revents & 1) {
    if ((int )hctx->state == 5) {
      tmp = fcgi_demux_response(srv, hctx);
      switch (tmp) {
      case 0: 
      break;
      case 1: 
      if ((int )host->mode == 2) {
        if (con->http_status == 200) {
          goto _L;
        } else {
          if (con->http_status == 0) {
            _L: 
            buffer_copy_string_buffer(con->physical.doc_root,
                                      (buffer const   *)host->docroot);
            buffer_copy_string_buffer(con->physical.path,
                                      (buffer const   *)host->docroot);
            buffer_append_string_buffer(con->physical.path,
                                        (buffer const   *)con->uri.path);
            fcgi_connection_close(srv, hctx);
            con->mode = (enum __anonenum_connection_type_90 )0;
            con->file_started = 1;
          } else {
            fcgi_connection_close(srv, hctx);
          }
        }
      } else {
        fcgi_connection_close(srv, hctx);
      }
      joblist_append(srv, con);
      return ((enum __anonenum_handler_t_43 )2);
      case -1: 
      if (proc->pid) {
        if ((int )proc->state != 4) {
          tmp___0 = waitpid(proc->pid, & status, 1);
          switch (tmp___0) {
          case 0: 
          break;
          case -1: 
          break;
          default: 
          __constr_expr_3.__in = status;
          if ((__constr_expr_3.__i & 127) == 0) {
            __constr_expr_0.__in = status;
            log_error_write(srv, "mod_fastcgi.c", 3188U, "sdsd",
                            "child exited, pid:", proc->pid, "status:",
                            (__constr_expr_0.__i & 65280) >> 8);
          } else {
            __constr_expr_2.__in = status;
            if ((int )((signed char )((__constr_expr_2.__i & 127) + 1)) >> 1 > 0) {
              __constr_expr_1.__in = status;
              log_error_write(srv, "mod_fastcgi.c", 3192U, "sd",
                              "child signaled:", __constr_expr_1.__i & 127);
            } else {
              log_error_write(srv, "mod_fastcgi.c", 3196U, "sd",
                              "child died somehow:", status);
            }
          }
          if (p->conf.debug) {
            log_error_write(srv, "mod_fastcgi.c", 3202U, "ssbsdsd",
                            "--- fastcgi spawning", "\n\tsocket",
                            proc->connection_name, "\n\tcurrent:", 1, "/",
                            host->min_procs);
          }
          tmp___1 = fcgi_spawn_connection(srv, p, host, proc);
          if (tmp___1) {
            proc->state = (enum __anonenum_state_139 )4;
            log_error_write(srv, "mod_fastcgi.c", 3212U, "s",
                            "respawning failed, will retry later");
          }
          break;
          }
        }
      }
      if (con->file_started == 0) {
        if ((hctx->wb)->bytes_out == 0LL) {
          if (hctx->reconnects < 5) {
            fcgi_reconnect(srv, hctx);
            log_error_write(srv, "mod_fastcgi.c", 3227U, "ssbsbs",
                            "response not received, request not sent",
                            "on socket:", proc->connection_name, "for",
                            con->uri.path, ", reconnecting");
            return ((enum __anonenum_handler_t_43 )6);
          }
        }
        log_error_write(srv, "mod_fastcgi.c", 3235U, "sosbsbs",
                        "response not received, request sent:",
                        (hctx->wb)->bytes_out, "on socket:",
                        proc->connection_name, "for", con->uri.path,
                        ", closing connection");
        fcgi_connection_close(srv, hctx);
        connection_set_state(srv, con,
                             (enum __anonenum_connection_state_t_102 )5);
        buffer_reset(con->physical.path);
        con->http_status = 500;
        con->mode = (enum __anonenum_connection_type_90 )0;
      } else {
        fcgi_connection_close(srv, hctx);
        log_error_write(srv, "mod_fastcgi.c", 3250U, "ssbsbs",
                        "response already sent out, but backend returned error",
                        "on socket:", proc->connection_name, "for",
                        con->uri.path, ", terminating connection");
        connection_set_state(srv, con,
                             (enum __anonenum_connection_state_t_102 )9);
      }
      joblist_append(srv, con);
      return ((enum __anonenum_handler_t_43 )2);
      }
    }
  }
  if (revents & (1 << 2)) {
    if ((int )hctx->state == 2) {
      tmp___2 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
      return (tmp___2);
    } else {
      if ((int )hctx->state == 4) {
        tmp___2 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
        return (tmp___2);
      } else {
        log_error_write(srv, "mod_fastcgi.c", 3276U, "sd",
                        "got a FDEVENT_OUT and didn\'t know why:", hctx->state);
      }
    }
  }
  if (revents & (1 << 4)) {
    if ((int )hctx->state == 2) {
      tmp___3 = mod_fastcgi_handle_subrequest(srv, con, (void *)p);
      return (tmp___3);
    } else {
      if ((int )hctx->state == 5) {
        if (! ((hctx->proc)->port == 0U)) {
          log_error_write(srv, "mod_fastcgi.c", 3303U, "sbSBSDSd",
                          "error: unexpected close of fastcgi connection for",
                          con->uri.path, "(no fastcgi process on host:",
                          host->host, ", port: ", host->port, " ?)", hctx->state);
          connection_set_state(srv, con,
                               (enum __anonenum_connection_state_t_102 )9);
          fcgi_connection_close(srv, hctx);
          joblist_append(srv, con);
        }
      } else {
        log_error_write(srv, "mod_fastcgi.c", 3303U, "sbSBSDSd",
                        "error: unexpected close of fastcgi connection for",
                        con->uri.path, "(no fastcgi process on host:",
                        host->host, ", port: ", host->port, " ?)", hctx->state);
        connection_set_state(srv, con,
                             (enum __anonenum_connection_state_t_102 )9);
        fcgi_connection_close(srv, hctx);
        joblist_append(srv, con);
      }
    }
  } else {
    if (revents & (1 << 3)) {
      log_error_write(srv, "mod_fastcgi.c", 3318U, "s",
                      "fcgi: got a FDEVENT_ERR. Don\'t know why.");
      connection_set_state(srv, con, (enum __anonenum_connection_state_t_102 )9);
      fcgi_connection_close(srv, hctx);
      joblist_append(srv, con);
    }
  }
  return ((enum __anonenum_handler_t_43 )2);
}
}

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
  s = *(p->config_storage + 0);
  p->conf.exts = s->exts;
  p->conf.debug = s->debug;
  p->conf.ext_mapping = s->ext_mapping;
  i = 1U;
  while (i < (srv->config_context)->used) {
    dc = (data_config *)*((srv->config_context)->data + i);
    s = *(p->config_storage + i);
    tmp = config_check_cond(srv, con, dc);
    if (! tmp) {
      goto __Cont;
    }
    j = 0U;
    while (j < (dc->value)->used) {
      du = *((dc->value)->data + j);
      tmp___2 = buffer_is_equal_string(du->key, "fastcgi.server",
                                       sizeof("fastcgi.server") - 1U);
      if (tmp___2) {
        p->conf.exts = s->exts;
      } else {
        tmp___1 = buffer_is_equal_string(du->key, "fastcgi.debug",
                                         sizeof("fastcgi.debug") - 1U);
        if (tmp___1) {
          p->conf.debug = s->debug;
        } else {
          tmp___0 = buffer_is_equal_string(du->key, "fastcgi.map-extensions",
                                           sizeof("fastcgi.map-extensions") - 1U);
          if (tmp___0) {
            p->conf.ext_mapping = s->ext_mapping;
          }
        }
      }
      j ++;
    }
    __Cont: 
    i ++;
  }
  return (0);
}
}

static handler_t fcgi_check_extension(server *srv , connection *con ,
                                      void *p_d , int uri_path_handler ) 
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
  unsigned char const   *__s2 ;
  register int __result ;
  int tmp___6 ;
  unsigned char const   *__s1 ;
  register int __result___0 ;
  int tmp___7 ;
  int tmp___8 ;
  int tmp___9 ;
  unsigned char const   *__s2___0 ;
  register int __result___1 ;
  int tmp___10 ;
  unsigned char const   *__s1___0 ;
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
  unsigned char const   *__s2___1 ;
  register int __result___3 ;
  int tmp___18 ;
  unsigned char const   *__s1___1 ;
  register int __result___4 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  unsigned char const   *__s2___2 ;
  register int __result___5 ;
  int tmp___22 ;
  unsigned char const   *__s1___2 ;
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
  unsigned char const   *__s2___3 ;
  register int __result___7 ;
  int tmp___32 ;
  unsigned char const   *__s1___3 ;
  register int __result___8 ;
  int tmp___33 ;
  int tmp___34 ;
  int tmp___35 ;
  unsigned char const   *__s2___4 ;
  register int __result___9 ;
  int tmp___36 ;
  unsigned char const   *__s1___4 ;
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
  unsigned char const   *__s2___5 ;
  register int __result___11 ;
  int tmp___44 ;
  unsigned char const   *__s1___5 ;
  register int __result___12 ;
  int tmp___45 ;
  int tmp___46 ;
  int tmp___47 ;
  unsigned char const   *__s2___6 ;
  register int __result___13 ;
  int tmp___48 ;
  unsigned char const   *__s1___6 ;
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
  unsigned char const   *__s2___7 ;
  register int __result___15 ;
  int tmp___58 ;
  unsigned char const   *__s1___7 ;
  register int __result___16 ;
  int tmp___59 ;
  int tmp___60 ;
  int tmp___61 ;
  unsigned char const   *__s2___8 ;
  register int __result___17 ;
  int tmp___62 ;
  unsigned char const   *__s1___8 ;
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
  unsigned char const   *__s2___9 ;
  register int __result___19 ;
  int tmp___70 ;
  unsigned char const   *__s1___9 ;
  register int __result___20 ;
  int tmp___71 ;
  int tmp___72 ;
  int tmp___73 ;
  unsigned char const   *__s2___10 ;
  register int __result___21 ;
  int tmp___74 ;
  unsigned char const   *__s1___10 ;
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
  p = (plugin_data *)p_d;
  extension = (fcgi_extension *)((void *)0);
  host = (fcgi_extension_host *)((void *)0);
  if (con->file_started == 1) {
    return ((enum __anonenum_handler_t_43 )1);
  }
  if (uri_path_handler) {
    fn = con->uri.path;
  } else {
    fn = con->physical.path;
  }
  tmp = buffer_is_empty(fn);
  if (tmp) {
    return ((enum __anonenum_handler_t_43 )1);
  }
  s_len = fn->used - 1U;
  fcgi_patch_connection(srv, con, p);
  k = 0U;
  while (k < (p->conf.ext_mapping)->used) {
    ds = (data_string *)*((p->conf.ext_mapping)->data + k);
    if ((ds->key)->used == 0U) {
      goto __Cont;
    }
    ct_len = (ds->key)->used - 1U;
    if (s_len < ct_len) {
      goto __Cont;
    }
    if (0) {
      if (0) {
        __s1_len___0 = strlen((char const   *)((fn->ptr + s_len) - ct_len));
        __s2_len___0 = strlen((char const   *)(ds->key)->ptr);
        if (! ((unsigned int )((void const   *)(((fn->ptr + s_len) - ct_len) + 1)) - (unsigned int )((void const   *)((fn->ptr + s_len) - ct_len)) == 1U)) {
          goto _L___2;
        } else {
          if (__s1_len___0 >= 4U) {
            _L___2: 
            if (! ((unsigned int )((void const   *)((ds->key)->ptr + 1)) - (unsigned int )((void const   *)(ds->key)->ptr) == 1U)) {
              tmp___24 = 1;
            } else {
              if (__s2_len___0 >= 4U) {
                tmp___24 = 1;
              } else {
                tmp___24 = 0;
              }
            }
          } else {
            tmp___24 = 0;
          }
        }
        if (tmp___24) {
          tmp___20 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len),
                                      (char const   *)(ds->key)->ptr);
        } else {
          tmp___23 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len),
                                      (char const   *)(ds->key)->ptr);
          tmp___20 = tmp___23;
        }
      } else {
        tmp___23 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len),
                                    (char const   *)(ds->key)->ptr);
        tmp___20 = tmp___23;
      }
      tmp___14 = tmp___20;
    } else {
      tmp___14 = strncmp((char const   *)((fn->ptr + s_len) - ct_len),
                         (char const   *)(ds->key)->ptr, ct_len);
    }
    if (0 == tmp___14) {
      k = 0U;
      while (k < (p->conf.exts)->used) {
        extension = *((p->conf.exts)->exts + k);
        tmp___0 = buffer_is_equal(ds->value, extension->key);
        if (tmp___0) {
          break;
        }
        k ++;
      }
      if (k == (p->conf.exts)->used) {
        extension = (fcgi_extension *)((void *)0);
      }
      break;
    }
    __Cont: 
    k ++;
  }
  if ((unsigned int )extension == (unsigned int )((void *)0)) {
    k = 0U;
    while (k < (p->conf.exts)->used) {
      extension = *((p->conf.exts)->exts + k);
      if ((extension->key)->used == 0U) {
        goto __Cont___0;
      }
      ct_len___0 = (extension->key)->used - 1U;
      if (s_len < ct_len___0) {
        goto __Cont___0;
      }
      if ((int )*((extension->key)->ptr) == 47) {
        if (0) {
          if (0) {
            __s1_len___4 = strlen((char const   *)fn->ptr);
            __s2_len___4 = strlen((char const   *)(extension->key)->ptr);
            if (! ((unsigned int )((void const   *)(fn->ptr + 1)) - (unsigned int )((void const   *)fn->ptr) == 1U)) {
              goto _L___10;
            } else {
              if (__s1_len___4 >= 4U) {
                _L___10: 
                if (! ((unsigned int )((void const   *)((extension->key)->ptr + 1)) - (unsigned int )((void const   *)(extension->key)->ptr) == 1U)) {
                  tmp___76 = 1;
                } else {
                  if (__s2_len___4 >= 4U) {
                    tmp___76 = 1;
                  } else {
                    tmp___76 = 0;
                  }
                }
              } else {
                tmp___76 = 0;
              }
            }
            if (tmp___76) {
              tmp___72 = __builtin_strcmp((char const   *)fn->ptr,
                                          (char const   *)(extension->key)->ptr);
            } else {
              tmp___75 = __builtin_strcmp((char const   *)fn->ptr,
                                          (char const   *)(extension->key)->ptr);
              tmp___72 = tmp___75;
            }
          } else {
            tmp___75 = __builtin_strcmp((char const   *)fn->ptr,
                                        (char const   *)(extension->key)->ptr);
            tmp___72 = tmp___75;
          }
          tmp___66 = tmp___72;
        } else {
          tmp___66 = strncmp((char const   *)fn->ptr,
                             (char const   *)(extension->key)->ptr, ct_len___0);
        }
        if (tmp___66 == 0) {
          break;
        } else {
          goto _L___11;
        }
      } else {
        _L___11: 
        if (0) {
          if (0) {
            __s1_len___2 = strlen((char const   *)((fn->ptr + s_len) - ct_len___0));
            __s2_len___2 = strlen((char const   *)(extension->key)->ptr);
            if (! ((unsigned int )((void const   *)(((fn->ptr + s_len) - ct_len___0) + 1)) - (unsigned int )((void const   *)((fn->ptr + s_len) - ct_len___0)) == 1U)) {
              goto _L___6;
            } else {
              if (__s1_len___2 >= 4U) {
                _L___6: 
                if (! ((unsigned int )((void const   *)((extension->key)->ptr + 1)) - (unsigned int )((void const   *)(extension->key)->ptr) == 1U)) {
                  tmp___50 = 1;
                } else {
                  if (__s2_len___2 >= 4U) {
                    tmp___50 = 1;
                  } else {
                    tmp___50 = 0;
                  }
                }
              } else {
                tmp___50 = 0;
              }
            }
            if (tmp___50) {
              tmp___46 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                                          (char const   *)(extension->key)->ptr);
            } else {
              tmp___49 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                                          (char const   *)(extension->key)->ptr);
              tmp___46 = tmp___49;
            }
          } else {
            tmp___49 = __builtin_strcmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                                        (char const   *)(extension->key)->ptr);
            tmp___46 = tmp___49;
          }
          tmp___40 = tmp___46;
        } else {
          tmp___40 = strncmp((char const   *)((fn->ptr + s_len) - ct_len___0),
                             (char const   *)(extension->key)->ptr, ct_len___0);
        }
        if (0 == tmp___40) {
          break;
        }
      }
      __Cont___0: 
      k ++;
    }
    if (k == (p->conf.exts)->used) {
      return ((enum __anonenum_handler_t_43 )1);
    }
  }
  k = 0U;
  while (k < extension->used) {
    host = *(extension->hosts + k);
    if (host->active_procs == 0U) {
      host = (fcgi_extension_host *)((void *)0);
      goto __Cont___1;
    }
    break;
    __Cont___1: 
    k ++;
  }
  if (! host) {
    buffer_reset(con->physical.path);
    con->http_status = 500;
    if (! extension->note_is_sent) {
      extension->note_is_sent = 1;
      log_error_write(srv, "mod_fastcgi.c", 3477U, "sbsbs", "all handlers for ",
                      con->uri.path, "on", extension->key, "are down.");
    }
    return ((enum __anonenum_handler_t_43 )2);
  }
  extension->note_is_sent = 0;
  if (uri_path_handler) {
    if ((int )host->check_local == 0) {
      hctx = handler_ctx_init();
      hctx->remote_conn = con;
      hctx->plugin_data = p;
      hctx->proc = (fcgi_proc *)((void *)0);
      hctx->ext = extension;
      hctx->conf.exts = p->conf.exts;
      hctx->conf.debug = p->conf.debug;
      *(con->plugin_ctx + p->id) = (void *)hctx;
      con->mode = (enum __anonenum_connection_type_90 )p->id;
      if (con->conf.log_request_handling) {
        log_error_write(srv, "mod_fastcgi.c", 3516U, "s",
                        "handling it in mod_fastcgi");
      }
      if ((int )*((extension->key)->ptr + 0) == 47) {
        if ((con->uri.path)->used > (extension->key)->used) {
          tmp___80 = __builtin_strchr(((con->uri.path)->ptr + (extension->key)->used) - 1,
                                      '/');
          pathinfo = tmp___80;
          if ((unsigned int )((void *)0) != (unsigned int )pathinfo) {
            buffer_copy_string(con->request.pathinfo, (char const   *)pathinfo);
            (con->uri.path)->used -= (con->request.pathinfo)->used - 1U;
            *((con->uri.path)->ptr + ((con->uri.path)->used - 1U)) = (char )'\000';
          }
        }
      }
    }
  } else {
    hctx___0 = handler_ctx_init();
    hctx___0->remote_conn = con;
    hctx___0->plugin_data = p;
    hctx___0->proc = (fcgi_proc *)((void *)0);
    hctx___0->ext = extension;
    hctx___0->conf.exts = p->conf.exts;
    hctx___0->conf.debug = p->conf.debug;
    *(con->plugin_ctx + p->id) = (void *)hctx___0;
    con->mode = (enum __anonenum_connection_type_90 )p->id;
    if (con->conf.log_request_handling) {
      log_error_write(srv, "mod_fastcgi.c", 3569U, "s",
                      "handling it in mod_fastcgi");
    }
  }
  return ((enum __anonenum_handler_t_43 )1);
}
}

static handler_t fcgi_check_extension_1(server *srv , connection *con ,
                                        void *p_d ) 
{ handler_t tmp ;

  {
  tmp = fcgi_check_extension(srv, con, p_d, 1);
  return (tmp);
}
}

static handler_t fcgi_check_extension_2(server *srv , connection *con ,
                                        void *p_d ) 
{ handler_t tmp ;

  {
  tmp = fcgi_check_extension(srv, con, p_d, 0);
  return (tmp);
}
}

static handler_t mod_fastcgi_handle_joblist(server *srv , connection *con ,
                                            void *p_d ) 
{ plugin_data *p ;
  handler_ctx *hctx ;

  {
  p = (plugin_data *)p_d;
  hctx = (handler_ctx *)*(con->plugin_ctx + p->id);
  if ((unsigned int )hctx == (unsigned int )((void *)0)) {
    return ((enum __anonenum_handler_t_43 )1);
  }
  if (hctx->fd != -1) {
    switch ((int )hctx->state) {
    case 5: 
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1);
    break;
    case 2: 
    case 4: 
    fdevent_event_add(srv->ev, & hctx->fde_ndx, hctx->fd, 1 << 2);
    break;
    case 1: 
    break;
    default: 
    log_error_write(srv, "mod_fastcgi.c", 3607U, "sd", "unhandled fcgi.state",
                    hctx->state);
    break;
    }
  }
  return ((enum __anonenum_handler_t_43 )1);
}
}

static handler_t fcgi_connection_close_callback(server *srv , connection *con ,
                                                void *p_d ) 
{ plugin_data *p ;

  {
  p = (plugin_data *)p_d;
  fcgi_connection_close(srv, (handler_ctx *)*(con->plugin_ctx + p->id));
  return ((enum __anonenum_handler_t_43 )1);
}
}

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
  p = (plugin_data *)p_d;
  i = 0U;
  while (i < (srv->config_context)->used) {
    conf = *(p->config_storage + i);
    exts = conf->exts;
    j = 0U;
    while (j < exts->used) {
      ex = *(exts->exts + j);
      n = 0U;
      while (n < ex->used) {
        sum_load = 0UL;
        host = *(ex->hosts + n);
        fcgi_restart_dead_procs(srv, p, host);
        proc = host->first;
        while (proc) {
          sum_load += (unsigned long )proc->load;
          proc = proc->next;
        }
        if (host->num_procs) {
          if (host->num_procs < (unsigned int )host->max_procs) {
            if (sum_load / (unsigned long )host->num_procs > (unsigned long )host->max_load_per_proc) {
              if (p->conf.debug) {
                log_error_write(srv, "mod_fastcgi.c", 3671U, "s",
                                "overload detected, spawning a new child");
              }
              proc = host->unused_procs;
              while (1) {
                if (proc) {
                  if (! (proc->pid != 0)) {
                    break;
                  }
                } else {
                  break;
                }
                proc = proc->next;
              }
              if (proc) {
                if ((unsigned int )proc == (unsigned int )host->unused_procs) {
                  host->unused_procs = proc->next;
                }
                if (proc->next) {
                  (proc->next)->prev = (struct fcgi_proc *)((void *)0);
                }
                (host->max_id) ++;
              } else {
                proc = fastcgi_process_init();
                tmp = host->max_id;
                (host->max_id) ++;
                proc->id = tmp;
              }
              (host->num_procs) ++;
              tmp___0 = buffer_is_empty(host->unixsocket);
              if (tmp___0) {
                proc->port = (unsigned int )host->port + proc->id;
              } else {
                buffer_copy_string_buffer(proc->unixsocket,
                                          (buffer const   *)host->unixsocket);
                buffer_append_string(proc->unixsocket, "-");
                buffer_append_long(proc->unixsocket, (long )proc->id);
              }
              tmp___1 = fcgi_spawn_connection(srv, p, host, proc);
              if (tmp___1) {
                log_error_write(srv, "mod_fastcgi.c", 3699U, "s",
                                "ERROR: spawning fcgi failed.");
                return ((enum __anonenum_handler_t_43 )5);
              }
              proc->prev = (struct fcgi_proc *)((void *)0);
              proc->next = host->first;
              if (host->first) {
                (host->first)->prev = proc;
              }
              host->first = proc;
            }
          }
        }
        proc = host->first;
        while (proc) {
          if (proc->load != 0U) {
            break;
          }
          if (host->num_procs <= (unsigned int )host->min_procs) {
            break;
          }
          if (proc->pid == 0) {
            goto __Cont;
          }
          if (srv->cur_ts - proc->last_used > (long )host->idle_timeout) {
            if (p->conf.debug) {
              log_error_write(srv, "mod_fastcgi.c", 3722U, "ssbsd",
                              "idle-timeout reached; terminating child:",
                              "socket:", proc->connection_name, "pid", proc->pid);
            }
            if (proc->next) {
              (proc->next)->prev = proc->prev;
            }
            if (proc->prev) {
              (proc->prev)->next = proc->next;
            }
            if ((unsigned int )proc->prev == (unsigned int )((void *)0)) {
              host->first = proc->next;
            }
            proc->prev = (struct fcgi_proc *)((void *)0);
            proc->next = host->unused_procs;
            if (host->unused_procs) {
              (host->unused_procs)->prev = proc;
            }
            host->unused_procs = proc;
            kill(proc->pid, 15);
            proc->state = (enum __anonenum_state_139 )5;
            log_error_write(srv, "mod_fastcgi.c", 3744U, "ssbsd", "killed:",
                            "socket:", proc->connection_name, "pid", proc->pid);
            (host->num_procs) --;
            break;
          }
          __Cont: 
          proc = proc->next;
        }
        proc = host->unused_procs;
        while (proc) {
          if (proc->pid == 0) {
            goto __Cont___0;
          }
          tmp___2 = waitpid(proc->pid, & status, 1);
          switch (tmp___2) {
          case 0: 
          break;
          case -1: 
          tmp___5 = __errno_location();
          if (*tmp___5 != 4) {
            tmp___3 = __errno_location();
            tmp___4 = strerror(*tmp___3);
            log_error_write(srv, "mod_fastcgi.c", 3768U, "sddss", "pid ",
                            proc->pid, proc->state, "not found:", tmp___4);
          }
          break;
          default: 
          __constr_expr_4.__in = status;
          if ((__constr_expr_4.__i & 127) == 0) {
            if ((int )proc->state != 5) {
              __constr_expr_0.__in = status;
              log_error_write(srv, "mod_fastcgi.c", 3785U, "sdb",
                              "child exited:",
                              (__constr_expr_0.__i & 65280) >> 8,
                              proc->connection_name);
            }
          } else {
            __constr_expr_3.__in = status;
            if ((int )((signed char )((__constr_expr_3.__i & 127) + 1)) >> 1 > 0) {
              __constr_expr_2.__in = status;
              if ((__constr_expr_2.__i & 127) != 15) {
                __constr_expr_1.__in = status;
                log_error_write(srv, "mod_fastcgi.c", 3791U, "sd",
                                "child signaled:", __constr_expr_1.__i & 127);
              }
            } else {
              log_error_write(srv, "mod_fastcgi.c", 3796U, "sd",
                              "child died somehow:", status);
            }
          }
          proc->pid = 0;
          proc->state = (enum __anonenum_state_139 )0;
          (host->max_id) --;
          }
          __Cont___0: 
          proc = proc->next;
        }
        n ++;
      }
      j ++;
    }
    i ++;
  }
  return ((enum __anonenum_handler_t_43 )1);
}
}

int mod_fastcgi_plugin_init(plugin *p ) 
{ 

  {
  p->version = (unsigned int )(((1 << 16) | (4 << 8)) | 17);
  p->name = buffer_init_string("fastcgi");
  p->init = & mod_fastcgi_init;
  p->cleanup = & mod_fastcgi_free;
  p->set_defaults = & mod_fastcgi_set_defaults;
  p->connection_reset = & fcgi_connection_reset;
  p->handle_connection_close = & fcgi_connection_close_callback;
  p->handle_uri_clean = & fcgi_check_extension_1;
  p->handle_subrequest_start = & fcgi_check_extension_2;
  p->handle_subrequest = & mod_fastcgi_handle_subrequest;
  p->handle_joblist = & mod_fastcgi_handle_joblist;
  p->handle_trigger = & mod_fastcgi_handle_trigger;
  p->data = (void *)0;
  return (0);
}
}

