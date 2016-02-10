typedef unsigned long size_t;

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

typedef long __int64_t;

typedef unsigned long __uint64_t;

typedef long __quad_t;

typedef unsigned long __u_quad_t;

typedef unsigned long __dev_t;

typedef unsigned int __uid_t;

typedef unsigned int __gid_t;

typedef unsigned long __ino_t;

typedef unsigned long __ino64_t;

typedef unsigned int __mode_t;

typedef unsigned long __nlink_t;

typedef long __off_t;

typedef long __off64_t;

typedef int __pid_t;

struct __anonstruct___fsid_t_1 {
   int __val[2] ;
};

typedef struct __anonstruct___fsid_t_1 __fsid_t;

typedef long __clock_t;

typedef unsigned long __rlim_t;

typedef unsigned long __rlim64_t;

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

typedef long __blkcnt64_t;

typedef unsigned long __fsblkcnt_t;

typedef unsigned long __fsblkcnt64_t;

typedef unsigned long __fsfilcnt_t;

typedef unsigned long __fsfilcnt64_t;

typedef long __ssize_t;

typedef __off64_t __loff_t;

typedef __quad_t *__qaddr_t;

typedef char *__caddr_t;

typedef long __intptr_t;

typedef unsigned int __socklen_t;

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

struct __anonstruct___sigset_t_2 {
   unsigned long __val[1024UL / (8UL * sizeof(unsigned long ))] ;
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
   __fd_mask __fds_bits[1024UL / (8UL * sizeof(__fd_mask ))] ;
};

typedef struct __anonstruct_fd_set_3 fd_set;

typedef __fd_mask fd_mask;

typedef __blkcnt_t blkcnt_t;

typedef __fsblkcnt_t fsblkcnt_t;

typedef __fsfilcnt_t fsfilcnt_t;

typedef unsigned long pthread_t;

union __anonunion_pthread_attr_t_4 {
   char __size[56] ;
   long __align ;
};

typedef union __anonunion_pthread_attr_t_4 pthread_attr_t;

struct __pthread_internal_list {
   struct __pthread_internal_list *__prev ;
   struct __pthread_internal_list *__next ;
};

typedef struct __pthread_internal_list __pthread_list_t;

struct __pthread_mutex_s {
   int __lock ;
   unsigned int __count ;
   int __owner ;
   unsigned int __nusers ;
   int __kind ;
   int __spins ;
   __pthread_list_t __list ;
};

union __anonunion_pthread_mutex_t_5 {
   struct __pthread_mutex_s __data ;
   char __size[40] ;
   long __align ;
};

typedef union __anonunion_pthread_mutex_t_5 pthread_mutex_t;

union __anonunion_pthread_mutexattr_t_6 {
   char __size[4] ;
   int __align ;
};

typedef union __anonunion_pthread_mutexattr_t_6 pthread_mutexattr_t;

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

union __anonunion_pthread_cond_t_7 {
   struct __anonstruct___data_8 __data ;
   char __size[48] ;
   long long __align ;
};

typedef union __anonunion_pthread_cond_t_7 pthread_cond_t;

union __anonunion_pthread_condattr_t_9 {
   char __size[4] ;
   int __align ;
};

typedef union __anonunion_pthread_condattr_t_9 pthread_condattr_t;

typedef unsigned int pthread_key_t;

typedef int pthread_once_t;

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

union __anonunion_pthread_rwlock_t_10 {
   struct __anonstruct___data_11 __data ;
   char __size[56] ;
   long __align ;
};

typedef union __anonunion_pthread_rwlock_t_10 pthread_rwlock_t;

union __anonunion_pthread_rwlockattr_t_12 {
   char __size[8] ;
   long __align ;
};

typedef union __anonunion_pthread_rwlockattr_t_12 pthread_rwlockattr_t;

typedef int volatile   pthread_spinlock_t;

union __anonunion_pthread_barrier_t_13 {
   char __size[32] ;
   long __align ;
};

typedef union __anonunion_pthread_barrier_t_13 pthread_barrier_t;

union __anonunion_pthread_barrierattr_t_14 {
   char __size[4] ;
   int __align ;
};

typedef union __anonunion_pthread_barrierattr_t_14 pthread_barrierattr_t;

struct flock {
   short l_type ;
   short l_whence ;
   __off_t l_start ;
   __off_t l_len ;
   __pid_t l_pid ;
};

typedef int (*__compar_fn_t)(void const   * , void const   * );

enum __anonenum_ACTION_15 {
    FIND = 0,
    ENTER = 1
} ;

typedef enum __anonenum_ACTION_15 ACTION;

struct entry {
   char *key ;
   void *data ;
};

typedef struct entry ENTRY;

struct _ENTRY;

struct _ENTRY;

struct _ENTRY;

enum __anonenum_VISIT_16 {
    preorder = 0,
    postorder = 1,
    endorder = 2,
    leaf = 3
} ;

typedef enum __anonenum_VISIT_16 VISIT;

typedef void (*__action_fn_t)(void const   *__nodep , VISIT __value ,
                              int __level );

typedef signed char int8;

typedef unsigned char uint8;

typedef short int16;

typedef unsigned short uint16;

typedef int int32;

typedef unsigned int uint32;

enum TIFFIgnoreSense {
    TIS_STORE = 0,
    TIS_EXTRACT = 1,
    TIS_EMPTY = 2
} ;

struct __anonstruct_TIFFHeader_17 {
   uint16 tiff_magic ;
   uint16 tiff_version ;
   uint32 tiff_diroff ;
};

typedef struct __anonstruct_TIFFHeader_17 TIFFHeader;

struct __anonstruct_TIFFDirEntry_18 {
   uint16 tdir_tag ;
   uint16 tdir_type ;
   uint32 tdir_count ;
   uint32 tdir_offset ;
};

typedef struct __anonstruct_TIFFDirEntry_18 TIFFDirEntry;

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

typedef enum __anonenum_TIFFDataType_19 TIFFDataType;

struct tiff;

struct tiff;

typedef struct tiff TIFF;

typedef uint32 ttag_t;

typedef uint16 tdir_t;

typedef uint16 tsample_t;

typedef uint32 tstrip_t;

typedef uint32 ttile_t;

typedef int32 tsize_t;

typedef void *tdata_t;

typedef uint32 toff_t;

typedef void *thandle_t;

typedef unsigned char TIFFRGBValue;

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

typedef struct __anonstruct_TIFFDisplay_20 TIFFDisplay;

struct __anonstruct_TIFFYCbCrToRGB_21 {
   TIFFRGBValue *clamptab ;
   int *Cr_r_tab ;
   int *Cb_b_tab ;
   int32 *Cr_g_tab ;
   int32 *Cb_g_tab ;
   int32 *Y_tab ;
};

typedef struct __anonstruct_TIFFYCbCrToRGB_21 TIFFYCbCrToRGB;

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

typedef struct __anonstruct_TIFFCIELabToRGB_22 TIFFCIELabToRGB;

struct _TIFFRGBAImage;

struct _TIFFRGBAImage;

typedef struct _TIFFRGBAImage TIFFRGBAImage;

typedef void (*tileContigRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                  uint32  , uint32  , uint32  , int32  ,
                                  int32  , unsigned char * );

typedef void (*tileSeparateRoutine)(TIFFRGBAImage * , uint32 * , uint32  ,
                                    uint32  , uint32  , uint32  , int32  ,
                                    int32  , unsigned char * , unsigned char * ,
                                    unsigned char * , unsigned char * );

union __anonunion_put_23 {
   void (*any)(TIFFRGBAImage * ) ;
   void (*contig)(TIFFRGBAImage * , uint32 * , uint32  , uint32  , uint32  ,
                  uint32  , int32  , int32  , unsigned char * ) ;
   void (*separate)(TIFFRGBAImage * , uint32 * , uint32  , uint32  , uint32  ,
                    uint32  , int32  , int32  , unsigned char * ,
                    unsigned char * , unsigned char * , unsigned char * ) ;
};

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

