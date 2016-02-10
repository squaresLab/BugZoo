#line 1021 "tif_lzw.c"
void *_coverage_fout ;
#line 214 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h"
typedef unsigned long size_t;
#line 34 "/usr/include/bits/types.h"
typedef unsigned char __u_char;
#line 35 "/usr/include/bits/types.h"
typedef unsigned short __u_short;
#line 36 "/usr/include/bits/types.h"
typedef unsigned int __u_int;
#line 37 "/usr/include/bits/types.h"
typedef unsigned long __u_long;
#line 40 "/usr/include/bits/types.h"
typedef signed char __int8_t;
#line 41 "/usr/include/bits/types.h"
typedef unsigned char __uint8_t;
#line 42 "/usr/include/bits/types.h"
typedef short __int16_t;
#line 43 "/usr/include/bits/types.h"
typedef unsigned short __uint16_t;
#line 44 "/usr/include/bits/types.h"
typedef int __int32_t;
#line 45 "/usr/include/bits/types.h"
typedef unsigned int __uint32_t;
#line 47 "/usr/include/bits/types.h"
typedef long __int64_t;
#line 48 "/usr/include/bits/types.h"
typedef unsigned long __uint64_t;
#line 56 "/usr/include/bits/types.h"
typedef long __quad_t;
#line 57 "/usr/include/bits/types.h"
typedef unsigned long __u_quad_t;
#line 137 "/usr/include/bits/types.h"
typedef unsigned long __dev_t;
#line 138 "/usr/include/bits/types.h"
typedef unsigned int __uid_t;
#line 139 "/usr/include/bits/types.h"
typedef unsigned int __gid_t;
#line 140 "/usr/include/bits/types.h"
typedef unsigned long __ino_t;
#line 141 "/usr/include/bits/types.h"
typedef unsigned long __ino64_t;
#line 142 "/usr/include/bits/types.h"
typedef unsigned int __mode_t;
#line 143 "/usr/include/bits/types.h"
typedef unsigned long __nlink_t;
#line 144 "/usr/include/bits/types.h"
typedef long __off_t;
#line 145 "/usr/include/bits/types.h"
typedef long __off64_t;
#line 146 "/usr/include/bits/types.h"
typedef int __pid_t;
#line 147 "/usr/include/bits/types.h"
struct __anonstruct___fsid_t_1 {
   int __val[2] ;
};
#line 147 "/usr/include/bits/types.h"
typedef struct __anonstruct___fsid_t_1 __fsid_t;
#line 148 "/usr/include/bits/types.h"
typedef long __clock_t;
#line 149 "/usr/include/bits/types.h"
typedef unsigned long __rlim_t;
#line 150 "/usr/include/bits/types.h"
typedef unsigned long __rlim64_t;
#line 151 "/usr/include/bits/types.h"
typedef unsigned int __id_t;
#line 152 "/usr/include/bits/types.h"
typedef long __time_t;
#line 153 "/usr/include/bits/types.h"
typedef unsigned int __useconds_t;
#line 154 "/usr/include/bits/types.h"
typedef long __suseconds_t;
#line 156 "/usr/include/bits/types.h"
typedef int __daddr_t;
#line 157 "/usr/include/bits/types.h"
typedef long __swblk_t;
#line 158 "/usr/include/bits/types.h"
typedef int __key_t;
#line 161 "/usr/include/bits/types.h"
typedef int __clockid_t;
#line 164 "/usr/include/bits/types.h"
typedef void *__timer_t;
#line 167 "/usr/include/bits/types.h"
typedef long __blksize_t;
#line 172 "/usr/include/bits/types.h"
typedef long __blkcnt_t;
#line 173 "/usr/include/bits/types.h"
typedef long __blkcnt64_t;
#line 176 "/usr/include/bits/types.h"
typedef unsigned long __fsblkcnt_t;
#line 177 "/usr/include/bits/types.h"
typedef unsigned long __fsblkcnt64_t;
#line 180 "/usr/include/bits/types.h"
typedef unsigned long __fsfilcnt_t;
#line 181 "/usr/include/bits/types.h"
typedef unsigned long __fsfilcnt64_t;
#line 183 "/usr/include/bits/types.h"
typedef long __ssize_t;
#line 187 "/usr/include/bits/types.h"
typedef __off64_t __loff_t;
#line 188 "/usr/include/bits/types.h"
typedef __quad_t *__qaddr_t;
#line 189 "/usr/include/bits/types.h"
typedef char *__caddr_t;
#line 192 "/usr/include/bits/types.h"
typedef long __intptr_t;
#line 195 "/usr/include/bits/types.h"
typedef unsigned int __socklen_t;
#line 35 "/usr/include/sys/types.h"
typedef __u_char u_char;
#line 36 "/usr/include/sys/types.h"
typedef __u_short u_short;
#line 37 "/usr/include/sys/types.h"
typedef __u_int u_int;
#line 38 "/usr/include/sys/types.h"
typedef __u_long u_long;
#line 39 "/usr/include/sys/types.h"
typedef __quad_t quad_t;
#line 40 "/usr/include/sys/types.h"
typedef __u_quad_t u_quad_t;
#line 41 "/usr/include/sys/types.h"
typedef __fsid_t fsid_t;
#line 46 "/usr/include/sys/types.h"
typedef __loff_t loff_t;
#line 50 "/usr/include/sys/types.h"
typedef __ino_t ino_t;
#line 62 "/usr/include/sys/types.h"
typedef __dev_t dev_t;
#line 67 "/usr/include/sys/types.h"
typedef __gid_t gid_t;
#line 72 "/usr/include/sys/types.h"
typedef __mode_t mode_t;
#line 77 "/usr/include/sys/types.h"
typedef __nlink_t nlink_t;
#line 82 "/usr/include/sys/types.h"
typedef __uid_t uid_t;
#line 88 "/usr/include/sys/types.h"
typedef __off_t off_t;
#line 100 "/usr/include/sys/types.h"
typedef __pid_t pid_t;
#line 105 "/usr/include/sys/types.h"
typedef __id_t id_t;
#line 110 "/usr/include/sys/types.h"
typedef __ssize_t ssize_t;
#line 116 "/usr/include/sys/types.h"
typedef __daddr_t daddr_t;
#line 117 "/usr/include/sys/types.h"
typedef __caddr_t caddr_t;
#line 123 "/usr/include/sys/types.h"
typedef __key_t key_t;
#line 77 "/usr/include/time.h"
typedef __time_t time_t;
#line 93 "/usr/include/time.h"
typedef __clockid_t clockid_t;
#line 105 "/usr/include/time.h"
typedef __timer_t timer_t;
#line 151 "/usr/include/sys/types.h"
typedef unsigned long ulong;
#line 152 "/usr/include/sys/types.h"
typedef unsigned short ushort;
#line 153 "/usr/include/sys/types.h"
typedef unsigned int uint;
#line 195 "/usr/include/sys/types.h"
typedef char int8_t;
#line 196 "/usr/include/sys/types.h"
typedef short int16_t;
#line 197 "/usr/include/sys/types.h"
typedef int int32_t;
#line 198 "/usr/include/sys/types.h"
typedef long long int64_t;
#line 201 "/usr/include/sys/types.h"
typedef unsigned char u_int8_t;
#line 202 "/usr/include/sys/types.h"
typedef unsigned short u_int16_t;
#line 203 "/usr/include/sys/types.h"
typedef unsigned int u_int32_t;
#line 204 "/usr/include/sys/types.h"
typedef unsigned long long u_int64_t;
#line 206 "/usr/include/sys/types.h"
typedef int register_t;
#line 23 "/usr/include/bits/sigset.h"
typedef int __sig_atomic_t;
#line 28 "/usr/include/bits/sigset.h"
struct __anonstruct___sigset_t_2 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
};
#line 28 "/usr/include/bits/sigset.h"
typedef struct __anonstruct___sigset_t_2 __sigset_t;
#line 38 "/usr/include/sys/select.h"
typedef __sigset_t sigset_t;
#line 121 "/usr/include/time.h"
struct timespec {
   __time_t tv_sec ;
   long tv_nsec ;
};
#line 69 "/usr/include/bits/time.h"
struct timeval {
   __time_t tv_sec ;
   __suseconds_t tv_usec ;
};
#line 49 "/usr/include/sys/select.h"
typedef __suseconds_t suseconds_t;
#line 55 "/usr/include/sys/select.h"
typedef long __fd_mask;
#line 67 "/usr/include/sys/select.h"
struct __anonstruct_fd_set_3 {
   __fd_mask __fds_bits[1024UL / (8UL * sizeof(__fd_mask ))] ;
};
#line 67 "/usr/include/sys/select.h"
typedef struct __anonstruct_fd_set_3 fd_set;
#line 85 "/usr/include/sys/select.h"
typedef __fd_mask fd_mask;
#line 235 "/usr/include/sys/types.h"
typedef __blkcnt_t blkcnt_t;
#line 239 "/usr/include/sys/types.h"
typedef __fsblkcnt_t fsblkcnt_t;
#line 243 "/usr/include/sys/types.h"
typedef __fsfilcnt_t fsfilcnt_t;
#line 50 "/usr/include/bits/pthreadtypes.h"
typedef unsigned long pthread_t;
#line 53 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_attr_t_4 {
   char __size[56] ;
   long __align ;
};
#line 53 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_attr_t_4 pthread_attr_t;
#line 61 "/usr/include/bits/pthreadtypes.h"
struct __pthread_internal_list {
   struct __pthread_internal_list *__prev ;
   struct __pthread_internal_list *__next ;
};
#line 61 "/usr/include/bits/pthreadtypes.h"
typedef struct __pthread_internal_list __pthread_list_t;
#line 76 "/usr/include/bits/pthreadtypes.h"
struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   unsigned int __nusers ;
   int __kind ;
   int __spins ;
   __pthread_list_t __list ;
};
#line 76 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_mutex_t_5 {
   struct __pthread_mutex_s __data ;
   char __size[40] ;
   long __align ;
};
#line 76 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutex_t_5 pthread_mutex_t;
#line 106 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_mutexattr_t_6 {
   char __size[4] ;
   int __align ;
};
#line 106 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_mutexattr_t_6 pthread_mutexattr_t;
#line 115 "/usr/include/bits/pthreadtypes.h"
struct __anonstruct___data_8 {
   int __lock ;
   unsigned int __futex ;
   unsigned long long __total_seq ;
   unsigned long long __wakeup_seq ;
   unsigned long long __woken_seq ;
   void *__mutex ;
   unsigned int __nwaiters ;
   unsigned int __broadcast_seq ;
};
#line 115 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_cond_t_7 {
   struct __anonstruct___data_8 __data ;
   char __size[48] ;
   long long __align ;
};
#line 115 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_cond_t_7 pthread_cond_t;
#line 132 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_condattr_t_9 {
   char __size[4] ;
   int __align ;
};
#line 132 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_condattr_t_9 pthread_condattr_t;
#line 140 "/usr/include/bits/pthreadtypes.h"
typedef unsigned int pthread_key_t;
#line 144 "/usr/include/bits/pthreadtypes.h"
typedef int pthread_once_t;
#line 150 "/usr/include/bits/pthreadtypes.h"
struct __anonstruct___data_11 {
   int __lock ;
   unsigned int __nr_readers ;
   unsigned int __readers_wakeup ;
   unsigned int __writer_wakeup ;
   unsigned int __nr_readers_queued ;
   unsigned int __nr_writers_queued ;
   int __writer ;
   int __pad1 ;
   unsigned long __pad2 ;
   unsigned long __pad3 ;
   unsigned int __flags ;
};
#line 150 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_rwlock_t_10 {
   struct __anonstruct___data_11 __data ;
   char __size[56] ;
   long __align ;
};
#line 150 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_rwlock_t_10 pthread_rwlock_t;
#line 188 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_rwlockattr_t_12 {
   char __size[8] ;
   long __align ;
};
#line 188 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_rwlockattr_t_12 pthread_rwlockattr_t;
#line 198 "/usr/include/bits/pthreadtypes.h"
typedef int volatile   pthread_spinlock_t;
#line 203 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_barrier_t_13 {
   char __size[32] ;
   long __align ;
};
#line 203 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_barrier_t_13 pthread_barrier_t;
#line 209 "/usr/include/bits/pthreadtypes.h"
union __anonunion_pthread_barrierattr_t_14 {
   char __size[4] ;
   int __align ;
};
#line 209 "/usr/include/bits/pthreadtypes.h"
typedef union __anonunion_pthread_barrierattr_t_14 pthread_barrierattr_t;
#line 155 "/usr/include/bits/fcntl.h"
struct flock {
   short l_type ;
   short l_whence ;
   __off_t l_start ;
   __off_t l_len ;
   __pid_t l_pid ;
};
#line 55 "/usr/include/search.h"
typedef int (*__compar_fn_t)(void const   * , void const   * );
#line 63
enum __anonenum_ACTION_15 {
    FIND = 0,
    ENTER = 1
} ;
#line 63 "/usr/include/search.h"
typedef enum __anonenum_ACTION_15 ACTION;
#line 70 "/usr/include/search.h"
struct entry {
   char *key ;
   void *data ;
};
#line 70 "/usr/include/search.h"
typedef struct entry ENTRY;
#line 78
struct _ENTRY;
#line 78
struct _ENTRY;
#line 119
enum __anonenum_VISIT_16 {
    preorder = 0,
    postorder = 1,
    endorder = 2,
    leaf = 3
} ;
#line 119 "/usr/include/search.h"
typedef enum __anonenum_VISIT_16 VISIT;
#line 145 "/usr/include/search.h"
typedef void (*__action_fn_t)(void const   *__nodep , VISIT __value ,
                              int __level );
#line 65 "tiff.h"
typedef signed char int8;
#line 67 "tiff.h"
typedef unsigned char uint8;
#line 69 "tiff.h"
typedef short int16;
#line 71 "tiff.h"
typedef unsigned short uint16;
#line 74 "tiff.h"
typedef int int32;
#line 76 "tiff.h"
typedef unsigned int uint32;
#line 85
enum TIFFIgnoreSense {
    TIS_STORE = 0,
    TIS_EXTRACT = 1,
    TIS_EMPTY = 2
} ;
#line 95 "tiff.h"
struct __anonstruct_TIFFHeader_17 {
   uint16 tiff_magic ;
   uint16 tiff_version ;
   uint32 tiff_diroff ;
};
#line 95 "tiff.h"
typedef struct __anonstruct_TIFFHeader_17 TIFFHeader;
#line 116 "tiff.h"
struct __anonstruct_TIFFDirEntry_18 {
   uint16 tdir_tag ;
   uint16 tdir_type ;
   uint32 tdir_count ;
   uint32 tdir_offset ;
};
#line 116 "tiff.h"
typedef struct __anonstruct_TIFFDirEntry_18 TIFFDirEntry;
#line 137
enum __anonenum_TIFFDataType_19 {
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
} ;
#line 137 "tiff.h"
typedef enum __anonenum_TIFFDataType_19 TIFFDataType;
#line 40 "tiffio.h"
struct tiff;
#line 40 "tiffio.h"
typedef struct tiff TIFF;
#line 61 "tiffio.h"
typedef uint32 ttag_t;
#line 62 "tiffio.h"
typedef uint16 tdir_t;
#line 63 "tiffio.h"
typedef uint16 tsample_t;
#line 64 "tiffio.h"
typedef uint32 tstrip_t;
#line 65 "tiffio.h"
typedef uint32 ttile_t;
#line 66 "tiffio.h"
typedef int32 tsize_t;
#line 67 "tiffio.h"
typedef void *tdata_t;
#line 68 "tiffio.h"
typedef uint32 toff_t;
#line 96 "tiffio.h"
typedef void *thandle_t;
#line 132 "tiffio.h"
typedef unsigned char TIFFRGBValue;
#line 134 "tiffio.h"
struct __anonstruct_TIFFDisplay_20 {
   float d_mat[3][3] ;
   float d_YCR ;
   float d_YCG ;
   float d_YCB ;
   uint32 d_Vrwr ;
   uint32 d_Vrwg ;
   uint32 d_Vrwb ;
   float d_Y0R ;
   float d_Y0G ;
   float d_Y0B ;
   float d_gammaR ;
   float d_gammaG ;
   float d_gammaB ;
};
#line 134 "tiffio.h"
typedef struct __anonstruct_TIFFDisplay_20 TIFFDisplay;
#line 150 "tiffio.h"
struct __anonstruct_TIFFYCbCrToRGB_21 {
   TIFFRGBValue *clamptab ;
   int *Cr_r_tab ;
   int *Cb_b_tab ;
   int32 *Cr_g_tab ;
   int32 *Cb_g_tab ;
   int32 *Y_tab ;
};
#line 150 "tiffio.h"
typedef struct __anonstruct_TIFFYCbCrToRGB_21 TIFFYCbCrToRGB;
#line 159 "tiffio.h"
struct __anonstruct_TIFFCIELabToRGB_22 {
   int range ;
   float rstep ;
   float gstep ;
   float bstep ;
   float X0 ;
   float Y0 ;
   float Z0 ;
   TIFFDisplay display ;
   float Yr2r[1501] ;
   float Yg2g[1501] ;
   float Yb2b[1501] ;
};
#line 159 "tiffio.h"
typedef struct __anonstruct_TIFFCIELabToRGB_22 TIFFCIELabToRGB;
#line 173
struct _TIFFRGBAImage;
#line 173 "tiffio.h"
typedef struct _TIFFRGBAImage TIFFRGBAImage;
#line 184 "tiffio.h"
typedef void (*tileContigRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                  uint32  , uint32  , uint32  , int32  ,
                                  int32  , unsigned char * );
#line 187 "tiffio.h"
typedef void (*tileSeparateRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                    uint32  , uint32  , uint32  , int32  ,
                                    int32  , unsigned char * , unsigned char * ,
                                    unsigned char * , unsigned char * );
