struct _IO_FILE;
struct _IO_FILE *_coverage_fout  ;
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
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long int64_t;
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long u_int64_t;
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
struct __gconv_step_data;
struct __gconv_loaded_object;
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
extern int select(int __nfds , fd_set * __restrict  __readfds ,
                  fd_set * __restrict  __writefds ,
                  fd_set * __restrict  __exceptfds ,
                  struct timeval * __restrict  __timeout ) ;
extern int pselect(int __nfds , fd_set * __restrict  __readfds ,
                   fd_set * __restrict  __writefds ,
                   fd_set * __restrict  __exceptfds ,
                   struct timespec  const  * __restrict  __timeout ,
                   __sigset_t const   * __restrict  __sigmask ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline extern  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
extern FILE *fopen(char const   * __restrict  __filename ,
                   char const   * __restrict  __modes ) ;
extern int fprintf(FILE * __restrict  __stream ,
                   char const   * __restrict  __format  , ...) ;
extern int fflush(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_major(unsigned long long __dev ) ;
__inline extern unsigned int gnu_dev_major(unsigned long long __dev ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "1\n");
  fflush(_coverage_fout);
  }
  return ((unsigned int )(((__dev >> 8) & 4095ULL) | (unsigned long long )((unsigned int )(__dev >> 32) & 4294963200U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned int gnu_dev_minor(unsigned long long __dev ) ;
__inline extern unsigned int gnu_dev_minor(unsigned long long __dev ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "2\n");
  fflush(_coverage_fout);
  }
  return ((unsigned int )((__dev & 255ULL) | (unsigned long long )((unsigned int )(__dev >> 12) & 4294967040U)));
}
}
__inline extern  __attribute__((__nothrow__)) unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                                                 unsigned int __minor ) ;
__inline extern unsigned long long gnu_dev_makedev(unsigned int __major ,
                                                   unsigned int __minor ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "3\n");
  fflush(_coverage_fout);
  }
  return (((unsigned long long )((__minor & 255U) | ((__major & 4095U) << 8)) | ((unsigned long long )(__minor & 4294967040U) << 12)) | ((unsigned long long )(__major & 4294963200U) << 32));
}
}
extern int fcntl(int __fd , int __cmd  , ...) ;
extern int ( __attribute__((__nonnull__(1))) open)(char const   *__file ,
                                                   int __oflag  , ...) ;
extern int ( __attribute__((__nonnull__(1))) creat)(char const   *__file ,
                                                    __mode_t __mode ) ;
extern int lockf(int __fd , int __cmd , __off_t __len ) ;
extern  __attribute__((__nothrow__)) int posix_fadvise(int __fd ,
                                                       __off_t __offset ,
                                                       __off_t __len ,
                                                       int __advise ) ;
extern int posix_fallocate(int __fd , __off_t __offset , __off_t __len ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memcpy)(void * __restrict  __dest ,
                                                                                       void const   * __restrict  __src ,
                                                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memmove)(void *__dest ,
                                                                                        void const   *__src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1,2))) memccpy)(void * __restrict  __dest ,
                                                                                        void const   * __restrict  __src ,
                                                                                        int __c ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memset)(void *__s ,
                                                                                     int __c ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) memcmp)(void const   *__s1 ,
                                                                                     void const   *__s2 ,
                                                                                     size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) void *( __attribute__((__nonnull__(1))) memchr)(void const   *__s ,
                                                                                     int __c ,
                                                                                     size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcpy)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strncpy)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strcat)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strncat)(char * __restrict  __dest ,
                                                                                        char const   * __restrict  __src ,
                                                                                        size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcmp)(char const   *__s1 ,
                                                                                     char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncmp)(char const   *__s1 ,
                                                                                      char const   *__s2 ,
                                                                                      size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcoll)(char const   *__s1 ,
                                                                                      char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(2))) strxfrm)(char * __restrict  __dest ,
                                                                                       char const   * __restrict  __src ,
                                                                                       size_t __n ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strdup)(char const   *__s )  __attribute__((__malloc__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strchr)(char const   *__s ,
                                                                                     int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) strrchr)(char const   *__s ,
                                                                                      int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2))) strcspn)(char const   *__s ,
                                                                                         char const   *__reject )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1,2))) strspn)(char const   *__s ,
                                                                                        char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strpbrk)(char const   *__s ,
                                                                                        char const   *__accept )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strstr)(char const   *__haystack ,
                                                                                       char const   *__needle )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2))) strtok)(char * __restrict  __s ,
                                                                                     char const   * __restrict  __delim ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2,3))) __strtok_r)(char * __restrict  __s ,
                                                                                           char const   * __restrict  __delim ,
                                                                                           char ** __restrict  __save_ptr ) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(2,3))) strtok_r)(char * __restrict  __s ,
                                                                                         char const   * __restrict  __delim ,
                                                                                         char ** __restrict  __save_ptr ) ;
extern  __attribute__((__nothrow__)) size_t ( __attribute__((__nonnull__(1))) strlen)(char const   *__s )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *strerror(int __errnum ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(2))) strerror_r)(int __errnum ,
                                                                                       char *__buf ,
                                                                                       size_t __buflen )  __asm__("__xpg_strerror_r")  ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) __bzero)(void *__s ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1,2))) bcopy)(void const   *__src ,
                                                                                     void *__dest ,
                                                                                     size_t __n ) ;
extern  __attribute__((__nothrow__)) void ( __attribute__((__nonnull__(1))) bzero)(void *__s ,
                                                                                   size_t __n ) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) bcmp)(void const   *__s1 ,
                                                                                   void const   *__s2 ,
                                                                                   size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) index)(char const   *__s ,
                                                                                    int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1))) rindex)(char const   *__s ,
                                                                                     int __c )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ffs(int __i )  __attribute__((__const__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strcasecmp)(char const   *__s1 ,
                                                                                         char const   *__s2 )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) int ( __attribute__((__nonnull__(1,2))) strncasecmp)(char const   *__s1 ,
                                                                                          char const   *__s2 ,
                                                                                          size_t __n )  __attribute__((__pure__)) ;
extern  __attribute__((__nothrow__)) char *( __attribute__((__nonnull__(1,2))) strsep)(char ** __restrict  __stringp ,
                                                                                       char const   * __restrict  __delim ) ;