typedef int (*TIFFInitMethod)(TIFF * , int  );

struct __anonstruct_TIFFCodec_24 {
   char *name ;
   uint16 scheme ;
   int (*init)(TIFF * , int  ) ;
};

typedef struct __anonstruct_TIFFCodec_24 TIFFCodec;

struct _IO_FILE;

struct _IO_FILE;

typedef struct _IO_FILE FILE;

typedef struct _IO_FILE __FILE;

typedef int wchar_t;

typedef unsigned int wint_t;

union __anonunion___value_26 {
   wint_t __wch ;
   char __wchb[4] ;
};

struct __anonstruct___mbstate_t_25 {
   int __count ;
   union __anonunion___value_26 __value ;
};

typedef struct __anonstruct___mbstate_t_25 __mbstate_t;

struct __anonstruct__G_fpos_t_27 {
   __off_t __pos ;
   __mbstate_t __state ;
};

typedef struct __anonstruct__G_fpos_t_27 _G_fpos_t;

struct __anonstruct__G_fpos64_t_28 {
   __off64_t __pos ;
   __mbstate_t __state ;
};

typedef struct __anonstruct__G_fpos64_t_28 _G_fpos64_t;

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

enum __anonenum_30 {
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

struct __anonstruct___combined_32 {
   struct __gconv_info __cd ;
   struct __gconv_step_data __data ;
};

union __anonunion__G_iconv_t_31 {
   struct __gconv_info __cd ;
   struct __anonstruct___combined_32 __combined ;
};

typedef union __anonunion__G_iconv_t_31 _G_iconv_t;

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
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
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

typedef __gnuc_va_list va_list;

typedef void (*TIFFErrorHandler)(char const   * , char const   * , va_list  );

typedef void (*TIFFErrorHandlerExt)(thandle_t  , char const   * ,
                                    char const   * , va_list  );

typedef tsize_t (*TIFFReadWriteProc)(thandle_t  , tdata_t  , tsize_t  );

typedef toff_t (*TIFFSeekProc)(thandle_t  , toff_t  , int  );

typedef int (*TIFFCloseProc)(thandle_t  );

typedef toff_t (*TIFFSizeProc)(thandle_t  );

typedef int (*TIFFMapFileProc)(thandle_t  , tdata_t * , toff_t * );

typedef void (*TIFFUnmapFileProc)(thandle_t  , tdata_t  , toff_t  );

typedef void (*TIFFExtendProc)(TIFF * );

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

typedef struct __anonstruct_TIFFFieldInfo_33 TIFFFieldInfo;

struct _TIFFTagValue {
   TIFFFieldInfo const   *info ;
   int count ;
   void *value ;
};

typedef struct _TIFFTagValue TIFFTagValue;

typedef int (*TIFFVSetMethod)(TIFF * , ttag_t  , va_list  );

typedef int (*TIFFVGetMethod)(TIFF * , ttag_t  , va_list  );

typedef void (*TIFFPrintMethod)(TIFF * , FILE * , long  );

struct __anonstruct_TIFFTagMethods_34 {
   int (*vsetfield)(TIFF * , ttag_t  , va_list  ) ;
   int (*vgetfield)(TIFF * , ttag_t  , va_list  ) ;
   void (*printdir)(TIFF * , FILE * , long  ) ;
};

typedef struct __anonstruct_TIFFTagMethods_34 TIFFTagMethods;

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

typedef struct __anonstruct_TIFFDirectory_35 TIFFDirectory;

struct client_info {
   struct client_info *next ;
   void *data ;
   char *name ;
};

typedef struct client_info TIFFClientInfoLink;

typedef unsigned char tidataval_t;

typedef tidataval_t *tidata_t;

typedef void (*TIFFVoidMethod)(TIFF * );

typedef int (*TIFFBoolMethod)(TIFF * );

typedef int (*TIFFPreMethod)(TIFF * , tsample_t  );

typedef int (*TIFFCodeMethod)(TIFF * , tidata_t  , tsize_t  , tsample_t  );

typedef int (*TIFFSeekMethod)(TIFF * , uint32  );

typedef void (*TIFFPostMethod)(TIFF * , tidata_t  , tsize_t  );

typedef uint32 (*TIFFStripMethod)(TIFF * , uint32  );

typedef void (*TIFFTileMethod)(TIFF * , uint32 * , uint32 * );

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

typedef struct __anonstruct_TIFFPredictorState_36 TIFFPredictorState;

struct __anonstruct_LZWBaseState_37 {
   TIFFPredictorState predict ;
   unsigned short nbits ;
   unsigned short maxcode ;
   unsigned short free_ent ;
   long nextdata ;
   long nextbits ;
   int rw_mode ;
};

typedef struct __anonstruct_LZWBaseState_37 LZWBaseState;

typedef uint16 hcode_t;

struct __anonstruct_hash_t_38 {
   long hash ;
   hcode_t code ;
};

typedef struct __anonstruct_hash_t_38 hash_t;

struct code_ent {
   struct code_ent *next ;
   unsigned short length ;
   unsigned char value ;
   unsigned char firstchar ;
};

typedef struct code_ent code_t;

typedef int (*decodeFunc)(TIFF * , tidata_t  , tsize_t  , tsample_t  );

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

extern int fcntl(int __fd , int __cmd  , ...) ;

extern int open(char const   *__file , int __oflag  , ...)  __attribute__((__nonnull__(1))) ;

extern int creat(char const   *__file , __mode_t __mode )  __attribute__((__nonnull__(1))) ;

extern int lockf(int __fd , int __cmd , __off_t __len ) ;

extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off_t __offset ,
                                                       __off_t __len ,
                                                       int __advise ) ;

extern int posix_fallocate(int __fd , __off_t __offset , __off_t __len ) ;

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

extern  __attribute__((__nothrow__)) void insque(void *__elem , void *__prev ) ;

extern  __attribute__((__nothrow__)) void remque(void *__elem ) ;

extern  __attribute__((__nothrow__)) ENTRY *hsearch(ENTRY __item ,
                                                    ACTION __action ) ;

extern  __attribute__((__nothrow__)) int hcreate(size_t __nel ) ;

extern  __attribute__((__nothrow__)) void hdestroy(void) ;

extern void *tsearch(void const   *__key , void **__rootp ,
                     int (*__compar)(void const   * , void const   * ) ) ;

extern void *tfind(void const   *__key , void * const  *__rootp ,
                   int (*__compar)(void const   * , void const   * ) ) ;

extern void *tdelete(void const   * __restrict  __key ,
                     void ** __restrict  __rootp ,
                     int (*__compar)(void const   * , void const   * ) ) ;

extern void twalk(void const   *__root ,
                  void (*__action)(void const   *__nodep , VISIT __value ,
                                   int __level ) ) ;

extern void *lfind(void const   *__key , void const   *__base ,
                   size_t *__nmemb , size_t __size ,
                   int (*__compar)(void const   * , void const   * ) ) ;

extern void *lsearch(void const   *__key , void *__base , size_t *__nmemb ,
                     size_t __size , int (*__compar)(void const   * ,
                                                     void const   * ) ) ;

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

extern char const   *TIFFGetVersion(void) ;

extern TIFFCodec const   *TIFFFindCODEC(uint16  ) ;

extern TIFFCodec *TIFFRegisterCODEC(uint16  , char const   * ,
                                    int (*)(TIFF * , int  ) ) ;

extern void TIFFUnRegisterCODEC(TIFFCodec * ) ;

extern int TIFFIsCODECConfigured(uint16  ) ;

extern TIFFCodec *TIFFGetConfiguredCODECs(void) ;

extern tdata_t _TIFFmalloc(tsize_t  ) ;

extern tdata_t _TIFFrealloc(tdata_t  , tsize_t  ) ;