#line 193 "tiffio.h"
union __anonunion_put_23 {
   void (*any)(TIFFRGBAImage * ) ;
   void (*contig)(TIFFRGBAImage * , uint32 * , uint32  , uint32  , uint32  ,
                  uint32  , int32  , int32  , unsigned char * ) ;
   void (*separate)(TIFFRGBAImage * , uint32 * , uint32  , uint32  , uint32  ,
                    uint32  , int32  , int32  , unsigned char * ,
                    unsigned char * , unsigned char * , unsigned char * ) ;
};
#line 193 "tiffio.h"
struct _TIFFRGBAImage {
   TIFF *tif ;
   int stoponerr ;
   int isContig ;
   int alpha ;
   uint32 width ;
   uint32 height ;
   uint16 bitspersample ;
   uint16 samplesperpixel ;
   uint16 orientation ;
   uint16 req_orientation ;
   uint16 photometric ;
   uint16 *redcmap ;
   uint16 *greencmap ;
   uint16 *bluecmap ;
   int (*get)(TIFFRGBAImage * , uint32 * , uint32  , uint32  ) ;
   union __anonunion_put_23 put ;
   TIFFRGBValue *Map ;
   uint32 **BWmap ;
   uint32 **PALmap ;
   TIFFYCbCrToRGB *ycbcr ;
   TIFFCIELabToRGB *cielab ;
   int row_offset ;
   int col_offset ;
};
#line 241 "tiffio.h"
typedef int (*TIFFInitMethod)(TIFF * , int  );
#line 242 "tiffio.h"
struct __anonstruct_TIFFCodec_24 {
   char *name ;
   uint16 scheme ;
   int (*init)(TIFF * , int  ) ;
};
#line 242 "tiffio.h"
typedef struct __anonstruct_TIFFCodec_24 TIFFCodec;
#line 46 "/usr/include/stdio.h"
struct _IO_FILE;
#line 46 "/usr/include/stdio.h"
typedef struct _IO_FILE FILE;
#line 62 "/usr/include/stdio.h"
typedef struct _IO_FILE __FILE;
#line 326 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h"
typedef int wchar_t;
#line 355 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stddef.h"
typedef unsigned int wint_t;
#line 76 "/usr/include/wchar.h"
union __anonunion___value_26 {
   wint_t __wch ;
   char __wchb[4] ;
};
#line 76 "/usr/include/wchar.h"
struct __anonstruct___mbstate_t_25 {
   int __count ;
   union __anonunion___value_26 __value ;
};
#line 76 "/usr/include/wchar.h"
typedef struct __anonstruct___mbstate_t_25 __mbstate_t;
#line 26 "/usr/include/_G_config.h"
struct __anonstruct__G_fpos_t_27 {
   __off_t __pos ;
   __mbstate_t __state ;
};
#line 26 "/usr/include/_G_config.h"
typedef struct __anonstruct__G_fpos_t_27 _G_fpos_t;
#line 31 "/usr/include/_G_config.h"
struct __anonstruct__G_fpos64_t_28 {
   __off64_t __pos ;
   __mbstate_t __state ;
};
#line 31 "/usr/include/_G_config.h"
typedef struct __anonstruct__G_fpos64_t_28 _G_fpos64_t;
#line 37 "/usr/include/gconv.h"
enum __anonenum_29 {
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
#line 55
enum __anonenum_30 {
    __GCONV_IS_LAST = 1,
    __GCONV_IGNORE_ERRORS = 2
} ;
#line 63
struct __gconv_step;
#line 63
struct __gconv_step;
#line 64
struct __gconv_step_data;
#line 64
struct __gconv_step_data;
#line 65
struct __gconv_loaded_object;
#line 65
struct __gconv_loaded_object;
#line 66
struct __gconv_trans_data;
#line 66
struct __gconv_trans_data;
#line 70 "/usr/include/gconv.h"
typedef int (*__gconv_fct)(struct __gconv_step * , struct __gconv_step_data * ,
                           unsigned char const   ** , unsigned char const   * ,
                           unsigned char ** , size_t * , int  , int  );
#line 75 "/usr/include/gconv.h"
typedef wint_t (*__gconv_btowc_fct)(struct __gconv_step * , unsigned char  );
#line 78 "/usr/include/gconv.h"
typedef int (*__gconv_init_fct)(struct __gconv_step * );
#line 79 "/usr/include/gconv.h"
typedef void (*__gconv_end_fct)(struct __gconv_step * );
#line 83 "/usr/include/gconv.h"
typedef int (*__gconv_trans_fct)(struct __gconv_step * ,
                                 struct __gconv_step_data * , void * ,
                                 unsigned char const   * ,
                                 unsigned char const   ** ,
                                 unsigned char const   * , unsigned char ** ,
                                 size_t * );
#line 91 "/usr/include/gconv.h"
typedef int (*__gconv_trans_context_fct)(void * , unsigned char const   * ,
                                         unsigned char const   * ,
                                         unsigned char * , unsigned char * );
#line 96 "/usr/include/gconv.h"
typedef int (*__gconv_trans_query_fct)(char const   * , char const   *** ,
                                       size_t * );
#line 100 "/usr/include/gconv.h"
typedef int (*__gconv_trans_init_fct)(void ** , char const   * );
#line 101 "/usr/include/gconv.h"
typedef void (*__gconv_trans_end_fct)(void * );
#line 103 "/usr/include/gconv.h"
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
#line 115 "/usr/include/gconv.h"
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
#line 145 "/usr/include/gconv.h"
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
#line 172 "/usr/include/gconv.h"
struct __gconv_info {
   size_t __nsteps ;
   struct __gconv_step *__steps ;
   struct __gconv_step_data __data[] ;
};
#line 172 "/usr/include/gconv.h"
typedef struct __gconv_info *__gconv_t;
#line 45 "/usr/include/_G_config.h"
struct __anonstruct___combined_32 {
   struct __gconv_info __cd ;
   struct __gconv_step_data __data ;
};
#line 45 "/usr/include/_G_config.h"
union __anonunion__G_iconv_t_31 {
   struct __gconv_info __cd ;
   struct __anonstruct___combined_32 __combined ;
};
#line 45 "/usr/include/_G_config.h"
typedef union __anonunion__G_iconv_t_31 _G_iconv_t;
#line 55 "/usr/include/_G_config.h"
typedef short _G_int16_t;
#line 56 "/usr/include/_G_config.h"
typedef int _G_int32_t;
#line 57 "/usr/include/_G_config.h"
typedef unsigned short _G_uint16_t;
#line 58 "/usr/include/_G_config.h"
typedef unsigned int _G_uint32_t;
#line 43 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h"
typedef __builtin_va_list __gnuc_va_list;
#line 167 "/usr/include/libio.h"
struct _IO_jump_t;
#line 167
struct _IO_jump_t;
#line 167
struct _IO_FILE;
#line 177 "/usr/include/libio.h"
typedef void _IO_lock_t;
#line 183 "/usr/include/libio.h"
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
#line 203
enum __codecvt_result {
    __codecvt_ok = 0,
    __codecvt_partial = 1,
    __codecvt_error = 2,
    __codecvt_noconv = 3
} ;
#line 268 "/usr/include/libio.h"
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
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
#line 338 "/usr/include/libio.h"
typedef struct _IO_FILE _IO_FILE;
#line 341
struct _IO_FILE_plus;
#line 341
struct _IO_FILE_plus;
#line 361 "/usr/include/libio.h"
typedef __ssize_t __io_read_fn(void *__cookie , char *__buf , size_t __nbytes );
#line 369 "/usr/include/libio.h"
typedef __ssize_t __io_write_fn(void *__cookie , char const   *__buf ,
                                size_t __n );
#line 378 "/usr/include/libio.h"
typedef int __io_seek_fn(void *__cookie , __off64_t *__pos , int __w );
#line 381 "/usr/include/libio.h"
typedef int __io_close_fn(void *__cookie );
#line 88 "/usr/include/stdio.h"
typedef _G_fpos_t fpos_t;
#line 105 "/usr/lib/gcc/x86_64-redhat-linux/4.1.2/include/stdarg.h"
typedef __gnuc_va_list va_list;
#line 259 "tiffio.h"
typedef void (*TIFFErrorHandler)(char const   * , char const   * , va_list  );
#line 260 "tiffio.h"
typedef void (*TIFFErrorHandlerExt)(thandle_t  , char const   * ,
                                    char const   * , va_list  );
#line 261 "tiffio.h"
typedef tsize_t (*TIFFReadWriteProc)(thandle_t  , tdata_t  , tsize_t  );
#line 262 "tiffio.h"
typedef toff_t (*TIFFSeekProc)(thandle_t  , toff_t  , int  );
#line 263 "tiffio.h"
typedef int (*TIFFCloseProc)(thandle_t  );
#line 264 "tiffio.h"
typedef toff_t (*TIFFSizeProc)(thandle_t  );
#line 265 "tiffio.h"
typedef int (*TIFFMapFileProc)(thandle_t  , tdata_t * , toff_t * );
#line 266 "tiffio.h"
typedef void (*TIFFUnmapFileProc)(thandle_t  , tdata_t  , toff_t  );
#line 267 "tiffio.h"
typedef void (*TIFFExtendProc)(TIFF * );
#line 301 "tiffio.h"
struct __anonstruct_TIFFFieldInfo_33 {
   ttag_t field_tag ;
   short field_readcount ;
   short field_writecount ;
   TIFFDataType field_type ;
   unsigned short field_bit ;
   unsigned char field_oktochange ;
   unsigned char field_passcount ;
   char *field_name ;
};
#line 301 "tiffio.h"
typedef struct __anonstruct_TIFFFieldInfo_33 TIFFFieldInfo;
#line 312 "tiffio.h"
struct _TIFFTagValue {
   TIFFFieldInfo const   *info ;
   int count ;
   void *value ;
};
#line 312 "tiffio.h"
typedef struct _TIFFTagValue TIFFTagValue;
#line 325 "tiffio.h"
typedef int (*TIFFVSetMethod)(TIFF * , ttag_t  , va_list  );
#line 326 "tiffio.h"
typedef int (*TIFFVGetMethod)(TIFF * , ttag_t  , va_list  );
#line 327 "tiffio.h"
typedef void (*TIFFPrintMethod)(TIFF * , FILE * , long  );
#line 329 "tiffio.h"
struct __anonstruct_TIFFTagMethods_34 {
   int (*vsetfield)(TIFF * , ttag_t  , va_list  ) ;
   int (*vgetfield)(TIFF * , ttag_t  , va_list  ) ;
   void (*printdir)(TIFF * , FILE * , long  ) ;
};
#line 329 "tiffio.h"
typedef struct __anonstruct_TIFFTagMethods_34 TIFFTagMethods;
#line 36 "tif_dir.h"
struct __anonstruct_TIFFDirectory_35 {
   unsigned long td_fieldsset[4] ;
   uint32 td_imagewidth ;
   uint32 td_imagelength ;
   uint32 td_imagedepth ;
   uint32 td_tilewidth ;
   uint32 td_tilelength ;
   uint32 td_tiledepth ;
   uint32 td_subfiletype ;
   uint16 td_bitspersample ;
   uint16 td_sampleformat ;
   uint16 td_compression ;
   uint16 td_photometric ;
   uint16 td_threshholding ;
   uint16 td_fillorder ;
   uint16 td_orientation ;
   uint16 td_samplesperpixel ;
   uint32 td_rowsperstrip ;
   uint16 td_minsamplevalue ;
   uint16 td_maxsamplevalue ;
   double td_sminsamplevalue ;
   double td_smaxsamplevalue ;
   float td_xresolution ;
   float td_yresolution ;
   uint16 td_resolutionunit ;
   uint16 td_planarconfig ;
   float td_xposition ;
   float td_yposition ;
   uint16 td_pagenumber[2] ;
   uint16 *td_colormap[3] ;
   uint16 td_halftonehints[2] ;
   uint16 td_extrasamples ;
   uint16 *td_sampleinfo ;
   tstrip_t td_stripsperimage ;
   tstrip_t td_nstrips ;
   uint32 *td_stripoffset ;
   uint32 *td_stripbytecount ;
   int td_stripbytecountsorted ;
   uint16 td_nsubifd ;
   uint32 *td_subifd ;
   uint16 td_ycbcrsubsampling[2] ;
   uint16 td_ycbcrpositioning ;
   uint16 *td_transferfunction[3] ;
   int td_inknameslen ;
   char *td_inknames ;
   int td_customValueCount ;
   TIFFTagValue *td_customValues ;
};
#line 36 "tif_dir.h"
typedef struct __anonstruct_TIFFDirectory_35 TIFFDirectory;
#line 74 "tiffiop.h"
struct client_info {
   struct client_info *next ;
   void *data ;
   char *name ;
};
#line 74 "tiffiop.h"
typedef struct client_info TIFFClientInfoLink;
#line 83 "tiffiop.h"
typedef unsigned char tidataval_t;
#line 84 "tiffiop.h"
typedef tidataval_t *tidata_t;
#line 86 "tiffiop.h"
typedef void (*TIFFVoidMethod)(TIFF * );
#line 87 "tiffiop.h"
typedef int (*TIFFBoolMethod)(TIFF * );
#line 88 "tiffiop.h"
typedef int (*TIFFPreMethod)(TIFF * , tsample_t  );
#line 89 "tiffiop.h"
typedef int (*TIFFCodeMethod)(TIFF * , tidata_t  , tsize_t  , tsample_t  );
#line 90 "tiffiop.h"
typedef int (*TIFFSeekMethod)(TIFF * , uint32  );
#line 91 "tiffiop.h"
typedef void (*TIFFPostMethod)(TIFF * , tidata_t  , tsize_t  );
#line 92 "tiffiop.h"
typedef uint32 (*TIFFStripMethod)(TIFF * , uint32  );
#line 93 "tiffiop.h"
typedef void (*TIFFTileMethod)(TIFF * , uint32 * , uint32 * );
#line 95 "tiffiop.h"
struct tiff {
   char *tif_name ;
   int tif_fd ;
   int tif_mode ;
   uint32 tif_flags ;
   toff_t tif_diroff ;
   toff_t tif_nextdiroff ;
   toff_t *tif_dirlist ;
   uint16 tif_dirnumber ;
   TIFFDirectory tif_dir ;
   TIFFHeader tif_header ;
   int const   *tif_typeshift ;
   long const   *tif_typemask ;
   uint32 tif_row ;
   tdir_t tif_curdir ;
   tstrip_t tif_curstrip ;
   toff_t tif_curoff ;
   toff_t tif_dataoff ;
   uint16 tif_nsubifd ;
   toff_t tif_subifdoff ;
   uint32 tif_col ;
   ttile_t tif_curtile ;
   tsize_t tif_tilesize ;
   int tif_decodestatus ;
   int (*tif_setupdecode)(TIFF * ) ;
   int (*tif_predecode)(TIFF * , tsample_t  ) ;
   int (*tif_setupencode)(TIFF * ) ;
   int tif_encodestatus ;
   int (*tif_preencode)(TIFF * , tsample_t  ) ;
   int (*tif_postencode)(TIFF * ) ;
   int (*tif_decoderow)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*tif_encoderow)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*tif_decodestrip)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*tif_encodestrip)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*tif_decodetile)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*tif_encodetile)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   void (*tif_close)(TIFF * ) ;
   int (*tif_seek)(TIFF * , uint32  ) ;
   void (*tif_cleanup)(TIFF * ) ;
   uint32 (*tif_defstripsize)(TIFF * , uint32  ) ;
   void (*tif_deftilesize)(TIFF * , uint32 * , uint32 * ) ;
   tidata_t tif_data ;
   tsize_t tif_scanlinesize ;
   tsize_t tif_scanlineskew ;
   tidata_t tif_rawdata ;
   tsize_t tif_rawdatasize ;
   tidata_t tif_rawcp ;
   tsize_t tif_rawcc ;
   tidata_t tif_base ;
   toff_t tif_size ;
   int (*tif_mapproc)(thandle_t  , tdata_t * , toff_t * ) ;
   void (*tif_unmapproc)(thandle_t  , tdata_t  , toff_t  ) ;
   thandle_t tif_clientdata ;
   tsize_t (*tif_readproc)(thandle_t  , tdata_t  , tsize_t  ) ;
   tsize_t (*tif_writeproc)(thandle_t  , tdata_t  , tsize_t  ) ;
   toff_t (*tif_seekproc)(thandle_t  , toff_t  , int  ) ;
   int (*tif_closeproc)(thandle_t  ) ;
   toff_t (*tif_sizeproc)(thandle_t  ) ;
   void (*tif_postdecode)(TIFF * , tidata_t  , tsize_t  ) ;
   TIFFFieldInfo **tif_fieldinfo ;
   size_t tif_nfields ;
   TIFFFieldInfo const   *tif_foundfield ;
   TIFFTagMethods tif_tagmethods ;
   TIFFClientInfoLink *tif_clientinfo ;
};
#line 38 "tif_predict.h"
struct __anonstruct_TIFFPredictorState_36 {
   int predictor ;
   int stride ;
   tsize_t rowsize ;
   void (*pfunc)(TIFF * , tidata_t  , tsize_t  ) ;
   int (*coderow)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*codestrip)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*codetile)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   int (*vgetparent)(TIFF * , ttag_t  , va_list  ) ;
   int (*vsetparent)(TIFF * , ttag_t  , va_list  ) ;
   void (*printdir)(TIFF * , FILE * , long  ) ;
   int (*setupdecode)(TIFF * ) ;
   int (*setupencode)(TIFF * ) ;
};
#line 38 "tif_predict.h"
typedef struct __anonstruct_TIFFPredictorState_36 TIFFPredictorState;
#line 91 "tif_lzw.c"
struct __anonstruct_LZWBaseState_37 {
   TIFFPredictorState predict ;
   unsigned short nbits ;
   unsigned short maxcode ;
   unsigned short free_ent ;
   long nextdata ;
   long nextbits ;
   int rw_mode ;
};
#line 91 "tif_lzw.c"
typedef struct __anonstruct_LZWBaseState_37 LZWBaseState;
#line 112 "tif_lzw.c"
typedef uint16 hcode_t;
#line 113 "tif_lzw.c"
struct __anonstruct_hash_t_38 {
   long hash ;
   hcode_t code ;
};
#line 113 "tif_lzw.c"
typedef struct __anonstruct_hash_t_38 hash_t;
#line 121 "tif_lzw.c"
struct code_ent {
   struct code_ent *next ;
   unsigned short length ;
   unsigned char value ;
   unsigned char firstchar ;
};
#line 121 "tif_lzw.c"
typedef struct code_ent code_t;
#line 128 "tif_lzw.c"
typedef int (*decodeFunc)(TIFF * , tidata_t  , tsize_t  , tsample_t  );
#line 130 "tif_lzw.c"
struct __anonstruct_LZWCodecState_39 {
   LZWBaseState base ;
   long dec_nbitsmask ;
   long dec_restart ;
   long dec_bitsleft ;
   int (*dec_decode)(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
   code_t *dec_codep ;
   code_t *dec_oldcodep ;
   code_t *dec_free_entp ;
   code_t *dec_maxcodep ;
   code_t *dec_codetab ;
   int enc_oldcode ;
   long enc_checkpoint ;
   long enc_ratio ;
   long enc_incount ;
   long enc_outcount ;
   tidata_t enc_rawlimit ;
   hash_t *enc_hashtab ;
};
#line 130 "tif_lzw.c"
typedef struct __anonstruct_LZWCodecState_39 LZWCodecState;
/* compiler builtin: 
   void __builtin_varargs_start(__builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin_strcmp(char const   * , char const   * ) ;  */
/* compiler builtin: 
   void *__builtin___memmove_chk(void * , void const   * , unsigned long  ,
                                 unsigned long  ) ;  */
/* compiler builtin: 
   char *__builtin_strpbrk(char const   * , char const   * ) ;  */
/* compiler builtin: 
   void *__builtin_memcpy(void * , void const   * , unsigned long  ) ;  */
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
   void *__builtin___memcpy_chk(void * , void const   * , unsigned long  ,
                                unsigned long  ) ;  */
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
   int __builtin___vsprintf_chk(char * , int  , unsigned long  ,
                                char const   * , __builtin_va_list  ) ;  */
/* compiler builtin: 
   char *__builtin___strncpy_chk(char * , char const   * , unsigned long  ,
                                 unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_log10f(float  ) ;  */
/* compiler builtin: 
   double __builtin_atan(double  ) ;  */
/* compiler builtin: 
   void *__builtin_alloca(unsigned long  ) ;  */
/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin_strncmp(char const   * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   double __builtin_sin(double  ) ;  */
/* compiler builtin: 
   long double __builtin_logl(long double  ) ;  */
/* compiler builtin: 
   float __builtin_coshf(float  ) ;  */
/* compiler builtin: 
   void *__builtin___mempcpy_chk(void * , void const   * , unsigned long  ,
                                 unsigned long  ) ;  */
/* compiler builtin: 
   char *__builtin___strcat_chk(char * , char const   * , unsigned long  ) ;  */
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
   unsigned long __builtin_object_size(void * , int  ) ;  */
/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned long  , void * ) ;  */
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
   int __builtin___sprintf_chk(char * , int  , unsigned long  , char const   * 
                               , ...) ;  */
/* compiler builtin: 
   int __builtin___vprintf_chk(int  , char const   * , __builtin_va_list  ) ;  */
/* compiler builtin: 
   int __builtin___snprintf_chk(char * , unsigned long  , int  ,
                                unsigned long  , char const   *  , ...) ;  */
/* compiler builtin: 
   long double __builtin_infl(void) ;  */
/* compiler builtin: 
   void *__builtin_mempcpy(void * , void const   * , unsigned long  ) ;  */
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
   int __builtin___vsnprintf_chk(char * , unsigned long  , int  ,
                                 unsigned long  , char const   * ,
                                 __builtin_va_list  ) ;  */
/* compiler builtin: 
   double __builtin_sinh(double  ) ;  */
/* compiler builtin: 
   int __builtin_ffsll(unsigned long long  ) ;  */
/* compiler builtin: 
   char *__builtin___strcpy_chk(char * , char const   * , unsigned long  ) ;  */
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
   char *__builtin___stpcpy_chk(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_tanf(float  ) ;  */
/* compiler builtin: 
   int __builtin_parityll(unsigned long long  ) ;  */
/* compiler builtin: 
   float __builtin_ldexpf(float  , int  ) ;  */
/* compiler builtin: 
   int __builtin_types_compatible_p(unsigned long  , unsigned long  ) ;  */
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
   void *__builtin___memset_chk(void * , int  , unsigned long  , unsigned long  ) ;  */
/* compiler builtin: 
   char *__builtin___strncat_chk(char * , char const   * , unsigned long  ,
                                 unsigned long  ) ;  */
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
   char *__builtin_strncpy(char * , char const   * , unsigned long  ) ;  */
/* compiler builtin: 
   long double __builtin_powil(long double  , int  ) ;  */
/* compiler builtin: 
   float __builtin_cosf(float  ) ;  */
/* compiler builtin: 
   unsigned long __builtin_strspn(char const   * , char const   * ) ;  */
/* compiler builtin: 
   long double __builtin_modfl(long double  , long double * ) ;  */
/* compiler builtin: 
   int __builtin_parity(unsigned int  ) ;  */
/* compiler builtin: 
   double __builtin_cosh(double  ) ;  */
/* compiler builtin: 
   char *__builtin_strncat(char * , char const   * , unsigned long  ) ;  */
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
   unsigned long __builtin_strcspn(char const   * , char const   * ) ;  */
/* compiler builtin: 
   int __builtin_ffsl(unsigned long  ) ;  */
/* compiler builtin: 
   float __builtin_nanf(char const   * ) ;  */
#line 109 "/usr/include/sys/select.h"
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
#line 121
extern int pselect(int __nfds , fd_set * __restrict  __readfds ,
                   fd_set * __restrict  __writefds ,
                   fd_set * __restrict  __exceptfds ,
                   struct timespec  const  * __restrict  __timeout ,
                   __sigset_t const   * __restrict  __sigmask ) ;
#line 30 "/usr/include/sys/sysmacros.h"
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
#line 33
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
#line 36
__inline static  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
#line 41
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
#line 41 "/usr/include/sys/sysmacros.h"
__inline static unsigned int gnu_dev_major(unsigned long long __dev ) 
{ 

  {
#line 41
  fprintf(_coverage_fout, "1\n");
#line 41
  fflush(_coverage_fout);
#line 44
  return ((unsigned int )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
#line 47
__inline static  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
#line 47 "/usr/include/sys/sysmacros.h"
__inline static unsigned int gnu_dev_minor(unsigned long long __dev ) 
{ 

  {
#line 47
  fprintf(_coverage_fout, "2\n");
#line 47
  fflush(_coverage_fout);
#line 50
  return ((unsigned int )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
#line 53
__inline static  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
#line 53 "/usr/include/sys/sysmacros.h"
__inline static unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                   unsigned int __minor ) 
{ 

  {
#line 53
  fprintf(_coverage_fout, "3\n");
#line 53
  fflush(_coverage_fout);
#line 56
  return (((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32));
}
}
#line 76 "/usr/include/fcntl.h"
extern int fcntl(int __fd , int __cmd  , ...) ;
#line 85
extern int open(char const   *__file , int __oflag  , ...)  __attribute__((__nonnull__(1))) ;
#line 130
extern int creat(char const   *__file , __mode_t __mode )  __attribute__((__nonnull__(1))) ;
#line 159
extern int lockf(int __fd , int __cmd , __off_t __len ) ;
#line 176
extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off_t __offset ,
                                                       __off_t __len ,
                                                       int __advise ) ;
#line 198
extern int posix_fallocate(int __fd , __off_t __offset , __off_t __len ) ;
#line 38 "/usr/include/string.h"
extern  __attribute__((__nothrow__)) void *memcpy(void * __restrict  __dest ,
                                                  void const   * __restrict  __src ,
                                                  size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 43
extern  __attribute__((__nothrow__)) void *memmove(void *__dest ,
                                                   void const   *__src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 51
extern  __attribute__((__nothrow__)) void *memccpy(void * __restrict  __dest ,
                                                   void const   * __restrict  __src ,
                                                   int __c , size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 59
extern  __attribute__((__nothrow__)) void *memset(void *__s , int __c ,
                                                  size_t __n )  __attribute__((__nonnull__(1))) ;
#line 62
extern  __attribute__((__nothrow__)) int memcmp(void const   *__s1 ,
                                                void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 66
extern  __attribute__((__nothrow__)) void *memchr(void const   *__s , int __c ,
                                                  size_t __n )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 84
extern  __attribute__((__nothrow__)) char *strcpy(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
#line 87
extern  __attribute__((__nothrow__)) char *strncpy(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 92
extern  __attribute__((__nothrow__)) char *strcat(char * __restrict  __dest ,
                                                  char const   * __restrict  __src )  __attribute__((__nonnull__(1,2))) ;
#line 95
extern  __attribute__((__nothrow__)) char *strncat(char * __restrict  __dest ,
                                                   char const   * __restrict  __src ,
                                                   size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 99
extern  __attribute__((__nothrow__)) int strcmp(char const   *__s1 ,
                                                char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 102
extern  __attribute__((__nothrow__)) int strncmp(char const   *__s1 ,
                                                 char const   *__s2 ,
                                                 size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 106
extern  __attribute__((__nothrow__)) int strcoll(char const   *__s1 ,
                                                 char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 109
extern  __attribute__((__nothrow__)) size_t strxfrm(char * __restrict  __dest ,
                                                    char const   * __restrict  __src ,
                                                    size_t __n )  __attribute__((__nonnull__(2))) ;
#line 130
extern  __attribute__((__nothrow__)) char *strdup(char const   *__s )  __attribute__((__nonnull__(1),
__malloc__)) ;
#line 167
extern  __attribute__((__nothrow__)) char *strchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 170
extern  __attribute__((__nothrow__)) char *strrchr(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 184
extern  __attribute__((__nothrow__)) size_t strcspn(char const   *__s ,
                                                    char const   *__reject )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 188
extern  __attribute__((__nothrow__)) size_t strspn(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 191
extern  __attribute__((__nothrow__)) char *strpbrk(char const   *__s ,
                                                   char const   *__accept )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 194
extern  __attribute__((__nothrow__)) char *strstr(char const   *__haystack ,
                                                  char const   *__needle )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 199
extern  __attribute__((__nothrow__)) char *strtok(char * __restrict  __s ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(2))) ;
#line 205
extern  __attribute__((__nothrow__)) char *__strtok_r(char * __restrict  __s ,
                                                      char const   * __restrict  __delim ,
                                                      char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
#line 210
extern  __attribute__((__nothrow__)) char *strtok_r(char * __restrict  __s ,
                                                    char const   * __restrict  __delim ,
                                                    char ** __restrict  __save_ptr )  __attribute__((__nonnull__(2,3))) ;
#line 242
extern  __attribute__((__nothrow__)) size_t strlen(char const   *__s )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 256
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
#line 270
extern  __attribute__((__nothrow__)) int strerror_r(int __errnum , char *__buf ,
                                                    size_t __buflen )  __asm__("__xpg_strerror_r") __attribute__((__nonnull__(2))) ;
#line 288
extern  __attribute__((__nothrow__)) void __bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
#line 292
extern  __attribute__((__nothrow__)) void bcopy(void const   *__src ,
                                                void *__dest , size_t __n )  __attribute__((__nonnull__(1,2))) ;
#line 296
extern  __attribute__((__nothrow__)) void bzero(void *__s , size_t __n )  __attribute__((__nonnull__(1))) ;
#line 299
extern  __attribute__((__nothrow__)) int bcmp(void const   *__s1 ,
                                              void const   *__s2 , size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 303
extern  __attribute__((__nothrow__)) char *index(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 307
extern  __attribute__((__nothrow__)) char *rindex(char const   *__s , int __c )  __attribute__((__pure__,
__nonnull__(1))) ;
#line 312
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
#line 325
extern  __attribute__((__nothrow__)) int strcasecmp(char const   *__s1 ,
                                                    char const   *__s2 )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 329
extern  __attribute__((__nothrow__)) int strncasecmp(char const   *__s1 ,
                                                     char const   *__s2 ,
                                                     size_t __n )  __attribute__((__pure__,
__nonnull__(1,2))) ;
#line 348
extern  __attribute__((__nothrow__)) char *strsep(char ** __restrict  __stringp ,
                                                  char const   * __restrict  __delim )  __attribute__((__nonnull__(1,2))) ;
#line 68 "/usr/include/assert.h"
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_fail(char const   *__assertion ,
                                  char const   *__file , unsigned int __line ,
                                  char const   *__function ) ;
#line 73
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert_perror_fail(int __errnum , char const   *__file ,
                                         unsigned int __line ,
                                         char const   *__function ) ;
#line 81
extern  __attribute__((__nothrow__,
__noreturn__)) void __assert(char const   *__assertion , char const   *__file ,
                             int __line ) ;
#line 45 "/usr/include/search.h"
extern  __attribute__((__nothrow__)) void insque(void *__elem , void *__prev ) ;
#line 48
extern  __attribute__((__nothrow__)) void remque(void *__elem ) ;
#line 88
extern  __attribute__((__nothrow__)) ENTRY *hsearch(ENTRY __item ,
                                                    ACTION __action ) ;
#line 91
extern  __attribute__((__nothrow__)) int hcreate(size_t __nel ) ;
#line 94
extern  __attribute__((__nothrow__)) void hdestroy(void) ;
#line 130
extern void *tsearch(void const   *__key , void **__rootp ,
                     int (*__compar)(void const   * , void const   * ) ) ;
#line 135
extern void *tfind(void const   *__key , void * const  *__rootp ,
                   int (*__compar)(void const   * , void const   * ) ) ;
#line 139
extern void *tdelete(void const   * __restrict  __key ,
                     void ** __restrict  __rootp ,
                     int (*__compar)(void const   * , void const   * ) ) ;
#line 151
extern void twalk(void const   *__root ,
                  void (*__action)(void const   *__nodep , VISIT __value ,
                                   int __level ) ) ;
#line 165
extern void *lfind(void const   *__key , void const   *__base ,
                   size_t *__nmemb , size_t __size ,
                   int (*__compar)(void const   * , void const   * ) ) ;
#line 170
extern void *lsearch(void const   *__key , void *__base , size_t *__nmemb ,
                     size_t __size , int (*__compar)(void const   * ,
                                                     void const   * ) ) ;
#line 343 "/usr/include/libio.h"
extern struct _IO_FILE_plus _IO_2_1_stdin_ ;
#line 344
extern struct _IO_FILE_plus _IO_2_1_stdout_ ;
#line 345
extern struct _IO_FILE_plus _IO_2_1_stderr_ ;
#line 413
extern int __underflow(_IO_FILE * ) ;
#line 414
extern int __uflow(_IO_FILE * ) ;
#line 415
extern int __overflow(_IO_FILE * , int  ) ;
#line 416
extern wint_t __wunderflow(_IO_FILE * ) ;
#line 417
extern wint_t __wuflow(_IO_FILE * ) ;
#line 418
extern wint_t __woverflow(_IO_FILE * , wint_t  ) ;
#line 451
extern int _IO_getc(_IO_FILE *__fp ) ;
#line 452
extern int _IO_putc(int __c , _IO_FILE *__fp ) ;
#line 453
extern  __attribute__((__nothrow__)) int _IO_feof(_IO_FILE *__fp ) ;
#line 454
extern  __attribute__((__nothrow__)) int _IO_ferror(_IO_FILE *__fp ) ;
#line 456
extern int _IO_peekc_locked(_IO_FILE *__fp ) ;
#line 462
extern  __attribute__((__nothrow__)) void _IO_flockfile(_IO_FILE * ) ;
#line 463
extern  __attribute__((__nothrow__)) void _IO_funlockfile(_IO_FILE * ) ;
#line 464
extern  __attribute__((__nothrow__)) int _IO_ftrylockfile(_IO_FILE * ) ;
#line 481
extern int _IO_vfscanf(_IO_FILE * __restrict   , char const   * __restrict   ,
                       __gnuc_va_list  , int * __restrict   ) ;
#line 483
extern int _IO_vfprintf(_IO_FILE * __restrict   , char const   * __restrict   ,
                        __gnuc_va_list  ) ;
#line 485
extern __ssize_t _IO_padn(_IO_FILE * , int  , __ssize_t  ) ;
#line 486
extern size_t _IO_sgetn(_IO_FILE * , void * , size_t  ) ;
#line 488
extern __off64_t _IO_seekoff(_IO_FILE * , __off64_t  , int  , int  ) ;
#line 489
extern __off64_t _IO_seekpos(_IO_FILE * , __off64_t  , int  ) ;
#line 491
extern  __attribute__((__nothrow__)) void _IO_free_backup_area(_IO_FILE * ) ;
#line 142 "/usr/include/stdio.h"
extern struct _IO_FILE *stdin ;
#line 143
extern struct _IO_FILE *stdout ;
#line 144
extern struct _IO_FILE *stderr ;
#line 154
extern  __attribute__((__nothrow__)) int remove(char const   *__filename ) ;
#line 156
extern  __attribute__((__nothrow__)) int rename(char const   *__old ,
                                                char const   *__new ) ;
#line 171
extern FILE *tmpfile(void) ;
#line 185
extern  __attribute__((__nothrow__)) char *tmpnam(char *__s ) ;
#line 191
extern  __attribute__((__nothrow__)) char *tmpnam_r(char *__s ) ;
#line 203
extern  __attribute__((__nothrow__)) char *tempnam(char const   *__dir ,
                                                   char const   *__pfx )  __attribute__((__malloc__)) ;
#line 213
extern int fclose(FILE *__stream ) ;
#line 218
extern int fflush(FILE *__stream ) ;
#line 228
extern int fflush_unlocked(FILE *__stream ) ;
#line 248
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;
#line 254
extern FILE *freopen(char const   * __restrict  __filename ,
                     char const   * __restrict  __modes ,
                     FILE * __restrict  __stream ) ;
#line 280
extern  __attribute__((__nothrow__)) FILE *fdopen(int __fd ,
                                                  char const   *__modes ) ;
#line 303
extern  __attribute__((__nothrow__)) void setbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ) ;
#line 307
extern  __attribute__((__nothrow__)) int setvbuf(FILE * __restrict  __stream ,
                                                 char * __restrict  __buf ,
                                                 int __modes , size_t __n ) ;
#line 314
extern  __attribute__((__nothrow__)) void setbuffer(FILE * __restrict  __stream ,
                                                    char * __restrict  __buf ,
                                                    size_t __size ) ;
#line 318
extern  __attribute__((__nothrow__)) void setlinebuf(FILE *__stream ) ;
#line 327
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
#line 333
extern int printf(char const   * __restrict  __format  , ...) ;
#line 335
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;
#line 342
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
#line 348
extern int vprintf(char const   * __restrict  __format , __gnuc_va_list __arg ) ;
#line 350
extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;
#line 357
extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s ,
                                                                             size_t __maxlen ,
                                                                             char const   * __restrict  __format 
                                                                             , ...) ;
#line 361
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsnprintf)(char * __restrict  __s ,
                                                                              size_t __maxlen ,
                                                                              char const   * __restrict  __format ,
                                                                              __gnuc_va_list __arg ) ;
#line 399
extern int fscanf(FILE * __restrict  __stream ,
                  char const   * __restrict  __format  , ...) ;
#line 405
extern int scanf(char const   * __restrict  __format  , ...) ;
#line 407
extern  __attribute__((__nothrow__)) int sscanf(char const   * __restrict  __s ,
                                                char const   * __restrict  __format 
                                                , ...) ;
#line 441
extern int fgetc(FILE *__stream ) ;
#line 442
extern int getc(FILE *__stream ) ;
#line 448
extern int getchar(void) ;
#line 460
extern int getc_unlocked(FILE *__stream ) ;
#line 461
extern int getchar_unlocked(void) ;
#line 471
extern int fgetc_unlocked(FILE *__stream ) ;
#line 483
extern int fputc(int __c , FILE *__stream ) ;
#line 484
extern int putc(int __c , FILE *__stream ) ;
#line 490
extern int putchar(int __c ) ;
#line 504
extern int fputc_unlocked(int __c , FILE *__stream ) ;
#line 512
extern int putc_unlocked(int __c , FILE *__stream ) ;
#line 513
extern int putchar_unlocked(int __c ) ;
#line 520
extern int getw(FILE *__stream ) ;
#line 523
extern int putw(int __w , FILE *__stream ) ;
#line 532
extern char *fgets(char * __restrict  __s , int __n ,
                   FILE * __restrict  __stream ) ;
#line 540
extern char *gets(char *__s ) ;
#line 590
extern int fputs(char const   * __restrict  __s , FILE * __restrict  __stream ) ;
#line 596
extern int puts(char const   *__s ) ;
#line 603
extern int ungetc(int __c , FILE *__stream ) ;
#line 610
extern size_t fread(void * __restrict  __ptr , size_t __size , size_t __n ,
                    FILE * __restrict  __stream ) ;
#line 616
extern size_t fwrite(void const   * __restrict  __ptr , size_t __size ,
                     size_t __n , FILE * __restrict  __s ) ;
#line 638
extern size_t fread_unlocked(void * __restrict  __ptr , size_t __size ,
                             size_t __n , FILE * __restrict  __stream ) ;
#line 640
extern size_t fwrite_unlocked(void const   * __restrict  __ptr , size_t __size ,
                              size_t __n , FILE * __restrict  __stream ) ;
#line 650
extern int fseek(FILE *__stream , long __off , int __whence ) ;
#line 655
extern long ftell(FILE *__stream ) ;
#line 660
extern void rewind(FILE *__stream ) ;
#line 674
extern int fseeko(FILE *__stream , __off_t __off , int __whence ) ;
#line 679
extern __off_t ftello(FILE *__stream ) ;
#line 699
extern int fgetpos(FILE * __restrict  __stream , fpos_t * __restrict  __pos ) ;
#line 704
extern int fsetpos(FILE *__stream , fpos_t const   *__pos ) ;
#line 727
extern  __attribute__((__nothrow__)) void clearerr(FILE *__stream ) ;
#line 729
extern  __attribute__((__nothrow__)) int feof(FILE *__stream ) ;
#line 731
extern  __attribute__((__nothrow__)) int ferror(FILE *__stream ) ;
#line 736
extern  __attribute__((__nothrow__)) void clearerr_unlocked(FILE *__stream ) ;
#line 737
extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
#line 738
extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
#line 747
extern void perror(char const   *__s ) ;
#line 27 "/usr/include/bits/sys_errlist.h"
extern int sys_nerr ;
#line 28
extern char const   * const  sys_errlist[] ;
#line 759 "/usr/include/stdio.h"
extern  __attribute__((__nothrow__)) int fileno(FILE *__stream ) ;
#line 764
extern  __attribute__((__nothrow__)) int fileno_unlocked(FILE *__stream ) ;
#line 774
extern FILE *popen(char const   *__command , char const   *__modes ) ;
#line 780
extern int pclose(FILE *__stream ) ;
#line 786
extern  __attribute__((__nothrow__)) char *ctermid(char *__s ) ;
#line 814
extern  __attribute__((__nothrow__)) void flockfile(FILE *__stream ) ;
#line 818
extern  __attribute__((__nothrow__)) int ftrylockfile(FILE *__stream ) ;
#line 821
extern  __attribute__((__nothrow__)) void funlockfile(FILE *__stream ) ;
#line 269 "tiffio.h"
extern char const   *TIFFGetVersion(void) ;
#line 271
extern TIFFCodec const   *TIFFFindCODEC(uint16  ) ;
#line 272
extern TIFFCodec *TIFFRegisterCODEC(uint16  , char const   * ,
                                    int (*)(TIFF * , int  ) ) ;
#line 273
extern void TIFFUnRegisterCODEC(TIFFCodec * ) ;
#line 274
extern int TIFFIsCODECConfigured(uint16  ) ;
#line 275
extern TIFFCodec *TIFFGetConfiguredCODECs(void) ;
#line 281
extern tdata_t _TIFFmalloc(tsize_t  ) ;
#line 282
extern tdata_t _TIFFrealloc(tdata_t  , tsize_t  ) ;
#line 283
extern void _TIFFmemset(tdata_t  , int  , tsize_t  ) ;
#line 284
extern void _TIFFmemcpy(tdata_t  , tdata_t  , tsize_t  ) ;
#line 285
extern int _TIFFmemcmp(tdata_t  , tdata_t  , tsize_t  ) ;
#line 286
extern void _TIFFfree(tdata_t  ) ;
#line 291
extern int TIFFGetTagListCount(TIFF * ) ;
#line 292
extern ttag_t TIFFGetTagListEntry(TIFF * , int tag_index ) ;
#line 318
extern void TIFFMergeFieldInfo(TIFF * , TIFFFieldInfo const   * , int  ) ;
#line 319
extern TIFFFieldInfo const   *TIFFFindFieldInfo(TIFF * , ttag_t  ,
                                                TIFFDataType  ) ;
#line 320
extern TIFFFieldInfo const   *TIFFFindFieldInfoByName(TIFF * , char const   * ,
                                                      TIFFDataType  ) ;
#line 322
extern TIFFFieldInfo const   *TIFFFieldWithTag(TIFF * , ttag_t  ) ;
#line 323
extern TIFFFieldInfo const   *TIFFFieldWithName(TIFF * , char const   * ) ;
#line 335
extern TIFFTagMethods *TIFFAccessTagMethods(TIFF * ) ;
#line 336
extern void *TIFFGetClientInfo(TIFF * , char const   * ) ;
#line 337
extern void TIFFSetClientInfo(TIFF * , void * , char const   * ) ;
#line 339
extern void TIFFCleanup(TIFF * ) ;
#line 340
extern void TIFFClose(TIFF * ) ;
#line 341
extern int TIFFFlush(TIFF * ) ;
#line 342
extern int TIFFFlushData(TIFF * ) ;
#line 343
extern int TIFFGetField(TIFF * , ttag_t   , ...) ;
#line 344
extern int TIFFVGetField(TIFF * , ttag_t  , va_list  ) ;
#line 345
extern int TIFFGetFieldDefaulted(TIFF * , ttag_t   , ...) ;
#line 346
extern int TIFFVGetFieldDefaulted(TIFF * , ttag_t  , va_list  ) ;
#line 347
extern int TIFFReadDirectory(TIFF * ) ;
#line 348
extern int TIFFReadCustomDirectory(TIFF * , toff_t  , TIFFFieldInfo const   * ,
                                   size_t  ) ;
#line 350
extern int TIFFReadEXIFDirectory(TIFF * , toff_t  ) ;
#line 351
extern tsize_t TIFFScanlineSize(TIFF * ) ;
#line 352
extern tsize_t TIFFRasterScanlineSize(TIFF * ) ;
#line 353
extern tsize_t TIFFStripSize(TIFF * ) ;
#line 354
extern tsize_t TIFFRawStripSize(TIFF * , tstrip_t  ) ;
#line 355
extern tsize_t TIFFVStripSize(TIFF * , uint32  ) ;
#line 356
extern tsize_t TIFFTileRowSize(TIFF * ) ;
#line 357
extern tsize_t TIFFTileSize(TIFF * ) ;
#line 358
extern tsize_t TIFFVTileSize(TIFF * , uint32  ) ;
#line 359
extern uint32 TIFFDefaultStripSize(TIFF * , uint32  ) ;
#line 360
extern void TIFFDefaultTileSize(TIFF * , uint32 * , uint32 * ) ;
#line 361
extern int TIFFFileno(TIFF * ) ;
#line 362
extern int TIFFSetFileno(TIFF * , int  ) ;
#line 363
extern thandle_t TIFFClientdata(TIFF * ) ;
#line 364
extern thandle_t TIFFSetClientdata(TIFF * , thandle_t  ) ;
#line 365
extern int TIFFGetMode(TIFF * ) ;
#line 366
extern int TIFFSetMode(TIFF * , int  ) ;
#line 367
extern int TIFFIsTiled(TIFF * ) ;
#line 368
extern int TIFFIsByteSwapped(TIFF * ) ;
#line 369
extern int TIFFIsUpSampled(TIFF * ) ;
#line 370
extern int TIFFIsMSB2LSB(TIFF * ) ;
#line 371
extern int TIFFIsBigEndian(TIFF * ) ;
#line 372
extern TIFFReadWriteProc TIFFGetReadProc(TIFF * ) ;
#line 373
extern TIFFReadWriteProc TIFFGetWriteProc(TIFF * ) ;
#line 374
extern TIFFSeekProc TIFFGetSeekProc(TIFF * ) ;
#line 375
extern TIFFCloseProc TIFFGetCloseProc(TIFF * ) ;
#line 376
extern TIFFSizeProc TIFFGetSizeProc(TIFF * ) ;
#line 377
extern TIFFMapFileProc TIFFGetMapFileProc(TIFF * ) ;
#line 378
extern TIFFUnmapFileProc TIFFGetUnmapFileProc(TIFF * ) ;
#line 379
extern uint32 TIFFCurrentRow(TIFF * ) ;
#line 380
extern tdir_t TIFFCurrentDirectory(TIFF * ) ;
#line 381
extern tdir_t TIFFNumberOfDirectories(TIFF * ) ;
#line 382
extern uint32 TIFFCurrentDirOffset(TIFF * ) ;
#line 383
extern tstrip_t TIFFCurrentStrip(TIFF * ) ;
#line 384
extern ttile_t TIFFCurrentTile(TIFF * ) ;
#line 385
extern int TIFFReadBufferSetup(TIFF * , tdata_t  , tsize_t  ) ;
#line 386
extern int TIFFWriteBufferSetup(TIFF * , tdata_t  , tsize_t  ) ;
#line 387
extern int TIFFSetupStrips(TIFF * ) ;
#line 388
extern int TIFFWriteCheck(TIFF * , int  , char const   * ) ;
#line 389
extern void TIFFFreeDirectory(TIFF * ) ;
#line 390
extern int TIFFCreateDirectory(TIFF * ) ;
#line 391
extern int TIFFLastDirectory(TIFF * ) ;
#line 392
extern int TIFFSetDirectory(TIFF * , tdir_t  ) ;
#line 393
extern int TIFFSetSubDirectory(TIFF * , uint32  ) ;
#line 394
extern int TIFFUnlinkDirectory(TIFF * , tdir_t  ) ;
#line 395
extern int TIFFSetField(TIFF * , ttag_t   , ...) ;
#line 396
extern int TIFFVSetField(TIFF * , ttag_t  , va_list  ) ;
#line 397
extern int TIFFWriteDirectory(TIFF * ) ;
#line 398
extern int TIFFCheckpointDirectory(TIFF * ) ;
#line 399
extern int TIFFRewriteDirectory(TIFF * ) ;
#line 400
extern int TIFFReassignTagToIgnore(enum TIFFIgnoreSense  , int  ) ;
#line 410
extern void TIFFPrintDirectory(TIFF * , FILE * , long  ) ;
#line 411
extern int TIFFReadScanline(TIFF * , tdata_t  , uint32  , tsample_t  ) ;
#line 412
extern int TIFFWriteScanline(TIFF * , tdata_t  , uint32  , tsample_t  ) ;
#line 413
extern int TIFFReadRGBAImage(TIFF * , uint32  , uint32  , uint32 * , int  ) ;
#line 414
extern int TIFFReadRGBAImageOriented(TIFF * , uint32  , uint32  , uint32 * ,
                                     int  , int  ) ;
#line 417
extern int TIFFReadRGBAStrip(TIFF * , tstrip_t  , uint32 * ) ;
#line 418
extern int TIFFReadRGBATile(TIFF * , uint32  , uint32  , uint32 * ) ;
#line 419
extern int TIFFRGBAImageOK(TIFF * , char * ) ;
#line 420
extern int TIFFRGBAImageBegin(TIFFRGBAImage * , TIFF * , int  , char * ) ;
#line 421
extern int TIFFRGBAImageGet(TIFFRGBAImage * , uint32 * , uint32  , uint32  ) ;
#line 422
extern void TIFFRGBAImageEnd(TIFFRGBAImage * ) ;
#line 423
extern TIFF *TIFFOpen(char const   * , char const   * ) ;
#line 427
extern TIFF *TIFFFdOpen(int  , char const   * , char const   * ) ;
#line 428
extern TIFF *TIFFClientOpen(char const   * , char const   * , thandle_t  ,
                            tsize_t (*)(thandle_t  , tdata_t  , tsize_t  ) ,
                            tsize_t (*)(thandle_t  , tdata_t  , tsize_t  ) ,
                            toff_t (*)(thandle_t  , toff_t  , int  ) ,
                            int (*)(thandle_t  ) , toff_t (*)(thandle_t  ) ,
                            int (*)(thandle_t  , tdata_t * , toff_t * ) ,
                            void (*)(thandle_t  , tdata_t  , toff_t  ) ) ;
#line 434
extern char const   *TIFFFileName(TIFF * ) ;
#line 435
extern char const   *TIFFSetFileName(TIFF * , char const   * ) ;
#line 436
extern void TIFFError(char const   * , char const   *  , ...) ;
#line 437
extern void TIFFErrorExt(thandle_t  , char const   * , char const   *  , ...) ;
#line 438
extern void TIFFWarning(char const   * , char const   *  , ...) ;
#line 439
extern void TIFFWarningExt(thandle_t  , char const   * , char const   *  , ...) ;
#line 440
extern TIFFErrorHandler TIFFSetErrorHandler(void (*)(char const   * ,
                                                     char const   * , va_list  ) ) ;
#line 441
extern TIFFErrorHandlerExt TIFFSetErrorHandlerExt(void (*)(thandle_t  ,
                                                           char const   * ,
                                                           char const   * ,
                                                           va_list  ) ) ;
#line 442
extern TIFFErrorHandler TIFFSetWarningHandler(void (*)(char const   * ,
                                                       char const   * ,
                                                       va_list  ) ) ;
#line 443
extern TIFFErrorHandlerExt TIFFSetWarningHandlerExt(void (*)(thandle_t  ,
                                                             char const   * ,
                                                             char const   * ,
                                                             va_list  ) ) ;
#line 444
extern TIFFExtendProc TIFFSetTagExtender(void (*)(TIFF * ) ) ;
#line 445
extern ttile_t TIFFComputeTile(TIFF * , uint32  , uint32  , uint32  ,
                               tsample_t  ) ;
#line 446
extern int TIFFCheckTile(TIFF * , uint32  , uint32  , uint32  , tsample_t  ) ;
#line 447
extern ttile_t TIFFNumberOfTiles(TIFF * ) ;
#line 448
extern tsize_t TIFFReadTile(TIFF * , tdata_t  , uint32  , uint32  , uint32  ,
                            tsample_t  ) ;
#line 450
extern tsize_t TIFFWriteTile(TIFF * , tdata_t  , uint32  , uint32  , uint32  ,
                             tsample_t  ) ;
#line 452
extern tstrip_t TIFFComputeStrip(TIFF * , uint32  , tsample_t  ) ;
#line 453
extern tstrip_t TIFFNumberOfStrips(TIFF * ) ;
#line 454
extern tsize_t TIFFReadEncodedStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
#line 455
extern tsize_t TIFFReadRawStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
#line 456
extern tsize_t TIFFReadEncodedTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
#line 457
extern tsize_t TIFFReadRawTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
#line 458
extern tsize_t TIFFWriteEncodedStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
#line 459
extern tsize_t TIFFWriteRawStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;
#line 460
extern tsize_t TIFFWriteEncodedTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
#line 461
extern tsize_t TIFFWriteRawTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;
#line 462
extern int TIFFDataWidth(TIFFDataType  ) ;
#line 463
extern void TIFFSetWriteOffset(TIFF * , toff_t  ) ;
#line 464
extern void TIFFSwabShort(uint16 * ) ;
#line 465
extern void TIFFSwabLong(uint32 * ) ;
#line 466
extern void TIFFSwabDouble(double * ) ;
#line 467
extern void TIFFSwabArrayOfShort(uint16 * , unsigned long  ) ;
#line 468
extern void TIFFSwabArrayOfTriples(uint8 * , unsigned long  ) ;
#line 469
extern void TIFFSwabArrayOfLong(uint32 * , unsigned long  ) ;
#line 470
extern void TIFFSwabArrayOfDouble(double * , unsigned long  ) ;
#line 471
extern void TIFFReverseBits(unsigned char * , unsigned long  ) ;
#line 472
extern unsigned char const   *TIFFGetBitRevTable(int  ) ;
#line 478
extern double LogL16toY(int  ) ;
#line 479
extern double LogL10toY(int  ) ;
#line 480
extern void XYZtoRGB24(float * , uint8 * ) ;
#line 481
extern int uv_decode(double * , double * , int  ) ;
#line 482
extern void LogLuv24toXYZ(uint32  , float * ) ;
#line 483
extern void LogLuv32toXYZ(uint32  , float * ) ;
#line 491
extern int LogL16fromY(double  , int  ) ;
#line 492
extern int LogL10fromY(double  , int  ) ;
#line 493
extern int uv_encode(double  , double  , int  ) ;
#line 494
extern uint32 LogLuv24fromXYZ(float * , int  ) ;
#line 495
extern uint32 LogLuv32fromXYZ(float * , int  ) ;
#line 499
extern int TIFFCIELabToRGBInit(TIFFCIELabToRGB * , TIFFDisplay * , float * ) ;
#line 500
extern void TIFFCIELabToXYZ(TIFFCIELabToRGB * , uint32  , int32  , int32  ,
                            float * , float * , float * ) ;
#line 502
extern void TIFFXYZToRGB(TIFFCIELabToRGB * , float  , float  , float  ,
                         uint32 * , uint32 * , uint32 * ) ;
#line 505
extern int TIFFYCbCrToRGBInit(TIFFYCbCrToRGB * , float * , float * ) ;
#line 506
extern void TIFFYCbCrtoRGB(TIFFYCbCrToRGB * , uint32  , int32  , int32  ,
                           uint32 * , uint32 * , uint32 * ) ;
#line 177 "tif_dir.h"
extern TIFFFieldInfo const   *_TIFFGetFieldInfo(size_t * ) ;
#line 178
extern TIFFFieldInfo const   *_TIFFGetExifFieldInfo(size_t * ) ;
#line 179
extern void _TIFFSetupFieldInfo(TIFF * , TIFFFieldInfo const   * , size_t  ) ;
#line 180
extern void _TIFFPrintFieldInfo(TIFF * , FILE * ) ;
#line 181
extern TIFFDataType _TIFFSampleToTagType(TIFF * ) ;
#line 182
extern TIFFFieldInfo const   *_TIFFFindOrRegisterFieldInfo(TIFF *tif ,
                                                           ttag_t tag ,
                                                           TIFFDataType dt ) ;
#line 185
extern TIFFFieldInfo *_TIFFCreateAnonFieldInfo(TIFF *tif , ttag_t tag ,
                                               TIFFDataType dt ) ;
#line 237 "tiffiop.h"
extern int _TIFFgetMode(char const   * , char const   * ) ;
#line 238
extern int _TIFFNoRowEncode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
#line 239
extern int _TIFFNoStripEncode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
#line 240
extern int _TIFFNoTileEncode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
#line 241
extern int _TIFFNoRowDecode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
#line 242
extern int _TIFFNoStripDecode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
#line 243
extern int _TIFFNoTileDecode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;
#line 244
extern void _TIFFNoPostDecode(TIFF * , tidata_t  , tsize_t  ) ;
#line 245
extern int _TIFFNoPreCode(TIFF * , tsample_t  ) ;
#line 246
extern int _TIFFNoSeek(TIFF * , uint32  ) ;
#line 247
extern void _TIFFSwab16BitData(TIFF * , tidata_t  , tsize_t  ) ;
#line 248
extern void _TIFFSwab24BitData(TIFF * , tidata_t  , tsize_t  ) ;
#line 249
extern void _TIFFSwab32BitData(TIFF * , tidata_t  , tsize_t  ) ;
#line 250
extern void _TIFFSwab64BitData(TIFF * , tidata_t  , tsize_t  ) ;
#line 251
extern int TIFFFlushData1(TIFF * ) ;
#line 252
extern int TIFFDefaultDirectory(TIFF * ) ;
#line 253
extern void _TIFFSetDefaultCompressionState(TIFF * ) ;
#line 254
extern int TIFFSetCompressionScheme(TIFF * , int  ) ;
#line 255
extern int TIFFSetDefaultCompressionState(TIFF * ) ;
#line 256
extern uint32 _TIFFDefaultStripSize(TIFF * , uint32  ) ;
#line 257
extern void _TIFFDefaultTileSize(TIFF * , uint32 * , uint32 * ) ;
#line 258
extern int _TIFFDataSize(TIFFDataType  ) ;
#line 260
extern void _TIFFsetByteArray(void ** , void * , uint32  ) ;
#line 261
extern void _TIFFsetString(char ** , char * ) ;
#line 262
extern void _TIFFsetShortArray(uint16 ** , uint16 * , uint32  ) ;
#line 263
extern void _TIFFsetLongArray(uint32 ** , uint32 * , uint32  ) ;
#line 264
extern void _TIFFsetFloatArray(float ** , float * , uint32  ) ;
#line 265
extern void _TIFFsetDoubleArray(double ** , double * , uint32  ) ;
#line 267
extern void _TIFFprintAscii(FILE * , char const   * ) ;
#line 268
extern void _TIFFprintAsciiTag(FILE * , char const   * , char const   * ) ;
#line 270
extern void (*_TIFFwarningHandler)(char const   * , char const   * , va_list  ) ;
#line 271
extern void (*_TIFFerrorHandler)(char const   * , char const   * , va_list  ) ;
#line 272
extern void (*_TIFFwarningHandlerExt)(thandle_t  , char const   * ,
                                      char const   * , va_list  ) ;
#line 273
extern void (*_TIFFerrorHandlerExt)(thandle_t  , char const   * ,
                                    char const   * , va_list  ) ;
#line 275
extern tdata_t _TIFFCheckMalloc(TIFF * , size_t  , size_t  , char const   * ) ;
#line 277
extern int TIFFInitDumpMode(TIFF * , int  ) ;
#line 279
extern int TIFFInitPackBits(TIFF * , int  ) ;
#line 282
extern int TIFFInitCCITTRLE(TIFF * , int  ) ;
#line 282
extern int TIFFInitCCITTRLEW(TIFF * , int  ) ;
#line 283
extern int TIFFInitCCITTFax3(TIFF * , int  ) ;
#line 283
extern int TIFFInitCCITTFax4(TIFF * , int  ) ;
#line 286
extern int TIFFInitThunderScan(TIFF * , int  ) ;
#line 289
extern int TIFFInitNeXT(TIFF * , int  ) ;
#line 292
int TIFFInitLZW(TIFF *tif , int scheme ) ;
#line 298
extern int TIFFInitJPEG(TIFF * , int  ) ;
#line 304
extern int TIFFInitZIP(TIFF * , int  ) ;
#line 307
extern int TIFFInitPixarLog(TIFF * , int  ) ;
#line 310
extern int TIFFInitSGILog(TIFF * , int  ) ;
#line 315
extern TIFFCodec _TIFFBuiltinCODECS[] ;
#line 57 "tif_predict.h"
extern int TIFFPredictorInit(TIFF * ) ;
#line 58
extern int TIFFPredictorCleanup(TIFF * ) ;
#line 161 "tif_lzw.c"
static int LZWDecode(TIFF *tif , tidata_t op0 , tsize_t occ0 , tsample_t s ) ;
#line 163
static int LZWDecodeCompat(TIFF *tif , tidata_t op0 , tsize_t occ0 ,
                           tsample_t s ) ;
#line 165
static void cl_hash(LZWCodecState *sp ) ;
#line 195
static int LZWSetupDecode(TIFF *tif ) ;
#line 195 "tif_lzw.c"
static char const   module[16]  = 
#line 195
  {      (char const   )' ',      (char const   )'L',      (char const   )'Z',      (char const   )'W', 
        (char const   )'S',      (char const   )'e',      (char const   )'t',      (char const   )'u', 
        (char const   )'p',      (char const   )'D',      (char const   )'e',      (char const   )'c', 
        (char const   )'o',      (char const   )'d',      (char const   )'e',      (char const   )'\000'};
#line 191 "tif_lzw.c"
static int LZWSetupDecode(TIFF *tif ) 
{ LZWCodecState *sp ;
  int code ;
  tdata_t tmp ;
  tdata_t tmp___0 ;
  int tmp___1 ;

  {
#line 191
  fprintf(_coverage_fout, "23\n");
#line 191
  fflush(_coverage_fout);
#line 194
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
#line 191
  fprintf(_coverage_fout, "24\n");
#line 191
  fflush(_coverage_fout);
#line 198
  if ((unsigned long )sp == (unsigned long )((void *)0)) {
    {
#line 204
    fprintf(_coverage_fout, "4\n");
#line 204
    fflush(_coverage_fout);
#line 204
    tmp = _TIFFmalloc((int )sizeof(LZWCodecState ));
#line 204
    fprintf(_coverage_fout, "5\n");
#line 204
    fflush(_coverage_fout);
#line 204
    tif->tif_data = (tidataval_t *)tmp;
    }
#line 198
    fprintf(_coverage_fout, "12\n");
#line 198
    fflush(_coverage_fout);
#line 205
    if ((unsigned long )tif->tif_data == (unsigned long )((void *)0)) {
      {
#line 207
      fprintf(_coverage_fout, "6\n");
#line 207
      fflush(_coverage_fout);
#line 207
      TIFFErrorExt(tif->tif_clientdata, "LZWPreDecode",
                   "No space for LZW state block");
      }
#line 205
      fprintf(_coverage_fout, "7\n");
#line 205
      fflush(_coverage_fout);
#line 208
      return (0);
    }
    {
#line 211
    fprintf(_coverage_fout, "8\n");
#line 211
    fflush(_coverage_fout);
#line 211
    ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab = (code_t *)((void *)0);
#line 211
    fprintf(_coverage_fout, "9\n");
#line 211
    fflush(_coverage_fout);
#line 212
    ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_decode = (int (*)(TIFF * ,
                                                                              tidata_t  ,
                                                                              tsize_t  ,
                                                                              tsample_t  ))((void *)0);
#line 211
    fprintf(_coverage_fout, "10\n");
#line 211
    fflush(_coverage_fout);
#line 217
    TIFFPredictorInit(tif);
#line 211
    fprintf(_coverage_fout, "11\n");
#line 211
    fflush(_coverage_fout);
#line 219
    sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
    }
  }
#line 191
  fprintf(_coverage_fout, "25\n");
#line 191
  fflush(_coverage_fout);
#line 222
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    {
#line 222
    fprintf(_coverage_fout, "13\n");
#line 222
    fflush(_coverage_fout);
#line 222
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 222U, "LZWSetupDecode");
    }
  }
#line 191
  fprintf(_coverage_fout, "26\n");
#line 191
  fflush(_coverage_fout);
#line 224
  if ((unsigned long )sp->dec_codetab == (unsigned long )((void *)0)) {
    {
#line 225
    fprintf(_coverage_fout, "14\n");
#line 225
    fflush(_coverage_fout);
#line 225
    tmp___0 = _TIFFmalloc((int )((unsigned long )(((1L << 12) - 1L) + 1024L) * sizeof(code_t )));
#line 225
    fprintf(_coverage_fout, "15\n");
#line 225
    fflush(_coverage_fout);
#line 225
    sp->dec_codetab = (code_t *)tmp___0;
    }
#line 224
    fprintf(_coverage_fout, "20\n");
#line 224
    fflush(_coverage_fout);
#line 226
    if ((unsigned long )sp->dec_codetab == (unsigned long )((void *)0)) {
      {
#line 227
      fprintf(_coverage_fout, "16\n");
#line 227
      fflush(_coverage_fout);
#line 227
      TIFFErrorExt(tif->tif_clientdata, module, "No space for LZW code table");
      }
#line 226
      fprintf(_coverage_fout, "17\n");
#line 226
      fflush(_coverage_fout);
#line 228
      return (0);
    }
#line 224
    fprintf(_coverage_fout, "21\n");
#line 224
    fflush(_coverage_fout);
#line 233
    code = 255;
#line 224
    fprintf(_coverage_fout, "22\n");
#line 224
    fflush(_coverage_fout);
#line 234
    while (1) {
#line 234
      fprintf(_coverage_fout, "18\n");
#line 234
      fflush(_coverage_fout);
#line 235
      (sp->dec_codetab + code)->value = (unsigned char )code;
#line 236
      (sp->dec_codetab + code)->firstchar = (unsigned char )code;
#line 237
      (sp->dec_codetab + code)->length = (unsigned short)1;
#line 238
      (sp->dec_codetab + code)->next = (struct code_ent *)((void *)0);
#line 234
      tmp___1 = code;
#line 234
      code --;
#line 234
      fprintf(_coverage_fout, "19\n");
#line 234
      fflush(_coverage_fout);
#line 234
      if (! tmp___1) {
#line 234
        break;
      }
    }
  }
#line 191
  fprintf(_coverage_fout, "27\n");
#line 191
  fflush(_coverage_fout);
#line 241
  return (1);
}
}
#line 247 "tif_lzw.c"
static int LZWPreDecode(TIFF *tif , tsample_t s ) 
{ LZWCodecState *sp ;

  {
#line 247
  fprintf(_coverage_fout, "50\n");
#line 247
  fflush(_coverage_fout);
#line 250
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
#line 247
  fprintf(_coverage_fout, "51\n");
#line 247
  fflush(_coverage_fout);
#line 253
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    {
#line 253
    fprintf(_coverage_fout, "28\n");
#line 253
    fflush(_coverage_fout);
#line 253
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 253U, "LZWPreDecode");
    }
  }
#line 247
  fprintf(_coverage_fout, "52\n");
#line 247
  fflush(_coverage_fout);
#line 257
  if ((int )*(tif->tif_rawdata + 0) == 0) {
#line 257
    fprintf(_coverage_fout, "38\n");
#line 257
    fflush(_coverage_fout);
#line 257
    if ((int )*(tif->tif_rawdata + 1) & 1) {
#line 257
      fprintf(_coverage_fout, "35\n");
#line 257
      fflush(_coverage_fout);
#line 259
      if (! sp->dec_decode) {
        {
#line 260
        fprintf(_coverage_fout, "29\n");
#line 260
        fflush(_coverage_fout);
#line 260
        TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                       "Old-style LZW codes, convert file");
#line 260
        fprintf(_coverage_fout, "30\n");
#line 260
        fflush(_coverage_fout);
#line 269
        tif->tif_decoderow = & LZWDecodeCompat;
#line 260
        fprintf(_coverage_fout, "31\n");
#line 260
        fflush(_coverage_fout);
#line 270
        tif->tif_decodestrip = & LZWDecodeCompat;
#line 260
        fprintf(_coverage_fout, "32\n");
#line 260
        fflush(_coverage_fout);
#line 271
        tif->tif_decodetile = & LZWDecodeCompat;
#line 260
        fprintf(_coverage_fout, "33\n");
#line 260
        fflush(_coverage_fout);
#line 277
        (*(tif->tif_setupdecode))(tif);
#line 260
        fprintf(_coverage_fout, "34\n");
#line 260
        fflush(_coverage_fout);
#line 278
        sp->dec_decode = & LZWDecodeCompat;
        }
      }
#line 257
      fprintf(_coverage_fout, "36\n");
#line 257
      fflush(_coverage_fout);
#line 280
      sp->base.maxcode = (unsigned short )((1L << 9) - 1L);
    } else {
#line 257
      fprintf(_coverage_fout, "37\n");
#line 257
      fflush(_coverage_fout);
#line 290
      sp->base.maxcode = (unsigned short )(((1L << 9) - 1L) - 1L);
#line 291
      sp->dec_decode = & LZWDecode;
    }
  } else {
#line 257
    fprintf(_coverage_fout, "39\n");
#line 257
    fflush(_coverage_fout);
#line 290
    sp->base.maxcode = (unsigned short )(((1L << 9) - 1L) - 1L);
#line 291
    sp->dec_decode = & LZWDecode;
  }
  {
#line 293
  fprintf(_coverage_fout, "40\n");
#line 293
  fflush(_coverage_fout);
#line 293
  sp->base.nbits = (unsigned short)9;
#line 293
  fprintf(_coverage_fout, "41\n");
#line 293
  fflush(_coverage_fout);
#line 294
  sp->base.nextbits = 0L;
#line 293
  fprintf(_coverage_fout, "42\n");
#line 293
  fflush(_coverage_fout);
#line 295
  sp->base.nextdata = 0L;
#line 293
  fprintf(_coverage_fout, "43\n");
#line 293
  fflush(_coverage_fout);
#line 297
  sp->dec_restart = 0L;
#line 293
  fprintf(_coverage_fout, "44\n");
#line 293
  fflush(_coverage_fout);
#line 298
  sp->dec_nbitsmask = (1L << 9) - 1L;
#line 293
  fprintf(_coverage_fout, "45\n");
#line 293
  fflush(_coverage_fout);
#line 300
  sp->dec_bitsleft = (long )(tif->tif_rawcc << 3);
#line 293
  fprintf(_coverage_fout, "46\n");
#line 293
  fflush(_coverage_fout);
#line 302
  sp->dec_free_entp = sp->dec_codetab + 258;
#line 293
  fprintf(_coverage_fout, "47\n");
#line 293
  fflush(_coverage_fout);
#line 310
  _TIFFmemset((void *)sp->dec_free_entp, 0,
              (int )((unsigned long )((((1L << 12) - 1L) + 1024L) - 258L) * sizeof(code_t )));
#line 293
  fprintf(_coverage_fout, "48\n");
#line 293
  fflush(_coverage_fout);
#line 311
  sp->dec_oldcodep = sp->dec_codetab + -1;
#line 293
  fprintf(_coverage_fout, "49\n");
#line 293
  fflush(_coverage_fout);
#line 312
  sp->dec_maxcodep = sp->dec_codetab + (sp->dec_nbitsmask - 1L);
  }
#line 247
  fprintf(_coverage_fout, "53\n");
#line 247
  fflush(_coverage_fout);
#line 313
  return (1);
}
}
#line 330 "tif_lzw.c"
static void codeLoop(TIFF *tif ) 
{ 

  {
  {
#line 333
  fprintf(_coverage_fout, "54\n");
#line 333
  fflush(_coverage_fout);
#line 333
  TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
               "LZWDecode: Bogus encoding, loop in the code table; scanline %d",
               tif->tif_row);
  }
#line 330
  fprintf(_coverage_fout, "55\n");
#line 330
  fflush(_coverage_fout);
#line 336
  return;
}
}
#line 338 "tif_lzw.c"
static int LZWDecode(TIFF *tif , tidata_t op0 , tsize_t occ0 , tsample_t s ) 
{ LZWCodecState *sp ;
  char *op ;
  long occ ;
  char *tp ;
  unsigned char *bp ;
  hcode_t code ;
  int len ;
  long nbits ;
  long nextbits ;
  long nextdata ;
  long nbitsmask ;
  code_t *codep ;
  code_t *free_entp ;
  code_t *maxcodep ;
  code_t *oldcodep ;
  long residue ;
  int t ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  unsigned char *tmp___2 ;
  char *tmp___3 ;
  int t___0 ;
  char *tmp___4 ;

  {
#line 338
  fprintf(_coverage_fout, "151\n");
#line 338
  fflush(_coverage_fout);
#line 341
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
#line 342
  op = (char *)op0;
#line 343
  occ = (long )occ0;
#line 338
  fprintf(_coverage_fout, "152\n");
#line 338
  fflush(_coverage_fout);
#line 352
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    {
#line 352
    fprintf(_coverage_fout, "56\n");
#line 352
    fflush(_coverage_fout);
#line 352
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 352U, "LZWDecode");
    }
  }
#line 338
  fprintf(_coverage_fout, "153\n");
#line 338
  fflush(_coverage_fout);
#line 356
  if (sp->dec_restart) {
#line 356
    fprintf(_coverage_fout, "72\n");
#line 356
    fflush(_coverage_fout);
#line 359
    codep = sp->dec_codep;
#line 360
    residue = (long )codep->length - sp->dec_restart;
#line 356
    fprintf(_coverage_fout, "73\n");
#line 356
    fflush(_coverage_fout);
#line 361
    if (residue > occ) {
#line 361
      fprintf(_coverage_fout, "65\n");
#line 361
      fflush(_coverage_fout);
#line 368
      sp->dec_restart += occ;
#line 361
      fprintf(_coverage_fout, "66\n");
#line 361
      fflush(_coverage_fout);
#line 369
      while (1) {
#line 369
        fprintf(_coverage_fout, "58\n");
#line 369
        fflush(_coverage_fout);
#line 370
        codep = codep->next;
#line 369
        residue --;
#line 369
        fprintf(_coverage_fout, "59\n");
#line 369
        fflush(_coverage_fout);
#line 369
        if (residue > occ) {
#line 369
          fprintf(_coverage_fout, "57\n");
#line 369
          fflush(_coverage_fout);
#line 369
          if (! codep) {
#line 369
            break;
          }
        } else {
#line 369
          break;
        }
      }
#line 361
      fprintf(_coverage_fout, "67\n");
#line 361
      fflush(_coverage_fout);
#line 372
      if (codep) {
#line 372
        fprintf(_coverage_fout, "63\n");
#line 372
        fflush(_coverage_fout);
#line 373
        tp = op + occ;
#line 372
        fprintf(_coverage_fout, "64\n");
#line 372
        fflush(_coverage_fout);
#line 374
        while (1) {
#line 374
          fprintf(_coverage_fout, "61\n");
#line 374
          fflush(_coverage_fout);
#line 375
          tp --;
#line 375
          *tp = (char )codep->value;
#line 376
          codep = codep->next;
#line 374
          occ --;
#line 374
          fprintf(_coverage_fout, "62\n");
#line 374
          fflush(_coverage_fout);
#line 374
          if (occ) {
#line 374
            fprintf(_coverage_fout, "60\n");
#line 374
            fflush(_coverage_fout);
#line 374
            if (! codep) {
#line 374
              break;
            }
          } else {
#line 374
            break;
          }
        }
      }
#line 361
      fprintf(_coverage_fout, "68\n");
#line 361
      fflush(_coverage_fout);
#line 379
      return (1);
    }
#line 356
    fprintf(_coverage_fout, "74\n");
#line 356
    fflush(_coverage_fout);
#line 384
    op += residue;
#line 384
    occ -= residue;
#line 385
    tp = op;
#line 356
    fprintf(_coverage_fout, "75\n");
#line 356
    fflush(_coverage_fout);
#line 386
    while (1) {
#line 386
      fprintf(_coverage_fout, "70\n");
#line 386
      fflush(_coverage_fout);
#line 388
      tp --;
#line 389
      t = (int )codep->value;
#line 390
      codep = codep->next;
#line 391
      *tp = (char )t;
#line 386
      residue --;
#line 386
      fprintf(_coverage_fout, "71\n");
#line 386
      fflush(_coverage_fout);
#line 386
      if (residue) {
#line 386
        fprintf(_coverage_fout, "69\n");
#line 386
        fflush(_coverage_fout);
#line 386
        if (! codep) {
#line 386
          break;
        }
      } else {
#line 386
        break;
      }
    }
#line 356
    fprintf(_coverage_fout, "76\n");
#line 356
    fflush(_coverage_fout);
#line 393
    sp->dec_restart = 0L;
  }
#line 338
  fprintf(_coverage_fout, "154\n");
#line 338
  fflush(_coverage_fout);
#line 396
  bp = tif->tif_rawcp;
#line 397
  nbits = (long )sp->base.nbits;
#line 398
  nextdata = sp->base.nextdata;
#line 399
  nextbits = sp->base.nextbits;
#line 400
  nbitsmask = sp->dec_nbitsmask;
#line 401
  oldcodep = sp->dec_oldcodep;
#line 402
  free_entp = sp->dec_free_entp;
#line 403
  maxcodep = sp->dec_maxcodep;
#line 338
  fprintf(_coverage_fout, "155\n");
#line 338
  fflush(_coverage_fout);
#line 405
  while (1) {
#line 405
    fprintf(_coverage_fout, "135\n");
#line 405
    fflush(_coverage_fout);
#line 405
    if (! (occ > 0L)) {
#line 405
      break;
    }
#line 405
    fprintf(_coverage_fout, "136\n");
#line 405
    fflush(_coverage_fout);
#line 406
    if (sp->dec_bitsleft < nbits) {
      {
#line 406
      fprintf(_coverage_fout, "77\n");
#line 406
      fflush(_coverage_fout);
#line 406
      TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Strip %d not terminated with EOI code",
                     tif->tif_curstrip);
#line 406
      fprintf(_coverage_fout, "78\n");
#line 406
      fflush(_coverage_fout);
#line 406
      code = (unsigned short)257;
      }
    } else {
#line 406
      fprintf(_coverage_fout, "80\n");
#line 406
      fflush(_coverage_fout);
#line 406
      tmp = bp;
#line 406
      bp ++;
#line 406
      nextdata = (nextdata << 8) | (long )*tmp;
#line 406
      nextbits += 8L;
#line 406
      fprintf(_coverage_fout, "81\n");
#line 406
      fflush(_coverage_fout);
#line 406
      if (nextbits < nbits) {
#line 406
        fprintf(_coverage_fout, "79\n");
#line 406
        fflush(_coverage_fout);
#line 406
        tmp___0 = bp;
#line 406
        bp ++;
#line 406
        nextdata = (nextdata << 8) | (long )*tmp___0;
#line 406
        nextbits += 8L;
      }
#line 406
      fprintf(_coverage_fout, "82\n");
#line 406
      fflush(_coverage_fout);
#line 406
      code = (unsigned short )((nextdata >> (nextbits - nbits)) & nbitsmask);
#line 406
      nextbits -= nbits;
#line 406
      sp->dec_bitsleft -= nbits;
    }
#line 405
    fprintf(_coverage_fout, "137\n");
#line 405
    fflush(_coverage_fout);
#line 407
    if ((int )code == 257) {
#line 408
      break;
    }
#line 405
    fprintf(_coverage_fout, "138\n");
#line 405
    fflush(_coverage_fout);
#line 409
    if ((int )code == 256) {
#line 409
      fprintf(_coverage_fout, "89\n");
#line 409
      fflush(_coverage_fout);
#line 410
      free_entp = sp->dec_codetab + 258;
#line 411
      nbits = 9L;
#line 412
      nbitsmask = (1L << 9) - 1L;
#line 413
      maxcodep = (sp->dec_codetab + nbitsmask) - 1;
#line 409
      fprintf(_coverage_fout, "90\n");
#line 409
      fflush(_coverage_fout);
#line 414
      if (sp->dec_bitsleft < nbits) {
        {
#line 414
        fprintf(_coverage_fout, "83\n");
#line 414
        fflush(_coverage_fout);
#line 414
        TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                       "LZWDecode: Strip %d not terminated with EOI code",
                       tif->tif_curstrip);
#line 414
        fprintf(_coverage_fout, "84\n");
#line 414
        fflush(_coverage_fout);
#line 414
        code = (unsigned short)257;
        }
      } else {
#line 414
        fprintf(_coverage_fout, "86\n");
#line 414
        fflush(_coverage_fout);
#line 414
        tmp___1 = bp;
#line 414
        bp ++;
#line 414
        nextdata = (nextdata << 8) | (long )*tmp___1;
#line 414
        nextbits += 8L;
#line 414
        fprintf(_coverage_fout, "87\n");
#line 414
        fflush(_coverage_fout);
#line 414
        if (nextbits < nbits) {
#line 414
          fprintf(_coverage_fout, "85\n");
#line 414
          fflush(_coverage_fout);
#line 414
          tmp___2 = bp;
#line 414
          bp ++;
#line 414
          nextdata = (nextdata << 8) | (long )*tmp___2;
#line 414
          nextbits += 8L;
        }
#line 414
        fprintf(_coverage_fout, "88\n");
#line 414
        fflush(_coverage_fout);
#line 414
        code = (unsigned short )((nextdata >> (nextbits - nbits)) & nbitsmask);
#line 414
        nextbits -= nbits;
#line 414
        sp->dec_bitsleft -= nbits;
      }
#line 409
      fprintf(_coverage_fout, "91\n");
#line 409
      fflush(_coverage_fout);
#line 415
      if ((int )code == 257) {
#line 416
        break;
      }
#line 409
      fprintf(_coverage_fout, "92\n");
#line 409
      fflush(_coverage_fout);
#line 417
      tmp___3 = op;
#line 417
      op ++;
#line 417
      *tmp___3 = (char )code;
#line 417
      occ --;
#line 418
      oldcodep = sp->dec_codetab + (int )code;
#line 419
      continue;
    }
#line 405
    fprintf(_coverage_fout, "139\n");
#line 405
    fflush(_coverage_fout);
#line 421
    codep = sp->dec_codetab + (int )code;
#line 405
    fprintf(_coverage_fout, "140\n");
#line 405
    fflush(_coverage_fout);
#line 426
    if ((unsigned long )free_entp < (unsigned long )(sp->dec_codetab + 0)) {
      {
#line 428
      fprintf(_coverage_fout, "93\n");
#line 428
      fflush(_coverage_fout);
#line 428
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecode: Corrupted LZW table at scanline %d", tif->tif_row);
      }
#line 426
      fprintf(_coverage_fout, "94\n");
#line 426
      fflush(_coverage_fout);
#line 431
      return (0);
    } else {
#line 426
      fprintf(_coverage_fout, "97\n");
#line 426
      fflush(_coverage_fout);
#line 426
      if ((unsigned long )free_entp >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        {
#line 428
        fprintf(_coverage_fout, "95\n");
#line 428
        fflush(_coverage_fout);
#line 428
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        }
#line 426
        fprintf(_coverage_fout, "96\n");
#line 426
        fflush(_coverage_fout);
#line 431
        return (0);
      }
    }
#line 405
    fprintf(_coverage_fout, "141\n");
#line 405
    fflush(_coverage_fout);
#line 434
    free_entp->next = oldcodep;
#line 405
    fprintf(_coverage_fout, "142\n");
#line 405
    fflush(_coverage_fout);
#line 435
    if ((unsigned long )free_entp->next < (unsigned long )(sp->dec_codetab + 0)) {
      {
#line 437
      fprintf(_coverage_fout, "98\n");
#line 437
      fflush(_coverage_fout);
#line 437
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecode: Corrupted LZW table at scanline %d", tif->tif_row);
      }
#line 435
      fprintf(_coverage_fout, "99\n");
#line 435
      fflush(_coverage_fout);
#line 440
      return (0);
    } else {
#line 435
      fprintf(_coverage_fout, "102\n");
#line 435
      fflush(_coverage_fout);
#line 435
      if ((unsigned long )free_entp->next >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        {
#line 437
        fprintf(_coverage_fout, "100\n");
#line 437
        fflush(_coverage_fout);
#line 437
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        }
#line 435
        fprintf(_coverage_fout, "101\n");
#line 435
        fflush(_coverage_fout);
#line 440
        return (0);
      }
    }
#line 405
    fprintf(_coverage_fout, "143\n");
#line 405
    fflush(_coverage_fout);
#line 442
    free_entp->firstchar = (free_entp->next)->firstchar;
#line 443
    free_entp->length = (unsigned short )((int )(free_entp->next)->length + 1);
#line 405
    fprintf(_coverage_fout, "144\n");
#line 405
    fflush(_coverage_fout);
#line 444
    if ((unsigned long )codep < (unsigned long )free_entp) {
#line 444
      fprintf(_coverage_fout, "103\n");
#line 444
      fflush(_coverage_fout);
#line 444
      free_entp->value = codep->firstchar;
    } else {
#line 444
      fprintf(_coverage_fout, "104\n");
#line 444
      fflush(_coverage_fout);
#line 444
      free_entp->value = free_entp->firstchar;
    }
#line 405
    fprintf(_coverage_fout, "145\n");
#line 405
    fflush(_coverage_fout);
#line 446
    free_entp ++;
#line 405
    fprintf(_coverage_fout, "146\n");
#line 405
    fflush(_coverage_fout);
#line 446
    if ((unsigned long )free_entp > (unsigned long )maxcodep) {
#line 446
      fprintf(_coverage_fout, "106\n");
#line 446
      fflush(_coverage_fout);
#line 447
      nbits ++;
#line 446
      fprintf(_coverage_fout, "107\n");
#line 446
      fflush(_coverage_fout);
#line 447
      if (nbits > 12L) {
#line 447
        fprintf(_coverage_fout, "105\n");
#line 447
        fflush(_coverage_fout);
#line 448
        nbits = 12L;
      }
#line 446
      fprintf(_coverage_fout, "108\n");
#line 446
      fflush(_coverage_fout);
#line 449
      nbitsmask = (1L << nbits) - 1L;
#line 450
      maxcodep = (sp->dec_codetab + nbitsmask) - 1;
    }
#line 405
    fprintf(_coverage_fout, "147\n");
#line 405
    fflush(_coverage_fout);
#line 452
    oldcodep = codep;
#line 405
    fprintf(_coverage_fout, "148\n");
#line 405
    fflush(_coverage_fout);
#line 453
    if ((int )code >= 256) {
#line 453
      fprintf(_coverage_fout, "128\n");
#line 453
      fflush(_coverage_fout);
#line 458
      if ((int )codep->length == 0) {
        {
#line 459
        fprintf(_coverage_fout, "109\n");
#line 459
        fflush(_coverage_fout);
#line 459
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Wrong length of decoded string: data probably corrupted at scanline %d",
                     tif->tif_row);
        }
#line 458
        fprintf(_coverage_fout, "110\n");
#line 458
        fflush(_coverage_fout);
#line 463
        return (0);
      }
#line 453
      fprintf(_coverage_fout, "129\n");
#line 453
      fflush(_coverage_fout);
#line 465
      if ((long )codep->length > occ) {
#line 465
        fprintf(_coverage_fout, "121\n");
#line 465
        fflush(_coverage_fout);
#line 472
        sp->dec_codep = codep;
#line 465
        fprintf(_coverage_fout, "122\n");
#line 465
        fflush(_coverage_fout);
#line 473
        while (1) {
#line 473
          fprintf(_coverage_fout, "112\n");
#line 473
          fflush(_coverage_fout);
#line 474
          codep = codep->next;
#line 473
          fprintf(_coverage_fout, "113\n");
#line 473
          fflush(_coverage_fout);
#line 473
          if (codep) {
#line 473
            fprintf(_coverage_fout, "111\n");
#line 473
            fflush(_coverage_fout);
#line 473
            if (! ((long )codep->length > occ)) {
#line 473
              break;
            }
          } else {
#line 473
            break;
          }
        }
#line 465
        fprintf(_coverage_fout, "123\n");
#line 465
        fflush(_coverage_fout);
#line 476
        if (codep) {
#line 476
          fprintf(_coverage_fout, "118\n");
#line 476
          fflush(_coverage_fout);
#line 477
          sp->dec_restart = occ;
#line 478
          tp = op + occ;
#line 476
          fprintf(_coverage_fout, "119\n");
#line 476
          fflush(_coverage_fout);
#line 479
          while (1) {
#line 479
            fprintf(_coverage_fout, "115\n");
#line 479
            fflush(_coverage_fout);
#line 480
            tp --;
#line 480
            *tp = (char )codep->value;
#line 481
            codep = codep->next;
#line 479
            occ --;
#line 479
            fprintf(_coverage_fout, "116\n");
#line 479
            fflush(_coverage_fout);
#line 479
            if (occ) {
#line 479
              fprintf(_coverage_fout, "114\n");
#line 479
              fflush(_coverage_fout);
#line 479
              if (! codep) {
#line 479
                break;
              }
            } else {
#line 479
              break;
            }
          }
#line 476
          fprintf(_coverage_fout, "120\n");
#line 476
          fflush(_coverage_fout);
#line 483
          if (codep) {
            {
#line 484
            fprintf(_coverage_fout, "117\n");
#line 484
            fflush(_coverage_fout);
#line 484
            codeLoop(tif);
            }
          }
        }
#line 486
        break;
      }
#line 453
      fprintf(_coverage_fout, "130\n");
#line 453
      fflush(_coverage_fout);
#line 488
      len = (int )codep->length;
#line 489
      tp = op + len;
#line 453
      fprintf(_coverage_fout, "131\n");
#line 453
      fflush(_coverage_fout);
#line 490
      while (1) {
#line 490
        fprintf(_coverage_fout, "125\n");
#line 490
        fflush(_coverage_fout);
#line 492
        tp --;
#line 493
        t___0 = (int )codep->value;
#line 494
        codep = codep->next;
#line 495
        *tp = (char )t___0;
#line 490
        fprintf(_coverage_fout, "126\n");
#line 490
        fflush(_coverage_fout);
#line 490
        if (codep) {
#line 490
          fprintf(_coverage_fout, "124\n");
#line 490
          fflush(_coverage_fout);
#line 490
          if (! ((unsigned long )tp > (unsigned long )op)) {
#line 490
            break;
          }
        } else {
#line 490
          break;
        }
      }
#line 453
      fprintf(_coverage_fout, "132\n");
#line 453
      fflush(_coverage_fout);
#line 497
      if (codep) {
        {
#line 498
        fprintf(_coverage_fout, "127\n");
#line 498
        fflush(_coverage_fout);
#line 498
        codeLoop(tif);
        }
#line 499
        break;
      }
#line 453
      fprintf(_coverage_fout, "133\n");
#line 453
      fflush(_coverage_fout);
#line 501
      op += len;
#line 501
      occ -= (long )len;
    } else {
#line 453
      fprintf(_coverage_fout, "134\n");
#line 453
      fflush(_coverage_fout);
#line 503
      tmp___4 = op;
#line 503
      op ++;
#line 503
      *tmp___4 = (char )code;
#line 503
      occ --;
    }
  }
#line 338
  fprintf(_coverage_fout, "156\n");
#line 338
  fflush(_coverage_fout);
#line 506
  tif->tif_rawcp = bp;
#line 507
  sp->base.nbits = (unsigned short )nbits;
#line 508
  sp->base.nextdata = nextdata;
#line 509
  sp->base.nextbits = nextbits;
#line 510
  sp->dec_nbitsmask = nbitsmask;
#line 511
  sp->dec_oldcodep = oldcodep;
#line 512
  sp->dec_free_entp = free_entp;
#line 513
  sp->dec_maxcodep = maxcodep;
#line 338
  fprintf(_coverage_fout, "157\n");
#line 338
  fflush(_coverage_fout);
#line 515
  if (occ > 0L) {
    {
#line 516
    fprintf(_coverage_fout, "149\n");
#line 516
    fflush(_coverage_fout);
#line 516
    TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                 "LZWDecode: Not enough data at scanline %d (short %d bytes)",
                 tif->tif_row, occ);
    }
#line 515
    fprintf(_coverage_fout, "150\n");
#line 515
    fflush(_coverage_fout);
#line 519
    return (0);
  }
#line 338
  fprintf(_coverage_fout, "158\n");
#line 338
  fflush(_coverage_fout);
#line 521
  return (1);
}
}
#line 540 "tif_lzw.c"
static int LZWDecodeCompat(TIFF *tif , tidata_t op0 , tsize_t occ0 ,
                           tsample_t s ) 
{ LZWCodecState *sp ;
  char *op ;
  long occ ;
  char *tp ;
  unsigned char *bp ;
  int code ;
  int nbits ;
  long nextbits ;
  long nextdata ;
  long nbitsmask ;
  code_t *codep ;
  code_t *free_entp ;
  code_t *maxcodep ;
  code_t *oldcodep ;
  long residue ;
  unsigned char *tmp ;
  unsigned char *tmp___0 ;
  unsigned char *tmp___1 ;
  unsigned char *tmp___2 ;
  char *tmp___3 ;
  char *tmp___4 ;

  {
#line 540
  fprintf(_coverage_fout, "241\n");
#line 540
  fflush(_coverage_fout);
#line 543
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
#line 544
  op = (char *)op0;
#line 545
  occ = (long )occ0;
#line 540
  fprintf(_coverage_fout, "242\n");
#line 540
  fflush(_coverage_fout);
#line 553
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    {
#line 553
    fprintf(_coverage_fout, "159\n");
#line 553
    fflush(_coverage_fout);
#line 553
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 553U, "LZWDecodeCompat");
    }
  }
#line 540
  fprintf(_coverage_fout, "243\n");
#line 540
  fflush(_coverage_fout);
#line 557
  if (sp->dec_restart) {
#line 557
    fprintf(_coverage_fout, "171\n");
#line 557
    fflush(_coverage_fout);
#line 560
    codep = sp->dec_codep;
#line 561
    residue = (long )codep->length - sp->dec_restart;
#line 557
    fprintf(_coverage_fout, "172\n");
#line 557
    fflush(_coverage_fout);
#line 562
    if (residue > occ) {
#line 562
      fprintf(_coverage_fout, "164\n");
#line 562
      fflush(_coverage_fout);
#line 569
      sp->dec_restart += occ;
#line 562
      fprintf(_coverage_fout, "165\n");
#line 562
      fflush(_coverage_fout);
#line 570
      while (1) {
#line 570
        fprintf(_coverage_fout, "160\n");
#line 570
        fflush(_coverage_fout);
#line 571
        codep = codep->next;
#line 570
        residue --;
#line 570
        fprintf(_coverage_fout, "161\n");
#line 570
        fflush(_coverage_fout);
#line 570
        if (! (residue > occ)) {
#line 570
          break;
        }
      }
#line 562
      fprintf(_coverage_fout, "166\n");
#line 562
      fflush(_coverage_fout);
#line 573
      tp = op + occ;
#line 562
      fprintf(_coverage_fout, "167\n");
#line 562
      fflush(_coverage_fout);
#line 574
      while (1) {
#line 574
        fprintf(_coverage_fout, "162\n");
#line 574
        fflush(_coverage_fout);
#line 575
        tp --;
#line 575
        *tp = (char )codep->value;
#line 576
        codep = codep->next;
#line 574
        occ --;
#line 574
        fprintf(_coverage_fout, "163\n");
#line 574
        fflush(_coverage_fout);
#line 574
        if (! occ) {
#line 574
          break;
        }
      }
#line 562
      fprintf(_coverage_fout, "168\n");
#line 562
      fflush(_coverage_fout);
#line 578
      return (1);
    }
#line 557
    fprintf(_coverage_fout, "173\n");
#line 557
    fflush(_coverage_fout);
#line 583
    op += residue;
#line 583
    occ -= residue;
#line 584
    tp = op;
#line 557
    fprintf(_coverage_fout, "174\n");
#line 557
    fflush(_coverage_fout);
#line 585
    while (1) {
#line 585
      fprintf(_coverage_fout, "169\n");
#line 585
      fflush(_coverage_fout);
#line 586
      tp --;
#line 586
      *tp = (char )codep->value;
#line 587
      codep = codep->next;
#line 585
      residue --;
#line 585
      fprintf(_coverage_fout, "170\n");
#line 585
      fflush(_coverage_fout);
#line 585
      if (! residue) {
#line 585
        break;
      }
    }
#line 557
    fprintf(_coverage_fout, "175\n");
#line 557
    fflush(_coverage_fout);
#line 589
    sp->dec_restart = 0L;
  }
#line 540
  fprintf(_coverage_fout, "244\n");
#line 540
  fflush(_coverage_fout);
#line 592
  bp = tif->tif_rawcp;
#line 593
  nbits = (int )sp->base.nbits;
#line 594
  nextdata = sp->base.nextdata;
#line 595
  nextbits = sp->base.nextbits;
#line 596
  nbitsmask = sp->dec_nbitsmask;
#line 597
  oldcodep = sp->dec_oldcodep;
#line 598
  free_entp = sp->dec_free_entp;
#line 599
  maxcodep = sp->dec_maxcodep;
#line 540
  fprintf(_coverage_fout, "245\n");
#line 540
  fflush(_coverage_fout);
#line 601
  while (1) {
#line 601
    fprintf(_coverage_fout, "225\n");
#line 601
    fflush(_coverage_fout);
#line 601
    if (! (occ > 0L)) {
#line 601
      break;
    }
#line 601
    fprintf(_coverage_fout, "226\n");
#line 601
    fflush(_coverage_fout);
#line 602
    if (sp->dec_bitsleft < (long )nbits) {
      {
#line 602
      fprintf(_coverage_fout, "176\n");
#line 602
      fflush(_coverage_fout);
#line 602
      TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Strip %d not terminated with EOI code",
                     tif->tif_curstrip);
#line 602
      fprintf(_coverage_fout, "177\n");
#line 602
      fflush(_coverage_fout);
#line 602
      code = 257;
      }
    } else {
#line 602
      fprintf(_coverage_fout, "179\n");
#line 602
      fflush(_coverage_fout);
#line 602
      tmp = bp;
#line 602
      bp ++;
#line 602
      nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp << nextbits));
#line 602
      nextbits += 8L;
#line 602
      fprintf(_coverage_fout, "180\n");
#line 602
      fflush(_coverage_fout);
#line 602
      if (nextbits < (long )nbits) {
#line 602
        fprintf(_coverage_fout, "178\n");
#line 602
        fflush(_coverage_fout);
#line 602
        tmp___0 = bp;
#line 602
        bp ++;
#line 602
        nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp___0 << nextbits));
#line 602
        nextbits += 8L;
      }
#line 602
      fprintf(_coverage_fout, "181\n");
#line 602
      fflush(_coverage_fout);
#line 602
      code = (int )((unsigned short )(nextdata & nbitsmask));
#line 602
      nextdata >>= nbits;
#line 602
      nextbits -= (long )nbits;
#line 602
      sp->dec_bitsleft -= (long )nbits;
    }
#line 601
    fprintf(_coverage_fout, "227\n");
#line 601
    fflush(_coverage_fout);
#line 603
    if (code == 257) {
#line 604
      break;
    }
#line 601
    fprintf(_coverage_fout, "228\n");
#line 601
    fflush(_coverage_fout);
#line 605
    if (code == 256) {
#line 605
      fprintf(_coverage_fout, "188\n");
#line 605
      fflush(_coverage_fout);
#line 606
      free_entp = sp->dec_codetab + 258;
#line 607
      nbits = 9;
#line 608
      nbitsmask = (1L << 9) - 1L;
#line 609
      maxcodep = sp->dec_codetab + nbitsmask;
#line 605
      fprintf(_coverage_fout, "189\n");
#line 605
      fflush(_coverage_fout);
#line 610
      if (sp->dec_bitsleft < (long )nbits) {
        {
#line 610
        fprintf(_coverage_fout, "182\n");
#line 610
        fflush(_coverage_fout);
#line 610
        TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                       "LZWDecode: Strip %d not terminated with EOI code",
                       tif->tif_curstrip);
#line 610
        fprintf(_coverage_fout, "183\n");
#line 610
        fflush(_coverage_fout);
#line 610
        code = 257;
        }
      } else {
#line 610
        fprintf(_coverage_fout, "185\n");
#line 610
        fflush(_coverage_fout);
#line 610
        tmp___1 = bp;
#line 610
        bp ++;
#line 610
        nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp___1 << nextbits));
#line 610
        nextbits += 8L;
#line 610
        fprintf(_coverage_fout, "186\n");
#line 610
        fflush(_coverage_fout);
#line 610
        if (nextbits < (long )nbits) {
#line 610
          fprintf(_coverage_fout, "184\n");
#line 610
          fflush(_coverage_fout);
#line 610
          tmp___2 = bp;
#line 610
          bp ++;
#line 610
          nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp___2 << nextbits));