extern void *__rawmemchr(void const   *__s , int __c ) ;
__inline extern size_t __strcspn_c1(char const   *__s , int __reject ) ;
__inline extern size_t __strcspn_c1(char const   *__s , int __reject ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "4\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "5\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "6\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "7\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) != (int const   )__reject) {
        {
        fprintf(_coverage_fout, "8\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "9\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "10\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "11\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "12\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) ;
__inline extern size_t __strcspn_c2(char const   *__s , int __reject1 ,
                                    int __reject2 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "13\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "14\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "15\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "16\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        {
        fprintf(_coverage_fout, "17\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
          {
          fprintf(_coverage_fout, "18\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "19\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "20\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "21\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "22\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "23\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) ;
__inline extern size_t __strcspn_c3(char const   *__s , int __reject1 ,
                                    int __reject2 , int __reject3 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "24\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "25\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "26\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) != 0) {
      {
      fprintf(_coverage_fout, "27\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) != (int const   )__reject1) {
        {
        fprintf(_coverage_fout, "28\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*(__s + __result) != (int const   )__reject2) {
          {
          fprintf(_coverage_fout, "29\n");
          fflush(_coverage_fout);
          }
          if ((int const   )*(__s + __result) != (int const   )__reject3) {
            {
            fprintf(_coverage_fout, "30\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "31\n");
            fflush(_coverage_fout);
            }
            break;
          }
        } else {
          {
          fprintf(_coverage_fout, "32\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "33\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "34\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "35\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "36\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern size_t __strspn_c1(char const   *__s , int __accept ) ;
__inline extern size_t __strspn_c1(char const   *__s , int __accept ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "37\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "38\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "39\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) == (int const   )__accept) {
      {
      fprintf(_coverage_fout, "40\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "41\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "42\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "43\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
__inline extern size_t __strspn_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "44\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "45\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "46\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) == (int const   )__accept1) {
      {
      fprintf(_coverage_fout, "47\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "48\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) == (int const   )__accept2) {
        {
        fprintf(_coverage_fout, "49\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "50\n");
        fflush(_coverage_fout);
        }
        break;
      }
    }
    {
    fprintf(_coverage_fout, "51\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "52\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
__inline extern size_t __strspn_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ 
  register size_t __result ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "53\n");
  fflush(_coverage_fout);
  }
  __result = (size_t )0;
  {
  fprintf(_coverage_fout, "54\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "55\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*(__s + __result) == (int const   )__accept1) {
      {
      fprintf(_coverage_fout, "56\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "57\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*(__s + __result) == (int const   )__accept2) {
        {
        fprintf(_coverage_fout, "58\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "59\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*(__s + __result) == (int const   )__accept3) {
          {
          fprintf(_coverage_fout, "60\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "61\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
    }
    {
    fprintf(_coverage_fout, "62\n");
    fflush(_coverage_fout);
    }
    __result ++;
  }
  {
  fprintf(_coverage_fout, "63\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
__inline extern char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) ;
__inline extern char *__strpbrk_c2(char const   *__s , int __accept1 ,
                                   int __accept2 ) 
{ 
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "64\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "65\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*__s != 0) {
      {
      fprintf(_coverage_fout, "66\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*__s != (int const   )__accept1) {
        {
        fprintf(_coverage_fout, "67\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*__s != (int const   )__accept2) {
          {
          fprintf(_coverage_fout, "68\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "69\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "70\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "71\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "72\n");
    fflush(_coverage_fout);
    }
    __s ++;
  }
  {
  fprintf(_coverage_fout, "73\n");
  fflush(_coverage_fout);
  }
  if ((int const   )*__s == 0) {
    {
    fprintf(_coverage_fout, "74\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((void *)0);
  } else {
    {
    fprintf(_coverage_fout, "75\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((size_t )__s);
  }
  {
  fprintf(_coverage_fout, "76\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) ;
__inline extern char *__strpbrk_c3(char const   *__s , int __accept1 ,
                                   int __accept2 , int __accept3 ) 
{ 
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "77\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "78\n");
    fflush(_coverage_fout);
    }
    if ((int const   )*__s != 0) {
      {
      fprintf(_coverage_fout, "79\n");
      fflush(_coverage_fout);
      }
      if ((int const   )*__s != (int const   )__accept1) {
        {
        fprintf(_coverage_fout, "80\n");
        fflush(_coverage_fout);
        }
        if ((int const   )*__s != (int const   )__accept2) {
          {
          fprintf(_coverage_fout, "81\n");
          fflush(_coverage_fout);
          }
          if ((int const   )*__s != (int const   )__accept3) {
            {
            fprintf(_coverage_fout, "82\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "83\n");
            fflush(_coverage_fout);
            }
            break;
          }
        } else {
          {
          fprintf(_coverage_fout, "84\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "85\n");
        fflush(_coverage_fout);
        }
        break;
      }
    } else {
      {
      fprintf(_coverage_fout, "86\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "87\n");
    fflush(_coverage_fout);
    }
    __s ++;
  }
  {
  fprintf(_coverage_fout, "88\n");
  fflush(_coverage_fout);
  }
  if ((int const   )*__s == 0) {
    {
    fprintf(_coverage_fout, "89\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((void *)0);
  } else {
    {
    fprintf(_coverage_fout, "90\n");
    fflush(_coverage_fout);
    }
    tmp = (char *)((size_t )__s);
  }
  {
  fprintf(_coverage_fout, "91\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) ;
__inline extern char *__strtok_r_1c(char *__s , char __sep , char **__nextp ) 
{ 
  char *__result ;
  char *tmp ;
  char *tmp___0 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "92\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )__s == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "93\n");
    fflush(_coverage_fout);
    }
    __s = *__nextp;
  } else {
    {
    fprintf(_coverage_fout, "94\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "95\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "96\n");
    fflush(_coverage_fout);
    }
    if ((int )*__s == (int )__sep) {
      {
      fprintf(_coverage_fout, "97\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "98\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "99\n");
    fflush(_coverage_fout);
    }
    __s ++;
  }
  {
  fprintf(_coverage_fout, "100\n");
  fflush(_coverage_fout);
  }
  __result = (char *)((void *)0);
  {
  fprintf(_coverage_fout, "101\n");
  fflush(_coverage_fout);
  }
  if ((int )*__s != 0) {
    {
    fprintf(_coverage_fout, "102\n");
    fflush(_coverage_fout);
    }
    tmp = __s;
    {
    fprintf(_coverage_fout, "103\n");
    fflush(_coverage_fout);
    }
    __s ++;
    {
    fprintf(_coverage_fout, "104\n");
    fflush(_coverage_fout);
    }
    __result = tmp;
    {
    fprintf(_coverage_fout, "105\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "106\n");
      fflush(_coverage_fout);
      }
      if ((int )*__s != 0) {
        {
        fprintf(_coverage_fout, "107\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "108\n");
        fflush(_coverage_fout);
        }
        break;
      }
      {
      fprintf(_coverage_fout, "109\n");
      fflush(_coverage_fout);
      }
      tmp___0 = __s;
      {
      fprintf(_coverage_fout, "110\n");
      fflush(_coverage_fout);
      }
      __s ++;
      {
      fprintf(_coverage_fout, "111\n");
      fflush(_coverage_fout);
      }
      if ((int )*tmp___0 == (int )__sep) {
        {
        fprintf(_coverage_fout, "112\n");
        fflush(_coverage_fout);
        }
        *(__s + -1) = (char )'\000';
        {
        fprintf(_coverage_fout, "113\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "114\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "115\n");
    fflush(_coverage_fout);
    }
    *__nextp = __s;
  } else {
    {
    fprintf(_coverage_fout, "116\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "117\n");
  fflush(_coverage_fout);
  }
  return (__result);
}
}
extern char *__strsep_g(char **__stringp , char const   *__delim ) ;
__inline extern char *__strsep_1c(char **__s , char __reject ) ;
__inline extern char *__strsep_1c(char **__s , char __reject ) 
{ 
  register char *__retval ;
  char *tmp ;
  char *tmp___0 ;
  void *tmp___1 ;
  char *tmp___2 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "118\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "119\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "120\n");
    fflush(_coverage_fout);
    }
    tmp___2 = __builtin_strchr(__retval, (int )__reject);
    {
    fprintf(_coverage_fout, "121\n");
    fflush(_coverage_fout);
    }
    tmp___0 = tmp___2;
    {
    fprintf(_coverage_fout, "122\n");
    fflush(_coverage_fout);
    }
    *__s = tmp___0;
    {
    fprintf(_coverage_fout, "123\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )tmp___0 != (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "124\n");
      fflush(_coverage_fout);
      }
      tmp = *__s;
      {
      fprintf(_coverage_fout, "125\n");
      fflush(_coverage_fout);
      }
      (*__s) ++;
      {
      fprintf(_coverage_fout, "126\n");
      fflush(_coverage_fout);
      }
      *tmp = (char )'\000';
    } else {
      {
      fprintf(_coverage_fout, "127\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "128\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "129\n");
  fflush(_coverage_fout);
  }
  return (__retval);
}
}
__inline extern char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) ;
__inline extern char *__strsep_2c(char **__s , char __reject1 , char __reject2 ) 
{ 
  register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "130\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "131\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "132\n");
    fflush(_coverage_fout);
    }
    __cp = __retval;
    {
    fprintf(_coverage_fout, "133\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "134\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == 0) {
        {
        fprintf(_coverage_fout, "135\n");
        fflush(_coverage_fout);
        }
        __cp = (char *)((void *)0);
        {
        fprintf(_coverage_fout, "136\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "137\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "138\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == (int )__reject1) {
        {
        fprintf(_coverage_fout, "139\n");
        fflush(_coverage_fout);
        }
        tmp = __cp;
        {
        fprintf(_coverage_fout, "140\n");
        fflush(_coverage_fout);
        }
        __cp ++;
        {
        fprintf(_coverage_fout, "141\n");
        fflush(_coverage_fout);
        }
        *tmp = (char )'\000';
        {
        fprintf(_coverage_fout, "142\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "143\n");
        fflush(_coverage_fout);
        }
        if ((int )*__cp == (int )__reject2) {
          {
          fprintf(_coverage_fout, "144\n");
          fflush(_coverage_fout);
          }
          tmp = __cp;
          {
          fprintf(_coverage_fout, "145\n");
          fflush(_coverage_fout);
          }
          __cp ++;
          {
          fprintf(_coverage_fout, "146\n");
          fflush(_coverage_fout);
          }
          *tmp = (char )'\000';
          {
          fprintf(_coverage_fout, "147\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "148\n");
          fflush(_coverage_fout);
          }

        }
      }
      {
      fprintf(_coverage_fout, "149\n");
      fflush(_coverage_fout);
      }
      __cp ++;
    }
    {
    fprintf(_coverage_fout, "150\n");
    fflush(_coverage_fout);
    }
    *__s = __cp;
  } else {
    {
    fprintf(_coverage_fout, "151\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "152\n");
  fflush(_coverage_fout);
  }
  return (__retval);
}
}
__inline extern char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) ;
__inline extern char *__strsep_3c(char **__s , char __reject1 , char __reject2 ,
                                  char __reject3 ) 
{ 
  register char *__retval ;
  register char *__cp ;
  char *tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "153\n");
  fflush(_coverage_fout);
  }
  __retval = *__s;
  {
  fprintf(_coverage_fout, "154\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )__retval != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "155\n");
    fflush(_coverage_fout);
    }
    __cp = __retval;
    {
    fprintf(_coverage_fout, "156\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "157\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == 0) {
        {
        fprintf(_coverage_fout, "158\n");
        fflush(_coverage_fout);
        }
        __cp = (char *)((void *)0);
        {
        fprintf(_coverage_fout, "159\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "160\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "161\n");
      fflush(_coverage_fout);
      }
      if ((int )*__cp == (int )__reject1) {
        {
        fprintf(_coverage_fout, "162\n");
        fflush(_coverage_fout);
        }
        tmp = __cp;
        {
        fprintf(_coverage_fout, "163\n");
        fflush(_coverage_fout);
        }
        __cp ++;
        {
        fprintf(_coverage_fout, "164\n");
        fflush(_coverage_fout);
        }
        *tmp = (char )'\000';
        {
        fprintf(_coverage_fout, "165\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "166\n");
        fflush(_coverage_fout);
        }
        if ((int )*__cp == (int )__reject2) {
          {
          fprintf(_coverage_fout, "167\n");
          fflush(_coverage_fout);
          }
          tmp = __cp;
          {
          fprintf(_coverage_fout, "168\n");
          fflush(_coverage_fout);
          }
          __cp ++;
          {
          fprintf(_coverage_fout, "169\n");
          fflush(_coverage_fout);
          }
          *tmp = (char )'\000';
          {
          fprintf(_coverage_fout, "170\n");
          fflush(_coverage_fout);
          }
          break;
        } else {
          {
          fprintf(_coverage_fout, "171\n");
          fflush(_coverage_fout);
          }
          if ((int )*__cp == (int )__reject3) {
            {
            fprintf(_coverage_fout, "172\n");
            fflush(_coverage_fout);
            }
            tmp = __cp;
            {
            fprintf(_coverage_fout, "173\n");
            fflush(_coverage_fout);
            }
            __cp ++;
            {
            fprintf(_coverage_fout, "174\n");
            fflush(_coverage_fout);
            }
            *tmp = (char )'\000';
            {
            fprintf(_coverage_fout, "175\n");
            fflush(_coverage_fout);
            }
            break;
          } else {
            {
            fprintf(_coverage_fout, "176\n");
            fflush(_coverage_fout);
            }

          }
        }
      }
      {
      fprintf(_coverage_fout, "177\n");
      fflush(_coverage_fout);
      }
      __cp ++;
    }
    {
    fprintf(_coverage_fout, "178\n");
    fflush(_coverage_fout);
    }
    *__s = __cp;
  } else {
    {
    fprintf(_coverage_fout, "179\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "180\n");
  fflush(_coverage_fout);
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
extern int fflush_unlocked(FILE *__stream ) ;
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
extern int printf(char const   * __restrict  __format  , ...) ;
extern  __attribute__((__nothrow__)) int sprintf(char * __restrict  __s ,
                                                 char const   * __restrict  __format 
                                                 , ...) ;
extern int vfprintf(FILE * __restrict  __s ,
                    char const   * __restrict  __format , __gnuc_va_list __arg ) ;
__inline extern int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int vsprintf(char * __restrict  __s ,
                                                  char const   * __restrict  __format ,
                                                  __gnuc_va_list __arg ) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  snprintf)(char * __restrict  __s ,
                                                                             size_t __maxlen ,
                                                                             char const   * __restrict  __format 
                                                                             , ...) ;
extern  __attribute__((__nothrow__)) int ( /* format attribute */  vsnprintf)(char * __restrict  __s ,
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
__inline extern int getchar(void) ;
__inline extern int getc_unlocked(FILE *__fp ) ;
__inline extern int getchar_unlocked(void) ;
__inline extern int fgetc_unlocked(FILE *__fp ) ;
extern int fputc(int __c , FILE *__stream ) ;
extern int putc(int __c , FILE *__stream ) ;
__inline extern int putchar(int __c ) ;
__inline extern int fputc_unlocked(int __c , FILE *__stream ) ;
__inline extern int putc_unlocked(int __c , FILE *__stream ) ;
__inline extern int putchar_unlocked(int __c ) ;
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
__inline extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
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
__inline extern int vprintf(char const   * __restrict  __fmt ,
                            __gnuc_va_list __arg ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "181\n");
  fflush(_coverage_fout);
  }
  tmp = vfprintf((FILE */* __restrict  */)stdout, __fmt, __arg);
  {
  fprintf(_coverage_fout, "182\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern int getchar(void) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "183\n");
  fflush(_coverage_fout);
  }
  tmp = _IO_getc(stdin);
  {
  fprintf(_coverage_fout, "184\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern int fgetc_unlocked(FILE *__fp ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "185\n");
  fflush(_coverage_fout);
  }
  tmp___3 = __builtin_expect((long )((unsigned long )__fp->_IO_read_ptr >= (unsigned long )__fp->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "186\n");
  fflush(_coverage_fout);
  }
  if (tmp___3) {
    {
    fprintf(_coverage_fout, "187\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __uflow(__fp);
    {
    fprintf(_coverage_fout, "188\n");
    fflush(_coverage_fout);
    }
    tmp___2 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "189\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __fp->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "190\n");
    fflush(_coverage_fout);
    }
    (__fp->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "191\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  {
  fprintf(_coverage_fout, "192\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline extern int getc_unlocked(FILE *__fp ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "193\n");
  fflush(_coverage_fout);
  }
  tmp___3 = __builtin_expect((long )((unsigned long )__fp->_IO_read_ptr >= (unsigned long )__fp->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "194\n");
  fflush(_coverage_fout);
  }
  if (tmp___3) {
    {
    fprintf(_coverage_fout, "195\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __uflow(__fp);
    {
    fprintf(_coverage_fout, "196\n");
    fflush(_coverage_fout);
    }
    tmp___2 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "197\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __fp->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "198\n");
    fflush(_coverage_fout);
    }
    (__fp->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "199\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  {
  fprintf(_coverage_fout, "200\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline extern int getchar_unlocked(void) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  int tmp___2 ;
  long tmp___3 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "201\n");
  fflush(_coverage_fout);
  }
  tmp___3 = __builtin_expect((long )((unsigned long )stdin->_IO_read_ptr >= (unsigned long )stdin->_IO_read_end),
                             0L);
  {
  fprintf(_coverage_fout, "202\n");
  fflush(_coverage_fout);
  }
  if (tmp___3) {
    {
    fprintf(_coverage_fout, "203\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __uflow(stdin);
    {
    fprintf(_coverage_fout, "204\n");
    fflush(_coverage_fout);
    }
    tmp___2 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "205\n");
    fflush(_coverage_fout);
    }
    tmp___1 = stdin->_IO_read_ptr;
    {
    fprintf(_coverage_fout, "206\n");
    fflush(_coverage_fout);
    }
    (stdin->_IO_read_ptr) ++;
    {
    fprintf(_coverage_fout, "207\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (int )*((unsigned char *)tmp___1);
  }
  {
  fprintf(_coverage_fout, "208\n");
  fflush(_coverage_fout);
  }
  return (tmp___2);
}
}
__inline extern int putchar(int __c ) 
{ 
  int tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "209\n");
  fflush(_coverage_fout);
  }
  tmp = _IO_putc(__c, stdout);
  {
  fprintf(_coverage_fout, "210\n");
  fflush(_coverage_fout);
  }
  return (tmp);
}
}
__inline extern int fputc_unlocked(int __c , FILE *__stream ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "211\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned long )__stream->_IO_write_ptr >= (unsigned long )__stream->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "212\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "213\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    {
    fprintf(_coverage_fout, "214\n");
    fflush(_coverage_fout);
    }
    tmp___3 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "215\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __stream->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "216\n");
    fflush(_coverage_fout);
    }
    (__stream->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "217\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (char )__c;
    {
    fprintf(_coverage_fout, "218\n");
    fflush(_coverage_fout);
    }
    *tmp___1 = tmp___2;
    {
    fprintf(_coverage_fout, "219\n");
    fflush(_coverage_fout);
    }
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  {
  fprintf(_coverage_fout, "220\n");
  fflush(_coverage_fout);
  }
  return (tmp___3);
}
}
__inline extern int putc_unlocked(int __c , FILE *__stream ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "221\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned long )__stream->_IO_write_ptr >= (unsigned long )__stream->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "222\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "223\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __overflow(__stream, (int )((unsigned char )__c));
    {
    fprintf(_coverage_fout, "224\n");
    fflush(_coverage_fout);
    }
    tmp___3 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "225\n");
    fflush(_coverage_fout);
    }
    tmp___1 = __stream->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "226\n");
    fflush(_coverage_fout);
    }
    (__stream->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "227\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (char )__c;
    {
    fprintf(_coverage_fout, "228\n");
    fflush(_coverage_fout);
    }
    *tmp___1 = tmp___2;
    {
    fprintf(_coverage_fout, "229\n");
    fflush(_coverage_fout);
    }
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  {
  fprintf(_coverage_fout, "230\n");
  fflush(_coverage_fout);
  }
  return (tmp___3);
}
}
__inline extern int putchar_unlocked(int __c ) 
{ 
  long tmp ;
  int tmp___0 ;
  char *tmp___1 ;
  char tmp___2 ;
  int tmp___3 ;
  long tmp___4 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "231\n");
  fflush(_coverage_fout);
  }
  tmp___4 = __builtin_expect((long )((unsigned long )stdout->_IO_write_ptr >= (unsigned long )stdout->_IO_write_end),
                             0L);
  {
  fprintf(_coverage_fout, "232\n");
  fflush(_coverage_fout);
  }
  if (tmp___4) {
    {
    fprintf(_coverage_fout, "233\n");
    fflush(_coverage_fout);
    }
    tmp___0 = __overflow(stdout, (int )((unsigned char )__c));
    {
    fprintf(_coverage_fout, "234\n");
    fflush(_coverage_fout);
    }
    tmp___3 = tmp___0;
  } else {
    {
    fprintf(_coverage_fout, "235\n");
    fflush(_coverage_fout);
    }
    tmp___1 = stdout->_IO_write_ptr;
    {
    fprintf(_coverage_fout, "236\n");
    fflush(_coverage_fout);
    }
    (stdout->_IO_write_ptr) ++;
    {
    fprintf(_coverage_fout, "237\n");
    fflush(_coverage_fout);
    }
    tmp___2 = (char )__c;
    {
    fprintf(_coverage_fout, "238\n");
    fflush(_coverage_fout);
    }
    *tmp___1 = tmp___2;
    {
    fprintf(_coverage_fout, "239\n");
    fflush(_coverage_fout);
    }
    tmp___3 = (int )((unsigned char )tmp___2);
  }
  {
  fprintf(_coverage_fout, "240\n");
  fflush(_coverage_fout);
  }
  return (tmp___3);
}
}
__inline extern  __attribute__((__nothrow__)) int feof_unlocked(FILE *__stream ) ;
__inline extern int feof_unlocked(FILE *__stream ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "241\n");
  fflush(_coverage_fout);
  }
  return ((__stream->_flags & 16) != 0);
}
}
__inline extern  __attribute__((__nothrow__)) int ferror_unlocked(FILE *__stream ) ;
__inline extern int ferror_unlocked(FILE *__stream ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "242\n");
  fflush(_coverage_fout);
  }
  return ((__stream->_flags & 32) != 0);
}
}
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
extern void _TIFFmemcpy(tdata_t  , tdata_t const    , tsize_t  ) ;
extern int _TIFFmemcmp(tdata_t const    , tdata_t const    , tsize_t  ) ;
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
static char const   module[16]  = 
  {      (char const   )' ',      (char const   )'L',      (char const   )'Z',      (char const   )'W', 
        (char const   )'S',      (char const   )'e',      (char const   )'t',      (char const   )'u', 
        (char const   )'p',      (char const   )'D',      (char const   )'e',      (char const   )'c', 
        (char const   )'o',      (char const   )'d',      (char const   )'e',      (char const   )'\000'};
static int LZWSetupDecode(TIFF *tif ) 
{ 
  LZWCodecState *sp ;
  int code ;
  tdata_t tmp ;
  tdata_t tmp___0 ;
  int tmp___1 ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "243\n");
  fflush(_coverage_fout);
  }
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  {
  fprintf(_coverage_fout, "244\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )sp == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "245\n");
    fflush(_coverage_fout);
    }
    tmp = _TIFFmalloc((tsize_t )sizeof(LZWCodecState ));
    {
    fprintf(_coverage_fout, "246\n");
    fflush(_coverage_fout);
    }
    tif->tif_data = (tidata_t )tmp;
    {
    fprintf(_coverage_fout, "247\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )tif->tif_data == (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "248\n");
      fflush(_coverage_fout);
      }
      TIFFErrorExt(tif->tif_clientdata, "LZWPreDecode",
                   "No space for LZW state block");
      {
      fprintf(_coverage_fout, "249\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "250\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "251\n");
    fflush(_coverage_fout);
    }
    ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab = (code_t *)((void *)0);
    {
    fprintf(_coverage_fout, "252\n");
    fflush(_coverage_fout);
    }
    ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_decode = (int (*)(TIFF * ,
                                                                              tidata_t  ,
                                                                              tsize_t  ,
                                                                              tsample_t  ))((void *)0);
    {
    fprintf(_coverage_fout, "253\n");
    fflush(_coverage_fout);
    }
    TIFFPredictorInit(tif);
    {
    fprintf(_coverage_fout, "254\n");
    fflush(_coverage_fout);
    }
    sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  } else {
    {
    fprintf(_coverage_fout, "255\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "256\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )sp != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "257\n");
    fflush(_coverage_fout);
    }

  } else {
    {
    fprintf(_coverage_fout, "258\n");
    fflush(_coverage_fout);
    }
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 222U, "LZWSetupDecode");
  }
  {
  fprintf(_coverage_fout, "259\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )sp->dec_codetab == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "260\n");
    fflush(_coverage_fout);
    }
    tmp___0 = _TIFFmalloc((tsize_t )((unsigned long )(((1L << 12) - 1L) + 1024L) * sizeof(code_t )));
    {
    fprintf(_coverage_fout, "261\n");
    fflush(_coverage_fout);
    }
    sp->dec_codetab = (code_t *)tmp___0;
    {
    fprintf(_coverage_fout, "262\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )sp->dec_codetab == (unsigned long )((void *)0)) {
      {
      fprintf(_coverage_fout, "263\n");
      fflush(_coverage_fout);
      }
      TIFFErrorExt(tif->tif_clientdata, module, "No space for LZW code table");
      {
      fprintf(_coverage_fout, "264\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "265\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "266\n");
    fflush(_coverage_fout);
    }
    code = 255;
    {
    fprintf(_coverage_fout, "267\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "268\n");
      fflush(_coverage_fout);
      }
      (sp->dec_codetab + code)->value = (unsigned char )code;
      {
      fprintf(_coverage_fout, "269\n");
      fflush(_coverage_fout);
      }
      (sp->dec_codetab + code)->firstchar = (unsigned char )code;
      {
      fprintf(_coverage_fout, "270\n");
      fflush(_coverage_fout);
      }
      (sp->dec_codetab + code)->length = (unsigned short)1;
      {
      fprintf(_coverage_fout, "271\n");
      fflush(_coverage_fout);
      }
      (sp->dec_codetab + code)->next = (struct code_ent *)((void *)0);
      {
      fprintf(_coverage_fout, "272\n");
      fflush(_coverage_fout);
      }
      tmp___1 = code;
      {
      fprintf(_coverage_fout, "273\n");
      fflush(_coverage_fout);
      }
      code --;
      {
      fprintf(_coverage_fout, "274\n");
      fflush(_coverage_fout);
      }
      if (tmp___1) {
        {
        fprintf(_coverage_fout, "275\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "276\n");
        fflush(_coverage_fout);
        }
        break;
      }
    }
  } else {
    {
    fprintf(_coverage_fout, "277\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "278\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
static int LZWPreDecode(TIFF *tif , tsample_t s ) 
{ 
  LZWCodecState *sp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "279\n");
  fflush(_coverage_fout);
  }
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  {
  fprintf(_coverage_fout, "280\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )sp != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "281\n");
    fflush(_coverage_fout);
    }

  } else {
    {
    fprintf(_coverage_fout, "282\n");
    fflush(_coverage_fout);
    }
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 253U, "LZWPreDecode");
  }
  {
  fprintf(_coverage_fout, "283\n");
  fflush(_coverage_fout);
  }
  if ((int )*(tif->tif_rawdata + 0) == 0) {
    {
    fprintf(_coverage_fout, "284\n");
    fflush(_coverage_fout);
    }
    if ((int )*(tif->tif_rawdata + 1) & 1) {
      {
      fprintf(_coverage_fout, "285\n");
      fflush(_coverage_fout);
      }
      if (! sp->dec_decode) {
        {
        fprintf(_coverage_fout, "286\n");
        fflush(_coverage_fout);
        }
        TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                       "Old-style LZW codes, convert file");
        {
        fprintf(_coverage_fout, "287\n");
        fflush(_coverage_fout);
        }
        tif->tif_decoderow = & LZWDecodeCompat;
        {
        fprintf(_coverage_fout, "288\n");
        fflush(_coverage_fout);
        }
        tif->tif_decodestrip = & LZWDecodeCompat;
        {
        fprintf(_coverage_fout, "289\n");
        fflush(_coverage_fout);
        }
        tif->tif_decodetile = & LZWDecodeCompat;
        {
        fprintf(_coverage_fout, "290\n");
        fflush(_coverage_fout);
        }
        (*(tif->tif_setupdecode))(tif);
        {
        fprintf(_coverage_fout, "291\n");
        fflush(_coverage_fout);
        }
        sp->dec_decode = & LZWDecodeCompat;
      } else {
        {
        fprintf(_coverage_fout, "292\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "293\n");
      fflush(_coverage_fout);
      }
      sp->base.maxcode = (unsigned short )((1L << 9) - 1L);
    } else {
      {
      fprintf(_coverage_fout, "294\n");
      fflush(_coverage_fout);
      }
      sp->base.maxcode = (unsigned short )(((1L << 9) - 1L) - 1L);
      {
      fprintf(_coverage_fout, "295\n");
      fflush(_coverage_fout);
      }
      sp->dec_decode = & LZWDecode;
    }
  } else {
    {
    fprintf(_coverage_fout, "296\n");
    fflush(_coverage_fout);
    }
    sp->base.maxcode = (unsigned short )(((1L << 9) - 1L) - 1L);
    {
    fprintf(_coverage_fout, "297\n");
    fflush(_coverage_fout);
    }
    sp->dec_decode = & LZWDecode;
  }
  {
  fprintf(_coverage_fout, "298\n");
  fflush(_coverage_fout);
  }
  sp->base.nbits = (unsigned short)9;
  {
  fprintf(_coverage_fout, "299\n");
  fflush(_coverage_fout);
  }
  sp->base.nextbits = 0L;
  {
  fprintf(_coverage_fout, "300\n");
  fflush(_coverage_fout);
  }
  sp->base.nextdata = 0L;
  {
  fprintf(_coverage_fout, "301\n");
  fflush(_coverage_fout);
  }
  sp->dec_restart = 0L;
  {
  fprintf(_coverage_fout, "302\n");
  fflush(_coverage_fout);
  }
  sp->dec_nbitsmask = (1L << 9) - 1L;
  {
  fprintf(_coverage_fout, "303\n");
  fflush(_coverage_fout);
  }
  sp->dec_bitsleft = (long )(tif->tif_rawcc << 3);
  {
  fprintf(_coverage_fout, "304\n");
  fflush(_coverage_fout);
  }
  sp->dec_free_entp = sp->dec_codetab + 258;
  {
  fprintf(_coverage_fout, "305\n");
  fflush(_coverage_fout);
  }
  _TIFFmemset((tdata_t )sp->dec_free_entp, 0,
              (tsize_t )((unsigned long )((((1L << 12) - 1L) + 1024L) - 258L) * sizeof(code_t )));
  {
  fprintf(_coverage_fout, "306\n");
  fflush(_coverage_fout);
  }
  sp->dec_oldcodep = sp->dec_codetab + -1;
  {
  fprintf(_coverage_fout, "307\n");
  fflush(_coverage_fout);
  }
  sp->dec_maxcodep = sp->dec_codetab + (sp->dec_nbitsmask - 1L);
  {
  fprintf(_coverage_fout, "308\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
static void codeLoop(TIFF *tif ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "309\n");
  fflush(_coverage_fout);
  }
  TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
               "LZWDecode: Bogus encoding, loop in the code table; scanline %d",
               tif->tif_row);
  {
  fprintf(_coverage_fout, "310\n");
  fflush(_coverage_fout);
  }
  return;
}
}
static int LZWDecode(TIFF *tif , tidata_t op0 , tsize_t occ0 , tsample_t s ) 
{ 
  LZWCodecState *sp ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "311\n");
  fflush(_coverage_fout);
  }
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  {
  fprintf(_coverage_fout, "312\n");
  fflush(_coverage_fout);
  }
  op = (char *)op0;
  {
  fprintf(_coverage_fout, "313\n");
  fflush(_coverage_fout);
  }
  occ = (long )occ0;
  {
  fprintf(_coverage_fout, "314\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )sp != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "315\n");
    fflush(_coverage_fout);
    }

  } else {
    {
    fprintf(_coverage_fout, "316\n");
    fflush(_coverage_fout);
    }
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 352U, "LZWDecode");
  }
  {
  fprintf(_coverage_fout, "317\n");
  fflush(_coverage_fout);
  }
  if (sp->dec_restart) {
    {
    fprintf(_coverage_fout, "318\n");
    fflush(_coverage_fout);
    }
    codep = sp->dec_codep;
    {
    fprintf(_coverage_fout, "319\n");
    fflush(_coverage_fout);
    }
    residue = (long )codep->length - sp->dec_restart;
    {
    fprintf(_coverage_fout, "320\n");
    fflush(_coverage_fout);
    }
    if (residue > occ) {
      {
      fprintf(_coverage_fout, "321\n");
      fflush(_coverage_fout);
      }
      sp->dec_restart += occ;
      {
      fprintf(_coverage_fout, "322\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "323\n");
        fflush(_coverage_fout);
        }
        codep = codep->next;
        {
        fprintf(_coverage_fout, "324\n");
        fflush(_coverage_fout);
        }
        residue --;
        {
        fprintf(_coverage_fout, "325\n");
        fflush(_coverage_fout);
        }
        if (residue > occ) {
          {
          fprintf(_coverage_fout, "326\n");
          fflush(_coverage_fout);
          }
          if (codep) {
            {
            fprintf(_coverage_fout, "327\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "328\n");
            fflush(_coverage_fout);
            }
            break;
          }
        } else {
          {
          fprintf(_coverage_fout, "329\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
      {
      fprintf(_coverage_fout, "330\n");
      fflush(_coverage_fout);
      }
      if (codep) {
        {
        fprintf(_coverage_fout, "331\n");
        fflush(_coverage_fout);
        }
        tp = op + occ;
        {
        fprintf(_coverage_fout, "332\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "333\n");
          fflush(_coverage_fout);
          }
          tp --;
          {
          fprintf(_coverage_fout, "334\n");
          fflush(_coverage_fout);
          }
          *tp = (char )codep->value;
          {
          fprintf(_coverage_fout, "335\n");
          fflush(_coverage_fout);
          }
          codep = codep->next;
          {
          fprintf(_coverage_fout, "336\n");
          fflush(_coverage_fout);
          }
          occ --;
          {
          fprintf(_coverage_fout, "337\n");
          fflush(_coverage_fout);
          }
          if (occ) {
            {
            fprintf(_coverage_fout, "338\n");
            fflush(_coverage_fout);
            }
            if (codep) {
              {
              fprintf(_coverage_fout, "339\n");
              fflush(_coverage_fout);
              }

            } else {
              {
              fprintf(_coverage_fout, "340\n");
              fflush(_coverage_fout);
              }
              break;
            }
          } else {
            {
            fprintf(_coverage_fout, "341\n");
            fflush(_coverage_fout);
            }
            break;
          }
        }
      } else {
        {
        fprintf(_coverage_fout, "342\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "343\n");
      fflush(_coverage_fout);
      }
      return (1);
    } else {
      {
      fprintf(_coverage_fout, "344\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "345\n");
    fflush(_coverage_fout);
    }
    op += residue;
    {
    fprintf(_coverage_fout, "346\n");
    fflush(_coverage_fout);
    }
    occ -= residue;
    {
    fprintf(_coverage_fout, "347\n");
    fflush(_coverage_fout);
    }
    tp = op;
    {
    fprintf(_coverage_fout, "348\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "349\n");
      fflush(_coverage_fout);
      }
      tp --;
      {
      fprintf(_coverage_fout, "350\n");
      fflush(_coverage_fout);
      }
      t = (int )codep->value;
      {
      fprintf(_coverage_fout, "351\n");
      fflush(_coverage_fout);
      }
      codep = codep->next;
      {
      fprintf(_coverage_fout, "352\n");
      fflush(_coverage_fout);
      }
      *tp = (char )t;
      {
      fprintf(_coverage_fout, "353\n");
      fflush(_coverage_fout);
      }
      residue --;
      {
      fprintf(_coverage_fout, "354\n");
      fflush(_coverage_fout);
      }
      if (residue) {
        {
        fprintf(_coverage_fout, "355\n");
        fflush(_coverage_fout);
        }
        if (codep) {
          {
          fprintf(_coverage_fout, "356\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "357\n");
          fflush(_coverage_fout);
          }
          break;
        }
      } else {
        {
        fprintf(_coverage_fout, "358\n");
        fflush(_coverage_fout);
        }
        break;
      }
    }
    {
    fprintf(_coverage_fout, "359\n");
    fflush(_coverage_fout);
    }
    sp->dec_restart = 0L;
  } else {
    {
    fprintf(_coverage_fout, "360\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "361\n");
  fflush(_coverage_fout);
  }
  bp = tif->tif_rawcp;
  {
  fprintf(_coverage_fout, "362\n");
  fflush(_coverage_fout);
  }
  nbits = (long )sp->base.nbits;
  {
  fprintf(_coverage_fout, "363\n");
  fflush(_coverage_fout);
  }
  nextdata = sp->base.nextdata;
  {
  fprintf(_coverage_fout, "364\n");
  fflush(_coverage_fout);
  }
  nextbits = sp->base.nextbits;
  {
  fprintf(_coverage_fout, "365\n");
  fflush(_coverage_fout);
  }
  nbitsmask = sp->dec_nbitsmask;
  {
  fprintf(_coverage_fout, "366\n");
  fflush(_coverage_fout);
  }
  oldcodep = sp->dec_oldcodep;
  {
  fprintf(_coverage_fout, "367\n");
  fflush(_coverage_fout);
  }
  free_entp = sp->dec_free_entp;
  {
  fprintf(_coverage_fout, "368\n");
  fflush(_coverage_fout);
  }
  maxcodep = sp->dec_maxcodep;
  {
  fprintf(_coverage_fout, "369\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "370\n");
    fflush(_coverage_fout);
    }
    if (occ > 0L) {
      {
      fprintf(_coverage_fout, "371\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "372\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "373\n");
    fflush(_coverage_fout);
    }
    if (sp->dec_bitsleft < nbits) {
      {
      fprintf(_coverage_fout, "374\n");
      fflush(_coverage_fout);
      }
      TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Strip %d not terminated with EOI code",
                     tif->tif_curstrip);
      {
      fprintf(_coverage_fout, "375\n");
      fflush(_coverage_fout);
      }
      code = (hcode_t )257;
    } else {
      {
      fprintf(_coverage_fout, "376\n");
      fflush(_coverage_fout);
      }
      tmp = bp;
      {
      fprintf(_coverage_fout, "377\n");
      fflush(_coverage_fout);
      }
      bp ++;
      {
      fprintf(_coverage_fout, "378\n");
      fflush(_coverage_fout);
      }
      nextdata = (nextdata << 8) | (long )*tmp;
      {
      fprintf(_coverage_fout, "379\n");
      fflush(_coverage_fout);
      }
      nextbits += 8L;
      {
      fprintf(_coverage_fout, "380\n");
      fflush(_coverage_fout);
      }
      if (nextbits < nbits) {
        {
        fprintf(_coverage_fout, "381\n");
        fflush(_coverage_fout);
        }
        tmp___0 = bp;
        {
        fprintf(_coverage_fout, "382\n");
        fflush(_coverage_fout);
        }
        bp ++;
        {
        fprintf(_coverage_fout, "383\n");
        fflush(_coverage_fout);
        }
        nextdata = (nextdata << 8) | (long )*tmp___0;
        {
        fprintf(_coverage_fout, "384\n");
        fflush(_coverage_fout);
        }
        nextbits += 8L;
      } else {
        {
        fprintf(_coverage_fout, "385\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "386\n");
      fflush(_coverage_fout);
      }
      code = (hcode_t )((nextdata >> (nextbits - nbits)) & nbitsmask);
      {
      fprintf(_coverage_fout, "387\n");
      fflush(_coverage_fout);
      }
      nextbits -= nbits;
      {
      fprintf(_coverage_fout, "388\n");
      fflush(_coverage_fout);
      }
      sp->dec_bitsleft -= nbits;
    }
    {
    fprintf(_coverage_fout, "389\n");
    fflush(_coverage_fout);
    }
    if ((int )code == 257) {
      {
      fprintf(_coverage_fout, "390\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "391\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "392\n");
    fflush(_coverage_fout);
    }
    if ((int )code == 256) {
      {
      fprintf(_coverage_fout, "393\n");
      fflush(_coverage_fout);
      }
      free_entp = sp->dec_codetab + 258;
      {
      fprintf(_coverage_fout, "394\n");
      fflush(_coverage_fout);
      }
      nbits = 9L;
      {
      fprintf(_coverage_fout, "395\n");
      fflush(_coverage_fout);
      }
      nbitsmask = (1L << 9) - 1L;
      {
      fprintf(_coverage_fout, "396\n");
      fflush(_coverage_fout);
      }
      maxcodep = (sp->dec_codetab + nbitsmask) - 1;
      {
      fprintf(_coverage_fout, "397\n");
      fflush(_coverage_fout);
      }
      if (sp->dec_bitsleft < nbits) {
        {
        fprintf(_coverage_fout, "398\n");
        fflush(_coverage_fout);
        }
        TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                       "LZWDecode: Strip %d not terminated with EOI code",
                       tif->tif_curstrip);
        {
        fprintf(_coverage_fout, "399\n");
        fflush(_coverage_fout);
        }
        code = (hcode_t )257;
      } else {
        {
        fprintf(_coverage_fout, "400\n");
        fflush(_coverage_fout);
        }
        tmp___1 = bp;
        {
        fprintf(_coverage_fout, "401\n");
        fflush(_coverage_fout);
        }
        bp ++;
        {
        fprintf(_coverage_fout, "402\n");
        fflush(_coverage_fout);
        }
        nextdata = (nextdata << 8) | (long )*tmp___1;
        {
        fprintf(_coverage_fout, "403\n");
        fflush(_coverage_fout);
        }
        nextbits += 8L;
        {
        fprintf(_coverage_fout, "404\n");
        fflush(_coverage_fout);
        }
        if (nextbits < nbits) {
          {
          fprintf(_coverage_fout, "405\n");
          fflush(_coverage_fout);
          }
          tmp___2 = bp;
          {
          fprintf(_coverage_fout, "406\n");
          fflush(_coverage_fout);
          }
          bp ++;
          {
          fprintf(_coverage_fout, "407\n");
          fflush(_coverage_fout);
          }
          nextdata = (nextdata << 8) | (long )*tmp___2;
          {
          fprintf(_coverage_fout, "408\n");
          fflush(_coverage_fout);
          }
          nextbits += 8L;
        } else {
          {
          fprintf(_coverage_fout, "409\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "410\n");
        fflush(_coverage_fout);
        }
        code = (hcode_t )((nextdata >> (nextbits - nbits)) & nbitsmask);
        {
        fprintf(_coverage_fout, "411\n");
        fflush(_coverage_fout);
        }
        nextbits -= nbits;
        {
        fprintf(_coverage_fout, "412\n");
        fflush(_coverage_fout);
        }
        sp->dec_bitsleft -= nbits;
      }
      {
      fprintf(_coverage_fout, "413\n");
      fflush(_coverage_fout);
      }
      if ((int )code == 257) {
        {
        fprintf(_coverage_fout, "414\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "415\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "416\n");
      fflush(_coverage_fout);
      }
      tmp___3 = op;
      {
      fprintf(_coverage_fout, "417\n");
      fflush(_coverage_fout);
      }
      op ++;
      {
      fprintf(_coverage_fout, "418\n");
      fflush(_coverage_fout);
      }
      *tmp___3 = (char )code;
      {
      fprintf(_coverage_fout, "419\n");
      fflush(_coverage_fout);
      }
      occ --;
      {
      fprintf(_coverage_fout, "420\n");
      fflush(_coverage_fout);
      }
      oldcodep = sp->dec_codetab + (int )code;
      {
      fprintf(_coverage_fout, "421\n");
      fflush(_coverage_fout);
      }
      continue;
    } else {
      {
      fprintf(_coverage_fout, "422\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "423\n");
    fflush(_coverage_fout);
    }
    codep = sp->dec_codetab + (int )code;
    {
    fprintf(_coverage_fout, "424\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )free_entp < (unsigned long )(sp->dec_codetab + 0)) {
      {
      fprintf(_coverage_fout, "425\n");
      fflush(_coverage_fout);
      }
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecode: Corrupted LZW table at scanline %d", tif->tif_row);
      {
      fprintf(_coverage_fout, "426\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "427\n");
      fflush(_coverage_fout);
      }
      if ((unsigned long )free_entp >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        {
        fprintf(_coverage_fout, "428\n");
        fflush(_coverage_fout);
        }
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        {
        fprintf(_coverage_fout, "429\n");
        fflush(_coverage_fout);
        }
        return (0);
      } else {
        {
        fprintf(_coverage_fout, "430\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "431\n");
    fflush(_coverage_fout);
    }
    free_entp->next = oldcodep;
    {
    fprintf(_coverage_fout, "432\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )free_entp->next < (unsigned long )(sp->dec_codetab + 0)) {
      {
      fprintf(_coverage_fout, "433\n");
      fflush(_coverage_fout);
      }
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecode: Corrupted LZW table at scanline %d", tif->tif_row);
      {
      fprintf(_coverage_fout, "434\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "435\n");
      fflush(_coverage_fout);
      }
      if ((unsigned long )free_entp->next >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        {
        fprintf(_coverage_fout, "436\n");
        fflush(_coverage_fout);
        }
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        {
        fprintf(_coverage_fout, "437\n");
        fflush(_coverage_fout);
        }
        return (0);
      } else {
        {
        fprintf(_coverage_fout, "438\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "439\n");
    fflush(_coverage_fout);
    }
    free_entp->firstchar = (free_entp->next)->firstchar;
    {
    fprintf(_coverage_fout, "440\n");
    fflush(_coverage_fout);
    }
    free_entp->length = (unsigned short )((int )(free_entp->next)->length + 1);
    {
    fprintf(_coverage_fout, "441\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )codep < (unsigned long )free_entp) {
      {
      fprintf(_coverage_fout, "442\n");
      fflush(_coverage_fout);
      }
      free_entp->value = codep->firstchar;
    } else {
      {
      fprintf(_coverage_fout, "443\n");
      fflush(_coverage_fout);
      }
      free_entp->value = free_entp->firstchar;
    }
    {
    fprintf(_coverage_fout, "444\n");
    fflush(_coverage_fout);
    }
    free_entp ++;
    {
    fprintf(_coverage_fout, "445\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )free_entp > (unsigned long )maxcodep) {
      {
      fprintf(_coverage_fout, "446\n");
      fflush(_coverage_fout);
      }
      nbits ++;
      {
      fprintf(_coverage_fout, "447\n");
      fflush(_coverage_fout);
      }
      if (nbits > 12L) {
        {
        fprintf(_coverage_fout, "448\n");
        fflush(_coverage_fout);
        }
        nbits = 12L;
      } else {
        {
        fprintf(_coverage_fout, "449\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "450\n");
      fflush(_coverage_fout);
      }
      nbitsmask = (1L << nbits) - 1L;
      {
      fprintf(_coverage_fout, "451\n");
      fflush(_coverage_fout);
      }
      maxcodep = (sp->dec_codetab + nbitsmask) - 1;
    } else {
      {
      fprintf(_coverage_fout, "452\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "453\n");
    fflush(_coverage_fout);
    }
    oldcodep = codep;
    {
    fprintf(_coverage_fout, "454\n");
    fflush(_coverage_fout);
    }
    if ((int )code >= 256) {
      {
      fprintf(_coverage_fout, "455\n");
      fflush(_coverage_fout);
      }
      if ((int )codep->length == 0) {
        {
        fprintf(_coverage_fout, "456\n");
        fflush(_coverage_fout);
        }
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Wrong length of decoded string: data probably corrupted at scanline %d",
                     tif->tif_row);
        {
        fprintf(_coverage_fout, "457\n");
        fflush(_coverage_fout);
        }
        return (0);
      } else {
        {
        fprintf(_coverage_fout, "458\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "459\n");
      fflush(_coverage_fout);
      }
      if ((long )codep->length > occ) {
        {
        fprintf(_coverage_fout, "460\n");
        fflush(_coverage_fout);
        }
        sp->dec_codep = codep;
        {
        fprintf(_coverage_fout, "461\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "462\n");
          fflush(_coverage_fout);
          }
          codep = codep->next;
          {
          fprintf(_coverage_fout, "463\n");
          fflush(_coverage_fout);
          }
          if (codep) {
            {
            fprintf(_coverage_fout, "464\n");
            fflush(_coverage_fout);
            }
            if ((long )codep->length > occ) {
              {
              fprintf(_coverage_fout, "465\n");
              fflush(_coverage_fout);
              }

            } else {
              {
              fprintf(_coverage_fout, "466\n");
              fflush(_coverage_fout);
              }
              break;
            }
          } else {
            {
            fprintf(_coverage_fout, "467\n");
            fflush(_coverage_fout);
            }
            break;
          }
        }
        {
        fprintf(_coverage_fout, "468\n");
        fflush(_coverage_fout);
        }
        if (codep) {
          {
          fprintf(_coverage_fout, "469\n");
          fflush(_coverage_fout);
          }
          sp->dec_restart = occ;
          {
          fprintf(_coverage_fout, "470\n");
          fflush(_coverage_fout);
          }
          tp = op + occ;
          {
          fprintf(_coverage_fout, "471\n");
          fflush(_coverage_fout);
          }
          while (1) {
            {
            fprintf(_coverage_fout, "472\n");
            fflush(_coverage_fout);
            }
            tp --;
            {
            fprintf(_coverage_fout, "473\n");
            fflush(_coverage_fout);
            }
            *tp = (char )codep->value;
            {
            fprintf(_coverage_fout, "474\n");
            fflush(_coverage_fout);
            }
            codep = codep->next;
            {
            fprintf(_coverage_fout, "475\n");
            fflush(_coverage_fout);
            }
            occ --;
            {
            fprintf(_coverage_fout, "476\n");
            fflush(_coverage_fout);
            }
            if (occ) {
              {
              fprintf(_coverage_fout, "477\n");
              fflush(_coverage_fout);
              }
              if (codep) {
                {
                fprintf(_coverage_fout, "478\n");
                fflush(_coverage_fout);
                }

              } else {
                {
                fprintf(_coverage_fout, "479\n");
                fflush(_coverage_fout);
                }
                break;
              }
            } else {
              {
              fprintf(_coverage_fout, "480\n");
              fflush(_coverage_fout);
              }
              break;
            }
          }
          {
          fprintf(_coverage_fout, "481\n");
          fflush(_coverage_fout);
          }
          if (codep) {
            {
            fprintf(_coverage_fout, "482\n");
            fflush(_coverage_fout);
            }
            codeLoop(tif);
          } else {
            {
            fprintf(_coverage_fout, "483\n");
            fflush(_coverage_fout);
            }

          }
        } else {
          {
          fprintf(_coverage_fout, "484\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "485\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "486\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "487\n");
      fflush(_coverage_fout);
      }
      len = (int )codep->length;
      {
      fprintf(_coverage_fout, "488\n");
      fflush(_coverage_fout);
      }
      tp = op + len;
      {
      fprintf(_coverage_fout, "489\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "490\n");
        fflush(_coverage_fout);
        }
        tp --;
        {
        fprintf(_coverage_fout, "491\n");
        fflush(_coverage_fout);
        }
        t___0 = (int )codep->value;
        {
        fprintf(_coverage_fout, "492\n");
        fflush(_coverage_fout);
        }
        codep = codep->next;
        {
        fprintf(_coverage_fout, "493\n");
        fflush(_coverage_fout);
        }
        *tp = (char )t___0;
        {
        fprintf(_coverage_fout, "494\n");
        fflush(_coverage_fout);
        }
        if (codep) {
          {
          fprintf(_coverage_fout, "495\n");
          fflush(_coverage_fout);
          }
          if ((unsigned long )tp > (unsigned long )op) {
            {
            fprintf(_coverage_fout, "496\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "497\n");
            fflush(_coverage_fout);
            }
            break;
          }
        } else {
          {
          fprintf(_coverage_fout, "498\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
      {
      fprintf(_coverage_fout, "499\n");
      fflush(_coverage_fout);
      }
      if (codep) {
        {
        fprintf(_coverage_fout, "500\n");
        fflush(_coverage_fout);
        }
        codeLoop(tif);
        {
        fprintf(_coverage_fout, "501\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "502\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "503\n");
      fflush(_coverage_fout);
      }
      op += len;
      {
      fprintf(_coverage_fout, "504\n");
      fflush(_coverage_fout);
      }
      occ -= (long )len;
    } else {
      {
      fprintf(_coverage_fout, "505\n");
      fflush(_coverage_fout);
      }
      tmp___4 = op;
      {
      fprintf(_coverage_fout, "506\n");
      fflush(_coverage_fout);
      }
      op ++;
      {
      fprintf(_coverage_fout, "507\n");
      fflush(_coverage_fout);
      }
      *tmp___4 = (char )code;
      {
      fprintf(_coverage_fout, "508\n");
      fflush(_coverage_fout);
      }
      occ --;
    }
  }
  {
  fprintf(_coverage_fout, "509\n");
  fflush(_coverage_fout);
  }
  tif->tif_rawcp = bp;
  {
  fprintf(_coverage_fout, "510\n");
  fflush(_coverage_fout);
  }
  sp->base.nbits = (unsigned short )nbits;
  {
  fprintf(_coverage_fout, "511\n");
  fflush(_coverage_fout);
  }
  sp->base.nextdata = nextdata;
  {
  fprintf(_coverage_fout, "512\n");
  fflush(_coverage_fout);
  }
  sp->base.nextbits = nextbits;
  {
  fprintf(_coverage_fout, "513\n");
  fflush(_coverage_fout);
  }
  sp->dec_nbitsmask = nbitsmask;
  {
  fprintf(_coverage_fout, "514\n");
  fflush(_coverage_fout);
  }
  sp->dec_oldcodep = oldcodep;
  {
  fprintf(_coverage_fout, "515\n");
  fflush(_coverage_fout);
  }
  sp->dec_free_entp = free_entp;
  {
  fprintf(_coverage_fout, "516\n");
  fflush(_coverage_fout);
  }
  sp->dec_maxcodep = maxcodep;
  {
  fprintf(_coverage_fout, "517\n");
  fflush(_coverage_fout);
  }
  if (occ > 0L) {
    {
    fprintf(_coverage_fout, "518\n");
    fflush(_coverage_fout);
    }
    TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                 "LZWDecode: Not enough data at scanline %d (short %d bytes)",
                 tif->tif_row, occ);
    {
    fprintf(_coverage_fout, "519\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "520\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "521\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
static int LZWDecodeCompat(TIFF *tif , tidata_t op0 , tsize_t occ0 ,
                           tsample_t s ) 
{ 
  LZWCodecState *sp ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "522\n");
  fflush(_coverage_fout);
  }
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  {
  fprintf(_coverage_fout, "523\n");
  fflush(_coverage_fout);
  }
  op = (char *)op0;
  {
  fprintf(_coverage_fout, "524\n");
  fflush(_coverage_fout);
  }
  occ = (long )occ0;
  {
  fprintf(_coverage_fout, "525\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )sp != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "526\n");
    fflush(_coverage_fout);
    }

  } else {
    {
    fprintf(_coverage_fout, "527\n");
    fflush(_coverage_fout);
    }
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 553U, "LZWDecodeCompat");
  }
  {
  fprintf(_coverage_fout, "528\n");
  fflush(_coverage_fout);
  }
  if (sp->dec_restart) {
    {
    fprintf(_coverage_fout, "529\n");
    fflush(_coverage_fout);
    }
    codep = sp->dec_codep;
    {
    fprintf(_coverage_fout, "530\n");
    fflush(_coverage_fout);
    }
    residue = (long )codep->length - sp->dec_restart;
    {
    fprintf(_coverage_fout, "531\n");
    fflush(_coverage_fout);
    }
    if (residue > occ) {
      {
      fprintf(_coverage_fout, "532\n");
      fflush(_coverage_fout);
      }
      sp->dec_restart += occ;
      {
      fprintf(_coverage_fout, "533\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "534\n");
        fflush(_coverage_fout);
        }
        codep = codep->next;
        {
        fprintf(_coverage_fout, "535\n");
        fflush(_coverage_fout);
        }
        residue --;
        {
        fprintf(_coverage_fout, "536\n");
        fflush(_coverage_fout);
        }
        if (residue > occ) {
          {
          fprintf(_coverage_fout, "537\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "538\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
      {
      fprintf(_coverage_fout, "539\n");
      fflush(_coverage_fout);
      }
      tp = op + occ;
      {
      fprintf(_coverage_fout, "540\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "541\n");
        fflush(_coverage_fout);
        }
        tp --;
        {
        fprintf(_coverage_fout, "542\n");
        fflush(_coverage_fout);
        }
        *tp = (char )codep->value;
        {
        fprintf(_coverage_fout, "543\n");
        fflush(_coverage_fout);
        }
        codep = codep->next;
        {
        fprintf(_coverage_fout, "544\n");
        fflush(_coverage_fout);
        }
        occ --;
        {
        fprintf(_coverage_fout, "545\n");
        fflush(_coverage_fout);
        }
        if (occ) {
          {
          fprintf(_coverage_fout, "546\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "547\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
      {
      fprintf(_coverage_fout, "548\n");
      fflush(_coverage_fout);
      }
      return (1);
    } else {
      {
      fprintf(_coverage_fout, "549\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "550\n");
    fflush(_coverage_fout);
    }
    op += residue;
    {
    fprintf(_coverage_fout, "551\n");
    fflush(_coverage_fout);
    }
    occ -= residue;
    {
    fprintf(_coverage_fout, "552\n");
    fflush(_coverage_fout);
    }
    tp = op;
    {
    fprintf(_coverage_fout, "553\n");
    fflush(_coverage_fout);
    }
    while (1) {
      {
      fprintf(_coverage_fout, "554\n");
      fflush(_coverage_fout);
      }
      tp --;
      {
      fprintf(_coverage_fout, "555\n");
      fflush(_coverage_fout);
      }
      *tp = (char )codep->value;
      {
      fprintf(_coverage_fout, "556\n");
      fflush(_coverage_fout);
      }
      codep = codep->next;
      {
      fprintf(_coverage_fout, "557\n");
      fflush(_coverage_fout);
      }
      residue --;
      {
      fprintf(_coverage_fout, "558\n");
      fflush(_coverage_fout);
      }
      if (residue) {
        {
        fprintf(_coverage_fout, "559\n");
        fflush(_coverage_fout);
        }

      } else {
        {
        fprintf(_coverage_fout, "560\n");
        fflush(_coverage_fout);
        }
        break;
      }
    }
    {
    fprintf(_coverage_fout, "561\n");
    fflush(_coverage_fout);
    }
    sp->dec_restart = 0L;
  } else {
    {
    fprintf(_coverage_fout, "562\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "563\n");
  fflush(_coverage_fout);
  }
  bp = tif->tif_rawcp;
  {
  fprintf(_coverage_fout, "564\n");
  fflush(_coverage_fout);
  }
  nbits = (int )sp->base.nbits;
  {
  fprintf(_coverage_fout, "565\n");
  fflush(_coverage_fout);
  }
  nextdata = sp->base.nextdata;
  {
  fprintf(_coverage_fout, "566\n");
  fflush(_coverage_fout);
  }
  nextbits = sp->base.nextbits;
  {
  fprintf(_coverage_fout, "567\n");
  fflush(_coverage_fout);
  }
  nbitsmask = sp->dec_nbitsmask;
  {
  fprintf(_coverage_fout, "568\n");
  fflush(_coverage_fout);
  }
  oldcodep = sp->dec_oldcodep;
  {
  fprintf(_coverage_fout, "569\n");
  fflush(_coverage_fout);
  }
  free_entp = sp->dec_free_entp;
  {
  fprintf(_coverage_fout, "570\n");
  fflush(_coverage_fout);
  }
  maxcodep = sp->dec_maxcodep;
  {
  fprintf(_coverage_fout, "571\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "572\n");
    fflush(_coverage_fout);
    }
    if (occ > 0L) {
      {
      fprintf(_coverage_fout, "573\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "574\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "575\n");
    fflush(_coverage_fout);
    }
    if (sp->dec_bitsleft < (long )nbits) {
      {
      fprintf(_coverage_fout, "576\n");
      fflush(_coverage_fout);
      }
      TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecode: Strip %d not terminated with EOI code",
                     tif->tif_curstrip);
      {
      fprintf(_coverage_fout, "577\n");
      fflush(_coverage_fout);
      }
      code = 257;
    } else {
      {
      fprintf(_coverage_fout, "578\n");
      fflush(_coverage_fout);
      }
      tmp = bp;
      {
      fprintf(_coverage_fout, "579\n");
      fflush(_coverage_fout);
      }
      bp ++;
      {
      fprintf(_coverage_fout, "580\n");
      fflush(_coverage_fout);
      }
      nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp << nextbits));
      {
      fprintf(_coverage_fout, "581\n");
      fflush(_coverage_fout);
      }
      nextbits += 8L;
      {
      fprintf(_coverage_fout, "582\n");
      fflush(_coverage_fout);
      }
      if (nextbits < (long )nbits) {
        {
        fprintf(_coverage_fout, "583\n");
        fflush(_coverage_fout);
        }
        tmp___0 = bp;
        {
        fprintf(_coverage_fout, "584\n");
        fflush(_coverage_fout);
        }
        bp ++;
        {
        fprintf(_coverage_fout, "585\n");
        fflush(_coverage_fout);
        }
        nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp___0 << nextbits));
        {
        fprintf(_coverage_fout, "586\n");
        fflush(_coverage_fout);
        }
        nextbits += 8L;
      } else {
        {
        fprintf(_coverage_fout, "587\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "588\n");
      fflush(_coverage_fout);
      }
      code = (int )((hcode_t )(nextdata & nbitsmask));
      {
      fprintf(_coverage_fout, "589\n");
      fflush(_coverage_fout);
      }
      nextdata >>= nbits;
      {
      fprintf(_coverage_fout, "590\n");
      fflush(_coverage_fout);
      }
      nextbits -= (long )nbits;
      {
      fprintf(_coverage_fout, "591\n");
      fflush(_coverage_fout);
      }
      sp->dec_bitsleft -= (long )nbits;
    }
    {
    fprintf(_coverage_fout, "592\n");
    fflush(_coverage_fout);
    }
    if (code == 257) {
      {
      fprintf(_coverage_fout, "593\n");
      fflush(_coverage_fout);
      }
      break;
    } else {
      {
      fprintf(_coverage_fout, "594\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "595\n");
    fflush(_coverage_fout);
    }
    if (code == 256) {
      {
      fprintf(_coverage_fout, "596\n");
      fflush(_coverage_fout);
      }
      free_entp = sp->dec_codetab + 258;
      {
      fprintf(_coverage_fout, "597\n");
      fflush(_coverage_fout);
      }
      nbits = 9;
      {
      fprintf(_coverage_fout, "598\n");
      fflush(_coverage_fout);
      }
      nbitsmask = (1L << 9) - 1L;
      {
      fprintf(_coverage_fout, "599\n");
      fflush(_coverage_fout);
      }
      maxcodep = sp->dec_codetab + nbitsmask;
      {
      fprintf(_coverage_fout, "600\n");
      fflush(_coverage_fout);
      }
      if (sp->dec_bitsleft < (long )nbits) {
        {
        fprintf(_coverage_fout, "601\n");
        fflush(_coverage_fout);
        }
        TIFFWarningExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                       "LZWDecode: Strip %d not terminated with EOI code",
                       tif->tif_curstrip);
        {
        fprintf(_coverage_fout, "602\n");
        fflush(_coverage_fout);
        }
        code = 257;
      } else {
        {
        fprintf(_coverage_fout, "603\n");
        fflush(_coverage_fout);
        }
        tmp___1 = bp;
        {
        fprintf(_coverage_fout, "604\n");
        fflush(_coverage_fout);
        }
        bp ++;
        {
        fprintf(_coverage_fout, "605\n");
        fflush(_coverage_fout);
        }
        nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp___1 << nextbits));
        {
        fprintf(_coverage_fout, "606\n");
        fflush(_coverage_fout);
        }
        nextbits += 8L;
        {
        fprintf(_coverage_fout, "607\n");
        fflush(_coverage_fout);
        }
        if (nextbits < (long )nbits) {
          {
          fprintf(_coverage_fout, "608\n");
          fflush(_coverage_fout);
          }
          tmp___2 = bp;
          {
          fprintf(_coverage_fout, "609\n");
          fflush(_coverage_fout);
          }
          bp ++;
          {
          fprintf(_coverage_fout, "610\n");
          fflush(_coverage_fout);
          }
          nextdata = (long )((unsigned long )nextdata | ((unsigned long )*tmp___2 << nextbits));
          {
          fprintf(_coverage_fout, "611\n");
          fflush(_coverage_fout);
          }
          nextbits += 8L;
        } else {
          {
          fprintf(_coverage_fout, "612\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "613\n");
        fflush(_coverage_fout);
        }
        code = (int )((hcode_t )(nextdata & nbitsmask));
        {
        fprintf(_coverage_fout, "614\n");
        fflush(_coverage_fout);
        }
        nextdata >>= nbits;
        {
        fprintf(_coverage_fout, "615\n");
        fflush(_coverage_fout);
        }
        nextbits -= (long )nbits;
        {
        fprintf(_coverage_fout, "616\n");
        fflush(_coverage_fout);
        }
        sp->dec_bitsleft -= (long )nbits;
      }
      {
      fprintf(_coverage_fout, "617\n");
      fflush(_coverage_fout);
      }
      if (code == 257) {
        {
        fprintf(_coverage_fout, "618\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "619\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "620\n");
      fflush(_coverage_fout);
      }
      tmp___3 = op;
      {
      fprintf(_coverage_fout, "621\n");
      fflush(_coverage_fout);
      }
      op ++;
      {
      fprintf(_coverage_fout, "622\n");
      fflush(_coverage_fout);
      }
      *tmp___3 = (char )code;
      {
      fprintf(_coverage_fout, "623\n");
      fflush(_coverage_fout);
      }
      occ --;
      {
      fprintf(_coverage_fout, "624\n");
      fflush(_coverage_fout);
      }
      oldcodep = sp->dec_codetab + code;
      {
      fprintf(_coverage_fout, "625\n");
      fflush(_coverage_fout);
      }
      continue;
    } else {
      {
      fprintf(_coverage_fout, "626\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "627\n");
    fflush(_coverage_fout);
    }
    codep = sp->dec_codetab + code;
    {
    fprintf(_coverage_fout, "628\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )free_entp < (unsigned long )(sp->dec_codetab + 0)) {
      {
      fprintf(_coverage_fout, "629\n");
      fflush(_coverage_fout);
      }
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                   tif->tif_row);
      {
      fprintf(_coverage_fout, "630\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "631\n");
      fflush(_coverage_fout);
      }
      if ((unsigned long )free_entp >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        {
        fprintf(_coverage_fout, "632\n");
        fflush(_coverage_fout);
        }
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        {
        fprintf(_coverage_fout, "633\n");
        fflush(_coverage_fout);
        }
        return (0);
      } else {
        {
        fprintf(_coverage_fout, "634\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "635\n");
    fflush(_coverage_fout);
    }
    free_entp->next = oldcodep;
    {
    fprintf(_coverage_fout, "636\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )free_entp->next < (unsigned long )(sp->dec_codetab + 0)) {
      {
      fprintf(_coverage_fout, "637\n");
      fflush(_coverage_fout);
      }
      TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                   "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                   tif->tif_row);
      {
      fprintf(_coverage_fout, "638\n");
      fflush(_coverage_fout);
      }
      return (0);
    } else {
      {
      fprintf(_coverage_fout, "639\n");
      fflush(_coverage_fout);
      }
      if ((unsigned long )free_entp->next >= (unsigned long )(sp->dec_codetab + (((1L << 12) - 1L) + 1024L))) {
        {
        fprintf(_coverage_fout, "640\n");
        fflush(_coverage_fout);
        }
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecodeCompat: Corrupted LZW table at scanline %d",
                     tif->tif_row);
        {
        fprintf(_coverage_fout, "641\n");
        fflush(_coverage_fout);
        }
        return (0);
      } else {
        {
        fprintf(_coverage_fout, "642\n");
        fflush(_coverage_fout);
        }

      }
    }
    {
    fprintf(_coverage_fout, "643\n");
    fflush(_coverage_fout);
    }
    free_entp->firstchar = (free_entp->next)->firstchar;
    {
    fprintf(_coverage_fout, "644\n");
    fflush(_coverage_fout);
    }
    free_entp->length = (unsigned short )((int )(free_entp->next)->length + 1);
    {
    fprintf(_coverage_fout, "645\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )codep < (unsigned long )free_entp) {
      {
      fprintf(_coverage_fout, "646\n");
      fflush(_coverage_fout);
      }
      free_entp->value = codep->firstchar;
    } else {
      {
      fprintf(_coverage_fout, "647\n");
      fflush(_coverage_fout);
      }
      free_entp->value = free_entp->firstchar;
    }
    {
    fprintf(_coverage_fout, "648\n");
    fflush(_coverage_fout);
    }
    free_entp ++;
    {
    fprintf(_coverage_fout, "649\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )free_entp > (unsigned long )maxcodep) {
      {
      fprintf(_coverage_fout, "650\n");
      fflush(_coverage_fout);
      }
      nbits ++;
      {
      fprintf(_coverage_fout, "651\n");
      fflush(_coverage_fout);
      }
      if (nbits > 12) {
        {
        fprintf(_coverage_fout, "652\n");
        fflush(_coverage_fout);
        }
        nbits = 12;
      } else {
        {
        fprintf(_coverage_fout, "653\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "654\n");
      fflush(_coverage_fout);
      }
      nbitsmask = (1L << nbits) - 1L;
      {
      fprintf(_coverage_fout, "655\n");
      fflush(_coverage_fout);
      }
      maxcodep = sp->dec_codetab + nbitsmask;
    } else {
      {
      fprintf(_coverage_fout, "656\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "657\n");
    fflush(_coverage_fout);
    }
    oldcodep = codep;
    {
    fprintf(_coverage_fout, "658\n");
    fflush(_coverage_fout);
    }
    if (code >= 256) {
      {
      fprintf(_coverage_fout, "659\n");
      fflush(_coverage_fout);
      }
      if ((int )codep->length == 0) {
        {
        fprintf(_coverage_fout, "660\n");
        fflush(_coverage_fout);
        }
        TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                     "LZWDecodeCompat: Wrong length of decoded string: data probably corrupted at scanline %d",
                     tif->tif_row);
        {
        fprintf(_coverage_fout, "661\n");
        fflush(_coverage_fout);
        }
        return (0);
      } else {
        {
        fprintf(_coverage_fout, "662\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "663\n");
      fflush(_coverage_fout);
      }
      if ((long )codep->length > occ) {
        {
        fprintf(_coverage_fout, "664\n");
        fflush(_coverage_fout);
        }
        sp->dec_codep = codep;
        {
        fprintf(_coverage_fout, "665\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "666\n");
          fflush(_coverage_fout);
          }
          codep = codep->next;
          {
          fprintf(_coverage_fout, "667\n");
          fflush(_coverage_fout);
          }
          if ((long )codep->length > occ) {
            {
            fprintf(_coverage_fout, "668\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "669\n");
            fflush(_coverage_fout);
            }
            break;
          }
        }
        {
        fprintf(_coverage_fout, "670\n");
        fflush(_coverage_fout);
        }
        sp->dec_restart = occ;
        {
        fprintf(_coverage_fout, "671\n");
        fflush(_coverage_fout);
        }
        tp = op + occ;
        {
        fprintf(_coverage_fout, "672\n");
        fflush(_coverage_fout);
        }
        while (1) {
          {
          fprintf(_coverage_fout, "673\n");
          fflush(_coverage_fout);
          }
          tp --;
          {
          fprintf(_coverage_fout, "674\n");
          fflush(_coverage_fout);
          }
          *tp = (char )codep->value;
          {
          fprintf(_coverage_fout, "675\n");
          fflush(_coverage_fout);
          }
          codep = codep->next;
          {
          fprintf(_coverage_fout, "676\n");
          fflush(_coverage_fout);
          }
          occ --;
          {
          fprintf(_coverage_fout, "677\n");
          fflush(_coverage_fout);
          }
          if (occ) {
            {
            fprintf(_coverage_fout, "678\n");
            fflush(_coverage_fout);
            }

          } else {
            {
            fprintf(_coverage_fout, "679\n");
            fflush(_coverage_fout);
            }
            break;
          }
        }
        {
        fprintf(_coverage_fout, "680\n");
        fflush(_coverage_fout);
        }
        break;
      } else {
        {
        fprintf(_coverage_fout, "681\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "682\n");
      fflush(_coverage_fout);
      }
      op += (int )codep->length;
      {
      fprintf(_coverage_fout, "683\n");
      fflush(_coverage_fout);
      }
      occ -= (long )codep->length;
      {
      fprintf(_coverage_fout, "684\n");
      fflush(_coverage_fout);
      }
      tp = op;
      {
      fprintf(_coverage_fout, "685\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "686\n");
        fflush(_coverage_fout);
        }
        tp --;
        {
        fprintf(_coverage_fout, "687\n");
        fflush(_coverage_fout);
        }
        *tp = (char )codep->value;
        {
        fprintf(_coverage_fout, "688\n");
        fflush(_coverage_fout);
        }
        codep = codep->next;
        {
        fprintf(_coverage_fout, "689\n");
        fflush(_coverage_fout);
        }
        if ((unsigned long )codep != (unsigned long )((void *)0)) {
          {
          fprintf(_coverage_fout, "690\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "691\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
    } else {
      {
      fprintf(_coverage_fout, "692\n");
      fflush(_coverage_fout);
      }
      tmp___4 = op;
      {
      fprintf(_coverage_fout, "693\n");
      fflush(_coverage_fout);
      }
      op ++;
      {
      fprintf(_coverage_fout, "694\n");
      fflush(_coverage_fout);
      }
      *tmp___4 = (char )code;
      {
      fprintf(_coverage_fout, "695\n");
      fflush(_coverage_fout);
      }
      occ --;
    }
  }
  {
  fprintf(_coverage_fout, "696\n");
  fflush(_coverage_fout);
  }
  tif->tif_rawcp = bp;
  {
  fprintf(_coverage_fout, "697\n");
  fflush(_coverage_fout);
  }
  sp->base.nbits = (unsigned short )nbits;
  {
  fprintf(_coverage_fout, "698\n");
  fflush(_coverage_fout);
  }
  sp->base.nextdata = nextdata;
  {
  fprintf(_coverage_fout, "699\n");
  fflush(_coverage_fout);
  }
  sp->base.nextbits = nextbits;
  {
  fprintf(_coverage_fout, "700\n");
  fflush(_coverage_fout);
  }
  sp->dec_nbitsmask = nbitsmask;
  {
  fprintf(_coverage_fout, "701\n");
  fflush(_coverage_fout);
  }
  sp->dec_oldcodep = oldcodep;
  {
  fprintf(_coverage_fout, "702\n");
  fflush(_coverage_fout);
  }
  sp->dec_free_entp = free_entp;
  {
  fprintf(_coverage_fout, "703\n");
  fflush(_coverage_fout);
  }
  sp->dec_maxcodep = maxcodep;
  {
  fprintf(_coverage_fout, "704\n");
  fflush(_coverage_fout);
  }
  if (occ > 0L) {
    {
    fprintf(_coverage_fout, "705\n");
    fflush(_coverage_fout);
    }
    TIFFErrorExt(tif->tif_clientdata, (char const   *)tif->tif_name,
                 "LZWDecodeCompat: Not enough data at scanline %d (short %d bytes)",
                 tif->tif_row, occ);
    {
    fprintf(_coverage_fout, "706\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "707\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "708\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
static int LZWSetupEncode(TIFF *tif ) ;
static char const   module___0[15]  = 
  {      (char const   )'L',      (char const   )'Z',      (char const   )'W',      (char const   )'S', 
        (char const   )'e',      (char const   )'t',      (char const   )'u',      (char const   )'p', 
        (char const   )'E',      (char const   )'n',      (char const   )'c',      (char const   )'o', 
        (char const   )'d',      (char const   )'e',      (char const   )'\000'};
static int LZWSetupEncode(TIFF *tif ) 
{ 
  LZWCodecState *sp ;
  tdata_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "709\n");
  fflush(_coverage_fout);
  }
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  {
  fprintf(_coverage_fout, "710\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )sp != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "711\n");
    fflush(_coverage_fout);
    }

  } else {
    {
    fprintf(_coverage_fout, "712\n");
    fflush(_coverage_fout);
    }
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 718U, "LZWSetupEncode");
  }
  {
  fprintf(_coverage_fout, "713\n");
  fflush(_coverage_fout);
  }
  tmp = _TIFFmalloc((tsize_t )(9001UL * sizeof(hash_t )));
  {
  fprintf(_coverage_fout, "714\n");
  fflush(_coverage_fout);
  }
  sp->enc_hashtab = (hash_t *)tmp;
  {
  fprintf(_coverage_fout, "715\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )sp->enc_hashtab == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "716\n");
    fflush(_coverage_fout);
    }
    TIFFErrorExt(tif->tif_clientdata, module___0, "No space for LZW hash table");
    {
    fprintf(_coverage_fout, "717\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "718\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "719\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
static int LZWPreEncode(TIFF *tif , tsample_t s ) 
{ 
  LZWCodecState *sp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "720\n");
  fflush(_coverage_fout);
  }
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  {
  fprintf(_coverage_fout, "721\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )sp != (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "722\n");
    fflush(_coverage_fout);
    }

  } else {
    {
    fprintf(_coverage_fout, "723\n");
    fflush(_coverage_fout);
    }
    __assert_fail("sp != ((void *)0)", "tif_lzw.c", 736U, "LZWPreEncode");
  }
  {
  fprintf(_coverage_fout, "724\n");
  fflush(_coverage_fout);
  }
  sp->base.nbits = (unsigned short)9;
  {
  fprintf(_coverage_fout, "725\n");
  fflush(_coverage_fout);
  }
  sp->base.maxcode = (unsigned short )((1L << 9) - 1L);
  {
  fprintf(_coverage_fout, "726\n");
  fflush(_coverage_fout);
  }
  sp->base.free_ent = (unsigned short)258;
  {
  fprintf(_coverage_fout, "727\n");
  fflush(_coverage_fout);
  }
  sp->base.nextbits = 0L;
  {
  fprintf(_coverage_fout, "728\n");
  fflush(_coverage_fout);
  }
  sp->base.nextdata = 0L;
  {
  fprintf(_coverage_fout, "729\n");
  fflush(_coverage_fout);
  }
  sp->enc_checkpoint = 10000L;
  {
  fprintf(_coverage_fout, "730\n");
  fflush(_coverage_fout);
  }
  sp->enc_ratio = 0L;
  {
  fprintf(_coverage_fout, "731\n");
  fflush(_coverage_fout);
  }
  sp->enc_incount = 0L;
  {
  fprintf(_coverage_fout, "732\n");
  fflush(_coverage_fout);
  }
  sp->enc_outcount = 0L;
  {
  fprintf(_coverage_fout, "733\n");
  fflush(_coverage_fout);
  }
  sp->enc_rawlimit = ((tif->tif_rawdata + tif->tif_rawdatasize) - 1) - 4;
  {
  fprintf(_coverage_fout, "734\n");
  fflush(_coverage_fout);
  }
  cl_hash(sp);
  {
  fprintf(_coverage_fout, "735\n");
  fflush(_coverage_fout);
  }
  sp->enc_oldcode = (int )((hcode_t )-1);
  {
  fprintf(_coverage_fout, "736\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
static int LZWEncode(TIFF *tif , tidata_t bp , tsize_t cc , tsample_t s ) 
{ 
  register LZWCodecState *sp ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "737\n");
  fflush(_coverage_fout);
  }
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  {
  fprintf(_coverage_fout, "738\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )sp == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "739\n");
    fflush(_coverage_fout);
    }
    return (0);
  } else {
    {
    fprintf(_coverage_fout, "740\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "741\n");
  fflush(_coverage_fout);
  }
  incount = sp->enc_incount;
  {
  fprintf(_coverage_fout, "742\n");
  fflush(_coverage_fout);
  }
  outcount = sp->enc_outcount;
  {
  fprintf(_coverage_fout, "743\n");
  fflush(_coverage_fout);
  }
  checkpoint = sp->enc_checkpoint;
  {
  fprintf(_coverage_fout, "744\n");
  fflush(_coverage_fout);
  }
  nextdata = sp->base.nextdata;
  {
  fprintf(_coverage_fout, "745\n");
  fflush(_coverage_fout);
  }
  nextbits = sp->base.nextbits;
  {
  fprintf(_coverage_fout, "746\n");
  fflush(_coverage_fout);
  }
  free_ent = (int )sp->base.free_ent;
  {
  fprintf(_coverage_fout, "747\n");
  fflush(_coverage_fout);
  }
  maxcode = (int )sp->base.maxcode;
  {
  fprintf(_coverage_fout, "748\n");
  fflush(_coverage_fout);
  }
  nbits = (int )sp->base.nbits;
  {
  fprintf(_coverage_fout, "749\n");
  fflush(_coverage_fout);
  }
  op = tif->tif_rawcp;
  {
  fprintf(_coverage_fout, "750\n");
  fflush(_coverage_fout);
  }
  limit = sp->enc_rawlimit;
  {
  fprintf(_coverage_fout, "751\n");
  fflush(_coverage_fout);
  }
  ent = (hcode_t )sp->enc_oldcode;
  {
  fprintf(_coverage_fout, "752\n");
  fflush(_coverage_fout);
  }
  if ((int )ent == 65535) {
    {
    fprintf(_coverage_fout, "753\n");
    fflush(_coverage_fout);
    }
    if (cc > 0) {
      {
      fprintf(_coverage_fout, "754\n");
      fflush(_coverage_fout);
      }
      nextdata = (nextdata << nbits) | 256L;
      {
      fprintf(_coverage_fout, "755\n");
      fflush(_coverage_fout);
      }
      nextbits += (long )nbits;
      {
      fprintf(_coverage_fout, "756\n");
      fflush(_coverage_fout);
      }
      tmp = op;
      {
      fprintf(_coverage_fout, "757\n");
      fflush(_coverage_fout);
      }
      op ++;
      {
      fprintf(_coverage_fout, "758\n");
      fflush(_coverage_fout);
      }
      *tmp = (unsigned char )(nextdata >> (nextbits - 8L));
      {
      fprintf(_coverage_fout, "759\n");
      fflush(_coverage_fout);
      }
      nextbits -= 8L;
      {
      fprintf(_coverage_fout, "760\n");
      fflush(_coverage_fout);
      }
      if (nextbits >= 8L) {
        {
        fprintf(_coverage_fout, "761\n");
        fflush(_coverage_fout);
        }
        tmp___0 = op;
        {
        fprintf(_coverage_fout, "762\n");
        fflush(_coverage_fout);
        }
        op ++;
        {
        fprintf(_coverage_fout, "763\n");
        fflush(_coverage_fout);
        }
        *tmp___0 = (unsigned char )(nextdata >> (nextbits - 8L));
        {
        fprintf(_coverage_fout, "764\n");
        fflush(_coverage_fout);
        }
        nextbits -= 8L;
      } else {
        {
        fprintf(_coverage_fout, "765\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "766\n");
      fflush(_coverage_fout);
      }
      outcount += (long )nbits;
      {
      fprintf(_coverage_fout, "767\n");
      fflush(_coverage_fout);
      }
      tmp___1 = bp;
      {
      fprintf(_coverage_fout, "768\n");
      fflush(_coverage_fout);
      }
      bp ++;
      {
      fprintf(_coverage_fout, "769\n");
      fflush(_coverage_fout);
      }
      ent = (hcode_t )*tmp___1;
      {
      fprintf(_coverage_fout, "770\n");
      fflush(_coverage_fout);
      }
      cc --;
      {
      fprintf(_coverage_fout, "771\n");
      fflush(_coverage_fout);
      }
      incount ++;
    } else {
      {
      fprintf(_coverage_fout, "772\n");
      fflush(_coverage_fout);
      }

    }
  } else {
    {
    fprintf(_coverage_fout, "773\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "774\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "775\n");
    fflush(_coverage_fout);
    }
    if (cc > 0) {
      {
      fprintf(_coverage_fout, "776\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "777\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "778\n");
    fflush(_coverage_fout);
    }
    tmp___2 = bp;
    {
    fprintf(_coverage_fout, "779\n");
    fflush(_coverage_fout);
    }
    bp ++;
    {
    fprintf(_coverage_fout, "780\n");
    fflush(_coverage_fout);
    }
    c = (int )*tmp___2;
    {
    fprintf(_coverage_fout, "781\n");
    fflush(_coverage_fout);
    }
    cc --;
    {
    fprintf(_coverage_fout, "782\n");
    fflush(_coverage_fout);
    }
    incount ++;
    {
    fprintf(_coverage_fout, "783\n");
    fflush(_coverage_fout);
    }
    fcode = ((long )c << 12) + (long )ent;
    {
    fprintf(_coverage_fout, "784\n");
    fflush(_coverage_fout);
    }
    h = (c << 5) ^ (int )ent;
    {
    fprintf(_coverage_fout, "785\n");
    fflush(_coverage_fout);
    }
    hp = sp->enc_hashtab + h;
    {
    fprintf(_coverage_fout, "786\n");
    fflush(_coverage_fout);
    }
    if (hp->hash == fcode) {
      {
      fprintf(_coverage_fout, "787\n");
      fflush(_coverage_fout);
      }
      ent = hp->code;
      {
      fprintf(_coverage_fout, "788\n");
      fflush(_coverage_fout);
      }
      continue;
    } else {
      {
      fprintf(_coverage_fout, "789\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "790\n");
    fflush(_coverage_fout);
    }
    if (hp->hash >= 0L) {
      {
      fprintf(_coverage_fout, "791\n");
      fflush(_coverage_fout);
      }
      disp = 9001L - (long )h;
      {
      fprintf(_coverage_fout, "792\n");
      fflush(_coverage_fout);
      }
      if (h == 0) {
        {
        fprintf(_coverage_fout, "793\n");
        fflush(_coverage_fout);
        }
        disp = 1L;
      } else {
        {
        fprintf(_coverage_fout, "794\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "795\n");
      fflush(_coverage_fout);
      }
      while (1) {
        {
        fprintf(_coverage_fout, "796\n");
        fflush(_coverage_fout);
        }
        h = (int )((long )h - disp);
        {
        fprintf(_coverage_fout, "797\n");
        fflush(_coverage_fout);
        }
        if (h < 0) {
          {
          fprintf(_coverage_fout, "798\n");
          fflush(_coverage_fout);
          }
          h = (int )((long )h + 9001L);
        } else {
          {
          fprintf(_coverage_fout, "799\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "800\n");
        fflush(_coverage_fout);
        }
        hp = sp->enc_hashtab + h;
        {
        fprintf(_coverage_fout, "801\n");
        fflush(_coverage_fout);
        }
        if (hp->hash == fcode) {
          {
          fprintf(_coverage_fout, "802\n");
          fflush(_coverage_fout);
          }
          ent = hp->code;
          {
          fprintf(_coverage_fout, "803\n");
          fflush(_coverage_fout);
          }
          goto hit;
        } else {
          {
          fprintf(_coverage_fout, "804\n");
          fflush(_coverage_fout);
          }

        }
        {
        fprintf(_coverage_fout, "805\n");
        fflush(_coverage_fout);
        }
        if (hp->hash >= 0L) {
          {
          fprintf(_coverage_fout, "806\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "807\n");
          fflush(_coverage_fout);
          }
          break;
        }
      }
    } else {
      {
      fprintf(_coverage_fout, "808\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "809\n");
    fflush(_coverage_fout);
    }
    if ((unsigned long )op > (unsigned long )limit) {
      {
      fprintf(_coverage_fout, "810\n");
      fflush(_coverage_fout);
      }
      tif->tif_rawcc = (tsize_t )(op - tif->tif_rawdata);
      {
      fprintf(_coverage_fout, "811\n");
      fflush(_coverage_fout);
      }
      TIFFFlushData1(tif);
      {
      fprintf(_coverage_fout, "812\n");
      fflush(_coverage_fout);
      }
      op = tif->tif_rawdata;
    } else {
      {
      fprintf(_coverage_fout, "813\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "814\n");
    fflush(_coverage_fout);
    }
    nextdata = (nextdata << nbits) | (long )ent;
    {
    fprintf(_coverage_fout, "815\n");
    fflush(_coverage_fout);
    }
    nextbits += (long )nbits;
    {
    fprintf(_coverage_fout, "816\n");
    fflush(_coverage_fout);
    }
    tmp___3 = op;
    {
    fprintf(_coverage_fout, "817\n");
    fflush(_coverage_fout);
    }
    op ++;
    {
    fprintf(_coverage_fout, "818\n");
    fflush(_coverage_fout);
    }
    *tmp___3 = (unsigned char )(nextdata >> (nextbits - 8L));
    {
    fprintf(_coverage_fout, "819\n");
    fflush(_coverage_fout);
    }
    nextbits -= 8L;
    {
    fprintf(_coverage_fout, "820\n");
    fflush(_coverage_fout);
    }
    if (nextbits >= 8L) {
      {
      fprintf(_coverage_fout, "821\n");
      fflush(_coverage_fout);
      }
      tmp___4 = op;
      {
      fprintf(_coverage_fout, "822\n");
      fflush(_coverage_fout);
      }
      op ++;
      {
      fprintf(_coverage_fout, "823\n");
      fflush(_coverage_fout);
      }
      *tmp___4 = (unsigned char )(nextdata >> (nextbits - 8L));
      {
      fprintf(_coverage_fout, "824\n");
      fflush(_coverage_fout);
      }
      nextbits -= 8L;
    } else {
      {
      fprintf(_coverage_fout, "825\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "826\n");
    fflush(_coverage_fout);
    }
    outcount += (long )nbits;
    {
    fprintf(_coverage_fout, "827\n");
    fflush(_coverage_fout);
    }
    ent = (hcode_t )c;
    {
    fprintf(_coverage_fout, "828\n");
    fflush(_coverage_fout);
    }
    tmp___5 = free_ent;
    {
    fprintf(_coverage_fout, "829\n");
    fflush(_coverage_fout);
    }
    free_ent ++;
    {
    fprintf(_coverage_fout, "830\n");
    fflush(_coverage_fout);
    }
    hp->code = (hcode_t )tmp___5;
    {
    fprintf(_coverage_fout, "831\n");
    fflush(_coverage_fout);
    }
    hp->hash = fcode;
    {
    fprintf(_coverage_fout, "832\n");
    fflush(_coverage_fout);
    }
    if ((long )free_ent == ((1L << 12) - 1L) - 1L) {
      {
      fprintf(_coverage_fout, "833\n");
      fflush(_coverage_fout);
      }
      cl_hash(sp);
      {
      fprintf(_coverage_fout, "834\n");
      fflush(_coverage_fout);
      }
      sp->enc_ratio = 0L;
      {
      fprintf(_coverage_fout, "835\n");
      fflush(_coverage_fout);
      }
      incount = 0L;
      {
      fprintf(_coverage_fout, "836\n");
      fflush(_coverage_fout);
      }
      outcount = 0L;
      {
      fprintf(_coverage_fout, "837\n");
      fflush(_coverage_fout);
      }
      free_ent = 258;
      {
      fprintf(_coverage_fout, "838\n");
      fflush(_coverage_fout);
      }
      nextdata = (nextdata << nbits) | 256L;
      {
      fprintf(_coverage_fout, "839\n");
      fflush(_coverage_fout);
      }
      nextbits += (long )nbits;
      {
      fprintf(_coverage_fout, "840\n");
      fflush(_coverage_fout);
      }
      tmp___6 = op;
      {
      fprintf(_coverage_fout, "841\n");
      fflush(_coverage_fout);
      }
      op ++;
      {
      fprintf(_coverage_fout, "842\n");
      fflush(_coverage_fout);
      }
      *tmp___6 = (unsigned char )(nextdata >> (nextbits - 8L));
      {
      fprintf(_coverage_fout, "843\n");
      fflush(_coverage_fout);
      }
      nextbits -= 8L;
      {
      fprintf(_coverage_fout, "844\n");
      fflush(_coverage_fout);
      }
      if (nextbits >= 8L) {
        {
        fprintf(_coverage_fout, "845\n");
        fflush(_coverage_fout);
        }
        tmp___7 = op;
        {
        fprintf(_coverage_fout, "846\n");
        fflush(_coverage_fout);
        }
        op ++;
        {
        fprintf(_coverage_fout, "847\n");
        fflush(_coverage_fout);
        }
        *tmp___7 = (unsigned char )(nextdata >> (nextbits - 8L));
        {
        fprintf(_coverage_fout, "848\n");
        fflush(_coverage_fout);
        }
        nextbits -= 8L;
      } else {
        {
        fprintf(_coverage_fout, "849\n");
        fflush(_coverage_fout);
        }

      }
      {
      fprintf(_coverage_fout, "850\n");
      fflush(_coverage_fout);
      }
      outcount += (long )nbits;
      {
      fprintf(_coverage_fout, "851\n");
      fflush(_coverage_fout);
      }
      nbits = 9;
      {
      fprintf(_coverage_fout, "852\n");
      fflush(_coverage_fout);
      }
      maxcode = (int )((1L << 9) - 1L);
    } else {
      {
      fprintf(_coverage_fout, "853\n");
      fflush(_coverage_fout);
      }
      if (free_ent > maxcode) {
        {
        fprintf(_coverage_fout, "854\n");
        fflush(_coverage_fout);
        }
        nbits ++;
        {
        fprintf(_coverage_fout, "855\n");
        fflush(_coverage_fout);
        }
        if (nbits <= 12) {
          {
          fprintf(_coverage_fout, "856\n");
          fflush(_coverage_fout);
          }

        } else {
          {
          fprintf(_coverage_fout, "857\n");
          fflush(_coverage_fout);
          }
          __assert_fail("nbits <= 12", "tif_lzw.c", 902U, "LZWEncode");
        }
        {
        fprintf(_coverage_fout, "858\n");
        fflush(_coverage_fout);
        }
        maxcode = (int )((1L << nbits) - 1L);
      } else {
        {
        fprintf(_coverage_fout, "859\n");
        fflush(_coverage_fout);
        }
        if (incount >= checkpoint) {
          {
          fprintf(_coverage_fout, "860\n");
          fflush(_coverage_fout);
          }
          checkpoint = incount + 10000L;
          {
          fprintf(_coverage_fout, "861\n");
          fflush(_coverage_fout);
          }
          if (incount > 8388607L) {
            {
            fprintf(_coverage_fout, "862\n");
            fflush(_coverage_fout);
            }
            rat = outcount >> 8;
            {
            fprintf(_coverage_fout, "863\n");
            fflush(_coverage_fout);
            }
            if (rat == 0L) {
              {
              fprintf(_coverage_fout, "864\n");
              fflush(_coverage_fout);
              }
              rat = 2147483647L;
            } else {
              {
              fprintf(_coverage_fout, "865\n");
              fflush(_coverage_fout);
              }
              rat = incount / rat;
            }
          } else {
            {
            fprintf(_coverage_fout, "866\n");
            fflush(_coverage_fout);
            }
            rat = (incount << 8) / outcount;
          }
          {
          fprintf(_coverage_fout, "867\n");
          fflush(_coverage_fout);
          }
          if (rat <= sp->enc_ratio) {
            {
            fprintf(_coverage_fout, "868\n");
            fflush(_coverage_fout);
            }
            cl_hash(sp);
            {
            fprintf(_coverage_fout, "869\n");
            fflush(_coverage_fout);
            }
            sp->enc_ratio = 0L;
            {
            fprintf(_coverage_fout, "870\n");
            fflush(_coverage_fout);
            }
            incount = 0L;
            {
            fprintf(_coverage_fout, "871\n");
            fflush(_coverage_fout);
            }
            outcount = 0L;
            {
            fprintf(_coverage_fout, "872\n");
            fflush(_coverage_fout);
            }
            free_ent = 258;
            {
            fprintf(_coverage_fout, "873\n");
            fflush(_coverage_fout);
            }
            nextdata = (nextdata << nbits) | 256L;
            {
            fprintf(_coverage_fout, "874\n");
            fflush(_coverage_fout);
            }
            nextbits += (long )nbits;
            {
            fprintf(_coverage_fout, "875\n");
            fflush(_coverage_fout);
            }
            tmp___8 = op;
            {
            fprintf(_coverage_fout, "876\n");
            fflush(_coverage_fout);
            }
            op ++;
            {
            fprintf(_coverage_fout, "877\n");
            fflush(_coverage_fout);
            }
            *tmp___8 = (unsigned char )(nextdata >> (nextbits - 8L));
            {
            fprintf(_coverage_fout, "878\n");
            fflush(_coverage_fout);
            }
            nextbits -= 8L;
            {
            fprintf(_coverage_fout, "879\n");
            fflush(_coverage_fout);
            }
            if (nextbits >= 8L) {
              {
              fprintf(_coverage_fout, "880\n");
              fflush(_coverage_fout);
              }
              tmp___9 = op;
              {
              fprintf(_coverage_fout, "881\n");
              fflush(_coverage_fout);
              }
              op ++;
              {
              fprintf(_coverage_fout, "882\n");
              fflush(_coverage_fout);
              }
              *tmp___9 = (unsigned char )(nextdata >> (nextbits - 8L));
              {
              fprintf(_coverage_fout, "883\n");
              fflush(_coverage_fout);
              }
              nextbits -= 8L;
            } else {
              {
              fprintf(_coverage_fout, "884\n");
              fflush(_coverage_fout);
              }

            }
            {
            fprintf(_coverage_fout, "885\n");
            fflush(_coverage_fout);
            }
            outcount += (long )nbits;
            {
            fprintf(_coverage_fout, "886\n");
            fflush(_coverage_fout);
            }
            nbits = 9;
            {
            fprintf(_coverage_fout, "887\n");
            fflush(_coverage_fout);
            }
            maxcode = (int )((1L << 9) - 1L);
          } else {
            {
            fprintf(_coverage_fout, "888\n");
            fflush(_coverage_fout);
            }
            sp->enc_ratio = rat;
          }
        } else {
          {
          fprintf(_coverage_fout, "889\n");
          fflush(_coverage_fout);
          }

        }
      }
    }
    {
    fprintf(_coverage_fout, "890\n");
    fflush(_coverage_fout);
    }
    hit: ;
  }
  {
  fprintf(_coverage_fout, "891\n");
  fflush(_coverage_fout);
  }
  sp->enc_incount = incount;
  {
  fprintf(_coverage_fout, "892\n");
  fflush(_coverage_fout);
  }
  sp->enc_outcount = outcount;
  {
  fprintf(_coverage_fout, "893\n");
  fflush(_coverage_fout);
  }
  sp->enc_checkpoint = checkpoint;
  {
  fprintf(_coverage_fout, "894\n");
  fflush(_coverage_fout);
  }
  sp->enc_oldcode = (int )ent;
  {
  fprintf(_coverage_fout, "895\n");
  fflush(_coverage_fout);
  }
  sp->base.nextdata = nextdata;
  {
  fprintf(_coverage_fout, "896\n");
  fflush(_coverage_fout);
  }
  sp->base.nextbits = nextbits;
  {
  fprintf(_coverage_fout, "897\n");
  fflush(_coverage_fout);
  }
  sp->base.free_ent = (unsigned short )free_ent;
  {
  fprintf(_coverage_fout, "898\n");
  fflush(_coverage_fout);
  }
  sp->base.maxcode = (unsigned short )maxcode;
  {
  fprintf(_coverage_fout, "899\n");
  fflush(_coverage_fout);
  }
  sp->base.nbits = (unsigned short )nbits;
  {
  fprintf(_coverage_fout, "900\n");
  fflush(_coverage_fout);
  }
  tif->tif_rawcp = op;
  {
  fprintf(_coverage_fout, "901\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
static int LZWPostEncode(TIFF *tif ) 
{ 
  register LZWCodecState *sp ;
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
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "902\n");
  fflush(_coverage_fout);
  }
  sp = (LZWCodecState *)((LZWBaseState *)tif->tif_data);
  {
  fprintf(_coverage_fout, "903\n");
  fflush(_coverage_fout);
  }
  op = tif->tif_rawcp;
  {
  fprintf(_coverage_fout, "904\n");
  fflush(_coverage_fout);
  }
  nextbits = sp->base.nextbits;
  {
  fprintf(_coverage_fout, "905\n");
  fflush(_coverage_fout);
  }
  nextdata = sp->base.nextdata;
  {
  fprintf(_coverage_fout, "906\n");
  fflush(_coverage_fout);
  }
  outcount = sp->enc_outcount;
  {
  fprintf(_coverage_fout, "907\n");
  fflush(_coverage_fout);
  }
  nbits = (int )sp->base.nbits;
  {
  fprintf(_coverage_fout, "908\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )op > (unsigned long )sp->enc_rawlimit) {
    {
    fprintf(_coverage_fout, "909\n");
    fflush(_coverage_fout);
    }
    tif->tif_rawcc = (tsize_t )(op - tif->tif_rawdata);
    {
    fprintf(_coverage_fout, "910\n");
    fflush(_coverage_fout);
    }
    TIFFFlushData1(tif);
    {
    fprintf(_coverage_fout, "911\n");
    fflush(_coverage_fout);
    }
    op = tif->tif_rawdata;
  } else {
    {
    fprintf(_coverage_fout, "912\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "913\n");
  fflush(_coverage_fout);
  }
  if (sp->enc_oldcode != 65535) {
    {
    fprintf(_coverage_fout, "914\n");
    fflush(_coverage_fout);
    }
    nextdata = (nextdata << nbits) | (long )sp->enc_oldcode;
    {
    fprintf(_coverage_fout, "915\n");
    fflush(_coverage_fout);
    }
    nextbits += (long )nbits;
    {
    fprintf(_coverage_fout, "916\n");
    fflush(_coverage_fout);
    }
    tmp = op;
    {
    fprintf(_coverage_fout, "917\n");
    fflush(_coverage_fout);
    }
    op ++;
    {
    fprintf(_coverage_fout, "918\n");
    fflush(_coverage_fout);
    }
    *tmp = (unsigned char )(nextdata >> (nextbits - 8L));
    {
    fprintf(_coverage_fout, "919\n");
    fflush(_coverage_fout);
    }
    nextbits -= 8L;
    {
    fprintf(_coverage_fout, "920\n");
    fflush(_coverage_fout);
    }
    if (nextbits >= 8L) {
      {
      fprintf(_coverage_fout, "921\n");
      fflush(_coverage_fout);
      }
      tmp___0 = op;
      {
      fprintf(_coverage_fout, "922\n");
      fflush(_coverage_fout);
      }
      op ++;
      {
      fprintf(_coverage_fout, "923\n");
      fflush(_coverage_fout);
      }
      *tmp___0 = (unsigned char )(nextdata >> (nextbits - 8L));
      {
      fprintf(_coverage_fout, "924\n");
      fflush(_coverage_fout);
      }
      nextbits -= 8L;
    } else {
      {
      fprintf(_coverage_fout, "925\n");
      fflush(_coverage_fout);
      }

    }
    {
    fprintf(_coverage_fout, "926\n");
    fflush(_coverage_fout);
    }
    outcount += (long )nbits;
    {
    fprintf(_coverage_fout, "927\n");
    fflush(_coverage_fout);
    }
    sp->enc_oldcode = (int )((hcode_t )-1);
  } else {
    {
    fprintf(_coverage_fout, "928\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "929\n");
  fflush(_coverage_fout);
  }
  nextdata = (nextdata << nbits) | 257L;
  {
  fprintf(_coverage_fout, "930\n");
  fflush(_coverage_fout);
  }
  nextbits += (long )nbits;
  {
  fprintf(_coverage_fout, "931\n");
  fflush(_coverage_fout);
  }
  tmp___1 = op;
  {
  fprintf(_coverage_fout, "932\n");
  fflush(_coverage_fout);
  }
  op ++;
  {
  fprintf(_coverage_fout, "933\n");
  fflush(_coverage_fout);
  }
  *tmp___1 = (unsigned char )(nextdata >> (nextbits - 8L));
  {
  fprintf(_coverage_fout, "934\n");
  fflush(_coverage_fout);
  }
  nextbits -= 8L;
  {
  fprintf(_coverage_fout, "935\n");
  fflush(_coverage_fout);
  }
  if (nextbits >= 8L) {
    {
    fprintf(_coverage_fout, "936\n");
    fflush(_coverage_fout);
    }
    tmp___2 = op;
    {
    fprintf(_coverage_fout, "937\n");
    fflush(_coverage_fout);
    }
    op ++;
    {
    fprintf(_coverage_fout, "938\n");
    fflush(_coverage_fout);
    }
    *tmp___2 = (unsigned char )(nextdata >> (nextbits - 8L));
    {
    fprintf(_coverage_fout, "939\n");
    fflush(_coverage_fout);
    }
    nextbits -= 8L;
  } else {
    {
    fprintf(_coverage_fout, "940\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "941\n");
  fflush(_coverage_fout);
  }
  outcount += (long )nbits;
  {
  fprintf(_coverage_fout, "942\n");
  fflush(_coverage_fout);
  }
  if (nextbits > 0L) {
    {
    fprintf(_coverage_fout, "943\n");
    fflush(_coverage_fout);
    }
    tmp___3 = op;
    {
    fprintf(_coverage_fout, "944\n");
    fflush(_coverage_fout);
    }
    op ++;
    {
    fprintf(_coverage_fout, "945\n");
    fflush(_coverage_fout);
    }
    *tmp___3 = (unsigned char )(nextdata << (8L - nextbits));
  } else {
    {
    fprintf(_coverage_fout, "946\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "947\n");
  fflush(_coverage_fout);
  }
  tif->tif_rawcc = (tsize_t )(op - tif->tif_rawdata);
  {
  fprintf(_coverage_fout, "948\n");
  fflush(_coverage_fout);
  }
  return (1);
}
}
static void cl_hash(LZWCodecState *sp ) 
{ 
  register hash_t *hp ;
  register long i ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "949\n");
  fflush(_coverage_fout);
  }
  hp = sp->enc_hashtab + 9000L;
  {
  fprintf(_coverage_fout, "950\n");
  fflush(_coverage_fout);
  }
  i = 8993L;
  {
  fprintf(_coverage_fout, "951\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "952\n");
    fflush(_coverage_fout);
    }
    i -= 8L;
    {
    fprintf(_coverage_fout, "953\n");
    fflush(_coverage_fout);
    }
    (hp + -7)->hash = -1L;
    {
    fprintf(_coverage_fout, "954\n");
    fflush(_coverage_fout);
    }
    (hp + -6)->hash = -1L;
    {
    fprintf(_coverage_fout, "955\n");
    fflush(_coverage_fout);
    }
    (hp + -5)->hash = -1L;
    {
    fprintf(_coverage_fout, "956\n");
    fflush(_coverage_fout);
    }
    (hp + -4)->hash = -1L;
    {
    fprintf(_coverage_fout, "957\n");
    fflush(_coverage_fout);
    }
    (hp + -3)->hash = -1L;
    {
    fprintf(_coverage_fout, "958\n");
    fflush(_coverage_fout);
    }
    (hp + -2)->hash = -1L;
    {
    fprintf(_coverage_fout, "959\n");
    fflush(_coverage_fout);
    }
    (hp + -1)->hash = -1L;
    {
    fprintf(_coverage_fout, "960\n");
    fflush(_coverage_fout);
    }
    (hp + 0)->hash = -1L;
    {
    fprintf(_coverage_fout, "961\n");
    fflush(_coverage_fout);
    }
    hp -= 8;
    {
    fprintf(_coverage_fout, "962\n");
    fflush(_coverage_fout);
    }
    if (i >= 0L) {
      {
      fprintf(_coverage_fout, "963\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "964\n");
      fflush(_coverage_fout);
      }
      break;
    }
  }
  {
  fprintf(_coverage_fout, "965\n");
  fflush(_coverage_fout);
  }
  i += 8L;
  {
  fprintf(_coverage_fout, "966\n");
  fflush(_coverage_fout);
  }
  while (1) {
    {
    fprintf(_coverage_fout, "967\n");
    fflush(_coverage_fout);
    }
    if (i > 0L) {
      {
      fprintf(_coverage_fout, "968\n");
      fflush(_coverage_fout);
      }

    } else {
      {
      fprintf(_coverage_fout, "969\n");
      fflush(_coverage_fout);
      }
      break;
    }
    {
    fprintf(_coverage_fout, "970\n");
    fflush(_coverage_fout);
    }
    hp->hash = -1L;
    {
    fprintf(_coverage_fout, "971\n");
    fflush(_coverage_fout);
    }
    i --;
    {
    fprintf(_coverage_fout, "972\n");
    fflush(_coverage_fout);
    }
    hp --;
  }
  {
  fprintf(_coverage_fout, "973\n");
  fflush(_coverage_fout);
  }
  return;
}
}
static void LZWCleanup(TIFF *tif ) 
{ 


  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "974\n");
  fflush(_coverage_fout);
  }
  TIFFPredictorCleanup(tif);
  {
  fprintf(_coverage_fout, "975\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )tif->tif_data != (unsigned long )((tidata_t )0)) {
    {
    fprintf(_coverage_fout, "976\n");
    fflush(_coverage_fout);
    }

  } else {
    {
    fprintf(_coverage_fout, "977\n");
    fflush(_coverage_fout);
    }
    __assert_fail("tif->tif_data != 0", "tif_lzw.c", 1007U, "LZWCleanup");
  }
  {
  fprintf(_coverage_fout, "978\n");
  fflush(_coverage_fout);
  }
  if (((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab) {
    {
    fprintf(_coverage_fout, "979\n");
    fflush(_coverage_fout);
    }
    _TIFFfree((tdata_t )((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab);
  } else {
    {
    fprintf(_coverage_fout, "980\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "981\n");
  fflush(_coverage_fout);
  }
  if (((LZWCodecState *)((LZWBaseState *)tif->tif_data))->enc_hashtab) {
    {
    fprintf(_coverage_fout, "982\n");
    fflush(_coverage_fout);
    }
    _TIFFfree((tdata_t )((LZWCodecState *)((LZWBaseState *)tif->tif_data))->enc_hashtab);
  } else {
    {
    fprintf(_coverage_fout, "983\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "984\n");
  fflush(_coverage_fout);
  }
  _TIFFfree((tdata_t )tif->tif_data);
  {
  fprintf(_coverage_fout, "985\n");
  fflush(_coverage_fout);
  }
  tif->tif_data = (tidata_t )((void *)0);
  {
  fprintf(_coverage_fout, "986\n");
  fflush(_coverage_fout);
  }
  _TIFFSetDefaultCompressionState(tif);
  {
  fprintf(_coverage_fout, "987\n");
  fflush(_coverage_fout);
  }
  return;
}
}
int TIFFInitLZW(TIFF *tif , int scheme ) 
{ 
  tdata_t tmp ;

  {
  {
  if (_coverage_fout == 0) {
    {
    _coverage_fout = fopen("/home/vagrant/benchmarks/tse-2012/tiff/./coverage/cov.tmp",
                           "wb");
    }
  }
  }
  {
  fprintf(_coverage_fout, "988\n");
  fflush(_coverage_fout);
  }
  if (scheme == 5) {
    {
    fprintf(_coverage_fout, "989\n");
    fflush(_coverage_fout);
    }

  } else {
    {
    fprintf(_coverage_fout, "990\n");
    fflush(_coverage_fout);
    }
    __assert_fail("scheme == 5", "tif_lzw.c", 1024U, "TIFFInitLZW");
  }
  {
  fprintf(_coverage_fout, "991\n");
  fflush(_coverage_fout);
  }
  tmp = _TIFFmalloc((tsize_t )sizeof(LZWCodecState ));
  {
  fprintf(_coverage_fout, "992\n");
  fflush(_coverage_fout);
  }
  tif->tif_data = (tidata_t )tmp;
  {
  fprintf(_coverage_fout, "993\n");
  fflush(_coverage_fout);
  }
  if ((unsigned long )tif->tif_data == (unsigned long )((void *)0)) {
    {
    fprintf(_coverage_fout, "994\n");
    fflush(_coverage_fout);
    }
    goto bad;
  } else {
    {
    fprintf(_coverage_fout, "995\n");
    fflush(_coverage_fout);
    }

  }
  {
  fprintf(_coverage_fout, "996\n");
  fflush(_coverage_fout);
  }
  ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_codetab = (code_t *)((void *)0);
  {
  fprintf(_coverage_fout, "997\n");
  fflush(_coverage_fout);
  }
  ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->dec_decode = (int (*)(TIFF * ,
                                                                            tidata_t  ,
                                                                            tsize_t  ,
                                                                            tsample_t  ))((void *)0);
  {
  fprintf(_coverage_fout, "998\n");
  fflush(_coverage_fout);
  }
  ((LZWCodecState *)((LZWBaseState *)tif->tif_data))->enc_hashtab = (hash_t *)((void *)0);
  {
  fprintf(_coverage_fout, "999\n");
  fflush(_coverage_fout);
  }
  ((LZWBaseState *)tif->tif_data)->rw_mode = tif->tif_mode;
  {
  fprintf(_coverage_fout, "1000\n");
  fflush(_coverage_fout);
  }
  tif->tif_setupdecode = & LZWSetupDecode;
  {
  fprintf(_coverage_fout, "1001\n");
  fflush(_coverage_fout);
  }
  tif->tif_predecode = & LZWPreDecode;
  {
  fprintf(_coverage_fout, "1002\n");
  fflush(_coverage_fout);
  }
  tif->tif_decoderow = & LZWDecode;
  {
  fprintf(_coverage_fout, "1003\n");
  fflush(_coverage_fout);
  }
  tif->tif_decodestrip = & LZWDecode;
  {
  fprintf(_coverage_fout, "1004\n");
  fflush(_coverage_fout);
  }
  tif->tif_decodetile = & LZWDecode;
  {
  fprintf(_coverage_fout, "1005\n");
  fflush(_coverage_fout);
  }
  tif->tif_setupencode = & LZWSetupEncode;
  {
  fprintf(_coverage_fout, "1006\n");
  fflush(_coverage_fout);
  }
  tif->tif_preencode = & LZWPreEncode;
  {
  fprintf(_coverage_fout, "1007\n");
  fflush(_coverage_fout);
  }
  tif->tif_postencode = & LZWPostEncode;
  {
  fprintf(_coverage_fout, "1008\n");
  fflush(_coverage_fout);
  }
  tif->tif_encoderow = & LZWEncode;
  {
  fprintf(_coverage_fout, "1009\n");
  fflush(_coverage_fout);
  }
  tif->tif_encodestrip = & LZWEncode;
  {
  fprintf(_coverage_fout, "1010\n");
  fflush(_coverage_fout);
  }
  tif->tif_encodetile = & LZWEncode;
  {
  fprintf(_coverage_fout, "1011\n");
  fflush(_coverage_fout);
  }
  tif->tif_cleanup = & LZWCleanup;
  {
  fprintf(_coverage_fout, "1012\n");
  fflush(_coverage_fout);
  }
  TIFFPredictorInit(tif);
  {
  fprintf(_coverage_fout, "1013\n");
  fflush(_coverage_fout);
  }
  return (1);
  {
  fprintf(_coverage_fout, "1014\n");
  fflush(_coverage_fout);
  }
  bad: 
  TIFFErrorExt(tif->tif_clientdata, "TIFFInitLZW",
               "No space for LZW state block");
  {
  fprintf(_coverage_fout, "1015\n");
  fflush(_coverage_fout);
  }
  return (0);
}
}