extern void _TIFFmemset(tdata_t  , int  , tsize_t  ) ;

extern void _TIFFmemcpy(tdata_t  , tdata_t  , tsize_t  ) ;

extern int _TIFFmemcmp(tdata_t  , tdata_t  , tsize_t  ) ;

extern void _TIFFfree(tdata_t  ) ;

extern int TIFFGetTagListCount(TIFF * ) ;

extern ttag_t TIFFGetTagListEntry(TIFF * , int tag_index ) ;

extern void TIFFMergeFieldInfo(TIFF * , TIFFFieldInfo const   * , int  ) ;

extern TIFFFieldInfo const   *TIFFFindFieldInfo(TIFF * , ttag_t  ,
                                                TIFFDataType  ) ;

extern TIFFFieldInfo const   *TIFFFindFieldInfoByName(TIFF * , char const   * ,
                                                      TIFFDataType  ) ;

extern TIFFFieldInfo const   *TIFFFieldWithTag(TIFF * , ttag_t  ) ;

extern TIFFFieldInfo const   *TIFFFieldWithName(TIFF * , char const   * ) ;

extern TIFFTagMethods *TIFFAccessTagMethods(TIFF * ) ;

extern void *TIFFGetClientInfo(TIFF * , char const   * ) ;

extern void TIFFSetClientInfo(TIFF * , void * , char const   * ) ;

extern void TIFFCleanup(TIFF * ) ;

extern void TIFFClose(TIFF * ) ;

extern int TIFFFlush(TIFF * ) ;

extern int TIFFFlushData(TIFF * ) ;

extern int TIFFGetField(TIFF * , ttag_t   , ...) ;

extern int TIFFVGetField(TIFF * , ttag_t  , va_list  ) ;

extern int TIFFGetFieldDefaulted(TIFF * , ttag_t   , ...) ;

extern int TIFFVGetFieldDefaulted(TIFF * , ttag_t  , va_list  ) ;

extern int TIFFReadDirectory(TIFF * ) ;

extern int TIFFReadCustomDirectory(TIFF * , toff_t  , TIFFFieldInfo const   * ,
                                   size_t  ) ;

extern int TIFFReadEXIFDirectory(TIFF * , toff_t  ) ;

extern tsize_t TIFFScanlineSize(TIFF * ) ;

extern tsize_t TIFFRasterScanlineSize(TIFF * ) ;

extern tsize_t TIFFStripSize(TIFF * ) ;

extern tsize_t TIFFRawStripSize(TIFF * , tstrip_t  ) ;

extern tsize_t TIFFVStripSize(TIFF * , uint32  ) ;

extern tsize_t TIFFTileRowSize(TIFF * ) ;

extern tsize_t TIFFTileSize(TIFF * ) ;

extern tsize_t TIFFVTileSize(TIFF * , uint32  ) ;

extern uint32 TIFFDefaultStripSize(TIFF * , uint32  ) ;

extern void TIFFDefaultTileSize(TIFF * , uint32 * , uint32 * ) ;

extern int TIFFFileno(TIFF * ) ;

extern int TIFFSetFileno(TIFF * , int  ) ;

extern thandle_t TIFFClientdata(TIFF * ) ;

extern thandle_t TIFFSetClientdata(TIFF * , thandle_t  ) ;

extern int TIFFGetMode(TIFF * ) ;

extern int TIFFSetMode(TIFF * , int  ) ;

extern int TIFFIsTiled(TIFF * ) ;

extern int TIFFIsByteSwapped(TIFF * ) ;

extern int TIFFIsUpSampled(TIFF * ) ;

extern int TIFFIsMSB2LSB(TIFF * ) ;

extern int TIFFIsBigEndian(TIFF * ) ;

extern TIFFReadWriteProc TIFFGetReadProc(TIFF * ) ;

extern TIFFReadWriteProc TIFFGetWriteProc(TIFF * ) ;

extern TIFFSeekProc TIFFGetSeekProc(TIFF * ) ;

extern TIFFCloseProc TIFFGetCloseProc(TIFF * ) ;

extern TIFFSizeProc TIFFGetSizeProc(TIFF * ) ;

extern TIFFMapFileProc TIFFGetMapFileProc(TIFF * ) ;

extern TIFFUnmapFileProc TIFFGetUnmapFileProc(TIFF * ) ;

extern uint32 TIFFCurrentRow(TIFF * ) ;

extern tdir_t TIFFCurrentDirectory(TIFF * ) ;

extern tdir_t TIFFNumberOfDirectories(TIFF * ) ;

extern uint32 TIFFCurrentDirOffset(TIFF * ) ;

extern tstrip_t TIFFCurrentStrip(TIFF * ) ;

extern ttile_t TIFFCurrentTile(TIFF * ) ;

extern int TIFFReadBufferSetup(TIFF * , tdata_t  , tsize_t  ) ;

extern int TIFFWriteBufferSetup(TIFF * , tdata_t  , tsize_t  ) ;

extern int TIFFSetupStrips(TIFF * ) ;

extern int TIFFWriteCheck(TIFF * , int  , char const   * ) ;

extern void TIFFFreeDirectory(TIFF * ) ;

extern int TIFFCreateDirectory(TIFF * ) ;

extern int TIFFLastDirectory(TIFF * ) ;

extern int TIFFSetDirectory(TIFF * , tdir_t  ) ;

extern int TIFFSetSubDirectory(TIFF * , uint32  ) ;

extern int TIFFUnlinkDirectory(TIFF * , tdir_t  ) ;

extern int TIFFSetField(TIFF * , ttag_t   , ...) ;

extern int TIFFVSetField(TIFF * , ttag_t  , va_list  ) ;

extern int TIFFWriteDirectory(TIFF * ) ;

extern int TIFFCheckpointDirectory(TIFF * ) ;

extern int TIFFRewriteDirectory(TIFF * ) ;

extern int TIFFReassignTagToIgnore(enum TIFFIgnoreSense  , int  ) ;

extern void TIFFPrintDirectory(TIFF * , FILE * , long  ) ;

extern int TIFFReadScanline(TIFF * , tdata_t  , uint32  , tsample_t  ) ;

extern int TIFFWriteScanline(TIFF * , tdata_t  , uint32  , tsample_t  ) ;

extern int TIFFReadRGBAImage(TIFF * , uint32  , uint32  , uint32 * , int  ) ;

extern int TIFFReadRGBAImageOriented(TIFF * , uint32  , uint32  , uint32 * ,
                                     int  , int  ) ;

extern int TIFFReadRGBAStrip(TIFF * , tstrip_t  , uint32 * ) ;

extern int TIFFReadRGBATile(TIFF * , uint32  , uint32  , uint32 * ) ;

extern int TIFFRGBAImageOK(TIFF * , char * ) ;

extern int TIFFRGBAImageBegin(TIFFRGBAImage * , TIFF * , int  , char * ) ;

extern int TIFFRGBAImageGet(TIFFRGBAImage * , uint32 * , uint32  , uint32  ) ;

extern void TIFFRGBAImageEnd(TIFFRGBAImage * ) ;

extern TIFF *TIFFOpen(char const   * , char const   * ) ;

extern TIFF *TIFFFdOpen(int  , char const   * , char const   * ) ;

extern TIFF *TIFFClientOpen(char const   * , char const   * , thandle_t  ,
                            tsize_t (*)(thandle_t  , tdata_t  , tsize_t  ) ,
                            tsize_t (*)(thandle_t  , tdata_t  , tsize_t  ) ,
                            toff_t (*)(thandle_t  , toff_t  , int  ) ,
                            int (*)(thandle_t  ) , toff_t (*)(thandle_t  ) ,
                            int (*)(thandle_t  , tdata_t * , toff_t * ) ,
                            void (*)(thandle_t  , tdata_t  , toff_t  ) ) ;

extern char const   *TIFFFileName(TIFF * ) ;