#line 610
          nextbits += 8L;
        }
#line 610
        fprintf(_coverage_fout, "187\n");
#line 610
        fflush(_coverage_fout);
#line 610
        code = (int )((unsigned short )(nextdata & nbitsmask));
#line 610
        nextdata >>= nbits;
#line 610
        nextbits -= (long )nbits;
#line 610
        sp->dec_bitsleft -= (long )nbits;
      }
#line 605
      fprintf(_coverage_fout, "190\n");
#line 605
      fflush(_coverage_fout);
#line 611
      if (code == 257) {
#line 612
        break;
      }
#line 605
      fprintf(_coverage_fout, "191\n");
#line 605
      fflush(_coverage_fout);
#line 613
      tmp___3 = op;
#line 613
      op ++;
#line 613
      *tmp___3 = (char )code;
#line 613
      occ --;
#line 614
      oldcodep = sp->dec_codetab + code;
#line 615
      continue;
    }
#line 601
    fprintf(_coverage_fout, "229\n");
#line 601
    fflush(_coverage_fout);
#line 617
    codep = sp->dec_codetab + code;
#line 601
    fprintf(_coverage_fout, "230\n");
#line 601
    fflush(_coverage_fout);
#line 622
    if ((unsigned long )free_entp < (unsigned long )(sp->dec_codetab + 0)) {
      {
#line 624
      fprintf(_coverage_fout, "192\n");
#line 624
      fflush(_coverage_fout);
#line 624
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                   tif->tif_row);
      }
