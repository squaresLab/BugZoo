typedef int ptrdiff_t;

typedef unsigned int size_t;

typedef long wchar_t;

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

struct _IO_FILE;

struct _IO_FILE;

struct _IO_FILE;

typedef struct _IO_FILE FILE;

typedef struct _IO_FILE __FILE;

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

typedef _G_fpos_t fpos_t;

struct __anonstruct_div_t_10 {
   int quot ;
   int rem ;
};

typedef struct __anonstruct_div_t_10 div_t;

struct __anonstruct_ldiv_t_11 {
   long quot ;
   long rem ;
};

typedef struct __anonstruct_ldiv_t_11 ldiv_t;

typedef __u_char u_char;

typedef __u_short u_short;

typedef __u_int u_int;

typedef __u_long u_long;

typedef __quad_t quad_t;

typedef __u_quad_t u_quad_t;

typedef __fsid_t fsid_t;

typedef __loff_t loff_t;

typedef __ino_t ino_t;

typedef __dev_t dev_t;

typedef __gid_t gid_t;

typedef __mode_t mode_t;

typedef __nlink_t nlink_t;

typedef __uid_t uid_t;

typedef __off_t off_t;

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

struct __anonstruct___sigset_t_12 {
   unsigned long __val[1024U / (8U * sizeof(unsigned long ))] ;
};

typedef struct __anonstruct___sigset_t_12 __sigset_t;

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

struct __anonstruct_fd_set_13 {
   __fd_mask __fds_bits[4096U / (8U * sizeof(__fd_mask ))] ;
};

typedef struct __anonstruct_fd_set_13 fd_set;

typedef __fd_mask fd_mask;

typedef __blkcnt_t blkcnt_t;

typedef __fsblkcnt_t fsblkcnt_t;

typedef __fsfilcnt_t fsfilcnt_t;

typedef unsigned long pthread_t;

union __anonunion_pthread_attr_t_14 {
   char __size[36] ;
   long __align ;
};

typedef union __anonunion_pthread_attr_t_14 pthread_attr_t;

struct __pthread_internal_slist {
   struct __pthread_internal_slist *__next ;
};

typedef struct __pthread_internal_slist __pthread_slist_t;

union __anonunion____missing_field_name_16 {
   int __spins ;
   __pthread_slist_t __list ;
};

struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   int __kind ;
   unsigned int __nusers ;
   union __anonunion____missing_field_name_16 __annonCompField1 ;
};

union __anonunion_pthread_mutex_t_15 {
   struct __pthread_mutex_s __data ;
   char __size[24] ;
   long __align ;
};

typedef union __anonunion_pthread_mutex_t_15 pthread_mutex_t;

union __anonunion_pthread_mutexattr_t_17 {
   char __size[4] ;
   long __align ;
};

typedef union __anonunion_pthread_mutexattr_t_17 pthread_mutexattr_t;

struct __anonstruct___data_19 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};

union __anonunion_pthread_cond_t_18 {
   struct __anonstruct___data_19 __data ;
   char __size[48] ;
   long long __align ;
};

typedef union __anonunion_pthread_cond_t_18 pthread_cond_t;

union __anonunion_pthread_condattr_t_20 {
   char __size[4] ;
   long __align ;
};

typedef union __anonunion_pthread_condattr_t_20 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

struct __anonstruct___data_22 {
   int __lock ;
   unsigned int __nr_readers ;
   unsigned int __readers_wakeup ;
   unsigned int __writer_wakeup ;
   unsigned int __nr_readers_queued ;
   unsigned int __nr_writers_queued ;
   unsigned int __flags ;
   int __writer ;
};

union __anonunion_pthread_rwlock_t_21 {
   struct __anonstruct___data_22 __data ;
   char __size[32] ;
   long __align ;
};

typedef union __anonunion_pthread_rwlock_t_21 pthread_rwlock_t;

union __anonunion_pthread_rwlockattr_t_23 {
   char __size[8] ;
   long __align ;
};

typedef union __anonunion_pthread_rwlockattr_t_23 pthread_rwlockattr_t;

typedef int volatile   pthread_spinlock_t;

union __anonunion_pthread_barrier_t_24 {
   char __size[20] ;
   long __align ;
};

typedef union __anonunion_pthread_barrier_t_24 pthread_barrier_t;

union __anonunion_pthread_barrierattr_t_25 {
   char __size[4] ;
   int __align ;
};

typedef union __anonunion_pthread_barrierattr_t_25 pthread_barrierattr_t;

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