extern char const   *TIFFSetFileName(TIFF * , char const   * ) ;

extern void TIFFError(char const   * , char const   *  , ...) ;

extern void TIFFErrorExt(thandle_t  , char const   * , char const   *  , ...) ;

extern void TIFFWarning(char const   * , char const   *  , ...) ;

extern void TIFFWarningExt(thandle_t  , char const   * , char const   *  , ...) ;

extern TIFFErrorHandler TIFFSetErrorHandler(void (*)(char const   * ,
                                                     char const   * , va_list  ) ) ;

extern TIFFErrorHandlerExt TIFFSetErrorHandlerExt(void (*)(thandle_t  ,
                                                           char const   * ,
                                                           char const   * ,
                                                           va_list  ) ) ;

extern TIFFErrorHandler TIFFSetWarningHandler(void (*)(char const   * ,
                                                       char const   * ,
                                                       va_list  ) ) ;

extern TIFFErrorHandlerExt TIFFSetWarningHandlerExt(void (*)(thandle_t  ,
                                                             char const   * ,
                                                             char const   * ,
                                                             va_list  ) ) ;

extern TIFFExtendProc TIFFSetTagExtender(void (*)(TIFF * ) ) ;

extern ttile_t TIFFComputeTile(TIFF * , uint32  , uint32  , uint32  ,
                               tsample_t  ) ;

extern int TIFFCheckTile(TIFF * , uint32  , uint32  , uint32  , tsample_t  ) ;

extern ttile_t TIFFNumberOfTiles(TIFF * ) ;

extern tsize_t TIFFReadTile(TIFF * , tdata_t  , uint32  , uint32  , uint32  ,
                            tsample_t  ) ;

extern tsize_t TIFFWriteTile(TIFF * , tdata_t  , uint32  , uint32  , uint32  ,
                             tsample_t  ) ;

extern tstrip_t TIFFComputeStrip(TIFF * , uint32  , tsample_t  ) ;

extern tstrip_t TIFFNumberOfStrips(TIFF * ) ;

extern tsize_t TIFFReadEncodedStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;

extern tsize_t TIFFReadRawStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;

extern tsize_t TIFFReadEncodedTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;

extern tsize_t TIFFReadRawTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;

extern tsize_t TIFFWriteEncodedStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;

extern tsize_t TIFFWriteRawStrip(TIFF * , tstrip_t  , tdata_t  , tsize_t  ) ;

extern tsize_t TIFFWriteEncodedTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;

extern tsize_t TIFFWriteRawTile(TIFF * , ttile_t  , tdata_t  , tsize_t  ) ;

extern int TIFFDataWidth(TIFFDataType  ) ;

extern void TIFFSetWriteOffset(TIFF * , toff_t  ) ;

extern void TIFFSwabShort(uint16 * ) ;

extern void TIFFSwabLong(uint32 * ) ;

extern void TIFFSwabDouble(double * ) ;

extern void TIFFSwabArrayOfShort(uint16 * , unsigned long  ) ;

extern void TIFFSwabArrayOfTriples(uint8 * , unsigned long  ) ;

extern void TIFFSwabArrayOfLong(uint32 * , unsigned long  ) ;

extern void TIFFSwabArrayOfDouble(double * , unsigned long  ) ;

extern void TIFFReverseBits(unsigned char * , unsigned long  ) ;

extern unsigned char const   *TIFFGetBitRevTable(int  ) ;

extern double LogL16toY(int  ) ;

extern double LogL10toY(int  ) ;

extern void XYZtoRGB24(float * , uint8 * ) ;

extern int uv_decode(double * , double * , int  ) ;

extern void LogLuv24toXYZ(uint32  , float * ) ;

extern void LogLuv32toXYZ(uint32  , float * ) ;

extern int LogL16fromY(double  , int  ) ;

extern int LogL10fromY(double  , int  ) ;

extern int uv_encode(double  , double  , int  ) ;

extern uint32 LogLuv24fromXYZ(float * , int  ) ;

extern uint32 LogLuv32fromXYZ(float * , int  ) ;

extern int TIFFCIELabToRGBInit(TIFFCIELabToRGB * , TIFFDisplay * , float * ) ;

extern void TIFFCIELabToXYZ(TIFFCIELabToRGB * , uint32  , int32  , int32  ,
                            float * , float * , float * ) ;

extern void TIFFXYZToRGB(TIFFCIELabToRGB * , float  , float  , float  ,
                         uint32 * , uint32 * , uint32 * ) ;

extern int TIFFYCbCrToRGBInit(TIFFYCbCrToRGB * , float * , float * ) ;

extern void TIFFYCbCrtoRGB(TIFFYCbCrToRGB * , uint32  , int32  , int32  ,
                           uint32 * , uint32 * , uint32 * ) ;

extern TIFFFieldInfo const   *_TIFFGetFieldInfo(size_t * ) ;

extern TIFFFieldInfo const   *_TIFFGetExifFieldInfo(size_t * ) ;

extern void _TIFFSetupFieldInfo(TIFF * , TIFFFieldInfo const   * , size_t  ) ;

extern void _TIFFPrintFieldInfo(TIFF * , FILE * ) ;

extern TIFFDataType _TIFFSampleToTagType(TIFF * ) ;

extern TIFFFieldInfo const   *_TIFFFindOrRegisterFieldInfo(TIFF *tif ,
                                                           ttag_t tag ,
                                                           TIFFDataType dt ) ;

extern TIFFFieldInfo *_TIFFCreateAnonFieldInfo(TIFF *tif , ttag_t tag ,
                                               TIFFDataType dt ) ;

extern int _TIFFgetMode(char const   * , char const   * ) ;

extern int _TIFFNoRowEncode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;

extern int _TIFFNoStripEncode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;

extern int _TIFFNoTileEncode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;

extern int _TIFFNoRowDecode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;

extern int _TIFFNoStripDecode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;

extern int _TIFFNoTileDecode(TIFF * , tidata_t  , tsize_t  , tsample_t  ) ;

extern void _TIFFNoPostDecode(TIFF * , tidata_t  , tsize_t  ) ;

extern int _TIFFNoPreCode(TIFF * , tsample_t  ) ;

extern int _TIFFNoSeek(TIFF * , uint32  ) ;

extern void _TIFFSwab16BitData(TIFF * , tidata_t  , tsize_t  ) ;

extern void _TIFFSwab24BitData(TIFF * , tidata_t  , tsize_t  ) ;

extern void _TIFFSwab32BitData(TIFF * , tidata_t  , tsize_t  ) ;

extern void _TIFFSwab64BitData(TIFF * , tidata_t  , tsize_t  ) ;

extern int TIFFFlushData1(TIFF * ) ;

extern int TIFFDefaultDirectory(TIFF * ) ;

extern void _TIFFSetDefaultCompressionState(TIFF * ) ;

extern int TIFFSetCompressionScheme(TIFF * , int  ) ;

extern int TIFFSetDefaultCompressionState(TIFF * ) ;

extern uint32 _TIFFDefaultStripSize(TIFF * , uint32  ) ;

extern void _TIFFDefaultTileSize(TIFF * , uint32 * , uint32 * ) ;

extern int _TIFFDataSize(TIFFDataType  ) ;

extern void _TIFFsetByteArray(void ** , void * , uint32  ) ;

extern void _TIFFsetString(char ** , char * ) ;

extern void _TIFFsetShortArray(uint16 ** , uint16 * , uint32  ) ;

extern void _TIFFsetLongArray(uint32 ** , uint32 * , uint32  ) ;

extern void _TIFFsetFloatArray(float ** , float * , uint32  ) ;

extern void _TIFFsetDoubleArray(double ** , double * , uint32  ) ;

extern void _TIFFprintAscii(FILE * , char const   * ) ;

extern void _TIFFprintAsciiTag(FILE * , char const   * , char const   * ) ;