#line 622
      fprintf(_coverage_fout, "193\n");
#line 622
      fflush(_coverage_fout);
#line 627
      return (0);
    } else {
#line 622
      fprintf(_coverage_fout, "196\n");
#line 622
      fflush(_coverage_fout);
#line 622
      if ((unsigned long )free_entp >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        {
#line 624
        fprintf(_coverage_fout, "194\n");
#line 624
        fflush(_coverage_fout);
#line 624
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        }
#line 622
        fprintf(_coverage_fout, "195\n");
#line 622
        fflush(_coverage_fout);
#line 627
        return (0);
      }
    }
#line 601
    fprintf(_coverage_fout, "231\n");
#line 601
    fflush(_coverage_fout);
#line 630
    free_entp->next = oldcodep;
#line 601
    fprintf(_coverage_fout, "232\n");
#line 601
    fflush(_coverage_fout);
#line 631
    if ((unsigned long )free_entp->next < (unsigned long )(sp->dec_codetab + 0)) {
      {
#line 633
      fprintf(_coverage_fout, "197\n");
#line 633
      fflush(_coverage_fout);
#line 633
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                   tif->tif_row);
      }
#line 631
      fprintf(_coverage_fout, "198\n");
#line 631
      fflush(_coverage_fout);
#line 636
      return (0);
    } else {
#line 631
      fprintf(_coverage_fout, "201\n");
#line 631
      fflush(_coverage_fout);
#line 631
      if ((unsigned long )free_entp->next >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        {
#line 633
        fprintf(_coverage_fout, "199\n");
#line 633
        fflush(_coverage_fout);
#line 633
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        }
#line 631
        fprintf(_coverage_fout, "200\n");
#line 631
        fflush(_coverage_fout);
#line 636
        return (0);
      }
    }