enum __anonenum_26 {
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

typedef unsigned long nfds_t;

struct pollfd {
   int fd ;
   short events ;
   short revents ;
};

struct iovec {
   void *iov_base ;
   size_t iov_len ;
};

typedef __socklen_t socklen_t;

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

enum __anonenum_27 {
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

enum __anonenum_28 {
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

enum __anonenum_29 {
    SHUT_RD = 0,
    SHUT_WR = 1,
    SHUT_RDWR = 2
} ;

struct sockaddr_un {
   sa_family_t sun_family ;
   char sun_path[108] ;
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

typedef int intptr_t;

typedef unsigned int uintptr_t;

typedef long long intmax_t;

typedef unsigned long long uintmax_t;

enum __anonenum_30 {
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

enum __anonenum_31 {
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

union __anonunion_in6_u_32 {
   uint8_t u6_addr8[16] ;
   uint16_t u6_addr16[8] ;
   uint32_t u6_addr32[4] ;
};

struct in6_addr {
   union __anonunion_in6_u_32 in6_u ;
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

enum __anonenum_33 {
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

enum __ns_sect {
    ns_s_qd = 0,
    ns_s_zn = 0,
    ns_s_an = 1,
    ns_s_pr = 1,
    ns_s_ns = 2,
    ns_s_ud = 2,
    ns_s_ar = 3,
    ns_s_max = 4
} ;

typedef enum __ns_sect ns_sect;

struct __ns_msg {
   u_char const   *_msg ;
   u_char const   *_eom ;
   u_int16_t _id ;
   u_int16_t _flags ;
   u_int16_t _counts[4] ;
   u_char const   *_sections[4] ;
   ns_sect _sect ;
   int _rrnum ;
   u_char const   *_ptr ;
};

typedef struct __ns_msg ns_msg;

struct _ns_flagdata {
   int mask ;
   int shift ;
};

struct __ns_rr {
   char name[1025] ;
   u_int16_t type ;
   u_int16_t rr_class ;
   u_int32_t ttl ;
   u_int16_t rdlength ;
   u_char const   *rdata ;
};

typedef struct __ns_rr ns_rr;

enum __ns_flag {
    ns_f_qr = 0,
    ns_f_opcode = 1,
    ns_f_aa = 2,
    ns_f_tc = 3,
    ns_f_rd = 4,
    ns_f_ra = 5,
    ns_f_z = 6,
    ns_f_ad = 7,
    ns_f_cd = 8,
    ns_f_rcode = 9,
    ns_f_max = 10
} ;

typedef enum __ns_flag ns_flag;

enum __ns_opcode {
    ns_o_query = 0,
    ns_o_iquery = 1,
    ns_o_status = 2,
    ns_o_notify = 4,
    ns_o_update = 5,
    ns_o_max = 6
} ;

typedef enum __ns_opcode ns_opcode;

enum __ns_rcode {
    ns_r_noerror = 0,
    ns_r_formerr = 1,
    ns_r_servfail = 2,
    ns_r_nxdomain = 3,
    ns_r_notimpl = 4,
    ns_r_refused = 5,
    ns_r_yxdomain = 6,
    ns_r_yxrrset = 7,
    ns_r_nxrrset = 8,
    ns_r_notauth = 9,
    ns_r_notzone = 10,
    ns_r_max = 11,
    ns_r_badsig = 16,
    ns_r_badkey = 17,
    ns_r_badtime = 18
} ;

typedef enum __ns_rcode ns_rcode;

enum __ns_update_operation {
    ns_uop_delete = 0,
    ns_uop_add = 1,
    ns_uop_max = 2
} ;

typedef enum __ns_update_operation ns_update_operation;

struct ns_tsig_key {
   char name[1025] ;
   char alg[1025] ;
   unsigned char *data ;
   int len ;
};

typedef struct ns_tsig_key ns_tsig_key;

struct dst_key;

struct dst_key;

struct ns_tcp_tsig_state {
   int counter ;
   struct dst_key *key ;
   void *ctx ;
   unsigned char sig[512] ;
   int siglen ;
};

typedef struct ns_tcp_tsig_state ns_tcp_tsig_state;

enum __ns_type {
    ns_t_invalid = 0,
    ns_t_a = 1,
    ns_t_ns = 2,
    ns_t_md = 3,
    ns_t_mf = 4,
    ns_t_cname = 5,
    ns_t_soa = 6,
    ns_t_mb = 7,
    ns_t_mg = 8,
    ns_t_mr = 9,
    ns_t_null = 10,
    ns_t_wks = 11,
    ns_t_ptr = 12,
    ns_t_hinfo = 13,
    ns_t_minfo = 14,
    ns_t_mx = 15,
    ns_t_txt = 16,
    ns_t_rp = 17,
    ns_t_afsdb = 18,
    ns_t_x25 = 19,
    ns_t_isdn = 20,
    ns_t_rt = 21,
    ns_t_nsap = 22,
    ns_t_nsap_ptr = 23,
    ns_t_sig = 24,
    ns_t_key = 25,
    ns_t_px = 26,
    ns_t_gpos = 27,
    ns_t_aaaa = 28,
    ns_t_loc = 29,
    ns_t_nxt = 30,
    ns_t_eid = 31,
    ns_t_nimloc = 32,
    ns_t_srv = 33,
    ns_t_atma = 34,
    ns_t_naptr = 35,
    ns_t_kx = 36,
    ns_t_cert = 37,
    ns_t_a6 = 38,
    ns_t_dname = 39,
    ns_t_sink = 40,
    ns_t_opt = 41,
    ns_t_tsig = 250,
    ns_t_ixfr = 251,
    ns_t_axfr = 252,
    ns_t_mailb = 253,
    ns_t_maila = 254,
    ns_t_any = 255,
    ns_t_zxfr = 256,
    ns_t_max = 65536
} ;

typedef enum __ns_type ns_type;

enum __ns_class {
    ns_c_invalid = 0,
    ns_c_in = 1,
    ns_c_2 = 2,
    ns_c_chaos = 3,
    ns_c_hs = 4,
    ns_c_none = 254,
    ns_c_any = 255,
    ns_c_max = 65536
} ;

typedef enum __ns_class ns_class;

enum __ns_key_types {
    ns_kt_rsa = 1,
    ns_kt_dh = 2,
    ns_kt_dsa = 3,
    ns_kt_private = 254
} ;

typedef enum __ns_key_types ns_key_types;

enum __ns_cert_types {
    cert_t_pkix = 1,
    cert_t_spki = 2,
    cert_t_pgp = 3,
    cert_t_url = 253,
    cert_t_oid = 254
} ;

typedef enum __ns_cert_types ns_cert_types;

struct __anonstruct_HEADER_34 {
   unsigned int id : 16 ;
   unsigned int rd : 1 ;
   unsigned int tc : 1 ;
   unsigned int aa : 1 ;
   unsigned int opcode : 4 ;
   unsigned int qr : 1 ;
   unsigned int rcode : 4 ;
   unsigned int cd : 1 ;
   unsigned int ad : 1 ;
   unsigned int unused : 1 ;
   unsigned int ra : 1 ;
   unsigned int qdcount : 16 ;
   unsigned int ancount : 16 ;
   unsigned int nscount : 16 ;
   unsigned int arcount : 16 ;
};

typedef struct __anonstruct_HEADER_34 HEADER;

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

enum __anonenum_res_sendhookact_35 {
    res_goahead = 0,
    res_nextns = 1,
    res_modified = 2,
    res_done = 3,
    res_error = 4
} ;

typedef enum __anonenum_res_sendhookact_35 res_sendhookact;

typedef res_sendhookact (*res_send_qhook)(struct sockaddr_in * const  *ns ,
                                          u_char const   **query ,
                                          int *querylen , u_char *ans ,
                                          int anssiz , int *resplen );

typedef res_sendhookact (*res_send_rhook)(struct sockaddr_in  const  *ns ,
                                          u_char const   *query , int querylen ,
                                          u_char *ans , int anssiz ,
                                          int *resplen );

struct __anonstruct_sort_list_36 {
   struct in_addr addr ;
   u_int32_t mask ;
};

struct __anonstruct__ext_38 {
   u_int16_t nscount ;
   u_int16_t nsmap[3] ;
   int nssocks[3] ;
   u_int16_t nscount6 ;
   u_int16_t nsinit ;
   struct sockaddr_in6 *nsaddrs[3] ;
   unsigned int _initstamp[2] ;
};

union __anonunion__u_37 {
   char pad[52] ;
   struct __anonstruct__ext_38 _ext ;
};

struct __res_state {
   int retrans ;
   int retry ;
   u_long options ;
   int nscount ;
   struct sockaddr_in nsaddr_list[3] ;
   u_short id ;
   char *dnsrch[7] ;
   char defdname[256] ;
   u_long pfcode ;
   unsigned int ndots : 4 ;
   unsigned int nsort : 4 ;
   char unused[3] ;
   struct __anonstruct_sort_list_36 sort_list[10] ;
   res_sendhookact (*qhook)(struct sockaddr_in * const  *ns ,
                            u_char const   **query , int *querylen ,
                            u_char *ans , int anssiz , int *resplen ) ;
   res_sendhookact (*rhook)(struct sockaddr_in  const  *ns ,
                            u_char const   *query , int querylen , u_char *ans ,
                            int anssiz , int *resplen ) ;
   int res_h_errno ;
   int _vcsock ;
   u_int _flags ;
   union __anonunion__u_37 _u ;
};

typedef struct __res_state *res_state;

struct res_sym {
   int number ;
   char *name ;
   char *humanname ;
};

typedef __useconds_t useconds_t;

enum __anonenum_39 {
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

enum __anonenum_40 {
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

enum __anonenum_41 {
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

struct option {
   char const   *name ;
   int has_arg ;
   int *flag ;
   int val ;
};

typedef int ber_int_t;

typedef int ber_sint_t;

typedef unsigned int ber_uint_t;

typedef unsigned long ber_tag_t;

typedef int ber_socket_t;

typedef unsigned long ber_len_t;

typedef long ber_slen_t;

typedef int *(*BER_ERRNO_FN)(void);

typedef void (*BER_LOG_PRINT_FN)(char const   *buf );

typedef void *BER_MEMALLOC_FN(ber_len_t size , void *ctx );

typedef void *BER_MEMCALLOC_FN(ber_len_t n , ber_len_t size , void *ctx );

typedef void *BER_MEMREALLOC_FN(void *p , ber_len_t size , void *ctx );

typedef void BER_MEMFREE_FN(void *p , void *ctx );

struct lber_memory_fns {
   BER_MEMALLOC_FN *bmf_malloc ;
   BER_MEMCALLOC_FN *bmf_calloc ;
   BER_MEMREALLOC_FN *bmf_realloc ;
   BER_MEMFREE_FN *bmf_free ;
};

typedef struct lber_memory_fns BerMemoryFunctions;

struct berelement;

struct berelement;

typedef struct berelement BerElement;

struct sockbuf;

struct sockbuf;

typedef struct sockbuf Sockbuf;

struct seqorset;

struct seqorset;

typedef struct seqorset Seqorset;

struct sockbuf_io;

struct sockbuf_io;

typedef struct sockbuf_io Sockbuf_IO;

struct sockbuf_io_desc {
   int sbiod_level ;
   Sockbuf *sbiod_sb ;
   Sockbuf_IO *sbiod_io ;
   void *sbiod_pvt ;
   struct sockbuf_io_desc *sbiod_next ;
};

typedef struct sockbuf_io_desc Sockbuf_IO_Desc;

struct sockbuf_io {
   int (*sbi_setup)(Sockbuf_IO_Desc *sbiod , void *arg ) ;
   int (*sbi_remove)(Sockbuf_IO_Desc *sbiod ) ;
   int (*sbi_ctrl)(Sockbuf_IO_Desc *sbiod , int opt , void *arg ) ;
   ber_slen_t (*sbi_read)(Sockbuf_IO_Desc *sbiod , void *buf , ber_len_t len ) ;
   ber_slen_t (*sbi_write)(Sockbuf_IO_Desc *sbiod , void *buf , ber_len_t len ) ;
   int (*sbi_close)(Sockbuf_IO_Desc *sbiod ) ;
};

struct berval {
   ber_len_t bv_len ;
   char *bv_val ;
};

typedef struct berval BerValue;

typedef BerValue *BerVarray;

typedef int (*BERDecodeCallback)(BerElement *ber , void *data , int mode );

typedef int (*BEREncodeCallback)(BerElement *ber , void *data );

union lber_berelement_u {
   char buffer[256] ;
   int ialign ;
   long lalign ;
   float falign ;
   double dalign ;
   char *palign ;
};

typedef union lber_berelement_u BerElementBuffer;

struct sockbuf_buf {
   ber_len_t buf_size ;
   ber_len_t buf_ptr ;
   ber_len_t buf_end ;
   char *buf_base ;
};

typedef struct sockbuf_buf Sockbuf_Buf;

typedef void (*BER_LOG_FN)(FILE *file , char const   *subsys , int level ,
                           char const   *fmt  , ...);

struct lber_options {
   short lbo_valid ;
   unsigned short lbo_options ;
   int lbo_debug ;
};

struct berelement {
   struct lber_options ber_opts ;
   ber_tag_t ber_tag ;
   ber_len_t ber_len ;
   ber_tag_t ber_usertag ;
   char *ber_buf ;
   char *ber_ptr ;
   char *ber_end ;
   struct seqorset *ber_sos ;
   char *ber_rwptr ;
   void *ber_memctx ;
};

struct sockbuf {
   struct lber_options sb_opts ;
   Sockbuf_IO_Desc *sb_iod ;
   ber_socket_t sb_fd ;
   unsigned int sb_trans_needs_read : 1 ;
   unsigned int sb_trans_needs_write : 1 ;
   ber_len_t sb_max_incoming ;
};

struct seqorset {
   BerElement *sos_ber ;
   ber_len_t sos_clen ;
   ber_tag_t sos_tag ;
   char *sos_first ;
   char *sos_ptr ;
   struct seqorset *sos_next ;
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

extern  __attribute__((__nothrow__)) size_t __ctype_get_mb_cur_max(void) ;

extern  __attribute__((__nothrow__)) double atof(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int atoi(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long atol(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long long atoll(char const   *__nptr )  __attribute__((__pure__,
__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) double strtod(char const   * __restrict  __nptr ,
                                                   char ** __restrict  __endptr )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long strtol(char const   * __restrict  __nptr ,
                                                 char ** __restrict  __endptr ,
                                                 int __base )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) unsigned long strtoul(char const   * __restrict  __nptr ,
                                                           char ** __restrict  __endptr ,
                                                           int __base )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long long strtoq(char const   * __restrict  __nptr ,
                                                      char ** __restrict  __endptr ,
                                                      int __base )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) unsigned long long strtouq(char const   * __restrict  __nptr ,
                                                                char ** __restrict  __endptr ,
                                                                int __base )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) long long strtoll(char const   * __restrict  __nptr ,
                                                       char ** __restrict  __endptr ,
                                                       int __base )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) unsigned long long strtoull(char const   * __restrict  __nptr ,
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

extern  __attribute__((__nothrow__)) char *l64a(long __n ) ;

extern  __attribute__((__nothrow__)) long a64l(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;

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

extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;

extern  __attribute__((__nothrow__)) void *calloc(size_t __nmemb ,
                                                  size_t __size )  __attribute__((__malloc__)) ;

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

extern  __attribute__((__nothrow__)) char *getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) char *__secure_getenv(char const   *__name )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int putenv(char *__string )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int setenv(char const   *__name ,
                                                char const   *__value ,
                                                int __replace )  __attribute__((__nonnull__(2))) ;

extern  __attribute__((__nothrow__)) int unsetenv(char const   *__name ) ;

extern  __attribute__((__nothrow__)) int clearenv(void) ;

extern  __attribute__((__nothrow__)) char *mktemp(char *__template )  __attribute__((__nonnull__(1))) ;

extern int mkstemp(char *__template )  __attribute__((__nonnull__(1))) ;

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

extern  __attribute__((__nothrow__)) div_t div(int __numer , int __denom )  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) ldiv_t ldiv(long __numer , long __denom )  __attribute__((__const__)) ;

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

extern  __attribute__((__nothrow__)) int tolower(int __c ) ;

extern  __attribute__((__nothrow__)) int toupper(int __c ) ;

extern  __attribute__((__nothrow__)) int isascii(int __c ) ;

extern  __attribute__((__nothrow__)) int toascii(int __c ) ;

extern  __attribute__((__nothrow__)) int _toupper(int  ) ;

extern  __attribute__((__nothrow__)) int _tolower(int  ) ;

extern  __attribute__((__nothrow__)) int *__errno_location(void)  __attribute__((__const__)) ;

extern int poll(struct pollfd *__fds , nfds_t __nfds , int __timeout ) ;

extern ssize_t readv(int __fd , struct iovec  const  *__iovec , int __count ) ;

extern ssize_t writev(int __fd , struct iovec  const  *__iovec , int __count ) ;

extern  __attribute__((__nothrow__)) struct cmsghdr *__cmsg_nxthdr(struct msghdr *__mhdr ,
                                                                   struct cmsghdr *__cmsg ) ;

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

extern struct _ns_flagdata _ns_flagdata[] ;

extern  __attribute__((__nothrow__)) u_int __ns_get16(u_char const   * ) ;

extern  __attribute__((__nothrow__)) u_long __ns_get32(u_char const   * ) ;

extern  __attribute__((__nothrow__)) void __ns_put16(u_int  , u_char * ) ;

extern  __attribute__((__nothrow__)) void __ns_put32(u_long  , u_char * ) ;

extern  __attribute__((__nothrow__)) int __ns_initparse(u_char const   * ,
                                                        int  , ns_msg * ) ;

extern  __attribute__((__nothrow__)) int __ns_skiprr(u_char const   * ,
                                                     u_char const   * ,
                                                     ns_sect  , int  ) ;

extern  __attribute__((__nothrow__)) int __ns_parserr(ns_msg * , ns_sect  ,
                                                      int  , ns_rr * ) ;

extern  __attribute__((__nothrow__)) int __ns_sprintrr(ns_msg const   * ,
                                                       ns_rr const   * ,
                                                       char const   * ,
                                                       char const   * , char * ,
                                                       size_t  ) ;

extern  __attribute__((__nothrow__)) int __ns_sprintrrf(u_char const   * ,
                                                        size_t  ,
                                                        char const   * ,
                                                        ns_class  , ns_type  ,
                                                        u_long  ,
                                                        u_char const   * ,
                                                        size_t  ,
                                                        char const   * ,
                                                        char const   * ,
                                                        char * , size_t  ) ;

extern  __attribute__((__nothrow__)) int __ns_format_ttl(u_long  , char * ,
                                                         size_t  ) ;

extern  __attribute__((__nothrow__)) int __ns_parse_ttl(char const   * ,
                                                        u_long * ) ;

extern  __attribute__((__nothrow__)) u_int32_t __ns_datetosecs(char const   *cp ,
                                                               int *errp ) ;

extern  __attribute__((__nothrow__)) int __ns_name_ntol(u_char const   * ,
                                                        u_char * , size_t  ) ;

extern  __attribute__((__nothrow__)) int __ns_name_ntop(u_char const   * ,
                                                        char * , size_t  ) ;

extern  __attribute__((__nothrow__)) int __ns_name_pton(char const   * ,
                                                        u_char * , size_t  ) ;

extern  __attribute__((__nothrow__)) int __ns_name_unpack(u_char const   * ,
                                                          u_char const   * ,
                                                          u_char const   * ,
                                                          u_char * , size_t  ) ;

extern  __attribute__((__nothrow__)) int __ns_name_pack(u_char const   * ,
                                                        u_char * , int  ,
                                                        u_char const   ** ,
                                                        u_char const   ** ) ;

extern  __attribute__((__nothrow__)) int __ns_name_uncompress(u_char const   * ,
                                                              u_char const   * ,
                                                              u_char const   * ,
                                                              char * , size_t  ) ;

extern  __attribute__((__nothrow__)) int __ns_name_compress(char const   * ,
                                                            u_char * , size_t  ,
                                                            u_char const   ** ,
                                                            u_char const   ** ) ;

extern  __attribute__((__nothrow__)) int __ns_name_skip(u_char const   ** ,
                                                        u_char const   * ) ;

extern  __attribute__((__nothrow__)) void __ns_name_rollback(u_char const   * ,
                                                             u_char const   ** ,
                                                             u_char const   ** ) ;

extern  __attribute__((__nothrow__)) int __ns_sign(u_char * , int * , int  ,
                                                   int  , void * ,
                                                   u_char const   * , int  ,
                                                   u_char * , int * , time_t  ) ;

extern  __attribute__((__nothrow__)) int __ns_sign_tcp(u_char * , int * , int  ,
                                                       int  ,
                                                       ns_tcp_tsig_state * ,
                                                       int  ) ;

extern  __attribute__((__nothrow__)) int __ns_sign_tcp_init(void * ,
                                                            u_char const   * ,
                                                            int  ,
                                                            ns_tcp_tsig_state * ) ;

extern  __attribute__((__nothrow__)) u_char *__ns_find_tsig(u_char * , u_char * ) ;

extern  __attribute__((__nothrow__)) int __ns_verify(u_char * , int * , void * ,
                                                     u_char const   * , int  ,
                                                     u_char * , int * ,
                                                     time_t * , int  ) ;

extern  __attribute__((__nothrow__)) int __ns_verify_tcp(u_char * , int * ,
                                                         ns_tcp_tsig_state * ,
                                                         int  ) ;

extern  __attribute__((__nothrow__)) int __ns_verify_tcp_init(void * ,
                                                              u_char const   * ,
                                                              int  ,
                                                              ns_tcp_tsig_state * ) ;

extern  __attribute__((__nothrow__)) int __ns_samedomain(char const   * ,
                                                         char const   * ) ;

extern  __attribute__((__nothrow__)) int __ns_subdomain(char const   * ,
                                                        char const   * ) ;

extern  __attribute__((__nothrow__)) int __ns_makecanon(char const   * ,
                                                        char * , size_t  ) ;

extern  __attribute__((__nothrow__)) int __ns_samename(char const   * ,
                                                       char const   * ) ;

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

extern struct __res_state *__res_state(void)  __attribute__((__const__)) ;

extern  __attribute__((__nothrow__)) void __fp_nquery(u_char const   * , int  ,
                                                      FILE * ) ;

extern  __attribute__((__nothrow__)) void __fp_query(u_char const   * , FILE * ) ;

extern  __attribute__((__nothrow__)) char const   *__hostalias(char const   * ) ;

extern  __attribute__((__nothrow__)) void __p_query(u_char const   * ) ;

extern  __attribute__((__nothrow__)) void __res_close(void) ;

extern  __attribute__((__nothrow__)) int __res_init(void) ;

extern  __attribute__((__nothrow__)) int __res_isourserver(struct sockaddr_in  const  * ) ;

extern  __attribute__((__nothrow__)) int __res_mkquery(int  , char const   * ,
                                                       int  , int  ,
                                                       u_char const   * , int  ,
                                                       u_char const   * ,
                                                       u_char * , int  ) ;

extern  __attribute__((__nothrow__)) int __res_query(char const   * , int  ,
                                                     int  , u_char * , int  ) ;

extern  __attribute__((__nothrow__)) int __res_querydomain(char const   * ,
                                                           char const   * ,
                                                           int  , int  ,
                                                           u_char * , int  ) ;

extern  __attribute__((__nothrow__)) int __res_search(char const   * , int  ,
                                                      int  , u_char * , int  ) ;

extern  __attribute__((__nothrow__)) int __res_send(u_char const   * , int  ,
                                                    u_char * , int  ) ;

extern  __attribute__((__nothrow__)) int __res_hnok(char const   * ) ;

extern  __attribute__((__nothrow__)) int __res_ownok(char const   * ) ;

extern  __attribute__((__nothrow__)) int __res_mailok(char const   * ) ;

extern  __attribute__((__nothrow__)) int __res_dnok(char const   * ) ;

extern  __attribute__((__nothrow__)) int __sym_ston(struct res_sym  const  * ,
                                                    char const   * , int * ) ;

extern  __attribute__((__nothrow__)) char const   *__sym_ntos(struct res_sym  const  * ,
                                                              int  , int * ) ;

extern  __attribute__((__nothrow__)) char const   *__sym_ntop(struct res_sym  const  * ,
                                                              int  , int * ) ;

extern  __attribute__((__nothrow__)) int __b64_ntop(u_char const   * , size_t  ,
                                                    char * , size_t  ) ;

extern  __attribute__((__nothrow__)) int __b64_pton(char const   * , u_char * ,
                                                    size_t  ) ;

extern  __attribute__((__nothrow__)) int __loc_aton(char const   *ascii ,
                                                    u_char *binary ) ;

extern  __attribute__((__nothrow__)) char const   *__loc_ntoa(u_char const   *binary ,
                                                              char *ascii ) ;

extern  __attribute__((__nothrow__)) int __dn_skipname(u_char const   * ,
                                                       u_char const   * ) ;

extern  __attribute__((__nothrow__)) void __putlong(u_int32_t  , u_char * ) ;

extern  __attribute__((__nothrow__)) void __putshort(u_int16_t  , u_char * ) ;

extern  __attribute__((__nothrow__)) char const   *__p_class(int  ) ;

extern  __attribute__((__nothrow__)) char const   *__p_time(u_int32_t  ) ;

extern  __attribute__((__nothrow__)) char const   *__p_type(int  ) ;

extern  __attribute__((__nothrow__)) char const   *__p_rcode(int  ) ;

extern  __attribute__((__nothrow__)) u_char const   *__p_cdnname(u_char const   * ,
                                                                 u_char const   * ,
                                                                 int  , FILE * ) ;

extern  __attribute__((__nothrow__)) u_char const   *__p_cdname(u_char const   * ,
                                                                u_char const   * ,
                                                                FILE * ) ;

extern  __attribute__((__nothrow__)) u_char const   *__p_fqnname(u_char const   *cp ,
                                                                 u_char const   *msg ,
                                                                 int  , char * ,
                                                                 int  ) ;

extern  __attribute__((__nothrow__)) u_char const   *__p_fqname(u_char const   * ,
                                                                u_char const   * ,
                                                                FILE * ) ;

extern  __attribute__((__nothrow__)) char const   *__p_option(u_long option ) ;

extern  __attribute__((__nothrow__)) char *__p_secstodate(u_long  ) ;

extern  __attribute__((__nothrow__)) int __dn_count_labels(char const   * ) ;

extern  __attribute__((__nothrow__)) int __dn_comp(char const   * , u_char * ,
                                                   int  , u_char ** , u_char ** ) ;

extern  __attribute__((__nothrow__)) int __dn_expand(u_char const   * ,
                                                     u_char const   * ,
                                                     u_char const   * , char * ,
                                                     int  ) ;

extern  __attribute__((__nothrow__)) u_int __res_randomid(void) ;

extern  __attribute__((__nothrow__)) int __res_nameinquery(char const   * ,
                                                           int  , int  ,
                                                           u_char const   * ,
                                                           u_char const   * ) ;

extern  __attribute__((__nothrow__)) int __res_queriesmatch(u_char const   * ,
                                                            u_char const   * ,
                                                            u_char const   * ,
                                                            u_char const   * ) ;

extern  __attribute__((__nothrow__)) char const   *__p_section(int section ,
                                                               int opcode ) ;

extern  __attribute__((__nothrow__)) int __res_ninit(res_state  ) ;

extern  __attribute__((__nothrow__)) int __res_nisourserver(res_state  ,
                                                            struct sockaddr_in  const  * ) ;

extern  __attribute__((__nothrow__)) void __fp_resstat(res_state  , FILE * ) ;

extern  __attribute__((__nothrow__)) void __res_npquery(res_state  ,
                                                        u_char const   * ,
                                                        int  , FILE * ) ;

extern  __attribute__((__nothrow__)) char const   *__res_hostalias(res_state  ,
                                                                   char const   * ,
                                                                   char * ,
                                                                   size_t  ) ;

extern  __attribute__((__nothrow__)) int __res_nquery(res_state  ,
                                                      char const   * , int  ,
                                                      int  , u_char * , int  ) ;

extern  __attribute__((__nothrow__)) int __res_nsearch(res_state  ,
                                                       char const   * , int  ,
                                                       int  , u_char * , int  ) ;

extern  __attribute__((__nothrow__)) int __res_nquerydomain(res_state  ,
                                                            char const   * ,
                                                            char const   * ,
                                                            int  , int  ,
                                                            u_char * , int  ) ;

extern  __attribute__((__nothrow__)) int __res_nmkquery(res_state  , int  ,
                                                        char const   * , int  ,
                                                        int  ,
                                                        u_char const   * ,
                                                        int  ,
                                                        u_char const   * ,
                                                        u_char * , int  ) ;

extern  __attribute__((__nothrow__)) int __res_nsend(res_state  ,
                                                     u_char const   * , int  ,
                                                     u_char * , int  ) ;

extern  __attribute__((__nothrow__)) void __res_nclose(res_state  ) ;

extern int getpeereid(int s , uid_t * , gid_t * ) ;

extern char *ldap_pvt_strtok(char *str , char const   *delim , char **pos ) ;

extern void *memrchr(void const   *b , int c , size_t len ) ;

extern  __attribute__((__nothrow__)) int access(char const   *__name ,
                                                int __type )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) __off_t lseek(int __fd , __off_t __offset ,
                                                   int __whence ) ;

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
                                                  __off_t __length )  __attribute__((__nonnull__(1))) ;

extern  __attribute__((__nothrow__)) int ftruncate(int __fd , __off_t __length ) ;

extern  __attribute__((__nothrow__)) int brk(void *__addr ) ;

extern  __attribute__((__nothrow__)) void *sbrk(intptr_t __delta ) ;

extern  __attribute__((__nothrow__)) long syscall(long __sysno  , ...) ;

extern int lockf(int __fd , int __cmd , __off_t __len ) ;

extern int fdatasync(int __fildes ) ;

extern  __attribute__((__nothrow__)) int getopt_long(int ___argc ,
                                                     char * const  *___argv ,
                                                     char const   *__shortopts ,
                                                     struct option  const  *__longopts ,
                                                     int *__longind ) ;

extern  __attribute__((__nothrow__)) int getopt_long_only(int ___argc ,
                                                          char * const  *___argv ,
                                                          char const   *__shortopts ,
                                                          struct option  const  *__longopts ,
                                                          int *__longind ) ;

extern int lutil_lockf(int fd ) ;

extern int lutil_unlockf(int fd ) ;

extern char ber_pvt_opt_on ;

extern void ber_error_print(char const   *data ) ;

extern void ber_bprint(char const   *data , ber_len_t len ) ;

extern void ber_dump(BerElement *ber , int inout ) ;

extern void ber_sos_dump(Seqorset *sos ) ;

extern ber_tag_t ber_get_tag(BerElement *ber ) ;

extern ber_tag_t ber_skip_tag(BerElement *ber , ber_len_t *len ) ;

extern ber_tag_t ber_peek_tag(BerElement *ber , ber_len_t *len ) ;

extern ber_tag_t ber_get_int(BerElement *ber , ber_int_t *num ) ;

extern ber_tag_t ber_get_enum(BerElement *ber , ber_int_t *num ) ;

extern ber_tag_t ber_get_stringb(BerElement *ber , char *buf , ber_len_t *len ) ;

extern ber_tag_t ber_get_stringbv(BerElement *ber , struct berval *bv ,
                                  int alloc ) ;

extern ber_tag_t ber_get_stringa(BerElement *ber , char **buf ) ;

extern ber_tag_t ber_get_stringal(BerElement *ber , struct berval **bv ) ;

extern ber_tag_t ber_get_bitstringa(BerElement *ber , char **buf ,
                                    ber_len_t *len ) ;

extern ber_tag_t ber_get_null(BerElement *ber ) ;

extern ber_tag_t ber_get_boolean(BerElement *ber , ber_int_t *boolval ) ;

extern ber_tag_t ber_first_element(BerElement *ber , ber_len_t *len ,
                                   char **last ) ;

extern ber_tag_t ber_next_element(BerElement *ber , ber_len_t *len ,
                                  char const   *last ) ;

extern ber_tag_t ber_scanf(BerElement *ber , char const   *fmt  , ...) ;

extern int ber_put_enum(BerElement *ber , ber_int_t num , ber_tag_t tag ) ;

extern int ber_put_int(BerElement *ber , ber_int_t num , ber_tag_t tag ) ;

extern int ber_put_ostring(BerElement *ber , char const   *str , ber_len_t len ,
                           ber_tag_t tag ) ;

extern int ber_put_berval(BerElement *ber , struct berval *bv , ber_tag_t tag ) ;

extern int ber_put_string(BerElement *ber , char const   *str , ber_tag_t tag ) ;

extern int ber_put_bitstring(BerElement *ber , char const   *str ,
                             ber_len_t bitlen , ber_tag_t tag ) ;

extern int ber_put_null(BerElement *ber , ber_tag_t tag ) ;

extern int ber_put_boolean(BerElement *ber , ber_int_t boolval , ber_tag_t tag ) ;

extern int ber_start_seq(BerElement *ber , ber_tag_t tag ) ;

extern int ber_start_set(BerElement *ber , ber_tag_t tag ) ;

extern int ber_put_seq(BerElement *ber ) ;

extern int ber_put_set(BerElement *ber ) ;

extern int ber_printf(BerElement *ber , char const   *fmt  , ...) ;

ber_slen_t ber_read(BerElement *ber , char *buf , ber_len_t len ) ;

ber_slen_t ber_write(BerElement *ber , char const   *buf , ber_len_t len ,
                     int nosos ) ;

void ber_free(BerElement *ber , int freebuf ) ;

void ber_free_buf(BerElement *ber ) ;

int ber_flush(Sockbuf *sb , BerElement *ber , int freeit ) ;

BerElement *ber_alloc(void) ;

BerElement *der_alloc(void) ;

BerElement *ber_alloc_t(int options ) ;

BerElement *ber_dup(BerElement *ber ) ;

ber_tag_t ber_get_next(Sockbuf *sb , ber_len_t *len , BerElement *ber ) ;

void ber_init2(BerElement *ber , struct berval *bv , int options ) ;

void ber_init_w_nullc(BerElement *ber , int options ) ;

void ber_reset(BerElement *ber , int was_writing ) ;

BerElement *ber_init(struct berval *bv ) ;

int ber_flatten(BerElement *ber , struct berval **bvPtr ) ;

int ber_flatten2(BerElement *ber , struct berval *bv , int alloc ) ;

int ber_remaining(BerElement *ber ) ;

extern int ber_get_option(void *item , int option , void *outvalue ) ;

extern int ber_set_option(void *item , int option , void const   *invalue ) ;

extern Sockbuf *ber_sockbuf_alloc(void) ;

extern void ber_sockbuf_free(Sockbuf *sb ) ;

extern int ber_sockbuf_add_io(Sockbuf *sb , Sockbuf_IO *sbio , int layer ,
                              void *arg ) ;

extern int ber_sockbuf_remove_io(Sockbuf *sb , Sockbuf_IO *sbio , int layer ) ;

extern int ber_sockbuf_ctrl(Sockbuf *sb , int opt , void *arg ) ;

extern Sockbuf_IO ber_sockbuf_io_tcp ;

extern Sockbuf_IO ber_sockbuf_io_readahead ;

extern Sockbuf_IO ber_sockbuf_io_fd ;

extern Sockbuf_IO ber_sockbuf_io_debug ;

extern Sockbuf_IO ber_sockbuf_io_udp ;

extern void *ber_memalloc(ber_len_t s ) ;

extern void *ber_memrealloc(void *p , ber_len_t s ) ;

extern void *ber_memcalloc(ber_len_t n , ber_len_t s ) ;

extern void ber_memfree(void *p ) ;

extern void ber_memvfree(void **vector ) ;

extern void ber_bvfree(struct berval *bv ) ;

extern void ber_bvecfree(struct berval **bv ) ;

extern int ber_bvecadd(struct berval ***bvec , struct berval *bv ) ;

extern struct berval *ber_dupbv(struct berval *dst , struct berval *src ) ;

extern struct berval *ber_bvdup(struct berval *src ) ;

extern struct berval *ber_mem2bv(char const   * , ber_len_t len ,
                                 int duplicate , struct berval *bv ) ;

extern struct berval *ber_str2bv(char const   * , ber_len_t len ,
                                 int duplicate , struct berval *bv ) ;

extern char *ber_strdup(char const   * ) ;

extern struct berval *ber_bvreplace(struct berval *dst ,
                                    struct berval  const  *src ) ;

extern void ber_bvarray_free(BerVarray p ) ;

extern int ber_bvarray_add(BerVarray *p , BerValue *bv ) ;

extern int *ber_errno_addr(void) ;

extern int ldap_debug ;

extern int ldap_syslog ;

extern int ldap_syslog_level ;

extern int lutil_debug_file(FILE *file ) ;

extern void lutil_debug(int debug , int level , char const   *fmt  , ...) ;

extern void (*ber_pvt_log_print)(char const   *buf ) ;

extern int ber_pvt_log_printf(int errlvl , int loglvl , char const   *fmt  , ...) ;

extern ber_slen_t ber_pvt_sb_do_write(Sockbuf_IO_Desc *sbiod ,
                                      Sockbuf_Buf *buf_out ) ;

extern void ber_pvt_sb_buf_init(Sockbuf_Buf *buf ) ;

extern void ber_pvt_sb_buf_destroy(Sockbuf_Buf *buf ) ;

extern int ber_pvt_sb_grow_buffer(Sockbuf_Buf *buf , ber_len_t minsize ) ;

extern ber_len_t ber_pvt_sb_copy_out(Sockbuf_Buf *sbb , char *buf ,
                                     ber_len_t len ) ;

extern int ber_pvt_socket_set_nonblock(ber_socket_t sd , int nb ) ;

extern void *ber_memalloc_x(ber_len_t s , void *ctx ) ;

extern void *ber_memrealloc_x(void *p , ber_len_t s , void *ctx ) ;

extern void *ber_memcalloc_x(ber_len_t n , ber_len_t s , void *ctx ) ;

extern void ber_memfree_x(void *p , void *ctx ) ;

extern void ber_memvfree_x(void **vector , void *ctx ) ;

extern void ber_bvfree_x(struct berval *bv , void *ctx ) ;

extern void ber_bvecfree_x(struct berval **bv , void *ctx ) ;

extern int ber_bvecadd_x(struct berval ***bvec , struct berval *bv , void *ctx ) ;

extern struct berval *ber_dupbv_x(struct berval *dst , struct berval *src ,
                                  void *ctx ) ;

extern struct berval *ber_str2bv_x(char const   * , ber_len_t len , int dup ,
                                   struct berval *bv , void *ctx ) ;

extern struct berval *ber_mem2bv_x(char const   * , ber_len_t len , int dup ,
                                   struct berval *bv , void *ctx ) ;

extern char *ber_strdup_x(char const   * , void *ctx ) ;

extern struct berval *ber_bvreplace_x(struct berval *dst ,
                                      struct berval  const  *src , void *ctx ) ;

extern void ber_bvarray_free_x(BerVarray p , void *ctx ) ;

extern int ber_bvarray_add_x(BerVarray *p , BerValue *bv , void *ctx ) ;

extern int *(*ber_int_errno_fn)(void) ;

extern int ber_pvt_log_output(char const   *subsystem , int level ,
                              char const   *fmt  , ...) ;

extern struct lber_options ber_int_options ;

int ber_realloc(BerElement *ber , ber_len_t len ) ;

char *ber_start(BerElement *ber ) ;

int ber_len(BerElement *ber ) ;

int ber_ptrlen(BerElement *ber ) ;

void ber_rewind(BerElement *ber ) ;

extern int ber_log_bprint(int errlvl , int loglvl , char const   *data ,
                          ber_len_t len ) ;

extern int ber_log_dump(int errlvl , int loglvl , BerElement *ber , int inout ) ;

extern int ber_log_sos_dump(int errlvl , int loglvl , Seqorset *sos ) ;

extern void (*ber_int_log_proc)(FILE *file , char const   *subsys , int level ,
                                char const   *fmt  , ...) ;

extern FILE *ber_pvt_err_file ;

extern BerMemoryFunctions *ber_int_memory_fns ;

extern char *ber_strndup(char const   * , ber_len_t  ) ;

extern char *ber_strndup_x(char const   * , ber_len_t  , void *ctx ) ;

extern int ber_int_sb_init(Sockbuf *sb ) ;

extern int ber_int_sb_close(Sockbuf *sb ) ;

extern int ber_int_sb_destroy(Sockbuf *sb ) ;

extern ber_slen_t ber_int_sb_read(Sockbuf *sb , void *buf , ber_len_t len ) ;

extern ber_slen_t ber_int_sb_write(Sockbuf *sb , void *buf , ber_len_t len ) ;

ber_slen_t ber_read(BerElement *ber , char *buf , ber_len_t len ) 
{ ber_len_t actuallen ;
  ber_len_t nleft ;

  {
  if (! ((unsigned int )ber != (unsigned int )((void *)0))) {
    __assert_fail("ber != ((void *)0)", "io.c", 58U, "ber_read");
  }
  if (! ((unsigned int )buf != (unsigned int )((void *)0))) {
    __assert_fail("buf != ((void *)0)", "io.c", 59U, "ber_read");
  }
  if (! ((int )ber->ber_opts.lbo_valid == 2)) {
    __assert_fail("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 61U, "ber_read");
  }
  nleft = (unsigned long )(ber->ber_end - ber->ber_ptr);
  if (nleft < len) {
    actuallen = nleft;
  } else {
    actuallen = len;
  }
  memmove((void *)buf, (void const   *)ber->ber_ptr, (unsigned int )actuallen);
  ber->ber_ptr += actuallen;
  return ((long )actuallen);
}
}

ber_slen_t ber_write(BerElement *ber , char const   *buf , ber_len_t len ,
                     int nosos ) 
{ int tmp ;
  int tmp___0 ;

  {
  if (! ((unsigned int )ber != (unsigned int )((void *)0))) {
    __assert_fail("ber != ((void *)0)", "io.c", 80U, "ber_write");
  }
  if (! ((unsigned int )buf != (unsigned int )((void *)0))) {
    __assert_fail("buf != ((void *)0)", "io.c", 81U, "ber_write");
  }
  if (! ((int )ber->ber_opts.lbo_valid == 2)) {
    __assert_fail("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 83U, "ber_write");
  }
  if (nosos) {
    goto _L;
  } else {
    if ((unsigned int )ber->ber_sos == (unsigned int )((void *)0)) {
      _L: 
      if ((unsigned int )(ber->ber_ptr + len) > (unsigned int )ber->ber_end) {
        tmp = ber_realloc(ber, len);
        if (tmp != 0) {
          return (-1L);
        }
      }
      memmove((void *)ber->ber_ptr, (void const   *)buf, (unsigned int )len);
      ber->ber_ptr += len;
      return ((long )len);
    } else {
      if ((unsigned int )((ber->ber_sos)->sos_ptr + len) > (unsigned int )ber->ber_end) {
        tmp___0 = ber_realloc(ber, len);
        if (tmp___0 != 0) {
          return (-1L);
        }
      }
      memmove((void *)(ber->ber_sos)->sos_ptr, (void const   *)buf,
              (unsigned int )len);
      (ber->ber_sos)->sos_ptr += len;
      (ber->ber_sos)->sos_clen += len;
      return ((long )len);
    }
  }
}
}

int ber_realloc(BerElement *ber , ber_len_t len ) 
{ ber_len_t total ;
  Seqorset *s ;
  long off ;
  char *oldbuf ;
  ber_len_t tmp ;
  void *tmp___0 ;

  {
  if (! ((unsigned int )ber != (unsigned int )((void *)0))) {
    __assert_fail("ber != ((void *)0)", "io.c", 112U, "ber_realloc");
  }
  if (! (len > 0UL)) {
    __assert_fail("len > 0", "io.c", 113U, "ber_realloc");
  }
  if (! ((int )ber->ber_opts.lbo_valid == 2)) {
    __assert_fail("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 114U,
                  "ber_realloc");
  }
  total = (unsigned long )(ber->ber_end - ber->ber_buf);
  if (len < 4060UL) {
    tmp = 4060UL;
  } else {
    tmp = len;
  }
  total += tmp;
  oldbuf = ber->ber_buf;
  tmp___0 = ber_memrealloc_x((void *)oldbuf, total, ber->ber_memctx);
  ber->ber_buf = (char *)tmp___0;
  if ((unsigned int )ber->ber_buf == (unsigned int )((void *)0)) {
    ber->ber_buf = oldbuf;
    return (-1);
  }
  ber->ber_end = ber->ber_buf + total;
  if ((unsigned int )ber->ber_buf != (unsigned int )oldbuf) {
    ber->ber_ptr = ber->ber_buf + (ber->ber_ptr - oldbuf);
    s = ber->ber_sos;
    while ((unsigned int )s != (unsigned int )((void *)0)) {
      off = (long )(s->sos_first - oldbuf);
      s->sos_first = ber->ber_buf + off;
      off = (long )(s->sos_ptr - oldbuf);
      s->sos_ptr = ber->ber_buf + off;
      s = s->sos_next;
    }
  }
  return (0);
}
}

void ber_free_buf(BerElement *ber ) 
{ Seqorset *s ;
  Seqorset *next ;

  {
  if (! ((int )ber->ber_opts.lbo_valid == 2)) {
    __assert_fail("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 171U,
                  "ber_free_buf");
  }
  if (ber->ber_buf) {
    ber_memfree_x((void *)ber->ber_buf, ber->ber_memctx);
  }
  s = ber->ber_sos;
  while ((unsigned int )s != (unsigned int )((void *)0)) {
    next = s->sos_next;
    ber_memfree_x((void *)s, ber->ber_memctx);
    s = next;
  }
  ber->ber_buf = (char *)((void *)0);
  ber->ber_sos = (struct seqorset *)((void *)0);
  ber->ber_opts.lbo_valid = (short)0;
  return;
}
}

void ber_free(BerElement *ber , int freebuf ) 
{ 

  {
  if ((unsigned int )ber == (unsigned int )((void *)0)) {
    return;
  }
  if (freebuf) {
    ber_free_buf(ber);
  }
  ber_memfree_x((void *)((char *)ber), ber->ber_memctx);
  return;
}
}

int ber_flush(Sockbuf *sb , BerElement *ber , int freeit ) 
{ ber_len_t towrite ;
  ber_slen_t rc ;
  char const   *tmp ;

  {
  if (! ((unsigned int )sb != (unsigned int )((void *)0))) {
    __assert_fail("sb != ((void *)0)", "io.c", 207U, "ber_flush");
  }
  if (! ((unsigned int )ber != (unsigned int )((void *)0))) {
    __assert_fail("ber != ((void *)0)", "io.c", 208U, "ber_flush");
  }
  if (! ((int )sb->sb_opts.lbo_valid == 3)) {
    __assert_fail("( (sb)->sb_opts.lbo_valid == 0x3 )", "io.c", 210U,
                  "ber_flush");
  }
  if (! ((int )ber->ber_opts.lbo_valid == 2)) {
    __assert_fail("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 211U, "ber_flush");
  }
  if ((unsigned int )ber->ber_rwptr == (unsigned int )((void *)0)) {
    ber->ber_rwptr = ber->ber_buf;
  }
  towrite = (unsigned long )(ber->ber_ptr - ber->ber_rwptr);
  if (sb->sb_opts.lbo_debug) {
    if ((unsigned int )ber->ber_rwptr != (unsigned int )ber->ber_buf) {
      tmp = " (re-flush)";
    } else {
      tmp = "";
    }
    ber_pvt_log_printf(1, sb->sb_opts.lbo_debug,
                       "ber_flush: %ld bytes to sd %ld%s\n", towrite,
                       (long )sb->sb_fd, tmp);
    ber_log_bprint(2, sb->sb_opts.lbo_debug, (char const   *)ber->ber_rwptr,
                   towrite);
  }
  while (towrite > 0UL) {
    rc = ber_int_sb_write(sb, (void *)ber->ber_rwptr, towrite);
    if (rc <= 0L) {
      return (-1);
    }
    towrite -= (unsigned long )rc;
    ber->ber_rwptr += rc;
  }
  if (freeit) {
    ber_free(ber, 1);
  }
  return (0);
}
}

BerElement *ber_alloc_t(int options ) 
{ BerElement *ber ;
  void *tmp ;

  {
  tmp = ber_memcalloc(1UL, (unsigned long )sizeof(BerElement ));
  ber = (BerElement *)tmp;
  if ((unsigned int )ber == (unsigned int )((void *)0)) {
    return ((BerElement *)((void *)0));
  }
  ber->ber_opts.lbo_valid = (short)2;
  ber->ber_tag = 4294967295UL;
  ber->ber_opts.lbo_options = (unsigned short )options;
  ber->ber_opts.lbo_debug = ber_int_options.lbo_debug;
  if (! ((int )ber->ber_opts.lbo_valid == 2)) {
    __assert_fail("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 262U,
                  "ber_alloc_t");
  }
  return (ber);
}
}

BerElement *ber_alloc(void) 
{ BerElement *tmp ;

  {
  tmp = ber_alloc_t(0);
  return (tmp);
}
}

BerElement *der_alloc(void) 
{ BerElement *tmp ;

  {
  tmp = ber_alloc_t(1);
  return (tmp);
}
}

BerElement *ber_dup(BerElement *ber ) 
{ BerElement *new ;

  {
  if (! ((unsigned int )ber != (unsigned int )((void *)0))) {
    __assert_fail("ber != ((void *)0)", "io.c", 283U, "ber_dup");
  }
  if (! ((int )ber->ber_opts.lbo_valid == 2)) {
    __assert_fail("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 284U, "ber_dup");
  }
  new = ber_alloc_t((int )ber->ber_opts.lbo_options);
  if ((unsigned int )new == (unsigned int )((void *)0)) {
    return ((BerElement *)((void *)0));
  }
  *new = *ber;
  if (! ((int )new->ber_opts.lbo_valid == 2)) {
    __assert_fail("((new)->ber_opts.lbo_valid==0x2)", "io.c", 292U, "ber_dup");
  }
  return (new);
}
}

void ber_init2(BerElement *ber , struct berval *bv , int options ) 
{ 

  {
  if (! ((unsigned int )ber != (unsigned int )((void *)0))) {
    __assert_fail("ber != ((void *)0)", "io.c", 300U, "ber_init2");
  }
  memset((void *)((char *)ber), '\000', sizeof(BerElement ));
  ber->ber_opts.lbo_valid = (short)2;
  ber->ber_tag = 4294967295UL;
  ber->ber_opts.lbo_options = (unsigned short )((char )options);
  ber->ber_opts.lbo_debug = ber_int_options.lbo_debug;
  if ((unsigned int )bv != (unsigned int )((void *)0)) {
    ber->ber_buf = bv->bv_val;
    ber->ber_ptr = ber->ber_buf;
    ber->ber_end = ber->ber_buf + bv->bv_len;
  }
  if (! ((int )ber->ber_opts.lbo_valid == 2)) {
    __assert_fail("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 314U, "ber_init2");
  }
  return;
}
}

void ber_init_w_nullc(BerElement *ber , int options ) 
{ 

  {
  ber_init2(ber, (struct berval *)((void *)0), options);
  return;
}
}

BerElement *ber_init(struct berval *bv ) 
{ BerElement *ber ;
  ber_slen_t tmp ;

  {
  if (! ((unsigned int )bv != (unsigned int )((void *)0))) {
    __assert_fail("bv != ((void *)0)", "io.c", 333U, "ber_init");
  }
  if ((unsigned int )bv == (unsigned int )((void *)0)) {
    return ((BerElement *)((void *)0));
  }
  ber = ber_alloc_t(0);
  if ((unsigned int )ber == (unsigned int )((void *)0)) {
    return ((BerElement *)((void *)0));
  }
  tmp = ber_write(ber, (char const   *)bv->bv_val, bv->bv_len, 0);
  if ((unsigned long )tmp != bv->bv_len) {
    ber_free(ber, 1);
    return ((BerElement *)((void *)0));
  }
  ber_reset(ber, 1);
  return (ber);
}
}

int ber_flatten2(BerElement *ber , struct berval *bv , int alloc ) 
{ ber_len_t len ;
  void *tmp ;

  {
  if (! ((unsigned int )bv != (unsigned int )((void *)0))) {
    __assert_fail("bv != ((void *)0)", "io.c", 372U, "ber_flatten2");
  }
  if ((unsigned int )bv == (unsigned int )((void *)0)) {
    return (-1);
  }
  if ((unsigned int )ber == (unsigned int )((void *)0)) {
    bv->bv_val = (char *)((void *)0);
    bv->bv_len = 0UL;
  } else {
    len = (unsigned long )(ber->ber_ptr - ber->ber_buf);
    if (alloc) {
      tmp = ber_memalloc_x(len + 1UL, ber->ber_memctx);
      bv->bv_val = (char *)tmp;
      if ((unsigned int )bv->bv_val == (unsigned int )((void *)0)) {
        return (-1);
      }
      memmove((void *)bv->bv_val, (void const   *)ber->ber_buf,
              (unsigned int )len);
    } else {
      bv->bv_val = ber->ber_buf;
    }
    *(bv->bv_val + len) = (char )'\000';
    bv->bv_len = len;
  }
  return (0);
}
}

int ber_flatten(BerElement *ber , struct berval **bvPtr ) 
{ struct berval *bv ;
  int rc ;
  void *tmp ;

  {
  if (! ((unsigned int )bvPtr != (unsigned int )((void *)0))) {
    __assert_fail("bvPtr != ((void *)0)", "io.c", 409U, "ber_flatten");
  }
  if ((unsigned int )bvPtr == (unsigned int )((void *)0)) {
    return (-1);
  }
  tmp = ber_memalloc_x((unsigned long )sizeof(struct berval ), ber->ber_memctx);
  bv = (struct berval *)tmp;
  if ((unsigned int )bv == (unsigned int )((void *)0)) {
    return (-1);
  }
  rc = ber_flatten2(ber, bv, 1);
  if (rc == -1) {
    ber_memfree_x((void *)bv, ber->ber_memctx);
  } else {
    *bvPtr = bv;
  }
  return (rc);
}
}

void ber_reset(BerElement *ber , int was_writing ) 
{ 

  {
  if (! ((unsigned int )ber != (unsigned int )((void *)0))) {
    __assert_fail("ber != ((void *)0)", "io.c", 431U, "ber_reset");
  }
  if (! ((int )ber->ber_opts.lbo_valid == 2)) {
    __assert_fail("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 432U, "ber_reset");
  }
  if (was_writing) {
    ber->ber_end = ber->ber_ptr;
    ber->ber_ptr = ber->ber_buf;
  } else {
    ber->ber_ptr = ber->ber_end;
  }
  ber->ber_rwptr = (char *)((void *)0);
  return;
}
}

ber_tag_t ber_get_next(Sockbuf *sb , ber_len_t *len , BerElement *ber ) 
{ ber_slen_t sblen ;
  char buf[sizeof(ber->ber_len) - 1U] ;
  ber_len_t tlen ;
  int *tmp ;
  ber_tag_t tag ;
  unsigned char *p ;
  unsigned char *tmp___0 ;
  ber_len_t i ;
  unsigned char *tmp___1 ;
  int *tmp___2 ;
  int *tmp___3 ;
  int *tmp___4 ;
  int i___0 ;
  unsigned char *p___0 ;
  int llen ;
  unsigned char *tmp___5 ;
  int *tmp___6 ;
  int *tmp___7 ;
  unsigned char *tmp___8 ;
  char *tmp___9 ;
  int *tmp___10 ;
  int *tmp___11 ;
  ber_len_t l ;
  int *tmp___12 ;
  void *tmp___13 ;
  ber_slen_t res ;
  ber_slen_t to_go ;
  int *tmp___14 ;
  int *tmp___15 ;

  {
  if (! ((unsigned int )sb != (unsigned int )((void *)0))) {
    __assert_fail("sb != ((void *)0)", "io.c", 459U, "ber_get_next");
  }
  if (! ((unsigned int )len != (unsigned int )((void *)0))) {
    __assert_fail("len != ((void *)0)", "io.c", 460U, "ber_get_next");
  }
  if (! ((unsigned int )ber != (unsigned int )((void *)0))) {
    __assert_fail("ber != ((void *)0)", "io.c", 461U, "ber_get_next");
  }
  if (! ((int )sb->sb_opts.lbo_valid == 3)) {
    __assert_fail("( (sb)->sb_opts.lbo_valid == 0x3 )", "io.c", 463U,
                  "ber_get_next");
  }
  if (! ((int )ber->ber_opts.lbo_valid == 2)) {
    __assert_fail("((ber)->ber_opts.lbo_valid==0x2)", "io.c", 464U,
                  "ber_get_next");
  }
  ber_pvt_log_printf(1, ber->ber_opts.lbo_debug, "ber_get_next\n");
  if ((unsigned int )ber->ber_rwptr == (unsigned int )((void *)0)) {
    if (! ((unsigned int )ber->ber_buf == (unsigned int )((void *)0))) {
      __assert_fail("ber->ber_buf == ((void *)0)", "io.c", 491U, "ber_get_next");
    }
    ber->ber_rwptr = (char *)(& ber->ber_len) - 1;
    ber->ber_ptr = ber->ber_rwptr;
    ber->ber_tag = 0UL;
  }
  while (1) {
    if ((unsigned int )ber->ber_rwptr > (unsigned int )((char *)(& ber->ber_tag))) {
      if (! ((unsigned int )ber->ber_rwptr < (unsigned int )(((char *)(& ber->ber_len) + 8) - 1))) {
        break;
      }
    } else {
      break;
    }
    tlen = 0UL;
    tmp = __errno_location();
    *tmp = 0;
    sblen = ber_int_sb_read(sb, (void *)ber->ber_rwptr,
                            (unsigned long )((((char *)(& ber->ber_len) + 8) - 1) - ber->ber_rwptr));
    if (sblen <= 0L) {
      return (4294967295UL);
    }
    ber->ber_rwptr += sblen;
    if ((unsigned int )ber->ber_ptr == (unsigned int )((char *)(& ber->ber_len) - 1)) {
      p = (unsigned char *)ber->ber_ptr;
      tmp___0 = p;
      p ++;
      tag = (unsigned long )*tmp___0;
      if ((tag & 31UL) == 31UL) {
        i = 1UL;
        while ((unsigned int )((char *)p) < (unsigned int )ber->ber_rwptr) {
          tag <<= 8;
          tmp___1 = p;
          p ++;
          tag |= (unsigned long )*tmp___1;
          if (! (tag & 128UL)) {
            break;
          }
          if (i == (unsigned long )(sizeof(ber_tag_t ) - 1U)) {
            tmp___2 = __errno_location();
            *tmp___2 = 34;
            return (4294967295UL);
          }
          i ++;
        }
        if ((unsigned int )((char *)p) == (unsigned int )ber->ber_rwptr) {
          tmp___3 = __errno_location();
          *tmp___3 = 11;
          return (4294967295UL);
        }
      }
      ber->ber_tag = tag;
      ber->ber_ptr = (char *)p;
    }
    if ((unsigned int )ber->ber_ptr == (unsigned int )ber->ber_rwptr) {
      tmp___4 = __errno_location();
      *tmp___4 = 11;
      return (4294967295UL);
    }
    if ((int )*(ber->ber_ptr) & 128) {
      p___0 = (unsigned char *)ber->ber_ptr;
      tmp___5 = p___0;
      p___0 ++;
      llen = (int )*tmp___5 & 127;
      if (llen > (int )sizeof(ber_len_t )) {
        tmp___6 = __errno_location();
        *tmp___6 = 34;
        return (4294967295UL);
      }
      if (ber->ber_rwptr - (char *)p___0 < llen) {
        tmp___7 = __errno_location();
        *tmp___7 = 11;
        return (4294967295UL);
      }
      i___0 = 0;
      while (i___0 < llen) {
        tlen <<= 8;
        tmp___8 = p___0;
        p___0 ++;
        tlen |= (unsigned long )*tmp___8;
        i___0 ++;
      }
      ber->ber_ptr = (char *)p___0;
    } else {
      tmp___9 = ber->ber_ptr;
      (ber->ber_ptr) ++;
      tlen = (unsigned long )*((unsigned char *)tmp___9);
    }
    if ((unsigned int )ber->ber_ptr < (unsigned int )((char *)(& ber->ber_usertag))) {
      if ((unsigned int )ber->ber_rwptr < (unsigned int )((char *)(& ber->ber_usertag))) {
        sblen = (long )(ber->ber_rwptr - ber->ber_ptr);
      } else {
        sblen = (long )((char *)(& ber->ber_usertag) - ber->ber_ptr);
      }
      memmove((void *)(buf), (void const   *)ber->ber_ptr, (unsigned int )sblen);
      ber->ber_ptr += sblen;
    } else {
      sblen = 0L;
    }
    ber->ber_len = tlen;
    if (ber->ber_len == 0UL) {
      tmp___10 = __errno_location();
      *tmp___10 = 34;
      return (4294967295UL);
    }
    if (sb->sb_max_incoming) {
      if (ber->ber_len > sb->sb_max_incoming) {
        ber_pvt_log_printf(8, ber->ber_opts.lbo_debug,
                           "ber_get_next: sockbuf_max_incoming exceeded (%ld > %ld)\n",
                           ber->ber_len, sb->sb_max_incoming);
        tmp___11 = __errno_location();
        *tmp___11 = 34;
        return (4294967295UL);
      }
    }
    if ((unsigned int )ber->ber_buf == (unsigned int )((void *)0)) {
      l = (unsigned long )(ber->ber_rwptr - ber->ber_ptr);
      if (ber->ber_len < (unsigned long )sblen + l) {
        tmp___12 = __errno_location();
        *tmp___12 = 34;
        return (4294967295UL);
      }
      tmp___13 = ber_memalloc_x(ber->ber_len + 1UL, ber->ber_memctx);
      ber->ber_buf = (char *)tmp___13;
      if ((unsigned int )ber->ber_buf == (unsigned int )((void *)0)) {
        return (4294967295UL);
      }
      ber->ber_end = ber->ber_buf + ber->ber_len;
      if (sblen) {
        memmove((void *)ber->ber_buf, (void const   *)(buf),
                (unsigned int )sblen);
      }
      if (l > 0UL) {
        memmove((void *)(ber->ber_buf + sblen), (void const   *)ber->ber_ptr,
                (unsigned int )l);
        sblen = (long )((unsigned long )sblen + l);
      }
      *(ber->ber_end) = (char )'\000';
      ber->ber_ptr = ber->ber_buf;
      ber->ber_usertag = 0UL;
      if ((unsigned long )sblen == ber->ber_len) {
        goto done;
      }
      ber->ber_rwptr = ber->ber_buf + sblen;
    }
  }
  if ((unsigned int )ber->ber_rwptr >= (unsigned int )ber->ber_buf) {
    if ((unsigned int )ber->ber_rwptr < (unsigned int )ber->ber_end) {
      to_go = (long )(ber->ber_end - ber->ber_rwptr);
      if (! (to_go > 0L)) {
        __assert_fail("to_go > 0", "io.c", 644U, "ber_get_next");
      }
      tmp___14 = __errno_location();
      *tmp___14 = 0;
      res = ber_int_sb_read(sb, (void *)ber->ber_rwptr, (unsigned long )to_go);
      if (res <= 0L) {
        return (4294967295UL);
      }
      ber->ber_rwptr += res;
      if (res < to_go) {
        tmp___15 = __errno_location();
        *tmp___15 = 11;
        return (4294967295UL);
      }
      done: 
      ber->ber_rwptr = (char *)((void *)0);
      *len = ber->ber_len;
      if (ber->ber_opts.lbo_debug) {
        ber_pvt_log_printf(1, ber->ber_opts.lbo_debug,
                           "ber_get_next: tag 0x%lx len %ld contents:\n",
                           ber->ber_tag, ber->ber_len);
        ber_log_dump(16, ber->ber_opts.lbo_debug, ber, 1);
      }
      return (ber->ber_tag);
    }
  }
  __assert_fail("0", "io.c", 671U, "ber_get_next");
  return (4294967295UL);
}
}

char *ber_start(BerElement *ber ) 
{ 

  {
  return (ber->ber_buf);
}
}

int ber_len(BerElement *ber ) 
{ 

  {
  return (ber->ber_end - ber->ber_buf);
}
}

int ber_ptrlen(BerElement *ber ) 
{ 

  {
  return (ber->ber_ptr - ber->ber_buf);
}
}

void ber_rewind(BerElement *ber ) 
{ 

  {
  ber->ber_rwptr = (char *)((void *)0);
  ber->ber_sos = (struct seqorset *)((void *)0);
  ber->ber_end = ber->ber_ptr;
  ber->ber_ptr = ber->ber_buf;
  return;
}
}

int ber_remaining(BerElement *ber ) 
{ 

  {
  return (ber->ber_end - ber->ber_ptr);
}
}