extern void (*_TIFFwarningHandler)(char const   * , char const   * , va_list  ) ;

extern void (*_TIFFerrorHandler)(char const   * , char const   * , va_list  ) ;

extern void (*_TIFFwarningHandlerExt)(thandle_t  , char const   * ,
                                      char const   * , va_list  ) ;

extern void (*_TIFFerrorHandlerExt)(thandle_t  , char const   * ,
                                    char const   * , va_list  ) ;

extern tdata_t _TIFFCheckMalloc(TIFF * , size_t  , size_t  , char const   * ) ;

extern int TIFFInitDumpMode(TIFF * , int  ) ;

extern int TIFFInitPackBits(TIFF * , int  ) ;

extern int TIFFInitCCITTRLE(TIFF * , int  ) ;

extern int TIFFInitCCITTRLEW(TIFF * , int  ) ;

extern int TIFFInitCCITTFax3(TIFF * , int  ) ;

extern int TIFFInitCCITTFax4(TIFF * , int  ) ;

extern int TIFFInitThunderScan(TIFF * , int  ) ;

extern int TIFFInitNeXT(TIFF * , int  ) ;

int TIFFInitLZW(TIFF *tif , int scheme ) ;

extern int TIFFInitJPEG(TIFF * , int  ) ;

extern int TIFFInitZIP(TIFF * , int  ) ;

extern int TIFFInitPixarLog(TIFF * , int  ) ;

extern int TIFFInitSGILog(TIFF * , int  ) ;

extern TIFFCodec _TIFFBuiltinCODECS[] ;

extern int TIFFPredictorInit(TIFF * ) ;

extern int TIFFPredictorCleanup(TIFF * ) ;

static int LZWDecode(TIFF *tif , tidata_t op0 , tsize_t occ0 , tsample_t s ) ;

static int LZWDecodeCompat(TIFF *tif , tidata_t op0 , tsize_t occ0 ,
                           tsample_t s ) ;

static void cl_hash(LZWCodecState *sp ) ;

static int LZWSetupDecode(TIFF *tif ) ;

static char const   module[16]   = 
  {(char const   )' ', (char const   )'L', (char const   )'Z',
   (char const   )'W', (char const   )'S', (char const   )'e',
   (char const   )'t', (char const   )'u', (char const   )'p',
   (char const   )'D', (char const   )'e', (char const   )'c',
   (char const   )'o', (char const   )'d', (char const   )'e',
   (char const   )'\000'};

static int LZWSetupDecode(TIFF *tif ) 
{ LZWCodecState *sp ;
  int code ;
  tdata_t tmp ;
  tdata_t tmp___0 ;
  int tmp___1 ;

  {
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  if ((unsigned long )sp == (unsigned long )((void *)0)) {
    tmp = _TIFFmalloc((int )sizeof(LZWCodecState ));
    tif->tif_data = (tidataval_t *)tmp;
    if ((unsigned long )tif->tif_data == (unsigned long )((void *)0)) {
      TIFFErrorExt(tif->tif_clientdata, "LZWPreDecode",
                   "No space for LZW state block");
      return (0);
    }
    ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab = (code_t *)((void *)0);
    ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_decode = (int (*)(TIFF * ,
                                                                              tidata_t  ,
                                                                              tsize_t  ,
                                                                              tsample_t  ))((void *)0);
    TIFFPredictorInit(tif);
    sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  }
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 222U, "LZWSetupDecode");
  }
  if ((unsigned long )sp->dec_codetab == (unsigned long )((void *)0)) {
    tmp___0 = _TIFFmalloc((int )((unsigned long )(((1L << 12) - 1L) + 1024L) * sizeof(code_t )));
    sp->dec_codetab = (code_t *)tmp___0;
    if ((unsigned long )sp->dec_codetab == (unsigned long )((void *)0)) {
      TIFFErrorExt(tif->tif_clientdata, module, "No space for LZW code table");
      return (0);
    }
    code = 255;
    while (1) {
      (sp->dec_codetab + code)->value = (unsigned char )code;
      (sp->dec_codetab + code)->firstchar = (unsigned char )code;
      (sp->dec_codetab + code)->length = (unsigned short)1;
      (sp->dec_codetab + code)->next = (struct code_ent *)((void *)0);
      tmp___1 = code;
      code --;
      if (! tmp___1) {
        break;
      }
    }
  }
  return (1);
}
}

static int LZWPreDecode(TIFF *tif , tsample_t s ) 
{ LZWCodecState *sp ;

  {
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 253U, "LZWPreDecode");
  }
  if ((int )*(tif->tif_rawdata + 0) == 0) {
    if ((int )*(tif->tif_rawdata + 1) & 1) {
      if (! sp->dec_decode) {
        TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                       "Old-style LZW codes, convert file");
        tif->tif_decoderow = & LZWDecodeCompat;
        tif->tif_decodestrip = & LZWDecodeCompat;
        tif->tif_decodetile = & LZWDecodeCompat;
        (*(tif->tif_setupdecode))(tif);
        sp->dec_decode = & LZWDecodeCompat;
      }
      sp->base.maxcode = (unsigned short )((1L << 9) - 1L);
    } else {
      sp->base.maxcode = (unsigned short )(((1L << 9) - 1L) - 1L);
      sp->dec_decode = & LZWDecode;
    }
  } else {
    sp->base.maxcode = (unsigned short )(((1L << 9) - 1L) - 1L);
    sp->dec_decode = & LZWDecode;
  }
  sp->base.nbits = (unsigned short)9;
  sp->base.nextbits = 0L;
  sp->base.nextdata = 0L;
  sp->dec_restart = 0L;
  sp->dec_nbitsmask = (1L << 9) - 1L;
  sp->dec_bitsleft = (long )(tif->tif_rawcc << 3);
  sp->dec_free_entp = sp->dec_codetab + 258;
  _TIFFmemset((void *)sp->dec_free_entp, 0,
              (int )((unsigned long )((((1L << 12) - 1L) + 1024L) - 258L) * sizeof(code_t )));
  sp->dec_oldcodep = sp->dec_codetab + -1;
  sp->dec_maxcodep = sp->dec_codetab + (sp->dec_nbitsmask - 1L);
  return (1);
}
}