#line 601
    fprintf(_coverage_fout, "233\n");
#line 601
    fflush(_coverage_fout);
#line 638
    free_entp->firstchar = (free_entp->next)->firstchar;
#line 639
    free_entp->length = (unsigned short )((int )(free_entp->next)->length + 1);
#line 601
    fprintf(_coverage_fout, "234\n");
#line 601
    fflush(_coverage_fout);
#line 640
    if ((unsigned long )codep < (unsigned long )free_entp) {
#line 640
      fprintf(_coverage_fout, "202\n");
#line 640
      fflush(_coverage_fout);
#line 640
      free_entp->value = codep->firstchar;
    } else {
#line 640
      fprintf(_coverage_fout, "203\n");
#line 640
      fflush(_coverage_fout);
#line 640
      free_entp->value = free_entp->firstchar;
    }
#line 601
    fprintf(_coverage_fout, "235\n");
#line 601
    fflush(_coverage_fout);
#line 642
    free_entp ++;
#line 601
    fprintf(_coverage_fout, "236\n");
#line 601
    fflush(_coverage_fout);
#line 642
    if ((unsigned long )free_entp > (unsigned long )maxcodep) {
#line 642
      fprintf(_coverage_fout, "205\n");
#line 642
      fflush(_coverage_fout);
#line 643
      nbits ++;
#line 642
      fprintf(_coverage_fout, "206\n");
#line 642
      fflush(_coverage_fout);
#line 643
      if (nbits > 12) {
#line 643
        fprintf(_coverage_fout, "204\n");
#line 643
        fflush(_coverage_fout);
#line 644
        nbits = 12;
      }
#line 642
      fprintf(_coverage_fout, "207\n");
#line 642
      fflush(_coverage_fout);
#line 645
      nbitsmask = (1L << nbits) - 1L;
#line 646
      maxcodep = sp->dec_codetab + nbitsmask;
    }