static void codeLoop(TIFF *tif ) 
{ 

  {
  TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
               "LZWDecode: Bogus encoding, loop in the code table; scanline %d",
               tif->tif_row);
  return;
}
}

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
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  op = (char *)op0;
  occ = (long )occ0;
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 352U, "LZWDecode");
  }
  if (sp->dec_restart) {
    codep = sp->dec_codep;
    residue = (long )codep->length - sp->dec_restart;
    if (residue > occ) {
      sp->dec_restart += occ;
      while (1) {
        codep = codep->next;
        residue --;
        if (residue > occ) {
          if (! codep) {
            break;
          }
        } else {
          break;
        }
      }
      if (codep) {
        tp = op + occ;
        while (1) {
          tp --;
          *tp = (char )codep->value;
          codep = codep->next;
          occ --;
          if (occ) {
            if (! codep) {
              break;
            }
          } else {
            break;
          }
        }
      }
      return (1);
    }
    op += residue;
    occ -= residue;
    tp = op;
    while (1) {
      tp --;
      t = (int )codep->value;
      codep = codep->next;
      *tp = (char )t;
      residue --;
      if (residue) {
        if (! codep) {
          break;
        }
      } else {
        break;
      }
    }
    sp->dec_restart = 0L;
  }
  bp = tif->tif_rawcp;
  nbits = (long )sp->base.nbits;
  nextdata = sp->base.nextdata;
  nextbits = sp->base.nextbits;
  nbitsmask = sp->dec_nbitsmask;
  oldcodep = sp->dec_oldcodep;
  free_entp = sp->dec_free_entp;
  maxcodep = sp->dec_maxcodep;
  while (occ > 0L) {
    if (sp->dec_bitsleft < nbits) {
      TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Strip %d not terminated with EOI code",
                     tif->tif_curstrip);
      code = (unsigned short)257;
    } else {
      tmp = bp;
      bp ++;
      nextdata = (nextdata << 8) | (long )*tmp;
      nextbits += 8L;
      if (nextbits < nbits) {
        tmp___0 = bp;
        bp ++;
        nextdata = (nextdata << 8) | (long )*tmp___0;
        nextbits += 8L;
      }
      code = (unsigned short )((nextdata >> (nextbits - nbits)) & nbitsmask);
      nextbits -= nbits;
      sp->dec_bitsleft -= nbits;
    }
    if ((int )code == 257) {
      break;
    }
    if ((int )code == 256) {
      free_entp = sp->dec_codetab + 258;
      nbits = 9L;
      nbitsmask = (1L << 9) - 1L;
      maxcodep = (sp->dec_codetab + nbitsmask) - 1;
      if (sp->dec_bitsleft < nbits) {
        TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                       "LZWDecode: Strip %d not terminated with EOI code",
                       tif->tif_curstrip);
        code = (unsigned short)257;
      } else {
        tmp___1 = bp;
        bp ++;
        nextdata = (nextdata << 8) | (long )*tmp___1;
        nextbits += 8L;
        if (nextbits < nbits) {
          tmp___2 = bp;
          bp ++;
          nextdata = (nextdata << 8) | (long )*tmp___2;
          nextbits += 8L;
        }
        code = (unsigned short )((nextdata >> (nextbits - nbits)) & nbitsmask);
        nextbits -= nbits;
        sp->dec_bitsleft -= nbits;
      }
      if ((int )code == 257) {
        break;
      }
      tmp___3 = op;
      op ++;
      *tmp___3 = (char )code;
      occ --;
      oldcodep = sp->dec_codetab + (int )code;
      continue;
    }
    codep = sp->dec_codetab + (int )code;
    if ((unsigned long )free_entp < (unsigned long )(sp->dec_codetab + 0)) {
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecode: Corrupted LZW table at scanline %d", tif->tif_row);
      return (0);
    } else {
      if ((unsigned long )free_entp >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        return (0);
      }
    }
    free_entp->next = oldcodep;
    if ((unsigned long )free_entp->next < (unsigned long )(sp->dec_codetab + 0)) {
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecode: Corrupted LZW table at scanline %d", tif->tif_row);
      return (0);
    } else {
      if ((unsigned long )free_entp->next >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        return (0);
      }
    }
    free_entp->firstchar = (free_entp->next)->firstchar;
    free_entp->length = (unsigned short )((int )(free_entp->next)->length + 1);
    if ((unsigned long )codep < (unsigned long )free_entp) {
      free_entp->value = codep->firstchar;
    } else {
      free_entp->value = free_entp->firstchar;
    }
    free_entp ++;
    if ((unsigned long )free_entp > (unsigned long )maxcodep) {
      nbits ++;
      if (nbits > 12L) {
        nbits = 12L;
      }
      nbitsmask = (1L << nbits) - 1L;
      maxcodep = (sp->dec_codetab + nbitsmask) - 1;
    }
    oldcodep = codep;
    if ((int )code >= 256) {
      if ((int )codep->length == 0) {
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Wrong length of decoded string: data probably corrupted at scanline %d",
                     tif->tif_row);
        return (0);
      }
      if ((long )codep->length > occ) {
        sp->dec_codep = codep;
        while (1) {
          codep = codep->next;
          if (codep) {
            if (! ((long )codep->length > occ)) {
              break;
            }
          } else {
            break;
          }
        }
        if (codep) {
          sp->dec_restart = occ;
          tp = op + occ;
          while (1) {
            tp --;
            *tp = (char )codep->value;
            codep = codep->next;
            occ --;
            if (occ) {
              if (! codep) {
                break;
              }
            } else {
              break;
            }
          }
          if (codep) {
            codeLoop(tif);
          }
        }
        break;
      }
      len = (int )codep->length;
      tp = op + len;
      while (1) {
        tp --;
        t___0 = (int )codep->value;
        codep = codep->next;
        *tp = (char )t___0;
        if (codep) {
          if (! ((unsigned long )tp > (unsigned long )op)) {
            break;
          }
        } else {
          break;
        }
      }
      if (codep) {
        codeLoop(tif);
        break;
      }
      op += len;
      occ -= (long )len;
    } else {
      tmp___4 = op;
      op ++;
      *tmp___4 = (char )code;
      occ --;
    }
  }
  tif->tif_rawcp = bp;
  sp->base.nbits = (unsigned short )nbits;
  sp->base.nextdata = nextdata;
  sp->base.nextbits = nextbits;
  sp->dec_nbitsmask = nbitsmask;
  sp->dec_oldcodep = oldcodep;
  sp->dec_free_entp = free_entp;
  sp->dec_maxcodep = maxcodep;
  if (occ > 0L) {
    TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                 "LZWDecode: Not enough data at scanline %d (short %d bytes)",
                 tif->tif_row, occ);
    return (0);
  }
  return (1);
}
}

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
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  op = (char *)op0;
  occ = (long )occ0;
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 553U, "LZWDecodeCompat");
  }
  if (sp->dec_restart) {
    codep = sp->dec_codep;
    residue = (long )codep->length - sp->dec_restart;
    if (residue > occ) {
      sp->dec_restart += occ;
      while (1) {
        codep = codep->next;
        residue --;
        if (! (residue > occ)) {
          break;
        }
      }
      tp = op + occ;
      while (1) {
        tp --;
        *tp = (char )codep->value;
        codep = codep->next;
        occ --;
        if (! occ) {
          break;
        }
      }
      return (1);
    }
    op += residue;
    occ -= residue;
    tp = op;
    while (1) {
      tp --;
      *tp = (char )codep->value;
      codep = codep->next;
      residue --;
      if (! residue) {
        break;
      }
    }
    sp->dec_restart = 0L;
  }
  bp = tif->tif_rawcp;
  nbits = (int )sp->base.nbits;
  nextdata = sp->base.nextdata;
  nextbits = sp->base.nextbits;
  nbitsmask = sp->dec_nbitsmask;
  oldcodep = sp->dec_oldcodep;
  free_entp = sp->dec_free_entp;
  maxcodep = sp->dec_maxcodep;
  while (occ > 0L) {
    if (sp->dec_bitsleft < (long )nbits) {
      TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Strip %d not terminated with EOI code",
                     tif->tif_curstrip);
      code = 257;
    } else {
      tmp = bp;
      bp ++;
      nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp << nextbits));
      nextbits += 8L;
      if (nextbits < (long )nbits) {
        tmp___0 = bp;
        bp ++;
        nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp___0 << nextbits));
        nextbits += 8L;
      }
      code = (int )((unsigned short )(nextdata & nbitsmask));
      nextdata >>= nbits;
      nextbits -= (long )nbits;
      sp->dec_bitsleft -= (long )nbits;
    }
    if (code == 257) {
      break;
    }
    if (code == 256) {
      free_entp = sp->dec_codetab + 258;
      nbits = 9;
      nbitsmask = (1L << 9) - 1L;
      maxcodep = sp->dec_codetab + nbitsmask;
      if (sp->dec_bitsleft < (long )nbits) {
        TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                       "LZWDecode: Strip %d not terminated with EOI code",
                       tif->tif_curstrip);
        code = 257;
      } else {
        tmp___1 = bp;
        bp ++;
        nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp___1 << nextbits));
        nextbits += 8L;
        if (nextbits < (long )nbits) {
          tmp___2 = bp;
          bp ++;
          nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp___2 << nextbits));
          nextbits += 8L;
        }
        code = (int )((unsigned short )(nextdata & nbitsmask));
        nextdata >>= nbits;
        nextbits -= (long )nbits;
        sp->dec_bitsleft -= (long )nbits;
      }
      if (code == 257) {
        break;
      }
      tmp___3 = op;
      op ++;
      *tmp___3 = (char )code;
      occ --;
      oldcodep = sp->dec_codetab + code;
      continue;
    }
    codep = sp->dec_codetab + code;
    if ((unsigned long )free_entp < (unsigned long )(sp->dec_codetab + 0)) {
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                   tif->tif_row);
      return (0);
    } else {
      if ((unsigned long )free_entp >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        return (0);
      }
    }
    free_entp->next = oldcodep;
    if ((unsigned long )free_entp->next < (unsigned long )(sp->dec_codetab + 0)) {
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                   tif->tif_row);
      return (0);
    } else {
      if ((unsigned long )free_entp->next >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        return (0);
      }
    }
    free_entp->firstchar = (free_entp->next)->firstchar;
    free_entp->length = (unsigned short )((int )(free_entp->next)->length + 1);
    if ((unsigned long )codep < (unsigned long )free_entp) {
      free_entp->value = codep->firstchar;
    } else {
      free_entp->value = free_entp->firstchar;
    }
    free_entp ++;
    if ((unsigned long )free_entp > (unsigned long )maxcodep) {
      nbits ++;
      if (nbits > 12) {
        nbits = 12;
      }
      nbitsmask = (1L << nbits) - 1L;
      maxcodep = sp->dec_codetab + nbitsmask;
    }
    oldcodep = codep;
    if (code >= 256) {
      if ((int )codep->length == 0) {
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecodeCompat: Wrong length of decoded string: data probably corrupted at scanline %d",
                     tif->tif_row);
        return (0);
      }
      if ((long )codep->length > occ) {
        sp->dec_codep = codep;
        while (1) {
          codep = codep->next;
          if (! ((long )codep->length > occ)) {
            break;
          }
        }
        sp->dec_restart = occ;
        tp = op + occ;
        while (1) {
          tp --;
          *tp = (char )codep->value;
          codep = codep->next;
          occ --;
          if (! occ) {
            break;
          }
        }
        break;
      }
      op += (int )codep->length;
      occ -= (long )codep->length;
      tp = op;
      while (1) {
        tp --;
        *tp = (char )codep->value;
        codep = codep->next;
        if (! ((unsigned long )codep != (unsigned long )((void *)0))) {
          break;
        }
      }
    } else {
      tmp___4 = op;
      op ++;
      *tmp___4 = (char )code;
      occ --;
    }
  }
  tif->tif_rawcp = bp;
  sp->base.nbits = (unsigned short )nbits;
  sp->base.nextdata = nextdata;
  sp->base.nextbits = nextbits;
  sp->dec_nbitsmask = nbitsmask;
  sp->dec_oldcodep = oldcodep;
  sp->dec_free_entp = free_entp;
  sp->dec_maxcodep = maxcodep;
  if (occ > 0L) {
    TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                 "LZWDecodeCompat: Not enough data at scanline %d (short %d bytes)",
                 tif->tif_row, occ);
    return (0);
  }
  return (1);
}
}