#line 601
    fprintf(_coverage_fout, "237\n");
#line 601
    fflush(_coverage_fout);
#line 648
    oldcodep = codep;
#line 601
    fprintf(_coverage_fout, "238\n");
#line 601
    fflush(_coverage_fout);
#line 649
    if (code >= 256) {
#line 649
      fprintf(_coverage_fout, "220\n");
#line 649
      fflush(_coverage_fout);
#line 654
      if ((int )codep->length == 0) {
        {
#line 655
        fprintf(_coverage_fout, "208\n");
#line 655
        fflush(_coverage_fout);
#line 655
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecodeCompat: Wrong length of decoded string: data probably corrupted at scanline %d",
                     tif->tif_row);
        }
#line 654
        fprintf(_coverage_fout, "209\n");
#line 654
        fflush(_coverage_fout);
#line 659
        return (0);
      }
#line 649
      fprintf(_coverage_fout, "221\n");
#line 649
      fflush(_coverage_fout);
#line 661
      if ((long )codep->length > occ) {
#line 661
        fprintf(_coverage_fout, "214\n");
#line 661
        fflush(_coverage_fout);
#line 668
        sp->dec_codep = codep;
#line 661
        fprintf(_coverage_fout, "215\n");
#line 661
        fflush(_coverage_fout);
#line 669
        while (1) {
#line 669
          fprintf(_coverage_fout, "210\n");
#line 669
          fflush(_coverage_fout);
#line 670
          codep = codep->next;
#line 669
          fprintf(_coverage_fout, "211\n");
#line 669
          fflush(_coverage_fout);
#line 669
          if (! ((long )codep->length > occ)) {
#line 669
            break;
          }
        }
#line 661
        fprintf(_coverage_fout, "216\n");
#line 661
        fflush(_coverage_fout);
#line 672
        sp->dec_restart = occ;
#line 673
        tp = op + occ;
#line 661
        fprintf(_coverage_fout, "217\n");
#line 661
        fflush(_coverage_fout);
#line 674
        while (1) {
#line 674
          fprintf(_coverage_fout, "212\n");
#line 674
          fflush(_coverage_fout);
#line 675
          tp --;
#line 675
          *tp = (char )codep->value;
#line 676
          codep = codep->next;
#line 674
          occ --;
#line 674
          fprintf(_coverage_fout, "213\n");
#line 674
          fflush(_coverage_fout);
#line 674
          if (! occ) {
#line 674
            break;
          }
        }
#line 678
        break;
      }