static int LZWSetupEncode(TIFF *tif ) ;

static char const   module___0[15]   = 
  {(char const   )'L', (char const   )'Z', (char const   )'W',
   (char const   )'S', (char const   )'e', (char const   )'t',
   (char const   )'u', (char const   )'p', (char const   )'E',
   (char const   )'n', (char const   )'c', (char const   )'o',
   (char const   )'d', (char const   )'e', (char const   )'\000'};

static int LZWSetupEncode(TIFF *tif ) 
{ LZWCodecState *sp ;
  tdata_t tmp ;

  {
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 718U, "LZWSetupEncode");
  }
  tmp = _TIFFmalloc((int )(9001UL * sizeof(hash_t )));
  sp->enc_hashtab = (hash_t *)tmp;
  if ((unsigned long )sp->enc_hashtab == (unsigned long )((void *)0)) {
    TIFFErrorExt(tif->tif_clientdata, module___0, "No space for LZW hash table");
    return (0);
  }
  return (1);
}
}

static int LZWPreEncode(TIFF *tif , tsample_t s ) 
{ LZWCodecState *sp ;

  {
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  if (! ((unsigned long )sp != (unsigned long )((void *)0))) {
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 736U, "LZWPreEncode");
  }
  sp->base.nbits = (unsigned short)9;
  sp->base.maxcode = (unsigned short )((1L << 9) - 1L);
  sp->base.free_ent = (unsigned short)258;
  sp->base.nextbits = 0L;
  sp->base.nextdata = 0L;
  sp->enc_checkpoint = 10000L;
  sp->enc_ratio = 0L;
  sp->enc_incount = 0L;
  sp->enc_outcount = 0L;
  sp->enc_rawlimit = ((tif->tif_rawdata + tif->tif_rawdatasize) - 1) - 4;
  cl_hash(sp);
  sp->enc_oldcode = 65535;
  return (1);
}
}

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
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  if ((unsigned long )sp == (unsigned long )((void *)0)) {
    return (0);
  }
  incount = sp->enc_incount;
  outcount = sp->enc_outcount;
  checkpoint = sp->enc_checkpoint;
  nextdata = sp->base.nextdata;
  nextbits = sp->base.nextbits;
  free_ent = (int )sp->base.free_ent;
  maxcode = (int )sp->base.maxcode;
  nbits = (int )sp->base.nbits;
  op = tif->tif_rawcp;
  limit = sp->enc_rawlimit;
  ent = (unsigned short )sp->enc_oldcode;
  if ((int )ent == 65535) {
    if (cc > 0) {
      nextdata = (nextdata << nbits) | 256L;
      nextbits += (long )nbits;
      tmp = op;
      op ++;
      *tmp = (unsigned char )(nextdata >> (nextbits - 8L));
      nextbits -= 8L;
      if (nextbits >= 8L) {
        tmp___0 = op;
        op ++;
        *tmp___0 = (unsigned char )(nextdata >> (nextbits - 8L));
        nextbits -= 8L;
      }
      outcount += (long )nbits;
      tmp___1 = bp;
      bp ++;
      ent = (unsigned short )*tmp___1;
      cc --;
      incount ++;
    }
  }
  while (cc > 0) {
    tmp___2 = bp;
    bp ++;
    c = (int )*tmp___2;
    cc --;
    incount ++;
    fcode = ((long )c << 12) + (long )ent;
    h = (c << 5) ^ (int )ent;
    hp = sp->enc_hashtab + h;
    if (hp->hash == fcode) {
      ent = hp->code;
      continue;
    }
    if (hp->hash >= 0L) {
      disp = 9001L - (long )h;
      if (h == 0) {
        disp = 1L;
      }
      while (1) {
        h = (int )((long )h - disp);
        if (h < 0) {
          h = (int )((long )h + 9001L);
        }
        hp = sp->enc_hashtab + h;
        if (hp->hash == fcode) {
          ent = hp->code;
          goto hit;
        }
        if (! (hp->hash >= 0L)) {
          break;
        }
      }
    }
    if ((unsigned long )op > (unsigned long )limit) {
      tif->tif_rawcc = op - tif->tif_rawdata;
      TIFFFlushData1(tif);
      op = tif->tif_rawdata;
    }
    nextdata = (nextdata << nbits) | (long )ent;
    nextbits += (long )nbits;
    tmp___3 = op;
    op ++;
    *tmp___3 = (unsigned char )(nextdata >> (nextbits - 8L));
    nextbits -= 8L;
    if (nextbits >= 8L) {
      tmp___4 = op;
      op ++;
      *tmp___4 = (unsigned char )(nextdata >> (nextbits - 8L));
      nextbits -= 8L;
    }
    outcount += (long )nbits;
    ent = (unsigned short )c;
    tmp___5 = free_ent;
    free_ent ++;
    hp->code = (unsigned short )tmp___5;
    hp->hash = fcode;
    if ((long )free_ent == ((1L << 12) - 1L) - 1L) {
      cl_hash(sp);
      sp->enc_ratio = 0L;
      incount = 0L;
      outcount = 0L;
      free_ent = 258;
      nextdata = (nextdata << nbits) | 256L;
      nextbits += (long )nbits;
      tmp___6 = op;
      op ++;
      *tmp___6 = (unsigned char )(nextdata >> (nextbits - 8L));
      nextbits -= 8L;
      if (nextbits >= 8L) {
        tmp___7 = op;
        op ++;
        *tmp___7 = (unsigned char )(nextdata >> (nextbits - 8L));
        nextbits -= 8L;
      }
      outcount += (long )nbits;
      nbits = 9;
      maxcode = (int )((1L << 9) - 1L);
    } else {
      if (free_ent > maxcode) {
        nbits ++;
        if (! (nbits <= 12)) {
          __assert_fail("nbits <= 12", "tif_lzw.c", 902U, "LZWEncode");
        }
        maxcode = (int )((1L << nbits) - 1L);
      } else {
        if (incount >= checkpoint) {
          checkpoint = incount + 10000L;
          if (incount > 8388607L) {
            rat = outcount >> 8;
            if (rat == 0L) {
              rat = 2147483647L;
            } else {
              rat = incount / rat;
            }
          } else {
            rat = (incount << 8) / outcount;
          }
          if (rat <= sp->enc_ratio) {
            cl_hash(sp);
            sp->enc_ratio = 0L;
            incount = 0L;
            outcount = 0L;
            free_ent = 258;
            nextdata = (nextdata << nbits) | 256L;
            nextbits += (long )nbits;
            tmp___8 = op;
            op ++;
            *tmp___8 = (unsigned char )(nextdata >> (nextbits - 8L));
            nextbits -= 8L;
            if (nextbits >= 8L) {
              tmp___9 = op;
              op ++;
              *tmp___9 = (unsigned char )(nextdata >> (nextbits - 8L));
              nextbits -= 8L;
            }
            outcount += (long )nbits;
            nbits = 9;
            maxcode = (int )((1L << 9) - 1L);
          } else {
            sp->enc_ratio = rat;
          }
        }
      }
    }
    hit: ;
  }
  sp->enc_incount = incount;
  sp->enc_outcount = outcount;
  sp->enc_checkpoint = checkpoint;
  sp->enc_oldcode = (int )ent;
  sp->base.nextdata = nextdata;
  sp->base.nextbits = nextbits;
  sp->base.free_ent = (unsigned short )free_ent;
  sp->base.maxcode = (unsigned short )maxcode;
  sp->base.nbits = (unsigned short )nbits;
  tif->tif_rawcp = op;
  return (1);
}
}

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
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  op = tif->tif_rawcp;
  nextbits = sp->base.nextbits;
  nextdata = sp->base.nextdata;
  outcount = sp->enc_outcount;
  nbits = (int )sp->base.nbits;
  if ((unsigned long )op > (unsigned long )sp->enc_rawlimit) {
    tif->tif_rawcc = op - tif->tif_rawdata;
    TIFFFlushData1(tif);
    op = tif->tif_rawdata;
  }
  if (sp->enc_oldcode != 65535) {
    nextdata = (nextdata << nbits) | (long )sp->enc_oldcode;
    nextbits += (long )nbits;
    tmp = op;
    op ++;
    *tmp = (unsigned char )(nextdata >> (nextbits - 8L));
    nextbits -= 8L;
    if (nextbits >= 8L) {
      tmp___0 = op;
      op ++;
      *tmp___0 = (unsigned char )(nextdata >> (nextbits - 8L));
      nextbits -= 8L;
    }
    outcount += (long )nbits;
    sp->enc_oldcode = 65535;
  }
  nextdata = (nextdata << nbits) | 257L;
  nextbits += (long )nbits;
  tmp___1 = op;
  op ++;
  *tmp___1 = (unsigned char )(nextdata >> (nextbits - 8L));
  nextbits -= 8L;
  if (nextbits >= 8L) {
    tmp___2 = op;
    op ++;
    *tmp___2 = (unsigned char )(nextdata >> (nextbits - 8L));
    nextbits -= 8L;
  }
  outcount += (long )nbits;
  if (nextbits > 0L) {
    tmp___3 = op;
    op ++;
    *tmp___3 = (unsigned char )(nextdata << (8L - nextbits));
  }
  tif->tif_rawcc = op - tif->tif_rawdata;
  return (1);
}
}

static void cl_hash(LZWCodecState *sp ) 
{ register hash_t *hp ;
  register long i ;

  {
  hp = sp->enc_hashtab + 9000L;
  i = 8993L;
  while (1) {
    i -= 8L;
    (hp + -7)->hash = -1L;
    (hp + -6)->hash = -1L;
    (hp + -5)->hash = -1L;
    (hp + -4)->hash = -1L;
    (hp + -3)->hash = -1L;
    (hp + -2)->hash = -1L;
    (hp + -1)->hash = -1L;
    (hp + 0)->hash = -1L;
    hp -= 8;
    if (! (i >= 0L)) {
      break;
    }
  }
  i += 8L;
  while (i > 0L) {
    hp->hash = -1L;
    i --;
    hp --;
  }
  return;
}
}

static void LZWCleanup(TIFF *tif ) 
{ 

  {
  TIFFPredictorCleanup(tif);
  if (! ((unsigned long )tif->tif_data != (unsigned long )((tidataval_t *)0))) {
    __assert_fail("tif->tif_data != 0", "tif_lzw.c", 1007U, "LZWCleanup");
  }
  if (((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab) {
    _TIFFfree((void *)((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab);
  }
  if (((LZWCodecState *)((LZWBaseState *)tif->tif_data))->enc_hashtab) {
    _TIFFfree((void *)((LZWCodecState *)((LZWBaseState *)tif->tif_data))->enc_hashtab);
  }
  _TIFFfree((void *)tif->tif_data);
  tif->tif_data = (tidataval_t *)((void *)0);
  _TIFFSetDefaultCompressionState(tif);
  return;
}
}

int TIFFInitLZW(TIFF *tif , int scheme ) 
{ tdata_t tmp ;

  {
  if (! (scheme == 5)) {
    __assert_fail("scheme == 5", "tif_lzw.c", 1024U, "TIFFInitLZW");
  }
  tmp = _TIFFmalloc((int )sizeof(LZWCodecState ));
  tif->tif_data = (tidataval_t *)tmp;
  if ((unsigned long )tif->tif_data == (unsigned long )((void *)0)) {
    goto bad;
  }
  ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab = (code_t *)((void *)0);
  ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_decode = (int (*)(TIFF * ,
                                                                            tidata_t  ,
                                                                            tsize_t  ,
                                                                            tsample_t  ))((void *)0);
  ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->enc_hashtab = (hash_t *)((void *)0);
  ((LZWBaseState *)tif->tif_data)->rw_mode = tif->tif_mode;
  tif->tif_setupdecode = & LZWSetupDecode;
  tif->tif_predecode = & LZWPreDecode;
  tif->tif_decoderow = & LZWDecode;
  tif->tif_decodestrip = & LZWDecode;
  tif->tif_decodetile = & LZWDecode;
  tif->tif_setupencode = & LZWSetupEncode;
  tif->tif_preencode = & LZWPreEncode;
  tif->tif_postencode = & LZWPostEncode;
  tif->tif_encoderow = & LZWEncode;
  tif->tif_encodestrip = & LZWEncode;
  tif->tif_encodetile = & LZWEncode;
  tif->tif_cleanup = & LZWCleanup;
  TIFFPredictorInit(tif);
  return (1);
  bad: 
  TIFFErrorExt(tif->tif_clientdata, "TIFFInitLZW",
               "No space for LZW state block");
  return (0);
}
}