#line 649
      fprintf(_coverage_fout, "222\n");
#line 649
      fflush(_coverage_fout);
#line 680
      op += (int )codep->length;
#line 680
      occ -= (long )codep->length;
#line 681
      tp = op;
#line 649
      fprintf(_coverage_fout, "223\n");
#line 649
      fflush(_coverage_fout);
#line 682
      while (1) {
#line 682
        fprintf(_coverage_fout, "218\n");
#line 682
        fflush(_coverage_fout);
#line 683
        tp --;
#line 683
        *tp = (char )codep->value;
#line 682
        codep = codep->next;
#line 682
        fprintf(_coverage_fout, "219\n");
#line 682
        fflush(_coverage_fout);
#line 682
        if (! ((unsigned long )codep != (unsigned long )((void *)0))) {
#line 682
          break;
        }
      }
    } else {
#line 649
      fprintf(_coverage_fout, "224\n");
#line 649
      fflush(_coverage_fout);
#line 686
      tmp___4 = op;
#line 686
      op ++;
#line 686
      *tmp___4 = (char )code;
#line 686
      occ --;
    }
  }
#line 540
  fprintf(_coverage_fout, "246\n");
#line 540
  fflush(_coverage_fout);
#line 689
  tif->tif_rawcp = bp;
#line 690
  sp->base.nbits = (unsigned short )nbits;
#line 691
  sp->base.nextdata = nextdata;
#line 692
  sp->base.nextbits = nextbits;
#line 693
  sp->dec_nbitsmask = nbitsmask;
#line 694
  sp->dec_oldcodep = oldcodep;
#line 695
  sp->dec_free_entp = free_entp;
#line 696
  sp->dec_maxcodep = maxcodep;
#line 540
  fprintf(_coverage_fout, "247\n");
#line 540
  fflush(_coverage_fout);
#line 698
  if (occ > 0L) {
    {
#line 699
    fprintf(_coverage_fout, "239\n");
#line 699
    fflush(_coverage_fout);
#line 699
    TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                 "LZWDecodeCompat: Not enough data at scanline %d (short %d bytes)",
                 tif->tif_row, occ);
    }
#line 698
    fprintf(_coverage_fout, "240\n");
#line 698
    fflush(_coverage_fout);
#line 702
    return (0);
  }
#line 540
  fprintf(_coverage_fout, "248\n");
#line 540
  fflush(_coverage_fout);
#line 704
  return (1);
}
}
#line 716
static int LZWSetupEncode(TIFF *tif ) ;
#line 716 "tif_lzw.c"
static char const   module___0[15]  = 
#line 716
  {      (char const   )'L',      (char const   )'Z',      (char const   )'W',      (char const   )'S', 
        (char const   )'e',      (char const   )'t',      (char const   )'u',      (char const   )'p', 
        (char const   )'E',      (char const   )'n',      (char const   )'c',      (char const   )'o', 
        (char const   )'d',      (char const   )'e',      (char const   )'\000'};
#line 712 "tif_lzw.c"
static int LZWSetupEncode(TIFF *tif ) 
{ LZWCodecState *sp ;
  tdata_t tmp ;

  {
#line 712
  fprintf(_coverage_fout, "254\n");
#line 712
  fflush(_coverage_fout);
#line 715
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
#line 712
  fprintf(_coverage_fout, "255\n");
#line 712
  fflush(_coverage_fout);
#line 718
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    {
#line 718
    fprintf(_coverage_fout, "249\n");
#line 718
    fflush(_coverage_fout);
#line 718
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 718U, "LZWSetupEncode");
    }
  }
  {
#line 719
  fprintf(_coverage_fout, "250\n");
#line 719
  fflush(_coverage_fout);
#line 719
  tmp = _TIFFmalloc((int )(9001UL * sizeof(hash_t )));
#line 719
  fprintf(_coverage_fout, "251\n");
#line 719
  fflush(_coverage_fout);
#line 719
  sp->enc_hashtab = (hash_t *)tmp;
  }
#line 712
  fprintf(_coverage_fout, "256\n");
#line 712
  fflush(_coverage_fout);
#line 720
  if ((unsigned long )sp->enc_hashtab == (unsigned long )((void *)0)) {
    {
#line 721
    fprintf(_coverage_fout, "252\n");
#line 721
    fflush(_coverage_fout);
#line 721
    TIFFErrorExt(tif->tif_clientdata, module___0, "No space for LZW hash table");
    }
#line 720
    fprintf(_coverage_fout, "253\n");
#line 720
    fflush(_coverage_fout);
#line 722
    return (0);
  }
#line 712
  fprintf(_coverage_fout, "257\n");
#line 712
  fflush(_coverage_fout);
#line 724
  return (1);
}
}
#line 730 "tif_lzw.c"
static int LZWPreEncode(TIFF *tif , tsample_t s ) 
{ LZWCodecState *sp ;

  {
#line 730
  fprintf(_coverage_fout, "271\n");
#line 730
  fflush(_coverage_fout);
#line 733
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
#line 730
  fprintf(_coverage_fout, "272\n");
#line 730
  fflush(_coverage_fout);
#line 736
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    {
#line 736
    fprintf(_coverage_fout, "258\n");
#line 736
    fflush(_coverage_fout);
#line 736
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 736U, "LZWPreEncode");
    }
  }
  {
#line 737
  fprintf(_coverage_fout, "259\n");
#line 737
  fflush(_coverage_fout);
#line 737
  sp->base.nbits = (unsigned short)9;
#line 737
  fprintf(_coverage_fout, "260\n");
#line 737
  fflush(_coverage_fout);
#line 738
  sp->base.maxcode = (unsigned short )((1L << 9) - 1L);
#line 737
  fprintf(_coverage_fout, "261\n");
#line 737
  fflush(_coverage_fout);
#line 739
  sp->base.free_ent = (unsigned short)258;
#line 737
  fprintf(_coverage_fout, "262\n");
#line 737
  fflush(_coverage_fout);
#line 740
  sp->base.nextbits = 0L;
#line 737
  fprintf(_coverage_fout, "263\n");
#line 737
  fflush(_coverage_fout);
#line 741
  sp->base.nextdata = 0L;
#line 737
  fprintf(_coverage_fout, "264\n");
#line 737
  fflush(_coverage_fout);
#line 742
  sp->enc_checkpoint = 10000L;
#line 737
  fprintf(_coverage_fout, "265\n");
#line 737
  fflush(_coverage_fout);
#line 743
  sp->enc_ratio = 0L;
#line 737
  fprintf(_coverage_fout, "266\n");
#line 737
  fflush(_coverage_fout);
#line 744
  sp->enc_incount = 0L;
#line 737
  fprintf(_coverage_fout, "267\n");
#line 737
  fflush(_coverage_fout);
#line 745
  sp->enc_outcount = 0L;
#line 737
  fprintf(_coverage_fout, "268\n");
#line 737
  fflush(_coverage_fout);
#line 750
  sp->enc_rawlimit = ((tif->tif_rawdata + tif->tif_rawdatasize) - 1) - 4;
#line 737
  fprintf(_coverage_fout, "269\n");
#line 737
  fflush(_coverage_fout);
#line 751
  cl_hash(sp);
#line 737
  fprintf(_coverage_fout, "270\n");
#line 737
  fflush(_coverage_fout);
#line 752
  sp->enc_oldcode = 65535;
  }
#line 730
  fprintf(_coverage_fout, "273\n");
#line 730
  fflush(_coverage_fout);
#line 753
  return (1);
}
}
#line 789 "tif_lzw.c"
static int LZWEncode(TIFF *tif , tidata_t bp , tsize_t cc , tsample_t s ) 
{ register LZWCodecState *sp ;
  register long fcode ;
  register hash_t *hp ;
  register int h ;
  register int c ;
  hcode_t ent ;
  long disp ;
  long incount ;
  long outcount ;
  long checkpoint ;
  long nextdata ;
  long nextbits ;
  int free_ent ;
  int maxcode ;
  int nbits ;
  tidata_t op ;
  tidata_t limit ;
  tidata_t tmp ;
  tidata_t tmp___0 ;
  tidata_t tmp___1 ;
  tidata_t tmp___2 ;
  tidata_t tmp___3 ;
  tidata_t tmp___4 ;
  int tmp___5 ;
  tidata_t tmp___6 ;
  tidata_t tmp___7 ;
  long rat ;
  tidata_t tmp___8 ;
  tidata_t tmp___9 ;

  {
#line 789
  fprintf(_coverage_fout, "349\n");
#line 789
  fflush(_coverage_fout);
#line 792
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
#line 789
  fprintf(_coverage_fout, "350\n");
#line 789
  fflush(_coverage_fout);
#line 804
  if ((unsigned long )sp == (unsigned long )((void *)0)) {
#line 804
    fprintf(_coverage_fout, "274\n");
#line 804
    fflush(_coverage_fout);
#line 805
    return (0);
  }
#line 789
  fprintf(_coverage_fout, "351\n");
#line 789
  fflush(_coverage_fout);
#line 809
  incount = sp->enc_incount;
#line 810
  outcount = sp->enc_outcount;
#line 811
  checkpoint = sp->enc_checkpoint;
#line 812
  nextdata = sp->base.nextdata;
#line 813
  nextbits = sp->base.nextbits;
#line 814
  free_ent = (int )sp->base.free_ent;
#line 815
  maxcode = (int )sp->base.maxcode;
#line 816
  nbits = (int )sp->base.nbits;
#line 817
  op = tif->tif_rawcp;
#line 818
  limit = sp->enc_rawlimit;
#line 819
  ent = (unsigned short )sp->enc_oldcode;
#line 789
  fprintf(_coverage_fout, "352\n");
#line 789
  fflush(_coverage_fout);
#line 821
  if ((int )ent == 65535) {
#line 821
    fprintf(_coverage_fout, "279\n");
#line 821
    fflush(_coverage_fout);
#line 821
    if (cc > 0) {
#line 821
      fprintf(_coverage_fout, "276\n");
#line 821
      fflush(_coverage_fout);
#line 827
      nextdata = (nextdata << nbits) | 256L;
#line 827
      nextbits += (long )nbits;
#line 827
      tmp = op;
#line 827
      op ++;
#line 827
      *tmp = (unsigned char )(nextdata >> (nextbits - 8L));
#line 827
      nextbits -= 8L;
#line 821
      fprintf(_coverage_fout, "277\n");
#line 821
      fflush(_coverage_fout);
#line 827
      if (nextbits >= 8L) {
#line 827
        fprintf(_coverage_fout, "275\n");
#line 827
        fflush(_coverage_fout);
#line 827
        tmp___0 = op;
#line 827
        op ++;
#line 827
        *tmp___0 = (unsigned char )(nextdata >> (nextbits - 8L));
#line 827
        nextbits -= 8L;
      }
#line 821
      fprintf(_coverage_fout, "278\n");
#line 821
      fflush(_coverage_fout);
#line 827
      outcount += (long )nbits;
#line 828
      tmp___1 = bp;
#line 828
      bp ++;
#line 828
      ent = (unsigned short )*tmp___1;
#line 828
      cc --;
#line 828
      incount ++;
    }
  }
#line 789
  fprintf(_coverage_fout, "353\n");
#line 789
  fflush(_coverage_fout);
#line 830
  while (1) {
#line 830
    fprintf(_coverage_fout, "339\n");
#line 830
    fflush(_coverage_fout);
#line 830
    if (! (cc > 0)) {
#line 830
      break;
    }
#line 830
    fprintf(_coverage_fout, "340\n");
#line 830
    fflush(_coverage_fout);
#line 831
    tmp___2 = bp;
#line 831
    bp ++;
#line 831
    c = (int )*tmp___2;
#line 831
    cc --;
#line 831
    incount ++;
#line 832
    fcode = ((long )c << 12) + (long )ent;
#line 833
    h = (c << 5) ^ (int )ent;
#line 841
    hp = sp->enc_hashtab + h;
#line 830
    fprintf(_coverage_fout, "341\n");
#line 830
    fflush(_coverage_fout);
#line 842
    if (hp->hash == fcode) {
#line 842
      fprintf(_coverage_fout, "280\n");
#line 842
      fflush(_coverage_fout);
#line 843
      ent = hp->code;
#line 844
      continue;
    }
#line 830
    fprintf(_coverage_fout, "342\n");
#line 830
    fflush(_coverage_fout);
#line 846
    if (hp->hash >= 0L) {
#line 846
      fprintf(_coverage_fout, "289\n");
#line 846
      fflush(_coverage_fout);
#line 850
      disp = 9001L - (long )h;
#line 846
      fprintf(_coverage_fout, "290\n");
#line 846
      fflush(_coverage_fout);
#line 851
      if (h == 0) {
#line 851
        fprintf(_coverage_fout, "281\n");
#line 851
        fflush(_coverage_fout);
#line 852
        disp = 1L;
      }
#line 846
      fprintf(_coverage_fout, "291\n");
#line 846
      fflush(_coverage_fout);
#line 853
      while (1) {
#line 853
        fprintf(_coverage_fout, "284\n");
#line 853
        fflush(_coverage_fout);
#line 858
        h = (int )((long )h - disp);
#line 853
        fprintf(_coverage_fout, "285\n");
#line 853
        fflush(_coverage_fout);
#line 858
        if (h < 0) {
#line 858
          fprintf(_coverage_fout, "282\n");
#line 858
          fflush(_coverage_fout);
#line 859
          h = (int )((long )h + 9001L);
        }
#line 853
        fprintf(_coverage_fout, "286\n");
#line 853
        fflush(_coverage_fout);
#line 860
        hp = sp->enc_hashtab + h;
#line 853
        fprintf(_coverage_fout, "287\n");
#line 853
        fflush(_coverage_fout);
#line 861
        if (hp->hash == fcode) {
#line 861
          fprintf(_coverage_fout, "283\n");
#line 861
          fflush(_coverage_fout);
#line 862
          ent = hp->code;
          goto hit;
        }
#line 853
        fprintf(_coverage_fout, "288\n");
#line 853
        fflush(_coverage_fout);
#line 853
        if (! (hp->hash >= 0L)) {
#line 853
          break;
        }
      }
    }
#line 830
    fprintf(_coverage_fout, "343\n");
#line 830
    fflush(_coverage_fout);
#line 876
    if ((unsigned long )op > (unsigned long )limit) {
      {
#line 877
      fprintf(_coverage_fout, "292\n");
#line 877
      fflush(_coverage_fout);
#line 877
      tif->tif_rawcc = op - tif->tif_rawdata;
#line 877
      fprintf(_coverage_fout, "293\n");
#line 877
      fflush(_coverage_fout);
#line 878
      TIFFFlushData1(tif);
#line 877
      fprintf(_coverage_fout, "294\n");
#line 877
      fflush(_coverage_fout);
#line 879
      op = tif->tif_rawdata;
      }
    }
#line 830
    fprintf(_coverage_fout, "344\n");
#line 830
    fflush(_coverage_fout);
#line 881
    nextdata = (nextdata << nbits) | (long )ent;
#line 881
    nextbits += (long )nbits;
#line 881
    tmp___3 = op;
#line 881
    op ++;
#line 881
    *tmp___3 = (unsigned char )(nextdata >> (nextbits - 8L));
#line 881
    nextbits -= 8L;
#line 830
    fprintf(_coverage_fout, "345\n");
#line 830
    fflush(_coverage_fout);
#line 881
    if (nextbits >= 8L) {
#line 881
      fprintf(_coverage_fout, "295\n");
#line 881
      fflush(_coverage_fout);
#line 881
      tmp___4 = op;
#line 881
      op ++;
#line 881
      *tmp___4 = (unsigned char )(nextdata >> (nextbits - 8L));
#line 881
      nextbits -= 8L;
    }
#line 830
    fprintf(_coverage_fout, "346\n");
#line 830
    fflush(_coverage_fout);
#line 881
    outcount += (long )nbits;
#line 882
    ent = (unsigned short )c;
#line 883
    tmp___5 = free_ent;
#line 883
    free_ent ++;
#line 883
    hp->code = (unsigned short )tmp___5;
#line 884
    hp->hash = fcode;
#line 830
    fprintf(_coverage_fout, "347\n");
#line 830
    fflush(_coverage_fout);
#line 885
    if ((long )free_ent == ((1L << 12) - 1L) - 1L) {
      {
#line 887
      fprintf(_coverage_fout, "296\n");
#line 887
      fflush(_coverage_fout);
#line 887
      cl_hash(sp);
#line 887
      fprintf(_coverage_fout, "297\n");
#line 887
      fflush(_coverage_fout);
#line 888
      sp->enc_ratio = 0L;
#line 887
      fprintf(_coverage_fout, "298\n");
#line 887
      fflush(_coverage_fout);
#line 889
      incount = 0L;
#line 887
      fprintf(_coverage_fout, "299\n");
#line 887
      fflush(_coverage_fout);
#line 890
      outcount = 0L;
#line 887
      fprintf(_coverage_fout, "300\n");
#line 887
      fflush(_coverage_fout);
#line 891
      free_ent = 258;
#line 887
      fprintf(_coverage_fout, "301\n");
#line 887
      fflush(_coverage_fout);
#line 892
      nextdata = (nextdata << nbits) | 256L;
#line 887
      fprintf(_coverage_fout, "302\n");
#line 887
      fflush(_coverage_fout);
#line 892
      nextbits += (long )nbits;
#line 887
      fprintf(_coverage_fout, "303\n");
#line 887
      fflush(_coverage_fout);
#line 892
      tmp___6 = op;
#line 887
      fprintf(_coverage_fout, "304\n");
#line 887
      fflush(_coverage_fout);
#line 892
      op ++;
#line 887
      fprintf(_coverage_fout, "305\n");
#line 887
      fflush(_coverage_fout);
#line 892
      *tmp___6 = (unsigned char )(nextdata >> (nextbits - 8L));
#line 887
      fprintf(_coverage_fout, "306\n");
#line 887
      fflush(_coverage_fout);
#line 892
      nextbits -= 8L;
      }
#line 885
      fprintf(_coverage_fout, "308\n");
#line 885
      fflush(_coverage_fout);
#line 892
      if (nextbits >= 8L) {
#line 892
        fprintf(_coverage_fout, "307\n");
#line 892
        fflush(_coverage_fout);
#line 892
        tmp___7 = op;
#line 892
        op ++;
#line 892
        *tmp___7 = (unsigned char )(nextdata >> (nextbits - 8L));
#line 892
        nextbits -= 8L;
      }
#line 885
      fprintf(_coverage_fout, "309\n");
#line 885
      fflush(_coverage_fout);
#line 892
      outcount += (long )nbits;
#line 893
      nbits = 9;
#line 894
      maxcode = (int )((1L << 9) - 1L);
    } else {
#line 885
      fprintf(_coverage_fout, "338\n");
#line 885
      fflush(_coverage_fout);
#line 900
      if (free_ent > maxcode) {
#line 900
        fprintf(_coverage_fout, "311\n");
#line 900
        fflush(_coverage_fout);
#line 901
        nbits ++;
#line 900
        fprintf(_coverage_fout, "312\n");
#line 900
        fflush(_coverage_fout);
#line 902
        if (! (nbits <= 12)) {
          {
#line 902
          fprintf(_coverage_fout, "310\n");
#line 902
          fflush(_coverage_fout);
#line 902
          __assert_fail("nbits <= 12", "tif_lzw.c", 902U, "LZWEncode");
          }
        }
#line 900
        fprintf(_coverage_fout, "313\n");
#line 900
        fflush(_coverage_fout);
#line 903
        maxcode = (int )((1L << nbits) - 1L);
      } else {
#line 900
        fprintf(_coverage_fout, "337\n");
#line 900
        fflush(_coverage_fout);
#line 904
        if (incount >= checkpoint) {
#line 904
          fprintf(_coverage_fout, "334\n");
#line 904
          fflush(_coverage_fout);
#line 912
          checkpoint = incount + 10000L;
#line 904
          fprintf(_coverage_fout, "335\n");
#line 904
          fflush(_coverage_fout);
#line 913
          if (incount > 8388607L) {
#line 913
            fprintf(_coverage_fout, "316\n");
#line 913
            fflush(_coverage_fout);
#line 913
            rat = outcount >> 8;
#line 913
            fprintf(_coverage_fout, "317\n");
#line 913
            fflush(_coverage_fout);
#line 913
            if (rat == 0L) {
#line 913
              fprintf(_coverage_fout, "314\n");
#line 913
              fflush(_coverage_fout);
#line 913
              rat = 2147483647L;
            } else {
#line 913
              fprintf(_coverage_fout, "315\n");
#line 913
              fflush(_coverage_fout);
#line 913
              rat = incount / rat;
            }
          } else {
#line 913
            fprintf(_coverage_fout, "318\n");
#line 913
            fflush(_coverage_fout);
#line 913
            rat = (incount << 8) / outcount;
          }
#line 904
          fprintf(_coverage_fout, "336\n");
#line 904
          fflush(_coverage_fout);
#line 914
          if (rat <= sp->enc_ratio) {
            {
#line 915
            fprintf(_coverage_fout, "319\n");
#line 915
            fflush(_coverage_fout);
#line 915
            cl_hash(sp);
#line 915
            fprintf(_coverage_fout, "320\n");
#line 915
            fflush(_coverage_fout);
#line 916
            sp->enc_ratio = 0L;
#line 915
            fprintf(_coverage_fout, "321\n");
#line 915
            fflush(_coverage_fout);
#line 917
            incount = 0L;
#line 915
            fprintf(_coverage_fout, "322\n");
#line 915
            fflush(_coverage_fout);
#line 918
            outcount = 0L;
#line 915
            fprintf(_coverage_fout, "323\n");
#line 915
            fflush(_coverage_fout);
#line 919
            free_ent = 258;
#line 915
            fprintf(_coverage_fout, "324\n");
#line 915
            fflush(_coverage_fout);
#line 920
            nextdata = (nextdata << nbits) | 256L;
#line 915
            fprintf(_coverage_fout, "325\n");
#line 915
            fflush(_coverage_fout);
#line 920
            nextbits += (long )nbits;
#line 915
            fprintf(_coverage_fout, "326\n");
#line 915
            fflush(_coverage_fout);
#line 920
            tmp___8 = op;
#line 915
            fprintf(_coverage_fout, "327\n");
#line 915
            fflush(_coverage_fout);
#line 920
            op ++;
#line 915
            fprintf(_coverage_fout, "328\n");
#line 915
            fflush(_coverage_fout);
#line 920
            *tmp___8 = (unsigned char )(nextdata >> (nextbits - 8L));
#line 915
            fprintf(_coverage_fout, "329\n");
#line 915
            fflush(_coverage_fout);
#line 920
            nextbits -= 8L;
            }
#line 914
            fprintf(_coverage_fout, "331\n");
#line 914
            fflush(_coverage_fout);
#line 920
            if (nextbits >= 8L) {
#line 920
              fprintf(_coverage_fout, "330\n");
#line 920
              fflush(_coverage_fout);
#line 920
              tmp___9 = op;
#line 920
              op ++;
#line 920
              *tmp___9 = (unsigned char )(nextdata >> (nextbits - 8L));
#line 920
              nextbits -= 8L;
            }
#line 914
            fprintf(_coverage_fout, "332\n");
#line 914
            fflush(_coverage_fout);
#line 920
            outcount += (long )nbits;
#line 921
            nbits = 9;
#line 922
            maxcode = (int )((1L << 9) - 1L);
          } else {
#line 914
            fprintf(_coverage_fout, "333\n");
#line 914
            fflush(_coverage_fout);
#line 924
            sp->enc_ratio = rat;
          }
        }
      }
    }
#line 830
    fprintf(_coverage_fout, "348\n");
#line 830
    fflush(_coverage_fout);
    hit: ;
  }
#line 789
  fprintf(_coverage_fout, "354\n");
#line 789
  fflush(_coverage_fout);
#line 934
  sp->enc_incount = incount;
#line 935
  sp->enc_outcount = outcount;
#line 936
  sp->enc_checkpoint = checkpoint;
#line 937
  sp->enc_oldcode = (int )ent;
#line 938
  sp->base.nextdata = nextdata;
#line 939
  sp->base.nextbits = nextbits;
#line 940
  sp->base.free_ent = (unsigned short )free_ent;
#line 941
  sp->base.maxcode = (unsigned short )maxcode;
#line 942
  sp->base.nbits = (unsigned short )nbits;
#line 943
  tif->tif_rawcp = op;
#line 789
  fprintf(_coverage_fout, "355\n");
#line 789
  fflush(_coverage_fout);
#line 944
  return (1);
}
}
#line 951 "tif_lzw.c"
static int LZWPostEncode(TIFF *tif ) 
{ register LZWCodecState *sp ;
  tidata_t op ;
  long nextbits ;
  long nextdata ;
  long outcount ;
  int nbits ;
  tidata_t tmp ;
  tidata_t tmp___0 ;
  tidata_t tmp___1 ;
  tidata_t tmp___2 ;
  tidata_t tmp___3 ;

  {
#line 951
  fprintf(_coverage_fout, "365\n");
#line 951
  fflush(_coverage_fout);
#line 954
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
#line 955
  op = tif->tif_rawcp;
#line 956
  nextbits = sp->base.nextbits;
#line 957
  nextdata = sp->base.nextdata;
#line 958
  outcount = sp->enc_outcount;
#line 959
  nbits = (int )sp->base.nbits;
#line 951
  fprintf(_coverage_fout, "366\n");
#line 951
  fflush(_coverage_fout);
#line 961
  if ((unsigned long )op > (unsigned long )sp->enc_rawlimit) {
    {
#line 962
    fprintf(_coverage_fout, "356\n");
#line 962
    fflush(_coverage_fout);
#line 962
    tif->tif_rawcc = op - tif->tif_rawdata;
#line 962
    fprintf(_coverage_fout, "357\n");
#line 962
    fflush(_coverage_fout);
#line 963
    TIFFFlushData1(tif);
#line 962
    fprintf(_coverage_fout, "358\n");
#line 962
    fflush(_coverage_fout);
#line 964
    op = tif->tif_rawdata;
    }
  }
#line 951
  fprintf(_coverage_fout, "367\n");
#line 951
  fflush(_coverage_fout);
#line 966
  if (sp->enc_oldcode != 65535) {
#line 966
    fprintf(_coverage_fout, "360\n");
#line 966
    fflush(_coverage_fout);
#line 967
    nextdata = (nextdata << nbits) | (long )sp->enc_oldcode;
#line 967
    nextbits += (long )nbits;
#line 967
    tmp = op;
#line 967
    op ++;
#line 967
    *tmp = (unsigned char )(nextdata >> (nextbits - 8L));
#line 967
    nextbits -= 8L;
#line 966
    fprintf(_coverage_fout, "361\n");
#line 966
    fflush(_coverage_fout);
#line 967
    if (nextbits >= 8L) {
#line 967
      fprintf(_coverage_fout, "359\n");
#line 967
      fflush(_coverage_fout);
#line 967
      tmp___0 = op;
#line 967
      op ++;
#line 967
      *tmp___0 = (unsigned char )(nextdata >> (nextbits - 8L));
#line 967
      nextbits -= 8L;
    }
#line 966
    fprintf(_coverage_fout, "362\n");
#line 966
    fflush(_coverage_fout);
#line 967
    outcount += (long )nbits;
#line 968
    sp->enc_oldcode = 65535;
  }
#line 951
  fprintf(_coverage_fout, "368\n");
#line 951
  fflush(_coverage_fout);
#line 970
  nextdata = (nextdata << nbits) | 257L;
#line 970
  nextbits += (long )nbits;
#line 970
  tmp___1 = op;
#line 970
  op ++;
#line 970
  *tmp___1 = (unsigned char )(nextdata >> (nextbits - 8L));
#line 970
  nextbits -= 8L;
#line 951
  fprintf(_coverage_fout, "369\n");
#line 951
  fflush(_coverage_fout);
#line 970
  if (nextbits >= 8L) {
#line 970
    fprintf(_coverage_fout, "363\n");
#line 970
    fflush(_coverage_fout);
#line 970
    tmp___2 = op;
#line 970
    op ++;
#line 970
    *tmp___2 = (unsigned char )(nextdata >> (nextbits - 8L));
#line 970
    nextbits -= 8L;
  }
#line 951
  fprintf(_coverage_fout, "370\n");
#line 951
  fflush(_coverage_fout);
#line 970
  outcount += (long )nbits;
#line 951
  fprintf(_coverage_fout, "371\n");
#line 951
  fflush(_coverage_fout);
#line 971
  if (nextbits > 0L) {
#line 971
    fprintf(_coverage_fout, "364\n");
#line 971
    fflush(_coverage_fout);
#line 972
    tmp___3 = op;
#line 972
    op ++;
#line 972
    *tmp___3 = (unsigned char )(nextdata << (8L - nextbits));
  }
#line 951
  fprintf(_coverage_fout, "372\n");
#line 951
  fflush(_coverage_fout);
#line 973
  tif->tif_rawcc = op - tif->tif_rawdata;
#line 951
  fprintf(_coverage_fout, "373\n");
#line 951
  fflush(_coverage_fout);
#line 974
  return (1);
}
}
#line 980 "tif_lzw.c"
static void cl_hash(LZWCodecState *sp ) 
{ register hash_t *hp ;
  register long i ;

  {
#line 980
  fprintf(_coverage_fout, "378\n");
#line 980
  fflush(_coverage_fout);
#line 983
  hp = sp->enc_hashtab + 9000L;
#line 984
  i = 8993L;
#line 980
  fprintf(_coverage_fout, "379\n");
#line 980
  fflush(_coverage_fout);
#line 986
  while (1) {
#line 986
    fprintf(_coverage_fout, "374\n");
#line 986
    fflush(_coverage_fout);
#line 987
    i -= 8L;
#line 988
    (hp + -7)->hash = -1L;
#line 989
    (hp + -6)->hash = -1L;
#line 990
    (hp + -5)->hash = -1L;
#line 991
    (hp + -4)->hash = -1L;
#line 992
    (hp + -3)->hash = -1L;
#line 993
    (hp + -2)->hash = -1L;
#line 994
    (hp + -1)->hash = -1L;
#line 995
    (hp + 0)->hash = -1L;
#line 996
    hp -= 8;
#line 986
    fprintf(_coverage_fout, "375\n");
#line 986
    fflush(_coverage_fout);
#line 986
    if (! (i >= 0L)) {
#line 986
      break;
    }
  }
#line 980
  fprintf(_coverage_fout, "380\n");
#line 980
  fflush(_coverage_fout);
#line 998
  i += 8L;
#line 980
  fprintf(_coverage_fout, "381\n");
#line 980
  fflush(_coverage_fout);
#line 998
  while (1) {
#line 998
    fprintf(_coverage_fout, "376\n");
#line 998
    fflush(_coverage_fout);
#line 998
    if (! (i > 0L)) {
#line 998
      break;
    }
#line 998
    fprintf(_coverage_fout, "377\n");
#line 998
    fflush(_coverage_fout);
#line 999
    hp->hash = -1L;
#line 998
    i --;
#line 998
    hp --;
  }
#line 980
  fprintf(_coverage_fout, "382\n");
#line 980
  fflush(_coverage_fout);
#line 1000
  return;
}
}
#line 1002 "tif_lzw.c"
static void LZWCleanup(TIFF *tif ) 
{ 

  {
  {
#line 1005
  fprintf(_coverage_fout, "383\n");
#line 1005
  fflush(_coverage_fout);
#line 1005
  TIFFPredictorCleanup(tif);
  }
#line 1002
  fprintf(_coverage_fout, "390\n");
#line 1002
  fflush(_coverage_fout);
#line 1007
  if (! ((unsigned long )tif->tif_data != (unsigned long )((tidata_t )0))) {
    {
#line 1007
    fprintf(_coverage_fout, "384\n");
#line 1007
    fflush(_coverage_fout);
#line 1007
    __assert_fail("tif->tif_data != 0", "tif_lzw.c", 1007U, "LZWCleanup");
    }
  }
#line 1002
  fprintf(_coverage_fout, "391\n");
#line 1002
  fflush(_coverage_fout);
#line 1009
  if (((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab) {
    {
#line 1010
    fprintf(_coverage_fout, "385\n");
#line 1010
    fflush(_coverage_fout);
#line 1010
    _TIFFfree((void *)((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab);
    }
  }
#line 1002
  fprintf(_coverage_fout, "392\n");
#line 1002
  fflush(_coverage_fout);
#line 1012
  if (((LZWCodecState *)((LZWBaseState *)tif->tif_data))->enc_hashtab) {
    {
#line 1013
    fprintf(_coverage_fout, "386\n");
#line 1013
    fflush(_coverage_fout);
#line 1013
    _TIFFfree((void *)((LZWCodecState *)((LZWBaseState *)tif->tif_data))->enc_hashtab);
    }
  }
  {
#line 1015
  fprintf(_coverage_fout, "387\n");
#line 1015
  fflush(_coverage_fout);
#line 1015
  _TIFFfree((void *)tif->tif_data);
#line 1015
  fprintf(_coverage_fout, "388\n");
#line 1015
  fflush(_coverage_fout);
#line 1016
  tif->tif_data = (tidataval_t *)((void *)0);
#line 1015
  fprintf(_coverage_fout, "389\n");
#line 1015
  fflush(_coverage_fout);
#line 1018
  _TIFFSetDefaultCompressionState(tif);
  }
#line 1002
  fprintf(_coverage_fout, "393\n");
#line 1002
  fflush(_coverage_fout);
#line 1019
  return;
}
}
#line 1021 "tif_lzw.c"
int TIFFInitLZW(TIFF *tif , int scheme ) 
{ tdata_t tmp ;

  {
#line 1021
  fprintf(_coverage_fout, "415\n");
#line 1021
  fflush(_coverage_fout);
#line 1024
  if (! (scheme == 5)) {
    {
#line 1024
    fprintf(_coverage_fout, "394\n");
#line 1024
    fflush(_coverage_fout);
#line 1024
    __assert_fail("scheme == 5", "tif_lzw.c", 1024U, "TIFFInitLZW");
    }
  }
  {
#line 1028
  fprintf(_coverage_fout, "395\n");
#line 1028
  fflush(_coverage_fout);
#line 1028
  tmp = _TIFFmalloc((int )sizeof(LZWCodecState ));
#line 1028
  fprintf(_coverage_fout, "396\n");
#line 1028
  fflush(_coverage_fout);
#line 1028
  tif->tif_data = (tidataval_t *)tmp;
  }
#line 1021
  fprintf(_coverage_fout, "416\n");
#line 1021
  fflush(_coverage_fout);
#line 1029
  if ((unsigned long )tif->tif_data == (unsigned long )((void *)0)) {
    goto bad;
  }
  {
#line 1031
  fprintf(_coverage_fout, "397\n");
#line 1031
  fflush(_coverage_fout);
#line 1031
  ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab = (code_t *)((void *)0);
#line 1031
  fprintf(_coverage_fout, "398\n");
#line 1031
  fflush(_coverage_fout);
#line 1032
  ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_decode = (int (*)(TIFF * ,
                                                                            tidata_t  ,
                                                                            tsize_t  ,
                                                                            tsample_t  ))((void *)0);
#line 1031
  fprintf(_coverage_fout, "399\n");
#line 1031
  fflush(_coverage_fout);
#line 1033
  ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->enc_hashtab = (hash_t *)((void *)0);
#line 1031
  fprintf(_coverage_fout, "400\n");
#line 1031
  fflush(_coverage_fout);
#line 1034
  ((LZWBaseState *)tif->tif_data)->rw_mode = tif->tif_mode;
#line 1031
  fprintf(_coverage_fout, "401\n");
#line 1031
  fflush(_coverage_fout);
#line 1039
  tif->tif_setupdecode = & LZWSetupDecode;
#line 1031
  fprintf(_coverage_fout, "402\n");
#line 1031
  fflush(_coverage_fout);
#line 1040
  tif->tif_predecode = & LZWPreDecode;
#line 1031
  fprintf(_coverage_fout, "403\n");
#line 1031
  fflush(_coverage_fout);
#line 1041
  tif->tif_decoderow = & LZWDecode;
#line 1031
  fprintf(_coverage_fout, "404\n");
#line 1031
  fflush(_coverage_fout);
#line 1042
  tif->tif_decodestrip = & LZWDecode;
#line 1031
  fprintf(_coverage_fout, "405\n");
#line 1031
  fflush(_coverage_fout);
#line 1043
  tif->tif_decodetile = & LZWDecode;
#line 1031
  fprintf(_coverage_fout, "406\n");
#line 1031
  fflush(_coverage_fout);
#line 1044
  tif->tif_setupencode = & LZWSetupEncode;
#line 1031
  fprintf(_coverage_fout, "407\n");
#line 1031
  fflush(_coverage_fout);
#line 1045
  tif->tif_preencode = & LZWPreEncode;
#line 1031
  fprintf(_coverage_fout, "408\n");
#line 1031
  fflush(_coverage_fout);
#line 1046
  tif->tif_postencode = & LZWPostEncode;
#line 1031
  fprintf(_coverage_fout, "409\n");
#line 1031
  fflush(_coverage_fout);
#line 1047
  tif->tif_encoderow = & LZWEncode;
#line 1031
  fprintf(_coverage_fout, "410\n");
#line 1031
  fflush(_coverage_fout);
#line 1048
  tif->tif_encodestrip = & LZWEncode;
#line 1031
  fprintf(_coverage_fout, "411\n");
#line 1031
  fflush(_coverage_fout);
#line 1049
  tif->tif_encodetile = & LZWEncode;
#line 1031
  fprintf(_coverage_fout, "412\n");
#line 1031
  fflush(_coverage_fout);
#line 1050
  tif->tif_cleanup = & LZWCleanup;
#line 1031
  fprintf(_coverage_fout, "413\n");
#line 1031
  fflush(_coverage_fout);
#line 1054
  TIFFPredictorInit(tif);
  }
#line 1021
  fprintf(_coverage_fout, "417\n");
#line 1021
  fflush(_coverage_fout);
#line 1055
  return (1);
  bad: 
  {
#line 1057
  fprintf(_coverage_fout, "414\n");
#line 1057
  fflush(_coverage_fout);
#line 1057
  TIFFErrorExt(tif->tif_clientdata, "TIFFInitLZW",
               "No space for LZW state block");
  }
#line 1021
  fprintf(_coverage_fout, "418\n");
#line 1021
  fflush(_coverage_fout);
#line 1059
  return (0);
}
}
void __globinit_tif_lzw(void) 
{ 

  {
#line 1021
  _coverage_fout = fopen("tif_lzw.i.path", "wb");
}
}
